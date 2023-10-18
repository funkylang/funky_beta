#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  str_object = -1,
  func_std_types__object___serialize = -2,
  lambda_1 = -3,
  num_2 = -4,
  lambda_2 = -5,
  num_1 = -6,
  string_1 = -7,
  lambda_loop = -8,
  lambda_3 = -9,
  lambda_field_is_defined = -10,
  lambda_4 = -11,
  lambda_5 = -12,
  string_2 = -13,
  string_3 = -14,
  lambda_6 = -15,
  func_std_types__object___deserializer_of = -16,
  lambda_2_loop = -17,
  lambda_7 = -18,
  lambda_setter_is_defined = -19,
  lambda_8 = -20,
  func_to_table = -21,
  lambda_3_loop = -22,
  lambda_9 = -23,
  lambda_10 = -24
};

enum {
  var__START = FIRST_VAR-1,
  var_std__is_defined, // attribute
  var_std__assign, // extern
  var_std_types__object, // extern
  var_is_defined, // extern polymorphic
  var_true, // extern
  var_std__serialization_fields_of, // attribute
  var_serialization_tag_of, // extern polymorphic
  var_serialization_fields_of, // extern polymorphic
  var_empty_list, // extern
  var_serialize, // extern polymorphic
  var_86_0_obj, // dynamic
  var_87_0_indent, // dynamic
  var_undefined, // extern
  var_std__plus, // extern
  var_89_1_new_indent, // dynamic
  var_if, // extern
  var_94_1_fieldnames_and_getters, // dynamic
  var_95_1_i, // dynamic
  var_96_1_len, // dynamic
  var_length_of, // extern
  var_97_1_buf, // dynamic
  var_std__less, // extern
  var_101_1_field, // dynamic
  var_append, // extern
  var_next, // extern
  var_string, // extern
  var_tabs_and_spaces, // extern
  var_update_if, // extern
  var_loop, // extern
  var_deserializer_of, // extern polymorphic
  var_119_0_prototype, // dynamic
  var_120_0_items, // dynamic
  var_122_1_tab, // dynamic
  var_123_1_i, // dynamic
  var_124_1_n, // dynamic
  var_std__shift_right, // extern
  var_std__not, // extern
  var_std__times, // extern
  var_std__minus, // extern
  var_129_1_value, // dynamic
  var_inc, // extern
  var_131_1_setter, // dynamic
  var_139_12_fields, // dynamic
  var_140_1_i, // dynamic
  var_141_1_n, // dynamic
  var_142_1_tab, // dynamic
  var_empty_key_order_table, // extern
  var__END
};


