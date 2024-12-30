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
  uni_NONE = -73,
  func_std_types__io___save = -74,
  func_save_file = -75,
  str_w_2 = -76,
  lambda_31 = -77,
  lambda_32 = -78,
  lambda_33 = -79,
  func_write_completed = -80,
  func_close_file_after_writing = -81,
  func_write_failed = -82,
  func_std__try = -83,
  func_std__check = -84,
  lambda_34 = -85,
  func_std__file_exists = -86,
  func_std__directory = -87,
  lambda_4_loop = -88,
  lambda_entry_is_an_error = -89,
  lambda_do_sort = -90,
  lambda_35 = -91,
  lambda_36 = -92,
  lambda_37 = -93,
  func_std_types__stat___is_a_directory = -94,
  chr_100 = -95,
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
  list_803_16 = -177,
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
  var_381_14_io, // dynamic
  var_381_17_id, // dynamic
  var_381_20_filename, // dynamic
  var_381_29_data, // dynamic
  var_381_34_context, // dynamic
  var_382_10_fd, // dynamic
  var_std__equal, // extern
  var_update_if, // extern
  var_WRITE_COMPLETED, // extern
  var_WRITE_FAILED, // extern
  var_std__try, // initialized
  var_std__check, // initialized
  var_432_5_argument, // dynamic
  var_std__file_exists, // initialized
  var_stat, // extern
  var_not, // extern
  var_std__directory, // initialized
  var_SORT, // extern
  var_false, // extern
  var_470_19_do_sort, // dynamic
  var_get_options, // extern
  var_471_4_entries, // dynamic
  var_empty_list, // extern
  var_472_13_dir, // dynamic
  var_opendir, // extern
  var_474_15_entry, // dynamic
  var_readdir, // extern
  var_closedir, // extern
  var_name_of, // extern
  var_sort, // extern
  var_std_types__stat, // extern
  var_is_a_directory, // extern polymorphic
  var_mode_of, // extern
  var_std__call, // attribute
  var_std_types__object, // extern
  var_call, // extern polymorphic
  var_result_count, // extern
  var_497_4_do_return_error_code, // dynamic
  var_498_4_do_collect_output, // dynamic
  var_499_4_do_collect_error_output, // dynamic
  var_to_string, // extern
  var_map, // extern
  var_501_4_env_vars, // dynamic
  var_environment, // extern
  var_std__string, // extern
  var_for_each, // extern
  var_507_32_out_fd, // dynamic
  var_507_40_err_fd, // dynamic
  var_create_process, // extern
  var_509_4_io, // dynamic
  var_join_process, // extern
  var_514_4_out, // dynamic
  var_515_4_err, // dynamic
  var_get_events, // extern
  var_520_22_fd, // dynamic
  var_520_26_data, // dynamic
  var_case, // extern
  var_PROCESS_JOINED, // extern
  var_547_14_ret, // dynamic
  var_error, // extern
  var_579_4_env_vars, // dynamic
  var_617_21_io, // dynamic
  var_617_28_status, // dynamic
  var_617_35_context, // dynamic
  var_log, // extern
  var_620_4_id, // dynamic
  var_623_4_out, // dynamic
  var_624_4_err, // dynamic
  var_std__terminate, // initialized
  var_EXIT_SUCCESS, // extern
  var_exit, // extern
  var_std__is_a_file_descriptor, // attribute
  var_is_a_file_descriptor, // extern polymorphic
  var_serialization_tag_of, // extern polymorphic
  var_serialize, // extern polymorphic
  var_645_5_indent, // dynamic
  var_647_4_str, // dynamic
  var_tabs_and_spaces, // extern
  var_deserializer_of, // extern polymorphic
  var_integer, // extern
  var_file_descriptor, // extern
  var_deserializers, // extern
  var_register_type, // extern
  var_std__is_a_process_id, // attribute
  var_is_a_process_id, // extern polymorphic
  var_std_types__process_id, // extern
  var_672_5_indent, // dynamic
  var_674_4_str, // dynamic
  var_process_id, // extern
  var_command_of, // attribute
  var_extern_call, // initialized
  var_flatten, // extern
  var_std__pipe, // initialized
  var_703_5_args, // dynamic
  var_705_4_i, // dynamic
  var_706_4_n, // dynamic
  var_707_4_in_fd, // dynamic
  var_708_4_feed, // dynamic
  var_709_4_commands, // dynamic
  var_710_4_head, // dynamic
  var_711_4_arguments, // dynamic
  var_712_4_first_arg, // dynamic
  var_is_a_string, // extern
  var_732_14_arg, // dynamic
  var_is_a_function, // extern
  var_inc, // extern
  var_std__pipe_commands, // initialized
  var_752_5_feed_or_fd, // dynamic
  var_753_5_commands, // dynamic
  var_767_5_in_fd, // dynamic
  var_768_5_feed, // dynamic
  var_769_5_commands, // dynamic
  var_771_4_pids, // dynamic
  var_772_4_err_fds, // dynamic
  var_773_4_out_fd, // dynamic
  var_774_4_env_vars, // dynamic
  var_783_8_idx, // dynamic
  var_784_16_head, // dynamic
  var_784_22_arguments, // dynamic
  var_786_8_pid, // dynamic
  var_787_8_err_fd, // dynamic
  var_is_undefined, // extern
  var_list, // extern
  var_801_8_ret, // dynamic
  var_dup, // extern
  var_802_8_out, // dynamic
  var_803_8_err, // dynamic
  var_814_12_read_descriptor_list, // dynamic
  var_keys_of, // extern
  var_824_14_read_descriptors, // dynamic
  var_825_14_write_descriptors, // dynamic
  var_pselect, // extern
  var_SIGCHLD, // extern
  var_833_30_rpid, // dynamic
  var_833_36_status, // dynamic
  var_wait, // extern
  var_858_24_read_descriptor, // dynamic
  var_859_30_buf, // dynamic
  var_std__which, // initialized
  var_886_5_name, // dynamic
  var_split, // extern
  var_890_8_filename, // dynamic
  var_file_exists, // extern
  var_std__find_first_process, // initialized
  var_897_28_name, // dynamic
  var_898_13_dir, // dynamic
  var_900_15_entry, // dynamic
  var_906_10_proc_num, // dynamic
  var_DIGIT, // extern
  var_many, // extern
  var_matches, // extern
  var_909_20_buf, // dynamic
  var_truncate_from, // extern
  var_truncate_until, // extern
  var_std__find_processes, // initialized
  var_922_24_name, // dynamic
  var_923_13_dir, // dynamic
  var_924_4_pids, // dynamic
  var_926_15_entry, // dynamic
  var_932_10_proc_num, // dynamic
  var_935_20_buf, // dynamic
  var_std__get_process_name, // initialized
  var_950_10_buf, // dynamic
  var_std__get_mac_address, // initialized
  var_957_27_mac, // dynamic
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
  POS(108, 3)
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
  POS(115, 3)
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
  POS(122, 3)
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
  POS(131, 3)
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
  POS(138, 3)
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
  POS(144, 3)
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
  POS(150, 3)
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
  POS(156, 3)
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
  POS(162, 3)
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
  POS(168, 3)
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
  POS(174, 3)
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

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_183_12_buf, TAIL_CALL,
  POS(185, 28)
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

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_181_4_data, TAIL_CALL,
  POS(186, 25)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_10, IO_TAIL_CALL,
  POS(187, 9)
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

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_200_12_buf, TAIL_CALL,
  POS(202, 28)
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

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_198_4_data, TAIL_CALL,
  POS(203, 25)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_16, IO_TAIL_CALL,
  POS(204, 9)
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // append &data buf
  var_append, 2, var_198_4_data, var_200_12_buf, 1, var_198_4_data,
  // buf .has_suffix. sentinel:
  var_has_suffix, 2, var_200_12_buf, var_195_5_sentinel, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), lambda_17, var_next, IO_TAIL_CALL,
  POS(205, 9),
  POS(207, 11),
  POS(206, 9)
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

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_198_4_data, TAIL_CALL,
  POS(212, 17)
};

static TAB_NUM t_func_std__readln_from[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 217_5_fd
  // read_from_until! fd '@nl;'
  var_read_from_until, 2, LOCAL(1), chr_10, IO_TAIL_CALL,
  POS(219, 3)
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

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_227_12_buf, TAIL_CALL,
  POS(229, 28)
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

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_225_4_data, TAIL_CALL,
  POS(230, 25)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_24, IO_TAIL_CALL,
  POS(231, 9)
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
  POS(242, 3)
};

static TAB_NUM t_func_std__getln_from[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 246_5_fd
  // get_from_until! fd '@nl;'
  var_get_from_until, 2, LOCAL(1), chr_10, IO_TAIL_CALL,
  POS(248, 3)
};

static TAB_NUM t_func_std__get_until[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 252_5_sentinel
  // get_from_until! STDIN_FILENO sentinel
  var_get_from_until, 2, var_STDIN_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(254, 3)
};

static TAB_NUM t_func_std__getln[] = {
  0, // locals
  0, // parameters
  // getln_from! STDIN_FILENO
  var_getln_from, 1, var_STDIN_FILENO, IO_TAIL_CALL,
  POS(257, 3)
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
  POS(274, 3)
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
  POS(278, 7)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  // load! fd
  var_load, 1, var_272_10_fd, IO_TAIL_CALL,
  POS(280, 7)
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
  POS(290, 3)
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
  POS(299, 3)
};

static TAB_NUM t_func_std_types__io___load[] = {
  5, // locals
  -5, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 313_5_io
  MANDATORY_PARAMETER, LOCAL(2), // 314_5_id
  MANDATORY_PARAMETER, LOCAL(3), // 315_5_filename
  var_undefined, LOCAL(4), // 316_5_max_length
  LOCAL(3), LOCAL(5), // 317_5_data
  // run io load_file id filename max_length data
  var_run, 6, LOCAL(1), func_load_file, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), TAIL_CALL,
  POS(319, 3)
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
  POS(323, 3)
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
  POS(341, 3)
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
  POS(348, 7)
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
  POS(358, 3)
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
  POS(367, 3)
};

static TAB_NUM t_func_std_types__io___save[] = {
  5, // locals
  -5, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 373_5_io
  MANDATORY_PARAMETER, LOCAL(2), // 374_5_id
  MANDATORY_PARAMETER, LOCAL(3), // 375_5_filename
  MANDATORY_PARAMETER, LOCAL(4), // 376_5_data
  uni_NONE, LOCAL(5), // 377_5_context
  // run io save_file id filename data context
  var_run, 6, LOCAL(1), func_save_file, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), TAIL_CALL,
  POS(379, 3)
};

