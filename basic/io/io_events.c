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
  func_std_types__io___stop_reading_from = -18,
  func_std_types__io___print_to = -19,
  func_std_types__io___write = -20,
  lambda_1 = -21,
  lambda_2 = -22,
  func_std_types__io___cancel_write = -23,
  func_std_types__io___close = -24,
  func_std_types__io___join_process = -25,
  func_std_types__io___start_injecting_window_change_events = -26,
  func_std_types__io___stop_injecting_window_change_events = -27,
  func_std_types__io___start_catching_signals = -28,
  lambda_3 = -29,
  lambda_4 = -30,
  func_std_types__io___stop_catching_signals = -31,
  lambda_5 = -32,
  lambda_6 = -33,
  func_std_types__io___set_timeout = -34,
  lambda_7 = -35,
  lambda_8 = -36,
  lambda_9 = -37,
  lambda_10 = -38,
  func_std__initialize_logging = -39,
  num_3 = -40,
  lambda_log_filename_is_defined = -41,
  str_w = -42,
  lambda_11 = -43,
  lambda_12 = -44,
  lambda_13 = -45,
  lambda_14 = -46,
  func_std_types__io___enable_logging = -47,
  num_1 = -48,
  func_std_types__io___disable_logging = -49,
  func_std_types__io___log = -50,
  lambda_15 = -51,
  lambda_16 = -52,
  chr_10 = -53,
  lambda_17 = -54,
  string_1 = -55,
  string_2 = -56,
  num_2 = -57,
  minus_num_1 = -58,
  lambda_18 = -59,
  lambda_19 = -60,
  lambda_20 = -61,
  func_std_types__io___register_handlers = -62,
  lambda_21 = -63,
  lambda_22 = -64,
  func_std_types__io___deregister_handlers = -65,
  lambda_23 = -66,
  lambda_24 = -67,
  lambda_25 = -68,
  lambda_26 = -69,
  func_std_types__io___deregister_all_handlers = -70,
  func_std_types__io___register_resource = -71,
  func_std_types__io___run = -72,
  func_std_types__io___run_at = -73,
  lambda_27 = -74,
  func_std_types__io___exit = -75,
  func_std_types__io___is_empty = -76,
  lambda_28 = -77,
  lambda_29 = -78,
  lambda_30 = -79,
  func_std__log_unhandled_event = -80,
  lambda_31 = -81,
  lambda_32 = -82,
  lambda_33 = -83,
  lambda_34 = -84,
  lambda_35 = -85,
  lambda_36 = -86,
  num_5 = -87,
  lambda_37 = -88,
  lambda_38 = -89,
  str_unhandled_event = -90,
  string_3 = -91,
  func_std_types__io___initialize = -92,
  func_std_types__io___get_events = -93,
  lambda_39 = -94,
  lambda_40 = -95,
  lambda_41 = -96,
  lambda_42 = -97,
  lambda_43 = -98,
  lambda_44 = -99,
  func_set_timeout = -100,
  lambda_45 = -101,
  lambda_46 = -102,
  lambda_47 = -103,
  lambda_timeout = -104,
  lambda_48 = -105,
  lambda_exit_codes_ofself = -106,
  lambda_49 = -107,
  func_handle_start_jobs = -108,
  lambda_50 = -109,
  lambda_new_event_is_defined = -110,
  lambda_new_event_is_a_list = -111,
  lambda_51 = -112,
  lambda_52 = -113,
  func_handle_write_jobs = -114,
  lambda_53 = -115,
  func_wait_for_events = -116,
  lambda_54 = -117,
  lambda_55 = -118,
  lambda_56 = -119,
  lambda_57 = -120,
  lambda_CHILD_CHANGED_STATE = -121,
  lambda_watched_pids_ofselfpid = -122,
  lambda_58 = -123,
  lambda_WINDOW_CHANGED_SIZE = -124,
  lambda_59 = -125,
  lambda_catched_signals_ofselfsignal = -126,
  func_handle_write_requests = -127,
  lambda_60 = -128,
  lambda_61 = -129,
  lambda_62 = -130,
  string_4 = -131,
  string_5 = -132,
  str_t = -133,
  lambda_63 = -134,
  func_check_file_descriptors = -135,
  lambda_64 = -136,
  lambda_bytes_written_is_an_error = -137,
  lambda_65 = -138,
  lambda_66 = -139,
  lambda_67 = -140,
  func_attempt_reads = -141,
  lambda_68 = -142,
  lambda_69 = -143,
  lambda_70 = -144,
  lambda_71 = -145,
  lambda_does_listen = -146,
  lambda_conn_is_an_error = -147,
  lambda_72 = -148,
  func_do_read = -149,
  lambda_73 = -150,
  num_0x100000 = -151,
  lambda_74 = -152,
  lambda_75 = -153,
  lambda_buf_is_an_error = -154,
  lambda_do_close = -155,
  lambda_76 = -156,
  lambda_buf_is_empty = -157,
  lambda_2_do_close = -158,
  lambda_77 = -159,
  lambda_max_length_is_defined = -160,
  lambda_78 = -161,
  lambda_79 = -162,
  lambda_3_do_close = -163,
  lambda_80 = -164,
  func_attempt_close_operations = -165,
  lambda_81 = -166,
  lambda_write_jobs_ofiofd_is_undefined = -167,
  lambda_82 = -168,
  func_attempt_exit = -169,
  lambda_exit_code_ofio_is_defined = -170,
  lambda_83 = -171,
  lambda_do_log_ofresource = -172,
  str_finalizing = -173,
  func_finalize_resource = -174,
  lambda_84 = -175,
  lambda_io_is_empty = -176,
  lambda_85 = -177,
  lambda_86 = -178,
  func_std_types__io___handle_events = -179,
  lambda_87 = -180,
  lambda_88 = -181,
  lambda_89 = -182,
  lambda_90 = -183,
  lambda_91 = -184,
  lambda_92 = -185,
  lambda_2_new_event_is_defined = -186,
  lambda_new_event = -187,
  func_keep_event = -188,
  lambda_93 = -189
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
  var_stop_reading_from, // extern polymorphic
  var_print_to, // extern polymorphic
  var_create_string, // extern
  var_to_utf8, // extern
  var_write, // extern polymorphic
  var_273_0_data, // dynamic
  var_275_1_job, // dynamic
  var_is_defined, // extern
  var_append, // extern
  var_if, // extern
  var_cancel_write, // extern polymorphic
  var_close, // extern polymorphic
  var_join_process, // extern polymorphic
  var_start_injecting_window_change_events, // extern polymorphic
  var_stop_injecting_window_change_events, // extern polymorphic
  var_start_catching_signals, // extern polymorphic
  var_324_0_self, // dynamic
  var_327_1_catched_signals, // dynamic
  var_next, // extern
  var_for_each, // extern
  var_stop_catching_signals, // extern polymorphic
  var_336_0_self, // dynamic
  var_339_1_catched_signals, // dynamic
  var_set_timeout, // extern polymorphic
  var_348_0_self, // dynamic
  var_349_0_timeout, // dynamic
  var_is_a_number, // extern
  var_std__plus, // extern
  var_update_if, // extern
  var_352_1_current_timeout, // dynamic
  var_is_undefined, // extern
  var_std__less, // extern
  var_std__or, // extern
  var_std__initialize_logging, // initialized
  var_360_0_io, // dynamic
  var_361_0_log_level, // dynamic
  var_362_0_log_filename, // dynamic
  var_open, // extern
  var_STDERR_FILENO, // extern
  var_dup2, // extern
  var_371_8_stdout_info, // dynamic
  var_STDOUT_FILENO, // extern
  var_fstat, // extern
  var_372_8_stderr_info, // dynamic
  var_inode_number_of, // extern
  var_std__equal, // extern
  var_std__not, // extern
  var_device_of, // extern
  var_log, // extern polymorphic
  var_396_0_self, // dynamic
  var_397_0_level, // dynamic
  var_398_0_message, // dynamic
  var_is_a_string, // extern
  var_update_if_not, // extern
  var_has_suffix, // extern
  var_push, // extern
  var_split_into_lines, // extern
  var_405_1_prefix, // dynamic
  var_std__string, // extern
  var_406_1_buf, // dynamic
  var_range, // extern
  var_length_of, // extern
  var_spaces, // extern
  var_register_handlers, // extern polymorphic
  var_418_0_self, // dynamic
  var_419_0_id, // dynamic
  var_422_1_handlers, // dynamic
  var_default_value, // extern
  var_deregister_handlers, // extern polymorphic
  var_434_0_self, // dynamic
  var_435_0_id, // dynamic
  var_436_0_types, // dynamic
  var_438_1_handlers, // dynamic
  var_deregister_all_handlers, // extern polymorphic
  var_register_resource, // extern polymorphic
  var_run, // extern polymorphic
  var_run_at, // extern polymorphic
  var_479_0_self, // dynamic
  var_480_0_time, // dynamic
  var_exit, // extern polymorphic
  var_is_empty, // extern polymorphic
  var_500_0_self, // dynamic
  var_std__and, // extern
  var_std__log_unhandled_event, // initialized
  var_509_28_io, // dynamic
  var_510_7_type, // dynamic
  var_510_13_fd, // dynamic
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
  var_537_0_self, // dynamic
  var_inc, // extern
  var_550_1_events, // dynamic
  var_551_1_want_to_write, // dynamic
  var_553_15_t, // dynamic
  var_554_1_start_jobs, // dynamic
  var_556_1_first_job_time, // dynamic
  var_557_1_remaining_timed_jobs, // dynamic
  var_558_1_timeout, // dynamic
  var_560_3_timed_job, // dynamic
  var_561_33_time, // dynamic
  var_std__minus, // extern
  var_max, // extern
  var_any_of, // extern
  var_601_32_new_event, // dynamic
  var_apply, // extern
  var_is_a_list, // extern
  var_629_1_read_descriptor_list, // dynamic
  var_is_not_empty, // extern
  var_638_1_can_read, // dynamic
  var_639_1_can_write, // dynamic
  var_pselect, // extern
  var_643_1_injected_into_stdin, // dynamic
  var_644_1_write_jobs, // dynamic
  var_646_3_signal, // dynamic
  var_CHILD_CHANGED_STATE, // extern
  var_649_7_pid, // dynamic
  var_649_12_status, // dynamic
  var_wait, // extern
  var_exitstatus, // extern
  var_PROCESS_JOINED, // extern
  var_typed_tuple, // extern
  var_WINDOW_CHANGED_SIZE, // extern
  var_SIGNAL, // extern
  var_STDIN_FILENO, // extern
  var_get_terminal_size, // extern
  var_READ, // extern
  var_688_3_fd, // dynamic
  var_689_1_job, // dynamic
  var_690_8_bytes_written, // dynamic
  var_is_an_error, // extern
  var_716_3_fd, // dynamic
  var_not, // extern
  var_type_of, // extern
  var_SOCKET, // extern
  var_is_listening, // extern
  var_724_9_conn, // dynamic
  var_accept, // extern
  var_READ_FAILED, // extern
  var_CONNECT, // extern
  var_739_25_do_close, // dynamic
  var_739_35_max_length, // dynamic
  var_745_7_buf, // dynamic
  var_read, // extern
  var_CLOSED, // extern
  var_if_not, // extern
  var_788_28_io, // dynamic
  var_790_3_fd, // dynamic
  var_799_16_io, // dynamic
  var_803_3_resource, // dynamic
  var_finalize, // extern
  var_std__handle_events, // attribute
  var_std__handle_event, // attribute
  var_handle_events, // extern polymorphic
  var_824_31_io, // dynamic
  var_825_1_new_events, // dynamic
  var_826_1_handlers, // dynamic
  var_828_3_event, // dynamic
  var_829_7_type, // dynamic
  var_829_13_id, // dynamic
  var_829_17_data, // dynamic
  var_830_1_id_handlers, // dynamic
  var_835_1_handler, // dynamic
  var_840_1_context, // dynamic
  var_is_a_tuple, // extern
  var_first, // extern
  var_second, // extern
  var_parameter_count_of, // extern
  var_843_8_new_event, // dynamic
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
  7, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(4), // 245_0_self
  MANDATORY_PARAMETER, LOCAL(5), // 246_0_fd
  var_true, LOCAL(6), // 247_0_do_close
  var_undefined, LOCAL(7), // 248_0_max_length
  // !self.read_jobs_of(fd) tuple(do_close max_length)
  var_tuple, 2, LOCAL(6), LOCAL(7), 1, LOCAL(2),
  // read_jobs_of(fd) tuple(do_close max_length)
  var_read_jobs_of, 1, LOCAL(4), 1, LOCAL(3),
  // read_jobs_of(fd) tuple(do_close max_length)
  LOCAL(3), 2, LOCAL(5), LOCAL(2), 1, LOCAL(3),
  // self.read_jobs_of(fd) tuple(do_close max_length)
  LET, -1, LOCAL(4), var_read_jobs_of, LOCAL(3), LOCAL(4),
  // -> self
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(250, 3),
  POS(250, 9),
  POS(250, 9),
  POS(250, 4),
  POS(251, 3)
};

