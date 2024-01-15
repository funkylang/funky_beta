#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  uni_BOOLEAN_OPTION = -1,
  uni_std__COPYRIGHT = -2,
  uni_std__VERSION = -3,
  uni_std__VALUED_OPTION = -4,
  uni_std__MULTI_VALUED_OPTION = -5,
  uni_std__MANDATORY_PARAMETER = -6,
  uni_std__OPTIONAL_PARAMETER = -7,
  uni_std__SOME_PARAMETERS = -8,
  uni_std__MANY_PARAMETERS = -9,
  func_std__extract_options = -10,
  lambda_1 = -11,
  lambda_2 = -12,
  lambda_3 = -13,
  lambda_4 = -14,
  lambda_5 = -15,
  func_std__program_parameters = -16,
  func_display_table = -17,
  lambda_6 = -18,
  num_1 = -19,
  num_0 = -20,
  num_2 = -21,
  lambda_7 = -22,
  string_1 = -23,
  chr_10 = -24,
  lambda_8 = -25,
  lambda_9 = -26,
  string_2 = -27,
  lambda_10 = -28,
  string_3 = -29,
  func_check_arguments = -30,
  chr_47 = -31,
  minus_num_1 = -32,
  lambda_11 = -33,
  lambda_12 = -34,
  lambda_13 = -35,
  lambda_14 = -36,
  lambda_15 = -37,
  lambda_16 = -38,
  lambda_17 = -39,
  lambda_18 = -40,
  lambda_19 = -41,
  lambda_20 = -42,
  lambda_21 = -43,
  lambda_22 = -44,
  lambda_23 = -45,
  lambda_24 = -46,
  lambda_25 = -47,
  lambda_name_is_defined = -48,
  lambda_26 = -49,
  lambda_27 = -50,
  lambda_2_name_is_defined = -51,
  lambda_28 = -52,
  lambda_29 = -53,
  lambda_30 = -54,
  str_help = -55,
  lambda_31 = -56,
  lambda_32 = -57,
  lambda_33 = -58,
  str_copyright = -59,
  lambda_34 = -60,
  lambda_35 = -61,
  lambda_36 = -62,
  str_version = -63,
  lambda_37 = -64,
  lambda_38 = -65,
  lambda_39 = -66,
  lambda_40 = -67,
  func_initialize_results = -68,
  lambda_41 = -69,
  string_4 = -70,
  lambda_42 = -71,
  lambda_43 = -72,
  lambda_do_fetch_option_value = -73,
  lambda_VALUED_OPTION = -74,
  lambda_MULTI_VALUED_OPTION = -75,
  lambda_44 = -76,
  lambda_45 = -77,
  lambda_46 = -78,
  num_3 = -79,
  lambda_option_idx_is_undefined = -80,
  str_Invalid_option = -81,
  string_5 = -82,
  lambda_47 = -83,
  lambda_48 = -84,
  lambda_49 = -85,
  lambda_50 = -86,
  lambda_51 = -87,
  func_evaluate_arguments = -88,
  lambda_52 = -89,
  lambda_53 = -90,
  lambda_MANDATORY_PARAMETER = -91,
  lambda_54 = -92,
  lambda_55 = -93,
  lambda_56 = -94,
  lambda_57 = -95,
  lambda_58 = -96,
  lambda_59 = -97,
  lambda_2_MANDATORY_PARAMETER = -98,
  lambda_60 = -99,
  lambda_61 = -100,
  lambda_OPTIONAL_PARAMETER = -101,
  lambda_62 = -102,
  lambda_SOME_PARAMETERS = -103,
  lambda_MANY_PARAMETERS = -104,
  lambda_63 = -105,
  lambda_64 = -106,
  lambda_65 = -107,
  lambda_66 = -108,
  func_check_results = -109,
  lambda_arguments_is_not_empty = -110,
  lambda_67 = -111,
  lambda_68 = -112,
  lambda_69 = -113,
  lambda_70 = -114,
  lambda_71 = -115,
  lambda_possible_value_is_defined = -116,
  lambda_result_is_a_list = -117,
  lambda_72 = -118,
  lambda_73 = -119,
  lambda_74 = -120,
  func_check = -121,
  lambda_75 = -122,
  str_Invalid_argument = -123,
  string_6 = -124,
  func_convert = -125,
  lambda_76 = -126,
  lambda_77 = -127,
  lambda_78 = -128,
  lambda_79 = -129,
  lambda_80 = -130,
  func_help_message = -131,
  lambda_2_possible_value_is_defined = -132,
  str_valid_values = -133,
  lambda_81 = -134,
  chr_32 = -135,
  chr_44 = -136,
  lambda_82 = -137,
  func_handle_default_value = -138,
  lambda_default_value_is_defined = -139,
  str_default_value = -140,
  string_7 = -141,
  lambda_83 = -142,
  func_show_usage = -143,
  func_parameter_name = -144,
  lambda_2_OPTIONAL_PARAMETER = -145,
  chr_63 = -146,
  lambda_2_SOME_PARAMETERS = -147,
  chr_42 = -148,
  lambda_2_MANY_PARAMETERS = -149,
  chr_43 = -150,
  lambda_84 = -151,
  lambda_85 = -152,
  str_Usage = -153,
  lambda_copyright_is_defined = -154,
  str__copyright = -155,
  str__help = -156,
  lambda_86 = -157,
  lambda_87 = -158,
  str_Parameters = -159,
  lambda_do = -160,
  lambda_88 = -161,
  lambda_89 = -162,
  lambda_90 = -163,
  str_Options = -164,
  lambda_91 = -165,
  func_option_name = -166,
  lambda_2_VALUED_OPTION = -167,
  str__VALUE = -168,
  lambda_2_MULTI_VALUED_OPTION = -169,
  str__VALUES = -170,
  lambda_92 = -171,
  lambda_93 = -172,
  func_show_version = -173,
  string_8 = -174,
  func_show_copyright = -175,
  func_too_few_arguments_error = -176,
  str_Too_few_argument = -177,
  func_too_many_arguments_error = -178,
  str_Too_many_argumen = -179,
  func_extract_copyright_and_version = -180,
  lambda_loop = -181,
  lambda_94 = -182,
  lambda_95 = -183,
  lambda_96 = -184,
  lambda_97 = -185,
  lambda_98 = -186,
  lambda_99 = -187,
  lambda_100 = -188,
  lambda_101 = -189,
  func_extract_from_template = -190,
  lambda_102 = -191,
  num_5 = -192,
  lambda_103 = -193,
  str_malformed_parame = -194,
  lambda_104 = -195,
  lambda_105 = -196,
  num_4 = -197,
  lambda_106 = -198,
  lambda_107 = -199,
  lambda_108 = -200,
  lambda_109 = -201
};

enum {
  var__START = FIRST_VAR-1,
  var_std__assign, // extern
  var_std__COPYRIGHT, // initialized
  var_std__VERSION, // initialized
  var_std__VALUED_OPTION, // initialized
  var_std__MULTI_VALUED_OPTION, // initialized
  var_std__MANDATORY_PARAMETER, // initialized
  var_std__OPTIONAL_PARAMETER, // initialized
  var_std__SOME_PARAMETERS, // initialized
  var_std__MANY_PARAMETERS, // initialized
  var_std__extract_options, // initialized
  var_212_0_options, // dynamic
  var_215_1_results, // dynamic
  var_empty_list, // extern
  var_218_10_name, // dynamic
  var_218_16_result, // dynamic
  var_221_13_value, // dynamic
  var_std__equal, // extern
  var_break, // extern
  var_next, // extern
  var_if, // extern
  var_push, // extern
  var_for_each, // extern
  var_spread, // extern
  var_std__program_parameters, // initialized
  var_command_line_arguments, // extern
  var_length_of, // extern
  var_max, // extern
  var_294_1_first_column_width, // dynamic
  var_map_reduce, // extern
  var_plus, // extern
  var_pad_right, // extern
  var_eprint, // extern
  var_split, // extern
  var_std__plus, // extern
  var_dup, // extern
  var_eprintln, // extern
  var_pass, // extern
  var_314_19_arguments, // dynamic
  var_314_29_templates, // dynamic
  var_315_1_results, // dynamic
  var_316_1_options, // dynamic
  var_empty_key_order_table, // extern
  var_317_1_parameters, // dynamic
  var_318_1_names, // dynamic
  var_319_1_kinds, // dynamic
  var_320_1_possible_values, // dynamic
  var_321_1_default_values, // dynamic
  var_322_1_conversions, // dynamic
  var_323_1_help_messages, // dynamic
  var_program_name, // extern
  var_324_1_command_name, // dynamic
  var_truncate_until, // extern
  var_from_utf8, // extern
  var_map, // extern
  var_327_42_copyright, // dynamic
  var_327_53_version, // dynamic
  var_330_3_idx, // dynamic
  var_332_1_option, // dynamic
  var_332_9_name, // dynamic
  var_is_a_key_value_pair, // extern
  var_value_of, // extern
  var_undefined, // extern
  var_key_of, // extern
  var_update_if, // extern
  var_is_defined, // extern
  var_is_a_string, // extern
  var_false, // extern
  var_VALUED_OPTION, // extern
  var_MULTI_VALUED_OPTION, // extern
  var_SOME_PARAMETERS, // extern
  var_MANY_PARAMETERS, // extern
  var_std__or, // extern
  var_true, // extern
  var_cond, // extern
  var_std__less, // extern
  var_std__not, // extern
  var_terminate, // extern
  var_std__and, // extern
  var_395_1_idx, // dynamic
  var_396_1_do_fetch_option_value, // dynamic
  var_397_1_option_idx, // dynamic
  var_399_3_argument, // dynamic
  var_std__minus, // extern
  var_range, // extern
  var_append, // extern
  var_case, // extern
  var_has_prefix, // extern
  var_is_undefined, // extern
  var_std__string, // extern
  var_Error, // extern
  var_inc, // extern
  var_446_1_last_idx, // dynamic
  var_448_3_idx, // dynamic
  var_450_1_option, // dynamic
  var_OPTIONAL_PARAMETER, // extern
  var_std__sequence, // extern
  var_MANDATORY_PARAMETER, // extern
  var_is_empty, // extern
  var_pop, // extern
  var_467_3_idx, // dynamic
  var_469_1_option, // dynamic
  var_get, // extern
  var_from_to, // extern
  var_from_to_by, // extern
  var_is_not_empty, // extern
  var_508_3_idx, // dynamic
  var_508_7_result, // dynamic
  var_514_1_possible_value, // dynamic
  var_is_a_list, // extern
  var_to_upper_case, // extern
  var_exit, // extern
  var_538_11_value, // dynamic
  var_539_1_conversion, // dynamic
  var_551_16_idx, // dynamic
  var_552_1_message, // dynamic
  var_553_1_possible_value, // dynamic
  var_string, // extern
  var_567_1_default_value, // dynamic
  var_576_1_buf, // dynamic
  var_608_1_table, // dynamic
  var_list, // extern
  var_do, // extern
  var_622_1_table, // dynamic
  var_624_3_option, // dynamic
  var_624_10_idx, // dynamic
  var_629_1_buf, // dynamic
  var_657_33_templates, // dynamic
  var_658_1_copyright, // dynamic
  var_659_1_version, // dynamic
  var_666_1_option, // dynamic
  var_666_45_message, // dynamic
  var_COPYRIGHT, // extern
  var_VERSION, // extern
  var_loop, // extern
  var_678_25_template, // dynamic
  var_679_1_len, // dynamic
  var__END
};


