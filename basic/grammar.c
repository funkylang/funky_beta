#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std_types__FUNKY_IDENTIFIER___match = -1,
  num_0 = -2,
  func_word_start = -3,
  lambda_1 = -4,
  lambda_2 = -5,
  chr_97 = -6,
  chr_122 = -7,
  value_range_73_1 = -8,
  chr_65 = -9,
  chr_90 = -10,
  value_range_73_13 = -11,
  sequence_73_1 = -12,
  lambda_3 = -13,
  func_within_word = -14,
  lambda_4 = -15,
  lambda_5 = -16,
  chr_48 = -17,
  chr_57 = -18,
  value_range_84_25 = -19,
  sequence_84_13 = -20,
  sequence_84_1 = -21,
  chr_95 = -22,
  lambda_6 = -23,
  num_1 = -24
};

enum {
  var__START = FIRST_VAR-1,
  var_std__match, // attribute
  var_std__assign, // extern
  var_std__search, // attribute
  var_std_types__FUNKY_IDENTIFIER, // derived
  var_std_types__object, // extern
  var_std__FUNKY_IDENTIFIER, // derived
  var_match, // extern polymorphic
  var_59_0_str, // dynamic
  var_61_1_i, // dynamic
  var_62_1_n, // dynamic
  var_length_of, // extern
  var_inc, // extern
  var_std__less, // extern
  var_undefined, // extern
  var_std__value_range, // extern
  var_std__sequence, // extern
  var_case, // extern
  var_if, // extern
  var_std__minus, // extern
  var__END
};


static TAB_NUM t_func_std_types__FUNKY_IDENTIFIER___match[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  var_59_0_str,
  // $i 0
  LET, 1, num_0, 1, var_61_1_i,
  // $n length_of(str)
  var_length_of, 1, var_59_0_str, 1, var_62_1_n,
  // word_start
  func_word_start, 0, TAIL_CALL,
  POS(61, 3),
  POS(62, 3),
  POS(63, 3)
};

static TAB_NUM t_func_word_start[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_61_1_i, 1, var_61_1_i,
  // n
  var_std__less, 2, var_62_1_n, var_61_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(66, 5),
  POS(68, 11),
  POS(67, 5)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(69, 9)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // $chr str(i)
  var_59_0_str, 1, var_61_1_i, 1, LOCAL(1),
  // case chr
  var_case, 4, LOCAL(1), sequence_73_1, func_within_word, lambda_3, TAIL_CALL,
  POS(71, 9),
  POS(72, 9)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(74, 13)
};

static TAB_NUM t_func_within_word[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_61_1_i, 1, var_61_1_i,
  // n
  var_std__less, 2, var_62_1_n, var_61_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_4, lambda_5, TAIL_CALL,
  POS(77, 5),
  POS(79, 11),
  POS(78, 5)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  n
  LET, 1, var_62_1_n, TAIL_CALL,
  POS(80, 9)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // $chr str(i)
  var_59_0_str, 1, var_61_1_i, 1, LOCAL(1),
  // case chr
  var_case, 6, LOCAL(1), sequence_84_1, func_within_word, chr_95, func_word_start, lambda_6, TAIL_CALL,
  POS(82, 9),
  POS(83, 9)
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // i-1
  var_std__minus, 2, var_61_1_i, num_1, 1, LOCAL(1),
  //  i-1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(86, 14),
  POS(86, 13)
};

static int value_range_73_1_arguments[] = {
  -chr_97, -chr_122
};

static int value_range_73_13_arguments[] = {
  -chr_65, -chr_90
};

static int sequence_73_1_arguments[] = {
  -value_range_73_1, -value_range_73_13
};

static int value_range_84_25_arguments[] = {
  -chr_48, -chr_57
};

static int sequence_84_13_arguments[] = {
  -value_range_73_13, -value_range_84_25
};

static int sequence_84_1_arguments[] = {
  -value_range_73_1, -sequence_84_13
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__FUNKY_IDENTIFIER___match}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_word_start}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_CHARACTER, 0, {.value = 97}},
  {FLT_CHARACTER, 0, {.value = 122}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_73_1_arguments}},
  {FLT_CHARACTER, 0, {.value = 65}},
  {FLT_CHARACTER, 0, {.value = 90}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_73_13_arguments}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_73_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_within_word}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_CHARACTER, 0, {.value = 48}},
  {FLT_CHARACTER, 0, {.value = 57}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_84_25_arguments}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_84_13_arguments}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_84_1_arguments}},
  {FLT_CHARACTER, 0, {.value = 95}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}}
};

static ATTRIBUTE_DEFINITION std_types__FUNKY_IDENTIFIER__attributes[] = {
  {var_match, -func_std_types__FUNKY_IDENTIFIER___match}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "match\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(28, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "search\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_DERIVED, 0, 1,
    "FUNKY_IDENTIFIER\000std_types", std_types__FUNKY_IDENTIFIER__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "object\000std_types", NULL,
    {.position = POS(52, 30)}
  },
  {
    FOT_DERIVED, 0, 0,
    "FUNKY_IDENTIFIER\000std", NULL,
    {"FUNKY_IDENTIFIER\000std_types"}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match\000", NULL,
    {.position = POS(56, 30)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "59_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "61_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "62_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(62, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(66, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(68, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(69, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "value_range\000std", NULL,
    {.position = POS(73, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(73, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(72, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(67, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(86, 14)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__grammar = {
  "_basic__grammar", // module name
  "basic/grammar.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  24, // number of constants
  19, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
