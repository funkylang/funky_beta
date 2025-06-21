#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_extract_configuration = -1,
  num_1 = -2,
  lambda_1 = -3,
  lambda_2 = -4,
  lambda_3 = -5,
  chr_10 = -6,
  lambda_4 = -7,
  chr_35 = -8,
  lambda_5 = -9,
  chr_32 = -10,
  lambda_attribute_of_is_defined = -11,
  lambda_6 = -12,
  lambda_7 = -13,
  lambda_value_is_defined = -14,
  lambda_8 = -15,
  str_Attribute = -16,
  str__should_be_a_num = -17,
  string_1 = -18,
  lambda_9 = -19,
  lambda_10 = -20,
  str_yes = -21,
  str_on = -22,
  str_true = -23,
  sequence_63_22 = -24,
  str_no = -25,
  str_off = -26,
  str_false = -27,
  sequence_66_22 = -28,
  lambda_11 = -29,
  lambda_12 = -30,
  lambda_13 = -31,
  str__should_be_eithe = -32,
  lambda_14 = -33,
  lambda_15 = -34,
  lambda_16 = -35,
  lambda_17 = -36,
  lambda_key_is_defined = -37,
  lambda_18 = -38,
  lambda_19 = -39,
  str_Invalid_attribut = -40,
  str__in_line = -41,
  string_2 = -42,
  lambda_20 = -43,
  func_get_configuration_filenames = -44,
  str_cfg = -45,
  lambda_21 = -46,
  string_3 = -47,
  lambda_22 = -48,
  func_std_types__object___load_configuration = -49,
  lambda_23 = -50,
  lambda_buf_is_an_error = -51,
  lambda_24 = -52,
  lambda_25 = -53,
  func_load_completed = -54,
  func_load_failed = -55,
  lambda_more_filenames_is_empty = -56,
  lambda_26 = -57,
  num_4 = -58,
  lambda_27 = -59,
  str_try_to_load_conf = -60,
  string_4 = -61,
  num_2 = -62,
  minus_num_1 = -63,
  func_load_configuration_action = -64,
  lambda_28 = -65,
  func_std_types__io___load_configuration = -66
};

enum {
  var__START = FIRST_VAR-1,
  var_std__load_configuration, // attribute
  var_std__assign, // extern
  var_30_26_configuration, // dynamic
  var_30_44_fields, // dynamic
  var_31_4_errors, // dynamic
  var_empty_list, // extern
  var_length_of, // extern
  var_std__equal, // extern
  var_is_a_list, // extern
  var_std__and, // extern
  var_update_if, // extern
  var_33_19_tables, // dynamic
  var_first, // extern
  var_is_a_string, // extern
  var_filter, // extern
  var_to_hash_table, // extern
  var_from_utf8, // extern
  var_trim_right, // extern
  var_split, // extern
  var_37_8_no, // dynamic
  var_37_11_line, // dynamic
  var_truncate_from, // extern
  var_normalize, // extern
  var_is_empty, // extern
  var_next, // extern
  var_44_12_name, // dynamic
  var_45_12_value, // dynamic
  var_behind, // extern
  var_46_12_attribute_of, // dynamic
  var_is_defined, // extern
  var_49_16_default_value, // dynamic
  var_is_a_number, // extern
  var_to_number, // extern
  var_std__string, // extern
  var_push, // extern
  var_if, // extern
  var_is_a_boolean, // extern
  var_std__sequence, // extern
  var_true, // extern
  var_false, // extern
  var_case, // extern
  var_cond, // extern
  var_78_16_found, // dynamic
  var_82_20_key, // dynamic
  var_break, // extern
  var_for_each, // extern
  var_101_32_base_filename, // dynamic
  var_append, // extern
  var_103_21_mac_address, // dynamic
  var_get_mac_address, // extern
  var_list, // extern
  var_std_types__object, // extern
  var_load_configuration, // extern polymorphic
  var_126_5_configuration, // dynamic
  var_128_5_fields, // dynamic
  var_131_4_errors, // dynamic
  var_134_14_buf, // dynamic
  var_load, // extern
  var_is_an_error, // extern
  var_deregister_all_handlers, // extern
  var_tuple, // extern
  var_JOB_COMPLETED, // extern
  var_150_16_io, // dynamic
  var_150_19_id, // dynamic
  var_150_22_err, // dynamic
  var_150_26_more_filenames, // dynamic
  var_JOB_FAILED, // extern
  var_157_8_filename, // dynamic
  var_log, // extern
  var_range, // extern
  var_std__key_value_pair, // extern
  var_register_handlers, // extern
  var_undefined, // extern
  var_168_4_filename, // dynamic
  var_std_types__io, // extern
  var_run, // extern
  var__END
};


