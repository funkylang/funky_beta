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
  lambda_out_fd = -86,
  lambda_do_collect_output = -87,
  lambda_32 = -88,
  lambda_err_fd = -89,
  lambda_do_collect_error_output = -90,
  lambda_33 = -91,
  lambda_34 = -92,
  lambda_PROCESS_JOINED = -93,
  lambda_2_do_collect_output = -94,
  lambda_35 = -95,
  lambda_36 = -96,
  lambda_37 = -97,
  lambda_38 = -98,
  func_std__terminate = -99,
  str_file_descriptor = -100,
  func_std_types__file_descriptor___serialize = -101,
  str_file_descriptor_2 = -102,
  string_3 = -103,
  lambda_39 = -104,
  lambda_40 = -105,
  func_std_types__file_descriptor___deserializer_of = -106,
  str_process_id = -107,
  func_std_types__process_id___serialize = -108,
  str_process_id_2 = -109,
  lambda_41 = -110,
  lambda_42 = -111,
  func_std_types__process_id___deserializer_of = -112,
  func_extern_call = -113,
  func_std__pipe = -114,
  lambda_first_arg_is_a_string = -115,
  lambda_43 = -116,
  lambda_first_arg_is_a_file_descriptor = -117,
  func_build_commands = -118,
  lambda_44 = -119,
  lambda_45 = -120,
  lambda_arg_is_a_function = -121,
  lambda_46 = -122,
  lambda_47 = -123,
  lambda_48 = -124,
  lambda_49 = -125,
  func_std__pipe_commands = -126,
  lambda_feed_or_fd_is_defined = -127,
  lambda_feed_or_fd_is_a_file_descriptor = -128,
  lambda_50 = -129,
  lambda_51 = -130,
  func_run_pipe = -131,
  lambda_52 = -132,
  lambda_53 = -133,
  lambda_54 = -134,
  lambda_55 = -135,
  lambda_56 = -136,
  lambda_57 = -137,
  lambda_58 = -138,
  func_store_pid_and_err_fd = -139,
  lambda_59 = -140,
  list_1205_9 = -141,
  lambda_60 = -142,
  func_manage_io = -143,
  lambda_6_loop = -144,
  lambda_61 = -145,
  lambda_62 = -146,
  lambda_63 = -147,
  lambda_64 = -148,
  lambda_65 = -149,
  lambda_66 = -150,
  lambda_rpid_is_defined = -151,
  lambda_67 = -152,
  lambda_68 = -153,
  lambda_feed_is_empty = -154,
  lambda_69 = -155,
  lambda_70 = -156,
  lambda_buf_is_empty = -157,
  lambda_71 = -158,
  lambda_72 = -159,
  lambda_73 = -160,
  lambda_74 = -161,
  lambda_75 = -162,
  lambda_76 = -163,
  lambda_77 = -164,
  lambda_78 = -165,
  lambda_79 = -166,
  func_std__extern = -167
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
  var_486_0_fd, // dynamic
  var_487_0_length, // dynamic
  var_489_1_data, // dynamic
  var_491_7_buf, // dynamic
  var_read, // extern
  var_is_empty, // extern
  var_true, // extern
  var_append, // extern
  var_minus, // extern
  var_cond, // extern
  var_std__read_from_until, // initialized
  var_528_0_fd, // dynamic
  var_529_0_sentinel, // dynamic
  var_530_0_nth, // dynamic
  var_532_1_data, // dynamic
  var_534_7_buf, // dynamic
  var_has_suffix, // extern
  var_dec, // extern
  var_std__readln_from, // initialized
  var_read_from_until, // extern
  var_std__read_all_from, // initialized
  var_593_0_fd, // dynamic
  var_595_1_data, // dynamic
  var_597_7_buf, // dynamic
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
  var_823_0_argument, // dynamic
  var_std__file_exists, // initialized
  var_stat, // extern
  var_not, // extern
  var_std__directory, // initialized
  var_870_1_entries, // dynamic
  var_empty_list, // extern
  var_871_10_dir, // dynamic
  var_opendir, // extern
  var_873_10_entry, // dynamic
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
  var_943_1_do_collect_output, // dynamic
  var_std__not, // extern
  var_944_1_do_collect_error_output, // dynamic
  var_945_1_env_vars, // dynamic
  var_to_string, // extern
  var_map, // extern
  var_environment, // extern
  var_is_defined, // extern
  var_std__string, // extern
  var_for_each, // extern
  var_update_if, // extern
  var_954_29_out_fd, // dynamic
  var_954_37_err_fd, // dynamic
  var_create_process, // extern
  var_956_1_io, // dynamic
  var_std_types__io, // extern
  var_join_process, // extern
  var_start_reading_from, // extern
  var_961_1_out, // dynamic
  var_962_1_err, // dynamic
  var_get_events, // extern
  var_966_13_fd, // dynamic
  var_966_17_data, // dynamic
  var_READ, // extern
  var_case, // extern
  var_PROCESS_JOINED, // extern
  var_993_1_ret, // dynamic
  var_std__terminate, // initialized
  var_EXIT_SUCCESS, // extern
  var_exit, // extern
  var_std__is_a_file_descriptor, // attribute
  var_std_types__object, // extern
  var_is_a_file_descriptor, // extern polymorphic
  var_false, // extern
  var_serialization_tag_of, // extern polymorphic
  var_serialize, // extern polymorphic
  var_1037_0_indent, // dynamic
  var_1039_1_str, // dynamic
  var_tabs_and_spaces, // extern
  var_deserializer_of, // extern polymorphic
  var_integer, // extern
  var_file_descriptor, // extern
  var_std__is_a_process_id, // attribute
  var_is_a_process_id, // extern polymorphic
  var_std_types__process_id, // extern
  var_1076_0_indent, // dynamic
  var_1078_1_str, // dynamic
  var_process_id, // extern
  var_command_of, // attribute
  var_flatten, // extern
  var_call, // extern
  var_std__pipe, // initialized
  var_1105_0_args, // dynamic
  var_1107_1_i, // dynamic
  var_1108_1_n, // dynamic
  var_1109_1_in_fd, // dynamic
  var_1110_1_feed, // dynamic
  var_1111_1_commands, // dynamic
  var_1112_1_head, // dynamic
  var_1113_1_arguments, // dynamic
  var_1114_1_first_arg, // dynamic
  var_is_a_string, // extern
  var_1134_1_arg, // dynamic
  var_is_a_function, // extern
  var_tuple, // extern
  var_inc, // extern
  var_std__pipe_commands, // initialized
  var_1154_0_feed_or_fd, // dynamic
  var_1155_0_commands, // dynamic
  var_1169_0_in_fd, // dynamic
  var_1170_0_feed, // dynamic
  var_1171_0_commands, // dynamic
  var_1173_1_pids, // dynamic
  var_empty_hash_table, // extern
  var_1174_1_err_fds, // dynamic
  var_1175_1_out_fd, // dynamic
  var_1176_1_env_vars, // dynamic
  var_1185_3_idx, // dynamic
  var_1186_9_head, // dynamic
  var_1186_15_arguments, // dynamic
  var_1188_1_pid, // dynamic
  var_1189_1_err_fd, // dynamic
  var_is_undefined, // extern
  var_std__and, // extern
  var_list, // extern
  var_1203_1_ret, // dynamic
  var_dup, // extern
  var_1204_1_out, // dynamic
  var_1205_1_err, // dynamic
  var_1216_1_read_descriptor_list, // dynamic
  var_keys_of, // extern
  var_1226_1_read_descriptors, // dynamic
  var_1227_1_write_descriptors, // dynamic
  var_pselect, // extern
  var_CHILD_CHANGED_STATE, // extern
  var_1235_7_rpid, // dynamic
  var_1235_13_status, // dynamic
  var_wait, // extern
  var_1260_3_read_descriptor, // dynamic
  var_1261_7_buf, // dynamic
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

static TAB_NUM t_func_std__print_to[] = {
  4, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 279_0_fd
  REST_PARAMETER, LOCAL(4), // 280_0_args
  // create_string(args).to_utf8
  var_create_string, 1, LOCAL(4), 1, LOCAL(1),
  // to_utf8
  var_to_utf8, 1, LOCAL(1), 1, LOCAL(2),
  // write_string_to! fd create_string(args).to_utf8
  var_write_string_to, 2, LOCAL(3), LOCAL(2), IO_TAIL_CALL,
  POS(282, 23),
  POS(282, 43),
  POS(282, 3)
};