static TAB_NUM t_func_save_file[] = {
  1, // locals
  5, // parameters
  var_381_14_io,
  var_381_17_id,
  var_381_20_filename,
  var_381_29_data,
  var_381_34_context,
  // open! $fd filename "w"
  var_open, 2, var_381_20_filename, str_w_2, IO_CALL(1), var_382_10_fd,
  // is_an_error
  var_is_an_error, 1, var_382_10_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_31, lambda_32, TAIL_CALL,
  POS(382, 3),
  POS(384, 8),
  POS(383, 3)
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // tuple(JOB_FAILED id fd filename)
  var_tuple, 4, var_JOB_FAILED, var_381_17_id, var_382_10_fd, var_381_20_filename, 1, LOCAL(1),
  //  io tuple(JOB_FAILED id fd filename)
  LET, 2, var_381_14_io, LOCAL(1), TAIL_CALL,
  POS(385, 11),
  POS(385, 7)
};

static TAB_NUM t_lambda_32[] = {
  4, // locals
  0, // parameters
  // write &io fd data
  var_write, 3, var_381_14_io, var_382_10_fd, var_381_29_data, 1, var_381_14_io,
  // id_of(fd) id
  var_id_of, 1, var_381_14_io, 1, LOCAL(2),
  // id_of(fd) id
  LOCAL(2), 2, var_382_10_fd, var_381_17_id, 1, LOCAL(2),
  // io.id_of(fd) id
  LET, -1, var_381_14_io, var_id_of, LOCAL(2), var_381_14_io,
  // NONE == context &context -> filename
  var_std__equal, 2, uni_NONE, var_381_34_context, 1, LOCAL(1),
  // update_if NONE == context &context -> filename
  var_update_if, 3, LOCAL(1), var_381_34_context, lambda_33, 1, var_381_34_context,
  // tuple(write_completed context)
  var_tuple, 2, func_write_completed, var_381_34_context, 1, LOCAL(1),
  // WRITE_COMPLETED = tuple(write_completed context)
  var_std__key_value_pair, 2, var_WRITE_COMPLETED, LOCAL(1), 1, LOCAL(2),
  // tuple(write_failed context)
  var_tuple, 2, func_write_failed, var_381_34_context, 1, LOCAL(3),
  // WRITE_FAILED = tuple(write_failed context)
  var_std__key_value_pair, 2, var_WRITE_FAILED, LOCAL(3), 1, LOCAL(4),
  // register_handlers &io fd
  var_register_handlers, 4, var_381_14_io, var_382_10_fd, LOCAL(2), LOCAL(4), 1, var_381_14_io,
  // -> io undefined
  LET, 2, var_381_14_io, var_undefined, TAIL_CALL,
  POS(387, 7),
  POS(388, 11),
  POS(388, 11),
  POS(388, 8),
  POS(389, 17),
  POS(389, 7),
  POS(391, 27),
  POS(391, 9),
  POS(392, 24),
  POS(392, 9),
  POS(390, 7),
  POS(393, 7)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  //  filename
  LET, 1, var_381_20_filename, TAIL_CALL,
  POS(389, 44)
};

static TAB_NUM t_func_write_completed[] = {
  4, // locals
  4, // parameters
  LOCAL(2), // 395_20_io
  LOCAL(3), // 395_23_fd
  LOCAL(1),
  LOCAL(4), // 395_33_context
  // run &io close_file_after_writing fd context
  var_run, 4, LOCAL(2), func_close_file_after_writing, LOCAL(3), LOCAL(4), 1, LOCAL(2),
  // -> io undefined
  LET, 2, LOCAL(2), var_undefined, TAIL_CALL,
  POS(396, 3),
  POS(397, 3)
};

static TAB_NUM t_func_close_file_after_writing[] = {
  6, // locals
  3, // parameters
  LOCAL(3), // 399_29_io
  LOCAL(4), // 399_32_fd
  LOCAL(5), // 399_35_context
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
  POS(400, 3),
  POS(401, 3),
  POS(402, 7),
  POS(402, 3),
  POS(403, 7),
  POS(403, 7),
  POS(403, 4),
  POS(404, 9),
  POS(404, 3)
};

static TAB_NUM t_func_write_failed[] = {
  7, // locals
  4, // parameters
  LOCAL(3), // 406_17_io
  LOCAL(4), // 406_20_fd
  LOCAL(5), // 406_23_err
  LOCAL(6), // 406_27_context
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
  POS(407, 3),
  POS(408, 7),
  POS(408, 3),
  POS(409, 7),
  POS(409, 7),
  POS(409, 4),
  POS(410, 9),
  POS(410, 3)
};

static TAB_NUM t_func_std__try[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 425_5_body
  // body!
  LOCAL(1), 0, IO_CALL(0),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(427, 3),
  POS(428, 3)
};

static TAB_NUM t_func_std__check[] = {
  1, // locals
  1, // parameters
  var_432_5_argument,
  // is_an_error
  var_is_an_error, 1, var_432_5_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, var_pass, TAIL_CALL,
  POS(435, 14),
  POS(434, 3)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  //  argument
  LET, 1, var_432_5_argument, TAIL_CALL,
  POS(436, 7)
};

static TAB_NUM t_func_std__file_exists[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 450_5_filename
  // stat! $info filename
  var_stat, 1, LOCAL(3), IO_CALL(1), LOCAL(4),
  // is_an_error)
  var_is_an_error, 1, LOCAL(4), 1, LOCAL(1),
  // not(info.is_an_error)
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // -> not(info.is_an_error)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(452, 3),
  POS(453, 15),
  POS(453, 6),
  POS(453, 3)
};

static TAB_NUM t_func_std__directory[] = {
  3, // locals
  -2, // parameters
  REST_PARAMETER, LOCAL(2), // 466_5_options
  MANDATORY_PARAMETER, LOCAL(3), // 467_5_pathname
  // SORT = false $do_sort
  var_std__key_value_pair, 2, var_SORT, var_false, 1, LOCAL(1),
  // get_options options
  var_get_options, 2, LOCAL(2), LOCAL(1), 1, var_470_19_do_sort,
  // $entries empty_list
  LET, 1, var_empty_list, 1, var_471_4_entries,
  // opendir! $dir pathname
  var_opendir, 1, LOCAL(3), IO_CALL(1), var_472_13_dir,
  // loop:
  var_loop, 1, lambda_4_loop, IO_TAIL_CALL,
  POS(470, 5),
  POS(469, 3),
  POS(471, 3),
  POS(472, 3),
  POS(473, 3)
};

static TAB_NUM t_lambda_4_loop[] = {
  1, // locals
  0, // parameters
  // readdir! $entry dir
  var_readdir, 1, var_472_13_dir, IO_CALL(1), var_474_15_entry,
  // is_an_error:
  var_is_an_error, 1, var_474_15_entry, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_entry_is_an_error, lambda_37, IO_TAIL_CALL,
  POS(474, 5),
  POS(476, 13),
  POS(475, 5)
};

static TAB_NUM t_lambda_entry_is_an_error[] = {
  0, // locals
  0, // parameters
  // closedir! dir
  var_closedir, 1, var_472_13_dir, IO_CALL(0),
  // if
  var_if, 3, var_470_19_do_sort, lambda_do_sort, lambda_36, TAIL_CALL,
  POS(477, 9),
  POS(478, 9)
};

static TAB_NUM t_lambda_do_sort[] = {
  0, // locals
  0, // parameters
  // sort entries: (left right) -> name_of(left) < name_of(right)
  var_sort, 2, var_471_4_entries, lambda_35, TAIL_CALL,
  POS(480, 13)
};

static TAB_NUM t_lambda_35[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 480_28_left
  LOCAL(5), // 480_33_right
  // name_of(left) < name_of(right)
  var_name_of, 1, LOCAL(4), 1, LOCAL(1),
  // name_of(right)
  var_name_of, 1, LOCAL(5), 1, LOCAL(2),
  // name_of(left) < name_of(right)
  var_std__less, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // -> name_of(left) < name_of(right)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(480, 43),
  POS(480, 59),
  POS(480, 43),
  POS(480, 40)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  entries
  LET, 1, var_471_4_entries, TAIL_CALL,
  POS(481, 13)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  // push &entries entry
  var_push, 2, var_471_4_entries, var_474_15_entry, 1, var_471_4_entries,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(483, 9),
  POS(484, 9)
};

static TAB_NUM t_func_std_types__stat___is_a_directory[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 486_35_self
  // mode_of(self)(1) == 'd'
  var_mode_of, 1, LOCAL(4), 1, LOCAL(1),
  // mode_of(self)(1) == 'd'
  LOCAL(1), 1, num_1, 1, LOCAL(2),
  // mode_of(self)(1) == 'd'
  var_std__equal, 2, LOCAL(2), chr_100, 1, LOCAL(3),
  // -> mode_of(self)(1) == 'd'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(487, 6),
  POS(487, 6),
  POS(487, 6),
  POS(487, 3)
};

static TAB_NUM t_func_std_types__object___call[] = {
  6, // locals
  2, // parameters
  LOCAL(2), // 493_5_cmd
  LOCAL(3), // 494_5_args
  // $rc result_count()
  var_result_count, 0, 1, LOCAL(4),
  // rc >= 1)
  var_std__less, 2, LOCAL(4), num_1, 1, LOCAL(1),
  // $do_return_error_code (rc >= 1)
  var_std__not, 1, LOCAL(1), 1, var_497_4_do_return_error_code,
  // rc >= 2)
  var_std__less, 2, LOCAL(4), num_2, 1, LOCAL(1),
  // $do_collect_output (rc >= 2)
  var_std__not, 1, LOCAL(1), 1, var_498_4_do_collect_output,
  // $do_collect_error_output (rc == 3)
  var_std__equal, 2, LOCAL(4), num_3, 1, var_499_4_do_collect_error_output,
  // map &args to_string
  var_map, 2, LOCAL(3), var_to_string, 1, LOCAL(3),
  // $env_vars empty_list
  LET, 1, var_empty_list, 1, var_501_4_env_vars,
  // for_each environment !env_vars
  var_for_each, 3, var_environment, lambda_38, lambda_39, 1, var_501_4_env_vars,
  // create_process! $pid $in_fd $out_fd $err_fd cmd args env_vars
  var_create_process, 3, LOCAL(2), LOCAL(3), var_501_4_env_vars, IO_CALL(4), LOCAL(5), LOCAL(6), var_507_32_out_fd, var_507_40_err_fd,
  // close! in_fd
  var_close, 1, LOCAL(6), IO_CALL(0),
  // $io std_types::io
  LET, 1, var_std_types__io, 1, var_509_4_io,
  // join_process &io pid
  var_join_process, 2, var_509_4_io, LOCAL(5), 1, var_509_4_io,
  // start_reading_from &io out_fd
  var_start_reading_from, 2, var_509_4_io, var_507_32_out_fd, 1, var_509_4_io,
  // start_reading_from &io err_fd
  var_start_reading_from, 2, var_509_4_io, var_507_40_err_fd, 1, var_509_4_io,
  // $out ""
  LET, 1, string_1, 1, var_514_4_out,
  // $err ""
  LET, 1, string_1, 1, var_515_4_err,
  // loop:
  var_loop, 1, lambda_5_loop, IO_TAIL_CALL,
  POS(496, 3),
  POS(497, 26),
  POS(497, 3),
  POS(498, 23),
  POS(498, 3),
  POS(499, 3),
  POS(500, 3),
  POS(501, 3),
  POS(502, 3),
  POS(507, 3),
  POS(508, 3),
  POS(509, 3),
  POS(510, 3),
  POS(511, 3),
  POS(512, 3),
  POS(514, 3),
  POS(515, 3),
  POS(516, 3)
};

