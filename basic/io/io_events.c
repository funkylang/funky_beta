#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  uni_std__READ = -1,
  uni_std__CLOSED = -2,
  uni_std__READ_ERROR = -3,
  uni_std__CONNECT = -4,
  uni_std__WRITE_PENDING = -5,
  uni_std__WRITE_COMPLETED = -6,
  uni_std__WRITE_ERROR = -7,
  uni_std__PROCESS_JOINED = -8,
  uni_std__SIGNAL = -9,
  num_0 = -10,
  tuple_467_0 = -11,
  func_std_types__io___start_reading_from = -12,
  lambda_1 = -13,
  lambda_2 = -14,
  func_std_types__io___stop_reading_from = -15,
  lambda_3 = -16,
  lambda_4 = -17,
  lambda_5 = -18,
  lambda_6 = -19,
  lambda_7 = -20,
  func_std_types__io___print_to = -21,
  func_std_types__io___write = -22,
  lambda_8 = -23,
  lambda_9 = -24,
  func_std_types__io___cancel_write = -25,
  func_std_types__io___close = -26,
  func_std_types__io___join_process = -27,
  func_std_types__io___start_injecting_window_change_events = -28,
  func_std_types__io___stop_injecting_window_change_events = -29,
  func_std_types__io___start_catching_signals = -30,
  lambda_10 = -31,
  lambda_11 = -32,
  func_std_types__io___stop_catching_signals = -33,
  lambda_12 = -34,
  lambda_13 = -35,
  func_std_types__io___set_timeout = -36,
  lambda_14 = -37,
  lambda_15 = -38,
  lambda_16 = -39,
  lambda_17 = -40,
  func_std_types__io___enable_logging = -41,
  num_1 = -42,
  func_std_types__io___disable_logging = -43,
  func_std_types__io___log = -44,
  lambda_18 = -45,
  lambda_19 = -46,
  chr_10 = -47,
  lambda_20 = -48,
  string_1 = -49,
  string_2 = -50,
  num_2 = -51,
  minus_num_1 = -52,
  lambda_21 = -53,
  lambda_22 = -54,
  lambda_23 = -55,
  func_std_types__io___exit = -56,
  func_std_types__io___is_empty = -57,
  lambda_24 = -58,
  lambda_25 = -59,
  lambda_26 = -60,
  func_std__log_unhandled_event = -61,
  lambda_27 = -62,
  lambda_28 = -63,
  lambda_29 = -64,
  lambda_30 = -65,
  lambda_31 = -66,
  lambda_WRITE_PENDINGWRITE_COMPLETED = -67,
  num_4 = -68,
  lambda_32 = -69,
  lambda_33 = -70,
  str_unhandled_event = -71,
  string_3 = -72,
  func_std_types__io___initialize = -73,
  func_std_types__io___get_events = -74,
  lambda_timeout_is_defined = -75,
  lambda_34 = -76,
  lambda_exit_codes_ofself = -77,
  lambda_35 = -78,
  func_handle_write_jobs = -79,
  lambda_36 = -80,
  func_wait_for_events = -81,
  lambda_37 = -82,
  lambda_CHILD_CHANGED_STATE = -83,
  lambda_watched_pids_ofselfpid = -84,
  lambda_38 = -85,
  lambda_WINDOW_CHANGED_SIZE = -86,
  lambda_39 = -87,
  lambda_catched_signals_ofselfsignal = -88,
  func_handle_write_requests = -89,
  lambda_40 = -90,
  lambda_41 = -91,
  lambda_42 = -92,
  string_4 = -93,
  string_5 = -94,
  str_t = -95,
  lambda_43 = -96,
  func_check_file_descriptors = -97,
  lambda_44 = -98,
  lambda_bytes_written_is_an_error = -99,
  lambda_45 = -100,
  lambda_46 = -101,
  lambda_47 = -102,
  func_attempt_reads = -103,
  lambda_48 = -104,
  lambda_49 = -105,
  lambda_50 = -106,
  lambda_51 = -107,
  lambda_does_listen = -108,
  lambda_conn_is_an_error = -109,
  lambda_52 = -110,
  func_do_read = -111,
  num_0x100000 = -112,
  lambda_buf_is_an_error = -113,
  lambda_53 = -114,
  lambda_buf_is_empty = -115,
  lambda_54 = -116,
  lambda_55 = -117,
  func_attempt_close_operations = -118,
  lambda_56 = -119,
  lambda_write_jobs_ofiofd_is_undefined = -120,
  lambda_57 = -121,
  func_attempt_exit = -122,
  lambda_58 = -123,
  lambda_59 = -124
};

enum {
  var__START = FIRST_VAR-1,
  var_std__READ, // initialized
  var_std__assign, // extern
  var_std__CLOSED, // initialized
  var_std__READ_ERROR, // initialized
  var_std__CONNECT, // initialized
  var_std__WRITE_PENDING, // initialized
  var_std__WRITE_COMPLETED, // initialized
  var_std__WRITE_ERROR, // initialized
  var_std__PROCESS_JOINED, // initialized
  var_std__SIGNAL, // initialized
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
  var_std__random_seed_of, // attribute
  var_std__step_no_of, // attribute
  var_std__current_time_of, // attribute
  var_read_descriptor_list_of, // attribute
  var_read_descriptor_set_of, // attribute
  var_write_jobs_of, // attribute
  var_close_jobs_of, // attribute
  var_watched_pids_of, // attribute
  var_exit_codes_of, // attribute
  var_do_inject_window_change_events, // attribute
  var_catched_signals_of, // attribute
  var_window_change_event_occurred, // attribute
  var_log_level_of, // attribute
  var_exit_code_of, // attribute
  var_timeout_of, // attribute
  var_std_types__io, // derived
  var_std_types__object, // extern
  var_empty_list, // extern
  var_empty_hash_set, // extern
  var_empty_hash_table, // extern
  var_false, // extern
  var_undefined, // extern
  var_random_seed_of, // extern polymorphic
  var_step_no_of, // extern polymorphic
  var_std_types__event, // initialized compound
  var_tuple, // extern
  var_start_reading_from, // extern polymorphic
  var_481_0_self, // dynamic
  var_482_0_fd, // dynamic
  var_true, // extern
  var_push, // extern
  var_if, // extern
  var_stop_reading_from, // extern polymorphic
  var_500_0_self, // dynamic
  var_501_0_fd, // dynamic
  var_507_1_new_read_descriptor_list, // dynamic
  var_509_3_read_fd, // dynamic
  var_std__equal, // extern
  var_next, // extern
  var_for_each, // extern
  var_print_to, // extern polymorphic
  var_create_string, // extern
  var_to_utf8, // extern
  var_write, // extern polymorphic
  var_539_0_data, // dynamic
  var_541_1_job, // dynamic
  var_is_defined, // extern
  var_append, // extern
  var_cancel_write, // extern polymorphic
  var_close, // extern polymorphic
  var_join_process, // extern polymorphic
  var_start_injecting_window_change_events, // extern polymorphic
  var_stop_injecting_window_change_events, // extern polymorphic
  var_start_catching_signals, // extern polymorphic
  var_630_0_self, // dynamic
  var_633_1_catched_signals, // dynamic
  var_stop_catching_signals, // extern polymorphic
  var_648_0_self, // dynamic
  var_651_1_catched_signals, // dynamic
  var_set_timeout, // extern polymorphic
  var_668_0_self, // dynamic
  var_669_0_timeout, // dynamic
  var_is_a_number, // extern
  var_current_time_of, // extern polymorphic
  var_std__plus, // extern
  var_update_if, // extern
  var_672_1_current_timeout, // dynamic
  var_is_undefined, // extern
  var_std__less, // extern
  var_std__or, // extern
  var_enable_logging, // extern polymorphic
  var_disable_logging, // extern polymorphic
  var_log, // extern polymorphic
  var_711_0_self, // dynamic
  var_712_0_level, // dynamic
  var_713_0_message, // dynamic
  var_std__not, // extern
  var_is_a_string, // extern
  var_update_if_not, // extern
  var_has_suffix, // extern
  var_split_into_lines, // extern
  var_720_1_prefix, // dynamic
  var_std__string, // extern
  var_721_1_buf, // dynamic
  var_range, // extern
  var_length_of, // extern
  var_spaces, // extern
  var_STDERR_FILENO, // extern
  var_exit, // extern polymorphic
  var_is_empty, // extern polymorphic
  var_756_0_self, // dynamic
  var_std__and, // extern
  var_std__log_unhandled_event, // initialized
  var_765_28_io, // dynamic
  var_766_7_type, // dynamic
  var_766_13_fd, // dynamic
  var_WRITE_ERROR, // extern
  var_WRITE_PENDING, // extern
  var_WRITE_COMPLETED, // extern
  var_std__sequence, // extern
  var_case, // extern
  var_serialize, // extern
  var_trim_right, // extern
  var_initialize, // extern polymorphic
  var_current_time, // extern
  var_get_events, // extern polymorphic
  var_809_0_self, // dynamic
  var_inc, // extern
  var_822_1_want_to_write, // dynamic
  var_824_1_timeout, // dynamic
  var_std__minus, // extern
  var_max, // extern
  var_any_of, // extern
  var_852_1_can_read, // dynamic
  var_853_1_can_write, // dynamic
  var_pselect, // extern
  var_857_1_events, // dynamic
  var_858_1_injected_into_stdin, // dynamic
  var_859_1_write_jobs, // dynamic
  var_861_3_signal, // dynamic
  var_CHILD_CHANGED_STATE, // extern
  var_864_7_pid, // dynamic
  var_864_12_status, // dynamic
  var_wait, // extern
  var_exitstatus, // extern
  var_PROCESS_JOINED, // extern
  var_new, // extern
  var_WINDOW_CHANGED_SIZE, // extern
  var_SIGNAL, // extern
  var_STDIN_FILENO, // extern
  var_get_terminal_size, // extern
  var_READ, // extern
  var_903_3_fd, // dynamic
  var_904_1_job, // dynamic
  var_905_8_bytes_written, // dynamic
  var_is_an_error, // extern
  var_931_3_fd, // dynamic
  var_not, // extern
  var_fstat, // extern
  var_type_of, // extern
  var_SOCKET, // extern
  var_is_listening, // extern
  var_939_9_conn, // dynamic
  var_accept, // extern
  var_READ_ERROR, // extern
  var_CONNECT, // extern
  var_953_7_buf, // dynamic
  var_read, // extern
  var_CLOSED, // extern
  var_if_not, // extern
  var_975_28_io, // dynamic
  var_977_3_fd, // dynamic
  var_986_16_io, // dynamic
  var_on, // extern
  var__END
};