static TAB_NUM t_func_std__println_to[] = {
  5, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(4), // 306_0_fd
  REST_PARAMETER, LOCAL(5), // 307_0_args
  // create_string(args).to_utf8 '@nl;')
  var_create_string, 1, LOCAL(5), 1, LOCAL(1),
  // to_utf8 '@nl;')
  var_to_utf8, 1, LOCAL(1), 1, LOCAL(2),
  // push(create_string(args).to_utf8 '@nl;')
  var_push, 2, LOCAL(2), chr_10, 1, LOCAL(3),
  // write_string_to! fd push(create_string(args).to_utf8 '@nl;')
  var_write_string_to, 2, LOCAL(4), LOCAL(3), IO_TAIL_CALL,
  POS(309, 28),
  POS(309, 48),
  POS(309, 23),
  POS(309, 3)
};

static TAB_NUM t_func_std__print_string[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 331_0_str
  // to_utf8
  var_to_utf8, 1, LOCAL(2), 1, LOCAL(1),
  // write_string_to! STDOUT_FILENO str.to_utf8
  var_write_string_to, 2, var_STDOUT_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(333, 38),
  POS(333, 3)
};

static TAB_NUM t_func_std__print[] = {
  2, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(2), // 357_0_args
  // create_string(args)
  var_create_string, 1, LOCAL(2), 1, LOCAL(1),
  // print_string! create_string(args)
  var_print_string, 1, LOCAL(1), IO_TAIL_CALL,
  POS(359, 17),
  POS(359, 3)
};

static TAB_NUM t_func_std__println[] = {
  3, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(3), // 383_0_args
  // create_string(args) '@nl;')
  var_create_string, 1, LOCAL(3), 1, LOCAL(1),
  // push(create_string(args) '@nl;')
  var_push, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // print_string! push(create_string(args) '@nl;')
  var_print_string, 1, LOCAL(2), IO_TAIL_CALL,
  POS(385, 22),
  POS(385, 17),
  POS(385, 3)
};

static TAB_NUM t_func_std__eprint_string[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 411_0_str
  // to_utf8
  var_to_utf8, 1, LOCAL(2), 1, LOCAL(1),
  // write_string_to! STDERR_FILENO str.to_utf8
  var_write_string_to, 2, var_STDERR_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(413, 38),
  POS(413, 3)
};

static TAB_NUM t_func_std__eprint[] = {
  2, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(2), // 437_0_args
  // create_string(args)
  var_create_string, 1, LOCAL(2), 1, LOCAL(1),
  // eprint_string! create_string(args)
  var_eprint_string, 1, LOCAL(1), IO_TAIL_CALL,
  POS(439, 18),
  POS(439, 3)
};

static TAB_NUM t_func_std__eprintln[] = {
  3, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(3), // 463_0_args
  // create_string(args) '@nl;')
  var_create_string, 1, LOCAL(3), 1, LOCAL(1),
  // push(create_string(args) '@nl;')
  var_push, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // eprint_string! push(create_string(args) '@nl;')
  var_eprint_string, 1, LOCAL(2), IO_TAIL_CALL,
  POS(465, 23),
  POS(465, 18),
  POS(465, 3)
};

static TAB_NUM t_func_std__read_from[] = {
  0, // locals
  2, // parameters
  var_486_0_fd,
  var_487_0_length,
  // $data ""
  LET, 1, string_1, 1, var_489_1_data,
  // loop:
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(489, 3),
  POS(490, 3)
};

static TAB_NUM t_lambda_loop[] = {
  0, // locals
  0, // parameters
  // read! $buf fd length
  var_read, 2, var_486_0_fd, var_487_0_length, IO_CALL(1), var_491_7_buf,
  // cond
  var_cond, 3, lambda_5, lambda_7, lambda_9, IO_TAIL_CALL,
  POS(491, 5),
  POS(492, 5)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // is_an_error -> buf
  var_is_an_error, 1, var_491_7_buf, 1, LOCAL(1),
  //  buf.is_an_error -> buf
  LET, 2, LOCAL(1), lambda_6, TAIL_CALL,
  POS(493, 14),
  POS(493, 9)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_491_7_buf, TAIL_CALL,
  POS(493, 28)
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // is_empty -> data
  var_is_empty, 1, var_491_7_buf, 1, LOCAL(1),
  //  buf.is_empty -> data
  LET, 2, LOCAL(1), lambda_8, TAIL_CALL,
  POS(494, 14),
  POS(494, 9)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_489_1_data, TAIL_CALL,
  POS(494, 25)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_10, IO_TAIL_CALL,
  POS(495, 9)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // append &data buf
  var_append, 2, var_489_1_data, var_491_7_buf, 1, var_489_1_data,
  // length_of(buf)
  var_length_of, 1, var_491_7_buf, 1, LOCAL(1),
  // minus &length length_of(buf)
  var_minus, 2, var_487_0_length, LOCAL(1), 1, var_487_0_length,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(496, 9),
  POS(497, 23),
  POS(497, 9),
  POS(498, 9)
};

static TAB_NUM t_func_std__read_from_until[] = {
  0, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_528_0_fd,
  MANDATORY_PARAMETER, var_529_0_sentinel,
  num_1, var_530_0_nth,
  // $data ""
  LET, 1, string_1, 1, var_532_1_data,
  // loop:
  var_loop, 1, lambda_2_loop, IO_TAIL_CALL,
  POS(532, 3),
  POS(533, 3)
};

static TAB_NUM t_lambda_2_loop[] = {
  0, // locals
  0, // parameters
  // read! $buf fd 1
  var_read, 2, var_528_0_fd, num_1, IO_CALL(1), var_534_7_buf,
  // cond
  var_cond, 3, lambda_11, lambda_13, lambda_15, IO_TAIL_CALL,
  POS(534, 5),
  POS(535, 5)
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // is_an_error -> buf
  var_is_an_error, 1, var_534_7_buf, 1, LOCAL(1),
  //  buf.is_an_error -> buf
  LET, 2, LOCAL(1), lambda_12, TAIL_CALL,
  POS(536, 14),
  POS(536, 9)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_534_7_buf, TAIL_CALL,
  POS(536, 28)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // is_empty -> data
  var_is_empty, 1, var_534_7_buf, 1, LOCAL(1),
  //  buf.is_empty -> data
  LET, 2, LOCAL(1), lambda_14, TAIL_CALL,
  POS(537, 14),
  POS(537, 9)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_532_1_data, TAIL_CALL,
  POS(537, 25)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_16, IO_TAIL_CALL,
  POS(538, 9)
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // append &data buf
  var_append, 2, var_532_1_data, var_534_7_buf, 1, var_532_1_data,
  // buf .has_suffix. sentinel:
  var_has_suffix, 2, var_534_7_buf, var_529_0_sentinel, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), lambda_17, var_next, IO_TAIL_CALL,
  POS(539, 9),
  POS(541, 11),
  POS(540, 9)
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // dec &nth
  var_dec, 1, var_530_0_nth, 1, var_530_0_nth,
  // 0
  var_std__less, 2, num_0, var_530_0_nth, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), var_next, lambda_18, IO_TAIL_CALL,
  POS(542, 13),
  POS(544, 21),
  POS(543, 13)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_532_1_data, TAIL_CALL,
  POS(546, 17)
};

static TAB_NUM t_func_std__readln_from[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 570_0_fd
  // read_from_until! fd '@nl;'
  var_read_from_until, 2, LOCAL(1), chr_10, IO_TAIL_CALL,
  POS(572, 3)
};

static TAB_NUM t_func_std__read_all_from[] = {
  0, // locals
  1, // parameters
  var_593_0_fd,
  // $data ""
  LET, 1, string_1, 1, var_595_1_data,
  // loop:
  var_loop, 1, lambda_3_loop, IO_TAIL_CALL,
  POS(595, 3),
  POS(596, 3)
};

