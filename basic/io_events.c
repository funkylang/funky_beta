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
  tuple_67_0 = -8,
  func_std_types__io___start_reading_from = -9,
  lambda_1 = -10,
  lambda_2 = -11,
  func_std_types__io___stop_reading_from = -12,
  lambda_3 = -13,
  lambda_4 = -14,
  lambda_5 = -15,
  lambda_6 = -16,
  lambda_7 = -17,
  func_std_types__io___write = -18,
  lambda_8 = -19,
  lambda_9 = -20,
  func_std_types__io___cancel_write = -21,
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
  var_std__cancel_write, // attribute
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
  var_69_36_self, // dynamic
  var_69_41_fd, // dynamic
  var_true, // extern
  var_push, // extern
  var_if, // extern
  var_stop_reading_from, // extern polymorphic
  var_78_35_self, // dynamic
  var_78_40_fd, // dynamic
  var_83_1_new_read_descriptor_list, // dynamic
  var_85_3_read_fd, // dynamic
  var_std__equal, // extern
  var_next, // extern
  var_for_each, // extern
  var_write, // extern polymorphic
  var_97_31_text, // dynamic
  var_98_1_job, // dynamic
  var_is_defined, // extern
  var_append, // extern
  var_cancel_write, // extern polymorphic
  var_join_process, // extern polymorphic
  var_start_injecting_window_change_events, // extern polymorphic
  var_stop_injecting_window_change_events, // extern polymorphic
  var_start_catching_signals, // extern polymorphic
  var_stop_catching_signals, // extern polymorphic
  var_is_empty, // extern polymorphic
  var_132_26_self, // dynamic
  var_std__and, // extern
  var_is_not_empty, // extern polymorphic
  var_139_30_self, // dynamic
  var_std__or, // extern
  var_get_events, // extern polymorphic
  var_148_0_self, // dynamic
  var_149_0_timeout, // dynamic
  var_155_1_want_to_write, // dynamic
  var_any_of, // extern
  var_update_if, // extern
  var_171_1_can_read, // dynamic
  var_172_1_can_write, // dynamic
  var_pselect, // extern
  var_175_1_events, // dynamic
  var_176_1_write_jobs, // dynamic
  var_178_3_signal, // dynamic
  var_SIGUSR1, // extern
  var_SIGUSR2, // extern
  var_std__sequence, // extern
  var_CHILD_CHANGED_STATE, // extern
  var_181_7_pid, // dynamic
  var_181_12_status, // dynamic
  var_wait, // extern
  var_exitstatus, // extern
  var_PROCESS_JOINED, // extern
  var_new, // extern
  var_WINDOW_CHANGED_SIZE, // extern
  var_SIGNAL, // extern
  var_case, // extern
  var_201_1_injected_into_stdin, // dynamic
  var_STDIN_FILENO, // extern
  var_get_terminal_size, // extern
  var_std__string, // extern
  var_READ, // extern
  var_219_3_fd, // dynamic
  var_220_1_job, // dynamic
  var_221_8_bytes_written, // dynamic
  var_is_an_error, // extern
  var_WRITE_ERROR, // extern
  var_length_of, // extern
  var_std__less, // extern
  var_std__plus, // extern
  var_range, // extern
  var_WRITE_PENDING, // extern
  var_WRITE_COMPLETED, // extern
  var_245_3_fd, // dynamic
  var_std__not, // extern
  var_not, // extern
  var_247_7_buf, // dynamic
  var_read, // extern
  var_READ_ERROR, // extern
  var_if_not, // extern
  var__END
};