static TAB_NUM t_func_std_types__io___stop_reading_from[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 255_0_self
  LOCAL(4), // 256_0_fd
  // read_jobs_of(fd) undefined
  var_read_jobs_of, 1, LOCAL(3), 1, LOCAL(2),
  // read_jobs_of(fd) undefined
  LOCAL(2), 2, LOCAL(4), var_undefined, 1, LOCAL(2),
  // self.read_jobs_of(fd) undefined
  LET, -1, LOCAL(3), var_read_jobs_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(258, 9),
  POS(258, 9),
  POS(258, 4),
  POS(259, 3)
};

static TAB_NUM t_func_std_types__io___print_to[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 263_0_self
  MANDATORY_PARAMETER, LOCAL(4), // 264_0_fd
  REST_PARAMETER, LOCAL(5), // 265_0_args
  // create_string(args).to_utf8
  var_create_string, 1, LOCAL(5), 1, LOCAL(1),
  // to_utf8
  var_to_utf8, 1, LOCAL(1), 1, LOCAL(2),
  // write self fd create_string(args).to_utf8
  var_write, 3, LOCAL(3), LOCAL(4), LOCAL(2), TAIL_CALL,
  POS(267, 17),
  POS(267, 37),
  POS(267, 3)
};

static TAB_NUM t_func_std_types__io___write[] = {
  4, // locals
  3, // parameters
  LOCAL(3), // 271_0_self
  LOCAL(4), // 272_0_fd
  var_273_0_data,
  // write_jobs_of(self)(fd)
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(1),
  // $job write_jobs_of(self)(fd)
  LOCAL(1), 1, LOCAL(4), 1, var_275_1_job,
  // is_defined
  var_is_defined, 1, var_275_1_job, 1, LOCAL(1),
  // !job
  var_if, 3, LOCAL(1), lambda_1, lambda_2, 1, var_275_1_job,
  // write_jobs_of(fd) job
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(2),
  // write_jobs_of(fd) job
  LOCAL(2), 2, LOCAL(4), var_275_1_job, 1, LOCAL(2),
  // self.write_jobs_of(fd) job
  LET, -1, LOCAL(3), var_write_jobs_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(275, 8),
  POS(275, 3),
  POS(278, 11),
  POS(276, 3),
  POS(281, 9),
  POS(281, 9),
  POS(281, 4),
  POS(282, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // append(job data)
  var_append, 2, var_275_1_job, var_273_0_data, 1, LOCAL(1),
  //  append(job data)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(279, 10),
  POS(279, 9)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_273_0_data, TAIL_CALL,
  POS(280, 9)
};

static TAB_NUM t_func_std_types__io___cancel_write[] = {
  5, // locals
  2, // parameters
  LOCAL(3), // 286_0_self
  LOCAL(4), // 287_0_fd
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
  POS(289, 19),
  POS(289, 3),
  POS(290, 9),
  POS(290, 9),
  POS(290, 4),
  POS(291, 3)
};

static TAB_NUM t_func_std_types__io___close[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 295_0_self
  LOCAL(4), // 296_0_fd
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
  POS(298, 3),
  POS(299, 9),
  POS(299, 9),
  POS(299, 4),
  POS(300, 3)
};

static TAB_NUM t_func_std_types__io___join_process[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 304_0_self
  LOCAL(4), // 305_0_pid
  // watched_pids_of(pid) true
  var_watched_pids_of, 1, LOCAL(3), 1, LOCAL(2),
  // watched_pids_of(pid) true
  LOCAL(2), 2, LOCAL(4), var_true, 1, LOCAL(2),
  // self.watched_pids_of(pid) true
  LET, -1, LOCAL(3), var_watched_pids_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(307, 9),
  POS(307, 9),
  POS(307, 4),
  POS(308, 3)
};

static TAB_NUM t_func_std_types__io___start_injecting_window_change_events[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 312_0_self
  // .do_inject_window_change_events true)
  LET, -1, LOCAL(2), var_do_inject_window_change_events, var_true, LOCAL(1),
  // -> self(.do_inject_window_change_events true)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(314, 11),
  POS(314, 3)
};

static TAB_NUM t_func_std_types__io___stop_injecting_window_change_events[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 318_0_self
  // .do_inject_window_change_events false)
  LET, -1, LOCAL(2), var_do_inject_window_change_events, var_false, LOCAL(1),
  // -> self(.do_inject_window_change_events false)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(320, 11),
  POS(320, 3)
};

static TAB_NUM t_func_std_types__io___start_catching_signals[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_324_0_self,
  REST_PARAMETER, LOCAL(1), // 325_0_signals
  // $catched_signals catched_signals_of(self)
  var_catched_signals_of, 1, var_324_0_self, 1, var_327_1_catched_signals,
  // for_each signals
  var_for_each, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(327, 3),
  POS(328, 3)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 329_3_signal
  // catched_signals(signal) true
  var_327_1_catched_signals, 2, LOCAL(1), var_true, 1, var_327_1_catched_signals,
  // next
  var_next, 0, TAIL_CALL,
  POS(330, 8),
  POS(331, 7)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // .catched_signals_of catched_signals)
  LET, -1, var_324_0_self, var_catched_signals_of, var_327_1_catched_signals, LOCAL(1),
  //  self(.catched_signals_of catched_signals)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(332, 13),
  POS(332, 7)
};

static TAB_NUM t_func_std_types__io___stop_catching_signals[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_336_0_self,
  REST_PARAMETER, LOCAL(1), // 337_0_signals
  // $catched_signals catched_signals_of(self)
  var_catched_signals_of, 1, var_336_0_self, 1, var_339_1_catched_signals,
  // for_each signals
  var_for_each, 3, LOCAL(1), lambda_5, lambda_6, TAIL_CALL,
  POS(339, 3),
  POS(340, 3)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 341_3_signal
  // catched_signals(signal) false
  var_339_1_catched_signals, 2, LOCAL(1), var_false, 1, var_339_1_catched_signals,
  // next
  var_next, 0, TAIL_CALL,
  POS(342, 8),
  POS(343, 7)
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // .catched_signals_of catched_signals)
  LET, -1, var_336_0_self, var_catched_signals_of, var_339_1_catched_signals, LOCAL(1),
  //  self(.catched_signals_of catched_signals)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(344, 13),
  POS(344, 7)
};

static TAB_NUM t_func_std_types__io___set_timeout[] = {
  2, // locals
  2, // parameters
  var_348_0_self,
  var_349_0_timeout,
  // is_a_number &timeout -> current_time_of(self)+timeout
  var_is_a_number, 1, var_349_0_timeout, 1, LOCAL(1),
  // update_if timeout.is_a_number &timeout -> current_time_of(self)+timeout
  var_update_if, 3, LOCAL(1), var_349_0_timeout, lambda_7, 1, var_349_0_timeout,
  // $current_timeout timeout_of(self)
  var_timeout_of, 1, var_348_0_self, 1, var_352_1_current_timeout,
  // is_undefined || timeout < current_timeout
  var_is_undefined, 1, var_352_1_current_timeout, 1, LOCAL(1),
  // is_undefined || timeout < current_timeout
  var_std__or, 2, LOCAL(1), lambda_8, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_9, lambda_10, TAIL_CALL,
  POS(351, 21),
  POS(351, 3),
  POS(352, 3),
  POS(354, 21),
  POS(354, 21),
  POS(353, 3)
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  0, // parameters
  // current_time_of(self)+timeout
  var_current_time_of, 1, var_348_0_self, 1, LOCAL(1),
  // current_time_of(self)+timeout
  var_std__plus, 2, LOCAL(1), var_349_0_timeout, 1, LOCAL(2),
  //  current_time_of(self)+timeout
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(351, 45),
  POS(351, 45),
  POS(351, 44)
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // timeout < current_timeout
  var_std__less, 2, var_349_0_timeout, var_352_1_current_timeout, 1, LOCAL(1),
  // timeout < current_timeout
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(354, 37),
  POS(354, 37)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // .timeout_of timeout)
  LET, -1, var_348_0_self, var_timeout_of, var_349_0_timeout, LOCAL(1),
  //  self(.timeout_of timeout)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(355, 13),
  POS(355, 7)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_348_0_self, TAIL_CALL,
  POS(356, 7)
};

static TAB_NUM t_func_std__initialize_logging[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_360_0_io,
  num_3, var_361_0_log_level,
  var_undefined, var_362_0_log_filename,
  // is_defined:
  var_is_defined, 1, var_362_0_log_filename, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_log_filename_is_defined, lambda_11, IO_TAIL_CALL,
  POS(365, 18),
  POS(364, 3)
};

static TAB_NUM t_lambda_log_filename_is_defined[] = {
  1, // locals
  0, // parameters
  // open! $log_fd log_filename "w+"
  var_open, 2, var_362_0_log_filename, str_w, IO_CALL(1), LOCAL(1),
  // dup2! log_fd STDERR_FILENO
  var_dup2, 2, LOCAL(1), var_STDERR_FILENO, IO_CALL(0),
  // close! log_fd
  var_close, 1, LOCAL(1), IO_CALL(0),
  // enable_logging io log_level
  var_enable_logging, 2, var_360_0_io, var_361_0_log_level, TAIL_CALL,
  POS(366, 7),
  POS(367, 7),
  POS(368, 7),
  POS(369, 7)
};

static TAB_NUM t_lambda_11[] = {
  5, // locals
  0, // parameters
  // fstat! $stdout_info STDOUT_FILENO
  var_fstat, 1, var_STDOUT_FILENO, IO_CALL(1), var_371_8_stdout_info,
  // fstat! $stderr_info STDERR_FILENO
  var_fstat, 1, var_STDERR_FILENO, IO_CALL(1), var_372_8_stderr_info,
  // inode_number_of(stderr_info) != inode_number_of(stdout_info)
  var_inode_number_of, 1, var_372_8_stderr_info, 1, LOCAL(1),
  // inode_number_of(stdout_info)
  var_inode_number_of, 1, var_371_8_stdout_info, 1, LOCAL(2),
  // inode_number_of(stderr_info) != inode_number_of(stdout_info)
  var_std__equal, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // inode_number_of(stderr_info) != inode_number_of(stdout_info)
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // 
  var_std__or, 2, LOCAL(4), lambda_12, 1, LOCAL(5),
  // if
  var_if, 3, LOCAL(5), lambda_13, lambda_14, TAIL_CALL,
  POS(371, 7),
  POS(372, 7),
  POS(375, 11),
  POS(375, 43),
  POS(375, 11),
  POS(375, 11),
  POS(374, 11),
  POS(373, 7)
};

static TAB_NUM t_lambda_12[] = {
  4, // locals
  0, // parameters
  // device_of(stderr_info) != device_of(stdout_info)
  var_device_of, 1, var_372_8_stderr_info, 1, LOCAL(1),
  // device_of(stdout_info)
  var_device_of, 1, var_371_8_stdout_info, 1, LOCAL(2),
  // device_of(stderr_info) != device_of(stdout_info)
  var_std__equal, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // device_of(stderr_info) != device_of(stdout_info)
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // device_of(stderr_info) != device_of(stdout_info)
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(376, 11),
  POS(376, 37),
  POS(376, 11),
  POS(376, 11),
  POS(376, 11)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  // enable_logging io log_level
  var_enable_logging, 2, var_360_0_io, var_361_0_log_level, TAIL_CALL,
  POS(378, 11)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_360_0_io, TAIL_CALL,
  POS(379, 11)
};

static TAB_NUM t_func_std_types__io___enable_logging[] = {
  3, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 383_0_self
  num_1, LOCAL(3), // 384_0_level
  // .log_level_of level)
  LET, -1, LOCAL(2), var_log_level_of, LOCAL(3), LOCAL(1),
  // -> self(.log_level_of level)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(386, 11),
  POS(386, 3)
};

static TAB_NUM t_func_std_types__io___disable_logging[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 390_0_self
  // .log_level_of 0)
  LET, -1, LOCAL(2), var_log_level_of, num_0, LOCAL(1),
  // -> self(.log_level_of 0)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(392, 11),
  POS(392, 3)
};

static TAB_NUM t_func_std_types__io___log[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_396_0_self,
  num_1, var_397_0_level,
  MANDATORY_PARAMETER, var_398_0_message,
  // log_level_of(self):
  var_log_level_of, 1, var_396_0_self, 1, LOCAL(1),
  // log_level_of(self):
  var_std__less, 2, LOCAL(1), var_397_0_level, 1, LOCAL(2),
  // log_level_of(self):
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_15, lambda_20, TAIL_CALL,
  POS(401, 14),
  POS(401, 14),
  POS(401, 14),
  POS(400, 3)
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // is_a_string &message -> message()
  var_is_a_string, 1, var_398_0_message, 1, LOCAL(1),
  // update_if_not message.is_a_string &message -> message()
  var_update_if_not, 3, LOCAL(1), var_398_0_message, lambda_16, 1, var_398_0_message,
  // message .has_suffix. '@nl;' &message: push message '@nl;'
  var_has_suffix, 2, var_398_0_message, chr_10, 1, LOCAL(1),
  // update_if_not message .has_suffix. '@nl;' &message: push message '@nl;'
  var_update_if_not, 3, LOCAL(1), var_398_0_message, lambda_17, 1, var_398_0_message,
  // $lines split_into_lines(message)
  var_split_into_lines, 1, var_398_0_message, 1, LOCAL(2),
  // $prefix "[@(level)] "
  var_std__string, 3, string_1, var_397_0_level, string_2, 1, var_405_1_prefix,
  // lines(1))
  LOCAL(2), 1, num_1, 1, LOCAL(1),
  // $buf append(prefix lines(1))
  var_append, 2, var_405_1_prefix, LOCAL(1), 1, var_406_1_buf,
  // range &lines 2 -1
  var_range, 3, LOCAL(2), num_2, minus_num_1, 1, LOCAL(2),
  // for_each lines
  var_for_each, 3, LOCAL(2), lambda_18, lambda_19, TAIL_CALL,
  POS(402, 29),
  POS(402, 7),
  POS(403, 21),
  POS(403, 7),
  POS(404, 7),
  POS(405, 7),
  POS(406, 26),
  POS(406, 7),
  POS(407, 7),
  POS(408, 7)
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // message()
  var_398_0_message, 0, 1, LOCAL(1),
  //  message()
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(402, 53),
  POS(402, 52)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // push message '@nl;'
  var_push, 2, var_398_0_message, chr_10, TAIL_CALL,
  POS(403, 59)
};

static TAB_NUM t_lambda_18[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 409_3_line
  // length_of(prefix)) line
  var_length_of, 1, var_405_1_prefix, 1, LOCAL(1),
  // spaces(length_of(prefix)) line
  var_spaces, 1, LOCAL(1), 1, LOCAL(2),
  // append &buf spaces(length_of(prefix)) line
  var_append, 3, var_406_1_buf, LOCAL(2), LOCAL(3), 1, var_406_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(410, 30),
  POS(410, 23),
  POS(410, 11),
  POS(411, 11)
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // to_utf8
  var_to_utf8, 1, var_406_1_buf, 1, LOCAL(1),
  // write self STDERR_FILENO buf.to_utf8
  var_write, 3, var_396_0_self, var_STDERR_FILENO, LOCAL(1), TAIL_CALL,
  POS(413, 40),
  POS(413, 11)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_396_0_self, TAIL_CALL,
  POS(414, 7)
};

static TAB_NUM t_func_std_types__io___register_handlers[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_418_0_self,
  MANDATORY_PARAMETER, var_419_0_id,
  REST_PARAMETER, LOCAL(3), // 420_0_type_handlers
  // handlers_of(self)(id) empty_hash_table)
  var_handlers_of, 1, var_418_0_self, 1, LOCAL(1),
  // handlers_of(self)(id) empty_hash_table)
  LOCAL(1), 1, var_419_0_id, 1, LOCAL(2),
  // $handlers default_value(handlers_of(self)(id) empty_hash_table)
  var_default_value, 2, LOCAL(2), var_empty_hash_table, 1, var_422_1_handlers,
  // for_each type_handlers
  var_for_each, 3, LOCAL(3), lambda_21, lambda_22, TAIL_CALL,
  POS(422, 27),
  POS(422, 27),
  POS(422, 3),
  POS(423, 3)
};

static TAB_NUM t_lambda_21[] = {
  3, // locals
  1, // parameters
  LOCAL(1), // 424_3_type_handler
  // type_handler $type $handler
  LOCAL(1), 0, 2, LOCAL(2), LOCAL(3),
  // handlers(type) handler
  var_422_1_handlers, 2, LOCAL(2), LOCAL(3), 1, var_422_1_handlers,
  // next
  var_next, 0, TAIL_CALL,
  POS(425, 7),
  POS(426, 8),
  POS(427, 7)
};

static TAB_NUM t_lambda_22[] = {
  2, // locals
  0, // parameters
  // handlers_of(id) handlers
  var_handlers_of, 1, var_418_0_self, 1, LOCAL(2),
  // handlers_of(id) handlers
  LOCAL(2), 2, var_419_0_id, var_422_1_handlers, 1, LOCAL(2),
  // self.handlers_of(id) handlers
  LET, -1, var_418_0_self, var_handlers_of, LOCAL(2), var_418_0_self,
  // -> self
  LET, 1, var_418_0_self, TAIL_CALL,
  POS(429, 13),
  POS(429, 13),
  POS(429, 8),
  POS(430, 7)
};

static TAB_NUM t_func_std_types__io___deregister_handlers[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_434_0_self,
  MANDATORY_PARAMETER, var_435_0_id,
  REST_PARAMETER, var_436_0_types,
  // handlers_of(self)(id)
  var_handlers_of, 1, var_434_0_self, 1, LOCAL(1),
  // $handlers handlers_of(self)(id)
  LOCAL(1), 1, var_435_0_id, 1, var_438_1_handlers,
  // is_undefined
  var_is_undefined, 1, var_438_1_handlers, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_23, lambda_24, TAIL_CALL,
  POS(438, 13),
  POS(438, 3),
  POS(440, 14),
  POS(439, 3)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_434_0_self, TAIL_CALL,
  POS(441, 7)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  // for_each types
  var_for_each, 3, var_436_0_types, lambda_25, lambda_26, TAIL_CALL,
  POS(443, 7)
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 444_3_type
  // handlers(type) undefined
  var_438_1_handlers, 2, LOCAL(1), var_undefined, 1, var_438_1_handlers,
  // next
  var_next, 0, TAIL_CALL,
  POS(445, 12),
  POS(446, 11)
};

static TAB_NUM t_lambda_26[] = {
  2, // locals
  0, // parameters
  // handlers_of(id) handlers
  var_handlers_of, 1, var_434_0_self, 1, LOCAL(2),
  // handlers_of(id) handlers
  LOCAL(2), 2, var_435_0_id, var_438_1_handlers, 1, LOCAL(2),
  // self.handlers_of(id) handlers
  LET, -1, var_434_0_self, var_handlers_of, LOCAL(2), var_434_0_self,
  // -> self
  LET, 1, var_434_0_self, TAIL_CALL,
  POS(448, 17),
  POS(448, 17),
  POS(448, 12),
  POS(449, 11)
};

static TAB_NUM t_func_std_types__io___deregister_all_handlers[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 453_0_self
  LOCAL(4), // 454_0_id
  // handlers_of(id) empty_hash_table
  var_handlers_of, 1, LOCAL(3), 1, LOCAL(2),
  // handlers_of(id) empty_hash_table
  LOCAL(2), 2, LOCAL(4), var_empty_hash_table, 1, LOCAL(2),
  // self.handlers_of(id) empty_hash_table
  LET, -1, LOCAL(3), var_handlers_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(456, 9),
  POS(456, 9),
  POS(456, 4),
  POS(457, 3)
};

static TAB_NUM t_func_std_types__io___register_resource[] = {
  5, // locals
  3, // parameters
  LOCAL(3), // 461_0_self
  LOCAL(4), // 462_0_key
  LOCAL(5), // 463_0_resource
  // resources_of(key) resource
  var_resources_of, 1, LOCAL(3), 1, LOCAL(2),
  // resources_of(key) resource
  LOCAL(2), 2, LOCAL(4), LOCAL(5), 1, LOCAL(2),
  // self.resources_of(key) resource
  LET, -1, LOCAL(3), var_resources_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(465, 9),
  POS(465, 9),
  POS(465, 4),
  POS(466, 3)
};

static TAB_NUM t_func_std_types__io___run[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 470_0_self
  MANDATORY_PARAMETER, LOCAL(4), // 471_0_command
  REST_PARAMETER, LOCAL(5), // 472_0_arguments
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
  POS(474, 14),
  POS(474, 28),
  POS(474, 3),
  POS(474, 9),
  POS(475, 3)
};

static TAB_NUM t_func_std_types__io___run_at[] = {
  4, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_479_0_self,
  MANDATORY_PARAMETER, var_480_0_time,
  MANDATORY_PARAMETER, LOCAL(3), // 481_0_command
  REST_PARAMETER, LOCAL(4), // 482_0_arguments
  // is_a_number &time -> current_time_of(self)+time
  var_is_a_number, 1, var_480_0_time, 1, LOCAL(1),
  // update_if time.is_a_number &time -> current_time_of(self)+time
  var_update_if, 3, LOCAL(1), var_480_0_time, lambda_27, 1, var_480_0_time,
  // timed_jobs_of tuple(command arguments time)
  var_timed_jobs_of, 1, var_479_0_self, 1, LOCAL(1),
  // tuple(command arguments time)
  var_tuple, 3, LOCAL(3), LOCAL(4), var_480_0_time, 1, LOCAL(2),
  // push &self.timed_jobs_of tuple(command arguments time)
  var_push, 2, LOCAL(1), LOCAL(2), 1, LOCAL(1),
  // self.timed_jobs_of tuple(command arguments time)
  LET, -1, var_479_0_self, var_timed_jobs_of, LOCAL(1), var_479_0_self,
  // -> self
  LET, 1, var_479_0_self, TAIL_CALL,
  POS(484, 18),
  POS(484, 3),
  POS(485, 14),
  POS(485, 28),
  POS(485, 3),
  POS(485, 9),
  POS(486, 3)
};

static TAB_NUM t_lambda_27[] = {
  2, // locals
  0, // parameters
  // current_time_of(self)+time
  var_current_time_of, 1, var_479_0_self, 1, LOCAL(1),
  // current_time_of(self)+time
  var_std__plus, 2, LOCAL(1), var_480_0_time, 1, LOCAL(2),
  //  current_time_of(self)+time
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(484, 39),
  POS(484, 39),
  POS(484, 38)
};

static TAB_NUM t_func_std_types__io___exit[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 490_0_self
  LOCAL(3), // 491_0_exit_code
  // self
  LET, -2, LOCAL(2), var_exit_code_of, LOCAL(3), var_read_jobs_of, var_empty_hash_table, LOCAL(1),
  // ->
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(494, 5),
  POS(493, 3)
};

static TAB_NUM t_func_std_types__io___is_empty[] = {
  3, // locals
  1, // parameters
  var_500_0_self,
  // read_jobs_of(self).is_empty
  var_read_jobs_of, 1, var_500_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_28, 1, LOCAL(3),
  // ->
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(504, 7),
  POS(504, 26),
  POS(503, 7),
  POS(502, 3)
};

static TAB_NUM t_lambda_28[] = {
  3, // locals
  0, // parameters
  // write_jobs_of(self).is_empty
  var_write_jobs_of, 1, var_500_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_29, 1, LOCAL(3),
  // write_jobs_of(self).is_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(505, 7),
  POS(505, 27),
  POS(503, 7),
  POS(505, 7)
};

static TAB_NUM t_lambda_29[] = {
  3, // locals
  0, // parameters
  // close_jobs_of(self).is_empty
  var_close_jobs_of, 1, var_500_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_30, 1, LOCAL(3),
  // close_jobs_of(self).is_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(506, 7),
  POS(506, 27),
  POS(503, 7),
  POS(506, 7)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(self).is_empty
  var_watched_pids_of, 1, var_500_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // watched_pids_of(self).is_empty
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(507, 7),
  POS(507, 29),
  POS(507, 7)
};

static TAB_NUM t_func_std__log_unhandled_event[] = {
  3, // locals
  2, // parameters
  var_509_28_io,
  LOCAL(3), // 509_31_event
  // event $type $fd $_argument
  LOCAL(3), 0, 3, var_510_7_type, var_510_13_fd, LOCAL(1),
  // fd == STDERR_FILENO
  var_std__equal, 2, var_510_13_fd, var_STDERR_FILENO, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_31, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_34, lambda_35, TAIL_CALL,
  POS(510, 3),
  POS(513, 7),
  POS(512, 7),
  POS(511, 3)
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  0, // parameters
  // type == WRITE_FAILED
  var_std__equal, 2, var_510_7_type, var_WRITE_FAILED, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_32, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(515, 9),
  POS(514, 9),
  POS(514, 9)
};

static TAB_NUM t_lambda_32[] = {
  2, // locals
  0, // parameters
  // type == WRITE_PENDING
  var_std__equal, 2, var_510_7_type, var_WRITE_PENDING, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_33, 1, LOCAL(2),
  // type == WRITE_PENDING
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(516, 9),
  POS(514, 9),
  POS(516, 9)
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // type == WRITE_COMPLETED
  var_std__equal, 2, var_510_7_type, var_WRITE_COMPLETED, 1, LOCAL(1),
  // type == WRITE_COMPLETED
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(517, 9),
  POS(517, 9)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  //  io # prevent recursive logging
  LET, 1, var_509_28_io, TAIL_CALL,
  POS(518, 7)
};

static TAB_NUM t_lambda_35[] = {
  2, // locals
  0, // parameters
  // WRITE_PENDING, WRITE_COMPLETED -> 5
  var_std__sequence, 2, var_WRITE_PENDING, var_WRITE_COMPLETED, 1, LOCAL(1),
  // $log_level
  var_case, 4, var_510_7_type, LOCAL(1), lambda_36, lambda_37, 1, LOCAL(2),
  // log io log_level -> "
  var_log, 3, var_509_28_io, LOCAL(2), lambda_38, TAIL_CALL,
  POS(523, 11),
  POS(520, 7),
  POS(525, 7)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  5
  LET, 1, num_5, TAIL_CALL,
  POS(523, 44)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  //  2
  LET, 1, num_2, TAIL_CALL,
  POS(524, 13)
};

static TAB_NUM t_lambda_38[] = {
  4, // locals
  0, // parameters
  // serialize(type).trim_right) - @(serialize(fd))@
  var_serialize, 1, var_510_7_type, 1, LOCAL(1),
  // trim_right) - @(serialize(fd))@
  var_trim_right, 1, LOCAL(1), 1, LOCAL(2),
  // serialize(fd))@
  var_serialize, 1, var_510_13_fd, 1, LOCAL(3),
  // "
  var_std__string, 4, str_unhandled_event, LOCAL(2), string_3, LOCAL(3), 1, LOCAL(4),
  //  "
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(526, 27),
  POS(526, 43),
  POS(526, 59),
  POS(525, 27),
  POS(525, 26)
};

static TAB_NUM t_func_std_types__io___initialize[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 530_0_self
  // current_time! $t
  var_current_time, 0, IO_CALL(1), LOCAL(3),
  // .current_time_of t)
  LET, -1, LOCAL(2), var_current_time_of, LOCAL(3), LOCAL(1),
  // -> self(.current_time_of t)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(532, 3),
  POS(533, 11),
  POS(533, 3)
};

static TAB_NUM t_func_std_types__io___get_events[] = {
  1, // locals
  1, // parameters
  var_537_0_self,
  // step_no_of
  var_step_no_of, 1, var_537_0_self, 1, LOCAL(1),
  // inc &self.step_no_of
  var_inc, 1, LOCAL(1), 1, LOCAL(1),
  // self.step_no_of
  LET, -1, var_537_0_self, var_step_no_of, LOCAL(1), var_537_0_self,
  // attempt_close_operations! &self
  func_attempt_close_operations, 1, var_537_0_self, IO_CALL(1), var_537_0_self,
  // attempt_exit! &self
  func_attempt_exit, 1, var_537_0_self, IO_CALL(1), var_537_0_self,
  // $events empty_list
  LET, 1, var_empty_list, 1, var_550_1_events,
  // $want_to_write empty_list
  LET, 1, var_empty_list, 1, var_551_1_want_to_write,
  // current_time! $t
  var_current_time, 0, IO_CALL(1), var_553_15_t,
  // $start_jobs start_jobs_of(self)
  var_start_jobs_of, 1, var_537_0_self, 1, var_554_1_start_jobs,
  // self.start_jobs_of empty_list
  LET, -1, var_537_0_self, var_start_jobs_of, var_empty_list, var_537_0_self,
  // $first_job_time undefined
  LET, 1, var_undefined, 1, var_556_1_first_job_time,
  // $remaining_timed_jobs empty_list
  LET, 1, var_empty_list, 1, var_557_1_remaining_timed_jobs,
  // $timeout undefined
  LET, 1, var_undefined, 1, var_558_1_timeout,
  // timed_jobs_of(self)
  var_timed_jobs_of, 1, var_537_0_self, 1, LOCAL(1),
  // for_each timed_jobs_of(self)
  var_for_each, 3, LOCAL(1), lambda_39, lambda_44, IO_TAIL_CALL,
  POS(543, 13),
  POS(543, 3),
  POS(543, 8),
  POS(545, 3),
  POS(547, 3),
  POS(550, 3),
  POS(551, 3),
  POS(553, 3),
  POS(554, 3),
  POS(555, 4),
  POS(556, 3),
  POS(557, 3),
  POS(558, 3),
  POS(559, 12),
  POS(559, 3)
};

static TAB_NUM t_lambda_39[] = {
  2, // locals
  1, // parameters
  var_560_3_timed_job,
  // timed_job $_command $_arguments $time
  var_560_3_timed_job, 0, 3, LOCAL(1), LOCAL(1), var_561_33_time,
  // t:
  var_std__less, 2, var_553_15_t, var_561_33_time, 1, LOCAL(1),
  // t:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_40, lambda_41, IO_TAIL_CALL,
  POS(561, 7),
  POS(563, 17),
  POS(563, 17),
  POS(562, 7)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  // push &start_jobs timed_job
  var_push, 2, var_554_1_start_jobs, var_560_3_timed_job, 1, var_554_1_start_jobs,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(564, 11),
  POS(565, 11)
};

static TAB_NUM t_lambda_41[] = {
  2, // locals
  0, // parameters
  // push &remaining_timed_jobs timed_job
  var_push, 2, var_557_1_remaining_timed_jobs, var_560_3_timed_job, 1, var_557_1_remaining_timed_jobs,
  // is_undefined || time < first_job_time:
  var_is_undefined, 1, var_556_1_first_job_time, 1, LOCAL(1),
  // is_undefined || time < first_job_time:
  var_std__or, 2, LOCAL(1), lambda_42, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_43, var_next, IO_TAIL_CALL,
  POS(567, 11),
  POS(569, 28),
  POS(569, 28),
  POS(568, 11)
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // time < first_job_time:
  var_std__less, 2, var_561_33_time, var_556_1_first_job_time, 1, LOCAL(1),
  // time < first_job_time:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(569, 44),
  POS(569, 44)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  // !first_job_time time
  LET, 1, var_561_33_time, 1, var_556_1_first_job_time,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(570, 15),
  POS(571, 15)
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  // self.timed_jobs_of remaining_timed_jobs
  LET, -1, var_537_0_self, var_timed_jobs_of, var_557_1_remaining_timed_jobs, var_537_0_self,
  // set_timeout!
  func_set_timeout, 0, IO_TAIL_CALL,
  POS(574, 8),
  POS(575, 7)
};

static TAB_NUM t_func_set_timeout[] = {
  2, // locals
  0, // parameters
  // !timeout timeout_of(self)
  var_timeout_of, 1, var_537_0_self, 1, var_558_1_timeout,
  // is_defined || first_job_time.is_defined:
  var_is_defined, 1, var_558_1_timeout, 1, LOCAL(1),
  // is_defined || first_job_time.is_defined:
  var_std__or, 2, LOCAL(1), lambda_45, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_46, func_handle_start_jobs, IO_TAIL_CALL,
  POS(578, 5),
  POS(580, 15),
  POS(580, 15),
  POS(579, 5)
};

static TAB_NUM t_lambda_45[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_556_1_first_job_time, 1, LOCAL(1),
  // first_job_time.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(580, 44),
  POS(580, 29)
};

static TAB_NUM t_lambda_46[] = {
  2, // locals
  0, // parameters
  // is_undefined || first_job_time < timeout
  var_is_undefined, 1, var_558_1_timeout, 1, LOCAL(1),
  // is_undefined || first_job_time < timeout
  var_std__or, 2, LOCAL(1), lambda_47, 1, LOCAL(2),
  // update_if timeout.is_undefined || first_job_time < timeout
  var_update_if, 3, LOCAL(2), var_558_1_timeout, lambda_timeout, 1, var_558_1_timeout,
  // self.timeout_of undefined
  LET, -1, var_537_0_self, var_timeout_of, var_undefined, var_537_0_self,
  // timeout-t 0)
  var_std__minus, 2, var_558_1_timeout, var_553_15_t, 1, LOCAL(1),
  // !timeout max(timeout-t 0)
  var_max, 2, LOCAL(1), num_0, 1, var_558_1_timeout,
  // 0
  var_std__less, 2, num_0, var_558_1_timeout, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_48, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_49, func_handle_start_jobs, IO_TAIL_CALL,
  POS(581, 27),
  POS(581, 27),
  POS(581, 9),
  POS(583, 10),
  POS(584, 22),
  POS(584, 9),
  POS(587, 23),
  POS(586, 13),
  POS(585, 9)
};

static TAB_NUM t_lambda_47[] = {
  1, // locals
  0, // parameters
  // first_job_time < timeout
  var_std__less, 2, var_556_1_first_job_time, var_558_1_timeout, 1, LOCAL(1),
  // first_job_time < timeout
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(581, 43),
  POS(581, 43)
};

static TAB_NUM t_lambda_timeout[] = {
  0, // locals
  0, // parameters
  //  first_job_time
  LET, 1, var_556_1_first_job_time, TAIL_CALL,
  POS(582, 22)
};

static TAB_NUM t_lambda_48[] = {
  2, // locals
  0, // parameters
  // exit_codes_of(self): (pid _exit_code)
  var_exit_codes_of, 1, var_537_0_self, 1, LOCAL(1),
  // any_of
  var_any_of, 2, LOCAL(1), lambda_exit_codes_ofself, 1, LOCAL(2),
  // any_of
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(589, 15),
  POS(588, 13),
  POS(588, 13)
};

static TAB_NUM t_lambda_exit_codes_ofself[] = {
  3, // locals
  2, // parameters
  LOCAL(3), // 589_22_pid
  LOCAL(1),
  // watched_pids_of(self)(pid)
  var_watched_pids_of, 1, var_537_0_self, 1, LOCAL(1),
  // watched_pids_of(self)(pid)
  LOCAL(1), 1, LOCAL(3), 1, LOCAL(2),
  // -> watched_pids_of(self)(pid)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(590, 20),
  POS(590, 20),
  POS(590, 17)
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  // !timeout 0
  LET, 1, num_0, 1, var_558_1_timeout,
  // handle_start_jobs!
  func_handle_start_jobs, 0, IO_TAIL_CALL,
  POS(592, 13),
  POS(593, 13)
};

static TAB_NUM t_func_handle_start_jobs[] = {
  0, // locals
  0, // parameters
  // for_each start_jobs
  var_for_each, 3, var_554_1_start_jobs, lambda_50, lambda_52, IO_TAIL_CALL,
  POS(598, 5)
};

static TAB_NUM t_lambda_50[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 599_3_job
  // job $command $arguments
  LOCAL(2), 0, 2, LOCAL(3), LOCAL(4),
  // apply! command &self arguments $new_event
  var_apply, 3, LOCAL(3), var_537_0_self, LOCAL(4), IO_CALL(2), var_537_0_self, var_601_32_new_event,
  // is_defined:
  var_is_defined, 1, var_601_32_new_event, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_new_event_is_defined, var_next, IO_TAIL_CALL,
  POS(600, 9),
  POS(601, 9),
  POS(603, 21),
  POS(602, 9)
};

static TAB_NUM t_lambda_new_event_is_defined[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_601_32_new_event, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_new_event_is_a_list, lambda_51, IO_TAIL_CALL,
  POS(605, 25),
  POS(604, 13)
};

static TAB_NUM t_lambda_new_event_is_a_list[] = {
  0, // locals
  0, // parameters
  // append &events new_event
  var_append, 2, var_550_1_events, var_601_32_new_event, 1, var_550_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(606, 17),
  POS(607, 17)
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  // push &events new_event
  var_push, 2, var_550_1_events, var_601_32_new_event, 1, var_550_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(609, 17),
  POS(610, 17)
};

static TAB_NUM t_lambda_52[] = {
  1, // locals
  0, // parameters
  // !start_jobs start_jobs_of(self)
  var_start_jobs_of, 1, var_537_0_self, 1, var_554_1_start_jobs,
  // self.start_jobs_of empty_list
  LET, -1, var_537_0_self, var_start_jobs_of, var_empty_list, var_537_0_self,
  // is_empty
  var_is_empty, 1, var_554_1_start_jobs, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), func_handle_write_jobs, func_handle_start_jobs, IO_TAIL_CALL,
  POS(614, 9),
  POS(615, 10),
  POS(617, 22),
  POS(616, 9)
};