static TAB_NUM t_lambda_3_loop[] = {
  0, // locals
  0, // parameters
  // read! $buf fd 0x100000
  var_read, 2, var_593_0_fd, num_0x100000, IO_CALL(1), var_597_7_buf,
  // cond
  var_cond, 3, lambda_19, lambda_21, lambda_23, IO_TAIL_CALL,
  POS(597, 5),
  POS(598, 5)
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // is_an_error -> buf
  var_is_an_error, 1, var_597_7_buf, 1, LOCAL(1),
  //  buf.is_an_error -> buf
  LET, 2, LOCAL(1), lambda_20, TAIL_CALL,
  POS(599, 14),
  POS(599, 9)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_597_7_buf, TAIL_CALL,
  POS(599, 28)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // is_empty -> data
  var_is_empty, 1, var_597_7_buf, 1, LOCAL(1),
  //  buf.is_empty -> data
  LET, 2, LOCAL(1), lambda_22, TAIL_CALL,
  POS(600, 14),
  POS(600, 9)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_595_1_data, TAIL_CALL,
  POS(600, 25)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_24, IO_TAIL_CALL,
  POS(601, 9)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  // append &data buf
  var_append, 2, var_595_1_data, var_597_7_buf, 1, var_595_1_data,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(602, 9),
  POS(603, 9)
};

static TAB_NUM t_func_std__get_from_until[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 634_0_fd
  MANDATORY_PARAMETER, LOCAL(3), // 635_0_sentinel
  num_1, LOCAL(4), // 636_0_nth
  // read_from_until! $data fd sentinel nth
  var_read_from_until, 3, LOCAL(2), LOCAL(3), LOCAL(4), IO_CALL(1), LOCAL(5),
  // from_utf8
  var_from_utf8, 1, LOCAL(5), 1, LOCAL(1),
  // -> data.from_utf8
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(638, 3),
  POS(639, 11),
  POS(639, 3)
};

static TAB_NUM t_func_std__getln_from[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 663_0_fd
  // get_from_until! fd '@nl;'
  var_get_from_until, 2, LOCAL(1), chr_10, IO_TAIL_CALL,
  POS(665, 3)
};

static TAB_NUM t_func_std__get_until[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 692_0_sentinel
  // get_from_until! STDIN_FILENO sentinel
  var_get_from_until, 2, var_STDIN_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(694, 3)
};

static TAB_NUM t_func_std__getln[] = {
  0, // locals
  0, // parameters
  // getln_from! STDIN_FILENO
  var_getln_from, 1, var_STDIN_FILENO, IO_TAIL_CALL,
  POS(716, 3)
};

static TAB_NUM t_func_std_types__string___load[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 734_0_filename
  // open! $fd filename "r"
  var_open, 2, LOCAL(1), str_r, IO_CALL(1), LOCAL(2),
  // check fd
  var_check, 1, LOCAL(2), 0,
  // load! fd
  var_load, 1, LOCAL(2), IO_TAIL_CALL,
  POS(736, 3),
  POS(737, 3),
  POS(738, 3)
};

static TAB_NUM t_func_std_types__file_descriptor___load[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 756_0_fd
  // read_all_from! $data fd
  var_read_all_from, 1, LOCAL(1), IO_CALL(1), LOCAL(2),
  // check data
  var_check, 1, LOCAL(2), 0,
  // close! fd
  var_close, 1, LOCAL(1), IO_CALL(0),
  // -> data
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(758, 3),
  POS(759, 3),
  POS(760, 3),
  POS(761, 3)
};

static TAB_NUM t_func_std_types__string___save[] = {
  3, // locals
  2, // parameters
  LOCAL(1), // 783_0_filename
  LOCAL(2), // 784_0_data
  // open! $fh filename "w+"
  var_open, 2, LOCAL(1), str_w, IO_CALL(1), LOCAL(3),
  // check fh
  var_check, 1, LOCAL(3), 0,
  // write_to! fh data
  var_write_to, 2, LOCAL(3), LOCAL(2), IO_CALL(0),
  // close! fh
  var_close, 1, LOCAL(3), IO_TAIL_CALL,
  POS(786, 3),
  POS(787, 3),
  POS(788, 3),
  POS(789, 3)
};

static TAB_NUM t_func_std__try[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 804_0_body
  // body!
  LOCAL(1), 0, IO_CALL(0),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(806, 3),
  POS(807, 3)
};

static TAB_NUM t_func_std__check[] = {
  1, // locals
  1, // parameters
  var_823_0_argument,
  // is_an_error
  var_is_an_error, 1, var_823_0_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25, var_pass, TAIL_CALL,
  POS(826, 14),
  POS(825, 3)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  //  argument
  LET, 1, var_823_0_argument, TAIL_CALL,
  POS(827, 7)
};

static TAB_NUM t_func_std__file_exists[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 844_0_filename
  // stat! $info filename
  var_stat, 1, LOCAL(3), IO_CALL(1), LOCAL(4),
  // is_an_error)
  var_is_an_error, 1, LOCAL(4), 1, LOCAL(1),
  // not(info.is_an_error)
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // -> not(info.is_an_error)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(846, 3),
  POS(847, 15),
  POS(847, 6),
  POS(847, 3)
};

static TAB_NUM t_func_std__directory[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 868_0_pathname
  // $entries empty_list
  LET, 1, var_empty_list, 1, var_870_1_entries,
  // opendir! $dir pathname
  var_opendir, 1, LOCAL(1), IO_CALL(1), var_871_10_dir,
  // loop:
  var_loop, 1, lambda_4_loop, IO_TAIL_CALL,
  POS(870, 3),
  POS(871, 3),
  POS(872, 3)
};

static TAB_NUM t_lambda_4_loop[] = {
  1, // locals
  0, // parameters
  // readdir! $entry dir
  var_readdir, 1, var_871_10_dir, IO_CALL(1), var_873_10_entry,
  // is_an_error:
  var_is_an_error, 1, var_873_10_entry, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_entry_is_an_error, lambda_26, IO_TAIL_CALL,
  POS(873, 5),
  POS(875, 13),
  POS(874, 5)
};

static TAB_NUM t_lambda_entry_is_an_error[] = {
  0, // locals
  0, // parameters
  // closedir! dir
  var_closedir, 1, var_871_10_dir, IO_CALL(0),
  // -> entries
  LET, 1, var_870_1_entries, TAIL_CALL,
  POS(876, 9),
  POS(877, 9)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  // push &entries entry
  var_push, 2, var_870_1_entries, var_873_10_entry, 1, var_870_1_entries,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(879, 9),
  POS(880, 9)
};

static TAB_NUM t_func_std_types__stat___access_time_of[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 890_0_self
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
  POS(894, 7),
  POS(895, 7),
  POS(895, 7),
  POS(893, 6),
  POS(892, 3)
};

static TAB_NUM t_func_std_types__stat___modification_time_of[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 897_40_self
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
  POS(906, 7),
  POS(907, 7),
  POS(907, 7),
  POS(905, 6),
  POS(904, 3)
};

static TAB_NUM t_func_std_types__stat___status_change_time_of[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 909_41_self
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
  POS(918, 7),
  POS(919, 7),
  POS(919, 7),
  POS(917, 6),
  POS(916, 3)
};

static TAB_NUM t_func_std_types__stat___is_a_directory[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 921_34_self
  // mode_of(self)(1) == 'd'
  var_mode_of, 1, LOCAL(4), 1, LOCAL(1),
  // mode_of(self)(1) == 'd'
  LOCAL(1), 1, num_1, 1, LOCAL(2),
  // mode_of(self)(1) == 'd'
  var_std__equal, 2, LOCAL(2), chr_100, 1, LOCAL(3),
  // -> mode_of(self)(1) == 'd'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(928, 6),
  POS(928, 6),
  POS(928, 6),
  POS(928, 3)
};

