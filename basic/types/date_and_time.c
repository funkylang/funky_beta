#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  str_date_and_time = -1,
  func_std_types__date_and_time___serialize = -2,
  str_date_and_time_2 = -3,
  string_1 = -4,
  lambda_1 = -5,
  lambda_2 = -6,
  func_std_types__date_and_time___deserializer_of = -7,
  string_2 = -8,
  num_1 = -9,
  string_3 = -10,
  num_2 = -11,
  num_3 = -12,
  string_4 = -13,
  func_std_types__date_and_time___to_string = -14,
  string_5 = -15,
  num_1000 = -16,
  lambda_3 = -17,
  num_0 = -18,
  lambda_4 = -19,
  num_3600 = -20,
  string_6 = -21,
  lambda_5 = -22,
  lambda_6 = -23,
  lambda_7 = -24,
  lambda_8 = -25,
  string_7 = -26,
  chr_32 = -27,
  chr_46 = -28,
  str__GMT = -29
};

enum {
  var__START = FIRST_VAR-1,
  var_std_types__date_and_time, // extern
  var_serialization_tag_of, // extern polymorphic
  var_serialize, // extern polymorphic
  var_31_5_indent, // dynamic
  var_undefined, // extern
  var_to_string, // extern polymorphic
  var_33_4_str, // dynamic
  var_string, // extern
  var_is_defined, // extern
  var_tabs_and_spaces, // extern
  var_append, // extern
  var_std__assign, // extern
  var_if, // extern
  var_deserializer_of, // extern polymorphic
  var_split, // extern
  var_to_number, // extern
  var_date_and_time, // extern
  var_deserializers, // extern
  var_register_type, // extern
  var_77_4_ts, // dynamic
  var_time_shift_of, // extern
  var_std__plus, // extern
  var_second_of, // extern
  var_year_of, // extern
  var_month_of, // extern
  var_pad_left, // extern
  var_day_of, // extern
  var_hour_of, // extern
  var_minute_of, // extern
  var_floor, // extern
  var_std__minus, // extern
  var_std__times, // extern
  var_std__less, // extern
  var_std__over, // extern
  var_true, // extern
  var_cond, // extern
  var__END
};


