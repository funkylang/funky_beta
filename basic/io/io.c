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
  func_std_types__file_descriptor___load = -60,
  func_std_types__io___load = -61,
  func_load_file = -62,
  lambda_26 = -63,
  lambda_27 = -64,
  func_read_data = -65,
  lambda_28 = -66,
  lambda_29 = -67,
  lambda_30 = -68,
  func_file_closed = -69,
  func_read_failed = -70,
  func_std_types__string___save = -71,
  str_w = -72,
  func_std__try = -73,
  func_std__check = -74,
  lambda_31 = -75,
  func_std__file_exists = -76,
  func_std__directory = -77,
  lambda_4_loop = -78,
  lambda_entry_is_an_error = -79,
  lambda_do_sort = -80,
  lambda_32 = -81,
  lambda_33 = -82,
  lambda_34 = -83,
  func_std_types__stat___access_time_of = -84,
  num_1000000000 = -85,
  func_std_types__stat___modification_time_of = -86,
  func_std_types__stat___status_change_time_of = -87,
  func_std_types__stat___is_a_directory = -88,
  chr_100 = -89,
  func_std__call = -90,
  num_2 = -91,
  num_3 = -92,
  lambda_35 = -93,
  lambda_36 = -94,
  string_2 = -95,
  lambda_37 = -96,
  lambda_5_loop = -97,
  lambda_38 = -98,
  lambda_READ = -99,
  lambda_39 = -100,
  lambda_out_fd = -101,
  lambda_do_collect_output = -102,
  lambda_40 = -103,
  lambda_err_fd = -104,
  lambda_do_collect_error_output = -105,
  lambda_41 = -106,
  lambda_42 = -107,
  lambda_PROCESS_JOINED = -108,
  lambda_2_do_collect_output = -109,
  lambda_43 = -110,
  lambda_44 = -111,
  lambda_45 = -112,
  lambda_46 = -113,
  func_std__terminate = -114,
  str_file_descriptor = -115,
  func_std_types__file_descriptor___serialize = -116,
  str_file_descriptor_2 = -117,
  string_3 = -118,
  lambda_47 = -119,
  lambda_48 = -120,
  func_std_types__file_descriptor___deserializer_of = -121,
  str_process_id = -122,
  func_std_types__process_id___serialize = -123,
  str_process_id_2 = -124,
  lambda_49 = -125,
  lambda_50 = -126,
  func_std_types__process_id___deserializer_of = -127,
  func_extern_call = -128,
  func_std__pipe = -129,
  lambda_first_arg_is_a_string = -130,
  lambda_51 = -131,
  lambda_first_arg_is_a_file_descriptor = -132,
  func_build_commands = -133,
  lambda_52 = -134,
  lambda_53 = -135,
  lambda_arg_is_a_function = -136,
  lambda_54 = -137,
  lambda_55 = -138,
  lambda_56 = -139,
  lambda_57 = -140,
  func_std__pipe_commands = -141,
  lambda_feed_or_fd_is_defined = -142,
  lambda_feed_or_fd_is_a_file_descriptor = -143,
  lambda_58 = -144,
  lambda_59 = -145,
  func_run_pipe = -146,
  lambda_60 = -147,
  lambda_61 = -148,
  lambda_62 = -149,
  lambda_63 = -150,
  lambda_64 = -151,
  lambda_65 = -152,
  lambda_66 = -153,
  func_store_pid_and_err_fd = -154,
  lambda_67 = -155,
  list_1285_9 = -156,
  lambda_68 = -157,
  func_manage_io = -158,
  lambda_6_loop = -159,
  lambda_69 = -160,
  lambda_70 = -161,
  lambda_71 = -162,
  lambda_72 = -163,
  lambda_73 = -164,
  lambda_74 = -165,
  lambda_rpid_is_defined = -166,
  lambda_75 = -167,
  lambda_76 = -168,
  lambda_feed_is_empty = -169,
  lambda_77 = -170,
  lambda_78 = -171,
  lambda_buf_is_empty = -172,
  lambda_79 = -173,
  lambda_80 = -174,
  lambda_81 = -175,
  lambda_82 = -176,
  lambda_83 = -177,
  lambda_84 = -178,
  lambda_85 = -179,
  lambda_86 = -180,
  lambda_87 = -181,
  func_std__which = -182,
  lambda_environment_is_undefined = -183,
  func_search = -184,
  str_PATH = -185,
  chr_58 = -186,
  lambda_88 = -187,
  string_4 = -188,
  lambda_89 = -189,
  lambda_90 = -190,
  func_std__find_first_process = -191,
  str_proc = -192,
  lambda_7_loop = -193,
  lambda_2_entry_is_an_error = -194,
  lambda_91 = -195,
  lambda_92 = -196,
  str_proc_2 = -197,
  str_cmdline = -198,
  lambda_93 = -199,
  chr_0 = -200,
  chr_47 = -201,
  lambda_94 = -202,
  func_std__find_processes = -203,
  lambda_8_loop = -204,
  lambda_3_entry_is_an_error = -205,
  lambda_95 = -206,
  lambda_96 = -207,
  lambda_97 = -208,
  lambda_98 = -209,
  func_std__get_process_name = -210,
  lambda_99 = -211,
  lambda_100 = -212,
  func_std__extern = -213
};

enum {
  var__START = FIRST_VAR-1,
  var_std__update, // attribute
  var_std__assign, // extern
  var_std__load, // attribute
  var_std__save, // attribute
  var_std__access_time_of, // attribute
  var_std__modification_time_of, // attribute
  var_std__status_change_time_of, // attribute
  var_std__is_a_directory, // attribute
  var_std__sleep, // initialized
  var_126_0_duration, // dynamic
  var_std__less, // extern
  var_std__times, // extern
  var_to_integer, // extern
  var_usleep, // extern
  var_on, // extern
  var_std__write_string_to, // initialized
  var_153_0_fd, // dynamic
  var_154_0_str, // dynamic
  var_156_1_len, // dynamic
  var_length_of, // extern
  var_159_8_bytes_written, // dynamic
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
  var_488_0_fd, // dynamic
  var_489_0_length, // dynamic
  var_491_1_data, // dynamic
  var_493_7_buf, // dynamic
  var_read, // extern
  var_is_empty, // extern
  var_true, // extern
  var_append, // extern
  var_minus, // extern
  var_cond, // extern
  var_std__read_from_until, // initialized
  var_530_0_fd, // dynamic
  var_531_0_sentinel, // dynamic
  var_532_0_nth, // dynamic
  var_534_1_data, // dynamic
  var_536_7_buf, // dynamic
  var_has_suffix, // extern
  var_dec, // extern
  var_std__readln_from, // initialized
  var_read_from_until, // extern
  var_std__read_all_from, // initialized
  var_595_0_fd, // dynamic
  var_597_1_data, // dynamic
  var_599_7_buf, // dynamic
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
  var_737_0_max_length, // dynamic
  var_undefined, // extern
  var_739_7_fd, // dynamic
  var_open, // extern
  var_check, // extern
  var_is_defined, // extern
  var_read_from, // extern
  var_close, // extern
  var_read_all_from, // extern
  var_load_buffer_of, // attribute
  var_max_length_of, // attribute
  var_id_of, // attribute
  var_std_types__io, // extern
  var_empty_hash_table, // extern
  var_run, // extern
  var_789_13_io, // dynamic
  var_789_16_id, // dynamic
  var_789_28_max_length, // dynamic
  var_790_7_fd, // dynamic
  var_JOB_FAILED, // extern
  var_tuple, // extern
  var_start_reading_from, // extern
  var_READ, // extern
  var_std__key_value_pair, // extern
  var_CLOSED, // extern
  var_READ_FAILED, // extern
  var_register_handlers, // extern
  var_805_13_io, // dynamic
  var_805_16_fd, // dynamic
  var_806_1_buf, // dynamic
  var_807_1_max_length, // dynamic
  var_std__not, // extern
  var_std__and, // extern
  var_deregister_all_handlers, // extern
  var_JOB_COMPLETED, // extern
  var_save, // extern polymorphic
  var_write_to, // extern
  var_std__try, // initialized
  var_std__check, // initialized
  var_897_0_argument, // dynamic
  var_std__file_exists, // initialized
  var_stat, // extern
  var_not, // extern
  var_std__directory, // initialized
  var_SORT, // extern
  var_false, // extern
  var_946_14_do_sort, // dynamic
  var_extract_options, // extern
  var_947_1_entries, // dynamic
  var_empty_list, // extern
  var_948_10_dir, // dynamic
  var_opendir, // extern
  var_950_10_entry, // dynamic
  var_readdir, // extern
  var_closedir, // extern
  var_name_of, // extern
  var_sort, // extern
  var_std_types__stat, // extern
  var_access_time_of, // extern polymorphic
  var_access_time_seconds_of, // extern
  var_access_time_nanoseconds_of, // extern
  var_std__over, // extern
  var_modification_time_of, // extern polymorphic
  var_modification_time_seconds_of, // extern
  var_modification_time_nanoseconds_of, // extern
  var_status_change_time_of, // extern polymorphic
  var_status_change_time_seconds_of, // extern
  var_status_change_time_nanoseconds_of, // extern
  var_is_a_directory, // extern polymorphic
  var_mode_of, // extern
  var_std__equal, // extern
  var_std__call, // initialized
  var_result_count, // extern
  var_1023_1_do_collect_output, // dynamic
  var_1024_1_do_collect_error_output, // dynamic
  var_1025_1_env_vars, // dynamic
  var_to_string, // extern
  var_map, // extern
  var_environment, // extern
  var_std__string, // extern
  var_for_each, // extern
  var_update_if, // extern
  var_1034_29_out_fd, // dynamic
  var_1034_37_err_fd, // dynamic
  var_create_process, // extern
  var_1036_1_io, // dynamic
  var_join_process, // extern
  var_1041_1_out, // dynamic
  var_1042_1_err, // dynamic
  var_get_events, // extern
  var_1046_13_fd, // dynamic
  var_1046_17_data, // dynamic
  var_case, // extern
  var_PROCESS_JOINED, // extern
  var_1073_1_ret, // dynamic
  var_std__terminate, // initialized
  var_EXIT_SUCCESS, // extern
  var_exit, // extern
  var_std__is_a_file_descriptor, // attribute
  var_std_types__object, // extern
  var_is_a_file_descriptor, // extern polymorphic
  var_serialization_tag_of, // extern polymorphic
  var_serialize, // extern polymorphic
  var_1117_0_indent, // dynamic
  var_1119_1_str, // dynamic
  var_tabs_and_spaces, // extern
  var_deserializer_of, // extern polymorphic
  var_integer, // extern
  var_file_descriptor, // extern
  var_std__is_a_process_id, // attribute
  var_is_a_process_id, // extern polymorphic
  var_std_types__process_id, // extern
  var_1156_0_indent, // dynamic
  var_1158_1_str, // dynamic
  var_process_id, // extern
  var_command_of, // attribute
  var_flatten, // extern
  var_call, // extern
  var_std__pipe, // initialized
  var_1185_0_args, // dynamic
  var_1187_1_i, // dynamic
  var_1188_1_n, // dynamic
  var_1189_1_in_fd, // dynamic
  var_1190_1_feed, // dynamic
  var_1191_1_commands, // dynamic
  var_1192_1_head, // dynamic
  var_1193_1_arguments, // dynamic
  var_1194_1_first_arg, // dynamic
  var_is_a_string, // extern
  var_1214_1_arg, // dynamic
  var_is_a_function, // extern
  var_inc, // extern
  var_std__pipe_commands, // initialized
  var_1234_0_feed_or_fd, // dynamic
  var_1235_0_commands, // dynamic
  var_1249_0_in_fd, // dynamic
  var_1250_0_feed, // dynamic
  var_1251_0_commands, // dynamic
  var_1253_1_pids, // dynamic
  var_1254_1_err_fds, // dynamic
  var_1255_1_out_fd, // dynamic
  var_1256_1_env_vars, // dynamic
  var_1265_3_idx, // dynamic
  var_1266_9_head, // dynamic
  var_1266_15_arguments, // dynamic
  var_1268_1_pid, // dynamic
  var_1269_1_err_fd, // dynamic
  var_is_undefined, // extern
  var_list, // extern
  var_1283_1_ret, // dynamic
  var_dup, // extern
  var_1284_1_out, // dynamic
  var_1285_1_err, // dynamic
  var_1296_1_read_descriptor_list, // dynamic
  var_keys_of, // extern
  var_1306_1_read_descriptors, // dynamic
  var_1307_1_write_descriptors, // dynamic
  var_pselect, // extern
  var_CHILD_CHANGED_STATE, // extern
  var_1315_7_rpid, // dynamic
  var_1315_13_status, // dynamic
  var_wait, // extern
  var_1340_3_read_descriptor, // dynamic
  var_1341_7_buf, // dynamic
  var_std__which, // initialized
  var_1368_0_name, // dynamic
  var_get_environment, // extern
  var_split, // extern
  var_1379_1_filename, // dynamic
  var_file_exists, // extern
  var_std__find_first_process, // initialized
  var_1386_27_name, // dynamic
  var_1387_10_dir, // dynamic
  var_1389_10_entry, // dynamic
  var_1395_1_proc_num, // dynamic
  var_DIGIT, // extern
  var_many, // extern
  var_matches, // extern
  var_1398_7_buf, // dynamic
  var_truncate_from, // extern
  var_truncate_until, // extern
  var_std__find_processes, // initialized
  var_1411_23_name, // dynamic
  var_1412_10_dir, // dynamic
  var_1413_1_pids, // dynamic
  var_1415_10_entry, // dynamic
  var_1421_1_proc_num, // dynamic
  var_1424_7_buf, // dynamic
  var_std__get_process_name, // initialized
  var_1439_7_buf, // dynamic
  var_std__extern, // initialized
  var__END
};


