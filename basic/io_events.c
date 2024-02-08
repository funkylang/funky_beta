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
  tuple_416_0 = -10,
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
  string_1 = -35,
  string_2 = -36,
  chr_10 = -37,
  lambda_11 = -38,
  lambda_12 = -39,
  func_std_types__io___is_empty = -40,
  lambda_13 = -41,
  lambda_14 = -42,
  lambda_15 = -43,
  func_std_types__io___get_events = -44,
  lambda_16 = -45,
  lambda_exit_codes_ofself = -46,
  lambda_17 = -47,
  lambda_18 = -48,
  func_wait_for_events = -49,
  lambda_19 = -50,
  lambda_CHILD_CHANGED_STATE = -51,
  lambda_watched_pids_ofselfpid = -52,
  lambda_20 = -53,
  lambda_WINDOW_CHANGED_SIZE = -54,
  lambda_21 = -55,
  lambda_self_do_catch_signals = -56,
  func_handle_write_requests = -57,
  lambda_22 = -58,
  lambda_23 = -59,
  lambda_24 = -60,
  string_3 = -61,
  string_4 = -62,
  str_t = -63,
  lambda_25 = -64,
  func_check_file_descriptors = -65,
  lambda_26 = -66,
  lambda_bytes_written_is_an_error = -67,
  lambda_27 = -68,
  lambda_28 = -69,
  minus_num_1 = -70,
  lambda_29 = -71,
  func_attempt_reads = -72,
  lambda_30 = -73,
  lambda_31 = -74,
  lambda_32 = -75,
  lambda_33 = -76,
  lambda_does_listen = -77,
  lambda_conn_is_an_error = -78,
  lambda_34 = -79,
  func_do_read = -80,
  num_0x100000 = -81,
  lambda_buf_is_an_error = -82,
  lambda_35 = -83,
  lambda_36 = -84,
  func_attempt_close_operations = -85,
  lambda_37 = -86,
  lambda_write_jobs_ofiofd_is_undefined = -87,
  lambda_38 = -88
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
  var_std_types__io, // derived
  var_std_types__object, // extern
  var_empty_list, // extern
  var_empty_hash_set, // extern
  var_empty_hash_table, // extern
  var_false, // extern
  var_std_types__event, // initialized compound
  var_undefined, // extern
  var_tuple, // extern
  var_start_reading_from, // extern polymorphic
  var_430_0_self, // dynamic
  var_431_0_fd, // dynamic
  var_true, // extern
  var_push, // extern
  var_if, // extern
  var_stop_reading_from, // extern polymorphic
  var_449_0_self, // dynamic
  var_450_0_fd, // dynamic
  var_456_1_new_read_descriptor_list, // dynamic
  var_458_3_read_fd, // dynamic
  var_std__equal, // extern
  var_next, // extern
  var_for_each, // extern
  var_write, // extern polymorphic
  var_480_0_data, // dynamic
  var_482_1_job, // dynamic
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
  var_620_0_self, // dynamic
  var_621_0_level, // dynamic
  var_622_0_message, // dynamic
  var_std__less, // extern
  var_std__not, // extern
  var_std__string, // extern
  var_has_suffix, // extern
  var_update_if_not, // extern
  var_to_utf8, // extern
  var_STDERR_FILENO, // extern
  var_is_empty, // extern polymorphic
  var_639_0_self, // dynamic
  var_std__and, // extern
  var_get_events, // extern polymorphic
  var_660_0_self, // dynamic
  var_661_0_timeout, // dynamic
  var_670_1_want_to_write, // dynamic
  var_any_of, // extern
  var_update_if, // extern
  var_688_1_can_read, // dynamic
  var_689_1_can_write, // dynamic
  var_pselect, // extern
  var_692_1_events, // dynamic
  var_693_1_injected_into_stdin, // dynamic
  var_694_1_write_jobs, // dynamic
  var_696_3_signal, // dynamic
  var_SIGUSR1, // extern
  var_SIGUSR2, // extern
  var_std__sequence, // extern
  var_CHILD_CHANGED_STATE, // extern
  var_699_7_pid, // dynamic
  var_699_12_status, // dynamic
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
  var_738_3_fd, // dynamic
  var_739_1_job, // dynamic
  var_740_8_bytes_written, // dynamic
  var_is_an_error, // extern
  var_WRITE_ERROR, // extern
  var_length_of, // extern
  var_std__plus, // extern
  var_range, // extern
  var_WRITE_PENDING, // extern
  var_WRITE_COMPLETED, // extern
  var_766_3_fd, // dynamic
  var_not, // extern
  var_std__or, // extern
  var_fstat, // extern
  var_type_of, // extern
  var_SOCKET, // extern
  var_is_listening, // extern
  var_774_9_conn, // dynamic
  var_accept, // extern
  var_READ_ERROR, // extern
  var_CONNECT, // extern
  var_788_7_buf, // dynamic
  var_read, // extern
  var_if_not, // extern
  var_802_28_io, // dynamic
  var_804_3_fd, // dynamic
  var_is_undefined, // extern
  var__END
};


