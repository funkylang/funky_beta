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
  list_732_9 = -166,
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
  var_77_0_duration, // dynamic
  var_std__less, // extern
  var_std__times, // extern
  var_to_integer, // extern
  var_usleep, // extern
  var_on, // extern
  var_std__write_string_to, // initialized
  var_83_0_fd, // dynamic
  var_84_0_str, // dynamic
  var_86_1_len, // dynamic
  var_length_of, // extern
  var_89_8_bytes_written, // dynamic
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
  var_176_0_fd, // dynamic
  var_177_0_length, // dynamic
  var_179_1_data, // dynamic
  var_181_7_buf, // dynamic
  var_read, // extern
  var_is_empty, // extern
  var_true, // extern
  var_append, // extern
  var_minus, // extern
  var_cond, // extern
  var_std__read_from_until, // initialized
  var_192_0_fd, // dynamic
  var_193_0_sentinel, // dynamic
  var_194_0_nth, // dynamic
  var_196_1_data, // dynamic
  var_198_7_buf, // dynamic
  var_has_suffix, // extern
  var_dec, // extern
  var_std__readln_from, // initialized
  var_read_from_until, // extern
  var_std__read_all_from, // initialized
  var_221_0_fd, // dynamic
  var_223_1_data, // dynamic
  var_225_7_buf, // dynamic
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
  var_268_0_max_length, // dynamic
  var_undefined, // extern
  var_270_7_fd, // dynamic
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
  var_317_13_io, // dynamic
  var_317_16_id, // dynamic
  var_317_28_max_length, // dynamic
  var_317_39_data, // dynamic
  var_318_7_fd, // dynamic
  var_JOB_FAILED, // extern
  var_tuple, // extern
  var_start_reading_from, // extern
  var_READ, // extern
  var_std__key_value_pair, // extern
  var_CLOSED, // extern
  var_READ_FAILED, // extern
  var_register_handlers, // extern
  var_333_13_io, // dynamic
  var_333_16_fd, // dynamic
  var_334_1_buf, // dynamic
  var_335_1_max_length, // dynamic
  var_std__not, // extern
  var_std__and, // extern
  var_deregister_all_handlers, // extern
  var_JOB_COMPLETED, // extern
  var_377_13_io, // dynamic
  var_377_16_id, // dynamic
  var_377_19_filename, // dynamic
  var_377_28_data, // dynamic
  var_377_33_context, // dynamic
  var_378_7_fd, // dynamic
  var_std__equal, // extern
  var_update_if, // extern
  var_WRITE_COMPLETED, // extern
  var_WRITE_FAILED, // extern
  var_std__try, // initialized
  var_std__check, // initialized
  var_428_0_argument, // dynamic
  var_std__file_exists, // initialized
  var_stat, // extern
  var_not, // extern
  var_std__directory, // initialized
  var_SORT, // extern
  var_false, // extern
  var_466_14_do_sort, // dynamic
  var_get_options, // extern
  var_467_1_entries, // dynamic
  var_empty_list, // extern
  var_468_10_dir, // dynamic
  var_opendir, // extern
  var_470_10_entry, // dynamic
  var_readdir, // extern
  var_closedir, // extern
  var_name_of, // extern
  var_sort, // extern
  var_std_types__stat, // extern
  var_is_a_directory, // extern polymorphic
  var_mode_of, // extern
  var_std__call, // initialized
  var_result_count, // extern
  var_490_1_do_return_error_code, // dynamic
  var_491_1_do_collect_output, // dynamic
  var_492_1_do_collect_error_output, // dynamic
  var_493_1_env_vars, // dynamic
  var_to_string, // extern
  var_map, // extern
  var_environment, // extern
  var_std__string, // extern
  var_for_each, // extern
  var_502_29_out_fd, // dynamic
  var_502_37_err_fd, // dynamic
  var_create_process, // extern
  var_504_1_io, // dynamic
  var_join_process, // extern
  var_509_1_out, // dynamic
  var_510_1_err, // dynamic
  var_get_events, // extern
  var_515_13_fd, // dynamic
  var_515_17_data, // dynamic
  var_case, // extern
  var_PROCESS_JOINED, // extern
  var_542_1_ret, // dynamic
  var_error, // extern
  var_std__terminate, // initialized
  var_EXIT_SUCCESS, // extern
  var_exit, // extern
  var_std__is_a_file_descriptor, // attribute
  var_std_types__object, // extern
  var_is_a_file_descriptor, // extern polymorphic
  var_serialization_tag_of, // extern polymorphic
  var_serialize, // extern polymorphic
  var_574_0_indent, // dynamic
  var_576_1_str, // dynamic
  var_tabs_and_spaces, // extern
  var_deserializer_of, // extern polymorphic
  var_integer, // extern
  var_file_descriptor, // extern
  var_deserializers, // extern
  var_register_type, // extern
  var_std__is_a_process_id, // attribute
  var_is_a_process_id, // extern polymorphic
  var_std_types__process_id, // extern
  var_601_0_indent, // dynamic
  var_603_1_str, // dynamic
  var_process_id, // extern
  var_command_of, // attribute
  var_extern_call, // initialized
  var_flatten, // extern
  var_call, // extern
  var_std__pipe, // initialized
  var_632_0_args, // dynamic
  var_634_1_i, // dynamic
  var_635_1_n, // dynamic
  var_636_1_in_fd, // dynamic
  var_637_1_feed, // dynamic
  var_638_1_commands, // dynamic
  var_639_1_head, // dynamic
  var_640_1_arguments, // dynamic
  var_641_1_first_arg, // dynamic
  var_is_a_string, // extern
  var_661_1_arg, // dynamic
  var_is_a_function, // extern
  var_inc, // extern
  var_std__pipe_commands, // initialized
  var_681_0_feed_or_fd, // dynamic
  var_682_0_commands, // dynamic
  var_696_0_in_fd, // dynamic
  var_697_0_feed, // dynamic
  var_698_0_commands, // dynamic
  var_700_1_pids, // dynamic
  var_701_1_err_fds, // dynamic
  var_702_1_out_fd, // dynamic
  var_703_1_env_vars, // dynamic
  var_712_3_idx, // dynamic
  var_713_9_head, // dynamic
  var_713_15_arguments, // dynamic
  var_715_1_pid, // dynamic
  var_716_1_err_fd, // dynamic
  var_is_undefined, // extern
  var_list, // extern
  var_730_1_ret, // dynamic
  var_dup, // extern
  var_731_1_out, // dynamic
  var_732_1_err, // dynamic
  var_743_1_read_descriptor_list, // dynamic
  var_keys_of, // extern
  var_753_1_read_descriptors, // dynamic
  var_754_1_write_descriptors, // dynamic
  var_pselect, // extern
  var_CHILD_CHANGED_STATE, // extern
  var_762_7_rpid, // dynamic
  var_762_13_status, // dynamic
  var_wait, // extern
  var_787_3_read_descriptor, // dynamic
  var_788_7_buf, // dynamic
  var_std__which, // initialized
  var_815_0_name, // dynamic
  var_split, // extern
  var_819_1_filename, // dynamic
  var_file_exists, // extern
  var_std__find_first_process, // initialized
  var_826_27_name, // dynamic
  var_827_10_dir, // dynamic
  var_829_10_entry, // dynamic
  var_835_1_proc_num, // dynamic
  var_DIGIT, // extern
  var_many, // extern
  var_matches, // extern
  var_838_7_buf, // dynamic
  var_truncate_from, // extern
  var_truncate_until, // extern
  var_std__find_processes, // initialized
  var_851_23_name, // dynamic
  var_852_10_dir, // dynamic
  var_853_1_pids, // dynamic
  var_855_10_entry, // dynamic
  var_861_1_proc_num, // dynamic
  var_864_7_buf, // dynamic
  var_std__get_process_name, // initialized
  var_879_7_buf, // dynamic
  var_std__get_mac_address, // initialized
  var_886_24_mac, // dynamic
  var_get_first_mac_address, // extern
  var_hex, // extern
  var_map_reduce, // extern
  var_std__extern, // initialized
  var__END
};


static TAB_NUM t_func_std__sleep[] = {
  1, // locals
  1, // parameters
  var_77_0_duration,
  // 0: usleep! (1'000'000*duration).to_integer
  var_std__less, 2, num_0, var_77_0_duration, 1, LOCAL(1),
  // on duration > 0: usleep! (1'000'000*duration).to_integer
  var_on, 2, LOCAL(1), lambda_1, IO_TAIL_CALL,
  POS(79, 17),
  POS(79, 3)
};

static TAB_NUM t_lambda_1[] = {
  2, // locals
  0, // parameters
  // 1'000'000*duration).to_integer
  var_std__times, 2, num_1000000, var_77_0_duration, 1, LOCAL(1),
  // to_integer
  var_to_integer, 1, LOCAL(1), 1, LOCAL(2),
  // usleep! (1'000'000*duration).to_integer
  var_usleep, 1, LOCAL(2), IO_TAIL_CALL,
  POS(79, 29),
  POS(79, 49),
  POS(79, 20)
};

static TAB_NUM t_func_std__write_string_to[] = {
  0, // locals
  2, // parameters
  var_83_0_fd,
  var_84_0_str,
  // $len length_of(str)
  var_length_of, 1, var_84_0_str, 1, var_86_1_len,
  // loop
  var_loop, 2, lambda_2, var_pass, IO_TAIL_CALL,
  POS(86, 3),
  POS(87, 3)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // write! $bytes_written fd str
  var_write, 2, var_83_0_fd, var_84_0_str, IO_CALL(1), var_89_8_bytes_written,
  // is_an_error
  var_is_an_error, 1, var_89_8_bytes_written, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_89_8_bytes_written, lambda_3, IO_TAIL_CALL,
  POS(89, 7),
  POS(91, 23),
  POS(90, 7)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // bytes_written < len:
  var_std__less, 2, var_89_8_bytes_written, var_86_1_len, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_4, var_break, IO_TAIL_CALL,
  POS(95, 13),
  POS(94, 11)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // bytes_written+1 -1
  var_std__plus, 2, var_89_8_bytes_written, num_1, 1, LOCAL(1),
  // range &str bytes_written+1 -1
  var_range, 3, var_84_0_str, LOCAL(1), minus_num_1, 1, var_84_0_str,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(96, 26),
  POS(96, 15),
  POS(97, 15)
};

static TAB_NUM t_func_std__write_to[] = {
  3, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 103_0_fd
  REST_PARAMETER, LOCAL(3), // 104_0_args
  // create_string(args)
  var_create_string, 1, LOCAL(3), 1, LOCAL(1),
  // write_string_to! fd create_string(args)
  var_write_string_to, 2, LOCAL(2), LOCAL(1), IO_TAIL_CALL,
  POS(106, 23),
  POS(106, 3)
};

static TAB_NUM t_func_std__writeln_to[] = {
  4, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 110_0_fd
  REST_PARAMETER, LOCAL(4), // 111_0_args
  // create_string(args) '@nl;')
  var_create_string, 1, LOCAL(4), 1, LOCAL(1),
  // push(create_string(args) '@nl;')
  var_push, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // write_string_to! fd push(create_string(args) '@nl;')
  var_write_string_to, 2, LOCAL(3), LOCAL(2), IO_TAIL_CALL,
  POS(113, 28),
  POS(113, 23),
  POS(113, 3)
};

static TAB_NUM t_func_std__print_string_to[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 117_0_fd
  LOCAL(3), // 118_0_str
  // to_utf8
  var_to_utf8, 1, LOCAL(3), 1, LOCAL(1),
  // write_string_to! fd str.to_utf8
  var_write_string_to, 2, LOCAL(2), LOCAL(1), IO_TAIL_CALL,
  POS(120, 27),
  POS(120, 3)
};

static TAB_NUM t_func_std_types__file_descriptor___print_to[] = {
  4, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 126_0_fd
  REST_PARAMETER, LOCAL(4), // 127_0_args
  // create_string(args).to_utf8
  var_create_string, 1, LOCAL(4), 1, LOCAL(1),
  // to_utf8
  var_to_utf8, 1, LOCAL(1), 1, LOCAL(2),
  // write_string_to! fd create_string(args).to_utf8
  var_write_string_to, 2, LOCAL(3), LOCAL(2), IO_TAIL_CALL,
  POS(129, 23),
  POS(129, 43),
  POS(129, 3)
};

