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
  tuple_563_0 = -13,
  func_std_types__io___start_reading_from = -14,
  func_std_types__io___stop_reading_from = -15,
  func_std_types__io___print_to = -16,
  func_std_types__io___write = -17,
  lambda_1 = -18,
  lambda_2 = -19,
  func_std_types__io___cancel_write = -20,
  func_std_types__io___close = -21,
  func_std_types__io___join_process = -22,
  func_std_types__io___start_injecting_window_change_events = -23,
  func_std_types__io___stop_injecting_window_change_events = -24,
  func_std_types__io___start_catching_signals = -25,
  lambda_3 = -26,
  lambda_4 = -27,
  func_std_types__io___stop_catching_signals = -28,
  lambda_5 = -29,
  lambda_6 = -30,
  func_std_types__io___set_timeout = -31,
  lambda_7 = -32,
  lambda_8 = -33,
  lambda_9 = -34,
  lambda_10 = -35,
  func_std__initialize_logging = -36,
  num_3 = -37,
  lambda_log_filename_is_defined = -38,
  str_w = -39,
  lambda_11 = -40,
  lambda_12 = -41,
  lambda_13 = -42,
  lambda_14 = -43,
  func_std_types__io___enable_logging = -44,
  num_1 = -45,
  func_std_types__io___disable_logging = -46,
  func_std_types__io___log = -47,
  lambda_15 = -48,
  lambda_16 = -49,
  chr_10 = -50,
  lambda_17 = -51,
  string_1 = -52,
  string_2 = -53,
  num_2 = -54,
  minus_num_1 = -55,
  lambda_18 = -56,
  lambda_19 = -57,
  lambda_20 = -58,
  func_std_types__io___register_handlers = -59,
  lambda_21 = -60,
  lambda_22 = -61,
  func_std_types__io___deregister_handlers = -62,
  lambda_23 = -63,
  lambda_24 = -64,
  lambda_25 = -65,
  lambda_26 = -66,
  func_std_types__io___deregister_all_handlers = -67,
  func_std_types__io___register_resource = -68,
  func_std_types__io___run = -69,
  func_std_types__io___run_at = -70,
  lambda_27 = -71,
  func_std_types__io___exit = -72,
  func_std_types__io___is_empty = -73,
  lambda_28 = -74,
  lambda_29 = -75,
  lambda_30 = -76,
  func_std__log_unhandled_event = -77,
  lambda_31 = -78,
  lambda_32 = -79,
  lambda_33 = -80,
  lambda_34 = -81,
  lambda_35 = -82,
  lambda_WRITE_PENDINGWRITE_COMPLETED = -83,
  num_4 = -84,
  lambda_36 = -85,
  lambda_37 = -86,
  str_unhandled_event = -87,
  string_3 = -88,
  func_std_types__io___initialize = -89,
  func_std_types__io___get_events = -90,
  lambda_38 = -91,
  lambda_39 = -92,
  lambda_40 = -93,
  lambda_41 = -94,
  lambda_42 = -95,
  lambda_43 = -96,
  func_set_timeout = -97,
  lambda_44 = -98,
  lambda_45 = -99,
  lambda_46 = -100,
  lambda_timeout = -101,
  lambda_47 = -102,
  lambda_exit_codes_ofself = -103,
  lambda_48 = -104,
  func_handle_start_jobs = -105,
  lambda_49 = -106,
  lambda_new_event_is_defined = -107,
  lambda_new_event_is_a_list = -108,
  lambda_50 = -109,
  func_handle_write_jobs = -110,
  lambda_51 = -111,
  func_wait_for_events = -112,
  lambda_52 = -113,
  lambda_53 = -114,
  lambda_54 = -115,
  lambda_CHILD_CHANGED_STATE = -116,
  lambda_watched_pids_ofselfpid = -117,
  lambda_55 = -118,
  lambda_WINDOW_CHANGED_SIZE = -119,
  lambda_56 = -120,
  lambda_catched_signals_ofselfsignal = -121,
  func_handle_write_requests = -122,
  lambda_57 = -123,
  lambda_58 = -124,
  lambda_59 = -125,
  string_4 = -126,
  string_5 = -127,
  str_t = -128,
  lambda_60 = -129,
  func_check_file_descriptors = -130,
  lambda_61 = -131,
  lambda_bytes_written_is_an_error = -132,
  lambda_62 = -133,
  lambda_63 = -134,
  lambda_64 = -135,
  func_attempt_reads = -136,
  lambda_65 = -137,
  lambda_66 = -138,
  lambda_67 = -139,
  lambda_68 = -140,
  lambda_does_listen = -141,
  lambda_conn_is_an_error = -142,
  lambda_69 = -143,
  func_do_read = -144,
  lambda_70 = -145,
  num_0x100000 = -146,
  lambda_71 = -147,
  lambda_72 = -148,
  lambda_buf_is_an_error = -149,
  lambda_do_close = -150,
  lambda_73 = -151,
  lambda_buf_is_empty = -152,
  lambda_2_do_close = -153,
  lambda_74 = -154,
  lambda_max_length_is_defined = -155,
  lambda_75 = -156,
  lambda_76 = -157,
  lambda_3_do_close = -158,
  lambda_77 = -159,
  func_attempt_close_operations = -160,
  lambda_78 = -161,
  lambda_write_jobs_ofiofd_is_undefined = -162,
  lambda_79 = -163,
  func_attempt_exit = -164,
  lambda_exit_code_ofio_is_defined = -165,
  lambda_80 = -166,
  lambda_81 = -167,
  lambda_io_is_empty = -168,
  lambda_82 = -169,
  lambda_83 = -170,
  func_std__handle_events = -171,
  lambda_84 = -172,
  lambda_85 = -173,
  lambda_86 = -174,
  lambda_2_new_event_is_defined = -175,
  lambda_new_event = -176,
  func_keep_event = -177,
  lambda_87 = -178
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
  var_empty_hash_table, // extern
  var_empty_hash_set, // extern
  var_empty_list, // extern
  var_empty_insert_order_table, // extern
  var_false, // extern
  var_undefined, // extern
  var_random_seed_of, // extern polymorphic
  var_step_no_of, // extern polymorphic
  var_std_types__event, // initialized compound
  var_tuple, // extern
  var_start_reading_from, // extern polymorphic
  var_true, // extern
  var_stop_reading_from, // extern polymorphic
  var_print_to, // extern polymorphic
  var_create_string, // extern
  var_to_utf8, // extern
  var_write, // extern polymorphic
  var_617_0_data, // dynamic
  var_619_1_job, // dynamic
  var_is_defined, // extern
  var_append, // extern
  var_if, // extern
  var_cancel_write, // extern polymorphic
  var_close, // extern polymorphic
  var_join_process, // extern polymorphic
  var_start_injecting_window_change_events, // extern polymorphic
  var_stop_injecting_window_change_events, // extern polymorphic
  var_start_catching_signals, // extern polymorphic
  var_708_0_self, // dynamic
  var_711_1_catched_signals, // dynamic
  var_next, // extern
  var_for_each, // extern
  var_stop_catching_signals, // extern polymorphic
  var_726_0_self, // dynamic
  var_729_1_catched_signals, // dynamic
  var_set_timeout, // extern polymorphic
  var_746_0_self, // dynamic
  var_747_0_timeout, // dynamic
  var_is_a_number, // extern
  var_current_time_of, // extern polymorphic
  var_std__plus, // extern
  var_update_if, // extern
  var_750_1_current_timeout, // dynamic
  var_is_undefined, // extern
  var_std__less, // extern
  var_std__or, // extern
  var_std__initialize_logging, // initialized
  var_758_0_io, // dynamic
  var_759_0_log_level, // dynamic
  var_760_0_log_filename, // dynamic
  var_open, // extern
  var_STDERR_FILENO, // extern
  var_dup2, // extern
  var_enable_logging, // extern polymorphic
  var_769_8_stdout_info, // dynamic
  var_STDOUT_FILENO, // extern
  var_fstat, // extern
  var_770_8_stderr_info, // dynamic
  var_inode_number_of, // extern
  var_std__equal, // extern
  var_std__not, // extern
  var_device_of, // extern
  var_disable_logging, // extern polymorphic
  var_log, // extern polymorphic
  var_812_0_self, // dynamic
  var_813_0_level, // dynamic
  var_814_0_message, // dynamic
  var_is_a_string, // extern
  var_update_if_not, // extern
  var_has_suffix, // extern
  var_push, // extern
  var_split_into_lines, // extern
  var_821_1_prefix, // dynamic
  var_std__string, // extern
  var_822_1_buf, // dynamic
  var_range, // extern
  var_length_of, // extern
  var_spaces, // extern
  var_register_handlers, // extern polymorphic
  var_840_0_self, // dynamic
  var_841_0_id, // dynamic
  var_844_1_handlers, // dynamic
  var_default_value, // extern
  var_deregister_handlers, // extern polymorphic
  var_862_0_self, // dynamic
  var_863_0_id, // dynamic
  var_864_0_types, // dynamic
  var_866_1_handlers, // dynamic
  var_deregister_all_handlers, // extern polymorphic
  var_register_resource, // extern polymorphic
  var_run, // extern polymorphic
  var_run_at, // extern polymorphic
  var_931_0_self, // dynamic
  var_932_0_time, // dynamic
  var_exit, // extern polymorphic
  var_is_empty, // extern polymorphic
  var_964_0_self, // dynamic
  var_std__and, // extern
  var_std__log_unhandled_event, // initialized
  var_973_28_io, // dynamic
  var_974_7_type, // dynamic
  var_974_13_fd, // dynamic
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
  var_1017_0_self, // dynamic
  var_inc, // extern
  var_1030_1_events, // dynamic
  var_1031_1_want_to_write, // dynamic
  var_1033_15_t, // dynamic
  var_1034_1_start_jobs, // dynamic
  var_1036_1_first_job_time, // dynamic
  var_1037_1_remaining_timed_jobs, // dynamic
  var_1038_1_timeout, // dynamic
  var_1040_3_timed_job, // dynamic
  var_1041_33_time, // dynamic
  var_std__minus, // extern
  var_max, // extern
  var_any_of, // extern
  var_1081_32_new_event, // dynamic
  var_apply, // extern
  var_is_a_list, // extern
  var_1102_1_read_descriptor_list, // dynamic
  var_1110_1_can_read, // dynamic
  var_1111_1_can_write, // dynamic
  var_pselect, // extern
  var_1115_1_injected_into_stdin, // dynamic
  var_1116_1_write_jobs, // dynamic
  var_1118_3_signal, // dynamic
  var_CHILD_CHANGED_STATE, // extern
  var_1121_7_pid, // dynamic
  var_1121_12_status, // dynamic
  var_wait, // extern
  var_exitstatus, // extern
  var_PROCESS_JOINED, // extern
  var_new, // extern
  var_WINDOW_CHANGED_SIZE, // extern
  var_SIGNAL, // extern
  var_STDIN_FILENO, // extern
  var_get_terminal_size, // extern
  var_READ, // extern
  var_1160_3_fd, // dynamic
  var_1161_1_job, // dynamic
  var_1162_8_bytes_written, // dynamic
  var_is_an_error, // extern
  var_1188_3_fd, // dynamic
  var_not, // extern
  var_type_of, // extern
  var_SOCKET, // extern
  var_is_listening, // extern
  var_1196_9_conn, // dynamic
  var_accept, // extern
  var_READ_FAILED, // extern
  var_CONNECT, // extern
  var_1211_25_do_close, // dynamic
  var_1211_35_max_length, // dynamic
  var_1217_7_buf, // dynamic
  var_read, // extern
  var_CLOSED, // extern
  var_if_not, // extern
  var_1260_28_io, // dynamic
  var_1262_3_fd, // dynamic
  var_1271_16_io, // dynamic
  var_finalize, // extern
  var_std__handle_events, // initialized
  var_1286_22_io, // dynamic
  var_1287_1_new_events, // dynamic
  var_1288_1_handlers, // dynamic
  var_1290_3_event, // dynamic
  var_1291_7_type, // dynamic
  var_1291_13_id, // dynamic
  var_1291_17_argument, // dynamic
  var_1292_1_id_handlers, // dynamic
  var_1297_1_handler, // dynamic
  var_1302_13_new_event, // dynamic
  var_list, // extern
  var_handle_events, // extern
  var__END
};


