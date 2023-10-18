#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std_types__number___floor = -1,
  func_std_types__number___ceil = -2,
  func_std_types__number___round = -3,
  func_std_types__integer___serialize = -4,
  lambda_1 = -5,
  chr_10 = -6,
  func_std_types__real___serialize = -7,
  chr_46 = -8,
  lambda_2 = -9,
  string_1 = -10,
  lambda_3 = -11
};

enum {
  var__START = FIRST_VAR-1,
  var_std__is_a_number, // attribute
  var_std__assign, // extern
  var_std__is_an_integer, // attribute
  var_std_types__object, // extern
  var_is_a_number, // extern polymorphic
  var_false, // extern
  var_is_an_integer, // extern polymorphic
  var_std_types__number, // extern
  var_true, // extern
  var_std_types__integer, // extern
  var_floor, // extern polymorphic
  var_ceil, // extern polymorphic
  var_round, // extern polymorphic
  var_serialize, // extern polymorphic
  var_76_0_self, // dynamic
  var_77_0_indent, // dynamic
  var_undefined, // extern
  var_to_string, // extern
  var_is_defined, // extern
  var_tabs_and_spaces, // extern
  var_append, // extern
  var_update_if, // extern
  var_push, // extern
  var_std_types__real, // extern
  var_85_0_self, // dynamic
  var_86_0_indent, // dynamic
  var_contains, // extern
  var_not, // extern
  var__END
};


static TAB_NUM t_func_std_types__number___floor[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 54_0_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(56, 3)
};

static TAB_NUM t_func_std_types__number___ceil[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 62_0_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(64, 3)
};

static TAB_NUM t_func_std_types__number___round[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 70_0_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(72, 3)
};

static TAB_NUM t_func_std_types__integer___serialize[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_76_0_self,
  var_undefined, var_77_0_indent,
  // to_string &self
  var_to_string, 1, var_76_0_self, 1, var_76_0_self,
  // is_defined &self -> append(tabs_and_spaces(indent) self)
  var_is_defined, 1, var_77_0_indent, 1, LOCAL(1),
  // update_if indent.is_defined &self -> append(tabs_and_spaces(indent) self)
  var_update_if, 3, LOCAL(1), var_76_0_self, lambda_1, 1, var_76_0_self,
  // push self '@nl;'
  var_push, 2, var_76_0_self, chr_10, TAIL_CALL,
  POS(79, 3),
  POS(80, 20),
  POS(80, 3),
  POS(81, 3)
};

static TAB_NUM t_lambda_1[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) self)
  var_tabs_and_spaces, 1, var_77_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) self)
  var_append, 2, LOCAL(1), var_76_0_self, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) self)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(80, 47),
  POS(80, 40),
  POS(80, 39)
};

static TAB_NUM t_func_std_types__real___serialize[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_85_0_self,
  var_undefined, var_86_0_indent,
  // to_string &self
  var_to_string, 1, var_85_0_self, 1, var_85_0_self,
  // self .contains. '.') &self -> append(self ".0")
  var_contains, 2, var_85_0_self, chr_46, 1, LOCAL(1),
  // not(self .contains. '.') &self -> append(self ".0")
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // update_if not(self .contains. '.') &self -> append(self ".0")
  var_update_if, 3, LOCAL(2), var_85_0_self, lambda_2, 1, var_85_0_self,
  // is_defined &self -> append(tabs_and_spaces(indent) self)
  var_is_defined, 1, var_86_0_indent, 1, LOCAL(1),
  // update_if indent.is_defined &self -> append(tabs_and_spaces(indent) self)
  var_update_if, 3, LOCAL(1), var_85_0_self, lambda_3, 1, var_85_0_self,
  // push self '@nl;'
  var_push, 2, var_85_0_self, chr_10, TAIL_CALL,
  POS(88, 3),
  POS(89, 17),
  POS(89, 13),
  POS(89, 3),
  POS(90, 20),
  POS(90, 3),
  POS(91, 3)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // append(self ".0")
  var_append, 2, var_85_0_self, string_1, 1, LOCAL(1),
  //  append(self ".0")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(89, 47),
  POS(89, 46)
};

static TAB_NUM t_lambda_3[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) self)
  var_tabs_and_spaces, 1, var_86_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) self)
  var_append, 2, LOCAL(1), var_85_0_self, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) self)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(90, 47),
  POS(90, 40),
  POS(90, 39)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__number___floor}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__number___ceil}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__number___round}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__integer___serialize}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__real___serialize}},
  {FLT_CHARACTER, 0, {.value = 46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_STRING_8, 2, {.str_8 = ".0"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_number, -var_false},
  {-var_is_an_integer, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__number__attributes[] = {
  {-var_is_a_number, -var_true},
  {var_floor, -func_std_types__number___floor},
  {var_ceil, -func_std_types__number___ceil},
  {var_round, -func_std_types__number___round}
};

static ATTRIBUTE_DEFINITION std_types__integer__attributes[] = {
  {-var_is_an_integer, -var_true},
  {var_serialize, -func_std_types__integer___serialize}
};

static ATTRIBUTE_DEFINITION std_types__real__attributes[] = {
  {var_serialize, -func_std_types__real___serialize}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_number\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(23, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_an_integer\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(26, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_number\000", NULL,
    {.position = POS(26, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(26, 32)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_integer\000", NULL,
    {.position = POS(32, 20)}
  },
  {
    FOT_UNKNOWN, 0, 4,
    "number\000std_types", std_types__number__attributes,
    {.position = POS(38, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(38, 32)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "integer\000std_types", std_types__integer__attributes,
    {.position = POS(44, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "floor\000", NULL,
    {.position = POS(50, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "ceil\000", NULL,
    {.position = POS(58, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "round\000", NULL,
    {.position = POS(66, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(74, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "76_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "77_0_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(77, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_string\000", NULL,
    {.position = POS(79, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(80, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(80, 47)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(80, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(80, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(81, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "real\000std_types", std_types__real__attributes,
    {.position = POS(83, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "85_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "86_0_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "contains\000", NULL,
    {.position = POS(89, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(89, 13)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__number = {
  "_basic__types__number", // module name
  "basic/types/number.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  11, // number of constants
  28, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
