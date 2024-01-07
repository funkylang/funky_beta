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
  func_std__print_to = -15,
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
  num_1048576 = -45,
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
  func_std_types__file_descriptor___load = -58,
  func_std_types__string___save = -59,
  str_w = -60,
  func_std__try = -61,
  func_std__check = -62,
  lambda_25 = -63,
  func_std__file_exists = -64,
  func_std__directory = -65,
  lambda_4_loop = -66,
  lambda_entry_is_an_error = -67,
  lambda_26 = -68,
  func_std_types__stat___access_time_of = -69,
  num_1000000000 = -70,
  func_std_types__stat___modification_time_of = -71,
  func_std_types__stat___status_change_time_of = -72,
  func_std_types__stat___is_a_directory = -73,
  chr_100 = -74,
  func_std__call = -75,
  num_2 = -76,
  num_3 = -77,
  lambda_27 = -78,
  lambda_28 = -79,
  string_2 = -80,
  lambda_29 = -81,
  lambda_5_loop = -82,
  lambda_30 = -83,
  lambda_READ = -84,
  lambda_31 = -85,
  lambda_32 = -86,
  lambda_out_fd = -87,
  lambda_do_collect_output = -88,
  lambda_33 = -89,
  lambda_err_fd = -90,
  lambda_do_collect_error_output = -91,
  lambda_34 = -92,
  lambda_35 = -93,
  lambda_PROCESS_JOINED = -94,
  lambda_2_do_collect_output = -95,
  lambda_36 = -96,
  lambda_37 = -97,
  lambda_38 = -98,
  lambda_39 = -99,
  func_std__terminate = -100,
  str_file_descriptor = -101,
  func_std_types__file_descriptor___serialize = -102,
  str_file_descriptor_2 = -103,
  string_3 = -104,
  lambda_40 = -105,
  lambda_41 = -106,
  func_std_types__file_descriptor___deserializer_of = -107,
  str_process_id = -108,
  func_std_types__process_id___serialize = -109,
  str_process_id_2 = -110,
  lambda_42 = -111,
  lambda_43 = -112,
  func_std_types__process_id___deserializer_of = -113,
  func_extern_call = -114,
  func_std__pipe = -115,
  lambda_first_arg_is_a_string = -116,
  lambda_44 = -117,
  lambda_first_arg_is_a_file_descriptor = -118,
  func_build_commands = -119,
  lambda_45 = -120,
  lambda_46 = -121,
  lambda_arg_is_a_function = -122,
  lambda_47 = -123,
  lambda_48 = -124,
  lambda_49 = -125,
  lambda_50 = -126,
  func_std__pipe_commands = -127,
  lambda_feed_or_fd_is_defined = -128,
  lambda_feed_or_fd_is_a_file_descriptor = -129,
  lambda_51 = -130,
  lambda_52 = -131,
  func_run_pipe = -132,
  lambda_53 = -133,
  lambda_54 = -134,
  lambda_55 = -135,
  lambda_56 = -136,
  lambda_57 = -137,
  lambda_58 = -138,
  lambda_59 = -139,
  func_store_pid_and_err_fd = -140,
  lambda_60 = -141,
  list_1158_9 = -142,
  lambda_61 = -143,
  func_manage_io = -144,
  lambda_6_loop = -145,
  lambda_62 = -146,
  lambda_63 = -147,
  lambda_64 = -148,
  lambda_65 = -149,
  lambda_66 = -150,
  lambda_67 = -151,
  lambda_rpid_is_defined = -152,
  lambda_68 = -153,
  lambda_69 = -154,
  lambda_feed_is_empty = -155,
  lambda_70 = -156,
  lambda_71 = -157,
  lambda_buf_is_empty = -158,
  lambda_72 = -159,
  lambda_73 = -160,
  lambda_74 = -161,
  lambda_75 = -162,
  lambda_76 = -163,
  lambda_77 = -164,
  lambda_78 = -165,
  lambda_79 = -166,
  lambda_80 = -167,
  func_std__extern = -168
};

enum {
  var__START = FIRST_VAR-1,
  var_std__load, // attribute
  var_std__assign, // extern
  var_std__save, // attribute
  var_std__access_time_of, // attribute
  var_std__modification_time_of, // attribute
  var_std__status_change_time_of, // attribute
  var_std__is_a_directory, // attribute
  var_std__sleep, // initialized
  var_124_0_duration, // dynamic
  var_std__less, // extern
  var_std__times, // extern
  var_to_integer, // extern
  var_usleep, // extern
  var_pass, // extern
  var_on, // extern
  var_std__write_string_to, // initialized
  var_151_0_fd, // dynamic
  var_152_0_str, // dynamic
  var_154_1_len, // dynamic
  var_length_of, // extern
  var_157_8_bytes_written, // dynamic
  var_write, // extern
  var_is_an_error, // extern
  var_std__plus, // extern
  var_range, // extern
  var_next, // extern
  var_break, // extern
  var_if, // extern
  var_loop, // extern
  var_std__write_to, // initialized
  var_create_string, // extern
  var_write_string_to, // extern
  var_std__writeln_to, // initialized
  var_push, // extern
  var_std__print_string_to, // initialized
  var_to_utf8, // extern
  var_std__print_to, // initialized
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
  var_460_0_fd, // dynamic
  var_461_0_length, // dynamic
  var_463_1_data, // dynamic
  var_465_7_buf, // dynamic
  var_read, // extern
  var_is_empty, // extern
  var_true, // extern
  var_append, // extern
  var_minus, // extern
  var_cond, // extern
  var_std__read_from_until, // initialized
  var_500_0_fd, // dynamic
  var_501_0_sentinel, // dynamic
  var_502_0_nth, // dynamic
  var_504_1_data, // dynamic
  var_506_7_buf, // dynamic
  var_has_suffix, // extern
  var_dec, // extern
  var_std__readln_from, // initialized
  var_read_from_until, // extern
  var_std__read_all_from, // initialized
  var_561_0_fd, // dynamic
  var_563_1_data, // dynamic
  var_565_7_buf, // dynamic
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
  var_open, // extern
  var_check, // extern
  var_std_types__file_descriptor, // extern
  var_read_all_from, // extern
  var_close, // extern
  var_save, // extern polymorphic
  var_write_to, // extern
  var_std__try, // initialized
  var_undefined, // extern
  var_std__check, // initialized
  var_779_0_argument, // dynamic
  var_std__file_exists, // initialized
  var_stat, // extern
  var_not, // extern
  var_std__directory, // initialized
  var_822_1_entries, // dynamic
  var_empty_list, // extern
  var_823_10_dir, // dynamic
  var_opendir, // extern
  var_825_10_entry, // dynamic
  var_readdir, // extern
  var_closedir, // extern
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
  var_895_1_do_collect_output, // dynamic
  var_std__not, // extern
  var_896_1_do_collect_error_output, // dynamic
  var_897_1_env_vars, // dynamic
  var_environment, // extern
  var_is_defined, // extern
  var_std__string, // extern
  var_for_each, // extern
  var_update_if, // extern
  var_905_29_out_fd, // dynamic
  var_905_37_err_fd, // dynamic
  var_create_process, // extern
  var_907_1_io, // dynamic
  var_std_types__io, // extern
  var_join_process, // extern
  var_start_reading_from, // extern
  var_912_1_out, // dynamic
  var_913_1_err, // dynamic
  var_get_events, // extern
  var_917_13_fd, // dynamic
  var_917_17_data, // dynamic
  var_READ, // extern
  var_stop_reading_from, // extern
  var_case, // extern
  var_PROCESS_JOINED, // extern
  var_946_1_ret, // dynamic
  var_std__terminate, // initialized
  var_EXIT_SUCCESS, // extern
  var_exit, // extern
  var_std__is_a_file_descriptor, // attribute
  var_std_types__object, // extern
  var_is_a_file_descriptor, // extern polymorphic
  var_false, // extern
  var_serialization_tag_of, // extern polymorphic
  var_serialize, // extern polymorphic
  var_990_0_indent, // dynamic
  var_992_1_str, // dynamic
  var_tabs_and_spaces, // extern
  var_deserializer_of, // extern polymorphic
  var_integer, // extern
  var_file_descriptor, // extern
  var_std__is_a_process_id, // attribute
  var_is_a_process_id, // extern polymorphic
  var_std_types__process_id, // extern
  var_1029_0_indent, // dynamic
  var_1031_1_str, // dynamic
  var_process_id, // extern
  var_command_of, // attribute
  var_flatten, // extern
  var_to_string, // extern
  var_map, // extern
  var_call, // extern
  var_std__pipe, // initialized
  var_1058_0_args, // dynamic
  var_1060_1_i, // dynamic
  var_1061_1_n, // dynamic
  var_1062_1_in_fd, // dynamic
  var_1063_1_feed, // dynamic
  var_1064_1_commands, // dynamic
  var_1065_1_head, // dynamic
  var_1066_1_arguments, // dynamic
  var_1067_1_first_arg, // dynamic
  var_is_a_string, // extern
  var_1087_1_arg, // dynamic
  var_is_a_function, // extern
  var_tuple, // extern
  var_inc, // extern
  var_std__pipe_commands, // initialized
  var_1107_0_feed_or_fd, // dynamic
  var_1108_0_commands, // dynamic
  var_1122_0_in_fd, // dynamic
  var_1123_0_feed, // dynamic
  var_1124_0_commands, // dynamic
  var_1126_1_pids, // dynamic
  var_empty_hash_table, // extern
  var_1127_1_err_fds, // dynamic
  var_1128_1_out_fd, // dynamic
  var_1129_1_env_vars, // dynamic
  var_1138_3_idx, // dynamic
  var_1139_9_head, // dynamic
  var_1139_15_arguments, // dynamic
  var_1141_1_pid, // dynamic
  var_1142_1_err_fd, // dynamic
  var_is_undefined, // extern
  var_std__and, // extern
  var_list, // extern
  var_1156_1_ret, // dynamic
  var_dup, // extern
  var_1157_1_out, // dynamic
  var_1158_1_err, // dynamic
  var_1169_1_read_descriptor_list, // dynamic
  var_keys_of, // extern
  var_1179_1_read_descriptors, // dynamic
  var_1180_1_write_descriptors, // dynamic
  var_pselect, // extern
  var_CHILD_CHANGED_STATE, // extern
  var_1188_8_rpid, // dynamic
  var_1188_14_status, // dynamic
  var_wait2, // extern
  var_1213_3_read_descriptor, // dynamic
  var_1214_7_buf, // dynamic
  var_std__extern, // initialized
  var__END
};