static TAB_NUM t_func_std__sleep[] = {
  1, // locals
  1, // parameters
  var_126_0_duration,
  // 0: usleep! (1'000'000*duration).to_integer
  var_std__less, 2, num_0, var_126_0_duration, 1, LOCAL(1),
  // on duration > 0: usleep! (1'000'000*duration).to_integer
  var_on, 2, LOCAL(1), lambda_1, IO_TAIL_CALL,
  POS(128, 17),
  POS(128, 3)
};

static TAB_NUM t_lambda_1[] = {
  2, // locals
  0, // parameters
  // 1'000'000*duration).to_integer
  var_std__times, 2, num_1000000, var_126_0_duration, 1, LOCAL(1),
  // to_integer
  var_to_integer, 1, LOCAL(1), 1, LOCAL(2),
  // usleep! (1'000'000*duration).to_integer
  var_usleep, 1, LOCAL(2), IO_TAIL_CALL,
  POS(128, 29),
  POS(128, 49),
  POS(128, 20)
};

static TAB_NUM t_func_std__write_string_to[] = {
  0, // locals
  2, // parameters
  var_153_0_fd,
  var_154_0_str,
  // $len length_of(str)
  var_length_of, 1, var_154_0_str, 1, var_156_1_len,
  // loop
  var_loop, 2, lambda_2, var_pass, IO_TAIL_CALL,
  POS(156, 3),
  POS(157, 3)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // write! $bytes_written fd str
  var_write, 2, var_153_0_fd, var_154_0_str, IO_CALL(1), var_159_8_bytes_written,
  // is_an_error
  var_is_an_error, 1, var_159_8_bytes_written, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_159_8_bytes_written, lambda_3, IO_TAIL_CALL,
  POS(159, 7),
  POS(161, 23),
  POS(160, 7)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // bytes_written < len:
  var_std__less, 2, var_159_8_bytes_written, var_156_1_len, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_4, var_break, IO_TAIL_CALL,
  POS(165, 13),
  POS(164, 11)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // bytes_written+1 -1
  var_std__plus, 2, var_159_8_bytes_written, num_1, 1, LOCAL(1),
  // range &str bytes_written+1 -1
  var_range, 3, var_154_0_str, LOCAL(1), minus_num_1, 1, var_154_0_str,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(166, 26),
  POS(166, 15),
  POS(167, 15)
};

static TAB_NUM t_func_std__write_to[] = {
  3, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 195_0_fd
  REST_PARAMETER, LOCAL(3), // 196_0_args
  // create_string(args)
  var_create_string, 1, LOCAL(3), 1, LOCAL(1),
  // write_string_to! fd create_string(args)
  var_write_string_to, 2, LOCAL(2), LOCAL(1), IO_TAIL_CALL,
  POS(198, 23),
  POS(198, 3)
};

static TAB_NUM t_func_std__writeln_to[] = {
  4, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 224_0_fd
  REST_PARAMETER, LOCAL(4), // 225_0_args
  // create_string(args) '@nl;')
  var_create_string, 1, LOCAL(4), 1, LOCAL(1),
  // push(create_string(args) '@nl;')
  var_push, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // write_string_to! fd push(create_string(args) '@nl;')
  var_write_string_to, 2, LOCAL(3), LOCAL(2), IO_TAIL_CALL,
  POS(227, 28),
  POS(227, 23),
  POS(227, 3)
};

static TAB_NUM t_func_std__print_string_to[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 252_0_fd
  LOCAL(3), // 253_0_str
  // to_utf8
  var_to_utf8, 1, LOCAL(3), 1, LOCAL(1),
  // write_string_to! fd str.to_utf8
  var_write_string_to, 2, LOCAL(2), LOCAL(1), IO_TAIL_CALL,
  POS(255, 27),
  POS(255, 3)
};

static TAB_NUM t_func_std_types__file_descriptor___print_to[] = {
  4, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 281_0_fd
  REST_PARAMETER, LOCAL(4), // 282_0_args
  // create_string(args).to_utf8
  var_create_string, 1, LOCAL(4), 1, LOCAL(1),
  // to_utf8
  var_to_utf8, 1, LOCAL(1), 1, LOCAL(2),
  // write_string_to! fd create_string(args).to_utf8
  var_write_string_to, 2, LOCAL(3), LOCAL(2), IO_TAIL_CALL,
  POS(284, 23),
  POS(284, 43),
  POS(284, 3)
};

static TAB_NUM t_func_std__println_to[] = {
  5, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(4), // 308_0_fd
  REST_PARAMETER, LOCAL(5), // 309_0_args
  // create_string(args).to_utf8 '@nl;')
  var_create_string, 1, LOCAL(5), 1, LOCAL(1),
  // to_utf8 '@nl;')
  var_to_utf8, 1, LOCAL(1), 1, LOCAL(2),
  // push(create_string(args).to_utf8 '@nl;')
  var_push, 2, LOCAL(2), chr_10, 1, LOCAL(3),
  // write_string_to! fd push(create_string(args).to_utf8 '@nl;')
  var_write_string_to, 2, LOCAL(4), LOCAL(3), IO_TAIL_CALL,
  POS(311, 28),
  POS(311, 48),
  POS(311, 23),
  POS(311, 3)
};

static TAB_NUM t_func_std__print_string[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 333_0_str
  // to_utf8
  var_to_utf8, 1, LOCAL(2), 1, LOCAL(1),
  // write_string_to! STDOUT_FILENO str.to_utf8
  var_write_string_to, 2, var_STDOUT_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(335, 38),
  POS(335, 3)
};

static TAB_NUM t_func_std__print[] = {
  2, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(2), // 359_0_args
  // create_string(args)
  var_create_string, 1, LOCAL(2), 1, LOCAL(1),
  // print_string! create_string(args)
  var_print_string, 1, LOCAL(1), IO_TAIL_CALL,
  POS(361, 17),
  POS(361, 3)
};

static TAB_NUM t_func_std__println[] = {
  3, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(3), // 385_0_args
  // create_string(args) '@nl;')
  var_create_string, 1, LOCAL(3), 1, LOCAL(1),
  // push(create_string(args) '@nl;')
  var_push, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // print_string! push(create_string(args) '@nl;')
  var_print_string, 1, LOCAL(2), IO_TAIL_CALL,
  POS(387, 22),
  POS(387, 17),
  POS(387, 3)
};

static TAB_NUM t_func_std__eprint_string[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 413_0_str
  // to_utf8
  var_to_utf8, 1, LOCAL(2), 1, LOCAL(1),
  // write_string_to! STDERR_FILENO str.to_utf8
  var_write_string_to, 2, var_STDERR_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(415, 38),
  POS(415, 3)
};

static TAB_NUM t_func_std__eprint[] = {
  2, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(2), // 439_0_args
  // create_string(args)
  var_create_string, 1, LOCAL(2), 1, LOCAL(1),
  // eprint_string! create_string(args)
  var_eprint_string, 1, LOCAL(1), IO_TAIL_CALL,
  POS(441, 18),
  POS(441, 3)
};

static TAB_NUM t_func_std__eprintln[] = {
  3, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(3), // 465_0_args
  // create_string(args) '@nl;')
  var_create_string, 1, LOCAL(3), 1, LOCAL(1),
  // push(create_string(args) '@nl;')
  var_push, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // eprint_string! push(create_string(args) '@nl;')
  var_eprint_string, 1, LOCAL(2), IO_TAIL_CALL,
  POS(467, 23),
  POS(467, 18),
  POS(467, 3)
};

static TAB_NUM t_func_std__read_from[] = {
  0, // locals
  2, // parameters
  var_488_0_fd,
  var_489_0_length,
  // $data ""
  LET, 1, string_1, 1, var_491_1_data,
  // loop:
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(491, 3),
  POS(492, 3)
};

static TAB_NUM t_lambda_loop[] = {
  0, // locals
  0, // parameters
  // read! $buf fd length
  var_read, 2, var_488_0_fd, var_489_0_length, IO_CALL(1), var_493_7_buf,
  // cond
  var_cond, 3, lambda_5, lambda_7, lambda_9, IO_TAIL_CALL,
  POS(493, 5),
  POS(494, 5)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // is_an_error -> buf
  var_is_an_error, 1, var_493_7_buf, 1, LOCAL(1),
  //  buf.is_an_error -> buf
  LET, 2, LOCAL(1), lambda_6, TAIL_CALL,
  POS(495, 14),
  POS(495, 9)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_493_7_buf, TAIL_CALL,
  POS(495, 28)
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // is_empty -> data
  var_is_empty, 1, var_493_7_buf, 1, LOCAL(1),
  //  buf.is_empty -> data
  LET, 2, LOCAL(1), lambda_8, TAIL_CALL,
  POS(496, 14),
  POS(496, 9)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_491_1_data, TAIL_CALL,
  POS(496, 25)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_10, IO_TAIL_CALL,
  POS(497, 9)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // append &data buf
  var_append, 2, var_491_1_data, var_493_7_buf, 1, var_491_1_data,
  // length_of(buf)
  var_length_of, 1, var_493_7_buf, 1, LOCAL(1),
  // minus &length length_of(buf)
  var_minus, 2, var_489_0_length, LOCAL(1), 1, var_489_0_length,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(498, 9),
  POS(499, 23),
  POS(499, 9),
  POS(500, 9)
};

static TAB_NUM t_func_std__read_from_until[] = {
  0, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_530_0_fd,
  MANDATORY_PARAMETER, var_531_0_sentinel,
  num_1, var_532_0_nth,
  // $data ""
  LET, 1, string_1, 1, var_534_1_data,
  // loop:
  var_loop, 1, lambda_2_loop, IO_TAIL_CALL,
  POS(534, 3),
  POS(535, 3)
};

static TAB_NUM t_lambda_2_loop[] = {
  0, // locals
  0, // parameters
  // read! $buf fd 1
  var_read, 2, var_530_0_fd, num_1, IO_CALL(1), var_536_7_buf,
  // cond
  var_cond, 3, lambda_11, lambda_13, lambda_15, IO_TAIL_CALL,
  POS(536, 5),
  POS(537, 5)
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // is_an_error -> buf
  var_is_an_error, 1, var_536_7_buf, 1, LOCAL(1),
  //  buf.is_an_error -> buf
  LET, 2, LOCAL(1), lambda_12, TAIL_CALL,
  POS(538, 14),
  POS(538, 9)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_536_7_buf, TAIL_CALL,
  POS(538, 28)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // is_empty -> data
  var_is_empty, 1, var_536_7_buf, 1, LOCAL(1),
  //  buf.is_empty -> data
  LET, 2, LOCAL(1), lambda_14, TAIL_CALL,
  POS(539, 14),
  POS(539, 9)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_534_1_data, TAIL_CALL,
  POS(539, 25)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_16, IO_TAIL_CALL,
  POS(540, 9)
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // append &data buf
  var_append, 2, var_534_1_data, var_536_7_buf, 1, var_534_1_data,
  // buf .has_suffix. sentinel:
  var_has_suffix, 2, var_536_7_buf, var_531_0_sentinel, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), lambda_17, var_next, IO_TAIL_CALL,
  POS(541, 9),
  POS(543, 11),
  POS(542, 9)
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // dec &nth
  var_dec, 1, var_532_0_nth, 1, var_532_0_nth,
  // 0
  var_std__less, 2, num_0, var_532_0_nth, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), var_next, lambda_18, IO_TAIL_CALL,
  POS(544, 13),
  POS(546, 21),
  POS(545, 13)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_534_1_data, TAIL_CALL,
  POS(548, 17)
};

static TAB_NUM t_func_std__readln_from[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 572_0_fd
  // read_from_until! fd '@nl;'
  var_read_from_until, 2, LOCAL(1), chr_10, IO_TAIL_CALL,
  POS(574, 3)
};

static TAB_NUM t_func_std__read_all_from[] = {
  0, // locals
  1, // parameters
  var_595_0_fd,
  // $data ""
  LET, 1, string_1, 1, var_597_1_data,
  // loop:
  var_loop, 1, lambda_3_loop, IO_TAIL_CALL,
  POS(597, 3),
  POS(598, 3)
};

