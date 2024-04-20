#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std_types__set___merge = -1,
  lambda_1 = -2,
  lambda_2 = -3,
  func_std_types__set___to_list = -4,
  lambda_3 = -5,
  lambda_4 = -6,
  func_std_types__set___match = -7,
  lambda_5 = -8,
  lambda_6 = -9,
  num_1 = -10,
  lambda_7 = -11,
  lambda_8 = -12,
  func_std_types__set___match_back = -13,
  lambda_9 = -14,
  lambda_10 = -15,
  minus_num_1 = -16,
  lambda_11 = -17,
  lambda_12 = -18,
  func_std_types__set___search = -19,
  num_0 = -20,
  lambda_13 = -21,
  lambda_14 = -22,
  func_search_forwards = -23,
  lambda_15 = -24,
  lambda_selfstreami = -25,
  lambda_16 = -26,
  lambda_17 = -27,
  lambda_18 = -28,
  lambda_19 = -29,
  func_search_backwards = -30,
  lambda_20 = -31,
  lambda_2_selfstreami = -32,
  lambda_21 = -33,
  lambda_22 = -34,
  lambda_23 = -35,
  lambda_24 = -36,
  func_std_types__set___serialize = -37,
  lambda_25 = -38,
  num_2 = -39,
  lambda_26 = -40,
  lambda_self = -41,
  string_1 = -42,
  string_2 = -43,
  string_3 = -44,
  lambda_27 = -45,
  func_std_types__set___deserializer_of = -46,
  lambda_28 = -47,
  lambda_29 = -48
};

enum {
  var__START = FIRST_VAR-1,
  var_std__is_a_set, // attribute
  var_std__assign, // extern
  var_std_types__object, // extern
  var_is_a_set, // extern polymorphic
  var_false, // extern
  var_std_types__set, // derived
  var_true, // extern
  var_std_types__collection, // extern
  var_merge, // extern polymorphic
  var_43_0_self, // dynamic
  var_next, // extern
  var_for_each, // extern
  var_to_list, // extern polymorphic
  var_58_1_items, // dynamic
  var_empty_list, // extern
  var_push, // extern
  var_match, // extern polymorphic
  var_102_0_self, // dynamic
  var_103_0_str, // dynamic
  var_is_empty, // extern
  var_undefined, // extern
  var_if, // extern
  var_match_back, // extern polymorphic
  var_149_0_self, // dynamic
  var_150_0_str, // dynamic
  var_search, // extern polymorphic
  var_183_0_self, // dynamic
  var_184_0_stream, // dynamic
  var_185_0_nth, // dynamic
  var_187_1_i, // dynamic
  var_188_1_n, // dynamic
  var_length_of, // extern
  var_std__less, // extern
  var_std__not, // extern
  var_dec, // extern
  var_inc, // extern
  var_serialize, // extern polymorphic
  var_235_0_indent, // dynamic
  var_is_defined, // extern
  var_std__plus, // extern
  var_237_1_new_indent, // dynamic
  var_append, // extern
  var_map_reduce, // extern
  var_serialization_tag_of, // extern
  var_246_1_header, // dynamic
  var_std__string, // extern
  var_tabs_and_spaces, // extern
  var_update_if, // extern
  var_deserializer_of, // extern polymorphic
  var_257_1_obj, // dynamic
  var_empty_collection_of, // extern
  var__END
};


