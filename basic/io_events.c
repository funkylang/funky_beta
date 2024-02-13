#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  uni_std__READ = -1,
  uni_std__READ_ERROR = -2,
  uni_std__CONNECT = -3,
  uni_std__WRITE_PENDING = -4,
  uni_std__WRITE_COMPLETED = -5,
  uni_std__WRITE_ERROR = -6,
  uni_std__PROCESS_JOINED = -7,
  uni_std__SIGNAL = -8,
  num_0 = -9,
  tuple_435_0 = -10,
  func_std_types__io___start_reading_from = -11,
  lambda_1 = -12,
  lambda_2 = -13,
  func_std_types__io___stop_reading_from = -14,
  lambda_3 = -15,
  lambda_4 = -16,
  lambda_5 = -17,
  lambda_6 = -18,
  lambda_7 = -19,
  func_std_types__io___write = -20,
  lambda_8 = -21,
  lambda_9 = -22,
  func_std_types__io___cancel_write = -23,
  func_std_types__io___close = -24,
  func_std_types__io___join_process = -25,
  func_std_types__io___start_injecting_window_change_events = -26,
  func_std_types__io___stop_injecting_window_change_events = -27,
  func_std_types__io___start_catching_signals = -28,
  func_std_types__io___stop_catching_signals = -29,
  func_std_types__io___enable_logging = -30,
  num_1 = -31,
  func_std_types__io___disable_logging = -32,
  func_std_types__io___log = -33,
  lambda_10 = -34,
  chr_10 = -35,
  lambda_11 = -36,
  string_1 = -37,
  string_2 = -38,
  num_2 = -39,
  minus_num_1 = -40,
  lambda_12 = -41,
  lambda_13 = -42,
  lambda_14 = -43,
  func_std_types__io___exit = -44,
  func_std_types__io___is_empty = -45,
  lambda_15 = -46,
  lambda_16 = -47,
  lambda_17 = -48,
  func_std_types__io___get_events = -49,
  lambda_18 = -50,
  lambda_exit_codes_ofself = -51,
  lambda_19 = -52,
  lambda_20 = -53,
  func_wait_for_events = -54,
  lambda_21 = -55,
  lambda_CHILD_CHANGED_STATE = -56,
  lambda_watched_pids_ofselfpid = -57,
  lambda_22 = -58,
  lambda_WINDOW_CHANGED_SIZE = -59,
  lambda_23 = -60,
  lambda_self_do_catch_signals = -61,
  func_handle_write_requests = -62,
  lambda_24 = -63,
  lambda_25 = -64,
  lambda_26 = -65,
  string_3 = -66,
  string_4 = -67,
  str_t = -68,
  lambda_27 = -69,
  func_check_file_descriptors = -70,
  lambda_28 = -71,
  lambda_bytes_written_is_an_error = -72,
  lambda_29 = -73,
  lambda_30 = -74,
  lambda_31 = -75,
  func_attempt_reads = -76,
  lambda_32 = -77,
  lambda_33 = -78,
  lambda_34 = -79,
  lambda_35 = -80,
  lambda_does_listen = -81,
  lambda_conn_is_an_error = -82,
  lambda_36 = -83,
  func_do_read = -84,
  num_0x100000 = -85,
  lambda_buf_is_an_error = -86,
  lambda_37 = -87,
  lambda_38 = -88,
  func_attempt_close_operations = -89,
  lambda_39 = -90,
  lambda_write_jobs_ofiofd_is_undefined = -91,
  lambda_40 = -92,
  func_attempt_exit = -93,
  lambda_41 = -94,
  lambda_42 = -95
};

enum {
  var__START = FIRST_VAR-1,
  var_std__READ, // initialized
  var_std__assign, // extern
  var_std__READ_ERROR, // initialized
  var_std__CONNECT, // initialized
  var_std__WRITE_PENDING, // initialized
  var_std__WRITE_COMPLETED, // initialized
  var_std__WRITE_ERROR, // initialized
  var_std__PROCESS_JOINED, // initialized
  var_std__SIGNAL, // initialized
  var_std__get_events, // attribute
  var_std__start_reading_from, // attribute
  var_std__stop_reading_from, // attribute
  var_std__cancel_write, // attribute
  var_std__join_process, // attribute
  var_std__start_injecting_window_change_events, // attribute
  var_std__stop_injecting_window_change_events, // attribute
  var_std__start_catching_signals, // attribute
  var_std__stop_catching_signals, // attribute
  var_std__enable_logging, // attribute
  var_std__disable_logging, // attribute
  var_std__log, // attribute
  var_std__random_seed_of, // attribute
  var_std__step_no_of, // attribute
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
  var_449_0_self, // dynamic
  var_450_0_fd, // dynamic
  var_true, // extern
  var_push, // extern
  var_if, // extern
  var_stop_reading_from, // extern polymorphic
  var_468_0_self, // dynamic
  var_469_0_fd, // dynamic
  var_475_1_new_read_descriptor_list, // dynamic
  var_477_3_read_fd, // dynamic
  var_std__equal, // extern
  var_next, // extern
  var_for_each, // extern
  var_write, // extern polymorphic
  var_499_0_data, // dynamic
  var_501_1_job, // dynamic
  var_is_defined, // extern
  var_append, // extern
  var_cancel_write, // extern polymorphic
  var_close, // extern polymorphic
  var_join_process, // extern polymorphic
  var_start_injecting_window_change_events, // extern polymorphic
  var_stop_injecting_window_change_events, // extern polymorphic
  var_start_catching_signals, // extern polymorphic
  var_stop_catching_signals, // extern polymorphic
  var_enable_logging, // extern polymorphic
  var_disable_logging, // extern polymorphic
  var_log, // extern polymorphic
  var_639_0_self, // dynamic
  var_640_0_level, // dynamic
  var_641_0_message, // dynamic
  var_std__less, // extern
  var_std__not, // extern
  var_has_suffix, // extern
  var_update_if_not, // extern
  var_split_into_lines, // extern
  var_647_1_prefix, // dynamic
  var_std__string, // extern
  var_648_1_buf, // dynamic
  var_range, // extern
  var_length_of, // extern
  var_spaces, // extern
  var_to_utf8, // extern
  var_STDERR_FILENO, // extern
  var_exit, // extern polymorphic
  var_is_empty, // extern polymorphic
  var_683_0_self, // dynamic
  var_std__and, // extern
  var_get_events, // extern polymorphic
  var_704_0_self, // dynamic
  var_705_0_timeout, // dynamic
  var_inc, // extern
  var_718_1_want_to_write, // dynamic
  var_any_of, // extern
  var_update_if, // extern
  var_736_1_can_read, // dynamic
  var_737_1_can_write, // dynamic
  var_pselect, // extern
  var_740_1_events, // dynamic
  var_741_1_injected_into_stdin, // dynamic
  var_742_1_write_jobs, // dynamic
  var_744_3_signal, // dynamic
  var_SIGUSR1, // extern
  var_SIGUSR2, // extern
  var_std__sequence, // extern
  var_CHILD_CHANGED_STATE, // extern
  var_747_7_pid, // dynamic
  var_747_12_status, // dynamic
  var_wait, // extern
  var_exitstatus, // extern
  var_PROCESS_JOINED, // extern
  var_new, // extern
  var_WINDOW_CHANGED_SIZE, // extern
  var_SIGNAL, // extern
  var_case, // extern
  var_STDIN_FILENO, // extern
  var_get_terminal_size, // extern
  var_READ, // extern
  var_786_3_fd, // dynamic
  var_787_1_job, // dynamic
  var_788_8_bytes_written, // dynamic
  var_is_an_error, // extern
  var_WRITE_ERROR, // extern
  var_std__plus, // extern
  var_WRITE_PENDING, // extern
  var_WRITE_COMPLETED, // extern
  var_814_3_fd, // dynamic
  var_not, // extern
  var_std__or, // extern
  var_fstat, // extern
  var_type_of, // extern
  var_SOCKET, // extern
  var_is_listening, // extern
  var_822_9_conn, // dynamic
  var_accept, // extern
  var_READ_ERROR, // extern
  var_CONNECT, // extern
  var_836_7_buf, // dynamic
  var_read, // extern
  var_if_not, // extern
  var_851_28_io, // dynamic
  var_853_3_fd, // dynamic
  var_is_undefined, // extern
  var_862_16_io, // dynamic
  var_on, // extern
  var__END
};


