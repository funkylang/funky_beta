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
  tuple_462_0 = -11,
  func_std_types__io___start_reading_from = -12,
  lambda_1 = -13,
  lambda_2 = -14,
  func_std_types__io___stop_reading_from = -15,
  lambda_3 = -16,
  lambda_4 = -17,
  lambda_5 = -18,
  lambda_6 = -19,
  lambda_7 = -20,
  func_std_types__io___write = -21,
  lambda_8 = -22,
  lambda_9 = -23,
  func_std_types__io___cancel_write = -24,
  func_std_types__io___close = -25,
  func_std_types__io___join_process = -26,
  func_std_types__io___start_injecting_window_change_events = -27,
  func_std_types__io___stop_injecting_window_change_events = -28,
  func_std_types__io___start_catching_signals = -29,
  func_std_types__io___stop_catching_signals = -30,
  func_std_types__io___set_timeout = -31,
  lambda_10 = -32,
  lambda_11 = -33,
  lambda_12 = -34,
  lambda_13 = -35,
  func_std_types__io___enable_logging = -36,
  num_1 = -37,
  func_std_types__io___disable_logging = -38,
  func_std_types__io___log = -39,
  lambda_14 = -40,
  lambda_15 = -41,
  chr_10 = -42,
  lambda_16 = -43,
  string_1 = -44,
  string_2 = -45,
  num_2 = -46,
  minus_num_1 = -47,
  lambda_17 = -48,
  lambda_18 = -49,
  lambda_19 = -50,
  func_std_types__io___exit = -51,
  func_std_types__io___is_empty = -52,
  lambda_20 = -53,
  lambda_21 = -54,
  lambda_22 = -55,
  func_std_types__io___get_events = -56,
  lambda_timeout_is_defined = -57,
  lambda_23 = -58,
  lambda_exit_codes_ofself = -59,
  lambda_24 = -60,
  func_handle_write_jobs = -61,
  lambda_25 = -62,
  func_wait_for_events = -63,
  lambda_26 = -64,
  lambda_CHILD_CHANGED_STATE = -65,
  lambda_watched_pids_ofselfpid = -66,
  lambda_27 = -67,
  lambda_WINDOW_CHANGED_SIZE = -68,
  lambda_28 = -69,
  lambda_self_do_catch_signals = -70,
  func_handle_write_requests = -71,
  lambda_29 = -72,
  lambda_30 = -73,
  lambda_31 = -74,
  string_3 = -75,
  string_4 = -76,
  str_t = -77,
  lambda_32 = -78,
  func_check_file_descriptors = -79,
  lambda_33 = -80,
  lambda_bytes_written_is_an_error = -81,
  lambda_34 = -82,
  lambda_35 = -83,
  lambda_36 = -84,
  func_attempt_reads = -85,
  lambda_37 = -86,
  lambda_38 = -87,
  lambda_39 = -88,
  lambda_40 = -89,
  lambda_does_listen = -90,
  lambda_conn_is_an_error = -91,
  lambda_41 = -92,
  func_do_read = -93,
  num_0x100000 = -94,
  lambda_buf_is_an_error = -95,
  lambda_42 = -96,
  lambda_buf_is_empty = -97,
  lambda_43 = -98,
  lambda_44 = -99,
  func_attempt_close_operations = -100,
  lambda_45 = -101,
  lambda_write_jobs_ofiofd_is_undefined = -102,
  lambda_46 = -103,
  func_attempt_exit = -104,
  lambda_47 = -105,
  lambda_48 = -106
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
  var_476_0_self, // dynamic
  var_477_0_fd, // dynamic
  var_true, // extern
  var_push, // extern
  var_if, // extern
  var_stop_reading_from, // extern polymorphic
  var_495_0_self, // dynamic
  var_496_0_fd, // dynamic
  var_502_1_new_read_descriptor_list, // dynamic
  var_504_3_read_fd, // dynamic
  var_std__equal, // extern
  var_next, // extern
  var_for_each, // extern
  var_write, // extern polymorphic
  var_526_0_data, // dynamic
  var_528_1_job, // dynamic
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
  var_643_0_self, // dynamic
  var_644_0_timeout, // dynamic
  var_is_a_number, // extern
  var_current_time_of, // extern polymorphic
  var_std__plus, // extern
  var_update_if, // extern
  var_647_1_current_timeout, // dynamic
  var_is_undefined, // extern
  var_std__less, // extern
  var_std__or, // extern
  var_enable_logging, // extern polymorphic
  var_disable_logging, // extern polymorphic
  var_log, // extern polymorphic
  var_686_0_self, // dynamic
  var_687_0_level, // dynamic
  var_688_0_message, // dynamic
  var_std__not, // extern
  var_is_a_string, // extern
  var_update_if_not, // extern
  var_has_suffix, // extern
  var_split_into_lines, // extern
  var_695_1_prefix, // dynamic
  var_std__string, // extern
  var_696_1_buf, // dynamic
  var_range, // extern
  var_length_of, // extern
  var_spaces, // extern
  var_to_utf8, // extern
  var_STDERR_FILENO, // extern
  var_exit, // extern polymorphic
  var_is_empty, // extern polymorphic
  var_731_0_self, // dynamic
  var_std__and, // extern
  var_get_events, // extern polymorphic
  var_750_0_self, // dynamic
  var_inc, // extern
  var_763_1_want_to_write, // dynamic
  var_765_1_timeout, // dynamic
  var_current_time, // extern
  var_std__minus, // extern
  var_max, // extern
  var_any_of, // extern
  var_793_1_can_read, // dynamic
  var_794_1_can_write, // dynamic
  var_pselect, // extern
  var_798_1_events, // dynamic
  var_799_1_injected_into_stdin, // dynamic
  var_800_1_write_jobs, // dynamic
  var_802_3_signal, // dynamic
  var_SIGUSR1, // extern
  var_SIGUSR2, // extern
  var_std__sequence, // extern
  var_CHILD_CHANGED_STATE, // extern
  var_805_7_pid, // dynamic
  var_805_12_status, // dynamic
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
  var_844_3_fd, // dynamic
  var_845_1_job, // dynamic
  var_846_8_bytes_written, // dynamic
  var_is_an_error, // extern
  var_WRITE_ERROR, // extern
  var_WRITE_PENDING, // extern
  var_WRITE_COMPLETED, // extern
  var_872_3_fd, // dynamic
  var_not, // extern
  var_fstat, // extern
  var_type_of, // extern
  var_SOCKET, // extern
  var_is_listening, // extern
  var_880_9_conn, // dynamic
  var_accept, // extern
  var_READ_ERROR, // extern
  var_CONNECT, // extern
  var_894_7_buf, // dynamic
  var_read, // extern
  var_CLOSED, // extern
  var_if_not, // extern
  var_916_28_io, // dynamic
  var_918_3_fd, // dynamic
  var_927_16_io, // dynamic
  var_on, // extern
  var__END
};


