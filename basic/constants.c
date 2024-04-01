#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  uni_std__UTF8 = -1,
  uni_std__LATIN1 = -2,
  uni_std__ENCODING = -3,
  uni_std__UUID = -4,
  uni_std__SERVER = -5
};

enum {
  var__START = FIRST_VAR-1,
  var_std__UTF8, // initialized
  var_std__assign, // extern
  var_std__LATIN1, // initialized
  var_std__ENCODING, // initialized
  var_std__UUID, // initialized
  var_std__SERVER, // initialized
  var__END
};


static FUNKY_CONSTANT constants_table[] = {
  {FLT_UNIQUE, 0, {.str_8 = "std::UTF8"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::LATIN1"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::ENCODING"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::UUID"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::SERVER"}}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_INITIALIZED, 0, 0,
    "UTF8\000std", NULL,
    {.const_idx = -uni_std__UTF8}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(23, 1)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LATIN1\000std", NULL,
    {.const_idx = -uni_std__LATIN1}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ENCODING\000std", NULL,
    {.const_idx = -uni_std__ENCODING}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "UUID\000std", NULL,
    {.const_idx = -uni_std__UUID}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SERVER\000std", NULL,
    {.const_idx = -uni_std__SERVER}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__constants = {
  "_basic__constants", // module name
  "basic/constants.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  5, // number of constants
  6, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
