#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std__get_uuid = -1,
  str_devurandom = -2,
  str_r = -3,
  num_16 = -4,
  string_1 = -5,
  minus_num_16 = -6,
  minus_num_1 = -7,
  num_1 = -8,
  num_2 = -9,
  num_3 = -10,
  num_4 = -11,
  num_5 = -12,
  num_6 = -13,
  num_7 = -14,
  num_8 = -15,
  num_9 = -16,
  num_10 = -17,
  num_11 = -18,
  num_12 = -19,
  num_13 = -20,
  num_14 = -21,
  num_15 = -22,
  string_2 = -23
};

enum {
  var__START = FIRST_VAR-1,
  var_std__get_uuid, // initialized
  var_open, // extern
  var_read, // extern
  var_close, // extern
  var_current_time, // extern
  var_to_uint8_array, // extern
  var_seconds_since_epoch, // extern
  var_to_string, // extern
  var_second_of, // extern
  var_append, // extern
  var_pad_right, // extern
  var_range, // extern
  var_hexdump, // extern
  var_std__bit_xor, // extern
  var_hex, // extern
  var_std__assign, // extern
  var__END
};


static TAB_NUM t_func_std__get_uuid[] = {
  37, // locals
  0, // parameters
  // open! $fd "/dev/urandom" "r"
  var_open, 2, str_devurandom, str_r, IO_CALL(1), LOCAL(34),
  // read! $rnd fd 16
  var_read, 2, LOCAL(34), num_16, IO_CALL(1), LOCAL(35),
  // close! fd
  var_close, 1, LOCAL(34), IO_CALL(0),
  // current_time! $t
  var_current_time, 0, IO_CALL(1), LOCAL(36),
  // to_uint8_array &rnd
  var_to_uint8_array, 1, LOCAL(35), 1, LOCAL(35),
  // seconds_since_epoch(t).to_string second_of(t).to_string)
  var_seconds_since_epoch, 1, LOCAL(36), 1, LOCAL(1),
  // to_string second_of(t).to_string)
  var_to_string, 1, LOCAL(1), 1, LOCAL(2),
  // second_of(t).to_string)
  var_second_of, 1, LOCAL(36), 1, LOCAL(3),
  // to_string)
  var_to_string, 1, LOCAL(3), 1, LOCAL(4),
  // append(seconds_since_epoch(t).to_string second_of(t).to_string)
  var_append, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  // pad_right
  var_pad_right, 3, LOCAL(5), num_16, string_1, 1, LOCAL(6),
  // range
  var_range, 3, LOCAL(6), minus_num_16, minus_num_1, 1, LOCAL(7),
  // !t
  var_to_uint8_array, 1, LOCAL(7), 1, LOCAL(36),
  // hexdump! rnd
  var_hexdump, 1, LOCAL(35), IO_CALL(0),
  // hexdump! t
  var_hexdump, 1, LOCAL(36), IO_CALL(0),
  // $uuid rnd^t
  var_std__bit_xor, 2, LOCAL(35), LOCAL(36), 1, LOCAL(37),
  // uuid(1) 2)
  LOCAL(37), 1, num_1, 1, LOCAL(1),
  // hex(uuid(1) 2)
  var_hex, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // uuid(2) 2)
  LOCAL(37), 1, num_2, 1, LOCAL(3),
  // hex(uuid(2) 2)
  var_hex, 2, LOCAL(3), num_2, 1, LOCAL(4),
  // uuid(3) 2)
  LOCAL(37), 1, num_3, 1, LOCAL(5),
  // hex(uuid(3) 2)
  var_hex, 2, LOCAL(5), num_2, 1, LOCAL(6),
  // uuid(4) 2)
  LOCAL(37), 1, num_4, 1, LOCAL(7),
  // hex(uuid(4) 2)
  var_hex, 2, LOCAL(7), num_2, 1, LOCAL(8),
  // uuid(5) 2)
  LOCAL(37), 1, num_5, 1, LOCAL(9),
  // hex(uuid(5) 2)
  var_hex, 2, LOCAL(9), num_2, 1, LOCAL(10),
  // uuid(6) 2)
  LOCAL(37), 1, num_6, 1, LOCAL(11),
  // hex(uuid(6) 2)
  var_hex, 2, LOCAL(11), num_2, 1, LOCAL(12),
  // uuid(7) 2)
  LOCAL(37), 1, num_7, 1, LOCAL(13),
  // hex(uuid(7) 2)
  var_hex, 2, LOCAL(13), num_2, 1, LOCAL(14),
  // uuid(8) 2)
  LOCAL(37), 1, num_8, 1, LOCAL(15),
  // hex(uuid(8) 2)
  var_hex, 2, LOCAL(15), num_2, 1, LOCAL(16),
  // uuid(9) 2)
  LOCAL(37), 1, num_9, 1, LOCAL(17),
  // hex(uuid(9) 2)
  var_hex, 2, LOCAL(17), num_2, 1, LOCAL(18),
  // uuid(10) 2)
  LOCAL(37), 1, num_10, 1, LOCAL(19),
  // hex(uuid(10) 2)
  var_hex, 2, LOCAL(19), num_2, 1, LOCAL(20),
  // uuid(11) 2)
  LOCAL(37), 1, num_11, 1, LOCAL(21),
  // hex(uuid(11) 2)
  var_hex, 2, LOCAL(21), num_2, 1, LOCAL(22),
  // uuid(12) 2)
  LOCAL(37), 1, num_12, 1, LOCAL(23),
  // hex(uuid(12) 2)
  var_hex, 2, LOCAL(23), num_2, 1, LOCAL(24),
  // uuid(13) 2)
  LOCAL(37), 1, num_13, 1, LOCAL(25),
  // hex(uuid(13) 2)
  var_hex, 2, LOCAL(25), num_2, 1, LOCAL(26),
  // uuid(14) 2)
  LOCAL(37), 1, num_14, 1, LOCAL(27),
  // hex(uuid(14) 2)
  var_hex, 2, LOCAL(27), num_2, 1, LOCAL(28),
  // uuid(15) 2)
  LOCAL(37), 1, num_15, 1, LOCAL(29),
  // hex(uuid(15) 2)
  var_hex, 2, LOCAL(29), num_2, 1, LOCAL(30),
  // uuid(16) 2)
  LOCAL(37), 1, num_16, 1, LOCAL(31),
  // hex(uuid(16) 2)
  var_hex, 2, LOCAL(31), num_2, 1, LOCAL(32),
  // append
  var_append, 20, LOCAL(2), LOCAL(4), LOCAL(6), LOCAL(8), string_2, LOCAL(10), LOCAL(12), string_2, LOCAL(14), LOCAL(16), string_2, LOCAL(18), LOCAL(20), string_2, LOCAL(22), LOCAL(24), LOCAL(26), LOCAL(28), LOCAL(30), LOCAL(32), 1, LOCAL(33),
  // ->
  LET, 1, LOCAL(33), TAIL_CALL,
  POS(24, 3),
  POS(25, 3),
  POS(26, 3),
  POS(27, 3),
  POS(28, 3),
  POS(33, 18),
  POS(33, 41),
  POS(33, 51),
  POS(33, 64),
  POS(33, 11),
  POS(32, 9),
  POS(31, 7),
  POS(29, 3),
  POS(38, 3),
  POS(39, 3),
  POS(40, 3),
  POS(43, 11),
  POS(43, 7),
  POS(44, 11),
  POS(44, 7),
  POS(45, 11),
  POS(45, 7),
  POS(46, 11),
  POS(46, 7),
  POS(48, 11),
  POS(48, 7),
  POS(49, 11),
  POS(49, 7),
  POS(51, 11),
  POS(51, 7),
  POS(52, 11),
  POS(52, 7),
  POS(54, 11),
  POS(54, 7),
  POS(55, 11),
  POS(55, 7),
  POS(57, 11),
  POS(57, 7),
  POS(58, 11),
  POS(58, 7),
  POS(59, 11),
  POS(59, 7),
  POS(60, 11),
  POS(60, 7),
  POS(61, 11),
  POS(61, 7),
  POS(62, 11),
  POS(62, 7),
  POS(42, 5),
  POS(41, 3)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__get_uuid}},
  {FLT_STRING_8, 12, {.str_8 = "/dev/urandom"}},
  {FLT_STRING_8, 1, {.str_8 = "r"}},
  {FLT_POSITIVE_INT64, 0, {.value = 16}},
  {FLT_STRING_8, 1, {.str_8 = "0"}},
  {FLT_NEGATIVE_INT64, 0, {.value = 16}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
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

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_INITIALIZED, 0, 0,
    "get_uuid\000std", NULL,
    {.const_idx = -func_std__get_uuid}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open\000", NULL,
    {.position = POS(24, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read\000", NULL,
    {.position = POS(25, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "close\000", NULL,
    {.position = POS(26, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_time\000", NULL,
    {.position = POS(27, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_uint8_array\000", NULL,
    {.position = POS(28, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "seconds_since_epoch\000", NULL,
    {.position = POS(33, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_string\000", NULL,
    {.position = POS(33, 41)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "second_of\000", NULL,
    {.position = POS(33, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(33, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pad_right\000", NULL,
    {.position = POS(32, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(31, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hexdump\000", NULL,
    {.position = POS(38, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_xor\000std", NULL,
    {.position = POS(40, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hex\000", NULL,
    {.position = POS(43, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(41, 5)}
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
  23, // number of constants
  16, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
