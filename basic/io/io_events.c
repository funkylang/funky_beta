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
  tuple_593_0 = -16,
  func_std_types__io___start_reading_from = -17,
  func_std_types__io___stop_reading_from = -18,
  func_std_types__io___print_to = -19,
  func_std_types__io___write = -20,
  lambda_1 = -21,
  lambda_2 = -22,
  func_std_types__io___cancel_write = -23,
  func_std_types__io___close = -24,
  func_std_types__io___join_process = -25,
  func_std_types__io___start_injecting_window_change_events = -26,
  func_std_types__io___stop_injecting_window_change_events = -27,
  func_std_types__io___start_catching_signals = -28,
  lambda_3 = -29,
  lambda_4 = -30,
  func_std_types__io___stop_catching_signals = -31,
  lambda_5 = -32,
  lambda_6 = -33,
  func_std_types__io___set_timeout = -34,
  lambda_7 = -35,
  lambda_8 = -36,
  lambda_9 = -37,
  lambda_10 = -38,
  func_std__initialize_logging = -39,
  num_3 = -40,
  lambda_log_filename_is_defined = -41,
  str_w = -42,
  lambda_11 = -43,
  lambda_12 = -44,
  lambda_13 = -45,
  lambda_14 = -46,
  func_std_types__io___enable_logging = -47,
  num_1 = -48,
  func_std_types__io___disable_logging = -49,
  func_std_types__io___log = -50,
  lambda_15 = -51,
  lambda_16 = -52,
  chr_10 = -53,
  lambda_17 = -54,
  string_1 = -55,
  string_2 = -56,
  num_2 = -57,
  minus_num_1 = -58,
  lambda_18 = -59,
  lambda_19 = -60,
  lambda_20 = -61,
  func_std_types__io___register_handlers = -62,
  lambda_21 = -63,
  lambda_22 = -64,
  func_std_types__io___deregister_handlers = -65,
  lambda_23 = -66,
  lambda_24 = -67,
  lambda_25 = -68,
  lambda_26 = -69,
  func_std_types__io___deregister_all_handlers = -70,
  func_std_types__io___register_resource = -71,
  func_std_types__io___run = -72,
  func_std_types__io___run_at = -73,
  lambda_27 = -74,
  func_std_types__io___exit = -75,
  func_std_types__io___is_empty = -76,
  lambda_28 = -77,
  lambda_29 = -78,
  lambda_30 = -79,
  func_std__log_unhandled_event = -80,
  lambda_31 = -81,
  lambda_32 = -82,
  lambda_33 = -83,
  lambda_34 = -84,
  lambda_35 = -85,
  lambda_WRITE_PENDINGWRITE_COMPLETED = -86,
  num_4 = -87,
  lambda_36 = -88,
  lambda_37 = -89,
  str_unhandled_event = -90,
  string_3 = -91,
  func_std_types__io___initialize = -92,
  func_std_types__io___get_events = -93,
  lambda_38 = -94,
  lambda_39 = -95,
  lambda_40 = -96,
  lambda_41 = -97,
  lambda_42 = -98,
  lambda_43 = -99,
  func_set_timeout = -100,
  lambda_44 = -101,
  lambda_45 = -102,
  lambda_46 = -103,
  lambda_timeout = -104,
  lambda_47 = -105,
  lambda_exit_codes_ofself = -106,
  lambda_48 = -107,
  func_handle_start_jobs = -108,
  lambda_49 = -109,
  lambda_new_event_is_defined = -110,
  lambda_new_event_is_a_list = -111,
  lambda_50 = -112,
  func_handle_write_jobs = -113,
  lambda_51 = -114,
  func_wait_for_events = -115,
  lambda_52 = -116,
  lambda_53 = -117,
  lambda_54 = -118,
  lambda_CHILD_CHANGED_STATE = -119,
  lambda_watched_pids_ofselfpid = -120,
  lambda_55 = -121,
  lambda_WINDOW_CHANGED_SIZE = -122,
  lambda_56 = -123,
  lambda_catched_signals_ofselfsignal = -124,
  func_handle_write_requests = -125,
  lambda_57 = -126,
  lambda_58 = -127,
  lambda_59 = -128,
  string_4 = -129,
  string_5 = -130,
  str_t = -131,
  lambda_60 = -132,
  func_check_file_descriptors = -133,
  lambda_61 = -134,
  lambda_bytes_written_is_an_error = -135,
  lambda_62 = -136,
  lambda_63 = -137,
  lambda_64 = -138,
  func_attempt_reads = -139,
  lambda_65 = -140,
  lambda_66 = -141,
  lambda_67 = -142,
  lambda_68 = -143,
  lambda_does_listen = -144,
  lambda_conn_is_an_error = -145,
  lambda_69 = -146,
  func_do_read = -147,
  lambda_70 = -148,
  num_0x100000 = -149,
  lambda_71 = -150,
  lambda_72 = -151,
  lambda_buf_is_an_error = -152,
  lambda_do_close = -153,
  lambda_73 = -154,
  lambda_buf_is_empty = -155,
  lambda_2_do_close = -156,
  lambda_74 = -157,
  lambda_max_length_is_defined = -158,
  lambda_75 = -159,
  lambda_76 = -160,
  lambda_3_do_close = -161,
  lambda_77 = -162,
  func_attempt_close_operations = -163,
  lambda_78 = -164,
  lambda_write_jobs_ofiofd_is_undefined = -165,
  lambda_79 = -166,
  func_attempt_exit = -167,
  lambda_exit_code_ofio_is_defined = -168,
  lambda_80 = -169,
  lambda_do_log_ofresource = -170,
  str_finalizing = -171,
  func_finalize_resource = -172,
  lambda_81 = -173,
  lambda_io_is_empty = -174,
  lambda_82 = -175,
  lambda_83 = -176,
  func_std__handle_events = -177,
  lambda_84 = -178,
  lambda_85 = -179,
  lambda_86 = -180,
  lambda_2_new_event_is_defined = -181,
  lambda_new_event = -182,
  func_keep_event = -183,
  lambda_87 = -184
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
  var_empty_hash_table, // extern
  var_empty_hash_set, // extern
  var_empty_list, // extern
  var_empty_insert_order_table, // extern
  var_false, // extern
  var_undefined, // extern
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
  var_stop_reading_from, // extern polymorphic
  var_print_to, // extern polymorphic
  var_create_string, // extern
  var_to_utf8, // extern
  var_write, // extern polymorphic
  var_647_0_data, // dynamic
  var_649_1_job, // dynamic
  var_is_defined, // extern
  var_append, // extern
  var_if, // extern
  var_cancel_write, // extern polymorphic
  var_close, // extern polymorphic
  var_join_process, // extern polymorphic
  var_start_injecting_window_change_events, // extern polymorphic
  var_stop_injecting_window_change_events, // extern polymorphic
  var_start_catching_signals, // extern polymorphic
  var_738_0_self, // dynamic
  var_741_1_catched_signals, // dynamic
  var_next, // extern
  var_for_each, // extern
  var_stop_catching_signals, // extern polymorphic
  var_756_0_self, // dynamic
  var_759_1_catched_signals, // dynamic
  var_set_timeout, // extern polymorphic
  var_776_0_self, // dynamic
  var_777_0_timeout, // dynamic
  var_is_a_number, // extern
  var_current_time_of, // extern polymorphic
  var_std__plus, // extern
  var_update_if, // extern
  var_780_1_current_timeout, // dynamic
  var_is_undefined, // extern
  var_std__less, // extern
  var_std__or, // extern
  var_std__initialize_logging, // initialized
  var_788_0_io, // dynamic
  var_789_0_log_level, // dynamic
  var_790_0_log_filename, // dynamic
  var_open, // extern
  var_STDERR_FILENO, // extern
  var_dup2, // extern
  var_799_8_stdout_info, // dynamic
  var_STDOUT_FILENO, // extern
  var_fstat, // extern
  var_800_8_stderr_info, // dynamic
  var_inode_number_of, // extern
  var_std__equal, // extern
  var_std__not, // extern
  var_device_of, // extern
  var_log, // extern polymorphic
  var_842_0_self, // dynamic
  var_843_0_level, // dynamic
  var_844_0_message, // dynamic
  var_is_a_string, // extern
  var_update_if_not, // extern
  var_has_suffix, // extern
  var_push, // extern
  var_split_into_lines, // extern
  var_851_1_prefix, // dynamic
  var_std__string, // extern
  var_852_1_buf, // dynamic
  var_range, // extern
  var_length_of, // extern
  var_spaces, // extern
  var_register_handlers, // extern polymorphic
  var_870_0_self, // dynamic
  var_871_0_id, // dynamic
  var_874_1_handlers, // dynamic
  var_default_value, // extern
  var_deregister_handlers, // extern polymorphic
  var_892_0_self, // dynamic
  var_893_0_id, // dynamic
  var_894_0_types, // dynamic
  var_896_1_handlers, // dynamic
  var_deregister_all_handlers, // extern polymorphic
  var_register_resource, // extern polymorphic
  var_run, // extern polymorphic
  var_run_at, // extern polymorphic
  var_961_0_self, // dynamic
  var_962_0_time, // dynamic
  var_exit, // extern polymorphic
  var_is_empty, // extern polymorphic
  var_994_0_self, // dynamic
  var_std__and, // extern
  var_std__log_unhandled_event, // initialized
  var_1003_28_io, // dynamic
  var_1004_7_type, // dynamic
  var_1004_13_fd, // dynamic
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
  var_1047_0_self, // dynamic
  var_inc, // extern
  var_1060_1_events, // dynamic
  var_1061_1_want_to_write, // dynamic
  var_1063_15_t, // dynamic
  var_1064_1_start_jobs, // dynamic
  var_1066_1_first_job_time, // dynamic
  var_1067_1_remaining_timed_jobs, // dynamic
  var_1068_1_timeout, // dynamic
  var_1070_3_timed_job, // dynamic
  var_1071_33_time, // dynamic
  var_std__minus, // extern
  var_max, // extern
  var_any_of, // extern
  var_1111_32_new_event, // dynamic
  var_apply, // extern
  var_is_a_list, // extern
  var_1132_1_read_descriptor_list, // dynamic
  var_1140_1_can_read, // dynamic
  var_1141_1_can_write, // dynamic
  var_pselect, // extern
  var_1145_1_injected_into_stdin, // dynamic
  var_1146_1_write_jobs, // dynamic
  var_1148_3_signal, // dynamic
  var_CHILD_CHANGED_STATE, // extern
  var_1151_7_pid, // dynamic
  var_1151_12_status, // dynamic
  var_wait, // extern
  var_exitstatus, // extern
  var_PROCESS_JOINED, // extern
  var_new, // extern
  var_WINDOW_CHANGED_SIZE, // extern
  var_SIGNAL, // extern
  var_STDIN_FILENO, // extern
  var_get_terminal_size, // extern
  var_READ, // extern
  var_1190_3_fd, // dynamic
  var_1191_1_job, // dynamic
  var_1192_8_bytes_written, // dynamic
  var_is_an_error, // extern
  var_1218_3_fd, // dynamic
  var_not, // extern
  var_type_of, // extern
  var_SOCKET, // extern
  var_is_listening, // extern
  var_1226_9_conn, // dynamic
  var_accept, // extern
  var_READ_FAILED, // extern
  var_CONNECT, // extern
  var_1241_25_do_close, // dynamic
  var_1241_35_max_length, // dynamic
  var_1247_7_buf, // dynamic
  var_read, // extern
  var_CLOSED, // extern
  var_if_not, // extern
  var_1290_28_io, // dynamic
  var_1292_3_fd, // dynamic
  var_1301_16_io, // dynamic
  var_1305_3_resource, // dynamic
  var_finalize, // extern
  var_std__handle_events, // initialized
  var_1323_22_io, // dynamic
  var_1324_1_new_events, // dynamic
  var_1325_1_handlers, // dynamic
  var_1327_3_event, // dynamic
  var_1328_7_type, // dynamic
  var_1328_13_id, // dynamic
  var_1328_17_argument, // dynamic
  var_1329_1_id_handlers, // dynamic
  var_1334_1_handler, // dynamic
  var_1339_13_new_event, // dynamic
  var_list, // extern
  var_handle_events, // extern
  var__END
};