static TAB_NUM t_func_std_types__object___serialize[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_86_0_obj,
  var_undefined, var_87_0_indent,
  // is_defined
  var_is_defined, 1, var_87_0_indent, 1, LOCAL(1),
  // $new_indent
  var_if, 3, LOCAL(1), lambda_1, lambda_2, 1, var_89_1_new_indent,
  // $fieldnames_and_getters serialization_fields_of(obj)
  var_serialization_fields_of, 1, var_86_0_obj, 1, var_94_1_fieldnames_and_getters,
  // $i 1
  LET, 1, num_1, 1, var_95_1_i,
  // $len length_of(fieldnames_and_getters)
  var_length_of, 1, var_94_1_fieldnames_and_getters, 1, var_96_1_len,
  // $buf ""
  LET, 1, string_1, 1, var_97_1_buf,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(91, 14),
  POS(89, 3),
  POS(94, 3),
  POS(95, 3),
  POS(96, 3),
  POS(97, 3),
  POS(98, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // indent+2
  var_std__plus, 2, var_87_0_indent, num_2, 1, LOCAL(1),
  //  indent+2
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(92, 10),
  POS(92, 9)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(93, 9)
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // i < len:
  var_std__less, 2, var_95_1_i, var_96_1_len, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_5, TAIL_CALL,
  POS(100, 7),
  POS(99, 5)
};

static TAB_NUM t_lambda_3[] = {
  2, // locals
  0, // parameters
  // i+1)(obj)
  var_std__plus, 2, var_95_1_i, num_1, 1, LOCAL(1),
  // fieldnames_and_getters(i+1)(obj)
  var_94_1_fieldnames_and_getters, 1, LOCAL(1), 1, LOCAL(2),
  // $field fieldnames_and_getters(i+1)(obj)
  LOCAL(2), 1, var_86_0_obj, 1, var_101_1_field,
  // is_defined:
  var_is_defined, 1, var_101_1_field, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_field_is_defined, lambda_4, TAIL_CALL,
  POS(101, 39),
  POS(101, 16),
  POS(101, 9),
  POS(103, 17),
  POS(102, 9)
};

static TAB_NUM t_lambda_field_is_defined[] = {
  2, // locals
  0, // parameters
  // $fieldname fieldnames_and_getters(i)
  var_94_1_fieldnames_and_getters, 1, var_95_1_i, 1, LOCAL(2),
  // serialize(fieldname new_indent)
  var_serialize, 2, LOCAL(2), var_89_1_new_indent, 1, LOCAL(1),
  // append &buf serialize(fieldname new_indent)
  var_append, 2, var_97_1_buf, LOCAL(1), 1, var_97_1_buf,
  // serialize(field new_indent)
  var_serialize, 2, var_101_1_field, var_89_1_new_indent, 1, LOCAL(1),
  // append &buf serialize(field new_indent)
  var_append, 2, var_97_1_buf, LOCAL(1), 1, var_97_1_buf,
  // !i i+2
  var_std__plus, 2, var_95_1_i, num_2, 1, var_95_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(104, 13),
  POS(105, 25),
  POS(105, 13),
  POS(106, 25),
  POS(106, 13),
  POS(107, 13),
  POS(108, 13)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  // !i i+2
  var_std__plus, 2, var_95_1_i, num_2, 1, var_95_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(110, 13),
  POS(111, 13)
};

static TAB_NUM t_lambda_5[] = {
  2, // locals
  0, // parameters
  // serialization_tag_of(obj) " <" len ">@nl;") &buf
  var_serialization_tag_of, 1, var_86_0_obj, 1, LOCAL(1),
  // string(serialization_tag_of(obj) " <" len ">@nl;") &buf
  var_string, 4, LOCAL(1), string_2, var_96_1_len, string_3, 1, LOCAL(2),
  // append string(serialization_tag_of(obj) " <" len ">@nl;") &buf
  var_append, 2, LOCAL(2), var_97_1_buf, 1, var_97_1_buf,
  // is_defined &buf -> append(tabs_and_spaces(indent) buf)
  var_is_defined, 1, var_87_0_indent, 1, LOCAL(1),
  // update_if indent.is_defined &buf -> append(tabs_and_spaces(indent) buf)
  var_update_if, 3, LOCAL(1), var_97_1_buf, lambda_6, 1, var_97_1_buf,
  // -> buf
  LET, 1, var_97_1_buf, TAIL_CALL,
  POS(113, 23),
  POS(113, 16),
  POS(113, 9),
  POS(114, 26),
  POS(114, 9),
  POS(115, 9)
};

static TAB_NUM t_lambda_6[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) buf)
  var_tabs_and_spaces, 1, var_87_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) buf)
  var_append, 2, LOCAL(1), var_97_1_buf, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) buf)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(114, 52),
  POS(114, 45),
  POS(114, 44)
};

static TAB_NUM t_func_std_types__object___deserializer_of[] = {
  1, // locals
  2, // parameters
  var_119_0_prototype,
  var_120_0_items,
  // serialization_fields_of(prototype).to_table
  var_serialization_fields_of, 1, var_119_0_prototype, 1, LOCAL(1),
  // $tab serialization_fields_of(prototype).to_table
  func_to_table, 1, LOCAL(1), 1, var_122_1_tab,
  // $i 1
  LET, 1, num_1, 1, var_123_1_i,
  // length_of(items) >> 1
  var_length_of, 1, var_120_0_items, 1, LOCAL(1),
  // $n length_of(items) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, var_124_1_n,
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(122, 8),
  POS(122, 3),
  POS(123, 3),
  POS(124, 6),
  POS(124, 3),
  POS(125, 3)
};

static TAB_NUM t_lambda_2_loop[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_124_1_n, var_123_1_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_7, lambda_8, TAIL_CALL,
  POS(127, 12),
  POS(127, 12),
  POS(126, 5)
};