static TAB_NUM t_func_handle_write_jobs[] = {
  1, // locals
  0, // parameters
  // write_jobs_of(self)
  var_write_jobs_of, 1, var_537_0_self, 1, LOCAL(1),
  // for_each write_jobs_of(self)
  var_for_each, 3, LOCAL(1), lambda_53, func_wait_for_events, IO_TAIL_CALL,
  POS(622, 14),
  POS(622, 5)
};

static TAB_NUM t_lambda_53[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 623_3_fd
  LOCAL(1),
  // push &want_to_write fd
  var_push, 2, var_551_1_want_to_write, LOCAL(2), 1, var_551_1_want_to_write,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(624, 9),
  POS(625, 9)
};

static TAB_NUM t_func_wait_for_events[] = {
  2, // locals
  0, // parameters
  // $read_descriptor_list empty_list
  LET, 1, var_empty_list, 1, var_629_1_read_descriptor_list,
  // read_jobs_of(self)
  var_read_jobs_of, 1, var_537_0_self, 1, LOCAL(1),
  // for_each !read_descriptor_list read_jobs_of(self)
  var_for_each, 3, LOCAL(1), lambda_54, lambda_55, IO_CALL(1), var_629_1_read_descriptor_list,
  // is_not_empty &timeout -> 0
  var_is_not_empty, 1, var_550_1_events, 1, LOCAL(1),
  // update_if events.is_not_empty &timeout -> 0
  var_update_if, 3, LOCAL(1), var_558_1_timeout, lambda_56, 1, var_558_1_timeout,
  // pselect!
  var_pselect, 4, var_629_1_read_descriptor_list, var_551_1_want_to_write, var_empty_list, var_558_1_timeout, IO_CALL(4), LOCAL(2), var_638_1_can_read, var_639_1_can_write, LOCAL(1),
  // current_time! !self.current_time_of
  var_current_time, 0, IO_CALL(1), LOCAL(1),
  // self.current_time_of
  LET, -1, var_537_0_self, var_current_time_of, LOCAL(1), var_537_0_self,
  // $injected_into_stdin false
  LET, 1, var_false, 1, var_643_1_injected_into_stdin,
  // $write_jobs write_jobs_of(self)
  var_write_jobs_of, 1, var_537_0_self, 1, var_644_1_write_jobs,
  // for_each signals
  var_for_each, 3, LOCAL(2), lambda_57, func_handle_write_requests, IO_TAIL_CALL,
  POS(629, 7),
  POS(630, 38),
  POS(630, 7),
  POS(635, 24),
  POS(635, 7),
  POS(636, 7),
  POS(642, 7),
  POS(642, 22),
  POS(643, 7),
  POS(644, 7),
  POS(645, 7)
};