static TAB_NUM t_func_std_types__io___start_reading_from[] = {
  2, // locals
  2, // parameters
  var_449_0_self,
  var_450_0_fd,
  // read_descriptor_set_of(self)(fd)
  var_read_descriptor_set_of, 1, var_449_0_self, 1, LOCAL(1),
  // read_descriptor_set_of(self)(fd)
  LOCAL(1), 1, var_450_0_fd, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1, lambda_2, TAIL_CALL,
  POS(453, 5),
  POS(453, 5),
  POS(452, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_449_0_self, TAIL_CALL,
  POS(454, 7)
};

static TAB_NUM t_lambda_2[] = {
  2, // locals
  0, // parameters
  // read_descriptor_set_of(fd) true
  var_read_descriptor_set_of, 1, var_449_0_self, 1, LOCAL(2),
  // read_descriptor_set_of(fd) true
  LOCAL(2), 2, var_450_0_fd, var_true, 1, LOCAL(2),
  // self.read_descriptor_set_of(fd) true
  LET, -1, var_449_0_self, var_read_descriptor_set_of, LOCAL(2), var_449_0_self,
  // read_descriptor_list_of fd
  var_read_descriptor_list_of, 1, var_449_0_self, 1, LOCAL(1),
  // push &self.read_descriptor_list_of fd
  var_push, 2, LOCAL(1), var_450_0_fd, 1, LOCAL(1),
  // self.read_descriptor_list_of fd
  LET, -1, var_449_0_self, var_read_descriptor_list_of, LOCAL(1), var_449_0_self,
  // -> self
  LET, 1, var_449_0_self, TAIL_CALL,
  POS(456, 13),
  POS(456, 13),
  POS(456, 8),
  POS(457, 18),
  POS(457, 7),
  POS(457, 13),
  POS(458, 7)
};

static TAB_NUM t_func_std_types__io___stop_reading_from[] = {
  2, // locals
  2, // parameters
  var_468_0_self,
  var_469_0_fd,
  // read_descriptor_set_of(self)(fd)
  var_read_descriptor_set_of, 1, var_468_0_self, 1, LOCAL(1),
  // read_descriptor_set_of(self)(fd)
  LOCAL(1), 1, var_469_0_fd, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_3, lambda_7, TAIL_CALL,
  POS(472, 5),
  POS(472, 5),
  POS(471, 3)
};

static TAB_NUM t_lambda_3[] = {
  2, // locals
  0, // parameters
  // read_descriptor_set_of(fd) false
  var_read_descriptor_set_of, 1, var_468_0_self, 1, LOCAL(2),
  // read_descriptor_set_of(fd) false
  LOCAL(2), 2, var_469_0_fd, var_false, 1, LOCAL(2),
  // self.read_descriptor_set_of(fd) false
  LET, -1, var_468_0_self, var_read_descriptor_set_of, LOCAL(2), var_468_0_self,
  // $new_read_descriptor_list empty_list
  LET, 1, var_empty_list, 1, var_475_1_new_read_descriptor_list,
  // read_descriptor_list_of(self)
  var_read_descriptor_list_of, 1, var_468_0_self, 1, LOCAL(1),
  // for_each read_descriptor_list_of(self)
  var_for_each, 3, LOCAL(1), lambda_4, lambda_6, TAIL_CALL,
  POS(474, 13),
  POS(474, 13),
  POS(474, 8),
  POS(475, 7),
  POS(476, 16),
  POS(476, 7)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  1, // parameters
  var_477_3_read_fd,
  // fd == read_fd
  var_std__equal, 2, var_469_0_fd, var_477_3_read_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_5, TAIL_CALL,
  POS(479, 13),
  POS(478, 11)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  // push &new_read_descriptor_list read_fd
  var_push, 2, var_475_1_new_read_descriptor_list, var_477_3_read_fd, 1, var_475_1_new_read_descriptor_list,
  // next
  var_next, 0, TAIL_CALL,
  POS(482, 15),
  POS(483, 15)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // self.read_descriptor_list_of new_read_descriptor_list
  LET, -1, var_468_0_self, var_read_descriptor_list_of, var_475_1_new_read_descriptor_list, var_468_0_self,
  // -> self
  LET, 1, var_468_0_self, TAIL_CALL,
  POS(485, 12),
  POS(486, 11)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_468_0_self, TAIL_CALL,
  POS(487, 7)
};

static TAB_NUM t_func_std_types__io___write[] = {
  4, // locals
  3, // parameters
  LOCAL(3), // 497_0_self
  LOCAL(4), // 498_0_fd
  var_499_0_data,
  // write_jobs_of(self)(fd)
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(1),
  // $job write_jobs_of(self)(fd)
  LOCAL(1), 1, LOCAL(4), 1, var_501_1_job,
  // is_defined
  var_is_defined, 1, var_501_1_job, 1, LOCAL(1),
  // !job
  var_if, 3, LOCAL(1), lambda_8, lambda_9, 1, var_501_1_job,
  // write_jobs_of(fd) job
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(2),
  // write_jobs_of(fd) job
  LOCAL(2), 2, LOCAL(4), var_501_1_job, 1, LOCAL(2),
  // self.write_jobs_of(fd) job
  LET, -1, LOCAL(3), var_write_jobs_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(501, 8),
  POS(501, 3),
  POS(504, 11),
  POS(502, 3),
  POS(507, 9),
  POS(507, 9),
  POS(507, 4),
  POS(508, 3)
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // append(job data)
  var_append, 2, var_501_1_job, var_499_0_data, 1, LOCAL(1),
  //  append(job data)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(505, 10),
  POS(505, 9)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_499_0_data, TAIL_CALL,
  POS(506, 9)
};

static TAB_NUM t_func_std_types__io___cancel_write[] = {
  5, // locals
  2, // parameters
  LOCAL(3), // 518_0_self
  LOCAL(4), // 519_0_fd
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
  POS(521, 19),
  POS(521, 3),
  POS(522, 9),
  POS(522, 9),
  POS(522, 4),
  POS(523, 3)
};

static TAB_NUM t_func_std_types__io___close[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 537_0_self
  LOCAL(4), // 538_0_fd
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
  POS(540, 3),
  POS(541, 9),
  POS(541, 9),
  POS(541, 4),
  POS(542, 3)
};

static TAB_NUM t_func_std_types__io___join_process[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 552_0_self
  LOCAL(4), // 553_0_pid
  // watched_pids_of(pid) true
  var_watched_pids_of, 1, LOCAL(3), 1, LOCAL(2),
  // watched_pids_of(pid) true
  LOCAL(2), 2, LOCAL(4), var_true, 1, LOCAL(2),
  // self.watched_pids_of(pid) true
  LET, -1, LOCAL(3), var_watched_pids_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(555, 9),
  POS(555, 9),
  POS(555, 4),
  POS(556, 3)
};

static TAB_NUM t_func_std_types__io___start_injecting_window_change_events[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 566_0_self
  // .do_inject_window_change_events true)
  LET, -1, LOCAL(2), var_do_inject_window_change_events, var_true, LOCAL(1),
  // -> self(.do_inject_window_change_events true)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(568, 11),
  POS(568, 3)
};

static TAB_NUM t_func_std_types__io___stop_injecting_window_change_events[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 578_0_self
  // .do_inject_window_change_events false)
  LET, -1, LOCAL(2), var_do_inject_window_change_events, var_false, LOCAL(1),
  // -> self(.do_inject_window_change_events false)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(580, 11),
  POS(580, 3)
};

static TAB_NUM t_func_std_types__io___start_catching_signals[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 590_0_self
  // .do_catch_signals true)
  LET, -1, LOCAL(2), var_do_catch_signals, var_true, LOCAL(1),
  // -> self(.do_catch_signals true)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(592, 11),
  POS(592, 3)
};

static TAB_NUM t_func_std_types__io___stop_catching_signals[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 602_0_self
  // .do_catch_signals false)
  LET, -1, LOCAL(2), var_do_catch_signals, var_false, LOCAL(1),
  // -> self(.do_catch_signals false)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(604, 11),
  POS(604, 3)
};

static TAB_NUM t_func_std_types__io___enable_logging[] = {
  3, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 614_0_self
  num_1, LOCAL(3), // 615_0_level
  // .log_level_of level)
  LET, -1, LOCAL(2), var_log_level_of, LOCAL(3), LOCAL(1),
  // -> self(.log_level_of level)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(617, 11),
  POS(617, 3)
};

static TAB_NUM t_func_std_types__io___disable_logging[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 627_0_self
  // .log_level_of 0)
  LET, -1, LOCAL(2), var_log_level_of, num_0, LOCAL(1),
  // -> self(.log_level_of 0)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(629, 11),
  POS(629, 3)
};

static TAB_NUM t_func_std_types__io___log[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_639_0_self,
  num_1, var_640_0_level,
  MANDATORY_PARAMETER, var_641_0_message,
  // log_level_of(self):
  var_log_level_of, 1, var_639_0_self, 1, LOCAL(1),
  // log_level_of(self):
  var_std__less, 2, LOCAL(1), var_640_0_level, 1, LOCAL(2),
  // log_level_of(self):
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_10, lambda_14, TAIL_CALL,
  POS(644, 14),
  POS(644, 14),
  POS(644, 14),
  POS(643, 3)
};

static TAB_NUM t_lambda_10[] = {
  2, // locals
  0, // parameters
  // message .has_suffix. '@nl;' &message: push message '@nl;'
  var_has_suffix, 2, var_641_0_message, chr_10, 1, LOCAL(1),
  // update_if_not message .has_suffix. '@nl;' &message: push message '@nl;'
  var_update_if_not, 3, LOCAL(1), var_641_0_message, lambda_11, 1, var_641_0_message,
  // $lines split_into_lines(message)
  var_split_into_lines, 1, var_641_0_message, 1, LOCAL(2),
  // $prefix "[@(level)] "
  var_std__string, 3, string_1, var_640_0_level, string_2, 1, var_647_1_prefix,
  // lines(1))
  LOCAL(2), 1, num_1, 1, LOCAL(1),
  // $buf append(prefix lines(1))
  var_append, 2, var_647_1_prefix, LOCAL(1), 1, var_648_1_buf,
  // range &lines 2 -1
  var_range, 3, LOCAL(2), num_2, minus_num_1, 1, LOCAL(2),
  // for_each lines
  var_for_each, 3, LOCAL(2), lambda_12, lambda_13, TAIL_CALL,
  POS(645, 21),
  POS(645, 7),
  POS(646, 7),
  POS(647, 7),
  POS(648, 26),
  POS(648, 7),
  POS(649, 7),
  POS(650, 7)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // push message '@nl;'
  var_push, 2, var_641_0_message, chr_10, TAIL_CALL,
  POS(645, 59)
};

static TAB_NUM t_lambda_12[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 651_3_line
  // length_of(prefix)) line
  var_length_of, 1, var_647_1_prefix, 1, LOCAL(1),
  // spaces(length_of(prefix)) line
  var_spaces, 1, LOCAL(1), 1, LOCAL(2),
  // append &buf spaces(length_of(prefix)) line
  var_append, 3, var_648_1_buf, LOCAL(2), LOCAL(3), 1, var_648_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(652, 30),
  POS(652, 23),
  POS(652, 11),
  POS(653, 11)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // to_utf8
  var_to_utf8, 1, var_648_1_buf, 1, LOCAL(1),
  // write self STDERR_FILENO buf.to_utf8
  var_write, 3, var_639_0_self, var_STDERR_FILENO, LOCAL(1), TAIL_CALL,
  POS(655, 40),
  POS(655, 11)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_639_0_self, TAIL_CALL,
  POS(656, 7)
};

static TAB_NUM t_func_std_types__io___exit[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 666_0_self
  LOCAL(3), // 667_0_exit_code
  // self
  LET, -3, LOCAL(2), var_exit_code_of, LOCAL(3), var_read_descriptor_list_of, var_empty_list, var_read_descriptor_set_of, var_empty_hash_set, LOCAL(1),
  // ->
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(670, 5),
  POS(669, 3)
};

static TAB_NUM t_func_std_types__io___is_empty[] = {
  3, // locals
  1, // parameters
  var_683_0_self,
  // read_descriptor_list_of(self).is_empty
  var_read_descriptor_list_of, 1, var_683_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_15, 1, LOCAL(3),
  // ->
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(687, 7),
  POS(687, 37),
  POS(686, 7),
  POS(685, 3)
};

static TAB_NUM t_lambda_15[] = {
  3, // locals
  0, // parameters
  // write_jobs_of(self).is_empty
  var_write_jobs_of, 1, var_683_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_16, 1, LOCAL(3),
  // write_jobs_of(self).is_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(688, 7),
  POS(688, 27),
  POS(686, 7),
  POS(688, 7)
};

static TAB_NUM t_lambda_16[] = {
  3, // locals
  0, // parameters
  // close_jobs_of(self).is_empty
  var_close_jobs_of, 1, var_683_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_17, 1, LOCAL(3),
  // close_jobs_of(self).is_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(689, 7),
  POS(689, 27),
  POS(686, 7),
  POS(689, 7)
};

static TAB_NUM t_lambda_17[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(self).is_empty
  var_watched_pids_of, 1, var_683_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // watched_pids_of(self).is_empty
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(690, 7),
  POS(690, 29),
  POS(690, 7)
};

static TAB_NUM t_func_std_types__io___get_events[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_704_0_self,
  var_undefined, var_705_0_timeout,
  // step_no_of
  var_step_no_of, 1, var_704_0_self, 1, LOCAL(1),
  // inc &self.step_no_of
  var_inc, 1, LOCAL(1), 1, LOCAL(1),
  // self.step_no_of
  LET, -1, var_704_0_self, var_step_no_of, LOCAL(1), var_704_0_self,
  // attempt_close_operations! &self
  func_attempt_close_operations, 1, var_704_0_self, IO_CALL(1), var_704_0_self,
  // attempt_exit! self
  func_attempt_exit, 1, var_704_0_self, IO_CALL(0),
  // $want_to_write empty_list
  LET, 1, var_empty_list, 1, var_718_1_want_to_write,
  // is_defined
  var_is_defined, 1, var_705_0_timeout, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_18, 1, LOCAL(2),
  // update_if # do not wait if an exit code is pending
  var_update_if, 3, LOCAL(2), var_705_0_timeout, lambda_19, 1, var_705_0_timeout,
  // write_jobs_of(self)
  var_write_jobs_of, 1, var_704_0_self, 1, LOCAL(1),
  // for_each write_jobs_of(self)
  var_for_each, 3, LOCAL(1), lambda_20, func_wait_for_events, IO_TAIL_CALL,
  POS(711, 13),
  POS(711, 3),
  POS(711, 8),
  POS(713, 3),
  POS(715, 3),
  POS(718, 3),
  POS(721, 15),
  POS(720, 7),
  POS(719, 3),
  POS(727, 12),
  POS(727, 3)
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  0, // parameters
  // exit_codes_of(self): (pid _exit_code)
  var_exit_codes_of, 1, var_704_0_self, 1, LOCAL(1),
  // any_of
  var_any_of, 2, LOCAL(1), lambda_exit_codes_ofself, 1, LOCAL(2),
  // any_of
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(723, 9),
  POS(722, 7),
  POS(722, 7)
};

static TAB_NUM t_lambda_exit_codes_ofself[] = {
  3, // locals
  2, // parameters
  LOCAL(3), // 723_22_pid
  LOCAL(1),
  // watched_pids_of(self)(pid)
  var_watched_pids_of, 1, var_704_0_self, 1, LOCAL(1),
  // watched_pids_of(self)(pid)
  LOCAL(1), 1, LOCAL(3), 1, LOCAL(2),
  // -> watched_pids_of(self)(pid)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(724, 14),
  POS(724, 14),
  POS(724, 11)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(726, 7)
};

static TAB_NUM t_lambda_20[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 728_3_fd
  LOCAL(1),
  // push &want_to_write fd
  var_push, 2, var_718_1_want_to_write, LOCAL(2), 1, var_718_1_want_to_write,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(729, 7),
  POS(730, 7)
};

static TAB_NUM t_func_wait_for_events[] = {
  3, // locals
  0, // parameters
  // read_descriptor_list_of(self)
  var_read_descriptor_list_of, 1, var_704_0_self, 1, LOCAL(1),
  // pselect!
  var_pselect, 4, LOCAL(1), var_718_1_want_to_write, var_empty_list, var_705_0_timeout, IO_CALL(4), LOCAL(3), var_736_1_can_read, var_737_1_can_write, LOCAL(2),
  // $events empty_list
  LET, 1, var_empty_list, 1, var_740_1_events,
  // $injected_into_stdin false
  LET, 1, var_false, 1, var_741_1_injected_into_stdin,
  // $write_jobs write_jobs_of(self)
  var_write_jobs_of, 1, var_704_0_self, 1, var_742_1_write_jobs,
  // for_each signals
  var_for_each, 3, LOCAL(3), lambda_21, func_handle_write_requests, IO_TAIL_CALL,
  POS(736, 17),
  POS(734, 5),
  POS(740, 5),
  POS(741, 5),
  POS(742, 5),
  POS(743, 5)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  1, // parameters
  var_744_3_signal,
  // SIGUSR1, SIGUSR2:
  var_std__sequence, 2, var_SIGUSR1, var_SIGUSR2, 1, LOCAL(1),
  // case signal
  var_case, 7, var_744_3_signal, var_CHILD_CHANGED_STATE, lambda_CHILD_CHANGED_STATE, var_WINDOW_CHANGED_SIZE, lambda_WINDOW_CHANGED_SIZE, LOCAL(1), lambda_23, IO_TAIL_CALL,
  POS(760, 11),
  POS(745, 9)
};

static TAB_NUM t_lambda_CHILD_CHANGED_STATE[] = {
  2, // locals
  0, // parameters
  // wait! $pid $status
  var_wait, 0, IO_CALL(2), var_747_7_pid, var_747_12_status,
  // exitstatus &status
  var_exitstatus, 1, var_747_12_status, 1, var_747_12_status,
  // watched_pids_of(self)(pid):
  var_watched_pids_of, 1, var_704_0_self, 1, LOCAL(1),
  // watched_pids_of(self)(pid):
  LOCAL(1), 1, var_747_7_pid, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_watched_pids_ofselfpid, lambda_22, IO_TAIL_CALL,
  POS(747, 13),
  POS(748, 13),
  POS(750, 15),
  POS(750, 15),
  POS(749, 13)
};

static TAB_NUM t_lambda_watched_pids_ofselfpid[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(pid) false
  var_watched_pids_of, 1, var_704_0_self, 1, LOCAL(2),
  // watched_pids_of(pid) false
  LOCAL(2), 2, var_747_7_pid, var_false, 1, LOCAL(2),
  // self.watched_pids_of(pid) false
  LET, -1, var_704_0_self, var_watched_pids_of, LOCAL(2), var_704_0_self,
  // new(std_types::event PROCESS_JOINED pid status)
  var_new, 4, var_std_types__event, var_PROCESS_JOINED, var_747_7_pid, var_747_12_status, 1, LOCAL(1),
  // push &events new(std_types::event PROCESS_JOINED pid status)
  var_push, 2, var_740_1_events, LOCAL(1), 1, var_740_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(751, 23),
  POS(751, 23),
  POS(751, 18),
  POS(752, 30),
  POS(752, 17),
  POS(753, 17)
};

static TAB_NUM t_lambda_22[] = {
  2, // locals
  0, // parameters
  // exit_codes_of(pid) status
  var_exit_codes_of, 1, var_704_0_self, 1, LOCAL(2),
  // exit_codes_of(pid) status
  LOCAL(2), 2, var_747_7_pid, var_747_12_status, 1, LOCAL(2),
  // self.exit_codes_of(pid) status
  LET, -1, var_704_0_self, var_exit_codes_of, LOCAL(2), var_704_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(755, 23),
  POS(755, 23),
  POS(755, 18),
  POS(756, 17)
};

static TAB_NUM t_lambda_WINDOW_CHANGED_SIZE[] = {
  0, // locals
  0, // parameters
  // self.window_change_event_occurred true
  LET, -1, var_704_0_self, var_window_change_event_occurred, var_true, var_704_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(758, 14),
  POS(759, 13)
};

static TAB_NUM t_lambda_23[] = {
  1, // locals
  0, // parameters
  // do_catch_signals:
  var_do_catch_signals, 1, var_704_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_self_do_catch_signals, var_next, IO_TAIL_CALL,
  POS(762, 20),
  POS(761, 13)
};

static TAB_NUM t_lambda_self_do_catch_signals[] = {
  1, // locals
  0, // parameters
  // new(std_types::event SIGNAL undefined signal)
  var_new, 4, var_std_types__event, var_SIGNAL, var_undefined, var_744_3_signal, 1, LOCAL(1),
  // push &events new(std_types::event SIGNAL undefined signal)
  var_push, 2, var_740_1_events, LOCAL(1), 1, var_740_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(763, 30),
  POS(763, 17),
  POS(764, 17)
};

static TAB_NUM t_func_handle_write_requests[] = {
  2, // locals
  0, // parameters
  // window_change_event_occurred
  var_window_change_event_occurred, 1, var_704_0_self, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_24, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_26, lambda_27, IO_TAIL_CALL,
  POS(771, 16),
  POS(770, 11),
  POS(769, 7)
};

static TAB_NUM t_lambda_24[] = {
  2, // locals
  0, // parameters
  // do_inject_window_change_events
  var_do_inject_window_change_events, 1, var_704_0_self, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_25, 1, LOCAL(2),
  // self.do_inject_window_change_events
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(772, 16),
  POS(770, 11),
  POS(772, 11)
};

static TAB_NUM t_lambda_25[] = {
  2, // locals
  0, // parameters
  // read_descriptor_set_of(self)(STDIN_FILENO)
  var_read_descriptor_set_of, 1, var_704_0_self, 1, LOCAL(1),
  // read_descriptor_set_of(self)(STDIN_FILENO)
  LOCAL(1), 1, var_STDIN_FILENO, 1, LOCAL(2),
  // read_descriptor_set_of(self)(STDIN_FILENO)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(773, 11),
  POS(773, 11),
  POS(773, 11)
};

static TAB_NUM t_lambda_26[] = {
  4, // locals
  0, // parameters
  // get_terminal_size! STDIN_FILENO $width $height
  var_get_terminal_size, 1, var_STDIN_FILENO, IO_CALL(2), LOCAL(2), LOCAL(3),
  // self.window_change_event_occurred false
  LET, -1, var_704_0_self, var_window_change_event_occurred, var_false, var_704_0_self,
  // $buf "@esc;[8;@(height);@(width)t"
  var_std__string, 5, string_3, LOCAL(3), string_4, LOCAL(2), str_t, 1, LOCAL(4),
  // new(std_types::event READ STDIN_FILENO buf)
  var_new, 4, var_std_types__event, var_READ, var_STDIN_FILENO, LOCAL(4), 1, LOCAL(1),
  // push &events new(std_types::event READ STDIN_FILENO buf)
  var_push, 2, var_740_1_events, LOCAL(1), 1, var_740_1_events,
  // !injected_into_stdin true
  LET, 1, var_true, 1, var_741_1_injected_into_stdin,
  // check_file_descriptors!
  func_check_file_descriptors, 0, IO_TAIL_CALL,
  POS(775, 11),
  POS(776, 12),
  POS(777, 11),
  POS(778, 24),
  POS(778, 11),
  POS(779, 11),
  POS(780, 11)
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  // check_file_descriptors!
  func_check_file_descriptors, 0, IO_TAIL_CALL,
  POS(782, 11)
};

static TAB_NUM t_func_check_file_descriptors[] = {
  0, // locals
  0, // parameters
  // for_each can_write
  var_for_each, 3, var_737_1_can_write, lambda_28, func_attempt_reads, IO_TAIL_CALL,
  POS(785, 7)
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  1, // parameters
  var_786_3_fd,
  // $job write_jobs(fd)
  var_742_1_write_jobs, 1, var_786_3_fd, 1, var_787_1_job,
  // write! $bytes_written fd job
  var_write, 2, var_786_3_fd, var_787_1_job, IO_CALL(1), var_788_8_bytes_written,
  // is_an_error:
  var_is_an_error, 1, var_788_8_bytes_written, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_bytes_written_is_an_error, lambda_29, IO_TAIL_CALL,
  POS(787, 11),
  POS(788, 11),
  POS(790, 27),
  POS(789, 11)
};

static TAB_NUM t_lambda_bytes_written_is_an_error[] = {
  2, // locals
  0, // parameters
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, var_704_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, var_786_3_fd, var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, var_704_0_self, var_write_jobs_of, LOCAL(2), var_704_0_self,
  // tuple(bytes_written job)
  var_tuple, 2, var_788_8_bytes_written, var_787_1_job, 1, LOCAL(1),
  // new
  var_new, 4, var_std_types__event, var_WRITE_ERROR, var_786_3_fd, LOCAL(1), 1, LOCAL(2),
  // push &events
  var_push, 2, var_740_1_events, LOCAL(2), 1, var_740_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(791, 21),
  POS(791, 21),
  POS(791, 16),
  POS(796, 19),
  POS(793, 17),
  POS(792, 15),
  POS(797, 15)
};

static TAB_NUM t_lambda_29[] = {
  2, // locals
  0, // parameters
  // length_of(job):
  var_length_of, 1, var_787_1_job, 1, LOCAL(1),
  // bytes_written < length_of(job):
  var_std__less, 2, var_788_8_bytes_written, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_30, lambda_31, IO_TAIL_CALL,
  POS(800, 33),
  POS(800, 17),
  POS(799, 15)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // bytes_written+1 -1
  var_std__plus, 2, var_788_8_bytes_written, num_1, 1, LOCAL(1),
  // range &job bytes_written+1 -1
  var_range, 3, var_787_1_job, LOCAL(1), minus_num_1, 1, var_787_1_job,
  // write_jobs_of(fd) job # remaining text to write
  var_write_jobs_of, 1, var_704_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) job # remaining text to write
  LOCAL(2), 2, var_786_3_fd, var_787_1_job, 1, LOCAL(2),
  // self.write_jobs_of(fd) job # remaining text to write
  LET, -1, var_704_0_self, var_write_jobs_of, LOCAL(2), var_704_0_self,
  // new(std_types::event WRITE_PENDING fd job)
  var_new, 4, var_std_types__event, var_WRITE_PENDING, var_786_3_fd, var_787_1_job, 1, LOCAL(1),
  // push &events new(std_types::event WRITE_PENDING fd job)
  var_push, 2, var_740_1_events, LOCAL(1), 1, var_740_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(801, 30),
  POS(801, 19),
  POS(802, 25),
  POS(802, 25),
  POS(802, 20),
  POS(803, 32),
  POS(803, 19),
  POS(804, 19)
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  0, // parameters
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, var_704_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, var_786_3_fd, var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, var_704_0_self, var_write_jobs_of, LOCAL(2), var_704_0_self,
  // new(std_types::event WRITE_COMPLETED fd undefined)
  var_new, 4, var_std_types__event, var_WRITE_COMPLETED, var_786_3_fd, var_undefined, 1, LOCAL(1),
  // push &events
  var_push, 2, var_740_1_events, LOCAL(1), 1, var_740_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(806, 25),
  POS(806, 25),
  POS(806, 20),
  POS(808, 21),
  POS(807, 19),
  POS(809, 19)
};

