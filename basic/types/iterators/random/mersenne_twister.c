#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  num_624 = -1,
  num_397 = -2,
  num_2147483648 = -3,
  num_2147483647 = -4,
  num_2636928640 = -5,
  num_4022730752 = -6,
  num_4294967296 = -7,
  func_std_types__mersenne_twister___next_raw_value = -8,
  num_0 = -9,
  num_2567483615 = -10,
  list_42_0 = -11,
  lambda_1 = -12,
  num_1 = -13,
  lambda_2 = -14,
  lambda_3 = -15,
  lambda_4 = -16,
  lambda_5 = -17,
  lambda_do = -18,
  lambda_6 = -19,
  num_11 = -20,
  num_7 = -21,
  num_15 = -22,
  num_18 = -23,
  func_std__mersenne_twister = -24,
  num_4294967295 = -25,
  lambda_7 = -26,
  minus_num_1 = -27,
  num_6069 = -28,
  lambda_8 = -29
};

enum {
  var__START = FIRST_VAR-1,
  var_index_of, // attribute
  var_std__assign, // extern
  var_state_of, // attribute
  var_std_types__mersenne_twister, // derived
  var_std_types__random_number_generator, // extern
  var_modulus_of, // extern polymorphic
  var_next_raw_value, // extern polymorphic
  var_40_1_state, // dynamic
  var_41_1_index, // dynamic
  var_list, // extern
  var_std__less, // extern
  var_45_1_new_state, // dynamic
  var_empty_list, // extern
  var_std__minus, // extern
  var_std__bit_and, // extern
  var_std__plus, // extern
  var_std__bit_or, // extern
  var_std__shift_right, // extern
  var_std__bit_xor, // extern
  var_push, // extern
  var_next, // extern
  var_from_to, // extern
  var_do, // extern
  var_if, // extern
  var_inc, // extern
  var_std__shift_left, // extern
  var_std__mersenne_twister, // initialized
  var_99_1_initial_state, // dynamic
  var_std__times, // extern
  var_repeat, // extern
  var__END
};


static TAB_NUM t_func_std_types__mersenne_twister___next_raw_value[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 39_46_self
  // $state state_of(self)
  var_state_of, 1, LOCAL(3), 1, var_40_1_state,
  // $index index_of(self)
  var_index_of, 1, LOCAL(3), 1, var_41_1_index,
  // STATE_VECTOR_LENGTH:
  var_std__less, 2, num_624, var_41_1_index, 1, LOCAL(1),
  // if !state !index
  var_if, 3, LOCAL(1), lambda_1, lambda_6, 2, var_40_1_state, var_41_1_index,
  // $y state(index)
  var_40_1_state, 1, var_41_1_index, 1, LOCAL(4),
  // inc &index
  var_inc, 1, var_41_1_index, 1, var_41_1_index,
  // y >> 11)
  var_std__shift_right, 2, LOCAL(4), num_11, 1, LOCAL(1),
  // !y y ^ (y >> 11)
  var_std__bit_xor, 2, LOCAL(4), LOCAL(1), 1, LOCAL(4),
  // y << 7)) & TEMPERING_MASK_B
  var_std__shift_left, 2, LOCAL(4), num_7, 1, LOCAL(1),
  // y ^ (y << 7)) & TEMPERING_MASK_B
  var_std__bit_xor, 2, LOCAL(4), LOCAL(1), 1, LOCAL(2),
  // !y (y ^ (y << 7)) & TEMPERING_MASK_B
  var_std__bit_and, 2, LOCAL(2), num_2636928640, 1, LOCAL(4),
  // y << 15)) & TEMPERING_MASK_C
  var_std__shift_left, 2, LOCAL(4), num_15, 1, LOCAL(1),
  // y ^ (y << 15)) & TEMPERING_MASK_C
  var_std__bit_xor, 2, LOCAL(4), LOCAL(1), 1, LOCAL(2),
  // !y (y ^ (y << 15)) & TEMPERING_MASK_C
  var_std__bit_and, 2, LOCAL(2), num_4022730752, 1, LOCAL(4),
  // y >> 18)
  var_std__shift_right, 2, LOCAL(4), num_18, 1, LOCAL(1),
  // !y y ^ (y >> 18)
  var_std__bit_xor, 2, LOCAL(4), LOCAL(1), 1, LOCAL(4),
  // self
  LET, -2, LOCAL(3), var_state_of, var_40_1_state, var_index_of, var_41_1_index, LOCAL(1),
  // ->
  LET, 2, LOCAL(1), LOCAL(4), TAIL_CALL,
  POS(40, 3),
  POS(41, 3),
  POS(44, 13),
  POS(43, 3),
  POS(81, 3),
  POS(82, 3),
  POS(83, 11),
  POS(83, 3),
  POS(84, 12),
  POS(84, 7),
  POS(84, 3),
  POS(85, 12),
  POS(85, 7),
  POS(85, 3),
  POS(86, 11),
  POS(86, 3),
  POS(88, 5),
  POS(87, 3)
};

