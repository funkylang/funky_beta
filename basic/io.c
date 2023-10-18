#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std__print_string_to = -1,
  lambda_1 = -2,
  lambda_2 = -3,
  lambda_3 = -4,
  num_1 = -5,
  minus_num_1 = -6,
  func_std__print_to = -7,
  func_std__print_string = -8,
  func_std__print = -9,
  func_std__println = -10,
  chr_10 = -11,
  func_std__eprint_string = -12,
  func_std__eprint = -13,
  func_std__eprintln = -14,
  lambda_4 = -15,
  string_1 = -16,
  lambda_loop = -17,
  lambda_5 = -18,
  lambda_6 = -19,
  string_2 = -20,
  lambda_7 = -21,
  lambda_8 = -22,
  func_std__read_all_from = -23,
  lambda_2_loop = -24,
  num_4096 = -25,
  lambda_9 = -26,
  lambda_10 = -27,
  lambda_11 = -28,
  lambda_12 = -29,
  func_std_types__string___load = -30,
  str_r = -31,
  func_std_types__string___save = -32,
  str_w = -33,
  func_std__try = -34,
  func_std__check = -35,
  lambda_13 = -36,
  func_std__file_exists = -37,
  func_std__directory = -38,
  lambda_3_loop = -39,
  lambda_entry_is_an_error = -40,
  lambda_14 = -41,
  func_std_types__stat___access_time_of = -42,
  num_1000000000 = -43,
  func_std_types__stat___modification_time_of = -44,
  func_std_types__stat___status_change_time_of = -45,
  func_std_types__stat___is_a_directory = -46,
  chr_100 = -47,
  func_std__call = -48,
  num_2 = -49,
  num_3 = -50,
  lambda_15 = -51,
  lambda_16 = -52,
  string_3 = -53,
  lambda_17 = -54,
  lambda_4_loop = -55,
  lambda_18 = -56,
  lambda_READ = -57,
  lambda_19 = -58,
  lambda_20 = -59,
  lambda_out_fd = -60,
  lambda_do_collect_output = -61,
  lambda_21 = -62,
  lambda_err_fd = -63,
  lambda_do_collect_error_output = -64,
  lambda_22 = -65,
  lambda_23 = -66,
  lambda_PROCESS_JOINED = -67,
  lambda_2_do_collect_output = -68,
  lambda_24 = -69,
  lambda_25 = -70,
  lambda_26 = -71,
  lambda_27 = -72,
  func_std__terminate = -73,
  str_file_descriptor = -74,
  func_std_types__file_descriptor___serialize = -75,
  str_file_descriptor_2 = -76,
  lambda_28 = -77,
  lambda_29 = -78,
  func_std_types__file_descriptor___deserializer_of = -79,
  str_process_id = -80,
  func_std_types__process_id___serialize = -81,
  str_process_id_2 = -82,
  lambda_30 = -83,
  lambda_31 = -84,
  func_std_types__process_id___deserializer_of = -85,
  func_extern_call = -86,
  func_std__pipe = -87,
  lambda_first_arg_is_a_string = -88,
  lambda_32 = -89,
  lambda_first_arg_is_a_file_descriptor = -90,
  func_build_commands = -91,
  lambda_33 = -92,
  lambda_34 = -93,
  lambda_arg_is_a_function = -94,
  lambda_35 = -95,
  lambda_36 = -96,
  lambda_37 = -97,
  lambda_38 = -98,
  func_run_pipe = -99,
  lambda_39 = -100,
  lambda_40 = -101,
  lambda_41 = -102,
  lambda_42 = -103,
  lambda_43 = -104,
  lambda_44 = -105,
  lambda_45 = -106,
  func_store_pid_and_err_fd = -107,
  lambda_46 = -108,
  list_503_9 = -109,
  lambda_47 = -110,
  func_manage_io = -111,
  lambda_5_loop = -112,
  lambda_48 = -113,
  lambda_49 = -114,
  lambda_50 = -115,
  lambda_51 = -116,
  lambda_52 = -117,
  lambda_6_loop = -118,
  lambda_rpid_is_defined = -119,
  lambda_53 = -120,
  lambda_54 = -121,
  lambda_feed_is_empty = -122,
  lambda_55 = -123,
  lambda_56 = -124,
  num_1048576 = -125,
  lambda_buf_is_empty = -126,
  lambda_57 = -127,
  lambda_58 = -128,
  lambda_59 = -129,
  lambda_60 = -130,
  lambda_61 = -131,
  lambda_62 = -132,
  lambda_63 = -133,
  lambda_64 = -134,
  lambda_65 = -135,
  func_std__extern = -136
};

enum {
  var__START = FIRST_VAR-1,
  var_std__print_string_to, // initialized
  var_31_0_fd, // dynamic
  var_32_0_str, // dynamic
  var_34_1_len, // dynamic
  var_length_of, // extern
  var_37_8_bytes_written, // dynamic
  var_write, // extern
  var_is_an_error, // extern
  var_std__less, // extern
  var_std__plus, // extern
  var_range, // extern
  var_next, // extern
  var_break, // extern
  var_if, // extern
  var_pass, // extern
  var_loop, // extern
  var_std__assign, // extern
  var_std__print_to, // initialized
  var_create_string, // extern
  var_print_string_to, // extern
  var_std__print_string, // initialized
  var_to_utf8, // extern
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
  var_150_1_line_buf, // dynamic
  var_STDIN_FILENO, // extern
  var_152_22_buf, // dynamic
  var_read, // extern
  var_is_undefined, // extern
  var_std__equal, // extern
  var_append, // extern
  var_std__read_all_from, // initialized
  var_171_0_fh, // dynamic
  var_173_1_already_read_data, // dynamic
  var_175_7_next_data, // dynamic
  var_is_empty, // extern
  var_std__load, // attribute
  var_std_types__string, // extern
  var_load, // extern polymorphic
  var_open, // extern
  var_check, // extern
  var_read_all_from, // extern
  var_close, // extern
  var_std__save, // attribute
  var_save, // extern polymorphic
  var_print_to, // extern
  var_std__try, // initialized
  var_undefined, // extern
  var_std__check, // initialized
  var_241_0_argument, // dynamic
  var_std__file_exists, // initialized
  var_stat, // extern
  var_not, // extern
  var_std__directory, // initialized
  var_253_1_entries, // dynamic
  var_empty_list, // extern
  var_254_10_dir, // dynamic
  var_opendir, // extern
  var_256_10_entry, // dynamic
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
  var_295_1_do_collect_output, // dynamic
  var_std__not, // extern
  var_296_1_do_collect_error_output, // dynamic
  var_297_1_env_vars, // dynamic
  var_environment, // extern
  var_is_defined, // extern
  var_std__string, // extern
  var_for_each, // extern
  var_update_if, // extern
  var_305_29_out_fd, // dynamic
  var_305_37_err_fd, // dynamic
  var_create_process, // extern
  var_307_1_io, // dynamic
  var_std_types__io, // extern
  var_join_process, // extern
  var_start_reading_from, // extern
  var_312_1_out, // dynamic
  var_313_1_err, // dynamic
  var_get_events, // extern
  var_317_13_fd, // dynamic
  var_317_17_data, // dynamic
  var_READ, // extern
  var_stop_reading_from, // extern
  var_case, // extern
  var_PROCESS_JOINED, // extern
  var_346_1_ret, // dynamic
  var_std__terminate, // initialized
  var_EXIT_SUCCESS, // extern
  var_exit, // extern
  var_std__is_a_file_descriptor, // attribute
  var_std_types__object, // extern
  var_is_a_file_descriptor, // extern polymorphic
  var_false, // extern
  var_std_types__file_descriptor, // extern
  var_true, // extern
  var_serialization_tag_of, // extern polymorphic
  var_serialize, // extern polymorphic
  var_370_0_indent, // dynamic
  var_to_integer, // extern
  var_372_1_str, // dynamic
  var_tabs_and_spaces, // extern
  var_deserializer_of, // extern polymorphic
  var_integer, // extern
  var_file_descriptor, // extern
  var_std__is_a_process_id, // attribute
  var_is_a_process_id, // extern polymorphic
  var_std_types__process_id, // extern
  var_396_0_indent, // dynamic
  var_398_1_str, // dynamic
  var_process_id, // extern
  var_command_of, // attribute
  var_flatten, // extern
  var_to_string, // extern
  var_map, // extern
  var_call, // extern
  var_std__pipe, // initialized
  var_421_13_args, // dynamic
  var_422_1_i, // dynamic
  var_423_1_n, // dynamic
  var_424_1_in_fd, // dynamic
  var_425_1_feed, // dynamic
  var_426_1_commands, // dynamic
  var_427_1_head, // dynamic
  var_428_1_arguments, // dynamic
  var_429_1_first_arg, // dynamic
  var_is_a_string, // extern
  var_448_1_arg, // dynamic
  var_is_a_function, // extern
  var_tuple, // extern
  var_inc, // extern
  var_468_0_in_fd, // dynamic
  var_469_0_feed, // dynamic
  var_470_0_commands, // dynamic
  var_472_1_pids, // dynamic
  var_empty_hash_table, // extern
  var_473_1_err_fds, // dynamic
  var_474_1_out_fd, // dynamic
  var_475_1_env_vars, // dynamic
  var_484_3_idx, // dynamic
  var_485_9_head, // dynamic
  var_485_15_arguments, // dynamic
  var_486_1_pid, // dynamic
  var_487_1_err_fd, // dynamic
  var_std__and, // extern
  var_list, // extern
  var_501_1_ret, // dynamic
  var_dup, // extern
  var_502_1_out, // dynamic
  var_503_1_err, // dynamic
  var_514_1_read_descriptor_list, // dynamic
  var_keys_of, // extern
  var_524_1_read_descriptors, // dynamic
  var_525_1_write_descriptors, // dynamic
  var_pselect, // extern
  var_CHILD_CHANGED_STATE, // extern
  var_532_8_rpid, // dynamic
  var_532_14_status, // dynamic
  var_wait2, // extern
  var_556_3_read_descriptor, // dynamic
  var_557_7_buf, // dynamic
  var_std__extern, // initialized
  var__END
};