static TAB_NUM t_func_std_types__io___start_reading_from[] = {
  2, // locals
  2, // parameters
  var_476_0_self,
  var_477_0_fd,
  // read_descriptor_set_of(self)(fd)
  var_read_descriptor_set_of, 1, var_476_0_self, 1, LOCAL(1),
  // read_descriptor_set_of(self)(fd)
  LOCAL(1), 1, var_477_0_fd, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1, lambda_2, TAIL_CALL,
  POS(480, 5),
  POS(480, 5),
  POS(479, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_476_0_self, TAIL_CALL,
  POS(481, 7)
};

static TAB_NUM t_lambda_2[] = {
  2, // locals
  0, // parameters
  // read_descriptor_set_of(fd) true
  var_read_descriptor_set_of, 1, var_476_0_self, 1, LOCAL(2),
  // read_descriptor_set_of(fd) true
  LOCAL(2), 2, var_477_0_fd, var_true, 1, LOCAL(2),
  // self.read_descriptor_set_of(fd) true
  LET, -1, var_476_0_self, var_read_descriptor_set_of, LOCAL(2), var_476_0_self,
  // read_descriptor_list_of fd
  var_read_descriptor_list_of, 1, var_476_0_self, 1, LOCAL(1),
  // push &self.read_descriptor_list_of fd
  var_push, 2, LOCAL(1), var_477_0_fd, 1, LOCAL(1),
  // self.read_descriptor_list_of fd
  LET, -1, var_476_0_self, var_read_descriptor_list_of, LOCAL(1), var_476_0_self,
  // -> self
  LET, 1, var_476_0_self, TAIL_CALL,
  POS(483, 13),
  POS(483, 13),
  POS(483, 8),
  POS(484, 18),
  POS(484, 7),
  POS(484, 13),
  POS(485, 7)
};

static TAB_NUM t_func_std_types__io___stop_reading_from[] = {
  2, // locals
  2, // parameters
  var_495_0_self,
  var_496_0_fd,
  // read_descriptor_set_of(self)(fd)
  var_read_descriptor_set_of, 1, var_495_0_self, 1, LOCAL(1),
  // read_descriptor_set_of(self)(fd)
  LOCAL(1), 1, var_496_0_fd, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_3, lambda_7, TAIL_CALL,
  POS(499, 5),
  POS(499, 5),
  POS(498, 3)
};

static TAB_NUM t_lambda_3[] = {
  2, // locals
  0, // parameters
  // read_descriptor_set_of(fd) false
  var_read_descriptor_set_of, 1, var_495_0_self, 1, LOCAL(2),
  // read_descriptor_set_of(fd) false
  LOCAL(2), 2, var_496_0_fd, var_false, 1, LOCAL(2),
  // self.read_descriptor_set_of(fd) false
  LET, -1, var_495_0_self, var_read_descriptor_set_of, LOCAL(2), var_495_0_self,
  // $new_read_descriptor_list empty_list
  LET, 1, var_empty_list, 1, var_502_1_new_read_descriptor_list,
  // read_descriptor_list_of(self)
  var_read_descriptor_list_of, 1, var_495_0_self, 1, LOCAL(1),
  // for_each read_descriptor_list_of(self)
  var_for_each, 3, LOCAL(1), lambda_4, lambda_6, TAIL_CALL,
  POS(501, 13),
  POS(501, 13),
  POS(501, 8),
  POS(502, 7),
  POS(503, 16),
  POS(503, 7)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  1, // parameters
  var_504_3_read_fd,
  // fd == read_fd
  var_std__equal, 2, var_496_0_fd, var_504_3_read_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_5, TAIL_CALL,
  POS(506, 13),
  POS(505, 11)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  // push &new_read_descriptor_list read_fd
  var_push, 2, var_502_1_new_read_descriptor_list, var_504_3_read_fd, 1, var_502_1_new_read_descriptor_list,
  // next
  var_next, 0, TAIL_CALL,
  POS(509, 15),
  POS(510, 15)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // self.read_descriptor_list_of new_read_descriptor_list
  LET, -1, var_495_0_self, var_read_descriptor_list_of, var_502_1_new_read_descriptor_list, var_495_0_self,
  // -> self
  LET, 1, var_495_0_self, TAIL_CALL,
  POS(512, 12),
  POS(513, 11)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_495_0_self, TAIL_CALL,
  POS(514, 7)
};

static TAB_NUM t_func_std_types__io___write[] = {
  4, // locals
  3, // parameters
  LOCAL(3), // 524_0_self
  LOCAL(4), // 525_0_fd
  var_526_0_data,
  // write_jobs_of(self)(fd)
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(1),
  // $job write_jobs_of(self)(fd)
  LOCAL(1), 1, LOCAL(4), 1, var_528_1_job,
  // is_defined
  var_is_defined, 1, var_528_1_job, 1, LOCAL(1),
  // !job
  var_if, 3, LOCAL(1), lambda_8, lambda_9, 1, var_528_1_job,
  // write_jobs_of(fd) job
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(2),
  // write_jobs_of(fd) job
  LOCAL(2), 2, LOCAL(4), var_528_1_job, 1, LOCAL(2),
  // self.write_jobs_of(fd) job
  LET, -1, LOCAL(3), var_write_jobs_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(528, 8),
  POS(528, 3),
  POS(531, 11),
  POS(529, 3),
  POS(534, 9),
  POS(534, 9),
  POS(534, 4),
  POS(535, 3)
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // append(job data)
  var_append, 2, var_528_1_job, var_526_0_data, 1, LOCAL(1),
  //  append(job data)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(532, 10),
  POS(532, 9)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_526_0_data, TAIL_CALL,
  POS(533, 9)
};

static TAB_NUM t_func_std_types__io___cancel_write[] = {
  5, // locals
  2, // parameters
  LOCAL(3), // 545_0_self
  LOCAL(4), // 546_0_fd
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
  POS(548, 19),
  POS(548, 3),
  POS(549, 9),
  POS(549, 9),
  POS(549, 4),
  POS(550, 3)
};

static TAB_NUM t_func_std_types__io___close[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 564_0_self
  LOCAL(4), // 565_0_fd
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
  POS(567, 3),
  POS(568, 9),
  POS(568, 9),
  POS(568, 4),
  POS(569, 3)
};

static TAB_NUM t_func_std_types__io___join_process[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 579_0_self
  LOCAL(4), // 580_0_pid
  // watched_pids_of(pid) true
  var_watched_pids_of, 1, LOCAL(3), 1, LOCAL(2),
  // watched_pids_of(pid) true
  LOCAL(2), 2, LOCAL(4), var_true, 1, LOCAL(2),
  // self.watched_pids_of(pid) true
  LET, -1, LOCAL(3), var_watched_pids_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(582, 9),
  POS(582, 9),
  POS(582, 4),
  POS(583, 3)
};

static TAB_NUM t_func_std_types__io___start_injecting_window_change_events[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 593_0_self
  // .do_inject_window_change_events true)
  LET, -1, LOCAL(2), var_do_inject_window_change_events, var_true, LOCAL(1),
  // -> self(.do_inject_window_change_events true)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(595, 11),
  POS(595, 3)
};

static TAB_NUM t_func_std_types__io___stop_injecting_window_change_events[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 605_0_self
  // .do_inject_window_change_events false)
  LET, -1, LOCAL(2), var_do_inject_window_change_events, var_false, LOCAL(1),
  // -> self(.do_inject_window_change_events false)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(607, 11),
  POS(607, 3)
};

static TAB_NUM t_func_std_types__io___start_catching_signals[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 617_0_self
  // .do_catch_signals true)
  LET, -1, LOCAL(2), var_do_catch_signals, var_true, LOCAL(1),
  // -> self(.do_catch_signals true)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(619, 11),
  POS(619, 3)
};

static TAB_NUM t_func_std_types__io___stop_catching_signals[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 629_0_self
  // .do_catch_signals false)
  LET, -1, LOCAL(2), var_do_catch_signals, var_false, LOCAL(1),
  // -> self(.do_catch_signals false)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(631, 11),
  POS(631, 3)
};

static TAB_NUM t_func_std_types__io___set_timeout[] = {
  2, // locals
  2, // parameters
  var_643_0_self,
  var_644_0_timeout,
  // is_a_number &timeout -> current_time_of(self)+timeout
  var_is_a_number, 1, var_644_0_timeout, 1, LOCAL(1),
  // update_if timeout.is_a_number &timeout -> current_time_of(self)+timeout
  var_update_if, 3, LOCAL(1), var_644_0_timeout, lambda_10, 1, var_644_0_timeout,
  // $current_timeout timeout_of(self)
  var_timeout_of, 1, var_643_0_self, 1, var_647_1_current_timeout,
  // is_undefined || timeout < current_timeout
  var_is_undefined, 1, var_647_1_current_timeout, 1, LOCAL(1),
  // is_undefined || timeout < current_timeout
  var_std__or, 2, LOCAL(1), lambda_11, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_12, lambda_13, TAIL_CALL,
  POS(646, 21),
  POS(646, 3),
  POS(647, 3),
  POS(649, 21),
  POS(649, 21),
  POS(648, 3)
};

static TAB_NUM t_lambda_10[] = {
  2, // locals
  0, // parameters
  // current_time_of(self)+timeout
  var_current_time_of, 1, var_643_0_self, 1, LOCAL(1),
  // current_time_of(self)+timeout
  var_std__plus, 2, LOCAL(1), var_644_0_timeout, 1, LOCAL(2),
  //  current_time_of(self)+timeout
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(646, 45),
  POS(646, 45),
  POS(646, 44)
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // timeout < current_timeout
  var_std__less, 2, var_644_0_timeout, var_647_1_current_timeout, 1, LOCAL(1),
  // timeout < current_timeout
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(649, 37),
  POS(649, 37)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // .timeout_of timeout)
  LET, -1, var_643_0_self, var_timeout_of, var_644_0_timeout, LOCAL(1),
  //  self(.timeout_of timeout)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(650, 13),
  POS(650, 7)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_643_0_self, TAIL_CALL,
  POS(651, 7)
};

static TAB_NUM t_func_std_types__io___enable_logging[] = {
  3, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 661_0_self
  num_1, LOCAL(3), // 662_0_level
  // .log_level_of level)
  LET, -1, LOCAL(2), var_log_level_of, LOCAL(3), LOCAL(1),
  // -> self(.log_level_of level)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(664, 11),
  POS(664, 3)
};

static TAB_NUM t_func_std_types__io___disable_logging[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 674_0_self
  // .log_level_of 0)
  LET, -1, LOCAL(2), var_log_level_of, num_0, LOCAL(1),
  // -> self(.log_level_of 0)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(676, 11),
  POS(676, 3)
};

static TAB_NUM t_func_std_types__io___log[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_686_0_self,
  num_1, var_687_0_level,
  MANDATORY_PARAMETER, var_688_0_message,
  // log_level_of(self):
  var_log_level_of, 1, var_686_0_self, 1, LOCAL(1),
  // log_level_of(self):
  var_std__less, 2, LOCAL(1), var_687_0_level, 1, LOCAL(2),
  // log_level_of(self):
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_14, lambda_19, TAIL_CALL,
  POS(691, 14),
  POS(691, 14),
  POS(691, 14),
  POS(690, 3)
};

static TAB_NUM t_lambda_14[] = {
  2, // locals
  0, // parameters
  // is_a_string &message -> message()
  var_is_a_string, 1, var_688_0_message, 1, LOCAL(1),
  // update_if_not message.is_a_string &message -> message()
  var_update_if_not, 3, LOCAL(1), var_688_0_message, lambda_15, 1, var_688_0_message,
  // message .has_suffix. '@nl;' &message: push message '@nl;'
  var_has_suffix, 2, var_688_0_message, chr_10, 1, LOCAL(1),
  // update_if_not message .has_suffix. '@nl;' &message: push message '@nl;'
  var_update_if_not, 3, LOCAL(1), var_688_0_message, lambda_16, 1, var_688_0_message,
  // $lines split_into_lines(message)
  var_split_into_lines, 1, var_688_0_message, 1, LOCAL(2),
  // $prefix "[@(level)] "
  var_std__string, 3, string_1, var_687_0_level, string_2, 1, var_695_1_prefix,
  // lines(1))
  LOCAL(2), 1, num_1, 1, LOCAL(1),
  // $buf append(prefix lines(1))
  var_append, 2, var_695_1_prefix, LOCAL(1), 1, var_696_1_buf,
  // range &lines 2 -1
  var_range, 3, LOCAL(2), num_2, minus_num_1, 1, LOCAL(2),
  // for_each lines
  var_for_each, 3, LOCAL(2), lambda_17, lambda_18, TAIL_CALL,
  POS(692, 29),
  POS(692, 7),
  POS(693, 21),
  POS(693, 7),
  POS(694, 7),
  POS(695, 7),
  POS(696, 26),
  POS(696, 7),
  POS(697, 7),
  POS(698, 7)
};

static TAB_NUM t_lambda_15[] = {
  1, // locals
  0, // parameters
  // message()
  var_688_0_message, 0, 1, LOCAL(1),
  //  message()
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(692, 53),
  POS(692, 52)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  // push message '@nl;'
  var_push, 2, var_688_0_message, chr_10, TAIL_CALL,
  POS(693, 59)
};

static TAB_NUM t_lambda_17[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 699_3_line
  // length_of(prefix)) line
  var_length_of, 1, var_695_1_prefix, 1, LOCAL(1),
  // spaces(length_of(prefix)) line
  var_spaces, 1, LOCAL(1), 1, LOCAL(2),
  // append &buf spaces(length_of(prefix)) line
  var_append, 3, var_696_1_buf, LOCAL(2), LOCAL(3), 1, var_696_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(700, 30),
  POS(700, 23),
  POS(700, 11),
  POS(701, 11)
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  0, // parameters
  // to_utf8
  var_to_utf8, 1, var_696_1_buf, 1, LOCAL(1),
  // write self STDERR_FILENO buf.to_utf8
  var_write, 3, var_686_0_self, var_STDERR_FILENO, LOCAL(1), TAIL_CALL,
  POS(703, 40),
  POS(703, 11)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_686_0_self, TAIL_CALL,
  POS(704, 7)
};

static TAB_NUM t_func_std_types__io___exit[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 714_0_self
  LOCAL(3), // 715_0_exit_code
  // self
  LET, -3, LOCAL(2), var_exit_code_of, LOCAL(3), var_read_descriptor_list_of, var_empty_list, var_read_descriptor_set_of, var_empty_hash_set, LOCAL(1),
  // ->
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(718, 5),
  POS(717, 3)
};

static TAB_NUM t_func_std_types__io___is_empty[] = {
  3, // locals
  1, // parameters
  var_731_0_self,
  // read_descriptor_list_of(self).is_empty
  var_read_descriptor_list_of, 1, var_731_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_20, 1, LOCAL(3),
  // ->
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(735, 7),
  POS(735, 37),
  POS(734, 7),
  POS(733, 3)
};

static TAB_NUM t_lambda_20[] = {
  3, // locals
  0, // parameters
  // write_jobs_of(self).is_empty
  var_write_jobs_of, 1, var_731_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_21, 1, LOCAL(3),
  // write_jobs_of(self).is_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(736, 7),
  POS(736, 27),
  POS(734, 7),
  POS(736, 7)
};

static TAB_NUM t_lambda_21[] = {
  3, // locals
  0, // parameters
  // close_jobs_of(self).is_empty
  var_close_jobs_of, 1, var_731_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_22, 1, LOCAL(3),
  // close_jobs_of(self).is_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(737, 7),
  POS(737, 27),
  POS(734, 7),
  POS(737, 7)
};

static TAB_NUM t_lambda_22[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(self).is_empty
  var_watched_pids_of, 1, var_731_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // watched_pids_of(self).is_empty
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(738, 7),
  POS(738, 29),
  POS(738, 7)
};

static TAB_NUM t_func_std_types__io___get_events[] = {
  1, // locals
  1, // parameters
  var_750_0_self,
  // step_no_of
  var_step_no_of, 1, var_750_0_self, 1, LOCAL(1),
  // inc &self.step_no_of
  var_inc, 1, LOCAL(1), 1, LOCAL(1),
  // self.step_no_of
  LET, -1, var_750_0_self, var_step_no_of, LOCAL(1), var_750_0_self,
  // attempt_close_operations! &self
  func_attempt_close_operations, 1, var_750_0_self, IO_CALL(1), var_750_0_self,
  // attempt_exit! self
  func_attempt_exit, 1, var_750_0_self, IO_CALL(0),
  // $want_to_write empty_list
  LET, 1, var_empty_list, 1, var_763_1_want_to_write,
  // $timeout timeout_of(self)
  var_timeout_of, 1, var_750_0_self, 1, var_765_1_timeout,
  // is_defined:
  var_is_defined, 1, var_765_1_timeout, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_timeout_is_defined, func_handle_write_jobs, IO_TAIL_CALL,
  POS(756, 13),
  POS(756, 3),
  POS(756, 8),
  POS(758, 3),
  POS(760, 3),
  POS(763, 3),
  POS(765, 3),
  POS(767, 13),
  POS(766, 3)
};

static TAB_NUM t_lambda_timeout_is_defined[] = {
  3, // locals
  0, // parameters
  // self.timeout_of undefined
  LET, -1, var_750_0_self, var_timeout_of, var_undefined, var_750_0_self,
  // current_time! $t
  var_current_time, 0, IO_CALL(1), LOCAL(3),
  // timeout-t 0)
  var_std__minus, 2, var_765_1_timeout, LOCAL(3), 1, LOCAL(1),
  // !timeout max(timeout-t 0)
  var_max, 2, LOCAL(1), num_0, 1, var_765_1_timeout,
  // 0
  var_std__less, 2, num_0, var_765_1_timeout, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_23, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_24, func_handle_write_jobs, IO_TAIL_CALL,
  POS(768, 8),
  POS(769, 7),
  POS(770, 20),
  POS(770, 7),
  POS(773, 21),
  POS(772, 11),
  POS(771, 7)
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  0, // parameters
  // exit_codes_of(self): (pid _exit_code)
  var_exit_codes_of, 1, var_750_0_self, 1, LOCAL(1),
  // any_of
  var_any_of, 2, LOCAL(1), lambda_exit_codes_ofself, 1, LOCAL(2),
  // any_of
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(775, 13),
  POS(774, 11),
  POS(774, 11)
};

static TAB_NUM t_lambda_exit_codes_ofself[] = {
  3, // locals
  2, // parameters
  LOCAL(3), // 775_22_pid
  LOCAL(1),
  // watched_pids_of(self)(pid)
  var_watched_pids_of, 1, var_750_0_self, 1, LOCAL(1),
  // watched_pids_of(self)(pid)
  LOCAL(1), 1, LOCAL(3), 1, LOCAL(2),
  // -> watched_pids_of(self)(pid)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(776, 18),
  POS(776, 18),
  POS(776, 15)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  // !timeout 0
  LET, 1, num_0, 1, var_765_1_timeout,
  // handle_write_jobs!
  func_handle_write_jobs, 0, IO_TAIL_CALL,
  POS(778, 11),
  POS(779, 11)
};

static TAB_NUM t_func_handle_write_jobs[] = {
  1, // locals
  0, // parameters
  // write_jobs_of(self)
  var_write_jobs_of, 1, var_750_0_self, 1, LOCAL(1),
  // for_each write_jobs_of(self)
  var_for_each, 3, LOCAL(1), lambda_25, func_wait_for_events, IO_TAIL_CALL,
  POS(784, 14),
  POS(784, 5)
};

static TAB_NUM t_lambda_25[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 785_3_fd
  LOCAL(1),
  // push &want_to_write fd
  var_push, 2, var_763_1_want_to_write, LOCAL(2), 1, var_763_1_want_to_write,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(786, 9),
  POS(787, 9)
};

static TAB_NUM t_func_wait_for_events[] = {
  3, // locals
  0, // parameters
  // read_descriptor_list_of(self)
  var_read_descriptor_list_of, 1, var_750_0_self, 1, LOCAL(1),
  // pselect!
  var_pselect, 4, LOCAL(1), var_763_1_want_to_write, var_empty_list, var_765_1_timeout, IO_CALL(4), LOCAL(3), var_793_1_can_read, var_794_1_can_write, LOCAL(2),
  // current_time! !self.current_time_of
  var_current_time, 0, IO_CALL(1), LOCAL(1),
  // self.current_time_of
  LET, -1, var_750_0_self, var_current_time_of, LOCAL(1), var_750_0_self,
  // $events empty_list
  LET, 1, var_empty_list, 1, var_798_1_events,
  // $injected_into_stdin false
  LET, 1, var_false, 1, var_799_1_injected_into_stdin,
  // $write_jobs write_jobs_of(self)
  var_write_jobs_of, 1, var_750_0_self, 1, var_800_1_write_jobs,
  // for_each signals
  var_for_each, 3, LOCAL(3), lambda_26, func_handle_write_requests, IO_TAIL_CALL,
  POS(793, 19),
  POS(791, 7),
  POS(797, 7),
  POS(797, 22),
  POS(798, 7),
  POS(799, 7),
  POS(800, 7),
  POS(801, 7)
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  1, // parameters
  var_802_3_signal,
  // SIGUSR1, SIGUSR2:
  var_std__sequence, 2, var_SIGUSR1, var_SIGUSR2, 1, LOCAL(1),
  // case signal
  var_case, 7, var_802_3_signal, var_CHILD_CHANGED_STATE, lambda_CHILD_CHANGED_STATE, var_WINDOW_CHANGED_SIZE, lambda_WINDOW_CHANGED_SIZE, LOCAL(1), lambda_28, IO_TAIL_CALL,
  POS(818, 13),
  POS(803, 11)
};

static TAB_NUM t_lambda_CHILD_CHANGED_STATE[] = {
  2, // locals
  0, // parameters
  // wait! $pid $status
  var_wait, 0, IO_CALL(2), var_805_7_pid, var_805_12_status,
  // exitstatus &status
  var_exitstatus, 1, var_805_12_status, 1, var_805_12_status,
  // watched_pids_of(self)(pid):
  var_watched_pids_of, 1, var_750_0_self, 1, LOCAL(1),
  // watched_pids_of(self)(pid):
  LOCAL(1), 1, var_805_7_pid, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_watched_pids_ofselfpid, lambda_27, IO_TAIL_CALL,
  POS(805, 15),
  POS(806, 15),
  POS(808, 17),
  POS(808, 17),
  POS(807, 15)
};

static TAB_NUM t_lambda_watched_pids_ofselfpid[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(pid) false
  var_watched_pids_of, 1, var_750_0_self, 1, LOCAL(2),
  // watched_pids_of(pid) false
  LOCAL(2), 2, var_805_7_pid, var_false, 1, LOCAL(2),
  // self.watched_pids_of(pid) false
  LET, -1, var_750_0_self, var_watched_pids_of, LOCAL(2), var_750_0_self,
  // new(std_types::event PROCESS_JOINED pid status)
  var_new, 4, var_std_types__event, var_PROCESS_JOINED, var_805_7_pid, var_805_12_status, 1, LOCAL(1),
  // push &events new(std_types::event PROCESS_JOINED pid status)
  var_push, 2, var_798_1_events, LOCAL(1), 1, var_798_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(809, 25),
  POS(809, 25),
  POS(809, 20),
  POS(810, 32),
  POS(810, 19),
  POS(811, 19)
};

static TAB_NUM t_lambda_27[] = {
  2, // locals
  0, // parameters
  // exit_codes_of(pid) status
  var_exit_codes_of, 1, var_750_0_self, 1, LOCAL(2),
  // exit_codes_of(pid) status
  LOCAL(2), 2, var_805_7_pid, var_805_12_status, 1, LOCAL(2),
  // self.exit_codes_of(pid) status
  LET, -1, var_750_0_self, var_exit_codes_of, LOCAL(2), var_750_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(813, 25),
  POS(813, 25),
  POS(813, 20),
  POS(814, 19)
};

static TAB_NUM t_lambda_WINDOW_CHANGED_SIZE[] = {
  0, // locals
  0, // parameters
  // self.window_change_event_occurred true
  LET, -1, var_750_0_self, var_window_change_event_occurred, var_true, var_750_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(816, 16),
  POS(817, 15)
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // do_catch_signals:
  var_do_catch_signals, 1, var_750_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_self_do_catch_signals, var_next, IO_TAIL_CALL,
  POS(820, 22),
  POS(819, 15)
};

static TAB_NUM t_lambda_self_do_catch_signals[] = {
  1, // locals
  0, // parameters
  // new(std_types::event SIGNAL undefined signal)
  var_new, 4, var_std_types__event, var_SIGNAL, var_undefined, var_802_3_signal, 1, LOCAL(1),
  // push &events new(std_types::event SIGNAL undefined signal)
  var_push, 2, var_798_1_events, LOCAL(1), 1, var_798_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(821, 32),
  POS(821, 19),
  POS(822, 19)
};

static TAB_NUM t_func_handle_write_requests[] = {
  2, // locals
  0, // parameters
  // window_change_event_occurred
  var_window_change_event_occurred, 1, var_750_0_self, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_29, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_31, lambda_32, IO_TAIL_CALL,
  POS(829, 18),
  POS(828, 13),
  POS(827, 9)
};

static TAB_NUM t_lambda_29[] = {
  2, // locals
  0, // parameters
  // do_inject_window_change_events
  var_do_inject_window_change_events, 1, var_750_0_self, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_30, 1, LOCAL(2),
  // self.do_inject_window_change_events
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(830, 18),
  POS(828, 13),
  POS(830, 13)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // read_descriptor_set_of(self)(STDIN_FILENO)
  var_read_descriptor_set_of, 1, var_750_0_self, 1, LOCAL(1),
  // read_descriptor_set_of(self)(STDIN_FILENO)
  LOCAL(1), 1, var_STDIN_FILENO, 1, LOCAL(2),
  // read_descriptor_set_of(self)(STDIN_FILENO)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(831, 13),
  POS(831, 13),
  POS(831, 13)
};

static TAB_NUM t_lambda_31[] = {
  4, // locals
  0, // parameters
  // get_terminal_size! STDIN_FILENO $width $height
  var_get_terminal_size, 1, var_STDIN_FILENO, IO_CALL(2), LOCAL(2), LOCAL(3),
  // self.window_change_event_occurred false
  LET, -1, var_750_0_self, var_window_change_event_occurred, var_false, var_750_0_self,
  // $buf "@esc;[8;@(height);@(width)t"
  var_std__string, 5, string_3, LOCAL(3), string_4, LOCAL(2), str_t, 1, LOCAL(4),
  // new(std_types::event READ STDIN_FILENO buf)
  var_new, 4, var_std_types__event, var_READ, var_STDIN_FILENO, LOCAL(4), 1, LOCAL(1),
  // push &events new(std_types::event READ STDIN_FILENO buf)
  var_push, 2, var_798_1_events, LOCAL(1), 1, var_798_1_events,
  // !injected_into_stdin true
  LET, 1, var_true, 1, var_799_1_injected_into_stdin,
  // check_file_descriptors!
  func_check_file_descriptors, 0, IO_TAIL_CALL,
  POS(833, 13),
  POS(834, 14),
  POS(835, 13),
  POS(836, 26),
  POS(836, 13),
  POS(837, 13),
  POS(838, 13)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  // check_file_descriptors!
  func_check_file_descriptors, 0, IO_TAIL_CALL,
  POS(840, 13)
};

static TAB_NUM t_func_check_file_descriptors[] = {
  0, // locals
  0, // parameters
  // for_each can_write
  var_for_each, 3, var_794_1_can_write, lambda_33, func_attempt_reads, IO_TAIL_CALL,
  POS(843, 9)
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  1, // parameters
  var_844_3_fd,
  // $job write_jobs(fd)
  var_800_1_write_jobs, 1, var_844_3_fd, 1, var_845_1_job,
  // write! $bytes_written fd job
  var_write, 2, var_844_3_fd, var_845_1_job, IO_CALL(1), var_846_8_bytes_written,
  // is_an_error:
  var_is_an_error, 1, var_846_8_bytes_written, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_bytes_written_is_an_error, lambda_34, IO_TAIL_CALL,
  POS(845, 13),
  POS(846, 13),
  POS(848, 29),
  POS(847, 13)
};

static TAB_NUM t_lambda_bytes_written_is_an_error[] = {
  2, // locals
  0, // parameters
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, var_750_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, var_844_3_fd, var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, var_750_0_self, var_write_jobs_of, LOCAL(2), var_750_0_self,
  // tuple(bytes_written job)
  var_tuple, 2, var_846_8_bytes_written, var_845_1_job, 1, LOCAL(1),
  // new
  var_new, 4, var_std_types__event, var_WRITE_ERROR, var_844_3_fd, LOCAL(1), 1, LOCAL(2),
  // push &events
  var_push, 2, var_798_1_events, LOCAL(2), 1, var_798_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(849, 23),
  POS(849, 23),
  POS(849, 18),
  POS(854, 21),
  POS(851, 19),
  POS(850, 17),
  POS(855, 17)
};

static TAB_NUM t_lambda_34[] = {
  2, // locals
  0, // parameters
  // length_of(job):
  var_length_of, 1, var_845_1_job, 1, LOCAL(1),
  // bytes_written < length_of(job):
  var_std__less, 2, var_846_8_bytes_written, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_35, lambda_36, IO_TAIL_CALL,
  POS(858, 35),
  POS(858, 19),
  POS(857, 17)
};

static TAB_NUM t_lambda_35[] = {
  2, // locals
  0, // parameters
  // bytes_written+1 -1
  var_std__plus, 2, var_846_8_bytes_written, num_1, 1, LOCAL(1),
  // range &job bytes_written+1 -1
  var_range, 3, var_845_1_job, LOCAL(1), minus_num_1, 1, var_845_1_job,
  // write_jobs_of(fd) job # remaining text to write
  var_write_jobs_of, 1, var_750_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) job # remaining text to write
  LOCAL(2), 2, var_844_3_fd, var_845_1_job, 1, LOCAL(2),
  // self.write_jobs_of(fd) job # remaining text to write
  LET, -1, var_750_0_self, var_write_jobs_of, LOCAL(2), var_750_0_self,
  // new(std_types::event WRITE_PENDING fd job)
  var_new, 4, var_std_types__event, var_WRITE_PENDING, var_844_3_fd, var_845_1_job, 1, LOCAL(1),
  // push &events new(std_types::event WRITE_PENDING fd job)
  var_push, 2, var_798_1_events, LOCAL(1), 1, var_798_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(859, 32),
  POS(859, 21),
  POS(860, 27),
  POS(860, 27),
  POS(860, 22),
  POS(861, 34),
  POS(861, 21),
  POS(862, 21)
};