static TAB_NUM t_func_std_types__io___start_reading_from[] = {
  2, // locals
  2, // parameters
  var_430_0_self,
  var_431_0_fd,
  // read_descriptor_set_of(self)(fd)
  var_read_descriptor_set_of, 1, var_430_0_self, 1, LOCAL(1),
  // read_descriptor_set_of(self)(fd)
  LOCAL(1), 1, var_431_0_fd, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1, lambda_2, TAIL_CALL,
  POS(434, 5),
  POS(434, 5),
  POS(433, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_430_0_self, TAIL_CALL,
  POS(435, 7)
};

static TAB_NUM t_lambda_2[] = {
  2, // locals
  0, // parameters
  // read_descriptor_set_of(fd) true
  var_read_descriptor_set_of, 1, var_430_0_self, 1, LOCAL(2),
  // read_descriptor_set_of(fd) true
  LOCAL(2), 2, var_431_0_fd, var_true, 1, LOCAL(2),
  // self.read_descriptor_set_of(fd) true
  LET, -1, var_430_0_self, var_read_descriptor_set_of, LOCAL(2), var_430_0_self,
  // read_descriptor_list_of fd
  var_read_descriptor_list_of, 1, var_430_0_self, 1, LOCAL(1),
  // push &self.read_descriptor_list_of fd
  var_push, 2, LOCAL(1), var_431_0_fd, 1, LOCAL(1),
  // self.read_descriptor_list_of fd
  LET, -1, var_430_0_self, var_read_descriptor_list_of, LOCAL(1), var_430_0_self,
  // -> self
  LET, 1, var_430_0_self, TAIL_CALL,
  POS(437, 13),
  POS(437, 13),
  POS(437, 8),
  POS(438, 18),
  POS(438, 7),
  POS(438, 13),
  POS(439, 7)
};

static TAB_NUM t_func_std_types__io___stop_reading_from[] = {
  2, // locals
  2, // parameters
  var_449_0_self,
  var_450_0_fd,
  // read_descriptor_set_of(self)(fd)
  var_read_descriptor_set_of, 1, var_449_0_self, 1, LOCAL(1),
  // read_descriptor_set_of(self)(fd)
  LOCAL(1), 1, var_450_0_fd, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_3, lambda_7, TAIL_CALL,
  POS(453, 5),
  POS(453, 5),
  POS(452, 3)
};

static TAB_NUM t_lambda_3[] = {
  2, // locals
  0, // parameters
  // read_descriptor_set_of(fd) false
  var_read_descriptor_set_of, 1, var_449_0_self, 1, LOCAL(2),
  // read_descriptor_set_of(fd) false
  LOCAL(2), 2, var_450_0_fd, var_false, 1, LOCAL(2),
  // self.read_descriptor_set_of(fd) false
  LET, -1, var_449_0_self, var_read_descriptor_set_of, LOCAL(2), var_449_0_self,
  // $new_read_descriptor_list empty_list
  LET, 1, var_empty_list, 1, var_456_1_new_read_descriptor_list,
  // read_descriptor_list_of(self)
  var_read_descriptor_list_of, 1, var_449_0_self, 1, LOCAL(1),
  // for_each read_descriptor_list_of(self)
  var_for_each, 3, LOCAL(1), lambda_4, lambda_6, TAIL_CALL,
  POS(455, 13),
  POS(455, 13),
  POS(455, 8),
  POS(456, 7),
  POS(457, 16),
  POS(457, 7)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  1, // parameters
  var_458_3_read_fd,
  // fd == read_fd
  var_std__equal, 2, var_450_0_fd, var_458_3_read_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_5, TAIL_CALL,
  POS(460, 13),
  POS(459, 11)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  // push &new_read_descriptor_list read_fd
  var_push, 2, var_456_1_new_read_descriptor_list, var_458_3_read_fd, 1, var_456_1_new_read_descriptor_list,
  // next
  var_next, 0, TAIL_CALL,
  POS(463, 15),
  POS(464, 15)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // self.read_descriptor_list_of new_read_descriptor_list
  LET, -1, var_449_0_self, var_read_descriptor_list_of, var_456_1_new_read_descriptor_list, var_449_0_self,
  // -> self
  LET, 1, var_449_0_self, TAIL_CALL,
  POS(466, 12),
  POS(467, 11)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_449_0_self, TAIL_CALL,
  POS(468, 7)
};

static TAB_NUM t_func_std_types__io___write[] = {
  4, // locals
  3, // parameters
  LOCAL(3), // 478_0_self
  LOCAL(4), // 479_0_fd
  var_480_0_data,
  // write_jobs_of(self)(fd)
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(1),
  // $job write_jobs_of(self)(fd)
  LOCAL(1), 1, LOCAL(4), 1, var_482_1_job,
  // is_defined
  var_is_defined, 1, var_482_1_job, 1, LOCAL(1),
  // !job
  var_if, 3, LOCAL(1), lambda_8, lambda_9, 1, var_482_1_job,
  // write_jobs_of(fd) job
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(2),
  // write_jobs_of(fd) job
  LOCAL(2), 2, LOCAL(4), var_482_1_job, 1, LOCAL(2),
  // self.write_jobs_of(fd) job
  LET, -1, LOCAL(3), var_write_jobs_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(482, 8),
  POS(482, 3),
  POS(485, 11),
  POS(483, 3),
  POS(488, 9),
  POS(488, 9),
  POS(488, 4),
  POS(489, 3)
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // append(job data)
  var_append, 2, var_482_1_job, var_480_0_data, 1, LOCAL(1),
  //  append(job data)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(486, 10),
  POS(486, 9)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_480_0_data, TAIL_CALL,
  POS(487, 9)
};

static TAB_NUM t_func_std_types__io___cancel_write[] = {
  5, // locals
  2, // parameters
  LOCAL(3), // 499_0_self
  LOCAL(4), // 500_0_fd
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
  POS(502, 19),
  POS(502, 3),
  POS(503, 9),
  POS(503, 9),
  POS(503, 4),
  POS(504, 3)
};

static TAB_NUM t_func_std_types__io___close[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 518_0_self
  LOCAL(4), // 519_0_fd
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
  POS(521, 3),
  POS(522, 9),
  POS(522, 9),
  POS(522, 4),
  POS(523, 3)
};

static TAB_NUM t_func_std_types__io___join_process[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 533_0_self
  LOCAL(4), // 534_0_pid
  // watched_pids_of(pid) true
  var_watched_pids_of, 1, LOCAL(3), 1, LOCAL(2),
  // watched_pids_of(pid) true
  LOCAL(2), 2, LOCAL(4), var_true, 1, LOCAL(2),
  // self.watched_pids_of(pid) true
  LET, -1, LOCAL(3), var_watched_pids_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(536, 9),
  POS(536, 9),
  POS(536, 4),
  POS(537, 3)
};

static TAB_NUM t_func_std_types__io___start_injecting_window_change_events[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 547_0_self
  // .do_inject_window_change_events true)
  LET, -1, LOCAL(2), var_do_inject_window_change_events, var_true, LOCAL(1),
  // -> self(.do_inject_window_change_events true)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(549, 11),
  POS(549, 3)
};

static TAB_NUM t_func_std_types__io___stop_injecting_window_change_events[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 559_0_self
  // .do_inject_window_change_events false)
  LET, -1, LOCAL(2), var_do_inject_window_change_events, var_false, LOCAL(1),
  // -> self(.do_inject_window_change_events false)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(561, 11),
  POS(561, 3)
};

static TAB_NUM t_func_std_types__io___start_catching_signals[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 571_0_self
  // .do_catch_signals true)
  LET, -1, LOCAL(2), var_do_catch_signals, var_true, LOCAL(1),
  // -> self(.do_catch_signals true)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(573, 11),
  POS(573, 3)
};

static TAB_NUM t_func_std_types__io___stop_catching_signals[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 583_0_self
  // .do_catch_signals false)
  LET, -1, LOCAL(2), var_do_catch_signals, var_false, LOCAL(1),
  // -> self(.do_catch_signals false)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(585, 11),
  POS(585, 3)
};

static TAB_NUM t_func_std_types__io___enable_logging[] = {
  3, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 595_0_self
  num_1, LOCAL(3), // 596_0_level
  // .log_level_of level)
  LET, -1, LOCAL(2), var_log_level_of, LOCAL(3), LOCAL(1),
  // -> self(.log_level_of level)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(598, 11),
  POS(598, 3)
};

static TAB_NUM t_func_std_types__io___disable_logging[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 608_0_self
  // .log_level_of 0)
  LET, -1, LOCAL(2), var_log_level_of, num_0, LOCAL(1),
  // -> self(.log_level_of 0)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(610, 11),
  POS(610, 3)
};

static TAB_NUM t_func_std_types__io___log[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_620_0_self,
  num_1, var_621_0_level,
  MANDATORY_PARAMETER, var_622_0_message,
  // log_level_of(self):
  var_log_level_of, 1, var_620_0_self, 1, LOCAL(1),
  // log_level_of(self):
  var_std__less, 2, LOCAL(1), var_621_0_level, 1, LOCAL(2),
  // log_level_of(self):
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_10, lambda_12, TAIL_CALL,
  POS(625, 14),
  POS(625, 14),
  POS(625, 14),
  POS(624, 3)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // "[@(level)] " &message
  var_std__string, 3, string_1, var_621_0_level, string_2, 1, LOCAL(1),
  // append "[@(level)] " &message
  var_append, 2, LOCAL(1), var_622_0_message, 1, var_622_0_message,
  // message .has_suffix. '@nl;' &message: push message '@nl;'
  var_has_suffix, 2, var_622_0_message, chr_10, 1, LOCAL(1),
  // update_if_not message .has_suffix. '@nl;' &message: push message '@nl;'
  var_update_if_not, 3, LOCAL(1), var_622_0_message, lambda_11, 1, var_622_0_message,
  // to_utf8
  var_to_utf8, 1, var_622_0_message, 1, LOCAL(1),
  // write self STDERR_FILENO message.to_utf8
  var_write, 3, var_620_0_self, var_STDERR_FILENO, LOCAL(1), TAIL_CALL,
  POS(626, 14),
  POS(626, 7),
  POS(627, 21),
  POS(627, 7),
  POS(628, 40),
  POS(628, 7)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // push message '@nl;'
  var_push, 2, var_622_0_message, chr_10, TAIL_CALL,
  POS(627, 59)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_620_0_self, TAIL_CALL,
  POS(629, 7)
};

static TAB_NUM t_func_std_types__io___is_empty[] = {
  3, // locals
  1, // parameters
  var_639_0_self,
  // read_descriptor_list_of(self).is_empty
  var_read_descriptor_list_of, 1, var_639_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_13, 1, LOCAL(3),
  // ->
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(643, 7),
  POS(643, 37),
  POS(642, 7),
  POS(641, 3)
};

static TAB_NUM t_lambda_13[] = {
  3, // locals
  0, // parameters
  // write_jobs_of(self).is_empty
  var_write_jobs_of, 1, var_639_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_14, 1, LOCAL(3),
  // write_jobs_of(self).is_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(644, 7),
  POS(644, 27),
  POS(642, 7),
  POS(644, 7)
};

static TAB_NUM t_lambda_14[] = {
  3, // locals
  0, // parameters
  // close_jobs_of(self).is_empty
  var_close_jobs_of, 1, var_639_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_15, 1, LOCAL(3),
  // close_jobs_of(self).is_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(645, 7),
  POS(645, 27),
  POS(642, 7),
  POS(645, 7)
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(self).is_empty
  var_watched_pids_of, 1, var_639_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // watched_pids_of(self).is_empty
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(646, 7),
  POS(646, 29),
  POS(646, 7)
};

static TAB_NUM t_func_std_types__io___get_events[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_660_0_self,
  var_undefined, var_661_0_timeout,
  // attempt_close_operations! &self
  func_attempt_close_operations, 1, var_660_0_self, IO_CALL(1), var_660_0_self,
  // $want_to_write empty_list
  LET, 1, var_empty_list, 1, var_670_1_want_to_write,
  // is_defined
  var_is_defined, 1, var_661_0_timeout, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_16, 1, LOCAL(2),
  // update_if # do not wait if an exit code is pending
  var_update_if, 3, LOCAL(2), var_661_0_timeout, lambda_17, 1, var_661_0_timeout,
  // write_jobs_of(self)
  var_write_jobs_of, 1, var_660_0_self, 1, LOCAL(1),
  // for_each write_jobs_of(self)
  var_for_each, 3, LOCAL(1), lambda_18, func_wait_for_events, IO_TAIL_CALL,
  POS(667, 3),
  POS(670, 3),
  POS(673, 15),
  POS(672, 7),
  POS(671, 3),
  POS(679, 12),
  POS(679, 3)
};

static TAB_NUM t_lambda_16[] = {
  2, // locals
  0, // parameters
  // exit_codes_of(self): (pid _exit_code)
  var_exit_codes_of, 1, var_660_0_self, 1, LOCAL(1),
  // any_of
  var_any_of, 2, LOCAL(1), lambda_exit_codes_ofself, 1, LOCAL(2),
  // any_of
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(675, 9),
  POS(674, 7),
  POS(674, 7)
};

static TAB_NUM t_lambda_exit_codes_ofself[] = {
  3, // locals
  2, // parameters
  LOCAL(3), // 675_22_pid
  LOCAL(1),
  // watched_pids_of(self)(pid)
  var_watched_pids_of, 1, var_660_0_self, 1, LOCAL(1),
  // watched_pids_of(self)(pid)
  LOCAL(1), 1, LOCAL(3), 1, LOCAL(2),
  // -> watched_pids_of(self)(pid)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(676, 14),
  POS(676, 14),
  POS(676, 11)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(678, 7)
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 680_3_fd
  LOCAL(1),
  // push &want_to_write fd
  var_push, 2, var_670_1_want_to_write, LOCAL(2), 1, var_670_1_want_to_write,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(681, 7),
  POS(682, 7)
};

static TAB_NUM t_func_wait_for_events[] = {
  3, // locals
  0, // parameters
  // read_descriptor_list_of(self)
  var_read_descriptor_list_of, 1, var_660_0_self, 1, LOCAL(1),
  // pselect!
  var_pselect, 4, LOCAL(1), var_670_1_want_to_write, var_empty_list, var_661_0_timeout, IO_CALL(4), LOCAL(3), var_688_1_can_read, var_689_1_can_write, LOCAL(2),
  // $events empty_list
  LET, 1, var_empty_list, 1, var_692_1_events,
  // $injected_into_stdin false
  LET, 1, var_false, 1, var_693_1_injected_into_stdin,
  // $write_jobs write_jobs_of(self)
  var_write_jobs_of, 1, var_660_0_self, 1, var_694_1_write_jobs,
  // for_each signals
  var_for_each, 3, LOCAL(3), lambda_19, func_handle_write_requests, IO_TAIL_CALL,
  POS(688, 17),
  POS(686, 5),
  POS(692, 5),
  POS(693, 5),
  POS(694, 5),
  POS(695, 5)
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  1, // parameters
  var_696_3_signal,
  // SIGUSR1, SIGUSR2:
  var_std__sequence, 2, var_SIGUSR1, var_SIGUSR2, 1, LOCAL(1),
  // case signal
  var_case, 7, var_696_3_signal, var_CHILD_CHANGED_STATE, lambda_CHILD_CHANGED_STATE, var_WINDOW_CHANGED_SIZE, lambda_WINDOW_CHANGED_SIZE, LOCAL(1), lambda_21, IO_TAIL_CALL,
  POS(712, 11),
  POS(697, 9)
};

static TAB_NUM t_lambda_CHILD_CHANGED_STATE[] = {
  2, // locals
  0, // parameters
  // wait! $pid $status
  var_wait, 0, IO_CALL(2), var_699_7_pid, var_699_12_status,
  // exitstatus &status
  var_exitstatus, 1, var_699_12_status, 1, var_699_12_status,
  // watched_pids_of(self)(pid):
  var_watched_pids_of, 1, var_660_0_self, 1, LOCAL(1),
  // watched_pids_of(self)(pid):
  LOCAL(1), 1, var_699_7_pid, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_watched_pids_ofselfpid, lambda_20, IO_TAIL_CALL,
  POS(699, 13),
  POS(700, 13),
  POS(702, 15),
  POS(702, 15),
  POS(701, 13)
};

static TAB_NUM t_lambda_watched_pids_ofselfpid[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(pid) false
  var_watched_pids_of, 1, var_660_0_self, 1, LOCAL(2),
  // watched_pids_of(pid) false
  LOCAL(2), 2, var_699_7_pid, var_false, 1, LOCAL(2),
  // self.watched_pids_of(pid) false
  LET, -1, var_660_0_self, var_watched_pids_of, LOCAL(2), var_660_0_self,
  // new(std_types::event PROCESS_JOINED pid status)
  var_new, 4, var_std_types__event, var_PROCESS_JOINED, var_699_7_pid, var_699_12_status, 1, LOCAL(1),
  // push &events new(std_types::event PROCESS_JOINED pid status)
  var_push, 2, var_692_1_events, LOCAL(1), 1, var_692_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(703, 23),
  POS(703, 23),
  POS(703, 18),
  POS(704, 30),
  POS(704, 17),
  POS(705, 17)
};

static TAB_NUM t_lambda_20[] = {
  2, // locals
  0, // parameters
  // exit_codes_of(pid) status
  var_exit_codes_of, 1, var_660_0_self, 1, LOCAL(2),
  // exit_codes_of(pid) status
  LOCAL(2), 2, var_699_7_pid, var_699_12_status, 1, LOCAL(2),
  // self.exit_codes_of(pid) status
  LET, -1, var_660_0_self, var_exit_codes_of, LOCAL(2), var_660_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(707, 23),
  POS(707, 23),
  POS(707, 18),
  POS(708, 17)
};

static TAB_NUM t_lambda_WINDOW_CHANGED_SIZE[] = {
  0, // locals
  0, // parameters
  // self.window_change_event_occurred true
  LET, -1, var_660_0_self, var_window_change_event_occurred, var_true, var_660_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(710, 14),
  POS(711, 13)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // do_catch_signals:
  var_do_catch_signals, 1, var_660_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_self_do_catch_signals, var_next, IO_TAIL_CALL,
  POS(714, 20),
  POS(713, 13)
};

static TAB_NUM t_lambda_self_do_catch_signals[] = {
  1, // locals
  0, // parameters
  // new(std_types::event SIGNAL undefined signal)
  var_new, 4, var_std_types__event, var_SIGNAL, var_undefined, var_696_3_signal, 1, LOCAL(1),
  // push &events new(std_types::event SIGNAL undefined signal)
  var_push, 2, var_692_1_events, LOCAL(1), 1, var_692_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(715, 30),
  POS(715, 17),
  POS(716, 17)
};

static TAB_NUM t_func_handle_write_requests[] = {
  2, // locals
  0, // parameters
  // window_change_event_occurred
  var_window_change_event_occurred, 1, var_660_0_self, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_22, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_24, lambda_25, IO_TAIL_CALL,
  POS(723, 16),
  POS(722, 11),
  POS(721, 7)
};

static TAB_NUM t_lambda_22[] = {
  2, // locals
  0, // parameters
  // do_inject_window_change_events
  var_do_inject_window_change_events, 1, var_660_0_self, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_23, 1, LOCAL(2),
  // self.do_inject_window_change_events
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(724, 16),
  POS(722, 11),
  POS(724, 11)
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  0, // parameters
  // read_descriptor_set_of(self)(STDIN_FILENO)
  var_read_descriptor_set_of, 1, var_660_0_self, 1, LOCAL(1),
  // read_descriptor_set_of(self)(STDIN_FILENO)
  LOCAL(1), 1, var_STDIN_FILENO, 1, LOCAL(2),
  // read_descriptor_set_of(self)(STDIN_FILENO)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(725, 11),
  POS(725, 11),
  POS(725, 11)
};

static TAB_NUM t_lambda_24[] = {
  4, // locals
  0, // parameters
  // get_terminal_size! STDIN_FILENO $width $height
  var_get_terminal_size, 1, var_STDIN_FILENO, IO_CALL(2), LOCAL(2), LOCAL(3),
  // self.window_change_event_occurred false
  LET, -1, var_660_0_self, var_window_change_event_occurred, var_false, var_660_0_self,
  // $buf "@esc;[8;@(height);@(width)t"
  var_std__string, 5, string_3, LOCAL(3), string_4, LOCAL(2), str_t, 1, LOCAL(4),
  // new(std_types::event READ STDIN_FILENO buf)
  var_new, 4, var_std_types__event, var_READ, var_STDIN_FILENO, LOCAL(4), 1, LOCAL(1),
  // push &events new(std_types::event READ STDIN_FILENO buf)
  var_push, 2, var_692_1_events, LOCAL(1), 1, var_692_1_events,
  // !injected_into_stdin true
  LET, 1, var_true, 1, var_693_1_injected_into_stdin,
  // check_file_descriptors!
  func_check_file_descriptors, 0, IO_TAIL_CALL,
  POS(727, 11),
  POS(728, 12),
  POS(729, 11),
  POS(730, 24),
  POS(730, 11),
  POS(731, 11),
  POS(732, 11)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  // check_file_descriptors!
  func_check_file_descriptors, 0, IO_TAIL_CALL,
  POS(734, 11)
};

static TAB_NUM t_func_check_file_descriptors[] = {
  0, // locals
  0, // parameters
  // for_each can_write
  var_for_each, 3, var_689_1_can_write, lambda_26, func_attempt_reads, IO_TAIL_CALL,
  POS(737, 7)
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  1, // parameters
  var_738_3_fd,
  // $job write_jobs(fd)
  var_694_1_write_jobs, 1, var_738_3_fd, 1, var_739_1_job,
  // write! $bytes_written fd job
  var_write, 2, var_738_3_fd, var_739_1_job, IO_CALL(1), var_740_8_bytes_written,
  // is_an_error:
  var_is_an_error, 1, var_740_8_bytes_written, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_bytes_written_is_an_error, lambda_27, IO_TAIL_CALL,
  POS(739, 11),
  POS(740, 11),
  POS(742, 27),
  POS(741, 11)
};

static TAB_NUM t_lambda_bytes_written_is_an_error[] = {
  2, // locals
  0, // parameters
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, var_660_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, var_738_3_fd, var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, var_660_0_self, var_write_jobs_of, LOCAL(2), var_660_0_self,
  // tuple(bytes_written job)
  var_tuple, 2, var_740_8_bytes_written, var_739_1_job, 1, LOCAL(1),
  // new
  var_new, 4, var_std_types__event, var_WRITE_ERROR, var_738_3_fd, LOCAL(1), 1, LOCAL(2),
  // push &events
  var_push, 2, var_692_1_events, LOCAL(2), 1, var_692_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(743, 21),
  POS(743, 21),
  POS(743, 16),
  POS(748, 19),
  POS(745, 17),
  POS(744, 15),
  POS(749, 15)
};

static TAB_NUM t_lambda_27[] = {
  2, // locals
  0, // parameters
  // length_of(job):
  var_length_of, 1, var_739_1_job, 1, LOCAL(1),
  // bytes_written < length_of(job):
  var_std__less, 2, var_740_8_bytes_written, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_28, lambda_29, IO_TAIL_CALL,
  POS(752, 33),
  POS(752, 17),
  POS(751, 15)
};

static TAB_NUM t_lambda_28[] = {
  2, // locals
  0, // parameters
  // bytes_written+1 -1
  var_std__plus, 2, var_740_8_bytes_written, num_1, 1, LOCAL(1),
  // range &job bytes_written+1 -1
  var_range, 3, var_739_1_job, LOCAL(1), minus_num_1, 1, var_739_1_job,
  // write_jobs_of(fd) job # remaining text to write
  var_write_jobs_of, 1, var_660_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) job # remaining text to write
  LOCAL(2), 2, var_738_3_fd, var_739_1_job, 1, LOCAL(2),
  // self.write_jobs_of(fd) job # remaining text to write
  LET, -1, var_660_0_self, var_write_jobs_of, LOCAL(2), var_660_0_self,
  // new(std_types::event WRITE_PENDING fd job)
  var_new, 4, var_std_types__event, var_WRITE_PENDING, var_738_3_fd, var_739_1_job, 1, LOCAL(1),
  // push &events new(std_types::event WRITE_PENDING fd job)
  var_push, 2, var_692_1_events, LOCAL(1), 1, var_692_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(753, 30),
  POS(753, 19),
  POS(754, 25),
  POS(754, 25),
  POS(754, 20),
  POS(755, 32),
  POS(755, 19),
  POS(756, 19)
};

