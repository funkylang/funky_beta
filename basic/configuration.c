#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std_types__object___load_configuration = -1,
  lambda_1 = -2,
  lambda_2 = -3,
  func_std_types__io___load_configuration = -4,
  num_1 = -5,
  func_load_completed = -6,
  func_load_failed = -7,
  func_extract_configuration = -8,
  lambda_3 = -9,
  lambda_4 = -10,
  chr_10 = -11,
  lambda_5 = -12,
  chr_35 = -13,
  lambda_6 = -14,
  chr_32 = -15,
  lambda_attribute_of_is_defined = -16,
  lambda_7 = -17,
  lambda_8 = -18,
  lambda_value_is_defined = -19,
  lambda_9 = -20,
  str_Attribute = -21,
  str__should_be_a_num = -22,
  string_1 = -23,
  lambda_10 = -24,
  lambda_11 = -25,
  str_yes = -26,
  str_on = -27,
  str_true = -28,
  sequence_118_1 = -29,
  str_no = -30,
  str_off = -31,
  str_false = -32,
  sequence_121_1 = -33,
  lambda_12 = -34,
  lambda_13 = -35,
  lambda_14 = -36,
  str__should_be_eithe = -37,
  lambda_15 = -38,
  lambda_16 = -39,
  lambda_17 = -40,
  str_Invalid_attribut = -41,
  str__in_line = -42,
  string_2 = -43,
  lambda_18 = -44
};

enum {
  var__START = FIRST_VAR-1,
  var_std__load_configuration, // attribute
  var_std__assign, // extern
  var_std_types__object, // extern
  var_load_configuration, // extern polymorphic
  var_41_0_configuration, // dynamic
  var_43_0_fields, // dynamic
  var_45_7_buf, // dynamic
  var_load, // extern
  var_is_an_error, // extern
  var_if, // extern
  var_configuration_info_of, // attribute
  var_std_types__io, // extern
  var_empty_hash_table, // extern
  var_tuple, // extern
  var_JOB_COMPLETED, // extern
  var_std__key_value_pair, // extern
  var_JOB_FAILED, // extern
  var_register_handlers, // extern
  var_deregister_all_handlers, // extern
  var_undefined, // extern
  var_86_25_configuration, // dynamic
  var_86_43_fields, // dynamic
  var_87_1_errors, // dynamic
  var_empty_list, // extern
  var_length_of, // extern
  var_std__equal, // extern
  var_is_a_list, // extern
  var_std__and, // extern
  var_update_if, // extern
  var_to_hash_table, // extern
  var_from_utf8, // extern
  var_trim_right, // extern
  var_split, // extern
  var_92_3_no, // dynamic
  var_92_6_line, // dynamic
  var_truncate_from, // extern
  var_normalize, // extern
  var_is_empty, // extern
  var_next, // extern
  var_99_1_name, // dynamic
  var_100_1_value, // dynamic
  var_behind, // extern
  var_101_1_attribute_of, // dynamic
  var_is_defined, // extern
  var_104_1_default_value, // dynamic
  var_is_a_number, // extern
  var_to_number, // extern
  var_std__string, // extern
  var_push, // extern
  var_is_a_boolean, // extern
  var_std__sequence, // extern
  var_true, // extern
  var_false, // extern
  var_case, // extern
  var_cond, // extern
  var_for_each, // extern
  var__END
};


