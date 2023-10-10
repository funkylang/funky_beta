#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std_types__list___collect_literals = -1,
  func_collect_literal = -2,
  func_funky_types__definition___collect_literals = -3,
  lambda_1 = -4,
  lambda_2 = -5,
  func_funky_types__redefinition___collect_literals = -6,
  lambda_3 = -7,
  lambda_info_is_defined = -8,
  lambda_4 = -9,
  lambda_5 = -10,
  lambda_6 = -11,
  lambda_7 = -12,
  func_funky_types__body___collect_literals = -13
};

enum {
  var__START = FIRST_VAR-1,
  var_funky__collect_literals, // attribute
  var_std__assign, // extern
  var_std_types__list, // extern
  var_collect_literals, // extern polymorphic
  var_merge, // extern
  var_empty_insert_order_set, // extern
  var_map_reduce, // extern
  var_funky_types__numeric_literal, // extern
  var_funky_types__character_sequence, // extern
  var_funky_types__numeric_character_literal, // extern
  var_funky_types__unique, // extern
  var_funky_types__attribute, // extern
  var_funky_types__attribute_with_setter, // extern
  var_insert_order_set, // extern
  var_funky_types__definition, // extern
  var_identifier_of, // extern
  var_variables, // extern
  var_42_38_value, // dynamic
  var_CONSTANT_COMPOUND, // extern
  var_INITIALIZED_COMPOUND, // extern
  var_std__sequence, // extern
  var_case, // extern
  var_funky_types__redefinition, // extern
  var_48_46_self, // dynamic
  var_kind_of, // extern
  var_TEMPORARY, // extern
  var_std__equal, // extern
  var_51_1_info, // dynamic
  var_is_defined, // extern
  var_54_12_value, // dynamic
  var_if, // extern
  var_funky_types__body, // extern
  var_funky__parameters_of, // extern
  var_funky__statement_of, // extern
  var_funky__statements_of, // extern
  var__END
};


static TAB_NUM t_func_std_types__list___collect_literals[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 29_36_self
  // map_reduce self collect_literals merge empty_insert_order_set
  var_map_reduce, 4, LOCAL(1), var_collect_literals, var_merge, var_empty_insert_order_set, TAIL_CALL,
  POS(30, 3)
};

static TAB_NUM t_func_collect_literal[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 39_19_self
  // insert_order_set(self)
  var_insert_order_set, 1, LOCAL(2), 1, LOCAL(1),
  // -> insert_order_set(self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(39, 29),
  POS(39, 26)
};

static TAB_NUM t_func_funky_types__definition___collect_literals[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 41_44_self
  // identifier_of(self)) $kind $value
  var_identifier_of, 1, LOCAL(3), 1, LOCAL(1),
  // variables(identifier_of(self)) $kind $value
  var_variables, 1, LOCAL(1), 1, LOCAL(2),
  // variables(identifier_of(self)) $kind $value
  LOCAL(2), 0, 2, LOCAL(4), var_42_38_value,
  // CONSTANT_COMPOUND, INITIALIZED_COMPOUND
  var_std__sequence, 2, var_CONSTANT_COMPOUND, var_INITIALIZED_COMPOUND, 1, LOCAL(1),
  // case kind
  var_case, 4, LOCAL(4), LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(42, 13),
  POS(42, 3),
  POS(42, 3),
  POS(44, 5),
  POS(43, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // insert_order_set(value)
  var_insert_order_set, 1, var_42_38_value, 1, LOCAL(1),
  //  insert_order_set(value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(45, 8),
  POS(45, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  empty_insert_order_set
  LET, 1, var_empty_insert_order_set, TAIL_CALL,
  POS(46, 7)
};

static TAB_NUM t_func_funky_types__redefinition___collect_literals[] = {
  2, // locals
  1, // parameters
  var_48_46_self,
  // kind_of(self) == TEMPORARY:
  var_kind_of, 1, var_48_46_self, 1, LOCAL(1),
  // kind_of(self) == TEMPORARY:
  var_std__equal, 2, LOCAL(1), var_TEMPORARY, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_3, lambda_7, TAIL_CALL,
  POS(50, 5),
  POS(50, 5),
  POS(49, 3)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // identifier_of(self))
  var_identifier_of, 1, var_48_46_self, 1, LOCAL(1),
  // $info variables(identifier_of(self))
  var_variables, 1, LOCAL(1), 1, var_51_1_info,
  // is_defined:
  var_is_defined, 1, var_51_1_info, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_info_is_defined, lambda_6, TAIL_CALL,
  POS(51, 23),
  POS(51, 7),
  POS(53, 14),
  POS(52, 7)
};

static TAB_NUM t_lambda_info_is_defined[] = {
  2, // locals
  0, // parameters
  // info $kind $value
  var_51_1_info, 0, 2, LOCAL(2), var_54_12_value,
  // CONSTANT_COMPOUND, INITIALIZED_COMPOUND
  var_std__sequence, 2, var_CONSTANT_COMPOUND, var_INITIALIZED_COMPOUND, 1, LOCAL(1),
  // case kind
  var_case, 4, LOCAL(2), LOCAL(1), lambda_4, lambda_5, TAIL_CALL,
  POS(54, 11),
  POS(56, 13),
  POS(55, 11)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // insert_order_set(value)
  var_insert_order_set, 1, var_54_12_value, 1, LOCAL(1),
  //  insert_order_set(value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(57, 16),
  POS(57, 15)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  empty_insert_order_set
  LET, 1, var_empty_insert_order_set, TAIL_CALL,
  POS(58, 15)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  empty_insert_order_set
  LET, 1, var_empty_insert_order_set, TAIL_CALL,
  POS(59, 11)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  empty_insert_order_set
  LET, 1, var_empty_insert_order_set, TAIL_CALL,
  POS(60, 7)
};

static TAB_NUM t_func_funky_types__body___collect_literals[] = {
  5, // locals
  1, // parameters
  LOCAL(2), // 62_38_self
  // funky::parameters_of(self) $result_set
  var_funky__parameters_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::parameters_of(self) $result_set
  var_map_reduce, 4, LOCAL(1), var_collect_literals, var_merge, var_empty_insert_order_set, 1, LOCAL(3),
  // insert_order_set(self) &result_set
  var_insert_order_set, 1, LOCAL(2), 1, LOCAL(1),
  // merge insert_order_set(self) &result_set
  var_merge, 2, LOCAL(1), LOCAL(3), 1, LOCAL(3),
  // funky::statement_of(self) $statement_result_set
  var_funky__statement_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_literals funky::statement_of(self) $statement_result_set
  var_collect_literals, 1, LOCAL(1), 1, LOCAL(4),
  // merge &result_set statement_result_set
  var_merge, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // funky::statements_of(self) $statements_result_set
  var_funky__statements_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::statements_of(self) $statements_result_set
  var_map_reduce, 4, LOCAL(1), var_collect_literals, var_merge, var_empty_insert_order_set, 1, LOCAL(5),
  // merge &result_set statements_result_set
  var_merge, 2, LOCAL(3), LOCAL(5), 1, LOCAL(3),
  // -> result_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(63, 14),
  POS(63, 3),
  POS(65, 9),
  POS(65, 3),
  POS(66, 20),
  POS(66, 3),
  POS(67, 3),
  POS(68, 14),
  POS(68, 3),
  POS(70, 3),
  POS(71, 3)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__list___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collect_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__definition___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__redefinition___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_info_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__body___collect_literals}}
};