static TAB_NUM t_lambda_54[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 631_3_fd
  LOCAL(1),
  // push &read_descriptor_list fd
  var_push, 2, var_629_1_read_descriptor_list, LOCAL(2), 1, var_629_1_read_descriptor_list,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(632, 11),
  POS(633, 11)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  //  read_descriptor_list
  LET, 1, var_629_1_read_descriptor_list, TAIL_CALL,
  POS(634, 11)
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(635, 48)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  1, // parameters
  var_646_3_signal,
  // case signal
  var_case, 6, var_646_3_signal, var_CHILD_CHANGED_STATE, lambda_CHILD_CHANGED_STATE, var_WINDOW_CHANGED_SIZE, lambda_WINDOW_CHANGED_SIZE, lambda_59, IO_TAIL_CALL,
  POS(647, 11)
};

static TAB_NUM t_lambda_CHILD_CHANGED_STATE[] = {
  2, // locals
  0, // parameters
  // wait! $pid $status
  var_wait, 0, IO_CALL(2), var_649_7_pid, var_649_12_status,
  // exitstatus &status
  var_exitstatus, 1, var_649_12_status, 1, var_649_12_status,
  // watched_pids_of(self)(pid):
  var_watched_pids_of, 1, var_537_0_self, 1, LOCAL(1),
  // watched_pids_of(self)(pid):
  LOCAL(1), 1, var_649_7_pid, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_watched_pids_ofselfpid, lambda_58, IO_TAIL_CALL,
  POS(649, 15),
  POS(650, 15),
  POS(652, 17),
  POS(652, 17),
  POS(651, 15)
};