static TAB_NUM t_func_std__println_to[] = {
  5, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(4), // 133_0_fd
  REST_PARAMETER, LOCAL(5), // 134_0_args
  // create_string(args).to_utf8 '@nl;')
  var_create_string, 1, LOCAL(5), 1, LOCAL(1),
  // to_utf8 '@nl;')
  var_to_utf8, 1, LOCAL(1), 1, LOCAL(2),
  // push(create_string(args).to_utf8 '@nl;')
  var_push, 2, LOCAL(2), chr_10, 1, LOCAL(3),
  // write_string_to! fd push(create_string(args).to_utf8 '@nl;')
  var_write_string_to, 2, LOCAL(4), LOCAL(3), IO_TAIL_CALL,
  POS(136, 28),
  POS(136, 48),
  POS(136, 23),
  POS(136, 3)
};

static TAB_NUM t_func_std__print_string[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 140_0_str
  // to_utf8
  var_to_utf8, 1, LOCAL(2), 1, LOCAL(1),
  // write_string_to! STDOUT_FILENO str.to_utf8
  var_write_string_to, 2, var_STDOUT_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(142, 38),
  POS(142, 3)
};

static TAB_NUM t_func_std__print[] = {
  2, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(2), // 146_0_args
  // create_string(args)
  var_create_string, 1, LOCAL(2), 1, LOCAL(1),
  // print_string! create_string(args)
  var_print_string, 1, LOCAL(1), IO_TAIL_CALL,
  POS(148, 17),
  POS(148, 3)
};

static TAB_NUM t_func_std__println[] = {
  3, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(3), // 152_0_args
  // create_string(args) '@nl;')
  var_create_string, 1, LOCAL(3), 1, LOCAL(1),
  // push(create_string(args) '@nl;')
  var_push, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // print_string! push(create_string(args) '@nl;')
  var_print_string, 1, LOCAL(2), IO_TAIL_CALL,
  POS(154, 22),
  POS(154, 17),
  POS(154, 3)
};

static TAB_NUM t_func_std__eprint_string[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 158_0_str
  // to_utf8
  var_to_utf8, 1, LOCAL(2), 1, LOCAL(1),
  // write_string_to! STDERR_FILENO str.to_utf8
  var_write_string_to, 2, var_STDERR_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(160, 38),
  POS(160, 3)
};

static TAB_NUM t_func_std__eprint[] = {
  2, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(2), // 164_0_args
  // create_string(args)
  var_create_string, 1, LOCAL(2), 1, LOCAL(1),
  // eprint_string! create_string(args)
  var_eprint_string, 1, LOCAL(1), IO_TAIL_CALL,
  POS(166, 18),
  POS(166, 3)
};

static TAB_NUM t_func_std__eprintln[] = {
  3, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(3), // 170_0_args
  // create_string(args) '@nl;')
  var_create_string, 1, LOCAL(3), 1, LOCAL(1),
  // push(create_string(args) '@nl;')
  var_push, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // eprint_string! push(create_string(args) '@nl;')
  var_eprint_string, 1, LOCAL(2), IO_TAIL_CALL,
  POS(172, 23),
  POS(172, 18),
  POS(172, 3)
};

static TAB_NUM t_func_std__read_from[] = {
  0, // locals
  2, // parameters
  var_176_0_fd,
  var_177_0_length,
  // $data ""
  LET, 1, string_1, 1, var_179_1_data,
  // loop:
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(179, 3),
  POS(180, 3)
};

static TAB_NUM t_lambda_loop[] = {
  0, // locals
  0, // parameters
  // read! $buf fd length
  var_read, 2, var_176_0_fd, var_177_0_length, IO_CALL(1), var_181_7_buf,
  // cond
  var_cond, 3, lambda_5, lambda_7, lambda_9, IO_TAIL_CALL,
  POS(181, 5),
  POS(182, 5)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // is_an_error -> buf
  var_is_an_error, 1, var_181_7_buf, 1, LOCAL(1),
  //  buf.is_an_error -> buf
  LET, 2, LOCAL(1), lambda_6, TAIL_CALL,
  POS(183, 14),
  POS(183, 9)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_181_7_buf, TAIL_CALL,
  POS(183, 28)
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // is_empty -> data
  var_is_empty, 1, var_181_7_buf, 1, LOCAL(1),
  //  buf.is_empty -> data
  LET, 2, LOCAL(1), lambda_8, TAIL_CALL,
  POS(184, 14),
  POS(184, 9)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_179_1_data, TAIL_CALL,
  POS(184, 25)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_10, IO_TAIL_CALL,
  POS(185, 9)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // append &data buf
  var_append, 2, var_179_1_data, var_181_7_buf, 1, var_179_1_data,
  // length_of(buf)
  var_length_of, 1, var_181_7_buf, 1, LOCAL(1),
  // minus &length length_of(buf)
  var_minus, 2, var_177_0_length, LOCAL(1), 1, var_177_0_length,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(186, 9),
  POS(187, 23),
  POS(187, 9),
  POS(188, 9)
};

static TAB_NUM t_func_std__read_from_until[] = {
  0, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_192_0_fd,
  MANDATORY_PARAMETER, var_193_0_sentinel,
  num_1, var_194_0_nth,
  // $data ""
  LET, 1, string_1, 1, var_196_1_data,
  // loop:
  var_loop, 1, lambda_2_loop, IO_TAIL_CALL,
  POS(196, 3),
  POS(197, 3)
};

static TAB_NUM t_lambda_2_loop[] = {
  0, // locals
  0, // parameters
  // read! $buf fd 1
  var_read, 2, var_192_0_fd, num_1, IO_CALL(1), var_198_7_buf,
  // cond
  var_cond, 3, lambda_11, lambda_13, lambda_15, IO_TAIL_CALL,
  POS(198, 5),
  POS(199, 5)
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // is_an_error -> buf
  var_is_an_error, 1, var_198_7_buf, 1, LOCAL(1),
  //  buf.is_an_error -> buf
  LET, 2, LOCAL(1), lambda_12, TAIL_CALL,
  POS(200, 14),
  POS(200, 9)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_198_7_buf, TAIL_CALL,
  POS(200, 28)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // is_empty -> data
  var_is_empty, 1, var_198_7_buf, 1, LOCAL(1),
  //  buf.is_empty -> data
  LET, 2, LOCAL(1), lambda_14, TAIL_CALL,
  POS(201, 14),
  POS(201, 9)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_196_1_data, TAIL_CALL,
  POS(201, 25)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_16, IO_TAIL_CALL,
  POS(202, 9)
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // append &data buf
  var_append, 2, var_196_1_data, var_198_7_buf, 1, var_196_1_data,
  // buf .has_suffix. sentinel:
  var_has_suffix, 2, var_198_7_buf, var_193_0_sentinel, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), lambda_17, var_next, IO_TAIL_CALL,
  POS(203, 9),
  POS(205, 11),
  POS(204, 9)
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // dec &nth
  var_dec, 1, var_194_0_nth, 1, var_194_0_nth,
  // 0
  var_std__less, 2, num_0, var_194_0_nth, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), var_next, lambda_18, IO_TAIL_CALL,
  POS(206, 13),
  POS(208, 21),
  POS(207, 13)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_196_1_data, TAIL_CALL,
  POS(210, 17)
};

static TAB_NUM t_func_std__readln_from[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 215_0_fd
  // read_from_until! fd '@nl;'
  var_read_from_until, 2, LOCAL(1), chr_10, IO_TAIL_CALL,
  POS(217, 3)
};

static TAB_NUM t_func_std__read_all_from[] = {
  0, // locals
  1, // parameters
  var_221_0_fd,
  // $data ""
  LET, 1, string_1, 1, var_223_1_data,
  // loop:
  var_loop, 1, lambda_3_loop, IO_TAIL_CALL,
  POS(223, 3),
  POS(224, 3)
};

static TAB_NUM t_lambda_3_loop[] = {
  0, // locals
  0, // parameters
  // read! $buf fd 0x100000
  var_read, 2, var_221_0_fd, num_0x100000, IO_CALL(1), var_225_7_buf,
  // cond
  var_cond, 3, lambda_19, lambda_21, lambda_23, IO_TAIL_CALL,
  POS(225, 5),
  POS(226, 5)
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // is_an_error -> buf
  var_is_an_error, 1, var_225_7_buf, 1, LOCAL(1),
  //  buf.is_an_error -> buf
  LET, 2, LOCAL(1), lambda_20, TAIL_CALL,
  POS(227, 14),
  POS(227, 9)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_225_7_buf, TAIL_CALL,
  POS(227, 28)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // is_empty -> data
  var_is_empty, 1, var_225_7_buf, 1, LOCAL(1),
  //  buf.is_empty -> data
  LET, 2, LOCAL(1), lambda_22, TAIL_CALL,
  POS(228, 14),
  POS(228, 9)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_223_1_data, TAIL_CALL,
  POS(228, 25)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_24, IO_TAIL_CALL,
  POS(229, 9)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  // append &data buf
  var_append, 2, var_223_1_data, var_225_7_buf, 1, var_223_1_data,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(230, 9),
  POS(231, 9)
};

static TAB_NUM t_func_std__get_from_until[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 235_0_fd
  MANDATORY_PARAMETER, LOCAL(3), // 236_0_sentinel
  num_1, LOCAL(4), // 237_0_nth
  // read_from_until! $data fd sentinel nth
  var_read_from_until, 3, LOCAL(2), LOCAL(3), LOCAL(4), IO_CALL(1), LOCAL(5),
  // from_utf8
  var_from_utf8, 1, LOCAL(5), 1, LOCAL(1),
  // -> data.from_utf8
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(239, 3),
  POS(240, 11),
  POS(240, 3)
};

static TAB_NUM t_func_std__getln_from[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 244_0_fd
  // get_from_until! fd '@nl;'
  var_get_from_until, 2, LOCAL(1), chr_10, IO_TAIL_CALL,
  POS(246, 3)
};

static TAB_NUM t_func_std__get_until[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 250_0_sentinel
  // get_from_until! STDIN_FILENO sentinel
  var_get_from_until, 2, var_STDIN_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(252, 3)
};

static TAB_NUM t_func_std__getln[] = {
  0, // locals
  0, // parameters
  // getln_from! STDIN_FILENO
  var_getln_from, 1, var_STDIN_FILENO, IO_TAIL_CALL,
  POS(255, 3)
};

static TAB_NUM t_func_std_types__string___load[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 267_0_filename
  var_undefined, var_268_0_max_length,
  // open! $fd filename "r"
  var_open, 2, LOCAL(2), str_r, IO_CALL(1), var_270_7_fd,
  // check fd
  var_check, 1, var_270_7_fd, 0,
  // is_defined:
  var_is_defined, 1, var_268_0_max_length, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_max_length_is_defined, lambda_25, IO_TAIL_CALL,
  POS(270, 3),
  POS(271, 3),
  POS(273, 16),
  POS(272, 3)
};

static TAB_NUM t_lambda_max_length_is_defined[] = {
  1, // locals
  0, // parameters
  // read_from! $data fd max_length
  var_read_from, 2, var_270_7_fd, var_268_0_max_length, IO_CALL(1), LOCAL(1),
  // close! fd
  var_close, 1, var_270_7_fd, IO_CALL(0),
  // -> data
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(274, 7),
  POS(275, 7),
  POS(276, 7)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  // load! fd
  var_load, 1, var_270_7_fd, IO_TAIL_CALL,
  POS(278, 7)
};

static TAB_NUM t_func_std_types__string___save[] = {
  3, // locals
  2, // parameters
  LOCAL(1), // 282_0_filename
  LOCAL(2), // 283_0_data
  // open! $fh filename "w+"
  var_open, 2, LOCAL(1), str_w, IO_CALL(1), LOCAL(3),
  // check fh
  var_check, 1, LOCAL(3), 0,
  // write_to! fh data
  var_write_to, 2, LOCAL(3), LOCAL(2), IO_CALL(0),
  // close! fh
  var_close, 1, LOCAL(3), IO_TAIL_CALL,
  POS(285, 3),
  POS(286, 3),
  POS(287, 3),
  POS(288, 3)
};

static TAB_NUM t_func_std_types__file_descriptor___load[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 292_0_fd
  // read_all_from! $data fd
  var_read_all_from, 1, LOCAL(1), IO_CALL(1), LOCAL(2),
  // check data
  var_check, 1, LOCAL(2), 0,
  // close! fd
  var_close, 1, LOCAL(1), IO_CALL(0),
  // -> data
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(294, 3),
  POS(295, 3),
  POS(296, 3),
  POS(297, 3)
};