static TAB_NUM t_lambda_38[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 503_8_key
  LOCAL(3), // 503_12_value
  // "@(key)=@(value)"
  var_std__string, 3, LOCAL(2), string_2, LOCAL(3), 1, LOCAL(1),
  // push &env_vars "@(key)=@(value)"
  var_push, 2, var_501_4_env_vars, LOCAL(1), 1, var_501_4_env_vars,
  // next
  var_next, 0, TAIL_CALL,
  POS(504, 22),
  POS(504, 7),
  POS(505, 7)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  //  env_vars
  LET, 1, var_501_4_env_vars, TAIL_CALL,
  POS(506, 7)
};

static TAB_NUM t_lambda_5_loop[] = {
  1, // locals
  0, // parameters
  // get_events! &io $events
  var_get_events, 1, var_509_4_io, IO_CALL(2), var_509_4_io, LOCAL(1),
  // for_each events
  var_for_each, 3, LOCAL(1), lambda_40, var_next, IO_TAIL_CALL,
  POS(517, 5),
  POS(518, 5)
};

static TAB_NUM t_lambda_40[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 519_10_event
  // event $type $fd $data
  LOCAL(1), 0, 3, LOCAL(2), var_520_22_fd, var_520_26_data,
  // case type
  var_case, 6, LOCAL(2), var_READ, lambda_READ, var_PROCESS_JOINED, lambda_PROCESS_JOINED, lambda_50, IO_TAIL_CALL,
  POS(520, 9),
  POS(521, 9)
};

static TAB_NUM t_lambda_READ[] = {
  1, // locals
  0, // parameters
  // data == ""
  var_std__equal, 2, var_520_26_data, string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_41, IO_TAIL_CALL,
  POS(524, 15),
  POS(523, 13)
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  // case fd
  var_case, 6, var_520_22_fd, var_507_32_out_fd, lambda_out_fd, var_507_40_err_fd, lambda_err_fd, lambda_44, IO_TAIL_CALL,
  POS(527, 17)
};

static TAB_NUM t_lambda_out_fd[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_498_4_do_collect_output, lambda_do_collect_output, lambda_42, IO_TAIL_CALL,
  POS(529, 21)
};

static TAB_NUM t_lambda_do_collect_output[] = {
  0, // locals
  0, // parameters
  // append &out data
  var_append, 2, var_514_4_out, var_520_26_data, 1, var_514_4_out,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(531, 25),
  POS(532, 25)
};

static TAB_NUM t_lambda_42[] = {
  0, // locals
  0, // parameters
  // write_to! STDOUT_FILENO data
  var_write_to, 2, var_STDOUT_FILENO, var_520_26_data, IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(534, 25),
  POS(535, 25)
};

static TAB_NUM t_lambda_err_fd[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_499_4_do_collect_error_output, lambda_do_collect_error_output, lambda_43, IO_TAIL_CALL,
  POS(537, 21)
};

static TAB_NUM t_lambda_do_collect_error_output[] = {
  0, // locals
  0, // parameters
  // append &err data
  var_append, 2, var_515_4_err, var_520_26_data, 1, var_515_4_err,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(539, 25),
  POS(540, 25)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  // write_to! STDERR_FILENO data
  var_write_to, 2, var_STDERR_FILENO, var_520_26_data, IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(542, 25),
  POS(543, 25)
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(545, 21)
};

static TAB_NUM t_lambda_PROCESS_JOINED[] = {
  0, // locals
  0, // parameters
  // $ret data
  LET, 1, var_520_26_data, 1, var_547_14_ret,
  // if
  var_if, 3, var_497_4_do_return_error_code, lambda_do_return_error_code, lambda_48, TAIL_CALL,
  POS(547, 13),
  POS(548, 13)
};

static TAB_NUM t_lambda_do_return_error_code[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_498_4_do_collect_output, lambda_2_do_collect_output, lambda_47, TAIL_CALL,
  POS(550, 17)
};

static TAB_NUM t_lambda_2_do_collect_output[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_499_4_do_collect_error_output, lambda_45, lambda_46, TAIL_CALL,
  POS(552, 21)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  //  ret out err
  LET, 3, var_547_14_ret, var_514_4_out, var_515_4_err, TAIL_CALL,
  POS(554, 25)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  //  ret out
  LET, 2, var_547_14_ret, var_514_4_out, TAIL_CALL,
  POS(555, 25)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  //  ret
  LET, 1, var_547_14_ret, TAIL_CALL,
  POS(556, 21)
};

static TAB_NUM t_lambda_48[] = {
  1, // locals
  0, // parameters
  // ret == 0
  var_std__equal, 2, var_547_14_ret, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_pass, lambda_49, TAIL_CALL,
  POS(559, 19),
  POS(558, 17)
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  // error "CALLING PROCESS FAILED"
  var_error, 1, str_CALLING_PROCESS, TAIL_CALL,
  POS(562, 21)
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(564, 13)
};

static TAB_NUM t_func_std_types__io___call[] = {
  5, // locals
  -5, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 569_5_io
  MANDATORY_PARAMETER, LOCAL(2), // 570_5_id
  MANDATORY_PARAMETER, LOCAL(3), // 571_5_cmd
  MANDATORY_PARAMETER, LOCAL(4), // 572_5_args
  uni_NONE, LOCAL(5), // 573_5_context
  // run io start_process id cmd args context
  var_run, 6, LOCAL(1), func_start_process, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), TAIL_CALL,
  POS(575, 3)
};

static TAB_NUM t_func_start_process[] = {
  12, // locals
  5, // parameters
  LOCAL(4), // 577_18_io
  LOCAL(5), // 577_21_id
  LOCAL(6), // 577_24_cmd
  LOCAL(7), // 577_28_args
  LOCAL(8), // 577_33_context
  // map &args to_string
  var_map, 2, LOCAL(7), var_to_string, 1, LOCAL(7),
  // $env_vars empty_list
  LET, 1, var_empty_list, 1, var_579_4_env_vars,
  // for_each environment !env_vars
  var_for_each, 3, var_environment, lambda_51, lambda_52, 1, var_579_4_env_vars,
  // create_process! $pid $in_fd $out_fd $err_fd cmd args env_vars
  var_create_process, 3, LOCAL(6), LOCAL(7), var_579_4_env_vars, IO_CALL(4), LOCAL(9), LOCAL(10), LOCAL(11), LOCAL(12),
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
  POS(578, 3),
  POS(579, 3),
  POS(580, 3),
  POS(585, 3),
  POS(586, 3),
  POS(587, 3),
  POS(588, 3),
  POS(589, 3),
  POS(590, 7),
  POS(590, 7),
  POS(590, 4),
  POS(591, 7),
  POS(591, 7),
  POS(591, 4),
  POS(592, 7),
  POS(592, 7),
  POS(592, 4),
  POS(593, 3),
  POS(593, 7),
  POS(593, 7),
  POS(593, 4),
  POS(595, 5),
  POS(596, 5),
  POS(597, 5),
  POS(594, 3),
  POS(599, 5),
  POS(600, 5),
  POS(601, 5),
  POS(598, 3),
  POS(603, 22),
  POS(603, 5),
  POS(602, 3),
  POS(604, 3)
};

static TAB_NUM t_lambda_51[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 581_8_key
  LOCAL(3), // 581_12_value
  // "@(key)=@(value)"
  var_std__string, 3, LOCAL(2), string_2, LOCAL(3), 1, LOCAL(1),
  // push &env_vars "@(key)=@(value)"
  var_push, 2, var_579_4_env_vars, LOCAL(1), 1, var_579_4_env_vars,
  // next
  var_next, 0, TAIL_CALL,
  POS(582, 22),
  POS(582, 7),
  POS(583, 7)
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  //  env_vars
  LET, 1, var_579_4_env_vars, TAIL_CALL,
  POS(584, 7)
};

static TAB_NUM t_func_read_process_output[] = {
  5, // locals
  3, // parameters
  LOCAL(3), // 606_24_io
  LOCAL(4), // 606_27_fd
  LOCAL(5), // 606_30_data
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
  POS(607, 14),
  POS(607, 14),
  POS(607, 3),
  POS(607, 14),
  POS(607, 11),
  POS(608, 3)
};

static TAB_NUM t_func_read_from_process_failed[] = {
  3, // locals
  3, // parameters
  LOCAL(2), // 610_29_io
  LOCAL(3), // 610_32_fd
  LOCAL(1),
  // deregister_all_handlers &io fd
  var_deregister_all_handlers, 2, LOCAL(2), LOCAL(3), 1, LOCAL(2),
  // -> io undefined
  LET, 2, LOCAL(2), var_undefined, TAIL_CALL,
  POS(611, 3),
  POS(612, 3)
};

static TAB_NUM t_func_ignore_close[] = {
  2, // locals
  3, // parameters
  LOCAL(2), // 614_17_io
  LOCAL(1),
  LOCAL(1),
  // -> io undefined
  LET, 2, LOCAL(2), var_undefined, TAIL_CALL,
  POS(615, 3)
};

