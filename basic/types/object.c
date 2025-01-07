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
  var_std__is_a_plain_object, // attribute
  var_is_a_plain_object, // extern polymorphic
  var_std_types__number, // extern
  var_false, // extern
  var_std_types__true, // extern
  var_std_types__false, // extern
  var_std_types__string, // extern
  var_std_types__tuple, // extern
  var_std_types__generic_array, // extern
  var_std_types__unique_item, // extern
  var_std_types__function, // extern
  var_std_types__polymorphic_function, // extern
  var_std_types__character, // extern
  var_std_types__date_and_time, // extern
  var_std_types__terminal_attributes, // extern
  var_std_types__file_type, // extern
  var_std_types__file_descriptor, // extern
  var_std_types__shutdown_type, // extern
  var_std_types__seek_type, // extern
  var_std_types__device_id, // extern
  var_std_types__directory, // extern
  var_std_types__group_id, // extern
  var_std_types__inode_number, // extern
  var_std_types__process_id, // extern
  var_std_types__user_id, // extern
  var_std_types__error_number, // extern
  var_std_types__shared_memory, // extern
  var_std__serialization_fields_of, // attribute
  var_serialization_tag_of, // extern polymorphic
  var_serialization_fields_of, // extern polymorphic
  var_empty_list, // extern
  var_serialize, // extern polymorphic
  var_114_5_obj, // dynamic
  var_115_5_indent, // dynamic
  var_undefined, // extern
  var_std__plus, // extern
  var_117_4_new_indent, // dynamic
  var_if, // extern
  var_122_4_fieldnames_and_getters, // dynamic
  var_123_4_i, // dynamic
  var_124_4_len, // dynamic
  var_length_of, // extern
  var_125_4_buf, // dynamic
  var_std__less, // extern
  var_129_10_field, // dynamic
  var_append, // extern
  var_next, // extern
  var_string, // extern
  var_tabs_and_spaces, // extern
  var_update_if, // extern
  var_loop, // extern
  var_deserializer_of, // extern polymorphic
  var_147_5_prototype, // dynamic
  var_148_5_items, // dynamic
  var_150_4_tab, // dynamic
  var_151_4_i, // dynamic
  var_152_4_n, // dynamic
  var_std__shift_right, // extern
  var_std__not, // extern
  var_std__times, // extern
  var_std__minus, // extern
  var_157_10_value, // dynamic
  var_inc, // extern
  var_159_10_setter, // dynamic
  var_deserializers, // extern
  var_register_type, // extern
  var_170_13_fields, // dynamic
  var_171_4_i, // dynamic
  var_172_4_n, // dynamic
  var_173_4_tab, // dynamic
  var_empty_key_order_table, // extern
  var__END
};


static TAB_NUM t_func_std_types__object___serialize[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_114_5_obj,
  var_undefined, var_115_5_indent,
  // is_defined
  var_is_defined, 1, var_115_5_indent, 1, LOCAL(1),
  // $new_indent
  var_if, 3, LOCAL(1), lambda_1, lambda_2, 1, var_117_4_new_indent,
  // $fieldnames_and_getters serialization_fields_of(obj)
  var_serialization_fields_of, 1, var_114_5_obj, 1, var_122_4_fieldnames_and_getters,
  // $i 1
  LET, 1, num_1, 1, var_123_4_i,
  // $len length_of(fieldnames_and_getters)
  var_length_of, 1, var_122_4_fieldnames_and_getters, 1, var_124_4_len,
  // $buf ""
  LET, 1, string_1, 1, var_125_4_buf,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(119, 14),
  POS(117, 3),
  POS(122, 3),
  POS(123, 3),
  POS(124, 3),
  POS(125, 3),
  POS(126, 3)
};

static FUNCTION_INFO i_func_std_types__object___serialize = {
  t_func_std_types__object___serialize, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // indent+2
  var_std__plus, 2, var_115_5_indent, num_2, 1, LOCAL(1),
  //  indent+2
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(120, 10),
  POS(120, 9)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(121, 9)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // i < len:
  var_std__less, 2, var_123_4_i, var_124_4_len, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_5, TAIL_CALL,
  POS(128, 7),
  POS(127, 5)
};