static TAB_NUM t_lambda_watched_pids_ofselfpid[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(pid) false
  var_watched_pids_of, 1, var_537_0_self, 1, LOCAL(2),
  // watched_pids_of(pid) false
  LOCAL(2), 2, var_649_7_pid, var_false, 1, LOCAL(2),
  // self.watched_pids_of(pid) false
  LET, -1, var_537_0_self, var_watched_pids_of, LOCAL(2), var_537_0_self,
  // typed_tuple(std_types::event PROCESS_JOINED pid status)
  var_typed_tuple, 4, var_std_types__event, var_PROCESS_JOINED, var_649_7_pid, var_649_12_status, 1, LOCAL(1),
  // push &events typed_tuple(std_types::event PROCESS_JOINED pid status)
  var_push, 2, var_550_1_events, LOCAL(1), 1, var_550_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(653, 25),
  POS(653, 25),
  POS(653, 20),
  POS(654, 32),
  POS(654, 19),
  POS(655, 19)
};

static TAB_NUM t_lambda_58[] = {
  2, // locals
  0, // parameters
  // exit_codes_of(pid) status
  var_exit_codes_of, 1, var_537_0_self, 1, LOCAL(2),
  // exit_codes_of(pid) status
  LOCAL(2), 2, var_649_7_pid, var_649_12_status, 1, LOCAL(2),
  // self.exit_codes_of(pid) status
  LET, -1, var_537_0_self, var_exit_codes_of, LOCAL(2), var_537_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(657, 25),
  POS(657, 25),
  POS(657, 20),
  POS(658, 19)
};

static TAB_NUM t_lambda_WINDOW_CHANGED_SIZE[] = {
  0, // locals
  0, // parameters
  // self.window_change_event_occurred true
  LET, -1, var_537_0_self, var_window_change_event_occurred, var_true, var_537_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(660, 16),
  POS(661, 15)
};

static TAB_NUM t_lambda_59[] = {
  2, // locals
  0, // parameters
  // catched_signals_of(self)(signal):
  var_catched_signals_of, 1, var_537_0_self, 1, LOCAL(1),
  // catched_signals_of(self)(signal):
  LOCAL(1), 1, var_646_3_signal, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_catched_signals_ofselfsignal, var_next, IO_TAIL_CALL,
  POS(664, 17),
  POS(664, 17),
  POS(663, 15)
};

static TAB_NUM t_lambda_catched_signals_ofselfsignal[] = {
  1, // locals
  0, // parameters
  // typed_tuple(std_types::event SIGNAL undefined signal)
  var_typed_tuple, 4, var_std_types__event, var_SIGNAL, var_undefined, var_646_3_signal, 1, LOCAL(1),
  // push &events typed_tuple(std_types::event SIGNAL undefined signal)
  var_push, 2, var_550_1_events, LOCAL(1), 1, var_550_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(665, 32),
  POS(665, 19),
  POS(666, 19)
};

static TAB_NUM t_func_handle_write_requests[] = {
  2, // locals
  0, // parameters
  // window_change_event_occurred
  var_window_change_event_occurred, 1, var_537_0_self, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_60, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_62, lambda_63, IO_TAIL_CALL,
  POS(673, 18),
  POS(672, 13),
  POS(671, 9)
};

static TAB_NUM t_lambda_60[] = {
  2, // locals
  0, // parameters
  // do_inject_window_change_events
  var_do_inject_window_change_events, 1, var_537_0_self, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_61, 1, LOCAL(2),
  // self.do_inject_window_change_events
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(674, 18),
  POS(672, 13),
  POS(674, 13)
};

