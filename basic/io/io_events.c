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
  tuple_241_0 = -16,
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
  lambda_timeout = -106,
  lambda_50 = -107,
  lambda_exit_codes_ofself = -108,
  lambda_51 = -109,
  func_handle_start_jobs = -110,
  lambda_52 = -111,
  lambda_new_event_is_defined = -112,
  lambda_new_event_is_a_list = -113,
  lambda_53 = -114,
  lambda_54 = -115,
  func_handle_write_jobs = -116,
  lambda_55 = -117,
  func_wait_for_events = -118,
  lambda_56 = -119,
  lambda_57 = -120,
  lambda_58 = -121,
  lambda_59 = -122,
  lambda_SIGCHLD = -123,
  lambda_watched_pids_ofselfpid = -124,
  lambda_60 = -125,
  lambda_SIGWINCH = -126,
  lambda_61 = -127,
  lambda_catched_signals_ofselfsignal = -128,
  func_handle_write_requests = -129,
  lambda_62 = -130,
  lambda_63 = -131,
  lambda_64 = -132,
  string_4 = -133,
  string_5 = -134,
  str_t = -135,
  lambda_65 = -136,
  func_check_file_descriptors = -137,
  lambda_66 = -138,
  lambda_bytes_written_is_an_error = -139,
  lambda_67 = -140,
  lambda_68 = -141,
  lambda_69 = -142,
  func_attempt_reads = -143,
  lambda_70 = -144,
  lambda_71 = -145,
  lambda_72 = -146,
  lambda_73 = -147,
  lambda_does_listen = -148,
  lambda_conn_is_an_error = -149,
  lambda_74 = -150,
  func_do_read = -151,
  lambda_75 = -152,
  num_0x100000 = -153,
  lambda_76 = -154,
  lambda_77 = -155,
  lambda_buf_is_an_error = -156,
  lambda_do_close = -157,
  lambda_78 = -158,
  lambda_buf_is_empty = -159,
  lambda_2_do_close = -160,
  lambda_79 = -161,
  lambda_max_length_is_defined = -162,
  lambda_80 = -163,
  lambda_81 = -164,
  lambda_3_do_close = -165,
  lambda_82 = -166,
  func_attempt_close_operations = -167,
  lambda_83 = -168,
  lambda_write_jobs_ofiofd_is_undefined = -169,
  lambda_84 = -170,
  func_attempt_exit = -171,
  lambda_exit_code_ofio_is_defined = -172,
  lambda_85 = -173,
  lambda_do_log_ofresource = -174,
  str_finalizing = -175,
  func_finalize_resource = -176,
  lambda_86 = -177,
  lambda_io_is_empty = -178,
  lambda_87 = -179,
  lambda_88 = -180,
  func_kill_child_processes = -181,
  lambda_89 = -182,
  lambda_90 = -183,
  func_std_types__io___handle_events = -184,
  lambda_91 = -185,
  lambda_92 = -186,
  lambda_93 = -187,
  lambda_94 = -188,
  lambda_95 = -189,
  lambda_96 = -190,
  lambda_2_new_event_is_defined = -191,
  lambda_new_event = -192,
  func_keep_event = -193,
  lambda_97 = -194
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
  var_245_0_self, // dynamic
  var_246_0_fd, // dynamic
  var_247_0_do_close, // dynamic
  var_248_0_max_length, // dynamic
  var_is_defined, // extern
  var_if, // extern
  var_stop_reading_from, // extern polymorphic
  var_print_to, // extern polymorphic
  var_create_string, // extern
  var_to_utf8, // extern
  var_write, // extern polymorphic
  var_277_0_data, // dynamic
  var_279_1_job, // dynamic
  var_append, // extern
  var_cancel_write, // extern polymorphic
  var_close, // extern polymorphic
  var_join_process, // extern polymorphic
  var_start_injecting_window_change_events, // extern polymorphic
  var_stop_injecting_window_change_events, // extern polymorphic
  var_start_catching_signals, // extern polymorphic
  var_328_0_self, // dynamic
  var_331_1_catched_signals, // dynamic
  var_next, // extern
  var_for_each, // extern
  var_stop_catching_signals, // extern polymorphic
  var_340_0_self, // dynamic
  var_343_1_catched_signals, // dynamic
  var_set_timeout, // extern polymorphic
  var_352_0_self, // dynamic
  var_353_0_timeout, // dynamic
  var_is_a_number, // extern
  var_std__plus, // extern
  var_update_if, // extern
  var_356_1_current_timeout, // dynamic
  var_is_undefined, // extern
  var_std__less, // extern
  var_std__or, // extern
  var_std__initialize_logging, // initialized
  var_364_0_io, // dynamic
  var_365_0_log_level, // dynamic
  var_366_0_log_filename, // dynamic
  var_open, // extern
  var_STDERR_FILENO, // extern
  var_dup2, // extern
  var_375_8_stdout_info, // dynamic
  var_STDOUT_FILENO, // extern
  var_fstat, // extern
  var_376_8_stderr_info, // dynamic
  var_inode_number_of, // extern
  var_std__equal, // extern
  var_std__not, // extern
  var_device_of, // extern
  var_log, // extern polymorphic
  var_400_0_self, // dynamic
  var_401_0_level, // dynamic
  var_402_0_message, // dynamic
  var_is_a_string, // extern
  var_update_if_not, // extern
  var_has_suffix, // extern
  var_push, // extern
  var_split_into_lines, // extern
  var_409_1_prefix, // dynamic
  var_std__string, // extern
  var_410_1_buf, // dynamic
  var_range, // extern
  var_length_of, // extern
  var_spaces, // extern
  var_register_handlers, // extern polymorphic
  var_422_0_self, // dynamic
  var_423_0_id, // dynamic
  var_426_1_handlers, // dynamic
  var_default_value, // extern
  var_deregister_handlers, // extern polymorphic
  var_438_0_self, // dynamic
  var_439_0_id, // dynamic
  var_440_0_types, // dynamic
  var_442_1_handlers, // dynamic
  var_deregister_all_handlers, // extern polymorphic
  var_register_resource, // extern polymorphic
  var_run, // extern polymorphic
  var_run_at, // extern polymorphic
  var_483_0_self, // dynamic
  var_484_0_time, // dynamic
  var_exit, // extern polymorphic
  var_is_empty, // extern polymorphic
  var_504_0_self, // dynamic
  var_std__and, // extern
  var_std__log_unhandled_event, // initialized
  var_513_28_io, // dynamic
  var_514_7_type, // dynamic
  var_514_13_fd, // dynamic
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
  var_541_0_self, // dynamic
  var_inc, // extern
  var_554_1_events, // dynamic
  var_555_1_want_to_write, // dynamic
  var_557_15_t, // dynamic
  var_558_1_start_jobs, // dynamic
  var_560_1_first_job_time, // dynamic
  var_561_1_remaining_timed_jobs, // dynamic
  var_562_1_timeout, // dynamic
  var_564_3_timed_job, // dynamic
  var_565_33_time, // dynamic
  var_std__minus, // extern
  var_max, // extern
  var_any_of, // extern
  var_605_32_new_event, // dynamic
  var_apply, // extern
  var_is_a_list, // extern
  var_633_1_read_descriptor_list, // dynamic
  var_is_not_empty, // extern
  var_642_1_can_read, // dynamic
  var_643_1_can_write, // dynamic
  var_pselect, // extern
  var_647_1_injected_into_stdin, // dynamic
  var_648_1_write_jobs, // dynamic
  var_650_3_signal, // dynamic
  var_SIGCHLD, // extern
  var_653_7_pid, // dynamic
  var_653_12_status, // dynamic
  var_wait, // extern
  var_exitstatus, // extern
  var_PROCESS_JOINED, // extern
  var_typed_tuple, // extern
  var_SIGWINCH, // extern
  var_SIGNAL, // extern
  var_STDIN_FILENO, // extern
  var_get_terminal_size, // extern
  var_READ, // extern
  var_694_3_fd, // dynamic
  var_695_1_job, // dynamic
  var_696_8_bytes_written, // dynamic
  var_is_an_error, // extern
  var_723_3_fd, // dynamic
  var_not, // extern
  var_type_of, // extern
  var_SOCKET, // extern
  var_is_listening, // extern
  var_731_9_conn, // dynamic
  var_accept, // extern
  var_READ_FAILED, // extern
  var_CONNECT, // extern
  var_746_25_do_close, // dynamic
  var_746_35_max_length, // dynamic
  var_752_7_buf, // dynamic
  var_read, // extern
  var_CLOSED, // extern
  var_if_not, // extern
  var_795_28_io, // dynamic
  var_797_3_fd, // dynamic
  var_806_16_io, // dynamic
  var_810_3_resource, // dynamic
  var_finalize, // extern
  var_829_24_io, // dynamic
  var_SIGKILL, // extern
  var_kill, // extern
  var_std__handle_events, // attribute
  var_std__handle_event, // attribute
  var_handle_events, // extern polymorphic
  var_839_31_io, // dynamic
  var_840_1_new_events, // dynamic
  var_841_1_handlers, // dynamic
  var_843_3_event, // dynamic
  var_844_7_type, // dynamic
  var_844_13_id, // dynamic
  var_844_17_data, // dynamic
  var_845_1_id_handlers, // dynamic
  var_850_1_handler, // dynamic
  var_855_1_context, // dynamic
  var_is_a_tuple, // extern
  var_first, // extern
  var_second, // extern
  var_parameter_count_of, // extern
  var_858_8_new_event, // dynamic
  var_list, // extern
  var__END
};


static TAB_NUM t_func_std_types__resource___enable_logging[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 231_0_self
  // .do_log_of true)
  LET, -1, LOCAL(2), var_do_log_of, var_true, LOCAL(1),
  // -> self(.do_log_of true)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(233, 11),
  POS(233, 3)
};

static TAB_NUM t_func_std_types__resource___disable_logging[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 237_0_self
  // .do_log_of false)
  LET, -1, LOCAL(2), var_do_log_of, var_false, LOCAL(1),
  // -> self(.do_log_of false)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(239, 11),
  POS(239, 3)
};