static TAB_NUM t_func_attempt_reads[] = {
  0, // locals
  0, // parameters
  // for_each can_read
  var_for_each, 3, var_736_1_can_read, lambda_32, lambda_38, IO_TAIL_CALL,
  POS(813, 7)
};

static TAB_NUM t_lambda_32[] = {
  3, // locals
  1, // parameters
  var_814_3_fd,
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__equal, 2, var_814_3_fd, var_STDIN_FILENO, 1, LOCAL(1),
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__or, 2, LOCAL(2), lambda_33, 1, LOCAL(3),
  // if_not fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_if_not, 3, LOCAL(3), var_next, lambda_34, IO_TAIL_CALL,
  POS(815, 18),
  POS(815, 18),
  POS(815, 18),
  POS(815, 11)
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // not(injected_into_stdin) next:
  var_not, 1, var_741_1_injected_into_stdin, 1, LOCAL(1),
  // not(injected_into_stdin) next:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(815, 40),
  POS(815, 40)
};

static TAB_NUM t_lambda_34[] = {
  3, // locals
  0, // parameters
  // fstat! fd $info
  var_fstat, 1, var_814_3_fd, IO_CALL(1), LOCAL(3),
  // type_of(info) == SOCKET:
  var_type_of, 1, LOCAL(3), 1, LOCAL(1),
  // type_of(info) == SOCKET:
  var_std__equal, 2, LOCAL(1), var_SOCKET, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_35, func_do_read, IO_TAIL_CALL,
  POS(816, 13),
  POS(818, 15),
  POS(818, 15),
  POS(817, 13)
};