static TAB_NUM t_func_std_types__resource___enable_logging[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 577_0_self
  // .do_log_of true)
  LET, -1, LOCAL(2), var_do_log_of, var_true, LOCAL(1),
  // -> self(.do_log_of true)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(579, 11),
  POS(579, 3)
};

static TAB_NUM t_func_std_types__resource___disable_logging[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 589_0_self
  // .do_log_of false)
  LET, -1, LOCAL(2), var_do_log_of, var_false, LOCAL(1),
  // -> self(.do_log_of false)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(591, 11),
  POS(591, 3)
};

static TAB_NUM t_func_std_types__io___start_reading_from[] = {
  7, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(4), // 607_0_self
  MANDATORY_PARAMETER, LOCAL(5), // 608_0_fd
  var_true, LOCAL(6), // 609_0_do_close
  var_undefined, LOCAL(7), // 610_0_max_length
  // !self.read_jobs_of(fd) tuple(do_close max_length)
  var_tuple, 2, LOCAL(6), LOCAL(7), 1, LOCAL(2),
  // read_jobs_of(fd) tuple(do_close max_length)
  var_read_jobs_of, 1, LOCAL(4), 1, LOCAL(3),
  // read_jobs_of(fd) tuple(do_close max_length)
  LOCAL(3), 2, LOCAL(5), LOCAL(2), 1, LOCAL(3),
  // self.read_jobs_of(fd) tuple(do_close max_length)
  LET, -1, LOCAL(4), var_read_jobs_of, LOCAL(3), LOCAL(4),
  // -> self
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(612, 3),
  POS(612, 9),
  POS(612, 9),
  POS(612, 4),
  POS(613, 3)
};

static TAB_NUM t_func_std_types__io___stop_reading_from[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 623_0_self
  LOCAL(4), // 624_0_fd
  // read_jobs_of(fd) undefined
  var_read_jobs_of, 1, LOCAL(3), 1, LOCAL(2),
  // read_jobs_of(fd) undefined
  LOCAL(2), 2, LOCAL(4), var_undefined, 1, LOCAL(2),
  // self.read_jobs_of(fd) undefined
  LET, -1, LOCAL(3), var_read_jobs_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(626, 9),
  POS(626, 9),
  POS(626, 4),
  POS(627, 3)
};

static TAB_NUM t_func_std_types__io___print_to[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 631_0_self
  MANDATORY_PARAMETER, LOCAL(4), // 632_0_fd
  REST_PARAMETER, LOCAL(5), // 633_0_args
  // create_string(args).to_utf8
  var_create_string, 1, LOCAL(5), 1, LOCAL(1),
  // to_utf8
  var_to_utf8, 1, LOCAL(1), 1, LOCAL(2),
  // write self fd create_string(args).to_utf8
  var_write, 3, LOCAL(3), LOCAL(4), LOCAL(2), TAIL_CALL,
  POS(635, 17),
  POS(635, 37),
  POS(635, 3)
};

