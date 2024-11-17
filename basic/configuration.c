#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std_types__object___load_configuration = -1,
  lambda_1 = -2,
  lambda_buf_is_an_error = -3,
  lambda_2 = -4,
  lambda_3 = -5,
  func_std_types__io___load_configuration = -6,
  func_load_configuration_action = -7,
  num_1 = -8,
  num_4 = -9,
  lambda_4 = -10,
  str_try_to_load_conf = -11,
  string_1 = -12,
  num_2 = -13,
  minus_num_1 = -14,
  func_load_completed = -15,
  func_load_failed = -16,
  lambda_more_filenames_is_empty = -17,
  lambda_5 = -18,
  lambda_6 = -19,
  func_extract_configuration = -20,
  lambda_7 = -21,
  lambda_8 = -22,
  lambda_9 = -23,
  chr_10 = -24,
  lambda_10 = -25,
  chr_35 = -26,
  lambda_11 = -27,
  chr_32 = -28,
  lambda_attribute_of_is_defined = -29,
  lambda_12 = -30,
  lambda_13 = -31,
  lambda_value_is_defined = -32,
  lambda_14 = -33,
  str_Attribute = -34,
  str__should_be_a_num = -35,
  string_2 = -36,
  lambda_15 = -37,
  lambda_16 = -38,
  str_yes = -39,
  str_on = -40,
  str_true = -41,
  sequence_140_1 = -42,
  str_no = -43,
  str_off = -44,
  str_false = -45,
  sequence_143_1 = -46,
  lambda_17 = -47,
  lambda_18 = -48,
  lambda_19 = -49,
  str__should_be_eithe = -50,
  lambda_20 = -51,
  lambda_21 = -52,
  lambda_22 = -53,
  lambda_23 = -54,
  lambda_key_is_defined = -55,
  lambda_24 = -56,
  lambda_25 = -57,
  str_Invalid_attribut = -58,
  str__in_line = -59,
  string_3 = -60,
  lambda_26 = -61,
  func_get_configuration_filenames = -62,
  str_cfg = -63,
  lambda_27 = -64,
  string_4 = -65,
  lambda_28 = -66
};

enum {
  var__START = FIRST_VAR-1,
  var_std__load_configuration, // attribute
  var_std__assign, // extern
  var_std_types__object, // extern
  var_load_configuration, // extern polymorphic
  var_44_0_configuration, // dynamic
  var_46_0_fields, // dynamic
  var_49_1_errors, // dynamic
  var_empty_list, // extern
  var_52_7_buf, // dynamic
  var_load, // extern
  var_is_an_error, // extern
  var_push, // extern
  var_next, // extern
  var_if, // extern
  var_for_each, // extern
  var_std_types__io, // extern
  var_run, // extern
  var_tuple, // extern
  var_76_1_filename, // dynamic
  var_std__string, // extern
  var_log, // extern
  var_JOB_COMPLETED, // extern
  var_std__key_value_pair, // extern
  var_range, // extern
  var_JOB_FAILED, // extern
  var_register_handlers, // extern
  var_undefined, // extern
  var_deregister_all_handlers, // extern
  var_92_15_io, // dynamic
  var_92_18_id, // dynamic
  var_92_21_err, // dynamic
  var_92_25_more_filenames, // dynamic
  var_is_empty, // extern
  var_99_1_filename, // dynamic
  var_107_25_configuration, // dynamic
  var_107_43_fields, // dynamic
  var_108_1_errors, // dynamic
  var_length_of, // extern
  var_std__equal, // extern
  var_is_a_list, // extern
  var_std__and, // extern
  var_update_if, // extern
  var_110_16_tables, // dynamic
  var_first, // extern
  var_is_a_string, // extern
  var_filter, // extern
  var_to_hash_table, // extern
  var_from_utf8, // extern
  var_trim_right, // extern
  var_split, // extern
  var_114_3_no, // dynamic
  var_114_6_line, // dynamic
  var_truncate_from, // extern
  var_normalize, // extern
  var_121_1_name, // dynamic
  var_122_1_value, // dynamic
  var_behind, // extern
  var_123_1_attribute_of, // dynamic
  var_is_defined, // extern
  var_126_1_default_value, // dynamic
  var_is_a_number, // extern
  var_to_number, // extern
  var_is_a_boolean, // extern
  var_std__sequence, // extern
  var_true, // extern
  var_false, // extern
  var_case, // extern
  var_cond, // extern
  var_155_1_found, // dynamic
  var_159_1_key, // dynamic
  var_break, // extern
  var_178_31_base_filename, // dynamic
  var_append, // extern
  var_180_18_mac_address, // dynamic
  var_get_mac_address, // extern
  var_list, // extern
  var__END
};


