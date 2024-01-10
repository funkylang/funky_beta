#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std__Error = -1,
  chr_10 = -2,
  str_ERROR = -3
};

enum {
  var__START = FIRST_VAR-1,
  var_std__Error, // initialized
  var_create_string, // extern
  var_without_suffix, // extern
  var_eprintln, // extern
  var_EXIT_FAILURE, // extern
  var_exit, // extern
  var_std__assign, // extern
  var__END
};


static TAB_NUM t_func_std__Error[] = {
  3, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(3), // 65_0_args
  // create_string(args) .without_suffix. '@nl;'
  var_create_string, 1, LOCAL(3), 1, LOCAL(1),
  // create_string(args) .without_suffix. '@nl;'
  var_without_suffix, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // eprintln! "ERROR: " create_string(args) .without_suffix. '@nl;'
  var_eprintln, 2, str_ERROR, LOCAL(2), IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(67, 23),
  POS(67, 23),
  POS(67, 3),
  POS(68, 3)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__Error}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_STRING_8, 7, {.str_8 = "ERROR: "}}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_INITIALIZED, 0, 0,
    "Error\000std", NULL,
    {.const_idx = -func_std__Error}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(67, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "without_suffix\000", NULL,
    {.position = POS(67, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprintln\000", NULL,
    {.position = POS(67, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXIT_FAILURE\000", NULL,
    {.position = POS(68, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exit\000", NULL,
    {.position = POS(68, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(51, 1)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__error = {
  "_basic__error", // module name
  "basic/error.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  3, // number of constants
  7, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
