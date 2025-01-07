#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  num_1 = -1,
  uni_COMPUTE = -2,
  uni_WAIT = -3,
  uni_START_IO = -4,
  uni_CHECK_IO = -5,
  uni_COMPLETE_IO = -6,
  uni_EXIT = -7,
  func_std_types__error___generate_error_message = -8,
  lambda_1 = -9,
  string_1 = -10,
  lambda_2 = -11,
  lambda_3 = -12,
  string_2 = -13,
  chr_41 = -14,
  num_0 = -15,
  func_std_types__io_task___task_id_of = -16,
  func_std_types__io_task___parent_of = -17,
  lambda_4 = -18,
  lambda_5 = -19,
  func_std_types__io_task___children_of = -20,
  func_std_types__io_task___perform_io = -21,
  func_std_types__io_task___pause = -22,
  func_std_types__io_task___wait_for_message = -23,
  lambda_6 = -24,
  lambda_7 = -25,
  func_std_types__io_task___check_io = -26,
  func_std_types__io_task___performed_io = -27,
  func_std_types__io_task___recheck_io = -28,
  func_std_types__io_task___complete_io = -29,
  func_std_types__io_task___checked_io = -30,
  func_std_types__io_task___log = -31,
  chr_10 = -32,
  lambda_8 = -33,
  lambda_9 = -34,
  func_std_types__io_task___send = -35,
  lambda_10 = -36,
  lambda_11 = -37,
  lambda_12 = -38,
  func_std_types__io_task___receive = -39,
  lambda_13 = -40,
  lambda_14 = -41,
  func_std_types__io_task___cancel = -42,
  lambda_task_id_is_an_integer = -43,
  lambda_15 = -44,
  func_std_types__io_task___on_exit = -45,
  func_std_types__io_task___on_error = -46,
  func_std_types__io_task___on_cancel = -47,
  func_std_types__io_task___load = -48,
  func_load_request = -49,
  lambda_task_is_cancelled = -50,
  string_3 = -51,
  lambda_16 = -52,
  str_r = -53,
  lambda_fd_is_an_error = -54,
  str_load = -55,
  string_4 = -56,
  lambda_17 = -57,
  func_check_load_request = -58,
  lambda_2_task_is_cancelled = -59,
  lambda_18 = -60,
  lambda_19 = -61,
  lambda_20 = -62,
  lambda_READ = -63,
  lambda_21 = -64,
  lambda_22 = -65,
  lambda_23 = -66,
  lambda_READ_FAILED = -67,
  lambda_24 = -68,
  lambda_25 = -69,
  func_complete_load_request = -70,
  lambda_26 = -71,
  func_try_close_file = -72,
  lambda_27 = -73,
  func_std_types__io_task___save = -74,
  func_save_request = -75,
  lambda_3_task_is_cancelled = -76,
  lambda_28 = -77,
  str_w = -78,
  lambda_2_fd_is_an_error = -79,
  str_save = -80,
  lambda_29 = -81,
  func_check_save_request = -82,
  lambda_4_task_is_cancelled = -83,
  lambda_30 = -84,
  lambda_31 = -85,
  lambda_32 = -86,
  lambda_WRITE_COMPLETED = -87,
  lambda_33 = -88,
  lambda_WRITE_FAILED = -89,
  lambda_34 = -90,
  lambda_35 = -91,
  func_complete_save_request = -92,
  lambda_36 = -93,
  func_2_try_close_file = -94,
  lambda_37 = -95,
  func_std_types__io_task___read = -96,
  func_start_read_request = -97,
  lambda_5_task_is_cancelled = -98,
  lambda_38 = -99,
  func_check_read_request = -100,
  lambda_6_task_is_cancelled = -101,
  lambda_39 = -102,
  lambda_40 = -103,
  lambda_41 = -104,
  lambda_42 = -105,
  lambda_43 = -106,
  lambda_44 = -107,
  lambda_45 = -108,
  lambda_46 = -109,
  lambda_47 = -110,
  func_complete_read_request = -111,
  func_std_types__io_task___write = -112,
  func_write_request = -113,
  lambda_7_task_is_cancelled = -114,
  lambda_48 = -115,
  func_check_write_request = -116,
  lambda_8_task_is_cancelled = -117,
  lambda_49 = -118,
  lambda_50 = -119,
  lambda_51 = -120,
  lambda_52 = -121,
  lambda_53 = -122,
  func_std_types__io_task___join_process = -123,
  func_join_process_request = -124,
  func_join_process_request_pending = -125,
  lambda_54 = -126,
  lambda_55 = -127,
  lambda_56 = -128,
  lambda_57 = -129,
  func_std_types__io_task___catch_signal = -130,
  func_catch_signal_request = -131,
  func_catch_signal_request_pending = -132,
  lambda_9_task_is_cancelled = -133,
  lambda_58 = -134,
  lambda_59 = -135,
  lambda_60 = -136,
  lambda_61 = -137,
  lambda_signals_is_empty = -138,
  lambda_62 = -139,
  func_cancel_catch_signal_request = -140,
  func_catch_signal_request_completed = -141,
  func_std_types__io_task___fork = -142,
  func_std_types__io_task___exit = -143,
  func_std__io_task_manager = -144,
  lambda_loop = -145,
  num_4 = -146,
  lambda_63 = -147,
  lambda_64 = -148,
  lambda_65 = -149,
  lambda_66 = -150,
  lambda_67 = -151,
  str__parent = -152,
  string_5 = -153,
  lambda_68 = -154,
  string_6 = -155,
  str_REMOVED_TASK = -156,
  lambda_69 = -157,
  lambda_70 = -158,
  lambda_71 = -159,
  lambda_72 = -160,
  lambda_73 = -161,
  lambda_74 = -162,
  lambda_75 = -163,
  lambda_76 = -164,
  lambda_77 = -165,
  lambda_78 = -166,
  lambda_COMPLETE_IO = -167,
  lambda_EXIT = -168,
  lambda_79 = -169,
  lambda_COMPUTE = -170,
  lambda_argument_is_an_error = -171,
  lambda_80 = -172,
  lambda_81 = -173,
  func_complete_io_operation = -174,
  num_3 = -175,
  lambda_82 = -176,
  lambda_83 = -177,
  func_check_for_error = -178,
  lambda_2_argument_is_an_error = -179,
  lambda_84 = -180,
  func_handle_error = -181,
  lambda_error_handler_is_defined = -182,
  lambda_85 = -183,
  func_maybe_cancel_task = -184,
  lambda_10_task_is_cancelled = -185,
  lambda_cancel_handler_is_defined = -186,
  lambda_86 = -187,
  lambda_87 = -188,
  lambda_88 = -189,
  func_compute = -190,
  lambda_89 = -191,
  lambda_90 = -192,
  lambda_91 = -193,
  num_2 = -194,
  lambda_92 = -195,
  lambda_93 = -196,
  func_check_request = -197,
  lambda_request_is_an_error = -198,
  lambda_94 = -199,
  lambda_95 = -200,
  func_collect_messages = -201,
  lambda_96 = -202,
  lambda_receiver_is_an_integer = -203,
  lambda_97 = -204,
  func_send_message = -205,
  lambda_98 = -206,
  func_collect_cancel_requests = -207,
  lambda_99 = -208,
  lambda_100 = -209,
  func_collect_log_messages = -210,
  lambda_101 = -211,
  lambda_102 = -212,
  lambda_103 = -213,
  lambda_104 = -214,
  func_append_log_entry = -215,
  lambda_105 = -216,
  string_7 = -217,
  lambda_106 = -218,
  func_create_new_tasks = -219,
  lambda_107 = -220,
  lambda_108 = -221,
  lambda_109 = -222,
  lambda_110 = -223,
  func_receive_messages = -224,
  lambda_messages_is_defined = -225,
  lambda_111 = -226,
  lambda_112 = -227,
  func_maybe_mark_as_cancelled = -228,
  lambda_cancellationsid_oftask = -229,
  lambda_113 = -230,
  func_queue_log_message_write = -231,
  lambda_114 = -232,
  lambda_115 = -233,
  str_CREATED_TASK = -234,
  lambda_116 = -235,
  lambda_117 = -236,
  lambda_118 = -237,
  lambda_119 = -238,
  string_8 = -239,
  string_9 = -240,
  func_start_io_operation = -241,
  lambda_120 = -242,
  lambda_121 = -243,
  lambda_122 = -244,
  lambda_123 = -245,
  lambda_124 = -246,
  lambda_125 = -247,
  func_has_something_to_do = -248,
  lambda_126 = -249,
  func_maybe_exit = -250,
  lambda_io_is_empty = -251,
  lambda_requests_is_empty = -252,
  lambda_127 = -253,
  lambda_128 = -254,
  str_NO_TASK_IS_READY = -255,
  func_get_and_check_events = -256,
  lambda_129 = -257,
  lambda_130 = -258,
  lambda_131 = -259,
  lambda_132 = -260,
  func_check_events = -261,
  lambda_133 = -262,
  lambda_134 = -263,
  func_exit_task = -264,
  lambda_135 = -265,
  lambda_136 = -266,
  lambda_137 = -267,
  lambda_138 = -268,
  lambda_139 = -269,
  lambda_140 = -270
};

enum {
  var__START = FIRST_VAR-1,
  var_std__log_level, // initialized
  var_std__assign, // extern
  var_std__perform_io, // attribute
  var_std__pause, // attribute
  var_std__wait_for_message, // attribute
  var_std__fork, // attribute
  var_std__send, // attribute
  var_std__receive, // attribute
  var_std__on_error, // attribute
  var_std__on_cancel, // attribute
  var_std__check_io, // attribute
  var_std__on_exit, // attribute
  var_std__performed_io, // attribute
  var_std__recheck_io, // attribute
  var_std__complete_io, // attribute
  var_std__checked_io, // attribute
  var_std__catch_signal, // attribute
  var_std__task_id_of, // attribute
  var_std__parent_of, // attribute
  var_std__children_of, // attribute
  var_log_messages_of, // attribute
  var_exit_handlers_of, // attribute
  var_error_handler_of, // attribute
  var_cancel_handler_of, // attribute
  var_id_of, // attribute
  var_parent_id_of, // attribute
  var_child_ids_of, // attribute
  var_inbound_messages_of, // attribute
  var_outbound_messages_of, // attribute
  var_fork_requests_of, // attribute
  var_cancel_requests_of, // attribute
  var_is_cancelled, // attribute
  var_std__additional_error_information_of, // attribute
  var_std_types__error, // extern
  var_additional_error_information_of, // extern polymorphic
  var_undefined, // extern
  var_std__generate_error_message, // attribute
  var_generate_error_message, // extern polymorphic
  var_228_4_message, // dynamic
  var_error_message_text_of, // extern
  var_229_4_errno, // dynamic
  var_errno_of, // extern
  var_is_defined, // extern
  var_append, // extern
  var_strerror, // extern
  var_update_if, // extern
  var_233_4_failed_attribute, // dynamic
  var_failed_attribute_of, // extern
  var_237_4_additional_information, // dynamic
  var_push, // extern
  var_std_types__io_task, // derived
  var_std_types__object, // extern
  var_empty_list, // extern
  var_false, // extern
  var_task_id_of, // extern polymorphic
  var_parent_of, // extern polymorphic
  var_259_4_id, // dynamic
  var_std__equal, // extern
  var_std__not, // extern
  var_if, // extern
  var_children_of, // extern polymorphic
  var_perform_io, // extern polymorphic
  var_tuple, // extern
  var_pause, // extern polymorphic
  var_wait_for_message, // extern polymorphic
  var_279_40_self, // dynamic
  var_279_45_continuation, // dynamic
  var_is_empty, // extern
  var_check_io, // extern polymorphic
  var_performed_io, // extern polymorphic
  var_recheck_io, // extern polymorphic
  var_complete_io, // extern polymorphic
  var_checked_io, // extern polymorphic
  var_log, // extern polymorphic
  var_306_4_str, // dynamic
  var_create_string, // extern
  var_has_suffix, // extern
  var_send, // extern polymorphic
  var_315_28_self, // dynamic
  var_315_33_receiver, // dynamic
  var_315_42_message, // dynamic
  var_is_a_list, // extern
  var_std__and, // extern
  var_receive, // extern polymorphic
  var_323_31_self, // dynamic
  var_get, // extern
  var_cancel, // extern polymorphic
  var_333_5_self, // dynamic
  var_334_5_task_id, // dynamic
  var_is_an_integer, // extern
  var_to_list, // extern
  var_on_exit, // extern polymorphic
  var_put, // extern
  var_on_error, // extern polymorphic
  var_on_cancel, // extern polymorphic
  var_load, // extern polymorphic
  var_366_19_task, // dynamic
  var_366_24_io, // dynamic
  var_366_27_filename, // dynamic
  var_371_16_fd, // dynamic
  var_open, // extern
  var_is_an_error, // extern
  var_std__string, // extern
  var_start_reading_from, // extern
  var_381_25_task, // dynamic
  var_381_30_events, // dynamic
  var_381_37_argument, // dynamic
  var_382_15_fd, // dynamic
  var_382_19_buf, // dynamic
  var_stop_reading_from, // extern
  var_close, // extern
  var_try, // extern
  var_392_26_efd, // dynamic
  var_392_31_data, // dynamic
  var_READ, // extern
  var_next, // extern
  var_READ_FAILED, // extern
  var_case, // extern
  var_for_each, // extern
  var_414_15_fd, // dynamic
  var_420_15_fd, // dynamic
  var_save, // extern polymorphic
  var_428_19_task, // dynamic
  var_428_24_io, // dynamic
  var_429_15_filename, // dynamic
  var_429_25_data, // dynamic
  var_434_16_fd, // dynamic
  var_write, // extern polymorphic
  var_444_25_task, // dynamic
  var_444_30_events, // dynamic
  var_444_37_fd, // dynamic
  var_cancel_write, // extern
  var_454_26_efd, // dynamic
  var_454_31_data, // dynamic
  var_WRITE_COMPLETED, // extern
  var_WRITE_FAILED, // extern
  var_470_36_fd, // dynamic
  var_475_15_fd, // dynamic
  var_read, // extern polymorphic
  var_490_25_task, // dynamic
  var_490_30_io, // dynamic
  var_490_33_argument, // dynamic
  var_499_25_task, // dynamic
  var_499_30_events, // dynamic
  var_499_37_argument, // dynamic
  var_500_15_fd, // dynamic
  var_500_19_length, // dynamic
  var_500_27_buf, // dynamic
  var_509_26_efd, // dynamic
  var_509_31_data, // dynamic
  var_length_of, // extern
  var_std__less, // extern
  var_if_not, // extern
  var_533_20_task, // dynamic
  var_533_25_io, // dynamic
  var_534_15_fd, // dynamic
  var_534_19_text, // dynamic
  var_542_26_task, // dynamic
  var_542_31_events, // dynamic
  var_542_38_fd, // dynamic
  var_551_26_efd, // dynamic
  var_join_process, // extern polymorphic
  var_566_35_task, // dynamic
  var_566_47_pid, // dynamic
  var_569_22_epid, // dynamic
  var_569_28_status, // dynamic
  var_PROCESS_JOINED, // extern
  var_catch_signal, // extern polymorphic
  var_start_catching_signals, // extern
  var_584_35_task, // dynamic
  var_584_40_events, // dynamic
  var_589_10_signals, // dynamic
  var_592_34_signal, // dynamic
  var_SIGNAL, // extern
  var_stop_catching_signals, // extern
  var_fork, // extern polymorphic
  var_exit, // extern polymorphic
  var_EXIT_SUCCESS, // extern
  var_std__io_task_manager, // initialized
  var_639_4_exit_status, // dynamic
  var_640_4_io, // dynamic
  var_std_types__io, // extern
  var_641_4_updated_requests, // dynamic
  var_642_4_new_requests, // dynamic
  var_643_4_cancellations, // dynamic
  var_empty_key_order_set, // extern
  var_644_4_sent_messages, // dynamic
  var_empty_key_order_table, // extern
  var_645_4_removed_children, // dynamic
  var_646_4_log_message, // dynamic
  var_647_4_events, // dynamic
  var_648_4_requests, // dynamic
  var_list, // extern
  var_650_4_current_task_id, // dynamic
  var_651_4_iteration_no, // dynamic
  var_inc, // extern
  var_map, // extern
  var_log_level, // extern
  var_is_not_empty, // extern
  var_662_12_parent_id, // dynamic
  var_700_6_do_receive_messages, // dynamic
  var_not, // extern
  var_701_6_do_cancel_tasks, // dynamic
  var_702_21_request, // dynamic
  var_any_of, // extern
  var_std__or, // extern
  var_733_10_request, // dynamic
  var_734_18_task, // dynamic
  var_734_24_mode, // dynamic
  var_734_30_body, // dynamic
  var_734_36_argument, // dynamic
  var_734_46_continuation, // dynamic
  var_EXIT_FAILURE, // extern
  var_parameter_count_of, // extern
  var_769_12_error_handler, // dynamic
  var_785_16_cancel_handler, // dynamic
  var_loop, // extern
  var_812_14_request, // dynamic
  var_813_14_task, // dynamic
  var_813_20_mode, // dynamic
  var_813_26_body, // dynamic
  var_813_32_argument, // dynamic
  var_813_42_continuation, // dynamic
  var_814_6_removed, // dynamic
  var_filter, // extern
  var_838_23_task, // dynamic
  var_841_16_receiver, // dynamic
  var_841_26_message, // dynamic
  var_default_value, // extern
  var_857_30_task, // dynamic
  var_true, // extern
  var_866_27_task, // dynamic
  var_878_23_task, // dynamic
  var_878_28_message, // dynamic
  var_string, // extern
  var_885_23_task, // dynamic
  var_928_23_request, // dynamic
  var_929_14_task, // dynamic
  var_929_20_mode, // dynamic
  var_929_26_body, // dynamic
  var_929_32_argument, // dynamic
  var_929_42_continuation, // dynamic
  var_930_6_messages, // dynamic
  var_938_30_request, // dynamic
  var_939_14_task, // dynamic
  var_939_20_mode, // dynamic
  var_939_26_body, // dynamic
  var_939_32_argument, // dynamic
  var_939_42_continuation, // dynamic
  var_STDERR_FILENO, // extern
  var_to_utf8, // extern
  var_967_25_request, // dynamic
  var_968_14_task, // dynamic
  var_968_20_mode, // dynamic
  var_968_26_body, // dynamic
  var_968_32_argument, // dynamic
  var_968_42_continuation, // dynamic
  var_986_21_mode, // dynamic
  var_989_17_something_to_do, // dynamic
  var_pass, // extern
  var_1005_27_something_to_do, // dynamic
  var_get_events, // extern
  var_1020_19_request, // dynamic
  var_1021_14_task, // dynamic
  var_1021_20_mode, // dynamic
  var_1021_26_body, // dynamic
  var_1021_32_argument, // dynamic
  var_1021_42_continuation, // dynamic
  var_1030_16_task, // dynamic
  var_1037_15_handler, // dynamic
  var_1037_24_handler_arguments, // dynamic
  var__END
};