static TAB_NUM t_lambda_35[] = {
  1, // locals
  0, // parameters
  // is_listening! $does_listen fd
  var_is_listening, 1, var_814_3_fd, IO_CALL(1), LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_does_listen, func_do_read, IO_TAIL_CALL,
  POS(819, 17),
  POS(820, 17)
};

static TAB_NUM t_lambda_does_listen[] = {
  1, // locals
  0, // parameters
  // accept! $conn fd
  var_accept, 1, var_814_3_fd, IO_CALL(1), var_822_9_conn,
  // is_an_error:
  var_is_an_error, 1, var_822_9_conn, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_conn_is_an_error, lambda_36, IO_TAIL_CALL,
  POS(822, 21),
  POS(824, 28),
  POS(823, 21)
};

static TAB_NUM t_lambda_conn_is_an_error[] = {
  1, // locals
  0, // parameters
  // new(std_types::event READ_ERROR fd conn)
  var_new, 4, var_std_types__event, var_READ_ERROR, var_814_3_fd, var_822_9_conn, 1, LOCAL(1),
  // push &events
  var_push, 2, var_740_1_events, LOCAL(1), 1, var_740_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(826, 27),
  POS(825, 25),
  POS(827, 25)
};

static TAB_NUM t_lambda_36[] = {
  1, // locals
  0, // parameters
  // new(std_types::event CONNECT fd conn)
  var_new, 4, var_std_types__event, var_CONNECT, var_814_3_fd, var_822_9_conn, 1, LOCAL(1),
  // push &events
  var_push, 2, var_740_1_events, LOCAL(1), 1, var_740_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(830, 27),
  POS(829, 25),
  POS(831, 25)
};

