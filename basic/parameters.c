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
  func_std__get_options = -10,
  lambda_1 = -11,
  lambda_2 = -12,
  lambda_option_is_a_unique_item = -13,
  lambda_3 = -14,
  lambda_4 = -15,
  lambda_5 = -16,
  lambda_6 = -17,
  lambda_7 = -18,
  func_std__extract_options = -19,
  lambda_8 = -20,
  lambda_9 = -21,
  lambda_argument_is_a_unique_item = -22,
  lambda_10 = -23,
  lambda_11 = -24,
  lambda_argument_is_a_tuple = -25,
  lambda_12 = -26,
  lambda_13 = -27,
  lambda_14 = -28,
  lambda_15 = -29,
  lambda_16 = -30,
  lambda_17 = -31,
  func_std__program_parameters = -32,
  func_display_table = -33,
  lambda_18 = -34,
  num_1 = -35,
  num_0 = -36,
  num_2 = -37,
  lambda_19 = -38,
  string_1 = -39,
  chr_10 = -40,
  lambda_20 = -41,
  lambda_21 = -42,
  string_2 = -43,
  lambda_22 = -44,
  string_3 = -45,
  func_check_arguments = -46,
  chr_47 = -47,
  minus_num_1 = -48,
  lambda_23 = -49,
  lambda_24 = -50,
  lambda_25 = -51,
  lambda_26 = -52,
  lambda_27 = -53,
  lambda_28 = -54,
  lambda_29 = -55,
  lambda_30 = -56,
  lambda_31 = -57,
  lambda_32 = -58,
  lambda_33 = -59,
  lambda_34 = -60,
  lambda_35 = -61,
  lambda_36 = -62,
  lambda_37 = -63,
  lambda_name_is_defined = -64,
  lambda_38 = -65,
  lambda_39 = -66,
  lambda_2_name_is_defined = -67,
  lambda_40 = -68,
  lambda_41 = -69,
  lambda_42 = -70,
  str_help = -71,
  lambda_43 = -72,
  lambda_44 = -73,
  lambda_45 = -74,
  str_copyright = -75,
  lambda_46 = -76,
  lambda_47 = -77,
  lambda_48 = -78,
  str_version = -79,
  lambda_49 = -80,
  lambda_50 = -81,
  lambda_51 = -82,
  lambda_52 = -83,
  func_initialize_results = -84,
  lambda_53 = -85,
  string_4 = -86,
  lambda_54 = -87,
  lambda_55 = -88,
  lambda_do_fetch_option_value = -89,
  lambda_VALUED_OPTION = -90,
  lambda_MULTI_VALUED_OPTION = -91,
  lambda_56 = -92,
  lambda_57 = -93,
  lambda_58 = -94,
  num_3 = -95,
  lambda_option_idx_is_undefined = -96,
  str_Invalid_option = -97,
  string_5 = -98,
  lambda_59 = -99,
  lambda_60 = -100,
  lambda_61 = -101,
  lambda_62 = -102,
  lambda_63 = -103,
  func_evaluate_arguments = -104,
  lambda_64 = -105,
  lambda_65 = -106,
  lambda_MANDATORY_PARAMETER = -107,
  lambda_66 = -108,
  lambda_67 = -109,
  lambda_68 = -110,
  lambda_69 = -111,
  lambda_70 = -112,
  lambda_71 = -113,
  lambda_2_MANDATORY_PARAMETER = -114,
  lambda_72 = -115,
  lambda_73 = -116,
  lambda_OPTIONAL_PARAMETER = -117,
  lambda_74 = -118,
  lambda_SOME_PARAMETERS = -119,
  lambda_MANY_PARAMETERS = -120,
  lambda_75 = -121,
  lambda_76 = -122,
  lambda_77 = -123,
  lambda_78 = -124,
  func_check_results = -125,
  lambda_arguments_is_not_empty = -126,
  lambda_79 = -127,
  lambda_80 = -128,
  lambda_81 = -129,
  lambda_82 = -130,
  lambda_83 = -131,
  lambda_possible_value_is_defined = -132,
  lambda_result_is_a_list = -133,
  lambda_84 = -134,
  lambda_85 = -135,
  lambda_86 = -136,
  func_check = -137,
  lambda_87 = -138,
  str_Invalid_argument = -139,
  string_6 = -140,
  func_convert = -141,
  lambda_88 = -142,
  lambda_89 = -143,
  lambda_90 = -144,
  lambda_91 = -145,
  lambda_92 = -146,
  func_help_message = -147,
  lambda_2_possible_value_is_defined = -148,
  str_valid_values = -149,
  lambda_93 = -150,
  chr_32 = -151,
  chr_44 = -152,
  lambda_94 = -153,
  func_handle_default_value = -154,
  lambda_default_value_is_defined = -155,
  str_default_value = -156,
  string_7 = -157,
  lambda_95 = -158,
  func_show_usage = -159,
  func_parameter_name = -160,
  lambda_2_OPTIONAL_PARAMETER = -161,
  chr_63 = -162,
  lambda_2_SOME_PARAMETERS = -163,
  chr_42 = -164,
  lambda_2_MANY_PARAMETERS = -165,
  chr_43 = -166,
  lambda_96 = -167,
  lambda_97 = -168,
  str_Usage = -169,
  lambda_copyright_is_defined = -170,
  str__copyright = -171,
  str__help = -172,
  lambda_98 = -173,
  lambda_99 = -174,
  str_Parameters = -175,
  lambda_do = -176,
  lambda_100 = -177,
  lambda_101 = -178,
  lambda_102 = -179,
  str_Options = -180,
  lambda_103 = -181,
  func_option_name = -182,
  lambda_2_VALUED_OPTION = -183,
  str__VALUE = -184,
  lambda_2_MULTI_VALUED_OPTION = -185,
  str__VALUES = -186,
  lambda_104 = -187,
  lambda_105 = -188,
  func_show_version = -189,
  string_8 = -190,
  func_show_copyright = -191,
  func_too_few_arguments_error = -192,
  str_Too_few_argument = -193,
  func_too_many_arguments_error = -194,
  str_Too_many_argumen = -195,
  func_extract_copyright_and_version = -196,
  lambda_loop = -197,
  lambda_106 = -198,
  lambda_107 = -199,
  lambda_108 = -200,
  lambda_109 = -201,
  lambda_110 = -202,
  lambda_111 = -203,
  lambda_112 = -204,
  lambda_113 = -205,
  func_extract_from_template = -206,
  lambda_114 = -207,
  num_5 = -208,
  lambda_115 = -209,
  str_malformed_parame = -210,
  lambda_116 = -211,
  lambda_117 = -212,
  num_4 = -213,
  lambda_118 = -214,
  lambda_119 = -215,
  lambda_120 = -216,
  lambda_121 = -217
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
  var_std__get_options, // initialized
  var_146_0_options, // dynamic
  var_149_1_results, // dynamic
  var_empty_list, // extern
  var_152_10_name, // dynamic
  var_152_16_result, // dynamic
  var_154_3_option, // dynamic
  var_is_a_unique_item, // extern
  var_std__equal, // extern
  var_true, // extern
  var_break, // extern
  var_next, // extern
  var_if, // extern
  var_163_13_value, // dynamic
  var_push, // extern
  var_for_each, // extern
  var_spread, // extern
  var_std__extract_options, // initialized
  var_182_0_arguments, // dynamic
  var_185_1_results, // dynamic
  var_186_1_argument_used, // dynamic
  var_empty_hash_set, // extern
  var_189_10_name, // dynamic
  var_189_16_result, // dynamic
  var_191_3_idx, // dynamic
  var_191_7_argument, // dynamic
  var_is_a_tuple, // extern
  var_203_15_value, // dynamic
  var_215_1_remaining_arguments, // dynamic
  var_217_7_argument, // dynamic
  var_put, // extern
  var_std__program_parameters, // initialized
  var_command_line_arguments, // extern
  var_length_of, // extern
  var_max, // extern
  var_272_1_first_column_width, // dynamic
  var_map_reduce, // extern
  var_plus, // extern
  var_pad_right, // extern
  var_eprint, // extern
  var_split, // extern
  var_std__plus, // extern
  var_dup, // extern
  var_eprintln, // extern
  var_pass, // extern
  var_294_19_arguments, // dynamic
  var_294_29_templates, // dynamic
  var_295_1_results, // dynamic
  var_296_1_options, // dynamic
  var_empty_key_order_table, // extern
  var_297_1_parameters, // dynamic
  var_empty_insert_order_table, // extern
  var_298_1_names, // dynamic
  var_299_1_kinds, // dynamic
  var_300_1_possible_values, // dynamic
  var_301_1_default_values, // dynamic
  var_302_1_conversions, // dynamic
  var_303_1_help_messages, // dynamic
  var_program_name, // extern
  var_304_1_command_name, // dynamic
  var_truncate_until, // extern
  var_from_utf8, // extern
  var_map, // extern
  var_307_42_copyright, // dynamic
  var_307_53_version, // dynamic
  var_310_3_idx, // dynamic
  var_312_1_option, // dynamic
  var_312_9_name, // dynamic
  var_trim, // extern
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
  var_376_1_idx, // dynamic
  var_377_1_do_fetch_option_value, // dynamic
  var_378_1_option_idx, // dynamic
  var_380_3_argument, // dynamic
  var_std__minus, // extern
  var_range, // extern
  var_append, // extern
  var_case, // extern
  var_has_prefix, // extern
  var_is_undefined, // extern
  var_std__string, // extern
  var_Error, // extern
  var_inc, // extern
  var_427_1_last_idx, // dynamic
  var_429_3_idx, // dynamic
  var_431_1_option, // dynamic
  var_OPTIONAL_PARAMETER, // extern
  var_std__sequence, // extern
  var_MANDATORY_PARAMETER, // extern
  var_is_empty, // extern
  var_pop, // extern
  var_448_3_idx, // dynamic
  var_450_1_option, // dynamic
  var_get, // extern
  var_from_to, // extern
  var_from_to_by, // extern
  var_is_not_empty, // extern
  var_489_3_idx, // dynamic
  var_489_7_result, // dynamic
  var_495_1_possible_value, // dynamic
  var_is_a_list, // extern
  var_to_upper_case, // extern
  var_exit, // extern
  var_519_11_value, // dynamic
  var_520_1_conversion, // dynamic
  var_532_16_idx, // dynamic
  var_533_1_message, // dynamic
  var_534_1_possible_value, // dynamic
  var_string, // extern
  var_548_1_default_value, // dynamic
  var_557_1_buf, // dynamic
  var_589_1_table, // dynamic
  var_list, // extern
  var_do, // extern
  var_603_1_table, // dynamic
  var_605_3_option, // dynamic
  var_605_10_idx, // dynamic
  var_610_1_buf, // dynamic
  var_638_33_templates, // dynamic
  var_639_1_copyright, // dynamic
  var_640_1_version, // dynamic
  var_647_1_option, // dynamic
  var_647_45_message, // dynamic
  var_COPYRIGHT, // extern
  var_VERSION, // extern
  var_loop, // extern
  var_659_25_template, // dynamic
  var_660_1_len, // dynamic
  var__END
};