static TAB_NUM t_func_std__sleep[] = {
  1, // locals
  1, // parameters
  var_124_0_duration,
  // 0:
  var_std__less, 2, num_0, var_124_0_duration, 1, LOCAL(1),
  // on duration > 0:
  var_on, 2, LOCAL(1), lambda_1, IO_TAIL_CALL,
  POS(126, 17),
  POS(126, 3)
};

static TAB_NUM t_lambda_1[] = {
  2, // locals
  0, // parameters
  // 1'000'000*duration).to_integer
  var_std__times, 2, num_1000000, var_124_0_duration, 1, LOCAL(1),
  // to_integer
  var_to_integer, 1, LOCAL(1), 1, LOCAL(2),
  // usleep! $_dummy (1'000'000*duration).to_integer
  var_usleep, 1, LOCAL(2), IO_CALL(1), LOCAL(1),
  // pass # Attention: Fix the compiler!
  var_pass, 0, TAIL_CALL,
  POS(127, 22),
  POS(127, 42),
  POS(127, 5),
  POS(128, 5)
};

static TAB_NUM t_func_std__write_string_to[] = {
  0, // locals
  2, // parameters
  var_151_0_fd,
  var_152_0_str,
  // $len length_of(str)
  var_length_of, 1, var_152_0_str, 1, var_154_1_len,
  // loop
  var_loop, 2, lambda_2, var_pass, IO_TAIL_CALL,
  POS(154, 3),
  POS(155, 3)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // write! $bytes_written fd str
  var_write, 2, var_151_0_fd, var_152_0_str, IO_CALL(1), var_157_8_bytes_written,
  // is_an_error
  var_is_an_error, 1, var_157_8_bytes_written, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_157_8_bytes_written, lambda_3, IO_TAIL_CALL,
  POS(157, 7),
  POS(159, 23),
  POS(158, 7)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // bytes_written < len:
  var_std__less, 2, var_157_8_bytes_written, var_154_1_len, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_4, var_break, IO_TAIL_CALL,
  POS(163, 13),
  POS(162, 11)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // bytes_written+1 -1
  var_std__plus, 2, var_157_8_bytes_written, num_1, 1, LOCAL(1),
  // range &str bytes_written+1 -1
  var_range, 3, var_152_0_str, LOCAL(1), minus_num_1, 1, var_152_0_str,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(164, 26),
  POS(164, 15),
  POS(165, 15)
};

static TAB_NUM t_func_std__write_to[] = {
  3, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 191_0_fd
  REST_PARAMETER, LOCAL(3), // 192_0_args
  // create_string(args)
  var_create_string, 1, LOCAL(3), 1, LOCAL(1),
  // write_string_to! fd create_string(args)
  var_write_string_to, 2, LOCAL(2), LOCAL(1), IO_TAIL_CALL,
  POS(194, 23),
  POS(194, 3)
};

static TAB_NUM t_func_std__writeln_to[] = {
  4, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 218_0_fd
  REST_PARAMETER, LOCAL(4), // 219_0_args
  // create_string(args) '@nl;')
  var_create_string, 1, LOCAL(4), 1, LOCAL(1),
  // push(create_string(args) '@nl;')
  var_push, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // write_string_to! fd push(create_string(args) '@nl;')
  var_write_string_to, 2, LOCAL(3), LOCAL(2), IO_TAIL_CALL,
  POS(221, 28),
  POS(221, 23),
  POS(221, 3)
};

static TAB_NUM t_func_std__print_string_to[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 244_0_fd
  LOCAL(3), // 245_0_str
  // to_utf8
  var_to_utf8, 1, LOCAL(3), 1, LOCAL(1),
  // write_string_to! fd str.to_utf8
  var_write_string_to, 2, LOCAL(2), LOCAL(1), IO_TAIL_CALL,
  POS(247, 27),
  POS(247, 3)
};

static TAB_NUM t_func_std__print_to[] = {
  4, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 269_0_fd
  REST_PARAMETER, LOCAL(4), // 270_0_args
  // create_string(args).to_utf8
  var_create_string, 1, LOCAL(4), 1, LOCAL(1),
  // to_utf8
  var_to_utf8, 1, LOCAL(1), 1, LOCAL(2),
  // write_string_to! fd create_string(args).to_utf8
  var_write_string_to, 2, LOCAL(3), LOCAL(2), IO_TAIL_CALL,
  POS(272, 23),
  POS(272, 43),
  POS(272, 3)
};

static TAB_NUM t_func_std__println_to[] = {
  5, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(4), // 294_0_fd
  REST_PARAMETER, LOCAL(5), // 295_0_args
  // create_string(args).to_utf8 '@nl;')
  var_create_string, 1, LOCAL(5), 1, LOCAL(1),
  // to_utf8 '@nl;')
  var_to_utf8, 1, LOCAL(1), 1, LOCAL(2),
  // push(create_string(args).to_utf8 '@nl;')
  var_push, 2, LOCAL(2), chr_10, 1, LOCAL(3),
  // write_string_to! fd push(create_string(args).to_utf8 '@nl;')
  var_write_string_to, 2, LOCAL(4), LOCAL(3), IO_TAIL_CALL,
  POS(297, 28),
  POS(297, 48),
  POS(297, 23),
  POS(297, 3)
};

static TAB_NUM t_func_std__print_string[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 317_0_str
  // to_utf8
  var_to_utf8, 1, LOCAL(2), 1, LOCAL(1),
  // write_string_to! STDOUT_FILENO str.to_utf8
  var_write_string_to, 2, var_STDOUT_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(319, 38),
  POS(319, 3)
};

static TAB_NUM t_func_std__print[] = {
  2, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(2), // 341_0_args
  // create_string(args)
  var_create_string, 1, LOCAL(2), 1, LOCAL(1),
  // print_string! create_string(args)
  var_print_string, 1, LOCAL(1), IO_TAIL_CALL,
  POS(343, 17),
  POS(343, 3)
};

static TAB_NUM t_func_std__println[] = {
  3, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(3), // 365_0_args
  // create_string(args) '@nl;')
  var_create_string, 1, LOCAL(3), 1, LOCAL(1),
  // push(create_string(args) '@nl;')
  var_push, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // print_string! push(create_string(args) '@nl;')
  var_print_string, 1, LOCAL(2), IO_TAIL_CALL,
  POS(367, 22),
  POS(367, 17),
  POS(367, 3)
};

static TAB_NUM t_func_std__eprint_string[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 391_0_str
  // to_utf8
  var_to_utf8, 1, LOCAL(2), 1, LOCAL(1),
  // write_string_to! STDERR_FILENO str.to_utf8
  var_write_string_to, 2, var_STDERR_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(393, 38),
  POS(393, 3)
};

static TAB_NUM t_func_std__eprint[] = {
  2, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(2), // 415_0_args
  // create_string(args)
  var_create_string, 1, LOCAL(2), 1, LOCAL(1),
  // eprint_string! create_string(args)
  var_eprint_string, 1, LOCAL(1), IO_TAIL_CALL,
  POS(417, 18),
  POS(417, 3)
};

static TAB_NUM t_func_std__eprintln[] = {
  3, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(3), // 439_0_args
  // create_string(args) '@nl;')
  var_create_string, 1, LOCAL(3), 1, LOCAL(1),
  // push(create_string(args) '@nl;')
  var_push, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // eprint_string! push(create_string(args) '@nl;')
  var_eprint_string, 1, LOCAL(2), IO_TAIL_CALL,
  POS(441, 23),
  POS(441, 18),
  POS(441, 3)
};

static TAB_NUM t_func_std__read_from[] = {
  0, // locals
  2, // parameters
  var_460_0_fd,
  var_461_0_length,
  // $data ""
  LET, 1, string_1, 1, var_463_1_data,
  // loop:
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(463, 3),
  POS(464, 3)
};

