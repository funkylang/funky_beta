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
  func_file_closed_after_reading = -71,
  func_read_failed = -72,
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
  func_std__call = -96,
  num_2 = -97,
  num_3 = -98,
  lambda_38 = -99,
  lambda_39 = -100,
  string_2 = -101,
  lambda_40 = -102,
  lambda_5_loop = -103,
  lambda_41 = -104,
  lambda_READ = -105,
  lambda_42 = -106,
  lambda_out_fd = -107,
  lambda_do_collect_output = -108,
  lambda_43 = -109,
  lambda_err_fd = -110,
  lambda_do_collect_error_output = -111,
  lambda_44 = -112,
  lambda_45 = -113,
  lambda_PROCESS_JOINED = -114,
  lambda_do_return_error_code = -115,
  lambda_2_do_collect_output = -116,
  lambda_46 = -117,
  lambda_47 = -118,
  lambda_48 = -119,
  lambda_49 = -120,
  lambda_50 = -121,
  str_CALLING_PROCESS = -122,
  lambda_51 = -123,
  func_std__terminate = -124,
  str_file_descriptor = -125,
  func_std_types__file_descriptor___serialize = -126,
  str_file_descriptor_2 = -127,
  string_3 = -128,
  lambda_52 = -129,
  lambda_53 = -130,
  func_std_types__file_descriptor___deserializer_of = -131,
  str_process_id = -132,
  func_std_types__process_id___serialize = -133,
  str_process_id_2 = -134,
  lambda_54 = -135,
  lambda_55 = -136,
  func_std_types__process_id___deserializer_of = -137,
  func_extern_call = -138,
  func_std__pipe = -139,
  lambda_first_arg_is_a_string = -140,
  lambda_56 = -141,
  lambda_first_arg_is_a_file_descriptor = -142,
  func_build_commands = -143,
  lambda_57 = -144,
  lambda_58 = -145,
  lambda_arg_is_a_function = -146,
  lambda_59 = -147,
  lambda_60 = -148,
  lambda_61 = -149,
  lambda_62 = -150,
  func_std__pipe_commands = -151,
  lambda_feed_or_fd_is_defined = -152,
  lambda_feed_or_fd_is_a_file_descriptor = -153,
  lambda_63 = -154,
  lambda_64 = -155,
  func_run_pipe = -156,
  lambda_65 = -157,
  lambda_66 = -158,
  lambda_67 = -159,
  lambda_68 = -160,
  lambda_69 = -161,
  lambda_70 = -162,
  lambda_71 = -163,
  func_store_pid_and_err_fd = -164,
  lambda_72 = -165,
  list_735_9 = -166,
  lambda_73 = -167,
  func_manage_io = -168,
  lambda_6_loop = -169,
  lambda_74 = -170,
  lambda_75 = -171,
  lambda_76 = -172,
  lambda_77 = -173,
  lambda_78 = -174,
  lambda_79 = -175,
  lambda_rpid_is_defined = -176,
  lambda_80 = -177,
  lambda_81 = -178,
  lambda_feed_is_empty = -179,
  lambda_82 = -180,
  lambda_83 = -181,
  lambda_buf_is_empty = -182,
  lambda_84 = -183,
  lambda_85 = -184,
  lambda_86 = -185,
  lambda_87 = -186,
  lambda_88 = -187,
  lambda_89 = -188,
  lambda_90 = -189,
  lambda_91 = -190,
  lambda_92 = -191,
  func_std__which = -192,
  str_PATH = -193,
  chr_58 = -194,
  lambda_93 = -195,
  string_4 = -196,
  lambda_94 = -197,
  lambda_95 = -198,
  func_std__find_first_process = -199,
  str_proc = -200,
  lambda_7_loop = -201,
  lambda_2_entry_is_an_error = -202,
  lambda_96 = -203,
  lambda_97 = -204,
  str_proc_2 = -205,
  str_cmdline = -206,
  lambda_98 = -207,
  chr_0 = -208,
  chr_47 = -209,
  lambda_99 = -210,
  func_std__find_processes = -211,
  lambda_8_loop = -212,
  lambda_3_entry_is_an_error = -213,
  lambda_100 = -214,
  lambda_101 = -215,
  lambda_102 = -216,
  lambda_103 = -217,
  func_std__get_process_name = -218,
  lambda_104 = -219,
  lambda_105 = -220,
  func_std__get_mac_address = -221,
  lambda_mac_is_defined = -222,
  lambda_106 = -223,
  lambda_107 = -224,
  func_std__extern = -225
};

enum {
  var__START = FIRST_VAR-1,
  var_std__load, // attribute
  var_std__assign, // extern
  var_std__save, // attribute
  var_std__update, // attribute
  var_std__is_a_directory, // attribute
  var_std__sleep, // initialized
  var_79_0_duration, // dynamic
  var_std__less, // extern
  var_std__times, // extern
  var_to_integer, // extern
  var_usleep, // extern
  var_on, // extern
  var_std__write_string_to, // initialized
  var_85_0_fd, // dynamic
  var_86_0_str, // dynamic
  var_88_1_len, // dynamic
  var_length_of, // extern
  var_91_8_bytes_written, // dynamic
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
  var_178_0_fd, // dynamic
  var_179_0_length, // dynamic
  var_181_1_data, // dynamic
  var_183_7_buf, // dynamic
  var_read, // extern
  var_is_empty, // extern
  var_true, // extern
  var_append, // extern
  var_minus, // extern
  var_cond, // extern
  var_std__read_from_until, // initialized
  var_194_0_fd, // dynamic
  var_195_0_sentinel, // dynamic
  var_196_0_nth, // dynamic
  var_198_1_data, // dynamic
  var_200_7_buf, // dynamic
  var_has_suffix, // extern
  var_dec, // extern
  var_std__readln_from, // initialized
  var_read_from_until, // extern
  var_std__read_all_from, // initialized
  var_223_0_fd, // dynamic
  var_225_1_data, // dynamic
  var_227_7_buf, // dynamic
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
  var_270_0_max_length, // dynamic
  var_undefined, // extern
  var_272_7_fd, // dynamic
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
  var_std_types__io, // extern
  var_empty_hash_table, // extern
  var_run, // extern
  var_319_13_io, // dynamic
  var_319_16_id, // dynamic
  var_319_28_max_length, // dynamic
  var_319_39_data, // dynamic
  var_320_7_fd, // dynamic
  var_JOB_FAILED, // extern
  var_tuple, // extern
  var_start_reading_from, // extern
  var_READ, // extern
  var_std__key_value_pair, // extern
  var_CLOSED, // extern
  var_READ_FAILED, // extern
  var_register_handlers, // extern
  var_335_13_io, // dynamic
  var_335_16_fd, // dynamic
  var_336_1_buf, // dynamic
  var_337_1_max_length, // dynamic
  var_std__not, // extern
  var_std__and, // extern
  var_deregister_all_handlers, // extern
  var_JOB_COMPLETED, // extern
  var_379_13_io, // dynamic
  var_379_16_id, // dynamic
  var_379_19_filename, // dynamic
  var_379_28_data, // dynamic
  var_379_33_context, // dynamic
  var_380_7_fd, // dynamic
  var_std__equal, // extern
  var_update_if, // extern
  var_WRITE_COMPLETED, // extern
  var_WRITE_FAILED, // extern
  var_std__try, // initialized
  var_std__check, // initialized
  var_430_0_argument, // dynamic
  var_std__file_exists, // initialized
  var_stat, // extern
  var_not, // extern
  var_std__directory, // initialized
  var_SORT, // extern
  var_false, // extern
  var_468_14_do_sort, // dynamic
  var_get_options, // extern
  var_469_1_entries, // dynamic
  var_empty_list, // extern
  var_470_10_dir, // dynamic
  var_opendir, // extern
  var_472_10_entry, // dynamic
  var_readdir, // extern
  var_closedir, // extern
  var_name_of, // extern
  var_sort, // extern
  var_std_types__stat, // extern
  var_is_a_directory, // extern polymorphic
  var_mode_of, // extern
  var_std__call, // initialized
  var_result_count, // extern
  var_493_1_do_return_error_code, // dynamic
  var_494_1_do_collect_output, // dynamic
  var_495_1_do_collect_error_output, // dynamic
  var_496_1_env_vars, // dynamic
  var_to_string, // extern
  var_map, // extern
  var_environment, // extern
  var_std__string, // extern
  var_for_each, // extern
  var_505_29_out_fd, // dynamic
  var_505_37_err_fd, // dynamic
  var_create_process, // extern
  var_507_1_io, // dynamic
  var_join_process, // extern
  var_512_1_out, // dynamic
  var_513_1_err, // dynamic
  var_get_events, // extern
  var_518_13_fd, // dynamic
  var_518_17_data, // dynamic
  var_case, // extern
  var_PROCESS_JOINED, // extern
  var_545_1_ret, // dynamic
  var_error, // extern
  var_std__terminate, // initialized
  var_EXIT_SUCCESS, // extern
  var_exit, // extern
  var_std__is_a_file_descriptor, // attribute
  var_std_types__object, // extern
  var_is_a_file_descriptor, // extern polymorphic
  var_serialization_tag_of, // extern polymorphic
  var_serialize, // extern polymorphic
  var_577_0_indent, // dynamic
  var_579_1_str, // dynamic
  var_tabs_and_spaces, // extern
  var_deserializer_of, // extern polymorphic
  var_integer, // extern
  var_file_descriptor, // extern
  var_deserializers, // extern
  var_register_type, // extern
  var_std__is_a_process_id, // attribute
  var_is_a_process_id, // extern polymorphic
  var_std_types__process_id, // extern
  var_604_0_indent, // dynamic
  var_606_1_str, // dynamic
  var_process_id, // extern
  var_command_of, // attribute
  var_extern_call, // initialized
  var_flatten, // extern
  var_call, // extern
  var_std__pipe, // initialized
  var_635_0_args, // dynamic
  var_637_1_i, // dynamic
  var_638_1_n, // dynamic
  var_639_1_in_fd, // dynamic
  var_640_1_feed, // dynamic
  var_641_1_commands, // dynamic
  var_642_1_head, // dynamic
  var_643_1_arguments, // dynamic
  var_644_1_first_arg, // dynamic
  var_is_a_string, // extern
  var_664_1_arg, // dynamic
  var_is_a_function, // extern
  var_inc, // extern
  var_std__pipe_commands, // initialized
  var_684_0_feed_or_fd, // dynamic
  var_685_0_commands, // dynamic
  var_699_0_in_fd, // dynamic
  var_700_0_feed, // dynamic
  var_701_0_commands, // dynamic
  var_703_1_pids, // dynamic
  var_704_1_err_fds, // dynamic
  var_705_1_out_fd, // dynamic
  var_706_1_env_vars, // dynamic
  var_715_3_idx, // dynamic
  var_716_9_head, // dynamic
  var_716_15_arguments, // dynamic
  var_718_1_pid, // dynamic
  var_719_1_err_fd, // dynamic
  var_is_undefined, // extern
  var_list, // extern
  var_733_1_ret, // dynamic
  var_dup, // extern
  var_734_1_out, // dynamic
  var_735_1_err, // dynamic
  var_746_1_read_descriptor_list, // dynamic
  var_keys_of, // extern
  var_756_1_read_descriptors, // dynamic
  var_757_1_write_descriptors, // dynamic
  var_pselect, // extern
  var_CHILD_CHANGED_STATE, // extern
  var_765_7_rpid, // dynamic
  var_765_13_status, // dynamic
  var_wait, // extern
  var_790_3_read_descriptor, // dynamic
  var_791_7_buf, // dynamic
  var_std__which, // initialized
  var_818_0_name, // dynamic
  var_split, // extern
  var_822_1_filename, // dynamic
  var_file_exists, // extern
  var_std__find_first_process, // initialized
  var_829_27_name, // dynamic
  var_830_10_dir, // dynamic
  var_832_10_entry, // dynamic
  var_838_1_proc_num, // dynamic
  var_DIGIT, // extern
  var_many, // extern
  var_matches, // extern
  var_841_7_buf, // dynamic
  var_truncate_from, // extern
  var_truncate_until, // extern
  var_std__find_processes, // initialized
  var_854_23_name, // dynamic
  var_855_10_dir, // dynamic
  var_856_1_pids, // dynamic
  var_858_10_entry, // dynamic
  var_864_1_proc_num, // dynamic
  var_867_7_buf, // dynamic
  var_std__get_process_name, // initialized
  var_882_7_buf, // dynamic
  var_std__get_mac_address, // initialized
  var_889_24_mac, // dynamic
  var_get_first_mac_address, // extern
  var_hex, // extern
  var_map_reduce, // extern
  var_std__extern, // initialized
  var__END
};