static TAB_NUM t_func_std__print_string_to[] = {
  0, // locals
  2, // parameters
  var_31_0_fd,
  var_32_0_str,
  // $len length_of(str)
  var_length_of, 1, var_32_0_str, 1, var_34_1_len,
  // loop
  var_loop, 2, lambda_1, var_pass, IO_TAIL_CALL,
  POS(34, 3),
  POS(35, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // write! $bytes_written fd str
  var_write, 2, var_31_0_fd, var_32_0_str, IO_CALL(1), var_37_8_bytes_written,
  // is_an_error
  var_is_an_error, 1, var_37_8_bytes_written, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_37_8_bytes_written, lambda_2, IO_TAIL_CALL,
  POS(37, 7),
  POS(39, 23),
  POS(38, 7)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // bytes_written < len:
  var_std__less, 2, var_37_8_bytes_written, var_34_1_len, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, var_break, IO_TAIL_CALL,
  POS(43, 13),
  POS(42, 11)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // bytes_written+1 -1
  var_std__plus, 2, var_37_8_bytes_written, num_1, 1, LOCAL(1),
  // range &str bytes_written+1 -1
  var_range, 3, var_32_0_str, LOCAL(1), minus_num_1, 1, var_32_0_str,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(44, 26),
  POS(44, 15),
  POS(45, 15)
};

static TAB_NUM t_func_std__print_to[] = {
  3, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 57_0_fd
  REST_PARAMETER, LOCAL(3), // 58_0_args
  // create_string(args)
  var_create_string, 1, LOCAL(3), 1, LOCAL(1),
  // print_string_to! fd create_string(args)
  var_print_string_to, 2, LOCAL(2), LOCAL(1), IO_TAIL_CALL,
  POS(60, 23),
  POS(60, 3)
};

static TAB_NUM t_func_std__print_string[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 70_0_str
  // to_utf8
  var_to_utf8, 1, LOCAL(2), 1, LOCAL(1),
  // print_string_to! STDOUT_FILENO str.to_utf8
  var_print_string_to, 2, var_STDOUT_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(72, 38),
  POS(72, 3)
};

static TAB_NUM t_func_std__print[] = {
  2, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(2), // 82_0_args
  // create_string(args)
  var_create_string, 1, LOCAL(2), 1, LOCAL(1),
  // print_string! create_string(args)
  var_print_string, 1, LOCAL(1), IO_TAIL_CALL,
  POS(84, 17),
  POS(84, 3)
};

static TAB_NUM t_func_std__println[] = {
  3, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(3), // 96_0_args
  // create_string(args) '@nl;')
  var_create_string, 1, LOCAL(3), 1, LOCAL(1),
  // push(create_string(args) '@nl;')
  var_push, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // print_string! push(create_string(args) '@nl;')
  var_print_string, 1, LOCAL(2), IO_TAIL_CALL,
  POS(98, 22),
  POS(98, 17),
  POS(98, 3)
};

static TAB_NUM t_func_std__eprint_string[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 108_0_str
  // to_utf8
  var_to_utf8, 1, LOCAL(2), 1, LOCAL(1),
  // print_string_to! STDERR_FILENO str.to_utf8
  var_print_string_to, 2, var_STDERR_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(110, 38),
  POS(110, 3)
};

static TAB_NUM t_func_std__eprint[] = {
  2, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(2), // 120_0_args
  // create_string(args)
  var_create_string, 1, LOCAL(2), 1, LOCAL(1),
  // eprint_string! create_string(args)
  var_eprint_string, 1, LOCAL(1), IO_TAIL_CALL,
  POS(122, 18),
  POS(122, 3)
};

static TAB_NUM t_func_std__eprintln[] = {
  3, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(3), // 134_0_args
  // create_string(args) '@nl;')
  var_create_string, 1, LOCAL(3), 1, LOCAL(1),
  // push(create_string(args) '@nl;')
  var_push, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // eprint_string! push(create_string(args) '@nl;')
  var_eprint_string, 1, LOCAL(2), IO_TAIL_CALL,
  POS(136, 23),
  POS(136, 18),
  POS(136, 3)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  // $line_buf ""
  LET, 1, string_1, 1, var_150_1_line_buf,
  // loop:
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(150, 5),
  POS(151, 5)
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // read! STDIN_FILENO 1 $buf
  var_read, 2, var_STDIN_FILENO, num_1, IO_CALL(1), var_152_22_buf,
  // is_undefined
  var_is_undefined, 1, var_152_22_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_5, lambda_6, IO_TAIL_CALL,
  POS(152, 7),
  POS(154, 13),
  POS(153, 7)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  buf # return the error object
  LET, 1, var_152_22_buf, TAIL_CALL,
  POS(155, 11)
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // buf == "@nl;"
  var_std__equal, 2, var_152_22_buf, string_2, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_7, lambda_8, IO_TAIL_CALL,
  POS(158, 13),
  POS(157, 11)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  // -> line_buf
  LET, 1, var_150_1_line_buf, TAIL_CALL,
  POS(160, 15)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  // append &line_buf buf
  var_append, 2, var_150_1_line_buf, var_152_22_buf, 1, var_150_1_line_buf,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(162, 15),
  POS(163, 15)
};

static TAB_NUM t_func_std__read_all_from[] = {
  0, // locals
  1, // parameters
  var_171_0_fh,
  // $already_read_data ""
  LET, 1, string_1, 1, var_173_1_already_read_data,
  // loop:
  var_loop, 1, lambda_2_loop, IO_TAIL_CALL,
  POS(173, 3),
  POS(174, 3)
};

static TAB_NUM t_lambda_2_loop[] = {
  1, // locals
  0, // parameters
  // read! $next_data fh 0x1000
  var_read, 2, var_171_0_fh, num_4096, IO_CALL(1), var_175_7_next_data,
  // is_an_error
  var_is_an_error, 1, var_175_7_next_data, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_9, lambda_10, IO_TAIL_CALL,
  POS(175, 5),
  POS(177, 17),
  POS(176, 5)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  next_data
  LET, 1, var_175_7_next_data, TAIL_CALL,
  POS(178, 9)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_175_7_next_data, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_11, lambda_12, IO_TAIL_CALL,
  POS(181, 21),
  POS(180, 9)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  already_read_data
  LET, 1, var_173_1_already_read_data, TAIL_CALL,
  POS(182, 13)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  // append &already_read_data next_data
  var_append, 2, var_173_1_already_read_data, var_175_7_next_data, 1, var_173_1_already_read_data,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(184, 13),
  POS(185, 13)
};

static TAB_NUM t_func_std_types__string___load[] = {
  3, // locals
  1, // parameters
  LOCAL(1), // 195_0_filename
  // open! $fh filename "r"
  var_open, 2, LOCAL(1), str_r, IO_CALL(1), LOCAL(2),
  // check fh
  var_check, 1, LOCAL(2), 0,
  // read_all_from! $data fh
  var_read_all_from, 1, LOCAL(2), IO_CALL(1), LOCAL(3),
  // check data
  var_check, 1, LOCAL(3), 0,
  // close! fh
  var_close, 1, LOCAL(2), IO_CALL(0),
  // -> data
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(197, 3),
  POS(198, 3),
  POS(199, 3),
  POS(200, 3),
  POS(201, 3),
  POS(202, 3)
};

static TAB_NUM t_func_std_types__string___save[] = {
  3, // locals
  2, // parameters
  LOCAL(1), // 212_0_filename
  LOCAL(2), // 213_0_data
  // open! $fh filename "w+"
  var_open, 2, LOCAL(1), str_w, IO_CALL(1), LOCAL(3),
  // check fh
  var_check, 1, LOCAL(3), 0,
  // print_to! fh data
  var_print_to, 2, LOCAL(3), LOCAL(2), IO_CALL(0),
  // close! fh
  var_close, 1, LOCAL(3), IO_TAIL_CALL,
  POS(215, 3),
  POS(216, 3),
  POS(217, 3),
  POS(218, 3)
};

static TAB_NUM t_func_std__try[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 229_0_body
  // body!
  LOCAL(1), 0, IO_CALL(0),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(231, 3),
  POS(232, 3)
};

static TAB_NUM t_func_std__check[] = {
  1, // locals
  1, // parameters
  var_241_0_argument,
  // is_an_error
  var_is_an_error, 1, var_241_0_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_13, var_pass, TAIL_CALL,
  POS(244, 14),
  POS(243, 3)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  argument
  LET, 1, var_241_0_argument, TAIL_CALL,
  POS(245, 7)
};

static TAB_NUM t_func_std__file_exists[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 248_20_filename
  // stat! $info filename
  var_stat, 1, LOCAL(3), IO_CALL(1), LOCAL(4),
  // is_an_error)
  var_is_an_error, 1, LOCAL(4), 1, LOCAL(1),
  // not(info.is_an_error)
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // -> not(info.is_an_error)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(249, 3),
  POS(250, 15),
  POS(250, 6),
  POS(250, 3)
};

static TAB_NUM t_func_std__directory[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 252_18_pathname
  // $entries empty_list
  LET, 1, var_empty_list, 1, var_253_1_entries,
  // opendir! $dir pathname
  var_opendir, 1, LOCAL(1), IO_CALL(1), var_254_10_dir,
  // loop:
  var_loop, 1, lambda_3_loop, IO_TAIL_CALL,
  POS(253, 3),
  POS(254, 3),
  POS(255, 3)
};

static TAB_NUM t_lambda_3_loop[] = {
  1, // locals
  0, // parameters
  // readdir! $entry dir
  var_readdir, 1, var_254_10_dir, IO_CALL(1), var_256_10_entry,
  // is_an_error:
  var_is_an_error, 1, var_256_10_entry, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_entry_is_an_error, lambda_14, IO_TAIL_CALL,
  POS(256, 5),
  POS(258, 13),
  POS(257, 5)
};

static TAB_NUM t_lambda_entry_is_an_error[] = {
  0, // locals
  0, // parameters
  // closedir! dir
  var_closedir, 1, var_254_10_dir, IO_CALL(0),
  // -> entries
  LET, 1, var_253_1_entries, TAIL_CALL,
  POS(259, 9),
  POS(260, 9)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  // push &entries entry
  var_push, 2, var_253_1_entries, var_256_10_entry, 1, var_253_1_entries,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(262, 9),
  POS(263, 9)
};

static TAB_NUM t_func_std_types__stat___access_time_of[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 267_34_self
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
  POS(270, 7),
  POS(271, 7),
  POS(271, 7),
  POS(269, 6),
  POS(268, 3)
};

static TAB_NUM t_func_std_types__stat___modification_time_of[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 275_40_self
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
  POS(278, 7),
  POS(279, 7),
  POS(279, 7),
  POS(277, 6),
  POS(276, 3)
};

static TAB_NUM t_func_std_types__stat___status_change_time_of[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 283_41_self
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
  POS(286, 7),
  POS(287, 7),
  POS(287, 7),
  POS(285, 6),
  POS(284, 3)
};

static TAB_NUM t_func_std_types__stat___is_a_directory[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 291_34_self
  // mode_of(self)(1) == 'd'
  var_mode_of, 1, LOCAL(4), 1, LOCAL(1),
  // mode_of(self)(1) == 'd'
  LOCAL(1), 1, num_1, 1, LOCAL(2),
  // mode_of(self)(1) == 'd'
  var_std__equal, 2, LOCAL(2), chr_100, 1, LOCAL(3),
  // -> mode_of(self)(1) == 'd'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(292, 6),
  POS(292, 6),
  POS(292, 6),
  POS(292, 3)
};

static TAB_NUM t_func_std__call[] = {
  6, // locals
  2, // parameters
  LOCAL(3), // 294_13_cmd
  LOCAL(4), // 294_17_args
  // result_count() >= 2)
  var_result_count, 0, 1, LOCAL(1),
  // result_count() >= 2)
  var_std__less, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // $do_collect_output (result_count() >= 2)
  var_std__not, 1, LOCAL(2), 1, var_295_1_do_collect_output,
  // result_count() == 3)
  var_result_count, 0, 1, LOCAL(1),
  // $do_collect_error_output (result_count() == 3)
  var_std__equal, 2, LOCAL(1), num_3, 1, var_296_1_do_collect_error_output,
  // $env_vars undefined
  LET, 1, var_undefined, 1, var_297_1_env_vars,
  // is_defined &env_vars:
  var_is_defined, 1, var_environment, 1, LOCAL(1),
  // update_if environment.is_defined &env_vars:
  var_update_if, 3, LOCAL(1), var_297_1_env_vars, lambda_15, 1, var_297_1_env_vars,
  // create_process! $pid $in_fd $out_fd $err_fd cmd args env_vars
  var_create_process, 3, LOCAL(3), LOCAL(4), var_297_1_env_vars, IO_CALL(4), LOCAL(5), LOCAL(6), var_305_29_out_fd, var_305_37_err_fd,
  // close! in_fd
  var_close, 1, LOCAL(6), IO_CALL(0),
  // $io std_types::io
  LET, 1, var_std_types__io, 1, var_307_1_io,
  // join_process &io pid
  var_join_process, 2, var_307_1_io, LOCAL(5), 1, var_307_1_io,
  // start_reading_from &io out_fd
  var_start_reading_from, 2, var_307_1_io, var_305_29_out_fd, 1, var_307_1_io,
  // start_reading_from &io err_fd
  var_start_reading_from, 2, var_307_1_io, var_305_37_err_fd, 1, var_307_1_io,
  // $out ""
  LET, 1, string_1, 1, var_312_1_out,
  // $err ""
  LET, 1, string_1, 1, var_313_1_err,
  // loop:
  var_loop, 1, lambda_4_loop, IO_TAIL_CALL,
  POS(295, 23),
  POS(295, 23),
  POS(295, 3),
  POS(296, 29),
  POS(296, 3),
  POS(297, 3),
  POS(298, 25),
  POS(298, 3),
  POS(305, 3),
  POS(306, 3),
  POS(307, 3),
  POS(308, 3),
  POS(309, 3),
  POS(310, 3),
  POS(312, 3),
  POS(313, 3),
  POS(314, 3)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  // !env_vars empty_list
  LET, 1, var_empty_list, 1, var_297_1_env_vars,
  // for_each environment
  var_for_each, 3, var_environment, lambda_16, lambda_17, TAIL_CALL,
  POS(299, 5),
  POS(300, 5)
};

static TAB_NUM t_lambda_16[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 301_3_key
  LOCAL(3), // 301_7_value
  // "@(key)=@(value)"
  var_std__string, 3, LOCAL(2), string_3, LOCAL(3), 1, LOCAL(1),
  // push &env_vars "@(key)=@(value)"
  var_push, 2, var_297_1_env_vars, LOCAL(1), 1, var_297_1_env_vars,
  // next
  var_next, 0, TAIL_CALL,
  POS(302, 24),
  POS(302, 9),
  POS(303, 9)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  env_vars
  LET, 1, var_297_1_env_vars, TAIL_CALL,
  POS(304, 9)
};

static TAB_NUM t_lambda_4_loop[] = {
  1, // locals
  0, // parameters
  // get_events! &io $events
  var_get_events, 1, var_307_1_io, IO_CALL(2), var_307_1_io, LOCAL(1),
  // for_each events: (event)
  var_for_each, 2, LOCAL(1), lambda_18, IO_TAIL_CALL,
  POS(315, 5),
  POS(316, 5)
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 316_18_event
  // event $type $fd $data
  LOCAL(1), 0, 3, LOCAL(2), var_317_13_fd, var_317_17_data,
  // case type
  var_case, 6, LOCAL(2), var_READ, lambda_READ, var_PROCESS_JOINED, lambda_PROCESS_JOINED, lambda_27, IO_TAIL_CALL,
  POS(317, 7),
  POS(318, 7)
};

static TAB_NUM t_lambda_READ[] = {
  1, // locals
  0, // parameters
  // data == "":
  var_std__equal, 2, var_317_17_data, string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_19, lambda_20, IO_TAIL_CALL,
  POS(321, 13),
  POS(320, 11)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_317_13_fd, IO_CALL(0),
  // stop_reading_from &io fd
  var_stop_reading_from, 2, var_307_1_io, var_317_13_fd, 1, var_307_1_io,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(322, 15),
  POS(323, 15),
  POS(324, 15)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  // case fd
  var_case, 6, var_317_13_fd, var_305_29_out_fd, lambda_out_fd, var_305_37_err_fd, lambda_err_fd, lambda_23, IO_TAIL_CALL,
  POS(326, 15)
};

static TAB_NUM t_lambda_out_fd[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_295_1_do_collect_output, lambda_do_collect_output, lambda_21, IO_TAIL_CALL,
  POS(328, 19)
};

static TAB_NUM t_lambda_do_collect_output[] = {
  0, // locals
  0, // parameters
  // append &out data
  var_append, 2, var_312_1_out, var_317_17_data, 1, var_312_1_out,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(330, 23),
  POS(331, 23)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  // print_to! STDOUT_FILENO data
  var_print_to, 2, var_STDOUT_FILENO, var_317_17_data, IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(333, 23),
  POS(334, 23)
};

static TAB_NUM t_lambda_err_fd[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_296_1_do_collect_error_output, lambda_do_collect_error_output, lambda_22, IO_TAIL_CALL,
  POS(336, 19)
};

static TAB_NUM t_lambda_do_collect_error_output[] = {
  0, // locals
  0, // parameters
  // append &err data
  var_append, 2, var_313_1_err, var_317_17_data, 1, var_313_1_err,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(338, 23),
  POS(339, 23)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  // print_to! STDERR_FILENO data
  var_print_to, 2, var_STDERR_FILENO, var_317_17_data, IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(341, 23),
  POS(342, 23)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(344, 19)
};

static TAB_NUM t_lambda_PROCESS_JOINED[] = {
  0, // locals
  0, // parameters
  // $ret data
  LET, 1, var_317_17_data, 1, var_346_1_ret,
  // if
  var_if, 3, var_295_1_do_collect_output, lambda_2_do_collect_output, lambda_26, TAIL_CALL,
  POS(346, 11),
  POS(347, 11)
};

static TAB_NUM t_lambda_2_do_collect_output[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_296_1_do_collect_error_output, lambda_24, lambda_25, TAIL_CALL,
  POS(349, 15)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  //  ret out err
  LET, 3, var_346_1_ret, var_312_1_out, var_313_1_err, TAIL_CALL,
  POS(351, 19)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  //  ret out
  LET, 2, var_346_1_ret, var_312_1_out, TAIL_CALL,
  POS(352, 19)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  //  ret
  LET, 1, var_346_1_ret, TAIL_CALL,
  POS(353, 15)
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(355, 11)
};

static TAB_NUM t_func_std__terminate[] = {
  0, // locals
  0, // parameters
  // exit! EXIT_SUCCESS
  var_exit, 1, var_EXIT_SUCCESS, IO_TAIL_CALL,
  POS(358, 3)
};

static TAB_NUM t_func_std_types__file_descriptor___serialize[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 369_0_self
  var_undefined, var_370_0_indent,
  // to_integer)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(1),
  // $str "
  var_std__string, 3, str_file_descriptor_2, LOCAL(1), string_2, 1, var_372_1_str,
  // is_defined
  var_is_defined, 1, var_370_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_28, lambda_29, TAIL_CALL,
  POS(373, 28),
  POS(372, 3),
  POS(375, 12),
  POS(374, 3)
};

static TAB_NUM t_lambda_28[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_370_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_372_1_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(376, 15),
  POS(376, 8),
  POS(376, 7)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_372_1_str, TAIL_CALL,
  POS(377, 7)
};

static TAB_NUM t_func_std_types__file_descriptor___deserializer_of[] = {
  3, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(3), // 382_0_argument
  // integer(argument))
  var_integer, 1, LOCAL(3), 1, LOCAL(1),
  // file_descriptor(integer(argument))
  var_file_descriptor, 1, LOCAL(1), 1, LOCAL(2),
  // -> file_descriptor(integer(argument))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(384, 22),
  POS(384, 6),
  POS(384, 3)
};

static TAB_NUM t_func_std_types__process_id___serialize[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 395_0_self
  var_undefined, var_396_0_indent,
  // to_integer)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(1),
  // $str "
  var_std__string, 3, str_process_id_2, LOCAL(1), string_2, 1, var_398_1_str,
  // is_defined
  var_is_defined, 1, var_396_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_30, lambda_31, TAIL_CALL,
  POS(399, 23),
  POS(398, 3),
  POS(401, 12),
  POS(400, 3)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_396_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_398_1_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(402, 15),
  POS(402, 8),
  POS(402, 7)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_398_1_str, TAIL_CALL,
  POS(403, 7)
};

static TAB_NUM t_func_std_types__process_id___deserializer_of[] = {
  3, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(3), // 408_0_argument
  // integer(argument))
  var_integer, 1, LOCAL(3), 1, LOCAL(1),
  // process_id(integer(argument))
  var_process_id, 1, LOCAL(1), 1, LOCAL(2),
  // -> process_id(integer(argument))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(410, 17),
  POS(410, 6),
  POS(410, 3)
};

static TAB_NUM t_func_extern_call[] = {
  5, // locals
  -2, // parameters
  MYSELF_PARAMETER, LOCAL(4), // 416_0_myself
  REST_PARAMETER, LOCAL(5), // 417_0_arguments
  // command_of(myself) map(flatten(arguments) to_string)
  var_command_of, 1, LOCAL(4), 1, LOCAL(1),
  // flatten(arguments) to_string)
  var_flatten, 1, LOCAL(5), 1, LOCAL(2),
  // map(flatten(arguments) to_string)
  var_map, 2, LOCAL(2), var_to_string, 1, LOCAL(3),
  // call! command_of(myself) map(flatten(arguments) to_string)
  var_call, 2, LOCAL(1), LOCAL(3), IO_TAIL_CALL,
  POS(419, 9),
  POS(419, 32),
  POS(419, 28),
  POS(419, 3)
};

static TAB_NUM t_func_std__pipe[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, var_421_13_args,
  // $i 1
  LET, 1, num_1, 1, var_422_1_i,
  // $n length_of(args)
  var_length_of, 1, var_421_13_args, 1, var_423_1_n,
  // $in_fd undefined
  LET, 1, var_undefined, 1, var_424_1_in_fd,
  // $feed undefined
  LET, 1, var_undefined, 1, var_425_1_feed,
  // $commands empty_list
  LET, 1, var_empty_list, 1, var_426_1_commands,
  // $head undefined
  LET, 1, var_undefined, 1, var_427_1_head,
  // $arguments undefined
  LET, 1, var_undefined, 1, var_428_1_arguments,
  // $first_arg args(1)
  var_421_13_args, 1, num_1, 1, var_429_1_first_arg,
  // is_a_string:
  var_is_a_string, 1, var_429_1_first_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_first_arg_is_a_string, lambda_32, IO_TAIL_CALL,
  POS(422, 3),
  POS(423, 3),
  POS(424, 3),
  POS(425, 3),
  POS(426, 3),
  POS(427, 3),
  POS(428, 3),
  POS(429, 3),
  POS(431, 15),
  POS(430, 3)
};

static TAB_NUM t_lambda_first_arg_is_a_string[] = {
  0, // locals
  0, // parameters
  // !feed first_arg
  LET, 1, var_429_1_first_arg, 1, var_425_1_feed,
  // !i 2
  LET, 1, num_2, 1, var_422_1_i,
  // build_commands!
  func_build_commands, 0, IO_TAIL_CALL,
  POS(432, 7),
  POS(433, 7),
  POS(434, 7)
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // is_a_file_descriptor:
  var_is_a_file_descriptor, 1, var_429_1_first_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_first_arg_is_a_file_descriptor, func_build_commands, IO_TAIL_CALL,
  POS(437, 19),
  POS(436, 7)
};

static TAB_NUM t_lambda_first_arg_is_a_file_descriptor[] = {
  0, // locals
  0, // parameters
  // !in_fd first_arg
  LET, 1, var_429_1_first_arg, 1, var_424_1_in_fd,
  // build_commands!
  func_build_commands, 0, IO_TAIL_CALL,
  POS(438, 11),
  POS(439, 11)
};

static TAB_NUM t_func_build_commands[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_33, lambda_37, IO_TAIL_CALL,
  POS(443, 5)
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // n break
  var_std__less, 2, var_423_1_n, var_422_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_34, IO_TAIL_CALL,
  POS(446, 15),
  POS(445, 9)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // $arg args(i)
  var_421_13_args, 1, var_422_1_i, 1, var_448_1_arg,
  // is_a_function:
  var_is_a_function, 1, var_448_1_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_arg_is_a_function, lambda_36, IO_TAIL_CALL,
  POS(448, 13),
  POS(450, 19),
  POS(449, 13)
};

static TAB_NUM t_lambda_arg_is_a_function[] = {
  1, // locals
  0, // parameters
  // is_defined &commands:
  var_is_defined, 1, var_427_1_head, 1, LOCAL(1),
  // update_if head.is_defined &commands:
  var_update_if, 3, LOCAL(1), var_426_1_commands, lambda_35, 1, var_426_1_commands,
  // !head command_of(arg)
  var_command_of, 1, var_448_1_arg, 1, var_427_1_head,
  // !arguments empty_list
  LET, 1, var_empty_list, 1, var_428_1_arguments,
  // inc &i
  var_inc, 1, var_422_1_i, 1, var_422_1_i,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(451, 32),
  POS(451, 17),
  POS(453, 17),
  POS(454, 17),
  POS(455, 17),
  POS(456, 17)
};

static TAB_NUM t_lambda_35[] = {
  3, // locals
  0, // parameters
  // flatten(arguments) to_string))
  var_flatten, 1, var_428_1_arguments, 1, LOCAL(1),
  // map(flatten(arguments) to_string))
  var_map, 2, LOCAL(1), var_to_string, 1, LOCAL(2),
  // tuple(head map(flatten(arguments) to_string))
  var_tuple, 2, var_427_1_head, LOCAL(2), 1, LOCAL(3),
  // push commands tuple(head map(flatten(arguments) to_string))
  var_push, 2, var_426_1_commands, LOCAL(3), TAIL_CALL,
  POS(452, 48),
  POS(452, 44),
  POS(452, 33),
  POS(452, 19)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  // push &arguments arg
  var_push, 2, var_428_1_arguments, var_448_1_arg, 1, var_428_1_arguments,
  // inc &i
  var_inc, 1, var_422_1_i, 1, var_422_1_i,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(458, 17),
  POS(459, 17),
  POS(460, 17)
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // is_defined &commands:
  var_is_defined, 1, var_427_1_head, 1, LOCAL(1),
  // update_if head.is_defined &commands:
  var_update_if, 3, LOCAL(1), var_426_1_commands, lambda_38, 1, var_426_1_commands,
  // run_pipe! in_fd feed commands
  func_run_pipe, 3, var_424_1_in_fd, var_425_1_feed, var_426_1_commands, IO_TAIL_CALL,
  POS(462, 24),
  POS(462, 9),
  POS(464, 9)
};

static TAB_NUM t_lambda_38[] = {
  3, // locals
  0, // parameters
  // flatten(arguments) to_string))
  var_flatten, 1, var_428_1_arguments, 1, LOCAL(1),
  // map(flatten(arguments) to_string))
  var_map, 2, LOCAL(1), var_to_string, 1, LOCAL(2),
  // tuple(head map(flatten(arguments) to_string))
  var_tuple, 2, var_427_1_head, LOCAL(2), 1, LOCAL(3),
  // push commands tuple(head map(flatten(arguments) to_string))
  var_push, 2, var_426_1_commands, LOCAL(3), TAIL_CALL,
  POS(463, 40),
  POS(463, 36),
  POS(463, 25),
  POS(463, 11)
};

static TAB_NUM t_func_run_pipe[] = {
  1, // locals
  3, // parameters
  var_468_0_in_fd,
  var_469_0_feed,
  var_470_0_commands,
  // $pids empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_472_1_pids,
  // $err_fds empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_473_1_err_fds,
  // $out_fd in_fd
  LET, 1, var_468_0_in_fd, 1, var_474_1_out_fd,
  // $env_vars undefined
  LET, 1, var_undefined, 1, var_475_1_env_vars,
  // is_defined &env_vars:
  var_is_defined, 1, var_environment, 1, LOCAL(1),
  // update_if environment.is_defined &env_vars:
  var_update_if, 3, LOCAL(1), var_475_1_env_vars, lambda_39, 1, var_475_1_env_vars,
  // for_each commands
  var_for_each, 3, var_470_0_commands, lambda_42, lambda_46, IO_TAIL_CALL,
  POS(472, 3),
  POS(473, 3),
  POS(474, 3),
  POS(475, 3),
  POS(476, 25),
  POS(476, 3),
  POS(483, 3)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  // !env_vars empty_list
  LET, 1, var_empty_list, 1, var_475_1_env_vars,
  // for_each environment
  var_for_each, 3, var_environment, lambda_40, lambda_41, TAIL_CALL,
  POS(477, 5),
  POS(478, 5)
};

static TAB_NUM t_lambda_40[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 479_3_key
  LOCAL(3), // 479_7_value
  // "@(key)=@(value)"
  var_std__string, 3, LOCAL(2), string_3, LOCAL(3), 1, LOCAL(1),
  // push &env_vars "@(key)=@(value)"
  var_push, 2, var_475_1_env_vars, LOCAL(1), 1, var_475_1_env_vars,
  // next
  var_next, 0, TAIL_CALL,
  POS(480, 24),
  POS(480, 9),
  POS(481, 9)
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  //  env_vars
  LET, 1, var_475_1_env_vars, TAIL_CALL,
  POS(482, 9)
};

static TAB_NUM t_lambda_42[] = {
  3, // locals
  2, // parameters
  var_484_3_idx,
  LOCAL(3), // 484_7_command
  // command $head $arguments
  LOCAL(3), 0, 2, var_485_9_head, var_485_15_arguments,
  // $pid undefined
  LET, 1, var_undefined, 1, var_486_1_pid,
  // $err_fd undefined
  LET, 1, var_undefined, 1, var_487_1_err_fd,
  // idx == 1 && in_fd.is_undefined:
  var_std__equal, 2, var_484_3_idx, num_1, 1, LOCAL(1),
  // idx == 1 && in_fd.is_undefined:
  var_std__and, 2, LOCAL(1), lambda_43, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_44, lambda_45, IO_TAIL_CALL,
  POS(485, 7),
  POS(486, 7),
  POS(487, 7),
  POS(489, 9),
  POS(489, 9),
  POS(488, 7)
};

static TAB_NUM t_lambda_43[] = {
  1, // locals
  0, // parameters
  // is_undefined:
  var_is_undefined, 1, var_468_0_in_fd, 1, LOCAL(1),
  // in_fd.is_undefined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(489, 27),
  POS(489, 21)
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  // create_process! !pid !in_fd !out_fd !err_fd head arguments env_vars
  var_create_process, 3, var_485_9_head, var_485_15_arguments, var_475_1_env_vars, IO_CALL(4), var_486_1_pid, var_468_0_in_fd, var_474_1_out_fd, var_487_1_err_fd,
  // store_pid_and_err_fd!
  func_store_pid_and_err_fd, 0, IO_TAIL_CALL,
  POS(490, 11),
  POS(491, 11)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  // create_process! !pid !out_fd !err_fd head arguments env_vars out_fd
  var_create_process, 4, var_485_9_head, var_485_15_arguments, var_475_1_env_vars, var_474_1_out_fd, IO_CALL(3), var_486_1_pid, var_474_1_out_fd, var_487_1_err_fd,
  // store_pid_and_err_fd!
  func_store_pid_and_err_fd, 0, IO_TAIL_CALL,
  POS(493, 11),
  POS(494, 11)
};

static TAB_NUM t_func_store_pid_and_err_fd[] = {
  0, // locals
  0, // parameters
  // pids(pid) idx
  var_472_1_pids, 2, var_486_1_pid, var_484_3_idx, 1, var_472_1_pids,
  // err_fds(err_fd) idx
  var_473_1_err_fds, 2, var_487_1_err_fd, var_484_3_idx, 1, var_473_1_err_fds,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(497, 10),
  POS(498, 10),
  POS(499, 9)
};

static TAB_NUM t_lambda_46[] = {
  2, // locals
  0, // parameters
  // list(undefined) length_of(commands))
  var_list, 1, var_undefined, 1, LOCAL(1),
  // length_of(commands))
  var_length_of, 1, var_470_0_commands, 1, LOCAL(2),
  // $ret dup(list(undefined) length_of(commands))
  var_dup, 2, LOCAL(1), LOCAL(2), 1, var_501_1_ret,
  // $out ""
  LET, 1, string_1, 1, var_502_1_out,
  // length_of(commands))
  var_length_of, 1, var_470_0_commands, 1, LOCAL(2),
  // $err dup(list("") length_of(commands))
  var_dup, 2, list_503_9, LOCAL(2), 1, var_503_1_err,
  // is_defined
  var_is_defined, 1, var_469_0_feed, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_manage_io, lambda_47, IO_TAIL_CALL,
  POS(501, 16),
  POS(501, 32),
  POS(501, 7),
  POS(502, 7),
  POS(503, 25),
  POS(503, 7),
  POS(505, 14),
  POS(504, 7)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  // close! in_fd
  var_close, 1, var_468_0_in_fd, IO_CALL(0),
  // !in_fd undefined
  LET, 1, var_undefined, 1, var_468_0_in_fd,
  // manage_io!
  func_manage_io, 0, IO_TAIL_CALL,
  POS(508, 11),
  POS(509, 11),
  POS(510, 11)
};

static TAB_NUM t_func_manage_io[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_5_loop, IO_TAIL_CALL,
  POS(513, 9)
};

static TAB_NUM t_lambda_5_loop[] = {
  3, // locals
  0, // parameters
  // $read_descriptor_list keys_of(err_fds)
  var_keys_of, 1, var_473_1_err_fds, 1, var_514_1_read_descriptor_list,
  // is_defined
  var_is_defined, 1, var_468_0_in_fd, 1, LOCAL(1),
  // $write_descriptor_list
  var_if, 3, LOCAL(1), lambda_48, lambda_49, 1, LOCAL(2),
  // is_defined &read_descriptor_list:
  var_is_defined, 1, var_474_1_out_fd, 1, LOCAL(1),
  // update_if out_fd.is_defined &read_descriptor_list:
  var_update_if, 3, LOCAL(1), var_514_1_read_descriptor_list, lambda_50, 1, var_514_1_read_descriptor_list,
  // pselect!
  var_pselect, 3, var_514_1_read_descriptor_list, LOCAL(2), var_empty_list, IO_CALL(4), LOCAL(3), var_524_1_read_descriptors, var_525_1_write_descriptors, LOCAL(1),
  // for_each signals
  var_for_each, 3, LOCAL(3), lambda_51, lambda_53, IO_TAIL_CALL,
  POS(514, 11),
  POS(517, 21),
  POS(515, 11),
  POS(520, 28),
  POS(520, 11),
  POS(522, 11),
  POS(527, 11)
};

static TAB_NUM t_lambda_48[] = {
  1, // locals
  0, // parameters
  // list(in_fd)
  var_list, 1, var_468_0_in_fd, 1, LOCAL(1),
  //  list(in_fd)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(518, 18),
  POS(518, 17)
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(519, 17)
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  // push read_descriptor_list out_fd
  var_push, 2, var_514_1_read_descriptor_list, var_474_1_out_fd, TAIL_CALL,
  POS(521, 13)
};

static TAB_NUM t_lambda_51[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 528_3_signal
  // signal == CHILD_CHANGED_STATE:
  var_std__equal, 2, LOCAL(2), var_CHILD_CHANGED_STATE, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_52, var_next, IO_TAIL_CALL,
  POS(530, 17),
  POS(529, 15)
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_6_loop, IO_TAIL_CALL,
  POS(531, 19)
};

static TAB_NUM t_lambda_6_loop[] = {
  1, // locals
  0, // parameters
  // wait2! $rpid $status
  var_wait2, 0, IO_CALL(2), var_532_8_rpid, var_532_14_status,
  // is_defined:
  var_is_defined, 1, var_532_8_rpid, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_rpid_is_defined, var_break, IO_TAIL_CALL,
  POS(532, 21),
  POS(534, 28),
  POS(533, 21)
};

static TAB_NUM t_lambda_rpid_is_defined[] = {
  2, // locals
  0, // parameters
  // pids(rpid)) status
  var_472_1_pids, 1, var_532_8_rpid, 1, LOCAL(2),
  // ret(pids(rpid)) status
  var_501_1_ret, 2, LOCAL(2), var_532_14_status, 1, var_501_1_ret,
  // pids(rpid) undefined
  var_472_1_pids, 2, var_532_8_rpid, var_undefined, 1, var_472_1_pids,
  // is_empty
  var_is_empty, 1, var_472_1_pids, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), var_break, var_next, IO_TAIL_CALL,
  POS(535, 30),
  POS(535, 26),
  POS(536, 26),
  POS(538, 32),
  POS(537, 25)
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  // for_each write_descriptors
  var_for_each, 3, var_525_1_write_descriptors, lambda_54, lambda_55, IO_TAIL_CALL,
  POS(544, 15)
};