static TAB_NUM t_func_std_types__io___start_reading_from[] = {
  7, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(4), // 577_0_self
  MANDATORY_PARAMETER, LOCAL(5), // 578_0_fd
  var_true, LOCAL(6), // 579_0_do_close
  var_undefined, LOCAL(7), // 580_0_max_length
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
  POS(582, 3),
  POS(582, 9),
  POS(582, 9),
  POS(582, 4),
  POS(583, 3)
};

static TAB_NUM t_func_std_types__io___stop_reading_from[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 593_0_self
  LOCAL(4), // 594_0_fd
  // read_jobs_of(fd) undefined
  var_read_jobs_of, 1, LOCAL(3), 1, LOCAL(2),
  // read_jobs_of(fd) undefined
  LOCAL(2), 2, LOCAL(4), var_undefined, 1, LOCAL(2),
  // self.read_jobs_of(fd) undefined
  LET, -1, LOCAL(3), var_read_jobs_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(596, 9),
  POS(596, 9),
  POS(596, 4),
  POS(597, 3)
};

static TAB_NUM t_func_std_types__io___print_to[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 601_0_self
  MANDATORY_PARAMETER, LOCAL(4), // 602_0_fd
  REST_PARAMETER, LOCAL(5), // 603_0_args
  // create_string(args).to_utf8
  var_create_string, 1, LOCAL(5), 1, LOCAL(1),
  // to_utf8
  var_to_utf8, 1, LOCAL(1), 1, LOCAL(2),
  // write self fd create_string(args).to_utf8
  var_write, 3, LOCAL(3), LOCAL(4), LOCAL(2), TAIL_CALL,
  POS(605, 17),
  POS(605, 37),
  POS(605, 3)
};

