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
  lambda_option_is_a_unique_item = -13,
  lambda_3 = -14,
  lambda_4 = -15,
  lambda_5 = -16,
  lambda_6 = -17,
  lambda_7 = -18,
  func_std__program_parameters = -19,
  func_display_table = -20,
  lambda_8 = -21,
  num_1 = -22,
  num_0 = -23,
  num_2 = -24,
  lambda_9 = -25,
  string_1 = -26,
  chr_10 = -27,
  lambda_10 = -28,
  lambda_11 = -29,
  string_2 = -30,
  lambda_12 = -31,
  string_3 = -32,
  func_check_arguments = -33,
  chr_47 = -34,
  minus_num_1 = -35,
  lambda_13 = -36,
  lambda_14 = -37,
  lambda_15 = -38,
  lambda_16 = -39,
  lambda_17 = -40,
  lambda_18 = -41,
  lambda_19 = -42,
  lambda_20 = -43,
  lambda_21 = -44,
  lambda_22 = -45,
  lambda_23 = -46,
  lambda_24 = -47,
  lambda_25 = -48,
  lambda_26 = -49,
  lambda_27 = -50,
  lambda_name_is_defined = -51,
  lambda_28 = -52,
  lambda_29 = -53,
  lambda_2_name_is_defined = -54,
  lambda_30 = -55,
  lambda_31 = -56,
  lambda_32 = -57,
  str_help = -58,
  lambda_33 = -59,
  lambda_34 = -60,
  lambda_35 = -61,
  str_copyright = -62,
  lambda_36 = -63,
  lambda_37 = -64,
  lambda_38 = -65,
  str_version = -66,
  lambda_39 = -67,
  lambda_40 = -68,
  lambda_41 = -69,
  lambda_42 = -70,
  func_initialize_results = -71,
  lambda_43 = -72,
  string_4 = -73,
  lambda_44 = -74,
  lambda_45 = -75,
  lambda_do_fetch_option_value = -76,
  lambda_VALUED_OPTION = -77,
  lambda_MULTI_VALUED_OPTION = -78,
  lambda_46 = -79,
  lambda_47 = -80,
  lambda_48 = -81,
  num_3 = -82,
  lambda_option_idx_is_undefined = -83,
  str_Invalid_option = -84,
  string_5 = -85,
  lambda_49 = -86,
  lambda_50 = -87,
  lambda_51 = -88,
  lambda_52 = -89,
  lambda_53 = -90,
  func_evaluate_arguments = -91,
  lambda_54 = -92,
  lambda_55 = -93,
  lambda_MANDATORY_PARAMETER = -94,
  lambda_56 = -95,
  lambda_57 = -96,
  lambda_58 = -97,
  lambda_59 = -98,
  lambda_60 = -99,
  lambda_61 = -100,
  lambda_2_MANDATORY_PARAMETER = -101,
  lambda_62 = -102,
  lambda_63 = -103,
  lambda_OPTIONAL_PARAMETER = -104,
  lambda_64 = -105,
  lambda_SOME_PARAMETERS = -106,
  lambda_MANY_PARAMETERS = -107,
  lambda_65 = -108,
  lambda_66 = -109,
  lambda_67 = -110,
  lambda_68 = -111,
  func_check_results = -112,
  lambda_arguments_is_not_empty = -113,
  lambda_69 = -114,
  lambda_70 = -115,
  lambda_71 = -116,
  lambda_72 = -117,
  lambda_73 = -118,
  lambda_possible_value_is_defined = -119,
  lambda_result_is_a_list = -120,
  lambda_74 = -121,
  lambda_75 = -122,
  lambda_76 = -123,
  func_check = -124,
  lambda_77 = -125,
  str_Invalid_argument = -126,
  string_6 = -127,
  func_convert = -128,
  lambda_78 = -129,
  lambda_79 = -130,
  lambda_80 = -131,
  lambda_81 = -132,
  lambda_82 = -133,
  func_help_message = -134,
  lambda_2_possible_value_is_defined = -135,
  str_valid_values = -136,
  lambda_83 = -137,
  chr_32 = -138,
  chr_44 = -139,
  lambda_84 = -140,
  func_handle_default_value = -141,
  lambda_default_value_is_defined = -142,
  str_default_value = -143,
  string_7 = -144,
  lambda_85 = -145,
  func_show_usage = -146,
  func_parameter_name = -147,
  lambda_2_OPTIONAL_PARAMETER = -148,
  chr_63 = -149,
  lambda_2_SOME_PARAMETERS = -150,
  chr_42 = -151,
  lambda_2_MANY_PARAMETERS = -152,
  chr_43 = -153,
  lambda_86 = -154,
  lambda_87 = -155,
  str_Usage = -156,
  lambda_copyright_is_defined = -157,
  str__copyright = -158,
  str__help = -159,
  lambda_88 = -160,
  lambda_89 = -161,
  str_Parameters = -162,
  lambda_do = -163,
  lambda_90 = -164,
  lambda_91 = -165,
  lambda_92 = -166,
  str_Options = -167,
  lambda_93 = -168,
  func_option_name = -169,
  lambda_2_VALUED_OPTION = -170,
  str__VALUE = -171,
  lambda_2_MULTI_VALUED_OPTION = -172,
  str__VALUES = -173,
  lambda_94 = -174,
  lambda_95 = -175,
  func_show_version = -176,
  string_8 = -177,
  func_show_copyright = -178,
  func_too_few_arguments_error = -179,
  str_Too_few_argument = -180,
  func_too_many_arguments_error = -181,
  str_Too_many_argumen = -182,
  func_extract_copyright_and_version = -183,
  lambda_loop = -184,
  lambda_96 = -185,
  lambda_97 = -186,
  lambda_98 = -187,
  lambda_99 = -188,
  lambda_100 = -189,
  lambda_101 = -190,
  lambda_102 = -191,
  lambda_103 = -192,
  func_extract_from_template = -193,
  lambda_104 = -194,
  num_5 = -195,
  lambda_105 = -196,
  str_malformed_parame = -197,
  lambda_106 = -198,
  lambda_107 = -199,
  num_4 = -200,
  lambda_108 = -201,
  lambda_109 = -202,
  lambda_110 = -203,
  lambda_111 = -204
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
  var_220_3_option, // dynamic
  var_is_a_unique_item, // extern
  var_std__equal, // extern
  var_true, // extern
  var_break, // extern
  var_next, // extern
  var_if, // extern
  var_229_13_value, // dynamic
  var_push, // extern
  var_for_each, // extern
  var_spread, // extern
  var_std__program_parameters, // initialized
  var_command_line_arguments, // extern
  var_length_of, // extern
  var_max, // extern
  var_302_1_first_column_width, // dynamic
  var_map_reduce, // extern
  var_plus, // extern
  var_pad_right, // extern
  var_eprint, // extern
  var_split, // extern
  var_std__plus, // extern
  var_dup, // extern
  var_eprintln, // extern
  var_pass, // extern
  var_322_19_arguments, // dynamic
  var_322_29_templates, // dynamic
  var_323_1_results, // dynamic
  var_324_1_options, // dynamic
  var_empty_key_order_table, // extern
  var_325_1_parameters, // dynamic
  var_326_1_names, // dynamic
  var_327_1_kinds, // dynamic
  var_328_1_possible_values, // dynamic
  var_329_1_default_values, // dynamic
  var_330_1_conversions, // dynamic
  var_331_1_help_messages, // dynamic
  var_program_name, // extern
  var_332_1_command_name, // dynamic
  var_truncate_until, // extern
  var_from_utf8, // extern
  var_map, // extern
  var_335_42_copyright, // dynamic
  var_335_53_version, // dynamic
  var_338_3_idx, // dynamic
  var_340_1_option, // dynamic
  var_340_9_name, // dynamic
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
  var_cond, // extern
  var_std__less, // extern
  var_std__not, // extern
  var_terminate, // extern
  var_std__and, // extern
  var_403_1_idx, // dynamic
  var_404_1_do_fetch_option_value, // dynamic
  var_405_1_option_idx, // dynamic
  var_407_3_argument, // dynamic
  var_std__minus, // extern
  var_range, // extern
  var_append, // extern
  var_case, // extern
  var_has_prefix, // extern
  var_is_undefined, // extern
  var_std__string, // extern
  var_Error, // extern
  var_inc, // extern
  var_454_1_last_idx, // dynamic
  var_456_3_idx, // dynamic
  var_458_1_option, // dynamic
  var_OPTIONAL_PARAMETER, // extern
  var_std__sequence, // extern
  var_MANDATORY_PARAMETER, // extern
  var_is_empty, // extern
  var_pop, // extern
  var_475_3_idx, // dynamic
  var_477_1_option, // dynamic
  var_get, // extern
  var_from_to, // extern
  var_from_to_by, // extern
  var_is_not_empty, // extern
  var_516_3_idx, // dynamic
  var_516_7_result, // dynamic
  var_522_1_possible_value, // dynamic
  var_is_a_list, // extern
  var_to_upper_case, // extern
  var_exit, // extern
  var_546_11_value, // dynamic
  var_547_1_conversion, // dynamic
  var_559_16_idx, // dynamic
  var_560_1_message, // dynamic
  var_561_1_possible_value, // dynamic
  var_string, // extern
  var_575_1_default_value, // dynamic
  var_584_1_buf, // dynamic
  var_616_1_table, // dynamic
  var_list, // extern
  var_do, // extern
  var_630_1_table, // dynamic
  var_632_3_option, // dynamic
  var_632_10_idx, // dynamic
  var_637_1_buf, // dynamic
  var_665_33_templates, // dynamic
  var_666_1_copyright, // dynamic
  var_667_1_version, // dynamic
  var_674_1_option, // dynamic
  var_674_45_message, // dynamic
  var_COPYRIGHT, // extern
  var_VERSION, // extern
  var_loop, // extern
  var_686_25_template, // dynamic
  var_687_1_len, // dynamic
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
  var_for_each, 3, LOCAL(1), lambda_1, lambda_7, TAIL_CALL,
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
  var_for_each, 3, var_212_0_options, lambda_2, lambda_6, TAIL_CALL,
  POS(218, 7),
  POS(219, 7)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  1, // parameters
  var_220_3_option,
  // is_a_unique_item:
  var_is_a_unique_item, 1, var_220_3_option, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_option_is_a_unique_item, lambda_4, TAIL_CALL,
  POS(222, 20),
  POS(221, 11)
};