static TAB_NUM t_func_std_types__io___start_reading_from[] = {
  2, // locals
  2, // parameters
  var_481_0_self,
  var_482_0_fd,
  // read_descriptor_set_of(self)(fd)
  var_read_descriptor_set_of, 1, var_481_0_self, 1, LOCAL(1),
  // read_descriptor_set_of(self)(fd)
  LOCAL(1), 1, var_482_0_fd, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1, lambda_2, TAIL_CALL,
  POS(485, 5),
  POS(485, 5),
  POS(484, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_481_0_self, TAIL_CALL,
  POS(486, 7)
};

static TAB_NUM t_lambda_2[] = {
  2, // locals
  0, // parameters
  // read_descriptor_set_of(fd) true
  var_read_descriptor_set_of, 1, var_481_0_self, 1, LOCAL(2),
  // read_descriptor_set_of(fd) true
  LOCAL(2), 2, var_482_0_fd, var_true, 1, LOCAL(2),
  // self.read_descriptor_set_of(fd) true
  LET, -1, var_481_0_self, var_read_descriptor_set_of, LOCAL(2), var_481_0_self,
  // read_descriptor_list_of fd
  var_read_descriptor_list_of, 1, var_481_0_self, 1, LOCAL(1),
  // push &self.read_descriptor_list_of fd
  var_push, 2, LOCAL(1), var_482_0_fd, 1, LOCAL(1),
  // self.read_descriptor_list_of fd
  LET, -1, var_481_0_self, var_read_descriptor_list_of, LOCAL(1), var_481_0_self,
  // -> self
  LET, 1, var_481_0_self, TAIL_CALL,
  POS(488, 13),
  POS(488, 13),
  POS(488, 8),
  POS(489, 18),
  POS(489, 7),
  POS(489, 13),
  POS(490, 7)
};

static TAB_NUM t_func_std_types__io___stop_reading_from[] = {
  2, // locals
  2, // parameters
  var_500_0_self,
  var_501_0_fd,
  // read_descriptor_set_of(self)(fd)
  var_read_descriptor_set_of, 1, var_500_0_self, 1, LOCAL(1),
  // read_descriptor_set_of(self)(fd)
  LOCAL(1), 1, var_501_0_fd, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_3, lambda_7, TAIL_CALL,
  POS(504, 5),
  POS(504, 5),
  POS(503, 3)
};

static TAB_NUM t_lambda_3[] = {
  2, // locals
  0, // parameters
  // read_descriptor_set_of(fd) false
  var_read_descriptor_set_of, 1, var_500_0_self, 1, LOCAL(2),
  // read_descriptor_set_of(fd) false
  LOCAL(2), 2, var_501_0_fd, var_false, 1, LOCAL(2),
  // self.read_descriptor_set_of(fd) false
  LET, -1, var_500_0_self, var_read_descriptor_set_of, LOCAL(2), var_500_0_self,
  // $new_read_descriptor_list empty_list
  LET, 1, var_empty_list, 1, var_507_1_new_read_descriptor_list,
  // read_descriptor_list_of(self)
  var_read_descriptor_list_of, 1, var_500_0_self, 1, LOCAL(1),
  // for_each read_descriptor_list_of(self)
  var_for_each, 3, LOCAL(1), lambda_4, lambda_6, TAIL_CALL,
  POS(506, 13),
  POS(506, 13),
  POS(506, 8),
  POS(507, 7),
  POS(508, 16),
  POS(508, 7)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  1, // parameters
  var_509_3_read_fd,
  // fd == read_fd
  var_std__equal, 2, var_501_0_fd, var_509_3_read_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_5, TAIL_CALL,
  POS(511, 13),
  POS(510, 11)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  // push &new_read_descriptor_list read_fd
  var_push, 2, var_507_1_new_read_descriptor_list, var_509_3_read_fd, 1, var_507_1_new_read_descriptor_list,
  // next
  var_next, 0, TAIL_CALL,
  POS(514, 15),
  POS(515, 15)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // self.read_descriptor_list_of new_read_descriptor_list
  LET, -1, var_500_0_self, var_read_descriptor_list_of, var_507_1_new_read_descriptor_list, var_500_0_self,
  // -> self
  LET, 1, var_500_0_self, TAIL_CALL,
  POS(517, 12),
  POS(518, 11)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_500_0_self, TAIL_CALL,
  POS(519, 7)
};

static TAB_NUM t_func_std_types__io___print_to[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 523_0_self
  MANDATORY_PARAMETER, LOCAL(4), // 524_0_fd
  REST_PARAMETER, LOCAL(5), // 525_0_args
  // create_string(args).to_utf8
  var_create_string, 1, LOCAL(5), 1, LOCAL(1),
  // to_utf8
  var_to_utf8, 1, LOCAL(1), 1, LOCAL(2),
  // write self fd create_string(args).to_utf8
  var_write, 3, LOCAL(3), LOCAL(4), LOCAL(2), TAIL_CALL,
  POS(527, 17),
  POS(527, 37),
  POS(527, 3)
};

static TAB_NUM t_func_std_types__io___write[] = {
  4, // locals
  3, // parameters
  LOCAL(3), // 537_0_self
  LOCAL(4), // 538_0_fd
  var_539_0_data,
  // write_jobs_of(self)(fd)
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(1),
  // $job write_jobs_of(self)(fd)
  LOCAL(1), 1, LOCAL(4), 1, var_541_1_job,
  // is_defined
  var_is_defined, 1, var_541_1_job, 1, LOCAL(1),
  // !job
  var_if, 3, LOCAL(1), lambda_8, lambda_9, 1, var_541_1_job,
  // write_jobs_of(fd) job
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(2),
  // write_jobs_of(fd) job
  LOCAL(2), 2, LOCAL(4), var_541_1_job, 1, LOCAL(2),
  // self.write_jobs_of(fd) job
  LET, -1, LOCAL(3), var_write_jobs_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(541, 8),
  POS(541, 3),
  POS(544, 11),
  POS(542, 3),
  POS(547, 9),
  POS(547, 9),
  POS(547, 4),
  POS(548, 3)
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // append(job data)
  var_append, 2, var_541_1_job, var_539_0_data, 1, LOCAL(1),
  //  append(job data)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(545, 10),
  POS(545, 9)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_539_0_data, TAIL_CALL,
  POS(546, 9)
};

static TAB_NUM t_func_std_types__io___cancel_write[] = {
  5, // locals
  2, // parameters
  LOCAL(3), // 558_0_self
  LOCAL(4), // 559_0_fd
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
  POS(561, 19),
  POS(561, 3),
  POS(562, 9),
  POS(562, 9),
  POS(562, 4),
  POS(563, 3)
};

static TAB_NUM t_func_std_types__io___close[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 577_0_self
  LOCAL(4), // 578_0_fd
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
  POS(580, 3),
  POS(581, 9),
  POS(581, 9),
  POS(581, 4),
  POS(582, 3)
};

static TAB_NUM t_func_std_types__io___join_process[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 592_0_self
  LOCAL(4), // 593_0_pid
  // watched_pids_of(pid) true
  var_watched_pids_of, 1, LOCAL(3), 1, LOCAL(2),
  // watched_pids_of(pid) true
  LOCAL(2), 2, LOCAL(4), var_true, 1, LOCAL(2),
  // self.watched_pids_of(pid) true
  LET, -1, LOCAL(3), var_watched_pids_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(595, 9),
  POS(595, 9),
  POS(595, 4),
  POS(596, 3)
};

static TAB_NUM t_func_std_types__io___start_injecting_window_change_events[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 606_0_self
  // .do_inject_window_change_events true)
  LET, -1, LOCAL(2), var_do_inject_window_change_events, var_true, LOCAL(1),
  // -> self(.do_inject_window_change_events true)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(608, 11),
  POS(608, 3)
};

static TAB_NUM t_func_std_types__io___stop_injecting_window_change_events[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 618_0_self
  // .do_inject_window_change_events false)
  LET, -1, LOCAL(2), var_do_inject_window_change_events, var_false, LOCAL(1),
  // -> self(.do_inject_window_change_events false)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(620, 11),
  POS(620, 3)
};

static TAB_NUM t_func_std_types__io___start_catching_signals[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_630_0_self,
  REST_PARAMETER, LOCAL(1), // 631_0_signals
  // $catched_signals catched_signals_of(self)
  var_catched_signals_of, 1, var_630_0_self, 1, var_633_1_catched_signals,
  // for_each signals
  var_for_each, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(633, 3),
  POS(634, 3)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 635_3_signal
  // catched_signals(signal) true
  var_633_1_catched_signals, 2, LOCAL(1), var_true, 1, var_633_1_catched_signals,
  // next
  var_next, 0, TAIL_CALL,
  POS(636, 8),
  POS(637, 7)
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // .catched_signals_of catched_signals)
  LET, -1, var_630_0_self, var_catched_signals_of, var_633_1_catched_signals, LOCAL(1),
  //  self(.catched_signals_of catched_signals)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(638, 13),
  POS(638, 7)
};

static TAB_NUM t_func_std_types__io___stop_catching_signals[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_648_0_self,
  REST_PARAMETER, LOCAL(1), // 649_0_signals
  // $catched_signals catched_signals_of(self)
  var_catched_signals_of, 1, var_648_0_self, 1, var_651_1_catched_signals,
  // for_each signals
  var_for_each, 3, LOCAL(1), lambda_12, lambda_13, TAIL_CALL,
  POS(651, 3),
  POS(652, 3)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 653_3_signal
  // catched_signals(signal) false
  var_651_1_catched_signals, 2, LOCAL(1), var_false, 1, var_651_1_catched_signals,
  // next
  var_next, 0, TAIL_CALL,
  POS(654, 8),
  POS(655, 7)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // .catched_signals_of catched_signals)
  LET, -1, var_648_0_self, var_catched_signals_of, var_651_1_catched_signals, LOCAL(1),
  //  self(.catched_signals_of catched_signals)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(656, 13),
  POS(656, 7)
};

static TAB_NUM t_func_std_types__io___set_timeout[] = {
  2, // locals
  2, // parameters
  var_668_0_self,
  var_669_0_timeout,
  // is_a_number &timeout -> current_time_of(self)+timeout
  var_is_a_number, 1, var_669_0_timeout, 1, LOCAL(1),
  // update_if timeout.is_a_number &timeout -> current_time_of(self)+timeout
  var_update_if, 3, LOCAL(1), var_669_0_timeout, lambda_14, 1, var_669_0_timeout,
  // $current_timeout timeout_of(self)
  var_timeout_of, 1, var_668_0_self, 1, var_672_1_current_timeout,
  // is_undefined || timeout < current_timeout
  var_is_undefined, 1, var_672_1_current_timeout, 1, LOCAL(1),
  // is_undefined || timeout < current_timeout
  var_std__or, 2, LOCAL(1), lambda_15, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_16, lambda_17, TAIL_CALL,
  POS(671, 21),
  POS(671, 3),
  POS(672, 3),
  POS(674, 21),
  POS(674, 21),
  POS(673, 3)
};

static TAB_NUM t_lambda_14[] = {
  2, // locals
  0, // parameters
  // current_time_of(self)+timeout
  var_current_time_of, 1, var_668_0_self, 1, LOCAL(1),
  // current_time_of(self)+timeout
  var_std__plus, 2, LOCAL(1), var_669_0_timeout, 1, LOCAL(2),
  //  current_time_of(self)+timeout
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(671, 45),
  POS(671, 45),
  POS(671, 44)
};

static TAB_NUM t_lambda_15[] = {
  1, // locals
  0, // parameters
  // timeout < current_timeout
  var_std__less, 2, var_669_0_timeout, var_672_1_current_timeout, 1, LOCAL(1),
  // timeout < current_timeout
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(674, 37),
  POS(674, 37)
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // .timeout_of timeout)
  LET, -1, var_668_0_self, var_timeout_of, var_669_0_timeout, LOCAL(1),
  //  self(.timeout_of timeout)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(675, 13),
  POS(675, 7)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_668_0_self, TAIL_CALL,
  POS(676, 7)
};

static TAB_NUM t_func_std_types__io___enable_logging[] = {
  3, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 686_0_self
  num_1, LOCAL(3), // 687_0_level
  // .log_level_of level)
  LET, -1, LOCAL(2), var_log_level_of, LOCAL(3), LOCAL(1),
  // -> self(.log_level_of level)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(689, 11),
  POS(689, 3)
};

static TAB_NUM t_func_std_types__io___disable_logging[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 699_0_self
  // .log_level_of 0)
  LET, -1, LOCAL(2), var_log_level_of, num_0, LOCAL(1),
  // -> self(.log_level_of 0)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(701, 11),
  POS(701, 3)
};

static TAB_NUM t_func_std_types__io___log[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_711_0_self,
  num_1, var_712_0_level,
  MANDATORY_PARAMETER, var_713_0_message,
  // log_level_of(self):
  var_log_level_of, 1, var_711_0_self, 1, LOCAL(1),
  // log_level_of(self):
  var_std__less, 2, LOCAL(1), var_712_0_level, 1, LOCAL(2),
  // log_level_of(self):
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_18, lambda_23, TAIL_CALL,
  POS(716, 14),
  POS(716, 14),
  POS(716, 14),
  POS(715, 3)
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  0, // parameters
  // is_a_string &message -> message()
  var_is_a_string, 1, var_713_0_message, 1, LOCAL(1),
  // update_if_not message.is_a_string &message -> message()
  var_update_if_not, 3, LOCAL(1), var_713_0_message, lambda_19, 1, var_713_0_message,
  // message .has_suffix. '@nl;' &message: push message '@nl;'
  var_has_suffix, 2, var_713_0_message, chr_10, 1, LOCAL(1),
  // update_if_not message .has_suffix. '@nl;' &message: push message '@nl;'
  var_update_if_not, 3, LOCAL(1), var_713_0_message, lambda_20, 1, var_713_0_message,
  // $lines split_into_lines(message)
  var_split_into_lines, 1, var_713_0_message, 1, LOCAL(2),
  // $prefix "[@(level)] "
  var_std__string, 3, string_1, var_712_0_level, string_2, 1, var_720_1_prefix,
  // lines(1))
  LOCAL(2), 1, num_1, 1, LOCAL(1),
  // $buf append(prefix lines(1))
  var_append, 2, var_720_1_prefix, LOCAL(1), 1, var_721_1_buf,
  // range &lines 2 -1
  var_range, 3, LOCAL(2), num_2, minus_num_1, 1, LOCAL(2),
  // for_each lines
  var_for_each, 3, LOCAL(2), lambda_21, lambda_22, TAIL_CALL,
  POS(717, 29),
  POS(717, 7),
  POS(718, 21),
  POS(718, 7),
  POS(719, 7),
  POS(720, 7),
  POS(721, 26),
  POS(721, 7),
  POS(722, 7),
  POS(723, 7)
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // message()
  var_713_0_message, 0, 1, LOCAL(1),
  //  message()
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(717, 53),
  POS(717, 52)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  // push message '@nl;'
  var_push, 2, var_713_0_message, chr_10, TAIL_CALL,
  POS(718, 59)
};

static TAB_NUM t_lambda_21[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 724_3_line
  // length_of(prefix)) line
  var_length_of, 1, var_720_1_prefix, 1, LOCAL(1),
  // spaces(length_of(prefix)) line
  var_spaces, 1, LOCAL(1), 1, LOCAL(2),
  // append &buf spaces(length_of(prefix)) line
  var_append, 3, var_721_1_buf, LOCAL(2), LOCAL(3), 1, var_721_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(725, 30),
  POS(725, 23),
  POS(725, 11),
  POS(726, 11)
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // to_utf8
  var_to_utf8, 1, var_721_1_buf, 1, LOCAL(1),
  // write self STDERR_FILENO buf.to_utf8
  var_write, 3, var_711_0_self, var_STDERR_FILENO, LOCAL(1), TAIL_CALL,
  POS(728, 40),
  POS(728, 11)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_711_0_self, TAIL_CALL,
  POS(729, 7)
};

static TAB_NUM t_func_std_types__io___exit[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 739_0_self
  LOCAL(3), // 740_0_exit_code
  // self
  LET, -3, LOCAL(2), var_exit_code_of, LOCAL(3), var_read_descriptor_list_of, var_empty_list, var_read_descriptor_set_of, var_empty_hash_set, LOCAL(1),
  // ->
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(743, 5),
  POS(742, 3)
};

static TAB_NUM t_func_std_types__io___is_empty[] = {
  3, // locals
  1, // parameters
  var_756_0_self,
  // read_descriptor_list_of(self).is_empty
  var_read_descriptor_list_of, 1, var_756_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_24, 1, LOCAL(3),
  // ->
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(760, 7),
  POS(760, 37),
  POS(759, 7),
  POS(758, 3)
};

static TAB_NUM t_lambda_24[] = {
  3, // locals
  0, // parameters
  // write_jobs_of(self).is_empty
  var_write_jobs_of, 1, var_756_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_25, 1, LOCAL(3),
  // write_jobs_of(self).is_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(761, 7),
  POS(761, 27),
  POS(759, 7),
  POS(761, 7)
};

static TAB_NUM t_lambda_25[] = {
  3, // locals
  0, // parameters
  // close_jobs_of(self).is_empty
  var_close_jobs_of, 1, var_756_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_26, 1, LOCAL(3),
  // close_jobs_of(self).is_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(762, 7),
  POS(762, 27),
  POS(759, 7),
  POS(762, 7)
};

static TAB_NUM t_lambda_26[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(self).is_empty
  var_watched_pids_of, 1, var_756_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // watched_pids_of(self).is_empty
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(763, 7),
  POS(763, 29),
  POS(763, 7)
};

static TAB_NUM t_func_std__log_unhandled_event[] = {
  4, // locals
  2, // parameters
  var_765_28_io,
  LOCAL(4), // 765_31_event
  // event $type $fd $_argument
  LOCAL(4), 0, 3, var_766_7_type, var_766_13_fd, LOCAL(1),
  // type == WRITE_ERROR
  var_std__equal, 2, var_766_7_type, var_WRITE_ERROR, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_27, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_29, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_30, lambda_31, TAIL_CALL,
  POS(766, 3),
  POS(770, 9),
  POS(769, 9),
  POS(768, 7),
  POS(767, 3)
};

static TAB_NUM t_lambda_27[] = {
  2, // locals
  0, // parameters
  // type == WRITE_PENDING
  var_std__equal, 2, var_766_7_type, var_WRITE_PENDING, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_28, 1, LOCAL(2),
  // type == WRITE_PENDING
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(771, 9),
  POS(769, 9),
  POS(771, 9)
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // type == WRITE_COMPLETED
  var_std__equal, 2, var_766_7_type, var_WRITE_COMPLETED, 1, LOCAL(1),
  // type == WRITE_COMPLETED
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(772, 9),
  POS(772, 9)
};

static TAB_NUM t_lambda_29[] = {
  1, // locals
  0, // parameters
  // fd == STDERR_FILENO
  var_std__equal, 2, var_766_13_fd, var_STDERR_FILENO, 1, LOCAL(1),
  // fd == STDERR_FILENO
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(773, 7),
  POS(773, 7)
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  //  io # prevent recursive logging
  LET, 1, var_765_28_io, TAIL_CALL,
  POS(774, 7)
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  0, // parameters
  // WRITE_PENDING,WRITE_COMPLETED -> 4
  var_std__sequence, 2, var_WRITE_PENDING, var_WRITE_COMPLETED, 1, LOCAL(1),
  // $log_level
  var_case, 4, var_766_7_type, LOCAL(1), lambda_WRITE_PENDINGWRITE_COMPLETED, lambda_32, 1, LOCAL(2),
  // log io log_level -> "
  var_log, 3, var_765_28_io, LOCAL(2), lambda_33, TAIL_CALL,
  POS(779, 11),
  POS(776, 7),
  POS(781, 7)
};

static TAB_NUM t_lambda_WRITE_PENDINGWRITE_COMPLETED[] = {
  0, // locals
  0, // parameters
  //  4
  LET, 1, num_4, TAIL_CALL,
  POS(779, 43)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  //  2
  LET, 1, num_2, TAIL_CALL,
  POS(780, 13)
};

static TAB_NUM t_lambda_33[] = {
  4, // locals
  0, // parameters
  // serialize(type).trim_right) - @(serialize(fd))@
  var_serialize, 1, var_766_7_type, 1, LOCAL(1),
  // trim_right) - @(serialize(fd))@
  var_trim_right, 1, LOCAL(1), 1, LOCAL(2),
  // serialize(fd))@
  var_serialize, 1, var_766_13_fd, 1, LOCAL(3),
  // "
  var_std__string, 4, str_unhandled_event, LOCAL(2), string_3, LOCAL(3), 1, LOCAL(4),
  //  "
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(782, 27),
  POS(782, 43),
  POS(782, 59),
  POS(781, 27),
  POS(781, 26)
};

static TAB_NUM t_func_std_types__io___initialize[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 794_0_self
  // current_time! $t
  var_current_time, 0, IO_CALL(1), LOCAL(3),
  // .current_time_of t)
  LET, -1, LOCAL(2), var_current_time_of, LOCAL(3), LOCAL(1),
  // -> self(.current_time_of t)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(796, 3),
  POS(797, 11),
  POS(797, 3)
};

static TAB_NUM t_func_std_types__io___get_events[] = {
  1, // locals
  1, // parameters
  var_809_0_self,
  // step_no_of
  var_step_no_of, 1, var_809_0_self, 1, LOCAL(1),
  // inc &self.step_no_of
  var_inc, 1, LOCAL(1), 1, LOCAL(1),
  // self.step_no_of
  LET, -1, var_809_0_self, var_step_no_of, LOCAL(1), var_809_0_self,
  // attempt_close_operations! &self
  func_attempt_close_operations, 1, var_809_0_self, IO_CALL(1), var_809_0_self,
  // attempt_exit! self
  func_attempt_exit, 1, var_809_0_self, IO_CALL(0),
  // $want_to_write empty_list
  LET, 1, var_empty_list, 1, var_822_1_want_to_write,
  // $timeout timeout_of(self)
  var_timeout_of, 1, var_809_0_self, 1, var_824_1_timeout,
  // is_defined:
  var_is_defined, 1, var_824_1_timeout, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_timeout_is_defined, func_handle_write_jobs, IO_TAIL_CALL,
  POS(815, 13),
  POS(815, 3),
  POS(815, 8),
  POS(817, 3),
  POS(819, 3),
  POS(822, 3),
  POS(824, 3),
  POS(826, 13),
  POS(825, 3)
};

static TAB_NUM t_lambda_timeout_is_defined[] = {
  3, // locals
  0, // parameters
  // self.timeout_of undefined
  LET, -1, var_809_0_self, var_timeout_of, var_undefined, var_809_0_self,
  // current_time! $t
  var_current_time, 0, IO_CALL(1), LOCAL(3),
  // timeout-t 0)
  var_std__minus, 2, var_824_1_timeout, LOCAL(3), 1, LOCAL(1),
  // !timeout max(timeout-t 0)
  var_max, 2, LOCAL(1), num_0, 1, var_824_1_timeout,
  // 0
  var_std__less, 2, num_0, var_824_1_timeout, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_34, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_35, func_handle_write_jobs, IO_TAIL_CALL,
  POS(827, 8),
  POS(828, 7),
  POS(829, 20),
  POS(829, 7),
  POS(832, 21),
  POS(831, 11),
  POS(830, 7)
};

static TAB_NUM t_lambda_34[] = {
  2, // locals
  0, // parameters
  // exit_codes_of(self): (pid _exit_code)
  var_exit_codes_of, 1, var_809_0_self, 1, LOCAL(1),
  // any_of
  var_any_of, 2, LOCAL(1), lambda_exit_codes_ofself, 1, LOCAL(2),
  // any_of
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(834, 13),
  POS(833, 11),
  POS(833, 11)
};

static TAB_NUM t_lambda_exit_codes_ofself[] = {
  3, // locals
  2, // parameters
  LOCAL(3), // 834_22_pid
  LOCAL(1),
  // watched_pids_of(self)(pid)
  var_watched_pids_of, 1, var_809_0_self, 1, LOCAL(1),
  // watched_pids_of(self)(pid)
  LOCAL(1), 1, LOCAL(3), 1, LOCAL(2),
  // -> watched_pids_of(self)(pid)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(835, 18),
  POS(835, 18),
  POS(835, 15)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  // !timeout 0
  LET, 1, num_0, 1, var_824_1_timeout,
  // handle_write_jobs!
  func_handle_write_jobs, 0, IO_TAIL_CALL,
  POS(837, 11),
  POS(838, 11)
};

static TAB_NUM t_func_handle_write_jobs[] = {
  1, // locals
  0, // parameters
  // write_jobs_of(self)
  var_write_jobs_of, 1, var_809_0_self, 1, LOCAL(1),
  // for_each write_jobs_of(self)
  var_for_each, 3, LOCAL(1), lambda_36, func_wait_for_events, IO_TAIL_CALL,
  POS(843, 14),
  POS(843, 5)
};

static TAB_NUM t_lambda_36[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 844_3_fd
  LOCAL(1),
  // push &want_to_write fd
  var_push, 2, var_822_1_want_to_write, LOCAL(2), 1, var_822_1_want_to_write,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(845, 9),
  POS(846, 9)
};

static TAB_NUM t_func_wait_for_events[] = {
  3, // locals
  0, // parameters
  // read_descriptor_list_of(self)
  var_read_descriptor_list_of, 1, var_809_0_self, 1, LOCAL(1),
  // pselect!
  var_pselect, 4, LOCAL(1), var_822_1_want_to_write, var_empty_list, var_824_1_timeout, IO_CALL(4), LOCAL(3), var_852_1_can_read, var_853_1_can_write, LOCAL(2),
  // current_time! !self.current_time_of
  var_current_time, 0, IO_CALL(1), LOCAL(1),
  // self.current_time_of
  LET, -1, var_809_0_self, var_current_time_of, LOCAL(1), var_809_0_self,
  // $events empty_list
  LET, 1, var_empty_list, 1, var_857_1_events,
  // $injected_into_stdin false
  LET, 1, var_false, 1, var_858_1_injected_into_stdin,
  // $write_jobs write_jobs_of(self)
  var_write_jobs_of, 1, var_809_0_self, 1, var_859_1_write_jobs,
  // for_each signals
  var_for_each, 3, LOCAL(3), lambda_37, func_handle_write_requests, IO_TAIL_CALL,
  POS(852, 19),
  POS(850, 7),
  POS(856, 7),
  POS(856, 22),
  POS(857, 7),
  POS(858, 7),
  POS(859, 7),
  POS(860, 7)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  1, // parameters
  var_861_3_signal,
  // case signal
  var_case, 6, var_861_3_signal, var_CHILD_CHANGED_STATE, lambda_CHILD_CHANGED_STATE, var_WINDOW_CHANGED_SIZE, lambda_WINDOW_CHANGED_SIZE, lambda_39, IO_TAIL_CALL,
  POS(862, 11)
};

static TAB_NUM t_lambda_CHILD_CHANGED_STATE[] = {
  2, // locals
  0, // parameters
  // wait! $pid $status
  var_wait, 0, IO_CALL(2), var_864_7_pid, var_864_12_status,
  // exitstatus &status
  var_exitstatus, 1, var_864_12_status, 1, var_864_12_status,
  // watched_pids_of(self)(pid):
  var_watched_pids_of, 1, var_809_0_self, 1, LOCAL(1),
  // watched_pids_of(self)(pid):
  LOCAL(1), 1, var_864_7_pid, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_watched_pids_ofselfpid, lambda_38, IO_TAIL_CALL,
  POS(864, 15),
  POS(865, 15),
  POS(867, 17),
  POS(867, 17),
  POS(866, 15)
};

static TAB_NUM t_lambda_watched_pids_ofselfpid[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(pid) false
  var_watched_pids_of, 1, var_809_0_self, 1, LOCAL(2),
  // watched_pids_of(pid) false
  LOCAL(2), 2, var_864_7_pid, var_false, 1, LOCAL(2),
  // self.watched_pids_of(pid) false
  LET, -1, var_809_0_self, var_watched_pids_of, LOCAL(2), var_809_0_self,
  // new(std_types::event PROCESS_JOINED pid status)
  var_new, 4, var_std_types__event, var_PROCESS_JOINED, var_864_7_pid, var_864_12_status, 1, LOCAL(1),
  // push &events new(std_types::event PROCESS_JOINED pid status)
  var_push, 2, var_857_1_events, LOCAL(1), 1, var_857_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(868, 25),
  POS(868, 25),
  POS(868, 20),
  POS(869, 32),
  POS(869, 19),
  POS(870, 19)
};

static TAB_NUM t_lambda_38[] = {
  2, // locals
  0, // parameters
  // exit_codes_of(pid) status
  var_exit_codes_of, 1, var_809_0_self, 1, LOCAL(2),
  // exit_codes_of(pid) status
  LOCAL(2), 2, var_864_7_pid, var_864_12_status, 1, LOCAL(2),
  // self.exit_codes_of(pid) status
  LET, -1, var_809_0_self, var_exit_codes_of, LOCAL(2), var_809_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(872, 25),
  POS(872, 25),
  POS(872, 20),
  POS(873, 19)
};

static TAB_NUM t_lambda_WINDOW_CHANGED_SIZE[] = {
  0, // locals
  0, // parameters
  // self.window_change_event_occurred true
  LET, -1, var_809_0_self, var_window_change_event_occurred, var_true, var_809_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(875, 16),
  POS(876, 15)
};

static TAB_NUM t_lambda_39[] = {
  2, // locals
  0, // parameters
  // catched_signals_of(self)(signal):
  var_catched_signals_of, 1, var_809_0_self, 1, LOCAL(1),
  // catched_signals_of(self)(signal):
  LOCAL(1), 1, var_861_3_signal, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_catched_signals_ofselfsignal, var_next, IO_TAIL_CALL,
  POS(879, 17),
  POS(879, 17),
  POS(878, 15)
};

static TAB_NUM t_lambda_catched_signals_ofselfsignal[] = {
  1, // locals
  0, // parameters
  // new(std_types::event SIGNAL undefined signal)
  var_new, 4, var_std_types__event, var_SIGNAL, var_undefined, var_861_3_signal, 1, LOCAL(1),
  // push &events new(std_types::event SIGNAL undefined signal)
  var_push, 2, var_857_1_events, LOCAL(1), 1, var_857_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(880, 32),
  POS(880, 19),
  POS(881, 19)
};

static TAB_NUM t_func_handle_write_requests[] = {
  2, // locals
  0, // parameters
  // window_change_event_occurred
  var_window_change_event_occurred, 1, var_809_0_self, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_40, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_42, lambda_43, IO_TAIL_CALL,
  POS(888, 18),
  POS(887, 13),
  POS(886, 9)
};

static TAB_NUM t_lambda_40[] = {
  2, // locals
  0, // parameters
  // do_inject_window_change_events
  var_do_inject_window_change_events, 1, var_809_0_self, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_41, 1, LOCAL(2),
  // self.do_inject_window_change_events
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(889, 18),
  POS(887, 13),
  POS(889, 13)
};

static TAB_NUM t_lambda_41[] = {
  2, // locals
  0, // parameters
  // read_descriptor_set_of(self)(STDIN_FILENO)
  var_read_descriptor_set_of, 1, var_809_0_self, 1, LOCAL(1),
  // read_descriptor_set_of(self)(STDIN_FILENO)
  LOCAL(1), 1, var_STDIN_FILENO, 1, LOCAL(2),
  // read_descriptor_set_of(self)(STDIN_FILENO)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(890, 13),
  POS(890, 13),
  POS(890, 13)
};

static TAB_NUM t_lambda_42[] = {
  4, // locals
  0, // parameters
  // get_terminal_size! STDIN_FILENO $width $height
  var_get_terminal_size, 1, var_STDIN_FILENO, IO_CALL(2), LOCAL(2), LOCAL(3),
  // self.window_change_event_occurred false
  LET, -1, var_809_0_self, var_window_change_event_occurred, var_false, var_809_0_self,
  // $buf "@esc;[8;@(height);@(width)t"
  var_std__string, 5, string_4, LOCAL(3), string_5, LOCAL(2), str_t, 1, LOCAL(4),
  // new(std_types::event READ STDIN_FILENO buf)
  var_new, 4, var_std_types__event, var_READ, var_STDIN_FILENO, LOCAL(4), 1, LOCAL(1),
  // push &events new(std_types::event READ STDIN_FILENO buf)
  var_push, 2, var_857_1_events, LOCAL(1), 1, var_857_1_events,
  // !injected_into_stdin true
  LET, 1, var_true, 1, var_858_1_injected_into_stdin,
  // check_file_descriptors!
  func_check_file_descriptors, 0, IO_TAIL_CALL,
  POS(892, 13),
  POS(893, 14),
  POS(894, 13),
  POS(895, 26),
  POS(895, 13),
  POS(896, 13),
  POS(897, 13)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  // check_file_descriptors!
  func_check_file_descriptors, 0, IO_TAIL_CALL,
  POS(899, 13)
};

static TAB_NUM t_func_check_file_descriptors[] = {
  0, // locals
  0, // parameters
  // for_each can_write
  var_for_each, 3, var_853_1_can_write, lambda_44, func_attempt_reads, IO_TAIL_CALL,
  POS(902, 9)
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  1, // parameters
  var_903_3_fd,
  // $job write_jobs(fd)
  var_859_1_write_jobs, 1, var_903_3_fd, 1, var_904_1_job,
  // write! $bytes_written fd job
  var_write, 2, var_903_3_fd, var_904_1_job, IO_CALL(1), var_905_8_bytes_written,
  // is_an_error:
  var_is_an_error, 1, var_905_8_bytes_written, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_bytes_written_is_an_error, lambda_45, IO_TAIL_CALL,
  POS(904, 13),
  POS(905, 13),
  POS(907, 29),
  POS(906, 13)
};

static TAB_NUM t_lambda_bytes_written_is_an_error[] = {
  2, // locals
  0, // parameters
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, var_809_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, var_903_3_fd, var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, var_809_0_self, var_write_jobs_of, LOCAL(2), var_809_0_self,
  // tuple(bytes_written job)
  var_tuple, 2, var_905_8_bytes_written, var_904_1_job, 1, LOCAL(1),
  // new
  var_new, 4, var_std_types__event, var_WRITE_ERROR, var_903_3_fd, LOCAL(1), 1, LOCAL(2),
  // push &events
  var_push, 2, var_857_1_events, LOCAL(2), 1, var_857_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(908, 23),
  POS(908, 23),
  POS(908, 18),
  POS(913, 21),
  POS(910, 19),
  POS(909, 17),
  POS(914, 17)
};

static TAB_NUM t_lambda_45[] = {
  2, // locals
  0, // parameters
  // length_of(job):
  var_length_of, 1, var_904_1_job, 1, LOCAL(1),
  // bytes_written < length_of(job):
  var_std__less, 2, var_905_8_bytes_written, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_46, lambda_47, IO_TAIL_CALL,
  POS(917, 35),
  POS(917, 19),
  POS(916, 17)
};

static TAB_NUM t_lambda_46[] = {
  2, // locals
  0, // parameters
  // bytes_written+1 -1
  var_std__plus, 2, var_905_8_bytes_written, num_1, 1, LOCAL(1),
  // range &job bytes_written+1 -1
  var_range, 3, var_904_1_job, LOCAL(1), minus_num_1, 1, var_904_1_job,
  // write_jobs_of(fd) job # remaining text to write
  var_write_jobs_of, 1, var_809_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) job # remaining text to write
  LOCAL(2), 2, var_903_3_fd, var_904_1_job, 1, LOCAL(2),
  // self.write_jobs_of(fd) job # remaining text to write
  LET, -1, var_809_0_self, var_write_jobs_of, LOCAL(2), var_809_0_self,
  // new(std_types::event WRITE_PENDING fd job)
  var_new, 4, var_std_types__event, var_WRITE_PENDING, var_903_3_fd, var_904_1_job, 1, LOCAL(1),
  // push &events new(std_types::event WRITE_PENDING fd job)
  var_push, 2, var_857_1_events, LOCAL(1), 1, var_857_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(918, 32),
  POS(918, 21),
  POS(919, 27),
  POS(919, 27),
  POS(919, 22),
  POS(920, 34),
  POS(920, 21),
  POS(921, 21)
};

