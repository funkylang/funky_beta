#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  num_0 = -1,
  func_std_types__io___schedule = -2,
  lambda_1 = -3,
  num_2 = -4,
  lambda_2 = -5,
  lambda_3 = -6,
  func_std_types__io___cancel = -7,
  lambda_4 = -8,
  lambda_5 = -9,
  num_1 = -10,
  minus_num_1 = -11,
  lambda_6 = -12,
  func_std_types__io___handle_jobs = -13,
  lambda_7 = -14,
  lambda_8 = -15,
  lambda_9 = -16,
  lambda_data_is_defined = -17,
  lambda_10 = -18,
  lambda_11 = -19,
  func_insert = -20,
  lambda_12 = -21,
  lambda_13 = -22,
  lambda_14 = -23,
  lambda_15 = -24,
  lambda_16 = -25,
  lambda_17 = -26,
  lambda_18 = -27,
  func_split = -28,
  lambda_loop = -29,
  lambda_19 = -30,
  lambda_20 = -31,
  lambda_21 = -32,
  lambda_22 = -33
};

enum {
  var__START = FIRST_VAR-1,
  var_std__schedule, // attribute
  var_std__assign, // extern
  var_std__cancel, // attribute
  var_std__handle_jobs, // attribute
  var_jobs_of, // attribute
  var_job_no_of, // attribute
  var_std_types__io, // extern
  var_empty_list, // extern
  var_schedule, // extern polymorphic
  var_37_5_io, // dynamic
  var_38_5_time, // dynamic
  var_undefined, // extern
  var_result_count, // extern
  var_is_a_number, // extern
  var_current_time_of, // extern
  var_std__plus, // extern
  var_update_if, // extern
  var_45_4_job_no, // dynamic
  var_inc, // extern
  var_tuple, // extern
  var_set_timeout, // extern
  var_std__equal, // extern
  var_if, // extern
  var_cancel, // extern polymorphic
  var_59_5_io, // dynamic
  var_60_5_job_no, // dynamic
  var_62_4_jobs, // dynamic
  var_64_8_idx, // dynamic
  var_std__minus, // extern
  var_range, // extern
  var_append, // extern
  var_next, // extern
  var_for_each, // extern
  var_handle_jobs, // extern polymorphic
  var_75_5_io, // dynamic
  var_77_42_now_jobs, // dynamic
  var_77_52_remaining_jobs, // dynamic
  var_87_28_function, // dynamic
  var_87_38_data, // dynamic
  var_is_defined, // extern
  var_97_11_jobs, // dynamic
  var_97_16_job, // dynamic
  var_is_empty, // extern
  var_list, // extern
  var_102_12_time, // dynamic
  var_std__less, // extern
  var_std__not, // extern
  var_push, // extern
  var_length_of, // extern
  var_110_16_idx, // dynamic
  var_put, // extern
  var_from_to_by, // extern
  var_120_10_jobs, // dynamic
  var_120_15_time, // dynamic
  var_124_4_s, // dynamic
  var_126_4_e, // dynamic
  var_132_10_m, // dynamic
  var_div, // extern
  var_loop, // extern
  var__END
};