static TAB_NUM t_func_std_types__io___write[] = {
  4, // locals
  3, // parameters
  LOCAL(3), // 615_0_self
  LOCAL(4), // 616_0_fd
  var_617_0_data,
  // write_jobs_of(self)(fd)
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(1),
  // $job write_jobs_of(self)(fd)
  LOCAL(1), 1, LOCAL(4), 1, var_619_1_job,
  // is_defined
  var_is_defined, 1, var_619_1_job, 1, LOCAL(1),
  // !job
  var_if, 3, LOCAL(1), lambda_1, lambda_2, 1, var_619_1_job,
  // write_jobs_of(fd) job
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(2),
  // write_jobs_of(fd) job
  LOCAL(2), 2, LOCAL(4), var_619_1_job, 1, LOCAL(2),
  // self.write_jobs_of(fd) job
  LET, -1, LOCAL(3), var_write_jobs_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(619, 8),
  POS(619, 3),
  POS(622, 11),
  POS(620, 3),
  POS(625, 9),
  POS(625, 9),
  POS(625, 4),
  POS(626, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // append(job data)
  var_append, 2, var_619_1_job, var_617_0_data, 1, LOCAL(1),
  //  append(job data)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(623, 10),
  POS(623, 9)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_617_0_data, TAIL_CALL,
  POS(624, 9)
};

static TAB_NUM t_func_std_types__io___cancel_write[] = {
  5, // locals
  2, // parameters
  LOCAL(3), // 636_0_self
  LOCAL(4), // 637_0_fd
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
  POS(639, 19),
  POS(639, 3),
  POS(640, 9),
  POS(640, 9),
  POS(640, 4),
  POS(641, 3)
};

static TAB_NUM t_func_std_types__io___close[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 655_0_self
  LOCAL(4), // 656_0_fd
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
  POS(658, 3),
  POS(659, 9),
  POS(659, 9),
  POS(659, 4),
  POS(660, 3)
};

static TAB_NUM t_func_std_types__io___join_process[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 670_0_self
  LOCAL(4), // 671_0_pid
  // watched_pids_of(pid) true
  var_watched_pids_of, 1, LOCAL(3), 1, LOCAL(2),
  // watched_pids_of(pid) true
  LOCAL(2), 2, LOCAL(4), var_true, 1, LOCAL(2),
  // self.watched_pids_of(pid) true
  LET, -1, LOCAL(3), var_watched_pids_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(673, 9),
  POS(673, 9),
  POS(673, 4),
  POS(674, 3)
};

static TAB_NUM t_func_std_types__io___start_injecting_window_change_events[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 684_0_self
  // .do_inject_window_change_events true)
  LET, -1, LOCAL(2), var_do_inject_window_change_events, var_true, LOCAL(1),
  // -> self(.do_inject_window_change_events true)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(686, 11),
  POS(686, 3)
};

static TAB_NUM t_func_std_types__io___stop_injecting_window_change_events[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 696_0_self
  // .do_inject_window_change_events false)
  LET, -1, LOCAL(2), var_do_inject_window_change_events, var_false, LOCAL(1),
  // -> self(.do_inject_window_change_events false)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(698, 11),
  POS(698, 3)
};

static TAB_NUM t_func_std_types__io___start_catching_signals[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_708_0_self,
  REST_PARAMETER, LOCAL(1), // 709_0_signals
  // $catched_signals catched_signals_of(self)
  var_catched_signals_of, 1, var_708_0_self, 1, var_711_1_catched_signals,
  // for_each signals
  var_for_each, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(711, 3),
  POS(712, 3)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 713_3_signal
  // catched_signals(signal) true
  var_711_1_catched_signals, 2, LOCAL(1), var_true, 1, var_711_1_catched_signals,
  // next
  var_next, 0, TAIL_CALL,
  POS(714, 8),
  POS(715, 7)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // .catched_signals_of catched_signals)
  LET, -1, var_708_0_self, var_catched_signals_of, var_711_1_catched_signals, LOCAL(1),
  //  self(.catched_signals_of catched_signals)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(716, 13),
  POS(716, 7)
};

static TAB_NUM t_func_std_types__io___stop_catching_signals[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_726_0_self,
  REST_PARAMETER, LOCAL(1), // 727_0_signals
  // $catched_signals catched_signals_of(self)
  var_catched_signals_of, 1, var_726_0_self, 1, var_729_1_catched_signals,
  // for_each signals
  var_for_each, 3, LOCAL(1), lambda_5, lambda_6, TAIL_CALL,
  POS(729, 3),
  POS(730, 3)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 731_3_signal
  // catched_signals(signal) false
  var_729_1_catched_signals, 2, LOCAL(1), var_false, 1, var_729_1_catched_signals,
  // next
  var_next, 0, TAIL_CALL,
  POS(732, 8),
  POS(733, 7)
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // .catched_signals_of catched_signals)
  LET, -1, var_726_0_self, var_catched_signals_of, var_729_1_catched_signals, LOCAL(1),
  //  self(.catched_signals_of catched_signals)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(734, 13),
  POS(734, 7)
};

static TAB_NUM t_func_std_types__io___set_timeout[] = {
  2, // locals
  2, // parameters
  var_746_0_self,
  var_747_0_timeout,
  // is_a_number &timeout -> current_time_of(self)+timeout
  var_is_a_number, 1, var_747_0_timeout, 1, LOCAL(1),
  // update_if timeout.is_a_number &timeout -> current_time_of(self)+timeout
  var_update_if, 3, LOCAL(1), var_747_0_timeout, lambda_7, 1, var_747_0_timeout,
  // $current_timeout timeout_of(self)
  var_timeout_of, 1, var_746_0_self, 1, var_750_1_current_timeout,
  // is_undefined || timeout < current_timeout
  var_is_undefined, 1, var_750_1_current_timeout, 1, LOCAL(1),
  // is_undefined || timeout < current_timeout
  var_std__or, 2, LOCAL(1), lambda_8, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_9, lambda_10, TAIL_CALL,
  POS(749, 21),
  POS(749, 3),
  POS(750, 3),
  POS(752, 21),
  POS(752, 21),
  POS(751, 3)
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  0, // parameters
  // current_time_of(self)+timeout
  var_current_time_of, 1, var_746_0_self, 1, LOCAL(1),
  // current_time_of(self)+timeout
  var_std__plus, 2, LOCAL(1), var_747_0_timeout, 1, LOCAL(2),
  //  current_time_of(self)+timeout
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(749, 45),
  POS(749, 45),
  POS(749, 44)
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // timeout < current_timeout
  var_std__less, 2, var_747_0_timeout, var_750_1_current_timeout, 1, LOCAL(1),
  // timeout < current_timeout
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(752, 37),
  POS(752, 37)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // .timeout_of timeout)
  LET, -1, var_746_0_self, var_timeout_of, var_747_0_timeout, LOCAL(1),
  //  self(.timeout_of timeout)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(753, 13),
  POS(753, 7)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_746_0_self, TAIL_CALL,
  POS(754, 7)
};

static TAB_NUM t_func_std__initialize_logging[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_758_0_io,
  num_3, var_759_0_log_level,
  var_undefined, var_760_0_log_filename,
  // is_defined:
  var_is_defined, 1, var_760_0_log_filename, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_log_filename_is_defined, lambda_11, IO_TAIL_CALL,
  POS(763, 18),
  POS(762, 3)
};

static TAB_NUM t_lambda_log_filename_is_defined[] = {
  1, // locals
  0, // parameters
  // open! $log_fd log_filename "w+"
  var_open, 2, var_760_0_log_filename, str_w, IO_CALL(1), LOCAL(1),
  // dup2! log_fd STDERR_FILENO
  var_dup2, 2, LOCAL(1), var_STDERR_FILENO, IO_CALL(0),
  // close! log_fd
  var_close, 1, LOCAL(1), IO_CALL(0),
  // enable_logging io log_level
  var_enable_logging, 2, var_758_0_io, var_759_0_log_level, TAIL_CALL,
  POS(764, 7),
  POS(765, 7),
  POS(766, 7),
  POS(767, 7)
};

static TAB_NUM t_lambda_11[] = {
  5, // locals
  0, // parameters
  // fstat! $stdout_info STDOUT_FILENO
  var_fstat, 1, var_STDOUT_FILENO, IO_CALL(1), var_769_8_stdout_info,
  // fstat! $stderr_info STDERR_FILENO
  var_fstat, 1, var_STDERR_FILENO, IO_CALL(1), var_770_8_stderr_info,
  // inode_number_of(stderr_info) != inode_number_of(stdout_info)
  var_inode_number_of, 1, var_770_8_stderr_info, 1, LOCAL(1),
  // inode_number_of(stdout_info)
  var_inode_number_of, 1, var_769_8_stdout_info, 1, LOCAL(2),
  // inode_number_of(stderr_info) != inode_number_of(stdout_info)
  var_std__equal, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // inode_number_of(stderr_info) != inode_number_of(stdout_info)
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // 
  var_std__or, 2, LOCAL(4), lambda_12, 1, LOCAL(5),
  // if
  var_if, 3, LOCAL(5), lambda_13, lambda_14, TAIL_CALL,
  POS(769, 7),
  POS(770, 7),
  POS(773, 11),
  POS(773, 43),
  POS(773, 11),
  POS(773, 11),
  POS(772, 11),
  POS(771, 7)
};

static TAB_NUM t_lambda_12[] = {
  4, // locals
  0, // parameters
  // device_of(stderr_info) != device_of(stdout_info)
  var_device_of, 1, var_770_8_stderr_info, 1, LOCAL(1),
  // device_of(stdout_info)
  var_device_of, 1, var_769_8_stdout_info, 1, LOCAL(2),
  // device_of(stderr_info) != device_of(stdout_info)
  var_std__equal, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // device_of(stderr_info) != device_of(stdout_info)
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // device_of(stderr_info) != device_of(stdout_info)
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(774, 11),
  POS(774, 37),
  POS(774, 11),
  POS(774, 11),
  POS(774, 11)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  // enable_logging io log_level
  var_enable_logging, 2, var_758_0_io, var_759_0_log_level, TAIL_CALL,
  POS(776, 11)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_758_0_io, TAIL_CALL,
  POS(777, 11)
};

static TAB_NUM t_func_std_types__io___enable_logging[] = {
  3, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 787_0_self
  num_1, LOCAL(3), // 788_0_level
  // .log_level_of level)
  LET, -1, LOCAL(2), var_log_level_of, LOCAL(3), LOCAL(1),
  // -> self(.log_level_of level)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(790, 11),
  POS(790, 3)
};

static TAB_NUM t_func_std_types__io___disable_logging[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 800_0_self
  // .log_level_of 0)
  LET, -1, LOCAL(2), var_log_level_of, num_0, LOCAL(1),
  // -> self(.log_level_of 0)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(802, 11),
  POS(802, 3)
};

static TAB_NUM t_func_std_types__io___log[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_812_0_self,
  num_1, var_813_0_level,
  MANDATORY_PARAMETER, var_814_0_message,
  // log_level_of(self):
  var_log_level_of, 1, var_812_0_self, 1, LOCAL(1),
  // log_level_of(self):
  var_std__less, 2, LOCAL(1), var_813_0_level, 1, LOCAL(2),
  // log_level_of(self):
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_15, lambda_20, TAIL_CALL,
  POS(817, 14),
  POS(817, 14),
  POS(817, 14),
  POS(816, 3)
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // is_a_string &message -> message()
  var_is_a_string, 1, var_814_0_message, 1, LOCAL(1),
  // update_if_not message.is_a_string &message -> message()
  var_update_if_not, 3, LOCAL(1), var_814_0_message, lambda_16, 1, var_814_0_message,
  // message .has_suffix. '@nl;' &message: push message '@nl;'
  var_has_suffix, 2, var_814_0_message, chr_10, 1, LOCAL(1),
  // update_if_not message .has_suffix. '@nl;' &message: push message '@nl;'
  var_update_if_not, 3, LOCAL(1), var_814_0_message, lambda_17, 1, var_814_0_message,
  // $lines split_into_lines(message)
  var_split_into_lines, 1, var_814_0_message, 1, LOCAL(2),
  // $prefix "[@(level)] "
  var_std__string, 3, string_1, var_813_0_level, string_2, 1, var_821_1_prefix,
  // lines(1))
  LOCAL(2), 1, num_1, 1, LOCAL(1),
  // $buf append(prefix lines(1))
  var_append, 2, var_821_1_prefix, LOCAL(1), 1, var_822_1_buf,
  // range &lines 2 -1
  var_range, 3, LOCAL(2), num_2, minus_num_1, 1, LOCAL(2),
  // for_each lines
  var_for_each, 3, LOCAL(2), lambda_18, lambda_19, TAIL_CALL,
  POS(818, 29),
  POS(818, 7),
  POS(819, 21),
  POS(819, 7),
  POS(820, 7),
  POS(821, 7),
  POS(822, 26),
  POS(822, 7),
  POS(823, 7),
  POS(824, 7)
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // message()
  var_814_0_message, 0, 1, LOCAL(1),
  //  message()
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(818, 53),
  POS(818, 52)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // push message '@nl;'
  var_push, 2, var_814_0_message, chr_10, TAIL_CALL,
  POS(819, 59)
};

static TAB_NUM t_lambda_18[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 825_3_line
  // length_of(prefix)) line
  var_length_of, 1, var_821_1_prefix, 1, LOCAL(1),
  // spaces(length_of(prefix)) line
  var_spaces, 1, LOCAL(1), 1, LOCAL(2),
  // append &buf spaces(length_of(prefix)) line
  var_append, 3, var_822_1_buf, LOCAL(2), LOCAL(3), 1, var_822_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(826, 30),
  POS(826, 23),
  POS(826, 11),
  POS(827, 11)
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // to_utf8
  var_to_utf8, 1, var_822_1_buf, 1, LOCAL(1),
  // write self STDERR_FILENO buf.to_utf8
  var_write, 3, var_812_0_self, var_STDERR_FILENO, LOCAL(1), TAIL_CALL,
  POS(829, 40),
  POS(829, 11)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_812_0_self, TAIL_CALL,
  POS(830, 7)
};

static TAB_NUM t_func_std_types__io___register_handlers[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_840_0_self,
  MANDATORY_PARAMETER, var_841_0_id,
  REST_PARAMETER, LOCAL(3), // 842_0_type_handlers
  // handlers_of(self)(id) empty_hash_table)
  var_handlers_of, 1, var_840_0_self, 1, LOCAL(1),
  // handlers_of(self)(id) empty_hash_table)
  LOCAL(1), 1, var_841_0_id, 1, LOCAL(2),
  // $handlers default_value(handlers_of(self)(id) empty_hash_table)
  var_default_value, 2, LOCAL(2), var_empty_hash_table, 1, var_844_1_handlers,
  // for_each type_handlers
  var_for_each, 3, LOCAL(3), lambda_21, lambda_22, TAIL_CALL,
  POS(844, 27),
  POS(844, 27),
  POS(844, 3),
  POS(845, 3)
};

static TAB_NUM t_lambda_21[] = {
  3, // locals
  1, // parameters
  LOCAL(1), // 846_3_type_handler
  // type_handler $type $handler
  LOCAL(1), 0, 2, LOCAL(2), LOCAL(3),
  // handlers(type) handler
  var_844_1_handlers, 2, LOCAL(2), LOCAL(3), 1, var_844_1_handlers,
  // next
  var_next, 0, TAIL_CALL,
  POS(847, 7),
  POS(848, 8),
  POS(849, 7)
};

static TAB_NUM t_lambda_22[] = {
  2, // locals
  0, // parameters
  // handlers_of(id) handlers
  var_handlers_of, 1, var_840_0_self, 1, LOCAL(2),
  // handlers_of(id) handlers
  LOCAL(2), 2, var_841_0_id, var_844_1_handlers, 1, LOCAL(2),
  // self.handlers_of(id) handlers
  LET, -1, var_840_0_self, var_handlers_of, LOCAL(2), var_840_0_self,
  // -> self
  LET, 1, var_840_0_self, TAIL_CALL,
  POS(851, 13),
  POS(851, 13),
  POS(851, 8),
  POS(852, 7)
};

static TAB_NUM t_func_std_types__io___deregister_handlers[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_862_0_self,
  MANDATORY_PARAMETER, var_863_0_id,
  REST_PARAMETER, var_864_0_types,
  // handlers_of(self)(id)
  var_handlers_of, 1, var_862_0_self, 1, LOCAL(1),
  // $handlers handlers_of(self)(id)
  LOCAL(1), 1, var_863_0_id, 1, var_866_1_handlers,
  // is_undefined
  var_is_undefined, 1, var_866_1_handlers, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_23, lambda_24, TAIL_CALL,
  POS(866, 13),
  POS(866, 3),
  POS(868, 14),
  POS(867, 3)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_862_0_self, TAIL_CALL,
  POS(869, 7)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  // for_each types
  var_for_each, 3, var_864_0_types, lambda_25, lambda_26, TAIL_CALL,
  POS(871, 7)
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 872_3_type
  // handlers(type) undefined
  var_866_1_handlers, 2, LOCAL(1), var_undefined, 1, var_866_1_handlers,
  // next
  var_next, 0, TAIL_CALL,
  POS(873, 12),
  POS(874, 11)
};

static TAB_NUM t_lambda_26[] = {
  2, // locals
  0, // parameters
  // handlers_of(id) handlers
  var_handlers_of, 1, var_862_0_self, 1, LOCAL(2),
  // handlers_of(id) handlers
  LOCAL(2), 2, var_863_0_id, var_866_1_handlers, 1, LOCAL(2),
  // self.handlers_of(id) handlers
  LET, -1, var_862_0_self, var_handlers_of, LOCAL(2), var_862_0_self,
  // -> self
  LET, 1, var_862_0_self, TAIL_CALL,
  POS(876, 17),
  POS(876, 17),
  POS(876, 12),
  POS(877, 11)
};

static TAB_NUM t_func_std_types__io___deregister_all_handlers[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 887_0_self
  LOCAL(4), // 888_0_id
  // handlers_of(id) empty_hash_table
  var_handlers_of, 1, LOCAL(3), 1, LOCAL(2),
  // handlers_of(id) empty_hash_table
  LOCAL(2), 2, LOCAL(4), var_empty_hash_table, 1, LOCAL(2),
  // self.handlers_of(id) empty_hash_table
  LET, -1, LOCAL(3), var_handlers_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(890, 9),
  POS(890, 9),
  POS(890, 4),
  POS(891, 3)
};

static TAB_NUM t_func_std_types__io___register_resource[] = {
  5, // locals
  3, // parameters
  LOCAL(3), // 901_0_self
  LOCAL(4), // 902_0_key
  LOCAL(5), // 903_0_resource
  // resources_of(key) resource
  var_resources_of, 1, LOCAL(3), 1, LOCAL(2),
  // resources_of(key) resource
  LOCAL(2), 2, LOCAL(4), LOCAL(5), 1, LOCAL(2),
  // self.resources_of(key) resource
  LET, -1, LOCAL(3), var_resources_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(905, 9),
  POS(905, 9),
  POS(905, 4),
  POS(906, 3)
};

static TAB_NUM t_func_std_types__io___run[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 916_0_self
  MANDATORY_PARAMETER, LOCAL(4), // 917_0_command
  REST_PARAMETER, LOCAL(5), // 918_0_arguments
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
  POS(920, 14),
  POS(920, 28),
  POS(920, 3),
  POS(920, 9),
  POS(921, 3)
};

static TAB_NUM t_func_std_types__io___run_at[] = {
  4, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_931_0_self,
  MANDATORY_PARAMETER, var_932_0_time,
  MANDATORY_PARAMETER, LOCAL(3), // 933_0_command
  REST_PARAMETER, LOCAL(4), // 934_0_arguments
  // is_a_number &time -> current_time_of(self)+time
  var_is_a_number, 1, var_932_0_time, 1, LOCAL(1),
  // update_if time.is_a_number &time -> current_time_of(self)+time
  var_update_if, 3, LOCAL(1), var_932_0_time, lambda_27, 1, var_932_0_time,
  // timed_jobs_of tuple(command arguments time)
  var_timed_jobs_of, 1, var_931_0_self, 1, LOCAL(1),
  // tuple(command arguments time)
  var_tuple, 3, LOCAL(3), LOCAL(4), var_932_0_time, 1, LOCAL(2),
  // push &self.timed_jobs_of tuple(command arguments time)
  var_push, 2, LOCAL(1), LOCAL(2), 1, LOCAL(1),
  // self.timed_jobs_of tuple(command arguments time)
  LET, -1, var_931_0_self, var_timed_jobs_of, LOCAL(1), var_931_0_self,
  // -> self
  LET, 1, var_931_0_self, TAIL_CALL,
  POS(936, 18),
  POS(936, 3),
  POS(937, 14),
  POS(937, 28),
  POS(937, 3),
  POS(937, 9),
  POS(938, 3)
};

static TAB_NUM t_lambda_27[] = {
  2, // locals
  0, // parameters
  // current_time_of(self)+time
  var_current_time_of, 1, var_931_0_self, 1, LOCAL(1),
  // current_time_of(self)+time
  var_std__plus, 2, LOCAL(1), var_932_0_time, 1, LOCAL(2),
  //  current_time_of(self)+time
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(936, 39),
  POS(936, 39),
  POS(936, 38)
};

static TAB_NUM t_func_std_types__io___exit[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 948_0_self
  LOCAL(3), // 949_0_exit_code
  // self
  LET, -2, LOCAL(2), var_exit_code_of, LOCAL(3), var_read_jobs_of, var_empty_hash_table, LOCAL(1),
  // ->
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(952, 5),
  POS(951, 3)
};

static TAB_NUM t_func_std_types__io___is_empty[] = {
  3, // locals
  1, // parameters
  var_964_0_self,
  // read_jobs_of(self).is_empty
  var_read_jobs_of, 1, var_964_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_28, 1, LOCAL(3),
  // ->
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(968, 7),
  POS(968, 26),
  POS(967, 7),
  POS(966, 3)
};

static TAB_NUM t_lambda_28[] = {
  3, // locals
  0, // parameters
  // write_jobs_of(self).is_empty
  var_write_jobs_of, 1, var_964_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_29, 1, LOCAL(3),
  // write_jobs_of(self).is_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(969, 7),
  POS(969, 27),
  POS(967, 7),
  POS(969, 7)
};

static TAB_NUM t_lambda_29[] = {
  3, // locals
  0, // parameters
  // close_jobs_of(self).is_empty
  var_close_jobs_of, 1, var_964_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_30, 1, LOCAL(3),
  // close_jobs_of(self).is_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(970, 7),
  POS(970, 27),
  POS(967, 7),
  POS(970, 7)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(self).is_empty
  var_watched_pids_of, 1, var_964_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // watched_pids_of(self).is_empty
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(971, 7),
  POS(971, 29),
  POS(971, 7)
};

static TAB_NUM t_func_std__log_unhandled_event[] = {
  4, // locals
  2, // parameters
  var_973_28_io,
  LOCAL(4), // 973_31_event
  // event $type $fd $_argument
  LOCAL(4), 0, 3, var_974_7_type, var_974_13_fd, LOCAL(1),
  // type == WRITE_FAILED
  var_std__equal, 2, var_974_7_type, var_WRITE_FAILED, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_31, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_33, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_34, lambda_35, TAIL_CALL,
  POS(974, 3),
  POS(978, 9),
  POS(977, 9),
  POS(976, 7),
  POS(975, 3)
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  0, // parameters
  // type == WRITE_PENDING
  var_std__equal, 2, var_974_7_type, var_WRITE_PENDING, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_32, 1, LOCAL(2),
  // type == WRITE_PENDING
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(979, 9),
  POS(977, 9),
  POS(979, 9)
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // type == WRITE_COMPLETED
  var_std__equal, 2, var_974_7_type, var_WRITE_COMPLETED, 1, LOCAL(1),
  // type == WRITE_COMPLETED
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(980, 9),
  POS(980, 9)
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // fd == STDERR_FILENO
  var_std__equal, 2, var_974_13_fd, var_STDERR_FILENO, 1, LOCAL(1),
  // fd == STDERR_FILENO
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(981, 7),
  POS(981, 7)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  //  io # prevent recursive logging
  LET, 1, var_973_28_io, TAIL_CALL,
  POS(982, 7)
};

static TAB_NUM t_lambda_35[] = {
  2, // locals
  0, // parameters
  // WRITE_PENDING,WRITE_COMPLETED -> 4
  var_std__sequence, 2, var_WRITE_PENDING, var_WRITE_COMPLETED, 1, LOCAL(1),
  // $log_level
  var_case, 4, var_974_7_type, LOCAL(1), lambda_WRITE_PENDINGWRITE_COMPLETED, lambda_36, 1, LOCAL(2),
  // log io log_level -> "
  var_log, 3, var_973_28_io, LOCAL(2), lambda_37, TAIL_CALL,
  POS(987, 11),
  POS(984, 7),
  POS(989, 7)
};

static TAB_NUM t_lambda_WRITE_PENDINGWRITE_COMPLETED[] = {
  0, // locals
  0, // parameters
  //  4
  LET, 1, num_4, TAIL_CALL,
  POS(987, 43)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  2
  LET, 1, num_2, TAIL_CALL,
  POS(988, 13)
};

static TAB_NUM t_lambda_37[] = {
  4, // locals
  0, // parameters
  // serialize(type).trim_right) - @(serialize(fd))@
  var_serialize, 1, var_974_7_type, 1, LOCAL(1),
  // trim_right) - @(serialize(fd))@
  var_trim_right, 1, LOCAL(1), 1, LOCAL(2),
  // serialize(fd))@
  var_serialize, 1, var_974_13_fd, 1, LOCAL(3),
  // "
  var_std__string, 4, str_unhandled_event, LOCAL(2), string_3, LOCAL(3), 1, LOCAL(4),
  //  "
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(990, 27),
  POS(990, 43),
  POS(990, 59),
  POS(989, 27),
  POS(989, 26)
};

static TAB_NUM t_func_std_types__io___initialize[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 1002_0_self
  // current_time! $t
  var_current_time, 0, IO_CALL(1), LOCAL(3),
  // .current_time_of t)
  LET, -1, LOCAL(2), var_current_time_of, LOCAL(3), LOCAL(1),
  // -> self(.current_time_of t)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1004, 3),
  POS(1005, 11),
  POS(1005, 3)
};

static TAB_NUM t_func_std_types__io___get_events[] = {
  1, // locals
  1, // parameters
  var_1017_0_self,
  // step_no_of
  var_step_no_of, 1, var_1017_0_self, 1, LOCAL(1),
  // inc &self.step_no_of
  var_inc, 1, LOCAL(1), 1, LOCAL(1),
  // self.step_no_of
  LET, -1, var_1017_0_self, var_step_no_of, LOCAL(1), var_1017_0_self,
  // attempt_close_operations! &self
  func_attempt_close_operations, 1, var_1017_0_self, IO_CALL(1), var_1017_0_self,
  // attempt_exit! &self
  func_attempt_exit, 1, var_1017_0_self, IO_CALL(1), var_1017_0_self,
  // $events empty_list
  LET, 1, var_empty_list, 1, var_1030_1_events,
  // $want_to_write empty_list
  LET, 1, var_empty_list, 1, var_1031_1_want_to_write,
  // current_time! $t
  var_current_time, 0, IO_CALL(1), var_1033_15_t,
  // $start_jobs start_jobs_of(self)
  var_start_jobs_of, 1, var_1017_0_self, 1, var_1034_1_start_jobs,
  // self.start_jobs_of empty_list
  LET, -1, var_1017_0_self, var_start_jobs_of, var_empty_list, var_1017_0_self,
  // $first_job_time undefined
  LET, 1, var_undefined, 1, var_1036_1_first_job_time,
  // $remaining_timed_jobs empty_list
  LET, 1, var_empty_list, 1, var_1037_1_remaining_timed_jobs,
  // $timeout undefined
  LET, 1, var_undefined, 1, var_1038_1_timeout,
  // timed_jobs_of(self)
  var_timed_jobs_of, 1, var_1017_0_self, 1, LOCAL(1),
  // for_each timed_jobs_of(self)
  var_for_each, 3, LOCAL(1), lambda_38, lambda_43, IO_TAIL_CALL,
  POS(1023, 13),
  POS(1023, 3),
  POS(1023, 8),
  POS(1025, 3),
  POS(1027, 3),
  POS(1030, 3),
  POS(1031, 3),
  POS(1033, 3),
  POS(1034, 3),
  POS(1035, 4),
  POS(1036, 3),
  POS(1037, 3),
  POS(1038, 3),
  POS(1039, 12),
  POS(1039, 3)
};

static TAB_NUM t_lambda_38[] = {
  2, // locals
  1, // parameters
  var_1040_3_timed_job,
  // timed_job $_command $_arguments $time
  var_1040_3_timed_job, 0, 3, LOCAL(1), LOCAL(1), var_1041_33_time,
  // t:
  var_std__less, 2, var_1033_15_t, var_1041_33_time, 1, LOCAL(1),
  // t:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_39, lambda_40, IO_TAIL_CALL,
  POS(1041, 7),
  POS(1043, 17),
  POS(1043, 17),
  POS(1042, 7)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  // push &start_jobs timed_job
  var_push, 2, var_1034_1_start_jobs, var_1040_3_timed_job, 1, var_1034_1_start_jobs,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1044, 11),
  POS(1045, 11)
};