static TAB_NUM t_lambda_47[] = {
  2, // locals
  0, // parameters
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, var_809_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, var_903_3_fd, var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, var_809_0_self, var_write_jobs_of, LOCAL(2), var_809_0_self,
  // new(std_types::event WRITE_COMPLETED fd undefined)
  var_new, 4, var_std_types__event, var_WRITE_COMPLETED, var_903_3_fd, var_undefined, 1, LOCAL(1),
  // push &events
  var_push, 2, var_857_1_events, LOCAL(1), 1, var_857_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(923, 27),
  POS(923, 27),
  POS(923, 22),
  POS(925, 23),
  POS(924, 21),
  POS(926, 21)
};

static TAB_NUM t_func_attempt_reads[] = {
  0, // locals
  0, // parameters
  // for_each can_read
  var_for_each, 3, var_852_1_can_read, lambda_48, lambda_55, IO_TAIL_CALL,
  POS(930, 9)
};

static TAB_NUM t_lambda_48[] = {
  3, // locals
  1, // parameters
  var_931_3_fd,
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__equal, 2, var_931_3_fd, var_STDIN_FILENO, 1, LOCAL(1),
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__or, 2, LOCAL(2), lambda_49, 1, LOCAL(3),
  // if_not fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_if_not, 3, LOCAL(3), var_next, lambda_50, IO_TAIL_CALL,
  POS(932, 20),
  POS(932, 20),
  POS(932, 20),
  POS(932, 13)
};