static TAB_NUM t_func_std_types__io___write[] = {
  4, // locals
  3, // parameters
  LOCAL(3), // 645_0_self
  LOCAL(4), // 646_0_fd
  var_647_0_data,
  // write_jobs_of(self)(fd)
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(1),
  // $job write_jobs_of(self)(fd)
  LOCAL(1), 1, LOCAL(4), 1, var_649_1_job,
  // is_defined
  var_is_defined, 1, var_649_1_job, 1, LOCAL(1),
  // !job
  var_if, 3, LOCAL(1), lambda_1, lambda_2, 1, var_649_1_job,
  // write_jobs_of(fd) job
  var_write_jobs_of, 1, LOCAL(3), 1, LOCAL(2),
  // write_jobs_of(fd) job
  LOCAL(2), 2, LOCAL(4), var_649_1_job, 1, LOCAL(2),
  // self.write_jobs_of(fd) job
  LET, -1, LOCAL(3), var_write_jobs_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(649, 8),
  POS(649, 3),
  POS(652, 11),
  POS(650, 3),
  POS(655, 9),
  POS(655, 9),
  POS(655, 4),
  POS(656, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // append(job data)
  var_append, 2, var_649_1_job, var_647_0_data, 1, LOCAL(1),
  //  append(job data)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(653, 10),
  POS(653, 9)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  data
  LET, 1, var_647_0_data, TAIL_CALL,
  POS(654, 9)
};

static TAB_NUM t_func_std_types__io___cancel_write[] = {
  5, // locals
  2, // parameters
  LOCAL(3), // 666_0_self
  LOCAL(4), // 667_0_fd
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
  POS(669, 19),
  POS(669, 3),
  POS(670, 9),
  POS(670, 9),
  POS(670, 4),
  POS(671, 3)
};

static TAB_NUM t_func_std_types__io___close[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 685_0_self
  LOCAL(4), // 686_0_fd
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
  POS(688, 3),
  POS(689, 9),
  POS(689, 9),
  POS(689, 4),
  POS(690, 3)
};

static TAB_NUM t_func_std_types__io___join_process[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 700_0_self
  LOCAL(4), // 701_0_pid
  // watched_pids_of(pid) true
  var_watched_pids_of, 1, LOCAL(3), 1, LOCAL(2),
  // watched_pids_of(pid) true
  LOCAL(2), 2, LOCAL(4), var_true, 1, LOCAL(2),
  // self.watched_pids_of(pid) true
  LET, -1, LOCAL(3), var_watched_pids_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(703, 9),
  POS(703, 9),
  POS(703, 4),
  POS(704, 3)
};

static TAB_NUM t_func_std_types__io___start_injecting_window_change_events[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 714_0_self
  // .do_inject_window_change_events true)
  LET, -1, LOCAL(2), var_do_inject_window_change_events, var_true, LOCAL(1),
  // -> self(.do_inject_window_change_events true)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(716, 11),
  POS(716, 3)
};

static TAB_NUM t_func_std_types__io___stop_injecting_window_change_events[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 726_0_self
  // .do_inject_window_change_events false)
  LET, -1, LOCAL(2), var_do_inject_window_change_events, var_false, LOCAL(1),
  // -> self(.do_inject_window_change_events false)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(728, 11),
  POS(728, 3)
};

static TAB_NUM t_func_std_types__io___start_catching_signals[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_738_0_self,
  REST_PARAMETER, LOCAL(1), // 739_0_signals
  // $catched_signals catched_signals_of(self)
  var_catched_signals_of, 1, var_738_0_self, 1, var_741_1_catched_signals,
  // for_each signals
  var_for_each, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(741, 3),
  POS(742, 3)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 743_3_signal
  // catched_signals(signal) true
  var_741_1_catched_signals, 2, LOCAL(1), var_true, 1, var_741_1_catched_signals,
  // next
  var_next, 0, TAIL_CALL,
  POS(744, 8),
  POS(745, 7)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // .catched_signals_of catched_signals)
  LET, -1, var_738_0_self, var_catched_signals_of, var_741_1_catched_signals, LOCAL(1),
  //  self(.catched_signals_of catched_signals)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(746, 13),
  POS(746, 7)
};

static TAB_NUM t_func_std_types__io___stop_catching_signals[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_756_0_self,
  REST_PARAMETER, LOCAL(1), // 757_0_signals
  // $catched_signals catched_signals_of(self)
  var_catched_signals_of, 1, var_756_0_self, 1, var_759_1_catched_signals,
  // for_each signals
  var_for_each, 3, LOCAL(1), lambda_5, lambda_6, TAIL_CALL,
  POS(759, 3),
  POS(760, 3)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 761_3_signal
  // catched_signals(signal) false
  var_759_1_catched_signals, 2, LOCAL(1), var_false, 1, var_759_1_catched_signals,
  // next
  var_next, 0, TAIL_CALL,
  POS(762, 8),
  POS(763, 7)
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // .catched_signals_of catched_signals)
  LET, -1, var_756_0_self, var_catched_signals_of, var_759_1_catched_signals, LOCAL(1),
  //  self(.catched_signals_of catched_signals)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(764, 13),
  POS(764, 7)
};

static TAB_NUM t_func_std_types__io___set_timeout[] = {
  2, // locals
  2, // parameters
  var_776_0_self,
  var_777_0_timeout,
  // is_a_number &timeout -> current_time_of(self)+timeout
  var_is_a_number, 1, var_777_0_timeout, 1, LOCAL(1),
  // update_if timeout.is_a_number &timeout -> current_time_of(self)+timeout
  var_update_if, 3, LOCAL(1), var_777_0_timeout, lambda_7, 1, var_777_0_timeout,
  // $current_timeout timeout_of(self)
  var_timeout_of, 1, var_776_0_self, 1, var_780_1_current_timeout,
  // is_undefined || timeout < current_timeout
  var_is_undefined, 1, var_780_1_current_timeout, 1, LOCAL(1),
  // is_undefined || timeout < current_timeout
  var_std__or, 2, LOCAL(1), lambda_8, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_9, lambda_10, TAIL_CALL,
  POS(779, 21),
  POS(779, 3),
  POS(780, 3),
  POS(782, 21),
  POS(782, 21),
  POS(781, 3)
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  0, // parameters
  // current_time_of(self)+timeout
  var_current_time_of, 1, var_776_0_self, 1, LOCAL(1),
  // current_time_of(self)+timeout
  var_std__plus, 2, LOCAL(1), var_777_0_timeout, 1, LOCAL(2),
  //  current_time_of(self)+timeout
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(779, 45),
  POS(779, 45),
  POS(779, 44)
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // timeout < current_timeout
  var_std__less, 2, var_777_0_timeout, var_780_1_current_timeout, 1, LOCAL(1),
  // timeout < current_timeout
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(782, 37),
  POS(782, 37)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // .timeout_of timeout)
  LET, -1, var_776_0_self, var_timeout_of, var_777_0_timeout, LOCAL(1),
  //  self(.timeout_of timeout)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(783, 13),
  POS(783, 7)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_776_0_self, TAIL_CALL,
  POS(784, 7)
};

static TAB_NUM t_func_std__initialize_logging[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_788_0_io,
  num_3, var_789_0_log_level,
  var_undefined, var_790_0_log_filename,
  // is_defined:
  var_is_defined, 1, var_790_0_log_filename, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_log_filename_is_defined, lambda_11, IO_TAIL_CALL,
  POS(793, 18),
  POS(792, 3)
};

static TAB_NUM t_lambda_log_filename_is_defined[] = {
  1, // locals
  0, // parameters
  // open! $log_fd log_filename "w+"
  var_open, 2, var_790_0_log_filename, str_w, IO_CALL(1), LOCAL(1),
  // dup2! log_fd STDERR_FILENO
  var_dup2, 2, LOCAL(1), var_STDERR_FILENO, IO_CALL(0),
  // close! log_fd
  var_close, 1, LOCAL(1), IO_CALL(0),
  // enable_logging io log_level
  var_enable_logging, 2, var_788_0_io, var_789_0_log_level, TAIL_CALL,
  POS(794, 7),
  POS(795, 7),
  POS(796, 7),
  POS(797, 7)
};

static TAB_NUM t_lambda_11[] = {
  5, // locals
  0, // parameters
  // fstat! $stdout_info STDOUT_FILENO
  var_fstat, 1, var_STDOUT_FILENO, IO_CALL(1), var_799_8_stdout_info,
  // fstat! $stderr_info STDERR_FILENO
  var_fstat, 1, var_STDERR_FILENO, IO_CALL(1), var_800_8_stderr_info,
  // inode_number_of(stderr_info) != inode_number_of(stdout_info)
  var_inode_number_of, 1, var_800_8_stderr_info, 1, LOCAL(1),
  // inode_number_of(stdout_info)
  var_inode_number_of, 1, var_799_8_stdout_info, 1, LOCAL(2),
  // inode_number_of(stderr_info) != inode_number_of(stdout_info)
  var_std__equal, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // inode_number_of(stderr_info) != inode_number_of(stdout_info)
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // 
  var_std__or, 2, LOCAL(4), lambda_12, 1, LOCAL(5),
  // if
  var_if, 3, LOCAL(5), lambda_13, lambda_14, TAIL_CALL,
  POS(799, 7),
  POS(800, 7),
  POS(803, 11),
  POS(803, 43),
  POS(803, 11),
  POS(803, 11),
  POS(802, 11),
  POS(801, 7)
};

static TAB_NUM t_lambda_12[] = {
  4, // locals
  0, // parameters
  // device_of(stderr_info) != device_of(stdout_info)
  var_device_of, 1, var_800_8_stderr_info, 1, LOCAL(1),
  // device_of(stdout_info)
  var_device_of, 1, var_799_8_stdout_info, 1, LOCAL(2),
  // device_of(stderr_info) != device_of(stdout_info)
  var_std__equal, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // device_of(stderr_info) != device_of(stdout_info)
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // device_of(stderr_info) != device_of(stdout_info)
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(804, 11),
  POS(804, 37),
  POS(804, 11),
  POS(804, 11),
  POS(804, 11)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  // enable_logging io log_level
  var_enable_logging, 2, var_788_0_io, var_789_0_log_level, TAIL_CALL,
  POS(806, 11)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_788_0_io, TAIL_CALL,
  POS(807, 11)
};

static TAB_NUM t_func_std_types__io___enable_logging[] = {
  3, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 817_0_self
  num_1, LOCAL(3), // 818_0_level
  // .log_level_of level)
  LET, -1, LOCAL(2), var_log_level_of, LOCAL(3), LOCAL(1),
  // -> self(.log_level_of level)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(820, 11),
  POS(820, 3)
};

static TAB_NUM t_func_std_types__io___disable_logging[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 830_0_self
  // .log_level_of 0)
  LET, -1, LOCAL(2), var_log_level_of, num_0, LOCAL(1),
  // -> self(.log_level_of 0)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(832, 11),
  POS(832, 3)
};

static TAB_NUM t_func_std_types__io___log[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_842_0_self,
  num_1, var_843_0_level,
  MANDATORY_PARAMETER, var_844_0_message,
  // log_level_of(self):
  var_log_level_of, 1, var_842_0_self, 1, LOCAL(1),
  // log_level_of(self):
  var_std__less, 2, LOCAL(1), var_843_0_level, 1, LOCAL(2),
  // log_level_of(self):
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_15, lambda_20, TAIL_CALL,
  POS(847, 14),
  POS(847, 14),
  POS(847, 14),
  POS(846, 3)
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // is_a_string &message -> message()
  var_is_a_string, 1, var_844_0_message, 1, LOCAL(1),
  // update_if_not message.is_a_string &message -> message()
  var_update_if_not, 3, LOCAL(1), var_844_0_message, lambda_16, 1, var_844_0_message,
  // message .has_suffix. '@nl;' &message: push message '@nl;'
  var_has_suffix, 2, var_844_0_message, chr_10, 1, LOCAL(1),
  // update_if_not message .has_suffix. '@nl;' &message: push message '@nl;'
  var_update_if_not, 3, LOCAL(1), var_844_0_message, lambda_17, 1, var_844_0_message,
  // $lines split_into_lines(message)
  var_split_into_lines, 1, var_844_0_message, 1, LOCAL(2),
  // $prefix "[@(level)] "
  var_std__string, 3, string_1, var_843_0_level, string_2, 1, var_851_1_prefix,
  // lines(1))
  LOCAL(2), 1, num_1, 1, LOCAL(1),
  // $buf append(prefix lines(1))
  var_append, 2, var_851_1_prefix, LOCAL(1), 1, var_852_1_buf,
  // range &lines 2 -1
  var_range, 3, LOCAL(2), num_2, minus_num_1, 1, LOCAL(2),
  // for_each lines
  var_for_each, 3, LOCAL(2), lambda_18, lambda_19, TAIL_CALL,
  POS(848, 29),
  POS(848, 7),
  POS(849, 21),
  POS(849, 7),
  POS(850, 7),
  POS(851, 7),
  POS(852, 26),
  POS(852, 7),
  POS(853, 7),
  POS(854, 7)
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // message()
  var_844_0_message, 0, 1, LOCAL(1),
  //  message()
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(848, 53),
  POS(848, 52)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // push message '@nl;'
  var_push, 2, var_844_0_message, chr_10, TAIL_CALL,
  POS(849, 59)
};

static TAB_NUM t_lambda_18[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 855_3_line
  // length_of(prefix)) line
  var_length_of, 1, var_851_1_prefix, 1, LOCAL(1),
  // spaces(length_of(prefix)) line
  var_spaces, 1, LOCAL(1), 1, LOCAL(2),
  // append &buf spaces(length_of(prefix)) line
  var_append, 3, var_852_1_buf, LOCAL(2), LOCAL(3), 1, var_852_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(856, 30),
  POS(856, 23),
  POS(856, 11),
  POS(857, 11)
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // to_utf8
  var_to_utf8, 1, var_852_1_buf, 1, LOCAL(1),
  // write self STDERR_FILENO buf.to_utf8
  var_write, 3, var_842_0_self, var_STDERR_FILENO, LOCAL(1), TAIL_CALL,
  POS(859, 40),
  POS(859, 11)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_842_0_self, TAIL_CALL,
  POS(860, 7)
};

static TAB_NUM t_func_std_types__io___register_handlers[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_870_0_self,
  MANDATORY_PARAMETER, var_871_0_id,
  REST_PARAMETER, LOCAL(3), // 872_0_type_handlers
  // handlers_of(self)(id) empty_hash_table)
  var_handlers_of, 1, var_870_0_self, 1, LOCAL(1),
  // handlers_of(self)(id) empty_hash_table)
  LOCAL(1), 1, var_871_0_id, 1, LOCAL(2),
  // $handlers default_value(handlers_of(self)(id) empty_hash_table)
  var_default_value, 2, LOCAL(2), var_empty_hash_table, 1, var_874_1_handlers,
  // for_each type_handlers
  var_for_each, 3, LOCAL(3), lambda_21, lambda_22, TAIL_CALL,
  POS(874, 27),
  POS(874, 27),
  POS(874, 3),
  POS(875, 3)
};

static TAB_NUM t_lambda_21[] = {
  3, // locals
  1, // parameters
  LOCAL(1), // 876_3_type_handler
  // type_handler $type $handler
  LOCAL(1), 0, 2, LOCAL(2), LOCAL(3),
  // handlers(type) handler
  var_874_1_handlers, 2, LOCAL(2), LOCAL(3), 1, var_874_1_handlers,
  // next
  var_next, 0, TAIL_CALL,
  POS(877, 7),
  POS(878, 8),
  POS(879, 7)
};

static TAB_NUM t_lambda_22[] = {
  2, // locals
  0, // parameters
  // handlers_of(id) handlers
  var_handlers_of, 1, var_870_0_self, 1, LOCAL(2),
  // handlers_of(id) handlers
  LOCAL(2), 2, var_871_0_id, var_874_1_handlers, 1, LOCAL(2),
  // self.handlers_of(id) handlers
  LET, -1, var_870_0_self, var_handlers_of, LOCAL(2), var_870_0_self,
  // -> self
  LET, 1, var_870_0_self, TAIL_CALL,
  POS(881, 13),
  POS(881, 13),
  POS(881, 8),
  POS(882, 7)
};

static TAB_NUM t_func_std_types__io___deregister_handlers[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_892_0_self,
  MANDATORY_PARAMETER, var_893_0_id,
  REST_PARAMETER, var_894_0_types,
  // handlers_of(self)(id)
  var_handlers_of, 1, var_892_0_self, 1, LOCAL(1),
  // $handlers handlers_of(self)(id)
  LOCAL(1), 1, var_893_0_id, 1, var_896_1_handlers,
  // is_undefined
  var_is_undefined, 1, var_896_1_handlers, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_23, lambda_24, TAIL_CALL,
  POS(896, 13),
  POS(896, 3),
  POS(898, 14),
  POS(897, 3)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_892_0_self, TAIL_CALL,
  POS(899, 7)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  // for_each types
  var_for_each, 3, var_894_0_types, lambda_25, lambda_26, TAIL_CALL,
  POS(901, 7)
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 902_3_type
  // handlers(type) undefined
  var_896_1_handlers, 2, LOCAL(1), var_undefined, 1, var_896_1_handlers,
  // next
  var_next, 0, TAIL_CALL,
  POS(903, 12),
  POS(904, 11)
};

static TAB_NUM t_lambda_26[] = {
  2, // locals
  0, // parameters
  // handlers_of(id) handlers
  var_handlers_of, 1, var_892_0_self, 1, LOCAL(2),
  // handlers_of(id) handlers
  LOCAL(2), 2, var_893_0_id, var_896_1_handlers, 1, LOCAL(2),
  // self.handlers_of(id) handlers
  LET, -1, var_892_0_self, var_handlers_of, LOCAL(2), var_892_0_self,
  // -> self
  LET, 1, var_892_0_self, TAIL_CALL,
  POS(906, 17),
  POS(906, 17),
  POS(906, 12),
  POS(907, 11)
};

static TAB_NUM t_func_std_types__io___deregister_all_handlers[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 917_0_self
  LOCAL(4), // 918_0_id
  // handlers_of(id) empty_hash_table
  var_handlers_of, 1, LOCAL(3), 1, LOCAL(2),
  // handlers_of(id) empty_hash_table
  LOCAL(2), 2, LOCAL(4), var_empty_hash_table, 1, LOCAL(2),
  // self.handlers_of(id) empty_hash_table
  LET, -1, LOCAL(3), var_handlers_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(920, 9),
  POS(920, 9),
  POS(920, 4),
  POS(921, 3)
};

static TAB_NUM t_func_std_types__io___register_resource[] = {
  5, // locals
  3, // parameters
  LOCAL(3), // 931_0_self
  LOCAL(4), // 932_0_key
  LOCAL(5), // 933_0_resource
  // resources_of(key) resource
  var_resources_of, 1, LOCAL(3), 1, LOCAL(2),
  // resources_of(key) resource
  LOCAL(2), 2, LOCAL(4), LOCAL(5), 1, LOCAL(2),
  // self.resources_of(key) resource
  LET, -1, LOCAL(3), var_resources_of, LOCAL(2), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(935, 9),
  POS(935, 9),
  POS(935, 4),
  POS(936, 3)
};

static TAB_NUM t_func_std_types__io___run[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 946_0_self
  MANDATORY_PARAMETER, LOCAL(4), // 947_0_command
  REST_PARAMETER, LOCAL(5), // 948_0_arguments
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
  POS(950, 14),
  POS(950, 28),
  POS(950, 3),
  POS(950, 9),
  POS(951, 3)
};

static TAB_NUM t_func_std_types__io___run_at[] = {
  4, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_961_0_self,
  MANDATORY_PARAMETER, var_962_0_time,
  MANDATORY_PARAMETER, LOCAL(3), // 963_0_command
  REST_PARAMETER, LOCAL(4), // 964_0_arguments
  // is_a_number &time -> current_time_of(self)+time
  var_is_a_number, 1, var_962_0_time, 1, LOCAL(1),
  // update_if time.is_a_number &time -> current_time_of(self)+time
  var_update_if, 3, LOCAL(1), var_962_0_time, lambda_27, 1, var_962_0_time,
  // timed_jobs_of tuple(command arguments time)
  var_timed_jobs_of, 1, var_961_0_self, 1, LOCAL(1),
  // tuple(command arguments time)
  var_tuple, 3, LOCAL(3), LOCAL(4), var_962_0_time, 1, LOCAL(2),
  // push &self.timed_jobs_of tuple(command arguments time)
  var_push, 2, LOCAL(1), LOCAL(2), 1, LOCAL(1),
  // self.timed_jobs_of tuple(command arguments time)
  LET, -1, var_961_0_self, var_timed_jobs_of, LOCAL(1), var_961_0_self,
  // -> self
  LET, 1, var_961_0_self, TAIL_CALL,
  POS(966, 18),
  POS(966, 3),
  POS(967, 14),
  POS(967, 28),
  POS(967, 3),
  POS(967, 9),
  POS(968, 3)
};

static TAB_NUM t_lambda_27[] = {
  2, // locals
  0, // parameters
  // current_time_of(self)+time
  var_current_time_of, 1, var_961_0_self, 1, LOCAL(1),
  // current_time_of(self)+time
  var_std__plus, 2, LOCAL(1), var_962_0_time, 1, LOCAL(2),
  //  current_time_of(self)+time
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(966, 39),
  POS(966, 39),
  POS(966, 38)
};

static TAB_NUM t_func_std_types__io___exit[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 978_0_self
  LOCAL(3), // 979_0_exit_code
  // self
  LET, -2, LOCAL(2), var_exit_code_of, LOCAL(3), var_read_jobs_of, var_empty_hash_table, LOCAL(1),
  // ->
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(982, 5),
  POS(981, 3)
};

static TAB_NUM t_func_std_types__io___is_empty[] = {
  3, // locals
  1, // parameters
  var_994_0_self,
  // read_jobs_of(self).is_empty
  var_read_jobs_of, 1, var_994_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_28, 1, LOCAL(3),
  // ->
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(998, 7),
  POS(998, 26),
  POS(997, 7),
  POS(996, 3)
};

static TAB_NUM t_lambda_28[] = {
  3, // locals
  0, // parameters
  // write_jobs_of(self).is_empty
  var_write_jobs_of, 1, var_994_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_29, 1, LOCAL(3),
  // write_jobs_of(self).is_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(999, 7),
  POS(999, 27),
  POS(997, 7),
  POS(999, 7)
};

static TAB_NUM t_lambda_29[] = {
  3, // locals
  0, // parameters
  // close_jobs_of(self).is_empty
  var_close_jobs_of, 1, var_994_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_30, 1, LOCAL(3),
  // close_jobs_of(self).is_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1000, 7),
  POS(1000, 27),
  POS(997, 7),
  POS(1000, 7)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(self).is_empty
  var_watched_pids_of, 1, var_994_0_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // watched_pids_of(self).is_empty
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1001, 7),
  POS(1001, 29),
  POS(1001, 7)
};