static TAB_NUM t_func_process_finished[] = {
  5, // locals
  4, // parameters
  var_617_21_io,
  LOCAL(3), // 617_24_pid
  var_617_28_status,
  var_617_35_context,
  // "process finished with status @(status)"
  var_std__string, 2, str_process_finished, var_617_28_status, 1, LOCAL(1),
  // log &io 4 "process finished with status @(status)"
  var_log, 3, var_617_21_io, num_4, LOCAL(1), 1, var_617_21_io,
  // deregister_all_handlers &io pid
  var_deregister_all_handlers, 2, var_617_21_io, LOCAL(3), 1, var_617_21_io,
  // id_of(io)(pid)
  var_id_of, 1, var_617_21_io, 1, LOCAL(1),
  // $id id_of(io)(pid)
  LOCAL(1), 1, LOCAL(3), 1, var_620_4_id,
  // id_of(pid) undefined
  var_id_of, 1, var_617_21_io, 1, LOCAL(2),
  // id_of(pid) undefined
  LOCAL(2), 2, LOCAL(3), var_undefined, 1, LOCAL(2),
  // io.id_of(pid) undefined
  LET, -1, var_617_21_io, var_id_of, LOCAL(2), var_617_21_io,
  // info_of(io)(pid) $out_fd $err_fd
  var_info_of, 1, var_617_21_io, 1, LOCAL(1),
  // info_of(io)(pid) $out_fd $err_fd
  LOCAL(1), 1, LOCAL(3), 1, LOCAL(2),
  // info_of(io)(pid) $out_fd $err_fd
  LOCAL(2), 0, 2, LOCAL(4), LOCAL(5),
  // info_of(io)(out_fd)
  var_info_of, 1, var_617_21_io, 1, LOCAL(1),
  // $out info_of(io)(out_fd)
  LOCAL(1), 1, LOCAL(4), 1, var_623_4_out,
  // info_of(io)(err_fd)
  var_info_of, 1, var_617_21_io, 1, LOCAL(1),
  // $err info_of(io)(err_fd)
  LOCAL(1), 1, LOCAL(5), 1, var_624_4_err,
  // info_of(pid) undefined
  var_info_of, 1, var_617_21_io, 1, LOCAL(2),
  // info_of(pid) undefined
  LOCAL(2), 2, LOCAL(3), var_undefined, 1, LOCAL(2),
  // io.info_of(pid) undefined
  LET, -1, var_617_21_io, var_info_of, LOCAL(2), var_617_21_io,
  // info_of(out_fd) undefined
  var_info_of, 1, var_617_21_io, 1, LOCAL(2),
  // info_of(out_fd) undefined
  LOCAL(2), 2, LOCAL(4), var_undefined, 1, LOCAL(2),
  // io.info_of(out_fd) undefined
  LET, -1, var_617_21_io, var_info_of, LOCAL(2), var_617_21_io,
  // info_of(err_fd) undefined
  var_info_of, 1, var_617_21_io, 1, LOCAL(2),
  // info_of(err_fd) undefined
  LOCAL(2), 2, LOCAL(5), var_undefined, 1, LOCAL(2),
  // io.info_of(err_fd) undefined
  LET, -1, var_617_21_io, var_info_of, LOCAL(2), var_617_21_io,
  // status == 0
  var_std__equal, 2, var_617_28_status, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_53, lambda_54, TAIL_CALL,
  POS(618, 13),
  POS(618, 3),
  POS(619, 3),
  POS(620, 7),
  POS(620, 3),
  POS(621, 7),
  POS(621, 7),
  POS(621, 4),
  POS(622, 3),
  POS(622, 3),
  POS(622, 3),
  POS(623, 8),
  POS(623, 3),
  POS(624, 8),
  POS(624, 3),
  POS(625, 7),
  POS(625, 7),
  POS(625, 4),
  POS(626, 7),
  POS(626, 7),
  POS(626, 4),
  POS(627, 7),
  POS(627, 7),
  POS(627, 4),
  POS(629, 5),
  POS(628, 3)
};

static TAB_NUM t_lambda_53[] = {
  2, // locals
  0, // parameters
  // tuple(out err) context)
  var_tuple, 2, var_623_4_out, var_624_4_err, 1, LOCAL(1),
  // tuple(JOB_COMPLETED id tuple(out err) context)
  var_tuple, 4, var_JOB_COMPLETED, var_620_4_id, LOCAL(1), var_617_35_context, 1, LOCAL(2),
  //  io tuple(JOB_COMPLETED id tuple(out err) context)
  LET, 2, var_617_21_io, LOCAL(2), TAIL_CALL,
  POS(630, 34),
  POS(630, 11),
  POS(630, 7)
};

static TAB_NUM t_lambda_54[] = {
  2, // locals
  0, // parameters
  // tuple(status out err) context)
  var_tuple, 3, var_617_28_status, var_623_4_out, var_624_4_err, 1, LOCAL(1),
  // tuple(JOB_FAILED id tuple(status out err) context)
  var_tuple, 4, var_JOB_FAILED, var_620_4_id, LOCAL(1), var_617_35_context, 1, LOCAL(2),
  //  io tuple(JOB_FAILED id tuple(status out err) context)
  LET, 2, var_617_21_io, LOCAL(2), TAIL_CALL,
  POS(631, 31),
  POS(631, 11),
  POS(631, 7)
};

static TAB_NUM t_func_std__terminate[] = {
  0, // locals
  0, // parameters
  // exit! EXIT_SUCCESS
  var_exit, 1, var_EXIT_SUCCESS, IO_TAIL_CALL,
  POS(634, 3)
};

static TAB_NUM t_func_std_types__file_descriptor___serialize[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 644_5_self
  var_undefined, var_645_5_indent,
  // to_integer)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(1),
  // $str "
  var_std__string, 3, str_file_descriptor_2, LOCAL(1), string_3, 1, var_647_4_str,
  // is_defined
  var_is_defined, 1, var_645_5_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_55, lambda_56, TAIL_CALL,
  POS(648, 28),
  POS(647, 3),
  POS(650, 12),
  POS(649, 3)
};

static TAB_NUM t_lambda_55[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_645_5_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_647_4_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(651, 15),
  POS(651, 8),
  POS(651, 7)
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_647_4_str, TAIL_CALL,
  POS(652, 7)
};

static TAB_NUM t_func_std_types__file_descriptor___deserializer_of[] = {
  3, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(3), // 657_5_argument
  // integer(argument))
  var_integer, 1, LOCAL(3), 1, LOCAL(1),
  // file_descriptor(integer(argument))
  var_file_descriptor, 1, LOCAL(1), 1, LOCAL(2),
  // -> file_descriptor(integer(argument))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(659, 22),
  POS(659, 6),
  POS(659, 3)
};

static TAB_NUM t_func_std_types__process_id___serialize[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 671_5_self
  var_undefined, var_672_5_indent,
  // to_integer)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(1),
  // $str "
  var_std__string, 3, str_process_id_2, LOCAL(1), string_3, 1, var_674_4_str,
  // is_defined
  var_is_defined, 1, var_672_5_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_57, lambda_58, TAIL_CALL,
  POS(675, 23),
  POS(674, 3),
  POS(677, 12),
  POS(676, 3)
};

static TAB_NUM t_lambda_57[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_672_5_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_674_4_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(678, 15),
  POS(678, 8),
  POS(678, 7)
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_674_4_str, TAIL_CALL,
  POS(679, 7)
};

static TAB_NUM t_func_std_types__process_id___deserializer_of[] = {
  3, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(3), // 684_5_argument
  // integer(argument))
  var_integer, 1, LOCAL(3), 1, LOCAL(1),
  // process_id(integer(argument))
  var_process_id, 1, LOCAL(1), 1, LOCAL(2),
  // -> process_id(integer(argument))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(686, 17),
  POS(686, 6),
  POS(686, 3)
};

static TAB_NUM t_func_extern_call[] = {
  5, // locals
  -2, // parameters
  MYSELF_PARAMETER, LOCAL(4), // 694_5_myself
  REST_PARAMETER, LOCAL(5), // 695_5_arguments
  // command_of(myself) map(flatten(arguments) to_string)
  var_command_of, 1, LOCAL(4), 1, LOCAL(1),
  // flatten(arguments) to_string)
  var_flatten, 1, LOCAL(5), 1, LOCAL(2),
  // map(flatten(arguments) to_string)
  var_map, 2, LOCAL(2), var_to_string, 1, LOCAL(3),
  // call! command_of(myself) map(flatten(arguments) to_string)
  var_call, 2, LOCAL(1), LOCAL(3), IO_TAIL_CALL,
  POS(697, 9),
  POS(697, 32),
  POS(697, 28),
  POS(697, 3)
};

static TAB_NUM t_func_std__pipe[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, var_703_5_args,
  // $i 1
  LET, 1, num_1, 1, var_705_4_i,
  // $n length_of(args)
  var_length_of, 1, var_703_5_args, 1, var_706_4_n,
  // $in_fd undefined
  LET, 1, var_undefined, 1, var_707_4_in_fd,
  // $feed undefined
  LET, 1, var_undefined, 1, var_708_4_feed,
  // $commands empty_list
  LET, 1, var_empty_list, 1, var_709_4_commands,
  // $head undefined
  LET, 1, var_undefined, 1, var_710_4_head,
  // $arguments undefined
  LET, 1, var_undefined, 1, var_711_4_arguments,
  // $first_arg args(1)
  var_703_5_args, 1, num_1, 1, var_712_4_first_arg,
  // is_a_string:
  var_is_a_string, 1, var_712_4_first_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_first_arg_is_a_string, lambda_59, IO_TAIL_CALL,
  POS(705, 3),
  POS(706, 3),
  POS(707, 3),
  POS(708, 3),
  POS(709, 3),
  POS(710, 3),
  POS(711, 3),
  POS(712, 3),
  POS(714, 15),
  POS(713, 3)
};

static TAB_NUM t_lambda_first_arg_is_a_string[] = {
  0, // locals
  0, // parameters
  // !feed first_arg
  LET, 1, var_712_4_first_arg, 1, var_708_4_feed,
  // !i 2
  LET, 1, num_2, 1, var_705_4_i,
  // build_commands!
  func_build_commands, 0, IO_TAIL_CALL,
  POS(715, 7),
  POS(716, 7),
  POS(717, 7)
};

static TAB_NUM t_lambda_59[] = {
  1, // locals
  0, // parameters
  // is_a_file_descriptor:
  var_is_a_file_descriptor, 1, var_712_4_first_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_first_arg_is_a_file_descriptor, func_build_commands, IO_TAIL_CALL,
  POS(720, 19),
  POS(719, 7)
};

