#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  uni_std__RANDOM_BASED_UUID = -1,
  uni_std__TIME_BASED_UUID = -2,
  uni_std__NAME_BASED_UUID = -3,
  func_generate_id = -4,
  str_devurandom = -5,
  num_16 = -6,
  func_std_types__io___generate_uuid = -7,
  num_1 = -8,
  func_load_completed = -9,
  func_load_failed = -10,
  func_compute_uuid = -11,
  string_1 = -12,
  minus_num_16 = -13,
  minus_num_1 = -14,
  num_2 = -15,
  num_3 = -16,
  num_4 = -17,
  num_5 = -18,
  num_6 = -19,
  num_7 = -20,
  num_8 = -21,
  num_9 = -22,
  num_10 = -23,
  num_11 = -24,
  num_12 = -25,
  num_13 = -26,
  num_14 = -27,
  num_15 = -28,
  string_2 = -29
};

enum {
  var__START = FIRST_VAR-1,
  var_std__RANDOM_BASED_UUID, // initialized
  var_std__assign, // extern
  var_std__TIME_BASED_UUID, // initialized
  var_std__NAME_BASED_UUID, // initialized
  var_std__generate_uuid, // attribute
  var_std_types__object, // extern
  var_generate_uuid, // extern polymorphic
  var_std_types__undefined, // extern
  var_load, // extern
  var_current_time, // extern
  var_std_types__io, // extern
  var_tuple, // extern
  var_JOB_COMPLETED, // extern
  var_std__key_value_pair, // extern
  var_JOB_FAILED, // extern
  var_register_handlers, // extern
  var_deregister_all_handlers, // extern
  var_current_time_of, // extern
  var_to_uint8_array, // extern
  var_seconds_since_epoch, // extern
  var_to_string, // extern
  var_second_of, // extern
  var_append, // extern
  var_pad_right, // extern
  var_range, // extern
  var_std__bit_xor, // extern
  var_hex, // extern
  var__END
};


static TAB_NUM t_func_generate_id[] = {
  3, // locals
  1, // parameters
  LOCAL(1),
  // load! $rnd "/dev/urandom" 16
  var_load, 2, str_devurandom, num_16, IO_CALL(1), LOCAL(2),
  // current_time! $t
  var_current_time, 0, IO_CALL(1), LOCAL(3),
  // compute_uuid(t rnd)
  func_compute_uuid, 2, LOCAL(3), LOCAL(2), 1, LOCAL(1),
  // -> compute_uuid(t rnd)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(40, 3),
  POS(41, 3),
  POS(42, 6),
  POS(42, 3)
};

static TAB_NUM t_func_std_types__io___generate_uuid[] = {
  4, // locals
  3, // parameters
  LOCAL(3), // 48_0_io
  LOCAL(4), // 49_0_id
  LOCAL(1),
  // tuple &id 1
  var_tuple, 2, LOCAL(4), num_1, 1, LOCAL(4),
  // load &io id "/dev/urandom" 16
  var_load, 4, LOCAL(3), LOCAL(4), str_devurandom, num_16, 1, LOCAL(3),
  // JOB_COMPLETED = load_completed
  var_std__key_value_pair, 2, var_JOB_COMPLETED, func_load_completed, 1, LOCAL(1),
  // JOB_FAILED = load_failed
  var_std__key_value_pair, 2, var_JOB_FAILED, func_load_failed, 1, LOCAL(2),
  // register_handlers io id
  var_register_handlers, 4, LOCAL(3), LOCAL(4), LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(52, 3),
  POS(53, 3),
  POS(55, 5),
  POS(56, 5),
  POS(54, 3)
};