static TAB_NUM t_func_std_types__io___load[] = {
  5, // locals
  -5, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 309_0_io
  MANDATORY_PARAMETER, LOCAL(2), // 310_0_id
  MANDATORY_PARAMETER, LOCAL(3), // 311_0_filename
  var_undefined, LOCAL(4), // 312_0_max_length
  LOCAL(3), LOCAL(5), // 313_0_data
  // run io load_file id filename max_length data
  var_run, 6, LOCAL(1), func_load_file, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), TAIL_CALL,
  POS(315, 3)
};

static TAB_NUM t_func_load_file[] = {
  2, // locals
  5, // parameters
  var_317_13_io,
  var_317_16_id,
  LOCAL(2), // 317_19_filename
  var_317_28_max_length,
  var_317_39_data,
  // open! $fd filename "r"
  var_open, 2, LOCAL(2), str_r, IO_CALL(1), var_318_7_fd,
  // is_an_error
  var_is_an_error, 1, var_318_7_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_26, lambda_27, TAIL_CALL,
  POS(318, 3),
  POS(320, 8),
  POS(319, 3)
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  0, // parameters
  // tuple(JOB_FAILED id fd data)
  var_tuple, 4, var_JOB_FAILED, var_317_16_id, var_318_7_fd, var_317_39_data, 1, LOCAL(1),
  //  io tuple(JOB_FAILED id fd data)
  LET, 2, var_317_13_io, LOCAL(1), TAIL_CALL,
  POS(321, 11),
  POS(321, 7)
};

static TAB_NUM t_lambda_27[] = {
  5, // locals
  0, // parameters
  // start_reading_from &io fd true max_length
  var_start_reading_from, 4, var_317_13_io, var_318_7_fd, var_true, var_317_28_max_length, 1, var_317_13_io,
  // load_buffer_of(fd) ""
  var_load_buffer_of, 1, var_317_13_io, 1, LOCAL(2),
  // load_buffer_of(fd) ""
  LOCAL(2), 2, var_318_7_fd, string_1, 1, LOCAL(2),
  // io.load_buffer_of(fd) ""
  LET, -1, var_317_13_io, var_load_buffer_of, LOCAL(2), var_317_13_io,
  // max_length_of(fd) max_length
  var_max_length_of, 1, var_317_13_io, 1, LOCAL(2),
  // max_length_of(fd) max_length
  LOCAL(2), 2, var_318_7_fd, var_317_28_max_length, 1, LOCAL(2),
  // io.max_length_of(fd) max_length
  LET, -1, var_317_13_io, var_max_length_of, LOCAL(2), var_317_13_io,
  // id_of(fd) id
  var_id_of, 1, var_317_13_io, 1, LOCAL(2),
  // id_of(fd) id
  LOCAL(2), 2, var_318_7_fd, var_317_16_id, 1, LOCAL(2),
  // io.id_of(fd) id
  LET, -1, var_317_13_io, var_id_of, LOCAL(2), var_317_13_io,
  // READ = read_data
  var_std__key_value_pair, 2, var_READ, func_read_data, 1, LOCAL(1),
  // tuple(file_closed_after_reading data)
  var_tuple, 2, func_file_closed_after_reading, var_317_39_data, 1, LOCAL(2),
  // CLOSED = tuple(file_closed_after_reading data)
  var_std__key_value_pair, 2, var_CLOSED, LOCAL(2), 1, LOCAL(3),
  // tuple(read_failed data)
  var_tuple, 2, func_read_failed, var_317_39_data, 1, LOCAL(4),
  // READ_FAILED = tuple(read_failed data)
  var_std__key_value_pair, 2, var_READ_FAILED, LOCAL(4), 1, LOCAL(5),
  // register_handlers &io fd
  var_register_handlers, 5, var_317_13_io, var_318_7_fd, LOCAL(1), LOCAL(3), LOCAL(5), 1, var_317_13_io,
  // -> io undefined
  LET, 2, var_317_13_io, var_undefined, TAIL_CALL,
  POS(323, 7),
  POS(324, 11),
  POS(324, 11),
  POS(324, 8),
  POS(325, 11),
  POS(325, 11),
  POS(325, 8),
  POS(326, 11),
  POS(326, 11),
  POS(326, 8),
  POS(328, 9),
  POS(329, 18),
  POS(329, 9),
  POS(330, 23),
  POS(330, 9),
  POS(327, 7),
  POS(331, 7)
};

static TAB_NUM t_func_read_data[] = {
  3, // locals
  3, // parameters
  var_333_13_io,
  var_333_16_fd,
  LOCAL(3), // 333_19_data
  // load_buffer_of(io)(fd)
  var_load_buffer_of, 1, var_333_13_io, 1, LOCAL(1),
  // $buf load_buffer_of(io)(fd)
  LOCAL(1), 1, var_333_16_fd, 1, var_334_1_buf,
  // max_length_of(io)(fd)
  var_max_length_of, 1, var_333_13_io, 1, LOCAL(1),
  // $max_length max_length_of(io)(fd)
  LOCAL(1), 1, var_333_16_fd, 1, var_335_1_max_length,
  // append &buf data
  var_append, 2, var_334_1_buf, LOCAL(3), 1, var_334_1_buf,
  // is_defined && length_of(buf) >= max_length:
  var_is_defined, 1, var_335_1_max_length, 1, LOCAL(1),
  // is_defined && length_of(buf) >= max_length:
  var_std__and, 2, LOCAL(1), lambda_28, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_29, lambda_30, TAIL_CALL,
  POS(334, 8),
  POS(334, 3),
  POS(335, 15),
  POS(335, 3),
  POS(336, 3),
  POS(338, 16),
  POS(338, 16),
  POS(337, 3)
};

static TAB_NUM t_lambda_28[] = {
  3, // locals
  0, // parameters
  // length_of(buf) >= max_length:
  var_length_of, 1, var_334_1_buf, 1, LOCAL(1),
  // length_of(buf) >= max_length:
  var_std__less, 2, LOCAL(1), var_335_1_max_length, 1, LOCAL(2),
  // length_of(buf) >= max_length:
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // length_of(buf) >= max_length:
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(338, 30),
  POS(338, 30),
  POS(338, 30),
  POS(338, 30)
};

static TAB_NUM t_lambda_29[] = {
  3, // locals
  0, // parameters
  // deregister_all_handlers &io fd
  var_deregister_all_handlers, 2, var_333_13_io, var_333_16_fd, 1, var_333_13_io,
  // id_of(io)(fd)
  var_id_of, 1, var_333_13_io, 1, LOCAL(1),
  // $id id_of(io)(fd)
  LOCAL(1), 1, var_333_16_fd, 1, LOCAL(3),
  // load_buffer_of(fd) undefined
  var_load_buffer_of, 1, var_333_13_io, 1, LOCAL(2),
  // load_buffer_of(fd) undefined
  LOCAL(2), 2, var_333_16_fd, var_undefined, 1, LOCAL(2),
  // io.load_buffer_of(fd) undefined
  LET, -1, var_333_13_io, var_load_buffer_of, LOCAL(2), var_333_13_io,
  // max_length_of(fd) undefined
  var_max_length_of, 1, var_333_13_io, 1, LOCAL(2),
  // max_length_of(fd) undefined
  LOCAL(2), 2, var_333_16_fd, var_undefined, 1, LOCAL(2),
  // io.max_length_of(fd) undefined
  LET, -1, var_333_13_io, var_max_length_of, LOCAL(2), var_333_13_io,
  // id_of(fd) undefined
  var_id_of, 1, var_333_13_io, 1, LOCAL(2),
  // id_of(fd) undefined
  LOCAL(2), 2, var_333_16_fd, var_undefined, 1, LOCAL(2),
  // io.id_of(fd) undefined
  LET, -1, var_333_13_io, var_id_of, LOCAL(2), var_333_13_io,
  // tuple(JOB_COMPLETED id buf)
  var_tuple, 3, var_JOB_COMPLETED, LOCAL(3), var_334_1_buf, 1, LOCAL(1),
  // -> io tuple(JOB_COMPLETED id buf)
  LET, 2, var_333_13_io, LOCAL(1), TAIL_CALL,
  POS(339, 7),
  POS(340, 11),
  POS(340, 7),
  POS(341, 11),
  POS(341, 11),
  POS(341, 8),
  POS(342, 11),
  POS(342, 11),
  POS(342, 8),
  POS(343, 11),
  POS(343, 11),
  POS(343, 8),
  POS(344, 13),
  POS(344, 7)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // load_buffer_of(fd) buf
  var_load_buffer_of, 1, var_333_13_io, 1, LOCAL(2),
  // load_buffer_of(fd) buf
  LOCAL(2), 2, var_333_16_fd, var_334_1_buf, 1, LOCAL(2),
  // io.load_buffer_of(fd) buf
  LET, -1, var_333_13_io, var_load_buffer_of, LOCAL(2), var_333_13_io,
  // -> io undefined
  LET, 2, var_333_13_io, var_undefined, TAIL_CALL,
  POS(346, 11),
  POS(346, 11),
  POS(346, 8),
  POS(347, 7)
};

static TAB_NUM t_func_file_closed_after_reading[] = {
  7, // locals
  4, // parameters
  LOCAL(3), // 349_29_io
  LOCAL(4), // 349_32_fd
  LOCAL(1),
  LOCAL(5), // 349_42_data
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
  POS(350, 3),
  POS(351, 8),
  POS(351, 3),
  POS(352, 7),
  POS(352, 3),
  POS(353, 7),
  POS(353, 7),
  POS(353, 4),
  POS(354, 7),
  POS(354, 7),
  POS(354, 4),
  POS(355, 7),
  POS(355, 7),
  POS(355, 4),
  POS(356, 9),
  POS(356, 3)
};

static TAB_NUM t_func_read_failed[] = {
  6, // locals
  4, // parameters
  LOCAL(3), // 358_15_io
  LOCAL(4), // 358_18_fd
  LOCAL(5), // 358_21_err
  LOCAL(6), // 358_25_data
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
  POS(359, 3),
  POS(360, 7),
  POS(360, 7),
  POS(360, 4),
  POS(361, 7),
  POS(361, 7),
  POS(361, 4),
  POS(362, 7),
  POS(362, 7),
  POS(362, 4),
  POS(363, 9),
  POS(363, 3)
};

static TAB_NUM t_func_std_types__io___save[] = {
  5, // locals
  -5, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 369_0_io
  MANDATORY_PARAMETER, LOCAL(2), // 370_0_id
  MANDATORY_PARAMETER, LOCAL(3), // 371_0_filename
  MANDATORY_PARAMETER, LOCAL(4), // 372_0_data
  uni_NONE, LOCAL(5), // 373_0_context
  // run io save_file id filename data context
  var_run, 6, LOCAL(1), func_save_file, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), TAIL_CALL,
  POS(375, 3)
};

static TAB_NUM t_func_save_file[] = {
  1, // locals
  5, // parameters
  var_377_13_io,
  var_377_16_id,
  var_377_19_filename,
  var_377_28_data,
  var_377_33_context,
  // open! $fd filename "w"
  var_open, 2, var_377_19_filename, str_w_2, IO_CALL(1), var_378_7_fd,
  // is_an_error
  var_is_an_error, 1, var_378_7_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_31, lambda_32, TAIL_CALL,
  POS(378, 3),
  POS(380, 8),
  POS(379, 3)
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // tuple(JOB_FAILED id fd filename)
  var_tuple, 4, var_JOB_FAILED, var_377_16_id, var_378_7_fd, var_377_19_filename, 1, LOCAL(1),
  //  io tuple(JOB_FAILED id fd filename)
  LET, 2, var_377_13_io, LOCAL(1), TAIL_CALL,
  POS(381, 11),
  POS(381, 7)
};

static TAB_NUM t_lambda_32[] = {
  4, // locals
  0, // parameters
  // write &io fd data
  var_write, 3, var_377_13_io, var_378_7_fd, var_377_28_data, 1, var_377_13_io,
  // id_of(fd) id
  var_id_of, 1, var_377_13_io, 1, LOCAL(2),
  // id_of(fd) id
  LOCAL(2), 2, var_378_7_fd, var_377_16_id, 1, LOCAL(2),
  // io.id_of(fd) id
  LET, -1, var_377_13_io, var_id_of, LOCAL(2), var_377_13_io,
  // NONE == context &context -> filename
  var_std__equal, 2, uni_NONE, var_377_33_context, 1, LOCAL(1),
  // update_if NONE == context &context -> filename
  var_update_if, 3, LOCAL(1), var_377_33_context, lambda_33, 1, var_377_33_context,
  // tuple(write_completed context)
  var_tuple, 2, func_write_completed, var_377_33_context, 1, LOCAL(1),
  // WRITE_COMPLETED = tuple(write_completed context)
  var_std__key_value_pair, 2, var_WRITE_COMPLETED, LOCAL(1), 1, LOCAL(2),
  // tuple(write_failed context)
  var_tuple, 2, func_write_failed, var_377_33_context, 1, LOCAL(3),
  // WRITE_FAILED = tuple(write_failed context)
  var_std__key_value_pair, 2, var_WRITE_FAILED, LOCAL(3), 1, LOCAL(4),
  // register_handlers &io fd
  var_register_handlers, 4, var_377_13_io, var_378_7_fd, LOCAL(2), LOCAL(4), 1, var_377_13_io,
  // -> io undefined
  LET, 2, var_377_13_io, var_undefined, TAIL_CALL,
  POS(383, 7),
  POS(384, 11),
  POS(384, 11),
  POS(384, 8),
  POS(385, 17),
  POS(385, 7),
  POS(387, 27),
  POS(387, 9),
  POS(388, 24),
  POS(388, 9),
  POS(386, 7),
  POS(389, 7)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  //  filename
  LET, 1, var_377_19_filename, TAIL_CALL,
  POS(385, 44)
};