static TAB_NUM t_func_std_types__io___start_reading_from[] = {
  2, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_245_0_self,
  MANDATORY_PARAMETER, var_246_0_fd,
  var_true, var_247_0_do_close,
  var_undefined, var_248_0_max_length,
  // exit_code_of(self).is_defined
  var_exit_code_of, 1, var_245_0_self, 1, LOCAL(1),
  // is_defined
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1, lambda_2, TAIL_CALL,
  POS(251, 5),
  POS(251, 24),
  POS(250, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_245_0_self, TAIL_CALL,
  POS(252, 7)
};

static TAB_NUM t_lambda_2[] = {
  3, // locals
  0, // parameters
  // !self.read_jobs_of(fd) tuple(do_close max_length)
  var_tuple, 2, var_247_0_do_close, var_248_0_max_length, 1, LOCAL(2),
  // read_jobs_of(fd) tuple(do_close max_length)
  var_read_jobs_of, 1, var_245_0_self, 1, LOCAL(3),
  // read_jobs_of(fd) tuple(do_close max_length)
  LOCAL(3), 2, var_246_0_fd, LOCAL(2), 1, LOCAL(3),
  // self.read_jobs_of(fd) tuple(do_close max_length)
  LET, -1, var_245_0_self, var_read_jobs_of, LOCAL(3), var_245_0_self,
  // -> self
  LET, 1, var_245_0_self, TAIL_CALL,
  POS(254, 7),
  POS(254, 13),
  POS(254, 13),
  POS(254, 8),
  POS(255, 7)
};

static TAB_NUM t_func_std_types__io___stop_reading_from[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 259_0_self
  LOCAL(4), // 260_0_fd
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
  POS(263, 3)
};

static TAB_NUM t_func_std_types__io___print_to[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 267_0_self
  MANDATORY_PARAMETER, LOCAL(4), // 268_0_fd
  REST_PARAMETER, LOCAL(5), // 269_0_args
  // create_string(args).to_utf8
  var_create_string, 1, LOCAL(5), 1, LOCAL(1),
  // to_utf8
  var_to_utf8, 1, LOCAL(1), 1, LOCAL(2),
  // write self fd create_string(args).to_utf8
  var_write, 3, LOCAL(3), LOCAL(4), LOCAL(2), TAIL_CALL,
  POS(271, 17),
  POS(271, 37),
  POS(271, 3)
};

static TAB_NUM t_func_std_types__io___write[] = {
  4, // locals
  3, // parameters
  LOCAL(3), // 275_0_self
  LOCAL(4), // 276_0_fd
  var_277_0_data,
  // write_jobs_of(self)(fd)
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(1),
  // $job write_jobs_of(self)(fd)
  LOCAL(1), 1, LOCAL(4), 1, var_279_1_job,
  // is_defined
  var_is_defined, 1, var_279_1_job, 1, LOCAL(1),
  // !job
  var_if, 3, LOCAL(1), lambda_3, lambda_4, 1, var_279_1_job,
  // write_jobs_of(fd) job
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(2),
  // write_jobs_of(fd) job
  LOCAL(2), 2, LOCAL(4), var_279_1_job, 1, LOCAL(2),
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
  POS(286, 3)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // append(job data)
  var_append, 2, var_279_1_job, var_277_0_data, 1, LOCAL(1),
  //  append(job data)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(283, 10),
  POS(283, 9)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_277_0_data, TAIL_CALL,
  POS(284, 9)
};

static TAB_NUM t_func_std_types__io___cancel_write[] = {
  5, // locals
  2, // parameters
  LOCAL(3), // 290_0_self
  LOCAL(4), // 291_0_fd
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
  POS(295, 3)
};

static TAB_NUM t_func_std_types__io___close[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 299_0_self
  LOCAL(4), // 300_0_fd
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
  POS(304, 3)
};

static TAB_NUM t_func_std_types__io___join_process[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 308_0_self
  LOCAL(4), // 309_0_pid
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
  POS(312, 3)
};

static TAB_NUM t_func_std_types__io___start_injecting_window_change_events[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 316_0_self
  // .do_inject_window_change_events true)
  LET, -1, LOCAL(2), var_do_inject_window_change_events, var_true, LOCAL(1),
  // -> self(.do_inject_window_change_events true)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(318, 11),
  POS(318, 3)
};

static TAB_NUM t_func_std_types__io___stop_injecting_window_change_events[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 322_0_self
  // .do_inject_window_change_events false)
  LET, -1, LOCAL(2), var_do_inject_window_change_events, var_false, LOCAL(1),
  // -> self(.do_inject_window_change_events false)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(324, 11),
  POS(324, 3)
};

static TAB_NUM t_func_std_types__io___start_catching_signals[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_328_0_self,
  REST_PARAMETER, LOCAL(1), // 329_0_signals
  // $catched_signals catched_signals_of(self)
  var_catched_signals_of, 1, var_328_0_self, 1, var_331_1_catched_signals,
  // for_each signals
  var_for_each, 3, LOCAL(1), lambda_5, lambda_6, TAIL_CALL,
  POS(331, 3),
  POS(332, 3)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 333_3_signal
  // catched_signals(signal) true
  var_331_1_catched_signals, 2, LOCAL(1), var_true, 1, var_331_1_catched_signals,
  // next
  var_next, 0, TAIL_CALL,
  POS(334, 8),
  POS(335, 7)
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // .catched_signals_of catched_signals)
  LET, -1, var_328_0_self, var_catched_signals_of, var_331_1_catched_signals, LOCAL(1),
  //  self(.catched_signals_of catched_signals)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(336, 13),
  POS(336, 7)
};

static TAB_NUM t_func_std_types__io___stop_catching_signals[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_340_0_self,
  REST_PARAMETER, LOCAL(1), // 341_0_signals
  // $catched_signals catched_signals_of(self)
  var_catched_signals_of, 1, var_340_0_self, 1, var_343_1_catched_signals,
  // for_each signals
  var_for_each, 3, LOCAL(1), lambda_7, lambda_8, TAIL_CALL,
  POS(343, 3),
  POS(344, 3)
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 345_3_signal
  // catched_signals(signal) false
  var_343_1_catched_signals, 2, LOCAL(1), var_false, 1, var_343_1_catched_signals,
  // next
  var_next, 0, TAIL_CALL,
  POS(346, 8),
  POS(347, 7)
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // .catched_signals_of catched_signals)
  LET, -1, var_340_0_self, var_catched_signals_of, var_343_1_catched_signals, LOCAL(1),
  //  self(.catched_signals_of catched_signals)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(348, 13),
  POS(348, 7)
};

static TAB_NUM t_func_std_types__io___set_timeout[] = {
  2, // locals
  2, // parameters
  var_352_0_self,
  var_353_0_timeout,
  // is_a_number &timeout -> current_time_of(self)+timeout
  var_is_a_number, 1, var_353_0_timeout, 1, LOCAL(1),
  // update_if timeout.is_a_number &timeout -> current_time_of(self)+timeout
  var_update_if, 3, LOCAL(1), var_353_0_timeout, lambda_9, 1, var_353_0_timeout,
  // $current_timeout timeout_of(self)
  var_timeout_of, 1, var_352_0_self, 1, var_356_1_current_timeout,
  // is_undefined || timeout < current_timeout
  var_is_undefined, 1, var_356_1_current_timeout, 1, LOCAL(1),
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

static TAB_NUM t_lambda_9[] = {
  2, // locals
  0, // parameters
  // current_time_of(self)+timeout
  var_current_time_of, 1, var_352_0_self, 1, LOCAL(1),
  // current_time_of(self)+timeout
  var_std__plus, 2, LOCAL(1), var_353_0_timeout, 1, LOCAL(2),
  //  current_time_of(self)+timeout
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(355, 45),
  POS(355, 45),
  POS(355, 44)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // timeout < current_timeout
  var_std__less, 2, var_353_0_timeout, var_356_1_current_timeout, 1, LOCAL(1),
  // timeout < current_timeout
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(358, 37),
  POS(358, 37)
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // .timeout_of timeout)
  LET, -1, var_352_0_self, var_timeout_of, var_353_0_timeout, LOCAL(1),
  //  self(.timeout_of timeout)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(359, 13),
  POS(359, 7)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_352_0_self, TAIL_CALL,
  POS(360, 7)
};

static TAB_NUM t_func_std__initialize_logging[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_364_0_io,
  num_3, var_365_0_log_level,
  var_undefined, var_366_0_log_filename,
  // is_defined:
  var_is_defined, 1, var_366_0_log_filename, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_log_filename_is_defined, lambda_13, IO_TAIL_CALL,
  POS(369, 18),
  POS(368, 3)
};

static TAB_NUM t_lambda_log_filename_is_defined[] = {
  1, // locals
  0, // parameters
  // open! $log_fd log_filename "w+"
  var_open, 2, var_366_0_log_filename, str_w, IO_CALL(1), LOCAL(1),
  // dup2! log_fd STDERR_FILENO
  var_dup2, 2, LOCAL(1), var_STDERR_FILENO, IO_CALL(0),
  // close! log_fd
  var_close, 1, LOCAL(1), IO_CALL(0),
  // enable_logging io log_level
  var_enable_logging, 2, var_364_0_io, var_365_0_log_level, TAIL_CALL,
  POS(370, 7),
  POS(371, 7),
  POS(372, 7),
  POS(373, 7)
};

static TAB_NUM t_lambda_13[] = {
  5, // locals
  0, // parameters
  // fstat! $stdout_info STDOUT_FILENO
  var_fstat, 1, var_STDOUT_FILENO, IO_CALL(1), var_375_8_stdout_info,
  // fstat! $stderr_info STDERR_FILENO
  var_fstat, 1, var_STDERR_FILENO, IO_CALL(1), var_376_8_stderr_info,
  // inode_number_of(stderr_info) != inode_number_of(stdout_info)
  var_inode_number_of, 1, var_376_8_stderr_info, 1, LOCAL(1),
  // inode_number_of(stdout_info)
  var_inode_number_of, 1, var_375_8_stdout_info, 1, LOCAL(2),
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

static TAB_NUM t_lambda_14[] = {
  4, // locals
  0, // parameters
  // device_of(stderr_info) != device_of(stdout_info)
  var_device_of, 1, var_376_8_stderr_info, 1, LOCAL(1),
  // device_of(stdout_info)
  var_device_of, 1, var_375_8_stdout_info, 1, LOCAL(2),
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

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  // enable_logging io log_level
  var_enable_logging, 2, var_364_0_io, var_365_0_log_level, TAIL_CALL,
  POS(382, 11)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_364_0_io, TAIL_CALL,
  POS(383, 11)
};

static TAB_NUM t_func_std_types__io___enable_logging[] = {
  3, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 387_0_self
  num_1, LOCAL(3), // 388_0_level
  // .log_level_of level)
  LET, -1, LOCAL(2), var_log_level_of, LOCAL(3), LOCAL(1),
  // -> self(.log_level_of level)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(390, 11),
  POS(390, 3)
};

static TAB_NUM t_func_std_types__io___disable_logging[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 394_0_self
  // .log_level_of 0)
  LET, -1, LOCAL(2), var_log_level_of, num_0, LOCAL(1),
  // -> self(.log_level_of 0)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(396, 11),
  POS(396, 3)
};

static TAB_NUM t_func_std_types__io___log[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_400_0_self,
  num_1, var_401_0_level,
  MANDATORY_PARAMETER, var_402_0_message,
  // log_level_of(self):
  var_log_level_of, 1, var_400_0_self, 1, LOCAL(1),
  // log_level_of(self):
  var_std__less, 2, LOCAL(1), var_401_0_level, 1, LOCAL(2),
  // log_level_of(self):
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_17, lambda_22, TAIL_CALL,
  POS(405, 14),
  POS(405, 14),
  POS(405, 14),
  POS(404, 3)
};

static TAB_NUM t_lambda_17[] = {
  2, // locals
  0, // parameters
  // is_a_string &message -> message()
  var_is_a_string, 1, var_402_0_message, 1, LOCAL(1),
  // update_if_not message.is_a_string &message -> message()
  var_update_if_not, 3, LOCAL(1), var_402_0_message, lambda_18, 1, var_402_0_message,
  // message .has_suffix. '@nl;' &message: push message '@nl;'
  var_has_suffix, 2, var_402_0_message, chr_10, 1, LOCAL(1),
  // update_if_not message .has_suffix. '@nl;' &message: push message '@nl;'
  var_update_if_not, 3, LOCAL(1), var_402_0_message, lambda_19, 1, var_402_0_message,
  // $lines split_into_lines(message)
  var_split_into_lines, 1, var_402_0_message, 1, LOCAL(2),
  // $prefix "[@(level)] "
  var_std__string, 3, string_1, var_401_0_level, string_2, 1, var_409_1_prefix,
  // lines(1))
  LOCAL(2), 1, num_1, 1, LOCAL(1),
  // $buf append(prefix lines(1))
  var_append, 2, var_409_1_prefix, LOCAL(1), 1, var_410_1_buf,
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
  POS(412, 7)
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  0, // parameters
  // message()
  var_402_0_message, 0, 1, LOCAL(1),
  //  message()
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(406, 53),
  POS(406, 52)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  // push message '@nl;'
  var_push, 2, var_402_0_message, chr_10, TAIL_CALL,
  POS(407, 59)
};

static TAB_NUM t_lambda_20[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 413_3_line
  // length_of(prefix)) line
  var_length_of, 1, var_409_1_prefix, 1, LOCAL(1),
  // spaces(length_of(prefix)) line
  var_spaces, 1, LOCAL(1), 1, LOCAL(2),
  // append &buf spaces(length_of(prefix)) line
  var_append, 3, var_410_1_buf, LOCAL(2), LOCAL(3), 1, var_410_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(414, 30),
  POS(414, 23),
  POS(414, 11),
  POS(415, 11)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // to_utf8
  var_to_utf8, 1, var_410_1_buf, 1, LOCAL(1),
  // write self STDERR_FILENO buf.to_utf8
  var_write, 3, var_400_0_self, var_STDERR_FILENO, LOCAL(1), TAIL_CALL,
  POS(417, 40),
  POS(417, 11)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_400_0_self, TAIL_CALL,
  POS(418, 7)
};

static TAB_NUM t_func_std_types__io___register_handlers[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_422_0_self,
  MANDATORY_PARAMETER, var_423_0_id,
  REST_PARAMETER, LOCAL(3), // 424_0_type_handlers
  // handlers_of(self)(id) empty_hash_table)
  var_handlers_of, 1, var_422_0_self, 1, LOCAL(1),
  // handlers_of(self)(id) empty_hash_table)
  LOCAL(1), 1, var_423_0_id, 1, LOCAL(2),
  // $handlers default_value(handlers_of(self)(id) empty_hash_table)
  var_default_value, 2, LOCAL(2), var_empty_hash_table, 1, var_426_1_handlers,
  // for_each type_handlers
  var_for_each, 3, LOCAL(3), lambda_23, lambda_24, TAIL_CALL,
  POS(426, 27),
  POS(426, 27),
  POS(426, 3),
  POS(427, 3)
};

static TAB_NUM t_lambda_23[] = {
  3, // locals
  1, // parameters
  LOCAL(1), // 428_3_type_handler
  // type_handler $type $handler
  LOCAL(1), 0, 2, LOCAL(2), LOCAL(3),
  // handlers(type) handler
  var_426_1_handlers, 2, LOCAL(2), LOCAL(3), 1, var_426_1_handlers,
  // next
  var_next, 0, TAIL_CALL,
  POS(429, 7),
  POS(430, 8),
  POS(431, 7)
};

static TAB_NUM t_lambda_24[] = {
  2, // locals
  0, // parameters
  // handlers_of(id) handlers
  var_handlers_of, 1, var_422_0_self, 1, LOCAL(2),
  // handlers_of(id) handlers
  LOCAL(2), 2, var_423_0_id, var_426_1_handlers, 1, LOCAL(2),
  // self.handlers_of(id) handlers
  LET, -1, var_422_0_self, var_handlers_of, LOCAL(2), var_422_0_self,
  // -> self
  LET, 1, var_422_0_self, TAIL_CALL,
  POS(433, 13),
  POS(433, 13),
  POS(433, 8),
  POS(434, 7)
};

static TAB_NUM t_func_std_types__io___deregister_handlers[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_438_0_self,
  MANDATORY_PARAMETER, var_439_0_id,
  REST_PARAMETER, var_440_0_types,
  // handlers_of(self)(id)
  var_handlers_of, 1, var_438_0_self, 1, LOCAL(1),
  // $handlers handlers_of(self)(id)
  LOCAL(1), 1, var_439_0_id, 1, var_442_1_handlers,
  // is_undefined
  var_is_undefined, 1, var_442_1_handlers, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25, lambda_26, TAIL_CALL,
  POS(442, 13),
  POS(442, 3),
  POS(444, 14),
  POS(443, 3)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_438_0_self, TAIL_CALL,
  POS(445, 7)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  // for_each types
  var_for_each, 3, var_440_0_types, lambda_27, lambda_28, TAIL_CALL,
  POS(447, 7)
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 448_3_type
  // handlers(type) undefined
  var_442_1_handlers, 2, LOCAL(1), var_undefined, 1, var_442_1_handlers,
  // next
  var_next, 0, TAIL_CALL,
  POS(449, 12),
  POS(450, 11)
};

static TAB_NUM t_lambda_28[] = {
  2, // locals
  0, // parameters
  // handlers_of(id) handlers
  var_handlers_of, 1, var_438_0_self, 1, LOCAL(2),
  // handlers_of(id) handlers
  LOCAL(2), 2, var_439_0_id, var_442_1_handlers, 1, LOCAL(2),
  // self.handlers_of(id) handlers
  LET, -1, var_438_0_self, var_handlers_of, LOCAL(2), var_438_0_self,
  // -> self
  LET, 1, var_438_0_self, TAIL_CALL,
  POS(452, 17),
  POS(452, 17),
  POS(452, 12),
  POS(453, 11)
};

static TAB_NUM t_func_std_types__io___deregister_all_handlers[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 457_0_self
  LOCAL(4), // 458_0_id
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
  POS(461, 3)
};

static TAB_NUM t_func_std_types__io___register_resource[] = {
  5, // locals
  3, // parameters
  LOCAL(3), // 465_0_self
  LOCAL(4), // 466_0_key
  LOCAL(5), // 467_0_resource
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
  POS(470, 3)
};

static TAB_NUM t_func_std_types__io___run[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 474_0_self
  MANDATORY_PARAMETER, LOCAL(4), // 475_0_command
  REST_PARAMETER, LOCAL(5), // 476_0_arguments
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
  POS(479, 3)
};

static TAB_NUM t_func_std_types__io___run_at[] = {
  4, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_483_0_self,
  MANDATORY_PARAMETER, var_484_0_time,
  MANDATORY_PARAMETER, LOCAL(3), // 485_0_command
  REST_PARAMETER, LOCAL(4), // 486_0_arguments
  // is_a_number &time -> current_time_of(self)+time
  var_is_a_number, 1, var_484_0_time, 1, LOCAL(1),
  // update_if time.is_a_number &time -> current_time_of(self)+time
  var_update_if, 3, LOCAL(1), var_484_0_time, lambda_29, 1, var_484_0_time,
  // timed_jobs_of tuple(command arguments time)
  var_timed_jobs_of, 1, var_483_0_self, 1, LOCAL(1),
  // tuple(command arguments time)
  var_tuple, 3, LOCAL(3), LOCAL(4), var_484_0_time, 1, LOCAL(2),
  // push &self.timed_jobs_of tuple(command arguments time)
  var_push, 2, LOCAL(1), LOCAL(2), 1, LOCAL(1),
  // self.timed_jobs_of tuple(command arguments time)
  LET, -1, var_483_0_self, var_timed_jobs_of, LOCAL(1), var_483_0_self,
  // -> self
  LET, 1, var_483_0_self, TAIL_CALL,
  POS(488, 18),
  POS(488, 3),
  POS(489, 14),
  POS(489, 28),
  POS(489, 3),
  POS(489, 9),
  POS(490, 3)
};

static TAB_NUM t_lambda_29[] = {
  2, // locals
  0, // parameters
  // current_time_of(self)+time
  var_current_time_of, 1, var_483_0_self, 1, LOCAL(1),
  // current_time_of(self)+time
  var_std__plus, 2, LOCAL(1), var_484_0_time, 1, LOCAL(2),
  //  current_time_of(self)+time
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(488, 39),
  POS(488, 39),
  POS(488, 38)
};

static TAB_NUM t_func_std_types__io___exit[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 494_0_self
  LOCAL(3), // 495_0_exit_code
  // self
  LET, -2, LOCAL(2), var_exit_code_of, LOCAL(3), var_read_jobs_of, var_empty_hash_table, LOCAL(1),
  // ->
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(498, 5),
  POS(497, 3)
};

static TAB_NUM t_func_std_types__io___is_empty[] = {
  3, // locals
  1, // parameters
  var_504_0_self,
  // read_jobs_of(self).is_empty
  var_read_jobs_of, 1, var_504_0_self, 1, LOCAL(1),
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

static TAB_NUM t_lambda_30[] = {
  3, // locals
  0, // parameters
  // write_jobs_of(self).is_empty
  var_write_jobs_of, 1, var_504_0_self, 1, LOCAL(1),
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

static TAB_NUM t_lambda_31[] = {
  3, // locals
  0, // parameters
  // close_jobs_of(self).is_empty
  var_close_jobs_of, 1, var_504_0_self, 1, LOCAL(1),
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

static TAB_NUM t_lambda_32[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(self).is_empty
  var_watched_pids_of, 1, var_504_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // watched_pids_of(self).is_empty
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(511, 7),
  POS(511, 29),
  POS(511, 7)
};

static TAB_NUM t_func_std__log_unhandled_event[] = {
  3, // locals
  2, // parameters
  var_513_28_io,
  LOCAL(3), // 513_31_event
  // event $type $fd $_argument
  LOCAL(3), 0, 3, var_514_7_type, var_514_13_fd, LOCAL(1),
  // fd == STDERR_FILENO
  var_std__equal, 2, var_514_13_fd, var_STDERR_FILENO, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_33, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_36, lambda_37, TAIL_CALL,
  POS(514, 3),
  POS(517, 7),
  POS(516, 7),
  POS(515, 3)
};

static TAB_NUM t_lambda_33[] = {
  2, // locals
  0, // parameters
  // type == WRITE_FAILED
  var_std__equal, 2, var_514_7_type, var_WRITE_FAILED, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_34, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(519, 9),
  POS(518, 9),
  POS(518, 9)
};

static TAB_NUM t_lambda_34[] = {
  2, // locals
  0, // parameters
  // type == WRITE_PENDING
  var_std__equal, 2, var_514_7_type, var_WRITE_PENDING, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_35, 1, LOCAL(2),
  // type == WRITE_PENDING
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(520, 9),
  POS(518, 9),
  POS(520, 9)
};

static TAB_NUM t_lambda_35[] = {
  1, // locals
  0, // parameters
  // type == WRITE_COMPLETED
  var_std__equal, 2, var_514_7_type, var_WRITE_COMPLETED, 1, LOCAL(1),
  // type == WRITE_COMPLETED
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(521, 9),
  POS(521, 9)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  io # prevent recursive logging
  LET, 1, var_513_28_io, TAIL_CALL,
  POS(522, 7)
};

static TAB_NUM t_lambda_37[] = {
  2, // locals
  0, // parameters
  // WRITE_PENDING, WRITE_COMPLETED -> 5
  var_std__sequence, 2, var_WRITE_PENDING, var_WRITE_COMPLETED, 1, LOCAL(1),
  // $log_level
  var_case, 4, var_514_7_type, LOCAL(1), lambda_38, lambda_39, 1, LOCAL(2),
  // log io log_level -> "
  var_log, 3, var_513_28_io, LOCAL(2), lambda_40, TAIL_CALL,
  POS(527, 11),
  POS(524, 7),
  POS(529, 7)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  //  5
  LET, 1, num_5, TAIL_CALL,
  POS(527, 44)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  //  2
  LET, 1, num_2, TAIL_CALL,
  POS(528, 13)
};

static TAB_NUM t_lambda_40[] = {
  4, // locals
  0, // parameters
  // serialize(type).trim_right) - @(serialize(fd))@
  var_serialize, 1, var_514_7_type, 1, LOCAL(1),
  // trim_right) - @(serialize(fd))@
  var_trim_right, 1, LOCAL(1), 1, LOCAL(2),
  // serialize(fd))@
  var_serialize, 1, var_514_13_fd, 1, LOCAL(3),
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

static TAB_NUM t_func_std_types__io___initialize[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 534_0_self
  // current_time! $t
  var_current_time, 0, IO_CALL(1), LOCAL(3),
  // .current_time_of t)
  LET, -1, LOCAL(2), var_current_time_of, LOCAL(3), LOCAL(1),
  // -> self(.current_time_of t)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(536, 3),
  POS(537, 11),
  POS(537, 3)
};

static TAB_NUM t_func_std_types__io___get_events[] = {
  1, // locals
  1, // parameters
  var_541_0_self,
  // step_no_of
  var_step_no_of, 1, var_541_0_self, 1, LOCAL(1),
  // inc &self.step_no_of
  var_inc, 1, LOCAL(1), 1, LOCAL(1),
  // self.step_no_of
  LET, -1, var_541_0_self, var_step_no_of, LOCAL(1), var_541_0_self,
  // attempt_close_operations! &self
  func_attempt_close_operations, 1, var_541_0_self, IO_CALL(1), var_541_0_self,
  // attempt_exit! &self
  func_attempt_exit, 1, var_541_0_self, IO_CALL(1), var_541_0_self,
  // $events empty_list
  LET, 1, var_empty_list, 1, var_554_1_events,
  // $want_to_write empty_list
  LET, 1, var_empty_list, 1, var_555_1_want_to_write,
  // current_time! $t
  var_current_time, 0, IO_CALL(1), var_557_15_t,
  // $start_jobs start_jobs_of(self)
  var_start_jobs_of, 1, var_541_0_self, 1, var_558_1_start_jobs,
  // self.start_jobs_of empty_list
  LET, -1, var_541_0_self, var_start_jobs_of, var_empty_list, var_541_0_self,
  // $first_job_time undefined
  LET, 1, var_undefined, 1, var_560_1_first_job_time,
  // $remaining_timed_jobs empty_list
  LET, 1, var_empty_list, 1, var_561_1_remaining_timed_jobs,
  // $timeout undefined
  LET, 1, var_undefined, 1, var_562_1_timeout,
  // timed_jobs_of(self)
  var_timed_jobs_of, 1, var_541_0_self, 1, LOCAL(1),
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

static TAB_NUM t_lambda_41[] = {
  2, // locals
  1, // parameters
  var_564_3_timed_job,
  // timed_job $_command $_arguments $time
  var_564_3_timed_job, 0, 3, LOCAL(1), LOCAL(1), var_565_33_time,
  // t:
  var_std__less, 2, var_557_15_t, var_565_33_time, 1, LOCAL(1),
  // t:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_42, lambda_43, IO_TAIL_CALL,
  POS(565, 7),
  POS(567, 17),
  POS(567, 17),
  POS(566, 7)
};

static TAB_NUM t_lambda_42[] = {
  0, // locals
  0, // parameters
  // push &start_jobs timed_job
  var_push, 2, var_558_1_start_jobs, var_564_3_timed_job, 1, var_558_1_start_jobs,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(568, 11),
  POS(569, 11)
};

static TAB_NUM t_lambda_43[] = {
  2, // locals
  0, // parameters
  // push &remaining_timed_jobs timed_job
  var_push, 2, var_561_1_remaining_timed_jobs, var_564_3_timed_job, 1, var_561_1_remaining_timed_jobs,
  // is_undefined || time < first_job_time:
  var_is_undefined, 1, var_560_1_first_job_time, 1, LOCAL(1),
  // is_undefined || time < first_job_time:
  var_std__or, 2, LOCAL(1), lambda_44, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_45, var_next, IO_TAIL_CALL,
  POS(571, 11),
  POS(573, 28),
  POS(573, 28),
  POS(572, 11)
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  0, // parameters
  // time < first_job_time:
  var_std__less, 2, var_565_33_time, var_560_1_first_job_time, 1, LOCAL(1),
  // time < first_job_time:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(573, 44),
  POS(573, 44)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  // !first_job_time time
  LET, 1, var_565_33_time, 1, var_560_1_first_job_time,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(574, 15),
  POS(575, 15)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  // self.timed_jobs_of remaining_timed_jobs
  LET, -1, var_541_0_self, var_timed_jobs_of, var_561_1_remaining_timed_jobs, var_541_0_self,
  // set_timeout!
  func_set_timeout, 0, IO_TAIL_CALL,
  POS(578, 8),
  POS(579, 7)
};

static TAB_NUM t_func_set_timeout[] = {
  2, // locals
  0, // parameters
  // !timeout timeout_of(self)
  var_timeout_of, 1, var_541_0_self, 1, var_562_1_timeout,
  // is_defined || first_job_time.is_defined:
  var_is_defined, 1, var_562_1_timeout, 1, LOCAL(1),
  // is_defined || first_job_time.is_defined:
  var_std__or, 2, LOCAL(1), lambda_47, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_48, func_handle_start_jobs, IO_TAIL_CALL,
  POS(582, 5),
  POS(584, 15),
  POS(584, 15),
  POS(583, 5)
};

static TAB_NUM t_lambda_47[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_560_1_first_job_time, 1, LOCAL(1),
  // first_job_time.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(584, 44),
  POS(584, 29)
};

static TAB_NUM t_lambda_48[] = {
  2, // locals
  0, // parameters
  // is_undefined || first_job_time < timeout
  var_is_undefined, 1, var_562_1_timeout, 1, LOCAL(1),
  // is_undefined || first_job_time < timeout
  var_std__or, 2, LOCAL(1), lambda_49, 1, LOCAL(2),
  // update_if timeout.is_undefined || first_job_time < timeout
  var_update_if, 3, LOCAL(2), var_562_1_timeout, lambda_timeout, 1, var_562_1_timeout,
  // self.timeout_of undefined
  LET, -1, var_541_0_self, var_timeout_of, var_undefined, var_541_0_self,
  // timeout-t 0)
  var_std__minus, 2, var_562_1_timeout, var_557_15_t, 1, LOCAL(1),
  // !timeout max(timeout-t 0)
  var_max, 2, LOCAL(1), num_0, 1, var_562_1_timeout,
  // 0
  var_std__less, 2, num_0, var_562_1_timeout, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_50, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_51, func_handle_start_jobs, IO_TAIL_CALL,
  POS(585, 27),
  POS(585, 27),
  POS(585, 9),
  POS(587, 10),
  POS(588, 22),
  POS(588, 9),
  POS(591, 23),
  POS(590, 13),
  POS(589, 9)
};

static TAB_NUM t_lambda_49[] = {
  1, // locals
  0, // parameters
  // first_job_time < timeout
  var_std__less, 2, var_560_1_first_job_time, var_562_1_timeout, 1, LOCAL(1),
  // first_job_time < timeout
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(585, 43),
  POS(585, 43)
};

static TAB_NUM t_lambda_timeout[] = {
  0, // locals
  0, // parameters
  //  first_job_time
  LET, 1, var_560_1_first_job_time, TAIL_CALL,
  POS(586, 22)
};

static TAB_NUM t_lambda_50[] = {
  2, // locals
  0, // parameters
  // exit_codes_of(self): (pid _exit_code)
  var_exit_codes_of, 1, var_541_0_self, 1, LOCAL(1),
  // any_of
  var_any_of, 2, LOCAL(1), lambda_exit_codes_ofself, 1, LOCAL(2),
  // any_of
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(593, 15),
  POS(592, 13),
  POS(592, 13)
};

static TAB_NUM t_lambda_exit_codes_ofself[] = {
  3, // locals
  2, // parameters
  LOCAL(3), // 593_22_pid
  LOCAL(1),
  // watched_pids_of(self)(pid)
  var_watched_pids_of, 1, var_541_0_self, 1, LOCAL(1),
  // watched_pids_of(self)(pid)
  LOCAL(1), 1, LOCAL(3), 1, LOCAL(2),
  // -> watched_pids_of(self)(pid)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(594, 20),
  POS(594, 20),
  POS(594, 17)
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  // !timeout 0
  LET, 1, num_0, 1, var_562_1_timeout,
  // handle_start_jobs!
  func_handle_start_jobs, 0, IO_TAIL_CALL,
  POS(596, 13),
  POS(597, 13)
};

static TAB_NUM t_func_handle_start_jobs[] = {
  0, // locals
  0, // parameters
  // for_each start_jobs
  var_for_each, 3, var_558_1_start_jobs, lambda_52, lambda_54, IO_TAIL_CALL,
  POS(602, 5)
};

static TAB_NUM t_lambda_52[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 603_3_job
  // job $command $arguments
  LOCAL(2), 0, 2, LOCAL(3), LOCAL(4),
  // apply! command &self arguments $new_event
  var_apply, 3, LOCAL(3), var_541_0_self, LOCAL(4), IO_CALL(2), var_541_0_self, var_605_32_new_event,
  // is_defined:
  var_is_defined, 1, var_605_32_new_event, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_new_event_is_defined, var_next, IO_TAIL_CALL,
  POS(604, 9),
  POS(605, 9),
  POS(607, 21),
  POS(606, 9)
};

static TAB_NUM t_lambda_new_event_is_defined[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_605_32_new_event, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_new_event_is_a_list, lambda_53, IO_TAIL_CALL,
  POS(609, 25),
  POS(608, 13)
};

static TAB_NUM t_lambda_new_event_is_a_list[] = {
  0, // locals
  0, // parameters
  // append &events new_event
  var_append, 2, var_554_1_events, var_605_32_new_event, 1, var_554_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(610, 17),
  POS(611, 17)
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  // push &events new_event
  var_push, 2, var_554_1_events, var_605_32_new_event, 1, var_554_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(613, 17),
  POS(614, 17)
};

static TAB_NUM t_lambda_54[] = {
  1, // locals
  0, // parameters
  // !start_jobs start_jobs_of(self)
  var_start_jobs_of, 1, var_541_0_self, 1, var_558_1_start_jobs,
  // self.start_jobs_of empty_list
  LET, -1, var_541_0_self, var_start_jobs_of, var_empty_list, var_541_0_self,
  // is_empty
  var_is_empty, 1, var_558_1_start_jobs, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), func_handle_write_jobs, func_handle_start_jobs, IO_TAIL_CALL,
  POS(618, 9),
  POS(619, 10),
  POS(621, 22),
  POS(620, 9)
};

static TAB_NUM t_func_handle_write_jobs[] = {
  1, // locals
  0, // parameters
  // write_jobs_of(self)
  var_write_jobs_of, 1, var_541_0_self, 1, LOCAL(1),
  // for_each write_jobs_of(self)
  var_for_each, 3, LOCAL(1), lambda_55, func_wait_for_events, IO_TAIL_CALL,
  POS(626, 14),
  POS(626, 5)
};

static TAB_NUM t_lambda_55[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 627_3_fd
  LOCAL(1),
  // push &want_to_write fd
  var_push, 2, var_555_1_want_to_write, LOCAL(2), 1, var_555_1_want_to_write,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(628, 9),
  POS(629, 9)
};

static TAB_NUM t_func_wait_for_events[] = {
  2, // locals
  0, // parameters
  // $read_descriptor_list empty_list
  LET, 1, var_empty_list, 1, var_633_1_read_descriptor_list,
  // read_jobs_of(self)
  var_read_jobs_of, 1, var_541_0_self, 1, LOCAL(1),
  // for_each !read_descriptor_list read_jobs_of(self)
  var_for_each, 3, LOCAL(1), lambda_56, lambda_57, IO_CALL(1), var_633_1_read_descriptor_list,
  // is_not_empty &timeout -> 0
  var_is_not_empty, 1, var_554_1_events, 1, LOCAL(1),
  // update_if events.is_not_empty &timeout -> 0
  var_update_if, 3, LOCAL(1), var_562_1_timeout, lambda_58, 1, var_562_1_timeout,
  // pselect!
  var_pselect, 4, var_633_1_read_descriptor_list, var_555_1_want_to_write, var_empty_list, var_562_1_timeout, IO_CALL(4), LOCAL(2), var_642_1_can_read, var_643_1_can_write, LOCAL(1),
  // current_time! !self.current_time_of
  var_current_time, 0, IO_CALL(1), LOCAL(1),
  // self.current_time_of
  LET, -1, var_541_0_self, var_current_time_of, LOCAL(1), var_541_0_self,
  // $injected_into_stdin false
  LET, 1, var_false, 1, var_647_1_injected_into_stdin,
  // $write_jobs write_jobs_of(self)
  var_write_jobs_of, 1, var_541_0_self, 1, var_648_1_write_jobs,
  // for_each signals
  var_for_each, 3, LOCAL(2), lambda_59, func_handle_write_requests, IO_TAIL_CALL,
  POS(633, 7),
  POS(634, 38),
  POS(634, 7),
  POS(639, 24),
  POS(639, 7),
  POS(640, 7),
  POS(646, 7),
  POS(646, 22),
  POS(647, 7),
  POS(648, 7),
  POS(649, 7)
};

static TAB_NUM t_lambda_56[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 635_3_fd
  LOCAL(1),
  // push &read_descriptor_list fd
  var_push, 2, var_633_1_read_descriptor_list, LOCAL(2), 1, var_633_1_read_descriptor_list,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(636, 11),
  POS(637, 11)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  //  read_descriptor_list
  LET, 1, var_633_1_read_descriptor_list, TAIL_CALL,
  POS(638, 11)
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(639, 48)
};

static TAB_NUM t_lambda_59[] = {
  0, // locals
  1, // parameters
  var_650_3_signal,
  // case signal
  var_case, 6, var_650_3_signal, var_SIGCHLD, lambda_SIGCHLD, var_SIGWINCH, lambda_SIGWINCH, lambda_61, IO_TAIL_CALL,
  POS(651, 11)
};

static TAB_NUM t_lambda_SIGCHLD[] = {
  2, // locals
  0, // parameters
  // wait! $pid $status
  var_wait, 0, IO_CALL(2), var_653_7_pid, var_653_12_status,
  // exitstatus &status
  var_exitstatus, 1, var_653_12_status, 1, var_653_12_status,
  // watched_pids_of(self)(pid):
  var_watched_pids_of, 1, var_541_0_self, 1, LOCAL(1),
  // watched_pids_of(self)(pid):
  LOCAL(1), 1, var_653_7_pid, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_watched_pids_ofselfpid, lambda_60, IO_TAIL_CALL,
  POS(653, 15),
  POS(654, 15),
  POS(656, 17),
  POS(656, 17),
  POS(655, 15)
};

static TAB_NUM t_lambda_watched_pids_ofselfpid[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(pid) false
  var_watched_pids_of, 1, var_541_0_self, 1, LOCAL(2),
  // watched_pids_of(pid) false
  LOCAL(2), 2, var_653_7_pid, var_false, 1, LOCAL(2),
  // self.watched_pids_of(pid) false
  LET, -1, var_541_0_self, var_watched_pids_of, LOCAL(2), var_541_0_self,
  // typed_tuple(std_types::event PROCESS_JOINED pid status)
  var_typed_tuple, 4, var_std_types__event, var_PROCESS_JOINED, var_653_7_pid, var_653_12_status, 1, LOCAL(1),
  // push &events
  var_push, 2, var_554_1_events, LOCAL(1), 1, var_554_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(657, 25),
  POS(657, 25),
  POS(657, 20),
  POS(659, 21),
  POS(658, 19),
  POS(660, 19)
};

static TAB_NUM t_lambda_60[] = {
  2, // locals
  0, // parameters
  // exit_codes_of(pid) status
  var_exit_codes_of, 1, var_541_0_self, 1, LOCAL(2),
  // exit_codes_of(pid) status
  LOCAL(2), 2, var_653_7_pid, var_653_12_status, 1, LOCAL(2),
  // self.exit_codes_of(pid) status
  LET, -1, var_541_0_self, var_exit_codes_of, LOCAL(2), var_541_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(662, 25),
  POS(662, 25),
  POS(662, 20),
  POS(663, 19)
};

static TAB_NUM t_lambda_SIGWINCH[] = {
  0, // locals
  0, // parameters
  // self.window_change_event_occurred true
  LET, -1, var_541_0_self, var_window_change_event_occurred, var_true, var_541_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(665, 16),
  POS(666, 15)
};

static TAB_NUM t_lambda_61[] = {
  2, // locals
  0, // parameters
  // catched_signals_of(self)(signal):
  var_catched_signals_of, 1, var_541_0_self, 1, LOCAL(1),
  // catched_signals_of(self)(signal):
  LOCAL(1), 1, var_650_3_signal, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_catched_signals_ofselfsignal, var_next, IO_TAIL_CALL,
  POS(669, 17),
  POS(669, 17),
  POS(668, 15)
};

static TAB_NUM t_lambda_catched_signals_ofselfsignal[] = {
  1, // locals
  0, // parameters
  // typed_tuple(std_types::event SIGNAL undefined signal)
  var_typed_tuple, 4, var_std_types__event, var_SIGNAL, var_undefined, var_650_3_signal, 1, LOCAL(1),
  // push &events
  var_push, 2, var_554_1_events, LOCAL(1), 1, var_554_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(671, 21),
  POS(670, 19),
  POS(672, 19)
};

static TAB_NUM t_func_handle_write_requests[] = {
  2, // locals
  0, // parameters
  // window_change_event_occurred
  var_window_change_event_occurred, 1, var_541_0_self, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_62, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_64, lambda_65, IO_TAIL_CALL,
  POS(679, 18),
  POS(678, 13),
  POS(677, 9)
};

static TAB_NUM t_lambda_62[] = {
  2, // locals
  0, // parameters
  // do_inject_window_change_events
  var_do_inject_window_change_events, 1, var_541_0_self, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_63, 1, LOCAL(2),
  // self.do_inject_window_change_events
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(680, 18),
  POS(678, 13),
  POS(680, 13)
};

static TAB_NUM t_lambda_63[] = {
  3, // locals
  0, // parameters
  // read_jobs_of(self)(STDIN_FILENO).is_defined
  var_read_jobs_of, 1, var_541_0_self, 1, LOCAL(1),
  // read_jobs_of(self)(STDIN_FILENO).is_defined
  LOCAL(1), 1, var_STDIN_FILENO, 1, LOCAL(2),
  // is_defined
  var_is_defined, 1, LOCAL(2), 1, LOCAL(3),
  // read_jobs_of(self)(STDIN_FILENO).is_defined
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(681, 13),
  POS(681, 13),
  POS(681, 46),
  POS(681, 13)
};

static TAB_NUM t_lambda_64[] = {
  4, // locals
  0, // parameters
  // get_terminal_size! STDIN_FILENO $width $height
  var_get_terminal_size, 1, var_STDIN_FILENO, IO_CALL(2), LOCAL(2), LOCAL(3),
  // self.window_change_event_occurred false
  LET, -1, var_541_0_self, var_window_change_event_occurred, var_false, var_541_0_self,
  // $buf "@esc;[8;@(height);@(width)t"
  var_std__string, 5, string_4, LOCAL(3), string_5, LOCAL(2), str_t, 1, LOCAL(4),
  // typed_tuple(std_types::event READ STDIN_FILENO buf)
  var_typed_tuple, 4, var_std_types__event, var_READ, var_STDIN_FILENO, LOCAL(4), 1, LOCAL(1),
  // push &events typed_tuple(std_types::event READ STDIN_FILENO buf)
  var_push, 2, var_554_1_events, LOCAL(1), 1, var_554_1_events,
  // !injected_into_stdin true
  LET, 1, var_true, 1, var_647_1_injected_into_stdin,
  // check_file_descriptors!
  func_check_file_descriptors, 0, IO_TAIL_CALL,
  POS(683, 13),
  POS(684, 14),
  POS(685, 13),
  POS(686, 26),
  POS(686, 13),
  POS(687, 13),
  POS(688, 13)
};

static TAB_NUM t_lambda_65[] = {
  0, // locals
  0, // parameters
  // check_file_descriptors!
  func_check_file_descriptors, 0, IO_TAIL_CALL,
  POS(690, 13)
};

static TAB_NUM t_func_check_file_descriptors[] = {
  0, // locals
  0, // parameters
  // for_each can_write
  var_for_each, 3, var_643_1_can_write, lambda_66, func_attempt_reads, IO_TAIL_CALL,
  POS(693, 9)
};

static TAB_NUM t_lambda_66[] = {
  1, // locals
  1, // parameters
  var_694_3_fd,
  // $job write_jobs(fd)
  var_648_1_write_jobs, 1, var_694_3_fd, 1, var_695_1_job,
  // write! $bytes_written fd job
  var_write, 2, var_694_3_fd, var_695_1_job, IO_CALL(1), var_696_8_bytes_written,
  // is_an_error:
  var_is_an_error, 1, var_696_8_bytes_written, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_bytes_written_is_an_error, lambda_67, IO_TAIL_CALL,
  POS(695, 13),
  POS(696, 13),
  POS(698, 29),
  POS(697, 13)
};

static TAB_NUM t_lambda_bytes_written_is_an_error[] = {
  2, // locals
  0, // parameters
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, var_541_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, var_694_3_fd, var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, var_541_0_self, var_write_jobs_of, LOCAL(2), var_541_0_self,
  // typed_tuple
  var_typed_tuple, 4, var_std_types__event, var_WRITE_FAILED, var_694_3_fd, var_696_8_bytes_written, 1, LOCAL(1),
  // push &events
  var_push, 2, var_554_1_events, LOCAL(1), 1, var_554_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(699, 23),
  POS(699, 23),
  POS(699, 18),
  POS(701, 19),
  POS(700, 17),
  POS(705, 17)
};

static TAB_NUM t_lambda_67[] = {
  2, // locals
  0, // parameters
  // length_of(job):
  var_length_of, 1, var_695_1_job, 1, LOCAL(1),
  // bytes_written < length_of(job):
  var_std__less, 2, var_696_8_bytes_written, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_68, lambda_69, IO_TAIL_CALL,
  POS(708, 35),
  POS(708, 19),
  POS(707, 17)
};

static TAB_NUM t_lambda_68[] = {
  2, // locals
  0, // parameters
  // bytes_written+1 -1
  var_std__plus, 2, var_696_8_bytes_written, num_1, 1, LOCAL(1),
  // range &job bytes_written+1 -1
  var_range, 3, var_695_1_job, LOCAL(1), minus_num_1, 1, var_695_1_job,
  // write_jobs_of(fd) job # remaining text to write
  var_write_jobs_of, 1, var_541_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) job # remaining text to write
  LOCAL(2), 2, var_694_3_fd, var_695_1_job, 1, LOCAL(2),
  // self.write_jobs_of(fd) job # remaining text to write
  LET, -1, var_541_0_self, var_write_jobs_of, LOCAL(2), var_541_0_self,
  // typed_tuple(std_types::event WRITE_PENDING fd job)
  var_typed_tuple, 4, var_std_types__event, var_WRITE_PENDING, var_694_3_fd, var_695_1_job, 1, LOCAL(1),
  // push &events
  var_push, 2, var_554_1_events, LOCAL(1), 1, var_554_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(709, 32),
  POS(709, 21),
  POS(710, 27),
  POS(710, 27),
  POS(710, 22),
  POS(712, 23),
  POS(711, 21),
  POS(713, 21)
};

static TAB_NUM t_lambda_69[] = {
  2, // locals
  0, // parameters
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, var_541_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, var_694_3_fd, var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, var_541_0_self, var_write_jobs_of, LOCAL(2), var_541_0_self,
  // typed_tuple(std_types::event WRITE_COMPLETED fd undefined)
  var_typed_tuple, 4, var_std_types__event, var_WRITE_COMPLETED, var_694_3_fd, var_undefined, 1, LOCAL(1),
  // push &events
  var_push, 2, var_554_1_events, LOCAL(1), 1, var_554_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(715, 27),
  POS(715, 27),
  POS(715, 22),
  POS(717, 23),
  POS(716, 21),
  POS(718, 21)
};

static TAB_NUM t_func_attempt_reads[] = {
  0, // locals
  0, // parameters
  // for_each can_read
  var_for_each, 3, var_642_1_can_read, lambda_70, lambda_82, IO_TAIL_CALL,
  POS(722, 9)
};

static TAB_NUM t_lambda_70[] = {
  3, // locals
  1, // parameters
  var_723_3_fd,
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__equal, 2, var_723_3_fd, var_STDIN_FILENO, 1, LOCAL(1),
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__or, 2, LOCAL(2), lambda_71, 1, LOCAL(3),
  // if_not fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_if_not, 3, LOCAL(3), var_next, lambda_72, IO_TAIL_CALL,
  POS(724, 20),
  POS(724, 20),
  POS(724, 20),
  POS(724, 13)
};

static TAB_NUM t_lambda_71[] = {
  1, // locals
  0, // parameters
  // not(injected_into_stdin) next:
  var_not, 1, var_647_1_injected_into_stdin, 1, LOCAL(1),
  // not(injected_into_stdin) next:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(724, 42),
  POS(724, 42)
};

static TAB_NUM t_lambda_72[] = {
  3, // locals
  0, // parameters
  // fstat! fd $info
  var_fstat, 1, var_723_3_fd, IO_CALL(1), LOCAL(3),
  // type_of(info) == SOCKET:
  var_type_of, 1, LOCAL(3), 1, LOCAL(1),
  // type_of(info) == SOCKET:
  var_std__equal, 2, LOCAL(1), var_SOCKET, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_73, func_do_read, IO_TAIL_CALL,
  POS(725, 15),
  POS(727, 17),
  POS(727, 17),
  POS(726, 15)
};

static TAB_NUM t_lambda_73[] = {
  1, // locals
  0, // parameters
  // is_listening! $does_listen fd
  var_is_listening, 1, var_723_3_fd, IO_CALL(1), LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_does_listen, func_do_read, IO_TAIL_CALL,
  POS(728, 19),
  POS(729, 19)
};

static TAB_NUM t_lambda_does_listen[] = {
  1, // locals
  0, // parameters
  // accept! $conn fd
  var_accept, 1, var_723_3_fd, IO_CALL(1), var_731_9_conn,
  // is_an_error:
  var_is_an_error, 1, var_731_9_conn, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_conn_is_an_error, lambda_74, IO_TAIL_CALL,
  POS(731, 23),
  POS(733, 30),
  POS(732, 23)
};

static TAB_NUM t_lambda_conn_is_an_error[] = {
  1, // locals
  0, // parameters
  // typed_tuple(std_types::event READ_FAILED fd conn)
  var_typed_tuple, 4, var_std_types__event, var_READ_FAILED, var_723_3_fd, var_731_9_conn, 1, LOCAL(1),
  // push &events
  var_push, 2, var_554_1_events, LOCAL(1), 1, var_554_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(735, 29),
  POS(734, 27),
  POS(736, 27)
};

static TAB_NUM t_lambda_74[] = {
  1, // locals
  0, // parameters
  // typed_tuple(std_types::event CONNECT fd conn)
  var_typed_tuple, 4, var_std_types__event, var_CONNECT, var_723_3_fd, var_731_9_conn, 1, LOCAL(1),
  // push &events
  var_push, 2, var_554_1_events, LOCAL(1), 1, var_554_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(739, 29),
  POS(738, 27),
  POS(740, 27)
};

static TAB_NUM t_func_do_read[] = {
  4, // locals
  0, // parameters
  // read_jobs_of(self)(fd)
  var_read_jobs_of, 1, var_541_0_self, 1, LOCAL(1),
  // $do_close_and_max_length read_jobs_of(self)(fd)
  LOCAL(1), 1, var_723_3_fd, 1, LOCAL(3),
  // do_close_and_max_length $do_close $max_length
  LOCAL(3), 0, 2, var_746_25_do_close, var_746_35_max_length,
  // is_defined && max_length < 0x10'0000
  var_is_defined, 1, var_746_35_max_length, 1, LOCAL(1),
  // is_defined && max_length < 0x10'0000
  var_std__and, 2, LOCAL(1), lambda_75, 1, LOCAL(2),
  // $length
  var_if, 3, LOCAL(2), lambda_76, lambda_77, 1, LOCAL(4),
  // read! $buf fd length
  var_read, 2, var_723_3_fd, LOCAL(4), IO_CALL(1), var_752_7_buf,
  // is_an_error:
  var_is_an_error, 1, var_752_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_an_error, lambda_78, IO_TAIL_CALL,
  POS(745, 42),
  POS(745, 17),
  POS(746, 17),
  POS(749, 32),
  POS(749, 32),
  POS(747, 17),
  POS(752, 17),
  POS(754, 23),
  POS(753, 17)
};

static TAB_NUM t_lambda_75[] = {
  1, // locals
  0, // parameters
  // max_length < 0x10'0000
  var_std__less, 2, var_746_35_max_length, num_0x100000, 1, LOCAL(1),
  // max_length < 0x10'0000
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(749, 46),
  POS(749, 46)
};

static TAB_NUM t_lambda_76[] = {
  0, // locals
  0, // parameters
  //  max_length
  LET, 1, var_746_35_max_length, TAIL_CALL,
  POS(750, 23)
};

static TAB_NUM t_lambda_77[] = {
  0, // locals
  0, // parameters
  //  0x10'0000
  LET, 1, num_0x100000, TAIL_CALL,
  POS(751, 23)
};

static TAB_NUM t_lambda_buf_is_an_error[] = {
  1, // locals
  0, // parameters
  // typed_tuple(std_types::event READ_FAILED fd buf)
  var_typed_tuple, 4, var_std_types__event, var_READ_FAILED, var_723_3_fd, var_752_7_buf, 1, LOCAL(1),
  // push &events typed_tuple(std_types::event READ_FAILED fd buf)
  var_push, 2, var_554_1_events, LOCAL(1), 1, var_554_1_events,
  // if
  var_if, 3, var_746_25_do_close, lambda_do_close, var_next, IO_TAIL_CALL,
  POS(755, 34),
  POS(755, 21),
  POS(756, 21)
};

static TAB_NUM t_lambda_do_close[] = {
  0, // locals
  0, // parameters
  // close &self fd
  var_close, 2, var_541_0_self, var_723_3_fd, 1, var_541_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(758, 25),
  POS(759, 25)
};

static TAB_NUM t_lambda_78[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_752_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_empty, lambda_79, IO_TAIL_CALL,
  POS(763, 27),
  POS(762, 21)
};

static TAB_NUM t_lambda_buf_is_empty[] = {
  1, // locals
  0, // parameters
  // stop_reading_from &self fd
  var_stop_reading_from, 2, var_541_0_self, var_723_3_fd, 1, var_541_0_self,
  // typed_tuple(std_types::event CLOSED fd undefined)
  var_typed_tuple, 4, var_std_types__event, var_CLOSED, var_723_3_fd, var_undefined, 1, LOCAL(1),
  // push &events typed_tuple(std_types::event CLOSED fd undefined)
  var_push, 2, var_554_1_events, LOCAL(1), 1, var_554_1_events,
  // if
  var_if, 3, var_746_25_do_close, lambda_2_do_close, var_next, IO_TAIL_CALL,
  POS(764, 25),
  POS(765, 38),
  POS(765, 25),
  POS(766, 25)
};

static TAB_NUM t_lambda_2_do_close[] = {
  0, // locals
  0, // parameters
  // close &self fd
  var_close, 2, var_541_0_self, var_723_3_fd, 1, var_541_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(768, 29),
  POS(769, 29)
};

static TAB_NUM t_lambda_79[] = {
  1, // locals
  0, // parameters
  // typed_tuple(std_types::event READ fd buf)
  var_typed_tuple, 4, var_std_types__event, var_READ, var_723_3_fd, var_752_7_buf, 1, LOCAL(1),
  // push &events typed_tuple(std_types::event READ fd buf)
  var_push, 2, var_554_1_events, LOCAL(1), 1, var_554_1_events,
  // is_defined:
  var_is_defined, 1, var_746_35_max_length, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_max_length_is_defined, var_next, IO_TAIL_CALL,
  POS(772, 38),
  POS(772, 25),
  POS(774, 38),
  POS(773, 25)
};

static TAB_NUM t_lambda_max_length_is_defined[] = {
  2, // locals
  0, // parameters
  // length_of(buf) < max_length:
  var_length_of, 1, var_752_7_buf, 1, LOCAL(1),
  // length_of(buf) < max_length:
  var_std__less, 2, LOCAL(1), var_746_35_max_length, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_80, lambda_81, IO_TAIL_CALL,
  POS(776, 31),
  POS(776, 31),
  POS(775, 29)
};

static TAB_NUM t_lambda_80[] = {
  5, // locals
  0, // parameters
  // length_of(buf))
  var_length_of, 1, var_752_7_buf, 1, LOCAL(1),
  // max_length-length_of(buf))
  var_std__minus, 2, var_746_35_max_length, LOCAL(1), 1, LOCAL(2),
  // !self.read_jobs_of(fd)
  var_tuple, 2, var_true, LOCAL(2), 1, LOCAL(4),
  // read_jobs_of(fd)
  var_read_jobs_of, 1, var_541_0_self, 1, LOCAL(5),
  // read_jobs_of(fd)
  LOCAL(5), 2, var_723_3_fd, LOCAL(4), 1, LOCAL(5),
  // self.read_jobs_of(fd)
  LET, -1, var_541_0_self, var_read_jobs_of, LOCAL(5), var_541_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(778, 57),
  POS(778, 46),
  POS(777, 33),
  POS(777, 39),
  POS(777, 39),
  POS(777, 34),
  POS(779, 33)
};

static TAB_NUM t_lambda_81[] = {
  0, // locals
  0, // parameters
  // stop_reading_from &self fd
  var_stop_reading_from, 2, var_541_0_self, var_723_3_fd, 1, var_541_0_self,
  // if
  var_if, 3, var_746_25_do_close, lambda_3_do_close, var_next, IO_TAIL_CALL,
  POS(781, 33),
  POS(782, 33)
};

static TAB_NUM t_lambda_3_do_close[] = {
  0, // locals
  0, // parameters
  // close &self fd
  var_close, 2, var_541_0_self, var_723_3_fd, 1, var_541_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(784, 37),
  POS(785, 37)
};

static TAB_NUM t_lambda_82[] = {
  0, // locals
  0, // parameters
  // attempt_close_operations! &self
  func_attempt_close_operations, 1, var_541_0_self, IO_CALL(1), var_541_0_self,
  // attempt_exit! &self
  func_attempt_exit, 1, var_541_0_self, IO_CALL(1), var_541_0_self,
  // -> self events
  LET, 2, var_541_0_self, var_554_1_events, TAIL_CALL,
  POS(789, 13),
  POS(791, 13),
  POS(793, 13)
};

static TAB_NUM t_func_attempt_close_operations[] = {
  1, // locals
  1, // parameters
  var_795_28_io,
  // close_jobs_of(io)
  var_close_jobs_of, 1, var_795_28_io, 1, LOCAL(1),
  // for_each close_jobs_of(io)
  var_for_each, 3, LOCAL(1), lambda_83, lambda_84, IO_TAIL_CALL,
  POS(796, 12),
  POS(796, 3)
};

static TAB_NUM t_lambda_83[] = {
  3, // locals
  1, // parameters
  var_797_3_fd,
  // write_jobs_of(io)(fd).is_undefined:
  var_write_jobs_of, 1, var_795_28_io, 1, LOCAL(1),
  // write_jobs_of(io)(fd).is_undefined:
  LOCAL(1), 1, var_797_3_fd, 1, LOCAL(2),
  // is_undefined:
  var_is_undefined, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_write_jobs_ofiofd_is_undefined, var_next, IO_TAIL_CALL,
  POS(799, 9),
  POS(799, 9),
  POS(799, 31),
  POS(798, 7)
};

static TAB_NUM t_lambda_write_jobs_ofiofd_is_undefined[] = {
  2, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_797_3_fd, IO_CALL(0),
  // close_jobs_of(fd) false
  var_close_jobs_of, 1, var_795_28_io, 1, LOCAL(2),
  // close_jobs_of(fd) false
  LOCAL(2), 2, var_797_3_fd, var_false, 1, LOCAL(2),
  // io.close_jobs_of(fd) false
  LET, -1, var_795_28_io, var_close_jobs_of, LOCAL(2), var_795_28_io,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(800, 11),
  POS(801, 15),
  POS(801, 15),
  POS(801, 12),
  POS(802, 11)
};

static TAB_NUM t_lambda_84[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_795_28_io, TAIL_CALL,
  POS(804, 7)
};

static TAB_NUM t_func_attempt_exit[] = {
  2, // locals
  1, // parameters
  var_806_16_io,
  // exit_code_of(io).is_defined:
  var_exit_code_of, 1, var_806_16_io, 1, LOCAL(1),
  // is_defined:
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_exit_code_ofio_is_defined, lambda_88, IO_TAIL_CALL,
  POS(808, 5),
  POS(808, 22),
  POS(807, 3)
};

static TAB_NUM t_lambda_exit_code_ofio_is_defined[] = {
  1, // locals
  0, // parameters
  // resources_of(io)
  var_resources_of, 1, var_806_16_io, 1, LOCAL(1),
  // for_each resources_of(io)
  var_for_each, 3, LOCAL(1), lambda_85, lambda_86, IO_TAIL_CALL,
  POS(809, 16),
  POS(809, 7)
};

static TAB_NUM t_lambda_85[] = {
  1, // locals
  1, // parameters
  var_810_3_resource,
  // do_log_of(resource):
  var_do_log_of, 1, var_810_3_resource, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_do_log_ofresource, func_finalize_resource, IO_TAIL_CALL,
  POS(812, 13),
  POS(811, 11)
};

static TAB_NUM t_lambda_do_log_ofresource[] = {
  2, // locals
  0, // parameters
  // name_of(resource))"
  var_name_of, 1, var_810_3_resource, 1, LOCAL(1),
  // "finalizing @(name_of(resource))"
  var_std__string, 2, str_finalizing, LOCAL(1), 1, LOCAL(2),
  // log &io 3 "finalizing @(name_of(resource))"
  var_log, 3, var_806_16_io, num_3, LOCAL(2), 1, var_806_16_io,
  // finalize_resource!
  func_finalize_resource, 0, IO_TAIL_CALL,
  POS(813, 39),
  POS(813, 25),
  POS(813, 15),
  POS(814, 15)
};

static TAB_NUM t_func_finalize_resource[] = {
  0, // locals
  0, // parameters
  // finalize! resource &io
  var_finalize, 2, var_810_3_resource, var_806_16_io, IO_CALL(1), var_806_16_io,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(818, 13),
  POS(819, 13)
};

static TAB_NUM t_lambda_86[] = {
  1, // locals
  0, // parameters
  // io.resources_of empty_list
  LET, -1, var_806_16_io, var_resources_of, var_empty_list, var_806_16_io,
  // is_empty:
  var_is_empty, 1, var_806_16_io, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_io_is_empty, lambda_87, IO_TAIL_CALL,
  POS(821, 12),
  POS(823, 16),
  POS(822, 11)
};

static TAB_NUM t_lambda_io_is_empty[] = {
  1, // locals
  0, // parameters
  // exit_code_of(io)
  var_exit_code_of, 1, var_806_16_io, 1, LOCAL(1),
  // exit! exit_code_of(io)
  var_exit, 1, LOCAL(1), IO_TAIL_CALL,
  POS(824, 21),
  POS(824, 15)
};

static TAB_NUM t_lambda_87[] = {
  0, // locals
  0, // parameters
  // kill_child_processes! io
  func_kill_child_processes, 1, var_806_16_io, IO_TAIL_CALL,
  POS(826, 15)
};

static TAB_NUM t_lambda_88[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_806_16_io, TAIL_CALL,
  POS(827, 7)
};

static TAB_NUM t_func_kill_child_processes[] = {
  1, // locals
  1, // parameters
  var_829_24_io,
  // watched_pids_of(io)
  var_watched_pids_of, 1, var_829_24_io, 1, LOCAL(1),
  // for_each watched_pids_of(io)
  var_for_each, 3, LOCAL(1), lambda_89, lambda_90, IO_TAIL_CALL,
  POS(830, 12),
  POS(830, 3)
};

static TAB_NUM t_lambda_89[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 831_3_pid
  // kill! pid SIGKILL
  var_kill, 2, LOCAL(1), var_SIGKILL, IO_CALL(0),
  // next
  var_next, 0, TAIL_CALL,
  POS(832, 7),
  POS(833, 7)
};

static TAB_NUM t_lambda_90[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_829_24_io, TAIL_CALL,
  POS(834, 7)
};

static TAB_NUM t_func_std_types__io___handle_events[] = {
  1, // locals
  2, // parameters
  var_839_31_io,
  LOCAL(1), // 839_34_events
  // $new_events empty_list
  LET, 1, var_empty_list, 1, var_840_1_new_events,
  // $handlers handlers_of(io)
  var_handlers_of, 1, var_839_31_io, 1, var_841_1_handlers,
  // for_each events
  var_for_each, 3, LOCAL(1), lambda_91, lambda_97, TAIL_CALL,
  POS(840, 3),
  POS(841, 3),
  POS(842, 3)
};

static TAB_NUM t_lambda_91[] = {
  1, // locals
  1, // parameters
  var_843_3_event,
  // event $type $id $data
  var_843_3_event, 0, 3, var_844_7_type, var_844_13_id, var_844_17_data,
  // $id_handlers handlers(id)
  var_841_1_handlers, 1, var_844_13_id, 1, var_845_1_id_handlers,
  // is_undefined
  var_is_undefined, 1, var_845_1_id_handlers, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_keep_event, lambda_92, TAIL_CALL,
  POS(844, 7),
  POS(845, 7),
  POS(847, 21),
  POS(846, 7)
};

static TAB_NUM t_lambda_92[] = {
  1, // locals
  0, // parameters
  // $handler id_handlers(type)
  var_845_1_id_handlers, 1, var_844_7_type, 1, var_850_1_handler,
  // is_undefined
  var_is_undefined, 1, var_850_1_handler, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_keep_event, lambda_93, TAIL_CALL,
  POS(850, 11),
  POS(852, 21),
  POS(851, 11)
};

static TAB_NUM t_lambda_93[] = {
  2, // locals
  0, // parameters
  // $context undefined
  LET, 1, var_undefined, 1, var_855_1_context,
  // is_a_tuple &handler &context
  var_is_a_tuple, 1, var_850_1_handler, 1, LOCAL(1),
  // update_if handler.is_a_tuple &handler &context
  var_update_if, 4, LOCAL(1), var_850_1_handler, var_855_1_context, lambda_94, 2, var_850_1_handler, var_855_1_context,
  // parameter_count_of(handler) == 3:
  var_parameter_count_of, 1, var_850_1_handler, 1, LOCAL(1),
  // parameter_count_of(handler) == 3:
  var_std__equal, 2, LOCAL(1), num_3, 1, LOCAL(2),
  // if !io $new_event
  var_if, 3, LOCAL(2), lambda_95, lambda_96, 2, var_839_31_io, var_858_8_new_event,
  // is_defined:
  var_is_defined, 1, var_858_8_new_event, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_new_event_is_defined, var_next, TAIL_CALL,
  POS(855, 15),
  POS(856, 33),
  POS(856, 15),
  POS(859, 17),
  POS(859, 17),
  POS(858, 15),
  POS(864, 27),
  POS(863, 15)
};

static TAB_NUM t_lambda_94[] = {
  2, // locals
  0, // parameters
  // first(handler) second(handler)
  var_first, 1, var_850_1_handler, 1, LOCAL(1),
  // second(handler)
  var_second, 1, var_850_1_handler, 1, LOCAL(2),
  //  first(handler) second(handler)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(857, 20),
  POS(857, 35),
  POS(857, 19)
};

static TAB_NUM t_lambda_95[] = {
  0, // locals
  0, // parameters
  // handler io id data
  var_850_1_handler, 3, var_839_31_io, var_844_13_id, var_844_17_data, TAIL_CALL,
  POS(860, 19)
};

static TAB_NUM t_lambda_96[] = {
  0, // locals
  0, // parameters
  // handler io id data context
  var_850_1_handler, 4, var_839_31_io, var_844_13_id, var_844_17_data, var_855_1_context, TAIL_CALL,
  POS(862, 19)
};

static TAB_NUM t_lambda_2_new_event_is_defined[] = {
  1, // locals
  0, // parameters
  // is_a_list
  var_is_a_list, 1, var_858_8_new_event, 1, LOCAL(1),
  // update_if_not new_event.is_a_list
  var_update_if_not, 3, LOCAL(1), var_858_8_new_event, lambda_new_event, 1, var_858_8_new_event,
  // handle_events &io &new_event
  var_handle_events, 2, var_839_31_io, var_858_8_new_event, 2, var_839_31_io, var_858_8_new_event,
  // append &new_events new_event
  var_append, 2, var_840_1_new_events, var_858_8_new_event, 1, var_840_1_new_events,
  // next
  var_next, 0, TAIL_CALL,
  POS(865, 43),
  POS(865, 19),
  POS(867, 19),
  POS(868, 19),
  POS(869, 19)
};

static TAB_NUM t_lambda_new_event[] = {
  1, // locals
  0, // parameters
  // list(new_event)
  var_list, 1, var_858_8_new_event, 1, LOCAL(1),
  //  list(new_event)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(866, 35),
  POS(866, 34)
};

static TAB_NUM t_func_keep_event[] = {
  0, // locals
  0, // parameters
  // push &new_events event
  var_push, 2, var_840_1_new_events, var_843_3_event, 1, var_840_1_new_events,
  // next
  var_next, 0, TAIL_CALL,
  POS(873, 9),
  POS(874, 9)
};

static TAB_NUM t_lambda_97[] = {
  0, // locals
  0, // parameters
  //  io new_events
  LET, 2, var_839_31_io, var_840_1_new_events, TAIL_CALL,
  POS(875, 7)
};

static int tuple_241_0_arguments[] = {
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__resource___enable_logging}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__resource___disable_logging}},
  {FLT_TUPLE, 3, {.arguments = tuple_241_0_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___start_reading_from}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___stop_reading_from}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___print_to}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___write}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___cancel_write}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___close}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___join_process}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___start_injecting_window_change_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___stop_injecting_window_change_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___start_catching_signals}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___stop_catching_signals}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___set_timeout}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__initialize_logging}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_log_filename_is_defined}},
  {FLT_STRING_8, 2, {.str_8 = "w+"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___enable_logging}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___disable_logging}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___log}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_STRING_8, 1, {.str_8 = "["}},
  {FLT_STRING_8, 2, {.str_8 = "] "}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___register_handlers}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___deregister_handlers}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___deregister_all_handlers}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___register_resource}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___run}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___run_at}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___exit}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__log_unhandled_event}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_POSITIVE_INT64, 0, {.value = 5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_STRING_8, 16, {.str_8 = "unhandled event "}},
  {FLT_STRING_8, 3, {.str_8 = " - "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___initialize}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___get_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_set_timeout}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_timeout}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_exit_codes_ofself}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_start_jobs}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_new_event_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_new_event_is_a_list}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_write_jobs}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_wait_for_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_SIGCHLD}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_watched_pids_ofselfpid}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_SIGWINCH}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_catched_signals_ofselfsignal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_write_requests}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_STRING_8, 4, {.str_8 = "\033[8;"}},
  {FLT_STRING_8, 1, {.str_8 = ";"}},
  {FLT_STRING_8, 1, {.str_8 = "t"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_file_descriptors}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_bytes_written_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_attempt_reads}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_does_listen}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_conn_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_do_read}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x100000}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_buf_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_close}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_buf_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_do_close}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_max_length_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_do_close}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_attempt_close_operations}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_write_jobs_ofiofd_is_undefined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_attempt_exit}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_exit_code_ofio_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_log_ofresource}},
  {FLT_STRING_8, 11, {.str_8 = "finalizing "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_finalize_resource}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_io_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_88}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_kill_child_processes}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_89}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_90}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___handle_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_91}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_93}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_94}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_95}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_96}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_new_event_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_new_event}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_keep_event}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_97}}
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
    {.const_idx = -tuple_241_0}
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
    "245_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "246_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "247_0_do_close\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "248_0_max_length\000", NULL
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
    "277_0_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "279_1_job\000", NULL
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
    "328_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "331_1_catched_signals\000", NULL
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
    "340_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "343_1_catched_signals\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "set_timeout\000", NULL,
    {.position = POS(350, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "352_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "353_0_timeout\000", NULL
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
    "356_1_current_timeout\000", NULL
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
    "364_0_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "365_0_log_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "366_0_log_filename\000", NULL
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
    "375_8_stdout_info\000", NULL
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
    "376_8_stderr_info\000", NULL
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
    "400_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "401_0_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "402_0_message\000", NULL
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
    "409_1_prefix\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(409, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "410_1_buf\000", NULL
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
    "422_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "423_0_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "426_1_handlers\000", NULL
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
    "438_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "439_0_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "440_0_types\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "442_1_handlers\000", NULL
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
    "483_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "484_0_time\000", NULL
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
    "504_0_self\000", NULL
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
    "513_28_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "514_7_type\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "514_13_fd\000", NULL
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
    "541_0_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(547, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "554_1_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "555_1_want_to_write\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "557_15_t\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "558_1_start_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "560_1_first_job_time\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "561_1_remaining_timed_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "562_1_timeout\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "564_3_timed_job\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "565_33_time\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(588, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(588, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(592, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "605_32_new_event\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "apply\000", NULL,
    {.position = POS(605, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(609, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "633_1_read_descriptor_list\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(639, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "642_1_can_read\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "643_1_can_write\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pselect\000", NULL,
    {.position = POS(640, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "647_1_injected_into_stdin\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "648_1_write_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "650_3_signal\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGCHLD\000", NULL,
    {.position = POS(652, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "653_7_pid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "653_12_status\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "wait\000", NULL,
    {.position = POS(653, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exitstatus\000", NULL,
    {.position = POS(654, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PROCESS_JOINED\000", NULL,
    {.position = POS(659, 50)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "typed_tuple\000", NULL,
    {.position = POS(659, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGWINCH\000", NULL,
    {.position = POS(664, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGNAL\000", NULL,
    {.position = POS(671, 50)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDIN_FILENO\000", NULL,
    {.position = POS(681, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_terminal_size\000", NULL,
    {.position = POS(683, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ\000", NULL,
    {.position = POS(686, 55)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "694_3_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "695_1_job\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "696_8_bytes_written\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(698, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "723_3_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(724, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "type_of\000", NULL,
    {.position = POS(727, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SOCKET\000", NULL,
    {.position = POS(727, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_listening\000", NULL,
    {.position = POS(728, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "731_9_conn\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "accept\000", NULL,
    {.position = POS(731, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ_FAILED\000", NULL,
    {.position = POS(735, 58)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CONNECT\000", NULL,
    {.position = POS(739, 58)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "746_25_do_close\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "746_35_max_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "752_7_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read\000", NULL,
    {.position = POS(752, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CLOSED\000", NULL,
    {.position = POS(765, 67)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(724, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "795_28_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "797_3_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "806_16_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "810_3_resource\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finalize\000", NULL,
    {.position = POS(818, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "829_24_io\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGKILL\000", NULL,
    {.position = POS(832, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "kill\000", NULL,
    {.position = POS(832, 7)}
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
    {.position = POS(839, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "839_31_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "840_1_new_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "841_1_handlers\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "843_3_event\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "844_7_type\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "844_13_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "844_17_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "845_1_id_handlers\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "850_1_handler\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "855_1_context\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_tuple\000", NULL,
    {.position = POS(856, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(857, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "second\000", NULL,
    {.position = POS(857, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(859, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "858_8_new_event\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(866, 35)}
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
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  194, // number of constants
  256, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