static TAB_NUM t_lambda_3_loop[] = {
  0, // locals
  0, // parameters
  // read! $buf fd 0x100000
  var_read, 2, var_595_0_fd, num_0x100000, IO_CALL(1), var_599_7_buf,
  // cond
  var_cond, 3, lambda_19, lambda_21, lambda_23, IO_TAIL_CALL,
  POS(599, 5),
  POS(600, 5)
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // is_an_error -> buf
  var_is_an_error, 1, var_599_7_buf, 1, LOCAL(1),
  //  buf.is_an_error -> buf
  LET, 2, LOCAL(1), lambda_20, TAIL_CALL,
  POS(601, 14),
  POS(601, 9)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_599_7_buf, TAIL_CALL,
  POS(601, 28)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // is_empty -> data
  var_is_empty, 1, var_599_7_buf, 1, LOCAL(1),
  //  buf.is_empty -> data
  LET, 2, LOCAL(1), lambda_22, TAIL_CALL,
  POS(602, 14),
  POS(602, 9)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_597_1_data, TAIL_CALL,
  POS(602, 25)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_24, IO_TAIL_CALL,
  POS(603, 9)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  // append &data buf
  var_append, 2, var_597_1_data, var_599_7_buf, 1, var_597_1_data,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(604, 9),
  POS(605, 9)
};

static TAB_NUM t_func_std__get_from_until[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 636_0_fd
  MANDATORY_PARAMETER, LOCAL(3), // 637_0_sentinel
  num_1, LOCAL(4), // 638_0_nth
  // read_from_until! $data fd sentinel nth
  var_read_from_until, 3, LOCAL(2), LOCAL(3), LOCAL(4), IO_CALL(1), LOCAL(5),
  // from_utf8
  var_from_utf8, 1, LOCAL(5), 1, LOCAL(1),
  // -> data.from_utf8
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(640, 3),
  POS(641, 11),
  POS(641, 3)
};

static TAB_NUM t_func_std__getln_from[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 665_0_fd
  // get_from_until! fd '@nl;'
  var_get_from_until, 2, LOCAL(1), chr_10, IO_TAIL_CALL,
  POS(667, 3)
};

static TAB_NUM t_func_std__get_until[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 694_0_sentinel
  // get_from_until! STDIN_FILENO sentinel
  var_get_from_until, 2, var_STDIN_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(696, 3)
};

static TAB_NUM t_func_std__getln[] = {
  0, // locals
  0, // parameters
  // getln_from! STDIN_FILENO
  var_getln_from, 1, var_STDIN_FILENO, IO_TAIL_CALL,
  POS(718, 3)
};

static TAB_NUM t_func_std_types__string___load[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 736_0_filename
  var_undefined, var_737_0_max_length,
  // open! $fd filename "r"
  var_open, 2, LOCAL(2), str_r, IO_CALL(1), var_739_7_fd,
  // check fd
  var_check, 1, var_739_7_fd, 0,
  // is_defined:
  var_is_defined, 1, var_737_0_max_length, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_max_length_is_defined, lambda_25, IO_TAIL_CALL,
  POS(739, 3),
  POS(740, 3),
  POS(742, 16),
  POS(741, 3)
};

static TAB_NUM t_lambda_max_length_is_defined[] = {
  1, // locals
  0, // parameters
  // read_from! $data fd max_length
  var_read_from, 2, var_739_7_fd, var_737_0_max_length, IO_CALL(1), LOCAL(1),
  // close! fd
  var_close, 1, var_739_7_fd, IO_CALL(0),
  // -> data
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(743, 7),
  POS(744, 7),
  POS(745, 7)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  // load! fd
  var_load, 1, var_739_7_fd, IO_TAIL_CALL,
  POS(747, 7)
};

static TAB_NUM t_func_std_types__file_descriptor___load[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 765_0_fd
  // read_all_from! $data fd
  var_read_all_from, 1, LOCAL(1), IO_CALL(1), LOCAL(2),
  // check data
  var_check, 1, LOCAL(2), 0,
  // close! fd
  var_close, 1, LOCAL(1), IO_CALL(0),
  // -> data
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(767, 3),
  POS(768, 3),
  POS(769, 3),
  POS(770, 3)
};

static TAB_NUM t_func_std_types__io___load[] = {
  4, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 782_0_io
  MANDATORY_PARAMETER, LOCAL(2), // 783_0_id
  MANDATORY_PARAMETER, LOCAL(3), // 784_0_filename
  var_undefined, LOCAL(4), // 785_0_max_length
  // run io load_file id filename max_length
  var_run, 5, LOCAL(1), func_load_file, LOCAL(2), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(787, 3)
};

static TAB_NUM t_func_load_file[] = {
  2, // locals
  4, // parameters
  var_789_13_io,
  var_789_16_id,
  LOCAL(2), // 789_19_filename
  var_789_28_max_length,
  // open! $fd filename "r"
  var_open, 2, LOCAL(2), str_r, IO_CALL(1), var_790_7_fd,
  // is_an_error
  var_is_an_error, 1, var_790_7_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_26, lambda_27, TAIL_CALL,
  POS(790, 3),
  POS(792, 8),
  POS(791, 3)
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  0, // parameters
  // tuple(JOB_FAILED id fd)
  var_tuple, 3, var_JOB_FAILED, var_789_16_id, var_790_7_fd, 1, LOCAL(1),
  //  io tuple(JOB_FAILED id fd)
  LET, 2, var_789_13_io, LOCAL(1), TAIL_CALL,
  POS(793, 11),
  POS(793, 7)
};

static TAB_NUM t_lambda_27[] = {
  3, // locals
  0, // parameters
  // start_reading_from &io fd true max_length
  var_start_reading_from, 4, var_789_13_io, var_790_7_fd, var_true, var_789_28_max_length, 1, var_789_13_io,
  // load_buffer_of(fd) ""
  var_load_buffer_of, 1, var_789_13_io, 1, LOCAL(2),
  // load_buffer_of(fd) ""
  LOCAL(2), 2, var_790_7_fd, string_1, 1, LOCAL(2),
  // io.load_buffer_of(fd) ""
  LET, -1, var_789_13_io, var_load_buffer_of, LOCAL(2), var_789_13_io,
  // max_length_of(fd) max_length
  var_max_length_of, 1, var_789_13_io, 1, LOCAL(2),
  // max_length_of(fd) max_length
  LOCAL(2), 2, var_790_7_fd, var_789_28_max_length, 1, LOCAL(2),
  // io.max_length_of(fd) max_length
  LET, -1, var_789_13_io, var_max_length_of, LOCAL(2), var_789_13_io,
  // id_of(fd) id
  var_id_of, 1, var_789_13_io, 1, LOCAL(2),
  // id_of(fd) id
  LOCAL(2), 2, var_790_7_fd, var_789_16_id, 1, LOCAL(2),
  // io.id_of(fd) id
  LET, -1, var_789_13_io, var_id_of, LOCAL(2), var_789_13_io,
  // READ = read_data
  var_std__key_value_pair, 2, var_READ, func_read_data, 1, LOCAL(1),
  // CLOSED = file_closed
  var_std__key_value_pair, 2, var_CLOSED, func_file_closed, 1, LOCAL(2),
  // READ_FAILED = read_failed
  var_std__key_value_pair, 2, var_READ_FAILED, func_read_failed, 1, LOCAL(3),
  // register_handlers &io fd
  var_register_handlers, 5, var_789_13_io, var_790_7_fd, LOCAL(1), LOCAL(2), LOCAL(3), 1, var_789_13_io,
  // -> io undefined
  LET, 2, var_789_13_io, var_undefined, TAIL_CALL,
  POS(795, 7),
  POS(796, 11),
  POS(796, 11),
  POS(796, 8),
  POS(797, 11),
  POS(797, 11),
  POS(797, 8),
  POS(798, 11),
  POS(798, 11),
  POS(798, 8),
  POS(800, 9),
  POS(801, 9),
  POS(802, 9),
  POS(799, 7),
  POS(803, 7)
};

static TAB_NUM t_func_read_data[] = {
  3, // locals
  3, // parameters
  var_805_13_io,
  var_805_16_fd,
  LOCAL(3), // 805_19_data
  // load_buffer_of(io)(fd)
  var_load_buffer_of, 1, var_805_13_io, 1, LOCAL(1),
  // $buf load_buffer_of(io)(fd)
  LOCAL(1), 1, var_805_16_fd, 1, var_806_1_buf,
  // max_length_of(io)(fd)
  var_max_length_of, 1, var_805_13_io, 1, LOCAL(1),
  // $max_length max_length_of(io)(fd)
  LOCAL(1), 1, var_805_16_fd, 1, var_807_1_max_length,
  // append &buf data
  var_append, 2, var_806_1_buf, LOCAL(3), 1, var_806_1_buf,
  // is_defined && length_of(buf) >= max_length:
  var_is_defined, 1, var_807_1_max_length, 1, LOCAL(1),
  // is_defined && length_of(buf) >= max_length:
  var_std__and, 2, LOCAL(1), lambda_28, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_29, lambda_30, TAIL_CALL,
  POS(806, 8),
  POS(806, 3),
  POS(807, 15),
  POS(807, 3),
  POS(808, 3),
  POS(810, 16),
  POS(810, 16),
  POS(809, 3)
};

static TAB_NUM t_lambda_28[] = {
  3, // locals
  0, // parameters
  // length_of(buf) >= max_length:
  var_length_of, 1, var_806_1_buf, 1, LOCAL(1),
  // length_of(buf) >= max_length:
  var_std__less, 2, LOCAL(1), var_807_1_max_length, 1, LOCAL(2),
  // length_of(buf) >= max_length:
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // length_of(buf) >= max_length:
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(810, 30),
  POS(810, 30),
  POS(810, 30),
  POS(810, 30)
};

static TAB_NUM t_lambda_29[] = {
  3, // locals
  0, // parameters
  // deregister_all_handlers &io fd
  var_deregister_all_handlers, 2, var_805_13_io, var_805_16_fd, 1, var_805_13_io,
  // id_of(io)(fd)
  var_id_of, 1, var_805_13_io, 1, LOCAL(1),
  // $id id_of(io)(fd)
  LOCAL(1), 1, var_805_16_fd, 1, LOCAL(3),
  // load_buffer_of(fd) undefined
  var_load_buffer_of, 1, var_805_13_io, 1, LOCAL(2),
  // load_buffer_of(fd) undefined
  LOCAL(2), 2, var_805_16_fd, var_undefined, 1, LOCAL(2),
  // io.load_buffer_of(fd) undefined
  LET, -1, var_805_13_io, var_load_buffer_of, LOCAL(2), var_805_13_io,
  // max_length_of(fd) undefined
  var_max_length_of, 1, var_805_13_io, 1, LOCAL(2),
  // max_length_of(fd) undefined
  LOCAL(2), 2, var_805_16_fd, var_undefined, 1, LOCAL(2),
  // io.max_length_of(fd) undefined
  LET, -1, var_805_13_io, var_max_length_of, LOCAL(2), var_805_13_io,
  // id_of(fd) undefined
  var_id_of, 1, var_805_13_io, 1, LOCAL(2),
  // id_of(fd) undefined
  LOCAL(2), 2, var_805_16_fd, var_undefined, 1, LOCAL(2),
  // io.id_of(fd) undefined
  LET, -1, var_805_13_io, var_id_of, LOCAL(2), var_805_13_io,
  // tuple(JOB_COMPLETED id buf)
  var_tuple, 3, var_JOB_COMPLETED, LOCAL(3), var_806_1_buf, 1, LOCAL(1),
  // -> io tuple(JOB_COMPLETED id buf)
  LET, 2, var_805_13_io, LOCAL(1), TAIL_CALL,
  POS(811, 7),
  POS(812, 11),
  POS(812, 7),
  POS(813, 11),
  POS(813, 11),
  POS(813, 8),
  POS(814, 11),
  POS(814, 11),
  POS(814, 8),
  POS(815, 11),
  POS(815, 11),
  POS(815, 8),
  POS(816, 13),
  POS(816, 7)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // load_buffer_of(fd) buf
  var_load_buffer_of, 1, var_805_13_io, 1, LOCAL(2),
  // load_buffer_of(fd) buf
  LOCAL(2), 2, var_805_16_fd, var_806_1_buf, 1, LOCAL(2),
  // io.load_buffer_of(fd) buf
  LET, -1, var_805_13_io, var_load_buffer_of, LOCAL(2), var_805_13_io,
  // -> io undefined
  LET, 2, var_805_13_io, var_undefined, TAIL_CALL,
  POS(818, 11),
  POS(818, 11),
  POS(818, 8),
  POS(819, 7)
};

static TAB_NUM t_func_file_closed[] = {
  6, // locals
  3, // parameters
  LOCAL(3), // 821_15_io
  LOCAL(4), // 821_18_fd
  LOCAL(1),
  // deregister_all_handlers &io fd
  var_deregister_all_handlers, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // load_buffer_of(io)(fd)
  var_load_buffer_of, 1, LOCAL(3), 1, LOCAL(1),
  // $buf load_buffer_of(io)(fd)
  LOCAL(1), 1, LOCAL(4), 1, LOCAL(5),
  // id_of(io)(fd)
  var_id_of, 1, LOCAL(3), 1, LOCAL(1),
  // $id id_of(io)(fd)
  LOCAL(1), 1, LOCAL(4), 1, LOCAL(6),
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
  // tuple(JOB_COMPLETED id buf)
  var_tuple, 3, var_JOB_COMPLETED, LOCAL(6), LOCAL(5), 1, LOCAL(1),
  // -> io tuple(JOB_COMPLETED id buf)
  LET, 2, LOCAL(3), LOCAL(1), TAIL_CALL,
  POS(822, 3),
  POS(823, 8),
  POS(823, 3),
  POS(824, 7),
  POS(824, 3),
  POS(825, 7),
  POS(825, 7),
  POS(825, 4),
  POS(826, 7),
  POS(826, 7),
  POS(826, 4),
  POS(827, 7),
  POS(827, 7),
  POS(827, 4),
  POS(828, 9),
  POS(828, 3)
};

