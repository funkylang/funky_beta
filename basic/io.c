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
  func_std__write_all_to = -11,
  func_std__print_to = -12,
  func_std__print_string = -13,
  func_std__print = -14,
  func_std__println = -15,
  chr_10 = -16,
  func_std__eprint_string = -17,
  func_std__eprint = -18,
  func_std__eprintln = -19,
  func_std__readln = -20,
  string_1 = -21,
  lambda_loop = -22,
  lambda_5 = -23,
  lambda_6 = -24,
  string_2 = -25,
  lambda_7 = -26,
  lambda_8 = -27,
  func_std__read_all_from = -28,
  lambda_2_loop = -29,
  num_4096 = -30,
  lambda_9 = -31,
  lambda_10 = -32,
  lambda_11 = -33,
  lambda_12 = -34,
  func_std_types__string___load = -35,
  str_r = -36,
  func_std_types__file_descriptor___load = -37,
  func_std_types__string___save = -38,
  str_w = -39,
  func_std__try = -40,
  func_std__check = -41,
  lambda_13 = -42,
  func_std__file_exists = -43,
  func_std__directory = -44,
  lambda_3_loop = -45,
  lambda_entry_is_an_error = -46,
  lambda_14 = -47,
  func_std_types__stat___access_time_of = -48,
  num_1000000000 = -49,
  func_std_types__stat___modification_time_of = -50,
  func_std_types__stat___status_change_time_of = -51,
  func_std_types__stat___is_a_directory = -52,
  chr_100 = -53,
  func_std__call = -54,
  num_2 = -55,
  num_3 = -56,
  lambda_15 = -57,
  lambda_16 = -58,
  string_3 = -59,
  lambda_17 = -60,
  lambda_4_loop = -61,
  lambda_18 = -62,
  lambda_READ = -63,
  lambda_19 = -64,
  lambda_20 = -65,
  lambda_out_fd = -66,
  lambda_do_collect_output = -67,
  lambda_21 = -68,
  lambda_err_fd = -69,
  lambda_do_collect_error_output = -70,
  lambda_22 = -71,
  lambda_23 = -72,
  lambda_PROCESS_JOINED = -73,
  lambda_2_do_collect_output = -74,
  lambda_24 = -75,
  lambda_25 = -76,
  lambda_26 = -77,
  lambda_27 = -78,
  func_std__terminate = -79,
  str_file_descriptor = -80,
  func_std_types__file_descriptor___serialize = -81,
  str_file_descriptor_2 = -82,
  lambda_28 = -83,
  lambda_29 = -84,
  func_std_types__file_descriptor___deserializer_of = -85,
  str_process_id = -86,
  func_std_types__process_id___serialize = -87,
  str_process_id_2 = -88,
  lambda_30 = -89,
  lambda_31 = -90,
  func_std_types__process_id___deserializer_of = -91,
  func_extern_call = -92,
  func_std__pipe = -93,
  lambda_first_arg_is_a_string = -94,
  lambda_32 = -95,
  lambda_first_arg_is_a_file_descriptor = -96,
  func_build_commands = -97,
  lambda_33 = -98,
  lambda_34 = -99,
  lambda_arg_is_a_function = -100,
  lambda_35 = -101,
  lambda_36 = -102,
  lambda_37 = -103,
  lambda_38 = -104,
  func_std__pipe_commands = -105,
  lambda_feed_or_fd_is_defined = -106,
  lambda_feed_or_fd_is_a_file_descriptor = -107,
  lambda_39 = -108,
  lambda_40 = -109,
  func_run_pipe = -110,
  lambda_41 = -111,
  lambda_42 = -112,
  lambda_43 = -113,
  lambda_44 = -114,
  lambda_45 = -115,
  lambda_46 = -116,
  lambda_47 = -117,
  func_store_pid_and_err_fd = -118,
  lambda_48 = -119,
  list_858_9 = -120,
  lambda_49 = -121,
  func_manage_io = -122,
  lambda_5_loop = -123,
  lambda_50 = -124,
  lambda_51 = -125,
  lambda_52 = -126,
  lambda_53 = -127,
  lambda_54 = -128,
  lambda_55 = -129,
  lambda_rpid_is_defined = -130,
  lambda_56 = -131,
  lambda_57 = -132,
  lambda_feed_is_empty = -133,
  lambda_58 = -134,
  lambda_59 = -135,
  num_1048576 = -136,
  lambda_buf_is_empty = -137,
  lambda_60 = -138,
  lambda_61 = -139,
  lambda_62 = -140,
  lambda_63 = -141,
  lambda_64 = -142,
  lambda_65 = -143,
  lambda_66 = -144,
  lambda_67 = -145,
  lambda_68 = -146,
  func_std__extern = -147
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
  var_106_0_duration, // dynamic
  var_std__less, // extern
  var_std__times, // extern
  var_to_integer, // extern
  var_usleep, // extern
  var_pass, // extern
  var_on, // extern
  var_std__write_string_to, // initialized
  var_130_0_fd, // dynamic
  var_131_0_str, // dynamic
  var_133_1_len, // dynamic
  var_length_of, // extern
  var_136_8_bytes_written, // dynamic
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
  var_write_string_to, // extern
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
  var_336_1_line_buf, // dynamic
  var_STDIN_FILENO, // extern
  var_338_22_buf, // dynamic
  var_read, // extern
  var_is_undefined, // extern
  var_std__equal, // extern
  var_append, // extern
  var_std__read_all_from, // initialized
  var_367_0_fh, // dynamic
  var_369_1_already_read_data, // dynamic
  var_371_7_next_data, // dynamic
  var_is_empty, // extern
  var_std_types__string, // extern
  var_load, // extern polymorphic
  var_open, // extern
  var_check, // extern
  var_std_types__file_descriptor, // extern
  var_read_all_from, // extern
  var_close, // extern
  var_save, // extern polymorphic
  var_write_all_to, // extern
  var_std__try, // initialized
  var_undefined, // extern
  var_std__check, // initialized
  var_478_0_argument, // dynamic
  var_std__file_exists, // initialized
  var_stat, // extern
  var_not, // extern
  var_std__directory, // initialized
  var_521_1_entries, // dynamic
  var_empty_list, // extern
  var_522_10_dir, // dynamic
  var_opendir, // extern
  var_524_10_entry, // dynamic
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
  var_std__call, // initialized
  var_result_count, // extern
  var_594_1_do_collect_output, // dynamic
  var_std__not, // extern
  var_595_1_do_collect_error_output, // dynamic
  var_596_1_env_vars, // dynamic
  var_environment, // extern
  var_is_defined, // extern
  var_std__string, // extern
  var_for_each, // extern
  var_update_if, // extern
  var_604_29_out_fd, // dynamic
  var_604_37_err_fd, // dynamic
  var_create_process, // extern
  var_606_1_io, // dynamic
  var_std_types__io, // extern
  var_join_process, // extern
  var_start_reading_from, // extern
  var_611_1_out, // dynamic
  var_612_1_err, // dynamic
  var_get_events, // extern
  var_616_13_fd, // dynamic
  var_616_17_data, // dynamic
  var_READ, // extern
  var_stop_reading_from, // extern
  var_case, // extern
  var_PROCESS_JOINED, // extern
  var_645_1_ret, // dynamic
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
  var_689_0_indent, // dynamic
  var_691_1_str, // dynamic
  var_tabs_and_spaces, // extern
  var_deserializer_of, // extern polymorphic
  var_integer, // extern
  var_file_descriptor, // extern
  var_std__is_a_process_id, // attribute
  var_is_a_process_id, // extern polymorphic
  var_std_types__process_id, // extern
  var_728_0_indent, // dynamic
  var_730_1_str, // dynamic
  var_process_id, // extern
  var_command_of, // attribute
  var_flatten, // extern
  var_to_string, // extern
  var_map, // extern
  var_call, // extern
  var_std__pipe, // initialized
  var_759_13_args, // dynamic
  var_760_1_i, // dynamic
  var_761_1_n, // dynamic
  var_762_1_in_fd, // dynamic
  var_763_1_feed, // dynamic
  var_764_1_commands, // dynamic
  var_765_1_head, // dynamic
  var_766_1_arguments, // dynamic
  var_767_1_first_arg, // dynamic
  var_is_a_string, // extern
  var_787_1_arg, // dynamic
  var_is_a_function, // extern
  var_tuple, // extern
  var_inc, // extern
  var_std__pipe_commands, // initialized
  var_807_0_feed_or_fd, // dynamic
  var_808_0_commands, // dynamic
  var_822_0_in_fd, // dynamic
  var_823_0_feed, // dynamic
  var_824_0_commands, // dynamic
  var_826_1_pids, // dynamic
  var_empty_hash_table, // extern
  var_827_1_err_fds, // dynamic
  var_828_1_out_fd, // dynamic
  var_829_1_env_vars, // dynamic
  var_838_3_idx, // dynamic
  var_839_9_head, // dynamic
  var_839_15_arguments, // dynamic
  var_841_1_pid, // dynamic
  var_842_1_err_fd, // dynamic
  var_std__and, // extern
  var_list, // extern
  var_856_1_ret, // dynamic
  var_dup, // extern
  var_857_1_out, // dynamic
  var_858_1_err, // dynamic
  var_869_1_read_descriptor_list, // dynamic
  var_keys_of, // extern
  var_879_1_read_descriptors, // dynamic
  var_880_1_write_descriptors, // dynamic
  var_pselect, // extern
  var_CHILD_CHANGED_STATE, // extern
  var_888_8_rpid, // dynamic
  var_888_14_status, // dynamic
  var_wait2, // extern
  var_913_3_read_descriptor, // dynamic
  var_914_7_buf, // dynamic
  var_std__extern, // initialized
  var__END
};


