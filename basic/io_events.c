#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  uni_std__READ = -1,
  uni_std__READ_ERROR = -2,
  uni_std__WRITE_PENDING = -3,
  uni_std__WRITE_COMPLETED = -4,
  uni_std__WRITE_ERROR = -5,
  uni_std__PROCESS_JOINED = -6,
  uni_std__SIGNAL = -7,
  tuple_68_0 = -8,
  func_std_types__io___start_reading_from = -9,
  lambda_1 = -10,
  lambda_2 = -11,
  func_std_types__io___stop_reading_from = -12,
  lambda_3 = -13,
  lambda_4 = -14,
  lambda_5 = -15,
  lambda_6 = -16,
  lambda_7 = -17,
  func_std_types__io___write_to = -18,
  lambda_8 = -19,
  lambda_9 = -20,
  func_std_types__io___cancel_write_to = -21,
  func_std_types__io___join_process = -22,
  func_std_types__io___start_injecting_window_change_events = -23,
  func_std_types__io___stop_injecting_window_change_events = -24,
  func_std_types__io___start_catching_signals = -25,
  func_std_types__io___stop_catching_signals = -26,
  func_std_types__io___is_empty = -27,
  lambda_10 = -28,
  lambda_11 = -29,
  func_std_types__io___is_not_empty = -30,
  lambda_12 = -31,
  lambda_13 = -32,
  func_std_types__io___get_events = -33,
  lambda_14 = -34,
  lambda_exit_codes_ofself = -35,
  lambda_15 = -36,
  num_0 = -37,
  lambda_16 = -38,
  lambda_17 = -39,
  lambda_18 = -40,
  lambda_CHILD_CHANGED_STATE = -41,
  lambda_watched_pids_ofselfpid = -42,
  lambda_19 = -43,
  lambda_WINDOW_CHANGED_SIZE = -44,
  lambda_20 = -45,
  lambda_self_do_catch_signals = -46,
  lambda_21 = -47,
  lambda_22 = -48,
  lambda_23 = -49,
  lambda_24 = -50,
  string_1 = -51,
  string_2 = -52,
  str_t = -53,
  lambda_25 = -54,
  func_check_file_descriptors = -55,
  lambda_26 = -56,
  lambda_bytes_written_is_an_error = -57,
  lambda_27 = -58,
  lambda_28 = -59,
  num_1 = -60,
  minus_num_1 = -61,
  lambda_29 = -62,
  lambda_30 = -63,
  lambda_31 = -64,
  lambda_32 = -65,
  lambda_33 = -66,
  num_65536 = -67,
  lambda_buf_is_an_error = -68,
  lambda_34 = -69,
  lambda_35 = -70
};

enum {
  var__START = FIRST_VAR-1,
  var_std__READ, // initialized
  var_std__assign, // extern
  var_std__READ_ERROR, // initialized
  var_std__WRITE_PENDING, // initialized
  var_std__WRITE_COMPLETED, // initialized
  var_std__WRITE_ERROR, // initialized
  var_std__PROCESS_JOINED, // initialized
  var_std__SIGNAL, // initialized
  var_std__get_events, // attribute
  var_std__start_reading_from, // attribute
  var_std__stop_reading_from, // attribute
  var_std__write_to, // attribute
  var_std__cancel_write_to, // attribute
  var_std__join_process, // attribute
  var_std__start_injecting_window_change_events, // attribute
  var_std__stop_injecting_window_change_events, // attribute
  var_std__start_catching_signals, // attribute
  var_std__stop_catching_signals, // attribute
  var_read_descriptor_list_of, // attribute
  var_read_descriptor_set_of, // attribute
  var_write_jobs_of, // attribute
  var_watched_pids_of, // attribute
  var_exit_codes_of, // attribute
  var_do_inject_window_change_events, // attribute
  var_do_catch_signals, // attribute
  var_window_change_event_occurred, // attribute
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
  var_70_36_self, // dynamic
  var_70_41_fd, // dynamic
  var_true, // extern
  var_push, // extern
  var_if, // extern
  var_stop_reading_from, // extern polymorphic
  var_79_35_self, // dynamic
  var_79_40_fd, // dynamic
  var_84_1_new_read_descriptor_list, // dynamic
  var_86_3_read_fd, // dynamic
  var_std__equal, // extern
  var_next, // extern
  var_for_each, // extern
  var_write_to, // extern polymorphic
  var_98_34_text, // dynamic
  var_99_1_job, // dynamic
  var_is_defined, // extern
  var_append, // extern
  var_cancel_write_to, // extern polymorphic
  var_join_process, // extern polymorphic
  var_start_injecting_window_change_events, // extern polymorphic
  var_stop_injecting_window_change_events, // extern polymorphic
  var_start_catching_signals, // extern polymorphic
  var_stop_catching_signals, // extern polymorphic
  var_is_empty, // extern polymorphic
  var_133_26_self, // dynamic
  var_std__and, // extern
  var_is_not_empty, // extern polymorphic
  var_140_30_self, // dynamic
  var_std__or, // extern
  var_get_events, // extern polymorphic
  var_149_0_self, // dynamic
  var_150_0_timeout, // dynamic
  var_156_1_want_to_write_to, // dynamic
  var_any_of, // extern
  var_update_if, // extern
  var_172_1_can_read_from, // dynamic
  var_173_1_can_write_to, // dynamic
  var_pselect, // extern
  var_176_1_events, // dynamic
  var_177_1_write_jobs, // dynamic
  var_179_3_signal, // dynamic
  var_SIGUSR1, // extern
  var_SIGUSR2, // extern
  var_std__sequence, // extern
  var_CHILD_CHANGED_STATE, // extern
  var_182_7_pid, // dynamic
  var_182_12_status, // dynamic
  var_wait, // extern
  var_exitstatus, // extern
  var_PROCESS_JOINED, // extern
  var_new, // extern
  var_WINDOW_CHANGED_SIZE, // extern
  var_SIGNAL, // extern
  var_case, // extern
  var_202_1_injected_into_stdin, // dynamic
  var_STDIN_FILENO, // extern
  var_get_terminal_size, // extern
  var_std__string, // extern
  var_READ, // extern
  var_220_3_fd, // dynamic
  var_221_1_job, // dynamic
  var_222_8_bytes_written, // dynamic
  var_write, // extern
  var_is_an_error, // extern
  var_WRITE_ERROR, // extern
  var_length_of, // extern
  var_std__less, // extern
  var_std__plus, // extern
  var_range, // extern
  var_WRITE_PENDING, // extern
  var_WRITE_COMPLETED, // extern
  var_246_3_fd, // dynamic
  var_std__not, // extern
  var_not, // extern
  var_248_7_buf, // dynamic
  var_read, // extern
  var_READ_ERROR, // extern
  var_if_not, // extern
  var__END
};