static TAB_NUM t_lambda_loop[] = {
  0, // locals
  0, // parameters
  // read! $buf fd length
  var_read, 2, var_460_0_fd, var_461_0_length, IO_CALL(1), var_465_7_buf,
  // cond
  var_cond, 3, lambda_5, lambda_7, lambda_9, IO_TAIL_CALL,
  POS(465, 5),
  POS(466, 5)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // is_an_error -> buf
  var_is_an_error, 1, var_465_7_buf, 1, LOCAL(1),
  //  buf.is_an_error -> buf
  LET, 2, LOCAL(1), lambda_6, TAIL_CALL,
  POS(467, 14),
  POS(467, 9)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_465_7_buf, TAIL_CALL,
  POS(467, 28)
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // is_empty -> data
  var_is_empty, 1, var_465_7_buf, 1, LOCAL(1),
  //  buf.is_empty -> data
  LET, 2, LOCAL(1), lambda_8, TAIL_CALL,
  POS(468, 14),
  POS(468, 9)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_463_1_data, TAIL_CALL,
  POS(468, 25)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_10, IO_TAIL_CALL,
  POS(469, 9)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // append &data buf
  var_append, 2, var_463_1_data, var_465_7_buf, 1, var_463_1_data,
  // length_of(buf)
  var_length_of, 1, var_465_7_buf, 1, LOCAL(1),
  // minus &length length_of(buf)
  var_minus, 2, var_461_0_length, LOCAL(1), 1, var_461_0_length,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(470, 9),
  POS(471, 23),
  POS(471, 9),
  POS(472, 9)
};

static TAB_NUM t_func_std__read_from_until[] = {
  0, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_500_0_fd,
  MANDATORY_PARAMETER, var_501_0_sentinel,
  num_1, var_502_0_nth,
  // $data ""
  LET, 1, string_1, 1, var_504_1_data,
  // loop:
  var_loop, 1, lambda_2_loop, IO_TAIL_CALL,
  POS(504, 3),
  POS(505, 3)
};

static TAB_NUM t_lambda_2_loop[] = {
  0, // locals
  0, // parameters
  // read! $buf fd 1
  var_read, 2, var_500_0_fd, num_1, IO_CALL(1), var_506_7_buf,
  // cond
  var_cond, 3, lambda_11, lambda_13, lambda_15, IO_TAIL_CALL,
  POS(506, 5),
  POS(507, 5)
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // is_an_error -> buf
  var_is_an_error, 1, var_506_7_buf, 1, LOCAL(1),
  //  buf.is_an_error -> buf
  LET, 2, LOCAL(1), lambda_12, TAIL_CALL,
  POS(508, 14),
  POS(508, 9)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_506_7_buf, TAIL_CALL,
  POS(508, 28)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // is_empty -> data
  var_is_empty, 1, var_506_7_buf, 1, LOCAL(1),
  //  buf.is_empty -> data
  LET, 2, LOCAL(1), lambda_14, TAIL_CALL,
  POS(509, 14),
  POS(509, 9)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_504_1_data, TAIL_CALL,
  POS(509, 25)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_16, IO_TAIL_CALL,
  POS(510, 9)
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // append &data buf
  var_append, 2, var_504_1_data, var_506_7_buf, 1, var_504_1_data,
  // buf .has_suffix. sentinel:
  var_has_suffix, 2, var_506_7_buf, var_501_0_sentinel, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), lambda_17, var_next, IO_TAIL_CALL,
  POS(511, 9),
  POS(513, 11),
  POS(512, 9)
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // dec &nth
  var_dec, 1, var_502_0_nth, 1, var_502_0_nth,
  // 0
  var_std__less, 2, num_0, var_502_0_nth, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), var_next, lambda_18, IO_TAIL_CALL,
  POS(514, 13),
  POS(516, 21),
  POS(515, 13)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_504_1_data, TAIL_CALL,
  POS(518, 17)
};

static TAB_NUM t_func_std__readln_from[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 540_0_fd
  // read_from_until! fd '@nl;'
  var_read_from_until, 2, LOCAL(1), chr_10, IO_TAIL_CALL,
  POS(542, 3)
};

static TAB_NUM t_func_std__read_all_from[] = {
  0, // locals
  1, // parameters
  var_561_0_fd,
  // $data ""
  LET, 1, string_1, 1, var_563_1_data,
  // loop:
  var_loop, 1, lambda_3_loop, IO_TAIL_CALL,
  POS(563, 3),
  POS(564, 3)
};

static TAB_NUM t_lambda_3_loop[] = {
  0, // locals
  0, // parameters
  // read! $buf fd 0x100000
  var_read, 2, var_561_0_fd, num_1048576, IO_CALL(1), var_565_7_buf,
  // cond
  var_cond, 3, lambda_19, lambda_21, lambda_23, IO_TAIL_CALL,
  POS(565, 5),
  POS(566, 5)
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // is_an_error -> buf
  var_is_an_error, 1, var_565_7_buf, 1, LOCAL(1),
  //  buf.is_an_error -> buf
  LET, 2, LOCAL(1), lambda_20, TAIL_CALL,
  POS(567, 14),
  POS(567, 9)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_565_7_buf, TAIL_CALL,
  POS(567, 28)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // is_empty -> data
  var_is_empty, 1, var_565_7_buf, 1, LOCAL(1),
  //  buf.is_empty -> data
  LET, 2, LOCAL(1), lambda_22, TAIL_CALL,
  POS(568, 14),
  POS(568, 9)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_563_1_data, TAIL_CALL,
  POS(568, 25)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_24, IO_TAIL_CALL,
  POS(569, 9)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  // append &data buf
  var_append, 2, var_563_1_data, var_565_7_buf, 1, var_563_1_data,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(570, 9),
  POS(571, 9)
};

static TAB_NUM t_func_std__get_from_until[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 600_0_fd
  MANDATORY_PARAMETER, LOCAL(3), // 601_0_sentinel
  num_1, LOCAL(4), // 602_0_nth
  // read_from_until! $data fd sentinel nth
  var_read_from_until, 3, LOCAL(2), LOCAL(3), LOCAL(4), IO_CALL(1), LOCAL(5),
  // from_utf8
  var_from_utf8, 1, LOCAL(5), 1, LOCAL(1),
  // -> data.from_utf8
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(604, 3),
  POS(605, 11),
  POS(605, 3)
};

static TAB_NUM t_func_std__getln_from[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 627_0_fd
  // get_from_until! fd '@nl;'
  var_get_from_until, 2, LOCAL(1), chr_10, IO_TAIL_CALL,
  POS(629, 3)
};

static TAB_NUM t_func_std__get_until[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 654_0_sentinel
  // get_from_until! STDIN_FILENO sentinel
  var_get_from_until, 2, var_STDIN_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(656, 3)
};

static TAB_NUM t_func_std__getln[] = {
  0, // locals
  0, // parameters
  // getln_from! STDIN_FILENO
  var_getln_from, 1, var_STDIN_FILENO, IO_TAIL_CALL,
  POS(678, 3)
};

static TAB_NUM t_func_std_types__string___load[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 694_0_filename
  // open! $fd filename "r"
  var_open, 2, LOCAL(1), str_r, IO_CALL(1), LOCAL(2),
  // check fd
  var_check, 1, LOCAL(2), 0,
  // load! fd
  var_load, 1, LOCAL(2), IO_TAIL_CALL,
  POS(696, 3),
  POS(697, 3),
  POS(698, 3)
};

static TAB_NUM t_func_std_types__file_descriptor___load[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 714_0_fd
  // read_all_from! $data fd
  var_read_all_from, 1, LOCAL(1), IO_CALL(1), LOCAL(2),
  // check data
  var_check, 1, LOCAL(2), 0,
  // close! fd
  var_close, 1, LOCAL(1), IO_CALL(0),
  // -> data
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(716, 3),
  POS(717, 3),
  POS(718, 3),
  POS(719, 3)
};

static TAB_NUM t_func_std_types__string___save[] = {
  3, // locals
  2, // parameters
  LOCAL(1), // 739_0_filename
  LOCAL(2), // 740_0_data
  // open! $fh filename "w+"
  var_open, 2, LOCAL(1), str_w, IO_CALL(1), LOCAL(3),
  // check fh
  var_check, 1, LOCAL(3), 0,
  // write_to! fh data
  var_write_to, 2, LOCAL(3), LOCAL(2), IO_CALL(0),
  // close! fh
  var_close, 1, LOCAL(3), IO_TAIL_CALL,
  POS(742, 3),
  POS(743, 3),
  POS(744, 3),
  POS(745, 3)
};

static TAB_NUM t_func_std__try[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 760_0_body
  // body!
  LOCAL(1), 0, IO_CALL(0),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(762, 3),
  POS(763, 3)
};

static TAB_NUM t_func_std__check[] = {
  1, // locals
  1, // parameters
  var_779_0_argument,
  // is_an_error
  var_is_an_error, 1, var_779_0_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25, var_pass, TAIL_CALL,
  POS(782, 14),
  POS(781, 3)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  //  argument
  LET, 1, var_779_0_argument, TAIL_CALL,
  POS(783, 7)
};

static TAB_NUM t_func_std__file_exists[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 798_0_filename
  // stat! $info filename
  var_stat, 1, LOCAL(3), IO_CALL(1), LOCAL(4),
  // is_an_error)
  var_is_an_error, 1, LOCAL(4), 1, LOCAL(1),
  // not(info.is_an_error)
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // -> not(info.is_an_error)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(800, 3),
  POS(801, 15),
  POS(801, 6),
  POS(801, 3)
};

static TAB_NUM t_func_std__directory[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 820_0_pathname
  // $entries empty_list
  LET, 1, var_empty_list, 1, var_822_1_entries,
  // opendir! $dir pathname
  var_opendir, 1, LOCAL(1), IO_CALL(1), var_823_10_dir,
  // loop:
  var_loop, 1, lambda_4_loop, IO_TAIL_CALL,
  POS(822, 3),
  POS(823, 3),
  POS(824, 3)
};

static TAB_NUM t_lambda_4_loop[] = {
  1, // locals
  0, // parameters
  // readdir! $entry dir
  var_readdir, 1, var_823_10_dir, IO_CALL(1), var_825_10_entry,
  // is_an_error:
  var_is_an_error, 1, var_825_10_entry, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_entry_is_an_error, lambda_26, IO_TAIL_CALL,
  POS(825, 5),
  POS(827, 13),
  POS(826, 5)
};