static TAB_NUM t_func_write_completed[] = {
  4, // locals
  4, // parameters
  LOCAL(2), // 391_19_io
  LOCAL(3), // 391_22_fd
  LOCAL(1),
  LOCAL(4), // 391_32_context
  // run &io close_file_after_writing fd context
  var_run, 4, LOCAL(2), func_close_file_after_writing, LOCAL(3), LOCAL(4), 1, LOCAL(2),
  // -> io undefined
  LET, 2, LOCAL(2), var_undefined, TAIL_CALL,
  POS(392, 3),
  POS(393, 3)
};

static TAB_NUM t_func_close_file_after_writing[] = {
  6, // locals
  3, // parameters
  LOCAL(3), // 395_28_io
  LOCAL(4), // 395_31_fd
  LOCAL(5), // 395_34_context
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
  POS(396, 3),
  POS(397, 3),
  POS(398, 7),
  POS(398, 3),
  POS(399, 7),
  POS(399, 7),
  POS(399, 4),
  POS(400, 9),
  POS(400, 3)
};

static TAB_NUM t_func_write_failed[] = {
  7, // locals
  4, // parameters
  LOCAL(3), // 402_16_io
  LOCAL(4), // 402_19_fd
  LOCAL(5), // 402_22_err
  LOCAL(6), // 402_26_context
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
  POS(403, 3),
  POS(404, 7),
  POS(404, 3),
  POS(405, 7),
  POS(405, 7),
  POS(405, 4),
  POS(406, 9),
  POS(406, 3)
};

static TAB_NUM t_func_std__try[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 421_0_body
  // body!
  LOCAL(1), 0, IO_CALL(0),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(423, 3),
  POS(424, 3)
};

static TAB_NUM t_func_std__check[] = {
  1, // locals
  1, // parameters
  var_428_0_argument,
  // is_an_error
  var_is_an_error, 1, var_428_0_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, var_pass, TAIL_CALL,
  POS(431, 14),
  POS(430, 3)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  //  argument
  LET, 1, var_428_0_argument, TAIL_CALL,
  POS(432, 7)
};

static TAB_NUM t_func_std__file_exists[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 446_0_filename
  // stat! $info filename
  var_stat, 1, LOCAL(3), IO_CALL(1), LOCAL(4),
  // is_an_error)
  var_is_an_error, 1, LOCAL(4), 1, LOCAL(1),
  // not(info.is_an_error)
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // -> not(info.is_an_error)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(448, 3),
  POS(449, 15),
  POS(449, 6),
  POS(449, 3)
};

static TAB_NUM t_func_std__directory[] = {
  3, // locals
  -2, // parameters
  REST_PARAMETER, LOCAL(2), // 462_0_options
  MANDATORY_PARAMETER, LOCAL(3), // 463_0_pathname
  // SORT = false $do_sort
  var_std__key_value_pair, 2, var_SORT, var_false, 1, LOCAL(1),
  // get_options options
  var_get_options, 2, LOCAL(2), LOCAL(1), 1, var_466_14_do_sort,
  // $entries empty_list
  LET, 1, var_empty_list, 1, var_467_1_entries,
  // opendir! $dir pathname
  var_opendir, 1, LOCAL(3), IO_CALL(1), var_468_10_dir,
  // loop:
  var_loop, 1, lambda_4_loop, IO_TAIL_CALL,
  POS(466, 5),
  POS(465, 3),
  POS(467, 3),
  POS(468, 3),
  POS(469, 3)
};

static TAB_NUM t_lambda_4_loop[] = {
  1, // locals
  0, // parameters
  // readdir! $entry dir
  var_readdir, 1, var_468_10_dir, IO_CALL(1), var_470_10_entry,
  // is_an_error:
  var_is_an_error, 1, var_470_10_entry, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_entry_is_an_error, lambda_37, IO_TAIL_CALL,
  POS(470, 5),
  POS(472, 13),
  POS(471, 5)
};

static TAB_NUM t_lambda_entry_is_an_error[] = {
  0, // locals
  0, // parameters
  // closedir! dir
  var_closedir, 1, var_468_10_dir, IO_CALL(0),
  // if
  var_if, 3, var_466_14_do_sort, lambda_do_sort, lambda_36, TAIL_CALL,
  POS(473, 9),
  POS(474, 9)
};

static TAB_NUM t_lambda_do_sort[] = {
  0, // locals
  0, // parameters
  // sort entries: (left right) -> name_of(left) < name_of(right)
  var_sort, 2, var_467_1_entries, lambda_35, TAIL_CALL,
  POS(476, 13)
};

static TAB_NUM t_lambda_35[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 476_15_left
  LOCAL(5), // 476_20_right
  // name_of(left) < name_of(right)
  var_name_of, 1, LOCAL(4), 1, LOCAL(1),
  // name_of(right)
  var_name_of, 1, LOCAL(5), 1, LOCAL(2),
  // name_of(left) < name_of(right)
  var_std__less, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // -> name_of(left) < name_of(right)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(476, 43),
  POS(476, 59),
  POS(476, 43),
  POS(476, 40)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  entries
  LET, 1, var_467_1_entries, TAIL_CALL,
  POS(477, 13)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  // push &entries entry
  var_push, 2, var_467_1_entries, var_470_10_entry, 1, var_467_1_entries,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(479, 9),
  POS(480, 9)
};

static TAB_NUM t_func_std_types__stat___is_a_directory[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 482_34_self
  // mode_of(self)(1) == 'd'
  var_mode_of, 1, LOCAL(4), 1, LOCAL(1),
  // mode_of(self)(1) == 'd'
  LOCAL(1), 1, num_1, 1, LOCAL(2),
  // mode_of(self)(1) == 'd'
  var_std__equal, 2, LOCAL(2), chr_100, 1, LOCAL(3),
  // -> mode_of(self)(1) == 'd'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(483, 6),
  POS(483, 6),
  POS(483, 6),
  POS(483, 3)
};

static TAB_NUM t_func_std__call[] = {
  6, // locals
  2, // parameters
  LOCAL(3), // 487_0_cmd
  LOCAL(4), // 488_0_args
  // result_count() >= 1)
  var_result_count, 0, 1, LOCAL(1),
  // result_count() >= 1)
  var_std__less, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // $do_return_error_code (result_count() >= 1)
  var_std__not, 1, LOCAL(2), 1, var_490_1_do_return_error_code,
  // result_count() >= 2)
  var_result_count, 0, 1, LOCAL(1),
  // result_count() >= 2)
  var_std__less, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // $do_collect_output (result_count() >= 2)
  var_std__not, 1, LOCAL(2), 1, var_491_1_do_collect_output,
  // result_count() == 3)
  var_result_count, 0, 1, LOCAL(1),
  // $do_collect_error_output (result_count() == 3)
  var_std__equal, 2, LOCAL(1), num_3, 1, var_492_1_do_collect_error_output,
  // $env_vars undefined
  LET, 1, var_undefined, 1, var_493_1_env_vars,
  // map &args to_string
  var_map, 2, LOCAL(4), var_to_string, 1, LOCAL(4),
  // is_defined &env_vars:
  var_is_defined, 1, var_environment, 1, LOCAL(1),
  // update_if environment.is_defined &env_vars:
  var_update_if, 3, LOCAL(1), var_493_1_env_vars, lambda_38, 1, var_493_1_env_vars,
  // create_process! $pid $in_fd $out_fd $err_fd cmd args env_vars
  var_create_process, 3, LOCAL(3), LOCAL(4), var_493_1_env_vars, IO_CALL(4), LOCAL(5), LOCAL(6), var_502_29_out_fd, var_502_37_err_fd,
  // close! in_fd
  var_close, 1, LOCAL(6), IO_CALL(0),
  // $io std_types::io
  LET, 1, var_std_types__io, 1, var_504_1_io,
  // join_process &io pid
  var_join_process, 2, var_504_1_io, LOCAL(5), 1, var_504_1_io,
  // start_reading_from &io out_fd
  var_start_reading_from, 2, var_504_1_io, var_502_29_out_fd, 1, var_504_1_io,
  // start_reading_from &io err_fd
  var_start_reading_from, 2, var_504_1_io, var_502_37_err_fd, 1, var_504_1_io,
  // $out ""
  LET, 1, string_1, 1, var_509_1_out,
  // $err ""
  LET, 1, string_1, 1, var_510_1_err,
  // loop:
  var_loop, 1, lambda_5_loop, IO_TAIL_CALL,
  POS(490, 26),
  POS(490, 26),
  POS(490, 3),
  POS(491, 23),
  POS(491, 23),
  POS(491, 3),
  POS(492, 29),
  POS(492, 3),
  POS(493, 3),
  POS(494, 3),
  POS(495, 25),
  POS(495, 3),
  POS(502, 3),
  POS(503, 3),
  POS(504, 3),
  POS(505, 3),
  POS(506, 3),
  POS(507, 3),
  POS(509, 3),
  POS(510, 3),
  POS(511, 3)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  // !env_vars empty_list
  LET, 1, var_empty_list, 1, var_493_1_env_vars,
  // for_each environment
  var_for_each, 3, var_environment, lambda_39, lambda_40, TAIL_CALL,
  POS(496, 5),
  POS(497, 5)
};

static TAB_NUM t_lambda_39[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 498_3_key
  LOCAL(3), // 498_7_value
  // "@(key)=@(value)"
  var_std__string, 3, LOCAL(2), string_2, LOCAL(3), 1, LOCAL(1),
  // push &env_vars "@(key)=@(value)"
  var_push, 2, var_493_1_env_vars, LOCAL(1), 1, var_493_1_env_vars,
  // next
  var_next, 0, TAIL_CALL,
  POS(499, 24),
  POS(499, 9),
  POS(500, 9)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  //  env_vars
  LET, 1, var_493_1_env_vars, TAIL_CALL,
  POS(501, 9)
};

static TAB_NUM t_lambda_5_loop[] = {
  1, // locals
  0, // parameters
  // get_events! &io $events
  var_get_events, 1, var_504_1_io, IO_CALL(2), var_504_1_io, LOCAL(1),
  // for_each events
  var_for_each, 3, LOCAL(1), lambda_41, var_next, IO_TAIL_CALL,
  POS(512, 5),
  POS(513, 5)
};

static TAB_NUM t_lambda_41[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 514_3_event
  // event $type $fd $data
  LOCAL(1), 0, 3, LOCAL(2), var_515_13_fd, var_515_17_data,
  // case type
  var_case, 6, LOCAL(2), var_READ, lambda_READ, var_PROCESS_JOINED, lambda_PROCESS_JOINED, lambda_51, IO_TAIL_CALL,
  POS(515, 9),
  POS(516, 9)
};

static TAB_NUM t_lambda_READ[] = {
  1, // locals
  0, // parameters
  // data == ""
  var_std__equal, 2, var_515_17_data, string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_42, IO_TAIL_CALL,
  POS(519, 15),
  POS(518, 13)
};

static TAB_NUM t_lambda_42[] = {
  0, // locals
  0, // parameters
  // case fd
  var_case, 6, var_515_13_fd, var_502_29_out_fd, lambda_out_fd, var_502_37_err_fd, lambda_err_fd, lambda_45, IO_TAIL_CALL,
  POS(522, 17)
};

static TAB_NUM t_lambda_out_fd[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_491_1_do_collect_output, lambda_do_collect_output, lambda_43, IO_TAIL_CALL,
  POS(524, 21)
};

