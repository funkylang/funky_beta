#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  string__2290951117 = 1,
  func__std___sequence
};

enum {
  var_no__std_types___sequence = FIRST_VAR+0,
  var_no__subtype_of,
  var_no__std___is_a_sequence,
  var_no__std_types___object,
  var_no__is_a_sequence,
  var_no__std___sequence,
  var_no__false,
  var_no__true,
  var_no__std__sequence__args = 4,
  var_no__new = FIRST_VAR+8
};

static TAB_NUM tfunc__std___sequence[] = {
  1, // locals
  -1, // parameters:
  REST_PARAMETER, var_no__std__sequence__args,
  // 47: new std_types::sequence args
  var_no__new, 2, var_no__std_types___sequence, var_no__std__sequence__args, -1
};


static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_STRING_8, 8, {.str_8 = "sequence"}},
  {FLT_FUNCTION, -1, {.tfunc = tfunc__std___sequence}}
};

static ATTRIBUTE_DEFINITION std_types___sequence__attributes[] = {
  {-var_no__is_a_sequence, -var_no__true},
  {-var_no__subtype_of, string__2290951117}
};

static ATTRIBUTE_DEFINITION std_types___object__attributes[] = {
  {-var_no__is_a_sequence, -var_no__false}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_UNKNOWN, 0, 2,
    "sequence\000std_types", std_types___sequence__attributes,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "subtype_of\000", NULL,
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_sequence\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types___object__attributes,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_sequence\000", NULL,
  },
  {
    FOT_INITIALIZED, 0, 0,
    "sequence\000std", NULL,
    {.const_idx = func__std___sequence}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
  }
};

FUNKY_MODULE module__basic__types__collections__lists__sequence = {
  "_basic__types__collections__lists__sequence",
  "/home/leachim/source/cmds/funky/master/basic/types/collections/lists/sequence.fky",
  0, 0,
  0, 1,
  2, 9,
  NULL,
  NULL, used_namespaces,
  constants_table, variables_table
};