static TAB_NUM t_func_std__log_unhandled_event[] = {
  4, // locals
  2, // parameters
  var_1003_28_io,
  LOCAL(4), // 1003_31_event
  // event $type $fd $_argument
  LOCAL(4), 0, 3, var_1004_7_type, var_1004_13_fd, LOCAL(1),
  // type == WRITE_FAILED
  var_std__equal, 2, var_1004_7_type, var_WRITE_FAILED, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_31, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_33, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_34, lambda_35, TAIL_CALL,
  POS(1004, 3),
  POS(1008, 9),
  POS(1007, 9),
  POS(1006, 7),
  POS(1005, 3)
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  0, // parameters
  // type == WRITE_PENDING
  var_std__equal, 2, var_1004_7_type, var_WRITE_PENDING, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_32, 1, LOCAL(2),
  // type == WRITE_PENDING
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1009, 9),
  POS(1007, 9),
  POS(1009, 9)
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // type == WRITE_COMPLETED
  var_std__equal, 2, var_1004_7_type, var_WRITE_COMPLETED, 1, LOCAL(1),
  // type == WRITE_COMPLETED
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1010, 9),
  POS(1010, 9)
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // fd == STDERR_FILENO
  var_std__equal, 2, var_1004_13_fd, var_STDERR_FILENO, 1, LOCAL(1),
  // fd == STDERR_FILENO
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1011, 7),
  POS(1011, 7)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  //  io # prevent recursive logging
  LET, 1, var_1003_28_io, TAIL_CALL,
  POS(1012, 7)
};

static TAB_NUM t_lambda_35[] = {
  2, // locals
  0, // parameters
  // WRITE_PENDING,WRITE_COMPLETED -> 4
  var_std__sequence, 2, var_WRITE_PENDING, var_WRITE_COMPLETED, 1, LOCAL(1),
  // $log_level
  var_case, 4, var_1004_7_type, LOCAL(1), lambda_WRITE_PENDINGWRITE_COMPLETED, lambda_36, 1, LOCAL(2),
  // log io log_level -> "
  var_log, 3, var_1003_28_io, LOCAL(2), lambda_37, TAIL_CALL,
  POS(1017, 11),
  POS(1014, 7),
  POS(1019, 7)
};

static TAB_NUM t_lambda_WRITE_PENDINGWRITE_COMPLETED[] = {
  0, // locals
  0, // parameters
  //  4
  LET, 1, num_4, TAIL_CALL,
  POS(1017, 43)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  2
  LET, 1, num_2, TAIL_CALL,
  POS(1018, 13)
};

static TAB_NUM t_lambda_37[] = {
  4, // locals
  0, // parameters
  // serialize(type).trim_right) - @(serialize(fd))@
  var_serialize, 1, var_1004_7_type, 1, LOCAL(1),
  // trim_right) - @(serialize(fd))@
  var_trim_right, 1, LOCAL(1), 1, LOCAL(2),
  // serialize(fd))@
  var_serialize, 1, var_1004_13_fd, 1, LOCAL(3),
  // "
  var_std__string, 4, str_unhandled_event, LOCAL(2), string_3, LOCAL(3), 1, LOCAL(4),
  //  "
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(1020, 27),
  POS(1020, 43),
  POS(1020, 59),
  POS(1019, 27),
  POS(1019, 26)
};

static TAB_NUM t_func_std_types__io___initialize[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 1032_0_self
  // current_time! $t
  var_current_time, 0, IO_CALL(1), LOCAL(3),
  // .current_time_of t)
  LET, -1, LOCAL(2), var_current_time_of, LOCAL(3), LOCAL(1),
  // -> self(.current_time_of t)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1034, 3),
  POS(1035, 11),
  POS(1035, 3)
};

static TAB_NUM t_func_std_types__io___get_events[] = {
  1, // locals
  1, // parameters
  var_1047_0_self,
  // step_no_of
  var_step_no_of, 1, var_1047_0_self, 1, LOCAL(1),
  // inc &self.step_no_of
  var_inc, 1, LOCAL(1), 1, LOCAL(1),
  // self.step_no_of
  LET, -1, var_1047_0_self, var_step_no_of, LOCAL(1), var_1047_0_self,
  // attempt_close_operations! &self
  func_attempt_close_operations, 1, var_1047_0_self, IO_CALL(1), var_1047_0_self,
  // attempt_exit! &self
  func_attempt_exit, 1, var_1047_0_self, IO_CALL(1), var_1047_0_self,
  // $events empty_list
  LET, 1, var_empty_list, 1, var_1060_1_events,
  // $want_to_write empty_list
  LET, 1, var_empty_list, 1, var_1061_1_want_to_write,
  // current_time! $t
  var_current_time, 0, IO_CALL(1), var_1063_15_t,
  // $start_jobs start_jobs_of(self)
  var_start_jobs_of, 1, var_1047_0_self, 1, var_1064_1_start_jobs,
  // self.start_jobs_of empty_list
  LET, -1, var_1047_0_self, var_start_jobs_of, var_empty_list, var_1047_0_self,
  // $first_job_time undefined
  LET, 1, var_undefined, 1, var_1066_1_first_job_time,
  // $remaining_timed_jobs empty_list
  LET, 1, var_empty_list, 1, var_1067_1_remaining_timed_jobs,
  // $timeout undefined
  LET, 1, var_undefined, 1, var_1068_1_timeout,
  // timed_jobs_of(self)
  var_timed_jobs_of, 1, var_1047_0_self, 1, LOCAL(1),
  // for_each timed_jobs_of(self)
  var_for_each, 3, LOCAL(1), lambda_38, lambda_43, IO_TAIL_CALL,
  POS(1053, 13),
  POS(1053, 3),
  POS(1053, 8),
  POS(1055, 3),
  POS(1057, 3),
  POS(1060, 3),
  POS(1061, 3),
  POS(1063, 3),
  POS(1064, 3),
  POS(1065, 4),
  POS(1066, 3),
  POS(1067, 3),
  POS(1068, 3),
  POS(1069, 12),
  POS(1069, 3)
};

static TAB_NUM t_lambda_38[] = {
  2, // locals
  1, // parameters
  var_1070_3_timed_job,
  // timed_job $_command $_arguments $time
  var_1070_3_timed_job, 0, 3, LOCAL(1), LOCAL(1), var_1071_33_time,
  // t:
  var_std__less, 2, var_1063_15_t, var_1071_33_time, 1, LOCAL(1),
  // t:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_39, lambda_40, IO_TAIL_CALL,
  POS(1071, 7),
  POS(1073, 17),
  POS(1073, 17),
  POS(1072, 7)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  // push &start_jobs timed_job
  var_push, 2, var_1064_1_start_jobs, var_1070_3_timed_job, 1, var_1064_1_start_jobs,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1074, 11),
  POS(1075, 11)
};

static TAB_NUM t_lambda_40[] = {
  2, // locals
  0, // parameters
  // push &remaining_timed_jobs timed_job
  var_push, 2, var_1067_1_remaining_timed_jobs, var_1070_3_timed_job, 1, var_1067_1_remaining_timed_jobs,
  // is_undefined || time < first_job_time:
  var_is_undefined, 1, var_1066_1_first_job_time, 1, LOCAL(1),
  // is_undefined || time < first_job_time:
  var_std__or, 2, LOCAL(1), lambda_41, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_42, var_next, IO_TAIL_CALL,
  POS(1077, 11),
  POS(1079, 28),
  POS(1079, 28),
  POS(1078, 11)
};

static TAB_NUM t_lambda_41[] = {
  1, // locals
  0, // parameters
  // time < first_job_time:
  var_std__less, 2, var_1071_33_time, var_1066_1_first_job_time, 1, LOCAL(1),
  // time < first_job_time:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1079, 44),
  POS(1079, 44)
};

static TAB_NUM t_lambda_42[] = {
  0, // locals
  0, // parameters
  // !first_job_time time
  LET, 1, var_1071_33_time, 1, var_1066_1_first_job_time,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1080, 15),
  POS(1081, 15)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  // self.timed_jobs_of remaining_timed_jobs
  LET, -1, var_1047_0_self, var_timed_jobs_of, var_1067_1_remaining_timed_jobs, var_1047_0_self,
  // set_timeout!
  func_set_timeout, 0, IO_TAIL_CALL,
  POS(1084, 8),
  POS(1085, 7)
};

static TAB_NUM t_func_set_timeout[] = {
  2, // locals
  0, // parameters
  // !timeout timeout_of(self)
  var_timeout_of, 1, var_1047_0_self, 1, var_1068_1_timeout,
  // is_defined || first_job_time.is_defined:
  var_is_defined, 1, var_1068_1_timeout, 1, LOCAL(1),
  // is_defined || first_job_time.is_defined:
  var_std__or, 2, LOCAL(1), lambda_44, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_45, func_handle_start_jobs, IO_TAIL_CALL,
  POS(1088, 5),
  POS(1090, 15),
  POS(1090, 15),
  POS(1089, 5)
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_1066_1_first_job_time, 1, LOCAL(1),
  // first_job_time.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1090, 44),
  POS(1090, 29)
};