static TAB_NUM t_lambda_36[] = {
  2, // locals
  0, // parameters
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, var_750_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, var_844_3_fd, var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, var_750_0_self, var_write_jobs_of, LOCAL(2), var_750_0_self,
  // new(std_types::event WRITE_COMPLETED fd undefined)
  var_new, 4, var_std_types__event, var_WRITE_COMPLETED, var_844_3_fd, var_undefined, 1, LOCAL(1),
  // push &events
  var_push, 2, var_798_1_events, LOCAL(1), 1, var_798_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(864, 27),
  POS(864, 27),
  POS(864, 22),
  POS(866, 23),
  POS(865, 21),
  POS(867, 21)
};

static TAB_NUM t_func_attempt_reads[] = {
  0, // locals
  0, // parameters
  // for_each can_read
  var_for_each, 3, var_793_1_can_read, lambda_37, lambda_44, IO_TAIL_CALL,
  POS(871, 9)
};

static TAB_NUM t_lambda_37[] = {
  3, // locals
  1, // parameters
  var_872_3_fd,
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__equal, 2, var_872_3_fd, var_STDIN_FILENO, 1, LOCAL(1),
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__or, 2, LOCAL(2), lambda_38, 1, LOCAL(3),
  // if_not fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_if_not, 3, LOCAL(3), var_next, lambda_39, IO_TAIL_CALL,
  POS(873, 20),
  POS(873, 20),
  POS(873, 20),
  POS(873, 13)
};