static TAB_NUM t_func_std__sleep[] = {
  1, // locals
  1, // parameters
  var_106_0_duration,
  // 0:
  var_std__less, 2, num_0, var_106_0_duration, 1, LOCAL(1),
  // on duration > 0:
  var_on, 2, LOCAL(1), lambda_1, IO_TAIL_CALL,
  POS(108, 17),
  POS(108, 3)
};

static TAB_NUM t_lambda_1[] = {
  2, // locals
  0, // parameters
  // 1'000'000*duration).to_integer
  var_std__times, 2, num_1000000, var_106_0_duration, 1, LOCAL(1),
  // to_integer
  var_to_integer, 1, LOCAL(1), 1, LOCAL(2),
  // usleep! $_dummy (1'000'000*duration).to_integer
  var_usleep, 1, LOCAL(2), IO_CALL(1), LOCAL(1),
  // pass # Attention: Fix the compiler!
  var_pass, 0, TAIL_CALL,
  POS(109, 22),
  POS(109, 42),
  POS(109, 5),
  POS(110, 5)
};

static TAB_NUM t_func_std__write_string_to[] = {
  0, // locals
  2, // parameters
  var_130_0_fd,
  var_131_0_str,
  // $len length_of(str)
  var_length_of, 1, var_131_0_str, 1, var_133_1_len,
  // loop
  var_loop, 2, lambda_2, var_pass, IO_TAIL_CALL,
  POS(133, 3),
  POS(134, 3)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // write! $bytes_written fd str
  var_write, 2, var_130_0_fd, var_131_0_str, IO_CALL(1), var_136_8_bytes_written,
  // is_an_error
  var_is_an_error, 1, var_136_8_bytes_written, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_136_8_bytes_written, lambda_3, IO_TAIL_CALL,
  POS(136, 7),
  POS(138, 23),
  POS(137, 7)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // bytes_written < len:
  var_std__less, 2, var_136_8_bytes_written, var_133_1_len, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_4, var_break, IO_TAIL_CALL,
  POS(142, 13),
  POS(141, 11)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // bytes_written+1 -1
  var_std__plus, 2, var_136_8_bytes_written, num_1, 1, LOCAL(1),
  // range &str bytes_written+1 -1
  var_range, 3, var_131_0_str, LOCAL(1), minus_num_1, 1, var_131_0_str,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(143, 26),
  POS(143, 15),
  POS(144, 15)
};

static TAB_NUM t_func_std__write_all_to[] = {
  3, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 170_0_fd
  REST_PARAMETER, LOCAL(3), // 171_0_args
  // create_string(args)
  var_create_string, 1, LOCAL(3), 1, LOCAL(1),
  // write_string_to! fd create_string(args)
  var_write_string_to, 2, LOCAL(2), LOCAL(1), IO_TAIL_CALL,
  POS(173, 23),
  POS(173, 3)
};

static TAB_NUM t_func_std__print_to[] = {
  4, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 195_0_fd
  REST_PARAMETER, LOCAL(4), // 196_0_args
  // create_string(args).to_utf8
  var_create_string, 1, LOCAL(4), 1, LOCAL(1),
  // to_utf8
  var_to_utf8, 1, LOCAL(1), 1, LOCAL(2),
  // write_string_to! fd create_string(args).to_utf8
  var_write_string_to, 2, LOCAL(3), LOCAL(2), IO_TAIL_CALL,
  POS(198, 23),
  POS(198, 43),
  POS(198, 3)
};

static TAB_NUM t_func_std__print_string[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 214_0_str
  // to_utf8
  var_to_utf8, 1, LOCAL(2), 1, LOCAL(1),
  // write_string_to! STDOUT_FILENO str.to_utf8
  var_write_string_to, 2, var_STDOUT_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(216, 38),
  POS(216, 3)
};

static TAB_NUM t_func_std__print[] = {
  2, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(2), // 238_0_args
  // create_string(args)
  var_create_string, 1, LOCAL(2), 1, LOCAL(1),
  // print_string! create_string(args)
  var_print_string, 1, LOCAL(1), IO_TAIL_CALL,
  POS(240, 17),
  POS(240, 3)
};

static TAB_NUM t_func_std__println[] = {
  3, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(3), // 258_0_args
  // create_string(args) '@nl;')
  var_create_string, 1, LOCAL(3), 1, LOCAL(1),
  // push(create_string(args) '@nl;')
  var_push, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // print_string! push(create_string(args) '@nl;')
  var_print_string, 1, LOCAL(2), IO_TAIL_CALL,
  POS(260, 22),
  POS(260, 17),
  POS(260, 3)
};

static TAB_NUM t_func_std__eprint_string[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 276_0_str
  // to_utf8
  var_to_utf8, 1, LOCAL(2), 1, LOCAL(1),
  // write_string_to! STDERR_FILENO str.to_utf8
  var_write_string_to, 2, var_STDERR_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(278, 38),
  POS(278, 3)
};

static TAB_NUM t_func_std__eprint[] = {
  2, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(2), // 296_0_args
  // create_string(args)
  var_create_string, 1, LOCAL(2), 1, LOCAL(1),
  // eprint_string! create_string(args)
  var_eprint_string, 1, LOCAL(1), IO_TAIL_CALL,
  POS(298, 18),
  POS(298, 3)
};

static TAB_NUM t_func_std__eprintln[] = {
  3, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(3), // 316_0_args
  // create_string(args) '@nl;')
  var_create_string, 1, LOCAL(3), 1, LOCAL(1),
  // push(create_string(args) '@nl;')
  var_push, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // eprint_string! push(create_string(args) '@nl;')
  var_eprint_string, 1, LOCAL(2), IO_TAIL_CALL,
  POS(318, 23),
  POS(318, 18),
  POS(318, 3)
};

static TAB_NUM t_func_std__readln[] = {
  0, // locals
  0, // parameters
  // $line_buf ""
  LET, 1, string_1, 1, var_336_1_line_buf,
  // loop:
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(336, 3),
  POS(337, 3)
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // read! STDIN_FILENO 1 $buf
  var_read, 2, var_STDIN_FILENO, num_1, IO_CALL(1), var_338_22_buf,
  // is_undefined
  var_is_undefined, 1, var_338_22_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_5, lambda_6, IO_TAIL_CALL,
  POS(338, 5),
  POS(340, 11),
  POS(339, 5)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  buf # return the error object
  LET, 1, var_338_22_buf, TAIL_CALL,
  POS(341, 9)
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // buf == "@nl;"
  var_std__equal, 2, var_338_22_buf, string_2, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_7, lambda_8, IO_TAIL_CALL,
  POS(344, 11),
  POS(343, 9)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  // -> line_buf
  LET, 1, var_336_1_line_buf, TAIL_CALL,
  POS(346, 13)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  // append &line_buf buf
  var_append, 2, var_336_1_line_buf, var_338_22_buf, 1, var_336_1_line_buf,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(348, 13),
  POS(349, 13)
};

