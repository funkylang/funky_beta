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
  num_1 = -9,
  lambda_selfstr1 = -10,
  lambda_6 = -11,
  lambda_7 = -12,
  func_fail = -13,
  lambda_8 = -14,
  lambda_9 = -15,
  func_std_types__set___match_back = -16,
  lambda_10 = -17,
  lambda_11 = -18,
  minus_num_1 = -19,
  lambda_12 = -20,
  lambda_13 = -21,
  func_std_types__set___search = -22,
  num_0 = -23,
  lambda_14 = -24,
  lambda_15 = -25,
  func_search_forwards = -26,
  lambda_16 = -27,
  lambda_selfstreami = -28,
  lambda_17 = -29,
  lambda_18 = -30,
  lambda_19 = -31,
  lambda_20 = -32,
  func_search_backwards = -33,
  lambda_21 = -34,
  lambda_2_selfstreami = -35,
  lambda_22 = -36,
  lambda_23 = -37,
  lambda_24 = -38,
  lambda_25 = -39,
  func_std_types__set___debug__to_string = -40,
  lambda_26 = -41,
  lambda_27 = -42,
  str_empty = -43,
  string_1 = -44,
  lambda_28 = -45,
  lambda_29 = -46,
  lambda_30 = -47,
  string_2 = -48,
  str__with_1_item = -49,
  lambda_31 = -50,
  str__with = -51,
  str__items = -52,
  lambda_32 = -53,
  lambda_33 = -54,
  num_2 = -55,
  lambda_self = -56,
  string_3 = -57,
  func_std_types__set___serialize = -58,
  lambda_34 = -59,
  lambda_35 = -60,
  lambda_2_self = -61,
  string_4 = -62,
  string_5 = -63,
  lambda_36 = -64,
  func_std_types__set___deserializer_of = -65,
  lambda_37 = -66,
  lambda_38 = -67
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
  var_48_0_self, // dynamic
  var_next, // extern
  var_for_each, // extern
  var_to_list, // extern polymorphic
  var_63_1_items, // dynamic
  var_empty_list, // extern
  var_push, // extern
  var_match, // extern polymorphic
  var_107_0_self, // dynamic
  var_108_0_str, // dynamic
  var_110_1_rc, // dynamic
  var_result_count, // extern
  var_is_empty, // extern
  var_std__equal, // extern
  var_undefined, // extern
  var_if, // extern
  var_match_back, // extern polymorphic
  var_164_0_self, // dynamic
  var_165_0_str, // dynamic
  var_search, // extern polymorphic
  var_198_0_self, // dynamic
  var_199_0_stream, // dynamic
  var_200_0_nth, // dynamic
  var_202_1_i, // dynamic
  var_203_1_n, // dynamic
  var_length_of, // extern
  var_std__less, // extern
  var_std__not, // extern
  var_dec, // extern
  var_inc, // extern
  var_debug__to_string, // extern polymorphic
  var_249_0_self, // dynamic
  var_250_0_indent, // dynamic
  var_251_0_depth, // dynamic
  var_253_1_tag, // dynamic
  var_serialization_tag_of, // extern
  var_std__string, // extern
  var_257_1_len, // dynamic
  var_263_1_new_indent, // dynamic
  var_std__plus, // extern
  var_tabs_and_spaces, // extern
  var_std__minus, // extern
  var_append, // extern
  var_map_reduce, // extern
  var_cond, // extern
  var_serialize, // extern polymorphic
  var_278_0_indent, // dynamic
  var_is_defined, // extern
  var_280_1_new_indent, // dynamic
  var_289_1_header, // dynamic
  var_update_if, // extern
  var_deserializer_of, // extern polymorphic
  var_300_1_obj, // dynamic
  var_empty_collection_of, // extern
  var__END
};