static TAB_NUM t_lambda_first_arg_is_a_file_descriptor[] = {
  0, // locals
  0, // parameters
  // !in_fd first_arg
  LET, 1, var_712_4_first_arg, 1, var_707_4_in_fd,
  // !i 2
  LET, 1, num_2, 1, var_705_4_i,
  // build_commands!
  func_build_commands, 0, IO_TAIL_CALL,
  POS(721, 11),
  POS(722, 11),
  POS(723, 11)
};

static TAB_NUM t_func_build_commands[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_60, lambda_64, IO_TAIL_CALL,
  POS(727, 5)
};

static TAB_NUM t_lambda_60[] = {
  1, // locals
  0, // parameters
  // n break
  var_std__less, 2, var_706_4_n, var_705_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_61, IO_TAIL_CALL,
  POS(730, 15),
  POS(729, 9)
};

static TAB_NUM t_lambda_61[] = {
  1, // locals
  0, // parameters
  // $arg args(i)
  var_703_5_args, 1, var_705_4_i, 1, var_732_14_arg,
  // is_a_function:
  var_is_a_function, 1, var_732_14_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_arg_is_a_function, lambda_63, IO_TAIL_CALL,
  POS(732, 13),
  POS(734, 19),
  POS(733, 13)
};

static TAB_NUM t_lambda_arg_is_a_function[] = {
  1, // locals
  0, // parameters
  // is_defined &commands:
  var_is_defined, 1, var_710_4_head, 1, LOCAL(1),
  // update_if head.is_defined &commands:
  var_update_if, 3, LOCAL(1), var_709_4_commands, lambda_62, 1, var_709_4_commands,
  // !head command_of(arg)
  var_command_of, 1, var_732_14_arg, 1, var_710_4_head,
  // !arguments empty_list
  LET, 1, var_empty_list, 1, var_711_4_arguments,
  // inc &i
  var_inc, 1, var_705_4_i, 1, var_705_4_i,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(735, 32),
  POS(735, 17),
  POS(737, 17),
  POS(738, 17),
  POS(739, 17),
  POS(740, 17)
};

static TAB_NUM t_lambda_62[] = {
  3, // locals
  0, // parameters
  // flatten(arguments) to_string))
  var_flatten, 1, var_711_4_arguments, 1, LOCAL(1),
  // map(flatten(arguments) to_string))
  var_map, 2, LOCAL(1), var_to_string, 1, LOCAL(2),
  // tuple(head map(flatten(arguments) to_string))
  var_tuple, 2, var_710_4_head, LOCAL(2), 1, LOCAL(3),
  // push commands tuple(head map(flatten(arguments) to_string))
  var_push, 2, var_709_4_commands, LOCAL(3), TAIL_CALL,
  POS(736, 48),
  POS(736, 44),
  POS(736, 33),
  POS(736, 19)
};

static TAB_NUM t_lambda_63[] = {
  0, // locals
  0, // parameters
  // push &arguments arg
  var_push, 2, var_711_4_arguments, var_732_14_arg, 1, var_711_4_arguments,
  // inc &i
  var_inc, 1, var_705_4_i, 1, var_705_4_i,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(742, 17),
  POS(743, 17),
  POS(744, 17)
};

static TAB_NUM t_lambda_64[] = {
  1, // locals
  0, // parameters
  // is_defined &commands:
  var_is_defined, 1, var_710_4_head, 1, LOCAL(1),
  // update_if head.is_defined &commands:
  var_update_if, 3, LOCAL(1), var_709_4_commands, lambda_65, 1, var_709_4_commands,
  // run_pipe! in_fd feed commands
  func_run_pipe, 3, var_707_4_in_fd, var_708_4_feed, var_709_4_commands, IO_TAIL_CALL,
  POS(746, 24),
  POS(746, 9),
  POS(748, 9)
};

static TAB_NUM t_lambda_65[] = {
  3, // locals
  0, // parameters
  // flatten(arguments) to_string))
  var_flatten, 1, var_711_4_arguments, 1, LOCAL(1),
  // map(flatten(arguments) to_string))
  var_map, 2, LOCAL(1), var_to_string, 1, LOCAL(2),
  // tuple(head map(flatten(arguments) to_string))
  var_tuple, 2, var_710_4_head, LOCAL(2), 1, LOCAL(3),
  // push commands tuple(head map(flatten(arguments) to_string))
  var_push, 2, var_709_4_commands, LOCAL(3), TAIL_CALL,
  POS(747, 40),
  POS(747, 36),
  POS(747, 25),
  POS(747, 11)
};

static TAB_NUM t_func_std__pipe_commands[] = {
  1, // locals
  -2, // parameters
  var_undefined, var_752_5_feed_or_fd,
  MANDATORY_PARAMETER, var_753_5_commands,
  // is_defined:
  var_is_defined, 1, var_752_5_feed_or_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_feed_or_fd_is_defined, lambda_67, IO_TAIL_CALL,
  POS(756, 16),
  POS(755, 3)
};

static TAB_NUM t_lambda_feed_or_fd_is_defined[] = {
  1, // locals
  0, // parameters
  // is_a_file_descriptor:
  var_is_a_file_descriptor, 1, var_752_5_feed_or_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_feed_or_fd_is_a_file_descriptor, lambda_66, IO_TAIL_CALL,
  POS(758, 20),
  POS(757, 7)
};

static TAB_NUM t_lambda_feed_or_fd_is_a_file_descriptor[] = {
  0, // locals
  0, // parameters
  // run_pipe! feed_or_fd undefined commands
  func_run_pipe, 3, var_752_5_feed_or_fd, var_undefined, var_753_5_commands, IO_TAIL_CALL,
  POS(759, 11)
};

static TAB_NUM t_lambda_66[] = {
  0, // locals
  0, // parameters
  // run_pipe! undefined feed_or_fd commands
  func_run_pipe, 3, var_undefined, var_752_5_feed_or_fd, var_753_5_commands, IO_TAIL_CALL,
  POS(761, 11)
};

static TAB_NUM t_lambda_67[] = {
  0, // locals
  0, // parameters
  // run_pipe! undefined undefined commands
  func_run_pipe, 3, var_undefined, var_undefined, var_753_5_commands, IO_TAIL_CALL,
  POS(763, 7)
};

static TAB_NUM t_func_run_pipe[] = {
  1, // locals
  3, // parameters
  var_767_5_in_fd,
  var_768_5_feed,
  var_769_5_commands,
  // $pids empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_771_4_pids,
  // $err_fds empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_772_4_err_fds,
  // $out_fd in_fd
  LET, 1, var_767_5_in_fd, 1, var_773_4_out_fd,
  // $env_vars undefined
  LET, 1, var_undefined, 1, var_774_4_env_vars,
  // is_defined &env_vars:
  var_is_defined, 1, var_environment, 1, LOCAL(1),
  // update_if environment.is_defined &env_vars:
  var_update_if, 3, LOCAL(1), var_774_4_env_vars, lambda_68, 1, var_774_4_env_vars,
  // for_each commands
  var_for_each, 3, var_769_5_commands, lambda_71, lambda_75, IO_TAIL_CALL,
  POS(771, 3),
  POS(772, 3),
  POS(773, 3),
  POS(774, 3),
  POS(775, 25),
  POS(775, 3),
  POS(782, 3)
};

static TAB_NUM t_lambda_68[] = {
  0, // locals
  0, // parameters
  // !env_vars empty_list
  LET, 1, var_empty_list, 1, var_774_4_env_vars,
  // for_each environment
  var_for_each, 3, var_environment, lambda_69, lambda_70, TAIL_CALL,
  POS(776, 5),
  POS(777, 5)
};

static TAB_NUM t_lambda_69[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 778_10_key
  LOCAL(3), // 778_14_value
  // "@(key)=@(value)"
  var_std__string, 3, LOCAL(2), string_2, LOCAL(3), 1, LOCAL(1),
  // push &env_vars "@(key)=@(value)"
  var_push, 2, var_774_4_env_vars, LOCAL(1), 1, var_774_4_env_vars,
  // next
  var_next, 0, TAIL_CALL,
  POS(779, 24),
  POS(779, 9),
  POS(780, 9)
};

static TAB_NUM t_lambda_70[] = {
  0, // locals
  0, // parameters
  //  env_vars
  LET, 1, var_774_4_env_vars, TAIL_CALL,
  POS(781, 9)
};

static TAB_NUM t_lambda_71[] = {
  3, // locals
  2, // parameters
  var_783_8_idx,
  LOCAL(3), // 783_12_command
  // command $head $arguments
  LOCAL(3), 0, 2, var_784_16_head, var_784_22_arguments,
  // map &arguments to_utf8
  var_map, 2, var_784_22_arguments, var_to_utf8, 1, var_784_22_arguments,
  // $pid undefined
  LET, 1, var_undefined, 1, var_786_8_pid,
  // $err_fd undefined
  LET, 1, var_undefined, 1, var_787_8_err_fd,
  // idx == 1 && in_fd.is_undefined:
  var_std__equal, 2, var_783_8_idx, num_1, 1, LOCAL(1),
  // idx == 1 && in_fd.is_undefined:
  var_std__and, 2, LOCAL(1), lambda_72, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_73, lambda_74, IO_TAIL_CALL,
  POS(784, 7),
  POS(785, 7),
  POS(786, 7),
  POS(787, 7),
  POS(789, 9),
  POS(789, 9),
  POS(788, 7)
};

static TAB_NUM t_lambda_72[] = {
  1, // locals
  0, // parameters
  // is_undefined:
  var_is_undefined, 1, var_767_5_in_fd, 1, LOCAL(1),
  // in_fd.is_undefined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(789, 27),
  POS(789, 21)
};

static TAB_NUM t_lambda_73[] = {
  0, // locals
  0, // parameters
  // create_process! !pid !in_fd !out_fd !err_fd head arguments env_vars
  var_create_process, 3, var_784_16_head, var_784_22_arguments, var_774_4_env_vars, IO_CALL(4), var_786_8_pid, var_767_5_in_fd, var_773_4_out_fd, var_787_8_err_fd,
  // store_pid_and_err_fd!
  func_store_pid_and_err_fd, 0, IO_TAIL_CALL,
  POS(790, 11),
  POS(791, 11)
};

static TAB_NUM t_lambda_74[] = {
  0, // locals
  0, // parameters
  // create_process! !pid !out_fd !err_fd head arguments env_vars out_fd
  var_create_process, 4, var_784_16_head, var_784_22_arguments, var_774_4_env_vars, var_773_4_out_fd, IO_CALL(3), var_786_8_pid, var_773_4_out_fd, var_787_8_err_fd,
  // store_pid_and_err_fd!
  func_store_pid_and_err_fd, 0, IO_TAIL_CALL,
  POS(793, 11),
  POS(794, 11)
};