static TAB_NUM t_func_std_types__io___schedule[] = {
  5, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_37_5_io,
  MANDATORY_PARAMETER, var_38_5_time,
  MANDATORY_PARAMETER, LOCAL(2), // 39_5_function
  var_undefined, LOCAL(3), // 40_5_data
  // $rc result_count()
  var_result_count, 0, 1, LOCAL(4),
  // is_a_number &time -> current_time_of(io)+time
  var_is_a_number, 1, var_38_5_time, 1, LOCAL(1),
  // update_if time.is_a_number &time -> current_time_of(io)+time
  var_update_if, 3, LOCAL(1), var_38_5_time, lambda_1, 1, var_38_5_time,
  // $jobs jobs_of(io)
  var_jobs_of, 1, var_37_5_io, 1, LOCAL(5),
  // $job_no job_no_of(io)
  var_job_no_of, 1, var_37_5_io, 1, var_45_4_job_no,
  // inc &job_no
  var_inc, 1, var_45_4_job_no, 1, var_45_4_job_no,
  // io.job_no_of job_no
  LET, -1, var_37_5_io, var_job_no_of, var_45_4_job_no, var_37_5_io,
  // tuple(time job_no function data)
  var_tuple, 4, var_38_5_time, var_45_4_job_no, LOCAL(2), LOCAL(3), 1, LOCAL(1),
  // insert &jobs tuple(time job_no function data)
  func_insert, 2, LOCAL(5), LOCAL(1), 1, LOCAL(5),
  // io.job_no_of job_no
  LET, -1, var_37_5_io, var_job_no_of, var_45_4_job_no, var_37_5_io,
  // io.jobs_of jobs
  LET, -1, var_37_5_io, var_jobs_of, LOCAL(5), var_37_5_io,
  // set_timeout &io time
  var_set_timeout, 2, var_37_5_io, var_38_5_time, 1, var_37_5_io,
  // rc == 2
  var_std__equal, 2, LOCAL(4), num_2, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2, lambda_3, TAIL_CALL,
  POS(42, 3),
  POS(43, 18),
  POS(43, 3),
  POS(44, 3),
  POS(45, 3),
  POS(46, 3),
  POS(47, 4),
  POS(48, 16),
  POS(48, 3),
  POS(49, 4),
  POS(50, 4),
  POS(51, 3),
  POS(53, 5),
  POS(52, 3),
  LOCAL(3),
  LOCAL(4),
  LOCAL(2),
  LOCAL(5)
};

static FUNCTION_INFO i_func_std_types__io___schedule = {
  t_func_std_types__io___schedule, NULL, 14, 4,
  {"40_5_data\000", "42_4_rc\000", "39_5_function\000", "44_4_jobs\000"}
};