static TAB_NUM t_func_std__sleep[] = {
  1, // locals
  1, // parameters
  var_79_0_duration,
  // 0: usleep! (1'000'000*duration).to_integer
  var_std__less, 2, num_0, var_79_0_duration, 1, LOCAL(1),
  // on duration > 0: usleep! (1'000'000*duration).to_integer
  var_on, 2, LOCAL(1), lambda_1, IO_TAIL_CALL,
  POS(81, 17),
  POS(81, 3)
};

static TAB_NUM t_lambda_1[] = {
  2, // locals
  0, // parameters
  // 1'000'000*duration).to_integer
  var_std__times, 2, num_1000000, var_79_0_duration, 1, LOCAL(1),
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
  var_85_0_fd,
  var_86_0_str,
  // $len length_of(str)
  var_length_of, 1, var_86_0_str, 1, var_88_1_len,
  // loop
  var_loop, 2, lambda_2, var_pass, IO_TAIL_CALL,
  POS(88, 3),
  POS(89, 3)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // write! $bytes_written fd str
  var_write, 2, var_85_0_fd, var_86_0_str, IO_CALL(1), var_91_8_bytes_written,
  // is_an_error
  var_is_an_error, 1, var_91_8_bytes_written, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_91_8_bytes_written, lambda_3, IO_TAIL_CALL,
  POS(91, 7),
  POS(93, 23),
  POS(92, 7)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // bytes_written < len:
  var_std__less, 2, var_91_8_bytes_written, var_88_1_len, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_4, var_break, IO_TAIL_CALL,
  POS(97, 13),
  POS(96, 11)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // bytes_written+1 -1
  var_std__plus, 2, var_91_8_bytes_written, num_1, 1, LOCAL(1),
  // range &str bytes_written+1 -1
  var_range, 3, var_86_0_str, LOCAL(1), minus_num_1, 1, var_86_0_str,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(98, 26),
  POS(98, 15),
  POS(99, 15)
};

static TAB_NUM t_func_std__write_to[] = {
  3, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 105_0_fd
  REST_PARAMETER, LOCAL(3), // 106_0_args
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
  MANDATORY_PARAMETER, LOCAL(3), // 112_0_fd
  REST_PARAMETER, LOCAL(4), // 113_0_args
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
  LOCAL(2), // 119_0_fd
  LOCAL(3), // 120_0_str
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
  MANDATORY_PARAMETER, LOCAL(3), // 128_0_fd
  REST_PARAMETER, LOCAL(4), // 129_0_args
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
  MANDATORY_PARAMETER, LOCAL(4), // 135_0_fd
  REST_PARAMETER, LOCAL(5), // 136_0_args
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
  LOCAL(2), // 142_0_str
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
  REST_PARAMETER, LOCAL(2), // 148_0_args
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
  REST_PARAMETER, LOCAL(3), // 154_0_args
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
  LOCAL(2), // 160_0_str
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
  REST_PARAMETER, LOCAL(2), // 166_0_args
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
  REST_PARAMETER, LOCAL(3), // 172_0_args
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
  var_178_0_fd,
  var_179_0_length,
  // $data ""
  LET, 1, string_1, 1, var_181_1_data,
  // loop:
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(181, 3),
  POS(182, 3)
};

static TAB_NUM t_lambda_loop[] = {
  0, // locals
  0, // parameters
  // read! $buf fd length
  var_read, 2, var_178_0_fd, var_179_0_length, IO_CALL(1), var_183_7_buf,
  // cond
  var_cond, 3, lambda_5, lambda_7, lambda_9, IO_TAIL_CALL,
  POS(183, 5),
  POS(184, 5)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // is_an_error -> buf
  var_is_an_error, 1, var_183_7_buf, 1, LOCAL(1),
  //  buf.is_an_error -> buf
  LET, 2, LOCAL(1), lambda_6, TAIL_CALL,
  POS(185, 14),
  POS(185, 9)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_183_7_buf, TAIL_CALL,
  POS(185, 28)
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // is_empty -> data
  var_is_empty, 1, var_183_7_buf, 1, LOCAL(1),
  //  buf.is_empty -> data
  LET, 2, LOCAL(1), lambda_8, TAIL_CALL,
  POS(186, 14),
  POS(186, 9)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_181_1_data, TAIL_CALL,
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
  var_append, 2, var_181_1_data, var_183_7_buf, 1, var_181_1_data,
  // length_of(buf)
  var_length_of, 1, var_183_7_buf, 1, LOCAL(1),
  // minus &length length_of(buf)
  var_minus, 2, var_179_0_length, LOCAL(1), 1, var_179_0_length,
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
  MANDATORY_PARAMETER, var_194_0_fd,
  MANDATORY_PARAMETER, var_195_0_sentinel,
  num_1, var_196_0_nth,
  // $data ""
  LET, 1, string_1, 1, var_198_1_data,
  // loop:
  var_loop, 1, lambda_2_loop, IO_TAIL_CALL,
  POS(198, 3),
  POS(199, 3)
};

static TAB_NUM t_lambda_2_loop[] = {
  0, // locals
  0, // parameters
  // read! $buf fd 1
  var_read, 2, var_194_0_fd, num_1, IO_CALL(1), var_200_7_buf,
  // cond
  var_cond, 3, lambda_11, lambda_13, lambda_15, IO_TAIL_CALL,
  POS(200, 5),
  POS(201, 5)
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // is_an_error -> buf
  var_is_an_error, 1, var_200_7_buf, 1, LOCAL(1),
  //  buf.is_an_error -> buf
  LET, 2, LOCAL(1), lambda_12, TAIL_CALL,
  POS(202, 14),
  POS(202, 9)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_200_7_buf, TAIL_CALL,
  POS(202, 28)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // is_empty -> data
  var_is_empty, 1, var_200_7_buf, 1, LOCAL(1),
  //  buf.is_empty -> data
  LET, 2, LOCAL(1), lambda_14, TAIL_CALL,
  POS(203, 14),
  POS(203, 9)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_198_1_data, TAIL_CALL,
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
  var_append, 2, var_198_1_data, var_200_7_buf, 1, var_198_1_data,
  // buf .has_suffix. sentinel:
  var_has_suffix, 2, var_200_7_buf, var_195_0_sentinel, 1, LOCAL(1),
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
  var_dec, 1, var_196_0_nth, 1, var_196_0_nth,
  // 0
  var_std__less, 2, num_0, var_196_0_nth, 1, LOCAL(1),
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
  LET, 1, var_198_1_data, TAIL_CALL,
  POS(212, 17)
};

static TAB_NUM t_func_std__readln_from[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 217_0_fd
  // read_from_until! fd '@nl;'
  var_read_from_until, 2, LOCAL(1), chr_10, IO_TAIL_CALL,
  POS(219, 3)
};

static TAB_NUM t_func_std__read_all_from[] = {
  0, // locals
  1, // parameters
  var_223_0_fd,
  // $data ""
  LET, 1, string_1, 1, var_225_1_data,
  // loop:
  var_loop, 1, lambda_3_loop, IO_TAIL_CALL,
  POS(225, 3),
  POS(226, 3)
};

static TAB_NUM t_lambda_3_loop[] = {
  0, // locals
  0, // parameters
  // read! $buf fd 0x100000
  var_read, 2, var_223_0_fd, num_0x100000, IO_CALL(1), var_227_7_buf,
  // cond
  var_cond, 3, lambda_19, lambda_21, lambda_23, IO_TAIL_CALL,
  POS(227, 5),
  POS(228, 5)
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // is_an_error -> buf
  var_is_an_error, 1, var_227_7_buf, 1, LOCAL(1),
  //  buf.is_an_error -> buf
  LET, 2, LOCAL(1), lambda_20, TAIL_CALL,
  POS(229, 14),
  POS(229, 9)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_227_7_buf, TAIL_CALL,
  POS(229, 28)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // is_empty -> data
  var_is_empty, 1, var_227_7_buf, 1, LOCAL(1),
  //  buf.is_empty -> data
  LET, 2, LOCAL(1), lambda_22, TAIL_CALL,
  POS(230, 14),
  POS(230, 9)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_225_1_data, TAIL_CALL,
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
  var_append, 2, var_225_1_data, var_227_7_buf, 1, var_225_1_data,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(232, 9),
  POS(233, 9)
};

static TAB_NUM t_func_std__get_from_until[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 237_0_fd
  MANDATORY_PARAMETER, LOCAL(3), // 238_0_sentinel
  num_1, LOCAL(4), // 239_0_nth
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
  LOCAL(1), // 246_0_fd
  // get_from_until! fd '@nl;'
  var_get_from_until, 2, LOCAL(1), chr_10, IO_TAIL_CALL,
  POS(248, 3)
};

static TAB_NUM t_func_std__get_until[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 252_0_sentinel
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
  MANDATORY_PARAMETER, LOCAL(2), // 269_0_filename
  var_undefined, var_270_0_max_length,
  // open! $fd filename "r"
  var_open, 2, LOCAL(2), str_r, IO_CALL(1), var_272_7_fd,
  // check fd
  var_check, 1, var_272_7_fd, 0,
  // is_defined:
  var_is_defined, 1, var_270_0_max_length, 1, LOCAL(1),
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
  var_read_from, 2, var_272_7_fd, var_270_0_max_length, IO_CALL(1), LOCAL(1),
  // close! fd
  var_close, 1, var_272_7_fd, IO_CALL(0),
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
  var_load, 1, var_272_7_fd, IO_TAIL_CALL,
  POS(280, 7)
};

static TAB_NUM t_func_std_types__string___save[] = {
  3, // locals
  2, // parameters
  LOCAL(1), // 284_0_filename
  LOCAL(2), // 285_0_data
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
  LOCAL(1), // 294_0_fd
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
  MANDATORY_PARAMETER, LOCAL(1), // 311_0_io
  MANDATORY_PARAMETER, LOCAL(2), // 312_0_id
  MANDATORY_PARAMETER, LOCAL(3), // 313_0_filename
  var_undefined, LOCAL(4), // 314_0_max_length
  LOCAL(3), LOCAL(5), // 315_0_data
  // run io load_file id filename max_length data
  var_run, 6, LOCAL(1), func_load_file, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), TAIL_CALL,
  POS(317, 3)
};

static TAB_NUM t_func_load_file[] = {
  2, // locals
  5, // parameters
  var_319_13_io,
  var_319_16_id,
  LOCAL(2), // 319_19_filename
  var_319_28_max_length,
  var_319_39_data,
  // open! $fd filename "r"
  var_open, 2, LOCAL(2), str_r, IO_CALL(1), var_320_7_fd,
  // is_an_error
  var_is_an_error, 1, var_320_7_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_26, lambda_27, TAIL_CALL,
  POS(320, 3),
  POS(322, 8),
  POS(321, 3)
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  0, // parameters
  // tuple(JOB_FAILED id fd data)
  var_tuple, 4, var_JOB_FAILED, var_319_16_id, var_320_7_fd, var_319_39_data, 1, LOCAL(1),
  //  io tuple(JOB_FAILED id fd data)
  LET, 2, var_319_13_io, LOCAL(1), TAIL_CALL,
  POS(323, 11),
  POS(323, 7)
};