static TAB_NUM t_lambda_40[] = {
  2, // locals
  0, // parameters
  // push &remaining_timed_jobs timed_job
  var_push, 2, var_1037_1_remaining_timed_jobs, var_1040_3_timed_job, 1, var_1037_1_remaining_timed_jobs,
  // is_undefined || time < first_job_time:
  var_is_undefined, 1, var_1036_1_first_job_time, 1, LOCAL(1),
  // is_undefined || time < first_job_time:
  var_std__or, 2, LOCAL(1), lambda_41, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_42, var_next, IO_TAIL_CALL,
  POS(1047, 11),
  POS(1049, 28),
  POS(1049, 28),
  POS(1048, 11)
};

static TAB_NUM t_lambda_41[] = {
  1, // locals
  0, // parameters
  // time < first_job_time:
  var_std__less, 2, var_1041_33_time, var_1036_1_first_job_time, 1, LOCAL(1),
  // time < first_job_time:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1049, 44),
  POS(1049, 44)
};

static TAB_NUM t_lambda_42[] = {
  0, // locals
  0, // parameters
  // !first_job_time time
  LET, 1, var_1041_33_time, 1, var_1036_1_first_job_time,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1050, 15),
  POS(1051, 15)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  // self.timed_jobs_of remaining_timed_jobs
  LET, -1, var_1017_0_self, var_timed_jobs_of, var_1037_1_remaining_timed_jobs, var_1017_0_self,
  // set_timeout!
  func_set_timeout, 0, IO_TAIL_CALL,
  POS(1054, 8),
  POS(1055, 7)
};

static TAB_NUM t_func_set_timeout[] = {
  2, // locals
  0, // parameters
  // !timeout timeout_of(self)
  var_timeout_of, 1, var_1017_0_self, 1, var_1038_1_timeout,
  // is_defined || first_job_time.is_defined:
  var_is_defined, 1, var_1038_1_timeout, 1, LOCAL(1),
  // is_defined || first_job_time.is_defined:
  var_std__or, 2, LOCAL(1), lambda_44, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_45, func_handle_start_jobs, IO_TAIL_CALL,
  POS(1058, 5),
  POS(1060, 15),
  POS(1060, 15),
  POS(1059, 5)
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_1036_1_first_job_time, 1, LOCAL(1),
  // first_job_time.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1060, 44),
  POS(1060, 29)
};

