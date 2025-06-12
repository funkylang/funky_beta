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
  func_std_types__set___intersection = -4,
  lambda_3 = -5,
  lambda_otherkey = -6,
  lambda_4 = -7,
  func_std_types__set___equal = -8,
  lambda_5 = -9,
  lambda_6 = -10,
  lambda_7 = -11,
  lambda_8 = -12,
  lambda_9 = -13,
  func_std_types__set___contains = -14,
  lambda_10 = -15,
  lambda_11 = -16,
  lambda_12 = -17,
  func_std_types__set___to_list = -18,
  lambda_13 = -19,
  lambda_14 = -20,
  func_std_types__set___match = -21,
  lambda_15 = -22,
  num_1 = -23,
  lambda_selfstr1 = -24,
  lambda_16 = -25,
  lambda_17 = -26,
  func_fail = -27,
  lambda_18 = -28,
  lambda_19 = -29,
  func_std_types__set___match_back = -30,
  lambda_20 = -31,
  lambda_21 = -32,
  minus_num_1 = -33,
  lambda_22 = -34,
  lambda_23 = -35,
  func_std_types__set___search = -36,
  num_0 = -37,
  lambda_24 = -38,
  lambda_25 = -39,
  func_search_forwards = -40,
  lambda_26 = -41,
  lambda_selfstreami = -42,
  lambda_27 = -43,
  lambda_28 = -44,
  lambda_29 = -45,
  lambda_30 = -46,
  func_search_backwards = -47,
  lambda_31 = -48,
  lambda_2_selfstreami = -49,
  lambda_32 = -50,
  lambda_33 = -51,
  lambda_34 = -52,
  lambda_35 = -53,
  func_std_types__set___debug__to_string = -54,
  lambda_36 = -55,
  lambda_37 = -56,
  str_empty = -57,
  string_1 = -58,
  lambda_38 = -59,
  lambda_39 = -60,
  lambda_40 = -61,
  string_2 = -62,
  str__with_1_item = -63,
  lambda_41 = -64,
  str__with = -65,
  str__items = -66,
  lambda_42 = -67,
  lambda_43 = -68,
  num_2 = -69,
  lambda_self = -70,
  string_3 = -71,
  func_std_types__set___serialize = -72,
  lambda_44 = -73,
  lambda_45 = -74,
  lambda_2_self = -75,
  string_4 = -76,
  string_5 = -77,
  lambda_46 = -78,
  func_std_types__set___deserializer_of = -79,
  lambda_47 = -80,
  lambda_48 = -81
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
  var_48_5_self, // dynamic
  var_next, // extern
  var_for_each, // extern
  var_intersection, // extern polymorphic
  var_62_5_other, // dynamic
  var_64_4_result, // dynamic
  var_empty_collection_of, // extern
  var_66_8_key, // dynamic
  var_if, // extern
  var_equal, // extern polymorphic
  var_77_5_self, // dynamic
  var_78_5_other, // dynamic
  var_length_of, // extern
  var_std__equal, // extern
  var_std__not, // extern
  var_contains, // extern polymorphic
  var_95_5_self, // dynamic
  var_to_list, // extern polymorphic
  var_112_4_items, // dynamic
  var_empty_list, // extern
  var_push, // extern
  var_match, // extern polymorphic
  var_156_5_self, // dynamic
  var_157_5_str, // dynamic
  var_159_4_rc, // dynamic
  var_result_count, // extern
  var_is_empty, // extern
  var_undefined, // extern
  var_match_back, // extern polymorphic
  var_213_5_self, // dynamic
  var_214_5_str, // dynamic
  var_search, // extern polymorphic
  var_247_5_self, // dynamic
  var_248_5_stream, // dynamic
  var_249_5_nth, // dynamic
  var_251_4_i, // dynamic
  var_252_4_n, // dynamic
  var_std__less, // extern
  var_dec, // extern
  var_inc, // extern
  var_debug__to_string, // extern polymorphic
  var_298_5_self, // dynamic
  var_299_5_indent, // dynamic
  var_300_5_depth, // dynamic
  var_302_4_tag, // dynamic
  var_serialization_tag_of, // extern
  var_std__string, // extern
  var_306_8_len, // dynamic
  var_312_8_new_indent, // dynamic
  var_std__plus, // extern
  var_tabs_and_spaces, // extern
  var_std__minus, // extern
  var_append, // extern
  var_map_reduce, // extern
  var_cond, // extern
  var_serialize, // extern polymorphic
  var_327_5_indent, // dynamic
  var_is_defined, // extern
  var_329_4_new_indent, // dynamic
  var_338_4_header, // dynamic
  var_update_if, // extern
  var_deserializer_of, // extern polymorphic
  var_349_4_obj, // dynamic
  var__END
};


