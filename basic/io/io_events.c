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
  tuple_245_1 = -16,
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
  func_std_types__io___set_context = -81,
  func_std_types__io___get_context = -82,
  func_std_types__io___register_handlers = -83,
  lambda_37 = -84,
  lambda_38 = -85,
  func_std_types__io___deregister_handlers = -86,
  lambda_39 = -87,
  lambda_40 = -88,
  lambda_41 = -89,
  lambda_42 = -90,
  func_std_types__io___deregister_all_handlers = -91,
  func_std_types__io___register_resource = -92,
  func_std_types__io___run = -93,
  func_std_types__io___run_at = -94,
  lambda_43 = -95,
  func_std_types__io___exit = -96,
  lambda_err_is_an_error = -97,
  str_ERROR = -98,
  str___exiting = -99,
  lambda_44 = -100,
  str_exiting = -101,
  func_std_types__io___is_empty = -102,
  lambda_45 = -103,
  lambda_46 = -104,
  lambda_47 = -105,
  func_std__log_unhandled_event = -106,
  lambda_48 = -107,
  lambda_49 = -108,
  lambda_50 = -109,
  lambda_51 = -110,
  lambda_52 = -111,
  lambda_53 = -112,
  num_5 = -113,
  lambda_54 = -114,
  lambda_55 = -115,
  str_unhandled_event = -116,
  string_3 = -117,
  func_std_types__io___initialize = -118,
  func_std_types__io___get_events = -119,
  lambda_56 = -120,
  lambda_57 = -121,
  lambda_58 = -122,
  lambda_59 = -123,
  lambda_60 = -124,
  lambda_61 = -125,
  func_set_timeout = -126,
  lambda_62 = -127,
  lambda_63 = -128,
  lambda_64 = -129,
  lambda_65 = -130,
  lambda_timeout = -131,
  lambda_66 = -132,
  lambda_exit_codes_ofself = -133,
  lambda_67 = -134,
  func_handle_start_jobs = -135,
  lambda_68 = -136,
  lambda_new_event_is_defined = -137,
  lambda_new_event_is_a_list = -138,
  lambda_69 = -139,
  lambda_70 = -140,
  func_handle_write_jobs = -141,
  lambda_71 = -142,
  func_wait_for_events = -143,
  lambda_72 = -144,
  lambda_73 = -145,
  lambda_74 = -146,
  lambda_75 = -147,
  lambda_SIGCHLD = -148,
  lambda_76 = -149,
  lambda_77 = -150,
  lambda_78 = -151,
  lambda_watched_pids_ofselfpid = -152,
  lambda_79 = -153,
  lambda_SIGWINCH = -154,
  lambda_80 = -155,
  lambda_catched_signals_ofselfsignal = -156,
  func_handle_write_requests = -157,
  lambda_81 = -158,
  lambda_82 = -159,
  lambda_83 = -160,
  string_4 = -161,
  string_5 = -162,
  str_t = -163,
  lambda_84 = -164,
  func_check_file_descriptors = -165,
  lambda_85 = -166,
  lambda_bytes_written_is_an_error = -167,
  lambda_86 = -168,
  lambda_87 = -169,
  lambda_88 = -170,
  func_attempt_reads = -171,
  lambda_89 = -172,
  lambda_90 = -173,
  lambda_91 = -174,
  lambda_92 = -175,
  lambda_does_listen = -176,
  lambda_conn_is_an_error = -177,
  lambda_93 = -178,
  func_do_read = -179,
  lambda_94 = -180,
  num_0x100000 = -181,
  lambda_95 = -182,
  lambda_96 = -183,
  lambda_buf_is_an_error = -184,
  lambda_do_close = -185,
  lambda_97 = -186,
  lambda_buf_is_empty = -187,
  lambda_2_do_close = -188,
  lambda_98 = -189,
  lambda_max_length_is_defined = -190,
  lambda_99 = -191,
  lambda_100 = -192,
  lambda_3_do_close = -193,
  lambda_101 = -194,
  func_attempt_close_operations = -195,
  lambda_102 = -196,
  lambda_write_jobs_ofiofd_is_undefined = -197,
  lambda_103 = -198,
  func_attempt_exit = -199,
  lambda_exit_code_ofio_is_defined = -200,
  lambda_104 = -201,
  lambda_do_log_ofresource = -202,
  str_finalizing = -203,
  func_finalize_resource = -204,
  lambda_105 = -205,
  lambda_io_is_empty = -206,
  lambda_106 = -207,
  lambda_107 = -208,
  func_kill_child_processes = -209,
  lambda_108 = -210,
  lambda_109 = -211,
  func_std_types__io___handle_events = -212,
  lambda_110 = -213,
  lambda_111 = -214,
  lambda_112 = -215,
  lambda_113 = -216,
  lambda_114 = -217,
  lambda_115 = -218,
  lambda_2_new_event_is_defined = -219,
  lambda_new_event = -220,
  func_keep_event = -221,
  lambda_116 = -222,
  func_std__exit_on_error = -223,
  lambda_117 = -224,
  lambda_arg_is_an_error = -225,
  num_50 = -226,
  str_arg = -227,
  lambda_loop = -228
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
  var_std__set_context, // attribute
  var_std__get_context, // attribute
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
  var_contexts_of, // attribute
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
  var_249_5_self, // dynamic
  var_250_5_fd_or_list, // dynamic
  var_251_5_do_close, // dynamic
  var_252_5_max_length, // dynamic
  var_is_defined, // extern
  var_is_undefined, // extern
  var_std__or, // extern
  var_is_a_list, // extern
  var_next, // extern
  var_for_each, // extern
  var_if, // extern
  var_stop_reading_from, // extern polymorphic
  var_271_5_self, // dynamic
  var_272_5_fd_or_list, // dynamic
  var_print_to, // extern polymorphic
  var_create_string, // extern
  var_to_utf8, // extern
  var_write, // extern polymorphic
  var_301_5_data, // dynamic
  var_303_4_job, // dynamic
  var_append, // extern
  var_cancel_write, // extern polymorphic
  var_close, // extern polymorphic
  var_join_process, // extern polymorphic
  var_332_5_self, // dynamic
  var_333_5_pid_or_list, // dynamic
  var_start_injecting_window_change_events, // extern polymorphic
  var_stop_injecting_window_change_events, // extern polymorphic
  var_start_catching_signals, // extern polymorphic
  var_364_5_self, // dynamic
  var_367_4_catched_signals, // dynamic
  var_stop_catching_signals, // extern polymorphic
  var_376_5_self, // dynamic
  var_379_4_catched_signals, // dynamic
  var_set_timeout, // extern polymorphic
  var_388_5_self, // dynamic
  var_389_5_timeout, // dynamic
  var_is_a_number, // extern
  var_std__plus, // extern
  var_update_if, // extern
  var_392_4_current_timeout, // dynamic
  var_std__less, // extern
  var_std__initialize_logging, // initialized
  var_400_5_io, // dynamic
  var_401_5_log_level, // dynamic
  var_402_5_log_filename, // dynamic
  var_open, // extern
  var_STDERR_FILENO, // extern
  var_dup2, // extern
  var_411_15_stdout_info, // dynamic
  var_STDOUT_FILENO, // extern
  var_fstat, // extern
  var_412_15_stderr_info, // dynamic
  var_inode_number_of, // extern
  var_std__equal, // extern
  var_std__not, // extern
  var_device_of, // extern
  var_log, // extern polymorphic
  var_436_5_self, // dynamic
  var_437_5_level, // dynamic
  var_438_5_message, // dynamic
  var_is_a_string, // extern
  var_update_if_not, // extern
  var_has_suffix, // extern
  var_push, // extern
  var_split_into_lines, // extern
  var_445_8_prefix, // dynamic
  var_std__string, // extern
  var_446_8_buf, // dynamic
  var_range, // extern
  var_length_of, // extern
  var_spaces, // extern
  var_set_context, // extern polymorphic
  var_get_context, // extern polymorphic
  var_register_handlers, // extern polymorphic
  var_474_5_self, // dynamic
  var_475_5_id, // dynamic
  var_478_4_handlers, // dynamic
  var_default_value, // extern
  var_deregister_handlers, // extern polymorphic
  var_490_5_self, // dynamic
  var_491_5_id, // dynamic
  var_492_5_types, // dynamic
  var_494_4_handlers, // dynamic
  var_deregister_all_handlers, // extern polymorphic
  var_register_resource, // extern polymorphic
  var_run, // extern polymorphic
  var_run_at, // extern polymorphic
  var_535_5_self, // dynamic
  var_536_5_time, // dynamic
  var_exit, // extern polymorphic
  var_546_5_io, // dynamic
  var_EXIT_SUCCESS, // extern
  var_548_5_err, // dynamic
  var_is_an_error, // extern
  var_to_error_message_string, // extern
  var_is_empty, // extern polymorphic
  var_561_5_self, // dynamic
  var_std__and, // extern
  var_std__log_unhandled_event, // initialized
  var_570_29_io, // dynamic
  var_571_10_type, // dynamic
  var_571_16_fd, // dynamic
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
  var_598_5_self, // dynamic
  var_inc, // extern
  var_611_4_events, // dynamic
  var_612_4_want_to_write, // dynamic
  var_614_18_t, // dynamic
  var_615_4_start_jobs, // dynamic
  var_617_4_first_job_time, // dynamic
  var_618_4_remaining_timed_jobs, // dynamic
  var_619_4_timeout, // dynamic
  var_621_8_timed_job, // dynamic
  var_622_40_time, // dynamic
  var_std__minus, // extern
  var_max, // extern
  var_any_of, // extern
  var_665_41_new_event, // dynamic
  var_apply, // extern
  var_693_8_read_descriptor_list, // dynamic
  var_is_not_empty, // extern
  var_702_10_can_read, // dynamic
  var_703_10_can_write, // dynamic
  var_pselect, // extern
  var_707_8_injected_into_stdin, // dynamic
  var_708_8_write_jobs, // dynamic
  var_710_12_signal, // dynamic
  var_SIGCHLD, // extern
  var_process_id, // extern
  var_715_29_pid, // dynamic
  var_715_34_status, // dynamic
  var_waitpid, // extern
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
  var_762_14_fd, // dynamic
  var_763_14_job, // dynamic
  var_764_21_bytes_written, // dynamic
  var_791_14_fd, // dynamic
  var_not, // extern
  var_type_of, // extern
  var_SOCKET, // extern
  var_is_listening, // extern
  var_799_32_conn, // dynamic
  var_accept, // extern
  var_READ_FAILED, // extern
  var_CONNECT, // extern
  var_814_42_do_close, // dynamic
  var_814_52_max_length, // dynamic
  var_820_24_buf, // dynamic
  var_read, // extern
  var_CLOSED, // extern
  var_if_not, // extern
  var_864_29_io, // dynamic
  var_866_8_fd, // dynamic
  var_875_17_io, // dynamic
  var_879_12_resource, // dynamic
  var_finalize, // extern
  var_898_25_io, // dynamic
  var_SIGKILL, // extern
  var_kill, // extern
  var_std__handle_events, // attribute
  var_std__handle_event, // attribute
  var_handle_events, // extern polymorphic
  var_908_32_io, // dynamic
  var_909_4_new_events, // dynamic
  var_910_4_handlers, // dynamic
  var_912_8_event, // dynamic
  var_913_14_type, // dynamic
  var_913_20_id, // dynamic
  var_913_24_data, // dynamic
  var_914_8_id_handlers, // dynamic
  var_919_12_handler, // dynamic
  var_924_16_context, // dynamic
  var_is_a_tuple, // extern
  var_first, // extern
  var_second, // extern
  var_parameter_count_of, // extern
  var_927_23_new_event, // dynamic
  var_list, // extern
  var_std__exit_on_error, // initialized
  var_946_23_valid_io, // dynamic
  var_948_8_arg, // dynamic
  var_debug__dump, // extern
  var_EXIT_FAILURE, // extern
  var_pass, // extern
  var__END
};