static TAB_NUM t_lambda_entry_is_an_error[] = {
  0, // locals
  0, // parameters
  // closedir! dir
  var_closedir, 1, var_823_10_dir, IO_CALL(0),
  // -> entries
  LET, 1, var_822_1_entries, TAIL_CALL,
  POS(828, 9),
  POS(829, 9)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  // push &entries entry
  var_push, 2, var_822_1_entries, var_825_10_entry, 1, var_822_1_entries,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(831, 9),
  POS(832, 9)
};

static TAB_NUM t_func_std_types__stat___access_time_of[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 842_0_self
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
  POS(846, 7),
  POS(847, 7),
  POS(847, 7),
  POS(845, 6),
  POS(844, 3)
};

static TAB_NUM t_func_std_types__stat___modification_time_of[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 849_40_self
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
  POS(858, 7),
  POS(859, 7),
  POS(859, 7),
  POS(857, 6),
  POS(856, 3)
};

static TAB_NUM t_func_std_types__stat___status_change_time_of[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 861_41_self
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
  POS(870, 7),
  POS(871, 7),
  POS(871, 7),
  POS(869, 6),
  POS(868, 3)
};

static TAB_NUM t_func_std_types__stat___is_a_directory[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 873_34_self
  // mode_of(self)(1) == 'd'
  var_mode_of, 1, LOCAL(4), 1, LOCAL(1),
  // mode_of(self)(1) == 'd'
  LOCAL(1), 1, num_1, 1, LOCAL(2),
  // mode_of(self)(1) == 'd'
  var_std__equal, 2, LOCAL(2), chr_100, 1, LOCAL(3),
  // -> mode_of(self)(1) == 'd'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(880, 6),
  POS(880, 6),
  POS(880, 6),
  POS(880, 3)
};

static TAB_NUM t_func_std__call[] = {
  6, // locals
  2, // parameters
  LOCAL(3), // 892_0_cmd
  LOCAL(4), // 893_0_args
  // result_count() >= 2)
  var_result_count, 0, 1, LOCAL(1),
  // result_count() >= 2)
  var_std__less, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // $do_collect_output (result_count() >= 2)
  var_std__not, 1, LOCAL(2), 1, var_895_1_do_collect_output,
  // result_count() == 3)
  var_result_count, 0, 1, LOCAL(1),
  // $do_collect_error_output (result_count() == 3)
  var_std__equal, 2, LOCAL(1), num_3, 1, var_896_1_do_collect_error_output,
  // $env_vars undefined
  LET, 1, var_undefined, 1, var_897_1_env_vars,
  // is_defined &env_vars:
  var_is_defined, 1, var_environment, 1, LOCAL(1),
  // update_if environment.is_defined &env_vars:
  var_update_if, 3, LOCAL(1), var_897_1_env_vars, lambda_27, 1, var_897_1_env_vars,
  // create_process! $pid $in_fd $out_fd $err_fd cmd args env_vars
  var_create_process, 3, LOCAL(3), LOCAL(4), var_897_1_env_vars, IO_CALL(4), LOCAL(5), LOCAL(6), var_905_29_out_fd, var_905_37_err_fd,
  // close! in_fd
  var_close, 1, LOCAL(6), IO_CALL(0),
  // $io std_types::io
  LET, 1, var_std_types__io, 1, var_907_1_io,
  // join_process &io pid
  var_join_process, 2, var_907_1_io, LOCAL(5), 1, var_907_1_io,
  // start_reading_from &io out_fd
  var_start_reading_from, 2, var_907_1_io, var_905_29_out_fd, 1, var_907_1_io,
  // start_reading_from &io err_fd
  var_start_reading_from, 2, var_907_1_io, var_905_37_err_fd, 1, var_907_1_io,
  // $out ""
  LET, 1, string_1, 1, var_912_1_out,
  // $err ""
  LET, 1, string_1, 1, var_913_1_err,
  // loop:
  var_loop, 1, lambda_5_loop, IO_TAIL_CALL,
  POS(895, 23),
  POS(895, 23),
  POS(895, 3),
  POS(896, 29),
  POS(896, 3),
  POS(897, 3),
  POS(898, 25),
  POS(898, 3),
  POS(905, 3),
  POS(906, 3),
  POS(907, 3),
  POS(908, 3),
  POS(909, 3),
  POS(910, 3),
  POS(912, 3),
  POS(913, 3),
  POS(914, 3)
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  // !env_vars empty_list
  LET, 1, var_empty_list, 1, var_897_1_env_vars,
  // for_each environment
  var_for_each, 3, var_environment, lambda_28, lambda_29, TAIL_CALL,
  POS(899, 5),
  POS(900, 5)
};

static TAB_NUM t_lambda_28[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 901_3_key
  LOCAL(3), // 901_7_value
  // "@(key)=@(value)"
  var_std__string, 3, LOCAL(2), string_2, LOCAL(3), 1, LOCAL(1),
  // push &env_vars "@(key)=@(value)"
  var_push, 2, var_897_1_env_vars, LOCAL(1), 1, var_897_1_env_vars,
  // next
  var_next, 0, TAIL_CALL,
  POS(902, 24),
  POS(902, 9),
  POS(903, 9)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  //  env_vars
  LET, 1, var_897_1_env_vars, TAIL_CALL,
  POS(904, 9)
};

static TAB_NUM t_lambda_5_loop[] = {
  1, // locals
  0, // parameters
  // get_events! &io $events
  var_get_events, 1, var_907_1_io, IO_CALL(2), var_907_1_io, LOCAL(1),
  // for_each events: (event)
  var_for_each, 2, LOCAL(1), lambda_30, IO_TAIL_CALL,
  POS(915, 5),
  POS(916, 5)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 916_18_event
  // event $type $fd $data
  LOCAL(1), 0, 3, LOCAL(2), var_917_13_fd, var_917_17_data,
  // case type
  var_case, 6, LOCAL(2), var_READ, lambda_READ, var_PROCESS_JOINED, lambda_PROCESS_JOINED, lambda_39, IO_TAIL_CALL,
  POS(917, 7),
  POS(918, 7)
};

static TAB_NUM t_lambda_READ[] = {
  1, // locals
  0, // parameters
  // data == "":
  var_std__equal, 2, var_917_17_data, string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_31, lambda_32, IO_TAIL_CALL,
  POS(921, 13),
  POS(920, 11)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_917_13_fd, IO_CALL(0),
  // stop_reading_from &io fd
  var_stop_reading_from, 2, var_907_1_io, var_917_13_fd, 1, var_907_1_io,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(922, 15),
  POS(923, 15),
  POS(924, 15)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  // case fd
  var_case, 6, var_917_13_fd, var_905_29_out_fd, lambda_out_fd, var_905_37_err_fd, lambda_err_fd, lambda_35, IO_TAIL_CALL,
  POS(926, 15)
};

static TAB_NUM t_lambda_out_fd[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_895_1_do_collect_output, lambda_do_collect_output, lambda_33, IO_TAIL_CALL,
  POS(928, 19)
};

static TAB_NUM t_lambda_do_collect_output[] = {
  0, // locals
  0, // parameters
  // append &out data
  var_append, 2, var_912_1_out, var_917_17_data, 1, var_912_1_out,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(930, 23),
  POS(931, 23)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  // write_to! STDOUT_FILENO data
  var_write_to, 2, var_STDOUT_FILENO, var_917_17_data, IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(933, 23),
  POS(934, 23)
};

static TAB_NUM t_lambda_err_fd[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_896_1_do_collect_error_output, lambda_do_collect_error_output, lambda_34, IO_TAIL_CALL,
  POS(936, 19)
};

static TAB_NUM t_lambda_do_collect_error_output[] = {
  0, // locals
  0, // parameters
  // append &err data
  var_append, 2, var_913_1_err, var_917_17_data, 1, var_913_1_err,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(938, 23),
  POS(939, 23)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  // write_to! STDERR_FILENO data
  var_write_to, 2, var_STDERR_FILENO, var_917_17_data, IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(941, 23),
  POS(942, 23)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(944, 19)
};

static TAB_NUM t_lambda_PROCESS_JOINED[] = {
  0, // locals
  0, // parameters
  // $ret data
  LET, 1, var_917_17_data, 1, var_946_1_ret,
  // if
  var_if, 3, var_895_1_do_collect_output, lambda_2_do_collect_output, lambda_38, TAIL_CALL,
  POS(946, 11),
  POS(947, 11)
};

static TAB_NUM t_lambda_2_do_collect_output[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_896_1_do_collect_error_output, lambda_36, lambda_37, TAIL_CALL,
  POS(949, 15)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  ret out err
  LET, 3, var_946_1_ret, var_912_1_out, var_913_1_err, TAIL_CALL,
  POS(951, 19)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  //  ret out
  LET, 2, var_946_1_ret, var_912_1_out, TAIL_CALL,
  POS(952, 19)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  //  ret
  LET, 1, var_946_1_ret, TAIL_CALL,
  POS(953, 15)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(955, 11)
};

static TAB_NUM t_func_std__terminate[] = {
  0, // locals
  0, // parameters
  // exit! EXIT_SUCCESS
  var_exit, 1, var_EXIT_SUCCESS, IO_TAIL_CALL,
  POS(967, 3)
};