static TAB_NUM t_lambda_45[] = {
  2, // locals
  0, // parameters
  // is_undefined || first_job_time < timeout
  var_is_undefined, 1, var_1068_1_timeout, 1, LOCAL(1),
  // is_undefined || first_job_time < timeout
  var_std__or, 2, LOCAL(1), lambda_46, 1, LOCAL(2),
  // update_if timeout.is_undefined || first_job_time < timeout
  var_update_if, 3, LOCAL(2), var_1068_1_timeout, lambda_timeout, 1, var_1068_1_timeout,
  // self.timeout_of undefined
  LET, -1, var_1047_0_self, var_timeout_of, var_undefined, var_1047_0_self,
  // timeout-t 0)
  var_std__minus, 2, var_1068_1_timeout, var_1063_15_t, 1, LOCAL(1),
  // !timeout max(timeout-t 0)
  var_max, 2, LOCAL(1), num_0, 1, var_1068_1_timeout,
  // 0
  var_std__less, 2, num_0, var_1068_1_timeout, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_47, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_48, func_handle_start_jobs, IO_TAIL_CALL,
  POS(1091, 27),
  POS(1091, 27),
  POS(1091, 9),
  POS(1093, 10),
  POS(1094, 22),
  POS(1094, 9),
  POS(1097, 23),
  POS(1096, 13),
  POS(1095, 9)
};

static TAB_NUM t_lambda_46[] = {
  1, // locals
  0, // parameters
  // first_job_time < timeout
  var_std__less, 2, var_1066_1_first_job_time, var_1068_1_timeout, 1, LOCAL(1),
  // first_job_time < timeout
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1091, 43),
  POS(1091, 43)
};

static TAB_NUM t_lambda_timeout[] = {
  0, // locals
  0, // parameters
  //  first_job_time
  LET, 1, var_1066_1_first_job_time, TAIL_CALL,
  POS(1092, 22)
};

static TAB_NUM t_lambda_47[] = {
  2, // locals
  0, // parameters
  // exit_codes_of(self): (pid _exit_code)
  var_exit_codes_of, 1, var_1047_0_self, 1, LOCAL(1),
  // any_of
  var_any_of, 2, LOCAL(1), lambda_exit_codes_ofself, 1, LOCAL(2),
  // any_of
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1099, 15),
  POS(1098, 13),
  POS(1098, 13)
};

static TAB_NUM t_lambda_exit_codes_ofself[] = {
  3, // locals
  2, // parameters
  LOCAL(3), // 1099_22_pid
  LOCAL(1),
  // watched_pids_of(self)(pid)
  var_watched_pids_of, 1, var_1047_0_self, 1, LOCAL(1),
  // watched_pids_of(self)(pid)
  LOCAL(1), 1, LOCAL(3), 1, LOCAL(2),
  // -> watched_pids_of(self)(pid)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1100, 20),
  POS(1100, 20),
  POS(1100, 17)
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  // !timeout 0
  LET, 1, num_0, 1, var_1068_1_timeout,
  // handle_start_jobs!
  func_handle_start_jobs, 0, IO_TAIL_CALL,
  POS(1102, 13),
  POS(1103, 13)
};

static TAB_NUM t_func_handle_start_jobs[] = {
  0, // locals
  0, // parameters
  // for_each start_jobs
  var_for_each, 3, var_1064_1_start_jobs, lambda_49, func_handle_write_jobs, IO_TAIL_CALL,
  POS(1108, 5)
};

static TAB_NUM t_lambda_49[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 1109_3_job
  // job $command $arguments
  LOCAL(2), 0, 2, LOCAL(3), LOCAL(4),
  // apply! command &self arguments $new_event
  var_apply, 3, LOCAL(3), var_1047_0_self, LOCAL(4), IO_CALL(2), var_1047_0_self, var_1111_32_new_event,
  // is_defined:
  var_is_defined, 1, var_1111_32_new_event, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_new_event_is_defined, var_next, IO_TAIL_CALL,
  POS(1110, 9),
  POS(1111, 9),
  POS(1113, 21),
  POS(1112, 9)
};

static TAB_NUM t_lambda_new_event_is_defined[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_1111_32_new_event, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_new_event_is_a_list, lambda_50, IO_TAIL_CALL,
  POS(1115, 25),
  POS(1114, 13)
};

static TAB_NUM t_lambda_new_event_is_a_list[] = {
  0, // locals
  0, // parameters
  // append &events new_event
  var_append, 2, var_1060_1_events, var_1111_32_new_event, 1, var_1060_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1116, 17),
  POS(1117, 17)
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  // push &events new_event
  var_push, 2, var_1060_1_events, var_1111_32_new_event, 1, var_1060_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1119, 17),
  POS(1120, 17)
};

static TAB_NUM t_func_handle_write_jobs[] = {
  1, // locals
  0, // parameters
  // write_jobs_of(self)
  var_write_jobs_of, 1, var_1047_0_self, 1, LOCAL(1),
  // for_each write_jobs_of(self)
  var_for_each, 3, LOCAL(1), lambda_51, func_wait_for_events, IO_TAIL_CALL,
  POS(1125, 14),
  POS(1125, 5)
};

static TAB_NUM t_lambda_51[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 1126_3_fd
  LOCAL(1),
  // push &want_to_write fd
  var_push, 2, var_1061_1_want_to_write, LOCAL(2), 1, var_1061_1_want_to_write,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1127, 9),
  POS(1128, 9)
};

static TAB_NUM t_func_wait_for_events[] = {
  2, // locals
  0, // parameters
  // $read_descriptor_list empty_list
  LET, 1, var_empty_list, 1, var_1132_1_read_descriptor_list,
  // read_jobs_of(self)
  var_read_jobs_of, 1, var_1047_0_self, 1, LOCAL(1),
  // for_each !read_descriptor_list read_jobs_of(self)
  var_for_each, 3, LOCAL(1), lambda_52, lambda_53, IO_CALL(1), var_1132_1_read_descriptor_list,
  // pselect!
  var_pselect, 4, var_1132_1_read_descriptor_list, var_1061_1_want_to_write, var_empty_list, var_1068_1_timeout, IO_CALL(4), LOCAL(2), var_1140_1_can_read, var_1141_1_can_write, LOCAL(1),
  // current_time! !self.current_time_of
  var_current_time, 0, IO_CALL(1), LOCAL(1),
  // self.current_time_of
  LET, -1, var_1047_0_self, var_current_time_of, LOCAL(1), var_1047_0_self,
  // $injected_into_stdin false
  LET, 1, var_false, 1, var_1145_1_injected_into_stdin,
  // $write_jobs write_jobs_of(self)
  var_write_jobs_of, 1, var_1047_0_self, 1, var_1146_1_write_jobs,
  // for_each signals
  var_for_each, 3, LOCAL(2), lambda_54, func_handle_write_requests, IO_TAIL_CALL,
  POS(1132, 7),
  POS(1133, 38),
  POS(1133, 7),
  POS(1138, 7),
  POS(1144, 7),
  POS(1144, 22),
  POS(1145, 7),
  POS(1146, 7),
  POS(1147, 7)
};

static TAB_NUM t_lambda_52[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 1134_3_fd
  LOCAL(1),
  // push &read_descriptor_list fd
  var_push, 2, var_1132_1_read_descriptor_list, LOCAL(2), 1, var_1132_1_read_descriptor_list,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1135, 11),
  POS(1136, 11)
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  //  read_descriptor_list
  LET, 1, var_1132_1_read_descriptor_list, TAIL_CALL,
  POS(1137, 11)
};

static TAB_NUM t_lambda_54[] = {
  0, // locals
  1, // parameters
  var_1148_3_signal,
  // case signal
  var_case, 6, var_1148_3_signal, var_CHILD_CHANGED_STATE, lambda_CHILD_CHANGED_STATE, var_WINDOW_CHANGED_SIZE, lambda_WINDOW_CHANGED_SIZE, lambda_56, IO_TAIL_CALL,
  POS(1149, 11)
};

static TAB_NUM t_lambda_CHILD_CHANGED_STATE[] = {
  2, // locals
  0, // parameters
  // wait! $pid $status
  var_wait, 0, IO_CALL(2), var_1151_7_pid, var_1151_12_status,
  // exitstatus &status
  var_exitstatus, 1, var_1151_12_status, 1, var_1151_12_status,
  // watched_pids_of(self)(pid):
  var_watched_pids_of, 1, var_1047_0_self, 1, LOCAL(1),
  // watched_pids_of(self)(pid):
  LOCAL(1), 1, var_1151_7_pid, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_watched_pids_ofselfpid, lambda_55, IO_TAIL_CALL,
  POS(1151, 15),
  POS(1152, 15),
  POS(1154, 17),
  POS(1154, 17),
  POS(1153, 15)
};

static TAB_NUM t_lambda_watched_pids_ofselfpid[] = {
  2, // locals
  0, // parameters
  // watched_pids_of(pid) false
  var_watched_pids_of, 1, var_1047_0_self, 1, LOCAL(2),
  // watched_pids_of(pid) false
  LOCAL(2), 2, var_1151_7_pid, var_false, 1, LOCAL(2),
  // self.watched_pids_of(pid) false
  LET, -1, var_1047_0_self, var_watched_pids_of, LOCAL(2), var_1047_0_self,
  // new(std_types::event PROCESS_JOINED pid status)
  var_new, 4, var_std_types__event, var_PROCESS_JOINED, var_1151_7_pid, var_1151_12_status, 1, LOCAL(1),
  // push &events new(std_types::event PROCESS_JOINED pid status)
  var_push, 2, var_1060_1_events, LOCAL(1), 1, var_1060_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1155, 25),
  POS(1155, 25),
  POS(1155, 20),
  POS(1156, 32),
  POS(1156, 19),
  POS(1157, 19)
};

static TAB_NUM t_lambda_55[] = {
  2, // locals
  0, // parameters
  // exit_codes_of(pid) status
  var_exit_codes_of, 1, var_1047_0_self, 1, LOCAL(2),
  // exit_codes_of(pid) status
  LOCAL(2), 2, var_1151_7_pid, var_1151_12_status, 1, LOCAL(2),
  // self.exit_codes_of(pid) status
  LET, -1, var_1047_0_self, var_exit_codes_of, LOCAL(2), var_1047_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1159, 25),
  POS(1159, 25),
  POS(1159, 20),
  POS(1160, 19)
};

static TAB_NUM t_lambda_WINDOW_CHANGED_SIZE[] = {
  0, // locals
  0, // parameters
  // self.window_change_event_occurred true
  LET, -1, var_1047_0_self, var_window_change_event_occurred, var_true, var_1047_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1162, 16),
  POS(1163, 15)
};

static TAB_NUM t_lambda_56[] = {
  2, // locals
  0, // parameters
  // catched_signals_of(self)(signal):
  var_catched_signals_of, 1, var_1047_0_self, 1, LOCAL(1),
  // catched_signals_of(self)(signal):
  LOCAL(1), 1, var_1148_3_signal, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_catched_signals_ofselfsignal, var_next, IO_TAIL_CALL,
  POS(1166, 17),
  POS(1166, 17),
  POS(1165, 15)
};

static TAB_NUM t_lambda_catched_signals_ofselfsignal[] = {
  1, // locals
  0, // parameters
  // new(std_types::event SIGNAL undefined signal)
  var_new, 4, var_std_types__event, var_SIGNAL, var_undefined, var_1148_3_signal, 1, LOCAL(1),
  // push &events new(std_types::event SIGNAL undefined signal)
  var_push, 2, var_1060_1_events, LOCAL(1), 1, var_1060_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1167, 32),
  POS(1167, 19),
  POS(1168, 19)
};

static TAB_NUM t_func_handle_write_requests[] = {
  2, // locals
  0, // parameters
  // window_change_event_occurred
  var_window_change_event_occurred, 1, var_1047_0_self, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_57, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_59, lambda_60, IO_TAIL_CALL,
  POS(1175, 18),
  POS(1174, 13),
  POS(1173, 9)
};

static TAB_NUM t_lambda_57[] = {
  2, // locals
  0, // parameters
  // do_inject_window_change_events
  var_do_inject_window_change_events, 1, var_1047_0_self, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_58, 1, LOCAL(2),
  // self.do_inject_window_change_events
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1176, 18),
  POS(1174, 13),
  POS(1176, 13)
};