static TAB_NUM t_func_load_completed[] = {
  6, // locals
  3, // parameters
  LOCAL(4), // 58_18_io
  LOCAL(5), // 58_21_id
  LOCAL(6), // 58_24_rnd
  // deregister_all_handlers &io id
  var_deregister_all_handlers, 2, LOCAL(4), LOCAL(5), 1, LOCAL(4),
  // id !id
  LOCAL(5), 0, 1, LOCAL(5),
  // current_time_of(io) rnd))
  var_current_time_of, 1, LOCAL(4), 1, LOCAL(1),
  // compute_uuid(current_time_of(io) rnd))
  func_compute_uuid, 2, LOCAL(1), LOCAL(6), 1, LOCAL(2),
  // tuple(JOB_COMPLETED id compute_uuid(current_time_of(io) rnd))
  var_tuple, 3, var_JOB_COMPLETED, LOCAL(5), LOCAL(2), 1, LOCAL(3),
  // -> io tuple(JOB_COMPLETED id compute_uuid(current_time_of(io) rnd))
  LET, 2, LOCAL(4), LOCAL(3), TAIL_CALL,
  POS(59, 3),
  POS(60, 3),
  POS(61, 45),
  POS(61, 32),
  POS(61, 9),
  POS(61, 3)
};

static TAB_NUM t_func_load_failed[] = {
  4, // locals
  3, // parameters
  LOCAL(2), // 63_15_io
  LOCAL(3), // 63_18_id
  LOCAL(4), // 63_21_err
  // deregister_all_handlers &io id
  var_deregister_all_handlers, 2, LOCAL(2), LOCAL(3), 1, LOCAL(2),
  // id !id
  LOCAL(3), 0, 1, LOCAL(3),
  // tuple(JOB_FAILED id err)
  var_tuple, 3, var_JOB_FAILED, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // -> io tuple(JOB_FAILED id err)
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(64, 3),
  POS(65, 3),
  POS(66, 9),
  POS(66, 3)
};