static TAB_NUM t_func_std_types__set___merge[] = {
  1, // locals
  2, // parameters
  var_43_0_self,
  LOCAL(1), // 44_0_other
  // for_each other
  var_for_each, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(46, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 47_3_key
  // self(key) true
  var_43_0_self, 2, LOCAL(1), var_true, 1, var_43_0_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(48, 8),
  POS(49, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_43_0_self, TAIL_CALL,
  POS(50, 7)
};

static TAB_NUM t_func_std_types__set___to_list[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 56_0_self
  // $items empty_list
  LET, 1, var_empty_list, 1, var_58_1_items,
  // for_each self
  var_for_each, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(58, 3),
  POS(59, 3)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 60_3_item
  // push &items item
  var_push, 2, var_58_1_items, LOCAL(1), 1, var_58_1_items,
  // next
  var_next, 0, TAIL_CALL,
  POS(61, 7),
  POS(62, 7)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  items
  LET, 1, var_58_1_items, TAIL_CALL,
  POS(63, 7)
};

static TAB_NUM t_func_std_types__set___match[] = {
  1, // locals
  2, // parameters
  var_102_0_self,
  var_103_0_str,
  // is_empty
  var_is_empty, 1, var_103_0_str, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_5, lambda_6, TAIL_CALL,
  POS(106, 9),
  POS(105, 3)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(107, 7)
};

static TAB_NUM t_lambda_6[] = {
  2, // locals
  0, // parameters
  // str(1))
  var_103_0_str, 1, num_1, 1, LOCAL(1),
  // self(str(1))
  var_102_0_self, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_7, lambda_8, TAIL_CALL,
  POS(110, 14),
  POS(110, 9),
  POS(109, 7)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(111, 11)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(112, 11)
};

static TAB_NUM t_func_std_types__set___match_back[] = {
  1, // locals
  2, // parameters
  var_149_0_self,
  var_150_0_str,
  // is_empty
  var_is_empty, 1, var_150_0_str, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_9, lambda_10, TAIL_CALL,
  POS(153, 9),
  POS(152, 3)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(154, 7)
};

static TAB_NUM t_lambda_10[] = {
  2, // locals
  0, // parameters
  // str(-1))
  var_150_0_str, 1, minus_num_1, 1, LOCAL(1),
  // self(str(-1))
  var_149_0_self, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_11, lambda_12, TAIL_CALL,
  POS(157, 14),
  POS(157, 9),
  POS(156, 7)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(158, 11)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(159, 11)
};

static TAB_NUM t_func_std_types__set___search[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_183_0_self,
  MANDATORY_PARAMETER, var_184_0_stream,
  num_1, var_185_0_nth,
  // $i undefined
  LET, 1, var_undefined, 1, var_187_1_i,
  // $n length_of(stream)
  var_length_of, 1, var_184_0_stream, 1, var_188_1_n,
  // nth < 0:
  var_std__less, 2, var_185_0_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_13, lambda_14, TAIL_CALL,
  POS(187, 3),
  POS(188, 3),
  POS(190, 5),
  POS(189, 3)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  // !i n
  LET, 1, var_188_1_n, 1, var_187_1_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(191, 7),
  POS(192, 7)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  // !i 1
  LET, 1, num_1, 1, var_187_1_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(194, 7),
  POS(195, 7)
};

static TAB_NUM t_func_search_forwards[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_188_1_n, var_187_1_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_15, lambda_19, TAIL_CALL,
  POS(199, 12),
  POS(199, 12),
  POS(198, 5)
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // stream(i)):
  var_184_0_stream, 1, var_187_1_i, 1, LOCAL(1),
  // self(stream(i)):
  var_183_0_self, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_selfstreami, lambda_18, TAIL_CALL,
  POS(201, 16),
  POS(201, 11),
  POS(200, 9)
};

static TAB_NUM t_lambda_selfstreami[] = {
  1, // locals
  0, // parameters
  // 1:
  var_std__less, 2, num_1, var_185_0_nth, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_16, lambda_17, TAIL_CALL,
  POS(203, 21),
  POS(202, 13)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  // dec &nth
  var_dec, 1, var_185_0_nth, 1, var_185_0_nth,
  // inc &i
  var_inc, 1, var_187_1_i, 1, var_187_1_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(204, 17),
  POS(205, 17),
  POS(206, 17)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  i 1
  LET, 2, var_187_1_i, num_1, TAIL_CALL,
  POS(207, 17)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_187_1_i, 1, var_187_1_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(209, 13),
  POS(210, 13)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(211, 9)
};

static TAB_NUM t_func_search_backwards[] = {
  2, // locals
  0, // parameters
  // i >= 1
  var_std__less, 2, var_187_1_i, num_1, 1, LOCAL(1),
  // i >= 1
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_20, lambda_24, TAIL_CALL,
  POS(215, 7),
  POS(215, 7),
  POS(214, 5)
};

static TAB_NUM t_lambda_20[] = {
  2, // locals
  0, // parameters
  // stream(i)):
  var_184_0_stream, 1, var_187_1_i, 1, LOCAL(1),
  // self(stream(i)):
  var_183_0_self, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_2_selfstreami, lambda_23, TAIL_CALL,
  POS(218, 16),
  POS(218, 11),
  POS(217, 9)
};

static TAB_NUM t_lambda_2_selfstreami[] = {
  1, // locals
  0, // parameters
  // nth < -1:
  var_std__less, 2, var_185_0_nth, minus_num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21, lambda_22, TAIL_CALL,
  POS(220, 15),
  POS(219, 13)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  // inc &nth
  var_inc, 1, var_185_0_nth, 1, var_185_0_nth,
  // dec &i
  var_dec, 1, var_187_1_i, 1, var_187_1_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(221, 17),
  POS(222, 17),
  POS(223, 17)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  i 1
  LET, 2, var_187_1_i, num_1, TAIL_CALL,
  POS(224, 17)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_187_1_i, 1, var_187_1_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(226, 13),
  POS(227, 13)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(228, 9)
};

static TAB_NUM t_func_std_types__set___serialize[] = {
  4, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 234_0_self
  var_undefined, var_235_0_indent,
  // is_defined
  var_is_defined, 1, var_235_0_indent, 1, LOCAL(1),
  // $new_indent
  var_if, 3, LOCAL(1), lambda_25, lambda_26, 1, var_237_1_new_indent,
  // map_reduce $contents
  var_map_reduce, 4, LOCAL(3), lambda_self, var_append, string_1, 1, LOCAL(4),
  // serialization_tag_of(self)) <@(length_of(self))>
  var_serialization_tag_of, 1, LOCAL(3), 1, LOCAL(1),
  // length_of(self))>
  var_length_of, 1, LOCAL(3), 1, LOCAL(2),
  // $header
  var_std__string, 4, LOCAL(1), string_2, LOCAL(2), string_3, 1, var_246_1_header,
  // is_defined &header -> append(tabs_and_spaces(indent) header)
  var_is_defined, 1, var_235_0_indent, 1, LOCAL(1),
  // update_if indent.is_defined &header -> append(tabs_and_spaces(indent) header)
  var_update_if, 3, LOCAL(1), var_246_1_header, lambda_27, 1, var_246_1_header,
  // append header contents
  var_append, 2, var_246_1_header, LOCAL(4), TAIL_CALL,
  POS(239, 14),
  POS(237, 3),
  POS(242, 3),
  POS(248, 9),
  POS(248, 40),
  POS(246, 3),
  POS(249, 20),
  POS(249, 3),
  POS(250, 3)
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // indent+2
  var_std__plus, 2, var_235_0_indent, num_2, 1, LOCAL(1),
  //  indent+2
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(240, 10),
  POS(240, 9)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(241, 9)
};

static TAB_NUM t_lambda_self[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 243_7_value
  // serialize(value new_indent)
  var_serialize, 2, LOCAL(2), var_237_1_new_indent, 1, LOCAL(1),
  // -> serialize(value new_indent)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(243, 22),
  POS(243, 19)
};

static TAB_NUM t_lambda_27[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) header)
  var_tabs_and_spaces, 1, var_235_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) header)
  var_append, 2, LOCAL(1), var_246_1_header, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) header)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(249, 49),
  POS(249, 42),
  POS(249, 41)
};

