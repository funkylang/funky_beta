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
  tuple_464_0 = -11,
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
  func_std_types__io___stop_catching_signals = -31,
  func_std_types__io___set_timeout = -32,
  lambda_10 = -33,
  lambda_11 = -34,
  lambda_12 = -35,
  lambda_13 = -36,
  func_std_types__io___enable_logging = -37,
  num_1 = -38,
  func_std_types__io___disable_logging = -39,
  func_std_types__io___log = -40,
  lambda_14 = -41,
  lambda_15 = -42,
  chr_10 = -43,
  lambda_16 = -44,
  string_1 = -45,
  string_2 = -46,
  num_2 = -47,
  minus_num_1 = -48,
  lambda_17 = -49,
  lambda_18 = -50,
  lambda_19 = -51,
  func_std_types__io___exit = -52,
  func_std_types__io___is_empty = -53,
  lambda_20 = -54,
  lambda_21 = -55,
  lambda_22 = -56,
  func_std__log_unhandled_event = -57,
  lambda_23 = -58,
  lambda_24 = -59,
  lambda_25 = -60,
  lambda_26 = -61,
  lambda_27 = -62,
  lambda_WRITE_PENDINGWRITE_COMPLETED = -63,
  num_4 = -64,
  lambda_28 = -65,
  lambda_29 = -66,
  str_unhandled_event = -67,
  string_3 = -68,
  func_std_types__io___initialize = -69,
  func_std_types__io___get_events = -70,
  lambda_timeout_is_defined = -71,
  lambda_30 = -72,
  lambda_exit_codes_ofself = -73,
  lambda_31 = -74,
  func_handle_write_jobs = -75,
  lambda_32 = -76,
  func_wait_for_events = -77,
  lambda_33 = -78,
  lambda_CHILD_CHANGED_STATE = -79,
  lambda_watched_pids_ofselfpid = -80,
  lambda_34 = -81,
  lambda_WINDOW_CHANGED_SIZE = -82,
  lambda_35 = -83,
  lambda_self_do_catch_signals = -84,
  func_handle_write_requests = -85,
  lambda_36 = -86,
  lambda_37 = -87,
  lambda_38 = -88,
  string_4 = -89,
  string_5 = -90,
  str_t = -91,
  lambda_39 = -92,
  func_check_file_descriptors = -93,
  lambda_40 = -94,
  lambda_bytes_written_is_an_error = -95,
  lambda_41 = -96,
  lambda_42 = -97,
  lambda_43 = -98,
  func_attempt_reads = -99,
  lambda_44 = -100,
  lambda_45 = -101,
  lambda_46 = -102,
  lambda_47 = -103,
  lambda_does_listen = -104,
  lambda_conn_is_an_error = -105,
  lambda_48 = -106,
  func_do_read = -107,
  num_0x100000 = -108,
  lambda_buf_is_an_error = -109,
  lambda_49 = -110,
  lambda_buf_is_empty = -111,
  lambda_50 = -112,
  lambda_51 = -113,
  func_attempt_close_operations = -114,
  lambda_52 = -115,
  lambda_write_jobs_ofiofd_is_undefined = -116,
  lambda_53 = -117,
  func_attempt_exit = -118,
  lambda_54 = -119,
  lambda_55 = -120
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
  var_do_catch_signals, // attribute
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
  var_478_0_self, // dynamic
  var_479_0_fd, // dynamic
  var_true, // extern
  var_push, // extern
  var_if, // extern
  var_stop_reading_from, // extern polymorphic
  var_497_0_self, // dynamic
  var_498_0_fd, // dynamic
  var_504_1_new_read_descriptor_list, // dynamic
  var_506_3_read_fd, // dynamic
  var_std__equal, // extern
  var_next, // extern
  var_for_each, // extern
  var_print_to, // extern polymorphic
  var_create_string, // extern
  var_to_utf8, // extern
  var_write, // extern polymorphic
  var_536_0_data, // dynamic
  var_538_1_job, // dynamic
  var_is_defined, // extern
  var_append, // extern
  var_cancel_write, // extern polymorphic
  var_close, // extern polymorphic
  var_join_process, // extern polymorphic
  var_start_injecting_window_change_events, // extern polymorphic
  var_stop_injecting_window_change_events, // extern polymorphic
  var_start_catching_signals, // extern polymorphic
  var_stop_catching_signals, // extern polymorphic
  var_set_timeout, // extern polymorphic
  var_653_0_self, // dynamic
  var_654_0_timeout, // dynamic
  var_is_a_number, // extern
  var_current_time_of, // extern polymorphic
  var_std__plus, // extern
  var_update_if, // extern
  var_657_1_current_timeout, // dynamic
  var_is_undefined, // extern
  var_std__less, // extern
  var_std__or, // extern
  var_enable_logging, // extern polymorphic
  var_disable_logging, // extern polymorphic
  var_log, // extern polymorphic
  var_696_0_self, // dynamic
  var_697_0_level, // dynamic
  var_698_0_message, // dynamic
  var_std__not, // extern
  var_is_a_string, // extern
  var_update_if_not, // extern
  var_has_suffix, // extern
  var_split_into_lines, // extern
  var_705_1_prefix, // dynamic
  var_std__string, // extern
  var_706_1_buf, // dynamic
  var_range, // extern
  var_length_of, // extern
  var_spaces, // extern
  var_STDERR_FILENO, // extern
  var_exit, // extern polymorphic
  var_is_empty, // extern polymorphic
  var_741_0_self, // dynamic
  var_std__and, // extern
  var_std__log_unhandled_event, // initialized
  var_750_28_io, // dynamic
  var_751_7_type, // dynamic
  var_751_13_fd, // dynamic
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
  var_794_0_self, // dynamic
  var_inc, // extern
  var_807_1_want_to_write, // dynamic
  var_809_1_timeout, // dynamic
  var_std__minus, // extern
  var_max, // extern
  var_any_of, // extern
  var_837_1_can_read, // dynamic
  var_838_1_can_write, // dynamic
  var_pselect, // extern
  var_842_1_events, // dynamic
  var_843_1_injected_into_stdin, // dynamic
  var_844_1_write_jobs, // dynamic
  var_846_3_signal, // dynamic
  var_SIGUSR1, // extern
  var_SIGUSR2, // extern
  var_CHILD_CHANGED_STATE, // extern
  var_849_7_pid, // dynamic
  var_849_12_status, // dynamic
  var_wait, // extern
  var_exitstatus, // extern
  var_PROCESS_JOINED, // extern
  var_new, // extern
  var_WINDOW_CHANGED_SIZE, // extern
  var_SIGNAL, // extern
  var_STDIN_FILENO, // extern
  var_get_terminal_size, // extern
  var_READ, // extern
  var_888_3_fd, // dynamic
  var_889_1_job, // dynamic
  var_890_8_bytes_written, // dynamic
  var_is_an_error, // extern
  var_916_3_fd, // dynamic
  var_not, // extern
  var_fstat, // extern
  var_type_of, // extern
  var_SOCKET, // extern
  var_is_listening, // extern
  var_924_9_conn, // dynamic
  var_accept, // extern
  var_READ_ERROR, // extern
  var_CONNECT, // extern
  var_938_7_buf, // dynamic
  var_read, // extern
  var_CLOSED, // extern
  var_if_not, // extern
  var_960_28_io, // dynamic
  var_962_3_fd, // dynamic
  var_971_16_io, // dynamic
  var_on, // extern
  var__END
};