static TAB_NUM t_lambda_61[] = {
  3, // locals
  0, // parameters
  // read_jobs_of(self)(STDIN_FILENO).is_defined
  var_read_jobs_of, 1, var_537_0_self, 1, LOCAL(1),
  // read_jobs_of(self)(STDIN_FILENO).is_defined
  LOCAL(1), 1, var_STDIN_FILENO, 1, LOCAL(2),
  // is_defined
  var_is_defined, 1, LOCAL(2), 1, LOCAL(3),
  // read_jobs_of(self)(STDIN_FILENO).is_defined
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(675, 13),
  POS(675, 13),
  POS(675, 46),
  POS(675, 13)
};

static TAB_NUM t_lambda_62[] = {
  4, // locals
  0, // parameters
  // get_terminal_size! STDIN_FILENO $width $height
  var_get_terminal_size, 1, var_STDIN_FILENO, IO_CALL(2), LOCAL(2), LOCAL(3),
  // self.window_change_event_occurred false
  LET, -1, var_537_0_self, var_window_change_event_occurred, var_false, var_537_0_self,
  // $buf "@esc;[8;@(height);@(width)t"
  var_std__string, 5, string_4, LOCAL(3), string_5, LOCAL(2), str_t, 1, LOCAL(4),
  // typed_tuple(std_types::event READ STDIN_FILENO buf)
  var_typed_tuple, 4, var_std_types__event, var_READ, var_STDIN_FILENO, LOCAL(4), 1, LOCAL(1),
  // push &events typed_tuple(std_types::event READ STDIN_FILENO buf)
  var_push, 2, var_550_1_events, LOCAL(1), 1, var_550_1_events,
  // !injected_into_stdin true
  LET, 1, var_true, 1, var_643_1_injected_into_stdin,
  // check_file_descriptors!
  func_check_file_descriptors, 0, IO_TAIL_CALL,
  POS(677, 13),
  POS(678, 14),
  POS(679, 13),
  POS(680, 26),
  POS(680, 13),
  POS(681, 13),
  POS(682, 13)
};

static TAB_NUM t_lambda_63[] = {
  0, // locals
  0, // parameters
  // check_file_descriptors!
  func_check_file_descriptors, 0, IO_TAIL_CALL,
  POS(684, 13)
};

static TAB_NUM t_func_check_file_descriptors[] = {
  0, // locals
  0, // parameters
  // for_each can_write
  var_for_each, 3, var_639_1_can_write, lambda_64, func_attempt_reads, IO_TAIL_CALL,
  POS(687, 9)
};

static TAB_NUM t_lambda_64[] = {
  1, // locals
  1, // parameters
  var_688_3_fd,
  // $job write_jobs(fd)
  var_644_1_write_jobs, 1, var_688_3_fd, 1, var_689_1_job,
  // write! $bytes_written fd job
  var_write, 2, var_688_3_fd, var_689_1_job, IO_CALL(1), var_690_8_bytes_written,
  // is_an_error:
  var_is_an_error, 1, var_690_8_bytes_written, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_bytes_written_is_an_error, lambda_65, IO_TAIL_CALL,
  POS(689, 13),
  POS(690, 13),
  POS(692, 29),
  POS(691, 13)
};

static TAB_NUM t_lambda_bytes_written_is_an_error[] = {
  2, // locals
  0, // parameters
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, var_537_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, var_688_3_fd, var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, var_537_0_self, var_write_jobs_of, LOCAL(2), var_537_0_self,
  // typed_tuple
  var_typed_tuple, 4, var_std_types__event, var_WRITE_FAILED, var_688_3_fd, var_690_8_bytes_written, 1, LOCAL(1),
  // push &events
  var_push, 2, var_550_1_events, LOCAL(1), 1, var_550_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(693, 23),
  POS(693, 23),
  POS(693, 18),
  POS(695, 19),
  POS(694, 17),
  POS(699, 17)
};

static TAB_NUM t_lambda_65[] = {
  2, // locals
  0, // parameters
  // length_of(job):
  var_length_of, 1, var_689_1_job, 1, LOCAL(1),
  // bytes_written < length_of(job):
  var_std__less, 2, var_690_8_bytes_written, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_66, lambda_67, IO_TAIL_CALL,
  POS(702, 35),
  POS(702, 19),
  POS(701, 17)
};

static TAB_NUM t_lambda_66[] = {
  2, // locals
  0, // parameters
  // bytes_written+1 -1
  var_std__plus, 2, var_690_8_bytes_written, num_1, 1, LOCAL(1),
  // range &job bytes_written+1 -1
  var_range, 3, var_689_1_job, LOCAL(1), minus_num_1, 1, var_689_1_job,
  // write_jobs_of(fd) job # remaining text to write
  var_write_jobs_of, 1, var_537_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) job # remaining text to write
  LOCAL(2), 2, var_688_3_fd, var_689_1_job, 1, LOCAL(2),
  // self.write_jobs_of(fd) job # remaining text to write
  LET, -1, var_537_0_self, var_write_jobs_of, LOCAL(2), var_537_0_self,
  // typed_tuple(std_types::event WRITE_PENDING fd job)
  var_typed_tuple, 4, var_std_types__event, var_WRITE_PENDING, var_688_3_fd, var_689_1_job, 1, LOCAL(1),
  // push &events typed_tuple(std_types::event WRITE_PENDING fd job)
  var_push, 2, var_550_1_events, LOCAL(1), 1, var_550_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(703, 32),
  POS(703, 21),
  POS(704, 27),
  POS(704, 27),
  POS(704, 22),
  POS(705, 34),
  POS(705, 21),
  POS(706, 21)
};

static TAB_NUM t_lambda_67[] = {
  2, // locals
  0, // parameters
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, var_537_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, var_688_3_fd, var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, var_537_0_self, var_write_jobs_of, LOCAL(2), var_537_0_self,
  // typed_tuple(std_types::event WRITE_COMPLETED fd undefined)
  var_typed_tuple, 4, var_std_types__event, var_WRITE_COMPLETED, var_688_3_fd, var_undefined, 1, LOCAL(1),
  // push &events
  var_push, 2, var_550_1_events, LOCAL(1), 1, var_550_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(708, 27),
  POS(708, 27),
  POS(708, 22),
  POS(710, 23),
  POS(709, 21),
  POS(711, 21)
};

static TAB_NUM t_func_attempt_reads[] = {
  0, // locals
  0, // parameters
  // for_each can_read
  var_for_each, 3, var_638_1_can_read, lambda_68, lambda_80, IO_TAIL_CALL,
  POS(715, 9)
};

static TAB_NUM t_lambda_68[] = {
  3, // locals
  1, // parameters
  var_716_3_fd,
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__equal, 2, var_716_3_fd, var_STDIN_FILENO, 1, LOCAL(1),
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__or, 2, LOCAL(2), lambda_69, 1, LOCAL(3),
  // if_not fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_if_not, 3, LOCAL(3), var_next, lambda_70, IO_TAIL_CALL,
  POS(717, 20),
  POS(717, 20),
  POS(717, 20),
  POS(717, 13)
};

static TAB_NUM t_lambda_69[] = {
  1, // locals
  0, // parameters
  // not(injected_into_stdin) next:
  var_not, 1, var_643_1_injected_into_stdin, 1, LOCAL(1),
  // not(injected_into_stdin) next:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(717, 42),
  POS(717, 42)
};

static TAB_NUM t_lambda_70[] = {
  3, // locals
  0, // parameters
  // fstat! fd $info
  var_fstat, 1, var_716_3_fd, IO_CALL(1), LOCAL(3),
  // type_of(info) == SOCKET:
  var_type_of, 1, LOCAL(3), 1, LOCAL(1),
  // type_of(info) == SOCKET:
  var_std__equal, 2, LOCAL(1), var_SOCKET, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_71, func_do_read, IO_TAIL_CALL,
  POS(718, 15),
  POS(720, 17),
  POS(720, 17),
  POS(719, 15)
};

static TAB_NUM t_lambda_71[] = {
  1, // locals
  0, // parameters
  // is_listening! $does_listen fd
  var_is_listening, 1, var_716_3_fd, IO_CALL(1), LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_does_listen, func_do_read, IO_TAIL_CALL,
  POS(721, 19),
  POS(722, 19)
};

static TAB_NUM t_lambda_does_listen[] = {
  1, // locals
  0, // parameters
  // accept! $conn fd
  var_accept, 1, var_716_3_fd, IO_CALL(1), var_724_9_conn,
  // is_an_error:
  var_is_an_error, 1, var_724_9_conn, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_conn_is_an_error, lambda_72, IO_TAIL_CALL,
  POS(724, 23),
  POS(726, 30),
  POS(725, 23)
};

static TAB_NUM t_lambda_conn_is_an_error[] = {
  1, // locals
  0, // parameters
  // typed_tuple(std_types::event READ_FAILED fd conn)
  var_typed_tuple, 4, var_std_types__event, var_READ_FAILED, var_716_3_fd, var_724_9_conn, 1, LOCAL(1),
  // push &events
  var_push, 2, var_550_1_events, LOCAL(1), 1, var_550_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(728, 29),
  POS(727, 27),
  POS(729, 27)
};

static TAB_NUM t_lambda_72[] = {
  1, // locals
  0, // parameters
  // typed_tuple(std_types::event CONNECT fd conn)
  var_typed_tuple, 4, var_std_types__event, var_CONNECT, var_716_3_fd, var_724_9_conn, 1, LOCAL(1),
  // push &events
  var_push, 2, var_550_1_events, LOCAL(1), 1, var_550_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(732, 29),
  POS(731, 27),
  POS(733, 27)
};

static TAB_NUM t_func_do_read[] = {
  4, // locals
  0, // parameters
  // read_jobs_of(self)(fd)
  var_read_jobs_of, 1, var_537_0_self, 1, LOCAL(1),
  // $do_close_and_max_length read_jobs_of(self)(fd)
  LOCAL(1), 1, var_716_3_fd, 1, LOCAL(3),
  // do_close_and_max_length $do_close $max_length
  LOCAL(3), 0, 2, var_739_25_do_close, var_739_35_max_length,
  // is_defined && max_length < 0x10'0000
  var_is_defined, 1, var_739_35_max_length, 1, LOCAL(1),
  // is_defined && max_length < 0x10'0000
  var_std__and, 2, LOCAL(1), lambda_73, 1, LOCAL(2),
  // $length
  var_if, 3, LOCAL(2), lambda_74, lambda_75, 1, LOCAL(4),
  // read! $buf fd length
  var_read, 2, var_716_3_fd, LOCAL(4), IO_CALL(1), var_745_7_buf,
  // is_an_error:
  var_is_an_error, 1, var_745_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_an_error, lambda_76, IO_TAIL_CALL,
  POS(738, 42),
  POS(738, 17),
  POS(739, 17),
  POS(742, 32),
  POS(742, 32),
  POS(740, 17),
  POS(745, 17),
  POS(747, 23),
  POS(746, 17)
};

static TAB_NUM t_lambda_73[] = {
  1, // locals
  0, // parameters
  // max_length < 0x10'0000
  var_std__less, 2, var_739_35_max_length, num_0x100000, 1, LOCAL(1),
  // max_length < 0x10'0000
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(742, 46),
  POS(742, 46)
};

static TAB_NUM t_lambda_74[] = {
  0, // locals
  0, // parameters
  //  max_length
  LET, 1, var_739_35_max_length, TAIL_CALL,
  POS(743, 23)
};

static TAB_NUM t_lambda_75[] = {
  0, // locals
  0, // parameters
  //  0x10'0000
  LET, 1, num_0x100000, TAIL_CALL,
  POS(744, 23)
};