static TAB_NUM t_func_do_read[] = {
  1, // locals
  0, // parameters
  // read! $buf fd 0x10'0000
  var_read, 2, var_814_3_fd, num_0x100000, IO_CALL(1), var_836_7_buf,
  // is_an_error:
  var_is_an_error, 1, var_836_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_an_error, lambda_37, IO_TAIL_CALL,
  POS(836, 15),
  POS(838, 21),
  POS(837, 15)
};

static TAB_NUM t_lambda_buf_is_an_error[] = {
  1, // locals
  0, // parameters
  // new(std_types::event READ_ERROR fd buf)
  var_new, 4, var_std_types__event, var_READ_ERROR, var_814_3_fd, var_836_7_buf, 1, LOCAL(1),
  // push &events new(std_types::event READ_ERROR fd buf)
  var_push, 2, var_740_1_events, LOCAL(1), 1, var_740_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(839, 32),
  POS(839, 19),
  POS(840, 19)
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // new(std_types::event READ fd buf)
  var_new, 4, var_std_types__event, var_READ, var_814_3_fd, var_836_7_buf, 1, LOCAL(1),
  // push &events new(std_types::event READ fd buf)
  var_push, 2, var_740_1_events, LOCAL(1), 1, var_740_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(842, 32),
  POS(842, 19),
  POS(843, 19)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  // attempt_close_operations! &self
  func_attempt_close_operations, 1, var_704_0_self, IO_CALL(1), var_704_0_self,
  // attempt_exit! self
  func_attempt_exit, 1, var_704_0_self, IO_CALL(0),
  // -> self events
  LET, 2, var_704_0_self, var_740_1_events, TAIL_CALL,
  POS(845, 11),
  POS(847, 11),
  POS(849, 11)
};