static TAB_NUM t_func_std__extract_options[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_212_0_options,
  REST_PARAMETER, LOCAL(1), // 213_0_templates
  // $results empty_list
  LET, 1, var_empty_list, 1, var_215_1_results,
  // for_each templates
  var_for_each, 3, LOCAL(1), lambda_1, lambda_5, TAIL_CALL,
  POS(215, 3),
  POS(216, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 217_3_template
  // template $name $result
  LOCAL(1), 0, 2, var_218_10_name, var_218_16_result,
  // for_each options
  var_for_each, 3, var_212_0_options, lambda_2, lambda_4, TAIL_CALL,
  POS(218, 7),
  POS(219, 7)
};

static TAB_NUM t_lambda_2[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 220_3_option
  // option $key $value
  LOCAL(2), 0, 2, LOCAL(3), var_221_13_value,
  // key == name:
  var_std__equal, 2, LOCAL(3), var_218_10_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, var_next, TAIL_CALL,
  POS(221, 11),
  POS(223, 13),
  POS(222, 11)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  // !result value
  LET, 1, var_221_13_value, 1, var_218_16_result,
  // break
  var_break, 0, TAIL_CALL,
  POS(224, 15),
  POS(225, 15)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  // push &results result
  var_push, 2, var_215_1_results, var_218_16_result, 1, var_215_1_results,
  // next
  var_next, 0, TAIL_CALL,
  POS(228, 11),
  POS(229, 11)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  // spread results
  var_spread, 1, var_215_1_results, TAIL_CALL,
  POS(231, 7)
};

static TAB_NUM t_func_std__program_parameters[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 289_0_templates
  // check_arguments! command_line_arguments templates
  func_check_arguments, 2, var_command_line_arguments, LOCAL(1), IO_TAIL_CALL,
  POS(291, 3)
};

static TAB_NUM t_func_display_table[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 293_17_table
  // $first_column_width
  var_map_reduce, 4, LOCAL(1), lambda_6, var_max, num_0, 1, var_294_1_first_column_width,
  // plus &first_column_width 2
  var_plus, 2, var_294_1_first_column_width, num_2, 1, var_294_1_first_column_width,
  // for_each table
  var_for_each, 3, LOCAL(1), lambda_7, var_pass, IO_TAIL_CALL,
  POS(294, 3),
  POS(300, 3),
  POS(301, 3)
};

static TAB_NUM t_lambda_6[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 297_3_entries
  // entries(1))
  LOCAL(3), 1, num_1, 1, LOCAL(1),
  // length_of(entries(1))
  var_length_of, 1, LOCAL(1), 1, LOCAL(2),
  // -> length_of(entries(1))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(297, 32),
  POS(297, 22),
  POS(297, 19)
};

static TAB_NUM t_lambda_7[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 302_3_entries
  // entries(1) first_column_width)
  LOCAL(3), 1, num_1, 1, LOCAL(1),
  // pad_right(entries(1) first_column_width)
  var_pad_right, 2, LOCAL(1), var_294_1_first_column_width, 1, LOCAL(2),
  // eprint! "  " pad_right(entries(1) first_column_width)
  var_eprint, 2, string_1, LOCAL(2), IO_CALL(0),
  // entries(2) '@nl;'): (no line)
  LOCAL(3), 1, num_2, 1, LOCAL(1),
  // split(entries(2) '@nl;'): (no line)
  var_split, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // for_each split(entries(2) '@nl;'): (no line)
  var_for_each, 2, LOCAL(2), lambda_8, IO_TAIL_CALL,
  POS(303, 30),
  POS(303, 20),
  POS(303, 7),
  POS(304, 22),
  POS(304, 16),
  POS(304, 7)
};

static TAB_NUM t_lambda_8[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 304_36_no
  LOCAL(4), // 304_39_line
  // no == 1
  var_std__equal, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_9, lambda_10, 1, LOCAL(2),
  // eprintln!
  var_eprintln, 2, LOCAL(2), LOCAL(4), IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(307, 13),
  POS(306, 11),
  POS(305, 9),
  POS(311, 9)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_2, TAIL_CALL,
  POS(308, 15)
};

static TAB_NUM t_lambda_10[] = {
  2, // locals
  0, // parameters
  // 2+first_column_width
  var_std__plus, 2, num_2, var_294_1_first_column_width, 1, LOCAL(1),
  //  " .dup. 2+first_column_width
  var_dup, 2, string_3, LOCAL(1), 1, LOCAL(2),
  //  " " .dup. 2+first_column_width
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(309, 26),
  POS(309, 17),
  POS(309, 15)
};

static TAB_NUM t_func_check_arguments[] = {
  0, // locals
  2, // parameters
  var_314_19_arguments,
  var_314_29_templates,
  // $results empty_list
  LET, 1, var_empty_list, 1, var_315_1_results,
  // $options empty_key_order_table
  LET, 1, var_empty_key_order_table, 1, var_316_1_options,
  // $parameters empty_key_order_table
  LET, 1, var_empty_key_order_table, 1, var_317_1_parameters,
  // $names empty_list
  LET, 1, var_empty_list, 1, var_318_1_names,
  // $kinds empty_list
  LET, 1, var_empty_list, 1, var_319_1_kinds,
  // $possible_values empty_list
  LET, 1, var_empty_list, 1, var_320_1_possible_values,
  // $default_values empty_list
  LET, 1, var_empty_list, 1, var_321_1_default_values,
  // $conversions empty_list
  LET, 1, var_empty_list, 1, var_322_1_conversions,
  // $help_messages empty_list
  LET, 1, var_empty_list, 1, var_323_1_help_messages,
  // $command_name truncate_until(program_name '/' -1)
  var_truncate_until, 3, var_program_name, chr_47, minus_num_1, 1, var_324_1_command_name,
  // map &arguments from_utf8
  var_map, 2, var_314_19_arguments, var_from_utf8, 1, var_314_19_arguments,
  // extract_copyright_and_version &templates $copyright $version
  func_extract_copyright_and_version, 1, var_314_29_templates, 3, var_314_29_templates, var_327_42_copyright, var_327_53_version,
  // for_each templates
  var_for_each, 3, var_314_29_templates, lambda_11, lambda_28, IO_TAIL_CALL,
  POS(315, 3),
  POS(316, 3),
  POS(317, 3),
  POS(318, 3),
  POS(319, 3),
  POS(320, 3),
  POS(321, 3),
  POS(322, 3),
  POS(323, 3),
  POS(324, 3),
  POS(325, 3),
  POS(327, 3),
  POS(329, 3)
};

static TAB_NUM t_lambda_11[] = {
  6, // locals
  2, // parameters
  var_330_3_idx,
  LOCAL(3), // 330_7_template
  // extract_from_template template
  func_extract_from_template, 1, LOCAL(3), 5, var_332_1_option, var_332_9_name, LOCAL(4), LOCAL(5), LOCAL(6),
  // is_a_key_value_pair
  var_is_a_key_value_pair, 1, var_332_1_option, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12, lambda_13, 1, LOCAL(2),
  // push &possible_values
  var_push, 2, var_320_1_possible_values, LOCAL(2), 1, var_320_1_possible_values,
  // is_a_key_value_pair &option -> key_of(option)
  var_is_a_key_value_pair, 1, var_332_1_option, 1, LOCAL(1),
  // update_if option.is_a_key_value_pair &option -> key_of(option)
  var_update_if, 3, LOCAL(1), var_332_1_option, lambda_14, 1, var_332_1_option,
  // is_defined
  var_is_defined, 1, var_332_9_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_15, lambda_16, 1, LOCAL(2),
  // push &names
  var_push, 2, var_318_1_names, LOCAL(2), 1, var_318_1_names,
  // push &kinds option
  var_push, 2, var_319_1_kinds, var_332_1_option, 1, var_319_1_kinds,
  // push &default_values default_value
  var_push, 2, var_321_1_default_values, LOCAL(4), 1, var_321_1_default_values,
  // push &conversions conversion
  var_push, 2, var_322_1_conversions, LOCAL(5), 1, var_322_1_conversions,
  // push &help_messages help
  var_push, 2, var_323_1_help_messages, LOCAL(6), 1, var_323_1_help_messages,
  // cond
  var_cond, 5, lambda_17, lambda_19, lambda_21, lambda_23, lambda_26, IO_TAIL_CALL,
  POS(331, 7),
  POS(335, 18),
  POS(334, 9),
  POS(333, 7),
  POS(338, 24),
  POS(338, 7),
  POS(341, 16),
  POS(340, 9),
  POS(339, 7),
  POS(344, 7),
  POS(345, 7),
  POS(346, 7),
  POS(347, 7),
  POS(348, 7)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // value_of(option)
  var_value_of, 1, var_332_1_option, 1, LOCAL(1),
  //  value_of(option)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(336, 14),
  POS(336, 13)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(337, 13)
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  0, // parameters
  // key_of(option)
  var_key_of, 1, var_332_1_option, 1, LOCAL(1),
  //  key_of(option)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(338, 55),
  POS(338, 54)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  //  name
  LET, 1, var_332_9_name, TAIL_CALL,
  POS(342, 13)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  option
  LET, 1, var_332_1_option, TAIL_CALL,
  POS(343, 13)
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // is_a_string:
  var_is_a_string, 1, var_332_1_option, 1, LOCAL(1),
  //  option.is_a_string:
  LET, 2, LOCAL(1), lambda_18, IO_TAIL_CALL,
  POS(349, 19),
  POS(349, 11)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  // push &results false
  var_push, 2, var_315_1_results, var_false, 1, var_315_1_results,
  // options(option) idx
  var_316_1_options, 2, var_332_1_option, var_330_3_idx, 1, var_316_1_options,
  // kinds(idx) BOOLEAN_OPTION
  var_319_1_kinds, 2, var_330_3_idx, uni_BOOLEAN_OPTION, 1, var_319_1_kinds,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(350, 11),
  POS(351, 12),
  POS(352, 12),
  POS(353, 11)
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // option == VALUED_OPTION:
  var_std__equal, 2, var_332_1_option, var_VALUED_OPTION, 1, LOCAL(1),
  //  option == VALUED_OPTION:
  LET, 2, LOCAL(1), lambda_20, IO_TAIL_CALL,
  POS(354, 12),
  POS(354, 11)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  // push &results undefined
  var_push, 2, var_315_1_results, var_undefined, 1, var_315_1_results,
  // options(name) idx
  var_316_1_options, 2, var_332_9_name, var_330_3_idx, 1, var_316_1_options,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(355, 11),
  POS(356, 12),
  POS(357, 11)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // option == MULTI_VALUED_OPTION:
  var_std__equal, 2, var_332_1_option, var_MULTI_VALUED_OPTION, 1, LOCAL(1),
  //  option == MULTI_VALUED_OPTION:
  LET, 2, LOCAL(1), lambda_22, IO_TAIL_CALL,
  POS(358, 12),
  POS(358, 11)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  // push &results empty_list
  var_push, 2, var_315_1_results, var_empty_list, 1, var_315_1_results,
  // options(name) idx
  var_316_1_options, 2, var_332_9_name, var_330_3_idx, 1, var_316_1_options,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(359, 11),
  POS(360, 12),
  POS(361, 11)
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  0, // parameters
  // option == SOME_PARAMETERS || option == MANY_PARAMETERS:
  var_std__equal, 2, var_332_1_option, var_SOME_PARAMETERS, 1, LOCAL(1),
  // option == SOME_PARAMETERS || option == MANY_PARAMETERS:
  var_std__or, 2, LOCAL(1), lambda_24, 1, LOCAL(2),
  //  option == SOME_PARAMETERS || option == MANY_PARAMETERS:
  LET, 2, LOCAL(2), lambda_25, IO_TAIL_CALL,
  POS(362, 12),
  POS(362, 12),
  POS(362, 11)
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  0, // parameters
  // option == MANY_PARAMETERS:
  var_std__equal, 2, var_332_1_option, var_MANY_PARAMETERS, 1, LOCAL(1),
  // option == MANY_PARAMETERS:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(362, 41),
  POS(362, 41)
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // push &results empty_list
  var_push, 2, var_315_1_results, var_empty_list, 1, var_315_1_results,
  // is_defined:
  var_is_defined, 1, var_332_9_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_name_is_defined, var_next, IO_TAIL_CALL,
  POS(363, 11),
  POS(365, 18),
  POS(364, 11)
};

static TAB_NUM t_lambda_name_is_defined[] = {
  0, // locals
  0, // parameters
  // parameters(name) idx
  var_317_1_parameters, 2, var_332_9_name, var_330_3_idx, 1, var_317_1_parameters,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(366, 16),
  POS(367, 15)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_27, IO_TAIL_CALL,
  POS(369, 11)
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // push &results undefined
  var_push, 2, var_315_1_results, var_undefined, 1, var_315_1_results,
  // is_defined:
  var_is_defined, 1, var_332_9_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_name_is_defined, var_next, IO_TAIL_CALL,
  POS(370, 11),
  POS(372, 18),
  POS(371, 11)
};

static TAB_NUM t_lambda_2_name_is_defined[] = {
  0, // locals
  0, // parameters
  // parameters(name) idx
  var_317_1_parameters, 2, var_332_9_name, var_330_3_idx, 1, var_317_1_parameters,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(373, 16),
  POS(374, 15)
};

static TAB_NUM t_lambda_28[] = {
  3, // locals
  0, // parameters
  // length_of(arguments) >= 1:
  var_length_of, 1, var_314_19_arguments, 1, LOCAL(1),
  // length_of(arguments) >= 1:
  var_std__less, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // length_of(arguments) >= 1:
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_29, lambda_40, IO_TAIL_CALL,
  POS(378, 9),
  POS(378, 9),
  POS(378, 9),
  POS(377, 7)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_30, lambda_32, lambda_35, lambda_38, IO_TAIL_CALL,
  POS(379, 11)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // arguments(1) == "--help":
  var_314_19_arguments, 1, num_1, 1, LOCAL(1),
  // arguments(1) == "--help":
  var_std__equal, 2, LOCAL(1), str_help, 1, LOCAL(2),
  //  arguments(1) == "--help":
  LET, 2, LOCAL(2), lambda_31, IO_TAIL_CALL,
  POS(380, 16),
  POS(380, 16),
  POS(380, 15)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  // show_usage!
  func_show_usage, 0, IO_CALL(0),
  // terminate!
  var_terminate, 0, IO_TAIL_CALL,
  POS(381, 15),
  POS(382, 15)
};

static TAB_NUM t_lambda_32[] = {
  2, // locals
  0, // parameters
  // is_defined && arguments(1) == "--copyright":
  var_is_defined, 1, var_327_42_copyright, 1, LOCAL(1),
  // is_defined && arguments(1) == "--copyright":
  var_std__and, 2, LOCAL(1), lambda_33, 1, LOCAL(2),
  //  copyright.is_defined && arguments(1) == "--copyright":
  LET, 2, LOCAL(2), lambda_34, IO_TAIL_CALL,
  POS(383, 26),
  POS(383, 26),
  POS(383, 15)
};

static TAB_NUM t_lambda_33[] = {
  2, // locals
  0, // parameters
  // arguments(1) == "--copyright":
  var_314_19_arguments, 1, num_1, 1, LOCAL(1),
  // arguments(1) == "--copyright":
  var_std__equal, 2, LOCAL(1), str_copyright, 1, LOCAL(2),
  // arguments(1) == "--copyright":
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(383, 40),
  POS(383, 40),
  POS(383, 40)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  // show_copyright!
  func_show_copyright, 0, IO_CALL(0),
  // terminate!
  var_terminate, 0, IO_TAIL_CALL,
  POS(384, 15),
  POS(385, 15)
};

static TAB_NUM t_lambda_35[] = {
  2, // locals
  0, // parameters
  // is_defined && arguments(1) == "--version":
  var_is_defined, 1, var_327_53_version, 1, LOCAL(1),
  // is_defined && arguments(1) == "--version":
  var_std__and, 2, LOCAL(1), lambda_36, 1, LOCAL(2),
  //  version.is_defined && arguments(1) == "--version":
  LET, 2, LOCAL(2), lambda_37, IO_TAIL_CALL,
  POS(386, 24),
  POS(386, 24),
  POS(386, 15)
};

static TAB_NUM t_lambda_36[] = {
  2, // locals
  0, // parameters
  // arguments(1) == "--version":
  var_314_19_arguments, 1, num_1, 1, LOCAL(1),
  // arguments(1) == "--version":
  var_std__equal, 2, LOCAL(1), str_version, 1, LOCAL(2),
  // arguments(1) == "--version":
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(386, 38),
  POS(386, 38),
  POS(386, 38)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  // show_version!
  func_show_version, 0, IO_CALL(0),
  // terminate!
  var_terminate, 0, IO_TAIL_CALL,
  POS(387, 15),
  POS(388, 15)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_39, IO_TAIL_CALL,
  POS(389, 15)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  // initialize_results!
  func_initialize_results, 0, IO_TAIL_CALL,
  POS(390, 15)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  // initialize_results!
  func_initialize_results, 0, IO_TAIL_CALL,
  POS(392, 11)
};

static TAB_NUM t_func_initialize_results[] = {
  0, // locals
  0, // parameters
  // $idx 1
  LET, 1, num_1, 1, var_395_1_idx,
  // $do_fetch_option_value false
  LET, 1, var_false, 1, var_396_1_do_fetch_option_value,
  // $option_idx undefined
  LET, 1, var_undefined, 1, var_397_1_option_idx,
  // for_each arguments
  var_for_each, 3, var_314_19_arguments, lambda_41, lambda_51, IO_TAIL_CALL,
  POS(395, 5),
  POS(396, 5),
  POS(397, 5),
  POS(398, 5)
};

static TAB_NUM t_lambda_41[] = {
  1, // locals
  1, // parameters
  var_399_3_argument,
  // argument == "--":
  var_std__equal, 2, var_399_3_argument, string_4, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_42, lambda_43, IO_TAIL_CALL,
  POS(401, 11),
  POS(400, 9)
};

static TAB_NUM t_lambda_42[] = {
  4, // locals
  0, // parameters
  // idx-1) range(arguments idx+1 -1))
  var_std__minus, 2, var_395_1_idx, num_1, 1, LOCAL(1),
  // range(arguments 1 idx-1) range(arguments idx+1 -1))
  var_range, 3, var_314_19_arguments, num_1, LOCAL(1), 1, LOCAL(2),
  // idx+1 -1))
  var_std__plus, 2, var_395_1_idx, num_1, 1, LOCAL(3),
  // range(arguments idx+1 -1))
  var_range, 3, var_314_19_arguments, LOCAL(3), minus_num_1, 1, LOCAL(4),
  // !arguments
  var_append, 2, LOCAL(2), LOCAL(4), 1, var_314_19_arguments,
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(403, 40),
  POS(403, 22),
  POS(403, 63),
  POS(403, 47),
  POS(402, 13),
  POS(404, 13)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_396_1_do_fetch_option_value, lambda_do_fetch_option_value, lambda_45, IO_TAIL_CALL,
  POS(406, 13)
};

static TAB_NUM t_lambda_do_fetch_option_value[] = {
  4, // locals
  0, // parameters
  // !do_fetch_option_value false
  LET, 1, var_false, 1, var_396_1_do_fetch_option_value,
  // idx-1) range(arguments idx+1 -1))
  var_std__minus, 2, var_395_1_idx, num_1, 1, LOCAL(1),
  // range(arguments 1 idx-1) range(arguments idx+1 -1))
  var_range, 3, var_314_19_arguments, num_1, LOCAL(1), 1, LOCAL(2),
  // idx+1 -1))
  var_std__plus, 2, var_395_1_idx, num_1, 1, LOCAL(3),
  // range(arguments idx+1 -1))
  var_range, 3, var_314_19_arguments, LOCAL(3), minus_num_1, 1, LOCAL(4),
  // !arguments
  var_append, 2, LOCAL(2), LOCAL(4), 1, var_314_19_arguments,
  // kinds(option_idx)
  var_319_1_kinds, 1, var_397_1_option_idx, 1, LOCAL(1),
  // case kinds(option_idx)
  var_case, 6, LOCAL(1), var_VALUED_OPTION, lambda_VALUED_OPTION, var_MULTI_VALUED_OPTION, lambda_MULTI_VALUED_OPTION, lambda_44, IO_TAIL_CALL,
  POS(408, 17),
  POS(410, 44),
  POS(410, 26),
  POS(410, 67),
  POS(410, 51),
  POS(409, 17),
  POS(411, 22),
  POS(411, 17)
};

static TAB_NUM t_lambda_VALUED_OPTION[] = {
  0, // locals
  0, // parameters
  // results(option_idx) argument
  var_315_1_results, 2, var_397_1_option_idx, var_399_3_argument, 1, var_315_1_results,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(413, 22),
  POS(414, 21)
};

static TAB_NUM t_lambda_MULTI_VALUED_OPTION[] = {
  1, // locals
  0, // parameters
  // results(option_idx) argument
  var_315_1_results, 1, var_397_1_option_idx, 1, LOCAL(1),
  // push &results(option_idx) argument
  var_push, 2, LOCAL(1), var_399_3_argument, 1, LOCAL(1),
  // results(option_idx) argument
  var_315_1_results, 2, var_397_1_option_idx, LOCAL(1), 1, var_315_1_results,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(416, 27),
  POS(416, 21),
  POS(416, 27),
  POS(417, 21)
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(419, 21)
};

static TAB_NUM t_lambda_45[] = {
  1, // locals
  0, // parameters
  // argument .has_prefix. "--":
  var_has_prefix, 2, var_399_3_argument, string_4, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_46, lambda_50, IO_TAIL_CALL,
  POS(422, 19),
  POS(421, 17)
};

static TAB_NUM t_lambda_46[] = {
  1, // locals
  0, // parameters
  // range(argument 3 -1))
  var_range, 3, var_399_3_argument, num_3, minus_num_1, 1, LOCAL(1),
  // !option_idx options(range(argument 3 -1))
  var_316_1_options, 1, LOCAL(1), 1, var_397_1_option_idx,
  // is_undefined:
  var_is_undefined, 1, var_397_1_option_idx, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_option_idx_is_undefined, lambda_47, IO_TAIL_CALL,
  POS(423, 41),
  POS(423, 21),
  POS(425, 34),
  POS(424, 21)
};

static TAB_NUM t_lambda_option_idx_is_undefined[] = {
  1, // locals
  0, // parameters
  // "Invalid option: @(argument)!"
  var_std__string, 3, str_Invalid_option, var_399_3_argument, string_5, 1, LOCAL(1),
  // Error! "Invalid option: @(argument)!"
  var_Error, 1, LOCAL(1), IO_TAIL_CALL,
  POS(426, 32),
  POS(426, 25)
};

static TAB_NUM t_lambda_47[] = {
  2, // locals
  0, // parameters
  // kinds(option_idx) == BOOLEAN_OPTION:
  var_319_1_kinds, 1, var_397_1_option_idx, 1, LOCAL(1),
  // kinds(option_idx) == BOOLEAN_OPTION:
  var_std__equal, 2, LOCAL(1), uni_BOOLEAN_OPTION, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_48, lambda_49, IO_TAIL_CALL,
  POS(429, 27),
  POS(429, 27),
  POS(428, 25)
};

static TAB_NUM t_lambda_48[] = {
  4, // locals
  0, // parameters
  // results(option_idx) true
  var_315_1_results, 2, var_397_1_option_idx, var_true, 1, var_315_1_results,
  // idx-1) range(arguments idx+1 -1))
  var_std__minus, 2, var_395_1_idx, num_1, 1, LOCAL(1),
  // range(arguments 1 idx-1) range(arguments idx+1 -1))
  var_range, 3, var_314_19_arguments, num_1, LOCAL(1), 1, LOCAL(2),
  // idx+1 -1))
  var_std__plus, 2, var_395_1_idx, num_1, 1, LOCAL(3),
  // range(arguments idx+1 -1))
  var_range, 3, var_314_19_arguments, LOCAL(3), minus_num_1, 1, LOCAL(4),
  // !arguments
  var_append, 2, LOCAL(2), LOCAL(4), 1, var_314_19_arguments,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(430, 30),
  POS(432, 56),
  POS(432, 38),
  POS(432, 79),
  POS(432, 63),
  POS(431, 29),
  POS(433, 29)
};

static TAB_NUM t_lambda_49[] = {
  4, // locals
  0, // parameters
  // !do_fetch_option_value true
  LET, 1, var_true, 1, var_396_1_do_fetch_option_value,
  // idx-1) range(arguments idx+1 -1))
  var_std__minus, 2, var_395_1_idx, num_1, 1, LOCAL(1),
  // range(arguments 1 idx-1) range(arguments idx+1 -1))
  var_range, 3, var_314_19_arguments, num_1, LOCAL(1), 1, LOCAL(2),
  // idx+1 -1))
  var_std__plus, 2, var_395_1_idx, num_1, 1, LOCAL(3),
  // range(arguments idx+1 -1))
  var_range, 3, var_314_19_arguments, LOCAL(3), minus_num_1, 1, LOCAL(4),
  // !arguments
  var_append, 2, LOCAL(2), LOCAL(4), 1, var_314_19_arguments,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(435, 29),
  POS(437, 56),
  POS(437, 38),
  POS(437, 79),
  POS(437, 63),
  POS(436, 29),
  POS(438, 29)
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  // inc &idx
  var_inc, 1, var_395_1_idx, 1, var_395_1_idx,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(440, 21),
  POS(441, 21)
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  // evaluate_arguments!
  func_evaluate_arguments, 0, IO_TAIL_CALL,
  POS(443, 9)
};

static TAB_NUM t_func_evaluate_arguments[] = {
  0, // locals
  0, // parameters
  // $last_idx length_of(templates)
  var_length_of, 1, var_314_29_templates, 1, var_446_1_last_idx,
  // from_to_by last_idx 1 -1
  var_from_to_by, 5, var_446_1_last_idx, num_1, minus_num_1, lambda_52, lambda_57, IO_TAIL_CALL,
  POS(446, 5),
  POS(447, 5)
};

static TAB_NUM t_lambda_52[] = {
  2, // locals
  1, // parameters
  var_448_3_idx,
  // templates(idx)
  var_314_29_templates, 1, var_448_3_idx, 1, LOCAL(1),
  // extract_from_template templates(idx)
  func_extract_from_template, 1, LOCAL(1), 5, var_450_1_option, LOCAL(2), LOCAL(2), LOCAL(2), LOCAL(2),
  // is_a_key_value_pair &option -> key_of(option)
  var_is_a_key_value_pair, 1, var_450_1_option, 1, LOCAL(1),
  // update_if option.is_a_key_value_pair &option -> key_of(option)
  var_update_if, 3, LOCAL(1), var_450_1_option, lambda_53, 1, var_450_1_option,
  // OPTIONAL_PARAMETER, SOME_PARAMETERS, MANY_PARAMETERS:
  var_std__sequence, 3, var_OPTIONAL_PARAMETER, var_SOME_PARAMETERS, var_MANY_PARAMETERS, 1, LOCAL(1),
  // case option
  var_case, 6, var_450_1_option, var_MANDATORY_PARAMETER, lambda_MANDATORY_PARAMETER, LOCAL(1), lambda_55, lambda_56, IO_TAIL_CALL,
  POS(449, 31),
  POS(449, 9),
  POS(451, 26),
  POS(451, 9),
  POS(461, 11),
  POS(452, 9)
};

static TAB_NUM t_lambda_53[] = {
  1, // locals
  0, // parameters
  // key_of(option)
  var_key_of, 1, var_450_1_option, 1, LOCAL(1),
  //  key_of(option)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(451, 57),
  POS(451, 56)
};

static TAB_NUM t_lambda_MANDATORY_PARAMETER[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_314_19_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_too_few_arguments_error, lambda_54, IO_TAIL_CALL,
  POS(455, 25),
  POS(454, 13)
};

static TAB_NUM t_lambda_54[] = {
  1, // locals
  0, // parameters
  // pop &arguments !results(idx)
  var_pop, 1, var_314_19_arguments, 2, var_314_19_arguments, LOCAL(1),
  // results(idx)
  var_315_1_results, 2, var_448_3_idx, LOCAL(1), 1, var_315_1_results,
  // !last_idx idx-1
  var_std__minus, 2, var_448_3_idx, num_1, 1, var_446_1_last_idx,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(458, 17),
  POS(458, 33),
  POS(459, 17),
  POS(460, 17)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(462, 13)
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(464, 13)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  // from_to 1 last_idx
  var_from_to, 4, num_1, var_446_1_last_idx, lambda_58, lambda_66, IO_TAIL_CALL,
  POS(466, 9)
};

static TAB_NUM t_lambda_58[] = {
  2, // locals
  1, // parameters
  var_467_3_idx,
  // templates(idx)
  var_314_29_templates, 1, var_467_3_idx, 1, LOCAL(1),
  // extract_from_template templates(idx)
  func_extract_from_template, 1, LOCAL(1), 5, var_469_1_option, LOCAL(2), LOCAL(2), LOCAL(2), LOCAL(2),
  // is_a_key_value_pair &option -> key_of(option)
  var_is_a_key_value_pair, 1, var_469_1_option, 1, LOCAL(1),
  // update_if option.is_a_key_value_pair &option -> key_of(option)
  var_update_if, 3, LOCAL(1), var_469_1_option, lambda_59, 1, var_469_1_option,
  // case option
  var_case, 10, var_469_1_option, var_MANDATORY_PARAMETER, lambda_2_MANDATORY_PARAMETER, var_OPTIONAL_PARAMETER, lambda_OPTIONAL_PARAMETER, var_SOME_PARAMETERS, lambda_SOME_PARAMETERS, var_MANY_PARAMETERS, lambda_MANY_PARAMETERS, lambda_65, IO_TAIL_CALL,
  POS(468, 35),
  POS(468, 13),
  POS(470, 30),
  POS(470, 13),
  POS(471, 13)
};

static TAB_NUM t_lambda_59[] = {
  1, // locals
  0, // parameters
  // key_of(option)
  var_key_of, 1, var_469_1_option, 1, LOCAL(1),
  //  key_of(option)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(470, 61),
  POS(470, 60)
};

static TAB_NUM t_lambda_2_MANDATORY_PARAMETER[] = {
  2, // locals
  0, // parameters
  // length_of(arguments) == 0:
  var_length_of, 1, var_314_19_arguments, 1, LOCAL(1),
  // length_of(arguments) == 0:
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_60, lambda_61, IO_TAIL_CALL,
  POS(474, 19),
  POS(474, 19),
  POS(473, 17)
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  0, // parameters
  // too_few_arguments_error!
  func_too_few_arguments_error, 0, IO_TAIL_CALL,
  POS(475, 21)
};

static TAB_NUM t_lambda_61[] = {
  1, // locals
  0, // parameters
  // get &arguments !results(idx)
  var_get, 1, var_314_19_arguments, 2, var_314_19_arguments, LOCAL(1),
  // results(idx)
  var_315_1_results, 2, var_467_3_idx, LOCAL(1), 1, var_315_1_results,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(477, 21),
  POS(477, 37),
  POS(478, 21)
};

static TAB_NUM t_lambda_OPTIONAL_PARAMETER[] = {
  2, // locals
  0, // parameters
  // length_of(arguments) > 0:
  var_length_of, 1, var_314_19_arguments, 1, LOCAL(1),
  // 0:
  var_std__less, 2, num_0, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_62, var_next, IO_TAIL_CALL,
  POS(481, 19),
  POS(481, 42),
  POS(480, 17)
};

static TAB_NUM t_lambda_62[] = {
  1, // locals
  0, // parameters
  // get &arguments !results(idx)
  var_get, 1, var_314_19_arguments, 2, var_314_19_arguments, LOCAL(1),
  // results(idx)
  var_315_1_results, 2, var_467_3_idx, LOCAL(1), 1, var_315_1_results,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(482, 21),
  POS(482, 37),
  POS(483, 21)
};

static TAB_NUM t_lambda_SOME_PARAMETERS[] = {
  0, // locals
  0, // parameters
  // results(idx) arguments
  var_315_1_results, 2, var_467_3_idx, var_314_19_arguments, 1, var_315_1_results,
  // !arguments empty_list
  LET, 1, var_empty_list, 1, var_314_19_arguments,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(486, 18),
  POS(487, 17),
  POS(488, 17)
};

static TAB_NUM t_lambda_MANY_PARAMETERS[] = {
  2, // locals
  0, // parameters
  // length_of(arguments) == 0:
  var_length_of, 1, var_314_19_arguments, 1, LOCAL(1),
  // length_of(arguments) == 0:
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_63, lambda_64, IO_TAIL_CALL,
  POS(491, 19),
  POS(491, 19),
  POS(490, 17)
};

static TAB_NUM t_lambda_63[] = {
  0, // locals
  0, // parameters
  // too_few_arguments_error!
  func_too_few_arguments_error, 0, IO_TAIL_CALL,
  POS(492, 21)
};

static TAB_NUM t_lambda_64[] = {
  0, // locals
  0, // parameters
  // results(idx) arguments
  var_315_1_results, 2, var_467_3_idx, var_314_19_arguments, 1, var_315_1_results,
  // !arguments empty_list
  LET, 1, var_empty_list, 1, var_314_19_arguments,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(494, 22),
  POS(495, 21),
  POS(496, 21)
};

static TAB_NUM t_lambda_65[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(498, 17)
};

static TAB_NUM t_lambda_66[] = {
  0, // locals
  0, // parameters
  // check_results!
  func_check_results, 0, IO_TAIL_CALL,
  POS(500, 13)
};

static TAB_NUM t_func_check_results[] = {
  1, // locals
  0, // parameters
  // is_not_empty:
  var_is_not_empty, 1, var_314_19_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_arguments_is_not_empty, lambda_67, IO_TAIL_CALL,
  POS(504, 17),
  POS(503, 5)
};

static TAB_NUM t_lambda_arguments_is_not_empty[] = {
  0, // locals
  0, // parameters
  // too_many_arguments_error!
  func_too_many_arguments_error, 0, IO_TAIL_CALL,
  POS(505, 9)
};

static TAB_NUM t_lambda_67[] = {
  0, // locals
  0, // parameters
  // for_each results
  var_for_each, 3, var_315_1_results, lambda_68, lambda_80, IO_TAIL_CALL,
  POS(507, 9)
};

static TAB_NUM t_lambda_68[] = {
  2, // locals
  2, // parameters
  var_508_3_idx,
  var_508_7_result,
  // is_undefined && default_values(idx).is_defined:
  var_is_undefined, 1, var_508_7_result, 1, LOCAL(1),
  // is_undefined && default_values(idx).is_defined:
  var_std__and, 2, LOCAL(1), lambda_69, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_70, lambda_71, IO_TAIL_CALL,
  POS(510, 22),
  POS(510, 22),
  POS(509, 13)
};

static TAB_NUM t_lambda_69[] = {
  2, // locals
  0, // parameters
  // default_values(idx).is_defined:
  var_321_1_default_values, 1, var_508_3_idx, 1, LOCAL(1),
  // is_defined:
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // default_values(idx).is_defined:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(510, 38),
  POS(510, 58),
  POS(510, 38)
};

static TAB_NUM t_lambda_70[] = {
  2, // locals
  0, // parameters
  // !results(idx) default_values(idx)
  var_321_1_default_values, 1, var_508_3_idx, 1, LOCAL(2),
  // results(idx) default_values(idx)
  var_315_1_results, 2, var_508_3_idx, LOCAL(2), 1, var_315_1_results,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(511, 17),
  POS(511, 18),
  POS(512, 17)
};

static TAB_NUM t_lambda_71[] = {
  1, // locals
  0, // parameters
  // $possible_value possible_values(idx)
  var_320_1_possible_values, 1, var_508_3_idx, 1, var_514_1_possible_value,
  // is_defined:
  var_is_defined, 1, var_514_1_possible_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_possible_value_is_defined, lambda_74, IO_TAIL_CALL,
  POS(514, 17),
  POS(516, 34),
  POS(515, 17)
};

static TAB_NUM t_lambda_possible_value_is_defined[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_508_7_result, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_result_is_a_list, lambda_73, IO_TAIL_CALL,
  POS(518, 30),
  POS(517, 21)
};

static TAB_NUM t_lambda_result_is_a_list[] = {
  0, // locals
  0, // parameters
  // for_each result: (item) check item
  var_for_each, 2, var_508_7_result, lambda_72, TAIL_CALL,
  POS(519, 25)
};

static TAB_NUM t_lambda_72[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 519_18_item
  // check item
  func_check, 1, LOCAL(1), TAIL_CALL,
  POS(519, 49)
};

static TAB_NUM t_lambda_73[] = {
  2, // locals
  0, // parameters
  // check! result
  func_check, 1, var_508_7_result, IO_CALL(0),
  // !results(idx) convert(result)
  func_convert, 1, var_508_7_result, 1, LOCAL(2),
  // results(idx) convert(result)
  var_315_1_results, 2, var_508_3_idx, LOCAL(2), 1, var_315_1_results,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(521, 25),
  POS(522, 25),
  POS(522, 26),
  POS(523, 25)
};

static TAB_NUM t_lambda_74[] = {
  2, // locals
  0, // parameters
  // !results(idx) convert(result)
  func_convert, 1, var_508_7_result, 1, LOCAL(2),
  // results(idx) convert(result)
  var_315_1_results, 2, var_508_3_idx, LOCAL(2), 1, var_315_1_results,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(525, 21),
  POS(525, 22),
  POS(526, 21)
};

static TAB_NUM t_func_check[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 528_9_value
  // possible_value(value)
  var_514_1_possible_value, 1, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_pass, lambda_75, IO_TAIL_CALL,
  POS(530, 21),
  POS(529, 19)
};

static TAB_NUM t_lambda_75[] = {
  3, // locals
  0, // parameters
  // names(idx).to_upper_case)!@nl;"
  var_318_1_names, 1, var_508_3_idx, 1, LOCAL(1),
  // to_upper_case)!@nl;"
  var_to_upper_case, 1, LOCAL(1), 1, LOCAL(2),
  // "Invalid argument value for @(names(idx).to_upper_case)!@nl;"
  var_std__string, 3, str_Invalid_argument, LOCAL(2), string_6, 1, LOCAL(3),
  // eprintln!
  var_eprintln, 1, LOCAL(3), IO_CALL(0),
  // show_usage!
  func_show_usage, 0, IO_CALL(0),
  // exit! 1
  var_exit, 1, num_1, IO_TAIL_CALL,
  POS(534, 55),
  POS(534, 66),
  POS(534, 25),
  POS(533, 23),
  POS(535, 23),
  POS(536, 23)
};

static TAB_NUM t_func_convert[] = {
  1, // locals
  1, // parameters
  var_538_11_value,
  // $conversion conversions(idx)
  var_322_1_conversions, 1, var_508_3_idx, 1, var_539_1_conversion,
  // is_undefined
  var_is_undefined, 1, var_539_1_conversion, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_76, lambda_77, TAIL_CALL,
  POS(539, 19),
  POS(541, 32),
  POS(540, 19)
};

static TAB_NUM t_lambda_76[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_538_11_value, TAIL_CALL,
  POS(542, 23)
};

static TAB_NUM t_lambda_77[] = {
  1, // locals
  0, // parameters
  // is_a_string
  var_is_a_string, 1, var_538_11_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_78, lambda_79, TAIL_CALL,
  POS(545, 31),
  POS(544, 23)
};

static TAB_NUM t_lambda_78[] = {
  1, // locals
  0, // parameters
  // conversion(value)
  var_539_1_conversion, 1, var_538_11_value, 1, LOCAL(1),
  //  conversion(value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(546, 28),
  POS(546, 27)
};

static TAB_NUM t_lambda_79[] = {
  1, // locals
  0, // parameters
  // map(value conversion)
  var_map, 2, var_538_11_value, var_539_1_conversion, 1, LOCAL(1),
  //  map(value conversion)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(547, 28),
  POS(547, 27)
};

static TAB_NUM t_lambda_80[] = {
  0, // locals
  0, // parameters
  // spread results
  var_spread, 1, var_315_1_results, TAIL_CALL,
  POS(549, 13)
};

static TAB_NUM t_func_help_message[] = {
  1, // locals
  1, // parameters
  var_551_16_idx,
  // $message help_messages(idx)
  var_323_1_help_messages, 1, var_551_16_idx, 1, var_552_1_message,
  // $possible_value possible_values(idx)
  var_320_1_possible_values, 1, var_551_16_idx, 1, var_553_1_possible_value,
  // is_defined:
  var_is_defined, 1, var_553_1_possible_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_possible_value_is_defined, func_handle_default_value, TAIL_CALL,
  POS(552, 5),
  POS(553, 5),
  POS(555, 22),
  POS(554, 5)
};

static TAB_NUM t_lambda_2_possible_value_is_defined[] = {
  0, // locals
  0, // parameters
  // append &message "valid values:"
  var_append, 2, var_552_1_message, str_valid_values, 1, var_552_1_message,
  // for_each possible_value
  var_for_each, 3, var_553_1_possible_value, lambda_81, lambda_82, TAIL_CALL,
  POS(556, 9),
  POS(557, 9)
};

static TAB_NUM t_lambda_81[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 558_3_value
  // string(' ' value ',')
  var_string, 3, chr_32, LOCAL(2), chr_44, 1, LOCAL(1),
  // append &message string(' ' value ',')
  var_append, 2, var_552_1_message, LOCAL(1), 1, var_552_1_message,
  // next
  var_next, 0, TAIL_CALL,
  POS(559, 29),
  POS(559, 13),
  POS(560, 13)
};

static TAB_NUM t_lambda_82[] = {
  0, // locals
  0, // parameters
  // message(-1) '@nl;'
  var_552_1_message, 2, minus_num_1, chr_10, 1, var_552_1_message,
  // handle_default_value
  func_handle_default_value, 0, TAIL_CALL,
  POS(562, 14),
  POS(563, 13)
};

static TAB_NUM t_func_handle_default_value[] = {
  1, // locals
  0, // parameters
  // $default_value default_values(idx)
  var_321_1_default_values, 1, var_551_16_idx, 1, var_567_1_default_value,
  // is_defined:
  var_is_defined, 1, var_567_1_default_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_default_value_is_defined, lambda_83, TAIL_CALL,
  POS(567, 7),
  POS(569, 23),
  POS(568, 7)
};

static TAB_NUM t_lambda_default_value_is_defined[] = {
  1, // locals
  0, // parameters
  // message(-1) ' '
  var_552_1_message, 2, minus_num_1, chr_32, 1, var_552_1_message,
  // "(default value: @(default_value))"
  var_std__string, 3, str_default_value, var_567_1_default_value, string_7, 1, LOCAL(1),
  // append message "(default value: @(default_value))"
  var_append, 2, var_552_1_message, LOCAL(1), TAIL_CALL,
  POS(570, 12),
  POS(571, 26),
  POS(571, 11)
};

static TAB_NUM t_lambda_83[] = {
  0, // locals
  0, // parameters
  //  message
  LET, 1, var_552_1_message, TAIL_CALL,
  POS(572, 11)
};

static TAB_NUM t_func_show_usage[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_327_53_version, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_85, var_pass, IO_CALL(0),
  // eprintln! "Usage:"
  var_eprintln, 1, str_Usage, IO_CALL(0),
  // is_defined:
  var_is_defined, 1, var_327_42_copyright, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_copyright_is_defined, var_pass, IO_CALL(0),
  // eprintln! "  " command_name " --help"
  var_eprintln, 3, string_1, var_324_1_command_name, str__help, IO_CALL(0),
  // eprint! "  " command_name
  var_eprint, 2, string_1, var_324_1_command_name, IO_CALL(0),
  // for_each parameters
  var_for_each, 3, var_317_1_parameters, lambda_86, lambda_87, IO_CALL(0),
  // eprint! "
  var_eprint, 1, str_Parameters, IO_CALL(0),
  // do:
  var_do, 1, lambda_do, IO_CALL(0),
  // is_empty
  var_is_empty, 1, var_316_1_options, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_pass, lambda_90, IO_TAIL_CALL,
  POS(587, 15),
  POS(586, 5),
  POS(591, 5),
  POS(593, 17),
  POS(592, 5),
  POS(596, 5),
  POS(597, 5),
  POS(598, 5),
  POS(604, 5),
  POS(607, 5),
  POS(616, 15),
  POS(615, 5)
};

static TAB_NUM t_func_parameter_name[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 575_18_parameter
  LOCAL(3), // 575_28_idx
  // $buf parameter.to_upper_case
  var_to_upper_case, 1, LOCAL(2), 1, var_576_1_buf,
  // kinds(idx)
  var_319_1_kinds, 1, LOCAL(3), 1, LOCAL(1),
  // case kinds(idx)
  var_case, 8, LOCAL(1), var_OPTIONAL_PARAMETER, lambda_2_OPTIONAL_PARAMETER, var_SOME_PARAMETERS, lambda_2_SOME_PARAMETERS, var_MANY_PARAMETERS, lambda_2_MANY_PARAMETERS, lambda_84, TAIL_CALL,
  POS(576, 7),
  POS(577, 12),
  POS(577, 7)
};

static TAB_NUM t_lambda_2_OPTIONAL_PARAMETER[] = {
  0, // locals
  0, // parameters
  // push buf '?'
  var_push, 2, var_576_1_buf, chr_63, TAIL_CALL,
  POS(579, 11)
};

static TAB_NUM t_lambda_2_SOME_PARAMETERS[] = {
  0, // locals
  0, // parameters
  // push buf '*'
  var_push, 2, var_576_1_buf, chr_42, TAIL_CALL,
  POS(581, 11)
};

static TAB_NUM t_lambda_2_MANY_PARAMETERS[] = {
  0, // locals
  0, // parameters
  // push buf '+'
  var_push, 2, var_576_1_buf, chr_43, TAIL_CALL,
  POS(583, 11)
};

static TAB_NUM t_lambda_84[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_576_1_buf, TAIL_CALL,
  POS(584, 11)
};

static TAB_NUM t_lambda_85[] = {
  0, // locals
  0, // parameters
  // show_version!
  func_show_version, 0, IO_TAIL_CALL,
  POS(589, 9)
};

static TAB_NUM t_lambda_copyright_is_defined[] = {
  0, // locals
  0, // parameters
  // eprintln! "  " command_name " --copyright"
  var_eprintln, 3, string_1, var_324_1_command_name, str__copyright, IO_TAIL_CALL,
  POS(594, 9)
};

static TAB_NUM t_lambda_86[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 599_3_parameter
  LOCAL(3), // 599_13_idx
  // parameter_name(parameter idx)
  func_parameter_name, 2, LOCAL(2), LOCAL(3), 1, LOCAL(1),
  // eprint! " " parameter_name(parameter idx)
  var_eprint, 2, string_3, LOCAL(1), IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(600, 21),
  POS(600, 9),
  POS(601, 9)
};

static TAB_NUM t_lambda_87[] = {
  0, // locals
  0, // parameters
  // eprintln!
  var_eprintln, 0, IO_TAIL_CALL,
  POS(603, 9)
};

static TAB_NUM t_lambda_do[] = {
  0, // locals
  0, // parameters
  // $table empty_list
  LET, 1, var_empty_list, 1, var_608_1_table,
  // for_each parameters
  var_for_each, 3, var_317_1_parameters, lambda_88, lambda_89, IO_TAIL_CALL,
  POS(608, 7),
  POS(609, 7)
};

static TAB_NUM t_lambda_88[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 610_3_parameter
  LOCAL(5), // 610_13_idx
  // parameter_name(parameter idx) help_message(idx))
  func_parameter_name, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // help_message(idx))
  func_help_message, 1, LOCAL(5), 1, LOCAL(2),
  // list(parameter_name(parameter idx) help_message(idx))
  var_list, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // push &table list(parameter_name(parameter idx) help_message(idx))
  var_push, 2, var_608_1_table, LOCAL(3), 1, var_608_1_table,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(611, 28),
  POS(611, 58),
  POS(611, 23),
  POS(611, 11),
  POS(612, 11)
};

static TAB_NUM t_lambda_89[] = {
  0, // locals
  0, // parameters
  // display_table! table
  func_display_table, 1, var_608_1_table, IO_TAIL_CALL,
  POS(614, 11)
};

static TAB_NUM t_lambda_90[] = {
  0, // locals
  0, // parameters
  // eprint! "
  var_eprint, 1, str_Options, IO_CALL(0),
  // $table empty_list
  LET, 1, var_empty_list, 1, var_622_1_table,
  // for_each options
  var_for_each, 3, var_316_1_options, lambda_91, lambda_93, IO_TAIL_CALL,
  POS(619, 9),
  POS(622, 9),
  POS(623, 9)
};

static TAB_NUM t_lambda_91[] = {
  3, // locals
  2, // parameters
  var_624_3_option,
  var_624_10_idx,
  // option_name() help_message(idx))
  func_option_name, 0, 1, LOCAL(1),
  // help_message(idx))
  func_help_message, 1, var_624_10_idx, 1, LOCAL(2),
  // list(option_name() help_message(idx))
  var_list, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // push &table list(option_name() help_message(idx))
  var_push, 2, var_622_1_table, LOCAL(3), 1, var_622_1_table,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(625, 30),
  POS(625, 44),
  POS(625, 25),
  POS(625, 13),
  POS(626, 13)
};

static TAB_NUM t_func_option_name[] = {
  1, // locals
  0, // parameters
  // $buf string("--" option)
  var_string, 2, string_4, var_624_3_option, 1, var_629_1_buf,
  // kinds(idx)
  var_319_1_kinds, 1, var_624_10_idx, 1, LOCAL(1),
  // case kinds(idx)
  var_case, 6, LOCAL(1), var_VALUED_OPTION, lambda_2_VALUED_OPTION, var_MULTI_VALUED_OPTION, lambda_2_MULTI_VALUED_OPTION, lambda_92, TAIL_CALL,
  POS(629, 15),
  POS(630, 20),
  POS(630, 15)
};

static TAB_NUM t_lambda_2_VALUED_OPTION[] = {
  0, // locals
  0, // parameters
  // append buf " VALUE"
  var_append, 2, var_629_1_buf, str__VALUE, TAIL_CALL,
  POS(632, 19)
};

static TAB_NUM t_lambda_2_MULTI_VALUED_OPTION[] = {
  0, // locals
  0, // parameters
  // append buf " VALUES"
  var_append, 2, var_629_1_buf, str__VALUES, TAIL_CALL,
  POS(634, 19)
};

static TAB_NUM t_lambda_92[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_629_1_buf, TAIL_CALL,
  POS(635, 19)
};

static TAB_NUM t_lambda_93[] = {
  0, // locals
  0, // parameters
  // display_table! table
  func_display_table, 1, var_622_1_table, IO_TAIL_CALL,
  POS(637, 13)
};

static TAB_NUM t_func_show_version[] = {
  1, // locals
  0, // parameters
  // "@(command_name) @(version)@nl;"
  var_std__string, 4, var_324_1_command_name, string_3, var_327_53_version, string_8, 1, LOCAL(1),
  // eprint! "@(command_name) @(version)@nl;"
  var_eprint, 1, LOCAL(1), IO_TAIL_CALL,
  POS(640, 13),
  POS(640, 5)
};

static TAB_NUM t_func_show_copyright[] = {
  0, // locals
  0, // parameters
  // eprint! copyright
  var_eprint, 1, var_327_42_copyright, IO_TAIL_CALL,
  POS(643, 5)
};

static TAB_NUM t_func_too_few_arguments_error[] = {
  0, // locals
  0, // parameters
  // eprintln! "
  var_eprintln, 1, str_Too_few_argument, IO_CALL(0),
  // show_usage!
  func_show_usage, 0, IO_CALL(0),
  // exit! 1
  var_exit, 1, num_1, IO_TAIL_CALL,
  POS(646, 5),
  POS(648, 5),
  POS(649, 5)
};

static TAB_NUM t_func_too_many_arguments_error[] = {
  0, // locals
  0, // parameters
  // eprintln! "
  var_eprintln, 1, str_Too_many_argumen, IO_CALL(0),
  // show_usage!
  func_show_usage, 0, IO_CALL(0),
  // exit! 1
  var_exit, 1, num_1, IO_TAIL_CALL,
  POS(652, 5),
  POS(654, 5),
  POS(655, 5)
};

static TAB_NUM t_func_extract_copyright_and_version[] = {
  0, // locals
  1, // parameters
  var_657_33_templates,
  // $copyright undefined
  LET, 1, var_undefined, 1, var_658_1_copyright,
  // $version undefined
  LET, 1, var_undefined, 1, var_659_1_version,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(658, 3),
  POS(659, 3),
  POS(660, 3)
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_657_33_templates, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_94, lambda_95, TAIL_CALL,
  POS(662, 17),
  POS(661, 5)
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  //  templates copyright version
  LET, 3, var_657_33_templates, var_658_1_copyright, var_659_1_version, TAIL_CALL,
  POS(663, 9)
};

static TAB_NUM t_lambda_95[] = {
  2, // locals
  0, // parameters
  // templates(1)
  var_657_33_templates, 1, num_1, 1, LOCAL(1),
  // extract_from_template templates(1)
  func_extract_from_template, 1, LOCAL(1), 5, var_666_1_option, LOCAL(2), LOCAL(2), LOCAL(2), var_666_45_message,
  // cond
  var_cond, 3, lambda_96, lambda_98, lambda_100, TAIL_CALL,
  POS(665, 31),
  POS(665, 9),
  POS(667, 9)
};

static TAB_NUM t_lambda_96[] = {
  1, // locals
  0, // parameters
  // option == COPYRIGHT:
  var_std__equal, 2, var_666_1_option, var_COPYRIGHT, 1, LOCAL(1),
  //  option == COPYRIGHT:
  LET, 2, LOCAL(1), lambda_97, TAIL_CALL,
  POS(668, 14),
  POS(668, 13)
};

static TAB_NUM t_lambda_97[] = {
  0, // locals
  0, // parameters
  // !copyright message
  LET, 1, var_666_45_message, 1, var_658_1_copyright,
  // range &templates 2 -1
  var_range, 3, var_657_33_templates, num_2, minus_num_1, 1, var_657_33_templates,
  // next
  var_next, 0, TAIL_CALL,
  POS(669, 13),
  POS(670, 13),
  POS(671, 13)
};

static TAB_NUM t_lambda_98[] = {
  1, // locals
  0, // parameters
  // option == VERSION:
  var_std__equal, 2, var_666_1_option, var_VERSION, 1, LOCAL(1),
  //  option == VERSION:
  LET, 2, LOCAL(1), lambda_99, TAIL_CALL,
  POS(672, 14),
  POS(672, 13)
};

static TAB_NUM t_lambda_99[] = {
  0, // locals
  0, // parameters
  // !version message
  LET, 1, var_666_45_message, 1, var_659_1_version,
  // range &templates 2 -1
  var_range, 3, var_657_33_templates, num_2, minus_num_1, 1, var_657_33_templates,
  // next
  var_next, 0, TAIL_CALL,
  POS(673, 13),
  POS(674, 13),
  POS(675, 13)
};

static TAB_NUM t_lambda_100[] = {
  0, // locals
  0, // parameters
  //  true -> templates copyright version
  LET, 2, var_true, lambda_101, TAIL_CALL,
  POS(676, 13)
};

static TAB_NUM t_lambda_101[] = {
  0, // locals
  0, // parameters
  //  templates copyright version
  LET, 3, var_657_33_templates, var_658_1_copyright, var_659_1_version, TAIL_CALL,
  POS(676, 21)
};

static TAB_NUM t_func_extract_from_template[] = {
  7, // locals
  1, // parameters
  var_678_25_template,
  // $len length_of(template)
  var_length_of, 1, var_678_25_template, 1, var_679_1_len,
  // len < 2 || len > 5:
  var_std__less, 2, var_679_1_len, num_2, 1, LOCAL(1),
  // len < 2 || len > 5:
  var_std__or, 2, LOCAL(1), lambda_102, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_103, var_pass, IO_CALL(0),
  // $option template(1)
  var_678_25_template, 1, num_1, 1, LOCAL(3),
  // len >= 3
  var_std__less, 2, var_679_1_len, num_3, 1, LOCAL(1),
  // len >= 3
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // $name
  var_if, 3, LOCAL(2), lambda_104, lambda_105, 1, LOCAL(4),
  // len >= 4
  var_std__less, 2, var_679_1_len, num_4, 1, LOCAL(1),
  // len >= 4
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // $default_value
  var_if, 3, LOCAL(2), lambda_106, lambda_107, 1, LOCAL(5),
  // len >= 5
  var_std__less, 2, var_679_1_len, num_5, 1, LOCAL(1),
  // len >= 5
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // $conversion
  var_if, 3, LOCAL(2), lambda_108, lambda_109, 1, LOCAL(6),
  // $help template(-1)
  var_678_25_template, 1, minus_num_1, 1, LOCAL(7),
  // -> option name default_value conversion help
  LET, 5, LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), LOCAL(7), TAIL_CALL,
  POS(679, 3),
  POS(681, 5),
  POS(681, 5),
  POS(680, 3),
  POS(684, 3),
  POS(687, 7),
  POS(687, 7),
  POS(685, 3),
  POS(692, 7),
  POS(692, 7),
  POS(690, 3),
  POS(697, 7),
  POS(697, 7),
  POS(695, 3),
  POS(700, 3),
  POS(701, 3)
};

