/// require ./tuple_autogen

#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  str_tuple = -1,
  func_std__first = -2,
  func_std__second = -3,
  func_std__third = -4,
  func_std__fourth = -5,
  func_std__fifth = -6,
  func_std_types__tuple___debug__to_string = -7,
  num_0 = -8,
  num_1 = -9,
  lambda_1 = -10,
  lambda_2 = -11,
  str_tuple_of_1_item = -12,
  lambda_3 = -13,
  str_tuple_of = -14,
  str__items = -15,
  lambda_4 = -16,
  num_2 = -17,
  lambda_self = -18,
  chr_10 = -19,
  lambda_5 = -20,
  minus_num_1 = -21,
  lambda_6 = -22,
  string_1 = -23,
  string_2 = -24,
  str_tuple_2 = -25,
  func_std_types__tuple___serialize = -26,
  lambda_7 = -27,
  lambda_8 = -28,
  lambda_items = -29,
  string_3 = -30,
  string_4 = -31,
  lambda_9 = -32,
  func_std_types__tuple___deserializer_of = -33
};

enum {
  var__START = FIRST_VAR-1,
  var_std__is_a_tuple, // attribute
  var_std__assign, // extern
  var_std_types__object, // extern
  var_is_a_tuple, // extern polymorphic
  var_false, // extern
  var_std_types__tuple, // extern
  var_true, // extern
  var_serialization_tag_of, // extern polymorphic
  var_std__first, // initialized
  var_std__second, // initialized
  var_std__third, // initialized
  var_std__fourth, // initialized
  var_std__fifth, // initialized
  var_debug__to_string, // extern polymorphic
  var_60_5_self, // dynamic
  var_61_5_indent, // dynamic
  var_62_5_depth, // dynamic
  var_to_list, // extern
  var_std__less, // extern
  var_std__not, // extern
  var_67_8_len, // dynamic
  var_length_of, // extern
  var_std__equal, // extern
  var_std__string, // extern
  var_if, // extern
  var_73_8_new_indent, // dynamic
  var_std__plus, // extern
  var_std__minus, // extern
  var_76_12_text, // dynamic
  var_range, // extern
  var_tabs_and_spaces, // extern
  var_append, // extern
  var_map_reduce, // extern
  var_serialize, // extern polymorphic
  var_90_5_indent, // dynamic
  var_undefined, // extern
  var_is_defined, // extern
  var_92_4_new_indent, // dynamic
  var_102_4_header, // dynamic
  var_update_if, // extern
  var_deserializer_of, // extern polymorphic
  var_new_tuple, // extern
  var_deserializers, // extern
  var_register_type, // extern
  var__END
};


