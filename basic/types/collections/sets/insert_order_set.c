#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  uni_NONE = -1,
  func_std_types__insert_order_set = -2,
  lambda_1 = -3,
  lambda_2 = -4,
  lambda_value = -5,
  lambda_3 = -6,
  lambda_4 = -7,
  lambda_last_key_is_defined = -8,
  lambda_5 = -9,
  lambda_6 = -10,
  lambda_7 = -11,
  lambda_8 = -12,
  lambda_previous_key_is_defined = -13,
  lambda_9 = -14,
  func_check_next_key = -15,
  lambda_next_key_is_defined = -16,
  lambda_10 = -17,
  lambda_11 = -18,
  func_std_types__insert_order_set___length_of = -19,
  func_std_types__insert_order_set___to_list = -20,
  func_add_keys = -21,
  lambda_12 = -22,
  lambda_13 = -23,
  func_std_types__insert_order_set___for_each = -24,
  func_std_types__insert_order_set___map_reduce = -25,
  func_std__insert_order_set = -26,
  lambda_14 = -27,
  lambda_15 = -28,
  str_insert_order_set = -29
};

enum {
  var__START = FIRST_VAR-1,
  var_std__is_an_insert_order_set, // attribute
  var_std__assign, // extern
  var_std_types__object, // extern
  var_is_an_insert_order_set, // extern polymorphic
  var_false, // extern
  var_std_types__insert_order_set, // derived
  var_true, // extern
  var_items_of, // attribute
  var_std_types__set, // extern
  var_std__empty_insert_order_set, // derived
  var_empty_hash_table, // extern
  var_first_item_of, // extern polymorphic
  var_undefined, // extern
  var_last_item_of, // extern polymorphic
  var_50_5_myself, // dynamic
  var_51_5_key, // dynamic
  var_52_5_value, // dynamic
  var_54_4_items, // dynamic
  var_55_4_item, // dynamic
  var_std__equal, // extern
  var_is_defined, // extern
  var_66_16_last_key, // dynamic
  var_tuple, // extern
  var_first, // extern
  var_if, // extern
  var_is_undefined, // extern
  var_85_21_previous_key, // dynamic
  var_85_35_next_key, // dynamic
  var_86_16_first_key, // dynamic
  var_87_16_last_key, // dynamic
  var_second, // extern
  var_length_of, // extern polymorphic
  var_to_list, // extern polymorphic
  var_124_4_items, // dynamic
  var_125_4_keys, // dynamic
  var_empty_list, // extern
  var_128_15_key, // dynamic
  var_push, // extern
  var_for_each, // extern polymorphic
  var_next, // extern
  var_map_reduce, // extern polymorphic
  var_append, // extern
  var_std__insert_order_set, // initialized
  var_173_4_set, // dynamic
  var_empty_insert_order_set, // extern
  var_serialization_tag_of, // extern polymorphic
  var_empty_collection_of, // extern polymorphic
  var_deserializers, // extern
  var_register_type, // extern
  var__END
};


static TAB_NUM t_func_std_types__insert_order_set[] = {
  1, // locals
  -3, // parameters
  MYSELF_PARAMETER, var_50_5_myself,
  MANDATORY_PARAMETER, var_51_5_key,
  uni_NONE, var_52_5_value,
  // $items items_of(myself)
  var_items_of, 1, var_50_5_myself, 1, var_54_4_items,
  // $item items(key)
  var_54_4_items, 1, var_51_5_key, 1, var_55_4_item,
  // NONE == value
  var_std__equal, 2, uni_NONE, var_52_5_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(54, 3),
  POS(55, 3),
  POS(57, 5),
  POS(56, 3)
};