static TAB_NUM t_func_std_types__io___start_reading_from[] = {
  2, // locals
  2, // parameters
  var_478_0_self,
  var_479_0_fd,
  // read_descriptor_set_of(self)(fd)
  var_read_descriptor_set_of, 1, var_478_0_self, 1, LOCAL(1),
  // read_descriptor_set_of(self)(fd)
  LOCAL(1), 1, var_479_0_fd, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1, lambda_2, TAIL_CALL,
  POS(482, 5),
  POS(482, 5),
  POS(481, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_478_0_self, TAIL_CALL,
  POS(483, 7)
};

static TAB_NUM t_lambda_2[] = {
  2, // locals
  0, // parameters
  // read_descriptor_set_of(fd) true
  var_read_descriptor_set_of, 1, var_478_0_self, 1, LOCAL(2),
  // read_descriptor_set_of(fd) true
  LOCAL(2), 2, var_479_0_fd, var_true, 1, LOCAL(2),
  // self.read_descriptor_set_of(fd) true
  LET, -1, var_478_0_self, var_read_descriptor_set_of, LOCAL(2), var_478_0_self,
  // read_descriptor_list_of fd
  var_read_descriptor_list_of, 1, var_478_0_self, 1, LOCAL(1),
  // push &self.read_descriptor_list_of fd
  var_push, 2, LOCAL(1), var_479_0_fd, 1, LOCAL(1),
  // self.read_descriptor_list_of fd
  LET, -1, var_478_0_self, var_read_descriptor_list_of, LOCAL(1), var_478_0_self,
  // -> self
  LET, 1, var_478_0_self, TAIL_CALL,
  POS(485, 13),
  POS(485, 13),
  POS(485, 8),
  POS(486, 18),
  POS(486, 7),
  POS(486, 13),
  POS(487, 7)
};

static TAB_NUM t_func_std_types__io___stop_reading_from[] = {
  2, // locals
  2, // parameters
  var_497_0_self,
  var_498_0_fd,
  // read_descriptor_set_of(self)(fd)
  var_read_descriptor_set_of, 1, var_497_0_self, 1, LOCAL(1),
  // read_descriptor_set_of(self)(fd)
  LOCAL(1), 1, var_498_0_fd, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_3, lambda_7, TAIL_CALL,
  POS(501, 5),
  POS(501, 5),
  POS(500, 3)
};

static TAB_NUM t_lambda_3[] = {
  2, // locals
  0, // parameters
  // read_descriptor_set_of(fd) false
  var_read_descriptor_set_of, 1, var_497_0_self, 1, LOCAL(2),
  // read_descriptor_set_of(fd) false
  LOCAL(2), 2, var_498_0_fd, var_false, 1, LOCAL(2),
  // self.read_descriptor_set_of(fd) false
  LET, -1, var_497_0_self, var_read_descriptor_set_of, LOCAL(2), var_497_0_self,
  // $new_read_descriptor_list empty_list
  LET, 1, var_empty_list, 1, var_504_1_new_read_descriptor_list,
  // read_descriptor_list_of(self)
  var_read_descriptor_list_of, 1, var_497_0_self, 1, LOCAL(1),
  // for_each read_descriptor_list_of(self)
  var_for_each, 3, LOCAL(1), lambda_4, lambda_6, TAIL_CALL,
  POS(503, 13),
  POS(503, 13),
  POS(503, 8),
  POS(504, 7),
  POS(505, 16),
  POS(505, 7)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  1, // parameters
  var_506_3_read_fd,
  // fd == read_fd
  var_std__equal, 2, var_498_0_fd, var_506_3_read_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_5, TAIL_CALL,
  POS(508, 13),
  POS(507, 11)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  // push &new_read_descriptor_list read_fd
  var_push, 2, var_504_1_new_read_descriptor_list, var_506_3_read_fd, 1, var_504_1_new_read_descriptor_list,
  // next
  var_next, 0, TAIL_CALL,
  POS(511, 15),
  POS(512, 15)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // self.read_descriptor_list_of new_read_descriptor_list
  LET, -1, var_497_0_self, var_read_descriptor_list_of, var_504_1_new_read_descriptor_list, var_497_0_self,
  // -> self
  LET, 1, var_497_0_self, TAIL_CALL,
  POS(514, 12),
  POS(515, 11)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_497_0_self, TAIL_CALL,
  POS(516, 7)
};

static TAB_NUM t_func_std_types__io___print_to[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 520_0_self
  MANDATORY_PARAMETER, LOCAL(4), // 521_0_fd
  REST_PARAMETER, LOCAL(5), // 522_0_args
  // create_string(args).to_utf8
  var_create_string, 1, LOCAL(5), 1, LOCAL(1),
  // to_utf8
  var_to_utf8, 1, LOCAL(1), 1, LOCAL(2),
  // write self fd create_string(args).to_utf8
  var_write, 3, LOCAL(3), LOCAL(4), LOCAL(2), TAIL_CALL,
  POS(524, 17),
  POS(524, 37),
  POS(524, 3)
};

static TAB_NUM t_func_std_types__io___write[] = {
  4, // locals
  3, // parameters
  LOCAL(3), // 534_0_self
  LOCAL(4), // 535_0_fd
  var_536_0_data,
  // write_jobs_of(self)(fd)
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(1),
  // $job write_jobs_of(self)(fd)
  LOCAL(1), 1, LOCAL(4), 1, var_538_1_job,
  // is_defined
  var_is_defined, 1, var_538_1_job, 1, LOCAL(1),
  // !job
  var_if, 3, LOCAL(1), lambda_8, lambda_9, 1, var_538_1_job,
  // write_jobs_of(fd) job
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(2),
  // write_jobs_of(fd) job
  LOCAL(2), 2, LOCAL(4), var_538_1_job, 1, LOCAL(2),
  // self.write_jobs_of(fd) job
  LET, -1, LOCAL(3), var_write_jobs_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(538, 8),
  POS(538, 3),
  POS(541, 11),
  POS(539, 3),
  POS(544, 9),
  POS(544, 9),
  POS(544, 4),
  POS(545, 3)
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // append(job data)
  var_append, 2, var_538_1_job, var_536_0_data, 1, LOCAL(1),
  //  append(job data)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(542, 10),
  POS(542, 9)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_536_0_data, TAIL_CALL,
  POS(543, 9)
};

static TAB_NUM t_func_std_types__io___cancel_write[] = {
  5, // locals
  2, // parameters
  LOCAL(3), // 555_0_self
  LOCAL(4), // 556_0_fd
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
  POS(558, 19),
  POS(558, 3),
  POS(559, 9),
  POS(559, 9),
  POS(559, 4),
  POS(560, 3)
};

static TAB_NUM t_func_std_types__io___close[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 574_0_self
  LOCAL(4), // 575_0_fd
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
  POS(577, 3),
  POS(578, 9),
  POS(578, 9),
  POS(578, 4),
  POS(579, 3)
};

static TAB_NUM t_func_std_types__io___join_process[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 589_0_self
  LOCAL(4), // 590_0_pid
  // watched_pids_of(pid) true
  var_watched_pids_of, 1, LOCAL(3), 1, LOCAL(2),
  // watched_pids_of(pid) true
  LOCAL(2), 2, LOCAL(4), var_true, 1, LOCAL(2),
  // self.watched_pids_of(pid) true
  LET, -1, LOCAL(3), var_watched_pids_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(592, 9),
  POS(592, 9),
  POS(592, 4),
  POS(593, 3)
};

static TAB_NUM t_func_std_types__io___start_injecting_window_change_events[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 603_0_self
  // .do_inject_window_change_events true)
  LET, -1, LOCAL(2), var_do_inject_window_change_events, var_true, LOCAL(1),
  // -> self(.do_inject_window_change_events true)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(605, 11),
  POS(605, 3)
};

static TAB_NUM t_func_std_types__io___stop_injecting_window_change_events[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 615_0_self
  // .do_inject_window_change_events false)
  LET, -1, LOCAL(2), var_do_inject_window_change_events, var_false, LOCAL(1),
  // -> self(.do_inject_window_change_events false)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(617, 11),
  POS(617, 3)
};

static TAB_NUM t_func_std_types__io___start_catching_signals[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 627_0_self
  // .do_catch_signals true)
  LET, -1, LOCAL(2), var_do_catch_signals, var_true, LOCAL(1),
  // -> self(.do_catch_signals true)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(629, 11),
  POS(629, 3)
};

static TAB_NUM t_func_std_types__io___stop_catching_signals[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 639_0_self
  // .do_catch_signals false)
  LET, -1, LOCAL(2), var_do_catch_signals, var_false, LOCAL(1),
  // -> self(.do_catch_signals false)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(641, 11),
  POS(641, 3)
};

static TAB_NUM t_func_std_types__io___set_timeout[] = {
  2, // locals
  2, // parameters
  var_653_0_self,
  var_654_0_timeout,
  // is_a_number &timeout -> current_time_of(self)+timeout
  var_is_a_number, 1, var_654_0_timeout, 1, LOCAL(1),
  // update_if timeout.is_a_number &timeout -> current_time_of(self)+timeout
  var_update_if, 3, LOCAL(1), var_654_0_timeout, lambda_10, 1, var_654_0_timeout,
  // $current_timeout timeout_of(self)
  var_timeout_of, 1, var_653_0_self, 1, var_657_1_current_timeout,
  // is_undefined || timeout < current_timeout
  var_is_undefined, 1, var_657_1_current_timeout, 1, LOCAL(1),
  // is_undefined || timeout < current_timeout
  var_std__or, 2, LOCAL(1), lambda_11, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_12, lambda_13, TAIL_CALL,
  POS(656, 21),
  POS(656, 3),
  POS(657, 3),
  POS(659, 21),
  POS(659, 21),
  POS(658, 3)
};

static TAB_NUM t_lambda_10[] = {
  2, // locals
  0, // parameters
  // current_time_of(self)+timeout
  var_current_time_of, 1, var_653_0_self, 1, LOCAL(1),
  // current_time_of(self)+timeout
  var_std__plus, 2, LOCAL(1), var_654_0_timeout, 1, LOCAL(2),
  //  current_time_of(self)+timeout
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(656, 45),
  POS(656, 45),
  POS(656, 44)
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // timeout < current_timeout
  var_std__less, 2, var_654_0_timeout, var_657_1_current_timeout, 1, LOCAL(1),
  // timeout < current_timeout
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(659, 37),
  POS(659, 37)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // .timeout_of timeout)
  LET, -1, var_653_0_self, var_timeout_of, var_654_0_timeout, LOCAL(1),
  //  self(.timeout_of timeout)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(660, 13),
  POS(660, 7)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_653_0_self, TAIL_CALL,
  POS(661, 7)
};

static TAB_NUM t_func_std_types__io___enable_logging[] = {
  3, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 671_0_self
  num_1, LOCAL(3), // 672_0_level
  // .log_level_of level)
  LET, -1, LOCAL(2), var_log_level_of, LOCAL(3), LOCAL(1),
  // -> self(.log_level_of level)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(674, 11),
  POS(674, 3)
};

static TAB_NUM t_func_std_types__io___disable_logging[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 684_0_self
  // .log_level_of 0)
  LET, -1, LOCAL(2), var_log_level_of, num_0, LOCAL(1),
  // -> self(.log_level_of 0)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(686, 11),
  POS(686, 3)
};

static TAB_NUM t_func_std_types__io___log[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_696_0_self,
  num_1, var_697_0_level,
  MANDATORY_PARAMETER, var_698_0_message,
  // log_level_of(self):
  var_log_level_of, 1, var_696_0_self, 1, LOCAL(1),
  // log_level_of(self):
  var_std__less, 2, LOCAL(1), var_697_0_level, 1, LOCAL(2),
  // log_level_of(self):
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_14, lambda_19, TAIL_CALL,
  POS(701, 14),
  POS(701, 14),
  POS(701, 14),
  POS(700, 3)
};

static TAB_NUM t_lambda_14[] = {
  2, // locals
  0, // parameters
  // is_a_string &message -> message()
  var_is_a_string, 1, var_698_0_message, 1, LOCAL(1),
  // update_if_not message.is_a_string &message -> message()
  var_update_if_not, 3, LOCAL(1), var_698_0_message, lambda_15, 1, var_698_0_message,
  // message .has_suffix. '@nl;' &message: push message '@nl;'
  var_has_suffix, 2, var_698_0_message, chr_10, 1, LOCAL(1),
  // update_if_not message .has_suffix. '@nl;' &message: push message '@nl;'
  var_update_if_not, 3, LOCAL(1), var_698_0_message, lambda_16, 1, var_698_0_message,
  // $lines split_into_lines(message)
  var_split_into_lines, 1, var_698_0_message, 1, LOCAL(2),
  // $prefix "[@(level)] "
  var_std__string, 3, string_1, var_697_0_level, string_2, 1, var_705_1_prefix,
  // lines(1))
  LOCAL(2), 1, num_1, 1, LOCAL(1),
  // $buf append(prefix lines(1))
  var_append, 2, var_705_1_prefix, LOCAL(1), 1, var_706_1_buf,
  // range &lines 2 -1
  var_range, 3, LOCAL(2), num_2, minus_num_1, 1, LOCAL(2),
  // for_each lines
  var_for_each, 3, LOCAL(2), lambda_17, lambda_18, TAIL_CALL,
  POS(702, 29),
  POS(702, 7),
  POS(703, 21),
  POS(703, 7),
  POS(704, 7),
  POS(705, 7),
  POS(706, 26),
  POS(706, 7),
  POS(707, 7),
  POS(708, 7)
};

static TAB_NUM t_lambda_15[] = {
  1, // locals
  0, // parameters
  // message()
  var_698_0_message, 0, 1, LOCAL(1),
  //  message()
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(702, 53),
  POS(702, 52)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  // push message '@nl;'
  var_push, 2, var_698_0_message, chr_10, TAIL_CALL,
  POS(703, 59)
};

static TAB_NUM t_lambda_17[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 709_3_line
  // length_of(prefix)) line
  var_length_of, 1, var_705_1_prefix, 1, LOCAL(1),
  // spaces(length_of(prefix)) line
  var_spaces, 1, LOCAL(1), 1, LOCAL(2),
  // append &buf spaces(length_of(prefix)) line
  var_append, 3, var_706_1_buf, LOCAL(2), LOCAL(3), 1, var_706_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(710, 30),
  POS(710, 23),
  POS(710, 11),
  POS(711, 11)
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  0, // parameters
  // to_utf8
  var_to_utf8, 1, var_706_1_buf, 1, LOCAL(1),
  // write self STDERR_FILENO buf.to_utf8
  var_write, 3, var_696_0_self, var_STDERR_FILENO, LOCAL(1), TAIL_CALL,
  POS(713, 40),
  POS(713, 11)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_696_0_self, TAIL_CALL,
  POS(714, 7)
};

static TAB_NUM t_func_std_types__io___exit[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 724_0_self
  LOCAL(3), // 725_0_exit_code
  // self
  LET, -3, LOCAL(2), var_exit_code_of, LOCAL(3), var_read_descriptor_list_of, var_empty_list, var_read_descriptor_set_of, var_empty_hash_set, LOCAL(1),
  // ->
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(728, 5),
  POS(727, 3)
};

static TAB_NUM t_func_std_types__io___is_empty[] = {
  3, // locals
  1, // parameters
  var_741_0_self,
  // read_descriptor_list_of(self).is_empty
  var_read_descriptor_list_of, 1, var_741_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_20, 1, LOCAL(3),
  // ->
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(745, 7),
  POS(745, 37),
  POS(744, 7),
  POS(743, 3)
};

static TAB_NUM t_lambda_20[] = {
  3, // locals
  0, // parameters
  // write_jobs_of(self).is_empty
  var_write_jobs_of, 1, var_741_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_21, 1, LOCAL(3),
  // write_jobs_of(self).is_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(746, 7),
  POS(746, 27),
  POS(744, 7),
  POS(746, 7)
};

static TAB_NUM t_lambda_21[] = {
  3, // locals
  0, // parameters
  // close_jobs_of(self).is_empty
  var_close_jobs_of, 1, var_741_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_22, 1, LOCAL(3),
  // close_jobs_of(self).is_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(747, 7),
  POS(747, 27),
  POS(744, 7),
  POS(747, 7)
};

static TAB_NUM t_lambda_22[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(self).is_empty
  var_watched_pids_of, 1, var_741_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // watched_pids_of(self).is_empty
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(748, 7),
  POS(748, 29),
  POS(748, 7)
};

static TAB_NUM t_func_std__log_unhandled_event[] = {
  4, // locals
  2, // parameters
  var_750_28_io,
  LOCAL(4), // 750_31_event
  // event $type $fd $_argument
  LOCAL(4), 0, 3, var_751_7_type, var_751_13_fd, LOCAL(1),
  // type == WRITE_ERROR
  var_std__equal, 2, var_751_7_type, var_WRITE_ERROR, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_23, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_25, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_26, lambda_27, TAIL_CALL,
  POS(751, 3),
  POS(755, 9),
  POS(754, 9),
  POS(753, 7),
  POS(752, 3)
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  0, // parameters
  // type == WRITE_PENDING
  var_std__equal, 2, var_751_7_type, var_WRITE_PENDING, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_24, 1, LOCAL(2),
  // type == WRITE_PENDING
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(756, 9),
  POS(754, 9),
  POS(756, 9)
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  0, // parameters
  // type == WRITE_COMPLETED
  var_std__equal, 2, var_751_7_type, var_WRITE_COMPLETED, 1, LOCAL(1),
  // type == WRITE_COMPLETED
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(757, 9),
  POS(757, 9)
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // fd == STDERR_FILENO
  var_std__equal, 2, var_751_13_fd, var_STDERR_FILENO, 1, LOCAL(1),
  // fd == STDERR_FILENO
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(758, 7),
  POS(758, 7)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  //  io # prevent recursive logging
  LET, 1, var_750_28_io, TAIL_CALL,
  POS(759, 7)
};

static TAB_NUM t_lambda_27[] = {
  2, // locals
  0, // parameters
  // WRITE_PENDING,WRITE_COMPLETED -> 4
  var_std__sequence, 2, var_WRITE_PENDING, var_WRITE_COMPLETED, 1, LOCAL(1),
  // $log_level
  var_case, 4, var_751_7_type, LOCAL(1), lambda_WRITE_PENDINGWRITE_COMPLETED, lambda_28, 1, LOCAL(2),
  // log io log_level -> "
  var_log, 3, var_750_28_io, LOCAL(2), lambda_29, TAIL_CALL,
  POS(764, 11),
  POS(761, 7),
  POS(766, 7)
};

static TAB_NUM t_lambda_WRITE_PENDINGWRITE_COMPLETED[] = {
  0, // locals
  0, // parameters
  //  4
  LET, 1, num_4, TAIL_CALL,
  POS(764, 43)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  //  2
  LET, 1, num_2, TAIL_CALL,
  POS(765, 13)
};

static TAB_NUM t_lambda_29[] = {
  4, // locals
  0, // parameters
  // serialize(type).trim_right) - @(serialize(fd))@
  var_serialize, 1, var_751_7_type, 1, LOCAL(1),
  // trim_right) - @(serialize(fd))@
  var_trim_right, 1, LOCAL(1), 1, LOCAL(2),
  // serialize(fd))@
  var_serialize, 1, var_751_13_fd, 1, LOCAL(3),
  // "
  var_std__string, 4, str_unhandled_event, LOCAL(2), string_3, LOCAL(3), 1, LOCAL(4),
  //  "
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(767, 27),
  POS(767, 43),
  POS(767, 59),
  POS(766, 27),
  POS(766, 26)
};

static TAB_NUM t_func_std_types__io___initialize[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 779_0_self
  // current_time! $t
  var_current_time, 0, IO_CALL(1), LOCAL(3),
  // .current_time_of t)
  LET, -1, LOCAL(2), var_current_time_of, LOCAL(3), LOCAL(1),
  // -> self(.current_time_of t)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(781, 3),
  POS(782, 11),
  POS(782, 3)
};

static TAB_NUM t_func_std_types__io___get_events[] = {
  1, // locals
  1, // parameters
  var_794_0_self,
  // step_no_of
  var_step_no_of, 1, var_794_0_self, 1, LOCAL(1),
  // inc &self.step_no_of
  var_inc, 1, LOCAL(1), 1, LOCAL(1),
  // self.step_no_of
  LET, -1, var_794_0_self, var_step_no_of, LOCAL(1), var_794_0_self,
  // attempt_close_operations! &self
  func_attempt_close_operations, 1, var_794_0_self, IO_CALL(1), var_794_0_self,
  // attempt_exit! self
  func_attempt_exit, 1, var_794_0_self, IO_CALL(0),
  // $want_to_write empty_list
  LET, 1, var_empty_list, 1, var_807_1_want_to_write,
  // $timeout timeout_of(self)
  var_timeout_of, 1, var_794_0_self, 1, var_809_1_timeout,
  // is_defined:
  var_is_defined, 1, var_809_1_timeout, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_timeout_is_defined, func_handle_write_jobs, IO_TAIL_CALL,
  POS(800, 13),
  POS(800, 3),
  POS(800, 8),
  POS(802, 3),
  POS(804, 3),
  POS(807, 3),
  POS(809, 3),
  POS(811, 13),
  POS(810, 3)
};

static TAB_NUM t_lambda_timeout_is_defined[] = {
  3, // locals
  0, // parameters
  // self.timeout_of undefined
  LET, -1, var_794_0_self, var_timeout_of, var_undefined, var_794_0_self,
  // current_time! $t
  var_current_time, 0, IO_CALL(1), LOCAL(3),
  // timeout-t 0)
  var_std__minus, 2, var_809_1_timeout, LOCAL(3), 1, LOCAL(1),
  // !timeout max(timeout-t 0)
  var_max, 2, LOCAL(1), num_0, 1, var_809_1_timeout,
  // 0
  var_std__less, 2, num_0, var_809_1_timeout, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_30, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_31, func_handle_write_jobs, IO_TAIL_CALL,
  POS(812, 8),
  POS(813, 7),
  POS(814, 20),
  POS(814, 7),
  POS(817, 21),
  POS(816, 11),
  POS(815, 7)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // exit_codes_of(self): (pid _exit_code)
  var_exit_codes_of, 1, var_794_0_self, 1, LOCAL(1),
  // any_of
  var_any_of, 2, LOCAL(1), lambda_exit_codes_ofself, 1, LOCAL(2),
  // any_of
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(819, 13),
  POS(818, 11),
  POS(818, 11)
};

static TAB_NUM t_lambda_exit_codes_ofself[] = {
  3, // locals
  2, // parameters
  LOCAL(3), // 819_22_pid
  LOCAL(1),
  // watched_pids_of(self)(pid)
  var_watched_pids_of, 1, var_794_0_self, 1, LOCAL(1),
  // watched_pids_of(self)(pid)
  LOCAL(1), 1, LOCAL(3), 1, LOCAL(2),
  // -> watched_pids_of(self)(pid)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(820, 18),
  POS(820, 18),
  POS(820, 15)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  // !timeout 0
  LET, 1, num_0, 1, var_809_1_timeout,
  // handle_write_jobs!
  func_handle_write_jobs, 0, IO_TAIL_CALL,
  POS(822, 11),
  POS(823, 11)
};

static TAB_NUM t_func_handle_write_jobs[] = {
  1, // locals
  0, // parameters
  // write_jobs_of(self)
  var_write_jobs_of, 1, var_794_0_self, 1, LOCAL(1),
  // for_each write_jobs_of(self)
  var_for_each, 3, LOCAL(1), lambda_32, func_wait_for_events, IO_TAIL_CALL,
  POS(828, 14),
  POS(828, 5)
};

static TAB_NUM t_lambda_32[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 829_3_fd
  LOCAL(1),
  // push &want_to_write fd
  var_push, 2, var_807_1_want_to_write, LOCAL(2), 1, var_807_1_want_to_write,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(830, 9),
  POS(831, 9)
};

static TAB_NUM t_func_wait_for_events[] = {
  3, // locals
  0, // parameters
  // read_descriptor_list_of(self)
  var_read_descriptor_list_of, 1, var_794_0_self, 1, LOCAL(1),
  // pselect!
  var_pselect, 4, LOCAL(1), var_807_1_want_to_write, var_empty_list, var_809_1_timeout, IO_CALL(4), LOCAL(3), var_837_1_can_read, var_838_1_can_write, LOCAL(2),
  // current_time! !self.current_time_of
  var_current_time, 0, IO_CALL(1), LOCAL(1),
  // self.current_time_of
  LET, -1, var_794_0_self, var_current_time_of, LOCAL(1), var_794_0_self,
  // $events empty_list
  LET, 1, var_empty_list, 1, var_842_1_events,
  // $injected_into_stdin false
  LET, 1, var_false, 1, var_843_1_injected_into_stdin,
  // $write_jobs write_jobs_of(self)
  var_write_jobs_of, 1, var_794_0_self, 1, var_844_1_write_jobs,
  // for_each signals
  var_for_each, 3, LOCAL(3), lambda_33, func_handle_write_requests, IO_TAIL_CALL,
  POS(837, 19),
  POS(835, 7),
  POS(841, 7),
  POS(841, 22),
  POS(842, 7),
  POS(843, 7),
  POS(844, 7),
  POS(845, 7)
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  1, // parameters
  var_846_3_signal,
  // SIGUSR1, SIGUSR2:
  var_std__sequence, 2, var_SIGUSR1, var_SIGUSR2, 1, LOCAL(1),
  // case signal
  var_case, 7, var_846_3_signal, var_CHILD_CHANGED_STATE, lambda_CHILD_CHANGED_STATE, var_WINDOW_CHANGED_SIZE, lambda_WINDOW_CHANGED_SIZE, LOCAL(1), lambda_35, IO_TAIL_CALL,
  POS(862, 13),
  POS(847, 11)
};

static TAB_NUM t_lambda_CHILD_CHANGED_STATE[] = {
  2, // locals
  0, // parameters
  // wait! $pid $status
  var_wait, 0, IO_CALL(2), var_849_7_pid, var_849_12_status,
  // exitstatus &status
  var_exitstatus, 1, var_849_12_status, 1, var_849_12_status,
  // watched_pids_of(self)(pid):
  var_watched_pids_of, 1, var_794_0_self, 1, LOCAL(1),
  // watched_pids_of(self)(pid):
  LOCAL(1), 1, var_849_7_pid, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_watched_pids_ofselfpid, lambda_34, IO_TAIL_CALL,
  POS(849, 15),
  POS(850, 15),
  POS(852, 17),
  POS(852, 17),
  POS(851, 15)
};

static TAB_NUM t_lambda_watched_pids_ofselfpid[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(pid) false
  var_watched_pids_of, 1, var_794_0_self, 1, LOCAL(2),
  // watched_pids_of(pid) false
  LOCAL(2), 2, var_849_7_pid, var_false, 1, LOCAL(2),
  // self.watched_pids_of(pid) false
  LET, -1, var_794_0_self, var_watched_pids_of, LOCAL(2), var_794_0_self,
  // new(std_types::event PROCESS_JOINED pid status)
  var_new, 4, var_std_types__event, var_PROCESS_JOINED, var_849_7_pid, var_849_12_status, 1, LOCAL(1),
  // push &events new(std_types::event PROCESS_JOINED pid status)
  var_push, 2, var_842_1_events, LOCAL(1), 1, var_842_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(853, 25),
  POS(853, 25),
  POS(853, 20),
  POS(854, 32),
  POS(854, 19),
  POS(855, 19)
};

static TAB_NUM t_lambda_34[] = {
  2, // locals
  0, // parameters
  // exit_codes_of(pid) status
  var_exit_codes_of, 1, var_794_0_self, 1, LOCAL(2),
  // exit_codes_of(pid) status
  LOCAL(2), 2, var_849_7_pid, var_849_12_status, 1, LOCAL(2),
  // self.exit_codes_of(pid) status
  LET, -1, var_794_0_self, var_exit_codes_of, LOCAL(2), var_794_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(857, 25),
  POS(857, 25),
  POS(857, 20),
  POS(858, 19)
};

static TAB_NUM t_lambda_WINDOW_CHANGED_SIZE[] = {
  0, // locals
  0, // parameters
  // self.window_change_event_occurred true
  LET, -1, var_794_0_self, var_window_change_event_occurred, var_true, var_794_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(860, 16),
  POS(861, 15)
};

static TAB_NUM t_lambda_35[] = {
  1, // locals
  0, // parameters
  // do_catch_signals:
  var_do_catch_signals, 1, var_794_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_self_do_catch_signals, var_next, IO_TAIL_CALL,
  POS(864, 22),
  POS(863, 15)
};

static TAB_NUM t_lambda_self_do_catch_signals[] = {
  1, // locals
  0, // parameters
  // new(std_types::event SIGNAL undefined signal)
  var_new, 4, var_std_types__event, var_SIGNAL, var_undefined, var_846_3_signal, 1, LOCAL(1),
  // push &events new(std_types::event SIGNAL undefined signal)
  var_push, 2, var_842_1_events, LOCAL(1), 1, var_842_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(865, 32),
  POS(865, 19),
  POS(866, 19)
};

static TAB_NUM t_func_handle_write_requests[] = {
  2, // locals
  0, // parameters
  // window_change_event_occurred
  var_window_change_event_occurred, 1, var_794_0_self, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_36, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_38, lambda_39, IO_TAIL_CALL,
  POS(873, 18),
  POS(872, 13),
  POS(871, 9)
};

static TAB_NUM t_lambda_36[] = {
  2, // locals
  0, // parameters
  // do_inject_window_change_events
  var_do_inject_window_change_events, 1, var_794_0_self, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_37, 1, LOCAL(2),
  // self.do_inject_window_change_events
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(874, 18),
  POS(872, 13),
  POS(874, 13)
};

static TAB_NUM t_lambda_37[] = {
  2, // locals
  0, // parameters
  // read_descriptor_set_of(self)(STDIN_FILENO)
  var_read_descriptor_set_of, 1, var_794_0_self, 1, LOCAL(1),
  // read_descriptor_set_of(self)(STDIN_FILENO)
  LOCAL(1), 1, var_STDIN_FILENO, 1, LOCAL(2),
  // read_descriptor_set_of(self)(STDIN_FILENO)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(875, 13),
  POS(875, 13),
  POS(875, 13)
};

static TAB_NUM t_lambda_38[] = {
  4, // locals
  0, // parameters
  // get_terminal_size! STDIN_FILENO $width $height
  var_get_terminal_size, 1, var_STDIN_FILENO, IO_CALL(2), LOCAL(2), LOCAL(3),
  // self.window_change_event_occurred false
  LET, -1, var_794_0_self, var_window_change_event_occurred, var_false, var_794_0_self,
  // $buf "@esc;[8;@(height);@(width)t"
  var_std__string, 5, string_4, LOCAL(3), string_5, LOCAL(2), str_t, 1, LOCAL(4),
  // new(std_types::event READ STDIN_FILENO buf)
  var_new, 4, var_std_types__event, var_READ, var_STDIN_FILENO, LOCAL(4), 1, LOCAL(1),
  // push &events new(std_types::event READ STDIN_FILENO buf)
  var_push, 2, var_842_1_events, LOCAL(1), 1, var_842_1_events,
  // !injected_into_stdin true
  LET, 1, var_true, 1, var_843_1_injected_into_stdin,
  // check_file_descriptors!
  func_check_file_descriptors, 0, IO_TAIL_CALL,
  POS(877, 13),
  POS(878, 14),
  POS(879, 13),
  POS(880, 26),
  POS(880, 13),
  POS(881, 13),
  POS(882, 13)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  // check_file_descriptors!
  func_check_file_descriptors, 0, IO_TAIL_CALL,
  POS(884, 13)
};

static TAB_NUM t_func_check_file_descriptors[] = {
  0, // locals
  0, // parameters
  // for_each can_write
  var_for_each, 3, var_838_1_can_write, lambda_40, func_attempt_reads, IO_TAIL_CALL,
  POS(887, 9)
};

static TAB_NUM t_lambda_40[] = {
  1, // locals
  1, // parameters
  var_888_3_fd,
  // $job write_jobs(fd)
  var_844_1_write_jobs, 1, var_888_3_fd, 1, var_889_1_job,
  // write! $bytes_written fd job
  var_write, 2, var_888_3_fd, var_889_1_job, IO_CALL(1), var_890_8_bytes_written,
  // is_an_error:
  var_is_an_error, 1, var_890_8_bytes_written, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_bytes_written_is_an_error, lambda_41, IO_TAIL_CALL,
  POS(889, 13),
  POS(890, 13),
  POS(892, 29),
  POS(891, 13)
};

static TAB_NUM t_lambda_bytes_written_is_an_error[] = {
  2, // locals
  0, // parameters
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, var_794_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, var_888_3_fd, var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, var_794_0_self, var_write_jobs_of, LOCAL(2), var_794_0_self,
  // tuple(bytes_written job)
  var_tuple, 2, var_890_8_bytes_written, var_889_1_job, 1, LOCAL(1),
  // new
  var_new, 4, var_std_types__event, var_WRITE_ERROR, var_888_3_fd, LOCAL(1), 1, LOCAL(2),
  // push &events
  var_push, 2, var_842_1_events, LOCAL(2), 1, var_842_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(893, 23),
  POS(893, 23),
  POS(893, 18),
  POS(898, 21),
  POS(895, 19),
  POS(894, 17),
  POS(899, 17)
};

static TAB_NUM t_lambda_41[] = {
  2, // locals
  0, // parameters
  // length_of(job):
  var_length_of, 1, var_889_1_job, 1, LOCAL(1),
  // bytes_written < length_of(job):
  var_std__less, 2, var_890_8_bytes_written, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_42, lambda_43, IO_TAIL_CALL,
  POS(902, 35),
  POS(902, 19),
  POS(901, 17)
};

static TAB_NUM t_lambda_42[] = {
  2, // locals
  0, // parameters
  // bytes_written+1 -1
  var_std__plus, 2, var_890_8_bytes_written, num_1, 1, LOCAL(1),
  // range &job bytes_written+1 -1
  var_range, 3, var_889_1_job, LOCAL(1), minus_num_1, 1, var_889_1_job,
  // write_jobs_of(fd) job # remaining text to write
  var_write_jobs_of, 1, var_794_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) job # remaining text to write
  LOCAL(2), 2, var_888_3_fd, var_889_1_job, 1, LOCAL(2),
  // self.write_jobs_of(fd) job # remaining text to write
  LET, -1, var_794_0_self, var_write_jobs_of, LOCAL(2), var_794_0_self,
  // new(std_types::event WRITE_PENDING fd job)
  var_new, 4, var_std_types__event, var_WRITE_PENDING, var_888_3_fd, var_889_1_job, 1, LOCAL(1),
  // push &events new(std_types::event WRITE_PENDING fd job)
  var_push, 2, var_842_1_events, LOCAL(1), 1, var_842_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(903, 32),
  POS(903, 21),
  POS(904, 27),
  POS(904, 27),
  POS(904, 22),
  POS(905, 34),
  POS(905, 21),
  POS(906, 21)
};