static TAB_NUM t_func_std_types__file_descriptor___serialize[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 989_0_self
  var_undefined, var_990_0_indent,
  // to_integer)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(1),
  // $str "
  var_std__string, 3, str_file_descriptor_2, LOCAL(1), string_3, 1, var_992_1_str,
  // is_defined
  var_is_defined, 1, var_990_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_40, lambda_41, TAIL_CALL,
  POS(993, 28),
  POS(992, 3),
  POS(995, 12),
  POS(994, 3)
};

static TAB_NUM t_lambda_40[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_990_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_992_1_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(996, 15),
  POS(996, 8),
  POS(996, 7)
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_992_1_str, TAIL_CALL,
  POS(997, 7)
};

static TAB_NUM t_func_std_types__file_descriptor___deserializer_of[] = {
  3, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(3), // 1004_0_argument
  // integer(argument))
  var_integer, 1, LOCAL(3), 1, LOCAL(1),
  // file_descriptor(integer(argument))
  var_file_descriptor, 1, LOCAL(1), 1, LOCAL(2),
  // -> file_descriptor(integer(argument))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1006, 22),
  POS(1006, 6),
  POS(1006, 3)
};

static TAB_NUM t_func_std_types__process_id___serialize[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 1028_0_self
  var_undefined, var_1029_0_indent,
  // to_integer)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(1),
  // $str "
  var_std__string, 3, str_process_id_2, LOCAL(1), string_3, 1, var_1031_1_str,
  // is_defined
  var_is_defined, 1, var_1029_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_42, lambda_43, TAIL_CALL,
  POS(1032, 23),
  POS(1031, 3),
  POS(1034, 12),
  POS(1033, 3)
};

static TAB_NUM t_lambda_42[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_1029_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_1031_1_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1035, 15),
  POS(1035, 8),
  POS(1035, 7)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_1031_1_str, TAIL_CALL,
  POS(1036, 7)
};

static TAB_NUM t_func_std_types__process_id___deserializer_of[] = {
  3, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(3), // 1043_0_argument
  // integer(argument))
  var_integer, 1, LOCAL(3), 1, LOCAL(1),
  // process_id(integer(argument))
  var_process_id, 1, LOCAL(1), 1, LOCAL(2),
  // -> process_id(integer(argument))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1045, 17),
  POS(1045, 6),
  POS(1045, 3)
};

static TAB_NUM t_func_extern_call[] = {
  5, // locals
  -2, // parameters
  MYSELF_PARAMETER, LOCAL(4), // 1051_0_myself
  REST_PARAMETER, LOCAL(5), // 1052_0_arguments
  // command_of(myself) map(flatten(arguments) to_string)
  var_command_of, 1, LOCAL(4), 1, LOCAL(1),
  // flatten(arguments) to_string)
  var_flatten, 1, LOCAL(5), 1, LOCAL(2),
  // map(flatten(arguments) to_string)
  var_map, 2, LOCAL(2), var_to_string, 1, LOCAL(3),
  // call! command_of(myself) map(flatten(arguments) to_string)
  var_call, 2, LOCAL(1), LOCAL(3), IO_TAIL_CALL,
  POS(1054, 9),
  POS(1054, 32),
  POS(1054, 28),
  POS(1054, 3)
};

static TAB_NUM t_func_std__pipe[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, var_1058_0_args,
  // $i 1
  LET, 1, num_1, 1, var_1060_1_i,
  // $n length_of(args)
  var_length_of, 1, var_1058_0_args, 1, var_1061_1_n,
  // $in_fd undefined
  LET, 1, var_undefined, 1, var_1062_1_in_fd,
  // $feed undefined
  LET, 1, var_undefined, 1, var_1063_1_feed,
  // $commands empty_list
  LET, 1, var_empty_list, 1, var_1064_1_commands,
  // $head undefined
  LET, 1, var_undefined, 1, var_1065_1_head,
  // $arguments undefined
  LET, 1, var_undefined, 1, var_1066_1_arguments,
  // $first_arg args(1)
  var_1058_0_args, 1, num_1, 1, var_1067_1_first_arg,
  // is_a_string:
  var_is_a_string, 1, var_1067_1_first_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_first_arg_is_a_string, lambda_44, IO_TAIL_CALL,
  POS(1060, 3),
  POS(1061, 3),
  POS(1062, 3),
  POS(1063, 3),
  POS(1064, 3),
  POS(1065, 3),
  POS(1066, 3),
  POS(1067, 3),
  POS(1069, 15),
  POS(1068, 3)
};

static TAB_NUM t_lambda_first_arg_is_a_string[] = {
  0, // locals
  0, // parameters
  // !feed first_arg
  LET, 1, var_1067_1_first_arg, 1, var_1063_1_feed,
  // !i 2
  LET, 1, num_2, 1, var_1060_1_i,
  // build_commands!
  func_build_commands, 0, IO_TAIL_CALL,
  POS(1070, 7),
  POS(1071, 7),
  POS(1072, 7)
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  0, // parameters
  // is_a_file_descriptor:
  var_is_a_file_descriptor, 1, var_1067_1_first_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_first_arg_is_a_file_descriptor, func_build_commands, IO_TAIL_CALL,
  POS(1075, 19),
  POS(1074, 7)
};

static TAB_NUM t_lambda_first_arg_is_a_file_descriptor[] = {
  0, // locals
  0, // parameters
  // !in_fd first_arg
  LET, 1, var_1067_1_first_arg, 1, var_1062_1_in_fd,
  // !i 2
  LET, 1, num_2, 1, var_1060_1_i,
  // build_commands!
  func_build_commands, 0, IO_TAIL_CALL,
  POS(1076, 11),
  POS(1077, 11),
  POS(1078, 11)
};

static TAB_NUM t_func_build_commands[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_45, lambda_49, IO_TAIL_CALL,
  POS(1082, 5)
};

static TAB_NUM t_lambda_45[] = {
  1, // locals
  0, // parameters
  // n break
  var_std__less, 2, var_1061_1_n, var_1060_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_46, IO_TAIL_CALL,
  POS(1085, 15),
  POS(1084, 9)
};

static TAB_NUM t_lambda_46[] = {
  1, // locals
  0, // parameters
  // $arg args(i)
  var_1058_0_args, 1, var_1060_1_i, 1, var_1087_1_arg,
  // is_a_function:
  var_is_a_function, 1, var_1087_1_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_arg_is_a_function, lambda_48, IO_TAIL_CALL,
  POS(1087, 13),
  POS(1089, 19),
  POS(1088, 13)
};

static TAB_NUM t_lambda_arg_is_a_function[] = {
  1, // locals
  0, // parameters
  // is_defined &commands:
  var_is_defined, 1, var_1065_1_head, 1, LOCAL(1),
  // update_if head.is_defined &commands:
  var_update_if, 3, LOCAL(1), var_1064_1_commands, lambda_47, 1, var_1064_1_commands,
  // !head command_of(arg)
  var_command_of, 1, var_1087_1_arg, 1, var_1065_1_head,
  // !arguments empty_list
  LET, 1, var_empty_list, 1, var_1066_1_arguments,
  // inc &i
  var_inc, 1, var_1060_1_i, 1, var_1060_1_i,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1090, 32),
  POS(1090, 17),
  POS(1092, 17),
  POS(1093, 17),
  POS(1094, 17),
  POS(1095, 17)
};

static TAB_NUM t_lambda_47[] = {
  3, // locals
  0, // parameters
  // flatten(arguments) to_string))
  var_flatten, 1, var_1066_1_arguments, 1, LOCAL(1),
  // map(flatten(arguments) to_string))
  var_map, 2, LOCAL(1), var_to_string, 1, LOCAL(2),
  // tuple(head map(flatten(arguments) to_string))
  var_tuple, 2, var_1065_1_head, LOCAL(2), 1, LOCAL(3),
  // push commands tuple(head map(flatten(arguments) to_string))
  var_push, 2, var_1064_1_commands, LOCAL(3), TAIL_CALL,
  POS(1091, 48),
  POS(1091, 44),
  POS(1091, 33),
  POS(1091, 19)
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  // push &arguments arg
  var_push, 2, var_1066_1_arguments, var_1087_1_arg, 1, var_1066_1_arguments,
  // inc &i
  var_inc, 1, var_1060_1_i, 1, var_1060_1_i,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1097, 17),
  POS(1098, 17),
  POS(1099, 17)
};

static TAB_NUM t_lambda_49[] = {
  1, // locals
  0, // parameters
  // is_defined &commands:
  var_is_defined, 1, var_1065_1_head, 1, LOCAL(1),
  // update_if head.is_defined &commands:
  var_update_if, 3, LOCAL(1), var_1064_1_commands, lambda_50, 1, var_1064_1_commands,
  // run_pipe! in_fd feed commands
  func_run_pipe, 3, var_1062_1_in_fd, var_1063_1_feed, var_1064_1_commands, IO_TAIL_CALL,
  POS(1101, 24),
  POS(1101, 9),
  POS(1103, 9)
};

static TAB_NUM t_lambda_50[] = {
  3, // locals
  0, // parameters
  // flatten(arguments) to_string))
  var_flatten, 1, var_1066_1_arguments, 1, LOCAL(1),
  // map(flatten(arguments) to_string))
  var_map, 2, LOCAL(1), var_to_string, 1, LOCAL(2),
  // tuple(head map(flatten(arguments) to_string))
  var_tuple, 2, var_1065_1_head, LOCAL(2), 1, LOCAL(3),
  // push commands tuple(head map(flatten(arguments) to_string))
  var_push, 2, var_1064_1_commands, LOCAL(3), TAIL_CALL,
  POS(1102, 40),
  POS(1102, 36),
  POS(1102, 25),
  POS(1102, 11)
};

