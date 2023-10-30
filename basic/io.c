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
  func_std__print_string_to = -5,
  lambda_2 = -6,
  lambda_3 = -7,
  lambda_4 = -8,
  num_1 = -9,
  minus_num_1 = -10,
  func_std__write_all_to = -11,
  func_std__print_to = -12,
  func_std__print_string = -13,
  func_std__print = -14,
  func_std__println = -15,
  chr_10 = -16,
  func_std__eprint_string = -17,
  func_std__eprint = -18,
  func_std__eprintln = -19,
  lambda_5 = -20,
  string_1 = -21,
  lambda_loop = -22,
  lambda_6 = -23,
  lambda_7 = -24,
  string_2 = -25,
  lambda_8 = -26,
  lambda_9 = -27,
  func_std__read_all_from = -28,
  lambda_2_loop = -29,
  num_4096 = -30,
  lambda_10 = -31,
  lambda_11 = -32,
  lambda_12 = -33,
  lambda_13 = -34,
  func_std_types__string___load = -35,
  str_r = -36,
  func_std_types__file_descriptor___load = -37,
  func_std_types__string___save = -38,
  str_w = -39,
  func_std__try = -40,
  func_std__check = -41,
  lambda_14 = -42,
  func_std__file_exists = -43,
  func_std__directory = -44,
  lambda_3_loop = -45,
  lambda_entry_is_an_error = -46,
  lambda_15 = -47,
  func_std_types__stat___access_time_of = -48,
  num_1000000000 = -49,
  func_std_types__stat___modification_time_of = -50,
  func_std_types__stat___status_change_time_of = -51,
  func_std_types__stat___is_a_directory = -52,
  chr_100 = -53,
  func_std__call = -54,
  num_2 = -55,
  num_3 = -56,
  lambda_16 = -57,
  lambda_17 = -58,
  string_3 = -59,
  lambda_18 = -60,
  lambda_4_loop = -61,
  lambda_19 = -62,
  lambda_READ = -63,
  lambda_20 = -64,
  lambda_21 = -65,
  lambda_out_fd = -66,
  lambda_do_collect_output = -67,
  lambda_22 = -68,
  lambda_err_fd = -69,
  lambda_do_collect_error_output = -70,
  lambda_23 = -71,
  lambda_24 = -72,
  lambda_PROCESS_JOINED = -73,
  lambda_2_do_collect_output = -74,
  lambda_25 = -75,
  lambda_26 = -76,
  lambda_27 = -77,
  lambda_28 = -78,
  func_std__terminate = -79,
  str_file_descriptor = -80,
  func_std_types__file_descriptor___serialize = -81,
  str_file_descriptor_2 = -82,
  lambda_29 = -83,
  lambda_30 = -84,
  func_std_types__file_descriptor___deserializer_of = -85,
  str_process_id = -86,
  func_std_types__process_id___serialize = -87,
  str_process_id_2 = -88,
  lambda_31 = -89,
  lambda_32 = -90,
  func_std_types__process_id___deserializer_of = -91,
  func_extern_call = -92,
  func_std__pipe = -93,
  lambda_first_arg_is_a_string = -94,
  lambda_33 = -95,
  lambda_first_arg_is_a_file_descriptor = -96,
  func_build_commands = -97,
  lambda_34 = -98,
  lambda_35 = -99,
  lambda_arg_is_a_function = -100,
  lambda_36 = -101,
  lambda_37 = -102,
  lambda_38 = -103,
  lambda_39 = -104,
  func_run_pipe = -105,
  lambda_40 = -106,
  lambda_41 = -107,
  lambda_42 = -108,
  lambda_43 = -109,
  lambda_44 = -110,
  lambda_45 = -111,
  lambda_46 = -112,
  func_store_pid_and_err_fd = -113,
  lambda_47 = -114,
  list_555_9 = -115,
  lambda_48 = -116,
  func_manage_io = -117,
  lambda_5_loop = -118,
  lambda_49 = -119,
  lambda_50 = -120,
  lambda_51 = -121,
  lambda_52 = -122,
  lambda_53 = -123,
  lambda_6_loop = -124,
  lambda_rpid_is_defined = -125,
  lambda_54 = -126,
  lambda_55 = -127,
  lambda_feed_is_empty = -128,
  lambda_56 = -129,
  lambda_57 = -130,
  num_1048576 = -131,
  lambda_buf_is_empty = -132,
  lambda_58 = -133,
  lambda_59 = -134,
  lambda_60 = -135,
  lambda_61 = -136,
  lambda_62 = -137,
  lambda_63 = -138,
  lambda_64 = -139,
  lambda_65 = -140,
  lambda_66 = -141,
  func_std__extern = -142
};

enum {
  var__START = FIRST_VAR-1,
  var_std__sleep, // initialized
  var_38_0_duration, // dynamic
  var_std__less, // extern
  var_std__times, // extern
  var_to_integer, // extern
  var_usleep, // extern
  var_pass, // extern
  var_on, // extern
  var_std__assign, // extern
  var_std__print_string_to, // initialized
  var_52_0_fd, // dynamic
  var_53_0_str, // dynamic
  var_55_1_len, // dynamic
  var_length_of, // extern
  var_58_8_bytes_written, // dynamic
  var_write, // extern
  var_is_an_error, // extern
  var_std__plus, // extern
  var_range, // extern
  var_next, // extern
  var_break, // extern
  var_if, // extern
  var_loop, // extern
  var_std__write_all_to, // initialized
  var_create_string, // extern
  var_print_string_to, // extern
  var_std__print_to, // initialized
  var_to_utf8, // extern
  var_std__print_string, // initialized
  var_STDOUT_FILENO, // extern
  var_std__print, // initialized
  var_print_string, // extern
  var_std__println, // initialized
  var_push, // extern
  var_std__eprint_string, // initialized
  var_STDERR_FILENO, // extern
  var_std__eprint, // initialized
  var_eprint_string, // extern
  var_std__eprintln, // initialized
  var_std__readln, // initialized
  var_192_1_line_buf, // dynamic
  var_STDIN_FILENO, // extern
  var_194_22_buf, // dynamic
  var_read, // extern
  var_is_undefined, // extern
  var_std__equal, // extern
  var_append, // extern
  var_std__read_all_from, // initialized
  var_213_0_fh, // dynamic
  var_215_1_already_read_data, // dynamic
  var_217_7_next_data, // dynamic
  var_is_empty, // extern
  var_std__load, // attribute
  var_std_types__string, // extern
  var_load, // extern polymorphic
  var_open, // extern
  var_check, // extern
  var_std_types__file_descriptor, // extern
  var_read_all_from, // extern
  var_close, // extern
  var_std__save, // attribute
  var_save, // extern polymorphic
  var_print_to, // extern
  var_std__try, // initialized
  var_undefined, // extern
  var_std__check, // initialized
  var_293_0_argument, // dynamic
  var_std__file_exists, // initialized
  var_stat, // extern
  var_not, // extern
  var_std__directory, // initialized
  var_305_1_entries, // dynamic
  var_empty_list, // extern
  var_306_10_dir, // dynamic
  var_opendir, // extern
  var_308_10_entry, // dynamic
  var_readdir, // extern
  var_closedir, // extern
  var_std__access_time_of, // attribute
  var_std_types__stat, // extern
  var_access_time_of, // extern polymorphic
  var_access_time_seconds_of, // extern
  var_access_time_nanoseconds_of, // extern
  var_std__over, // extern
  var_std__modification_time_of, // attribute
  var_modification_time_of, // extern polymorphic
  var_modification_time_seconds_of, // extern
  var_modification_time_nanoseconds_of, // extern
  var_std__status_change_time_of, // attribute
  var_status_change_time_of, // extern polymorphic
  var_status_change_time_seconds_of, // extern
  var_status_change_time_nanoseconds_of, // extern
  var_std__is_a_directory, // attribute
  var_is_a_directory, // extern polymorphic
  var_mode_of, // extern
  var_std__call, // initialized
  var_result_count, // extern
  var_347_1_do_collect_output, // dynamic
  var_std__not, // extern
  var_348_1_do_collect_error_output, // dynamic
  var_349_1_env_vars, // dynamic
  var_environment, // extern
  var_is_defined, // extern
  var_std__string, // extern
  var_for_each, // extern
  var_update_if, // extern
  var_357_29_out_fd, // dynamic
  var_357_37_err_fd, // dynamic
  var_create_process, // extern
  var_359_1_io, // dynamic
  var_std_types__io, // extern
  var_join_process, // extern
  var_start_reading_from, // extern
  var_364_1_out, // dynamic
  var_365_1_err, // dynamic
  var_get_events, // extern
  var_369_13_fd, // dynamic
  var_369_17_data, // dynamic
  var_READ, // extern
  var_stop_reading_from, // extern
  var_case, // extern
  var_PROCESS_JOINED, // extern
  var_398_1_ret, // dynamic
  var_std__terminate, // initialized
  var_EXIT_SUCCESS, // extern
  var_exit, // extern
  var_std__is_a_file_descriptor, // attribute
  var_std_types__object, // extern
  var_is_a_file_descriptor, // extern polymorphic
  var_false, // extern
  var_true, // extern
  var_serialization_tag_of, // extern polymorphic
  var_serialize, // extern polymorphic
  var_422_0_indent, // dynamic
  var_424_1_str, // dynamic
  var_tabs_and_spaces, // extern
  var_deserializer_of, // extern polymorphic
  var_integer, // extern
  var_file_descriptor, // extern
  var_std__is_a_process_id, // attribute
  var_is_a_process_id, // extern polymorphic
  var_std_types__process_id, // extern
  var_448_0_indent, // dynamic
  var_450_1_str, // dynamic
  var_process_id, // extern
  var_command_of, // attribute
  var_flatten, // extern
  var_to_string, // extern
  var_map, // extern
  var_call, // extern
  var_std__pipe, // initialized
  var_473_13_args, // dynamic
  var_474_1_i, // dynamic
  var_475_1_n, // dynamic
  var_476_1_in_fd, // dynamic
  var_477_1_feed, // dynamic
  var_478_1_commands, // dynamic
  var_479_1_head, // dynamic
  var_480_1_arguments, // dynamic
  var_481_1_first_arg, // dynamic
  var_is_a_string, // extern
  var_500_1_arg, // dynamic
  var_is_a_function, // extern
  var_tuple, // extern
  var_inc, // extern
  var_520_0_in_fd, // dynamic
  var_521_0_feed, // dynamic
  var_522_0_commands, // dynamic
  var_524_1_pids, // dynamic
  var_empty_hash_table, // extern
  var_525_1_err_fds, // dynamic
  var_526_1_out_fd, // dynamic
  var_527_1_env_vars, // dynamic
  var_536_3_idx, // dynamic
  var_537_9_head, // dynamic
  var_537_15_arguments, // dynamic
  var_538_1_pid, // dynamic
  var_539_1_err_fd, // dynamic
  var_std__and, // extern
  var_list, // extern
  var_553_1_ret, // dynamic
  var_dup, // extern
  var_554_1_out, // dynamic
  var_555_1_err, // dynamic
  var_566_1_read_descriptor_list, // dynamic
  var_keys_of, // extern
  var_576_1_read_descriptors, // dynamic
  var_577_1_write_descriptors, // dynamic
  var_pselect, // extern
  var_CHILD_CHANGED_STATE, // extern
  var_584_8_rpid, // dynamic
  var_584_14_status, // dynamic
  var_wait2, // extern
  var_608_3_read_descriptor, // dynamic
  var_609_7_buf, // dynamic
  var_std__extern, // initialized
  var__END
};