static TAB_NUM t_lambda_buf_is_an_error[] = {
  1, // locals
  0, // parameters
  // typed_tuple(std_types::event READ_FAILED fd buf)
  var_typed_tuple, 4, var_std_types__event, var_READ_FAILED, var_716_3_fd, var_745_7_buf, 1, LOCAL(1),
  // push &events typed_tuple(std_types::event READ_FAILED fd buf)
  var_push, 2, var_550_1_events, LOCAL(1), 1, var_550_1_events,
  // if
  var_if, 3, var_739_25_do_close, lambda_do_close, var_next, IO_TAIL_CALL,
  POS(748, 34),
  POS(748, 21),
  POS(749, 21)
};

static TAB_NUM t_lambda_do_close[] = {
  0, // locals
  0, // parameters
  // close &self fd
  var_close, 2, var_537_0_self, var_716_3_fd, 1, var_537_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(751, 25),
  POS(752, 25)
};

static TAB_NUM t_lambda_76[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_745_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_empty, lambda_77, IO_TAIL_CALL,
  POS(756, 27),
  POS(755, 21)
};

static TAB_NUM t_lambda_buf_is_empty[] = {
  1, // locals
  0, // parameters
  // stop_reading_from &self fd
  var_stop_reading_from, 2, var_537_0_self, var_716_3_fd, 1, var_537_0_self,
  // typed_tuple(std_types::event CLOSED fd undefined)
  var_typed_tuple, 4, var_std_types__event, var_CLOSED, var_716_3_fd, var_undefined, 1, LOCAL(1),
  // push &events typed_tuple(std_types::event CLOSED fd undefined)
  var_push, 2, var_550_1_events, LOCAL(1), 1, var_550_1_events,
  // if
  var_if, 3, var_739_25_do_close, lambda_2_do_close, var_next, IO_TAIL_CALL,
  POS(757, 25),
  POS(758, 38),
  POS(758, 25),
  POS(759, 25)
};

static TAB_NUM t_lambda_2_do_close[] = {
  0, // locals
  0, // parameters
  // close &self fd
  var_close, 2, var_537_0_self, var_716_3_fd, 1, var_537_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(761, 29),
  POS(762, 29)
};

static TAB_NUM t_lambda_77[] = {
  1, // locals
  0, // parameters
  // typed_tuple(std_types::event READ fd buf)
  var_typed_tuple, 4, var_std_types__event, var_READ, var_716_3_fd, var_745_7_buf, 1, LOCAL(1),
  // push &events typed_tuple(std_types::event READ fd buf)
  var_push, 2, var_550_1_events, LOCAL(1), 1, var_550_1_events,
  // is_defined:
  var_is_defined, 1, var_739_35_max_length, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_max_length_is_defined, var_next, IO_TAIL_CALL,
  POS(765, 38),
  POS(765, 25),
  POS(767, 38),
  POS(766, 25)
};

static TAB_NUM t_lambda_max_length_is_defined[] = {
  2, // locals
  0, // parameters
  // length_of(buf) < max_length:
  var_length_of, 1, var_745_7_buf, 1, LOCAL(1),
  // length_of(buf) < max_length:
  var_std__less, 2, LOCAL(1), var_739_35_max_length, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_78, lambda_79, IO_TAIL_CALL,
  POS(769, 31),
  POS(769, 31),
  POS(768, 29)
};

static TAB_NUM t_lambda_78[] = {
  5, // locals
  0, // parameters
  // length_of(buf))
  var_length_of, 1, var_745_7_buf, 1, LOCAL(1),
  // max_length-length_of(buf))
  var_std__minus, 2, var_739_35_max_length, LOCAL(1), 1, LOCAL(2),
  // !self.read_jobs_of(fd)
  var_tuple, 2, var_true, LOCAL(2), 1, LOCAL(4),
  // read_jobs_of(fd)
  var_read_jobs_of, 1, var_537_0_self, 1, LOCAL(5),
  // read_jobs_of(fd)
  LOCAL(5), 2, var_716_3_fd, LOCAL(4), 1, LOCAL(5),
  // self.read_jobs_of(fd)
  LET, -1, var_537_0_self, var_read_jobs_of, LOCAL(5), var_537_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(771, 57),
  POS(771, 46),
  POS(770, 33),
  POS(770, 39),
  POS(770, 39),
  POS(770, 34),
  POS(772, 33)
};

static TAB_NUM t_lambda_79[] = {
  0, // locals
  0, // parameters
  // stop_reading_from &self fd
  var_stop_reading_from, 2, var_537_0_self, var_716_3_fd, 1, var_537_0_self,
  // if
  var_if, 3, var_739_25_do_close, lambda_3_do_close, var_next, IO_TAIL_CALL,
  POS(774, 33),
  POS(775, 33)
};

static TAB_NUM t_lambda_3_do_close[] = {
  0, // locals
  0, // parameters
  // close &self fd
  var_close, 2, var_537_0_self, var_716_3_fd, 1, var_537_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(777, 37),
  POS(778, 37)
};

static TAB_NUM t_lambda_80[] = {
  0, // locals
  0, // parameters
  // attempt_close_operations! &self
  func_attempt_close_operations, 1, var_537_0_self, IO_CALL(1), var_537_0_self,
  // attempt_exit! &self
  func_attempt_exit, 1, var_537_0_self, IO_CALL(1), var_537_0_self,
  // -> self events
  LET, 2, var_537_0_self, var_550_1_events, TAIL_CALL,
  POS(782, 13),
  POS(784, 13),
  POS(786, 13)
};

static TAB_NUM t_func_attempt_close_operations[] = {
  1, // locals
  1, // parameters
  var_788_28_io,
  // close_jobs_of(io)
  var_close_jobs_of, 1, var_788_28_io, 1, LOCAL(1),
  // for_each close_jobs_of(io)
  var_for_each, 3, LOCAL(1), lambda_81, lambda_82, IO_TAIL_CALL,
  POS(789, 12),
  POS(789, 3)
};

static TAB_NUM t_lambda_81[] = {
  3, // locals
  1, // parameters
  var_790_3_fd,
  // write_jobs_of(io)(fd).is_undefined:
  var_write_jobs_of, 1, var_788_28_io, 1, LOCAL(1),
  // write_jobs_of(io)(fd).is_undefined:
  LOCAL(1), 1, var_790_3_fd, 1, LOCAL(2),
  // is_undefined:
  var_is_undefined, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_write_jobs_ofiofd_is_undefined, var_next, IO_TAIL_CALL,
  POS(792, 9),
  POS(792, 9),
  POS(792, 31),
  POS(791, 7)
};

static TAB_NUM t_lambda_write_jobs_ofiofd_is_undefined[] = {
  2, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_790_3_fd, IO_CALL(0),
  // close_jobs_of(fd) false
  var_close_jobs_of, 1, var_788_28_io, 1, LOCAL(2),
  // close_jobs_of(fd) false
  LOCAL(2), 2, var_790_3_fd, var_false, 1, LOCAL(2),
  // io.close_jobs_of(fd) false
  LET, -1, var_788_28_io, var_close_jobs_of, LOCAL(2), var_788_28_io,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(793, 11),
  POS(794, 15),
  POS(794, 15),
  POS(794, 12),
  POS(795, 11)
};

static TAB_NUM t_lambda_82[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_788_28_io, TAIL_CALL,
  POS(797, 7)
};

static TAB_NUM t_func_attempt_exit[] = {
  2, // locals
  1, // parameters
  var_799_16_io,
  // exit_code_of(io).is_defined:
  var_exit_code_of, 1, var_799_16_io, 1, LOCAL(1),
  // is_defined:
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_exit_code_ofio_is_defined, lambda_86, IO_TAIL_CALL,
  POS(801, 5),
  POS(801, 22),
  POS(800, 3)
};

static TAB_NUM t_lambda_exit_code_ofio_is_defined[] = {
  1, // locals
  0, // parameters
  // resources_of(io)
  var_resources_of, 1, var_799_16_io, 1, LOCAL(1),
  // for_each resources_of(io)
  var_for_each, 3, LOCAL(1), lambda_83, lambda_84, IO_TAIL_CALL,
  POS(802, 16),
  POS(802, 7)
};

static TAB_NUM t_lambda_83[] = {
  1, // locals
  1, // parameters
  var_803_3_resource,
  // do_log_of(resource):
  var_do_log_of, 1, var_803_3_resource, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_do_log_ofresource, func_finalize_resource, IO_TAIL_CALL,
  POS(805, 13),
  POS(804, 11)
};

static TAB_NUM t_lambda_do_log_ofresource[] = {
  2, // locals
  0, // parameters
  // name_of(resource))"
  var_name_of, 1, var_803_3_resource, 1, LOCAL(1),
  // "finalizing @(name_of(resource))"
  var_std__string, 2, str_finalizing, LOCAL(1), 1, LOCAL(2),
  // log &io 3 "finalizing @(name_of(resource))"
  var_log, 3, var_799_16_io, num_3, LOCAL(2), 1, var_799_16_io,
  // finalize_resource!
  func_finalize_resource, 0, IO_TAIL_CALL,
  POS(806, 39),
  POS(806, 25),
  POS(806, 15),
  POS(807, 15)
};

static TAB_NUM t_func_finalize_resource[] = {
  0, // locals
  0, // parameters
  // finalize! resource &io
  var_finalize, 2, var_803_3_resource, var_799_16_io, IO_CALL(1), var_799_16_io,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(811, 13),
  POS(812, 13)
};

static TAB_NUM t_lambda_84[] = {
  1, // locals
  0, // parameters
  // io.resources_of empty_list
  LET, -1, var_799_16_io, var_resources_of, var_empty_list, var_799_16_io,
  // is_empty:
  var_is_empty, 1, var_799_16_io, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_io_is_empty, lambda_85, IO_TAIL_CALL,
  POS(814, 12),
  POS(816, 16),
  POS(815, 11)
};

static TAB_NUM t_lambda_io_is_empty[] = {
  1, // locals
  0, // parameters
  // exit_code_of(io)
  var_exit_code_of, 1, var_799_16_io, 1, LOCAL(1),
  // exit! exit_code_of(io)
  var_exit, 1, LOCAL(1), IO_TAIL_CALL,
  POS(817, 21),
  POS(817, 15)
};

static TAB_NUM t_lambda_85[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_799_16_io, TAIL_CALL,
  POS(818, 15)
};

static TAB_NUM t_lambda_86[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_799_16_io, TAIL_CALL,
  POS(819, 7)
};

static TAB_NUM t_func_std_types__io___handle_events[] = {
  1, // locals
  2, // parameters
  var_824_31_io,
  LOCAL(1), // 824_34_events
  // $new_events empty_list
  LET, 1, var_empty_list, 1, var_825_1_new_events,
  // $handlers handlers_of(io)
  var_handlers_of, 1, var_824_31_io, 1, var_826_1_handlers,
  // for_each events
  var_for_each, 3, LOCAL(1), lambda_87, lambda_93, TAIL_CALL,
  POS(825, 3),
  POS(826, 3),
  POS(827, 3)
};

static TAB_NUM t_lambda_87[] = {
  1, // locals
  1, // parameters
  var_828_3_event,
  // event $type $id $data
  var_828_3_event, 0, 3, var_829_7_type, var_829_13_id, var_829_17_data,
  // $id_handlers handlers(id)
  var_826_1_handlers, 1, var_829_13_id, 1, var_830_1_id_handlers,
  // is_undefined
  var_is_undefined, 1, var_830_1_id_handlers, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_keep_event, lambda_88, TAIL_CALL,
  POS(829, 7),
  POS(830, 7),
  POS(832, 21),
  POS(831, 7)
};

static TAB_NUM t_lambda_88[] = {
  1, // locals
  0, // parameters
  // $handler id_handlers(type)
  var_830_1_id_handlers, 1, var_829_7_type, 1, var_835_1_handler,
  // is_undefined
  var_is_undefined, 1, var_835_1_handler, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_keep_event, lambda_89, TAIL_CALL,
  POS(835, 11),
  POS(837, 21),
  POS(836, 11)
};