static TAB_NUM t_func_read_failed[] = {
  5, // locals
  3, // parameters
  LOCAL(3), // 830_15_io
  LOCAL(4), // 830_18_fd
  LOCAL(5), // 830_21_err
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
  // tuple(JOB_FAILED fd err)
  var_tuple, 3, var_JOB_FAILED, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // -> io tuple(JOB_FAILED fd err)
  LET, 2, LOCAL(3), LOCAL(1), TAIL_CALL,
  POS(831, 3),
  POS(832, 7),
  POS(832, 7),
  POS(832, 4),
  POS(833, 7),
  POS(833, 7),
  POS(833, 4),
  POS(834, 7),
  POS(834, 7),
  POS(834, 4),
  POS(835, 9),
  POS(835, 3)
};

static TAB_NUM t_func_std_types__string___save[] = {
  3, // locals
  2, // parameters
  LOCAL(1), // 857_0_filename
  LOCAL(2), // 858_0_data
  // open! $fh filename "w+"
  var_open, 2, LOCAL(1), str_w, IO_CALL(1), LOCAL(3),
  // check fh
  var_check, 1, LOCAL(3), 0,
  // write_to! fh data
  var_write_to, 2, LOCAL(3), LOCAL(2), IO_CALL(0),
  // close! fh
  var_close, 1, LOCAL(3), IO_TAIL_CALL,
  POS(860, 3),
  POS(861, 3),
  POS(862, 3),
  POS(863, 3)
};

static TAB_NUM t_func_std__try[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 878_0_body
  // body!
  LOCAL(1), 0, IO_CALL(0),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(880, 3),
  POS(881, 3)
};

static TAB_NUM t_func_std__check[] = {
  1, // locals
  1, // parameters
  var_897_0_argument,
  // is_an_error
  var_is_an_error, 1, var_897_0_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_31, var_pass, TAIL_CALL,
  POS(900, 14),
  POS(899, 3)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  //  argument
  LET, 1, var_897_0_argument, TAIL_CALL,
  POS(901, 7)
};

static TAB_NUM t_func_std__file_exists[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 918_0_filename
  // stat! $info filename
  var_stat, 1, LOCAL(3), IO_CALL(1), LOCAL(4),
  // is_an_error)
  var_is_an_error, 1, LOCAL(4), 1, LOCAL(1),
  // not(info.is_an_error)
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // -> not(info.is_an_error)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(920, 3),
  POS(921, 15),
  POS(921, 6),
  POS(921, 3)
};

static TAB_NUM t_func_std__directory[] = {
  3, // locals
  -2, // parameters
  REST_PARAMETER, LOCAL(2), // 942_0_options
  MANDATORY_PARAMETER, LOCAL(3), // 943_0_pathname
  // SORT = false $do_sort
  var_std__key_value_pair, 2, var_SORT, var_false, 1, LOCAL(1),
  // extract_options options
  var_extract_options, 2, LOCAL(2), LOCAL(1), 1, var_946_14_do_sort,
  // $entries empty_list
  LET, 1, var_empty_list, 1, var_947_1_entries,
  // opendir! $dir pathname
  var_opendir, 1, LOCAL(3), IO_CALL(1), var_948_10_dir,
  // loop:
  var_loop, 1, lambda_4_loop, IO_TAIL_CALL,
  POS(946, 5),
  POS(945, 3),
  POS(947, 3),
  POS(948, 3),
  POS(949, 3)
};

static TAB_NUM t_lambda_4_loop[] = {
  1, // locals
  0, // parameters
  // readdir! $entry dir
  var_readdir, 1, var_948_10_dir, IO_CALL(1), var_950_10_entry,
  // is_an_error:
  var_is_an_error, 1, var_950_10_entry, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_entry_is_an_error, lambda_34, IO_TAIL_CALL,
  POS(950, 5),
  POS(952, 13),
  POS(951, 5)
};

static TAB_NUM t_lambda_entry_is_an_error[] = {
  0, // locals
  0, // parameters
  // closedir! dir
  var_closedir, 1, var_948_10_dir, IO_CALL(0),
  // if
  var_if, 3, var_946_14_do_sort, lambda_do_sort, lambda_33, TAIL_CALL,
  POS(953, 9),
  POS(954, 9)
};

static TAB_NUM t_lambda_do_sort[] = {
  0, // locals
  0, // parameters
  // sort entries: (left right) -> name_of(left) < name_of(right)
  var_sort, 2, var_947_1_entries, lambda_32, TAIL_CALL,
  POS(956, 13)
};

static TAB_NUM t_lambda_32[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 956_15_left
  LOCAL(5), // 956_20_right
  // name_of(left) < name_of(right)
  var_name_of, 1, LOCAL(4), 1, LOCAL(1),
  // name_of(right)
  var_name_of, 1, LOCAL(5), 1, LOCAL(2),
  // name_of(left) < name_of(right)
  var_std__less, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // -> name_of(left) < name_of(right)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(956, 43),
  POS(956, 59),
  POS(956, 43),
  POS(956, 40)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  //  entries
  LET, 1, var_947_1_entries, TAIL_CALL,
  POS(957, 13)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  // push &entries entry
  var_push, 2, var_947_1_entries, var_950_10_entry, 1, var_947_1_entries,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(959, 9),
  POS(960, 9)
};

static TAB_NUM t_func_std_types__stat___access_time_of[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 970_0_self
  // access_time_seconds_of(self)
  var_access_time_seconds_of, 1, LOCAL(5), 1, LOCAL(1),
  // access_time_nanoseconds_of(self)/1'000'000'000
  var_access_time_nanoseconds_of, 1, LOCAL(5), 1, LOCAL(2),
  // access_time_nanoseconds_of(self)/1'000'000'000
  var_std__over, 2, LOCAL(2), num_1000000000, 1, LOCAL(3),
  // 
  var_std__plus, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // ->
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(974, 7),
  POS(975, 7),
  POS(975, 7),
  POS(973, 6),
  POS(972, 3)
};

static TAB_NUM t_func_std_types__stat___modification_time_of[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 977_40_self
  // modification_time_seconds_of(self)
  var_modification_time_seconds_of, 1, LOCAL(5), 1, LOCAL(1),
  // modification_time_nanoseconds_of(self)/1'000'000'000
  var_modification_time_nanoseconds_of, 1, LOCAL(5), 1, LOCAL(2),
  // modification_time_nanoseconds_of(self)/1'000'000'000
  var_std__over, 2, LOCAL(2), num_1000000000, 1, LOCAL(3),
  // 
  var_std__plus, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // ->
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(986, 7),
  POS(987, 7),
  POS(987, 7),
  POS(985, 6),
  POS(984, 3)
};

static TAB_NUM t_func_std_types__stat___status_change_time_of[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 989_41_self
  // status_change_time_seconds_of(self)
  var_status_change_time_seconds_of, 1, LOCAL(5), 1, LOCAL(1),
  // status_change_time_nanoseconds_of(self)/1'000'000'000
  var_status_change_time_nanoseconds_of, 1, LOCAL(5), 1, LOCAL(2),
  // status_change_time_nanoseconds_of(self)/1'000'000'000
  var_std__over, 2, LOCAL(2), num_1000000000, 1, LOCAL(3),
  // 
  var_std__plus, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // ->
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(998, 7),
  POS(999, 7),
  POS(999, 7),
  POS(997, 6),
  POS(996, 3)
};

static TAB_NUM t_func_std_types__stat___is_a_directory[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 1001_34_self
  // mode_of(self)(1) == 'd'
  var_mode_of, 1, LOCAL(4), 1, LOCAL(1),
  // mode_of(self)(1) == 'd'
  LOCAL(1), 1, num_1, 1, LOCAL(2),
  // mode_of(self)(1) == 'd'
  var_std__equal, 2, LOCAL(2), chr_100, 1, LOCAL(3),
  // -> mode_of(self)(1) == 'd'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1008, 6),
  POS(1008, 6),
  POS(1008, 6),
  POS(1008, 3)
};

static TAB_NUM t_func_std__call[] = {
  6, // locals
  2, // parameters
  LOCAL(3), // 1020_0_cmd
  LOCAL(4), // 1021_0_args
  // result_count() >= 2)
  var_result_count, 0, 1, LOCAL(1),
  // result_count() >= 2)
  var_std__less, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // $do_collect_output (result_count() >= 2)
  var_std__not, 1, LOCAL(2), 1, var_1023_1_do_collect_output,
  // result_count() == 3)
  var_result_count, 0, 1, LOCAL(1),
  // $do_collect_error_output (result_count() == 3)
  var_std__equal, 2, LOCAL(1), num_3, 1, var_1024_1_do_collect_error_output,
  // $env_vars undefined
  LET, 1, var_undefined, 1, var_1025_1_env_vars,
  // map &args to_string
  var_map, 2, LOCAL(4), var_to_string, 1, LOCAL(4),
  // is_defined &env_vars:
  var_is_defined, 1, var_environment, 1, LOCAL(1),
  // update_if environment.is_defined &env_vars:
  var_update_if, 3, LOCAL(1), var_1025_1_env_vars, lambda_35, 1, var_1025_1_env_vars,
  // create_process! $pid $in_fd $out_fd $err_fd cmd args env_vars
  var_create_process, 3, LOCAL(3), LOCAL(4), var_1025_1_env_vars, IO_CALL(4), LOCAL(5), LOCAL(6), var_1034_29_out_fd, var_1034_37_err_fd,
  // close! in_fd
  var_close, 1, LOCAL(6), IO_CALL(0),
  // $io std_types::io
  LET, 1, var_std_types__io, 1, var_1036_1_io,
  // join_process &io pid
  var_join_process, 2, var_1036_1_io, LOCAL(5), 1, var_1036_1_io,
  // start_reading_from &io out_fd
  var_start_reading_from, 2, var_1036_1_io, var_1034_29_out_fd, 1, var_1036_1_io,
  // start_reading_from &io err_fd
  var_start_reading_from, 2, var_1036_1_io, var_1034_37_err_fd, 1, var_1036_1_io,
  // $out ""
  LET, 1, string_1, 1, var_1041_1_out,
  // $err ""
  LET, 1, string_1, 1, var_1042_1_err,
  // loop:
  var_loop, 1, lambda_5_loop, IO_TAIL_CALL,
  POS(1023, 23),
  POS(1023, 23),
  POS(1023, 3),
  POS(1024, 29),
  POS(1024, 3),
  POS(1025, 3),
  POS(1026, 3),
  POS(1027, 25),
  POS(1027, 3),
  POS(1034, 3),
  POS(1035, 3),
  POS(1036, 3),
  POS(1037, 3),
  POS(1038, 3),
  POS(1039, 3),
  POS(1041, 3),
  POS(1042, 3),
  POS(1043, 3)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  // !env_vars empty_list
  LET, 1, var_empty_list, 1, var_1025_1_env_vars,
  // for_each environment
  var_for_each, 3, var_environment, lambda_36, lambda_37, TAIL_CALL,
  POS(1028, 5),
  POS(1029, 5)
};

static TAB_NUM t_lambda_36[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 1030_3_key
  LOCAL(3), // 1030_7_value
  // "@(key)=@(value)"
  var_std__string, 3, LOCAL(2), string_2, LOCAL(3), 1, LOCAL(1),
  // push &env_vars "@(key)=@(value)"
  var_push, 2, var_1025_1_env_vars, LOCAL(1), 1, var_1025_1_env_vars,
  // next
  var_next, 0, TAIL_CALL,
  POS(1031, 24),
  POS(1031, 9),
  POS(1032, 9)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  //  env_vars
  LET, 1, var_1025_1_env_vars, TAIL_CALL,
  POS(1033, 9)
};

static TAB_NUM t_lambda_5_loop[] = {
  1, // locals
  0, // parameters
  // get_events! &io $events
  var_get_events, 1, var_1036_1_io, IO_CALL(2), var_1036_1_io, LOCAL(1),
  // for_each events: (event)
  var_for_each, 2, LOCAL(1), lambda_38, IO_TAIL_CALL,
  POS(1044, 5),
  POS(1045, 5)
};

static TAB_NUM t_lambda_38[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 1045_18_event
  // event $type $fd $data
  LOCAL(1), 0, 3, LOCAL(2), var_1046_13_fd, var_1046_17_data,
  // case type
  var_case, 6, LOCAL(2), var_READ, lambda_READ, var_PROCESS_JOINED, lambda_PROCESS_JOINED, lambda_46, IO_TAIL_CALL,
  POS(1046, 7),
  POS(1047, 7)
};

static TAB_NUM t_lambda_READ[] = {
  1, // locals
  0, // parameters
  // data == ""
  var_std__equal, 2, var_1046_17_data, string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_39, IO_TAIL_CALL,
  POS(1050, 13),
  POS(1049, 11)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  // case fd
  var_case, 6, var_1046_13_fd, var_1034_29_out_fd, lambda_out_fd, var_1034_37_err_fd, lambda_err_fd, lambda_42, IO_TAIL_CALL,
  POS(1053, 15)
};