static TAB_NUM t_lambda_29[] = {
  2, // locals
  0, // parameters
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, var_660_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, var_738_3_fd, var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, var_660_0_self, var_write_jobs_of, LOCAL(2), var_660_0_self,
  // new(std_types::event WRITE_COMPLETED fd undefined)
  var_new, 4, var_std_types__event, var_WRITE_COMPLETED, var_738_3_fd, var_undefined, 1, LOCAL(1),
  // push &events
  var_push, 2, var_692_1_events, LOCAL(1), 1, var_692_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(758, 25),
  POS(758, 25),
  POS(758, 20),
  POS(760, 21),
  POS(759, 19),
  POS(761, 19)
};

static TAB_NUM t_func_attempt_reads[] = {
  0, // locals
  0, // parameters
  // for_each can_read
  var_for_each, 3, var_688_1_can_read, lambda_30, lambda_36, IO_TAIL_CALL,
  POS(765, 7)
};

static TAB_NUM t_lambda_30[] = {
  3, // locals
  1, // parameters
  var_766_3_fd,
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__equal, 2, var_766_3_fd, var_STDIN_FILENO, 1, LOCAL(1),
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__or, 2, LOCAL(2), lambda_31, 1, LOCAL(3),
  // if_not fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_if_not, 3, LOCAL(3), var_next, lambda_32, IO_TAIL_CALL,
  POS(767, 18),
  POS(767, 18),
  POS(767, 18),
  POS(767, 11)
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // not(injected_into_stdin) next:
  var_not, 1, var_693_1_injected_into_stdin, 1, LOCAL(1),
  // not(injected_into_stdin) next:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(767, 40),
  POS(767, 40)
};