static TAB_NUM t_lambda_45[] = {
  2, // locals
  0, // parameters
  // is_undefined || first_job_time < timeout
  var_is_undefined, 1, var_1038_1_timeout, 1, LOCAL(1),
  // is_undefined || first_job_time < timeout
  var_std__or, 2, LOCAL(1), lambda_46, 1, LOCAL(2),
  // update_if timeout.is_undefined || first_job_time < timeout
  var_update_if, 3, LOCAL(2), var_1038_1_timeout, lambda_timeout, 1, var_1038_1_timeout,
  // self.timeout_of undefined
  LET, -1, var_1017_0_self, var_timeout_of, var_undefined, var_1017_0_self,
  // timeout-t 0)
  var_std__minus, 2, var_1038_1_timeout, var_1033_15_t, 1, LOCAL(1),
  // !timeout max(timeout-t 0)
  var_max, 2, LOCAL(1), num_0, 1, var_1038_1_timeout,
  // 0
  var_std__less, 2, num_0, var_1038_1_timeout, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_47, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_48, func_handle_start_jobs, IO_TAIL_CALL,
  POS(1061, 27),
  POS(1061, 27),
  POS(1061, 9),
  POS(1063, 10),
  POS(1064, 22),
  POS(1064, 9),
  POS(1067, 23),
  POS(1066, 13),
  POS(1065, 9)
};

static TAB_NUM t_lambda_46[] = {
  1, // locals
  0, // parameters
  // first_job_time < timeout
  var_std__less, 2, var_1036_1_first_job_time, var_1038_1_timeout, 1, LOCAL(1),
  // first_job_time < timeout
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1061, 43),
  POS(1061, 43)
};

static TAB_NUM t_lambda_timeout[] = {
  0, // locals
  0, // parameters
  //  first_job_time
  LET, 1, var_1036_1_first_job_time, TAIL_CALL,
  POS(1062, 22)
};

static TAB_NUM t_lambda_47[] = {
  2, // locals
  0, // parameters
  // exit_codes_of(self): (pid _exit_code)
  var_exit_codes_of, 1, var_1017_0_self, 1, LOCAL(1),
  // any_of
  var_any_of, 2, LOCAL(1), lambda_exit_codes_ofself, 1, LOCAL(2),
  // any_of
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1069, 15),
  POS(1068, 13),
  POS(1068, 13)
};

static TAB_NUM t_lambda_exit_codes_ofself[] = {
  3, // locals
  2, // parameters
  LOCAL(3), // 1069_22_pid
  LOCAL(1),
  // watched_pids_of(self)(pid)
  var_watched_pids_of, 1, var_1017_0_self, 1, LOCAL(1),
  // watched_pids_of(self)(pid)
  LOCAL(1), 1, LOCAL(3), 1, LOCAL(2),
  // -> watched_pids_of(self)(pid)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1070, 20),
  POS(1070, 20),
  POS(1070, 17)
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  // !timeout 0
  LET, 1, num_0, 1, var_1038_1_timeout,
  // handle_start_jobs!
  func_handle_start_jobs, 0, IO_TAIL_CALL,
  POS(1072, 13),
  POS(1073, 13)
};

static TAB_NUM t_func_handle_start_jobs[] = {
  0, // locals
  0, // parameters
  // for_each start_jobs
  var_for_each, 3, var_1034_1_start_jobs, lambda_49, func_handle_write_jobs, IO_TAIL_CALL,
  POS(1078, 5)
};

static TAB_NUM t_lambda_49[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 1079_3_job
  // job $command $arguments
  LOCAL(2), 0, 2, LOCAL(3), LOCAL(4),
  // apply! command &self arguments $new_event
  var_apply, 3, LOCAL(3), var_1017_0_self, LOCAL(4), IO_CALL(2), var_1017_0_self, var_1081_32_new_event,
  // is_defined:
  var_is_defined, 1, var_1081_32_new_event, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_new_event_is_defined, var_next, IO_TAIL_CALL,
  POS(1080, 9),
  POS(1081, 9),
  POS(1083, 21),
  POS(1082, 9)
};

static TAB_NUM t_lambda_new_event_is_defined[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_1081_32_new_event, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_new_event_is_a_list, lambda_50, IO_TAIL_CALL,
  POS(1085, 25),
  POS(1084, 13)
};

static TAB_NUM t_lambda_new_event_is_a_list[] = {
  0, // locals
  0, // parameters
  // append &events new_event
  var_append, 2, var_1030_1_events, var_1081_32_new_event, 1, var_1030_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1086, 17),
  POS(1087, 17)
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  // push &events new_event
  var_push, 2, var_1030_1_events, var_1081_32_new_event, 1, var_1030_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1089, 17),
  POS(1090, 17)
};

static TAB_NUM t_func_handle_write_jobs[] = {
  1, // locals
  0, // parameters
  // write_jobs_of(self)
  var_write_jobs_of, 1, var_1017_0_self, 1, LOCAL(1),
  // for_each write_jobs_of(self)
  var_for_each, 3, LOCAL(1), lambda_51, func_wait_for_events, IO_TAIL_CALL,
  POS(1095, 14),
  POS(1095, 5)
};

static TAB_NUM t_lambda_51[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 1096_3_fd
  LOCAL(1),
  // push &want_to_write fd
  var_push, 2, var_1031_1_want_to_write, LOCAL(2), 1, var_1031_1_want_to_write,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1097, 9),
  POS(1098, 9)
};

static TAB_NUM t_func_wait_for_events[] = {
  2, // locals
  0, // parameters
  // $read_descriptor_list empty_list
  LET, 1, var_empty_list, 1, var_1102_1_read_descriptor_list,
  // read_jobs_of(self)
  var_read_jobs_of, 1, var_1017_0_self, 1, LOCAL(1),
  // for_each !read_descriptor_list read_jobs_of(self)
  var_for_each, 3, LOCAL(1), lambda_52, lambda_53, IO_CALL(1), var_1102_1_read_descriptor_list,
  // pselect!
  var_pselect, 4, var_1102_1_read_descriptor_list, var_1031_1_want_to_write, var_empty_list, var_1038_1_timeout, IO_CALL(4), LOCAL(2), var_1110_1_can_read, var_1111_1_can_write, LOCAL(1),
  // current_time! !self.current_time_of
  var_current_time, 0, IO_CALL(1), LOCAL(1),
  // self.current_time_of
  LET, -1, var_1017_0_self, var_current_time_of, LOCAL(1), var_1017_0_self,
  // $injected_into_stdin false
  LET, 1, var_false, 1, var_1115_1_injected_into_stdin,
  // $write_jobs write_jobs_of(self)
  var_write_jobs_of, 1, var_1017_0_self, 1, var_1116_1_write_jobs,
  // for_each signals
  var_for_each, 3, LOCAL(2), lambda_54, func_handle_write_requests, IO_TAIL_CALL,
  POS(1102, 7),
  POS(1103, 38),
  POS(1103, 7),
  POS(1108, 7),
  POS(1114, 7),
  POS(1114, 22),
  POS(1115, 7),
  POS(1116, 7),
  POS(1117, 7)
};

static TAB_NUM t_lambda_52[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 1104_3_fd
  LOCAL(1),
  // push &read_descriptor_list fd
  var_push, 2, var_1102_1_read_descriptor_list, LOCAL(2), 1, var_1102_1_read_descriptor_list,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1105, 11),
  POS(1106, 11)
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  //  read_descriptor_list
  LET, 1, var_1102_1_read_descriptor_list, TAIL_CALL,
  POS(1107, 11)
};

static TAB_NUM t_lambda_54[] = {
  0, // locals
  1, // parameters
  var_1118_3_signal,
  // case signal
  var_case, 6, var_1118_3_signal, var_CHILD_CHANGED_STATE, lambda_CHILD_CHANGED_STATE, var_WINDOW_CHANGED_SIZE, lambda_WINDOW_CHANGED_SIZE, lambda_56, IO_TAIL_CALL,
  POS(1119, 11)
};

static TAB_NUM t_lambda_CHILD_CHANGED_STATE[] = {
  2, // locals
  0, // parameters
  // wait! $pid $status
  var_wait, 0, IO_CALL(2), var_1121_7_pid, var_1121_12_status,
  // exitstatus &status
  var_exitstatus, 1, var_1121_12_status, 1, var_1121_12_status,
  // watched_pids_of(self)(pid):
  var_watched_pids_of, 1, var_1017_0_self, 1, LOCAL(1),
  // watched_pids_of(self)(pid):
  LOCAL(1), 1, var_1121_7_pid, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_watched_pids_ofselfpid, lambda_55, IO_TAIL_CALL,
  POS(1121, 15),
  POS(1122, 15),
  POS(1124, 17),
  POS(1124, 17),
  POS(1123, 15)
};

static TAB_NUM t_lambda_watched_pids_ofselfpid[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(pid) false
  var_watched_pids_of, 1, var_1017_0_self, 1, LOCAL(2),
  // watched_pids_of(pid) false
  LOCAL(2), 2, var_1121_7_pid, var_false, 1, LOCAL(2),
  // self.watched_pids_of(pid) false
  LET, -1, var_1017_0_self, var_watched_pids_of, LOCAL(2), var_1017_0_self,
  // new(std_types::event PROCESS_JOINED pid status)
  var_new, 4, var_std_types__event, var_PROCESS_JOINED, var_1121_7_pid, var_1121_12_status, 1, LOCAL(1),
  // push &events new(std_types::event PROCESS_JOINED pid status)
  var_push, 2, var_1030_1_events, LOCAL(1), 1, var_1030_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1125, 25),
  POS(1125, 25),
  POS(1125, 20),
  POS(1126, 32),
  POS(1126, 19),
  POS(1127, 19)
};

static TAB_NUM t_lambda_55[] = {
  2, // locals
  0, // parameters
  // exit_codes_of(pid) status
  var_exit_codes_of, 1, var_1017_0_self, 1, LOCAL(2),
  // exit_codes_of(pid) status
  LOCAL(2), 2, var_1121_7_pid, var_1121_12_status, 1, LOCAL(2),
  // self.exit_codes_of(pid) status
  LET, -1, var_1017_0_self, var_exit_codes_of, LOCAL(2), var_1017_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1129, 25),
  POS(1129, 25),
  POS(1129, 20),
  POS(1130, 19)
};

static TAB_NUM t_lambda_WINDOW_CHANGED_SIZE[] = {
  0, // locals
  0, // parameters
  // self.window_change_event_occurred true
  LET, -1, var_1017_0_self, var_window_change_event_occurred, var_true, var_1017_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1132, 16),
  POS(1133, 15)
};

static TAB_NUM t_lambda_56[] = {
  2, // locals
  0, // parameters
  // catched_signals_of(self)(signal):
  var_catched_signals_of, 1, var_1017_0_self, 1, LOCAL(1),
  // catched_signals_of(self)(signal):
  LOCAL(1), 1, var_1118_3_signal, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_catched_signals_ofselfsignal, var_next, IO_TAIL_CALL,
  POS(1136, 17),
  POS(1136, 17),
  POS(1135, 15)
};

