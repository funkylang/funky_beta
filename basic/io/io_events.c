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
  tuple_241_1 = -16,
  func_std_types__io___start_reading_from = -17,
  lambda_1 = -18,
  lambda_2 = -19,
  lambda_3 = -20,
  lambda_fd_or_list_is_a_list = -21,
  lambda_4 = -22,
  lambda_5 = -23,
  lambda_6 = -24,
  func_std_types__io___stop_reading_from = -25,
  lambda_7 = -26,
  lambda_8 = -27,
  lambda_2_fd_or_list_is_a_list = -28,
  lambda_9 = -29,
  lambda_10 = -30,
  lambda_11 = -31,
  func_std_types__io___print_to = -32,
  func_std_types__io___write = -33,
  lambda_12 = -34,
  lambda_13 = -35,
  func_std_types__io___cancel_write = -36,
  func_std_types__io___close = -37,
  func_std_types__io___join_process = -38,
  lambda_14 = -39,
  lambda_15 = -40,
  lambda_pid_or_list_is_a_list = -41,
  lambda_16 = -42,
  lambda_17 = -43,
  lambda_18 = -44,
  func_std_types__io___start_injecting_window_change_events = -45,
  func_std_types__io___stop_injecting_window_change_events = -46,
  func_std_types__io___start_catching_signals = -47,
  lambda_19 = -48,
  lambda_20 = -49,
  func_std_types__io___stop_catching_signals = -50,
  lambda_21 = -51,
  lambda_22 = -52,
  func_std_types__io___set_timeout = -53,
  lambda_23 = -54,
  lambda_24 = -55,
  lambda_25 = -56,
  lambda_26 = -57,
  func_std__initialize_logging = -58,
  num_3 = -59,
  lambda_log_filename_is_defined = -60,
  str_w = -61,
  lambda_27 = -62,
  lambda_28 = -63,
  lambda_29 = -64,
  lambda_30 = -65,
  func_std_types__io___enable_logging = -66,
  num_1 = -67,
  func_std_types__io___disable_logging = -68,
  func_std_types__io___log = -69,
  lambda_31 = -70,
  lambda_32 = -71,
  chr_10 = -72,
  lambda_33 = -73,
  string_1 = -74,
  string_2 = -75,
  num_2 = -76,
  minus_num_1 = -77,
  lambda_34 = -78,
  lambda_35 = -79,
  lambda_36 = -80,
  func_std_types__io___register_handlers = -81,
  lambda_37 = -82,
  lambda_38 = -83,
  func_std_types__io___deregister_handlers = -84,
  lambda_39 = -85,
  lambda_40 = -86,
  lambda_41 = -87,
  lambda_42 = -88,
  func_std_types__io___deregister_all_handlers = -89,
  func_std_types__io___register_resource = -90,
  func_std_types__io___run = -91,
  func_std_types__io___run_at = -92,
  lambda_43 = -93,
  func_std_types__io___exit = -94,
  func_std_types__io___is_empty = -95,
  lambda_44 = -96,
  lambda_45 = -97,
  lambda_46 = -98,
  func_std__log_unhandled_event = -99,
  lambda_47 = -100,
  lambda_48 = -101,
  lambda_49 = -102,
  lambda_50 = -103,
  lambda_51 = -104,
  lambda_52 = -105,
  num_5 = -106,
  lambda_53 = -107,
  lambda_54 = -108,
  str_unhandled_event = -109,
  string_3 = -110,
  func_std_types__io___initialize = -111,
  func_std_types__io___get_events = -112,
  lambda_55 = -113,
  lambda_56 = -114,
  lambda_57 = -115,
  lambda_58 = -116,
  lambda_59 = -117,
  lambda_60 = -118,
  func_set_timeout = -119,
  lambda_61 = -120,
  lambda_62 = -121,
  lambda_63 = -122,
  lambda_64 = -123,
  lambda_timeout = -124,
  lambda_65 = -125,
  lambda_exit_codes_ofself = -126,
  lambda_66 = -127,
  func_handle_start_jobs = -128,
  lambda_67 = -129,
  lambda_new_event_is_defined = -130,
  lambda_new_event_is_a_list = -131,
  lambda_68 = -132,
  lambda_69 = -133,
  func_handle_write_jobs = -134,
  lambda_70 = -135,
  func_wait_for_events = -136,
  lambda_71 = -137,
  lambda_72 = -138,
  lambda_73 = -139,
  lambda_74 = -140,
  lambda_SIGCHLD = -141,
  lambda_75 = -142,
  lambda_76 = -143,
  lambda_77 = -144,
  lambda_watched_pids_ofselfpid = -145,
  lambda_78 = -146,
  lambda_SIGWINCH = -147,
  lambda_79 = -148,
  lambda_catched_signals_ofselfsignal = -149,
  func_handle_write_requests = -150,
  lambda_80 = -151,
  lambda_81 = -152,
  lambda_82 = -153,
  string_4 = -154,
  string_5 = -155,
  str_t = -156,
  lambda_83 = -157,
  func_check_file_descriptors = -158,
  lambda_84 = -159,
  lambda_bytes_written_is_an_error = -160,
  lambda_85 = -161,
  lambda_86 = -162,
  lambda_87 = -163,
  func_attempt_reads = -164,
  lambda_88 = -165,
  lambda_89 = -166,
  lambda_90 = -167,
  lambda_91 = -168,
  lambda_does_listen = -169,
  lambda_conn_is_an_error = -170,
  lambda_92 = -171,
  func_do_read = -172,
  lambda_93 = -173,
  num_0x100000 = -174,
  lambda_94 = -175,
  lambda_95 = -176,
  lambda_buf_is_an_error = -177,
  lambda_do_close = -178,
  lambda_96 = -179,
  lambda_buf_is_empty = -180,
  lambda_2_do_close = -181,
  lambda_97 = -182,
  lambda_max_length_is_defined = -183,
  lambda_98 = -184,
  lambda_99 = -185,
  lambda_3_do_close = -186,
  lambda_100 = -187,
  func_attempt_close_operations = -188,
  lambda_101 = -189,
  lambda_write_jobs_ofiofd_is_undefined = -190,
  lambda_102 = -191,
  func_attempt_exit = -192,
  lambda_exit_code_ofio_is_defined = -193,
  lambda_103 = -194,
  lambda_do_log_ofresource = -195,
  str_finalizing = -196,
  func_finalize_resource = -197,
  lambda_104 = -198,
  lambda_io_is_empty = -199,
  lambda_105 = -200,
  lambda_106 = -201,
  func_kill_child_processes = -202,
  lambda_107 = -203,
  lambda_108 = -204,
  func_std_types__io___handle_events = -205,
  lambda_109 = -206,
  lambda_110 = -207,
  lambda_111 = -208,
  lambda_112 = -209,
  lambda_113 = -210,
  lambda_114 = -211,
  lambda_2_new_event_is_defined = -212,
  lambda_new_event = -213,
  func_keep_event = -214,
  lambda_115 = -215
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
  var_245_5_self, // dynamic
  var_246_5_fd_or_list, // dynamic
  var_247_5_do_close, // dynamic
  var_248_5_max_length, // dynamic
  var_is_defined, // extern
  var_is_undefined, // extern
  var_std__or, // extern
  var_is_a_list, // extern
  var_next, // extern
  var_for_each, // extern
  var_if, // extern
  var_stop_reading_from, // extern polymorphic
  var_267_5_self, // dynamic
  var_268_5_fd_or_list, // dynamic
  var_print_to, // extern polymorphic
  var_create_string, // extern
  var_to_utf8, // extern
  var_write, // extern polymorphic
  var_297_5_data, // dynamic
  var_299_4_job, // dynamic
  var_append, // extern
  var_cancel_write, // extern polymorphic
  var_close, // extern polymorphic
  var_join_process, // extern polymorphic
  var_328_5_self, // dynamic
  var_329_5_pid_or_list, // dynamic
  var_start_injecting_window_change_events, // extern polymorphic
  var_stop_injecting_window_change_events, // extern polymorphic
  var_start_catching_signals, // extern polymorphic
  var_360_5_self, // dynamic
  var_363_4_catched_signals, // dynamic
  var_stop_catching_signals, // extern polymorphic
  var_372_5_self, // dynamic
  var_375_4_catched_signals, // dynamic
  var_set_timeout, // extern polymorphic
  var_384_5_self, // dynamic
  var_385_5_timeout, // dynamic
  var_is_a_number, // extern
  var_std__plus, // extern
  var_update_if, // extern
  var_388_4_current_timeout, // dynamic
  var_std__less, // extern
  var_std__initialize_logging, // initialized
  var_396_5_io, // dynamic
  var_397_5_log_level, // dynamic
  var_398_5_log_filename, // dynamic
  var_open, // extern
  var_STDERR_FILENO, // extern
  var_dup2, // extern
  var_407_15_stdout_info, // dynamic
  var_STDOUT_FILENO, // extern
  var_fstat, // extern
  var_408_15_stderr_info, // dynamic
  var_inode_number_of, // extern
  var_std__equal, // extern
  var_std__not, // extern
  var_device_of, // extern
  var_log, // extern polymorphic
  var_432_5_self, // dynamic
  var_433_5_level, // dynamic
  var_434_5_message, // dynamic
  var_is_a_string, // extern
  var_update_if_not, // extern
  var_has_suffix, // extern
  var_push, // extern
  var_split_into_lines, // extern
  var_441_8_prefix, // dynamic
  var_std__string, // extern
  var_442_8_buf, // dynamic
  var_range, // extern
  var_length_of, // extern
  var_spaces, // extern
  var_register_handlers, // extern polymorphic
  var_454_5_self, // dynamic
  var_455_5_id, // dynamic
  var_458_4_handlers, // dynamic
  var_default_value, // extern
  var_deregister_handlers, // extern polymorphic
  var_470_5_self, // dynamic
  var_471_5_id, // dynamic
  var_472_5_types, // dynamic
  var_474_4_handlers, // dynamic
  var_deregister_all_handlers, // extern polymorphic
  var_register_resource, // extern polymorphic
  var_run, // extern polymorphic
  var_run_at, // extern polymorphic
  var_515_5_self, // dynamic
  var_516_5_time, // dynamic
  var_exit, // extern polymorphic
  var_is_empty, // extern polymorphic
  var_536_5_self, // dynamic
  var_std__and, // extern
  var_std__log_unhandled_event, // initialized
  var_545_29_io, // dynamic
  var_546_10_type, // dynamic
  var_546_16_fd, // dynamic
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
  var_573_5_self, // dynamic
  var_inc, // extern
  var_586_4_events, // dynamic
  var_587_4_want_to_write, // dynamic
  var_589_18_t, // dynamic
  var_590_4_start_jobs, // dynamic
  var_592_4_first_job_time, // dynamic
  var_593_4_remaining_timed_jobs, // dynamic
  var_594_4_timeout, // dynamic
  var_596_8_timed_job, // dynamic
  var_597_40_time, // dynamic
  var_std__minus, // extern
  var_max, // extern
  var_any_of, // extern
  var_640_41_new_event, // dynamic
  var_apply, // extern
  var_668_8_read_descriptor_list, // dynamic
  var_is_not_empty, // extern
  var_677_10_can_read, // dynamic
  var_678_10_can_write, // dynamic
  var_pselect, // extern
  var_682_8_injected_into_stdin, // dynamic
  var_683_8_write_jobs, // dynamic
  var_685_12_signal, // dynamic
  var_SIGCHLD, // extern
  var_process_id, // extern
  var_690_29_pid, // dynamic
  var_690_34_status, // dynamic
  var_waitpid, // extern
  var_is_an_error, // extern
  var_to_integer, // extern
  var_break, // extern
  var_exitstatus, // extern
  var_PROCESS_JOINED, // extern
  var_typed_tuple, // extern
  var_loop, // extern
  var_SIGWINCH, // extern
  var_SIGNAL, // extern
  var_STDIN_FILENO, // extern
  var_get_terminal_size, // extern
  var_READ, // extern
  var_737_14_fd, // dynamic
  var_738_14_job, // dynamic
  var_739_21_bytes_written, // dynamic
  var_766_14_fd, // dynamic
  var_not, // extern
  var_type_of, // extern
  var_SOCKET, // extern
  var_is_listening, // extern
  var_774_32_conn, // dynamic
  var_accept, // extern
  var_READ_FAILED, // extern
  var_CONNECT, // extern
  var_789_42_do_close, // dynamic
  var_789_52_max_length, // dynamic
  var_795_24_buf, // dynamic
  var_read, // extern
  var_CLOSED, // extern
  var_if_not, // extern
  var_838_29_io, // dynamic
  var_840_8_fd, // dynamic
  var_849_17_io, // dynamic
  var_853_12_resource, // dynamic
  var_finalize, // extern
  var_872_25_io, // dynamic
  var_SIGKILL, // extern
  var_kill, // extern
  var_std__handle_events, // attribute
  var_std__handle_event, // attribute
  var_handle_events, // extern polymorphic
  var_882_32_io, // dynamic
  var_883_4_new_events, // dynamic
  var_884_4_handlers, // dynamic
  var_886_8_event, // dynamic
  var_887_14_type, // dynamic
  var_887_20_id, // dynamic
  var_887_24_data, // dynamic
  var_888_8_id_handlers, // dynamic
  var_893_12_handler, // dynamic
  var_898_16_context, // dynamic
  var_is_a_tuple, // extern
  var_first, // extern
  var_second, // extern
  var_parameter_count_of, // extern
  var_901_23_new_event, // dynamic
  var_list, // extern
  var__END
};


