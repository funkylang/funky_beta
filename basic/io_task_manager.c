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
  lambda_READ_ERROR = -67,
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
  lambda_WRITE_ERROR = -89,
  lambda_34 = -90,
  lambda_35 = -91,
  func_complete_save_request = -92,
  lambda_36 = -93,
  func_2_try_close_file = -94,
  lambda_37 = -95,
  func_std_types__io_task___read_from = -96,
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
  func_std_types__io_task___write_to = -112,
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
  var_std__log, // attribute
  var_std__send, // attribute
  var_std__cancel, // attribute
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
  var_219_1_message, // dynamic
  var_error_message_text_of, // extern
  var_220_1_errno, // dynamic
  var_errno_of, // extern
  var_is_defined, // extern
  var_append, // extern
  var_strerror, // extern
  var_update_if, // extern
  var_224_1_failed_attribute, // dynamic
  var_failed_attribute_of, // extern
  var_228_1_additional_information, // dynamic
  var_push, // extern
  var_std_types__io_task, // derived
  var_std_types__object, // extern
  var_empty_list, // extern
  var_false, // extern
  var_task_id_of, // extern polymorphic
  var_parent_of, // extern polymorphic
  var_250_1_id, // dynamic
  var_std__equal, // extern
  var_std__not, // extern
  var_if, // extern
  var_children_of, // extern polymorphic
  var_perform_io, // extern polymorphic
  var_tuple, // extern
  var_pause, // extern polymorphic
  var_wait_for_message, // extern polymorphic
  var_270_39_self, // dynamic
  var_270_44_continuation, // dynamic
  var_is_empty, // extern
  var_check_io, // extern polymorphic
  var_performed_io, // extern polymorphic
  var_recheck_io, // extern polymorphic
  var_complete_io, // extern polymorphic
  var_checked_io, // extern polymorphic
  var_log, // extern polymorphic
  var_297_1_str, // dynamic
  var_create_string, // extern
  var_has_suffix, // extern
  var_send, // extern polymorphic
  var_306_27_self, // dynamic
  var_306_32_receiver, // dynamic
  var_306_41_message, // dynamic
  var_is_a_list, // extern
  var_std__and, // extern
  var_receive, // extern polymorphic
  var_314_30_self, // dynamic
  var_get, // extern
  var_cancel, // extern polymorphic
  var_324_0_self, // dynamic
  var_325_0_task_id, // dynamic
  var_is_an_integer, // extern
  var_to_list, // extern
  var_on_exit, // extern polymorphic
  var_put, // extern
  var_on_error, // extern polymorphic
  var_on_cancel, // extern polymorphic
  var_load, // extern polymorphic
  var_357_16_task, // dynamic
  var_357_21_io, // dynamic
  var_357_24_filename, // dynamic
  var_362_7_fd, // dynamic
  var_open, // extern
  var_is_an_error, // extern
  var_std__string, // extern
  var_start_reading_from, // extern
  var_372_22_task, // dynamic
  var_372_27_events, // dynamic
  var_372_34_argument, // dynamic
  var_373_10_fd, // dynamic
  var_373_14_buf, // dynamic
  var_stop_reading_from, // extern
  var_close, // extern
  var_try, // extern
  var_383_13_efd, // dynamic
  var_383_18_data, // dynamic
  var_READ, // extern
  var_next, // extern
  var_READ_ERROR, // extern
  var_case, // extern
  var_for_each, // extern
  var_405_10_fd, // dynamic
  var_411_10_fd, // dynamic
  var_save, // extern polymorphic
  var_419_16_task, // dynamic
  var_419_21_io, // dynamic
  var_420_10_filename, // dynamic
  var_420_20_data, // dynamic
  var_425_7_fd, // dynamic
  var_write_to, // extern polymorphic
  var_435_22_task, // dynamic
  var_435_27_events, // dynamic
  var_435_34_fd, // dynamic
  var_cancel_write_to, // extern
  var_445_13_efd, // dynamic
  var_445_18_data, // dynamic
  var_WRITE_COMPLETED, // extern
  var_WRITE_ERROR, // extern
  var_461_33_fd, // dynamic
  var_466_10_fd, // dynamic
  var_read_from, // extern polymorphic
  var_481_22_task, // dynamic
  var_481_27_io, // dynamic
  var_481_30_argument, // dynamic
  var_490_22_task, // dynamic
  var_490_27_events, // dynamic
  var_490_34_argument, // dynamic
  var_491_10_fd, // dynamic
  var_491_14_length, // dynamic
  var_491_22_buf, // dynamic
  var_500_13_efd, // dynamic
  var_500_18_data, // dynamic
  var_length_of, // extern
  var_std__less, // extern
  var_if_not, // extern
  var_524_17_task, // dynamic
  var_524_22_io, // dynamic
  var_525_10_fd, // dynamic
  var_525_14_text, // dynamic
  var_533_23_task, // dynamic
  var_533_28_events, // dynamic
  var_533_35_fd, // dynamic
  var_542_13_efd, // dynamic
  var_join_process, // extern polymorphic
  var_557_32_task, // dynamic
  var_557_44_pid, // dynamic
  var_560_13_epid, // dynamic
  var_560_19_status, // dynamic
  var_PROCESS_JOINED, // extern
  var_catch_signal, // extern polymorphic
  var_start_catching_signals, // extern
  var_575_32_task, // dynamic
  var_575_37_events, // dynamic
  var_580_1_signals, // dynamic
  var_583_21_signal, // dynamic
  var_SIGNAL, // extern
  var_stop_catching_signals, // extern
  var_fork, // extern polymorphic
  var_exit, // extern polymorphic
  var_EXIT_SUCCESS, // extern
  var_std__io_task_manager, // initialized
  var_630_1_exit_status, // dynamic
  var_631_1_io, // dynamic
  var_std_types__io, // extern
  var_632_1_updated_requests, // dynamic
  var_633_1_new_requests, // dynamic
  var_634_1_cancellations, // dynamic
  var_empty_key_order_set, // extern
  var_635_1_sent_messages, // dynamic
  var_empty_key_order_table, // extern
  var_636_1_removed_children, // dynamic
  var_637_1_log_message, // dynamic
  var_638_1_events, // dynamic
  var_639_1_requests, // dynamic
  var_list, // extern
  var_641_1_current_task_id, // dynamic
  var_642_1_iteration_no, // dynamic
  var_inc, // extern
  var_map, // extern
  var_log_level, // extern
  var_is_not_empty, // extern
  var_653_3_parent_id, // dynamic
  var_691_1_do_receive_messages, // dynamic
  var_not, // extern
  var_692_1_do_cancel_tasks, // dynamic
  var_693_16_request, // dynamic
  var_any_of, // extern
  var_std__or, // extern
  var_724_3_request, // dynamic
  var_725_9_task, // dynamic
  var_725_15_mode, // dynamic
  var_725_21_body, // dynamic
  var_725_27_argument, // dynamic
  var_725_37_continuation, // dynamic
  var_EXIT_FAILURE, // extern
  var_parameter_count_of, // extern
  var_760_1_error_handler, // dynamic
  var_776_1_cancel_handler, // dynamic
  var_loop, // extern
  var_803_11_request, // dynamic
  var_804_9_task, // dynamic
  var_804_15_mode, // dynamic
  var_804_21_body, // dynamic
  var_804_27_argument, // dynamic
  var_804_37_continuation, // dynamic
  var_805_1_removed, // dynamic
  var_filter, // extern
  var_829_20_task, // dynamic
  var_832_7_receiver, // dynamic
  var_832_17_message, // dynamic
  var_default_value, // extern
  var_848_27_task, // dynamic
  var_true, // extern
  var_857_24_task, // dynamic
  var_869_20_task, // dynamic
  var_869_25_message, // dynamic
  var_string, // extern
  var_876_20_task, // dynamic
  var_919_20_request, // dynamic
  var_920_9_task, // dynamic
  var_920_15_mode, // dynamic
  var_920_21_body, // dynamic
  var_920_27_argument, // dynamic
  var_920_37_continuation, // dynamic
  var_921_1_messages, // dynamic
  var_929_27_request, // dynamic
  var_930_9_task, // dynamic
  var_930_15_mode, // dynamic
  var_930_21_body, // dynamic
  var_930_27_argument, // dynamic
  var_930_37_continuation, // dynamic
  var_STDERR_FILENO, // extern
  var_to_utf8, // extern
  var_958_22_request, // dynamic
  var_959_9_task, // dynamic
  var_959_15_mode, // dynamic
  var_959_21_body, // dynamic
  var_959_27_argument, // dynamic
  var_959_37_continuation, // dynamic
  var_977_16_mode, // dynamic
  var_980_14_something_to_do, // dynamic
  var_pass, // extern
  var_write, // extern
  var_996_24_something_to_do, // dynamic
  var_get_events, // extern
  var_1011_16_request, // dynamic
  var_1012_9_task, // dynamic
  var_1012_15_mode, // dynamic
  var_1012_21_body, // dynamic
  var_1012_27_argument, // dynamic
  var_1012_37_continuation, // dynamic
  var_1021_13_task, // dynamic
  var_1028_6_handler, // dynamic
  var_1028_15_handler_arguments, // dynamic
  var__END
};