static TAB_NUM t_lambda_49[] = {
  1, // locals
  0, // parameters
  // not(injected_into_stdin) next:
  var_not, 1, var_858_1_injected_into_stdin, 1, LOCAL(1),
  // not(injected_into_stdin) next:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(932, 42),
  POS(932, 42)
};

static TAB_NUM t_lambda_50[] = {
  3, // locals
  0, // parameters
  // fstat! fd $info
  var_fstat, 1, var_931_3_fd, IO_CALL(1), LOCAL(3),
  // type_of(info) == SOCKET:
  var_type_of, 1, LOCAL(3), 1, LOCAL(1),
  // type_of(info) == SOCKET:
  var_std__equal, 2, LOCAL(1), var_SOCKET, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_51, func_do_read, IO_TAIL_CALL,
  POS(933, 15),
  POS(935, 17),
  POS(935, 17),
  POS(934, 15)
};

static TAB_NUM t_lambda_51[] = {
  1, // locals
  0, // parameters
  // is_listening! $does_listen fd
  var_is_listening, 1, var_931_3_fd, IO_CALL(1), LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_does_listen, func_do_read, IO_TAIL_CALL,
  POS(936, 19),
  POS(937, 19)
};

static TAB_NUM t_lambda_does_listen[] = {
  1, // locals
  0, // parameters
  // accept! $conn fd
  var_accept, 1, var_931_3_fd, IO_CALL(1), var_939_9_conn,
  // is_an_error:
  var_is_an_error, 1, var_939_9_conn, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_conn_is_an_error, lambda_52, IO_TAIL_CALL,
  POS(939, 23),
  POS(941, 30),
  POS(940, 23)
};