static TAB_NUM t_func_std__first[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 36_15_t
  // t $first
  LOCAL(1), 0, 1, LOCAL(2),
  // -> first
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(37, 3),
  POS(38, 3),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std__first = {
  t_func_std__first, NULL, 2, 2,
  {"36_15_t\000", "37_6_first\000"}
};

static TAB_NUM t_func_std__second[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 40_16_t
  // t $_first $second
  LOCAL(2), 0, 2, LOCAL(1), LOCAL(3),
  // -> second
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(41, 3),
  POS(42, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std__second = {
  t_func_std__second, NULL, 2, 2,
  {"41_14_second\000", "40_16_t\000"}
};

static TAB_NUM t_func_std__third[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 44_15_t
  // t $_first $_second $third
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(1), LOCAL(3),
  // -> third
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(45, 3),
  POS(46, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std__third = {
  t_func_std__third, NULL, 2, 2,
  {"44_15_t\000", "45_23_third\000"}
};

static TAB_NUM t_func_std__fourth[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 48_16_t
  // t $_first $_second $_third $fourth
  LOCAL(2), 0, 4, LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(3),
  // -> fourth
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(49, 3),
  POS(50, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std__fourth = {
  t_func_std__fourth, NULL, 2, 2,
  {"48_16_t\000", "49_31_fourth\000"}
};

static TAB_NUM t_func_std__fifth[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 52_15_t
  // t $_first $_second $_third $_fourth $fifth
  LOCAL(2), 0, 5, LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(3),
  // -> fifth
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(53, 3),
  POS(54, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std__fifth = {
  t_func_std__fifth, NULL, 2, 2,
  {"53_40_fifth\000", "52_15_t\000"}
};

static TAB_NUM t_func_std_types__tuple___debug__to_string[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_60_5_self,
  num_0, var_61_5_indent,
  num_1, var_62_5_depth,
  // to_list &self
  var_to_list, 1, var_60_5_self, 1, var_60_5_self,
  // 1:
  var_std__less, 2, num_1, var_62_5_depth, 1, LOCAL(1),
  // 1:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1, lambda_4, TAIL_CALL,
  POS(64, 3),
  POS(66, 14),
  POS(66, 14),
  POS(65, 3)
};

static FUNCTION_INFO i_func_std_types__tuple___debug__to_string = {
  t_func_std_types__tuple___debug__to_string, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // $len length_of(self)
  var_length_of, 1, var_60_5_self, 1, var_67_8_len,
  // len == 1
  var_std__equal, 2, var_67_8_len, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2, lambda_3, TAIL_CALL,
  POS(67, 7),
  POS(69, 9),
  POS(68, 7)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  "<tuple of 1 item>@nl;"
  LET, 1, str_tuple_of_1_item, TAIL_CALL,
  POS(70, 11)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // "<tuple of @(len) items>@nl;"
  var_std__string, 3, str_tuple_of, var_67_8_len, str__items, 1, LOCAL(1),
  //  "<tuple of @(len) items>@nl;"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(71, 12),
  POS(71, 11)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  3, // locals
  0, // parameters
  // $new_indent indent+2
  var_std__plus, 2, var_61_5_indent, num_2, 1, var_73_8_new_indent,
  // map_reduce $contents
  var_map_reduce, 4, var_60_5_self, lambda_self, var_append, string_1, 1, LOCAL(3),
  // tabs_and_spaces(indent) "tuple@nl;") contents
  var_tabs_and_spaces, 1, var_61_5_indent, 1, LOCAL(1),
  // append("@nl;" tabs_and_spaces(indent) "tuple@nl;") contents
  var_append, 3, string_2, LOCAL(1), str_tuple_2, 1, LOCAL(2),
  // append append("@nl;" tabs_and_spaces(indent) "tuple@nl;") contents
  var_append, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(73, 7),
  POS(74, 7),
  POS(83, 28),
  POS(83, 14),
  POS(83, 7),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 5, 1,
  {"74_19_contents\000"}
};

static TAB_NUM t_lambda_self[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 75_16_value
  // depth-1)
  var_std__minus, 2, var_62_5_depth, num_1, 1, LOCAL(1),
  // $text debug::to_string(value new_indent depth-1)
  var_debug__to_string, 3, LOCAL(3), var_73_8_new_indent, LOCAL(1), 1, var_76_12_text,
  // text(1) == '@nl;'
  var_76_12_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_5, lambda_6, TAIL_CALL,
  POS(76, 51),
  POS(76, 11),
  POS(78, 13),
  POS(78, 13),
  POS(77, 11),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_self = {
  t_lambda_self, NULL, 5, 1,
  {"75_16_value\000"}
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // range(text 2 -1)
  var_range, 3, var_76_12_text, num_2, minus_num_1, 1, LOCAL(1),
  //  range(text 2 -1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(79, 16),
  POS(79, 15)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(new_indent) text)
  var_tabs_and_spaces, 1, var_73_8_new_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(new_indent) text)
  var_append, 2, LOCAL(1), var_76_12_text, 1, LOCAL(2),
  //  append(tabs_and_spaces(new_indent) text)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(80, 23),
  POS(80, 16),
  POS(80, 15)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std_types__tuple___serialize[] = {
  5, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 89_5_self
  var_undefined, var_90_5_indent,
  // is_defined
  var_is_defined, 1, var_90_5_indent, 1, LOCAL(1),
  // $new_indent
  var_if, 3, LOCAL(1), lambda_7, lambda_8, 1, var_92_4_new_indent,
  // $items self.to_list
  var_to_list, 1, LOCAL(3), 1, LOCAL(4),
  // map_reduce $contents
  var_map_reduce, 4, LOCAL(4), lambda_items, var_append, string_1, 1, LOCAL(5),
  // serialization_tag_of(self)) <@(length_of(items))>
  var_serialization_tag_of, 1, LOCAL(3), 1, LOCAL(1),
  // length_of(items))>
  var_length_of, 1, LOCAL(4), 1, LOCAL(2),
  // $header
  var_std__string, 4, LOCAL(1), string_3, LOCAL(2), string_4, 1, var_102_4_header,
  // is_defined &header -> append(tabs_and_spaces(indent) header)
  var_is_defined, 1, var_90_5_indent, 1, LOCAL(1),
  // update_if indent.is_defined &header -> append(tabs_and_spaces(indent) header)
  var_update_if, 3, LOCAL(1), var_102_4_header, lambda_9, 1, var_102_4_header,
  // append header contents
  var_append, 2, var_102_4_header, LOCAL(5), TAIL_CALL,
  POS(94, 14),
  POS(92, 3),
  POS(97, 3),
  POS(98, 3),
  POS(104, 9),
  POS(104, 40),
  POS(102, 3),
  POS(105, 20),
  POS(105, 3),
  POS(106, 3),
  LOCAL(4),
  LOCAL(5),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__tuple___serialize = {
  t_func_std_types__tuple___serialize, NULL, 10, 3,
  {"97_4_items\000", "98_15_contents\000", "89_5_self\000"}
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // indent+2
  var_std__plus, 2, var_90_5_indent, num_2, 1, LOCAL(1),
  //  indent+2
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(95, 10),
  POS(95, 9)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(96, 9)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_items[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 99_13_item
  // serialize(item new_indent)
  var_serialize, 2, LOCAL(2), var_92_4_new_indent, 1, LOCAL(1),
  // -> serialize(item new_indent)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(99, 22),
  POS(99, 19),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_items = {
  t_lambda_items, NULL, 2, 1,
  {"99_13_item\000"}
};

static TAB_NUM t_lambda_9[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) header)
  var_tabs_and_spaces, 1, var_90_5_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) header)
  var_append, 2, LOCAL(1), var_102_4_header, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) header)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(105, 49),
  POS(105, 42),
  POS(105, 41)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std_types__tuple___deserializer_of[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 110_5_type
  LOCAL(3), // 111_5_items
  // new_tuple(type items)
  var_new_tuple, 2, LOCAL(2), LOCAL(3), 1, LOCAL(1),
  // -> new_tuple(type items)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(113, 6),
  POS(113, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__tuple___deserializer_of = {
  t_func_std_types__tuple___deserializer_of, NULL, 2, 2,
  {"111_5_items\000", "110_5_type\000"}
};

static TAB_NUM t_module_entry[] = {
  0, // locals
  0, // parameters
  // register_type &deserializers std_types::tuple
  var_register_type, 2, var_deserializers, var_std_types__tuple, 1, var_deserializers,
  LET, 1, 0, TAIL_CALL,
  POS(115, 1)
};

static FUNCTION_INFO i_module_entry = {
  t_module_entry, NULL, 1, 0,
  {}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_STRING_8, 5, {.str_8 = "tuple"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__first}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__second}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__third}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__fourth}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__fifth}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__tuple___debug__to_string}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_STRING_8, 18, {.str_8 = "<tuple of 1 item>\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_STRING_8, 10, {.str_8 = "<tuple of "}},
  {FLT_STRING_8, 8, {.str_8 = " items>\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_self}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_STRING_8, 6, {.str_8 = "tuple\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__tuple___serialize}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_items}},
  {FLT_STRING_8, 2, {.str_8 = " <"}},
  {FLT_STRING_8, 2, {.str_8 = ">\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__tuple___deserializer_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_module_entry}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_tuple, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__tuple__attributes[] = {
  {-var_is_a_tuple, -var_true},
  {-var_serialization_tag_of, -str_tuple},
  {var_debug__to_string, -func_std_types__tuple___debug__to_string},
  {var_serialize, -func_std_types__tuple___serialize},
  {-var_deserializer_of, -func_std_types__tuple___deserializer_of}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_tuple\000std", NULL,
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
    "is_a_tuple\000", NULL,
    {.position = POS(31, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(31, 31)}
  },
  {
    FOT_UNKNOWN, 0, 5,
    "tuple\000std_types", std_types__tuple__attributes,
    {.position = POS(32, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(32, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(34, 19)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "first\000std", NULL,
    {.const_idx = -func_std__first}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "second\000std", NULL,
    {.const_idx = -func_std__second}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "third\000std", NULL,
    {.const_idx = -func_std__third}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "fourth\000std", NULL,
    {.const_idx = -func_std__fourth}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "fifth\000std", NULL,
    {.const_idx = -func_std__fifth}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_string\000debug", NULL,
    {.position = POS(58, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "60_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "61_5_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "62_5_depth\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_list\000", NULL,
    {.position = POS(64, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(66, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(66, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "67_8_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(67, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(69, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(71, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(68, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "73_8_new_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(73, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(76, 51)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "76_12_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(79, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(80, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(80, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(74, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(87, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "90_5_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(90, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(94, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "92_4_new_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "102_4_header\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(105, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deserializer_of\000", NULL,
    {.position = POS(108, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new_tuple\000", NULL,
    {.position = POS(113, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deserializers\000", NULL,
    {.position = POS(115, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "register_type\000", NULL,
    {.position = POS(115, 1)}
  }
};

extern FUNKY_MODULE module__basic__types__collections__tuples__tuple_autogen;

static FUNKY_MODULE *required_modules[] = {
  &module__basic__types__collections__tuples__tuple_autogen
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__collections__tuples__tuple = {
  "_basic__types__collections__tuples__tuple", // module name
  "basic/types/collections/tuples/tuple.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO|FEAT_INITIALIZER,
  .marker = 0,
  1, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  34, // number of constants
  44, // number of variables
  required_modules,
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