static TAB_NUM t_func_std_types__io___start_reading_from[] = {
  2, // locals
  2, // parameters
  var_70_36_self,
  var_70_41_fd,
  // read_descriptor_set_of(self)(fd)
  var_read_descriptor_set_of, 1, var_70_36_self, 1, LOCAL(1),
  // read_descriptor_set_of(self)(fd)
  LOCAL(1), 1, var_70_41_fd, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1, lambda_2, TAIL_CALL,
  POS(72, 5),
  POS(72, 5),
  POS(71, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_70_36_self, TAIL_CALL,
  POS(73, 7)
};

static TAB_NUM t_lambda_2[] = {
  2, // locals
  0, // parameters
  // read_descriptor_set_of(fd) true
  var_read_descriptor_set_of, 1, var_70_36_self, 1, LOCAL(2),
  // read_descriptor_set_of(fd) true
  LOCAL(2), 2, var_70_41_fd, var_true, 1, LOCAL(2),
  // self.read_descriptor_set_of(fd) true
  LET, -1, var_70_36_self, var_read_descriptor_set_of, LOCAL(2), var_70_36_self,
  // read_descriptor_list_of fd
  var_read_descriptor_list_of, 1, var_70_36_self, 1, LOCAL(1),
  // push &self.read_descriptor_list_of fd
  var_push, 2, LOCAL(1), var_70_41_fd, 1, LOCAL(1),
  // self.read_descriptor_list_of fd
  LET, -1, var_70_36_self, var_read_descriptor_list_of, LOCAL(1), var_70_36_self,
  // -> self
  LET, 1, var_70_36_self, TAIL_CALL,
  POS(75, 13),
  POS(75, 13),
  POS(75, 8),
  POS(76, 18),
  POS(76, 7),
  POS(76, 13),
  POS(77, 7)
};

static TAB_NUM t_func_std_types__io___stop_reading_from[] = {
  2, // locals
  2, // parameters
  var_79_35_self,
  var_79_40_fd,
  // read_descriptor_set_of(self)(fd)
  var_read_descriptor_set_of, 1, var_79_35_self, 1, LOCAL(1),
  // read_descriptor_set_of(self)(fd)
  LOCAL(1), 1, var_79_40_fd, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_3, lambda_7, TAIL_CALL,
  POS(81, 5),
  POS(81, 5),
  POS(80, 3)
};

static TAB_NUM t_lambda_3[] = {
  2, // locals
  0, // parameters
  // read_descriptor_set_of(fd) false
  var_read_descriptor_set_of, 1, var_79_35_self, 1, LOCAL(2),
  // read_descriptor_set_of(fd) false
  LOCAL(2), 2, var_79_40_fd, var_false, 1, LOCAL(2),
  // self.read_descriptor_set_of(fd) false
  LET, -1, var_79_35_self, var_read_descriptor_set_of, LOCAL(2), var_79_35_self,
  // $new_read_descriptor_list empty_list
  LET, 1, var_empty_list, 1, var_84_1_new_read_descriptor_list,
  // read_descriptor_list_of(self)
  var_read_descriptor_list_of, 1, var_79_35_self, 1, LOCAL(1),
  // for_each read_descriptor_list_of(self)
  var_for_each, 3, LOCAL(1), lambda_4, lambda_6, TAIL_CALL,
  POS(83, 13),
  POS(83, 13),
  POS(83, 8),
  POS(84, 7),
  POS(85, 16),
  POS(85, 7)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  1, // parameters
  var_86_3_read_fd,
  // fd == read_fd
  var_std__equal, 2, var_79_40_fd, var_86_3_read_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_5, TAIL_CALL,
  POS(88, 13),
  POS(87, 11)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  // push &new_read_descriptor_list read_fd
  var_push, 2, var_84_1_new_read_descriptor_list, var_86_3_read_fd, 1, var_84_1_new_read_descriptor_list,
  // next
  var_next, 0, TAIL_CALL,
  POS(91, 15),
  POS(92, 15)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // self.read_descriptor_list_of new_read_descriptor_list
  LET, -1, var_79_35_self, var_read_descriptor_list_of, var_84_1_new_read_descriptor_list, var_79_35_self,
  // -> self
  LET, 1, var_79_35_self, TAIL_CALL,
  POS(94, 12),
  POS(95, 11)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_79_35_self, TAIL_CALL,
  POS(96, 7)
};

static TAB_NUM t_func_std_types__io___write_to[] = {
  4, // locals
  3, // parameters
  LOCAL(3), // 98_26_self
  LOCAL(4), // 98_31_fd
  var_98_34_text,
  // write_jobs_of(self)(fd)
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(1),
  // $job write_jobs_of(self)(fd)
  LOCAL(1), 1, LOCAL(4), 1, var_99_1_job,
  // is_defined
  var_is_defined, 1, var_99_1_job, 1, LOCAL(1),
  // !job
  var_if, 3, LOCAL(1), lambda_8, lambda_9, 1, var_99_1_job,
  // write_jobs_of(fd) job
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(2),
  // write_jobs_of(fd) job
  LOCAL(2), 2, LOCAL(4), var_99_1_job, 1, LOCAL(2),
  // self.write_jobs_of(fd) job
  LET, -1, LOCAL(3), var_write_jobs_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(99, 8),
  POS(99, 3),
  POS(102, 11),
  POS(100, 3),
  POS(105, 9),
  POS(105, 9),
  POS(105, 4),
  POS(106, 3)
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // append(job text)
  var_append, 2, var_99_1_job, var_98_34_text, 1, LOCAL(1),
  //  append(job text)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(103, 10),
  POS(103, 9)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_98_34_text, TAIL_CALL,
  POS(104, 9)
};

static TAB_NUM t_func_std_types__io___cancel_write_to[] = {
  5, // locals
  2, // parameters
  LOCAL(3), // 108_33_self
  LOCAL(4), // 108_38_fd
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
  POS(109, 19),
  POS(109, 3),
  POS(110, 9),
  POS(110, 9),
  POS(110, 4),
  POS(111, 3)
};

static TAB_NUM t_func_std_types__io___join_process[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 113_30_self
  LOCAL(4), // 113_35_pid
  // watched_pids_of(pid) true
  var_watched_pids_of, 1, LOCAL(3), 1, LOCAL(2),
  // watched_pids_of(pid) true
  LOCAL(2), 2, LOCAL(4), var_true, 1, LOCAL(2),
  // self.watched_pids_of(pid) true
  LET, -1, LOCAL(3), var_watched_pids_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(114, 9),
  POS(114, 9),
  POS(114, 4),
  POS(115, 3)
};

static TAB_NUM t_func_std_types__io___start_injecting_window_change_events[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 117_54_self
  // self.do_inject_window_change_events true
  LET, -1, LOCAL(1), var_do_inject_window_change_events, var_true, LOCAL(1),
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(118, 4),
  POS(119, 3)
};

static TAB_NUM t_func_std_types__io___stop_injecting_window_change_events[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 121_53_self
  // self.do_inject_window_change_events false
  LET, -1, LOCAL(1), var_do_inject_window_change_events, var_false, LOCAL(1),
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(122, 4),
  POS(123, 3)
};

static TAB_NUM t_func_std_types__io___start_catching_signals[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 125_40_self
  // self.do_catch_signals true
  LET, -1, LOCAL(1), var_do_catch_signals, var_true, LOCAL(1),
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(126, 4),
  POS(127, 3)
};

static TAB_NUM t_func_std_types__io___stop_catching_signals[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 129_39_self
  // self.do_catch_signals false
  LET, -1, LOCAL(1), var_do_catch_signals, var_false, LOCAL(1),
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(130, 4),
  POS(131, 3)
};

static TAB_NUM t_func_std_types__io___is_empty[] = {
  3, // locals
  1, // parameters
  var_133_26_self,
  // read_descriptor_list_of(self).is_empty
  var_read_descriptor_list_of, 1, var_133_26_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_10, 1, LOCAL(3),
  // ->
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(136, 7),
  POS(136, 37),
  POS(135, 7),
  POS(134, 3)
};

static TAB_NUM t_lambda_10[] = {
  3, // locals
  0, // parameters
  // write_jobs_of(self).is_empty
  var_write_jobs_of, 1, var_133_26_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_11, 1, LOCAL(3),
  // write_jobs_of(self).is_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(137, 7),
  POS(137, 27),
  POS(135, 7),
  POS(137, 7)
};

static TAB_NUM t_lambda_11[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(self).is_empty
  var_watched_pids_of, 1, var_133_26_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // watched_pids_of(self).is_empty
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(138, 7),
  POS(138, 29),
  POS(138, 7)
};

static TAB_NUM t_func_std_types__io___is_not_empty[] = {
  3, // locals
  1, // parameters
  var_140_30_self,
  // read_descriptor_list_of(self).is_not_empty
  var_read_descriptor_list_of, 1, var_140_30_self, 1, LOCAL(1),
  // is_not_empty
  var_is_not_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__or, 2, LOCAL(2), lambda_12, 1, LOCAL(3),
  // ->
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(143, 7),
  POS(143, 37),
  POS(142, 7),
  POS(141, 3)
};

static TAB_NUM t_lambda_12[] = {
  3, // locals
  0, // parameters
  // write_jobs_of(self).is_not_empty
  var_write_jobs_of, 1, var_140_30_self, 1, LOCAL(1),
  // is_not_empty
  var_is_not_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__or, 2, LOCAL(2), lambda_13, 1, LOCAL(3),
  // write_jobs_of(self).is_not_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(144, 7),
  POS(144, 27),
  POS(142, 7),
  POS(144, 7)
};

static TAB_NUM t_lambda_13[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(self).is_not_empty
  var_watched_pids_of, 1, var_140_30_self, 1, LOCAL(1),
  // is_not_empty
  var_is_not_empty, 1, LOCAL(1), 1, LOCAL(2),
  // watched_pids_of(self).is_not_empty
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(145, 7),
  POS(145, 29),
  POS(145, 7)
};

static TAB_NUM t_func_std_types__io___get_events[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_149_0_self,
  var_undefined, var_150_0_timeout,
  // $want_to_write_to empty_list
  LET, 1, var_empty_list, 1, var_156_1_want_to_write_to,
  // is_defined
  var_is_defined, 1, var_150_0_timeout, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_14, 1, LOCAL(2),
  // update_if # do not wait if an exit code is pending
  var_update_if, 3, LOCAL(2), var_150_0_timeout, lambda_15, 1, var_150_0_timeout,
  // write_jobs_of(self)
  var_write_jobs_of, 1, var_149_0_self, 1, LOCAL(1),
  // for_each write_jobs_of(self)
  var_for_each, 3, LOCAL(1), lambda_16, lambda_17, IO_TAIL_CALL,
  POS(156, 3),
  POS(159, 15),
  POS(158, 7),
  POS(157, 3),
  POS(165, 12),
  POS(165, 3)
};

static TAB_NUM t_lambda_14[] = {
  2, // locals
  0, // parameters
  // exit_codes_of(self): (pid _exit_code)
  var_exit_codes_of, 1, var_149_0_self, 1, LOCAL(1),
  // any_of
  var_any_of, 2, LOCAL(1), lambda_exit_codes_ofself, 1, LOCAL(2),
  // any_of
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(161, 9),
  POS(160, 7),
  POS(160, 7)
};

static TAB_NUM t_lambda_exit_codes_ofself[] = {
  3, // locals
  2, // parameters
  LOCAL(3), // 161_22_pid
  LOCAL(1),
  // watched_pids_of(self)(pid)
  var_watched_pids_of, 1, var_149_0_self, 1, LOCAL(1),
  // watched_pids_of(self)(pid)
  LOCAL(1), 1, LOCAL(3), 1, LOCAL(2),
  // -> watched_pids_of(self)(pid)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(162, 14),
  POS(162, 14),
  POS(162, 11)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(164, 7)
};

static TAB_NUM t_lambda_16[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 166_3_fd
  LOCAL(1),
  // push &want_to_write_to fd
  var_push, 2, var_156_1_want_to_write_to, LOCAL(2), 1, var_156_1_want_to_write_to,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(167, 7),
  POS(168, 7)
};

static TAB_NUM t_lambda_17[] = {
  3, // locals
  0, // parameters
  // read_descriptor_list_of(self)
  var_read_descriptor_list_of, 1, var_149_0_self, 1, LOCAL(1),
  // pselect!
  var_pselect, 4, LOCAL(1), var_156_1_want_to_write_to, var_empty_list, var_150_0_timeout, IO_CALL(4), LOCAL(3), var_172_1_can_read_from, var_173_1_can_write_to, LOCAL(2),
  // $events empty_list
  LET, 1, var_empty_list, 1, var_176_1_events,
  // $write_jobs write_jobs_of(self)
  var_write_jobs_of, 1, var_149_0_self, 1, var_177_1_write_jobs,
  // for_each signals
  var_for_each, 3, LOCAL(3), lambda_18, lambda_21, IO_TAIL_CALL,
  POS(172, 24),
  POS(170, 7),
  POS(176, 7),
  POS(177, 7),
  POS(178, 7)
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  1, // parameters
  var_179_3_signal,
  // SIGUSR1, SIGUSR2:
  var_std__sequence, 2, var_SIGUSR1, var_SIGUSR2, 1, LOCAL(1),
  // case signal
  var_case, 7, var_179_3_signal, var_CHILD_CHANGED_STATE, lambda_CHILD_CHANGED_STATE, var_WINDOW_CHANGED_SIZE, lambda_WINDOW_CHANGED_SIZE, LOCAL(1), lambda_20, IO_TAIL_CALL,
  POS(195, 13),
  POS(180, 11)
};

static TAB_NUM t_lambda_CHILD_CHANGED_STATE[] = {
  2, // locals
  0, // parameters
  // wait! $pid $status
  var_wait, 0, IO_CALL(2), var_182_7_pid, var_182_12_status,
  // exitstatus &status
  var_exitstatus, 1, var_182_12_status, 1, var_182_12_status,
  // watched_pids_of(self)(pid):
  var_watched_pids_of, 1, var_149_0_self, 1, LOCAL(1),
  // watched_pids_of(self)(pid):
  LOCAL(1), 1, var_182_7_pid, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_watched_pids_ofselfpid, lambda_19, IO_TAIL_CALL,
  POS(182, 15),
  POS(183, 15),
  POS(185, 17),
  POS(185, 17),
  POS(184, 15)
};

static TAB_NUM t_lambda_watched_pids_ofselfpid[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(pid) false
  var_watched_pids_of, 1, var_149_0_self, 1, LOCAL(2),
  // watched_pids_of(pid) false
  LOCAL(2), 2, var_182_7_pid, var_false, 1, LOCAL(2),
  // self.watched_pids_of(pid) false
  LET, -1, var_149_0_self, var_watched_pids_of, LOCAL(2), var_149_0_self,
  // new(std_types::event PROCESS_JOINED pid status)
  var_new, 4, var_std_types__event, var_PROCESS_JOINED, var_182_7_pid, var_182_12_status, 1, LOCAL(1),
  // push &events new(std_types::event PROCESS_JOINED pid status)
  var_push, 2, var_176_1_events, LOCAL(1), 1, var_176_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(186, 25),
  POS(186, 25),
  POS(186, 20),
  POS(187, 32),
  POS(187, 19),
  POS(188, 19)
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  0, // parameters
  // exit_codes_of(pid) status
  var_exit_codes_of, 1, var_149_0_self, 1, LOCAL(2),
  // exit_codes_of(pid) status
  LOCAL(2), 2, var_182_7_pid, var_182_12_status, 1, LOCAL(2),
  // self.exit_codes_of(pid) status
  LET, -1, var_149_0_self, var_exit_codes_of, LOCAL(2), var_149_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(190, 25),
  POS(190, 25),
  POS(190, 20),
  POS(191, 19)
};

static TAB_NUM t_lambda_WINDOW_CHANGED_SIZE[] = {
  0, // locals
  0, // parameters
  // self.window_change_event_occurred true
  LET, -1, var_149_0_self, var_window_change_event_occurred, var_true, var_149_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(193, 16),
  POS(194, 15)
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // do_catch_signals:
  var_do_catch_signals, 1, var_149_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_self_do_catch_signals, var_next, IO_TAIL_CALL,
  POS(197, 22),
  POS(196, 15)
};

static TAB_NUM t_lambda_self_do_catch_signals[] = {
  1, // locals
  0, // parameters
  // new(std_types::event SIGNAL undefined signal)
  var_new, 4, var_std_types__event, var_SIGNAL, var_undefined, var_179_3_signal, 1, LOCAL(1),
  // push &events new(std_types::event SIGNAL undefined signal)
  var_push, 2, var_176_1_events, LOCAL(1), 1, var_176_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(198, 32),
  POS(198, 19),
  POS(199, 19)
};

static TAB_NUM t_lambda_21[] = {
  2, // locals
  0, // parameters
  // $injected_into_stdin false
  LET, 1, var_false, 1, var_202_1_injected_into_stdin,
  // window_change_event_occurred
  var_window_change_event_occurred, 1, var_149_0_self, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_22, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_24, lambda_25, IO_TAIL_CALL,
  POS(202, 11),
  POS(205, 20),
  POS(204, 15),
  POS(203, 11)
};

static TAB_NUM t_lambda_22[] = {
  2, // locals
  0, // parameters
  // do_inject_window_change_events
  var_do_inject_window_change_events, 1, var_149_0_self, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_23, 1, LOCAL(2),
  // self.do_inject_window_change_events
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(206, 20),
  POS(204, 15),
  POS(206, 15)
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  0, // parameters
  // read_descriptor_set_of(self)(STDIN_FILENO)
  var_read_descriptor_set_of, 1, var_149_0_self, 1, LOCAL(1),
  // read_descriptor_set_of(self)(STDIN_FILENO)
  LOCAL(1), 1, var_STDIN_FILENO, 1, LOCAL(2),
  // read_descriptor_set_of(self)(STDIN_FILENO)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(207, 15),
  POS(207, 15),
  POS(207, 15)
};

static TAB_NUM t_lambda_24[] = {
  4, // locals
  0, // parameters
  // get_terminal_size! STDIN_FILENO $width $height
  var_get_terminal_size, 1, var_STDIN_FILENO, IO_CALL(2), LOCAL(2), LOCAL(3),
  // self.window_change_event_occurred false
  LET, -1, var_149_0_self, var_window_change_event_occurred, var_false, var_149_0_self,
  // $buf "@esc;[8;@(height);@(width)t"
  var_std__string, 5, string_1, LOCAL(3), string_2, LOCAL(2), str_t, 1, LOCAL(4),
  // new(std_types::event READ STDIN_FILENO buf)
  var_new, 4, var_std_types__event, var_READ, var_STDIN_FILENO, LOCAL(4), 1, LOCAL(1),
  // push &events new(std_types::event READ STDIN_FILENO buf)
  var_push, 2, var_176_1_events, LOCAL(1), 1, var_176_1_events,
  // !injected_into_stdin true
  LET, 1, var_true, 1, var_202_1_injected_into_stdin,
  // check_file_descriptors!
  func_check_file_descriptors, 0, IO_TAIL_CALL,
  POS(209, 15),
  POS(210, 16),
  POS(211, 15),
  POS(212, 28),
  POS(212, 15),
  POS(213, 15),
  POS(214, 15)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  // check_file_descriptors!
  func_check_file_descriptors, 0, IO_TAIL_CALL,
  POS(216, 15)
};

static TAB_NUM t_func_check_file_descriptors[] = {
  0, // locals
  0, // parameters
  // for_each can_write_to
  var_for_each, 3, var_173_1_can_write_to, lambda_26, lambda_30, IO_TAIL_CALL,
  POS(219, 13)
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  1, // parameters
  var_220_3_fd,
  // $job write_jobs(fd)
  var_177_1_write_jobs, 1, var_220_3_fd, 1, var_221_1_job,
  // write! $bytes_written fd job
  var_write, 2, var_220_3_fd, var_221_1_job, IO_CALL(1), var_222_8_bytes_written,
  // is_an_error:
  var_is_an_error, 1, var_222_8_bytes_written, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_bytes_written_is_an_error, lambda_27, IO_TAIL_CALL,
  POS(221, 17),
  POS(222, 17),
  POS(224, 33),
  POS(223, 17)
};

static TAB_NUM t_lambda_bytes_written_is_an_error[] = {
  2, // locals
  0, // parameters
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, var_149_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, var_220_3_fd, var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, var_149_0_self, var_write_jobs_of, LOCAL(2), var_149_0_self,
  // tuple(bytes_written job)
  var_tuple, 2, var_222_8_bytes_written, var_221_1_job, 1, LOCAL(1),
  // new
  var_new, 4, var_std_types__event, var_WRITE_ERROR, var_220_3_fd, LOCAL(1), 1, LOCAL(2),
  // push &events
  var_push, 2, var_176_1_events, LOCAL(2), 1, var_176_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(225, 27),
  POS(225, 27),
  POS(225, 22),
  POS(230, 25),
  POS(227, 23),
  POS(226, 21),
  POS(231, 21)
};

static TAB_NUM t_lambda_27[] = {
  2, // locals
  0, // parameters
  // length_of(job):
  var_length_of, 1, var_221_1_job, 1, LOCAL(1),
  // bytes_written < length_of(job):
  var_std__less, 2, var_222_8_bytes_written, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_28, lambda_29, IO_TAIL_CALL,
  POS(234, 39),
  POS(234, 23),
  POS(233, 21)
};

static TAB_NUM t_lambda_28[] = {
  2, // locals
  0, // parameters
  // bytes_written+1 -1
  var_std__plus, 2, var_222_8_bytes_written, num_1, 1, LOCAL(1),
  // range &job bytes_written+1 -1
  var_range, 3, var_221_1_job, LOCAL(1), minus_num_1, 1, var_221_1_job,
  // write_jobs_of(fd) job # remaining text to write
  var_write_jobs_of, 1, var_149_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) job # remaining text to write
  LOCAL(2), 2, var_220_3_fd, var_221_1_job, 1, LOCAL(2),
  // self.write_jobs_of(fd) job # remaining text to write
  LET, -1, var_149_0_self, var_write_jobs_of, LOCAL(2), var_149_0_self,
  // new(std_types::event WRITE_PENDING fd job)
  var_new, 4, var_std_types__event, var_WRITE_PENDING, var_220_3_fd, var_221_1_job, 1, LOCAL(1),
  // push &events new(std_types::event WRITE_PENDING fd job)
  var_push, 2, var_176_1_events, LOCAL(1), 1, var_176_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(235, 36),
  POS(235, 25),
  POS(236, 31),
  POS(236, 31),
  POS(236, 26),
  POS(237, 38),
  POS(237, 25),
  POS(238, 25)
};