static TAB_NUM t_func_std__call[] = {
  6, // locals
  2, // parameters
  LOCAL(3), // 940_0_cmd
  LOCAL(4), // 941_0_args
  // result_count() >= 2)
  var_result_count, 0, 1, LOCAL(1),
  // result_count() >= 2)
  var_std__less, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // $do_collect_output (result_count() >= 2)
  var_std__not, 1, LOCAL(2), 1, var_943_1_do_collect_output,
  // result_count() == 3)
  var_result_count, 0, 1, LOCAL(1),
  // $do_collect_error_output (result_count() == 3)
  var_std__equal, 2, LOCAL(1), num_3, 1, var_944_1_do_collect_error_output,
  // $env_vars undefined
  LET, 1, var_undefined, 1, var_945_1_env_vars,
  // map &args to_string
  var_map, 2, LOCAL(4), var_to_string, 1, LOCAL(4),
  // is_defined &env_vars:
  var_is_defined, 1, var_environment, 1, LOCAL(1),
  // update_if environment.is_defined &env_vars:
  var_update_if, 3, LOCAL(1), var_945_1_env_vars, lambda_27, 1, var_945_1_env_vars,
  // create_process! $pid $in_fd $out_fd $err_fd cmd args env_vars
  var_create_process, 3, LOCAL(3), LOCAL(4), var_945_1_env_vars, IO_CALL(4), LOCAL(5), LOCAL(6), var_954_29_out_fd, var_954_37_err_fd,
  // close! in_fd
  var_close, 1, LOCAL(6), IO_CALL(0),
  // $io std_types::io
  LET, 1, var_std_types__io, 1, var_956_1_io,
  // join_process &io pid
  var_join_process, 2, var_956_1_io, LOCAL(5), 1, var_956_1_io,
  // start_reading_from &io out_fd
  var_start_reading_from, 2, var_956_1_io, var_954_29_out_fd, 1, var_956_1_io,
  // start_reading_from &io err_fd
  var_start_reading_from, 2, var_956_1_io, var_954_37_err_fd, 1, var_956_1_io,
  // $out ""
  LET, 1, string_1, 1, var_961_1_out,
  // $err ""
  LET, 1, string_1, 1, var_962_1_err,
  // loop:
  var_loop, 1, lambda_5_loop, IO_TAIL_CALL,
  POS(943, 23),
  POS(943, 23),
  POS(943, 3),
  POS(944, 29),
  POS(944, 3),
  POS(945, 3),
  POS(946, 3),
  POS(947, 25),
  POS(947, 3),
  POS(954, 3),
  POS(955, 3),
  POS(956, 3),
  POS(957, 3),
  POS(958, 3),
  POS(959, 3),
  POS(961, 3),
  POS(962, 3),
  POS(963, 3)
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  // !env_vars empty_list
  LET, 1, var_empty_list, 1, var_945_1_env_vars,
  // for_each environment
  var_for_each, 3, var_environment, lambda_28, lambda_29, TAIL_CALL,
  POS(948, 5),
  POS(949, 5)
};

static TAB_NUM t_lambda_28[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 950_3_key
  LOCAL(3), // 950_7_value
  // "@(key)=@(value)"
  var_std__string, 3, LOCAL(2), string_2, LOCAL(3), 1, LOCAL(1),
  // push &env_vars "@(key)=@(value)"
  var_push, 2, var_945_1_env_vars, LOCAL(1), 1, var_945_1_env_vars,
  // next
  var_next, 0, TAIL_CALL,
  POS(951, 24),
  POS(951, 9),
  POS(952, 9)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  //  env_vars
  LET, 1, var_945_1_env_vars, TAIL_CALL,
  POS(953, 9)
};

static TAB_NUM t_lambda_5_loop[] = {
  1, // locals
  0, // parameters
  // get_events! &io $events
  var_get_events, 1, var_956_1_io, IO_CALL(2), var_956_1_io, LOCAL(1),
  // for_each events: (event)
  var_for_each, 2, LOCAL(1), lambda_30, IO_TAIL_CALL,
  POS(964, 5),
  POS(965, 5)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 965_18_event
  // event $type $fd $data
  LOCAL(1), 0, 3, LOCAL(2), var_966_13_fd, var_966_17_data,
  // case type
  var_case, 6, LOCAL(2), var_READ, lambda_READ, var_PROCESS_JOINED, lambda_PROCESS_JOINED, lambda_38, IO_TAIL_CALL,
  POS(966, 7),
  POS(967, 7)
};

static TAB_NUM t_lambda_READ[] = {
  1, // locals
  0, // parameters
  // data == ""
  var_std__equal, 2, var_966_17_data, string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_31, IO_TAIL_CALL,
  POS(970, 13),
  POS(969, 11)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  // case fd
  var_case, 6, var_966_13_fd, var_954_29_out_fd, lambda_out_fd, var_954_37_err_fd, lambda_err_fd, lambda_34, IO_TAIL_CALL,
  POS(973, 15)
};

static TAB_NUM t_lambda_out_fd[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_943_1_do_collect_output, lambda_do_collect_output, lambda_32, IO_TAIL_CALL,
  POS(975, 19)
};

static TAB_NUM t_lambda_do_collect_output[] = {
  0, // locals
  0, // parameters
  // append &out data
  var_append, 2, var_961_1_out, var_966_17_data, 1, var_961_1_out,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(977, 23),
  POS(978, 23)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  // write_to! STDOUT_FILENO data
  var_write_to, 2, var_STDOUT_FILENO, var_966_17_data, IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(980, 23),
  POS(981, 23)
};

static TAB_NUM t_lambda_err_fd[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_944_1_do_collect_error_output, lambda_do_collect_error_output, lambda_33, IO_TAIL_CALL,
  POS(983, 19)
};

static TAB_NUM t_lambda_do_collect_error_output[] = {
  0, // locals
  0, // parameters
  // append &err data
  var_append, 2, var_962_1_err, var_966_17_data, 1, var_962_1_err,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(985, 23),
  POS(986, 23)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  // write_to! STDERR_FILENO data
  var_write_to, 2, var_STDERR_FILENO, var_966_17_data, IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(988, 23),
  POS(989, 23)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(991, 19)
};

static TAB_NUM t_lambda_PROCESS_JOINED[] = {
  0, // locals
  0, // parameters
  // $ret data
  LET, 1, var_966_17_data, 1, var_993_1_ret,
  // if
  var_if, 3, var_943_1_do_collect_output, lambda_2_do_collect_output, lambda_37, TAIL_CALL,
  POS(993, 11),
  POS(994, 11)
};

static TAB_NUM t_lambda_2_do_collect_output[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_944_1_do_collect_error_output, lambda_35, lambda_36, TAIL_CALL,
  POS(996, 15)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  //  ret out err
  LET, 3, var_993_1_ret, var_961_1_out, var_962_1_err, TAIL_CALL,
  POS(998, 19)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  ret out
  LET, 2, var_993_1_ret, var_961_1_out, TAIL_CALL,
  POS(999, 19)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  //  ret
  LET, 1, var_993_1_ret, TAIL_CALL,
  POS(1000, 15)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1002, 11)
};

static TAB_NUM t_func_std__terminate[] = {
  0, // locals
  0, // parameters
  // exit! EXIT_SUCCESS
  var_exit, 1, var_EXIT_SUCCESS, IO_TAIL_CALL,
  POS(1014, 3)
};

static TAB_NUM t_func_std_types__file_descriptor___serialize[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 1036_0_self
  var_undefined, var_1037_0_indent,
  // to_integer)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(1),
  // $str "
  var_std__string, 3, str_file_descriptor_2, LOCAL(1), string_3, 1, var_1039_1_str,
  // is_defined
  var_is_defined, 1, var_1037_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_39, lambda_40, TAIL_CALL,
  POS(1040, 28),
  POS(1039, 3),
  POS(1042, 12),
  POS(1041, 3)
};

static TAB_NUM t_lambda_39[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_1037_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_1039_1_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1043, 15),
  POS(1043, 8),
  POS(1043, 7)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_1039_1_str, TAIL_CALL,
  POS(1044, 7)
};

static TAB_NUM t_func_std_types__file_descriptor___deserializer_of[] = {
  3, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(3), // 1051_0_argument
  // integer(argument))
  var_integer, 1, LOCAL(3), 1, LOCAL(1),
  // file_descriptor(integer(argument))
  var_file_descriptor, 1, LOCAL(1), 1, LOCAL(2),
  // -> file_descriptor(integer(argument))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1053, 22),
  POS(1053, 6),
  POS(1053, 3)
};

static TAB_NUM t_func_std_types__process_id___serialize[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 1075_0_self
  var_undefined, var_1076_0_indent,
  // to_integer)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(1),
  // $str "
  var_std__string, 3, str_process_id_2, LOCAL(1), string_3, 1, var_1078_1_str,
  // is_defined
  var_is_defined, 1, var_1076_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_41, lambda_42, TAIL_CALL,
  POS(1079, 23),
  POS(1078, 3),
  POS(1081, 12),
  POS(1080, 3)
};

static TAB_NUM t_lambda_41[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_1076_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_1078_1_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1082, 15),
  POS(1082, 8),
  POS(1082, 7)
};

static TAB_NUM t_lambda_42[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_1078_1_str, TAIL_CALL,
  POS(1083, 7)
};

static TAB_NUM t_func_std_types__process_id___deserializer_of[] = {
  3, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(3), // 1090_0_argument
  // integer(argument))
  var_integer, 1, LOCAL(3), 1, LOCAL(1),
  // process_id(integer(argument))
  var_process_id, 1, LOCAL(1), 1, LOCAL(2),
  // -> process_id(integer(argument))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1092, 17),
  POS(1092, 6),
  POS(1092, 3)
};