static TAB_NUM t_func_std_types__object___load_configuration[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_44_0_configuration,
  MANDATORY_PARAMETER, LOCAL(1), // 45_0_base_filename
  REST_PARAMETER, var_46_0_fields,
  // get_configuration_filenames! $filenames base_filename
  func_get_configuration_filenames, 1, LOCAL(1), IO_CALL(1), LOCAL(2),
  // $errors empty_list
  LET, 1, var_empty_list, 1, var_49_1_errors,
  // for_each filenames
  var_for_each, 3, LOCAL(2), lambda_1, lambda_3, IO_TAIL_CALL,
  POS(48, 3),
  POS(49, 3),
  POS(50, 3)
};

static TAB_NUM t_lambda_1[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 51_3_filename
  // load! $buf filename
  var_load, 1, LOCAL(2), IO_CALL(1), var_52_7_buf,
  // is_an_error:
  var_is_an_error, 1, var_52_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_an_error, lambda_2, IO_TAIL_CALL,
  POS(52, 7),
  POS(54, 13),
  POS(53, 7)
};

static TAB_NUM t_lambda_buf_is_an_error[] = {
  0, // locals
  0, // parameters
  // push &errors buf
  var_push, 2, var_49_1_errors, var_52_7_buf, 1, var_49_1_errors,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(55, 11),
  POS(56, 11)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // extract_configuration configuration buf fields
  func_extract_configuration, 3, var_44_0_configuration, var_52_7_buf, var_46_0_fields, TAIL_CALL,
  POS(58, 11)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  configuration errors
  LET, 2, var_44_0_configuration, var_49_1_errors, TAIL_CALL,
  POS(59, 7)
};

static TAB_NUM t_func_std_types__io___load_configuration[] = {
  5, // locals
  -5, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 65_0_io
  MANDATORY_PARAMETER, LOCAL(2), // 66_0_id
  MANDATORY_PARAMETER, LOCAL(3), // 67_0_configuration
  MANDATORY_PARAMETER, LOCAL(4), // 68_0_base_filename
  REST_PARAMETER, LOCAL(5), // 69_0_fields
  // run io load_configuration_action id configuration base_filename fields
  var_run, 6, LOCAL(1), func_load_configuration_action, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), TAIL_CALL,
  POS(71, 3)
};