static TAB_NUM t_func_std__pipe_commands[] = {
  1, // locals
  -2, // parameters
  var_undefined, var_1107_0_feed_or_fd,
  MANDATORY_PARAMETER, var_1108_0_commands,
  // is_defined:
  var_is_defined, 1, var_1107_0_feed_or_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_feed_or_fd_is_defined, lambda_52, IO_TAIL_CALL,
  POS(1111, 16),
  POS(1110, 3)
};

static TAB_NUM t_lambda_feed_or_fd_is_defined[] = {
  1, // locals
  0, // parameters
  // is_a_file_descriptor:
  var_is_a_file_descriptor, 1, var_1107_0_feed_or_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_feed_or_fd_is_a_file_descriptor, lambda_51, IO_TAIL_CALL,
  POS(1113, 20),
  POS(1112, 7)
};

static TAB_NUM t_lambda_feed_or_fd_is_a_file_descriptor[] = {
  0, // locals
  0, // parameters
  // run_pipe! feed_or_fd undefined commands
  func_run_pipe, 3, var_1107_0_feed_or_fd, var_undefined, var_1108_0_commands, IO_TAIL_CALL,
  POS(1114, 11)
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  // run_pipe! undefined feed_or_fd commands
  func_run_pipe, 3, var_undefined, var_1107_0_feed_or_fd, var_1108_0_commands, IO_TAIL_CALL,
  POS(1116, 11)
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  // run_pipe! undefined undefined commands
  func_run_pipe, 3, var_undefined, var_undefined, var_1108_0_commands, IO_TAIL_CALL,
  POS(1118, 7)
};

static TAB_NUM t_func_run_pipe[] = {
  1, // locals
  3, // parameters
  var_1122_0_in_fd,
  var_1123_0_feed,
  var_1124_0_commands,
  // $pids empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_1126_1_pids,
  // $err_fds empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_1127_1_err_fds,
  // $out_fd in_fd
  LET, 1, var_1122_0_in_fd, 1, var_1128_1_out_fd,
  // $env_vars undefined
  LET, 1, var_undefined, 1, var_1129_1_env_vars,
  // is_defined &env_vars:
  var_is_defined, 1, var_environment, 1, LOCAL(1),
  // update_if environment.is_defined &env_vars:
  var_update_if, 3, LOCAL(1), var_1129_1_env_vars, lambda_53, 1, var_1129_1_env_vars,
  // for_each commands
  var_for_each, 3, var_1124_0_commands, lambda_56, lambda_60, IO_TAIL_CALL,
  POS(1126, 3),
  POS(1127, 3),
  POS(1128, 3),
  POS(1129, 3),
  POS(1130, 25),
  POS(1130, 3),
  POS(1137, 3)
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  // !env_vars empty_list
  LET, 1, var_empty_list, 1, var_1129_1_env_vars,
  // for_each environment
  var_for_each, 3, var_environment, lambda_54, lambda_55, TAIL_CALL,
  POS(1131, 5),
  POS(1132, 5)
};

static TAB_NUM t_lambda_54[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 1133_3_key
  LOCAL(3), // 1133_7_value
  // "@(key)=@(value)"
  var_std__string, 3, LOCAL(2), string_2, LOCAL(3), 1, LOCAL(1),
  // push &env_vars "@(key)=@(value)"
  var_push, 2, var_1129_1_env_vars, LOCAL(1), 1, var_1129_1_env_vars,
  // next
  var_next, 0, TAIL_CALL,
  POS(1134, 24),
  POS(1134, 9),
  POS(1135, 9)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  //  env_vars
  LET, 1, var_1129_1_env_vars, TAIL_CALL,
  POS(1136, 9)
};

static TAB_NUM t_lambda_56[] = {
  3, // locals
  2, // parameters
  var_1138_3_idx,
  LOCAL(3), // 1138_7_command
  // command $head $arguments
  LOCAL(3), 0, 2, var_1139_9_head, var_1139_15_arguments,
  // map &arguments to_utf8
  var_map, 2, var_1139_15_arguments, var_to_utf8, 1, var_1139_15_arguments,
  // $pid undefined
  LET, 1, var_undefined, 1, var_1141_1_pid,
  // $err_fd undefined
  LET, 1, var_undefined, 1, var_1142_1_err_fd,
  // idx == 1 && in_fd.is_undefined:
  var_std__equal, 2, var_1138_3_idx, num_1, 1, LOCAL(1),
  // idx == 1 && in_fd.is_undefined:
  var_std__and, 2, LOCAL(1), lambda_57, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_58, lambda_59, IO_TAIL_CALL,
  POS(1139, 7),
  POS(1140, 7),
  POS(1141, 7),
  POS(1142, 7),
  POS(1144, 9),
  POS(1144, 9),
  POS(1143, 7)
};

static TAB_NUM t_lambda_57[] = {
  1, // locals
  0, // parameters
  // is_undefined:
  var_is_undefined, 1, var_1122_0_in_fd, 1, LOCAL(1),
  // in_fd.is_undefined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1144, 27),
  POS(1144, 21)
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  0, // parameters
  // create_process! !pid !in_fd !out_fd !err_fd head arguments env_vars
  var_create_process, 3, var_1139_9_head, var_1139_15_arguments, var_1129_1_env_vars, IO_CALL(4), var_1141_1_pid, var_1122_0_in_fd, var_1128_1_out_fd, var_1142_1_err_fd,
  // store_pid_and_err_fd!
  func_store_pid_and_err_fd, 0, IO_TAIL_CALL,
  POS(1145, 11),
  POS(1146, 11)
};

static TAB_NUM t_lambda_59[] = {
  0, // locals
  0, // parameters
  // create_process! !pid !out_fd !err_fd head arguments env_vars out_fd
  var_create_process, 4, var_1139_9_head, var_1139_15_arguments, var_1129_1_env_vars, var_1128_1_out_fd, IO_CALL(3), var_1141_1_pid, var_1128_1_out_fd, var_1142_1_err_fd,
  // store_pid_and_err_fd!
  func_store_pid_and_err_fd, 0, IO_TAIL_CALL,
  POS(1148, 11),
  POS(1149, 11)
};

static TAB_NUM t_func_store_pid_and_err_fd[] = {
  0, // locals
  0, // parameters
  // pids(pid) idx
  var_1126_1_pids, 2, var_1141_1_pid, var_1138_3_idx, 1, var_1126_1_pids,
  // err_fds(err_fd) idx
  var_1127_1_err_fds, 2, var_1142_1_err_fd, var_1138_3_idx, 1, var_1127_1_err_fds,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1152, 10),
  POS(1153, 10),
  POS(1154, 9)
};

static TAB_NUM t_lambda_60[] = {
  2, // locals
  0, // parameters
  // list(undefined) length_of(commands))
  var_list, 1, var_undefined, 1, LOCAL(1),
  // length_of(commands))
  var_length_of, 1, var_1124_0_commands, 1, LOCAL(2),
  // $ret dup(list(undefined) length_of(commands))
  var_dup, 2, LOCAL(1), LOCAL(2), 1, var_1156_1_ret,
  // $out ""
  LET, 1, string_1, 1, var_1157_1_out,
  // length_of(commands))
  var_length_of, 1, var_1124_0_commands, 1, LOCAL(2),
  // $err dup(list("") length_of(commands))
  var_dup, 2, list_1158_9, LOCAL(2), 1, var_1158_1_err,
  // is_defined
  var_is_defined, 1, var_1123_0_feed, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_manage_io, lambda_61, IO_TAIL_CALL,
  POS(1156, 16),
  POS(1156, 32),
  POS(1156, 7),
  POS(1157, 7),
  POS(1158, 25),
  POS(1158, 7),
  POS(1160, 14),
  POS(1159, 7)
};

static TAB_NUM t_lambda_61[] = {
  0, // locals
  0, // parameters
  // close! in_fd
  var_close, 1, var_1122_0_in_fd, IO_CALL(0),
  // !in_fd undefined
  LET, 1, var_undefined, 1, var_1122_0_in_fd,
  // manage_io!
  func_manage_io, 0, IO_TAIL_CALL,
  POS(1163, 11),
  POS(1164, 11),
  POS(1165, 11)
};

static TAB_NUM t_func_manage_io[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_6_loop, IO_TAIL_CALL,
  POS(1168, 9)
};

static TAB_NUM t_lambda_6_loop[] = {
  3, // locals
  0, // parameters
  // $read_descriptor_list keys_of(err_fds)
  var_keys_of, 1, var_1127_1_err_fds, 1, var_1169_1_read_descriptor_list,
  // is_defined
  var_is_defined, 1, var_1122_0_in_fd, 1, LOCAL(1),
  // $write_descriptor_list
  var_if, 3, LOCAL(1), lambda_62, lambda_63, 1, LOCAL(2),
  // is_defined &read_descriptor_list:
  var_is_defined, 1, var_1128_1_out_fd, 1, LOCAL(1),
  // update_if out_fd.is_defined &read_descriptor_list:
  var_update_if, 3, LOCAL(1), var_1169_1_read_descriptor_list, lambda_64, 1, var_1169_1_read_descriptor_list,
  // pselect!
  var_pselect, 3, var_1169_1_read_descriptor_list, LOCAL(2), var_empty_list, IO_CALL(4), LOCAL(3), var_1179_1_read_descriptors, var_1180_1_write_descriptors, LOCAL(1),
  // for_each signals
  var_for_each, 3, LOCAL(3), lambda_65, lambda_68, IO_TAIL_CALL,
  POS(1169, 11),
  POS(1172, 21),
  POS(1170, 11),
  POS(1175, 28),
  POS(1175, 11),
  POS(1177, 11),
  POS(1182, 11)
};

