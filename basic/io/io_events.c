#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  uni_std__READ = -1,
  uni_std__CLOSED = -2,
  uni_std__READ_FAILED = -3,
  uni_std__CONNECT = -4,
  uni_std__WRITE_PENDING = -5,
  uni_std__WRITE_COMPLETED = -6,
  uni_std__WRITE_FAILED = -7,
  uni_std__PROCESS_JOINED = -8,
  uni_std__SIGNAL = -9,
  uni_std__JOB_COMPLETED = -10,
  uni_std__JOB_FAILED = -11,
  num_0 = -12,
  str_anonymous_resour = -13,
  func_std_types__resource___enable_logging = -14,
  func_std_types__resource___disable_logging = -15,
  tuple_241_1 = -16,
  func_std_types__io___start_reading_from = -17,
  lambda_1 = -18,
  lambda_2 = -19,
  func_std_types__io___stop_reading_from = -20,
  func_std_types__io___print_to = -21,
  func_std_types__io___write = -22,
  lambda_3 = -23,
  lambda_4 = -24,
  func_std_types__io___cancel_write = -25,
  func_std_types__io___close = -26,
  func_std_types__io___join_process = -27,
  func_std_types__io___start_injecting_window_change_events = -28,
  func_std_types__io___stop_injecting_window_change_events = -29,
  func_std_types__io___start_catching_signals = -30,
  lambda_5 = -31,
  lambda_6 = -32,
  func_std_types__io___stop_catching_signals = -33,
  lambda_7 = -34,
  lambda_8 = -35,
  func_std_types__io___set_timeout = -36,
  lambda_9 = -37,
  lambda_10 = -38,
  lambda_11 = -39,
  lambda_12 = -40,
  func_std__initialize_logging = -41,
  num_3 = -42,
  lambda_log_filename_is_defined = -43,
  str_w = -44,
  lambda_13 = -45,
  lambda_14 = -46,
  lambda_15 = -47,
  lambda_16 = -48,
  func_std_types__io___enable_logging = -49,
  num_1 = -50,
  func_std_types__io___disable_logging = -51,
  func_std_types__io___log = -52,
  lambda_17 = -53,
  lambda_18 = -54,
  chr_10 = -55,
  lambda_19 = -56,
  string_1 = -57,
  string_2 = -58,
  num_2 = -59,
  minus_num_1 = -60,
  lambda_20 = -61,
  lambda_21 = -62,
  lambda_22 = -63,
  func_std_types__io___register_handlers = -64,
  lambda_23 = -65,
  lambda_24 = -66,
  func_std_types__io___deregister_handlers = -67,
  lambda_25 = -68,
  lambda_26 = -69,
  lambda_27 = -70,
  lambda_28 = -71,
  func_std_types__io___deregister_all_handlers = -72,
  func_std_types__io___register_resource = -73,
  func_std_types__io___run = -74,
  func_std_types__io___run_at = -75,
  lambda_29 = -76,
  func_std_types__io___exit = -77,
  func_std_types__io___is_empty = -78,
  lambda_30 = -79,
  lambda_31 = -80,
  lambda_32 = -81,
  func_std__log_unhandled_event = -82,
  lambda_33 = -83,
  lambda_34 = -84,
  lambda_35 = -85,
  lambda_36 = -86,
  lambda_37 = -87,
  lambda_38 = -88,
  num_5 = -89,
  lambda_39 = -90,
  lambda_40 = -91,
  str_unhandled_event = -92,
  string_3 = -93,
  func_std_types__io___initialize = -94,
  func_std_types__io___get_events = -95,
  lambda_41 = -96,
  lambda_42 = -97,
  lambda_43 = -98,
  lambda_44 = -99,
  lambda_45 = -100,
  lambda_46 = -101,
  func_set_timeout = -102,
  lambda_47 = -103,
  lambda_48 = -104,
  lambda_49 = -105,
  lambda_50 = -106,
  lambda_timeout = -107,
  lambda_51 = -108,
  lambda_exit_codes_ofself = -109,
  lambda_52 = -110,
  func_handle_start_jobs = -111,
  lambda_53 = -112,
  lambda_new_event_is_defined = -113,
  lambda_new_event_is_a_list = -114,
  lambda_54 = -115,
  lambda_55 = -116,
  func_handle_write_jobs = -117,
  lambda_56 = -118,
  func_wait_for_events = -119,
  lambda_57 = -120,
  lambda_58 = -121,
  lambda_59 = -122,
  lambda_60 = -123,
  lambda_SIGCHLD = -124,
  lambda_61 = -125,
  lambda_62 = -126,
  lambda_63 = -127,
  lambda_watched_pids_ofselfpid = -128,
  lambda_64 = -129,
  lambda_SIGWINCH = -130,
  lambda_65 = -131,
  lambda_catched_signals_ofselfsignal = -132,
  func_handle_write_requests = -133,
  lambda_66 = -134,
  lambda_67 = -135,
  lambda_68 = -136,
  string_4 = -137,
  string_5 = -138,
  str_t = -139,
  lambda_69 = -140,
  func_check_file_descriptors = -141,
  lambda_70 = -142,
  lambda_bytes_written_is_an_error = -143,
  lambda_71 = -144,
  lambda_72 = -145,
  lambda_73 = -146,
  func_attempt_reads = -147,
  lambda_74 = -148,
  lambda_75 = -149,
  lambda_76 = -150,
  lambda_77 = -151,
  lambda_does_listen = -152,
  lambda_conn_is_an_error = -153,
  lambda_78 = -154,
  func_do_read = -155,
  lambda_79 = -156,
  num_0x100000 = -157,
  lambda_80 = -158,
  lambda_81 = -159,
  lambda_buf_is_an_error = -160,
  lambda_do_close = -161,
  lambda_82 = -162,
  lambda_buf_is_empty = -163,
  lambda_2_do_close = -164,
  lambda_83 = -165,
  lambda_max_length_is_defined = -166,
  lambda_84 = -167,
  lambda_85 = -168,
  lambda_3_do_close = -169,
  lambda_86 = -170,
  func_attempt_close_operations = -171,
  lambda_87 = -172,
  lambda_write_jobs_ofiofd_is_undefined = -173,
  lambda_88 = -174,
  func_attempt_exit = -175,
  lambda_exit_code_ofio_is_defined = -176,
  lambda_89 = -177,
  lambda_do_log_ofresource = -178,
  str_finalizing = -179,
  func_finalize_resource = -180,
  lambda_90 = -181,
  lambda_io_is_empty = -182,
  lambda_91 = -183,
  lambda_92 = -184,
  func_kill_child_processes = -185,
  lambda_93 = -186,
  lambda_94 = -187,
  func_std_types__io___handle_events = -188,
  lambda_95 = -189,
  lambda_96 = -190,
  lambda_97 = -191,
  lambda_98 = -192,
  lambda_99 = -193,
  lambda_100 = -194,
  lambda_2_new_event_is_defined = -195,
  lambda_new_event = -196,
  func_keep_event = -197,
  lambda_101 = -198
};

enum {
  var__START = FIRST_VAR-1,
  var_std__READ, // initialized
  var_std__assign, // extern
  var_std__CLOSED, // initialized
  var_std__READ_FAILED, // initialized
  var_std__CONNECT, // initialized
  var_std__WRITE_PENDING, // initialized
  var_std__WRITE_COMPLETED, // initialized
  var_std__WRITE_FAILED, // initialized
  var_std__PROCESS_JOINED, // initialized
  var_std__SIGNAL, // initialized
  var_std__JOB_COMPLETED, // initialized
  var_std__JOB_FAILED, // initialized
  var_std__initialize, // attribute
  var_std__get_events, // attribute
  var_std__start_reading_from, // attribute
  var_std__stop_reading_from, // attribute
  var_std__cancel_write, // attribute
  var_std__join_process, // attribute
  var_std__start_injecting_window_change_events, // attribute
  var_std__stop_injecting_window_change_events, // attribute
  var_std__start_catching_signals, // attribute
  var_std__stop_catching_signals, // attribute
  var_std__set_timeout, // attribute
  var_std__enable_logging, // attribute
  var_std__disable_logging, // attribute
  var_std__log, // attribute
  var_std__register_handlers, // attribute
  var_std__deregister_handlers, // attribute
  var_std__deregister_all_handlers, // attribute
  var_std__register_resource, // attribute
  var_std__run, // attribute
  var_std__run_at, // attribute
  var_std__finalize, // attribute
  var_std__random_seed_of, // attribute
  var_std__step_no_of, // attribute
  var_std__current_time_of, // attribute
  var_start_jobs_of, // attribute
  var_timed_jobs_of, // attribute
  var_read_jobs_of, // attribute
  var_write_jobs_of, // attribute
  var_close_jobs_of, // attribute
  var_resources_of, // attribute
  var_watched_pids_of, // attribute
  var_exit_codes_of, // attribute
  var_do_inject_window_change_events, // attribute
  var_catched_signals_of, // attribute
  var_window_change_event_occurred, // attribute
  var_log_level_of, // attribute
  var_exit_code_of, // attribute
  var_timeout_of, // attribute
  var_handlers_of, // attribute
  var_std_types__io, // derived
  var_std_types__object, // extern
  var_current_time_of, // extern polymorphic
  var_undefined, // extern
  var_empty_hash_table, // extern
  var_empty_hash_set, // extern
  var_empty_list, // extern
  var_empty_insert_order_table, // extern
  var_false, // extern
  var_random_seed_of, // extern polymorphic
  var_step_no_of, // extern polymorphic
  var_std__do_log_of, // attribute
  var_std_types__resource, // derived
  var_name_of, // extern polymorphic
  var_do_log_of, // extern polymorphic
  var_enable_logging, // extern polymorphic
  var_true, // extern
  var_disable_logging, // extern polymorphic
  var_std_types__event, // initialized compound
  var_tuple, // extern
  var_start_reading_from, // extern polymorphic
  var_245_5_self, // dynamic
  var_246_5_fd, // dynamic
  var_247_5_do_close, // dynamic
  var_248_5_max_length, // dynamic
  var_is_defined, // extern
  var_if, // extern
  var_stop_reading_from, // extern polymorphic
  var_print_to, // extern polymorphic
  var_create_string, // extern
  var_to_utf8, // extern
  var_write, // extern polymorphic
  var_277_5_data, // dynamic
  var_279_4_job, // dynamic
  var_append, // extern
  var_cancel_write, // extern polymorphic
  var_close, // extern polymorphic
  var_join_process, // extern polymorphic
  var_start_injecting_window_change_events, // extern polymorphic
  var_stop_injecting_window_change_events, // extern polymorphic
  var_start_catching_signals, // extern polymorphic
  var_328_5_self, // dynamic
  var_331_4_catched_signals, // dynamic
  var_next, // extern
  var_for_each, // extern
  var_stop_catching_signals, // extern polymorphic
  var_340_5_self, // dynamic
  var_343_4_catched_signals, // dynamic
  var_set_timeout, // extern polymorphic
  var_352_5_self, // dynamic
  var_353_5_timeout, // dynamic
  var_is_a_number, // extern
  var_std__plus, // extern
  var_update_if, // extern
  var_356_4_current_timeout, // dynamic
  var_is_undefined, // extern
  var_std__less, // extern
  var_std__or, // extern
  var_std__initialize_logging, // initialized
  var_364_5_io, // dynamic
  var_365_5_log_level, // dynamic
  var_366_5_log_filename, // dynamic
  var_open, // extern
  var_STDERR_FILENO, // extern
  var_dup2, // extern
  var_375_15_stdout_info, // dynamic
  var_STDOUT_FILENO, // extern
  var_fstat, // extern
  var_376_15_stderr_info, // dynamic
  var_inode_number_of, // extern
  var_std__equal, // extern
  var_std__not, // extern
  var_device_of, // extern
  var_log, // extern polymorphic
  var_400_5_self, // dynamic
  var_401_5_level, // dynamic
  var_402_5_message, // dynamic
  var_is_a_string, // extern
  var_update_if_not, // extern
  var_has_suffix, // extern
  var_push, // extern
  var_split_into_lines, // extern
  var_409_8_prefix, // dynamic
  var_std__string, // extern
  var_410_8_buf, // dynamic
  var_range, // extern
  var_length_of, // extern
  var_spaces, // extern
  var_register_handlers, // extern polymorphic
  var_422_5_self, // dynamic
  var_423_5_id, // dynamic
  var_426_4_handlers, // dynamic
  var_default_value, // extern
  var_deregister_handlers, // extern polymorphic
  var_438_5_self, // dynamic
  var_439_5_id, // dynamic
  var_440_5_types, // dynamic
  var_442_4_handlers, // dynamic
  var_deregister_all_handlers, // extern polymorphic
  var_register_resource, // extern polymorphic
  var_run, // extern polymorphic
  var_run_at, // extern polymorphic
  var_483_5_self, // dynamic
  var_484_5_time, // dynamic
  var_exit, // extern polymorphic
  var_is_empty, // extern polymorphic
  var_504_5_self, // dynamic
  var_std__and, // extern
  var_std__log_unhandled_event, // initialized
  var_513_29_io, // dynamic
  var_514_10_type, // dynamic
  var_514_16_fd, // dynamic
  var_WRITE_FAILED, // extern
  var_WRITE_PENDING, // extern
  var_WRITE_COMPLETED, // extern
  var_std__sequence, // extern
  var_case, // extern
  var_serialize, // extern
  var_trim_right, // extern
  var_initialize, // extern polymorphic
  var_current_time, // extern
  var_get_events, // extern polymorphic
  var_541_5_self, // dynamic
  var_inc, // extern
  var_554_4_events, // dynamic
  var_555_4_want_to_write, // dynamic
  var_557_18_t, // dynamic
  var_558_4_start_jobs, // dynamic
  var_560_4_first_job_time, // dynamic
  var_561_4_remaining_timed_jobs, // dynamic
  var_562_4_timeout, // dynamic
  var_564_8_timed_job, // dynamic
  var_565_40_time, // dynamic
  var_std__minus, // extern
  var_max, // extern
  var_any_of, // extern
  var_608_41_new_event, // dynamic
  var_apply, // extern
  var_is_a_list, // extern
  var_636_8_read_descriptor_list, // dynamic
  var_is_not_empty, // extern
  var_645_10_can_read, // dynamic
  var_646_10_can_write, // dynamic
  var_pselect, // extern
  var_650_8_injected_into_stdin, // dynamic
  var_651_8_write_jobs, // dynamic
  var_653_12_signal, // dynamic
  var_SIGCHLD, // extern
  var_process_id, // extern
  var_658_29_pid, // dynamic
  var_658_34_status, // dynamic
  var_waitpid, // extern
  var_is_an_error, // extern
  var_to_integer, // extern
  var_break, // extern
  var_exitstatus, // extern
  var_PROCESS_JOINED, // extern
  var_typed_tuple, // extern
  var_loop, // extern
  var_SIGWINCH, // extern
  var_SIGNAL, // extern
  var_STDIN_FILENO, // extern
  var_get_terminal_size, // extern
  var_READ, // extern
  var_705_14_fd, // dynamic
  var_706_14_job, // dynamic
  var_707_21_bytes_written, // dynamic
  var_734_14_fd, // dynamic
  var_not, // extern
  var_type_of, // extern
  var_SOCKET, // extern
  var_is_listening, // extern
  var_742_32_conn, // dynamic
  var_accept, // extern
  var_READ_FAILED, // extern
  var_CONNECT, // extern
  var_757_42_do_close, // dynamic
  var_757_52_max_length, // dynamic
  var_763_24_buf, // dynamic
  var_read, // extern
  var_CLOSED, // extern
  var_if_not, // extern
  var_806_29_io, // dynamic
  var_808_8_fd, // dynamic
  var_817_17_io, // dynamic
  var_821_12_resource, // dynamic
  var_finalize, // extern
  var_840_25_io, // dynamic
  var_SIGKILL, // extern
  var_kill, // extern
  var_std__handle_events, // attribute
  var_std__handle_event, // attribute
  var_handle_events, // extern polymorphic
  var_850_32_io, // dynamic
  var_851_4_new_events, // dynamic
  var_852_4_handlers, // dynamic
  var_854_8_event, // dynamic
  var_855_14_type, // dynamic
  var_855_20_id, // dynamic
  var_855_24_data, // dynamic
  var_856_8_id_handlers, // dynamic
  var_861_12_handler, // dynamic
  var_866_16_context, // dynamic
  var_is_a_tuple, // extern
  var_first, // extern
  var_second, // extern
  var_parameter_count_of, // extern
  var_869_23_new_event, // dynamic
  var_list, // extern
  var__END
};