static ATTRIBUTE_DEFINITION std_types__list__attributes[] = {
  {var_collect_literals, -func_std_types__list___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__numeric_literal__attributes[] = {
  {var_collect_literals, -func_collect_literal}
};

static ATTRIBUTE_DEFINITION funky_types__character_sequence__attributes[] = {
  {var_collect_literals, -func_collect_literal}
};

static ATTRIBUTE_DEFINITION funky_types__numeric_character_literal__attributes[] = {
  {var_collect_literals, -func_collect_literal}
};

static ATTRIBUTE_DEFINITION funky_types__unique__attributes[] = {
  {var_collect_literals, -func_collect_literal}
};

static ATTRIBUTE_DEFINITION funky_types__attribute__attributes[] = {
  {-var_collect_literals, -var_empty_insert_order_set}
};

static ATTRIBUTE_DEFINITION funky_types__attribute_with_setter__attributes[] = {
  {-var_collect_literals, -var_empty_insert_order_set}
};

static ATTRIBUTE_DEFINITION funky_types__definition__attributes[] = {
  {var_collect_literals, -func_funky_types__definition___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__redefinition__attributes[] = {
  {var_collect_literals, -func_funky_types__redefinition___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__body__attributes[] = {
  {var_collect_literals, -func_funky_types__body___collect_literals}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "collect_literals\000funky", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "list\000std_types", std_types__list__attributes
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "collect_literals\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "merge\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_set\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "numeric_literal\000funky_types", funky_types__numeric_literal__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "character_sequence\000funky_types", funky_types__character_sequence__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "numeric_character_literal\000funky_types", funky_types__numeric_character_literal__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "unique\000funky_types", funky_types__unique__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "attribute\000funky_types", funky_types__attribute__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "attribute_with_setter\000funky_types", funky_types__attribute_with_setter__attributes
  },
  {
    FOT_UNKNOWN, 0, 0,
    "insert_order_set\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "definition\000funky_types", funky_types__definition__attributes
  },
  {
    FOT_UNKNOWN, 0, 0,
    "identifier_of\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "variables\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "42_38_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CONSTANT_COMPOUND\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "INITIALIZED_COMPOUND\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "redefinition\000funky_types", funky_types__redefinition__attributes
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "48_46_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "kind_of\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "TEMPORARY\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "51_1_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "54_12_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "body\000funky_types", funky_types__body__attributes
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameters_of\000funky", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "statement_of\000funky", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "statements_of\000funky", NULL
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0},
  {"funky", 1, 0}
};

FUNKY_MODULE module__collect_literals = {
  "_collect_literals", // module name
  "collect_literals.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  2, // number of used namespaces
  13, // number of constants
  35, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