static TAB_NUM t_lambda_102[] = {
  1, // locals
  0, // parameters
  // 5:
  var_std__less, 2, num_5, var_679_1_len, 1, LOCAL(1),
  // len > 5:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(681, 22),
  POS(681, 16)
};

static TAB_NUM t_lambda_103[] = {
  0, // locals
  0, // parameters
  // Error! "malformed parameter template"
  var_Error, 1, str_malformed_parame, IO_TAIL_CALL,
  POS(682, 7)
};

static TAB_NUM t_lambda_104[] = {
  1, // locals
  0, // parameters
  // template(2)
  var_678_25_template, 1, num_2, 1, LOCAL(1),
  //  template(2)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(688, 10),
  POS(688, 9)
};

static TAB_NUM t_lambda_105[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(689, 9)
};

static TAB_NUM t_lambda_106[] = {
  1, // locals
  0, // parameters
  // template(3)
  var_678_25_template, 1, num_3, 1, LOCAL(1),
  //  template(3)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(693, 10),
  POS(693, 9)
};

static TAB_NUM t_lambda_107[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(694, 9)
};

static TAB_NUM t_lambda_108[] = {
  1, // locals
  0, // parameters
  // template(4)
  var_678_25_template, 1, num_4, 1, LOCAL(1),
  //  template(4)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(698, 10),
  POS(698, 9)
};