static TAB_NUM t_lambda_54[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 545_3_write_descriptor
  // write! $bytes_written write_descriptor feed
  var_write, 2, LOCAL(2), var_469_0_feed, IO_CALL(1), LOCAL(3),
  // bytes_written+1 -1
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // range &feed bytes_written+1 -1
  var_range, 3, var_469_0_feed, LOCAL(1), minus_num_1, 1, var_469_0_feed,
  // is_empty:
  var_is_empty, 1, var_469_0_feed, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_feed_is_empty, var_next, IO_TAIL_CALL,
  POS(546, 19),
  POS(547, 31),
  POS(547, 19),
  POS(549, 26),
  POS(548, 19)
};

static TAB_NUM t_lambda_feed_is_empty[] = {
  0, // locals
  0, // parameters
  // close! in_fd
  var_close, 1, var_468_0_in_fd, IO_CALL(0),
  // !in_fd undefined
  LET, 1, var_undefined, 1, var_468_0_in_fd,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(550, 23),
  POS(551, 23),
  POS(552, 23)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  // for_each read_descriptors
  var_for_each, 3, var_524_1_read_descriptors, lambda_56, lambda_62, IO_TAIL_CALL,
  POS(555, 19)
};

static TAB_NUM t_lambda_56[] = {
  1, // locals
  1, // parameters
  var_556_3_read_descriptor,
  // read! $buf read_descriptor 0x100000
  var_read, 2, var_556_3_read_descriptor, num_1048576, IO_CALL(1), var_557_7_buf,
  // is_empty: # closed from the other side
  var_is_empty, 1, var_557_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_empty, lambda_59, IO_TAIL_CALL,
  POS(557, 23),
  POS(559, 29),
  POS(558, 23)
};