static TAB_NUM t_lambda_conn_is_an_error[] = {
  1, // locals
  0, // parameters
  // new(std_types::event READ_ERROR fd conn)
  var_new, 4, var_std_types__event, var_READ_ERROR, var_931_3_fd, var_939_9_conn, 1, LOCAL(1),
  // push &events
  var_push, 2, var_857_1_events, LOCAL(1), 1, var_857_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(943, 29),
  POS(942, 27),
  POS(944, 27)
};

static TAB_NUM t_lambda_52[] = {
  1, // locals
  0, // parameters
  // new(std_types::event CONNECT fd conn)
  var_new, 4, var_std_types__event, var_CONNECT, var_931_3_fd, var_939_9_conn, 1, LOCAL(1),
  // push &events
  var_push, 2, var_857_1_events, LOCAL(1), 1, var_857_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(947, 29),
  POS(946, 27),
  POS(948, 27)
};

static TAB_NUM t_func_do_read[] = {
  1, // locals
  0, // parameters
  // read! $buf fd 0x10'0000
  var_read, 2, var_931_3_fd, num_0x100000, IO_CALL(1), var_953_7_buf,
  // is_an_error:
  var_is_an_error, 1, var_953_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_an_error, lambda_53, IO_TAIL_CALL,
  POS(953, 17),
  POS(955, 23),
  POS(954, 17)
};