static TAB_NUM t_func_std__get_options[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_146_0_options,
  REST_PARAMETER, LOCAL(1), // 147_0_templates
  // $results empty_list
  LET, 1, var_empty_list, 1, var_149_1_results,
  // for_each templates
  var_for_each, 3, LOCAL(1), lambda_1, lambda_7, TAIL_CALL,
  POS(149, 3),
  POS(150, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 151_3_template
  // template $name $result
  LOCAL(1), 0, 2, var_152_10_name, var_152_16_result,
  // for_each options
  var_for_each, 3, var_146_0_options, lambda_2, lambda_6, TAIL_CALL,
  POS(152, 7),
  POS(153, 7)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  1, // parameters
  var_154_3_option,
  // is_a_unique_item:
  var_is_a_unique_item, 1, var_154_3_option, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_option_is_a_unique_item, lambda_4, TAIL_CALL,
  POS(156, 20),
  POS(155, 11)
};

static TAB_NUM t_lambda_option_is_a_unique_item[] = {
  1, // locals
  0, // parameters
  // option == name:
  var_std__equal, 2, var_154_3_option, var_152_10_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, var_next, TAIL_CALL,
  POS(158, 17),
  POS(157, 15)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  // !result true
  LET, 1, var_true, 1, var_152_16_result,
  // break
  var_break, 0, TAIL_CALL,
  POS(159, 19),
  POS(160, 19)
};

static TAB_NUM t_lambda_4[] = {
  2, // locals
  0, // parameters
  // option $key $value
  var_154_3_option, 0, 2, LOCAL(2), var_163_13_value,
  // key == name:
  var_std__equal, 2, LOCAL(2), var_152_10_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_5, var_next, TAIL_CALL,
  POS(163, 15),
  POS(165, 17),
  POS(164, 15)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  // !result value
  LET, 1, var_163_13_value, 1, var_152_16_result,
  // break
  var_break, 0, TAIL_CALL,
  POS(166, 19),
  POS(167, 19)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // push &results result
  var_push, 2, var_149_1_results, var_152_16_result, 1, var_149_1_results,
  // next
  var_next, 0, TAIL_CALL,
  POS(170, 11),
  POS(171, 11)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  // spread results
  var_spread, 1, var_149_1_results, TAIL_CALL,
  POS(173, 7)
};

static TAB_NUM t_func_std__extract_options[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_182_0_arguments,
  REST_PARAMETER, LOCAL(1), // 183_0_templates
  // $results empty_list
  LET, 1, var_empty_list, 1, var_185_1_results,
  // $argument_used empty_hash_set
  LET, 1, var_empty_hash_set, 1, var_186_1_argument_used,
  // for_each templates
  var_for_each, 3, LOCAL(1), lambda_8, lambda_14, TAIL_CALL,
  POS(185, 3),
  POS(186, 3),
  POS(187, 3)
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 188_3_template
  // template $name $result
  LOCAL(1), 0, 2, var_189_10_name, var_189_16_result,
  // for_each arguments
  var_for_each, 3, var_182_0_arguments, lambda_9, lambda_13, TAIL_CALL,
  POS(189, 7),
  POS(190, 7)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  2, // parameters
  var_191_3_idx,
  var_191_7_argument,
  // is_a_unique_item:
  var_is_a_unique_item, 1, var_191_7_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_argument_is_a_unique_item, lambda_11, TAIL_CALL,
  POS(193, 22),
  POS(192, 11)
};

static TAB_NUM t_lambda_argument_is_a_unique_item[] = {
  1, // locals
  0, // parameters
  // argument == name:
  var_std__equal, 2, var_191_7_argument, var_189_10_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, var_next, TAIL_CALL,
  POS(195, 17),
  POS(194, 15)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  // !result true
  LET, 1, var_true, 1, var_189_16_result,
  // argument_used(idx) true
  var_186_1_argument_used, 2, var_191_3_idx, var_true, 1, var_186_1_argument_used,
  // break
  var_break, 0, TAIL_CALL,
  POS(196, 19),
  POS(197, 20),
  POS(198, 19)
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // is_a_tuple:
  var_is_a_tuple, 1, var_191_7_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_argument_is_a_tuple, var_next, TAIL_CALL,
  POS(202, 26),
  POS(201, 15)
};

static TAB_NUM t_lambda_argument_is_a_tuple[] = {
  2, // locals
  0, // parameters
  // argument $key $value
  var_191_7_argument, 0, 2, LOCAL(2), var_203_15_value,
  // key == name:
  var_std__equal, 2, LOCAL(2), var_189_10_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12, var_next, TAIL_CALL,
  POS(203, 19),
  POS(205, 21),
  POS(204, 19)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  // !result value
  LET, 1, var_203_15_value, 1, var_189_16_result,
  // argument_used(idx) true
  var_186_1_argument_used, 2, var_191_3_idx, var_true, 1, var_186_1_argument_used,
  // break
  var_break, 0, TAIL_CALL,
  POS(206, 23),
  POS(207, 24),
  POS(208, 23)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  // push &results result
  var_push, 2, var_185_1_results, var_189_16_result, 1, var_185_1_results,
  // next
  var_next, 0, TAIL_CALL,
  POS(212, 11),
  POS(213, 11)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  // $remaining_arguments empty_list
  LET, 1, var_empty_list, 1, var_215_1_remaining_arguments,
  // for_each arguments
  var_for_each, 3, var_182_0_arguments, lambda_15, lambda_17, TAIL_CALL,
  POS(215, 7),
  POS(216, 7)
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 217_3_idx
  var_217_7_argument,
  // argument_used(idx)
  var_186_1_argument_used, 1, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_16, TAIL_CALL,
  POS(219, 13),
  POS(218, 11)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  // push &remaining_arguments argument
  var_push, 2, var_215_1_remaining_arguments, var_217_7_argument, 1, var_215_1_remaining_arguments,
  // next
  var_next, 0, TAIL_CALL,
  POS(222, 15),
  POS(223, 15)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // put &results remaining_arguments
  var_put, 2, var_185_1_results, var_215_1_remaining_arguments, 1, var_185_1_results,
  // spread results
  var_spread, 1, var_185_1_results, TAIL_CALL,
  POS(225, 11),
  POS(226, 11)
};

static TAB_NUM t_func_std__program_parameters[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 267_0_templates
  // check_arguments! command_line_arguments templates
  func_check_arguments, 2, var_command_line_arguments, LOCAL(1), IO_TAIL_CALL,
  POS(269, 3)
};

static TAB_NUM t_func_display_table[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 271_17_table
  // $first_column_width
  var_map_reduce, 4, LOCAL(1), lambda_18, var_max, num_0, 1, var_272_1_first_column_width,
  // plus &first_column_width 2
  var_plus, 2, var_272_1_first_column_width, num_2, 1, var_272_1_first_column_width,
  // for_each table
  var_for_each, 3, LOCAL(1), lambda_19, var_pass, IO_TAIL_CALL,
  POS(272, 3),
  POS(278, 3),
  POS(279, 3)
};

static TAB_NUM t_lambda_18[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 275_3_entries
  // entries(1))
  LOCAL(3), 1, num_1, 1, LOCAL(1),
  // length_of(entries(1))
  var_length_of, 1, LOCAL(1), 1, LOCAL(2),
  // -> length_of(entries(1))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(275, 32),
  POS(275, 22),
  POS(275, 19)
};

static TAB_NUM t_lambda_19[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 280_3_entries
  // entries(1) first_column_width)
  LOCAL(3), 1, num_1, 1, LOCAL(1),
  // pad_right(entries(1) first_column_width)
  var_pad_right, 2, LOCAL(1), var_272_1_first_column_width, 1, LOCAL(2),
  // eprint! "  " pad_right(entries(1) first_column_width)
  var_eprint, 2, string_1, LOCAL(2), IO_CALL(0),
  // entries(2) '@nl;')
  LOCAL(3), 1, num_2, 1, LOCAL(1),
  // split(entries(2) '@nl;')
  var_split, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // for_each split(entries(2) '@nl;')
  var_for_each, 3, LOCAL(2), lambda_20, var_next, IO_TAIL_CALL,
  POS(281, 30),
  POS(281, 20),
  POS(281, 7),
  POS(282, 22),
  POS(282, 16),
  POS(282, 7)
};

static TAB_NUM t_lambda_20[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 283_3_no
  LOCAL(4), // 283_6_line
  // no == 1
  var_std__equal, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21, lambda_22, 1, LOCAL(2),
  // eprintln!
  var_eprintln, 2, LOCAL(2), LOCAL(4), IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(286, 15),
  POS(285, 13),
  POS(284, 11),
  POS(290, 11)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_2, TAIL_CALL,
  POS(287, 17)
};

static TAB_NUM t_lambda_22[] = {
  2, // locals
  0, // parameters
  // 2+first_column_width
  var_std__plus, 2, num_2, var_272_1_first_column_width, 1, LOCAL(1),
  // " " .dup. 2+first_column_width
  var_dup, 2, string_3, LOCAL(1), 1, LOCAL(2),
  //  " " .dup. 2+first_column_width
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(288, 28),
  POS(288, 18),
  POS(288, 17)
};

static TAB_NUM t_func_check_arguments[] = {
  0, // locals
  2, // parameters
  var_294_19_arguments,
  var_294_29_templates,
  // $results empty_list
  LET, 1, var_empty_list, 1, var_295_1_results,
  // $options empty_key_order_table
  LET, 1, var_empty_key_order_table, 1, var_296_1_options,
  // $parameters empty_insert_order_table
  LET, 1, var_empty_insert_order_table, 1, var_297_1_parameters,
  // $names empty_list
  LET, 1, var_empty_list, 1, var_298_1_names,
  // $kinds empty_list
  LET, 1, var_empty_list, 1, var_299_1_kinds,
  // $possible_values empty_list
  LET, 1, var_empty_list, 1, var_300_1_possible_values,
  // $default_values empty_list
  LET, 1, var_empty_list, 1, var_301_1_default_values,
  // $conversions empty_list
  LET, 1, var_empty_list, 1, var_302_1_conversions,
  // $help_messages empty_list
  LET, 1, var_empty_list, 1, var_303_1_help_messages,
  // $command_name truncate_until(program_name '/' -1)
  var_truncate_until, 3, var_program_name, chr_47, minus_num_1, 1, var_304_1_command_name,
  // map &arguments from_utf8
  var_map, 2, var_294_19_arguments, var_from_utf8, 1, var_294_19_arguments,
  // extract_copyright_and_version &templates $copyright $version
  func_extract_copyright_and_version, 1, var_294_29_templates, 3, var_294_29_templates, var_307_42_copyright, var_307_53_version,
  // for_each templates
  var_for_each, 3, var_294_29_templates, lambda_23, lambda_40, IO_TAIL_CALL,
  POS(295, 3),
  POS(296, 3),
  POS(297, 3),
  POS(298, 3),
  POS(299, 3),
  POS(300, 3),
  POS(301, 3),
  POS(302, 3),
  POS(303, 3),
  POS(304, 3),
  POS(305, 3),
  POS(307, 3),
  POS(309, 3)
};

static TAB_NUM t_lambda_23[] = {
  6, // locals
  2, // parameters
  var_310_3_idx,
  LOCAL(3), // 310_7_template
  // extract_from_template template
  func_extract_from_template, 1, LOCAL(3), 5, var_312_1_option, var_312_9_name, LOCAL(4), LOCAL(5), LOCAL(6),
  // trim &help
  var_trim, 1, LOCAL(6), 1, LOCAL(6),
  // is_a_key_value_pair
  var_is_a_key_value_pair, 1, var_312_1_option, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_24, lambda_25, 1, LOCAL(2),
  // push &possible_values
  var_push, 2, var_300_1_possible_values, LOCAL(2), 1, var_300_1_possible_values,
  // is_a_key_value_pair &option -> key_of(option)
  var_is_a_key_value_pair, 1, var_312_1_option, 1, LOCAL(1),
  // update_if option.is_a_key_value_pair &option -> key_of(option)
  var_update_if, 3, LOCAL(1), var_312_1_option, lambda_26, 1, var_312_1_option,
  // is_defined
  var_is_defined, 1, var_312_9_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_27, lambda_28, 1, LOCAL(2),
  // push &names
  var_push, 2, var_298_1_names, LOCAL(2), 1, var_298_1_names,
  // push &kinds option
  var_push, 2, var_299_1_kinds, var_312_1_option, 1, var_299_1_kinds,
  // push &default_values default_value
  var_push, 2, var_301_1_default_values, LOCAL(4), 1, var_301_1_default_values,
  // push &conversions conversion
  var_push, 2, var_302_1_conversions, LOCAL(5), 1, var_302_1_conversions,
  // push &help_messages help
  var_push, 2, var_303_1_help_messages, LOCAL(6), 1, var_303_1_help_messages,
  // cond
  var_cond, 5, lambda_29, lambda_31, lambda_33, lambda_35, lambda_38, IO_TAIL_CALL,
  POS(311, 7),
  POS(313, 7),
  POS(316, 18),
  POS(315, 9),
  POS(314, 7),
  POS(319, 24),
  POS(319, 7),
  POS(322, 16),
  POS(321, 9),
  POS(320, 7),
  POS(325, 7),
  POS(326, 7),
  POS(327, 7),
  POS(328, 7),
  POS(329, 7)
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  0, // parameters
  // value_of(option)
  var_value_of, 1, var_312_1_option, 1, LOCAL(1),
  //  value_of(option)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(317, 14),
  POS(317, 13)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(318, 13)
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  0, // parameters
  // key_of(option)
  var_key_of, 1, var_312_1_option, 1, LOCAL(1),
  //  key_of(option)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(319, 55),
  POS(319, 54)
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  //  name
  LET, 1, var_312_9_name, TAIL_CALL,
  POS(323, 13)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  //  option
  LET, 1, var_312_1_option, TAIL_CALL,
  POS(324, 13)
};

static TAB_NUM t_lambda_29[] = {
  1, // locals
  0, // parameters
  // is_a_string:
  var_is_a_string, 1, var_312_1_option, 1, LOCAL(1),
  //  option.is_a_string:
  LET, 2, LOCAL(1), lambda_30, IO_TAIL_CALL,
  POS(330, 19),
  POS(330, 11)
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  // push &results false
  var_push, 2, var_295_1_results, var_false, 1, var_295_1_results,
  // options(option) idx
  var_296_1_options, 2, var_312_1_option, var_310_3_idx, 1, var_296_1_options,
  // kinds(idx) BOOLEAN_OPTION
  var_299_1_kinds, 2, var_310_3_idx, uni_BOOLEAN_OPTION, 1, var_299_1_kinds,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(331, 11),
  POS(332, 12),
  POS(333, 12),
  POS(334, 11)
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // option == VALUED_OPTION:
  var_std__equal, 2, var_312_1_option, var_VALUED_OPTION, 1, LOCAL(1),
  //  option == VALUED_OPTION:
  LET, 2, LOCAL(1), lambda_32, IO_TAIL_CALL,
  POS(335, 12),
  POS(335, 11)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  // push &results undefined
  var_push, 2, var_295_1_results, var_undefined, 1, var_295_1_results,
  // options(name) idx
  var_296_1_options, 2, var_312_9_name, var_310_3_idx, 1, var_296_1_options,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(336, 11),
  POS(337, 12),
  POS(338, 11)
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // option == MULTI_VALUED_OPTION:
  var_std__equal, 2, var_312_1_option, var_MULTI_VALUED_OPTION, 1, LOCAL(1),
  //  option == MULTI_VALUED_OPTION:
  LET, 2, LOCAL(1), lambda_34, IO_TAIL_CALL,
  POS(339, 12),
  POS(339, 11)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  // push &results empty_list
  var_push, 2, var_295_1_results, var_empty_list, 1, var_295_1_results,
  // options(name) idx
  var_296_1_options, 2, var_312_9_name, var_310_3_idx, 1, var_296_1_options,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(340, 11),
  POS(341, 12),
  POS(342, 11)
};

static TAB_NUM t_lambda_35[] = {
  2, // locals
  0, // parameters
  // option == SOME_PARAMETERS || option == MANY_PARAMETERS:
  var_std__equal, 2, var_312_1_option, var_SOME_PARAMETERS, 1, LOCAL(1),
  // option == SOME_PARAMETERS || option == MANY_PARAMETERS:
  var_std__or, 2, LOCAL(1), lambda_36, 1, LOCAL(2),
  //  option == SOME_PARAMETERS || option == MANY_PARAMETERS:
  LET, 2, LOCAL(2), lambda_37, IO_TAIL_CALL,
  POS(343, 12),
  POS(343, 12),
  POS(343, 11)
};

static TAB_NUM t_lambda_36[] = {
  1, // locals
  0, // parameters
  // option == MANY_PARAMETERS:
  var_std__equal, 2, var_312_1_option, var_MANY_PARAMETERS, 1, LOCAL(1),
  // option == MANY_PARAMETERS:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(343, 41),
  POS(343, 41)
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // push &results empty_list
  var_push, 2, var_295_1_results, var_empty_list, 1, var_295_1_results,
  // is_defined:
  var_is_defined, 1, var_312_9_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_name_is_defined, var_next, IO_TAIL_CALL,
  POS(344, 11),
  POS(346, 18),
  POS(345, 11)
};

static TAB_NUM t_lambda_name_is_defined[] = {
  0, // locals
  0, // parameters
  // parameters(name) idx
  var_297_1_parameters, 2, var_312_9_name, var_310_3_idx, 1, var_297_1_parameters,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(347, 16),
  POS(348, 15)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_39, IO_TAIL_CALL,
  POS(350, 11)
};

static TAB_NUM t_lambda_39[] = {
  1, // locals
  0, // parameters
  // push &results undefined
  var_push, 2, var_295_1_results, var_undefined, 1, var_295_1_results,
  // is_defined:
  var_is_defined, 1, var_312_9_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_name_is_defined, var_next, IO_TAIL_CALL,
  POS(351, 11),
  POS(353, 18),
  POS(352, 11)
};

static TAB_NUM t_lambda_2_name_is_defined[] = {
  0, // locals
  0, // parameters
  // parameters(name) idx
  var_297_1_parameters, 2, var_312_9_name, var_310_3_idx, 1, var_297_1_parameters,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(354, 16),
  POS(355, 15)
};

static TAB_NUM t_lambda_40[] = {
  3, // locals
  0, // parameters
  // length_of(arguments) >= 1:
  var_length_of, 1, var_294_19_arguments, 1, LOCAL(1),
  // length_of(arguments) >= 1:
  var_std__less, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // length_of(arguments) >= 1:
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_41, lambda_52, IO_TAIL_CALL,
  POS(359, 9),
  POS(359, 9),
  POS(359, 9),
  POS(358, 7)
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_42, lambda_44, lambda_47, lambda_50, IO_TAIL_CALL,
  POS(360, 11)
};

static TAB_NUM t_lambda_42[] = {
  2, // locals
  0, // parameters
  // arguments(1) == "--help":
  var_294_19_arguments, 1, num_1, 1, LOCAL(1),
  // arguments(1) == "--help":
  var_std__equal, 2, LOCAL(1), str_help, 1, LOCAL(2),
  //  arguments(1) == "--help":
  LET, 2, LOCAL(2), lambda_43, IO_TAIL_CALL,
  POS(361, 16),
  POS(361, 16),
  POS(361, 15)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  // show_usage!
  func_show_usage, 0, IO_CALL(0),
  // terminate!
  var_terminate, 0, IO_TAIL_CALL,
  POS(362, 15),
  POS(363, 15)
};

static TAB_NUM t_lambda_44[] = {
  2, // locals
  0, // parameters
  // is_defined && arguments(1) == "--copyright":
  var_is_defined, 1, var_307_42_copyright, 1, LOCAL(1),
  // is_defined && arguments(1) == "--copyright":
  var_std__and, 2, LOCAL(1), lambda_45, 1, LOCAL(2),
  //  copyright.is_defined && arguments(1) == "--copyright":
  LET, 2, LOCAL(2), lambda_46, IO_TAIL_CALL,
  POS(364, 26),
  POS(364, 26),
  POS(364, 15)
};

static TAB_NUM t_lambda_45[] = {
  2, // locals
  0, // parameters
  // arguments(1) == "--copyright":
  var_294_19_arguments, 1, num_1, 1, LOCAL(1),
  // arguments(1) == "--copyright":
  var_std__equal, 2, LOCAL(1), str_copyright, 1, LOCAL(2),
  // arguments(1) == "--copyright":
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(364, 40),
  POS(364, 40),
  POS(364, 40)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  // show_copyright!
  func_show_copyright, 0, IO_CALL(0),
  // terminate!
  var_terminate, 0, IO_TAIL_CALL,
  POS(365, 15),
  POS(366, 15)
};

static TAB_NUM t_lambda_47[] = {
  2, // locals
  0, // parameters
  // is_defined && arguments(1) == "--version":
  var_is_defined, 1, var_307_53_version, 1, LOCAL(1),
  // is_defined && arguments(1) == "--version":
  var_std__and, 2, LOCAL(1), lambda_48, 1, LOCAL(2),
  //  version.is_defined && arguments(1) == "--version":
  LET, 2, LOCAL(2), lambda_49, IO_TAIL_CALL,
  POS(367, 24),
  POS(367, 24),
  POS(367, 15)
};

static TAB_NUM t_lambda_48[] = {
  2, // locals
  0, // parameters
  // arguments(1) == "--version":
  var_294_19_arguments, 1, num_1, 1, LOCAL(1),
  // arguments(1) == "--version":
  var_std__equal, 2, LOCAL(1), str_version, 1, LOCAL(2),
  // arguments(1) == "--version":
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(367, 38),
  POS(367, 38),
  POS(367, 38)
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  // show_version!
  func_show_version, 0, IO_CALL(0),
  // terminate!
  var_terminate, 0, IO_TAIL_CALL,
  POS(368, 15),
  POS(369, 15)
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_51, IO_TAIL_CALL,
  POS(370, 15)
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  // initialize_results!
  func_initialize_results, 0, IO_TAIL_CALL,
  POS(371, 15)
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  // initialize_results!
  func_initialize_results, 0, IO_TAIL_CALL,
  POS(373, 11)
};

static TAB_NUM t_func_initialize_results[] = {
  0, // locals
  0, // parameters
  // $idx 1
  LET, 1, num_1, 1, var_376_1_idx,
  // $do_fetch_option_value false
  LET, 1, var_false, 1, var_377_1_do_fetch_option_value,
  // $option_idx undefined
  LET, 1, var_undefined, 1, var_378_1_option_idx,
  // for_each arguments
  var_for_each, 3, var_294_19_arguments, lambda_53, lambda_63, IO_TAIL_CALL,
  POS(376, 5),
  POS(377, 5),
  POS(378, 5),
  POS(379, 5)
};

static TAB_NUM t_lambda_53[] = {
  1, // locals
  1, // parameters
  var_380_3_argument,
  // argument == "--":
  var_std__equal, 2, var_380_3_argument, string_4, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_54, lambda_55, IO_TAIL_CALL,
  POS(382, 11),
  POS(381, 9)
};

static TAB_NUM t_lambda_54[] = {
  4, // locals
  0, // parameters
  // idx-1) range(arguments idx+1 -1))
  var_std__minus, 2, var_376_1_idx, num_1, 1, LOCAL(1),
  // range(arguments 1 idx-1) range(arguments idx+1 -1))
  var_range, 3, var_294_19_arguments, num_1, LOCAL(1), 1, LOCAL(2),
  // idx+1 -1))
  var_std__plus, 2, var_376_1_idx, num_1, 1, LOCAL(3),
  // range(arguments idx+1 -1))
  var_range, 3, var_294_19_arguments, LOCAL(3), minus_num_1, 1, LOCAL(4),
  // !arguments
  var_append, 2, LOCAL(2), LOCAL(4), 1, var_294_19_arguments,
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(384, 40),
  POS(384, 22),
  POS(384, 63),
  POS(384, 47),
  POS(383, 13),
  POS(385, 13)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_377_1_do_fetch_option_value, lambda_do_fetch_option_value, lambda_57, IO_TAIL_CALL,
  POS(387, 13)
};

static TAB_NUM t_lambda_do_fetch_option_value[] = {
  4, // locals
  0, // parameters
  // !do_fetch_option_value false
  LET, 1, var_false, 1, var_377_1_do_fetch_option_value,
  // idx-1) range(arguments idx+1 -1))
  var_std__minus, 2, var_376_1_idx, num_1, 1, LOCAL(1),
  // range(arguments 1 idx-1) range(arguments idx+1 -1))
  var_range, 3, var_294_19_arguments, num_1, LOCAL(1), 1, LOCAL(2),
  // idx+1 -1))
  var_std__plus, 2, var_376_1_idx, num_1, 1, LOCAL(3),
  // range(arguments idx+1 -1))
  var_range, 3, var_294_19_arguments, LOCAL(3), minus_num_1, 1, LOCAL(4),
  // !arguments
  var_append, 2, LOCAL(2), LOCAL(4), 1, var_294_19_arguments,
  // kinds(option_idx)
  var_299_1_kinds, 1, var_378_1_option_idx, 1, LOCAL(1),
  // case kinds(option_idx)
  var_case, 6, LOCAL(1), var_VALUED_OPTION, lambda_VALUED_OPTION, var_MULTI_VALUED_OPTION, lambda_MULTI_VALUED_OPTION, lambda_56, IO_TAIL_CALL,
  POS(389, 17),
  POS(391, 44),
  POS(391, 26),
  POS(391, 67),
  POS(391, 51),
  POS(390, 17),
  POS(392, 22),
  POS(392, 17)
};

static TAB_NUM t_lambda_VALUED_OPTION[] = {
  0, // locals
  0, // parameters
  // results(option_idx) argument
  var_295_1_results, 2, var_378_1_option_idx, var_380_3_argument, 1, var_295_1_results,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(394, 22),
  POS(395, 21)
};

static TAB_NUM t_lambda_MULTI_VALUED_OPTION[] = {
  1, // locals
  0, // parameters
  // results(option_idx) argument
  var_295_1_results, 1, var_378_1_option_idx, 1, LOCAL(1),
  // push &results(option_idx) argument
  var_push, 2, LOCAL(1), var_380_3_argument, 1, LOCAL(1),
  // results(option_idx) argument
  var_295_1_results, 2, var_378_1_option_idx, LOCAL(1), 1, var_295_1_results,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(397, 27),
  POS(397, 21),
  POS(397, 27),
  POS(398, 21)
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(400, 21)
};

static TAB_NUM t_lambda_57[] = {
  1, // locals
  0, // parameters
  // argument .has_prefix. "--":
  var_has_prefix, 2, var_380_3_argument, string_4, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_58, lambda_62, IO_TAIL_CALL,
  POS(403, 19),
  POS(402, 17)
};

static TAB_NUM t_lambda_58[] = {
  1, // locals
  0, // parameters
  // range(argument 3 -1))
  var_range, 3, var_380_3_argument, num_3, minus_num_1, 1, LOCAL(1),
  // !option_idx options(range(argument 3 -1))
  var_296_1_options, 1, LOCAL(1), 1, var_378_1_option_idx,
  // is_undefined:
  var_is_undefined, 1, var_378_1_option_idx, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_option_idx_is_undefined, lambda_59, IO_TAIL_CALL,
  POS(404, 41),
  POS(404, 21),
  POS(406, 34),
  POS(405, 21)
};

static TAB_NUM t_lambda_option_idx_is_undefined[] = {
  1, // locals
  0, // parameters
  // "Invalid option: @(argument)!"
  var_std__string, 3, str_Invalid_option, var_380_3_argument, string_5, 1, LOCAL(1),
  // Error! "Invalid option: @(argument)!"
  var_Error, 1, LOCAL(1), IO_TAIL_CALL,
  POS(407, 32),
  POS(407, 25)
};

static TAB_NUM t_lambda_59[] = {
  2, // locals
  0, // parameters
  // kinds(option_idx) == BOOLEAN_OPTION:
  var_299_1_kinds, 1, var_378_1_option_idx, 1, LOCAL(1),
  // kinds(option_idx) == BOOLEAN_OPTION:
  var_std__equal, 2, LOCAL(1), uni_BOOLEAN_OPTION, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_60, lambda_61, IO_TAIL_CALL,
  POS(410, 27),
  POS(410, 27),
  POS(409, 25)
};

static TAB_NUM t_lambda_60[] = {
  4, // locals
  0, // parameters
  // results(option_idx) true
  var_295_1_results, 2, var_378_1_option_idx, var_true, 1, var_295_1_results,
  // idx-1) range(arguments idx+1 -1))
  var_std__minus, 2, var_376_1_idx, num_1, 1, LOCAL(1),
  // range(arguments 1 idx-1) range(arguments idx+1 -1))
  var_range, 3, var_294_19_arguments, num_1, LOCAL(1), 1, LOCAL(2),
  // idx+1 -1))
  var_std__plus, 2, var_376_1_idx, num_1, 1, LOCAL(3),
  // range(arguments idx+1 -1))
  var_range, 3, var_294_19_arguments, LOCAL(3), minus_num_1, 1, LOCAL(4),
  // !arguments
  var_append, 2, LOCAL(2), LOCAL(4), 1, var_294_19_arguments,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(411, 30),
  POS(413, 56),
  POS(413, 38),
  POS(413, 79),
  POS(413, 63),
  POS(412, 29),
  POS(414, 29)
};

static TAB_NUM t_lambda_61[] = {
  4, // locals
  0, // parameters
  // !do_fetch_option_value true
  LET, 1, var_true, 1, var_377_1_do_fetch_option_value,
  // idx-1) range(arguments idx+1 -1))
  var_std__minus, 2, var_376_1_idx, num_1, 1, LOCAL(1),
  // range(arguments 1 idx-1) range(arguments idx+1 -1))
  var_range, 3, var_294_19_arguments, num_1, LOCAL(1), 1, LOCAL(2),
  // idx+1 -1))
  var_std__plus, 2, var_376_1_idx, num_1, 1, LOCAL(3),
  // range(arguments idx+1 -1))
  var_range, 3, var_294_19_arguments, LOCAL(3), minus_num_1, 1, LOCAL(4),
  // !arguments
  var_append, 2, LOCAL(2), LOCAL(4), 1, var_294_19_arguments,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(416, 29),
  POS(418, 56),
  POS(418, 38),
  POS(418, 79),
  POS(418, 63),
  POS(417, 29),
  POS(419, 29)
};

static TAB_NUM t_lambda_62[] = {
  0, // locals
  0, // parameters
  // inc &idx
  var_inc, 1, var_376_1_idx, 1, var_376_1_idx,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(421, 21),
  POS(422, 21)
};

static TAB_NUM t_lambda_63[] = {
  0, // locals
  0, // parameters
  // evaluate_arguments!
  func_evaluate_arguments, 0, IO_TAIL_CALL,
  POS(424, 9)
};

static TAB_NUM t_func_evaluate_arguments[] = {
  0, // locals
  0, // parameters
  // $last_idx length_of(templates)
  var_length_of, 1, var_294_29_templates, 1, var_427_1_last_idx,
  // from_to_by last_idx 1 -1
  var_from_to_by, 5, var_427_1_last_idx, num_1, minus_num_1, lambda_64, lambda_69, IO_TAIL_CALL,
  POS(427, 5),
  POS(428, 5)
};

static TAB_NUM t_lambda_64[] = {
  2, // locals
  1, // parameters
  var_429_3_idx,
  // templates(idx)
  var_294_29_templates, 1, var_429_3_idx, 1, LOCAL(1),
  // extract_from_template templates(idx)
  func_extract_from_template, 1, LOCAL(1), 5, var_431_1_option, LOCAL(2), LOCAL(2), LOCAL(2), LOCAL(2),
  // is_a_key_value_pair &option -> key_of(option)
  var_is_a_key_value_pair, 1, var_431_1_option, 1, LOCAL(1),
  // update_if option.is_a_key_value_pair &option -> key_of(option)
  var_update_if, 3, LOCAL(1), var_431_1_option, lambda_65, 1, var_431_1_option,
  // OPTIONAL_PARAMETER, SOME_PARAMETERS, MANY_PARAMETERS:
  var_std__sequence, 3, var_OPTIONAL_PARAMETER, var_SOME_PARAMETERS, var_MANY_PARAMETERS, 1, LOCAL(1),
  // case option
  var_case, 6, var_431_1_option, var_MANDATORY_PARAMETER, lambda_MANDATORY_PARAMETER, LOCAL(1), lambda_67, lambda_68, IO_TAIL_CALL,
  POS(430, 31),
  POS(430, 9),
  POS(432, 26),
  POS(432, 9),
  POS(442, 11),
  POS(433, 9)
};

static TAB_NUM t_lambda_65[] = {
  1, // locals
  0, // parameters
  // key_of(option)
  var_key_of, 1, var_431_1_option, 1, LOCAL(1),
  //  key_of(option)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(432, 57),
  POS(432, 56)
};

static TAB_NUM t_lambda_MANDATORY_PARAMETER[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_294_19_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_too_few_arguments_error, lambda_66, IO_TAIL_CALL,
  POS(436, 25),
  POS(435, 13)
};

static TAB_NUM t_lambda_66[] = {
  1, // locals
  0, // parameters
  // pop &arguments !results(idx)
  var_pop, 1, var_294_19_arguments, 2, var_294_19_arguments, LOCAL(1),
  // results(idx)
  var_295_1_results, 2, var_429_3_idx, LOCAL(1), 1, var_295_1_results,
  // !last_idx idx-1
  var_std__minus, 2, var_429_3_idx, num_1, 1, var_427_1_last_idx,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(439, 17),
  POS(439, 33),
  POS(440, 17),
  POS(441, 17)
};

static TAB_NUM t_lambda_67[] = {
  0, // locals
  0, // parameters
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(443, 13)
};

static TAB_NUM t_lambda_68[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(445, 13)
};

static TAB_NUM t_lambda_69[] = {
  0, // locals
  0, // parameters
  // from_to 1 last_idx
  var_from_to, 4, num_1, var_427_1_last_idx, lambda_70, lambda_78, IO_TAIL_CALL,
  POS(447, 9)
};

static TAB_NUM t_lambda_70[] = {
  2, // locals
  1, // parameters
  var_448_3_idx,
  // templates(idx)
  var_294_29_templates, 1, var_448_3_idx, 1, LOCAL(1),
  // extract_from_template templates(idx)
  func_extract_from_template, 1, LOCAL(1), 5, var_450_1_option, LOCAL(2), LOCAL(2), LOCAL(2), LOCAL(2),
  // is_a_key_value_pair &option -> key_of(option)
  var_is_a_key_value_pair, 1, var_450_1_option, 1, LOCAL(1),
  // update_if option.is_a_key_value_pair &option -> key_of(option)
  var_update_if, 3, LOCAL(1), var_450_1_option, lambda_71, 1, var_450_1_option,
  // case option
  var_case, 10, var_450_1_option, var_MANDATORY_PARAMETER, lambda_2_MANDATORY_PARAMETER, var_OPTIONAL_PARAMETER, lambda_OPTIONAL_PARAMETER, var_SOME_PARAMETERS, lambda_SOME_PARAMETERS, var_MANY_PARAMETERS, lambda_MANY_PARAMETERS, lambda_77, IO_TAIL_CALL,
  POS(449, 35),
  POS(449, 13),
  POS(451, 30),
  POS(451, 13),
  POS(452, 13)
};

static TAB_NUM t_lambda_71[] = {
  1, // locals
  0, // parameters
  // key_of(option)
  var_key_of, 1, var_450_1_option, 1, LOCAL(1),
  //  key_of(option)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(451, 61),
  POS(451, 60)
};

static TAB_NUM t_lambda_2_MANDATORY_PARAMETER[] = {
  2, // locals
  0, // parameters
  // length_of(arguments) == 0:
  var_length_of, 1, var_294_19_arguments, 1, LOCAL(1),
  // length_of(arguments) == 0:
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_72, lambda_73, IO_TAIL_CALL,
  POS(455, 19),
  POS(455, 19),
  POS(454, 17)
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  0, // parameters
  // too_few_arguments_error!
  func_too_few_arguments_error, 0, IO_TAIL_CALL,
  POS(456, 21)
};

static TAB_NUM t_lambda_73[] = {
  1, // locals
  0, // parameters
  // get &arguments !results(idx)
  var_get, 1, var_294_19_arguments, 2, var_294_19_arguments, LOCAL(1),
  // results(idx)
  var_295_1_results, 2, var_448_3_idx, LOCAL(1), 1, var_295_1_results,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(458, 21),
  POS(458, 37),
  POS(459, 21)
};

static TAB_NUM t_lambda_OPTIONAL_PARAMETER[] = {
  2, // locals
  0, // parameters
  // length_of(arguments) > 0:
  var_length_of, 1, var_294_19_arguments, 1, LOCAL(1),
  // 0:
  var_std__less, 2, num_0, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_74, var_next, IO_TAIL_CALL,
  POS(462, 19),
  POS(462, 42),
  POS(461, 17)
};

static TAB_NUM t_lambda_74[] = {
  1, // locals
  0, // parameters
  // get &arguments !results(idx)
  var_get, 1, var_294_19_arguments, 2, var_294_19_arguments, LOCAL(1),
  // results(idx)
  var_295_1_results, 2, var_448_3_idx, LOCAL(1), 1, var_295_1_results,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(463, 21),
  POS(463, 37),
  POS(464, 21)
};

static TAB_NUM t_lambda_SOME_PARAMETERS[] = {
  0, // locals
  0, // parameters
  // results(idx) arguments
  var_295_1_results, 2, var_448_3_idx, var_294_19_arguments, 1, var_295_1_results,
  // !arguments empty_list
  LET, 1, var_empty_list, 1, var_294_19_arguments,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(467, 18),
  POS(468, 17),
  POS(469, 17)
};

static TAB_NUM t_lambda_MANY_PARAMETERS[] = {
  2, // locals
  0, // parameters
  // length_of(arguments) == 0:
  var_length_of, 1, var_294_19_arguments, 1, LOCAL(1),
  // length_of(arguments) == 0:
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_75, lambda_76, IO_TAIL_CALL,
  POS(472, 19),
  POS(472, 19),
  POS(471, 17)
};

static TAB_NUM t_lambda_75[] = {
  0, // locals
  0, // parameters
  // too_few_arguments_error!
  func_too_few_arguments_error, 0, IO_TAIL_CALL,
  POS(473, 21)
};

static TAB_NUM t_lambda_76[] = {
  0, // locals
  0, // parameters
  // results(idx) arguments
  var_295_1_results, 2, var_448_3_idx, var_294_19_arguments, 1, var_295_1_results,
  // !arguments empty_list
  LET, 1, var_empty_list, 1, var_294_19_arguments,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(475, 22),
  POS(476, 21),
  POS(477, 21)
};

static TAB_NUM t_lambda_77[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(479, 17)
};

static TAB_NUM t_lambda_78[] = {
  0, // locals
  0, // parameters
  // check_results!
  func_check_results, 0, IO_TAIL_CALL,
  POS(481, 13)
};

static TAB_NUM t_func_check_results[] = {
  1, // locals
  0, // parameters
  // is_not_empty:
  var_is_not_empty, 1, var_294_19_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_arguments_is_not_empty, lambda_79, IO_TAIL_CALL,
  POS(485, 17),
  POS(484, 5)
};

static TAB_NUM t_lambda_arguments_is_not_empty[] = {
  0, // locals
  0, // parameters
  // too_many_arguments_error!
  func_too_many_arguments_error, 0, IO_TAIL_CALL,
  POS(486, 9)
};

static TAB_NUM t_lambda_79[] = {
  0, // locals
  0, // parameters
  // for_each results
  var_for_each, 3, var_295_1_results, lambda_80, lambda_92, IO_TAIL_CALL,
  POS(488, 9)
};

static TAB_NUM t_lambda_80[] = {
  2, // locals
  2, // parameters
  var_489_3_idx,
  var_489_7_result,
  // is_undefined && default_values(idx).is_defined:
  var_is_undefined, 1, var_489_7_result, 1, LOCAL(1),
  // is_undefined && default_values(idx).is_defined:
  var_std__and, 2, LOCAL(1), lambda_81, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_82, lambda_83, IO_TAIL_CALL,
  POS(491, 22),
  POS(491, 22),
  POS(490, 13)
};

static TAB_NUM t_lambda_81[] = {
  2, // locals
  0, // parameters
  // default_values(idx).is_defined:
  var_301_1_default_values, 1, var_489_3_idx, 1, LOCAL(1),
  // is_defined:
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // default_values(idx).is_defined:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(491, 38),
  POS(491, 58),
  POS(491, 38)
};

static TAB_NUM t_lambda_82[] = {
  2, // locals
  0, // parameters
  // !results(idx) default_values(idx)
  var_301_1_default_values, 1, var_489_3_idx, 1, LOCAL(2),
  // results(idx) default_values(idx)
  var_295_1_results, 2, var_489_3_idx, LOCAL(2), 1, var_295_1_results,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(492, 17),
  POS(492, 18),
  POS(493, 17)
};

static TAB_NUM t_lambda_83[] = {
  1, // locals
  0, // parameters
  // $possible_value possible_values(idx)
  var_300_1_possible_values, 1, var_489_3_idx, 1, var_495_1_possible_value,
  // is_defined:
  var_is_defined, 1, var_495_1_possible_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_possible_value_is_defined, lambda_86, IO_TAIL_CALL,
  POS(495, 17),
  POS(497, 34),
  POS(496, 17)
};

static TAB_NUM t_lambda_possible_value_is_defined[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_489_7_result, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_result_is_a_list, lambda_85, IO_TAIL_CALL,
  POS(499, 30),
  POS(498, 21)
};

static TAB_NUM t_lambda_result_is_a_list[] = {
  0, // locals
  0, // parameters
  // for_each result: (item) check item
  var_for_each, 2, var_489_7_result, lambda_84, TAIL_CALL,
  POS(500, 25)
};

static TAB_NUM t_lambda_84[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 500_18_item
  // check item
  func_check, 1, LOCAL(1), TAIL_CALL,
  POS(500, 49)
};

static TAB_NUM t_lambda_85[] = {
  2, // locals
  0, // parameters
  // check! result
  func_check, 1, var_489_7_result, IO_CALL(0),
  // !results(idx) convert(result)
  func_convert, 1, var_489_7_result, 1, LOCAL(2),
  // results(idx) convert(result)
  var_295_1_results, 2, var_489_3_idx, LOCAL(2), 1, var_295_1_results,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(502, 25),
  POS(503, 25),
  POS(503, 26),
  POS(504, 25)
};

static TAB_NUM t_lambda_86[] = {
  2, // locals
  0, // parameters
  // !results(idx) convert(result)
  func_convert, 1, var_489_7_result, 1, LOCAL(2),
  // results(idx) convert(result)
  var_295_1_results, 2, var_489_3_idx, LOCAL(2), 1, var_295_1_results,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(506, 21),
  POS(506, 22),
  POS(507, 21)
};

static TAB_NUM t_func_check[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 509_9_value
  // possible_value(value)
  var_495_1_possible_value, 1, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_pass, lambda_87, IO_TAIL_CALL,
  POS(511, 21),
  POS(510, 19)
};

static TAB_NUM t_lambda_87[] = {
  3, // locals
  0, // parameters
  // names(idx).to_upper_case)!@nl;"
  var_298_1_names, 1, var_489_3_idx, 1, LOCAL(1),
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
  POS(515, 55),
  POS(515, 66),
  POS(515, 25),
  POS(514, 23),
  POS(516, 23),
  POS(517, 23)
};

static TAB_NUM t_func_convert[] = {
  1, // locals
  1, // parameters
  var_519_11_value,
  // $conversion conversions(idx)
  var_302_1_conversions, 1, var_489_3_idx, 1, var_520_1_conversion,
  // is_undefined
  var_is_undefined, 1, var_520_1_conversion, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_88, lambda_89, TAIL_CALL,
  POS(520, 19),
  POS(522, 32),
  POS(521, 19)
};

static TAB_NUM t_lambda_88[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_519_11_value, TAIL_CALL,
  POS(523, 23)
};

static TAB_NUM t_lambda_89[] = {
  1, // locals
  0, // parameters
  // is_a_string
  var_is_a_string, 1, var_519_11_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_90, lambda_91, TAIL_CALL,
  POS(526, 31),
  POS(525, 23)
};

static TAB_NUM t_lambda_90[] = {
  1, // locals
  0, // parameters
  // conversion(value)
  var_520_1_conversion, 1, var_519_11_value, 1, LOCAL(1),
  //  conversion(value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(527, 28),
  POS(527, 27)
};

static TAB_NUM t_lambda_91[] = {
  1, // locals
  0, // parameters
  // map(value conversion)
  var_map, 2, var_519_11_value, var_520_1_conversion, 1, LOCAL(1),
  //  map(value conversion)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(528, 28),
  POS(528, 27)
};

static TAB_NUM t_lambda_92[] = {
  0, // locals
  0, // parameters
  // spread results
  var_spread, 1, var_295_1_results, TAIL_CALL,
  POS(530, 13)
};

static TAB_NUM t_func_help_message[] = {
  1, // locals
  1, // parameters
  var_532_16_idx,
  // $message help_messages(idx)
  var_303_1_help_messages, 1, var_532_16_idx, 1, var_533_1_message,
  // $possible_value possible_values(idx)
  var_300_1_possible_values, 1, var_532_16_idx, 1, var_534_1_possible_value,
  // is_defined:
  var_is_defined, 1, var_534_1_possible_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_possible_value_is_defined, func_handle_default_value, TAIL_CALL,
  POS(533, 5),
  POS(534, 5),
  POS(536, 22),
  POS(535, 5)
};

static TAB_NUM t_lambda_2_possible_value_is_defined[] = {
  0, // locals
  0, // parameters
  // append &message "valid values:"
  var_append, 2, var_533_1_message, str_valid_values, 1, var_533_1_message,
  // for_each possible_value
  var_for_each, 3, var_534_1_possible_value, lambda_93, lambda_94, TAIL_CALL,
  POS(537, 9),
  POS(538, 9)
};

static TAB_NUM t_lambda_93[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 539_3_value
  // string(' ' value ',')
  var_string, 3, chr_32, LOCAL(2), chr_44, 1, LOCAL(1),
  // append &message string(' ' value ',')
  var_append, 2, var_533_1_message, LOCAL(1), 1, var_533_1_message,
  // next
  var_next, 0, TAIL_CALL,
  POS(540, 29),
  POS(540, 13),
  POS(541, 13)
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  // message(-1) '@nl;'
  var_533_1_message, 2, minus_num_1, chr_10, 1, var_533_1_message,
  // handle_default_value
  func_handle_default_value, 0, TAIL_CALL,
  POS(543, 14),
  POS(544, 13)
};

static TAB_NUM t_func_handle_default_value[] = {
  1, // locals
  0, // parameters
  // $default_value default_values(idx)
  var_301_1_default_values, 1, var_532_16_idx, 1, var_548_1_default_value,
  // is_defined:
  var_is_defined, 1, var_548_1_default_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_default_value_is_defined, lambda_95, TAIL_CALL,
  POS(548, 7),
  POS(550, 23),
  POS(549, 7)
};

static TAB_NUM t_lambda_default_value_is_defined[] = {
  1, // locals
  0, // parameters
  // message(-1) ' '
  var_533_1_message, 2, minus_num_1, chr_32, 1, var_533_1_message,
  // "(default value: @(default_value))"
  var_std__string, 3, str_default_value, var_548_1_default_value, string_7, 1, LOCAL(1),
  // append message "(default value: @(default_value))"
  var_append, 2, var_533_1_message, LOCAL(1), TAIL_CALL,
  POS(551, 12),
  POS(552, 26),
  POS(552, 11)
};

static TAB_NUM t_lambda_95[] = {
  0, // locals
  0, // parameters
  //  message
  LET, 1, var_533_1_message, TAIL_CALL,
  POS(553, 11)
};

static TAB_NUM t_func_show_usage[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_307_53_version, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_97, var_pass, IO_CALL(0),
  // eprintln! "Usage:"
  var_eprintln, 1, str_Usage, IO_CALL(0),
  // is_defined:
  var_is_defined, 1, var_307_42_copyright, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_copyright_is_defined, var_pass, IO_CALL(0),
  // eprintln! "  " command_name " --help"
  var_eprintln, 3, string_1, var_304_1_command_name, str__help, IO_CALL(0),
  // eprint! "  " command_name
  var_eprint, 2, string_1, var_304_1_command_name, IO_CALL(0),
  // for_each parameters
  var_for_each, 3, var_297_1_parameters, lambda_98, lambda_99, IO_CALL(0),
  // eprint! "
  var_eprint, 1, str_Parameters, IO_CALL(0),
  // do:
  var_do, 1, lambda_do, IO_CALL(0),
  // is_empty
  var_is_empty, 1, var_296_1_options, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_pass, lambda_102, IO_TAIL_CALL,
  POS(568, 15),
  POS(567, 5),
  POS(572, 5),
  POS(574, 17),
  POS(573, 5),
  POS(577, 5),
  POS(578, 5),
  POS(579, 5),
  POS(585, 5),
  POS(588, 5),
  POS(597, 15),
  POS(596, 5)
};

static TAB_NUM t_func_parameter_name[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 556_18_parameter
  LOCAL(3), // 556_28_idx
  // $buf parameter.to_upper_case
  var_to_upper_case, 1, LOCAL(2), 1, var_557_1_buf,
  // kinds(idx)
  var_299_1_kinds, 1, LOCAL(3), 1, LOCAL(1),
  // case kinds(idx)
  var_case, 8, LOCAL(1), var_OPTIONAL_PARAMETER, lambda_2_OPTIONAL_PARAMETER, var_SOME_PARAMETERS, lambda_2_SOME_PARAMETERS, var_MANY_PARAMETERS, lambda_2_MANY_PARAMETERS, lambda_96, TAIL_CALL,
  POS(557, 7),
  POS(558, 12),
  POS(558, 7)
};

static TAB_NUM t_lambda_2_OPTIONAL_PARAMETER[] = {
  0, // locals
  0, // parameters
  // push buf '?'
  var_push, 2, var_557_1_buf, chr_63, TAIL_CALL,
  POS(560, 11)
};

static TAB_NUM t_lambda_2_SOME_PARAMETERS[] = {
  0, // locals
  0, // parameters
  // push buf '*'
  var_push, 2, var_557_1_buf, chr_42, TAIL_CALL,
  POS(562, 11)
};

static TAB_NUM t_lambda_2_MANY_PARAMETERS[] = {
  0, // locals
  0, // parameters
  // push buf '+'
  var_push, 2, var_557_1_buf, chr_43, TAIL_CALL,
  POS(564, 11)
};

static TAB_NUM t_lambda_96[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_557_1_buf, TAIL_CALL,
  POS(565, 11)
};

static TAB_NUM t_lambda_97[] = {
  0, // locals
  0, // parameters
  // show_version!
  func_show_version, 0, IO_TAIL_CALL,
  POS(570, 9)
};

static TAB_NUM t_lambda_copyright_is_defined[] = {
  0, // locals
  0, // parameters
  // eprintln! "  " command_name " --copyright"
  var_eprintln, 3, string_1, var_304_1_command_name, str__copyright, IO_TAIL_CALL,
  POS(575, 9)
};

static TAB_NUM t_lambda_98[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 580_3_parameter
  LOCAL(3), // 580_13_idx
  // parameter_name(parameter idx)
  func_parameter_name, 2, LOCAL(2), LOCAL(3), 1, LOCAL(1),
  // eprint! " " parameter_name(parameter idx)
  var_eprint, 2, string_3, LOCAL(1), IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(581, 21),
  POS(581, 9),
  POS(582, 9)
};

static TAB_NUM t_lambda_99[] = {
  0, // locals
  0, // parameters
  // eprintln!
  var_eprintln, 0, IO_TAIL_CALL,
  POS(584, 9)
};

static TAB_NUM t_lambda_do[] = {
  0, // locals
  0, // parameters
  // $table empty_list
  LET, 1, var_empty_list, 1, var_589_1_table,
  // for_each parameters
  var_for_each, 3, var_297_1_parameters, lambda_100, lambda_101, IO_TAIL_CALL,
  POS(589, 7),
  POS(590, 7)
};

static TAB_NUM t_lambda_100[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 591_3_parameter
  LOCAL(5), // 591_13_idx
  // parameter_name(parameter idx) help_message(idx))
  func_parameter_name, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // help_message(idx))
  func_help_message, 1, LOCAL(5), 1, LOCAL(2),
  // list(parameter_name(parameter idx) help_message(idx))
  var_list, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // push &table list(parameter_name(parameter idx) help_message(idx))
  var_push, 2, var_589_1_table, LOCAL(3), 1, var_589_1_table,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(592, 28),
  POS(592, 58),
  POS(592, 23),
  POS(592, 11),
  POS(593, 11)
};

static TAB_NUM t_lambda_101[] = {
  0, // locals
  0, // parameters
  // display_table! table
  func_display_table, 1, var_589_1_table, IO_TAIL_CALL,
  POS(595, 11)
};

static TAB_NUM t_lambda_102[] = {
  0, // locals
  0, // parameters
  // eprint! "
  var_eprint, 1, str_Options, IO_CALL(0),
  // $table empty_list
  LET, 1, var_empty_list, 1, var_603_1_table,
  // for_each options
  var_for_each, 3, var_296_1_options, lambda_103, lambda_105, IO_TAIL_CALL,
  POS(600, 9),
  POS(603, 9),
  POS(604, 9)
};

static TAB_NUM t_lambda_103[] = {
  3, // locals
  2, // parameters
  var_605_3_option,
  var_605_10_idx,
  // option_name() help_message(idx))
  func_option_name, 0, 1, LOCAL(1),
  // help_message(idx))
  func_help_message, 1, var_605_10_idx, 1, LOCAL(2),
  // list(option_name() help_message(idx))
  var_list, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // push &table list(option_name() help_message(idx))
  var_push, 2, var_603_1_table, LOCAL(3), 1, var_603_1_table,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(606, 30),
  POS(606, 44),
  POS(606, 25),
  POS(606, 13),
  POS(607, 13)
};

static TAB_NUM t_func_option_name[] = {
  1, // locals
  0, // parameters
  // $buf string("--" option)
  var_string, 2, string_4, var_605_3_option, 1, var_610_1_buf,
  // kinds(idx)
  var_299_1_kinds, 1, var_605_10_idx, 1, LOCAL(1),
  // case kinds(idx)
  var_case, 6, LOCAL(1), var_VALUED_OPTION, lambda_2_VALUED_OPTION, var_MULTI_VALUED_OPTION, lambda_2_MULTI_VALUED_OPTION, lambda_104, TAIL_CALL,
  POS(610, 15),
  POS(611, 20),
  POS(611, 15)
};

static TAB_NUM t_lambda_2_VALUED_OPTION[] = {
  0, // locals
  0, // parameters
  // append buf " VALUE"
  var_append, 2, var_610_1_buf, str__VALUE, TAIL_CALL,
  POS(613, 19)
};

static TAB_NUM t_lambda_2_MULTI_VALUED_OPTION[] = {
  0, // locals
  0, // parameters
  // append buf " VALUES"
  var_append, 2, var_610_1_buf, str__VALUES, TAIL_CALL,
  POS(615, 19)
};

static TAB_NUM t_lambda_104[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_610_1_buf, TAIL_CALL,
  POS(616, 19)
};

static TAB_NUM t_lambda_105[] = {
  0, // locals
  0, // parameters
  // display_table! table
  func_display_table, 1, var_603_1_table, IO_TAIL_CALL,
  POS(618, 13)
};

static TAB_NUM t_func_show_version[] = {
  1, // locals
  0, // parameters
  // "@(command_name) @(version)@nl;"
  var_std__string, 4, var_304_1_command_name, string_3, var_307_53_version, string_8, 1, LOCAL(1),
  // eprint! "@(command_name) @(version)@nl;"
  var_eprint, 1, LOCAL(1), IO_TAIL_CALL,
  POS(621, 13),
  POS(621, 5)
};

static TAB_NUM t_func_show_copyright[] = {
  0, // locals
  0, // parameters
  // eprint! copyright
  var_eprint, 1, var_307_42_copyright, IO_TAIL_CALL,
  POS(624, 5)
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
  POS(627, 5),
  POS(629, 5),
  POS(630, 5)
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
  POS(633, 5),
  POS(635, 5),
  POS(636, 5)
};

static TAB_NUM t_func_extract_copyright_and_version[] = {
  0, // locals
  1, // parameters
  var_638_33_templates,
  // $copyright undefined
  LET, 1, var_undefined, 1, var_639_1_copyright,
  // $version undefined
  LET, 1, var_undefined, 1, var_640_1_version,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(639, 3),
  POS(640, 3),
  POS(641, 3)
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_638_33_templates, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_106, lambda_107, TAIL_CALL,
  POS(643, 17),
  POS(642, 5)
};

static TAB_NUM t_lambda_106[] = {
  0, // locals
  0, // parameters
  //  templates copyright version
  LET, 3, var_638_33_templates, var_639_1_copyright, var_640_1_version, TAIL_CALL,
  POS(644, 9)
};

static TAB_NUM t_lambda_107[] = {
  2, // locals
  0, // parameters
  // templates(1)
  var_638_33_templates, 1, num_1, 1, LOCAL(1),
  // extract_from_template templates(1)
  func_extract_from_template, 1, LOCAL(1), 5, var_647_1_option, LOCAL(2), LOCAL(2), LOCAL(2), var_647_45_message,
  // cond
  var_cond, 3, lambda_108, lambda_110, lambda_112, TAIL_CALL,
  POS(646, 31),
  POS(646, 9),
  POS(648, 9)
};

static TAB_NUM t_lambda_108[] = {
  1, // locals
  0, // parameters
  // option == COPYRIGHT:
  var_std__equal, 2, var_647_1_option, var_COPYRIGHT, 1, LOCAL(1),
  //  option == COPYRIGHT:
  LET, 2, LOCAL(1), lambda_109, TAIL_CALL,
  POS(649, 14),
  POS(649, 13)
};

static TAB_NUM t_lambda_109[] = {
  0, // locals
  0, // parameters
  // !copyright message
  LET, 1, var_647_45_message, 1, var_639_1_copyright,
  // range &templates 2 -1
  var_range, 3, var_638_33_templates, num_2, minus_num_1, 1, var_638_33_templates,
  // next
  var_next, 0, TAIL_CALL,
  POS(650, 13),
  POS(651, 13),
  POS(652, 13)
};

static TAB_NUM t_lambda_110[] = {
  1, // locals
  0, // parameters
  // option == VERSION:
  var_std__equal, 2, var_647_1_option, var_VERSION, 1, LOCAL(1),
  //  option == VERSION:
  LET, 2, LOCAL(1), lambda_111, TAIL_CALL,
  POS(653, 14),
  POS(653, 13)
};

static TAB_NUM t_lambda_111[] = {
  0, // locals
  0, // parameters
  // !version message
  LET, 1, var_647_45_message, 1, var_640_1_version,
  // range &templates 2 -1
  var_range, 3, var_638_33_templates, num_2, minus_num_1, 1, var_638_33_templates,
  // next
  var_next, 0, TAIL_CALL,
  POS(654, 13),
  POS(655, 13),
  POS(656, 13)
};

static TAB_NUM t_lambda_112[] = {
  0, // locals
  0, // parameters
  //  true -> templates copyright version
  LET, 2, var_true, lambda_113, TAIL_CALL,
  POS(657, 13)
};

static TAB_NUM t_lambda_113[] = {
  0, // locals
  0, // parameters
  //  templates copyright version
  LET, 3, var_638_33_templates, var_639_1_copyright, var_640_1_version, TAIL_CALL,
  POS(657, 21)
};

static TAB_NUM t_func_extract_from_template[] = {
  7, // locals
  1, // parameters
  var_659_25_template,
  // $len length_of(template)
  var_length_of, 1, var_659_25_template, 1, var_660_1_len,
  // len < 2 || len > 5:
  var_std__less, 2, var_660_1_len, num_2, 1, LOCAL(1),
  // len < 2 || len > 5:
  var_std__or, 2, LOCAL(1), lambda_114, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_115, var_pass, IO_CALL(0),
  // $option template(1)
  var_659_25_template, 1, num_1, 1, LOCAL(3),
  // len >= 3
  var_std__less, 2, var_660_1_len, num_3, 1, LOCAL(1),
  // len >= 3
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // $name
  var_if, 3, LOCAL(2), lambda_116, lambda_117, 1, LOCAL(4),
  // len >= 4
  var_std__less, 2, var_660_1_len, num_4, 1, LOCAL(1),
  // len >= 4
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // $default_value
  var_if, 3, LOCAL(2), lambda_118, lambda_119, 1, LOCAL(5),
  // len >= 5
  var_std__less, 2, var_660_1_len, num_5, 1, LOCAL(1),
  // len >= 5
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // $conversion
  var_if, 3, LOCAL(2), lambda_120, lambda_121, 1, LOCAL(6),
  // $help template(-1)
  var_659_25_template, 1, minus_num_1, 1, LOCAL(7),
  // -> option name default_value conversion help
  LET, 5, LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), LOCAL(7), TAIL_CALL,
  POS(660, 3),
  POS(662, 5),
  POS(662, 5),
  POS(661, 3),
  POS(665, 3),
  POS(668, 7),
  POS(668, 7),
  POS(666, 3),
  POS(673, 7),
  POS(673, 7),
  POS(671, 3),
  POS(678, 7),
  POS(678, 7),
  POS(676, 3),
  POS(681, 3),
  POS(682, 3)
};