static TAB_NUM t_func_std_types__resource___enable_logging[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 235_5_self
  // .do_log_of true)
  LET, -1, LOCAL(2), var_do_log_of, var_true, LOCAL(1),
  // -> self(.do_log_of true)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(237, 11),
  POS(237, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__resource___enable_logging = {
  t_func_std_types__resource___enable_logging, NULL, 2, 1,
  {"235_5_self\000"}
};

static TAB_NUM t_func_std_types__resource___disable_logging[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 241_5_self
  // .do_log_of false)
  LET, -1, LOCAL(2), var_do_log_of, var_false, LOCAL(1),
  // -> self(.do_log_of false)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(243, 11),
  POS(243, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__resource___disable_logging = {
  t_func_std_types__resource___disable_logging, NULL, 2, 1,
  {"241_5_self\000"}
};

static TAB_NUM t_func_std_types__io___start_reading_from[] = {
  3, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_249_5_self,
  MANDATORY_PARAMETER, var_250_5_fd_or_list,
  var_true, var_251_5_do_close,
  var_undefined, var_252_5_max_length,
  // exit_code_of(self).is_defined || fd_or_list.is_undefined
  var_exit_code_of, 1, var_249_5_self, 1, LOCAL(1),
  // is_defined || fd_or_list.is_undefined
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // is_defined || fd_or_list.is_undefined
  var_std__or, 2, LOCAL(2), lambda_1, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_2, lambda_3, TAIL_CALL,
  POS(255, 5),
  POS(255, 24),
  POS(255, 24),
  POS(254, 3)
};

static FUNCTION_INFO i_func_std_types__io___start_reading_from = {
  t_func_std_types__io___start_reading_from, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_250_5_fd_or_list, 1, LOCAL(1),
  // fd_or_list.is_undefined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(255, 49),
  POS(255, 38)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_249_5_self, TAIL_CALL,
  POS(256, 7)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_250_5_fd_or_list, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_fd_or_list_is_a_list, lambda_6, TAIL_CALL,
  POS(259, 20),
  POS(258, 7)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_fd_or_list_is_a_list[] = {
  0, // locals
  0, // parameters
  // for_each fd_or_list
  var_for_each, 3, var_250_5_fd_or_list, lambda_4, lambda_5, TAIL_CALL,
  POS(260, 11)
};

static FUNCTION_INFO i_lambda_fd_or_list_is_a_list = {
  t_lambda_fd_or_list_is_a_list, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 261_16_fd
  // !self.read_jobs_of(fd) tuple(do_close max_length)
  var_tuple, 2, var_251_5_do_close, var_252_5_max_length, 1, LOCAL(2),
  // read_jobs_of(fd) tuple(do_close max_length)
  var_read_jobs_of, 1, var_249_5_self, 1, LOCAL(3),
  // read_jobs_of(fd) tuple(do_close max_length)
  LOCAL(3), 2, LOCAL(4), LOCAL(2), 1, LOCAL(3),
  // self.read_jobs_of(fd) tuple(do_close max_length)
  LET, -1, var_249_5_self, var_read_jobs_of, LOCAL(3), var_249_5_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(262, 15),
  POS(262, 21),
  POS(262, 21),
  POS(262, 16),
  POS(263, 15),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 5, 1,
  {"261_16_fd\000"}
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_249_5_self, TAIL_CALL,
  POS(264, 15)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  3, // locals
  0, // parameters
  // !self.read_jobs_of(fd_or_list) tuple(do_close max_length)
  var_tuple, 2, var_251_5_do_close, var_252_5_max_length, 1, LOCAL(2),
  // read_jobs_of(fd_or_list) tuple(do_close max_length)
  var_read_jobs_of, 1, var_249_5_self, 1, LOCAL(3),
  // read_jobs_of(fd_or_list) tuple(do_close max_length)
  LOCAL(3), 2, var_250_5_fd_or_list, LOCAL(2), 1, LOCAL(3),
  // self.read_jobs_of(fd_or_list) tuple(do_close max_length)
  LET, -1, var_249_5_self, var_read_jobs_of, LOCAL(3), var_249_5_self,
  // -> self
  LET, 1, var_249_5_self, TAIL_CALL,
  POS(266, 11),
  POS(266, 17),
  POS(266, 17),
  POS(266, 12),
  POS(267, 11)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 5, 0,
  {}
};

static TAB_NUM t_func_std_types__io___stop_reading_from[] = {
  1, // locals
  2, // parameters
  var_271_5_self,
  var_272_5_fd_or_list,
  // is_undefined
  var_is_undefined, 1, var_272_5_fd_or_list, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_7, lambda_8, TAIL_CALL,
  POS(275, 16),
  POS(274, 3)
};

static FUNCTION_INFO i_func_std_types__io___stop_reading_from = {
  t_func_std_types__io___stop_reading_from, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_271_5_self, TAIL_CALL,
  POS(276, 7)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_272_5_fd_or_list, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_fd_or_list_is_a_list, lambda_11, TAIL_CALL,
  POS(279, 20),
  POS(278, 7)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2_fd_or_list_is_a_list[] = {
  0, // locals
  0, // parameters
  // for_each fd_or_list
  var_for_each, 3, var_272_5_fd_or_list, lambda_9, lambda_10, TAIL_CALL,
  POS(280, 11)
};

static FUNCTION_INFO i_lambda_2_fd_or_list_is_a_list = {
  t_lambda_2_fd_or_list_is_a_list, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 281_16_fd
  // read_jobs_of(fd) undefined
  var_read_jobs_of, 1, var_271_5_self, 1, LOCAL(2),
  // read_jobs_of(fd) undefined
  LOCAL(2), 2, LOCAL(3), var_undefined, 1, LOCAL(2),
  // self.read_jobs_of(fd) undefined
  LET, -1, var_271_5_self, var_read_jobs_of, LOCAL(2), var_271_5_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(282, 21),
  POS(282, 21),
  POS(282, 16),
  POS(283, 15),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 4, 1,
  {"281_16_fd\000"}
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_271_5_self, TAIL_CALL,
  POS(284, 15)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  2, // locals
  0, // parameters
  // read_jobs_of(fd_or_list) undefined
  var_read_jobs_of, 1, var_271_5_self, 1, LOCAL(2),
  // read_jobs_of(fd_or_list) undefined
  LOCAL(2), 2, var_272_5_fd_or_list, var_undefined, 1, LOCAL(2),
  // self.read_jobs_of(fd_or_list) undefined
  LET, -1, var_271_5_self, var_read_jobs_of, LOCAL(2), var_271_5_self,
  // -> self
  LET, 1, var_271_5_self, TAIL_CALL,
  POS(286, 17),
  POS(286, 17),
  POS(286, 12),
  POS(287, 11)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_std_types__io___print_to[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 291_5_self
  MANDATORY_PARAMETER, LOCAL(4), // 292_5_fd
  REST_PARAMETER, LOCAL(5), // 293_5_args
  // create_string(args).to_utf8
  var_create_string, 1, LOCAL(5), 1, LOCAL(1),
  // to_utf8
  var_to_utf8, 1, LOCAL(1), 1, LOCAL(2),
  // write self fd create_string(args).to_utf8
  var_write, 3, LOCAL(3), LOCAL(4), LOCAL(2), TAIL_CALL,
  POS(295, 17),
  POS(295, 37),
  POS(295, 3),
  LOCAL(4),
  LOCAL(5),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__io___print_to = {
  t_func_std_types__io___print_to, NULL, 3, 3,
  {"292_5_fd\000", "293_5_args\000", "291_5_self\000"}
};

static TAB_NUM t_func_std_types__io___write[] = {
  4, // locals
  3, // parameters
  LOCAL(3), // 299_5_self
  LOCAL(4), // 300_5_fd
  var_301_5_data,
  // write_jobs_of(self)(fd)
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(1),
  // $job write_jobs_of(self)(fd)
  LOCAL(1), 1, LOCAL(4), 1, var_303_4_job,
  // is_defined
  var_is_defined, 1, var_303_4_job, 1, LOCAL(1),
  // !job
  var_if, 3, LOCAL(1), lambda_12, lambda_13, 1, var_303_4_job,
  // write_jobs_of(fd) job
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(2),
  // write_jobs_of(fd) job
  LOCAL(2), 2, LOCAL(4), var_303_4_job, 1, LOCAL(2),
  // self.write_jobs_of(fd) job
  LET, -1, LOCAL(3), var_write_jobs_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(303, 8),
  POS(303, 3),
  POS(306, 11),
  POS(304, 3),
  POS(309, 9),
  POS(309, 9),
  POS(309, 4),
  POS(310, 3),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__io___write = {
  t_func_std_types__io___write, NULL, 8, 2,
  {"299_5_self\000", "300_5_fd\000"}
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // append(job data)
  var_append, 2, var_303_4_job, var_301_5_data, 1, LOCAL(1),
  //  append(job data)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(307, 10),
  POS(307, 9)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_301_5_data, TAIL_CALL,
  POS(308, 9)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__io___cancel_write[] = {
  5, // locals
  2, // parameters
  LOCAL(3), // 314_5_self
  LOCAL(4), // 315_5_fd
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
  POS(317, 19),
  POS(317, 3),
  POS(318, 9),
  POS(318, 9),
  POS(318, 4),
  POS(319, 3),
  LOCAL(4),
  LOCAL(5),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__io___cancel_write = {
  t_func_std_types__io___cancel_write, NULL, 6, 3,
  {"315_5_fd\000", "317_4_unwritten_text\000", "314_5_self\000"}
};

static TAB_NUM t_func_std_types__io___close[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 323_5_self
  LOCAL(4), // 324_5_fd
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
  POS(326, 3),
  POS(327, 9),
  POS(327, 9),
  POS(327, 4),
  POS(328, 3),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__io___close = {
  t_func_std_types__io___close, NULL, 5, 2,
  {"324_5_fd\000", "323_5_self\000"}
};

static TAB_NUM t_func_std_types__io___join_process[] = {
  1, // locals
  2, // parameters
  var_332_5_self,
  var_333_5_pid_or_list,
  // is_undefined
  var_is_undefined, 1, var_333_5_pid_or_list, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(336, 17),
  POS(335, 3)
};

static FUNCTION_INFO i_func_std_types__io___join_process = {
  t_func_std_types__io___join_process, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_332_5_self, TAIL_CALL,
  POS(337, 7)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_333_5_pid_or_list, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_pid_or_list_is_a_list, lambda_18, TAIL_CALL,
  POS(340, 21),
  POS(339, 7)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_pid_or_list_is_a_list[] = {
  0, // locals
  0, // parameters
  // for_each pid_or_list
  var_for_each, 3, var_333_5_pid_or_list, lambda_16, lambda_17, TAIL_CALL,
  POS(341, 11)
};

static FUNCTION_INFO i_lambda_pid_or_list_is_a_list = {
  t_lambda_pid_or_list_is_a_list, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 342_16_pid
  // watched_pids_of(pid) true
  var_watched_pids_of, 1, var_332_5_self, 1, LOCAL(2),
  // watched_pids_of(pid) true
  LOCAL(2), 2, LOCAL(3), var_true, 1, LOCAL(2),
  // self.watched_pids_of(pid) true
  LET, -1, var_332_5_self, var_watched_pids_of, LOCAL(2), var_332_5_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(343, 21),
  POS(343, 21),
  POS(343, 16),
  POS(344, 15),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 4, 1,
  {"342_16_pid\000"}
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_332_5_self, TAIL_CALL,
  POS(345, 15)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(pid_or_list) true
  var_watched_pids_of, 1, var_332_5_self, 1, LOCAL(2),
  // watched_pids_of(pid_or_list) true
  LOCAL(2), 2, var_333_5_pid_or_list, var_true, 1, LOCAL(2),
  // self.watched_pids_of(pid_or_list) true
  LET, -1, var_332_5_self, var_watched_pids_of, LOCAL(2), var_332_5_self,
  // -> self
  LET, 1, var_332_5_self, TAIL_CALL,
  POS(347, 17),
  POS(347, 17),
  POS(347, 12),
  POS(348, 11)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_std_types__io___start_injecting_window_change_events[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 352_5_self
  // .do_inject_window_change_events true)
  LET, -1, LOCAL(2), var_do_inject_window_change_events, var_true, LOCAL(1),
  // -> self(.do_inject_window_change_events true)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(354, 11),
  POS(354, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__io___start_injecting_window_change_events = {
  t_func_std_types__io___start_injecting_window_change_events, NULL, 2, 1,
  {"352_5_self\000"}
};

static TAB_NUM t_func_std_types__io___stop_injecting_window_change_events[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 358_5_self
  // .do_inject_window_change_events false)
  LET, -1, LOCAL(2), var_do_inject_window_change_events, var_false, LOCAL(1),
  // -> self(.do_inject_window_change_events false)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(360, 11),
  POS(360, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__io___stop_injecting_window_change_events = {
  t_func_std_types__io___stop_injecting_window_change_events, NULL, 2, 1,
  {"358_5_self\000"}
};

static TAB_NUM t_func_std_types__io___start_catching_signals[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_364_5_self,
  REST_PARAMETER, LOCAL(1), // 365_5_signals
  // $catched_signals catched_signals_of(self)
  var_catched_signals_of, 1, var_364_5_self, 1, var_367_4_catched_signals,
  // for_each signals
  var_for_each, 3, LOCAL(1), lambda_19, lambda_20, TAIL_CALL,
  POS(367, 3),
  POS(368, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__io___start_catching_signals = {
  t_func_std_types__io___start_catching_signals, NULL, 2, 1,
  {"365_5_signals\000"}
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 369_8_signal
  // catched_signals(signal) true
  var_367_4_catched_signals, 2, LOCAL(1), var_true, 1, var_367_4_catched_signals,
  // next
  var_next, 0, TAIL_CALL,
  POS(370, 8),
  POS(371, 7),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 2, 1,
  {"369_8_signal\000"}
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // .catched_signals_of catched_signals)
  LET, -1, var_364_5_self, var_catched_signals_of, var_367_4_catched_signals, LOCAL(1),
  //  self(.catched_signals_of catched_signals)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(372, 13),
  POS(372, 7)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__io___stop_catching_signals[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_376_5_self,
  REST_PARAMETER, LOCAL(1), // 377_5_signals
  // $catched_signals catched_signals_of(self)
  var_catched_signals_of, 1, var_376_5_self, 1, var_379_4_catched_signals,
  // for_each signals
  var_for_each, 3, LOCAL(1), lambda_21, lambda_22, TAIL_CALL,
  POS(379, 3),
  POS(380, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__io___stop_catching_signals = {
  t_func_std_types__io___stop_catching_signals, NULL, 2, 1,
  {"377_5_signals\000"}
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 381_8_signal
  // catched_signals(signal) false
  var_379_4_catched_signals, 2, LOCAL(1), var_false, 1, var_379_4_catched_signals,
  // next
  var_next, 0, TAIL_CALL,
  POS(382, 8),
  POS(383, 7),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 2, 1,
  {"381_8_signal\000"}
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // .catched_signals_of catched_signals)
  LET, -1, var_376_5_self, var_catched_signals_of, var_379_4_catched_signals, LOCAL(1),
  //  self(.catched_signals_of catched_signals)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(384, 13),
  POS(384, 7)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__io___set_timeout[] = {
  2, // locals
  2, // parameters
  var_388_5_self,
  var_389_5_timeout,
  // is_a_number &timeout -> current_time_of(self)+timeout
  var_is_a_number, 1, var_389_5_timeout, 1, LOCAL(1),
  // update_if timeout.is_a_number &timeout -> current_time_of(self)+timeout
  var_update_if, 3, LOCAL(1), var_389_5_timeout, lambda_23, 1, var_389_5_timeout,
  // $current_timeout timeout_of(self)
  var_timeout_of, 1, var_388_5_self, 1, var_392_4_current_timeout,
  // is_undefined || timeout < current_timeout
  var_is_undefined, 1, var_392_4_current_timeout, 1, LOCAL(1),
  // is_undefined || timeout < current_timeout
  var_std__or, 2, LOCAL(1), lambda_24, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_25, lambda_26, TAIL_CALL,
  POS(391, 21),
  POS(391, 3),
  POS(392, 3),
  POS(394, 21),
  POS(394, 21),
  POS(393, 3)
};

static FUNCTION_INFO i_func_std_types__io___set_timeout = {
  t_func_std_types__io___set_timeout, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  0, // parameters
  // current_time_of(self)+timeout
  var_current_time_of, 1, var_388_5_self, 1, LOCAL(1),
  // current_time_of(self)+timeout
  var_std__plus, 2, LOCAL(1), var_389_5_timeout, 1, LOCAL(2),
  //  current_time_of(self)+timeout
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(391, 45),
  POS(391, 45),
  POS(391, 44)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  0, // parameters
  // timeout < current_timeout
  var_std__less, 2, var_389_5_timeout, var_392_4_current_timeout, 1, LOCAL(1),
  // timeout < current_timeout
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(394, 37),
  POS(394, 37)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // .timeout_of timeout)
  LET, -1, var_388_5_self, var_timeout_of, var_389_5_timeout, LOCAL(1),
  //  self(.timeout_of timeout)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(395, 13),
  POS(395, 7)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_388_5_self, TAIL_CALL,
  POS(396, 7)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__initialize_logging[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_400_5_io,
  num_3, var_401_5_log_level,
  var_undefined, var_402_5_log_filename,
  // is_defined:
  var_is_defined, 1, var_402_5_log_filename, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_log_filename_is_defined, lambda_27, IO_TAIL_CALL,
  POS(405, 18),
  POS(404, 3)
};

static FUNCTION_INFO i_func_std__initialize_logging = {
  t_func_std__initialize_logging, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_log_filename_is_defined[] = {
  1, // locals
  0, // parameters
  // open! $log_fd log_filename "w+"
  var_open, 2, var_402_5_log_filename, str_w, IO_CALL(1), LOCAL(1),
  // dup2! log_fd STDERR_FILENO
  var_dup2, 2, LOCAL(1), var_STDERR_FILENO, IO_CALL(0),
  // close! log_fd
  var_close, 1, LOCAL(1), IO_CALL(0),
  // enable_logging io log_level
  var_enable_logging, 2, var_400_5_io, var_401_5_log_level, TAIL_CALL,
  POS(406, 7),
  POS(407, 7),
  POS(408, 7),
  POS(409, 7),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_log_filename_is_defined = {
  t_lambda_log_filename_is_defined, NULL, 4, 1,
  {"406_14_log_fd\000"}
};

static TAB_NUM t_lambda_27[] = {
  5, // locals
  0, // parameters
  // fstat! $stdout_info STDOUT_FILENO
  var_fstat, 1, var_STDOUT_FILENO, IO_CALL(1), var_411_15_stdout_info,
  // fstat! $stderr_info STDERR_FILENO
  var_fstat, 1, var_STDERR_FILENO, IO_CALL(1), var_412_15_stderr_info,
  // inode_number_of(stderr_info) != inode_number_of(stdout_info)
  var_inode_number_of, 1, var_412_15_stderr_info, 1, LOCAL(1),
  // inode_number_of(stdout_info)
  var_inode_number_of, 1, var_411_15_stdout_info, 1, LOCAL(2),
  // inode_number_of(stderr_info) != inode_number_of(stdout_info)
  var_std__equal, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // inode_number_of(stderr_info) != inode_number_of(stdout_info)
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // 
  var_std__or, 2, LOCAL(4), lambda_28, 1, LOCAL(5),
  // if
  var_if, 3, LOCAL(5), lambda_29, lambda_30, TAIL_CALL,
  POS(411, 7),
  POS(412, 7),
  POS(415, 11),
  POS(415, 43),
  POS(415, 11),
  POS(415, 11),
  POS(414, 11),
  POS(413, 7)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 8, 0,
  {}
};

static TAB_NUM t_lambda_28[] = {
  4, // locals
  0, // parameters
  // device_of(stderr_info) != device_of(stdout_info)
  var_device_of, 1, var_412_15_stderr_info, 1, LOCAL(1),
  // device_of(stdout_info)
  var_device_of, 1, var_411_15_stdout_info, 1, LOCAL(2),
  // device_of(stderr_info) != device_of(stdout_info)
  var_std__equal, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // device_of(stderr_info) != device_of(stdout_info)
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // device_of(stderr_info) != device_of(stdout_info)
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(416, 11),
  POS(416, 37),
  POS(416, 11),
  POS(416, 11),
  POS(416, 11)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  // enable_logging io log_level
  var_enable_logging, 2, var_400_5_io, var_401_5_log_level, TAIL_CALL,
  POS(418, 11)
};

static FUNCTION_INFO i_lambda_29 = {
  t_lambda_29, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_400_5_io, TAIL_CALL,
  POS(419, 11)
};

static FUNCTION_INFO i_lambda_30 = {
  t_lambda_30, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__io___enable_logging[] = {
  3, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 423_5_self
  num_1, LOCAL(3), // 424_5_level
  // .log_level_of level)
  LET, -1, LOCAL(2), var_log_level_of, LOCAL(3), LOCAL(1),
  // -> self(.log_level_of level)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(426, 11),
  POS(426, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__io___enable_logging = {
  t_func_std_types__io___enable_logging, NULL, 2, 2,
  {"423_5_self\000", "424_5_level\000"}
};

static TAB_NUM t_func_std_types__io___disable_logging[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 430_5_self
  // .log_level_of 0)
  LET, -1, LOCAL(2), var_log_level_of, num_0, LOCAL(1),
  // -> self(.log_level_of 0)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(432, 11),
  POS(432, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__io___disable_logging = {
  t_func_std_types__io___disable_logging, NULL, 2, 1,
  {"430_5_self\000"}
};

static TAB_NUM t_func_std_types__io___log[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_436_5_self,
  num_1, var_437_5_level,
  MANDATORY_PARAMETER, var_438_5_message,
  // log_level_of(self):
  var_log_level_of, 1, var_436_5_self, 1, LOCAL(1),
  // log_level_of(self):
  var_std__less, 2, LOCAL(1), var_437_5_level, 1, LOCAL(2),
  // log_level_of(self):
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_31, lambda_36, TAIL_CALL,
  POS(441, 14),
  POS(441, 14),
  POS(441, 14),
  POS(440, 3)
};

static FUNCTION_INFO i_func_std_types__io___log = {
  t_func_std_types__io___log, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  0, // parameters
  // is_a_string &message -> message()
  var_is_a_string, 1, var_438_5_message, 1, LOCAL(1),
  // update_if_not message.is_a_string &message -> message()
  var_update_if_not, 3, LOCAL(1), var_438_5_message, lambda_32, 1, var_438_5_message,
  // message .has_suffix. '@nl;' &message: push message '@nl;'
  var_has_suffix, 2, var_438_5_message, chr_10, 1, LOCAL(1),
  // update_if_not message .has_suffix. '@nl;' &message: push message '@nl;'
  var_update_if_not, 3, LOCAL(1), var_438_5_message, lambda_33, 1, var_438_5_message,
  // $lines split_into_lines(message)
  var_split_into_lines, 1, var_438_5_message, 1, LOCAL(2),
  // $prefix "[@(level)] "
  var_std__string, 3, string_1, var_437_5_level, string_2, 1, var_445_8_prefix,
  // lines(1))
  LOCAL(2), 1, num_1, 1, LOCAL(1),
  // $buf append(prefix lines(1))
  var_append, 2, var_445_8_prefix, LOCAL(1), 1, var_446_8_buf,
  // range &lines 2 -1
  var_range, 3, LOCAL(2), num_2, minus_num_1, 1, LOCAL(2),
  // for_each lines
  var_for_each, 3, LOCAL(2), lambda_34, lambda_35, TAIL_CALL,
  POS(442, 29),
  POS(442, 7),
  POS(443, 21),
  POS(443, 7),
  POS(444, 7),
  POS(445, 7),
  POS(446, 26),
  POS(446, 7),
  POS(447, 7),
  POS(448, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_31 = {
  t_lambda_31, NULL, 10, 1,
  {"444_8_lines\000"}
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // message()
  var_438_5_message, 0, 1, LOCAL(1),
  //  message()
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(442, 53),
  POS(442, 52)
};

static FUNCTION_INFO i_lambda_32 = {
  t_lambda_32, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  // push message '@nl;'
  var_push, 2, var_438_5_message, chr_10, TAIL_CALL,
  POS(443, 59)
};

static FUNCTION_INFO i_lambda_33 = {
  t_lambda_33, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_34[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 449_12_line
  // length_of(prefix)) line
  var_length_of, 1, var_445_8_prefix, 1, LOCAL(1),
  // spaces(length_of(prefix)) line
  var_spaces, 1, LOCAL(1), 1, LOCAL(2),
  // append &buf spaces(length_of(prefix)) line
  var_append, 3, var_446_8_buf, LOCAL(2), LOCAL(3), 1, var_446_8_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(450, 30),
  POS(450, 23),
  POS(450, 11),
  POS(451, 11),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_34 = {
  t_lambda_34, NULL, 4, 1,
  {"449_12_line\000"}
};

static TAB_NUM t_lambda_35[] = {
  1, // locals
  0, // parameters
  // to_utf8
  var_to_utf8, 1, var_446_8_buf, 1, LOCAL(1),
  // write self STDERR_FILENO buf.to_utf8
  var_write, 3, var_436_5_self, var_STDERR_FILENO, LOCAL(1), TAIL_CALL,
  POS(453, 40),
  POS(453, 11)
};

static FUNCTION_INFO i_lambda_35 = {
  t_lambda_35, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_436_5_self, TAIL_CALL,
  POS(454, 7)
};

static FUNCTION_INFO i_lambda_36 = {
  t_lambda_36, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__io___set_context[] = {
  5, // locals
  3, // parameters
  LOCAL(3), // 458_5_self
  LOCAL(4), // 459_5_id
  LOCAL(5), // 460_5_context
  // contexts_of(id) context
  var_contexts_of, 1, LOCAL(3), 1, LOCAL(2),
  // contexts_of(id) context
  LOCAL(2), 2, LOCAL(4), LOCAL(5), 1, LOCAL(2),
  // self.contexts_of(id) context
  LET, -1, LOCAL(3), var_contexts_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(462, 9),
  POS(462, 9),
  POS(462, 4),
  POS(463, 3),
  LOCAL(4),
  LOCAL(3),
  LOCAL(5)
};

static FUNCTION_INFO i_func_std_types__io___set_context = {
  t_func_std_types__io___set_context, NULL, 4, 3,
  {"459_5_id\000", "458_5_self\000", "460_5_context\000"}
};

static TAB_NUM t_func_std_types__io___get_context[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 467_5_self
  LOCAL(4), // 468_5_id
  // contexts_of(self)(id)
  var_contexts_of, 1, LOCAL(3), 1, LOCAL(1),
  // contexts_of(self)(id)
  LOCAL(1), 1, LOCAL(4), 1, LOCAL(2),
  // -> contexts_of(self)(id)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(470, 6),
  POS(470, 6),
  POS(470, 3),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__io___get_context = {
  t_func_std_types__io___get_context, NULL, 3, 2,
  {"468_5_id\000", "467_5_self\000"}
};

static TAB_NUM t_func_std_types__io___register_handlers[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_474_5_self,
  MANDATORY_PARAMETER, var_475_5_id,
  REST_PARAMETER, LOCAL(3), // 476_5_type_handlers
  // handlers_of(self)(id) empty_hash_table)
  var_handlers_of, 1, var_474_5_self, 1, LOCAL(1),
  // handlers_of(self)(id) empty_hash_table)
  LOCAL(1), 1, var_475_5_id, 1, LOCAL(2),
  // $handlers default_value(handlers_of(self)(id) empty_hash_table)
  var_default_value, 2, LOCAL(2), var_empty_hash_table, 1, var_478_4_handlers,
  // for_each type_handlers
  var_for_each, 3, LOCAL(3), lambda_37, lambda_38, TAIL_CALL,
  POS(478, 27),
  POS(478, 27),
  POS(478, 3),
  POS(479, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__io___register_handlers = {
  t_func_std_types__io___register_handlers, NULL, 4, 1,
  {"476_5_type_handlers\000"}
};

static TAB_NUM t_lambda_37[] = {
  3, // locals
  1, // parameters
  LOCAL(1), // 480_8_type_handler
  // type_handler $type $handler
  LOCAL(1), 0, 2, LOCAL(2), LOCAL(3),
  // handlers(type) handler
  var_478_4_handlers, 2, LOCAL(2), LOCAL(3), 1, var_478_4_handlers,
  // next
  var_next, 0, TAIL_CALL,
  POS(481, 7),
  POS(482, 8),
  POS(483, 7),
  LOCAL(2),
  LOCAL(1),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_37 = {
  t_lambda_37, NULL, 3, 3,
  {"481_21_type\000", "480_8_type_handler\000", "481_27_handler\000"}
};

static TAB_NUM t_lambda_38[] = {
  2, // locals
  0, // parameters
  // handlers_of(id) handlers
  var_handlers_of, 1, var_474_5_self, 1, LOCAL(2),
  // handlers_of(id) handlers
  LOCAL(2), 2, var_475_5_id, var_478_4_handlers, 1, LOCAL(2),
  // self.handlers_of(id) handlers
  LET, -1, var_474_5_self, var_handlers_of, LOCAL(2), var_474_5_self,
  // -> self
  LET, 1, var_474_5_self, TAIL_CALL,
  POS(485, 13),
  POS(485, 13),
  POS(485, 8),
  POS(486, 7)
};

static FUNCTION_INFO i_lambda_38 = {
  t_lambda_38, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_std_types__io___deregister_handlers[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_490_5_self,
  MANDATORY_PARAMETER, var_491_5_id,
  REST_PARAMETER, var_492_5_types,
  // handlers_of(self)(id)
  var_handlers_of, 1, var_490_5_self, 1, LOCAL(1),
  // $handlers handlers_of(self)(id)
  LOCAL(1), 1, var_491_5_id, 1, var_494_4_handlers,
  // is_undefined
  var_is_undefined, 1, var_494_4_handlers, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_39, lambda_40, TAIL_CALL,
  POS(494, 13),
  POS(494, 3),
  POS(496, 14),
  POS(495, 3)
};

static FUNCTION_INFO i_func_std_types__io___deregister_handlers = {
  t_func_std_types__io___deregister_handlers, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_490_5_self, TAIL_CALL,
  POS(497, 7)
};

static FUNCTION_INFO i_lambda_39 = {
  t_lambda_39, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  // for_each types
  var_for_each, 3, var_492_5_types, lambda_41, lambda_42, TAIL_CALL,
  POS(499, 7)
};

static FUNCTION_INFO i_lambda_40 = {
  t_lambda_40, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_41[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 500_12_type
  // handlers(type) undefined
  var_494_4_handlers, 2, LOCAL(1), var_undefined, 1, var_494_4_handlers,
  // next
  var_next, 0, TAIL_CALL,
  POS(501, 12),
  POS(502, 11),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_41 = {
  t_lambda_41, NULL, 2, 1,
  {"500_12_type\000"}
};

static TAB_NUM t_lambda_42[] = {
  2, // locals
  0, // parameters
  // handlers_of(id) handlers
  var_handlers_of, 1, var_490_5_self, 1, LOCAL(2),
  // handlers_of(id) handlers
  LOCAL(2), 2, var_491_5_id, var_494_4_handlers, 1, LOCAL(2),
  // self.handlers_of(id) handlers
  LET, -1, var_490_5_self, var_handlers_of, LOCAL(2), var_490_5_self,
  // -> self
  LET, 1, var_490_5_self, TAIL_CALL,
  POS(504, 17),
  POS(504, 17),
  POS(504, 12),
  POS(505, 11)
};

static FUNCTION_INFO i_lambda_42 = {
  t_lambda_42, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_std_types__io___deregister_all_handlers[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 509_5_self
  LOCAL(4), // 510_5_id
  // handlers_of(id) empty_hash_table
  var_handlers_of, 1, LOCAL(3), 1, LOCAL(2),
  // handlers_of(id) empty_hash_table
  LOCAL(2), 2, LOCAL(4), var_empty_hash_table, 1, LOCAL(2),
  // self.handlers_of(id) empty_hash_table
  LET, -1, LOCAL(3), var_handlers_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(512, 9),
  POS(512, 9),
  POS(512, 4),
  POS(513, 3),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__io___deregister_all_handlers = {
  t_func_std_types__io___deregister_all_handlers, NULL, 4, 2,
  {"509_5_self\000", "510_5_id\000"}
};

static TAB_NUM t_func_std_types__io___register_resource[] = {
  5, // locals
  3, // parameters
  LOCAL(3), // 517_5_self
  LOCAL(4), // 518_5_key
  LOCAL(5), // 519_5_resource
  // resources_of(key) resource
  var_resources_of, 1, LOCAL(3), 1, LOCAL(2),
  // resources_of(key) resource
  LOCAL(2), 2, LOCAL(4), LOCAL(5), 1, LOCAL(2),
  // self.resources_of(key) resource
  LET, -1, LOCAL(3), var_resources_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(521, 9),
  POS(521, 9),
  POS(521, 4),
  POS(522, 3),
  LOCAL(3),
  LOCAL(5),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__io___register_resource = {
  t_func_std_types__io___register_resource, NULL, 4, 3,
  {"517_5_self\000", "519_5_resource\000", "518_5_key\000"}
};

static TAB_NUM t_func_std_types__io___run[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 526_5_self
  MANDATORY_PARAMETER, LOCAL(4), // 527_5_command
  REST_PARAMETER, LOCAL(5), // 528_5_arguments
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
  POS(530, 14),
  POS(530, 28),
  POS(530, 3),
  POS(530, 9),
  POS(531, 3),
  LOCAL(5),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__io___run = {
  t_func_std_types__io___run, NULL, 5, 3,
  {"528_5_arguments\000", "527_5_command\000", "526_5_self\000"}
};

static TAB_NUM t_func_std_types__io___run_at[] = {
  4, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_535_5_self,
  MANDATORY_PARAMETER, var_536_5_time,
  MANDATORY_PARAMETER, LOCAL(3), // 537_5_command
  REST_PARAMETER, LOCAL(4), // 538_5_arguments
  // is_a_number &time -> current_time_of(self)+time
  var_is_a_number, 1, var_536_5_time, 1, LOCAL(1),
  // update_if time.is_a_number &time -> current_time_of(self)+time
  var_update_if, 3, LOCAL(1), var_536_5_time, lambda_43, 1, var_536_5_time,
  // timed_jobs_of tuple(command arguments time)
  var_timed_jobs_of, 1, var_535_5_self, 1, LOCAL(1),
  // tuple(command arguments time)
  var_tuple, 3, LOCAL(3), LOCAL(4), var_536_5_time, 1, LOCAL(2),
  // push &self.timed_jobs_of tuple(command arguments time)
  var_push, 2, LOCAL(1), LOCAL(2), 1, LOCAL(1),
  // self.timed_jobs_of tuple(command arguments time)
  LET, -1, var_535_5_self, var_timed_jobs_of, LOCAL(1), var_535_5_self,
  // -> self
  LET, 1, var_535_5_self, TAIL_CALL,
  POS(540, 18),
  POS(540, 3),
  POS(541, 14),
  POS(541, 28),
  POS(541, 3),
  POS(541, 9),
  POS(542, 3),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__io___run_at = {
  t_func_std_types__io___run_at, NULL, 7, 2,
  {"538_5_arguments\000", "537_5_command\000"}
};

static TAB_NUM t_lambda_43[] = {
  2, // locals
  0, // parameters
  // current_time_of(self)+time
  var_current_time_of, 1, var_535_5_self, 1, LOCAL(1),
  // current_time_of(self)+time
  var_std__plus, 2, LOCAL(1), var_536_5_time, 1, LOCAL(2),
  //  current_time_of(self)+time
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(540, 39),
  POS(540, 39),
  POS(540, 38)
};

static FUNCTION_INFO i_lambda_43 = {
  t_lambda_43, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std_types__io___exit[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_546_5_io,
  var_EXIT_SUCCESS, LOCAL(2), // 547_5_exit_code
  var_undefined, var_548_5_err,
  // !io
  LET, -2, var_546_5_io, var_exit_code_of, LOCAL(2), var_read_jobs_of, var_empty_hash_table, var_546_5_io,
  // is_an_error:
  var_is_an_error, 1, var_548_5_err, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_err_is_an_error, lambda_44, TAIL_CALL,
  POS(550, 3),
  POS(554, 9),
  POS(553, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__io___exit = {
  t_func_std_types__io___exit, NULL, 3, 1,
  {"547_5_exit_code\000"}
};

static TAB_NUM t_lambda_err_is_an_error[] = {
  2, // locals
  0, // parameters
  // to_error_message_string) - exiting"
  var_to_error_message_string, 1, var_548_5_err, 1, LOCAL(1),
  // "ERROR: @(err.to_error_message_string) - exiting"
  var_std__string, 3, str_ERROR, LOCAL(1), str___exiting, 1, LOCAL(2),
  // log io "ERROR: @(err.to_error_message_string) - exiting"
  var_log, 2, var_546_5_io, LOCAL(2), TAIL_CALL,
  POS(555, 28),
  POS(555, 14),
  POS(555, 7)
};

static FUNCTION_INFO i_lambda_err_is_an_error = {
  t_lambda_err_is_an_error, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  // log io "exiting"
  var_log, 2, var_546_5_io, str_exiting, TAIL_CALL,
  POS(557, 7)
};

static FUNCTION_INFO i_lambda_44 = {
  t_lambda_44, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__io___is_empty[] = {
  3, // locals
  1, // parameters
  var_561_5_self,
  // read_jobs_of(self).is_empty
  var_read_jobs_of, 1, var_561_5_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_45, 1, LOCAL(3),
  // ->
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(565, 7),
  POS(565, 26),
  POS(564, 7),
  POS(563, 3)
};

static FUNCTION_INFO i_func_std_types__io___is_empty = {
  t_func_std_types__io___is_empty, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_45[] = {
  3, // locals
  0, // parameters
  // write_jobs_of(self).is_empty
  var_write_jobs_of, 1, var_561_5_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_46, 1, LOCAL(3),
  // write_jobs_of(self).is_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(566, 7),
  POS(566, 27),
  POS(564, 7),
  POS(566, 7)
};

static FUNCTION_INFO i_lambda_45 = {
  t_lambda_45, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_46[] = {
  3, // locals
  0, // parameters
  // close_jobs_of(self).is_empty
  var_close_jobs_of, 1, var_561_5_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_47, 1, LOCAL(3),
  // close_jobs_of(self).is_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(567, 7),
  POS(567, 27),
  POS(564, 7),
  POS(567, 7)
};

static FUNCTION_INFO i_lambda_46 = {
  t_lambda_46, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_47[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(self).is_empty
  var_watched_pids_of, 1, var_561_5_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // watched_pids_of(self).is_empty
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(568, 7),
  POS(568, 29),
  POS(568, 7)
};

static FUNCTION_INFO i_lambda_47 = {
  t_lambda_47, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std__log_unhandled_event[] = {
  3, // locals
  2, // parameters
  var_570_29_io,
  LOCAL(3), // 570_32_event
  // event $type $fd $_argument
  LOCAL(3), 0, 3, var_571_10_type, var_571_16_fd, LOCAL(1),
  // fd == STDERR_FILENO
  var_std__equal, 2, var_571_16_fd, var_STDERR_FILENO, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_48, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_51, lambda_52, TAIL_CALL,
  POS(571, 3),
  POS(574, 7),
  POS(573, 7),
  POS(572, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std__log_unhandled_event = {
  t_func_std__log_unhandled_event, NULL, 4, 1,
  {"570_32_event\000"}
};

static TAB_NUM t_lambda_48[] = {
  2, // locals
  0, // parameters
  // type == WRITE_FAILED
  var_std__equal, 2, var_571_10_type, var_WRITE_FAILED, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_49, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(576, 9),
  POS(575, 9),
  POS(575, 9)
};

static FUNCTION_INFO i_lambda_48 = {
  t_lambda_48, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_49[] = {
  2, // locals
  0, // parameters
  // type == WRITE_PENDING
  var_std__equal, 2, var_571_10_type, var_WRITE_PENDING, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_50, 1, LOCAL(2),
  // type == WRITE_PENDING
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(577, 9),
  POS(575, 9),
  POS(577, 9)
};

static FUNCTION_INFO i_lambda_49 = {
  t_lambda_49, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_50[] = {
  1, // locals
  0, // parameters
  // type == WRITE_COMPLETED
  var_std__equal, 2, var_571_10_type, var_WRITE_COMPLETED, 1, LOCAL(1),
  // type == WRITE_COMPLETED
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(578, 9),
  POS(578, 9)
};

static FUNCTION_INFO i_lambda_50 = {
  t_lambda_50, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  //  io # prevent recursive logging
  LET, 1, var_570_29_io, TAIL_CALL,
  POS(579, 7)
};

static FUNCTION_INFO i_lambda_51 = {
  t_lambda_51, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_52[] = {
  2, // locals
  0, // parameters
  // WRITE_PENDING, WRITE_COMPLETED -> 5
  var_std__sequence, 2, var_WRITE_PENDING, var_WRITE_COMPLETED, 1, LOCAL(1),
  // $log_level
  var_case, 4, var_571_10_type, LOCAL(1), lambda_53, lambda_54, 1, LOCAL(2),
  // log io log_level -> "
  var_log, 3, var_570_29_io, LOCAL(2), lambda_55, TAIL_CALL,
  POS(584, 11),
  POS(581, 7),
  POS(586, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_52 = {
  t_lambda_52, NULL, 3, 1,
  {"581_8_log_level\000"}
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  //  5
  LET, 1, num_5, TAIL_CALL,
  POS(584, 44)
};

static FUNCTION_INFO i_lambda_53 = {
  t_lambda_53, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_54[] = {
  0, // locals
  0, // parameters
  //  2
  LET, 1, num_2, TAIL_CALL,
  POS(585, 13)
};

static FUNCTION_INFO i_lambda_54 = {
  t_lambda_54, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_55[] = {
  4, // locals
  0, // parameters
  // serialize(type).trim_right) - @(serialize(fd))@
  var_serialize, 1, var_571_10_type, 1, LOCAL(1),
  // trim_right) - @(serialize(fd))@
  var_trim_right, 1, LOCAL(1), 1, LOCAL(2),
  // serialize(fd))@
  var_serialize, 1, var_571_16_fd, 1, LOCAL(3),
  // "
  var_std__string, 4, str_unhandled_event, LOCAL(2), string_3, LOCAL(3), 1, LOCAL(4),
  //  "
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(587, 27),
  POS(587, 43),
  POS(587, 59),
  POS(586, 27),
  POS(586, 26)
};

static FUNCTION_INFO i_lambda_55 = {
  t_lambda_55, NULL, 5, 0,
  {}
};

static TAB_NUM t_func_std_types__io___initialize[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 591_5_self
  // current_time! $t
  var_current_time, 0, IO_CALL(1), LOCAL(3),
  // .current_time_of t)
  LET, -1, LOCAL(2), var_current_time_of, LOCAL(3), LOCAL(1),
  // -> self(.current_time_of t)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(593, 3),
  POS(594, 11),
  POS(594, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__io___initialize = {
  t_func_std_types__io___initialize, NULL, 3, 2,
  {"593_18_t\000", "591_5_self\000"}
};

static TAB_NUM t_func_std_types__io___get_events[] = {
  1, // locals
  1, // parameters
  var_598_5_self,
  // step_no_of
  var_step_no_of, 1, var_598_5_self, 1, LOCAL(1),
  // inc &self.step_no_of
  var_inc, 1, LOCAL(1), 1, LOCAL(1),
  // self.step_no_of
  LET, -1, var_598_5_self, var_step_no_of, LOCAL(1), var_598_5_self,
  // attempt_close_operations! &self
  func_attempt_close_operations, 1, var_598_5_self, IO_CALL(1), var_598_5_self,
  // attempt_exit! &self
  func_attempt_exit, 1, var_598_5_self, IO_CALL(1), var_598_5_self,
  // $events empty_list
  LET, 1, var_empty_list, 1, var_611_4_events,
  // $want_to_write empty_list
  LET, 1, var_empty_list, 1, var_612_4_want_to_write,
  // current_time! $t
  var_current_time, 0, IO_CALL(1), var_614_18_t,
  // $start_jobs start_jobs_of(self)
  var_start_jobs_of, 1, var_598_5_self, 1, var_615_4_start_jobs,
  // self.start_jobs_of empty_list
  LET, -1, var_598_5_self, var_start_jobs_of, var_empty_list, var_598_5_self,
  // $first_job_time undefined
  LET, 1, var_undefined, 1, var_617_4_first_job_time,
  // $remaining_timed_jobs empty_list
  LET, 1, var_empty_list, 1, var_618_4_remaining_timed_jobs,
  // $timeout undefined
  LET, 1, var_undefined, 1, var_619_4_timeout,
  // timed_jobs_of(self)
  var_timed_jobs_of, 1, var_598_5_self, 1, LOCAL(1),
  // for_each timed_jobs_of(self)
  var_for_each, 3, LOCAL(1), lambda_56, lambda_61, IO_TAIL_CALL,
  POS(604, 13),
  POS(604, 3),
  POS(604, 8),
  POS(606, 3),
  POS(608, 3),
  POS(611, 3),
  POS(612, 3),
  POS(614, 3),
  POS(615, 3),
  POS(616, 4),
  POS(617, 3),
  POS(618, 3),
  POS(619, 3),
  POS(620, 12),
  POS(620, 3)
};

static FUNCTION_INFO i_func_std_types__io___get_events = {
  t_func_std_types__io___get_events, NULL, 15, 0,
  {}
};

static TAB_NUM t_lambda_56[] = {
  2, // locals
  1, // parameters
  var_621_8_timed_job,
  // timed_job $_command $_arguments $time
  var_621_8_timed_job, 0, 3, LOCAL(1), LOCAL(1), var_622_40_time,
  // t:
  var_std__less, 2, var_614_18_t, var_622_40_time, 1, LOCAL(1),
  // t:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_57, lambda_58, IO_TAIL_CALL,
  POS(622, 7),
  POS(624, 17),
  POS(624, 17),
  POS(623, 7)
};

static FUNCTION_INFO i_lambda_56 = {
  t_lambda_56, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  // push &start_jobs timed_job
  var_push, 2, var_615_4_start_jobs, var_621_8_timed_job, 1, var_615_4_start_jobs,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(625, 11),
  POS(626, 11)
};

static FUNCTION_INFO i_lambda_57 = {
  t_lambda_57, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_58[] = {
  2, // locals
  0, // parameters
  // push &remaining_timed_jobs timed_job
  var_push, 2, var_618_4_remaining_timed_jobs, var_621_8_timed_job, 1, var_618_4_remaining_timed_jobs,
  // is_undefined || time < first_job_time:
  var_is_undefined, 1, var_617_4_first_job_time, 1, LOCAL(1),
  // is_undefined || time < first_job_time:
  var_std__or, 2, LOCAL(1), lambda_59, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_60, var_next, IO_TAIL_CALL,
  POS(628, 11),
  POS(630, 28),
  POS(630, 28),
  POS(629, 11)
};

static FUNCTION_INFO i_lambda_58 = {
  t_lambda_58, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_59[] = {
  1, // locals
  0, // parameters
  // time < first_job_time:
  var_std__less, 2, var_622_40_time, var_617_4_first_job_time, 1, LOCAL(1),
  // time < first_job_time:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(630, 44),
  POS(630, 44)
};

static FUNCTION_INFO i_lambda_59 = {
  t_lambda_59, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  0, // parameters
  // !first_job_time time
  LET, 1, var_622_40_time, 1, var_617_4_first_job_time,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(631, 15),
  POS(632, 15)
};

static FUNCTION_INFO i_lambda_60 = {
  t_lambda_60, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_61[] = {
  0, // locals
  0, // parameters
  // self.timed_jobs_of remaining_timed_jobs
  LET, -1, var_598_5_self, var_timed_jobs_of, var_618_4_remaining_timed_jobs, var_598_5_self,
  // set_timeout!
  func_set_timeout, 0, IO_TAIL_CALL,
  POS(635, 8),
  POS(636, 7)
};

static FUNCTION_INFO i_lambda_61 = {
  t_lambda_61, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_set_timeout[] = {
  2, // locals
  0, // parameters
  // !timeout timeout_of(self)
  var_timeout_of, 1, var_598_5_self, 1, var_619_4_timeout,
  // is_defined || first_job_time.is_defined:
  var_is_defined, 1, var_619_4_timeout, 1, LOCAL(1),
  // is_defined || first_job_time.is_defined:
  var_std__or, 2, LOCAL(1), lambda_62, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_63, func_handle_start_jobs, IO_TAIL_CALL,
  POS(639, 5),
  POS(641, 15),
  POS(641, 15),
  POS(640, 5)
};

static FUNCTION_INFO i_func_set_timeout = {
  t_func_set_timeout, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_62[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_617_4_first_job_time, 1, LOCAL(1),
  // first_job_time.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(641, 44),
  POS(641, 29)
};

static FUNCTION_INFO i_lambda_62 = {
  t_lambda_62, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_63[] = {
  2, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_619_4_timeout, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_64, 1, LOCAL(2),
  // update_if
  var_update_if, 3, LOCAL(2), var_619_4_timeout, lambda_timeout, 1, var_619_4_timeout,
  // self.timeout_of undefined
  LET, -1, var_598_5_self, var_timeout_of, var_undefined, var_598_5_self,
  // timeout-t 0)
  var_std__minus, 2, var_619_4_timeout, var_614_18_t, 1, LOCAL(1),
  // !timeout max(timeout-t 0)
  var_max, 2, LOCAL(1), num_0, 1, var_619_4_timeout,
  // 0
  var_std__less, 2, num_0, var_619_4_timeout, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_66, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_67, func_handle_start_jobs, IO_TAIL_CALL,
  POS(644, 21),
  POS(643, 13),
  POS(642, 9),
  POS(647, 10),
  POS(648, 22),
  POS(648, 9),
  POS(651, 23),
  POS(650, 13),
  POS(649, 9)
};

static FUNCTION_INFO i_lambda_63 = {
  t_lambda_63, NULL, 9, 0,
  {}
};

static TAB_NUM t_lambda_64[] = {
  2, // locals
  0, // parameters
  // is_defined && first_job_time < timeout
  var_is_defined, 1, var_617_4_first_job_time, 1, LOCAL(1),
  // is_defined && first_job_time < timeout
  var_std__and, 2, LOCAL(1), lambda_65, 1, LOCAL(2),
  // first_job_time.is_defined && first_job_time < timeout
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(645, 28),
  POS(645, 28),
  POS(645, 13)
};

static FUNCTION_INFO i_lambda_64 = {
  t_lambda_64, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_65[] = {
  1, // locals
  0, // parameters
  // first_job_time < timeout
  var_std__less, 2, var_617_4_first_job_time, var_619_4_timeout, 1, LOCAL(1),
  // first_job_time < timeout
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(645, 42),
  POS(645, 42)
};

static FUNCTION_INFO i_lambda_65 = {
  t_lambda_65, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_timeout[] = {
  0, // locals
  0, // parameters
  //  first_job_time
  LET, 1, var_617_4_first_job_time, TAIL_CALL,
  POS(646, 22)
};

static FUNCTION_INFO i_lambda_timeout = {
  t_lambda_timeout, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_66[] = {
  2, // locals
  0, // parameters
  // exit_codes_of(self): (pid _exit_code)
  var_exit_codes_of, 1, var_598_5_self, 1, LOCAL(1),
  // any_of
  var_any_of, 2, LOCAL(1), lambda_exit_codes_ofself, 1, LOCAL(2),
  // any_of
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(653, 15),
  POS(652, 13),
  POS(652, 13)
};

static FUNCTION_INFO i_lambda_66 = {
  t_lambda_66, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_exit_codes_ofself[] = {
  3, // locals
  2, // parameters
  LOCAL(3), // 653_37_pid
  LOCAL(1),
  // watched_pids_of(self)(pid)
  var_watched_pids_of, 1, var_598_5_self, 1, LOCAL(1),
  // watched_pids_of(self)(pid)
  LOCAL(1), 1, LOCAL(3), 1, LOCAL(2),
  // -> watched_pids_of(self)(pid)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(654, 20),
  POS(654, 20),
  POS(654, 17),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_exit_codes_ofself = {
  t_lambda_exit_codes_ofself, NULL, 3, 1,
  {"653_37_pid\000"}
};

static TAB_NUM t_lambda_67[] = {
  0, // locals
  0, // parameters
  // !timeout 0
  LET, 1, num_0, 1, var_619_4_timeout,
  // handle_start_jobs!
  func_handle_start_jobs, 0, IO_TAIL_CALL,
  POS(656, 13),
  POS(657, 13)
};

static FUNCTION_INFO i_lambda_67 = {
  t_lambda_67, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_handle_start_jobs[] = {
  0, // locals
  0, // parameters
  // for_each start_jobs
  var_for_each, 3, var_615_4_start_jobs, lambda_68, lambda_70, IO_TAIL_CALL,
  POS(662, 5)
};

static FUNCTION_INFO i_func_handle_start_jobs = {
  t_func_handle_start_jobs, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_68[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 663_10_job
  // job $command $arguments
  LOCAL(2), 0, 2, LOCAL(3), LOCAL(4),
  // apply! command &self arguments $new_event
  var_apply, 3, LOCAL(3), var_598_5_self, LOCAL(4), IO_CALL(2), var_598_5_self, var_665_41_new_event,
  // is_defined:
  var_is_defined, 1, var_665_41_new_event, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_new_event_is_defined, var_next, IO_TAIL_CALL,
  POS(664, 9),
  POS(665, 9),
  POS(667, 21),
  POS(666, 9),
  LOCAL(2),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_68 = {
  t_lambda_68, NULL, 4, 3,
  {"663_10_job\000", "664_23_arguments\000", "664_14_command\000"}
};

static TAB_NUM t_lambda_new_event_is_defined[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_665_41_new_event, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_new_event_is_a_list, lambda_69, IO_TAIL_CALL,
  POS(669, 25),
  POS(668, 13)
};

static FUNCTION_INFO i_lambda_new_event_is_defined = {
  t_lambda_new_event_is_defined, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_new_event_is_a_list[] = {
  0, // locals
  0, // parameters
  // append &events new_event
  var_append, 2, var_611_4_events, var_665_41_new_event, 1, var_611_4_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(670, 17),
  POS(671, 17)
};

static FUNCTION_INFO i_lambda_new_event_is_a_list = {
  t_lambda_new_event_is_a_list, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_69[] = {
  0, // locals
  0, // parameters
  // push &events new_event
  var_push, 2, var_611_4_events, var_665_41_new_event, 1, var_611_4_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(673, 17),
  POS(674, 17)
};

static FUNCTION_INFO i_lambda_69 = {
  t_lambda_69, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_70[] = {
  1, // locals
  0, // parameters
  // !start_jobs start_jobs_of(self)
  var_start_jobs_of, 1, var_598_5_self, 1, var_615_4_start_jobs,
  // self.start_jobs_of empty_list
  LET, -1, var_598_5_self, var_start_jobs_of, var_empty_list, var_598_5_self,
  // is_empty
  var_is_empty, 1, var_615_4_start_jobs, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), func_handle_write_jobs, func_handle_start_jobs, IO_TAIL_CALL,
  POS(678, 9),
  POS(679, 10),
  POS(681, 22),
  POS(680, 9)
};

static FUNCTION_INFO i_lambda_70 = {
  t_lambda_70, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_handle_write_jobs[] = {
  1, // locals
  0, // parameters
  // write_jobs_of(self)
  var_write_jobs_of, 1, var_598_5_self, 1, LOCAL(1),
  // for_each write_jobs_of(self)
  var_for_each, 3, LOCAL(1), lambda_71, func_wait_for_events, IO_TAIL_CALL,
  POS(686, 14),
  POS(686, 5)
};

static FUNCTION_INFO i_func_handle_write_jobs = {
  t_func_handle_write_jobs, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_71[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 687_10_fd
  LOCAL(1),
  // push &want_to_write fd
  var_push, 2, var_612_4_want_to_write, LOCAL(2), 1, var_612_4_want_to_write,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(688, 9),
  POS(689, 9),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_71 = {
  t_lambda_71, NULL, 2, 1,
  {"687_10_fd\000"}
};

static TAB_NUM t_func_wait_for_events[] = {
  2, // locals
  0, // parameters
  // $read_descriptor_list empty_list
  LET, 1, var_empty_list, 1, var_693_8_read_descriptor_list,
  // read_jobs_of(self)
  var_read_jobs_of, 1, var_598_5_self, 1, LOCAL(1),
  // for_each !read_descriptor_list read_jobs_of(self)
  var_for_each, 3, LOCAL(1), lambda_72, lambda_73, IO_CALL(1), var_693_8_read_descriptor_list,
  // is_not_empty &timeout -> 0
  var_is_not_empty, 1, var_611_4_events, 1, LOCAL(1),
  // update_if events.is_not_empty &timeout -> 0
  var_update_if, 3, LOCAL(1), var_619_4_timeout, lambda_74, 1, var_619_4_timeout,
  // pselect!
  var_pselect, 4, var_693_8_read_descriptor_list, var_612_4_want_to_write, var_empty_list, var_619_4_timeout, IO_CALL(4), LOCAL(2), var_702_10_can_read, var_703_10_can_write, LOCAL(1),
  // current_time! !self.current_time_of
  var_current_time, 0, IO_CALL(1), LOCAL(1),
  // self.current_time_of
  LET, -1, var_598_5_self, var_current_time_of, LOCAL(1), var_598_5_self,
  // $injected_into_stdin false
  LET, 1, var_false, 1, var_707_8_injected_into_stdin,
  // $write_jobs write_jobs_of(self)
  var_write_jobs_of, 1, var_598_5_self, 1, var_708_8_write_jobs,
  // for_each signals
  var_for_each, 3, LOCAL(2), lambda_75, func_handle_write_requests, IO_TAIL_CALL,
  POS(693, 7),
  POS(694, 38),
  POS(694, 7),
  POS(699, 24),
  POS(699, 7),
  POS(700, 7),
  POS(706, 7),
  POS(706, 22),
  POS(707, 7),
  POS(708, 7),
  POS(709, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_func_wait_for_events = {
  t_func_wait_for_events, NULL, 11, 1,
  {"701_10_signals\000"}
};

static TAB_NUM t_lambda_72[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 695_12_fd
  LOCAL(1),
  // push &read_descriptor_list fd
  var_push, 2, var_693_8_read_descriptor_list, LOCAL(2), 1, var_693_8_read_descriptor_list,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(696, 11),
  POS(697, 11),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_72 = {
  t_lambda_72, NULL, 2, 1,
  {"695_12_fd\000"}
};

static TAB_NUM t_lambda_73[] = {
  0, // locals
  0, // parameters
  //  read_descriptor_list
  LET, 1, var_693_8_read_descriptor_list, TAIL_CALL,
  POS(698, 11)
};

static FUNCTION_INFO i_lambda_73 = {
  t_lambda_73, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_74[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(699, 48)
};

static FUNCTION_INFO i_lambda_74 = {
  t_lambda_74, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_75[] = {
  0, // locals
  1, // parameters
  var_710_12_signal,
  // case signal
  var_case, 6, var_710_12_signal, var_SIGCHLD, lambda_SIGCHLD, var_SIGWINCH, lambda_SIGWINCH, lambda_80, IO_TAIL_CALL,
  POS(711, 11)
};

static FUNCTION_INFO i_lambda_75 = {
  t_lambda_75, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_SIGCHLD[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_76, var_next, IO_TAIL_CALL,
  POS(713, 15)
};

static FUNCTION_INFO i_lambda_SIGCHLD = {
  t_lambda_SIGCHLD, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_76[] = {
  2, // locals
  0, // parameters
  // process_id(-1)
  var_process_id, 1, minus_num_1, 1, LOCAL(1),
  // waitpid! $pid $status process_id(-1)
  var_waitpid, 1, LOCAL(1), IO_CALL(2), var_715_29_pid, var_715_34_status,
  // is_an_error || pid.to_integer == 0
  var_is_an_error, 1, var_715_29_pid, 1, LOCAL(1),
  // is_an_error || pid.to_integer == 0
  var_std__or, 2, LOCAL(1), lambda_77, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_break, lambda_78, IO_TAIL_CALL,
  POS(715, 41),
  POS(715, 19),
  POS(717, 25),
  POS(717, 25),
  POS(716, 19)
};

static FUNCTION_INFO i_lambda_76 = {
  t_lambda_76, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_77[] = {
  2, // locals
  0, // parameters
  // to_integer == 0
  var_to_integer, 1, var_715_29_pid, 1, LOCAL(1),
  // to_integer == 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // pid.to_integer == 0
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(717, 44),
  POS(717, 44),
  POS(717, 40)
};

static FUNCTION_INFO i_lambda_77 = {
  t_lambda_77, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_78[] = {
  2, // locals
  0, // parameters
  // exitstatus &status
  var_exitstatus, 1, var_715_34_status, 1, var_715_34_status,
  // watched_pids_of(self)(pid):
  var_watched_pids_of, 1, var_598_5_self, 1, LOCAL(1),
  // watched_pids_of(self)(pid):
  LOCAL(1), 1, var_715_29_pid, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_watched_pids_ofselfpid, lambda_79, IO_TAIL_CALL,
  POS(720, 23),
  POS(722, 25),
  POS(722, 25),
  POS(721, 23)
};

static FUNCTION_INFO i_lambda_78 = {
  t_lambda_78, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_watched_pids_ofselfpid[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(pid) false
  var_watched_pids_of, 1, var_598_5_self, 1, LOCAL(2),
  // watched_pids_of(pid) false
  LOCAL(2), 2, var_715_29_pid, var_false, 1, LOCAL(2),
  // self.watched_pids_of(pid) false
  LET, -1, var_598_5_self, var_watched_pids_of, LOCAL(2), var_598_5_self,
  // typed_tuple
  var_typed_tuple, 4, var_std_types__event, var_PROCESS_JOINED, var_715_29_pid, var_715_34_status, 1, LOCAL(1),
  // push &events
  var_push, 2, var_611_4_events, LOCAL(1), 1, var_611_4_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(723, 33),
  POS(723, 33),
  POS(723, 28),
  POS(725, 29),
  POS(724, 27),
  POS(727, 27)
};

static FUNCTION_INFO i_lambda_watched_pids_ofselfpid = {
  t_lambda_watched_pids_ofselfpid, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_79[] = {
  2, // locals
  0, // parameters
  // exit_codes_of(pid) status
  var_exit_codes_of, 1, var_598_5_self, 1, LOCAL(2),
  // exit_codes_of(pid) status
  LOCAL(2), 2, var_715_29_pid, var_715_34_status, 1, LOCAL(2),
  // self.exit_codes_of(pid) status
  LET, -1, var_598_5_self, var_exit_codes_of, LOCAL(2), var_598_5_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(729, 33),
  POS(729, 33),
  POS(729, 28),
  POS(730, 27)
};

static FUNCTION_INFO i_lambda_79 = {
  t_lambda_79, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_SIGWINCH[] = {
  0, // locals
  0, // parameters
  // self.window_change_event_occurred true
  LET, -1, var_598_5_self, var_window_change_event_occurred, var_true, var_598_5_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(733, 16),
  POS(734, 15)
};

static FUNCTION_INFO i_lambda_SIGWINCH = {
  t_lambda_SIGWINCH, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_80[] = {
  2, // locals
  0, // parameters
  // catched_signals_of(self)(signal):
  var_catched_signals_of, 1, var_598_5_self, 1, LOCAL(1),
  // catched_signals_of(self)(signal):
  LOCAL(1), 1, var_710_12_signal, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_catched_signals_ofselfsignal, var_next, IO_TAIL_CALL,
  POS(737, 17),
  POS(737, 17),
  POS(736, 15)
};

static FUNCTION_INFO i_lambda_80 = {
  t_lambda_80, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_catched_signals_ofselfsignal[] = {
  1, // locals
  0, // parameters
  // typed_tuple(std_types::event SIGNAL undefined signal)
  var_typed_tuple, 4, var_std_types__event, var_SIGNAL, var_undefined, var_710_12_signal, 1, LOCAL(1),
  // push &events
  var_push, 2, var_611_4_events, LOCAL(1), 1, var_611_4_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(739, 21),
  POS(738, 19),
  POS(740, 19)
};

static FUNCTION_INFO i_lambda_catched_signals_ofselfsignal = {
  t_lambda_catched_signals_ofselfsignal, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_handle_write_requests[] = {
  2, // locals
  0, // parameters
  // window_change_event_occurred
  var_window_change_event_occurred, 1, var_598_5_self, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_81, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_83, lambda_84, IO_TAIL_CALL,
  POS(747, 18),
  POS(746, 13),
  POS(745, 9)
};

static FUNCTION_INFO i_func_handle_write_requests = {
  t_func_handle_write_requests, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_81[] = {
  2, // locals
  0, // parameters
  // do_inject_window_change_events
  var_do_inject_window_change_events, 1, var_598_5_self, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_82, 1, LOCAL(2),
  // self.do_inject_window_change_events
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(748, 18),
  POS(746, 13),
  POS(748, 13)
};

static FUNCTION_INFO i_lambda_81 = {
  t_lambda_81, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_82[] = {
  3, // locals
  0, // parameters
  // read_jobs_of(self)(STDIN_FILENO).is_defined
  var_read_jobs_of, 1, var_598_5_self, 1, LOCAL(1),
  // read_jobs_of(self)(STDIN_FILENO).is_defined
  LOCAL(1), 1, var_STDIN_FILENO, 1, LOCAL(2),
  // is_defined
  var_is_defined, 1, LOCAL(2), 1, LOCAL(3),
  // read_jobs_of(self)(STDIN_FILENO).is_defined
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(749, 13),
  POS(749, 13),
  POS(749, 46),
  POS(749, 13)
};

static FUNCTION_INFO i_lambda_82 = {
  t_lambda_82, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_83[] = {
  4, // locals
  0, // parameters
  // get_terminal_size! STDIN_FILENO $width $height
  var_get_terminal_size, 1, var_STDIN_FILENO, IO_CALL(2), LOCAL(2), LOCAL(3),
  // self.window_change_event_occurred false
  LET, -1, var_598_5_self, var_window_change_event_occurred, var_false, var_598_5_self,
  // $buf "@esc;[8;@(height);@(width)t"
  var_std__string, 5, string_4, LOCAL(3), string_5, LOCAL(2), str_t, 1, LOCAL(4),
  // typed_tuple(std_types::event READ STDIN_FILENO buf)
  var_typed_tuple, 4, var_std_types__event, var_READ, var_STDIN_FILENO, LOCAL(4), 1, LOCAL(1),
  // push &events typed_tuple(std_types::event READ STDIN_FILENO buf)
  var_push, 2, var_611_4_events, LOCAL(1), 1, var_611_4_events,
  // !injected_into_stdin true
  LET, 1, var_true, 1, var_707_8_injected_into_stdin,
  // check_file_descriptors!
  func_check_file_descriptors, 0, IO_TAIL_CALL,
  POS(751, 13),
  POS(752, 14),
  POS(753, 13),
  POS(754, 26),
  POS(754, 13),
  POS(755, 13),
  POS(756, 13),
  LOCAL(4),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_83 = {
  t_lambda_83, NULL, 7, 3,
  {"753_14_buf\000", "751_46_width\000", "751_53_height\000"}
};

static TAB_NUM t_lambda_84[] = {
  0, // locals
  0, // parameters
  // check_file_descriptors!
  func_check_file_descriptors, 0, IO_TAIL_CALL,
  POS(758, 13)
};

static FUNCTION_INFO i_lambda_84 = {
  t_lambda_84, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_check_file_descriptors[] = {
  0, // locals
  0, // parameters
  // for_each can_write
  var_for_each, 3, var_703_10_can_write, lambda_85, func_attempt_reads, IO_TAIL_CALL,
  POS(761, 9)
};

static FUNCTION_INFO i_func_check_file_descriptors = {
  t_func_check_file_descriptors, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_85[] = {
  1, // locals
  1, // parameters
  var_762_14_fd,
  // $job write_jobs(fd)
  var_708_8_write_jobs, 1, var_762_14_fd, 1, var_763_14_job,
  // write! $bytes_written fd job
  var_write, 2, var_762_14_fd, var_763_14_job, IO_CALL(1), var_764_21_bytes_written,
  // is_an_error:
  var_is_an_error, 1, var_764_21_bytes_written, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_bytes_written_is_an_error, lambda_86, IO_TAIL_CALL,
  POS(763, 13),
  POS(764, 13),
  POS(766, 29),
  POS(765, 13)
};

static FUNCTION_INFO i_lambda_85 = {
  t_lambda_85, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_bytes_written_is_an_error[] = {
  2, // locals
  0, // parameters
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, var_598_5_self, 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, var_762_14_fd, var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, var_598_5_self, var_write_jobs_of, LOCAL(2), var_598_5_self,
  // typed_tuple
  var_typed_tuple, 4, var_std_types__event, var_WRITE_FAILED, var_762_14_fd, var_764_21_bytes_written, 1, LOCAL(1),
  // push &events
  var_push, 2, var_611_4_events, LOCAL(1), 1, var_611_4_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(767, 23),
  POS(767, 23),
  POS(767, 18),
  POS(769, 19),
  POS(768, 17),
  POS(773, 17)
};

static FUNCTION_INFO i_lambda_bytes_written_is_an_error = {
  t_lambda_bytes_written_is_an_error, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_86[] = {
  2, // locals
  0, // parameters
  // length_of(job):
  var_length_of, 1, var_763_14_job, 1, LOCAL(1),
  // bytes_written < length_of(job):
  var_std__less, 2, var_764_21_bytes_written, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_87, lambda_88, IO_TAIL_CALL,
  POS(776, 35),
  POS(776, 19),
  POS(775, 17)
};

static FUNCTION_INFO i_lambda_86 = {
  t_lambda_86, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_87[] = {
  2, // locals
  0, // parameters
  // bytes_written+1 -1
  var_std__plus, 2, var_764_21_bytes_written, num_1, 1, LOCAL(1),
  // range &job bytes_written+1 -1
  var_range, 3, var_763_14_job, LOCAL(1), minus_num_1, 1, var_763_14_job,
  // write_jobs_of(fd) job # remaining text to write
  var_write_jobs_of, 1, var_598_5_self, 1, LOCAL(2),
  // write_jobs_of(fd) job # remaining text to write
  LOCAL(2), 2, var_762_14_fd, var_763_14_job, 1, LOCAL(2),
  // self.write_jobs_of(fd) job # remaining text to write
  LET, -1, var_598_5_self, var_write_jobs_of, LOCAL(2), var_598_5_self,
  // typed_tuple(std_types::event WRITE_PENDING fd job)
  var_typed_tuple, 4, var_std_types__event, var_WRITE_PENDING, var_762_14_fd, var_763_14_job, 1, LOCAL(1),
  // push &events
  var_push, 2, var_611_4_events, LOCAL(1), 1, var_611_4_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(777, 32),
  POS(777, 21),
  POS(778, 27),
  POS(778, 27),
  POS(778, 22),
  POS(780, 23),
  POS(779, 21),
  POS(781, 21)
};

static FUNCTION_INFO i_lambda_87 = {
  t_lambda_87, NULL, 8, 0,
  {}
};

static TAB_NUM t_lambda_88[] = {
  2, // locals
  0, // parameters
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, var_598_5_self, 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, var_762_14_fd, var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, var_598_5_self, var_write_jobs_of, LOCAL(2), var_598_5_self,
  // typed_tuple(std_types::event WRITE_COMPLETED fd undefined)
  var_typed_tuple, 4, var_std_types__event, var_WRITE_COMPLETED, var_762_14_fd, var_undefined, 1, LOCAL(1),
  // push &events
  var_push, 2, var_611_4_events, LOCAL(1), 1, var_611_4_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(783, 27),
  POS(783, 27),
  POS(783, 22),
  POS(785, 23),
  POS(784, 21),
  POS(786, 21)
};

static FUNCTION_INFO i_lambda_88 = {
  t_lambda_88, NULL, 6, 0,
  {}
};

static TAB_NUM t_func_attempt_reads[] = {
  0, // locals
  0, // parameters
  // for_each can_read
  var_for_each, 3, var_702_10_can_read, lambda_89, lambda_101, IO_TAIL_CALL,
  POS(790, 9)
};

static FUNCTION_INFO i_func_attempt_reads = {
  t_func_attempt_reads, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_89[] = {
  3, // locals
  1, // parameters
  var_791_14_fd,
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__equal, 2, var_791_14_fd, var_STDIN_FILENO, 1, LOCAL(1),
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__or, 2, LOCAL(2), lambda_90, 1, LOCAL(3),
  // if_not fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_if_not, 3, LOCAL(3), var_next, lambda_91, IO_TAIL_CALL,
  POS(792, 20),
  POS(792, 20),
  POS(792, 20),
  POS(792, 13)
};

static FUNCTION_INFO i_lambda_89 = {
  t_lambda_89, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_90[] = {
  1, // locals
  0, // parameters
  // not(injected_into_stdin) next:
  var_not, 1, var_707_8_injected_into_stdin, 1, LOCAL(1),
  // not(injected_into_stdin) next:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(792, 42),
  POS(792, 42)
};

static FUNCTION_INFO i_lambda_90 = {
  t_lambda_90, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_91[] = {
  3, // locals
  0, // parameters
  // fstat! fd $info
  var_fstat, 1, var_791_14_fd, IO_CALL(1), LOCAL(3),
  // type_of(info) == SOCKET:
  var_type_of, 1, LOCAL(3), 1, LOCAL(1),
  // type_of(info) == SOCKET:
  var_std__equal, 2, LOCAL(1), var_SOCKET, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_92, func_do_read, IO_TAIL_CALL,
  POS(793, 15),
  POS(795, 17),
  POS(795, 17),
  POS(794, 15),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_91 = {
  t_lambda_91, NULL, 4, 1,
  {"793_26_info\000"}
};

static TAB_NUM t_lambda_92[] = {
  1, // locals
  0, // parameters
  // is_listening! $does_listen fd
  var_is_listening, 1, var_791_14_fd, IO_CALL(1), LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_does_listen, func_do_read, IO_TAIL_CALL,
  POS(796, 19),
  POS(797, 19),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_92 = {
  t_lambda_92, NULL, 2, 1,
  {"796_34_does_listen\000"}
};

static TAB_NUM t_lambda_does_listen[] = {
  1, // locals
  0, // parameters
  // accept! $conn fd
  var_accept, 1, var_791_14_fd, IO_CALL(1), var_799_32_conn,
  // is_an_error:
  var_is_an_error, 1, var_799_32_conn, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_conn_is_an_error, lambda_93, IO_TAIL_CALL,
  POS(799, 23),
  POS(801, 30),
  POS(800, 23)
};

static FUNCTION_INFO i_lambda_does_listen = {
  t_lambda_does_listen, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_conn_is_an_error[] = {
  1, // locals
  0, // parameters
  // typed_tuple(std_types::event READ_FAILED fd conn)
  var_typed_tuple, 4, var_std_types__event, var_READ_FAILED, var_791_14_fd, var_799_32_conn, 1, LOCAL(1),
  // push &events
  var_push, 2, var_611_4_events, LOCAL(1), 1, var_611_4_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(803, 29),
  POS(802, 27),
  POS(804, 27)
};

static FUNCTION_INFO i_lambda_conn_is_an_error = {
  t_lambda_conn_is_an_error, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_93[] = {
  1, // locals
  0, // parameters
  // typed_tuple(std_types::event CONNECT fd conn)
  var_typed_tuple, 4, var_std_types__event, var_CONNECT, var_791_14_fd, var_799_32_conn, 1, LOCAL(1),
  // push &events
  var_push, 2, var_611_4_events, LOCAL(1), 1, var_611_4_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(807, 29),
  POS(806, 27),
  POS(808, 27)
};

static FUNCTION_INFO i_lambda_93 = {
  t_lambda_93, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_do_read[] = {
  4, // locals
  0, // parameters
  // read_jobs_of(self)(fd)
  var_read_jobs_of, 1, var_598_5_self, 1, LOCAL(1),
  // $do_close_and_max_length read_jobs_of(self)(fd)
  LOCAL(1), 1, var_791_14_fd, 1, LOCAL(3),
  // do_close_and_max_length $do_close $max_length
  LOCAL(3), 0, 2, var_814_42_do_close, var_814_52_max_length,
  // is_defined && max_length < 0x10'0000
  var_is_defined, 1, var_814_52_max_length, 1, LOCAL(1),
  // is_defined && max_length < 0x10'0000
  var_std__and, 2, LOCAL(1), lambda_94, 1, LOCAL(2),
  // $length
  var_if, 3, LOCAL(2), lambda_95, lambda_96, 1, LOCAL(4),
  // read! $buf fd length
  var_read, 2, var_791_14_fd, LOCAL(4), IO_CALL(1), var_820_24_buf,
  // is_an_error:
  var_is_an_error, 1, var_820_24_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_an_error, lambda_97, IO_TAIL_CALL,
  POS(813, 42),
  POS(813, 17),
  POS(814, 17),
  POS(817, 32),
  POS(817, 32),
  POS(815, 17),
  POS(820, 17),
  POS(822, 23),
  POS(821, 17),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_do_read = {
  t_func_do_read, NULL, 9, 2,
  {"815_18_length\000", "813_18_do_close_and_max_length\000"}
};

static TAB_NUM t_lambda_94[] = {
  1, // locals
  0, // parameters
  // max_length < 0x10'0000
  var_std__less, 2, var_814_52_max_length, num_0x100000, 1, LOCAL(1),
  // max_length < 0x10'0000
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(817, 46),
  POS(817, 46)
};

static FUNCTION_INFO i_lambda_94 = {
  t_lambda_94, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_95[] = {
  0, // locals
  0, // parameters
  //  max_length
  LET, 1, var_814_52_max_length, TAIL_CALL,
  POS(818, 23)
};

static FUNCTION_INFO i_lambda_95 = {
  t_lambda_95, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_96[] = {
  0, // locals
  0, // parameters
  //  0x10'0000
  LET, 1, num_0x100000, TAIL_CALL,
  POS(819, 23)
};

static FUNCTION_INFO i_lambda_96 = {
  t_lambda_96, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_buf_is_an_error[] = {
  1, // locals
  0, // parameters
  // typed_tuple(std_types::event READ_FAILED fd buf)
  var_typed_tuple, 4, var_std_types__event, var_READ_FAILED, var_791_14_fd, var_820_24_buf, 1, LOCAL(1),
  // push &events typed_tuple(std_types::event READ_FAILED fd buf)
  var_push, 2, var_611_4_events, LOCAL(1), 1, var_611_4_events,
  // if
  var_if, 3, var_814_42_do_close, lambda_do_close, var_next, IO_TAIL_CALL,
  POS(823, 34),
  POS(823, 21),
  POS(824, 21)
};

static FUNCTION_INFO i_lambda_buf_is_an_error = {
  t_lambda_buf_is_an_error, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_do_close[] = {
  0, // locals
  0, // parameters
  // close &self fd
  var_close, 2, var_598_5_self, var_791_14_fd, 1, var_598_5_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(826, 25),
  POS(827, 25)
};

static FUNCTION_INFO i_lambda_do_close = {
  t_lambda_do_close, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_97[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_820_24_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_empty, lambda_98, IO_TAIL_CALL,
  POS(831, 27),
  POS(830, 21)
};

static FUNCTION_INFO i_lambda_97 = {
  t_lambda_97, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_buf_is_empty[] = {
  1, // locals
  0, // parameters
  // stop_reading_from &self fd
  var_stop_reading_from, 2, var_598_5_self, var_791_14_fd, 1, var_598_5_self,
  // typed_tuple(std_types::event CLOSED fd undefined)
  var_typed_tuple, 4, var_std_types__event, var_CLOSED, var_791_14_fd, var_undefined, 1, LOCAL(1),
  // push &events
  var_push, 2, var_611_4_events, LOCAL(1), 1, var_611_4_events,
  // if
  var_if, 3, var_814_42_do_close, lambda_2_do_close, var_next, IO_TAIL_CALL,
  POS(832, 25),
  POS(834, 27),
  POS(833, 25),
  POS(835, 25)
};

static FUNCTION_INFO i_lambda_buf_is_empty = {
  t_lambda_buf_is_empty, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_2_do_close[] = {
  0, // locals
  0, // parameters
  // close &self fd
  var_close, 2, var_598_5_self, var_791_14_fd, 1, var_598_5_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(837, 29),
  POS(838, 29)
};

static FUNCTION_INFO i_lambda_2_do_close = {
  t_lambda_2_do_close, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_98[] = {
  1, // locals
  0, // parameters
  // typed_tuple(std_types::event READ fd buf)
  var_typed_tuple, 4, var_std_types__event, var_READ, var_791_14_fd, var_820_24_buf, 1, LOCAL(1),
  // push &events typed_tuple(std_types::event READ fd buf)
  var_push, 2, var_611_4_events, LOCAL(1), 1, var_611_4_events,
  // is_defined:
  var_is_defined, 1, var_814_52_max_length, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_max_length_is_defined, var_next, IO_TAIL_CALL,
  POS(841, 38),
  POS(841, 25),
  POS(843, 38),
  POS(842, 25)
};

static FUNCTION_INFO i_lambda_98 = {
  t_lambda_98, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_max_length_is_defined[] = {
  2, // locals
  0, // parameters
  // length_of(buf) < max_length:
  var_length_of, 1, var_820_24_buf, 1, LOCAL(1),
  // length_of(buf) < max_length:
  var_std__less, 2, LOCAL(1), var_814_52_max_length, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_99, lambda_100, IO_TAIL_CALL,
  POS(845, 31),
  POS(845, 31),
  POS(844, 29)
};

static FUNCTION_INFO i_lambda_max_length_is_defined = {
  t_lambda_max_length_is_defined, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_99[] = {
  5, // locals
  0, // parameters
  // length_of(buf))
  var_length_of, 1, var_820_24_buf, 1, LOCAL(1),
  // max_length-length_of(buf))
  var_std__minus, 2, var_814_52_max_length, LOCAL(1), 1, LOCAL(2),
  // !self.read_jobs_of(fd)
  var_tuple, 2, var_true, LOCAL(2), 1, LOCAL(4),
  // read_jobs_of(fd)
  var_read_jobs_of, 1, var_598_5_self, 1, LOCAL(5),
  // read_jobs_of(fd)
  LOCAL(5), 2, var_791_14_fd, LOCAL(4), 1, LOCAL(5),
  // self.read_jobs_of(fd)
  LET, -1, var_598_5_self, var_read_jobs_of, LOCAL(5), var_598_5_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(847, 57),
  POS(847, 46),
  POS(846, 33),
  POS(846, 39),
  POS(846, 39),
  POS(846, 34),
  POS(848, 33)
};

static FUNCTION_INFO i_lambda_99 = {
  t_lambda_99, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_100[] = {
  0, // locals
  0, // parameters
  // stop_reading_from &self fd
  var_stop_reading_from, 2, var_598_5_self, var_791_14_fd, 1, var_598_5_self,
  // if
  var_if, 3, var_814_42_do_close, lambda_3_do_close, var_next, IO_TAIL_CALL,
  POS(850, 33),
  POS(851, 33)
};

static FUNCTION_INFO i_lambda_100 = {
  t_lambda_100, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_3_do_close[] = {
  0, // locals
  0, // parameters
  // close &self fd
  var_close, 2, var_598_5_self, var_791_14_fd, 1, var_598_5_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(853, 37),
  POS(854, 37)
};

static FUNCTION_INFO i_lambda_3_do_close = {
  t_lambda_3_do_close, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_101[] = {
  0, // locals
  0, // parameters
  // attempt_close_operations! &self
  func_attempt_close_operations, 1, var_598_5_self, IO_CALL(1), var_598_5_self,
  // attempt_exit! &self
  func_attempt_exit, 1, var_598_5_self, IO_CALL(1), var_598_5_self,
  // -> self events
  LET, 2, var_598_5_self, var_611_4_events, TAIL_CALL,
  POS(858, 13),
  POS(860, 13),
  POS(862, 13)
};

static FUNCTION_INFO i_lambda_101 = {
  t_lambda_101, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_attempt_close_operations[] = {
  1, // locals
  1, // parameters
  var_864_29_io,
  // close_jobs_of(io)
  var_close_jobs_of, 1, var_864_29_io, 1, LOCAL(1),
  // for_each close_jobs_of(io)
  var_for_each, 3, LOCAL(1), lambda_102, lambda_103, IO_TAIL_CALL,
  POS(865, 12),
  POS(865, 3)
};

static FUNCTION_INFO i_func_attempt_close_operations = {
  t_func_attempt_close_operations, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_102[] = {
  3, // locals
  1, // parameters
  var_866_8_fd,
  // write_jobs_of(io)(fd).is_undefined:
  var_write_jobs_of, 1, var_864_29_io, 1, LOCAL(1),
  // write_jobs_of(io)(fd).is_undefined:
  LOCAL(1), 1, var_866_8_fd, 1, LOCAL(2),
  // is_undefined:
  var_is_undefined, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_write_jobs_ofiofd_is_undefined, var_next, IO_TAIL_CALL,
  POS(868, 9),
  POS(868, 9),
  POS(868, 31),
  POS(867, 7)
};

static FUNCTION_INFO i_lambda_102 = {
  t_lambda_102, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_write_jobs_ofiofd_is_undefined[] = {
  2, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_866_8_fd, IO_CALL(0),
  // close_jobs_of(fd) false
  var_close_jobs_of, 1, var_864_29_io, 1, LOCAL(2),
  // close_jobs_of(fd) false
  LOCAL(2), 2, var_866_8_fd, var_false, 1, LOCAL(2),
  // io.close_jobs_of(fd) false
  LET, -1, var_864_29_io, var_close_jobs_of, LOCAL(2), var_864_29_io,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(869, 11),
  POS(870, 15),
  POS(870, 15),
  POS(870, 12),
  POS(871, 11)
};

static FUNCTION_INFO i_lambda_write_jobs_ofiofd_is_undefined = {
  t_lambda_write_jobs_ofiofd_is_undefined, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_103[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_864_29_io, TAIL_CALL,
  POS(873, 7)
};

static FUNCTION_INFO i_lambda_103 = {
  t_lambda_103, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_attempt_exit[] = {
  2, // locals
  1, // parameters
  var_875_17_io,
  // exit_code_of(io).is_defined:
  var_exit_code_of, 1, var_875_17_io, 1, LOCAL(1),
  // is_defined:
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_exit_code_ofio_is_defined, lambda_107, IO_TAIL_CALL,
  POS(877, 5),
  POS(877, 22),
  POS(876, 3)
};

static FUNCTION_INFO i_func_attempt_exit = {
  t_func_attempt_exit, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_exit_code_ofio_is_defined[] = {
  1, // locals
  0, // parameters
  // resources_of(io)
  var_resources_of, 1, var_875_17_io, 1, LOCAL(1),
  // for_each resources_of(io)
  var_for_each, 3, LOCAL(1), lambda_104, lambda_105, IO_TAIL_CALL,
  POS(878, 16),
  POS(878, 7)
};

static FUNCTION_INFO i_lambda_exit_code_ofio_is_defined = {
  t_lambda_exit_code_ofio_is_defined, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_104[] = {
  1, // locals
  1, // parameters
  var_879_12_resource,
  // do_log_of(resource):
  var_do_log_of, 1, var_879_12_resource, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_do_log_ofresource, func_finalize_resource, IO_TAIL_CALL,
  POS(881, 13),
  POS(880, 11)
};

static FUNCTION_INFO i_lambda_104 = {
  t_lambda_104, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_do_log_ofresource[] = {
  2, // locals
  0, // parameters
  // name_of(resource))"
  var_name_of, 1, var_879_12_resource, 1, LOCAL(1),
  // "finalizing @(name_of(resource))"
  var_std__string, 2, str_finalizing, LOCAL(1), 1, LOCAL(2),
  // log &io 3 "finalizing @(name_of(resource))"
  var_log, 3, var_875_17_io, num_3, LOCAL(2), 1, var_875_17_io,
  // finalize_resource!
  func_finalize_resource, 0, IO_TAIL_CALL,
  POS(882, 39),
  POS(882, 25),
  POS(882, 15),
  POS(883, 15)
};

static FUNCTION_INFO i_lambda_do_log_ofresource = {
  t_lambda_do_log_ofresource, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_finalize_resource[] = {
  0, // locals
  0, // parameters
  // finalize! resource &io
  var_finalize, 2, var_879_12_resource, var_875_17_io, IO_CALL(1), var_875_17_io,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(887, 13),
  POS(888, 13)
};

static FUNCTION_INFO i_func_finalize_resource = {
  t_func_finalize_resource, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_105[] = {
  1, // locals
  0, // parameters
  // io.resources_of empty_list
  LET, -1, var_875_17_io, var_resources_of, var_empty_list, var_875_17_io,
  // is_empty:
  var_is_empty, 1, var_875_17_io, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_io_is_empty, lambda_106, IO_TAIL_CALL,
  POS(890, 12),
  POS(892, 16),
  POS(891, 11)
};

static FUNCTION_INFO i_lambda_105 = {
  t_lambda_105, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_io_is_empty[] = {
  1, // locals
  0, // parameters
  // exit_code_of(io)
  var_exit_code_of, 1, var_875_17_io, 1, LOCAL(1),
  // exit! exit_code_of(io)
  var_exit, 1, LOCAL(1), IO_TAIL_CALL,
  POS(893, 21),
  POS(893, 15)
};

static FUNCTION_INFO i_lambda_io_is_empty = {
  t_lambda_io_is_empty, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_106[] = {
  0, // locals
  0, // parameters
  // kill_child_processes! io
  func_kill_child_processes, 1, var_875_17_io, IO_TAIL_CALL,
  POS(895, 15)
};

static FUNCTION_INFO i_lambda_106 = {
  t_lambda_106, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_107[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_875_17_io, TAIL_CALL,
  POS(896, 7)
};

static FUNCTION_INFO i_lambda_107 = {
  t_lambda_107, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_kill_child_processes[] = {
  1, // locals
  1, // parameters
  var_898_25_io,
  // watched_pids_of(io)
  var_watched_pids_of, 1, var_898_25_io, 1, LOCAL(1),
  // for_each watched_pids_of(io)
  var_for_each, 3, LOCAL(1), lambda_108, lambda_109, IO_TAIL_CALL,
  POS(899, 12),
  POS(899, 3)
};

static FUNCTION_INFO i_func_kill_child_processes = {
  t_func_kill_child_processes, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_108[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 900_8_pid
  // kill! pid SIGKILL
  var_kill, 2, LOCAL(1), var_SIGKILL, IO_CALL(0),
  // next
  var_next, 0, TAIL_CALL,
  POS(901, 7),
  POS(902, 7),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_108 = {
  t_lambda_108, NULL, 2, 1,
  {"900_8_pid\000"}
};

static TAB_NUM t_lambda_109[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_898_25_io, TAIL_CALL,
  POS(903, 7)
};

static FUNCTION_INFO i_lambda_109 = {
  t_lambda_109, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__io___handle_events[] = {
  1, // locals
  2, // parameters
  var_908_32_io,
  LOCAL(1), // 908_35_events
  // $new_events empty_list
  LET, 1, var_empty_list, 1, var_909_4_new_events,
  // $handlers handlers_of(io)
  var_handlers_of, 1, var_908_32_io, 1, var_910_4_handlers,
  // for_each events
  var_for_each, 3, LOCAL(1), lambda_110, lambda_116, TAIL_CALL,
  POS(909, 3),
  POS(910, 3),
  POS(911, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__io___handle_events = {
  t_func_std_types__io___handle_events, NULL, 3, 1,
  {"908_35_events\000"}
};

static TAB_NUM t_lambda_110[] = {
  1, // locals
  1, // parameters
  var_912_8_event,
  // event $type $id $data
  var_912_8_event, 0, 3, var_913_14_type, var_913_20_id, var_913_24_data,
  // $id_handlers handlers(id)
  var_910_4_handlers, 1, var_913_20_id, 1, var_914_8_id_handlers,
  // is_undefined
  var_is_undefined, 1, var_914_8_id_handlers, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_keep_event, lambda_111, TAIL_CALL,
  POS(913, 7),
  POS(914, 7),
  POS(916, 21),
  POS(915, 7)
};

static FUNCTION_INFO i_lambda_110 = {
  t_lambda_110, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_111[] = {
  1, // locals
  0, // parameters
  // $handler id_handlers(type)
  var_914_8_id_handlers, 1, var_913_14_type, 1, var_919_12_handler,
  // is_undefined
  var_is_undefined, 1, var_919_12_handler, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_keep_event, lambda_112, TAIL_CALL,
  POS(919, 11),
  POS(921, 21),
  POS(920, 11)
};

static FUNCTION_INFO i_lambda_111 = {
  t_lambda_111, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_112[] = {
  2, // locals
  0, // parameters
  // $context get_context(io id)
  var_get_context, 2, var_908_32_io, var_913_20_id, 1, var_924_16_context,
  // is_a_tuple &handler &context
  var_is_a_tuple, 1, var_919_12_handler, 1, LOCAL(1),
  // update_if handler.is_a_tuple &handler &context
  var_update_if, 4, LOCAL(1), var_919_12_handler, var_924_16_context, lambda_113, 2, var_919_12_handler, var_924_16_context,
  // parameter_count_of(handler) == 3:
  var_parameter_count_of, 1, var_919_12_handler, 1, LOCAL(1),
  // parameter_count_of(handler) == 3:
  var_std__equal, 2, LOCAL(1), num_3, 1, LOCAL(2),
  // if !io $new_event
  var_if, 3, LOCAL(2), lambda_114, lambda_115, 2, var_908_32_io, var_927_23_new_event,
  // is_defined:
  var_is_defined, 1, var_927_23_new_event, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_new_event_is_defined, var_next, TAIL_CALL,
  POS(924, 15),
  POS(925, 33),
  POS(925, 15),
  POS(928, 17),
  POS(928, 17),
  POS(927, 15),
  POS(933, 27),
  POS(932, 15)
};

static FUNCTION_INFO i_lambda_112 = {
  t_lambda_112, NULL, 8, 0,
  {}
};

static TAB_NUM t_lambda_113[] = {
  2, // locals
  0, // parameters
  // first(handler) second(handler)
  var_first, 1, var_919_12_handler, 1, LOCAL(1),
  // second(handler)
  var_second, 1, var_919_12_handler, 1, LOCAL(2),
  //  first(handler) second(handler)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(926, 20),
  POS(926, 35),
  POS(926, 19)
};

static FUNCTION_INFO i_lambda_113 = {
  t_lambda_113, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_114[] = {
  0, // locals
  0, // parameters
  // handler io id data
  var_919_12_handler, 3, var_908_32_io, var_913_20_id, var_913_24_data, TAIL_CALL,
  POS(929, 19)
};

static FUNCTION_INFO i_lambda_114 = {
  t_lambda_114, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_115[] = {
  0, // locals
  0, // parameters
  // handler io id data context
  var_919_12_handler, 4, var_908_32_io, var_913_20_id, var_913_24_data, var_924_16_context, TAIL_CALL,
  POS(931, 19)
};

static FUNCTION_INFO i_lambda_115 = {
  t_lambda_115, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_2_new_event_is_defined[] = {
  1, // locals
  0, // parameters
  // is_a_list
  var_is_a_list, 1, var_927_23_new_event, 1, LOCAL(1),
  // update_if_not new_event.is_a_list
  var_update_if_not, 3, LOCAL(1), var_927_23_new_event, lambda_new_event, 1, var_927_23_new_event,
  // handle_events &io &new_event
  var_handle_events, 2, var_908_32_io, var_927_23_new_event, 2, var_908_32_io, var_927_23_new_event,
  // append &new_events new_event
  var_append, 2, var_909_4_new_events, var_927_23_new_event, 1, var_909_4_new_events,
  // next
  var_next, 0, TAIL_CALL,
  POS(934, 43),
  POS(934, 19),
  POS(936, 19),
  POS(937, 19),
  POS(938, 19)
};

static FUNCTION_INFO i_lambda_2_new_event_is_defined = {
  t_lambda_2_new_event_is_defined, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_new_event[] = {
  1, // locals
  0, // parameters
  // list(new_event)
  var_list, 1, var_927_23_new_event, 1, LOCAL(1),
  //  list(new_event)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(935, 35),
  POS(935, 34)
};

static FUNCTION_INFO i_lambda_new_event = {
  t_lambda_new_event, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_keep_event[] = {
  0, // locals
  0, // parameters
  // push &new_events event
  var_push, 2, var_909_4_new_events, var_912_8_event, 1, var_909_4_new_events,
  // next
  var_next, 0, TAIL_CALL,
  POS(942, 9),
  POS(943, 9)
};

static FUNCTION_INFO i_func_keep_event = {
  t_func_keep_event, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_116[] = {
  0, // locals
  0, // parameters
  //  io new_events
  LET, 2, var_908_32_io, var_909_4_new_events, TAIL_CALL,
  POS(944, 7)
};

static FUNCTION_INFO i_lambda_116 = {
  t_lambda_116, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__exit_on_error[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_946_23_valid_io,
  REST_PARAMETER, LOCAL(1), // 946_32_args
  // for_each args
  var_for_each, 3, LOCAL(1), lambda_117, var_pass, IO_TAIL_CALL,
  POS(947, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__exit_on_error = {
  t_func_std__exit_on_error, NULL, 1, 1,
  {"946_32_args\000"}
};

static TAB_NUM t_lambda_117[] = {
  1, // locals
  1, // parameters
  var_948_8_arg,
  // is_an_error:
  var_is_an_error, 1, var_948_8_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_arg_is_an_error, var_next, IO_TAIL_CALL,
  POS(950, 13),
  POS(949, 7)
};

static FUNCTION_INFO i_lambda_117 = {
  t_lambda_117, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_arg_is_an_error[] = {
  0, // locals
  0, // parameters
  // debug::dump 50 `arg
  var_debug__dump, 3, num_50, str_arg, var_948_8_arg, 0,
  // exit &valid_io EXIT_FAILURE arg
  var_exit, 3, var_946_23_valid_io, var_EXIT_FAILURE, var_948_8_arg, 1, var_946_23_valid_io,
  // loop: # fetch events until the program terminates
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(951, 11),
  POS(952, 11),
  POS(953, 11)
};

static FUNCTION_INFO i_lambda_arg_is_an_error = {
  t_lambda_arg_is_an_error, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // get_events! &valid_io $_events
  var_get_events, 1, var_946_23_valid_io, IO_CALL(2), var_946_23_valid_io, LOCAL(1),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(954, 13),
  POS(955, 13)
};

static FUNCTION_INFO i_lambda_loop = {
  t_lambda_loop, NULL, 2, 0,
  {}
};

static int tuple_245_1_arguments[] = {
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
  {FLT_TUPLE, 3, {.arguments = tuple_245_1_arguments}},
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
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___set_context}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___get_context}},
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
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_err_is_an_error}},
  {FLT_STRING_8, 7, {.str_8 = "ERROR: "}},
  {FLT_STRING_8, 10, {.str_8 = " - exiting"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_44}},
  {FLT_STRING_8, 7, {.str_8 = "exiting"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___is_empty}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_45}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_46}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_47}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__log_unhandled_event}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_48}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_49}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_50}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_51}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_52}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_53}},
  {FLT_POSITIVE_INT64, 0, {.value = 5}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_54}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_55}},
  {FLT_STRING_8, 16, {.str_8 = "unhandled event "}},
  {FLT_STRING_8, 3, {.str_8 = " - "}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___initialize}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___get_events}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_56}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_57}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_58}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_59}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_60}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_61}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_set_timeout}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_62}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_63}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_64}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_65}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_timeout}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_66}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_exit_codes_ofself}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_67}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_handle_start_jobs}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_68}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_new_event_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_new_event_is_a_list}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_69}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_70}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_handle_write_jobs}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_71}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_wait_for_events}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_72}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_73}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_74}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_75}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_SIGCHLD}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_76}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_77}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_78}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_watched_pids_ofselfpid}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_79}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_SIGWINCH}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_80}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_catched_signals_ofselfsignal}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_handle_write_requests}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_81}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_82}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_83}},
  {FLT_STRING_8, 4, {.str_8 = "\033[8;"}},
  {FLT_STRING_8, 1, {.str_8 = ";"}},
  {FLT_STRING_8, 1, {.str_8 = "t"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_84}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_check_file_descriptors}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_85}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_bytes_written_is_an_error}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_86}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_87}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_88}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_attempt_reads}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_89}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_90}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_91}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_92}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_does_listen}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_conn_is_an_error}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_93}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_do_read}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_94}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x100000}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_95}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_96}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_buf_is_an_error}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_do_close}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_97}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_buf_is_empty}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_do_close}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_98}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_max_length_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_99}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_100}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3_do_close}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_101}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_attempt_close_operations}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_102}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_write_jobs_ofiofd_is_undefined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_103}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_attempt_exit}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_exit_code_ofio_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_104}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_do_log_ofresource}},
  {FLT_STRING_8, 11, {.str_8 = "finalizing "}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_finalize_resource}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_105}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_io_is_empty}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_106}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_107}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_kill_child_processes}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_108}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_109}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io___handle_events}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_110}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_111}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_112}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_113}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_114}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_115}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_new_event_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_new_event}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_keep_event}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_116}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__exit_on_error}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_117}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_arg_is_an_error}},
  {FLT_POSITIVE_INT64, 0, {.value = 50}},
  {FLT_STRING_8, 3, {.str_8 = "arg"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_loop}}
};

static ATTRIBUTE_DEFINITION std_types__io__attributes[] = {
  {-var_current_time_of, -var_undefined},
  {-var_read_jobs_of, -var_empty_hash_table},
  {-var_write_jobs_of, -var_empty_hash_table},
  {-var_close_jobs_of, -var_empty_hash_set},
  {-var_start_jobs_of, -var_empty_list},
  {-var_timed_jobs_of, -var_empty_list},
  {-var_contexts_of, -var_empty_hash_table},
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
  {var_set_context, -func_std_types__io___set_context},
  {var_get_context, -func_std_types__io___get_context},
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
    "set_context\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "get_context\000std", NULL,
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
    "contexts_of\000", NULL,
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
    FOT_DERIVED, 0, 47,
    "io\000std_types", std_types__io__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "object\000std_types", NULL,
    {.position = POS(205, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "current_time_of\000", NULL,
    {.position = POS(207, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(207, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(208, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_set\000", NULL,
    {.position = POS(210, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(211, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_table\000", NULL,
    {.position = POS(214, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(217, 47)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "random_seed_of\000", NULL,
    {.position = POS(224, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "step_no_of\000", NULL,
    {.position = POS(225, 16)}
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
    {.position = POS(230, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "do_log_of\000", NULL,
    {.position = POS(231, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "enable_logging\000", NULL,
    {.position = POS(233, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(237, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "disable_logging\000", NULL,
    {.position = POS(239, 22)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "event\000std_types", NULL,
    {.const_idx = -tuple_245_1}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(245, 19)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_reading_from\000", NULL,
    {.position = POS(247, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "249_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "250_5_fd_or_list\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "251_5_do_close\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "252_5_max_length\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(255, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(255, 49)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(255, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(259, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(263, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(260, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(258, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_reading_from\000", NULL,
    {.position = POS(269, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "271_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "272_5_fd_or_list\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "print_to\000", NULL,
    {.position = POS(289, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(295, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(295, 37)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "write\000", NULL,
    {.position = POS(295, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "301_5_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "303_4_job\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(307, 10)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "cancel_write\000", NULL,
    {.position = POS(312, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "close\000", NULL,
    {.position = POS(321, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "join_process\000", NULL,
    {.position = POS(330, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "332_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "333_5_pid_or_list\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_injecting_window_change_events\000", NULL,
    {.position = POS(350, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_injecting_window_change_events\000", NULL,
    {.position = POS(356, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_catching_signals\000", NULL,
    {.position = POS(362, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "364_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "367_4_catched_signals\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_catching_signals\000", NULL,
    {.position = POS(374, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "376_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "379_4_catched_signals\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "set_timeout\000", NULL,
    {.position = POS(386, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "388_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "389_5_timeout\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_number\000", NULL,
    {.position = POS(391, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(391, 45)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(391, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "392_4_current_timeout\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(394, 37)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "initialize_logging\000std", NULL,
    {.const_idx = -func_std__initialize_logging}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "400_5_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "401_5_log_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "402_5_log_filename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open\000", NULL,
    {.position = POS(406, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDERR_FILENO\000", NULL,
    {.position = POS(407, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dup2\000", NULL,
    {.position = POS(407, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "411_15_stdout_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDOUT_FILENO\000", NULL,
    {.position = POS(411, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "fstat\000", NULL,
    {.position = POS(411, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "412_15_stderr_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inode_number_of\000", NULL,
    {.position = POS(415, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(415, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(415, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "device_of\000", NULL,
    {.position = POS(416, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "log\000", NULL,
    {.position = POS(434, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "436_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "437_5_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "438_5_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(442, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if_not\000", NULL,
    {.position = POS(442, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(443, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(443, 59)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split_into_lines\000", NULL,
    {.position = POS(444, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "445_8_prefix\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(445, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "446_8_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(447, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(450, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spaces\000", NULL,
    {.position = POS(450, 23)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "set_context\000", NULL,
    {.position = POS(456, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "get_context\000", NULL,
    {.position = POS(465, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "register_handlers\000", NULL,
    {.position = POS(472, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "474_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "475_5_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "478_4_handlers\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "default_value\000", NULL,
    {.position = POS(478, 13)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deregister_handlers\000", NULL,
    {.position = POS(488, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "490_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "491_5_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "492_5_types\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "494_4_handlers\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deregister_all_handlers\000", NULL,
    {.position = POS(507, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "register_resource\000", NULL,
    {.position = POS(515, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "run\000", NULL,
    {.position = POS(524, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "run_at\000", NULL,
    {.position = POS(533, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "535_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "536_5_time\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "exit\000", NULL,
    {.position = POS(544, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "546_5_io\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXIT_SUCCESS\000", NULL,
    {.position = POS(547, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "548_5_err\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(554, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_error_message_string\000", NULL,
    {.position = POS(555, 28)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(559, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "561_5_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(564, 7)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "log_unhandled_event\000std", NULL,
    {.const_idx = -func_std__log_unhandled_event}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "570_29_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "571_10_type\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "571_16_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_FAILED\000", NULL,
    {.position = POS(576, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_PENDING\000", NULL,
    {.position = POS(577, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_COMPLETED\000", NULL,
    {.position = POS(578, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(584, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(582, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "serialize\000", NULL,
    {.position = POS(587, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim_right\000", NULL,
    {.position = POS(587, 43)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "initialize\000", NULL,
    {.position = POS(589, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_time\000", NULL,
    {.position = POS(593, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "get_events\000", NULL,
    {.position = POS(596, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "598_5_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(604, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "611_4_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "612_4_want_to_write\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "614_18_t\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "615_4_start_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "617_4_first_job_time\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "618_4_remaining_timed_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "619_4_timeout\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "621_8_timed_job\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "622_40_time\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(648, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(648, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(652, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "665_41_new_event\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "apply\000", NULL,
    {.position = POS(665, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "693_8_read_descriptor_list\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(699, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "702_10_can_read\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "703_10_can_write\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pselect\000", NULL,
    {.position = POS(700, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "707_8_injected_into_stdin\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "708_8_write_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "710_12_signal\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGCHLD\000", NULL,
    {.position = POS(712, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "process_id\000", NULL,
    {.position = POS(715, 41)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "715_29_pid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "715_34_status\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "waitpid\000", NULL,
    {.position = POS(715, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(717, 44)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(718, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exitstatus\000", NULL,
    {.position = POS(720, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PROCESS_JOINED\000", NULL,
    {.position = POS(726, 48)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "typed_tuple\000", NULL,
    {.position = POS(725, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(713, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGWINCH\000", NULL,
    {.position = POS(732, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGNAL\000", NULL,
    {.position = POS(739, 50)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDIN_FILENO\000", NULL,
    {.position = POS(749, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_terminal_size\000", NULL,
    {.position = POS(751, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ\000", NULL,
    {.position = POS(754, 55)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "762_14_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "763_14_job\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "764_21_bytes_written\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "791_14_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(792, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "type_of\000", NULL,
    {.position = POS(795, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SOCKET\000", NULL,
    {.position = POS(795, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_listening\000", NULL,
    {.position = POS(796, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "799_32_conn\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "accept\000", NULL,
    {.position = POS(799, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ_FAILED\000", NULL,
    {.position = POS(803, 58)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CONNECT\000", NULL,
    {.position = POS(807, 58)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "814_42_do_close\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "814_52_max_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "820_24_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read\000", NULL,
    {.position = POS(820, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CLOSED\000", NULL,
    {.position = POS(834, 56)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(792, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "864_29_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "866_8_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "875_17_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "879_12_resource\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finalize\000", NULL,
    {.position = POS(887, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "898_25_io\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGKILL\000", NULL,
    {.position = POS(901, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "kill\000", NULL,
    {.position = POS(901, 7)}
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
    {.position = POS(908, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "908_32_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "909_4_new_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "910_4_handlers\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "912_8_event\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "913_14_type\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "913_20_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "913_24_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "914_8_id_handlers\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "919_12_handler\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "924_16_context\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_tuple\000", NULL,
    {.position = POS(925, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(926, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "second\000", NULL,
    {.position = POS(926, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(928, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "927_23_new_event\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(935, 35)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "exit_on_error\000std", NULL,
    {.const_idx = -func_std__exit_on_error}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "946_23_valid_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "948_8_arg\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dump\000debug", NULL,
    {.position = POS(951, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXIT_FAILURE\000", NULL,
    {.position = POS(952, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(957, 5)}
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
  228, // number of constants
  279, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
