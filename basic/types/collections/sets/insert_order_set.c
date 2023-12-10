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
  var_48_0_myself, // dynamic
  var_49_0_key, // dynamic
  var_50_0_value, // dynamic
  var_52_1_items, // dynamic
  var_53_1_item, // dynamic
  var_std__equal, // extern
  var_is_defined, // extern
  var_64_1_last_key, // dynamic
  var_tuple, // extern
  var_first, // extern
  var_if, // extern
  var_is_undefined, // extern
  var_83_6_previous_key, // dynamic
  var_83_20_next_key, // dynamic
  var_84_1_first_key, // dynamic
  var_85_1_last_key, // dynamic
  var_second, // extern
  var_length_of, // extern polymorphic
  var_to_list, // extern polymorphic
  var_122_1_items, // dynamic
  var_123_1_keys, // dynamic
  var_empty_list, // extern
  var_126_12_key, // dynamic
  var_push, // extern
  var_for_each, // extern polymorphic
  var_next, // extern
  var_map_reduce, // extern polymorphic
  var_append, // extern
  var_std__insert_order_set, // initialized
  var_171_1_set, // dynamic
  var_empty_insert_order_set, // extern
  var_serialization_tag_of, // extern polymorphic
  var_empty_collection_of, // extern polymorphic
  var__END
};