static TAB_NUM t_lambda_114[] = {
  1, // locals
  0, // parameters
  // 5:
  var_std__less, 2, num_5, var_660_1_len, 1, LOCAL(1),
  // len > 5:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(662, 22),
  POS(662, 16)
};

static TAB_NUM t_lambda_115[] = {
  0, // locals
  0, // parameters
  // Error! "malformed parameter template"
  var_Error, 1, str_malformed_parame, IO_TAIL_CALL,
  POS(663, 7)
};

static TAB_NUM t_lambda_116[] = {
  1, // locals
  0, // parameters
  // template(2)
  var_659_25_template, 1, num_2, 1, LOCAL(1),
  //  template(2)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(669, 10),
  POS(669, 9)
};

static TAB_NUM t_lambda_117[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(670, 9)
};

static TAB_NUM t_lambda_118[] = {
  1, // locals
  0, // parameters
  // template(3)
  var_659_25_template, 1, num_3, 1, LOCAL(1),
  //  template(3)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(674, 10),
  POS(674, 9)
};

static TAB_NUM t_lambda_119[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(675, 9)
};

static TAB_NUM t_lambda_120[] = {
  1, // locals
  0, // parameters
  // template(4)
  var_659_25_template, 1, num_4, 1, LOCAL(1),
  //  template(4)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(679, 10),
  POS(679, 9)
};