static TAB_NUM t_lambda_38[] = {
  1, // locals
  0, // parameters
  // not(injected_into_stdin) next:
  var_not, 1, var_799_1_injected_into_stdin, 1, LOCAL(1),
  // not(injected_into_stdin) next:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(873, 42),
  POS(873, 42)
};

static TAB_NUM t_lambda_39[] = {
  3, // locals
  0, // parameters
  // fstat! fd $info
  var_fstat, 1, var_872_3_fd, IO_CALL(1), LOCAL(3),
  // type_of(info) == SOCKET:
  var_type_of, 1, LOCAL(3), 1, LOCAL(1),
  // type_of(info) == SOCKET:
  var_std__equal, 2, LOCAL(1), var_SOCKET, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_40, func_do_read, IO_TAIL_CALL,
  POS(874, 15),
  POS(876, 17),
  POS(876, 17),
  POS(875, 15)
};

static TAB_NUM t_lambda_40[] = {
  1, // locals
  0, // parameters
  // is_listening! $does_listen fd
  var_is_listening, 1, var_872_3_fd, IO_CALL(1), LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_does_listen, func_do_read, IO_TAIL_CALL,
  POS(877, 19),
  POS(878, 19)
};

static TAB_NUM t_lambda_does_listen[] = {
  1, // locals
  0, // parameters
  // accept! $conn fd
  var_accept, 1, var_872_3_fd, IO_CALL(1), var_880_9_conn,
  // is_an_error:
  var_is_an_error, 1, var_880_9_conn, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_conn_is_an_error, lambda_41, IO_TAIL_CALL,
  POS(880, 23),
  POS(882, 30),
  POS(881, 23)
};