static TAB_NUM t_lambda_32[] = {
  3, // locals
  0, // parameters
  // fstat! fd $info
  var_fstat, 1, var_766_3_fd, IO_CALL(1), LOCAL(3),
  // type_of(info) == SOCKET:
  var_type_of, 1, LOCAL(3), 1, LOCAL(1),
  // type_of(info) == SOCKET:
  var_std__equal, 2, LOCAL(1), var_SOCKET, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_33, func_do_read, IO_TAIL_CALL,
  POS(768, 13),
  POS(770, 15),
  POS(770, 15),
  POS(769, 13)
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // is_listening! $does_listen fd
  var_is_listening, 1, var_766_3_fd, IO_CALL(1), LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_does_listen, func_do_read, IO_TAIL_CALL,
  POS(771, 17),
  POS(772, 17)
};

static TAB_NUM t_lambda_does_listen[] = {
  1, // locals
  0, // parameters
  // accept! $conn fd
  var_accept, 1, var_766_3_fd, IO_CALL(1), var_774_9_conn,
  // is_an_error:
  var_is_an_error, 1, var_774_9_conn, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_conn_is_an_error, lambda_34, IO_TAIL_CALL,
  POS(774, 21),
  POS(776, 28),
  POS(775, 21)
};

static TAB_NUM t_lambda_conn_is_an_error[] = {
  1, // locals
  0, // parameters
  // new(std_types::event READ_ERROR fd conn)
  var_new, 4, var_std_types__event, var_READ_ERROR, var_766_3_fd, var_774_9_conn, 1, LOCAL(1),
  // push &events
  var_push, 2, var_692_1_events, LOCAL(1), 1, var_692_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(778, 27),
  POS(777, 25),
  POS(779, 25)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // new(std_types::event CONNECT fd conn)
  var_new, 4, var_std_types__event, var_CONNECT, var_766_3_fd, var_774_9_conn, 1, LOCAL(1),
  // push &events
  var_push, 2, var_692_1_events, LOCAL(1), 1, var_692_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(782, 27),
  POS(781, 25),
  POS(783, 25)
};