static TAB_NUM t_func_std_types__io___start_reading_from[] = {
  2, // locals
  2, // parameters
  var_69_36_self,
  var_69_41_fd,
  // read_descriptor_set_of(self)(fd)
  var_read_descriptor_set_of, 1, var_69_36_self, 1, LOCAL(1),
  // read_descriptor_set_of(self)(fd)
  LOCAL(1), 1, var_69_41_fd, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1, lambda_2, TAIL_CALL,
  POS(71, 5),
  POS(71, 5),
  POS(70, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_69_36_self, TAIL_CALL,
  POS(72, 7)
};

static TAB_NUM t_lambda_2[] = {
  2, // locals
  0, // parameters
  // read_descriptor_set_of(fd) true
  var_read_descriptor_set_of, 1, var_69_36_self, 1, LOCAL(2),
  // read_descriptor_set_of(fd) true
  LOCAL(2), 2, var_69_41_fd, var_true, 1, LOCAL(2),
  // self.read_descriptor_set_of(fd) true
  LET, -1, var_69_36_self, var_read_descriptor_set_of, LOCAL(2), var_69_36_self,
  // read_descriptor_list_of fd
  var_read_descriptor_list_of, 1, var_69_36_self, 1, LOCAL(1),
  // push &self.read_descriptor_list_of fd
  var_push, 2, LOCAL(1), var_69_41_fd, 1, LOCAL(1),
  // self.read_descriptor_list_of fd
  LET, -1, var_69_36_self, var_read_descriptor_list_of, LOCAL(1), var_69_36_self,
  // -> self
  LET, 1, var_69_36_self, TAIL_CALL,
  POS(74, 13),
  POS(74, 13),
  POS(74, 8),
  POS(75, 18),
  POS(75, 7),
  POS(75, 13),
  POS(76, 7)
};

static TAB_NUM t_func_std_types__io___stop_reading_from[] = {
  2, // locals
  2, // parameters
  var_78_35_self,
  var_78_40_fd,
  // read_descriptor_set_of(self)(fd)
  var_read_descriptor_set_of, 1, var_78_35_self, 1, LOCAL(1),
  // read_descriptor_set_of(self)(fd)
  LOCAL(1), 1, var_78_40_fd, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_3, lambda_7, TAIL_CALL,
  POS(80, 5),
  POS(80, 5),
  POS(79, 3)
};

static TAB_NUM t_lambda_3[] = {
  2, // locals
  0, // parameters
  // read_descriptor_set_of(fd) false
  var_read_descriptor_set_of, 1, var_78_35_self, 1, LOCAL(2),
  // read_descriptor_set_of(fd) false
  LOCAL(2), 2, var_78_40_fd, var_false, 1, LOCAL(2),
  // self.read_descriptor_set_of(fd) false
  LET, -1, var_78_35_self, var_read_descriptor_set_of, LOCAL(2), var_78_35_self,
  // $new_read_descriptor_list empty_list
  LET, 1, var_empty_list, 1, var_83_1_new_read_descriptor_list,
  // read_descriptor_list_of(self)
  var_read_descriptor_list_of, 1, var_78_35_self, 1, LOCAL(1),
  // for_each read_descriptor_list_of(self)
  var_for_each, 3, LOCAL(1), lambda_4, lambda_6, TAIL_CALL,
  POS(82, 13),
  POS(82, 13),
  POS(82, 8),
  POS(83, 7),
  POS(84, 16),
  POS(84, 7)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  1, // parameters
  var_85_3_read_fd,
  // fd == read_fd
  var_std__equal, 2, var_78_40_fd, var_85_3_read_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_5, TAIL_CALL,
  POS(87, 13),
  POS(86, 11)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  // push &new_read_descriptor_list read_fd
  var_push, 2, var_83_1_new_read_descriptor_list, var_85_3_read_fd, 1, var_83_1_new_read_descriptor_list,
  // next
  var_next, 0, TAIL_CALL,
  POS(90, 15),
  POS(91, 15)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // self.read_descriptor_list_of new_read_descriptor_list
  LET, -1, var_78_35_self, var_read_descriptor_list_of, var_83_1_new_read_descriptor_list, var_78_35_self,
  // -> self
  LET, 1, var_78_35_self, TAIL_CALL,
  POS(93, 12),
  POS(94, 11)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_78_35_self, TAIL_CALL,
  POS(95, 7)
};

static TAB_NUM t_func_std_types__io___write[] = {
  4, // locals
  3, // parameters
  LOCAL(3), // 97_23_self
  LOCAL(4), // 97_28_fd
  var_97_31_text,
  // write_jobs_of(self)(fd)
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(1),
  // $job write_jobs_of(self)(fd)
  LOCAL(1), 1, LOCAL(4), 1, var_98_1_job,
  // is_defined
  var_is_defined, 1, var_98_1_job, 1, LOCAL(1),
  // !job
  var_if, 3, LOCAL(1), lambda_8, lambda_9, 1, var_98_1_job,
  // write_jobs_of(fd) job
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(2),
  // write_jobs_of(fd) job
  LOCAL(2), 2, LOCAL(4), var_98_1_job, 1, LOCAL(2),
  // self.write_jobs_of(fd) job
  LET, -1, LOCAL(3), var_write_jobs_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(98, 8),
  POS(98, 3),
  POS(101, 11),
  POS(99, 3),
  POS(104, 9),
  POS(104, 9),
  POS(104, 4),
  POS(105, 3)
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // append(job text)
  var_append, 2, var_98_1_job, var_97_31_text, 1, LOCAL(1),
  //  append(job text)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(102, 10),
  POS(102, 9)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_97_31_text, TAIL_CALL,
  POS(103, 9)
};

static TAB_NUM t_func_std_types__io___cancel_write[] = {
  5, // locals
  2, // parameters
  LOCAL(3), // 107_30_self
  LOCAL(4), // 107_35_fd
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
  POS(108, 19),
  POS(108, 3),
  POS(109, 9),
  POS(109, 9),
  POS(109, 4),
  POS(110, 3)
};

static TAB_NUM t_func_std_types__io___join_process[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 112_30_self
  LOCAL(4), // 112_35_pid
  // watched_pids_of(pid) true
  var_watched_pids_of, 1, LOCAL(3), 1, LOCAL(2),
  // watched_pids_of(pid) true
  LOCAL(2), 2, LOCAL(4), var_true, 1, LOCAL(2),
  // self.watched_pids_of(pid) true
  LET, -1, LOCAL(3), var_watched_pids_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(113, 9),
  POS(113, 9),
  POS(113, 4),
  POS(114, 3)
};

static TAB_NUM t_func_std_types__io___start_injecting_window_change_events[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 116_54_self
  // self.do_inject_window_change_events true
  LET, -1, LOCAL(1), var_do_inject_window_change_events, var_true, LOCAL(1),
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(117, 4),
  POS(118, 3)
};

static TAB_NUM t_func_std_types__io___stop_injecting_window_change_events[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 120_53_self
  // self.do_inject_window_change_events false
  LET, -1, LOCAL(1), var_do_inject_window_change_events, var_false, LOCAL(1),
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(121, 4),
  POS(122, 3)
};

static TAB_NUM t_func_std_types__io___start_catching_signals[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 124_40_self
  // self.do_catch_signals true
  LET, -1, LOCAL(1), var_do_catch_signals, var_true, LOCAL(1),
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(125, 4),
  POS(126, 3)
};

static TAB_NUM t_func_std_types__io___stop_catching_signals[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 128_39_self
  // self.do_catch_signals false
  LET, -1, LOCAL(1), var_do_catch_signals, var_false, LOCAL(1),
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(129, 4),
  POS(130, 3)
};

static TAB_NUM t_func_std_types__io___is_empty[] = {
  3, // locals
  1, // parameters
  var_132_26_self,
  // read_descriptor_list_of(self).is_empty
  var_read_descriptor_list_of, 1, var_132_26_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_10, 1, LOCAL(3),
  // ->
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(135, 7),
  POS(135, 37),
  POS(134, 7),
  POS(133, 3)
};

static TAB_NUM t_lambda_10[] = {
  3, // locals
  0, // parameters
  // write_jobs_of(self).is_empty
  var_write_jobs_of, 1, var_132_26_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_11, 1, LOCAL(3),
  // write_jobs_of(self).is_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(136, 7),
  POS(136, 27),
  POS(134, 7),
  POS(136, 7)
};

static TAB_NUM t_lambda_11[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(self).is_empty
  var_watched_pids_of, 1, var_132_26_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // watched_pids_of(self).is_empty
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(137, 7),
  POS(137, 29),
  POS(137, 7)
};

static TAB_NUM t_func_std_types__io___is_not_empty[] = {
  3, // locals
  1, // parameters
  var_139_30_self,
  // read_descriptor_list_of(self).is_not_empty
  var_read_descriptor_list_of, 1, var_139_30_self, 1, LOCAL(1),
  // is_not_empty
  var_is_not_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__or, 2, LOCAL(2), lambda_12, 1, LOCAL(3),
  // ->
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(142, 7),
  POS(142, 37),
  POS(141, 7),
  POS(140, 3)
};

static TAB_NUM t_lambda_12[] = {
  3, // locals
  0, // parameters
  // write_jobs_of(self).is_not_empty
  var_write_jobs_of, 1, var_139_30_self, 1, LOCAL(1),
  // is_not_empty
  var_is_not_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__or, 2, LOCAL(2), lambda_13, 1, LOCAL(3),
  // write_jobs_of(self).is_not_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(143, 7),
  POS(143, 27),
  POS(141, 7),
  POS(143, 7)
};

static TAB_NUM t_lambda_13[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(self).is_not_empty
  var_watched_pids_of, 1, var_139_30_self, 1, LOCAL(1),
  // is_not_empty
  var_is_not_empty, 1, LOCAL(1), 1, LOCAL(2),
  // watched_pids_of(self).is_not_empty
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(144, 7),
  POS(144, 29),
  POS(144, 7)
};

static TAB_NUM t_func_std_types__io___get_events[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_148_0_self,
  var_undefined, var_149_0_timeout,
  // $want_to_write empty_list
  LET, 1, var_empty_list, 1, var_155_1_want_to_write,
  // is_defined
  var_is_defined, 1, var_149_0_timeout, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_14, 1, LOCAL(2),
  // update_if # do not wait if an exit code is pending
  var_update_if, 3, LOCAL(2), var_149_0_timeout, lambda_15, 1, var_149_0_timeout,
  // write_jobs_of(self)
  var_write_jobs_of, 1, var_148_0_self, 1, LOCAL(1),
  // for_each write_jobs_of(self)
  var_for_each, 3, LOCAL(1), lambda_16, lambda_17, IO_TAIL_CALL,
  POS(155, 3),
  POS(158, 15),
  POS(157, 7),
  POS(156, 3),
  POS(164, 12),
  POS(164, 3)
};

static TAB_NUM t_lambda_14[] = {
  2, // locals
  0, // parameters
  // exit_codes_of(self): (pid _exit_code)
  var_exit_codes_of, 1, var_148_0_self, 1, LOCAL(1),
  // any_of
  var_any_of, 2, LOCAL(1), lambda_exit_codes_ofself, 1, LOCAL(2),
  // any_of
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(160, 9),
  POS(159, 7),
  POS(159, 7)
};

static TAB_NUM t_lambda_exit_codes_ofself[] = {
  3, // locals
  2, // parameters
  LOCAL(3), // 160_22_pid
  LOCAL(1),
  // watched_pids_of(self)(pid)
  var_watched_pids_of, 1, var_148_0_self, 1, LOCAL(1),
  // watched_pids_of(self)(pid)
  LOCAL(1), 1, LOCAL(3), 1, LOCAL(2),
  // -> watched_pids_of(self)(pid)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(161, 14),
  POS(161, 14),
  POS(161, 11)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(163, 7)
};

static TAB_NUM t_lambda_16[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 165_3_fd
  LOCAL(1),
  // push &want_to_write fd
  var_push, 2, var_155_1_want_to_write, LOCAL(2), 1, var_155_1_want_to_write,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(166, 7),
  POS(167, 7)
};

static TAB_NUM t_lambda_17[] = {
  3, // locals
  0, // parameters
  // read_descriptor_list_of(self)
  var_read_descriptor_list_of, 1, var_148_0_self, 1, LOCAL(1),
  // pselect!
  var_pselect, 4, LOCAL(1), var_155_1_want_to_write, var_empty_list, var_149_0_timeout, IO_CALL(4), LOCAL(3), var_171_1_can_read, var_172_1_can_write, LOCAL(2),
  // $events empty_list
  LET, 1, var_empty_list, 1, var_175_1_events,
  // $write_jobs write_jobs_of(self)
  var_write_jobs_of, 1, var_148_0_self, 1, var_176_1_write_jobs,
  // for_each signals
  var_for_each, 3, LOCAL(3), lambda_18, lambda_21, IO_TAIL_CALL,
  POS(171, 19),
  POS(169, 7),
  POS(175, 7),
  POS(176, 7),
  POS(177, 7)
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  1, // parameters
  var_178_3_signal,
  // SIGUSR1, SIGUSR2:
  var_std__sequence, 2, var_SIGUSR1, var_SIGUSR2, 1, LOCAL(1),
  // case signal
  var_case, 7, var_178_3_signal, var_CHILD_CHANGED_STATE, lambda_CHILD_CHANGED_STATE, var_WINDOW_CHANGED_SIZE, lambda_WINDOW_CHANGED_SIZE, LOCAL(1), lambda_20, IO_TAIL_CALL,
  POS(194, 13),
  POS(179, 11)
};

static TAB_NUM t_lambda_CHILD_CHANGED_STATE[] = {
  2, // locals
  0, // parameters
  // wait! $pid $status
  var_wait, 0, IO_CALL(2), var_181_7_pid, var_181_12_status,
  // exitstatus &status
  var_exitstatus, 1, var_181_12_status, 1, var_181_12_status,
  // watched_pids_of(self)(pid):
  var_watched_pids_of, 1, var_148_0_self, 1, LOCAL(1),
  // watched_pids_of(self)(pid):
  LOCAL(1), 1, var_181_7_pid, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_watched_pids_ofselfpid, lambda_19, IO_TAIL_CALL,
  POS(181, 15),
  POS(182, 15),
  POS(184, 17),
  POS(184, 17),
  POS(183, 15)
};

static TAB_NUM t_lambda_watched_pids_ofselfpid[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(pid) false
  var_watched_pids_of, 1, var_148_0_self, 1, LOCAL(2),
  // watched_pids_of(pid) false
  LOCAL(2), 2, var_181_7_pid, var_false, 1, LOCAL(2),
  // self.watched_pids_of(pid) false
  LET, -1, var_148_0_self, var_watched_pids_of, LOCAL(2), var_148_0_self,
  // new(std_types::event PROCESS_JOINED pid status)
  var_new, 4, var_std_types__event, var_PROCESS_JOINED, var_181_7_pid, var_181_12_status, 1, LOCAL(1),
  // push &events new(std_types::event PROCESS_JOINED pid status)
  var_push, 2, var_175_1_events, LOCAL(1), 1, var_175_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(185, 25),
  POS(185, 25),
  POS(185, 20),
  POS(186, 32),
  POS(186, 19),
  POS(187, 19)
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  0, // parameters
  // exit_codes_of(pid) status
  var_exit_codes_of, 1, var_148_0_self, 1, LOCAL(2),
  // exit_codes_of(pid) status
  LOCAL(2), 2, var_181_7_pid, var_181_12_status, 1, LOCAL(2),
  // self.exit_codes_of(pid) status
  LET, -1, var_148_0_self, var_exit_codes_of, LOCAL(2), var_148_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(189, 25),
  POS(189, 25),
  POS(189, 20),
  POS(190, 19)
};

static TAB_NUM t_lambda_WINDOW_CHANGED_SIZE[] = {
  0, // locals
  0, // parameters
  // self.window_change_event_occurred true
  LET, -1, var_148_0_self, var_window_change_event_occurred, var_true, var_148_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(192, 16),
  POS(193, 15)
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // do_catch_signals:
  var_do_catch_signals, 1, var_148_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_self_do_catch_signals, var_next, IO_TAIL_CALL,
  POS(196, 22),
  POS(195, 15)
};

static TAB_NUM t_lambda_self_do_catch_signals[] = {
  1, // locals
  0, // parameters
  // new(std_types::event SIGNAL undefined signal)
  var_new, 4, var_std_types__event, var_SIGNAL, var_undefined, var_178_3_signal, 1, LOCAL(1),
  // push &events new(std_types::event SIGNAL undefined signal)
  var_push, 2, var_175_1_events, LOCAL(1), 1, var_175_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(197, 32),
  POS(197, 19),
  POS(198, 19)
};

static TAB_NUM t_lambda_21[] = {
  2, // locals
  0, // parameters
  // $injected_into_stdin false
  LET, 1, var_false, 1, var_201_1_injected_into_stdin,
  // window_change_event_occurred
  var_window_change_event_occurred, 1, var_148_0_self, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_22, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_24, lambda_25, IO_TAIL_CALL,
  POS(201, 11),
  POS(204, 20),
  POS(203, 15),
  POS(202, 11)
};

static TAB_NUM t_lambda_22[] = {
  2, // locals
  0, // parameters
  // do_inject_window_change_events
  var_do_inject_window_change_events, 1, var_148_0_self, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_23, 1, LOCAL(2),
  // self.do_inject_window_change_events
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(205, 20),
  POS(203, 15),
  POS(205, 15)
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  0, // parameters
  // read_descriptor_set_of(self)(STDIN_FILENO)
  var_read_descriptor_set_of, 1, var_148_0_self, 1, LOCAL(1),
  // read_descriptor_set_of(self)(STDIN_FILENO)
  LOCAL(1), 1, var_STDIN_FILENO, 1, LOCAL(2),
  // read_descriptor_set_of(self)(STDIN_FILENO)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(206, 15),
  POS(206, 15),
  POS(206, 15)
};

static TAB_NUM t_lambda_24[] = {
  4, // locals
  0, // parameters
  // get_terminal_size! STDIN_FILENO $width $height
  var_get_terminal_size, 1, var_STDIN_FILENO, IO_CALL(2), LOCAL(2), LOCAL(3),
  // self.window_change_event_occurred false
  LET, -1, var_148_0_self, var_window_change_event_occurred, var_false, var_148_0_self,
  // $buf "@esc;[8;@(height);@(width)t"
  var_std__string, 5, string_1, LOCAL(3), string_2, LOCAL(2), str_t, 1, LOCAL(4),
  // new(std_types::event READ STDIN_FILENO buf)
  var_new, 4, var_std_types__event, var_READ, var_STDIN_FILENO, LOCAL(4), 1, LOCAL(1),
  // push &events new(std_types::event READ STDIN_FILENO buf)
  var_push, 2, var_175_1_events, LOCAL(1), 1, var_175_1_events,
  // !injected_into_stdin true
  LET, 1, var_true, 1, var_201_1_injected_into_stdin,
  // check_file_descriptors!
  func_check_file_descriptors, 0, IO_TAIL_CALL,
  POS(208, 15),
  POS(209, 16),
  POS(210, 15),
  POS(211, 28),
  POS(211, 15),
  POS(212, 15),
  POS(213, 15)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  // check_file_descriptors!
  func_check_file_descriptors, 0, IO_TAIL_CALL,
  POS(215, 15)
};

static TAB_NUM t_func_check_file_descriptors[] = {
  0, // locals
  0, // parameters
  // for_each can_write
  var_for_each, 3, var_172_1_can_write, lambda_26, lambda_30, IO_TAIL_CALL,
  POS(218, 13)
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  1, // parameters
  var_219_3_fd,
  // $job write_jobs(fd)
  var_176_1_write_jobs, 1, var_219_3_fd, 1, var_220_1_job,
  // write! $bytes_written fd job
  var_write, 2, var_219_3_fd, var_220_1_job, IO_CALL(1), var_221_8_bytes_written,
  // is_an_error:
  var_is_an_error, 1, var_221_8_bytes_written, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_bytes_written_is_an_error, lambda_27, IO_TAIL_CALL,
  POS(220, 17),
  POS(221, 17),
  POS(223, 33),
  POS(222, 17)
};

static TAB_NUM t_lambda_bytes_written_is_an_error[] = {
  2, // locals
  0, // parameters
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, var_148_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, var_219_3_fd, var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, var_148_0_self, var_write_jobs_of, LOCAL(2), var_148_0_self,
  // tuple(bytes_written job)
  var_tuple, 2, var_221_8_bytes_written, var_220_1_job, 1, LOCAL(1),
  // new
  var_new, 4, var_std_types__event, var_WRITE_ERROR, var_219_3_fd, LOCAL(1), 1, LOCAL(2),
  // push &events
  var_push, 2, var_175_1_events, LOCAL(2), 1, var_175_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(224, 27),
  POS(224, 27),
  POS(224, 22),
  POS(229, 25),
  POS(226, 23),
  POS(225, 21),
  POS(230, 21)
};

static TAB_NUM t_lambda_27[] = {
  2, // locals
  0, // parameters
  // length_of(job):
  var_length_of, 1, var_220_1_job, 1, LOCAL(1),
  // bytes_written < length_of(job):
  var_std__less, 2, var_221_8_bytes_written, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_28, lambda_29, IO_TAIL_CALL,
  POS(233, 39),
  POS(233, 23),
  POS(232, 21)
};

static TAB_NUM t_lambda_28[] = {
  2, // locals
  0, // parameters
  // bytes_written+1 -1
  var_std__plus, 2, var_221_8_bytes_written, num_1, 1, LOCAL(1),
  // range &job bytes_written+1 -1
  var_range, 3, var_220_1_job, LOCAL(1), minus_num_1, 1, var_220_1_job,
  // write_jobs_of(fd) job # remaining text to write
  var_write_jobs_of, 1, var_148_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) job # remaining text to write
  LOCAL(2), 2, var_219_3_fd, var_220_1_job, 1, LOCAL(2),
  // self.write_jobs_of(fd) job # remaining text to write
  LET, -1, var_148_0_self, var_write_jobs_of, LOCAL(2), var_148_0_self,
  // new(std_types::event WRITE_PENDING fd job)
  var_new, 4, var_std_types__event, var_WRITE_PENDING, var_219_3_fd, var_220_1_job, 1, LOCAL(1),
  // push &events new(std_types::event WRITE_PENDING fd job)
  var_push, 2, var_175_1_events, LOCAL(1), 1, var_175_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(234, 36),
  POS(234, 25),
  POS(235, 31),
  POS(235, 31),
  POS(235, 26),
  POS(236, 38),
  POS(236, 25),
  POS(237, 25)
};