static TAB_NUM t_lambda_out_fd[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_1023_1_do_collect_output, lambda_do_collect_output, lambda_40, IO_TAIL_CALL,
  POS(1055, 19)
};

static TAB_NUM t_lambda_do_collect_output[] = {
  0, // locals
  0, // parameters
  // append &out data
  var_append, 2, var_1041_1_out, var_1046_17_data, 1, var_1041_1_out,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1057, 23),
  POS(1058, 23)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  // write_to! STDOUT_FILENO data
  var_write_to, 2, var_STDOUT_FILENO, var_1046_17_data, IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1060, 23),
  POS(1061, 23)
};

static TAB_NUM t_lambda_err_fd[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_1024_1_do_collect_error_output, lambda_do_collect_error_output, lambda_41, IO_TAIL_CALL,
  POS(1063, 19)
};

static TAB_NUM t_lambda_do_collect_error_output[] = {
  0, // locals
  0, // parameters
  // append &err data
  var_append, 2, var_1042_1_err, var_1046_17_data, 1, var_1042_1_err,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1065, 23),
  POS(1066, 23)
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  // write_to! STDERR_FILENO data
  var_write_to, 2, var_STDERR_FILENO, var_1046_17_data, IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1068, 23),
  POS(1069, 23)
};

static TAB_NUM t_lambda_42[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1071, 19)
};

static TAB_NUM t_lambda_PROCESS_JOINED[] = {
  0, // locals
  0, // parameters
  // $ret data
  LET, 1, var_1046_17_data, 1, var_1073_1_ret,
  // if
  var_if, 3, var_1023_1_do_collect_output, lambda_2_do_collect_output, lambda_45, TAIL_CALL,
  POS(1073, 11),
  POS(1074, 11)
};

static TAB_NUM t_lambda_2_do_collect_output[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_1024_1_do_collect_error_output, lambda_43, lambda_44, TAIL_CALL,
  POS(1076, 15)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  //  ret out err
  LET, 3, var_1073_1_ret, var_1041_1_out, var_1042_1_err, TAIL_CALL,
  POS(1078, 19)
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  //  ret out
  LET, 2, var_1073_1_ret, var_1041_1_out, TAIL_CALL,
  POS(1079, 19)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  //  ret
  LET, 1, var_1073_1_ret, TAIL_CALL,
  POS(1080, 15)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1082, 11)
};

static TAB_NUM t_func_std__terminate[] = {
  0, // locals
  0, // parameters
  // exit! EXIT_SUCCESS
  var_exit, 1, var_EXIT_SUCCESS, IO_TAIL_CALL,
  POS(1094, 3)
};

static TAB_NUM t_func_std_types__file_descriptor___serialize[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 1116_0_self
  var_undefined, var_1117_0_indent,
  // to_integer)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(1),
  // $str "
  var_std__string, 3, str_file_descriptor_2, LOCAL(1), string_3, 1, var_1119_1_str,
  // is_defined
  var_is_defined, 1, var_1117_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_47, lambda_48, TAIL_CALL,
  POS(1120, 28),
  POS(1119, 3),
  POS(1122, 12),
  POS(1121, 3)
};

static TAB_NUM t_lambda_47[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_1117_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_1119_1_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1123, 15),
  POS(1123, 8),
  POS(1123, 7)
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_1119_1_str, TAIL_CALL,
  POS(1124, 7)
};

static TAB_NUM t_func_std_types__file_descriptor___deserializer_of[] = {
  3, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(3), // 1131_0_argument
  // integer(argument))
  var_integer, 1, LOCAL(3), 1, LOCAL(1),
  // file_descriptor(integer(argument))
  var_file_descriptor, 1, LOCAL(1), 1, LOCAL(2),
  // -> file_descriptor(integer(argument))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1133, 22),
  POS(1133, 6),
  POS(1133, 3)
};

static TAB_NUM t_func_std_types__process_id___serialize[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 1155_0_self
  var_undefined, var_1156_0_indent,
  // to_integer)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(1),
  // $str "
  var_std__string, 3, str_process_id_2, LOCAL(1), string_3, 1, var_1158_1_str,
  // is_defined
  var_is_defined, 1, var_1156_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_49, lambda_50, TAIL_CALL,
  POS(1159, 23),
  POS(1158, 3),
  POS(1161, 12),
  POS(1160, 3)
};

static TAB_NUM t_lambda_49[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_1156_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_1158_1_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1162, 15),
  POS(1162, 8),
  POS(1162, 7)
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_1158_1_str, TAIL_CALL,
  POS(1163, 7)
};

static TAB_NUM t_func_std_types__process_id___deserializer_of[] = {
  3, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(3), // 1170_0_argument
  // integer(argument))
  var_integer, 1, LOCAL(3), 1, LOCAL(1),
  // process_id(integer(argument))
  var_process_id, 1, LOCAL(1), 1, LOCAL(2),
  // -> process_id(integer(argument))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1172, 17),
  POS(1172, 6),
  POS(1172, 3)
};

static TAB_NUM t_func_extern_call[] = {
  5, // locals
  -2, // parameters
  MYSELF_PARAMETER, LOCAL(4), // 1178_0_myself
  REST_PARAMETER, LOCAL(5), // 1179_0_arguments
  // command_of(myself) map(flatten(arguments) to_string)
  var_command_of, 1, LOCAL(4), 1, LOCAL(1),
  // flatten(arguments) to_string)
  var_flatten, 1, LOCAL(5), 1, LOCAL(2),
  // map(flatten(arguments) to_string)
  var_map, 2, LOCAL(2), var_to_string, 1, LOCAL(3),
  // call! command_of(myself) map(flatten(arguments) to_string)
  var_call, 2, LOCAL(1), LOCAL(3), IO_TAIL_CALL,
  POS(1181, 9),
  POS(1181, 32),
  POS(1181, 28),
  POS(1181, 3)
};

static TAB_NUM t_func_std__pipe[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, var_1185_0_args,
  // $i 1
  LET, 1, num_1, 1, var_1187_1_i,
  // $n length_of(args)
  var_length_of, 1, var_1185_0_args, 1, var_1188_1_n,
  // $in_fd undefined
  LET, 1, var_undefined, 1, var_1189_1_in_fd,
  // $feed undefined
  LET, 1, var_undefined, 1, var_1190_1_feed,
  // $commands empty_list
  LET, 1, var_empty_list, 1, var_1191_1_commands,
  // $head undefined
  LET, 1, var_undefined, 1, var_1192_1_head,
  // $arguments undefined
  LET, 1, var_undefined, 1, var_1193_1_arguments,
  // $first_arg args(1)
  var_1185_0_args, 1, num_1, 1, var_1194_1_first_arg,
  // is_a_string:
  var_is_a_string, 1, var_1194_1_first_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_first_arg_is_a_string, lambda_51, IO_TAIL_CALL,
  POS(1187, 3),
  POS(1188, 3),
  POS(1189, 3),
  POS(1190, 3),
  POS(1191, 3),
  POS(1192, 3),
  POS(1193, 3),
  POS(1194, 3),
  POS(1196, 15),
  POS(1195, 3)
};

static TAB_NUM t_lambda_first_arg_is_a_string[] = {
  0, // locals
  0, // parameters
  // !feed first_arg
  LET, 1, var_1194_1_first_arg, 1, var_1190_1_feed,
  // !i 2
  LET, 1, num_2, 1, var_1187_1_i,
  // build_commands!
  func_build_commands, 0, IO_TAIL_CALL,
  POS(1197, 7),
  POS(1198, 7),
  POS(1199, 7)
};

static TAB_NUM t_lambda_51[] = {
  1, // locals
  0, // parameters
  // is_a_file_descriptor:
  var_is_a_file_descriptor, 1, var_1194_1_first_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_first_arg_is_a_file_descriptor, func_build_commands, IO_TAIL_CALL,
  POS(1202, 19),
  POS(1201, 7)
};

static TAB_NUM t_lambda_first_arg_is_a_file_descriptor[] = {
  0, // locals
  0, // parameters
  // !in_fd first_arg
  LET, 1, var_1194_1_first_arg, 1, var_1189_1_in_fd,
  // !i 2
  LET, 1, num_2, 1, var_1187_1_i,
  // build_commands!
  func_build_commands, 0, IO_TAIL_CALL,
  POS(1203, 11),
  POS(1204, 11),
  POS(1205, 11)
};

static TAB_NUM t_func_build_commands[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_52, lambda_56, IO_TAIL_CALL,
  POS(1209, 5)
};

static TAB_NUM t_lambda_52[] = {
  1, // locals
  0, // parameters
  // n break
  var_std__less, 2, var_1188_1_n, var_1187_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_53, IO_TAIL_CALL,
  POS(1212, 15),
  POS(1211, 9)
};

static TAB_NUM t_lambda_53[] = {
  1, // locals
  0, // parameters
  // $arg args(i)
  var_1185_0_args, 1, var_1187_1_i, 1, var_1214_1_arg,
  // is_a_function:
  var_is_a_function, 1, var_1214_1_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_arg_is_a_function, lambda_55, IO_TAIL_CALL,
  POS(1214, 13),
  POS(1216, 19),
  POS(1215, 13)
};

static TAB_NUM t_lambda_arg_is_a_function[] = {
  1, // locals
  0, // parameters
  // is_defined &commands:
  var_is_defined, 1, var_1192_1_head, 1, LOCAL(1),
  // update_if head.is_defined &commands:
  var_update_if, 3, LOCAL(1), var_1191_1_commands, lambda_54, 1, var_1191_1_commands,
  // !head command_of(arg)
  var_command_of, 1, var_1214_1_arg, 1, var_1192_1_head,
  // !arguments empty_list
  LET, 1, var_empty_list, 1, var_1193_1_arguments,
  // inc &i
  var_inc, 1, var_1187_1_i, 1, var_1187_1_i,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1217, 32),
  POS(1217, 17),
  POS(1219, 17),
  POS(1220, 17),
  POS(1221, 17),
  POS(1222, 17)
};

static TAB_NUM t_lambda_54[] = {
  3, // locals
  0, // parameters
  // flatten(arguments) to_string))
  var_flatten, 1, var_1193_1_arguments, 1, LOCAL(1),
  // map(flatten(arguments) to_string))
  var_map, 2, LOCAL(1), var_to_string, 1, LOCAL(2),
  // tuple(head map(flatten(arguments) to_string))
  var_tuple, 2, var_1192_1_head, LOCAL(2), 1, LOCAL(3),
  // push commands tuple(head map(flatten(arguments) to_string))
  var_push, 2, var_1191_1_commands, LOCAL(3), TAIL_CALL,
  POS(1218, 48),
  POS(1218, 44),
  POS(1218, 33),
  POS(1218, 19)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  // push &arguments arg
  var_push, 2, var_1193_1_arguments, var_1214_1_arg, 1, var_1193_1_arguments,
  // inc &i
  var_inc, 1, var_1187_1_i, 1, var_1187_1_i,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1224, 17),
  POS(1225, 17),
  POS(1226, 17)
};

static TAB_NUM t_lambda_56[] = {
  1, // locals
  0, // parameters
  // is_defined &commands:
  var_is_defined, 1, var_1192_1_head, 1, LOCAL(1),
  // update_if head.is_defined &commands:
  var_update_if, 3, LOCAL(1), var_1191_1_commands, lambda_57, 1, var_1191_1_commands,
  // run_pipe! in_fd feed commands
  func_run_pipe, 3, var_1189_1_in_fd, var_1190_1_feed, var_1191_1_commands, IO_TAIL_CALL,
  POS(1228, 24),
  POS(1228, 9),
  POS(1230, 9)
};

static TAB_NUM t_lambda_57[] = {
  3, // locals
  0, // parameters
  // flatten(arguments) to_string))
  var_flatten, 1, var_1193_1_arguments, 1, LOCAL(1),
  // map(flatten(arguments) to_string))
  var_map, 2, LOCAL(1), var_to_string, 1, LOCAL(2),
  // tuple(head map(flatten(arguments) to_string))
  var_tuple, 2, var_1192_1_head, LOCAL(2), 1, LOCAL(3),
  // push commands tuple(head map(flatten(arguments) to_string))
  var_push, 2, var_1191_1_commands, LOCAL(3), TAIL_CALL,
  POS(1229, 40),
  POS(1229, 36),
  POS(1229, 25),
  POS(1229, 11)
};

static TAB_NUM t_func_std__pipe_commands[] = {
  1, // locals
  -2, // parameters
  var_undefined, var_1234_0_feed_or_fd,
  MANDATORY_PARAMETER, var_1235_0_commands,
  // is_defined:
  var_is_defined, 1, var_1234_0_feed_or_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_feed_or_fd_is_defined, lambda_59, IO_TAIL_CALL,
  POS(1238, 16),
  POS(1237, 3)
};

static TAB_NUM t_lambda_feed_or_fd_is_defined[] = {
  1, // locals
  0, // parameters
  // is_a_file_descriptor:
  var_is_a_file_descriptor, 1, var_1234_0_feed_or_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_feed_or_fd_is_a_file_descriptor, lambda_58, IO_TAIL_CALL,
  POS(1240, 20),
  POS(1239, 7)
};