static TAB_NUM t_func_extern_call[] = {
  5, // locals
  -2, // parameters
  MYSELF_PARAMETER, LOCAL(4), // 1098_0_myself
  REST_PARAMETER, LOCAL(5), // 1099_0_arguments
  // command_of(myself) map(flatten(arguments) to_string)
  var_command_of, 1, LOCAL(4), 1, LOCAL(1),
  // flatten(arguments) to_string)
  var_flatten, 1, LOCAL(5), 1, LOCAL(2),
  // map(flatten(arguments) to_string)
  var_map, 2, LOCAL(2), var_to_string, 1, LOCAL(3),
  // call! command_of(myself) map(flatten(arguments) to_string)
  var_call, 2, LOCAL(1), LOCAL(3), IO_TAIL_CALL,
  POS(1101, 9),
  POS(1101, 32),
  POS(1101, 28),
  POS(1101, 3)
};

static TAB_NUM t_func_std__pipe[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, var_1105_0_args,
  // $i 1
  LET, 1, num_1, 1, var_1107_1_i,
  // $n length_of(args)
  var_length_of, 1, var_1105_0_args, 1, var_1108_1_n,
  // $in_fd undefined
  LET, 1, var_undefined, 1, var_1109_1_in_fd,
  // $feed undefined
  LET, 1, var_undefined, 1, var_1110_1_feed,
  // $commands empty_list
  LET, 1, var_empty_list, 1, var_1111_1_commands,
  // $head undefined
  LET, 1, var_undefined, 1, var_1112_1_head,
  // $arguments undefined
  LET, 1, var_undefined, 1, var_1113_1_arguments,
  // $first_arg args(1)
  var_1105_0_args, 1, num_1, 1, var_1114_1_first_arg,
  // is_a_string:
  var_is_a_string, 1, var_1114_1_first_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_first_arg_is_a_string, lambda_43, IO_TAIL_CALL,
  POS(1107, 3),
  POS(1108, 3),
  POS(1109, 3),
  POS(1110, 3),
  POS(1111, 3),
  POS(1112, 3),
  POS(1113, 3),
  POS(1114, 3),
  POS(1116, 15),
  POS(1115, 3)
};

static TAB_NUM t_lambda_first_arg_is_a_string[] = {
  0, // locals
  0, // parameters
  // !feed first_arg
  LET, 1, var_1114_1_first_arg, 1, var_1110_1_feed,
  // !i 2
  LET, 1, num_2, 1, var_1107_1_i,
  // build_commands!
  func_build_commands, 0, IO_TAIL_CALL,
  POS(1117, 7),
  POS(1118, 7),
  POS(1119, 7)
};

static TAB_NUM t_lambda_43[] = {
  1, // locals
  0, // parameters
  // is_a_file_descriptor:
  var_is_a_file_descriptor, 1, var_1114_1_first_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_first_arg_is_a_file_descriptor, func_build_commands, IO_TAIL_CALL,
  POS(1122, 19),
  POS(1121, 7)
};

static TAB_NUM t_lambda_first_arg_is_a_file_descriptor[] = {
  0, // locals
  0, // parameters
  // !in_fd first_arg
  LET, 1, var_1114_1_first_arg, 1, var_1109_1_in_fd,
  // !i 2
  LET, 1, num_2, 1, var_1107_1_i,
  // build_commands!
  func_build_commands, 0, IO_TAIL_CALL,
  POS(1123, 11),
  POS(1124, 11),
  POS(1125, 11)
};

static TAB_NUM t_func_build_commands[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_44, lambda_48, IO_TAIL_CALL,
  POS(1129, 5)
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  0, // parameters
  // n break
  var_std__less, 2, var_1108_1_n, var_1107_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_45, IO_TAIL_CALL,
  POS(1132, 15),
  POS(1131, 9)
};

static TAB_NUM t_lambda_45[] = {
  1, // locals
  0, // parameters
  // $arg args(i)
  var_1105_0_args, 1, var_1107_1_i, 1, var_1134_1_arg,
  // is_a_function:
  var_is_a_function, 1, var_1134_1_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_arg_is_a_function, lambda_47, IO_TAIL_CALL,
  POS(1134, 13),
  POS(1136, 19),
  POS(1135, 13)
};

static TAB_NUM t_lambda_arg_is_a_function[] = {
  1, // locals
  0, // parameters
  // is_defined &commands:
  var_is_defined, 1, var_1112_1_head, 1, LOCAL(1),
  // update_if head.is_defined &commands:
  var_update_if, 3, LOCAL(1), var_1111_1_commands, lambda_46, 1, var_1111_1_commands,
  // !head command_of(arg)
  var_command_of, 1, var_1134_1_arg, 1, var_1112_1_head,
  // !arguments empty_list
  LET, 1, var_empty_list, 1, var_1113_1_arguments,
  // inc &i
  var_inc, 1, var_1107_1_i, 1, var_1107_1_i,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1137, 32),
  POS(1137, 17),
  POS(1139, 17),
  POS(1140, 17),
  POS(1141, 17),
  POS(1142, 17)
};

static TAB_NUM t_lambda_46[] = {
  3, // locals
  0, // parameters
  // flatten(arguments) to_string))
  var_flatten, 1, var_1113_1_arguments, 1, LOCAL(1),
  // map(flatten(arguments) to_string))
  var_map, 2, LOCAL(1), var_to_string, 1, LOCAL(2),
  // tuple(head map(flatten(arguments) to_string))
  var_tuple, 2, var_1112_1_head, LOCAL(2), 1, LOCAL(3),
  // push commands tuple(head map(flatten(arguments) to_string))
  var_push, 2, var_1111_1_commands, LOCAL(3), TAIL_CALL,
  POS(1138, 48),
  POS(1138, 44),
  POS(1138, 33),
  POS(1138, 19)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  // push &arguments arg
  var_push, 2, var_1113_1_arguments, var_1134_1_arg, 1, var_1113_1_arguments,
  // inc &i
  var_inc, 1, var_1107_1_i, 1, var_1107_1_i,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1144, 17),
  POS(1145, 17),
  POS(1146, 17)
};

static TAB_NUM t_lambda_48[] = {
  1, // locals
  0, // parameters
  // is_defined &commands:
  var_is_defined, 1, var_1112_1_head, 1, LOCAL(1),
  // update_if head.is_defined &commands:
  var_update_if, 3, LOCAL(1), var_1111_1_commands, lambda_49, 1, var_1111_1_commands,
  // run_pipe! in_fd feed commands
  func_run_pipe, 3, var_1109_1_in_fd, var_1110_1_feed, var_1111_1_commands, IO_TAIL_CALL,
  POS(1148, 24),
  POS(1148, 9),
  POS(1150, 9)
};

static TAB_NUM t_lambda_49[] = {
  3, // locals
  0, // parameters
  // flatten(arguments) to_string))
  var_flatten, 1, var_1113_1_arguments, 1, LOCAL(1),
  // map(flatten(arguments) to_string))
  var_map, 2, LOCAL(1), var_to_string, 1, LOCAL(2),
  // tuple(head map(flatten(arguments) to_string))
  var_tuple, 2, var_1112_1_head, LOCAL(2), 1, LOCAL(3),
  // push commands tuple(head map(flatten(arguments) to_string))
  var_push, 2, var_1111_1_commands, LOCAL(3), TAIL_CALL,
  POS(1149, 40),
  POS(1149, 36),
  POS(1149, 25),
  POS(1149, 11)
};

static TAB_NUM t_func_std__pipe_commands[] = {
  1, // locals
  -2, // parameters
  var_undefined, var_1154_0_feed_or_fd,
  MANDATORY_PARAMETER, var_1155_0_commands,
  // is_defined:
  var_is_defined, 1, var_1154_0_feed_or_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_feed_or_fd_is_defined, lambda_51, IO_TAIL_CALL,
  POS(1158, 16),
  POS(1157, 3)
};

static TAB_NUM t_lambda_feed_or_fd_is_defined[] = {
  1, // locals
  0, // parameters
  // is_a_file_descriptor:
  var_is_a_file_descriptor, 1, var_1154_0_feed_or_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_feed_or_fd_is_a_file_descriptor, lambda_50, IO_TAIL_CALL,
  POS(1160, 20),
  POS(1159, 7)
};