static TAB_NUM t_lambda_43[] = {
  2, // locals
  0, // parameters
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, var_794_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, var_888_3_fd, var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, var_794_0_self, var_write_jobs_of, LOCAL(2), var_794_0_self,
  // new(std_types::event WRITE_COMPLETED fd undefined)
  var_new, 4, var_std_types__event, var_WRITE_COMPLETED, var_888_3_fd, var_undefined, 1, LOCAL(1),
  // push &events
  var_push, 2, var_842_1_events, LOCAL(1), 1, var_842_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(908, 27),
  POS(908, 27),
  POS(908, 22),
  POS(910, 23),
  POS(909, 21),
  POS(911, 21)
};

static TAB_NUM t_func_attempt_reads[] = {
  0, // locals
  0, // parameters
  // for_each can_read
  var_for_each, 3, var_837_1_can_read, lambda_44, lambda_51, IO_TAIL_CALL,
  POS(915, 9)
};

static TAB_NUM t_lambda_44[] = {
  3, // locals
  1, // parameters
  var_916_3_fd,
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__equal, 2, var_916_3_fd, var_STDIN_FILENO, 1, LOCAL(1),
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__or, 2, LOCAL(2), lambda_45, 1, LOCAL(3),
  // if_not fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_if_not, 3, LOCAL(3), var_next, lambda_46, IO_TAIL_CALL,
  POS(917, 20),
  POS(917, 20),
  POS(917, 20),
  POS(917, 13)
};