static TAB_NUM t_lambda_27[] = {
  5, // locals
  0, // parameters
  // start_reading_from &io fd true max_length
  var_start_reading_from, 4, var_319_13_io, var_320_7_fd, var_true, var_319_28_max_length, 1, var_319_13_io,
  // load_buffer_of(fd) ""
  var_load_buffer_of, 1, var_319_13_io, 1, LOCAL(2),
  // load_buffer_of(fd) ""
  LOCAL(2), 2, var_320_7_fd, string_1, 1, LOCAL(2),
  // io.load_buffer_of(fd) ""
  LET, -1, var_319_13_io, var_load_buffer_of, LOCAL(2), var_319_13_io,
  // max_length_of(fd) max_length
  var_max_length_of, 1, var_319_13_io, 1, LOCAL(2),
  // max_length_of(fd) max_length
  LOCAL(2), 2, var_320_7_fd, var_319_28_max_length, 1, LOCAL(2),
  // io.max_length_of(fd) max_length
  LET, -1, var_319_13_io, var_max_length_of, LOCAL(2), var_319_13_io,
  // id_of(fd) id
  var_id_of, 1, var_319_13_io, 1, LOCAL(2),
  // id_of(fd) id
  LOCAL(2), 2, var_320_7_fd, var_319_16_id, 1, LOCAL(2),
  // io.id_of(fd) id
  LET, -1, var_319_13_io, var_id_of, LOCAL(2), var_319_13_io,
  // READ = read_data
  var_std__key_value_pair, 2, var_READ, func_read_data, 1, LOCAL(1),
  // tuple(file_closed_after_reading data)
  var_tuple, 2, func_file_closed_after_reading, var_319_39_data, 1, LOCAL(2),
  // CLOSED = tuple(file_closed_after_reading data)
  var_std__key_value_pair, 2, var_CLOSED, LOCAL(2), 1, LOCAL(3),
  // tuple(read_failed data)
  var_tuple, 2, func_read_failed, var_319_39_data, 1, LOCAL(4),
  // READ_FAILED = tuple(read_failed data)
  var_std__key_value_pair, 2, var_READ_FAILED, LOCAL(4), 1, LOCAL(5),
  // register_handlers &io fd
  var_register_handlers, 5, var_319_13_io, var_320_7_fd, LOCAL(1), LOCAL(3), LOCAL(5), 1, var_319_13_io,
  // -> io undefined
  LET, 2, var_319_13_io, var_undefined, TAIL_CALL,
  POS(325, 7),
  POS(326, 11),
  POS(326, 11),
  POS(326, 8),
  POS(327, 11),
  POS(327, 11),
  POS(327, 8),
  POS(328, 11),
  POS(328, 11),
  POS(328, 8),
  POS(330, 9),
  POS(331, 18),
  POS(331, 9),
  POS(332, 23),
  POS(332, 9),
  POS(329, 7),
  POS(333, 7)
};

static TAB_NUM t_func_read_data[] = {
  3, // locals
  3, // parameters
  var_335_13_io,
  var_335_16_fd,
  LOCAL(3), // 335_19_data
  // load_buffer_of(io)(fd)
  var_load_buffer_of, 1, var_335_13_io, 1, LOCAL(1),
  // $buf load_buffer_of(io)(fd)
  LOCAL(1), 1, var_335_16_fd, 1, var_336_1_buf,
  // max_length_of(io)(fd)
  var_max_length_of, 1, var_335_13_io, 1, LOCAL(1),
  // $max_length max_length_of(io)(fd)
  LOCAL(1), 1, var_335_16_fd, 1, var_337_1_max_length,
  // append &buf data
  var_append, 2, var_336_1_buf, LOCAL(3), 1, var_336_1_buf,
  // is_defined && length_of(buf) >= max_length:
  var_is_defined, 1, var_337_1_max_length, 1, LOCAL(1),
  // is_defined && length_of(buf) >= max_length:
  var_std__and, 2, LOCAL(1), lambda_28, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_29, lambda_30, TAIL_CALL,
  POS(336, 8),
  POS(336, 3),
  POS(337, 15),
  POS(337, 3),
  POS(338, 3),
  POS(340, 16),
  POS(340, 16),
  POS(339, 3)
};

static TAB_NUM t_lambda_28[] = {
  3, // locals
  0, // parameters
  // length_of(buf) >= max_length:
  var_length_of, 1, var_336_1_buf, 1, LOCAL(1),
  // length_of(buf) >= max_length:
  var_std__less, 2, LOCAL(1), var_337_1_max_length, 1, LOCAL(2),
  // length_of(buf) >= max_length:
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // length_of(buf) >= max_length:
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(340, 30),
  POS(340, 30),
  POS(340, 30),
  POS(340, 30)
};

static TAB_NUM t_lambda_29[] = {
  3, // locals
  0, // parameters
  // deregister_all_handlers &io fd
  var_deregister_all_handlers, 2, var_335_13_io, var_335_16_fd, 1, var_335_13_io,
  // id_of(io)(fd)
  var_id_of, 1, var_335_13_io, 1, LOCAL(1),
  // $id id_of(io)(fd)
  LOCAL(1), 1, var_335_16_fd, 1, LOCAL(3),
  // load_buffer_of(fd) undefined
  var_load_buffer_of, 1, var_335_13_io, 1, LOCAL(2),
  // load_buffer_of(fd) undefined
  LOCAL(2), 2, var_335_16_fd, var_undefined, 1, LOCAL(2),
  // io.load_buffer_of(fd) undefined
  LET, -1, var_335_13_io, var_load_buffer_of, LOCAL(2), var_335_13_io,
  // max_length_of(fd) undefined
  var_max_length_of, 1, var_335_13_io, 1, LOCAL(2),
  // max_length_of(fd) undefined
  LOCAL(2), 2, var_335_16_fd, var_undefined, 1, LOCAL(2),
  // io.max_length_of(fd) undefined
  LET, -1, var_335_13_io, var_max_length_of, LOCAL(2), var_335_13_io,
  // id_of(fd) undefined
  var_id_of, 1, var_335_13_io, 1, LOCAL(2),
  // id_of(fd) undefined
  LOCAL(2), 2, var_335_16_fd, var_undefined, 1, LOCAL(2),
  // io.id_of(fd) undefined
  LET, -1, var_335_13_io, var_id_of, LOCAL(2), var_335_13_io,
  // tuple(JOB_COMPLETED id buf)
  var_tuple, 3, var_JOB_COMPLETED, LOCAL(3), var_336_1_buf, 1, LOCAL(1),
  // -> io tuple(JOB_COMPLETED id buf)
  LET, 2, var_335_13_io, LOCAL(1), TAIL_CALL,
  POS(341, 7),
  POS(342, 11),
  POS(342, 7),
  POS(343, 11),
  POS(343, 11),
  POS(343, 8),
  POS(344, 11),
  POS(344, 11),
  POS(344, 8),
  POS(345, 11),
  POS(345, 11),
  POS(345, 8),
  POS(346, 13),
  POS(346, 7)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // load_buffer_of(fd) buf
  var_load_buffer_of, 1, var_335_13_io, 1, LOCAL(2),
  // load_buffer_of(fd) buf
  LOCAL(2), 2, var_335_16_fd, var_336_1_buf, 1, LOCAL(2),
  // io.load_buffer_of(fd) buf
  LET, -1, var_335_13_io, var_load_buffer_of, LOCAL(2), var_335_13_io,
  // -> io undefined
  LET, 2, var_335_13_io, var_undefined, TAIL_CALL,
  POS(348, 11),
  POS(348, 11),
  POS(348, 8),
  POS(349, 7)
};

static TAB_NUM t_func_file_closed_after_reading[] = {
  7, // locals
  4, // parameters
  LOCAL(3), // 351_29_io
  LOCAL(4), // 351_32_fd
  LOCAL(1),
  LOCAL(5), // 351_42_data
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
  POS(352, 3),
  POS(353, 8),
  POS(353, 3),
  POS(354, 7),
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

static TAB_NUM t_func_read_failed[] = {
  6, // locals
  4, // parameters
  LOCAL(3), // 360_15_io
  LOCAL(4), // 360_18_fd
  LOCAL(5), // 360_21_err
  LOCAL(6), // 360_25_data
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
  POS(361, 3),
  POS(362, 7),
  POS(362, 7),
  POS(362, 4),
  POS(363, 7),
  POS(363, 7),
  POS(363, 4),
  POS(364, 7),
  POS(364, 7),
  POS(364, 4),
  POS(365, 9),
  POS(365, 3)
};

static TAB_NUM t_func_std_types__io___save[] = {
  5, // locals
  -5, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 371_0_io
  MANDATORY_PARAMETER, LOCAL(2), // 372_0_id
  MANDATORY_PARAMETER, LOCAL(3), // 373_0_filename
  MANDATORY_PARAMETER, LOCAL(4), // 374_0_data
  uni_NONE, LOCAL(5), // 375_0_context
  // run io save_file id filename data context
  var_run, 6, LOCAL(1), func_save_file, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), TAIL_CALL,
  POS(377, 3)
};

static TAB_NUM t_func_save_file[] = {
  1, // locals
  5, // parameters
  var_379_13_io,
  var_379_16_id,
  var_379_19_filename,
  var_379_28_data,
  var_379_33_context,
  // open! $fd filename "w"
  var_open, 2, var_379_19_filename, str_w_2, IO_CALL(1), var_380_7_fd,
  // is_an_error
  var_is_an_error, 1, var_380_7_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_31, lambda_32, TAIL_CALL,
  POS(380, 3),
  POS(382, 8),
  POS(381, 3)
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // tuple(JOB_FAILED id fd filename)
  var_tuple, 4, var_JOB_FAILED, var_379_16_id, var_380_7_fd, var_379_19_filename, 1, LOCAL(1),
  //  io tuple(JOB_FAILED id fd filename)
  LET, 2, var_379_13_io, LOCAL(1), TAIL_CALL,
  POS(383, 11),
  POS(383, 7)
};

static TAB_NUM t_lambda_32[] = {
  4, // locals
  0, // parameters
  // write &io fd data
  var_write, 3, var_379_13_io, var_380_7_fd, var_379_28_data, 1, var_379_13_io,
  // id_of(fd) id
  var_id_of, 1, var_379_13_io, 1, LOCAL(2),
  // id_of(fd) id
  LOCAL(2), 2, var_380_7_fd, var_379_16_id, 1, LOCAL(2),
  // io.id_of(fd) id
  LET, -1, var_379_13_io, var_id_of, LOCAL(2), var_379_13_io,
  // NONE == context &context -> filename
  var_std__equal, 2, uni_NONE, var_379_33_context, 1, LOCAL(1),
  // update_if NONE == context &context -> filename
  var_update_if, 3, LOCAL(1), var_379_33_context, lambda_33, 1, var_379_33_context,
  // tuple(write_completed context)
  var_tuple, 2, func_write_completed, var_379_33_context, 1, LOCAL(1),
  // WRITE_COMPLETED = tuple(write_completed context)
  var_std__key_value_pair, 2, var_WRITE_COMPLETED, LOCAL(1), 1, LOCAL(2),
  // tuple(write_failed context)
  var_tuple, 2, func_write_failed, var_379_33_context, 1, LOCAL(3),
  // WRITE_FAILED = tuple(write_failed context)
  var_std__key_value_pair, 2, var_WRITE_FAILED, LOCAL(3), 1, LOCAL(4),
  // register_handlers &io fd
  var_register_handlers, 4, var_379_13_io, var_380_7_fd, LOCAL(2), LOCAL(4), 1, var_379_13_io,
  // -> io undefined
  LET, 2, var_379_13_io, var_undefined, TAIL_CALL,
  POS(385, 7),
  POS(386, 11),
  POS(386, 11),
  POS(386, 8),
  POS(387, 17),
  POS(387, 7),
  POS(389, 27),
  POS(389, 9),
  POS(390, 24),
  POS(390, 9),
  POS(388, 7),
  POS(391, 7)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  //  filename
  LET, 1, var_379_19_filename, TAIL_CALL,
  POS(387, 44)
};