static TAB_NUM t_lambda_1[] = {
  2, // locals
  0, // parameters
  // current_time_of(io)+time
  var_current_time_of, 1, var_37_5_io, 1, LOCAL(1),
  // current_time_of(io)+time
  var_std__plus, 2, LOCAL(1), var_38_5_time, 1, LOCAL(2),
  //  current_time_of(io)+time
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(43, 39),
  POS(43, 39),
  POS(43, 38)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  io job_no
  LET, 2, var_37_5_io, var_45_4_job_no, TAIL_CALL,
  POS(54, 7)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_37_5_io, TAIL_CALL,
  POS(55, 7)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__io___cancel[] = {
  0, // locals
  2, // parameters
  var_59_5_io,
  var_60_5_job_no,
  // $jobs jobs_of(io)
  var_jobs_of, 1, var_59_5_io, 1, var_62_4_jobs,
  // for_each jobs
  var_for_each, 3, var_62_4_jobs, lambda_4, lambda_6, TAIL_CALL,
  POS(62, 3),
  POS(63, 3)
};

static FUNCTION_INFO i_func_std_types__io___cancel = {
  t_func_std_types__io___cancel, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  3, // locals
  2, // parameters
  var_64_8_idx,
  LOCAL(2), // 64_12_job
  // job $_time $no
  LOCAL(2), 0, 2, LOCAL(1), LOCAL(3),
  // no == job_no:
  var_std__equal, 2, LOCAL(3), var_60_5_job_no, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_5, var_next, TAIL_CALL,
  POS(65, 7),
  POS(67, 9),
  POS(66, 7),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 3, 2,
  {"65_19_no\000", "64_12_job\000"}
};

static TAB_NUM t_lambda_5[] = {
  6, // locals
  0, // parameters
  // idx-1) range(jobs idx+1 -1))
  var_std__minus, 2, var_64_8_idx, num_1, 1, LOCAL(1),
  // range(jobs 1 idx-1) range(jobs idx+1 -1))
  var_range, 3, var_62_4_jobs, num_1, LOCAL(1), 1, LOCAL(2),
  // idx+1 -1))
  var_std__plus, 2, var_64_8_idx, num_1, 1, LOCAL(3),
  // range(jobs idx+1 -1))
  var_range, 3, var_62_4_jobs, LOCAL(3), minus_num_1, 1, LOCAL(4),
  // !io.jobs_of append(range(jobs 1 idx-1) range(jobs idx+1 -1))
  var_append, 2, LOCAL(2), LOCAL(4), 1, LOCAL(6),
  // io.jobs_of append(range(jobs 1 idx-1) range(jobs idx+1 -1))
  LET, -1, var_59_5_io, var_jobs_of, LOCAL(6), var_59_5_io,
  // -> io
  LET, 1, var_59_5_io, TAIL_CALL,
  POS(68, 43),
  POS(68, 30),
  POS(68, 61),
  POS(68, 50),
  POS(68, 11),
  POS(68, 12),
  POS(69, 11)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_59_5_io, TAIL_CALL,
  POS(71, 7)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__io___handle_jobs[] = {
  2, // locals
  1, // parameters
  var_75_5_io,
  // jobs_of(io) current_time_of(io) $now_jobs $remaining_jobs
  var_jobs_of, 1, var_75_5_io, 1, LOCAL(1),
  // current_time_of(io) $now_jobs $remaining_jobs
  var_current_time_of, 1, var_75_5_io, 1, LOCAL(2),
  // split jobs_of(io) current_time_of(io) $now_jobs $remaining_jobs
  func_split, 2, LOCAL(1), LOCAL(2), 2, var_77_42_now_jobs, var_77_52_remaining_jobs,
  // for_each remaining_jobs
  var_for_each, 3, var_77_52_remaining_jobs, lambda_7, lambda_8, TAIL_CALL,
  POS(77, 9),
  POS(77, 21),
  POS(77, 3),
  POS(78, 3)
};

static FUNCTION_INFO i_func_std_types__io___handle_jobs = {
  t_func_std_types__io___handle_jobs, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 79_8_job
  // job $time
  LOCAL(1), 0, 1, LOCAL(2),
  // set_timeout &io time
  var_set_timeout, 2, var_75_5_io, LOCAL(2), 1, var_75_5_io,
  // next
  var_next, 0, TAIL_CALL,
  POS(80, 7),
  POS(81, 7),
  POS(82, 7),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 3, 2,
  {"79_8_job\000", "80_12_time\000"}
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  // io.jobs_of remaining_jobs
  LET, -1, var_75_5_io, var_jobs_of, var_77_52_remaining_jobs, var_75_5_io,
  // for_each now_jobs
  var_for_each, 3, var_77_42_now_jobs, lambda_9, lambda_11, TAIL_CALL,
  POS(84, 8),
  POS(85, 7)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 86_12_job
  // job $_time $_no $function $data
  LOCAL(2), 0, 4, LOCAL(1), LOCAL(1), var_87_28_function, var_87_38_data,
  // is_defined:
  var_is_defined, 1, var_87_38_data, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_data_is_defined, lambda_10, TAIL_CALL,
  POS(87, 11),
  POS(89, 18),
  POS(88, 11),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 3, 1,
  {"86_12_job\000"}
};

static TAB_NUM t_lambda_data_is_defined[] = {
  0, // locals
  0, // parameters
  // function &io data
  var_87_28_function, 2, var_75_5_io, var_87_38_data, 1, var_75_5_io,
  // next
  var_next, 0, TAIL_CALL,
  POS(90, 15),
  POS(91, 15)
};

static FUNCTION_INFO i_lambda_data_is_defined = {
  t_lambda_data_is_defined, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  // function &io
  var_87_28_function, 1, var_75_5_io, 1, var_75_5_io,
  // next
  var_next, 0, TAIL_CALL,
  POS(93, 15),
  POS(94, 15)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_75_5_io, TAIL_CALL,
  POS(95, 11)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_insert[] = {
  1, // locals
  2, // parameters
  var_97_11_jobs,
  var_97_16_job,
  // is_empty
  var_is_empty, 1, var_97_11_jobs, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12, lambda_13, TAIL_CALL,
  POS(99, 10),
  POS(98, 3)
};

static FUNCTION_INFO i_func_insert = {
  t_func_insert, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // list(job)
  var_list, 1, var_97_16_job, 1, LOCAL(1),
  //  list(job)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(100, 8),
  POS(100, 7)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  4, // locals
  0, // parameters
  // job $time
  var_97_16_job, 0, 1, var_102_12_time,
  // $last_job jobs(-1)
  var_97_11_jobs, 1, minus_num_1, 1, LOCAL(3),
  // last_job $last_time
  LOCAL(3), 0, 1, LOCAL(4),
  // time >= last_time # an optimization for the common case
  var_std__less, 2, var_102_12_time, LOCAL(4), 1, LOCAL(1),
  // time >= last_time # an optimization for the common case
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_14, lambda_15, TAIL_CALL,
  POS(102, 7),
  POS(103, 7),
  POS(104, 7),
  POS(106, 9),
  POS(106, 9),
  POS(105, 7),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 6, 2,
  {"104_17_last_time\000", "103_8_last_job\000"}
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  0, // parameters
  // push(jobs job)
  var_push, 2, var_97_11_jobs, var_97_16_job, 1, LOCAL(1),
  //  push(jobs job)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(107, 12),
  POS(107, 11)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // length_of(jobs)-1 1 -1
  var_length_of, 1, var_97_11_jobs, 1, LOCAL(1),
  // length_of(jobs)-1 1 -1
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // from_to_by length_of(jobs)-1 1 -1
  var_from_to_by, 5, LOCAL(2), num_1, minus_num_1, lambda_16, lambda_18, TAIL_CALL,
  POS(109, 22),
  POS(109, 22),
  POS(109, 11)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  3, // locals
  1, // parameters
  var_110_16_idx,
  // jobs(idx) $idx_time
  var_97_11_jobs, 1, var_110_16_idx, 1, LOCAL(1),
  // jobs(idx) $idx_time
  LOCAL(1), 0, 1, LOCAL(3),
  // time >= idx_time:
  var_std__less, 2, var_102_12_time, LOCAL(3), 1, LOCAL(1),
  // time >= idx_time:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_17, var_next, TAIL_CALL,
  POS(111, 15),
  POS(111, 15),
  POS(113, 17),
  POS(113, 17),
  POS(112, 15),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 5, 1,
  {"111_26_idx_time\000"}
};

static TAB_NUM t_lambda_17[] = {
  4, // locals
  0, // parameters
  // range(jobs 1 idx) job)
  var_range, 3, var_97_11_jobs, num_1, var_110_16_idx, 1, LOCAL(1),
  // push(range(jobs 1 idx) job)
  var_push, 2, LOCAL(1), var_97_16_job, 1, LOCAL(2),
  // idx+1 -1)
  var_std__plus, 2, var_110_16_idx, num_1, 1, LOCAL(3),
  // range(jobs idx+1 -1)
  var_range, 3, var_97_11_jobs, LOCAL(3), minus_num_1, 1, LOCAL(4),
  // append
  var_append, 2, LOCAL(2), LOCAL(4), TAIL_CALL,
  POS(115, 26),
  POS(115, 21),
  POS(116, 32),
  POS(116, 21),
  POS(114, 19)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  0, // parameters
  // put(jobs job)
  var_put, 2, var_97_11_jobs, var_97_16_job, 1, LOCAL(1),
  //  put(jobs job)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(118, 16),
  POS(118, 15)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_split[] = {
  1, // locals
  2, // parameters
  var_120_10_jobs,
  var_120_15_time,
  // $s 1
  LET, 1, num_1, 1, var_124_4_s,
  // $n length_of(jobs)
  var_length_of, 1, var_120_10_jobs, 1, LOCAL(1),
  // $e n
  LET, 1, LOCAL(1), 1, var_126_4_e,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(124, 3),
  POS(125, 3),
  POS(126, 3),
  POS(127, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_split = {
  t_func_split, NULL, 4, 1,
  {"125_4_n\000"}
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // e
  var_std__less, 2, var_126_4_e, var_124_4_s, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_19, lambda_20, TAIL_CALL,
  POS(129, 11),
  POS(128, 5)
};

static FUNCTION_INFO i_lambda_loop = {
  t_lambda_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  0, // parameters
  // range(jobs 1 e) range(jobs s -1)
  var_range, 3, var_120_10_jobs, num_1, var_126_4_e, 1, LOCAL(1),
  // range(jobs s -1)
  var_range, 3, var_120_10_jobs, var_124_4_s, minus_num_1, 1, LOCAL(2),
  //  range(jobs 1 e) range(jobs s -1)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(130, 10),
  POS(130, 26),
  POS(130, 9)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_20[] = {
  2, // locals
  0, // parameters
  // s+e .div. 2
  var_std__plus, 2, var_124_4_s, var_126_4_e, 1, LOCAL(1),
  // $m s+e .div. 2
  var_div, 2, LOCAL(1), num_2, 1, var_132_10_m,
  // jobs(m) $job_time
  var_120_10_jobs, 1, var_132_10_m, 1, LOCAL(1),
  // jobs(m) $job_time
  LOCAL(1), 0, 1, LOCAL(2),
  // time:
  var_std__less, 2, var_120_15_time, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21, lambda_22, TAIL_CALL,
  POS(132, 12),
  POS(132, 9),
  POS(133, 9),
  POS(133, 9),
  POS(135, 22),
  POS(134, 9),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 6, 1,
  {"133_18_job_time\000"}
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  // !e m-1
  var_std__minus, 2, var_132_10_m, num_1, 1, var_126_4_e,
  // next
  var_next, 0, TAIL_CALL,
  POS(136, 13),
  POS(137, 13)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  // !s m+1
  var_std__plus, 2, var_132_10_m, num_1, 1, var_124_4_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(139, 13),
  POS(140, 13)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 2, 0,
  {}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___schedule}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___cancel}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___handle_jobs}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_data_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_insert}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_split}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}}
};