static TAB_NUM t_lambda_45[] = {
  1, // locals
  0, // parameters
  // not(injected_into_stdin) next:
  var_not, 1, var_843_1_injected_into_stdin, 1, LOCAL(1),
  // not(injected_into_stdin) next:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(917, 42),
  POS(917, 42)
};

static TAB_NUM t_lambda_46[] = {
  3, // locals
  0, // parameters
  // fstat! fd $info
  var_fstat, 1, var_916_3_fd, IO_CALL(1), LOCAL(3),
  // type_of(info) == SOCKET:
  var_type_of, 1, LOCAL(3), 1, LOCAL(1),
  // type_of(info) == SOCKET:
  var_std__equal, 2, LOCAL(1), var_SOCKET, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_47, func_do_read, IO_TAIL_CALL,
  POS(918, 15),
  POS(920, 17),
  POS(920, 17),
  POS(919, 15)
};

static TAB_NUM t_lambda_47[] = {
  1, // locals
  0, // parameters
  // is_listening! $does_listen fd
  var_is_listening, 1, var_916_3_fd, IO_CALL(1), LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_does_listen, func_do_read, IO_TAIL_CALL,
  POS(921, 19),
  POS(922, 19)
};

static TAB_NUM t_lambda_does_listen[] = {
  1, // locals
  0, // parameters
  // accept! $conn fd
  var_accept, 1, var_916_3_fd, IO_CALL(1), var_924_9_conn,
  // is_an_error:
  var_is_an_error, 1, var_924_9_conn, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_conn_is_an_error, lambda_48, IO_TAIL_CALL,
  POS(924, 23),
  POS(926, 30),
  POS(925, 23)
};