static TAB_NUM t_func_write_completed[] = {
  4, // locals
  4, // parameters
  LOCAL(2), // 393_19_io
  LOCAL(3), // 393_22_fd
  LOCAL(1),
  LOCAL(4), // 393_32_context
  // run &io close_file_after_writing fd context
  var_run, 4, LOCAL(2), func_close_file_after_writing, LOCAL(3), LOCAL(4), 1, LOCAL(2),
  // -> io undefined
  LET, 2, LOCAL(2), var_undefined, TAIL_CALL,
  POS(394, 3),
  POS(395, 3)
};

static TAB_NUM t_func_close_file_after_writing[] = {
  6, // locals
  3, // parameters
  LOCAL(3), // 397_28_io
  LOCAL(4), // 397_31_fd
  LOCAL(5), // 397_34_context
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
  POS(402, 3)
};

static TAB_NUM t_func_write_failed[] = {
  7, // locals
  4, // parameters
  LOCAL(3), // 404_16_io
  LOCAL(4), // 404_19_fd
  LOCAL(5), // 404_22_err
  LOCAL(6), // 404_26_context
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
  POS(408, 3)
};

static TAB_NUM t_func_std__try[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 423_0_body
  // body!
  LOCAL(1), 0, IO_CALL(0),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(425, 3),
  POS(426, 3)
};

static TAB_NUM t_func_std__check[] = {
  1, // locals
  1, // parameters
  var_430_0_argument,
  // is_an_error
  var_is_an_error, 1, var_430_0_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, var_pass, TAIL_CALL,
  POS(433, 14),
  POS(432, 3)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  //  argument
  LET, 1, var_430_0_argument, TAIL_CALL,
  POS(434, 7)
};

static TAB_NUM t_func_std__file_exists[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 448_0_filename
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
  POS(451, 3)
};

static TAB_NUM t_func_std__directory[] = {
  3, // locals
  -2, // parameters
  REST_PARAMETER, LOCAL(2), // 464_0_options
  MANDATORY_PARAMETER, LOCAL(3), // 465_0_pathname
  // SORT = false $do_sort
  var_std__key_value_pair, 2, var_SORT, var_false, 1, LOCAL(1),
  // get_options options
  var_get_options, 2, LOCAL(2), LOCAL(1), 1, var_468_14_do_sort,
  // $entries empty_list
  LET, 1, var_empty_list, 1, var_469_1_entries,
  // opendir! $dir pathname
  var_opendir, 1, LOCAL(3), IO_CALL(1), var_470_10_dir,
  // loop:
  var_loop, 1, lambda_4_loop, IO_TAIL_CALL,
  POS(468, 5),
  POS(467, 3),
  POS(469, 3),
  POS(470, 3),
  POS(471, 3)
};

static TAB_NUM t_lambda_4_loop[] = {
  1, // locals
  0, // parameters
  // readdir! $entry dir
  var_readdir, 1, var_470_10_dir, IO_CALL(1), var_472_10_entry,
  // is_an_error:
  var_is_an_error, 1, var_472_10_entry, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_entry_is_an_error, lambda_37, IO_TAIL_CALL,
  POS(472, 5),
  POS(474, 13),
  POS(473, 5)
};

static TAB_NUM t_lambda_entry_is_an_error[] = {
  0, // locals
  0, // parameters
  // closedir! dir
  var_closedir, 1, var_470_10_dir, IO_CALL(0),
  // if
  var_if, 3, var_468_14_do_sort, lambda_do_sort, lambda_36, TAIL_CALL,
  POS(475, 9),
  POS(476, 9)
};

static TAB_NUM t_lambda_do_sort[] = {
  0, // locals
  0, // parameters
  // sort entries: (left right) -> name_of(left) < name_of(right)
  var_sort, 2, var_469_1_entries, lambda_35, TAIL_CALL,
  POS(478, 13)
};

static TAB_NUM t_lambda_35[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 478_15_left
  LOCAL(5), // 478_20_right
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
  POS(478, 40)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  entries
  LET, 1, var_469_1_entries, TAIL_CALL,
  POS(479, 13)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  // push &entries entry
  var_push, 2, var_469_1_entries, var_472_10_entry, 1, var_469_1_entries,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(481, 9),
  POS(482, 9)
};

static TAB_NUM t_func_std_types__stat___is_a_directory[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 484_34_self
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
  POS(485, 3)
};

static TAB_NUM t_func_std__call[] = {
  6, // locals
  2, // parameters
  LOCAL(2), // 489_0_cmd
  LOCAL(3), // 490_0_args
  // $rc result_count()
  var_result_count, 0, 1, LOCAL(4),
  // rc >= 1)
  var_std__less, 2, LOCAL(4), num_1, 1, LOCAL(1),
  // $do_return_error_code (rc >= 1)
  var_std__not, 1, LOCAL(1), 1, var_493_1_do_return_error_code,
  // rc >= 2)
  var_std__less, 2, LOCAL(4), num_2, 1, LOCAL(1),
  // $do_collect_output (rc >= 2)
  var_std__not, 1, LOCAL(1), 1, var_494_1_do_collect_output,
  // $do_collect_error_output (rc == 3)
  var_std__equal, 2, LOCAL(4), num_3, 1, var_495_1_do_collect_error_output,
  // $env_vars undefined
  LET, 1, var_undefined, 1, var_496_1_env_vars,
  // map &args to_string
  var_map, 2, LOCAL(3), var_to_string, 1, LOCAL(3),
  // is_defined &env_vars:
  var_is_defined, 1, var_environment, 1, LOCAL(1),
  // update_if environment.is_defined &env_vars:
  var_update_if, 3, LOCAL(1), var_496_1_env_vars, lambda_38, 1, var_496_1_env_vars,
  // create_process! $pid $in_fd $out_fd $err_fd cmd args env_vars
  var_create_process, 3, LOCAL(2), LOCAL(3), var_496_1_env_vars, IO_CALL(4), LOCAL(5), LOCAL(6), var_505_29_out_fd, var_505_37_err_fd,
  // close! in_fd
  var_close, 1, LOCAL(6), IO_CALL(0),
  // $io std_types::io
  LET, 1, var_std_types__io, 1, var_507_1_io,
  // join_process &io pid
  var_join_process, 2, var_507_1_io, LOCAL(5), 1, var_507_1_io,
  // start_reading_from &io out_fd
  var_start_reading_from, 2, var_507_1_io, var_505_29_out_fd, 1, var_507_1_io,
  // start_reading_from &io err_fd
  var_start_reading_from, 2, var_507_1_io, var_505_37_err_fd, 1, var_507_1_io,
  // $out ""
  LET, 1, string_1, 1, var_512_1_out,
  // $err ""
  LET, 1, string_1, 1, var_513_1_err,
  // loop:
  var_loop, 1, lambda_5_loop, IO_TAIL_CALL,
  POS(492, 3),
  POS(493, 26),
  POS(493, 3),
  POS(494, 23),
  POS(494, 3),
  POS(495, 3),
  POS(496, 3),
  POS(497, 3),
  POS(498, 25),
  POS(498, 3),
  POS(505, 3),
  POS(506, 3),
  POS(507, 3),
  POS(508, 3),
  POS(509, 3),
  POS(510, 3),
  POS(512, 3),
  POS(513, 3),
  POS(514, 3)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  // !env_vars empty_list
  LET, 1, var_empty_list, 1, var_496_1_env_vars,
  // for_each environment
  var_for_each, 3, var_environment, lambda_39, lambda_40, TAIL_CALL,
  POS(499, 5),
  POS(500, 5)
};

static TAB_NUM t_lambda_39[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 501_3_key
  LOCAL(3), // 501_7_value
  // "@(key)=@(value)"
  var_std__string, 3, LOCAL(2), string_2, LOCAL(3), 1, LOCAL(1),
  // push &env_vars "@(key)=@(value)"
  var_push, 2, var_496_1_env_vars, LOCAL(1), 1, var_496_1_env_vars,
  // next
  var_next, 0, TAIL_CALL,
  POS(502, 24),
  POS(502, 9),
  POS(503, 9)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  //  env_vars
  LET, 1, var_496_1_env_vars, TAIL_CALL,
  POS(504, 9)
};

static TAB_NUM t_lambda_5_loop[] = {
  1, // locals
  0, // parameters
  // get_events! &io $events
  var_get_events, 1, var_507_1_io, IO_CALL(2), var_507_1_io, LOCAL(1),
  // for_each events
  var_for_each, 3, LOCAL(1), lambda_41, var_next, IO_TAIL_CALL,
  POS(515, 5),
  POS(516, 5)
};

static TAB_NUM t_lambda_41[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 517_3_event
  // event $type $fd $data
  LOCAL(1), 0, 3, LOCAL(2), var_518_13_fd, var_518_17_data,
  // case type
  var_case, 6, LOCAL(2), var_READ, lambda_READ, var_PROCESS_JOINED, lambda_PROCESS_JOINED, lambda_51, IO_TAIL_CALL,
  POS(518, 9),
  POS(519, 9)
};

static TAB_NUM t_lambda_READ[] = {
  1, // locals
  0, // parameters
  // data == ""
  var_std__equal, 2, var_518_17_data, string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_42, IO_TAIL_CALL,
  POS(522, 15),
  POS(521, 13)
};

static TAB_NUM t_lambda_42[] = {
  0, // locals
  0, // parameters
  // case fd
  var_case, 6, var_518_13_fd, var_505_29_out_fd, lambda_out_fd, var_505_37_err_fd, lambda_err_fd, lambda_45, IO_TAIL_CALL,
  POS(525, 17)
};

static TAB_NUM t_lambda_out_fd[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_494_1_do_collect_output, lambda_do_collect_output, lambda_43, IO_TAIL_CALL,
  POS(527, 21)
};

static TAB_NUM t_lambda_do_collect_output[] = {
  0, // locals
  0, // parameters
  // append &out data
  var_append, 2, var_512_1_out, var_518_17_data, 1, var_512_1_out,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(529, 25),
  POS(530, 25)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  // write_to! STDOUT_FILENO data
  var_write_to, 2, var_STDOUT_FILENO, var_518_17_data, IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(532, 25),
  POS(533, 25)
};

static TAB_NUM t_lambda_err_fd[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_495_1_do_collect_error_output, lambda_do_collect_error_output, lambda_44, IO_TAIL_CALL,
  POS(535, 21)
};

static TAB_NUM t_lambda_do_collect_error_output[] = {
  0, // locals
  0, // parameters
  // append &err data
  var_append, 2, var_513_1_err, var_518_17_data, 1, var_513_1_err,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(537, 25),
  POS(538, 25)
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  // write_to! STDERR_FILENO data
  var_write_to, 2, var_STDERR_FILENO, var_518_17_data, IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(540, 25),
  POS(541, 25)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(543, 21)
};

static TAB_NUM t_lambda_PROCESS_JOINED[] = {
  0, // locals
  0, // parameters
  // $ret data
  LET, 1, var_518_17_data, 1, var_545_1_ret,
  // if
  var_if, 3, var_493_1_do_return_error_code, lambda_do_return_error_code, lambda_49, TAIL_CALL,
  POS(545, 13),
  POS(546, 13)
};

static TAB_NUM t_lambda_do_return_error_code[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_494_1_do_collect_output, lambda_2_do_collect_output, lambda_48, TAIL_CALL,
  POS(548, 17)
};