static TAB_NUM t_func_std__read_all_from[] = {
  0, // locals
  1, // parameters
  var_367_0_fh,
  // $already_read_data ""
  LET, 1, string_1, 1, var_369_1_already_read_data,
  // loop:
  var_loop, 1, lambda_2_loop, IO_TAIL_CALL,
  POS(369, 3),
  POS(370, 3)
};

static TAB_NUM t_lambda_2_loop[] = {
  1, // locals
  0, // parameters
  // read! $next_data fh 0x1000
  var_read, 2, var_367_0_fh, num_4096, IO_CALL(1), var_371_7_next_data,
  // is_an_error
  var_is_an_error, 1, var_371_7_next_data, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_9, lambda_10, IO_TAIL_CALL,
  POS(371, 5),
  POS(373, 17),
  POS(372, 5)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  next_data
  LET, 1, var_371_7_next_data, TAIL_CALL,
  POS(374, 9)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_371_7_next_data, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_11, lambda_12, IO_TAIL_CALL,
  POS(377, 21),
  POS(376, 9)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  already_read_data
  LET, 1, var_369_1_already_read_data, TAIL_CALL,
  POS(378, 13)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  // append &already_read_data next_data
  var_append, 2, var_369_1_already_read_data, var_371_7_next_data, 1, var_369_1_already_read_data,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(380, 13),
  POS(381, 13)
};

static TAB_NUM t_func_std_types__string___load[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 397_0_filename
  // open! $fd filename "r"
  var_open, 2, LOCAL(1), str_r, IO_CALL(1), LOCAL(2),
  // check fd
  var_check, 1, LOCAL(2), 0,
  // load! fd
  var_load, 1, LOCAL(2), IO_TAIL_CALL,
  POS(399, 3),
  POS(400, 3),
  POS(401, 3)
};

static TAB_NUM t_func_std_types__file_descriptor___load[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 417_0_fd
  // read_all_from! $data fd
  var_read_all_from, 1, LOCAL(1), IO_CALL(1), LOCAL(2),
  // check data
  var_check, 1, LOCAL(2), 0,
  // close! fd
  var_close, 1, LOCAL(1), IO_CALL(0),
  // -> data
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(419, 3),
  POS(420, 3),
  POS(421, 3),
  POS(422, 3)
};

static TAB_NUM t_func_std_types__string___save[] = {
  3, // locals
  2, // parameters
  LOCAL(1), // 442_0_filename
  LOCAL(2), // 443_0_data
  // open! $fh filename "w+"
  var_open, 2, LOCAL(1), str_w, IO_CALL(1), LOCAL(3),
  // check fh
  var_check, 1, LOCAL(3), 0,
  // write_all_to! fh data
  var_write_all_to, 2, LOCAL(3), LOCAL(2), IO_CALL(0),
  // close! fh
  var_close, 1, LOCAL(3), IO_TAIL_CALL,
  POS(445, 3),
  POS(446, 3),
  POS(447, 3),
  POS(448, 3)
};

static TAB_NUM t_func_std__try[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 459_0_body
  // body!
  LOCAL(1), 0, IO_CALL(0),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(461, 3),
  POS(462, 3)
};

static TAB_NUM t_func_std__check[] = {
  1, // locals
  1, // parameters
  var_478_0_argument,
  // is_an_error
  var_is_an_error, 1, var_478_0_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_13, var_pass, TAIL_CALL,
  POS(481, 14),
  POS(480, 3)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  argument
  LET, 1, var_478_0_argument, TAIL_CALL,
  POS(482, 7)
};

static TAB_NUM t_func_std__file_exists[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 497_0_filename
  // stat! $info filename
  var_stat, 1, LOCAL(3), IO_CALL(1), LOCAL(4),
  // is_an_error)
  var_is_an_error, 1, LOCAL(4), 1, LOCAL(1),
  // not(info.is_an_error)
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // -> not(info.is_an_error)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(499, 3),
  POS(500, 15),
  POS(500, 6),
  POS(500, 3)
};

static TAB_NUM t_func_std__directory[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 519_0_pathname
  // $entries empty_list
  LET, 1, var_empty_list, 1, var_521_1_entries,
  // opendir! $dir pathname
  var_opendir, 1, LOCAL(1), IO_CALL(1), var_522_10_dir,
  // loop:
  var_loop, 1, lambda_3_loop, IO_TAIL_CALL,
  POS(521, 3),
  POS(522, 3),
  POS(523, 3)
};

static TAB_NUM t_lambda_3_loop[] = {
  1, // locals
  0, // parameters
  // readdir! $entry dir
  var_readdir, 1, var_522_10_dir, IO_CALL(1), var_524_10_entry,
  // is_an_error:
  var_is_an_error, 1, var_524_10_entry, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_entry_is_an_error, lambda_14, IO_TAIL_CALL,
  POS(524, 5),
  POS(526, 13),
  POS(525, 5)
};

static TAB_NUM t_lambda_entry_is_an_error[] = {
  0, // locals
  0, // parameters
  // closedir! dir
  var_closedir, 1, var_522_10_dir, IO_CALL(0),
  // -> entries
  LET, 1, var_521_1_entries, TAIL_CALL,
  POS(527, 9),
  POS(528, 9)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  // push &entries entry
  var_push, 2, var_521_1_entries, var_524_10_entry, 1, var_521_1_entries,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(530, 9),
  POS(531, 9)
};

static TAB_NUM t_func_std_types__stat___access_time_of[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 541_0_self
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
  POS(545, 7),
  POS(546, 7),
  POS(546, 7),
  POS(544, 6),
  POS(543, 3)
};

static TAB_NUM t_func_std_types__stat___modification_time_of[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 548_40_self
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
  POS(557, 7),
  POS(558, 7),
  POS(558, 7),
  POS(556, 6),
  POS(555, 3)
};

static TAB_NUM t_func_std_types__stat___status_change_time_of[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 560_41_self
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
  POS(569, 7),
  POS(570, 7),
  POS(570, 7),
  POS(568, 6),
  POS(567, 3)
};

static TAB_NUM t_func_std_types__stat___is_a_directory[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 572_34_self
  // mode_of(self)(1) == 'd'
  var_mode_of, 1, LOCAL(4), 1, LOCAL(1),
  // mode_of(self)(1) == 'd'
  LOCAL(1), 1, num_1, 1, LOCAL(2),
  // mode_of(self)(1) == 'd'
  var_std__equal, 2, LOCAL(2), chr_100, 1, LOCAL(3),
  // -> mode_of(self)(1) == 'd'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(579, 6),
  POS(579, 6),
  POS(579, 6),
  POS(579, 3)
};