static FUNCTION_INFO i_lambda_loop = {
  t_lambda_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  2, // locals
  0, // parameters
  // i+1)(obj)
  var_std__plus, 2, var_123_4_i, num_1, 1, LOCAL(1),
  // fieldnames_and_getters(i+1)(obj)
  var_122_4_fieldnames_and_getters, 1, LOCAL(1), 1, LOCAL(2),
  // $field fieldnames_and_getters(i+1)(obj)
  LOCAL(2), 1, var_114_5_obj, 1, var_129_10_field,
  // is_defined:
  var_is_defined, 1, var_129_10_field, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_field_is_defined, lambda_4, TAIL_CALL,
  POS(129, 39),
  POS(129, 16),
  POS(129, 9),
  POS(131, 17),
  POS(130, 9)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_field_is_defined[] = {
  2, // locals
  0, // parameters
  // $fieldname fieldnames_and_getters(i)
  var_122_4_fieldnames_and_getters, 1, var_123_4_i, 1, LOCAL(2),
  // serialize(fieldname new_indent)
  var_serialize, 2, LOCAL(2), var_117_4_new_indent, 1, LOCAL(1),
  // append &buf serialize(fieldname new_indent)
  var_append, 2, var_125_4_buf, LOCAL(1), 1, var_125_4_buf,
  // serialize(field new_indent)
  var_serialize, 2, var_129_10_field, var_117_4_new_indent, 1, LOCAL(1),
  // append &buf serialize(field new_indent)
  var_append, 2, var_125_4_buf, LOCAL(1), 1, var_125_4_buf,
  // !i i+2
  var_std__plus, 2, var_123_4_i, num_2, 1, var_123_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(132, 13),
  POS(133, 25),
  POS(133, 13),
  POS(134, 25),
  POS(134, 13),
  POS(135, 13),
  POS(136, 13),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_field_is_defined = {
  t_lambda_field_is_defined, NULL, 7, 1,
  {"132_14_fieldname\000"}
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  // !i i+2
  var_std__plus, 2, var_123_4_i, num_2, 1, var_123_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(138, 13),
  POS(139, 13)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  2, // locals
  0, // parameters
  // serialization_tag_of(obj) " <" len ">@nl;") &buf
  var_serialization_tag_of, 1, var_114_5_obj, 1, LOCAL(1),
  // string(serialization_tag_of(obj) " <" len ">@nl;") &buf
  var_string, 4, LOCAL(1), string_2, var_124_4_len, string_3, 1, LOCAL(2),
  // append string(serialization_tag_of(obj) " <" len ">@nl;") &buf
  var_append, 2, LOCAL(2), var_125_4_buf, 1, var_125_4_buf,
  // is_defined &buf -> append(tabs_and_spaces(indent) buf)
  var_is_defined, 1, var_115_5_indent, 1, LOCAL(1),
  // update_if indent.is_defined &buf -> append(tabs_and_spaces(indent) buf)
  var_update_if, 3, LOCAL(1), var_125_4_buf, lambda_6, 1, var_125_4_buf,
  // -> buf
  LET, 1, var_125_4_buf, TAIL_CALL,
  POS(141, 23),
  POS(141, 16),
  POS(141, 9),
  POS(142, 26),
  POS(142, 9),
  POS(143, 9)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) buf)
  var_tabs_and_spaces, 1, var_115_5_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) buf)
  var_append, 2, LOCAL(1), var_125_4_buf, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) buf)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(142, 52),
  POS(142, 45),
  POS(142, 44)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std_types__object___deserializer_of[] = {
  1, // locals
  2, // parameters
  var_147_5_prototype,
  var_148_5_items,
  // serialization_fields_of(prototype).to_table
  var_serialization_fields_of, 1, var_147_5_prototype, 1, LOCAL(1),
  // $tab serialization_fields_of(prototype).to_table
  func_to_table, 1, LOCAL(1), 1, var_150_4_tab,
  // $i 1
  LET, 1, num_1, 1, var_151_4_i,
  // length_of(items) >> 1
  var_length_of, 1, var_148_5_items, 1, LOCAL(1),
  // $n length_of(items) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, var_152_4_n,
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(150, 8),
  POS(150, 3),
  POS(151, 3),
  POS(152, 6),
  POS(152, 3),
  POS(153, 3)
};