static ATTRIBUTE_DEFINITION std_types__io__attributes[] = {
  {-var_jobs_of, -var_empty_list},
  {-var_job_no_of, -num_0},
  {var_schedule, -func_std_types__io___schedule},
  {var_cancel, -func_std_types__io___cancel},
  {var_handle_jobs, -func_std_types__io___handle_jobs}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "schedule\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(25, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "cancel\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "handle_jobs\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "jobs_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "job_no_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 5,
    "io\000std_types", std_types__io__attributes,
    {.position = POS(32, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(32, 24)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "schedule\000", NULL,
    {.position = POS(35, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "37_5_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "38_5_time\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(40, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(42, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_number\000", NULL,
    {.position = POS(43, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_time_of\000", NULL,
    {.position = POS(43, 39)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(43, 39)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(43, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "45_4_job_no\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(46, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(48, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "set_timeout\000", NULL,
    {.position = POS(51, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(53, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(52, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "cancel\000", NULL,
    {.position = POS(57, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "59_5_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "60_5_job_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "62_4_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "64_8_idx\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(68, 43)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(68, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(68, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(70, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(63, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "handle_jobs\000", NULL,
    {.position = POS(73, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "75_5_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "77_42_now_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "77_52_remaining_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "87_28_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "87_38_data\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(89, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "97_11_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "97_16_job\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(99, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(100, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "102_12_time\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(106, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(106, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(107, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(109, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "110_16_idx\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "put\000", NULL,
    {.position = POS(118, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to_by\000", NULL,
    {.position = POS(109, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "120_10_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "120_15_time\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "124_4_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "126_4_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "132_10_m\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "div\000", NULL,
    {.position = POS(132, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(127, 3)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__io__jobs = {
  "_basic__io__jobs", // module name
  "basic/io/jobs.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  33, // number of constants
  59, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
