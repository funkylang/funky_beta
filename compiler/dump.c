#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_funky_types__node___to_string = -1,
  num_0 = -2,
  num_2 = -3,
  lambda_node_fields_ofself = -4,
  string_1 = -5,
  func_field_to_string = -6,
  lambda_1 = -7,
  lambda_2 = -8,
  chr_10 = -9,
  str___undefined = -10,
  lambda_3 = -11,
  lambda_4 = -12,
  string_2 = -13,
  lambda_5 = -14,
  lambda_6 = -15,
  lambda_7 = -16,
  lambda_8 = -17,
  func_field_list_to_string = -18,
  lambda_9 = -19,
  str___empty = -20,
  lambda_10 = -21,
  lambda_node_list = -22,
  string_3 = -23,
  func_subnode_to_string = -24,
  lambda_11 = -25,
  lambda_12 = -26
};

enum {
  var__START = FIRST_VAR-1,
  var_funky_types__node, // extern
  var_to_string, // extern polymorphic
  var_27_0_self, // dynamic
  var_28_0_indent, // dynamic
  var_std__plus, // extern
  var_node_name_of, // extern
  var_node_fields_of, // extern
  var_append, // extern
  var_map_reduce, // extern
  var_39_19_indent, // dynamic
  var_39_26_name, // dynamic
  var_39_31_node, // dynamic
  var_is_undefined, // extern
  var_tabs_and_spaces, // extern
  var_string, // extern
  var_std__assign, // extern
  var_is_a_string, // extern
  var_serialize, // extern
  var_trim_right, // extern
  var_is_a_list, // extern
  var_true, // extern
  var_cond, // extern
  var_60_24_indent, // dynamic
  var_60_36_node_list, // dynamic
  var_is_empty, // extern
  var_if, // extern
  var_76_0_name, // dynamic
  var_undefined, // extern
  var_is_defined, // extern
  var_std__string, // extern
  var__END
};


static TAB_NUM t_func_funky_types__node___to_string[] = {
  3, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_27_0_self,
  num_0, var_28_0_indent,
  // !indent indent+2
  var_std__plus, 2, var_28_0_indent, num_2, 1, var_28_0_indent,
  // node_name_of(self)
  var_node_name_of, 1, var_27_0_self, 1, LOCAL(1),
  // node_fields_of(self): (attribute_of)
  var_node_fields_of, 1, var_27_0_self, 1, LOCAL(2),
  // map_reduce
  var_map_reduce, 4, LOCAL(2), lambda_node_fields_ofself, var_append, string_1, 1, LOCAL(3),
  // append
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(30, 3),
  POS(32, 5),
  POS(34, 7),
  POS(33, 5),
  POS(31, 3)
};

static TAB_NUM t_lambda_node_fields_ofself[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 34_23_attribute_of
  // attribute_of(self)
  LOCAL(2), 1, var_27_0_self, 1, LOCAL(1),
  // field_to_string indent attribute_of attribute_of(self)
  func_field_to_string, 3, var_28_0_indent, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(35, 45),
  POS(35, 9)
};

