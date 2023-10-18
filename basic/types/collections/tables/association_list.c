#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  num_0 = -1,
  tuple_62_0 = -2,
  uni_NONE = -3,
  func_std_types__association_list = -4,
  lambda_1 = -5,
  lambda_2 = -6,
  lambda_value_is_defined = -7,
  lambda_3 = -8,
  num_1 = -9,
  lambda_4 = -10,
  lambda_5 = -11,
  lambda_6 = -12,
  lambda_7 = -13,
  func_empty_association_list_entry___retrieve = -14,
  func_association_list_entry___retrieve = -15,
  lambda_8 = -16,
  lambda_9 = -17,
  func_empty_association_list_entry___insert = -18,
  func_association_list_entry___insert = -19,
  func_empty_association_list_entry___delete = -20,
  func_association_list_entry___delete = -21,
  lambda_10 = -22,
  lambda_11 = -23,
  func_empty_association_list_entry___for_each_1 = -24,
  func_empty_association_list_entry___for_each_2 = -25,
  func_association_list_entry___for_each_1 = -26,
  func_association_list_entry___for_each_2 = -27,
  func_std_types__association_list___for_each = -28,
  num_2 = -29,
  lambda_12 = -30,
  lambda_next = -31,
  lambda_13 = -32,
  lambda_14 = -33,
  lambda_15 = -34,
  lambda_2_next = -35,
  lambda_16 = -36,
  lambda_17 = -37,
  func_empty_association_list_entry___map = -38,
  func_association_list_entry___map = -39,
  func_std_types__association_list___map = -40,
  str_association_list = -41
};

enum {
  var__START = FIRST_VAR-1,
  var_contents_of, // attribute
  var_std__assign, // extern
  var_retrieve, // attribute
  var_insert, // attribute
  var_delete, // attribute
  var_std__is_an_association_list, // attribute
  var_std_types__object, // extern
  var_is_an_association_list, // extern polymorphic
  var_false, // extern
  var_std_types__association_list, // derived
  var_true, // extern
  var_std_types__table, // extern
  var_empty_association_list_entry, // derived
  var_length_of, // extern polymorphic
  var_std__empty_association_list, // derived
  var_association_list_entry, // initialized compound
  var_undefined, // extern
  var_tuple, // extern
  var_99_0_myself, // dynamic
  var_100_0_key, // dynamic
  var_101_0_value, // dynamic
  var_103_1_contents, // dynamic
  var_std__equal, // extern
  var_is_defined, // extern
  var_std__plus, // extern
  var_if, // extern
  var_std__minus, // extern
  var_133_40_key, // dynamic
  var_134_14_my_value, // dynamic
  var_134_24_my_link, // dynamic
  var_new, // extern
  var_not, // extern
  var_157_38_key, // dynamic
  var_158_6_my_key, // dynamic
  var_158_14_my_value, // dynamic
  var_158_24_my_link, // dynamic
  var_for_each_1, // attribute
  var_for_each_2, // attribute
  var_callback, // derived
  var_link, // derived
  var_next, // extern
  var_for_each, // extern polymorphic
  var_225_0_finally, // dynamic
  var_227_1_contents, // dynamic
  var_break, // extern
  var_parameter_count_of, // extern
  var_is_undefined, // extern
  var_map, // extern polymorphic
  var_serialization_tag_of, // extern polymorphic
  var__END
};