static TAB_NUM t_lambda_feed_or_fd_is_a_file_descriptor[] = {
  0, // locals
  0, // parameters
  // run_pipe! feed_or_fd undefined commands
  func_run_pipe, 3, var_1154_0_feed_or_fd, var_undefined, var_1155_0_commands, IO_TAIL_CALL,
  POS(1161, 11)
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  // run_pipe! undefined feed_or_fd commands
  func_run_pipe, 3, var_undefined, var_1154_0_feed_or_fd, var_1155_0_commands, IO_TAIL_CALL,
  POS(1163, 11)
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  // run_pipe! undefined undefined commands
  func_run_pipe, 3, var_undefined, var_undefined, var_1155_0_commands, IO_TAIL_CALL,
  POS(1165, 7)
};

static TAB_NUM t_func_run_pipe[] = {
  1, // locals
  3, // parameters
  var_1169_0_in_fd,
  var_1170_0_feed,
  var_1171_0_commands,
  // $pids empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_1173_1_pids,
  // $err_fds empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_1174_1_err_fds,
  // $out_fd in_fd
  LET, 1, var_1169_0_in_fd, 1, var_1175_1_out_fd,
  // $env_vars undefined
  LET, 1, var_undefined, 1, var_1176_1_env_vars,
  // is_defined &env_vars:
  var_is_defined, 1, var_environment, 1, LOCAL(1),
  // update_if environment.is_defined &env_vars:
  var_update_if, 3, LOCAL(1), var_1176_1_env_vars, lambda_52, 1, var_1176_1_env_vars,
  // for_each commands
  var_for_each, 3, var_1171_0_commands, lambda_55, lambda_59, IO_TAIL_CALL,
  POS(1173, 3),
  POS(1174, 3),
  POS(1175, 3),
  POS(1176, 3),
  POS(1177, 25),
  POS(1177, 3),
  POS(1184, 3)
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  // !env_vars empty_list
  LET, 1, var_empty_list, 1, var_1176_1_env_vars,
  // for_each environment
  var_for_each, 3, var_environment, lambda_53, lambda_54, TAIL_CALL,
  POS(1178, 5),
  POS(1179, 5)
};

static TAB_NUM t_lambda_53[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 1180_3_key
  LOCAL(3), // 1180_7_value
  // "@(key)=@(value)"
  var_std__string, 3, LOCAL(2), string_2, LOCAL(3), 1, LOCAL(1),
  // push &env_vars "@(key)=@(value)"
  var_push, 2, var_1176_1_env_vars, LOCAL(1), 1, var_1176_1_env_vars,
  // next
  var_next, 0, TAIL_CALL,
  POS(1181, 24),
  POS(1181, 9),
  POS(1182, 9)
};

static TAB_NUM t_lambda_54[] = {
  0, // locals
  0, // parameters
  //  env_vars
  LET, 1, var_1176_1_env_vars, TAIL_CALL,
  POS(1183, 9)
};

static TAB_NUM t_lambda_55[] = {
  3, // locals
  2, // parameters
  var_1185_3_idx,
  LOCAL(3), // 1185_7_command
  // command $head $arguments
  LOCAL(3), 0, 2, var_1186_9_head, var_1186_15_arguments,
  // map &arguments to_utf8
  var_map, 2, var_1186_15_arguments, var_to_utf8, 1, var_1186_15_arguments,
  // $pid undefined
  LET, 1, var_undefined, 1, var_1188_1_pid,
  // $err_fd undefined
  LET, 1, var_undefined, 1, var_1189_1_err_fd,
  // idx == 1 && in_fd.is_undefined:
  var_std__equal, 2, var_1185_3_idx, num_1, 1, LOCAL(1),
  // idx == 1 && in_fd.is_undefined:
  var_std__and, 2, LOCAL(1), lambda_56, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_57, lambda_58, IO_TAIL_CALL,
  POS(1186, 7),
  POS(1187, 7),
  POS(1188, 7),
  POS(1189, 7),
  POS(1191, 9),
  POS(1191, 9),
  POS(1190, 7)
};

static TAB_NUM t_lambda_56[] = {
  1, // locals
  0, // parameters
  // is_undefined:
  var_is_undefined, 1, var_1169_0_in_fd, 1, LOCAL(1),
  // in_fd.is_undefined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1191, 27),
  POS(1191, 21)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  // create_process! !pid !in_fd !out_fd !err_fd head arguments env_vars
  var_create_process, 3, var_1186_9_head, var_1186_15_arguments, var_1176_1_env_vars, IO_CALL(4), var_1188_1_pid, var_1169_0_in_fd, var_1175_1_out_fd, var_1189_1_err_fd,
  // store_pid_and_err_fd!
  func_store_pid_and_err_fd, 0, IO_TAIL_CALL,
  POS(1192, 11),
  POS(1193, 11)
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  0, // parameters
  // create_process! !pid !out_fd !err_fd head arguments env_vars out_fd
  var_create_process, 4, var_1186_9_head, var_1186_15_arguments, var_1176_1_env_vars, var_1175_1_out_fd, IO_CALL(3), var_1188_1_pid, var_1175_1_out_fd, var_1189_1_err_fd,
  // store_pid_and_err_fd!
  func_store_pid_and_err_fd, 0, IO_TAIL_CALL,
  POS(1195, 11),
  POS(1196, 11)
};

static TAB_NUM t_func_store_pid_and_err_fd[] = {
  0, // locals
  0, // parameters
  // pids(pid) idx
  var_1173_1_pids, 2, var_1188_1_pid, var_1185_3_idx, 1, var_1173_1_pids,
  // err_fds(err_fd) idx
  var_1174_1_err_fds, 2, var_1189_1_err_fd, var_1185_3_idx, 1, var_1174_1_err_fds,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1199, 10),
  POS(1200, 10),
  POS(1201, 9)
};

static TAB_NUM t_lambda_59[] = {
  2, // locals
  0, // parameters
  // list(undefined) length_of(commands))
  var_list, 1, var_undefined, 1, LOCAL(1),
  // length_of(commands))
  var_length_of, 1, var_1171_0_commands, 1, LOCAL(2),
  // $ret dup(list(undefined) length_of(commands))
  var_dup, 2, LOCAL(1), LOCAL(2), 1, var_1203_1_ret,
  // $out ""
  LET, 1, string_1, 1, var_1204_1_out,
  // length_of(commands))
  var_length_of, 1, var_1171_0_commands, 1, LOCAL(2),
  // $err dup(list("") length_of(commands))
  var_dup, 2, list_1205_9, LOCAL(2), 1, var_1205_1_err,
  // is_defined
  var_is_defined, 1, var_1170_0_feed, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_manage_io, lambda_60, IO_TAIL_CALL,
  POS(1203, 16),
  POS(1203, 32),
  POS(1203, 7),
  POS(1204, 7),
  POS(1205, 25),
  POS(1205, 7),
  POS(1207, 14),
  POS(1206, 7)
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  0, // parameters
  // close! in_fd
  var_close, 1, var_1169_0_in_fd, IO_CALL(0),
  // !in_fd undefined
  LET, 1, var_undefined, 1, var_1169_0_in_fd,
  // manage_io!
  func_manage_io, 0, IO_TAIL_CALL,
  POS(1210, 11),
  POS(1211, 11),
  POS(1212, 11)
};

static TAB_NUM t_func_manage_io[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_6_loop, IO_TAIL_CALL,
  POS(1215, 9)
};

static TAB_NUM t_lambda_6_loop[] = {
  3, // locals
  0, // parameters
  // $read_descriptor_list keys_of(err_fds)
  var_keys_of, 1, var_1174_1_err_fds, 1, var_1216_1_read_descriptor_list,
  // is_defined
  var_is_defined, 1, var_1169_0_in_fd, 1, LOCAL(1),
  // $write_descriptor_list
  var_if, 3, LOCAL(1), lambda_61, lambda_62, 1, LOCAL(2),
  // is_defined &read_descriptor_list:
  var_is_defined, 1, var_1175_1_out_fd, 1, LOCAL(1),
  // update_if out_fd.is_defined &read_descriptor_list:
  var_update_if, 3, LOCAL(1), var_1216_1_read_descriptor_list, lambda_63, 1, var_1216_1_read_descriptor_list,
  // pselect!
  var_pselect, 3, var_1216_1_read_descriptor_list, LOCAL(2), var_empty_list, IO_CALL(4), LOCAL(3), var_1226_1_read_descriptors, var_1227_1_write_descriptors, LOCAL(1),
  // for_each signals
  var_for_each, 3, LOCAL(3), lambda_64, lambda_67, IO_TAIL_CALL,
  POS(1216, 11),
  POS(1219, 21),
  POS(1217, 11),
  POS(1222, 28),
  POS(1222, 11),
  POS(1224, 11),
  POS(1229, 11)
};