static TAB_NUM t_func_load_configuration_action[] = {
  12, // locals
  5, // parameters
  LOCAL(7), // 73_29_io
  LOCAL(8), // 73_32_id
  LOCAL(9), // 73_35_configuration
  LOCAL(10), // 73_49_base_filename
  LOCAL(11), // 73_63_fields
  // get_configuration_filenames! $filenames base_filename
  func_get_configuration_filenames, 1, LOCAL(10), IO_CALL(1), LOCAL(12),
  // tuple &id 1
  var_tuple, 2, LOCAL(8), num_1, 1, LOCAL(8),
  // $filename filenames(1)
  LOCAL(12), 1, num_1, 1, var_76_1_filename,
  // log &io 4 -> "
  var_log, 3, LOCAL(7), num_4, lambda_4, 1, LOCAL(7),
  // load &io id filename
  var_load, 3, LOCAL(7), LOCAL(8), var_76_1_filename, 1, LOCAL(7),
  // tuple(configuration fields))
  var_tuple, 2, LOCAL(9), LOCAL(11), 1, LOCAL(1),
  // tuple(load_completed tuple(configuration fields))
  var_tuple, 2, func_load_completed, LOCAL(1), 1, LOCAL(2),
  // JOB_COMPLETED = tuple(load_completed tuple(configuration fields))
  var_std__key_value_pair, 2, var_JOB_COMPLETED, LOCAL(2), 1, LOCAL(3),
  // range(filenames 2 -1))
  var_range, 3, LOCAL(12), num_2, minus_num_1, 1, LOCAL(4),
  // tuple(load_failed range(filenames 2 -1))
  var_tuple, 2, func_load_failed, LOCAL(4), 1, LOCAL(5),
  // JOB_FAILED = tuple(load_failed range(filenames 2 -1))
  var_std__key_value_pair, 2, var_JOB_FAILED, LOCAL(5), 1, LOCAL(6),
  // register_handlers &io id
  var_register_handlers, 4, LOCAL(7), LOCAL(8), LOCAL(3), LOCAL(6), 1, LOCAL(7),
  // -> io undefined
  LET, 2, LOCAL(7), var_undefined, TAIL_CALL,
  POS(74, 3),
  POS(75, 3),
  POS(76, 3),
  POS(77, 3),
  POS(79, 3),
  POS(81, 42),
  POS(81, 21),
  POS(81, 5),
  POS(82, 36),
  POS(82, 18),
  POS(82, 5),
  POS(80, 3),
  POS(83, 3)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_try_to_load_conf, var_76_1_filename, string_1, 1, LOCAL(1),
  //  "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(77, 16),
  POS(77, 15)
};

static TAB_NUM t_func_load_completed[] = {
  9, // locals
  4, // parameters
  LOCAL(3), // 85_18_io
  LOCAL(4), // 85_21_id
  LOCAL(5), // 85_24_buf
  LOCAL(6), // 85_28_configuration_info
  // deregister_all_handlers &io id
  var_deregister_all_handlers, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // id !id
  LOCAL(4), 0, 1, LOCAL(4),
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
  POS(86, 3),
  POS(87, 3),
  POS(88, 3),
  POS(89, 3),
  POS(90, 32),
  POS(90, 9),
  POS(90, 3)
};

static TAB_NUM t_func_load_failed[] = {
  1, // locals
  4, // parameters
  var_92_15_io,
  var_92_18_id,
  var_92_21_err,
  var_92_25_more_filenames,
  // is_empty:
  var_is_empty, 1, var_92_25_more_filenames, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_more_filenames_is_empty, lambda_5, TAIL_CALL,
  POS(94, 20),
  POS(93, 3)
};

static TAB_NUM t_lambda_more_filenames_is_empty[] = {
  1, // locals
  0, // parameters
  // deregister_all_handlers &io id
  var_deregister_all_handlers, 2, var_92_15_io, var_92_18_id, 1, var_92_15_io,
  // id !id
  var_92_18_id, 0, 1, var_92_18_id,
  // tuple(JOB_FAILED id err)
  var_tuple, 3, var_JOB_FAILED, var_92_18_id, var_92_21_err, 1, LOCAL(1),
  // -> io tuple(JOB_FAILED id err)
  LET, 2, var_92_15_io, LOCAL(1), TAIL_CALL,
  POS(95, 7),
  POS(96, 7),
  POS(97, 13),
  POS(97, 7)
};