static TAB_NUM t_func_std_types__error___generate_error_message[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 218_43_self
  // $message error_message_text_of(self)
  var_error_message_text_of, 1, LOCAL(2), 1, var_219_1_message,
  // $errno errno_of(self)
  var_errno_of, 1, LOCAL(2), 1, var_220_1_errno,
  // is_defined &message:
  var_is_defined, 1, var_220_1_errno, 1, LOCAL(1),
  // update_if errno.is_defined &message:
  var_update_if, 3, LOCAL(1), var_219_1_message, lambda_1, 1, var_219_1_message,
  // $failed_attribute failed_attribute_of(self)
  var_failed_attribute_of, 1, LOCAL(2), 1, var_224_1_failed_attribute,
  // is_defined &message:
  var_is_defined, 1, var_224_1_failed_attribute, 1, LOCAL(1),
  // update_if failed_attribute.is_defined &message:
  var_update_if, 3, LOCAL(1), var_219_1_message, lambda_2, 1, var_219_1_message,
  // $additional_information additional_error_information_of(self)
  var_additional_error_information_of, 1, LOCAL(2), 1, var_228_1_additional_information,
  // is_defined message:
  var_is_defined, 1, var_228_1_additional_information, 1, LOCAL(1),
  // update_if additional_information.is_defined message:
  var_update_if, 3, LOCAL(1), var_219_1_message, lambda_3, TAIL_CALL,
  POS(219, 3),
  POS(220, 3),
  POS(221, 19),
  POS(221, 3),
  POS(224, 3),
  POS(225, 30),
  POS(225, 3),
  POS(228, 3),
  POS(229, 36),
  POS(229, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // append &message " - "
  var_append, 2, var_219_1_message, string_1, 1, var_219_1_message,
  // strerror(errno)
  var_strerror, 1, var_220_1_errno, 1, LOCAL(1),
  // append message strerror(errno)
  var_append, 2, var_219_1_message, LOCAL(1), TAIL_CALL,
  POS(222, 5),
  POS(223, 20),
  POS(223, 5)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // append &message " - "
  var_append, 2, var_219_1_message, string_1, 1, var_219_1_message,
  // append message failed_attribute
  var_append, 2, var_219_1_message, var_224_1_failed_attribute, TAIL_CALL,
  POS(226, 5),
  POS(227, 5)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  // append &message " ("
  var_append, 2, var_219_1_message, string_2, 1, var_219_1_message,
  // append &message additional_information
  var_append, 2, var_219_1_message, var_228_1_additional_information, 1, var_219_1_message,
  // push message ')'
  var_push, 2, var_219_1_message, chr_41, TAIL_CALL,
  POS(230, 5),
  POS(231, 5),
  POS(232, 5)
};

static TAB_NUM t_func_std_types__io_task___task_id_of[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 248_33_self
  // id_of(self)
  var_id_of, 1, LOCAL(2), 1, LOCAL(1),
  // -> id_of(self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(248, 43),
  POS(248, 40)
};

static TAB_NUM t_func_std_types__io_task___parent_of[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 249_32_self
  // $id parent_id_of(self)
  var_parent_id_of, 1, LOCAL(3), 1, var_250_1_id,
  // id != 0
  var_std__equal, 2, var_250_1_id, num_0, 1, LOCAL(1),
  // id != 0
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_4, lambda_5, TAIL_CALL,
  POS(250, 3),
  POS(252, 5),
  POS(252, 5),
  POS(251, 3)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  id
  LET, 1, var_250_1_id, TAIL_CALL,
  POS(253, 7)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(254, 7)
};

static TAB_NUM t_func_std_types__io_task___children_of[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 256_34_self
  // child_ids_of(self)
  var_child_ids_of, 1, LOCAL(2), 1, LOCAL(1),
  // -> child_ids_of(self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(256, 44),
  POS(256, 41)
};

static TAB_NUM t_func_std_types__io_task___perform_io[] = {
  4, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 260_0_self
  MANDATORY_PARAMETER, LOCAL(2), // 261_0_body
  var_undefined, LOCAL(3), // 262_0_argument
  MANDATORY_PARAMETER, LOCAL(4), // 263_0_continuation
  // tuple self START_IO body argument continuation
  var_tuple, 5, LOCAL(1), uni_START_IO, LOCAL(2), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(265, 3)
};

static TAB_NUM t_func_std_types__io_task___pause[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 267_28_self
  LOCAL(2), // 267_33_continuation
  // tuple self COMPUTE undefined undefined continuation
  var_tuple, 5, LOCAL(1), uni_COMPUTE, var_undefined, var_undefined, LOCAL(2), TAIL_CALL,
  POS(268, 3)
};

static TAB_NUM t_func_std_types__io_task___wait_for_message[] = {
  2, // locals
  2, // parameters
  var_270_39_self,
  var_270_44_continuation,
  // inbound_messages_of(self).is_empty
  var_inbound_messages_of, 1, var_270_39_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_6, lambda_7, TAIL_CALL,
  POS(272, 5),
  POS(272, 31),
  POS(271, 3)
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // tuple(self WAIT undefined undefined continuation)
  var_tuple, 5, var_270_39_self, uni_WAIT, var_undefined, var_undefined, var_270_44_continuation, 1, LOCAL(1),
  //  tuple(self WAIT undefined undefined continuation)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(273, 8),
  POS(273, 7)
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // tuple(self COMPUTE undefined undefined continuation)
  var_tuple, 5, var_270_39_self, uni_COMPUTE, var_undefined, var_undefined, var_270_44_continuation, 1, LOCAL(1),
  //  tuple(self COMPUTE undefined undefined continuation)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(274, 8),
  POS(274, 7)
};

static TAB_NUM t_func_std_types__io_task___check_io[] = {
  4, // locals
  4, // parameters
  LOCAL(1), // 276_31_self
  LOCAL(2), // 276_36_io
  LOCAL(3), // 276_39_body
  LOCAL(4), // 276_44_argument
  // -> CHECK_IO self io body argument
  LET, 5, uni_CHECK_IO, LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(277, 3)
};

static TAB_NUM t_func_std_types__io_task___performed_io[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 281_0_self
  MANDATORY_PARAMETER, LOCAL(2), // 282_0_io
  var_undefined, LOCAL(3), // 283_0_argument
  // -> COMPUTE self io undefined argument
  LET, 5, uni_COMPUTE, LOCAL(1), LOCAL(2), var_undefined, LOCAL(3), TAIL_CALL,
  POS(285, 3)
};

static TAB_NUM t_func_std_types__io_task___recheck_io[] = {
  3, // locals
  3, // parameters
  LOCAL(1), // 287_33_self
  LOCAL(2), // 287_38_body
  LOCAL(3), // 287_43_argument
  // -> CHECK_IO self body argument
  LET, 4, uni_CHECK_IO, LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(288, 3)
};

static TAB_NUM t_func_std_types__io_task___complete_io[] = {
  3, // locals
  3, // parameters
  LOCAL(1), // 290_34_self
  LOCAL(2), // 290_39_body
  LOCAL(3), // 290_44_argument
  // -> COMPLETE_IO self body argument
  LET, 4, uni_COMPLETE_IO, LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(291, 3)
};

static TAB_NUM t_func_std_types__io_task___checked_io[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 293_33_self
  LOCAL(2), // 293_38_argument
  // -> COMPUTE self undefined argument
  LET, 4, uni_COMPUTE, LOCAL(1), var_undefined, LOCAL(2), TAIL_CALL,
  POS(294, 3)
};

static TAB_NUM t_func_std_types__io_task___log[] = {
  3, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 296_26_self
  REST_PARAMETER, LOCAL(3), // 296_31_argument
  // $str create_string(argument)
  var_create_string, 1, LOCAL(3), 1, var_297_1_str,
  // str .has_suffix. '@nl;'
  var_has_suffix, 2, var_297_1_str, chr_10, 1, LOCAL(1),
  // !str
  var_if, 3, LOCAL(1), lambda_8, lambda_9, 1, var_297_1_str,
  // log_messages_of str
  var_log_messages_of, 1, LOCAL(2), 1, LOCAL(1),
  // push &self.log_messages_of str
  var_push, 2, LOCAL(1), var_297_1_str, 1, LOCAL(1),
  // self.log_messages_of str
  LET, -1, LOCAL(2), var_log_messages_of, LOCAL(1), LOCAL(2),
  // -> self
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(297, 3),
  POS(300, 7),
  POS(298, 3),
  POS(303, 14),
  POS(303, 3),
  POS(303, 9),
  POS(304, 3)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_297_1_str, TAIL_CALL,
  POS(301, 9)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // push(str '@nl;')
  var_push, 2, var_297_1_str, chr_10, 1, LOCAL(1),
  //  push(str '@nl;')
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(302, 10),
  POS(302, 9)
};

static TAB_NUM t_func_std_types__io_task___send[] = {
  2, // locals
  3, // parameters
  var_306_27_self,
  var_306_32_receiver,
  var_306_41_message,
  // is_a_list && receiver.is_empty
  var_is_a_list, 1, var_306_32_receiver, 1, LOCAL(1),
  // is_a_list && receiver.is_empty
  var_std__and, 2, LOCAL(1), lambda_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_11, lambda_12, TAIL_CALL,
  POS(308, 14),
  POS(308, 14),
  POS(307, 3)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_306_32_receiver, 1, LOCAL(1),
  // receiver.is_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(308, 36),
  POS(308, 27)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_306_27_self, TAIL_CALL,
  POS(309, 7)
};

static TAB_NUM t_lambda_12[] = {
  2, // locals
  0, // parameters
  // outbound_messages_of tuple(receiver message)
  var_outbound_messages_of, 1, var_306_27_self, 1, LOCAL(1),
  // tuple(receiver message)
  var_tuple, 2, var_306_32_receiver, var_306_41_message, 1, LOCAL(2),
  // push &self.outbound_messages_of tuple(receiver message)
  var_push, 2, LOCAL(1), LOCAL(2), 1, LOCAL(1),
  // self.outbound_messages_of tuple(receiver message)
  LET, -1, var_306_27_self, var_outbound_messages_of, LOCAL(1), var_306_27_self,
  // -> self
  LET, 1, var_306_27_self, TAIL_CALL,
  POS(311, 18),
  POS(311, 39),
  POS(311, 7),
  POS(311, 13),
  POS(312, 7)
};

static TAB_NUM t_func_std_types__io_task___receive[] = {
  2, // locals
  1, // parameters
  var_314_30_self,
  // inbound_messages_of(self).is_empty
  var_inbound_messages_of, 1, var_314_30_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_13, lambda_14, TAIL_CALL,
  POS(316, 5),
  POS(316, 31),
  POS(315, 3)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_314_30_self, var_undefined, TAIL_CALL,
  POS(317, 7)
};

static TAB_NUM t_lambda_14[] = {
  2, // locals
  0, // parameters
  // inbound_messages_of $message
  var_inbound_messages_of, 1, var_314_30_self, 1, LOCAL(1),
  // get &self.inbound_messages_of $message
  var_get, 1, LOCAL(1), 2, LOCAL(1), LOCAL(2),
  // self.inbound_messages_of $message
  LET, -1, var_314_30_self, var_inbound_messages_of, LOCAL(1), var_314_30_self,
  // -> self message
  LET, 2, var_314_30_self, LOCAL(2), TAIL_CALL,
  POS(319, 17),
  POS(319, 7),
  POS(319, 12),
  POS(320, 7)
};

static TAB_NUM t_func_std_types__io_task___cancel[] = {
  1, // locals
  2, // parameters
  var_324_0_self,
  var_325_0_task_id,
  // is_an_integer:
  var_is_an_integer, 1, var_325_0_task_id, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_task_id_is_an_integer, lambda_15, TAIL_CALL,
  POS(328, 13),
  POS(327, 3)
};

static TAB_NUM t_lambda_task_id_is_an_integer[] = {
  1, // locals
  0, // parameters
  // cancel_requests_of task_id
  var_cancel_requests_of, 1, var_324_0_self, 1, LOCAL(1),
  // push &self.cancel_requests_of task_id
  var_push, 2, LOCAL(1), var_325_0_task_id, 1, LOCAL(1),
  // self.cancel_requests_of task_id
  LET, -1, var_324_0_self, var_cancel_requests_of, LOCAL(1), var_324_0_self,
  // -> self
  LET, 1, var_324_0_self, TAIL_CALL,
  POS(329, 18),
  POS(329, 7),
  POS(329, 13),
  POS(330, 7)
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // cancel_requests_of task_id.to_list
  var_cancel_requests_of, 1, var_324_0_self, 1, LOCAL(1),
  // to_list
  var_to_list, 1, var_325_0_task_id, 1, LOCAL(2),
  // append &self.cancel_requests_of task_id.to_list
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(1),
  // self.cancel_requests_of task_id.to_list
  LET, -1, var_324_0_self, var_cancel_requests_of, LOCAL(1), var_324_0_self,
  // -> self
  LET, 1, var_324_0_self, TAIL_CALL,
  POS(332, 20),
  POS(332, 47),
  POS(332, 7),
  POS(332, 15),
  POS(333, 7)
};

static TAB_NUM t_func_std_types__io_task___on_exit[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 337_0_self
  MANDATORY_PARAMETER, LOCAL(4), // 338_0_handler
  var_undefined, LOCAL(5), // 339_0_argument
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
  POS(341, 13),
  POS(341, 30),
  POS(341, 3),
  POS(341, 8),
  POS(342, 3)
};

static TAB_NUM t_func_std_types__io_task___on_error[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 344_31_self
  LOCAL(2), // 344_36_handler
  // self.error_handler_of handler
  LET, -1, LOCAL(1), var_error_handler_of, LOCAL(2), LOCAL(1),
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(345, 4),
  POS(346, 3)
};

static TAB_NUM t_func_std_types__io_task___on_cancel[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 348_32_self
  LOCAL(2), // 348_37_handler
  // self.cancel_handler_of handler
  LET, -1, LOCAL(1), var_cancel_handler_of, LOCAL(2), LOCAL(1),
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(349, 4),
  POS(350, 3)
};

static TAB_NUM t_func_std_types__io_task___load[] = {
  3, // locals
  3, // parameters
  LOCAL(1), // 354_27_self
  LOCAL(2), // 354_32_my_filename
  LOCAL(3), // 354_44_continuation
  // perform_io self load_request my_filename continuation
  var_perform_io, 4, LOCAL(1), func_load_request, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(355, 3)
};

static TAB_NUM t_func_load_request[] = {
  1, // locals
  3, // parameters
  var_357_16_task,
  var_357_21_io,
  var_357_24_filename,
  // is_cancelled: # we must not start an I/O operation!
  var_is_cancelled, 1, var_357_16_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_task_is_cancelled, lambda_16, IO_TAIL_CALL,
  POS(359, 12),
  POS(358, 5)
};

static TAB_NUM t_lambda_task_is_cancelled[] = {
  0, // locals
  0, // parameters
  // performed_io task io "" # we didn't read a single byte ...
  var_performed_io, 3, var_357_16_task, var_357_21_io, string_3, TAIL_CALL,
  POS(360, 9)
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // open! $fd filename "r"
  var_open, 2, var_357_24_filename, str_r, IO_CALL(1), var_362_7_fd,
  // is_an_error:
  var_is_an_error, 1, var_362_7_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_fd_is_an_error, lambda_17, TAIL_CALL,
  POS(362, 9),
  POS(364, 14),
  POS(363, 9)
};

static TAB_NUM t_lambda_fd_is_an_error[] = {
  2, // locals
  0, // parameters
  // !fd.additional_error_information_of "
  var_std__string, 3, str_load, var_357_24_filename, string_4, 1, LOCAL(2),
  // fd.additional_error_information_of "
  LET, -1, var_362_7_fd, var_additional_error_information_of, LOCAL(2), var_362_7_fd,
  // performed_io task io fd
  var_performed_io, 3, var_357_16_task, var_357_21_io, var_362_7_fd, TAIL_CALL,
  POS(365, 13),
  POS(365, 14),
  POS(367, 13)
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // start_reading_from &io fd
  var_start_reading_from, 2, var_357_21_io, var_362_7_fd, 1, var_357_21_io,
  // tuple(fd "")
  var_tuple, 2, var_362_7_fd, string_3, 1, LOCAL(1),
  // check_io task io check_load_request tuple(fd "")
  var_check_io, 4, var_357_16_task, var_357_21_io, func_check_load_request, LOCAL(1), TAIL_CALL,
  POS(369, 13),
  POS(370, 49),
  POS(370, 13)
};

static TAB_NUM t_func_check_load_request[] = {
  1, // locals
  3, // parameters
  var_372_22_task,
  var_372_27_events,
  var_372_34_argument,
  // argument $fd $buf
  var_372_34_argument, 0, 2, var_373_10_fd, var_373_14_buf,
  // is_cancelled: # we are called as a start-I/O-handler!
  var_is_cancelled, 1, var_372_22_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_task_is_cancelled, lambda_19, IO_TAIL_CALL,
  POS(373, 5),
  POS(375, 12),
  POS(374, 5)
};

static TAB_NUM t_lambda_2_task_is_cancelled[] = {
  2, // locals
  0, // parameters
  // $io events
  LET, 1, var_372_27_events, 1, LOCAL(2),
  // stop_reading_from &io fd
  var_stop_reading_from, 2, LOCAL(2), var_373_10_fd, 1, LOCAL(2),
  // try $_ignore_error: close! fd
  var_try, 1, lambda_18, IO_CALL(1), LOCAL(1),
  // performed_io task io buf # return the partial read data
  var_performed_io, 3, var_372_22_task, LOCAL(2), var_373_14_buf, TAIL_CALL,
  POS(376, 9),
  POS(377, 9),
  POS(378, 9),
  POS(379, 9)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_373_10_fd, IO_TAIL_CALL,
  POS(378, 29)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  // for_each events
  var_for_each, 3, var_372_27_events, lambda_20, lambda_25, TAIL_CALL,
  POS(381, 9)
};

static TAB_NUM t_lambda_20[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 382_3_event
  // event $type $efd $data
  LOCAL(1), 0, 3, LOCAL(2), var_383_13_efd, var_383_18_data,
  // case type
  var_case, 6, LOCAL(2), var_READ, lambda_READ, var_READ_ERROR, lambda_READ_ERROR, var_next, TAIL_CALL,
  POS(383, 13),
  POS(384, 13)
};

static TAB_NUM t_lambda_READ[] = {
  1, // locals
  0, // parameters
  // efd == fd:
  var_std__equal, 2, var_383_13_efd, var_373_10_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21, var_next, TAIL_CALL,
  POS(387, 19),
  POS(386, 17)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // data == "":
  var_std__equal, 2, var_383_18_data, string_3, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_22, lambda_23, TAIL_CALL,
  POS(389, 23),
  POS(388, 21)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  // complete_io task complete_load_request argument
  var_complete_io, 3, var_372_22_task, func_complete_load_request, var_372_34_argument, TAIL_CALL,
  POS(390, 25)
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  0, // parameters
  // append(buf data))
  var_append, 2, var_373_14_buf, var_383_18_data, 1, LOCAL(1),
  // tuple(fd append(buf data))
  var_tuple, 2, var_373_10_fd, LOCAL(1), 1, LOCAL(2),
  // recheck_io
  var_recheck_io, 3, var_372_22_task, func_check_load_request, LOCAL(2), TAIL_CALL,
  POS(393, 60),
  POS(393, 51),
  POS(392, 25)
};

static TAB_NUM t_lambda_READ_ERROR[] = {
  1, // locals
  0, // parameters
  // efd == fd:
  var_std__equal, 2, var_383_13_efd, var_373_10_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_24, var_next, TAIL_CALL,
  POS(397, 19),
  POS(396, 17)
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  0, // parameters
  // tuple(fd data)
  var_tuple, 2, var_373_10_fd, var_383_18_data, 1, LOCAL(1),
  // complete_io task try_close_file tuple(fd data)
  var_complete_io, 3, var_372_22_task, func_try_close_file, LOCAL(1), TAIL_CALL,
  POS(398, 53),
  POS(398, 21)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  // recheck_io task check_load_request argument
  var_recheck_io, 3, var_372_22_task, func_check_load_request, var_372_34_argument, TAIL_CALL,
  POS(402, 13)
};

static TAB_NUM t_func_complete_load_request[] = {
  5, // locals
  3, // parameters
  LOCAL(2), // 404_25_task
  LOCAL(3), // 404_30_io
  LOCAL(4), // 404_33_argument
  // argument $fd $buf
  LOCAL(4), 0, 2, var_405_10_fd, LOCAL(5),
  // stop_reading_from &io fd
  var_stop_reading_from, 2, LOCAL(3), var_405_10_fd, 1, LOCAL(3),
  // try $_ignore_error: close! fd
  var_try, 1, lambda_26, IO_CALL(1), LOCAL(1),
  // performed_io task io buf
  var_performed_io, 3, LOCAL(2), LOCAL(3), LOCAL(5), TAIL_CALL,
  POS(405, 5),
  POS(406, 5),
  POS(407, 5),
  POS(408, 5)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_405_10_fd, IO_TAIL_CALL,
  POS(407, 25)
};

static TAB_NUM t_func_try_close_file[] = {
  5, // locals
  3, // parameters
  LOCAL(2), // 410_18_task
  LOCAL(3), // 410_23_io
  LOCAL(4), // 410_26_argument
  // argument $fd $read_error
  LOCAL(4), 0, 2, var_411_10_fd, LOCAL(5),
  // stop_reading_from &io fd
  var_stop_reading_from, 2, LOCAL(3), var_411_10_fd, 1, LOCAL(3),
  // try $_ignore_error: close! fd
  var_try, 1, lambda_27, IO_CALL(1), LOCAL(1),
  // performed_io task io read_error # return the error returned from <read>
  var_performed_io, 3, LOCAL(2), LOCAL(3), LOCAL(5), TAIL_CALL,
  POS(411, 5),
  POS(412, 5),
  POS(413, 5),
  POS(414, 5)
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_411_10_fd, IO_TAIL_CALL,
  POS(413, 25)
};

static TAB_NUM t_func_std_types__io_task___save[] = {
  5, // locals
  4, // parameters
  LOCAL(2), // 416_27_self
  LOCAL(3), // 416_32_my_filename
  LOCAL(4), // 416_44_my_data
  LOCAL(5), // 416_52_continuation
  // tuple(my_filename my_data) continuation
  var_tuple, 2, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // perform_io self save_request tuple(my_filename my_data) continuation
  var_perform_io, 4, LOCAL(2), func_save_request, LOCAL(1), LOCAL(5), TAIL_CALL,
  POS(417, 32),
  POS(417, 3)
};

static TAB_NUM t_func_save_request[] = {
  2, // locals
  3, // parameters
  var_419_16_task,
  var_419_21_io,
  LOCAL(2), // 419_24_argument
  // argument $filename $data
  LOCAL(2), 0, 2, var_420_10_filename, var_420_20_data,
  // is_cancelled: # we must not start an I/O operation!
  var_is_cancelled, 1, var_419_16_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3_task_is_cancelled, lambda_28, IO_TAIL_CALL,
  POS(420, 5),
  POS(422, 12),
  POS(421, 5)
};

static TAB_NUM t_lambda_3_task_is_cancelled[] = {
  0, // locals
  0, // parameters
  // performed_io task io data # we didn't write a single byte ...
  var_performed_io, 3, var_419_16_task, var_419_21_io, var_420_20_data, TAIL_CALL,
  POS(423, 9)
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // open! $fd filename "w"
  var_open, 2, var_420_10_filename, str_w, IO_CALL(1), var_425_7_fd,
  // is_an_error:
  var_is_an_error, 1, var_425_7_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_fd_is_an_error, lambda_29, TAIL_CALL,
  POS(425, 9),
  POS(427, 14),
  POS(426, 9)
};

static TAB_NUM t_lambda_2_fd_is_an_error[] = {
  2, // locals
  0, // parameters
  // !fd.additional_error_information_of "
  var_std__string, 3, str_save, var_420_10_filename, string_4, 1, LOCAL(2),
  // fd.additional_error_information_of "
  LET, -1, var_425_7_fd, var_additional_error_information_of, LOCAL(2), var_425_7_fd,
  // performed_io task io fd
  var_performed_io, 3, var_419_16_task, var_419_21_io, var_425_7_fd, TAIL_CALL,
  POS(428, 13),
  POS(428, 14),
  POS(430, 13)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  // write_to &io fd data
  var_write_to, 3, var_419_21_io, var_425_7_fd, var_420_20_data, 1, var_419_21_io,
  // check_io task io check_save_request fd
  var_check_io, 4, var_419_16_task, var_419_21_io, func_check_save_request, var_425_7_fd, TAIL_CALL,
  POS(432, 13),
  POS(433, 13)
};

static TAB_NUM t_func_check_save_request[] = {
  1, // locals
  3, // parameters
  var_435_22_task,
  var_435_27_events,
  var_435_34_fd,
  // is_cancelled: # we are called as a start-I/O-handler!
  var_is_cancelled, 1, var_435_22_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_4_task_is_cancelled, lambda_31, IO_TAIL_CALL,
  POS(437, 12),
  POS(436, 5)
};

static TAB_NUM t_lambda_4_task_is_cancelled[] = {
  3, // locals
  0, // parameters
  // $io events
  LET, 1, var_435_27_events, 1, LOCAL(2),
  // cancel_write_to &io $unwritten_text fd
  var_cancel_write_to, 2, LOCAL(2), var_435_34_fd, 2, LOCAL(2), LOCAL(3),
  // try $_ignore_error: close! fd
  var_try, 1, lambda_30, IO_CALL(1), LOCAL(1),
  // performed_io task io unwritten_text # return the not yet written text
  var_performed_io, 3, var_435_22_task, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(438, 9),
  POS(439, 9),
  POS(440, 9),
  POS(441, 9)
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_435_34_fd, IO_TAIL_CALL,
  POS(440, 29)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  // for_each events
  var_for_each, 3, var_435_27_events, lambda_32, lambda_35, TAIL_CALL,
  POS(443, 9)
};

static TAB_NUM t_lambda_32[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 444_3_event
  // event $type $efd $data
  LOCAL(1), 0, 3, LOCAL(2), var_445_13_efd, var_445_18_data,
  // case type
  var_case, 6, LOCAL(2), var_WRITE_COMPLETED, lambda_WRITE_COMPLETED, var_WRITE_ERROR, lambda_WRITE_ERROR, var_next, TAIL_CALL,
  POS(445, 13),
  POS(446, 13)
};

static TAB_NUM t_lambda_WRITE_COMPLETED[] = {
  1, // locals
  0, // parameters
  // efd == fd:
  var_std__equal, 2, var_445_13_efd, var_435_34_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_33, var_next, TAIL_CALL,
  POS(449, 19),
  POS(448, 17)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  // complete_io task complete_save_request fd
  var_complete_io, 3, var_435_22_task, func_complete_save_request, var_435_34_fd, TAIL_CALL,
  POS(450, 21)
};

static TAB_NUM t_lambda_WRITE_ERROR[] = {
  1, // locals
  0, // parameters
  // efd == fd:
  var_std__equal, 2, var_445_13_efd, var_435_34_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, var_next, TAIL_CALL,
  POS(454, 19),
  POS(453, 17)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // tuple(fd data)
  var_tuple, 2, var_435_34_fd, var_445_18_data, 1, LOCAL(1),
  // complete_io task try_close_file tuple(fd data)
  var_complete_io, 3, var_435_22_task, func_2_try_close_file, LOCAL(1), TAIL_CALL,
  POS(455, 53),
  POS(455, 21)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  // recheck_io task check_save_request fd
  var_recheck_io, 3, var_435_22_task, func_check_save_request, var_435_34_fd, TAIL_CALL,
  POS(459, 13)
};

static TAB_NUM t_func_complete_save_request[] = {
  3, // locals
  3, // parameters
  LOCAL(2), // 461_25_task
  LOCAL(3), // 461_30_io
  var_461_33_fd,
  // try $_ignore_error: close! fd
  var_try, 1, lambda_36, IO_CALL(1), LOCAL(1),
  // performed_io task io undefined
  var_performed_io, 3, LOCAL(2), LOCAL(3), var_undefined, TAIL_CALL,
  POS(462, 5),
  POS(463, 5)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_461_33_fd, IO_TAIL_CALL,
  POS(462, 25)
};

static TAB_NUM t_func_2_try_close_file[] = {
  5, // locals
  3, // parameters
  LOCAL(2), // 465_18_task
  LOCAL(3), // 465_23_io
  LOCAL(4), // 465_26_argument
  // argument $fd $write_error
  LOCAL(4), 0, 2, var_466_10_fd, LOCAL(5),
  // try $_ignore_error: close! fd
  var_try, 1, lambda_37, IO_CALL(1), LOCAL(1),
  // performed_io task io write_error # return the error returned from <write>
  var_performed_io, 3, LOCAL(2), LOCAL(3), LOCAL(5), TAIL_CALL,
  POS(466, 5),
  POS(467, 5),
  POS(468, 5)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_466_10_fd, IO_TAIL_CALL,
  POS(467, 25)
};

static TAB_NUM t_func_std_types__io_task___read_from[] = {
  5, // locals
  4, // parameters
  LOCAL(2), // 474_0_self
  LOCAL(3), // 475_0_my_fd
  LOCAL(4), // 476_0_my_length
  LOCAL(5), // 477_0_continuation
  // tuple(my_fd my_length) continuation
  var_tuple, 2, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // perform_io self start_read_request tuple(my_fd my_length) continuation
  var_perform_io, 4, LOCAL(2), func_start_read_request, LOCAL(1), LOCAL(5), TAIL_CALL,
  POS(479, 38),
  POS(479, 3)
};

static TAB_NUM t_func_start_read_request[] = {
  1, // locals
  3, // parameters
  var_481_22_task,
  var_481_27_io,
  var_481_30_argument,
  // is_cancelled: # we must not start an I/O operation!
  var_is_cancelled, 1, var_481_22_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_5_task_is_cancelled, lambda_38, TAIL_CALL,
  POS(483, 12),
  POS(482, 5)
};

static TAB_NUM t_lambda_5_task_is_cancelled[] = {
  0, // locals
  0, // parameters
  // performed_io task io "" # we didn't read a single byte ...
  var_performed_io, 3, var_481_22_task, var_481_27_io, string_3, TAIL_CALL,
  POS(484, 9)
};

static TAB_NUM t_lambda_38[] = {
  3, // locals
  0, // parameters
  // argument $fd $length
  var_481_30_argument, 0, 2, LOCAL(2), LOCAL(3),
  // start_reading_from &io fd
  var_start_reading_from, 2, var_481_27_io, LOCAL(2), 1, var_481_27_io,
  // tuple(fd length "")
  var_tuple, 3, LOCAL(2), LOCAL(3), string_3, 1, LOCAL(1),
  // check_io task io check_read_request tuple(fd length "")
  var_check_io, 4, var_481_22_task, var_481_27_io, func_check_read_request, LOCAL(1), TAIL_CALL,
  POS(486, 9),
  POS(487, 9),
  POS(488, 45),
  POS(488, 9)
};

static TAB_NUM t_func_check_read_request[] = {
  1, // locals
  3, // parameters
  var_490_22_task,
  var_490_27_events,
  var_490_34_argument,
  // argument $fd $length $buf
  var_490_34_argument, 0, 3, var_491_10_fd, var_491_14_length, var_491_22_buf,
  // is_cancelled: # we are called as a start-I/O-handler!
  var_is_cancelled, 1, var_490_22_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6_task_is_cancelled, lambda_39, TAIL_CALL,
  POS(491, 5),
  POS(493, 12),
  POS(492, 5)
};

static TAB_NUM t_lambda_6_task_is_cancelled[] = {
  1, // locals
  0, // parameters
  // $io events
  LET, 1, var_490_27_events, 1, LOCAL(1),
  // stop_reading_from &io fd
  var_stop_reading_from, 2, LOCAL(1), var_491_10_fd, 1, LOCAL(1),
  // performed_io task io buf # return the partial read data
  var_performed_io, 3, var_490_22_task, LOCAL(1), var_491_22_buf, TAIL_CALL,
  POS(494, 9),
  POS(495, 9),
  POS(496, 9)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  // for_each events
  var_for_each, 3, var_490_27_events, lambda_40, lambda_47, TAIL_CALL,
  POS(498, 9)
};

static TAB_NUM t_lambda_40[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 499_3_event
  // event $type $efd $data
  LOCAL(3), 0, 3, LOCAL(4), var_500_13_efd, var_500_18_data,
  // type == READ && efd == fd next:
  var_std__equal, 2, LOCAL(4), var_READ, 1, LOCAL(1),
  // type == READ && efd == fd next:
  var_std__and, 2, LOCAL(1), lambda_41, 1, LOCAL(2),
  // if_not
  var_if_not, 3, LOCAL(2), var_next, lambda_42, TAIL_CALL,
  POS(500, 13),
  POS(502, 15),
  POS(502, 15),
  POS(501, 13)
};

static TAB_NUM t_lambda_41[] = {
  1, // locals
  0, // parameters
  // efd == fd next:
  var_std__equal, 2, var_500_13_efd, var_491_10_fd, 1, LOCAL(1),
  // efd == fd next:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(502, 31),
  POS(502, 31)
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // data == "":
  var_std__equal, 2, var_500_18_data, string_3, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_43, lambda_44, TAIL_CALL,
  POS(504, 19),
  POS(503, 17)
};

static TAB_NUM t_lambda_43[] = {
  1, // locals
  0, // parameters
  // tuple(fd buf)
  var_tuple, 2, var_491_10_fd, var_491_22_buf, 1, LOCAL(1),
  // complete_io task complete_read_request tuple(fd buf)
  var_complete_io, 3, var_490_22_task, func_complete_read_request, LOCAL(1), TAIL_CALL,
  POS(505, 60),
  POS(505, 21)
};

static TAB_NUM t_lambda_44[] = {
  3, // locals
  0, // parameters
  // append &buf data
  var_append, 2, var_491_22_buf, var_500_18_data, 1, var_491_22_buf,
  // length_of(buf) >= length:
  var_length_of, 1, var_491_22_buf, 1, LOCAL(1),
  // length_of(buf) >= length:
  var_std__less, 2, LOCAL(1), var_491_14_length, 1, LOCAL(2),
  // length_of(buf) >= length:
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_45, lambda_46, TAIL_CALL,
  POS(507, 21),
  POS(509, 23),
  POS(509, 23),
  POS(509, 23),
  POS(508, 21)
};

static TAB_NUM t_lambda_45[] = {
  1, // locals
  0, // parameters
  // tuple(fd buf)
  var_tuple, 2, var_491_10_fd, var_491_22_buf, 1, LOCAL(1),
  // complete_io task complete_read_request tuple(fd buf)
  var_complete_io, 3, var_490_22_task, func_complete_read_request, LOCAL(1), TAIL_CALL,
  POS(510, 64),
  POS(510, 25)
};

static TAB_NUM t_lambda_46[] = {
  1, // locals
  0, // parameters
  // tuple(fd length buf)
  var_tuple, 3, var_491_10_fd, var_491_14_length, var_491_22_buf, 1, LOCAL(1),
  // recheck_io task check_read_request tuple(fd length buf)
  var_recheck_io, 3, var_490_22_task, func_check_read_request, LOCAL(1), TAIL_CALL,
  POS(512, 60),
  POS(512, 25)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  // recheck_io task check_read_request argument
  var_recheck_io, 3, var_490_22_task, func_check_read_request, var_490_34_argument, TAIL_CALL,
  POS(514, 13)
};

static TAB_NUM t_func_complete_read_request[] = {
  5, // locals
  3, // parameters
  LOCAL(1), // 516_25_task
  LOCAL(2), // 516_30_io
  LOCAL(3), // 516_33_argument
  // argument $fd $buf
  LOCAL(3), 0, 2, LOCAL(4), LOCAL(5),
  // stop_reading_from &io fd
  var_stop_reading_from, 2, LOCAL(2), LOCAL(4), 1, LOCAL(2),
  // performed_io task io buf
  var_performed_io, 3, LOCAL(1), LOCAL(2), LOCAL(5), TAIL_CALL,
  POS(517, 5),
  POS(518, 5),
  POS(519, 5)
};

static TAB_NUM t_func_std_types__io_task___write_to[] = {
  5, // locals
  4, // parameters
  LOCAL(2), // 521_31_self
  LOCAL(3), // 521_36_my_fd
  LOCAL(4), // 521_42_my_text
  LOCAL(5), // 521_50_continuation
  // tuple(my_fd my_text) continuation
  var_tuple, 2, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // perform_io self write_request tuple(my_fd my_text) continuation
  var_perform_io, 4, LOCAL(2), func_write_request, LOCAL(1), LOCAL(5), TAIL_CALL,
  POS(522, 33),
  POS(522, 3)
};

static TAB_NUM t_func_write_request[] = {
  2, // locals
  3, // parameters
  var_524_17_task,
  var_524_22_io,
  LOCAL(2), // 524_25_argument
  // argument $fd $text
  LOCAL(2), 0, 2, var_525_10_fd, var_525_14_text,
  // is_cancelled: # we must not start an I/O operation!
  var_is_cancelled, 1, var_524_17_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_7_task_is_cancelled, lambda_48, TAIL_CALL,
  POS(525, 5),
  POS(527, 12),
  POS(526, 5)
};

static TAB_NUM t_lambda_7_task_is_cancelled[] = {
  0, // locals
  0, // parameters
  // performed_io task io text # we didn't write a single byte ...
  var_performed_io, 3, var_524_17_task, var_524_22_io, var_525_14_text, TAIL_CALL,
  POS(528, 9)
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  // write_to &io fd text
  var_write_to, 3, var_524_22_io, var_525_10_fd, var_525_14_text, 1, var_524_22_io,
  // check_io task io check_write_request fd
  var_check_io, 4, var_524_17_task, var_524_22_io, func_check_write_request, var_525_10_fd, TAIL_CALL,
  POS(530, 9),
  POS(531, 9)
};

static TAB_NUM t_func_check_write_request[] = {
  1, // locals
  3, // parameters
  var_533_23_task,
  var_533_28_events,
  var_533_35_fd,
  // is_cancelled: # we are called as a start-I/O-handler!
  var_is_cancelled, 1, var_533_23_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8_task_is_cancelled, lambda_49, TAIL_CALL,
  POS(535, 12),
  POS(534, 5)
};

static TAB_NUM t_lambda_8_task_is_cancelled[] = {
  2, // locals
  0, // parameters
  // $io events
  LET, 1, var_533_28_events, 1, LOCAL(1),
  // cancel_write_to &io $unwritten_text fd
  var_cancel_write_to, 2, LOCAL(1), var_533_35_fd, 2, LOCAL(1), LOCAL(2),
  // performed_io task io unwritten_text # return the not yet written text
  var_performed_io, 3, var_533_23_task, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(536, 9),
  POS(537, 9),
  POS(538, 9)
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  // for_each events
  var_for_each, 3, var_533_28_events, lambda_50, lambda_53, TAIL_CALL,
  POS(540, 9)
};

static TAB_NUM t_lambda_50[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 541_3_event
  // event $type $efd $_data
  LOCAL(3), 0, 3, LOCAL(4), var_542_13_efd, LOCAL(1),
  // type == WRITE_COMPLETED && efd == fd:
  var_std__equal, 2, LOCAL(4), var_WRITE_COMPLETED, 1, LOCAL(1),
  // type == WRITE_COMPLETED && efd == fd:
  var_std__and, 2, LOCAL(1), lambda_51, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_52, var_next, TAIL_CALL,
  POS(542, 13),
  POS(544, 15),
  POS(544, 15),
  POS(543, 13)
};

static TAB_NUM t_lambda_51[] = {
  1, // locals
  0, // parameters
  // efd == fd:
  var_std__equal, 2, var_542_13_efd, var_533_35_fd, 1, LOCAL(1),
  // efd == fd:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(544, 42),
  POS(544, 42)
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  // checked_io task undefined
  var_checked_io, 2, var_533_23_task, var_undefined, TAIL_CALL,
  POS(545, 17)
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  // recheck_io task check_write_request fd
  var_recheck_io, 3, var_533_23_task, func_check_write_request, var_533_35_fd, TAIL_CALL,
  POS(548, 13)
};

static TAB_NUM t_func_std_types__io_task___join_process[] = {
  3, // locals
  3, // parameters
  LOCAL(1), // 550_35_self
  LOCAL(2), // 550_40_my_pid
  LOCAL(3), // 550_47_continuation
  // perform_io self join_process_request my_pid continuation
  var_perform_io, 4, LOCAL(1), func_join_process_request, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(551, 3)
};

static TAB_NUM t_func_join_process_request[] = {
  3, // locals
  3, // parameters
  LOCAL(1), // 553_24_task
  LOCAL(2), // 553_29_io
  LOCAL(3), // 553_32_pid
  // join_process &io pid
  var_join_process, 2, LOCAL(2), LOCAL(3), 1, LOCAL(2),
  // check_io task io join_process_request_pending pid
  var_check_io, 4, LOCAL(1), LOCAL(2), func_join_process_request_pending, LOCAL(3), TAIL_CALL,
  POS(554, 5),
  POS(555, 5)
};

static TAB_NUM t_func_join_process_request_pending[] = {
  1, // locals
  3, // parameters
  var_557_32_task,
  LOCAL(1), // 557_37_events
  var_557_44_pid,
  // for_each events
  var_for_each, 3, LOCAL(1), lambda_54, lambda_57, TAIL_CALL,
  POS(558, 5)
};

static TAB_NUM t_lambda_54[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 559_3_event
  // event $type $epid $status
  LOCAL(3), 0, 3, LOCAL(4), var_560_13_epid, var_560_19_status,
  // type == PROCESS_JOINED && epid == pid:
  var_std__equal, 2, LOCAL(4), var_PROCESS_JOINED, 1, LOCAL(1),
  // type == PROCESS_JOINED && epid == pid:
  var_std__and, 2, LOCAL(1), lambda_55, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_56, var_next, TAIL_CALL,
  POS(560, 9),
  POS(562, 11),
  POS(562, 11),
  POS(561, 9)
};

static TAB_NUM t_lambda_55[] = {
  1, // locals
  0, // parameters
  // epid == pid:
  var_std__equal, 2, var_560_13_epid, var_557_44_pid, 1, LOCAL(1),
  // epid == pid:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(562, 37),
  POS(562, 37)
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  // checked_io task status
  var_checked_io, 2, var_557_32_task, var_560_19_status, TAIL_CALL,
  POS(563, 13)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  // recheck_io task join_process_request_pending pid
  var_recheck_io, 3, var_557_32_task, func_join_process_request_pending, var_557_44_pid, TAIL_CALL,
  POS(566, 9)
};

static TAB_NUM t_func_std_types__io_task___catch_signal[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 568_35_self
  LOCAL(2), // 568_40_continuation
  // perform_io self catch_signal_request undefined continuation
  var_perform_io, 4, LOCAL(1), func_catch_signal_request, var_undefined, LOCAL(2), TAIL_CALL,
  POS(569, 3)
};

static TAB_NUM t_func_catch_signal_request[] = {
  3, // locals
  3, // parameters
  LOCAL(2), // 571_24_task
  LOCAL(3), // 571_29_io
  LOCAL(1),
  // start_catching_signals &io
  var_start_catching_signals, 1, LOCAL(3), 1, LOCAL(3),
  // check_io task io catch_signal_request_pending undefined
  var_check_io, 4, LOCAL(2), LOCAL(3), func_catch_signal_request_pending, var_undefined, TAIL_CALL,
  POS(572, 5),
  POS(573, 5)
};

static TAB_NUM t_func_catch_signal_request_pending[] = {
  1, // locals
  3, // parameters
  var_575_32_task,
  var_575_37_events,
  LOCAL(1),
  // is_cancelled:
  var_is_cancelled, 1, var_575_32_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_9_task_is_cancelled, lambda_58, TAIL_CALL,
  POS(577, 12),
  POS(576, 5)
};

static TAB_NUM t_lambda_9_task_is_cancelled[] = {
  0, // locals
  0, // parameters
  // complete_io task cancel_catch_signal_request undefined
  var_complete_io, 3, var_575_32_task, func_cancel_catch_signal_request, var_undefined, TAIL_CALL,
  POS(578, 9)
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  0, // parameters
  // $signals empty_list
  LET, 1, var_empty_list, 1, var_580_1_signals,
  // for_each events
  var_for_each, 3, var_575_37_events, lambda_59, lambda_61, TAIL_CALL,
  POS(580, 9),
  POS(581, 9)
};

static TAB_NUM t_lambda_59[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 582_3_event
  // event $type $_dummy $signal
  LOCAL(2), 0, 3, LOCAL(3), LOCAL(1), var_583_21_signal,
  // type == SIGNAL:
  var_std__equal, 2, LOCAL(3), var_SIGNAL, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_60, var_next, TAIL_CALL,
  POS(583, 13),
  POS(585, 15),
  POS(584, 13)
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  0, // parameters
  // push &signals signal
  var_push, 2, var_580_1_signals, var_583_21_signal, 1, var_580_1_signals,
  // next
  var_next, 0, TAIL_CALL,
  POS(586, 17),
  POS(587, 17)
};

static TAB_NUM t_lambda_61[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_580_1_signals, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_signals_is_empty, lambda_62, TAIL_CALL,
  POS(591, 23),
  POS(590, 13)
};

static TAB_NUM t_lambda_signals_is_empty[] = {
  0, // locals
  0, // parameters
  // recheck_io task catch_signal_request_pending undefined
  var_recheck_io, 3, var_575_32_task, func_catch_signal_request_pending, var_undefined, TAIL_CALL,
  POS(592, 17)
};

static TAB_NUM t_lambda_62[] = {
  0, // locals
  0, // parameters
  // complete_io task catch_signal_request_completed signals
  var_complete_io, 3, var_575_32_task, func_catch_signal_request_completed, var_580_1_signals, TAIL_CALL,
  POS(594, 17)
};

static TAB_NUM t_func_cancel_catch_signal_request[] = {
  3, // locals
  3, // parameters
  LOCAL(2), // 596_31_task
  LOCAL(3), // 596_36_io
  LOCAL(1),
  // stop_catching_signals &io
  var_stop_catching_signals, 1, LOCAL(3), 1, LOCAL(3),
  // performed_io task io
  var_performed_io, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(597, 5),
  POS(598, 5)
};

static TAB_NUM t_func_catch_signal_request_completed[] = {
  3, // locals
  3, // parameters
  LOCAL(1), // 600_34_task
  LOCAL(2), // 600_39_io
  LOCAL(3), // 600_42_signals
  // stop_catching_signals &io
  var_stop_catching_signals, 1, LOCAL(2), 1, LOCAL(2),
  // performed_io task io signals
  var_performed_io, 3, LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(601, 5),
  POS(602, 5)
};

static TAB_NUM t_func_std_types__io_task___fork[] = {
  6, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 606_0_self
  MANDATORY_PARAMETER, LOCAL(4), // 607_0_task
  MANDATORY_PARAMETER, LOCAL(5), // 608_0_continuation
  var_undefined, LOCAL(6), // 609_0_argument
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
  POS(611, 14),
  POS(611, 31),
  POS(611, 3),
  POS(611, 9),
  POS(612, 3)
};

static TAB_NUM t_func_std_types__io_task___exit[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 616_0_self
  var_EXIT_SUCCESS, LOCAL(2), // 617_0_status
  // tuple self EXIT undefined status undefined
  var_tuple, 5, LOCAL(1), uni_EXIT, var_undefined, LOCAL(2), var_undefined, TAIL_CALL,
  POS(619, 3)
};

static TAB_NUM t_func_std__io_task_manager[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 626_0_first_task
  MANDATORY_PARAMETER, LOCAL(4), // 627_0_start
  var_undefined, LOCAL(5), // 628_0_start_arguments
  // $exit_status EXIT_SUCCESS
  LET, 1, var_EXIT_SUCCESS, 1, var_630_1_exit_status,
  // $io std_types::io
  LET, 1, var_std_types__io, 1, var_631_1_io,
  // $updated_requests empty_list
  LET, 1, var_empty_list, 1, var_632_1_updated_requests,
  // $new_requests empty_list
  LET, 1, var_empty_list, 1, var_633_1_new_requests,
  // $cancellations empty_key_order_set
  LET, 1, var_empty_key_order_set, 1, var_634_1_cancellations,
  // $sent_messages empty_key_order_table
  LET, 1, var_empty_key_order_table, 1, var_635_1_sent_messages,
  // $removed_children empty_key_order_table
  LET, 1, var_empty_key_order_table, 1, var_636_1_removed_children,
  // $log_message ""
  LET, 1, string_3, 1, var_637_1_log_message,
  // $events empty_list
  LET, 1, var_empty_list, 1, var_638_1_events,
  // .id_of 1) COMPUTE undefined start_arguments start))
  LET, -1, LOCAL(3), var_id_of, num_1, LOCAL(1),
  // tuple(first_task(.id_of 1) COMPUTE undefined start_arguments start))
  var_tuple, 5, LOCAL(1), uni_COMPUTE, var_undefined, LOCAL(5), LOCAL(4), 1, LOCAL(2),
  // $requests
  var_list, 1, LOCAL(2), 1, var_639_1_requests,
  // $current_task_id 1
  LET, 1, num_1, 1, var_641_1_current_task_id,
  // $iteration_no 0
  LET, 1, num_0, 1, var_642_1_iteration_no,
  // loop:
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(630, 3),
  POS(631, 3),
  POS(632, 3),
  POS(633, 3),
  POS(634, 3),
  POS(635, 3),
  POS(636, 3),
  POS(637, 3),
  POS(638, 3),
  POS(640, 27),
  POS(640, 10),
  POS(639, 3),
  POS(641, 3),
  POS(642, 3),
  POS(646, 3)
};

static TAB_NUM t_lambda_loop[] = {
  4, // locals
  0, // parameters
  // inc &iteration_no
  var_inc, 1, var_642_1_iteration_no, 1, var_642_1_iteration_no,
  // map &requests compute
  var_map, 2, var_639_1_requests, func_compute, 1, var_639_1_requests,
  // log_level >= 4 && removed_children.is_not_empty &log_message:
  var_std__less, 2, var_log_level, num_4, 1, LOCAL(1),
  // log_level >= 4 && removed_children.is_not_empty &log_message:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // log_level >= 4 && removed_children.is_not_empty &log_message:
  var_std__and, 2, LOCAL(2), lambda_63, 1, LOCAL(3),
  // update_if log_level >= 4 && removed_children.is_not_empty &log_message:
  var_update_if, 3, LOCAL(3), var_637_1_log_message, lambda_64, 1, var_637_1_log_message,
  // !removed_children empty_key_order_table
  LET, 1, var_empty_key_order_table, 1, var_636_1_removed_children,
  // for_each &requests
  var_for_each, 3, var_639_1_requests, lambda_70, lambda_71, 6, var_639_1_requests, var_641_1_current_task_id, var_633_1_new_requests, var_635_1_sent_messages, var_634_1_cancellations, var_637_1_log_message,
  // is_empty)
  var_is_empty, 1, var_635_1_sent_messages, 1, LOCAL(1),
  // $do_receive_messages not(sent_messages.is_empty)
  var_not, 1, LOCAL(1), 1, var_691_1_do_receive_messages,
  // is_empty)
  var_is_empty, 1, var_634_1_cancellations, 1, LOCAL(1),
  // $do_cancel_tasks not(cancellations.is_empty)
  var_not, 1, LOCAL(1), 1, var_692_1_do_cancel_tasks,
  // map &requests: (request)
  var_map, 2, var_639_1_requests, lambda_72, 1, var_639_1_requests,
  // !sent_messages empty_key_order_table
  LET, 1, var_empty_key_order_table, 1, var_635_1_sent_messages,
  // !cancellations empty_key_order_set
  LET, 1, var_empty_key_order_set, 1, var_634_1_cancellations,
  // queue_log_message_write !io
  func_queue_log_message_write, 0, 1, var_631_1_io,
  // !log_message ""
  LET, 1, string_3, 1, var_637_1_log_message,
  // for_each &requests !io
  var_for_each, 3, var_639_1_requests, lambda_75, lambda_76, IO_CALL(2), var_639_1_requests, var_631_1_io,
  // !updated_requests empty_list
  LET, 1, var_empty_list, 1, var_632_1_updated_requests,
  // is_not_empty
  var_is_not_empty, 1, var_633_1_new_requests, 1, LOCAL(1),
  // $something_to_do
  var_std__or, 2, LOCAL(1), lambda_77, 1, LOCAL(4),
  // maybe_exit! something_to_do
  func_maybe_exit, 1, LOCAL(4), IO_CALL(0),
  // get_and_check_events! !requests !io something_to_do
  func_get_and_check_events, 1, LOCAL(4), IO_CALL(2), var_639_1_requests, var_631_1_io,
  // for_each &requests !io !removed_children !log_message !exit_status
  var_for_each, 3, var_639_1_requests, lambda_78, lambda_88, IO_CALL(5), var_639_1_requests, var_631_1_io, var_636_1_removed_children, var_637_1_log_message, var_630_1_exit_status,
  // append &requests new_requests
  var_append, 2, var_639_1_requests, var_633_1_new_requests, 1, var_639_1_requests,
  // !new_requests empty_list
  LET, 1, var_empty_list, 1, var_633_1_new_requests,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(649, 5),
  POS(650, 5),
  POS(651, 15),
  POS(651, 15),
  POS(651, 15),
  POS(651, 5),
  POS(663, 5),
  POS(667, 5),
  POS(691, 44),
  POS(691, 5),
  POS(692, 40),
  POS(692, 5),
  POS(693, 5),
  POS(697, 5),
  POS(698, 5),
  POS(702, 5),
  POS(703, 5),
  POS(704, 5),
  POS(710, 5),
  POS(716, 22),
  POS(714, 5),
  POS(718, 5),
  POS(719, 5),
  POS(723, 5),
  POS(792, 5),
  POS(793, 5),
  POS(797, 5)
};

static TAB_NUM t_lambda_63[] = {
  1, // locals
  0, // parameters
  // is_not_empty &log_message:
  var_is_not_empty, 1, var_636_1_removed_children, 1, LOCAL(1),
  // removed_children.is_not_empty &log_message:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(651, 50),
  POS(651, 33)
};

static TAB_NUM t_lambda_64[] = {
  0, // locals
  0, // parameters
  // for_each removed_children
  var_for_each, 3, var_636_1_removed_children, lambda_65, lambda_69, TAIL_CALL,
  POS(652, 7)
};

static TAB_NUM t_lambda_65[] = {
  1, // locals
  2, // parameters
  var_653_3_parent_id,
  LOCAL(1), // 653_13_children
  // for_each children: (child_id)
  var_for_each, 2, LOCAL(1), lambda_66, TAIL_CALL,
  POS(654, 11)
};

static TAB_NUM t_lambda_66[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 654_20_child_id
  // parent_id != 0
  var_std__equal, 2, var_653_3_parent_id, num_0, 1, LOCAL(1),
  // parent_id != 0
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // $parent
  var_if, 3, LOCAL(2), lambda_67, lambda_68, 1, LOCAL(4),
  // "REMOVED TASK @(child_id)@(parent)"
  var_std__string, 3, str_REMOVED_TASK, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // append &log_message "REMOVED TASK @(child_id)@(parent)"
  var_append, 2, var_637_1_log_message, LOCAL(1), 1, var_637_1_log_message,
  // next
  var_next, 0, TAIL_CALL,
  POS(657, 17),
  POS(657, 17),
  POS(655, 13),
  POS(660, 33),
  POS(660, 13),
  POS(661, 13)
};

static TAB_NUM t_lambda_67[] = {
  1, // locals
  0, // parameters
  // " (parent: @(parent_id))@nl;"
  var_std__string, 3, str__parent, var_653_3_parent_id, string_5, 1, LOCAL(1),
  //  " (parent: @(parent_id))@nl;"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(658, 20),
  POS(658, 19)
};

static TAB_NUM t_lambda_68[] = {
  0, // locals
  0, // parameters
  //  "@nl;"
  LET, 1, string_6, TAIL_CALL,
  POS(659, 19)
};

static TAB_NUM t_lambda_69[] = {
  0, // locals
  0, // parameters
  //  log_message
  LET, 1, var_637_1_log_message, TAIL_CALL,
  POS(662, 11)
};

static TAB_NUM t_lambda_70[] = {
  7, // locals
  1, // parameters
  LOCAL(2), // 673_3_request
  // request $task $mode $body $argument $continuation
  LOCAL(2), 0, 5, LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), LOCAL(7),
  // collect_messages &task !sent_messages
  func_collect_messages, 1, LOCAL(3), 2, LOCAL(3), var_635_1_sent_messages,
  // collect_cancel_requests &task !cancellations
  func_collect_cancel_requests, 1, LOCAL(3), 2, LOCAL(3), var_634_1_cancellations,
  // collect_log_messages &task !log_message
  func_collect_log_messages, 1, LOCAL(3), 2, LOCAL(3), var_637_1_log_message,
  // create_new_tasks &task !current_task_id !new_requests
  func_create_new_tasks, 1, LOCAL(3), 3, LOCAL(3), var_641_1_current_task_id, var_633_1_new_requests,
  // tuple(task mode body argument continuation)
  var_tuple, 5, LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), LOCAL(7), 1, LOCAL(1),
  // push &updated_requests tuple(task mode body argument continuation)
  var_push, 2, var_632_1_updated_requests, LOCAL(1), 1, var_632_1_updated_requests,
  // next
  var_next, 0, TAIL_CALL,
  POS(674, 9),
  POS(675, 9),
  POS(676, 9),
  POS(677, 9),
  POS(678, 9),
  POS(679, 32),
  POS(679, 9),
  POS(680, 9)
};