static TAB_NUM t_lambda_109[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(699, 9)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_UNIQUE, 0, {.str_8 = "BOOLEAN_OPTION"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::COPYRIGHT"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::VERSION"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::VALUED_OPTION"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::MULTI_VALUED_OPTION"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::MANDATORY_PARAMETER"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::OPTIONAL_PARAMETER"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::SOME_PARAMETERS"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::MANY_PARAMETERS"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__extract_options}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__program_parameters}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_display_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_STRING_8, 2, {.str_8 = "  "}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_STRING_8, 1, {.str_8 = " "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_arguments}},
  {FLT_CHARACTER, 0, {.value = 47}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_name_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_name_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_STRING_8, 6, {.str_8 = "--help"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_STRING_8, 11, {.str_8 = "--copyright"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_STRING_8, 9, {.str_8 = "--version"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_initialize_results}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_STRING_8, 2, {.str_8 = "--"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_fetch_option_value}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_VALUED_OPTION}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_MULTI_VALUED_OPTION}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_option_idx_is_undefined}},
  {FLT_STRING_8, 16, {.str_8 = "Invalid option: "}},
  {FLT_STRING_8, 1, {.str_8 = "!"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_evaluate_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_MANDATORY_PARAMETER}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_MANDATORY_PARAMETER}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_OPTIONAL_PARAMETER}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_SOME_PARAMETERS}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_MANY_PARAMETERS}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_results}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_arguments_is_not_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_possible_value_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_result_is_a_list}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_STRING_8, 27, {.str_8 = "Invalid argument value for "}},
  {FLT_STRING_8, 2, {.str_8 = "!\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_convert}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_help_message}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_possible_value_is_defined}},
  {FLT_STRING_8, 13, {.str_8 = "valid values:"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_CHARACTER, 0, {.value = 44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_default_value}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_default_value_is_defined}},
  {FLT_STRING_8, 16, {.str_8 = "(default value: "}},
  {FLT_STRING_8, 1, {.str_8 = ")"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_show_usage}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parameter_name}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_OPTIONAL_PARAMETER}},
  {FLT_CHARACTER, 0, {.value = 63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_SOME_PARAMETERS}},
  {FLT_CHARACTER, 0, {.value = 42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_MANY_PARAMETERS}},
  {FLT_CHARACTER, 0, {.value = 43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_STRING_8, 6, {.str_8 = "Usage:"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_copyright_is_defined}},
  {FLT_STRING_8, 12, {.str_8 = " --copyright"}},
  {FLT_STRING_8, 7, {.str_8 = " --help"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}},
  {FLT_STRING_8, 13, {.str_8 = "\012Parameters:\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_88}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_89}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_90}},
  {FLT_STRING_8, 10, {.str_8 = "\012Options:\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_91}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_option_name}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_VALUED_OPTION}},
  {FLT_STRING_8, 6, {.str_8 = " VALUE"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_MULTI_VALUED_OPTION}},
  {FLT_STRING_8, 7, {.str_8 = " VALUES"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_93}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_show_version}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_show_copyright}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_too_few_arguments_error}},
  {FLT_STRING_8, 19, {.str_8 = "Too few arguments!\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_too_many_arguments_error}},
  {FLT_STRING_8, 20, {.str_8 = "Too many arguments!\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_extract_copyright_and_version}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_94}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_95}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_96}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_97}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_98}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_99}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_100}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_101}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_extract_from_template}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_102}},
  {FLT_POSITIVE_INT64, 0, {.value = 5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_103}},
  {FLT_STRING_8, 28, {.str_8 = "malformed parameter template"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_104}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_105}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_106}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_107}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_108}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_109}}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(23, 1)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "COPYRIGHT\000std", NULL,
    {.const_idx = -uni_std__COPYRIGHT}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "VERSION\000std", NULL,
    {.const_idx = -uni_std__VERSION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "VALUED_OPTION\000std", NULL,
    {.const_idx = -uni_std__VALUED_OPTION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MULTI_VALUED_OPTION\000std", NULL,
    {.const_idx = -uni_std__MULTI_VALUED_OPTION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MANDATORY_PARAMETER\000std", NULL,
    {.const_idx = -uni_std__MANDATORY_PARAMETER}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "OPTIONAL_PARAMETER\000std", NULL,
    {.const_idx = -uni_std__OPTIONAL_PARAMETER}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SOME_PARAMETERS\000std", NULL,
    {.const_idx = -uni_std__SOME_PARAMETERS}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MANY_PARAMETERS\000std", NULL,
    {.const_idx = -uni_std__MANY_PARAMETERS}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "extract_options\000std", NULL,
    {.const_idx = -func_std__extract_options}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "212_0_options\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "215_1_results\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(215, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "218_10_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "218_16_result\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "221_13_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(223, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(225, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(226, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(222, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(228, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(219, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spread\000", NULL,
    {.position = POS(231, 7)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "program_parameters\000std", NULL,
    {.const_idx = -func_std__program_parameters}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "command_line_arguments\000", NULL,
    {.position = POS(291, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(297, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(298, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "294_1_first_column_width\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(295, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(300, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pad_right\000", NULL,
    {.position = POS(303, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprint\000", NULL,
    {.position = POS(303, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split\000", NULL,
    {.position = POS(304, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(309, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dup\000", NULL,
    {.position = POS(309, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprintln\000", NULL,
    {.position = POS(305, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(312, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "314_19_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "314_29_templates\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "315_1_results\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "316_1_options\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_key_order_table\000", NULL,
    {.position = POS(316, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "317_1_parameters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "318_1_names\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "319_1_kinds\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "320_1_possible_values\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "321_1_default_values\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "322_1_conversions\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "323_1_help_messages\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "program_name\000", NULL,
    {.position = POS(324, 32)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "324_1_command_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_until\000", NULL,
    {.position = POS(324, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_utf8\000", NULL,
    {.position = POS(325, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(325, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "327_42_copyright\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "327_53_version\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "330_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "332_1_option\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "332_9_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_key_value_pair\000", NULL,
    {.position = POS(335, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "value_of\000", NULL,
    {.position = POS(336, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(337, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_of\000", NULL,
    {.position = POS(338, 55)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(338, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(341, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(349, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(350, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "VALUED_OPTION\000", NULL,
    {.position = POS(354, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "MULTI_VALUED_OPTION\000", NULL,
    {.position = POS(358, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SOME_PARAMETERS\000", NULL,
    {.position = POS(362, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "MANY_PARAMETERS\000", NULL,
    {.position = POS(362, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(362, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(369, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(348, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(378, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(378, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "terminate\000", NULL,
    {.position = POS(382, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(383, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "395_1_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "396_1_do_fetch_option_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "397_1_option_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "399_3_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(403, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(403, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(403, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(411, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_prefix\000", NULL,
    {.position = POS(422, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(425, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(426, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "Error\000", NULL,
    {.position = POS(426, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(440, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "446_1_last_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "448_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "450_1_option\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "OPTIONAL_PARAMETER\000", NULL,
    {.position = POS(461, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(461, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "MANDATORY_PARAMETER\000", NULL,
    {.position = POS(453, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(455, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pop\000", NULL,
    {.position = POS(458, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "467_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "469_1_option\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get\000", NULL,
    {.position = POS(477, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to\000", NULL,
    {.position = POS(466, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to_by\000", NULL,
    {.position = POS(447, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(504, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "508_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "508_7_result\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "514_1_possible_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(518, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_upper_case\000", NULL,
    {.position = POS(534, 66)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exit\000", NULL,
    {.position = POS(536, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "538_11_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "539_1_conversion\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "551_16_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "552_1_message\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "553_1_possible_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(559, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "567_1_default_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "576_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "608_1_table\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(611, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "do\000", NULL,
    {.position = POS(607, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "622_1_table\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "624_3_option\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "624_10_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "629_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "657_33_templates\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "658_1_copyright\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "659_1_version\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "666_1_option\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "666_45_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "COPYRIGHT\000", NULL,
    {.position = POS(668, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "VERSION\000", NULL,
    {.position = POS(672, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(660, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "678_25_template\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "679_1_len\000", NULL
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__parameters = {
  "_basic__parameters", // module name
  "basic/parameters.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  201, // number of constants
  136, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