static TAB_NUM t_lambda_2_do_collect_output[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_495_1_do_collect_error_output, lambda_46, lambda_47, TAIL_CALL,
  POS(550, 21)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  //  ret out err
  LET, 3, var_545_1_ret, var_512_1_out, var_513_1_err, TAIL_CALL,
  POS(552, 25)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  //  ret out
  LET, 2, var_545_1_ret, var_512_1_out, TAIL_CALL,
  POS(553, 25)
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  //  ret
  LET, 1, var_545_1_ret, TAIL_CALL,
  POS(554, 21)
};

static TAB_NUM t_lambda_49[] = {
  1, // locals
  0, // parameters
  // ret == 0
  var_std__equal, 2, var_545_1_ret, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_pass, lambda_50, TAIL_CALL,
  POS(557, 19),
  POS(556, 17)
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  // error "CALLING PROCESS FAILED"
  var_error, 1, str_CALLING_PROCESS, TAIL_CALL,
  POS(560, 21)
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(562, 13)
};

static TAB_NUM t_func_std__terminate[] = {
  0, // locals
  0, // parameters
  // exit! EXIT_SUCCESS
  var_exit, 1, var_EXIT_SUCCESS, IO_TAIL_CALL,
  POS(566, 3)
};

static TAB_NUM t_func_std_types__file_descriptor___serialize[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 576_0_self
  var_undefined, var_577_0_indent,
  // to_integer)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(1),
  // $str "
  var_std__string, 3, str_file_descriptor_2, LOCAL(1), string_3, 1, var_579_1_str,
  // is_defined
  var_is_defined, 1, var_577_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_52, lambda_53, TAIL_CALL,
  POS(580, 28),
  POS(579, 3),
  POS(582, 12),
  POS(581, 3)
};

static TAB_NUM t_lambda_52[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_577_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_579_1_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(583, 15),
  POS(583, 8),
  POS(583, 7)
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_579_1_str, TAIL_CALL,
  POS(584, 7)
};

static TAB_NUM t_func_std_types__file_descriptor___deserializer_of[] = {
  3, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(3), // 589_0_argument
  // integer(argument))
  var_integer, 1, LOCAL(3), 1, LOCAL(1),
  // file_descriptor(integer(argument))
  var_file_descriptor, 1, LOCAL(1), 1, LOCAL(2),
  // -> file_descriptor(integer(argument))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(591, 22),
  POS(591, 6),
  POS(591, 3)
};

static TAB_NUM t_func_std_types__process_id___serialize[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 603_0_self
  var_undefined, var_604_0_indent,
  // to_integer)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(1),
  // $str "
  var_std__string, 3, str_process_id_2, LOCAL(1), string_3, 1, var_606_1_str,
  // is_defined
  var_is_defined, 1, var_604_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_54, lambda_55, TAIL_CALL,
  POS(607, 23),
  POS(606, 3),
  POS(609, 12),
  POS(608, 3)
};

static TAB_NUM t_lambda_54[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_604_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_606_1_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(610, 15),
  POS(610, 8),
  POS(610, 7)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_606_1_str, TAIL_CALL,
  POS(611, 7)
};

static TAB_NUM t_func_std_types__process_id___deserializer_of[] = {
  3, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(3), // 616_0_argument
  // integer(argument))
  var_integer, 1, LOCAL(3), 1, LOCAL(1),
  // process_id(integer(argument))
  var_process_id, 1, LOCAL(1), 1, LOCAL(2),
  // -> process_id(integer(argument))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(618, 17),
  POS(618, 6),
  POS(618, 3)
};

static TAB_NUM t_func_extern_call[] = {
  5, // locals
  -2, // parameters
  MYSELF_PARAMETER, LOCAL(4), // 626_0_myself
  REST_PARAMETER, LOCAL(5), // 627_0_arguments
  // command_of(myself) map(flatten(arguments) to_string)
  var_command_of, 1, LOCAL(4), 1, LOCAL(1),
  // flatten(arguments) to_string)
  var_flatten, 1, LOCAL(5), 1, LOCAL(2),
  // map(flatten(arguments) to_string)
  var_map, 2, LOCAL(2), var_to_string, 1, LOCAL(3),
  // call! command_of(myself) map(flatten(arguments) to_string)
  var_call, 2, LOCAL(1), LOCAL(3), IO_TAIL_CALL,
  POS(629, 9),
  POS(629, 32),
  POS(629, 28),
  POS(629, 3)
};

static TAB_NUM t_func_std__pipe[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, var_635_0_args,
  // $i 1
  LET, 1, num_1, 1, var_637_1_i,
  // $n length_of(args)
  var_length_of, 1, var_635_0_args, 1, var_638_1_n,
  // $in_fd undefined
  LET, 1, var_undefined, 1, var_639_1_in_fd,
  // $feed undefined
  LET, 1, var_undefined, 1, var_640_1_feed,
  // $commands empty_list
  LET, 1, var_empty_list, 1, var_641_1_commands,
  // $head undefined
  LET, 1, var_undefined, 1, var_642_1_head,
  // $arguments undefined
  LET, 1, var_undefined, 1, var_643_1_arguments,
  // $first_arg args(1)
  var_635_0_args, 1, num_1, 1, var_644_1_first_arg,
  // is_a_string:
  var_is_a_string, 1, var_644_1_first_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_first_arg_is_a_string, lambda_56, IO_TAIL_CALL,
  POS(637, 3),
  POS(638, 3),
  POS(639, 3),
  POS(640, 3),
  POS(641, 3),
  POS(642, 3),
  POS(643, 3),
  POS(644, 3),
  POS(646, 15),
  POS(645, 3)
};

static TAB_NUM t_lambda_first_arg_is_a_string[] = {
  0, // locals
  0, // parameters
  // !feed first_arg
  LET, 1, var_644_1_first_arg, 1, var_640_1_feed,
  // !i 2
  LET, 1, num_2, 1, var_637_1_i,
  // build_commands!
  func_build_commands, 0, IO_TAIL_CALL,
  POS(647, 7),
  POS(648, 7),
  POS(649, 7)
};

static TAB_NUM t_lambda_56[] = {
  1, // locals
  0, // parameters
  // is_a_file_descriptor:
  var_is_a_file_descriptor, 1, var_644_1_first_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_first_arg_is_a_file_descriptor, func_build_commands, IO_TAIL_CALL,
  POS(652, 19),
  POS(651, 7)
};

static TAB_NUM t_lambda_first_arg_is_a_file_descriptor[] = {
  0, // locals
  0, // parameters
  // !in_fd first_arg
  LET, 1, var_644_1_first_arg, 1, var_639_1_in_fd,
  // !i 2
  LET, 1, num_2, 1, var_637_1_i,
  // build_commands!
  func_build_commands, 0, IO_TAIL_CALL,
  POS(653, 11),
  POS(654, 11),
  POS(655, 11)
};

static TAB_NUM t_func_build_commands[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_57, lambda_61, IO_TAIL_CALL,
  POS(659, 5)
};

static TAB_NUM t_lambda_57[] = {
  1, // locals
  0, // parameters
  // n break
  var_std__less, 2, var_638_1_n, var_637_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_58, IO_TAIL_CALL,
  POS(662, 15),
  POS(661, 9)
};

static TAB_NUM t_lambda_58[] = {
  1, // locals
  0, // parameters
  // $arg args(i)
  var_635_0_args, 1, var_637_1_i, 1, var_664_1_arg,
  // is_a_function:
  var_is_a_function, 1, var_664_1_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_arg_is_a_function, lambda_60, IO_TAIL_CALL,
  POS(664, 13),
  POS(666, 19),
  POS(665, 13)
};

static TAB_NUM t_lambda_arg_is_a_function[] = {
  1, // locals
  0, // parameters
  // is_defined &commands:
  var_is_defined, 1, var_642_1_head, 1, LOCAL(1),
  // update_if head.is_defined &commands:
  var_update_if, 3, LOCAL(1), var_641_1_commands, lambda_59, 1, var_641_1_commands,
  // !head command_of(arg)
  var_command_of, 1, var_664_1_arg, 1, var_642_1_head,
  // !arguments empty_list
  LET, 1, var_empty_list, 1, var_643_1_arguments,
  // inc &i
  var_inc, 1, var_637_1_i, 1, var_637_1_i,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(667, 32),
  POS(667, 17),
  POS(669, 17),
  POS(670, 17),
  POS(671, 17),
  POS(672, 17)
};

static TAB_NUM t_lambda_59[] = {
  3, // locals
  0, // parameters
  // flatten(arguments) to_string))
  var_flatten, 1, var_643_1_arguments, 1, LOCAL(1),
  // map(flatten(arguments) to_string))
  var_map, 2, LOCAL(1), var_to_string, 1, LOCAL(2),
  // tuple(head map(flatten(arguments) to_string))
  var_tuple, 2, var_642_1_head, LOCAL(2), 1, LOCAL(3),
  // push commands tuple(head map(flatten(arguments) to_string))
  var_push, 2, var_641_1_commands, LOCAL(3), TAIL_CALL,
  POS(668, 48),
  POS(668, 44),
  POS(668, 33),
  POS(668, 19)
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  0, // parameters
  // push &arguments arg
  var_push, 2, var_643_1_arguments, var_664_1_arg, 1, var_643_1_arguments,
  // inc &i
  var_inc, 1, var_637_1_i, 1, var_637_1_i,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(674, 17),
  POS(675, 17),
  POS(676, 17)
};

static TAB_NUM t_lambda_61[] = {
  1, // locals
  0, // parameters
  // is_defined &commands:
  var_is_defined, 1, var_642_1_head, 1, LOCAL(1),
  // update_if head.is_defined &commands:
  var_update_if, 3, LOCAL(1), var_641_1_commands, lambda_62, 1, var_641_1_commands,
  // run_pipe! in_fd feed commands
  func_run_pipe, 3, var_639_1_in_fd, var_640_1_feed, var_641_1_commands, IO_TAIL_CALL,
  POS(678, 24),
  POS(678, 9),
  POS(680, 9)
};

static TAB_NUM t_lambda_62[] = {
  3, // locals
  0, // parameters
  // flatten(arguments) to_string))
  var_flatten, 1, var_643_1_arguments, 1, LOCAL(1),
  // map(flatten(arguments) to_string))
  var_map, 2, LOCAL(1), var_to_string, 1, LOCAL(2),
  // tuple(head map(flatten(arguments) to_string))
  var_tuple, 2, var_642_1_head, LOCAL(2), 1, LOCAL(3),
  // push commands tuple(head map(flatten(arguments) to_string))
  var_push, 2, var_641_1_commands, LOCAL(3), TAIL_CALL,
  POS(679, 40),
  POS(679, 36),
  POS(679, 25),
  POS(679, 11)
};

static TAB_NUM t_func_std__pipe_commands[] = {
  1, // locals
  -2, // parameters
  var_undefined, var_684_0_feed_or_fd,
  MANDATORY_PARAMETER, var_685_0_commands,
  // is_defined:
  var_is_defined, 1, var_684_0_feed_or_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_feed_or_fd_is_defined, lambda_64, IO_TAIL_CALL,
  POS(688, 16),
  POS(687, 3)
};

static TAB_NUM t_lambda_feed_or_fd_is_defined[] = {
  1, // locals
  0, // parameters
  // is_a_file_descriptor:
  var_is_a_file_descriptor, 1, var_684_0_feed_or_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_feed_or_fd_is_a_file_descriptor, lambda_63, IO_TAIL_CALL,
  POS(690, 20),
  POS(689, 7)
};

static TAB_NUM t_lambda_feed_or_fd_is_a_file_descriptor[] = {
  0, // locals
  0, // parameters
  // run_pipe! feed_or_fd undefined commands
  func_run_pipe, 3, var_684_0_feed_or_fd, var_undefined, var_685_0_commands, IO_TAIL_CALL,
  POS(691, 11)
};

static TAB_NUM t_lambda_63[] = {
  0, // locals
  0, // parameters
  // run_pipe! undefined feed_or_fd commands
  func_run_pipe, 3, var_undefined, var_684_0_feed_or_fd, var_685_0_commands, IO_TAIL_CALL,
  POS(693, 11)
};