static TAB_NUM t_lambda_conn_is_an_error[] = {
  1, // locals
  0, // parameters
  // new(std_types::event READ_ERROR fd conn)
  var_new, 4, var_std_types__event, var_READ_ERROR, var_916_3_fd, var_924_9_conn, 1, LOCAL(1),
  // push &events
  var_push, 2, var_842_1_events, LOCAL(1), 1, var_842_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(928, 29),
  POS(927, 27),
  POS(929, 27)
};

static TAB_NUM t_lambda_48[] = {
  1, // locals
  0, // parameters
  // new(std_types::event CONNECT fd conn)
  var_new, 4, var_std_types__event, var_CONNECT, var_916_3_fd, var_924_9_conn, 1, LOCAL(1),
  // push &events
  var_push, 2, var_842_1_events, LOCAL(1), 1, var_842_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(932, 29),
  POS(931, 27),
  POS(933, 27)
};

static TAB_NUM t_func_do_read[] = {
  1, // locals
  0, // parameters
  // read! $buf fd 0x10'0000
  var_read, 2, var_916_3_fd, num_0x100000, IO_CALL(1), var_938_7_buf,
  // is_an_error:
  var_is_an_error, 1, var_938_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_an_error, lambda_49, IO_TAIL_CALL,
  POS(938, 17),
  POS(940, 23),
  POS(939, 17)
};