static TAB_NUM t_lambda_62[] = {
  1, // locals
  0, // parameters
  // list(in_fd)
  var_list, 1, var_1122_0_in_fd, 1, LOCAL(1),
  //  list(in_fd)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1173, 18),
  POS(1173, 17)
};

static TAB_NUM t_lambda_63[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(1174, 17)
};

static TAB_NUM t_lambda_64[] = {
  0, // locals
  0, // parameters
  // push read_descriptor_list out_fd
  var_push, 2, var_1169_1_read_descriptor_list, var_1128_1_out_fd, TAIL_CALL,
  POS(1176, 13)
};

static TAB_NUM t_lambda_65[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1183_3_signal
  // signal == CHILD_CHANGED_STATE:
  var_std__equal, 2, LOCAL(2), var_CHILD_CHANGED_STATE, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_66, var_next, IO_TAIL_CALL,
  POS(1185, 17),
  POS(1184, 15)
};

static TAB_NUM t_lambda_66[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_67, var_next, IO_TAIL_CALL,
  POS(1186, 19)
};

static TAB_NUM t_lambda_67[] = {
  1, // locals
  0, // parameters
  // wait2! $rpid $status
  var_wait2, 0, IO_CALL(2), var_1188_8_rpid, var_1188_14_status,
  // is_defined:
  var_is_defined, 1, var_1188_8_rpid, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_rpid_is_defined, var_break, IO_TAIL_CALL,
  POS(1188, 23),
  POS(1190, 30),
  POS(1189, 23)
};

static TAB_NUM t_lambda_rpid_is_defined[] = {
  2, // locals
  0, // parameters
  // pids(rpid)) status
  var_1126_1_pids, 1, var_1188_8_rpid, 1, LOCAL(2),
  // ret(pids(rpid)) status
  var_1156_1_ret, 2, LOCAL(2), var_1188_14_status, 1, var_1156_1_ret,
  // pids(rpid) undefined
  var_1126_1_pids, 2, var_1188_8_rpid, var_undefined, 1, var_1126_1_pids,
  // is_empty
  var_is_empty, 1, var_1126_1_pids, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), var_break, var_next, IO_TAIL_CALL,
  POS(1191, 32),
  POS(1191, 28),
  POS(1192, 28),
  POS(1194, 34),
  POS(1193, 27)
};

static TAB_NUM t_lambda_68[] = {
  0, // locals
  0, // parameters
  // for_each write_descriptors
  var_for_each, 3, var_1180_1_write_descriptors, lambda_69, lambda_70, IO_TAIL_CALL,
  POS(1201, 15)
};

static TAB_NUM t_lambda_69[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 1202_3_write_descriptor
  // write! $bytes_written write_descriptor feed
  var_write, 2, LOCAL(2), var_1123_0_feed, IO_CALL(1), LOCAL(3),
  // bytes_written+1 -1
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // range &feed bytes_written+1 -1
  var_range, 3, var_1123_0_feed, LOCAL(1), minus_num_1, 1, var_1123_0_feed,
  // is_empty:
  var_is_empty, 1, var_1123_0_feed, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_feed_is_empty, var_next, IO_TAIL_CALL,
  POS(1203, 19),
  POS(1204, 31),
  POS(1204, 19),
  POS(1206, 26),
  POS(1205, 19)
};

static TAB_NUM t_lambda_feed_is_empty[] = {
  0, // locals
  0, // parameters
  // close! in_fd
  var_close, 1, var_1122_0_in_fd, IO_CALL(0),
  // !in_fd undefined
  LET, 1, var_undefined, 1, var_1122_0_in_fd,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1207, 23),
  POS(1208, 23),
  POS(1209, 23)
};

static TAB_NUM t_lambda_70[] = {
  0, // locals
  0, // parameters
  // for_each read_descriptors
  var_for_each, 3, var_1179_1_read_descriptors, lambda_71, lambda_77, IO_TAIL_CALL,
  POS(1212, 19)
};

static TAB_NUM t_lambda_71[] = {
  1, // locals
  1, // parameters
  var_1213_3_read_descriptor,
  // read! $buf read_descriptor 0x100000
  var_read, 2, var_1213_3_read_descriptor, num_1048576, IO_CALL(1), var_1214_7_buf,
  // is_empty: # closed from the other side
  var_is_empty, 1, var_1214_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_empty, lambda_74, IO_TAIL_CALL,
  POS(1214, 23),
  POS(1216, 29),
  POS(1215, 23)
};

static TAB_NUM t_lambda_buf_is_empty[] = {
  1, // locals
  0, // parameters
  // close! read_descriptor
  var_close, 1, var_1213_3_read_descriptor, IO_CALL(0),
  // read_descriptor == out_fd:
  var_std__equal, 2, var_1213_3_read_descriptor, var_1128_1_out_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_72, lambda_73, IO_TAIL_CALL,
  POS(1217, 27),
  POS(1219, 29),
  POS(1218, 27)
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  0, // parameters
  // !out_fd undefined
  LET, 1, var_undefined, 1, var_1128_1_out_fd,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1220, 31),
  POS(1221, 31)
};

static TAB_NUM t_lambda_73[] = {
  0, // locals
  0, // parameters
  // err_fds(read_descriptor) undefined
  var_1127_1_err_fds, 2, var_1213_3_read_descriptor, var_undefined, 1, var_1127_1_err_fds,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1223, 32),
  POS(1224, 31)
};

static TAB_NUM t_lambda_74[] = {
  1, // locals
  0, // parameters
  // read_descriptor == out_fd:
  var_std__equal, 2, var_1213_3_read_descriptor, var_1128_1_out_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_75, lambda_76, IO_TAIL_CALL,
  POS(1227, 29),
  POS(1226, 27)
};

static TAB_NUM t_lambda_75[] = {
  0, // locals
  0, // parameters
  // append &out buf
  var_append, 2, var_1157_1_out, var_1214_7_buf, 1, var_1157_1_out,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1228, 31),
  POS(1229, 31)
};

static TAB_NUM t_lambda_76[] = {
  2, // locals
  0, // parameters
  // err_fds(read_descriptor)) buf
  var_1127_1_err_fds, 1, var_1213_3_read_descriptor, 1, LOCAL(1),
  // err(err_fds(read_descriptor)) buf
  var_1158_1_err, 1, LOCAL(1), 1, LOCAL(2),
  // append &err(err_fds(read_descriptor)) buf
  var_append, 2, LOCAL(2), var_1214_7_buf, 1, LOCAL(2),
  // err(err_fds(read_descriptor)) buf
  var_1158_1_err, 2, LOCAL(1), LOCAL(2), 1, var_1158_1_err,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1231, 43),
  POS(1231, 39),
  POS(1231, 31),
  POS(1231, 39),
  POS(1232, 31)
};

static TAB_NUM t_lambda_77[] = {
  2, // locals
  0, // parameters
  // is_empty && out_fd.is_undefined && err_fds.is_empty
  var_is_empty, 1, var_1126_1_pids, 1, LOCAL(1),
  // is_empty && out_fd.is_undefined && err_fds.is_empty
  var_std__and, 2, LOCAL(1), lambda_78, 1, LOCAL(2),
  // if!
  var_if, 3, LOCAL(2), lambda_80, var_next, IO_TAIL_CALL,
  POS(1235, 30),
  POS(1235, 30),
  POS(1234, 23)
};

static TAB_NUM t_lambda_78[] = {
  2, // locals
  0, // parameters
  // is_undefined && err_fds.is_empty
  var_is_undefined, 1, var_1128_1_out_fd, 1, LOCAL(1),
  // is_undefined && err_fds.is_empty
  var_std__and, 2, LOCAL(1), lambda_79, 1, LOCAL(2),
  // out_fd.is_undefined && err_fds.is_empty
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1235, 49),
  POS(1235, 49),
  POS(1235, 42)
};

static TAB_NUM t_lambda_79[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_1127_1_err_fds, 1, LOCAL(1),
  // err_fds.is_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1235, 73),
  POS(1235, 65)
};

static TAB_NUM t_lambda_80[] = {
  0, // locals
  0, // parameters
  //  ret out err
  LET, 3, var_1156_1_ret, var_1157_1_out, var_1158_1_err, TAIL_CALL,
  POS(1236, 27)
};

static TAB_NUM t_func_std__extern[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1243_0_command
  // .command_of command)
  LET, -1, func_extern_call, var_command_of, LOCAL(2), LOCAL(1),
  // -> extern_call(.command_of command)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1245, 18),
  POS(1245, 3)
};

static int list_1158_9_arguments[] = {
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__print_to}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__file_descriptor___load}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___save}},
  {FLT_STRING_8, 2, {.str_8 = "w+"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__try}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__check}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__file_exists}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__directory}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_entry_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__stat___access_time_of}},
  {FLT_POSITIVE_INT64, 0, {.value = 1000000000}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__stat___modification_time_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__stat___status_change_time_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__stat___is_a_directory}},
  {FLT_CHARACTER, 0, {.value = 100}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__call}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_STRING_8, 1, {.str_8 = "="}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_READ}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_out_fd}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_collect_output}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_err_fd}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_collect_error_output}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_PROCESS_JOINED}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_do_collect_output}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__terminate}},
  {FLT_STRING_8, 15, {.str_8 = "file_descriptor"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__file_descriptor___serialize}},
  {FLT_STRING_8, 16, {.str_8 = "file_descriptor "}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__file_descriptor___deserializer_of}},
  {FLT_STRING_8, 10, {.str_8 = "process_id"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__process_id___serialize}},
  {FLT_STRING_8, 11, {.str_8 = "process_id "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__process_id___deserializer_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_extern_call}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__pipe}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_first_arg_is_a_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_first_arg_is_a_file_descriptor}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_build_commands}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_arg_is_a_function}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__pipe_commands}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_feed_or_fd_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_feed_or_fd_is_a_file_descriptor}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_run_pipe}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_store_pid_and_err_fd}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_LIST, 1, {.arguments = list_1158_9_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_manage_io}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_rpid_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_feed_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_buf_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__extern}}
};