static TAB_NUM t_func_do_read[] = {
  1, // locals
  0, // parameters
  // read! $buf fd 0x10'0000
  var_read, 2, var_766_3_fd, num_0x100000, IO_CALL(1), var_788_7_buf,
  // is_an_error:
  var_is_an_error, 1, var_788_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_an_error, lambda_35, IO_TAIL_CALL,
  POS(788, 15),
  POS(790, 21),
  POS(789, 15)
};

static TAB_NUM t_lambda_buf_is_an_error[] = {
  1, // locals
  0, // parameters
  // new(std_types::event READ_ERROR fd buf)
  var_new, 4, var_std_types__event, var_READ_ERROR, var_766_3_fd, var_788_7_buf, 1, LOCAL(1),
  // push &events new(std_types::event READ_ERROR fd buf)
  var_push, 2, var_692_1_events, LOCAL(1), 1, var_692_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(791, 32),
  POS(791, 19),
  POS(792, 19)
};

static TAB_NUM t_lambda_35[] = {
  1, // locals
  0, // parameters
  // new(std_types::event READ fd buf)
  var_new, 4, var_std_types__event, var_READ, var_766_3_fd, var_788_7_buf, 1, LOCAL(1),
  // push &events new(std_types::event READ fd buf)
  var_push, 2, var_692_1_events, LOCAL(1), 1, var_692_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(794, 32),
  POS(794, 19),
  POS(795, 19)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  // attempt_close_operations! &self
  func_attempt_close_operations, 1, var_660_0_self, IO_CALL(1), var_660_0_self,
  // -> self events
  LET, 2, var_660_0_self, var_692_1_events, TAIL_CALL,
  POS(797, 11),
  POS(800, 11)
};