static TAB_NUM t_lambda_buf_is_an_error[] = {
  1, // locals
  0, // parameters
  // new(std_types::event READ_ERROR fd buf)
  var_new, 4, var_std_types__event, var_READ_ERROR, var_916_3_fd, var_938_7_buf, 1, LOCAL(1),
  // push &events new(std_types::event READ_ERROR fd buf)
  var_push, 2, var_842_1_events, LOCAL(1), 1, var_842_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(941, 34),
  POS(941, 21),
  POS(942, 21)
};

static TAB_NUM t_lambda_49[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_938_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_empty, lambda_50, IO_TAIL_CALL,
  POS(945, 27),
  POS(944, 21)
};

static TAB_NUM t_lambda_buf_is_empty[] = {
  1, // locals
  0, // parameters
  // stop_reading_from &self fd
  var_stop_reading_from, 2, var_794_0_self, var_916_3_fd, 1, var_794_0_self,
  // close &self fd
  var_close, 2, var_794_0_self, var_916_3_fd, 1, var_794_0_self,
  // new(std_types::event CLOSED fd undefined)
  var_new, 4, var_std_types__event, var_CLOSED, var_916_3_fd, var_undefined, 1, LOCAL(1),
  // push &events new(std_types::event CLOSED fd undefined)
  var_push, 2, var_842_1_events, LOCAL(1), 1, var_842_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(946, 25),
  POS(947, 25),
  POS(948, 38),
  POS(948, 25),
  POS(949, 25)
};