static TAB_NUM t_lambda_buf_is_empty[] = {
  1, // locals
  0, // parameters
  // close! read_descriptor
  var_close, 1, var_556_3_read_descriptor, IO_CALL(0),
  // read_descriptor == out_fd:
  var_std__equal, 2, var_556_3_read_descriptor, var_474_1_out_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_57, lambda_58, IO_TAIL_CALL,
  POS(560, 27),
  POS(562, 29),
  POS(561, 27)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  // !out_fd undefined
  LET, 1, var_undefined, 1, var_474_1_out_fd,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(563, 31),
  POS(564, 31)
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  0, // parameters
  // err_fds(read_descriptor) undefined
  var_473_1_err_fds, 2, var_556_3_read_descriptor, var_undefined, 1, var_473_1_err_fds,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(566, 32),
  POS(567, 31)
};

static TAB_NUM t_lambda_59[] = {
  1, // locals
  0, // parameters
  // read_descriptor == out_fd:
  var_std__equal, 2, var_556_3_read_descriptor, var_474_1_out_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_60, lambda_61, IO_TAIL_CALL,
  POS(570, 29),
  POS(569, 27)
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  0, // parameters
  // append &out buf
  var_append, 2, var_502_1_out, var_557_7_buf, 1, var_502_1_out,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(571, 31),
  POS(572, 31)
};