static TAB_NUM t_func_std__call[] = {
  6, // locals
  2, // parameters
  LOCAL(3), // 591_0_cmd
  LOCAL(4), // 592_0_args
  // result_count() >= 2)
  var_result_count, 0, 1, LOCAL(1),
  // result_count() >= 2)
  var_std__less, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // $do_collect_output (result_count() >= 2)
  var_std__not, 1, LOCAL(2), 1, var_594_1_do_collect_output,
  // result_count() == 3)
  var_result_count, 0, 1, LOCAL(1),
  // $do_collect_error_output (result_count() == 3)
  var_std__equal, 2, LOCAL(1), num_3, 1, var_595_1_do_collect_error_output,
  // $env_vars undefined
  LET, 1, var_undefined, 1, var_596_1_env_vars,
  // is_defined &env_vars:
  var_is_defined, 1, var_environment, 1, LOCAL(1),
  // update_if environment.is_defined &env_vars:
  var_update_if, 3, LOCAL(1), var_596_1_env_vars, lambda_15, 1, var_596_1_env_vars,
  // create_process! $pid $in_fd $out_fd $err_fd cmd args env_vars
  var_create_process, 3, LOCAL(3), LOCAL(4), var_596_1_env_vars, IO_CALL(4), LOCAL(5), LOCAL(6), var_604_29_out_fd, var_604_37_err_fd,
  // close! in_fd
  var_close, 1, LOCAL(6), IO_CALL(0),
  // $io std_types::io
  LET, 1, var_std_types__io, 1, var_606_1_io,
  // join_process &io pid
  var_join_process, 2, var_606_1_io, LOCAL(5), 1, var_606_1_io,
  // start_reading_from &io out_fd
  var_start_reading_from, 2, var_606_1_io, var_604_29_out_fd, 1, var_606_1_io,
  // start_reading_from &io err_fd
  var_start_reading_from, 2, var_606_1_io, var_604_37_err_fd, 1, var_606_1_io,
  // $out ""
  LET, 1, string_1, 1, var_611_1_out,
  // $err ""
  LET, 1, string_1, 1, var_612_1_err,
  // loop:
  var_loop, 1, lambda_4_loop, IO_TAIL_CALL,
  POS(594, 23),
  POS(594, 23),
  POS(594, 3),
  POS(595, 29),
  POS(595, 3),
  POS(596, 3),
  POS(597, 25),
  POS(597, 3),
  POS(604, 3),
  POS(605, 3),
  POS(606, 3),
  POS(607, 3),
  POS(608, 3),
  POS(609, 3),
  POS(611, 3),
  POS(612, 3),
  POS(613, 3)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  // !env_vars empty_list
  LET, 1, var_empty_list, 1, var_596_1_env_vars,
  // for_each environment
  var_for_each, 3, var_environment, lambda_16, lambda_17, TAIL_CALL,
  POS(598, 5),
  POS(599, 5)
};

static TAB_NUM t_lambda_16[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 600_3_key
  LOCAL(3), // 600_7_value
  // "@(key)=@(value)"
  var_std__string, 3, LOCAL(2), string_3, LOCAL(3), 1, LOCAL(1),
  // push &env_vars "@(key)=@(value)"
  var_push, 2, var_596_1_env_vars, LOCAL(1), 1, var_596_1_env_vars,
  // next
  var_next, 0, TAIL_CALL,
  POS(601, 24),
  POS(601, 9),
  POS(602, 9)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  env_vars
  LET, 1, var_596_1_env_vars, TAIL_CALL,
  POS(603, 9)
};

static TAB_NUM t_lambda_4_loop[] = {
  1, // locals
  0, // parameters
  // get_events! &io $events
  var_get_events, 1, var_606_1_io, IO_CALL(2), var_606_1_io, LOCAL(1),
  // for_each events: (event)
  var_for_each, 2, LOCAL(1), lambda_18, IO_TAIL_CALL,
  POS(614, 5),
  POS(615, 5)
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 615_18_event
  // event $type $fd $data
  LOCAL(1), 0, 3, LOCAL(2), var_616_13_fd, var_616_17_data,
  // case type
  var_case, 6, LOCAL(2), var_READ, lambda_READ, var_PROCESS_JOINED, lambda_PROCESS_JOINED, lambda_27, IO_TAIL_CALL,
  POS(616, 7),
  POS(617, 7)
};

static TAB_NUM t_lambda_READ[] = {
  1, // locals
  0, // parameters
  // data == "":
  var_std__equal, 2, var_616_17_data, string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_19, lambda_20, IO_TAIL_CALL,
  POS(620, 13),
  POS(619, 11)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_616_13_fd, IO_CALL(0),
  // stop_reading_from &io fd
  var_stop_reading_from, 2, var_606_1_io, var_616_13_fd, 1, var_606_1_io,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(621, 15),
  POS(622, 15),
  POS(623, 15)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  // case fd
  var_case, 6, var_616_13_fd, var_604_29_out_fd, lambda_out_fd, var_604_37_err_fd, lambda_err_fd, lambda_23, IO_TAIL_CALL,
  POS(625, 15)
};

static TAB_NUM t_lambda_out_fd[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_594_1_do_collect_output, lambda_do_collect_output, lambda_21, IO_TAIL_CALL,
  POS(627, 19)
};

static TAB_NUM t_lambda_do_collect_output[] = {
  0, // locals
  0, // parameters
  // append &out data
  var_append, 2, var_611_1_out, var_616_17_data, 1, var_611_1_out,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(629, 23),
  POS(630, 23)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  // write_all_to! STDOUT_FILENO data
  var_write_all_to, 2, var_STDOUT_FILENO, var_616_17_data, IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(632, 23),
  POS(633, 23)
};

static TAB_NUM t_lambda_err_fd[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_595_1_do_collect_error_output, lambda_do_collect_error_output, lambda_22, IO_TAIL_CALL,
  POS(635, 19)
};

static TAB_NUM t_lambda_do_collect_error_output[] = {
  0, // locals
  0, // parameters
  // append &err data
  var_append, 2, var_612_1_err, var_616_17_data, 1, var_612_1_err,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(637, 23),
  POS(638, 23)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  // write_all_to! STDERR_FILENO data
  var_write_all_to, 2, var_STDERR_FILENO, var_616_17_data, IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(640, 23),
  POS(641, 23)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(643, 19)
};

static TAB_NUM t_lambda_PROCESS_JOINED[] = {
  0, // locals
  0, // parameters
  // $ret data
  LET, 1, var_616_17_data, 1, var_645_1_ret,
  // if
  var_if, 3, var_594_1_do_collect_output, lambda_2_do_collect_output, lambda_26, TAIL_CALL,
  POS(645, 11),
  POS(646, 11)
};

static TAB_NUM t_lambda_2_do_collect_output[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_595_1_do_collect_error_output, lambda_24, lambda_25, TAIL_CALL,
  POS(648, 15)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  //  ret out err
  LET, 3, var_645_1_ret, var_611_1_out, var_612_1_err, TAIL_CALL,
  POS(650, 19)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  //  ret out
  LET, 2, var_645_1_ret, var_611_1_out, TAIL_CALL,
  POS(651, 19)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  //  ret
  LET, 1, var_645_1_ret, TAIL_CALL,
  POS(652, 15)
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(654, 11)
};

static TAB_NUM t_func_std__terminate[] = {
  0, // locals
  0, // parameters
  // exit! EXIT_SUCCESS
  var_exit, 1, var_EXIT_SUCCESS, IO_TAIL_CALL,
  POS(666, 3)
};

static TAB_NUM t_func_std_types__file_descriptor___serialize[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 688_0_self
  var_undefined, var_689_0_indent,
  // to_integer)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(1),
  // $str "
  var_std__string, 3, str_file_descriptor_2, LOCAL(1), string_2, 1, var_691_1_str,
  // is_defined
  var_is_defined, 1, var_689_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_28, lambda_29, TAIL_CALL,
  POS(692, 28),
  POS(691, 3),
  POS(694, 12),
  POS(693, 3)
};

static TAB_NUM t_lambda_28[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_689_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_691_1_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(695, 15),
  POS(695, 8),
  POS(695, 7)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_691_1_str, TAIL_CALL,
  POS(696, 7)
};

static TAB_NUM t_func_std_types__file_descriptor___deserializer_of[] = {
  3, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(3), // 703_0_argument
  // integer(argument))
  var_integer, 1, LOCAL(3), 1, LOCAL(1),
  // file_descriptor(integer(argument))
  var_file_descriptor, 1, LOCAL(1), 1, LOCAL(2),
  // -> file_descriptor(integer(argument))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(705, 22),
  POS(705, 6),
  POS(705, 3)
};

static TAB_NUM t_func_std_types__process_id___serialize[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 727_0_self
  var_undefined, var_728_0_indent,
  // to_integer)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(1),
  // $str "
  var_std__string, 3, str_process_id_2, LOCAL(1), string_2, 1, var_730_1_str,
  // is_defined
  var_is_defined, 1, var_728_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_30, lambda_31, TAIL_CALL,
  POS(731, 23),
  POS(730, 3),
  POS(733, 12),
  POS(732, 3)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_728_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_730_1_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(734, 15),
  POS(734, 8),
  POS(734, 7)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_730_1_str, TAIL_CALL,
  POS(735, 7)
};