static TAB_NUM t_lambda_feed_or_fd_is_a_file_descriptor[] = {
  0, // locals
  0, // parameters
  // run_pipe! feed_or_fd undefined commands
  func_run_pipe, 3, var_1234_0_feed_or_fd, var_undefined, var_1235_0_commands, IO_TAIL_CALL,
  POS(1241, 11)
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  0, // parameters
  // run_pipe! undefined feed_or_fd commands
  func_run_pipe, 3, var_undefined, var_1234_0_feed_or_fd, var_1235_0_commands, IO_TAIL_CALL,
  POS(1243, 11)
};

static TAB_NUM t_lambda_59[] = {
  0, // locals
  0, // parameters
  // run_pipe! undefined undefined commands
  func_run_pipe, 3, var_undefined, var_undefined, var_1235_0_commands, IO_TAIL_CALL,
  POS(1245, 7)
};

static TAB_NUM t_func_run_pipe[] = {
  1, // locals
  3, // parameters
  var_1249_0_in_fd,
  var_1250_0_feed,
  var_1251_0_commands,
  // $pids empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_1253_1_pids,
  // $err_fds empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_1254_1_err_fds,
  // $out_fd in_fd
  LET, 1, var_1249_0_in_fd, 1, var_1255_1_out_fd,
  // $env_vars undefined
  LET, 1, var_undefined, 1, var_1256_1_env_vars,
  // is_defined &env_vars:
  var_is_defined, 1, var_environment, 1, LOCAL(1),
  // update_if environment.is_defined &env_vars:
  var_update_if, 3, LOCAL(1), var_1256_1_env_vars, lambda_60, 1, var_1256_1_env_vars,
  // for_each commands
  var_for_each, 3, var_1251_0_commands, lambda_63, lambda_67, IO_TAIL_CALL,
  POS(1253, 3),
  POS(1254, 3),
  POS(1255, 3),
  POS(1256, 3),
  POS(1257, 25),
  POS(1257, 3),
  POS(1264, 3)
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  0, // parameters
  // !env_vars empty_list
  LET, 1, var_empty_list, 1, var_1256_1_env_vars,
  // for_each environment
  var_for_each, 3, var_environment, lambda_61, lambda_62, TAIL_CALL,
  POS(1258, 5),
  POS(1259, 5)
};

static TAB_NUM t_lambda_61[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 1260_3_key
  LOCAL(3), // 1260_7_value
  // "@(key)=@(value)"
  var_std__string, 3, LOCAL(2), string_2, LOCAL(3), 1, LOCAL(1),
  // push &env_vars "@(key)=@(value)"
  var_push, 2, var_1256_1_env_vars, LOCAL(1), 1, var_1256_1_env_vars,
  // next
  var_next, 0, TAIL_CALL,
  POS(1261, 24),
  POS(1261, 9),
  POS(1262, 9)
};

static TAB_NUM t_lambda_62[] = {
  0, // locals
  0, // parameters
  //  env_vars
  LET, 1, var_1256_1_env_vars, TAIL_CALL,
  POS(1263, 9)
};

static TAB_NUM t_lambda_63[] = {
  3, // locals
  2, // parameters
  var_1265_3_idx,
  LOCAL(3), // 1265_7_command
  // command $head $arguments
  LOCAL(3), 0, 2, var_1266_9_head, var_1266_15_arguments,
  // map &arguments to_utf8
  var_map, 2, var_1266_15_arguments, var_to_utf8, 1, var_1266_15_arguments,
  // $pid undefined
  LET, 1, var_undefined, 1, var_1268_1_pid,
  // $err_fd undefined
  LET, 1, var_undefined, 1, var_1269_1_err_fd,
  // idx == 1 && in_fd.is_undefined:
  var_std__equal, 2, var_1265_3_idx, num_1, 1, LOCAL(1),
  // idx == 1 && in_fd.is_undefined:
  var_std__and, 2, LOCAL(1), lambda_64, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_65, lambda_66, IO_TAIL_CALL,
  POS(1266, 7),
  POS(1267, 7),
  POS(1268, 7),
  POS(1269, 7),
  POS(1271, 9),
  POS(1271, 9),
  POS(1270, 7)
};

static TAB_NUM t_lambda_64[] = {
  1, // locals
  0, // parameters
  // is_undefined:
  var_is_undefined, 1, var_1249_0_in_fd, 1, LOCAL(1),
  // in_fd.is_undefined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1271, 27),
  POS(1271, 21)
};

static TAB_NUM t_lambda_65[] = {
  0, // locals
  0, // parameters
  // create_process! !pid !in_fd !out_fd !err_fd head arguments env_vars
  var_create_process, 3, var_1266_9_head, var_1266_15_arguments, var_1256_1_env_vars, IO_CALL(4), var_1268_1_pid, var_1249_0_in_fd, var_1255_1_out_fd, var_1269_1_err_fd,
  // store_pid_and_err_fd!
  func_store_pid_and_err_fd, 0, IO_TAIL_CALL,
  POS(1272, 11),
  POS(1273, 11)
};

static TAB_NUM t_lambda_66[] = {
  0, // locals
  0, // parameters
  // create_process! !pid !out_fd !err_fd head arguments env_vars out_fd
  var_create_process, 4, var_1266_9_head, var_1266_15_arguments, var_1256_1_env_vars, var_1255_1_out_fd, IO_CALL(3), var_1268_1_pid, var_1255_1_out_fd, var_1269_1_err_fd,
  // store_pid_and_err_fd!
  func_store_pid_and_err_fd, 0, IO_TAIL_CALL,
  POS(1275, 11),
  POS(1276, 11)
};

static TAB_NUM t_func_store_pid_and_err_fd[] = {
  0, // locals
  0, // parameters
  // pids(pid) idx
  var_1253_1_pids, 2, var_1268_1_pid, var_1265_3_idx, 1, var_1253_1_pids,
  // err_fds(err_fd) idx
  var_1254_1_err_fds, 2, var_1269_1_err_fd, var_1265_3_idx, 1, var_1254_1_err_fds,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1279, 10),
  POS(1280, 10),
  POS(1281, 9)
};

static TAB_NUM t_lambda_67[] = {
  2, // locals
  0, // parameters
  // list(undefined) length_of(commands))
  var_list, 1, var_undefined, 1, LOCAL(1),
  // length_of(commands))
  var_length_of, 1, var_1251_0_commands, 1, LOCAL(2),
  // $ret dup(list(undefined) length_of(commands))
  var_dup, 2, LOCAL(1), LOCAL(2), 1, var_1283_1_ret,
  // $out ""
  LET, 1, string_1, 1, var_1284_1_out,
  // length_of(commands))
  var_length_of, 1, var_1251_0_commands, 1, LOCAL(2),
  // $err dup(list("") length_of(commands))
  var_dup, 2, list_1285_9, LOCAL(2), 1, var_1285_1_err,
  // is_defined
  var_is_defined, 1, var_1250_0_feed, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_manage_io, lambda_68, IO_TAIL_CALL,
  POS(1283, 16),
  POS(1283, 32),
  POS(1283, 7),
  POS(1284, 7),
  POS(1285, 25),
  POS(1285, 7),
  POS(1287, 14),
  POS(1286, 7)
};

static TAB_NUM t_lambda_68[] = {
  0, // locals
  0, // parameters
  // close! in_fd
  var_close, 1, var_1249_0_in_fd, IO_CALL(0),
  // !in_fd undefined
  LET, 1, var_undefined, 1, var_1249_0_in_fd,
  // manage_io!
  func_manage_io, 0, IO_TAIL_CALL,
  POS(1290, 11),
  POS(1291, 11),
  POS(1292, 11)
};

static TAB_NUM t_func_manage_io[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_6_loop, IO_TAIL_CALL,
  POS(1295, 9)
};

static TAB_NUM t_lambda_6_loop[] = {
  3, // locals
  0, // parameters
  // $read_descriptor_list keys_of(err_fds)
  var_keys_of, 1, var_1254_1_err_fds, 1, var_1296_1_read_descriptor_list,
  // is_defined
  var_is_defined, 1, var_1249_0_in_fd, 1, LOCAL(1),
  // $write_descriptor_list
  var_if, 3, LOCAL(1), lambda_69, lambda_70, 1, LOCAL(2),
  // is_defined &read_descriptor_list:
  var_is_defined, 1, var_1255_1_out_fd, 1, LOCAL(1),
  // update_if out_fd.is_defined &read_descriptor_list:
  var_update_if, 3, LOCAL(1), var_1296_1_read_descriptor_list, lambda_71, 1, var_1296_1_read_descriptor_list,
  // pselect!
  var_pselect, 3, var_1296_1_read_descriptor_list, LOCAL(2), var_empty_list, IO_CALL(4), LOCAL(3), var_1306_1_read_descriptors, var_1307_1_write_descriptors, LOCAL(1),
  // for_each signals
  var_for_each, 3, LOCAL(3), lambda_72, lambda_75, IO_TAIL_CALL,
  POS(1296, 11),
  POS(1299, 21),
  POS(1297, 11),
  POS(1302, 28),
  POS(1302, 11),
  POS(1304, 11),
  POS(1309, 11)
};

static TAB_NUM t_lambda_69[] = {
  1, // locals
  0, // parameters
  // list(in_fd)
  var_list, 1, var_1249_0_in_fd, 1, LOCAL(1),
  //  list(in_fd)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1300, 18),
  POS(1300, 17)
};

static TAB_NUM t_lambda_70[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(1301, 17)
};

static TAB_NUM t_lambda_71[] = {
  0, // locals
  0, // parameters
  // push read_descriptor_list out_fd
  var_push, 2, var_1296_1_read_descriptor_list, var_1255_1_out_fd, TAIL_CALL,
  POS(1303, 13)
};

static TAB_NUM t_lambda_72[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1310_3_signal
  // signal == CHILD_CHANGED_STATE:
  var_std__equal, 2, LOCAL(2), var_CHILD_CHANGED_STATE, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_73, var_next, IO_TAIL_CALL,
  POS(1312, 17),
  POS(1311, 15)
};

static TAB_NUM t_lambda_73[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_74, var_next, IO_TAIL_CALL,
  POS(1313, 19)
};

static TAB_NUM t_lambda_74[] = {
  1, // locals
  0, // parameters
  // wait! $rpid $status
  var_wait, 0, IO_CALL(2), var_1315_7_rpid, var_1315_13_status,
  // is_defined:
  var_is_defined, 1, var_1315_7_rpid, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_rpid_is_defined, var_break, IO_TAIL_CALL,
  POS(1315, 23),
  POS(1317, 30),
  POS(1316, 23)
};

static TAB_NUM t_lambda_rpid_is_defined[] = {
  2, // locals
  0, // parameters
  // pids(rpid)) status
  var_1253_1_pids, 1, var_1315_7_rpid, 1, LOCAL(2),
  // ret(pids(rpid)) status
  var_1283_1_ret, 2, LOCAL(2), var_1315_13_status, 1, var_1283_1_ret,
  // pids(rpid) undefined
  var_1253_1_pids, 2, var_1315_7_rpid, var_undefined, 1, var_1253_1_pids,
  // is_empty
  var_is_empty, 1, var_1253_1_pids, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), var_break, var_next, IO_TAIL_CALL,
  POS(1318, 32),
  POS(1318, 28),
  POS(1319, 28),
  POS(1321, 34),
  POS(1320, 27)
};

static TAB_NUM t_lambda_75[] = {
  0, // locals
  0, // parameters
  // for_each write_descriptors
  var_for_each, 3, var_1307_1_write_descriptors, lambda_76, lambda_77, IO_TAIL_CALL,
  POS(1328, 15)
};

static TAB_NUM t_lambda_76[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 1329_3_write_descriptor
  // write! $bytes_written write_descriptor feed
  var_write, 2, LOCAL(2), var_1250_0_feed, IO_CALL(1), LOCAL(3),
  // bytes_written+1 -1
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // range &feed bytes_written+1 -1
  var_range, 3, var_1250_0_feed, LOCAL(1), minus_num_1, 1, var_1250_0_feed,
  // is_empty:
  var_is_empty, 1, var_1250_0_feed, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_feed_is_empty, var_next, IO_TAIL_CALL,
  POS(1330, 19),
  POS(1331, 31),
  POS(1331, 19),
  POS(1333, 26),
  POS(1332, 19)
};

static TAB_NUM t_lambda_feed_is_empty[] = {
  0, // locals
  0, // parameters
  // close! in_fd
  var_close, 1, var_1249_0_in_fd, IO_CALL(0),
  // !in_fd undefined
  LET, 1, var_undefined, 1, var_1249_0_in_fd,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1334, 23),
  POS(1335, 23),
  POS(1336, 23)
};

static TAB_NUM t_lambda_77[] = {
  0, // locals
  0, // parameters
  // for_each read_descriptors
  var_for_each, 3, var_1306_1_read_descriptors, lambda_78, lambda_84, IO_TAIL_CALL,
  POS(1339, 19)
};

static TAB_NUM t_lambda_78[] = {
  1, // locals
  1, // parameters
  var_1340_3_read_descriptor,
  // read! $buf read_descriptor 0x100000
  var_read, 2, var_1340_3_read_descriptor, num_0x100000, IO_CALL(1), var_1341_7_buf,
  // is_empty: # closed from the other side
  var_is_empty, 1, var_1341_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_empty, lambda_81, IO_TAIL_CALL,
  POS(1341, 23),
  POS(1343, 29),
  POS(1342, 23)
};