static TAB_NUM t_lambda_5[] = {
  3, // locals
  0, // parameters
  // $filename more_filenames(1)
  var_92_25_more_filenames, 1, num_1, 1, var_99_1_filename,
  // log &io 4 -> "
  var_log, 3, var_92_15_io, num_4, lambda_6, 1, var_92_15_io,
  // load &io id filename
  var_load, 3, var_92_15_io, var_92_18_id, var_99_1_filename, 1, var_92_15_io,
  // range(more_filenames 2 -1))
  var_range, 3, var_92_25_more_filenames, num_2, minus_num_1, 1, LOCAL(1),
  // tuple(load_failed range(more_filenames 2 -1))
  var_tuple, 2, func_load_failed, LOCAL(1), 1, LOCAL(2),
  // JOB_FAILED = tuple(load_failed range(more_filenames 2 -1))
  var_std__key_value_pair, 2, var_JOB_FAILED, LOCAL(2), 1, LOCAL(3),
  // register_handlers &io id # replace "failed"-handler
  var_register_handlers, 3, var_92_15_io, var_92_18_id, LOCAL(3), 1, var_92_15_io,
  // -> io undefined
  LET, 2, var_92_15_io, var_undefined, TAIL_CALL,
  POS(99, 7),
  POS(100, 7),
  POS(102, 7),
  POS(104, 40),
  POS(104, 22),
  POS(104, 9),
  POS(103, 7),
  POS(105, 7)
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_try_to_load_conf, var_99_1_filename, string_1, 1, LOCAL(1),
  //  "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(100, 20),
  POS(100, 19)
};

static TAB_NUM t_func_extract_configuration[] = {
  4, // locals
  3, // parameters
  var_107_25_configuration,
  LOCAL(4), // 107_39_buf
  var_107_43_fields,
  // $errors empty_list
  LET, 1, var_empty_list, 1, var_108_1_errors,
  // length_of(fields) == 1 && fields(1).is_a_list &fields -> fields(1)
  var_length_of, 1, var_107_43_fields, 1, LOCAL(1),
  // length_of(fields) == 1 && fields(1).is_a_list &fields -> fields(1)
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // length_of(fields) == 1 && fields(1).is_a_list &fields -> fields(1)
  var_std__and, 2, LOCAL(2), lambda_7, 1, LOCAL(3),
  // update_if length_of(fields) == 1 && fields(1).is_a_list &fields -> fields(1)
  var_update_if, 3, LOCAL(3), var_107_43_fields, lambda_8, 1, var_107_43_fields,
  // filter &fields $tables: (field) -> first(field).is_a_string
  var_filter, 2, var_107_43_fields, lambda_9, 2, var_107_43_fields, var_110_16_tables,
  // to_hash_table &fields
  var_to_hash_table, 1, var_107_43_fields, 1, var_107_43_fields,
  // from_utf8 &buf
  var_from_utf8, 1, LOCAL(4), 1, LOCAL(4),
  // trim_right '@nl;')
  var_trim_right, 1, LOCAL(4), 1, LOCAL(1),
  // split(buf.trim_right '@nl;')
  var_split, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // for_each split(buf.trim_right '@nl;')
  var_for_each, 3, LOCAL(2), lambda_10, lambda_26, TAIL_CALL,
  POS(108, 3),
  POS(109, 13),
  POS(109, 13),
  POS(109, 13),
  POS(109, 3),
  POS(110, 3),
  POS(111, 3),
  POS(112, 3),
  POS(113, 22),
  POS(113, 12),
  POS(113, 3)
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  0, // parameters
  // fields(1).is_a_list &fields -> fields(1)
  var_107_43_fields, 1, num_1, 1, LOCAL(1),
  // is_a_list &fields -> fields(1)
  var_is_a_list, 1, LOCAL(1), 1, LOCAL(2),
  // fields(1).is_a_list &fields -> fields(1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(109, 39),
  POS(109, 49),
  POS(109, 39)
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // fields(1)
  var_107_43_fields, 1, num_1, 1, LOCAL(1),
  //  fields(1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(109, 70),
  POS(109, 69)
};