static TAB_NUM t_lambda_conn_is_an_error[] = {
  1, // locals
  0, // parameters
  // new(std_types::event READ_ERROR fd conn)
  var_new, 4, var_std_types__event, var_READ_ERROR, var_872_3_fd, var_880_9_conn, 1, LOCAL(1),
  // push &events
  var_push, 2, var_798_1_events, LOCAL(1), 1, var_798_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(884, 29),
  POS(883, 27),
  POS(885, 27)
};

static TAB_NUM t_lambda_41[] = {
  1, // locals
  0, // parameters
  // new(std_types::event CONNECT fd conn)
  var_new, 4, var_std_types__event, var_CONNECT, var_872_3_fd, var_880_9_conn, 1, LOCAL(1),
  // push &events
  var_push, 2, var_798_1_events, LOCAL(1), 1, var_798_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(888, 29),
  POS(887, 27),
  POS(889, 27)
};

static TAB_NUM t_func_do_read[] = {
  1, // locals
  0, // parameters
  // read! $buf fd 0x10'0000
  var_read, 2, var_872_3_fd, num_0x100000, IO_CALL(1), var_894_7_buf,
  // is_an_error:
  var_is_an_error, 1, var_894_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_an_error, lambda_42, IO_TAIL_CALL,
  POS(894, 17),
  POS(896, 23),
  POS(895, 17)
};