static TAB_NUM t_func_store_pid_and_err_fd[] = {
  0, // locals
  0, // parameters
  // pids(pid) idx
  var_771_4_pids, 2, var_786_8_pid, var_783_8_idx, 1, var_771_4_pids,
  // err_fds(err_fd) idx
  var_772_4_err_fds, 2, var_787_8_err_fd, var_783_8_idx, 1, var_772_4_err_fds,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(797, 10),
  POS(798, 10),
  POS(799, 9)
};

static TAB_NUM t_lambda_75[] = {
  2, // locals
  0, // parameters
  // list(undefined) length_of(commands))
  var_list, 1, var_undefined, 1, LOCAL(1),
  // length_of(commands))
  var_length_of, 1, var_769_5_commands, 1, LOCAL(2),
  // $ret dup(list(undefined) length_of(commands))
  var_dup, 2, LOCAL(1), LOCAL(2), 1, var_801_8_ret,
  // $out ""
  LET, 1, string_1, 1, var_802_8_out,
  // length_of(commands))
  var_length_of, 1, var_769_5_commands, 1, LOCAL(2),
  // $err dup(list("") length_of(commands))
  var_dup, 2, list_803_16, LOCAL(2), 1, var_803_8_err,
  // is_defined
  var_is_defined, 1, var_768_5_feed, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_manage_io, lambda_76, IO_TAIL_CALL,
  POS(801, 16),
  POS(801, 32),
  POS(801, 7),
  POS(802, 7),
  POS(803, 25),
  POS(803, 7),
  POS(805, 14),
  POS(804, 7)
};

static TAB_NUM t_lambda_76[] = {
  0, // locals
  0, // parameters
  // close! in_fd
  var_close, 1, var_767_5_in_fd, IO_CALL(0),
  // !in_fd undefined
  LET, 1, var_undefined, 1, var_767_5_in_fd,
  // manage_io!
  func_manage_io, 0, IO_TAIL_CALL,
  POS(808, 11),
  POS(809, 11),
  POS(810, 11)
};

static TAB_NUM t_func_manage_io[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_6_loop, IO_TAIL_CALL,
  POS(813, 9)
};

static TAB_NUM t_lambda_6_loop[] = {
  3, // locals
  0, // parameters
  // $read_descriptor_list keys_of(err_fds)
  var_keys_of, 1, var_772_4_err_fds, 1, var_814_12_read_descriptor_list,
  // is_defined
  var_is_defined, 1, var_767_5_in_fd, 1, LOCAL(1),
  // $write_descriptor_list
  var_if, 3, LOCAL(1), lambda_77, lambda_78, 1, LOCAL(2),
  // is_defined &read_descriptor_list:
  var_is_defined, 1, var_773_4_out_fd, 1, LOCAL(1),
  // update_if out_fd.is_defined &read_descriptor_list:
  var_update_if, 3, LOCAL(1), var_814_12_read_descriptor_list, lambda_79, 1, var_814_12_read_descriptor_list,
  // pselect!
  var_pselect, 3, var_814_12_read_descriptor_list, LOCAL(2), var_empty_list, IO_CALL(4), LOCAL(3), var_824_14_read_descriptors, var_825_14_write_descriptors, LOCAL(1),
  // for_each signals
  var_for_each, 3, LOCAL(3), lambda_80, lambda_83, IO_TAIL_CALL,
  POS(814, 11),
  POS(817, 21),
  POS(815, 11),
  POS(820, 28),
  POS(820, 11),
  POS(822, 11),
  POS(827, 11)
};

static TAB_NUM t_lambda_77[] = {
  1, // locals
  0, // parameters
  // list(in_fd)
  var_list, 1, var_767_5_in_fd, 1, LOCAL(1),
  //  list(in_fd)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(818, 18),
  POS(818, 17)
};

static TAB_NUM t_lambda_78[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(819, 17)
};

static TAB_NUM t_lambda_79[] = {
  0, // locals
  0, // parameters
  // push read_descriptor_list out_fd
  var_push, 2, var_814_12_read_descriptor_list, var_773_4_out_fd, TAIL_CALL,
  POS(821, 13)
};

static TAB_NUM t_lambda_80[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 828_16_signal
  // signal == SIGCHLD:
  var_std__equal, 2, LOCAL(2), var_SIGCHLD, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_81, var_next, IO_TAIL_CALL,
  POS(830, 17),
  POS(829, 15)
};

static TAB_NUM t_lambda_81[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_82, var_next, IO_TAIL_CALL,
  POS(831, 19)
};

static TAB_NUM t_lambda_82[] = {
  1, // locals
  0, // parameters
  // wait! $rpid $status
  var_wait, 0, IO_CALL(2), var_833_30_rpid, var_833_36_status,
  // is_defined:
  var_is_defined, 1, var_833_30_rpid, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_rpid_is_defined, var_break, IO_TAIL_CALL,
  POS(833, 23),
  POS(835, 30),
  POS(834, 23)
};

static TAB_NUM t_lambda_rpid_is_defined[] = {
  2, // locals
  0, // parameters
  // pids(rpid)) status
  var_771_4_pids, 1, var_833_30_rpid, 1, LOCAL(2),
  // ret(pids(rpid)) status
  var_801_8_ret, 2, LOCAL(2), var_833_36_status, 1, var_801_8_ret,
  // pids(rpid) undefined
  var_771_4_pids, 2, var_833_30_rpid, var_undefined, 1, var_771_4_pids,
  // is_empty
  var_is_empty, 1, var_771_4_pids, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), var_break, var_next, IO_TAIL_CALL,
  POS(836, 32),
  POS(836, 28),
  POS(837, 28),
  POS(839, 34),
  POS(838, 27)
};

static TAB_NUM t_lambda_83[] = {
  0, // locals
  0, // parameters
  // for_each write_descriptors
  var_for_each, 3, var_825_14_write_descriptors, lambda_84, lambda_85, IO_TAIL_CALL,
  POS(846, 15)
};

static TAB_NUM t_lambda_84[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 847_20_write_descriptor
  // write! $bytes_written write_descriptor feed
  var_write, 2, LOCAL(2), var_768_5_feed, IO_CALL(1), LOCAL(3),
  // bytes_written+1 -1
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // range &feed bytes_written+1 -1
  var_range, 3, var_768_5_feed, LOCAL(1), minus_num_1, 1, var_768_5_feed,
  // is_empty:
  var_is_empty, 1, var_768_5_feed, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_feed_is_empty, var_next, IO_TAIL_CALL,
  POS(848, 19),
  POS(849, 31),
  POS(849, 19),
  POS(851, 26),
  POS(850, 19)
};

static TAB_NUM t_lambda_feed_is_empty[] = {
  0, // locals
  0, // parameters
  // close! in_fd
  var_close, 1, var_767_5_in_fd, IO_CALL(0),
  // !in_fd undefined
  LET, 1, var_undefined, 1, var_767_5_in_fd,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(852, 23),
  POS(853, 23),
  POS(854, 23)
};

static TAB_NUM t_lambda_85[] = {
  0, // locals
  0, // parameters
  // for_each read_descriptors
  var_for_each, 3, var_824_14_read_descriptors, lambda_86, lambda_92, IO_TAIL_CALL,
  POS(857, 19)
};

static TAB_NUM t_lambda_86[] = {
  1, // locals
  1, // parameters
  var_858_24_read_descriptor,
  // read! $buf read_descriptor 0x100000
  var_read, 2, var_858_24_read_descriptor, num_0x100000, IO_CALL(1), var_859_30_buf,
  // is_empty: # closed from the other side
  var_is_empty, 1, var_859_30_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_empty, lambda_89, IO_TAIL_CALL,
  POS(859, 23),
  POS(861, 29),
  POS(860, 23)
};

static TAB_NUM t_lambda_buf_is_empty[] = {
  1, // locals
  0, // parameters
  // close! read_descriptor
  var_close, 1, var_858_24_read_descriptor, IO_CALL(0),
  // read_descriptor == out_fd:
  var_std__equal, 2, var_858_24_read_descriptor, var_773_4_out_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_87, lambda_88, IO_TAIL_CALL,
  POS(862, 27),
  POS(864, 29),
  POS(863, 27)
};

static TAB_NUM t_lambda_87[] = {
  0, // locals
  0, // parameters
  // !out_fd undefined
  LET, 1, var_undefined, 1, var_773_4_out_fd,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(865, 31),
  POS(866, 31)
};

static TAB_NUM t_lambda_88[] = {
  0, // locals
  0, // parameters
  // err_fds(read_descriptor) undefined
  var_772_4_err_fds, 2, var_858_24_read_descriptor, var_undefined, 1, var_772_4_err_fds,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(868, 32),
  POS(869, 31)
};

static TAB_NUM t_lambda_89[] = {
  1, // locals
  0, // parameters
  // read_descriptor == out_fd:
  var_std__equal, 2, var_858_24_read_descriptor, var_773_4_out_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_90, lambda_91, IO_TAIL_CALL,
  POS(872, 29),
  POS(871, 27)
};

static TAB_NUM t_lambda_90[] = {
  0, // locals
  0, // parameters
  // append &out buf
  var_append, 2, var_802_8_out, var_859_30_buf, 1, var_802_8_out,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(873, 31),
  POS(874, 31)
};

static TAB_NUM t_lambda_91[] = {
  2, // locals
  0, // parameters
  // err_fds(read_descriptor)) buf
  var_772_4_err_fds, 1, var_858_24_read_descriptor, 1, LOCAL(1),
  // err(err_fds(read_descriptor)) buf
  var_803_8_err, 1, LOCAL(1), 1, LOCAL(2),
  // append &err(err_fds(read_descriptor)) buf
  var_append, 2, LOCAL(2), var_859_30_buf, 1, LOCAL(2),
  // err(err_fds(read_descriptor)) buf
  var_803_8_err, 2, LOCAL(1), LOCAL(2), 1, var_803_8_err,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(876, 43),
  POS(876, 39),
  POS(876, 31),
  POS(876, 39),
  POS(877, 31)
};

static TAB_NUM t_lambda_92[] = {
  2, // locals
  0, // parameters
  // is_empty && out_fd.is_undefined && err_fds.is_empty
  var_is_empty, 1, var_771_4_pids, 1, LOCAL(1),
  // is_empty && out_fd.is_undefined && err_fds.is_empty
  var_std__and, 2, LOCAL(1), lambda_93, 1, LOCAL(2),
  // if!
  var_if, 3, LOCAL(2), lambda_95, var_next, IO_TAIL_CALL,
  POS(880, 30),
  POS(880, 30),
  POS(879, 23)
};