static TAB_NUM t_func_std_types__insert_order_set[] = {
  1, // locals
  -3, // parameters
  MYSELF_PARAMETER, var_48_0_myself,
  MANDATORY_PARAMETER, var_49_0_key,
  uni_NONE, var_50_0_value,
  // $items items_of(myself)
  var_items_of, 1, var_48_0_myself, 1, var_52_1_items,
  // $item items(key)
  var_52_1_items, 1, var_49_0_key, 1, var_53_1_item,
  // NONE == value
  var_std__equal, 2, uni_NONE, var_50_0_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(52, 3),
  POS(53, 3),
  POS(55, 5),
  POS(54, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_53_1_item, 1, LOCAL(1),
  //  item.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(56, 13),
  POS(56, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_50_0_value, lambda_value, lambda_6, TAIL_CALL,
  POS(58, 7)
};

static TAB_NUM t_lambda_value[] = {
  1, // locals
  0, // parameters
  // is_defined # already set
  var_is_defined, 1, var_53_1_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(61, 18),
  POS(60, 11)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  myself
  LET, 1, var_48_0_myself, TAIL_CALL,
  POS(62, 15)
};

static TAB_NUM t_lambda_4[] = {
  2, // locals
  0, // parameters
  // $last_key last_item_of(myself)
  var_last_item_of, 1, var_48_0_myself, 1, var_64_1_last_key,
  // !items(key) tuple(last_key undefined)
  var_tuple, 2, var_64_1_last_key, var_undefined, 1, LOCAL(2),
  // items(key) tuple(last_key undefined)
  var_52_1_items, 2, var_49_0_key, LOCAL(2), 1, var_52_1_items,
  // is_defined:
  var_is_defined, 1, var_64_1_last_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_last_key_is_defined, lambda_5, TAIL_CALL,
  POS(64, 15),
  POS(65, 15),
  POS(65, 16),
  POS(67, 26),
  POS(66, 15)
};

static TAB_NUM t_lambda_last_key_is_defined[] = {
  4, // locals
  0, // parameters
  // items(last_key)) key)
  var_52_1_items, 1, var_64_1_last_key, 1, LOCAL(1),
  // first(items(last_key)) key)
  var_first, 1, LOCAL(1), 1, LOCAL(2),
  // !items(last_key) tuple(first(items(last_key)) key)
  var_tuple, 2, LOCAL(2), var_49_0_key, 1, LOCAL(4),
  // items(last_key) tuple(first(items(last_key)) key)
  var_52_1_items, 2, var_64_1_last_key, LOCAL(4), 1, var_52_1_items,
  // myself
  LET, -2, var_48_0_myself, var_items_of, var_52_1_items, var_last_item_of, var_49_0_key, LOCAL(1),
  // ->
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(68, 48),
  POS(68, 42),
  POS(68, 19),
  POS(68, 20),
  POS(70, 21),
  POS(69, 19)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // myself
  LET, -3, var_48_0_myself, var_items_of, var_52_1_items, var_first_item_of, var_49_0_key, var_last_item_of, var_49_0_key, LOCAL(1),
  // 
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(74, 19),
  POS(73, 19)
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // is_undefined # not set
  var_is_undefined, 1, var_53_1_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_7, lambda_8, TAIL_CALL,
  POS(80, 18),
  POS(79, 11)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  myself
  LET, 1, var_48_0_myself, TAIL_CALL,
  POS(81, 15)
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // item $previous_key $next_key
  var_53_1_item, 0, 2, var_83_6_previous_key, var_83_20_next_key,
  // $first_key first_item_of(myself)
  var_first_item_of, 1, var_48_0_myself, 1, var_84_1_first_key,
  // $last_key last_item_of(myself)
  var_last_item_of, 1, var_48_0_myself, 1, var_85_1_last_key,
  // items(key) undefined
  var_52_1_items, 2, var_49_0_key, var_undefined, 1, var_52_1_items,
  // is_defined:
  var_is_defined, 1, var_83_6_previous_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_previous_key_is_defined, lambda_9, TAIL_CALL,
  POS(83, 15),
  POS(84, 15),
  POS(85, 15),
  POS(86, 16),
  POS(88, 30),
  POS(87, 15)
};

static TAB_NUM t_lambda_previous_key_is_defined[] = {
  4, // locals
  0, // parameters
  // items(previous_key)) next_key)
  var_52_1_items, 1, var_83_6_previous_key, 1, LOCAL(1),
  // first(items(previous_key)) next_key)
  var_first, 1, LOCAL(1), 1, LOCAL(2),
  // !items(previous_key)
  var_tuple, 2, LOCAL(2), var_83_20_next_key, 1, LOCAL(4),
  // items(previous_key)
  var_52_1_items, 2, var_83_6_previous_key, LOCAL(4), 1, var_52_1_items,
  // check_next_key
  func_check_next_key, 0, TAIL_CALL,
  POS(90, 33),
  POS(90, 27),
  POS(89, 19),
  POS(89, 20),
  POS(91, 19)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  // !first_key next_key
  LET, 1, var_83_20_next_key, 1, var_84_1_first_key,
  // check_next_key
  func_check_next_key, 0, TAIL_CALL,
  POS(93, 19),
  POS(94, 19)
};

static TAB_NUM t_func_check_next_key[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_83_20_next_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_next_key_is_defined, lambda_10, TAIL_CALL,
  POS(98, 28),
  POS(97, 17)
};

static TAB_NUM t_lambda_next_key_is_defined[] = {
  4, // locals
  0, // parameters
  // items(next_key)))
  var_52_1_items, 1, var_83_20_next_key, 1, LOCAL(1),
  // second(items(next_key)))
  var_second, 1, LOCAL(1), 1, LOCAL(2),
  // !items(next_key)
  var_tuple, 2, var_83_6_previous_key, LOCAL(2), 1, LOCAL(4),
  // items(next_key)
  var_52_1_items, 2, var_83_20_next_key, LOCAL(4), 1, var_52_1_items,
  // return
  lambda_11, 0, TAIL_CALL,
  POS(100, 49),
  POS(100, 42),
  POS(99, 21),
  POS(99, 22),
  POS(101, 21)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  // !last_key previous_key
  LET, 1, var_83_6_previous_key, 1, var_85_1_last_key,
  // return
  lambda_11, 0, TAIL_CALL,
  POS(103, 21),
  POS(104, 21)
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // myself
  LET, -3, var_48_0_myself, var_items_of, var_52_1_items, var_first_item_of, var_84_1_first_key, var_last_item_of, var_85_1_last_key, LOCAL(1),
  // 
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(108, 19),
  POS(107, 19)
};

static TAB_NUM t_func_std_types__insert_order_set___length_of[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 113_41_self
  // items_of(self))
  var_items_of, 1, LOCAL(3), 1, LOCAL(1),
  // length_of(items_of(self))
  var_length_of, 1, LOCAL(1), 1, LOCAL(2),
  // -> length_of(items_of(self))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(114, 16),
  POS(114, 6),
  POS(114, 3)
};

static TAB_NUM t_func_std_types__insert_order_set___to_list[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 120_0_self
  // $items items_of(self)
  var_items_of, 1, LOCAL(2), 1, var_122_1_items,
  // $keys empty_list
  LET, 1, var_empty_list, 1, var_123_1_keys,
  // first_item_of(self)
  var_first_item_of, 1, LOCAL(2), 1, LOCAL(1),
  // add_keys first_item_of(self)
  func_add_keys, 1, LOCAL(1), TAIL_CALL,
  POS(122, 3),
  POS(123, 3),
  POS(124, 12),
  POS(124, 3)
};

static TAB_NUM t_func_add_keys[] = {
  1, // locals
  1, // parameters
  var_126_12_key,
  // is_undefined
  var_is_undefined, 1, var_126_12_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12, lambda_13, TAIL_CALL,
  POS(128, 11),
  POS(127, 5)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  keys
  LET, 1, var_123_1_keys, TAIL_CALL,
  POS(129, 9)
};

static TAB_NUM t_lambda_13[] = {
  2, // locals
  0, // parameters
  // push &keys key
  var_push, 2, var_123_1_keys, var_126_12_key, 1, var_123_1_keys,
  // items(key))
  var_122_1_items, 1, var_126_12_key, 1, LOCAL(1),
  // second(items(key))
  var_second, 1, LOCAL(1), 1, LOCAL(2),
  // add_keys second(items(key))
  func_add_keys, 1, LOCAL(2), TAIL_CALL,
  POS(131, 9),
  POS(132, 25),
  POS(132, 18),
  POS(132, 9)
};

static TAB_NUM t_func_std_types__insert_order_set___for_each[] = {
  4, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 138_0_self
  MANDATORY_PARAMETER, LOCAL(3), // 139_0_body
  var_next, LOCAL(4), // 140_0_finally
  // to_list body finally
  var_to_list, 1, LOCAL(2), 1, LOCAL(1),
  // for_each! self.to_list body finally
  var_for_each, 3, LOCAL(1), LOCAL(3), LOCAL(4), IO_TAIL_CALL,
  POS(142, 18),
  POS(142, 3)
};

static TAB_NUM t_func_std_types__insert_order_set___map_reduce[] = {
  5, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 157_0_self
  MANDATORY_PARAMETER, LOCAL(3), // 158_0_map_function
  var_append, LOCAL(4), // 159_0_reduce_function
  var_undefined, LOCAL(5), // 160_0_unit
  // to_list map_function reduce_function unit
  var_to_list, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce self.to_list map_function reduce_function unit
  var_map_reduce, 4, LOCAL(1), LOCAL(3), LOCAL(4), LOCAL(5), TAIL_CALL,
  POS(162, 19),
  POS(162, 3)
};

static TAB_NUM t_func_std__insert_order_set[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 169_0_keys
  // $set empty_insert_order_set
  LET, 1, var_empty_insert_order_set, 1, var_171_1_set,
  // for_each keys
  var_for_each, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(171, 3),
  POS(172, 3)
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 173_3_key
  // set(key) true
  var_171_1_set, 2, LOCAL(1), var_true, 1, var_171_1_set,
  // next
  var_next, 0, TAIL_CALL,
  POS(174, 8),
  POS(175, 7)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  //  set
  LET, 1, var_171_1_set, TAIL_CALL,
  POS(176, 7)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_UNIQUE, 0, {.str_8 = "NONE"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__insert_order_set}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_value}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_last_key_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_previous_key_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_next_key}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_next_key_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__insert_order_set___length_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__insert_order_set___to_list}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_keys}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__insert_order_set___for_each}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__insert_order_set___map_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__insert_order_set}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_STRING_8, 16, {.str_8 = "insert_order_set"}}
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
    {.position = POS(23, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(25, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_insert_order_set\000", NULL,
    {.position = POS(25, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(25, 43)}
  },
  {
    FOT_DERIVED, 0, 11,
    "insert_order_set\000std_types", std_types__insert_order_set__attributes,
    {"set\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(26, 53)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "items_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "set\000std_types", NULL,
    {.position = POS(32, 30)}
  },
  {
    FOT_DERIVED, 0, 0,
    "empty_insert_order_set\000std", NULL,
    {"insert_order_set\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(40, 39)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "first_item_of\000", NULL,
    {.position = POS(41, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(41, 44)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "last_item_of\000", NULL,
    {.position = POS(42, 30)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "48_0_myself\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "49_0_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "50_0_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "52_1_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "53_1_item\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(55, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(56, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "64_1_last_key\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(65, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(68, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(66, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(80, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "83_6_previous_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "83_20_next_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "84_1_first_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "85_1_last_key\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "second\000", NULL,
    {.position = POS(100, 42)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "length_of\000", NULL,
    {.position = POS(113, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_list\000", NULL,
    {.position = POS(116, 30)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "122_1_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "123_1_keys\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(123, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "126_12_key\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(131, 9)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
    {.position = POS(134, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(140, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(147, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(159, 23)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "insert_order_set\000std", NULL,
    {.const_idx = -func_std__insert_order_set}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "171_1_set\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_set\000", NULL,
    {.position = POS(171, 8)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(181, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(182, 30)}
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
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  29, // number of constants
  47, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