static FUNCTION_INFO i_func_std_types__insert_order_set = {
  t_func_std_types__insert_order_set, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_55_4_item, 1, LOCAL(1),
  //  item.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(58, 13),
  POS(58, 7)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_52_5_value, lambda_value, lambda_6, TAIL_CALL,
  POS(60, 7)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_value[] = {
  1, // locals
  0, // parameters
  // is_defined # already set
  var_is_defined, 1, var_55_4_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(63, 18),
  POS(62, 11)
};

static FUNCTION_INFO i_lambda_value = {
  t_lambda_value, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  myself
  LET, 1, var_50_5_myself, TAIL_CALL,
  POS(64, 15)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  2, // locals
  0, // parameters
  // $last_key last_item_of(myself)
  var_last_item_of, 1, var_50_5_myself, 1, var_66_16_last_key,
  // !items(key) tuple(last_key undefined)
  var_tuple, 2, var_66_16_last_key, var_undefined, 1, LOCAL(2),
  // items(key) tuple(last_key undefined)
  var_54_4_items, 2, var_51_5_key, LOCAL(2), 1, var_54_4_items,
  // is_defined:
  var_is_defined, 1, var_66_16_last_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_last_key_is_defined, lambda_5, TAIL_CALL,
  POS(66, 15),
  POS(67, 15),
  POS(67, 16),
  POS(69, 26),
  POS(68, 15)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_last_key_is_defined[] = {
  4, // locals
  0, // parameters
  // items(last_key)) key)
  var_54_4_items, 1, var_66_16_last_key, 1, LOCAL(1),
  // first(items(last_key)) key)
  var_first, 1, LOCAL(1), 1, LOCAL(2),
  // !items(last_key) tuple(first(items(last_key)) key)
  var_tuple, 2, LOCAL(2), var_51_5_key, 1, LOCAL(4),
  // items(last_key) tuple(first(items(last_key)) key)
  var_54_4_items, 2, var_66_16_last_key, LOCAL(4), 1, var_54_4_items,
  // myself
  LET, -2, var_50_5_myself, var_items_of, var_54_4_items, var_last_item_of, var_51_5_key, LOCAL(1),
  // ->
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(70, 48),
  POS(70, 42),
  POS(70, 19),
  POS(70, 20),
  POS(72, 21),
  POS(71, 19)
};

static FUNCTION_INFO i_lambda_last_key_is_defined = {
  t_lambda_last_key_is_defined, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // myself
  LET, -3, var_50_5_myself, var_items_of, var_54_4_items, var_first_item_of, var_51_5_key, var_last_item_of, var_51_5_key, LOCAL(1),
  // 
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(76, 19),
  POS(75, 19)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // is_undefined # not set
  var_is_undefined, 1, var_55_4_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_7, lambda_8, TAIL_CALL,
  POS(82, 18),
  POS(81, 11)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  myself
  LET, 1, var_50_5_myself, TAIL_CALL,
  POS(83, 15)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // item $previous_key $next_key
  var_55_4_item, 0, 2, var_85_21_previous_key, var_85_35_next_key,
  // $first_key first_item_of(myself)
  var_first_item_of, 1, var_50_5_myself, 1, var_86_16_first_key,
  // $last_key last_item_of(myself)
  var_last_item_of, 1, var_50_5_myself, 1, var_87_16_last_key,
  // items(key) undefined
  var_54_4_items, 2, var_51_5_key, var_undefined, 1, var_54_4_items,
  // is_defined:
  var_is_defined, 1, var_85_21_previous_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_previous_key_is_defined, lambda_9, TAIL_CALL,
  POS(85, 15),
  POS(86, 15),
  POS(87, 15),
  POS(88, 16),
  POS(90, 30),
  POS(89, 15)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_previous_key_is_defined[] = {
  4, // locals
  0, // parameters
  // items(previous_key)) next_key)
  var_54_4_items, 1, var_85_21_previous_key, 1, LOCAL(1),
  // first(items(previous_key)) next_key)
  var_first, 1, LOCAL(1), 1, LOCAL(2),
  // !items(previous_key)
  var_tuple, 2, LOCAL(2), var_85_35_next_key, 1, LOCAL(4),
  // items(previous_key)
  var_54_4_items, 2, var_85_21_previous_key, LOCAL(4), 1, var_54_4_items,
  // check_next_key
  func_check_next_key, 0, TAIL_CALL,
  POS(92, 33),
  POS(92, 27),
  POS(91, 19),
  POS(91, 20),
  POS(93, 19)
};

static FUNCTION_INFO i_lambda_previous_key_is_defined = {
  t_lambda_previous_key_is_defined, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  // !first_key next_key
  LET, 1, var_85_35_next_key, 1, var_86_16_first_key,
  // check_next_key
  func_check_next_key, 0, TAIL_CALL,
  POS(95, 19),
  POS(96, 19)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_check_next_key[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_85_35_next_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_next_key_is_defined, lambda_10, TAIL_CALL,
  POS(100, 28),
  POS(99, 17)
};

static FUNCTION_INFO i_func_check_next_key = {
  t_func_check_next_key, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_next_key_is_defined[] = {
  4, // locals
  0, // parameters
  // items(next_key)))
  var_54_4_items, 1, var_85_35_next_key, 1, LOCAL(1),
  // second(items(next_key)))
  var_second, 1, LOCAL(1), 1, LOCAL(2),
  // !items(next_key)
  var_tuple, 2, var_85_21_previous_key, LOCAL(2), 1, LOCAL(4),
  // items(next_key)
  var_54_4_items, 2, var_85_35_next_key, LOCAL(4), 1, var_54_4_items,
  // return
  lambda_11, 0, TAIL_CALL,
  POS(102, 49),
  POS(102, 42),
  POS(101, 21),
  POS(101, 22),
  POS(103, 21)
};

static FUNCTION_INFO i_lambda_next_key_is_defined = {
  t_lambda_next_key_is_defined, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  // !last_key previous_key
  LET, 1, var_85_21_previous_key, 1, var_87_16_last_key,
  // return
  lambda_11, 0, TAIL_CALL,
  POS(105, 21),
  POS(106, 21)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // myself
  LET, -3, var_50_5_myself, var_items_of, var_54_4_items, var_first_item_of, var_86_16_first_key, var_last_item_of, var_87_16_last_key, LOCAL(1),
  // 
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(110, 19),
  POS(109, 19)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__insert_order_set___length_of[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 115_42_self
  // items_of(self))
  var_items_of, 1, LOCAL(3), 1, LOCAL(1),
  // length_of(items_of(self))
  var_length_of, 1, LOCAL(1), 1, LOCAL(2),
  // -> length_of(items_of(self))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(116, 16),
  POS(116, 6),
  POS(116, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__insert_order_set___length_of = {
  t_func_std_types__insert_order_set___length_of, NULL, 3, 1,
  {"115_42_self\000"}
};

static TAB_NUM t_func_std_types__insert_order_set___to_list[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 122_5_self
  // $items items_of(self)
  var_items_of, 1, LOCAL(2), 1, var_124_4_items,
  // $keys empty_list
  LET, 1, var_empty_list, 1, var_125_4_keys,
  // first_item_of(self)
  var_first_item_of, 1, LOCAL(2), 1, LOCAL(1),
  // add_keys first_item_of(self)
  func_add_keys, 1, LOCAL(1), TAIL_CALL,
  POS(124, 3),
  POS(125, 3),
  POS(126, 12),
  POS(126, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__insert_order_set___to_list = {
  t_func_std_types__insert_order_set___to_list, NULL, 4, 1,
  {"122_5_self\000"}
};

static TAB_NUM t_func_add_keys[] = {
  1, // locals
  1, // parameters
  var_128_15_key,
  // is_undefined
  var_is_undefined, 1, var_128_15_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12, lambda_13, TAIL_CALL,
  POS(130, 11),
  POS(129, 5)
};

static FUNCTION_INFO i_func_add_keys = {
  t_func_add_keys, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  keys
  LET, 1, var_125_4_keys, TAIL_CALL,
  POS(131, 9)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  2, // locals
  0, // parameters
  // push &keys key
  var_push, 2, var_125_4_keys, var_128_15_key, 1, var_125_4_keys,
  // items(key))
  var_124_4_items, 1, var_128_15_key, 1, LOCAL(1),
  // second(items(key))
  var_second, 1, LOCAL(1), 1, LOCAL(2),
  // add_keys second(items(key))
  func_add_keys, 1, LOCAL(2), TAIL_CALL,
  POS(133, 9),
  POS(134, 25),
  POS(134, 18),
  POS(134, 9)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_std_types__insert_order_set___for_each[] = {
  4, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 140_5_self
  MANDATORY_PARAMETER, LOCAL(3), // 141_5_body
  var_next, LOCAL(4), // 142_5_finally
  // to_list body finally
  var_to_list, 1, LOCAL(2), 1, LOCAL(1),
  // for_each! self.to_list body finally
  var_for_each, 3, LOCAL(1), LOCAL(3), LOCAL(4), IO_TAIL_CALL,
  POS(144, 18),
  POS(144, 3),
  LOCAL(2),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__insert_order_set___for_each = {
  t_func_std_types__insert_order_set___for_each, NULL, 2, 3,
  {"140_5_self\000", "142_5_finally\000", "141_5_body\000"}
};

static TAB_NUM t_func_std_types__insert_order_set___map_reduce[] = {
  5, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 159_5_self
  MANDATORY_PARAMETER, LOCAL(3), // 160_5_map_function
  var_append, LOCAL(4), // 161_5_reduce_function
  var_undefined, LOCAL(5), // 162_5_unit
  // to_list map_function reduce_function unit
  var_to_list, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce self.to_list map_function reduce_function unit
  var_map_reduce, 4, LOCAL(1), LOCAL(3), LOCAL(4), LOCAL(5), TAIL_CALL,
  POS(164, 19),
  POS(164, 3),
  LOCAL(5),
  LOCAL(2),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__insert_order_set___map_reduce = {
  t_func_std_types__insert_order_set___map_reduce, NULL, 2, 4,
  {"162_5_unit\000", "159_5_self\000", "161_5_reduce_function\000", "160_5_map_function\000"}
};

static TAB_NUM t_func_std__insert_order_set[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 171_5_keys
  // $set empty_insert_order_set
  LET, 1, var_empty_insert_order_set, 1, var_173_4_set,
  // for_each keys
  var_for_each, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(173, 3),
  POS(174, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__insert_order_set = {
  t_func_std__insert_order_set, NULL, 2, 1,
  {"171_5_keys\000"}
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 175_8_key
  // set(key) true
  var_173_4_set, 2, LOCAL(1), var_true, 1, var_173_4_set,
  // next
  var_next, 0, TAIL_CALL,
  POS(176, 8),
  POS(177, 7),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 2, 1,
  {"175_8_key\000"}
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  //  set
  LET, 1, var_173_4_set, TAIL_CALL,
  POS(178, 7)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 1, 0,
  {}
};

static TAB_NUM t_module_entry[] = {
  0, // locals
  0, // parameters
  // register_type &deserializers std_types::insert_order_set
  var_register_type, 2, var_deserializers, var_std_types__insert_order_set, 1, var_deserializers,
  LET, 1, 0, TAIL_CALL,
  POS(186, 1)
};

static FUNCTION_INFO i_module_entry = {
  t_module_entry, NULL, 1, 0,
  {}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_UNIQUE, 0, {.str_8 = "NONE"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__insert_order_set}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_value}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_last_key_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_previous_key_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_check_next_key}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_next_key_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__insert_order_set___length_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__insert_order_set___to_list}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_add_keys}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__insert_order_set___for_each}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__insert_order_set___map_reduce}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__insert_order_set}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_STRING_8, 16, {.str_8 = "insert_order_set"}},
  {FLT_FUNCTION, 0, {.func_info = &i_module_entry}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_an_insert_order_set, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__insert_order_set__attributes[] = {
  {-var_is_an_insert_order_set, -var_true},
  {-var_items_of, -var_empty_hash_table},
  {-var_first_item_of, -var_undefined},
  {-var_last_item_of, -var_undefined},
  {TYPE_FUNCTION, -func_std_types__insert_order_set},
  {var_length_of, -func_std_types__insert_order_set___length_of},
  {var_to_list, -func_std_types__insert_order_set___to_list},
  {var_for_each, -func_std_types__insert_order_set___for_each},
  {var_map_reduce, -func_std_types__insert_order_set___map_reduce},
  {-var_serialization_tag_of, -str_insert_order_set},
  {-var_empty_collection_of, -var_empty_insert_order_set}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_an_insert_order_set\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(25, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(27, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_insert_order_set\000", NULL,
    {.position = POS(27, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(27, 43)}
  },
  {
    FOT_DERIVED, 0, 11,
    "insert_order_set\000std_types", std_types__insert_order_set__attributes,
    {"set\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(28, 53)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "items_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "set\000std_types", NULL,
    {.position = POS(34, 30)}
  },
  {
    FOT_DERIVED, 0, 0,
    "empty_insert_order_set\000std", NULL,
    {"insert_order_set\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(42, 39)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "first_item_of\000", NULL,
    {.position = POS(43, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(43, 44)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "last_item_of\000", NULL,
    {.position = POS(44, 30)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "50_5_myself\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "51_5_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "52_5_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "54_4_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "55_4_item\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(57, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(58, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "66_16_last_key\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(67, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(70, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(68, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(82, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "85_21_previous_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "85_35_next_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "86_16_first_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "87_16_last_key\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "second\000", NULL,
    {.position = POS(102, 42)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "length_of\000", NULL,
    {.position = POS(115, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_list\000", NULL,
    {.position = POS(118, 30)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "124_4_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "125_4_keys\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(125, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "128_15_key\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(133, 9)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
    {.position = POS(136, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(142, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(149, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(161, 23)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "insert_order_set\000std", NULL,
    {.const_idx = -func_std__insert_order_set}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "173_4_set\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_set\000", NULL,
    {.position = POS(173, 8)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(183, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(184, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deserializers\000", NULL,
    {.position = POS(186, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "register_type\000", NULL,
    {.position = POS(186, 1)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__collections__sets__insert_order_set = {
  "_basic__types__collections__sets__insert_order_set", // module name
  "basic/types/collections/sets/insert_order_set.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO|FEAT_INITIALIZER,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  30, // number of constants
  49, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