static TAB_NUM t_lambda_89[] = {
  2, // locals
  0, // parameters
  // $context undefined
  LET, 1, var_undefined, 1, var_840_1_context,
  // is_a_tuple &handler &context
  var_is_a_tuple, 1, var_835_1_handler, 1, LOCAL(1),
  // update_if handler.is_a_tuple &handler &context
  var_update_if, 4, LOCAL(1), var_835_1_handler, var_840_1_context, lambda_90, 2, var_835_1_handler, var_840_1_context,
  // parameter_count_of(handler) == 3:
  var_parameter_count_of, 1, var_835_1_handler, 1, LOCAL(1),
  // parameter_count_of(handler) == 3:
  var_std__equal, 2, LOCAL(1), num_3, 1, LOCAL(2),
  // if !io $new_event
  var_if, 3, LOCAL(2), lambda_91, lambda_92, 2, var_824_31_io, var_843_8_new_event,
  // is_defined:
  var_is_defined, 1, var_843_8_new_event, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_new_event_is_defined, var_next, TAIL_CALL,
  POS(840, 15),
  POS(841, 33),
  POS(841, 15),
  POS(844, 17),
  POS(844, 17),
  POS(843, 15),
  POS(849, 27),
  POS(848, 15)
};

static TAB_NUM t_lambda_90[] = {
  2, // locals
  0, // parameters
  // first(handler) second(handler)
  var_first, 1, var_835_1_handler, 1, LOCAL(1),
  // second(handler)
  var_second, 1, var_835_1_handler, 1, LOCAL(2),
  //  first(handler) second(handler)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(842, 20),
  POS(842, 35),
  POS(842, 19)
};

static TAB_NUM t_lambda_91[] = {
  0, // locals
  0, // parameters
  // handler io id data
  var_835_1_handler, 3, var_824_31_io, var_829_13_id, var_829_17_data, TAIL_CALL,
  POS(845, 19)
};

static TAB_NUM t_lambda_92[] = {
  0, // locals
  0, // parameters
  // handler io id data context
  var_835_1_handler, 4, var_824_31_io, var_829_13_id, var_829_17_data, var_840_1_context, TAIL_CALL,
  POS(847, 19)
};

static TAB_NUM t_lambda_2_new_event_is_defined[] = {
  1, // locals
  0, // parameters
  // is_a_list
  var_is_a_list, 1, var_843_8_new_event, 1, LOCAL(1),
  // update_if_not new_event.is_a_list
  var_update_if_not, 3, LOCAL(1), var_843_8_new_event, lambda_new_event, 1, var_843_8_new_event,
  // handle_events &io &new_event
  var_handle_events, 2, var_824_31_io, var_843_8_new_event, 2, var_824_31_io, var_843_8_new_event,
  // append &new_events new_event
  var_append, 2, var_825_1_new_events, var_843_8_new_event, 1, var_825_1_new_events,
  // next
  var_next, 0, TAIL_CALL,
  POS(850, 43),
  POS(850, 19),
  POS(852, 19),
  POS(853, 19),
  POS(854, 19)
};

static TAB_NUM t_lambda_new_event[] = {
  1, // locals
  0, // parameters
  // list(new_event)
  var_list, 1, var_843_8_new_event, 1, LOCAL(1),
  //  list(new_event)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(851, 35),
  POS(851, 34)
};

static TAB_NUM t_func_keep_event[] = {
  0, // locals
  0, // parameters
  // push &new_events event
  var_push, 2, var_825_1_new_events, var_828_3_event, 1, var_825_1_new_events,
  // next
  var_next, 0, TAIL_CALL,
  POS(858, 9),
  POS(859, 9)
};

static TAB_NUM t_lambda_93[] = {
  0, // locals
  0, // parameters
  //  io new_events
  LET, 2, var_824_31_io, var_825_1_new_events, TAIL_CALL,
  POS(860, 7)
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___stop_reading_from}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___print_to}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___write}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___cancel_write}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___close}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___join_process}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___start_injecting_window_change_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___stop_injecting_window_change_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___start_catching_signals}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___stop_catching_signals}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___set_timeout}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__initialize_logging}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_log_filename_is_defined}},
  {FLT_STRING_8, 2, {.str_8 = "w+"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___enable_logging}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___disable_logging}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___log}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_STRING_8, 1, {.str_8 = "["}},
  {FLT_STRING_8, 2, {.str_8 = "] "}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___register_handlers}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___deregister_handlers}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___deregister_all_handlers}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___register_resource}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___run}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___run_at}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___exit}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__log_unhandled_event}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_POSITIVE_INT64, 0, {.value = 5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_STRING_8, 16, {.str_8 = "unhandled event "}},
  {FLT_STRING_8, 3, {.str_8 = " - "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___initialize}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___get_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_set_timeout}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_timeout}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_exit_codes_ofself}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_start_jobs}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_new_event_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_new_event_is_a_list}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_write_jobs}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_wait_for_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_CHILD_CHANGED_STATE}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_watched_pids_ofselfpid}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_WINDOW_CHANGED_SIZE}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_catched_signals_ofselfsignal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_write_requests}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_STRING_8, 4, {.str_8 = "\033[8;"}},
  {FLT_STRING_8, 1, {.str_8 = ";"}},
  {FLT_STRING_8, 1, {.str_8 = "t"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_file_descriptors}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_bytes_written_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_attempt_reads}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_does_listen}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_conn_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_do_read}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x100000}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_buf_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_close}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_buf_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_do_close}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_max_length_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_do_close}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_attempt_close_operations}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_write_jobs_ofiofd_is_undefined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_attempt_exit}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_exit_code_ofio_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_log_ofresource}},
  {FLT_STRING_8, 11, {.str_8 = "finalizing "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_finalize_resource}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_io_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___handle_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_88}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_89}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_90}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_91}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_new_event_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_new_event}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_keep_event}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_93}}
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
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_reading_from\000", NULL,
    {.position = POS(253, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "print_to\000", NULL,
    {.position = POS(261, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(267, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(267, 37)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "write\000", NULL,
    {.position = POS(267, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "273_0_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "275_1_job\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(278, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(279, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(277, 5)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "cancel_write\000", NULL,
    {.position = POS(284, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "close\000", NULL,
    {.position = POS(293, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "join_process\000", NULL,
    {.position = POS(302, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_injecting_window_change_events\000", NULL,
    {.position = POS(310, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_injecting_window_change_events\000", NULL,
    {.position = POS(316, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_catching_signals\000", NULL,
    {.position = POS(322, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "324_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "327_1_catched_signals\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(331, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(328, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_catching_signals\000", NULL,
    {.position = POS(334, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "336_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "339_1_catched_signals\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "set_timeout\000", NULL,
    {.position = POS(346, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "348_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "349_0_timeout\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_number\000", NULL,
    {.position = POS(351, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(351, 45)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(351, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "352_1_current_timeout\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(354, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(354, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(354, 21)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "initialize_logging\000std", NULL,
    {.const_idx = -func_std__initialize_logging}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "360_0_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "361_0_log_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "362_0_log_filename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open\000", NULL,
    {.position = POS(366, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDERR_FILENO\000", NULL,
    {.position = POS(367, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dup2\000", NULL,
    {.position = POS(367, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "371_8_stdout_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDOUT_FILENO\000", NULL,
    {.position = POS(371, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "fstat\000", NULL,
    {.position = POS(371, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "372_8_stderr_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inode_number_of\000", NULL,
    {.position = POS(375, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(375, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(375, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "device_of\000", NULL,
    {.position = POS(376, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "log\000", NULL,
    {.position = POS(394, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "396_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "397_0_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "398_0_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(402, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if_not\000", NULL,
    {.position = POS(402, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(403, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(403, 59)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split_into_lines\000", NULL,
    {.position = POS(404, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "405_1_prefix\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(405, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "406_1_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(407, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(410, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spaces\000", NULL,
    {.position = POS(410, 23)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "register_handlers\000", NULL,
    {.position = POS(416, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "418_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "419_0_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "422_1_handlers\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "default_value\000", NULL,
    {.position = POS(422, 13)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deregister_handlers\000", NULL,
    {.position = POS(432, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "434_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "435_0_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "436_0_types\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "438_1_handlers\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deregister_all_handlers\000", NULL,
    {.position = POS(451, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "register_resource\000", NULL,
    {.position = POS(459, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "run\000", NULL,
    {.position = POS(468, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "run_at\000", NULL,
    {.position = POS(477, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "479_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "480_0_time\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "exit\000", NULL,
    {.position = POS(488, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(498, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "500_0_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(503, 7)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "log_unhandled_event\000std", NULL,
    {.const_idx = -func_std__log_unhandled_event}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "509_28_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "510_7_type\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "510_13_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_FAILED\000", NULL,
    {.position = POS(515, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_PENDING\000", NULL,
    {.position = POS(516, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_COMPLETED\000", NULL,
    {.position = POS(517, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(523, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(521, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "serialize\000", NULL,
    {.position = POS(526, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim_right\000", NULL,
    {.position = POS(526, 43)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "initialize\000", NULL,
    {.position = POS(528, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_time\000", NULL,
    {.position = POS(532, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "get_events\000", NULL,
    {.position = POS(535, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "537_0_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(543, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "550_1_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "551_1_want_to_write\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "553_15_t\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "554_1_start_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "556_1_first_job_time\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "557_1_remaining_timed_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "558_1_timeout\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "560_3_timed_job\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "561_33_time\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(584, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(584, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(588, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "601_32_new_event\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "apply\000", NULL,
    {.position = POS(601, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(605, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "629_1_read_descriptor_list\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(635, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "638_1_can_read\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "639_1_can_write\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pselect\000", NULL,
    {.position = POS(636, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "643_1_injected_into_stdin\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "644_1_write_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "646_3_signal\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CHILD_CHANGED_STATE\000", NULL,
    {.position = POS(648, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "649_7_pid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "649_12_status\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "wait\000", NULL,
    {.position = POS(649, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exitstatus\000", NULL,
    {.position = POS(650, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PROCESS_JOINED\000", NULL,
    {.position = POS(654, 61)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "typed_tuple\000", NULL,
    {.position = POS(654, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WINDOW_CHANGED_SIZE\000", NULL,
    {.position = POS(659, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGNAL\000", NULL,
    {.position = POS(665, 61)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDIN_FILENO\000", NULL,
    {.position = POS(675, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_terminal_size\000", NULL,
    {.position = POS(677, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ\000", NULL,
    {.position = POS(680, 55)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "688_3_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "689_1_job\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "690_8_bytes_written\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(692, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "716_3_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(717, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "type_of\000", NULL,
    {.position = POS(720, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SOCKET\000", NULL,
    {.position = POS(720, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_listening\000", NULL,
    {.position = POS(721, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "724_9_conn\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "accept\000", NULL,
    {.position = POS(724, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ_FAILED\000", NULL,
    {.position = POS(728, 58)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CONNECT\000", NULL,
    {.position = POS(732, 58)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "739_25_do_close\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "739_35_max_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "745_7_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read\000", NULL,
    {.position = POS(745, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CLOSED\000", NULL,
    {.position = POS(758, 67)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(717, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "788_28_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "790_3_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "799_16_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "803_3_resource\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finalize\000", NULL,
    {.position = POS(811, 13)}
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
    {.position = POS(824, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "824_31_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "825_1_new_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "826_1_handlers\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "828_3_event\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "829_7_type\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "829_13_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "829_17_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "830_1_id_handlers\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "835_1_handler\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "840_1_context\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_tuple\000", NULL,
    {.position = POS(841, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(842, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "second\000", NULL,
    {.position = POS(842, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(844, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "843_8_new_event\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(851, 35)}
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
  189, // number of constants
  249, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