static TAB_NUM t_lambda_71[] = {
  0, // locals
  0, // parameters
  // 
  LET, 6, var_632_1_updated_requests, var_641_1_current_task_id, var_633_1_new_requests, var_635_1_sent_messages, var_634_1_cancellations, var_637_1_log_message, TAIL_CALL,
  POS(681, 9)
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  1, // parameters
  var_693_16_request,
  // update_if do_receive_messages &request -> receive_messages(request)
  var_update_if, 3, var_691_1_do_receive_messages, var_693_16_request, lambda_73, 1, var_693_16_request,
  // update_if do_cancel_tasks &request -> maybe_mark_as_cancelled(request)
  var_update_if, 3, var_692_1_do_cancel_tasks, var_693_16_request, lambda_74, 1, var_693_16_request,
  // -> request
  LET, 1, var_693_16_request, TAIL_CALL,
  POS(694, 7),
  POS(695, 7),
  POS(696, 7)
};

static TAB_NUM t_lambda_73[] = {
  1, // locals
  0, // parameters
  // receive_messages(request)
  func_receive_messages, 1, var_693_16_request, 1, LOCAL(1),
  //  receive_messages(request)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(694, 49),
  POS(694, 48)
};

static TAB_NUM t_lambda_74[] = {
  1, // locals
  0, // parameters
  // maybe_mark_as_cancelled(request)
  func_maybe_mark_as_cancelled, 1, var_693_16_request, 1, LOCAL(1),
  //  maybe_mark_as_cancelled(request)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(695, 45),
  POS(695, 44)
};