static TAB_NUM t_lambda_option_is_a_unique_item[] = {
  1, // locals
  0, // parameters
  // option == name:
  var_std__equal, 2, var_220_3_option, var_218_10_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, var_next, TAIL_CALL,
  POS(224, 17),
  POS(223, 15)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  // !result true
  LET, 1, var_true, 1, var_218_16_result,
  // break
  var_break, 0, TAIL_CALL,
  POS(225, 19),
  POS(226, 19)
};

static TAB_NUM t_lambda_4[] = {
  2, // locals
  0, // parameters
  // option $key $value
  var_220_3_option, 0, 2, LOCAL(2), var_229_13_value,
  // key == name:
  var_std__equal, 2, LOCAL(2), var_218_10_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_5, var_next, TAIL_CALL,
  POS(229, 15),
  POS(231, 17),
  POS(230, 15)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  // !result value
  LET, 1, var_229_13_value, 1, var_218_16_result,
  // break
  var_break, 0, TAIL_CALL,
  POS(232, 19),
  POS(233, 19)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // push &results result
  var_push, 2, var_215_1_results, var_218_16_result, 1, var_215_1_results,
  // next
  var_next, 0, TAIL_CALL,
  POS(236, 11),
  POS(237, 11)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  // spread results
  var_spread, 1, var_215_1_results, TAIL_CALL,
  POS(239, 7)
};

static TAB_NUM t_func_std__program_parameters[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 297_0_templates
  // check_arguments! command_line_arguments templates
  func_check_arguments, 2, var_command_line_arguments, LOCAL(1), IO_TAIL_CALL,
  POS(299, 3)
};

static TAB_NUM t_func_display_table[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 301_17_table
  // $first_column_width
  var_map_reduce, 4, LOCAL(1), lambda_8, var_max, num_0, 1, var_302_1_first_column_width,
  // plus &first_column_width 2
  var_plus, 2, var_302_1_first_column_width, num_2, 1, var_302_1_first_column_width,
  // for_each table
  var_for_each, 3, LOCAL(1), lambda_9, var_pass, IO_TAIL_CALL,
  POS(302, 3),
  POS(308, 3),
  POS(309, 3)
};

static TAB_NUM t_lambda_8[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 305_3_entries
  // entries(1))
  LOCAL(3), 1, num_1, 1, LOCAL(1),
  // length_of(entries(1))
  var_length_of, 1, LOCAL(1), 1, LOCAL(2),
  // -> length_of(entries(1))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(305, 32),
  POS(305, 22),
  POS(305, 19)
};

static TAB_NUM t_lambda_9[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 310_3_entries
  // entries(1) first_column_width)
  LOCAL(3), 1, num_1, 1, LOCAL(1),
  // pad_right(entries(1) first_column_width)
  var_pad_right, 2, LOCAL(1), var_302_1_first_column_width, 1, LOCAL(2),
  // eprint! "  " pad_right(entries(1) first_column_width)
  var_eprint, 2, string_1, LOCAL(2), IO_CALL(0),
  // entries(2) '@nl;'): (no line)
  LOCAL(3), 1, num_2, 1, LOCAL(1),
  // split(entries(2) '@nl;'): (no line)
  var_split, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // for_each split(entries(2) '@nl;'): (no line)
  var_for_each, 2, LOCAL(2), lambda_10, IO_TAIL_CALL,
  POS(311, 30),
  POS(311, 20),
  POS(311, 7),
  POS(312, 22),
  POS(312, 16),
  POS(312, 7)
};

static TAB_NUM t_lambda_10[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 312_36_no
  LOCAL(4), // 312_39_line
  // no == 1
  var_std__equal, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_11, lambda_12, 1, LOCAL(2),
  // eprintln!
  var_eprintln, 2, LOCAL(2), LOCAL(4), IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(315, 13),
  POS(314, 11),
  POS(313, 9),
  POS(319, 9)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_2, TAIL_CALL,
  POS(316, 15)
};

static TAB_NUM t_lambda_12[] = {
  2, // locals
  0, // parameters
  // 2+first_column_width
  var_std__plus, 2, num_2, var_302_1_first_column_width, 1, LOCAL(1),
  // " " .dup. 2+first_column_width
  var_dup, 2, string_3, LOCAL(1), 1, LOCAL(2),
  //  " " .dup. 2+first_column_width
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(317, 26),
  POS(317, 16),
  POS(317, 15)
};

static TAB_NUM t_func_check_arguments[] = {
  0, // locals
  2, // parameters
  var_322_19_arguments,
  var_322_29_templates,
  // $results empty_list
  LET, 1, var_empty_list, 1, var_323_1_results,
  // $options empty_key_order_table
  LET, 1, var_empty_key_order_table, 1, var_324_1_options,
  // $parameters empty_key_order_table
  LET, 1, var_empty_key_order_table, 1, var_325_1_parameters,
  // $names empty_list
  LET, 1, var_empty_list, 1, var_326_1_names,
  // $kinds empty_list
  LET, 1, var_empty_list, 1, var_327_1_kinds,
  // $possible_values empty_list
  LET, 1, var_empty_list, 1, var_328_1_possible_values,
  // $default_values empty_list
  LET, 1, var_empty_list, 1, var_329_1_default_values,
  // $conversions empty_list
  LET, 1, var_empty_list, 1, var_330_1_conversions,
  // $help_messages empty_list
  LET, 1, var_empty_list, 1, var_331_1_help_messages,
  // $command_name truncate_until(program_name '/' -1)
  var_truncate_until, 3, var_program_name, chr_47, minus_num_1, 1, var_332_1_command_name,
  // map &arguments from_utf8
  var_map, 2, var_322_19_arguments, var_from_utf8, 1, var_322_19_arguments,
  // extract_copyright_and_version &templates $copyright $version
  func_extract_copyright_and_version, 1, var_322_29_templates, 3, var_322_29_templates, var_335_42_copyright, var_335_53_version,
  // for_each templates
  var_for_each, 3, var_322_29_templates, lambda_13, lambda_30, IO_TAIL_CALL,
  POS(323, 3),
  POS(324, 3),
  POS(325, 3),
  POS(326, 3),
  POS(327, 3),
  POS(328, 3),
  POS(329, 3),
  POS(330, 3),
  POS(331, 3),
  POS(332, 3),
  POS(333, 3),
  POS(335, 3),
  POS(337, 3)
};

static TAB_NUM t_lambda_13[] = {
  6, // locals
  2, // parameters
  var_338_3_idx,
  LOCAL(3), // 338_7_template
  // extract_from_template template
  func_extract_from_template, 1, LOCAL(3), 5, var_340_1_option, var_340_9_name, LOCAL(4), LOCAL(5), LOCAL(6),
  // is_a_key_value_pair
  var_is_a_key_value_pair, 1, var_340_1_option, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_15, 1, LOCAL(2),
  // push &possible_values
  var_push, 2, var_328_1_possible_values, LOCAL(2), 1, var_328_1_possible_values,
  // is_a_key_value_pair &option -> key_of(option)
  var_is_a_key_value_pair, 1, var_340_1_option, 1, LOCAL(1),
  // update_if option.is_a_key_value_pair &option -> key_of(option)
  var_update_if, 3, LOCAL(1), var_340_1_option, lambda_16, 1, var_340_1_option,
  // is_defined
  var_is_defined, 1, var_340_9_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_17, lambda_18, 1, LOCAL(2),
  // push &names
  var_push, 2, var_326_1_names, LOCAL(2), 1, var_326_1_names,
  // push &kinds option
  var_push, 2, var_327_1_kinds, var_340_1_option, 1, var_327_1_kinds,
  // push &default_values default_value
  var_push, 2, var_329_1_default_values, LOCAL(4), 1, var_329_1_default_values,
  // push &conversions conversion
  var_push, 2, var_330_1_conversions, LOCAL(5), 1, var_330_1_conversions,
  // push &help_messages help
  var_push, 2, var_331_1_help_messages, LOCAL(6), 1, var_331_1_help_messages,
  // cond
  var_cond, 5, lambda_19, lambda_21, lambda_23, lambda_25, lambda_28, IO_TAIL_CALL,
  POS(339, 7),
  POS(343, 18),
  POS(342, 9),
  POS(341, 7),
  POS(346, 24),
  POS(346, 7),
  POS(349, 16),
  POS(348, 9),
  POS(347, 7),
  POS(352, 7),
  POS(353, 7),
  POS(354, 7),
  POS(355, 7),
  POS(356, 7)
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  0, // parameters
  // value_of(option)
  var_value_of, 1, var_340_1_option, 1, LOCAL(1),
  //  value_of(option)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(344, 14),
  POS(344, 13)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(345, 13)
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // key_of(option)
  var_key_of, 1, var_340_1_option, 1, LOCAL(1),
  //  key_of(option)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(346, 55),
  POS(346, 54)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  name
  LET, 1, var_340_9_name, TAIL_CALL,
  POS(350, 13)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  option
  LET, 1, var_340_1_option, TAIL_CALL,
  POS(351, 13)
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // is_a_string:
  var_is_a_string, 1, var_340_1_option, 1, LOCAL(1),
  //  option.is_a_string:
  LET, 2, LOCAL(1), lambda_20, IO_TAIL_CALL,
  POS(357, 19),
  POS(357, 11)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  // push &results false
  var_push, 2, var_323_1_results, var_false, 1, var_323_1_results,
  // options(option) idx
  var_324_1_options, 2, var_340_1_option, var_338_3_idx, 1, var_324_1_options,
  // kinds(idx) BOOLEAN_OPTION
  var_327_1_kinds, 2, var_338_3_idx, uni_BOOLEAN_OPTION, 1, var_327_1_kinds,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(358, 11),
  POS(359, 12),
  POS(360, 12),
  POS(361, 11)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // option == VALUED_OPTION:
  var_std__equal, 2, var_340_1_option, var_VALUED_OPTION, 1, LOCAL(1),
  //  option == VALUED_OPTION:
  LET, 2, LOCAL(1), lambda_22, IO_TAIL_CALL,
  POS(362, 12),
  POS(362, 11)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  // push &results undefined
  var_push, 2, var_323_1_results, var_undefined, 1, var_323_1_results,
  // options(name) idx
  var_324_1_options, 2, var_340_9_name, var_338_3_idx, 1, var_324_1_options,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(363, 11),
  POS(364, 12),
  POS(365, 11)
};

