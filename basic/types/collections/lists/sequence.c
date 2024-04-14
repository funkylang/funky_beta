#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  str_sequence = -1,
  func_std_types__sequence___match = -2,
  num_1 = -3,
  lambda_1 = -4,
  minus_num_1 = -5,
  lambda_2 = -6,
  lambda_3 = -7,
  lambda_4 = -8,
  func_std__sequence = -9
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
  var_match, // extern polymorphic
  var_62_0_str, // dynamic
  var_64_1_pos, // dynamic
  var_range, // extern
  var_67_1_len, // dynamic
  var_is_undefined, // extern
  var_undefined, // extern
  var_plus, // extern
  var_next, // extern
  var_if, // extern
  var_std__minus, // extern
  var_for_each, // extern
  var_std__sequence, // initialized
  var_new, // extern
  var__END
};


static TAB_NUM t_func_std_types__sequence___match[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 61_0_self
  var_62_0_str,
  // $pos 1
  LET, 1, num_1, 1, var_64_1_pos,
  // for_each self
  var_for_each, 3, LOCAL(1), lambda_1, lambda_4, TAIL_CALL,
  POS(64, 3),
  POS(65, 3)
};

static TAB_NUM t_lambda_1[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 66_3_item
  // range(str pos -1))
  var_range, 3, var_62_0_str, var_64_1_pos, minus_num_1, 1, LOCAL(1),
  // $len match(item range(str pos -1))
  var_match, 2, LOCAL(2), LOCAL(1), 1, var_67_1_len,
  // is_undefined
  var_is_undefined, 1, var_67_1_len, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2, lambda_3, TAIL_CALL,
  POS(67, 23),
  POS(67, 7),
  POS(69, 13),
  POS(68, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(70, 11)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  // plus &pos len
  var_plus, 2, var_64_1_pos, var_67_1_len, 1, var_64_1_pos,
  // next
  var_next, 0, TAIL_CALL,
  POS(72, 11),
  POS(73, 11)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // pos-1
  var_std__minus, 2, var_64_1_pos, num_1, 1, LOCAL(1),
  //  pos-1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(74, 8),
  POS(74, 7)
};

static TAB_NUM t_func_std__sequence[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 84_0_args
  // new std_types::sequence args
  var_new, 2, var_std_types__sequence, LOCAL(1), TAIL_CALL,
  POS(86, 3)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_STRING_8, 8, {.str_8 = "sequence"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__sequence___match}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__sequence}}
};

static ATTRIBUTE_DEFINITION std_types__sequence__attributes[] = {
  {-var_subtype_of, -str_sequence},
  {-var_is_a_sequence, -var_true},
  {var_match, -func_std_types__sequence___match}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_sequence, -var_false}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_UNKNOWN, 0, 3,
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
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match\000", NULL,
    {.position = POS(37, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "62_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "64_1_pos\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(67, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "67_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(69, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(70, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(72, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(73, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(68, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(74, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(65, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "sequence\000std", NULL,
    {.const_idx = -func_std__sequence}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(86, 3)}
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
  9, // number of constants
  22, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