static TAB_NUM t_func_attempt_close_operations[] = {
  1, // locals
  1, // parameters
  var_802_28_io,
  // close_jobs_of(io)
  var_close_jobs_of, 1, var_802_28_io, 1, LOCAL(1),
  // for_each close_jobs_of(io)
  var_for_each, 3, LOCAL(1), lambda_37, lambda_38, IO_TAIL_CALL,
  POS(803, 12),
  POS(803, 3)
};

static TAB_NUM t_lambda_37[] = {
  3, // locals
  1, // parameters
  var_804_3_fd,
  // write_jobs_of(io)(fd).is_undefined:
  var_write_jobs_of, 1, var_802_28_io, 1, LOCAL(1),
  // write_jobs_of(io)(fd).is_undefined:
  LOCAL(1), 1, var_804_3_fd, 1, LOCAL(2),
  // is_undefined:
  var_is_undefined, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_write_jobs_ofiofd_is_undefined, var_next, IO_TAIL_CALL,
  POS(806, 9),
  POS(806, 9),
  POS(806, 31),
  POS(805, 7)
};

static TAB_NUM t_lambda_write_jobs_ofiofd_is_undefined[] = {
  2, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_804_3_fd, IO_CALL(0),
  // close_jobs_of(fd) false
  var_close_jobs_of, 1, var_802_28_io, 1, LOCAL(2),
  // close_jobs_of(fd) false
  LOCAL(2), 2, var_804_3_fd, var_false, 1, LOCAL(2),
  // io.close_jobs_of(fd) false
  LET, -1, var_802_28_io, var_close_jobs_of, LOCAL(2), var_802_28_io,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(807, 11),
  POS(808, 15),
  POS(808, 15),
  POS(808, 12),
  POS(809, 11)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_802_28_io, TAIL_CALL,
  POS(811, 7)
};