static TAB_NUM t_lambda_buf_is_an_error[] = {
  1, // locals
  0, // parameters
  // new(std_types::event READ_ERROR fd buf)
  var_new, 4, var_std_types__event, var_READ_ERROR, var_931_3_fd, var_953_7_buf, 1, LOCAL(1),
  // push &events new(std_types::event READ_ERROR fd buf)
  var_push, 2, var_857_1_events, LOCAL(1), 1, var_857_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(956, 34),
  POS(956, 21),
  POS(957, 21)
};

static TAB_NUM t_lambda_53[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_953_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_empty, lambda_54, IO_TAIL_CALL,
  POS(960, 27),
  POS(959, 21)
};

static TAB_NUM t_lambda_buf_is_empty[] = {
  1, // locals
  0, // parameters
  // stop_reading_from &self fd
  var_stop_reading_from, 2, var_809_0_self, var_931_3_fd, 1, var_809_0_self,
  // close &self fd
  var_close, 2, var_809_0_self, var_931_3_fd, 1, var_809_0_self,
  // new(std_types::event CLOSED fd undefined)
  var_new, 4, var_std_types__event, var_CLOSED, var_931_3_fd, var_undefined, 1, LOCAL(1),
  // push &events new(std_types::event CLOSED fd undefined)
  var_push, 2, var_857_1_events, LOCAL(1), 1, var_857_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(961, 25),
  POS(962, 25),
  POS(963, 38),
  POS(963, 25),
  POS(964, 25)
};