static TAB_NUM t_lambda_29[] = {
  2, // locals
  0, // parameters
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, var_149_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, var_220_3_fd, var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, var_149_0_self, var_write_jobs_of, LOCAL(2), var_149_0_self,
  // new(std_types::event WRITE_COMPLETED fd undefined)
  var_new, 4, var_std_types__event, var_WRITE_COMPLETED, var_220_3_fd, var_undefined, 1, LOCAL(1),
  // push &events
  var_push, 2, var_176_1_events, LOCAL(1), 1, var_176_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(240, 31),
  POS(240, 31),
  POS(240, 26),
  POS(242, 27),
  POS(241, 25),
  POS(243, 25)
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  // for_each can_read_from
  var_for_each, 3, var_172_1_can_read_from, lambda_31, lambda_35, IO_TAIL_CALL,
  POS(245, 17)
};

static TAB_NUM t_lambda_31[] = {
  3, // locals
  1, // parameters
  var_246_3_fd,
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__equal, 2, var_246_3_fd, var_STDIN_FILENO, 1, LOCAL(1),
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__or, 2, LOCAL(2), lambda_32, 1, LOCAL(3),
  // if_not fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_if_not, 3, LOCAL(3), var_next, lambda_33, IO_TAIL_CALL,
  POS(247, 28),
  POS(247, 28),
  POS(247, 28),
  POS(247, 21)
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // not(injected_into_stdin) next:
  var_not, 1, var_202_1_injected_into_stdin, 1, LOCAL(1),
  // not(injected_into_stdin) next:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(247, 50),
  POS(247, 50)
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // read! $buf fd 0x10000
  var_read, 2, var_246_3_fd, num_65536, IO_CALL(1), var_248_7_buf,
  // is_an_error:
  var_is_an_error, 1, var_248_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_an_error, lambda_34, IO_TAIL_CALL,
  POS(248, 23),
  POS(250, 29),
  POS(249, 23)
};