static TAB_NUM t_lambda_61[] = {
  1, // locals
  0, // parameters
  // list(in_fd)
  var_list, 1, var_1169_0_in_fd, 1, LOCAL(1),
  //  list(in_fd)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1220, 18),
  POS(1220, 17)
};

static TAB_NUM t_lambda_62[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(1221, 17)
};

static TAB_NUM t_lambda_63[] = {
  0, // locals
  0, // parameters
  // push read_descriptor_list out_fd
  var_push, 2, var_1216_1_read_descriptor_list, var_1175_1_out_fd, TAIL_CALL,
  POS(1223, 13)
};

static TAB_NUM t_lambda_64[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1230_3_signal
  // signal == CHILD_CHANGED_STATE:
  var_std__equal, 2, LOCAL(2), var_CHILD_CHANGED_STATE, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_65, var_next, IO_TAIL_CALL,
  POS(1232, 17),
  POS(1231, 15)
};

static TAB_NUM t_lambda_65[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_66, var_next, IO_TAIL_CALL,
  POS(1233, 19)
};

static TAB_NUM t_lambda_66[] = {
  1, // locals
  0, // parameters
  // wait! $rpid $status
  var_wait, 0, IO_CALL(2), var_1235_7_rpid, var_1235_13_status,
  // is_defined:
  var_is_defined, 1, var_1235_7_rpid, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_rpid_is_defined, var_break, IO_TAIL_CALL,
  POS(1235, 23),
  POS(1237, 30),
  POS(1236, 23)
};

static TAB_NUM t_lambda_rpid_is_defined[] = {
  2, // locals
  0, // parameters
  // pids(rpid)) status
  var_1173_1_pids, 1, var_1235_7_rpid, 1, LOCAL(2),
  // ret(pids(rpid)) status
  var_1203_1_ret, 2, LOCAL(2), var_1235_13_status, 1, var_1203_1_ret,
  // pids(rpid) undefined
  var_1173_1_pids, 2, var_1235_7_rpid, var_undefined, 1, var_1173_1_pids,
  // is_empty
  var_is_empty, 1, var_1173_1_pids, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), var_break, var_next, IO_TAIL_CALL,
  POS(1238, 32),
  POS(1238, 28),
  POS(1239, 28),
  POS(1241, 34),
  POS(1240, 27)
};

static TAB_NUM t_lambda_67[] = {
  0, // locals
  0, // parameters
  // for_each write_descriptors
  var_for_each, 3, var_1227_1_write_descriptors, lambda_68, lambda_69, IO_TAIL_CALL,
  POS(1248, 15)
};

static TAB_NUM t_lambda_68[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 1249_3_write_descriptor
  // write! $bytes_written write_descriptor feed
  var_write, 2, LOCAL(2), var_1170_0_feed, IO_CALL(1), LOCAL(3),
  // bytes_written+1 -1
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // range &feed bytes_written+1 -1
  var_range, 3, var_1170_0_feed, LOCAL(1), minus_num_1, 1, var_1170_0_feed,
  // is_empty:
  var_is_empty, 1, var_1170_0_feed, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_feed_is_empty, var_next, IO_TAIL_CALL,
  POS(1250, 19),
  POS(1251, 31),
  POS(1251, 19),
  POS(1253, 26),
  POS(1252, 19)
};

static TAB_NUM t_lambda_feed_is_empty[] = {
  0, // locals
  0, // parameters
  // close! in_fd
  var_close, 1, var_1169_0_in_fd, IO_CALL(0),
  // !in_fd undefined
  LET, 1, var_undefined, 1, var_1169_0_in_fd,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1254, 23),
  POS(1255, 23),
  POS(1256, 23)
};

static TAB_NUM t_lambda_69[] = {
  0, // locals
  0, // parameters
  // for_each read_descriptors
  var_for_each, 3, var_1226_1_read_descriptors, lambda_70, lambda_76, IO_TAIL_CALL,
  POS(1259, 19)
};

static TAB_NUM t_lambda_70[] = {
  1, // locals
  1, // parameters
  var_1260_3_read_descriptor,
  // read! $buf read_descriptor 0x100000
  var_read, 2, var_1260_3_read_descriptor, num_0x100000, IO_CALL(1), var_1261_7_buf,
  // is_empty: # closed from the other side
  var_is_empty, 1, var_1261_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_empty, lambda_73, IO_TAIL_CALL,
  POS(1261, 23),
  POS(1263, 29),
  POS(1262, 23)
};

static TAB_NUM t_lambda_buf_is_empty[] = {
  1, // locals
  0, // parameters
  // close! read_descriptor
  var_close, 1, var_1260_3_read_descriptor, IO_CALL(0),
  // read_descriptor == out_fd:
  var_std__equal, 2, var_1260_3_read_descriptor, var_1175_1_out_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_71, lambda_72, IO_TAIL_CALL,
  POS(1264, 27),
  POS(1266, 29),
  POS(1265, 27)
};

static TAB_NUM t_lambda_71[] = {
  0, // locals
  0, // parameters
  // !out_fd undefined
  LET, 1, var_undefined, 1, var_1175_1_out_fd,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1267, 31),
  POS(1268, 31)
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  0, // parameters
  // err_fds(read_descriptor) undefined
  var_1174_1_err_fds, 2, var_1260_3_read_descriptor, var_undefined, 1, var_1174_1_err_fds,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1270, 32),
  POS(1271, 31)
};

static TAB_NUM t_lambda_73[] = {
  1, // locals
  0, // parameters
  // read_descriptor == out_fd:
  var_std__equal, 2, var_1260_3_read_descriptor, var_1175_1_out_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_74, lambda_75, IO_TAIL_CALL,
  POS(1274, 29),
  POS(1273, 27)
};

static TAB_NUM t_lambda_74[] = {
  0, // locals
  0, // parameters
  // append &out buf
  var_append, 2, var_1204_1_out, var_1261_7_buf, 1, var_1204_1_out,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1275, 31),
  POS(1276, 31)
};

static TAB_NUM t_lambda_75[] = {
  2, // locals
  0, // parameters
  // err_fds(read_descriptor)) buf
  var_1174_1_err_fds, 1, var_1260_3_read_descriptor, 1, LOCAL(1),
  // err(err_fds(read_descriptor)) buf
  var_1205_1_err, 1, LOCAL(1), 1, LOCAL(2),
  // append &err(err_fds(read_descriptor)) buf
  var_append, 2, LOCAL(2), var_1261_7_buf, 1, LOCAL(2),
  // err(err_fds(read_descriptor)) buf
  var_1205_1_err, 2, LOCAL(1), LOCAL(2), 1, var_1205_1_err,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1278, 43),
  POS(1278, 39),
  POS(1278, 31),
  POS(1278, 39),
  POS(1279, 31)
};

static TAB_NUM t_lambda_76[] = {
  2, // locals
  0, // parameters
  // is_empty && out_fd.is_undefined && err_fds.is_empty
  var_is_empty, 1, var_1173_1_pids, 1, LOCAL(1),
  // is_empty && out_fd.is_undefined && err_fds.is_empty
  var_std__and, 2, LOCAL(1), lambda_77, 1, LOCAL(2),
  // if!
  var_if, 3, LOCAL(2), lambda_79, var_next, IO_TAIL_CALL,
  POS(1282, 30),
  POS(1282, 30),
  POS(1281, 23)
};

static TAB_NUM t_lambda_77[] = {
  2, // locals
  0, // parameters
  // is_undefined && err_fds.is_empty
  var_is_undefined, 1, var_1175_1_out_fd, 1, LOCAL(1),
  // is_undefined && err_fds.is_empty
  var_std__and, 2, LOCAL(1), lambda_78, 1, LOCAL(2),
  // out_fd.is_undefined && err_fds.is_empty
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1282, 49),
  POS(1282, 49),
  POS(1282, 42)
};

static TAB_NUM t_lambda_78[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_1174_1_err_fds, 1, LOCAL(1),
  // err_fds.is_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1282, 73),
  POS(1282, 65)
};

static TAB_NUM t_lambda_79[] = {
  0, // locals
  0, // parameters
  //  ret out err
  LET, 3, var_1203_1_ret, var_1204_1_out, var_1205_1_err, TAIL_CALL,
  POS(1283, 27)
};