static int tuple_416_0_arguments[] = {
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
  {FLT_TUPLE, 3, {.arguments = tuple_416_0_arguments}},
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
  {FLT_STRING_8, 1, {.str_8 = "["}},
  {FLT_STRING_8, 2, {.str_8 = "] "}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___get_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_exit_codes_ofself}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_wait_for_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_CHILD_CHANGED_STATE}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_watched_pids_ofselfpid}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_WINDOW_CHANGED_SIZE}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_self_do_catch_signals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_write_requests}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_STRING_8, 4, {.str_8 = "\033[8;"}},
  {FLT_STRING_8, 1, {.str_8 = ";"}},
  {FLT_STRING_8, 1, {.str_8 = "t"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_file_descriptors}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_bytes_written_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_attempt_reads}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_does_listen}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_conn_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_do_read}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x100000}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_buf_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_attempt_close_operations}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_write_jobs_ofiofd_is_undefined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}}
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
    FOT_DERIVED, 0, 24,
    "io\000std_types", std_types__io__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "object\000std_types", NULL,
    {.position = POS(400, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(406, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_set\000", NULL,
    {.position = POS(407, 39)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(408, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(412, 47)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "event\000std_types", NULL,
    {.const_idx = -tuple_416_0}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(416, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(416, 19)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_reading_from\000", NULL,
    {.position = POS(422, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "430_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "431_0_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(437, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(438, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(433, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_reading_from\000", NULL,
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
    FOT_UNINITIALIZED, 0, 0,
    "456_1_new_read_descriptor_list\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "458_3_read_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(460, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(461, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(457, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "write\000", NULL,
    {.position = POS(470, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "480_0_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "482_1_job\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(485, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(486, 10)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "cancel_write\000", NULL,
    {.position = POS(491, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "close\000", NULL,
    {.position = POS(506, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "join_process\000", NULL,
    {.position = POS(525, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_injecting_window_change_events\000", NULL,
    {.position = POS(539, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_injecting_window_change_events\000", NULL,
    {.position = POS(551, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_catching_signals\000", NULL,
    {.position = POS(563, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_catching_signals\000", NULL,
    {.position = POS(575, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "enable_logging\000", NULL,
    {.position = POS(587, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "disable_logging\000", NULL,
    {.position = POS(600, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "log\000", NULL,
    {.position = POS(612, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "620_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "621_0_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "622_0_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(625, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(625, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(626, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(627, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if_not\000", NULL,
    {.position = POS(627, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(628, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDERR_FILENO\000", NULL,
    {.position = POS(628, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(631, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "639_0_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(642, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "get_events\000", NULL,
    {.position = POS(648, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "660_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "661_0_timeout\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "670_1_want_to_write\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(674, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(671, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "688_1_can_read\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "689_1_can_write\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pselect\000", NULL,
    {.position = POS(686, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "692_1_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "693_1_injected_into_stdin\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "694_1_write_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "696_3_signal\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGUSR1\000", NULL,
    {.position = POS(712, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGUSR2\000", NULL,
    {.position = POS(712, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(712, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CHILD_CHANGED_STATE\000", NULL,
    {.position = POS(698, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "699_7_pid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "699_12_status\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "wait\000", NULL,
    {.position = POS(699, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exitstatus\000", NULL,
    {.position = POS(700, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PROCESS_JOINED\000", NULL,
    {.position = POS(704, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(704, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WINDOW_CHANGED_SIZE\000", NULL,
    {.position = POS(709, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGNAL\000", NULL,
    {.position = POS(715, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(697, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDIN_FILENO\000", NULL,
    {.position = POS(725, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_terminal_size\000", NULL,
    {.position = POS(727, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ\000", NULL,
    {.position = POS(730, 45)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "738_3_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "739_1_job\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "740_8_bytes_written\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(742, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_ERROR\000", NULL,
    {.position = POS(746, 36)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(752, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(753, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(753, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_PENDING\000", NULL,
    {.position = POS(755, 53)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_COMPLETED\000", NULL,
    {.position = POS(760, 42)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "766_3_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(767, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(767, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "fstat\000", NULL,
    {.position = POS(768, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "type_of\000", NULL,
    {.position = POS(770, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SOCKET\000", NULL,
    {.position = POS(770, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_listening\000", NULL,
    {.position = POS(771, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "774_9_conn\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "accept\000", NULL,
    {.position = POS(774, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ_ERROR\000", NULL,
    {.position = POS(778, 48)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CONNECT\000", NULL,
    {.position = POS(782, 48)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "788_7_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read\000", NULL,
    {.position = POS(788, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(767, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "802_28_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "804_3_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(806, 31)}
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
  88, // number of constants
  138, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