static TAB_NUM t_lambda_do_collect_output[] = {
  0, // locals
  0, // parameters
  // append &out data
  var_append, 2, var_509_1_out, var_515_17_data, 1, var_509_1_out,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(526, 25),
  POS(527, 25)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  // write_to! STDOUT_FILENO data
  var_write_to, 2, var_STDOUT_FILENO, var_515_17_data, IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(529, 25),
  POS(530, 25)
};

static TAB_NUM t_lambda_err_fd[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_492_1_do_collect_error_output, lambda_do_collect_error_output, lambda_44, IO_TAIL_CALL,
  POS(532, 21)
};

static TAB_NUM t_lambda_do_collect_error_output[] = {
  0, // locals
  0, // parameters
  // append &err data
  var_append, 2, var_510_1_err, var_515_17_data, 1, var_510_1_err,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(534, 25),
  POS(535, 25)
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  // write_to! STDERR_FILENO data
  var_write_to, 2, var_STDERR_FILENO, var_515_17_data, IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(537, 25),
  POS(538, 25)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(540, 21)
};

static TAB_NUM t_lambda_PROCESS_JOINED[] = {
  0, // locals
  0, // parameters
  // $ret data
  LET, 1, var_515_17_data, 1, var_542_1_ret,
  // if
  var_if, 3, var_490_1_do_return_error_code, lambda_do_return_error_code, lambda_49, TAIL_CALL,
  POS(542, 13),
  POS(543, 13)
};

static TAB_NUM t_lambda_do_return_error_code[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_491_1_do_collect_output, lambda_2_do_collect_output, lambda_48, TAIL_CALL,
  POS(545, 17)
};

static TAB_NUM t_lambda_2_do_collect_output[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_492_1_do_collect_error_output, lambda_46, lambda_47, TAIL_CALL,
  POS(547, 21)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  //  ret out err
  LET, 3, var_542_1_ret, var_509_1_out, var_510_1_err, TAIL_CALL,
  POS(549, 25)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  //  ret out
  LET, 2, var_542_1_ret, var_509_1_out, TAIL_CALL,
  POS(550, 25)
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  //  ret
  LET, 1, var_542_1_ret, TAIL_CALL,
  POS(551, 21)
};

static TAB_NUM t_lambda_49[] = {
  1, // locals
  0, // parameters
  // ret == 0
  var_std__equal, 2, var_542_1_ret, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_pass, lambda_50, TAIL_CALL,
  POS(554, 19),
  POS(553, 17)
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  // error "CALLING PROCESS FAILED" ret
  var_error, 2, str_CALLING_PROCESS, var_542_1_ret, TAIL_CALL,
  POS(557, 21)
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(559, 13)
};

static TAB_NUM t_func_std__terminate[] = {
  0, // locals
  0, // parameters
  // exit! EXIT_SUCCESS
  var_exit, 1, var_EXIT_SUCCESS, IO_TAIL_CALL,
  POS(563, 3)
};

static TAB_NUM t_func_std_types__file_descriptor___serialize[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 573_0_self
  var_undefined, var_574_0_indent,
  // to_integer)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(1),
  // $str "
  var_std__string, 3, str_file_descriptor_2, LOCAL(1), string_3, 1, var_576_1_str,
  // is_defined
  var_is_defined, 1, var_574_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_52, lambda_53, TAIL_CALL,
  POS(577, 28),
  POS(576, 3),
  POS(579, 12),
  POS(578, 3)
};

static TAB_NUM t_lambda_52[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_574_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_576_1_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(580, 15),
  POS(580, 8),
  POS(580, 7)
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_576_1_str, TAIL_CALL,
  POS(581, 7)
};

static TAB_NUM t_func_std_types__file_descriptor___deserializer_of[] = {
  3, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(3), // 586_0_argument
  // integer(argument))
  var_integer, 1, LOCAL(3), 1, LOCAL(1),
  // file_descriptor(integer(argument))
  var_file_descriptor, 1, LOCAL(1), 1, LOCAL(2),
  // -> file_descriptor(integer(argument))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(588, 22),
  POS(588, 6),
  POS(588, 3)
};

static TAB_NUM t_func_std_types__process_id___serialize[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 600_0_self
  var_undefined, var_601_0_indent,
  // to_integer)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(1),
  // $str "
  var_std__string, 3, str_process_id_2, LOCAL(1), string_3, 1, var_603_1_str,
  // is_defined
  var_is_defined, 1, var_601_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_54, lambda_55, TAIL_CALL,
  POS(604, 23),
  POS(603, 3),
  POS(606, 12),
  POS(605, 3)
};

static TAB_NUM t_lambda_54[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_601_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_603_1_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(607, 15),
  POS(607, 8),
  POS(607, 7)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_603_1_str, TAIL_CALL,
  POS(608, 7)
};

static TAB_NUM t_func_std_types__process_id___deserializer_of[] = {
  3, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(3), // 613_0_argument
  // integer(argument))
  var_integer, 1, LOCAL(3), 1, LOCAL(1),
  // process_id(integer(argument))
  var_process_id, 1, LOCAL(1), 1, LOCAL(2),
  // -> process_id(integer(argument))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(615, 17),
  POS(615, 6),
  POS(615, 3)
};

static TAB_NUM t_func_extern_call[] = {
  5, // locals
  -2, // parameters
  MYSELF_PARAMETER, LOCAL(4), // 623_0_myself
  REST_PARAMETER, LOCAL(5), // 624_0_arguments
  // command_of(myself) map(flatten(arguments) to_string)
  var_command_of, 1, LOCAL(4), 1, LOCAL(1),
  // flatten(arguments) to_string)
  var_flatten, 1, LOCAL(5), 1, LOCAL(2),
  // map(flatten(arguments) to_string)
  var_map, 2, LOCAL(2), var_to_string, 1, LOCAL(3),
  // call! command_of(myself) map(flatten(arguments) to_string)
  var_call, 2, LOCAL(1), LOCAL(3), IO_TAIL_CALL,
  POS(626, 9),
  POS(626, 32),
  POS(626, 28),
  POS(626, 3)
};

static TAB_NUM t_func_std__pipe[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, var_632_0_args,
  // $i 1
  LET, 1, num_1, 1, var_634_1_i,
  // $n length_of(args)
  var_length_of, 1, var_632_0_args, 1, var_635_1_n,
  // $in_fd undefined
  LET, 1, var_undefined, 1, var_636_1_in_fd,
  // $feed undefined
  LET, 1, var_undefined, 1, var_637_1_feed,
  // $commands empty_list
  LET, 1, var_empty_list, 1, var_638_1_commands,
  // $head undefined
  LET, 1, var_undefined, 1, var_639_1_head,
  // $arguments undefined
  LET, 1, var_undefined, 1, var_640_1_arguments,
  // $first_arg args(1)
  var_632_0_args, 1, num_1, 1, var_641_1_first_arg,
  // is_a_string:
  var_is_a_string, 1, var_641_1_first_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_first_arg_is_a_string, lambda_56, IO_TAIL_CALL,
  POS(634, 3),
  POS(635, 3),
  POS(636, 3),
  POS(637, 3),
  POS(638, 3),
  POS(639, 3),
  POS(640, 3),
  POS(641, 3),
  POS(643, 15),
  POS(642, 3)
};

static TAB_NUM t_lambda_first_arg_is_a_string[] = {
  0, // locals
  0, // parameters
  // !feed first_arg
  LET, 1, var_641_1_first_arg, 1, var_637_1_feed,
  // !i 2
  LET, 1, num_2, 1, var_634_1_i,
  // build_commands!
  func_build_commands, 0, IO_TAIL_CALL,
  POS(644, 7),
  POS(645, 7),
  POS(646, 7)
};

static TAB_NUM t_lambda_56[] = {
  1, // locals
  0, // parameters
  // is_a_file_descriptor:
  var_is_a_file_descriptor, 1, var_641_1_first_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_first_arg_is_a_file_descriptor, func_build_commands, IO_TAIL_CALL,
  POS(649, 19),
  POS(648, 7)
};

static TAB_NUM t_lambda_first_arg_is_a_file_descriptor[] = {
  0, // locals
  0, // parameters
  // !in_fd first_arg
  LET, 1, var_641_1_first_arg, 1, var_636_1_in_fd,
  // !i 2
  LET, 1, num_2, 1, var_634_1_i,
  // build_commands!
  func_build_commands, 0, IO_TAIL_CALL,
  POS(650, 11),
  POS(651, 11),
  POS(652, 11)
};

static TAB_NUM t_func_build_commands[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_57, lambda_61, IO_TAIL_CALL,
  POS(656, 5)
};

static TAB_NUM t_lambda_57[] = {
  1, // locals
  0, // parameters
  // n break
  var_std__less, 2, var_635_1_n, var_634_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_58, IO_TAIL_CALL,
  POS(659, 15),
  POS(658, 9)
};

static TAB_NUM t_lambda_58[] = {
  1, // locals
  0, // parameters
  // $arg args(i)
  var_632_0_args, 1, var_634_1_i, 1, var_661_1_arg,
  // is_a_function:
  var_is_a_function, 1, var_661_1_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_arg_is_a_function, lambda_60, IO_TAIL_CALL,
  POS(661, 13),
  POS(663, 19),
  POS(662, 13)
};

static TAB_NUM t_lambda_arg_is_a_function[] = {
  1, // locals
  0, // parameters
  // is_defined &commands:
  var_is_defined, 1, var_639_1_head, 1, LOCAL(1),
  // update_if head.is_defined &commands:
  var_update_if, 3, LOCAL(1), var_638_1_commands, lambda_59, 1, var_638_1_commands,
  // !head command_of(arg)
  var_command_of, 1, var_661_1_arg, 1, var_639_1_head,
  // !arguments empty_list
  LET, 1, var_empty_list, 1, var_640_1_arguments,
  // inc &i
  var_inc, 1, var_634_1_i, 1, var_634_1_i,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(664, 32),
  POS(664, 17),
  POS(666, 17),
  POS(667, 17),
  POS(668, 17),
  POS(669, 17)
};

static TAB_NUM t_lambda_59[] = {
  3, // locals
  0, // parameters
  // flatten(arguments) to_string))
  var_flatten, 1, var_640_1_arguments, 1, LOCAL(1),
  // map(flatten(arguments) to_string))
  var_map, 2, LOCAL(1), var_to_string, 1, LOCAL(2),
  // tuple(head map(flatten(arguments) to_string))
  var_tuple, 2, var_639_1_head, LOCAL(2), 1, LOCAL(3),
  // push commands tuple(head map(flatten(arguments) to_string))
  var_push, 2, var_638_1_commands, LOCAL(3), TAIL_CALL,
  POS(665, 48),
  POS(665, 44),
  POS(665, 33),
  POS(665, 19)
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  0, // parameters
  // push &arguments arg
  var_push, 2, var_640_1_arguments, var_661_1_arg, 1, var_640_1_arguments,
  // inc &i
  var_inc, 1, var_634_1_i, 1, var_634_1_i,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(671, 17),
  POS(672, 17),
  POS(673, 17)
};

static TAB_NUM t_lambda_61[] = {
  1, // locals
  0, // parameters
  // is_defined &commands:
  var_is_defined, 1, var_639_1_head, 1, LOCAL(1),
  // update_if head.is_defined &commands:
  var_update_if, 3, LOCAL(1), var_638_1_commands, lambda_62, 1, var_638_1_commands,
  // run_pipe! in_fd feed commands
  func_run_pipe, 3, var_636_1_in_fd, var_637_1_feed, var_638_1_commands, IO_TAIL_CALL,
  POS(675, 24),
  POS(675, 9),
  POS(677, 9)
};

static TAB_NUM t_lambda_62[] = {
  3, // locals
  0, // parameters
  // flatten(arguments) to_string))
  var_flatten, 1, var_640_1_arguments, 1, LOCAL(1),
  // map(flatten(arguments) to_string))
  var_map, 2, LOCAL(1), var_to_string, 1, LOCAL(2),
  // tuple(head map(flatten(arguments) to_string))
  var_tuple, 2, var_639_1_head, LOCAL(2), 1, LOCAL(3),
  // push commands tuple(head map(flatten(arguments) to_string))
  var_push, 2, var_638_1_commands, LOCAL(3), TAIL_CALL,
  POS(676, 40),
  POS(676, 36),
  POS(676, 25),
  POS(676, 11)
};

static TAB_NUM t_func_std__pipe_commands[] = {
  1, // locals
  -2, // parameters
  var_undefined, var_681_0_feed_or_fd,
  MANDATORY_PARAMETER, var_682_0_commands,
  // is_defined:
  var_is_defined, 1, var_681_0_feed_or_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_feed_or_fd_is_defined, lambda_64, IO_TAIL_CALL,
  POS(685, 16),
  POS(684, 3)
};