static TAB_NUM t_func_std_types__resource___enable_logging[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 231_5_self
  // .do_log_of true)
  LET, -1, LOCAL(2), var_do_log_of, var_true, LOCAL(1),
  // -> self(.do_log_of true)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(233, 11),
  POS(233, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__resource___enable_logging = {
  t_func_std_types__resource___enable_logging, NULL, 2, 1,
  {"231_5_self\000"}
};

static TAB_NUM t_func_std_types__resource___disable_logging[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 237_5_self
  // .do_log_of false)
  LET, -1, LOCAL(2), var_do_log_of, var_false, LOCAL(1),
  // -> self(.do_log_of false)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(239, 11),
  POS(239, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__resource___disable_logging = {
  t_func_std_types__resource___disable_logging, NULL, 2, 1,
  {"237_5_self\000"}
};

static TAB_NUM t_func_std_types__io___start_reading_from[] = {
  2, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_245_5_self,
  MANDATORY_PARAMETER, var_246_5_fd,
  var_true, var_247_5_do_close,
  var_undefined, var_248_5_max_length,
  // exit_code_of(self).is_defined
  var_exit_code_of, 1, var_245_5_self, 1, LOCAL(1),
  // is_defined
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1, lambda_2, TAIL_CALL,
  POS(251, 5),
  POS(251, 24),
  POS(250, 3)
};

static FUNCTION_INFO i_func_std_types__io___start_reading_from = {
  t_func_std_types__io___start_reading_from, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_245_5_self, TAIL_CALL,
  POS(252, 7)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  3, // locals
  0, // parameters
  // !self.read_jobs_of(fd) tuple(do_close max_length)
  var_tuple, 2, var_247_5_do_close, var_248_5_max_length, 1, LOCAL(2),
  // read_jobs_of(fd) tuple(do_close max_length)
  var_read_jobs_of, 1, var_245_5_self, 1, LOCAL(3),
  // read_jobs_of(fd) tuple(do_close max_length)
  LOCAL(3), 2, var_246_5_fd, LOCAL(2), 1, LOCAL(3),
  // self.read_jobs_of(fd) tuple(do_close max_length)
  LET, -1, var_245_5_self, var_read_jobs_of, LOCAL(3), var_245_5_self,
  // -> self
  LET, 1, var_245_5_self, TAIL_CALL,
  POS(254, 7),
  POS(254, 13),
  POS(254, 13),
  POS(254, 8),
  POS(255, 7)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 5, 0,
  {}
};

static TAB_NUM t_func_std_types__io___stop_reading_from[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 259_5_self
  LOCAL(4), // 260_5_fd
  // read_jobs_of(fd) undefined
  var_read_jobs_of, 1, LOCAL(3), 1, LOCAL(2),
  // read_jobs_of(fd) undefined
  LOCAL(2), 2, LOCAL(4), var_undefined, 1, LOCAL(2),
  // self.read_jobs_of(fd) undefined
  LET, -1, LOCAL(3), var_read_jobs_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(262, 9),
  POS(262, 9),
  POS(262, 4),
  POS(263, 3),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__io___stop_reading_from = {
  t_func_std_types__io___stop_reading_from, NULL, 4, 2,
  {"260_5_fd\000", "259_5_self\000"}
};

static TAB_NUM t_func_std_types__io___print_to[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 267_5_self
  MANDATORY_PARAMETER, LOCAL(4), // 268_5_fd
  REST_PARAMETER, LOCAL(5), // 269_5_args
  // create_string(args).to_utf8
  var_create_string, 1, LOCAL(5), 1, LOCAL(1),
  // to_utf8
  var_to_utf8, 1, LOCAL(1), 1, LOCAL(2),
  // write self fd create_string(args).to_utf8
  var_write, 3, LOCAL(3), LOCAL(4), LOCAL(2), TAIL_CALL,
  POS(271, 17),
  POS(271, 37),
  POS(271, 3),
  LOCAL(4),
  LOCAL(3),
  LOCAL(5)
};

static FUNCTION_INFO i_func_std_types__io___print_to = {
  t_func_std_types__io___print_to, NULL, 3, 3,
  {"268_5_fd\000", "267_5_self\000", "269_5_args\000"}
};

static TAB_NUM t_func_std_types__io___write[] = {
  4, // locals
  3, // parameters
  LOCAL(3), // 275_5_self
  LOCAL(4), // 276_5_fd
  var_277_5_data,
  // write_jobs_of(self)(fd)
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(1),
  // $job write_jobs_of(self)(fd)
  LOCAL(1), 1, LOCAL(4), 1, var_279_4_job,
  // is_defined
  var_is_defined, 1, var_279_4_job, 1, LOCAL(1),
  // !job
  var_if, 3, LOCAL(1), lambda_3, lambda_4, 1, var_279_4_job,
  // write_jobs_of(fd) job
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(2),
  // write_jobs_of(fd) job
  LOCAL(2), 2, LOCAL(4), var_279_4_job, 1, LOCAL(2),
  // self.write_jobs_of(fd) job
  LET, -1, LOCAL(3), var_write_jobs_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(279, 8),
  POS(279, 3),
  POS(282, 11),
  POS(280, 3),
  POS(285, 9),
  POS(285, 9),
  POS(285, 4),
  POS(286, 3),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__io___write = {
  t_func_std_types__io___write, NULL, 8, 2,
  {"276_5_fd\000", "275_5_self\000"}
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // append(job data)
  var_append, 2, var_279_4_job, var_277_5_data, 1, LOCAL(1),
  //  append(job data)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(283, 10),
  POS(283, 9)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_277_5_data, TAIL_CALL,
  POS(284, 9)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__io___cancel_write[] = {
  5, // locals
  2, // parameters
  LOCAL(3), // 290_5_self
  LOCAL(4), // 291_5_fd
  // write_jobs_of(self)(fd)
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(1),
  // $unwritten_text write_jobs_of(self)(fd)
  LOCAL(1), 1, LOCAL(4), 1, LOCAL(5),
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, LOCAL(4), var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, LOCAL(3), var_write_jobs_of, LOCAL(2), LOCAL(3),
  // -> self unwritten_text
  LET, 2, LOCAL(3), LOCAL(5), TAIL_CALL,
  POS(293, 19),
  POS(293, 3),
  POS(294, 9),
  POS(294, 9),
  POS(294, 4),
  POS(295, 3),
  LOCAL(5),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__io___cancel_write = {
  t_func_std_types__io___cancel_write, NULL, 6, 3,
  {"293_4_unwritten_text\000", "291_5_fd\000", "290_5_self\000"}
};

static TAB_NUM t_func_std_types__io___close[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 299_5_self
  LOCAL(4), // 300_5_fd
  // stop_reading_from &self fd
  var_stop_reading_from, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // close_jobs_of(fd) true
  var_close_jobs_of, 1, LOCAL(3), 1, LOCAL(2),
  // close_jobs_of(fd) true
  LOCAL(2), 2, LOCAL(4), var_true, 1, LOCAL(2),
  // self.close_jobs_of(fd) true
  LET, -1, LOCAL(3), var_close_jobs_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(302, 3),
  POS(303, 9),
  POS(303, 9),
  POS(303, 4),
  POS(304, 3),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__io___close = {
  t_func_std_types__io___close, NULL, 5, 2,
  {"299_5_self\000", "300_5_fd\000"}
};

static TAB_NUM t_func_std_types__io___join_process[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 308_5_self
  LOCAL(4), // 309_5_pid
  // watched_pids_of(pid) true
  var_watched_pids_of, 1, LOCAL(3), 1, LOCAL(2),
  // watched_pids_of(pid) true
  LOCAL(2), 2, LOCAL(4), var_true, 1, LOCAL(2),
  // self.watched_pids_of(pid) true
  LET, -1, LOCAL(3), var_watched_pids_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(311, 9),
  POS(311, 9),
  POS(311, 4),
  POS(312, 3),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__io___join_process = {
  t_func_std_types__io___join_process, NULL, 4, 2,
  {"308_5_self\000", "309_5_pid\000"}
};

static TAB_NUM t_func_std_types__io___start_injecting_window_change_events[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 316_5_self
  // .do_inject_window_change_events true)
  LET, -1, LOCAL(2), var_do_inject_window_change_events, var_true, LOCAL(1),
  // -> self(.do_inject_window_change_events true)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(318, 11),
  POS(318, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__io___start_injecting_window_change_events = {
  t_func_std_types__io___start_injecting_window_change_events, NULL, 2, 1,
  {"316_5_self\000"}
};

static TAB_NUM t_func_std_types__io___stop_injecting_window_change_events[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 322_5_self
  // .do_inject_window_change_events false)
  LET, -1, LOCAL(2), var_do_inject_window_change_events, var_false, LOCAL(1),
  // -> self(.do_inject_window_change_events false)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(324, 11),
  POS(324, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__io___stop_injecting_window_change_events = {
  t_func_std_types__io___stop_injecting_window_change_events, NULL, 2, 1,
  {"322_5_self\000"}
};

static TAB_NUM t_func_std_types__io___start_catching_signals[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_328_5_self,
  REST_PARAMETER, LOCAL(1), // 329_5_signals
  // $catched_signals catched_signals_of(self)
  var_catched_signals_of, 1, var_328_5_self, 1, var_331_4_catched_signals,
  // for_each signals
  var_for_each, 3, LOCAL(1), lambda_5, lambda_6, TAIL_CALL,
  POS(331, 3),
  POS(332, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__io___start_catching_signals = {
  t_func_std_types__io___start_catching_signals, NULL, 2, 1,
  {"329_5_signals\000"}
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 333_8_signal
  // catched_signals(signal) true
  var_331_4_catched_signals, 2, LOCAL(1), var_true, 1, var_331_4_catched_signals,
  // next
  var_next, 0, TAIL_CALL,
  POS(334, 8),
  POS(335, 7),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 2, 1,
  {"333_8_signal\000"}
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // .catched_signals_of catched_signals)
  LET, -1, var_328_5_self, var_catched_signals_of, var_331_4_catched_signals, LOCAL(1),
  //  self(.catched_signals_of catched_signals)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(336, 13),
  POS(336, 7)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__io___stop_catching_signals[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_340_5_self,
  REST_PARAMETER, LOCAL(1), // 341_5_signals
  // $catched_signals catched_signals_of(self)
  var_catched_signals_of, 1, var_340_5_self, 1, var_343_4_catched_signals,
  // for_each signals
  var_for_each, 3, LOCAL(1), lambda_7, lambda_8, TAIL_CALL,
  POS(343, 3),
  POS(344, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__io___stop_catching_signals = {
  t_func_std_types__io___stop_catching_signals, NULL, 2, 1,
  {"341_5_signals\000"}
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 345_8_signal
  // catched_signals(signal) false
  var_343_4_catched_signals, 2, LOCAL(1), var_false, 1, var_343_4_catched_signals,
  // next
  var_next, 0, TAIL_CALL,
  POS(346, 8),
  POS(347, 7),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 2, 1,
  {"345_8_signal\000"}
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // .catched_signals_of catched_signals)
  LET, -1, var_340_5_self, var_catched_signals_of, var_343_4_catched_signals, LOCAL(1),
  //  self(.catched_signals_of catched_signals)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(348, 13),
  POS(348, 7)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__io___set_timeout[] = {
  2, // locals
  2, // parameters
  var_352_5_self,
  var_353_5_timeout,
  // is_a_number &timeout -> current_time_of(self)+timeout
  var_is_a_number, 1, var_353_5_timeout, 1, LOCAL(1),
  // update_if timeout.is_a_number &timeout -> current_time_of(self)+timeout
  var_update_if, 3, LOCAL(1), var_353_5_timeout, lambda_9, 1, var_353_5_timeout,
  // $current_timeout timeout_of(self)
  var_timeout_of, 1, var_352_5_self, 1, var_356_4_current_timeout,
  // is_undefined || timeout < current_timeout
  var_is_undefined, 1, var_356_4_current_timeout, 1, LOCAL(1),
  // is_undefined || timeout < current_timeout
  var_std__or, 2, LOCAL(1), lambda_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_11, lambda_12, TAIL_CALL,
  POS(355, 21),
  POS(355, 3),
  POS(356, 3),
  POS(358, 21),
  POS(358, 21),
  POS(357, 3)
};

static FUNCTION_INFO i_func_std_types__io___set_timeout = {
  t_func_std_types__io___set_timeout, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  2, // locals
  0, // parameters
  // current_time_of(self)+timeout
  var_current_time_of, 1, var_352_5_self, 1, LOCAL(1),
  // current_time_of(self)+timeout
  var_std__plus, 2, LOCAL(1), var_353_5_timeout, 1, LOCAL(2),
  //  current_time_of(self)+timeout
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(355, 45),
  POS(355, 45),
  POS(355, 44)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // timeout < current_timeout
  var_std__less, 2, var_353_5_timeout, var_356_4_current_timeout, 1, LOCAL(1),
  // timeout < current_timeout
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(358, 37),
  POS(358, 37)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // .timeout_of timeout)
  LET, -1, var_352_5_self, var_timeout_of, var_353_5_timeout, LOCAL(1),
  //  self(.timeout_of timeout)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(359, 13),
  POS(359, 7)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_352_5_self, TAIL_CALL,
  POS(360, 7)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__initialize_logging[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_364_5_io,
  num_3, var_365_5_log_level,
  var_undefined, var_366_5_log_filename,
  // is_defined:
  var_is_defined, 1, var_366_5_log_filename, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_log_filename_is_defined, lambda_13, IO_TAIL_CALL,
  POS(369, 18),
  POS(368, 3)
};

static FUNCTION_INFO i_func_std__initialize_logging = {
  t_func_std__initialize_logging, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_log_filename_is_defined[] = {
  1, // locals
  0, // parameters
  // open! $log_fd log_filename "w+"
  var_open, 2, var_366_5_log_filename, str_w, IO_CALL(1), LOCAL(1),
  // dup2! log_fd STDERR_FILENO
  var_dup2, 2, LOCAL(1), var_STDERR_FILENO, IO_CALL(0),
  // close! log_fd
  var_close, 1, LOCAL(1), IO_CALL(0),
  // enable_logging io log_level
  var_enable_logging, 2, var_364_5_io, var_365_5_log_level, TAIL_CALL,
  POS(370, 7),
  POS(371, 7),
  POS(372, 7),
  POS(373, 7),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_log_filename_is_defined = {
  t_lambda_log_filename_is_defined, NULL, 4, 1,
  {"370_14_log_fd\000"}
};

static TAB_NUM t_lambda_13[] = {
  5, // locals
  0, // parameters
  // fstat! $stdout_info STDOUT_FILENO
  var_fstat, 1, var_STDOUT_FILENO, IO_CALL(1), var_375_15_stdout_info,
  // fstat! $stderr_info STDERR_FILENO
  var_fstat, 1, var_STDERR_FILENO, IO_CALL(1), var_376_15_stderr_info,
  // inode_number_of(stderr_info) != inode_number_of(stdout_info)
  var_inode_number_of, 1, var_376_15_stderr_info, 1, LOCAL(1),
  // inode_number_of(stdout_info)
  var_inode_number_of, 1, var_375_15_stdout_info, 1, LOCAL(2),
  // inode_number_of(stderr_info) != inode_number_of(stdout_info)
  var_std__equal, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // inode_number_of(stderr_info) != inode_number_of(stdout_info)
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // 
  var_std__or, 2, LOCAL(4), lambda_14, 1, LOCAL(5),
  // if
  var_if, 3, LOCAL(5), lambda_15, lambda_16, TAIL_CALL,
  POS(375, 7),
  POS(376, 7),
  POS(379, 11),
  POS(379, 43),
  POS(379, 11),
  POS(379, 11),
  POS(378, 11),
  POS(377, 7)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 8, 0,
  {}
};

static TAB_NUM t_lambda_14[] = {
  4, // locals
  0, // parameters
  // device_of(stderr_info) != device_of(stdout_info)
  var_device_of, 1, var_376_15_stderr_info, 1, LOCAL(1),
  // device_of(stdout_info)
  var_device_of, 1, var_375_15_stdout_info, 1, LOCAL(2),
  // device_of(stderr_info) != device_of(stdout_info)
  var_std__equal, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // device_of(stderr_info) != device_of(stdout_info)
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // device_of(stderr_info) != device_of(stdout_info)
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(380, 11),
  POS(380, 37),
  POS(380, 11),
  POS(380, 11),
  POS(380, 11)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  // enable_logging io log_level
  var_enable_logging, 2, var_364_5_io, var_365_5_log_level, TAIL_CALL,
  POS(382, 11)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_364_5_io, TAIL_CALL,
  POS(383, 11)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__io___enable_logging[] = {
  3, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 387_5_self
  num_1, LOCAL(3), // 388_5_level
  // .log_level_of level)
  LET, -1, LOCAL(2), var_log_level_of, LOCAL(3), LOCAL(1),
  // -> self(.log_level_of level)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(390, 11),
  POS(390, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__io___enable_logging = {
  t_func_std_types__io___enable_logging, NULL, 2, 2,
  {"388_5_level\000", "387_5_self\000"}
};

static TAB_NUM t_func_std_types__io___disable_logging[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 394_5_self
  // .log_level_of 0)
  LET, -1, LOCAL(2), var_log_level_of, num_0, LOCAL(1),
  // -> self(.log_level_of 0)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(396, 11),
  POS(396, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__io___disable_logging = {
  t_func_std_types__io___disable_logging, NULL, 2, 1,
  {"394_5_self\000"}
};

static TAB_NUM t_func_std_types__io___log[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_400_5_self,
  num_1, var_401_5_level,
  MANDATORY_PARAMETER, var_402_5_message,
  // log_level_of(self):
  var_log_level_of, 1, var_400_5_self, 1, LOCAL(1),
  // log_level_of(self):
  var_std__less, 2, LOCAL(1), var_401_5_level, 1, LOCAL(2),
  // log_level_of(self):
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_17, lambda_22, TAIL_CALL,
  POS(405, 14),
  POS(405, 14),
  POS(405, 14),
  POS(404, 3)
};

static FUNCTION_INFO i_func_std_types__io___log = {
  t_func_std_types__io___log, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_17[] = {
  2, // locals
  0, // parameters
  // is_a_string &message -> message()
  var_is_a_string, 1, var_402_5_message, 1, LOCAL(1),
  // update_if_not message.is_a_string &message -> message()
  var_update_if_not, 3, LOCAL(1), var_402_5_message, lambda_18, 1, var_402_5_message,
  // message .has_suffix. '@nl;' &message: push message '@nl;'
  var_has_suffix, 2, var_402_5_message, chr_10, 1, LOCAL(1),
  // update_if_not message .has_suffix. '@nl;' &message: push message '@nl;'
  var_update_if_not, 3, LOCAL(1), var_402_5_message, lambda_19, 1, var_402_5_message,
  // $lines split_into_lines(message)
  var_split_into_lines, 1, var_402_5_message, 1, LOCAL(2),
  // $prefix "[@(level)] "
  var_std__string, 3, string_1, var_401_5_level, string_2, 1, var_409_8_prefix,
  // lines(1))
  LOCAL(2), 1, num_1, 1, LOCAL(1),
  // $buf append(prefix lines(1))
  var_append, 2, var_409_8_prefix, LOCAL(1), 1, var_410_8_buf,
  // range &lines 2 -1
  var_range, 3, LOCAL(2), num_2, minus_num_1, 1, LOCAL(2),
  // for_each lines
  var_for_each, 3, LOCAL(2), lambda_20, lambda_21, TAIL_CALL,
  POS(406, 29),
  POS(406, 7),
  POS(407, 21),
  POS(407, 7),
  POS(408, 7),
  POS(409, 7),
  POS(410, 26),
  POS(410, 7),
  POS(411, 7),
  POS(412, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 10, 1,
  {"408_8_lines\000"}
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  0, // parameters
  // message()
  var_402_5_message, 0, 1, LOCAL(1),
  //  message()
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(406, 53),
  POS(406, 52)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  // push message '@nl;'
  var_push, 2, var_402_5_message, chr_10, TAIL_CALL,
  POS(407, 59)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_20[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 413_12_line
  // length_of(prefix)) line
  var_length_of, 1, var_409_8_prefix, 1, LOCAL(1),
  // spaces(length_of(prefix)) line
  var_spaces, 1, LOCAL(1), 1, LOCAL(2),
  // append &buf spaces(length_of(prefix)) line
  var_append, 3, var_410_8_buf, LOCAL(2), LOCAL(3), 1, var_410_8_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(414, 30),
  POS(414, 23),
  POS(414, 11),
  POS(415, 11),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 4, 1,
  {"413_12_line\000"}
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // to_utf8
  var_to_utf8, 1, var_410_8_buf, 1, LOCAL(1),
  // write self STDERR_FILENO buf.to_utf8
  var_write, 3, var_400_5_self, var_STDERR_FILENO, LOCAL(1), TAIL_CALL,
  POS(417, 40),
  POS(417, 11)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_400_5_self, TAIL_CALL,
  POS(418, 7)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__io___register_handlers[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_422_5_self,
  MANDATORY_PARAMETER, var_423_5_id,
  REST_PARAMETER, LOCAL(3), // 424_5_type_handlers
  // handlers_of(self)(id) empty_hash_table)
  var_handlers_of, 1, var_422_5_self, 1, LOCAL(1),
  // handlers_of(self)(id) empty_hash_table)
  LOCAL(1), 1, var_423_5_id, 1, LOCAL(2),
  // $handlers default_value(handlers_of(self)(id) empty_hash_table)
  var_default_value, 2, LOCAL(2), var_empty_hash_table, 1, var_426_4_handlers,
  // for_each type_handlers
  var_for_each, 3, LOCAL(3), lambda_23, lambda_24, TAIL_CALL,
  POS(426, 27),
  POS(426, 27),
  POS(426, 3),
  POS(427, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__io___register_handlers = {
  t_func_std_types__io___register_handlers, NULL, 4, 1,
  {"424_5_type_handlers\000"}
};

static TAB_NUM t_lambda_23[] = {
  3, // locals
  1, // parameters
  LOCAL(1), // 428_8_type_handler
  // type_handler $type $handler
  LOCAL(1), 0, 2, LOCAL(2), LOCAL(3),
  // handlers(type) handler
  var_426_4_handlers, 2, LOCAL(2), LOCAL(3), 1, var_426_4_handlers,
  // next
  var_next, 0, TAIL_CALL,
  POS(429, 7),
  POS(430, 8),
  POS(431, 7),
  LOCAL(1),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 3, 3,
  {"428_8_type_handler\000", "429_27_handler\000", "429_21_type\000"}
};

static TAB_NUM t_lambda_24[] = {
  2, // locals
  0, // parameters
  // handlers_of(id) handlers
  var_handlers_of, 1, var_422_5_self, 1, LOCAL(2),
  // handlers_of(id) handlers
  LOCAL(2), 2, var_423_5_id, var_426_4_handlers, 1, LOCAL(2),
  // self.handlers_of(id) handlers
  LET, -1, var_422_5_self, var_handlers_of, LOCAL(2), var_422_5_self,
  // -> self
  LET, 1, var_422_5_self, TAIL_CALL,
  POS(433, 13),
  POS(433, 13),
  POS(433, 8),
  POS(434, 7)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_std_types__io___deregister_handlers[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_438_5_self,
  MANDATORY_PARAMETER, var_439_5_id,
  REST_PARAMETER, var_440_5_types,
  // handlers_of(self)(id)
  var_handlers_of, 1, var_438_5_self, 1, LOCAL(1),
  // $handlers handlers_of(self)(id)
  LOCAL(1), 1, var_439_5_id, 1, var_442_4_handlers,
  // is_undefined
  var_is_undefined, 1, var_442_4_handlers, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25, lambda_26, TAIL_CALL,
  POS(442, 13),
  POS(442, 3),
  POS(444, 14),
  POS(443, 3)
};

static FUNCTION_INFO i_func_std_types__io___deregister_handlers = {
  t_func_std_types__io___deregister_handlers, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_438_5_self, TAIL_CALL,
  POS(445, 7)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  // for_each types
  var_for_each, 3, var_440_5_types, lambda_27, lambda_28, TAIL_CALL,
  POS(447, 7)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 448_12_type
  // handlers(type) undefined
  var_442_4_handlers, 2, LOCAL(1), var_undefined, 1, var_442_4_handlers,
  // next
  var_next, 0, TAIL_CALL,
  POS(449, 12),
  POS(450, 11),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 2, 1,
  {"448_12_type\000"}
};

static TAB_NUM t_lambda_28[] = {
  2, // locals
  0, // parameters
  // handlers_of(id) handlers
  var_handlers_of, 1, var_438_5_self, 1, LOCAL(2),
  // handlers_of(id) handlers
  LOCAL(2), 2, var_439_5_id, var_442_4_handlers, 1, LOCAL(2),
  // self.handlers_of(id) handlers
  LET, -1, var_438_5_self, var_handlers_of, LOCAL(2), var_438_5_self,
  // -> self
  LET, 1, var_438_5_self, TAIL_CALL,
  POS(452, 17),
  POS(452, 17),
  POS(452, 12),
  POS(453, 11)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_std_types__io___deregister_all_handlers[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 457_5_self
  LOCAL(4), // 458_5_id
  // handlers_of(id) empty_hash_table
  var_handlers_of, 1, LOCAL(3), 1, LOCAL(2),
  // handlers_of(id) empty_hash_table
  LOCAL(2), 2, LOCAL(4), var_empty_hash_table, 1, LOCAL(2),
  // self.handlers_of(id) empty_hash_table
  LET, -1, LOCAL(3), var_handlers_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(460, 9),
  POS(460, 9),
  POS(460, 4),
  POS(461, 3),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__io___deregister_all_handlers = {
  t_func_std_types__io___deregister_all_handlers, NULL, 4, 2,
  {"457_5_self\000", "458_5_id\000"}
};

static TAB_NUM t_func_std_types__io___register_resource[] = {
  5, // locals
  3, // parameters
  LOCAL(3), // 465_5_self
  LOCAL(4), // 466_5_key
  LOCAL(5), // 467_5_resource
  // resources_of(key) resource
  var_resources_of, 1, LOCAL(3), 1, LOCAL(2),
  // resources_of(key) resource
  LOCAL(2), 2, LOCAL(4), LOCAL(5), 1, LOCAL(2),
  // self.resources_of(key) resource
  LET, -1, LOCAL(3), var_resources_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(469, 9),
  POS(469, 9),
  POS(469, 4),
  POS(470, 3),
  LOCAL(5),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__io___register_resource = {
  t_func_std_types__io___register_resource, NULL, 4, 3,
  {"467_5_resource\000", "465_5_self\000", "466_5_key\000"}
};

static TAB_NUM t_func_std_types__io___run[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 474_5_self
  MANDATORY_PARAMETER, LOCAL(4), // 475_5_command
  REST_PARAMETER, LOCAL(5), // 476_5_arguments
  // start_jobs_of tuple(command arguments)
  var_start_jobs_of, 1, LOCAL(3), 1, LOCAL(1),
  // tuple(command arguments)
  var_tuple, 2, LOCAL(4), LOCAL(5), 1, LOCAL(2),
  // push &self.start_jobs_of tuple(command arguments)
  var_push, 2, LOCAL(1), LOCAL(2), 1, LOCAL(1),
  // self.start_jobs_of tuple(command arguments)
  LET, -1, LOCAL(3), var_start_jobs_of, LOCAL(1), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(478, 14),
  POS(478, 28),
  POS(478, 3),
  POS(478, 9),
  POS(479, 3),
  LOCAL(3),
  LOCAL(5),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__io___run = {
  t_func_std_types__io___run, NULL, 5, 3,
  {"474_5_self\000", "476_5_arguments\000", "475_5_command\000"}
};

static TAB_NUM t_func_std_types__io___run_at[] = {
  4, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_483_5_self,
  MANDATORY_PARAMETER, var_484_5_time,
  MANDATORY_PARAMETER, LOCAL(3), // 485_5_command
  REST_PARAMETER, LOCAL(4), // 486_5_arguments
  // is_a_number &time -> current_time_of(self)+time
  var_is_a_number, 1, var_484_5_time, 1, LOCAL(1),
  // update_if time.is_a_number &time -> current_time_of(self)+time
  var_update_if, 3, LOCAL(1), var_484_5_time, lambda_29, 1, var_484_5_time,
  // timed_jobs_of tuple(command arguments time)
  var_timed_jobs_of, 1, var_483_5_self, 1, LOCAL(1),
  // tuple(command arguments time)
  var_tuple, 3, LOCAL(3), LOCAL(4), var_484_5_time, 1, LOCAL(2),
  // push &self.timed_jobs_of tuple(command arguments time)
  var_push, 2, LOCAL(1), LOCAL(2), 1, LOCAL(1),
  // self.timed_jobs_of tuple(command arguments time)
  LET, -1, var_483_5_self, var_timed_jobs_of, LOCAL(1), var_483_5_self,
  // -> self
  LET, 1, var_483_5_self, TAIL_CALL,
  POS(488, 18),
  POS(488, 3),
  POS(489, 14),
  POS(489, 28),
  POS(489, 3),
  POS(489, 9),
  POS(490, 3),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__io___run_at = {
  t_func_std_types__io___run_at, NULL, 7, 2,
  {"485_5_command\000", "486_5_arguments\000"}
};

static TAB_NUM t_lambda_29[] = {
  2, // locals
  0, // parameters
  // current_time_of(self)+time
  var_current_time_of, 1, var_483_5_self, 1, LOCAL(1),
  // current_time_of(self)+time
  var_std__plus, 2, LOCAL(1), var_484_5_time, 1, LOCAL(2),
  //  current_time_of(self)+time
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(488, 39),
  POS(488, 39),
  POS(488, 38)
};

static FUNCTION_INFO i_lambda_29 = {
  t_lambda_29, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std_types__io___exit[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 494_5_self
  LOCAL(3), // 495_5_exit_code
  // self
  LET, -2, LOCAL(2), var_exit_code_of, LOCAL(3), var_read_jobs_of, var_empty_hash_table, LOCAL(1),
  // ->
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(498, 5),
  POS(497, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__io___exit = {
  t_func_std_types__io___exit, NULL, 2, 2,
  {"495_5_exit_code\000", "494_5_self\000"}
};

static TAB_NUM t_func_std_types__io___is_empty[] = {
  3, // locals
  1, // parameters
  var_504_5_self,
  // read_jobs_of(self).is_empty
  var_read_jobs_of, 1, var_504_5_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_30, 1, LOCAL(3),
  // ->
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(508, 7),
  POS(508, 26),
  POS(507, 7),
  POS(506, 3)
};

static FUNCTION_INFO i_func_std_types__io___is_empty = {
  t_func_std_types__io___is_empty, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_30[] = {
  3, // locals
  0, // parameters
  // write_jobs_of(self).is_empty
  var_write_jobs_of, 1, var_504_5_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_31, 1, LOCAL(3),
  // write_jobs_of(self).is_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(509, 7),
  POS(509, 27),
  POS(507, 7),
  POS(509, 7)
};

static FUNCTION_INFO i_lambda_30 = {
  t_lambda_30, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_31[] = {
  3, // locals
  0, // parameters
  // close_jobs_of(self).is_empty
  var_close_jobs_of, 1, var_504_5_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_32, 1, LOCAL(3),
  // close_jobs_of(self).is_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(510, 7),
  POS(510, 27),
  POS(507, 7),
  POS(510, 7)
};

static FUNCTION_INFO i_lambda_31 = {
  t_lambda_31, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_32[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(self).is_empty
  var_watched_pids_of, 1, var_504_5_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // watched_pids_of(self).is_empty
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(511, 7),
  POS(511, 29),
  POS(511, 7)
};

static FUNCTION_INFO i_lambda_32 = {
  t_lambda_32, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std__log_unhandled_event[] = {
  3, // locals
  2, // parameters
  var_513_29_io,
  LOCAL(3), // 513_32_event
  // event $type $fd $_argument
  LOCAL(3), 0, 3, var_514_10_type, var_514_16_fd, LOCAL(1),
  // fd == STDERR_FILENO
  var_std__equal, 2, var_514_16_fd, var_STDERR_FILENO, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_33, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_36, lambda_37, TAIL_CALL,
  POS(514, 3),
  POS(517, 7),
  POS(516, 7),
  POS(515, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std__log_unhandled_event = {
  t_func_std__log_unhandled_event, NULL, 4, 1,
  {"513_32_event\000"}
};

static TAB_NUM t_lambda_33[] = {
  2, // locals
  0, // parameters
  // type == WRITE_FAILED
  var_std__equal, 2, var_514_10_type, var_WRITE_FAILED, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_34, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(519, 9),
  POS(518, 9),
  POS(518, 9)
};

static FUNCTION_INFO i_lambda_33 = {
  t_lambda_33, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_34[] = {
  2, // locals
  0, // parameters
  // type == WRITE_PENDING
  var_std__equal, 2, var_514_10_type, var_WRITE_PENDING, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_35, 1, LOCAL(2),
  // type == WRITE_PENDING
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(520, 9),
  POS(518, 9),
  POS(520, 9)
};

static FUNCTION_INFO i_lambda_34 = {
  t_lambda_34, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_35[] = {
  1, // locals
  0, // parameters
  // type == WRITE_COMPLETED
  var_std__equal, 2, var_514_10_type, var_WRITE_COMPLETED, 1, LOCAL(1),
  // type == WRITE_COMPLETED
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(521, 9),
  POS(521, 9)
};

static FUNCTION_INFO i_lambda_35 = {
  t_lambda_35, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  io # prevent recursive logging
  LET, 1, var_513_29_io, TAIL_CALL,
  POS(522, 7)
};

static FUNCTION_INFO i_lambda_36 = {
  t_lambda_36, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_37[] = {
  2, // locals
  0, // parameters
  // WRITE_PENDING, WRITE_COMPLETED -> 5
  var_std__sequence, 2, var_WRITE_PENDING, var_WRITE_COMPLETED, 1, LOCAL(1),
  // $log_level
  var_case, 4, var_514_10_type, LOCAL(1), lambda_38, lambda_39, 1, LOCAL(2),
  // log io log_level -> "
  var_log, 3, var_513_29_io, LOCAL(2), lambda_40, TAIL_CALL,
  POS(527, 11),
  POS(524, 7),
  POS(529, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_37 = {
  t_lambda_37, NULL, 3, 1,
  {"524_8_log_level\000"}
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  //  5
  LET, 1, num_5, TAIL_CALL,
  POS(527, 44)
};

static FUNCTION_INFO i_lambda_38 = {
  t_lambda_38, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  //  2
  LET, 1, num_2, TAIL_CALL,
  POS(528, 13)
};

static FUNCTION_INFO i_lambda_39 = {
  t_lambda_39, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_40[] = {
  4, // locals
  0, // parameters
  // serialize(type).trim_right) - @(serialize(fd))@
  var_serialize, 1, var_514_10_type, 1, LOCAL(1),
  // trim_right) - @(serialize(fd))@
  var_trim_right, 1, LOCAL(1), 1, LOCAL(2),
  // serialize(fd))@
  var_serialize, 1, var_514_16_fd, 1, LOCAL(3),
  // "
  var_std__string, 4, str_unhandled_event, LOCAL(2), string_3, LOCAL(3), 1, LOCAL(4),
  //  "
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(530, 27),
  POS(530, 43),
  POS(530, 59),
  POS(529, 27),
  POS(529, 26)
};

static FUNCTION_INFO i_lambda_40 = {
  t_lambda_40, NULL, 5, 0,
  {}
};

static TAB_NUM t_func_std_types__io___initialize[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 534_5_self
  // current_time! $t
  var_current_time, 0, IO_CALL(1), LOCAL(3),
  // .current_time_of t)
  LET, -1, LOCAL(2), var_current_time_of, LOCAL(3), LOCAL(1),
  // -> self(.current_time_of t)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(536, 3),
  POS(537, 11),
  POS(537, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__io___initialize = {
  t_func_std_types__io___initialize, NULL, 3, 2,
  {"534_5_self\000", "536_18_t\000"}
};

static TAB_NUM t_func_std_types__io___get_events[] = {
  1, // locals
  1, // parameters
  var_541_5_self,
  // step_no_of
  var_step_no_of, 1, var_541_5_self, 1, LOCAL(1),
  // inc &self.step_no_of
  var_inc, 1, LOCAL(1), 1, LOCAL(1),
  // self.step_no_of
  LET, -1, var_541_5_self, var_step_no_of, LOCAL(1), var_541_5_self,
  // attempt_close_operations! &self
  func_attempt_close_operations, 1, var_541_5_self, IO_CALL(1), var_541_5_self,
  // attempt_exit! &self
  func_attempt_exit, 1, var_541_5_self, IO_CALL(1), var_541_5_self,
  // $events empty_list
  LET, 1, var_empty_list, 1, var_554_4_events,
  // $want_to_write empty_list
  LET, 1, var_empty_list, 1, var_555_4_want_to_write,
  // current_time! $t
  var_current_time, 0, IO_CALL(1), var_557_18_t,
  // $start_jobs start_jobs_of(self)
  var_start_jobs_of, 1, var_541_5_self, 1, var_558_4_start_jobs,
  // self.start_jobs_of empty_list
  LET, -1, var_541_5_self, var_start_jobs_of, var_empty_list, var_541_5_self,
  // $first_job_time undefined
  LET, 1, var_undefined, 1, var_560_4_first_job_time,
  // $remaining_timed_jobs empty_list
  LET, 1, var_empty_list, 1, var_561_4_remaining_timed_jobs,
  // $timeout undefined
  LET, 1, var_undefined, 1, var_562_4_timeout,
  // timed_jobs_of(self)
  var_timed_jobs_of, 1, var_541_5_self, 1, LOCAL(1),
  // for_each timed_jobs_of(self)
  var_for_each, 3, LOCAL(1), lambda_41, lambda_46, IO_TAIL_CALL,
  POS(547, 13),
  POS(547, 3),
  POS(547, 8),
  POS(549, 3),
  POS(551, 3),
  POS(554, 3),
  POS(555, 3),
  POS(557, 3),
  POS(558, 3),
  POS(559, 4),
  POS(560, 3),
  POS(561, 3),
  POS(562, 3),
  POS(563, 12),
  POS(563, 3)
};

static FUNCTION_INFO i_func_std_types__io___get_events = {
  t_func_std_types__io___get_events, NULL, 15, 0,
  {}
};

static TAB_NUM t_lambda_41[] = {
  2, // locals
  1, // parameters
  var_564_8_timed_job,
  // timed_job $_command $_arguments $time
  var_564_8_timed_job, 0, 3, LOCAL(1), LOCAL(1), var_565_40_time,
  // t:
  var_std__less, 2, var_557_18_t, var_565_40_time, 1, LOCAL(1),
  // t:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_42, lambda_43, IO_TAIL_CALL,
  POS(565, 7),
  POS(567, 17),
  POS(567, 17),
  POS(566, 7)
};

static FUNCTION_INFO i_lambda_41 = {
  t_lambda_41, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_42[] = {
  0, // locals
  0, // parameters
  // push &start_jobs timed_job
  var_push, 2, var_558_4_start_jobs, var_564_8_timed_job, 1, var_558_4_start_jobs,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(568, 11),
  POS(569, 11)
};

static FUNCTION_INFO i_lambda_42 = {
  t_lambda_42, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_43[] = {
  2, // locals
  0, // parameters
  // push &remaining_timed_jobs timed_job
  var_push, 2, var_561_4_remaining_timed_jobs, var_564_8_timed_job, 1, var_561_4_remaining_timed_jobs,
  // is_undefined || time < first_job_time:
  var_is_undefined, 1, var_560_4_first_job_time, 1, LOCAL(1),
  // is_undefined || time < first_job_time:
  var_std__or, 2, LOCAL(1), lambda_44, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_45, var_next, IO_TAIL_CALL,
  POS(571, 11),
  POS(573, 28),
  POS(573, 28),
  POS(572, 11)
};

static FUNCTION_INFO i_lambda_43 = {
  t_lambda_43, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  0, // parameters
  // time < first_job_time:
  var_std__less, 2, var_565_40_time, var_560_4_first_job_time, 1, LOCAL(1),
  // time < first_job_time:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(573, 44),
  POS(573, 44)
};

static FUNCTION_INFO i_lambda_44 = {
  t_lambda_44, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  // !first_job_time time
  LET, 1, var_565_40_time, 1, var_560_4_first_job_time,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(574, 15),
  POS(575, 15)
};

static FUNCTION_INFO i_lambda_45 = {
  t_lambda_45, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  // self.timed_jobs_of remaining_timed_jobs
  LET, -1, var_541_5_self, var_timed_jobs_of, var_561_4_remaining_timed_jobs, var_541_5_self,
  // set_timeout!
  func_set_timeout, 0, IO_TAIL_CALL,
  POS(578, 8),
  POS(579, 7)
};

static FUNCTION_INFO i_lambda_46 = {
  t_lambda_46, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_set_timeout[] = {
  2, // locals
  0, // parameters
  // !timeout timeout_of(self)
  var_timeout_of, 1, var_541_5_self, 1, var_562_4_timeout,
  // is_defined || first_job_time.is_defined:
  var_is_defined, 1, var_562_4_timeout, 1, LOCAL(1),
  // is_defined || first_job_time.is_defined:
  var_std__or, 2, LOCAL(1), lambda_47, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_48, func_handle_start_jobs, IO_TAIL_CALL,
  POS(582, 5),
  POS(584, 15),
  POS(584, 15),
  POS(583, 5)
};

static FUNCTION_INFO i_func_set_timeout = {
  t_func_set_timeout, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_47[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_560_4_first_job_time, 1, LOCAL(1),
  // first_job_time.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(584, 44),
  POS(584, 29)
};

static FUNCTION_INFO i_lambda_47 = {
  t_lambda_47, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_48[] = {
  2, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_562_4_timeout, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_49, 1, LOCAL(2),
  // update_if
  var_update_if, 3, LOCAL(2), var_562_4_timeout, lambda_timeout, 1, var_562_4_timeout,
  // self.timeout_of undefined
  LET, -1, var_541_5_self, var_timeout_of, var_undefined, var_541_5_self,
  // timeout-t 0)
  var_std__minus, 2, var_562_4_timeout, var_557_18_t, 1, LOCAL(1),
  // !timeout max(timeout-t 0)
  var_max, 2, LOCAL(1), num_0, 1, var_562_4_timeout,
  // 0
  var_std__less, 2, num_0, var_562_4_timeout, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_51, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_52, func_handle_start_jobs, IO_TAIL_CALL,
  POS(587, 21),
  POS(586, 13),
  POS(585, 9),
  POS(590, 10),
  POS(591, 22),
  POS(591, 9),
  POS(594, 23),
  POS(593, 13),
  POS(592, 9)
};

static FUNCTION_INFO i_lambda_48 = {
  t_lambda_48, NULL, 9, 0,
  {}
};

static TAB_NUM t_lambda_49[] = {
  2, // locals
  0, // parameters
  // is_defined && first_job_time < timeout
  var_is_defined, 1, var_560_4_first_job_time, 1, LOCAL(1),
  // is_defined && first_job_time < timeout
  var_std__and, 2, LOCAL(1), lambda_50, 1, LOCAL(2),
  // first_job_time.is_defined && first_job_time < timeout
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(588, 28),
  POS(588, 28),
  POS(588, 13)
};

static FUNCTION_INFO i_lambda_49 = {
  t_lambda_49, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_50[] = {
  1, // locals
  0, // parameters
  // first_job_time < timeout
  var_std__less, 2, var_560_4_first_job_time, var_562_4_timeout, 1, LOCAL(1),
  // first_job_time < timeout
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(588, 42),
  POS(588, 42)
};

static FUNCTION_INFO i_lambda_50 = {
  t_lambda_50, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_timeout[] = {
  0, // locals
  0, // parameters
  //  first_job_time
  LET, 1, var_560_4_first_job_time, TAIL_CALL,
  POS(589, 22)
};

static FUNCTION_INFO i_lambda_timeout = {
  t_lambda_timeout, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_51[] = {
  2, // locals
  0, // parameters
  // exit_codes_of(self): (pid _exit_code)
  var_exit_codes_of, 1, var_541_5_self, 1, LOCAL(1),
  // any_of
  var_any_of, 2, LOCAL(1), lambda_exit_codes_ofself, 1, LOCAL(2),
  // any_of
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(596, 15),
  POS(595, 13),
  POS(595, 13)
};

static FUNCTION_INFO i_lambda_51 = {
  t_lambda_51, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_exit_codes_ofself[] = {
  3, // locals
  2, // parameters
  LOCAL(3), // 596_37_pid
  LOCAL(1),
  // watched_pids_of(self)(pid)
  var_watched_pids_of, 1, var_541_5_self, 1, LOCAL(1),
  // watched_pids_of(self)(pid)
  LOCAL(1), 1, LOCAL(3), 1, LOCAL(2),
  // -> watched_pids_of(self)(pid)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(597, 20),
  POS(597, 20),
  POS(597, 17),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_exit_codes_ofself = {
  t_lambda_exit_codes_ofself, NULL, 3, 1,
  {"596_37_pid\000"}
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  // !timeout 0
  LET, 1, num_0, 1, var_562_4_timeout,
  // handle_start_jobs!
  func_handle_start_jobs, 0, IO_TAIL_CALL,
  POS(599, 13),
  POS(600, 13)
};

static FUNCTION_INFO i_lambda_52 = {
  t_lambda_52, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_handle_start_jobs[] = {
  0, // locals
  0, // parameters
  // for_each start_jobs
  var_for_each, 3, var_558_4_start_jobs, lambda_53, lambda_55, IO_TAIL_CALL,
  POS(605, 5)
};

static FUNCTION_INFO i_func_handle_start_jobs = {
  t_func_handle_start_jobs, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_53[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 606_10_job
  // job $command $arguments
  LOCAL(2), 0, 2, LOCAL(3), LOCAL(4),
  // apply! command &self arguments $new_event
  var_apply, 3, LOCAL(3), var_541_5_self, LOCAL(4), IO_CALL(2), var_541_5_self, var_608_41_new_event,
  // is_defined:
  var_is_defined, 1, var_608_41_new_event, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_new_event_is_defined, var_next, IO_TAIL_CALL,
  POS(607, 9),
  POS(608, 9),
  POS(610, 21),
  POS(609, 9),
  LOCAL(4),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_53 = {
  t_lambda_53, NULL, 4, 3,
  {"607_23_arguments\000", "607_14_command\000", "606_10_job\000"}
};

static TAB_NUM t_lambda_new_event_is_defined[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_608_41_new_event, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_new_event_is_a_list, lambda_54, IO_TAIL_CALL,
  POS(612, 25),
  POS(611, 13)
};

static FUNCTION_INFO i_lambda_new_event_is_defined = {
  t_lambda_new_event_is_defined, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_new_event_is_a_list[] = {
  0, // locals
  0, // parameters
  // append &events new_event
  var_append, 2, var_554_4_events, var_608_41_new_event, 1, var_554_4_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(613, 17),
  POS(614, 17)
};

static FUNCTION_INFO i_lambda_new_event_is_a_list = {
  t_lambda_new_event_is_a_list, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_54[] = {
  0, // locals
  0, // parameters
  // push &events new_event
  var_push, 2, var_554_4_events, var_608_41_new_event, 1, var_554_4_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(616, 17),
  POS(617, 17)
};

static FUNCTION_INFO i_lambda_54 = {
  t_lambda_54, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_55[] = {
  1, // locals
  0, // parameters
  // !start_jobs start_jobs_of(self)
  var_start_jobs_of, 1, var_541_5_self, 1, var_558_4_start_jobs,
  // self.start_jobs_of empty_list
  LET, -1, var_541_5_self, var_start_jobs_of, var_empty_list, var_541_5_self,
  // is_empty
  var_is_empty, 1, var_558_4_start_jobs, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), func_handle_write_jobs, func_handle_start_jobs, IO_TAIL_CALL,
  POS(621, 9),
  POS(622, 10),
  POS(624, 22),
  POS(623, 9)
};

static FUNCTION_INFO i_lambda_55 = {
  t_lambda_55, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_handle_write_jobs[] = {
  1, // locals
  0, // parameters
  // write_jobs_of(self)
  var_write_jobs_of, 1, var_541_5_self, 1, LOCAL(1),
  // for_each write_jobs_of(self)
  var_for_each, 3, LOCAL(1), lambda_56, func_wait_for_events, IO_TAIL_CALL,
  POS(629, 14),
  POS(629, 5)
};

static FUNCTION_INFO i_func_handle_write_jobs = {
  t_func_handle_write_jobs, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_56[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 630_10_fd
  LOCAL(1),
  // push &want_to_write fd
  var_push, 2, var_555_4_want_to_write, LOCAL(2), 1, var_555_4_want_to_write,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(631, 9),
  POS(632, 9),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_56 = {
  t_lambda_56, NULL, 2, 1,
  {"630_10_fd\000"}
};

static TAB_NUM t_func_wait_for_events[] = {
  2, // locals
  0, // parameters
  // $read_descriptor_list empty_list
  LET, 1, var_empty_list, 1, var_636_8_read_descriptor_list,
  // read_jobs_of(self)
  var_read_jobs_of, 1, var_541_5_self, 1, LOCAL(1),
  // for_each !read_descriptor_list read_jobs_of(self)
  var_for_each, 3, LOCAL(1), lambda_57, lambda_58, IO_CALL(1), var_636_8_read_descriptor_list,
  // is_not_empty &timeout -> 0
  var_is_not_empty, 1, var_554_4_events, 1, LOCAL(1),
  // update_if events.is_not_empty &timeout -> 0
  var_update_if, 3, LOCAL(1), var_562_4_timeout, lambda_59, 1, var_562_4_timeout,
  // pselect!
  var_pselect, 4, var_636_8_read_descriptor_list, var_555_4_want_to_write, var_empty_list, var_562_4_timeout, IO_CALL(4), LOCAL(2), var_645_10_can_read, var_646_10_can_write, LOCAL(1),
  // current_time! !self.current_time_of
  var_current_time, 0, IO_CALL(1), LOCAL(1),
  // self.current_time_of
  LET, -1, var_541_5_self, var_current_time_of, LOCAL(1), var_541_5_self,
  // $injected_into_stdin false
  LET, 1, var_false, 1, var_650_8_injected_into_stdin,
  // $write_jobs write_jobs_of(self)
  var_write_jobs_of, 1, var_541_5_self, 1, var_651_8_write_jobs,
  // for_each signals
  var_for_each, 3, LOCAL(2), lambda_60, func_handle_write_requests, IO_TAIL_CALL,
  POS(636, 7),
  POS(637, 38),
  POS(637, 7),
  POS(642, 24),
  POS(642, 7),
  POS(643, 7),
  POS(649, 7),
  POS(649, 22),
  POS(650, 7),
  POS(651, 7),
  POS(652, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_func_wait_for_events = {
  t_func_wait_for_events, NULL, 11, 1,
  {"644_10_signals\000"}
};

static TAB_NUM t_lambda_57[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 638_12_fd
  LOCAL(1),
  // push &read_descriptor_list fd
  var_push, 2, var_636_8_read_descriptor_list, LOCAL(2), 1, var_636_8_read_descriptor_list,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(639, 11),
  POS(640, 11),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_57 = {
  t_lambda_57, NULL, 2, 1,
  {"638_12_fd\000"}
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  0, // parameters
  //  read_descriptor_list
  LET, 1, var_636_8_read_descriptor_list, TAIL_CALL,
  POS(641, 11)
};

static FUNCTION_INFO i_lambda_58 = {
  t_lambda_58, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_59[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(642, 48)
};

static FUNCTION_INFO i_lambda_59 = {
  t_lambda_59, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  1, // parameters
  var_653_12_signal,
  // case signal
  var_case, 6, var_653_12_signal, var_SIGCHLD, lambda_SIGCHLD, var_SIGWINCH, lambda_SIGWINCH, lambda_65, IO_TAIL_CALL,
  POS(654, 11)
};

static FUNCTION_INFO i_lambda_60 = {
  t_lambda_60, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_SIGCHLD[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_61, var_next, IO_TAIL_CALL,
  POS(656, 15)
};

static FUNCTION_INFO i_lambda_SIGCHLD = {
  t_lambda_SIGCHLD, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_61[] = {
  2, // locals
  0, // parameters
  // process_id(-1)
  var_process_id, 1, minus_num_1, 1, LOCAL(1),
  // waitpid! $pid $status process_id(-1)
  var_waitpid, 1, LOCAL(1), IO_CALL(2), var_658_29_pid, var_658_34_status,
  // is_an_error || pid.to_integer == 0
  var_is_an_error, 1, var_658_29_pid, 1, LOCAL(1),
  // is_an_error || pid.to_integer == 0
  var_std__or, 2, LOCAL(1), lambda_62, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_break, lambda_63, IO_TAIL_CALL,
  POS(658, 41),
  POS(658, 19),
  POS(660, 25),
  POS(660, 25),
  POS(659, 19)
};

static FUNCTION_INFO i_lambda_61 = {
  t_lambda_61, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_62[] = {
  2, // locals
  0, // parameters
  // to_integer == 0
  var_to_integer, 1, var_658_29_pid, 1, LOCAL(1),
  // to_integer == 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // pid.to_integer == 0
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(660, 44),
  POS(660, 44),
  POS(660, 40)
};

static FUNCTION_INFO i_lambda_62 = {
  t_lambda_62, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_63[] = {
  2, // locals
  0, // parameters
  // exitstatus &status
  var_exitstatus, 1, var_658_34_status, 1, var_658_34_status,
  // watched_pids_of(self)(pid):
  var_watched_pids_of, 1, var_541_5_self, 1, LOCAL(1),
  // watched_pids_of(self)(pid):
  LOCAL(1), 1, var_658_29_pid, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_watched_pids_ofselfpid, lambda_64, IO_TAIL_CALL,
  POS(663, 23),
  POS(665, 25),
  POS(665, 25),
  POS(664, 23)
};

static FUNCTION_INFO i_lambda_63 = {
  t_lambda_63, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_watched_pids_ofselfpid[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(pid) false
  var_watched_pids_of, 1, var_541_5_self, 1, LOCAL(2),
  // watched_pids_of(pid) false
  LOCAL(2), 2, var_658_29_pid, var_false, 1, LOCAL(2),
  // self.watched_pids_of(pid) false
  LET, -1, var_541_5_self, var_watched_pids_of, LOCAL(2), var_541_5_self,
  // typed_tuple
  var_typed_tuple, 4, var_std_types__event, var_PROCESS_JOINED, var_658_29_pid, var_658_34_status, 1, LOCAL(1),
  // push &events
  var_push, 2, var_554_4_events, LOCAL(1), 1, var_554_4_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(666, 33),
  POS(666, 33),
  POS(666, 28),
  POS(668, 29),
  POS(667, 27),
  POS(670, 27)
};

static FUNCTION_INFO i_lambda_watched_pids_ofselfpid = {
  t_lambda_watched_pids_ofselfpid, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_64[] = {
  2, // locals
  0, // parameters
  // exit_codes_of(pid) status
  var_exit_codes_of, 1, var_541_5_self, 1, LOCAL(2),
  // exit_codes_of(pid) status
  LOCAL(2), 2, var_658_29_pid, var_658_34_status, 1, LOCAL(2),
  // self.exit_codes_of(pid) status
  LET, -1, var_541_5_self, var_exit_codes_of, LOCAL(2), var_541_5_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(672, 33),
  POS(672, 33),
  POS(672, 28),
  POS(673, 27)
};

static FUNCTION_INFO i_lambda_64 = {
  t_lambda_64, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_SIGWINCH[] = {
  0, // locals
  0, // parameters
  // self.window_change_event_occurred true
  LET, -1, var_541_5_self, var_window_change_event_occurred, var_true, var_541_5_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(676, 16),
  POS(677, 15)
};

static FUNCTION_INFO i_lambda_SIGWINCH = {
  t_lambda_SIGWINCH, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_65[] = {
  2, // locals
  0, // parameters
  // catched_signals_of(self)(signal):
  var_catched_signals_of, 1, var_541_5_self, 1, LOCAL(1),
  // catched_signals_of(self)(signal):
  LOCAL(1), 1, var_653_12_signal, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_catched_signals_ofselfsignal, var_next, IO_TAIL_CALL,
  POS(680, 17),
  POS(680, 17),
  POS(679, 15)
};

static FUNCTION_INFO i_lambda_65 = {
  t_lambda_65, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_catched_signals_ofselfsignal[] = {
  1, // locals
  0, // parameters
  // typed_tuple(std_types::event SIGNAL undefined signal)
  var_typed_tuple, 4, var_std_types__event, var_SIGNAL, var_undefined, var_653_12_signal, 1, LOCAL(1),
  // push &events
  var_push, 2, var_554_4_events, LOCAL(1), 1, var_554_4_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(682, 21),
  POS(681, 19),
  POS(683, 19)
};

static FUNCTION_INFO i_lambda_catched_signals_ofselfsignal = {
  t_lambda_catched_signals_ofselfsignal, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_handle_write_requests[] = {
  2, // locals
  0, // parameters
  // window_change_event_occurred
  var_window_change_event_occurred, 1, var_541_5_self, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_66, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_68, lambda_69, IO_TAIL_CALL,
  POS(690, 18),
  POS(689, 13),
  POS(688, 9)
};

static FUNCTION_INFO i_func_handle_write_requests = {
  t_func_handle_write_requests, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_66[] = {
  2, // locals
  0, // parameters
  // do_inject_window_change_events
  var_do_inject_window_change_events, 1, var_541_5_self, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_67, 1, LOCAL(2),
  // self.do_inject_window_change_events
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(691, 18),
  POS(689, 13),
  POS(691, 13)
};

static FUNCTION_INFO i_lambda_66 = {
  t_lambda_66, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_67[] = {
  3, // locals
  0, // parameters
  // read_jobs_of(self)(STDIN_FILENO).is_defined
  var_read_jobs_of, 1, var_541_5_self, 1, LOCAL(1),
  // read_jobs_of(self)(STDIN_FILENO).is_defined
  LOCAL(1), 1, var_STDIN_FILENO, 1, LOCAL(2),
  // is_defined
  var_is_defined, 1, LOCAL(2), 1, LOCAL(3),
  // read_jobs_of(self)(STDIN_FILENO).is_defined
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(692, 13),
  POS(692, 13),
  POS(692, 46),
  POS(692, 13)
};

static FUNCTION_INFO i_lambda_67 = {
  t_lambda_67, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_68[] = {
  4, // locals
  0, // parameters
  // get_terminal_size! STDIN_FILENO $width $height
  var_get_terminal_size, 1, var_STDIN_FILENO, IO_CALL(2), LOCAL(2), LOCAL(3),
  // self.window_change_event_occurred false
  LET, -1, var_541_5_self, var_window_change_event_occurred, var_false, var_541_5_self,
  // $buf "@esc;[8;@(height);@(width)t"
  var_std__string, 5, string_4, LOCAL(3), string_5, LOCAL(2), str_t, 1, LOCAL(4),
  // typed_tuple(std_types::event READ STDIN_FILENO buf)
  var_typed_tuple, 4, var_std_types__event, var_READ, var_STDIN_FILENO, LOCAL(4), 1, LOCAL(1),
  // push &events typed_tuple(std_types::event READ STDIN_FILENO buf)
  var_push, 2, var_554_4_events, LOCAL(1), 1, var_554_4_events,
  // !injected_into_stdin true
  LET, 1, var_true, 1, var_650_8_injected_into_stdin,
  // check_file_descriptors!
  func_check_file_descriptors, 0, IO_TAIL_CALL,
  POS(694, 13),
  POS(695, 14),
  POS(696, 13),
  POS(697, 26),
  POS(697, 13),
  POS(698, 13),
  POS(699, 13),
  LOCAL(2),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_68 = {
  t_lambda_68, NULL, 7, 3,
  {"694_46_width\000", "696_14_buf\000", "694_53_height\000"}
};

static TAB_NUM t_lambda_69[] = {
  0, // locals
  0, // parameters
  // check_file_descriptors!
  func_check_file_descriptors, 0, IO_TAIL_CALL,
  POS(701, 13)
};

static FUNCTION_INFO i_lambda_69 = {
  t_lambda_69, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_check_file_descriptors[] = {
  0, // locals
  0, // parameters
  // for_each can_write
  var_for_each, 3, var_646_10_can_write, lambda_70, func_attempt_reads, IO_TAIL_CALL,
  POS(704, 9)
};

static FUNCTION_INFO i_func_check_file_descriptors = {
  t_func_check_file_descriptors, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_70[] = {
  1, // locals
  1, // parameters
  var_705_14_fd,
  // $job write_jobs(fd)
  var_651_8_write_jobs, 1, var_705_14_fd, 1, var_706_14_job,
  // write! $bytes_written fd job
  var_write, 2, var_705_14_fd, var_706_14_job, IO_CALL(1), var_707_21_bytes_written,
  // is_an_error:
  var_is_an_error, 1, var_707_21_bytes_written, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_bytes_written_is_an_error, lambda_71, IO_TAIL_CALL,
  POS(706, 13),
  POS(707, 13),
  POS(709, 29),
  POS(708, 13)
};

static FUNCTION_INFO i_lambda_70 = {
  t_lambda_70, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_bytes_written_is_an_error[] = {
  2, // locals
  0, // parameters
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, var_541_5_self, 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, var_705_14_fd, var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, var_541_5_self, var_write_jobs_of, LOCAL(2), var_541_5_self,
  // typed_tuple
  var_typed_tuple, 4, var_std_types__event, var_WRITE_FAILED, var_705_14_fd, var_707_21_bytes_written, 1, LOCAL(1),
  // push &events
  var_push, 2, var_554_4_events, LOCAL(1), 1, var_554_4_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(710, 23),
  POS(710, 23),
  POS(710, 18),
  POS(712, 19),
  POS(711, 17),
  POS(716, 17)
};

static FUNCTION_INFO i_lambda_bytes_written_is_an_error = {
  t_lambda_bytes_written_is_an_error, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_71[] = {
  2, // locals
  0, // parameters
  // length_of(job):
  var_length_of, 1, var_706_14_job, 1, LOCAL(1),
  // bytes_written < length_of(job):
  var_std__less, 2, var_707_21_bytes_written, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_72, lambda_73, IO_TAIL_CALL,
  POS(719, 35),
  POS(719, 19),
  POS(718, 17)
};

static FUNCTION_INFO i_lambda_71 = {
  t_lambda_71, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_72[] = {
  2, // locals
  0, // parameters
  // bytes_written+1 -1
  var_std__plus, 2, var_707_21_bytes_written, num_1, 1, LOCAL(1),
  // range &job bytes_written+1 -1
  var_range, 3, var_706_14_job, LOCAL(1), minus_num_1, 1, var_706_14_job,
  // write_jobs_of(fd) job # remaining text to write
  var_write_jobs_of, 1, var_541_5_self, 1, LOCAL(2),
  // write_jobs_of(fd) job # remaining text to write
  LOCAL(2), 2, var_705_14_fd, var_706_14_job, 1, LOCAL(2),
  // self.write_jobs_of(fd) job # remaining text to write
  LET, -1, var_541_5_self, var_write_jobs_of, LOCAL(2), var_541_5_self,
  // typed_tuple(std_types::event WRITE_PENDING fd job)
  var_typed_tuple, 4, var_std_types__event, var_WRITE_PENDING, var_705_14_fd, var_706_14_job, 1, LOCAL(1),
  // push &events
  var_push, 2, var_554_4_events, LOCAL(1), 1, var_554_4_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(720, 32),
  POS(720, 21),
  POS(721, 27),
  POS(721, 27),
  POS(721, 22),
  POS(723, 23),
  POS(722, 21),
  POS(724, 21)
};

static FUNCTION_INFO i_lambda_72 = {
  t_lambda_72, NULL, 8, 0,
  {}
};

static TAB_NUM t_lambda_73[] = {
  2, // locals
  0, // parameters
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, var_541_5_self, 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, var_705_14_fd, var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, var_541_5_self, var_write_jobs_of, LOCAL(2), var_541_5_self,
  // typed_tuple(std_types::event WRITE_COMPLETED fd undefined)
  var_typed_tuple, 4, var_std_types__event, var_WRITE_COMPLETED, var_705_14_fd, var_undefined, 1, LOCAL(1),
  // push &events
  var_push, 2, var_554_4_events, LOCAL(1), 1, var_554_4_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(726, 27),
  POS(726, 27),
  POS(726, 22),
  POS(728, 23),
  POS(727, 21),
  POS(729, 21)
};

static FUNCTION_INFO i_lambda_73 = {
  t_lambda_73, NULL, 6, 0,
  {}
};

static TAB_NUM t_func_attempt_reads[] = {
  0, // locals
  0, // parameters
  // for_each can_read
  var_for_each, 3, var_645_10_can_read, lambda_74, lambda_86, IO_TAIL_CALL,
  POS(733, 9)
};

static FUNCTION_INFO i_func_attempt_reads = {
  t_func_attempt_reads, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_74[] = {
  3, // locals
  1, // parameters
  var_734_14_fd,
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__equal, 2, var_734_14_fd, var_STDIN_FILENO, 1, LOCAL(1),
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__or, 2, LOCAL(2), lambda_75, 1, LOCAL(3),
  // if_not fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_if_not, 3, LOCAL(3), var_next, lambda_76, IO_TAIL_CALL,
  POS(735, 20),
  POS(735, 20),
  POS(735, 20),
  POS(735, 13)
};

static FUNCTION_INFO i_lambda_74 = {
  t_lambda_74, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_75[] = {
  1, // locals
  0, // parameters
  // not(injected_into_stdin) next:
  var_not, 1, var_650_8_injected_into_stdin, 1, LOCAL(1),
  // not(injected_into_stdin) next:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(735, 42),
  POS(735, 42)
};

static FUNCTION_INFO i_lambda_75 = {
  t_lambda_75, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_76[] = {
  3, // locals
  0, // parameters
  // fstat! fd $info
  var_fstat, 1, var_734_14_fd, IO_CALL(1), LOCAL(3),
  // type_of(info) == SOCKET:
  var_type_of, 1, LOCAL(3), 1, LOCAL(1),
  // type_of(info) == SOCKET:
  var_std__equal, 2, LOCAL(1), var_SOCKET, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_77, func_do_read, IO_TAIL_CALL,
  POS(736, 15),
  POS(738, 17),
  POS(738, 17),
  POS(737, 15),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_76 = {
  t_lambda_76, NULL, 4, 1,
  {"736_26_info\000"}
};

static TAB_NUM t_lambda_77[] = {
  1, // locals
  0, // parameters
  // is_listening! $does_listen fd
  var_is_listening, 1, var_734_14_fd, IO_CALL(1), LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_does_listen, func_do_read, IO_TAIL_CALL,
  POS(739, 19),
  POS(740, 19),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_77 = {
  t_lambda_77, NULL, 2, 1,
  {"739_34_does_listen\000"}
};

static TAB_NUM t_lambda_does_listen[] = {
  1, // locals
  0, // parameters
  // accept! $conn fd
  var_accept, 1, var_734_14_fd, IO_CALL(1), var_742_32_conn,
  // is_an_error:
  var_is_an_error, 1, var_742_32_conn, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_conn_is_an_error, lambda_78, IO_TAIL_CALL,
  POS(742, 23),
  POS(744, 30),
  POS(743, 23)
};

static FUNCTION_INFO i_lambda_does_listen = {
  t_lambda_does_listen, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_conn_is_an_error[] = {
  1, // locals
  0, // parameters
  // typed_tuple(std_types::event READ_FAILED fd conn)
  var_typed_tuple, 4, var_std_types__event, var_READ_FAILED, var_734_14_fd, var_742_32_conn, 1, LOCAL(1),
  // push &events
  var_push, 2, var_554_4_events, LOCAL(1), 1, var_554_4_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(746, 29),
  POS(745, 27),
  POS(747, 27)
};

static FUNCTION_INFO i_lambda_conn_is_an_error = {
  t_lambda_conn_is_an_error, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_78[] = {
  1, // locals
  0, // parameters
  // typed_tuple(std_types::event CONNECT fd conn)
  var_typed_tuple, 4, var_std_types__event, var_CONNECT, var_734_14_fd, var_742_32_conn, 1, LOCAL(1),
  // push &events
  var_push, 2, var_554_4_events, LOCAL(1), 1, var_554_4_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(750, 29),
  POS(749, 27),
  POS(751, 27)
};

static FUNCTION_INFO i_lambda_78 = {
  t_lambda_78, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_do_read[] = {
  4, // locals
  0, // parameters
  // read_jobs_of(self)(fd)
  var_read_jobs_of, 1, var_541_5_self, 1, LOCAL(1),
  // $do_close_and_max_length read_jobs_of(self)(fd)
  LOCAL(1), 1, var_734_14_fd, 1, LOCAL(3),
  // do_close_and_max_length $do_close $max_length
  LOCAL(3), 0, 2, var_757_42_do_close, var_757_52_max_length,
  // is_defined && max_length < 0x10'0000
  var_is_defined, 1, var_757_52_max_length, 1, LOCAL(1),
  // is_defined && max_length < 0x10'0000
  var_std__and, 2, LOCAL(1), lambda_79, 1, LOCAL(2),
  // $length
  var_if, 3, LOCAL(2), lambda_80, lambda_81, 1, LOCAL(4),
  // read! $buf fd length
  var_read, 2, var_734_14_fd, LOCAL(4), IO_CALL(1), var_763_24_buf,
  // is_an_error:
  var_is_an_error, 1, var_763_24_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_an_error, lambda_82, IO_TAIL_CALL,
  POS(756, 42),
  POS(756, 17),
  POS(757, 17),
  POS(760, 32),
  POS(760, 32),
  POS(758, 17),
  POS(763, 17),
  POS(765, 23),
  POS(764, 17),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_do_read = {
  t_func_do_read, NULL, 9, 2,
  {"758_18_length\000", "756_18_do_close_and_max_length\000"}
};

static TAB_NUM t_lambda_79[] = {
  1, // locals
  0, // parameters
  // max_length < 0x10'0000
  var_std__less, 2, var_757_52_max_length, num_0x100000, 1, LOCAL(1),
  // max_length < 0x10'0000
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(760, 46),
  POS(760, 46)
};

static FUNCTION_INFO i_lambda_79 = {
  t_lambda_79, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_80[] = {
  0, // locals
  0, // parameters
  //  max_length
  LET, 1, var_757_52_max_length, TAIL_CALL,
  POS(761, 23)
};

static FUNCTION_INFO i_lambda_80 = {
  t_lambda_80, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_81[] = {
  0, // locals
  0, // parameters
  //  0x10'0000
  LET, 1, num_0x100000, TAIL_CALL,
  POS(762, 23)
};

static FUNCTION_INFO i_lambda_81 = {
  t_lambda_81, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_buf_is_an_error[] = {
  1, // locals
  0, // parameters
  // typed_tuple(std_types::event READ_FAILED fd buf)
  var_typed_tuple, 4, var_std_types__event, var_READ_FAILED, var_734_14_fd, var_763_24_buf, 1, LOCAL(1),
  // push &events typed_tuple(std_types::event READ_FAILED fd buf)
  var_push, 2, var_554_4_events, LOCAL(1), 1, var_554_4_events,
  // if
  var_if, 3, var_757_42_do_close, lambda_do_close, var_next, IO_TAIL_CALL,
  POS(766, 34),
  POS(766, 21),
  POS(767, 21)
};

static FUNCTION_INFO i_lambda_buf_is_an_error = {
  t_lambda_buf_is_an_error, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_do_close[] = {
  0, // locals
  0, // parameters
  // close &self fd
  var_close, 2, var_541_5_self, var_734_14_fd, 1, var_541_5_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(769, 25),
  POS(770, 25)
};

static FUNCTION_INFO i_lambda_do_close = {
  t_lambda_do_close, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_82[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_763_24_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_empty, lambda_83, IO_TAIL_CALL,
  POS(774, 27),
  POS(773, 21)
};

static FUNCTION_INFO i_lambda_82 = {
  t_lambda_82, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_buf_is_empty[] = {
  1, // locals
  0, // parameters
  // stop_reading_from &self fd
  var_stop_reading_from, 2, var_541_5_self, var_734_14_fd, 1, var_541_5_self,
  // typed_tuple(std_types::event CLOSED fd undefined)
  var_typed_tuple, 4, var_std_types__event, var_CLOSED, var_734_14_fd, var_undefined, 1, LOCAL(1),
  // push &events typed_tuple(std_types::event CLOSED fd undefined)
  var_push, 2, var_554_4_events, LOCAL(1), 1, var_554_4_events,
  // if
  var_if, 3, var_757_42_do_close, lambda_2_do_close, var_next, IO_TAIL_CALL,
  POS(775, 25),
  POS(776, 38),
  POS(776, 25),
  POS(777, 25)
};

static FUNCTION_INFO i_lambda_buf_is_empty = {
  t_lambda_buf_is_empty, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_2_do_close[] = {
  0, // locals
  0, // parameters
  // close &self fd
  var_close, 2, var_541_5_self, var_734_14_fd, 1, var_541_5_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(779, 29),
  POS(780, 29)
};

static FUNCTION_INFO i_lambda_2_do_close = {
  t_lambda_2_do_close, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_83[] = {
  1, // locals
  0, // parameters
  // typed_tuple(std_types::event READ fd buf)
  var_typed_tuple, 4, var_std_types__event, var_READ, var_734_14_fd, var_763_24_buf, 1, LOCAL(1),
  // push &events typed_tuple(std_types::event READ fd buf)
  var_push, 2, var_554_4_events, LOCAL(1), 1, var_554_4_events,
  // is_defined:
  var_is_defined, 1, var_757_52_max_length, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_max_length_is_defined, var_next, IO_TAIL_CALL,
  POS(783, 38),
  POS(783, 25),
  POS(785, 38),
  POS(784, 25)
};

static FUNCTION_INFO i_lambda_83 = {
  t_lambda_83, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_max_length_is_defined[] = {
  2, // locals
  0, // parameters
  // length_of(buf) < max_length:
  var_length_of, 1, var_763_24_buf, 1, LOCAL(1),
  // length_of(buf) < max_length:
  var_std__less, 2, LOCAL(1), var_757_52_max_length, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_84, lambda_85, IO_TAIL_CALL,
  POS(787, 31),
  POS(787, 31),
  POS(786, 29)
};

static FUNCTION_INFO i_lambda_max_length_is_defined = {
  t_lambda_max_length_is_defined, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_84[] = {
  5, // locals
  0, // parameters
  // length_of(buf))
  var_length_of, 1, var_763_24_buf, 1, LOCAL(1),
  // max_length-length_of(buf))
  var_std__minus, 2, var_757_52_max_length, LOCAL(1), 1, LOCAL(2),
  // !self.read_jobs_of(fd)
  var_tuple, 2, var_true, LOCAL(2), 1, LOCAL(4),
  // read_jobs_of(fd)
  var_read_jobs_of, 1, var_541_5_self, 1, LOCAL(5),
  // read_jobs_of(fd)
  LOCAL(5), 2, var_734_14_fd, LOCAL(4), 1, LOCAL(5),
  // self.read_jobs_of(fd)
  LET, -1, var_541_5_self, var_read_jobs_of, LOCAL(5), var_541_5_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(789, 57),
  POS(789, 46),
  POS(788, 33),
  POS(788, 39),
  POS(788, 39),
  POS(788, 34),
  POS(790, 33)
};

static FUNCTION_INFO i_lambda_84 = {
  t_lambda_84, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_85[] = {
  0, // locals
  0, // parameters
  // stop_reading_from &self fd
  var_stop_reading_from, 2, var_541_5_self, var_734_14_fd, 1, var_541_5_self,
  // if
  var_if, 3, var_757_42_do_close, lambda_3_do_close, var_next, IO_TAIL_CALL,
  POS(792, 33),
  POS(793, 33)
};

static FUNCTION_INFO i_lambda_85 = {
  t_lambda_85, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_3_do_close[] = {
  0, // locals
  0, // parameters
  // close &self fd
  var_close, 2, var_541_5_self, var_734_14_fd, 1, var_541_5_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(795, 37),
  POS(796, 37)
};

static FUNCTION_INFO i_lambda_3_do_close = {
  t_lambda_3_do_close, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_86[] = {
  0, // locals
  0, // parameters
  // attempt_close_operations! &self
  func_attempt_close_operations, 1, var_541_5_self, IO_CALL(1), var_541_5_self,
  // attempt_exit! &self
  func_attempt_exit, 1, var_541_5_self, IO_CALL(1), var_541_5_self,
  // -> self events
  LET, 2, var_541_5_self, var_554_4_events, TAIL_CALL,
  POS(800, 13),
  POS(802, 13),
  POS(804, 13)
};

static FUNCTION_INFO i_lambda_86 = {
  t_lambda_86, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_attempt_close_operations[] = {
  1, // locals
  1, // parameters
  var_806_29_io,
  // close_jobs_of(io)
  var_close_jobs_of, 1, var_806_29_io, 1, LOCAL(1),
  // for_each close_jobs_of(io)
  var_for_each, 3, LOCAL(1), lambda_87, lambda_88, IO_TAIL_CALL,
  POS(807, 12),
  POS(807, 3)
};

static FUNCTION_INFO i_func_attempt_close_operations = {
  t_func_attempt_close_operations, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_87[] = {
  3, // locals
  1, // parameters
  var_808_8_fd,
  // write_jobs_of(io)(fd).is_undefined:
  var_write_jobs_of, 1, var_806_29_io, 1, LOCAL(1),
  // write_jobs_of(io)(fd).is_undefined:
  LOCAL(1), 1, var_808_8_fd, 1, LOCAL(2),
  // is_undefined:
  var_is_undefined, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_write_jobs_ofiofd_is_undefined, var_next, IO_TAIL_CALL,
  POS(810, 9),
  POS(810, 9),
  POS(810, 31),
  POS(809, 7)
};

static FUNCTION_INFO i_lambda_87 = {
  t_lambda_87, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_write_jobs_ofiofd_is_undefined[] = {
  2, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_808_8_fd, IO_CALL(0),
  // close_jobs_of(fd) false
  var_close_jobs_of, 1, var_806_29_io, 1, LOCAL(2),
  // close_jobs_of(fd) false
  LOCAL(2), 2, var_808_8_fd, var_false, 1, LOCAL(2),
  // io.close_jobs_of(fd) false
  LET, -1, var_806_29_io, var_close_jobs_of, LOCAL(2), var_806_29_io,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(811, 11),
  POS(812, 15),
  POS(812, 15),
  POS(812, 12),
  POS(813, 11)
};

static FUNCTION_INFO i_lambda_write_jobs_ofiofd_is_undefined = {
  t_lambda_write_jobs_ofiofd_is_undefined, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_88[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_806_29_io, TAIL_CALL,
  POS(815, 7)
};

static FUNCTION_INFO i_lambda_88 = {
  t_lambda_88, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_attempt_exit[] = {
  2, // locals
  1, // parameters
  var_817_17_io,
  // exit_code_of(io).is_defined:
  var_exit_code_of, 1, var_817_17_io, 1, LOCAL(1),
  // is_defined:
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_exit_code_ofio_is_defined, lambda_92, IO_TAIL_CALL,
  POS(819, 5),
  POS(819, 22),
  POS(818, 3)
};

static FUNCTION_INFO i_func_attempt_exit = {
  t_func_attempt_exit, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_exit_code_ofio_is_defined[] = {
  1, // locals
  0, // parameters
  // resources_of(io)
  var_resources_of, 1, var_817_17_io, 1, LOCAL(1),
  // for_each resources_of(io)
  var_for_each, 3, LOCAL(1), lambda_89, lambda_90, IO_TAIL_CALL,
  POS(820, 16),
  POS(820, 7)
};

static FUNCTION_INFO i_lambda_exit_code_ofio_is_defined = {
  t_lambda_exit_code_ofio_is_defined, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_89[] = {
  1, // locals
  1, // parameters
  var_821_12_resource,
  // do_log_of(resource):
  var_do_log_of, 1, var_821_12_resource, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_do_log_ofresource, func_finalize_resource, IO_TAIL_CALL,
  POS(823, 13),
  POS(822, 11)
};

static FUNCTION_INFO i_lambda_89 = {
  t_lambda_89, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_do_log_ofresource[] = {
  2, // locals
  0, // parameters
  // name_of(resource))"
  var_name_of, 1, var_821_12_resource, 1, LOCAL(1),
  // "finalizing @(name_of(resource))"
  var_std__string, 2, str_finalizing, LOCAL(1), 1, LOCAL(2),
  // log &io 3 "finalizing @(name_of(resource))"
  var_log, 3, var_817_17_io, num_3, LOCAL(2), 1, var_817_17_io,
  // finalize_resource!
  func_finalize_resource, 0, IO_TAIL_CALL,
  POS(824, 39),
  POS(824, 25),
  POS(824, 15),
  POS(825, 15)
};

static FUNCTION_INFO i_lambda_do_log_ofresource = {
  t_lambda_do_log_ofresource, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_finalize_resource[] = {
  0, // locals
  0, // parameters
  // finalize! resource &io
  var_finalize, 2, var_821_12_resource, var_817_17_io, IO_CALL(1), var_817_17_io,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(829, 13),
  POS(830, 13)
};

static FUNCTION_INFO i_func_finalize_resource = {
  t_func_finalize_resource, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_90[] = {
  1, // locals
  0, // parameters
  // io.resources_of empty_list
  LET, -1, var_817_17_io, var_resources_of, var_empty_list, var_817_17_io,
  // is_empty:
  var_is_empty, 1, var_817_17_io, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_io_is_empty, lambda_91, IO_TAIL_CALL,
  POS(832, 12),
  POS(834, 16),
  POS(833, 11)
};

static FUNCTION_INFO i_lambda_90 = {
  t_lambda_90, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_io_is_empty[] = {
  1, // locals
  0, // parameters
  // exit_code_of(io)
  var_exit_code_of, 1, var_817_17_io, 1, LOCAL(1),
  // exit! exit_code_of(io)
  var_exit, 1, LOCAL(1), IO_TAIL_CALL,
  POS(835, 21),
  POS(835, 15)
};

static FUNCTION_INFO i_lambda_io_is_empty = {
  t_lambda_io_is_empty, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_91[] = {
  0, // locals
  0, // parameters
  // kill_child_processes! io
  func_kill_child_processes, 1, var_817_17_io, IO_TAIL_CALL,
  POS(837, 15)
};

static FUNCTION_INFO i_lambda_91 = {
  t_lambda_91, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_92[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_817_17_io, TAIL_CALL,
  POS(838, 7)
};

static FUNCTION_INFO i_lambda_92 = {
  t_lambda_92, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_kill_child_processes[] = {
  1, // locals
  1, // parameters
  var_840_25_io,
  // watched_pids_of(io)
  var_watched_pids_of, 1, var_840_25_io, 1, LOCAL(1),
  // for_each watched_pids_of(io)
  var_for_each, 3, LOCAL(1), lambda_93, lambda_94, IO_TAIL_CALL,
  POS(841, 12),
  POS(841, 3)
};

static FUNCTION_INFO i_func_kill_child_processes = {
  t_func_kill_child_processes, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_93[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 842_8_pid
  // kill! pid SIGKILL
  var_kill, 2, LOCAL(1), var_SIGKILL, IO_CALL(0),
  // next
  var_next, 0, TAIL_CALL,
  POS(843, 7),
  POS(844, 7),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_93 = {
  t_lambda_93, NULL, 2, 1,
  {"842_8_pid\000"}
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_840_25_io, TAIL_CALL,
  POS(845, 7)
};

static FUNCTION_INFO i_lambda_94 = {
  t_lambda_94, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__io___handle_events[] = {
  1, // locals
  2, // parameters
  var_850_32_io,
  LOCAL(1), // 850_35_events
  // $new_events empty_list
  LET, 1, var_empty_list, 1, var_851_4_new_events,
  // $handlers handlers_of(io)
  var_handlers_of, 1, var_850_32_io, 1, var_852_4_handlers,
  // for_each events
  var_for_each, 3, LOCAL(1), lambda_95, lambda_101, TAIL_CALL,
  POS(851, 3),
  POS(852, 3),
  POS(853, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__io___handle_events = {
  t_func_std_types__io___handle_events, NULL, 3, 1,
  {"850_35_events\000"}
};

static TAB_NUM t_lambda_95[] = {
  1, // locals
  1, // parameters
  var_854_8_event,
  // event $type $id $data
  var_854_8_event, 0, 3, var_855_14_type, var_855_20_id, var_855_24_data,
  // $id_handlers handlers(id)
  var_852_4_handlers, 1, var_855_20_id, 1, var_856_8_id_handlers,
  // is_undefined
  var_is_undefined, 1, var_856_8_id_handlers, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_keep_event, lambda_96, TAIL_CALL,
  POS(855, 7),
  POS(856, 7),
  POS(858, 21),
  POS(857, 7)
};

static FUNCTION_INFO i_lambda_95 = {
  t_lambda_95, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_96[] = {
  1, // locals
  0, // parameters
  // $handler id_handlers(type)
  var_856_8_id_handlers, 1, var_855_14_type, 1, var_861_12_handler,
  // is_undefined
  var_is_undefined, 1, var_861_12_handler, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_keep_event, lambda_97, TAIL_CALL,
  POS(861, 11),
  POS(863, 21),
  POS(862, 11)
};

static FUNCTION_INFO i_lambda_96 = {
  t_lambda_96, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_97[] = {
  2, // locals
  0, // parameters
  // $context undefined
  LET, 1, var_undefined, 1, var_866_16_context,
  // is_a_tuple &handler &context
  var_is_a_tuple, 1, var_861_12_handler, 1, LOCAL(1),
  // update_if handler.is_a_tuple &handler &context
  var_update_if, 4, LOCAL(1), var_861_12_handler, var_866_16_context, lambda_98, 2, var_861_12_handler, var_866_16_context,
  // parameter_count_of(handler) == 3:
  var_parameter_count_of, 1, var_861_12_handler, 1, LOCAL(1),
  // parameter_count_of(handler) == 3:
  var_std__equal, 2, LOCAL(1), num_3, 1, LOCAL(2),
  // if !io $new_event
  var_if, 3, LOCAL(2), lambda_99, lambda_100, 2, var_850_32_io, var_869_23_new_event,
  // is_defined:
  var_is_defined, 1, var_869_23_new_event, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_new_event_is_defined, var_next, TAIL_CALL,
  POS(866, 15),
  POS(867, 33),
  POS(867, 15),
  POS(870, 17),
  POS(870, 17),
  POS(869, 15),
  POS(875, 27),
  POS(874, 15)
};

static FUNCTION_INFO i_lambda_97 = {
  t_lambda_97, NULL, 8, 0,
  {}
};

static TAB_NUM t_lambda_98[] = {
  2, // locals
  0, // parameters
  // first(handler) second(handler)
  var_first, 1, var_861_12_handler, 1, LOCAL(1),
  // second(handler)
  var_second, 1, var_861_12_handler, 1, LOCAL(2),
  //  first(handler) second(handler)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(868, 20),
  POS(868, 35),
  POS(868, 19)
};

static FUNCTION_INFO i_lambda_98 = {
  t_lambda_98, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_99[] = {
  0, // locals
  0, // parameters
  // handler io id data
  var_861_12_handler, 3, var_850_32_io, var_855_20_id, var_855_24_data, TAIL_CALL,
  POS(871, 19)
};

static FUNCTION_INFO i_lambda_99 = {
  t_lambda_99, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_100[] = {
  0, // locals
  0, // parameters
  // handler io id data context
  var_861_12_handler, 4, var_850_32_io, var_855_20_id, var_855_24_data, var_866_16_context, TAIL_CALL,
  POS(873, 19)
};

static FUNCTION_INFO i_lambda_100 = {
  t_lambda_100, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_2_new_event_is_defined[] = {
  1, // locals
  0, // parameters
  // is_a_list
  var_is_a_list, 1, var_869_23_new_event, 1, LOCAL(1),
  // update_if_not new_event.is_a_list
  var_update_if_not, 3, LOCAL(1), var_869_23_new_event, lambda_new_event, 1, var_869_23_new_event,
  // handle_events &io &new_event
  var_handle_events, 2, var_850_32_io, var_869_23_new_event, 2, var_850_32_io, var_869_23_new_event,
  // append &new_events new_event
  var_append, 2, var_851_4_new_events, var_869_23_new_event, 1, var_851_4_new_events,
  // next
  var_next, 0, TAIL_CALL,
  POS(876, 43),
  POS(876, 19),
  POS(878, 19),
  POS(879, 19),
  POS(880, 19)
};

static FUNCTION_INFO i_lambda_2_new_event_is_defined = {
  t_lambda_2_new_event_is_defined, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_new_event[] = {
  1, // locals
  0, // parameters
  // list(new_event)
  var_list, 1, var_869_23_new_event, 1, LOCAL(1),
  //  list(new_event)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(877, 35),
  POS(877, 34)
};

static FUNCTION_INFO i_lambda_new_event = {
  t_lambda_new_event, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_keep_event[] = {
  0, // locals
  0, // parameters
  // push &new_events event
  var_push, 2, var_851_4_new_events, var_854_8_event, 1, var_851_4_new_events,
  // next
  var_next, 0, TAIL_CALL,
  POS(884, 9),
  POS(885, 9)
};

static FUNCTION_INFO i_func_keep_event = {
  t_func_keep_event, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_101[] = {
  0, // locals
  0, // parameters
  //  io new_events
  LET, 2, var_850_32_io, var_851_4_new_events, TAIL_CALL,
  POS(886, 7)
};

static FUNCTION_INFO i_lambda_101 = {
  t_lambda_101, NULL, 1, 0,
  {}
};

static int tuple_241_1_arguments[] = {
  -var_undefined, -var_undefined, -var_undefined
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_UNIQUE, 0, {.str_8 = "std::READ"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::CLOSED"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::READ_FAILED"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::CONNECT"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::WRITE_PENDING"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::WRITE_COMPLETED"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::WRITE_FAILED"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::PROCESS_JOINED"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::SIGNAL"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::JOB_COMPLETED"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::JOB_FAILED"}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_STRING_8, 18, {.str_8 = "anonymous resource"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__resource___enable_logging}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__resource___disable_logging}},
  {FLT_TUPLE, 3, {.arguments = tuple_241_1_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___start_reading_from}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___stop_reading_from}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___print_to}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___write}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___cancel_write}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___close}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___join_process}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___start_injecting_window_change_events}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___stop_injecting_window_change_events}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___start_catching_signals}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___stop_catching_signals}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___set_timeout}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__initialize_logging}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_log_filename_is_defined}},
  {FLT_STRING_8, 2, {.str_8 = "w+"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___enable_logging}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___disable_logging}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___log}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_STRING_8, 1, {.str_8 = "["}},
  {FLT_STRING_8, 2, {.str_8 = "] "}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___register_handlers}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_24}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___deregister_handlers}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_25}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_26}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_27}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_28}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___deregister_all_handlers}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___register_resource}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___run}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___run_at}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_29}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___exit}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___is_empty}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_30}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_31}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_32}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__log_unhandled_event}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_33}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_34}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_35}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_36}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_37}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_38}},
  {FLT_POSITIVE_INT64, 0, {.value = 5}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_39}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_40}},
  {FLT_STRING_8, 16, {.str_8 = "unhandled event "}},
  {FLT_STRING_8, 3, {.str_8 = " - "}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___initialize}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___get_events}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_41}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_42}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_43}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_44}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_45}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_46}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_set_timeout}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_47}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_48}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_49}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_50}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_timeout}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_51}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_exit_codes_ofself}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_52}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_handle_start_jobs}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_53}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_new_event_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_new_event_is_a_list}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_54}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_55}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_handle_write_jobs}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_56}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_wait_for_events}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_57}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_58}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_59}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_60}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_SIGCHLD}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_61}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_62}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_63}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_watched_pids_ofselfpid}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_64}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_SIGWINCH}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_65}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_catched_signals_ofselfsignal}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_handle_write_requests}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_66}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_67}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_68}},
  {FLT_STRING_8, 4, {.str_8 = "\033[8;"}},
  {FLT_STRING_8, 1, {.str_8 = ";"}},
  {FLT_STRING_8, 1, {.str_8 = "t"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_69}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_check_file_descriptors}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_70}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_bytes_written_is_an_error}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_71}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_72}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_73}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_attempt_reads}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_74}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_75}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_76}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_77}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_does_listen}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_conn_is_an_error}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_78}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_do_read}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_79}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x100000}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_80}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_81}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_buf_is_an_error}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_do_close}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_82}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_buf_is_empty}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_do_close}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_83}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_max_length_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_84}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_85}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3_do_close}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_86}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_attempt_close_operations}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_87}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_write_jobs_ofiofd_is_undefined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_88}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_attempt_exit}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_exit_code_ofio_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_89}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_do_log_ofresource}},
  {FLT_STRING_8, 11, {.str_8 = "finalizing "}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_finalize_resource}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_90}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_io_is_empty}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_91}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_92}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_kill_child_processes}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_93}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_94}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___handle_events}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_95}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_96}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_97}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_98}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_99}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_100}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_new_event_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_new_event}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_keep_event}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_101}}
};

static ATTRIBUTE_DEFINITION std_types__io__attributes[] = {
  {-var_current_time_of, -var_undefined},
  {-var_read_jobs_of, -var_empty_hash_table},
  {-var_write_jobs_of, -var_empty_hash_table},
  {-var_close_jobs_of, -var_empty_hash_set},
  {-var_start_jobs_of, -var_empty_list},
  {-var_timed_jobs_of, -var_empty_list},
  {-var_resources_of, -var_empty_insert_order_table},
  {-var_watched_pids_of, -var_empty_hash_set},
  {-var_exit_codes_of, -var_empty_hash_table},
  {-var_do_inject_window_change_events, -var_false},
  {-var_window_change_event_occurred, -var_false},
  {-var_catched_signals_of, -var_empty_hash_set},
  {-var_log_level_of, -num_0},
  {-var_exit_code_of, -var_undefined},
  {-var_timeout_of, -var_undefined},
  {-var_handlers_of, -var_empty_hash_table},
  {-var_random_seed_of, -var_undefined},
  {-var_step_no_of, -num_0},
  {var_start_reading_from, -func_std_types__io___start_reading_from},
  {var_stop_reading_from, -func_std_types__io___stop_reading_from},
  {var_print_to, -func_std_types__io___print_to},
  {var_write, -func_std_types__io___write},
  {var_cancel_write, -func_std_types__io___cancel_write},
  {var_close, -func_std_types__io___close},
  {var_join_process, -func_std_types__io___join_process},
  {var_start_injecting_window_change_events, -func_std_types__io___start_injecting_window_change_events},
  {var_stop_injecting_window_change_events, -func_std_types__io___stop_injecting_window_change_events},
  {var_start_catching_signals, -func_std_types__io___start_catching_signals},
  {var_stop_catching_signals, -func_std_types__io___stop_catching_signals},
  {var_set_timeout, -func_std_types__io___set_timeout},
  {var_enable_logging, -func_std_types__io___enable_logging},
  {var_disable_logging, -func_std_types__io___disable_logging},
  {var_log, -func_std_types__io___log},
  {var_register_handlers, -func_std_types__io___register_handlers},
  {var_deregister_handlers, -func_std_types__io___deregister_handlers},
  {var_deregister_all_handlers, -func_std_types__io___deregister_all_handlers},
  {var_register_resource, -func_std_types__io___register_resource},
  {var_run, -func_std_types__io___run},
  {var_run_at, -func_std_types__io___run_at},
  {var_exit, -func_std_types__io___exit},
  {var_is_empty, -func_std_types__io___is_empty},
  {var_initialize, -func_std_types__io___initialize},
  {var_get_events, -func_std_types__io___get_events},
  {var_handle_events, -func_std_types__io___handle_events}
};

static ATTRIBUTE_DEFINITION std_types__resource__attributes[] = {
  {-var_name_of, -str_anonymous_resour},
  {-var_do_log_of, -var_false},
  {var_enable_logging, -func_std_types__resource___enable_logging},
  {var_disable_logging, -func_std_types__resource___disable_logging}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_INITIALIZED, 0, 0,
    "READ\000std", NULL,
    {.const_idx = -uni_std__READ}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(127, 1)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "CLOSED\000std", NULL,
    {.const_idx = -uni_std__CLOSED}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "READ_FAILED\000std", NULL,
    {.const_idx = -uni_std__READ_FAILED}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "CONNECT\000std", NULL,
    {.const_idx = -uni_std__CONNECT}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "WRITE_PENDING\000std", NULL,
    {.const_idx = -uni_std__WRITE_PENDING}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "WRITE_COMPLETED\000std", NULL,
    {.const_idx = -uni_std__WRITE_COMPLETED}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "WRITE_FAILED\000std", NULL,
    {.const_idx = -uni_std__WRITE_FAILED}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "PROCESS_JOINED\000std", NULL,
    {.const_idx = -uni_std__PROCESS_JOINED}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SIGNAL\000std", NULL,
    {.const_idx = -uni_std__SIGNAL}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "JOB_COMPLETED\000std", NULL,
    {.const_idx = -uni_std__JOB_COMPLETED}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "JOB_FAILED\000std", NULL,
    {.const_idx = -uni_std__JOB_FAILED}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "initialize\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "get_events\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "start_reading_from\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "stop_reading_from\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "cancel_write\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "join_process\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "start_injecting_window_change_events\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "stop_injecting_window_change_events\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "start_catching_signals\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "stop_catching_signals\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "set_timeout\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "enable_logging\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "disable_logging\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "log\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "register_handlers\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "deregister_handlers\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "deregister_all_handlers\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "register_resource\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "run\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "run_at\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "finalize\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "random_seed_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "step_no_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "current_time_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "start_jobs_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "timed_jobs_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "read_jobs_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "write_jobs_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "close_jobs_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "resources_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "watched_pids_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "exit_codes_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "do_inject_window_change_events\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "catched_signals_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "window_change_event_occurred\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "log_level_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "exit_code_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "timeout_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "handlers_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_DERIVED, 0, 44,
    "io\000std_types", std_types__io__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "object\000std_types", NULL,
    {.position = POS(202, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "current_time_of\000", NULL,
    {.position = POS(204, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(204, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(205, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_set\000", NULL,
    {.position = POS(207, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(208, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_table\000", NULL,
    {.position = POS(210, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(213, 47)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "random_seed_of\000", NULL,
    {.position = POS(220, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "step_no_of\000", NULL,
    {.position = POS(221, 16)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "do_log_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_DERIVED, 0, 4,
    "resource\000std_types", std_types__resource__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "name_of\000", NULL,
    {.position = POS(226, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "do_log_of\000", NULL,
    {.position = POS(227, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "enable_logging\000", NULL,
    {.position = POS(229, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(233, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "disable_logging\000", NULL,
    {.position = POS(235, 22)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "event\000std_types", NULL,
    {.const_idx = -tuple_241_1}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(241, 19)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_reading_from\000", NULL,
    {.position = POS(243, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "245_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "246_5_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "247_5_do_close\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "248_5_max_length\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(251, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(250, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_reading_from\000", NULL,
    {.position = POS(257, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "print_to\000", NULL,
    {.position = POS(265, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(271, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(271, 37)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "write\000", NULL,
    {.position = POS(271, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "277_5_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "279_4_job\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(283, 10)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "cancel_write\000", NULL,
    {.position = POS(288, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "close\000", NULL,
    {.position = POS(297, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "join_process\000", NULL,
    {.position = POS(306, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_injecting_window_change_events\000", NULL,
    {.position = POS(314, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_injecting_window_change_events\000", NULL,
    {.position = POS(320, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_catching_signals\000", NULL,
    {.position = POS(326, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "328_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "331_4_catched_signals\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(335, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(332, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_catching_signals\000", NULL,
    {.position = POS(338, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "340_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "343_4_catched_signals\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "set_timeout\000", NULL,
    {.position = POS(350, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "352_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "353_5_timeout\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_number\000", NULL,
    {.position = POS(355, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(355, 45)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(355, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "356_4_current_timeout\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(358, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(358, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(358, 21)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "initialize_logging\000std", NULL,
    {.const_idx = -func_std__initialize_logging}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "364_5_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "365_5_log_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "366_5_log_filename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open\000", NULL,
    {.position = POS(370, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDERR_FILENO\000", NULL,
    {.position = POS(371, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dup2\000", NULL,
    {.position = POS(371, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "375_15_stdout_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDOUT_FILENO\000", NULL,
    {.position = POS(375, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "fstat\000", NULL,
    {.position = POS(375, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "376_15_stderr_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inode_number_of\000", NULL,
    {.position = POS(379, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(379, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(379, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "device_of\000", NULL,
    {.position = POS(380, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "log\000", NULL,
    {.position = POS(398, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "400_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "401_5_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "402_5_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(406, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if_not\000", NULL,
    {.position = POS(406, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(407, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(407, 59)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split_into_lines\000", NULL,
    {.position = POS(408, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "409_8_prefix\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(409, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "410_8_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(411, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(414, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spaces\000", NULL,
    {.position = POS(414, 23)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "register_handlers\000", NULL,
    {.position = POS(420, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "422_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "423_5_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "426_4_handlers\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "default_value\000", NULL,
    {.position = POS(426, 13)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deregister_handlers\000", NULL,
    {.position = POS(436, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "438_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "439_5_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "440_5_types\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "442_4_handlers\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deregister_all_handlers\000", NULL,
    {.position = POS(455, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "register_resource\000", NULL,
    {.position = POS(463, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "run\000", NULL,
    {.position = POS(472, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "run_at\000", NULL,
    {.position = POS(481, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "483_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "484_5_time\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "exit\000", NULL,
    {.position = POS(492, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(502, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "504_5_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(507, 7)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "log_unhandled_event\000std", NULL,
    {.const_idx = -func_std__log_unhandled_event}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "513_29_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "514_10_type\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "514_16_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_FAILED\000", NULL,
    {.position = POS(519, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_PENDING\000", NULL,
    {.position = POS(520, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_COMPLETED\000", NULL,
    {.position = POS(521, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(527, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(525, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "serialize\000", NULL,
    {.position = POS(530, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim_right\000", NULL,
    {.position = POS(530, 43)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "initialize\000", NULL,
    {.position = POS(532, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_time\000", NULL,
    {.position = POS(536, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "get_events\000", NULL,
    {.position = POS(539, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "541_5_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(547, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "554_4_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "555_4_want_to_write\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "557_18_t\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "558_4_start_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "560_4_first_job_time\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "561_4_remaining_timed_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "562_4_timeout\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "564_8_timed_job\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "565_40_time\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(591, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(591, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(595, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "608_41_new_event\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "apply\000", NULL,
    {.position = POS(608, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(612, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "636_8_read_descriptor_list\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(642, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "645_10_can_read\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "646_10_can_write\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pselect\000", NULL,
    {.position = POS(643, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "650_8_injected_into_stdin\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "651_8_write_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "653_12_signal\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGCHLD\000", NULL,
    {.position = POS(655, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "process_id\000", NULL,
    {.position = POS(658, 41)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "658_29_pid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "658_34_status\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "waitpid\000", NULL,
    {.position = POS(658, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(660, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(660, 44)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(661, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exitstatus\000", NULL,
    {.position = POS(663, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PROCESS_JOINED\000", NULL,
    {.position = POS(669, 48)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "typed_tuple\000", NULL,
    {.position = POS(668, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(656, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGWINCH\000", NULL,
    {.position = POS(675, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGNAL\000", NULL,
    {.position = POS(682, 50)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDIN_FILENO\000", NULL,
    {.position = POS(692, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_terminal_size\000", NULL,
    {.position = POS(694, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ\000", NULL,
    {.position = POS(697, 55)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "705_14_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "706_14_job\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "707_21_bytes_written\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "734_14_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(735, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "type_of\000", NULL,
    {.position = POS(738, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SOCKET\000", NULL,
    {.position = POS(738, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_listening\000", NULL,
    {.position = POS(739, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "742_32_conn\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "accept\000", NULL,
    {.position = POS(742, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ_FAILED\000", NULL,
    {.position = POS(746, 58)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CONNECT\000", NULL,
    {.position = POS(750, 58)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "757_42_do_close\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "757_52_max_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "763_24_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read\000", NULL,
    {.position = POS(763, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CLOSED\000", NULL,
    {.position = POS(776, 67)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(735, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "806_29_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "808_8_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "817_17_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "821_12_resource\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finalize\000", NULL,
    {.position = POS(829, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "840_25_io\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGKILL\000", NULL,
    {.position = POS(843, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "kill\000", NULL,
    {.position = POS(843, 7)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "handle_events\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "handle_event\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "handle_events\000", NULL,
    {.position = POS(850, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "850_32_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "851_4_new_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "852_4_handlers\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "854_8_event\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "855_14_type\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "855_20_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "855_24_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "856_8_id_handlers\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "861_12_handler\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "866_16_context\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_tuple\000", NULL,
    {.position = POS(867, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(868, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "second\000", NULL,
    {.position = POS(868, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(870, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "869_23_new_event\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(877, 35)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__io__io_events = {
  "_basic__io__io_events", // module name
  "basic/io/io_events.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  198, // number of constants
  260, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