static ATTRIBUTE_DEFINITION std_types__string__attributes[] = {
  {var_load, -func_std_types__string___load},
  {var_save, -func_std_types__string___save}
};

static ATTRIBUTE_DEFINITION std_types__file_descriptor__attributes[] = {
  {var_load, -func_std_types__file_descriptor___load},
  {-var_is_a_file_descriptor, -var_true},
  {-var_serialization_tag_of, -str_file_descriptor},
  {var_serialize, -func_std_types__file_descriptor___serialize},
  {-var_deserializer_of, -func_std_types__file_descriptor___deserializer_of}
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
    "load\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(62, 1)}
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
    "124_0_duration\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(126, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(127, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(127, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "usleep\000", NULL,
    {.position = POS(127, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(128, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(126, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "write_string_to\000std", NULL,
    {.const_idx = -func_std__write_string_to}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "151_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "152_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "154_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(154, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "157_8_bytes_written\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write\000", NULL,
    {.position = POS(157, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(159, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(164, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(164, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(165, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(166, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(162, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(155, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "write_to\000std", NULL,
    {.const_idx = -func_std__write_to}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(194, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write_string_to\000", NULL,
    {.position = POS(194, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "writeln_to\000std", NULL,
    {.const_idx = -func_std__writeln_to}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(221, 23)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "print_string_to\000std", NULL,
    {.const_idx = -func_std__print_string_to}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(247, 27)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "print_to\000std", NULL,
    {.const_idx = -func_std__print_to}
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
    {.position = POS(319, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "print\000std", NULL,
    {.const_idx = -func_std__print}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print_string\000", NULL,
    {.position = POS(343, 3)}
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
    {.position = POS(393, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "eprint\000std", NULL,
    {.const_idx = -func_std__eprint}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprint_string\000", NULL,
    {.position = POS(417, 3)}
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
    "460_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "461_0_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "463_1_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "465_7_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read\000", NULL,
    {.position = POS(465, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(468, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(469, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(470, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000", NULL,
    {.position = POS(471, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(466, 5)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "read_from_until\000std", NULL,
    {.const_idx = -func_std__read_from_until}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "500_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "501_0_sentinel\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "502_0_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "504_1_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "506_7_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(513, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(514, 13)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "readln_from\000std", NULL,
    {.const_idx = -func_std__readln_from}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read_from_until\000", NULL,
    {.position = POS(542, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "read_all_from\000std", NULL,
    {.const_idx = -func_std__read_all_from}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "561_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "563_1_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "565_7_buf\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "get_from_until\000std", NULL,
    {.const_idx = -func_std__get_from_until}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_utf8\000", NULL,
    {.position = POS(605, 11)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "getln_from\000std", NULL,
    {.const_idx = -func_std__getln_from}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_from_until\000", NULL,
    {.position = POS(629, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "get_until\000std", NULL,
    {.const_idx = -func_std__get_until}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDIN_FILENO\000", NULL,
    {.position = POS(656, 19)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "getln\000std", NULL,
    {.const_idx = -func_std__getln}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "getln_from\000", NULL,
    {.position = POS(678, 3)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "string\000std_types", std_types__string__attributes,
    {.position = POS(680, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "load\000", NULL,
    {.position = POS(680, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open\000", NULL,
    {.position = POS(696, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "check\000", NULL,
    {.position = POS(697, 3)}
  },
  {
    FOT_UNKNOWN, 0, 5,
    "file_descriptor\000std_types", std_types__file_descriptor__attributes,
    {.position = POS(700, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read_all_from\000", NULL,
    {.position = POS(716, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "close\000", NULL,
    {.position = POS(718, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "save\000", NULL,
    {.position = POS(721, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write_to\000", NULL,
    {.position = POS(744, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "try\000std", NULL,
    {.const_idx = -func_std__try}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(763, 6)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "check\000std", NULL,
    {.const_idx = -func_std__check}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "779_0_argument\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "file_exists\000std", NULL,
    {.const_idx = -func_std__file_exists}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "stat\000", NULL,
    {.position = POS(800, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(801, 6)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "directory\000std", NULL,
    {.const_idx = -func_std__directory}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "822_1_entries\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(822, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "823_10_dir\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "opendir\000", NULL,
    {.position = POS(823, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "825_10_entry\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "readdir\000", NULL,
    {.position = POS(825, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "closedir\000", NULL,
    {.position = POS(828, 9)}
  },
  {
    FOT_UNKNOWN, 0, 4,
    "stat\000std_types", std_types__stat__attributes,
    {.position = POS(834, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "access_time_of\000", NULL,
    {.position = POS(834, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "access_time_seconds_of\000", NULL,
    {.position = POS(846, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "access_time_nanoseconds_of\000", NULL,
    {.position = POS(847, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "over\000std", NULL,
    {.position = POS(847, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "modification_time_of\000", NULL,
    {.position = POS(849, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "modification_time_seconds_of\000", NULL,
    {.position = POS(858, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "modification_time_nanoseconds_of\000", NULL,
    {.position = POS(859, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "status_change_time_of\000", NULL,
    {.position = POS(861, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "status_change_time_seconds_of\000", NULL,
    {.position = POS(870, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "status_change_time_nanoseconds_of\000", NULL,
    {.position = POS(871, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_directory\000", NULL,
    {.position = POS(873, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mode_of\000", NULL,
    {.position = POS(880, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(880, 6)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "call\000std", NULL,
    {.const_idx = -func_std__call}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(895, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "895_1_do_collect_output\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(895, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "896_1_do_collect_error_output\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "897_1_env_vars\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "environment\000", NULL,
    {.position = POS(898, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(898, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(902, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(900, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(898, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "905_29_out_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "905_37_err_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_process\000", NULL,
    {.position = POS(905, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "907_1_io\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "io\000std_types", NULL,
    {.position = POS(907, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "join_process\000", NULL,
    {.position = POS(908, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "start_reading_from\000", NULL,
    {.position = POS(909, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "912_1_out\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "913_1_err\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_events\000", NULL,
    {.position = POS(915, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "917_13_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "917_17_data\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ\000", NULL,
    {.position = POS(919, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "stop_reading_from\000", NULL,
    {.position = POS(923, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(926, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PROCESS_JOINED\000", NULL,
    {.position = POS(945, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "946_1_ret\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "terminate\000std", NULL,
    {.const_idx = -func_std__terminate}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXIT_SUCCESS\000", NULL,
    {.position = POS(967, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exit\000", NULL,
    {.position = POS(967, 3)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_file_descriptor\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(973, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_file_descriptor\000", NULL,
    {.position = POS(973, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(973, 41)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(981, 29)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(985, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "990_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "992_1_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(996, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deserializer_of\000", NULL,
    {.position = POS(999, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "integer\000", NULL,
    {.position = POS(1006, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "file_descriptor\000", NULL,
    {.position = POS(1006, 6)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_process_id\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_process_id\000", NULL,
    {.position = POS(1012, 20)}
  },
  {
    FOT_UNKNOWN, 0, 4,
    "process_id\000std_types", std_types__process_id__attributes,
    {.position = POS(1016, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1029_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1031_1_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "process_id\000", NULL,
    {.position = POS(1045, 6)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "command_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "flatten\000", NULL,
    {.position = POS(1054, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_string\000", NULL,
    {.position = POS(1054, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(1054, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "call\000", NULL,
    {.position = POS(1054, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pipe\000std", NULL,
    {.const_idx = -func_std__pipe}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1058_0_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1060_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1061_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1062_1_in_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1063_1_feed\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1064_1_commands\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1065_1_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1066_1_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1067_1_first_arg\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(1069, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1087_1_arg\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_function\000", NULL,
    {.position = POS(1089, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(1091, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(1094, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pipe_commands\000std", NULL,
    {.const_idx = -func_std__pipe_commands}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1107_0_feed_or_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1108_0_commands\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1122_0_in_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1123_0_feed\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1124_0_commands\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1126_1_pids\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(1126, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1127_1_err_fds\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1128_1_out_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1129_1_env_vars\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1138_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1139_9_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1139_15_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1141_1_pid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1142_1_err_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(1144, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(1144, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(1156, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1156_1_ret\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dup\000", NULL,
    {.position = POS(1156, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1157_1_out\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1158_1_err\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1169_1_read_descriptor_list\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "keys_of\000", NULL,
    {.position = POS(1169, 33)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1179_1_read_descriptors\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1180_1_write_descriptors\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pselect\000", NULL,
    {.position = POS(1177, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CHILD_CHANGED_STATE\000", NULL,
    {.position = POS(1185, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1188_8_rpid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1188_14_status\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "wait2\000", NULL,
    {.position = POS(1188, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1213_3_read_descriptor\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1214_7_buf\000", NULL
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

FUNKY_MODULE module__basic__io = {
  "_basic__io", // module name
  "basic/io.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  168, // number of constants
  223, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