static FUNCTION_INFO i_func_std_types__object___deserializer_of = {
  t_func_std_types__object___deserializer_of, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_2_loop[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_152_4_n, var_151_4_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_7, lambda_8, TAIL_CALL,
  POS(155, 12),
  POS(155, 12),
  POS(154, 5)
};

static FUNCTION_INFO i_lambda_2_loop = {
  t_lambda_2_loop, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  3, // locals
  0, // parameters
  // 2*i-1)
  var_std__times, 2, num_2, var_151_4_i, 1, LOCAL(1),
  // 2*i-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // $key items(2*i-1)
  var_148_5_items, 1, LOCAL(2), 1, LOCAL(3),
  // 2*i)
  var_std__times, 2, num_2, var_151_4_i, 1, LOCAL(1),
  // $value items(2*i)
  var_148_5_items, 1, LOCAL(1), 1, var_157_10_value,
  // inc &i
  var_inc, 1, var_151_4_i, 1, var_151_4_i,
  // $setter tab(key)
  var_150_4_tab, 1, LOCAL(3), 1, var_159_10_setter,
  // is_defined:
  var_is_defined, 1, var_159_10_setter, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_setter_is_defined, var_next, TAIL_CALL,
  POS(156, 20),
  POS(156, 20),
  POS(156, 9),
  POS(157, 22),
  POS(157, 9),
  POS(158, 9),
  POS(159, 9),
  POS(161, 18),
  POS(160, 9),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 9, 1,
  {"156_10_key\000"}
};

static TAB_NUM t_lambda_setter_is_defined[] = {
  0, // locals
  0, // parameters
  // setter &prototype value
  var_159_10_setter, 2, var_147_5_prototype, var_157_10_value, 1, var_147_5_prototype,
  // next
  var_next, 0, TAIL_CALL,
  POS(162, 13),
  POS(163, 13)
};

static FUNCTION_INFO i_lambda_setter_is_defined = {
  t_lambda_setter_is_defined, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  prototype
  LET, 1, var_147_5_prototype, TAIL_CALL,
  POS(165, 9)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_to_table[] = {
  0, // locals
  1, // parameters
  var_170_13_fields,
  // $i 1
  LET, 1, num_1, 1, var_171_4_i,
  // $n length_of(fields)
  var_length_of, 1, var_170_13_fields, 1, var_172_4_n,
  // $tab empty_key_order_table
  LET, 1, var_empty_key_order_table, 1, var_173_4_tab,
  // loop:
  var_loop, 1, lambda_3_loop, TAIL_CALL,
  POS(171, 3),
  POS(172, 3),
  POS(173, 3),
  POS(174, 3)
};

static FUNCTION_INFO i_func_to_table = {
  t_func_to_table, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_3_loop[] = {
  1, // locals
  0, // parameters
  // i < n:
  var_std__less, 2, var_171_4_i, var_172_4_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_9, lambda_10, TAIL_CALL,
  POS(176, 7),
  POS(175, 5)
};

static FUNCTION_INFO i_lambda_3_loop = {
  t_lambda_3_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  3, // locals
  0, // parameters
  // $key fields(i)
  var_170_13_fields, 1, var_171_4_i, 1, LOCAL(2),
  // i+1)
  var_std__plus, 2, var_171_4_i, num_1, 1, LOCAL(1),
  // $value fields(i+1)
  var_170_13_fields, 1, LOCAL(1), 1, LOCAL(3),
  // tab(key) value
  var_173_4_tab, 2, LOCAL(2), LOCAL(3), 1, var_173_4_tab,
  // !i i+2
  var_std__plus, 2, var_171_4_i, num_2, 1, var_171_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(177, 9),
  POS(178, 23),
  POS(178, 9),
  POS(179, 10),
  POS(180, 9),
  POS(181, 9),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 6, 2,
  {"177_10_key\000", "178_10_value\000"}
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  tab
  LET, 1, var_173_4_tab, TAIL_CALL,
  POS(182, 9)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 1, 0,
  {}
};

static TAB_NUM t_module_entry[] = {
  0, // locals
  0, // parameters
  // register_type &deserializers std_types::object
  var_register_type, 2, var_deserializers, var_std_types__object, 1, var_deserializers,
  LET, 1, 0, TAIL_CALL,
  POS(167, 1)
};

static FUNCTION_INFO i_module_entry = {
  t_module_entry, NULL, 1, 0,
  {}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_STRING_8, 6, {.str_8 = "object"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__object___serialize}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_field_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_STRING_8, 2, {.str_8 = " <"}},
  {FLT_STRING_8, 2, {.str_8 = ">\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__object___deserializer_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_setter_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_to_table}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_module_entry}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_defined, -var_true},
  {-var_is_a_plain_object, -var_true},
  {-var_serialization_tag_of, -str_object},
  {-var_serialization_fields_of, -var_empty_list},
  {var_serialize, -func_std_types__object___serialize},
  {-var_deserializer_of, -func_std_types__object___deserializer_of}
};

static ATTRIBUTE_DEFINITION std_types__number__attributes[] = {
  {-var_is_a_plain_object, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__true__attributes[] = {
  {-var_is_a_plain_object, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__false__attributes[] = {
  {-var_is_a_plain_object, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__string__attributes[] = {
  {-var_is_a_plain_object, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__tuple__attributes[] = {
  {-var_is_a_plain_object, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__generic_array__attributes[] = {
  {-var_is_a_plain_object, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__unique_item__attributes[] = {
  {-var_is_a_plain_object, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__function__attributes[] = {
  {-var_is_a_plain_object, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__polymorphic_function__attributes[] = {
  {-var_is_a_plain_object, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__character__attributes[] = {
  {-var_is_a_plain_object, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__date_and_time__attributes[] = {
  {-var_is_a_plain_object, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__terminal_attributes__attributes[] = {
  {-var_is_a_plain_object, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__file_type__attributes[] = {
  {-var_is_a_plain_object, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__file_descriptor__attributes[] = {
  {-var_is_a_plain_object, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__shutdown_type__attributes[] = {
  {-var_is_a_plain_object, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__seek_type__attributes[] = {
  {-var_is_a_plain_object, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__device_id__attributes[] = {
  {-var_is_a_plain_object, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__directory__attributes[] = {
  {-var_is_a_plain_object, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__group_id__attributes[] = {
  {-var_is_a_plain_object, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__inode_number__attributes[] = {
  {-var_is_a_plain_object, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__process_id__attributes[] = {
  {-var_is_a_plain_object, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__user_id__attributes[] = {
  {-var_is_a_plain_object, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__error_number__attributes[] = {
  {-var_is_a_plain_object, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__shared_memory__attributes[] = {
  {-var_is_a_plain_object, -var_false}
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
    {.position = POS(68, 1)}
  },
  {
    FOT_UNKNOWN, 0, 6,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(71, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(71, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(71, 31)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_plain_object\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_plain_object\000", NULL,
    {.position = POS(78, 20)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "number\000std_types", std_types__number__attributes,
    {.position = POS(80, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(80, 38)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "true\000std_types", std_types__true__attributes,
    {.position = POS(81, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "false\000std_types", std_types__false__attributes,
    {.position = POS(82, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "string\000std_types", std_types__string__attributes,
    {.position = POS(83, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "tuple\000std_types", std_types__tuple__attributes,
    {.position = POS(84, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "generic_array\000std_types", std_types__generic_array__attributes,
    {.position = POS(85, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "unique_item\000std_types", std_types__unique_item__attributes,
    {.position = POS(86, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "function\000std_types", std_types__function__attributes,
    {.position = POS(87, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "polymorphic_function\000std_types", std_types__polymorphic_function__attributes,
    {.position = POS(88, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "character\000std_types", std_types__character__attributes,
    {.position = POS(89, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "date_and_time\000std_types", std_types__date_and_time__attributes,
    {.position = POS(90, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "terminal_attributes\000std_types", std_types__terminal_attributes__attributes,
    {.position = POS(91, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "file_type\000std_types", std_types__file_type__attributes,
    {.position = POS(92, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "file_descriptor\000std_types", std_types__file_descriptor__attributes,
    {.position = POS(93, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "shutdown_type\000std_types", std_types__shutdown_type__attributes,
    {.position = POS(94, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "seek_type\000std_types", std_types__seek_type__attributes,
    {.position = POS(95, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "device_id\000std_types", std_types__device_id__attributes,
    {.position = POS(96, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "directory\000std_types", std_types__directory__attributes,
    {.position = POS(97, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "group_id\000std_types", std_types__group_id__attributes,
    {.position = POS(98, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inode_number\000std_types", std_types__inode_number__attributes,
    {.position = POS(99, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "process_id\000std_types", std_types__process_id__attributes,
    {.position = POS(100, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "user_id\000std_types", std_types__user_id__attributes,
    {.position = POS(101, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "error_number\000std_types", std_types__error_number__attributes,
    {.position = POS(102, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "shared_memory\000std_types", std_types__shared_memory__attributes,
    {.position = POS(103, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "serialization_fields_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(109, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_fields_of\000", NULL,
    {.position = POS(110, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(110, 44)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(112, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "114_5_obj\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "115_5_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(115, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(120, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "117_4_new_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(118, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "122_4_fieldnames_and_getters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "123_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "124_4_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(124, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "125_4_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(128, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "129_10_field\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(133, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(136, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(141, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(142, 52)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(142, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(126, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deserializer_of\000", NULL,
    {.position = POS(145, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "147_5_prototype\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "148_5_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "150_4_tab\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "151_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "152_4_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(152, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(155, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(156, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(156, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "157_10_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(158, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "159_10_setter\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deserializers\000", NULL,
    {.position = POS(167, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "register_type\000", NULL,
    {.position = POS(167, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "170_13_fields\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "171_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "172_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "173_4_tab\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_key_order_table\000", NULL,
    {.position = POS(173, 8)}
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
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO|FEAT_INITIALIZER,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  25, // number of constants
  76, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