static TAB_NUM t_func_std_types__process_id___deserializer_of[] = {
  3, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(3), // 742_0_argument
  // integer(argument))
  var_integer, 1, LOCAL(3), 1, LOCAL(1),
  // process_id(integer(argument))
  var_process_id, 1, LOCAL(1), 1, LOCAL(2),
  // -> process_id(integer(argument))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(744, 17),
  POS(744, 6),
  POS(744, 3)
};

static TAB_NUM t_func_extern_call[] = {
  5, // locals
  -2, // parameters
  MYSELF_PARAMETER, LOCAL(4), // 754_0_myself
  REST_PARAMETER, LOCAL(5), // 755_0_arguments
  // command_of(myself) map(flatten(arguments) to_string)
  var_command_of, 1, LOCAL(4), 1, LOCAL(1),
  // flatten(arguments) to_string)
  var_flatten, 1, LOCAL(5), 1, LOCAL(2),
  // map(flatten(arguments) to_string)
  var_map, 2, LOCAL(2), var_to_string, 1, LOCAL(3),
  // call! command_of(myself) map(flatten(arguments) to_string)
  var_call, 2, LOCAL(1), LOCAL(3), IO_TAIL_CALL,
  POS(757, 9),
  POS(757, 32),
  POS(757, 28),
  POS(757, 3)
};

static TAB_NUM t_func_std__pipe[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, var_759_13_args,
  // $i 1
  LET, 1, num_1, 1, var_760_1_i,
  // $n length_of(args)
  var_length_of, 1, var_759_13_args, 1, var_761_1_n,
  // $in_fd undefined
  LET, 1, var_undefined, 1, var_762_1_in_fd,
  // $feed undefined
  LET, 1, var_undefined, 1, var_763_1_feed,
  // $commands empty_list
  LET, 1, var_empty_list, 1, var_764_1_commands,
  // $head undefined
  LET, 1, var_undefined, 1, var_765_1_head,
  // $arguments undefined
  LET, 1, var_undefined, 1, var_766_1_arguments,
  // $first_arg args(1)
  var_759_13_args, 1, num_1, 1, var_767_1_first_arg,
  // is_a_string:
  var_is_a_string, 1, var_767_1_first_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_first_arg_is_a_string, lambda_32, IO_TAIL_CALL,
  POS(760, 3),
  POS(761, 3),
  POS(762, 3),
  POS(763, 3),
  POS(764, 3),
  POS(765, 3),
  POS(766, 3),
  POS(767, 3),
  POS(769, 15),
  POS(768, 3)
};

static TAB_NUM t_lambda_first_arg_is_a_string[] = {
  0, // locals
  0, // parameters
  // !feed first_arg
  LET, 1, var_767_1_first_arg, 1, var_763_1_feed,
  // !i 2
  LET, 1, num_2, 1, var_760_1_i,
  // build_commands!
  func_build_commands, 0, IO_TAIL_CALL,
  POS(770, 7),
  POS(771, 7),
  POS(772, 7)
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // is_a_file_descriptor:
  var_is_a_file_descriptor, 1, var_767_1_first_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_first_arg_is_a_file_descriptor, func_build_commands, IO_TAIL_CALL,
  POS(775, 19),
  POS(774, 7)
};

static TAB_NUM t_lambda_first_arg_is_a_file_descriptor[] = {
  0, // locals
  0, // parameters
  // !in_fd first_arg
  LET, 1, var_767_1_first_arg, 1, var_762_1_in_fd,
  // !i 2
  LET, 1, num_2, 1, var_760_1_i,
  // build_commands!
  func_build_commands, 0, IO_TAIL_CALL,
  POS(776, 11),
  POS(777, 11),
  POS(778, 11)
};

static TAB_NUM t_func_build_commands[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_33, lambda_37, IO_TAIL_CALL,
  POS(782, 5)
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // n break
  var_std__less, 2, var_761_1_n, var_760_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_34, IO_TAIL_CALL,
  POS(785, 15),
  POS(784, 9)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // $arg args(i)
  var_759_13_args, 1, var_760_1_i, 1, var_787_1_arg,
  // is_a_function:
  var_is_a_function, 1, var_787_1_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_arg_is_a_function, lambda_36, IO_TAIL_CALL,
  POS(787, 13),
  POS(789, 19),
  POS(788, 13)
};

static TAB_NUM t_lambda_arg_is_a_function[] = {
  1, // locals
  0, // parameters
  // is_defined &commands:
  var_is_defined, 1, var_765_1_head, 1, LOCAL(1),
  // update_if head.is_defined &commands:
  var_update_if, 3, LOCAL(1), var_764_1_commands, lambda_35, 1, var_764_1_commands,
  // !head command_of(arg)
  var_command_of, 1, var_787_1_arg, 1, var_765_1_head,
  // !arguments empty_list
  LET, 1, var_empty_list, 1, var_766_1_arguments,
  // inc &i
  var_inc, 1, var_760_1_i, 1, var_760_1_i,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(790, 32),
  POS(790, 17),
  POS(792, 17),
  POS(793, 17),
  POS(794, 17),
  POS(795, 17)
};

static TAB_NUM t_lambda_35[] = {
  3, // locals
  0, // parameters
  // flatten(arguments) to_string))
  var_flatten, 1, var_766_1_arguments, 1, LOCAL(1),
  // map(flatten(arguments) to_string))
  var_map, 2, LOCAL(1), var_to_string, 1, LOCAL(2),
  // tuple(head map(flatten(arguments) to_string))
  var_tuple, 2, var_765_1_head, LOCAL(2), 1, LOCAL(3),
  // push commands tuple(head map(flatten(arguments) to_string))
  var_push, 2, var_764_1_commands, LOCAL(3), TAIL_CALL,
  POS(791, 48),
  POS(791, 44),
  POS(791, 33),
  POS(791, 19)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  // push &arguments arg
  var_push, 2, var_766_1_arguments, var_787_1_arg, 1, var_766_1_arguments,
  // inc &i
  var_inc, 1, var_760_1_i, 1, var_760_1_i,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(797, 17),
  POS(798, 17),
  POS(799, 17)
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // is_defined &commands:
  var_is_defined, 1, var_765_1_head, 1, LOCAL(1),
  // update_if head.is_defined &commands:
  var_update_if, 3, LOCAL(1), var_764_1_commands, lambda_38, 1, var_764_1_commands,
  // run_pipe! in_fd feed commands
  func_run_pipe, 3, var_762_1_in_fd, var_763_1_feed, var_764_1_commands, IO_TAIL_CALL,
  POS(801, 24),
  POS(801, 9),
  POS(803, 9)
};

static TAB_NUM t_lambda_38[] = {
  3, // locals
  0, // parameters
  // flatten(arguments) to_string))
  var_flatten, 1, var_766_1_arguments, 1, LOCAL(1),
  // map(flatten(arguments) to_string))
  var_map, 2, LOCAL(1), var_to_string, 1, LOCAL(2),
  // tuple(head map(flatten(arguments) to_string))
  var_tuple, 2, var_765_1_head, LOCAL(2), 1, LOCAL(3),
  // push commands tuple(head map(flatten(arguments) to_string))
  var_push, 2, var_764_1_commands, LOCAL(3), TAIL_CALL,
  POS(802, 40),
  POS(802, 36),
  POS(802, 25),
  POS(802, 11)
};

static TAB_NUM t_func_std__pipe_commands[] = {
  1, // locals
  -2, // parameters
  var_undefined, var_807_0_feed_or_fd,
  MANDATORY_PARAMETER, var_808_0_commands,
  // is_defined:
  var_is_defined, 1, var_807_0_feed_or_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_feed_or_fd_is_defined, lambda_40, IO_TAIL_CALL,
  POS(811, 16),
  POS(810, 3)
};

static TAB_NUM t_lambda_feed_or_fd_is_defined[] = {
  1, // locals
  0, // parameters
  // is_a_file_descriptor:
  var_is_a_file_descriptor, 1, var_807_0_feed_or_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_feed_or_fd_is_a_file_descriptor, lambda_39, IO_TAIL_CALL,
  POS(813, 20),
  POS(812, 7)
};