static TAB_NUM t_lambda_catched_signals_ofselfsignal[] = {
  1, // locals
  0, // parameters
  // new(std_types::event SIGNAL undefined signal)
  var_new, 4, var_std_types__event, var_SIGNAL, var_undefined, var_1118_3_signal, 1, LOCAL(1),
  // push &events new(std_types::event SIGNAL undefined signal)
  var_push, 2, var_1030_1_events, LOCAL(1), 1, var_1030_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1137, 32),
  POS(1137, 19),
  POS(1138, 19)
};

static TAB_NUM t_func_handle_write_requests[] = {
  2, // locals
  0, // parameters
  // window_change_event_occurred
  var_window_change_event_occurred, 1, var_1017_0_self, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_57, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_59, lambda_60, IO_TAIL_CALL,
  POS(1145, 18),
  POS(1144, 13),
  POS(1143, 9)
};

static TAB_NUM t_lambda_57[] = {
  2, // locals
  0, // parameters
  // do_inject_window_change_events
  var_do_inject_window_change_events, 1, var_1017_0_self, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_58, 1, LOCAL(2),
  // self.do_inject_window_change_events
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1146, 18),
  POS(1144, 13),
  POS(1146, 13)
};

static TAB_NUM t_lambda_58[] = {
  3, // locals
  0, // parameters
  // read_jobs_of(self)(STDIN_FILENO).is_defined
  var_read_jobs_of, 1, var_1017_0_self, 1, LOCAL(1),
  // read_jobs_of(self)(STDIN_FILENO).is_defined
  LOCAL(1), 1, var_STDIN_FILENO, 1, LOCAL(2),
  // is_defined
  var_is_defined, 1, LOCAL(2), 1, LOCAL(3),
  // read_jobs_of(self)(STDIN_FILENO).is_defined
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1147, 13),
  POS(1147, 13),
  POS(1147, 46),
  POS(1147, 13)
};

static TAB_NUM t_lambda_59[] = {
  4, // locals
  0, // parameters
  // get_terminal_size! STDIN_FILENO $width $height
  var_get_terminal_size, 1, var_STDIN_FILENO, IO_CALL(2), LOCAL(2), LOCAL(3),
  // self.window_change_event_occurred false
  LET, -1, var_1017_0_self, var_window_change_event_occurred, var_false, var_1017_0_self,
  // $buf "@esc;[8;@(height);@(width)t"
  var_std__string, 5, string_4, LOCAL(3), string_5, LOCAL(2), str_t, 1, LOCAL(4),
  // new(std_types::event READ STDIN_FILENO buf)
  var_new, 4, var_std_types__event, var_READ, var_STDIN_FILENO, LOCAL(4), 1, LOCAL(1),
  // push &events new(std_types::event READ STDIN_FILENO buf)
  var_push, 2, var_1030_1_events, LOCAL(1), 1, var_1030_1_events,
  // !injected_into_stdin true
  LET, 1, var_true, 1, var_1115_1_injected_into_stdin,
  // check_file_descriptors!
  func_check_file_descriptors, 0, IO_TAIL_CALL,
  POS(1149, 13),
  POS(1150, 14),
  POS(1151, 13),
  POS(1152, 26),
  POS(1152, 13),
  POS(1153, 13),
  POS(1154, 13)
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  0, // parameters
  // check_file_descriptors!
  func_check_file_descriptors, 0, IO_TAIL_CALL,
  POS(1156, 13)
};

static TAB_NUM t_func_check_file_descriptors[] = {
  0, // locals
  0, // parameters
  // for_each can_write
  var_for_each, 3, var_1111_1_can_write, lambda_61, func_attempt_reads, IO_TAIL_CALL,
  POS(1159, 9)
};

static TAB_NUM t_lambda_61[] = {
  1, // locals
  1, // parameters
  var_1160_3_fd,
  // $job write_jobs(fd)
  var_1116_1_write_jobs, 1, var_1160_3_fd, 1, var_1161_1_job,
  // write! $bytes_written fd job
  var_write, 2, var_1160_3_fd, var_1161_1_job, IO_CALL(1), var_1162_8_bytes_written,
  // is_an_error:
  var_is_an_error, 1, var_1162_8_bytes_written, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_bytes_written_is_an_error, lambda_62, IO_TAIL_CALL,
  POS(1161, 13),
  POS(1162, 13),
  POS(1164, 29),
  POS(1163, 13)
};

static TAB_NUM t_lambda_bytes_written_is_an_error[] = {
  2, // locals
  0, // parameters
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, var_1017_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, var_1160_3_fd, var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, var_1017_0_self, var_write_jobs_of, LOCAL(2), var_1017_0_self,
  // new
  var_new, 4, var_std_types__event, var_WRITE_FAILED, var_1160_3_fd, var_1162_8_bytes_written, 1, LOCAL(1),
  // push &events
  var_push, 2, var_1030_1_events, LOCAL(1), 1, var_1030_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1165, 23),
  POS(1165, 23),
  POS(1165, 18),
  POS(1167, 19),
  POS(1166, 17),
  POS(1171, 17)
};

static TAB_NUM t_lambda_62[] = {
  2, // locals
  0, // parameters
  // length_of(job):
  var_length_of, 1, var_1161_1_job, 1, LOCAL(1),
  // bytes_written < length_of(job):
  var_std__less, 2, var_1162_8_bytes_written, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_63, lambda_64, IO_TAIL_CALL,
  POS(1174, 35),
  POS(1174, 19),
  POS(1173, 17)
};

static TAB_NUM t_lambda_63[] = {
  2, // locals
  0, // parameters
  // bytes_written+1 -1
  var_std__plus, 2, var_1162_8_bytes_written, num_1, 1, LOCAL(1),
  // range &job bytes_written+1 -1
  var_range, 3, var_1161_1_job, LOCAL(1), minus_num_1, 1, var_1161_1_job,
  // write_jobs_of(fd) job # remaining text to write
  var_write_jobs_of, 1, var_1017_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) job # remaining text to write
  LOCAL(2), 2, var_1160_3_fd, var_1161_1_job, 1, LOCAL(2),
  // self.write_jobs_of(fd) job # remaining text to write
  LET, -1, var_1017_0_self, var_write_jobs_of, LOCAL(2), var_1017_0_self,
  // new(std_types::event WRITE_PENDING fd job)
  var_new, 4, var_std_types__event, var_WRITE_PENDING, var_1160_3_fd, var_1161_1_job, 1, LOCAL(1),
  // push &events new(std_types::event WRITE_PENDING fd job)
  var_push, 2, var_1030_1_events, LOCAL(1), 1, var_1030_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1175, 32),
  POS(1175, 21),
  POS(1176, 27),
  POS(1176, 27),
  POS(1176, 22),
  POS(1177, 34),
  POS(1177, 21),
  POS(1178, 21)
};

static TAB_NUM t_lambda_64[] = {
  2, // locals
  0, // parameters
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, var_1017_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, var_1160_3_fd, var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, var_1017_0_self, var_write_jobs_of, LOCAL(2), var_1017_0_self,
  // new(std_types::event WRITE_COMPLETED fd undefined)
  var_new, 4, var_std_types__event, var_WRITE_COMPLETED, var_1160_3_fd, var_undefined, 1, LOCAL(1),
  // push &events
  var_push, 2, var_1030_1_events, LOCAL(1), 1, var_1030_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1180, 27),
  POS(1180, 27),
  POS(1180, 22),
  POS(1182, 23),
  POS(1181, 21),
  POS(1183, 21)
};

static TAB_NUM t_func_attempt_reads[] = {
  0, // locals
  0, // parameters
  // for_each can_read
  var_for_each, 3, var_1110_1_can_read, lambda_65, lambda_77, IO_TAIL_CALL,
  POS(1187, 9)
};

static TAB_NUM t_lambda_65[] = {
  3, // locals
  1, // parameters
  var_1188_3_fd,
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__equal, 2, var_1188_3_fd, var_STDIN_FILENO, 1, LOCAL(1),
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__or, 2, LOCAL(2), lambda_66, 1, LOCAL(3),
  // if_not fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_if_not, 3, LOCAL(3), var_next, lambda_67, IO_TAIL_CALL,
  POS(1189, 20),
  POS(1189, 20),
  POS(1189, 20),
  POS(1189, 13)
};

static TAB_NUM t_lambda_66[] = {
  1, // locals
  0, // parameters
  // not(injected_into_stdin) next:
  var_not, 1, var_1115_1_injected_into_stdin, 1, LOCAL(1),
  // not(injected_into_stdin) next:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1189, 42),
  POS(1189, 42)
};

static TAB_NUM t_lambda_67[] = {
  3, // locals
  0, // parameters
  // fstat! fd $info
  var_fstat, 1, var_1188_3_fd, IO_CALL(1), LOCAL(3),
  // type_of(info) == SOCKET:
  var_type_of, 1, LOCAL(3), 1, LOCAL(1),
  // type_of(info) == SOCKET:
  var_std__equal, 2, LOCAL(1), var_SOCKET, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_68, func_do_read, IO_TAIL_CALL,
  POS(1190, 15),
  POS(1192, 17),
  POS(1192, 17),
  POS(1191, 15)
};

static TAB_NUM t_lambda_68[] = {
  1, // locals
  0, // parameters
  // is_listening! $does_listen fd
  var_is_listening, 1, var_1188_3_fd, IO_CALL(1), LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_does_listen, func_do_read, IO_TAIL_CALL,
  POS(1193, 19),
  POS(1194, 19)
};

static TAB_NUM t_lambda_does_listen[] = {
  1, // locals
  0, // parameters
  // accept! $conn fd
  var_accept, 1, var_1188_3_fd, IO_CALL(1), var_1196_9_conn,
  // is_an_error:
  var_is_an_error, 1, var_1196_9_conn, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_conn_is_an_error, lambda_69, IO_TAIL_CALL,
  POS(1196, 23),
  POS(1198, 30),
  POS(1197, 23)
};

static TAB_NUM t_lambda_conn_is_an_error[] = {
  1, // locals
  0, // parameters
  // new(std_types::event READ_FAILED fd conn)
  var_new, 4, var_std_types__event, var_READ_FAILED, var_1188_3_fd, var_1196_9_conn, 1, LOCAL(1),
  // push &events
  var_push, 2, var_1030_1_events, LOCAL(1), 1, var_1030_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1200, 29),
  POS(1199, 27),
  POS(1201, 27)
};

static TAB_NUM t_lambda_69[] = {
  1, // locals
  0, // parameters
  // new(std_types::event CONNECT fd conn)
  var_new, 4, var_std_types__event, var_CONNECT, var_1188_3_fd, var_1196_9_conn, 1, LOCAL(1),
  // push &events
  var_push, 2, var_1030_1_events, LOCAL(1), 1, var_1030_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1204, 29),
  POS(1203, 27),
  POS(1205, 27)
};