static TAB_NUM t_lambda_buf_is_an_error[] = {
  1, // locals
  0, // parameters
  // new(std_types::event READ_ERROR fd buf)
  var_new, 4, var_std_types__event, var_READ_ERROR, var_872_3_fd, var_894_7_buf, 1, LOCAL(1),
  // push &events new(std_types::event READ_ERROR fd buf)
  var_push, 2, var_798_1_events, LOCAL(1), 1, var_798_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(897, 34),
  POS(897, 21),
  POS(898, 21)
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_894_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_empty, lambda_43, IO_TAIL_CALL,
  POS(901, 27),
  POS(900, 21)
};

static TAB_NUM t_lambda_buf_is_empty[] = {
  1, // locals
  0, // parameters
  // stop_reading_from &self fd
  var_stop_reading_from, 2, var_750_0_self, var_872_3_fd, 1, var_750_0_self,
  // close &self fd
  var_close, 2, var_750_0_self, var_872_3_fd, 1, var_750_0_self,
  // new(std_types::event CLOSED fd undefined)
  var_new, 4, var_std_types__event, var_CLOSED, var_872_3_fd, var_undefined, 1, LOCAL(1),
  // push &events new(std_types::event CLOSED fd undefined)
  var_push, 2, var_798_1_events, LOCAL(1), 1, var_798_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(902, 25),
  POS(903, 25),
  POS(904, 38),
  POS(904, 25),
  POS(905, 25)
};