static TAB_NUM t_lambda_9[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 110_25_field
  // first(field).is_a_string
  var_first, 1, LOCAL(3), 1, LOCAL(1),
  // is_a_string
  var_is_a_string, 1, LOCAL(1), 1, LOCAL(2),
  // -> first(field).is_a_string
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(110, 38),
  POS(110, 51),
  POS(110, 35)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  2, // parameters
  var_114_3_no,
  var_114_6_line,
  // truncate_from &line '#'
  var_truncate_from, 2, var_114_6_line, chr_35, 1, var_114_6_line,
  // normalize &line
  var_normalize, 1, var_114_6_line, 1, var_114_6_line,
  // is_empty
  var_is_empty, 1, var_114_6_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_11, TAIL_CALL,
  POS(115, 7),
  POS(116, 7),
  POS(118, 14),
  POS(117, 7)
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // $name line .truncate_from. ' '
  var_truncate_from, 2, var_114_6_line, chr_32, 1, var_121_1_name,
  // $value line .behind. ' '
  var_behind, 2, var_114_6_line, chr_32, 1, var_122_1_value,
  // $attribute_of fields(name)
  var_107_43_fields, 1, var_121_1_name, 1, var_123_1_attribute_of,
  // is_defined:
  var_is_defined, 1, var_123_1_attribute_of, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_attribute_of_is_defined, lambda_22, TAIL_CALL,
  POS(121, 11),
  POS(122, 11),
  POS(123, 11),
  POS(125, 26),
  POS(124, 11)
};

static TAB_NUM t_lambda_attribute_of_is_defined[] = {
  0, // locals
  0, // parameters
  // $default_value attribute_of(configuration)
  var_123_1_attribute_of, 1, var_107_25_configuration, 1, var_126_1_default_value,
  // cond
  var_cond, 3, lambda_12, lambda_15, lambda_20, TAIL_CALL,
  POS(126, 15),
  POS(127, 15)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // is_a_number:
  var_is_a_number, 1, var_126_1_default_value, 1, LOCAL(1),
  //  default_value.is_a_number:
  LET, 2, LOCAL(1), lambda_13, TAIL_CALL,
  POS(128, 34),
  POS(128, 19)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // to_number &value
  var_to_number, 1, var_122_1_value, 1, var_122_1_value,
  // is_defined:
  var_is_defined, 1, var_122_1_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_value_is_defined, lambda_14, TAIL_CALL,
  POS(129, 19),
  POS(131, 27),
  POS(130, 19)
};

static TAB_NUM t_lambda_value_is_defined[] = {
  0, // locals
  0, // parameters
  // attribute_of &configuration value
  var_123_1_attribute_of, 2, var_107_25_configuration, var_122_1_value, 1, var_107_25_configuration,
  // next
  var_next, 0, TAIL_CALL,
  POS(132, 23),
  POS(133, 23)
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 5, str_Attribute, var_121_1_name, str__should_be_a_num, var_114_3_no, string_2, 1, LOCAL(1),
  // push &errors "
  var_push, 2, var_108_1_errors, LOCAL(1), 1, var_108_1_errors,
  // next
  var_next, 0, TAIL_CALL,
  POS(135, 36),
  POS(135, 23),
  POS(137, 23)
};

static TAB_NUM t_lambda_15[] = {
  1, // locals
  0, // parameters
  // is_a_boolean:
  var_is_a_boolean, 1, var_126_1_default_value, 1, LOCAL(1),
  //  default_value.is_a_boolean:
  LET, 2, LOCAL(1), lambda_16, TAIL_CALL,
  POS(138, 34),
  POS(138, 19)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  // case value
  var_case, 6, var_122_1_value, sequence_140_1, lambda_17, sequence_143_1, lambda_18, lambda_19, TAIL_CALL,
  POS(139, 19)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // attribute_of &configuration true
  var_123_1_attribute_of, 2, var_107_25_configuration, var_true, 1, var_107_25_configuration,
  // next
  var_next, 0, TAIL_CALL,
  POS(141, 23),
  POS(142, 23)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  // attribute_of &configuration false
  var_123_1_attribute_of, 2, var_107_25_configuration, var_false, 1, var_107_25_configuration,
  // next
  var_next, 0, TAIL_CALL,
  POS(144, 23),
  POS(145, 23)
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 5, str_Attribute, var_121_1_name, str__should_be_eithe, var_114_3_no, string_2, 1, LOCAL(1),
  // push &errors "
  var_push, 2, var_108_1_errors, LOCAL(1), 1, var_108_1_errors,
  // next
  var_next, 0, TAIL_CALL,
  POS(147, 36),
  POS(147, 23),
  POS(150, 23)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_21, TAIL_CALL,
  POS(151, 19)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  // attribute_of &configuration value
  var_123_1_attribute_of, 2, var_107_25_configuration, var_122_1_value, 1, var_107_25_configuration,
  // next
  var_next, 0, TAIL_CALL,
  POS(152, 19),
  POS(153, 19)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  // $found false
  LET, 1, var_false, 1, var_155_1_found,
  // for_each tables
  var_for_each, 3, var_110_16_tables, lambda_23, lambda_24, TAIL_CALL,
  POS(155, 15),
  POS(156, 15)
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 157_3_table
  // table !table !attribute_of
  LOCAL(2), 0, 2, LOCAL(2), var_123_1_attribute_of,
  // $key table(name)
  LOCAL(2), 1, var_121_1_name, 1, var_159_1_key,
  // is_defined:
  var_is_defined, 1, var_159_1_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_key_is_defined, var_next, TAIL_CALL,
  POS(158, 19),
  POS(159, 19),
  POS(161, 25),
  POS(160, 19)
};