static TAB_NUM t_lambda_75[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 705_3_request
  // start_io_operation! &request !io
  func_start_io_operation, 1, LOCAL(1), IO_CALL(2), LOCAL(1), var_631_1_io,
  // push &updated_requests request
  var_push, 2, var_632_1_updated_requests, LOCAL(1), 1, var_632_1_updated_requests,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(706, 9),
  POS(707, 9),
  POS(708, 9)
};

static TAB_NUM t_lambda_76[] = {
  0, // locals
  0, // parameters
  //  updated_requests io
  LET, 2, var_632_1_updated_requests, var_631_1_io, TAIL_CALL,
  POS(709, 9)
};

static TAB_NUM t_lambda_77[] = {
  1, // locals
  0, // parameters
  // any_of(requests has_something_to_do)
  var_any_of, 2, var_639_1_requests, func_has_something_to_do, 1, LOCAL(1),
  // any_of(requests has_something_to_do)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(717, 9),
  POS(717, 9)
};

static TAB_NUM t_lambda_78[] = {
  0, // locals
  1, // parameters
  var_724_3_request,
  // request $task $mode $body $argument $continuation
  var_724_3_request, 0, 5, var_725_9_task, var_725_15_mode, var_725_21_body, var_725_27_argument, var_725_37_continuation,
  // case mode
  var_case, 8, var_725_15_mode, uni_COMPLETE_IO, lambda_COMPLETE_IO, uni_EXIT, lambda_EXIT, uni_COMPUTE, lambda_COMPUTE, lambda_81, IO_TAIL_CALL,
  POS(725, 9),
  POS(726, 9)
};