static TAB_NUM t_lambda_121[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(680, 9)
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__get_options}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_option_is_a_unique_item}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__extract_options}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_argument_is_a_unique_item}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_argument_is_a_tuple}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__program_parameters}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_display_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_STRING_8, 2, {.str_8 = "  "}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_STRING_8, 1, {.str_8 = " "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_arguments}},
  {FLT_CHARACTER, 0, {.value = 47}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_name_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_name_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_STRING_8, 6, {.str_8 = "--help"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_STRING_8, 11, {.str_8 = "--copyright"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_STRING_8, 9, {.str_8 = "--version"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_initialize_results}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_STRING_8, 2, {.str_8 = "--"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_fetch_option_value}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_VALUED_OPTION}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_MULTI_VALUED_OPTION}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_option_idx_is_undefined}},
  {FLT_STRING_8, 16, {.str_8 = "Invalid option: "}},
  {FLT_STRING_8, 1, {.str_8 = "!"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_evaluate_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_MANDATORY_PARAMETER}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_MANDATORY_PARAMETER}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_OPTIONAL_PARAMETER}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_SOME_PARAMETERS}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_MANY_PARAMETERS}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_results}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_arguments_is_not_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_possible_value_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_result_is_a_list}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}},
  {FLT_STRING_8, 27, {.str_8 = "Invalid argument value for "}},
  {FLT_STRING_8, 2, {.str_8 = "!\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_convert}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_88}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_89}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_90}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_91}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_92}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_help_message}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_possible_value_is_defined}},
  {FLT_STRING_8, 13, {.str_8 = "valid values:"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_93}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_CHARACTER, 0, {.value = 44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_94}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_default_value}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_default_value_is_defined}},
  {FLT_STRING_8, 16, {.str_8 = "(default value: "}},
  {FLT_STRING_8, 1, {.str_8 = ")"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_95}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_show_usage}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parameter_name}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_OPTIONAL_PARAMETER}},
  {FLT_CHARACTER, 0, {.value = 63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_SOME_PARAMETERS}},
  {FLT_CHARACTER, 0, {.value = 42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_MANY_PARAMETERS}},
  {FLT_CHARACTER, 0, {.value = 43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_96}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_97}},
  {FLT_STRING_8, 6, {.str_8 = "Usage:"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_copyright_is_defined}},
  {FLT_STRING_8, 12, {.str_8 = " --copyright"}},
  {FLT_STRING_8, 7, {.str_8 = " --help"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_98}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_99}},
  {FLT_STRING_8, 13, {.str_8 = "\012Parameters:\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_100}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_101}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_102}},
  {FLT_STRING_8, 10, {.str_8 = "\012Options:\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_103}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_option_name}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_VALUED_OPTION}},
  {FLT_STRING_8, 6, {.str_8 = " VALUE"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_MULTI_VALUED_OPTION}},
  {FLT_STRING_8, 7, {.str_8 = " VALUES"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_104}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_105}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_show_version}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_show_copyright}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_too_few_arguments_error}},
  {FLT_STRING_8, 19, {.str_8 = "Too few arguments!\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_too_many_arguments_error}},
  {FLT_STRING_8, 20, {.str_8 = "Too many arguments!\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_extract_copyright_and_version}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_106}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_107}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_108}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_109}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_110}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_111}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_112}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_113}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_extract_from_template}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_114}},
  {FLT_POSITIVE_INT64, 0, {.value = 5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_115}},
  {FLT_STRING_8, 28, {.str_8 = "malformed parameter template"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_116}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_117}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_118}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_119}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_120}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_121}}
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
    "get_options\000std", NULL,
    {.const_idx = -func_std__get_options}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "146_0_options\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "149_1_results\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(149, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "152_10_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "152_16_result\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "154_3_option\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_unique_item\000", NULL,
    {.position = POS(156, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(158, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(159, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(160, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(161, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(157, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "163_13_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(170, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(153, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spread\000", NULL,
    {.position = POS(173, 7)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "extract_options\000std", NULL,
    {.const_idx = -func_std__extract_options}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "182_0_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "185_1_results\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "186_1_argument_used\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_set\000", NULL,
    {.position = POS(186, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "189_10_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "189_16_result\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "191_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "191_7_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_tuple\000", NULL,
    {.position = POS(202, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "203_15_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "215_1_remaining_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "217_7_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "put\000", NULL,
    {.position = POS(225, 11)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "program_parameters\000std", NULL,
    {.const_idx = -func_std__program_parameters}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "command_line_arguments\000", NULL,
    {.position = POS(269, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(275, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(276, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "272_1_first_column_width\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(273, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(278, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pad_right\000", NULL,
    {.position = POS(281, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprint\000", NULL,
    {.position = POS(281, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split\000", NULL,
    {.position = POS(282, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(288, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dup\000", NULL,
    {.position = POS(288, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprintln\000", NULL,
    {.position = POS(284, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(292, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "294_19_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "294_29_templates\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "295_1_results\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "296_1_options\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_key_order_table\000", NULL,
    {.position = POS(296, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "297_1_parameters\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_table\000", NULL,
    {.position = POS(297, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "298_1_names\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "299_1_kinds\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "300_1_possible_values\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "301_1_default_values\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "302_1_conversions\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "303_1_help_messages\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "program_name\000", NULL,
    {.position = POS(304, 32)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "304_1_command_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_until\000", NULL,
    {.position = POS(304, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_utf8\000", NULL,
    {.position = POS(305, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(305, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "307_42_copyright\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "307_53_version\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "310_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "312_1_option\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "312_9_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim\000", NULL,
    {.position = POS(313, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_key_value_pair\000", NULL,
    {.position = POS(316, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "value_of\000", NULL,
    {.position = POS(317, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(318, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_of\000", NULL,
    {.position = POS(319, 55)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(319, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(322, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(330, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(331, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "VALUED_OPTION\000", NULL,
    {.position = POS(335, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "MULTI_VALUED_OPTION\000", NULL,
    {.position = POS(339, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SOME_PARAMETERS\000", NULL,
    {.position = POS(343, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "MANY_PARAMETERS\000", NULL,
    {.position = POS(343, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(343, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(329, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(359, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(359, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "terminate\000", NULL,
    {.position = POS(363, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(364, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "376_1_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "377_1_do_fetch_option_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "378_1_option_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "380_3_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(384, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(384, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(384, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(392, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_prefix\000", NULL,
    {.position = POS(403, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(406, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(407, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "Error\000", NULL,
    {.position = POS(407, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(421, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "427_1_last_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "429_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "431_1_option\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "OPTIONAL_PARAMETER\000", NULL,
    {.position = POS(442, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(442, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "MANDATORY_PARAMETER\000", NULL,
    {.position = POS(434, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(436, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pop\000", NULL,
    {.position = POS(439, 17)}
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
    "get\000", NULL,
    {.position = POS(458, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to\000", NULL,
    {.position = POS(447, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to_by\000", NULL,
    {.position = POS(428, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(485, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "489_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "489_7_result\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "495_1_possible_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(499, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_upper_case\000", NULL,
    {.position = POS(515, 66)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exit\000", NULL,
    {.position = POS(517, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "519_11_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "520_1_conversion\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "532_16_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "533_1_message\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "534_1_possible_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(540, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "548_1_default_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "557_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "589_1_table\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(592, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "do\000", NULL,
    {.position = POS(588, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "603_1_table\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "605_3_option\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "605_10_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "610_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "638_33_templates\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "639_1_copyright\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "640_1_version\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "647_1_option\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "647_45_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "COPYRIGHT\000", NULL,
    {.position = POS(649, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "VERSION\000", NULL,
    {.position = POS(653, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(641, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "659_25_template\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "660_1_len\000", NULL
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
  217, // number of constants
  154, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