static TAB_NUM t_lambda_feed_or_fd_is_defined[] = {
  1, // locals
  0, // parameters
  // is_a_file_descriptor:
  var_is_a_file_descriptor, 1, var_681_0_feed_or_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_feed_or_fd_is_a_file_descriptor, lambda_63, IO_TAIL_CALL,
  POS(687, 20),
  POS(686, 7)
};

static TAB_NUM t_lambda_feed_or_fd_is_a_file_descriptor[] = {
  0, // locals
  0, // parameters
  // run_pipe! feed_or_fd undefined commands
  func_run_pipe, 3, var_681_0_feed_or_fd, var_undefined, var_682_0_commands, IO_TAIL_CALL,
  POS(688, 11)
};

static TAB_NUM t_lambda_63[] = {
  0, // locals
  0, // parameters
  // run_pipe! undefined feed_or_fd commands
  func_run_pipe, 3, var_undefined, var_681_0_feed_or_fd, var_682_0_commands, IO_TAIL_CALL,
  POS(690, 11)
};

static TAB_NUM t_lambda_64[] = {
  0, // locals
  0, // parameters
  // run_pipe! undefined undefined commands
  func_run_pipe, 3, var_undefined, var_undefined, var_682_0_commands, IO_TAIL_CALL,
  POS(692, 7)
};

static TAB_NUM t_func_run_pipe[] = {
  1, // locals
  3, // parameters
  var_696_0_in_fd,
  var_697_0_feed,
  var_698_0_commands,
  // $pids empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_700_1_pids,
  // $err_fds empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_701_1_err_fds,
  // $out_fd in_fd
  LET, 1, var_696_0_in_fd, 1, var_702_1_out_fd,
  // $env_vars undefined
  LET, 1, var_undefined, 1, var_703_1_env_vars,
  // is_defined &env_vars:
  var_is_defined, 1, var_environment, 1, LOCAL(1),
  // update_if environment.is_defined &env_vars:
  var_update_if, 3, LOCAL(1), var_703_1_env_vars, lambda_65, 1, var_703_1_env_vars,
  // for_each commands
  var_for_each, 3, var_698_0_commands, lambda_68, lambda_72, IO_TAIL_CALL,
  POS(700, 3),
  POS(701, 3),
  POS(702, 3),
  POS(703, 3),
  POS(704, 25),
  POS(704, 3),
  POS(711, 3)
};

static TAB_NUM t_lambda_65[] = {
  0, // locals
  0, // parameters
  // !env_vars empty_list
  LET, 1, var_empty_list, 1, var_703_1_env_vars,
  // for_each environment
  var_for_each, 3, var_environment, lambda_66, lambda_67, TAIL_CALL,
  POS(705, 5),
  POS(706, 5)
};

static TAB_NUM t_lambda_66[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 707_3_key
  LOCAL(3), // 707_7_value
  // "@(key)=@(value)"
  var_std__string, 3, LOCAL(2), string_2, LOCAL(3), 1, LOCAL(1),
  // push &env_vars "@(key)=@(value)"
  var_push, 2, var_703_1_env_vars, LOCAL(1), 1, var_703_1_env_vars,
  // next
  var_next, 0, TAIL_CALL,
  POS(708, 24),
  POS(708, 9),
  POS(709, 9)
};

static TAB_NUM t_lambda_67[] = {
  0, // locals
  0, // parameters
  //  env_vars
  LET, 1, var_703_1_env_vars, TAIL_CALL,
  POS(710, 9)
};

static TAB_NUM t_lambda_68[] = {
  3, // locals
  2, // parameters
  var_712_3_idx,
  LOCAL(3), // 712_7_command
  // command $head $arguments
  LOCAL(3), 0, 2, var_713_9_head, var_713_15_arguments,
  // map &arguments to_utf8
  var_map, 2, var_713_15_arguments, var_to_utf8, 1, var_713_15_arguments,
  // $pid undefined
  LET, 1, var_undefined, 1, var_715_1_pid,
  // $err_fd undefined
  LET, 1, var_undefined, 1, var_716_1_err_fd,
  // idx == 1 && in_fd.is_undefined:
  var_std__equal, 2, var_712_3_idx, num_1, 1, LOCAL(1),
  // idx == 1 && in_fd.is_undefined:
  var_std__and, 2, LOCAL(1), lambda_69, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_70, lambda_71, IO_TAIL_CALL,
  POS(713, 7),
  POS(714, 7),
  POS(715, 7),
  POS(716, 7),
  POS(718, 9),
  POS(718, 9),
  POS(717, 7)
};

static TAB_NUM t_lambda_69[] = {
  1, // locals
  0, // parameters
  // is_undefined:
  var_is_undefined, 1, var_696_0_in_fd, 1, LOCAL(1),
  // in_fd.is_undefined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(718, 27),
  POS(718, 21)
};

static TAB_NUM t_lambda_70[] = {
  0, // locals
  0, // parameters
  // create_process! !pid !in_fd !out_fd !err_fd head arguments env_vars
  var_create_process, 3, var_713_9_head, var_713_15_arguments, var_703_1_env_vars, IO_CALL(4), var_715_1_pid, var_696_0_in_fd, var_702_1_out_fd, var_716_1_err_fd,
  // store_pid_and_err_fd!
  func_store_pid_and_err_fd, 0, IO_TAIL_CALL,
  POS(719, 11),
  POS(720, 11)
};

static TAB_NUM t_lambda_71[] = {
  0, // locals
  0, // parameters
  // create_process! !pid !out_fd !err_fd head arguments env_vars out_fd
  var_create_process, 4, var_713_9_head, var_713_15_arguments, var_703_1_env_vars, var_702_1_out_fd, IO_CALL(3), var_715_1_pid, var_702_1_out_fd, var_716_1_err_fd,
  // store_pid_and_err_fd!
  func_store_pid_and_err_fd, 0, IO_TAIL_CALL,
  POS(722, 11),
  POS(723, 11)
};

static TAB_NUM t_func_store_pid_and_err_fd[] = {
  0, // locals
  0, // parameters
  // pids(pid) idx
  var_700_1_pids, 2, var_715_1_pid, var_712_3_idx, 1, var_700_1_pids,
  // err_fds(err_fd) idx
  var_701_1_err_fds, 2, var_716_1_err_fd, var_712_3_idx, 1, var_701_1_err_fds,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(726, 10),
  POS(727, 10),
  POS(728, 9)
};

static TAB_NUM t_lambda_72[] = {
  2, // locals
  0, // parameters
  // list(undefined) length_of(commands))
  var_list, 1, var_undefined, 1, LOCAL(1),
  // length_of(commands))
  var_length_of, 1, var_698_0_commands, 1, LOCAL(2),
  // $ret dup(list(undefined) length_of(commands))
  var_dup, 2, LOCAL(1), LOCAL(2), 1, var_730_1_ret,
  // $out ""
  LET, 1, string_1, 1, var_731_1_out,
  // length_of(commands))
  var_length_of, 1, var_698_0_commands, 1, LOCAL(2),
  // $err dup(list("") length_of(commands))
  var_dup, 2, list_732_9, LOCAL(2), 1, var_732_1_err,
  // is_defined
  var_is_defined, 1, var_697_0_feed, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_manage_io, lambda_73, IO_TAIL_CALL,
  POS(730, 16),
  POS(730, 32),
  POS(730, 7),
  POS(731, 7),
  POS(732, 25),
  POS(732, 7),
  POS(734, 14),
  POS(733, 7)
};

static TAB_NUM t_lambda_73[] = {
  0, // locals
  0, // parameters
  // close! in_fd
  var_close, 1, var_696_0_in_fd, IO_CALL(0),
  // !in_fd undefined
  LET, 1, var_undefined, 1, var_696_0_in_fd,
  // manage_io!
  func_manage_io, 0, IO_TAIL_CALL,
  POS(737, 11),
  POS(738, 11),
  POS(739, 11)
};

static TAB_NUM t_func_manage_io[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_6_loop, IO_TAIL_CALL,
  POS(742, 9)
};

static TAB_NUM t_lambda_6_loop[] = {
  3, // locals
  0, // parameters
  // $read_descriptor_list keys_of(err_fds)
  var_keys_of, 1, var_701_1_err_fds, 1, var_743_1_read_descriptor_list,
  // is_defined
  var_is_defined, 1, var_696_0_in_fd, 1, LOCAL(1),
  // $write_descriptor_list
  var_if, 3, LOCAL(1), lambda_74, lambda_75, 1, LOCAL(2),
  // is_defined &read_descriptor_list:
  var_is_defined, 1, var_702_1_out_fd, 1, LOCAL(1),
  // update_if out_fd.is_defined &read_descriptor_list:
  var_update_if, 3, LOCAL(1), var_743_1_read_descriptor_list, lambda_76, 1, var_743_1_read_descriptor_list,
  // pselect!
  var_pselect, 3, var_743_1_read_descriptor_list, LOCAL(2), var_empty_list, IO_CALL(4), LOCAL(3), var_753_1_read_descriptors, var_754_1_write_descriptors, LOCAL(1),
  // for_each signals
  var_for_each, 3, LOCAL(3), lambda_77, lambda_80, IO_TAIL_CALL,
  POS(743, 11),
  POS(746, 21),
  POS(744, 11),
  POS(749, 28),
  POS(749, 11),
  POS(751, 11),
  POS(756, 11)
};

static TAB_NUM t_lambda_74[] = {
  1, // locals
  0, // parameters
  // list(in_fd)
  var_list, 1, var_696_0_in_fd, 1, LOCAL(1),
  //  list(in_fd)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(747, 18),
  POS(747, 17)
};

static TAB_NUM t_lambda_75[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(748, 17)
};

static TAB_NUM t_lambda_76[] = {
  0, // locals
  0, // parameters
  // push read_descriptor_list out_fd
  var_push, 2, var_743_1_read_descriptor_list, var_702_1_out_fd, TAIL_CALL,
  POS(750, 13)
};

static TAB_NUM t_lambda_77[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 757_3_signal
  // signal == CHILD_CHANGED_STATE:
  var_std__equal, 2, LOCAL(2), var_CHILD_CHANGED_STATE, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_78, var_next, IO_TAIL_CALL,
  POS(759, 17),
  POS(758, 15)
};

static TAB_NUM t_lambda_78[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_79, var_next, IO_TAIL_CALL,
  POS(760, 19)
};

static TAB_NUM t_lambda_79[] = {
  1, // locals
  0, // parameters
  // wait! $rpid $status
  var_wait, 0, IO_CALL(2), var_762_7_rpid, var_762_13_status,
  // is_defined:
  var_is_defined, 1, var_762_7_rpid, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_rpid_is_defined, var_break, IO_TAIL_CALL,
  POS(762, 23),
  POS(764, 30),
  POS(763, 23)
};

static TAB_NUM t_lambda_rpid_is_defined[] = {
  2, // locals
  0, // parameters
  // pids(rpid)) status
  var_700_1_pids, 1, var_762_7_rpid, 1, LOCAL(2),
  // ret(pids(rpid)) status
  var_730_1_ret, 2, LOCAL(2), var_762_13_status, 1, var_730_1_ret,
  // pids(rpid) undefined
  var_700_1_pids, 2, var_762_7_rpid, var_undefined, 1, var_700_1_pids,
  // is_empty
  var_is_empty, 1, var_700_1_pids, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), var_break, var_next, IO_TAIL_CALL,
  POS(765, 32),
  POS(765, 28),
  POS(766, 28),
  POS(768, 34),
  POS(767, 27)
};

static TAB_NUM t_lambda_80[] = {
  0, // locals
  0, // parameters
  // for_each write_descriptors
  var_for_each, 3, var_754_1_write_descriptors, lambda_81, lambda_82, IO_TAIL_CALL,
  POS(775, 15)
};

static TAB_NUM t_lambda_81[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 776_3_write_descriptor
  // write! $bytes_written write_descriptor feed
  var_write, 2, LOCAL(2), var_697_0_feed, IO_CALL(1), LOCAL(3),
  // bytes_written+1 -1
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // range &feed bytes_written+1 -1
  var_range, 3, var_697_0_feed, LOCAL(1), minus_num_1, 1, var_697_0_feed,
  // is_empty:
  var_is_empty, 1, var_697_0_feed, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_feed_is_empty, var_next, IO_TAIL_CALL,
  POS(777, 19),
  POS(778, 31),
  POS(778, 19),
  POS(780, 26),
  POS(779, 19)
};