static TAB_NUM t_func_std__sleep[] = {
  1, // locals
  1, // parameters
  var_38_0_duration,
  // 0:
  var_std__less, 2, num_0, var_38_0_duration, 1, LOCAL(1),
  // on duration > 0:
  var_on, 2, LOCAL(1), lambda_1, IO_TAIL_CALL,
  POS(40, 17),
  POS(40, 3)
};

static TAB_NUM t_lambda_1[] = {
  2, // locals
  0, // parameters
  // 1'000'000*duration).to_integer
  var_std__times, 2, num_1000000, var_38_0_duration, 1, LOCAL(1),
  // to_integer
  var_to_integer, 1, LOCAL(1), 1, LOCAL(2),
  // usleep! $_dummy (1'000'000*duration).to_integer
  var_usleep, 1, LOCAL(2), IO_CALL(1), LOCAL(1),
  // pass # Attention: Fix the compiler!
  var_pass, 0, TAIL_CALL,
  POS(41, 22),
  POS(41, 42),
  POS(41, 5),
  POS(42, 5)
};

static TAB_NUM t_func_std__print_string_to[] = {
  0, // locals
  2, // parameters
  var_52_0_fd,
  var_53_0_str,
  // $len length_of(str)
  var_length_of, 1, var_53_0_str, 1, var_55_1_len,
  // loop
  var_loop, 2, lambda_2, var_pass, IO_TAIL_CALL,
  POS(55, 3),
  POS(56, 3)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // write! $bytes_written fd str
  var_write, 2, var_52_0_fd, var_53_0_str, IO_CALL(1), var_58_8_bytes_written,
  // is_an_error
  var_is_an_error, 1, var_58_8_bytes_written, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_58_8_bytes_written, lambda_3, IO_TAIL_CALL,
  POS(58, 7),
  POS(60, 23),
  POS(59, 7)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // bytes_written < len:
  var_std__less, 2, var_58_8_bytes_written, var_55_1_len, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_4, var_break, IO_TAIL_CALL,
  POS(64, 13),
  POS(63, 11)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // bytes_written+1 -1
  var_std__plus, 2, var_58_8_bytes_written, num_1, 1, LOCAL(1),
  // range &str bytes_written+1 -1
  var_range, 3, var_53_0_str, LOCAL(1), minus_num_1, 1, var_53_0_str,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(65, 26),
  POS(65, 15),
  POS(66, 15)
};

static TAB_NUM t_func_std__write_all_to[] = {
  3, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 83_0_fd
  REST_PARAMETER, LOCAL(3), // 84_0_args
  // create_string(args)
  var_create_string, 1, LOCAL(3), 1, LOCAL(1),
  // print_string_to! fd create_string(args)
  var_print_string_to, 2, LOCAL(2), LOCAL(1), IO_TAIL_CALL,
  POS(86, 23),
  POS(86, 3)
};

static TAB_NUM t_func_std__print_to[] = {
  4, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 99_0_fd
  REST_PARAMETER, LOCAL(4), // 100_0_args
  // create_string(args).to_utf8
  var_create_string, 1, LOCAL(4), 1, LOCAL(1),
  // to_utf8
  var_to_utf8, 1, LOCAL(1), 1, LOCAL(2),
  // print_string_to! fd create_string(args).to_utf8
  var_print_string_to, 2, LOCAL(3), LOCAL(2), IO_TAIL_CALL,
  POS(102, 23),
  POS(102, 43),
  POS(102, 3)
};

static TAB_NUM t_func_std__print_string[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 112_0_str
  // to_utf8
  var_to_utf8, 1, LOCAL(2), 1, LOCAL(1),
  // print_string_to! STDOUT_FILENO str.to_utf8
  var_print_string_to, 2, var_STDOUT_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(114, 38),
  POS(114, 3)
};

static TAB_NUM t_func_std__print[] = {
  2, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(2), // 124_0_args
  // create_string(args)
  var_create_string, 1, LOCAL(2), 1, LOCAL(1),
  // print_string! create_string(args)
  var_print_string, 1, LOCAL(1), IO_TAIL_CALL,
  POS(126, 17),
  POS(126, 3)
};

static TAB_NUM t_func_std__println[] = {
  3, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(3), // 138_0_args
  // create_string(args) '@nl;')
  var_create_string, 1, LOCAL(3), 1, LOCAL(1),
  // push(create_string(args) '@nl;')
  var_push, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // print_string! push(create_string(args) '@nl;')
  var_print_string, 1, LOCAL(2), IO_TAIL_CALL,
  POS(140, 22),
  POS(140, 17),
  POS(140, 3)
};

static TAB_NUM t_func_std__eprint_string[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 150_0_str
  // to_utf8
  var_to_utf8, 1, LOCAL(2), 1, LOCAL(1),
  // print_string_to! STDERR_FILENO str.to_utf8
  var_print_string_to, 2, var_STDERR_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(152, 38),
  POS(152, 3)
};