static TAB_NUM t_func_std_types__resource___enable_logging[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 231_5_self
  // .do_log_of true)
  LET, -1, LOCAL(2), var_do_log_of, var_true, LOCAL(1),
  // -> self(.do_log_of true)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(233, 11),
  POS(233, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__resource___enable_logging = {
  t_func_std_types__resource___enable_logging, NULL, 2, 1,
  {"231_5_self\000"}
};

static TAB_NUM t_func_std_types__resource___disable_logging[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 237_5_self
  // .do_log_of false)
  LET, -1, LOCAL(2), var_do_log_of, var_false, LOCAL(1),
  // -> self(.do_log_of false)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(239, 11),
  POS(239, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__resource___disable_logging = {
  t_func_std_types__resource___disable_logging, NULL, 2, 1,
  {"237_5_self\000"}
};

static TAB_NUM t_func_std_types__io___start_reading_from[] = {
  3, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_245_5_self,
  MANDATORY_PARAMETER, var_246_5_fd_or_list,
  var_true, var_247_5_do_close,
  var_undefined, var_248_5_max_length,
  // exit_code_of(self).is_defined || fd_or_list.is_undefined
  var_exit_code_of, 1, var_245_5_self, 1, LOCAL(1),
  // is_defined || fd_or_list.is_undefined
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // is_defined || fd_or_list.is_undefined
  var_std__or, 2, LOCAL(2), lambda_1, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_2, lambda_3, TAIL_CALL,
  POS(251, 5),
  POS(251, 24),
  POS(251, 24),
  POS(250, 3)
};

static FUNCTION_INFO i_func_std_types__io___start_reading_from = {
  t_func_std_types__io___start_reading_from, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_246_5_fd_or_list, 1, LOCAL(1),
  // fd_or_list.is_undefined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(251, 49),
  POS(251, 38)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_245_5_self, TAIL_CALL,
  POS(252, 7)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_246_5_fd_or_list, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_fd_or_list_is_a_list, lambda_6, TAIL_CALL,
  POS(255, 20),
  POS(254, 7)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_fd_or_list_is_a_list[] = {
  0, // locals
  0, // parameters
  // for_each fd_or_list
  var_for_each, 3, var_246_5_fd_or_list, lambda_4, lambda_5, TAIL_CALL,
  POS(256, 11)
};

static FUNCTION_INFO i_lambda_fd_or_list_is_a_list = {
  t_lambda_fd_or_list_is_a_list, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 257_16_fd
  // !self.read_jobs_of(fd) tuple(do_close max_length)
  var_tuple, 2, var_247_5_do_close, var_248_5_max_length, 1, LOCAL(2),
  // read_jobs_of(fd) tuple(do_close max_length)
  var_read_jobs_of, 1, var_245_5_self, 1, LOCAL(3),
  // read_jobs_of(fd) tuple(do_close max_length)
  LOCAL(3), 2, LOCAL(4), LOCAL(2), 1, LOCAL(3),
  // self.read_jobs_of(fd) tuple(do_close max_length)
  LET, -1, var_245_5_self, var_read_jobs_of, LOCAL(3), var_245_5_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(258, 15),
  POS(258, 21),
  POS(258, 21),
  POS(258, 16),
  POS(259, 15),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 5, 1,
  {"257_16_fd\000"}
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_245_5_self, TAIL_CALL,
  POS(260, 15)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  3, // locals
  0, // parameters
  // !self.read_jobs_of(fd_or_list) tuple(do_close max_length)
  var_tuple, 2, var_247_5_do_close, var_248_5_max_length, 1, LOCAL(2),
  // read_jobs_of(fd_or_list) tuple(do_close max_length)
  var_read_jobs_of, 1, var_245_5_self, 1, LOCAL(3),
  // read_jobs_of(fd_or_list) tuple(do_close max_length)
  LOCAL(3), 2, var_246_5_fd_or_list, LOCAL(2), 1, LOCAL(3),
  // self.read_jobs_of(fd_or_list) tuple(do_close max_length)
  LET, -1, var_245_5_self, var_read_jobs_of, LOCAL(3), var_245_5_self,
  // -> self
  LET, 1, var_245_5_self, TAIL_CALL,
  POS(262, 11),
  POS(262, 17),
  POS(262, 17),
  POS(262, 12),
  POS(263, 11)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 5, 0,
  {}
};

static TAB_NUM t_func_std_types__io___stop_reading_from[] = {
  1, // locals
  2, // parameters
  var_267_5_self,
  var_268_5_fd_or_list,
  // is_undefined
  var_is_undefined, 1, var_268_5_fd_or_list, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_7, lambda_8, TAIL_CALL,
  POS(271, 16),
  POS(270, 3)
};

static FUNCTION_INFO i_func_std_types__io___stop_reading_from = {
  t_func_std_types__io___stop_reading_from, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_267_5_self, TAIL_CALL,
  POS(272, 7)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_268_5_fd_or_list, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_fd_or_list_is_a_list, lambda_11, TAIL_CALL,
  POS(275, 20),
  POS(274, 7)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2_fd_or_list_is_a_list[] = {
  0, // locals
  0, // parameters
  // for_each fd_or_list
  var_for_each, 3, var_268_5_fd_or_list, lambda_9, lambda_10, TAIL_CALL,
  POS(276, 11)
};

static FUNCTION_INFO i_lambda_2_fd_or_list_is_a_list = {
  t_lambda_2_fd_or_list_is_a_list, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 277_16_fd
  // read_jobs_of(fd) undefined
  var_read_jobs_of, 1, var_267_5_self, 1, LOCAL(2),
  // read_jobs_of(fd) undefined
  LOCAL(2), 2, LOCAL(3), var_undefined, 1, LOCAL(2),
  // self.read_jobs_of(fd) undefined
  LET, -1, var_267_5_self, var_read_jobs_of, LOCAL(2), var_267_5_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(278, 21),
  POS(278, 21),
  POS(278, 16),
  POS(279, 15),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 4, 1,
  {"277_16_fd\000"}
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_267_5_self, TAIL_CALL,
  POS(280, 15)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  2, // locals
  0, // parameters
  // read_jobs_of(fd_or_list) undefined
  var_read_jobs_of, 1, var_267_5_self, 1, LOCAL(2),
  // read_jobs_of(fd_or_list) undefined
  LOCAL(2), 2, var_268_5_fd_or_list, var_undefined, 1, LOCAL(2),
  // self.read_jobs_of(fd_or_list) undefined
  LET, -1, var_267_5_self, var_read_jobs_of, LOCAL(2), var_267_5_self,
  // -> self
  LET, 1, var_267_5_self, TAIL_CALL,
  POS(282, 17),
  POS(282, 17),
  POS(282, 12),
  POS(283, 11)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_std_types__io___print_to[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 287_5_self
  MANDATORY_PARAMETER, LOCAL(4), // 288_5_fd
  REST_PARAMETER, LOCAL(5), // 289_5_args
  // create_string(args).to_utf8
  var_create_string, 1, LOCAL(5), 1, LOCAL(1),
  // to_utf8
  var_to_utf8, 1, LOCAL(1), 1, LOCAL(2),
  // write self fd create_string(args).to_utf8
  var_write, 3, LOCAL(3), LOCAL(4), LOCAL(2), TAIL_CALL,
  POS(291, 17),
  POS(291, 37),
  POS(291, 3),
  LOCAL(4),
  LOCAL(3),
  LOCAL(5)
};

static FUNCTION_INFO i_func_std_types__io___print_to = {
  t_func_std_types__io___print_to, NULL, 3, 3,
  {"288_5_fd\000", "287_5_self\000", "289_5_args\000"}
};

static TAB_NUM t_func_std_types__io___write[] = {
  4, // locals
  3, // parameters
  LOCAL(3), // 295_5_self
  LOCAL(4), // 296_5_fd
  var_297_5_data,
  // write_jobs_of(self)(fd)
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(1),
  // $job write_jobs_of(self)(fd)
  LOCAL(1), 1, LOCAL(4), 1, var_299_4_job,
  // is_defined
  var_is_defined, 1, var_299_4_job, 1, LOCAL(1),
  // !job
  var_if, 3, LOCAL(1), lambda_12, lambda_13, 1, var_299_4_job,
  // write_jobs_of(fd) job
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(2),
  // write_jobs_of(fd) job
  LOCAL(2), 2, LOCAL(4), var_299_4_job, 1, LOCAL(2),
  // self.write_jobs_of(fd) job
  LET, -1, LOCAL(3), var_write_jobs_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(299, 8),
  POS(299, 3),
  POS(302, 11),
  POS(300, 3),
  POS(305, 9),
  POS(305, 9),
  POS(305, 4),
  POS(306, 3),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__io___write = {
  t_func_std_types__io___write, NULL, 8, 2,
  {"295_5_self\000", "296_5_fd\000"}
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // append(job data)
  var_append, 2, var_299_4_job, var_297_5_data, 1, LOCAL(1),
  //  append(job data)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(303, 10),
  POS(303, 9)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_297_5_data, TAIL_CALL,
  POS(304, 9)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__io___cancel_write[] = {
  5, // locals
  2, // parameters
  LOCAL(3), // 310_5_self
  LOCAL(4), // 311_5_fd
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
  POS(313, 19),
  POS(313, 3),
  POS(314, 9),
  POS(314, 9),
  POS(314, 4),
  POS(315, 3),
  LOCAL(5),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__io___cancel_write = {
  t_func_std_types__io___cancel_write, NULL, 6, 3,
  {"313_4_unwritten_text\000", "311_5_fd\000", "310_5_self\000"}
};

static TAB_NUM t_func_std_types__io___close[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 319_5_self
  LOCAL(4), // 320_5_fd
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
  POS(322, 3),
  POS(323, 9),
  POS(323, 9),
  POS(323, 4),
  POS(324, 3),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__io___close = {
  t_func_std_types__io___close, NULL, 5, 2,
  {"319_5_self\000", "320_5_fd\000"}
};

static TAB_NUM t_func_std_types__io___join_process[] = {
  1, // locals
  2, // parameters
  var_328_5_self,
  var_329_5_pid_or_list,
  // is_undefined
  var_is_undefined, 1, var_329_5_pid_or_list, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(332, 17),
  POS(331, 3)
};

static FUNCTION_INFO i_func_std_types__io___join_process = {
  t_func_std_types__io___join_process, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_328_5_self, TAIL_CALL,
  POS(333, 7)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_329_5_pid_or_list, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_pid_or_list_is_a_list, lambda_18, TAIL_CALL,
  POS(336, 21),
  POS(335, 7)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_pid_or_list_is_a_list[] = {
  0, // locals
  0, // parameters
  // for_each pid_or_list
  var_for_each, 3, var_329_5_pid_or_list, lambda_16, lambda_17, TAIL_CALL,
  POS(337, 11)
};

static FUNCTION_INFO i_lambda_pid_or_list_is_a_list = {
  t_lambda_pid_or_list_is_a_list, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 338_16_pid
  // watched_pids_of(pid) true
  var_watched_pids_of, 1, var_328_5_self, 1, LOCAL(2),
  // watched_pids_of(pid) true
  LOCAL(2), 2, LOCAL(3), var_true, 1, LOCAL(2),
  // self.watched_pids_of(pid) true
  LET, -1, var_328_5_self, var_watched_pids_of, LOCAL(2), var_328_5_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(339, 21),
  POS(339, 21),
  POS(339, 16),
  POS(340, 15),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 4, 1,
  {"338_16_pid\000"}
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_328_5_self, TAIL_CALL,
  POS(341, 15)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(pid_or_list) true
  var_watched_pids_of, 1, var_328_5_self, 1, LOCAL(2),
  // watched_pids_of(pid_or_list) true
  LOCAL(2), 2, var_329_5_pid_or_list, var_true, 1, LOCAL(2),
  // self.watched_pids_of(pid_or_list) true
  LET, -1, var_328_5_self, var_watched_pids_of, LOCAL(2), var_328_5_self,
  // -> self
  LET, 1, var_328_5_self, TAIL_CALL,
  POS(343, 17),
  POS(343, 17),
  POS(343, 12),
  POS(344, 11)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_std_types__io___start_injecting_window_change_events[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 348_5_self
  // .do_inject_window_change_events true)
  LET, -1, LOCAL(2), var_do_inject_window_change_events, var_true, LOCAL(1),
  // -> self(.do_inject_window_change_events true)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(350, 11),
  POS(350, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__io___start_injecting_window_change_events = {
  t_func_std_types__io___start_injecting_window_change_events, NULL, 2, 1,
  {"348_5_self\000"}
};

static TAB_NUM t_func_std_types__io___stop_injecting_window_change_events[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 354_5_self
  // .do_inject_window_change_events false)
  LET, -1, LOCAL(2), var_do_inject_window_change_events, var_false, LOCAL(1),
  // -> self(.do_inject_window_change_events false)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(356, 11),
  POS(356, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__io___stop_injecting_window_change_events = {
  t_func_std_types__io___stop_injecting_window_change_events, NULL, 2, 1,
  {"354_5_self\000"}
};

static TAB_NUM t_func_std_types__io___start_catching_signals[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_360_5_self,
  REST_PARAMETER, LOCAL(1), // 361_5_signals
  // $catched_signals catched_signals_of(self)
  var_catched_signals_of, 1, var_360_5_self, 1, var_363_4_catched_signals,
  // for_each signals
  var_for_each, 3, LOCAL(1), lambda_19, lambda_20, TAIL_CALL,
  POS(363, 3),
  POS(364, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__io___start_catching_signals = {
  t_func_std_types__io___start_catching_signals, NULL, 2, 1,
  {"361_5_signals\000"}
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 365_8_signal
  // catched_signals(signal) true
  var_363_4_catched_signals, 2, LOCAL(1), var_true, 1, var_363_4_catched_signals,
  // next
  var_next, 0, TAIL_CALL,
  POS(366, 8),
  POS(367, 7),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 2, 1,
  {"365_8_signal\000"}
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // .catched_signals_of catched_signals)
  LET, -1, var_360_5_self, var_catched_signals_of, var_363_4_catched_signals, LOCAL(1),
  //  self(.catched_signals_of catched_signals)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(368, 13),
  POS(368, 7)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__io___stop_catching_signals[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_372_5_self,
  REST_PARAMETER, LOCAL(1), // 373_5_signals
  // $catched_signals catched_signals_of(self)
  var_catched_signals_of, 1, var_372_5_self, 1, var_375_4_catched_signals,
  // for_each signals
  var_for_each, 3, LOCAL(1), lambda_21, lambda_22, TAIL_CALL,
  POS(375, 3),
  POS(376, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__io___stop_catching_signals = {
  t_func_std_types__io___stop_catching_signals, NULL, 2, 1,
  {"373_5_signals\000"}
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 377_8_signal
  // catched_signals(signal) false
  var_375_4_catched_signals, 2, LOCAL(1), var_false, 1, var_375_4_catched_signals,
  // next
  var_next, 0, TAIL_CALL,
  POS(378, 8),
  POS(379, 7),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 2, 1,
  {"377_8_signal\000"}
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // .catched_signals_of catched_signals)
  LET, -1, var_372_5_self, var_catched_signals_of, var_375_4_catched_signals, LOCAL(1),
  //  self(.catched_signals_of catched_signals)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(380, 13),
  POS(380, 7)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__io___set_timeout[] = {
  2, // locals
  2, // parameters
  var_384_5_self,
  var_385_5_timeout,
  // is_a_number &timeout -> current_time_of(self)+timeout
  var_is_a_number, 1, var_385_5_timeout, 1, LOCAL(1),
  // update_if timeout.is_a_number &timeout -> current_time_of(self)+timeout
  var_update_if, 3, LOCAL(1), var_385_5_timeout, lambda_23, 1, var_385_5_timeout,
  // $current_timeout timeout_of(self)
  var_timeout_of, 1, var_384_5_self, 1, var_388_4_current_timeout,
  // is_undefined || timeout < current_timeout
  var_is_undefined, 1, var_388_4_current_timeout, 1, LOCAL(1),
  // is_undefined || timeout < current_timeout
  var_std__or, 2, LOCAL(1), lambda_24, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_25, lambda_26, TAIL_CALL,
  POS(387, 21),
  POS(387, 3),
  POS(388, 3),
  POS(390, 21),
  POS(390, 21),
  POS(389, 3)
};

static FUNCTION_INFO i_func_std_types__io___set_timeout = {
  t_func_std_types__io___set_timeout, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  0, // parameters
  // current_time_of(self)+timeout
  var_current_time_of, 1, var_384_5_self, 1, LOCAL(1),
  // current_time_of(self)+timeout
  var_std__plus, 2, LOCAL(1), var_385_5_timeout, 1, LOCAL(2),
  //  current_time_of(self)+timeout
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(387, 45),
  POS(387, 45),
  POS(387, 44)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  0, // parameters
  // timeout < current_timeout
  var_std__less, 2, var_385_5_timeout, var_388_4_current_timeout, 1, LOCAL(1),
  // timeout < current_timeout
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(390, 37),
  POS(390, 37)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // .timeout_of timeout)
  LET, -1, var_384_5_self, var_timeout_of, var_385_5_timeout, LOCAL(1),
  //  self(.timeout_of timeout)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(391, 13),
  POS(391, 7)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_384_5_self, TAIL_CALL,
  POS(392, 7)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__initialize_logging[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_396_5_io,
  num_3, var_397_5_log_level,
  var_undefined, var_398_5_log_filename,
  // is_defined:
  var_is_defined, 1, var_398_5_log_filename, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_log_filename_is_defined, lambda_27, IO_TAIL_CALL,
  POS(401, 18),
  POS(400, 3)
};

static FUNCTION_INFO i_func_std__initialize_logging = {
  t_func_std__initialize_logging, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_log_filename_is_defined[] = {
  1, // locals
  0, // parameters
  // open! $log_fd log_filename "w+"
  var_open, 2, var_398_5_log_filename, str_w, IO_CALL(1), LOCAL(1),
  // dup2! log_fd STDERR_FILENO
  var_dup2, 2, LOCAL(1), var_STDERR_FILENO, IO_CALL(0),
  // close! log_fd
  var_close, 1, LOCAL(1), IO_CALL(0),
  // enable_logging io log_level
  var_enable_logging, 2, var_396_5_io, var_397_5_log_level, TAIL_CALL,
  POS(402, 7),
  POS(403, 7),
  POS(404, 7),
  POS(405, 7),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_log_filename_is_defined = {
  t_lambda_log_filename_is_defined, NULL, 4, 1,
  {"402_14_log_fd\000"}
};

static TAB_NUM t_lambda_27[] = {
  5, // locals
  0, // parameters
  // fstat! $stdout_info STDOUT_FILENO
  var_fstat, 1, var_STDOUT_FILENO, IO_CALL(1), var_407_15_stdout_info,
  // fstat! $stderr_info STDERR_FILENO
  var_fstat, 1, var_STDERR_FILENO, IO_CALL(1), var_408_15_stderr_info,
  // inode_number_of(stderr_info) != inode_number_of(stdout_info)
  var_inode_number_of, 1, var_408_15_stderr_info, 1, LOCAL(1),
  // inode_number_of(stdout_info)
  var_inode_number_of, 1, var_407_15_stdout_info, 1, LOCAL(2),
  // inode_number_of(stderr_info) != inode_number_of(stdout_info)
  var_std__equal, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // inode_number_of(stderr_info) != inode_number_of(stdout_info)
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // 
  var_std__or, 2, LOCAL(4), lambda_28, 1, LOCAL(5),
  // if
  var_if, 3, LOCAL(5), lambda_29, lambda_30, TAIL_CALL,
  POS(407, 7),
  POS(408, 7),
  POS(411, 11),
  POS(411, 43),
  POS(411, 11),
  POS(411, 11),
  POS(410, 11),
  POS(409, 7)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 8, 0,
  {}
};

static TAB_NUM t_lambda_28[] = {
  4, // locals
  0, // parameters
  // device_of(stderr_info) != device_of(stdout_info)
  var_device_of, 1, var_408_15_stderr_info, 1, LOCAL(1),
  // device_of(stdout_info)
  var_device_of, 1, var_407_15_stdout_info, 1, LOCAL(2),
  // device_of(stderr_info) != device_of(stdout_info)
  var_std__equal, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // device_of(stderr_info) != device_of(stdout_info)
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // device_of(stderr_info) != device_of(stdout_info)
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(412, 11),
  POS(412, 37),
  POS(412, 11),
  POS(412, 11),
  POS(412, 11)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  // enable_logging io log_level
  var_enable_logging, 2, var_396_5_io, var_397_5_log_level, TAIL_CALL,
  POS(414, 11)
};

static FUNCTION_INFO i_lambda_29 = {
  t_lambda_29, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_396_5_io, TAIL_CALL,
  POS(415, 11)
};

static FUNCTION_INFO i_lambda_30 = {
  t_lambda_30, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__io___enable_logging[] = {
  3, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 419_5_self
  num_1, LOCAL(3), // 420_5_level
  // .log_level_of level)
  LET, -1, LOCAL(2), var_log_level_of, LOCAL(3), LOCAL(1),
  // -> self(.log_level_of level)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(422, 11),
  POS(422, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__io___enable_logging = {
  t_func_std_types__io___enable_logging, NULL, 2, 2,
  {"420_5_level\000", "419_5_self\000"}
};

static TAB_NUM t_func_std_types__io___disable_logging[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 426_5_self
  // .log_level_of 0)
  LET, -1, LOCAL(2), var_log_level_of, num_0, LOCAL(1),
  // -> self(.log_level_of 0)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(428, 11),
  POS(428, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__io___disable_logging = {
  t_func_std_types__io___disable_logging, NULL, 2, 1,
  {"426_5_self\000"}
};

static TAB_NUM t_func_std_types__io___log[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_432_5_self,
  num_1, var_433_5_level,
  MANDATORY_PARAMETER, var_434_5_message,
  // log_level_of(self):
  var_log_level_of, 1, var_432_5_self, 1, LOCAL(1),
  // log_level_of(self):
  var_std__less, 2, LOCAL(1), var_433_5_level, 1, LOCAL(2),
  // log_level_of(self):
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_31, lambda_36, TAIL_CALL,
  POS(437, 14),
  POS(437, 14),
  POS(437, 14),
  POS(436, 3)
};

static FUNCTION_INFO i_func_std_types__io___log = {
  t_func_std_types__io___log, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  0, // parameters
  // is_a_string &message -> message()
  var_is_a_string, 1, var_434_5_message, 1, LOCAL(1),
  // update_if_not message.is_a_string &message -> message()
  var_update_if_not, 3, LOCAL(1), var_434_5_message, lambda_32, 1, var_434_5_message,
  // message .has_suffix. '@nl;' &message: push message '@nl;'
  var_has_suffix, 2, var_434_5_message, chr_10, 1, LOCAL(1),
  // update_if_not message .has_suffix. '@nl;' &message: push message '@nl;'
  var_update_if_not, 3, LOCAL(1), var_434_5_message, lambda_33, 1, var_434_5_message,
  // $lines split_into_lines(message)
  var_split_into_lines, 1, var_434_5_message, 1, LOCAL(2),
  // $prefix "[@(level)] "
  var_std__string, 3, string_1, var_433_5_level, string_2, 1, var_441_8_prefix,
  // lines(1))
  LOCAL(2), 1, num_1, 1, LOCAL(1),
  // $buf append(prefix lines(1))
  var_append, 2, var_441_8_prefix, LOCAL(1), 1, var_442_8_buf,
  // range &lines 2 -1
  var_range, 3, LOCAL(2), num_2, minus_num_1, 1, LOCAL(2),
  // for_each lines
  var_for_each, 3, LOCAL(2), lambda_34, lambda_35, TAIL_CALL,
  POS(438, 29),
  POS(438, 7),
  POS(439, 21),
  POS(439, 7),
  POS(440, 7),
  POS(441, 7),
  POS(442, 26),
  POS(442, 7),
  POS(443, 7),
  POS(444, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_31 = {
  t_lambda_31, NULL, 10, 1,
  {"440_8_lines\000"}
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // message()
  var_434_5_message, 0, 1, LOCAL(1),
  //  message()
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(438, 53),
  POS(438, 52)
};

static FUNCTION_INFO i_lambda_32 = {
  t_lambda_32, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  // push message '@nl;'
  var_push, 2, var_434_5_message, chr_10, TAIL_CALL,
  POS(439, 59)
};

static FUNCTION_INFO i_lambda_33 = {
  t_lambda_33, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_34[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 445_12_line
  // length_of(prefix)) line
  var_length_of, 1, var_441_8_prefix, 1, LOCAL(1),
  // spaces(length_of(prefix)) line
  var_spaces, 1, LOCAL(1), 1, LOCAL(2),
  // append &buf spaces(length_of(prefix)) line
  var_append, 3, var_442_8_buf, LOCAL(2), LOCAL(3), 1, var_442_8_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(446, 30),
  POS(446, 23),
  POS(446, 11),
  POS(447, 11),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_34 = {
  t_lambda_34, NULL, 4, 1,
  {"445_12_line\000"}
};

static TAB_NUM t_lambda_35[] = {
  1, // locals
  0, // parameters
  // to_utf8
  var_to_utf8, 1, var_442_8_buf, 1, LOCAL(1),
  // write self STDERR_FILENO buf.to_utf8
  var_write, 3, var_432_5_self, var_STDERR_FILENO, LOCAL(1), TAIL_CALL,
  POS(449, 40),
  POS(449, 11)
};

static FUNCTION_INFO i_lambda_35 = {
  t_lambda_35, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_432_5_self, TAIL_CALL,
  POS(450, 7)
};

static FUNCTION_INFO i_lambda_36 = {
  t_lambda_36, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__io___register_handlers[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_454_5_self,
  MANDATORY_PARAMETER, var_455_5_id,
  REST_PARAMETER, LOCAL(3), // 456_5_type_handlers
  // handlers_of(self)(id) empty_hash_table)
  var_handlers_of, 1, var_454_5_self, 1, LOCAL(1),
  // handlers_of(self)(id) empty_hash_table)
  LOCAL(1), 1, var_455_5_id, 1, LOCAL(2),
  // $handlers default_value(handlers_of(self)(id) empty_hash_table)
  var_default_value, 2, LOCAL(2), var_empty_hash_table, 1, var_458_4_handlers,
  // for_each type_handlers
  var_for_each, 3, LOCAL(3), lambda_37, lambda_38, TAIL_CALL,
  POS(458, 27),
  POS(458, 27),
  POS(458, 3),
  POS(459, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__io___register_handlers = {
  t_func_std_types__io___register_handlers, NULL, 4, 1,
  {"456_5_type_handlers\000"}
};

static TAB_NUM t_lambda_37[] = {
  3, // locals
  1, // parameters
  LOCAL(1), // 460_8_type_handler
  // type_handler $type $handler
  LOCAL(1), 0, 2, LOCAL(2), LOCAL(3),
  // handlers(type) handler
  var_458_4_handlers, 2, LOCAL(2), LOCAL(3), 1, var_458_4_handlers,
  // next
  var_next, 0, TAIL_CALL,
  POS(461, 7),
  POS(462, 8),
  POS(463, 7),
  LOCAL(2),
  LOCAL(3),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_37 = {
  t_lambda_37, NULL, 3, 3,
  {"461_21_type\000", "461_27_handler\000", "460_8_type_handler\000"}
};

static TAB_NUM t_lambda_38[] = {
  2, // locals
  0, // parameters
  // handlers_of(id) handlers
  var_handlers_of, 1, var_454_5_self, 1, LOCAL(2),
  // handlers_of(id) handlers
  LOCAL(2), 2, var_455_5_id, var_458_4_handlers, 1, LOCAL(2),
  // self.handlers_of(id) handlers
  LET, -1, var_454_5_self, var_handlers_of, LOCAL(2), var_454_5_self,
  // -> self
  LET, 1, var_454_5_self, TAIL_CALL,
  POS(465, 13),
  POS(465, 13),
  POS(465, 8),
  POS(466, 7)
};

static FUNCTION_INFO i_lambda_38 = {
  t_lambda_38, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_std_types__io___deregister_handlers[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_470_5_self,
  MANDATORY_PARAMETER, var_471_5_id,
  REST_PARAMETER, var_472_5_types,
  // handlers_of(self)(id)
  var_handlers_of, 1, var_470_5_self, 1, LOCAL(1),
  // $handlers handlers_of(self)(id)
  LOCAL(1), 1, var_471_5_id, 1, var_474_4_handlers,
  // is_undefined
  var_is_undefined, 1, var_474_4_handlers, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_39, lambda_40, TAIL_CALL,
  POS(474, 13),
  POS(474, 3),
  POS(476, 14),
  POS(475, 3)
};

static FUNCTION_INFO i_func_std_types__io___deregister_handlers = {
  t_func_std_types__io___deregister_handlers, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_470_5_self, TAIL_CALL,
  POS(477, 7)
};

static FUNCTION_INFO i_lambda_39 = {
  t_lambda_39, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  // for_each types
  var_for_each, 3, var_472_5_types, lambda_41, lambda_42, TAIL_CALL,
  POS(479, 7)
};

static FUNCTION_INFO i_lambda_40 = {
  t_lambda_40, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_41[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 480_12_type
  // handlers(type) undefined
  var_474_4_handlers, 2, LOCAL(1), var_undefined, 1, var_474_4_handlers,
  // next
  var_next, 0, TAIL_CALL,
  POS(481, 12),
  POS(482, 11),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_41 = {
  t_lambda_41, NULL, 2, 1,
  {"480_12_type\000"}
};

static TAB_NUM t_lambda_42[] = {
  2, // locals
  0, // parameters
  // handlers_of(id) handlers
  var_handlers_of, 1, var_470_5_self, 1, LOCAL(2),
  // handlers_of(id) handlers
  LOCAL(2), 2, var_471_5_id, var_474_4_handlers, 1, LOCAL(2),
  // self.handlers_of(id) handlers
  LET, -1, var_470_5_self, var_handlers_of, LOCAL(2), var_470_5_self,
  // -> self
  LET, 1, var_470_5_self, TAIL_CALL,
  POS(484, 17),
  POS(484, 17),
  POS(484, 12),
  POS(485, 11)
};

static FUNCTION_INFO i_lambda_42 = {
  t_lambda_42, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_std_types__io___deregister_all_handlers[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 489_5_self
  LOCAL(4), // 490_5_id
  // handlers_of(id) empty_hash_table
  var_handlers_of, 1, LOCAL(3), 1, LOCAL(2),
  // handlers_of(id) empty_hash_table
  LOCAL(2), 2, LOCAL(4), var_empty_hash_table, 1, LOCAL(2),
  // self.handlers_of(id) empty_hash_table
  LET, -1, LOCAL(3), var_handlers_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(492, 9),
  POS(492, 9),
  POS(492, 4),
  POS(493, 3),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__io___deregister_all_handlers = {
  t_func_std_types__io___deregister_all_handlers, NULL, 4, 2,
  {"490_5_id\000", "489_5_self\000"}
};

static TAB_NUM t_func_std_types__io___register_resource[] = {
  5, // locals
  3, // parameters
  LOCAL(3), // 497_5_self
  LOCAL(4), // 498_5_key
  LOCAL(5), // 499_5_resource
  // resources_of(key) resource
  var_resources_of, 1, LOCAL(3), 1, LOCAL(2),
  // resources_of(key) resource
  LOCAL(2), 2, LOCAL(4), LOCAL(5), 1, LOCAL(2),
  // self.resources_of(key) resource
  LET, -1, LOCAL(3), var_resources_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(501, 9),
  POS(501, 9),
  POS(501, 4),
  POS(502, 3),
  LOCAL(5),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__io___register_resource = {
  t_func_std_types__io___register_resource, NULL, 4, 3,
  {"499_5_resource\000", "497_5_self\000", "498_5_key\000"}
};

static TAB_NUM t_func_std_types__io___run[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 506_5_self
  MANDATORY_PARAMETER, LOCAL(4), // 507_5_command
  REST_PARAMETER, LOCAL(5), // 508_5_arguments
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
  POS(510, 14),
  POS(510, 28),
  POS(510, 3),
  POS(510, 9),
  POS(511, 3),
  LOCAL(4),
  LOCAL(3),
  LOCAL(5)
};

static FUNCTION_INFO i_func_std_types__io___run = {
  t_func_std_types__io___run, NULL, 5, 3,
  {"507_5_command\000", "506_5_self\000", "508_5_arguments\000"}
};

static TAB_NUM t_func_std_types__io___run_at[] = {
  4, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_515_5_self,
  MANDATORY_PARAMETER, var_516_5_time,
  MANDATORY_PARAMETER, LOCAL(3), // 517_5_command
  REST_PARAMETER, LOCAL(4), // 518_5_arguments
  // is_a_number &time -> current_time_of(self)+time
  var_is_a_number, 1, var_516_5_time, 1, LOCAL(1),
  // update_if time.is_a_number &time -> current_time_of(self)+time
  var_update_if, 3, LOCAL(1), var_516_5_time, lambda_43, 1, var_516_5_time,
  // timed_jobs_of tuple(command arguments time)
  var_timed_jobs_of, 1, var_515_5_self, 1, LOCAL(1),
  // tuple(command arguments time)
  var_tuple, 3, LOCAL(3), LOCAL(4), var_516_5_time, 1, LOCAL(2),
  // push &self.timed_jobs_of tuple(command arguments time)
  var_push, 2, LOCAL(1), LOCAL(2), 1, LOCAL(1),
  // self.timed_jobs_of tuple(command arguments time)
  LET, -1, var_515_5_self, var_timed_jobs_of, LOCAL(1), var_515_5_self,
  // -> self
  LET, 1, var_515_5_self, TAIL_CALL,
  POS(520, 18),
  POS(520, 3),
  POS(521, 14),
  POS(521, 28),
  POS(521, 3),
  POS(521, 9),
  POS(522, 3),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__io___run_at = {
  t_func_std_types__io___run_at, NULL, 7, 2,
  {"517_5_command\000", "518_5_arguments\000"}
};

static TAB_NUM t_lambda_43[] = {
  2, // locals
  0, // parameters
  // current_time_of(self)+time
  var_current_time_of, 1, var_515_5_self, 1, LOCAL(1),
  // current_time_of(self)+time
  var_std__plus, 2, LOCAL(1), var_516_5_time, 1, LOCAL(2),
  //  current_time_of(self)+time
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(520, 39),
  POS(520, 39),
  POS(520, 38)
};

static FUNCTION_INFO i_lambda_43 = {
  t_lambda_43, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std_types__io___exit[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 526_5_self
  LOCAL(3), // 527_5_exit_code
  // self
  LET, -2, LOCAL(2), var_exit_code_of, LOCAL(3), var_read_jobs_of, var_empty_hash_table, LOCAL(1),
  // ->
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(530, 5),
  POS(529, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__io___exit = {
  t_func_std_types__io___exit, NULL, 2, 2,
  {"527_5_exit_code\000", "526_5_self\000"}
};

static TAB_NUM t_func_std_types__io___is_empty[] = {
  3, // locals
  1, // parameters
  var_536_5_self,
  // read_jobs_of(self).is_empty
  var_read_jobs_of, 1, var_536_5_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_44, 1, LOCAL(3),
  // ->
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(540, 7),
  POS(540, 26),
  POS(539, 7),
  POS(538, 3)
};

static FUNCTION_INFO i_func_std_types__io___is_empty = {
  t_func_std_types__io___is_empty, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_44[] = {
  3, // locals
  0, // parameters
  // write_jobs_of(self).is_empty
  var_write_jobs_of, 1, var_536_5_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_45, 1, LOCAL(3),
  // write_jobs_of(self).is_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(541, 7),
  POS(541, 27),
  POS(539, 7),
  POS(541, 7)
};

static FUNCTION_INFO i_lambda_44 = {
  t_lambda_44, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_45[] = {
  3, // locals
  0, // parameters
  // close_jobs_of(self).is_empty
  var_close_jobs_of, 1, var_536_5_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_46, 1, LOCAL(3),
  // close_jobs_of(self).is_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(542, 7),
  POS(542, 27),
  POS(539, 7),
  POS(542, 7)
};

static FUNCTION_INFO i_lambda_45 = {
  t_lambda_45, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_46[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(self).is_empty
  var_watched_pids_of, 1, var_536_5_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // watched_pids_of(self).is_empty
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(543, 7),
  POS(543, 29),
  POS(543, 7)
};

static FUNCTION_INFO i_lambda_46 = {
  t_lambda_46, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std__log_unhandled_event[] = {
  3, // locals
  2, // parameters
  var_545_29_io,
  LOCAL(3), // 545_32_event
  // event $type $fd $_argument
  LOCAL(3), 0, 3, var_546_10_type, var_546_16_fd, LOCAL(1),
  // fd == STDERR_FILENO
  var_std__equal, 2, var_546_16_fd, var_STDERR_FILENO, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_47, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_50, lambda_51, TAIL_CALL,
  POS(546, 3),
  POS(549, 7),
  POS(548, 7),
  POS(547, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std__log_unhandled_event = {
  t_func_std__log_unhandled_event, NULL, 4, 1,
  {"545_32_event\000"}
};

static TAB_NUM t_lambda_47[] = {
  2, // locals
  0, // parameters
  // type == WRITE_FAILED
  var_std__equal, 2, var_546_10_type, var_WRITE_FAILED, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_48, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(551, 9),
  POS(550, 9),
  POS(550, 9)
};

static FUNCTION_INFO i_lambda_47 = {
  t_lambda_47, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_48[] = {
  2, // locals
  0, // parameters
  // type == WRITE_PENDING
  var_std__equal, 2, var_546_10_type, var_WRITE_PENDING, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_49, 1, LOCAL(2),
  // type == WRITE_PENDING
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(552, 9),
  POS(550, 9),
  POS(552, 9)
};

static FUNCTION_INFO i_lambda_48 = {
  t_lambda_48, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_49[] = {
  1, // locals
  0, // parameters
  // type == WRITE_COMPLETED
  var_std__equal, 2, var_546_10_type, var_WRITE_COMPLETED, 1, LOCAL(1),
  // type == WRITE_COMPLETED
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(553, 9),
  POS(553, 9)
};

static FUNCTION_INFO i_lambda_49 = {
  t_lambda_49, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  //  io # prevent recursive logging
  LET, 1, var_545_29_io, TAIL_CALL,
  POS(554, 7)
};

static FUNCTION_INFO i_lambda_50 = {
  t_lambda_50, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_51[] = {
  2, // locals
  0, // parameters
  // WRITE_PENDING, WRITE_COMPLETED -> 5
  var_std__sequence, 2, var_WRITE_PENDING, var_WRITE_COMPLETED, 1, LOCAL(1),
  // $log_level
  var_case, 4, var_546_10_type, LOCAL(1), lambda_52, lambda_53, 1, LOCAL(2),
  // log io log_level -> "
  var_log, 3, var_545_29_io, LOCAL(2), lambda_54, TAIL_CALL,
  POS(559, 11),
  POS(556, 7),
  POS(561, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_51 = {
  t_lambda_51, NULL, 3, 1,
  {"556_8_log_level\000"}
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  //  5
  LET, 1, num_5, TAIL_CALL,
  POS(559, 44)
};

static FUNCTION_INFO i_lambda_52 = {
  t_lambda_52, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  //  2
  LET, 1, num_2, TAIL_CALL,
  POS(560, 13)
};

static FUNCTION_INFO i_lambda_53 = {
  t_lambda_53, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_54[] = {
  4, // locals
  0, // parameters
  // serialize(type).trim_right) - @(serialize(fd))@
  var_serialize, 1, var_546_10_type, 1, LOCAL(1),
  // trim_right) - @(serialize(fd))@
  var_trim_right, 1, LOCAL(1), 1, LOCAL(2),
  // serialize(fd))@
  var_serialize, 1, var_546_16_fd, 1, LOCAL(3),
  // "
  var_std__string, 4, str_unhandled_event, LOCAL(2), string_3, LOCAL(3), 1, LOCAL(4),
  //  "
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(562, 27),
  POS(562, 43),
  POS(562, 59),
  POS(561, 27),
  POS(561, 26)
};

static FUNCTION_INFO i_lambda_54 = {
  t_lambda_54, NULL, 5, 0,
  {}
};

static TAB_NUM t_func_std_types__io___initialize[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 566_5_self
  // current_time! $t
  var_current_time, 0, IO_CALL(1), LOCAL(3),
  // .current_time_of t)
  LET, -1, LOCAL(2), var_current_time_of, LOCAL(3), LOCAL(1),
  // -> self(.current_time_of t)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(568, 3),
  POS(569, 11),
  POS(569, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__io___initialize = {
  t_func_std_types__io___initialize, NULL, 3, 2,
  {"568_18_t\000", "566_5_self\000"}
};

static TAB_NUM t_func_std_types__io___get_events[] = {
  1, // locals
  1, // parameters
  var_573_5_self,
  // step_no_of
  var_step_no_of, 1, var_573_5_self, 1, LOCAL(1),
  // inc &self.step_no_of
  var_inc, 1, LOCAL(1), 1, LOCAL(1),
  // self.step_no_of
  LET, -1, var_573_5_self, var_step_no_of, LOCAL(1), var_573_5_self,
  // attempt_close_operations! &self
  func_attempt_close_operations, 1, var_573_5_self, IO_CALL(1), var_573_5_self,
  // attempt_exit! &self
  func_attempt_exit, 1, var_573_5_self, IO_CALL(1), var_573_5_self,
  // $events empty_list
  LET, 1, var_empty_list, 1, var_586_4_events,
  // $want_to_write empty_list
  LET, 1, var_empty_list, 1, var_587_4_want_to_write,
  // current_time! $t
  var_current_time, 0, IO_CALL(1), var_589_18_t,
  // $start_jobs start_jobs_of(self)
  var_start_jobs_of, 1, var_573_5_self, 1, var_590_4_start_jobs,
  // self.start_jobs_of empty_list
  LET, -1, var_573_5_self, var_start_jobs_of, var_empty_list, var_573_5_self,
  // $first_job_time undefined
  LET, 1, var_undefined, 1, var_592_4_first_job_time,
  // $remaining_timed_jobs empty_list
  LET, 1, var_empty_list, 1, var_593_4_remaining_timed_jobs,
  // $timeout undefined
  LET, 1, var_undefined, 1, var_594_4_timeout,
  // timed_jobs_of(self)
  var_timed_jobs_of, 1, var_573_5_self, 1, LOCAL(1),
  // for_each timed_jobs_of(self)
  var_for_each, 3, LOCAL(1), lambda_55, lambda_60, IO_TAIL_CALL,
  POS(579, 13),
  POS(579, 3),
  POS(579, 8),
  POS(581, 3),
  POS(583, 3),
  POS(586, 3),
  POS(587, 3),
  POS(589, 3),
  POS(590, 3),
  POS(591, 4),
  POS(592, 3),
  POS(593, 3),
  POS(594, 3),
  POS(595, 12),
  POS(595, 3)
};

static FUNCTION_INFO i_func_std_types__io___get_events = {
  t_func_std_types__io___get_events, NULL, 15, 0,
  {}
};

static TAB_NUM t_lambda_55[] = {
  2, // locals
  1, // parameters
  var_596_8_timed_job,
  // timed_job $_command $_arguments $time
  var_596_8_timed_job, 0, 3, LOCAL(1), LOCAL(1), var_597_40_time,
  // t:
  var_std__less, 2, var_589_18_t, var_597_40_time, 1, LOCAL(1),
  // t:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_56, lambda_57, IO_TAIL_CALL,
  POS(597, 7),
  POS(599, 17),
  POS(599, 17),
  POS(598, 7)
};

static FUNCTION_INFO i_lambda_55 = {
  t_lambda_55, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  // push &start_jobs timed_job
  var_push, 2, var_590_4_start_jobs, var_596_8_timed_job, 1, var_590_4_start_jobs,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(600, 11),
  POS(601, 11)
};

static FUNCTION_INFO i_lambda_56 = {
  t_lambda_56, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_57[] = {
  2, // locals
  0, // parameters
  // push &remaining_timed_jobs timed_job
  var_push, 2, var_593_4_remaining_timed_jobs, var_596_8_timed_job, 1, var_593_4_remaining_timed_jobs,
  // is_undefined || time < first_job_time:
  var_is_undefined, 1, var_592_4_first_job_time, 1, LOCAL(1),
  // is_undefined || time < first_job_time:
  var_std__or, 2, LOCAL(1), lambda_58, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_59, var_next, IO_TAIL_CALL,
  POS(603, 11),
  POS(605, 28),
  POS(605, 28),
  POS(604, 11)
};

static FUNCTION_INFO i_lambda_57 = {
  t_lambda_57, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_58[] = {
  1, // locals
  0, // parameters
  // time < first_job_time:
  var_std__less, 2, var_597_40_time, var_592_4_first_job_time, 1, LOCAL(1),
  // time < first_job_time:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(605, 44),
  POS(605, 44)
};

static FUNCTION_INFO i_lambda_58 = {
  t_lambda_58, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_59[] = {
  0, // locals
  0, // parameters
  // !first_job_time time
  LET, 1, var_597_40_time, 1, var_592_4_first_job_time,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(606, 15),
  POS(607, 15)
};

static FUNCTION_INFO i_lambda_59 = {
  t_lambda_59, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  0, // parameters
  // self.timed_jobs_of remaining_timed_jobs
  LET, -1, var_573_5_self, var_timed_jobs_of, var_593_4_remaining_timed_jobs, var_573_5_self,
  // set_timeout!
  func_set_timeout, 0, IO_TAIL_CALL,
  POS(610, 8),
  POS(611, 7)
};

static FUNCTION_INFO i_lambda_60 = {
  t_lambda_60, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_set_timeout[] = {
  2, // locals
  0, // parameters
  // !timeout timeout_of(self)
  var_timeout_of, 1, var_573_5_self, 1, var_594_4_timeout,
  // is_defined || first_job_time.is_defined:
  var_is_defined, 1, var_594_4_timeout, 1, LOCAL(1),
  // is_defined || first_job_time.is_defined:
  var_std__or, 2, LOCAL(1), lambda_61, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_62, func_handle_start_jobs, IO_TAIL_CALL,
  POS(614, 5),
  POS(616, 15),
  POS(616, 15),
  POS(615, 5)
};

static FUNCTION_INFO i_func_set_timeout = {
  t_func_set_timeout, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_61[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_592_4_first_job_time, 1, LOCAL(1),
  // first_job_time.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(616, 44),
  POS(616, 29)
};

static FUNCTION_INFO i_lambda_61 = {
  t_lambda_61, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_62[] = {
  2, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_594_4_timeout, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_63, 1, LOCAL(2),
  // update_if
  var_update_if, 3, LOCAL(2), var_594_4_timeout, lambda_timeout, 1, var_594_4_timeout,
  // self.timeout_of undefined
  LET, -1, var_573_5_self, var_timeout_of, var_undefined, var_573_5_self,
  // timeout-t 0)
  var_std__minus, 2, var_594_4_timeout, var_589_18_t, 1, LOCAL(1),
  // !timeout max(timeout-t 0)
  var_max, 2, LOCAL(1), num_0, 1, var_594_4_timeout,
  // 0
  var_std__less, 2, num_0, var_594_4_timeout, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_65, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_66, func_handle_start_jobs, IO_TAIL_CALL,
  POS(619, 21),
  POS(618, 13),
  POS(617, 9),
  POS(622, 10),
  POS(623, 22),
  POS(623, 9),
  POS(626, 23),
  POS(625, 13),
  POS(624, 9)
};

static FUNCTION_INFO i_lambda_62 = {
  t_lambda_62, NULL, 9, 0,
  {}
};

static TAB_NUM t_lambda_63[] = {
  2, // locals
  0, // parameters
  // is_defined && first_job_time < timeout
  var_is_defined, 1, var_592_4_first_job_time, 1, LOCAL(1),
  // is_defined && first_job_time < timeout
  var_std__and, 2, LOCAL(1), lambda_64, 1, LOCAL(2),
  // first_job_time.is_defined && first_job_time < timeout
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(620, 28),
  POS(620, 28),
  POS(620, 13)
};

static FUNCTION_INFO i_lambda_63 = {
  t_lambda_63, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_64[] = {
  1, // locals
  0, // parameters
  // first_job_time < timeout
  var_std__less, 2, var_592_4_first_job_time, var_594_4_timeout, 1, LOCAL(1),
  // first_job_time < timeout
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(620, 42),
  POS(620, 42)
};

static FUNCTION_INFO i_lambda_64 = {
  t_lambda_64, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_timeout[] = {
  0, // locals
  0, // parameters
  //  first_job_time
  LET, 1, var_592_4_first_job_time, TAIL_CALL,
  POS(621, 22)
};

static FUNCTION_INFO i_lambda_timeout = {
  t_lambda_timeout, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_65[] = {
  2, // locals
  0, // parameters
  // exit_codes_of(self): (pid _exit_code)
  var_exit_codes_of, 1, var_573_5_self, 1, LOCAL(1),
  // any_of
  var_any_of, 2, LOCAL(1), lambda_exit_codes_ofself, 1, LOCAL(2),
  // any_of
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(628, 15),
  POS(627, 13),
  POS(627, 13)
};

static FUNCTION_INFO i_lambda_65 = {
  t_lambda_65, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_exit_codes_ofself[] = {
  3, // locals
  2, // parameters
  LOCAL(3), // 628_37_pid
  LOCAL(1),
  // watched_pids_of(self)(pid)
  var_watched_pids_of, 1, var_573_5_self, 1, LOCAL(1),
  // watched_pids_of(self)(pid)
  LOCAL(1), 1, LOCAL(3), 1, LOCAL(2),
  // -> watched_pids_of(self)(pid)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(629, 20),
  POS(629, 20),
  POS(629, 17),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_exit_codes_ofself = {
  t_lambda_exit_codes_ofself, NULL, 3, 1,
  {"628_37_pid\000"}
};

static TAB_NUM t_lambda_66[] = {
  0, // locals
  0, // parameters
  // !timeout 0
  LET, 1, num_0, 1, var_594_4_timeout,
  // handle_start_jobs!
  func_handle_start_jobs, 0, IO_TAIL_CALL,
  POS(631, 13),
  POS(632, 13)
};

static FUNCTION_INFO i_lambda_66 = {
  t_lambda_66, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_handle_start_jobs[] = {
  0, // locals
  0, // parameters
  // for_each start_jobs
  var_for_each, 3, var_590_4_start_jobs, lambda_67, lambda_69, IO_TAIL_CALL,
  POS(637, 5)
};

static FUNCTION_INFO i_func_handle_start_jobs = {
  t_func_handle_start_jobs, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_67[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 638_10_job
  // job $command $arguments
  LOCAL(2), 0, 2, LOCAL(3), LOCAL(4),
  // apply! command &self arguments $new_event
  var_apply, 3, LOCAL(3), var_573_5_self, LOCAL(4), IO_CALL(2), var_573_5_self, var_640_41_new_event,
  // is_defined:
  var_is_defined, 1, var_640_41_new_event, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_new_event_is_defined, var_next, IO_TAIL_CALL,
  POS(639, 9),
  POS(640, 9),
  POS(642, 21),
  POS(641, 9),
  LOCAL(2),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_67 = {
  t_lambda_67, NULL, 4, 3,
  {"638_10_job\000", "639_14_command\000", "639_23_arguments\000"}
};

static TAB_NUM t_lambda_new_event_is_defined[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_640_41_new_event, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_new_event_is_a_list, lambda_68, IO_TAIL_CALL,
  POS(644, 25),
  POS(643, 13)
};

static FUNCTION_INFO i_lambda_new_event_is_defined = {
  t_lambda_new_event_is_defined, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_new_event_is_a_list[] = {
  0, // locals
  0, // parameters
  // append &events new_event
  var_append, 2, var_586_4_events, var_640_41_new_event, 1, var_586_4_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(645, 17),
  POS(646, 17)
};

static FUNCTION_INFO i_lambda_new_event_is_a_list = {
  t_lambda_new_event_is_a_list, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_68[] = {
  0, // locals
  0, // parameters
  // push &events new_event
  var_push, 2, var_586_4_events, var_640_41_new_event, 1, var_586_4_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(648, 17),
  POS(649, 17)
};

static FUNCTION_INFO i_lambda_68 = {
  t_lambda_68, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_69[] = {
  1, // locals
  0, // parameters
  // !start_jobs start_jobs_of(self)
  var_start_jobs_of, 1, var_573_5_self, 1, var_590_4_start_jobs,
  // self.start_jobs_of empty_list
  LET, -1, var_573_5_self, var_start_jobs_of, var_empty_list, var_573_5_self,
  // is_empty
  var_is_empty, 1, var_590_4_start_jobs, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), func_handle_write_jobs, func_handle_start_jobs, IO_TAIL_CALL,
  POS(653, 9),
  POS(654, 10),
  POS(656, 22),
  POS(655, 9)
};

static FUNCTION_INFO i_lambda_69 = {
  t_lambda_69, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_handle_write_jobs[] = {
  1, // locals
  0, // parameters
  // write_jobs_of(self)
  var_write_jobs_of, 1, var_573_5_self, 1, LOCAL(1),
  // for_each write_jobs_of(self)
  var_for_each, 3, LOCAL(1), lambda_70, func_wait_for_events, IO_TAIL_CALL,
  POS(661, 14),
  POS(661, 5)
};

static FUNCTION_INFO i_func_handle_write_jobs = {
  t_func_handle_write_jobs, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_70[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 662_10_fd
  LOCAL(1),
  // push &want_to_write fd
  var_push, 2, var_587_4_want_to_write, LOCAL(2), 1, var_587_4_want_to_write,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(663, 9),
  POS(664, 9),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_70 = {
  t_lambda_70, NULL, 2, 1,
  {"662_10_fd\000"}
};

static TAB_NUM t_func_wait_for_events[] = {
  2, // locals
  0, // parameters
  // $read_descriptor_list empty_list
  LET, 1, var_empty_list, 1, var_668_8_read_descriptor_list,
  // read_jobs_of(self)
  var_read_jobs_of, 1, var_573_5_self, 1, LOCAL(1),
  // for_each !read_descriptor_list read_jobs_of(self)
  var_for_each, 3, LOCAL(1), lambda_71, lambda_72, IO_CALL(1), var_668_8_read_descriptor_list,
  // is_not_empty &timeout -> 0
  var_is_not_empty, 1, var_586_4_events, 1, LOCAL(1),
  // update_if events.is_not_empty &timeout -> 0
  var_update_if, 3, LOCAL(1), var_594_4_timeout, lambda_73, 1, var_594_4_timeout,
  // pselect!
  var_pselect, 4, var_668_8_read_descriptor_list, var_587_4_want_to_write, var_empty_list, var_594_4_timeout, IO_CALL(4), LOCAL(2), var_677_10_can_read, var_678_10_can_write, LOCAL(1),
  // current_time! !self.current_time_of
  var_current_time, 0, IO_CALL(1), LOCAL(1),
  // self.current_time_of
  LET, -1, var_573_5_self, var_current_time_of, LOCAL(1), var_573_5_self,
  // $injected_into_stdin false
  LET, 1, var_false, 1, var_682_8_injected_into_stdin,
  // $write_jobs write_jobs_of(self)
  var_write_jobs_of, 1, var_573_5_self, 1, var_683_8_write_jobs,
  // for_each signals
  var_for_each, 3, LOCAL(2), lambda_74, func_handle_write_requests, IO_TAIL_CALL,
  POS(668, 7),
  POS(669, 38),
  POS(669, 7),
  POS(674, 24),
  POS(674, 7),
  POS(675, 7),
  POS(681, 7),
  POS(681, 22),
  POS(682, 7),
  POS(683, 7),
  POS(684, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_func_wait_for_events = {
  t_func_wait_for_events, NULL, 11, 1,
  {"676_10_signals\000"}
};

static TAB_NUM t_lambda_71[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 670_12_fd
  LOCAL(1),
  // push &read_descriptor_list fd
  var_push, 2, var_668_8_read_descriptor_list, LOCAL(2), 1, var_668_8_read_descriptor_list,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(671, 11),
  POS(672, 11),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_71 = {
  t_lambda_71, NULL, 2, 1,
  {"670_12_fd\000"}
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  0, // parameters
  //  read_descriptor_list
  LET, 1, var_668_8_read_descriptor_list, TAIL_CALL,
  POS(673, 11)
};

static FUNCTION_INFO i_lambda_72 = {
  t_lambda_72, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_73[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(674, 48)
};

static FUNCTION_INFO i_lambda_73 = {
  t_lambda_73, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_74[] = {
  0, // locals
  1, // parameters
  var_685_12_signal,
  // case signal
  var_case, 6, var_685_12_signal, var_SIGCHLD, lambda_SIGCHLD, var_SIGWINCH, lambda_SIGWINCH, lambda_79, IO_TAIL_CALL,
  POS(686, 11)
};

static FUNCTION_INFO i_lambda_74 = {
  t_lambda_74, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_SIGCHLD[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_75, var_next, IO_TAIL_CALL,
  POS(688, 15)
};

static FUNCTION_INFO i_lambda_SIGCHLD = {
  t_lambda_SIGCHLD, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_75[] = {
  2, // locals
  0, // parameters
  // process_id(-1)
  var_process_id, 1, minus_num_1, 1, LOCAL(1),
  // waitpid! $pid $status process_id(-1)
  var_waitpid, 1, LOCAL(1), IO_CALL(2), var_690_29_pid, var_690_34_status,
  // is_an_error || pid.to_integer == 0
  var_is_an_error, 1, var_690_29_pid, 1, LOCAL(1),
  // is_an_error || pid.to_integer == 0
  var_std__or, 2, LOCAL(1), lambda_76, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_break, lambda_77, IO_TAIL_CALL,
  POS(690, 41),
  POS(690, 19),
  POS(692, 25),
  POS(692, 25),
  POS(691, 19)
};

static FUNCTION_INFO i_lambda_75 = {
  t_lambda_75, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_76[] = {
  2, // locals
  0, // parameters
  // to_integer == 0
  var_to_integer, 1, var_690_29_pid, 1, LOCAL(1),
  // to_integer == 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // pid.to_integer == 0
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(692, 44),
  POS(692, 44),
  POS(692, 40)
};

static FUNCTION_INFO i_lambda_76 = {
  t_lambda_76, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_77[] = {
  2, // locals
  0, // parameters
  // exitstatus &status
  var_exitstatus, 1, var_690_34_status, 1, var_690_34_status,
  // watched_pids_of(self)(pid):
  var_watched_pids_of, 1, var_573_5_self, 1, LOCAL(1),
  // watched_pids_of(self)(pid):
  LOCAL(1), 1, var_690_29_pid, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_watched_pids_ofselfpid, lambda_78, IO_TAIL_CALL,
  POS(695, 23),
  POS(697, 25),
  POS(697, 25),
  POS(696, 23)
};

static FUNCTION_INFO i_lambda_77 = {
  t_lambda_77, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_watched_pids_ofselfpid[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(pid) false
  var_watched_pids_of, 1, var_573_5_self, 1, LOCAL(2),
  // watched_pids_of(pid) false
  LOCAL(2), 2, var_690_29_pid, var_false, 1, LOCAL(2),
  // self.watched_pids_of(pid) false
  LET, -1, var_573_5_self, var_watched_pids_of, LOCAL(2), var_573_5_self,
  // typed_tuple
  var_typed_tuple, 4, var_std_types__event, var_PROCESS_JOINED, var_690_29_pid, var_690_34_status, 1, LOCAL(1),
  // push &events
  var_push, 2, var_586_4_events, LOCAL(1), 1, var_586_4_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(698, 33),
  POS(698, 33),
  POS(698, 28),
  POS(700, 29),
  POS(699, 27),
  POS(702, 27)
};

static FUNCTION_INFO i_lambda_watched_pids_ofselfpid = {
  t_lambda_watched_pids_ofselfpid, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_78[] = {
  2, // locals
  0, // parameters
  // exit_codes_of(pid) status
  var_exit_codes_of, 1, var_573_5_self, 1, LOCAL(2),
  // exit_codes_of(pid) status
  LOCAL(2), 2, var_690_29_pid, var_690_34_status, 1, LOCAL(2),
  // self.exit_codes_of(pid) status
  LET, -1, var_573_5_self, var_exit_codes_of, LOCAL(2), var_573_5_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(704, 33),
  POS(704, 33),
  POS(704, 28),
  POS(705, 27)
};

static FUNCTION_INFO i_lambda_78 = {
  t_lambda_78, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_SIGWINCH[] = {
  0, // locals
  0, // parameters
  // self.window_change_event_occurred true
  LET, -1, var_573_5_self, var_window_change_event_occurred, var_true, var_573_5_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(708, 16),
  POS(709, 15)
};

static FUNCTION_INFO i_lambda_SIGWINCH = {
  t_lambda_SIGWINCH, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_79[] = {
  2, // locals
  0, // parameters
  // catched_signals_of(self)(signal):
  var_catched_signals_of, 1, var_573_5_self, 1, LOCAL(1),
  // catched_signals_of(self)(signal):
  LOCAL(1), 1, var_685_12_signal, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_catched_signals_ofselfsignal, var_next, IO_TAIL_CALL,
  POS(712, 17),
  POS(712, 17),
  POS(711, 15)
};

static FUNCTION_INFO i_lambda_79 = {
  t_lambda_79, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_catched_signals_ofselfsignal[] = {
  1, // locals
  0, // parameters
  // typed_tuple(std_types::event SIGNAL undefined signal)
  var_typed_tuple, 4, var_std_types__event, var_SIGNAL, var_undefined, var_685_12_signal, 1, LOCAL(1),
  // push &events
  var_push, 2, var_586_4_events, LOCAL(1), 1, var_586_4_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(714, 21),
  POS(713, 19),
  POS(715, 19)
};

static FUNCTION_INFO i_lambda_catched_signals_ofselfsignal = {
  t_lambda_catched_signals_ofselfsignal, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_handle_write_requests[] = {
  2, // locals
  0, // parameters
  // window_change_event_occurred
  var_window_change_event_occurred, 1, var_573_5_self, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_80, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_82, lambda_83, IO_TAIL_CALL,
  POS(722, 18),
  POS(721, 13),
  POS(720, 9)
};

static FUNCTION_INFO i_func_handle_write_requests = {
  t_func_handle_write_requests, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_80[] = {
  2, // locals
  0, // parameters
  // do_inject_window_change_events
  var_do_inject_window_change_events, 1, var_573_5_self, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_81, 1, LOCAL(2),
  // self.do_inject_window_change_events
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(723, 18),
  POS(721, 13),
  POS(723, 13)
};

static FUNCTION_INFO i_lambda_80 = {
  t_lambda_80, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_81[] = {
  3, // locals
  0, // parameters
  // read_jobs_of(self)(STDIN_FILENO).is_defined
  var_read_jobs_of, 1, var_573_5_self, 1, LOCAL(1),
  // read_jobs_of(self)(STDIN_FILENO).is_defined
  LOCAL(1), 1, var_STDIN_FILENO, 1, LOCAL(2),
  // is_defined
  var_is_defined, 1, LOCAL(2), 1, LOCAL(3),
  // read_jobs_of(self)(STDIN_FILENO).is_defined
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(724, 13),
  POS(724, 13),
  POS(724, 46),
  POS(724, 13)
};

static FUNCTION_INFO i_lambda_81 = {
  t_lambda_81, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_82[] = {
  4, // locals
  0, // parameters
  // get_terminal_size! STDIN_FILENO $width $height
  var_get_terminal_size, 1, var_STDIN_FILENO, IO_CALL(2), LOCAL(2), LOCAL(3),
  // self.window_change_event_occurred false
  LET, -1, var_573_5_self, var_window_change_event_occurred, var_false, var_573_5_self,
  // $buf "@esc;[8;@(height);@(width)t"
  var_std__string, 5, string_4, LOCAL(3), string_5, LOCAL(2), str_t, 1, LOCAL(4),
  // typed_tuple(std_types::event READ STDIN_FILENO buf)
  var_typed_tuple, 4, var_std_types__event, var_READ, var_STDIN_FILENO, LOCAL(4), 1, LOCAL(1),
  // push &events typed_tuple(std_types::event READ STDIN_FILENO buf)
  var_push, 2, var_586_4_events, LOCAL(1), 1, var_586_4_events,
  // !injected_into_stdin true
  LET, 1, var_true, 1, var_682_8_injected_into_stdin,
  // check_file_descriptors!
  func_check_file_descriptors, 0, IO_TAIL_CALL,
  POS(726, 13),
  POS(727, 14),
  POS(728, 13),
  POS(729, 26),
  POS(729, 13),
  POS(730, 13),
  POS(731, 13),
  LOCAL(4),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_82 = {
  t_lambda_82, NULL, 7, 3,
  {"728_14_buf\000", "726_53_height\000", "726_46_width\000"}
};

static TAB_NUM t_lambda_83[] = {
  0, // locals
  0, // parameters
  // check_file_descriptors!
  func_check_file_descriptors, 0, IO_TAIL_CALL,
  POS(733, 13)
};

static FUNCTION_INFO i_lambda_83 = {
  t_lambda_83, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_check_file_descriptors[] = {
  0, // locals
  0, // parameters
  // for_each can_write
  var_for_each, 3, var_678_10_can_write, lambda_84, func_attempt_reads, IO_TAIL_CALL,
  POS(736, 9)
};

static FUNCTION_INFO i_func_check_file_descriptors = {
  t_func_check_file_descriptors, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_84[] = {
  1, // locals
  1, // parameters
  var_737_14_fd,
  // $job write_jobs(fd)
  var_683_8_write_jobs, 1, var_737_14_fd, 1, var_738_14_job,
  // write! $bytes_written fd job
  var_write, 2, var_737_14_fd, var_738_14_job, IO_CALL(1), var_739_21_bytes_written,
  // is_an_error:
  var_is_an_error, 1, var_739_21_bytes_written, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_bytes_written_is_an_error, lambda_85, IO_TAIL_CALL,
  POS(738, 13),
  POS(739, 13),
  POS(741, 29),
  POS(740, 13)
};

static FUNCTION_INFO i_lambda_84 = {
  t_lambda_84, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_bytes_written_is_an_error[] = {
  2, // locals
  0, // parameters
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, var_573_5_self, 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, var_737_14_fd, var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, var_573_5_self, var_write_jobs_of, LOCAL(2), var_573_5_self,
  // typed_tuple
  var_typed_tuple, 4, var_std_types__event, var_WRITE_FAILED, var_737_14_fd, var_739_21_bytes_written, 1, LOCAL(1),
  // push &events
  var_push, 2, var_586_4_events, LOCAL(1), 1, var_586_4_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(742, 23),
  POS(742, 23),
  POS(742, 18),
  POS(744, 19),
  POS(743, 17),
  POS(748, 17)
};

static FUNCTION_INFO i_lambda_bytes_written_is_an_error = {
  t_lambda_bytes_written_is_an_error, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_85[] = {
  2, // locals
  0, // parameters
  // length_of(job):
  var_length_of, 1, var_738_14_job, 1, LOCAL(1),
  // bytes_written < length_of(job):
  var_std__less, 2, var_739_21_bytes_written, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_86, lambda_87, IO_TAIL_CALL,
  POS(751, 35),
  POS(751, 19),
  POS(750, 17)
};

static FUNCTION_INFO i_lambda_85 = {
  t_lambda_85, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_86[] = {
  2, // locals
  0, // parameters
  // bytes_written+1 -1
  var_std__plus, 2, var_739_21_bytes_written, num_1, 1, LOCAL(1),
  // range &job bytes_written+1 -1
  var_range, 3, var_738_14_job, LOCAL(1), minus_num_1, 1, var_738_14_job,
  // write_jobs_of(fd) job # remaining text to write
  var_write_jobs_of, 1, var_573_5_self, 1, LOCAL(2),
  // write_jobs_of(fd) job # remaining text to write
  LOCAL(2), 2, var_737_14_fd, var_738_14_job, 1, LOCAL(2),
  // self.write_jobs_of(fd) job # remaining text to write
  LET, -1, var_573_5_self, var_write_jobs_of, LOCAL(2), var_573_5_self,
  // typed_tuple(std_types::event WRITE_PENDING fd job)
  var_typed_tuple, 4, var_std_types__event, var_WRITE_PENDING, var_737_14_fd, var_738_14_job, 1, LOCAL(1),
  // push &events
  var_push, 2, var_586_4_events, LOCAL(1), 1, var_586_4_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(752, 32),
  POS(752, 21),
  POS(753, 27),
  POS(753, 27),
  POS(753, 22),
  POS(755, 23),
  POS(754, 21),
  POS(756, 21)
};

static FUNCTION_INFO i_lambda_86 = {
  t_lambda_86, NULL, 8, 0,
  {}
};

static TAB_NUM t_lambda_87[] = {
  2, // locals
  0, // parameters
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, var_573_5_self, 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, var_737_14_fd, var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, var_573_5_self, var_write_jobs_of, LOCAL(2), var_573_5_self,
  // typed_tuple(std_types::event WRITE_COMPLETED fd undefined)
  var_typed_tuple, 4, var_std_types__event, var_WRITE_COMPLETED, var_737_14_fd, var_undefined, 1, LOCAL(1),
  // push &events
  var_push, 2, var_586_4_events, LOCAL(1), 1, var_586_4_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(758, 27),
  POS(758, 27),
  POS(758, 22),
  POS(760, 23),
  POS(759, 21),
  POS(761, 21)
};

static FUNCTION_INFO i_lambda_87 = {
  t_lambda_87, NULL, 6, 0,
  {}
};

static TAB_NUM t_func_attempt_reads[] = {
  0, // locals
  0, // parameters
  // for_each can_read
  var_for_each, 3, var_677_10_can_read, lambda_88, lambda_100, IO_TAIL_CALL,
  POS(765, 9)
};

static FUNCTION_INFO i_func_attempt_reads = {
  t_func_attempt_reads, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_88[] = {
  3, // locals
  1, // parameters
  var_766_14_fd,
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__equal, 2, var_766_14_fd, var_STDIN_FILENO, 1, LOCAL(1),
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__or, 2, LOCAL(2), lambda_89, 1, LOCAL(3),
  // if_not fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_if_not, 3, LOCAL(3), var_next, lambda_90, IO_TAIL_CALL,
  POS(767, 20),
  POS(767, 20),
  POS(767, 20),
  POS(767, 13)
};

static FUNCTION_INFO i_lambda_88 = {
  t_lambda_88, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_89[] = {
  1, // locals
  0, // parameters
  // not(injected_into_stdin) next:
  var_not, 1, var_682_8_injected_into_stdin, 1, LOCAL(1),
  // not(injected_into_stdin) next:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(767, 42),
  POS(767, 42)
};

static FUNCTION_INFO i_lambda_89 = {
  t_lambda_89, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_90[] = {
  3, // locals
  0, // parameters
  // fstat! fd $info
  var_fstat, 1, var_766_14_fd, IO_CALL(1), LOCAL(3),
  // type_of(info) == SOCKET:
  var_type_of, 1, LOCAL(3), 1, LOCAL(1),
  // type_of(info) == SOCKET:
  var_std__equal, 2, LOCAL(1), var_SOCKET, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_91, func_do_read, IO_TAIL_CALL,
  POS(768, 15),
  POS(770, 17),
  POS(770, 17),
  POS(769, 15),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_90 = {
  t_lambda_90, NULL, 4, 1,
  {"768_26_info\000"}
};

static TAB_NUM t_lambda_91[] = {
  1, // locals
  0, // parameters
  // is_listening! $does_listen fd
  var_is_listening, 1, var_766_14_fd, IO_CALL(1), LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_does_listen, func_do_read, IO_TAIL_CALL,
  POS(771, 19),
  POS(772, 19),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_91 = {
  t_lambda_91, NULL, 2, 1,
  {"771_34_does_listen\000"}
};

static TAB_NUM t_lambda_does_listen[] = {
  1, // locals
  0, // parameters
  // accept! $conn fd
  var_accept, 1, var_766_14_fd, IO_CALL(1), var_774_32_conn,
  // is_an_error:
  var_is_an_error, 1, var_774_32_conn, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_conn_is_an_error, lambda_92, IO_TAIL_CALL,
  POS(774, 23),
  POS(776, 30),
  POS(775, 23)
};

static FUNCTION_INFO i_lambda_does_listen = {
  t_lambda_does_listen, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_conn_is_an_error[] = {
  1, // locals
  0, // parameters
  // typed_tuple(std_types::event READ_FAILED fd conn)
  var_typed_tuple, 4, var_std_types__event, var_READ_FAILED, var_766_14_fd, var_774_32_conn, 1, LOCAL(1),
  // push &events
  var_push, 2, var_586_4_events, LOCAL(1), 1, var_586_4_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(778, 29),
  POS(777, 27),
  POS(779, 27)
};

static FUNCTION_INFO i_lambda_conn_is_an_error = {
  t_lambda_conn_is_an_error, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_92[] = {
  1, // locals
  0, // parameters
  // typed_tuple(std_types::event CONNECT fd conn)
  var_typed_tuple, 4, var_std_types__event, var_CONNECT, var_766_14_fd, var_774_32_conn, 1, LOCAL(1),
  // push &events
  var_push, 2, var_586_4_events, LOCAL(1), 1, var_586_4_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(782, 29),
  POS(781, 27),
  POS(783, 27)
};

static FUNCTION_INFO i_lambda_92 = {
  t_lambda_92, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_do_read[] = {
  4, // locals
  0, // parameters
  // read_jobs_of(self)(fd)
  var_read_jobs_of, 1, var_573_5_self, 1, LOCAL(1),
  // $do_close_and_max_length read_jobs_of(self)(fd)
  LOCAL(1), 1, var_766_14_fd, 1, LOCAL(3),
  // do_close_and_max_length $do_close $max_length
  LOCAL(3), 0, 2, var_789_42_do_close, var_789_52_max_length,
  // is_defined && max_length < 0x10'0000
  var_is_defined, 1, var_789_52_max_length, 1, LOCAL(1),
  // is_defined && max_length < 0x10'0000
  var_std__and, 2, LOCAL(1), lambda_93, 1, LOCAL(2),
  // $length
  var_if, 3, LOCAL(2), lambda_94, lambda_95, 1, LOCAL(4),
  // read! $buf fd length
  var_read, 2, var_766_14_fd, LOCAL(4), IO_CALL(1), var_795_24_buf,
  // is_an_error:
  var_is_an_error, 1, var_795_24_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_an_error, lambda_96, IO_TAIL_CALL,
  POS(788, 42),
  POS(788, 17),
  POS(789, 17),
  POS(792, 32),
  POS(792, 32),
  POS(790, 17),
  POS(795, 17),
  POS(797, 23),
  POS(796, 17),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_do_read = {
  t_func_do_read, NULL, 9, 2,
  {"788_18_do_close_and_max_length\000", "790_18_length\000"}
};

static TAB_NUM t_lambda_93[] = {
  1, // locals
  0, // parameters
  // max_length < 0x10'0000
  var_std__less, 2, var_789_52_max_length, num_0x100000, 1, LOCAL(1),
  // max_length < 0x10'0000
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(792, 46),
  POS(792, 46)
};

static FUNCTION_INFO i_lambda_93 = {
  t_lambda_93, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  //  max_length
  LET, 1, var_789_52_max_length, TAIL_CALL,
  POS(793, 23)
};

static FUNCTION_INFO i_lambda_94 = {
  t_lambda_94, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_95[] = {
  0, // locals
  0, // parameters
  //  0x10'0000
  LET, 1, num_0x100000, TAIL_CALL,
  POS(794, 23)
};

static FUNCTION_INFO i_lambda_95 = {
  t_lambda_95, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_buf_is_an_error[] = {
  1, // locals
  0, // parameters
  // typed_tuple(std_types::event READ_FAILED fd buf)
  var_typed_tuple, 4, var_std_types__event, var_READ_FAILED, var_766_14_fd, var_795_24_buf, 1, LOCAL(1),
  // push &events typed_tuple(std_types::event READ_FAILED fd buf)
  var_push, 2, var_586_4_events, LOCAL(1), 1, var_586_4_events,
  // if
  var_if, 3, var_789_42_do_close, lambda_do_close, var_next, IO_TAIL_CALL,
  POS(798, 34),
  POS(798, 21),
  POS(799, 21)
};

static FUNCTION_INFO i_lambda_buf_is_an_error = {
  t_lambda_buf_is_an_error, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_do_close[] = {
  0, // locals
  0, // parameters
  // close &self fd
  var_close, 2, var_573_5_self, var_766_14_fd, 1, var_573_5_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(801, 25),
  POS(802, 25)
};

static FUNCTION_INFO i_lambda_do_close = {
  t_lambda_do_close, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_96[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_795_24_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_empty, lambda_97, IO_TAIL_CALL,
  POS(806, 27),
  POS(805, 21)
};

static FUNCTION_INFO i_lambda_96 = {
  t_lambda_96, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_buf_is_empty[] = {
  1, // locals
  0, // parameters
  // stop_reading_from &self fd
  var_stop_reading_from, 2, var_573_5_self, var_766_14_fd, 1, var_573_5_self,
  // typed_tuple(std_types::event CLOSED fd undefined)
  var_typed_tuple, 4, var_std_types__event, var_CLOSED, var_766_14_fd, var_undefined, 1, LOCAL(1),
  // push &events typed_tuple(std_types::event CLOSED fd undefined)
  var_push, 2, var_586_4_events, LOCAL(1), 1, var_586_4_events,
  // if
  var_if, 3, var_789_42_do_close, lambda_2_do_close, var_next, IO_TAIL_CALL,
  POS(807, 25),
  POS(808, 38),
  POS(808, 25),
  POS(809, 25)
};

static FUNCTION_INFO i_lambda_buf_is_empty = {
  t_lambda_buf_is_empty, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_2_do_close[] = {
  0, // locals
  0, // parameters
  // close &self fd
  var_close, 2, var_573_5_self, var_766_14_fd, 1, var_573_5_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(811, 29),
  POS(812, 29)
};

static FUNCTION_INFO i_lambda_2_do_close = {
  t_lambda_2_do_close, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_97[] = {
  1, // locals
  0, // parameters
  // typed_tuple(std_types::event READ fd buf)
  var_typed_tuple, 4, var_std_types__event, var_READ, var_766_14_fd, var_795_24_buf, 1, LOCAL(1),
  // push &events typed_tuple(std_types::event READ fd buf)
  var_push, 2, var_586_4_events, LOCAL(1), 1, var_586_4_events,
  // is_defined:
  var_is_defined, 1, var_789_52_max_length, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_max_length_is_defined, var_next, IO_TAIL_CALL,
  POS(815, 38),
  POS(815, 25),
  POS(817, 38),
  POS(816, 25)
};

static FUNCTION_INFO i_lambda_97 = {
  t_lambda_97, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_max_length_is_defined[] = {
  2, // locals
  0, // parameters
  // length_of(buf) < max_length:
  var_length_of, 1, var_795_24_buf, 1, LOCAL(1),
  // length_of(buf) < max_length:
  var_std__less, 2, LOCAL(1), var_789_52_max_length, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_98, lambda_99, IO_TAIL_CALL,
  POS(819, 31),
  POS(819, 31),
  POS(818, 29)
};

static FUNCTION_INFO i_lambda_max_length_is_defined = {
  t_lambda_max_length_is_defined, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_98[] = {
  5, // locals
  0, // parameters
  // length_of(buf))
  var_length_of, 1, var_795_24_buf, 1, LOCAL(1),
  // max_length-length_of(buf))
  var_std__minus, 2, var_789_52_max_length, LOCAL(1), 1, LOCAL(2),
  // !self.read_jobs_of(fd)
  var_tuple, 2, var_true, LOCAL(2), 1, LOCAL(4),
  // read_jobs_of(fd)
  var_read_jobs_of, 1, var_573_5_self, 1, LOCAL(5),
  // read_jobs_of(fd)
  LOCAL(5), 2, var_766_14_fd, LOCAL(4), 1, LOCAL(5),
  // self.read_jobs_of(fd)
  LET, -1, var_573_5_self, var_read_jobs_of, LOCAL(5), var_573_5_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(821, 57),
  POS(821, 46),
  POS(820, 33),
  POS(820, 39),
  POS(820, 39),
  POS(820, 34),
  POS(822, 33)
};

static FUNCTION_INFO i_lambda_98 = {
  t_lambda_98, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_99[] = {
  0, // locals
  0, // parameters
  // stop_reading_from &self fd
  var_stop_reading_from, 2, var_573_5_self, var_766_14_fd, 1, var_573_5_self,
  // if
  var_if, 3, var_789_42_do_close, lambda_3_do_close, var_next, IO_TAIL_CALL,
  POS(824, 33),
  POS(825, 33)
};

static FUNCTION_INFO i_lambda_99 = {
  t_lambda_99, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_3_do_close[] = {
  0, // locals
  0, // parameters
  // close &self fd
  var_close, 2, var_573_5_self, var_766_14_fd, 1, var_573_5_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(827, 37),
  POS(828, 37)
};

static FUNCTION_INFO i_lambda_3_do_close = {
  t_lambda_3_do_close, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_100[] = {
  0, // locals
  0, // parameters
  // attempt_close_operations! &self
  func_attempt_close_operations, 1, var_573_5_self, IO_CALL(1), var_573_5_self,
  // attempt_exit! &self
  func_attempt_exit, 1, var_573_5_self, IO_CALL(1), var_573_5_self,
  // -> self events
  LET, 2, var_573_5_self, var_586_4_events, TAIL_CALL,
  POS(832, 13),
  POS(834, 13),
  POS(836, 13)
};

static FUNCTION_INFO i_lambda_100 = {
  t_lambda_100, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_attempt_close_operations[] = {
  1, // locals
  1, // parameters
  var_838_29_io,
  // close_jobs_of(io)
  var_close_jobs_of, 1, var_838_29_io, 1, LOCAL(1),
  // for_each close_jobs_of(io)
  var_for_each, 3, LOCAL(1), lambda_101, lambda_102, IO_TAIL_CALL,
  POS(839, 12),
  POS(839, 3)
};

static FUNCTION_INFO i_func_attempt_close_operations = {
  t_func_attempt_close_operations, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_101[] = {
  3, // locals
  1, // parameters
  var_840_8_fd,
  // write_jobs_of(io)(fd).is_undefined:
  var_write_jobs_of, 1, var_838_29_io, 1, LOCAL(1),
  // write_jobs_of(io)(fd).is_undefined:
  LOCAL(1), 1, var_840_8_fd, 1, LOCAL(2),
  // is_undefined:
  var_is_undefined, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_write_jobs_ofiofd_is_undefined, var_next, IO_TAIL_CALL,
  POS(842, 9),
  POS(842, 9),
  POS(842, 31),
  POS(841, 7)
};

static FUNCTION_INFO i_lambda_101 = {
  t_lambda_101, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_write_jobs_ofiofd_is_undefined[] = {
  2, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_840_8_fd, IO_CALL(0),
  // close_jobs_of(fd) false
  var_close_jobs_of, 1, var_838_29_io, 1, LOCAL(2),
  // close_jobs_of(fd) false
  LOCAL(2), 2, var_840_8_fd, var_false, 1, LOCAL(2),
  // io.close_jobs_of(fd) false
  LET, -1, var_838_29_io, var_close_jobs_of, LOCAL(2), var_838_29_io,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(843, 11),
  POS(844, 15),
  POS(844, 15),
  POS(844, 12),
  POS(845, 11)
};

static FUNCTION_INFO i_lambda_write_jobs_ofiofd_is_undefined = {
  t_lambda_write_jobs_ofiofd_is_undefined, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_102[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_838_29_io, TAIL_CALL,
  POS(847, 7)
};

static FUNCTION_INFO i_lambda_102 = {
  t_lambda_102, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_attempt_exit[] = {
  2, // locals
  1, // parameters
  var_849_17_io,
  // exit_code_of(io).is_defined:
  var_exit_code_of, 1, var_849_17_io, 1, LOCAL(1),
  // is_defined:
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_exit_code_ofio_is_defined, lambda_106, IO_TAIL_CALL,
  POS(851, 5),
  POS(851, 22),
  POS(850, 3)
};

static FUNCTION_INFO i_func_attempt_exit = {
  t_func_attempt_exit, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_exit_code_ofio_is_defined[] = {
  1, // locals
  0, // parameters
  // resources_of(io)
  var_resources_of, 1, var_849_17_io, 1, LOCAL(1),
  // for_each resources_of(io)
  var_for_each, 3, LOCAL(1), lambda_103, lambda_104, IO_TAIL_CALL,
  POS(852, 16),
  POS(852, 7)
};

static FUNCTION_INFO i_lambda_exit_code_ofio_is_defined = {
  t_lambda_exit_code_ofio_is_defined, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_103[] = {
  1, // locals
  1, // parameters
  var_853_12_resource,
  // do_log_of(resource):
  var_do_log_of, 1, var_853_12_resource, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_do_log_ofresource, func_finalize_resource, IO_TAIL_CALL,
  POS(855, 13),
  POS(854, 11)
};

static FUNCTION_INFO i_lambda_103 = {
  t_lambda_103, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_do_log_ofresource[] = {
  2, // locals
  0, // parameters
  // name_of(resource))"
  var_name_of, 1, var_853_12_resource, 1, LOCAL(1),
  // "finalizing @(name_of(resource))"
  var_std__string, 2, str_finalizing, LOCAL(1), 1, LOCAL(2),
  // log &io 3 "finalizing @(name_of(resource))"
  var_log, 3, var_849_17_io, num_3, LOCAL(2), 1, var_849_17_io,
  // finalize_resource!
  func_finalize_resource, 0, IO_TAIL_CALL,
  POS(856, 39),
  POS(856, 25),
  POS(856, 15),
  POS(857, 15)
};

static FUNCTION_INFO i_lambda_do_log_ofresource = {
  t_lambda_do_log_ofresource, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_finalize_resource[] = {
  0, // locals
  0, // parameters
  // finalize! resource &io
  var_finalize, 2, var_853_12_resource, var_849_17_io, IO_CALL(1), var_849_17_io,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(861, 13),
  POS(862, 13)
};

static FUNCTION_INFO i_func_finalize_resource = {
  t_func_finalize_resource, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_104[] = {
  1, // locals
  0, // parameters
  // io.resources_of empty_list
  LET, -1, var_849_17_io, var_resources_of, var_empty_list, var_849_17_io,
  // is_empty:
  var_is_empty, 1, var_849_17_io, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_io_is_empty, lambda_105, IO_TAIL_CALL,
  POS(864, 12),
  POS(866, 16),
  POS(865, 11)
};

static FUNCTION_INFO i_lambda_104 = {
  t_lambda_104, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_io_is_empty[] = {
  1, // locals
  0, // parameters
  // exit_code_of(io)
  var_exit_code_of, 1, var_849_17_io, 1, LOCAL(1),
  // exit! exit_code_of(io)
  var_exit, 1, LOCAL(1), IO_TAIL_CALL,
  POS(867, 21),
  POS(867, 15)
};

static FUNCTION_INFO i_lambda_io_is_empty = {
  t_lambda_io_is_empty, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_105[] = {
  0, // locals
  0, // parameters
  // kill_child_processes! io
  func_kill_child_processes, 1, var_849_17_io, IO_TAIL_CALL,
  POS(869, 15)
};

static FUNCTION_INFO i_lambda_105 = {
  t_lambda_105, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_106[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_849_17_io, TAIL_CALL,
  POS(870, 7)
};

static FUNCTION_INFO i_lambda_106 = {
  t_lambda_106, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_kill_child_processes[] = {
  1, // locals
  1, // parameters
  var_872_25_io,
  // watched_pids_of(io)
  var_watched_pids_of, 1, var_872_25_io, 1, LOCAL(1),
  // for_each watched_pids_of(io)
  var_for_each, 3, LOCAL(1), lambda_107, lambda_108, IO_TAIL_CALL,
  POS(873, 12),
  POS(873, 3)
};

static FUNCTION_INFO i_func_kill_child_processes = {
  t_func_kill_child_processes, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_107[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 874_8_pid
  // kill! pid SIGKILL
  var_kill, 2, LOCAL(1), var_SIGKILL, IO_CALL(0),
  // next
  var_next, 0, TAIL_CALL,
  POS(875, 7),
  POS(876, 7),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_107 = {
  t_lambda_107, NULL, 2, 1,
  {"874_8_pid\000"}
};

static TAB_NUM t_lambda_108[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_872_25_io, TAIL_CALL,
  POS(877, 7)
};

static FUNCTION_INFO i_lambda_108 = {
  t_lambda_108, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__io___handle_events[] = {
  1, // locals
  2, // parameters
  var_882_32_io,
  LOCAL(1), // 882_35_events
  // $new_events empty_list
  LET, 1, var_empty_list, 1, var_883_4_new_events,
  // $handlers handlers_of(io)
  var_handlers_of, 1, var_882_32_io, 1, var_884_4_handlers,
  // for_each events
  var_for_each, 3, LOCAL(1), lambda_109, lambda_115, TAIL_CALL,
  POS(883, 3),
  POS(884, 3),
  POS(885, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__io___handle_events = {
  t_func_std_types__io___handle_events, NULL, 3, 1,
  {"882_35_events\000"}
};

static TAB_NUM t_lambda_109[] = {
  1, // locals
  1, // parameters
  var_886_8_event,
  // event $type $id $data
  var_886_8_event, 0, 3, var_887_14_type, var_887_20_id, var_887_24_data,
  // $id_handlers handlers(id)
  var_884_4_handlers, 1, var_887_20_id, 1, var_888_8_id_handlers,
  // is_undefined
  var_is_undefined, 1, var_888_8_id_handlers, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_keep_event, lambda_110, TAIL_CALL,
  POS(887, 7),
  POS(888, 7),
  POS(890, 21),
  POS(889, 7)
};

static FUNCTION_INFO i_lambda_109 = {
  t_lambda_109, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_110[] = {
  1, // locals
  0, // parameters
  // $handler id_handlers(type)
  var_888_8_id_handlers, 1, var_887_14_type, 1, var_893_12_handler,
  // is_undefined
  var_is_undefined, 1, var_893_12_handler, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_keep_event, lambda_111, TAIL_CALL,
  POS(893, 11),
  POS(895, 21),
  POS(894, 11)
};

static FUNCTION_INFO i_lambda_110 = {
  t_lambda_110, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_111[] = {
  2, // locals
  0, // parameters
  // $context undefined
  LET, 1, var_undefined, 1, var_898_16_context,
  // is_a_tuple &handler &context
  var_is_a_tuple, 1, var_893_12_handler, 1, LOCAL(1),
  // update_if handler.is_a_tuple &handler &context
  var_update_if, 4, LOCAL(1), var_893_12_handler, var_898_16_context, lambda_112, 2, var_893_12_handler, var_898_16_context,
  // parameter_count_of(handler) == 3:
  var_parameter_count_of, 1, var_893_12_handler, 1, LOCAL(1),
  // parameter_count_of(handler) == 3:
  var_std__equal, 2, LOCAL(1), num_3, 1, LOCAL(2),
  // if !io $new_event
  var_if, 3, LOCAL(2), lambda_113, lambda_114, 2, var_882_32_io, var_901_23_new_event,
  // is_defined:
  var_is_defined, 1, var_901_23_new_event, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_new_event_is_defined, var_next, TAIL_CALL,
  POS(898, 15),
  POS(899, 33),
  POS(899, 15),
  POS(902, 17),
  POS(902, 17),
  POS(901, 15),
  POS(907, 27),
  POS(906, 15)
};

static FUNCTION_INFO i_lambda_111 = {
  t_lambda_111, NULL, 8, 0,
  {}
};

static TAB_NUM t_lambda_112[] = {
  2, // locals
  0, // parameters
  // first(handler) second(handler)
  var_first, 1, var_893_12_handler, 1, LOCAL(1),
  // second(handler)
  var_second, 1, var_893_12_handler, 1, LOCAL(2),
  //  first(handler) second(handler)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(900, 20),
  POS(900, 35),
  POS(900, 19)
};

static FUNCTION_INFO i_lambda_112 = {
  t_lambda_112, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_113[] = {
  0, // locals
  0, // parameters
  // handler io id data
  var_893_12_handler, 3, var_882_32_io, var_887_20_id, var_887_24_data, TAIL_CALL,
  POS(903, 19)
};

static FUNCTION_INFO i_lambda_113 = {
  t_lambda_113, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_114[] = {
  0, // locals
  0, // parameters
  // handler io id data context
  var_893_12_handler, 4, var_882_32_io, var_887_20_id, var_887_24_data, var_898_16_context, TAIL_CALL,
  POS(905, 19)
};

static FUNCTION_INFO i_lambda_114 = {
  t_lambda_114, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_2_new_event_is_defined[] = {
  1, // locals
  0, // parameters
  // is_a_list
  var_is_a_list, 1, var_901_23_new_event, 1, LOCAL(1),
  // update_if_not new_event.is_a_list
  var_update_if_not, 3, LOCAL(1), var_901_23_new_event, lambda_new_event, 1, var_901_23_new_event,
  // handle_events &io &new_event
  var_handle_events, 2, var_882_32_io, var_901_23_new_event, 2, var_882_32_io, var_901_23_new_event,
  // append &new_events new_event
  var_append, 2, var_883_4_new_events, var_901_23_new_event, 1, var_883_4_new_events,
  // next
  var_next, 0, TAIL_CALL,
  POS(908, 43),
  POS(908, 19),
  POS(910, 19),
  POS(911, 19),
  POS(912, 19)
};

static FUNCTION_INFO i_lambda_2_new_event_is_defined = {
  t_lambda_2_new_event_is_defined, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_new_event[] = {
  1, // locals
  0, // parameters
  // list(new_event)
  var_list, 1, var_901_23_new_event, 1, LOCAL(1),
  //  list(new_event)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(909, 35),
  POS(909, 34)
};

static FUNCTION_INFO i_lambda_new_event = {
  t_lambda_new_event, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_keep_event[] = {
  0, // locals
  0, // parameters
  // push &new_events event
  var_push, 2, var_883_4_new_events, var_886_8_event, 1, var_883_4_new_events,
  // next
  var_next, 0, TAIL_CALL,
  POS(916, 9),
  POS(917, 9)
};

static FUNCTION_INFO i_func_keep_event = {
  t_func_keep_event, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_115[] = {
  0, // locals
  0, // parameters
  //  io new_events
  LET, 2, var_882_32_io, var_883_4_new_events, TAIL_CALL,
  POS(918, 7)
};

static FUNCTION_INFO i_lambda_115 = {
  t_lambda_115, NULL, 1, 0,
  {}
};

static int tuple_241_1_arguments[] = {
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
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__resource___enable_logging}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__resource___disable_logging}},
  {FLT_TUPLE, 3, {.arguments = tuple_241_1_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___start_reading_from}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_fd_or_list_is_a_list}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___stop_reading_from}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_fd_or_list_is_a_list}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___print_to}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___write}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___cancel_write}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___close}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___join_process}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_pid_or_list_is_a_list}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___start_injecting_window_change_events}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___stop_injecting_window_change_events}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___start_catching_signals}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___stop_catching_signals}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___set_timeout}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_24}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_25}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_26}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__initialize_logging}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_log_filename_is_defined}},
  {FLT_STRING_8, 2, {.str_8 = "w+"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_27}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_28}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_29}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_30}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___enable_logging}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___disable_logging}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___log}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_31}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_32}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_33}},
  {FLT_STRING_8, 1, {.str_8 = "["}},
  {FLT_STRING_8, 2, {.str_8 = "] "}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_34}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_35}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_36}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___register_handlers}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_37}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_38}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___deregister_handlers}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_39}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_40}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_41}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_42}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___deregister_all_handlers}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___register_resource}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___run}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___run_at}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_43}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___exit}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___is_empty}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_44}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_45}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_46}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__log_unhandled_event}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_47}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_48}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_49}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_50}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_51}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_52}},
  {FLT_POSITIVE_INT64, 0, {.value = 5}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_53}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_54}},
  {FLT_STRING_8, 16, {.str_8 = "unhandled event "}},
  {FLT_STRING_8, 3, {.str_8 = " - "}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___initialize}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___get_events}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_55}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_56}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_57}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_58}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_59}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_60}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_set_timeout}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_61}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_62}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_63}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_64}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_timeout}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_65}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_exit_codes_ofself}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_66}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_handle_start_jobs}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_67}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_new_event_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_new_event_is_a_list}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_68}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_69}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_handle_write_jobs}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_70}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_wait_for_events}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_71}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_72}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_73}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_74}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_SIGCHLD}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_75}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_76}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_77}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_watched_pids_ofselfpid}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_78}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_SIGWINCH}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_79}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_catched_signals_ofselfsignal}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_handle_write_requests}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_80}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_81}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_82}},
  {FLT_STRING_8, 4, {.str_8 = "\033[8;"}},
  {FLT_STRING_8, 1, {.str_8 = ";"}},
  {FLT_STRING_8, 1, {.str_8 = "t"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_83}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_check_file_descriptors}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_84}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_bytes_written_is_an_error}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_85}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_86}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_87}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_attempt_reads}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_88}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_89}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_90}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_91}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_does_listen}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_conn_is_an_error}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_92}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_do_read}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_93}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x100000}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_94}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_95}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_buf_is_an_error}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_do_close}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_96}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_buf_is_empty}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_do_close}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_97}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_max_length_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_98}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_99}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3_do_close}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_100}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_attempt_close_operations}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_101}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_write_jobs_ofiofd_is_undefined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_102}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_attempt_exit}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_exit_code_ofio_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_103}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_do_log_ofresource}},
  {FLT_STRING_8, 11, {.str_8 = "finalizing "}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_finalize_resource}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_104}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_io_is_empty}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_105}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_106}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_kill_child_processes}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_107}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_108}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___handle_events}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_109}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_110}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_111}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_112}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_113}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_114}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_new_event_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_new_event}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_keep_event}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_115}}
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
    {.const_idx = -tuple_241_1}
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
    FOT_UNINITIALIZED, 0, 0,
    "245_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "246_5_fd_or_list\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "247_5_do_close\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "248_5_max_length\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(251, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(251, 49)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(251, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(255, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(259, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(256, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(254, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_reading_from\000", NULL,
    {.position = POS(265, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "267_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "268_5_fd_or_list\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "print_to\000", NULL,
    {.position = POS(285, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(291, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(291, 37)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "write\000", NULL,
    {.position = POS(291, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "297_5_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "299_4_job\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(303, 10)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "cancel_write\000", NULL,
    {.position = POS(308, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "close\000", NULL,
    {.position = POS(317, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "join_process\000", NULL,
    {.position = POS(326, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "328_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "329_5_pid_or_list\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_injecting_window_change_events\000", NULL,
    {.position = POS(346, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_injecting_window_change_events\000", NULL,
    {.position = POS(352, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_catching_signals\000", NULL,
    {.position = POS(358, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "360_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "363_4_catched_signals\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_catching_signals\000", NULL,
    {.position = POS(370, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "372_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "375_4_catched_signals\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "set_timeout\000", NULL,
    {.position = POS(382, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "384_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "385_5_timeout\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_number\000", NULL,
    {.position = POS(387, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(387, 45)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(387, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "388_4_current_timeout\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(390, 37)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "initialize_logging\000std", NULL,
    {.const_idx = -func_std__initialize_logging}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "396_5_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "397_5_log_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "398_5_log_filename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open\000", NULL,
    {.position = POS(402, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDERR_FILENO\000", NULL,
    {.position = POS(403, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dup2\000", NULL,
    {.position = POS(403, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "407_15_stdout_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDOUT_FILENO\000", NULL,
    {.position = POS(407, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "fstat\000", NULL,
    {.position = POS(407, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "408_15_stderr_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inode_number_of\000", NULL,
    {.position = POS(411, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(411, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(411, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "device_of\000", NULL,
    {.position = POS(412, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "log\000", NULL,
    {.position = POS(430, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "432_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "433_5_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "434_5_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(438, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if_not\000", NULL,
    {.position = POS(438, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(439, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(439, 59)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split_into_lines\000", NULL,
    {.position = POS(440, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "441_8_prefix\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(441, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "442_8_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(443, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(446, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spaces\000", NULL,
    {.position = POS(446, 23)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "register_handlers\000", NULL,
    {.position = POS(452, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "454_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "455_5_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "458_4_handlers\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "default_value\000", NULL,
    {.position = POS(458, 13)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deregister_handlers\000", NULL,
    {.position = POS(468, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "470_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "471_5_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "472_5_types\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "474_4_handlers\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deregister_all_handlers\000", NULL,
    {.position = POS(487, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "register_resource\000", NULL,
    {.position = POS(495, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "run\000", NULL,
    {.position = POS(504, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "run_at\000", NULL,
    {.position = POS(513, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "515_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "516_5_time\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "exit\000", NULL,
    {.position = POS(524, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(534, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "536_5_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(539, 7)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "log_unhandled_event\000std", NULL,
    {.const_idx = -func_std__log_unhandled_event}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "545_29_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "546_10_type\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "546_16_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_FAILED\000", NULL,
    {.position = POS(551, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_PENDING\000", NULL,
    {.position = POS(552, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_COMPLETED\000", NULL,
    {.position = POS(553, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(559, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(557, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "serialize\000", NULL,
    {.position = POS(562, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim_right\000", NULL,
    {.position = POS(562, 43)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "initialize\000", NULL,
    {.position = POS(564, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_time\000", NULL,
    {.position = POS(568, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "get_events\000", NULL,
    {.position = POS(571, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "573_5_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(579, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "586_4_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "587_4_want_to_write\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "589_18_t\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "590_4_start_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "592_4_first_job_time\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "593_4_remaining_timed_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "594_4_timeout\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "596_8_timed_job\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "597_40_time\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(623, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(623, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(627, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "640_41_new_event\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "apply\000", NULL,
    {.position = POS(640, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "668_8_read_descriptor_list\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(674, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "677_10_can_read\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "678_10_can_write\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pselect\000", NULL,
    {.position = POS(675, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "682_8_injected_into_stdin\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "683_8_write_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "685_12_signal\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGCHLD\000", NULL,
    {.position = POS(687, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "process_id\000", NULL,
    {.position = POS(690, 41)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "690_29_pid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "690_34_status\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "waitpid\000", NULL,
    {.position = POS(690, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(692, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(692, 44)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(693, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exitstatus\000", NULL,
    {.position = POS(695, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PROCESS_JOINED\000", NULL,
    {.position = POS(701, 48)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "typed_tuple\000", NULL,
    {.position = POS(700, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(688, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGWINCH\000", NULL,
    {.position = POS(707, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGNAL\000", NULL,
    {.position = POS(714, 50)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDIN_FILENO\000", NULL,
    {.position = POS(724, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_terminal_size\000", NULL,
    {.position = POS(726, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ\000", NULL,
    {.position = POS(729, 55)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "737_14_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "738_14_job\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "739_21_bytes_written\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "766_14_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(767, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "type_of\000", NULL,
    {.position = POS(770, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SOCKET\000", NULL,
    {.position = POS(770, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_listening\000", NULL,
    {.position = POS(771, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "774_32_conn\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "accept\000", NULL,
    {.position = POS(774, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ_FAILED\000", NULL,
    {.position = POS(778, 58)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CONNECT\000", NULL,
    {.position = POS(782, 58)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "789_42_do_close\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "789_52_max_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "795_24_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read\000", NULL,
    {.position = POS(795, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CLOSED\000", NULL,
    {.position = POS(808, 67)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(767, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "838_29_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "840_8_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "849_17_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "853_12_resource\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finalize\000", NULL,
    {.position = POS(861, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "872_25_io\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGKILL\000", NULL,
    {.position = POS(875, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "kill\000", NULL,
    {.position = POS(875, 7)}
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
    {.position = POS(882, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "882_32_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "883_4_new_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "884_4_handlers\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "886_8_event\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "887_14_type\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "887_20_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "887_24_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "888_8_id_handlers\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "893_12_handler\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "898_16_context\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_tuple\000", NULL,
    {.position = POS(899, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(900, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "second\000", NULL,
    {.position = POS(900, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(902, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "901_23_new_event\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(909, 35)}
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
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  215, // number of constants
  264, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
