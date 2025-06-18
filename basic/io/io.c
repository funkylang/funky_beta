#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std__sleep = -1,
  num_0 = -2,
  lambda_1 = -3,
  num_1000000 = -4,
  func_std__write_string_to = -5,
  lambda_2 = -6,
  lambda_3 = -7,
  lambda_4 = -8,
  num_1 = -9,
  minus_num_1 = -10,
  func_std__write_to = -11,
  func_std__writeln_to = -12,
  chr_10 = -13,
  func_std__print_string_to = -14,
  func_std_types__file_descriptor___print_to = -15,
  func_std__println_to = -16,
  func_std__print_string = -17,
  func_std__print = -18,
  func_std__println = -19,
  func_std__eprint_string = -20,
  func_std__eprint = -21,
  func_std__eprintln = -22,
  func_std__read_from = -23,
  string_1 = -24,
  lambda_loop = -25,
  lambda_5 = -26,
  lambda_6 = -27,
  lambda_7 = -28,
  lambda_8 = -29,
  lambda_9 = -30,
  lambda_10 = -31,
  func_std__read_from_until = -32,
  lambda_2_loop = -33,
  lambda_11 = -34,
  lambda_12 = -35,
  lambda_13 = -36,
  lambda_14 = -37,
  lambda_15 = -38,
  lambda_16 = -39,
  lambda_17 = -40,
  lambda_18 = -41,
  func_std__readln_from = -42,
  func_std__read_all_from = -43,
  lambda_3_loop = -44,
  num_0x100000 = -45,
  lambda_19 = -46,
  lambda_20 = -47,
  lambda_21 = -48,
  lambda_22 = -49,
  lambda_23 = -50,
  lambda_24 = -51,
  func_std__get_from_until = -52,
  func_std__getln_from = -53,
  func_std__get_until = -54,
  func_std__getln = -55,
  func_std_types__string___load = -56,
  str_r = -57,
  lambda_max_length_is_defined = -58,
  lambda_25 = -59,
  func_std_types__string___save = -60,
  str_w = -61,
  func_std_types__file_descriptor___load = -62,
  func_std_types__io___load = -63,
  func_load_file = -64,
  lambda_26 = -65,
  lambda_27 = -66,
  func_read_data = -67,
  lambda_28 = -68,
  lambda_29 = -69,
  lambda_30 = -70,
  func_read_failed = -71,
  func_file_closed_after_reading = -72,
  func_std_types__io___save = -73,
  func_save_file = -74,
  str_w_2 = -75,
  lambda_31 = -76,
  lambda_32 = -77,
  lambda_33 = -78,
  func_write_completed = -79,
  func_close_file_after_writing = -80,
  func_write_failed = -81,
  func_std__try = -82,
  func_std__check = -83,
  lambda_34 = -84,
  func_std__file_exists = -85,
  func_std__directory = -86,
  lambda_4_loop = -87,
  lambda_entry_is_an_error = -88,
  lambda_do_sort = -89,
  lambda_35 = -90,
  lambda_36 = -91,
  lambda_37 = -92,
  func_std_types__stat___is_a_directory = -93,
  chr_100 = -94,
  func_std_types__dirent___is_a_directory = -95,
  func_std_types__object___call = -96,
  num_2 = -97,
  num_3 = -98,
  lambda_38 = -99,
  string_2 = -100,
  lambda_39 = -101,
  lambda_5_loop = -102,
  lambda_40 = -103,
  lambda_READ = -104,
  lambda_41 = -105,
  lambda_out_fd = -106,
  lambda_do_collect_output = -107,
  lambda_42 = -108,
  lambda_err_fd = -109,
  lambda_do_collect_error_output = -110,
  lambda_43 = -111,
  lambda_44 = -112,
  lambda_PROCESS_JOINED = -113,
  lambda_do_return_error_code = -114,
  lambda_2_do_collect_output = -115,
  lambda_45 = -116,
  lambda_46 = -117,
  lambda_47 = -118,
  lambda_48 = -119,
  lambda_49 = -120,
  str_CALLING_PROCESS = -121,
  lambda_50 = -122,
  func_std_types__io___call = -123,
  func_start_process = -124,
  lambda_51 = -125,
  lambda_52 = -126,
  func_read_process_output = -127,
  func_read_from_process_failed = -128,
  func_ignore_close = -129,
  func_process_finished = -130,
  str_process_finished = -131,
  num_4 = -132,
  lambda_53 = -133,
  lambda_54 = -134,
  func_std__terminate = -135,
  str_file_descriptor = -136,
  func_std_types__file_descriptor___serialize = -137,
  str_file_descriptor_2 = -138,
  string_3 = -139,
  lambda_55 = -140,
  lambda_56 = -141,
  func_std_types__file_descriptor___deserializer_of = -142,
  str_process_id = -143,
  func_std_types__process_id___serialize = -144,
  str_process_id_2 = -145,
  lambda_57 = -146,
  lambda_58 = -147,
  func_std_types__process_id___deserializer_of = -148,
  func_extern_call = -149,
  func_std__pipe = -150,
  lambda_first_arg_is_a_string = -151,
  lambda_59 = -152,
  lambda_first_arg_is_a_file_descriptor = -153,
  func_build_commands = -154,
  lambda_60 = -155,
  lambda_61 = -156,
  lambda_arg_is_a_function = -157,
  lambda_62 = -158,
  lambda_63 = -159,
  lambda_64 = -160,
  lambda_65 = -161,
  func_std__pipe_commands = -162,
  lambda_feed_or_fd_is_defined = -163,
  lambda_feed_or_fd_is_a_file_descriptor = -164,
  lambda_66 = -165,
  lambda_67 = -166,
  func_run_pipe = -167,
  lambda_68 = -168,
  lambda_69 = -169,
  lambda_70 = -170,
  lambda_71 = -171,
  lambda_72 = -172,
  lambda_73 = -173,
  lambda_74 = -174,
  func_store_pid_and_err_fd = -175,
  lambda_75 = -176,
  list_804_16 = -177,
  lambda_76 = -178,
  func_manage_io = -179,
  lambda_6_loop = -180,
  lambda_77 = -181,
  lambda_78 = -182,
  lambda_79 = -183,
  lambda_80 = -184,
  lambda_81 = -185,
  lambda_82 = -186,
  lambda_rpid_is_defined = -187,
  lambda_83 = -188,
  lambda_84 = -189,
  lambda_feed_is_empty = -190,
  lambda_85 = -191,
  lambda_86 = -192,
  lambda_buf_is_empty = -193,
  lambda_87 = -194,
  lambda_88 = -195,
  lambda_89 = -196,
  lambda_90 = -197,
  lambda_91 = -198,
  lambda_92 = -199,
  lambda_93 = -200,
  lambda_94 = -201,
  lambda_95 = -202,
  func_std__which = -203,
  str_PATH = -204,
  chr_58 = -205,
  lambda_96 = -206,
  string_4 = -207,
  lambda_97 = -208,
  lambda_98 = -209,
  func_std__find_first_process = -210,
  str_proc = -211,
  lambda_7_loop = -212,
  lambda_2_entry_is_an_error = -213,
  lambda_99 = -214,
  lambda_100 = -215,
  str_proc_2 = -216,
  str_cmdline = -217,
  lambda_101 = -218,
  chr_0 = -219,
  chr_47 = -220,
  lambda_102 = -221,
  func_std__find_processes = -222,
  lambda_8_loop = -223,
  lambda_3_entry_is_an_error = -224,
  lambda_103 = -225,
  lambda_104 = -226,
  lambda_105 = -227,
  lambda_106 = -228,
  func_std__get_process_name = -229,
  lambda_107 = -230,
  lambda_108 = -231,
  func_std__get_mac_address = -232,
  lambda_mac_is_defined = -233,
  lambda_109 = -234,
  lambda_110 = -235,
  func_std__extern = -236
};

enum {
  var__START = FIRST_VAR-1,
  var_std__load, // attribute
  var_std__assign, // extern
  var_std__save, // attribute
  var_std__update, // attribute
  var_std__is_a_directory, // attribute
  var_std__sleep, // initialized
  var_79_5_duration, // dynamic
  var_std__less, // extern
  var_std__times, // extern
  var_to_integer, // extern
  var_usleep, // extern
  var_on, // extern
  var_std__write_string_to, // initialized
  var_85_5_fd, // dynamic
  var_86_5_str, // dynamic
  var_88_4_len, // dynamic
  var_length_of, // extern
  var_91_15_bytes_written, // dynamic
  var_write, // extern
  var_is_an_error, // extern
  var_std__plus, // extern
  var_range, // extern
  var_next, // extern
  var_break, // extern
  var_if, // extern
  var_pass, // extern
  var_loop, // extern
  var_std__write_to, // initialized
  var_create_string, // extern
  var_write_string_to, // extern
  var_std__writeln_to, // initialized
  var_push, // extern
  var_std__print_string_to, // initialized
  var_to_utf8, // extern
  var_std__print_to, // attribute
  var_std_types__file_descriptor, // extern
  var_print_to, // extern polymorphic
  var_std__println_to, // initialized
  var_std__print_string, // initialized
  var_STDOUT_FILENO, // extern
  var_std__print, // initialized
  var_print_string, // extern
  var_std__println, // initialized
  var_std__eprint_string, // initialized
  var_STDERR_FILENO, // extern
  var_std__eprint, // initialized
  var_eprint_string, // extern
  var_std__eprintln, // initialized
  var_std__read_from, // initialized
  var_178_5_fd, // dynamic
  var_179_5_length, // dynamic
  var_181_4_data, // dynamic
  var_183_12_buf, // dynamic
  var_read, // extern
  var_is_empty, // extern
  var_true, // extern
  var_append, // extern
  var_minus, // extern
  var_cond, // extern
  var_std__read_from_until, // initialized
  var_194_5_fd, // dynamic
  var_195_5_sentinel, // dynamic
  var_196_5_nth, // dynamic
  var_198_4_data, // dynamic
  var_200_12_buf, // dynamic
  var_has_suffix, // extern
  var_dec, // extern
  var_std__readln_from, // initialized
  var_read_from_until, // extern
  var_std__read_all_from, // initialized
  var_223_5_fd, // dynamic
  var_225_4_data, // dynamic
  var_227_12_buf, // dynamic
  var_std__get_from_until, // initialized
  var_from_utf8, // extern
  var_std__getln_from, // initialized
  var_get_from_until, // extern
  var_std__get_until, // initialized
  var_STDIN_FILENO, // extern
  var_std__getln, // initialized
  var_getln_from, // extern
  var_std_types__string, // extern
  var_load, // extern polymorphic
  var_270_5_max_length, // dynamic
  var_undefined, // extern
  var_272_10_fd, // dynamic
  var_open, // extern
  var_check, // extern
  var_is_defined, // extern
  var_read_from, // extern
  var_close, // extern
  var_save, // extern polymorphic
  var_write_to, // extern
  var_read_all_from, // extern
  var_load_buffer_of, // attribute
  var_max_length_of, // attribute
  var_id_of, // attribute
  var_info_of, // attribute
  var_std_types__io, // extern
  var_empty_hash_table, // extern
  var_run, // extern
  var_321_14_io, // dynamic
  var_321_17_id, // dynamic
  var_321_29_max_length, // dynamic
  var_321_40_data, // dynamic
  var_322_10_fd, // dynamic
  var_JOB_FAILED, // extern
  var_tuple, // extern
  var_start_reading_from, // extern
  var_READ, // extern
  var_std__key_value_pair, // extern
  var_READ_FAILED, // extern
  var_CLOSED, // extern
  var_register_handlers, // extern
  var_337_14_io, // dynamic
  var_337_17_fd, // dynamic
  var_338_4_buf, // dynamic
  var_339_4_max_length, // dynamic
  var_std__not, // extern
  var_std__and, // extern
  var_deregister_all_handlers, // extern
  var_JOB_COMPLETED, // extern
  var_379_14_io, // dynamic
  var_379_17_id, // dynamic
  var_379_20_filename, // dynamic
  var_379_29_data, // dynamic
  var_379_34_context, // dynamic
  var_380_10_fd, // dynamic
  var_is_undefined, // extern
  var_update_if, // extern
  var_WRITE_COMPLETED, // extern
  var_WRITE_FAILED, // extern
  var_std__try, // initialized
  var_std__check, // initialized
  var_430_5_argument, // dynamic
  var_std__file_exists, // initialized
  var_stat, // extern
  var_not, // extern
  var_std__directory, // initialized
  var_SORT, // extern
  var_false, // extern
  var_468_19_do_sort, // dynamic
  var_get_options, // extern
  var_469_4_entries, // dynamic
  var_empty_list, // extern
  var_470_13_dir, // dynamic
  var_opendir, // extern
  var_472_15_entry, // dynamic
  var_readdir, // extern
  var_closedir, // extern
  var_name_of, // extern
  var_sort, // extern
  var_std_types__stat, // extern
  var_is_a_directory, // extern polymorphic
  var_mode_of, // extern
  var_std__equal, // extern
  var_std_types__dirent, // extern
  var_type_of, // extern
  var_DIRECTORY, // extern
  var_std__call, // attribute
  var_std_types__object, // extern
  var_call, // extern polymorphic
  var_result_count, // extern
  var_498_4_do_return_error_code, // dynamic
  var_499_4_do_collect_output, // dynamic
  var_500_4_do_collect_error_output, // dynamic
  var_to_string, // extern
  var_map, // extern
  var_502_4_env_vars, // dynamic
  var_environment, // extern
  var_std__string, // extern
  var_for_each, // extern
  var_508_32_out_fd, // dynamic
  var_508_40_err_fd, // dynamic
  var_create_process, // extern
  var_510_4_io, // dynamic
  var_join_process, // extern
  var_515_4_out, // dynamic
  var_516_4_err, // dynamic
  var_get_events, // extern
  var_521_22_fd, // dynamic
  var_521_26_data, // dynamic
  var_case, // extern
  var_PROCESS_JOINED, // extern
  var_548_14_ret, // dynamic
  var_error, // extern
  var_580_4_env_vars, // dynamic
  var_618_21_io, // dynamic
  var_618_28_status, // dynamic
  var_618_35_context, // dynamic
  var_log, // extern
  var_621_4_id, // dynamic
  var_624_4_out, // dynamic
  var_625_4_err, // dynamic
  var_std__terminate, // initialized
  var_EXIT_SUCCESS, // extern
  var_exit, // extern
  var_std__is_a_file_descriptor, // attribute
  var_is_a_file_descriptor, // extern polymorphic
  var_serialization_tag_of, // extern polymorphic
  var_serialize, // extern polymorphic
  var_646_5_indent, // dynamic
  var_648_4_str, // dynamic
  var_tabs_and_spaces, // extern
  var_deserializer_of, // extern polymorphic
  var_integer, // extern
  var_file_descriptor, // extern
  var_deserializers, // extern
  var_register_type, // extern
  var_std__is_a_process_id, // attribute
  var_is_a_process_id, // extern polymorphic
  var_std_types__process_id, // extern
  var_673_5_indent, // dynamic
  var_675_4_str, // dynamic
  var_process_id, // extern
  var_command_of, // attribute
  var_extern_call, // initialized
  var_flatten, // extern
  var_std__pipe, // initialized
  var_704_5_args, // dynamic
  var_706_4_i, // dynamic
  var_707_4_n, // dynamic
  var_708_4_in_fd, // dynamic
  var_709_4_feed, // dynamic
  var_710_4_commands, // dynamic
  var_711_4_head, // dynamic
  var_712_4_arguments, // dynamic
  var_713_4_first_arg, // dynamic
  var_is_a_string, // extern
  var_733_14_arg, // dynamic
  var_is_a_function, // extern
  var_inc, // extern
  var_std__pipe_commands, // initialized
  var_753_5_feed_or_fd, // dynamic
  var_754_5_commands, // dynamic
  var_768_5_in_fd, // dynamic
  var_769_5_feed, // dynamic
  var_770_5_commands, // dynamic
  var_772_4_pids, // dynamic
  var_773_4_err_fds, // dynamic
  var_774_4_out_fd, // dynamic
  var_775_4_env_vars, // dynamic
  var_784_8_idx, // dynamic
  var_785_16_head, // dynamic
  var_785_22_arguments, // dynamic
  var_787_8_pid, // dynamic
  var_788_8_err_fd, // dynamic
  var_list, // extern
  var_802_8_ret, // dynamic
  var_dup, // extern
  var_803_8_out, // dynamic
  var_804_8_err, // dynamic
  var_815_12_read_descriptor_list, // dynamic
  var_keys_of, // extern
  var_825_14_read_descriptors, // dynamic
  var_826_14_write_descriptors, // dynamic
  var_pselect, // extern
  var_SIGCHLD, // extern
  var_834_30_rpid, // dynamic
  var_834_36_status, // dynamic
  var_wait, // extern
  var_859_24_read_descriptor, // dynamic
  var_860_30_buf, // dynamic
  var_std__which, // initialized
  var_887_5_name, // dynamic
  var_split, // extern
  var_891_8_filename, // dynamic
  var_file_exists, // extern
  var_std__find_first_process, // initialized
  var_898_28_name, // dynamic
  var_899_13_dir, // dynamic
  var_901_15_entry, // dynamic
  var_907_10_proc_num, // dynamic
  var_DIGIT, // extern
  var_many, // extern
  var_matches, // extern
  var_910_20_buf, // dynamic
  var_truncate_from, // extern
  var_truncate_until, // extern
  var_std__find_processes, // initialized
  var_923_24_name, // dynamic
  var_924_13_dir, // dynamic
  var_925_4_pids, // dynamic
  var_927_15_entry, // dynamic
  var_933_10_proc_num, // dynamic
  var_936_20_buf, // dynamic
  var_std__get_process_name, // initialized
  var_951_10_buf, // dynamic
  var_std__get_mac_address, // initialized
  var_958_27_mac, // dynamic
  var_get_first_mac_address, // extern
  var_hex, // extern
  var_map_reduce, // extern
  var_std__extern, // initialized
  var__END
};


static TAB_NUM t_func_std__sleep[] = {
  1, // locals
  1, // parameters
  var_79_5_duration,
  // 0: usleep! (1'000'000*duration).to_integer
  var_std__less, 2, num_0, var_79_5_duration, 1, LOCAL(1),
  // on duration > 0: usleep! (1'000'000*duration).to_integer
  var_on, 2, LOCAL(1), lambda_1, IO_TAIL_CALL,
  POS(81, 17),
  POS(81, 3)
};