static TAB_NUM t_func_std__eprint[] = {
  2, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(2), // 162_0_args
  // create_string(args)
  var_create_string, 1, LOCAL(2), 1, LOCAL(1),
  // eprint_string! create_string(args)
  var_eprint_string, 1, LOCAL(1), IO_TAIL_CALL,
  POS(164, 18),
  POS(164, 3)
};

static TAB_NUM t_func_std__eprintln[] = {
  3, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(3), // 176_0_args
  // create_string(args) '@nl;')
  var_create_string, 1, LOCAL(3), 1, LOCAL(1),
  // push(create_string(args) '@nl;')
  var_push, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // eprint_string! push(create_string(args) '@nl;')
  var_eprint_string, 1, LOCAL(2), IO_TAIL_CALL,
  POS(178, 23),
  POS(178, 18),
  POS(178, 3)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  // $line_buf ""
  LET, 1, string_1, 1, var_192_1_line_buf,
  // loop:
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(192, 5),
  POS(193, 5)
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // read! STDIN_FILENO 1 $buf
  var_read, 2, var_STDIN_FILENO, num_1, IO_CALL(1), var_194_22_buf,
  // is_undefined
  var_is_undefined, 1, var_194_22_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, lambda_7, IO_TAIL_CALL,
  POS(194, 7),
  POS(196, 13),
  POS(195, 7)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  buf # return the error object
  LET, 1, var_194_22_buf, TAIL_CALL,
  POS(197, 11)
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // buf == "@nl;"
  var_std__equal, 2, var_194_22_buf, string_2, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, IO_TAIL_CALL,
  POS(200, 13),
  POS(199, 11)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  // -> line_buf
  LET, 1, var_192_1_line_buf, TAIL_CALL,
  POS(202, 15)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  // append &line_buf buf
  var_append, 2, var_192_1_line_buf, var_194_22_buf, 1, var_192_1_line_buf,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(204, 15),
  POS(205, 15)
};

static TAB_NUM t_func_std__read_all_from[] = {
  0, // locals
  1, // parameters
  var_213_0_fh,
  // $already_read_data ""
  LET, 1, string_1, 1, var_215_1_already_read_data,
  // loop:
  var_loop, 1, lambda_2_loop, IO_TAIL_CALL,
  POS(215, 3),
  POS(216, 3)
};

static TAB_NUM t_lambda_2_loop[] = {
  1, // locals
  0, // parameters
  // read! $next_data fh 0x1000
  var_read, 2, var_213_0_fh, num_4096, IO_CALL(1), var_217_7_next_data,
  // is_an_error
  var_is_an_error, 1, var_217_7_next_data, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, IO_TAIL_CALL,
  POS(217, 5),
  POS(219, 17),
  POS(218, 5)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  next_data
  LET, 1, var_217_7_next_data, TAIL_CALL,
  POS(220, 9)
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_217_7_next_data, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12, lambda_13, IO_TAIL_CALL,
  POS(223, 21),
  POS(222, 9)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  already_read_data
  LET, 1, var_215_1_already_read_data, TAIL_CALL,
  POS(224, 13)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  // append &already_read_data next_data
  var_append, 2, var_215_1_already_read_data, var_217_7_next_data, 1, var_215_1_already_read_data,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(226, 13),
  POS(227, 13)
};

static TAB_NUM t_func_std_types__string___load[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 237_0_filename
  // open! $fd filename "r"
  var_open, 2, LOCAL(1), str_r, IO_CALL(1), LOCAL(2),
  // check fd
  var_check, 1, LOCAL(2), 0,
  // load! fd
  var_load, 1, LOCAL(2), IO_TAIL_CALL,
  POS(239, 3),
  POS(240, 3),
  POS(241, 3)
};

static TAB_NUM t_func_std_types__file_descriptor___load[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 249_0_fd
  // read_all_from! $data fd
  var_read_all_from, 1, LOCAL(1), IO_CALL(1), LOCAL(2),
  // check data
  var_check, 1, LOCAL(2), 0,
  // close! fd
  var_close, 1, LOCAL(1), IO_CALL(0),
  // -> data
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(251, 3),
  POS(252, 3),
  POS(253, 3),
  POS(254, 3)
};

static TAB_NUM t_func_std_types__string___save[] = {
  3, // locals
  2, // parameters
  LOCAL(1), // 264_0_filename
  LOCAL(2), // 265_0_data
  // open! $fh filename "w+"
  var_open, 2, LOCAL(1), str_w, IO_CALL(1), LOCAL(3),
  // check fh
  var_check, 1, LOCAL(3), 0,
  // print_to! fh data
  var_print_to, 2, LOCAL(3), LOCAL(2), IO_CALL(0),
  // close! fh
  var_close, 1, LOCAL(3), IO_TAIL_CALL,
  POS(267, 3),
  POS(268, 3),
  POS(269, 3),
  POS(270, 3)
};

static TAB_NUM t_func_std__try[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 281_0_body
  // body!
  LOCAL(1), 0, IO_CALL(0),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(283, 3),
  POS(284, 3)
};

static TAB_NUM t_func_std__check[] = {
  1, // locals
  1, // parameters
  var_293_0_argument,
  // is_an_error
  var_is_an_error, 1, var_293_0_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, var_pass, TAIL_CALL,
  POS(296, 14),
  POS(295, 3)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  argument
  LET, 1, var_293_0_argument, TAIL_CALL,
  POS(297, 7)
};

static TAB_NUM t_func_std__file_exists[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 300_20_filename
  // stat! $info filename
  var_stat, 1, LOCAL(3), IO_CALL(1), LOCAL(4),
  // is_an_error)
  var_is_an_error, 1, LOCAL(4), 1, LOCAL(1),
  // not(info.is_an_error)
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // -> not(info.is_an_error)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(301, 3),
  POS(302, 15),
  POS(302, 6),
  POS(302, 3)
};

static TAB_NUM t_func_std__directory[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 304_18_pathname
  // $entries empty_list
  LET, 1, var_empty_list, 1, var_305_1_entries,
  // opendir! $dir pathname
  var_opendir, 1, LOCAL(1), IO_CALL(1), var_306_10_dir,
  // loop:
  var_loop, 1, lambda_3_loop, IO_TAIL_CALL,
  POS(305, 3),
  POS(306, 3),
  POS(307, 3)
};

static TAB_NUM t_lambda_3_loop[] = {
  1, // locals
  0, // parameters
  // readdir! $entry dir
  var_readdir, 1, var_306_10_dir, IO_CALL(1), var_308_10_entry,
  // is_an_error:
  var_is_an_error, 1, var_308_10_entry, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_entry_is_an_error, lambda_15, IO_TAIL_CALL,
  POS(308, 5),
  POS(310, 13),
  POS(309, 5)
};

static TAB_NUM t_lambda_entry_is_an_error[] = {
  0, // locals
  0, // parameters
  // closedir! dir
  var_closedir, 1, var_306_10_dir, IO_CALL(0),
  // -> entries
  LET, 1, var_305_1_entries, TAIL_CALL,
  POS(311, 9),
  POS(312, 9)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  // push &entries entry
  var_push, 2, var_305_1_entries, var_308_10_entry, 1, var_305_1_entries,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(314, 9),
  POS(315, 9)
};

static TAB_NUM t_func_std_types__stat___access_time_of[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 319_34_self
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
  POS(322, 7),
  POS(323, 7),
  POS(323, 7),
  POS(321, 6),
  POS(320, 3)
};

static TAB_NUM t_func_std_types__stat___modification_time_of[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 327_40_self
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
  POS(330, 7),
  POS(331, 7),
  POS(331, 7),
  POS(329, 6),
  POS(328, 3)
};

static TAB_NUM t_func_std_types__stat___status_change_time_of[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 335_41_self
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
  POS(338, 7),
  POS(339, 7),
  POS(339, 7),
  POS(337, 6),
  POS(336, 3)
};

static TAB_NUM t_func_std_types__stat___is_a_directory[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 343_34_self
  // mode_of(self)(1) == 'd'
  var_mode_of, 1, LOCAL(4), 1, LOCAL(1),
  // mode_of(self)(1) == 'd'
  LOCAL(1), 1, num_1, 1, LOCAL(2),
  // mode_of(self)(1) == 'd'
  var_std__equal, 2, LOCAL(2), chr_100, 1, LOCAL(3),
  // -> mode_of(self)(1) == 'd'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(344, 6),
  POS(344, 6),
  POS(344, 6),
  POS(344, 3)
};