static TAB_NUM t_lambda_43[] = {
  1, // locals
  0, // parameters
  // new(std_types::event READ fd buf)
  var_new, 4, var_std_types__event, var_READ, var_872_3_fd, var_894_7_buf, 1, LOCAL(1),
  // push &events new(std_types::event READ fd buf)
  var_push, 2, var_798_1_events, LOCAL(1), 1, var_798_1_events,
  // next
  var_next, 0, TAIL_CALL,
  POS(907, 38),
  POS(907, 25),
  POS(908, 25)
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  // attempt_close_operations! &self
  func_attempt_close_operations, 1, var_750_0_self, IO_CALL(1), var_750_0_self,
  // attempt_exit! self
  func_attempt_exit, 1, var_750_0_self, IO_CALL(0),
  // -> self events
  LET, 2, var_750_0_self, var_798_1_events, TAIL_CALL,
  POS(910, 13),
  POS(912, 13),
  POS(914, 13)
};

static TAB_NUM t_func_attempt_close_operations[] = {
  1, // locals
  1, // parameters
  var_916_28_io,
  // close_jobs_of(io)
  var_close_jobs_of, 1, var_916_28_io, 1, LOCAL(1),
  // for_each close_jobs_of(io)
  var_for_each, 3, LOCAL(1), lambda_45, lambda_46, IO_TAIL_CALL,
  POS(917, 12),
  POS(917, 3)
};

static TAB_NUM t_lambda_45[] = {
  3, // locals
  1, // parameters
  var_918_3_fd,
  // write_jobs_of(io)(fd).is_undefined:
  var_write_jobs_of, 1, var_916_28_io, 1, LOCAL(1),
  // write_jobs_of(io)(fd).is_undefined:
  LOCAL(1), 1, var_918_3_fd, 1, LOCAL(2),
  // is_undefined:
  var_is_undefined, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_write_jobs_ofiofd_is_undefined, var_next, IO_TAIL_CALL,
  POS(920, 9),
  POS(920, 9),
  POS(920, 31),
  POS(919, 7)
};

static TAB_NUM t_lambda_write_jobs_ofiofd_is_undefined[] = {
  2, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_918_3_fd, IO_CALL(0),
  // close_jobs_of(fd) false
  var_close_jobs_of, 1, var_916_28_io, 1, LOCAL(2),
  // close_jobs_of(fd) false
  LOCAL(2), 2, var_918_3_fd, var_false, 1, LOCAL(2),
  // io.close_jobs_of(fd) false
  LET, -1, var_916_28_io, var_close_jobs_of, LOCAL(2), var_916_28_io,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(921, 11),
  POS(922, 15),
  POS(922, 15),
  POS(922, 12),
  POS(923, 11)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_916_28_io, TAIL_CALL,
  POS(925, 7)
};