static TAB_NUM t_lambda_feed_is_empty[] = {
  0, // locals
  0, // parameters
  // close! in_fd
  var_close, 1, var_696_0_in_fd, IO_CALL(0),
  // !in_fd undefined
  LET, 1, var_undefined, 1, var_696_0_in_fd,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(781, 23),
  POS(782, 23),
  POS(783, 23)
};

static TAB_NUM t_lambda_82[] = {
  0, // locals
  0, // parameters
  // for_each read_descriptors
  var_for_each, 3, var_753_1_read_descriptors, lambda_83, lambda_89, IO_TAIL_CALL,
  POS(786, 19)
};

static TAB_NUM t_lambda_83[] = {
  1, // locals
  1, // parameters
  var_787_3_read_descriptor,
  // read! $buf read_descriptor 0x100000
  var_read, 2, var_787_3_read_descriptor, num_0x100000, IO_CALL(1), var_788_7_buf,
  // is_empty: # closed from the other side
  var_is_empty, 1, var_788_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_empty, lambda_86, IO_TAIL_CALL,
  POS(788, 23),
  POS(790, 29),
  POS(789, 23)
};

static TAB_NUM t_lambda_buf_is_empty[] = {
  1, // locals
  0, // parameters
  // close! read_descriptor
  var_close, 1, var_787_3_read_descriptor, IO_CALL(0),
  // read_descriptor == out_fd:
  var_std__equal, 2, var_787_3_read_descriptor, var_702_1_out_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_84, lambda_85, IO_TAIL_CALL,
  POS(791, 27),
  POS(793, 29),
  POS(792, 27)
};

static TAB_NUM t_lambda_84[] = {
  0, // locals
  0, // parameters
  // !out_fd undefined
  LET, 1, var_undefined, 1, var_702_1_out_fd,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(794, 31),
  POS(795, 31)
};

static TAB_NUM t_lambda_85[] = {
  0, // locals
  0, // parameters
  // err_fds(read_descriptor) undefined
  var_701_1_err_fds, 2, var_787_3_read_descriptor, var_undefined, 1, var_701_1_err_fds,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(797, 32),
  POS(798, 31)
};

static TAB_NUM t_lambda_86[] = {
  1, // locals
  0, // parameters
  // read_descriptor == out_fd:
  var_std__equal, 2, var_787_3_read_descriptor, var_702_1_out_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_87, lambda_88, IO_TAIL_CALL,
  POS(801, 29),
  POS(800, 27)
};

static TAB_NUM t_lambda_87[] = {
  0, // locals
  0, // parameters
  // append &out buf
  var_append, 2, var_731_1_out, var_788_7_buf, 1, var_731_1_out,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(802, 31),
  POS(803, 31)
};

static TAB_NUM t_lambda_88[] = {
  2, // locals
  0, // parameters
  // err_fds(read_descriptor)) buf
  var_701_1_err_fds, 1, var_787_3_read_descriptor, 1, LOCAL(1),
  // err(err_fds(read_descriptor)) buf
  var_732_1_err, 1, LOCAL(1), 1, LOCAL(2),
  // append &err(err_fds(read_descriptor)) buf
  var_append, 2, LOCAL(2), var_788_7_buf, 1, LOCAL(2),
  // err(err_fds(read_descriptor)) buf
  var_732_1_err, 2, LOCAL(1), LOCAL(2), 1, var_732_1_err,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(805, 43),
  POS(805, 39),
  POS(805, 31),
  POS(805, 39),
  POS(806, 31)
};

static TAB_NUM t_lambda_89[] = {
  2, // locals
  0, // parameters
  // is_empty && out_fd.is_undefined && err_fds.is_empty
  var_is_empty, 1, var_700_1_pids, 1, LOCAL(1),
  // is_empty && out_fd.is_undefined && err_fds.is_empty
  var_std__and, 2, LOCAL(1), lambda_90, 1, LOCAL(2),
  // if!
  var_if, 3, LOCAL(2), lambda_92, var_next, IO_TAIL_CALL,
  POS(809, 30),
  POS(809, 30),
  POS(808, 23)
};

static TAB_NUM t_lambda_90[] = {
  2, // locals
  0, // parameters
  // is_undefined && err_fds.is_empty
  var_is_undefined, 1, var_702_1_out_fd, 1, LOCAL(1),
  // is_undefined && err_fds.is_empty
  var_std__and, 2, LOCAL(1), lambda_91, 1, LOCAL(2),
  // out_fd.is_undefined && err_fds.is_empty
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(809, 49),
  POS(809, 49),
  POS(809, 42)
};

static TAB_NUM t_lambda_91[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_701_1_err_fds, 1, LOCAL(1),
  // err_fds.is_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(809, 73),
  POS(809, 65)
};

static TAB_NUM t_lambda_92[] = {
  0, // locals
  0, // parameters
  //  ret out err
  LET, 3, var_730_1_ret, var_731_1_out, var_732_1_err, TAIL_CALL,
  POS(810, 27)
};

static TAB_NUM t_func_std__which[] = {
  2, // locals
  1, // parameters
  var_815_0_name,
  // environment("PATH") ':')
  var_environment, 1, str_PATH, 1, LOCAL(1),
  // split(environment("PATH") ':')
  var_split, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // for_each split(environment("PATH") ':')
  var_for_each, 3, LOCAL(2), lambda_93, lambda_95, IO_TAIL_CALL,
  POS(817, 18),
  POS(817, 12),
  POS(817, 3)
};

static TAB_NUM t_lambda_93[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 818_3_pathname
  // $filename append(pathname "/" name)
  var_append, 3, LOCAL(1), string_4, var_815_0_name, 1, var_819_1_filename,
  // file_exists! filename $does_exist
  var_file_exists, 1, var_819_1_filename, IO_CALL(1), LOCAL(2),
  // if! does_exist
  var_if, 3, LOCAL(2), lambda_94, var_next, IO_TAIL_CALL,
  POS(819, 7),
  POS(820, 7),
  POS(821, 7)
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  //  filename
  LET, 1, var_819_1_filename, TAIL_CALL,
  POS(822, 11)
};

static TAB_NUM t_lambda_95[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(824, 7)
};

static TAB_NUM t_func_std__find_first_process[] = {
  0, // locals
  1, // parameters
  var_826_27_name,
  // opendir! $dir "/proc"
  var_opendir, 1, str_proc, IO_CALL(1), var_827_10_dir,
  // loop:
  var_loop, 1, lambda_7_loop, IO_TAIL_CALL,
  POS(827, 3),
  POS(828, 3)
};

static TAB_NUM t_lambda_7_loop[] = {
  1, // locals
  0, // parameters
  // readdir! $entry dir
  var_readdir, 1, var_827_10_dir, IO_CALL(1), var_829_10_entry,
  // is_an_error:
  var_is_an_error, 1, var_829_10_entry, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_entry_is_an_error, lambda_96, IO_TAIL_CALL,
  POS(829, 5),
  POS(831, 13),
  POS(830, 5)
};

static TAB_NUM t_lambda_2_entry_is_an_error[] = {
  0, // locals
  0, // parameters
  // closedir! dir
  var_closedir, 1, var_827_10_dir, IO_CALL(0),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(832, 9),
  POS(833, 9)
};

static TAB_NUM t_lambda_96[] = {
  2, // locals
  0, // parameters
  // $proc_num name_of(entry)
  var_name_of, 1, var_829_10_entry, 1, var_835_1_proc_num,
  // many(DIGIT):
  var_many, 1, var_DIGIT, 1, LOCAL(1),
  // proc_num .matches. many(DIGIT):
  var_matches, 2, var_835_1_proc_num, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_97, var_next, IO_TAIL_CALL,
  POS(835, 9),
  POS(837, 30),
  POS(837, 11),
  POS(836, 9)
};

static TAB_NUM t_lambda_97[] = {
  1, // locals
  0, // parameters
  // "/proc/@(proc_num)/cmdline"
  var_std__string, 3, str_proc_2, var_835_1_proc_num, str_cmdline, 1, LOCAL(1),
  // load! $buf "/proc/@(proc_num)/cmdline"
  var_load, 1, LOCAL(1), IO_CALL(1), var_838_7_buf,
  // is_empty
  var_is_empty, 1, var_838_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_98, IO_TAIL_CALL,
  POS(838, 24),
  POS(838, 13),
  POS(840, 19),
  POS(839, 13)
};

static TAB_NUM t_lambda_98[] = {
  2, // locals
  0, // parameters
  // $proc_name buf .truncate_from. '@0;'
  var_truncate_from, 2, var_838_7_buf, chr_0, 1, LOCAL(2),
  // truncate_until &proc_name '/' -1
  var_truncate_until, 3, LOCAL(2), chr_47, minus_num_1, 1, LOCAL(2),
  // proc_name .matches. name
  var_matches, 2, LOCAL(2), var_826_27_name, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), lambda_99, var_next, IO_TAIL_CALL,
  POS(843, 17),
  POS(844, 17),
  POS(846, 19),
  POS(845, 17)
};

static TAB_NUM t_lambda_99[] = {
  1, // locals
  0, // parameters
  // to_integer
  var_to_integer, 1, var_835_1_proc_num, 1, LOCAL(1),
  //  proc_num.to_integer
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(847, 31),
  POS(847, 21)
};

static TAB_NUM t_func_std__find_processes[] = {
  0, // locals
  1, // parameters
  var_851_23_name,
  // opendir! $dir "/proc"
  var_opendir, 1, str_proc, IO_CALL(1), var_852_10_dir,
  // $pids empty_list
  LET, 1, var_empty_list, 1, var_853_1_pids,
  // loop:
  var_loop, 1, lambda_8_loop, IO_TAIL_CALL,
  POS(852, 3),
  POS(853, 3),
  POS(854, 3)
};

static TAB_NUM t_lambda_8_loop[] = {
  1, // locals
  0, // parameters
  // readdir! $entry dir
  var_readdir, 1, var_852_10_dir, IO_CALL(1), var_855_10_entry,
  // is_an_error:
  var_is_an_error, 1, var_855_10_entry, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3_entry_is_an_error, lambda_100, IO_TAIL_CALL,
  POS(855, 5),
  POS(857, 13),
  POS(856, 5)
};

static TAB_NUM t_lambda_3_entry_is_an_error[] = {
  0, // locals
  0, // parameters
  // closedir! dir
  var_closedir, 1, var_852_10_dir, IO_CALL(0),
  // -> pids
  LET, 1, var_853_1_pids, TAIL_CALL,
  POS(858, 9),
  POS(859, 9)
};

static TAB_NUM t_lambda_100[] = {
  2, // locals
  0, // parameters
  // $proc_num name_of(entry)
  var_name_of, 1, var_855_10_entry, 1, var_861_1_proc_num,
  // many(DIGIT):
  var_many, 1, var_DIGIT, 1, LOCAL(1),
  // proc_num .matches. many(DIGIT):
  var_matches, 2, var_861_1_proc_num, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_101, var_next, IO_TAIL_CALL,
  POS(861, 9),
  POS(863, 30),
  POS(863, 11),
  POS(862, 9)
};

static TAB_NUM t_lambda_101[] = {
  1, // locals
  0, // parameters
  // "/proc/@(proc_num)/cmdline"
  var_std__string, 3, str_proc_2, var_861_1_proc_num, str_cmdline, 1, LOCAL(1),
  // load! $buf "/proc/@(proc_num)/cmdline"
  var_load, 1, LOCAL(1), IO_CALL(1), var_864_7_buf,
  // is_empty
  var_is_empty, 1, var_864_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_102, IO_TAIL_CALL,
  POS(864, 24),
  POS(864, 13),
  POS(866, 19),
  POS(865, 13)
};

static TAB_NUM t_lambda_102[] = {
  2, // locals
  0, // parameters
  // $proc_name buf .truncate_from. '@0;'
  var_truncate_from, 2, var_864_7_buf, chr_0, 1, LOCAL(2),
  // truncate_until &proc_name '/' -1
  var_truncate_until, 3, LOCAL(2), chr_47, minus_num_1, 1, LOCAL(2),
  // proc_name .matches. name:
  var_matches, 2, LOCAL(2), var_851_23_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_103, var_next, IO_TAIL_CALL,
  POS(869, 17),
  POS(870, 17),
  POS(872, 19),
  POS(871, 17)
};

static TAB_NUM t_lambda_103[] = {
  1, // locals
  0, // parameters
  // to_integer
  var_to_integer, 1, var_861_1_proc_num, 1, LOCAL(1),
  // push &pids proc_num.to_integer
  var_push, 2, var_853_1_pids, LOCAL(1), 1, var_853_1_pids,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(873, 41),
  POS(873, 21),
  POS(874, 21)
};