static TAB_NUM t_func_std__call[] = {
  6, // locals
  2, // parameters
  LOCAL(3), // 346_13_cmd
  LOCAL(4), // 346_17_args
  // result_count() >= 2)
  var_result_count, 0, 1, LOCAL(1),
  // result_count() >= 2)
  var_std__less, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // $do_collect_output (result_count() >= 2)
  var_std__not, 1, LOCAL(2), 1, var_347_1_do_collect_output,
  // result_count() == 3)
  var_result_count, 0, 1, LOCAL(1),
  // $do_collect_error_output (result_count() == 3)
  var_std__equal, 2, LOCAL(1), num_3, 1, var_348_1_do_collect_error_output,
  // $env_vars undefined
  LET, 1, var_undefined, 1, var_349_1_env_vars,
  // is_defined &env_vars:
  var_is_defined, 1, var_environment, 1, LOCAL(1),
  // update_if environment.is_defined &env_vars:
  var_update_if, 3, LOCAL(1), var_349_1_env_vars, lambda_16, 1, var_349_1_env_vars,
  // create_process! $pid $in_fd $out_fd $err_fd cmd args env_vars
  var_create_process, 3, LOCAL(3), LOCAL(4), var_349_1_env_vars, IO_CALL(4), LOCAL(5), LOCAL(6), var_357_29_out_fd, var_357_37_err_fd,
  // close! in_fd
  var_close, 1, LOCAL(6), IO_CALL(0),
  // $io std_types::io
  LET, 1, var_std_types__io, 1, var_359_1_io,
  // join_process &io pid
  var_join_process, 2, var_359_1_io, LOCAL(5), 1, var_359_1_io,
  // start_reading_from &io out_fd
  var_start_reading_from, 2, var_359_1_io, var_357_29_out_fd, 1, var_359_1_io,
  // start_reading_from &io err_fd
  var_start_reading_from, 2, var_359_1_io, var_357_37_err_fd, 1, var_359_1_io,
  // $out ""
  LET, 1, string_1, 1, var_364_1_out,
  // $err ""
  LET, 1, string_1, 1, var_365_1_err,
  // loop:
  var_loop, 1, lambda_4_loop, IO_TAIL_CALL,
  POS(347, 23),
  POS(347, 23),
  POS(347, 3),
  POS(348, 29),
  POS(348, 3),
  POS(349, 3),
  POS(350, 25),
  POS(350, 3),
  POS(357, 3),
  POS(358, 3),
  POS(359, 3),
  POS(360, 3),
  POS(361, 3),
  POS(362, 3),
  POS(364, 3),
  POS(365, 3),
  POS(366, 3)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  // !env_vars empty_list
  LET, 1, var_empty_list, 1, var_349_1_env_vars,
  // for_each environment
  var_for_each, 3, var_environment, lambda_17, lambda_18, TAIL_CALL,
  POS(351, 5),
  POS(352, 5)
};

static TAB_NUM t_lambda_17[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 353_3_key
  LOCAL(3), // 353_7_value
  // "@(key)=@(value)"
  var_std__string, 3, LOCAL(2), string_3, LOCAL(3), 1, LOCAL(1),
  // push &env_vars "@(key)=@(value)"
  var_push, 2, var_349_1_env_vars, LOCAL(1), 1, var_349_1_env_vars,
  // next
  var_next, 0, TAIL_CALL,
  POS(354, 24),
  POS(354, 9),
  POS(355, 9)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  env_vars
  LET, 1, var_349_1_env_vars, TAIL_CALL,
  POS(356, 9)
};

static TAB_NUM t_lambda_4_loop[] = {
  1, // locals
  0, // parameters
  // get_events! &io $events
  var_get_events, 1, var_359_1_io, IO_CALL(2), var_359_1_io, LOCAL(1),
  // for_each events: (event)
  var_for_each, 2, LOCAL(1), lambda_19, IO_TAIL_CALL,
  POS(367, 5),
  POS(368, 5)
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 368_18_event
  // event $type $fd $data
  LOCAL(1), 0, 3, LOCAL(2), var_369_13_fd, var_369_17_data,
  // case type
  var_case, 6, LOCAL(2), var_READ, lambda_READ, var_PROCESS_JOINED, lambda_PROCESS_JOINED, lambda_28, IO_TAIL_CALL,
  POS(369, 7),
  POS(370, 7)
};

static TAB_NUM t_lambda_READ[] = {
  1, // locals
  0, // parameters
  // data == "":
  var_std__equal, 2, var_369_17_data, string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_20, lambda_21, IO_TAIL_CALL,
  POS(373, 13),
  POS(372, 11)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_369_13_fd, IO_CALL(0),
  // stop_reading_from &io fd
  var_stop_reading_from, 2, var_359_1_io, var_369_13_fd, 1, var_359_1_io,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(374, 15),
  POS(375, 15),
  POS(376, 15)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  // case fd
  var_case, 6, var_369_13_fd, var_357_29_out_fd, lambda_out_fd, var_357_37_err_fd, lambda_err_fd, lambda_24, IO_TAIL_CALL,
  POS(378, 15)
};

static TAB_NUM t_lambda_out_fd[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_347_1_do_collect_output, lambda_do_collect_output, lambda_22, IO_TAIL_CALL,
  POS(380, 19)
};

static TAB_NUM t_lambda_do_collect_output[] = {
  0, // locals
  0, // parameters
  // append &out data
  var_append, 2, var_364_1_out, var_369_17_data, 1, var_364_1_out,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(382, 23),
  POS(383, 23)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  // print_to! STDOUT_FILENO data
  var_print_to, 2, var_STDOUT_FILENO, var_369_17_data, IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(385, 23),
  POS(386, 23)
};

static TAB_NUM t_lambda_err_fd[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_348_1_do_collect_error_output, lambda_do_collect_error_output, lambda_23, IO_TAIL_CALL,
  POS(388, 19)
};

static TAB_NUM t_lambda_do_collect_error_output[] = {
  0, // locals
  0, // parameters
  // append &err data
  var_append, 2, var_365_1_err, var_369_17_data, 1, var_365_1_err,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(390, 23),
  POS(391, 23)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  // print_to! STDERR_FILENO data
  var_print_to, 2, var_STDERR_FILENO, var_369_17_data, IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(393, 23),
  POS(394, 23)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(396, 19)
};

static TAB_NUM t_lambda_PROCESS_JOINED[] = {
  0, // locals
  0, // parameters
  // $ret data
  LET, 1, var_369_17_data, 1, var_398_1_ret,
  // if
  var_if, 3, var_347_1_do_collect_output, lambda_2_do_collect_output, lambda_27, TAIL_CALL,
  POS(398, 11),
  POS(399, 11)
};

static TAB_NUM t_lambda_2_do_collect_output[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_348_1_do_collect_error_output, lambda_25, lambda_26, TAIL_CALL,
  POS(401, 15)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  //  ret out err
  LET, 3, var_398_1_ret, var_364_1_out, var_365_1_err, TAIL_CALL,
  POS(403, 19)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  //  ret out
  LET, 2, var_398_1_ret, var_364_1_out, TAIL_CALL,
  POS(404, 19)
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  //  ret
  LET, 1, var_398_1_ret, TAIL_CALL,
  POS(405, 15)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(407, 11)
};

static TAB_NUM t_func_std__terminate[] = {
  0, // locals
  0, // parameters
  // exit! EXIT_SUCCESS
  var_exit, 1, var_EXIT_SUCCESS, IO_TAIL_CALL,
  POS(410, 3)
};

static TAB_NUM t_func_std_types__file_descriptor___serialize[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 421_0_self
  var_undefined, var_422_0_indent,
  // to_integer)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(1),
  // $str "
  var_std__string, 3, str_file_descriptor_2, LOCAL(1), string_2, 1, var_424_1_str,
  // is_defined
  var_is_defined, 1, var_422_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_29, lambda_30, TAIL_CALL,
  POS(425, 28),
  POS(424, 3),
  POS(427, 12),
  POS(426, 3)
};

static TAB_NUM t_lambda_29[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_422_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_424_1_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(428, 15),
  POS(428, 8),
  POS(428, 7)
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_424_1_str, TAIL_CALL,
  POS(429, 7)
};