static TAB_NUM t_lambda_feed_or_fd_is_a_file_descriptor[] = {
  0, // locals
  0, // parameters
  // run_pipe! feed_or_fd undefined commands
  func_run_pipe, 3, var_807_0_feed_or_fd, var_undefined, var_808_0_commands, IO_TAIL_CALL,
  POS(814, 11)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  // run_pipe! undefined feed_or_fd commands
  func_run_pipe, 3, var_undefined, var_807_0_feed_or_fd, var_808_0_commands, IO_TAIL_CALL,
  POS(816, 11)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  // run_pipe! undefined undefined commands
  func_run_pipe, 3, var_undefined, var_undefined, var_808_0_commands, IO_TAIL_CALL,
  POS(818, 7)
};

static TAB_NUM t_func_run_pipe[] = {
  1, // locals
  3, // parameters
  var_822_0_in_fd,
  var_823_0_feed,
  var_824_0_commands,
  // $pids empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_826_1_pids,
  // $err_fds empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_827_1_err_fds,
  // $out_fd in_fd
  LET, 1, var_822_0_in_fd, 1, var_828_1_out_fd,
  // $env_vars undefined
  LET, 1, var_undefined, 1, var_829_1_env_vars,
  // is_defined &env_vars:
  var_is_defined, 1, var_environment, 1, LOCAL(1),
  // update_if environment.is_defined &env_vars:
  var_update_if, 3, LOCAL(1), var_829_1_env_vars, lambda_41, 1, var_829_1_env_vars,
  // for_each commands
  var_for_each, 3, var_824_0_commands, lambda_44, lambda_48, IO_TAIL_CALL,
  POS(826, 3),
  POS(827, 3),
  POS(828, 3),
  POS(829, 3),
  POS(830, 25),
  POS(830, 3),
  POS(837, 3)
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  // !env_vars empty_list
  LET, 1, var_empty_list, 1, var_829_1_env_vars,
  // for_each environment
  var_for_each, 3, var_environment, lambda_42, lambda_43, TAIL_CALL,
  POS(831, 5),
  POS(832, 5)
};

static TAB_NUM t_lambda_42[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 833_3_key
  LOCAL(3), // 833_7_value
  // "@(key)=@(value)"
  var_std__string, 3, LOCAL(2), string_3, LOCAL(3), 1, LOCAL(1),
  // push &env_vars "@(key)=@(value)"
  var_push, 2, var_829_1_env_vars, LOCAL(1), 1, var_829_1_env_vars,
  // next
  var_next, 0, TAIL_CALL,
  POS(834, 24),
  POS(834, 9),
  POS(835, 9)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  //  env_vars
  LET, 1, var_829_1_env_vars, TAIL_CALL,
  POS(836, 9)
};

static TAB_NUM t_lambda_44[] = {
  3, // locals
  2, // parameters
  var_838_3_idx,
  LOCAL(3), // 838_7_command
  // command $head $arguments
  LOCAL(3), 0, 2, var_839_9_head, var_839_15_arguments,
  // map &arguments to_utf8
  var_map, 2, var_839_15_arguments, var_to_utf8, 1, var_839_15_arguments,
  // $pid undefined
  LET, 1, var_undefined, 1, var_841_1_pid,
  // $err_fd undefined
  LET, 1, var_undefined, 1, var_842_1_err_fd,
  // idx == 1 && in_fd.is_undefined:
  var_std__equal, 2, var_838_3_idx, num_1, 1, LOCAL(1),
  // idx == 1 && in_fd.is_undefined:
  var_std__and, 2, LOCAL(1), lambda_45, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_46, lambda_47, IO_TAIL_CALL,
  POS(839, 7),
  POS(840, 7),
  POS(841, 7),
  POS(842, 7),
  POS(844, 9),
  POS(844, 9),
  POS(843, 7)
};

static TAB_NUM t_lambda_45[] = {
  1, // locals
  0, // parameters
  // is_undefined:
  var_is_undefined, 1, var_822_0_in_fd, 1, LOCAL(1),
  // in_fd.is_undefined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(844, 27),
  POS(844, 21)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  // create_process! !pid !in_fd !out_fd !err_fd head arguments env_vars
  var_create_process, 3, var_839_9_head, var_839_15_arguments, var_829_1_env_vars, IO_CALL(4), var_841_1_pid, var_822_0_in_fd, var_828_1_out_fd, var_842_1_err_fd,
  // store_pid_and_err_fd!
  func_store_pid_and_err_fd, 0, IO_TAIL_CALL,
  POS(845, 11),
  POS(846, 11)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  // create_process! !pid !out_fd !err_fd head arguments env_vars out_fd
  var_create_process, 4, var_839_9_head, var_839_15_arguments, var_829_1_env_vars, var_828_1_out_fd, IO_CALL(3), var_841_1_pid, var_828_1_out_fd, var_842_1_err_fd,
  // store_pid_and_err_fd!
  func_store_pid_and_err_fd, 0, IO_TAIL_CALL,
  POS(848, 11),
  POS(849, 11)
};

static TAB_NUM t_func_store_pid_and_err_fd[] = {
  0, // locals
  0, // parameters
  // pids(pid) idx
  var_826_1_pids, 2, var_841_1_pid, var_838_3_idx, 1, var_826_1_pids,
  // err_fds(err_fd) idx
  var_827_1_err_fds, 2, var_842_1_err_fd, var_838_3_idx, 1, var_827_1_err_fds,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(852, 10),
  POS(853, 10),
  POS(854, 9)
};

static TAB_NUM t_lambda_48[] = {
  2, // locals
  0, // parameters
  // list(undefined) length_of(commands))
  var_list, 1, var_undefined, 1, LOCAL(1),
  // length_of(commands))
  var_length_of, 1, var_824_0_commands, 1, LOCAL(2),
  // $ret dup(list(undefined) length_of(commands))
  var_dup, 2, LOCAL(1), LOCAL(2), 1, var_856_1_ret,
  // $out ""
  LET, 1, string_1, 1, var_857_1_out,
  // length_of(commands))
  var_length_of, 1, var_824_0_commands, 1, LOCAL(2),
  // $err dup(list("") length_of(commands))
  var_dup, 2, list_858_9, LOCAL(2), 1, var_858_1_err,
  // is_defined
  var_is_defined, 1, var_823_0_feed, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_manage_io, lambda_49, IO_TAIL_CALL,
  POS(856, 16),
  POS(856, 32),
  POS(856, 7),
  POS(857, 7),
  POS(858, 25),
  POS(858, 7),
  POS(860, 14),
  POS(859, 7)
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  // close! in_fd
  var_close, 1, var_822_0_in_fd, IO_CALL(0),
  // !in_fd undefined
  LET, 1, var_undefined, 1, var_822_0_in_fd,
  // manage_io!
  func_manage_io, 0, IO_TAIL_CALL,
  POS(863, 11),
  POS(864, 11),
  POS(865, 11)
};

static TAB_NUM t_func_manage_io[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_5_loop, IO_TAIL_CALL,
  POS(868, 9)
};

static TAB_NUM t_lambda_5_loop[] = {
  3, // locals
  0, // parameters
  // $read_descriptor_list keys_of(err_fds)
  var_keys_of, 1, var_827_1_err_fds, 1, var_869_1_read_descriptor_list,
  // is_defined
  var_is_defined, 1, var_822_0_in_fd, 1, LOCAL(1),
  // $write_descriptor_list
  var_if, 3, LOCAL(1), lambda_50, lambda_51, 1, LOCAL(2),
  // is_defined &read_descriptor_list:
  var_is_defined, 1, var_828_1_out_fd, 1, LOCAL(1),
  // update_if out_fd.is_defined &read_descriptor_list:
  var_update_if, 3, LOCAL(1), var_869_1_read_descriptor_list, lambda_52, 1, var_869_1_read_descriptor_list,
  // pselect!
  var_pselect, 3, var_869_1_read_descriptor_list, LOCAL(2), var_empty_list, IO_CALL(4), LOCAL(3), var_879_1_read_descriptors, var_880_1_write_descriptors, LOCAL(1),
  // for_each signals
  var_for_each, 3, LOCAL(3), lambda_53, lambda_56, IO_TAIL_CALL,
  POS(869, 11),
  POS(872, 21),
  POS(870, 11),
  POS(875, 28),
  POS(875, 11),
  POS(877, 11),
  POS(882, 11)
};