static TAB_NUM t_func_std_types__association_list[] = {
  1, // locals
  -3, // parameters
  MYSELF_PARAMETER, var_99_0_myself,
  MANDATORY_PARAMETER, var_100_0_key,
  uni_NONE, var_101_0_value,
  // $contents contents_of(myself)
  var_contents_of, 1, var_99_0_myself, 1, var_103_1_contents,
  // NONE == value
  var_std__equal, 2, uni_NONE, var_101_0_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(103, 3),
  POS(105, 5),
  POS(104, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // retrieve(contents key)
  var_retrieve, 2, var_103_1_contents, var_100_0_key, 1, LOCAL(1),
  //  retrieve(contents key)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(106, 8),
  POS(106, 7)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_101_0_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_value_is_defined, lambda_5, TAIL_CALL,
  POS(109, 15),
  POS(108, 7)
};

static TAB_NUM t_lambda_value_is_defined[] = {
  1, // locals
  0, // parameters
  // insert &contents $success key value
  var_insert, 3, var_103_1_contents, var_100_0_key, var_101_0_value, 2, var_103_1_contents, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(110, 11),
  POS(111, 11)
};

static TAB_NUM t_lambda_3[] = {
  3, // locals
  0, // parameters
  // length_of(myself)+1
  var_length_of, 1, var_99_0_myself, 1, LOCAL(1),
  // length_of(myself)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_99_0_myself, var_contents_of, var_103_1_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(116, 28),
  POS(116, 28),
  POS(114, 15),
  POS(113, 15)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // .contents_of contents)
  LET, -1, var_99_0_myself, var_contents_of, var_103_1_contents, LOCAL(1),
  //  myself(.contents_of contents)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(117, 23),
  POS(117, 15)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // delete &contents $success key
  var_delete, 2, var_103_1_contents, var_100_0_key, 2, var_103_1_contents, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, lambda_7, TAIL_CALL,
  POS(119, 11),
  POS(120, 11)
};

static TAB_NUM t_lambda_6[] = {
  3, // locals
  0, // parameters
  // length_of(myself)-1
  var_length_of, 1, var_99_0_myself, 1, LOCAL(1),
  // length_of(myself)-1
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_99_0_myself, var_contents_of, var_103_1_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(125, 28),
  POS(125, 28),
  POS(123, 15),
  POS(122, 15)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  myself
  LET, 1, var_99_0_myself, TAIL_CALL,
  POS(126, 15)
};

static TAB_NUM t_func_empty_association_list_entry___retrieve[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(1),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(131, 54)
};

static TAB_NUM t_func_association_list_entry___retrieve[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 133_35_self
  var_133_40_key,
  // self $my_key $my_value $my_link
  LOCAL(2), 0, 3, LOCAL(3), var_134_14_my_value, var_134_24_my_link,
  // key == my_key
  var_std__equal, 2, var_133_40_key, LOCAL(3), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(134, 3),
  POS(136, 5),
  POS(135, 3)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  my_value
  LET, 1, var_134_14_my_value, TAIL_CALL,
  POS(137, 7)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  // retrieve my_link key
  var_retrieve, 2, var_134_24_my_link, var_133_40_key, TAIL_CALL,
  POS(138, 7)
};

static TAB_NUM t_func_empty_association_list_entry___insert[] = {
  3, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(2), // 143_45_key
  LOCAL(3), // 143_49_value
  // new(association_list_entry key value empty_association_list_entry)
  var_new, 4, var_association_list_entry, LOCAL(2), LOCAL(3), var_empty_association_list_entry, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(145, 5),
  POS(144, 3)
};

static TAB_NUM t_func_association_list_entry___insert[] = {
  6, // locals
  3, // parameters
  LOCAL(3), // 148_33_self
  LOCAL(4), // 148_38_key
  LOCAL(5), // 148_42_value
  // delete &self $did_delete key
  var_delete, 2, LOCAL(3), LOCAL(4), 2, LOCAL(3), LOCAL(6),
  // new(association_list_entry key value self) not(did_delete)
  var_new, 4, var_association_list_entry, LOCAL(4), LOCAL(5), LOCAL(3), 1, LOCAL(1),
  // not(did_delete)
  var_not, 1, LOCAL(6), 1, LOCAL(2),
  // -> new(association_list_entry key value self) not(did_delete)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(149, 3),
  POS(150, 6),
  POS(150, 49),
  POS(150, 3)
};

static TAB_NUM t_func_empty_association_list_entry___delete[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 155_39_self
  LOCAL(1),
  // -> self false
  LET, 2, LOCAL(2), var_false, TAIL_CALL,
  POS(155, 51)
};

static TAB_NUM t_func_association_list_entry___delete[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 157_33_self
  var_157_38_key,
  // self $my_key $my_value $my_link
  LOCAL(2), 0, 3, var_158_6_my_key, var_158_14_my_value, var_158_24_my_link,
  // key == my_key
  var_std__equal, 2, var_157_38_key, var_158_6_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(158, 3),
  POS(160, 5),
  POS(159, 3)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  my_link true
  LET, 2, var_158_24_my_link, var_true, TAIL_CALL,
  POS(161, 7)
};

static TAB_NUM t_lambda_11[] = {
  2, // locals
  0, // parameters
  // delete &my_link key $did_delete
  var_delete, 2, var_158_24_my_link, var_157_38_key, 2, var_158_24_my_link, LOCAL(2),
  // new(association_list_entry my_key my_value my_link) did_delete
  var_new, 4, var_association_list_entry, var_158_6_my_key, var_158_14_my_value, var_158_24_my_link, 1, LOCAL(1),
  // -> new(association_list_entry my_key my_value my_link) did_delete
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(163, 7),
  POS(164, 10),
  POS(164, 7)
};

static TAB_NUM t_func_empty_association_list_entry___for_each_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // !link undefined
  LET, 1, var_undefined, 1, var_link,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(176, 3),
  POS(177, 3)
};