static TAB_NUM t_lambda_buf_is_an_error[] = {
  1, // locals
  0, // parameters
  // new(std_types::event READ_ERROR fd buf)
  var_new, 4, var_std_types__event, var_READ_ERROR, var_246_3_fd, var_248_7_buf, 1, LOCAL(1),
  // push &events new(std_types::event READ_ERROR fd buf)
  var_push, 2, var_176_1_events, LOCAL(1), 1, var_176_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(251, 40),
  POS(251, 27),
  POS(252, 27)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // new(std_types::event READ fd buf)
  var_new, 4, var_std_types__event, var_READ, var_246_3_fd, var_248_7_buf, 1, LOCAL(1),
  // push &events new(std_types::event READ fd buf)
  var_push, 2, var_176_1_events, LOCAL(1), 1, var_176_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(254, 40),
  POS(254, 27),
  POS(255, 27)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  //  self events
  LET, 2, var_149_0_self, var_176_1_events, TAIL_CALL,
  POS(256, 21)
};

static int tuple_68_0_arguments[] = {
  -var_undefined, -var_undefined, -var_undefined
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_UNIQUE, 0, {.str_8 = "std::READ"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::READ_ERROR"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::WRITE_PENDING"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::WRITE_COMPLETED"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::WRITE_ERROR"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::PROCESS_JOINED"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::SIGNAL"}},
  {FLT_TUPLE, 3, {.arguments = tuple_68_0_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___start_reading_from}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___stop_reading_from}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___write_to}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___cancel_write_to}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___join_process}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___start_injecting_window_change_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___stop_injecting_window_change_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___start_catching_signals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___stop_catching_signals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___is_not_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___get_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_exit_codes_ofself}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_CHILD_CHANGED_STATE}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_watched_pids_ofselfpid}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_WINDOW_CHANGED_SIZE}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_self_do_catch_signals}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
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
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x10000}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_buf_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}}
};