static TAB_NUM t_lambda_58[] = {
  3, // locals
  0, // parameters
  // read_jobs_of(self)(STDIN_FILENO).is_defined
  var_read_jobs_of, 1, var_1047_0_self, 1, LOCAL(1),
  // read_jobs_of(self)(STDIN_FILENO).is_defined
  LOCAL(1), 1, var_STDIN_FILENO, 1, LOCAL(2),
  // is_defined
  var_is_defined, 1, LOCAL(2), 1, LOCAL(3),
  // read_jobs_of(self)(STDIN_FILENO).is_defined
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1177, 13),
  POS(1177, 13),
  POS(1177, 46),
  POS(1177, 13)
};

static TAB_NUM t_lambda_59[] = {
  4, // locals
  0, // parameters
  // get_terminal_size! STDIN_FILENO $width $height
  var_get_terminal_size, 1, var_STDIN_FILENO, IO_CALL(2), LOCAL(2), LOCAL(3),
  // self.window_change_event_occurred false
  LET, -1, var_1047_0_self, var_window_change_event_occurred, var_false, var_1047_0_self,
  // $buf "@esc;[8;@(height);@(width)t"
  var_std__string, 5, string_4, LOCAL(3), string_5, LOCAL(2), str_t, 1, LOCAL(4),
  // new(std_types::event READ STDIN_FILENO buf)
  var_new, 4, var_std_types__event, var_READ, var_STDIN_FILENO, LOCAL(4), 1, LOCAL(1),
  // push &events new(std_types::event READ STDIN_FILENO buf)
  var_push, 2, var_1060_1_events, LOCAL(1), 1, var_1060_1_events,
  // !injected_into_stdin true
  LET, 1, var_true, 1, var_1145_1_injected_into_stdin,
  // check_file_descriptors!
  func_check_file_descriptors, 0, IO_TAIL_CALL,
  POS(1179, 13),
  POS(1180, 14),
  POS(1181, 13),
  POS(1182, 26),
  POS(1182, 13),
  POS(1183, 13),
  POS(1184, 13)
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  0, // parameters
  // check_file_descriptors!
  func_check_file_descriptors, 0, IO_TAIL_CALL,
  POS(1186, 13)
};

static TAB_NUM t_func_check_file_descriptors[] = {
  0, // locals
  0, // parameters
  // for_each can_write
  var_for_each, 3, var_1141_1_can_write, lambda_61, func_attempt_reads, IO_TAIL_CALL,
  POS(1189, 9)
};

static TAB_NUM t_lambda_61[] = {
  1, // locals
  1, // parameters
  var_1190_3_fd,
  // $job write_jobs(fd)
  var_1146_1_write_jobs, 1, var_1190_3_fd, 1, var_1191_1_job,
  // write! $bytes_written fd job
  var_write, 2, var_1190_3_fd, var_1191_1_job, IO_CALL(1), var_1192_8_bytes_written,
  // is_an_error:
  var_is_an_error, 1, var_1192_8_bytes_written, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_bytes_written_is_an_error, lambda_62, IO_TAIL_CALL,
  POS(1191, 13),
  POS(1192, 13),
  POS(1194, 29),
  POS(1193, 13)
};

static TAB_NUM t_lambda_bytes_written_is_an_error[] = {
  2, // locals
  0, // parameters
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, var_1047_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, var_1190_3_fd, var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, var_1047_0_self, var_write_jobs_of, LOCAL(2), var_1047_0_self,
  // new
  var_new, 4, var_std_types__event, var_WRITE_FAILED, var_1190_3_fd, var_1192_8_bytes_written, 1, LOCAL(1),
  // push &events
  var_push, 2, var_1060_1_events, LOCAL(1), 1, var_1060_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1195, 23),
  POS(1195, 23),
  POS(1195, 18),
  POS(1197, 19),
  POS(1196, 17),
  POS(1201, 17)
};

static TAB_NUM t_lambda_62[] = {
  2, // locals
  0, // parameters
  // length_of(job):
  var_length_of, 1, var_1191_1_job, 1, LOCAL(1),
  // bytes_written < length_of(job):
  var_std__less, 2, var_1192_8_bytes_written, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_63, lambda_64, IO_TAIL_CALL,
  POS(1204, 35),
  POS(1204, 19),
  POS(1203, 17)
};

static TAB_NUM t_lambda_63[] = {
  2, // locals
  0, // parameters
  // bytes_written+1 -1
  var_std__plus, 2, var_1192_8_bytes_written, num_1, 1, LOCAL(1),
  // range &job bytes_written+1 -1
  var_range, 3, var_1191_1_job, LOCAL(1), minus_num_1, 1, var_1191_1_job,
  // write_jobs_of(fd) job # remaining text to write
  var_write_jobs_of, 1, var_1047_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) job # remaining text to write
  LOCAL(2), 2, var_1190_3_fd, var_1191_1_job, 1, LOCAL(2),
  // self.write_jobs_of(fd) job # remaining text to write
  LET, -1, var_1047_0_self, var_write_jobs_of, LOCAL(2), var_1047_0_self,
  // new(std_types::event WRITE_PENDING fd job)
  var_new, 4, var_std_types__event, var_WRITE_PENDING, var_1190_3_fd, var_1191_1_job, 1, LOCAL(1),
  // push &events new(std_types::event WRITE_PENDING fd job)
  var_push, 2, var_1060_1_events, LOCAL(1), 1, var_1060_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1205, 32),
  POS(1205, 21),
  POS(1206, 27),
  POS(1206, 27),
  POS(1206, 22),
  POS(1207, 34),
  POS(1207, 21),
  POS(1208, 21)
};

static TAB_NUM t_lambda_64[] = {
  2, // locals
  0, // parameters
  // write_jobs_of(fd) undefined
  var_write_jobs_of, 1, var_1047_0_self, 1, LOCAL(2),
  // write_jobs_of(fd) undefined
  LOCAL(2), 2, var_1190_3_fd, var_undefined, 1, LOCAL(2),
  // self.write_jobs_of(fd) undefined
  LET, -1, var_1047_0_self, var_write_jobs_of, LOCAL(2), var_1047_0_self,
  // new(std_types::event WRITE_COMPLETED fd undefined)
  var_new, 4, var_std_types__event, var_WRITE_COMPLETED, var_1190_3_fd, var_undefined, 1, LOCAL(1),
  // push &events
  var_push, 2, var_1060_1_events, LOCAL(1), 1, var_1060_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1210, 27),
  POS(1210, 27),
  POS(1210, 22),
  POS(1212, 23),
  POS(1211, 21),
  POS(1213, 21)
};

static TAB_NUM t_func_attempt_reads[] = {
  0, // locals
  0, // parameters
  // for_each can_read
  var_for_each, 3, var_1140_1_can_read, lambda_65, lambda_77, IO_TAIL_CALL,
  POS(1217, 9)
};

static TAB_NUM t_lambda_65[] = {
  3, // locals
  1, // parameters
  var_1218_3_fd,
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__equal, 2, var_1218_3_fd, var_STDIN_FILENO, 1, LOCAL(1),
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_std__or, 2, LOCAL(2), lambda_66, 1, LOCAL(3),
  // if_not fd != STDIN_FILENO || not(injected_into_stdin) next:
  var_if_not, 3, LOCAL(3), var_next, lambda_67, IO_TAIL_CALL,
  POS(1219, 20),
  POS(1219, 20),
  POS(1219, 20),
  POS(1219, 13)
};

static TAB_NUM t_lambda_66[] = {
  1, // locals
  0, // parameters
  // not(injected_into_stdin) next:
  var_not, 1, var_1145_1_injected_into_stdin, 1, LOCAL(1),
  // not(injected_into_stdin) next:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1219, 42),
  POS(1219, 42)
};

static TAB_NUM t_lambda_67[] = {
  3, // locals
  0, // parameters
  // fstat! fd $info
  var_fstat, 1, var_1218_3_fd, IO_CALL(1), LOCAL(3),
  // type_of(info) == SOCKET:
  var_type_of, 1, LOCAL(3), 1, LOCAL(1),
  // type_of(info) == SOCKET:
  var_std__equal, 2, LOCAL(1), var_SOCKET, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_68, func_do_read, IO_TAIL_CALL,
  POS(1220, 15),
  POS(1222, 17),
  POS(1222, 17),
  POS(1221, 15)
};

static TAB_NUM t_lambda_68[] = {
  1, // locals
  0, // parameters
  // is_listening! $does_listen fd
  var_is_listening, 1, var_1218_3_fd, IO_CALL(1), LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_does_listen, func_do_read, IO_TAIL_CALL,
  POS(1223, 19),
  POS(1224, 19)
};

static TAB_NUM t_lambda_does_listen[] = {
  1, // locals
  0, // parameters
  // accept! $conn fd
  var_accept, 1, var_1218_3_fd, IO_CALL(1), var_1226_9_conn,
  // is_an_error:
  var_is_an_error, 1, var_1226_9_conn, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_conn_is_an_error, lambda_69, IO_TAIL_CALL,
  POS(1226, 23),
  POS(1228, 30),
  POS(1227, 23)
};

static TAB_NUM t_lambda_conn_is_an_error[] = {
  1, // locals
  0, // parameters
  // new(std_types::event READ_FAILED fd conn)
  var_new, 4, var_std_types__event, var_READ_FAILED, var_1218_3_fd, var_1226_9_conn, 1, LOCAL(1),
  // push &events
  var_push, 2, var_1060_1_events, LOCAL(1), 1, var_1060_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1230, 29),
  POS(1229, 27),
  POS(1231, 27)
};

static TAB_NUM t_lambda_69[] = {
  1, // locals
  0, // parameters
  // new(std_types::event CONNECT fd conn)
  var_new, 4, var_std_types__event, var_CONNECT, var_1218_3_fd, var_1226_9_conn, 1, LOCAL(1),
  // push &events
  var_push, 2, var_1060_1_events, LOCAL(1), 1, var_1060_1_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1234, 29),
  POS(1233, 27),
  POS(1235, 27)
};

static TAB_NUM t_func_do_read[] = {
  4, // locals
  0, // parameters
  // read_jobs_of(self)(fd)
  var_read_jobs_of, 1, var_1047_0_self, 1, LOCAL(1),
  // $do_close_and_max_length read_jobs_of(self)(fd)
  LOCAL(1), 1, var_1218_3_fd, 1, LOCAL(3),
  // do_close_and_max_length $do_close $max_length
  LOCAL(3), 0, 2, var_1241_25_do_close, var_1241_35_max_length,
  // is_defined && max_length < 0x10'0000
  var_is_defined, 1, var_1241_35_max_length, 1, LOCAL(1),
  // is_defined && max_length < 0x10'0000
  var_std__and, 2, LOCAL(1), lambda_70, 1, LOCAL(2),
  // $length
  var_if, 3, LOCAL(2), lambda_71, lambda_72, 1, LOCAL(4),
  // read! $buf fd length
  var_read, 2, var_1218_3_fd, LOCAL(4), IO_CALL(1), var_1247_7_buf,
  // is_an_error:
  var_is_an_error, 1, var_1247_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_an_error, lambda_73, IO_TAIL_CALL,
  POS(1240, 42),
  POS(1240, 17),
  POS(1241, 17),
  POS(1244, 32),
  POS(1244, 32),
  POS(1242, 17),
  POS(1247, 17),
  POS(1249, 23),
  POS(1248, 17)
};

static TAB_NUM t_lambda_70[] = {
  1, // locals
  0, // parameters
  // max_length < 0x10'0000
  var_std__less, 2, var_1241_35_max_length, num_0x100000, 1, LOCAL(1),
  // max_length < 0x10'0000
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1244, 46),
  POS(1244, 46)
};

static TAB_NUM t_lambda_71[] = {
  0, // locals
  0, // parameters
  //  max_length
  LET, 1, var_1241_35_max_length, TAIL_CALL,
  POS(1245, 23)
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  0, // parameters
  //  0x10'0000
  LET, 1, num_0x100000, TAIL_CALL,
  POS(1246, 23)
};