static TAB_NUM t_func_empty_association_list_entry___for_each_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // !link undefined
  LET, 1, var_undefined, 1, var_link,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(180, 3),
  POS(181, 3)
};

static TAB_NUM t_func_association_list_entry___for_each_1[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 183_37_self
  // self $_my_key $my_value !link
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(3), var_link,
  // callback! my_value
  var_callback, 1, LOCAL(3), IO_TAIL_CALL,
  POS(184, 3),
  POS(185, 3)
};

static TAB_NUM t_func_association_list_entry___for_each_2[] = {
  3, // locals
  1, // parameters
  LOCAL(1), // 187_37_self
  // self $my_key $my_value !link
  LOCAL(1), 0, 3, LOCAL(2), LOCAL(3), var_link,
  // callback! my_key my_value
  var_callback, 2, LOCAL(2), LOCAL(3), IO_TAIL_CALL,
  POS(188, 3),
  POS(189, 3)
};

static TAB_NUM t_func_std_types__association_list___for_each[] = {
  4, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 223_0_self
  MANDATORY_PARAMETER, LOCAL(4), // 224_0_body
  var_next, var_225_0_finally,
  // $contents contents_of(self)
  var_contents_of, 1, LOCAL(3), 1, var_227_1_contents,
  // !callback body
  LET, 1, LOCAL(4), 1, var_callback,
  // !break finally
  LET, 1, var_225_0_finally, 1, var_break,
  // parameter_count_of(body) == 2:
  var_parameter_count_of, 1, LOCAL(4), 1, LOCAL(1),
  // parameter_count_of(body) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_12, lambda_15, IO_TAIL_CALL,
  POS(227, 3),
  POS(228, 3),
  POS(229, 3),
  POS(231, 5),
  POS(231, 5),
  POS(230, 3)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  // !next:
  LET, 1, lambda_next, 1, var_next,
  // for_each_2! contents
  var_for_each_2, 1, var_227_1_contents, IO_TAIL_CALL,
  POS(232, 7),
  POS(238, 7)
};

static TAB_NUM t_lambda_next[] = {
  1, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_link, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_13, lambda_14, IO_TAIL_CALL,
  POS(234, 16),
  POS(233, 9)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  // finally!
  var_225_0_finally, 0, IO_TAIL_CALL,
  POS(235, 13)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  // for_each_2! link
  var_for_each_2, 1, var_link, IO_TAIL_CALL,
  POS(236, 13)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  // !next:
  LET, 1, lambda_2_next, 1, var_next,
  // for_each_1! contents
  var_for_each_1, 1, var_227_1_contents, IO_TAIL_CALL,
  POS(240, 7),
  POS(246, 7)
};

static TAB_NUM t_lambda_2_next[] = {
  1, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_link, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_16, lambda_17, IO_TAIL_CALL,
  POS(242, 16),
  POS(241, 9)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  // finally!
  var_225_0_finally, 0, IO_TAIL_CALL,
  POS(243, 13)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // for_each_1! link
  var_for_each_1, 1, var_link, IO_TAIL_CALL,
  POS(244, 13)
};

static TAB_NUM t_func_empty_association_list_entry___map[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 251_36_self
  LOCAL(1),
  // -> self
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(251, 53)
};

static TAB_NUM t_func_association_list_entry___map[] = {
  7, // locals
  2, // parameters
  LOCAL(3), // 253_30_self
  LOCAL(4), // 253_35_function
  // self $my_key $my_value $my_link
  LOCAL(3), 0, 3, LOCAL(5), LOCAL(6), LOCAL(7),
  // function(my_value) map(my_link function)
  LOCAL(4), 1, LOCAL(6), 1, LOCAL(1),
  // map(my_link function)
  var_map, 2, LOCAL(7), LOCAL(4), 1, LOCAL(2),
  // new self my_key function(my_value) map(my_link function)
  var_new, 4, LOCAL(3), LOCAL(5), LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(254, 3),
  POS(255, 19),
  POS(255, 38),
  POS(255, 3)
};