static TAB_NUM t_lambda_23[] = {
  1, // locals
  0, // parameters
  // option == MULTI_VALUED_OPTION:
  var_std__equal, 2, var_340_1_option, var_MULTI_VALUED_OPTION, 1, LOCAL(1),
  //  option == MULTI_VALUED_OPTION:
  LET, 2, LOCAL(1), lambda_24, IO_TAIL_CALL,
  POS(366, 12),
  POS(366, 11)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  // push &results empty_list
  var_push, 2, var_323_1_results, var_empty_list, 1, var_323_1_results,
  // options(name) idx
  var_324_1_options, 2, var_340_9_name, var_338_3_idx, 1, var_324_1_options,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(367, 11),
  POS(368, 12),
  POS(369, 11)
};

static TAB_NUM t_lambda_25[] = {
  2, // locals
  0, // parameters
  // option == SOME_PARAMETERS || option == MANY_PARAMETERS:
  var_std__equal, 2, var_340_1_option, var_SOME_PARAMETERS, 1, LOCAL(1),
  // option == SOME_PARAMETERS || option == MANY_PARAMETERS:
  var_std__or, 2, LOCAL(1), lambda_26, 1, LOCAL(2),
  //  option == SOME_PARAMETERS || option == MANY_PARAMETERS:
  LET, 2, LOCAL(2), lambda_27, IO_TAIL_CALL,
  POS(370, 12),
  POS(370, 12),
  POS(370, 11)
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  0, // parameters
  // option == MANY_PARAMETERS:
  var_std__equal, 2, var_340_1_option, var_MANY_PARAMETERS, 1, LOCAL(1),
  // option == MANY_PARAMETERS:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(370, 41),
  POS(370, 41)
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // push &results empty_list
  var_push, 2, var_323_1_results, var_empty_list, 1, var_323_1_results,
  // is_defined:
  var_is_defined, 1, var_340_9_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_name_is_defined, var_next, IO_TAIL_CALL,
  POS(371, 11),
  POS(373, 18),
  POS(372, 11)
};

static TAB_NUM t_lambda_name_is_defined[] = {
  0, // locals
  0, // parameters
  // parameters(name) idx
  var_325_1_parameters, 2, var_340_9_name, var_338_3_idx, 1, var_325_1_parameters,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(374, 16),
  POS(375, 15)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_29, IO_TAIL_CALL,
  POS(377, 11)
};

static TAB_NUM t_lambda_29[] = {
  1, // locals
  0, // parameters
  // push &results undefined
  var_push, 2, var_323_1_results, var_undefined, 1, var_323_1_results,
  // is_defined:
  var_is_defined, 1, var_340_9_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_name_is_defined, var_next, IO_TAIL_CALL,
  POS(378, 11),
  POS(380, 18),
  POS(379, 11)
};

static TAB_NUM t_lambda_2_name_is_defined[] = {
  0, // locals
  0, // parameters
  // parameters(name) idx
  var_325_1_parameters, 2, var_340_9_name, var_338_3_idx, 1, var_325_1_parameters,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(381, 16),
  POS(382, 15)
};

static TAB_NUM t_lambda_30[] = {
  3, // locals
  0, // parameters
  // length_of(arguments) >= 1:
  var_length_of, 1, var_322_19_arguments, 1, LOCAL(1),
  // length_of(arguments) >= 1:
  var_std__less, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // length_of(arguments) >= 1:
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_31, lambda_42, IO_TAIL_CALL,
  POS(386, 9),
  POS(386, 9),
  POS(386, 9),
  POS(385, 7)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_32, lambda_34, lambda_37, lambda_40, IO_TAIL_CALL,
  POS(387, 11)
};

static TAB_NUM t_lambda_32[] = {
  2, // locals
  0, // parameters
  // arguments(1) == "--help":
  var_322_19_arguments, 1, num_1, 1, LOCAL(1),
  // arguments(1) == "--help":
  var_std__equal, 2, LOCAL(1), str_help, 1, LOCAL(2),
  //  arguments(1) == "--help":
  LET, 2, LOCAL(2), lambda_33, IO_TAIL_CALL,
  POS(388, 16),
  POS(388, 16),
  POS(388, 15)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  // show_usage!
  func_show_usage, 0, IO_CALL(0),
  // terminate!
  var_terminate, 0, IO_TAIL_CALL,
  POS(389, 15),
  POS(390, 15)
};

static TAB_NUM t_lambda_34[] = {
  2, // locals
  0, // parameters
  // is_defined && arguments(1) == "--copyright":
  var_is_defined, 1, var_335_42_copyright, 1, LOCAL(1),
  // is_defined && arguments(1) == "--copyright":
  var_std__and, 2, LOCAL(1), lambda_35, 1, LOCAL(2),
  //  copyright.is_defined && arguments(1) == "--copyright":
  LET, 2, LOCAL(2), lambda_36, IO_TAIL_CALL,
  POS(391, 26),
  POS(391, 26),
  POS(391, 15)
};

static TAB_NUM t_lambda_35[] = {
  2, // locals
  0, // parameters
  // arguments(1) == "--copyright":
  var_322_19_arguments, 1, num_1, 1, LOCAL(1),
  // arguments(1) == "--copyright":
  var_std__equal, 2, LOCAL(1), str_copyright, 1, LOCAL(2),
  // arguments(1) == "--copyright":
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(391, 40),
  POS(391, 40),
  POS(391, 40)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  // show_copyright!
  func_show_copyright, 0, IO_CALL(0),
  // terminate!
  var_terminate, 0, IO_TAIL_CALL,
  POS(392, 15),
  POS(393, 15)
};

static TAB_NUM t_lambda_37[] = {
  2, // locals
  0, // parameters
  // is_defined && arguments(1) == "--version":
  var_is_defined, 1, var_335_53_version, 1, LOCAL(1),
  // is_defined && arguments(1) == "--version":
  var_std__and, 2, LOCAL(1), lambda_38, 1, LOCAL(2),
  //  version.is_defined && arguments(1) == "--version":
  LET, 2, LOCAL(2), lambda_39, IO_TAIL_CALL,
  POS(394, 24),
  POS(394, 24),
  POS(394, 15)
};

static TAB_NUM t_lambda_38[] = {
  2, // locals
  0, // parameters
  // arguments(1) == "--version":
  var_322_19_arguments, 1, num_1, 1, LOCAL(1),
  // arguments(1) == "--version":
  var_std__equal, 2, LOCAL(1), str_version, 1, LOCAL(2),
  // arguments(1) == "--version":
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(394, 38),
  POS(394, 38),
  POS(394, 38)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  // show_version!
  func_show_version, 0, IO_CALL(0),
  // terminate!
  var_terminate, 0, IO_TAIL_CALL,
  POS(395, 15),
  POS(396, 15)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_41, IO_TAIL_CALL,
  POS(397, 15)
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  // initialize_results!
  func_initialize_results, 0, IO_TAIL_CALL,
  POS(398, 15)
};

static TAB_NUM t_lambda_42[] = {
  0, // locals
  0, // parameters
  // initialize_results!
  func_initialize_results, 0, IO_TAIL_CALL,
  POS(400, 11)
};

static TAB_NUM t_func_initialize_results[] = {
  0, // locals
  0, // parameters
  // $idx 1
  LET, 1, num_1, 1, var_403_1_idx,
  // $do_fetch_option_value false
  LET, 1, var_false, 1, var_404_1_do_fetch_option_value,
  // $option_idx undefined
  LET, 1, var_undefined, 1, var_405_1_option_idx,
  // for_each arguments
  var_for_each, 3, var_322_19_arguments, lambda_43, lambda_53, IO_TAIL_CALL,
  POS(403, 5),
  POS(404, 5),
  POS(405, 5),
  POS(406, 5)
};