static TAB_NUM t_lambda_61[] = {
  2, // locals
  0, // parameters
  // err_fds(read_descriptor)) buf
  var_473_1_err_fds, 1, var_556_3_read_descriptor, 1, LOCAL(1),
  // err(err_fds(read_descriptor)) buf
  var_503_1_err, 1, LOCAL(1), 1, LOCAL(2),
  // append &err(err_fds(read_descriptor)) buf
  var_append, 2, LOCAL(2), var_557_7_buf, 1, LOCAL(2),
  // err(err_fds(read_descriptor)) buf
  var_503_1_err, 2, LOCAL(1), LOCAL(2), 1, var_503_1_err,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(574, 43),
  POS(574, 39),
  POS(574, 31),
  POS(574, 39),
  POS(575, 31)
};

static TAB_NUM t_lambda_62[] = {
  2, // locals
  0, // parameters
  // is_empty && out_fd.is_undefined && err_fds.is_empty
  var_is_empty, 1, var_472_1_pids, 1, LOCAL(1),
  // is_empty && out_fd.is_undefined && err_fds.is_empty
  var_std__and, 2, LOCAL(1), lambda_63, 1, LOCAL(2),
  // if!
  var_if, 3, LOCAL(2), lambda_65, var_next, IO_TAIL_CALL,
  POS(578, 30),
  POS(578, 30),
  POS(577, 23)
};