static TAB_NUM t_lambda_54[] = {
  1, // locals
  0, // parameters
  // new(std_types::event READ fd buf)
  var_new, 4, var_std_types__event, var_READ, var_931_3_fd, var_953_7_buf, 1, LOCAL(1),
  // push &events new(std_types::event READ fd buf)
  var_push, 2, var_857_1_events, LOCAL(1), 1, var_857_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(966, 38),
  POS(966, 25),
  POS(967, 25)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  // attempt_close_operations! &self
  func_attempt_close_operations, 1, var_809_0_self, IO_CALL(1), var_809_0_self,
  // attempt_exit! self
  func_attempt_exit, 1, var_809_0_self, IO_CALL(0),
  // -> self events
  LET, 2, var_809_0_self, var_857_1_events, TAIL_CALL,
  POS(969, 13),
  POS(971, 13),
  POS(973, 13)
};

static TAB_NUM t_func_attempt_close_operations[] = {
  1, // locals
  1, // parameters
  var_975_28_io,
  // close_jobs_of(io)
  var_close_jobs_of, 1, var_975_28_io, 1, LOCAL(1),
  // for_each close_jobs_of(io)
  var_for_each, 3, LOCAL(1), lambda_56, lambda_57, IO_TAIL_CALL,
  POS(976, 12),
  POS(976, 3)
};

static TAB_NUM t_lambda_56[] = {
  3, // locals
  1, // parameters
  var_977_3_fd,
  // write_jobs_of(io)(fd).is_undefined:
  var_write_jobs_of, 1, var_975_28_io, 1, LOCAL(1),
  // write_jobs_of(io)(fd).is_undefined:
  LOCAL(1), 1, var_977_3_fd, 1, LOCAL(2),
  // is_undefined:
  var_is_undefined, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_write_jobs_ofiofd_is_undefined, var_next, IO_TAIL_CALL,
  POS(979, 9),
  POS(979, 9),
  POS(979, 31),
  POS(978, 7)
};

static TAB_NUM t_lambda_write_jobs_ofiofd_is_undefined[] = {
  2, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_977_3_fd, IO_CALL(0),
  // close_jobs_of(fd) false
  var_close_jobs_of, 1, var_975_28_io, 1, LOCAL(2),
  // close_jobs_of(fd) false
  LOCAL(2), 2, var_977_3_fd, var_false, 1, LOCAL(2),
  // io.close_jobs_of(fd) false
  LET, -1, var_975_28_io, var_close_jobs_of, LOCAL(2), var_975_28_io,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(980, 11),
  POS(981, 15),
  POS(981, 15),
  POS(981, 12),
  POS(982, 11)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_975_28_io, TAIL_CALL,
  POS(984, 7)
};

static TAB_NUM t_func_attempt_exit[] = {
  3, // locals
  1, // parameters
  var_986_16_io,
  // exit_code_of(io).is_defined && io.is_empty:
  var_exit_code_of, 1, var_986_16_io, 1, LOCAL(1),
  // is_defined && io.is_empty:
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // is_defined && io.is_empty:
  var_std__and, 2, LOCAL(2), lambda_58, 1, LOCAL(3),
  // on exit_code_of(io).is_defined && io.is_empty:
  var_on, 2, LOCAL(3), lambda_59, IO_TAIL_CALL,
  POS(987, 6),
  POS(987, 23),
  POS(987, 23),
  POS(987, 3)
};

static TAB_NUM t_lambda_58[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_986_16_io, 1, LOCAL(1),
  // io.is_empty:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(987, 40),
  POS(987, 37)
};