static TAB_NUM t_lambda_50[] = {
  1, // locals
  0, // parameters
  // new(std_types::event READ fd buf)
  var_new, 4, var_std_types__event, var_READ, var_916_3_fd, var_938_7_buf, 1, LOCAL(1),
  // push &events new(std_types::event READ fd buf)
  var_push, 2, var_842_1_events, LOCAL(1), 1, var_842_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(951, 38),
  POS(951, 25),
  POS(952, 25)
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  // attempt_close_operations! &self
  func_attempt_close_operations, 1, var_794_0_self, IO_CALL(1), var_794_0_self,
  // attempt_exit! self
  func_attempt_exit, 1, var_794_0_self, IO_CALL(0),
  // -> self events
  LET, 2, var_794_0_self, var_842_1_events, TAIL_CALL,
  POS(954, 13),
  POS(956, 13),
  POS(958, 13)
};

static TAB_NUM t_func_attempt_close_operations[] = {
  1, // locals
  1, // parameters
  var_960_28_io,
  // close_jobs_of(io)
  var_close_jobs_of, 1, var_960_28_io, 1, LOCAL(1),
  // for_each close_jobs_of(io)
  var_for_each, 3, LOCAL(1), lambda_52, lambda_53, IO_TAIL_CALL,
  POS(961, 12),
  POS(961, 3)
};

static TAB_NUM t_lambda_52[] = {
  3, // locals
  1, // parameters
  var_962_3_fd,
  // write_jobs_of(io)(fd).is_undefined:
  var_write_jobs_of, 1, var_960_28_io, 1, LOCAL(1),
  // write_jobs_of(io)(fd).is_undefined:
  LOCAL(1), 1, var_962_3_fd, 1, LOCAL(2),
  // is_undefined:
  var_is_undefined, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_write_jobs_ofiofd_is_undefined, var_next, IO_TAIL_CALL,
  POS(964, 9),
  POS(964, 9),
  POS(964, 31),
  POS(963, 7)
};

static TAB_NUM t_lambda_write_jobs_ofiofd_is_undefined[] = {
  2, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_962_3_fd, IO_CALL(0),
  // close_jobs_of(fd) false
  var_close_jobs_of, 1, var_960_28_io, 1, LOCAL(2),
  // close_jobs_of(fd) false
  LOCAL(2), 2, var_962_3_fd, var_false, 1, LOCAL(2),
  // io.close_jobs_of(fd) false
  LET, -1, var_960_28_io, var_close_jobs_of, LOCAL(2), var_960_28_io,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(965, 11),
  POS(966, 15),
  POS(966, 15),
  POS(966, 12),
  POS(967, 11)
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_960_28_io, TAIL_CALL,
  POS(969, 7)
};