static TAB_NUM t_lambda_43[] = {
  1, // locals
  1, // parameters
  var_407_3_argument,
  // argument == "--":
  var_std__equal, 2, var_407_3_argument, string_4, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_44, lambda_45, IO_TAIL_CALL,
  POS(409, 11),
  POS(408, 9)
};

static TAB_NUM t_lambda_44[] = {
  4, // locals
  0, // parameters
  // idx-1) range(arguments idx+1 -1))
  var_std__minus, 2, var_403_1_idx, num_1, 1, LOCAL(1),
  // range(arguments 1 idx-1) range(arguments idx+1 -1))
  var_range, 3, var_322_19_arguments, num_1, LOCAL(1), 1, LOCAL(2),
  // idx+1 -1))
  var_std__plus, 2, var_403_1_idx, num_1, 1, LOCAL(3),
  // range(arguments idx+1 -1))
  var_range, 3, var_322_19_arguments, LOCAL(3), minus_num_1, 1, LOCAL(4),
  // !arguments
  var_append, 2, LOCAL(2), LOCAL(4), 1, var_322_19_arguments,
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(411, 40),
  POS(411, 22),
  POS(411, 63),
  POS(411, 47),
  POS(410, 13),
  POS(412, 13)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_404_1_do_fetch_option_value, lambda_do_fetch_option_value, lambda_47, IO_TAIL_CALL,
  POS(414, 13)
};

static TAB_NUM t_lambda_do_fetch_option_value[] = {
  4, // locals
  0, // parameters
  // !do_fetch_option_value false
  LET, 1, var_false, 1, var_404_1_do_fetch_option_value,
  // idx-1) range(arguments idx+1 -1))
  var_std__minus, 2, var_403_1_idx, num_1, 1, LOCAL(1),
  // range(arguments 1 idx-1) range(arguments idx+1 -1))
  var_range, 3, var_322_19_arguments, num_1, LOCAL(1), 1, LOCAL(2),
  // idx+1 -1))
  var_std__plus, 2, var_403_1_idx, num_1, 1, LOCAL(3),
  // range(arguments idx+1 -1))
  var_range, 3, var_322_19_arguments, LOCAL(3), minus_num_1, 1, LOCAL(4),
  // !arguments
  var_append, 2, LOCAL(2), LOCAL(4), 1, var_322_19_arguments,
  // kinds(option_idx)
  var_327_1_kinds, 1, var_405_1_option_idx, 1, LOCAL(1),
  // case kinds(option_idx)
  var_case, 6, LOCAL(1), var_VALUED_OPTION, lambda_VALUED_OPTION, var_MULTI_VALUED_OPTION, lambda_MULTI_VALUED_OPTION, lambda_46, IO_TAIL_CALL,
  POS(416, 17),
  POS(418, 44),
  POS(418, 26),
  POS(418, 67),
  POS(418, 51),
  POS(417, 17),
  POS(419, 22),
  POS(419, 17)
};

static TAB_NUM t_lambda_VALUED_OPTION[] = {
  0, // locals
  0, // parameters
  // results(option_idx) argument
  var_323_1_results, 2, var_405_1_option_idx, var_407_3_argument, 1, var_323_1_results,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(421, 22),
  POS(422, 21)
};

static TAB_NUM t_lambda_MULTI_VALUED_OPTION[] = {
  1, // locals
  0, // parameters
  // results(option_idx) argument
  var_323_1_results, 1, var_405_1_option_idx, 1, LOCAL(1),
  // push &results(option_idx) argument
  var_push, 2, LOCAL(1), var_407_3_argument, 1, LOCAL(1),
  // results(option_idx) argument
  var_323_1_results, 2, var_405_1_option_idx, LOCAL(1), 1, var_323_1_results,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(424, 27),
  POS(424, 21),
  POS(424, 27),
  POS(425, 21)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(427, 21)
};

static TAB_NUM t_lambda_47[] = {
  1, // locals
  0, // parameters
  // argument .has_prefix. "--":
  var_has_prefix, 2, var_407_3_argument, string_4, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_48, lambda_52, IO_TAIL_CALL,
  POS(430, 19),
  POS(429, 17)
};

static TAB_NUM t_lambda_48[] = {
  1, // locals
  0, // parameters
  // range(argument 3 -1))
  var_range, 3, var_407_3_argument, num_3, minus_num_1, 1, LOCAL(1),
  // !option_idx options(range(argument 3 -1))
  var_324_1_options, 1, LOCAL(1), 1, var_405_1_option_idx,
  // is_undefined:
  var_is_undefined, 1, var_405_1_option_idx, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_option_idx_is_undefined, lambda_49, IO_TAIL_CALL,
  POS(431, 41),
  POS(431, 21),
  POS(433, 34),
  POS(432, 21)
};

static TAB_NUM t_lambda_option_idx_is_undefined[] = {
  1, // locals
  0, // parameters
  // "Invalid option: @(argument)!"
  var_std__string, 3, str_Invalid_option, var_407_3_argument, string_5, 1, LOCAL(1),
  // Error! "Invalid option: @(argument)!"
  var_Error, 1, LOCAL(1), IO_TAIL_CALL,
  POS(434, 32),
  POS(434, 25)
};

static TAB_NUM t_lambda_49[] = {
  2, // locals
  0, // parameters
  // kinds(option_idx) == BOOLEAN_OPTION:
  var_327_1_kinds, 1, var_405_1_option_idx, 1, LOCAL(1),
  // kinds(option_idx) == BOOLEAN_OPTION:
  var_std__equal, 2, LOCAL(1), uni_BOOLEAN_OPTION, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_50, lambda_51, IO_TAIL_CALL,
  POS(437, 27),
  POS(437, 27),
  POS(436, 25)
};

static TAB_NUM t_lambda_50[] = {
  4, // locals
  0, // parameters
  // results(option_idx) true
  var_323_1_results, 2, var_405_1_option_idx, var_true, 1, var_323_1_results,
  // idx-1) range(arguments idx+1 -1))
  var_std__minus, 2, var_403_1_idx, num_1, 1, LOCAL(1),
  // range(arguments 1 idx-1) range(arguments idx+1 -1))
  var_range, 3, var_322_19_arguments, num_1, LOCAL(1), 1, LOCAL(2),
  // idx+1 -1))
  var_std__plus, 2, var_403_1_idx, num_1, 1, LOCAL(3),
  // range(arguments idx+1 -1))
  var_range, 3, var_322_19_arguments, LOCAL(3), minus_num_1, 1, LOCAL(4),
  // !arguments
  var_append, 2, LOCAL(2), LOCAL(4), 1, var_322_19_arguments,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(438, 30),
  POS(440, 56),
  POS(440, 38),
  POS(440, 79),
  POS(440, 63),
  POS(439, 29),
  POS(441, 29)
};

static TAB_NUM t_lambda_51[] = {
  4, // locals
  0, // parameters
  // !do_fetch_option_value true
  LET, 1, var_true, 1, var_404_1_do_fetch_option_value,
  // idx-1) range(arguments idx+1 -1))
  var_std__minus, 2, var_403_1_idx, num_1, 1, LOCAL(1),
  // range(arguments 1 idx-1) range(arguments idx+1 -1))
  var_range, 3, var_322_19_arguments, num_1, LOCAL(1), 1, LOCAL(2),
  // idx+1 -1))
  var_std__plus, 2, var_403_1_idx, num_1, 1, LOCAL(3),
  // range(arguments idx+1 -1))
  var_range, 3, var_322_19_arguments, LOCAL(3), minus_num_1, 1, LOCAL(4),
  // !arguments
  var_append, 2, LOCAL(2), LOCAL(4), 1, var_322_19_arguments,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(443, 29),
  POS(445, 56),
  POS(445, 38),
  POS(445, 79),
  POS(445, 63),
  POS(444, 29),
  POS(446, 29)
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  // inc &idx
  var_inc, 1, var_403_1_idx, 1, var_403_1_idx,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(448, 21),
  POS(449, 21)
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  // evaluate_arguments!
  func_evaluate_arguments, 0, IO_TAIL_CALL,
  POS(451, 9)
};

static TAB_NUM t_func_evaluate_arguments[] = {
  0, // locals
  0, // parameters
  // $last_idx length_of(templates)
  var_length_of, 1, var_322_29_templates, 1, var_454_1_last_idx,
  // from_to_by last_idx 1 -1
  var_from_to_by, 5, var_454_1_last_idx, num_1, minus_num_1, lambda_54, lambda_59, IO_TAIL_CALL,
  POS(454, 5),
  POS(455, 5)
};

static TAB_NUM t_lambda_54[] = {
  2, // locals
  1, // parameters
  var_456_3_idx,
  // templates(idx)
  var_322_29_templates, 1, var_456_3_idx, 1, LOCAL(1),
  // extract_from_template templates(idx)
  func_extract_from_template, 1, LOCAL(1), 5, var_458_1_option, LOCAL(2), LOCAL(2), LOCAL(2), LOCAL(2),
  // is_a_key_value_pair &option -> key_of(option)
  var_is_a_key_value_pair, 1, var_458_1_option, 1, LOCAL(1),
  // update_if option.is_a_key_value_pair &option -> key_of(option)
  var_update_if, 3, LOCAL(1), var_458_1_option, lambda_55, 1, var_458_1_option,
  // OPTIONAL_PARAMETER, SOME_PARAMETERS, MANY_PARAMETERS:
  var_std__sequence, 3, var_OPTIONAL_PARAMETER, var_SOME_PARAMETERS, var_MANY_PARAMETERS, 1, LOCAL(1),
  // case option
  var_case, 6, var_458_1_option, var_MANDATORY_PARAMETER, lambda_MANDATORY_PARAMETER, LOCAL(1), lambda_57, lambda_58, IO_TAIL_CALL,
  POS(457, 31),
  POS(457, 9),
  POS(459, 26),
  POS(459, 9),
  POS(469, 11),
  POS(460, 9)
};