static TAB_NUM t_lambda_7[] = {
  3, // locals
  0, // parameters
  // 2*i-1)
  var_std__times, 2, num_2, var_123_1_i, 1, LOCAL(1),
  // 2*i-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // $key items(2*i-1)
  var_120_0_items, 1, LOCAL(2), 1, LOCAL(3),
  // 2*i)
  var_std__times, 2, num_2, var_123_1_i, 1, LOCAL(1),
  // $value items(2*i)
  var_120_0_items, 1, LOCAL(1), 1, var_129_1_value,
  // inc &i
  var_inc, 1, var_123_1_i, 1, var_123_1_i,
  // $setter tab(key)
  var_122_1_tab, 1, LOCAL(3), 1, var_131_1_setter,
  // is_defined:
  var_is_defined, 1, var_131_1_setter, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_setter_is_defined, var_next, TAIL_CALL,
  POS(128, 20),
  POS(128, 20),
  POS(128, 9),
  POS(129, 22),
  POS(129, 9),
  POS(130, 9),
  POS(131, 9),
  POS(133, 18),
  POS(132, 9)
};

static TAB_NUM t_lambda_setter_is_defined[] = {
  0, // locals
  0, // parameters
  // setter &prototype value
  var_131_1_setter, 2, var_119_0_prototype, var_129_1_value, 1, var_119_0_prototype,
  // next
  var_next, 0, TAIL_CALL,
  POS(134, 13),
  POS(135, 13)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  prototype
  LET, 1, var_119_0_prototype, TAIL_CALL,
  POS(137, 9)
};

static TAB_NUM t_func_to_table[] = {
  0, // locals
  1, // parameters
  var_139_12_fields,
  // $i 1
  LET, 1, num_1, 1, var_140_1_i,
  // $n length_of(fields)
  var_length_of, 1, var_139_12_fields, 1, var_141_1_n,
  // $tab empty_key_order_table
  LET, 1, var_empty_key_order_table, 1, var_142_1_tab,
  // loop:
  var_loop, 1, lambda_3_loop, TAIL_CALL,
  POS(140, 3),
  POS(141, 3),
  POS(142, 3),
  POS(143, 3)
};

static TAB_NUM t_lambda_3_loop[] = {
  1, // locals
  0, // parameters
  // i < n:
  var_std__less, 2, var_140_1_i, var_141_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_9, lambda_10, TAIL_CALL,
  POS(145, 7),
  POS(144, 5)
};

static TAB_NUM t_lambda_9[] = {
  3, // locals
  0, // parameters
  // $key fields(i)
  var_139_12_fields, 1, var_140_1_i, 1, LOCAL(2),
  // i+1)
  var_std__plus, 2, var_140_1_i, num_1, 1, LOCAL(1),
  // $value fields(i+1)
  var_139_12_fields, 1, LOCAL(1), 1, LOCAL(3),
  // tab(key) value
  var_142_1_tab, 2, LOCAL(2), LOCAL(3), 1, var_142_1_tab,
  // !i i+2
  var_std__plus, 2, var_140_1_i, num_2, 1, var_140_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(146, 9),
  POS(147, 23),
  POS(147, 9),
  POS(148, 10),
  POS(149, 9),
  POS(150, 9)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  tab
  LET, 1, var_142_1_tab, TAIL_CALL,
  POS(151, 9)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_STRING_8, 6, {.str_8 = "object"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__object___serialize}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_field_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_STRING_8, 2, {.str_8 = " <"}},
  {FLT_STRING_8, 2, {.str_8 = ">\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__object___deserializer_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_setter_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_to_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_defined, -var_true},
  {-var_serialization_tag_of, -str_object},
  {-var_serialization_fields_of, -var_empty_list},
  {var_serialize, -func_std_types__object___serialize},
  {-var_deserializer_of, -func_std_types__object___deserializer_of}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_defined\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(62, 1)}
  },
  {
    FOT_UNKNOWN, 0, 5,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(70, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(70, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(70, 31)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "serialization_fields_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(81, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_fields_of\000", NULL,
    {.position = POS(82, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(82, 44)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(84, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "86_0_obj\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "87_0_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(87, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(92, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "89_1_new_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(90, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "94_1_fieldnames_and_getters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "95_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "96_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(96, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "97_1_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(100, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "101_1_field\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(105, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(108, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(113, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(114, 52)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(114, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(98, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deserializer_of\000", NULL,
    {.position = POS(117, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "119_0_prototype\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "120_0_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "122_1_tab\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "123_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "124_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(124, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(127, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(128, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(128, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "129_1_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(130, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "131_1_setter\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "139_12_fields\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "140_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "141_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "142_1_tab\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_key_order_table\000", NULL,
    {.position = POS(142, 8)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__object = {
  "_basic__types__object", // module name
  "basic/types/object.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  24, // number of constants
  47, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