static TAB_NUM t_lambda_1[] = {
  3, // locals
  0, // parameters
  // $new_state empty_list
  LET, 1, var_empty_list, 1, var_45_1_new_state,
  // STATE_VECTOR_LENGTH-STATE_VECTOR_M
  var_std__minus, 2, num_624, num_397, 1, LOCAL(1),
  // from_to !new_state
  var_from_to, 4, num_1, LOCAL(1), lambda_2, lambda_3, 1, var_45_1_new_state,
  // STATE_VECTOR_LENGTH+1-STATE_VECTOR_M
  var_std__plus, 2, num_624, num_1, 1, LOCAL(1),
  // STATE_VECTOR_LENGTH+1-STATE_VECTOR_M
  var_std__minus, 2, LOCAL(1), num_397, 1, LOCAL(2),
  // STATE_VECTOR_LENGTH-1
  var_std__minus, 2, num_624, num_1, 1, LOCAL(3),
  // from_to !new_state
  var_from_to, 4, LOCAL(2), LOCAL(3), lambda_4, lambda_5, 1, var_45_1_new_state,
  // do:
  var_do, 1, lambda_do, TAIL_CALL,
  POS(45, 7),
  POS(47, 11),
  POS(46, 7),
  POS(57, 9),
  POS(57, 9),
  POS(58, 9),
  POS(56, 7),
  POS(72, 7)
};

static TAB_NUM t_lambda_2[] = {
  10, // locals
  1, // parameters
  LOCAL(9), // 48_3_kk
  // state(kk) & UPPER_MASK
  var_40_1_state, 1, LOCAL(9), 1, LOCAL(1),
  // state(kk) & UPPER_MASK
  var_std__bit_and, 2, LOCAL(1), num_2147483648, 1, LOCAL(2),
  // kk+1) & LOWER_MASK
  var_std__plus, 2, LOCAL(9), num_1, 1, LOCAL(3),
  // state(kk+1) & LOWER_MASK
  var_40_1_state, 1, LOCAL(3), 1, LOCAL(4),
  // state(kk+1) & LOWER_MASK
  var_std__bit_and, 2, LOCAL(4), num_2147483647, 1, LOCAL(5),
  // $x
  var_std__bit_or, 2, LOCAL(2), LOCAL(5), 1, LOCAL(10),
  // kk+STATE_VECTOR_M) ^ (x >> 1) ^ mag((x & 1)+1)
  var_std__plus, 2, LOCAL(9), num_397, 1, LOCAL(1),
  // state(kk+STATE_VECTOR_M) ^ (x >> 1) ^ mag((x & 1)+1)
  var_40_1_state, 1, LOCAL(1), 1, LOCAL(2),
  // x >> 1) ^ mag((x & 1)+1)
  var_std__shift_right, 2, LOCAL(10), num_1, 1, LOCAL(3),
  // state(kk+STATE_VECTOR_M) ^ (x >> 1) ^ mag((x & 1)+1)
  var_std__bit_xor, 2, LOCAL(2), LOCAL(3), 1, LOCAL(4),
  // x & 1)+1)
  var_std__bit_and, 2, LOCAL(10), num_1, 1, LOCAL(5),
  // x & 1)+1)
  var_std__plus, 2, LOCAL(5), num_1, 1, LOCAL(6),
  // mag((x & 1)+1)
  list_42_0, 1, LOCAL(6), 1, LOCAL(7),
  // state(kk+STATE_VECTOR_M) ^ (x >> 1) ^ mag((x & 1)+1)
  var_std__bit_xor, 2, LOCAL(4), LOCAL(7), 1, LOCAL(8),
  // push &new_state state(kk+STATE_VECTOR_M) ^ (x >> 1) ^ mag((x & 1)+1)
  var_push, 2, var_45_1_new_state, LOCAL(8), 1, var_45_1_new_state,
  // next
  var_next, 0, TAIL_CALL,
  POS(51, 15),
  POS(51, 15),
  POS(52, 21),
  POS(52, 15),
  POS(52, 15),
  POS(49, 11),
  POS(53, 33),
  POS(53, 27),
  POS(53, 55),
  POS(53, 27),
  POS(53, 70),
  POS(53, 70),
  POS(53, 65),
  POS(53, 27),
  POS(53, 11),
  POS(54, 11)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  new_state
  LET, 1, var_45_1_new_state, TAIL_CALL,
  POS(55, 11)
};

