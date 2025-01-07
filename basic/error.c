#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std__Error = -1,
  chr_10 = -2,
  str_ERROR = -3,
  func_std__to_error_message_string = -4,
  lambda_1 = -5,
  string_1 = -6,
  lambda_2 = -7,
  lambda_3 = -8,
  lambda_4 = -9,
  string_2 = -10,
  string_3 = -11,
  lambda_5 = -12,
  lambda_6 = -13,
  lambda_7 = -14,
  string_4 = -15,
  string_5 = -16,
  func_std__unreachable = -17,
  str_control_flow_rea = -18
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
  var_std__to_error_message_string, // initialized
  var_74_4_str, // dynamic
  var_error_message_text_of, // extern
  var_75_4_errno, // dynamic
  var_errno_of, // extern
  var_76_4_details, // dynamic
  var_error_details_of, // extern
  var_is_defined, // extern
  var_strerror, // extern
  var_append, // extern
  var_update_if, // extern
  var_is_undefined, // extern
  var_is_a_string, // extern
  var_std__string, // extern
  var_to_string, // extern
  var_is_an_error, // extern
  var_if, // extern
  var_std__unreachable, // initialized
  var_error, // extern
  var__END
};


static TAB_NUM t_func_std__Error[] = {
  3, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(3), // 65_5_args
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
  POS(68, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std__Error = {
  t_func_std__Error, NULL, 4, 1,
  {"65_5_args\000"}
};

static TAB_NUM t_func_std__to_error_message_string[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 72_5_err
  // $str error_message_text_of(err)
  var_error_message_text_of, 1, LOCAL(2), 1, var_74_4_str,
  // $errno errno_of(err)
  var_errno_of, 1, LOCAL(2), 1, var_75_4_errno,
  // $details error_details_of(err)
  var_error_details_of, 1, LOCAL(2), 1, var_76_4_details,
  // is_defined &str -> append(str " - " strerror(errno))
  var_is_defined, 1, var_75_4_errno, 1, LOCAL(1),
  // update_if errno.is_defined &str -> append(str " - " strerror(errno))
  var_update_if, 3, LOCAL(1), var_74_4_str, lambda_1, 1, var_74_4_str,
  // is_undefined
  var_is_undefined, 1, var_76_4_details, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2, lambda_3, TAIL_CALL,
  POS(74, 3),
  POS(75, 3),
  POS(76, 3),
  POS(77, 19),
  POS(77, 3),
  POS(79, 13),
  POS(78, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std__to_error_message_string = {
  t_func_std__to_error_message_string, NULL, 7, 1,
  {"72_5_err\000"}
};

static TAB_NUM t_lambda_1[] = {
  2, // locals
  0, // parameters
  // strerror(errno))
  var_strerror, 1, var_75_4_errno, 1, LOCAL(1),
  // append(str " - " strerror(errno))
  var_append, 3, var_74_4_str, string_1, LOCAL(1), 1, LOCAL(2),
  //  append(str " - " strerror(errno))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(77, 55),
  POS(77, 38),
  POS(77, 37)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_74_4_str, TAIL_CALL,
  POS(80, 7)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // is_a_string
  var_is_a_string, 1, var_76_4_details, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_4, lambda_5, TAIL_CALL,
  POS(83, 17),
  POS(82, 7)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 4, var_74_4_str, string_2, var_76_4_details, string_3, 1, LOCAL(1),
  //  "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(84, 12),
  POS(84, 11)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // to_string &details
  var_to_string, 1, var_76_4_details, 1, var_76_4_details,
  // is_an_error
  var_is_an_error, 1, var_76_4_details, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, lambda_7, TAIL_CALL,
  POS(87, 11),
  POS(89, 21),
  POS(88, 11)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_74_4_str, TAIL_CALL,
  POS(90, 15)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // "@(str) (@(details))"
  var_std__string, 4, var_74_4_str, string_4, var_76_4_details, string_5, 1, LOCAL(1),
  //  "@(str) (@(details))"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(91, 16),
  POS(91, 15)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std__unreachable[] = {
  0, // locals
  0, // parameters
  // error "
  var_error, 1, str_control_flow_rea, TAIL_CALL,
  POS(97, 3)
};

static FUNCTION_INFO i_func_std__unreachable = {
  t_func_std__unreachable, NULL, 1, 0,
  {}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__Error}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_STRING_8, 7, {.str_8 = "ERROR: "}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__to_error_message_string}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_STRING_8, 3, {.str_8 = " - "}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_STRING_8, 3, {.str_8 = " (\042"}},
  {FLT_STRING_8, 2, {.str_8 = "\042)"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_STRING_8, 2, {.str_8 = " ("}},
  {FLT_STRING_8, 1, {.str_8 = ")"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__unreachable}},
  {FLT_STRING_8, 41, {.str_8 = "control flow reached \042unreachable\042 point\012"}}
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
  },
  {
    FOT_INITIALIZED, 0, 0,
    "to_error_message_string\000std", NULL,
    {.const_idx = -func_std__to_error_message_string}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "74_4_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error_message_text_of\000", NULL,
    {.position = POS(74, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "75_4_errno\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "errno_of\000", NULL,
    {.position = POS(75, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "76_4_details\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error_details_of\000", NULL,
    {.position = POS(76, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(77, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "strerror\000", NULL,
    {.position = POS(77, 55)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(77, 38)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(77, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(79, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(83, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(84, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_string\000", NULL,
    {.position = POS(87, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(89, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(88, 11)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "unreachable\000std", NULL,
    {.const_idx = -func_std__unreachable}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error\000", NULL,
    {.position = POS(97, 3)}
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
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  18, // number of constants
  26, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