static TAB_NUM t_func_std_types__set___merge[] = {
  1, // locals
  2, // parameters
  var_48_0_self,
  LOCAL(1), // 49_0_other
  // for_each other
  var_for_each, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(51, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 52_3_key
  // self(key) true
  var_48_0_self, 2, LOCAL(1), var_true, 1, var_48_0_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(53, 8),
  POS(54, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_48_0_self, TAIL_CALL,
  POS(55, 7)
};

static TAB_NUM t_func_std_types__set___to_list[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 61_0_self
  // $items empty_list
  LET, 1, var_empty_list, 1, var_63_1_items,
  // for_each self
  var_for_each, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(63, 3),
  POS(64, 3)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 65_3_item
  // push &items item
  var_push, 2, var_63_1_items, LOCAL(1), 1, var_63_1_items,
  // next
  var_next, 0, TAIL_CALL,
  POS(66, 7),
  POS(67, 7)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  items
  LET, 1, var_63_1_items, TAIL_CALL,
  POS(68, 7)
};

static TAB_NUM t_func_std_types__set___match[] = {
  1, // locals
  2, // parameters
  var_107_0_self,
  var_108_0_str,
  // $rc result_count
  LET, 1, var_result_count, 1, var_110_1_rc,
  // is_empty
  var_is_empty, 1, var_108_0_str, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_fail, lambda_5, TAIL_CALL,
  POS(110, 3),
  POS(112, 9),
  POS(111, 3)
};

static TAB_NUM t_lambda_5[] = {
  2, // locals
  0, // parameters
  // str(1)):
  var_108_0_str, 1, num_1, 1, LOCAL(1),
  // self(str(1)):
  var_107_0_self, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_selfstr1, func_fail, TAIL_CALL,
  POS(116, 14),
  POS(116, 9),
  POS(115, 7)
};

static TAB_NUM t_lambda_selfstr1[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_110_1_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, lambda_7, TAIL_CALL,
  POS(118, 13),
  POS(117, 11)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(119, 15)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  1 undefined
  LET, 2, num_1, var_undefined, TAIL_CALL,
  POS(120, 15)
};

static TAB_NUM t_func_fail[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_110_1_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(125, 7),
  POS(124, 5)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(126, 9)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(127, 9)
};

static TAB_NUM t_func_std_types__set___match_back[] = {
  1, // locals
  2, // parameters
  var_164_0_self,
  var_165_0_str,
  // is_empty
  var_is_empty, 1, var_165_0_str, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(168, 9),
  POS(167, 3)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(169, 7)
};

static TAB_NUM t_lambda_11[] = {
  2, // locals
  0, // parameters
  // str(-1))
  var_165_0_str, 1, minus_num_1, 1, LOCAL(1),
  // self(str(-1))
  var_164_0_self, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_12, lambda_13, TAIL_CALL,
  POS(172, 14),
  POS(172, 9),
  POS(171, 7)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(173, 11)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(174, 11)
};

static TAB_NUM t_func_std_types__set___search[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_198_0_self,
  MANDATORY_PARAMETER, var_199_0_stream,
  num_1, var_200_0_nth,
  // $i undefined
  LET, 1, var_undefined, 1, var_202_1_i,
  // $n length_of(stream)
  var_length_of, 1, var_199_0_stream, 1, var_203_1_n,
  // nth < 0:
  var_std__less, 2, var_200_0_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(202, 3),
  POS(203, 3),
  POS(205, 5),
  POS(204, 3)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  // !i n
  LET, 1, var_203_1_n, 1, var_202_1_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(206, 7),
  POS(207, 7)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  // !i 1
  LET, 1, num_1, 1, var_202_1_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(209, 7),
  POS(210, 7)
};

static TAB_NUM t_func_search_forwards[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_203_1_n, var_202_1_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_16, lambda_20, TAIL_CALL,
  POS(214, 12),
  POS(214, 12),
  POS(213, 5)
};

static TAB_NUM t_lambda_16[] = {
  2, // locals
  0, // parameters
  // stream(i)):
  var_199_0_stream, 1, var_202_1_i, 1, LOCAL(1),
  // self(stream(i)):
  var_198_0_self, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_selfstreami, lambda_19, TAIL_CALL,
  POS(216, 16),
  POS(216, 11),
  POS(215, 9)
};

static TAB_NUM t_lambda_selfstreami[] = {
  1, // locals
  0, // parameters
  // 1:
  var_std__less, 2, num_1, var_200_0_nth, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_17, lambda_18, TAIL_CALL,
  POS(218, 21),
  POS(217, 13)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // dec &nth
  var_dec, 1, var_200_0_nth, 1, var_200_0_nth,
  // inc &i
  var_inc, 1, var_202_1_i, 1, var_202_1_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(219, 17),
  POS(220, 17),
  POS(221, 17)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  i 1
  LET, 2, var_202_1_i, num_1, TAIL_CALL,
  POS(222, 17)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_202_1_i, 1, var_202_1_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(224, 13),
  POS(225, 13)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(226, 9)
};

static TAB_NUM t_func_search_backwards[] = {
  2, // locals
  0, // parameters
  // i >= 1
  var_std__less, 2, var_202_1_i, num_1, 1, LOCAL(1),
  // i >= 1
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_21, lambda_25, TAIL_CALL,
  POS(230, 7),
  POS(230, 7),
  POS(229, 5)
};

static TAB_NUM t_lambda_21[] = {
  2, // locals
  0, // parameters
  // stream(i)):
  var_199_0_stream, 1, var_202_1_i, 1, LOCAL(1),
  // self(stream(i)):
  var_198_0_self, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_2_selfstreami, lambda_24, TAIL_CALL,
  POS(233, 16),
  POS(233, 11),
  POS(232, 9)
};

static TAB_NUM t_lambda_2_selfstreami[] = {
  1, // locals
  0, // parameters
  // nth < -1:
  var_std__less, 2, var_200_0_nth, minus_num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_22, lambda_23, TAIL_CALL,
  POS(235, 15),
  POS(234, 13)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  // inc &nth
  var_inc, 1, var_200_0_nth, 1, var_200_0_nth,
  // dec &i
  var_dec, 1, var_202_1_i, 1, var_202_1_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(236, 17),
  POS(237, 17),
  POS(238, 17)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  //  i 1
  LET, 2, var_202_1_i, num_1, TAIL_CALL,
  POS(239, 17)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_202_1_i, 1, var_202_1_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(241, 13),
  POS(242, 13)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(243, 9)
};

static TAB_NUM t_func_std_types__set___debug__to_string[] = {
  0, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_249_0_self,
  num_0, var_250_0_indent,
  num_1, var_251_0_depth,
  // $tag serialization_tag_of(self)
  var_serialization_tag_of, 1, var_249_0_self, 1, var_253_1_tag,
  // cond
  var_cond, 3, lambda_26, lambda_28, lambda_32, TAIL_CALL,
  POS(253, 3),
  POS(254, 3)
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  0, // parameters
  // is_empty -> "empty_@(tag)@nl;"
  var_is_empty, 1, var_249_0_self, 1, LOCAL(1),
  //  self.is_empty -> "empty_@(tag)@nl;"
  LET, 2, LOCAL(1), lambda_27, TAIL_CALL,
  POS(255, 13),
  POS(255, 7)
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // "empty_@(tag)@nl;"
  var_std__string, 3, str_empty, var_253_1_tag, string_1, 1, LOCAL(1),
  //  "empty_@(tag)@nl;"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(255, 25),
  POS(255, 24)
};

static TAB_NUM t_lambda_28[] = {
  2, // locals
  0, // parameters
  // 1:
  var_std__less, 2, num_1, var_251_0_depth, 1, LOCAL(1),
  // 1:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  //  depth <= 1:
  LET, 2, LOCAL(2), lambda_29, TAIL_CALL,
  POS(256, 17),
  POS(256, 17),
  POS(256, 7)
};

static TAB_NUM t_lambda_29[] = {
  1, // locals
  0, // parameters
  // $len length_of(self)
  var_length_of, 1, var_249_0_self, 1, var_257_1_len,
  // len == 1
  var_std__equal, 2, var_257_1_len, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_30, lambda_31, TAIL_CALL,
  POS(257, 7),
  POS(259, 9),
  POS(258, 7)
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  0, // parameters
  // "<@(tag) with 1 item>@nl;"
  var_std__string, 3, string_2, var_253_1_tag, str__with_1_item, 1, LOCAL(1),
  //  "<@(tag) with 1 item>@nl;"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(260, 12),
  POS(260, 11)
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // "<@(tag) with @(len) items>@nl;"
  var_std__string, 5, string_2, var_253_1_tag, str__with, var_257_1_len, str__items, 1, LOCAL(1),
  //  "<@(tag) with @(len) items>@nl;"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(261, 12),
  POS(261, 11)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_33, TAIL_CALL,
  POS(262, 7)
};

static TAB_NUM t_lambda_33[] = {
  3, // locals
  0, // parameters
  // $new_indent indent+2
  var_std__plus, 2, var_250_0_indent, num_2, 1, var_263_1_new_indent,
  // map_reduce $contents
  var_map_reduce, 4, var_249_0_self, lambda_self, var_append, string_3, 1, LOCAL(3),
  // tabs_and_spaces(indent) tag "@nl;") contents
  var_tabs_and_spaces, 1, var_250_0_indent, 1, LOCAL(1),
  // append("@nl;" tabs_and_spaces(indent) tag "@nl;") contents
  var_append, 4, string_1, LOCAL(1), var_253_1_tag, string_1, 1, LOCAL(2),
  // append append("@nl;" tabs_and_spaces(indent) tag "@nl;") contents
  var_append, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(263, 7),
  POS(264, 7),
  POS(271, 28),
  POS(271, 14),
  POS(271, 7)
};

static TAB_NUM t_lambda_self[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 265_7_value
  // tabs_and_spaces(new_indent)
  var_tabs_and_spaces, 1, var_263_1_new_indent, 1, LOCAL(1),
  // depth-1)
  var_std__minus, 2, var_251_0_depth, num_1, 1, LOCAL(2),
  // debug::to_string(value new_indent depth-1)
  var_debug__to_string, 3, LOCAL(4), var_263_1_new_indent, LOCAL(2), 1, LOCAL(3),
  // append
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(267, 13),
  POS(268, 47),
  POS(268, 13),
  POS(266, 11)
};

static TAB_NUM t_func_std_types__set___serialize[] = {
  4, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 277_0_self
  var_undefined, var_278_0_indent,
  // is_defined
  var_is_defined, 1, var_278_0_indent, 1, LOCAL(1),
  // $new_indent
  var_if, 3, LOCAL(1), lambda_34, lambda_35, 1, var_280_1_new_indent,
  // map_reduce $contents
  var_map_reduce, 4, LOCAL(3), lambda_2_self, var_append, string_3, 1, LOCAL(4),
  // serialization_tag_of(self)) <@(length_of(self))>
  var_serialization_tag_of, 1, LOCAL(3), 1, LOCAL(1),
  // length_of(self))>
  var_length_of, 1, LOCAL(3), 1, LOCAL(2),
  // $header
  var_std__string, 4, LOCAL(1), string_4, LOCAL(2), string_5, 1, var_289_1_header,
  // is_defined &header -> append(tabs_and_spaces(indent) header)
  var_is_defined, 1, var_278_0_indent, 1, LOCAL(1),
  // update_if indent.is_defined &header -> append(tabs_and_spaces(indent) header)
  var_update_if, 3, LOCAL(1), var_289_1_header, lambda_36, 1, var_289_1_header,
  // append header contents
  var_append, 2, var_289_1_header, LOCAL(4), TAIL_CALL,
  POS(282, 14),
  POS(280, 3),
  POS(285, 3),
  POS(291, 9),
  POS(291, 40),
  POS(289, 3),
  POS(292, 20),
  POS(292, 3),
  POS(293, 3)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // indent+2
  var_std__plus, 2, var_278_0_indent, num_2, 1, LOCAL(1),
  //  indent+2
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(283, 10),
  POS(283, 9)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(284, 9)
};

static TAB_NUM t_lambda_2_self[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 286_7_value
  // serialize(value new_indent)
  var_serialize, 2, LOCAL(2), var_280_1_new_indent, 1, LOCAL(1),
  // -> serialize(value new_indent)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(286, 22),
  POS(286, 19)
};

static TAB_NUM t_lambda_36[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) header)
  var_tabs_and_spaces, 1, var_278_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) header)
  var_append, 2, LOCAL(1), var_289_1_header, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) header)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(292, 49),
  POS(292, 42),
  POS(292, 41)
};