static TAB_NUM t_func_std__get_process_name[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 878_25_pid
  // "/proc/@(pid)/cmdline"
  var_std__string, 3, str_proc_2, LOCAL(2), str_cmdline, 1, LOCAL(1),
  // load! $buf "/proc/@(pid)/cmdline"
  var_load, 1, LOCAL(1), IO_CALL(1), var_879_7_buf,
  // is_an_error
  var_is_an_error, 1, var_879_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_104, lambda_105, TAIL_CALL,
  POS(879, 14),
  POS(879, 3),
  POS(881, 9),
  POS(880, 3)
};

static TAB_NUM t_lambda_104[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(882, 7)
};

static TAB_NUM t_lambda_105[] = {
  1, // locals
  0, // parameters
  // buf .truncate_from. '@0;'
  var_truncate_from, 2, var_879_7_buf, chr_0, 1, LOCAL(1),
  //  buf .truncate_from. '@0;'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(883, 8),
  POS(883, 7)
};

static TAB_NUM t_func_std__get_mac_address[] = {
  1, // locals
  0, // parameters
  // get_first_mac_address! $mac
  var_get_first_mac_address, 0, IO_CALL(1), var_886_24_mac,
  // is_defined: map_reduce mac: (chr) -> hex(chr.to_integer 2)
  var_is_defined, 1, var_886_24_mac, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_mac_is_defined, lambda_107, TAIL_CALL,
  POS(886, 3),
  POS(888, 9),
  POS(887, 3)
};

static TAB_NUM t_lambda_mac_is_defined[] = {
  0, // locals
  0, // parameters
  // map_reduce mac: (chr) -> hex(chr.to_integer 2)
  var_map_reduce, 2, var_886_24_mac, lambda_106, TAIL_CALL,
  POS(888, 21)
};

static TAB_NUM t_lambda_106[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 888_33_chr
  // to_integer 2)
  var_to_integer, 1, LOCAL(3), 1, LOCAL(1),
  // hex(chr.to_integer 2)
  var_hex, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // -> hex(chr.to_integer 2)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(888, 54),
  POS(888, 46),
  POS(888, 43)
};

static TAB_NUM t_lambda_107[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(889, 7)
};

static TAB_NUM t_func_std__extern[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 893_0_command
  // .command_of command)
  LET, -1, var_extern_call, var_command_of, LOCAL(2), LOCAL(1),
  // -> extern_call(.command_of command)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(895, 18),
  POS(895, 3)
};

static TAB_NUM t_module_entry[] = {
  0, // locals
  0, // parameters
  // register_type &deserializers std_types::file_descriptor
  var_register_type, 2, var_deserializers, var_std_types__file_descriptor, 1, var_deserializers,
  // register_type &deserializers std_types::process_id
  var_register_type, 2, var_deserializers, var_std_types__process_id, 1, var_deserializers,
  LET, 1, 0, TAIL_CALL,
  POS(590, 1),
  POS(617, 1)
};

static int list_732_9_arguments[] = {
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
  {FLT_LIST, 1, {.arguments = list_732_9_arguments}},
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
    {.position = POS(65, 1)}
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
    "77_0_duration\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(79, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(79, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(79, 49)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "usleep\000", NULL,
    {.position = POS(79, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(79, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "write_string_to\000std", NULL,
    {.const_idx = -func_std__write_string_to}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "83_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "84_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "86_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(86, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "89_8_bytes_written\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write\000", NULL,
    {.position = POS(89, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(91, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(96, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(96, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(97, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(98, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(94, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(99, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(87, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "write_to\000std", NULL,
    {.const_idx = -func_std__write_to}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(106, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write_string_to\000", NULL,
    {.position = POS(106, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "writeln_to\000std", NULL,
    {.const_idx = -func_std__writeln_to}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(113, 23)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "print_string_to\000std", NULL,
    {.const_idx = -func_std__print_string_to}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(120, 27)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "print_to\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 6,
    "file_descriptor\000std_types", std_types__file_descriptor__attributes,
    {.position = POS(124, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "print_to\000", NULL,
    {.position = POS(124, 29)}
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
    {.position = POS(142, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "print\000std", NULL,
    {.const_idx = -func_std__print}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print_string\000", NULL,
    {.position = POS(148, 3)}
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
    {.position = POS(160, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "eprint\000std", NULL,
    {.const_idx = -func_std__eprint}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprint_string\000", NULL,
    {.position = POS(166, 3)}
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
    "176_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "177_0_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "179_1_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "181_7_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read\000", NULL,
    {.position = POS(181, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(184, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(185, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(186, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000", NULL,
    {.position = POS(187, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(182, 5)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "read_from_until\000std", NULL,
    {.const_idx = -func_std__read_from_until}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "192_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "193_0_sentinel\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "194_0_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "196_1_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "198_7_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(205, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(206, 13)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "readln_from\000std", NULL,
    {.const_idx = -func_std__readln_from}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read_from_until\000", NULL,
    {.position = POS(217, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "read_all_from\000std", NULL,
    {.const_idx = -func_std__read_all_from}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "221_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "223_1_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "225_7_buf\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "get_from_until\000std", NULL,
    {.const_idx = -func_std__get_from_until}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_utf8\000", NULL,
    {.position = POS(240, 11)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "getln_from\000std", NULL,
    {.const_idx = -func_std__getln_from}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_from_until\000", NULL,
    {.position = POS(246, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "get_until\000std", NULL,
    {.const_idx = -func_std__get_until}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDIN_FILENO\000", NULL,
    {.position = POS(252, 19)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "getln\000std", NULL,
    {.const_idx = -func_std__getln}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "getln_from\000", NULL,
    {.position = POS(255, 3)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "string\000std_types", std_types__string__attributes,
    {.position = POS(257, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "load\000", NULL,
    {.position = POS(257, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "268_0_max_length\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(268, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "270_7_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open\000", NULL,
    {.position = POS(270, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "check\000", NULL,
    {.position = POS(271, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(273, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read_from\000", NULL,
    {.position = POS(274, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "close\000", NULL,
    {.position = POS(275, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "save\000", NULL,
    {.position = POS(280, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write_to\000", NULL,
    {.position = POS(287, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read_all_from\000", NULL,
    {.position = POS(294, 3)}
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
    {.position = POS(303, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(303, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "run\000", NULL,
    {.position = POS(315, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "317_13_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "317_16_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "317_28_max_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "317_39_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "318_7_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "JOB_FAILED\000", NULL,
    {.position = POS(321, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(321, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "start_reading_from\000", NULL,
    {.position = POS(323, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ\000", NULL,
    {.position = POS(328, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value_pair\000std", NULL,
    {.position = POS(328, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CLOSED\000", NULL,
    {.position = POS(329, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ_FAILED\000", NULL,
    {.position = POS(330, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "register_handlers\000", NULL,
    {.position = POS(327, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "333_13_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "333_16_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "334_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "335_1_max_length\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(338, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(338, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deregister_all_handlers\000", NULL,
    {.position = POS(339, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "JOB_COMPLETED\000", NULL,
    {.position = POS(344, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "377_13_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "377_16_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "377_19_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "377_28_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "377_33_context\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "378_7_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(385, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(385, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_COMPLETED\000", NULL,
    {.position = POS(387, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_FAILED\000", NULL,
    {.position = POS(388, 9)}
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
    "428_0_argument\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "file_exists\000std", NULL,
    {.const_idx = -func_std__file_exists}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "stat\000", NULL,
    {.position = POS(448, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(449, 6)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "directory\000std", NULL,
    {.const_idx = -func_std__directory}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SORT\000", NULL,
    {.position = POS(466, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(466, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "466_14_do_sort\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_options\000", NULL,
    {.position = POS(465, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "467_1_entries\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(467, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "468_10_dir\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "opendir\000", NULL,
    {.position = POS(468, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "470_10_entry\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "readdir\000", NULL,
    {.position = POS(470, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "closedir\000", NULL,
    {.position = POS(473, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "name_of\000", NULL,
    {.position = POS(476, 43)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sort\000", NULL,
    {.position = POS(476, 13)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "stat\000std_types", std_types__stat__attributes,
    {.position = POS(482, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_directory\000", NULL,
    {.position = POS(482, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mode_of\000", NULL,
    {.position = POS(483, 6)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "call\000std", NULL,
    {.const_idx = -func_std__call}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(490, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "490_1_do_return_error_code\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "491_1_do_collect_output\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "492_1_do_collect_error_output\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "493_1_env_vars\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_string\000", NULL,
    {.position = POS(494, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(494, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "environment\000", NULL,
    {.position = POS(495, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(499, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(497, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "502_29_out_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "502_37_err_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_process\000", NULL,
    {.position = POS(502, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "504_1_io\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "join_process\000", NULL,
    {.position = POS(505, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "509_1_out\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "510_1_err\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_events\000", NULL,
    {.position = POS(512, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "515_13_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "515_17_data\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(522, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PROCESS_JOINED\000", NULL,
    {.position = POS(541, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "542_1_ret\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error\000", NULL,
    {.position = POS(557, 21)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "terminate\000std", NULL,
    {.const_idx = -func_std__terminate}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXIT_SUCCESS\000", NULL,
    {.position = POS(563, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exit\000", NULL,
    {.position = POS(563, 3)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_file_descriptor\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(566, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_file_descriptor\000", NULL,
    {.position = POS(566, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(569, 29)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(571, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "574_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "576_1_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(580, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deserializer_of\000", NULL,
    {.position = POS(583, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "integer\000", NULL,
    {.position = POS(588, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "file_descriptor\000", NULL,
    {.position = POS(588, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deserializers\000", NULL,
    {.position = POS(590, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "register_type\000", NULL,
    {.position = POS(590, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_process_id\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_process_id\000", NULL,
    {.position = POS(593, 20)}
  },
  {
    FOT_UNKNOWN, 0, 4,
    "process_id\000std_types", std_types__process_id__attributes,
    {.position = POS(594, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "601_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "603_1_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "process_id\000", NULL,
    {.position = POS(615, 6)}
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
    {.position = POS(626, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "call\000", NULL,
    {.position = POS(626, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pipe\000std", NULL,
    {.const_idx = -func_std__pipe}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "632_0_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "634_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "635_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "636_1_in_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "637_1_feed\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "638_1_commands\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "639_1_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "640_1_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "641_1_first_arg\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(643, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "661_1_arg\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_function\000", NULL,
    {.position = POS(663, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(668, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pipe_commands\000std", NULL,
    {.const_idx = -func_std__pipe_commands}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "681_0_feed_or_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "682_0_commands\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "696_0_in_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "697_0_feed\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "698_0_commands\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "700_1_pids\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "701_1_err_fds\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "702_1_out_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "703_1_env_vars\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "712_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "713_9_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "713_15_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "715_1_pid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "716_1_err_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(718, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(730, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "730_1_ret\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dup\000", NULL,
    {.position = POS(730, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "731_1_out\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "732_1_err\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "743_1_read_descriptor_list\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "keys_of\000", NULL,
    {.position = POS(743, 33)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "753_1_read_descriptors\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "754_1_write_descriptors\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pselect\000", NULL,
    {.position = POS(751, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CHILD_CHANGED_STATE\000", NULL,
    {.position = POS(759, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "762_7_rpid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "762_13_status\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "wait\000", NULL,
    {.position = POS(762, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "787_3_read_descriptor\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "788_7_buf\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "which\000std", NULL,
    {.const_idx = -func_std__which}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "815_0_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split\000", NULL,
    {.position = POS(817, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "819_1_filename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "file_exists\000", NULL,
    {.position = POS(820, 7)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "find_first_process\000std", NULL,
    {.const_idx = -func_std__find_first_process}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "826_27_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "827_10_dir\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "829_10_entry\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "835_1_proc_num\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DIGIT\000", NULL,
    {.position = POS(837, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "many\000", NULL,
    {.position = POS(837, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "matches\000", NULL,
    {.position = POS(837, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "838_7_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(843, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_until\000", NULL,
    {.position = POS(844, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "find_processes\000std", NULL,
    {.const_idx = -func_std__find_processes}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "851_23_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "852_10_dir\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "853_1_pids\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "855_10_entry\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "861_1_proc_num\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "864_7_buf\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "get_process_name\000std", NULL,
    {.const_idx = -func_std__get_process_name}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "879_7_buf\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "get_mac_address\000std", NULL,
    {.const_idx = -func_std__get_mac_address}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "886_24_mac\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_first_mac_address\000", NULL,
    {.position = POS(886, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hex\000", NULL,
    {.position = POS(888, 46)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(888, 21)}
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