static TAB_NUM t_lambda_93[] = {
  2, // locals
  0, // parameters
  // is_undefined && err_fds.is_empty
  var_is_undefined, 1, var_773_4_out_fd, 1, LOCAL(1),
  // is_undefined && err_fds.is_empty
  var_std__and, 2, LOCAL(1), lambda_94, 1, LOCAL(2),
  // out_fd.is_undefined && err_fds.is_empty
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(880, 49),
  POS(880, 49),
  POS(880, 42)
};

static TAB_NUM t_lambda_94[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_772_4_err_fds, 1, LOCAL(1),
  // err_fds.is_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(880, 73),
  POS(880, 65)
};

static TAB_NUM t_lambda_95[] = {
  0, // locals
  0, // parameters
  //  ret out err
  LET, 3, var_801_8_ret, var_802_8_out, var_803_8_err, TAIL_CALL,
  POS(881, 27)
};

static TAB_NUM t_func_std__which[] = {
  2, // locals
  1, // parameters
  var_886_5_name,
  // environment("PATH") ':')
  var_environment, 1, str_PATH, 1, LOCAL(1),
  // split(environment("PATH") ':')
  var_split, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // for_each split(environment("PATH") ':')
  var_for_each, 3, LOCAL(2), lambda_96, lambda_98, IO_TAIL_CALL,
  POS(888, 18),
  POS(888, 12),
  POS(888, 3)
};

static TAB_NUM t_lambda_96[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 889_8_pathname
  // $filename append(pathname "/" name)
  var_append, 3, LOCAL(1), string_4, var_886_5_name, 1, var_890_8_filename,
  // file_exists! filename $does_exist
  var_file_exists, 1, var_890_8_filename, IO_CALL(1), LOCAL(2),
  // if! does_exist
  var_if, 3, LOCAL(2), lambda_97, var_next, IO_TAIL_CALL,
  POS(890, 7),
  POS(891, 7),
  POS(892, 7)
};

static TAB_NUM t_lambda_97[] = {
  0, // locals
  0, // parameters
  //  filename
  LET, 1, var_890_8_filename, TAIL_CALL,
  POS(893, 11)
};

static TAB_NUM t_lambda_98[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(895, 7)
};

static TAB_NUM t_func_std__find_first_process[] = {
  0, // locals
  1, // parameters
  var_897_28_name,
  // opendir! $dir "/proc"
  var_opendir, 1, str_proc, IO_CALL(1), var_898_13_dir,
  // loop:
  var_loop, 1, lambda_7_loop, IO_TAIL_CALL,
  POS(898, 3),
  POS(899, 3)
};

static TAB_NUM t_lambda_7_loop[] = {
  1, // locals
  0, // parameters
  // readdir! $entry dir
  var_readdir, 1, var_898_13_dir, IO_CALL(1), var_900_15_entry,
  // is_an_error:
  var_is_an_error, 1, var_900_15_entry, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_entry_is_an_error, lambda_99, IO_TAIL_CALL,
  POS(900, 5),
  POS(902, 13),
  POS(901, 5)
};

static TAB_NUM t_lambda_2_entry_is_an_error[] = {
  0, // locals
  0, // parameters
  // closedir! dir
  var_closedir, 1, var_898_13_dir, IO_CALL(0),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(903, 9),
  POS(904, 9)
};

static TAB_NUM t_lambda_99[] = {
  2, // locals
  0, // parameters
  // $proc_num name_of(entry)
  var_name_of, 1, var_900_15_entry, 1, var_906_10_proc_num,
  // many(DIGIT):
  var_many, 1, var_DIGIT, 1, LOCAL(1),
  // proc_num .matches. many(DIGIT):
  var_matches, 2, var_906_10_proc_num, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_100, var_next, IO_TAIL_CALL,
  POS(906, 9),
  POS(908, 30),
  POS(908, 11),
  POS(907, 9)
};

static TAB_NUM t_lambda_100[] = {
  1, // locals
  0, // parameters
  // "/proc/@(proc_num)/cmdline"
  var_std__string, 3, str_proc_2, var_906_10_proc_num, str_cmdline, 1, LOCAL(1),
  // load! $buf "/proc/@(proc_num)/cmdline"
  var_load, 1, LOCAL(1), IO_CALL(1), var_909_20_buf,
  // is_empty
  var_is_empty, 1, var_909_20_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_101, IO_TAIL_CALL,
  POS(909, 24),
  POS(909, 13),
  POS(911, 19),
  POS(910, 13)
};

static TAB_NUM t_lambda_101[] = {
  2, // locals
  0, // parameters
  // $proc_name buf .truncate_from. '@0;'
  var_truncate_from, 2, var_909_20_buf, chr_0, 1, LOCAL(2),
  // truncate_until &proc_name '/' -1
  var_truncate_until, 3, LOCAL(2), chr_47, minus_num_1, 1, LOCAL(2),
  // proc_name .matches. name
  var_matches, 2, LOCAL(2), var_897_28_name, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), lambda_102, var_next, IO_TAIL_CALL,
  POS(914, 17),
  POS(915, 17),
  POS(917, 19),
  POS(916, 17)
};

static TAB_NUM t_lambda_102[] = {
  1, // locals
  0, // parameters
  // to_integer
  var_to_integer, 1, var_906_10_proc_num, 1, LOCAL(1),
  //  proc_num.to_integer
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(918, 31),
  POS(918, 21)
};

static TAB_NUM t_func_std__find_processes[] = {
  0, // locals
  1, // parameters
  var_922_24_name,
  // opendir! $dir "/proc"
  var_opendir, 1, str_proc, IO_CALL(1), var_923_13_dir,
  // $pids empty_list
  LET, 1, var_empty_list, 1, var_924_4_pids,
  // loop:
  var_loop, 1, lambda_8_loop, IO_TAIL_CALL,
  POS(923, 3),
  POS(924, 3),
  POS(925, 3)
};

static TAB_NUM t_lambda_8_loop[] = {
  1, // locals
  0, // parameters
  // readdir! $entry dir
  var_readdir, 1, var_923_13_dir, IO_CALL(1), var_926_15_entry,
  // is_an_error:
  var_is_an_error, 1, var_926_15_entry, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3_entry_is_an_error, lambda_103, IO_TAIL_CALL,
  POS(926, 5),
  POS(928, 13),
  POS(927, 5)
};

static TAB_NUM t_lambda_3_entry_is_an_error[] = {
  0, // locals
  0, // parameters
  // closedir! dir
  var_closedir, 1, var_923_13_dir, IO_CALL(0),
  // -> pids
  LET, 1, var_924_4_pids, TAIL_CALL,
  POS(929, 9),
  POS(930, 9)
};

static TAB_NUM t_lambda_103[] = {
  2, // locals
  0, // parameters
  // $proc_num name_of(entry)
  var_name_of, 1, var_926_15_entry, 1, var_932_10_proc_num,
  // many(DIGIT):
  var_many, 1, var_DIGIT, 1, LOCAL(1),
  // proc_num .matches. many(DIGIT):
  var_matches, 2, var_932_10_proc_num, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_104, var_next, IO_TAIL_CALL,
  POS(932, 9),
  POS(934, 30),
  POS(934, 11),
  POS(933, 9)
};

static TAB_NUM t_lambda_104[] = {
  1, // locals
  0, // parameters
  // "/proc/@(proc_num)/cmdline"
  var_std__string, 3, str_proc_2, var_932_10_proc_num, str_cmdline, 1, LOCAL(1),
  // load! $buf "/proc/@(proc_num)/cmdline"
  var_load, 1, LOCAL(1), IO_CALL(1), var_935_20_buf,
  // is_empty
  var_is_empty, 1, var_935_20_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_105, IO_TAIL_CALL,
  POS(935, 24),
  POS(935, 13),
  POS(937, 19),
  POS(936, 13)
};

static TAB_NUM t_lambda_105[] = {
  2, // locals
  0, // parameters
  // $proc_name buf .truncate_from. '@0;'
  var_truncate_from, 2, var_935_20_buf, chr_0, 1, LOCAL(2),
  // truncate_until &proc_name '/' -1
  var_truncate_until, 3, LOCAL(2), chr_47, minus_num_1, 1, LOCAL(2),
  // proc_name .matches. name:
  var_matches, 2, LOCAL(2), var_922_24_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_106, var_next, IO_TAIL_CALL,
  POS(940, 17),
  POS(941, 17),
  POS(943, 19),
  POS(942, 17)
};

static TAB_NUM t_lambda_106[] = {
  1, // locals
  0, // parameters
  // to_integer
  var_to_integer, 1, var_932_10_proc_num, 1, LOCAL(1),
  // push &pids proc_num.to_integer
  var_push, 2, var_924_4_pids, LOCAL(1), 1, var_924_4_pids,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(944, 41),
  POS(944, 21),
  POS(945, 21)
};

static TAB_NUM t_func_std__get_process_name[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 949_26_pid
  // "/proc/@(pid)/cmdline"
  var_std__string, 3, str_proc_2, LOCAL(2), str_cmdline, 1, LOCAL(1),
  // load! $buf "/proc/@(pid)/cmdline"
  var_load, 1, LOCAL(1), IO_CALL(1), var_950_10_buf,
  // is_an_error
  var_is_an_error, 1, var_950_10_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_107, lambda_108, TAIL_CALL,
  POS(950, 14),
  POS(950, 3),
  POS(952, 9),
  POS(951, 3)
};

static TAB_NUM t_lambda_107[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(953, 7)
};

static TAB_NUM t_lambda_108[] = {
  1, // locals
  0, // parameters
  // buf .truncate_from. '@0;'
  var_truncate_from, 2, var_950_10_buf, chr_0, 1, LOCAL(1),
  //  buf .truncate_from. '@0;'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(954, 8),
  POS(954, 7)
};

static TAB_NUM t_func_std__get_mac_address[] = {
  1, // locals
  0, // parameters
  // get_first_mac_address! $mac
  var_get_first_mac_address, 0, IO_CALL(1), var_957_27_mac,
  // is_defined: map_reduce mac: (chr) -> hex(chr.to_integer 2)
  var_is_defined, 1, var_957_27_mac, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_mac_is_defined, lambda_110, TAIL_CALL,
  POS(957, 3),
  POS(959, 9),
  POS(958, 3)
};

static TAB_NUM t_lambda_mac_is_defined[] = {
  0, // locals
  0, // parameters
  // map_reduce mac: (chr) -> hex(chr.to_integer 2)
  var_map_reduce, 2, var_957_27_mac, lambda_109, TAIL_CALL,
  POS(959, 21)
};