static TAB_NUM t_func_compute_uuid[] = {
  36, // locals
  2, // parameters
  LOCAL(34), // 68_16_t
  LOCAL(35), // 68_18_rnd
  // to_uint8_array &rnd
  var_to_uint8_array, 1, LOCAL(35), 1, LOCAL(35),
  // seconds_since_epoch(t).to_string second_of(t).to_string)
  var_seconds_since_epoch, 1, LOCAL(34), 1, LOCAL(1),
  // to_string second_of(t).to_string)
  var_to_string, 1, LOCAL(1), 1, LOCAL(2),
  // second_of(t).to_string)
  var_second_of, 1, LOCAL(34), 1, LOCAL(3),
  // to_string)
  var_to_string, 1, LOCAL(3), 1, LOCAL(4),
  // append(seconds_since_epoch(t).to_string second_of(t).to_string)
  var_append, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  // pad_right
  var_pad_right, 3, LOCAL(5), num_16, string_1, 1, LOCAL(6),
  // range
  var_range, 3, LOCAL(6), minus_num_16, minus_num_1, 1, LOCAL(7),
  // !t
  var_to_uint8_array, 1, LOCAL(7), 1, LOCAL(34),
  // $uuid rnd^t
  var_std__bit_xor, 2, LOCAL(35), LOCAL(34), 1, LOCAL(36),
  // uuid(1) 2)
  LOCAL(36), 1, num_1, 1, LOCAL(1),
  // hex(uuid(1) 2)
  var_hex, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // uuid(2) 2)
  LOCAL(36), 1, num_2, 1, LOCAL(3),
  // hex(uuid(2) 2)
  var_hex, 2, LOCAL(3), num_2, 1, LOCAL(4),
  // uuid(3) 2)
  LOCAL(36), 1, num_3, 1, LOCAL(5),
  // hex(uuid(3) 2)
  var_hex, 2, LOCAL(5), num_2, 1, LOCAL(6),
  // uuid(4) 2)
  LOCAL(36), 1, num_4, 1, LOCAL(7),
  // hex(uuid(4) 2)
  var_hex, 2, LOCAL(7), num_2, 1, LOCAL(8),
  // uuid(5) 2)
  LOCAL(36), 1, num_5, 1, LOCAL(9),
  // hex(uuid(5) 2)
  var_hex, 2, LOCAL(9), num_2, 1, LOCAL(10),
  // uuid(6) 2)
  LOCAL(36), 1, num_6, 1, LOCAL(11),
  // hex(uuid(6) 2)
  var_hex, 2, LOCAL(11), num_2, 1, LOCAL(12),
  // uuid(7) 2)
  LOCAL(36), 1, num_7, 1, LOCAL(13),
  // hex(uuid(7) 2)
  var_hex, 2, LOCAL(13), num_2, 1, LOCAL(14),
  // uuid(8) 2)
  LOCAL(36), 1, num_8, 1, LOCAL(15),
  // hex(uuid(8) 2)
  var_hex, 2, LOCAL(15), num_2, 1, LOCAL(16),
  // uuid(9) 2)
  LOCAL(36), 1, num_9, 1, LOCAL(17),
  // hex(uuid(9) 2)
  var_hex, 2, LOCAL(17), num_2, 1, LOCAL(18),
  // uuid(10) 2)
  LOCAL(36), 1, num_10, 1, LOCAL(19),
  // hex(uuid(10) 2)
  var_hex, 2, LOCAL(19), num_2, 1, LOCAL(20),
  // uuid(11) 2)
  LOCAL(36), 1, num_11, 1, LOCAL(21),
  // hex(uuid(11) 2)
  var_hex, 2, LOCAL(21), num_2, 1, LOCAL(22),
  // uuid(12) 2)
  LOCAL(36), 1, num_12, 1, LOCAL(23),
  // hex(uuid(12) 2)
  var_hex, 2, LOCAL(23), num_2, 1, LOCAL(24),
  // uuid(13) 2)
  LOCAL(36), 1, num_13, 1, LOCAL(25),
  // hex(uuid(13) 2)
  var_hex, 2, LOCAL(25), num_2, 1, LOCAL(26),
  // uuid(14) 2)
  LOCAL(36), 1, num_14, 1, LOCAL(27),
  // hex(uuid(14) 2)
  var_hex, 2, LOCAL(27), num_2, 1, LOCAL(28),
  // uuid(15) 2)
  LOCAL(36), 1, num_15, 1, LOCAL(29),
  // hex(uuid(15) 2)
  var_hex, 2, LOCAL(29), num_2, 1, LOCAL(30),
  // uuid(16) 2)
  LOCAL(36), 1, num_16, 1, LOCAL(31),
  // hex(uuid(16) 2)
  var_hex, 2, LOCAL(31), num_2, 1, LOCAL(32),
  // append
  var_append, 20, LOCAL(2), LOCAL(4), LOCAL(6), LOCAL(8), string_2, LOCAL(10), LOCAL(12), string_2, LOCAL(14), LOCAL(16), string_2, LOCAL(18), LOCAL(20), string_2, LOCAL(22), LOCAL(24), LOCAL(26), LOCAL(28), LOCAL(30), LOCAL(32), 1, LOCAL(33),
  // ->
  LET, 1, LOCAL(33), TAIL_CALL,
  POS(69, 3),
  POS(74, 18),
  POS(74, 41),
  POS(74, 51),
  POS(74, 64),
  POS(74, 11),
  POS(73, 9),
  POS(72, 7),
  POS(70, 3),
  POS(79, 3),
  POS(82, 11),
  POS(82, 7),
  POS(83, 11),
  POS(83, 7),
  POS(84, 11),
  POS(84, 7),
  POS(85, 11),
  POS(85, 7),
  POS(87, 11),
  POS(87, 7),
  POS(88, 11),
  POS(88, 7),
  POS(90, 11),
  POS(90, 7),
  POS(91, 11),
  POS(91, 7),
  POS(93, 11),
  POS(93, 7),
  POS(94, 11),
  POS(94, 7),
  POS(96, 11),
  POS(96, 7),
  POS(97, 11),
  POS(97, 7),
  POS(98, 11),
  POS(98, 7),
  POS(99, 11),
  POS(99, 7),
  POS(100, 11),
  POS(100, 7),
  POS(101, 11),
  POS(101, 7),
  POS(81, 5),
  POS(80, 3)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_UNIQUE, 0, {.str_8 = "std::RANDOM_BASED_UUID"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::TIME_BASED_UUID"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::NAME_BASED_UUID"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_generate_id}},
  {FLT_STRING_8, 12, {.str_8 = "/dev/urandom"}},
  {FLT_POSITIVE_INT64, 0, {.value = 16}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___generate_uuid}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_load_completed}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_load_failed}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_compute_uuid}},
  {FLT_STRING_8, 1, {.str_8 = "0"}},
  {FLT_NEGATIVE_INT64, 0, {.value = 16}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_POSITIVE_INT64, 0, {.value = 5}},
  {FLT_POSITIVE_INT64, 0, {.value = 6}},
  {FLT_POSITIVE_INT64, 0, {.value = 7}},
  {FLT_POSITIVE_INT64, 0, {.value = 8}},
  {FLT_POSITIVE_INT64, 0, {.value = 9}},
  {FLT_POSITIVE_INT64, 0, {.value = 10}},
  {FLT_POSITIVE_INT64, 0, {.value = 11}},
  {FLT_POSITIVE_INT64, 0, {.value = 12}},
  {FLT_POSITIVE_INT64, 0, {.value = 13}},
  {FLT_POSITIVE_INT64, 0, {.value = 14}},
  {FLT_POSITIVE_INT64, 0, {.value = 15}},
  {FLT_STRING_8, 1, {.str_8 = "-"}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {var_generate_uuid, -func_generate_id}
};