static TAB_NUM t_func_attempt_close_operations[] = {
  1, // locals
  1, // parameters
  var_851_28_io,
  // close_jobs_of(io)
  var_close_jobs_of, 1, var_851_28_io, 1, LOCAL(1),
  // for_each close_jobs_of(io)
  var_for_each, 3, LOCAL(1), lambda_39, lambda_40, IO_TAIL_CALL,
  POS(852, 12),
  POS(852, 3)
};

static TAB_NUM t_lambda_39[] = {
  3, // locals
  1, // parameters
  var_853_3_fd,
  // write_jobs_of(io)(fd).is_undefined:
  var_write_jobs_of, 1, var_851_28_io, 1, LOCAL(1),
  // write_jobs_of(io)(fd).is_undefined:
  LOCAL(1), 1, var_853_3_fd, 1, LOCAL(2),
  // is_undefined:
  var_is_undefined, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_write_jobs_ofiofd_is_undefined, var_next, IO_TAIL_CALL,
  POS(855, 9),
  POS(855, 9),
  POS(855, 31),
  POS(854, 7)
};

static TAB_NUM t_lambda_write_jobs_ofiofd_is_undefined[] = {
  2, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_853_3_fd, IO_CALL(0),
  // close_jobs_of(fd) false
  var_close_jobs_of, 1, var_851_28_io, 1, LOCAL(2),
  // close_jobs_of(fd) false
  LOCAL(2), 2, var_853_3_fd, var_false, 1, LOCAL(2),
  // io.close_jobs_of(fd) false
  LET, -1, var_851_28_io, var_close_jobs_of, LOCAL(2), var_851_28_io,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(856, 11),
  POS(857, 15),
  POS(857, 15),
  POS(857, 12),
  POS(858, 11)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_851_28_io, TAIL_CALL,
  POS(860, 7)
};