static TAB_NUM t_func_attempt_exit[] = {
  3, // locals
  1, // parameters
  var_971_16_io,
  // exit_code_of(io).is_defined && io.is_empty:
  var_exit_code_of, 1, var_971_16_io, 1, LOCAL(1),
  // is_defined && io.is_empty:
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // is_defined && io.is_empty:
  var_std__and, 2, LOCAL(2), lambda_54, 1, LOCAL(3),
  // on exit_code_of(io).is_defined && io.is_empty:
  var_on, 2, LOCAL(3), lambda_55, IO_TAIL_CALL,
  POS(972, 6),
  POS(972, 23),
  POS(972, 23),
  POS(972, 3)
};

static TAB_NUM t_lambda_54[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_971_16_io, 1, LOCAL(1),
  // io.is_empty:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(972, 40),
  POS(972, 37)
};

static TAB_NUM t_lambda_55[] = {
  1, // locals
  0, // parameters
  // exit_code_of(io)
  var_exit_code_of, 1, var_971_16_io, 1, LOCAL(1),
  // exit! exit_code_of(io)
  var_exit, 1, LOCAL(1), IO_TAIL_CALL,
  POS(973, 11),
  POS(973, 5)
};

static int tuple_464_0_arguments[] = {
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
  {FLT_TUPLE, 3, {.arguments = tuple_464_0_arguments}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___stop_catching_signals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___set_timeout}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___enable_logging}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___disable_logging}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___log}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_STRING_8, 1, {.str_8 = "["}},
  {FLT_STRING_8, 2, {.str_8 = "] "}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___exit}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__log_unhandled_event}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_WRITE_PENDINGWRITE_COMPLETED}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_STRING_8, 16, {.str_8 = "unhandled event "}},
  {FLT_STRING_8, 3, {.str_8 = " - "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___initialize}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___get_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_timeout_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_exit_codes_ofself}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_write_jobs}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_wait_for_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_CHILD_CHANGED_STATE}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_watched_pids_ofselfpid}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_WINDOW_CHANGED_SIZE}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_self_do_catch_signals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_write_requests}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_STRING_8, 4, {.str_8 = "\033[8;"}},
  {FLT_STRING_8, 1, {.str_8 = ";"}},
  {FLT_STRING_8, 1, {.str_8 = "t"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_file_descriptors}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_bytes_written_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_attempt_reads}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_does_listen}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_conn_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_do_read}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x100000}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_buf_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_buf_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_attempt_close_operations}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_write_jobs_ofiofd_is_undefined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_attempt_exit}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}}
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
    "do_catch_signals\000", NULL,
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
    FOT_DERIVED, 0, 32,
    "io\000std_types", std_types__io__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "object\000std_types", NULL,
    {.position = POS(444, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(450, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_set\000", NULL,
    {.position = POS(451, 39)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(452, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(456, 47)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(459, 29)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "random_seed_of\000", NULL,
    {.position = POS(461, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "step_no_of\000", NULL,
    {.position = POS(462, 16)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "event\000std_types", NULL,
    {.const_idx = -tuple_464_0}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(464, 19)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_reading_from\000", NULL,
    {.position = POS(470, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "478_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "479_0_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(485, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(486, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(481, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_reading_from\000", NULL,
    {.position = POS(489, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "497_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "498_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "504_1_new_read_descriptor_list\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "506_3_read_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(508, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(509, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(505, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "print_to\000", NULL,
    {.position = POS(518, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(524, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(524, 37)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "write\000", NULL,
    {.position = POS(524, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "536_0_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "538_1_job\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(541, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(542, 10)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "cancel_write\000", NULL,
    {.position = POS(547, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "close\000", NULL,
    {.position = POS(562, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "join_process\000", NULL,
    {.position = POS(581, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_injecting_window_change_events\000", NULL,
    {.position = POS(595, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_injecting_window_change_events\000", NULL,
    {.position = POS(607, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_catching_signals\000", NULL,
    {.position = POS(619, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_catching_signals\000", NULL,
    {.position = POS(631, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "set_timeout\000", NULL,
    {.position = POS(643, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "653_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "654_0_timeout\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_number\000", NULL,
    {.position = POS(656, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "current_time_of\000", NULL,
    {.position = POS(656, 45)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(656, 45)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(656, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "657_1_current_timeout\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(659, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(659, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(659, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "enable_logging\000", NULL,
    {.position = POS(663, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "disable_logging\000", NULL,
    {.position = POS(676, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "log\000", NULL,
    {.position = POS(688, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "696_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "697_0_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "698_0_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(701, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(702, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if_not\000", NULL,
    {.position = POS(702, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(703, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split_into_lines\000", NULL,
    {.position = POS(704, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "705_1_prefix\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(705, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "706_1_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(707, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(710, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spaces\000", NULL,
    {.position = POS(710, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDERR_FILENO\000", NULL,
    {.position = POS(713, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "exit\000", NULL,
    {.position = POS(716, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(733, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "741_0_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(744, 7)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "log_unhandled_event\000std", NULL,
    {.const_idx = -func_std__log_unhandled_event}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "750_28_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "751_7_type\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "751_13_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_ERROR\000", NULL,
    {.position = POS(755, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_PENDING\000", NULL,
    {.position = POS(756, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_COMPLETED\000", NULL,
    {.position = POS(757, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(764, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(762, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "serialize\000", NULL,
    {.position = POS(767, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim_right\000", NULL,
    {.position = POS(767, 43)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "initialize\000", NULL,
    {.position = POS(769, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_time\000", NULL,
    {.position = POS(781, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "get_events\000", NULL,
    {.position = POS(784, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "794_0_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(800, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "807_1_want_to_write\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "809_1_timeout\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(814, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(814, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(818, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "837_1_can_read\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "838_1_can_write\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pselect\000", NULL,
    {.position = POS(835, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "842_1_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "843_1_injected_into_stdin\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "844_1_write_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "846_3_signal\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGUSR1\000", NULL,
    {.position = POS(862, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGUSR2\000", NULL,
    {.position = POS(862, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CHILD_CHANGED_STATE\000", NULL,
    {.position = POS(848, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "849_7_pid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "849_12_status\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "wait\000", NULL,
    {.position = POS(849, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exitstatus\000", NULL,
    {.position = POS(850, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PROCESS_JOINED\000", NULL,
    {.position = POS(854, 53)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(854, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WINDOW_CHANGED_SIZE\000", NULL,
    {.position = POS(859, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGNAL\000", NULL,
    {.position = POS(865, 53)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDIN_FILENO\000", NULL,
    {.position = POS(875, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_terminal_size\000", NULL,
    {.position = POS(877, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ\000", NULL,
    {.position = POS(880, 47)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "888_3_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "889_1_job\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "890_8_bytes_written\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(892, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "916_3_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(917, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "fstat\000", NULL,
    {.position = POS(918, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "type_of\000", NULL,
    {.position = POS(920, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SOCKET\000", NULL,
    {.position = POS(920, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_listening\000", NULL,
    {.position = POS(921, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "924_9_conn\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "accept\000", NULL,
    {.position = POS(924, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ_ERROR\000", NULL,
    {.position = POS(928, 50)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CONNECT\000", NULL,
    {.position = POS(932, 50)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "938_7_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read\000", NULL,
    {.position = POS(938, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CLOSED\000", NULL,
    {.position = POS(948, 59)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(917, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "960_28_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "962_3_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "971_16_io\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(972, 3)}
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
  120, // number of constants
  176, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