static ATTRIBUTE_DEFINITION std_types__io__attributes[] = {
  {-var_read_descriptor_list_of, -var_empty_list},
  {-var_read_descriptor_set_of, -var_empty_hash_set},
  {-var_write_jobs_of, -var_empty_hash_table},
  {-var_watched_pids_of, -var_empty_hash_set},
  {-var_exit_codes_of, -var_empty_hash_table},
  {-var_do_inject_window_change_events, -var_false},
  {-var_window_change_event_occurred, -var_false},
  {var_start_reading_from, -func_std_types__io___start_reading_from},
  {var_stop_reading_from, -func_std_types__io___stop_reading_from},
  {var_write_to, -func_std_types__io___write_to},
  {var_cancel_write_to, -func_std_types__io___cancel_write_to},
  {var_join_process, -func_std_types__io___join_process},
  {var_start_injecting_window_change_events, -func_std_types__io___start_injecting_window_change_events},
  {var_stop_injecting_window_change_events, -func_std_types__io___stop_injecting_window_change_events},
  {var_start_catching_signals, -func_std_types__io___start_catching_signals},
  {var_stop_catching_signals, -func_std_types__io___stop_catching_signals},
  {var_is_empty, -func_std_types__io___is_empty},
  {var_is_not_empty, -func_std_types__io___is_not_empty},
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
    {.position = POS(23, 1)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "READ_ERROR\000std", NULL,
    {.const_idx = -uni_std__READ_ERROR}
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
    "write_to\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "cancel_write_to\000std", NULL,
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
    FOT_DERIVED, 0, 19,
    "io\000std_types", std_types__io__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "object\000std_types", NULL,
    {.position = POS(59, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(60, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_set\000", NULL,
    {.position = POS(61, 39)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(62, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(65, 47)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "event\000std_types", NULL,
    {.const_idx = -tuple_68_0}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(68, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(68, 19)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_reading_from\000", NULL,
    {.position = POS(70, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "70_36_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "70_41_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(75, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(76, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(71, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_reading_from\000", NULL,
    {.position = POS(79, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "79_35_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "79_40_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "84_1_new_read_descriptor_list\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "86_3_read_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(88, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(89, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(85, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "write_to\000", NULL,
    {.position = POS(98, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "98_34_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "99_1_job\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(102, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(103, 10)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "cancel_write_to\000", NULL,
    {.position = POS(108, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "join_process\000", NULL,
    {.position = POS(113, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_injecting_window_change_events\000", NULL,
    {.position = POS(117, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_injecting_window_change_events\000", NULL,
    {.position = POS(121, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_catching_signals\000", NULL,
    {.position = POS(125, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_catching_signals\000", NULL,
    {.position = POS(129, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(133, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "133_26_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(135, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(140, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "140_30_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(142, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "get_events\000", NULL,
    {.position = POS(147, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "149_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "150_0_timeout\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "156_1_want_to_write_to\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(160, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(157, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "172_1_can_read_from\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "173_1_can_write_to\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pselect\000", NULL,
    {.position = POS(170, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "176_1_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "177_1_write_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "179_3_signal\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGUSR1\000", NULL,
    {.position = POS(195, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGUSR2\000", NULL,
    {.position = POS(195, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(195, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CHILD_CHANGED_STATE\000", NULL,
    {.position = POS(181, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "182_7_pid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "182_12_status\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "wait\000", NULL,
    {.position = POS(182, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exitstatus\000", NULL,
    {.position = POS(183, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PROCESS_JOINED\000", NULL,
    {.position = POS(187, 53)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(187, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WINDOW_CHANGED_SIZE\000", NULL,
    {.position = POS(192, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGNAL\000", NULL,
    {.position = POS(198, 53)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(180, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "202_1_injected_into_stdin\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDIN_FILENO\000", NULL,
    {.position = POS(207, 44)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_terminal_size\000", NULL,
    {.position = POS(209, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(211, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ\000", NULL,
    {.position = POS(212, 49)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "220_3_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "221_1_job\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "222_8_bytes_written\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write\000", NULL,
    {.position = POS(222, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(224, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_ERROR\000", NULL,
    {.position = POS(228, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(234, 39)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(234, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(235, 36)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(235, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_PENDING\000", NULL,
    {.position = POS(237, 59)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_COMPLETED\000", NULL,
    {.position = POS(242, 48)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "246_3_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(247, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(247, 50)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "248_7_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read\000", NULL,
    {.position = POS(248, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ_ERROR\000", NULL,
    {.position = POS(251, 61)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(247, 21)}
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
  70, // number of constants
  115, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