static TAB_NUM t_func_std_types__file_descriptor___deserializer_of[] = {
  3, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(3), // 434_0_argument
  // integer(argument))
  var_integer, 1, LOCAL(3), 1, LOCAL(1),
  // file_descriptor(integer(argument))
  var_file_descriptor, 1, LOCAL(1), 1, LOCAL(2),
  // -> file_descriptor(integer(argument))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(436, 22),
  POS(436, 6),
  POS(436, 3)
};

static TAB_NUM t_func_std_types__process_id___serialize[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 447_0_self
  var_undefined, var_448_0_indent,
  // to_integer)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(1),
  // $str "
  var_std__string, 3, str_process_id_2, LOCAL(1), string_2, 1, var_450_1_str,
  // is_defined
  var_is_defined, 1, var_448_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_31, lambda_32, TAIL_CALL,
  POS(451, 23),
  POS(450, 3),
  POS(453, 12),
  POS(452, 3)
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_448_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_450_1_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(454, 15),
  POS(454, 8),
  POS(454, 7)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_450_1_str, TAIL_CALL,
  POS(455, 7)
};

static TAB_NUM t_func_std_types__process_id___deserializer_of[] = {
  3, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(3), // 460_0_argument
  // integer(argument))
  var_integer, 1, LOCAL(3), 1, LOCAL(1),
  // process_id(integer(argument))
  var_process_id, 1, LOCAL(1), 1, LOCAL(2),
  // -> process_id(integer(argument))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(462, 17),
  POS(462, 6),
  POS(462, 3)
};

static TAB_NUM t_func_extern_call[] = {
  5, // locals
  -2, // parameters
  MYSELF_PARAMETER, LOCAL(4), // 468_0_myself
  REST_PARAMETER, LOCAL(5), // 469_0_arguments
  // command_of(myself) map(flatten(arguments) to_string)
  var_command_of, 1, LOCAL(4), 1, LOCAL(1),
  // flatten(arguments) to_string)
  var_flatten, 1, LOCAL(5), 1, LOCAL(2),
  // map(flatten(arguments) to_string)
  var_map, 2, LOCAL(2), var_to_string, 1, LOCAL(3),
  // call! command_of(myself) map(flatten(arguments) to_string)
  var_call, 2, LOCAL(1), LOCAL(3), IO_TAIL_CALL,
  POS(471, 9),
  POS(471, 32),
  POS(471, 28),
  POS(471, 3)
};

static TAB_NUM t_func_std__pipe[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, var_473_13_args,
  // $i 1
  LET, 1, num_1, 1, var_474_1_i,
  // $n length_of(args)
  var_length_of, 1, var_473_13_args, 1, var_475_1_n,
  // $in_fd undefined
  LET, 1, var_undefined, 1, var_476_1_in_fd,
  // $feed undefined
  LET, 1, var_undefined, 1, var_477_1_feed,
  // $commands empty_list
  LET, 1, var_empty_list, 1, var_478_1_commands,
  // $head undefined
  LET, 1, var_undefined, 1, var_479_1_head,
  // $arguments undefined
  LET, 1, var_undefined, 1, var_480_1_arguments,
  // $first_arg args(1)
  var_473_13_args, 1, num_1, 1, var_481_1_first_arg,
  // is_a_string:
  var_is_a_string, 1, var_481_1_first_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_first_arg_is_a_string, lambda_33, IO_TAIL_CALL,
  POS(474, 3),
  POS(475, 3),
  POS(476, 3),
  POS(477, 3),
  POS(478, 3),
  POS(479, 3),
  POS(480, 3),
  POS(481, 3),
  POS(483, 15),
  POS(482, 3)
};

static TAB_NUM t_lambda_first_arg_is_a_string[] = {
  0, // locals
  0, // parameters
  // !feed first_arg
  LET, 1, var_481_1_first_arg, 1, var_477_1_feed,
  // !i 2
  LET, 1, num_2, 1, var_474_1_i,
  // build_commands!
  func_build_commands, 0, IO_TAIL_CALL,
  POS(484, 7),
  POS(485, 7),
  POS(486, 7)
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // is_a_file_descriptor:
  var_is_a_file_descriptor, 1, var_481_1_first_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_first_arg_is_a_file_descriptor, func_build_commands, IO_TAIL_CALL,
  POS(489, 19),
  POS(488, 7)
};

static TAB_NUM t_lambda_first_arg_is_a_file_descriptor[] = {
  0, // locals
  0, // parameters
  // !in_fd first_arg
  LET, 1, var_481_1_first_arg, 1, var_476_1_in_fd,
  // build_commands!
  func_build_commands, 0, IO_TAIL_CALL,
  POS(490, 11),
  POS(491, 11)
};

static TAB_NUM t_func_build_commands[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_34, lambda_38, IO_TAIL_CALL,
  POS(495, 5)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // n break
  var_std__less, 2, var_475_1_n, var_474_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_35, IO_TAIL_CALL,
  POS(498, 15),
  POS(497, 9)
};

static TAB_NUM t_lambda_35[] = {
  1, // locals
  0, // parameters
  // $arg args(i)
  var_473_13_args, 1, var_474_1_i, 1, var_500_1_arg,
  // is_a_function:
  var_is_a_function, 1, var_500_1_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_arg_is_a_function, lambda_37, IO_TAIL_CALL,
  POS(500, 13),
  POS(502, 19),
  POS(501, 13)
};

static TAB_NUM t_lambda_arg_is_a_function[] = {
  1, // locals
  0, // parameters
  // is_defined &commands:
  var_is_defined, 1, var_479_1_head, 1, LOCAL(1),
  // update_if head.is_defined &commands:
  var_update_if, 3, LOCAL(1), var_478_1_commands, lambda_36, 1, var_478_1_commands,
  // !head command_of(arg)
  var_command_of, 1, var_500_1_arg, 1, var_479_1_head,
  // !arguments empty_list
  LET, 1, var_empty_list, 1, var_480_1_arguments,
  // inc &i
  var_inc, 1, var_474_1_i, 1, var_474_1_i,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(503, 32),
  POS(503, 17),
  POS(505, 17),
  POS(506, 17),
  POS(507, 17),
  POS(508, 17)
};

static TAB_NUM t_lambda_36[] = {
  3, // locals
  0, // parameters
  // flatten(arguments) to_string))
  var_flatten, 1, var_480_1_arguments, 1, LOCAL(1),
  // map(flatten(arguments) to_string))
  var_map, 2, LOCAL(1), var_to_string, 1, LOCAL(2),
  // tuple(head map(flatten(arguments) to_string))
  var_tuple, 2, var_479_1_head, LOCAL(2), 1, LOCAL(3),
  // push commands tuple(head map(flatten(arguments) to_string))
  var_push, 2, var_478_1_commands, LOCAL(3), TAIL_CALL,
  POS(504, 48),
  POS(504, 44),
  POS(504, 33),
  POS(504, 19)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  // push &arguments arg
  var_push, 2, var_480_1_arguments, var_500_1_arg, 1, var_480_1_arguments,
  // inc &i
  var_inc, 1, var_474_1_i, 1, var_474_1_i,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(510, 17),
  POS(511, 17),
  POS(512, 17)
};

static TAB_NUM t_lambda_38[] = {
  1, // locals
  0, // parameters
  // is_defined &commands:
  var_is_defined, 1, var_479_1_head, 1, LOCAL(1),
  // update_if head.is_defined &commands:
  var_update_if, 3, LOCAL(1), var_478_1_commands, lambda_39, 1, var_478_1_commands,
  // run_pipe! in_fd feed commands
  func_run_pipe, 3, var_476_1_in_fd, var_477_1_feed, var_478_1_commands, IO_TAIL_CALL,
  POS(514, 24),
  POS(514, 9),
  POS(516, 9)
};

static TAB_NUM t_lambda_39[] = {
  3, // locals
  0, // parameters
  // flatten(arguments) to_string))
  var_flatten, 1, var_480_1_arguments, 1, LOCAL(1),
  // map(flatten(arguments) to_string))
  var_map, 2, LOCAL(1), var_to_string, 1, LOCAL(2),
  // tuple(head map(flatten(arguments) to_string))
  var_tuple, 2, var_479_1_head, LOCAL(2), 1, LOCAL(3),
  // push commands tuple(head map(flatten(arguments) to_string))
  var_push, 2, var_478_1_commands, LOCAL(3), TAIL_CALL,
  POS(515, 40),
  POS(515, 36),
  POS(515, 25),
  POS(515, 11)
};