static TAB_NUM t_lambda_COMPLETE_IO[] = {
  0, // locals
  0, // parameters
  // complete_io_operation!
  func_complete_io_operation, 0, IO_TAIL_CALL,
  POS(728, 13)
};

static TAB_NUM t_lambda_EXIT[] = {
  1, // locals
  0, // parameters
  // argument == EXIT_FAILURE &exit_status -> EXIT_FAILURE
  var_std__equal, 2, var_725_27_argument, var_EXIT_FAILURE, 1, LOCAL(1),
  // update_if argument == EXIT_FAILURE &exit_status -> EXIT_FAILURE
  var_update_if, 3, LOCAL(1), var_630_1_exit_status, lambda_79, 1, var_630_1_exit_status,
  // exit_task! task !io !exit_status !removed_children
  func_exit_task, 1, var_725_9_task, IO_CALL(3), var_631_1_io, var_630_1_exit_status, var_636_1_removed_children,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(730, 23),
  POS(730, 13),
  POS(731, 13),
  POS(732, 13)
};

static TAB_NUM t_lambda_79[] = {
  0, // locals
  0, // parameters
  //  EXIT_FAILURE
  LET, 1, var_EXIT_FAILURE, TAIL_CALL,
  POS(730, 63)
};

static TAB_NUM t_lambda_COMPUTE[] = {
  1, // locals
  0, // parameters
  // is_an_error:
  var_is_an_error, 1, var_725_27_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_argument_is_an_error, lambda_80, IO_TAIL_CALL,
  POS(735, 24),
  POS(734, 13)
};

static TAB_NUM t_lambda_argument_is_an_error[] = {
  0, // locals
  0, // parameters
  // handle_error!
  func_handle_error, 0, IO_TAIL_CALL,
  POS(736, 17)
};

static TAB_NUM t_lambda_80[] = {
  0, // locals
  0, // parameters
  // maybe_cancel_task!
  func_maybe_cancel_task, 0, IO_TAIL_CALL,
  POS(738, 17)
};

static TAB_NUM t_lambda_81[] = {
  0, // locals
  0, // parameters
  // maybe_cancel_task!
  func_maybe_cancel_task, 0, IO_TAIL_CALL,
  POS(740, 13)
};

static TAB_NUM t_func_complete_io_operation[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(body) == 3:
  var_parameter_count_of, 1, var_725_21_body, 1, LOCAL(1),
  // parameter_count_of(body) == 3:
  var_std__equal, 2, LOCAL(1), num_3, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_82, lambda_83, IO_TAIL_CALL,
  POS(744, 13),
  POS(744, 13),
  POS(743, 11)
};

static TAB_NUM t_lambda_82[] = {
  0, // locals
  0, // parameters
  // body! !mode &task &io !body &argument
  var_725_21_body, 3, var_725_9_task, var_631_1_io, var_725_27_argument, IO_CALL(5), var_725_15_mode, var_725_9_task, var_631_1_io, var_725_21_body, var_725_27_argument,
  // check_for_error!
  func_check_for_error, 0, IO_TAIL_CALL,
  POS(745, 15),
  POS(746, 15)
};

static TAB_NUM t_lambda_83[] = {
  0, // locals
  0, // parameters
  // body! !mode &task &io !body !argument
  var_725_21_body, 2, var_725_9_task, var_631_1_io, IO_CALL(5), var_725_15_mode, var_725_9_task, var_631_1_io, var_725_21_body, var_725_27_argument,
  // check_for_error!
  func_check_for_error, 0, IO_TAIL_CALL,
  POS(748, 15),
  POS(749, 15)
};

static TAB_NUM t_func_check_for_error[] = {
  1, // locals
  0, // parameters
  // is_an_error:
  var_is_an_error, 1, var_725_27_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_argument_is_an_error, lambda_84, IO_TAIL_CALL,
  POS(753, 22),
  POS(752, 11)
};

static TAB_NUM t_lambda_2_argument_is_an_error[] = {
  0, // locals
  0, // parameters
  // handle_error!
  func_handle_error, 0, IO_TAIL_CALL,
  POS(754, 15)
};

static TAB_NUM t_lambda_84[] = {
  1, // locals
  0, // parameters
  // tuple(task mode body argument continuation)
  var_tuple, 5, var_725_9_task, var_725_15_mode, var_725_21_body, var_725_27_argument, var_725_37_continuation, 1, LOCAL(1),
  // push &updated_requests tuple(task mode body argument continuation)
  var_push, 2, var_632_1_updated_requests, LOCAL(1), 1, var_632_1_updated_requests,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(756, 38),
  POS(756, 15),
  POS(757, 15)
};

static TAB_NUM t_func_handle_error[] = {
  1, // locals
  0, // parameters
  // $error_handler error_handler_of(task)
  var_error_handler_of, 1, var_725_9_task, 1, var_760_1_error_handler,
  // is_defined:
  var_is_defined, 1, var_760_1_error_handler, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_error_handler_is_defined, lambda_85, IO_TAIL_CALL,
  POS(760, 11),
  POS(762, 27),
  POS(761, 11)
};

static TAB_NUM t_lambda_error_handler_is_defined[] = {
  1, // locals
  0, // parameters
  // tuple(task COMPUTE undefined argument error_handler)
  var_tuple, 5, var_725_9_task, uni_COMPUTE, var_undefined, var_725_27_argument, var_760_1_error_handler, 1, LOCAL(1),
  // push &updated_requests
  var_push, 2, var_632_1_updated_requests, LOCAL(1), 1, var_632_1_updated_requests,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(764, 17),
  POS(763, 15),
  POS(765, 15)
};

static TAB_NUM t_lambda_85[] = {
  2, // locals
  0, // parameters
  // !exit_status EXIT_FAILURE
  LET, 1, var_EXIT_FAILURE, 1, var_630_1_exit_status,
  // $message generate_error_message(argument)
  var_generate_error_message, 1, var_725_27_argument, 1, LOCAL(2),
  // push(message '@nl;')
  var_push, 2, LOCAL(2), chr_10, 1, LOCAL(1),
  // append_log_entry !log_message task push(message '@nl;')
  func_append_log_entry, 2, var_725_9_task, LOCAL(1), 1, var_637_1_log_message,
  // exit_task! task !io !exit_status !removed_children
  func_exit_task, 1, var_725_9_task, IO_CALL(3), var_631_1_io, var_630_1_exit_status, var_636_1_removed_children,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(767, 15),
  POS(768, 15),
  POS(769, 50),
  POS(769, 15),
  POS(770, 15),
  POS(771, 15)
};