static TAB_NUM t_func_std_types__set___deserializer_of[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 254_0_type
  LOCAL(2), // 255_0_items
  // $obj empty_collection_of(type)
  var_empty_collection_of, 1, LOCAL(1), 1, var_257_1_obj,
  // for_each items
  var_for_each, 3, LOCAL(2), lambda_28, lambda_29, TAIL_CALL,
  POS(257, 3),
  POS(258, 3)
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 259_3_item
  // obj(item) true
  var_257_1_obj, 2, LOCAL(1), var_true, 1, var_257_1_obj,
  // next
  var_next, 0, TAIL_CALL,
  POS(260, 8),
  POS(261, 7)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  //  obj
  LET, 1, var_257_1_obj, TAIL_CALL,
  POS(262, 7)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__set___merge}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__set___to_list}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__set___match}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__set___match_back}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__set___search}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_forwards}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_selfstreami}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_backwards}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_selfstreami}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__set___serialize}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_self}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_STRING_8, 2, {.str_8 = " <"}},
  {FLT_STRING_8, 2, {.str_8 = ">\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__set___deserializer_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_set, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__set__attributes[] = {
  {-var_is_a_set, -var_true},
  {var_merge, -func_std_types__set___merge},
  {var_to_list, -func_std_types__set___to_list},
  {var_match, -func_std_types__set___match},
  {var_match_back, -func_std_types__set___match_back},
  {var_search, -func_std_types__set___search},
  {var_serialize, -func_std_types__set___serialize},
  {-var_deserializer_of, -func_std_types__set___deserializer_of}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_set\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(27, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(28, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_set\000", NULL,
    {.position = POS(28, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(28, 29)}
  },
  {
    FOT_DERIVED, 0, 8,
    "set\000std_types", std_types__set__attributes,
    {"collection\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(29, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "collection\000std_types", NULL,
    {.position = POS(31, 17)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "merge\000", NULL,
    {.position = POS(39, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "43_0_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(49, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(46, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_list\000", NULL,
    {.position = POS(52, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "58_1_items\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(58, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(61, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match\000", NULL,
    {.position = POS(67, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "102_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "103_0_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(106, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(107, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(109, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match_back\000", NULL,
    {.position = POS(114, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "149_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "150_0_str\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "search\000", NULL,
    {.position = POS(161, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "183_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "184_0_stream\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "185_0_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "187_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "188_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(188, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(190, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(199, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(204, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(205, 17)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(232, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "235_0_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(239, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(240, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "237_1_new_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(244, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(242, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(248, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "246_1_header\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(247, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(249, 49)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(249, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deserializer_of\000", NULL,
    {.position = POS(252, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "257_1_obj\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(257, 8)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__collections__sets__set = {
  "_basic__types__collections__sets__set", // module name
  "basic/types/collections/sets/set.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  48, // number of constants
  51, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