static TAB_NUM t_lambda_64[] = {
  0, // locals
  0, // parameters
  // run_pipe! undefined undefined commands
  func_run_pipe, 3, var_undefined, var_undefined, var_685_0_commands, IO_TAIL_CALL,
  POS(695, 7)
};

static TAB_NUM t_func_run_pipe[] = {
  1, // locals
  3, // parameters
  var_699_0_in_fd,
  var_700_0_feed,
  var_701_0_commands,
  // $pids empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_703_1_pids,
  // $err_fds empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_704_1_err_fds,
  // $out_fd in_fd
  LET, 1, var_699_0_in_fd, 1, var_705_1_out_fd,
  // $env_vars undefined
  LET, 1, var_undefined, 1, var_706_1_env_vars,
  // is_defined &env_vars:
  var_is_defined, 1, var_environment, 1, LOCAL(1),
  // update_if environment.is_defined &env_vars:
  var_update_if, 3, LOCAL(1), var_706_1_env_vars, lambda_65, 1, var_706_1_env_vars,
  // for_each commands
  var_for_each, 3, var_701_0_commands, lambda_68, lambda_72, IO_TAIL_CALL,
  POS(703, 3),
  POS(704, 3),
  POS(705, 3),
  POS(706, 3),
  POS(707, 25),
  POS(707, 3),
  POS(714, 3)
};

static TAB_NUM t_lambda_65[] = {
  0, // locals
  0, // parameters
  // !env_vars empty_list
  LET, 1, var_empty_list, 1, var_706_1_env_vars,
  // for_each environment
  var_for_each, 3, var_environment, lambda_66, lambda_67, TAIL_CALL,
  POS(708, 5),
  POS(709, 5)
};

static TAB_NUM t_lambda_66[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 710_3_key
  LOCAL(3), // 710_7_value
  // "@(key)=@(value)"
  var_std__string, 3, LOCAL(2), string_2, LOCAL(3), 1, LOCAL(1),
  // push &env_vars "@(key)=@(value)"
  var_push, 2, var_706_1_env_vars, LOCAL(1), 1, var_706_1_env_vars,
  // next
  var_next, 0, TAIL_CALL,
  POS(711, 24),
  POS(711, 9),
  POS(712, 9)
};

static TAB_NUM t_lambda_67[] = {
  0, // locals
  0, // parameters
  //  env_vars
  LET, 1, var_706_1_env_vars, TAIL_CALL,
  POS(713, 9)
};

static TAB_NUM t_lambda_68[] = {
  3, // locals
  2, // parameters
  var_715_3_idx,
  LOCAL(3), // 715_7_command
  // command $head $arguments
  LOCAL(3), 0, 2, var_716_9_head, var_716_15_arguments,
  // map &arguments to_utf8
  var_map, 2, var_716_15_arguments, var_to_utf8, 1, var_716_15_arguments,
  // $pid undefined
  LET, 1, var_undefined, 1, var_718_1_pid,
  // $err_fd undefined
  LET, 1, var_undefined, 1, var_719_1_err_fd,
  // idx == 1 && in_fd.is_undefined:
  var_std__equal, 2, var_715_3_idx, num_1, 1, LOCAL(1),
  // idx == 1 && in_fd.is_undefined:
  var_std__and, 2, LOCAL(1), lambda_69, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_70, lambda_71, IO_TAIL_CALL,
  POS(716, 7),
  POS(717, 7),
  POS(718, 7),
  POS(719, 7),
  POS(721, 9),
  POS(721, 9),
  POS(720, 7)
};

static TAB_NUM t_lambda_69[] = {
  1, // locals
  0, // parameters
  // is_undefined:
  var_is_undefined, 1, var_699_0_in_fd, 1, LOCAL(1),
  // in_fd.is_undefined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(721, 27),
  POS(721, 21)
};

static TAB_NUM t_lambda_70[] = {
  0, // locals
  0, // parameters
  // create_process! !pid !in_fd !out_fd !err_fd head arguments env_vars
  var_create_process, 3, var_716_9_head, var_716_15_arguments, var_706_1_env_vars, IO_CALL(4), var_718_1_pid, var_699_0_in_fd, var_705_1_out_fd, var_719_1_err_fd,
  // store_pid_and_err_fd!
  func_store_pid_and_err_fd, 0, IO_TAIL_CALL,
  POS(722, 11),
  POS(723, 11)
};

static TAB_NUM t_lambda_71[] = {
  0, // locals
  0, // parameters
  // create_process! !pid !out_fd !err_fd head arguments env_vars out_fd
  var_create_process, 4, var_716_9_head, var_716_15_arguments, var_706_1_env_vars, var_705_1_out_fd, IO_CALL(3), var_718_1_pid, var_705_1_out_fd, var_719_1_err_fd,
  // store_pid_and_err_fd!
  func_store_pid_and_err_fd, 0, IO_TAIL_CALL,
  POS(725, 11),
  POS(726, 11)
};

static TAB_NUM t_func_store_pid_and_err_fd[] = {
  0, // locals
  0, // parameters
  // pids(pid) idx
  var_703_1_pids, 2, var_718_1_pid, var_715_3_idx, 1, var_703_1_pids,
  // err_fds(err_fd) idx
  var_704_1_err_fds, 2, var_719_1_err_fd, var_715_3_idx, 1, var_704_1_err_fds,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(729, 10),
  POS(730, 10),
  POS(731, 9)
};

static TAB_NUM t_lambda_72[] = {
  2, // locals
  0, // parameters
  // list(undefined) length_of(commands))
  var_list, 1, var_undefined, 1, LOCAL(1),
  // length_of(commands))
  var_length_of, 1, var_701_0_commands, 1, LOCAL(2),
  // $ret dup(list(undefined) length_of(commands))
  var_dup, 2, LOCAL(1), LOCAL(2), 1, var_733_1_ret,
  // $out ""
  LET, 1, string_1, 1, var_734_1_out,
  // length_of(commands))
  var_length_of, 1, var_701_0_commands, 1, LOCAL(2),
  // $err dup(list("") length_of(commands))
  var_dup, 2, list_735_9, LOCAL(2), 1, var_735_1_err,
  // is_defined
  var_is_defined, 1, var_700_0_feed, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_manage_io, lambda_73, IO_TAIL_CALL,
  POS(733, 16),
  POS(733, 32),
  POS(733, 7),
  POS(734, 7),
  POS(735, 25),
  POS(735, 7),
  POS(737, 14),
  POS(736, 7)
};

static TAB_NUM t_lambda_73[] = {
  0, // locals
  0, // parameters
  // close! in_fd
  var_close, 1, var_699_0_in_fd, IO_CALL(0),
  // !in_fd undefined
  LET, 1, var_undefined, 1, var_699_0_in_fd,
  // manage_io!
  func_manage_io, 0, IO_TAIL_CALL,
  POS(740, 11),
  POS(741, 11),
  POS(742, 11)
};

static TAB_NUM t_func_manage_io[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_6_loop, IO_TAIL_CALL,
  POS(745, 9)
};

static TAB_NUM t_lambda_6_loop[] = {
  3, // locals
  0, // parameters
  // $read_descriptor_list keys_of(err_fds)
  var_keys_of, 1, var_704_1_err_fds, 1, var_746_1_read_descriptor_list,
  // is_defined
  var_is_defined, 1, var_699_0_in_fd, 1, LOCAL(1),
  // $write_descriptor_list
  var_if, 3, LOCAL(1), lambda_74, lambda_75, 1, LOCAL(2),
  // is_defined &read_descriptor_list:
  var_is_defined, 1, var_705_1_out_fd, 1, LOCAL(1),
  // update_if out_fd.is_defined &read_descriptor_list:
  var_update_if, 3, LOCAL(1), var_746_1_read_descriptor_list, lambda_76, 1, var_746_1_read_descriptor_list,
  // pselect!
  var_pselect, 3, var_746_1_read_descriptor_list, LOCAL(2), var_empty_list, IO_CALL(4), LOCAL(3), var_756_1_read_descriptors, var_757_1_write_descriptors, LOCAL(1),
  // for_each signals
  var_for_each, 3, LOCAL(3), lambda_77, lambda_80, IO_TAIL_CALL,
  POS(746, 11),
  POS(749, 21),
  POS(747, 11),
  POS(752, 28),
  POS(752, 11),
  POS(754, 11),
  POS(759, 11)
};

static TAB_NUM t_lambda_74[] = {
  1, // locals
  0, // parameters
  // list(in_fd)
  var_list, 1, var_699_0_in_fd, 1, LOCAL(1),
  //  list(in_fd)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(750, 18),
  POS(750, 17)
};

static TAB_NUM t_lambda_75[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(751, 17)
};

static TAB_NUM t_lambda_76[] = {
  0, // locals
  0, // parameters
  // push read_descriptor_list out_fd
  var_push, 2, var_746_1_read_descriptor_list, var_705_1_out_fd, TAIL_CALL,
  POS(753, 13)
};

static TAB_NUM t_lambda_77[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 760_3_signal
  // signal == CHILD_CHANGED_STATE:
  var_std__equal, 2, LOCAL(2), var_CHILD_CHANGED_STATE, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_78, var_next, IO_TAIL_CALL,
  POS(762, 17),
  POS(761, 15)
};

static TAB_NUM t_lambda_78[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_79, var_next, IO_TAIL_CALL,
  POS(763, 19)
};

static TAB_NUM t_lambda_79[] = {
  1, // locals
  0, // parameters
  // wait! $rpid $status
  var_wait, 0, IO_CALL(2), var_765_7_rpid, var_765_13_status,
  // is_defined:
  var_is_defined, 1, var_765_7_rpid, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_rpid_is_defined, var_break, IO_TAIL_CALL,
  POS(765, 23),
  POS(767, 30),
  POS(766, 23)
};

static TAB_NUM t_lambda_rpid_is_defined[] = {
  2, // locals
  0, // parameters
  // pids(rpid)) status
  var_703_1_pids, 1, var_765_7_rpid, 1, LOCAL(2),
  // ret(pids(rpid)) status
  var_733_1_ret, 2, LOCAL(2), var_765_13_status, 1, var_733_1_ret,
  // pids(rpid) undefined
  var_703_1_pids, 2, var_765_7_rpid, var_undefined, 1, var_703_1_pids,
  // is_empty
  var_is_empty, 1, var_703_1_pids, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), var_break, var_next, IO_TAIL_CALL,
  POS(768, 32),
  POS(768, 28),
  POS(769, 28),
  POS(771, 34),
  POS(770, 27)
};

static TAB_NUM t_lambda_80[] = {
  0, // locals
  0, // parameters
  // for_each write_descriptors
  var_for_each, 3, var_757_1_write_descriptors, lambda_81, lambda_82, IO_TAIL_CALL,
  POS(778, 15)
};

static TAB_NUM t_lambda_81[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 779_3_write_descriptor
  // write! $bytes_written write_descriptor feed
  var_write, 2, LOCAL(2), var_700_0_feed, IO_CALL(1), LOCAL(3),
  // bytes_written+1 -1
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // range &feed bytes_written+1 -1
  var_range, 3, var_700_0_feed, LOCAL(1), minus_num_1, 1, var_700_0_feed,
  // is_empty:
  var_is_empty, 1, var_700_0_feed, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_feed_is_empty, var_next, IO_TAIL_CALL,
  POS(780, 19),
  POS(781, 31),
  POS(781, 19),
  POS(783, 26),
  POS(782, 19)
};

static TAB_NUM t_lambda_feed_is_empty[] = {
  0, // locals
  0, // parameters
  // close! in_fd
  var_close, 1, var_699_0_in_fd, IO_CALL(0),
  // !in_fd undefined
  LET, 1, var_undefined, 1, var_699_0_in_fd,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(784, 23),
  POS(785, 23),
  POS(786, 23)
};