static TAB_NUM t_func_maybe_cancel_task[] = {
  1, // locals
  0, // parameters
  // is_cancelled:
  var_is_cancelled, 1, var_725_9_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10_task_is_cancelled, lambda_87, IO_TAIL_CALL,
  POS(775, 18),
  POS(774, 11)
};

static TAB_NUM t_lambda_10_task_is_cancelled[] = {
  1, // locals
  0, // parameters
  // $cancel_handler cancel_handler_of(task)
  var_cancel_handler_of, 1, var_725_9_task, 1, var_776_1_cancel_handler,
  // is_defined:
  var_is_defined, 1, var_776_1_cancel_handler, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_cancel_handler_is_defined, lambda_86, IO_TAIL_CALL,
  POS(776, 15),
  POS(778, 32),
  POS(777, 15)
};

static TAB_NUM t_lambda_cancel_handler_is_defined[] = {
  1, // locals
  0, // parameters
  // request !task !mode !body !argument !continuation
  var_724_3_request, 0, 5, var_725_9_task, var_725_15_mode, var_725_21_body, var_725_27_argument, var_725_37_continuation,
  // task.is_cancelled false
  LET, -1, var_725_9_task, var_is_cancelled, var_false, var_725_9_task,
  // tuple(task COMPUTE undefined argument cancel_handler)
  var_tuple, 5, var_725_9_task, uni_COMPUTE, var_undefined, var_725_27_argument, var_776_1_cancel_handler, 1, LOCAL(1),
  // push &updated_requests
  var_push, 2, var_632_1_updated_requests, LOCAL(1), 1, var_632_1_updated_requests,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(779, 19),
  POS(780, 20),
  POS(782, 21),
  POS(781, 19),
  POS(783, 19)
};

static TAB_NUM t_lambda_86[] = {
  0, // locals
  0, // parameters
  // exit_task! task !io !exit_status !removed_children
  func_exit_task, 1, var_725_9_task, IO_CALL(3), var_631_1_io, var_630_1_exit_status, var_636_1_removed_children,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(785, 19),
  POS(786, 19)
};

static TAB_NUM t_lambda_87[] = {
  0, // locals
  0, // parameters
  // push &updated_requests request
  var_push, 2, var_632_1_updated_requests, var_724_3_request, 1, var_632_1_updated_requests,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(788, 15),
  POS(789, 15)
};

static TAB_NUM t_lambda_88[] = {
  0, // locals
  0, // parameters
  //  updated_requests io removed_children log_message exit_status
  LET, 5, var_632_1_updated_requests, var_631_1_io, var_636_1_removed_children, var_637_1_log_message, var_630_1_exit_status, TAIL_CALL,
  POS(791, 9)
};

static TAB_NUM t_func_compute[] = {
  1, // locals
  1, // parameters
  var_803_11_request,
  // request $task $mode $body $argument $continuation
  var_803_11_request, 0, 5, var_804_9_task, var_804_15_mode, var_804_21_body, var_804_27_argument, var_804_37_continuation,
  // id_of(task))
  var_id_of, 1, var_804_9_task, 1, LOCAL(1),
  // $removed removed_children(id_of(task))
  var_636_1_removed_children, 1, LOCAL(1), 1, var_805_1_removed,
  // is_defined &request &task:
  var_is_defined, 1, var_805_1_removed, 1, LOCAL(1),
  // update_if removed.is_defined &request &task:
  var_update_if, 4, LOCAL(1), var_803_11_request, var_804_9_task, lambda_89, 2, var_803_11_request, var_804_9_task,
  // mode == COMPUTE:
  var_std__equal, 2, var_804_15_mode, uni_COMPUTE, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_91, lambda_95, TAIL_CALL,
  POS(804, 5),
  POS(805, 31),
  POS(805, 5),
  POS(806, 23),
  POS(806, 5),
  POS(810, 7),
  POS(809, 5)
};

static TAB_NUM t_lambda_89[] = {
  1, // locals
  0, // parameters
  // child_ids_of: (id) -> not(removed(id))
  var_child_ids_of, 1, var_804_9_task, 1, LOCAL(1),
  // filter &task.child_ids_of: (id) -> not(removed(id))
  var_filter, 2, LOCAL(1), lambda_90, 1, LOCAL(1),
  // task.child_ids_of: (id) -> not(removed(id))
  LET, -1, var_804_9_task, var_child_ids_of, LOCAL(1), var_804_9_task,
  // tuple(task mode body argument continuation) task
  var_tuple, 5, var_804_9_task, var_804_15_mode, var_804_21_body, var_804_27_argument, var_804_37_continuation, 1, LOCAL(1),
  // -> tuple(task mode body argument continuation) task
  LET, 2, LOCAL(1), var_804_9_task, TAIL_CALL,
  POS(807, 20),
  POS(807, 7),
  POS(807, 15),
  POS(808, 10),
  POS(808, 7)
};

static TAB_NUM t_lambda_90[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 807_28_id
  // removed(id))
  var_805_1_removed, 1, LOCAL(3), 1, LOCAL(1),
  // not(removed(id))
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // -> not(removed(id))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(807, 46),
  POS(807, 42),
  POS(807, 39)
};

static TAB_NUM t_lambda_91[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(continuation) == 2:
  var_parameter_count_of, 1, var_804_37_continuation, 1, LOCAL(1),
  // parameter_count_of(continuation) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_92, lambda_93, TAIL_CALL,
  POS(812, 11),
  POS(812, 11),
  POS(811, 9)
};

static TAB_NUM t_lambda_92[] = {
  0, // locals
  0, // parameters
  // !request continuation(task argument)
  var_804_37_continuation, 2, var_804_9_task, var_804_27_argument, 1, var_803_11_request,
  // check_request
  func_check_request, 0, TAIL_CALL,
  POS(813, 13),
  POS(814, 13)
};

static TAB_NUM t_lambda_93[] = {
  0, // locals
  0, // parameters
  // !request continuation(task)
  var_804_37_continuation, 1, var_804_9_task, 1, var_803_11_request,
  // check_request
  func_check_request, 0, TAIL_CALL,
  POS(816, 13),
  POS(817, 13)
};

static TAB_NUM t_func_check_request[] = {
  1, // locals
  0, // parameters
  // is_an_error:
  var_is_an_error, 1, var_803_11_request, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_request_is_an_error, lambda_94, TAIL_CALL,
  POS(821, 21),
  POS(820, 11)
};

static TAB_NUM t_lambda_request_is_an_error[] = {
  1, // locals
  0, // parameters
  // generate_error_message(request)
  var_generate_error_message, 1, var_803_11_request, 1, LOCAL(1),
  // log &task generate_error_message(request)
  var_log, 2, var_804_9_task, LOCAL(1), 1, var_804_9_task,
  // tuple(task EXIT undefined EXIT_FAILURE undefined)
  var_tuple, 5, var_804_9_task, uni_EXIT, var_undefined, var_EXIT_FAILURE, var_undefined, 1, LOCAL(1),
  // -> tuple(task EXIT undefined EXIT_FAILURE undefined)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(822, 25),
  POS(822, 15),
  POS(823, 18),
  POS(823, 15)
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  //  request
  LET, 1, var_803_11_request, TAIL_CALL,
  POS(824, 15)
};

static TAB_NUM t_lambda_95[] = {
  0, // locals
  0, // parameters
  //  request
  LET, 1, var_803_11_request, TAIL_CALL,
  POS(825, 9)
};

static TAB_NUM t_func_collect_messages[] = {
  1, // locals
  1, // parameters
  var_829_20_task,
  // outbound_messages_of(task)
  var_outbound_messages_of, 1, var_829_20_task, 1, LOCAL(1),
  // for_each outbound_messages_of(task)
  var_for_each, 3, LOCAL(1), lambda_96, lambda_98, IO_TAIL_CALL,
  POS(830, 14),
  POS(830, 5)
};

static TAB_NUM t_lambda_96[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 831_3_entry
  // entry $receiver $message
  LOCAL(2), 0, 2, var_832_7_receiver, var_832_17_message,
  // is_an_integer:
  var_is_an_integer, 1, var_832_7_receiver, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_receiver_is_an_integer, lambda_97, IO_TAIL_CALL,
  POS(832, 9),
  POS(834, 20),
  POS(833, 9)
};

static TAB_NUM t_lambda_receiver_is_an_integer[] = {
  0, // locals
  0, // parameters
  // send_message! receiver
  func_send_message, 1, var_832_7_receiver, IO_TAIL_CALL,
  POS(835, 13)
};

static TAB_NUM t_lambda_97[] = {
  0, // locals
  0, // parameters
  // for_each! receiver send_message
  var_for_each, 2, var_832_7_receiver, func_send_message, IO_TAIL_CALL,
  POS(837, 13)
};

static TAB_NUM t_func_send_message[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 839_16_the_receiver
  // sent_messages(the_receiver) empty_list)
  var_635_1_sent_messages, 1, LOCAL(2), 1, LOCAL(1),
  // $messages default_value(sent_messages(the_receiver) empty_list)
  var_default_value, 2, LOCAL(1), var_empty_list, 1, LOCAL(3),
  // push &messages message
  var_push, 2, LOCAL(3), var_832_17_message, 1, LOCAL(3),
  // sent_messages(the_receiver) messages
  var_635_1_sent_messages, 2, LOCAL(2), LOCAL(3), 1, var_635_1_sent_messages,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(840, 35),
  POS(840, 11),
  POS(841, 11),
  POS(842, 12),
  POS(843, 11)
};

static TAB_NUM t_lambda_98[] = {
  0, // locals
  0, // parameters
  // task.outbound_messages_of empty_list
  LET, -1, var_829_20_task, var_outbound_messages_of, var_empty_list, var_829_20_task,
  // -> task sent_messages
  LET, 2, var_829_20_task, var_635_1_sent_messages, TAIL_CALL,
  POS(845, 10),
  POS(846, 9)
};

static TAB_NUM t_func_collect_cancel_requests[] = {
  1, // locals
  1, // parameters
  var_848_27_task,
  // cancel_requests_of(task)
  var_cancel_requests_of, 1, var_848_27_task, 1, LOCAL(1),
  // for_each cancel_requests_of(task)
  var_for_each, 3, LOCAL(1), lambda_99, lambda_100, IO_TAIL_CALL,
  POS(849, 14),
  POS(849, 5)
};

static TAB_NUM t_lambda_99[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 850_3_id
  // cancellations(id) true
  var_634_1_cancellations, 2, LOCAL(1), var_true, 1, var_634_1_cancellations,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(851, 10),
  POS(852, 9)
};

static TAB_NUM t_lambda_100[] = {
  0, // locals
  0, // parameters
  // task.cancel_requests_of empty_list
  LET, -1, var_848_27_task, var_cancel_requests_of, var_empty_list, var_848_27_task,
  // -> task cancellations
  LET, 2, var_848_27_task, var_634_1_cancellations, TAIL_CALL,
  POS(854, 10),
  POS(855, 9)
};

static TAB_NUM t_func_collect_log_messages[] = {
  1, // locals
  1, // parameters
  var_857_24_task,
  // log_level == 0
  var_std__equal, 2, var_log_level, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_101, lambda_102, IO_TAIL_CALL,
  POS(859, 7),
  POS(858, 5)
};

static TAB_NUM t_lambda_101[] = {
  0, // locals
  0, // parameters
  //  task log_message
  LET, 2, var_857_24_task, var_637_1_log_message, TAIL_CALL,
  POS(860, 9)
};

static TAB_NUM t_lambda_102[] = {
  1, // locals
  0, // parameters
  // log_messages_of(task)
  var_log_messages_of, 1, var_857_24_task, 1, LOCAL(1),
  // for_each log_messages_of(task)
  var_for_each, 3, LOCAL(1), lambda_103, lambda_104, IO_TAIL_CALL,
  POS(862, 18),
  POS(862, 9)
};

static TAB_NUM t_lambda_103[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 863_3_message
  // append_log_entry !log_message task message
  func_append_log_entry, 2, var_857_24_task, LOCAL(1), 1, var_637_1_log_message,
  // task.log_messages_of empty_list
  LET, -1, var_857_24_task, var_log_messages_of, var_empty_list, var_857_24_task,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(864, 13),
  POS(865, 14),
  POS(866, 13)
};

static TAB_NUM t_lambda_104[] = {
  0, // locals
  0, // parameters
  //  task log_message
  LET, 2, var_857_24_task, var_637_1_log_message, TAIL_CALL,
  POS(867, 13)
};

static TAB_NUM t_func_append_log_entry[] = {
  3, // locals
  2, // parameters
  var_869_20_task,
  var_869_25_message,
  // log_level >= 2
  var_std__less, 2, var_log_level, num_2, 1, LOCAL(1),
  // log_level >= 2
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_105, lambda_106, 1, LOCAL(3),
  // append log_message
  var_append, 2, var_637_1_log_message, LOCAL(3), TAIL_CALL,
  POS(872, 9),
  POS(872, 9),
  POS(871, 7),
  POS(870, 5)
};

static TAB_NUM t_lambda_105[] = {
  2, // locals
  0, // parameters
  // id_of(task) ": " message)
  var_id_of, 1, var_869_20_task, 1, LOCAL(1),
  // string(id_of(task) ": " message)
  var_string, 3, LOCAL(1), string_7, var_869_25_message, 1, LOCAL(2),
  //  string(id_of(task) ": " message)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(873, 19),
  POS(873, 12),
  POS(873, 11)
};

static TAB_NUM t_lambda_106[] = {
  0, // locals
  0, // parameters
  //  message
  LET, 1, var_869_25_message, TAIL_CALL,
  POS(874, 11)
};

static TAB_NUM t_func_create_new_tasks[] = {
  2, // locals
  1, // parameters
  var_876_20_task,
  // fork_requests_of(task).is_empty
  var_fork_requests_of, 1, var_876_20_task, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_107, lambda_108, TAIL_CALL,
  POS(878, 7),
  POS(878, 30),
  POS(877, 5)
};

static TAB_NUM t_lambda_107[] = {
  0, // locals
  0, // parameters
  //  task current_task_id new_requests
  LET, 3, var_876_20_task, var_641_1_current_task_id, var_633_1_new_requests, TAIL_CALL,
  POS(879, 9)
};

static TAB_NUM t_lambda_108[] = {
  1, // locals
  0, // parameters
  // fork_requests_of(task)
  var_fork_requests_of, 1, var_876_20_task, 1, LOCAL(1),
  // for_each fork_requests_of(task)
  var_for_each, 3, LOCAL(1), lambda_109, lambda_110, TAIL_CALL,
  POS(881, 18),
  POS(881, 9)
};