static TAB_NUM t_lambda_59[] = {
  1, // locals
  0, // parameters
  // exit_code_of(io)
  var_exit_code_of, 1, var_986_16_io, 1, LOCAL(1),
  // exit! exit_code_of(io)
  var_exit, 1, LOCAL(1), IO_TAIL_CALL,
  POS(988, 11),
  POS(988, 5)
};

static int tuple_467_0_arguments[] = {
  -var_undefined, -var_undefined, -var_undefined
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_UNIQUE, 0, {.str_8 = "std::READ"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::CLOSED"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::READ_ERROR"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::CONNECT"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::WRITE_PENDING"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::WRITE_COMPLETED"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::WRITE_ERROR"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::PROCESS_JOINED"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::SIGNAL"}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_TUPLE, 3, {.arguments = tuple_467_0_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___start_reading_from}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___stop_reading_from}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___print_to}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___write}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___cancel_write}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___close}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___join_process}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___start_injecting_window_change_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___stop_injecting_window_change_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___start_catching_signals}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___stop_catching_signals}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___set_timeout}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___enable_logging}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___disable_logging}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___log}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_STRING_8, 1, {.str_8 = "["}},
  {FLT_STRING_8, 2, {.str_8 = "] "}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___exit}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__log_unhandled_event}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_WRITE_PENDINGWRITE_COMPLETED}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_STRING_8, 16, {.str_8 = "unhandled event "}},
  {FLT_STRING_8, 3, {.str_8 = " - "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___initialize}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___get_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_timeout_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_exit_codes_ofself}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_write_jobs}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_wait_for_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_CHILD_CHANGED_STATE}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_watched_pids_ofselfpid}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_WINDOW_CHANGED_SIZE}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_catched_signals_ofselfsignal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_write_requests}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_STRING_8, 4, {.str_8 = "\033[8;"}},
  {FLT_STRING_8, 1, {.str_8 = ";"}},
  {FLT_STRING_8, 1, {.str_8 = "t"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_file_descriptors}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_bytes_written_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_attempt_reads}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_does_listen}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_conn_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_do_read}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x100000}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_buf_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_buf_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_attempt_close_operations}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_write_jobs_ofiofd_is_undefined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_attempt_exit}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}}
};

static ATTRIBUTE_DEFINITION std_types__io__attributes[] = {
  {-var_read_descriptor_list_of, -var_empty_list},
  {-var_read_descriptor_set_of, -var_empty_hash_set},
  {-var_write_jobs_of, -var_empty_hash_table},
  {-var_close_jobs_of, -var_empty_hash_set},
  {-var_watched_pids_of, -var_empty_hash_set},
  {-var_exit_codes_of, -var_empty_hash_table},
  {-var_do_inject_window_change_events, -var_false},
  {-var_window_change_event_occurred, -var_false},
  {-var_catched_signals_of, -var_empty_hash_set},
  {-var_log_level_of, -num_0},
  {-var_exit_code_of, -var_undefined},
  {-var_timeout_of, -var_undefined},
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
    "READ_ERROR\000std", NULL,
    {.const_idx = -uni_std__READ_ERROR}
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
    "WRITE_ERROR\000std", NULL,
    {.const_idx = -uni_std__WRITE_ERROR}
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
    "read_descriptor_list_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "read_descriptor_set_of\000", NULL,
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
    FOT_DERIVED, 0, 33,
    "io\000std_types", std_types__io__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "object\000std_types", NULL,
    {.position = POS(446, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(452, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_set\000", NULL,
    {.position = POS(453, 39)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(454, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(458, 47)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(462, 29)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "random_seed_of\000", NULL,
    {.position = POS(464, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "step_no_of\000", NULL,
    {.position = POS(465, 16)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "event\000std_types", NULL,
    {.const_idx = -tuple_467_0}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(467, 19)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_reading_from\000", NULL,
    {.position = POS(473, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "481_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "482_0_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(488, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(489, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(484, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_reading_from\000", NULL,
    {.position = POS(492, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "500_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "501_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "507_1_new_read_descriptor_list\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "509_3_read_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(511, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(512, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(508, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "print_to\000", NULL,
    {.position = POS(521, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(527, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(527, 37)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "write\000", NULL,
    {.position = POS(527, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "539_0_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "541_1_job\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(544, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(545, 10)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "cancel_write\000", NULL,
    {.position = POS(550, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "close\000", NULL,
    {.position = POS(565, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "join_process\000", NULL,
    {.position = POS(584, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_injecting_window_change_events\000", NULL,
    {.position = POS(598, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_injecting_window_change_events\000", NULL,
    {.position = POS(610, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_catching_signals\000", NULL,
    {.position = POS(622, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "630_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "633_1_catched_signals\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_catching_signals\000", NULL,
    {.position = POS(640, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "648_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "651_1_catched_signals\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "set_timeout\000", NULL,
    {.position = POS(658, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "668_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "669_0_timeout\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_number\000", NULL,
    {.position = POS(671, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "current_time_of\000", NULL,
    {.position = POS(671, 45)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(671, 45)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(671, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "672_1_current_timeout\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(674, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(674, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(674, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "enable_logging\000", NULL,
    {.position = POS(678, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "disable_logging\000", NULL,
    {.position = POS(691, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "log\000", NULL,
    {.position = POS(703, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "711_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "712_0_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "713_0_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(716, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(717, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if_not\000", NULL,
    {.position = POS(717, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(718, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split_into_lines\000", NULL,
    {.position = POS(719, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "720_1_prefix\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(720, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "721_1_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(722, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(725, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spaces\000", NULL,
    {.position = POS(725, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDERR_FILENO\000", NULL,
    {.position = POS(728, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "exit\000", NULL,
    {.position = POS(731, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(748, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "756_0_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(759, 7)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "log_unhandled_event\000std", NULL,
    {.const_idx = -func_std__log_unhandled_event}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "765_28_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "766_7_type\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "766_13_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_ERROR\000", NULL,
    {.position = POS(770, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_PENDING\000", NULL,
    {.position = POS(771, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_COMPLETED\000", NULL,
    {.position = POS(772, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(779, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(777, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "serialize\000", NULL,
    {.position = POS(782, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim_right\000", NULL,
    {.position = POS(782, 43)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "initialize\000", NULL,
    {.position = POS(784, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_time\000", NULL,
    {.position = POS(796, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "get_events\000", NULL,
    {.position = POS(799, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "809_0_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(815, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "822_1_want_to_write\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "824_1_timeout\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(829, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(829, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(833, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "852_1_can_read\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "853_1_can_write\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pselect\000", NULL,
    {.position = POS(850, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "857_1_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "858_1_injected_into_stdin\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "859_1_write_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "861_3_signal\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CHILD_CHANGED_STATE\000", NULL,
    {.position = POS(863, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "864_7_pid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "864_12_status\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "wait\000", NULL,
    {.position = POS(864, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exitstatus\000", NULL,
    {.position = POS(865, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PROCESS_JOINED\000", NULL,
    {.position = POS(869, 53)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(869, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WINDOW_CHANGED_SIZE\000", NULL,
    {.position = POS(874, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGNAL\000", NULL,
    {.position = POS(880, 53)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDIN_FILENO\000", NULL,
    {.position = POS(890, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_terminal_size\000", NULL,
    {.position = POS(892, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ\000", NULL,
    {.position = POS(895, 47)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "903_3_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "904_1_job\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "905_8_bytes_written\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(907, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "931_3_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(932, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "fstat\000", NULL,
    {.position = POS(933, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "type_of\000", NULL,
    {.position = POS(935, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SOCKET\000", NULL,
    {.position = POS(935, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_listening\000", NULL,
    {.position = POS(936, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "939_9_conn\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "accept\000", NULL,
    {.position = POS(939, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ_ERROR\000", NULL,
    {.position = POS(943, 50)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CONNECT\000", NULL,
    {.position = POS(947, 50)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "953_7_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read\000", NULL,
    {.position = POS(953, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CLOSED\000", NULL,
    {.position = POS(963, 59)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(932, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "975_28_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "977_3_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "986_16_io\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(987, 3)}
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
  124, // number of constants
  178, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