static TAB_NUM t_lambda_buf_is_empty[] = {
  1, // locals
  0, // parameters
  // close! read_descriptor
  var_close, 1, var_1340_3_read_descriptor, IO_CALL(0),
  // read_descriptor == out_fd:
  var_std__equal, 2, var_1340_3_read_descriptor, var_1255_1_out_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_79, lambda_80, IO_TAIL_CALL,
  POS(1344, 27),
  POS(1346, 29),
  POS(1345, 27)
};

static TAB_NUM t_lambda_79[] = {
  0, // locals
  0, // parameters
  // !out_fd undefined
  LET, 1, var_undefined, 1, var_1255_1_out_fd,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1347, 31),
  POS(1348, 31)
};

static TAB_NUM t_lambda_80[] = {
  0, // locals
  0, // parameters
  // err_fds(read_descriptor) undefined
  var_1254_1_err_fds, 2, var_1340_3_read_descriptor, var_undefined, 1, var_1254_1_err_fds,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1350, 32),
  POS(1351, 31)
};

static TAB_NUM t_lambda_81[] = {
  1, // locals
  0, // parameters
  // read_descriptor == out_fd:
  var_std__equal, 2, var_1340_3_read_descriptor, var_1255_1_out_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_82, lambda_83, IO_TAIL_CALL,
  POS(1354, 29),
  POS(1353, 27)
};

static TAB_NUM t_lambda_82[] = {
  0, // locals
  0, // parameters
  // append &out buf
  var_append, 2, var_1284_1_out, var_1341_7_buf, 1, var_1284_1_out,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1355, 31),
  POS(1356, 31)
};

static TAB_NUM t_lambda_83[] = {
  2, // locals
  0, // parameters
  // err_fds(read_descriptor)) buf
  var_1254_1_err_fds, 1, var_1340_3_read_descriptor, 1, LOCAL(1),
  // err(err_fds(read_descriptor)) buf
  var_1285_1_err, 1, LOCAL(1), 1, LOCAL(2),
  // append &err(err_fds(read_descriptor)) buf
  var_append, 2, LOCAL(2), var_1341_7_buf, 1, LOCAL(2),
  // err(err_fds(read_descriptor)) buf
  var_1285_1_err, 2, LOCAL(1), LOCAL(2), 1, var_1285_1_err,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1358, 43),
  POS(1358, 39),
  POS(1358, 31),
  POS(1358, 39),
  POS(1359, 31)
};

static TAB_NUM t_lambda_84[] = {
  2, // locals
  0, // parameters
  // is_empty && out_fd.is_undefined && err_fds.is_empty
  var_is_empty, 1, var_1253_1_pids, 1, LOCAL(1),
  // is_empty && out_fd.is_undefined && err_fds.is_empty
  var_std__and, 2, LOCAL(1), lambda_85, 1, LOCAL(2),
  // if!
  var_if, 3, LOCAL(2), lambda_87, var_next, IO_TAIL_CALL,
  POS(1362, 30),
  POS(1362, 30),
  POS(1361, 23)
};

static TAB_NUM t_lambda_85[] = {
  2, // locals
  0, // parameters
  // is_undefined && err_fds.is_empty
  var_is_undefined, 1, var_1255_1_out_fd, 1, LOCAL(1),
  // is_undefined && err_fds.is_empty
  var_std__and, 2, LOCAL(1), lambda_86, 1, LOCAL(2),
  // out_fd.is_undefined && err_fds.is_empty
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1362, 49),
  POS(1362, 49),
  POS(1362, 42)
};

static TAB_NUM t_lambda_86[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_1254_1_err_fds, 1, LOCAL(1),
  // err_fds.is_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1362, 73),
  POS(1362, 65)
};

static TAB_NUM t_lambda_87[] = {
  0, // locals
  0, // parameters
  //  ret out err
  LET, 3, var_1283_1_ret, var_1284_1_out, var_1285_1_err, TAIL_CALL,
  POS(1363, 27)
};

static TAB_NUM t_func_std__which[] = {
  1, // locals
  1, // parameters
  var_1368_0_name,
  // is_undefined:
  var_is_undefined, 1, var_environment, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_environment_is_undefined, func_search, IO_TAIL_CALL,
  POS(1371, 17),
  POS(1370, 3)
};

static TAB_NUM t_lambda_environment_is_undefined[] = {
  0, // locals
  0, // parameters
  // get_environment !environment
  var_get_environment, 0, 1, var_environment,
  // search!
  func_search, 0, IO_TAIL_CALL,
  POS(1372, 7),
  POS(1373, 7)
};

static TAB_NUM t_func_search[] = {
  2, // locals
  0, // parameters
  // environment("PATH") ':')
  var_environment, 1, str_PATH, 1, LOCAL(1),
  // split(environment("PATH") ':')
  var_split, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // for_each split(environment("PATH") ':')
  var_for_each, 3, LOCAL(2), lambda_88, lambda_90, IO_TAIL_CALL,
  POS(1377, 20),
  POS(1377, 14),
  POS(1377, 5)
};

static TAB_NUM t_lambda_88[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 1378_3_pathname
  // $filename append(pathname "/" name)
  var_append, 3, LOCAL(1), string_4, var_1368_0_name, 1, var_1379_1_filename,
  // file_exists! filename $does_exist
  var_file_exists, 1, var_1379_1_filename, IO_CALL(1), LOCAL(2),
  // if! does_exist
  var_if, 3, LOCAL(2), lambda_89, var_next, IO_TAIL_CALL,
  POS(1379, 9),
  POS(1380, 9),
  POS(1381, 9)
};

static TAB_NUM t_lambda_89[] = {
  0, // locals
  0, // parameters
  //  filename
  LET, 1, var_1379_1_filename, TAIL_CALL,
  POS(1382, 13)
};

static TAB_NUM t_lambda_90[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1384, 9)
};

static TAB_NUM t_func_std__find_first_process[] = {
  0, // locals
  1, // parameters
  var_1386_27_name,
  // opendir! $dir "/proc"
  var_opendir, 1, str_proc, IO_CALL(1), var_1387_10_dir,
  // loop:
  var_loop, 1, lambda_7_loop, IO_TAIL_CALL,
  POS(1387, 3),
  POS(1388, 3)
};

static TAB_NUM t_lambda_7_loop[] = {
  1, // locals
  0, // parameters
  // readdir! $entry dir
  var_readdir, 1, var_1387_10_dir, IO_CALL(1), var_1389_10_entry,
  // is_an_error:
  var_is_an_error, 1, var_1389_10_entry, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_entry_is_an_error, lambda_91, IO_TAIL_CALL,
  POS(1389, 5),
  POS(1391, 13),
  POS(1390, 5)
};

static TAB_NUM t_lambda_2_entry_is_an_error[] = {
  0, // locals
  0, // parameters
  // closedir! dir
  var_closedir, 1, var_1387_10_dir, IO_CALL(0),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1392, 9),
  POS(1393, 9)
};

static TAB_NUM t_lambda_91[] = {
  2, // locals
  0, // parameters
  // $proc_num name_of(entry)
  var_name_of, 1, var_1389_10_entry, 1, var_1395_1_proc_num,
  // many(DIGIT):
  var_many, 1, var_DIGIT, 1, LOCAL(1),
  // proc_num .matches. many(DIGIT):
  var_matches, 2, var_1395_1_proc_num, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_92, var_next, IO_TAIL_CALL,
  POS(1395, 9),
  POS(1397, 30),
  POS(1397, 11),
  POS(1396, 9)
};

static TAB_NUM t_lambda_92[] = {
  1, // locals
  0, // parameters
  // "/proc/@(proc_num)/cmdline"
  var_std__string, 3, str_proc_2, var_1395_1_proc_num, str_cmdline, 1, LOCAL(1),
  // load! $buf "/proc/@(proc_num)/cmdline"
  var_load, 1, LOCAL(1), IO_CALL(1), var_1398_7_buf,
  // is_empty
  var_is_empty, 1, var_1398_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_93, IO_TAIL_CALL,
  POS(1398, 24),
  POS(1398, 13),
  POS(1400, 19),
  POS(1399, 13)
};

static TAB_NUM t_lambda_93[] = {
  2, // locals
  0, // parameters
  // $proc_name buf .truncate_from. '@0;'
  var_truncate_from, 2, var_1398_7_buf, chr_0, 1, LOCAL(2),
  // truncate_until &proc_name '/' -1
  var_truncate_until, 3, LOCAL(2), chr_47, minus_num_1, 1, LOCAL(2),
  // proc_name .matches. name
  var_matches, 2, LOCAL(2), var_1386_27_name, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), lambda_94, var_next, IO_TAIL_CALL,
  POS(1403, 17),
  POS(1404, 17),
  POS(1406, 19),
  POS(1405, 17)
};

static TAB_NUM t_lambda_94[] = {
  1, // locals
  0, // parameters
  // to_integer
  var_to_integer, 1, var_1395_1_proc_num, 1, LOCAL(1),
  //  proc_num.to_integer
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1407, 31),
  POS(1407, 21)
};

static TAB_NUM t_func_std__find_processes[] = {
  0, // locals
  1, // parameters
  var_1411_23_name,
  // opendir! $dir "/proc"
  var_opendir, 1, str_proc, IO_CALL(1), var_1412_10_dir,
  // $pids empty_list
  LET, 1, var_empty_list, 1, var_1413_1_pids,
  // loop:
  var_loop, 1, lambda_8_loop, IO_TAIL_CALL,
  POS(1412, 3),
  POS(1413, 3),
  POS(1414, 3)
};

static TAB_NUM t_lambda_8_loop[] = {
  1, // locals
  0, // parameters
  // readdir! $entry dir
  var_readdir, 1, var_1412_10_dir, IO_CALL(1), var_1415_10_entry,
  // is_an_error:
  var_is_an_error, 1, var_1415_10_entry, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3_entry_is_an_error, lambda_95, IO_TAIL_CALL,
  POS(1415, 5),
  POS(1417, 13),
  POS(1416, 5)
};

static TAB_NUM t_lambda_3_entry_is_an_error[] = {
  0, // locals
  0, // parameters
  // closedir! dir
  var_closedir, 1, var_1412_10_dir, IO_CALL(0),
  // -> pids
  LET, 1, var_1413_1_pids, TAIL_CALL,
  POS(1418, 9),
  POS(1419, 9)
};

static TAB_NUM t_lambda_95[] = {
  2, // locals
  0, // parameters
  // $proc_num name_of(entry)
  var_name_of, 1, var_1415_10_entry, 1, var_1421_1_proc_num,
  // many(DIGIT):
  var_many, 1, var_DIGIT, 1, LOCAL(1),
  // proc_num .matches. many(DIGIT):
  var_matches, 2, var_1421_1_proc_num, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_96, var_next, IO_TAIL_CALL,
  POS(1421, 9),
  POS(1423, 30),
  POS(1423, 11),
  POS(1422, 9)
};

static TAB_NUM t_lambda_96[] = {
  1, // locals
  0, // parameters
  // "/proc/@(proc_num)/cmdline"
  var_std__string, 3, str_proc_2, var_1421_1_proc_num, str_cmdline, 1, LOCAL(1),
  // load! $buf "/proc/@(proc_num)/cmdline"
  var_load, 1, LOCAL(1), IO_CALL(1), var_1424_7_buf,
  // is_empty
  var_is_empty, 1, var_1424_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_97, IO_TAIL_CALL,
  POS(1424, 24),
  POS(1424, 13),
  POS(1426, 19),
  POS(1425, 13)
};

static TAB_NUM t_lambda_97[] = {
  2, // locals
  0, // parameters
  // $proc_name buf .truncate_from. '@0;'
  var_truncate_from, 2, var_1424_7_buf, chr_0, 1, LOCAL(2),
  // truncate_until &proc_name '/' -1
  var_truncate_until, 3, LOCAL(2), chr_47, minus_num_1, 1, LOCAL(2),
  // proc_name .matches. name:
  var_matches, 2, LOCAL(2), var_1411_23_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_98, var_next, IO_TAIL_CALL,
  POS(1429, 17),
  POS(1430, 17),
  POS(1432, 19),
  POS(1431, 17)
};

static TAB_NUM t_lambda_98[] = {
  1, // locals
  0, // parameters
  // to_integer
  var_to_integer, 1, var_1421_1_proc_num, 1, LOCAL(1),
  // push &pids proc_num.to_integer
  var_push, 2, var_1413_1_pids, LOCAL(1), 1, var_1413_1_pids,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1433, 41),
  POS(1433, 21),
  POS(1434, 21)
};

static TAB_NUM t_func_std__get_process_name[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1438_25_pid
  // "/proc/@(pid)/cmdline"
  var_std__string, 3, str_proc_2, LOCAL(2), str_cmdline, 1, LOCAL(1),
  // load! $buf "/proc/@(pid)/cmdline"
  var_load, 1, LOCAL(1), IO_CALL(1), var_1439_7_buf,
  // is_an_error
  var_is_an_error, 1, var_1439_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_99, lambda_100, TAIL_CALL,
  POS(1439, 14),
  POS(1439, 3),
  POS(1441, 9),
  POS(1440, 3)
};

static TAB_NUM t_lambda_99[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1442, 7)
};