static TAB_NUM t_func_do_read[] = {
  4, // locals
  0, // parameters
  // read_jobs_of(self)(fd)
  var_read_jobs_of, 1, var_1017_0_self, 1, LOCAL(1),
  // $do_close_and_max_length read_jobs_of(self)(fd)
  LOCAL(1), 1, var_1188_3_fd, 1, LOCAL(3),
  // do_close_and_max_length $do_close $max_length
  LOCAL(3), 0, 2, var_1211_25_do_close, var_1211_35_max_length,
  // is_defined && max_length < 0x10'0000
  var_is_defined, 1, var_1211_35_max_length, 1, LOCAL(1),
  // is_defined && max_length < 0x10'0000
  var_std__and, 2, LOCAL(1), lambda_70, 1, LOCAL(2),
  // $length
  var_if, 3, LOCAL(2), lambda_71, lambda_72, 1, LOCAL(4),
  // read! $buf fd length
  var_read, 2, var_1188_3_fd, LOCAL(4), IO_CALL(1), var_1217_7_buf,
  // is_an_error:
  var_is_an_error, 1, var_1217_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_an_error, lambda_73, IO_TAIL_CALL,
  POS(1210, 42),
  POS(1210, 17),
  POS(1211, 17),
  POS(1214, 32),
  POS(1214, 32),
  POS(1212, 17),
  POS(1217, 17),
  POS(1219, 23),
  POS(1218, 17)
};

static TAB_NUM t_lambda_70[] = {
  1, // locals
  0, // parameters
  // max_length < 0x10'0000
  var_std__less, 2, var_1211_35_max_length, num_0x100000, 1, LOCAL(1),
  // max_length < 0x10'0000
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1214, 46),
  POS(1214, 46)
};

static TAB_NUM t_lambda_71[] = {
  0, // locals
  0, // parameters
  //  max_length
  LET, 1, var_1211_35_max_length, TAIL_CALL,
  POS(1215, 23)
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  0, // parameters
  //  0x10'0000
  LET, 1, num_0x100000, TAIL_CALL,
  POS(1216, 23)
};

static TAB_NUM t_lambda_buf_is_an_error[] = {
  1, // locals
  0, // parameters
  // new(std_types::event READ_FAILED fd buf)
  var_new, 4, var_std_types__event, var_READ_FAILED, var_1188_3_fd, var_1217_7_buf, 1, LOCAL(1),
  // push &events new(std_types::event READ_FAILED fd buf)
  var_push, 2, var_1030_1_events, LOCAL(1), 1, var_1030_1_events,
  // if
  var_if, 3, var_1211_25_do_close, lambda_do_close, var_next, IO_TAIL_CALL,
  POS(1220, 34),
  POS(1220, 21),
  POS(1221, 21)
};

static TAB_NUM t_lambda_do_close[] = {
  0, // locals
  0, // parameters
  // close &self fd
  var_close, 2, var_1017_0_self, var_1188_3_fd, 1, var_1017_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1223, 25),
  POS(1224, 25)
};

static TAB_NUM t_lambda_73[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_1217_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_empty, lambda_74, IO_TAIL_CALL,
  POS(1228, 27),
  POS(1227, 21)
};

static TAB_NUM t_lambda_buf_is_empty[] = {
  1, // locals
  0, // parameters
  // stop_reading_from &self fd
  var_stop_reading_from, 2, var_1017_0_self, var_1188_3_fd, 1, var_1017_0_self,
  // new(std_types::event CLOSED fd undefined)
  var_new, 4, var_std_types__event, var_CLOSED, var_1188_3_fd, var_undefined, 1, LOCAL(1),
  // push &events new(std_types::event CLOSED fd undefined)
  var_push, 2, var_1030_1_events, LOCAL(1), 1, var_1030_1_events,
  // if
  var_if, 3, var_1211_25_do_close, lambda_2_do_close, var_next, IO_TAIL_CALL,
  POS(1229, 25),
  POS(1230, 38),
  POS(1230, 25),
  POS(1231, 25)
};

static TAB_NUM t_lambda_2_do_close[] = {
  0, // locals
  0, // parameters
  // close &self fd
  var_close, 2, var_1017_0_self, var_1188_3_fd, 1, var_1017_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1233, 29),
  POS(1234, 29)
};

static TAB_NUM t_lambda_74[] = {
  1, // locals
  0, // parameters
  // new(std_types::event READ fd buf)
  var_new, 4, var_std_types__event, var_READ, var_1188_3_fd, var_1217_7_buf, 1, LOCAL(1),
  // push &events new(std_types::event READ fd buf)
  var_push, 2, var_1030_1_events, LOCAL(1), 1, var_1030_1_events,
  // is_defined:
  var_is_defined, 1, var_1211_35_max_length, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_max_length_is_defined, var_next, IO_TAIL_CALL,
  POS(1237, 38),
  POS(1237, 25),
  POS(1239, 38),
  POS(1238, 25)
};

static TAB_NUM t_lambda_max_length_is_defined[] = {
  2, // locals
  0, // parameters
  // length_of(buf) < max_length:
  var_length_of, 1, var_1217_7_buf, 1, LOCAL(1),
  // length_of(buf) < max_length:
  var_std__less, 2, LOCAL(1), var_1211_35_max_length, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_75, lambda_76, IO_TAIL_CALL,
  POS(1241, 31),
  POS(1241, 31),
  POS(1240, 29)
};

static TAB_NUM t_lambda_75[] = {
  5, // locals
  0, // parameters
  // length_of(buf))
  var_length_of, 1, var_1217_7_buf, 1, LOCAL(1),
  // max_length-length_of(buf))
  var_std__minus, 2, var_1211_35_max_length, LOCAL(1), 1, LOCAL(2),
  // !self.read_jobs_of(fd)
  var_tuple, 2, var_true, LOCAL(2), 1, LOCAL(4),
  // read_jobs_of(fd)
  var_read_jobs_of, 1, var_1017_0_self, 1, LOCAL(5),
  // read_jobs_of(fd)
  LOCAL(5), 2, var_1188_3_fd, LOCAL(4), 1, LOCAL(5),
  // self.read_jobs_of(fd)
  LET, -1, var_1017_0_self, var_read_jobs_of, LOCAL(5), var_1017_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1243, 57),
  POS(1243, 46),
  POS(1242, 33),
  POS(1242, 39),
  POS(1242, 39),
  POS(1242, 34),
  POS(1244, 33)
};

static TAB_NUM t_lambda_76[] = {
  0, // locals
  0, // parameters
  // stop_reading_from &self fd
  var_stop_reading_from, 2, var_1017_0_self, var_1188_3_fd, 1, var_1017_0_self,
  // if
  var_if, 3, var_1211_25_do_close, lambda_3_do_close, var_next, IO_TAIL_CALL,
  POS(1246, 33),
  POS(1247, 33)
};

static TAB_NUM t_lambda_3_do_close[] = {
  0, // locals
  0, // parameters
  // close &self fd
  var_close, 2, var_1017_0_self, var_1188_3_fd, 1, var_1017_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1249, 37),
  POS(1250, 37)
};

static TAB_NUM t_lambda_77[] = {
  0, // locals
  0, // parameters
  // attempt_close_operations! &self
  func_attempt_close_operations, 1, var_1017_0_self, IO_CALL(1), var_1017_0_self,
  // attempt_exit! &self
  func_attempt_exit, 1, var_1017_0_self, IO_CALL(1), var_1017_0_self,
  // -> self events
  LET, 2, var_1017_0_self, var_1030_1_events, TAIL_CALL,
  POS(1254, 13),
  POS(1256, 13),
  POS(1258, 13)
};

static TAB_NUM t_func_attempt_close_operations[] = {
  1, // locals
  1, // parameters
  var_1260_28_io,
  // close_jobs_of(io)
  var_close_jobs_of, 1, var_1260_28_io, 1, LOCAL(1),
  // for_each close_jobs_of(io)
  var_for_each, 3, LOCAL(1), lambda_78, lambda_79, IO_TAIL_CALL,
  POS(1261, 12),
  POS(1261, 3)
};

static TAB_NUM t_lambda_78[] = {
  3, // locals
  1, // parameters
  var_1262_3_fd,
  // write_jobs_of(io)(fd).is_undefined:
  var_write_jobs_of, 1, var_1260_28_io, 1, LOCAL(1),
  // write_jobs_of(io)(fd).is_undefined:
  LOCAL(1), 1, var_1262_3_fd, 1, LOCAL(2),
  // is_undefined:
  var_is_undefined, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_write_jobs_ofiofd_is_undefined, var_next, IO_TAIL_CALL,
  POS(1264, 9),
  POS(1264, 9),
  POS(1264, 31),
  POS(1263, 7)
};

static TAB_NUM t_lambda_write_jobs_ofiofd_is_undefined[] = {
  2, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_1262_3_fd, IO_CALL(0),
  // close_jobs_of(fd) false
  var_close_jobs_of, 1, var_1260_28_io, 1, LOCAL(2),
  // close_jobs_of(fd) false
  LOCAL(2), 2, var_1262_3_fd, var_false, 1, LOCAL(2),
  // io.close_jobs_of(fd) false
  LET, -1, var_1260_28_io, var_close_jobs_of, LOCAL(2), var_1260_28_io,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1265, 11),
  POS(1266, 15),
  POS(1266, 15),
  POS(1266, 12),
  POS(1267, 11)
};

static TAB_NUM t_lambda_79[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_1260_28_io, TAIL_CALL,
  POS(1269, 7)
};

static TAB_NUM t_func_attempt_exit[] = {
  2, // locals
  1, // parameters
  var_1271_16_io,
  // exit_code_of(io).is_defined:
  var_exit_code_of, 1, var_1271_16_io, 1, LOCAL(1),
  // is_defined:
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_exit_code_ofio_is_defined, lambda_83, IO_TAIL_CALL,
  POS(1273, 5),
  POS(1273, 22),
  POS(1272, 3)
};

static TAB_NUM t_lambda_exit_code_ofio_is_defined[] = {
  1, // locals
  0, // parameters
  // resources_of(io)
  var_resources_of, 1, var_1271_16_io, 1, LOCAL(1),
  // for_each resources_of(io)
  var_for_each, 3, LOCAL(1), lambda_80, lambda_81, IO_TAIL_CALL,
  POS(1274, 16),
  POS(1274, 7)
};

static TAB_NUM t_lambda_80[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 1275_3_resource
  // finalize! resource &io
  var_finalize, 2, LOCAL(1), var_1271_16_io, IO_CALL(1), var_1271_16_io,
  // next
  var_next, 0, TAIL_CALL,
  POS(1276, 11),
  POS(1277, 11)
};

static TAB_NUM t_lambda_81[] = {
  1, // locals
  0, // parameters
  // io.resources_of empty_list
  LET, -1, var_1271_16_io, var_resources_of, var_empty_list, var_1271_16_io,
  // is_empty:
  var_is_empty, 1, var_1271_16_io, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_io_is_empty, lambda_82, IO_TAIL_CALL,
  POS(1279, 12),
  POS(1281, 16),
  POS(1280, 11)
};

static TAB_NUM t_lambda_io_is_empty[] = {
  1, // locals
  0, // parameters
  // exit_code_of(io)
  var_exit_code_of, 1, var_1271_16_io, 1, LOCAL(1),
  // exit! exit_code_of(io)
  var_exit, 1, LOCAL(1), IO_TAIL_CALL,
  POS(1282, 21),
  POS(1282, 15)
};

static TAB_NUM t_lambda_82[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_1271_16_io, TAIL_CALL,
  POS(1283, 15)
};

static TAB_NUM t_lambda_83[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_1271_16_io, TAIL_CALL,
  POS(1284, 7)
};

static TAB_NUM t_func_std__handle_events[] = {
  1, // locals
  2, // parameters
  var_1286_22_io,
  LOCAL(1), // 1286_25_events
  // $new_events empty_list
  LET, 1, var_empty_list, 1, var_1287_1_new_events,
  // $handlers handlers_of(io)
  var_handlers_of, 1, var_1286_22_io, 1, var_1288_1_handlers,
  // for_each events
  var_for_each, 3, LOCAL(1), lambda_84, lambda_87, IO_TAIL_CALL,
  POS(1287, 3),
  POS(1288, 3),
  POS(1289, 3)
};