static TAB_NUM t_func_std_types__set___merge[] = {
  1, // locals
  2, // parameters
  var_48_5_self,
  LOCAL(1), // 49_5_other
  // for_each other
  var_for_each, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(51, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__set___merge = {
  t_func_std_types__set___merge, NULL, 1, 1,
  {"49_5_other\000"}
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 52_8_key
  // self(key) true
  var_48_5_self, 2, LOCAL(1), var_true, 1, var_48_5_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(53, 8),
  POS(54, 7),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 2, 1,
  {"52_8_key\000"}
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_48_5_self, TAIL_CALL,
  POS(55, 7)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__set___intersection[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 61_5_self
  var_62_5_other,
  // $result empty_collection_of(self)
  var_empty_collection_of, 1, LOCAL(1), 1, var_64_4_result,
  // for_each self
  var_for_each, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(64, 3),
  POS(65, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__set___intersection = {
  t_func_std_types__set___intersection, NULL, 2, 1,
  {"61_5_self\000"}
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  1, // parameters
  var_66_8_key,
  // other(key):
  var_62_5_other, 1, var_66_8_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_otherkey, var_next, TAIL_CALL,
  POS(68, 9),
  POS(67, 7)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_otherkey[] = {
  0, // locals
  0, // parameters
  // result(key) true
  var_64_4_result, 2, var_66_8_key, var_true, 1, var_64_4_result,
  // next
  var_next, 0, TAIL_CALL,
  POS(69, 12),
  POS(70, 11)
};

static FUNCTION_INFO i_lambda_otherkey = {
  t_lambda_otherkey, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  result
  LET, 1, var_64_4_result, TAIL_CALL,
  POS(72, 7)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__set___equal[] = {
  4, // locals
  2, // parameters
  var_77_5_self,
  var_78_5_other,
  // length_of(self) != length_of(other)
  var_length_of, 1, var_77_5_self, 1, LOCAL(1),
  // length_of(other)
  var_length_of, 1, var_78_5_other, 1, LOCAL(2),
  // length_of(self) != length_of(other)
  var_std__equal, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // length_of(self) != length_of(other)
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // if
  var_if, 3, LOCAL(4), lambda_5, lambda_6, TAIL_CALL,
  POS(81, 5),
  POS(81, 24),
  POS(81, 5),
  POS(81, 5),
  POS(80, 3)
};

static FUNCTION_INFO i_func_std_types__set___equal = {
  t_func_std_types__set___equal, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(82, 7)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // for_each self
  var_for_each, 3, var_77_5_self, lambda_7, lambda_9, TAIL_CALL,
  POS(84, 7)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 85_12_item
  // other(item)
  var_78_5_other, 1, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_8, TAIL_CALL,
  POS(87, 13),
  POS(86, 11),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 2, 1,
  {"85_12_item\000"}
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(89, 15)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(90, 11)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__set___contains[] = {
  1, // locals
  2, // parameters
  var_95_5_self,
  LOCAL(1), // 96_5_other
  // for_each other
  var_for_each, 3, LOCAL(1), lambda_10, lambda_12, TAIL_CALL,
  POS(98, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__set___contains = {
  t_func_std_types__set___contains, NULL, 1, 1,
  {"96_5_other\000"}
};

static TAB_NUM t_lambda_10[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 99_8_item
  // self(item)
  var_95_5_self, 1, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_11, TAIL_CALL,
  POS(101, 9),
  POS(100, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 2, 1,
  {"99_8_item\000"}
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(103, 11)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(104, 7)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__set___to_list[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 110_5_self
  // $items empty_list
  LET, 1, var_empty_list, 1, var_112_4_items,
  // for_each self
  var_for_each, 3, LOCAL(1), lambda_13, lambda_14, TAIL_CALL,
  POS(112, 3),
  POS(113, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__set___to_list = {
  t_func_std_types__set___to_list, NULL, 2, 1,
  {"110_5_self\000"}
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 114_8_item
  // push &items item
  var_push, 2, var_112_4_items, LOCAL(1), 1, var_112_4_items,
  // next
  var_next, 0, TAIL_CALL,
  POS(115, 7),
  POS(116, 7),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 2, 1,
  {"114_8_item\000"}
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  items
  LET, 1, var_112_4_items, TAIL_CALL,
  POS(117, 7)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__set___match[] = {
  1, // locals
  2, // parameters
  var_156_5_self,
  var_157_5_str,
  // $rc result_count
  LET, 1, var_result_count, 1, var_159_4_rc,
  // is_empty
  var_is_empty, 1, var_157_5_str, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_fail, lambda_15, TAIL_CALL,
  POS(159, 3),
  POS(161, 9),
  POS(160, 3)
};

static FUNCTION_INFO i_func_std_types__set___match = {
  t_func_std_types__set___match, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // str(1)):
  var_157_5_str, 1, num_1, 1, LOCAL(1),
  // self(str(1)):
  var_156_5_self, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_selfstr1, func_fail, TAIL_CALL,
  POS(165, 14),
  POS(165, 9),
  POS(164, 7)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_selfstr1[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_159_4_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_16, lambda_17, TAIL_CALL,
  POS(167, 13),
  POS(166, 11)
};

static FUNCTION_INFO i_lambda_selfstr1 = {
  t_lambda_selfstr1, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(168, 15)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  1 undefined
  LET, 2, num_1, var_undefined, TAIL_CALL,
  POS(169, 15)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_fail[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_159_4_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_18, lambda_19, TAIL_CALL,
  POS(174, 7),
  POS(173, 5)
};

static FUNCTION_INFO i_func_fail = {
  t_func_fail, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(175, 9)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(176, 9)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__set___match_back[] = {
  1, // locals
  2, // parameters
  var_213_5_self,
  var_214_5_str,
  // is_empty
  var_is_empty, 1, var_214_5_str, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_20, lambda_21, TAIL_CALL,
  POS(217, 9),
  POS(216, 3)
};

static FUNCTION_INFO i_func_std_types__set___match_back = {
  t_func_std_types__set___match_back, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(218, 7)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_21[] = {
  2, // locals
  0, // parameters
  // str(-1))
  var_214_5_str, 1, minus_num_1, 1, LOCAL(1),
  // self(str(-1))
  var_213_5_self, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_22, lambda_23, TAIL_CALL,
  POS(221, 14),
  POS(221, 9),
  POS(220, 7)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(222, 11)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(223, 11)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__set___search[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_247_5_self,
  MANDATORY_PARAMETER, var_248_5_stream,
  num_1, var_249_5_nth,
  // $i undefined
  LET, 1, var_undefined, 1, var_251_4_i,
  // $n length_of(stream)
  var_length_of, 1, var_248_5_stream, 1, var_252_4_n,
  // nth < 0:
  var_std__less, 2, var_249_5_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_24, lambda_25, TAIL_CALL,
  POS(251, 3),
  POS(252, 3),
  POS(254, 5),
  POS(253, 3)
};

static FUNCTION_INFO i_func_std_types__set___search = {
  t_func_std_types__set___search, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  // !i n
  LET, 1, var_252_4_n, 1, var_251_4_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(255, 7),
  POS(256, 7)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  // !i 1
  LET, 1, num_1, 1, var_251_4_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(258, 7),
  POS(259, 7)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_search_forwards[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_252_4_n, var_251_4_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_26, lambda_30, TAIL_CALL,
  POS(263, 12),
  POS(263, 12),
  POS(262, 5)
};

static FUNCTION_INFO i_func_search_forwards = {
  t_func_search_forwards, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_26[] = {
  2, // locals
  0, // parameters
  // stream(i)):
  var_248_5_stream, 1, var_251_4_i, 1, LOCAL(1),
  // self(stream(i)):
  var_247_5_self, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_selfstreami, lambda_29, TAIL_CALL,
  POS(265, 16),
  POS(265, 11),
  POS(264, 9)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_selfstreami[] = {
  1, // locals
  0, // parameters
  // 1:
  var_std__less, 2, num_1, var_249_5_nth, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_27, lambda_28, TAIL_CALL,
  POS(267, 21),
  POS(266, 13)
};

static FUNCTION_INFO i_lambda_selfstreami = {
  t_lambda_selfstreami, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  // dec &nth
  var_dec, 1, var_249_5_nth, 1, var_249_5_nth,
  // inc &i
  var_inc, 1, var_251_4_i, 1, var_251_4_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(268, 17),
  POS(269, 17),
  POS(270, 17)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  //  i 1
  LET, 2, var_251_4_i, num_1, TAIL_CALL,
  POS(271, 17)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_251_4_i, 1, var_251_4_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(273, 13),
  POS(274, 13)
};

static FUNCTION_INFO i_lambda_29 = {
  t_lambda_29, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(275, 9)
};

static FUNCTION_INFO i_lambda_30 = {
  t_lambda_30, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_search_backwards[] = {
  2, // locals
  0, // parameters
  // i >= 1
  var_std__less, 2, var_251_4_i, num_1, 1, LOCAL(1),
  // i >= 1
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_31, lambda_35, TAIL_CALL,
  POS(279, 7),
  POS(279, 7),
  POS(278, 5)
};

static FUNCTION_INFO i_func_search_backwards = {
  t_func_search_backwards, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  0, // parameters
  // stream(i)):
  var_248_5_stream, 1, var_251_4_i, 1, LOCAL(1),
  // self(stream(i)):
  var_247_5_self, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_2_selfstreami, lambda_34, TAIL_CALL,
  POS(282, 16),
  POS(282, 11),
  POS(281, 9)
};

static FUNCTION_INFO i_lambda_31 = {
  t_lambda_31, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_2_selfstreami[] = {
  1, // locals
  0, // parameters
  // nth < -1:
  var_std__less, 2, var_249_5_nth, minus_num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_32, lambda_33, TAIL_CALL,
  POS(284, 15),
  POS(283, 13)
};

static FUNCTION_INFO i_lambda_2_selfstreami = {
  t_lambda_2_selfstreami, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  // inc &nth
  var_inc, 1, var_249_5_nth, 1, var_249_5_nth,
  // dec &i
  var_dec, 1, var_251_4_i, 1, var_251_4_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(285, 17),
  POS(286, 17),
  POS(287, 17)
};

static FUNCTION_INFO i_lambda_32 = {
  t_lambda_32, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  //  i 1
  LET, 2, var_251_4_i, num_1, TAIL_CALL,
  POS(288, 17)
};

static FUNCTION_INFO i_lambda_33 = {
  t_lambda_33, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_251_4_i, 1, var_251_4_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(290, 13),
  POS(291, 13)
};

static FUNCTION_INFO i_lambda_34 = {
  t_lambda_34, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(292, 9)
};

static FUNCTION_INFO i_lambda_35 = {
  t_lambda_35, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__set___debug__to_string[] = {
  0, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_298_5_self,
  num_0, var_299_5_indent,
  num_1, var_300_5_depth,
  // $tag serialization_tag_of(self)
  var_serialization_tag_of, 1, var_298_5_self, 1, var_302_4_tag,
  // cond
  var_cond, 3, lambda_36, lambda_38, lambda_42, TAIL_CALL,
  POS(302, 3),
  POS(303, 3)
};

static FUNCTION_INFO i_func_std_types__set___debug__to_string = {
  t_func_std_types__set___debug__to_string, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_36[] = {
  1, // locals
  0, // parameters
  // is_empty -> "empty_@(tag)@nl;"
  var_is_empty, 1, var_298_5_self, 1, LOCAL(1),
  //  self.is_empty -> "empty_@(tag)@nl;"
  LET, 2, LOCAL(1), lambda_37, TAIL_CALL,
  POS(304, 13),
  POS(304, 7)
};

static FUNCTION_INFO i_lambda_36 = {
  t_lambda_36, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // "empty_@(tag)@nl;"
  var_std__string, 3, str_empty, var_302_4_tag, string_1, 1, LOCAL(1),
  //  "empty_@(tag)@nl;"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(304, 25),
  POS(304, 24)
};

static FUNCTION_INFO i_lambda_37 = {
  t_lambda_37, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_38[] = {
  2, // locals
  0, // parameters
  // 1:
  var_std__less, 2, num_1, var_300_5_depth, 1, LOCAL(1),
  // 1:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  //  depth <= 1:
  LET, 2, LOCAL(2), lambda_39, TAIL_CALL,
  POS(305, 17),
  POS(305, 17),
  POS(305, 7)
};

static FUNCTION_INFO i_lambda_38 = {
  t_lambda_38, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_39[] = {
  1, // locals
  0, // parameters
  // $len length_of(self)
  var_length_of, 1, var_298_5_self, 1, var_306_8_len,
  // len == 1
  var_std__equal, 2, var_306_8_len, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_40, lambda_41, TAIL_CALL,
  POS(306, 7),
  POS(308, 9),
  POS(307, 7)
};

static FUNCTION_INFO i_lambda_39 = {
  t_lambda_39, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_40[] = {
  1, // locals
  0, // parameters
  // "<@(tag) with 1 item>@nl;"
  var_std__string, 3, string_2, var_302_4_tag, str__with_1_item, 1, LOCAL(1),
  //  "<@(tag) with 1 item>@nl;"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(309, 12),
  POS(309, 11)
};

static FUNCTION_INFO i_lambda_40 = {
  t_lambda_40, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_41[] = {
  1, // locals
  0, // parameters
  // "<@(tag) with @(len) items>@nl;"
  var_std__string, 5, string_2, var_302_4_tag, str__with, var_306_8_len, str__items, 1, LOCAL(1),
  //  "<@(tag) with @(len) items>@nl;"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(310, 12),
  POS(310, 11)
};

static FUNCTION_INFO i_lambda_41 = {
  t_lambda_41, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_42[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_43, TAIL_CALL,
  POS(311, 7)
};

static FUNCTION_INFO i_lambda_42 = {
  t_lambda_42, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_43[] = {
  3, // locals
  0, // parameters
  // $new_indent indent+2
  var_std__plus, 2, var_299_5_indent, num_2, 1, var_312_8_new_indent,
  // map_reduce $contents
  var_map_reduce, 4, var_298_5_self, lambda_self, var_append, string_3, 1, LOCAL(3),
  // tabs_and_spaces(indent) tag "@nl;") contents
  var_tabs_and_spaces, 1, var_299_5_indent, 1, LOCAL(1),
  // append("@nl;" tabs_and_spaces(indent) tag "@nl;") contents
  var_append, 4, string_1, LOCAL(1), var_302_4_tag, string_1, 1, LOCAL(2),
  // append append("@nl;" tabs_and_spaces(indent) tag "@nl;") contents
  var_append, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(312, 7),
  POS(313, 7),
  POS(320, 28),
  POS(320, 14),
  POS(320, 7),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_43 = {
  t_lambda_43, NULL, 5, 1,
  {"313_19_contents\000"}
};

static TAB_NUM t_lambda_self[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 314_16_value
  // tabs_and_spaces(new_indent)
  var_tabs_and_spaces, 1, var_312_8_new_indent, 1, LOCAL(1),
  // depth-1)
  var_std__minus, 2, var_300_5_depth, num_1, 1, LOCAL(2),
  // debug::to_string(value new_indent depth-1)
  var_debug__to_string, 3, LOCAL(4), var_312_8_new_indent, LOCAL(2), 1, LOCAL(3),
  // append
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(316, 13),
  POS(317, 47),
  POS(317, 13),
  POS(315, 11),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_self = {
  t_lambda_self, NULL, 4, 1,
  {"314_16_value\000"}
};

static TAB_NUM t_func_std_types__set___serialize[] = {
  4, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 326_5_self
  var_undefined, var_327_5_indent,
  // is_defined
  var_is_defined, 1, var_327_5_indent, 1, LOCAL(1),
  // $new_indent
  var_if, 3, LOCAL(1), lambda_44, lambda_45, 1, var_329_4_new_indent,
  // map_reduce $contents
  var_map_reduce, 4, LOCAL(3), lambda_2_self, var_append, string_3, 1, LOCAL(4),
  // serialization_tag_of(self)) <@(length_of(self))>
  var_serialization_tag_of, 1, LOCAL(3), 1, LOCAL(1),
  // length_of(self))>
  var_length_of, 1, LOCAL(3), 1, LOCAL(2),
  // $header
  var_std__string, 4, LOCAL(1), string_4, LOCAL(2), string_5, 1, var_338_4_header,
  // is_defined &header -> append(tabs_and_spaces(indent) header)
  var_is_defined, 1, var_327_5_indent, 1, LOCAL(1),
  // update_if indent.is_defined &header -> append(tabs_and_spaces(indent) header)
  var_update_if, 3, LOCAL(1), var_338_4_header, lambda_46, 1, var_338_4_header,
  // append header contents
  var_append, 2, var_338_4_header, LOCAL(4), TAIL_CALL,
  POS(331, 14),
  POS(329, 3),
  POS(334, 3),
  POS(340, 9),
  POS(340, 40),
  POS(338, 3),
  POS(341, 20),
  POS(341, 3),
  POS(342, 3),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__set___serialize = {
  t_func_std_types__set___serialize, NULL, 9, 2,
  {"326_5_self\000", "334_15_contents\000"}
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  0, // parameters
  // indent+2
  var_std__plus, 2, var_327_5_indent, num_2, 1, LOCAL(1),
  //  indent+2
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(332, 10),
  POS(332, 9)
};

static FUNCTION_INFO i_lambda_44 = {
  t_lambda_44, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(333, 9)
};

static FUNCTION_INFO i_lambda_45 = {
  t_lambda_45, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_2_self[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 335_12_value
  // serialize(value new_indent)
  var_serialize, 2, LOCAL(2), var_329_4_new_indent, 1, LOCAL(1),
  // -> serialize(value new_indent)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(335, 22),
  POS(335, 19),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_2_self = {
  t_lambda_2_self, NULL, 2, 1,
  {"335_12_value\000"}
};

static TAB_NUM t_lambda_46[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) header)
  var_tabs_and_spaces, 1, var_327_5_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) header)
  var_append, 2, LOCAL(1), var_338_4_header, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) header)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(341, 49),
  POS(341, 42),
  POS(341, 41)
};

static FUNCTION_INFO i_lambda_46 = {
  t_lambda_46, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std_types__set___deserializer_of[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 346_5_type
  LOCAL(2), // 347_5_items
  // $obj empty_collection_of(type)
  var_empty_collection_of, 1, LOCAL(1), 1, var_349_4_obj,
  // for_each items
  var_for_each, 3, LOCAL(2), lambda_47, lambda_48, TAIL_CALL,
  POS(349, 3),
  POS(350, 3),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__set___deserializer_of = {
  t_func_std_types__set___deserializer_of, NULL, 2, 2,
  {"347_5_items\000", "346_5_type\000"}
};

static TAB_NUM t_lambda_47[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 351_8_item
  // obj(item) true
  var_349_4_obj, 2, LOCAL(1), var_true, 1, var_349_4_obj,
  // next
  var_next, 0, TAIL_CALL,
  POS(352, 8),
  POS(353, 7),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_47 = {
  t_lambda_47, NULL, 2, 1,
  {"351_8_item\000"}
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  //  obj
  LET, 1, var_349_4_obj, TAIL_CALL,
  POS(354, 7)
};

static FUNCTION_INFO i_lambda_48 = {
  t_lambda_48, NULL, 1, 0,
  {}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__set___merge}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__set___intersection}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_otherkey}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__set___equal}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__set___contains}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__set___to_list}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__set___match}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_selfstr1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_fail}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__set___match_back}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__set___search}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_24}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_25}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_search_forwards}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_26}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_selfstreami}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_27}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_28}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_29}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_30}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_search_backwards}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_31}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_selfstreami}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_32}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_33}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_34}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_35}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__set___debug__to_string}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_36}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_37}},
  {FLT_STRING_8, 6, {.str_8 = "empty_"}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_38}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_39}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_40}},
  {FLT_STRING_8, 1, {.str_8 = "<"}},
  {FLT_STRING_8, 14, {.str_8 = " with 1 item>\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_41}},
  {FLT_STRING_8, 6, {.str_8 = " with "}},
  {FLT_STRING_8, 8, {.str_8 = " items>\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_42}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_43}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_self}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__set___serialize}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_44}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_45}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_self}},
  {FLT_STRING_8, 2, {.str_8 = " <"}},
  {FLT_STRING_8, 2, {.str_8 = ">\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_46}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__set___deserializer_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_47}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_48}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_set, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__set__attributes[] = {
  {-var_is_a_set, -var_true},
  {var_merge, -func_std_types__set___merge},
  {var_intersection, -func_std_types__set___intersection},
  {var_equal, -func_std_types__set___equal},
  {var_contains, -func_std_types__set___contains},
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
    FOT_DERIVED, 0, 12,
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
    "48_5_self\000", NULL
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
    "intersection\000", NULL,
    {.position = POS(57, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "62_5_other\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "64_4_result\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(64, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "66_8_key\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(67, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "equal\000", NULL,
    {.position = POS(74, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "77_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "78_5_other\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(81, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(81, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(81, 5)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "contains\000", NULL,
    {.position = POS(92, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "95_5_self\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_list\000", NULL,
    {.position = POS(106, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "112_4_items\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(112, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(115, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match\000", NULL,
    {.position = POS(121, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "156_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "157_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "159_4_rc\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(159, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(161, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(169, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match_back\000", NULL,
    {.position = POS(178, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "213_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "214_5_str\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "search\000", NULL,
    {.position = POS(225, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "247_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "248_5_stream\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "249_5_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "251_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "252_4_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(254, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(268, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(269, 17)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_string\000debug", NULL,
    {.position = POS(296, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "298_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "299_5_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "300_5_depth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "302_4_tag\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(302, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(304, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "306_8_len\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "312_8_new_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(312, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(316, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(317, 47)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(315, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(313, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(303, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(324, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "327_5_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(331, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "329_4_new_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "338_4_header\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(341, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deserializer_of\000", NULL,
    {.position = POS(344, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "349_4_obj\000", NULL
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
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  81, // number of constants
  72, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