static TAB_NUM t_lambda_109[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 882_3_fork_request
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
  var_inc, 1, var_641_1_current_task_id, 1, var_641_1_current_task_id,
  // new_task.id_of current_task_id
  LET, -1, LOCAL(4), var_id_of, var_641_1_current_task_id, LOCAL(4),
  // !new_task.parent_id_of id_of(task)
  var_id_of, 1, var_876_20_task, 1, LOCAL(2),
  // new_task.parent_id_of id_of(task)
  LET, -1, LOCAL(4), var_parent_id_of, LOCAL(2), LOCAL(4),
  // child_ids_of current_task_id
  var_child_ids_of, 1, var_876_20_task, 1, LOCAL(1),
  // push &task.child_ids_of current_task_id
  var_push, 2, LOCAL(1), var_641_1_current_task_id, 1, LOCAL(1),
  // task.child_ids_of current_task_id
  LET, -1, var_876_20_task, var_child_ids_of, LOCAL(1), var_876_20_task,
  // tuple(new_task COMPUTE undefined argument continuation)
  var_tuple, 5, LOCAL(4), uni_COMPUTE, var_undefined, LOCAL(6), LOCAL(5), 1, LOCAL(1),
  // push &new_requests
  var_push, 2, var_633_1_new_requests, LOCAL(1), 1, var_633_1_new_requests,
  // next
  var_next, 0, TAIL_CALL,
  POS(883, 13),
  POS(887, 14),
  POS(888, 14),
  POS(889, 14),
  POS(890, 14),
  POS(891, 14),
  POS(892, 14),
  POS(893, 14),
  POS(894, 14),
  POS(895, 14),
  POS(896, 14),
  POS(900, 13),
  POS(901, 14),
  POS(902, 13),
  POS(902, 14),
  POS(906, 24),
  POS(906, 13),
  POS(906, 19),
  POS(911, 15),
  POS(910, 13),
  POS(912, 13)
};

static TAB_NUM t_lambda_110[] = {
  0, // locals
  0, // parameters
  // task.fork_requests_of empty_list
  LET, -1, var_876_20_task, var_fork_requests_of, var_empty_list, var_876_20_task,
  // -> task current_task_id new_requests
  LET, 3, var_876_20_task, var_641_1_current_task_id, var_633_1_new_requests, TAIL_CALL,
  POS(914, 14),
  POS(915, 13)
};

static TAB_NUM t_func_receive_messages[] = {
  1, // locals
  1, // parameters
  var_919_20_request,
  // request $task $mode $body $argument $continuation
  var_919_20_request, 0, 5, var_920_9_task, var_920_15_mode, var_920_21_body, var_920_27_argument, var_920_37_continuation,
  // id_of(task))
  var_id_of, 1, var_920_9_task, 1, LOCAL(1),
  // $messages sent_messages(id_of(task))
  var_635_1_sent_messages, 1, LOCAL(1), 1, var_921_1_messages,
  // is_defined:
  var_is_defined, 1, var_921_1_messages, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_messages_is_defined, lambda_112, TAIL_CALL,
  POS(920, 5),
  POS(921, 29),
  POS(921, 5),
  POS(923, 16),
  POS(922, 5)
};

static TAB_NUM t_lambda_messages_is_defined[] = {
  1, // locals
  0, // parameters
  // inbound_messages_of messages
  var_inbound_messages_of, 1, var_920_9_task, 1, LOCAL(1),
  // append &task.inbound_messages_of messages
  var_append, 2, LOCAL(1), var_921_1_messages, 1, LOCAL(1),
  // task.inbound_messages_of messages
  LET, -1, var_920_9_task, var_inbound_messages_of, LOCAL(1), var_920_9_task,
  // mode == WAIT &mode -> COMPUTE
  var_std__equal, 2, var_920_15_mode, uni_WAIT, 1, LOCAL(1),
  // update_if mode == WAIT &mode -> COMPUTE
  var_update_if, 3, LOCAL(1), var_920_15_mode, lambda_111, 1, var_920_15_mode,
  // tuple(task mode body argument continuation)
  var_tuple, 5, var_920_9_task, var_920_15_mode, var_920_21_body, var_920_27_argument, var_920_37_continuation, 1, LOCAL(1),
  // -> tuple(task mode body argument continuation)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(924, 22),
  POS(924, 9),
  POS(924, 17),
  POS(925, 19),
  POS(925, 9),
  POS(926, 12),
  POS(926, 9)
};

static TAB_NUM t_lambda_111[] = {
  0, // locals
  0, // parameters
  //  COMPUTE
  LET, 1, uni_COMPUTE, TAIL_CALL,
  POS(925, 40)
};

static TAB_NUM t_lambda_112[] = {
  0, // locals
  0, // parameters
  //  request
  LET, 1, var_919_20_request, TAIL_CALL,
  POS(927, 9)
};

static TAB_NUM t_func_maybe_mark_as_cancelled[] = {
  2, // locals
  1, // parameters
  var_929_27_request,
  // request $task $mode $body $argument $continuation
  var_929_27_request, 0, 5, var_930_9_task, var_930_15_mode, var_930_21_body, var_930_27_argument, var_930_37_continuation,
  // id_of(task)):
  var_id_of, 1, var_930_9_task, 1, LOCAL(1),
  // cancellations(id_of(task)):
  var_634_1_cancellations, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_cancellationsid_oftask, lambda_113, TAIL_CALL,
  POS(930, 5),
  POS(932, 21),
  POS(932, 7),
  POS(931, 5)
};

static TAB_NUM t_lambda_cancellationsid_oftask[] = {
  1, // locals
  0, // parameters
  // task.is_cancelled true
  LET, -1, var_930_9_task, var_is_cancelled, var_true, var_930_9_task,
  // tuple(task mode body argument continuation)
  var_tuple, 5, var_930_9_task, var_930_15_mode, var_930_21_body, var_930_27_argument, var_930_37_continuation, 1, LOCAL(1),
  // -> tuple(task mode body argument continuation)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(933, 10),
  POS(934, 12),
  POS(934, 9)
};

static TAB_NUM t_lambda_113[] = {
  0, // locals
  0, // parameters
  //  request
  LET, 1, var_929_27_request, TAIL_CALL,
  POS(935, 9)
};

static TAB_NUM t_func_queue_log_message_write[] = {
  2, // locals
  0, // parameters
  // log_level >= 4 &log_message:
  var_std__less, 2, var_log_level, num_4, 1, LOCAL(1),
  // log_level >= 4 &log_message:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // update_if log_level >= 4 &log_message:
  var_update_if, 3, LOCAL(2), var_637_1_log_message, lambda_114, 1, var_637_1_log_message,
  // is_empty
  var_is_empty, 1, var_637_1_log_message, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_117, lambda_118, TAIL_CALL,
  POS(940, 15),
  POS(940, 15),
  POS(940, 5),
  POS(949, 19),
  POS(948, 5)
};

static TAB_NUM t_lambda_114[] = {
  0, // locals
  0, // parameters
  // for_each new_requests
  var_for_each, 3, var_633_1_new_requests, lambda_115, lambda_116, TAIL_CALL,
  POS(941, 7)
};

static TAB_NUM t_lambda_115[] = {
  5, // locals
  1, // parameters
  LOCAL(4), // 942_3_request
  // request $task $_mode $_body $_arguments $_continuation
  LOCAL(4), 0, 5, LOCAL(5), LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(1),
  // id_of(task)) (parent: @(parent_id_of(task)))
  var_id_of, 1, LOCAL(5), 1, LOCAL(1),
  // parent_id_of(task)))
  var_parent_id_of, 1, LOCAL(5), 1, LOCAL(2),
  // "
  var_std__string, 5, str_CREATED_TASK, LOCAL(1), str__parent, LOCAL(2), string_5, 1, LOCAL(3),
  // append &log_message "
  var_append, 2, var_637_1_log_message, LOCAL(3), 1, var_637_1_log_message,
  // next
  var_next, 0, TAIL_CALL,
  POS(943, 11),
  POS(945, 28),
  POS(945, 52),
  POS(944, 31),
  POS(944, 11),
  POS(946, 11)
};

static TAB_NUM t_lambda_116[] = {
  0, // locals
  0, // parameters
  //  log_message
  LET, 1, var_637_1_log_message, TAIL_CALL,
  POS(947, 11)
};

static TAB_NUM t_lambda_117[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_631_1_io, TAIL_CALL,
  POS(950, 9)
};

static TAB_NUM t_lambda_118[] = {
  2, // locals
  0, // parameters
  // log_level >= 3 &io:
  var_std__less, 2, var_log_level, num_3, 1, LOCAL(1),
  // log_level >= 3 &io:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // update_if log_level >= 3 &io:
  var_update_if, 3, LOCAL(2), var_631_1_io, lambda_119, 1, var_631_1_io,
  // to_utf8
  var_to_utf8, 1, var_637_1_log_message, 1, LOCAL(1),
  // write_to &io STDERR_FILENO log_message.to_utf8
  var_write_to, 3, var_631_1_io, var_STDERR_FILENO, LOCAL(1), 1, var_631_1_io,
  // -> io
  LET, 1, var_631_1_io, TAIL_CALL,
  POS(952, 19),
  POS(952, 19),
  POS(952, 9),
  POS(955, 48),
  POS(955, 9),
  POS(956, 9)
};

static TAB_NUM t_lambda_119[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, string_8, var_642_1_iteration_no, string_9, 1, LOCAL(1),
  // write_to io STDERR_FILENO "
  var_write_to, 3, var_631_1_io, var_STDERR_FILENO, LOCAL(1), TAIL_CALL,
  POS(953, 37),
  POS(953, 11)
};

static TAB_NUM t_func_start_io_operation[] = {
  2, // locals
  1, // parameters
  var_958_22_request,
  // request $task $mode $body $argument $continuation
  var_958_22_request, 0, 5, var_959_9_task, var_959_15_mode, var_959_21_body, var_959_27_argument, var_959_37_continuation,
  // mode == START_IO
  var_std__equal, 2, var_959_15_mode, uni_START_IO, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_120, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_122, lambda_125, IO_TAIL_CALL,
  POS(959, 5),
  POS(962, 9),
  POS(961, 9),
  POS(960, 5)
};

static TAB_NUM t_lambda_120[] = {
  2, // locals
  0, // parameters
  // is_cancelled && mode == CHECK_IO
  var_is_cancelled, 1, var_959_9_task, 1, LOCAL(1),
  // is_cancelled && mode == CHECK_IO
  var_std__and, 2, LOCAL(1), lambda_121, 1, LOCAL(2),
  // task.is_cancelled && mode == CHECK_IO
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(963, 14),
  POS(963, 14),
  POS(963, 9)
};

static TAB_NUM t_lambda_121[] = {
  1, // locals
  0, // parameters
  // mode == CHECK_IO
  var_std__equal, 2, var_959_15_mode, uni_CHECK_IO, 1, LOCAL(1),
  // mode == CHECK_IO
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(963, 30),
  POS(963, 30)
};

static TAB_NUM t_lambda_122[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(body) == 3:
  var_parameter_count_of, 1, var_959_21_body, 1, LOCAL(1),
  // parameter_count_of(body) == 3:
  var_std__equal, 2, LOCAL(1), num_3, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_123, lambda_124, IO_TAIL_CALL,
  POS(966, 11),
  POS(966, 11),
  POS(965, 9)
};

static TAB_NUM t_lambda_123[] = {
  1, // locals
  0, // parameters
  // body! !mode &task &io !body &argument
  var_959_21_body, 3, var_959_9_task, var_631_1_io, var_959_27_argument, IO_CALL(5), var_959_15_mode, var_959_9_task, var_631_1_io, var_959_21_body, var_959_27_argument,
  // tuple(task mode body argument continuation) io
  var_tuple, 5, var_959_9_task, var_959_15_mode, var_959_21_body, var_959_27_argument, var_959_37_continuation, 1, LOCAL(1),
  // -> tuple(task mode body argument continuation) io
  LET, 2, LOCAL(1), var_631_1_io, TAIL_CALL,
  POS(967, 13),
  POS(968, 16),
  POS(968, 13)
};

static TAB_NUM t_lambda_124[] = {
  1, // locals
  0, // parameters
  // body! !mode &task &io !body !argument
  var_959_21_body, 2, var_959_9_task, var_631_1_io, IO_CALL(5), var_959_15_mode, var_959_9_task, var_631_1_io, var_959_21_body, var_959_27_argument,
  // tuple(task mode body argument continuation) io
  var_tuple, 5, var_959_9_task, var_959_15_mode, var_959_21_body, var_959_27_argument, var_959_37_continuation, 1, LOCAL(1),
  // -> tuple(task mode body argument continuation) io
  LET, 2, LOCAL(1), var_631_1_io, TAIL_CALL,
  POS(970, 13),
  POS(971, 16),
  POS(971, 13)
};

static TAB_NUM t_lambda_125[] = {
  0, // locals
  0, // parameters
  //  request io
  LET, 2, var_958_22_request, var_631_1_io, TAIL_CALL,
  POS(972, 9)
};

static TAB_NUM t_func_has_something_to_do[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 976_23_request
  // request $_task $mode $_body $_arguments $_continuation
  LOCAL(3), 0, 5, LOCAL(1), var_977_16_mode, LOCAL(1), LOCAL(1), LOCAL(1),
  // mode == COMPUTE || mode == EXIT
  var_std__equal, 2, var_977_16_mode, uni_COMPUTE, 1, LOCAL(1),
  // mode == COMPUTE || mode == EXIT
  var_std__or, 2, LOCAL(1), lambda_126, 1, LOCAL(2),
  // -> mode == COMPUTE || mode == EXIT
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(977, 5),
  POS(978, 8),
  POS(978, 8),
  POS(978, 5)
};

static TAB_NUM t_lambda_126[] = {
  1, // locals
  0, // parameters
  // mode == EXIT
  var_std__equal, 2, var_977_16_mode, uni_EXIT, 1, LOCAL(1),
  // mode == EXIT
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(978, 27),
  POS(978, 27)
};

static TAB_NUM t_func_maybe_exit[] = {
  1, // locals
  1, // parameters
  var_980_14_something_to_do,
  // is_empty:
  var_is_empty, 1, var_631_1_io, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_io_is_empty, var_pass, IO_TAIL_CALL,
  POS(982, 10),
  POS(981, 5)
};

static TAB_NUM t_lambda_io_is_empty[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_639_1_requests, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_requests_is_empty, lambda_127, IO_TAIL_CALL,
  POS(984, 20),
  POS(983, 9)
};

static TAB_NUM t_lambda_requests_is_empty[] = {
  0, // locals
  0, // parameters
  // exit! exit_status # no more requests and no more pending log-writes
  var_exit, 1, var_630_1_exit_status, IO_TAIL_CALL,
  POS(985, 13)
};

static TAB_NUM t_lambda_127[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_980_14_something_to_do, var_pass, lambda_128, IO_TAIL_CALL,
  POS(987, 13)
};

static TAB_NUM t_lambda_128[] = {
  1, // locals
  0, // parameters
  // write! $_bytes_written STDERR_FILENO "
  var_write, 2, var_STDERR_FILENO, str_NO_TASK_IS_READY, IO_CALL(1), LOCAL(1),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(991, 17),
  POS(993, 17)
};

static TAB_NUM t_func_get_and_check_events[] = {
  1, // locals
  1, // parameters
  var_996_24_something_to_do,
  // is_empty
  var_is_empty, 1, var_631_1_io, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_129, lambda_130, IO_TAIL_CALL,
  POS(998, 10),
  POS(997, 5)
};

static TAB_NUM t_lambda_129[] = {
  0, // locals
  0, // parameters
  //  requests io
  LET, 2, var_639_1_requests, var_631_1_io, TAIL_CALL,
  POS(999, 9)
};