static TAB_NUM t_lambda_55[] = {
  1, // locals
  0, // parameters
  // key_of(option)
  var_key_of, 1, var_458_1_option, 1, LOCAL(1),
  //  key_of(option)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(459, 57),
  POS(459, 56)
};

static TAB_NUM t_lambda_MANDATORY_PARAMETER[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_322_19_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_too_few_arguments_error, lambda_56, IO_TAIL_CALL,
  POS(463, 25),
  POS(462, 13)
};

static TAB_NUM t_lambda_56[] = {
  1, // locals
  0, // parameters
  // pop &arguments !results(idx)
  var_pop, 1, var_322_19_arguments, 2, var_322_19_arguments, LOCAL(1),
  // results(idx)
  var_323_1_results, 2, var_456_3_idx, LOCAL(1), 1, var_323_1_results,
  // !last_idx idx-1
  var_std__minus, 2, var_456_3_idx, num_1, 1, var_454_1_last_idx,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(466, 17),
  POS(466, 33),
  POS(467, 17),
  POS(468, 17)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(470, 13)
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(472, 13)
};

static TAB_NUM t_lambda_59[] = {
  0, // locals
  0, // parameters
  // from_to 1 last_idx
  var_from_to, 4, num_1, var_454_1_last_idx, lambda_60, lambda_68, IO_TAIL_CALL,
  POS(474, 9)
};

static TAB_NUM t_lambda_60[] = {
  2, // locals
  1, // parameters
  var_475_3_idx,
  // templates(idx)
  var_322_29_templates, 1, var_475_3_idx, 1, LOCAL(1),
  // extract_from_template templates(idx)
  func_extract_from_template, 1, LOCAL(1), 5, var_477_1_option, LOCAL(2), LOCAL(2), LOCAL(2), LOCAL(2),
  // is_a_key_value_pair &option -> key_of(option)
  var_is_a_key_value_pair, 1, var_477_1_option, 1, LOCAL(1),
  // update_if option.is_a_key_value_pair &option -> key_of(option)
  var_update_if, 3, LOCAL(1), var_477_1_option, lambda_61, 1, var_477_1_option,
  // case option
  var_case, 10, var_477_1_option, var_MANDATORY_PARAMETER, lambda_2_MANDATORY_PARAMETER, var_OPTIONAL_PARAMETER, lambda_OPTIONAL_PARAMETER, var_SOME_PARAMETERS, lambda_SOME_PARAMETERS, var_MANY_PARAMETERS, lambda_MANY_PARAMETERS, lambda_67, IO_TAIL_CALL,
  POS(476, 35),
  POS(476, 13),
  POS(478, 30),
  POS(478, 13),
  POS(479, 13)
};

static TAB_NUM t_lambda_61[] = {
  1, // locals
  0, // parameters
  // key_of(option)
  var_key_of, 1, var_477_1_option, 1, LOCAL(1),
  //  key_of(option)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(478, 61),
  POS(478, 60)
};

static TAB_NUM t_lambda_2_MANDATORY_PARAMETER[] = {
  2, // locals
  0, // parameters
  // length_of(arguments) == 0:
  var_length_of, 1, var_322_19_arguments, 1, LOCAL(1),
  // length_of(arguments) == 0:
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_62, lambda_63, IO_TAIL_CALL,
  POS(482, 19),
  POS(482, 19),
  POS(481, 17)
};

static TAB_NUM t_lambda_62[] = {
  0, // locals
  0, // parameters
  // too_few_arguments_error!
  func_too_few_arguments_error, 0, IO_TAIL_CALL,
  POS(483, 21)
};

static TAB_NUM t_lambda_63[] = {
  1, // locals
  0, // parameters
  // get &arguments !results(idx)
  var_get, 1, var_322_19_arguments, 2, var_322_19_arguments, LOCAL(1),
  // results(idx)
  var_323_1_results, 2, var_475_3_idx, LOCAL(1), 1, var_323_1_results,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(485, 21),
  POS(485, 37),
  POS(486, 21)
};

static TAB_NUM t_lambda_OPTIONAL_PARAMETER[] = {
  2, // locals
  0, // parameters
  // length_of(arguments) > 0:
  var_length_of, 1, var_322_19_arguments, 1, LOCAL(1),
  // 0:
  var_std__less, 2, num_0, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_64, var_next, IO_TAIL_CALL,
  POS(489, 19),
  POS(489, 42),
  POS(488, 17)
};

static TAB_NUM t_lambda_64[] = {
  1, // locals
  0, // parameters
  // get &arguments !results(idx)
  var_get, 1, var_322_19_arguments, 2, var_322_19_arguments, LOCAL(1),
  // results(idx)
  var_323_1_results, 2, var_475_3_idx, LOCAL(1), 1, var_323_1_results,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(490, 21),
  POS(490, 37),
  POS(491, 21)
};

static TAB_NUM t_lambda_SOME_PARAMETERS[] = {
  0, // locals
  0, // parameters
  // results(idx) arguments
  var_323_1_results, 2, var_475_3_idx, var_322_19_arguments, 1, var_323_1_results,
  // !arguments empty_list
  LET, 1, var_empty_list, 1, var_322_19_arguments,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(494, 18),
  POS(495, 17),
  POS(496, 17)
};

static TAB_NUM t_lambda_MANY_PARAMETERS[] = {
  2, // locals
  0, // parameters
  // length_of(arguments) == 0:
  var_length_of, 1, var_322_19_arguments, 1, LOCAL(1),
  // length_of(arguments) == 0:
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_65, lambda_66, IO_TAIL_CALL,
  POS(499, 19),
  POS(499, 19),
  POS(498, 17)
};

static TAB_NUM t_lambda_65[] = {
  0, // locals
  0, // parameters
  // too_few_arguments_error!
  func_too_few_arguments_error, 0, IO_TAIL_CALL,
  POS(500, 21)
};

static TAB_NUM t_lambda_66[] = {
  0, // locals
  0, // parameters
  // results(idx) arguments
  var_323_1_results, 2, var_475_3_idx, var_322_19_arguments, 1, var_323_1_results,
  // !arguments empty_list
  LET, 1, var_empty_list, 1, var_322_19_arguments,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(502, 22),
  POS(503, 21),
  POS(504, 21)
};

static TAB_NUM t_lambda_67[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(506, 17)
};

static TAB_NUM t_lambda_68[] = {
  0, // locals
  0, // parameters
  // check_results!
  func_check_results, 0, IO_TAIL_CALL,
  POS(508, 13)
};

static TAB_NUM t_func_check_results[] = {
  1, // locals
  0, // parameters
  // is_not_empty:
  var_is_not_empty, 1, var_322_19_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_arguments_is_not_empty, lambda_69, IO_TAIL_CALL,
  POS(512, 17),
  POS(511, 5)
};

static TAB_NUM t_lambda_arguments_is_not_empty[] = {
  0, // locals
  0, // parameters
  // too_many_arguments_error!
  func_too_many_arguments_error, 0, IO_TAIL_CALL,
  POS(513, 9)
};

static TAB_NUM t_lambda_69[] = {
  0, // locals
  0, // parameters
  // for_each results
  var_for_each, 3, var_323_1_results, lambda_70, lambda_82, IO_TAIL_CALL,
  POS(515, 9)
};

static TAB_NUM t_lambda_70[] = {
  2, // locals
  2, // parameters
  var_516_3_idx,
  var_516_7_result,
  // is_undefined && default_values(idx).is_defined:
  var_is_undefined, 1, var_516_7_result, 1, LOCAL(1),
  // is_undefined && default_values(idx).is_defined:
  var_std__and, 2, LOCAL(1), lambda_71, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_72, lambda_73, IO_TAIL_CALL,
  POS(518, 22),
  POS(518, 22),
  POS(517, 13)
};

static TAB_NUM t_lambda_71[] = {
  2, // locals
  0, // parameters
  // default_values(idx).is_defined:
  var_329_1_default_values, 1, var_516_3_idx, 1, LOCAL(1),
  // is_defined:
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // default_values(idx).is_defined:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(518, 38),
  POS(518, 58),
  POS(518, 38)
};

static TAB_NUM t_lambda_72[] = {
  2, // locals
  0, // parameters
  // !results(idx) default_values(idx)
  var_329_1_default_values, 1, var_516_3_idx, 1, LOCAL(2),
  // results(idx) default_values(idx)
  var_323_1_results, 2, var_516_3_idx, LOCAL(2), 1, var_323_1_results,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(519, 17),
  POS(519, 18),
  POS(520, 17)
};

static TAB_NUM t_lambda_73[] = {
  1, // locals
  0, // parameters
  // $possible_value possible_values(idx)
  var_328_1_possible_values, 1, var_516_3_idx, 1, var_522_1_possible_value,
  // is_defined:
  var_is_defined, 1, var_522_1_possible_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_possible_value_is_defined, lambda_76, IO_TAIL_CALL,
  POS(522, 17),
  POS(524, 34),
  POS(523, 17)
};

static TAB_NUM t_lambda_possible_value_is_defined[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_516_7_result, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_result_is_a_list, lambda_75, IO_TAIL_CALL,
  POS(526, 30),
  POS(525, 21)
};