static TAB_NUM t_lambda_50[] = {
  1, // locals
  0, // parameters
  // list(in_fd)
  var_list, 1, var_822_0_in_fd, 1, LOCAL(1),
  //  list(in_fd)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(873, 18),
  POS(873, 17)
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(874, 17)
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  // push read_descriptor_list out_fd
  var_push, 2, var_869_1_read_descriptor_list, var_828_1_out_fd, TAIL_CALL,
  POS(876, 13)
};

static TAB_NUM t_lambda_53[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 883_3_signal
  // signal == CHILD_CHANGED_STATE:
  var_std__equal, 2, LOCAL(2), var_CHILD_CHANGED_STATE, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_54, var_next, IO_TAIL_CALL,
  POS(885, 17),
  POS(884, 15)
};

static TAB_NUM t_lambda_54[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_55, var_next, IO_TAIL_CALL,
  POS(886, 19)
};

static TAB_NUM t_lambda_55[] = {
  1, // locals
  0, // parameters
  // wait2! $rpid $status
  var_wait2, 0, IO_CALL(2), var_888_8_rpid, var_888_14_status,
  // is_defined:
  var_is_defined, 1, var_888_8_rpid, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_rpid_is_defined, var_break, IO_TAIL_CALL,
  POS(888, 23),
  POS(890, 30),
  POS(889, 23)
};

static TAB_NUM t_lambda_rpid_is_defined[] = {
  2, // locals
  0, // parameters
  // pids(rpid)) status
  var_826_1_pids, 1, var_888_8_rpid, 1, LOCAL(2),
  // ret(pids(rpid)) status
  var_856_1_ret, 2, LOCAL(2), var_888_14_status, 1, var_856_1_ret,
  // pids(rpid) undefined
  var_826_1_pids, 2, var_888_8_rpid, var_undefined, 1, var_826_1_pids,
  // is_empty
  var_is_empty, 1, var_826_1_pids, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), var_break, var_next, IO_TAIL_CALL,
  POS(891, 32),
  POS(891, 28),
  POS(892, 28),
  POS(894, 34),
  POS(893, 27)
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  // for_each write_descriptors
  var_for_each, 3, var_880_1_write_descriptors, lambda_57, lambda_58, IO_TAIL_CALL,
  POS(901, 15)
};

static TAB_NUM t_lambda_57[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 902_3_write_descriptor
  // write! $bytes_written write_descriptor feed
  var_write, 2, LOCAL(2), var_823_0_feed, IO_CALL(1), LOCAL(3),
  // bytes_written+1 -1
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // range &feed bytes_written+1 -1
  var_range, 3, var_823_0_feed, LOCAL(1), minus_num_1, 1, var_823_0_feed,
  // is_empty:
  var_is_empty, 1, var_823_0_feed, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_feed_is_empty, var_next, IO_TAIL_CALL,
  POS(903, 19),
  POS(904, 31),
  POS(904, 19),
  POS(906, 26),
  POS(905, 19)
};

static TAB_NUM t_lambda_feed_is_empty[] = {
  0, // locals
  0, // parameters
  // close! in_fd
  var_close, 1, var_822_0_in_fd, IO_CALL(0),
  // !in_fd undefined
  LET, 1, var_undefined, 1, var_822_0_in_fd,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(907, 23),
  POS(908, 23),
  POS(909, 23)
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  0, // parameters
  // for_each read_descriptors
  var_for_each, 3, var_879_1_read_descriptors, lambda_59, lambda_65, IO_TAIL_CALL,
  POS(912, 19)
};

static TAB_NUM t_lambda_59[] = {
  1, // locals
  1, // parameters
  var_913_3_read_descriptor,
  // read! $buf read_descriptor 0x100000
  var_read, 2, var_913_3_read_descriptor, num_1048576, IO_CALL(1), var_914_7_buf,
  // is_empty: # closed from the other side
  var_is_empty, 1, var_914_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_empty, lambda_62, IO_TAIL_CALL,
  POS(914, 23),
  POS(916, 29),
  POS(915, 23)
};

static TAB_NUM t_lambda_buf_is_empty[] = {
  1, // locals
  0, // parameters
  // close! read_descriptor
  var_close, 1, var_913_3_read_descriptor, IO_CALL(0),
  // read_descriptor == out_fd:
  var_std__equal, 2, var_913_3_read_descriptor, var_828_1_out_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_60, lambda_61, IO_TAIL_CALL,
  POS(917, 27),
  POS(919, 29),
  POS(918, 27)
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  0, // parameters
  // !out_fd undefined
  LET, 1, var_undefined, 1, var_828_1_out_fd,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(920, 31),
  POS(921, 31)
};

static TAB_NUM t_lambda_61[] = {
  0, // locals
  0, // parameters
  // err_fds(read_descriptor) undefined
  var_827_1_err_fds, 2, var_913_3_read_descriptor, var_undefined, 1, var_827_1_err_fds,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(923, 32),
  POS(924, 31)
};

static TAB_NUM t_lambda_62[] = {
  1, // locals
  0, // parameters
  // read_descriptor == out_fd:
  var_std__equal, 2, var_913_3_read_descriptor, var_828_1_out_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_63, lambda_64, IO_TAIL_CALL,
  POS(927, 29),
  POS(926, 27)
};

static TAB_NUM t_lambda_63[] = {
  0, // locals
  0, // parameters
  // append &out buf
  var_append, 2, var_857_1_out, var_914_7_buf, 1, var_857_1_out,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(928, 31),
  POS(929, 31)
};

static TAB_NUM t_lambda_64[] = {
  2, // locals
  0, // parameters
  // err_fds(read_descriptor)) buf
  var_827_1_err_fds, 1, var_913_3_read_descriptor, 1, LOCAL(1),
  // err(err_fds(read_descriptor)) buf
  var_858_1_err, 1, LOCAL(1), 1, LOCAL(2),
  // append &err(err_fds(read_descriptor)) buf
  var_append, 2, LOCAL(2), var_914_7_buf, 1, LOCAL(2),
  // err(err_fds(read_descriptor)) buf
  var_858_1_err, 2, LOCAL(1), LOCAL(2), 1, var_858_1_err,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(931, 43),
  POS(931, 39),
  POS(931, 31),
  POS(931, 39),
  POS(932, 31)
};

static TAB_NUM t_lambda_65[] = {
  2, // locals
  0, // parameters
  // is_empty && out_fd.is_undefined && err_fds.is_empty
  var_is_empty, 1, var_826_1_pids, 1, LOCAL(1),
  // is_empty && out_fd.is_undefined && err_fds.is_empty
  var_std__and, 2, LOCAL(1), lambda_66, 1, LOCAL(2),
  // if!
  var_if, 3, LOCAL(2), lambda_68, var_next, IO_TAIL_CALL,
  POS(935, 30),
  POS(935, 30),
  POS(934, 23)
};

static TAB_NUM t_lambda_66[] = {
  2, // locals
  0, // parameters
  // is_undefined && err_fds.is_empty
  var_is_undefined, 1, var_828_1_out_fd, 1, LOCAL(1),
  // is_undefined && err_fds.is_empty
  var_std__and, 2, LOCAL(1), lambda_67, 1, LOCAL(2),
  // out_fd.is_undefined && err_fds.is_empty
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(935, 49),
  POS(935, 49),
  POS(935, 42)
};

static TAB_NUM t_lambda_67[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_827_1_err_fds, 1, LOCAL(1),
  // err_fds.is_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(935, 73),
  POS(935, 65)
};

static TAB_NUM t_lambda_68[] = {
  0, // locals
  0, // parameters
  //  ret out err
  LET, 3, var_856_1_ret, var_857_1_out, var_858_1_err, TAIL_CALL,
  POS(936, 27)
};