static ATTRIBUTE_DEFINITION std_types__undefined__attributes[] = {
  {var_generate_uuid, -func_generate_id}
};

static ATTRIBUTE_DEFINITION std_types__io__attributes[] = {
  {var_generate_uuid, -func_std_types__io___generate_uuid}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_INITIALIZED, 0, 0,
    "RANDOM_BASED_UUID\000std", NULL,
    {.const_idx = -uni_std__RANDOM_BASED_UUID}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(25, 1)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "TIME_BASED_UUID\000std", NULL,
    {.const_idx = -uni_std__TIME_BASED_UUID}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "NAME_BASED_UUID\000std", NULL,
    {.const_idx = -uni_std__NAME_BASED_UUID}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "generate_uuid\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(31, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "generate_uuid\000", NULL,
    {.position = POS(31, 20)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "undefined\000std_types", std_types__undefined__attributes,
    {.position = POS(32, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "load\000", NULL,
    {.position = POS(40, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_time\000", NULL,
    {.position = POS(41, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "io\000std_types", std_types__io__attributes,
    {.position = POS(44, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(52, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "JOB_COMPLETED\000", NULL,
    {.position = POS(55, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value_pair\000std", NULL,
    {.position = POS(55, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "JOB_FAILED\000", NULL,
    {.position = POS(56, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "register_handlers\000", NULL,
    {.position = POS(54, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deregister_all_handlers\000", NULL,
    {.position = POS(59, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_time_of\000", NULL,
    {.position = POS(61, 45)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_uint8_array\000", NULL,
    {.position = POS(69, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "seconds_since_epoch\000", NULL,
    {.position = POS(74, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_string\000", NULL,
    {.position = POS(74, 41)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "second_of\000", NULL,
    {.position = POS(74, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(74, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pad_right\000", NULL,
    {.position = POS(73, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(72, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_xor\000std", NULL,
    {.position = POS(79, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hex\000", NULL,
    {.position = POS(82, 7)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__uuid = {
  "_basic__uuid", // module name
  "basic/uuid.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  29, // number of constants
  27, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