static TAB_NUM t_lambda_4[] = {
  11, // locals
  1, // parameters
  LOCAL(10), // 59_3_kk
  // state(kk) & UPPER_MASK
  var_40_1_state, 1, LOCAL(10), 1, LOCAL(1),
  // state(kk) & UPPER_MASK
  var_std__bit_and, 2, LOCAL(1), num_2147483648, 1, LOCAL(2),
  // kk+1) & LOWER_MASK
  var_std__plus, 2, LOCAL(10), num_1, 1, LOCAL(3),
  // state(kk+1) & LOWER_MASK
  var_40_1_state, 1, LOCAL(3), 1, LOCAL(4),
  // state(kk+1) & LOWER_MASK
  var_std__bit_and, 2, LOCAL(4), num_2147483647, 1, LOCAL(5),
  // $x
  var_std__bit_or, 2, LOCAL(2), LOCAL(5), 1, LOCAL(11),
  // kk+STATE_VECTOR_M-STATE_VECTOR_LENGTH)
  var_std__plus, 2, LOCAL(10), num_397, 1, LOCAL(1),
  // kk+STATE_VECTOR_M-STATE_VECTOR_LENGTH)
  var_std__minus, 2, LOCAL(1), num_624, 1, LOCAL(2),
  // new_state(kk+STATE_VECTOR_M-STATE_VECTOR_LENGTH)
  var_45_1_new_state, 1, LOCAL(2), 1, LOCAL(3),
  // x >> 1
  var_std__shift_right, 2, LOCAL(11), num_1, 1, LOCAL(4),
  // 
  var_std__bit_xor, 2, LOCAL(3), LOCAL(4), 1, LOCAL(5),
  // x & 1)+1)
  var_std__bit_and, 2, LOCAL(11), num_1, 1, LOCAL(6),
  // x & 1)+1)
  var_std__plus, 2, LOCAL(6), num_1, 1, LOCAL(7),
  // mag((x & 1)+1)
  list_42_0, 1, LOCAL(7), 1, LOCAL(8),
  // 
  var_std__bit_xor, 2, LOCAL(5), LOCAL(8), 1, LOCAL(9),
  // push
  var_push, 2, var_45_1_new_state, LOCAL(9), 1, var_45_1_new_state,
  // next
  var_next, 0, TAIL_CALL,
  POS(62, 15),
  POS(62, 15),
  POS(63, 21),
  POS(63, 15),
  POS(63, 15),
  POS(60, 11),
  POS(67, 25),
  POS(67, 25),
  POS(67, 15),
  POS(68, 15),
  POS(66, 14),
  POS(69, 20),
  POS(69, 20),
  POS(69, 15),
  POS(66, 14),
  POS(64, 11),
  POS(70, 11)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  new_state
  LET, 1, var_45_1_new_state, TAIL_CALL,
  POS(71, 11)
};

static TAB_NUM t_lambda_do[] = {
  8, // locals
  0, // parameters
  // state(STATE_VECTOR_LENGTH) & UPPER_MASK
  var_40_1_state, 1, num_624, 1, LOCAL(1),
  // state(STATE_VECTOR_LENGTH) & UPPER_MASK
  var_std__bit_and, 2, LOCAL(1), num_2147483648, 1, LOCAL(2),
  // new_state(1) & LOWER_MASK
  var_45_1_new_state, 1, num_1, 1, LOCAL(3),
  // new_state(1) & LOWER_MASK
  var_std__bit_and, 2, LOCAL(3), num_2147483647, 1, LOCAL(4),
  // $x
  var_std__bit_or, 2, LOCAL(2), LOCAL(4), 1, LOCAL(8),
  // new_state(STATE_VECTOR_M) ^ (x >> 1) ^ mag((x & 1)+1)
  var_45_1_new_state, 1, num_397, 1, LOCAL(1),
  // x >> 1) ^ mag((x & 1)+1)
  var_std__shift_right, 2, LOCAL(8), num_1, 1, LOCAL(2),
  // new_state(STATE_VECTOR_M) ^ (x >> 1) ^ mag((x & 1)+1)
  var_std__bit_xor, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // x & 1)+1)
  var_std__bit_and, 2, LOCAL(8), num_1, 1, LOCAL(4),
  // x & 1)+1)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(5),
  // mag((x & 1)+1)
  list_42_0, 1, LOCAL(5), 1, LOCAL(6),
  // new_state(STATE_VECTOR_M) ^ (x >> 1) ^ mag((x & 1)+1)
  var_std__bit_xor, 2, LOCAL(3), LOCAL(6), 1, LOCAL(7),
  // push &new_state new_state(STATE_VECTOR_M) ^ (x >> 1) ^ mag((x & 1)+1)
  var_push, 2, var_45_1_new_state, LOCAL(7), 1, var_45_1_new_state,
  // -> new_state 1
  LET, 2, var_45_1_new_state, num_1, TAIL_CALL,
  POS(75, 13),
  POS(75, 13),
  POS(76, 13),
  POS(76, 13),
  POS(73, 9),
  POS(77, 25),
  POS(77, 54),
  POS(77, 25),
  POS(77, 69),
  POS(77, 69),
  POS(77, 64),
  POS(77, 25),
  POS(77, 9),
  POS(78, 9)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // -> state index
  LET, 2, var_40_1_state, var_41_1_index, TAIL_CALL,
  POS(80, 7)
};