static TAB_NUM t_lambda_buf_is_an_error[] = {
  1, // locals
  0, // parameters
  // new(std_types::event READ_FAILED fd buf)
  var_new, 4, var_std_types__event, var_READ_FAILED, var_1218_3_fd, var_1247_7_buf, 1, LOCAL(1),
  // push &events new(std_types::event READ_FAILED fd buf)
  var_push, 2, var_1060_1_events, LOCAL(1), 1, var_1060_1_events,
  // if
  var_if, 3, var_1241_25_do_close, lambda_do_close, var_next, IO_TAIL_CALL,
  POS(1250, 34),
  POS(1250, 21),
  POS(1251, 21)
};

static TAB_NUM t_lambda_do_close[] = {
  0, // locals
  0, // parameters
  // close &self fd
  var_close, 2, var_1047_0_self, var_1218_3_fd, 1, var_1047_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1253, 25),
  POS(1254, 25)
};

static TAB_NUM t_lambda_73[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_1247_7_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_buf_is_empty, lambda_74, IO_TAIL_CALL,
  POS(1258, 27),
  POS(1257, 21)
};

static TAB_NUM t_lambda_buf_is_empty[] = {
  1, // locals
  0, // parameters
  // stop_reading_from &self fd
  var_stop_reading_from, 2, var_1047_0_self, var_1218_3_fd, 1, var_1047_0_self,
  // new(std_types::event CLOSED fd undefined)
  var_new, 4, var_std_types__event, var_CLOSED, var_1218_3_fd, var_undefined, 1, LOCAL(1),
  // push &events new(std_types::event CLOSED fd undefined)
  var_push, 2, var_1060_1_events, LOCAL(1), 1, var_1060_1_events,
  // if
  var_if, 3, var_1241_25_do_close, lambda_2_do_close, var_next, IO_TAIL_CALL,
  POS(1259, 25),
  POS(1260, 38),
  POS(1260, 25),
  POS(1261, 25)
};

static TAB_NUM t_lambda_2_do_close[] = {
  0, // locals
  0, // parameters
  // close &self fd
  var_close, 2, var_1047_0_self, var_1218_3_fd, 1, var_1047_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1263, 29),
  POS(1264, 29)
};

static TAB_NUM t_lambda_74[] = {
  1, // locals
  0, // parameters
  // new(std_types::event READ fd buf)
  var_new, 4, var_std_types__event, var_READ, var_1218_3_fd, var_1247_7_buf, 1, LOCAL(1),
  // push &events new(std_types::event READ fd buf)
  var_push, 2, var_1060_1_events, LOCAL(1), 1, var_1060_1_events,
  // is_defined:
  var_is_defined, 1, var_1241_35_max_length, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_max_length_is_defined, var_next, IO_TAIL_CALL,
  POS(1267, 38),
  POS(1267, 25),
  POS(1269, 38),
  POS(1268, 25)
};

static TAB_NUM t_lambda_max_length_is_defined[] = {
  2, // locals
  0, // parameters
  // length_of(buf) < max_length:
  var_length_of, 1, var_1247_7_buf, 1, LOCAL(1),
  // length_of(buf) < max_length:
  var_std__less, 2, LOCAL(1), var_1241_35_max_length, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_75, lambda_76, IO_TAIL_CALL,
  POS(1271, 31),
  POS(1271, 31),
  POS(1270, 29)
};

static TAB_NUM t_lambda_75[] = {
  5, // locals
  0, // parameters
  // length_of(buf))
  var_length_of, 1, var_1247_7_buf, 1, LOCAL(1),
  // max_length-length_of(buf))
  var_std__minus, 2, var_1241_35_max_length, LOCAL(1), 1, LOCAL(2),
  // !self.read_jobs_of(fd)
  var_tuple, 2, var_true, LOCAL(2), 1, LOCAL(4),
  // read_jobs_of(fd)
  var_read_jobs_of, 1, var_1047_0_self, 1, LOCAL(5),
  // read_jobs_of(fd)
  LOCAL(5), 2, var_1218_3_fd, LOCAL(4), 1, LOCAL(5),
  // self.read_jobs_of(fd)
  LET, -1, var_1047_0_self, var_read_jobs_of, LOCAL(5), var_1047_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1273, 57),
  POS(1273, 46),
  POS(1272, 33),
  POS(1272, 39),
  POS(1272, 39),
  POS(1272, 34),
  POS(1274, 33)
};

static TAB_NUM t_lambda_76[] = {
  0, // locals
  0, // parameters
  // stop_reading_from &self fd
  var_stop_reading_from, 2, var_1047_0_self, var_1218_3_fd, 1, var_1047_0_self,
  // if
  var_if, 3, var_1241_25_do_close, lambda_3_do_close, var_next, IO_TAIL_CALL,
  POS(1276, 33),
  POS(1277, 33)
};

static TAB_NUM t_lambda_3_do_close[] = {
  0, // locals
  0, // parameters
  // close &self fd
  var_close, 2, var_1047_0_self, var_1218_3_fd, 1, var_1047_0_self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1279, 37),
  POS(1280, 37)
};

static TAB_NUM t_lambda_77[] = {
  0, // locals
  0, // parameters
  // attempt_close_operations! &self
  func_attempt_close_operations, 1, var_1047_0_self, IO_CALL(1), var_1047_0_self,
  // attempt_exit! &self
  func_attempt_exit, 1, var_1047_0_self, IO_CALL(1), var_1047_0_self,
  // -> self events
  LET, 2, var_1047_0_self, var_1060_1_events, TAIL_CALL,
  POS(1284, 13),
  POS(1286, 13),
  POS(1288, 13)
};

static TAB_NUM t_func_attempt_close_operations[] = {
  1, // locals
  1, // parameters
  var_1290_28_io,
  // close_jobs_of(io)
  var_close_jobs_of, 1, var_1290_28_io, 1, LOCAL(1),
  // for_each close_jobs_of(io)
  var_for_each, 3, LOCAL(1), lambda_78, lambda_79, IO_TAIL_CALL,
  POS(1291, 12),
  POS(1291, 3)
};

static TAB_NUM t_lambda_78[] = {
  3, // locals
  1, // parameters
  var_1292_3_fd,
  // write_jobs_of(io)(fd).is_undefined:
  var_write_jobs_of, 1, var_1290_28_io, 1, LOCAL(1),
  // write_jobs_of(io)(fd).is_undefined:
  LOCAL(1), 1, var_1292_3_fd, 1, LOCAL(2),
  // is_undefined:
  var_is_undefined, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_write_jobs_ofiofd_is_undefined, var_next, IO_TAIL_CALL,
  POS(1294, 9),
  POS(1294, 9),
  POS(1294, 31),
  POS(1293, 7)
};

static TAB_NUM t_lambda_write_jobs_ofiofd_is_undefined[] = {
  2, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_1292_3_fd, IO_CALL(0),
  // close_jobs_of(fd) false
  var_close_jobs_of, 1, var_1290_28_io, 1, LOCAL(2),
  // close_jobs_of(fd) false
  LOCAL(2), 2, var_1292_3_fd, var_false, 1, LOCAL(2),
  // io.close_jobs_of(fd) false
  LET, -1, var_1290_28_io, var_close_jobs_of, LOCAL(2), var_1290_28_io,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1295, 11),
  POS(1296, 15),
  POS(1296, 15),
  POS(1296, 12),
  POS(1297, 11)
};

static TAB_NUM t_lambda_79[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_1290_28_io, TAIL_CALL,
  POS(1299, 7)
};

static TAB_NUM t_func_attempt_exit[] = {
  2, // locals
  1, // parameters
  var_1301_16_io,
  // exit_code_of(io).is_defined:
  var_exit_code_of, 1, var_1301_16_io, 1, LOCAL(1),
  // is_defined:
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_exit_code_ofio_is_defined, lambda_83, IO_TAIL_CALL,
  POS(1303, 5),
  POS(1303, 22),
  POS(1302, 3)
};

static TAB_NUM t_lambda_exit_code_ofio_is_defined[] = {
  1, // locals
  0, // parameters
  // resources_of(io)
  var_resources_of, 1, var_1301_16_io, 1, LOCAL(1),
  // for_each resources_of(io)
  var_for_each, 3, LOCAL(1), lambda_80, lambda_81, IO_TAIL_CALL,
  POS(1304, 16),
  POS(1304, 7)
};

static TAB_NUM t_lambda_80[] = {
  1, // locals
  1, // parameters
  var_1305_3_resource,
  // do_log_of(resource):
  var_do_log_of, 1, var_1305_3_resource, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_do_log_ofresource, func_finalize_resource, IO_TAIL_CALL,
  POS(1307, 13),
  POS(1306, 11)
};

static TAB_NUM t_lambda_do_log_ofresource[] = {
  2, // locals
  0, // parameters
  // name_of(resource))"
  var_name_of, 1, var_1305_3_resource, 1, LOCAL(1),
  // "finalizing @(name_of(resource))"
  var_std__string, 2, str_finalizing, LOCAL(1), 1, LOCAL(2),
  // log &io 3 "finalizing @(name_of(resource))"
  var_log, 3, var_1301_16_io, num_3, LOCAL(2), 1, var_1301_16_io,
  // finalize_resource!
  func_finalize_resource, 0, IO_TAIL_CALL,
  POS(1308, 39),
  POS(1308, 25),
  POS(1308, 15),
  POS(1309, 15)
};

static TAB_NUM t_func_finalize_resource[] = {
  0, // locals
  0, // parameters
  // finalize! resource &io
  var_finalize, 2, var_1305_3_resource, var_1301_16_io, IO_CALL(1), var_1301_16_io,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1313, 13),
  POS(1314, 13)
};

static TAB_NUM t_lambda_81[] = {
  1, // locals
  0, // parameters
  // io.resources_of empty_list
  LET, -1, var_1301_16_io, var_resources_of, var_empty_list, var_1301_16_io,
  // is_empty:
  var_is_empty, 1, var_1301_16_io, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_io_is_empty, lambda_82, IO_TAIL_CALL,
  POS(1316, 12),
  POS(1318, 16),
  POS(1317, 11)
};

static TAB_NUM t_lambda_io_is_empty[] = {
  1, // locals
  0, // parameters
  // exit_code_of(io)
  var_exit_code_of, 1, var_1301_16_io, 1, LOCAL(1),
  // exit! exit_code_of(io)
  var_exit, 1, LOCAL(1), IO_TAIL_CALL,
  POS(1319, 21),
  POS(1319, 15)
};

static TAB_NUM t_lambda_82[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_1301_16_io, TAIL_CALL,
  POS(1320, 15)
};

static TAB_NUM t_lambda_83[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_1301_16_io, TAIL_CALL,
  POS(1321, 7)
};

static TAB_NUM t_func_std__handle_events[] = {
  1, // locals
  2, // parameters
  var_1323_22_io,
  LOCAL(1), // 1323_25_events
  // $new_events empty_list
  LET, 1, var_empty_list, 1, var_1324_1_new_events,
  // $handlers handlers_of(io)
  var_handlers_of, 1, var_1323_22_io, 1, var_1325_1_handlers,
  // for_each events
  var_for_each, 3, LOCAL(1), lambda_84, lambda_87, IO_TAIL_CALL,
  POS(1324, 3),
  POS(1325, 3),
  POS(1326, 3)
};

static TAB_NUM t_lambda_84[] = {
  1, // locals
  1, // parameters
  var_1327_3_event,
  // event $type $id $argument
  var_1327_3_event, 0, 3, var_1328_7_type, var_1328_13_id, var_1328_17_argument,
  // $id_handlers handlers(id)
  var_1325_1_handlers, 1, var_1328_13_id, 1, var_1329_1_id_handlers,
  // is_undefined
  var_is_undefined, 1, var_1329_1_id_handlers, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_keep_event, lambda_85, IO_TAIL_CALL,
  POS(1328, 7),
  POS(1329, 7),
  POS(1331, 21),
  POS(1330, 7)
};