static TAB_NUM t_lambda_82[] = {
  0, // locals
  0, // parameters
  // for_each read_descriptors
  var_for_each, 3, var_756_1_read_descriptors, lambda_83, lambda_89, IO_TAIL_CALL,
  POS(789, 19)
};

static TAB_NUM t_lambda_83[] = {
  1, // locals
  1, // parameters
  var_790_3_read_descriptor,
  // read! $buf read_descriptor 0x100000
  var_read, 2, var_790_3_read_descriptor, num_0x100000, IO_CALL(1), var_791_7_buf,
  // is_empty: # closed from the other side
  var_is_empty, 1, var_791_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_empty, lambda_86, IO_TAIL_CALL,
  POS(791, 23),
  POS(793, 29),
  POS(792, 23)
};

static TAB_NUM t_lambda_buf_is_empty[] = {
  1, // locals
  0, // parameters
  // close! read_descriptor
  var_close, 1, var_790_3_read_descriptor, IO_CALL(0),
  // read_descriptor == out_fd:
  var_std__equal, 2, var_790_3_read_descriptor, var_705_1_out_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_84, lambda_85, IO_TAIL_CALL,
  POS(794, 27),
  POS(796, 29),
  POS(795, 27)
};

static TAB_NUM t_lambda_84[] = {
  0, // locals
  0, // parameters
  // !out_fd undefined
  LET, 1, var_undefined, 1, var_705_1_out_fd,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(797, 31),
  POS(798, 31)
};

static TAB_NUM t_lambda_85[] = {
  0, // locals
  0, // parameters
  // err_fds(read_descriptor) undefined
  var_704_1_err_fds, 2, var_790_3_read_descriptor, var_undefined, 1, var_704_1_err_fds,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(800, 32),
  POS(801, 31)
};

static TAB_NUM t_lambda_86[] = {
  1, // locals
  0, // parameters
  // read_descriptor == out_fd:
  var_std__equal, 2, var_790_3_read_descriptor, var_705_1_out_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_87, lambda_88, IO_TAIL_CALL,
  POS(804, 29),
  POS(803, 27)
};

static TAB_NUM t_lambda_87[] = {
  0, // locals
  0, // parameters
  // append &out buf
  var_append, 2, var_734_1_out, var_791_7_buf, 1, var_734_1_out,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(805, 31),
  POS(806, 31)
};

static TAB_NUM t_lambda_88[] = {
  2, // locals
  0, // parameters
  // err_fds(read_descriptor)) buf
  var_704_1_err_fds, 1, var_790_3_read_descriptor, 1, LOCAL(1),
  // err(err_fds(read_descriptor)) buf
  var_735_1_err, 1, LOCAL(1), 1, LOCAL(2),
  // append &err(err_fds(read_descriptor)) buf
  var_append, 2, LOCAL(2), var_791_7_buf, 1, LOCAL(2),
  // err(err_fds(read_descriptor)) buf
  var_735_1_err, 2, LOCAL(1), LOCAL(2), 1, var_735_1_err,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(808, 43),
  POS(808, 39),
  POS(808, 31),
  POS(808, 39),
  POS(809, 31)
};

static TAB_NUM t_lambda_89[] = {
  2, // locals
  0, // parameters
  // is_empty && out_fd.is_undefined && err_fds.is_empty
  var_is_empty, 1, var_703_1_pids, 1, LOCAL(1),
  // is_empty && out_fd.is_undefined && err_fds.is_empty
  var_std__and, 2, LOCAL(1), lambda_90, 1, LOCAL(2),
  // if!
  var_if, 3, LOCAL(2), lambda_92, var_next, IO_TAIL_CALL,
  POS(812, 30),
  POS(812, 30),
  POS(811, 23)
};

static TAB_NUM t_lambda_90[] = {
  2, // locals
  0, // parameters
  // is_undefined && err_fds.is_empty
  var_is_undefined, 1, var_705_1_out_fd, 1, LOCAL(1),
  // is_undefined && err_fds.is_empty
  var_std__and, 2, LOCAL(1), lambda_91, 1, LOCAL(2),
  // out_fd.is_undefined && err_fds.is_empty
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(812, 49),
  POS(812, 49),
  POS(812, 42)
};

static TAB_NUM t_lambda_91[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_704_1_err_fds, 1, LOCAL(1),
  // err_fds.is_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(812, 73),
  POS(812, 65)
};

static TAB_NUM t_lambda_92[] = {
  0, // locals
  0, // parameters
  //  ret out err
  LET, 3, var_733_1_ret, var_734_1_out, var_735_1_err, TAIL_CALL,
  POS(813, 27)
};

static TAB_NUM t_func_std__which[] = {
  2, // locals
  1, // parameters
  var_818_0_name,
  // environment("PATH") ':')
  var_environment, 1, str_PATH, 1, LOCAL(1),
  // split(environment("PATH") ':')
  var_split, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // for_each split(environment("PATH") ':')
  var_for_each, 3, LOCAL(2), lambda_93, lambda_95, IO_TAIL_CALL,
  POS(820, 18),
  POS(820, 12),
  POS(820, 3)
};

static TAB_NUM t_lambda_93[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 821_3_pathname
  // $filename append(pathname "/" name)
  var_append, 3, LOCAL(1), string_4, var_818_0_name, 1, var_822_1_filename,
  // file_exists! filename $does_exist
  var_file_exists, 1, var_822_1_filename, IO_CALL(1), LOCAL(2),
  // if! does_exist
  var_if, 3, LOCAL(2), lambda_94, var_next, IO_TAIL_CALL,
  POS(822, 7),
  POS(823, 7),
  POS(824, 7)
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  //  filename
  LET, 1, var_822_1_filename, TAIL_CALL,
  POS(825, 11)
};

static TAB_NUM t_lambda_95[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(827, 7)
};

static TAB_NUM t_func_std__find_first_process[] = {
  0, // locals
  1, // parameters
  var_829_27_name,
  // opendir! $dir "/proc"
  var_opendir, 1, str_proc, IO_CALL(1), var_830_10_dir,
  // loop:
  var_loop, 1, lambda_7_loop, IO_TAIL_CALL,
  POS(830, 3),
  POS(831, 3)
};

static TAB_NUM t_lambda_7_loop[] = {
  1, // locals
  0, // parameters
  // readdir! $entry dir
  var_readdir, 1, var_830_10_dir, IO_CALL(1), var_832_10_entry,
  // is_an_error:
  var_is_an_error, 1, var_832_10_entry, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_entry_is_an_error, lambda_96, IO_TAIL_CALL,
  POS(832, 5),
  POS(834, 13),
  POS(833, 5)
};

static TAB_NUM t_lambda_2_entry_is_an_error[] = {
  0, // locals
  0, // parameters
  // closedir! dir
  var_closedir, 1, var_830_10_dir, IO_CALL(0),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(835, 9),
  POS(836, 9)
};

static TAB_NUM t_lambda_96[] = {
  2, // locals
  0, // parameters
  // $proc_num name_of(entry)
  var_name_of, 1, var_832_10_entry, 1, var_838_1_proc_num,
  // many(DIGIT):
  var_many, 1, var_DIGIT, 1, LOCAL(1),
  // proc_num .matches. many(DIGIT):
  var_matches, 2, var_838_1_proc_num, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_97, var_next, IO_TAIL_CALL,
  POS(838, 9),
  POS(840, 30),
  POS(840, 11),
  POS(839, 9)
};

static TAB_NUM t_lambda_97[] = {
  1, // locals
  0, // parameters
  // "/proc/@(proc_num)/cmdline"
  var_std__string, 3, str_proc_2, var_838_1_proc_num, str_cmdline, 1, LOCAL(1),
  // load! $buf "/proc/@(proc_num)/cmdline"
  var_load, 1, LOCAL(1), IO_CALL(1), var_841_7_buf,
  // is_empty
  var_is_empty, 1, var_841_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_98, IO_TAIL_CALL,
  POS(841, 24),
  POS(841, 13),
  POS(843, 19),
  POS(842, 13)
};

static TAB_NUM t_lambda_98[] = {
  2, // locals
  0, // parameters
  // $proc_name buf .truncate_from. '@0;'
  var_truncate_from, 2, var_841_7_buf, chr_0, 1, LOCAL(2),
  // truncate_until &proc_name '/' -1
  var_truncate_until, 3, LOCAL(2), chr_47, minus_num_1, 1, LOCAL(2),
  // proc_name .matches. name
  var_matches, 2, LOCAL(2), var_829_27_name, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), lambda_99, var_next, IO_TAIL_CALL,
  POS(846, 17),
  POS(847, 17),
  POS(849, 19),
  POS(848, 17)
};

static TAB_NUM t_lambda_99[] = {
  1, // locals
  0, // parameters
  // to_integer
  var_to_integer, 1, var_838_1_proc_num, 1, LOCAL(1),
  //  proc_num.to_integer
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(850, 31),
  POS(850, 21)
};

static TAB_NUM t_func_std__find_processes[] = {
  0, // locals
  1, // parameters
  var_854_23_name,
  // opendir! $dir "/proc"
  var_opendir, 1, str_proc, IO_CALL(1), var_855_10_dir,
  // $pids empty_list
  LET, 1, var_empty_list, 1, var_856_1_pids,
  // loop:
  var_loop, 1, lambda_8_loop, IO_TAIL_CALL,
  POS(855, 3),
  POS(856, 3),
  POS(857, 3)
};

static TAB_NUM t_lambda_8_loop[] = {
  1, // locals
  0, // parameters
  // readdir! $entry dir
  var_readdir, 1, var_855_10_dir, IO_CALL(1), var_858_10_entry,
  // is_an_error:
  var_is_an_error, 1, var_858_10_entry, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3_entry_is_an_error, lambda_100, IO_TAIL_CALL,
  POS(858, 5),
  POS(860, 13),
  POS(859, 5)
};

static TAB_NUM t_lambda_3_entry_is_an_error[] = {
  0, // locals
  0, // parameters
  // closedir! dir
  var_closedir, 1, var_855_10_dir, IO_CALL(0),
  // -> pids
  LET, 1, var_856_1_pids, TAIL_CALL,
  POS(861, 9),
  POS(862, 9)
};

static TAB_NUM t_lambda_100[] = {
  2, // locals
  0, // parameters
  // $proc_num name_of(entry)
  var_name_of, 1, var_858_10_entry, 1, var_864_1_proc_num,
  // many(DIGIT):
  var_many, 1, var_DIGIT, 1, LOCAL(1),
  // proc_num .matches. many(DIGIT):
  var_matches, 2, var_864_1_proc_num, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_101, var_next, IO_TAIL_CALL,
  POS(864, 9),
  POS(866, 30),
  POS(866, 11),
  POS(865, 9)
};

static TAB_NUM t_lambda_101[] = {
  1, // locals
  0, // parameters
  // "/proc/@(proc_num)/cmdline"
  var_std__string, 3, str_proc_2, var_864_1_proc_num, str_cmdline, 1, LOCAL(1),
  // load! $buf "/proc/@(proc_num)/cmdline"
  var_load, 1, LOCAL(1), IO_CALL(1), var_867_7_buf,
  // is_empty
  var_is_empty, 1, var_867_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_102, IO_TAIL_CALL,
  POS(867, 24),
  POS(867, 13),
  POS(869, 19),
  POS(868, 13)
};

static TAB_NUM t_lambda_102[] = {
  2, // locals
  0, // parameters
  // $proc_name buf .truncate_from. '@0;'
  var_truncate_from, 2, var_867_7_buf, chr_0, 1, LOCAL(2),
  // truncate_until &proc_name '/' -1
  var_truncate_until, 3, LOCAL(2), chr_47, minus_num_1, 1, LOCAL(2),
  // proc_name .matches. name:
  var_matches, 2, LOCAL(2), var_854_23_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_103, var_next, IO_TAIL_CALL,
  POS(872, 17),
  POS(873, 17),
  POS(875, 19),
  POS(874, 17)
};