static TAB_NUM t_func_run_pipe[] = {
  1, // locals
  3, // parameters
  var_520_0_in_fd,
  var_521_0_feed,
  var_522_0_commands,
  // $pids empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_524_1_pids,
  // $err_fds empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_525_1_err_fds,
  // $out_fd in_fd
  LET, 1, var_520_0_in_fd, 1, var_526_1_out_fd,
  // $env_vars undefined
  LET, 1, var_undefined, 1, var_527_1_env_vars,
  // is_defined &env_vars:
  var_is_defined, 1, var_environment, 1, LOCAL(1),
  // update_if environment.is_defined &env_vars:
  var_update_if, 3, LOCAL(1), var_527_1_env_vars, lambda_40, 1, var_527_1_env_vars,
  // for_each commands
  var_for_each, 3, var_522_0_commands, lambda_43, lambda_47, IO_TAIL_CALL,
  POS(524, 3),
  POS(525, 3),
  POS(526, 3),
  POS(527, 3),
  POS(528, 25),
  POS(528, 3),
  POS(535, 3)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  // !env_vars empty_list
  LET, 1, var_empty_list, 1, var_527_1_env_vars,
  // for_each environment
  var_for_each, 3, var_environment, lambda_41, lambda_42, TAIL_CALL,
  POS(529, 5),
  POS(530, 5)
};

static TAB_NUM t_lambda_41[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 531_3_key
  LOCAL(3), // 531_7_value
  // "@(key)=@(value)"
  var_std__string, 3, LOCAL(2), string_3, LOCAL(3), 1, LOCAL(1),
  // push &env_vars "@(key)=@(value)"
  var_push, 2, var_527_1_env_vars, LOCAL(1), 1, var_527_1_env_vars,
  // next
  var_next, 0, TAIL_CALL,
  POS(532, 24),
  POS(532, 9),
  POS(533, 9)
};

static TAB_NUM t_lambda_42[] = {
  0, // locals
  0, // parameters
  //  env_vars
  LET, 1, var_527_1_env_vars, TAIL_CALL,
  POS(534, 9)
};

static TAB_NUM t_lambda_43[] = {
  3, // locals
  2, // parameters
  var_536_3_idx,
  LOCAL(3), // 536_7_command
  // command $head $arguments
  LOCAL(3), 0, 2, var_537_9_head, var_537_15_arguments,
  // $pid undefined
  LET, 1, var_undefined, 1, var_538_1_pid,
  // $err_fd undefined
  LET, 1, var_undefined, 1, var_539_1_err_fd,
  // idx == 1 && in_fd.is_undefined:
  var_std__equal, 2, var_536_3_idx, num_1, 1, LOCAL(1),
  // idx == 1 && in_fd.is_undefined:
  var_std__and, 2, LOCAL(1), lambda_44, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_45, lambda_46, IO_TAIL_CALL,
  POS(537, 7),
  POS(538, 7),
  POS(539, 7),
  POS(541, 9),
  POS(541, 9),
  POS(540, 7)
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  0, // parameters
  // is_undefined:
  var_is_undefined, 1, var_520_0_in_fd, 1, LOCAL(1),
  // in_fd.is_undefined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(541, 27),
  POS(541, 21)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  // create_process! !pid !in_fd !out_fd !err_fd head arguments env_vars
  var_create_process, 3, var_537_9_head, var_537_15_arguments, var_527_1_env_vars, IO_CALL(4), var_538_1_pid, var_520_0_in_fd, var_526_1_out_fd, var_539_1_err_fd,
  // store_pid_and_err_fd!
  func_store_pid_and_err_fd, 0, IO_TAIL_CALL,
  POS(542, 11),
  POS(543, 11)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  // create_process! !pid !out_fd !err_fd head arguments env_vars out_fd
  var_create_process, 4, var_537_9_head, var_537_15_arguments, var_527_1_env_vars, var_526_1_out_fd, IO_CALL(3), var_538_1_pid, var_526_1_out_fd, var_539_1_err_fd,
  // store_pid_and_err_fd!
  func_store_pid_and_err_fd, 0, IO_TAIL_CALL,
  POS(545, 11),
  POS(546, 11)
};

static TAB_NUM t_func_store_pid_and_err_fd[] = {
  0, // locals
  0, // parameters
  // pids(pid) idx
  var_524_1_pids, 2, var_538_1_pid, var_536_3_idx, 1, var_524_1_pids,
  // err_fds(err_fd) idx
  var_525_1_err_fds, 2, var_539_1_err_fd, var_536_3_idx, 1, var_525_1_err_fds,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(549, 10),
  POS(550, 10),
  POS(551, 9)
};

static TAB_NUM t_lambda_47[] = {
  2, // locals
  0, // parameters
  // list(undefined) length_of(commands))
  var_list, 1, var_undefined, 1, LOCAL(1),
  // length_of(commands))
  var_length_of, 1, var_522_0_commands, 1, LOCAL(2),
  // $ret dup(list(undefined) length_of(commands))
  var_dup, 2, LOCAL(1), LOCAL(2), 1, var_553_1_ret,
  // $out ""
  LET, 1, string_1, 1, var_554_1_out,
  // length_of(commands))
  var_length_of, 1, var_522_0_commands, 1, LOCAL(2),
  // $err dup(list("") length_of(commands))
  var_dup, 2, list_555_9, LOCAL(2), 1, var_555_1_err,
  // is_defined
  var_is_defined, 1, var_521_0_feed, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_manage_io, lambda_48, IO_TAIL_CALL,
  POS(553, 16),
  POS(553, 32),
  POS(553, 7),
  POS(554, 7),
  POS(555, 25),
  POS(555, 7),
  POS(557, 14),
  POS(556, 7)
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  // close! in_fd
  var_close, 1, var_520_0_in_fd, IO_CALL(0),
  // !in_fd undefined
  LET, 1, var_undefined, 1, var_520_0_in_fd,
  // manage_io!
  func_manage_io, 0, IO_TAIL_CALL,
  POS(560, 11),
  POS(561, 11),
  POS(562, 11)
};

static TAB_NUM t_func_manage_io[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_5_loop, IO_TAIL_CALL,
  POS(565, 9)
};

static TAB_NUM t_lambda_5_loop[] = {
  3, // locals
  0, // parameters
  // $read_descriptor_list keys_of(err_fds)
  var_keys_of, 1, var_525_1_err_fds, 1, var_566_1_read_descriptor_list,
  // is_defined
  var_is_defined, 1, var_520_0_in_fd, 1, LOCAL(1),
  // $write_descriptor_list
  var_if, 3, LOCAL(1), lambda_49, lambda_50, 1, LOCAL(2),
  // is_defined &read_descriptor_list:
  var_is_defined, 1, var_526_1_out_fd, 1, LOCAL(1),
  // update_if out_fd.is_defined &read_descriptor_list:
  var_update_if, 3, LOCAL(1), var_566_1_read_descriptor_list, lambda_51, 1, var_566_1_read_descriptor_list,
  // pselect!
  var_pselect, 3, var_566_1_read_descriptor_list, LOCAL(2), var_empty_list, IO_CALL(4), LOCAL(3), var_576_1_read_descriptors, var_577_1_write_descriptors, LOCAL(1),
  // for_each signals
  var_for_each, 3, LOCAL(3), lambda_52, lambda_54, IO_TAIL_CALL,
  POS(566, 11),
  POS(569, 21),
  POS(567, 11),
  POS(572, 28),
  POS(572, 11),
  POS(574, 11),
  POS(579, 11)
};

static TAB_NUM t_lambda_49[] = {
  1, // locals
  0, // parameters
  // list(in_fd)
  var_list, 1, var_520_0_in_fd, 1, LOCAL(1),
  //  list(in_fd)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(570, 18),
  POS(570, 17)
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(571, 17)
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  // push read_descriptor_list out_fd
  var_push, 2, var_566_1_read_descriptor_list, var_526_1_out_fd, TAIL_CALL,
  POS(573, 13)
};

static TAB_NUM t_lambda_52[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 580_3_signal
  // signal == CHILD_CHANGED_STATE:
  var_std__equal, 2, LOCAL(2), var_CHILD_CHANGED_STATE, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_53, var_next, IO_TAIL_CALL,
  POS(582, 17),
  POS(581, 15)
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_6_loop, IO_TAIL_CALL,
  POS(583, 19)
};