static TAB_NUM t_func_std_types__set___deserializer_of[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 297_0_type
  LOCAL(2), // 298_0_items
  // $obj empty_collection_of(type)
  var_empty_collection_of, 1, LOCAL(1), 1, var_300_1_obj,
  // for_each items
  var_for_each, 3, LOCAL(2), lambda_37, lambda_38, TAIL_CALL,
  POS(300, 3),
  POS(301, 3)
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 302_3_item
  // obj(item) true
  var_300_1_obj, 2, LOCAL(1), var_true, 1, var_300_1_obj,
  // next
  var_next, 0, TAIL_CALL,
  POS(303, 8),
  POS(304, 7)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  //  obj
  LET, 1, var_300_1_obj, TAIL_CALL,
  POS(305, 7)
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
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_selfstr1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_fail}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__set___match_back}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__set___search}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_forwards}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_selfstreami}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_backwards}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_selfstreami}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__set___debug__to_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_STRING_8, 6, {.str_8 = "empty_"}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_STRING_8, 1, {.str_8 = "<"}},
  {FLT_STRING_8, 14, {.str_8 = " with 1 item>\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_STRING_8, 6, {.str_8 = " with "}},
  {FLT_STRING_8, 8, {.str_8 = " items>\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_self}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__set___serialize}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_self}},
  {FLT_STRING_8, 2, {.str_8 = " <"}},
  {FLT_STRING_8, 2, {.str_8 = ">\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__set___deserializer_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}}
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
  {var_debug__to_string, -func_std_types__set___debug__to_string},
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
    {.position = POS(32, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(33, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_set\000", NULL,
    {.position = POS(33, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(33, 29)}
  },
  {
    FOT_DERIVED, 0, 9,
    "set\000std_types", std_types__set__attributes,
    {"collection\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(34, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "collection\000std_types", NULL,
    {.position = POS(36, 17)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "merge\000", NULL,
    {.position = POS(44, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "48_0_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(54, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(51, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_list\000", NULL,
    {.position = POS(57, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "63_1_items\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(63, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(66, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match\000", NULL,
    {.position = POS(72, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "107_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "108_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "110_1_rc\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(110, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(112, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(118, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(120, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(117, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match_back\000", NULL,
    {.position = POS(129, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "164_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "165_0_str\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "search\000", NULL,
    {.position = POS(176, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "198_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "199_0_stream\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "200_0_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "202_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "203_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(203, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(205, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(214, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(219, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(220, 17)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_string\000debug", NULL,
    {.position = POS(247, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "249_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "250_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "251_0_depth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "253_1_tag\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(253, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(255, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "257_1_len\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "263_1_new_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(263, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(267, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(268, 47)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(266, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(264, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(254, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(275, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "278_0_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(282, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "280_1_new_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "289_1_header\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(292, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deserializer_of\000", NULL,
    {.position = POS(295, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "300_1_obj\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(300, 8)}
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
  67, // number of constants
  63, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