static TAB_NUM t_lambda_103[] = {
  1, // locals
  0, // parameters
  // to_integer
  var_to_integer, 1, var_864_1_proc_num, 1, LOCAL(1),
  // push &pids proc_num.to_integer
  var_push, 2, var_856_1_pids, LOCAL(1), 1, var_856_1_pids,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(876, 41),
  POS(876, 21),
  POS(877, 21)
};

static TAB_NUM t_func_std__get_process_name[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 881_25_pid
  // "/proc/@(pid)/cmdline"
  var_std__string, 3, str_proc_2, LOCAL(2), str_cmdline, 1, LOCAL(1),
  // load! $buf "/proc/@(pid)/cmdline"
  var_load, 1, LOCAL(1), IO_CALL(1), var_882_7_buf,
  // is_an_error
  var_is_an_error, 1, var_882_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_104, lambda_105, TAIL_CALL,
  POS(882, 14),
  POS(882, 3),
  POS(884, 9),
  POS(883, 3)
};

static TAB_NUM t_lambda_104[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(885, 7)
};

static TAB_NUM t_lambda_105[] = {
  1, // locals
  0, // parameters
  // buf .truncate_from. '@0;'
  var_truncate_from, 2, var_882_7_buf, chr_0, 1, LOCAL(1),
  //  buf .truncate_from. '@0;'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(886, 8),
  POS(886, 7)
};

static TAB_NUM t_func_std__get_mac_address[] = {
  1, // locals
  0, // parameters
  // get_first_mac_address! $mac
  var_get_first_mac_address, 0, IO_CALL(1), var_889_24_mac,
  // is_defined: map_reduce mac: (chr) -> hex(chr.to_integer 2)
  var_is_defined, 1, var_889_24_mac, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_mac_is_defined, lambda_107, TAIL_CALL,
  POS(889, 3),
  POS(891, 9),
  POS(890, 3)
};

static TAB_NUM t_lambda_mac_is_defined[] = {
  0, // locals
  0, // parameters
  // map_reduce mac: (chr) -> hex(chr.to_integer 2)
  var_map_reduce, 2, var_889_24_mac, lambda_106, TAIL_CALL,
  POS(891, 21)
};

static TAB_NUM t_lambda_106[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 891_33_chr
  // to_integer 2)
  var_to_integer, 1, LOCAL(3), 1, LOCAL(1),
  // hex(chr.to_integer 2)
  var_hex, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // -> hex(chr.to_integer 2)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(891, 54),
  POS(891, 46),
  POS(891, 43)
};

static TAB_NUM t_lambda_107[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(892, 7)
};

static TAB_NUM t_func_std__extern[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 896_0_command
  // .command_of command)
  LET, -1, var_extern_call, var_command_of, LOCAL(2), LOCAL(1),
  // -> extern_call(.command_of command)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(898, 18),
  POS(898, 3)
};

static TAB_NUM t_module_entry[] = {
  0, // locals
  0, // parameters
  // register_type &deserializers std_types::file_descriptor
  var_register_type, 2, var_deserializers, var_std_types__file_descriptor, 1, var_deserializers,
  // register_type &deserializers std_types::process_id
  var_register_type, 2, var_deserializers, var_std_types__process_id, 1, var_deserializers,
  LET, 1, 0, TAIL_CALL,
  POS(593, 1),
  POS(620, 1)
};

static int list_735_9_arguments[] = {
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_file_closed_after_reading}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_read_failed}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__call}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_STRING_8, 1, {.str_8 = "="}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_READ}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_out_fd}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_collect_output}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_err_fd}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_collect_error_output}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_PROCESS_JOINED}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_return_error_code}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_do_collect_output}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_STRING_8, 22, {.str_8 = "CALLING PROCESS FAILED"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__terminate}},
  {FLT_STRING_8, 15, {.str_8 = "file_descriptor"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__file_descriptor___serialize}},
  {FLT_STRING_8, 16, {.str_8 = "file_descriptor "}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__file_descriptor___deserializer_of}},
  {FLT_STRING_8, 10, {.str_8 = "process_id"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__process_id___serialize}},
  {FLT_STRING_8, 11, {.str_8 = "process_id "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__process_id___deserializer_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_extern_call}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__pipe}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_first_arg_is_a_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_first_arg_is_a_file_descriptor}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_build_commands}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_arg_is_a_function}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__pipe_commands}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_feed_or_fd_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_feed_or_fd_is_a_file_descriptor}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_run_pipe}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_store_pid_and_err_fd}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_LIST, 1, {.arguments = list_735_9_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_manage_io}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_rpid_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_feed_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_buf_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_88}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_89}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_90}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_91}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_92}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__which}},
  {FLT_STRING_8, 4, {.str_8 = "PATH"}},
  {FLT_CHARACTER, 0, {.value = 58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_93}},
  {FLT_STRING_8, 1, {.str_8 = "/"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_94}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_95}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__find_first_process}},
  {FLT_STRING_8, 5, {.str_8 = "/proc"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_entry_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_96}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_97}},
  {FLT_STRING_8, 6, {.str_8 = "/proc/"}},
  {FLT_STRING_8, 8, {.str_8 = "/cmdline"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_98}},
  {FLT_CHARACTER, 0, {.value = 0}},
  {FLT_CHARACTER, 0, {.value = 47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_99}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__find_processes}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_entry_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_100}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_101}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_102}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_103}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__get_process_name}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_104}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_105}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__get_mac_address}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_mac_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_106}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_107}},
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
  {var_load, -func_std_types__io___load},
  {var_save, -func_std_types__io___save}
};

static ATTRIBUTE_DEFINITION std_types__stat__attributes[] = {
  {var_is_a_directory, -func_std_types__stat___is_a_directory}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
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
    "79_0_duration\000", NULL
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
    "85_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "86_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "88_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(88, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "91_8_bytes_written\000", NULL
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
    "178_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "179_0_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "181_1_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "183_7_buf\000", NULL
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
    "194_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "195_0_sentinel\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "196_0_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "198_1_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "200_7_buf\000", NULL
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
    "223_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "225_1_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "227_7_buf\000", NULL
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
    "270_0_max_length\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(270, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "272_7_fd\000", NULL
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
    FOT_UNKNOWN, 0, 5,
    "io\000std_types", std_types__io__attributes,
    {.position = POS(305, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(305, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "run\000", NULL,
    {.position = POS(317, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "319_13_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "319_16_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "319_28_max_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "319_39_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "320_7_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "JOB_FAILED\000", NULL,
    {.position = POS(323, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(323, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "start_reading_from\000", NULL,
    {.position = POS(325, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ\000", NULL,
    {.position = POS(330, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value_pair\000std", NULL,
    {.position = POS(330, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CLOSED\000", NULL,
    {.position = POS(331, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ_FAILED\000", NULL,
    {.position = POS(332, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "register_handlers\000", NULL,
    {.position = POS(329, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "335_13_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "335_16_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "336_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "337_1_max_length\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(340, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(340, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deregister_all_handlers\000", NULL,
    {.position = POS(341, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "JOB_COMPLETED\000", NULL,
    {.position = POS(346, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "379_13_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "379_16_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "379_19_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "379_28_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "379_33_context\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "380_7_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(387, 17)}
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
    "430_0_argument\000", NULL
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
    "468_14_do_sort\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_options\000", NULL,
    {.position = POS(467, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "469_1_entries\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(469, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "470_10_dir\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "opendir\000", NULL,
    {.position = POS(470, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "472_10_entry\000", NULL
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
    FOT_INITIALIZED, 0, 0,
    "call\000std", NULL,
    {.const_idx = -func_std__call}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(492, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "493_1_do_return_error_code\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "494_1_do_collect_output\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "495_1_do_collect_error_output\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "496_1_env_vars\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_string\000", NULL,
    {.position = POS(497, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(497, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "environment\000", NULL,
    {.position = POS(498, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(502, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(500, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "505_29_out_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "505_37_err_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_process\000", NULL,
    {.position = POS(505, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "507_1_io\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "join_process\000", NULL,
    {.position = POS(508, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "512_1_out\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "513_1_err\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_events\000", NULL,
    {.position = POS(515, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "518_13_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "518_17_data\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(525, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PROCESS_JOINED\000", NULL,
    {.position = POS(544, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "545_1_ret\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error\000", NULL,
    {.position = POS(560, 21)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "terminate\000std", NULL,
    {.const_idx = -func_std__terminate}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXIT_SUCCESS\000", NULL,
    {.position = POS(566, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exit\000", NULL,
    {.position = POS(566, 3)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_file_descriptor\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(569, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_file_descriptor\000", NULL,
    {.position = POS(569, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(572, 29)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(574, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "577_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "579_1_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(583, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deserializer_of\000", NULL,
    {.position = POS(586, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "integer\000", NULL,
    {.position = POS(591, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "file_descriptor\000", NULL,
    {.position = POS(591, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deserializers\000", NULL,
    {.position = POS(593, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "register_type\000", NULL,
    {.position = POS(593, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_process_id\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_process_id\000", NULL,
    {.position = POS(596, 20)}
  },
  {
    FOT_UNKNOWN, 0, 4,
    "process_id\000std_types", std_types__process_id__attributes,
    {.position = POS(597, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "604_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "606_1_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "process_id\000", NULL,
    {.position = POS(618, 6)}
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
    {.position = POS(629, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "call\000", NULL,
    {.position = POS(629, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pipe\000std", NULL,
    {.const_idx = -func_std__pipe}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "635_0_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "637_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "638_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "639_1_in_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "640_1_feed\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "641_1_commands\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "642_1_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "643_1_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "644_1_first_arg\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(646, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "664_1_arg\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_function\000", NULL,
    {.position = POS(666, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(671, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pipe_commands\000std", NULL,
    {.const_idx = -func_std__pipe_commands}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "684_0_feed_or_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "685_0_commands\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "699_0_in_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "700_0_feed\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "701_0_commands\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "703_1_pids\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "704_1_err_fds\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "705_1_out_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "706_1_env_vars\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "715_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "716_9_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "716_15_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "718_1_pid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "719_1_err_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(721, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(733, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "733_1_ret\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dup\000", NULL,
    {.position = POS(733, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "734_1_out\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "735_1_err\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "746_1_read_descriptor_list\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "keys_of\000", NULL,
    {.position = POS(746, 33)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "756_1_read_descriptors\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "757_1_write_descriptors\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pselect\000", NULL,
    {.position = POS(754, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CHILD_CHANGED_STATE\000", NULL,
    {.position = POS(762, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "765_7_rpid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "765_13_status\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "wait\000", NULL,
    {.position = POS(765, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "790_3_read_descriptor\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "791_7_buf\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "which\000std", NULL,
    {.const_idx = -func_std__which}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "818_0_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split\000", NULL,
    {.position = POS(820, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "822_1_filename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "file_exists\000", NULL,
    {.position = POS(823, 7)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "find_first_process\000std", NULL,
    {.const_idx = -func_std__find_first_process}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "829_27_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "830_10_dir\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "832_10_entry\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "838_1_proc_num\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DIGIT\000", NULL,
    {.position = POS(840, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "many\000", NULL,
    {.position = POS(840, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "matches\000", NULL,
    {.position = POS(840, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "841_7_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(846, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_until\000", NULL,
    {.position = POS(847, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "find_processes\000std", NULL,
    {.const_idx = -func_std__find_processes}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "854_23_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "855_10_dir\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "856_1_pids\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "858_10_entry\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "864_1_proc_num\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "867_7_buf\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "get_process_name\000std", NULL,
    {.const_idx = -func_std__get_process_name}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "882_7_buf\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "get_mac_address\000std", NULL,
    {.const_idx = -func_std__get_mac_address}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "889_24_mac\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_first_mac_address\000", NULL,
    {.position = POS(889, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hex\000", NULL,
    {.position = POS(891, 46)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(891, 21)}
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
  226, // number of constants
  282, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