static TAB_NUM t_lambda_result_is_a_list[] = {
  0, // locals
  0, // parameters
  // for_each result: (item) check item
  var_for_each, 2, var_516_7_result, lambda_74, TAIL_CALL,
  POS(527, 25)
};

static TAB_NUM t_lambda_74[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 527_18_item
  // check item
  func_check, 1, LOCAL(1), TAIL_CALL,
  POS(527, 49)
};

static TAB_NUM t_lambda_75[] = {
  2, // locals
  0, // parameters
  // check! result
  func_check, 1, var_516_7_result, IO_CALL(0),
  // !results(idx) convert(result)
  func_convert, 1, var_516_7_result, 1, LOCAL(2),
  // results(idx) convert(result)
  var_323_1_results, 2, var_516_3_idx, LOCAL(2), 1, var_323_1_results,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(529, 25),
  POS(530, 25),
  POS(530, 26),
  POS(531, 25)
};

static TAB_NUM t_lambda_76[] = {
  2, // locals
  0, // parameters
  // !results(idx) convert(result)
  func_convert, 1, var_516_7_result, 1, LOCAL(2),
  // results(idx) convert(result)
  var_323_1_results, 2, var_516_3_idx, LOCAL(2), 1, var_323_1_results,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(533, 21),
  POS(533, 22),
  POS(534, 21)
};

static TAB_NUM t_func_check[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 536_9_value
  // possible_value(value)
  var_522_1_possible_value, 1, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_pass, lambda_77, IO_TAIL_CALL,
  POS(538, 21),
  POS(537, 19)
};

static TAB_NUM t_lambda_77[] = {
  3, // locals
  0, // parameters
  // names(idx).to_upper_case)!@nl;"
  var_326_1_names, 1, var_516_3_idx, 1, LOCAL(1),
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
  POS(542, 55),
  POS(542, 66),
  POS(542, 25),
  POS(541, 23),
  POS(543, 23),
  POS(544, 23)
};

static TAB_NUM t_func_convert[] = {
  1, // locals
  1, // parameters
  var_546_11_value,
  // $conversion conversions(idx)
  var_330_1_conversions, 1, var_516_3_idx, 1, var_547_1_conversion,
  // is_undefined
  var_is_undefined, 1, var_547_1_conversion, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_78, lambda_79, TAIL_CALL,
  POS(547, 19),
  POS(549, 32),
  POS(548, 19)
};

static TAB_NUM t_lambda_78[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_546_11_value, TAIL_CALL,
  POS(550, 23)
};

static TAB_NUM t_lambda_79[] = {
  1, // locals
  0, // parameters
  // is_a_string
  var_is_a_string, 1, var_546_11_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_80, lambda_81, TAIL_CALL,
  POS(553, 31),
  POS(552, 23)
};

static TAB_NUM t_lambda_80[] = {
  1, // locals
  0, // parameters
  // conversion(value)
  var_547_1_conversion, 1, var_546_11_value, 1, LOCAL(1),
  //  conversion(value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(554, 28),
  POS(554, 27)
};

static TAB_NUM t_lambda_81[] = {
  1, // locals
  0, // parameters
  // map(value conversion)
  var_map, 2, var_546_11_value, var_547_1_conversion, 1, LOCAL(1),
  //  map(value conversion)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(555, 28),
  POS(555, 27)
};

static TAB_NUM t_lambda_82[] = {
  0, // locals
  0, // parameters
  // spread results
  var_spread, 1, var_323_1_results, TAIL_CALL,
  POS(557, 13)
};

static TAB_NUM t_func_help_message[] = {
  1, // locals
  1, // parameters
  var_559_16_idx,
  // $message help_messages(idx)
  var_331_1_help_messages, 1, var_559_16_idx, 1, var_560_1_message,
  // $possible_value possible_values(idx)
  var_328_1_possible_values, 1, var_559_16_idx, 1, var_561_1_possible_value,
  // is_defined:
  var_is_defined, 1, var_561_1_possible_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_possible_value_is_defined, func_handle_default_value, TAIL_CALL,
  POS(560, 5),
  POS(561, 5),
  POS(563, 22),
  POS(562, 5)
};

static TAB_NUM t_lambda_2_possible_value_is_defined[] = {
  0, // locals
  0, // parameters
  // append &message "valid values:"
  var_append, 2, var_560_1_message, str_valid_values, 1, var_560_1_message,
  // for_each possible_value
  var_for_each, 3, var_561_1_possible_value, lambda_83, lambda_84, TAIL_CALL,
  POS(564, 9),
  POS(565, 9)
};

static TAB_NUM t_lambda_83[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 566_3_value
  // string(' ' value ',')
  var_string, 3, chr_32, LOCAL(2), chr_44, 1, LOCAL(1),
  // append &message string(' ' value ',')
  var_append, 2, var_560_1_message, LOCAL(1), 1, var_560_1_message,
  // next
  var_next, 0, TAIL_CALL,
  POS(567, 29),
  POS(567, 13),
  POS(568, 13)
};

static TAB_NUM t_lambda_84[] = {
  0, // locals
  0, // parameters
  // message(-1) '@nl;'
  var_560_1_message, 2, minus_num_1, chr_10, 1, var_560_1_message,
  // handle_default_value
  func_handle_default_value, 0, TAIL_CALL,
  POS(570, 14),
  POS(571, 13)
};

static TAB_NUM t_func_handle_default_value[] = {
  1, // locals
  0, // parameters
  // $default_value default_values(idx)
  var_329_1_default_values, 1, var_559_16_idx, 1, var_575_1_default_value,
  // is_defined:
  var_is_defined, 1, var_575_1_default_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_default_value_is_defined, lambda_85, TAIL_CALL,
  POS(575, 7),
  POS(577, 23),
  POS(576, 7)
};

static TAB_NUM t_lambda_default_value_is_defined[] = {
  1, // locals
  0, // parameters
  // message(-1) ' '
  var_560_1_message, 2, minus_num_1, chr_32, 1, var_560_1_message,
  // "(default value: @(default_value))"
  var_std__string, 3, str_default_value, var_575_1_default_value, string_7, 1, LOCAL(1),
  // append message "(default value: @(default_value))"
  var_append, 2, var_560_1_message, LOCAL(1), TAIL_CALL,
  POS(578, 12),
  POS(579, 26),
  POS(579, 11)
};

static TAB_NUM t_lambda_85[] = {
  0, // locals
  0, // parameters
  //  message
  LET, 1, var_560_1_message, TAIL_CALL,
  POS(580, 11)
};

static TAB_NUM t_func_show_usage[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_335_53_version, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_87, var_pass, IO_CALL(0),
  // eprintln! "Usage:"
  var_eprintln, 1, str_Usage, IO_CALL(0),
  // is_defined:
  var_is_defined, 1, var_335_42_copyright, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_copyright_is_defined, var_pass, IO_CALL(0),
  // eprintln! "  " command_name " --help"
  var_eprintln, 3, string_1, var_332_1_command_name, str__help, IO_CALL(0),
  // eprint! "  " command_name
  var_eprint, 2, string_1, var_332_1_command_name, IO_CALL(0),
  // for_each parameters
  var_for_each, 3, var_325_1_parameters, lambda_88, lambda_89, IO_CALL(0),
  // eprint! "
  var_eprint, 1, str_Parameters, IO_CALL(0),
  // do:
  var_do, 1, lambda_do, IO_CALL(0),
  // is_empty
  var_is_empty, 1, var_324_1_options, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_pass, lambda_92, IO_TAIL_CALL,
  POS(595, 15),
  POS(594, 5),
  POS(599, 5),
  POS(601, 17),
  POS(600, 5),
  POS(604, 5),
  POS(605, 5),
  POS(606, 5),
  POS(612, 5),
  POS(615, 5),
  POS(624, 15),
  POS(623, 5)
};

static TAB_NUM t_func_parameter_name[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 583_18_parameter
  LOCAL(3), // 583_28_idx
  // $buf parameter.to_upper_case
  var_to_upper_case, 1, LOCAL(2), 1, var_584_1_buf,
  // kinds(idx)
  var_327_1_kinds, 1, LOCAL(3), 1, LOCAL(1),
  // case kinds(idx)
  var_case, 8, LOCAL(1), var_OPTIONAL_PARAMETER, lambda_2_OPTIONAL_PARAMETER, var_SOME_PARAMETERS, lambda_2_SOME_PARAMETERS, var_MANY_PARAMETERS, lambda_2_MANY_PARAMETERS, lambda_86, TAIL_CALL,
  POS(584, 7),
  POS(585, 12),
  POS(585, 7)
};

static TAB_NUM t_lambda_2_OPTIONAL_PARAMETER[] = {
  0, // locals
  0, // parameters
  // push buf '?'
  var_push, 2, var_584_1_buf, chr_63, TAIL_CALL,
  POS(587, 11)
};

static TAB_NUM t_lambda_2_SOME_PARAMETERS[] = {
  0, // locals
  0, // parameters
  // push buf '*'
  var_push, 2, var_584_1_buf, chr_42, TAIL_CALL,
  POS(589, 11)
};

static TAB_NUM t_lambda_2_MANY_PARAMETERS[] = {
  0, // locals
  0, // parameters
  // push buf '+'
  var_push, 2, var_584_1_buf, chr_43, TAIL_CALL,
  POS(591, 11)
};

static TAB_NUM t_lambda_86[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_584_1_buf, TAIL_CALL,
  POS(592, 11)
};