static TAB_NUM t_lambda_63[] = {
  2, // locals
  0, // parameters
  // is_undefined && err_fds.is_empty
  var_is_undefined, 1, var_474_1_out_fd, 1, LOCAL(1),
  // is_undefined && err_fds.is_empty
  var_std__and, 2, LOCAL(1), lambda_64, 1, LOCAL(2),
  // out_fd.is_undefined && err_fds.is_empty
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(578, 49),
  POS(578, 49),
  POS(578, 42)
};

static TAB_NUM t_lambda_64[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_473_1_err_fds, 1, LOCAL(1),
  // err_fds.is_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(578, 73),
  POS(578, 65)
};

static TAB_NUM t_lambda_65[] = {
  0, // locals
  0, // parameters
  //  ret out err
  LET, 3, var_501_1_ret, var_502_1_out, var_503_1_err, TAIL_CALL,
  POS(579, 27)
};

static TAB_NUM t_func_std__extern[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 586_0_command
  // .command_of command)
  LET, -1, func_extern_call, var_command_of, LOCAL(2), LOCAL(1),
  // -> extern_call(.command_of command)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(588, 18),
  POS(588, 3)
};

static int list_503_9_arguments[] = {
  -string_1
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__print_string_to}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__print_to}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__print_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__print}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__println}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__eprint_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__eprint}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__eprintln}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__read_all_from}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_loop}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x1000}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___load}},
  {FLT_STRING_8, 1, {.str_8 = "r"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___save}},
  {FLT_STRING_8, 2, {.str_8 = "w+"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__try}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__check}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__file_exists}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__directory}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_entry_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__stat___access_time_of}},
  {FLT_POSITIVE_INT64, 0, {.value = 1000000000}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__stat___modification_time_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__stat___status_change_time_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__stat___is_a_directory}},
  {FLT_CHARACTER, 0, {.value = 100}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__call}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_STRING_8, 1, {.str_8 = "="}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_READ}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_out_fd}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_collect_output}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_err_fd}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_collect_error_output}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_PROCESS_JOINED}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_do_collect_output}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__terminate}},
  {FLT_STRING_8, 15, {.str_8 = "file_descriptor"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__file_descriptor___serialize}},
  {FLT_STRING_8, 16, {.str_8 = "file_descriptor "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__file_descriptor___deserializer_of}},
  {FLT_STRING_8, 10, {.str_8 = "process_id"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__process_id___serialize}},
  {FLT_STRING_8, 11, {.str_8 = "process_id "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__process_id___deserializer_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_extern_call}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__pipe}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_first_arg_is_a_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_first_arg_is_a_file_descriptor}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_build_commands}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_arg_is_a_function}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_run_pipe}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_store_pid_and_err_fd}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_LIST, 1, {.arguments = list_503_9_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_manage_io}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_rpid_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_feed_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x100000}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_buf_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__extern}}
};