static TAB_NUM t_func_attempt_exit[] = {
  3, // locals
  1, // parameters
  var_862_16_io,
  // exit_code_of(io).is_defined && io.is_empty:
  var_exit_code_of, 1, var_862_16_io, 1, LOCAL(1),
  // is_defined && io.is_empty:
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // is_defined && io.is_empty:
  var_std__and, 2, LOCAL(2), lambda_41, 1, LOCAL(3),
  // on exit_code_of(io).is_defined && io.is_empty:
  var_on, 2, LOCAL(3), lambda_42, IO_TAIL_CALL,
  POS(863, 6),
  POS(863, 23),
  POS(863, 23),
  POS(863, 3)
};

static TAB_NUM t_lambda_41[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_862_16_io, 1, LOCAL(1),
  // io.is_empty:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(863, 40),
  POS(863, 37)
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // exit_code_of(io)
  var_exit_code_of, 1, var_862_16_io, 1, LOCAL(1),
  // exit! exit_code_of(io)
  var_exit, 1, LOCAL(1), IO_TAIL_CALL,
  POS(864, 11),
  POS(864, 5)
};

static int tuple_435_0_arguments[] = {
  -var_undefined, -var_undefined, -var_undefined
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_UNIQUE, 0, {.str_8 = "std::READ"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::READ_ERROR"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::CONNECT"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::WRITE_PENDING"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::WRITE_COMPLETED"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::WRITE_ERROR"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::PROCESS_JOINED"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::SIGNAL"}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_TUPLE, 3, {.arguments = tuple_435_0_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___start_reading_from}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___stop_reading_from}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___enable_logging}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___disable_logging}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___log}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_STRING_8, 1, {.str_8 = "["}},
  {FLT_STRING_8, 2, {.str_8 = "] "}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___exit}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___get_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_exit_codes_ofself}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_wait_for_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_CHILD_CHANGED_STATE}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_watched_pids_ofselfpid}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_WINDOW_CHANGED_SIZE}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_self_do_catch_signals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_write_requests}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_STRING_8, 4, {.str_8 = "\033[8;"}},
  {FLT_STRING_8, 1, {.str_8 = ";"}},
  {FLT_STRING_8, 1, {.str_8 = "t"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_file_descriptors}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_bytes_written_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_attempt_reads}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_does_listen}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_conn_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_do_read}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x100000}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_buf_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_attempt_close_operations}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_write_jobs_ofiofd_is_undefined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_attempt_exit}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}}
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
  {-var_random_seed_of, -var_undefined},
  {-var_step_no_of, -num_0},
  {var_start_reading_from, -func_std_types__io___start_reading_from},
  {var_stop_reading_from, -func_std_types__io___stop_reading_from},
  {var_write, -func_std_types__io___write},
  {var_cancel_write, -func_std_types__io___cancel_write},
  {var_close, -func_std_types__io___close},
  {var_join_process, -func_std_types__io___join_process},
  {var_start_injecting_window_change_events, -func_std_types__io___start_injecting_window_change_events},
  {var_stop_injecting_window_change_events, -func_std_types__io___stop_injecting_window_change_events},
  {var_start_catching_signals, -func_std_types__io___start_catching_signals},
  {var_stop_catching_signals, -func_std_types__io___stop_catching_signals},
  {var_enable_logging, -func_std_types__io___enable_logging},
  {var_disable_logging, -func_std_types__io___disable_logging},
  {var_log, -func_std_types__io___log},
  {var_exit, -func_std_types__io___exit},
  {var_is_empty, -func_std_types__io___is_empty},
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
    FOT_DERIVED, 0, 28,
    "io\000std_types", std_types__io__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "object\000std_types", NULL,
    {.position = POS(415, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(421, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_set\000", NULL,
    {.position = POS(422, 39)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(423, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(427, 47)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(430, 29)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "random_seed_of\000", NULL,
    {.position = POS(431, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "step_no_of\000", NULL,
    {.position = POS(432, 16)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "event\000std_types", NULL,
    {.const_idx = -tuple_435_0}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(435, 19)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_reading_from\000", NULL,
    {.position = POS(441, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "449_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "450_0_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(456, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(457, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(452, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_reading_from\000", NULL,
    {.position = POS(460, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "468_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "469_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "475_1_new_read_descriptor_list\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "477_3_read_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(479, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(480, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(476, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "write\000", NULL,
    {.position = POS(489, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "499_0_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "501_1_job\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(504, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(505, 10)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "cancel_write\000", NULL,
    {.position = POS(510, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "close\000", NULL,
    {.position = POS(525, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "join_process\000", NULL,
    {.position = POS(544, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_injecting_window_change_events\000", NULL,
    {.position = POS(558, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_injecting_window_change_events\000", NULL,
    {.position = POS(570, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_catching_signals\000", NULL,
    {.position = POS(582, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_catching_signals\000", NULL,
    {.position = POS(594, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "enable_logging\000", NULL,
    {.position = POS(606, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "disable_logging\000", NULL,
    {.position = POS(619, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "log\000", NULL,
    {.position = POS(631, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "639_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "640_0_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "641_0_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(644, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(644, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(645, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if_not\000", NULL,
    {.position = POS(645, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split_into_lines\000", NULL,
    {.position = POS(646, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "647_1_prefix\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(647, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "648_1_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(649, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(652, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spaces\000", NULL,
    {.position = POS(652, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(655, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDERR_FILENO\000", NULL,
    {.position = POS(655, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "exit\000", NULL,
    {.position = POS(658, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(675, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "683_0_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(686, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "get_events\000", NULL,
    {.position = POS(692, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "704_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "705_0_timeout\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(711, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "718_1_want_to_write\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(722, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(719, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "736_1_can_read\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "737_1_can_write\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pselect\000", NULL,
    {.position = POS(734, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "740_1_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "741_1_injected_into_stdin\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "742_1_write_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "744_3_signal\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGUSR1\000", NULL,
    {.position = POS(760, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGUSR2\000", NULL,
    {.position = POS(760, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(760, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CHILD_CHANGED_STATE\000", NULL,
    {.position = POS(746, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "747_7_pid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "747_12_status\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "wait\000", NULL,
    {.position = POS(747, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exitstatus\000", NULL,
    {.position = POS(748, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PROCESS_JOINED\000", NULL,
    {.position = POS(752, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(752, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WINDOW_CHANGED_SIZE\000", NULL,
    {.position = POS(757, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGNAL\000", NULL,
    {.position = POS(763, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(745, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDIN_FILENO\000", NULL,
    {.position = POS(773, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_terminal_size\000", NULL,
    {.position = POS(775, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ\000", NULL,
    {.position = POS(778, 45)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "786_3_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "787_1_job\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "788_8_bytes_written\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(790, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_ERROR\000", NULL,
    {.position = POS(794, 36)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(801, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_PENDING\000", NULL,
    {.position = POS(803, 53)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_COMPLETED\000", NULL,
    {.position = POS(808, 42)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "814_3_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(815, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(815, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "fstat\000", NULL,
    {.position = POS(816, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "type_of\000", NULL,
    {.position = POS(818, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SOCKET\000", NULL,
    {.position = POS(818, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_listening\000", NULL,
    {.position = POS(819, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "822_9_conn\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "accept\000", NULL,
    {.position = POS(822, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ_ERROR\000", NULL,
    {.position = POS(826, 48)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CONNECT\000", NULL,
    {.position = POS(830, 48)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "836_7_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read\000", NULL,
    {.position = POS(836, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(815, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "851_28_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "853_3_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(855, 31)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "862_16_io\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(863, 3)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__io_events = {
  "_basic__io_events", // module name
  "basic/io_events.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  95, // number of constants
  151, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