static TAB_NUM t_func_std_types__date_and_time___serialize[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 30_5_self
  var_undefined, var_31_5_indent,
  // to_string(self) "@nl;")
  var_to_string, 1, LOCAL(2), 1, LOCAL(1),
  // $str string("date_and_time " to_string(self) "@nl;")
  var_string, 3, str_date_and_time_2, LOCAL(1), string_1, 1, var_33_4_str,
  // is_defined
  var_is_defined, 1, var_31_5_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(33, 32),
  POS(33, 3),
  POS(35, 12),
  POS(34, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__date_and_time___serialize = {
  t_func_std_types__date_and_time___serialize, NULL, 4, 1,
  {"30_5_self\000"}
};

static TAB_NUM t_lambda_1[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_31_5_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_33_4_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(36, 15),
  POS(36, 8),
  POS(36, 7)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_33_4_str, TAIL_CALL,
  POS(37, 7)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__date_and_time___deserializer_of[] = {
  11, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(2), // 42_5_argument
  // $parts split(argument " ")
  var_split, 2, LOCAL(2), string_2, 1, LOCAL(3),
  // parts(1) "-")
  LOCAL(3), 1, num_1, 1, LOCAL(1),
  // $date_parts split(parts(1) "-")
  var_split, 2, LOCAL(1), string_3, 1, LOCAL(4),
  // date_parts(1).to_number
  LOCAL(4), 1, num_1, 1, LOCAL(1),
  // $year date_parts(1).to_number
  var_to_number, 1, LOCAL(1), 1, LOCAL(5),
  // date_parts(2).to_number
  LOCAL(4), 1, num_2, 1, LOCAL(1),
  // $month date_parts(2).to_number
  var_to_number, 1, LOCAL(1), 1, LOCAL(6),
  // date_parts(3).to_number
  LOCAL(4), 1, num_3, 1, LOCAL(1),
  // $day date_parts(3).to_number
  var_to_number, 1, LOCAL(1), 1, LOCAL(7),
  // parts(2) ":")
  LOCAL(3), 1, num_2, 1, LOCAL(1),
  // $time_parts split(parts(2) ":")
  var_split, 2, LOCAL(1), string_4, 1, LOCAL(8),
  // time_parts(1).to_number
  LOCAL(8), 1, num_1, 1, LOCAL(1),
  // $hour time_parts(1).to_number
  var_to_number, 1, LOCAL(1), 1, LOCAL(9),
  // time_parts(2).to_number
  LOCAL(8), 1, num_2, 1, LOCAL(1),
  // $minute time_parts(2).to_number
  var_to_number, 1, LOCAL(1), 1, LOCAL(10),
  // time_parts(3).to_number
  LOCAL(8), 1, num_3, 1, LOCAL(1),
  // $second time_parts(3).to_number
  var_to_number, 1, LOCAL(1), 1, LOCAL(11),
  // date_and_time(year month day hour minute second)
  var_date_and_time, 6, LOCAL(5), LOCAL(6), LOCAL(7), LOCAL(9), LOCAL(10), LOCAL(11), 1, LOCAL(1),
  // -> date_and_time(year month day hour minute second)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(44, 3),
  POS(45, 21),
  POS(45, 3),
  POS(46, 9),
  POS(46, 3),
  POS(47, 10),
  POS(47, 3),
  POS(48, 8),
  POS(48, 3),
  POS(49, 21),
  POS(49, 3),
  POS(50, 9),
  POS(50, 3),
  POS(51, 11),
  POS(51, 3),
  POS(52, 11),
  POS(52, 3),
  POS(53, 6),
  POS(53, 3),
  LOCAL(4),
  LOCAL(9),
  LOCAL(8),
  LOCAL(10),
  LOCAL(7),
  LOCAL(5),
  LOCAL(6),
  LOCAL(11),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__date_and_time___deserializer_of = {
  t_func_std_types__date_and_time___deserializer_of, NULL, 19, 10,
  {"45_4_date_parts\000", "50_4_hour\000", "49_4_time_parts\000", "51_4_minute\000", "48_4_day\000", "46_4_year\000", "47_4_month\000", "52_4_second\000", "44_4_parts\000", "42_5_argument\000"}
};

static TAB_NUM t_func_std_types__date_and_time___to_string[] = {
  20, // locals
  1, // parameters
  LOCAL(18), // 75_5_self
  // $ts time_shift_of(self)
  var_time_shift_of, 1, LOCAL(18), 1, var_77_4_ts,
  // $t self+ts
  var_std__plus, 2, LOCAL(18), var_77_4_ts, 1, LOCAL(19),
  // $second second_of(t)
  var_second_of, 1, LOCAL(19), 1, LOCAL(20),
  // year_of(t)
  var_year_of, 1, LOCAL(19), 1, LOCAL(1),
  // month_of(t) 2 "0")
  var_month_of, 1, LOCAL(19), 1, LOCAL(2),
  // pad_left(month_of(t) 2 "0")
  var_pad_left, 3, LOCAL(2), num_2, string_5, 1, LOCAL(3),
  // day_of(t) 2 "0")
  var_day_of, 1, LOCAL(19), 1, LOCAL(4),
  // pad_left(day_of(t) 2 "0")
  var_pad_left, 3, LOCAL(4), num_2, string_5, 1, LOCAL(5),
  // hour_of(t)
  var_hour_of, 1, LOCAL(19), 1, LOCAL(6),
  // minute_of(t) 2 "0")
  var_minute_of, 1, LOCAL(19), 1, LOCAL(7),
  // pad_left(minute_of(t) 2 "0")
  var_pad_left, 3, LOCAL(7), num_2, string_5, 1, LOCAL(8),
  // floor(second) 2 "0")
  var_floor, 1, LOCAL(20), 1, LOCAL(9),
  // pad_left(floor(second) 2 "0")
  var_pad_left, 3, LOCAL(9), num_2, string_5, 1, LOCAL(10),
  // floor(second))) 3 "0")
  var_floor, 1, LOCAL(20), 1, LOCAL(11),
  // second-floor(second))) 3 "0")
  var_std__minus, 2, LOCAL(20), LOCAL(11), 1, LOCAL(12),
  // 1000*(second-floor(second))) 3 "0")
  var_std__times, 2, num_1000, LOCAL(12), 1, LOCAL(13),
  // floor(1000*(second-floor(second))) 3 "0")
  var_floor, 1, LOCAL(13), 1, LOCAL(14),
  // pad_left(floor(1000*(second-floor(second))) 3 "0")
  var_pad_left, 3, LOCAL(14), num_3, string_5, 1, LOCAL(15),
  // cond
  var_cond, 3, lambda_3, lambda_5, lambda_7, 1, LOCAL(16),
  // string
  var_string, 15, LOCAL(1), string_3, LOCAL(3), string_3, LOCAL(5), chr_32, LOCAL(6), string_4, LOCAL(8), string_4, LOCAL(10), chr_46, LOCAL(15), str__GMT, LOCAL(16), 1, LOCAL(17),
  // ->
  LET, 1, LOCAL(17), TAIL_CALL,
  POS(77, 3),
  POS(78, 3),
  POS(79, 3),
  POS(82, 7),
  POS(84, 16),
  POS(84, 7),
  POS(86, 16),
  POS(86, 7),
  POS(88, 7),
  POS(90, 16),
  POS(90, 7),
  POS(92, 16),
  POS(92, 7),
  POS(94, 35),
  POS(94, 28),
  POS(94, 22),
  POS(94, 16),
  POS(94, 7),
  POS(96, 7),
  POS(81, 5),
  POS(80, 3),
  LOCAL(20),
  LOCAL(18),
  LOCAL(19)
};

static FUNCTION_INFO i_func_std_types__date_and_time___to_string = {
  t_func_std_types__date_and_time___to_string, NULL, 21, 3,
  {"79_4_second\000", "75_5_self\000", "78_4_t\000"}
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // 0 -> string("+" ts/3600)
  var_std__less, 2, num_0, var_77_4_ts, 1, LOCAL(1),
  //  ts > 0 -> string("+" ts/3600)
  LET, 2, LOCAL(1), lambda_4, TAIL_CALL,
  POS(97, 17),
  POS(97, 11)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  2, // locals
  0, // parameters
  // ts/3600)
  var_std__over, 2, var_77_4_ts, num_3600, 1, LOCAL(1),
  // string("+" ts/3600)
  var_string, 2, string_6, LOCAL(1), 1, LOCAL(2),
  //  string("+" ts/3600)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(97, 33),
  POS(97, 22),
  POS(97, 21)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // ts < 0 -> ts/3600
  var_std__less, 2, var_77_4_ts, num_0, 1, LOCAL(1),
  //  ts < 0 -> ts/3600
  LET, 2, LOCAL(1), lambda_6, TAIL_CALL,
  POS(98, 12),
  POS(98, 11)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // ts/3600
  var_std__over, 2, var_77_4_ts, num_3600, 1, LOCAL(1),
  //  ts/3600
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(98, 22),
  POS(98, 21)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  true -> ""
  LET, 2, var_true, lambda_8, TAIL_CALL,
  POS(99, 11)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_7, TAIL_CALL,
  POS(99, 19)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 1, 0,
  {}
};

static TAB_NUM t_module_entry[] = {
  0, // locals
  0, // parameters
  // register_type &deserializers std_types::date_and_time
  var_register_type, 2, var_deserializers, var_std_types__date_and_time, 1, var_deserializers,
  LET, 1, 0, TAIL_CALL,
  POS(55, 1)
};

static FUNCTION_INFO i_module_entry = {
  t_module_entry, NULL, 1, 0,
  {}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_STRING_8, 13, {.str_8 = "date_and_time"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__date_and_time___serialize}},
  {FLT_STRING_8, 14, {.str_8 = "date_and_time "}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__date_and_time___deserializer_of}},
  {FLT_STRING_8, 1, {.str_8 = " "}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_STRING_8, 1, {.str_8 = "-"}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_STRING_8, 1, {.str_8 = ":"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__date_and_time___to_string}},
  {FLT_STRING_8, 1, {.str_8 = "0"}},
  {FLT_POSITIVE_INT64, 0, {.value = 1000}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_POSITIVE_INT64, 0, {.value = 3600}},
  {FLT_STRING_8, 1, {.str_8 = "+"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_CHARACTER, 0, {.value = 46}},
  {FLT_STRING_8, 4, {.str_8 = " GMT"}},
  {FLT_FUNCTION, 0, {.func_info = &i_module_entry}}
};

static ATTRIBUTE_DEFINITION std_types__date_and_time__attributes[] = {
  {-var_serialization_tag_of, -str_date_and_time},
  {var_serialize, -func_std_types__date_and_time___serialize},
  {-var_deserializer_of, -func_std_types__date_and_time___deserializer_of},
  {var_to_string, -func_std_types__date_and_time___to_string}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_UNKNOWN, 0, 4,
    "date_and_time\000std_types", std_types__date_and_time__attributes,
    {.position = POS(26, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(26, 27)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(28, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "31_5_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(31, 14)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_string\000", NULL,
    {.position = POS(33, 32)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "33_4_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(33, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(35, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(36, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(36, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(36, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(34, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deserializer_of\000", NULL,
    {.position = POS(39, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split\000", NULL,
    {.position = POS(44, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_number\000", NULL,
    {.position = POS(46, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "date_and_time\000", NULL,
    {.position = POS(53, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deserializers\000", NULL,
    {.position = POS(55, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "register_type\000", NULL,
    {.position = POS(55, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "77_4_ts\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "time_shift_of\000", NULL,
    {.position = POS(77, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(78, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "second_of\000", NULL,
    {.position = POS(79, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "year_of\000", NULL,
    {.position = POS(82, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "month_of\000", NULL,
    {.position = POS(84, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pad_left\000", NULL,
    {.position = POS(84, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "day_of\000", NULL,
    {.position = POS(86, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hour_of\000", NULL,
    {.position = POS(88, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minute_of\000", NULL,
    {.position = POS(90, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "floor\000", NULL,
    {.position = POS(92, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(94, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(94, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(97, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "over\000std", NULL,
    {.position = POS(97, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(99, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(96, 7)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__date_and_time = {
  "_basic__types__date_and_time", // module name
  "basic/types/date_and_time.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO|FEAT_INITIALIZER,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  30, // number of constants
  36, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