static TAB_NUM t_lambda_87[] = {
  0, // locals
  0, // parameters
  // show_version!
  func_show_version, 0, IO_TAIL_CALL,
  POS(597, 9)
};

static TAB_NUM t_lambda_copyright_is_defined[] = {
  0, // locals
  0, // parameters
  // eprintln! "  " command_name " --copyright"
  var_eprintln, 3, string_1, var_332_1_command_name, str__copyright, IO_TAIL_CALL,
  POS(602, 9)
};

static TAB_NUM t_lambda_88[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 607_3_parameter
  LOCAL(3), // 607_13_idx
  // parameter_name(parameter idx)
  func_parameter_name, 2, LOCAL(2), LOCAL(3), 1, LOCAL(1),
  // eprint! " " parameter_name(parameter idx)
  var_eprint, 2, string_3, LOCAL(1), IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(608, 21),
  POS(608, 9),
  POS(609, 9)
};

static TAB_NUM t_lambda_89[] = {
  0, // locals
  0, // parameters
  // eprintln!
  var_eprintln, 0, IO_TAIL_CALL,
  POS(611, 9)
};

static TAB_NUM t_lambda_do[] = {
  0, // locals
  0, // parameters
  // $table empty_list
  LET, 1, var_empty_list, 1, var_616_1_table,
  // for_each parameters
  var_for_each, 3, var_325_1_parameters, lambda_90, lambda_91, IO_TAIL_CALL,
  POS(616, 7),
  POS(617, 7)
};

static TAB_NUM t_lambda_90[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 618_3_parameter
  LOCAL(5), // 618_13_idx
  // parameter_name(parameter idx) help_message(idx))
  func_parameter_name, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // help_message(idx))
  func_help_message, 1, LOCAL(5), 1, LOCAL(2),
  // list(parameter_name(parameter idx) help_message(idx))
  var_list, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // push &table list(parameter_name(parameter idx) help_message(idx))
  var_push, 2, var_616_1_table, LOCAL(3), 1, var_616_1_table,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(619, 28),
  POS(619, 58),
  POS(619, 23),
  POS(619, 11),
  POS(620, 11)
};

static TAB_NUM t_lambda_91[] = {
  0, // locals
  0, // parameters
  // display_table! table
  func_display_table, 1, var_616_1_table, IO_TAIL_CALL,
  POS(622, 11)
};

static TAB_NUM t_lambda_92[] = {
  0, // locals
  0, // parameters
  // eprint! "
  var_eprint, 1, str_Options, IO_CALL(0),
  // $table empty_list
  LET, 1, var_empty_list, 1, var_630_1_table,
  // for_each options
  var_for_each, 3, var_324_1_options, lambda_93, lambda_95, IO_TAIL_CALL,
  POS(627, 9),
  POS(630, 9),
  POS(631, 9)
};

static TAB_NUM t_lambda_93[] = {
  3, // locals
  2, // parameters
  var_632_3_option,
  var_632_10_idx,
  // option_name() help_message(idx))
  func_option_name, 0, 1, LOCAL(1),
  // help_message(idx))
  func_help_message, 1, var_632_10_idx, 1, LOCAL(2),
  // list(option_name() help_message(idx))
  var_list, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // push &table list(option_name() help_message(idx))
  var_push, 2, var_630_1_table, LOCAL(3), 1, var_630_1_table,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(633, 30),
  POS(633, 44),
  POS(633, 25),
  POS(633, 13),
  POS(634, 13)
};

static TAB_NUM t_func_option_name[] = {
  1, // locals
  0, // parameters
  // $buf string("--" option)
  var_string, 2, string_4, var_632_3_option, 1, var_637_1_buf,
  // kinds(idx)
  var_327_1_kinds, 1, var_632_10_idx, 1, LOCAL(1),
  // case kinds(idx)
  var_case, 6, LOCAL(1), var_VALUED_OPTION, lambda_2_VALUED_OPTION, var_MULTI_VALUED_OPTION, lambda_2_MULTI_VALUED_OPTION, lambda_94, TAIL_CALL,
  POS(637, 15),
  POS(638, 20),
  POS(638, 15)
};

static TAB_NUM t_lambda_2_VALUED_OPTION[] = {
  0, // locals
  0, // parameters
  // append buf " VALUE"
  var_append, 2, var_637_1_buf, str__VALUE, TAIL_CALL,
  POS(640, 19)
};

static TAB_NUM t_lambda_2_MULTI_VALUED_OPTION[] = {
  0, // locals
  0, // parameters
  // append buf " VALUES"
  var_append, 2, var_637_1_buf, str__VALUES, TAIL_CALL,
  POS(642, 19)
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_637_1_buf, TAIL_CALL,
  POS(643, 19)
};

static TAB_NUM t_lambda_95[] = {
  0, // locals
  0, // parameters
  // display_table! table
  func_display_table, 1, var_630_1_table, IO_TAIL_CALL,
  POS(645, 13)
};

static TAB_NUM t_func_show_version[] = {
  1, // locals
  0, // parameters
  // "@(command_name) @(version)@nl;"
  var_std__string, 4, var_332_1_command_name, string_3, var_335_53_version, string_8, 1, LOCAL(1),
  // eprint! "@(command_name) @(version)@nl;"
  var_eprint, 1, LOCAL(1), IO_TAIL_CALL,
  POS(648, 13),
  POS(648, 5)
};

static TAB_NUM t_func_show_copyright[] = {
  0, // locals
  0, // parameters
  // eprint! copyright
  var_eprint, 1, var_335_42_copyright, IO_TAIL_CALL,
  POS(651, 5)
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
  POS(654, 5),
  POS(656, 5),
  POS(657, 5)
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
  POS(660, 5),
  POS(662, 5),
  POS(663, 5)
};

static TAB_NUM t_func_extract_copyright_and_version[] = {
  0, // locals
  1, // parameters
  var_665_33_templates,
  // $copyright undefined
  LET, 1, var_undefined, 1, var_666_1_copyright,
  // $version undefined
  LET, 1, var_undefined, 1, var_667_1_version,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(666, 3),
  POS(667, 3),
  POS(668, 3)
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_665_33_templates, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_96, lambda_97, TAIL_CALL,
  POS(670, 17),
  POS(669, 5)
};

static TAB_NUM t_lambda_96[] = {
  0, // locals
  0, // parameters
  //  templates copyright version
  LET, 3, var_665_33_templates, var_666_1_copyright, var_667_1_version, TAIL_CALL,
  POS(671, 9)
};

static TAB_NUM t_lambda_97[] = {
  2, // locals
  0, // parameters
  // templates(1)
  var_665_33_templates, 1, num_1, 1, LOCAL(1),
  // extract_from_template templates(1)
  func_extract_from_template, 1, LOCAL(1), 5, var_674_1_option, LOCAL(2), LOCAL(2), LOCAL(2), var_674_45_message,
  // cond
  var_cond, 3, lambda_98, lambda_100, lambda_102, TAIL_CALL,
  POS(673, 31),
  POS(673, 9),
  POS(675, 9)
};

static TAB_NUM t_lambda_98[] = {
  1, // locals
  0, // parameters
  // option == COPYRIGHT:
  var_std__equal, 2, var_674_1_option, var_COPYRIGHT, 1, LOCAL(1),
  //  option == COPYRIGHT:
  LET, 2, LOCAL(1), lambda_99, TAIL_CALL,
  POS(676, 14),
  POS(676, 13)
};

static TAB_NUM t_lambda_99[] = {
  0, // locals
  0, // parameters
  // !copyright message
  LET, 1, var_674_45_message, 1, var_666_1_copyright,
  // range &templates 2 -1
  var_range, 3, var_665_33_templates, num_2, minus_num_1, 1, var_665_33_templates,
  // next
  var_next, 0, TAIL_CALL,
  POS(677, 13),
  POS(678, 13),
  POS(679, 13)
};

static TAB_NUM t_lambda_100[] = {
  1, // locals
  0, // parameters
  // option == VERSION:
  var_std__equal, 2, var_674_1_option, var_VERSION, 1, LOCAL(1),
  //  option == VERSION:
  LET, 2, LOCAL(1), lambda_101, TAIL_CALL,
  POS(680, 14),
  POS(680, 13)
};

static TAB_NUM t_lambda_101[] = {
  0, // locals
  0, // parameters
  // !version message
  LET, 1, var_674_45_message, 1, var_667_1_version,
  // range &templates 2 -1
  var_range, 3, var_665_33_templates, num_2, minus_num_1, 1, var_665_33_templates,
  // next
  var_next, 0, TAIL_CALL,
  POS(681, 13),
  POS(682, 13),
  POS(683, 13)
};

static TAB_NUM t_lambda_102[] = {
  0, // locals
  0, // parameters
  //  true -> templates copyright version
  LET, 2, var_true, lambda_103, TAIL_CALL,
  POS(684, 13)
};

static TAB_NUM t_lambda_103[] = {
  0, // locals
  0, // parameters
  //  templates copyright version
  LET, 3, var_665_33_templates, var_666_1_copyright, var_667_1_version, TAIL_CALL,
  POS(684, 21)
};