static TAB_NUM t_func_extract_configuration[] = {
  4, // locals
  3, // parameters
  var_30_26_configuration,
  LOCAL(4), // 30_40_buf
  var_30_44_fields,
  // $errors empty_list
  LET, 1, var_empty_list, 1, var_31_4_errors,
  // length_of(fields) == 1 && fields(1).is_a_list &fields -> fields(1)
  var_length_of, 1, var_30_44_fields, 1, LOCAL(1),
  // length_of(fields) == 1 && fields(1).is_a_list &fields -> fields(1)
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // length_of(fields) == 1 && fields(1).is_a_list &fields -> fields(1)
  var_std__and, 2, LOCAL(2), lambda_1, 1, LOCAL(3),
  // update_if length_of(fields) == 1 && fields(1).is_a_list &fields -> fields(1)
  var_update_if, 3, LOCAL(3), var_30_44_fields, lambda_2, 1, var_30_44_fields,
  // filter &fields $tables: (field) -> first(field).is_a_string
  var_filter, 2, var_30_44_fields, lambda_3, 2, var_30_44_fields, var_33_19_tables,
  // to_hash_table &fields
  var_to_hash_table, 1, var_30_44_fields, 1, var_30_44_fields,
  // from_utf8 &buf
  var_from_utf8, 1, LOCAL(4), 1, LOCAL(4),
  // trim_right '@nl;')
  var_trim_right, 1, LOCAL(4), 1, LOCAL(1),
  // split(buf.trim_right '@nl;')
  var_split, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // for_each split(buf.trim_right '@nl;')
  var_for_each, 3, LOCAL(2), lambda_4, lambda_20, TAIL_CALL,
  POS(31, 3),
  POS(32, 13),
  POS(32, 13),
  POS(32, 13),
  POS(32, 3),
  POS(33, 3),
  POS(34, 3),
  POS(35, 3),
  POS(36, 22),
  POS(36, 12),
  POS(36, 3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_extract_configuration = {
  t_func_extract_configuration, NULL, 11, 1,
  {"30_40_buf\000"}
};

static TAB_NUM t_lambda_1[] = {
  2, // locals
  0, // parameters
  // fields(1).is_a_list &fields -> fields(1)
  var_30_44_fields, 1, num_1, 1, LOCAL(1),
  // is_a_list &fields -> fields(1)
  var_is_a_list, 1, LOCAL(1), 1, LOCAL(2),
  // fields(1).is_a_list &fields -> fields(1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(32, 39),
  POS(32, 49),
  POS(32, 39)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // fields(1)
  var_30_44_fields, 1, num_1, 1, LOCAL(1),
  //  fields(1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(32, 70),
  POS(32, 69)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 33_28_field
  // first(field).is_a_string
  var_first, 1, LOCAL(3), 1, LOCAL(1),
  // is_a_string
  var_is_a_string, 1, LOCAL(1), 1, LOCAL(2),
  // -> first(field).is_a_string
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(33, 38),
  POS(33, 51),
  POS(33, 35),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 3, 1,
  {"33_28_field\000"}
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  2, // parameters
  var_37_8_no,
  var_37_11_line,
  // truncate_from &line '#'
  var_truncate_from, 2, var_37_11_line, chr_35, 1, var_37_11_line,
  // normalize &line
  var_normalize, 1, var_37_11_line, 1, var_37_11_line,
  // is_empty
  var_is_empty, 1, var_37_11_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_5, TAIL_CALL,
  POS(38, 7),
  POS(39, 7),
  POS(41, 14),
  POS(40, 7)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // $name line .truncate_from. ' '
  var_truncate_from, 2, var_37_11_line, chr_32, 1, var_44_12_name,
  // $value line .behind. ' '
  var_behind, 2, var_37_11_line, chr_32, 1, var_45_12_value,
  // $attribute_of fields(name)
  var_30_44_fields, 1, var_44_12_name, 1, var_46_12_attribute_of,
  // is_defined:
  var_is_defined, 1, var_46_12_attribute_of, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_attribute_of_is_defined, lambda_16, TAIL_CALL,
  POS(44, 11),
  POS(45, 11),
  POS(46, 11),
  POS(48, 26),
  POS(47, 11)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_attribute_of_is_defined[] = {
  0, // locals
  0, // parameters
  // $default_value attribute_of(configuration)
  var_46_12_attribute_of, 1, var_30_26_configuration, 1, var_49_16_default_value,
  // cond
  var_cond, 3, lambda_6, lambda_9, lambda_14, TAIL_CALL,
  POS(49, 15),
  POS(50, 15)
};

static FUNCTION_INFO i_lambda_attribute_of_is_defined = {
  t_lambda_attribute_of_is_defined, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // is_a_number:
  var_is_a_number, 1, var_49_16_default_value, 1, LOCAL(1),
  //  default_value.is_a_number:
  LET, 2, LOCAL(1), lambda_7, TAIL_CALL,
  POS(51, 34),
  POS(51, 19)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // to_number &value
  var_to_number, 1, var_45_12_value, 1, var_45_12_value,
  // is_defined:
  var_is_defined, 1, var_45_12_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_value_is_defined, lambda_8, TAIL_CALL,
  POS(52, 19),
  POS(54, 27),
  POS(53, 19)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_value_is_defined[] = {
  0, // locals
  0, // parameters
  // attribute_of &configuration value
  var_46_12_attribute_of, 2, var_30_26_configuration, var_45_12_value, 1, var_30_26_configuration,
  // next
  var_next, 0, TAIL_CALL,
  POS(55, 23),
  POS(56, 23)
};

static FUNCTION_INFO i_lambda_value_is_defined = {
  t_lambda_value_is_defined, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 5, str_Attribute, var_44_12_name, str__should_be_a_num, var_37_8_no, string_1, 1, LOCAL(1),
  // push &errors "
  var_push, 2, var_31_4_errors, LOCAL(1), 1, var_31_4_errors,
  // next
  var_next, 0, TAIL_CALL,
  POS(58, 36),
  POS(58, 23),
  POS(60, 23)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // is_a_boolean:
  var_is_a_boolean, 1, var_49_16_default_value, 1, LOCAL(1),
  //  default_value.is_a_boolean:
  LET, 2, LOCAL(1), lambda_10, TAIL_CALL,
  POS(61, 34),
  POS(61, 19)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  // case value
  var_case, 6, var_45_12_value, sequence_63_22, lambda_11, sequence_66_22, lambda_12, lambda_13, TAIL_CALL,
  POS(62, 19)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // attribute_of &configuration true
  var_46_12_attribute_of, 2, var_30_26_configuration, var_true, 1, var_30_26_configuration,
  // next
  var_next, 0, TAIL_CALL,
  POS(64, 23),
  POS(65, 23)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  // attribute_of &configuration false
  var_46_12_attribute_of, 2, var_30_26_configuration, var_false, 1, var_30_26_configuration,
  // next
  var_next, 0, TAIL_CALL,
  POS(67, 23),
  POS(68, 23)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 5, str_Attribute, var_44_12_name, str__should_be_eithe, var_37_8_no, string_1, 1, LOCAL(1),
  // push &errors "
  var_push, 2, var_31_4_errors, LOCAL(1), 1, var_31_4_errors,
  // next
  var_next, 0, TAIL_CALL,
  POS(70, 36),
  POS(70, 23),
  POS(73, 23)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_15, TAIL_CALL,
  POS(74, 19)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  // attribute_of &configuration value
  var_46_12_attribute_of, 2, var_30_26_configuration, var_45_12_value, 1, var_30_26_configuration,
  // next
  var_next, 0, TAIL_CALL,
  POS(75, 19),
  POS(76, 19)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  // $found false
  LET, 1, var_false, 1, var_78_16_found,
  // for_each tables
  var_for_each, 3, var_33_19_tables, lambda_17, lambda_18, TAIL_CALL,
  POS(78, 15),
  POS(79, 15)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_17[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 80_20_table
  // table !table !attribute_of
  LOCAL(2), 0, 2, LOCAL(2), var_46_12_attribute_of,
  // $key table(name)
  LOCAL(2), 1, var_44_12_name, 1, var_82_20_key,
  // is_defined:
  var_is_defined, 1, var_82_20_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_key_is_defined, var_next, TAIL_CALL,
  POS(81, 19),
  POS(82, 19),
  POS(84, 25),
  POS(83, 19),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 4, 1,
  {"80_20_table\000"}
};

static TAB_NUM t_lambda_key_is_defined[] = {
  1, // locals
  0, // parameters
  // $values attribute_of(configuration)
  var_46_12_attribute_of, 1, var_30_26_configuration, 1, LOCAL(1),
  // values(key) value
  LOCAL(1), 2, var_82_20_key, var_45_12_value, 1, LOCAL(1),
  // attribute_of &configuration values
  var_46_12_attribute_of, 2, var_30_26_configuration, LOCAL(1), 1, var_30_26_configuration,
  // !found true
  LET, 1, var_true, 1, var_78_16_found,
  // break
  var_break, 0, TAIL_CALL,
  POS(85, 23),
  POS(86, 24),
  POS(87, 23),
  POS(88, 23),
  POS(89, 23),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_key_is_defined = {
  t_lambda_key_is_defined, NULL, 5, 1,
  {"85_24_values\000"}
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_78_16_found, var_next, lambda_19, TAIL_CALL,
  POS(92, 19)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 5, str_Invalid_attribut, var_44_12_name, str__in_line, var_37_8_no, string_2, 1, LOCAL(1),
  // push &errors "
  var_push, 2, var_31_4_errors, LOCAL(1), 1, var_31_4_errors,
  // next
  var_next, 0, TAIL_CALL,
  POS(96, 36),
  POS(96, 23),
  POS(98, 23)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  configuration errors
  LET, 2, var_30_26_configuration, var_31_4_errors, TAIL_CALL,
  POS(99, 7)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_get_configuration_filenames[] = {
  3, // locals
  1, // parameters
  var_101_32_base_filename,
  // $default_filename append(base_filename ".cfg")
  var_append, 2, var_101_32_base_filename, str_cfg, 1, LOCAL(2),
  // get_mac_address! $mac_address
  var_get_mac_address, 0, IO_CALL(1), var_103_21_mac_address,
  // is_defined
  var_is_defined, 1, var_103_21_mac_address, 1, LOCAL(1),
  // $filenames
  var_if, 3, LOCAL(1), lambda_21, lambda_22, 1, LOCAL(3),
  // push &filenames default_filename
  var_push, 2, LOCAL(3), LOCAL(2), 1, LOCAL(3),
  // -> filenames
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(102, 3),
  POS(103, 3),
  POS(106, 19),
  POS(104, 3),
  POS(109, 3),
  POS(110, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_get_configuration_filenames = {
  t_func_get_configuration_filenames, NULL, 6, 2,
  {"104_4_filenames\000", "102_4_default_filename\000"}
};

static TAB_NUM t_lambda_21[] = {
  2, // locals
  0, // parameters
  // append(base_filename "_" mac_address ".cfg"))
  var_append, 4, var_101_32_base_filename, string_3, var_103_21_mac_address, str_cfg, 1, LOCAL(1),
  // list(append(base_filename "_" mac_address ".cfg"))
  var_list, 1, LOCAL(1), 1, LOCAL(2),
  //  list(append(base_filename "_" mac_address ".cfg"))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(107, 15),
  POS(107, 10),
  POS(107, 9)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(108, 9)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__object___load_configuration[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_126_5_configuration,
  MANDATORY_PARAMETER, LOCAL(1), // 127_5_base_filename
  REST_PARAMETER, var_128_5_fields,
  // get_configuration_filenames! $filenames base_filename
  func_get_configuration_filenames, 1, LOCAL(1), IO_CALL(1), LOCAL(2),
  // $errors empty_list
  LET, 1, var_empty_list, 1, var_131_4_errors,
  // for_each filenames
  var_for_each, 3, LOCAL(2), lambda_23, lambda_25, IO_TAIL_CALL,
  POS(130, 3),
  POS(131, 3),
  POS(132, 3),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__object___load_configuration = {
  t_func_std_types__object___load_configuration, NULL, 3, 2,
  {"130_33_filenames\000", "127_5_base_filename\000"}
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 133_8_filename
  // load! $buf filename
  var_load, 1, LOCAL(2), IO_CALL(1), var_134_14_buf,
  // is_an_error:
  var_is_an_error, 1, var_134_14_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_an_error, lambda_24, IO_TAIL_CALL,
  POS(134, 7),
  POS(136, 13),
  POS(135, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 3, 1,
  {"133_8_filename\000"}
};

static TAB_NUM t_lambda_buf_is_an_error[] = {
  0, // locals
  0, // parameters
  // push &errors buf
  var_push, 2, var_131_4_errors, var_134_14_buf, 1, var_131_4_errors,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(137, 11),
  POS(138, 11)
};

static FUNCTION_INFO i_lambda_buf_is_an_error = {
  t_lambda_buf_is_an_error, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  // extract_configuration configuration buf fields
  func_extract_configuration, 3, var_126_5_configuration, var_134_14_buf, var_128_5_fields, TAIL_CALL,
  POS(140, 11)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  //  configuration errors
  LET, 2, var_126_5_configuration, var_131_4_errors, TAIL_CALL,
  POS(141, 7)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_load_completed[] = {
  9, // locals
  4, // parameters
  LOCAL(3), // 143_19_io
  LOCAL(4), // 143_22_id
  LOCAL(5), // 143_25_buf
  LOCAL(6), // 143_29_configuration_info
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
  POS(144, 3),
  POS(145, 3),
  POS(146, 3),
  POS(147, 3),
  POS(148, 32),
  POS(148, 9),
  POS(148, 3),
  LOCAL(3),
  LOCAL(6),
  LOCAL(4),
  LOCAL(5),
  LOCAL(7),
  LOCAL(9),
  LOCAL(8)
};

static FUNCTION_INFO i_func_load_completed = {
  t_func_load_completed, NULL, 7, 7,
  {"143_19_io\000", "143_29_configuration_info\000", "143_22_id\000", "143_25_buf\000", "146_23_configuration\000", "147_41_errors\000", "146_38_fields\000"}
};

static TAB_NUM t_func_load_failed[] = {
  1, // locals
  4, // parameters
  var_150_16_io,
  var_150_19_id,
  var_150_22_err,
  var_150_26_more_filenames,
  // is_empty:
  var_is_empty, 1, var_150_26_more_filenames, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_more_filenames_is_empty, lambda_26, TAIL_CALL,
  POS(152, 20),
  POS(151, 3)
};

static FUNCTION_INFO i_func_load_failed = {
  t_func_load_failed, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_more_filenames_is_empty[] = {
  1, // locals
  0, // parameters
  // deregister_all_handlers &io id
  var_deregister_all_handlers, 2, var_150_16_io, var_150_19_id, 1, var_150_16_io,
  // id !id
  var_150_19_id, 0, 1, var_150_19_id,
  // tuple(JOB_FAILED id err)
  var_tuple, 3, var_JOB_FAILED, var_150_19_id, var_150_22_err, 1, LOCAL(1),
  // -> io tuple(JOB_FAILED id err)
  LET, 2, var_150_16_io, LOCAL(1), TAIL_CALL,
  POS(153, 7),
  POS(154, 7),
  POS(155, 13),
  POS(155, 7)
};

static FUNCTION_INFO i_lambda_more_filenames_is_empty = {
  t_lambda_more_filenames_is_empty, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_26[] = {
  3, // locals
  0, // parameters
  // $filename more_filenames(1)
  var_150_26_more_filenames, 1, num_1, 1, var_157_8_filename,
  // log &io 4 -> "
  var_log, 3, var_150_16_io, num_4, lambda_27, 1, var_150_16_io,
  // load &io id filename
  var_load, 3, var_150_16_io, var_150_19_id, var_157_8_filename, 1, var_150_16_io,
  // range(more_filenames 2 -1))
  var_range, 3, var_150_26_more_filenames, num_2, minus_num_1, 1, LOCAL(1),
  // tuple(load_failed range(more_filenames 2 -1))
  var_tuple, 2, func_load_failed, LOCAL(1), 1, LOCAL(2),
  // JOB_FAILED = tuple(load_failed range(more_filenames 2 -1))
  var_std__key_value_pair, 2, var_JOB_FAILED, LOCAL(2), 1, LOCAL(3),
  // register_handlers &io id # replace "failed"-handler
  var_register_handlers, 3, var_150_16_io, var_150_19_id, LOCAL(3), 1, var_150_16_io,
  // -> io undefined
  LET, 2, var_150_16_io, var_undefined, TAIL_CALL,
  POS(157, 7),
  POS(158, 7),
  POS(160, 7),
  POS(162, 40),
  POS(162, 22),
  POS(162, 9),
  POS(161, 7),
  POS(163, 7)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 8, 0,
  {}
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_try_to_load_conf, var_157_8_filename, string_4, 1, LOCAL(1),
  //  "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(158, 20),
  POS(158, 19)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_load_configuration_action[] = {
  12, // locals
  5, // parameters
  LOCAL(7), // 165_30_io
  LOCAL(8), // 165_33_id
  LOCAL(9), // 165_36_configuration
  LOCAL(10), // 165_50_base_filename
  LOCAL(11), // 165_64_fields
  // get_configuration_filenames! $filenames base_filename
  func_get_configuration_filenames, 1, LOCAL(10), IO_CALL(1), LOCAL(12),
  // tuple &id 1
  var_tuple, 2, LOCAL(8), num_1, 1, LOCAL(8),
  // $filename filenames(1)
  LOCAL(12), 1, num_1, 1, var_168_4_filename,
  // log &io 4 -> "
  var_log, 3, LOCAL(7), num_4, lambda_28, 1, LOCAL(7),
  // load &io id filename
  var_load, 3, LOCAL(7), LOCAL(8), var_168_4_filename, 1, LOCAL(7),
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
  POS(166, 3),
  POS(167, 3),
  POS(168, 3),
  POS(169, 3),
  POS(171, 3),
  POS(173, 42),
  POS(173, 21),
  POS(173, 5),
  POS(174, 36),
  POS(174, 18),
  POS(174, 5),
  POS(172, 3),
  POS(175, 3),
  LOCAL(7),
  LOCAL(9),
  LOCAL(10),
  LOCAL(11),
  LOCAL(8),
  LOCAL(12)
};

static FUNCTION_INFO i_func_load_configuration_action = {
  t_func_load_configuration_action, NULL, 13, 6,
  {"165_30_io\000", "165_36_configuration\000", "165_50_base_filename\000", "165_64_fields\000", "165_33_id\000", "166_33_filenames\000"}
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_try_to_load_conf, var_168_4_filename, string_4, 1, LOCAL(1),
  //  "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(169, 16),
  POS(169, 15)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__io___load_configuration[] = {
  5, // locals
  -5, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 181_5_io
  MANDATORY_PARAMETER, LOCAL(2), // 182_5_id
  MANDATORY_PARAMETER, LOCAL(3), // 183_5_configuration
  MANDATORY_PARAMETER, LOCAL(4), // 184_5_base_filename
  REST_PARAMETER, LOCAL(5), // 185_5_fields
  // run io load_configuration_action id configuration base_filename fields
  var_run, 6, LOCAL(1), func_load_configuration_action, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), TAIL_CALL,
  POS(187, 3),
  LOCAL(2),
  LOCAL(4),
  LOCAL(1),
  LOCAL(5),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__io___load_configuration = {
  t_func_std_types__io___load_configuration, NULL, 1, 5,
  {"182_5_id\000", "184_5_base_filename\000", "181_5_io\000", "185_5_fields\000", "183_5_configuration\000"}
};

static int sequence_63_22_arguments[] = {
  -str_yes, -str_on, -str_true
};

static int sequence_66_22_arguments[] = {
  -str_no, -str_off, -str_false
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.func_info = &i_func_extract_configuration}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_CHARACTER, 0, {.value = 35}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_attribute_of_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_value_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_STRING_8, 11, {.str_8 = "Attribute \042"}},
  {FLT_STRING_8, 27, {.str_8 = "\042 should be a number (line "}},
  {FLT_STRING_8, 2, {.str_8 = ")\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_STRING_8, 3, {.str_8 = "yes"}},
  {FLT_STRING_8, 2, {.str_8 = "on"}},
  {FLT_STRING_8, 4, {.str_8 = "true"}},
  {FLT_SEQUENCE, 3, {.arguments = sequence_63_22_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "no"}},
  {FLT_STRING_8, 3, {.str_8 = "off"}},
  {FLT_STRING_8, 5, {.str_8 = "false"}},
  {FLT_SEQUENCE, 3, {.arguments = sequence_66_22_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_STRING_8, 39, {.str_8 = "\042 should be either \042yes\042 or \042no\042 (line "}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_key_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_STRING_8, 19, {.str_8 = "Invalid attribute \042"}},
  {FLT_STRING_8, 10, {.str_8 = "\042 in line "}},
  {FLT_STRING_8, 2, {.str_8 = ".\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_get_configuration_filenames}},
  {FLT_STRING_8, 4, {.str_8 = ".cfg"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_STRING_8, 1, {.str_8 = "_"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__object___load_configuration}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_buf_is_an_error}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_24}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_25}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_load_completed}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_load_failed}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_more_filenames_is_empty}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_26}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_27}},
  {FLT_STRING_8, 32, {.str_8 = "try to load configuration from \042"}},
  {FLT_STRING_8, 2, {.str_8 = "\042\012"}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_load_configuration_action}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_28}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___load_configuration}}
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
    FOT_UNINITIALIZED, 0, 0,
    "30_26_configuration\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "30_44_fields\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "31_4_errors\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(31, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(32, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(32, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(32, 49)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(32, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(32, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "33_19_tables\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(33, 38)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(33, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "filter\000", NULL,
    {.position = POS(33, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_hash_table\000", NULL,
    {.position = POS(34, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_utf8\000", NULL,
    {.position = POS(35, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim_right\000", NULL,
    {.position = POS(36, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split\000", NULL,
    {.position = POS(36, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "37_8_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "37_11_line\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(38, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "normalize\000", NULL,
    {.position = POS(39, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(41, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(42, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "44_12_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "45_12_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "behind\000", NULL,
    {.position = POS(45, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "46_12_attribute_of\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(48, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "49_16_default_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_number\000", NULL,
    {.position = POS(51, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_number\000", NULL,
    {.position = POS(52, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(58, 36)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(58, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(53, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_boolean\000", NULL,
    {.position = POS(61, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(63, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(64, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(67, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(62, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(50, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "78_16_found\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "82_20_key\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(89, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(79, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "101_32_base_filename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(102, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "103_21_mac_address\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_mac_address\000", NULL,
    {.position = POS(103, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(107, 10)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(112, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "load_configuration\000", NULL,
    {.position = POS(112, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "126_5_configuration\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "128_5_fields\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "131_4_errors\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "134_14_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "load\000", NULL,
    {.position = POS(134, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(136, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deregister_all_handlers\000", NULL,
    {.position = POS(144, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(148, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "JOB_COMPLETED\000", NULL,
    {.position = POS(148, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "150_16_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "150_19_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "150_22_err\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "150_26_more_filenames\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "JOB_FAILED\000", NULL,
    {.position = POS(155, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "157_8_filename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "log\000", NULL,
    {.position = POS(158, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(162, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value_pair\000std", NULL,
    {.position = POS(162, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "register_handlers\000", NULL,
    {.position = POS(161, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(163, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "168_4_filename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "io\000std_types", std_types__io__attributes,
    {.position = POS(177, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "run\000", NULL,
    {.position = POS(187, 3)}
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
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
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