static TAB_NUM t_lambda_100[] = {
  1, // locals
  0, // parameters
  // buf .truncate_from. '@0;'
  var_truncate_from, 2, var_1439_7_buf, chr_0, 1, LOCAL(1),
  //  buf .truncate_from. '@0;'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1443, 8),
  POS(1443, 7)
};

static TAB_NUM t_func_std__extern[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1449_0_command
  // .command_of command)
  LET, -1, func_extern_call, var_command_of, LOCAL(2), LOCAL(1),
  // -> extern_call(.command_of command)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1451, 18),
  POS(1451, 3)
};

static int list_1285_9_arguments[] = {
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__file_descriptor___load}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___load}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_load_file}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_read_data}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_file_closed}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_read_failed}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___save}},
  {FLT_STRING_8, 2, {.str_8 = "w+"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__try}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__check}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__file_exists}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__directory}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_entry_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_sort}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__stat___access_time_of}},
  {FLT_POSITIVE_INT64, 0, {.value = 1000000000}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__stat___modification_time_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__stat___status_change_time_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__stat___is_a_directory}},
  {FLT_CHARACTER, 0, {.value = 100}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__call}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_STRING_8, 1, {.str_8 = "="}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_READ}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_out_fd}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_collect_output}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_err_fd}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_collect_error_output}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_PROCESS_JOINED}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_do_collect_output}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__terminate}},
  {FLT_STRING_8, 15, {.str_8 = "file_descriptor"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__file_descriptor___serialize}},
  {FLT_STRING_8, 16, {.str_8 = "file_descriptor "}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__file_descriptor___deserializer_of}},
  {FLT_STRING_8, 10, {.str_8 = "process_id"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__process_id___serialize}},
  {FLT_STRING_8, 11, {.str_8 = "process_id "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__process_id___deserializer_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_extern_call}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__pipe}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_first_arg_is_a_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_first_arg_is_a_file_descriptor}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_build_commands}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_arg_is_a_function}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__pipe_commands}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_feed_or_fd_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_feed_or_fd_is_a_file_descriptor}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_run_pipe}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_store_pid_and_err_fd}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_LIST, 1, {.arguments = list_1285_9_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_manage_io}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_rpid_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_feed_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_buf_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__which}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_environment_is_undefined}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search}},
  {FLT_STRING_8, 4, {.str_8 = "PATH"}},
  {FLT_CHARACTER, 0, {.value = 58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_88}},
  {FLT_STRING_8, 1, {.str_8 = "/"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_89}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_90}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__find_first_process}},
  {FLT_STRING_8, 5, {.str_8 = "/proc"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_entry_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_91}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_92}},
  {FLT_STRING_8, 6, {.str_8 = "/proc/"}},
  {FLT_STRING_8, 8, {.str_8 = "/cmdline"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_93}},
  {FLT_CHARACTER, 0, {.value = 0}},
  {FLT_CHARACTER, 0, {.value = 47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_94}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__find_processes}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_entry_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_95}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_96}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_97}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_98}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__get_process_name}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_99}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_100}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__extern}}
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
  {var_load, -func_std_types__io___load}
};

static ATTRIBUTE_DEFINITION std_types__stat__attributes[] = {
  {var_access_time_of, -func_std_types__stat___access_time_of},
  {var_modification_time_of, -func_std_types__stat___modification_time_of},
  {var_status_change_time_of, -func_std_types__stat___status_change_time_of},
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

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "update\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(60, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "load\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "save\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "access_time_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "modification_time_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "status_change_time_of\000std", NULL,
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
    "126_0_duration\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(128, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(128, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(128, 49)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "usleep\000", NULL,
    {.position = POS(128, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(128, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "write_string_to\000std", NULL,
    {.const_idx = -func_std__write_string_to}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "153_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "154_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "156_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(156, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "159_8_bytes_written\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write\000", NULL,
    {.position = POS(159, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(161, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(166, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(166, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(167, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(168, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(164, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(169, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(157, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "write_to\000std", NULL,
    {.const_idx = -func_std__write_to}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(198, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write_string_to\000", NULL,
    {.position = POS(198, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "writeln_to\000std", NULL,
    {.const_idx = -func_std__writeln_to}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(227, 23)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "print_string_to\000std", NULL,
    {.const_idx = -func_std__print_string_to}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(255, 27)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "print_to\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 6,
    "file_descriptor\000std_types", std_types__file_descriptor__attributes,
    {.position = POS(259, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "print_to\000", NULL,
    {.position = POS(259, 29)}
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
    {.position = POS(335, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "print\000std", NULL,
    {.const_idx = -func_std__print}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print_string\000", NULL,
    {.position = POS(361, 3)}
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
    {.position = POS(415, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "eprint\000std", NULL,
    {.const_idx = -func_std__eprint}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprint_string\000", NULL,
    {.position = POS(441, 3)}
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
    "488_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "489_0_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "491_1_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "493_7_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read\000", NULL,
    {.position = POS(493, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(496, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(497, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(498, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000", NULL,
    {.position = POS(499, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(494, 5)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "read_from_until\000std", NULL,
    {.const_idx = -func_std__read_from_until}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "530_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "531_0_sentinel\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "532_0_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "534_1_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "536_7_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(543, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(544, 13)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "readln_from\000std", NULL,
    {.const_idx = -func_std__readln_from}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read_from_until\000", NULL,
    {.position = POS(574, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "read_all_from\000std", NULL,
    {.const_idx = -func_std__read_all_from}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "595_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "597_1_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "599_7_buf\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "get_from_until\000std", NULL,
    {.const_idx = -func_std__get_from_until}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_utf8\000", NULL,
    {.position = POS(641, 11)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "getln_from\000std", NULL,
    {.const_idx = -func_std__getln_from}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_from_until\000", NULL,
    {.position = POS(667, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "get_until\000std", NULL,
    {.const_idx = -func_std__get_until}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDIN_FILENO\000", NULL,
    {.position = POS(696, 19)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "getln\000std", NULL,
    {.const_idx = -func_std__getln}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "getln_from\000", NULL,
    {.position = POS(718, 3)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "string\000std_types", std_types__string__attributes,
    {.position = POS(720, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "load\000", NULL,
    {.position = POS(720, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "737_0_max_length\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(737, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "739_7_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open\000", NULL,
    {.position = POS(739, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "check\000", NULL,
    {.position = POS(740, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(742, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read_from\000", NULL,
    {.position = POS(743, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "close\000", NULL,
    {.position = POS(744, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read_all_from\000", NULL,
    {.position = POS(767, 3)}
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
    FOT_UNKNOWN, 0, 4,
    "io\000std_types", std_types__io__attributes,
    {.position = POS(776, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(776, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "run\000", NULL,
    {.position = POS(787, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "789_13_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "789_16_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "789_28_max_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "790_7_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "JOB_FAILED\000", NULL,
    {.position = POS(793, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(793, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "start_reading_from\000", NULL,
    {.position = POS(795, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ\000", NULL,
    {.position = POS(800, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value_pair\000std", NULL,
    {.position = POS(800, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CLOSED\000", NULL,
    {.position = POS(801, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ_FAILED\000", NULL,
    {.position = POS(802, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "register_handlers\000", NULL,
    {.position = POS(799, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "805_13_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "805_16_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "806_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "807_1_max_length\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(810, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(810, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deregister_all_handlers\000", NULL,
    {.position = POS(811, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "JOB_COMPLETED\000", NULL,
    {.position = POS(816, 19)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "save\000", NULL,
    {.position = POS(837, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write_to\000", NULL,
    {.position = POS(862, 3)}
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
    "897_0_argument\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "file_exists\000std", NULL,
    {.const_idx = -func_std__file_exists}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "stat\000", NULL,
    {.position = POS(920, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(921, 6)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "directory\000std", NULL,
    {.const_idx = -func_std__directory}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SORT\000", NULL,
    {.position = POS(946, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(946, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "946_14_do_sort\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "extract_options\000", NULL,
    {.position = POS(945, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "947_1_entries\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(947, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "948_10_dir\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "opendir\000", NULL,
    {.position = POS(948, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "950_10_entry\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "readdir\000", NULL,
    {.position = POS(950, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "closedir\000", NULL,
    {.position = POS(953, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "name_of\000", NULL,
    {.position = POS(956, 43)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sort\000", NULL,
    {.position = POS(956, 13)}
  },
  {
    FOT_UNKNOWN, 0, 4,
    "stat\000std_types", std_types__stat__attributes,
    {.position = POS(962, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "access_time_of\000", NULL,
    {.position = POS(962, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "access_time_seconds_of\000", NULL,
    {.position = POS(974, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "access_time_nanoseconds_of\000", NULL,
    {.position = POS(975, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "over\000std", NULL,
    {.position = POS(975, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "modification_time_of\000", NULL,
    {.position = POS(977, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "modification_time_seconds_of\000", NULL,
    {.position = POS(986, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "modification_time_nanoseconds_of\000", NULL,
    {.position = POS(987, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "status_change_time_of\000", NULL,
    {.position = POS(989, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "status_change_time_seconds_of\000", NULL,
    {.position = POS(998, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "status_change_time_nanoseconds_of\000", NULL,
    {.position = POS(999, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_directory\000", NULL,
    {.position = POS(1001, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mode_of\000", NULL,
    {.position = POS(1008, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(1008, 6)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "call\000std", NULL,
    {.const_idx = -func_std__call}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(1023, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1023_1_do_collect_output\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1024_1_do_collect_error_output\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1025_1_env_vars\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_string\000", NULL,
    {.position = POS(1026, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(1026, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "environment\000", NULL,
    {.position = POS(1027, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(1031, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(1029, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(1027, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1034_29_out_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1034_37_err_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_process\000", NULL,
    {.position = POS(1034, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1036_1_io\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "join_process\000", NULL,
    {.position = POS(1037, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1041_1_out\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1042_1_err\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_events\000", NULL,
    {.position = POS(1044, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1046_13_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1046_17_data\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(1053, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PROCESS_JOINED\000", NULL,
    {.position = POS(1072, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1073_1_ret\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "terminate\000std", NULL,
    {.const_idx = -func_std__terminate}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXIT_SUCCESS\000", NULL,
    {.position = POS(1094, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exit\000", NULL,
    {.position = POS(1094, 3)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_file_descriptor\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(1100, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_file_descriptor\000", NULL,
    {.position = POS(1100, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(1108, 29)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(1112, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1117_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1119_1_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(1123, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deserializer_of\000", NULL,
    {.position = POS(1126, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "integer\000", NULL,
    {.position = POS(1133, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "file_descriptor\000", NULL,
    {.position = POS(1133, 6)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_process_id\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_process_id\000", NULL,
    {.position = POS(1139, 20)}
  },
  {
    FOT_UNKNOWN, 0, 4,
    "process_id\000std_types", std_types__process_id__attributes,
    {.position = POS(1143, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1156_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1158_1_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "process_id\000", NULL,
    {.position = POS(1172, 6)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "command_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "flatten\000", NULL,
    {.position = POS(1181, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "call\000", NULL,
    {.position = POS(1181, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pipe\000std", NULL,
    {.const_idx = -func_std__pipe}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1185_0_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1187_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1188_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1189_1_in_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1190_1_feed\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1191_1_commands\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1192_1_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1193_1_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1194_1_first_arg\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(1196, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1214_1_arg\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_function\000", NULL,
    {.position = POS(1216, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(1221, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pipe_commands\000std", NULL,
    {.const_idx = -func_std__pipe_commands}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1234_0_feed_or_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1235_0_commands\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1249_0_in_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1250_0_feed\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1251_0_commands\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1253_1_pids\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1254_1_err_fds\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1255_1_out_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1256_1_env_vars\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1265_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1266_9_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1266_15_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1268_1_pid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1269_1_err_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(1271, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(1283, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1283_1_ret\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dup\000", NULL,
    {.position = POS(1283, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1284_1_out\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1285_1_err\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1296_1_read_descriptor_list\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "keys_of\000", NULL,
    {.position = POS(1296, 33)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1306_1_read_descriptors\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1307_1_write_descriptors\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pselect\000", NULL,
    {.position = POS(1304, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CHILD_CHANGED_STATE\000", NULL,
    {.position = POS(1312, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1315_7_rpid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1315_13_status\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "wait\000", NULL,
    {.position = POS(1315, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1340_3_read_descriptor\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1341_7_buf\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "which\000std", NULL,
    {.const_idx = -func_std__which}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1368_0_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_environment\000", NULL,
    {.position = POS(1372, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split\000", NULL,
    {.position = POS(1377, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1379_1_filename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "file_exists\000", NULL,
    {.position = POS(1380, 9)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "find_first_process\000std", NULL,
    {.const_idx = -func_std__find_first_process}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1386_27_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1387_10_dir\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1389_10_entry\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1395_1_proc_num\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DIGIT\000", NULL,
    {.position = POS(1397, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "many\000", NULL,
    {.position = POS(1397, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "matches\000", NULL,
    {.position = POS(1397, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1398_7_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(1403, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_until\000", NULL,
    {.position = POS(1404, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "find_processes\000std", NULL,
    {.const_idx = -func_std__find_processes}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1411_23_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1412_10_dir\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1413_1_pids\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1415_10_entry\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1421_1_proc_num\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1424_7_buf\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "get_process_name\000std", NULL,
    {.const_idx = -func_std__get_process_name}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1439_7_buf\000", NULL
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
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  213, // number of constants
  277, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