static TAB_NUM t_lambda_85[] = {
  1, // locals
  0, // parameters
  // $handler id_handlers(type)
  var_1329_1_id_handlers, 1, var_1328_7_type, 1, var_1334_1_handler,
  // is_undefined
  var_is_undefined, 1, var_1334_1_handler, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_keep_event, lambda_86, IO_TAIL_CALL,
  POS(1334, 11),
  POS(1336, 21),
  POS(1335, 11)
};

static TAB_NUM t_lambda_86[] = {
  1, // locals
  0, // parameters
  // handler &io $new_event id argument
  var_1334_1_handler, 3, var_1323_22_io, var_1328_13_id, var_1328_17_argument, 2, var_1323_22_io, var_1339_13_new_event,
  // is_defined:
  var_is_defined, 1, var_1339_13_new_event, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_new_event_is_defined, var_next, IO_TAIL_CALL,
  POS(1339, 15),
  POS(1341, 27),
  POS(1340, 15)
};

static TAB_NUM t_lambda_2_new_event_is_defined[] = {
  1, // locals
  0, // parameters
  // is_a_list
  var_is_a_list, 1, var_1339_13_new_event, 1, LOCAL(1),
  // update_if_not new_event.is_a_list
  var_update_if_not, 3, LOCAL(1), var_1339_13_new_event, lambda_new_event, 1, var_1339_13_new_event,
  // handle_events &io &new_event
  var_handle_events, 2, var_1323_22_io, var_1339_13_new_event, 2, var_1323_22_io, var_1339_13_new_event,
  // append &new_events new_event
  var_append, 2, var_1324_1_new_events, var_1339_13_new_event, 1, var_1324_1_new_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1342, 43),
  POS(1342, 19),
  POS(1344, 19),
  POS(1345, 19),
  POS(1346, 19)
};

static TAB_NUM t_lambda_new_event[] = {
  1, // locals
  0, // parameters
  // list(new_event)
  var_list, 1, var_1339_13_new_event, 1, LOCAL(1),
  //  list(new_event)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1343, 35),
  POS(1343, 34)
};

static TAB_NUM t_func_keep_event[] = {
  0, // locals
  0, // parameters
  // push &new_events event
  var_push, 2, var_1324_1_new_events, var_1327_3_event, 1, var_1324_1_new_events,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1350, 9),
  POS(1351, 9)
};

static TAB_NUM t_lambda_87[] = {
  0, // locals
  0, // parameters
  //  io new_events
  LET, 2, var_1323_22_io, var_1324_1_new_events, TAIL_CALL,
  POS(1352, 7)
};

static int tuple_593_0_arguments[] = {
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__resource___enable_logging}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__resource___disable_logging}},
  {FLT_TUPLE, 3, {.arguments = tuple_593_0_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___start_reading_from}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___stop_reading_from}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___print_to}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___write}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___cancel_write}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___close}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___join_process}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___start_injecting_window_change_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___stop_injecting_window_change_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___start_catching_signals}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___stop_catching_signals}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___set_timeout}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__initialize_logging}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_log_filename_is_defined}},
  {FLT_STRING_8, 2, {.str_8 = "w+"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___enable_logging}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___disable_logging}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___log}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_STRING_8, 1, {.str_8 = "["}},
  {FLT_STRING_8, 2, {.str_8 = "] "}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___register_handlers}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___deregister_handlers}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___deregister_all_handlers}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___register_resource}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___run}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___run_at}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___exit}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__log_unhandled_event}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_WRITE_PENDINGWRITE_COMPLETED}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_STRING_8, 16, {.str_8 = "unhandled event "}},
  {FLT_STRING_8, 3, {.str_8 = " - "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___initialize}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io___get_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_set_timeout}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_timeout}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_exit_codes_ofself}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_start_jobs}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_new_event_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_new_event_is_a_list}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_write_jobs}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_wait_for_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_CHILD_CHANGED_STATE}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_watched_pids_ofselfpid}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_WINDOW_CHANGED_SIZE}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_catched_signals_ofselfsignal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_write_requests}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_STRING_8, 4, {.str_8 = "\033[8;"}},
  {FLT_STRING_8, 1, {.str_8 = ";"}},
  {FLT_STRING_8, 1, {.str_8 = "t"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_file_descriptors}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_bytes_written_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_attempt_reads}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_does_listen}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_conn_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_do_read}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x100000}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_buf_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_close}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_buf_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_do_close}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_max_length_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_do_close}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_attempt_close_operations}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_write_jobs_ofiofd_is_undefined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_attempt_exit}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_exit_code_ofio_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_log_ofresource}},
  {FLT_STRING_8, 11, {.str_8 = "finalizing "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_finalize_resource}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_io_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__handle_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_new_event_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_new_event}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_keep_event}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}}
};

static ATTRIBUTE_DEFINITION std_types__io__attributes[] = {
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
  {-var_do_log_of, -var_false},
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
  {var_get_events, -func_std_types__io___get_events}
};

static ATTRIBUTE_DEFINITION std_types__resource__attributes[] = {
  {-var_name_of, -str_anonymous_resour},
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
    {.position = POS(133, 1)}
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
    FOT_DERIVED, 0, 43,
    "io\000std_types", std_types__io__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "object\000std_types", NULL,
    {.position = POS(539, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(545, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_set\000", NULL,
    {.position = POS(547, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(548, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_table\000", NULL,
    {.position = POS(550, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(553, 47)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(557, 29)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "random_seed_of\000", NULL,
    {.position = POS(560, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "step_no_of\000", NULL,
    {.position = POS(561, 16)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "do_log_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_DERIVED, 0, 3,
    "resource\000std_types", std_types__resource__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "name_of\000", NULL,
    {.position = POS(566, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "do_log_of\000", NULL,
    {.position = POS(567, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "enable_logging\000", NULL,
    {.position = POS(569, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(579, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "disable_logging\000", NULL,
    {.position = POS(581, 22)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "event\000std_types", NULL,
    {.const_idx = -tuple_593_0}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(593, 19)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_reading_from\000", NULL,
    {.position = POS(599, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_reading_from\000", NULL,
    {.position = POS(615, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "print_to\000", NULL,
    {.position = POS(629, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(635, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(635, 37)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "write\000", NULL,
    {.position = POS(635, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "647_0_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "649_1_job\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(652, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(653, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(651, 5)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "cancel_write\000", NULL,
    {.position = POS(658, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "close\000", NULL,
    {.position = POS(673, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "join_process\000", NULL,
    {.position = POS(692, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_injecting_window_change_events\000", NULL,
    {.position = POS(706, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_injecting_window_change_events\000", NULL,
    {.position = POS(718, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "start_catching_signals\000", NULL,
    {.position = POS(730, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "738_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "741_1_catched_signals\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(745, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(742, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "stop_catching_signals\000", NULL,
    {.position = POS(748, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "756_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "759_1_catched_signals\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "set_timeout\000", NULL,
    {.position = POS(766, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "776_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "777_0_timeout\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_number\000", NULL,
    {.position = POS(779, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "current_time_of\000", NULL,
    {.position = POS(779, 45)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(779, 45)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(779, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "780_1_current_timeout\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(782, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(782, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(782, 21)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "initialize_logging\000std", NULL,
    {.const_idx = -func_std__initialize_logging}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "788_0_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "789_0_log_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "790_0_log_filename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open\000", NULL,
    {.position = POS(794, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDERR_FILENO\000", NULL,
    {.position = POS(795, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dup2\000", NULL,
    {.position = POS(795, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "799_8_stdout_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDOUT_FILENO\000", NULL,
    {.position = POS(799, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "fstat\000", NULL,
    {.position = POS(799, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "800_8_stderr_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inode_number_of\000", NULL,
    {.position = POS(803, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(803, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(803, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "device_of\000", NULL,
    {.position = POS(804, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "log\000", NULL,
    {.position = POS(834, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "842_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "843_0_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "844_0_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(848, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if_not\000", NULL,
    {.position = POS(848, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(849, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(849, 59)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split_into_lines\000", NULL,
    {.position = POS(850, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "851_1_prefix\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(851, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "852_1_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(853, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(856, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spaces\000", NULL,
    {.position = POS(856, 23)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "register_handlers\000", NULL,
    {.position = POS(862, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "870_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "871_0_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "874_1_handlers\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "default_value\000", NULL,
    {.position = POS(874, 13)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deregister_handlers\000", NULL,
    {.position = POS(884, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "892_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "893_0_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "894_0_types\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "896_1_handlers\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deregister_all_handlers\000", NULL,
    {.position = POS(909, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "register_resource\000", NULL,
    {.position = POS(923, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "run\000", NULL,
    {.position = POS(938, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "run_at\000", NULL,
    {.position = POS(953, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "961_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "962_0_time\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "exit\000", NULL,
    {.position = POS(970, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(986, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "994_0_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(997, 7)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "log_unhandled_event\000std", NULL,
    {.const_idx = -func_std__log_unhandled_event}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1003_28_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1004_7_type\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1004_13_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_FAILED\000", NULL,
    {.position = POS(1008, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_PENDING\000", NULL,
    {.position = POS(1009, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_COMPLETED\000", NULL,
    {.position = POS(1010, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(1017, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(1015, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "serialize\000", NULL,
    {.position = POS(1020, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim_right\000", NULL,
    {.position = POS(1020, 43)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "initialize\000", NULL,
    {.position = POS(1022, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_time\000", NULL,
    {.position = POS(1034, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "get_events\000", NULL,
    {.position = POS(1037, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1047_0_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(1053, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1060_1_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1061_1_want_to_write\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1063_15_t\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1064_1_start_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1066_1_first_job_time\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1067_1_remaining_timed_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1068_1_timeout\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1070_3_timed_job\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1071_33_time\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(1094, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(1094, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(1098, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1111_32_new_event\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "apply\000", NULL,
    {.position = POS(1111, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(1115, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1132_1_read_descriptor_list\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1140_1_can_read\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1141_1_can_write\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pselect\000", NULL,
    {.position = POS(1138, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1145_1_injected_into_stdin\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1146_1_write_jobs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1148_3_signal\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CHILD_CHANGED_STATE\000", NULL,
    {.position = POS(1150, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1151_7_pid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1151_12_status\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "wait\000", NULL,
    {.position = POS(1151, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exitstatus\000", NULL,
    {.position = POS(1152, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PROCESS_JOINED\000", NULL,
    {.position = POS(1156, 53)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(1156, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WINDOW_CHANGED_SIZE\000", NULL,
    {.position = POS(1161, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGNAL\000", NULL,
    {.position = POS(1167, 53)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDIN_FILENO\000", NULL,
    {.position = POS(1177, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_terminal_size\000", NULL,
    {.position = POS(1179, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ\000", NULL,
    {.position = POS(1182, 47)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1190_3_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1191_1_job\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1192_8_bytes_written\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(1194, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1218_3_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(1219, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "type_of\000", NULL,
    {.position = POS(1222, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SOCKET\000", NULL,
    {.position = POS(1222, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_listening\000", NULL,
    {.position = POS(1223, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1226_9_conn\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "accept\000", NULL,
    {.position = POS(1226, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ_FAILED\000", NULL,
    {.position = POS(1230, 50)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CONNECT\000", NULL,
    {.position = POS(1234, 50)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1241_25_do_close\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1241_35_max_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1247_7_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read\000", NULL,
    {.position = POS(1247, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CLOSED\000", NULL,
    {.position = POS(1260, 59)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(1219, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1290_28_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1292_3_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1301_16_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1305_3_resource\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finalize\000", NULL,
    {.position = POS(1313, 13)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "handle_events\000std", NULL,
    {.const_idx = -func_std__handle_events}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1323_22_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1324_1_new_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1325_1_handlers\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1327_3_event\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1328_7_type\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1328_13_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1328_17_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1329_1_id_handlers\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1334_1_handler\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1339_13_new_event\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(1343, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "handle_events\000", NULL,
    {.position = POS(1344, 19)}
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
  184, // number of constants
  242, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