static TAB_NUM t_lambda_key_is_defined[] = {
  1, // locals
  0, // parameters
  // $values attribute_of(configuration)
  var_123_1_attribute_of, 1, var_107_25_configuration, 1, LOCAL(1),
  // values(key) value
  LOCAL(1), 2, var_159_1_key, var_122_1_value, 1, LOCAL(1),
  // attribute_of &configuration values
  var_123_1_attribute_of, 2, var_107_25_configuration, LOCAL(1), 1, var_107_25_configuration,
  // !found true
  LET, 1, var_true, 1, var_155_1_found,
  // break
  var_break, 0, TAIL_CALL,
  POS(162, 23),
  POS(163, 24),
  POS(164, 23),
  POS(165, 23),
  POS(166, 23)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_155_1_found, var_next, lambda_25, TAIL_CALL,
  POS(169, 19)
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 5, str_Invalid_attribut, var_121_1_name, str__in_line, var_114_3_no, string_3, 1, LOCAL(1),
  // push &errors "
  var_push, 2, var_108_1_errors, LOCAL(1), 1, var_108_1_errors,
  // next
  var_next, 0, TAIL_CALL,
  POS(173, 36),
  POS(173, 23),
  POS(175, 23)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  //  configuration errors
  LET, 2, var_107_25_configuration, var_108_1_errors, TAIL_CALL,
  POS(176, 7)
};

static TAB_NUM t_func_get_configuration_filenames[] = {
  3, // locals
  1, // parameters
  var_178_31_base_filename,
  // $default_filename append(base_filename ".cfg")
  var_append, 2, var_178_31_base_filename, str_cfg, 1, LOCAL(2),
  // get_mac_address! $mac_address
  var_get_mac_address, 0, IO_CALL(1), var_180_18_mac_address,
  // is_defined
  var_is_defined, 1, var_180_18_mac_address, 1, LOCAL(1),
  // $filenames
  var_if, 3, LOCAL(1), lambda_27, lambda_28, 1, LOCAL(3),
  // push &filenames default_filename
  var_push, 2, LOCAL(3), LOCAL(2), 1, LOCAL(3),
  // -> filenames
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(179, 3),
  POS(180, 3),
  POS(183, 19),
  POS(181, 3),
  POS(186, 3),
  POS(187, 3)
};

static TAB_NUM t_lambda_27[] = {
  2, // locals
  0, // parameters
  // append(base_filename "_" mac_address ".cfg"))
  var_append, 4, var_178_31_base_filename, string_4, var_180_18_mac_address, str_cfg, 1, LOCAL(1),
  // list(append(base_filename "_" mac_address ".cfg"))
  var_list, 1, LOCAL(1), 1, LOCAL(2),
  //  list(append(base_filename "_" mac_address ".cfg"))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(184, 15),
  POS(184, 10),
  POS(184, 9)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(185, 9)
};

static int sequence_140_1_arguments[] = {
  -str_yes, -str_on, -str_true
};