static TAB_NUM t_lambda_84[] = {
  1, // locals
  1, // parameters
  var_1290_3_event,
  // event $type $id $argument
  var_1290_3_event, 0, 3, var_1291_7_type, var_1291_13_id, var_1291_17_argument,
  // $id_handlers handlers(id)
  var_1288_1_handlers, 1, var_1291_13_id, 1, var_1292_1_id_handlers,
  // is_undefined
  var_is_undefined, 1, var_1292_1_id_handlers, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_keep_event, lambda_85, IO_TAIL_CALL,
  POS(1291, 7),
  POS(1292, 7),
  POS(1294, 21),
  POS(1293, 7)
};

static TAB_NUM t_lambda_85[] = {
  1, // locals
  0, // parameters
  // $handler id_handlers(type)
  var_1292_1_id_handlers, 1, var_1291_7_type, 1, var_1297_1_handler,
  // is_undefined
  var_is_undefined, 1, var_1297_1_handler, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_keep_event, lambda_86, IO_TAIL_CALL,
  POS(1297, 11),
  POS(1299, 21),
  POS(1298, 11)
};

static TAB_NUM t_lambda_86[] = {
  1, // locals
  0, // parameters
  // handler &io $new_event id argument
  var_1297_1_handler, 3, var_1286_22_io, var_1291_13_id, var_1291_17_argument, 2, var_1286_22_io, var_1302_13_new_event,
  // is_defined:
  var_is_defined, 1, var_1302_13_new_event, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_new_event_is_defined, var_next, IO_TAIL_CALL,
  POS(1302, 15),
  POS(1304, 27),
  POS(1303, 15)
};

static TAB_NUM t_lambda_2_new_event_is_defined[] = {
  1, // locals
  0, // parameters
  // is_a_list
  var_is_a_list, 1, var_1302_13_new_event, 1, LOCAL(1),
  // update_if_not new_event.is_a_list
  var_update_if_not, 3, LOCAL(1), var_1302_13_new_event, lambda_new_event, 1, var_1302_13_new_event,
  // handle_events &io &new_event
  var_handle_events, 2, var_1286_22_io, var_1302_13_new_event, 2, var_1286_22_io, var_1302_13_new_event,
  // append &new_events new_event
  var_append, 2, var_1287_1_new_events, var_1302_13_new_event, 1, var_1287_1_new_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1305, 43),
  POS(1305, 19),
  POS(1307, 19),
  POS(1308, 19),
  POS(1309, 19)
};

static TAB_NUM t_lambda_new_event[] = {
  1, // locals
  0, // parameters
  // list(new_event)
  var_list, 1, var_1302_13_new_event, 1, LOCAL(1),
  //  list(new_event)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1306, 35),
  POS(1306, 34)
};

static TAB_NUM t_func_keep_event[] = {
  0, // locals
  0, // parameters
  // push &new_events event
  var_push, 2, var_1287_1_new_events, var_1290_3_event, 1, var_1287_1_new_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1313, 9),
  POS(1314, 9)
};

static TAB_NUM t_lambda_87[] = {
  0, // locals
  0, // parameters
  //  io new_events
  LET, 2, var_1286_22_io, var_1287_1_new_events, TAIL_CALL,
  POS(1315, 7)
};

static int tuple_563_0_arguments[] = {
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
  {FLT_TUPLE, 3, {.arguments = tuple_563_0_arguments}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_WRITE_PENDINGWRITE_COMPLETED}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_STRING_8, 16, {.str_8 = "unhandled event "}},
  {FLT_STRING_8, 3, {.str_8 = " - "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___initialize}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___get_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_set_timeout}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_timeout}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_exit_codes_ofself}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_start_jobs}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_new_event_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_new_event_is_a_list}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_write_jobs}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_wait_for_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_CHILD_CHANGED_STATE}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_watched_pids_ofselfpid}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_WINDOW_CHANGED_SIZE}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_catched_signals_ofselfsignal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_write_requests}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_STRING_8, 4, {.str_8 = "\033[8;"}},
  {FLT_STRING_8, 1, {.str_8 = ";"}},
  {FLT_STRING_8, 1, {.str_8 = "t"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_file_descriptors}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_bytes_written_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_attempt_reads}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_does_listen}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_conn_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_do_read}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x100000}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_buf_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_close}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_buf_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_do_close}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_max_length_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_do_close}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_attempt_close_operations}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_write_jobs_ofiofd_is_undefined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_attempt_exit}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_exit_code_ofio_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_io_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__handle_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_new_event_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_new_event}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_keep_event}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}}
};

static ATTRIBUTE_DEFINITION std_types__io__attributes[] = {
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
  {var_get_events, -func_std_types__io___get_events}
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
    {.position = POS(133, 1)}
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
    FOT_DERIVED, 0, 42,
    "io\000std_types", std_types__io__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "object\000std_types", NULL,
    {.position = POS(539, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(545, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_set\000", NULL,
    {.position = POS(547, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(548, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_table\000", NULL,
    {.position = POS(550, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(553, 47)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(557, 29)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "random_seed_of\000", NULL,
    {.position = POS(560, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "step_no_of\000", NULL,
    {.position = POS(561, 16)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "event\000std_types", NULL,
    {.const_idx = -tuple_563_0}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(563, 19)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_reading_from\000", NULL,
    {.position = POS(569, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(579, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_reading_from\000", NULL,
    {.position = POS(585, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "print_to\000", NULL,
    {.position = POS(599, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(605, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(605, 37)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "write\000", NULL,
    {.position = POS(605, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "617_0_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "619_1_job\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(622, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(623, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(621, 5)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "cancel_write\000", NULL,
    {.position = POS(628, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "close\000", NULL,
    {.position = POS(643, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "join_process\000", NULL,
    {.position = POS(662, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_injecting_window_change_events\000", NULL,
    {.position = POS(676, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_injecting_window_change_events\000", NULL,
    {.position = POS(688, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_catching_signals\000", NULL,
    {.position = POS(700, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "708_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "711_1_catched_signals\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(715, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(712, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_catching_signals\000", NULL,
    {.position = POS(718, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "726_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "729_1_catched_signals\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "set_timeout\000", NULL,
    {.position = POS(736, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "746_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "747_0_timeout\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_number\000", NULL,
    {.position = POS(749, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "current_time_of\000", NULL,
    {.position = POS(749, 45)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(749, 45)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(749, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "750_1_current_timeout\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(752, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(752, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(752, 21)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "initialize_logging\000std", NULL,
    {.const_idx = -func_std__initialize_logging}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "758_0_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "759_0_log_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "760_0_log_filename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open\000", NULL,
    {.position = POS(764, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDERR_FILENO\000", NULL,
    {.position = POS(765, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dup2\000", NULL,
    {.position = POS(765, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "enable_logging\000", NULL,
    {.position = POS(767, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "769_8_stdout_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDOUT_FILENO\000", NULL,
    {.position = POS(769, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "fstat\000", NULL,
    {.position = POS(769, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "770_8_stderr_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inode_number_of\000", NULL,
    {.position = POS(773, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(773, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(773, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "device_of\000", NULL,
    {.position = POS(774, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "disable_logging\000", NULL,
    {.position = POS(792, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "log\000", NULL,
    {.position = POS(804, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "812_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "813_0_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "814_0_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(818, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if_not\000", NULL,
    {.position = POS(818, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(819, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(819, 59)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split_into_lines\000", NULL,
    {.position = POS(820, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "821_1_prefix\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(821, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "822_1_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(823, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(826, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spaces\000", NULL,
    {.position = POS(826, 23)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "register_handlers\000", NULL,
    {.position = POS(832, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "840_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "841_0_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "844_1_handlers\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "default_value\000", NULL,
    {.position = POS(844, 13)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deregister_handlers\000", NULL,
    {.position = POS(854, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "862_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "863_0_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "864_0_types\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "866_1_handlers\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deregister_all_handlers\000", NULL,
    {.position = POS(879, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "register_resource\000", NULL,
    {.position = POS(893, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "run\000", NULL,
    {.position = POS(908, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "run_at\000", NULL,
    {.position = POS(923, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "931_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "932_0_time\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "exit\000", NULL,
    {.position = POS(940, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(956, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "964_0_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(967, 7)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "log_unhandled_event\000std", NULL,
    {.const_idx = -func_std__log_unhandled_event}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "973_28_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "974_7_type\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "974_13_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_FAILED\000", NULL,
    {.position = POS(978, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_PENDING\000", NULL,
    {.position = POS(979, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_COMPLETED\000", NULL,
    {.position = POS(980, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(987, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(985, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "serialize\000", NULL,
    {.position = POS(990, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim_right\000", NULL,
    {.position = POS(990, 43)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "initialize\000", NULL,
    {.position = POS(992, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_time\000", NULL,
    {.position = POS(1004, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "get_events\000", NULL,
    {.position = POS(1007, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1017_0_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(1023, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1030_1_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1031_1_want_to_write\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1033_15_t\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1034_1_start_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1036_1_first_job_time\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1037_1_remaining_timed_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1038_1_timeout\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1040_3_timed_job\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1041_33_time\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(1064, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(1064, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(1068, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1081_32_new_event\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "apply\000", NULL,
    {.position = POS(1081, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(1085, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1102_1_read_descriptor_list\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1110_1_can_read\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1111_1_can_write\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pselect\000", NULL,
    {.position = POS(1108, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1115_1_injected_into_stdin\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1116_1_write_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1118_3_signal\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CHILD_CHANGED_STATE\000", NULL,
    {.position = POS(1120, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1121_7_pid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1121_12_status\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "wait\000", NULL,
    {.position = POS(1121, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exitstatus\000", NULL,
    {.position = POS(1122, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PROCESS_JOINED\000", NULL,
    {.position = POS(1126, 53)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(1126, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WINDOW_CHANGED_SIZE\000", NULL,
    {.position = POS(1131, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGNAL\000", NULL,
    {.position = POS(1137, 53)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDIN_FILENO\000", NULL,
    {.position = POS(1147, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_terminal_size\000", NULL,
    {.position = POS(1149, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ\000", NULL,
    {.position = POS(1152, 47)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1160_3_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1161_1_job\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1162_8_bytes_written\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(1164, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1188_3_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(1189, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "type_of\000", NULL,
    {.position = POS(1192, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SOCKET\000", NULL,
    {.position = POS(1192, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_listening\000", NULL,
    {.position = POS(1193, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1196_9_conn\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "accept\000", NULL,
    {.position = POS(1196, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ_FAILED\000", NULL,
    {.position = POS(1200, 50)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CONNECT\000", NULL,
    {.position = POS(1204, 50)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1211_25_do_close\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1211_35_max_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1217_7_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read\000", NULL,
    {.position = POS(1217, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CLOSED\000", NULL,
    {.position = POS(1230, 59)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(1189, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1260_28_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1262_3_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1271_16_io\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finalize\000", NULL,
    {.position = POS(1276, 11)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "handle_events\000std", NULL,
    {.const_idx = -func_std__handle_events}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1286_22_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1287_1_new_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1288_1_handlers\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1290_3_event\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1291_7_type\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1291_13_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1291_17_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1292_1_id_handlers\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1297_1_handler\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1302_13_new_event\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(1306, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "handle_events\000", NULL,
    {.position = POS(1307, 19)}
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
  178, // number of constants
  237, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
