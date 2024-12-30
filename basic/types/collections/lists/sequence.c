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
  lambda_2 = -5,
  minus_num_1 = -6,
  lambda_3 = -7,
  lambda_4 = -8,
  lambda_5 = -9,
  lambda_6 = -10,
  lambda_7 = -11,
  lambda_8 = -12,
  lambda_9 = -13,
  lambda_captured_item_is_defined = -14,
  lambda_10 = -15,
  func_std__sequence = -16
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
  var_63_5_self, // dynamic
  var_64_5_str, // dynamic
  var_result_count, // extern
  var_67_4_pos, // dynamic
  var_std__equal, // extern
  var_range, // extern
  var_72_41_len, // dynamic
  var_is_undefined, // extern
  var_undefined, // extern
  var_plus, // extern
  var_next, // extern
  var_if, // extern
  var_std__minus, // extern
  var_for_each, // extern
  var_81_8_captured_items, // dynamic
  var_empty_list, // extern
  var_84_41_len, // dynamic
  var_84_46_captured_item, // dynamic
  var_is_defined, // extern
  var_push, // extern
  var_std__sequence, // initialized
  var_new, // extern
  var__END
};


static TAB_NUM t_func_std_types__sequence___match[] = {
  2, // locals
  2, // parameters
  var_63_5_self,
  var_64_5_str,
  // $rc result_count()
  var_result_count, 0, 1, LOCAL(2),
  // $pos 1
  LET, 1, num_1, 1, var_67_4_pos,
  // rc == 1:
  var_std__equal, 2, LOCAL(2), num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_6, TAIL_CALL,
  POS(66, 3),
  POS(67, 3),
  POS(69, 5),
  POS(68, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  // for_each self
  var_for_each, 3, var_63_5_self, lambda_2, lambda_5, TAIL_CALL,
  POS(70, 7)
};

static TAB_NUM t_lambda_2[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 71_12_item
  // range(str pos -1) $len
  var_range, 3, var_64_5_str, var_67_4_pos, minus_num_1, 1, LOCAL(1),
  // match item range(str pos -1) $len
  var_match, 2, LOCAL(2), LOCAL(1), 1, var_72_41_len,
  // is_undefined
  var_is_undefined, 1, var_72_41_len, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(72, 22),
  POS(72, 11),
  POS(74, 17),
  POS(73, 11)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(75, 15)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  // plus &pos len
  var_plus, 2, var_67_4_pos, var_72_41_len, 1, var_67_4_pos,
  // next
  var_next, 0, TAIL_CALL,
  POS(77, 15),
  POS(78, 15)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // pos-1
  var_std__minus, 2, var_67_4_pos, num_1, 1, LOCAL(1),
  //  pos-1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(79, 12),
  POS(79, 11)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // $captured_items empty_list
  LET, 1, var_empty_list, 1, var_81_8_captured_items,
  // for_each self
  var_for_each, 3, var_63_5_self, lambda_7, lambda_10, TAIL_CALL,
  POS(81, 7),
  POS(82, 7)
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 83_12_item
  // range(str pos -1) $len $captured_item
  var_range, 3, var_64_5_str, var_67_4_pos, minus_num_1, 1, LOCAL(1),
  // match item range(str pos -1) $len $captured_item
  var_match, 2, LOCAL(2), LOCAL(1), 2, var_84_41_len, var_84_46_captured_item,
  // is_undefined
  var_is_undefined, 1, var_84_41_len, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(84, 22),
  POS(84, 11),
  POS(86, 17),
  POS(85, 11)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(87, 15)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // plus &pos len
  var_plus, 2, var_67_4_pos, var_84_41_len, 1, var_67_4_pos,
  // is_defined:
  var_is_defined, 1, var_84_46_captured_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_captured_item_is_defined, var_next, TAIL_CALL,
  POS(89, 15),
  POS(91, 31),
  POS(90, 15)
};

static TAB_NUM t_lambda_captured_item_is_defined[] = {
  0, // locals
  0, // parameters
  // push &captured_items captured_item
  var_push, 2, var_81_8_captured_items, var_84_46_captured_item, 1, var_81_8_captured_items,
  // next
  var_next, 0, TAIL_CALL,
  POS(92, 19),
  POS(93, 19)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // pos-1 captured_items
  var_std__minus, 2, var_67_4_pos, num_1, 1, LOCAL(1),
  //  pos-1 captured_items
  LET, 2, LOCAL(1), var_81_8_captured_items, TAIL_CALL,
  POS(95, 12),
  POS(95, 11)
};

static TAB_NUM t_func_std__sequence[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 105_5_args
  // new std_types::sequence args
  var_new, 2, var_std_types__sequence, LOCAL(1), TAIL_CALL,
  POS(107, 3)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_STRING_8, 8, {.str_8 = "sequence"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__sequence___match}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_captured_item_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
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
    {.position = POS(25, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "subtype_of\000", NULL,
    {.position = POS(25, 22)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_sequence\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(29, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(31, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_sequence\000", NULL,
    {.position = POS(31, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(31, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(37, 36)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match\000", NULL,
    {.position = POS(39, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "63_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "64_5_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(66, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "67_4_pos\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(69, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(72, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "72_41_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(74, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(75, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(77, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(78, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(73, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(79, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(70, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "81_8_captured_items\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(81, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "84_41_len\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "84_46_captured_item\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(91, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(92, 19)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "sequence\000std", NULL,
    {.const_idx = -func_std__sequence}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(107, 3)}
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
  16, // number of constants
  31, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