static TAB_NUM t_func_std__extern[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 943_0_command
  // .command_of command)
  LET, -1, func_extern_call, var_command_of, LOCAL(2), LOCAL(1),
  // -> extern_call(.command_of command)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(945, 18),
  POS(945, 3)
};

static int list_858_9_arguments[] = {
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__write_all_to}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__print_to}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__print_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__print}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__println}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__eprint_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__eprint}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__eprintln}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__readln}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__file_descriptor___load}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__pipe_commands}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_feed_or_fd_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_feed_or_fd_is_a_file_descriptor}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_run_pipe}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_store_pid_and_err_fd}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_LIST, 1, {.arguments = list_858_9_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_manage_io}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_rpid_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_feed_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x100000}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_buf_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
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
    {.position = POS(48, 1)}
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
    "106_0_duration\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(108, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(109, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(109, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "usleep\000", NULL,
    {.position = POS(109, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(110, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(108, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "write_string_to\000std", NULL,
    {.const_idx = -func_std__write_string_to}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "130_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "131_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "133_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(133, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "136_8_bytes_written\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write\000", NULL,
    {.position = POS(136, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(138, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(143, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(143, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(144, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(145, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(141, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(134, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "write_all_to\000std", NULL,
    {.const_idx = -func_std__write_all_to}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(173, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write_string_to\000", NULL,
    {.position = POS(173, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "print_to\000std", NULL,
    {.const_idx = -func_std__print_to}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(198, 43)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "print_string\000std", NULL,
    {.const_idx = -func_std__print_string}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDOUT_FILENO\000", NULL,
    {.position = POS(216, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "print\000std", NULL,
    {.const_idx = -func_std__print}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print_string\000", NULL,
    {.position = POS(240, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "println\000std", NULL,
    {.const_idx = -func_std__println}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(260, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "eprint_string\000std", NULL,
    {.const_idx = -func_std__eprint_string}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDERR_FILENO\000", NULL,
    {.position = POS(278, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "eprint\000std", NULL,
    {.const_idx = -func_std__eprint}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprint_string\000", NULL,
    {.position = POS(298, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "eprintln\000std", NULL,
    {.const_idx = -func_std__eprintln}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "readln\000std", NULL,
    {.const_idx = -func_std__readln}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "336_1_line_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDIN_FILENO\000", NULL,
    {.position = POS(338, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "338_22_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read\000", NULL,
    {.position = POS(338, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(340, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(344, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(348, 13)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "read_all_from\000std", NULL,
    {.const_idx = -func_std__read_all_from}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "367_0_fh\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "369_1_already_read_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "371_7_next_data\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(377, 21)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "string\000std_types", std_types__string__attributes,
    {.position = POS(383, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "load\000", NULL,
    {.position = POS(383, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open\000", NULL,
    {.position = POS(399, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "check\000", NULL,
    {.position = POS(400, 3)}
  },
  {
    FOT_UNKNOWN, 0, 5,
    "file_descriptor\000std_types", std_types__file_descriptor__attributes,
    {.position = POS(403, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read_all_from\000", NULL,
    {.position = POS(419, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "close\000", NULL,
    {.position = POS(421, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "save\000", NULL,
    {.position = POS(424, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write_all_to\000", NULL,
    {.position = POS(447, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "try\000std", NULL,
    {.const_idx = -func_std__try}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(462, 6)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "check\000std", NULL,
    {.const_idx = -func_std__check}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "478_0_argument\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "file_exists\000std", NULL,
    {.const_idx = -func_std__file_exists}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "stat\000", NULL,
    {.position = POS(499, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(500, 6)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "directory\000std", NULL,
    {.const_idx = -func_std__directory}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "521_1_entries\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(521, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "522_10_dir\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "opendir\000", NULL,
    {.position = POS(522, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "524_10_entry\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "readdir\000", NULL,
    {.position = POS(524, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "closedir\000", NULL,
    {.position = POS(527, 9)}
  },
  {
    FOT_UNKNOWN, 0, 4,
    "stat\000std_types", std_types__stat__attributes,
    {.position = POS(533, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "access_time_of\000", NULL,
    {.position = POS(533, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "access_time_seconds_of\000", NULL,
    {.position = POS(545, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "access_time_nanoseconds_of\000", NULL,
    {.position = POS(546, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "over\000std", NULL,
    {.position = POS(546, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "modification_time_of\000", NULL,
    {.position = POS(548, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "modification_time_seconds_of\000", NULL,
    {.position = POS(557, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "modification_time_nanoseconds_of\000", NULL,
    {.position = POS(558, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "status_change_time_of\000", NULL,
    {.position = POS(560, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "status_change_time_seconds_of\000", NULL,
    {.position = POS(569, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "status_change_time_nanoseconds_of\000", NULL,
    {.position = POS(570, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_directory\000", NULL,
    {.position = POS(572, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mode_of\000", NULL,
    {.position = POS(579, 6)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "call\000std", NULL,
    {.const_idx = -func_std__call}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(594, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "594_1_do_collect_output\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(594, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "595_1_do_collect_error_output\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "596_1_env_vars\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "environment\000", NULL,
    {.position = POS(597, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(597, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(601, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(599, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(597, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "604_29_out_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "604_37_err_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_process\000", NULL,
    {.position = POS(604, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "606_1_io\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "io\000std_types", NULL,
    {.position = POS(606, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "join_process\000", NULL,
    {.position = POS(607, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "start_reading_from\000", NULL,
    {.position = POS(608, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "611_1_out\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "612_1_err\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_events\000", NULL,
    {.position = POS(614, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "616_13_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "616_17_data\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ\000", NULL,
    {.position = POS(618, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "stop_reading_from\000", NULL,
    {.position = POS(622, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(625, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PROCESS_JOINED\000", NULL,
    {.position = POS(644, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "645_1_ret\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "terminate\000std", NULL,
    {.const_idx = -func_std__terminate}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXIT_SUCCESS\000", NULL,
    {.position = POS(666, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exit\000", NULL,
    {.position = POS(666, 3)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_file_descriptor\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(672, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_file_descriptor\000", NULL,
    {.position = POS(672, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(672, 41)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(676, 50)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(680, 29)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(684, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "689_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "691_1_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(695, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deserializer_of\000", NULL,
    {.position = POS(698, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "integer\000", NULL,
    {.position = POS(705, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "file_descriptor\000", NULL,
    {.position = POS(705, 6)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_process_id\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_process_id\000", NULL,
    {.position = POS(711, 20)}
  },
  {
    FOT_UNKNOWN, 0, 4,
    "process_id\000std_types", std_types__process_id__attributes,
    {.position = POS(715, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "728_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "730_1_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "process_id\000", NULL,
    {.position = POS(744, 6)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "command_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "flatten\000", NULL,
    {.position = POS(757, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_string\000", NULL,
    {.position = POS(757, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(757, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "call\000", NULL,
    {.position = POS(757, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pipe\000std", NULL,
    {.const_idx = -func_std__pipe}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "759_13_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "760_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "761_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "762_1_in_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "763_1_feed\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "764_1_commands\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "765_1_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "766_1_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "767_1_first_arg\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(769, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "787_1_arg\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_function\000", NULL,
    {.position = POS(789, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(791, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(794, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pipe_commands\000std", NULL,
    {.const_idx = -func_std__pipe_commands}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "807_0_feed_or_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "808_0_commands\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "822_0_in_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "823_0_feed\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "824_0_commands\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "826_1_pids\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(826, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "827_1_err_fds\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "828_1_out_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "829_1_env_vars\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "838_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "839_9_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "839_15_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "841_1_pid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "842_1_err_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(844, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(856, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "856_1_ret\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dup\000", NULL,
    {.position = POS(856, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "857_1_out\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "858_1_err\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "869_1_read_descriptor_list\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "keys_of\000", NULL,
    {.position = POS(869, 33)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "879_1_read_descriptors\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "880_1_write_descriptors\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pselect\000", NULL,
    {.position = POS(877, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CHILD_CHANGED_STATE\000", NULL,
    {.position = POS(885, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "888_8_rpid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "888_14_status\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "wait2\000", NULL,
    {.position = POS(888, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "913_3_read_descriptor\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "914_7_buf\000", NULL
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
  147, // number of constants
  199, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