static TAB_NUM t_func_std__mersenne_twister[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 97_0_seed
  // seed & 0xffffffff)
  var_std__bit_and, 2, LOCAL(3), num_4294967295, 1, LOCAL(1),
  // $initial_state list(seed & 0xffffffff)
  var_list, 1, LOCAL(1), 1, var_99_1_initial_state,
  // STATE_VECTOR_LENGTH-1
  var_std__minus, 2, num_624, num_1, 1, LOCAL(1),
  // repeat !initial_state STATE_VECTOR_LENGTH-1
  var_repeat, 3, LOCAL(1), lambda_7, lambda_8, 1, var_99_1_initial_state,
  // STATE_VECTOR_LENGTH+1
  var_std__plus, 2, num_624, num_1, 1, LOCAL(1),
  // std_types::mersenne_twister
  LET, -2, var_std_types__mersenne_twister, var_state_of, var_99_1_initial_state, var_index_of, LOCAL(1), LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(99, 23),
  POS(99, 3),
  POS(100, 25),
  POS(100, 3),
  POS(108, 17),
  POS(106, 5),
  POS(105, 3)
};

static TAB_NUM t_lambda_7[] = {
  3, // locals
  0, // parameters
  // initial_state(-1) & 0xffffffff
  var_99_1_initial_state, 1, minus_num_1, 1, LOCAL(1),
  // 6069*initial_state(-1) & 0xffffffff
  var_std__times, 2, num_6069, LOCAL(1), 1, LOCAL(2),
  // 6069*initial_state(-1) & 0xffffffff
  var_std__bit_and, 2, LOCAL(2), num_4294967295, 1, LOCAL(3),
  // push &initial_state 6069*initial_state(-1) & 0xffffffff
  var_push, 2, var_99_1_initial_state, LOCAL(3), 1, var_99_1_initial_state,
  // next
  var_next, 0, TAIL_CALL,
  POS(102, 32),
  POS(102, 27),
  POS(102, 27),
  POS(102, 7),
  POS(103, 7)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  initial_state
  LET, 1, var_99_1_initial_state, TAIL_CALL,
  POS(104, 7)
};

static int list_42_0_arguments[] = {
  -num_0, -num_2567483615
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_POSITIVE_INT64, 0, {.value = 624}},
  {FLT_POSITIVE_INT64, 0, {.value = 397}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x80000000}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x7fffffff}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x9d2c5680}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xefc60000}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x100000000}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__mersenne_twister___next_raw_value}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x0}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x9908b0df}},
  {FLT_LIST, 2, {.arguments = list_42_0_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_POSITIVE_INT64, 0, {.value = 11}},
  {FLT_POSITIVE_INT64, 0, {.value = 7}},
  {FLT_POSITIVE_INT64, 0, {.value = 15}},
  {FLT_POSITIVE_INT64, 0, {.value = 18}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__mersenne_twister}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xffffffff}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_POSITIVE_INT64, 0, {.value = 6069}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}}
};

static ATTRIBUTE_DEFINITION std_types__mersenne_twister__attributes[] = {
  {-var_modulus_of, -num_4294967296},
  {var_next_raw_value, -func_std_types__mersenne_twister___next_raw_value}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "index_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "state_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_DERIVED, 0, 2,
    "mersenne_twister\000std_types", std_types__mersenne_twister__attributes,
    {"random_number_generator\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "random_number_generator\000std_types", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "modulus_of\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "next_raw_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "40_1_state\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "41_1_index\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "45_1_new_state\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_or\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_xor\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "do\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_left\000std", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "mersenne_twister\000std", NULL,
    {.const_idx = -func_std__mersenne_twister}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "99_1_initial_state\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "repeat\000", NULL
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__iterators__random__mersenne_twister = {
  "_basic__types__iterators__random__mersenne_twister", // module name
  "basic/types/iterators/random/mersenne_twister.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  29, // number of constants
  30, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