static FUNCTION_INFO i_func_std__sleep = {
  t_func_std__sleep, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  2, // locals
  0, // parameters
  // 1'000'000*duration).to_integer
  var_std__times, 2, num_1000000, var_79_5_duration, 1, LOCAL(1),
  // to_integer
  var_to_integer, 1, LOCAL(1), 1, LOCAL(2),
  // usleep! (1'000'000*duration).to_integer
  var_usleep, 1, LOCAL(2), IO_TAIL_CALL,
  POS(81, 29),
  POS(81, 49),
  POS(81, 20)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std__write_string_to[] = {
  0, // locals
  2, // parameters
  var_85_5_fd,
  var_86_5_str,
  // $len length_of(str)
  var_length_of, 1, var_86_5_str, 1, var_88_4_len,
  // loop
  var_loop, 2, lambda_2, var_pass, IO_TAIL_CALL,
  POS(88, 3),
  POS(89, 3)
};

static FUNCTION_INFO i_func_std__write_string_to = {
  t_func_std__write_string_to, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // write! $bytes_written fd str
  var_write, 2, var_85_5_fd, var_86_5_str, IO_CALL(1), var_91_15_bytes_written,
  // is_an_error
  var_is_an_error, 1, var_91_15_bytes_written, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_91_15_bytes_written, lambda_3, IO_TAIL_CALL,
  POS(91, 7),
  POS(93, 23),
  POS(92, 7)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // bytes_written < len:
  var_std__less, 2, var_91_15_bytes_written, var_88_4_len, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_4, var_break, IO_TAIL_CALL,
  POS(97, 13),
  POS(96, 11)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // bytes_written+1 -1
  var_std__plus, 2, var_91_15_bytes_written, num_1, 1, LOCAL(1),
  // range &str bytes_written+1 -1
  var_range, 3, var_86_5_str, LOCAL(1), minus_num_1, 1, var_86_5_str,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(98, 26),
  POS(98, 15),
  POS(99, 15)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std__write_to[] = {
  3, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 105_5_fd
  REST_PARAMETER, LOCAL(3), // 106_5_args
  // create_string(args)
  var_create_string, 1, LOCAL(3), 1, LOCAL(1),
  // write_string_to! fd create_string(args)
  var_write_string_to, 2, LOCAL(2), LOCAL(1), IO_TAIL_CALL,
  POS(108, 23),
  POS(108, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std__write_to = {
  t_func_std__write_to, NULL, 2, 2,
  {"106_5_args\000", "105_5_fd\000"}
};

static TAB_NUM t_func_std__writeln_to[] = {
  4, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 112_5_fd
  REST_PARAMETER, LOCAL(4), // 113_5_args
  // create_string(args) '@nl;')
  var_create_string, 1, LOCAL(4), 1, LOCAL(1),
  // push(create_string(args) '@nl;')
  var_push, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // write_string_to! fd push(create_string(args) '@nl;')
  var_write_string_to, 2, LOCAL(3), LOCAL(2), IO_TAIL_CALL,
  POS(115, 28),
  POS(115, 23),
  POS(115, 3),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std__writeln_to = {
  t_func_std__writeln_to, NULL, 3, 2,
  {"112_5_fd\000", "113_5_args\000"}
};

static TAB_NUM t_func_std__print_string_to[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 119_5_fd
  LOCAL(3), // 120_5_str
  // to_utf8
  var_to_utf8, 1, LOCAL(3), 1, LOCAL(1),
  // write_string_to! fd str.to_utf8
  var_write_string_to, 2, LOCAL(2), LOCAL(1), IO_TAIL_CALL,
  POS(122, 27),
  POS(122, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std__print_string_to = {
  t_func_std__print_string_to, NULL, 2, 2,
  {"119_5_fd\000", "120_5_str\000"}
};

static TAB_NUM t_func_std_types__file_descriptor___print_to[] = {
  4, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 128_5_fd
  REST_PARAMETER, LOCAL(4), // 129_5_args
  // create_string(args).to_utf8
  var_create_string, 1, LOCAL(4), 1, LOCAL(1),
  // to_utf8
  var_to_utf8, 1, LOCAL(1), 1, LOCAL(2),
  // write_string_to! fd create_string(args).to_utf8
  var_write_string_to, 2, LOCAL(3), LOCAL(2), IO_TAIL_CALL,
  POS(131, 23),
  POS(131, 43),
  POS(131, 3),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__file_descriptor___print_to = {
  t_func_std_types__file_descriptor___print_to, NULL, 3, 2,
  {"129_5_args\000", "128_5_fd\000"}
};

static TAB_NUM t_func_std__println_to[] = {
  5, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(4), // 135_5_fd
  REST_PARAMETER, LOCAL(5), // 136_5_args
  // create_string(args).to_utf8 '@nl;')
  var_create_string, 1, LOCAL(5), 1, LOCAL(1),
  // to_utf8 '@nl;')
  var_to_utf8, 1, LOCAL(1), 1, LOCAL(2),
  // push(create_string(args).to_utf8 '@nl;')
  var_push, 2, LOCAL(2), chr_10, 1, LOCAL(3),
  // write_string_to! fd push(create_string(args).to_utf8 '@nl;')
  var_write_string_to, 2, LOCAL(4), LOCAL(3), IO_TAIL_CALL,
  POS(138, 28),
  POS(138, 48),
  POS(138, 23),
  POS(138, 3),
  LOCAL(4),
  LOCAL(5)
};

static FUNCTION_INFO i_func_std__println_to = {
  t_func_std__println_to, NULL, 4, 2,
  {"135_5_fd\000", "136_5_args\000"}
};

static TAB_NUM t_func_std__print_string[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 142_5_str
  // to_utf8
  var_to_utf8, 1, LOCAL(2), 1, LOCAL(1),
  // write_string_to! STDOUT_FILENO str.to_utf8
  var_write_string_to, 2, var_STDOUT_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(144, 38),
  POS(144, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std__print_string = {
  t_func_std__print_string, NULL, 2, 1,
  {"142_5_str\000"}
};

static TAB_NUM t_func_std__print[] = {
  2, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(2), // 148_5_args
  // create_string(args)
  var_create_string, 1, LOCAL(2), 1, LOCAL(1),
  // print_string! create_string(args)
  var_print_string, 1, LOCAL(1), IO_TAIL_CALL,
  POS(150, 17),
  POS(150, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std__print = {
  t_func_std__print, NULL, 2, 1,
  {"148_5_args\000"}
};

static TAB_NUM t_func_std__println[] = {
  3, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(3), // 154_5_args
  // create_string(args) '@nl;')
  var_create_string, 1, LOCAL(3), 1, LOCAL(1),
  // push(create_string(args) '@nl;')
  var_push, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // print_string! push(create_string(args) '@nl;')
  var_print_string, 1, LOCAL(2), IO_TAIL_CALL,
  POS(156, 22),
  POS(156, 17),
  POS(156, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std__println = {
  t_func_std__println, NULL, 3, 1,
  {"154_5_args\000"}
};

static TAB_NUM t_func_std__eprint_string[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 160_5_str
  // to_utf8
  var_to_utf8, 1, LOCAL(2), 1, LOCAL(1),
  // write_string_to! STDERR_FILENO str.to_utf8
  var_write_string_to, 2, var_STDERR_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(162, 38),
  POS(162, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std__eprint_string = {
  t_func_std__eprint_string, NULL, 2, 1,
  {"160_5_str\000"}
};

static TAB_NUM t_func_std__eprint[] = {
  2, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(2), // 166_5_args
  // create_string(args)
  var_create_string, 1, LOCAL(2), 1, LOCAL(1),
  // eprint_string! create_string(args)
  var_eprint_string, 1, LOCAL(1), IO_TAIL_CALL,
  POS(168, 18),
  POS(168, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std__eprint = {
  t_func_std__eprint, NULL, 2, 1,
  {"166_5_args\000"}
};

static TAB_NUM t_func_std__eprintln[] = {
  3, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(3), // 172_5_args
  // create_string(args) '@nl;')
  var_create_string, 1, LOCAL(3), 1, LOCAL(1),
  // push(create_string(args) '@nl;')
  var_push, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // eprint_string! push(create_string(args) '@nl;')
  var_eprint_string, 1, LOCAL(2), IO_TAIL_CALL,
  POS(174, 23),
  POS(174, 18),
  POS(174, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std__eprintln = {
  t_func_std__eprintln, NULL, 3, 1,
  {"172_5_args\000"}
};

static TAB_NUM t_func_std__read_from[] = {
  0, // locals
  2, // parameters
  var_178_5_fd,
  var_179_5_length,
  // $data ""
  LET, 1, string_1, 1, var_181_4_data,
  // loop:
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(181, 3),
  POS(182, 3)
};

static FUNCTION_INFO i_func_std__read_from = {
  t_func_std__read_from, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_loop[] = {
  0, // locals
  0, // parameters
  // read! $buf fd length
  var_read, 2, var_178_5_fd, var_179_5_length, IO_CALL(1), var_183_12_buf,
  // cond
  var_cond, 3, lambda_5, lambda_7, lambda_9, IO_TAIL_CALL,
  POS(183, 5),
  POS(184, 5)
};

static FUNCTION_INFO i_lambda_loop = {
  t_lambda_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // is_an_error -> buf
  var_is_an_error, 1, var_183_12_buf, 1, LOCAL(1),
  //  buf.is_an_error -> buf
  LET, 2, LOCAL(1), lambda_6, TAIL_CALL,
  POS(185, 14),
  POS(185, 9)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_183_12_buf, TAIL_CALL,
  POS(185, 28)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // is_empty -> data
  var_is_empty, 1, var_183_12_buf, 1, LOCAL(1),
  //  buf.is_empty -> data
  LET, 2, LOCAL(1), lambda_8, TAIL_CALL,
  POS(186, 14),
  POS(186, 9)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_181_4_data, TAIL_CALL,
  POS(186, 25)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_10, IO_TAIL_CALL,
  POS(187, 9)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // append &data buf
  var_append, 2, var_181_4_data, var_183_12_buf, 1, var_181_4_data,
  // length_of(buf)
  var_length_of, 1, var_183_12_buf, 1, LOCAL(1),
  // minus &length length_of(buf)
  var_minus, 2, var_179_5_length, LOCAL(1), 1, var_179_5_length,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(188, 9),
  POS(189, 23),
  POS(189, 9),
  POS(190, 9)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_std__read_from_until[] = {
  0, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_194_5_fd,
  MANDATORY_PARAMETER, var_195_5_sentinel,
  num_1, var_196_5_nth,
  // $data ""
  LET, 1, string_1, 1, var_198_4_data,
  // loop:
  var_loop, 1, lambda_2_loop, IO_TAIL_CALL,
  POS(198, 3),
  POS(199, 3)
};

static FUNCTION_INFO i_func_std__read_from_until = {
  t_func_std__read_from_until, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2_loop[] = {
  0, // locals
  0, // parameters
  // read! $buf fd 1
  var_read, 2, var_194_5_fd, num_1, IO_CALL(1), var_200_12_buf,
  // cond
  var_cond, 3, lambda_11, lambda_13, lambda_15, IO_TAIL_CALL,
  POS(200, 5),
  POS(201, 5)
};

static FUNCTION_INFO i_lambda_2_loop = {
  t_lambda_2_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // is_an_error -> buf
  var_is_an_error, 1, var_200_12_buf, 1, LOCAL(1),
  //  buf.is_an_error -> buf
  LET, 2, LOCAL(1), lambda_12, TAIL_CALL,
  POS(202, 14),
  POS(202, 9)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_200_12_buf, TAIL_CALL,
  POS(202, 28)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // is_empty -> data
  var_is_empty, 1, var_200_12_buf, 1, LOCAL(1),
  //  buf.is_empty -> data
  LET, 2, LOCAL(1), lambda_14, TAIL_CALL,
  POS(203, 14),
  POS(203, 9)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_198_4_data, TAIL_CALL,
  POS(203, 25)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_16, IO_TAIL_CALL,
  POS(204, 9)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // append &data buf
  var_append, 2, var_198_4_data, var_200_12_buf, 1, var_198_4_data,
  // data .has_suffix. sentinel:
  var_has_suffix, 2, var_198_4_data, var_195_5_sentinel, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), lambda_17, var_next, IO_TAIL_CALL,
  POS(205, 9),
  POS(207, 11),
  POS(206, 9)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // dec &nth
  var_dec, 1, var_196_5_nth, 1, var_196_5_nth,
  // 0
  var_std__less, 2, num_0, var_196_5_nth, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), var_next, lambda_18, IO_TAIL_CALL,
  POS(208, 13),
  POS(210, 21),
  POS(209, 13)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_198_4_data, TAIL_CALL,
  POS(212, 17)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__readln_from[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 217_5_fd
  // read_from_until! fd '@nl;'
  var_read_from_until, 2, LOCAL(1), chr_10, IO_TAIL_CALL,
  POS(219, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__readln_from = {
  t_func_std__readln_from, NULL, 1, 1,
  {"217_5_fd\000"}
};

static TAB_NUM t_func_std__read_all_from[] = {
  0, // locals
  1, // parameters
  var_223_5_fd,
  // $data ""
  LET, 1, string_1, 1, var_225_4_data,
  // loop:
  var_loop, 1, lambda_3_loop, IO_TAIL_CALL,
  POS(225, 3),
  POS(226, 3)
};

static FUNCTION_INFO i_func_std__read_all_from = {
  t_func_std__read_all_from, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_3_loop[] = {
  0, // locals
  0, // parameters
  // read! $buf fd 0x100000
  var_read, 2, var_223_5_fd, num_0x100000, IO_CALL(1), var_227_12_buf,
  // cond
  var_cond, 3, lambda_19, lambda_21, lambda_23, IO_TAIL_CALL,
  POS(227, 5),
  POS(228, 5)
};

static FUNCTION_INFO i_lambda_3_loop = {
  t_lambda_3_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // is_an_error -> buf
  var_is_an_error, 1, var_227_12_buf, 1, LOCAL(1),
  //  buf.is_an_error -> buf
  LET, 2, LOCAL(1), lambda_20, TAIL_CALL,
  POS(229, 14),
  POS(229, 9)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_227_12_buf, TAIL_CALL,
  POS(229, 28)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // is_empty -> data
  var_is_empty, 1, var_227_12_buf, 1, LOCAL(1),
  //  buf.is_empty -> data
  LET, 2, LOCAL(1), lambda_22, TAIL_CALL,
  POS(230, 14),
  POS(230, 9)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_225_4_data, TAIL_CALL,
  POS(230, 25)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_24, IO_TAIL_CALL,
  POS(231, 9)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  // append &data buf
  var_append, 2, var_225_4_data, var_227_12_buf, 1, var_225_4_data,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(232, 9),
  POS(233, 9)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std__get_from_until[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 237_5_fd
  MANDATORY_PARAMETER, LOCAL(3), // 238_5_sentinel
  num_1, LOCAL(4), // 239_5_nth
  // read_from_until! $data fd sentinel nth
  var_read_from_until, 3, LOCAL(2), LOCAL(3), LOCAL(4), IO_CALL(1), LOCAL(5),
  // from_utf8
  var_from_utf8, 1, LOCAL(5), 1, LOCAL(1),
  // -> data.from_utf8
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(241, 3),
  POS(242, 11),
  POS(242, 3),
  LOCAL(2),
  LOCAL(3),
  LOCAL(4),
  LOCAL(5)
};

static FUNCTION_INFO i_func_std__get_from_until = {
  t_func_std__get_from_until, NULL, 3, 4,
  {"237_5_fd\000", "238_5_sentinel\000", "239_5_nth\000", "241_21_data\000"}
};

static TAB_NUM t_func_std__getln_from[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 246_5_fd
  // get_from_until! fd '@nl;'
  var_get_from_until, 2, LOCAL(1), chr_10, IO_TAIL_CALL,
  POS(248, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__getln_from = {
  t_func_std__getln_from, NULL, 1, 1,
  {"246_5_fd\000"}
};

static TAB_NUM t_func_std__get_until[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 252_5_sentinel
  // get_from_until! STDIN_FILENO sentinel
  var_get_from_until, 2, var_STDIN_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(254, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__get_until = {
  t_func_std__get_until, NULL, 1, 1,
  {"252_5_sentinel\000"}
};

static TAB_NUM t_func_std__getln[] = {
  0, // locals
  0, // parameters
  // getln_from! STDIN_FILENO
  var_getln_from, 1, var_STDIN_FILENO, IO_TAIL_CALL,
  POS(257, 3)
};

static FUNCTION_INFO i_func_std__getln = {
  t_func_std__getln, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__string___load[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 269_5_filename
  var_undefined, var_270_5_max_length,
  // open! $fd filename "r"
  var_open, 2, LOCAL(2), str_r, IO_CALL(1), var_272_10_fd,
  // check fd
  var_check, 1, var_272_10_fd, 0,
  // is_defined:
  var_is_defined, 1, var_270_5_max_length, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_max_length_is_defined, lambda_25, IO_TAIL_CALL,
  POS(272, 3),
  POS(273, 3),
  POS(275, 16),
  POS(274, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__string___load = {
  t_func_std_types__string___load, NULL, 4, 1,
  {"269_5_filename\000"}
};

static TAB_NUM t_lambda_max_length_is_defined[] = {
  1, // locals
  0, // parameters
  // read_from! $data fd max_length
  var_read_from, 2, var_272_10_fd, var_270_5_max_length, IO_CALL(1), LOCAL(1),
  // close! fd
  var_close, 1, var_272_10_fd, IO_CALL(0),
  // -> data
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(276, 7),
  POS(277, 7),
  POS(278, 7),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_max_length_is_defined = {
  t_lambda_max_length_is_defined, NULL, 3, 1,
  {"276_19_data\000"}
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  // load! fd
  var_load, 1, var_272_10_fd, IO_TAIL_CALL,
  POS(280, 7)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__string___save[] = {
  3, // locals
  2, // parameters
  LOCAL(1), // 284_5_filename
  LOCAL(2), // 285_5_data
  // open! $fh filename "w+"
  var_open, 2, LOCAL(1), str_w, IO_CALL(1), LOCAL(3),
  // check fh
  var_check, 1, LOCAL(3), 0,
  // write_to! fh data
  var_write_to, 2, LOCAL(3), LOCAL(2), IO_CALL(0),
  // close! fh
  var_close, 1, LOCAL(3), IO_TAIL_CALL,
  POS(287, 3),
  POS(288, 3),
  POS(289, 3),
  POS(290, 3),
  LOCAL(2),
  LOCAL(3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__string___save = {
  t_func_std_types__string___save, NULL, 4, 3,
  {"285_5_data\000", "287_10_fh\000", "284_5_filename\000"}
};

static TAB_NUM t_func_std_types__file_descriptor___load[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 294_5_fd
  // read_all_from! $data fd
  var_read_all_from, 1, LOCAL(1), IO_CALL(1), LOCAL(2),
  // check data
  var_check, 1, LOCAL(2), 0,
  // close! fd
  var_close, 1, LOCAL(1), IO_CALL(0),
  // -> data
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(296, 3),
  POS(297, 3),
  POS(298, 3),
  POS(299, 3),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__file_descriptor___load = {
  t_func_std_types__file_descriptor___load, NULL, 4, 2,
  {"294_5_fd\000", "296_19_data\000"}
};

static TAB_NUM t_func_std_types__io___load[] = {
  5, // locals
  -5, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 313_5_io
  MANDATORY_PARAMETER, LOCAL(2), // 314_5_id
  MANDATORY_PARAMETER, LOCAL(3), // 315_5_filename
  var_undefined, LOCAL(4), // 316_5_max_length
  LOCAL(3), LOCAL(5), // 317_5_context
  // run io load_file id filename max_length context
  var_run, 6, LOCAL(1), func_load_file, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), TAIL_CALL,
  POS(319, 3),
  LOCAL(1),
  LOCAL(4),
  LOCAL(2),
  LOCAL(5),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__io___load = {
  t_func_std_types__io___load, NULL, 1, 5,
  {"313_5_io\000", "316_5_max_length\000", "314_5_id\000", "317_5_context\000", "315_5_filename\000"}
};

static TAB_NUM t_func_load_file[] = {
  2, // locals
  5, // parameters
  var_321_14_io,
  var_321_17_id,
  LOCAL(2), // 321_20_filename
  var_321_29_max_length,
  var_321_40_data,
  // open! $fd filename "r"
  var_open, 2, LOCAL(2), str_r, IO_CALL(1), var_322_10_fd,
  // is_an_error
  var_is_an_error, 1, var_322_10_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_26, lambda_27, TAIL_CALL,
  POS(322, 3),
  POS(324, 8),
  POS(323, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_load_file = {
  t_func_load_file, NULL, 3, 1,
  {"321_20_filename\000"}
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  0, // parameters
  // tuple(JOB_FAILED id fd data)
  var_tuple, 4, var_JOB_FAILED, var_321_17_id, var_322_10_fd, var_321_40_data, 1, LOCAL(1),
  //  io tuple(JOB_FAILED id fd data)
  LET, 2, var_321_14_io, LOCAL(1), TAIL_CALL,
  POS(325, 11),
  POS(325, 7)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_27[] = {
  5, // locals
  0, // parameters
  // start_reading_from &io fd true max_length
  var_start_reading_from, 4, var_321_14_io, var_322_10_fd, var_true, var_321_29_max_length, 1, var_321_14_io,
  // load_buffer_of(fd) ""
  var_load_buffer_of, 1, var_321_14_io, 1, LOCAL(2),
  // load_buffer_of(fd) ""
  LOCAL(2), 2, var_322_10_fd, string_1, 1, LOCAL(2),
  // io.load_buffer_of(fd) ""
  LET, -1, var_321_14_io, var_load_buffer_of, LOCAL(2), var_321_14_io,
  // max_length_of(fd) max_length
  var_max_length_of, 1, var_321_14_io, 1, LOCAL(2),
  // max_length_of(fd) max_length
  LOCAL(2), 2, var_322_10_fd, var_321_29_max_length, 1, LOCAL(2),
  // io.max_length_of(fd) max_length
  LET, -1, var_321_14_io, var_max_length_of, LOCAL(2), var_321_14_io,
  // id_of(fd) id
  var_id_of, 1, var_321_14_io, 1, LOCAL(2),
  // id_of(fd) id
  LOCAL(2), 2, var_322_10_fd, var_321_17_id, 1, LOCAL(2),
  // io.id_of(fd) id
  LET, -1, var_321_14_io, var_id_of, LOCAL(2), var_321_14_io,
  // READ = read_data
  var_std__key_value_pair, 2, var_READ, func_read_data, 1, LOCAL(1),
  // tuple(read_failed data)
  var_tuple, 2, func_read_failed, var_321_40_data, 1, LOCAL(2),
  // READ_FAILED = tuple(read_failed data)
  var_std__key_value_pair, 2, var_READ_FAILED, LOCAL(2), 1, LOCAL(3),
  // tuple(file_closed_after_reading data)
  var_tuple, 2, func_file_closed_after_reading, var_321_40_data, 1, LOCAL(4),
  // CLOSED = tuple(file_closed_after_reading data)
  var_std__key_value_pair, 2, var_CLOSED, LOCAL(4), 1, LOCAL(5),
  // register_handlers &io fd
  var_register_handlers, 5, var_321_14_io, var_322_10_fd, LOCAL(1), LOCAL(3), LOCAL(5), 1, var_321_14_io,
  // -> io undefined
  LET, 2, var_321_14_io, var_undefined, TAIL_CALL,
  POS(327, 7),
  POS(328, 11),
  POS(328, 11),
  POS(328, 8),
  POS(329, 11),
  POS(329, 11),
  POS(329, 8),
  POS(330, 11),
  POS(330, 11),
  POS(330, 8),
  POS(332, 9),
  POS(333, 23),
  POS(333, 9),
  POS(334, 18),
  POS(334, 9),
  POS(331, 7),
  POS(335, 7)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 17, 0,
  {}
};

static TAB_NUM t_func_read_data[] = {
  3, // locals
  3, // parameters
  var_337_14_io,
  var_337_17_fd,
  LOCAL(3), // 337_20_data
  // load_buffer_of(io)(fd)
  var_load_buffer_of, 1, var_337_14_io, 1, LOCAL(1),
  // $buf load_buffer_of(io)(fd)
  LOCAL(1), 1, var_337_17_fd, 1, var_338_4_buf,
  // max_length_of(io)(fd)
  var_max_length_of, 1, var_337_14_io, 1, LOCAL(1),
  // $max_length max_length_of(io)(fd)
  LOCAL(1), 1, var_337_17_fd, 1, var_339_4_max_length,
  // append &buf data
  var_append, 2, var_338_4_buf, LOCAL(3), 1, var_338_4_buf,
  // is_defined && length_of(buf) >= max_length:
  var_is_defined, 1, var_339_4_max_length, 1, LOCAL(1),
  // is_defined && length_of(buf) >= max_length:
  var_std__and, 2, LOCAL(1), lambda_28, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_29, lambda_30, TAIL_CALL,
  POS(338, 8),
  POS(338, 3),
  POS(339, 15),
  POS(339, 3),
  POS(340, 3),
  POS(342, 16),
  POS(342, 16),
  POS(341, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_read_data = {
  t_func_read_data, NULL, 8, 1,
  {"337_20_data\000"}
};

static TAB_NUM t_lambda_28[] = {
  3, // locals
  0, // parameters
  // length_of(buf) >= max_length:
  var_length_of, 1, var_338_4_buf, 1, LOCAL(1),
  // length_of(buf) >= max_length:
  var_std__less, 2, LOCAL(1), var_339_4_max_length, 1, LOCAL(2),
  // length_of(buf) >= max_length:
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // length_of(buf) >= max_length:
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(342, 30),
  POS(342, 30),
  POS(342, 30),
  POS(342, 30)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_29[] = {
  3, // locals
  0, // parameters
  // deregister_all_handlers &io fd
  var_deregister_all_handlers, 2, var_337_14_io, var_337_17_fd, 1, var_337_14_io,
  // id_of(io)(fd)
  var_id_of, 1, var_337_14_io, 1, LOCAL(1),
  // $id id_of(io)(fd)
  LOCAL(1), 1, var_337_17_fd, 1, LOCAL(3),
  // load_buffer_of(fd) undefined
  var_load_buffer_of, 1, var_337_14_io, 1, LOCAL(2),
  // load_buffer_of(fd) undefined
  LOCAL(2), 2, var_337_17_fd, var_undefined, 1, LOCAL(2),
  // io.load_buffer_of(fd) undefined
  LET, -1, var_337_14_io, var_load_buffer_of, LOCAL(2), var_337_14_io,
  // max_length_of(fd) undefined
  var_max_length_of, 1, var_337_14_io, 1, LOCAL(2),
  // max_length_of(fd) undefined
  LOCAL(2), 2, var_337_17_fd, var_undefined, 1, LOCAL(2),
  // io.max_length_of(fd) undefined
  LET, -1, var_337_14_io, var_max_length_of, LOCAL(2), var_337_14_io,
  // id_of(fd) undefined
  var_id_of, 1, var_337_14_io, 1, LOCAL(2),
  // id_of(fd) undefined
  LOCAL(2), 2, var_337_17_fd, var_undefined, 1, LOCAL(2),
  // io.id_of(fd) undefined
  LET, -1, var_337_14_io, var_id_of, LOCAL(2), var_337_14_io,
  // tuple(JOB_COMPLETED id buf)
  var_tuple, 3, var_JOB_COMPLETED, LOCAL(3), var_338_4_buf, 1, LOCAL(1),
  // -> io tuple(JOB_COMPLETED id buf)
  LET, 2, var_337_14_io, LOCAL(1), TAIL_CALL,
  POS(343, 7),
  POS(344, 11),
  POS(344, 7),
  POS(345, 11),
  POS(345, 11),
  POS(345, 8),
  POS(346, 11),
  POS(346, 11),
  POS(346, 8),
  POS(347, 11),
  POS(347, 11),
  POS(347, 8),
  POS(348, 13),
  POS(348, 7),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_29 = {
  t_lambda_29, NULL, 14, 1,
  {"344_8_id\000"}
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // load_buffer_of(fd) buf
  var_load_buffer_of, 1, var_337_14_io, 1, LOCAL(2),
  // load_buffer_of(fd) buf
  LOCAL(2), 2, var_337_17_fd, var_338_4_buf, 1, LOCAL(2),
  // io.load_buffer_of(fd) buf
  LET, -1, var_337_14_io, var_load_buffer_of, LOCAL(2), var_337_14_io,
  // -> io undefined
  LET, 2, var_337_14_io, var_undefined, TAIL_CALL,
  POS(350, 11),
  POS(350, 11),
  POS(350, 8),
  POS(351, 7)
};

static FUNCTION_INFO i_lambda_30 = {
  t_lambda_30, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_read_failed[] = {
  6, // locals
  4, // parameters
  LOCAL(3), // 353_16_io
  LOCAL(4), // 353_19_fd
  LOCAL(5), // 353_22_err
  LOCAL(6), // 353_26_data
  // deregister_all_handlers &io fd
  var_deregister_all_handlers, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // load_buffer_of(fd) undefined
  var_load_buffer_of, 1, LOCAL(3), 1, LOCAL(2),
  // load_buffer_of(fd) undefined
  LOCAL(2), 2, LOCAL(4), var_undefined, 1, LOCAL(2),
  // io.load_buffer_of(fd) undefined
  LET, -1, LOCAL(3), var_load_buffer_of, LOCAL(2), LOCAL(3),
  // max_length_of(fd) undefined
  var_max_length_of, 1, LOCAL(3), 1, LOCAL(2),
  // max_length_of(fd) undefined
  LOCAL(2), 2, LOCAL(4), var_undefined, 1, LOCAL(2),
  // io.max_length_of(fd) undefined
  LET, -1, LOCAL(3), var_max_length_of, LOCAL(2), LOCAL(3),
  // id_of(fd) undefined
  var_id_of, 1, LOCAL(3), 1, LOCAL(2),
  // id_of(fd) undefined
  LOCAL(2), 2, LOCAL(4), var_undefined, 1, LOCAL(2),
  // io.id_of(fd) undefined
  LET, -1, LOCAL(3), var_id_of, LOCAL(2), LOCAL(3),
  // tuple(JOB_FAILED fd err data)
  var_tuple, 4, var_JOB_FAILED, LOCAL(4), LOCAL(5), LOCAL(6), 1, LOCAL(1),
  // -> io tuple(JOB_FAILED fd err data)
  LET, 2, LOCAL(3), LOCAL(1), TAIL_CALL,
  POS(354, 3),
  POS(355, 7),
  POS(355, 7),
  POS(355, 4),
  POS(356, 7),
  POS(356, 7),
  POS(356, 4),
  POS(357, 7),
  POS(357, 7),
  POS(357, 4),
  POS(358, 9),
  POS(358, 3),
  LOCAL(3),
  LOCAL(4),
  LOCAL(5),
  LOCAL(6)
};

static FUNCTION_INFO i_func_read_failed = {
  t_func_read_failed, NULL, 12, 4,
  {"353_16_io\000", "353_19_fd\000", "353_22_err\000", "353_26_data\000"}
};

static TAB_NUM t_func_file_closed_after_reading[] = {
  7, // locals
  4, // parameters
  LOCAL(3), // 360_30_io
  LOCAL(4), // 360_33_fd
  LOCAL(1),
  LOCAL(5), // 360_43_data
  // deregister_all_handlers &io fd
  var_deregister_all_handlers, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // load_buffer_of(io)(fd)
  var_load_buffer_of, 1, LOCAL(3), 1, LOCAL(1),
  // $buf load_buffer_of(io)(fd)
  LOCAL(1), 1, LOCAL(4), 1, LOCAL(6),
  // id_of(io)(fd)
  var_id_of, 1, LOCAL(3), 1, LOCAL(1),
  // $id id_of(io)(fd)
  LOCAL(1), 1, LOCAL(4), 1, LOCAL(7),
  // load_buffer_of(fd) undefined
  var_load_buffer_of, 1, LOCAL(3), 1, LOCAL(2),
  // load_buffer_of(fd) undefined
  LOCAL(2), 2, LOCAL(4), var_undefined, 1, LOCAL(2),
  // io.load_buffer_of(fd) undefined
  LET, -1, LOCAL(3), var_load_buffer_of, LOCAL(2), LOCAL(3),
  // max_length_of(fd) undefined
  var_max_length_of, 1, LOCAL(3), 1, LOCAL(2),
  // max_length_of(fd) undefined
  LOCAL(2), 2, LOCAL(4), var_undefined, 1, LOCAL(2),
  // io.max_length_of(fd) undefined
  LET, -1, LOCAL(3), var_max_length_of, LOCAL(2), LOCAL(3),
  // id_of(fd) undefined
  var_id_of, 1, LOCAL(3), 1, LOCAL(2),
  // id_of(fd) undefined
  LOCAL(2), 2, LOCAL(4), var_undefined, 1, LOCAL(2),
  // io.id_of(fd) undefined
  LET, -1, LOCAL(3), var_id_of, LOCAL(2), LOCAL(3),
  // tuple(JOB_COMPLETED id buf data)
  var_tuple, 4, var_JOB_COMPLETED, LOCAL(7), LOCAL(6), LOCAL(5), 1, LOCAL(1),
  // -> io tuple(JOB_COMPLETED id buf data)
  LET, 2, LOCAL(3), LOCAL(1), TAIL_CALL,
  POS(361, 3),
  POS(362, 8),
  POS(362, 3),
  POS(363, 7),
  POS(363, 3),
  POS(364, 7),
  POS(364, 7),
  POS(364, 4),
  POS(365, 7),
  POS(365, 7),
  POS(365, 4),
  POS(366, 7),
  POS(366, 7),
  POS(366, 4),
  POS(367, 9),
  POS(367, 3),
  LOCAL(6),
  LOCAL(7),
  LOCAL(3),
  LOCAL(4),
  LOCAL(5)
};

static FUNCTION_INFO i_func_file_closed_after_reading = {
  t_func_file_closed_after_reading, NULL, 16, 5,
  {"362_4_buf\000", "363_4_id\000", "360_30_io\000", "360_33_fd\000", "360_43_data\000"}
};

static TAB_NUM t_func_std_types__io___save[] = {
  5, // locals
  -5, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 371_5_io
  MANDATORY_PARAMETER, LOCAL(2), // 372_5_id
  MANDATORY_PARAMETER, LOCAL(3), // 373_5_filename
  MANDATORY_PARAMETER, LOCAL(4), // 374_5_data
  var_undefined, LOCAL(5), // 375_5_context
  // run io save_file id filename data context
  var_run, 6, LOCAL(1), func_save_file, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), TAIL_CALL,
  POS(377, 3),
  LOCAL(3),
  LOCAL(4),
  LOCAL(5),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__io___save = {
  t_func_std_types__io___save, NULL, 1, 5,
  {"373_5_filename\000", "374_5_data\000", "375_5_context\000", "372_5_id\000", "371_5_io\000"}
};

static TAB_NUM t_func_save_file[] = {
  1, // locals
  5, // parameters
  var_379_14_io,
  var_379_17_id,
  var_379_20_filename,
  var_379_29_data,
  var_379_34_context,
  // open! $fd filename "w"
  var_open, 2, var_379_20_filename, str_w_2, IO_CALL(1), var_380_10_fd,
  // is_an_error
  var_is_an_error, 1, var_380_10_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_31, lambda_32, TAIL_CALL,
  POS(380, 3),
  POS(382, 8),
  POS(381, 3)
};

static FUNCTION_INFO i_func_save_file = {
  t_func_save_file, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // tuple(JOB_FAILED id fd filename)
  var_tuple, 4, var_JOB_FAILED, var_379_17_id, var_380_10_fd, var_379_20_filename, 1, LOCAL(1),
  //  io tuple(JOB_FAILED id fd filename)
  LET, 2, var_379_14_io, LOCAL(1), TAIL_CALL,
  POS(383, 11),
  POS(383, 7)
};

static FUNCTION_INFO i_lambda_31 = {
  t_lambda_31, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_32[] = {
  4, // locals
  0, // parameters
  // write &io fd data
  var_write, 3, var_379_14_io, var_380_10_fd, var_379_29_data, 1, var_379_14_io,
  // id_of(fd) id
  var_id_of, 1, var_379_14_io, 1, LOCAL(2),
  // id_of(fd) id
  LOCAL(2), 2, var_380_10_fd, var_379_17_id, 1, LOCAL(2),
  // io.id_of(fd) id
  LET, -1, var_379_14_io, var_id_of, LOCAL(2), var_379_14_io,
  // is_undefined &context -> filename
  var_is_undefined, 1, var_379_34_context, 1, LOCAL(1),
  // update_if context.is_undefined &context -> filename
  var_update_if, 3, LOCAL(1), var_379_34_context, lambda_33, 1, var_379_34_context,
  // tuple(write_completed context)
  var_tuple, 2, func_write_completed, var_379_34_context, 1, LOCAL(1),
  // WRITE_COMPLETED = tuple(write_completed context)
  var_std__key_value_pair, 2, var_WRITE_COMPLETED, LOCAL(1), 1, LOCAL(2),
  // tuple(write_failed context)
  var_tuple, 2, func_write_failed, var_379_34_context, 1, LOCAL(3),
  // WRITE_FAILED = tuple(write_failed context)
  var_std__key_value_pair, 2, var_WRITE_FAILED, LOCAL(3), 1, LOCAL(4),
  // register_handlers &io fd
  var_register_handlers, 4, var_379_14_io, var_380_10_fd, LOCAL(2), LOCAL(4), 1, var_379_14_io,
  // -> io undefined
  LET, 2, var_379_14_io, var_undefined, TAIL_CALL,
  POS(385, 7),
  POS(386, 11),
  POS(386, 11),
  POS(386, 8),
  POS(387, 25),
  POS(387, 7),
  POS(389, 27),
  POS(389, 9),
  POS(390, 24),
  POS(390, 9),
  POS(388, 7),
  POS(391, 7)
};

static FUNCTION_INFO i_lambda_32 = {
  t_lambda_32, NULL, 12, 0,
  {}
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  //  filename
  LET, 1, var_379_20_filename, TAIL_CALL,
  POS(387, 49)
};

static FUNCTION_INFO i_lambda_33 = {
  t_lambda_33, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_write_completed[] = {
  4, // locals
  4, // parameters
  LOCAL(2), // 393_20_io
  LOCAL(3), // 393_23_fd
  LOCAL(1),
  LOCAL(4), // 393_33_context
  // run &io close_file_after_writing fd context
  var_run, 4, LOCAL(2), func_close_file_after_writing, LOCAL(3), LOCAL(4), 1, LOCAL(2),
  // -> io undefined
  LET, 2, LOCAL(2), var_undefined, TAIL_CALL,
  POS(394, 3),
  POS(395, 3),
  LOCAL(2),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_write_completed = {
  t_func_write_completed, NULL, 2, 3,
  {"393_20_io\000", "393_33_context\000", "393_23_fd\000"}
};

static TAB_NUM t_func_close_file_after_writing[] = {
  6, // locals
  3, // parameters
  LOCAL(3), // 397_29_io
  LOCAL(4), // 397_32_fd
  LOCAL(5), // 397_35_context
  // close! fd
  var_close, 1, LOCAL(4), IO_CALL(0),
  // deregister_all_handlers &io fd
  var_deregister_all_handlers, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // id_of(io)(fd)
  var_id_of, 1, LOCAL(3), 1, LOCAL(1),
  // $id id_of(io)(fd)
  LOCAL(1), 1, LOCAL(4), 1, LOCAL(6),
  // id_of(fd) undefined
  var_id_of, 1, LOCAL(3), 1, LOCAL(2),
  // id_of(fd) undefined
  LOCAL(2), 2, LOCAL(4), var_undefined, 1, LOCAL(2),
  // io.id_of(fd) undefined
  LET, -1, LOCAL(3), var_id_of, LOCAL(2), LOCAL(3),
  // tuple(JOB_COMPLETED id undefined context)
  var_tuple, 4, var_JOB_COMPLETED, LOCAL(6), var_undefined, LOCAL(5), 1, LOCAL(1),
  // -> io tuple(JOB_COMPLETED id undefined context)
  LET, 2, LOCAL(3), LOCAL(1), TAIL_CALL,
  POS(398, 3),
  POS(399, 3),
  POS(400, 7),
  POS(400, 3),
  POS(401, 7),
  POS(401, 7),
  POS(401, 4),
  POS(402, 9),
  POS(402, 3),
  LOCAL(6),
  LOCAL(3),
  LOCAL(5),
  LOCAL(4)
};

static FUNCTION_INFO i_func_close_file_after_writing = {
  t_func_close_file_after_writing, NULL, 9, 4,
  {"400_4_id\000", "397_29_io\000", "397_35_context\000", "397_32_fd\000"}
};

static TAB_NUM t_func_write_failed[] = {
  7, // locals
  4, // parameters
  LOCAL(3), // 404_17_io
  LOCAL(4), // 404_20_fd
  LOCAL(5), // 404_23_err
  LOCAL(6), // 404_27_context
  // deregister_all_handlers &io fd
  var_deregister_all_handlers, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // id_of(io)(fd)
  var_id_of, 1, LOCAL(3), 1, LOCAL(1),
  // $id id_of(io)(fd)
  LOCAL(1), 1, LOCAL(4), 1, LOCAL(7),
  // id_of(fd) undefined
  var_id_of, 1, LOCAL(3), 1, LOCAL(2),
  // id_of(fd) undefined
  LOCAL(2), 2, LOCAL(4), var_undefined, 1, LOCAL(2),
  // io.id_of(fd) undefined
  LET, -1, LOCAL(3), var_id_of, LOCAL(2), LOCAL(3),
  // tuple(JOB_FAILED id err context)
  var_tuple, 4, var_JOB_FAILED, LOCAL(7), LOCAL(5), LOCAL(6), 1, LOCAL(1),
  // -> io tuple(JOB_FAILED id err context)
  LET, 2, LOCAL(3), LOCAL(1), TAIL_CALL,
  POS(405, 3),
  POS(406, 7),
  POS(406, 3),
  POS(407, 7),
  POS(407, 7),
  POS(407, 4),
  POS(408, 9),
  POS(408, 3),
  LOCAL(7),
  LOCAL(6),
  LOCAL(3),
  LOCAL(5),
  LOCAL(4)
};

static FUNCTION_INFO i_func_write_failed = {
  t_func_write_failed, NULL, 8, 5,
  {"406_4_id\000", "404_27_context\000", "404_17_io\000", "404_23_err\000", "404_20_fd\000"}
};

static TAB_NUM t_func_std__try[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 423_5_body
  // body!
  LOCAL(1), 0, IO_CALL(0),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(425, 3),
  POS(426, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__try = {
  t_func_std__try, NULL, 2, 1,
  {"423_5_body\000"}
};

static TAB_NUM t_func_std__check[] = {
  1, // locals
  1, // parameters
  var_430_5_argument,
  // is_an_error
  var_is_an_error, 1, var_430_5_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, var_pass, TAIL_CALL,
  POS(433, 14),
  POS(432, 3)
};

static FUNCTION_INFO i_func_std__check = {
  t_func_std__check, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  //  argument
  LET, 1, var_430_5_argument, TAIL_CALL,
  POS(434, 7)
};

static FUNCTION_INFO i_lambda_34 = {
  t_lambda_34, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__file_exists[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 448_5_filename
  // stat! $info filename
  var_stat, 1, LOCAL(3), IO_CALL(1), LOCAL(4),
  // is_an_error)
  var_is_an_error, 1, LOCAL(4), 1, LOCAL(1),
  // not(info.is_an_error)
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // -> not(info.is_an_error)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(450, 3),
  POS(451, 15),
  POS(451, 6),
  POS(451, 3),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std__file_exists = {
  t_func_std__file_exists, NULL, 4, 2,
  {"448_5_filename\000", "450_10_info\000"}
};

static TAB_NUM t_func_std__directory[] = {
  3, // locals
  -2, // parameters
  REST_PARAMETER, LOCAL(2), // 464_5_options
  MANDATORY_PARAMETER, LOCAL(3), // 465_5_pathname
  // SORT = false $do_sort
  var_std__key_value_pair, 2, var_SORT, var_false, 1, LOCAL(1),
  // get_options options
  var_get_options, 2, LOCAL(2), LOCAL(1), 1, var_468_19_do_sort,
  // $entries empty_list
  LET, 1, var_empty_list, 1, var_469_4_entries,
  // opendir! $dir pathname
  var_opendir, 1, LOCAL(3), IO_CALL(1), var_470_13_dir,
  // loop:
  var_loop, 1, lambda_4_loop, IO_TAIL_CALL,
  POS(468, 5),
  POS(467, 3),
  POS(469, 3),
  POS(470, 3),
  POS(471, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std__directory = {
  t_func_std__directory, NULL, 5, 2,
  {"464_5_options\000", "465_5_pathname\000"}
};

static TAB_NUM t_lambda_4_loop[] = {
  1, // locals
  0, // parameters
  // readdir! $entry dir
  var_readdir, 1, var_470_13_dir, IO_CALL(1), var_472_15_entry,
  // is_an_error:
  var_is_an_error, 1, var_472_15_entry, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_entry_is_an_error, lambda_37, IO_TAIL_CALL,
  POS(472, 5),
  POS(474, 13),
  POS(473, 5)
};

static FUNCTION_INFO i_lambda_4_loop = {
  t_lambda_4_loop, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_entry_is_an_error[] = {
  0, // locals
  0, // parameters
  // closedir! dir
  var_closedir, 1, var_470_13_dir, IO_CALL(0),
  // if
  var_if, 3, var_468_19_do_sort, lambda_do_sort, lambda_36, TAIL_CALL,
  POS(475, 9),
  POS(476, 9)
};

static FUNCTION_INFO i_lambda_entry_is_an_error = {
  t_lambda_entry_is_an_error, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_do_sort[] = {
  0, // locals
  0, // parameters
  // sort entries: (left right) -> name_of(left) < name_of(right)
  var_sort, 2, var_469_4_entries, lambda_35, TAIL_CALL,
  POS(478, 13)
};

static FUNCTION_INFO i_lambda_do_sort = {
  t_lambda_do_sort, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_35[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 478_28_left
  LOCAL(5), // 478_33_right
  // name_of(left) < name_of(right)
  var_name_of, 1, LOCAL(4), 1, LOCAL(1),
  // name_of(right)
  var_name_of, 1, LOCAL(5), 1, LOCAL(2),
  // name_of(left) < name_of(right)
  var_std__less, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // -> name_of(left) < name_of(right)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(478, 43),
  POS(478, 59),
  POS(478, 43),
  POS(478, 40),
  LOCAL(5),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_35 = {
  t_lambda_35, NULL, 4, 2,
  {"478_33_right\000", "478_28_left\000"}
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  entries
  LET, 1, var_469_4_entries, TAIL_CALL,
  POS(479, 13)
};

static FUNCTION_INFO i_lambda_36 = {
  t_lambda_36, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  // push &entries entry
  var_push, 2, var_469_4_entries, var_472_15_entry, 1, var_469_4_entries,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(481, 9),
  POS(482, 9)
};

static FUNCTION_INFO i_lambda_37 = {
  t_lambda_37, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__stat___is_a_directory[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 484_35_self
  // mode_of(self)(1) == 'd'
  var_mode_of, 1, LOCAL(4), 1, LOCAL(1),
  // mode_of(self)(1) == 'd'
  LOCAL(1), 1, num_1, 1, LOCAL(2),
  // mode_of(self)(1) == 'd'
  var_std__equal, 2, LOCAL(2), chr_100, 1, LOCAL(3),
  // -> mode_of(self)(1) == 'd'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(485, 6),
  POS(485, 6),
  POS(485, 6),
  POS(485, 3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__stat___is_a_directory = {
  t_func_std_types__stat___is_a_directory, NULL, 4, 1,
  {"484_35_self\000"}
};

static TAB_NUM t_func_std_types__dirent___is_a_directory[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 487_37_self
  // type_of(self) == DIRECTORY
  var_type_of, 1, LOCAL(3), 1, LOCAL(1),
  // type_of(self) == DIRECTORY
  var_std__equal, 2, LOCAL(1), var_DIRECTORY, 1, LOCAL(2),
  // -> type_of(self) == DIRECTORY
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(488, 6),
  POS(488, 6),
  POS(488, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__dirent___is_a_directory = {
  t_func_std_types__dirent___is_a_directory, NULL, 3, 1,
  {"487_37_self\000"}
};

static TAB_NUM t_func_std_types__object___call[] = {
  6, // locals
  2, // parameters
  LOCAL(2), // 494_5_cmd
  LOCAL(3), // 495_5_args
  // $rc result_count()
  var_result_count, 0, 1, LOCAL(4),
  // rc >= 1)
  var_std__less, 2, LOCAL(4), num_1, 1, LOCAL(1),
  // $do_return_error_code (rc >= 1)
  var_std__not, 1, LOCAL(1), 1, var_498_4_do_return_error_code,
  // rc >= 2)
  var_std__less, 2, LOCAL(4), num_2, 1, LOCAL(1),
  // $do_collect_output (rc >= 2)
  var_std__not, 1, LOCAL(1), 1, var_499_4_do_collect_output,
  // $do_collect_error_output (rc == 3)
  var_std__equal, 2, LOCAL(4), num_3, 1, var_500_4_do_collect_error_output,
  // map &args to_string
  var_map, 2, LOCAL(3), var_to_string, 1, LOCAL(3),
  // $env_vars empty_list
  LET, 1, var_empty_list, 1, var_502_4_env_vars,
  // for_each environment !env_vars
  var_for_each, 3, var_environment, lambda_38, lambda_39, 1, var_502_4_env_vars,
  // create_process! $pid $in_fd $out_fd $err_fd cmd args env_vars
  var_create_process, 3, LOCAL(2), LOCAL(3), var_502_4_env_vars, IO_CALL(4), LOCAL(5), LOCAL(6), var_508_32_out_fd, var_508_40_err_fd,
  // close! in_fd
  var_close, 1, LOCAL(6), IO_CALL(0),
  // $io std_types::io
  LET, 1, var_std_types__io, 1, var_510_4_io,
  // join_process &io pid
  var_join_process, 2, var_510_4_io, LOCAL(5), 1, var_510_4_io,
  // start_reading_from &io out_fd
  var_start_reading_from, 2, var_510_4_io, var_508_32_out_fd, 1, var_510_4_io,
  // start_reading_from &io err_fd
  var_start_reading_from, 2, var_510_4_io, var_508_40_err_fd, 1, var_510_4_io,
  // $out ""
  LET, 1, string_1, 1, var_515_4_out,
  // $err ""
  LET, 1, string_1, 1, var_516_4_err,
  // loop:
  var_loop, 1, lambda_5_loop, IO_TAIL_CALL,
  POS(497, 3),
  POS(498, 26),
  POS(498, 3),
  POS(499, 23),
  POS(499, 3),
  POS(500, 3),
  POS(501, 3),
  POS(502, 3),
  POS(503, 3),
  POS(508, 3),
  POS(509, 3),
  POS(510, 3),
  POS(511, 3),
  POS(512, 3),
  POS(513, 3),
  POS(515, 3),
  POS(516, 3),
  POS(517, 3),
  LOCAL(5),
  LOCAL(6),
  LOCAL(3),
  LOCAL(2),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__object___call = {
  t_func_std_types__object___call, NULL, 18, 5,
  {"508_20_pid\000", "508_25_in_fd\000", "495_5_args\000", "494_5_cmd\000", "497_4_rc\000"}
};

static TAB_NUM t_lambda_38[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 504_8_key
  LOCAL(3), // 504_12_value
  // "@(key)=@(value)"
  var_std__string, 3, LOCAL(2), string_2, LOCAL(3), 1, LOCAL(1),
  // push &env_vars "@(key)=@(value)"
  var_push, 2, var_502_4_env_vars, LOCAL(1), 1, var_502_4_env_vars,
  // next
  var_next, 0, TAIL_CALL,
  POS(505, 22),
  POS(505, 7),
  POS(506, 7),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_38 = {
  t_lambda_38, NULL, 3, 2,
  {"504_12_value\000", "504_8_key\000"}
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  //  env_vars
  LET, 1, var_502_4_env_vars, TAIL_CALL,
  POS(507, 7)
};

static FUNCTION_INFO i_lambda_39 = {
  t_lambda_39, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_5_loop[] = {
  1, // locals
  0, // parameters
  // get_events! &io $events
  var_get_events, 1, var_510_4_io, IO_CALL(2), var_510_4_io, LOCAL(1),
  // for_each events
  var_for_each, 3, LOCAL(1), lambda_40, var_next, IO_TAIL_CALL,
  POS(518, 5),
  POS(519, 5),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_5_loop = {
  t_lambda_5_loop, NULL, 2, 1,
  {"518_22_events\000"}
};

static TAB_NUM t_lambda_40[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 520_10_event
  // event $type $fd $data
  LOCAL(1), 0, 3, LOCAL(2), var_521_22_fd, var_521_26_data,
  // case type
  var_case, 6, LOCAL(2), var_READ, lambda_READ, var_PROCESS_JOINED, lambda_PROCESS_JOINED, lambda_50, IO_TAIL_CALL,
  POS(521, 9),
  POS(522, 9),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_40 = {
  t_lambda_40, NULL, 2, 2,
  {"521_16_type\000", "520_10_event\000"}
};

static TAB_NUM t_lambda_READ[] = {
  1, // locals
  0, // parameters
  // data == ""
  var_std__equal, 2, var_521_26_data, string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_41, IO_TAIL_CALL,
  POS(525, 15),
  POS(524, 13)
};

static FUNCTION_INFO i_lambda_READ = {
  t_lambda_READ, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  // case fd
  var_case, 6, var_521_22_fd, var_508_32_out_fd, lambda_out_fd, var_508_40_err_fd, lambda_err_fd, lambda_44, IO_TAIL_CALL,
  POS(528, 17)
};

static FUNCTION_INFO i_lambda_41 = {
  t_lambda_41, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_out_fd[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_499_4_do_collect_output, lambda_do_collect_output, lambda_42, IO_TAIL_CALL,
  POS(530, 21)
};

static FUNCTION_INFO i_lambda_out_fd = {
  t_lambda_out_fd, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_do_collect_output[] = {
  0, // locals
  0, // parameters
  // append &out data
  var_append, 2, var_515_4_out, var_521_26_data, 1, var_515_4_out,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(532, 25),
  POS(533, 25)
};

static FUNCTION_INFO i_lambda_do_collect_output = {
  t_lambda_do_collect_output, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_42[] = {
  0, // locals
  0, // parameters
  // write_to! STDOUT_FILENO data
  var_write_to, 2, var_STDOUT_FILENO, var_521_26_data, IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(535, 25),
  POS(536, 25)
};

static FUNCTION_INFO i_lambda_42 = {
  t_lambda_42, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_err_fd[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_500_4_do_collect_error_output, lambda_do_collect_error_output, lambda_43, IO_TAIL_CALL,
  POS(538, 21)
};

static FUNCTION_INFO i_lambda_err_fd = {
  t_lambda_err_fd, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_do_collect_error_output[] = {
  0, // locals
  0, // parameters
  // append &err data
  var_append, 2, var_516_4_err, var_521_26_data, 1, var_516_4_err,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(540, 25),
  POS(541, 25)
};

static FUNCTION_INFO i_lambda_do_collect_error_output = {
  t_lambda_do_collect_error_output, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  // write_to! STDERR_FILENO data
  var_write_to, 2, var_STDERR_FILENO, var_521_26_data, IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(543, 25),
  POS(544, 25)
};

static FUNCTION_INFO i_lambda_43 = {
  t_lambda_43, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(546, 21)
};

static FUNCTION_INFO i_lambda_44 = {
  t_lambda_44, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_PROCESS_JOINED[] = {
  0, // locals
  0, // parameters
  // $ret data
  LET, 1, var_521_26_data, 1, var_548_14_ret,
  // if
  var_if, 3, var_498_4_do_return_error_code, lambda_do_return_error_code, lambda_48, TAIL_CALL,
  POS(548, 13),
  POS(549, 13)
};

static FUNCTION_INFO i_lambda_PROCESS_JOINED = {
  t_lambda_PROCESS_JOINED, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_do_return_error_code[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_499_4_do_collect_output, lambda_2_do_collect_output, lambda_47, TAIL_CALL,
  POS(551, 17)
};

static FUNCTION_INFO i_lambda_do_return_error_code = {
  t_lambda_do_return_error_code, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_2_do_collect_output[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_500_4_do_collect_error_output, lambda_45, lambda_46, TAIL_CALL,
  POS(553, 21)
};

static FUNCTION_INFO i_lambda_2_do_collect_output = {
  t_lambda_2_do_collect_output, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  //  ret out err
  LET, 3, var_548_14_ret, var_515_4_out, var_516_4_err, TAIL_CALL,
  POS(555, 25)
};

static FUNCTION_INFO i_lambda_45 = {
  t_lambda_45, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  //  ret out
  LET, 2, var_548_14_ret, var_515_4_out, TAIL_CALL,
  POS(556, 25)
};

static FUNCTION_INFO i_lambda_46 = {
  t_lambda_46, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  //  ret
  LET, 1, var_548_14_ret, TAIL_CALL,
  POS(557, 21)
};

static FUNCTION_INFO i_lambda_47 = {
  t_lambda_47, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_48[] = {
  1, // locals
  0, // parameters
  // ret == 0
  var_std__equal, 2, var_548_14_ret, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_pass, lambda_49, TAIL_CALL,
  POS(560, 19),
  POS(559, 17)
};

static FUNCTION_INFO i_lambda_48 = {
  t_lambda_48, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  // error "CALLING PROCESS FAILED"
  var_error, 1, str_CALLING_PROCESS, TAIL_CALL,
  POS(563, 21)
};

static FUNCTION_INFO i_lambda_49 = {
  t_lambda_49, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(565, 13)
};

static FUNCTION_INFO i_lambda_50 = {
  t_lambda_50, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__io___call[] = {
  5, // locals
  -5, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 570_5_io
  MANDATORY_PARAMETER, LOCAL(2), // 571_5_id
  MANDATORY_PARAMETER, LOCAL(3), // 572_5_cmd
  MANDATORY_PARAMETER, LOCAL(4), // 573_5_args
  var_undefined, LOCAL(5), // 574_5_context
  // run io start_process id cmd args context
  var_run, 6, LOCAL(1), func_start_process, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), TAIL_CALL,
  POS(576, 3),
  LOCAL(2),
  LOCAL(5),
  LOCAL(1),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__io___call = {
  t_func_std_types__io___call, NULL, 1, 5,
  {"571_5_id\000", "574_5_context\000", "570_5_io\000", "572_5_cmd\000", "573_5_args\000"}
};

static TAB_NUM t_func_start_process[] = {
  12, // locals
  5, // parameters
  LOCAL(4), // 578_18_io
  LOCAL(5), // 578_21_id
  LOCAL(6), // 578_24_cmd
  LOCAL(7), // 578_28_args
  LOCAL(8), // 578_33_context
  // map &args to_string
  var_map, 2, LOCAL(7), var_to_string, 1, LOCAL(7),
  // $env_vars empty_list
  LET, 1, var_empty_list, 1, var_580_4_env_vars,
  // for_each environment !env_vars
  var_for_each, 3, var_environment, lambda_51, lambda_52, 1, var_580_4_env_vars,
  // create_process! $pid $in_fd $out_fd $err_fd cmd args env_vars
  var_create_process, 3, LOCAL(6), LOCAL(7), var_580_4_env_vars, IO_CALL(4), LOCAL(9), LOCAL(10), LOCAL(11), LOCAL(12),
  // close! in_fd
  var_close, 1, LOCAL(10), IO_CALL(0),
  // join_process &io pid
  var_join_process, 2, LOCAL(4), LOCAL(9), 1, LOCAL(4),
  // start_reading_from &io out_fd
  var_start_reading_from, 2, LOCAL(4), LOCAL(11), 1, LOCAL(4),
  // start_reading_from &io err_fd
  var_start_reading_from, 2, LOCAL(4), LOCAL(12), 1, LOCAL(4),
  // id_of(pid) id
  var_id_of, 1, LOCAL(4), 1, LOCAL(2),
  // id_of(pid) id
  LOCAL(2), 2, LOCAL(9), LOCAL(5), 1, LOCAL(2),
  // io.id_of(pid) id
  LET, -1, LOCAL(4), var_id_of, LOCAL(2), LOCAL(4),
  // info_of(out_fd) ""
  var_info_of, 1, LOCAL(4), 1, LOCAL(2),
  // info_of(out_fd) ""
  LOCAL(2), 2, LOCAL(11), string_1, 1, LOCAL(2),
  // io.info_of(out_fd) ""
  LET, -1, LOCAL(4), var_info_of, LOCAL(2), LOCAL(4),
  // info_of(err_fd) ""
  var_info_of, 1, LOCAL(4), 1, LOCAL(2),
  // info_of(err_fd) ""
  LOCAL(2), 2, LOCAL(12), string_1, 1, LOCAL(2),
  // io.info_of(err_fd) ""
  LET, -1, LOCAL(4), var_info_of, LOCAL(2), LOCAL(4),
  // !io.info_of(pid) tuple(out_fd err_fd)
  var_tuple, 2, LOCAL(11), LOCAL(12), 1, LOCAL(2),
  // info_of(pid) tuple(out_fd err_fd)
  var_info_of, 1, LOCAL(4), 1, LOCAL(3),
  // info_of(pid) tuple(out_fd err_fd)
  LOCAL(3), 2, LOCAL(9), LOCAL(2), 1, LOCAL(3),
  // io.info_of(pid) tuple(out_fd err_fd)
  LET, -1, LOCAL(4), var_info_of, LOCAL(3), LOCAL(4),
  // READ = read_process_output
  var_std__key_value_pair, 2, var_READ, func_read_process_output, 1, LOCAL(1),
  // READ_FAILED = read_from_process_failed
  var_std__key_value_pair, 2, var_READ_FAILED, func_read_from_process_failed, 1, LOCAL(2),
  // CLOSED = ignore_close
  var_std__key_value_pair, 2, var_CLOSED, func_ignore_close, 1, LOCAL(3),
  // register_handlers &io out_fd
  var_register_handlers, 5, LOCAL(4), LOCAL(11), LOCAL(1), LOCAL(2), LOCAL(3), 1, LOCAL(4),
  // READ = read_process_output
  var_std__key_value_pair, 2, var_READ, func_read_process_output, 1, LOCAL(1),
  // READ_FAILED = read_from_process_failed
  var_std__key_value_pair, 2, var_READ_FAILED, func_read_from_process_failed, 1, LOCAL(2),
  // CLOSED = ignore_close
  var_std__key_value_pair, 2, var_CLOSED, func_ignore_close, 1, LOCAL(3),
  // register_handlers &io err_fd
  var_register_handlers, 5, LOCAL(4), LOCAL(12), LOCAL(1), LOCAL(2), LOCAL(3), 1, LOCAL(4),
  // tuple(process_finished context)
  var_tuple, 2, func_process_finished, LOCAL(8), 1, LOCAL(1),
  // PROCESS_JOINED = tuple(process_finished context)
  var_std__key_value_pair, 2, var_PROCESS_JOINED, LOCAL(1), 1, LOCAL(2),
  // register_handlers &io pid
  var_register_handlers, 3, LOCAL(4), LOCAL(9), LOCAL(2), 1, LOCAL(4),
  // -> io undefined
  LET, 2, LOCAL(4), var_undefined, TAIL_CALL,
  POS(579, 3),
  POS(580, 3),
  POS(581, 3),
  POS(586, 3),
  POS(587, 3),
  POS(588, 3),
  POS(589, 3),
  POS(590, 3),
  POS(591, 7),
  POS(591, 7),
  POS(591, 4),
  POS(592, 7),
  POS(592, 7),
  POS(592, 4),
  POS(593, 7),
  POS(593, 7),
  POS(593, 4),
  POS(594, 3),
  POS(594, 7),
  POS(594, 7),
  POS(594, 4),
  POS(596, 5),
  POS(597, 5),
  POS(598, 5),
  POS(595, 3),
  POS(600, 5),
  POS(601, 5),
  POS(602, 5),
  POS(599, 3),
  POS(604, 22),
  POS(604, 5),
  POS(603, 3),
  POS(605, 3),
  LOCAL(5),
  LOCAL(4),
  LOCAL(10),
  LOCAL(6),
  LOCAL(8),
  LOCAL(11),
  LOCAL(7),
  LOCAL(12),
  LOCAL(9)
};

static FUNCTION_INFO i_func_start_process = {
  t_func_start_process, NULL, 33, 9,
  {"578_21_id\000", "578_18_io\000", "586_25_in_fd\000", "578_24_cmd\000", "578_33_context\000", "586_32_out_fd\000", "578_28_args\000", "586_40_err_fd\000", "586_20_pid\000"}
};

static TAB_NUM t_lambda_51[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 582_8_key
  LOCAL(3), // 582_12_value
  // "@(key)=@(value)"
  var_std__string, 3, LOCAL(2), string_2, LOCAL(3), 1, LOCAL(1),
  // push &env_vars "@(key)=@(value)"
  var_push, 2, var_580_4_env_vars, LOCAL(1), 1, var_580_4_env_vars,
  // next
  var_next, 0, TAIL_CALL,
  POS(583, 22),
  POS(583, 7),
  POS(584, 7),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_51 = {
  t_lambda_51, NULL, 3, 2,
  {"582_8_key\000", "582_12_value\000"}
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  //  env_vars
  LET, 1, var_580_4_env_vars, TAIL_CALL,
  POS(585, 7)
};

static FUNCTION_INFO i_lambda_52 = {
  t_lambda_52, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_read_process_output[] = {
  5, // locals
  3, // parameters
  LOCAL(3), // 607_24_io
  LOCAL(4), // 607_27_fd
  LOCAL(5), // 607_30_data
  // info_of(fd) data
  var_info_of, 1, LOCAL(3), 1, LOCAL(1),
  // info_of(fd) data
  LOCAL(1), 1, LOCAL(4), 1, LOCAL(2),
  // append &io.info_of(fd) data
  var_append, 2, LOCAL(2), LOCAL(5), 1, LOCAL(2),
  // info_of(fd) data
  LOCAL(1), 2, LOCAL(4), LOCAL(2), 1, LOCAL(1),
  // io.info_of(fd) data
  LET, -1, LOCAL(3), var_info_of, LOCAL(1), LOCAL(3),
  // -> io undefined
  LET, 2, LOCAL(3), var_undefined, TAIL_CALL,
  POS(608, 14),
  POS(608, 14),
  POS(608, 3),
  POS(608, 14),
  POS(608, 11),
  POS(609, 3),
  LOCAL(4),
  LOCAL(3),
  LOCAL(5)
};

static FUNCTION_INFO i_func_read_process_output = {
  t_func_read_process_output, NULL, 6, 3,
  {"607_27_fd\000", "607_24_io\000", "607_30_data\000"}
};

static TAB_NUM t_func_read_from_process_failed[] = {
  3, // locals
  3, // parameters
  LOCAL(2), // 611_29_io
  LOCAL(3), // 611_32_fd
  LOCAL(1),
  // deregister_all_handlers &io fd
  var_deregister_all_handlers, 2, LOCAL(2), LOCAL(3), 1, LOCAL(2),
  // -> io undefined
  LET, 2, LOCAL(2), var_undefined, TAIL_CALL,
  POS(612, 3),
  POS(613, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_read_from_process_failed = {
  t_func_read_from_process_failed, NULL, 2, 2,
  {"611_32_fd\000", "611_29_io\000"}
};

static TAB_NUM t_func_ignore_close[] = {
  2, // locals
  3, // parameters
  LOCAL(2), // 615_17_io
  LOCAL(1),
  LOCAL(1),
  // -> io undefined
  LET, 2, LOCAL(2), var_undefined, TAIL_CALL,
  POS(616, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_ignore_close = {
  t_func_ignore_close, NULL, 1, 1,
  {"615_17_io\000"}
};

static TAB_NUM t_func_process_finished[] = {
  5, // locals
  4, // parameters
  var_618_21_io,
  LOCAL(3), // 618_24_pid
  var_618_28_status,
  var_618_35_context,
  // "process finished with status @(status)"
  var_std__string, 2, str_process_finished, var_618_28_status, 1, LOCAL(1),
  // log &io 4 "process finished with status @(status)"
  var_log, 3, var_618_21_io, num_4, LOCAL(1), 1, var_618_21_io,
  // deregister_all_handlers &io pid
  var_deregister_all_handlers, 2, var_618_21_io, LOCAL(3), 1, var_618_21_io,
  // id_of(io)(pid)
  var_id_of, 1, var_618_21_io, 1, LOCAL(1),
  // $id id_of(io)(pid)
  LOCAL(1), 1, LOCAL(3), 1, var_621_4_id,
  // id_of(pid) undefined
  var_id_of, 1, var_618_21_io, 1, LOCAL(2),
  // id_of(pid) undefined
  LOCAL(2), 2, LOCAL(3), var_undefined, 1, LOCAL(2),
  // io.id_of(pid) undefined
  LET, -1, var_618_21_io, var_id_of, LOCAL(2), var_618_21_io,
  // info_of(io)(pid) $out_fd $err_fd
  var_info_of, 1, var_618_21_io, 1, LOCAL(1),
  // info_of(io)(pid) $out_fd $err_fd
  LOCAL(1), 1, LOCAL(3), 1, LOCAL(2),
  // info_of(io)(pid) $out_fd $err_fd
  LOCAL(2), 0, 2, LOCAL(4), LOCAL(5),
  // info_of(io)(out_fd)
  var_info_of, 1, var_618_21_io, 1, LOCAL(1),
  // $out info_of(io)(out_fd)
  LOCAL(1), 1, LOCAL(4), 1, var_624_4_out,
  // info_of(io)(err_fd)
  var_info_of, 1, var_618_21_io, 1, LOCAL(1),
  // $err info_of(io)(err_fd)
  LOCAL(1), 1, LOCAL(5), 1, var_625_4_err,
  // info_of(pid) undefined
  var_info_of, 1, var_618_21_io, 1, LOCAL(2),
  // info_of(pid) undefined
  LOCAL(2), 2, LOCAL(3), var_undefined, 1, LOCAL(2),
  // io.info_of(pid) undefined
  LET, -1, var_618_21_io, var_info_of, LOCAL(2), var_618_21_io,
  // info_of(out_fd) undefined
  var_info_of, 1, var_618_21_io, 1, LOCAL(2),
  // info_of(out_fd) undefined
  LOCAL(2), 2, LOCAL(4), var_undefined, 1, LOCAL(2),
  // io.info_of(out_fd) undefined
  LET, -1, var_618_21_io, var_info_of, LOCAL(2), var_618_21_io,
  // info_of(err_fd) undefined
  var_info_of, 1, var_618_21_io, 1, LOCAL(2),
  // info_of(err_fd) undefined
  LOCAL(2), 2, LOCAL(5), var_undefined, 1, LOCAL(2),
  // io.info_of(err_fd) undefined
  LET, -1, var_618_21_io, var_info_of, LOCAL(2), var_618_21_io,
  // status == 0
  var_std__equal, 2, var_618_28_status, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_53, lambda_54, TAIL_CALL,
  POS(619, 13),
  POS(619, 3),
  POS(620, 3),
  POS(621, 7),
  POS(621, 3),
  POS(622, 7),
  POS(622, 7),
  POS(622, 4),
  POS(623, 3),
  POS(623, 3),
  POS(623, 3),
  POS(624, 8),
  POS(624, 3),
  POS(625, 8),
  POS(625, 3),
  POS(626, 7),
  POS(626, 7),
  POS(626, 4),
  POS(627, 7),
  POS(627, 7),
  POS(627, 4),
  POS(628, 7),
  POS(628, 7),
  POS(628, 4),
  POS(630, 5),
  POS(629, 3),
  LOCAL(4),
  LOCAL(5),
  LOCAL(3)
};

static FUNCTION_INFO i_func_process_finished = {
  t_func_process_finished, NULL, 26, 3,
  {"623_21_out_fd\000", "623_29_err_fd\000", "618_24_pid\000"}
};

static TAB_NUM t_lambda_53[] = {
  2, // locals
  0, // parameters
  // tuple(out err) context)
  var_tuple, 2, var_624_4_out, var_625_4_err, 1, LOCAL(1),
  // tuple(JOB_COMPLETED id tuple(out err) context)
  var_tuple, 4, var_JOB_COMPLETED, var_621_4_id, LOCAL(1), var_618_35_context, 1, LOCAL(2),
  //  io tuple(JOB_COMPLETED id tuple(out err) context)
  LET, 2, var_618_21_io, LOCAL(2), TAIL_CALL,
  POS(631, 34),
  POS(631, 11),
  POS(631, 7)
};

static FUNCTION_INFO i_lambda_53 = {
  t_lambda_53, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_54[] = {
  2, // locals
  0, // parameters
  // tuple(status out err) context)
  var_tuple, 3, var_618_28_status, var_624_4_out, var_625_4_err, 1, LOCAL(1),
  // tuple(JOB_FAILED id tuple(status out err) context)
  var_tuple, 4, var_JOB_FAILED, var_621_4_id, LOCAL(1), var_618_35_context, 1, LOCAL(2),
  //  io tuple(JOB_FAILED id tuple(status out err) context)
  LET, 2, var_618_21_io, LOCAL(2), TAIL_CALL,
  POS(632, 31),
  POS(632, 11),
  POS(632, 7)
};

static FUNCTION_INFO i_lambda_54 = {
  t_lambda_54, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std__terminate[] = {
  0, // locals
  0, // parameters
  // exit! EXIT_SUCCESS
  var_exit, 1, var_EXIT_SUCCESS, IO_TAIL_CALL,
  POS(635, 3)
};

static FUNCTION_INFO i_func_std__terminate = {
  t_func_std__terminate, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__file_descriptor___serialize[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 645_5_self
  var_undefined, var_646_5_indent,
  // to_integer)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(1),
  // $str "
  var_std__string, 3, str_file_descriptor_2, LOCAL(1), string_3, 1, var_648_4_str,
  // is_defined
  var_is_defined, 1, var_646_5_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_55, lambda_56, TAIL_CALL,
  POS(649, 28),
  POS(648, 3),
  POS(651, 12),
  POS(650, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__file_descriptor___serialize = {
  t_func_std_types__file_descriptor___serialize, NULL, 4, 1,
  {"645_5_self\000"}
};

static TAB_NUM t_lambda_55[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_646_5_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_648_4_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(652, 15),
  POS(652, 8),
  POS(652, 7)
};

static FUNCTION_INFO i_lambda_55 = {
  t_lambda_55, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_648_4_str, TAIL_CALL,
  POS(653, 7)
};

static FUNCTION_INFO i_lambda_56 = {
  t_lambda_56, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__file_descriptor___deserializer_of[] = {
  3, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(3), // 658_5_argument
  // integer(argument))
  var_integer, 1, LOCAL(3), 1, LOCAL(1),
  // file_descriptor(integer(argument))
  var_file_descriptor, 1, LOCAL(1), 1, LOCAL(2),
  // -> file_descriptor(integer(argument))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(660, 22),
  POS(660, 6),
  POS(660, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__file_descriptor___deserializer_of = {
  t_func_std_types__file_descriptor___deserializer_of, NULL, 3, 1,
  {"658_5_argument\000"}
};

static TAB_NUM t_func_std_types__process_id___serialize[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 672_5_self
  var_undefined, var_673_5_indent,
  // to_integer)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(1),
  // $str "
  var_std__string, 3, str_process_id_2, LOCAL(1), string_3, 1, var_675_4_str,
  // is_defined
  var_is_defined, 1, var_673_5_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_57, lambda_58, TAIL_CALL,
  POS(676, 23),
  POS(675, 3),
  POS(678, 12),
  POS(677, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__process_id___serialize = {
  t_func_std_types__process_id___serialize, NULL, 4, 1,
  {"672_5_self\000"}
};

static TAB_NUM t_lambda_57[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_673_5_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_675_4_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(679, 15),
  POS(679, 8),
  POS(679, 7)
};

static FUNCTION_INFO i_lambda_57 = {
  t_lambda_57, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_675_4_str, TAIL_CALL,
  POS(680, 7)
};

static FUNCTION_INFO i_lambda_58 = {
  t_lambda_58, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__process_id___deserializer_of[] = {
  3, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(3), // 685_5_argument
  // integer(argument))
  var_integer, 1, LOCAL(3), 1, LOCAL(1),
  // process_id(integer(argument))
  var_process_id, 1, LOCAL(1), 1, LOCAL(2),
  // -> process_id(integer(argument))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(687, 17),
  POS(687, 6),
  POS(687, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__process_id___deserializer_of = {
  t_func_std_types__process_id___deserializer_of, NULL, 3, 1,
  {"685_5_argument\000"}
};

static TAB_NUM t_func_extern_call[] = {
  5, // locals
  -2, // parameters
  MYSELF_PARAMETER, LOCAL(4), // 695_5_myself
  REST_PARAMETER, LOCAL(5), // 696_5_arguments
  // command_of(myself) map(flatten(arguments) to_string)
  var_command_of, 1, LOCAL(4), 1, LOCAL(1),
  // flatten(arguments) to_string)
  var_flatten, 1, LOCAL(5), 1, LOCAL(2),
  // map(flatten(arguments) to_string)
  var_map, 2, LOCAL(2), var_to_string, 1, LOCAL(3),
  // call! command_of(myself) map(flatten(arguments) to_string)
  var_call, 2, LOCAL(1), LOCAL(3), IO_TAIL_CALL,
  POS(698, 9),
  POS(698, 32),
  POS(698, 28),
  POS(698, 3),
  LOCAL(4),
  LOCAL(5)
};

static FUNCTION_INFO i_func_extern_call = {
  t_func_extern_call, NULL, 4, 2,
  {"695_5_myself\000", "696_5_arguments\000"}
};

static TAB_NUM t_func_std__pipe[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, var_704_5_args,
  // $i 1
  LET, 1, num_1, 1, var_706_4_i,
  // $n length_of(args)
  var_length_of, 1, var_704_5_args, 1, var_707_4_n,
  // $in_fd undefined
  LET, 1, var_undefined, 1, var_708_4_in_fd,
  // $feed undefined
  LET, 1, var_undefined, 1, var_709_4_feed,
  // $commands empty_list
  LET, 1, var_empty_list, 1, var_710_4_commands,
  // $head undefined
  LET, 1, var_undefined, 1, var_711_4_head,
  // $arguments undefined
  LET, 1, var_undefined, 1, var_712_4_arguments,
  // $first_arg args(1)
  var_704_5_args, 1, num_1, 1, var_713_4_first_arg,
  // is_a_string:
  var_is_a_string, 1, var_713_4_first_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_first_arg_is_a_string, lambda_59, IO_TAIL_CALL,
  POS(706, 3),
  POS(707, 3),
  POS(708, 3),
  POS(709, 3),
  POS(710, 3),
  POS(711, 3),
  POS(712, 3),
  POS(713, 3),
  POS(715, 15),
  POS(714, 3)
};

static FUNCTION_INFO i_func_std__pipe = {
  t_func_std__pipe, NULL, 10, 0,
  {}
};

static TAB_NUM t_lambda_first_arg_is_a_string[] = {
  0, // locals
  0, // parameters
  // !feed first_arg
  LET, 1, var_713_4_first_arg, 1, var_709_4_feed,
  // !i 2
  LET, 1, num_2, 1, var_706_4_i,
  // build_commands!
  func_build_commands, 0, IO_TAIL_CALL,
  POS(716, 7),
  POS(717, 7),
  POS(718, 7)
};

static FUNCTION_INFO i_lambda_first_arg_is_a_string = {
  t_lambda_first_arg_is_a_string, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_59[] = {
  1, // locals
  0, // parameters
  // is_a_file_descriptor:
  var_is_a_file_descriptor, 1, var_713_4_first_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_first_arg_is_a_file_descriptor, func_build_commands, IO_TAIL_CALL,
  POS(721, 19),
  POS(720, 7)
};

static FUNCTION_INFO i_lambda_59 = {
  t_lambda_59, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_first_arg_is_a_file_descriptor[] = {
  0, // locals
  0, // parameters
  // !in_fd first_arg
  LET, 1, var_713_4_first_arg, 1, var_708_4_in_fd,
  // !i 2
  LET, 1, num_2, 1, var_706_4_i,
  // build_commands!
  func_build_commands, 0, IO_TAIL_CALL,
  POS(722, 11),
  POS(723, 11),
  POS(724, 11)
};

static FUNCTION_INFO i_lambda_first_arg_is_a_file_descriptor = {
  t_lambda_first_arg_is_a_file_descriptor, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_build_commands[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_60, lambda_64, IO_TAIL_CALL,
  POS(728, 5)
};

static FUNCTION_INFO i_func_build_commands = {
  t_func_build_commands, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_60[] = {
  1, // locals
  0, // parameters
  // n break
  var_std__less, 2, var_707_4_n, var_706_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_61, IO_TAIL_CALL,
  POS(731, 15),
  POS(730, 9)
};

static FUNCTION_INFO i_lambda_60 = {
  t_lambda_60, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_61[] = {
  1, // locals
  0, // parameters
  // $arg args(i)
  var_704_5_args, 1, var_706_4_i, 1, var_733_14_arg,
  // is_a_function:
  var_is_a_function, 1, var_733_14_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_arg_is_a_function, lambda_63, IO_TAIL_CALL,
  POS(733, 13),
  POS(735, 19),
  POS(734, 13)
};

static FUNCTION_INFO i_lambda_61 = {
  t_lambda_61, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_arg_is_a_function[] = {
  1, // locals
  0, // parameters
  // is_defined &commands:
  var_is_defined, 1, var_711_4_head, 1, LOCAL(1),
  // update_if head.is_defined &commands:
  var_update_if, 3, LOCAL(1), var_710_4_commands, lambda_62, 1, var_710_4_commands,
  // !head command_of(arg)
  var_command_of, 1, var_733_14_arg, 1, var_711_4_head,
  // !arguments empty_list
  LET, 1, var_empty_list, 1, var_712_4_arguments,
  // inc &i
  var_inc, 1, var_706_4_i, 1, var_706_4_i,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(736, 32),
  POS(736, 17),
  POS(738, 17),
  POS(739, 17),
  POS(740, 17),
  POS(741, 17)
};

static FUNCTION_INFO i_lambda_arg_is_a_function = {
  t_lambda_arg_is_a_function, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_62[] = {
  3, // locals
  0, // parameters
  // flatten(arguments) to_string))
  var_flatten, 1, var_712_4_arguments, 1, LOCAL(1),
  // map(flatten(arguments) to_string))
  var_map, 2, LOCAL(1), var_to_string, 1, LOCAL(2),
  // tuple(head map(flatten(arguments) to_string))
  var_tuple, 2, var_711_4_head, LOCAL(2), 1, LOCAL(3),
  // push commands tuple(head map(flatten(arguments) to_string))
  var_push, 2, var_710_4_commands, LOCAL(3), TAIL_CALL,
  POS(737, 48),
  POS(737, 44),
  POS(737, 33),
  POS(737, 19)
};

static FUNCTION_INFO i_lambda_62 = {
  t_lambda_62, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_63[] = {
  0, // locals
  0, // parameters
  // push &arguments arg
  var_push, 2, var_712_4_arguments, var_733_14_arg, 1, var_712_4_arguments,
  // inc &i
  var_inc, 1, var_706_4_i, 1, var_706_4_i,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(743, 17),
  POS(744, 17),
  POS(745, 17)
};

static FUNCTION_INFO i_lambda_63 = {
  t_lambda_63, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_64[] = {
  1, // locals
  0, // parameters
  // is_defined &commands:
  var_is_defined, 1, var_711_4_head, 1, LOCAL(1),
  // update_if head.is_defined &commands:
  var_update_if, 3, LOCAL(1), var_710_4_commands, lambda_65, 1, var_710_4_commands,
  // run_pipe! in_fd feed commands
  func_run_pipe, 3, var_708_4_in_fd, var_709_4_feed, var_710_4_commands, IO_TAIL_CALL,
  POS(747, 24),
  POS(747, 9),
  POS(749, 9)
};

static FUNCTION_INFO i_lambda_64 = {
  t_lambda_64, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_65[] = {
  3, // locals
  0, // parameters
  // flatten(arguments) to_string))
  var_flatten, 1, var_712_4_arguments, 1, LOCAL(1),
  // map(flatten(arguments) to_string))
  var_map, 2, LOCAL(1), var_to_string, 1, LOCAL(2),
  // tuple(head map(flatten(arguments) to_string))
  var_tuple, 2, var_711_4_head, LOCAL(2), 1, LOCAL(3),
  // push commands tuple(head map(flatten(arguments) to_string))
  var_push, 2, var_710_4_commands, LOCAL(3), TAIL_CALL,
  POS(748, 40),
  POS(748, 36),
  POS(748, 25),
  POS(748, 11)
};

static FUNCTION_INFO i_lambda_65 = {
  t_lambda_65, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_std__pipe_commands[] = {
  1, // locals
  -2, // parameters
  var_undefined, var_753_5_feed_or_fd,
  MANDATORY_PARAMETER, var_754_5_commands,
  // is_defined:
  var_is_defined, 1, var_753_5_feed_or_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_feed_or_fd_is_defined, lambda_67, IO_TAIL_CALL,
  POS(757, 16),
  POS(756, 3)
};

static FUNCTION_INFO i_func_std__pipe_commands = {
  t_func_std__pipe_commands, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_feed_or_fd_is_defined[] = {
  1, // locals
  0, // parameters
  // is_a_file_descriptor:
  var_is_a_file_descriptor, 1, var_753_5_feed_or_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_feed_or_fd_is_a_file_descriptor, lambda_66, IO_TAIL_CALL,
  POS(759, 20),
  POS(758, 7)
};

static FUNCTION_INFO i_lambda_feed_or_fd_is_defined = {
  t_lambda_feed_or_fd_is_defined, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_feed_or_fd_is_a_file_descriptor[] = {
  0, // locals
  0, // parameters
  // run_pipe! feed_or_fd undefined commands
  func_run_pipe, 3, var_753_5_feed_or_fd, var_undefined, var_754_5_commands, IO_TAIL_CALL,
  POS(760, 11)
};

static FUNCTION_INFO i_lambda_feed_or_fd_is_a_file_descriptor = {
  t_lambda_feed_or_fd_is_a_file_descriptor, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_66[] = {
  0, // locals
  0, // parameters
  // run_pipe! undefined feed_or_fd commands
  func_run_pipe, 3, var_undefined, var_753_5_feed_or_fd, var_754_5_commands, IO_TAIL_CALL,
  POS(762, 11)
};

static FUNCTION_INFO i_lambda_66 = {
  t_lambda_66, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_67[] = {
  0, // locals
  0, // parameters
  // run_pipe! undefined undefined commands
  func_run_pipe, 3, var_undefined, var_undefined, var_754_5_commands, IO_TAIL_CALL,
  POS(764, 7)
};

static FUNCTION_INFO i_lambda_67 = {
  t_lambda_67, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_run_pipe[] = {
  1, // locals
  3, // parameters
  var_768_5_in_fd,
  var_769_5_feed,
  var_770_5_commands,
  // $pids empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_772_4_pids,
  // $err_fds empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_773_4_err_fds,
  // $out_fd in_fd
  LET, 1, var_768_5_in_fd, 1, var_774_4_out_fd,
  // $env_vars undefined
  LET, 1, var_undefined, 1, var_775_4_env_vars,
  // is_defined &env_vars:
  var_is_defined, 1, var_environment, 1, LOCAL(1),
  // update_if environment.is_defined &env_vars:
  var_update_if, 3, LOCAL(1), var_775_4_env_vars, lambda_68, 1, var_775_4_env_vars,
  // for_each commands
  var_for_each, 3, var_770_5_commands, lambda_71, lambda_75, IO_TAIL_CALL,
  POS(772, 3),
  POS(773, 3),
  POS(774, 3),
  POS(775, 3),
  POS(776, 25),
  POS(776, 3),
  POS(783, 3)
};

static FUNCTION_INFO i_func_run_pipe = {
  t_func_run_pipe, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_68[] = {
  0, // locals
  0, // parameters
  // !env_vars empty_list
  LET, 1, var_empty_list, 1, var_775_4_env_vars,
  // for_each environment
  var_for_each, 3, var_environment, lambda_69, lambda_70, TAIL_CALL,
  POS(777, 5),
  POS(778, 5)
};

static FUNCTION_INFO i_lambda_68 = {
  t_lambda_68, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_69[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 779_10_key
  LOCAL(3), // 779_14_value
  // "@(key)=@(value)"
  var_std__string, 3, LOCAL(2), string_2, LOCAL(3), 1, LOCAL(1),
  // push &env_vars "@(key)=@(value)"
  var_push, 2, var_775_4_env_vars, LOCAL(1), 1, var_775_4_env_vars,
  // next
  var_next, 0, TAIL_CALL,
  POS(780, 24),
  POS(780, 9),
  POS(781, 9),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_69 = {
  t_lambda_69, NULL, 3, 2,
  {"779_14_value\000", "779_10_key\000"}
};

static TAB_NUM t_lambda_70[] = {
  0, // locals
  0, // parameters
  //  env_vars
  LET, 1, var_775_4_env_vars, TAIL_CALL,
  POS(782, 9)
};

static FUNCTION_INFO i_lambda_70 = {
  t_lambda_70, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_71[] = {
  3, // locals
  2, // parameters
  var_784_8_idx,
  LOCAL(3), // 784_12_command
  // command $head $arguments
  LOCAL(3), 0, 2, var_785_16_head, var_785_22_arguments,
  // map &arguments to_utf8
  var_map, 2, var_785_22_arguments, var_to_utf8, 1, var_785_22_arguments,
  // $pid undefined
  LET, 1, var_undefined, 1, var_787_8_pid,
  // $err_fd undefined
  LET, 1, var_undefined, 1, var_788_8_err_fd,
  // idx == 1 && in_fd.is_undefined:
  var_std__equal, 2, var_784_8_idx, num_1, 1, LOCAL(1),
  // idx == 1 && in_fd.is_undefined:
  var_std__and, 2, LOCAL(1), lambda_72, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_73, lambda_74, IO_TAIL_CALL,
  POS(785, 7),
  POS(786, 7),
  POS(787, 7),
  POS(788, 7),
  POS(790, 9),
  POS(790, 9),
  POS(789, 7),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_71 = {
  t_lambda_71, NULL, 7, 1,
  {"784_12_command\000"}
};

static TAB_NUM t_lambda_72[] = {
  1, // locals
  0, // parameters
  // is_undefined:
  var_is_undefined, 1, var_768_5_in_fd, 1, LOCAL(1),
  // in_fd.is_undefined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(790, 27),
  POS(790, 21)
};

static FUNCTION_INFO i_lambda_72 = {
  t_lambda_72, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_73[] = {
  0, // locals
  0, // parameters
  // create_process! !pid !in_fd !out_fd !err_fd head arguments env_vars
  var_create_process, 3, var_785_16_head, var_785_22_arguments, var_775_4_env_vars, IO_CALL(4), var_787_8_pid, var_768_5_in_fd, var_774_4_out_fd, var_788_8_err_fd,
  // store_pid_and_err_fd!
  func_store_pid_and_err_fd, 0, IO_TAIL_CALL,
  POS(791, 11),
  POS(792, 11)
};

static FUNCTION_INFO i_lambda_73 = {
  t_lambda_73, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_74[] = {
  0, // locals
  0, // parameters
  // create_process! !pid !out_fd !err_fd head arguments env_vars out_fd
  var_create_process, 4, var_785_16_head, var_785_22_arguments, var_775_4_env_vars, var_774_4_out_fd, IO_CALL(3), var_787_8_pid, var_774_4_out_fd, var_788_8_err_fd,
  // store_pid_and_err_fd!
  func_store_pid_and_err_fd, 0, IO_TAIL_CALL,
  POS(794, 11),
  POS(795, 11)
};

static FUNCTION_INFO i_lambda_74 = {
  t_lambda_74, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_store_pid_and_err_fd[] = {
  0, // locals
  0, // parameters
  // pids(pid) idx
  var_772_4_pids, 2, var_787_8_pid, var_784_8_idx, 1, var_772_4_pids,
  // err_fds(err_fd) idx
  var_773_4_err_fds, 2, var_788_8_err_fd, var_784_8_idx, 1, var_773_4_err_fds,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(798, 10),
  POS(799, 10),
  POS(800, 9)
};

static FUNCTION_INFO i_func_store_pid_and_err_fd = {
  t_func_store_pid_and_err_fd, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_75[] = {
  2, // locals
  0, // parameters
  // list(undefined) length_of(commands))
  var_list, 1, var_undefined, 1, LOCAL(1),
  // length_of(commands))
  var_length_of, 1, var_770_5_commands, 1, LOCAL(2),
  // $ret dup(list(undefined) length_of(commands))
  var_dup, 2, LOCAL(1), LOCAL(2), 1, var_802_8_ret,
  // $out ""
  LET, 1, string_1, 1, var_803_8_out,
  // length_of(commands))
  var_length_of, 1, var_770_5_commands, 1, LOCAL(2),
  // $err dup(list("") length_of(commands))
  var_dup, 2, list_804_16, LOCAL(2), 1, var_804_8_err,
  // is_defined
  var_is_defined, 1, var_769_5_feed, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_manage_io, lambda_76, IO_TAIL_CALL,
  POS(802, 16),
  POS(802, 32),
  POS(802, 7),
  POS(803, 7),
  POS(804, 25),
  POS(804, 7),
  POS(806, 14),
  POS(805, 7)
};

static FUNCTION_INFO i_lambda_75 = {
  t_lambda_75, NULL, 8, 0,
  {}
};

static TAB_NUM t_lambda_76[] = {
  0, // locals
  0, // parameters
  // close! in_fd
  var_close, 1, var_768_5_in_fd, IO_CALL(0),
  // !in_fd undefined
  LET, 1, var_undefined, 1, var_768_5_in_fd,
  // manage_io!
  func_manage_io, 0, IO_TAIL_CALL,
  POS(809, 11),
  POS(810, 11),
  POS(811, 11)
};

static FUNCTION_INFO i_lambda_76 = {
  t_lambda_76, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_manage_io[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_6_loop, IO_TAIL_CALL,
  POS(814, 9)
};

static FUNCTION_INFO i_func_manage_io = {
  t_func_manage_io, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_6_loop[] = {
  3, // locals
  0, // parameters
  // $read_descriptor_list keys_of(err_fds)
  var_keys_of, 1, var_773_4_err_fds, 1, var_815_12_read_descriptor_list,
  // is_defined
  var_is_defined, 1, var_768_5_in_fd, 1, LOCAL(1),
  // $write_descriptor_list
  var_if, 3, LOCAL(1), lambda_77, lambda_78, 1, LOCAL(2),
  // is_defined &read_descriptor_list:
  var_is_defined, 1, var_774_4_out_fd, 1, LOCAL(1),
  // update_if out_fd.is_defined &read_descriptor_list:
  var_update_if, 3, LOCAL(1), var_815_12_read_descriptor_list, lambda_79, 1, var_815_12_read_descriptor_list,
  // pselect!
  var_pselect, 3, var_815_12_read_descriptor_list, LOCAL(2), var_empty_list, IO_CALL(4), LOCAL(3), var_825_14_read_descriptors, var_826_14_write_descriptors, LOCAL(1),
  // for_each signals
  var_for_each, 3, LOCAL(3), lambda_80, lambda_83, IO_TAIL_CALL,
  POS(815, 11),
  POS(818, 21),
  POS(816, 11),
  POS(821, 28),
  POS(821, 11),
  POS(823, 11),
  POS(828, 11),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_6_loop = {
  t_lambda_6_loop, NULL, 7, 2,
  {"816_12_write_descriptor_list\000", "824_14_signals\000"}
};

static TAB_NUM t_lambda_77[] = {
  1, // locals
  0, // parameters
  // list(in_fd)
  var_list, 1, var_768_5_in_fd, 1, LOCAL(1),
  //  list(in_fd)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(819, 18),
  POS(819, 17)
};

static FUNCTION_INFO i_lambda_77 = {
  t_lambda_77, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_78[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(820, 17)
};

static FUNCTION_INFO i_lambda_78 = {
  t_lambda_78, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_79[] = {
  0, // locals
  0, // parameters
  // push read_descriptor_list out_fd
  var_push, 2, var_815_12_read_descriptor_list, var_774_4_out_fd, TAIL_CALL,
  POS(822, 13)
};

static FUNCTION_INFO i_lambda_79 = {
  t_lambda_79, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_80[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 829_16_signal
  // signal == SIGCHLD:
  var_std__equal, 2, LOCAL(2), var_SIGCHLD, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_81, var_next, IO_TAIL_CALL,
  POS(831, 17),
  POS(830, 15),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_80 = {
  t_lambda_80, NULL, 2, 1,
  {"829_16_signal\000"}
};

static TAB_NUM t_lambda_81[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_82, var_next, IO_TAIL_CALL,
  POS(832, 19)
};

static FUNCTION_INFO i_lambda_81 = {
  t_lambda_81, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_82[] = {
  1, // locals
  0, // parameters
  // wait! $rpid $status
  var_wait, 0, IO_CALL(2), var_834_30_rpid, var_834_36_status,
  // is_defined:
  var_is_defined, 1, var_834_30_rpid, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_rpid_is_defined, var_break, IO_TAIL_CALL,
  POS(834, 23),
  POS(836, 30),
  POS(835, 23)
};

static FUNCTION_INFO i_lambda_82 = {
  t_lambda_82, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_rpid_is_defined[] = {
  2, // locals
  0, // parameters
  // pids(rpid)) status
  var_772_4_pids, 1, var_834_30_rpid, 1, LOCAL(2),
  // ret(pids(rpid)) status
  var_802_8_ret, 2, LOCAL(2), var_834_36_status, 1, var_802_8_ret,
  // pids(rpid) undefined
  var_772_4_pids, 2, var_834_30_rpid, var_undefined, 1, var_772_4_pids,
  // is_empty
  var_is_empty, 1, var_772_4_pids, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), var_break, var_next, IO_TAIL_CALL,
  POS(837, 32),
  POS(837, 28),
  POS(838, 28),
  POS(840, 34),
  POS(839, 27)
};

static FUNCTION_INFO i_lambda_rpid_is_defined = {
  t_lambda_rpid_is_defined, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_83[] = {
  0, // locals
  0, // parameters
  // for_each write_descriptors
  var_for_each, 3, var_826_14_write_descriptors, lambda_84, lambda_85, IO_TAIL_CALL,
  POS(847, 15)
};

static FUNCTION_INFO i_lambda_83 = {
  t_lambda_83, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_84[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 848_20_write_descriptor
  // write! $bytes_written write_descriptor feed
  var_write, 2, LOCAL(2), var_769_5_feed, IO_CALL(1), LOCAL(3),
  // bytes_written+1 -1
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // range &feed bytes_written+1 -1
  var_range, 3, var_769_5_feed, LOCAL(1), minus_num_1, 1, var_769_5_feed,
  // is_empty:
  var_is_empty, 1, var_769_5_feed, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_feed_is_empty, var_next, IO_TAIL_CALL,
  POS(849, 19),
  POS(850, 31),
  POS(850, 19),
  POS(852, 26),
  POS(851, 19),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_84 = {
  t_lambda_84, NULL, 5, 2,
  {"848_20_write_descriptor\000", "849_27_bytes_written\000"}
};

static TAB_NUM t_lambda_feed_is_empty[] = {
  0, // locals
  0, // parameters
  // close! in_fd
  var_close, 1, var_768_5_in_fd, IO_CALL(0),
  // !in_fd undefined
  LET, 1, var_undefined, 1, var_768_5_in_fd,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(853, 23),
  POS(854, 23),
  POS(855, 23)
};

static FUNCTION_INFO i_lambda_feed_is_empty = {
  t_lambda_feed_is_empty, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_85[] = {
  0, // locals
  0, // parameters
  // for_each read_descriptors
  var_for_each, 3, var_825_14_read_descriptors, lambda_86, lambda_92, IO_TAIL_CALL,
  POS(858, 19)
};

static FUNCTION_INFO i_lambda_85 = {
  t_lambda_85, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_86[] = {
  1, // locals
  1, // parameters
  var_859_24_read_descriptor,
  // read! $buf read_descriptor 0x100000
  var_read, 2, var_859_24_read_descriptor, num_0x100000, IO_CALL(1), var_860_30_buf,
  // is_empty: # closed from the other side
  var_is_empty, 1, var_860_30_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_empty, lambda_89, IO_TAIL_CALL,
  POS(860, 23),
  POS(862, 29),
  POS(861, 23)
};

static FUNCTION_INFO i_lambda_86 = {
  t_lambda_86, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_buf_is_empty[] = {
  1, // locals
  0, // parameters
  // close! read_descriptor
  var_close, 1, var_859_24_read_descriptor, IO_CALL(0),
  // read_descriptor == out_fd:
  var_std__equal, 2, var_859_24_read_descriptor, var_774_4_out_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_87, lambda_88, IO_TAIL_CALL,
  POS(863, 27),
  POS(865, 29),
  POS(864, 27)
};

static FUNCTION_INFO i_lambda_buf_is_empty = {
  t_lambda_buf_is_empty, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_87[] = {
  0, // locals
  0, // parameters
  // !out_fd undefined
  LET, 1, var_undefined, 1, var_774_4_out_fd,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(866, 31),
  POS(867, 31)
};

static FUNCTION_INFO i_lambda_87 = {
  t_lambda_87, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_88[] = {
  0, // locals
  0, // parameters
  // err_fds(read_descriptor) undefined
  var_773_4_err_fds, 2, var_859_24_read_descriptor, var_undefined, 1, var_773_4_err_fds,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(869, 32),
  POS(870, 31)
};

static FUNCTION_INFO i_lambda_88 = {
  t_lambda_88, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_89[] = {
  1, // locals
  0, // parameters
  // read_descriptor == out_fd:
  var_std__equal, 2, var_859_24_read_descriptor, var_774_4_out_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_90, lambda_91, IO_TAIL_CALL,
  POS(873, 29),
  POS(872, 27)
};

static FUNCTION_INFO i_lambda_89 = {
  t_lambda_89, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_90[] = {
  0, // locals
  0, // parameters
  // append &out buf
  var_append, 2, var_803_8_out, var_860_30_buf, 1, var_803_8_out,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(874, 31),
  POS(875, 31)
};

static FUNCTION_INFO i_lambda_90 = {
  t_lambda_90, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_91[] = {
  2, // locals
  0, // parameters
  // err_fds(read_descriptor)) buf
  var_773_4_err_fds, 1, var_859_24_read_descriptor, 1, LOCAL(1),
  // err(err_fds(read_descriptor)) buf
  var_804_8_err, 1, LOCAL(1), 1, LOCAL(2),
  // append &err(err_fds(read_descriptor)) buf
  var_append, 2, LOCAL(2), var_860_30_buf, 1, LOCAL(2),
  // err(err_fds(read_descriptor)) buf
  var_804_8_err, 2, LOCAL(1), LOCAL(2), 1, var_804_8_err,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(877, 43),
  POS(877, 39),
  POS(877, 31),
  POS(877, 39),
  POS(878, 31)
};

static FUNCTION_INFO i_lambda_91 = {
  t_lambda_91, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_92[] = {
  2, // locals
  0, // parameters
  // is_empty && out_fd.is_undefined && err_fds.is_empty
  var_is_empty, 1, var_772_4_pids, 1, LOCAL(1),
  // is_empty && out_fd.is_undefined && err_fds.is_empty
  var_std__and, 2, LOCAL(1), lambda_93, 1, LOCAL(2),
  // if!
  var_if, 3, LOCAL(2), lambda_95, var_next, IO_TAIL_CALL,
  POS(881, 30),
  POS(881, 30),
  POS(880, 23)
};

static FUNCTION_INFO i_lambda_92 = {
  t_lambda_92, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_93[] = {
  2, // locals
  0, // parameters
  // is_undefined && err_fds.is_empty
  var_is_undefined, 1, var_774_4_out_fd, 1, LOCAL(1),
  // is_undefined && err_fds.is_empty
  var_std__and, 2, LOCAL(1), lambda_94, 1, LOCAL(2),
  // out_fd.is_undefined && err_fds.is_empty
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(881, 49),
  POS(881, 49),
  POS(881, 42)
};

static FUNCTION_INFO i_lambda_93 = {
  t_lambda_93, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_94[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_773_4_err_fds, 1, LOCAL(1),
  // err_fds.is_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(881, 73),
  POS(881, 65)
};

static FUNCTION_INFO i_lambda_94 = {
  t_lambda_94, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_95[] = {
  0, // locals
  0, // parameters
  //  ret out err
  LET, 3, var_802_8_ret, var_803_8_out, var_804_8_err, TAIL_CALL,
  POS(882, 27)
};

static FUNCTION_INFO i_lambda_95 = {
  t_lambda_95, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__which[] = {
  2, // locals
  1, // parameters
  var_887_5_name,
  // environment("PATH") ':')
  var_environment, 1, str_PATH, 1, LOCAL(1),
  // split(environment("PATH") ':')
  var_split, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // for_each split(environment("PATH") ':')
  var_for_each, 3, LOCAL(2), lambda_96, lambda_98, IO_TAIL_CALL,
  POS(889, 18),
  POS(889, 12),
  POS(889, 3)
};

static FUNCTION_INFO i_func_std__which = {
  t_func_std__which, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_96[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 890_8_pathname
  // $filename append(pathname "/" name)
  var_append, 3, LOCAL(1), string_4, var_887_5_name, 1, var_891_8_filename,
  // file_exists! filename $does_exist
  var_file_exists, 1, var_891_8_filename, IO_CALL(1), LOCAL(2),
  // if! does_exist
  var_if, 3, LOCAL(2), lambda_97, var_next, IO_TAIL_CALL,
  POS(891, 7),
  POS(892, 7),
  POS(893, 7),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_96 = {
  t_lambda_96, NULL, 3, 2,
  {"892_30_does_exist\000", "890_8_pathname\000"}
};

static TAB_NUM t_lambda_97[] = {
  0, // locals
  0, // parameters
  //  filename
  LET, 1, var_891_8_filename, TAIL_CALL,
  POS(894, 11)
};

static FUNCTION_INFO i_lambda_97 = {
  t_lambda_97, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_98[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(896, 7)
};

static FUNCTION_INFO i_lambda_98 = {
  t_lambda_98, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__find_first_process[] = {
  0, // locals
  1, // parameters
  var_898_28_name,
  // opendir! $dir "/proc"
  var_opendir, 1, str_proc, IO_CALL(1), var_899_13_dir,
  // loop:
  var_loop, 1, lambda_7_loop, IO_TAIL_CALL,
  POS(899, 3),
  POS(900, 3)
};

static FUNCTION_INFO i_func_std__find_first_process = {
  t_func_std__find_first_process, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_7_loop[] = {
  1, // locals
  0, // parameters
  // readdir! $entry dir
  var_readdir, 1, var_899_13_dir, IO_CALL(1), var_901_15_entry,
  // is_an_error:
  var_is_an_error, 1, var_901_15_entry, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_entry_is_an_error, lambda_99, IO_TAIL_CALL,
  POS(901, 5),
  POS(903, 13),
  POS(902, 5)
};

static FUNCTION_INFO i_lambda_7_loop = {
  t_lambda_7_loop, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_2_entry_is_an_error[] = {
  0, // locals
  0, // parameters
  // closedir! dir
  var_closedir, 1, var_899_13_dir, IO_CALL(0),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(904, 9),
  POS(905, 9)
};

static FUNCTION_INFO i_lambda_2_entry_is_an_error = {
  t_lambda_2_entry_is_an_error, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_99[] = {
  2, // locals
  0, // parameters
  // $proc_num name_of(entry)
  var_name_of, 1, var_901_15_entry, 1, var_907_10_proc_num,
  // many(DIGIT):
  var_many, 1, var_DIGIT, 1, LOCAL(1),
  // proc_num .matches. many(DIGIT):
  var_matches, 2, var_907_10_proc_num, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_100, var_next, IO_TAIL_CALL,
  POS(907, 9),
  POS(909, 30),
  POS(909, 11),
  POS(908, 9)
};

static FUNCTION_INFO i_lambda_99 = {
  t_lambda_99, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_100[] = {
  1, // locals
  0, // parameters
  // "/proc/@(proc_num)/cmdline"
  var_std__string, 3, str_proc_2, var_907_10_proc_num, str_cmdline, 1, LOCAL(1),
  // load! $buf "/proc/@(proc_num)/cmdline"
  var_load, 1, LOCAL(1), IO_CALL(1), var_910_20_buf,
  // is_empty
  var_is_empty, 1, var_910_20_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_101, IO_TAIL_CALL,
  POS(910, 24),
  POS(910, 13),
  POS(912, 19),
  POS(911, 13)
};

static FUNCTION_INFO i_lambda_100 = {
  t_lambda_100, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_101[] = {
  2, // locals
  0, // parameters
  // $proc_name buf .truncate_from. '@0;'
  var_truncate_from, 2, var_910_20_buf, chr_0, 1, LOCAL(2),
  // truncate_until &proc_name '/' -1
  var_truncate_until, 3, LOCAL(2), chr_47, minus_num_1, 1, LOCAL(2),
  // proc_name .matches. name
  var_matches, 2, LOCAL(2), var_898_28_name, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), lambda_102, var_next, IO_TAIL_CALL,
  POS(915, 17),
  POS(916, 17),
  POS(918, 19),
  POS(917, 17),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_101 = {
  t_lambda_101, NULL, 4, 1,
  {"915_18_proc_name\000"}
};

static TAB_NUM t_lambda_102[] = {
  1, // locals
  0, // parameters
  // to_integer
  var_to_integer, 1, var_907_10_proc_num, 1, LOCAL(1),
  //  proc_num.to_integer
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(919, 31),
  POS(919, 21)
};

static FUNCTION_INFO i_lambda_102 = {
  t_lambda_102, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std__find_processes[] = {
  0, // locals
  1, // parameters
  var_923_24_name,
  // opendir! $dir "/proc"
  var_opendir, 1, str_proc, IO_CALL(1), var_924_13_dir,
  // $pids empty_list
  LET, 1, var_empty_list, 1, var_925_4_pids,
  // loop:
  var_loop, 1, lambda_8_loop, IO_TAIL_CALL,
  POS(924, 3),
  POS(925, 3),
  POS(926, 3)
};

static FUNCTION_INFO i_func_std__find_processes = {
  t_func_std__find_processes, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_8_loop[] = {
  1, // locals
  0, // parameters
  // readdir! $entry dir
  var_readdir, 1, var_924_13_dir, IO_CALL(1), var_927_15_entry,
  // is_an_error:
  var_is_an_error, 1, var_927_15_entry, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3_entry_is_an_error, lambda_103, IO_TAIL_CALL,
  POS(927, 5),
  POS(929, 13),
  POS(928, 5)
};

static FUNCTION_INFO i_lambda_8_loop = {
  t_lambda_8_loop, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_3_entry_is_an_error[] = {
  0, // locals
  0, // parameters
  // closedir! dir
  var_closedir, 1, var_924_13_dir, IO_CALL(0),
  // -> pids
  LET, 1, var_925_4_pids, TAIL_CALL,
  POS(930, 9),
  POS(931, 9)
};

static FUNCTION_INFO i_lambda_3_entry_is_an_error = {
  t_lambda_3_entry_is_an_error, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_103[] = {
  2, // locals
  0, // parameters
  // $proc_num name_of(entry)
  var_name_of, 1, var_927_15_entry, 1, var_933_10_proc_num,
  // many(DIGIT):
  var_many, 1, var_DIGIT, 1, LOCAL(1),
  // proc_num .matches. many(DIGIT):
  var_matches, 2, var_933_10_proc_num, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_104, var_next, IO_TAIL_CALL,
  POS(933, 9),
  POS(935, 30),
  POS(935, 11),
  POS(934, 9)
};

static FUNCTION_INFO i_lambda_103 = {
  t_lambda_103, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_104[] = {
  1, // locals
  0, // parameters
  // "/proc/@(proc_num)/cmdline"
  var_std__string, 3, str_proc_2, var_933_10_proc_num, str_cmdline, 1, LOCAL(1),
  // load! $buf "/proc/@(proc_num)/cmdline"
  var_load, 1, LOCAL(1), IO_CALL(1), var_936_20_buf,
  // is_empty
  var_is_empty, 1, var_936_20_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_105, IO_TAIL_CALL,
  POS(936, 24),
  POS(936, 13),
  POS(938, 19),
  POS(937, 13)
};

static FUNCTION_INFO i_lambda_104 = {
  t_lambda_104, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_105[] = {
  2, // locals
  0, // parameters
  // $proc_name buf .truncate_from. '@0;'
  var_truncate_from, 2, var_936_20_buf, chr_0, 1, LOCAL(2),
  // truncate_until &proc_name '/' -1
  var_truncate_until, 3, LOCAL(2), chr_47, minus_num_1, 1, LOCAL(2),
  // proc_name .matches. name:
  var_matches, 2, LOCAL(2), var_923_24_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_106, var_next, IO_TAIL_CALL,
  POS(941, 17),
  POS(942, 17),
  POS(944, 19),
  POS(943, 17),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_105 = {
  t_lambda_105, NULL, 4, 1,
  {"941_18_proc_name\000"}
};

static TAB_NUM t_lambda_106[] = {
  1, // locals
  0, // parameters
  // to_integer
  var_to_integer, 1, var_933_10_proc_num, 1, LOCAL(1),
  // push &pids proc_num.to_integer
  var_push, 2, var_925_4_pids, LOCAL(1), 1, var_925_4_pids,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(945, 41),
  POS(945, 21),
  POS(946, 21)
};

static FUNCTION_INFO i_lambda_106 = {
  t_lambda_106, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std__get_process_name[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 950_26_pid
  // "/proc/@(pid)/cmdline"
  var_std__string, 3, str_proc_2, LOCAL(2), str_cmdline, 1, LOCAL(1),
  // load! $buf "/proc/@(pid)/cmdline"
  var_load, 1, LOCAL(1), IO_CALL(1), var_951_10_buf,
  // is_an_error
  var_is_an_error, 1, var_951_10_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_107, lambda_108, TAIL_CALL,
  POS(951, 14),
  POS(951, 3),
  POS(953, 9),
  POS(952, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std__get_process_name = {
  t_func_std__get_process_name, NULL, 4, 1,
  {"950_26_pid\000"}
};

static TAB_NUM t_lambda_107[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(954, 7)
};

static FUNCTION_INFO i_lambda_107 = {
  t_lambda_107, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_108[] = {
  1, // locals
  0, // parameters
  // buf .truncate_from. '@0;'
  var_truncate_from, 2, var_951_10_buf, chr_0, 1, LOCAL(1),
  //  buf .truncate_from. '@0;'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(955, 8),
  POS(955, 7)
};

static FUNCTION_INFO i_lambda_108 = {
  t_lambda_108, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std__get_mac_address[] = {
  1, // locals
  0, // parameters
  // get_first_mac_address! $mac
  var_get_first_mac_address, 0, IO_CALL(1), var_958_27_mac,
  // is_defined: map_reduce mac: (chr) -> hex(chr.to_integer 2)
  var_is_defined, 1, var_958_27_mac, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_mac_is_defined, lambda_110, TAIL_CALL,
  POS(958, 3),
  POS(960, 9),
  POS(959, 3)
};

static FUNCTION_INFO i_func_std__get_mac_address = {
  t_func_std__get_mac_address, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_mac_is_defined[] = {
  0, // locals
  0, // parameters
  // map_reduce mac: (chr) -> hex(chr.to_integer 2)
  var_map_reduce, 2, var_958_27_mac, lambda_109, TAIL_CALL,
  POS(960, 21)
};

static FUNCTION_INFO i_lambda_mac_is_defined = {
  t_lambda_mac_is_defined, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_109[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 960_38_chr
  // to_integer 2)
  var_to_integer, 1, LOCAL(3), 1, LOCAL(1),
  // hex(chr.to_integer 2)
  var_hex, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // -> hex(chr.to_integer 2)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(960, 54),
  POS(960, 46),
  POS(960, 43),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_109 = {
  t_lambda_109, NULL, 3, 1,
  {"960_38_chr\000"}
};

static TAB_NUM t_lambda_110[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(961, 7)
};

static FUNCTION_INFO i_lambda_110 = {
  t_lambda_110, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__extern[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 965_5_command
  // .command_of command)
  LET, -1, var_extern_call, var_command_of, LOCAL(2), LOCAL(1),
  // -> extern_call(.command_of command)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(967, 18),
  POS(967, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std__extern = {
  t_func_std__extern, NULL, 2, 1,
  {"965_5_command\000"}
};

static TAB_NUM t_module_entry[] = {
  0, // locals
  0, // parameters
  // register_type &deserializers std_types::file_descriptor
  var_register_type, 2, var_deserializers, var_std_types__file_descriptor, 1, var_deserializers,
  // register_type &deserializers std_types::process_id
  var_register_type, 2, var_deserializers, var_std_types__process_id, 1, var_deserializers,
  LET, 1, 0, TAIL_CALL,
  POS(662, 1),
  POS(689, 1)
};

static FUNCTION_INFO i_module_entry = {
  t_module_entry, NULL, 2, 0,
  {}
};

static int list_804_16_arguments[] = {
  -string_1
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__sleep}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_POSITIVE_INT64, 0, {.value = 1000000}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__write_string_to}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__write_to}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__writeln_to}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__print_string_to}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__file_descriptor___print_to}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__println_to}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__print_string}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__print}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__println}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__eprint_string}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__eprint}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__eprintln}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__read_from}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__read_from_until}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__readln_from}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__read_all_from}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3_loop}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x100000}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_24}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__get_from_until}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__getln_from}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__get_until}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__getln}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___load}},
  {FLT_STRING_8, 1, {.str_8 = "r"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_max_length_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_25}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___save}},
  {FLT_STRING_8, 2, {.str_8 = "w+"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__file_descriptor___load}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___load}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_load_file}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_26}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_27}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_read_data}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_28}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_29}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_30}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_read_failed}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_file_closed_after_reading}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___save}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_save_file}},
  {FLT_STRING_8, 1, {.str_8 = "w"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_31}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_32}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_33}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_write_completed}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_close_file_after_writing}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_write_failed}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__try}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__check}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_34}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__file_exists}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__directory}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_entry_is_an_error}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_do_sort}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_35}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_36}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_37}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__stat___is_a_directory}},
  {FLT_CHARACTER, 0, {.value = 100}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__dirent___is_a_directory}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__object___call}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_38}},
  {FLT_STRING_8, 1, {.str_8 = "="}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_39}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_40}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_READ}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_41}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_out_fd}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_do_collect_output}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_42}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_err_fd}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_do_collect_error_output}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_43}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_44}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_PROCESS_JOINED}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_do_return_error_code}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_do_collect_output}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_45}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_46}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_47}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_48}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_49}},
  {FLT_STRING_8, 22, {.str_8 = "CALLING PROCESS FAILED"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_50}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___call}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_start_process}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_51}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_52}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_read_process_output}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_read_from_process_failed}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_ignore_close}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_process_finished}},
  {FLT_STRING_8, 29, {.str_8 = "process finished with status "}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_53}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_54}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__terminate}},
  {FLT_STRING_8, 15, {.str_8 = "file_descriptor"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__file_descriptor___serialize}},
  {FLT_STRING_8, 16, {.str_8 = "file_descriptor "}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_55}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_56}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__file_descriptor___deserializer_of}},
  {FLT_STRING_8, 10, {.str_8 = "process_id"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__process_id___serialize}},
  {FLT_STRING_8, 11, {.str_8 = "process_id "}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_57}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_58}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__process_id___deserializer_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_extern_call}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__pipe}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_first_arg_is_a_string}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_59}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_first_arg_is_a_file_descriptor}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_build_commands}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_60}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_61}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_arg_is_a_function}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_62}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_63}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_64}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_65}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__pipe_commands}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_feed_or_fd_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_feed_or_fd_is_a_file_descriptor}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_66}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_67}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_run_pipe}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_68}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_69}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_70}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_71}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_72}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_73}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_74}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_store_pid_and_err_fd}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_75}},
  {FLT_LIST, 1, {.arguments = list_804_16_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_76}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_manage_io}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_77}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_78}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_79}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_80}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_81}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_82}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_rpid_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_83}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_84}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_feed_is_empty}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_85}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_86}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_buf_is_empty}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_87}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_88}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_89}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_90}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_91}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_92}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_93}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_94}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_95}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__which}},
  {FLT_STRING_8, 4, {.str_8 = "PATH"}},
  {FLT_CHARACTER, 0, {.value = 58}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_96}},
  {FLT_STRING_8, 1, {.str_8 = "/"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_97}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_98}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__find_first_process}},
  {FLT_STRING_8, 5, {.str_8 = "/proc"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_entry_is_an_error}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_99}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_100}},
  {FLT_STRING_8, 6, {.str_8 = "/proc/"}},
  {FLT_STRING_8, 8, {.str_8 = "/cmdline"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_101}},
  {FLT_CHARACTER, 0, {.value = 0}},
  {FLT_CHARACTER, 0, {.value = 47}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_102}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__find_processes}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3_entry_is_an_error}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_103}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_104}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_105}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_106}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__get_process_name}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_107}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_108}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__get_mac_address}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_mac_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_109}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_110}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__extern}},
  {FLT_FUNCTION, 0, {.func_info = &i_module_entry}}
};

static ATTRIBUTE_DEFINITION std_types__file_descriptor__attributes[] = {
  {var_print_to, -func_std_types__file_descriptor___print_to},
  {var_load, -func_std_types__file_descriptor___load},
  {-var_is_a_file_descriptor, -var_true},
  {-var_serialization_tag_of, -str_file_descriptor},
  {var_serialize, -func_std_types__file_descriptor___serialize},
  {-var_deserializer_of, -func_std_types__file_descriptor___deserializer_of}
};

static ATTRIBUTE_DEFINITION std_types__string__attributes[] = {
  {var_load, -func_std_types__string___load},
  {var_save, -func_std_types__string___save}
};

static ATTRIBUTE_DEFINITION std_types__io__attributes[] = {
  {-var_load_buffer_of, -var_empty_hash_table},
  {-var_max_length_of, -var_empty_hash_table},
  {-var_id_of, -var_empty_hash_table},
  {-var_info_of, -var_empty_hash_table},
  {var_load, -func_std_types__io___load},
  {var_save, -func_std_types__io___save},
  {var_call, -func_std_types__io___call}
};

static ATTRIBUTE_DEFINITION std_types__stat__attributes[] = {
  {var_is_a_directory, -func_std_types__stat___is_a_directory}
};

static ATTRIBUTE_DEFINITION std_types__dirent__attributes[] = {
  {var_is_a_directory, -func_std_types__dirent___is_a_directory}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {var_call, -func_std_types__object___call},
  {-var_is_a_file_descriptor, -var_false},
  {var_is_a_process_id, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__process_id__attributes[] = {
  {var_is_a_process_id, -var_true},
  {-var_serialization_tag_of, -str_process_id},
  {var_serialize, -func_std_types__process_id___serialize},
  {-var_deserializer_of, -func_std_types__process_id___deserializer_of}
};

static ATTRIBUTE_DEFINITION extern_call__attributes[] = {
  {-var_command_of, -var_undefined}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "load\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(67, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "save\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "update\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_directory\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "sleep\000std", NULL,
    {.const_idx = -func_std__sleep}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "79_5_duration\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(81, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(81, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(81, 49)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "usleep\000", NULL,
    {.position = POS(81, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(81, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "write_string_to\000std", NULL,
    {.const_idx = -func_std__write_string_to}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "85_5_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "86_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "88_4_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(88, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "91_15_bytes_written\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write\000", NULL,
    {.position = POS(91, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(93, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(98, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(98, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(99, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(100, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(96, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(101, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(89, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "write_to\000std", NULL,
    {.const_idx = -func_std__write_to}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(108, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write_string_to\000", NULL,
    {.position = POS(108, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "writeln_to\000std", NULL,
    {.const_idx = -func_std__writeln_to}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(115, 23)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "print_string_to\000std", NULL,
    {.const_idx = -func_std__print_string_to}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(122, 27)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "print_to\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 6,
    "file_descriptor\000std_types", std_types__file_descriptor__attributes,
    {.position = POS(126, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "print_to\000", NULL,
    {.position = POS(126, 29)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "println_to\000std", NULL,
    {.const_idx = -func_std__println_to}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "print_string\000std", NULL,
    {.const_idx = -func_std__print_string}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDOUT_FILENO\000", NULL,
    {.position = POS(144, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "print\000std", NULL,
    {.const_idx = -func_std__print}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print_string\000", NULL,
    {.position = POS(150, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "println\000std", NULL,
    {.const_idx = -func_std__println}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "eprint_string\000std", NULL,
    {.const_idx = -func_std__eprint_string}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDERR_FILENO\000", NULL,
    {.position = POS(162, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "eprint\000std", NULL,
    {.const_idx = -func_std__eprint}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprint_string\000", NULL,
    {.position = POS(168, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "eprintln\000std", NULL,
    {.const_idx = -func_std__eprintln}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "read_from\000std", NULL,
    {.const_idx = -func_std__read_from}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "178_5_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "179_5_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "181_4_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "183_12_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read\000", NULL,
    {.position = POS(183, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(186, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(187, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(188, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000", NULL,
    {.position = POS(189, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(184, 5)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "read_from_until\000std", NULL,
    {.const_idx = -func_std__read_from_until}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "194_5_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "195_5_sentinel\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "196_5_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "198_4_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "200_12_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(207, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(208, 13)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "readln_from\000std", NULL,
    {.const_idx = -func_std__readln_from}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read_from_until\000", NULL,
    {.position = POS(219, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "read_all_from\000std", NULL,
    {.const_idx = -func_std__read_all_from}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "223_5_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "225_4_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "227_12_buf\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "get_from_until\000std", NULL,
    {.const_idx = -func_std__get_from_until}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_utf8\000", NULL,
    {.position = POS(242, 11)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "getln_from\000std", NULL,
    {.const_idx = -func_std__getln_from}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_from_until\000", NULL,
    {.position = POS(248, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "get_until\000std", NULL,
    {.const_idx = -func_std__get_until}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDIN_FILENO\000", NULL,
    {.position = POS(254, 19)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "getln\000std", NULL,
    {.const_idx = -func_std__getln}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "getln_from\000", NULL,
    {.position = POS(257, 3)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "string\000std_types", std_types__string__attributes,
    {.position = POS(259, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "load\000", NULL,
    {.position = POS(259, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "270_5_max_length\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(270, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "272_10_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open\000", NULL,
    {.position = POS(272, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "check\000", NULL,
    {.position = POS(273, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(275, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read_from\000", NULL,
    {.position = POS(276, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "close\000", NULL,
    {.position = POS(277, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "save\000", NULL,
    {.position = POS(282, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write_to\000", NULL,
    {.position = POS(289, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read_all_from\000", NULL,
    {.position = POS(296, 3)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "load_buffer_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "max_length_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "id_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "info_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 7,
    "io\000std_types", std_types__io__attributes,
    {.position = POS(306, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(306, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "run\000", NULL,
    {.position = POS(319, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "321_14_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "321_17_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "321_29_max_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "321_40_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "322_10_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "JOB_FAILED\000", NULL,
    {.position = POS(325, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(325, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "start_reading_from\000", NULL,
    {.position = POS(327, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ\000", NULL,
    {.position = POS(332, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value_pair\000std", NULL,
    {.position = POS(332, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ_FAILED\000", NULL,
    {.position = POS(333, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CLOSED\000", NULL,
    {.position = POS(334, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "register_handlers\000", NULL,
    {.position = POS(331, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "337_14_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "337_17_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "338_4_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "339_4_max_length\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(342, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(342, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deregister_all_handlers\000", NULL,
    {.position = POS(343, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "JOB_COMPLETED\000", NULL,
    {.position = POS(348, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "379_14_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "379_17_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "379_20_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "379_29_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "379_34_context\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "380_10_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(387, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(387, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_COMPLETED\000", NULL,
    {.position = POS(389, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_FAILED\000", NULL,
    {.position = POS(390, 9)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "try\000std", NULL,
    {.const_idx = -func_std__try}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "check\000std", NULL,
    {.const_idx = -func_std__check}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "430_5_argument\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "file_exists\000std", NULL,
    {.const_idx = -func_std__file_exists}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "stat\000", NULL,
    {.position = POS(450, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(451, 6)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "directory\000std", NULL,
    {.const_idx = -func_std__directory}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SORT\000", NULL,
    {.position = POS(468, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(468, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "468_19_do_sort\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_options\000", NULL,
    {.position = POS(467, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "469_4_entries\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(469, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "470_13_dir\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "opendir\000", NULL,
    {.position = POS(470, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "472_15_entry\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "readdir\000", NULL,
    {.position = POS(472, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "closedir\000", NULL,
    {.position = POS(475, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "name_of\000", NULL,
    {.position = POS(478, 43)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sort\000", NULL,
    {.position = POS(478, 13)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "stat\000std_types", std_types__stat__attributes,
    {.position = POS(484, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_directory\000", NULL,
    {.position = POS(484, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mode_of\000", NULL,
    {.position = POS(485, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(485, 6)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "dirent\000std_types", std_types__dirent__attributes,
    {.position = POS(487, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "type_of\000", NULL,
    {.position = POS(488, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DIRECTORY\000", NULL,
    {.position = POS(488, 23)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "call\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(492, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "call\000", NULL,
    {.position = POS(492, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(497, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "498_4_do_return_error_code\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "499_4_do_collect_output\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "500_4_do_collect_error_output\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_string\000", NULL,
    {.position = POS(501, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(501, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "502_4_env_vars\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "environment\000", NULL,
    {.position = POS(503, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(505, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(503, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "508_32_out_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "508_40_err_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_process\000", NULL,
    {.position = POS(508, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "510_4_io\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "join_process\000", NULL,
    {.position = POS(511, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "515_4_out\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "516_4_err\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_events\000", NULL,
    {.position = POS(518, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "521_22_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "521_26_data\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(528, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PROCESS_JOINED\000", NULL,
    {.position = POS(547, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "548_14_ret\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error\000", NULL,
    {.position = POS(563, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "580_4_env_vars\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "618_21_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "618_28_status\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "618_35_context\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "log\000", NULL,
    {.position = POS(619, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "621_4_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "624_4_out\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "625_4_err\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "terminate\000std", NULL,
    {.const_idx = -func_std__terminate}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXIT_SUCCESS\000", NULL,
    {.position = POS(635, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exit\000", NULL,
    {.position = POS(635, 3)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_file_descriptor\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_file_descriptor\000", NULL,
    {.position = POS(638, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(641, 29)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(643, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "646_5_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "648_4_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(652, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deserializer_of\000", NULL,
    {.position = POS(655, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "integer\000", NULL,
    {.position = POS(660, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "file_descriptor\000", NULL,
    {.position = POS(660, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deserializers\000", NULL,
    {.position = POS(662, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "register_type\000", NULL,
    {.position = POS(662, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_process_id\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_process_id\000", NULL,
    {.position = POS(665, 20)}
  },
  {
    FOT_UNKNOWN, 0, 4,
    "process_id\000std_types", std_types__process_id__attributes,
    {.position = POS(666, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "673_5_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "675_4_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "process_id\000", NULL,
    {.position = POS(687, 6)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "command_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_INITIALIZED, 0, 1,
    "extern_call\000", extern_call__attributes,
    {.const_idx = -func_extern_call}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "flatten\000", NULL,
    {.position = POS(698, 32)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pipe\000std", NULL,
    {.const_idx = -func_std__pipe}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "704_5_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "706_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "707_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "708_4_in_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "709_4_feed\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "710_4_commands\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "711_4_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "712_4_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "713_4_first_arg\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(715, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "733_14_arg\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_function\000", NULL,
    {.position = POS(735, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(740, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pipe_commands\000std", NULL,
    {.const_idx = -func_std__pipe_commands}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "753_5_feed_or_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "754_5_commands\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "768_5_in_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "769_5_feed\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "770_5_commands\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "772_4_pids\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "773_4_err_fds\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "774_4_out_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "775_4_env_vars\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "784_8_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "785_16_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "785_22_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "787_8_pid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "788_8_err_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(802, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "802_8_ret\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dup\000", NULL,
    {.position = POS(802, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "803_8_out\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "804_8_err\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "815_12_read_descriptor_list\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "keys_of\000", NULL,
    {.position = POS(815, 33)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "825_14_read_descriptors\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "826_14_write_descriptors\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pselect\000", NULL,
    {.position = POS(823, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGCHLD\000", NULL,
    {.position = POS(831, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "834_30_rpid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "834_36_status\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "wait\000", NULL,
    {.position = POS(834, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "859_24_read_descriptor\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "860_30_buf\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "which\000std", NULL,
    {.const_idx = -func_std__which}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "887_5_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split\000", NULL,
    {.position = POS(889, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "891_8_filename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "file_exists\000", NULL,
    {.position = POS(892, 7)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "find_first_process\000std", NULL,
    {.const_idx = -func_std__find_first_process}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "898_28_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "899_13_dir\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "901_15_entry\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "907_10_proc_num\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DIGIT\000", NULL,
    {.position = POS(909, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "many\000", NULL,
    {.position = POS(909, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "matches\000", NULL,
    {.position = POS(909, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "910_20_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(915, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_until\000", NULL,
    {.position = POS(916, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "find_processes\000std", NULL,
    {.const_idx = -func_std__find_processes}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "923_24_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "924_13_dir\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "925_4_pids\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "927_15_entry\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "933_10_proc_num\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "936_20_buf\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "get_process_name\000std", NULL,
    {.const_idx = -func_std__get_process_name}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "951_10_buf\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "get_mac_address\000std", NULL,
    {.const_idx = -func_std__get_mac_address}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "958_27_mac\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_first_mac_address\000", NULL,
    {.position = POS(958, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hex\000", NULL,
    {.position = POS(960, 46)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(960, 21)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "extern\000std", NULL,
    {.const_idx = -func_std__extern}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__io__io = {
  "_basic__io__io", // module name
  "basic/io/io.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO|FEAT_INITIALIZER,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  237, // number of constants
  294, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