static TAB_NUM t_func_extract_from_template[] = {
  7, // locals
  1, // parameters
  var_686_25_template,
  // $len length_of(template)
  var_length_of, 1, var_686_25_template, 1, var_687_1_len,
  // len < 2 || len > 5:
  var_std__less, 2, var_687_1_len, num_2, 1, LOCAL(1),
  // len < 2 || len > 5:
  var_std__or, 2, LOCAL(1), lambda_104, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_105, var_pass, IO_CALL(0),
  // $option template(1)
  var_686_25_template, 1, num_1, 1, LOCAL(3),
  // len >= 3
  var_std__less, 2, var_687_1_len, num_3, 1, LOCAL(1),
  // len >= 3
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // $name
  var_if, 3, LOCAL(2), lambda_106, lambda_107, 1, LOCAL(4),
  // len >= 4
  var_std__less, 2, var_687_1_len, num_4, 1, LOCAL(1),
  // len >= 4
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // $default_value
  var_if, 3, LOCAL(2), lambda_108, lambda_109, 1, LOCAL(5),
  // len >= 5
  var_std__less, 2, var_687_1_len, num_5, 1, LOCAL(1),
  // len >= 5
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // $conversion
  var_if, 3, LOCAL(2), lambda_110, lambda_111, 1, LOCAL(6),
  // $help template(-1)
  var_686_25_template, 1, minus_num_1, 1, LOCAL(7),
  // -> option name default_value conversion help
  LET, 5, LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), LOCAL(7), TAIL_CALL,
  POS(687, 3),
  POS(689, 5),
  POS(689, 5),
  POS(688, 3),
  POS(692, 3),
  POS(695, 7),
  POS(695, 7),
  POS(693, 3),
  POS(700, 7),
  POS(700, 7),
  POS(698, 3),
  POS(705, 7),
  POS(705, 7),
  POS(703, 3),
  POS(708, 3),
  POS(709, 3)
};

static TAB_NUM t_lambda_104[] = {
  1, // locals
  0, // parameters
  // 5:
  var_std__less, 2, num_5, var_687_1_len, 1, LOCAL(1),
  // len > 5:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(689, 22),
  POS(689, 16)
};

static TAB_NUM t_lambda_105[] = {
  0, // locals
  0, // parameters
  // Error! "malformed parameter template"
  var_Error, 1, str_malformed_parame, IO_TAIL_CALL,
  POS(690, 7)
};

static TAB_NUM t_lambda_106[] = {
  1, // locals
  0, // parameters
  // template(2)
  var_686_25_template, 1, num_2, 1, LOCAL(1),
  //  template(2)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(696, 10),
  POS(696, 9)
};

static TAB_NUM t_lambda_107[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(697, 9)
};

static TAB_NUM t_lambda_108[] = {
  1, // locals
  0, // parameters
  // template(3)
  var_686_25_template, 1, num_3, 1, LOCAL(1),
  //  template(3)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(701, 10),
  POS(701, 9)
};

static TAB_NUM t_lambda_109[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(702, 9)
};

static TAB_NUM t_lambda_110[] = {
  1, // locals
  0, // parameters
  // template(4)
  var_686_25_template, 1, num_4, 1, LOCAL(1),
  //  template(4)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(706, 10),
  POS(706, 9)
};

static TAB_NUM t_lambda_111[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(707, 9)
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_option_is_a_unique_item}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__program_parameters}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_display_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_STRING_8, 2, {.str_8 = "  "}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_STRING_8, 1, {.str_8 = " "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_arguments}},
  {FLT_CHARACTER, 0, {.value = 47}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_name_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_name_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_STRING_8, 6, {.str_8 = "--help"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_STRING_8, 11, {.str_8 = "--copyright"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_STRING_8, 9, {.str_8 = "--version"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_initialize_results}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_STRING_8, 2, {.str_8 = "--"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_fetch_option_value}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_VALUED_OPTION}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_MULTI_VALUED_OPTION}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_option_idx_is_undefined}},
  {FLT_STRING_8, 16, {.str_8 = "Invalid option: "}},
  {FLT_STRING_8, 1, {.str_8 = "!"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_evaluate_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_MANDATORY_PARAMETER}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_MANDATORY_PARAMETER}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_OPTIONAL_PARAMETER}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_SOME_PARAMETERS}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_MANY_PARAMETERS}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_results}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_arguments_is_not_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_possible_value_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_result_is_a_list}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_STRING_8, 27, {.str_8 = "Invalid argument value for "}},
  {FLT_STRING_8, 2, {.str_8 = "!\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_convert}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_help_message}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_possible_value_is_defined}},
  {FLT_STRING_8, 13, {.str_8 = "valid values:"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_CHARACTER, 0, {.value = 44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_default_value}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_default_value_is_defined}},
  {FLT_STRING_8, 16, {.str_8 = "(default value: "}},
  {FLT_STRING_8, 1, {.str_8 = ")"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_show_usage}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parameter_name}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_OPTIONAL_PARAMETER}},
  {FLT_CHARACTER, 0, {.value = 63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_SOME_PARAMETERS}},
  {FLT_CHARACTER, 0, {.value = 42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_MANY_PARAMETERS}},
  {FLT_CHARACTER, 0, {.value = 43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}},
  {FLT_STRING_8, 6, {.str_8 = "Usage:"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_copyright_is_defined}},
  {FLT_STRING_8, 12, {.str_8 = " --copyright"}},
  {FLT_STRING_8, 7, {.str_8 = " --help"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_88}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_89}},
  {FLT_STRING_8, 13, {.str_8 = "\012Parameters:\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_90}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_91}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_92}},
  {FLT_STRING_8, 10, {.str_8 = "\012Options:\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_93}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_option_name}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_VALUED_OPTION}},
  {FLT_STRING_8, 6, {.str_8 = " VALUE"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_MULTI_VALUED_OPTION}},
  {FLT_STRING_8, 7, {.str_8 = " VALUES"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_94}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_95}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_show_version}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_show_copyright}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_too_few_arguments_error}},
  {FLT_STRING_8, 19, {.str_8 = "Too few arguments!\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_too_many_arguments_error}},
  {FLT_STRING_8, 20, {.str_8 = "Too many arguments!\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_extract_copyright_and_version}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_96}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_97}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_98}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_99}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_100}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_101}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_102}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_103}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_extract_from_template}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_104}},
  {FLT_POSITIVE_INT64, 0, {.value = 5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_105}},
  {FLT_STRING_8, 28, {.str_8 = "malformed parameter template"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_106}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_107}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_108}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_109}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_110}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_111}}
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
    "220_3_option\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_unique_item\000", NULL,
    {.position = POS(222, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(224, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(225, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(226, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(227, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(223, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "229_13_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(236, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(219, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spread\000", NULL,
    {.position = POS(239, 7)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "program_parameters\000std", NULL,
    {.const_idx = -func_std__program_parameters}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "command_line_arguments\000", NULL,
    {.position = POS(299, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(305, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(306, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "302_1_first_column_width\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(303, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(308, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pad_right\000", NULL,
    {.position = POS(311, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprint\000", NULL,
    {.position = POS(311, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split\000", NULL,
    {.position = POS(312, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(317, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dup\000", NULL,
    {.position = POS(317, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprintln\000", NULL,
    {.position = POS(313, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(320, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "322_19_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "322_29_templates\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "323_1_results\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "324_1_options\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_key_order_table\000", NULL,
    {.position = POS(324, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "325_1_parameters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "326_1_names\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "327_1_kinds\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "328_1_possible_values\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "329_1_default_values\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "330_1_conversions\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "331_1_help_messages\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "program_name\000", NULL,
    {.position = POS(332, 32)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "332_1_command_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_until\000", NULL,
    {.position = POS(332, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_utf8\000", NULL,
    {.position = POS(333, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(333, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "335_42_copyright\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "335_53_version\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "338_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "340_1_option\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "340_9_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_key_value_pair\000", NULL,
    {.position = POS(343, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "value_of\000", NULL,
    {.position = POS(344, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(345, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_of\000", NULL,
    {.position = POS(346, 55)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(346, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(349, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(357, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(358, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "VALUED_OPTION\000", NULL,
    {.position = POS(362, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "MULTI_VALUED_OPTION\000", NULL,
    {.position = POS(366, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SOME_PARAMETERS\000", NULL,
    {.position = POS(370, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "MANY_PARAMETERS\000", NULL,
    {.position = POS(370, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(370, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(356, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(386, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(386, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "terminate\000", NULL,
    {.position = POS(390, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(391, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "403_1_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "404_1_do_fetch_option_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "405_1_option_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "407_3_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(411, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(411, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(411, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(419, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_prefix\000", NULL,
    {.position = POS(430, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(433, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(434, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "Error\000", NULL,
    {.position = POS(434, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(448, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "454_1_last_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "456_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "458_1_option\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "OPTIONAL_PARAMETER\000", NULL,
    {.position = POS(469, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(469, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "MANDATORY_PARAMETER\000", NULL,
    {.position = POS(461, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(463, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pop\000", NULL,
    {.position = POS(466, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "475_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "477_1_option\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get\000", NULL,
    {.position = POS(485, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to\000", NULL,
    {.position = POS(474, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to_by\000", NULL,
    {.position = POS(455, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(512, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "516_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "516_7_result\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "522_1_possible_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(526, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_upper_case\000", NULL,
    {.position = POS(542, 66)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exit\000", NULL,
    {.position = POS(544, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "546_11_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "547_1_conversion\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "559_16_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "560_1_message\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "561_1_possible_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(567, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "575_1_default_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "584_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "616_1_table\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(619, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "do\000", NULL,
    {.position = POS(615, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "630_1_table\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "632_3_option\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "632_10_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "637_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "665_33_templates\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "666_1_copyright\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "667_1_version\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "674_1_option\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "674_45_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "COPYRIGHT\000", NULL,
    {.position = POS(676, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "VERSION\000", NULL,
    {.position = POS(680, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(668, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "686_25_template\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "687_1_len\000", NULL
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
  204, // number of constants
  138, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