static TAB_NUM t_func_std_types__association_list___map[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 265_0_self
  LOCAL(3), // 266_0_function
  // contents_of function
  var_contents_of, 1, LOCAL(2), 1, LOCAL(1),
  // map &self.contents_of function
  var_map, 2, LOCAL(1), LOCAL(3), 1, LOCAL(1),
  // self.contents_of function
  LET, -1, LOCAL(2), var_contents_of, LOCAL(1), LOCAL(2),
  // -> self
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(268, 13),
  POS(268, 3),
  POS(268, 8),
  POS(269, 3)
};

static int tuple_62_0_arguments[] = {
  -var_undefined, -var_undefined, -var_undefined
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_TUPLE, 3, {.arguments = tuple_62_0_arguments}},
  {FLT_UNIQUE, 0, {.str_8 = "NONE"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__association_list}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_value_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_association_list_entry___retrieve}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_association_list_entry___retrieve}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_association_list_entry___insert}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_association_list_entry___insert}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_association_list_entry___delete}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_association_list_entry___delete}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_association_list_entry___for_each_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_association_list_entry___for_each_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_association_list_entry___for_each_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_association_list_entry___for_each_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__association_list___for_each}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_association_list_entry___map}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_association_list_entry___map}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__association_list___map}},
  {FLT_STRING_8, 16, {.str_8 = "association_list"}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_an_association_list, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__association_list__attributes[] = {
  {-var_is_an_association_list, -var_true},
  {-var_contents_of, -var_empty_association_list_entry},
  {-var_length_of, -num_0},
  {TYPE_FUNCTION, -func_std_types__association_list},
  {var_for_each, -func_std_types__association_list___for_each},
  {var_map, -func_std_types__association_list___map},
  {-var_serialization_tag_of, -str_association_list}
};

static ATTRIBUTE_DEFINITION empty_association_list_entry__attributes[] = {
  {var_retrieve, -func_empty_association_list_entry___retrieve},
  {var_insert, -func_empty_association_list_entry___insert},
  {var_delete, -func_empty_association_list_entry___delete},
  {var_for_each_1, -func_empty_association_list_entry___for_each_1},
  {var_for_each_2, -func_empty_association_list_entry___for_each_2},
  {var_map, -func_empty_association_list_entry___map}
};

static ATTRIBUTE_DEFINITION association_list_entry__attributes[] = {
  {var_retrieve, -func_association_list_entry___retrieve},
  {var_insert, -func_association_list_entry___insert},
  {var_delete, -func_association_list_entry___delete},
  {var_for_each_1, -func_association_list_entry___for_each_1},
  {var_for_each_2, -func_association_list_entry___for_each_2},
  {var_map, -func_association_list_entry___map}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "contents_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(25, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "retrieve\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "insert\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "delete\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_an_association_list\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(34, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_association_list\000", NULL,
    {.position = POS(34, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(34, 43)}
  },
  {
    FOT_DERIVED, 0, 7,
    "association_list\000std_types", std_types__association_list__attributes,
    {"table\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(35, 53)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "table\000std_types", NULL,
    {.position = POS(37, 30)}
  },
  {
    FOT_DERIVED, 0, 6,
    "empty_association_list_entry\000", empty_association_list_entry__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "length_of\000", NULL,
    {.position = POS(52, 30)}
  },
  {
    FOT_DERIVED, 0, 0,
    "empty_association_list\000std", NULL,
    {"association_list\000std_types"}
  },
  {
    FOT_INITIALIZED, 0, 6,
    "association_list_entry\000", association_list_entry__attributes,
    {.const_idx = -tuple_62_0}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(62, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(62, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "99_0_myself\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "100_0_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "101_0_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "103_1_contents\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(105, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(109, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(116, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(111, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(125, 28)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "133_40_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "134_14_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "134_24_my_link\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(145, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(150, 49)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "157_38_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "158_6_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "158_14_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "158_24_my_link\000", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "for_each_1\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "for_each_2\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_DERIVED, 0, 0,
    "callback\000", NULL,
    {"undefined\000"}
  },
  {
    FOT_DERIVED, 0, 0,
    "link\000", NULL,
    {"undefined\000"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(177, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
    {.position = POS(191, 30)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "225_0_finally\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "227_1_contents\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(229, 4)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(231, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(234, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map\000", NULL,
    {.position = POS(251, 31)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(271, 30)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__collections__tables__association_list = {
  "_basic__types__collections__tables__association_list", // module name
  "basic/types/collections/tables/association_list.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  41, // number of constants
  49, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
