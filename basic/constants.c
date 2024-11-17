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
  uni_std__SORT = -4,
  uni_std__UUID = -5,
  uni_std__ADDRESS = -6,
  uni_std__PORT_NO = -7,
  uni_std__LOG_FILE = -8,
  uni_std__PARSE_ERROR = -9
};

enum {
  var__START = FIRST_VAR-1,
  var_std__UTF8, // initialized
  var_std__assign, // extern
  var_std__LATIN1, // initialized
  var_std__ENCODING, // initialized
  var_std__SORT, // initialized
  var_std__UUID, // initialized
  var_std__ADDRESS, // initialized
  var_std__PORT_NO, // initialized
  var_std__LOG_FILE, // initialized
  var_std__PARSE_ERROR, // initialized
  var__END
};


static FUNKY_CONSTANT constants_table[] = {
  {FLT_UNIQUE, 0, {.str_8 = "std::UTF8"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::LATIN1"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::ENCODING"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::SORT"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::UUID"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::ADDRESS"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::PORT_NO"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::LOG_FILE"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::PARSE_ERROR"}}
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
    {.position = POS(25, 1)}
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
    "SORT\000std", NULL,
    {.const_idx = -uni_std__SORT}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "UUID\000std", NULL,
    {.const_idx = -uni_std__UUID}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ADDRESS\000std", NULL,
    {.const_idx = -uni_std__ADDRESS}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "PORT_NO\000std", NULL,
    {.const_idx = -uni_std__PORT_NO}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LOG_FILE\000std", NULL,
    {.const_idx = -uni_std__LOG_FILE}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "PARSE_ERROR\000std", NULL,
    {.const_idx = -uni_std__PARSE_ERROR}
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
  9, // number of constants
  10, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