static int sequence_143_1_arguments[] = {
  -str_no, -str_off, -str_false
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__object___load_configuration}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_buf_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___load_configuration}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_load_configuration_action}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_STRING_8, 32, {.str_8 = "try to load configuration from \042"}},
  {FLT_STRING_8, 2, {.str_8 = "\042\012"}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_load_completed}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_load_failed}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_more_filenames_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_extract_configuration}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_CHARACTER, 0, {.value = 35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_attribute_of_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_value_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_STRING_8, 11, {.str_8 = "Attribute \042"}},
  {FLT_STRING_8, 27, {.str_8 = "\042 should be a number (line "}},
  {FLT_STRING_8, 2, {.str_8 = ")\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_STRING_8, 3, {.str_8 = "yes"}},
  {FLT_STRING_8, 2, {.str_8 = "on"}},
  {FLT_STRING_8, 4, {.str_8 = "true"}},
  {FLT_SEQUENCE, 3, {.arguments = sequence_140_1_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "no"}},
  {FLT_STRING_8, 3, {.str_8 = "off"}},
  {FLT_STRING_8, 5, {.str_8 = "false"}},
  {FLT_SEQUENCE, 3, {.arguments = sequence_143_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_STRING_8, 39, {.str_8 = "\042 should be either \042yes\042 or \042no\042 (line "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_key_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_STRING_8, 19, {.str_8 = "Invalid attribute \042"}},
  {FLT_STRING_8, 10, {.str_8 = "\042 in line "}},
  {FLT_STRING_8, 2, {.str_8 = ".\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_get_configuration_filenames}},
  {FLT_STRING_8, 4, {.str_8 = ".cfg"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_STRING_8, 1, {.str_8 = "_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {var_load_configuration, -func_std_types__object___load_configuration}
};

static ATTRIBUTE_DEFINITION std_types__io__attributes[] = {
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
    {.position = POS(26, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(30, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "load_configuration\000", NULL,
    {.position = POS(30, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "44_0_configuration\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "46_0_fields\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "49_1_errors\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(49, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "52_7_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "load\000", NULL,
    {.position = POS(52, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(54, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(55, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(56, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(53, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(50, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "io\000std_types", std_types__io__attributes,
    {.position = POS(61, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "run\000", NULL,
    {.position = POS(71, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(75, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "76_1_filename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(77, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "log\000", NULL,
    {.position = POS(77, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "JOB_COMPLETED\000", NULL,
    {.position = POS(81, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value_pair\000std", NULL,
    {.position = POS(81, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(82, 36)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "JOB_FAILED\000", NULL,
    {.position = POS(82, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "register_handlers\000", NULL,
    {.position = POS(80, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(83, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deregister_all_handlers\000", NULL,
    {.position = POS(86, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "92_15_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "92_18_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "92_21_err\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "92_25_more_filenames\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(94, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "99_1_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "107_25_configuration\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "107_43_fields\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "108_1_errors\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(109, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(109, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(109, 49)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(109, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(109, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "110_16_tables\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(110, 38)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(110, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "filter\000", NULL,
    {.position = POS(110, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_hash_table\000", NULL,
    {.position = POS(111, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_utf8\000", NULL,
    {.position = POS(112, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim_right\000", NULL,
    {.position = POS(113, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split\000", NULL,
    {.position = POS(113, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "114_3_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "114_6_line\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(115, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "normalize\000", NULL,
    {.position = POS(116, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "121_1_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "122_1_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "behind\000", NULL,
    {.position = POS(122, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "123_1_attribute_of\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(125, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "126_1_default_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_number\000", NULL,
    {.position = POS(128, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_number\000", NULL,
    {.position = POS(129, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_boolean\000", NULL,
    {.position = POS(138, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(140, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(141, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(144, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(139, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(127, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "155_1_found\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "159_1_key\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(166, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "178_31_base_filename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(179, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "180_18_mac_address\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_mac_address\000", NULL,
    {.position = POS(180, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(184, 10)}
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
  66, // number of constants
  76, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