static ATTRIBUTE_DEFINITION std_types__string__attributes[] = {
  {var_load, -func_std_types__string___load},
  {var_save, -func_std_types__string___save}
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

static ATTRIBUTE_DEFINITION std_types__file_descriptor__attributes[] = {
  {-var_is_a_file_descriptor, -var_true},
  {-var_serialization_tag_of, -str_file_descriptor},
  {var_serialize, -func_std_types__file_descriptor___serialize},
  {-var_deserializer_of, -func_std_types__file_descriptor___deserializer_of}
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
    "print_string_to\000std", NULL,
    {.const_idx = -func_std__print_string_to}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "31_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "32_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "34_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(34, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "37_8_bytes_written\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write\000", NULL,
    {.position = POS(37, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(39, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(43, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(44, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(44, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(45, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(46, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(42, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(47, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(35, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(23, 1)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "print_to\000std", NULL,
    {.const_idx = -func_std__print_to}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(60, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print_string_to\000", NULL,
    {.position = POS(60, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "print_string\000std", NULL,
    {.const_idx = -func_std__print_string}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(72, 38)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDOUT_FILENO\000", NULL,
    {.position = POS(72, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "print\000std", NULL,
    {.const_idx = -func_std__print}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print_string\000", NULL,
    {.position = POS(84, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "println\000std", NULL,
    {.const_idx = -func_std__println}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(98, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "eprint_string\000std", NULL,
    {.const_idx = -func_std__eprint_string}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDERR_FILENO\000", NULL,
    {.position = POS(110, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "eprint\000std", NULL,
    {.const_idx = -func_std__eprint}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprint_string\000", NULL,
    {.position = POS(122, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "eprintln\000std", NULL,
    {.const_idx = -func_std__eprintln}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "readln\000std", NULL,
    {.const_idx = -lambda_4}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "150_1_line_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDIN_FILENO\000", NULL,
    {.position = POS(152, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "152_22_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read\000", NULL,
    {.position = POS(152, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(154, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(158, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(162, 15)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "read_all_from\000std", NULL,
    {.const_idx = -func_std__read_all_from}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "171_0_fh\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "173_1_already_read_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "175_7_next_data\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(181, 21)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "load\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "string\000std_types", std_types__string__attributes,
    {.position = POS(189, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "load\000", NULL,
    {.position = POS(189, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open\000", NULL,
    {.position = POS(197, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "check\000", NULL,
    {.position = POS(198, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read_all_from\000", NULL,
    {.position = POS(199, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "close\000", NULL,
    {.position = POS(201, 3)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "save\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "save\000", NULL,
    {.position = POS(206, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print_to\000", NULL,
    {.position = POS(217, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "try\000std", NULL,
    {.const_idx = -func_std__try}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(232, 6)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "check\000std", NULL,
    {.const_idx = -func_std__check}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "241_0_argument\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "file_exists\000std", NULL,
    {.const_idx = -func_std__file_exists}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "stat\000", NULL,
    {.position = POS(249, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(250, 6)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "directory\000std", NULL,
    {.const_idx = -func_std__directory}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "253_1_entries\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(253, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "254_10_dir\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "opendir\000", NULL,
    {.position = POS(254, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "256_10_entry\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "readdir\000", NULL,
    {.position = POS(256, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "closedir\000", NULL,
    {.position = POS(259, 9)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "access_time_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 4,
    "stat\000std_types", std_types__stat__attributes,
    {.position = POS(267, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "access_time_of\000", NULL,
    {.position = POS(267, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "access_time_seconds_of\000", NULL,
    {.position = POS(270, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "access_time_nanoseconds_of\000", NULL,
    {.position = POS(271, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "over\000std", NULL,
    {.position = POS(271, 7)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "modification_time_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "modification_time_of\000", NULL,
    {.position = POS(275, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "modification_time_seconds_of\000", NULL,
    {.position = POS(278, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "modification_time_nanoseconds_of\000", NULL,
    {.position = POS(279, 7)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "status_change_time_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "status_change_time_of\000", NULL,
    {.position = POS(283, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "status_change_time_seconds_of\000", NULL,
    {.position = POS(286, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "status_change_time_nanoseconds_of\000", NULL,
    {.position = POS(287, 7)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_directory\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_directory\000", NULL,
    {.position = POS(291, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mode_of\000", NULL,
    {.position = POS(292, 6)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "call\000std", NULL,
    {.const_idx = -func_std__call}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(295, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "295_1_do_collect_output\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(295, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "296_1_do_collect_error_output\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "297_1_env_vars\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "environment\000", NULL,
    {.position = POS(298, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(298, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(302, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(300, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(298, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "305_29_out_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "305_37_err_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_process\000", NULL,
    {.position = POS(305, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "307_1_io\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "io\000std_types", NULL,
    {.position = POS(307, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "join_process\000", NULL,
    {.position = POS(308, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "start_reading_from\000", NULL,
    {.position = POS(309, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "312_1_out\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "313_1_err\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_events\000", NULL,
    {.position = POS(315, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "317_13_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "317_17_data\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ\000", NULL,
    {.position = POS(319, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "stop_reading_from\000", NULL,
    {.position = POS(323, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(326, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PROCESS_JOINED\000", NULL,
    {.position = POS(345, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "346_1_ret\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "terminate\000std", NULL,
    {.const_idx = -func_std__terminate}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXIT_SUCCESS\000", NULL,
    {.position = POS(358, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exit\000", NULL,
    {.position = POS(358, 3)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_file_descriptor\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(362, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_file_descriptor\000", NULL,
    {.position = POS(362, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(362, 41)}
  },
  {
    FOT_UNKNOWN, 0, 4,
    "file_descriptor\000std_types", std_types__file_descriptor__attributes,
    {.position = POS(363, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(363, 50)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(365, 29)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(367, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "370_0_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(373, 28)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "372_1_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(376, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deserializer_of\000", NULL,
    {.position = POS(379, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "integer\000", NULL,
    {.position = POS(384, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "file_descriptor\000", NULL,
    {.position = POS(384, 6)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_process_id\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_process_id\000", NULL,
    {.position = POS(388, 20)}
  },
  {
    FOT_UNKNOWN, 0, 4,
    "process_id\000std_types", std_types__process_id__attributes,
    {.position = POS(389, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "396_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "398_1_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "process_id\000", NULL,
    {.position = POS(410, 6)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "command_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "flatten\000", NULL,
    {.position = POS(419, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_string\000", NULL,
    {.position = POS(419, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(419, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "call\000", NULL,
    {.position = POS(419, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pipe\000std", NULL,
    {.const_idx = -func_std__pipe}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "421_13_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "422_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "423_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "424_1_in_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "425_1_feed\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "426_1_commands\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "427_1_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "428_1_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "429_1_first_arg\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(431, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "448_1_arg\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_function\000", NULL,
    {.position = POS(450, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(452, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(455, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "468_0_in_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "469_0_feed\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "470_0_commands\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "472_1_pids\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(472, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "473_1_err_fds\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "474_1_out_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "475_1_env_vars\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "484_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "485_9_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "485_15_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "486_1_pid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "487_1_err_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(489, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(501, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "501_1_ret\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dup\000", NULL,
    {.position = POS(501, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "502_1_out\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "503_1_err\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "514_1_read_descriptor_list\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "keys_of\000", NULL,
    {.position = POS(514, 33)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "524_1_read_descriptors\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "525_1_write_descriptors\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pselect\000", NULL,
    {.position = POS(522, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CHILD_CHANGED_STATE\000", NULL,
    {.position = POS(530, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "532_8_rpid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "532_14_status\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "wait2\000", NULL,
    {.position = POS(532, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "556_3_read_descriptor\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "557_7_buf\000", NULL
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
  136, // number of constants
  190, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