static TAB_NUM t_lambda_6_loop[] = {
  1, // locals
  0, // parameters
  // wait2! $rpid $status
  var_wait2, 0, IO_CALL(2), var_584_8_rpid, var_584_14_status,
  // is_defined:
  var_is_defined, 1, var_584_8_rpid, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_rpid_is_defined, var_break, IO_TAIL_CALL,
  POS(584, 21),
  POS(586, 28),
  POS(585, 21)
};

static TAB_NUM t_lambda_rpid_is_defined[] = {
  2, // locals
  0, // parameters
  // pids(rpid)) status
  var_524_1_pids, 1, var_584_8_rpid, 1, LOCAL(2),
  // ret(pids(rpid)) status
  var_553_1_ret, 2, LOCAL(2), var_584_14_status, 1, var_553_1_ret,
  // pids(rpid) undefined
  var_524_1_pids, 2, var_584_8_rpid, var_undefined, 1, var_524_1_pids,
  // is_empty
  var_is_empty, 1, var_524_1_pids, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), var_break, var_next, IO_TAIL_CALL,
  POS(587, 30),
  POS(587, 26),
  POS(588, 26),
  POS(590, 32),
  POS(589, 25)
};

static TAB_NUM t_lambda_54[] = {
  0, // locals
  0, // parameters
  // for_each write_descriptors
  var_for_each, 3, var_577_1_write_descriptors, lambda_55, lambda_56, IO_TAIL_CALL,
  POS(596, 15)
};

static TAB_NUM t_lambda_55[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 597_3_write_descriptor
  // write! $bytes_written write_descriptor feed
  var_write, 2, LOCAL(2), var_521_0_feed, IO_CALL(1), LOCAL(3),
  // bytes_written+1 -1
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // range &feed bytes_written+1 -1
  var_range, 3, var_521_0_feed, LOCAL(1), minus_num_1, 1, var_521_0_feed,
  // is_empty:
  var_is_empty, 1, var_521_0_feed, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_feed_is_empty, var_next, IO_TAIL_CALL,
  POS(598, 19),
  POS(599, 31),
  POS(599, 19),
  POS(601, 26),
  POS(600, 19)
};

static TAB_NUM t_lambda_feed_is_empty[] = {
  0, // locals
  0, // parameters
  // close! in_fd
  var_close, 1, var_520_0_in_fd, IO_CALL(0),
  // !in_fd undefined
  LET, 1, var_undefined, 1, var_520_0_in_fd,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(602, 23),
  POS(603, 23),
  POS(604, 23)
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  // for_each read_descriptors
  var_for_each, 3, var_576_1_read_descriptors, lambda_57, lambda_63, IO_TAIL_CALL,
  POS(607, 19)
};

static TAB_NUM t_lambda_57[] = {
  1, // locals
  1, // parameters
  var_608_3_read_descriptor,
  // read! $buf read_descriptor 0x100000
  var_read, 2, var_608_3_read_descriptor, num_1048576, IO_CALL(1), var_609_7_buf,
  // is_empty: # closed from the other side
  var_is_empty, 1, var_609_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_empty, lambda_60, IO_TAIL_CALL,
  POS(609, 23),
  POS(611, 29),
  POS(610, 23)
};

static TAB_NUM t_lambda_buf_is_empty[] = {
  1, // locals
  0, // parameters
  // close! read_descriptor
  var_close, 1, var_608_3_read_descriptor, IO_CALL(0),
  // read_descriptor == out_fd:
  var_std__equal, 2, var_608_3_read_descriptor, var_526_1_out_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_58, lambda_59, IO_TAIL_CALL,
  POS(612, 27),
  POS(614, 29),
  POS(613, 27)
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  0, // parameters
  // !out_fd undefined
  LET, 1, var_undefined, 1, var_526_1_out_fd,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(615, 31),
  POS(616, 31)
};

static TAB_NUM t_lambda_59[] = {
  0, // locals
  0, // parameters
  // err_fds(read_descriptor) undefined
  var_525_1_err_fds, 2, var_608_3_read_descriptor, var_undefined, 1, var_525_1_err_fds,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(618, 32),
  POS(619, 31)
};

static TAB_NUM t_lambda_60[] = {
  1, // locals
  0, // parameters
  // read_descriptor == out_fd:
  var_std__equal, 2, var_608_3_read_descriptor, var_526_1_out_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_61, lambda_62, IO_TAIL_CALL,
  POS(622, 29),
  POS(621, 27)
};

static TAB_NUM t_lambda_61[] = {
  0, // locals
  0, // parameters
  // append &out buf
  var_append, 2, var_554_1_out, var_609_7_buf, 1, var_554_1_out,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(623, 31),
  POS(624, 31)
};

static TAB_NUM t_lambda_62[] = {
  2, // locals
  0, // parameters
  // err_fds(read_descriptor)) buf
  var_525_1_err_fds, 1, var_608_3_read_descriptor, 1, LOCAL(1),
  // err(err_fds(read_descriptor)) buf
  var_555_1_err, 1, LOCAL(1), 1, LOCAL(2),
  // append &err(err_fds(read_descriptor)) buf
  var_append, 2, LOCAL(2), var_609_7_buf, 1, LOCAL(2),
  // err(err_fds(read_descriptor)) buf
  var_555_1_err, 2, LOCAL(1), LOCAL(2), 1, var_555_1_err,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(626, 43),
  POS(626, 39),
  POS(626, 31),
  POS(626, 39),
  POS(627, 31)
};

static TAB_NUM t_lambda_63[] = {
  2, // locals
  0, // parameters
  // is_empty && out_fd.is_undefined && err_fds.is_empty
  var_is_empty, 1, var_524_1_pids, 1, LOCAL(1),
  // is_empty && out_fd.is_undefined && err_fds.is_empty
  var_std__and, 2, LOCAL(1), lambda_64, 1, LOCAL(2),
  // if!
  var_if, 3, LOCAL(2), lambda_66, var_next, IO_TAIL_CALL,
  POS(630, 30),
  POS(630, 30),
  POS(629, 23)
};

static TAB_NUM t_lambda_64[] = {
  2, // locals
  0, // parameters
  // is_undefined && err_fds.is_empty
  var_is_undefined, 1, var_526_1_out_fd, 1, LOCAL(1),
  // is_undefined && err_fds.is_empty
  var_std__and, 2, LOCAL(1), lambda_65, 1, LOCAL(2),
  // out_fd.is_undefined && err_fds.is_empty
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(630, 49),
  POS(630, 49),
  POS(630, 42)
};

static TAB_NUM t_lambda_65[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_525_1_err_fds, 1, LOCAL(1),
  // err_fds.is_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(630, 73),
  POS(630, 65)
};

static TAB_NUM t_lambda_66[] = {
  0, // locals
  0, // parameters
  //  ret out err
  LET, 3, var_553_1_ret, var_554_1_out, var_555_1_err, TAIL_CALL,
  POS(631, 27)
};

static TAB_NUM t_func_std__extern[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 638_0_command
  // .command_of command)
  LET, -1, func_extern_call, var_command_of, LOCAL(2), LOCAL(1),
  // -> extern_call(.command_of command)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(640, 18),
  POS(640, 3)
};