static TAB_NUM t_lambda_130[] = {
  1, // locals
  0, // parameters
  // $timeout
  var_if, 3, var_996_24_something_to_do, lambda_131, lambda_132, 1, LOCAL(1),
  // get_events! &io !events timeout
  var_get_events, 2, var_631_1_io, LOCAL(1), IO_CALL(2), var_631_1_io, var_638_1_events,
  // map &requests check_events
  var_map, 2, var_639_1_requests, func_check_events, 1, var_639_1_requests,
  // !events empty_list
  LET, 1, var_empty_list, 1, var_638_1_events,
  // -> requests io
  LET, 2, var_639_1_requests, var_631_1_io, TAIL_CALL,
  POS(1001, 9),
  POS(1006, 9),
  POS(1007, 9),
  POS(1008, 9),
  POS(1009, 9)
};

static TAB_NUM t_lambda_131[] = {
  0, // locals
  0, // parameters
  //  0 # poll
  LET, 1, num_0, TAIL_CALL,
  POS(1004, 15)
};

static TAB_NUM t_lambda_132[] = {
  0, // locals
  0, // parameters
  //  undefined # wait "forever"
  LET, 1, var_undefined, TAIL_CALL,
  POS(1005, 15)
};

static TAB_NUM t_func_check_events[] = {
  1, // locals
  1, // parameters
  var_1011_16_request,
  // request $task $mode $body $argument $continuation
  var_1011_16_request, 0, 5, var_1012_9_task, var_1012_15_mode, var_1012_21_body, var_1012_27_argument, var_1012_37_continuation,
  // mode == CHECK_IO:
  var_std__equal, 2, var_1012_15_mode, uni_CHECK_IO, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_133, lambda_134, TAIL_CALL,
  POS(1012, 5),
  POS(1014, 7),
  POS(1013, 5)
};

static TAB_NUM t_lambda_133[] = {
  1, // locals
  0, // parameters
  // body !mode &task events !body &argument
  var_1012_21_body, 3, var_1012_9_task, var_638_1_events, var_1012_27_argument, 4, var_1012_15_mode, var_1012_9_task, var_1012_21_body, var_1012_27_argument,
  // tuple(task mode body argument continuation)
  var_tuple, 5, var_1012_9_task, var_1012_15_mode, var_1012_21_body, var_1012_27_argument, var_1012_37_continuation, 1, LOCAL(1),
  // -> tuple(task mode body argument continuation)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1015, 9),
  POS(1016, 12),
  POS(1016, 9)
};

static TAB_NUM t_lambda_134[] = {
  0, // locals
  0, // parameters
  //  request
  LET, 1, var_1011_16_request, TAIL_CALL,
  POS(1017, 9)
};

static TAB_NUM t_func_exit_task[] = {
  4, // locals
  1, // parameters
  var_1021_13_task,
  // $parent_id parent_id_of(task)
  var_parent_id_of, 1, var_1021_13_task, 1, LOCAL(3),
  // removed_children(parent_id) empty_key_order_set)
  var_636_1_removed_children, 1, LOCAL(3), 1, LOCAL(1),
  // $removed default_value(removed_children(parent_id) empty_key_order_set)
  var_default_value, 2, LOCAL(1), var_empty_key_order_set, 1, LOCAL(4),
  // id_of(task)) true
  var_id_of, 1, var_1021_13_task, 1, LOCAL(2),
  // removed(id_of(task)) true
  LOCAL(4), 2, LOCAL(2), var_true, 1, LOCAL(4),
  // removed_children(parent_id) removed
  var_636_1_removed_children, 2, LOCAL(3), LOCAL(4), 1, var_636_1_removed_children,
  // exit_handlers_of(task)
  var_exit_handlers_of, 1, var_1021_13_task, 1, LOCAL(1),
  // for_each exit_handlers_of(task)
  var_for_each, 3, LOCAL(1), lambda_135, lambda_140, IO_TAIL_CALL,
  POS(1022, 5),
  POS(1023, 28),
  POS(1023, 5),
  POS(1024, 14),
  POS(1024, 6),
  POS(1025, 6),
  POS(1026, 14),
  POS(1026, 5)
};

static TAB_NUM t_lambda_135[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 1027_3_item
  // item $handler $handler_arguments
  LOCAL(3), 0, 2, var_1028_6_handler, var_1028_15_handler_arguments,
  // parameter_count_of(handler) == 3:
  var_parameter_count_of, 1, var_1028_6_handler, 1, LOCAL(1),
  // parameter_count_of(handler) == 3:
  var_std__equal, 2, LOCAL(1), num_3, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_136, lambda_138, IO_TAIL_CALL,
  POS(1028, 9),
  POS(1030, 11),
  POS(1030, 11),
  POS(1029, 9)
};

static TAB_NUM t_lambda_136[] = {
  2, // locals
  0, // parameters
  // handler! task &io $success handler_arguments
  var_1028_6_handler, 3, var_1021_13_task, var_631_1_io, var_1028_15_handler_arguments, IO_CALL(2), var_631_1_io, LOCAL(2),
  // is_an_error &exit_status -> EXIT_FAILURE
  var_is_an_error, 1, LOCAL(2), 1, LOCAL(1),
  // update_if success.is_an_error &exit_status -> EXIT_FAILURE
  var_update_if, 3, LOCAL(1), var_630_1_exit_status, lambda_137, 1, var_630_1_exit_status,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1031, 13),
  POS(1032, 31),
  POS(1032, 13),
  POS(1033, 13)
};

static TAB_NUM t_lambda_137[] = {
  0, // locals
  0, // parameters
  //  EXIT_FAILURE
  LET, 1, var_EXIT_FAILURE, TAIL_CALL,
  POS(1032, 58)
};

static TAB_NUM t_lambda_138[] = {
  2, // locals
  0, // parameters
  // handler! task &io $success
  var_1028_6_handler, 2, var_1021_13_task, var_631_1_io, IO_CALL(2), var_631_1_io, LOCAL(2),
  // is_an_error &exit_status -> EXIT_FAILURE
  var_is_an_error, 1, LOCAL(2), 1, LOCAL(1),
  // update_if success.is_an_error &exit_status -> EXIT_FAILURE
  var_update_if, 3, LOCAL(1), var_630_1_exit_status, lambda_139, 1, var_630_1_exit_status,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1035, 13),
  POS(1036, 31),
  POS(1036, 13),
  POS(1037, 13)
};

static TAB_NUM t_lambda_139[] = {
  0, // locals
  0, // parameters
  //  EXIT_FAILURE
  LET, 1, var_EXIT_FAILURE, TAIL_CALL,
  POS(1036, 58)
};

static TAB_NUM t_lambda_140[] = {
  0, // locals
  0, // parameters
  //  io exit_status removed_children
  LET, 3, var_631_1_io, var_630_1_exit_status, var_636_1_removed_children, TAIL_CALL,
  POS(1038, 9)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_UNIQUE, 0, {.str_8 = "COMPUTE"}},
  {FLT_UNIQUE, 0, {.str_8 = "WAIT"}},
  {FLT_UNIQUE, 0, {.str_8 = "START_IO"}},
  {FLT_UNIQUE, 0, {.str_8 = "CHECK_IO"}},
  {FLT_UNIQUE, 0, {.str_8 = "COMPLETE_IO"}},
  {FLT_UNIQUE, 0, {.str_8 = "EXIT"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__error___generate_error_message}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_STRING_8, 3, {.str_8 = " - "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_STRING_8, 2, {.str_8 = " ("}},
  {FLT_CHARACTER, 0, {.value = 41}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io_task___task_id_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io_task___parent_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io_task___children_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io_task___perform_io}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io_task___pause}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io_task___wait_for_message}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io_task___check_io}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io_task___performed_io}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io_task___recheck_io}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io_task___complete_io}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io_task___checked_io}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io_task___log}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io_task___send}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io_task___receive}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io_task___cancel}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_task_id_is_an_integer}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io_task___on_exit}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io_task___on_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io_task___on_cancel}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io_task___load}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_load_request}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_task_is_cancelled}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_STRING_8, 1, {.str_8 = "r"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_fd_is_an_error}},
  {FLT_STRING_8, 6, {.str_8 = "load \042"}},
  {FLT_STRING_8, 1, {.str_8 = "\042"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_load_request}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_task_is_cancelled}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_READ}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_READ_ERROR}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_complete_load_request}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_try_close_file}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io_task___save}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_save_request}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_task_is_cancelled}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_STRING_8, 1, {.str_8 = "w"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_fd_is_an_error}},
  {FLT_STRING_8, 6, {.str_8 = "save \042"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_save_request}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4_task_is_cancelled}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_WRITE_COMPLETED}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_WRITE_ERROR}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_complete_save_request}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_try_close_file}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io_task___read_from}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_start_read_request}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5_task_is_cancelled}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_read_request}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6_task_is_cancelled}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_complete_read_request}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io_task___write_to}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_write_request}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7_task_is_cancelled}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_write_request}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8_task_is_cancelled}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io_task___join_process}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_join_process_request}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_join_process_request_pending}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io_task___catch_signal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_catch_signal_request}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_catch_signal_request_pending}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9_task_is_cancelled}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_signals_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_cancel_catch_signal_request}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_catch_signal_request_completed}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io_task___fork}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io_task___exit}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__io_task_manager}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_STRING_8, 10, {.str_8 = " (parent: "}},
  {FLT_STRING_8, 2, {.str_8 = ")\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_STRING_8, 13, {.str_8 = "REMOVED TASK "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_COMPLETE_IO}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_EXIT}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_COMPUTE}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_argument_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_complete_io_operation}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_for_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_argument_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_error_handler_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_maybe_cancel_task}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10_task_is_cancelled}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_cancel_handler_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_88}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_compute}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_89}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_90}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_91}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_93}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_request}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_request_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_94}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_95}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collect_messages}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_96}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_receiver_is_an_integer}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_97}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_send_message}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_98}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collect_cancel_requests}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_99}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_100}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collect_log_messages}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_101}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_102}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_103}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_104}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_append_log_entry}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_105}},
  {FLT_STRING_8, 2, {.str_8 = ": "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_106}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_create_new_tasks}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_107}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_108}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_109}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_110}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_receive_messages}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_messages_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_111}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_112}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_maybe_mark_as_cancelled}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_cancellationsid_oftask}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_113}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_queue_log_message_write}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_114}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_115}},
  {FLT_STRING_8, 13, {.str_8 = "CREATED TASK "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_116}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_117}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_118}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_119}},
  {FLT_STRING_8, 4, {.str_8 = "---["}},
  {FLT_STRING_8, 29, {.str_8 = "]---------------------------\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_start_io_operation}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_120}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_121}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_122}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_123}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_124}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_125}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_has_something_to_do}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_126}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_maybe_exit}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_io_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_requests_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_127}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_128}},
  {FLT_STRING_8, 52, {.str_8 = "NO TASK IS READY AND NO I/O OPERATIONS ARE PENDING!\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_get_and_check_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_129}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_130}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_131}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_132}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_events}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_133}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_134}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_exit_task}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_135}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_136}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_137}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_138}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_139}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_140}}
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
  {var_read_from, -func_std_types__io_task___read_from},
  {var_write_to, -func_std_types__io_task___write_to},
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
    "assign\000std", NULL
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
    "log\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "send\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "cancel\000std", NULL,
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
    "error\000std_types", std_types__error__attributes
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "additional_error_information_of\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "generate_error_message\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "generate_error_message\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "219_1_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error_message_text_of\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "220_1_errno\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "errno_of\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "strerror\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "224_1_failed_attribute\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "failed_attribute_of\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "228_1_additional_information\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL
  },
  {
    FOT_DERIVED, 0, 37,
    "io_task\000std_types", std_types__io_task__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "object\000std_types", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "task_id_of\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "parent_of\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "250_1_id\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "children_of\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "perform_io\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "pause\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "wait_for_message\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "270_39_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "270_44_continuation\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "check_io\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "performed_io\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "recheck_io\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "complete_io\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "checked_io\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "log\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "297_1_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "send\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "306_27_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "306_32_receiver\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "306_41_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "receive\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "314_30_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "cancel\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "324_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "325_0_task_id\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_integer\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_list\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "on_exit\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "put\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "on_error\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "on_cancel\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "load\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "357_16_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "357_21_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "357_24_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "362_7_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "start_reading_from\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "372_22_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "372_27_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "372_34_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "373_10_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "373_14_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "stop_reading_from\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "close\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "try\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "383_13_efd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "383_18_data\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ_ERROR\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "405_10_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "411_10_fd\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "save\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "419_16_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "419_21_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "420_10_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "420_20_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "425_7_fd\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "write_to\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "435_22_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "435_27_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "435_34_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cancel_write_to\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "445_13_efd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "445_18_data\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_COMPLETED\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_ERROR\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "461_33_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "466_10_fd\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "read_from\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "481_22_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "481_27_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "481_30_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "490_22_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "490_27_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "490_34_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "491_10_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "491_14_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "491_22_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "500_13_efd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "500_18_data\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "524_17_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "524_22_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "525_10_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "525_14_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "533_23_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "533_28_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "533_35_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "542_13_efd\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "join_process\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "557_32_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "557_44_pid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "560_13_epid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "560_19_status\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PROCESS_JOINED\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "catch_signal\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "start_catching_signals\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "575_32_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "575_37_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "580_1_signals\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "583_21_signal\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGNAL\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "stop_catching_signals\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "fork\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "exit\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXIT_SUCCESS\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "io_task_manager\000std", NULL,
    {.const_idx = -func_std__io_task_manager}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "630_1_exit_status\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "631_1_io\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "io\000std_types", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "632_1_updated_requests\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "633_1_new_requests\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "634_1_cancellations\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_key_order_set\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "635_1_sent_messages\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_key_order_table\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "636_1_removed_children\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "637_1_log_message\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "638_1_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "639_1_requests\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "641_1_current_task_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "642_1_iteration_no\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "log_level\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "653_3_parent_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "691_1_do_receive_messages\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "692_1_do_cancel_tasks\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "693_16_request\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "724_3_request\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "725_9_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "725_15_mode\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "725_21_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "725_27_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "725_37_continuation\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXIT_FAILURE\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "760_1_error_handler\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "776_1_cancel_handler\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "803_11_request\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "804_9_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "804_15_mode\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "804_21_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "804_27_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "804_37_continuation\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "805_1_removed\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "filter\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "829_20_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "832_7_receiver\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "832_17_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "default_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "848_27_task\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "857_24_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "869_20_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "869_25_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "876_20_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "919_20_request\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "920_9_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "920_15_mode\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "920_21_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "920_27_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "920_37_continuation\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "921_1_messages\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "929_27_request\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "930_9_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "930_15_mode\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "930_21_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "930_27_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "930_37_continuation\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDERR_FILENO\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "958_22_request\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "959_9_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "959_15_mode\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "959_21_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "959_27_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "959_37_continuation\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "977_16_mode\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "980_14_something_to_do\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "996_24_something_to_do\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1011_16_request\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1012_9_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1012_15_mode\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1012_21_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1012_27_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1012_37_continuation\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1021_13_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1028_6_handler\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1028_15_handler_arguments\000", NULL
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__io_task_manager = {
  "_basic__io_task_manager", // module name
  "basic/io_task_manager.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  270, // number of constants
  274, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