static TAB_NUM t_lambda_29[] = {
  2, // locals
  0, // parameters
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, var_148_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, var_219_3_fd, var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, var_148_0_self, var_write_jobs_of, LOCAL(2), var_148_0_self,
  // new(std_types::event WRITE_COMPLETED fd undefined)
  var_new, 4, var_std_types__event, var_WRITE_COMPLETED, var_219_3_fd, var_undefined, 1, LOCAL(1),
  // push &events
  var_push, 2, var_175_1_events, LOCAL(1), 1, var_175_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(239, 31),
  POS(239, 31),
  POS(239, 26),
  POS(241, 27),
  POS(240, 25),
  POS(242, 25)
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  // for_each can_read
  var_for_each, 3, var_171_1_can_read, lambda_31, lambda_35, IO_TAIL_CALL,
  POS(244, 17)
};

static TAB_NUM t_lambda_31[] = {
  3, // locals
  1, // parameters
  var_245_3_fd,
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__equal, 2, var_245_3_fd, var_STDIN_FILENO, 1, LOCAL(1),
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__or, 2, LOCAL(2), lambda_32, 1, LOCAL(3),
  // if_not fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_if_not, 3, LOCAL(3), var_next, lambda_33, IO_TAIL_CALL,
  POS(246, 28),
  POS(246, 28),
  POS(246, 28),
  POS(246, 21)
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // not(injected_into_stdin) next:
  var_not, 1, var_201_1_injected_into_stdin, 1, LOCAL(1),
  // not(injected_into_stdin) next:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(246, 50),
  POS(246, 50)
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // read! $buf fd 0x10000
  var_read, 2, var_245_3_fd, num_65536, IO_CALL(1), var_247_7_buf,
  // is_an_error:
  var_is_an_error, 1, var_247_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_an_error, lambda_34, IO_TAIL_CALL,
  POS(247, 23),
  POS(249, 29),
  POS(248, 23)
};