static TAB_NUM t_func_std_types__object___load_configuration[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_41_0_configuration,
  MANDATORY_PARAMETER, LOCAL(2), // 42_0_filename
  REST_PARAMETER, var_43_0_fields,
  // load! $buf filename
  var_load, 1, LOCAL(2), IO_CALL(1), var_45_7_buf,
  // is_an_error
  var_is_an_error, 1, var_45_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(45, 3),
  POS(47, 9),
  POS(46, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  configuration buf
  LET, 2, var_41_0_configuration, var_45_7_buf, TAIL_CALL,
  POS(48, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // extract_configuration configuration buf fields
  func_extract_configuration, 3, var_41_0_configuration, var_45_7_buf, var_43_0_fields, TAIL_CALL,
  POS(50, 7)
};

static TAB_NUM t_func_std_types__io___load_configuration[] = {
  8, // locals
  -5, // parameters
  MANDATORY_PARAMETER, LOCAL(4), // 59_0_io
  MANDATORY_PARAMETER, LOCAL(5), // 60_0_id
  MANDATORY_PARAMETER, LOCAL(6), // 61_0_configuration
  MANDATORY_PARAMETER, LOCAL(7), // 62_0_filename
  REST_PARAMETER, LOCAL(8), // 63_0_fields
  // !io.configuration_info_of(id) tuple(configuration fields)
  var_tuple, 2, LOCAL(6), LOCAL(8), 1, LOCAL(2),
  // configuration_info_of(id) tuple(configuration fields)
  var_configuration_info_of, 1, LOCAL(4), 1, LOCAL(3),
  // configuration_info_of(id) tuple(configuration fields)
  LOCAL(3), 2, LOCAL(5), LOCAL(2), 1, LOCAL(3),
  // io.configuration_info_of(id) tuple(configuration fields)
  LET, -1, LOCAL(4), var_configuration_info_of, LOCAL(3), LOCAL(4),
  // tuple &id 1
  var_tuple, 2, LOCAL(5), num_1, 1, LOCAL(5),
  // load &io id filename
  var_load, 3, LOCAL(4), LOCAL(5), LOCAL(7), 1, LOCAL(4),
  // JOB_COMPLETED = load_completed
  var_std__key_value_pair, 2, var_JOB_COMPLETED, func_load_completed, 1, LOCAL(1),
  // JOB_FAILED = load_failed
  var_std__key_value_pair, 2, var_JOB_FAILED, func_load_failed, 1, LOCAL(2),
  // register_handlers io id
  var_register_handlers, 4, LOCAL(4), LOCAL(5), LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(65, 3),
  POS(65, 7),
  POS(65, 7),
  POS(65, 4),
  POS(66, 3),
  POS(67, 3),
  POS(69, 5),
  POS(70, 5),
  POS(68, 3)
};

static TAB_NUM t_func_load_completed[] = {
  9, // locals
  3, // parameters
  LOCAL(3), // 72_18_io
  LOCAL(4), // 72_21_id
  LOCAL(5), // 72_24_buf
  // deregister_all_handlers &io id
  var_deregister_all_handlers, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // id !id
  LOCAL(4), 0, 1, LOCAL(4),
  // configuration_info_of(io)(id)
  var_configuration_info_of, 1, LOCAL(3), 1, LOCAL(1),
  // $configuration_info configuration_info_of(io)(id)
  LOCAL(1), 1, LOCAL(4), 1, LOCAL(6),
  // configuration_info_of(id) undefined
  var_configuration_info_of, 1, LOCAL(3), 1, LOCAL(2),
  // configuration_info_of(id) undefined
  LOCAL(2), 2, LOCAL(4), var_undefined, 1, LOCAL(2),
  // io.configuration_info_of(id) undefined
  LET, -1, LOCAL(3), var_configuration_info_of, LOCAL(2), LOCAL(3),
  // configuration_info $configuration $fields
  LOCAL(6), 0, 2, LOCAL(7), LOCAL(8),
  // extract_configuration &configuration $errors buf fields
  func_extract_configuration, 3, LOCAL(7), LOCAL(5), LOCAL(8), 2, LOCAL(7), LOCAL(9),
  // tuple(configuration errors))
  var_tuple, 2, LOCAL(7), LOCAL(9), 1, LOCAL(1),
  // tuple(JOB_COMPLETED id tuple(configuration errors))
  var_tuple, 3, var_JOB_COMPLETED, LOCAL(4), LOCAL(1), 1, LOCAL(2),
  // -> io tuple(JOB_COMPLETED id tuple(configuration errors))
  LET, 2, LOCAL(3), LOCAL(2), TAIL_CALL,
  POS(73, 3),
  POS(74, 3),
  POS(75, 23),
  POS(75, 3),
  POS(76, 7),
  POS(76, 7),
  POS(76, 4),
  POS(77, 3),
  POS(78, 3),
  POS(79, 32),
  POS(79, 9),
  POS(79, 3)
};

static TAB_NUM t_func_load_failed[] = {
  4, // locals
  3, // parameters
  LOCAL(2), // 81_15_io
  LOCAL(3), // 81_18_id
  LOCAL(4), // 81_21_err
  // deregister_all_handlers &io id
  var_deregister_all_handlers, 2, LOCAL(2), LOCAL(3), 1, LOCAL(2),
  // id !id
  LOCAL(3), 0, 1, LOCAL(3),
  // tuple(JOB_FAILED id err)
  var_tuple, 3, var_JOB_FAILED, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // -> io tuple(JOB_FAILED id err)
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(82, 3),
  POS(83, 3),
  POS(84, 9),
  POS(84, 3)
};

static TAB_NUM t_func_extract_configuration[] = {
  4, // locals
  3, // parameters
  var_86_25_configuration,
  LOCAL(4), // 86_39_buf
  var_86_43_fields,
  // $errors empty_list
  LET, 1, var_empty_list, 1, var_87_1_errors,
  // length_of(fields) == 1 && fields(1).is_a_list &fields -> fields(1)
  var_length_of, 1, var_86_43_fields, 1, LOCAL(1),
  // length_of(fields) == 1 && fields(1).is_a_list &fields -> fields(1)
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // length_of(fields) == 1 && fields(1).is_a_list &fields -> fields(1)
  var_std__and, 2, LOCAL(2), lambda_3, 1, LOCAL(3),
  // update_if length_of(fields) == 1 && fields(1).is_a_list &fields -> fields(1)
  var_update_if, 3, LOCAL(3), var_86_43_fields, lambda_4, 1, var_86_43_fields,
  // to_hash_table &fields
  var_to_hash_table, 1, var_86_43_fields, 1, var_86_43_fields,
  // from_utf8 &buf
  var_from_utf8, 1, LOCAL(4), 1, LOCAL(4),
  // trim_right '@nl;')
  var_trim_right, 1, LOCAL(4), 1, LOCAL(1),
  // split(buf.trim_right '@nl;')
  var_split, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // for_each split(buf.trim_right '@nl;')
  var_for_each, 3, LOCAL(2), lambda_5, lambda_18, TAIL_CALL,
  POS(87, 3),
  POS(88, 13),
  POS(88, 13),
  POS(88, 13),
  POS(88, 3),
  POS(89, 3),
  POS(90, 3),
  POS(91, 22),
  POS(91, 12),
  POS(91, 3)
};

static TAB_NUM t_lambda_3[] = {
  2, // locals
  0, // parameters
  // fields(1).is_a_list &fields -> fields(1)
  var_86_43_fields, 1, num_1, 1, LOCAL(1),
  // is_a_list &fields -> fields(1)
  var_is_a_list, 1, LOCAL(1), 1, LOCAL(2),
  // fields(1).is_a_list &fields -> fields(1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(88, 39),
  POS(88, 49),
  POS(88, 39)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // fields(1)
  var_86_43_fields, 1, num_1, 1, LOCAL(1),
  //  fields(1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(88, 70),
  POS(88, 69)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  2, // parameters
  var_92_3_no,
  var_92_6_line,
  // truncate_from &line '#'
  var_truncate_from, 2, var_92_6_line, chr_35, 1, var_92_6_line,
  // normalize &line
  var_normalize, 1, var_92_6_line, 1, var_92_6_line,
  // is_empty
  var_is_empty, 1, var_92_6_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_6, TAIL_CALL,
  POS(93, 7),
  POS(94, 7),
  POS(96, 14),
  POS(95, 7)
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // $name line .truncate_from. ' '
  var_truncate_from, 2, var_92_6_line, chr_32, 1, var_99_1_name,
  // $value line .behind. ' '
  var_behind, 2, var_92_6_line, chr_32, 1, var_100_1_value,
  // $attribute_of fields(name)
  var_86_43_fields, 1, var_99_1_name, 1, var_101_1_attribute_of,
  // is_defined:
  var_is_defined, 1, var_101_1_attribute_of, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_attribute_of_is_defined, lambda_17, TAIL_CALL,
  POS(99, 11),
  POS(100, 11),
  POS(101, 11),
  POS(103, 26),
  POS(102, 11)
};

static TAB_NUM t_lambda_attribute_of_is_defined[] = {
  0, // locals
  0, // parameters
  // $default_value attribute_of(configuration)
  var_101_1_attribute_of, 1, var_86_25_configuration, 1, var_104_1_default_value,
  // cond
  var_cond, 3, lambda_7, lambda_10, lambda_15, TAIL_CALL,
  POS(104, 15),
  POS(105, 15)
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // is_a_number:
  var_is_a_number, 1, var_104_1_default_value, 1, LOCAL(1),
  //  default_value.is_a_number:
  LET, 2, LOCAL(1), lambda_8, TAIL_CALL,
  POS(106, 34),
  POS(106, 19)
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // to_number &value
  var_to_number, 1, var_100_1_value, 1, var_100_1_value,
  // is_defined:
  var_is_defined, 1, var_100_1_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_value_is_defined, lambda_9, TAIL_CALL,
  POS(107, 19),
  POS(109, 27),
  POS(108, 19)
};

static TAB_NUM t_lambda_value_is_defined[] = {
  0, // locals
  0, // parameters
  // attribute_of &configuration value
  var_101_1_attribute_of, 2, var_86_25_configuration, var_100_1_value, 1, var_86_25_configuration,
  // next
  var_next, 0, TAIL_CALL,
  POS(110, 23),
  POS(111, 23)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 5, str_Attribute, var_99_1_name, str__should_be_a_num, var_92_3_no, string_1, 1, LOCAL(1),
  // push &errors "
  var_push, 2, var_87_1_errors, LOCAL(1), 1, var_87_1_errors,
  // next
  var_next, 0, TAIL_CALL,
  POS(113, 36),
  POS(113, 23),
  POS(115, 23)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // is_a_boolean:
  var_is_a_boolean, 1, var_104_1_default_value, 1, LOCAL(1),
  //  default_value.is_a_boolean:
  LET, 2, LOCAL(1), lambda_11, TAIL_CALL,
  POS(116, 34),
  POS(116, 19)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // case value
  var_case, 6, var_100_1_value, sequence_118_1, lambda_12, sequence_121_1, lambda_13, lambda_14, TAIL_CALL,
  POS(117, 19)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  // attribute_of &configuration true
  var_101_1_attribute_of, 2, var_86_25_configuration, var_true, 1, var_86_25_configuration,
  // next
  var_next, 0, TAIL_CALL,
  POS(119, 23),
  POS(120, 23)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  // attribute_of &configuration false
  var_101_1_attribute_of, 2, var_86_25_configuration, var_false, 1, var_86_25_configuration,
  // next
  var_next, 0, TAIL_CALL,
  POS(122, 23),
  POS(123, 23)
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 5, str_Attribute, var_99_1_name, str__should_be_eithe, var_92_3_no, string_1, 1, LOCAL(1),
  // push &errors "
  var_push, 2, var_87_1_errors, LOCAL(1), 1, var_87_1_errors,
  // next
  var_next, 0, TAIL_CALL,
  POS(125, 36),
  POS(125, 23),
  POS(128, 23)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_16, TAIL_CALL,
  POS(129, 19)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  // attribute_of &configuration value
  var_101_1_attribute_of, 2, var_86_25_configuration, var_100_1_value, 1, var_86_25_configuration,
  // next
  var_next, 0, TAIL_CALL,
  POS(130, 19),
  POS(131, 19)
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 5, str_Invalid_attribut, var_99_1_name, str__in_line, var_92_3_no, string_2, 1, LOCAL(1),
  // push &errors "
  var_push, 2, var_87_1_errors, LOCAL(1), 1, var_87_1_errors,
  // next
  var_next, 0, TAIL_CALL,
  POS(133, 28),
  POS(133, 15),
  POS(135, 15)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  configuration errors
  LET, 2, var_86_25_configuration, var_87_1_errors, TAIL_CALL,
  POS(136, 7)
};

static int sequence_118_1_arguments[] = {
  -str_yes, -str_on, -str_true
};

static int sequence_121_1_arguments[] = {
  -str_no, -str_off, -str_false
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__object___load_configuration}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___load_configuration}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_load_completed}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_load_failed}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_extract_configuration}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_CHARACTER, 0, {.value = 35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_attribute_of_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_value_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_STRING_8, 11, {.str_8 = "Attribute \042"}},
  {FLT_STRING_8, 27, {.str_8 = "\042 should be a number (line "}},
  {FLT_STRING_8, 2, {.str_8 = ")\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_STRING_8, 3, {.str_8 = "yes"}},
  {FLT_STRING_8, 2, {.str_8 = "on"}},
  {FLT_STRING_8, 4, {.str_8 = "true"}},
  {FLT_SEQUENCE, 3, {.arguments = sequence_118_1_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "no"}},
  {FLT_STRING_8, 3, {.str_8 = "off"}},
  {FLT_STRING_8, 5, {.str_8 = "false"}},
  {FLT_SEQUENCE, 3, {.arguments = sequence_121_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_STRING_8, 39, {.str_8 = "\042 should be either \042yes\042 or \042no\042 (line "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_STRING_8, 19, {.str_8 = "Invalid attribute \042"}},
  {FLT_STRING_8, 10, {.str_8 = "\042 in line "}},
  {FLT_STRING_8, 2, {.str_8 = ".\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {var_load_configuration, -func_std_types__object___load_configuration}
};

static ATTRIBUTE_DEFINITION std_types__io__attributes[] = {
  {-var_configuration_info_of, -var_empty_hash_table},
  {var_load_configuration, -func_std_types__io___load_configuration}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "load_configuration\000std", NULL,
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
    {.position = POS(27, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "load_configuration\000", NULL,
    {.position = POS(27, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "41_0_configuration\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "43_0_fields\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "45_7_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "load\000", NULL,
    {.position = POS(45, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(47, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(46, 3)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "configuration_info_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "io\000std_types", std_types__io__attributes,
    {.position = POS(53, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(53, 38)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(65, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "JOB_COMPLETED\000", NULL,
    {.position = POS(69, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value_pair\000std", NULL,
    {.position = POS(69, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "JOB_FAILED\000", NULL,
    {.position = POS(70, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "register_handlers\000", NULL,
    {.position = POS(68, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deregister_all_handlers\000", NULL,
    {.position = POS(73, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(76, 33)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "86_25_configuration\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "86_43_fields\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "87_1_errors\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(87, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(88, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(88, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(88, 49)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(88, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(88, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_hash_table\000", NULL,
    {.position = POS(89, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_utf8\000", NULL,
    {.position = POS(90, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim_right\000", NULL,
    {.position = POS(91, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split\000", NULL,
    {.position = POS(91, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "92_3_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "92_6_line\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(93, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "normalize\000", NULL,
    {.position = POS(94, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(96, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(97, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "99_1_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "100_1_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "behind\000", NULL,
    {.position = POS(100, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "101_1_attribute_of\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(103, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "104_1_default_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_number\000", NULL,
    {.position = POS(106, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_number\000", NULL,
    {.position = POS(107, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(113, 36)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(113, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_boolean\000", NULL,
    {.position = POS(116, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(118, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(119, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(122, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(117, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(105, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(91, 3)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__configuration = {
  "_basic__configuration", // module name
  "basic/configuration.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  44, // number of constants
  56, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