static TAB_NUM t_func_std_types__error___generate_error_message[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 227_44_self
  // $message error_message_text_of(self)
  var_error_message_text_of, 1, LOCAL(2), 1, var_228_4_message,
  // $errno errno_of(self)
  var_errno_of, 1, LOCAL(2), 1, var_229_4_errno,
  // is_defined &message:
  var_is_defined, 1, var_229_4_errno, 1, LOCAL(1),
  // update_if errno.is_defined &message:
  var_update_if, 3, LOCAL(1), var_228_4_message, lambda_1, 1, var_228_4_message,
  // $failed_attribute failed_attribute_of(self)
  var_failed_attribute_of, 1, LOCAL(2), 1, var_233_4_failed_attribute,
  // is_defined &message:
  var_is_defined, 1, var_233_4_failed_attribute, 1, LOCAL(1),
  // update_if failed_attribute.is_defined &message:
  var_update_if, 3, LOCAL(1), var_228_4_message, lambda_2, 1, var_228_4_message,
  // $additional_information additional_error_information_of(self)
  var_additional_error_information_of, 1, LOCAL(2), 1, var_237_4_additional_information,
  // is_defined message:
  var_is_defined, 1, var_237_4_additional_information, 1, LOCAL(1),
  // update_if additional_information.is_defined message:
  var_update_if, 3, LOCAL(1), var_228_4_message, lambda_3, TAIL_CALL,
  POS(228, 3),
  POS(229, 3),
  POS(230, 19),
  POS(230, 3),
  POS(233, 3),
  POS(234, 30),
  POS(234, 3),
  POS(237, 3),
  POS(238, 36),
  POS(238, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__error___generate_error_message = {
  t_func_std_types__error___generate_error_message, NULL, 10, 1,
  {"227_44_self\000"}
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // append &message " - "
  var_append, 2, var_228_4_message, string_1, 1, var_228_4_message,
  // strerror(errno)
  var_strerror, 1, var_229_4_errno, 1, LOCAL(1),
  // append message strerror(errno)
  var_append, 2, var_228_4_message, LOCAL(1), TAIL_CALL,
  POS(231, 5),
  POS(232, 20),
  POS(232, 5)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // append &message " - "
  var_append, 2, var_228_4_message, string_1, 1, var_228_4_message,
  // append message failed_attribute
  var_append, 2, var_228_4_message, var_233_4_failed_attribute, TAIL_CALL,
  POS(235, 5),
  POS(236, 5)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  // append &message " ("
  var_append, 2, var_228_4_message, string_2, 1, var_228_4_message,
  // append &message additional_information
  var_append, 2, var_228_4_message, var_237_4_additional_information, 1, var_228_4_message,
  // push message ')'
  var_push, 2, var_228_4_message, chr_41, TAIL_CALL,
  POS(239, 5),
  POS(240, 5),
  POS(241, 5)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std_types__io_task___task_id_of[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 257_34_self
  // id_of(self)
  var_id_of, 1, LOCAL(2), 1, LOCAL(1),
  // -> id_of(self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(257, 43),
  POS(257, 40),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__io_task___task_id_of = {
  t_func_std_types__io_task___task_id_of, NULL, 2, 1,
  {"257_34_self\000"}
};

static TAB_NUM t_func_std_types__io_task___parent_of[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 258_33_self
  // $id parent_id_of(self)
  var_parent_id_of, 1, LOCAL(3), 1, var_259_4_id,
  // id != 0
  var_std__equal, 2, var_259_4_id, num_0, 1, LOCAL(1),
  // id != 0
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_4, lambda_5, TAIL_CALL,
  POS(259, 3),
  POS(261, 5),
  POS(261, 5),
  POS(260, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__io_task___parent_of = {
  t_func_std_types__io_task___parent_of, NULL, 4, 1,
  {"258_33_self\000"}
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  id
  LET, 1, var_259_4_id, TAIL_CALL,
  POS(262, 7)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(263, 7)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__io_task___children_of[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 265_35_self
  // child_ids_of(self)
  var_child_ids_of, 1, LOCAL(2), 1, LOCAL(1),
  // -> child_ids_of(self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(265, 44),
  POS(265, 41),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__io_task___children_of = {
  t_func_std_types__io_task___children_of, NULL, 2, 1,
  {"265_35_self\000"}
};

static TAB_NUM t_func_std_types__io_task___perform_io[] = {
  4, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 269_5_self
  MANDATORY_PARAMETER, LOCAL(2), // 270_5_body
  var_undefined, LOCAL(3), // 271_5_argument
  MANDATORY_PARAMETER, LOCAL(4), // 272_5_continuation
  // tuple self START_IO body argument continuation
  var_tuple, 5, LOCAL(1), uni_START_IO, LOCAL(2), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(274, 3),
  LOCAL(4),
  LOCAL(1),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__io_task___perform_io = {
  t_func_std_types__io_task___perform_io, NULL, 1, 4,
  {"272_5_continuation\000", "269_5_self\000", "271_5_argument\000", "270_5_body\000"}
};

static TAB_NUM t_func_std_types__io_task___pause[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 276_29_self
  LOCAL(2), // 276_34_continuation
  // tuple self COMPUTE undefined undefined continuation
  var_tuple, 5, LOCAL(1), uni_COMPUTE, var_undefined, var_undefined, LOCAL(2), TAIL_CALL,
  POS(277, 3),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__io_task___pause = {
  t_func_std_types__io_task___pause, NULL, 1, 2,
  {"276_29_self\000", "276_34_continuation\000"}
};

static TAB_NUM t_func_std_types__io_task___wait_for_message[] = {
  2, // locals
  2, // parameters
  var_279_40_self,
  var_279_45_continuation,
  // inbound_messages_of(self).is_empty
  var_inbound_messages_of, 1, var_279_40_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_6, lambda_7, TAIL_CALL,
  POS(281, 5),
  POS(281, 31),
  POS(280, 3)
};

static FUNCTION_INFO i_func_std_types__io_task___wait_for_message = {
  t_func_std_types__io_task___wait_for_message, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // tuple(self WAIT undefined undefined continuation)
  var_tuple, 5, var_279_40_self, uni_WAIT, var_undefined, var_undefined, var_279_45_continuation, 1, LOCAL(1),
  //  tuple(self WAIT undefined undefined continuation)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(282, 8),
  POS(282, 7)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // tuple(self COMPUTE undefined undefined continuation)
  var_tuple, 5, var_279_40_self, uni_COMPUTE, var_undefined, var_undefined, var_279_45_continuation, 1, LOCAL(1),
  //  tuple(self COMPUTE undefined undefined continuation)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(283, 8),
  POS(283, 7)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__io_task___check_io[] = {
  4, // locals
  4, // parameters
  LOCAL(1), // 285_32_self
  LOCAL(2), // 285_37_io
  LOCAL(3), // 285_40_body
  LOCAL(4), // 285_45_argument
  // -> CHECK_IO self io body argument
  LET, 5, uni_CHECK_IO, LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(286, 3),
  LOCAL(3),
  LOCAL(4),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__io_task___check_io = {
  t_func_std_types__io_task___check_io, NULL, 1, 4,
  {"285_40_body\000", "285_45_argument\000", "285_32_self\000", "285_37_io\000"}
};

static TAB_NUM t_func_std_types__io_task___performed_io[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 290_5_self
  MANDATORY_PARAMETER, LOCAL(2), // 291_5_io
  var_undefined, LOCAL(3), // 292_5_argument
  // -> COMPUTE self io undefined argument
  LET, 5, uni_COMPUTE, LOCAL(1), LOCAL(2), var_undefined, LOCAL(3), TAIL_CALL,
  POS(294, 3),
  LOCAL(2),
  LOCAL(3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__io_task___performed_io = {
  t_func_std_types__io_task___performed_io, NULL, 1, 3,
  {"291_5_io\000", "292_5_argument\000", "290_5_self\000"}
};

static TAB_NUM t_func_std_types__io_task___recheck_io[] = {
  3, // locals
  3, // parameters
  LOCAL(1), // 296_34_self
  LOCAL(2), // 296_39_body
  LOCAL(3), // 296_44_argument
  // -> CHECK_IO self body argument
  LET, 4, uni_CHECK_IO, LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(297, 3),
  LOCAL(2),
  LOCAL(3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__io_task___recheck_io = {
  t_func_std_types__io_task___recheck_io, NULL, 1, 3,
  {"296_39_body\000", "296_44_argument\000", "296_34_self\000"}
};

static TAB_NUM t_func_std_types__io_task___complete_io[] = {
  3, // locals
  3, // parameters
  LOCAL(1), // 299_35_self
  LOCAL(2), // 299_40_body
  LOCAL(3), // 299_45_argument
  // -> COMPLETE_IO self body argument
  LET, 4, uni_COMPLETE_IO, LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(300, 3),
  LOCAL(1),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__io_task___complete_io = {
  t_func_std_types__io_task___complete_io, NULL, 1, 3,
  {"299_35_self\000", "299_40_body\000", "299_45_argument\000"}
};

static TAB_NUM t_func_std_types__io_task___checked_io[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 302_34_self
  LOCAL(2), // 302_39_argument
  // -> COMPUTE self undefined argument
  LET, 4, uni_COMPUTE, LOCAL(1), var_undefined, LOCAL(2), TAIL_CALL,
  POS(303, 3),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__io_task___checked_io = {
  t_func_std_types__io_task___checked_io, NULL, 1, 2,
  {"302_34_self\000", "302_39_argument\000"}
};

static TAB_NUM t_func_std_types__io_task___log[] = {
  3, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 305_27_self
  REST_PARAMETER, LOCAL(3), // 305_32_argument
  // $str create_string(argument)
  var_create_string, 1, LOCAL(3), 1, var_306_4_str,
  // str .has_suffix. '@nl;'
  var_has_suffix, 2, var_306_4_str, chr_10, 1, LOCAL(1),
  // !str
  var_if, 3, LOCAL(1), lambda_8, lambda_9, 1, var_306_4_str,
  // log_messages_of str
  var_log_messages_of, 1, LOCAL(2), 1, LOCAL(1),
  // push &self.log_messages_of str
  var_push, 2, LOCAL(1), var_306_4_str, 1, LOCAL(1),
  // self.log_messages_of str
  LET, -1, LOCAL(2), var_log_messages_of, LOCAL(1), LOCAL(2),
  // -> self
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(306, 3),
  POS(309, 7),
  POS(307, 3),
  POS(312, 14),
  POS(312, 3),
  POS(312, 9),
  POS(313, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__io_task___log = {
  t_func_std_types__io_task___log, NULL, 7, 2,
  {"305_32_argument\000", "305_27_self\000"}
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_306_4_str, TAIL_CALL,
  POS(310, 9)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // push(str '@nl;')
  var_push, 2, var_306_4_str, chr_10, 1, LOCAL(1),
  //  push(str '@nl;')
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(311, 10),
  POS(311, 9)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__io_task___send[] = {
  2, // locals
  3, // parameters
  var_315_28_self,
  var_315_33_receiver,
  var_315_42_message,
  // is_a_list && receiver.is_empty
  var_is_a_list, 1, var_315_33_receiver, 1, LOCAL(1),
  // is_a_list && receiver.is_empty
  var_std__and, 2, LOCAL(1), lambda_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_11, lambda_12, TAIL_CALL,
  POS(317, 14),
  POS(317, 14),
  POS(316, 3)
};

static FUNCTION_INFO i_func_std_types__io_task___send = {
  t_func_std_types__io_task___send, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_315_33_receiver, 1, LOCAL(1),
  // receiver.is_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(317, 36),
  POS(317, 27)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_315_28_self, TAIL_CALL,
  POS(318, 7)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  2, // locals
  0, // parameters
  // outbound_messages_of tuple(receiver message)
  var_outbound_messages_of, 1, var_315_28_self, 1, LOCAL(1),
  // tuple(receiver message)
  var_tuple, 2, var_315_33_receiver, var_315_42_message, 1, LOCAL(2),
  // push &self.outbound_messages_of tuple(receiver message)
  var_push, 2, LOCAL(1), LOCAL(2), 1, LOCAL(1),
  // self.outbound_messages_of tuple(receiver message)
  LET, -1, var_315_28_self, var_outbound_messages_of, LOCAL(1), var_315_28_self,
  // -> self
  LET, 1, var_315_28_self, TAIL_CALL,
  POS(320, 18),
  POS(320, 39),
  POS(320, 7),
  POS(320, 13),
  POS(321, 7)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 5, 0,
  {}
};

static TAB_NUM t_func_std_types__io_task___receive[] = {
  2, // locals
  1, // parameters
  var_323_31_self,
  // inbound_messages_of(self).is_empty
  var_inbound_messages_of, 1, var_323_31_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_13, lambda_14, TAIL_CALL,
  POS(325, 5),
  POS(325, 31),
  POS(324, 3)
};

static FUNCTION_INFO i_func_std_types__io_task___receive = {
  t_func_std_types__io_task___receive, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_323_31_self, var_undefined, TAIL_CALL,
  POS(326, 7)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_14[] = {
  2, // locals
  0, // parameters
  // inbound_messages_of $message
  var_inbound_messages_of, 1, var_323_31_self, 1, LOCAL(1),
  // get &self.inbound_messages_of $message
  var_get, 1, LOCAL(1), 2, LOCAL(1), LOCAL(2),
  // self.inbound_messages_of $message
  LET, -1, var_323_31_self, var_inbound_messages_of, LOCAL(1), var_323_31_self,
  // -> self message
  LET, 2, var_323_31_self, LOCAL(2), TAIL_CALL,
  POS(328, 17),
  POS(328, 7),
  POS(328, 12),
  POS(329, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 4, 1,
  {"328_38_message\000"}
};

static TAB_NUM t_func_std_types__io_task___cancel[] = {
  1, // locals
  2, // parameters
  var_333_5_self,
  var_334_5_task_id,
  // is_an_integer:
  var_is_an_integer, 1, var_334_5_task_id, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_task_id_is_an_integer, lambda_15, TAIL_CALL,
  POS(337, 13),
  POS(336, 3)
};

static FUNCTION_INFO i_func_std_types__io_task___cancel = {
  t_func_std_types__io_task___cancel, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_task_id_is_an_integer[] = {
  1, // locals
  0, // parameters
  // cancel_requests_of task_id
  var_cancel_requests_of, 1, var_333_5_self, 1, LOCAL(1),
  // push &self.cancel_requests_of task_id
  var_push, 2, LOCAL(1), var_334_5_task_id, 1, LOCAL(1),
  // self.cancel_requests_of task_id
  LET, -1, var_333_5_self, var_cancel_requests_of, LOCAL(1), var_333_5_self,
  // -> self
  LET, 1, var_333_5_self, TAIL_CALL,
  POS(338, 18),
  POS(338, 7),
  POS(338, 13),
  POS(339, 7)
};

static FUNCTION_INFO i_lambda_task_id_is_an_integer = {
  t_lambda_task_id_is_an_integer, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // cancel_requests_of task_id.to_list
  var_cancel_requests_of, 1, var_333_5_self, 1, LOCAL(1),
  // to_list
  var_to_list, 1, var_334_5_task_id, 1, LOCAL(2),
  // append &self.cancel_requests_of task_id.to_list
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(1),
  // self.cancel_requests_of task_id.to_list
  LET, -1, var_333_5_self, var_cancel_requests_of, LOCAL(1), var_333_5_self,
  // -> self
  LET, 1, var_333_5_self, TAIL_CALL,
  POS(341, 20),
  POS(341, 47),
  POS(341, 7),
  POS(341, 15),
  POS(342, 7)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 5, 0,
  {}
};

static TAB_NUM t_func_std_types__io_task___on_exit[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 346_5_self
  MANDATORY_PARAMETER, LOCAL(4), // 347_5_handler
  var_undefined, LOCAL(5), // 348_5_argument
  // exit_handlers_of tuple(handler argument)
  var_exit_handlers_of, 1, LOCAL(3), 1, LOCAL(1),
  // tuple(handler argument)
  var_tuple, 2, LOCAL(4), LOCAL(5), 1, LOCAL(2),
  // put &self.exit_handlers_of tuple(handler argument)
  var_put, 2, LOCAL(1), LOCAL(2), 1, LOCAL(1),
  // self.exit_handlers_of tuple(handler argument)
  LET, -1, LOCAL(3), var_exit_handlers_of, LOCAL(1), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(350, 13),
  POS(350, 30),
  POS(350, 3),
  POS(350, 8),
  POS(351, 3),
  LOCAL(3),
  LOCAL(5),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__io_task___on_exit = {
  t_func_std_types__io_task___on_exit, NULL, 5, 3,
  {"346_5_self\000", "348_5_argument\000", "347_5_handler\000"}
};

static TAB_NUM t_func_std_types__io_task___on_error[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 353_32_self
  LOCAL(2), // 353_37_handler
  // self.error_handler_of handler
  LET, -1, LOCAL(1), var_error_handler_of, LOCAL(2), LOCAL(1),
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(354, 4),
  POS(355, 3),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__io_task___on_error = {
  t_func_std_types__io_task___on_error, NULL, 2, 2,
  {"353_32_self\000", "353_37_handler\000"}
};

static TAB_NUM t_func_std_types__io_task___on_cancel[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 357_33_self
  LOCAL(2), // 357_38_handler
  // self.cancel_handler_of handler
  LET, -1, LOCAL(1), var_cancel_handler_of, LOCAL(2), LOCAL(1),
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(358, 4),
  POS(359, 3),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__io_task___on_cancel = {
  t_func_std_types__io_task___on_cancel, NULL, 2, 2,
  {"357_33_self\000", "357_38_handler\000"}
};

static TAB_NUM t_func_std_types__io_task___load[] = {
  3, // locals
  3, // parameters
  LOCAL(1), // 363_28_self
  LOCAL(2), // 363_33_my_filename
  LOCAL(3), // 363_45_continuation
  // perform_io self load_request my_filename continuation
  var_perform_io, 4, LOCAL(1), func_load_request, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(364, 3),
  LOCAL(1),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__io_task___load = {
  t_func_std_types__io_task___load, NULL, 1, 3,
  {"363_28_self\000", "363_45_continuation\000", "363_33_my_filename\000"}
};

static TAB_NUM t_func_load_request[] = {
  1, // locals
  3, // parameters
  var_366_19_task,
  var_366_24_io,
  var_366_27_filename,
  // is_cancelled: # we must not start an I/O operation!
  var_is_cancelled, 1, var_366_19_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_task_is_cancelled, lambda_16, IO_TAIL_CALL,
  POS(368, 12),
  POS(367, 5)
};

static FUNCTION_INFO i_func_load_request = {
  t_func_load_request, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_task_is_cancelled[] = {
  0, // locals
  0, // parameters
  // performed_io task io "" # we didn't read a single byte ...
  var_performed_io, 3, var_366_19_task, var_366_24_io, string_3, TAIL_CALL,
  POS(369, 9)
};

static FUNCTION_INFO i_lambda_task_is_cancelled = {
  t_lambda_task_is_cancelled, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // open! $fd filename "r"
  var_open, 2, var_366_27_filename, str_r, IO_CALL(1), var_371_16_fd,
  // is_an_error:
  var_is_an_error, 1, var_371_16_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_fd_is_an_error, lambda_17, TAIL_CALL,
  POS(371, 9),
  POS(373, 14),
  POS(372, 9)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_fd_is_an_error[] = {
  2, // locals
  0, // parameters
  // !fd.additional_error_information_of "
  var_std__string, 3, str_load, var_366_27_filename, string_4, 1, LOCAL(2),
  // fd.additional_error_information_of "
  LET, -1, var_371_16_fd, var_additional_error_information_of, LOCAL(2), var_371_16_fd,
  // performed_io task io fd
  var_performed_io, 3, var_366_19_task, var_366_24_io, var_371_16_fd, TAIL_CALL,
  POS(374, 13),
  POS(374, 14),
  POS(376, 13)
};

static FUNCTION_INFO i_lambda_fd_is_an_error = {
  t_lambda_fd_is_an_error, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // start_reading_from &io fd
  var_start_reading_from, 2, var_366_24_io, var_371_16_fd, 1, var_366_24_io,
  // tuple(fd "")
  var_tuple, 2, var_371_16_fd, string_3, 1, LOCAL(1),
  // check_io task io check_load_request tuple(fd "")
  var_check_io, 4, var_366_19_task, var_366_24_io, func_check_load_request, LOCAL(1), TAIL_CALL,
  POS(378, 13),
  POS(379, 49),
  POS(379, 13)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_check_load_request[] = {
  1, // locals
  3, // parameters
  var_381_25_task,
  var_381_30_events,
  var_381_37_argument,
  // argument $fd $buf
  var_381_37_argument, 0, 2, var_382_15_fd, var_382_19_buf,
  // is_cancelled: # we are called as a start-I/O-handler!
  var_is_cancelled, 1, var_381_25_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_task_is_cancelled, lambda_19, IO_TAIL_CALL,
  POS(382, 5),
  POS(384, 12),
  POS(383, 5)
};

static FUNCTION_INFO i_func_check_load_request = {
  t_func_check_load_request, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_2_task_is_cancelled[] = {
  2, // locals
  0, // parameters
  // $io events
  LET, 1, var_381_30_events, 1, LOCAL(2),
  // stop_reading_from &io fd
  var_stop_reading_from, 2, LOCAL(2), var_382_15_fd, 1, LOCAL(2),
  // try $_ignore_error: close! fd
  var_try, 1, lambda_18, IO_CALL(1), LOCAL(1),
  // performed_io task io buf # return the partial read data
  var_performed_io, 3, var_381_25_task, LOCAL(2), var_382_19_buf, TAIL_CALL,
  POS(385, 9),
  POS(386, 9),
  POS(387, 9),
  POS(388, 9),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_2_task_is_cancelled = {
  t_lambda_2_task_is_cancelled, NULL, 4, 1,
  {"385_10_io\000"}
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_382_15_fd, IO_TAIL_CALL,
  POS(387, 29)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  // for_each events
  var_for_each, 3, var_381_30_events, lambda_20, lambda_25, TAIL_CALL,
  POS(390, 9)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_20[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 391_14_event
  // event $type $efd $data
  LOCAL(1), 0, 3, LOCAL(2), var_392_26_efd, var_392_31_data,
  // case type
  var_case, 6, LOCAL(2), var_READ, lambda_READ, var_READ_FAILED, lambda_READ_FAILED, var_next, TAIL_CALL,
  POS(392, 13),
  POS(393, 13),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 2, 2,
  {"391_14_event\000", "392_20_type\000"}
};

static TAB_NUM t_lambda_READ[] = {
  1, // locals
  0, // parameters
  // efd == fd:
  var_std__equal, 2, var_392_26_efd, var_382_15_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21, var_next, TAIL_CALL,
  POS(396, 19),
  POS(395, 17)
};

static FUNCTION_INFO i_lambda_READ = {
  t_lambda_READ, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // data == "":
  var_std__equal, 2, var_392_31_data, string_3, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_22, lambda_23, TAIL_CALL,
  POS(398, 23),
  POS(397, 21)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  // complete_io task complete_load_request argument
  var_complete_io, 3, var_381_25_task, func_complete_load_request, var_381_37_argument, TAIL_CALL,
  POS(399, 25)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  0, // parameters
  // append(buf data))
  var_append, 2, var_382_19_buf, var_392_31_data, 1, LOCAL(1),
  // tuple(fd append(buf data))
  var_tuple, 2, var_382_15_fd, LOCAL(1), 1, LOCAL(2),
  // recheck_io
  var_recheck_io, 3, var_381_25_task, func_check_load_request, LOCAL(2), TAIL_CALL,
  POS(402, 60),
  POS(402, 51),
  POS(401, 25)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_READ_FAILED[] = {
  1, // locals
  0, // parameters
  // efd == fd:
  var_std__equal, 2, var_392_26_efd, var_382_15_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_24, var_next, TAIL_CALL,
  POS(406, 19),
  POS(405, 17)
};

static FUNCTION_INFO i_lambda_READ_FAILED = {
  t_lambda_READ_FAILED, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  0, // parameters
  // tuple(fd data)
  var_tuple, 2, var_382_15_fd, var_392_31_data, 1, LOCAL(1),
  // complete_io task try_close_file tuple(fd data)
  var_complete_io, 3, var_381_25_task, func_try_close_file, LOCAL(1), TAIL_CALL,
  POS(407, 53),
  POS(407, 21)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  // recheck_io task check_load_request argument
  var_recheck_io, 3, var_381_25_task, func_check_load_request, var_381_37_argument, TAIL_CALL,
  POS(411, 13)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_complete_load_request[] = {
  5, // locals
  3, // parameters
  LOCAL(2), // 413_28_task
  LOCAL(3), // 413_33_io
  LOCAL(4), // 413_36_argument
  // argument $fd $buf
  LOCAL(4), 0, 2, var_414_15_fd, LOCAL(5),
  // stop_reading_from &io fd
  var_stop_reading_from, 2, LOCAL(3), var_414_15_fd, 1, LOCAL(3),
  // try $_ignore_error: close! fd
  var_try, 1, lambda_26, IO_CALL(1), LOCAL(1),
  // performed_io task io buf
  var_performed_io, 3, LOCAL(2), LOCAL(3), LOCAL(5), TAIL_CALL,
  POS(414, 5),
  POS(415, 5),
  POS(416, 5),
  POS(417, 5),
  LOCAL(5),
  LOCAL(3),
  LOCAL(2),
  LOCAL(4)
};

static FUNCTION_INFO i_func_complete_load_request = {
  t_func_complete_load_request, NULL, 4, 4,
  {"414_19_buf\000", "413_33_io\000", "413_28_task\000", "413_36_argument\000"}
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_414_15_fd, IO_TAIL_CALL,
  POS(416, 25)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_try_close_file[] = {
  5, // locals
  3, // parameters
  LOCAL(2), // 419_21_task
  LOCAL(3), // 419_26_io
  LOCAL(4), // 419_29_argument
  // argument $fd $READ_FAILED
  LOCAL(4), 0, 2, var_420_15_fd, LOCAL(5),
  // stop_reading_from &io fd
  var_stop_reading_from, 2, LOCAL(3), var_420_15_fd, 1, LOCAL(3),
  // try $_ignore_error: close! fd
  var_try, 1, lambda_27, IO_CALL(1), LOCAL(1),
  // performed_io task io READ_FAILED # return the error returned from <read>
  var_performed_io, 3, LOCAL(2), LOCAL(3), LOCAL(5), TAIL_CALL,
  POS(420, 5),
  POS(421, 5),
  POS(422, 5),
  POS(423, 5),
  LOCAL(5),
  LOCAL(4),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_try_close_file = {
  t_func_try_close_file, NULL, 4, 4,
  {"420_19_READ_FAILED\000", "419_29_argument\000", "419_26_io\000", "419_21_task\000"}
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_420_15_fd, IO_TAIL_CALL,
  POS(422, 25)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__io_task___save[] = {
  5, // locals
  4, // parameters
  LOCAL(2), // 425_28_self
  LOCAL(3), // 425_33_my_filename
  LOCAL(4), // 425_45_my_data
  LOCAL(5), // 425_53_continuation
  // tuple(my_filename my_data) continuation
  var_tuple, 2, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // perform_io self save_request tuple(my_filename my_data) continuation
  var_perform_io, 4, LOCAL(2), func_save_request, LOCAL(1), LOCAL(5), TAIL_CALL,
  POS(426, 32),
  POS(426, 3),
  LOCAL(3),
  LOCAL(5),
  LOCAL(2),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__io_task___save = {
  t_func_std_types__io_task___save, NULL, 2, 4,
  {"425_33_my_filename\000", "425_53_continuation\000", "425_28_self\000", "425_45_my_data\000"}
};

static TAB_NUM t_func_save_request[] = {
  2, // locals
  3, // parameters
  var_428_19_task,
  var_428_24_io,
  LOCAL(2), // 428_27_argument
  // argument $filename $data
  LOCAL(2), 0, 2, var_429_15_filename, var_429_25_data,
  // is_cancelled: # we must not start an I/O operation!
  var_is_cancelled, 1, var_428_19_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3_task_is_cancelled, lambda_28, IO_TAIL_CALL,
  POS(429, 5),
  POS(431, 12),
  POS(430, 5),
  LOCAL(2)
};

static FUNCTION_INFO i_func_save_request = {
  t_func_save_request, NULL, 3, 1,
  {"428_27_argument\000"}
};

static TAB_NUM t_lambda_3_task_is_cancelled[] = {
  0, // locals
  0, // parameters
  // performed_io task io data # we didn't write a single byte ...
  var_performed_io, 3, var_428_19_task, var_428_24_io, var_429_25_data, TAIL_CALL,
  POS(432, 9)
};

static FUNCTION_INFO i_lambda_3_task_is_cancelled = {
  t_lambda_3_task_is_cancelled, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // open! $fd filename "w"
  var_open, 2, var_429_15_filename, str_w, IO_CALL(1), var_434_16_fd,
  // is_an_error:
  var_is_an_error, 1, var_434_16_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_fd_is_an_error, lambda_29, TAIL_CALL,
  POS(434, 9),
  POS(436, 14),
  POS(435, 9)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_2_fd_is_an_error[] = {
  2, // locals
  0, // parameters
  // !fd.additional_error_information_of "
  var_std__string, 3, str_save, var_429_15_filename, string_4, 1, LOCAL(2),
  // fd.additional_error_information_of "
  LET, -1, var_434_16_fd, var_additional_error_information_of, LOCAL(2), var_434_16_fd,
  // performed_io task io fd
  var_performed_io, 3, var_428_19_task, var_428_24_io, var_434_16_fd, TAIL_CALL,
  POS(437, 13),
  POS(437, 14),
  POS(439, 13)
};

static FUNCTION_INFO i_lambda_2_fd_is_an_error = {
  t_lambda_2_fd_is_an_error, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  // write &io fd data
  var_write, 3, var_428_24_io, var_434_16_fd, var_429_25_data, 1, var_428_24_io,
  // check_io task io check_save_request fd
  var_check_io, 4, var_428_19_task, var_428_24_io, func_check_save_request, var_434_16_fd, TAIL_CALL,
  POS(441, 13),
  POS(442, 13)
};

static FUNCTION_INFO i_lambda_29 = {
  t_lambda_29, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_check_save_request[] = {
  1, // locals
  3, // parameters
  var_444_25_task,
  var_444_30_events,
  var_444_37_fd,
  // is_cancelled: # we are called as a start-I/O-handler!
  var_is_cancelled, 1, var_444_25_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_4_task_is_cancelled, lambda_31, IO_TAIL_CALL,
  POS(446, 12),
  POS(445, 5)
};

static FUNCTION_INFO i_func_check_save_request = {
  t_func_check_save_request, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_4_task_is_cancelled[] = {
  3, // locals
  0, // parameters
  // $io events
  LET, 1, var_444_30_events, 1, LOCAL(2),
  // cancel_write &io $unwritten_text fd
  var_cancel_write, 2, LOCAL(2), var_444_37_fd, 2, LOCAL(2), LOCAL(3),
  // try $_ignore_error: close! fd
  var_try, 1, lambda_30, IO_CALL(1), LOCAL(1),
  // performed_io task io unwritten_text # return the not yet written text
  var_performed_io, 3, var_444_25_task, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(447, 9),
  POS(448, 9),
  POS(449, 9),
  POS(450, 9),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_4_task_is_cancelled = {
  t_lambda_4_task_is_cancelled, NULL, 4, 2,
  {"447_10_io\000", "448_27_unwritten_text\000"}
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_444_37_fd, IO_TAIL_CALL,
  POS(449, 29)
};

static FUNCTION_INFO i_lambda_30 = {
  t_lambda_30, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  // for_each events
  var_for_each, 3, var_444_30_events, lambda_32, lambda_35, TAIL_CALL,
  POS(452, 9)
};

static FUNCTION_INFO i_lambda_31 = {
  t_lambda_31, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_32[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 453_14_event
  // event $type $efd $data
  LOCAL(1), 0, 3, LOCAL(2), var_454_26_efd, var_454_31_data,
  // case type
  var_case, 6, LOCAL(2), var_WRITE_COMPLETED, lambda_WRITE_COMPLETED, var_WRITE_FAILED, lambda_WRITE_FAILED, var_next, TAIL_CALL,
  POS(454, 13),
  POS(455, 13),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_32 = {
  t_lambda_32, NULL, 2, 2,
  {"453_14_event\000", "454_20_type\000"}
};

static TAB_NUM t_lambda_WRITE_COMPLETED[] = {
  1, // locals
  0, // parameters
  // efd == fd:
  var_std__equal, 2, var_454_26_efd, var_444_37_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_33, var_next, TAIL_CALL,
  POS(458, 19),
  POS(457, 17)
};

static FUNCTION_INFO i_lambda_WRITE_COMPLETED = {
  t_lambda_WRITE_COMPLETED, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  // complete_io task complete_save_request fd
  var_complete_io, 3, var_444_25_task, func_complete_save_request, var_444_37_fd, TAIL_CALL,
  POS(459, 21)
};

static FUNCTION_INFO i_lambda_33 = {
  t_lambda_33, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_WRITE_FAILED[] = {
  1, // locals
  0, // parameters
  // efd == fd:
  var_std__equal, 2, var_454_26_efd, var_444_37_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, var_next, TAIL_CALL,
  POS(463, 19),
  POS(462, 17)
};

static FUNCTION_INFO i_lambda_WRITE_FAILED = {
  t_lambda_WRITE_FAILED, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // tuple(fd data)
  var_tuple, 2, var_444_37_fd, var_454_31_data, 1, LOCAL(1),
  // complete_io task try_close_file tuple(fd data)
  var_complete_io, 3, var_444_25_task, func_2_try_close_file, LOCAL(1), TAIL_CALL,
  POS(464, 53),
  POS(464, 21)
};

static FUNCTION_INFO i_lambda_34 = {
  t_lambda_34, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  // recheck_io task check_save_request fd
  var_recheck_io, 3, var_444_25_task, func_check_save_request, var_444_37_fd, TAIL_CALL,
  POS(468, 13)
};

static FUNCTION_INFO i_lambda_35 = {
  t_lambda_35, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_complete_save_request[] = {
  3, // locals
  3, // parameters
  LOCAL(2), // 470_28_task
  LOCAL(3), // 470_33_io
  var_470_36_fd,
  // try $_ignore_error: close! fd
  var_try, 1, lambda_36, IO_CALL(1), LOCAL(1),
  // performed_io task io undefined
  var_performed_io, 3, LOCAL(2), LOCAL(3), var_undefined, TAIL_CALL,
  POS(471, 5),
  POS(472, 5),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_complete_save_request = {
  t_func_complete_save_request, NULL, 2, 2,
  {"470_28_task\000", "470_33_io\000"}
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_470_36_fd, IO_TAIL_CALL,
  POS(471, 25)
};

static FUNCTION_INFO i_lambda_36 = {
  t_lambda_36, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_2_try_close_file[] = {
  5, // locals
  3, // parameters
  LOCAL(2), // 474_21_task
  LOCAL(3), // 474_26_io
  LOCAL(4), // 474_29_argument
  // argument $fd $WRITE_FAILED
  LOCAL(4), 0, 2, var_475_15_fd, LOCAL(5),
  // try $_ignore_error: close! fd
  var_try, 1, lambda_37, IO_CALL(1), LOCAL(1),
  // performed_io task io WRITE_FAILED # return the error returned from <write>
  var_performed_io, 3, LOCAL(2), LOCAL(3), LOCAL(5), TAIL_CALL,
  POS(475, 5),
  POS(476, 5),
  POS(477, 5),
  LOCAL(2),
  LOCAL(5),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_2_try_close_file = {
  t_func_2_try_close_file, NULL, 3, 4,
  {"474_21_task\000", "475_19_WRITE_FAILED\000", "474_26_io\000", "474_29_argument\000"}
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_475_15_fd, IO_TAIL_CALL,
  POS(476, 25)
};

static FUNCTION_INFO i_lambda_37 = {
  t_lambda_37, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__io_task___read[] = {
  5, // locals
  4, // parameters
  LOCAL(2), // 483_5_self
  LOCAL(3), // 484_5_my_fd
  LOCAL(4), // 485_5_my_length
  LOCAL(5), // 486_5_continuation
  // tuple(my_fd my_length) continuation
  var_tuple, 2, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // perform_io self start_read_request tuple(my_fd my_length) continuation
  var_perform_io, 4, LOCAL(2), func_start_read_request, LOCAL(1), LOCAL(5), TAIL_CALL,
  POS(488, 38),
  POS(488, 3),
  LOCAL(4),
  LOCAL(2),
  LOCAL(3),
  LOCAL(5)
};

static FUNCTION_INFO i_func_std_types__io_task___read = {
  t_func_std_types__io_task___read, NULL, 2, 4,
  {"485_5_my_length\000", "483_5_self\000", "484_5_my_fd\000", "486_5_continuation\000"}
};

static TAB_NUM t_func_start_read_request[] = {
  1, // locals
  3, // parameters
  var_490_25_task,
  var_490_30_io,
  var_490_33_argument,
  // is_cancelled: # we must not start an I/O operation!
  var_is_cancelled, 1, var_490_25_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_5_task_is_cancelled, lambda_38, TAIL_CALL,
  POS(492, 12),
  POS(491, 5)
};

static FUNCTION_INFO i_func_start_read_request = {
  t_func_start_read_request, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_5_task_is_cancelled[] = {
  0, // locals
  0, // parameters
  // performed_io task io "" # we didn't read a single byte ...
  var_performed_io, 3, var_490_25_task, var_490_30_io, string_3, TAIL_CALL,
  POS(493, 9)
};

static FUNCTION_INFO i_lambda_5_task_is_cancelled = {
  t_lambda_5_task_is_cancelled, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_38[] = {
  3, // locals
  0, // parameters
  // argument $fd $length
  var_490_33_argument, 0, 2, LOCAL(2), LOCAL(3),
  // start_reading_from &io fd
  var_start_reading_from, 2, var_490_30_io, LOCAL(2), 1, var_490_30_io,
  // tuple(fd length "")
  var_tuple, 3, LOCAL(2), LOCAL(3), string_3, 1, LOCAL(1),
  // check_io task io check_read_request tuple(fd length "")
  var_check_io, 4, var_490_25_task, var_490_30_io, func_check_read_request, LOCAL(1), TAIL_CALL,
  POS(495, 9),
  POS(496, 9),
  POS(497, 45),
  POS(497, 9),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_38 = {
  t_lambda_38, NULL, 4, 2,
  {"495_19_fd\000", "495_23_length\000"}
};

static TAB_NUM t_func_check_read_request[] = {
  1, // locals
  3, // parameters
  var_499_25_task,
  var_499_30_events,
  var_499_37_argument,
  // argument $fd $length $buf
  var_499_37_argument, 0, 3, var_500_15_fd, var_500_19_length, var_500_27_buf,
  // is_cancelled: # we are called as a start-I/O-handler!
  var_is_cancelled, 1, var_499_25_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6_task_is_cancelled, lambda_39, TAIL_CALL,
  POS(500, 5),
  POS(502, 12),
  POS(501, 5)
};

static FUNCTION_INFO i_func_check_read_request = {
  t_func_check_read_request, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_6_task_is_cancelled[] = {
  1, // locals
  0, // parameters
  // $io events
  LET, 1, var_499_30_events, 1, LOCAL(1),
  // stop_reading_from &io fd
  var_stop_reading_from, 2, LOCAL(1), var_500_15_fd, 1, LOCAL(1),
  // performed_io task io buf # return the partial read data
  var_performed_io, 3, var_499_25_task, LOCAL(1), var_500_27_buf, TAIL_CALL,
  POS(503, 9),
  POS(504, 9),
  POS(505, 9),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_6_task_is_cancelled = {
  t_lambda_6_task_is_cancelled, NULL, 3, 1,
  {"503_10_io\000"}
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  // for_each events
  var_for_each, 3, var_499_30_events, lambda_40, lambda_47, TAIL_CALL,
  POS(507, 9)
};

static FUNCTION_INFO i_lambda_39 = {
  t_lambda_39, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_40[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 508_14_event
  // event $type $efd $data
  LOCAL(3), 0, 3, LOCAL(4), var_509_26_efd, var_509_31_data,
  // type == READ && efd == fd next:
  var_std__equal, 2, LOCAL(4), var_READ, 1, LOCAL(1),
  // type == READ && efd == fd next:
  var_std__and, 2, LOCAL(1), lambda_41, 1, LOCAL(2),
  // if_not
  var_if_not, 3, LOCAL(2), var_next, lambda_42, TAIL_CALL,
  POS(509, 13),
  POS(511, 15),
  POS(511, 15),
  POS(510, 13),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_40 = {
  t_lambda_40, NULL, 4, 2,
  {"509_20_type\000", "508_14_event\000"}
};

static TAB_NUM t_lambda_41[] = {
  1, // locals
  0, // parameters
  // efd == fd next:
  var_std__equal, 2, var_509_26_efd, var_500_15_fd, 1, LOCAL(1),
  // efd == fd next:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(511, 31),
  POS(511, 31)
};

static FUNCTION_INFO i_lambda_41 = {
  t_lambda_41, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // data == "":
  var_std__equal, 2, var_509_31_data, string_3, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_43, lambda_44, TAIL_CALL,
  POS(513, 19),
  POS(512, 17)
};

static FUNCTION_INFO i_lambda_42 = {
  t_lambda_42, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_43[] = {
  1, // locals
  0, // parameters
  // tuple(fd buf)
  var_tuple, 2, var_500_15_fd, var_500_27_buf, 1, LOCAL(1),
  // complete_io task complete_read_request tuple(fd buf)
  var_complete_io, 3, var_499_25_task, func_complete_read_request, LOCAL(1), TAIL_CALL,
  POS(514, 60),
  POS(514, 21)
};

static FUNCTION_INFO i_lambda_43 = {
  t_lambda_43, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_44[] = {
  3, // locals
  0, // parameters
  // append &buf data
  var_append, 2, var_500_27_buf, var_509_31_data, 1, var_500_27_buf,
  // length_of(buf) >= length:
  var_length_of, 1, var_500_27_buf, 1, LOCAL(1),
  // length_of(buf) >= length:
  var_std__less, 2, LOCAL(1), var_500_19_length, 1, LOCAL(2),
  // length_of(buf) >= length:
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_45, lambda_46, TAIL_CALL,
  POS(516, 21),
  POS(518, 23),
  POS(518, 23),
  POS(518, 23),
  POS(517, 21)
};

static FUNCTION_INFO i_lambda_44 = {
  t_lambda_44, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_45[] = {
  1, // locals
  0, // parameters
  // tuple(fd buf)
  var_tuple, 2, var_500_15_fd, var_500_27_buf, 1, LOCAL(1),
  // complete_io task complete_read_request tuple(fd buf)
  var_complete_io, 3, var_499_25_task, func_complete_read_request, LOCAL(1), TAIL_CALL,
  POS(519, 64),
  POS(519, 25)
};

static FUNCTION_INFO i_lambda_45 = {
  t_lambda_45, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_46[] = {
  1, // locals
  0, // parameters
  // tuple(fd length buf)
  var_tuple, 3, var_500_15_fd, var_500_19_length, var_500_27_buf, 1, LOCAL(1),
  // recheck_io task check_read_request tuple(fd length buf)
  var_recheck_io, 3, var_499_25_task, func_check_read_request, LOCAL(1), TAIL_CALL,
  POS(521, 60),
  POS(521, 25)
};

static FUNCTION_INFO i_lambda_46 = {
  t_lambda_46, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  // recheck_io task check_read_request argument
  var_recheck_io, 3, var_499_25_task, func_check_read_request, var_499_37_argument, TAIL_CALL,
  POS(523, 13)
};

static FUNCTION_INFO i_lambda_47 = {
  t_lambda_47, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_complete_read_request[] = {
  5, // locals
  3, // parameters
  LOCAL(1), // 525_28_task
  LOCAL(2), // 525_33_io
  LOCAL(3), // 525_36_argument
  // argument $fd $buf
  LOCAL(3), 0, 2, LOCAL(4), LOCAL(5),
  // stop_reading_from &io fd
  var_stop_reading_from, 2, LOCAL(2), LOCAL(4), 1, LOCAL(2),
  // performed_io task io buf
  var_performed_io, 3, LOCAL(1), LOCAL(2), LOCAL(5), TAIL_CALL,
  POS(526, 5),
  POS(527, 5),
  POS(528, 5),
  LOCAL(1),
  LOCAL(2),
  LOCAL(5),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_complete_read_request = {
  t_func_complete_read_request, NULL, 3, 5,
  {"525_28_task\000", "525_33_io\000", "526_19_buf\000", "526_15_fd\000", "525_36_argument\000"}
};

static TAB_NUM t_func_std_types__io_task___write[] = {
  5, // locals
  4, // parameters
  LOCAL(2), // 530_29_self
  LOCAL(3), // 530_34_my_fd
  LOCAL(4), // 530_40_my_text
  LOCAL(5), // 530_48_continuation
  // tuple(my_fd my_text) continuation
  var_tuple, 2, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // perform_io self write_request tuple(my_fd my_text) continuation
  var_perform_io, 4, LOCAL(2), func_write_request, LOCAL(1), LOCAL(5), TAIL_CALL,
  POS(531, 33),
  POS(531, 3),
  LOCAL(2),
  LOCAL(5),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__io_task___write = {
  t_func_std_types__io_task___write, NULL, 2, 4,
  {"530_29_self\000", "530_48_continuation\000", "530_40_my_text\000", "530_34_my_fd\000"}
};

static TAB_NUM t_func_write_request[] = {
  2, // locals
  3, // parameters
  var_533_20_task,
  var_533_25_io,
  LOCAL(2), // 533_28_argument
  // argument $fd $text
  LOCAL(2), 0, 2, var_534_15_fd, var_534_19_text,
  // is_cancelled: # we must not start an I/O operation!
  var_is_cancelled, 1, var_533_20_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_7_task_is_cancelled, lambda_48, TAIL_CALL,
  POS(534, 5),
  POS(536, 12),
  POS(535, 5),
  LOCAL(2)
};

static FUNCTION_INFO i_func_write_request = {
  t_func_write_request, NULL, 3, 1,
  {"533_28_argument\000"}
};

static TAB_NUM t_lambda_7_task_is_cancelled[] = {
  0, // locals
  0, // parameters
  // performed_io task io text # we didn't write a single byte ...
  var_performed_io, 3, var_533_20_task, var_533_25_io, var_534_19_text, TAIL_CALL,
  POS(537, 9)
};

static FUNCTION_INFO i_lambda_7_task_is_cancelled = {
  t_lambda_7_task_is_cancelled, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  // write &io fd text
  var_write, 3, var_533_25_io, var_534_15_fd, var_534_19_text, 1, var_533_25_io,
  // check_io task io check_write_request fd
  var_check_io, 4, var_533_20_task, var_533_25_io, func_check_write_request, var_534_15_fd, TAIL_CALL,
  POS(539, 9),
  POS(540, 9)
};

static FUNCTION_INFO i_lambda_48 = {
  t_lambda_48, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_check_write_request[] = {
  1, // locals
  3, // parameters
  var_542_26_task,
  var_542_31_events,
  var_542_38_fd,
  // is_cancelled: # we are called as a start-I/O-handler!
  var_is_cancelled, 1, var_542_26_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8_task_is_cancelled, lambda_49, TAIL_CALL,
  POS(544, 12),
  POS(543, 5)
};

static FUNCTION_INFO i_func_check_write_request = {
  t_func_check_write_request, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_8_task_is_cancelled[] = {
  2, // locals
  0, // parameters
  // $io events
  LET, 1, var_542_31_events, 1, LOCAL(1),
  // cancel_write &io $unwritten_text fd
  var_cancel_write, 2, LOCAL(1), var_542_38_fd, 2, LOCAL(1), LOCAL(2),
  // performed_io task io unwritten_text # return the not yet written text
  var_performed_io, 3, var_542_26_task, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(545, 9),
  POS(546, 9),
  POS(547, 9),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_8_task_is_cancelled = {
  t_lambda_8_task_is_cancelled, NULL, 3, 2,
  {"546_27_unwritten_text\000", "545_10_io\000"}
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  // for_each events
  var_for_each, 3, var_542_31_events, lambda_50, lambda_53, TAIL_CALL,
  POS(549, 9)
};

static FUNCTION_INFO i_lambda_49 = {
  t_lambda_49, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_50[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 550_14_event
  // event $type $efd $_data
  LOCAL(3), 0, 3, LOCAL(4), var_551_26_efd, LOCAL(1),
  // type == WRITE_COMPLETED && efd == fd:
  var_std__equal, 2, LOCAL(4), var_WRITE_COMPLETED, 1, LOCAL(1),
  // type == WRITE_COMPLETED && efd == fd:
  var_std__and, 2, LOCAL(1), lambda_51, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_52, var_next, TAIL_CALL,
  POS(551, 13),
  POS(553, 15),
  POS(553, 15),
  POS(552, 13),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_50 = {
  t_lambda_50, NULL, 4, 2,
  {"550_14_event\000", "551_20_type\000"}
};

static TAB_NUM t_lambda_51[] = {
  1, // locals
  0, // parameters
  // efd == fd:
  var_std__equal, 2, var_551_26_efd, var_542_38_fd, 1, LOCAL(1),
  // efd == fd:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(553, 42),
  POS(553, 42)
};

static FUNCTION_INFO i_lambda_51 = {
  t_lambda_51, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  // checked_io task undefined
  var_checked_io, 2, var_542_26_task, var_undefined, TAIL_CALL,
  POS(554, 17)
};

static FUNCTION_INFO i_lambda_52 = {
  t_lambda_52, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  // recheck_io task check_write_request fd
  var_recheck_io, 3, var_542_26_task, func_check_write_request, var_542_38_fd, TAIL_CALL,
  POS(557, 13)
};

static FUNCTION_INFO i_lambda_53 = {
  t_lambda_53, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__io_task___join_process[] = {
  3, // locals
  3, // parameters
  LOCAL(1), // 559_36_self
  LOCAL(2), // 559_41_my_pid
  LOCAL(3), // 559_48_continuation
  // perform_io self join_process_request my_pid continuation
  var_perform_io, 4, LOCAL(1), func_join_process_request, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(560, 3),
  LOCAL(2),
  LOCAL(3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__io_task___join_process = {
  t_func_std_types__io_task___join_process, NULL, 1, 3,
  {"559_41_my_pid\000", "559_48_continuation\000", "559_36_self\000"}
};

static TAB_NUM t_func_join_process_request[] = {
  3, // locals
  3, // parameters
  LOCAL(1), // 562_27_task
  LOCAL(2), // 562_32_io
  LOCAL(3), // 562_35_pid
  // join_process &io pid
  var_join_process, 2, LOCAL(2), LOCAL(3), 1, LOCAL(2),
  // check_io task io join_process_request_pending pid
  var_check_io, 4, LOCAL(1), LOCAL(2), func_join_process_request_pending, LOCAL(3), TAIL_CALL,
  POS(563, 5),
  POS(564, 5),
  LOCAL(2),
  LOCAL(1),
  LOCAL(3)
};

static FUNCTION_INFO i_func_join_process_request = {
  t_func_join_process_request, NULL, 2, 3,
  {"562_32_io\000", "562_27_task\000", "562_35_pid\000"}
};

static TAB_NUM t_func_join_process_request_pending[] = {
  1, // locals
  3, // parameters
  var_566_35_task,
  LOCAL(1), // 566_40_events
  var_566_47_pid,
  // for_each events
  var_for_each, 3, LOCAL(1), lambda_54, lambda_57, TAIL_CALL,
  POS(567, 5),
  LOCAL(1)
};

static FUNCTION_INFO i_func_join_process_request_pending = {
  t_func_join_process_request_pending, NULL, 1, 1,
  {"566_40_events\000"}
};

static TAB_NUM t_lambda_54[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 568_10_event
  // event $type $epid $status
  LOCAL(3), 0, 3, LOCAL(4), var_569_22_epid, var_569_28_status,
  // type == PROCESS_JOINED && epid == pid:
  var_std__equal, 2, LOCAL(4), var_PROCESS_JOINED, 1, LOCAL(1),
  // type == PROCESS_JOINED && epid == pid:
  var_std__and, 2, LOCAL(1), lambda_55, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_56, var_next, TAIL_CALL,
  POS(569, 9),
  POS(571, 11),
  POS(571, 11),
  POS(570, 9),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_54 = {
  t_lambda_54, NULL, 4, 2,
  {"568_10_event\000", "569_16_type\000"}
};

static TAB_NUM t_lambda_55[] = {
  1, // locals
  0, // parameters
  // epid == pid:
  var_std__equal, 2, var_569_22_epid, var_566_47_pid, 1, LOCAL(1),
  // epid == pid:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(571, 37),
  POS(571, 37)
};

static FUNCTION_INFO i_lambda_55 = {
  t_lambda_55, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  // checked_io task status
  var_checked_io, 2, var_566_35_task, var_569_28_status, TAIL_CALL,
  POS(572, 13)
};

static FUNCTION_INFO i_lambda_56 = {
  t_lambda_56, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  // recheck_io task join_process_request_pending pid
  var_recheck_io, 3, var_566_35_task, func_join_process_request_pending, var_566_47_pid, TAIL_CALL,
  POS(575, 9)
};

static FUNCTION_INFO i_lambda_57 = {
  t_lambda_57, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__io_task___catch_signal[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 577_36_self
  LOCAL(2), // 577_41_continuation
  // perform_io self catch_signal_request undefined continuation
  var_perform_io, 4, LOCAL(1), func_catch_signal_request, var_undefined, LOCAL(2), TAIL_CALL,
  POS(578, 3),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__io_task___catch_signal = {
  t_func_std_types__io_task___catch_signal, NULL, 1, 2,
  {"577_41_continuation\000", "577_36_self\000"}
};

static TAB_NUM t_func_catch_signal_request[] = {
  3, // locals
  3, // parameters
  LOCAL(2), // 580_27_task
  LOCAL(3), // 580_32_io
  LOCAL(1),
  // start_catching_signals &io
  var_start_catching_signals, 1, LOCAL(3), 1, LOCAL(3),
  // check_io task io catch_signal_request_pending undefined
  var_check_io, 4, LOCAL(2), LOCAL(3), func_catch_signal_request_pending, var_undefined, TAIL_CALL,
  POS(581, 5),
  POS(582, 5),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_catch_signal_request = {
  t_func_catch_signal_request, NULL, 2, 2,
  {"580_27_task\000", "580_32_io\000"}
};

static TAB_NUM t_func_catch_signal_request_pending[] = {
  1, // locals
  3, // parameters
  var_584_35_task,
  var_584_40_events,
  LOCAL(1),
  // is_cancelled:
  var_is_cancelled, 1, var_584_35_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_9_task_is_cancelled, lambda_58, TAIL_CALL,
  POS(586, 12),
  POS(585, 5)
};

static FUNCTION_INFO i_func_catch_signal_request_pending = {
  t_func_catch_signal_request_pending, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_9_task_is_cancelled[] = {
  0, // locals
  0, // parameters
  // complete_io task cancel_catch_signal_request undefined
  var_complete_io, 3, var_584_35_task, func_cancel_catch_signal_request, var_undefined, TAIL_CALL,
  POS(587, 9)
};

static FUNCTION_INFO i_lambda_9_task_is_cancelled = {
  t_lambda_9_task_is_cancelled, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  0, // parameters
  // $signals empty_list
  LET, 1, var_empty_list, 1, var_589_10_signals,
  // for_each events
  var_for_each, 3, var_584_40_events, lambda_59, lambda_61, TAIL_CALL,
  POS(589, 9),
  POS(590, 9)
};

static FUNCTION_INFO i_lambda_58 = {
  t_lambda_58, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_59[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 591_14_event
  // event $type $_dummy $signal
  LOCAL(2), 0, 3, LOCAL(3), LOCAL(1), var_592_34_signal,
  // type == SIGNAL:
  var_std__equal, 2, LOCAL(3), var_SIGNAL, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_60, var_next, TAIL_CALL,
  POS(592, 13),
  POS(594, 15),
  POS(593, 13),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_59 = {
  t_lambda_59, NULL, 3, 2,
  {"592_20_type\000", "591_14_event\000"}
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  0, // parameters
  // push &signals signal
  var_push, 2, var_589_10_signals, var_592_34_signal, 1, var_589_10_signals,
  // next
  var_next, 0, TAIL_CALL,
  POS(595, 17),
  POS(596, 17)
};

static FUNCTION_INFO i_lambda_60 = {
  t_lambda_60, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_61[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_589_10_signals, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_signals_is_empty, lambda_62, TAIL_CALL,
  POS(600, 23),
  POS(599, 13)
};

static FUNCTION_INFO i_lambda_61 = {
  t_lambda_61, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_signals_is_empty[] = {
  0, // locals
  0, // parameters
  // recheck_io task catch_signal_request_pending undefined
  var_recheck_io, 3, var_584_35_task, func_catch_signal_request_pending, var_undefined, TAIL_CALL,
  POS(601, 17)
};

static FUNCTION_INFO i_lambda_signals_is_empty = {
  t_lambda_signals_is_empty, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_62[] = {
  0, // locals
  0, // parameters
  // complete_io task catch_signal_request_completed signals
  var_complete_io, 3, var_584_35_task, func_catch_signal_request_completed, var_589_10_signals, TAIL_CALL,
  POS(603, 17)
};

static FUNCTION_INFO i_lambda_62 = {
  t_lambda_62, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_cancel_catch_signal_request[] = {
  3, // locals
  3, // parameters
  LOCAL(2), // 605_34_task
  LOCAL(3), // 605_39_io
  LOCAL(1),
  // stop_catching_signals &io
  var_stop_catching_signals, 1, LOCAL(3), 1, LOCAL(3),
  // performed_io task io
  var_performed_io, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(606, 5),
  POS(607, 5),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_cancel_catch_signal_request = {
  t_func_cancel_catch_signal_request, NULL, 2, 2,
  {"605_39_io\000", "605_34_task\000"}
};

static TAB_NUM t_func_catch_signal_request_completed[] = {
  3, // locals
  3, // parameters
  LOCAL(1), // 609_37_task
  LOCAL(2), // 609_42_io
  LOCAL(3), // 609_45_signals
  // stop_catching_signals &io
  var_stop_catching_signals, 1, LOCAL(2), 1, LOCAL(2),
  // performed_io task io signals
  var_performed_io, 3, LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(610, 5),
  POS(611, 5),
  LOCAL(1),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_catch_signal_request_completed = {
  t_func_catch_signal_request_completed, NULL, 2, 3,
  {"609_37_task\000", "609_42_io\000", "609_45_signals\000"}
};

static TAB_NUM t_func_std_types__io_task___fork[] = {
  6, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 615_5_self
  MANDATORY_PARAMETER, LOCAL(4), // 616_5_task
  MANDATORY_PARAMETER, LOCAL(5), // 617_5_continuation
  var_undefined, LOCAL(6), // 618_5_argument
  // fork_requests_of tuple(task continuation argument)
  var_fork_requests_of, 1, LOCAL(3), 1, LOCAL(1),
  // tuple(task continuation argument)
  var_tuple, 3, LOCAL(4), LOCAL(5), LOCAL(6), 1, LOCAL(2),
  // push &self.fork_requests_of tuple(task continuation argument)
  var_push, 2, LOCAL(1), LOCAL(2), 1, LOCAL(1),
  // self.fork_requests_of tuple(task continuation argument)
  LET, -1, LOCAL(3), var_fork_requests_of, LOCAL(1), LOCAL(3),
  // -> self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(620, 14),
  POS(620, 31),
  POS(620, 3),
  POS(620, 9),
  POS(621, 3),
  LOCAL(5),
  LOCAL(3),
  LOCAL(6),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__io_task___fork = {
  t_func_std_types__io_task___fork, NULL, 5, 4,
  {"617_5_continuation\000", "615_5_self\000", "618_5_argument\000", "616_5_task\000"}
};

static TAB_NUM t_func_std_types__io_task___exit[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 625_5_self
  var_EXIT_SUCCESS, LOCAL(2), // 626_5_status
  // tuple self EXIT undefined status undefined
  var_tuple, 5, LOCAL(1), uni_EXIT, var_undefined, LOCAL(2), var_undefined, TAIL_CALL,
  POS(628, 3),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__io_task___exit = {
  t_func_std_types__io_task___exit, NULL, 1, 2,
  {"625_5_self\000", "626_5_status\000"}
};

static TAB_NUM t_func_std__io_task_manager[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 635_5_first_task
  MANDATORY_PARAMETER, LOCAL(4), // 636_5_start
  var_undefined, LOCAL(5), // 637_5_start_arguments
  // $exit_status EXIT_SUCCESS
  LET, 1, var_EXIT_SUCCESS, 1, var_639_4_exit_status,
  // $io std_types::io
  LET, 1, var_std_types__io, 1, var_640_4_io,
  // $updated_requests empty_list
  LET, 1, var_empty_list, 1, var_641_4_updated_requests,
  // $new_requests empty_list
  LET, 1, var_empty_list, 1, var_642_4_new_requests,
  // $cancellations empty_key_order_set
  LET, 1, var_empty_key_order_set, 1, var_643_4_cancellations,
  // $sent_messages empty_key_order_table
  LET, 1, var_empty_key_order_table, 1, var_644_4_sent_messages,
  // $removed_children empty_key_order_table
  LET, 1, var_empty_key_order_table, 1, var_645_4_removed_children,
  // $log_message ""
  LET, 1, string_3, 1, var_646_4_log_message,
  // $events empty_list
  LET, 1, var_empty_list, 1, var_647_4_events,
  // .id_of 1) COMPUTE undefined start_arguments start))
  LET, -1, LOCAL(3), var_id_of, num_1, LOCAL(1),
  // tuple(first_task(.id_of 1) COMPUTE undefined start_arguments start))
  var_tuple, 5, LOCAL(1), uni_COMPUTE, var_undefined, LOCAL(5), LOCAL(4), 1, LOCAL(2),
  // $requests
  var_list, 1, LOCAL(2), 1, var_648_4_requests,
  // $current_task_id 1
  LET, 1, num_1, 1, var_650_4_current_task_id,
  // $iteration_no 0
  LET, 1, num_0, 1, var_651_4_iteration_no,
  // loop:
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(639, 3),
  POS(640, 3),
  POS(641, 3),
  POS(642, 3),
  POS(643, 3),
  POS(644, 3),
  POS(645, 3),
  POS(646, 3),
  POS(647, 3),
  POS(649, 27),
  POS(649, 10),
  POS(648, 3),
  POS(650, 3),
  POS(651, 3),
  POS(655, 3),
  LOCAL(5),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std__io_task_manager = {
  t_func_std__io_task_manager, NULL, 15, 3,
  {"637_5_start_arguments\000", "635_5_first_task\000", "636_5_start\000"}
};

static TAB_NUM t_lambda_loop[] = {
  4, // locals
  0, // parameters
  // inc &iteration_no
  var_inc, 1, var_651_4_iteration_no, 1, var_651_4_iteration_no,
  // map &requests compute
  var_map, 2, var_648_4_requests, func_compute, 1, var_648_4_requests,
  // log_level >= 4 && removed_children.is_not_empty &log_message:
  var_std__less, 2, var_log_level, num_4, 1, LOCAL(1),
  // log_level >= 4 && removed_children.is_not_empty &log_message:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // log_level >= 4 && removed_children.is_not_empty &log_message:
  var_std__and, 2, LOCAL(2), lambda_63, 1, LOCAL(3),
  // update_if log_level >= 4 && removed_children.is_not_empty &log_message:
  var_update_if, 3, LOCAL(3), var_646_4_log_message, lambda_64, 1, var_646_4_log_message,
  // !removed_children empty_key_order_table
  LET, 1, var_empty_key_order_table, 1, var_645_4_removed_children,
  // for_each &requests
  var_for_each, 3, var_648_4_requests, lambda_70, lambda_71, 6, var_648_4_requests, var_650_4_current_task_id, var_642_4_new_requests, var_644_4_sent_messages, var_643_4_cancellations, var_646_4_log_message,
  // is_empty)
  var_is_empty, 1, var_644_4_sent_messages, 1, LOCAL(1),
  // $do_receive_messages not(sent_messages.is_empty)
  var_not, 1, LOCAL(1), 1, var_700_6_do_receive_messages,
  // is_empty)
  var_is_empty, 1, var_643_4_cancellations, 1, LOCAL(1),
  // $do_cancel_tasks not(cancellations.is_empty)
  var_not, 1, LOCAL(1), 1, var_701_6_do_cancel_tasks,
  // map &requests: (request)
  var_map, 2, var_648_4_requests, lambda_72, 1, var_648_4_requests,
  // !sent_messages empty_key_order_table
  LET, 1, var_empty_key_order_table, 1, var_644_4_sent_messages,
  // !cancellations empty_key_order_set
  LET, 1, var_empty_key_order_set, 1, var_643_4_cancellations,
  // queue_log_message_write !io
  func_queue_log_message_write, 0, 1, var_640_4_io,
  // !log_message ""
  LET, 1, string_3, 1, var_646_4_log_message,
  // for_each &requests !io
  var_for_each, 3, var_648_4_requests, lambda_75, lambda_76, IO_CALL(2), var_648_4_requests, var_640_4_io,
  // !updated_requests empty_list
  LET, 1, var_empty_list, 1, var_641_4_updated_requests,
  // is_not_empty
  var_is_not_empty, 1, var_642_4_new_requests, 1, LOCAL(1),
  // $something_to_do
  var_std__or, 2, LOCAL(1), lambda_77, 1, LOCAL(4),
  // maybe_exit! something_to_do
  func_maybe_exit, 1, LOCAL(4), IO_CALL(0),
  // get_and_check_events! !requests !io something_to_do
  func_get_and_check_events, 1, LOCAL(4), IO_CALL(2), var_648_4_requests, var_640_4_io,
  // for_each &requests !io !removed_children !log_message !exit_status
  var_for_each, 3, var_648_4_requests, lambda_78, lambda_88, IO_CALL(5), var_648_4_requests, var_640_4_io, var_645_4_removed_children, var_646_4_log_message, var_639_4_exit_status,
  // append &requests new_requests
  var_append, 2, var_648_4_requests, var_642_4_new_requests, 1, var_648_4_requests,
  // !new_requests empty_list
  LET, 1, var_empty_list, 1, var_642_4_new_requests,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(658, 5),
  POS(659, 5),
  POS(660, 15),
  POS(660, 15),
  POS(660, 15),
  POS(660, 5),
  POS(672, 5),
  POS(676, 5),
  POS(700, 44),
  POS(700, 5),
  POS(701, 40),
  POS(701, 5),
  POS(702, 5),
  POS(706, 5),
  POS(707, 5),
  POS(711, 5),
  POS(712, 5),
  POS(713, 5),
  POS(719, 5),
  POS(725, 22),
  POS(723, 5),
  POS(727, 5),
  POS(728, 5),
  POS(732, 5),
  POS(801, 5),
  POS(802, 5),
  POS(806, 5),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_loop = {
  t_lambda_loop, NULL, 27, 1,
  {"723_6_something_to_do\000"}
};

static TAB_NUM t_lambda_63[] = {
  1, // locals
  0, // parameters
  // is_not_empty &log_message:
  var_is_not_empty, 1, var_645_4_removed_children, 1, LOCAL(1),
  // removed_children.is_not_empty &log_message:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(660, 50),
  POS(660, 33)
};

static FUNCTION_INFO i_lambda_63 = {
  t_lambda_63, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_64[] = {
  0, // locals
  0, // parameters
  // for_each removed_children
  var_for_each, 3, var_645_4_removed_children, lambda_65, lambda_69, TAIL_CALL,
  POS(661, 7)
};

static FUNCTION_INFO i_lambda_64 = {
  t_lambda_64, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_65[] = {
  1, // locals
  2, // parameters
  var_662_12_parent_id,
  LOCAL(1), // 662_22_children
  // for_each children: (child_id)
  var_for_each, 2, LOCAL(1), lambda_66, TAIL_CALL,
  POS(663, 11),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_65 = {
  t_lambda_65, NULL, 1, 1,
  {"662_22_children\000"}
};

static TAB_NUM t_lambda_66[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 663_31_child_id
  // parent_id != 0
  var_std__equal, 2, var_662_12_parent_id, num_0, 1, LOCAL(1),
  // parent_id != 0
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // $parent
  var_if, 3, LOCAL(2), lambda_67, lambda_68, 1, LOCAL(4),
  // "REMOVED TASK @(child_id)@(parent)"
  var_std__string, 3, str_REMOVED_TASK, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // append &log_message "REMOVED TASK @(child_id)@(parent)"
  var_append, 2, var_646_4_log_message, LOCAL(1), 1, var_646_4_log_message,
  // next
  var_next, 0, TAIL_CALL,
  POS(666, 17),
  POS(666, 17),
  POS(664, 13),
  POS(669, 33),
  POS(669, 13),
  POS(670, 13),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_66 = {
  t_lambda_66, NULL, 6, 2,
  {"664_14_parent\000", "663_31_child_id\000"}
};

static TAB_NUM t_lambda_67[] = {
  1, // locals
  0, // parameters
  // " (parent: @(parent_id))@nl;"
  var_std__string, 3, str__parent, var_662_12_parent_id, string_5, 1, LOCAL(1),
  //  " (parent: @(parent_id))@nl;"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(667, 20),
  POS(667, 19)
};

static FUNCTION_INFO i_lambda_67 = {
  t_lambda_67, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_68[] = {
  0, // locals
  0, // parameters
  //  "@nl;"
  LET, 1, string_6, TAIL_CALL,
  POS(668, 19)
};

static FUNCTION_INFO i_lambda_68 = {
  t_lambda_68, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_69[] = {
  0, // locals
  0, // parameters
  //  log_message
  LET, 1, var_646_4_log_message, TAIL_CALL,
  POS(671, 11)
};

static FUNCTION_INFO i_lambda_69 = {
  t_lambda_69, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_70[] = {
  7, // locals
  1, // parameters
  LOCAL(2), // 682_10_request
  // request $task $mode $body $argument $continuation
  LOCAL(2), 0, 5, LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), LOCAL(7),
  // collect_messages &task !sent_messages
  func_collect_messages, 1, LOCAL(3), 2, LOCAL(3), var_644_4_sent_messages,
  // collect_cancel_requests &task !cancellations
  func_collect_cancel_requests, 1, LOCAL(3), 2, LOCAL(3), var_643_4_cancellations,
  // collect_log_messages &task !log_message
  func_collect_log_messages, 1, LOCAL(3), 2, LOCAL(3), var_646_4_log_message,
  // create_new_tasks &task !current_task_id !new_requests
  func_create_new_tasks, 1, LOCAL(3), 3, LOCAL(3), var_650_4_current_task_id, var_642_4_new_requests,
  // tuple(task mode body argument continuation)
  var_tuple, 5, LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), LOCAL(7), 1, LOCAL(1),
  // push &updated_requests tuple(task mode body argument continuation)
  var_push, 2, var_641_4_updated_requests, LOCAL(1), 1, var_641_4_updated_requests,
  // next
  var_next, 0, TAIL_CALL,
  POS(683, 9),
  POS(684, 9),
  POS(685, 9),
  POS(686, 9),
  POS(687, 9),
  POS(688, 32),
  POS(688, 9),
  POS(689, 9),
  LOCAL(6),
  LOCAL(5),
  LOCAL(3),
  LOCAL(7),
  LOCAL(4),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_70 = {
  t_lambda_70, NULL, 8, 6,
  {"683_36_argument\000", "683_30_body\000", "683_18_task\000", "683_46_continuation\000", "683_24_mode\000", "682_10_request\000"}
};

static TAB_NUM t_lambda_71[] = {
  0, // locals
  0, // parameters
  // 
  LET, 6, var_641_4_updated_requests, var_650_4_current_task_id, var_642_4_new_requests, var_644_4_sent_messages, var_643_4_cancellations, var_646_4_log_message, TAIL_CALL,
  POS(690, 9)
};

static FUNCTION_INFO i_lambda_71 = {
  t_lambda_71, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  1, // parameters
  var_702_21_request,
  // update_if do_receive_messages &request -> receive_messages(request)
  var_update_if, 3, var_700_6_do_receive_messages, var_702_21_request, lambda_73, 1, var_702_21_request,
  // update_if do_cancel_tasks &request -> maybe_mark_as_cancelled(request)
  var_update_if, 3, var_701_6_do_cancel_tasks, var_702_21_request, lambda_74, 1, var_702_21_request,
  // -> request
  LET, 1, var_702_21_request, TAIL_CALL,
  POS(703, 7),
  POS(704, 7),
  POS(705, 7)
};

static FUNCTION_INFO i_lambda_72 = {
  t_lambda_72, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_73[] = {
  1, // locals
  0, // parameters
  // receive_messages(request)
  func_receive_messages, 1, var_702_21_request, 1, LOCAL(1),
  //  receive_messages(request)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(703, 49),
  POS(703, 48)
};

static FUNCTION_INFO i_lambda_73 = {
  t_lambda_73, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_74[] = {
  1, // locals
  0, // parameters
  // maybe_mark_as_cancelled(request)
  func_maybe_mark_as_cancelled, 1, var_702_21_request, 1, LOCAL(1),
  //  maybe_mark_as_cancelled(request)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(704, 45),
  POS(704, 44)
};

static FUNCTION_INFO i_lambda_74 = {
  t_lambda_74, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_75[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 714_10_request
  // start_io_operation! &request !io
  func_start_io_operation, 1, LOCAL(1), IO_CALL(2), LOCAL(1), var_640_4_io,
  // push &updated_requests request
  var_push, 2, var_641_4_updated_requests, LOCAL(1), 1, var_641_4_updated_requests,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(715, 9),
  POS(716, 9),
  POS(717, 9),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_75 = {
  t_lambda_75, NULL, 3, 1,
  {"714_10_request\000"}
};

static TAB_NUM t_lambda_76[] = {
  0, // locals
  0, // parameters
  //  updated_requests io
  LET, 2, var_641_4_updated_requests, var_640_4_io, TAIL_CALL,
  POS(718, 9)
};

static FUNCTION_INFO i_lambda_76 = {
  t_lambda_76, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_77[] = {
  1, // locals
  0, // parameters
  // any_of(requests has_something_to_do)
  var_any_of, 2, var_648_4_requests, func_has_something_to_do, 1, LOCAL(1),
  // any_of(requests has_something_to_do)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(726, 9),
  POS(726, 9)
};

static FUNCTION_INFO i_lambda_77 = {
  t_lambda_77, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_78[] = {
  0, // locals
  1, // parameters
  var_733_10_request,
  // request $task $mode $body $argument $continuation
  var_733_10_request, 0, 5, var_734_18_task, var_734_24_mode, var_734_30_body, var_734_36_argument, var_734_46_continuation,
  // case mode
  var_case, 8, var_734_24_mode, uni_COMPLETE_IO, lambda_COMPLETE_IO, uni_EXIT, lambda_EXIT, uni_COMPUTE, lambda_COMPUTE, lambda_81, IO_TAIL_CALL,
  POS(734, 9),
  POS(735, 9)
};

static FUNCTION_INFO i_lambda_78 = {
  t_lambda_78, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_COMPLETE_IO[] = {
  0, // locals
  0, // parameters
  // complete_io_operation!
  func_complete_io_operation, 0, IO_TAIL_CALL,
  POS(737, 13)
};

static FUNCTION_INFO i_lambda_COMPLETE_IO = {
  t_lambda_COMPLETE_IO, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_EXIT[] = {
  1, // locals
  0, // parameters
  // argument == EXIT_FAILURE &exit_status -> EXIT_FAILURE
  var_std__equal, 2, var_734_36_argument, var_EXIT_FAILURE, 1, LOCAL(1),
  // update_if argument == EXIT_FAILURE &exit_status -> EXIT_FAILURE
  var_update_if, 3, LOCAL(1), var_639_4_exit_status, lambda_79, 1, var_639_4_exit_status,
  // exit_task! task !io !exit_status !removed_children
  func_exit_task, 1, var_734_18_task, IO_CALL(3), var_640_4_io, var_639_4_exit_status, var_645_4_removed_children,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(739, 23),
  POS(739, 13),
  POS(740, 13),
  POS(741, 13)
};

static FUNCTION_INFO i_lambda_EXIT = {
  t_lambda_EXIT, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_79[] = {
  0, // locals
  0, // parameters
  //  EXIT_FAILURE
  LET, 1, var_EXIT_FAILURE, TAIL_CALL,
  POS(739, 63)
};

static FUNCTION_INFO i_lambda_79 = {
  t_lambda_79, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_COMPUTE[] = {
  1, // locals
  0, // parameters
  // is_an_error:
  var_is_an_error, 1, var_734_36_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_argument_is_an_error, lambda_80, IO_TAIL_CALL,
  POS(744, 24),
  POS(743, 13)
};

static FUNCTION_INFO i_lambda_COMPUTE = {
  t_lambda_COMPUTE, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_argument_is_an_error[] = {
  0, // locals
  0, // parameters
  // handle_error!
  func_handle_error, 0, IO_TAIL_CALL,
  POS(745, 17)
};

static FUNCTION_INFO i_lambda_argument_is_an_error = {
  t_lambda_argument_is_an_error, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_80[] = {
  0, // locals
  0, // parameters
  // maybe_cancel_task!
  func_maybe_cancel_task, 0, IO_TAIL_CALL,
  POS(747, 17)
};

static FUNCTION_INFO i_lambda_80 = {
  t_lambda_80, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_81[] = {
  0, // locals
  0, // parameters
  // maybe_cancel_task!
  func_maybe_cancel_task, 0, IO_TAIL_CALL,
  POS(749, 13)
};

static FUNCTION_INFO i_lambda_81 = {
  t_lambda_81, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_complete_io_operation[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(body) == 3:
  var_parameter_count_of, 1, var_734_30_body, 1, LOCAL(1),
  // parameter_count_of(body) == 3:
  var_std__equal, 2, LOCAL(1), num_3, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_82, lambda_83, IO_TAIL_CALL,
  POS(753, 13),
  POS(753, 13),
  POS(752, 11)
};

static FUNCTION_INFO i_func_complete_io_operation = {
  t_func_complete_io_operation, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_82[] = {
  0, // locals
  0, // parameters
  // body! !mode &task &io !body &argument
  var_734_30_body, 3, var_734_18_task, var_640_4_io, var_734_36_argument, IO_CALL(5), var_734_24_mode, var_734_18_task, var_640_4_io, var_734_30_body, var_734_36_argument,
  // check_for_error!
  func_check_for_error, 0, IO_TAIL_CALL,
  POS(754, 15),
  POS(755, 15)
};

static FUNCTION_INFO i_lambda_82 = {
  t_lambda_82, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_83[] = {
  0, // locals
  0, // parameters
  // body! !mode &task &io !body !argument
  var_734_30_body, 2, var_734_18_task, var_640_4_io, IO_CALL(5), var_734_24_mode, var_734_18_task, var_640_4_io, var_734_30_body, var_734_36_argument,
  // check_for_error!
  func_check_for_error, 0, IO_TAIL_CALL,
  POS(757, 15),
  POS(758, 15)
};

static FUNCTION_INFO i_lambda_83 = {
  t_lambda_83, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_check_for_error[] = {
  1, // locals
  0, // parameters
  // is_an_error:
  var_is_an_error, 1, var_734_36_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_argument_is_an_error, lambda_84, IO_TAIL_CALL,
  POS(762, 22),
  POS(761, 11)
};

static FUNCTION_INFO i_func_check_for_error = {
  t_func_check_for_error, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2_argument_is_an_error[] = {
  0, // locals
  0, // parameters
  // handle_error!
  func_handle_error, 0, IO_TAIL_CALL,
  POS(763, 15)
};

static FUNCTION_INFO i_lambda_2_argument_is_an_error = {
  t_lambda_2_argument_is_an_error, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_84[] = {
  1, // locals
  0, // parameters
  // tuple(task mode body argument continuation)
  var_tuple, 5, var_734_18_task, var_734_24_mode, var_734_30_body, var_734_36_argument, var_734_46_continuation, 1, LOCAL(1),
  // push &updated_requests tuple(task mode body argument continuation)
  var_push, 2, var_641_4_updated_requests, LOCAL(1), 1, var_641_4_updated_requests,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(765, 38),
  POS(765, 15),
  POS(766, 15)
};

static FUNCTION_INFO i_lambda_84 = {
  t_lambda_84, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_handle_error[] = {
  1, // locals
  0, // parameters
  // $error_handler error_handler_of(task)
  var_error_handler_of, 1, var_734_18_task, 1, var_769_12_error_handler,
  // is_defined:
  var_is_defined, 1, var_769_12_error_handler, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_error_handler_is_defined, lambda_85, IO_TAIL_CALL,
  POS(769, 11),
  POS(771, 27),
  POS(770, 11)
};

static FUNCTION_INFO i_func_handle_error = {
  t_func_handle_error, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_error_handler_is_defined[] = {
  1, // locals
  0, // parameters
  // tuple(task COMPUTE undefined argument error_handler)
  var_tuple, 5, var_734_18_task, uni_COMPUTE, var_undefined, var_734_36_argument, var_769_12_error_handler, 1, LOCAL(1),
  // push &updated_requests
  var_push, 2, var_641_4_updated_requests, LOCAL(1), 1, var_641_4_updated_requests,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(773, 17),
  POS(772, 15),
  POS(774, 15)
};

static FUNCTION_INFO i_lambda_error_handler_is_defined = {
  t_lambda_error_handler_is_defined, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_85[] = {
  2, // locals
  0, // parameters
  // !exit_status EXIT_FAILURE
  LET, 1, var_EXIT_FAILURE, 1, var_639_4_exit_status,
  // $message generate_error_message(argument)
  var_generate_error_message, 1, var_734_36_argument, 1, LOCAL(2),
  // push(message '@nl;')
  var_push, 2, LOCAL(2), chr_10, 1, LOCAL(1),
  // append_log_entry !log_message task push(message '@nl;')
  func_append_log_entry, 2, var_734_18_task, LOCAL(1), 1, var_646_4_log_message,
  // exit_task! task !io !exit_status !removed_children
  func_exit_task, 1, var_734_18_task, IO_CALL(3), var_640_4_io, var_639_4_exit_status, var_645_4_removed_children,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(776, 15),
  POS(777, 15),
  POS(778, 50),
  POS(778, 15),
  POS(779, 15),
  POS(780, 15),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_85 = {
  t_lambda_85, NULL, 6, 1,
  {"777_16_message\000"}
};

static TAB_NUM t_func_maybe_cancel_task[] = {
  1, // locals
  0, // parameters
  // is_cancelled:
  var_is_cancelled, 1, var_734_18_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10_task_is_cancelled, lambda_87, IO_TAIL_CALL,
  POS(784, 18),
  POS(783, 11)
};

static FUNCTION_INFO i_func_maybe_cancel_task = {
  t_func_maybe_cancel_task, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_10_task_is_cancelled[] = {
  1, // locals
  0, // parameters
  // $cancel_handler cancel_handler_of(task)
  var_cancel_handler_of, 1, var_734_18_task, 1, var_785_16_cancel_handler,
  // is_defined:
  var_is_defined, 1, var_785_16_cancel_handler, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_cancel_handler_is_defined, lambda_86, IO_TAIL_CALL,
  POS(785, 15),
  POS(787, 32),
  POS(786, 15)
};

static FUNCTION_INFO i_lambda_10_task_is_cancelled = {
  t_lambda_10_task_is_cancelled, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_cancel_handler_is_defined[] = {
  1, // locals
  0, // parameters
  // request !task !mode !body !argument !continuation
  var_733_10_request, 0, 5, var_734_18_task, var_734_24_mode, var_734_30_body, var_734_36_argument, var_734_46_continuation,
  // task.is_cancelled false
  LET, -1, var_734_18_task, var_is_cancelled, var_false, var_734_18_task,
  // tuple(task COMPUTE undefined argument cancel_handler)
  var_tuple, 5, var_734_18_task, uni_COMPUTE, var_undefined, var_734_36_argument, var_785_16_cancel_handler, 1, LOCAL(1),
  // push &updated_requests
  var_push, 2, var_641_4_updated_requests, LOCAL(1), 1, var_641_4_updated_requests,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(788, 19),
  POS(789, 20),
  POS(791, 21),
  POS(790, 19),
  POS(792, 19)
};

static FUNCTION_INFO i_lambda_cancel_handler_is_defined = {
  t_lambda_cancel_handler_is_defined, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_86[] = {
  0, // locals
  0, // parameters
  // exit_task! task !io !exit_status !removed_children
  func_exit_task, 1, var_734_18_task, IO_CALL(3), var_640_4_io, var_639_4_exit_status, var_645_4_removed_children,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(794, 19),
  POS(795, 19)
};

static FUNCTION_INFO i_lambda_86 = {
  t_lambda_86, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_87[] = {
  0, // locals
  0, // parameters
  // push &updated_requests request
  var_push, 2, var_641_4_updated_requests, var_733_10_request, 1, var_641_4_updated_requests,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(797, 15),
  POS(798, 15)
};

static FUNCTION_INFO i_lambda_87 = {
  t_lambda_87, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_88[] = {
  0, // locals
  0, // parameters
  //  updated_requests io removed_children log_message exit_status
  LET, 5, var_641_4_updated_requests, var_640_4_io, var_645_4_removed_children, var_646_4_log_message, var_639_4_exit_status, TAIL_CALL,
  POS(800, 9)
};

static FUNCTION_INFO i_lambda_88 = {
  t_lambda_88, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_compute[] = {
  1, // locals
  1, // parameters
  var_812_14_request,
  // request $task $mode $body $argument $continuation
  var_812_14_request, 0, 5, var_813_14_task, var_813_20_mode, var_813_26_body, var_813_32_argument, var_813_42_continuation,
  // id_of(task))
  var_id_of, 1, var_813_14_task, 1, LOCAL(1),
  // $removed removed_children(id_of(task))
  var_645_4_removed_children, 1, LOCAL(1), 1, var_814_6_removed,
  // is_defined &request &task:
  var_is_defined, 1, var_814_6_removed, 1, LOCAL(1),
  // update_if removed.is_defined &request &task:
  var_update_if, 4, LOCAL(1), var_812_14_request, var_813_14_task, lambda_89, 2, var_812_14_request, var_813_14_task,
  // mode == COMPUTE:
  var_std__equal, 2, var_813_20_mode, uni_COMPUTE, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_91, lambda_95, TAIL_CALL,
  POS(813, 5),
  POS(814, 31),
  POS(814, 5),
  POS(815, 23),
  POS(815, 5),
  POS(819, 7),
  POS(818, 5)
};

static FUNCTION_INFO i_func_compute = {
  t_func_compute, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_89[] = {
  1, // locals
  0, // parameters
  // child_ids_of: (id) -> not(removed(id))
  var_child_ids_of, 1, var_813_14_task, 1, LOCAL(1),
  // filter &task.child_ids_of: (id) -> not(removed(id))
  var_filter, 2, LOCAL(1), lambda_90, 1, LOCAL(1),
  // task.child_ids_of: (id) -> not(removed(id))
  LET, -1, var_813_14_task, var_child_ids_of, LOCAL(1), var_813_14_task,
  // tuple(task mode body argument continuation) task
  var_tuple, 5, var_813_14_task, var_813_20_mode, var_813_26_body, var_813_32_argument, var_813_42_continuation, 1, LOCAL(1),
  // -> tuple(task mode body argument continuation) task
  LET, 2, LOCAL(1), var_813_14_task, TAIL_CALL,
  POS(816, 20),
  POS(816, 7),
  POS(816, 15),
  POS(817, 10),
  POS(817, 7)
};

static FUNCTION_INFO i_lambda_89 = {
  t_lambda_89, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_90[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 816_35_id
  // removed(id))
  var_814_6_removed, 1, LOCAL(3), 1, LOCAL(1),
  // not(removed(id))
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // -> not(removed(id))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(816, 46),
  POS(816, 42),
  POS(816, 39),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_90 = {
  t_lambda_90, NULL, 3, 1,
  {"816_35_id\000"}
};

static TAB_NUM t_lambda_91[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(continuation) == 2:
  var_parameter_count_of, 1, var_813_42_continuation, 1, LOCAL(1),
  // parameter_count_of(continuation) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_92, lambda_93, TAIL_CALL,
  POS(821, 11),
  POS(821, 11),
  POS(820, 9)
};

static FUNCTION_INFO i_lambda_91 = {
  t_lambda_91, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_92[] = {
  0, // locals
  0, // parameters
  // !request continuation(task argument)
  var_813_42_continuation, 2, var_813_14_task, var_813_32_argument, 1, var_812_14_request,
  // check_request
  func_check_request, 0, TAIL_CALL,
  POS(822, 13),
  POS(823, 13)
};

static FUNCTION_INFO i_lambda_92 = {
  t_lambda_92, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_93[] = {
  0, // locals
  0, // parameters
  // !request continuation(task)
  var_813_42_continuation, 1, var_813_14_task, 1, var_812_14_request,
  // check_request
  func_check_request, 0, TAIL_CALL,
  POS(825, 13),
  POS(826, 13)
};

static FUNCTION_INFO i_lambda_93 = {
  t_lambda_93, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_check_request[] = {
  1, // locals
  0, // parameters
  // is_an_error:
  var_is_an_error, 1, var_812_14_request, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_request_is_an_error, lambda_94, TAIL_CALL,
  POS(830, 21),
  POS(829, 11)
};

static FUNCTION_INFO i_func_check_request = {
  t_func_check_request, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_request_is_an_error[] = {
  1, // locals
  0, // parameters
  // generate_error_message(request)
  var_generate_error_message, 1, var_812_14_request, 1, LOCAL(1),
  // log &task generate_error_message(request)
  var_log, 2, var_813_14_task, LOCAL(1), 1, var_813_14_task,
  // tuple(task EXIT undefined EXIT_FAILURE undefined)
  var_tuple, 5, var_813_14_task, uni_EXIT, var_undefined, var_EXIT_FAILURE, var_undefined, 1, LOCAL(1),
  // -> tuple(task EXIT undefined EXIT_FAILURE undefined)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(831, 25),
  POS(831, 15),
  POS(832, 18),
  POS(832, 15)
};

static FUNCTION_INFO i_lambda_request_is_an_error = {
  t_lambda_request_is_an_error, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  //  request
  LET, 1, var_812_14_request, TAIL_CALL,
  POS(833, 15)
};

static FUNCTION_INFO i_lambda_94 = {
  t_lambda_94, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_95[] = {
  0, // locals
  0, // parameters
  //  request
  LET, 1, var_812_14_request, TAIL_CALL,
  POS(834, 9)
};

static FUNCTION_INFO i_lambda_95 = {
  t_lambda_95, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_collect_messages[] = {
  1, // locals
  1, // parameters
  var_838_23_task,
  // outbound_messages_of(task)
  var_outbound_messages_of, 1, var_838_23_task, 1, LOCAL(1),
  // for_each outbound_messages_of(task)
  var_for_each, 3, LOCAL(1), lambda_96, lambda_98, IO_TAIL_CALL,
  POS(839, 14),
  POS(839, 5)
};

static FUNCTION_INFO i_func_collect_messages = {
  t_func_collect_messages, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_96[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 840_10_entry
  // entry $receiver $message
  LOCAL(2), 0, 2, var_841_16_receiver, var_841_26_message,
  // is_an_integer:
  var_is_an_integer, 1, var_841_16_receiver, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_receiver_is_an_integer, lambda_97, IO_TAIL_CALL,
  POS(841, 9),
  POS(843, 20),
  POS(842, 9),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_96 = {
  t_lambda_96, NULL, 3, 1,
  {"840_10_entry\000"}
};

static TAB_NUM t_lambda_receiver_is_an_integer[] = {
  0, // locals
  0, // parameters
  // send_message! receiver
  func_send_message, 1, var_841_16_receiver, IO_TAIL_CALL,
  POS(844, 13)
};

static FUNCTION_INFO i_lambda_receiver_is_an_integer = {
  t_lambda_receiver_is_an_integer, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_97[] = {
  0, // locals
  0, // parameters
  // for_each! receiver send_message
  var_for_each, 2, var_841_16_receiver, func_send_message, IO_TAIL_CALL,
  POS(846, 13)
};

static FUNCTION_INFO i_lambda_97 = {
  t_lambda_97, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_send_message[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 848_25_the_receiver
  // sent_messages(the_receiver) empty_list)
  var_644_4_sent_messages, 1, LOCAL(2), 1, LOCAL(1),
  // $messages default_value(sent_messages(the_receiver) empty_list)
  var_default_value, 2, LOCAL(1), var_empty_list, 1, LOCAL(3),
  // push &messages message
  var_push, 2, LOCAL(3), var_841_26_message, 1, LOCAL(3),
  // sent_messages(the_receiver) messages
  var_644_4_sent_messages, 2, LOCAL(2), LOCAL(3), 1, var_644_4_sent_messages,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(849, 35),
  POS(849, 11),
  POS(850, 11),
  POS(851, 12),
  POS(852, 11),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_send_message = {
  t_func_send_message, NULL, 5, 2,
  {"848_25_the_receiver\000", "849_12_messages\000"}
};

static TAB_NUM t_lambda_98[] = {
  0, // locals
  0, // parameters
  // task.outbound_messages_of empty_list
  LET, -1, var_838_23_task, var_outbound_messages_of, var_empty_list, var_838_23_task,
  // -> task sent_messages
  LET, 2, var_838_23_task, var_644_4_sent_messages, TAIL_CALL,
  POS(854, 10),
  POS(855, 9)
};

static FUNCTION_INFO i_lambda_98 = {
  t_lambda_98, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_collect_cancel_requests[] = {
  1, // locals
  1, // parameters
  var_857_30_task,
  // cancel_requests_of(task)
  var_cancel_requests_of, 1, var_857_30_task, 1, LOCAL(1),
  // for_each cancel_requests_of(task)
  var_for_each, 3, LOCAL(1), lambda_99, lambda_100, IO_TAIL_CALL,
  POS(858, 14),
  POS(858, 5)
};

static FUNCTION_INFO i_func_collect_cancel_requests = {
  t_func_collect_cancel_requests, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_99[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 859_10_id
  // cancellations(id) true
  var_643_4_cancellations, 2, LOCAL(1), var_true, 1, var_643_4_cancellations,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(860, 10),
  POS(861, 9),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_99 = {
  t_lambda_99, NULL, 2, 1,
  {"859_10_id\000"}
};

static TAB_NUM t_lambda_100[] = {
  0, // locals
  0, // parameters
  // task.cancel_requests_of empty_list
  LET, -1, var_857_30_task, var_cancel_requests_of, var_empty_list, var_857_30_task,
  // -> task cancellations
  LET, 2, var_857_30_task, var_643_4_cancellations, TAIL_CALL,
  POS(863, 10),
  POS(864, 9)
};

static FUNCTION_INFO i_lambda_100 = {
  t_lambda_100, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_collect_log_messages[] = {
  1, // locals
  1, // parameters
  var_866_27_task,
  // log_level == 0
  var_std__equal, 2, var_log_level, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_101, lambda_102, IO_TAIL_CALL,
  POS(868, 7),
  POS(867, 5)
};

static FUNCTION_INFO i_func_collect_log_messages = {
  t_func_collect_log_messages, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_101[] = {
  0, // locals
  0, // parameters
  //  task log_message
  LET, 2, var_866_27_task, var_646_4_log_message, TAIL_CALL,
  POS(869, 9)
};

static FUNCTION_INFO i_lambda_101 = {
  t_lambda_101, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_102[] = {
  1, // locals
  0, // parameters
  // log_messages_of(task)
  var_log_messages_of, 1, var_866_27_task, 1, LOCAL(1),
  // for_each log_messages_of(task)
  var_for_each, 3, LOCAL(1), lambda_103, lambda_104, IO_TAIL_CALL,
  POS(871, 18),
  POS(871, 9)
};

static FUNCTION_INFO i_lambda_102 = {
  t_lambda_102, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_103[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 872_14_message
  // append_log_entry !log_message task message
  func_append_log_entry, 2, var_866_27_task, LOCAL(1), 1, var_646_4_log_message,
  // task.log_messages_of empty_list
  LET, -1, var_866_27_task, var_log_messages_of, var_empty_list, var_866_27_task,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(873, 13),
  POS(874, 14),
  POS(875, 13),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_103 = {
  t_lambda_103, NULL, 3, 1,
  {"872_14_message\000"}
};

static TAB_NUM t_lambda_104[] = {
  0, // locals
  0, // parameters
  //  task log_message
  LET, 2, var_866_27_task, var_646_4_log_message, TAIL_CALL,
  POS(876, 13)
};

static FUNCTION_INFO i_lambda_104 = {
  t_lambda_104, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_append_log_entry[] = {
  3, // locals
  2, // parameters
  var_878_23_task,
  var_878_28_message,
  // log_level >= 2
  var_std__less, 2, var_log_level, num_2, 1, LOCAL(1),
  // log_level >= 2
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_105, lambda_106, 1, LOCAL(3),
  // append log_message
  var_append, 2, var_646_4_log_message, LOCAL(3), TAIL_CALL,
  POS(881, 9),
  POS(881, 9),
  POS(880, 7),
  POS(879, 5)
};

static FUNCTION_INFO i_func_append_log_entry = {
  t_func_append_log_entry, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_105[] = {
  2, // locals
  0, // parameters
  // id_of(task) ": " message)
  var_id_of, 1, var_878_23_task, 1, LOCAL(1),
  // string(id_of(task) ": " message)
  var_string, 3, LOCAL(1), string_7, var_878_28_message, 1, LOCAL(2),
  //  string(id_of(task) ": " message)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(882, 19),
  POS(882, 12),
  POS(882, 11)
};

static FUNCTION_INFO i_lambda_105 = {
  t_lambda_105, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_106[] = {
  0, // locals
  0, // parameters
  //  message
  LET, 1, var_878_28_message, TAIL_CALL,
  POS(883, 11)
};

static FUNCTION_INFO i_lambda_106 = {
  t_lambda_106, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_create_new_tasks[] = {
  2, // locals
  1, // parameters
  var_885_23_task,
  // fork_requests_of(task).is_empty
  var_fork_requests_of, 1, var_885_23_task, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_107, lambda_108, TAIL_CALL,
  POS(887, 7),
  POS(887, 30),
  POS(886, 5)
};

static FUNCTION_INFO i_func_create_new_tasks = {
  t_func_create_new_tasks, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_107[] = {
  0, // locals
  0, // parameters
  //  task current_task_id new_requests
  LET, 3, var_885_23_task, var_650_4_current_task_id, var_642_4_new_requests, TAIL_CALL,
  POS(888, 9)
};

static FUNCTION_INFO i_lambda_107 = {
  t_lambda_107, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_108[] = {
  1, // locals
  0, // parameters
  // fork_requests_of(task)
  var_fork_requests_of, 1, var_885_23_task, 1, LOCAL(1),
  // for_each fork_requests_of(task)
  var_for_each, 3, LOCAL(1), lambda_109, lambda_110, TAIL_CALL,
  POS(890, 18),
  POS(890, 9)
};

static FUNCTION_INFO i_lambda_108 = {
  t_lambda_108, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_109[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 891_14_fork_request
  // fork_request $new_task $continuation $argument
  LOCAL(3), 0, 3, LOCAL(4), LOCAL(5), LOCAL(6),
  // new_task.log_messages_of empty_list
  LET, -1, LOCAL(4), var_log_messages_of, var_empty_list, LOCAL(4),
  // new_task.exit_handlers_of empty_list
  LET, -1, LOCAL(4), var_exit_handlers_of, var_empty_list, LOCAL(4),
  // new_task.error_handler_of undefined
  LET, -1, LOCAL(4), var_error_handler_of, var_undefined, LOCAL(4),
  // new_task.cancel_handler_of undefined
  LET, -1, LOCAL(4), var_cancel_handler_of, var_undefined, LOCAL(4),
  // new_task.child_ids_of empty_list
  LET, -1, LOCAL(4), var_child_ids_of, var_empty_list, LOCAL(4),
  // new_task.inbound_messages_of empty_list
  LET, -1, LOCAL(4), var_inbound_messages_of, var_empty_list, LOCAL(4),
  // new_task.outbound_messages_of empty_list
  LET, -1, LOCAL(4), var_outbound_messages_of, var_empty_list, LOCAL(4),
  // new_task.fork_requests_of empty_list
  LET, -1, LOCAL(4), var_fork_requests_of, var_empty_list, LOCAL(4),
  // new_task.cancel_requests_of empty_list
  LET, -1, LOCAL(4), var_cancel_requests_of, var_empty_list, LOCAL(4),
  // new_task.is_cancelled false
  LET, -1, LOCAL(4), var_is_cancelled, var_false, LOCAL(4),
  // inc &current_task_id
  var_inc, 1, var_650_4_current_task_id, 1, var_650_4_current_task_id,
  // new_task.id_of current_task_id
  LET, -1, LOCAL(4), var_id_of, var_650_4_current_task_id, LOCAL(4),
  // !new_task.parent_id_of id_of(task)
  var_id_of, 1, var_885_23_task, 1, LOCAL(2),
  // new_task.parent_id_of id_of(task)
  LET, -1, LOCAL(4), var_parent_id_of, LOCAL(2), LOCAL(4),
  // child_ids_of current_task_id
  var_child_ids_of, 1, var_885_23_task, 1, LOCAL(1),
  // push &task.child_ids_of current_task_id
  var_push, 2, LOCAL(1), var_650_4_current_task_id, 1, LOCAL(1),
  // task.child_ids_of current_task_id
  LET, -1, var_885_23_task, var_child_ids_of, LOCAL(1), var_885_23_task,
  // tuple(new_task COMPUTE undefined argument continuation)
  var_tuple, 5, LOCAL(4), uni_COMPUTE, var_undefined, LOCAL(6), LOCAL(5), 1, LOCAL(1),
  // push &new_requests
  var_push, 2, var_642_4_new_requests, LOCAL(1), 1, var_642_4_new_requests,
  // next
  var_next, 0, TAIL_CALL,
  POS(892, 13),
  POS(896, 14),
  POS(897, 14),
  POS(898, 14),
  POS(899, 14),
  POS(900, 14),
  POS(901, 14),
  POS(902, 14),
  POS(903, 14),
  POS(904, 14),
  POS(905, 14),
  POS(909, 13),
  POS(910, 14),
  POS(911, 13),
  POS(911, 14),
  POS(915, 24),
  POS(915, 13),
  POS(915, 19),
  POS(920, 15),
  POS(919, 13),
  POS(921, 13),
  LOCAL(6),
  LOCAL(4),
  LOCAL(3),
  LOCAL(5)
};

static FUNCTION_INFO i_lambda_109 = {
  t_lambda_109, NULL, 21, 4,
  {"892_51_argument\000", "892_27_new_task\000", "891_14_fork_request\000", "892_37_continuation\000"}
};

static TAB_NUM t_lambda_110[] = {
  0, // locals
  0, // parameters
  // task.fork_requests_of empty_list
  LET, -1, var_885_23_task, var_fork_requests_of, var_empty_list, var_885_23_task,
  // -> task current_task_id new_requests
  LET, 3, var_885_23_task, var_650_4_current_task_id, var_642_4_new_requests, TAIL_CALL,
  POS(923, 14),
  POS(924, 13)
};

static FUNCTION_INFO i_lambda_110 = {
  t_lambda_110, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_receive_messages[] = {
  1, // locals
  1, // parameters
  var_928_23_request,
  // request $task $mode $body $argument $continuation
  var_928_23_request, 0, 5, var_929_14_task, var_929_20_mode, var_929_26_body, var_929_32_argument, var_929_42_continuation,
  // id_of(task))
  var_id_of, 1, var_929_14_task, 1, LOCAL(1),
  // $messages sent_messages(id_of(task))
  var_644_4_sent_messages, 1, LOCAL(1), 1, var_930_6_messages,
  // is_defined:
  var_is_defined, 1, var_930_6_messages, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_messages_is_defined, lambda_112, TAIL_CALL,
  POS(929, 5),
  POS(930, 29),
  POS(930, 5),
  POS(932, 16),
  POS(931, 5)
};

static FUNCTION_INFO i_func_receive_messages = {
  t_func_receive_messages, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_messages_is_defined[] = {
  1, // locals
  0, // parameters
  // inbound_messages_of messages
  var_inbound_messages_of, 1, var_929_14_task, 1, LOCAL(1),
  // append &task.inbound_messages_of messages
  var_append, 2, LOCAL(1), var_930_6_messages, 1, LOCAL(1),
  // task.inbound_messages_of messages
  LET, -1, var_929_14_task, var_inbound_messages_of, LOCAL(1), var_929_14_task,
  // mode == WAIT &mode -> COMPUTE
  var_std__equal, 2, var_929_20_mode, uni_WAIT, 1, LOCAL(1),
  // update_if mode == WAIT &mode -> COMPUTE
  var_update_if, 3, LOCAL(1), var_929_20_mode, lambda_111, 1, var_929_20_mode,
  // tuple(task mode body argument continuation)
  var_tuple, 5, var_929_14_task, var_929_20_mode, var_929_26_body, var_929_32_argument, var_929_42_continuation, 1, LOCAL(1),
  // -> tuple(task mode body argument continuation)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(933, 22),
  POS(933, 9),
  POS(933, 17),
  POS(934, 19),
  POS(934, 9),
  POS(935, 12),
  POS(935, 9)
};

static FUNCTION_INFO i_lambda_messages_is_defined = {
  t_lambda_messages_is_defined, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_111[] = {
  0, // locals
  0, // parameters
  //  COMPUTE
  LET, 1, uni_COMPUTE, TAIL_CALL,
  POS(934, 40)
};

static FUNCTION_INFO i_lambda_111 = {
  t_lambda_111, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_112[] = {
  0, // locals
  0, // parameters
  //  request
  LET, 1, var_928_23_request, TAIL_CALL,
  POS(936, 9)
};

static FUNCTION_INFO i_lambda_112 = {
  t_lambda_112, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_maybe_mark_as_cancelled[] = {
  2, // locals
  1, // parameters
  var_938_30_request,
  // request $task $mode $body $argument $continuation
  var_938_30_request, 0, 5, var_939_14_task, var_939_20_mode, var_939_26_body, var_939_32_argument, var_939_42_continuation,
  // id_of(task)):
  var_id_of, 1, var_939_14_task, 1, LOCAL(1),
  // cancellations(id_of(task)):
  var_643_4_cancellations, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_cancellationsid_oftask, lambda_113, TAIL_CALL,
  POS(939, 5),
  POS(941, 21),
  POS(941, 7),
  POS(940, 5)
};

static FUNCTION_INFO i_func_maybe_mark_as_cancelled = {
  t_func_maybe_mark_as_cancelled, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_cancellationsid_oftask[] = {
  1, // locals
  0, // parameters
  // task.is_cancelled true
  LET, -1, var_939_14_task, var_is_cancelled, var_true, var_939_14_task,
  // tuple(task mode body argument continuation)
  var_tuple, 5, var_939_14_task, var_939_20_mode, var_939_26_body, var_939_32_argument, var_939_42_continuation, 1, LOCAL(1),
  // -> tuple(task mode body argument continuation)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(942, 10),
  POS(943, 12),
  POS(943, 9)
};

static FUNCTION_INFO i_lambda_cancellationsid_oftask = {
  t_lambda_cancellationsid_oftask, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_113[] = {
  0, // locals
  0, // parameters
  //  request
  LET, 1, var_938_30_request, TAIL_CALL,
  POS(944, 9)
};

static FUNCTION_INFO i_lambda_113 = {
  t_lambda_113, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_queue_log_message_write[] = {
  2, // locals
  0, // parameters
  // log_level >= 4 &log_message:
  var_std__less, 2, var_log_level, num_4, 1, LOCAL(1),
  // log_level >= 4 &log_message:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // update_if log_level >= 4 &log_message:
  var_update_if, 3, LOCAL(2), var_646_4_log_message, lambda_114, 1, var_646_4_log_message,
  // is_empty
  var_is_empty, 1, var_646_4_log_message, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_117, lambda_118, TAIL_CALL,
  POS(949, 15),
  POS(949, 15),
  POS(949, 5),
  POS(958, 19),
  POS(957, 5)
};

static FUNCTION_INFO i_func_queue_log_message_write = {
  t_func_queue_log_message_write, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_114[] = {
  0, // locals
  0, // parameters
  // for_each new_requests
  var_for_each, 3, var_642_4_new_requests, lambda_115, lambda_116, TAIL_CALL,
  POS(950, 7)
};

static FUNCTION_INFO i_lambda_114 = {
  t_lambda_114, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_115[] = {
  5, // locals
  1, // parameters
  LOCAL(4), // 951_12_request
  // request $task $_mode $_body $_arguments $_continuation
  LOCAL(4), 0, 5, LOCAL(5), LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(1),
  // id_of(task)) (parent: @(parent_id_of(task)))
  var_id_of, 1, LOCAL(5), 1, LOCAL(1),
  // parent_id_of(task)))
  var_parent_id_of, 1, LOCAL(5), 1, LOCAL(2),
  // "
  var_std__string, 5, str_CREATED_TASK, LOCAL(1), str__parent, LOCAL(2), string_5, 1, LOCAL(3),
  // append &log_message "
  var_append, 2, var_646_4_log_message, LOCAL(3), 1, var_646_4_log_message,
  // next
  var_next, 0, TAIL_CALL,
  POS(952, 11),
  POS(954, 28),
  POS(954, 52),
  POS(953, 31),
  POS(953, 11),
  POS(955, 11),
  LOCAL(5),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_115 = {
  t_lambda_115, NULL, 6, 2,
  {"952_20_task\000", "951_12_request\000"}
};

static TAB_NUM t_lambda_116[] = {
  0, // locals
  0, // parameters
  //  log_message
  LET, 1, var_646_4_log_message, TAIL_CALL,
  POS(956, 11)
};

static FUNCTION_INFO i_lambda_116 = {
  t_lambda_116, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_117[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_640_4_io, TAIL_CALL,
  POS(959, 9)
};

static FUNCTION_INFO i_lambda_117 = {
  t_lambda_117, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_118[] = {
  2, // locals
  0, // parameters
  // log_level >= 3 &io:
  var_std__less, 2, var_log_level, num_3, 1, LOCAL(1),
  // log_level >= 3 &io:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // update_if log_level >= 3 &io:
  var_update_if, 3, LOCAL(2), var_640_4_io, lambda_119, 1, var_640_4_io,
  // to_utf8
  var_to_utf8, 1, var_646_4_log_message, 1, LOCAL(1),
  // write &io STDERR_FILENO log_message.to_utf8
  var_write, 3, var_640_4_io, var_STDERR_FILENO, LOCAL(1), 1, var_640_4_io,
  // -> io
  LET, 1, var_640_4_io, TAIL_CALL,
  POS(961, 19),
  POS(961, 19),
  POS(961, 9),
  POS(964, 45),
  POS(964, 9),
  POS(965, 9)
};

static FUNCTION_INFO i_lambda_118 = {
  t_lambda_118, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_119[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, string_8, var_651_4_iteration_no, string_9, 1, LOCAL(1),
  // write io STDERR_FILENO "
  var_write, 3, var_640_4_io, var_STDERR_FILENO, LOCAL(1), TAIL_CALL,
  POS(962, 34),
  POS(962, 11)
};

static FUNCTION_INFO i_lambda_119 = {
  t_lambda_119, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_start_io_operation[] = {
  2, // locals
  1, // parameters
  var_967_25_request,
  // request $task $mode $body $argument $continuation
  var_967_25_request, 0, 5, var_968_14_task, var_968_20_mode, var_968_26_body, var_968_32_argument, var_968_42_continuation,
  // mode == START_IO
  var_std__equal, 2, var_968_20_mode, uni_START_IO, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_120, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_122, lambda_125, IO_TAIL_CALL,
  POS(968, 5),
  POS(971, 9),
  POS(970, 9),
  POS(969, 5)
};

static FUNCTION_INFO i_func_start_io_operation = {
  t_func_start_io_operation, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_120[] = {
  2, // locals
  0, // parameters
  // is_cancelled && mode == CHECK_IO
  var_is_cancelled, 1, var_968_14_task, 1, LOCAL(1),
  // is_cancelled && mode == CHECK_IO
  var_std__and, 2, LOCAL(1), lambda_121, 1, LOCAL(2),
  // task.is_cancelled && mode == CHECK_IO
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(972, 14),
  POS(972, 14),
  POS(972, 9)
};

static FUNCTION_INFO i_lambda_120 = {
  t_lambda_120, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_121[] = {
  1, // locals
  0, // parameters
  // mode == CHECK_IO
  var_std__equal, 2, var_968_20_mode, uni_CHECK_IO, 1, LOCAL(1),
  // mode == CHECK_IO
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(972, 30),
  POS(972, 30)
};

static FUNCTION_INFO i_lambda_121 = {
  t_lambda_121, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_122[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(body) == 3:
  var_parameter_count_of, 1, var_968_26_body, 1, LOCAL(1),
  // parameter_count_of(body) == 3:
  var_std__equal, 2, LOCAL(1), num_3, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_123, lambda_124, IO_TAIL_CALL,
  POS(975, 11),
  POS(975, 11),
  POS(974, 9)
};

static FUNCTION_INFO i_lambda_122 = {
  t_lambda_122, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_123[] = {
  1, // locals
  0, // parameters
  // body! !mode &task &io !body &argument
  var_968_26_body, 3, var_968_14_task, var_640_4_io, var_968_32_argument, IO_CALL(5), var_968_20_mode, var_968_14_task, var_640_4_io, var_968_26_body, var_968_32_argument,
  // tuple(task mode body argument continuation) io
  var_tuple, 5, var_968_14_task, var_968_20_mode, var_968_26_body, var_968_32_argument, var_968_42_continuation, 1, LOCAL(1),
  // -> tuple(task mode body argument continuation) io
  LET, 2, LOCAL(1), var_640_4_io, TAIL_CALL,
  POS(976, 13),
  POS(977, 16),
  POS(977, 13)
};

static FUNCTION_INFO i_lambda_123 = {
  t_lambda_123, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_124[] = {
  1, // locals
  0, // parameters
  // body! !mode &task &io !body !argument
  var_968_26_body, 2, var_968_14_task, var_640_4_io, IO_CALL(5), var_968_20_mode, var_968_14_task, var_640_4_io, var_968_26_body, var_968_32_argument,
  // tuple(task mode body argument continuation) io
  var_tuple, 5, var_968_14_task, var_968_20_mode, var_968_26_body, var_968_32_argument, var_968_42_continuation, 1, LOCAL(1),
  // -> tuple(task mode body argument continuation) io
  LET, 2, LOCAL(1), var_640_4_io, TAIL_CALL,
  POS(979, 13),
  POS(980, 16),
  POS(980, 13)
};

static FUNCTION_INFO i_lambda_124 = {
  t_lambda_124, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_125[] = {
  0, // locals
  0, // parameters
  //  request io
  LET, 2, var_967_25_request, var_640_4_io, TAIL_CALL,
  POS(981, 9)
};

static FUNCTION_INFO i_lambda_125 = {
  t_lambda_125, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_has_something_to_do[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 985_26_request
  // request $_task $mode $_body $_arguments $_continuation
  LOCAL(3), 0, 5, LOCAL(1), var_986_21_mode, LOCAL(1), LOCAL(1), LOCAL(1),
  // mode == COMPUTE || mode == EXIT
  var_std__equal, 2, var_986_21_mode, uni_COMPUTE, 1, LOCAL(1),
  // mode == COMPUTE || mode == EXIT
  var_std__or, 2, LOCAL(1), lambda_126, 1, LOCAL(2),
  // -> mode == COMPUTE || mode == EXIT
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(986, 5),
  POS(987, 8),
  POS(987, 8),
  POS(987, 5),
  LOCAL(3)
};

static FUNCTION_INFO i_func_has_something_to_do = {
  t_func_has_something_to_do, NULL, 4, 1,
  {"985_26_request\000"}
};

static TAB_NUM t_lambda_126[] = {
  1, // locals
  0, // parameters
  // mode == EXIT
  var_std__equal, 2, var_986_21_mode, uni_EXIT, 1, LOCAL(1),
  // mode == EXIT
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(987, 27),
  POS(987, 27)
};

static FUNCTION_INFO i_lambda_126 = {
  t_lambda_126, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_maybe_exit[] = {
  1, // locals
  1, // parameters
  var_989_17_something_to_do,
  // is_empty:
  var_is_empty, 1, var_640_4_io, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_io_is_empty, var_pass, IO_TAIL_CALL,
  POS(991, 10),
  POS(990, 5)
};

static FUNCTION_INFO i_func_maybe_exit = {
  t_func_maybe_exit, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_io_is_empty[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_648_4_requests, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_requests_is_empty, lambda_127, IO_TAIL_CALL,
  POS(993, 20),
  POS(992, 9)
};

static FUNCTION_INFO i_lambda_io_is_empty = {
  t_lambda_io_is_empty, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_requests_is_empty[] = {
  0, // locals
  0, // parameters
  // exit! exit_status # no more requests and no more pending log-writes
  var_exit, 1, var_639_4_exit_status, IO_TAIL_CALL,
  POS(994, 13)
};

static FUNCTION_INFO i_lambda_requests_is_empty = {
  t_lambda_requests_is_empty, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_127[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_989_17_something_to_do, var_pass, lambda_128, IO_TAIL_CALL,
  POS(996, 13)
};

static FUNCTION_INFO i_lambda_127 = {
  t_lambda_127, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_128[] = {
  1, // locals
  0, // parameters
  // write! $_bytes_written STDERR_FILENO "
  var_write, 2, var_STDERR_FILENO, str_NO_TASK_IS_READY, IO_CALL(1), LOCAL(1),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(1000, 17),
  POS(1002, 17)
};

static FUNCTION_INFO i_lambda_128 = {
  t_lambda_128, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_get_and_check_events[] = {
  1, // locals
  1, // parameters
  var_1005_27_something_to_do,
  // is_empty
  var_is_empty, 1, var_640_4_io, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_129, lambda_130, IO_TAIL_CALL,
  POS(1007, 10),
  POS(1006, 5)
};

static FUNCTION_INFO i_func_get_and_check_events = {
  t_func_get_and_check_events, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_129[] = {
  0, // locals
  0, // parameters
  //  requests io
  LET, 2, var_648_4_requests, var_640_4_io, TAIL_CALL,
  POS(1008, 9)
};

static FUNCTION_INFO i_lambda_129 = {
  t_lambda_129, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_130[] = {
  1, // locals
  0, // parameters
  // $timeout
  var_if, 3, var_1005_27_something_to_do, lambda_131, lambda_132, 1, LOCAL(1),
  // get_events! &io !events timeout
  var_get_events, 2, var_640_4_io, LOCAL(1), IO_CALL(2), var_640_4_io, var_647_4_events,
  // map &requests check_events
  var_map, 2, var_648_4_requests, func_check_events, 1, var_648_4_requests,
  // !events empty_list
  LET, 1, var_empty_list, 1, var_647_4_events,
  // -> requests io
  LET, 2, var_648_4_requests, var_640_4_io, TAIL_CALL,
  POS(1010, 9),
  POS(1015, 9),
  POS(1016, 9),
  POS(1017, 9),
  POS(1018, 9),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_130 = {
  t_lambda_130, NULL, 5, 1,
  {"1010_10_timeout\000"}
};

static TAB_NUM t_lambda_131[] = {
  0, // locals
  0, // parameters
  //  0 # poll
  LET, 1, num_0, TAIL_CALL,
  POS(1013, 15)
};

static FUNCTION_INFO i_lambda_131 = {
  t_lambda_131, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_132[] = {
  0, // locals
  0, // parameters
  //  undefined # wait "forever"
  LET, 1, var_undefined, TAIL_CALL,
  POS(1014, 15)
};

static FUNCTION_INFO i_lambda_132 = {
  t_lambda_132, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_check_events[] = {
  1, // locals
  1, // parameters
  var_1020_19_request,
  // request $task $mode $body $argument $continuation
  var_1020_19_request, 0, 5, var_1021_14_task, var_1021_20_mode, var_1021_26_body, var_1021_32_argument, var_1021_42_continuation,
  // mode == CHECK_IO:
  var_std__equal, 2, var_1021_20_mode, uni_CHECK_IO, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_133, lambda_134, TAIL_CALL,
  POS(1021, 5),
  POS(1023, 7),
  POS(1022, 5)
};

static FUNCTION_INFO i_func_check_events = {
  t_func_check_events, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_133[] = {
  1, // locals
  0, // parameters
  // body !mode &task events !body &argument
  var_1021_26_body, 3, var_1021_14_task, var_647_4_events, var_1021_32_argument, 4, var_1021_20_mode, var_1021_14_task, var_1021_26_body, var_1021_32_argument,
  // tuple(task mode body argument continuation)
  var_tuple, 5, var_1021_14_task, var_1021_20_mode, var_1021_26_body, var_1021_32_argument, var_1021_42_continuation, 1, LOCAL(1),
  // -> tuple(task mode body argument continuation)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1024, 9),
  POS(1025, 12),
  POS(1025, 9)
};

static FUNCTION_INFO i_lambda_133 = {
  t_lambda_133, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_134[] = {
  0, // locals
  0, // parameters
  //  request
  LET, 1, var_1020_19_request, TAIL_CALL,
  POS(1026, 9)
};

static FUNCTION_INFO i_lambda_134 = {
  t_lambda_134, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_exit_task[] = {
  4, // locals
  1, // parameters
  var_1030_16_task,
  // $parent_id parent_id_of(task)
  var_parent_id_of, 1, var_1030_16_task, 1, LOCAL(3),
  // removed_children(parent_id) empty_key_order_set)
  var_645_4_removed_children, 1, LOCAL(3), 1, LOCAL(1),
  // $removed default_value(removed_children(parent_id) empty_key_order_set)
  var_default_value, 2, LOCAL(1), var_empty_key_order_set, 1, LOCAL(4),
  // id_of(task)) true
  var_id_of, 1, var_1030_16_task, 1, LOCAL(2),
  // removed(id_of(task)) true
  LOCAL(4), 2, LOCAL(2), var_true, 1, LOCAL(4),
  // removed_children(parent_id) removed
  var_645_4_removed_children, 2, LOCAL(3), LOCAL(4), 1, var_645_4_removed_children,
  // exit_handlers_of(task)
  var_exit_handlers_of, 1, var_1030_16_task, 1, LOCAL(1),
  // for_each exit_handlers_of(task)
  var_for_each, 3, LOCAL(1), lambda_135, lambda_140, IO_TAIL_CALL,
  POS(1031, 5),
  POS(1032, 28),
  POS(1032, 5),
  POS(1033, 14),
  POS(1033, 6),
  POS(1034, 6),
  POS(1035, 14),
  POS(1035, 5),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_exit_task = {
  t_func_exit_task, NULL, 8, 2,
  {"1032_6_removed\000", "1031_6_parent_id\000"}
};

static TAB_NUM t_lambda_135[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 1036_10_item
  // item $handler $handler_arguments
  LOCAL(3), 0, 2, var_1037_15_handler, var_1037_24_handler_arguments,
  // parameter_count_of(handler) == 3:
  var_parameter_count_of, 1, var_1037_15_handler, 1, LOCAL(1),
  // parameter_count_of(handler) == 3:
  var_std__equal, 2, LOCAL(1), num_3, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_136, lambda_138, IO_TAIL_CALL,
  POS(1037, 9),
  POS(1039, 11),
  POS(1039, 11),
  POS(1038, 9),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_135 = {
  t_lambda_135, NULL, 4, 1,
  {"1036_10_item\000"}
};

static TAB_NUM t_lambda_136[] = {
  2, // locals
  0, // parameters
  // handler! task &io $success handler_arguments
  var_1037_15_handler, 3, var_1030_16_task, var_640_4_io, var_1037_24_handler_arguments, IO_CALL(2), var_640_4_io, LOCAL(2),
  // is_an_error &exit_status -> EXIT_FAILURE
  var_is_an_error, 1, LOCAL(2), 1, LOCAL(1),
  // update_if success.is_an_error &exit_status -> EXIT_FAILURE
  var_update_if, 3, LOCAL(1), var_639_4_exit_status, lambda_137, 1, var_639_4_exit_status,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1040, 13),
  POS(1041, 31),
  POS(1041, 13),
  POS(1042, 13),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_136 = {
  t_lambda_136, NULL, 4, 1,
  {"1040_32_success\000"}
};

static TAB_NUM t_lambda_137[] = {
  0, // locals
  0, // parameters
  //  EXIT_FAILURE
  LET, 1, var_EXIT_FAILURE, TAIL_CALL,
  POS(1041, 58)
};

static FUNCTION_INFO i_lambda_137 = {
  t_lambda_137, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_138[] = {
  2, // locals
  0, // parameters
  // handler! task &io $success
  var_1037_15_handler, 2, var_1030_16_task, var_640_4_io, IO_CALL(2), var_640_4_io, LOCAL(2),
  // is_an_error &exit_status -> EXIT_FAILURE
  var_is_an_error, 1, LOCAL(2), 1, LOCAL(1),
  // update_if success.is_an_error &exit_status -> EXIT_FAILURE
  var_update_if, 3, LOCAL(1), var_639_4_exit_status, lambda_139, 1, var_639_4_exit_status,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1044, 13),
  POS(1045, 31),
  POS(1045, 13),
  POS(1046, 13),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_138 = {
  t_lambda_138, NULL, 4, 1,
  {"1044_32_success\000"}
};

static TAB_NUM t_lambda_139[] = {
  0, // locals
  0, // parameters
  //  EXIT_FAILURE
  LET, 1, var_EXIT_FAILURE, TAIL_CALL,
  POS(1045, 58)
};

static FUNCTION_INFO i_lambda_139 = {
  t_lambda_139, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_140[] = {
  0, // locals
  0, // parameters
  //  io exit_status removed_children
  LET, 3, var_640_4_io, var_639_4_exit_status, var_645_4_removed_children, TAIL_CALL,
  POS(1047, 9)
};

static FUNCTION_INFO i_lambda_140 = {
  t_lambda_140, NULL, 1, 0,
  {}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_UNIQUE, 0, {.str_8 = "COMPUTE"}},
  {FLT_UNIQUE, 0, {.str_8 = "WAIT"}},
  {FLT_UNIQUE, 0, {.str_8 = "START_IO"}},
  {FLT_UNIQUE, 0, {.str_8 = "CHECK_IO"}},
  {FLT_UNIQUE, 0, {.str_8 = "COMPLETE_IO"}},
  {FLT_UNIQUE, 0, {.str_8 = "EXIT"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__error___generate_error_message}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_STRING_8, 3, {.str_8 = " - "}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_STRING_8, 2, {.str_8 = " ("}},
  {FLT_CHARACTER, 0, {.value = 41}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io_task___task_id_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io_task___parent_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io_task___children_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io_task___perform_io}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io_task___pause}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io_task___wait_for_message}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io_task___check_io}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io_task___performed_io}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io_task___recheck_io}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io_task___complete_io}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io_task___checked_io}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io_task___log}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io_task___send}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io_task___receive}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io_task___cancel}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_task_id_is_an_integer}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io_task___on_exit}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io_task___on_error}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io_task___on_cancel}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io_task___load}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_load_request}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_task_is_cancelled}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_STRING_8, 1, {.str_8 = "r"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_fd_is_an_error}},
  {FLT_STRING_8, 6, {.str_8 = "load \042"}},
  {FLT_STRING_8, 1, {.str_8 = "\042"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_check_load_request}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_task_is_cancelled}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_READ}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_READ_FAILED}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_24}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_25}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_complete_load_request}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_26}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_try_close_file}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_27}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io_task___save}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_save_request}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3_task_is_cancelled}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_28}},
  {FLT_STRING_8, 1, {.str_8 = "w"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_fd_is_an_error}},
  {FLT_STRING_8, 6, {.str_8 = "save \042"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_29}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_check_save_request}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4_task_is_cancelled}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_30}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_31}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_32}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_WRITE_COMPLETED}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_33}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_WRITE_FAILED}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_34}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_35}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_complete_save_request}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_36}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_2_try_close_file}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_37}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io_task___read}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_start_read_request}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5_task_is_cancelled}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_38}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_check_read_request}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6_task_is_cancelled}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_39}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_40}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_41}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_42}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_43}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_44}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_45}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_46}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_47}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_complete_read_request}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io_task___write}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_write_request}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7_task_is_cancelled}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_48}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_check_write_request}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8_task_is_cancelled}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_49}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_50}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_51}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_52}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_53}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io_task___join_process}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_join_process_request}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_join_process_request_pending}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_54}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_55}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_56}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_57}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io_task___catch_signal}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_catch_signal_request}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_catch_signal_request_pending}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9_task_is_cancelled}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_58}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_59}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_60}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_61}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_signals_is_empty}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_62}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_cancel_catch_signal_request}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_catch_signal_request_completed}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io_task___fork}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__io_task___exit}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__io_task_manager}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_loop}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_63}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_64}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_65}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_66}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_67}},
  {FLT_STRING_8, 10, {.str_8 = " (parent: "}},
  {FLT_STRING_8, 2, {.str_8 = ")\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_68}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_STRING_8, 13, {.str_8 = "REMOVED TASK "}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_69}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_70}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_71}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_72}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_73}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_74}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_75}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_76}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_77}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_78}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_COMPLETE_IO}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_EXIT}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_79}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_COMPUTE}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_argument_is_an_error}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_80}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_81}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_complete_io_operation}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_82}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_83}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_check_for_error}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_argument_is_an_error}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_84}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_handle_error}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_error_handler_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_85}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_maybe_cancel_task}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10_task_is_cancelled}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_cancel_handler_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_86}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_87}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_88}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_compute}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_89}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_90}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_91}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_92}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_93}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_check_request}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_request_is_an_error}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_94}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_95}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_collect_messages}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_96}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_receiver_is_an_integer}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_97}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_send_message}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_98}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_collect_cancel_requests}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_99}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_100}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_collect_log_messages}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_101}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_102}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_103}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_104}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_append_log_entry}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_105}},
  {FLT_STRING_8, 2, {.str_8 = ": "}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_106}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_create_new_tasks}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_107}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_108}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_109}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_110}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_receive_messages}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_messages_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_111}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_112}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_maybe_mark_as_cancelled}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_cancellationsid_oftask}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_113}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_queue_log_message_write}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_114}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_115}},
  {FLT_STRING_8, 13, {.str_8 = "CREATED TASK "}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_116}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_117}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_118}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_119}},
  {FLT_STRING_8, 4, {.str_8 = "---["}},
  {FLT_STRING_8, 29, {.str_8 = "]---------------------------\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_start_io_operation}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_120}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_121}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_122}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_123}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_124}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_125}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_has_something_to_do}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_126}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_maybe_exit}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_io_is_empty}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_requests_is_empty}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_127}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_128}},
  {FLT_STRING_8, 52, {.str_8 = "NO TASK IS READY AND NO I/O OPERATIONS ARE PENDING!\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_get_and_check_events}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_129}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_130}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_131}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_132}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_check_events}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_133}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_134}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_exit_task}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_135}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_136}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_137}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_138}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_139}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_140}}
};

static ATTRIBUTE_DEFINITION std_types__error__attributes[] = {
  {-var_additional_error_information_of, -var_undefined},
  {var_generate_error_message, -func_std_types__error___generate_error_message}
};

static ATTRIBUTE_DEFINITION std_types__io_task__attributes[] = {
  {-var_log_messages_of, -var_empty_list},
  {-var_exit_handlers_of, -var_empty_list},
  {-var_error_handler_of, -var_undefined},
  {-var_cancel_handler_of, -var_undefined},
  {-var_parent_id_of, -num_0},
  {-var_child_ids_of, -var_empty_list},
  {-var_inbound_messages_of, -var_empty_list},
  {-var_outbound_messages_of, -var_empty_list},
  {-var_fork_requests_of, -var_empty_list},
  {-var_cancel_requests_of, -var_empty_list},
  {-var_is_cancelled, -var_false},
  {var_task_id_of, -func_std_types__io_task___task_id_of},
  {var_parent_of, -func_std_types__io_task___parent_of},
  {var_children_of, -func_std_types__io_task___children_of},
  {var_perform_io, -func_std_types__io_task___perform_io},
  {var_pause, -func_std_types__io_task___pause},
  {var_wait_for_message, -func_std_types__io_task___wait_for_message},
  {var_check_io, -func_std_types__io_task___check_io},
  {var_performed_io, -func_std_types__io_task___performed_io},
  {var_recheck_io, -func_std_types__io_task___recheck_io},
  {var_complete_io, -func_std_types__io_task___complete_io},
  {var_checked_io, -func_std_types__io_task___checked_io},
  {var_log, -func_std_types__io_task___log},
  {var_send, -func_std_types__io_task___send},
  {var_receive, -func_std_types__io_task___receive},
  {var_cancel, -func_std_types__io_task___cancel},
  {var_on_exit, -func_std_types__io_task___on_exit},
  {var_on_error, -func_std_types__io_task___on_error},
  {var_on_cancel, -func_std_types__io_task___on_cancel},
  {var_load, -func_std_types__io_task___load},
  {var_save, -func_std_types__io_task___save},
  {var_read, -func_std_types__io_task___read},
  {var_write, -func_std_types__io_task___write},
  {var_join_process, -func_std_types__io_task___join_process},
  {var_catch_signal, -func_std_types__io_task___catch_signal},
  {var_fork, -func_std_types__io_task___fork},
  {var_exit, -func_std_types__io_task___exit}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_INITIALIZED, 0, 0,
    "log_level\000std", NULL,
    {.const_idx = -num_1}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(91, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "perform_io\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "pause\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "wait_for_message\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "fork\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "send\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "receive\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "on_error\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "on_cancel\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "check_io\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "on_exit\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "performed_io\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "recheck_io\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "complete_io\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "checked_io\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "catch_signal\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "task_id_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "parent_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "children_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "log_messages_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "exit_handlers_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "error_handler_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "cancel_handler_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "id_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "parent_id_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "child_ids_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "inbound_messages_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "outbound_messages_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "fork_requests_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "cancel_requests_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_cancelled\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "additional_error_information_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "error\000std_types", std_types__error__attributes,
    {.position = POS(223, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "additional_error_information_of\000", NULL,
    {.position = POS(223, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(223, 51)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "generate_error_message\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "generate_error_message\000", NULL,
    {.position = POS(227, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "228_4_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error_message_text_of\000", NULL,
    {.position = POS(228, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "229_4_errno\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "errno_of\000", NULL,
    {.position = POS(229, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(230, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(231, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "strerror\000", NULL,
    {.position = POS(232, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(230, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "233_4_failed_attribute\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "failed_attribute_of\000", NULL,
    {.position = POS(233, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "237_4_additional_information\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(241, 5)}
  },
  {
    FOT_DERIVED, 0, 37,
    "io_task\000std_types", std_types__io_task__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "object\000std_types", NULL,
    {.position = POS(243, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(245, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(255, 34)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "task_id_of\000", NULL,
    {.position = POS(257, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "parent_of\000", NULL,
    {.position = POS(258, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "259_4_id\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(261, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(261, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(260, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "children_of\000", NULL,
    {.position = POS(265, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "perform_io\000", NULL,
    {.position = POS(267, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(274, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "pause\000", NULL,
    {.position = POS(276, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "wait_for_message\000", NULL,
    {.position = POS(279, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "279_40_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "279_45_continuation\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(281, 31)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "check_io\000", NULL,
    {.position = POS(285, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "performed_io\000", NULL,
    {.position = POS(288, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "recheck_io\000", NULL,
    {.position = POS(296, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "complete_io\000", NULL,
    {.position = POS(299, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "checked_io\000", NULL,
    {.position = POS(302, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "log\000", NULL,
    {.position = POS(305, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "306_4_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(306, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(309, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "send\000", NULL,
    {.position = POS(315, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "315_28_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "315_33_receiver\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "315_42_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(317, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(317, 14)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "receive\000", NULL,
    {.position = POS(323, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "323_31_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get\000", NULL,
    {.position = POS(328, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "cancel\000", NULL,
    {.position = POS(331, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "333_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "334_5_task_id\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_integer\000", NULL,
    {.position = POS(337, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_list\000", NULL,
    {.position = POS(341, 47)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "on_exit\000", NULL,
    {.position = POS(344, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "put\000", NULL,
    {.position = POS(350, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "on_error\000", NULL,
    {.position = POS(353, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "on_cancel\000", NULL,
    {.position = POS(357, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "load\000", NULL,
    {.position = POS(363, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "366_19_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "366_24_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "366_27_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "371_16_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open\000", NULL,
    {.position = POS(371, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(373, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(374, 49)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "start_reading_from\000", NULL,
    {.position = POS(378, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "381_25_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "381_30_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "381_37_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "382_15_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "382_19_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "stop_reading_from\000", NULL,
    {.position = POS(386, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "close\000", NULL,
    {.position = POS(387, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "try\000", NULL,
    {.position = POS(387, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "392_26_efd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "392_31_data\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ\000", NULL,
    {.position = POS(394, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(403, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ_FAILED\000", NULL,
    {.position = POS(404, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(393, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(390, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "414_15_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "420_15_fd\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "save\000", NULL,
    {.position = POS(425, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "428_19_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "428_24_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "429_15_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "429_25_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "434_16_fd\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "write\000", NULL,
    {.position = POS(441, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "444_25_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "444_30_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "444_37_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cancel_write\000", NULL,
    {.position = POS(448, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "454_26_efd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "454_31_data\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_COMPLETED\000", NULL,
    {.position = POS(456, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_FAILED\000", NULL,
    {.position = POS(461, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "470_36_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "475_15_fd\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "read\000", NULL,
    {.position = POS(479, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "490_25_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "490_30_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "490_33_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "499_25_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "499_30_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "499_37_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "500_15_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "500_19_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "500_27_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "509_26_efd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "509_31_data\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(518, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(518, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(510, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "533_20_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "533_25_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "534_15_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "534_19_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "542_26_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "542_31_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "542_38_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "551_26_efd\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "join_process\000", NULL,
    {.position = POS(559, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "566_35_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "566_47_pid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "569_22_epid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "569_28_status\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PROCESS_JOINED\000", NULL,
    {.position = POS(571, 19)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "catch_signal\000", NULL,
    {.position = POS(577, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "start_catching_signals\000", NULL,
    {.position = POS(581, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "584_35_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "584_40_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "589_10_signals\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "592_34_signal\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGNAL\000", NULL,
    {.position = POS(594, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "stop_catching_signals\000", NULL,
    {.position = POS(606, 5)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "fork\000", NULL,
    {.position = POS(613, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "exit\000", NULL,
    {.position = POS(623, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXIT_SUCCESS\000", NULL,
    {.position = POS(626, 14)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "io_task_manager\000std", NULL,
    {.const_idx = -func_std__io_task_manager}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "639_4_exit_status\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "640_4_io\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "io\000std_types", NULL,
    {.position = POS(640, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "641_4_updated_requests\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "642_4_new_requests\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "643_4_cancellations\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_key_order_set\000", NULL,
    {.position = POS(643, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "644_4_sent_messages\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_key_order_table\000", NULL,
    {.position = POS(644, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "645_4_removed_children\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "646_4_log_message\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "647_4_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "648_4_requests\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(649, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "650_4_current_task_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "651_4_iteration_no\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(658, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(659, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "log_level\000", NULL,
    {.position = POS(660, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(660, 50)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "662_12_parent_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "700_6_do_receive_messages\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(700, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "701_6_do_cancel_tasks\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "702_21_request\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(726, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(724, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "733_10_request\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "734_18_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "734_24_mode\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "734_30_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "734_36_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "734_46_continuation\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXIT_FAILURE\000", NULL,
    {.position = POS(739, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(753, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "769_12_error_handler\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "785_16_cancel_handler\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(655, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "812_14_request\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "813_14_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "813_20_mode\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "813_26_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "813_32_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "813_42_continuation\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "814_6_removed\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "filter\000", NULL,
    {.position = POS(816, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "838_23_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "841_16_receiver\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "841_26_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "default_value\000", NULL,
    {.position = POS(849, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "857_30_task\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(860, 28)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "866_27_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "878_23_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "878_28_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(882, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "885_23_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "928_23_request\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "929_14_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "929_20_mode\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "929_26_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "929_32_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "929_42_continuation\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "930_6_messages\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "938_30_request\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "939_14_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "939_20_mode\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "939_26_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "939_32_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "939_42_continuation\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDERR_FILENO\000", NULL,
    {.position = POS(962, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(964, 45)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "967_25_request\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "968_14_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "968_20_mode\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "968_26_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "968_32_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "968_42_continuation\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "986_21_mode\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "989_17_something_to_do\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(998, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1005_27_something_to_do\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_events\000", NULL,
    {.position = POS(1015, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1020_19_request\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1021_14_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1021_20_mode\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1021_26_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1021_32_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1021_42_continuation\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1030_16_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1037_15_handler\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1037_24_handler_arguments\000", NULL
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__io__io_task_manager = {
  "_basic__io__io_task_manager", // module name
  "basic/io/io_task_manager.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  270, // number of constants
  271, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