static TAB_NUM t_lambda_buf_is_an_error[] = {
  1, // locals
  0, // parameters
  // new(std_types::event READ_ERROR fd buf)
  var_new, 4, var_std_types__event, var_READ_ERROR, var_245_3_fd, var_247_7_buf, 1, LOCAL(1),
  // push &events new(std_types::event READ_ERROR fd buf)
  var_push, 2, var_175_1_events, LOCAL(1), 1, var_175_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(250, 40),
  POS(250, 27),
  POS(251, 27)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // new(std_types::event READ fd buf)
  var_new, 4, var_std_types__event, var_READ, var_245_3_fd, var_247_7_buf, 1, LOCAL(1),
  // push &events new(std_types::event READ fd buf)
  var_push, 2, var_175_1_events, LOCAL(1), 1, var_175_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(253, 40),
  POS(253, 27),
  POS(254, 27)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  //  self events
  LET, 2, var_148_0_self, var_175_1_events, TAIL_CALL,
  POS(255, 21)
};

static int tuple_67_0_arguments[] = {
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
  {FLT_TUPLE, 3, {.arguments = tuple_67_0_arguments}},
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
  {var_write, -func_std_types__io___write},
  {var_cancel_write, -func_std_types__io___cancel_write},
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
    {.position = POS(58, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(59, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_set\000", NULL,
    {.position = POS(60, 39)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(61, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(64, 47)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "event\000std_types", NULL,
    {.const_idx = -tuple_67_0}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(67, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(67, 19)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_reading_from\000", NULL,
    {.position = POS(69, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "69_36_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "69_41_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(74, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(75, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(70, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_reading_from\000", NULL,
    {.position = POS(78, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "78_35_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "78_40_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "83_1_new_read_descriptor_list\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "85_3_read_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(87, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(88, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(84, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "write\000", NULL,
    {.position = POS(97, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "97_31_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "98_1_job\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(101, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(102, 10)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "cancel_write\000", NULL,
    {.position = POS(107, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "join_process\000", NULL,
    {.position = POS(112, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_injecting_window_change_events\000", NULL,
    {.position = POS(116, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_injecting_window_change_events\000", NULL,
    {.position = POS(120, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_catching_signals\000", NULL,
    {.position = POS(124, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_catching_signals\000", NULL,
    {.position = POS(128, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(132, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "132_26_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(134, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(139, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "139_30_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(141, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "get_events\000", NULL,
    {.position = POS(146, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "148_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "149_0_timeout\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "155_1_want_to_write\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(159, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(156, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "171_1_can_read\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "172_1_can_write\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pselect\000", NULL,
    {.position = POS(169, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "175_1_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "176_1_write_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "178_3_signal\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGUSR1\000", NULL,
    {.position = POS(194, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGUSR2\000", NULL,
    {.position = POS(194, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(194, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CHILD_CHANGED_STATE\000", NULL,
    {.position = POS(180, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "181_7_pid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "181_12_status\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "wait\000", NULL,
    {.position = POS(181, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exitstatus\000", NULL,
    {.position = POS(182, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PROCESS_JOINED\000", NULL,
    {.position = POS(186, 53)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(186, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WINDOW_CHANGED_SIZE\000", NULL,
    {.position = POS(191, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGNAL\000", NULL,
    {.position = POS(197, 53)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(179, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "201_1_injected_into_stdin\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDIN_FILENO\000", NULL,
    {.position = POS(206, 44)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_terminal_size\000", NULL,
    {.position = POS(208, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(210, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ\000", NULL,
    {.position = POS(211, 49)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "219_3_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "220_1_job\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "221_8_bytes_written\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(223, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_ERROR\000", NULL,
    {.position = POS(227, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(233, 39)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(233, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(234, 36)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(234, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_PENDING\000", NULL,
    {.position = POS(236, 59)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_COMPLETED\000", NULL,
    {.position = POS(241, 48)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "245_3_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(246, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(246, 50)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "247_7_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read\000", NULL,
    {.position = POS(247, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ_ERROR\000", NULL,
    {.position = POS(250, 61)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(246, 21)}
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
  113, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