static TAB_NUM t_func_attempt_exit[] = {
  3, // locals
  1, // parameters
  var_927_16_io,
  // exit_code_of(io).is_defined && io.is_empty:
  var_exit_code_of, 1, var_927_16_io, 1, LOCAL(1),
  // is_defined && io.is_empty:
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // is_defined && io.is_empty:
  var_std__and, 2, LOCAL(2), lambda_47, 1, LOCAL(3),
  // on exit_code_of(io).is_defined && io.is_empty:
  var_on, 2, LOCAL(3), lambda_48, IO_TAIL_CALL,
  POS(928, 6),
  POS(928, 23),
  POS(928, 23),
  POS(928, 3)
};

static TAB_NUM t_lambda_47[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_927_16_io, 1, LOCAL(1),
  // io.is_empty:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(928, 40),
  POS(928, 37)
};

static TAB_NUM t_lambda_48[] = {
  1, // locals
  0, // parameters
  // exit_code_of(io)
  var_exit_code_of, 1, var_927_16_io, 1, LOCAL(1),
  // exit! exit_code_of(io)
  var_exit, 1, LOCAL(1), IO_TAIL_CALL,
  POS(929, 11),
  POS(929, 5)
};

static int tuple_462_0_arguments[] = {
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
  {FLT_TUPLE, 3, {.arguments = tuple_462_0_arguments}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___get_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_timeout_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_exit_codes_ofself}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_write_jobs}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_wait_for_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_CHILD_CHANGED_STATE}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_watched_pids_ofselfpid}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_WINDOW_CHANGED_SIZE}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_self_do_catch_signals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_write_requests}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_STRING_8, 4, {.str_8 = "\033[8;"}},
  {FLT_STRING_8, 1, {.str_8 = ";"}},
  {FLT_STRING_8, 1, {.str_8 = "t"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_file_descriptors}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_bytes_written_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_attempt_reads}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_does_listen}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_conn_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_do_read}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x100000}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_buf_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_buf_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_attempt_close_operations}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_write_jobs_ofiofd_is_undefined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_attempt_exit}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}}
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
    FOT_DERIVED, 0, 30,
    "io\000std_types", std_types__io__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "object\000std_types", NULL,
    {.position = POS(442, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(448, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_set\000", NULL,
    {.position = POS(449, 39)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(450, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(454, 47)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(457, 29)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "random_seed_of\000", NULL,
    {.position = POS(459, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "step_no_of\000", NULL,
    {.position = POS(460, 16)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "event\000std_types", NULL,
    {.const_idx = -tuple_462_0}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(462, 19)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_reading_from\000", NULL,
    {.position = POS(468, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "476_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "477_0_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(483, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(484, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(479, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_reading_from\000", NULL,
    {.position = POS(487, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "495_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "496_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "502_1_new_read_descriptor_list\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "504_3_read_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(506, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(507, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(503, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "write\000", NULL,
    {.position = POS(516, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "526_0_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "528_1_job\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(531, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(532, 10)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "cancel_write\000", NULL,
    {.position = POS(537, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "close\000", NULL,
    {.position = POS(552, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "join_process\000", NULL,
    {.position = POS(571, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_injecting_window_change_events\000", NULL,
    {.position = POS(585, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_injecting_window_change_events\000", NULL,
    {.position = POS(597, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_catching_signals\000", NULL,
    {.position = POS(609, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_catching_signals\000", NULL,
    {.position = POS(621, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "set_timeout\000", NULL,
    {.position = POS(633, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "643_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "644_0_timeout\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_number\000", NULL,
    {.position = POS(646, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "current_time_of\000", NULL,
    {.position = POS(646, 45)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(646, 45)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(646, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "647_1_current_timeout\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(649, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(649, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(649, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "enable_logging\000", NULL,
    {.position = POS(653, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "disable_logging\000", NULL,
    {.position = POS(666, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "log\000", NULL,
    {.position = POS(678, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "686_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "687_0_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "688_0_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(691, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(692, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if_not\000", NULL,
    {.position = POS(692, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(693, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split_into_lines\000", NULL,
    {.position = POS(694, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "695_1_prefix\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(695, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "696_1_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(697, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(700, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spaces\000", NULL,
    {.position = POS(700, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(703, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDERR_FILENO\000", NULL,
    {.position = POS(703, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "exit\000", NULL,
    {.position = POS(706, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(723, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "731_0_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(734, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "get_events\000", NULL,
    {.position = POS(740, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "750_0_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(756, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "763_1_want_to_write\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "765_1_timeout\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_time\000", NULL,
    {.position = POS(769, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(770, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(770, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(774, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "793_1_can_read\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "794_1_can_write\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pselect\000", NULL,
    {.position = POS(791, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "798_1_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "799_1_injected_into_stdin\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "800_1_write_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "802_3_signal\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGUSR1\000", NULL,
    {.position = POS(818, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGUSR2\000", NULL,
    {.position = POS(818, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(818, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CHILD_CHANGED_STATE\000", NULL,
    {.position = POS(804, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "805_7_pid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "805_12_status\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "wait\000", NULL,
    {.position = POS(805, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exitstatus\000", NULL,
    {.position = POS(806, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PROCESS_JOINED\000", NULL,
    {.position = POS(810, 53)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(810, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WINDOW_CHANGED_SIZE\000", NULL,
    {.position = POS(815, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGNAL\000", NULL,
    {.position = POS(821, 53)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(803, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDIN_FILENO\000", NULL,
    {.position = POS(831, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_terminal_size\000", NULL,
    {.position = POS(833, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ\000", NULL,
    {.position = POS(836, 47)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "844_3_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "845_1_job\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "846_8_bytes_written\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(848, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_ERROR\000", NULL,
    {.position = POS(852, 38)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_PENDING\000", NULL,
    {.position = POS(861, 55)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_COMPLETED\000", NULL,
    {.position = POS(866, 44)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "872_3_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(873, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "fstat\000", NULL,
    {.position = POS(874, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "type_of\000", NULL,
    {.position = POS(876, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SOCKET\000", NULL,
    {.position = POS(876, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_listening\000", NULL,
    {.position = POS(877, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "880_9_conn\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "accept\000", NULL,
    {.position = POS(880, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ_ERROR\000", NULL,
    {.position = POS(884, 50)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CONNECT\000", NULL,
    {.position = POS(888, 50)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "894_7_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read\000", NULL,
    {.position = POS(894, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CLOSED\000", NULL,
    {.position = POS(904, 59)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(873, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "916_28_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "918_3_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "927_16_io\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(928, 3)}
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
  106, // number of constants
  166, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