static TAB_NUM t_func_std__extern[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1290_0_command
  // .command_of command)
  LET, -1, func_extern_call, var_command_of, LOCAL(2), LOCAL(1),
  // -> extern_call(.command_of command)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1292, 18),
  POS(1292, 3)
};

static int list_1205_9_arguments[] = {
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_out_fd}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_collect_output}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_err_fd}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_collect_error_output}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_PROCESS_JOINED}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_do_collect_output}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__terminate}},
  {FLT_STRING_8, 15, {.str_8 = "file_descriptor"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__file_descriptor___serialize}},
  {FLT_STRING_8, 16, {.str_8 = "file_descriptor "}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__file_descriptor___deserializer_of}},
  {FLT_STRING_8, 10, {.str_8 = "process_id"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__process_id___serialize}},
  {FLT_STRING_8, 11, {.str_8 = "process_id "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__process_id___deserializer_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_extern_call}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__pipe}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_first_arg_is_a_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_first_arg_is_a_file_descriptor}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_build_commands}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_arg_is_a_function}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__pipe_commands}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_feed_or_fd_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_feed_or_fd_is_a_file_descriptor}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_run_pipe}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_store_pid_and_err_fd}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_LIST, 1, {.arguments = list_1205_9_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_manage_io}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_rpid_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_feed_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_buf_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
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
    {.position = POS(333, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "print\000std", NULL,
    {.const_idx = -func_std__print}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print_string\000", NULL,
    {.position = POS(359, 3)}
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
    {.position = POS(413, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "eprint\000std", NULL,
    {.const_idx = -func_std__eprint}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprint_string\000", NULL,
    {.position = POS(439, 3)}
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
    "486_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "487_0_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "489_1_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "491_7_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read\000", NULL,
    {.position = POS(491, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(494, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(495, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(496, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000", NULL,
    {.position = POS(497, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(492, 5)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "read_from_until\000std", NULL,
    {.const_idx = -func_std__read_from_until}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "528_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "529_0_sentinel\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "530_0_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "532_1_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "534_7_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(541, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(542, 13)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "readln_from\000std", NULL,
    {.const_idx = -func_std__readln_from}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read_from_until\000", NULL,
    {.position = POS(572, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "read_all_from\000std", NULL,
    {.const_idx = -func_std__read_all_from}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "593_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "595_1_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "597_7_buf\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "get_from_until\000std", NULL,
    {.const_idx = -func_std__get_from_until}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_utf8\000", NULL,
    {.position = POS(639, 11)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "getln_from\000std", NULL,
    {.const_idx = -func_std__getln_from}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_from_until\000", NULL,
    {.position = POS(665, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "get_until\000std", NULL,
    {.const_idx = -func_std__get_until}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDIN_FILENO\000", NULL,
    {.position = POS(694, 19)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "getln\000std", NULL,
    {.const_idx = -func_std__getln}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "getln_from\000", NULL,
    {.position = POS(716, 3)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "string\000std_types", std_types__string__attributes,
    {.position = POS(718, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "load\000", NULL,
    {.position = POS(718, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open\000", NULL,
    {.position = POS(736, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "check\000", NULL,
    {.position = POS(737, 3)}
  },
  {
    FOT_UNKNOWN, 0, 5,
    "file_descriptor\000std_types", std_types__file_descriptor__attributes,
    {.position = POS(740, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read_all_from\000", NULL,
    {.position = POS(758, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "close\000", NULL,
    {.position = POS(760, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "save\000", NULL,
    {.position = POS(763, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write_to\000", NULL,
    {.position = POS(788, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "try\000std", NULL,
    {.const_idx = -func_std__try}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(807, 6)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "check\000std", NULL,
    {.const_idx = -func_std__check}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "823_0_argument\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "file_exists\000std", NULL,
    {.const_idx = -func_std__file_exists}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "stat\000", NULL,
    {.position = POS(846, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(847, 6)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "directory\000std", NULL,
    {.const_idx = -func_std__directory}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "870_1_entries\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(870, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "871_10_dir\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "opendir\000", NULL,
    {.position = POS(871, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "873_10_entry\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "readdir\000", NULL,
    {.position = POS(873, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "closedir\000", NULL,
    {.position = POS(876, 9)}
  },
  {
    FOT_UNKNOWN, 0, 4,
    "stat\000std_types", std_types__stat__attributes,
    {.position = POS(882, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "access_time_of\000", NULL,
    {.position = POS(882, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "access_time_seconds_of\000", NULL,
    {.position = POS(894, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "access_time_nanoseconds_of\000", NULL,
    {.position = POS(895, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "over\000std", NULL,
    {.position = POS(895, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "modification_time_of\000", NULL,
    {.position = POS(897, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "modification_time_seconds_of\000", NULL,
    {.position = POS(906, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "modification_time_nanoseconds_of\000", NULL,
    {.position = POS(907, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "status_change_time_of\000", NULL,
    {.position = POS(909, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "status_change_time_seconds_of\000", NULL,
    {.position = POS(918, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "status_change_time_nanoseconds_of\000", NULL,
    {.position = POS(919, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_directory\000", NULL,
    {.position = POS(921, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mode_of\000", NULL,
    {.position = POS(928, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(928, 6)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "call\000std", NULL,
    {.const_idx = -func_std__call}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(943, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "943_1_do_collect_output\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(943, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "944_1_do_collect_error_output\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "945_1_env_vars\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_string\000", NULL,
    {.position = POS(946, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(946, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "environment\000", NULL,
    {.position = POS(947, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(947, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(951, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(949, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(947, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "954_29_out_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "954_37_err_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_process\000", NULL,
    {.position = POS(954, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "956_1_io\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "io\000std_types", NULL,
    {.position = POS(956, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "join_process\000", NULL,
    {.position = POS(957, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "start_reading_from\000", NULL,
    {.position = POS(958, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "961_1_out\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "962_1_err\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_events\000", NULL,
    {.position = POS(964, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "966_13_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "966_17_data\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ\000", NULL,
    {.position = POS(968, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(973, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PROCESS_JOINED\000", NULL,
    {.position = POS(992, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "993_1_ret\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "terminate\000std", NULL,
    {.const_idx = -func_std__terminate}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXIT_SUCCESS\000", NULL,
    {.position = POS(1014, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exit\000", NULL,
    {.position = POS(1014, 3)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_file_descriptor\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(1020, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_file_descriptor\000", NULL,
    {.position = POS(1020, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(1020, 41)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(1028, 29)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(1032, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1037_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1039_1_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(1043, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deserializer_of\000", NULL,
    {.position = POS(1046, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "integer\000", NULL,
    {.position = POS(1053, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "file_descriptor\000", NULL,
    {.position = POS(1053, 6)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_process_id\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_process_id\000", NULL,
    {.position = POS(1059, 20)}
  },
  {
    FOT_UNKNOWN, 0, 4,
    "process_id\000std_types", std_types__process_id__attributes,
    {.position = POS(1063, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1076_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1078_1_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "process_id\000", NULL,
    {.position = POS(1092, 6)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "command_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "flatten\000", NULL,
    {.position = POS(1101, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "call\000", NULL,
    {.position = POS(1101, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pipe\000std", NULL,
    {.const_idx = -func_std__pipe}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1105_0_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1107_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1108_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1109_1_in_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1110_1_feed\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1111_1_commands\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1112_1_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1113_1_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1114_1_first_arg\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(1116, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1134_1_arg\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_function\000", NULL,
    {.position = POS(1136, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(1138, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(1141, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pipe_commands\000std", NULL,
    {.const_idx = -func_std__pipe_commands}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1154_0_feed_or_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1155_0_commands\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1169_0_in_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1170_0_feed\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1171_0_commands\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1173_1_pids\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(1173, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1174_1_err_fds\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1175_1_out_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1176_1_env_vars\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1185_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1186_9_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1186_15_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1188_1_pid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1189_1_err_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(1191, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(1191, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(1203, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1203_1_ret\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dup\000", NULL,
    {.position = POS(1203, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1204_1_out\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1205_1_err\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1216_1_read_descriptor_list\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "keys_of\000", NULL,
    {.position = POS(1216, 33)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1226_1_read_descriptors\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1227_1_write_descriptors\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pselect\000", NULL,
    {.position = POS(1224, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CHILD_CHANGED_STATE\000", NULL,
    {.position = POS(1232, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1235_7_rpid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1235_13_status\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "wait\000", NULL,
    {.position = POS(1235, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1260_3_read_descriptor\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1261_7_buf\000", NULL
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
  167, // number of constants
  223, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