static int list_555_9_arguments[] = {
  -string_1
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__sleep}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_POSITIVE_INT64, 0, {.value = 1000000}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__print_string_to}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__write_all_to}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__print_to}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__print_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__print}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__println}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__eprint_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__eprint}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__eprintln}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__read_all_from}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_loop}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x1000}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___load}},
  {FLT_STRING_8, 1, {.str_8 = "r"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__file_descriptor___load}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___save}},
  {FLT_STRING_8, 2, {.str_8 = "w+"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__try}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__check}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__file_exists}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__directory}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_entry_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__stat___access_time_of}},
  {FLT_POSITIVE_INT64, 0, {.value = 1000000000}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__stat___modification_time_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__stat___status_change_time_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__stat___is_a_directory}},
  {FLT_CHARACTER, 0, {.value = 100}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__call}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_STRING_8, 1, {.str_8 = "="}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_READ}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_out_fd}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_collect_output}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_err_fd}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_collect_error_output}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_PROCESS_JOINED}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_do_collect_output}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__terminate}},
  {FLT_STRING_8, 15, {.str_8 = "file_descriptor"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__file_descriptor___serialize}},
  {FLT_STRING_8, 16, {.str_8 = "file_descriptor "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__file_descriptor___deserializer_of}},
  {FLT_STRING_8, 10, {.str_8 = "process_id"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__process_id___serialize}},
  {FLT_STRING_8, 11, {.str_8 = "process_id "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__process_id___deserializer_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_extern_call}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__pipe}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_first_arg_is_a_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_first_arg_is_a_file_descriptor}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_build_commands}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_arg_is_a_function}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_run_pipe}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_store_pid_and_err_fd}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_LIST, 1, {.arguments = list_555_9_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_manage_io}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_rpid_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_feed_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x100000}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_buf_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
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
    FOT_INITIALIZED, 0, 0,
    "sleep\000std", NULL,
    {.const_idx = -func_std__sleep}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "38_0_duration\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(40, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(41, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(41, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "usleep\000", NULL,
    {.position = POS(41, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(42, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(40, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(30, 1)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "print_string_to\000std", NULL,
    {.const_idx = -func_std__print_string_to}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "52_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "53_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "55_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(55, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "58_8_bytes_written\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write\000", NULL,
    {.position = POS(58, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(60, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(65, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(65, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(66, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(67, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(63, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(56, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "write_all_to\000std", NULL,
    {.const_idx = -func_std__write_all_to}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(86, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print_string_to\000", NULL,
    {.position = POS(86, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "print_to\000std", NULL,
    {.const_idx = -func_std__print_to}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(102, 43)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "print_string\000std", NULL,
    {.const_idx = -func_std__print_string}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDOUT_FILENO\000", NULL,
    {.position = POS(114, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "print\000std", NULL,
    {.const_idx = -func_std__print}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print_string\000", NULL,
    {.position = POS(126, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "println\000std", NULL,
    {.const_idx = -func_std__println}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(140, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "eprint_string\000std", NULL,
    {.const_idx = -func_std__eprint_string}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDERR_FILENO\000", NULL,
    {.position = POS(152, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "eprint\000std", NULL,
    {.const_idx = -func_std__eprint}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprint_string\000", NULL,
    {.position = POS(164, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "eprintln\000std", NULL,
    {.const_idx = -func_std__eprintln}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "readln\000std", NULL,
    {.const_idx = -lambda_5}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "192_1_line_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDIN_FILENO\000", NULL,
    {.position = POS(194, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "194_22_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read\000", NULL,
    {.position = POS(194, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(196, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(200, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(204, 15)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "read_all_from\000std", NULL,
    {.const_idx = -func_std__read_all_from}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "213_0_fh\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "215_1_already_read_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "217_7_next_data\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(223, 21)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "load\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "string\000std_types", std_types__string__attributes,
    {.position = POS(231, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "load\000", NULL,
    {.position = POS(231, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open\000", NULL,
    {.position = POS(239, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "check\000", NULL,
    {.position = POS(240, 3)}
  },
  {
    FOT_UNKNOWN, 0, 5,
    "file_descriptor\000std_types", std_types__file_descriptor__attributes,
    {.position = POS(243, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read_all_from\000", NULL,
    {.position = POS(251, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "close\000", NULL,
    {.position = POS(253, 3)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "save\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "save\000", NULL,
    {.position = POS(258, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print_to\000", NULL,
    {.position = POS(269, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "try\000std", NULL,
    {.const_idx = -func_std__try}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(284, 6)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "check\000std", NULL,
    {.const_idx = -func_std__check}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "293_0_argument\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "file_exists\000std", NULL,
    {.const_idx = -func_std__file_exists}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "stat\000", NULL,
    {.position = POS(301, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(302, 6)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "directory\000std", NULL,
    {.const_idx = -func_std__directory}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "305_1_entries\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(305, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "306_10_dir\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "opendir\000", NULL,
    {.position = POS(306, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "308_10_entry\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "readdir\000", NULL,
    {.position = POS(308, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "closedir\000", NULL,
    {.position = POS(311, 9)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "access_time_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 4,
    "stat\000std_types", std_types__stat__attributes,
    {.position = POS(319, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "access_time_of\000", NULL,
    {.position = POS(319, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "access_time_seconds_of\000", NULL,
    {.position = POS(322, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "access_time_nanoseconds_of\000", NULL,
    {.position = POS(323, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "over\000std", NULL,
    {.position = POS(323, 7)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "modification_time_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "modification_time_of\000", NULL,
    {.position = POS(327, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "modification_time_seconds_of\000", NULL,
    {.position = POS(330, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "modification_time_nanoseconds_of\000", NULL,
    {.position = POS(331, 7)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "status_change_time_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "status_change_time_of\000", NULL,
    {.position = POS(335, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "status_change_time_seconds_of\000", NULL,
    {.position = POS(338, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "status_change_time_nanoseconds_of\000", NULL,
    {.position = POS(339, 7)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_directory\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_directory\000", NULL,
    {.position = POS(343, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mode_of\000", NULL,
    {.position = POS(344, 6)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "call\000std", NULL,
    {.const_idx = -func_std__call}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(347, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "347_1_do_collect_output\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(347, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "348_1_do_collect_error_output\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "349_1_env_vars\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "environment\000", NULL,
    {.position = POS(350, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(350, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(354, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(352, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(350, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "357_29_out_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "357_37_err_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_process\000", NULL,
    {.position = POS(357, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "359_1_io\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "io\000std_types", NULL,
    {.position = POS(359, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "join_process\000", NULL,
    {.position = POS(360, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "start_reading_from\000", NULL,
    {.position = POS(361, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "364_1_out\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "365_1_err\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_events\000", NULL,
    {.position = POS(367, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "369_13_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "369_17_data\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ\000", NULL,
    {.position = POS(371, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "stop_reading_from\000", NULL,
    {.position = POS(375, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(378, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PROCESS_JOINED\000", NULL,
    {.position = POS(397, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "398_1_ret\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "terminate\000std", NULL,
    {.const_idx = -func_std__terminate}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXIT_SUCCESS\000", NULL,
    {.position = POS(410, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exit\000", NULL,
    {.position = POS(410, 3)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_file_descriptor\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(414, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_file_descriptor\000", NULL,
    {.position = POS(414, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(414, 41)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(415, 50)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(417, 29)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(419, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "422_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "424_1_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(428, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deserializer_of\000", NULL,
    {.position = POS(431, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "integer\000", NULL,
    {.position = POS(436, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "file_descriptor\000", NULL,
    {.position = POS(436, 6)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_process_id\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_process_id\000", NULL,
    {.position = POS(440, 20)}
  },
  {
    FOT_UNKNOWN, 0, 4,
    "process_id\000std_types", std_types__process_id__attributes,
    {.position = POS(441, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "448_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "450_1_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "process_id\000", NULL,
    {.position = POS(462, 6)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "command_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "flatten\000", NULL,
    {.position = POS(471, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_string\000", NULL,
    {.position = POS(471, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(471, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "call\000", NULL,
    {.position = POS(471, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pipe\000std", NULL,
    {.const_idx = -func_std__pipe}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "473_13_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "474_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "475_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "476_1_in_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "477_1_feed\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "478_1_commands\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "479_1_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "480_1_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "481_1_first_arg\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(483, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "500_1_arg\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_function\000", NULL,
    {.position = POS(502, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(504, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(507, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "520_0_in_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "521_0_feed\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "522_0_commands\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "524_1_pids\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(524, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "525_1_err_fds\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "526_1_out_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "527_1_env_vars\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "536_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "537_9_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "537_15_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "538_1_pid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "539_1_err_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(541, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(553, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "553_1_ret\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dup\000", NULL,
    {.position = POS(553, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "554_1_out\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "555_1_err\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "566_1_read_descriptor_list\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "keys_of\000", NULL,
    {.position = POS(566, 33)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "576_1_read_descriptors\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "577_1_write_descriptors\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pselect\000", NULL,
    {.position = POS(574, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CHILD_CHANGED_STATE\000", NULL,
    {.position = POS(582, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "584_8_rpid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "584_14_status\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "wait2\000", NULL,
    {.position = POS(584, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "608_3_read_descriptor\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "609_7_buf\000", NULL
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
  142, // number of constants
  196, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