static TAB_NUM t_lambda_109[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 959_38_chr
  // to_integer 2)
  var_to_integer, 1, LOCAL(3), 1, LOCAL(1),
  // hex(chr.to_integer 2)
  var_hex, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // -> hex(chr.to_integer 2)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(959, 54),
  POS(959, 46),
  POS(959, 43)
};

static TAB_NUM t_lambda_110[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(960, 7)
};

static TAB_NUM t_func_std__extern[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 964_5_command
  // .command_of command)
  LET, -1, var_extern_call, var_command_of, LOCAL(2), LOCAL(1),
  // -> extern_call(.command_of command)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(966, 18),
  POS(966, 3)
};

static TAB_NUM t_module_entry[] = {
  0, // locals
  0, // parameters
  // register_type &deserializers std_types::file_descriptor
  var_register_type, 2, var_deserializers, var_std_types__file_descriptor, 1, var_deserializers,
  // register_type &deserializers std_types::process_id
  var_register_type, 2, var_deserializers, var_std_types__process_id, 1, var_deserializers,
  LET, 1, 0, TAIL_CALL,
  POS(661, 1),
  POS(688, 1)
};

static int list_803_16_arguments[] = {
  -string_1
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__sleep}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_POSITIVE_INT64, 0, {.value = 1000000}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__write_string_to}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__write_to}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__writeln_to}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__print_string_to}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__file_descriptor___print_to}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__println_to}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__print_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__print}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__println}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__eprint_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__eprint}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__eprintln}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__read_from}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__read_from_until}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__readln_from}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__read_all_from}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_loop}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x100000}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__get_from_until}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__getln_from}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__get_until}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__getln}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___load}},
  {FLT_STRING_8, 1, {.str_8 = "r"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_max_length_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___save}},
  {FLT_STRING_8, 2, {.str_8 = "w+"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__file_descriptor___load}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___load}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_load_file}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_read_data}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_read_failed}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_file_closed_after_reading}},
  {FLT_UNIQUE, 0, {.str_8 = "NONE"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___save}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_save_file}},
  {FLT_STRING_8, 1, {.str_8 = "w"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_write_completed}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_close_file_after_writing}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_write_failed}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__try}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__check}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__file_exists}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__directory}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_entry_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_sort}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__stat___is_a_directory}},
  {FLT_CHARACTER, 0, {.value = 100}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__object___call}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_STRING_8, 1, {.str_8 = "="}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_READ}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_out_fd}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_collect_output}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_err_fd}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_collect_error_output}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_PROCESS_JOINED}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_return_error_code}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_do_collect_output}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_STRING_8, 22, {.str_8 = "CALLING PROCESS FAILED"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___call}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_start_process}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_read_process_output}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_read_from_process_failed}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ignore_close}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_process_finished}},
  {FLT_STRING_8, 29, {.str_8 = "process finished with status "}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__terminate}},
  {FLT_STRING_8, 15, {.str_8 = "file_descriptor"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__file_descriptor___serialize}},
  {FLT_STRING_8, 16, {.str_8 = "file_descriptor "}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__file_descriptor___deserializer_of}},
  {FLT_STRING_8, 10, {.str_8 = "process_id"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__process_id___serialize}},
  {FLT_STRING_8, 11, {.str_8 = "process_id "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__process_id___deserializer_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_extern_call}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__pipe}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_first_arg_is_a_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_first_arg_is_a_file_descriptor}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_build_commands}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_arg_is_a_function}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__pipe_commands}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_feed_or_fd_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_feed_or_fd_is_a_file_descriptor}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_run_pipe}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_store_pid_and_err_fd}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_LIST, 1, {.arguments = list_803_16_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_manage_io}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_rpid_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_feed_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_buf_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_88}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_89}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_90}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_91}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_93}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_94}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_95}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__which}},
  {FLT_STRING_8, 4, {.str_8 = "PATH"}},
  {FLT_CHARACTER, 0, {.value = 58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_96}},
  {FLT_STRING_8, 1, {.str_8 = "/"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_97}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_98}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__find_first_process}},
  {FLT_STRING_8, 5, {.str_8 = "/proc"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_entry_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_99}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_100}},
  {FLT_STRING_8, 6, {.str_8 = "/proc/"}},
  {FLT_STRING_8, 8, {.str_8 = "/cmdline"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_101}},
  {FLT_CHARACTER, 0, {.value = 0}},
  {FLT_CHARACTER, 0, {.value = 47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_102}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__find_processes}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_entry_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_103}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_104}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_105}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_106}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__get_process_name}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_107}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_108}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__get_mac_address}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_mac_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_109}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_110}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__extern}},
  {FLT_FUNCTION, 0, {.tfunc = t_module_entry}}
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
    "381_14_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "381_17_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "381_20_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "381_29_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "381_34_context\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "382_10_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(389, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(389, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_COMPLETED\000", NULL,
    {.position = POS(391, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_FAILED\000", NULL,
    {.position = POS(392, 9)}
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
    "432_5_argument\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "file_exists\000std", NULL,
    {.const_idx = -func_std__file_exists}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "stat\000", NULL,
    {.position = POS(452, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(453, 6)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "directory\000std", NULL,
    {.const_idx = -func_std__directory}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SORT\000", NULL,
    {.position = POS(470, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(470, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "470_19_do_sort\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_options\000", NULL,
    {.position = POS(469, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "471_4_entries\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(471, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "472_13_dir\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "opendir\000", NULL,
    {.position = POS(472, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "474_15_entry\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "readdir\000", NULL,
    {.position = POS(474, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "closedir\000", NULL,
    {.position = POS(477, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "name_of\000", NULL,
    {.position = POS(480, 43)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sort\000", NULL,
    {.position = POS(480, 13)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "stat\000std_types", std_types__stat__attributes,
    {.position = POS(486, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_directory\000", NULL,
    {.position = POS(486, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mode_of\000", NULL,
    {.position = POS(487, 6)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "call\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(491, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "call\000", NULL,
    {.position = POS(491, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(496, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "497_4_do_return_error_code\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "498_4_do_collect_output\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "499_4_do_collect_error_output\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_string\000", NULL,
    {.position = POS(500, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(500, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "501_4_env_vars\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "environment\000", NULL,
    {.position = POS(502, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(504, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(502, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "507_32_out_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "507_40_err_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_process\000", NULL,
    {.position = POS(507, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "509_4_io\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "join_process\000", NULL,
    {.position = POS(510, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "514_4_out\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "515_4_err\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_events\000", NULL,
    {.position = POS(517, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "520_22_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "520_26_data\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(527, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PROCESS_JOINED\000", NULL,
    {.position = POS(546, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "547_14_ret\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error\000", NULL,
    {.position = POS(562, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "579_4_env_vars\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "617_21_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "617_28_status\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "617_35_context\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "log\000", NULL,
    {.position = POS(618, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "620_4_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "623_4_out\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "624_4_err\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "terminate\000std", NULL,
    {.const_idx = -func_std__terminate}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXIT_SUCCESS\000", NULL,
    {.position = POS(634, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exit\000", NULL,
    {.position = POS(634, 3)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_file_descriptor\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_file_descriptor\000", NULL,
    {.position = POS(637, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(640, 29)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(642, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "645_5_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "647_4_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(651, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deserializer_of\000", NULL,
    {.position = POS(654, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "integer\000", NULL,
    {.position = POS(659, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "file_descriptor\000", NULL,
    {.position = POS(659, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deserializers\000", NULL,
    {.position = POS(661, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "register_type\000", NULL,
    {.position = POS(661, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_process_id\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_process_id\000", NULL,
    {.position = POS(664, 20)}
  },
  {
    FOT_UNKNOWN, 0, 4,
    "process_id\000std_types", std_types__process_id__attributes,
    {.position = POS(665, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "672_5_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "674_4_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "process_id\000", NULL,
    {.position = POS(686, 6)}
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
    {.position = POS(697, 32)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pipe\000std", NULL,
    {.const_idx = -func_std__pipe}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "703_5_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "705_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "706_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "707_4_in_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "708_4_feed\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "709_4_commands\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "710_4_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "711_4_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "712_4_first_arg\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(714, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "732_14_arg\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_function\000", NULL,
    {.position = POS(734, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(739, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pipe_commands\000std", NULL,
    {.const_idx = -func_std__pipe_commands}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "752_5_feed_or_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "753_5_commands\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "767_5_in_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "768_5_feed\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "769_5_commands\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "771_4_pids\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "772_4_err_fds\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "773_4_out_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "774_4_env_vars\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "783_8_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "784_16_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "784_22_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "786_8_pid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "787_8_err_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(789, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(801, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "801_8_ret\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dup\000", NULL,
    {.position = POS(801, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "802_8_out\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "803_8_err\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "814_12_read_descriptor_list\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "keys_of\000", NULL,
    {.position = POS(814, 33)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "824_14_read_descriptors\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "825_14_write_descriptors\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pselect\000", NULL,
    {.position = POS(822, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGCHLD\000", NULL,
    {.position = POS(830, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "833_30_rpid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "833_36_status\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "wait\000", NULL,
    {.position = POS(833, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "858_24_read_descriptor\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "859_30_buf\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "which\000std", NULL,
    {.const_idx = -func_std__which}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "886_5_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split\000", NULL,
    {.position = POS(888, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "890_8_filename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "file_exists\000", NULL,
    {.position = POS(891, 7)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "find_first_process\000std", NULL,
    {.const_idx = -func_std__find_first_process}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "897_28_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "898_13_dir\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "900_15_entry\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "906_10_proc_num\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DIGIT\000", NULL,
    {.position = POS(908, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "many\000", NULL,
    {.position = POS(908, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "matches\000", NULL,
    {.position = POS(908, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "909_20_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(914, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_until\000", NULL,
    {.position = POS(915, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "find_processes\000std", NULL,
    {.const_idx = -func_std__find_processes}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "922_24_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "923_13_dir\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "924_4_pids\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "926_15_entry\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "932_10_proc_num\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "935_20_buf\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "get_process_name\000std", NULL,
    {.const_idx = -func_std__get_process_name}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "950_10_buf\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "get_mac_address\000std", NULL,
    {.const_idx = -func_std__get_mac_address}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "957_27_mac\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_first_mac_address\000", NULL,
    {.position = POS(957, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hex\000", NULL,
    {.position = POS(959, 46)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(959, 21)}
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
  .feature_flags = FEAT_POSITIONS|FEAT_INITIALIZER,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  237, // number of constants
  291, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