static TAB_NUM t_func_field_to_string[] = {
  0, // locals
  3, // parameters
  var_39_19_indent,
  var_39_26_name,
  var_39_31_node,
  // cond
  var_cond, 4, lambda_1, lambda_3, lambda_5, lambda_7, TAIL_CALL,
  POS(41, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // is_undefined:
  var_is_undefined, 1, var_39_31_node, 1, LOCAL(1),
  //  node.is_undefined:
  LET, 2, LOCAL(1), lambda_2, TAIL_CALL,
  POS(42, 13),
  POS(42, 7)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // tabs_and_spaces(indent)
  var_tabs_and_spaces, 1, var_39_19_indent, 1, LOCAL(1),
  // string
  var_string, 4, chr_10, LOCAL(1), var_39_26_name, str___undefined, TAIL_CALL,
  POS(45, 9),
  POS(43, 7)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // is_a_string:
  var_is_a_string, 1, var_39_31_node, 1, LOCAL(1),
  //  node.is_a_string:
  LET, 2, LOCAL(1), lambda_4, TAIL_CALL,
  POS(48, 13),
  POS(48, 7)
};

static TAB_NUM t_lambda_4[] = {
  3, // locals
  0, // parameters
  // tabs_and_spaces(indent)
  var_tabs_and_spaces, 1, var_39_19_indent, 1, LOCAL(1),
  // serialize(node).trim_right
  var_serialize, 1, var_39_31_node, 1, LOCAL(2),
  // trim_right
  var_trim_right, 1, LOCAL(2), 1, LOCAL(3),
  // string
  var_string, 5, chr_10, LOCAL(1), var_39_26_name, string_2, LOCAL(3), TAIL_CALL,
  POS(51, 9),
  POS(54, 9),
  POS(54, 25),
  POS(49, 7)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_39_31_node, 1, LOCAL(1),
  //  node.is_a_list:
  LET, 2, LOCAL(1), lambda_6, TAIL_CALL,
  POS(55, 13),
  POS(55, 7)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // field_list_to_string indent name node
  func_field_list_to_string, 3, var_39_19_indent, var_39_26_name, var_39_31_node, TAIL_CALL,
  POS(56, 7)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 2, var_true, lambda_8, TAIL_CALL,
  POS(57, 7)
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // subnode_to_string(name node indent)
  func_subnode_to_string, 3, var_39_26_name, var_39_31_node, var_39_19_indent, 1, LOCAL(1),
  //  subnode_to_string(name node indent)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(58, 10),
  POS(58, 9)
};

static TAB_NUM t_func_field_list_to_string[] = {
  4, // locals
  3, // parameters
  var_60_24_indent,
  LOCAL(4), // 60_31_name
  var_60_36_node_list,
  // tabs_and_spaces(indent) name "[]"
  var_tabs_and_spaces, 1, var_60_24_indent, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, var_60_36_node_list, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_9, lambda_10, 1, LOCAL(3),
  // string
  var_string, 5, chr_10, LOCAL(1), LOCAL(4), string_3, LOCAL(3), TAIL_CALL,
  POS(64, 5),
  POS(66, 17),
  POS(65, 5),
  POS(62, 3)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  " = <empty>"
  LET, 1, str___empty, TAIL_CALL,
  POS(67, 9)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // map_reduce
  var_map_reduce, 4, var_60_36_node_list, lambda_node_list, var_append, string_1, 1, LOCAL(1),
  // 
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(69, 9),
  POS(68, 9)
};

static TAB_NUM t_lambda_node_list[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 70_12_node
  // indent+2)
  var_std__plus, 2, var_60_24_indent, num_2, 1, LOCAL(1),
  // subnode_to_string(node indent+2)
  func_subnode_to_string, 2, LOCAL(3), LOCAL(1), 1, LOCAL(2),
  // -> subnode_to_string(node indent+2)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(70, 55),
  POS(70, 32),
  POS(70, 29)
};

static TAB_NUM t_func_subnode_to_string[] = {
  6, // locals
  -3, // parameters
  var_undefined, var_76_0_name,
  MANDATORY_PARAMETER, LOCAL(5), // 77_0_node
  MANDATORY_PARAMETER, LOCAL(6), // 78_0_indent
  // tabs_and_spaces(indent)
  var_tabs_and_spaces, 1, LOCAL(6), 1, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_76_0_name, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_11, lambda_12, 1, LOCAL(3),
  // to_string(node indent)
  var_to_string, 2, LOCAL(5), LOCAL(6), 1, LOCAL(4),
  // string
  var_string, 4, chr_10, LOCAL(1), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(82, 5),
  POS(84, 12),
  POS(83, 5),
  POS(87, 5),
  POS(80, 3)
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // "@(name) = "
  var_std__string, 2, var_76_0_name, string_2, 1, LOCAL(1),
  //  "@(name) = "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(85, 10),
  POS(85, 9)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(86, 9)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__node___to_string}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_node_fields_ofself}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_field_to_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_STRING_8, 14, {.str_8 = " = <undefined>"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_STRING_8, 3, {.str_8 = " = "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_field_list_to_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_STRING_8, 10, {.str_8 = " = <empty>"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_node_list}},
  {FLT_STRING_8, 2, {.str_8 = "[]"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_subnode_to_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}}
};

static ATTRIBUTE_DEFINITION funky_types__node__attributes[] = {
  {var_to_string, -func_funky_types__node___to_string}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_UNKNOWN, 0, 1,
    "node\000funky_types", funky_types__node__attributes,
    {.position = POS(25, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_string\000", NULL,
    {.position = POS(25, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "27_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "28_0_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(30, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "node_name_of\000", NULL,
    {.position = POS(32, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "node_fields_of\000", NULL,
    {.position = POS(34, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(36, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(33, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "39_19_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "39_26_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "39_31_node\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(42, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(45, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(43, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(42, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(48, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "serialize\000", NULL,
    {.position = POS(54, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim_right\000", NULL,
    {.position = POS(54, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(55, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(57, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(41, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "60_24_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "60_36_node_list\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(66, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(65, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "76_0_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(76, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(84, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(85, 10)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0},
  {"funky", 1, 0}
};

FUNKY_MODULE module__dump = {
  "_dump", // module name
  "dump.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  2, // number of used namespaces
  26, // number of constants
  30, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
