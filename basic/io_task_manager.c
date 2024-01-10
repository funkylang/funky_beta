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
  var_226_1_message, // dynamic
  var_error_message_text_of, // extern
  var_227_1_errno, // dynamic
  var_errno_of, // extern
  var_is_defined, // extern
  var_append, // extern
  var_strerror, // extern
  var_update_if, // extern
  var_231_1_failed_attribute, // dynamic
  var_failed_attribute_of, // extern
  var_235_1_additional_information, // dynamic
  var_push, // extern
  var_std_types__io_task, // derived
  var_std_types__object, // extern
  var_empty_list, // extern
  var_false, // extern
  var_task_id_of, // extern polymorphic
  var_parent_of, // extern polymorphic
  var_257_1_id, // dynamic
  var_std__equal, // extern
  var_std__not, // extern
  var_if, // extern
  var_children_of, // extern polymorphic
  var_perform_io, // extern polymorphic
  var_tuple, // extern
  var_pause, // extern polymorphic
  var_wait_for_message, // extern polymorphic
  var_277_39_self, // dynamic
  var_277_44_continuation, // dynamic
  var_is_empty, // extern
  var_check_io, // extern polymorphic
  var_performed_io, // extern polymorphic
  var_recheck_io, // extern polymorphic
  var_complete_io, // extern polymorphic
  var_checked_io, // extern polymorphic
  var_log, // extern polymorphic
  var_304_1_str, // dynamic
  var_create_string, // extern
  var_has_suffix, // extern
  var_send, // extern polymorphic
  var_313_27_self, // dynamic
  var_313_32_receiver, // dynamic
  var_313_41_message, // dynamic
  var_is_a_list, // extern
  var_std__and, // extern
  var_receive, // extern polymorphic
  var_321_30_self, // dynamic
  var_get, // extern
  var_cancel, // extern polymorphic
  var_331_0_self, // dynamic
  var_332_0_task_id, // dynamic
  var_is_an_integer, // extern
  var_to_list, // extern
  var_on_exit, // extern polymorphic
  var_put, // extern
  var_on_error, // extern polymorphic
  var_on_cancel, // extern polymorphic
  var_load, // extern polymorphic
  var_364_16_task, // dynamic
  var_364_21_io, // dynamic
  var_364_24_filename, // dynamic
  var_369_7_fd, // dynamic
  var_open, // extern
  var_is_an_error, // extern
  var_std__string, // extern
  var_start_reading_from, // extern
  var_379_22_task, // dynamic
  var_379_27_events, // dynamic
  var_379_34_argument, // dynamic
  var_380_10_fd, // dynamic
  var_380_14_buf, // dynamic
  var_stop_reading_from, // extern
  var_close, // extern
  var_try, // extern
  var_390_13_efd, // dynamic
  var_390_18_data, // dynamic
  var_READ, // extern
  var_next, // extern
  var_READ_ERROR, // extern
  var_case, // extern
  var_for_each, // extern
  var_412_10_fd, // dynamic
  var_418_10_fd, // dynamic
  var_save, // extern polymorphic
  var_426_16_task, // dynamic
  var_426_21_io, // dynamic
  var_427_10_filename, // dynamic
  var_427_20_data, // dynamic
  var_432_7_fd, // dynamic
  var_write, // extern polymorphic
  var_442_22_task, // dynamic
  var_442_27_events, // dynamic
  var_442_34_fd, // dynamic
  var_cancel_write, // extern
  var_452_13_efd, // dynamic
  var_452_18_data, // dynamic
  var_WRITE_COMPLETED, // extern
  var_WRITE_ERROR, // extern
  var_468_33_fd, // dynamic
  var_473_10_fd, // dynamic
  var_read, // extern polymorphic
  var_488_22_task, // dynamic
  var_488_27_io, // dynamic
  var_488_30_argument, // dynamic
  var_497_22_task, // dynamic
  var_497_27_events, // dynamic
  var_497_34_argument, // dynamic
  var_498_10_fd, // dynamic
  var_498_14_length, // dynamic
  var_498_22_buf, // dynamic
  var_507_13_efd, // dynamic
  var_507_18_data, // dynamic
  var_length_of, // extern
  var_std__less, // extern
  var_if_not, // extern
  var_531_17_task, // dynamic
  var_531_22_io, // dynamic
  var_532_10_fd, // dynamic
  var_532_14_text, // dynamic
  var_540_23_task, // dynamic
  var_540_28_events, // dynamic
  var_540_35_fd, // dynamic
  var_549_13_efd, // dynamic
  var_join_process, // extern polymorphic
  var_564_32_task, // dynamic
  var_564_44_pid, // dynamic
  var_567_13_epid, // dynamic
  var_567_19_status, // dynamic
  var_PROCESS_JOINED, // extern
  var_catch_signal, // extern polymorphic
  var_start_catching_signals, // extern
  var_582_32_task, // dynamic
  var_582_37_events, // dynamic
  var_587_1_signals, // dynamic
  var_590_21_signal, // dynamic
  var_SIGNAL, // extern
  var_stop_catching_signals, // extern
  var_fork, // extern polymorphic
  var_exit, // extern polymorphic
  var_EXIT_SUCCESS, // extern
  var_std__io_task_manager, // initialized
  var_637_1_exit_status, // dynamic
  var_638_1_io, // dynamic
  var_std_types__io, // extern
  var_639_1_updated_requests, // dynamic
  var_640_1_new_requests, // dynamic
  var_641_1_cancellations, // dynamic
  var_empty_key_order_set, // extern
  var_642_1_sent_messages, // dynamic
  var_empty_key_order_table, // extern
  var_643_1_removed_children, // dynamic
  var_644_1_log_message, // dynamic
  var_645_1_events, // dynamic
  var_646_1_requests, // dynamic
  var_list, // extern
  var_648_1_current_task_id, // dynamic
  var_649_1_iteration_no, // dynamic
  var_inc, // extern
  var_map, // extern
  var_log_level, // extern
  var_is_not_empty, // extern
  var_660_3_parent_id, // dynamic
  var_698_1_do_receive_messages, // dynamic
  var_not, // extern
  var_699_1_do_cancel_tasks, // dynamic
  var_700_16_request, // dynamic
  var_any_of, // extern
  var_std__or, // extern
  var_731_3_request, // dynamic
  var_732_9_task, // dynamic
  var_732_15_mode, // dynamic
  var_732_21_body, // dynamic
  var_732_27_argument, // dynamic
  var_732_37_continuation, // dynamic
  var_EXIT_FAILURE, // extern
  var_parameter_count_of, // extern
  var_767_1_error_handler, // dynamic
  var_783_1_cancel_handler, // dynamic
  var_loop, // extern
  var_810_11_request, // dynamic
  var_811_9_task, // dynamic
  var_811_15_mode, // dynamic
  var_811_21_body, // dynamic
  var_811_27_argument, // dynamic
  var_811_37_continuation, // dynamic
  var_812_1_removed, // dynamic
  var_filter, // extern
  var_836_20_task, // dynamic
  var_839_7_receiver, // dynamic
  var_839_17_message, // dynamic
  var_default_value, // extern
  var_855_27_task, // dynamic
  var_true, // extern
  var_864_24_task, // dynamic
  var_876_20_task, // dynamic
  var_876_25_message, // dynamic
  var_string, // extern
  var_883_20_task, // dynamic
  var_926_20_request, // dynamic
  var_927_9_task, // dynamic
  var_927_15_mode, // dynamic
  var_927_21_body, // dynamic
  var_927_27_argument, // dynamic
  var_927_37_continuation, // dynamic
  var_928_1_messages, // dynamic
  var_936_27_request, // dynamic
  var_937_9_task, // dynamic
  var_937_15_mode, // dynamic
  var_937_21_body, // dynamic
  var_937_27_argument, // dynamic
  var_937_37_continuation, // dynamic
  var_STDERR_FILENO, // extern
  var_to_utf8, // extern
  var_965_22_request, // dynamic
  var_966_9_task, // dynamic
  var_966_15_mode, // dynamic
  var_966_21_body, // dynamic
  var_966_27_argument, // dynamic
  var_966_37_continuation, // dynamic
  var_984_16_mode, // dynamic
  var_987_14_something_to_do, // dynamic
  var_pass, // extern
  var_1003_24_something_to_do, // dynamic
  var_get_events, // extern
  var_1018_16_request, // dynamic
  var_1019_9_task, // dynamic
  var_1019_15_mode, // dynamic
  var_1019_21_body, // dynamic
  var_1019_27_argument, // dynamic
  var_1019_37_continuation, // dynamic
  var_1028_13_task, // dynamic
  var_1035_6_handler, // dynamic
  var_1035_15_handler_arguments, // dynamic
  var__END
};


static TAB_NUM t_func_std_types__error___generate_error_message[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 225_43_self
  // $message error_message_text_of(self)
  var_error_message_text_of, 1, LOCAL(2), 1, var_226_1_message,
  // $errno errno_of(self)
  var_errno_of, 1, LOCAL(2), 1, var_227_1_errno,
  // is_defined &message:
  var_is_defined, 1, var_227_1_errno, 1, LOCAL(1),
  // update_if errno.is_defined &message:
  var_update_if, 3, LOCAL(1), var_226_1_message, lambda_1, 1, var_226_1_message,
  // $failed_attribute failed_attribute_of(self)
  var_failed_attribute_of, 1, LOCAL(2), 1, var_231_1_failed_attribute,
  // is_defined &message:
  var_is_defined, 1, var_231_1_failed_attribute, 1, LOCAL(1),
  // update_if failed_attribute.is_defined &message:
  var_update_if, 3, LOCAL(1), var_226_1_message, lambda_2, 1, var_226_1_message,
  // $additional_information additional_error_information_of(self)
  var_additional_error_information_of, 1, LOCAL(2), 1, var_235_1_additional_information,
  // is_defined message:
  var_is_defined, 1, var_235_1_additional_information, 1, LOCAL(1),
  // update_if additional_information.is_defined message:
  var_update_if, 3, LOCAL(1), var_226_1_message, lambda_3, TAIL_CALL,
  POS(226, 3),
  POS(227, 3),
  POS(228, 19),
  POS(228, 3),
  POS(231, 3),
  POS(232, 30),
  POS(232, 3),
  POS(235, 3),
  POS(236, 36),
  POS(236, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // append &message " - "
  var_append, 2, var_226_1_message, string_1, 1, var_226_1_message,
  // strerror(errno)
  var_strerror, 1, var_227_1_errno, 1, LOCAL(1),
  // append message strerror(errno)
  var_append, 2, var_226_1_message, LOCAL(1), TAIL_CALL,
  POS(229, 5),
  POS(230, 20),
  POS(230, 5)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // append &message " - "
  var_append, 2, var_226_1_message, string_1, 1, var_226_1_message,
  // append message failed_attribute
  var_append, 2, var_226_1_message, var_231_1_failed_attribute, TAIL_CALL,
  POS(233, 5),
  POS(234, 5)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  // append &message " ("
  var_append, 2, var_226_1_message, string_2, 1, var_226_1_message,
  // append &message additional_information
  var_append, 2, var_226_1_message, var_235_1_additional_information, 1, var_226_1_message,
  // push message ')'
  var_push, 2, var_226_1_message, chr_41, TAIL_CALL,
  POS(237, 5),
  POS(238, 5),
  POS(239, 5)
};

static TAB_NUM t_func_std_types__io_task___task_id_of[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 255_33_self
  // id_of(self)
  var_id_of, 1, LOCAL(2), 1, LOCAL(1),
  // -> id_of(self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(255, 43),
  POS(255, 40)
};

static TAB_NUM t_func_std_types__io_task___parent_of[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 256_32_self
  // $id parent_id_of(self)
  var_parent_id_of, 1, LOCAL(3), 1, var_257_1_id,
  // id != 0
  var_std__equal, 2, var_257_1_id, num_0, 1, LOCAL(1),
  // id != 0
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_4, lambda_5, TAIL_CALL,
  POS(257, 3),
  POS(259, 5),
  POS(259, 5),
  POS(258, 3)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  id
  LET, 1, var_257_1_id, TAIL_CALL,
  POS(260, 7)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(261, 7)
};

static TAB_NUM t_func_std_types__io_task___children_of[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 263_34_self
  // child_ids_of(self)
  var_child_ids_of, 1, LOCAL(2), 1, LOCAL(1),
  // -> child_ids_of(self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(263, 44),
  POS(263, 41)
};

static TAB_NUM t_func_std_types__io_task___perform_io[] = {
  4, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 267_0_self
  MANDATORY_PARAMETER, LOCAL(2), // 268_0_body
  var_undefined, LOCAL(3), // 269_0_argument
  MANDATORY_PARAMETER, LOCAL(4), // 270_0_continuation
  // tuple self START_IO body argument continuation
  var_tuple, 5, LOCAL(1), uni_START_IO, LOCAL(2), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(272, 3)
};

static TAB_NUM t_func_std_types__io_task___pause[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 274_28_self
  LOCAL(2), // 274_33_continuation
  // tuple self COMPUTE undefined undefined continuation
  var_tuple, 5, LOCAL(1), uni_COMPUTE, var_undefined, var_undefined, LOCAL(2), TAIL_CALL,
  POS(275, 3)
};

static TAB_NUM t_func_std_types__io_task___wait_for_message[] = {
  2, // locals
  2, // parameters
  var_277_39_self,
  var_277_44_continuation,
  // inbound_messages_of(self).is_empty
  var_inbound_messages_of, 1, var_277_39_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_6, lambda_7, TAIL_CALL,
  POS(279, 5),
  POS(279, 31),
  POS(278, 3)
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // tuple(self WAIT undefined undefined continuation)
  var_tuple, 5, var_277_39_self, uni_WAIT, var_undefined, var_undefined, var_277_44_continuation, 1, LOCAL(1),
  //  tuple(self WAIT undefined undefined continuation)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(280, 8),
  POS(280, 7)
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // tuple(self COMPUTE undefined undefined continuation)
  var_tuple, 5, var_277_39_self, uni_COMPUTE, var_undefined, var_undefined, var_277_44_continuation, 1, LOCAL(1),
  //  tuple(self COMPUTE undefined undefined continuation)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(281, 8),
  POS(281, 7)
};

static TAB_NUM t_func_std_types__io_task___check_io[] = {
  4, // locals
  4, // parameters
  LOCAL(1), // 283_31_self
  LOCAL(2), // 283_36_io
  LOCAL(3), // 283_39_body
  LOCAL(4), // 283_44_argument
  // -> CHECK_IO self io body argument
  LET, 5, uni_CHECK_IO, LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(284, 3)
};

static TAB_NUM t_func_std_types__io_task___performed_io[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 288_0_self
  MANDATORY_PARAMETER, LOCAL(2), // 289_0_io
  var_undefined, LOCAL(3), // 290_0_argument
  // -> COMPUTE self io undefined argument
  LET, 5, uni_COMPUTE, LOCAL(1), LOCAL(2), var_undefined, LOCAL(3), TAIL_CALL,
  POS(292, 3)
};

static TAB_NUM t_func_std_types__io_task___recheck_io[] = {
  3, // locals
  3, // parameters
  LOCAL(1), // 294_33_self
  LOCAL(2), // 294_38_body
  LOCAL(3), // 294_43_argument
  // -> CHECK_IO self body argument
  LET, 4, uni_CHECK_IO, LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(295, 3)
};

static TAB_NUM t_func_std_types__io_task___complete_io[] = {
  3, // locals
  3, // parameters
  LOCAL(1), // 297_34_self
  LOCAL(2), // 297_39_body
  LOCAL(3), // 297_44_argument
  // -> COMPLETE_IO self body argument
  LET, 4, uni_COMPLETE_IO, LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(298, 3)
};

static TAB_NUM t_func_std_types__io_task___checked_io[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 300_33_self
  LOCAL(2), // 300_38_argument
  // -> COMPUTE self undefined argument
  LET, 4, uni_COMPUTE, LOCAL(1), var_undefined, LOCAL(2), TAIL_CALL,
  POS(301, 3)
};

static TAB_NUM t_func_std_types__io_task___log[] = {
  3, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 303_26_self
  REST_PARAMETER, LOCAL(3), // 303_31_argument
  // $str create_string(argument)
  var_create_string, 1, LOCAL(3), 1, var_304_1_str,
  // str .has_suffix. '@nl;'
  var_has_suffix, 2, var_304_1_str, chr_10, 1, LOCAL(1),
  // !str
  var_if, 3, LOCAL(1), lambda_8, lambda_9, 1, var_304_1_str,
  // log_messages_of str
  var_log_messages_of, 1, LOCAL(2), 1, LOCAL(1),
  // push &self.log_messages_of str
  var_push, 2, LOCAL(1), var_304_1_str, 1, LOCAL(1),
  // self.log_messages_of str
  LET, -1, LOCAL(2), var_log_messages_of, LOCAL(1), LOCAL(2),
  // -> self
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(304, 3),
  POS(307, 7),
  POS(305, 3),
  POS(310, 14),
  POS(310, 3),
  POS(310, 9),
  POS(311, 3)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_304_1_str, TAIL_CALL,
  POS(308, 9)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // push(str '@nl;')
  var_push, 2, var_304_1_str, chr_10, 1, LOCAL(1),
  //  push(str '@nl;')
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(309, 10),
  POS(309, 9)
};

static TAB_NUM t_func_std_types__io_task___send[] = {
  2, // locals
  3, // parameters
  var_313_27_self,
  var_313_32_receiver,
  var_313_41_message,
  // is_a_list && receiver.is_empty
  var_is_a_list, 1, var_313_32_receiver, 1, LOCAL(1),
  // is_a_list && receiver.is_empty
  var_std__and, 2, LOCAL(1), lambda_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_11, lambda_12, TAIL_CALL,
  POS(315, 14),
  POS(315, 14),
  POS(314, 3)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_313_32_receiver, 1, LOCAL(1),
  // receiver.is_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(315, 36),
  POS(315, 27)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_313_27_self, TAIL_CALL,
  POS(316, 7)
};

static TAB_NUM t_lambda_12[] = {
  2, // locals
  0, // parameters
  // outbound_messages_of tuple(receiver message)
  var_outbound_messages_of, 1, var_313_27_self, 1, LOCAL(1),
  // tuple(receiver message)
  var_tuple, 2, var_313_32_receiver, var_313_41_message, 1, LOCAL(2),
  // push &self.outbound_messages_of tuple(receiver message)
  var_push, 2, LOCAL(1), LOCAL(2), 1, LOCAL(1),
  // self.outbound_messages_of tuple(receiver message)
  LET, -1, var_313_27_self, var_outbound_messages_of, LOCAL(1), var_313_27_self,
  // -> self
  LET, 1, var_313_27_self, TAIL_CALL,
  POS(318, 18),
  POS(318, 39),
  POS(318, 7),
  POS(318, 13),
  POS(319, 7)
};

static TAB_NUM t_func_std_types__io_task___receive[] = {
  2, // locals
  1, // parameters
  var_321_30_self,
  // inbound_messages_of(self).is_empty
  var_inbound_messages_of, 1, var_321_30_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_13, lambda_14, TAIL_CALL,
  POS(323, 5),
  POS(323, 31),
  POS(322, 3)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_321_30_self, var_undefined, TAIL_CALL,
  POS(324, 7)
};

static TAB_NUM t_lambda_14[] = {
  2, // locals
  0, // parameters
  // inbound_messages_of $message
  var_inbound_messages_of, 1, var_321_30_self, 1, LOCAL(1),
  // get &self.inbound_messages_of $message
  var_get, 1, LOCAL(1), 2, LOCAL(1), LOCAL(2),
  // self.inbound_messages_of $message
  LET, -1, var_321_30_self, var_inbound_messages_of, LOCAL(1), var_321_30_self,
  // -> self message
  LET, 2, var_321_30_self, LOCAL(2), TAIL_CALL,
  POS(326, 17),
  POS(326, 7),
  POS(326, 12),
  POS(327, 7)
};

static TAB_NUM t_func_std_types__io_task___cancel[] = {
  1, // locals
  2, // parameters
  var_331_0_self,
  var_332_0_task_id,
  // is_an_integer:
  var_is_an_integer, 1, var_332_0_task_id, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_task_id_is_an_integer, lambda_15, TAIL_CALL,
  POS(335, 13),
  POS(334, 3)
};

static TAB_NUM t_lambda_task_id_is_an_integer[] = {
  1, // locals
  0, // parameters
  // cancel_requests_of task_id
  var_cancel_requests_of, 1, var_331_0_self, 1, LOCAL(1),
  // push &self.cancel_requests_of task_id
  var_push, 2, LOCAL(1), var_332_0_task_id, 1, LOCAL(1),
  // self.cancel_requests_of task_id
  LET, -1, var_331_0_self, var_cancel_requests_of, LOCAL(1), var_331_0_self,
  // -> self
  LET, 1, var_331_0_self, TAIL_CALL,
  POS(336, 18),
  POS(336, 7),
  POS(336, 13),
  POS(337, 7)
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // cancel_requests_of task_id.to_list
  var_cancel_requests_of, 1, var_331_0_self, 1, LOCAL(1),
  // to_list
  var_to_list, 1, var_332_0_task_id, 1, LOCAL(2),
  // append &self.cancel_requests_of task_id.to_list
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(1),
  // self.cancel_requests_of task_id.to_list
  LET, -1, var_331_0_self, var_cancel_requests_of, LOCAL(1), var_331_0_self,
  // -> self
  LET, 1, var_331_0_self, TAIL_CALL,
  POS(339, 20),
  POS(339, 47),
  POS(339, 7),
  POS(339, 15),
  POS(340, 7)
};

static TAB_NUM t_func_std_types__io_task___on_exit[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 344_0_self
  MANDATORY_PARAMETER, LOCAL(4), // 345_0_handler
  var_undefined, LOCAL(5), // 346_0_argument
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
  POS(348, 13),
  POS(348, 30),
  POS(348, 3),
  POS(348, 8),
  POS(349, 3)
};

static TAB_NUM t_func_std_types__io_task___on_error[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 351_31_self
  LOCAL(2), // 351_36_handler
  // self.error_handler_of handler
  LET, -1, LOCAL(1), var_error_handler_of, LOCAL(2), LOCAL(1),
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(352, 4),
  POS(353, 3)
};

static TAB_NUM t_func_std_types__io_task___on_cancel[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 355_32_self
  LOCAL(2), // 355_37_handler
  // self.cancel_handler_of handler
  LET, -1, LOCAL(1), var_cancel_handler_of, LOCAL(2), LOCAL(1),
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(356, 4),
  POS(357, 3)
};

static TAB_NUM t_func_std_types__io_task___load[] = {
  3, // locals
  3, // parameters
  LOCAL(1), // 361_27_self
  LOCAL(2), // 361_32_my_filename
  LOCAL(3), // 361_44_continuation
  // perform_io self load_request my_filename continuation
  var_perform_io, 4, LOCAL(1), func_load_request, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(362, 3)
};

static TAB_NUM t_func_load_request[] = {
  1, // locals
  3, // parameters
  var_364_16_task,
  var_364_21_io,
  var_364_24_filename,
  // is_cancelled: # we must not start an I/O operation!
  var_is_cancelled, 1, var_364_16_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_task_is_cancelled, lambda_16, IO_TAIL_CALL,
  POS(366, 12),
  POS(365, 5)
};

static TAB_NUM t_lambda_task_is_cancelled[] = {
  0, // locals
  0, // parameters
  // performed_io task io "" # we didn't read a single byte ...
  var_performed_io, 3, var_364_16_task, var_364_21_io, string_3, TAIL_CALL,
  POS(367, 9)
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // open! $fd filename "r"
  var_open, 2, var_364_24_filename, str_r, IO_CALL(1), var_369_7_fd,
  // is_an_error:
  var_is_an_error, 1, var_369_7_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_fd_is_an_error, lambda_17, TAIL_CALL,
  POS(369, 9),
  POS(371, 14),
  POS(370, 9)
};

static TAB_NUM t_lambda_fd_is_an_error[] = {
  2, // locals
  0, // parameters
  // !fd.additional_error_information_of "
  var_std__string, 3, str_load, var_364_24_filename, string_4, 1, LOCAL(2),
  // fd.additional_error_information_of "
  LET, -1, var_369_7_fd, var_additional_error_information_of, LOCAL(2), var_369_7_fd,
  // performed_io task io fd
  var_performed_io, 3, var_364_16_task, var_364_21_io, var_369_7_fd, TAIL_CALL,
  POS(372, 13),
  POS(372, 14),
  POS(374, 13)
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // start_reading_from &io fd
  var_start_reading_from, 2, var_364_21_io, var_369_7_fd, 1, var_364_21_io,
  // tuple(fd "")
  var_tuple, 2, var_369_7_fd, string_3, 1, LOCAL(1),
  // check_io task io check_load_request tuple(fd "")
  var_check_io, 4, var_364_16_task, var_364_21_io, func_check_load_request, LOCAL(1), TAIL_CALL,
  POS(376, 13),
  POS(377, 49),
  POS(377, 13)
};

static TAB_NUM t_func_check_load_request[] = {
  1, // locals
  3, // parameters
  var_379_22_task,
  var_379_27_events,
  var_379_34_argument,
  // argument $fd $buf
  var_379_34_argument, 0, 2, var_380_10_fd, var_380_14_buf,
  // is_cancelled: # we are called as a start-I/O-handler!
  var_is_cancelled, 1, var_379_22_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_task_is_cancelled, lambda_19, IO_TAIL_CALL,
  POS(380, 5),
  POS(382, 12),
  POS(381, 5)
};

static TAB_NUM t_lambda_2_task_is_cancelled[] = {
  2, // locals
  0, // parameters
  // $io events
  LET, 1, var_379_27_events, 1, LOCAL(2),
  // stop_reading_from &io fd
  var_stop_reading_from, 2, LOCAL(2), var_380_10_fd, 1, LOCAL(2),
  // try $_ignore_error: close! fd
  var_try, 1, lambda_18, IO_CALL(1), LOCAL(1),
  // performed_io task io buf # return the partial read data
  var_performed_io, 3, var_379_22_task, LOCAL(2), var_380_14_buf, TAIL_CALL,
  POS(383, 9),
  POS(384, 9),
  POS(385, 9),
  POS(386, 9)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_380_10_fd, IO_TAIL_CALL,
  POS(385, 29)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  // for_each events
  var_for_each, 3, var_379_27_events, lambda_20, lambda_25, TAIL_CALL,
  POS(388, 9)
};

static TAB_NUM t_lambda_20[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 389_3_event
  // event $type $efd $data
  LOCAL(1), 0, 3, LOCAL(2), var_390_13_efd, var_390_18_data,
  // case type
  var_case, 6, LOCAL(2), var_READ, lambda_READ, var_READ_ERROR, lambda_READ_ERROR, var_next, TAIL_CALL,
  POS(390, 13),
  POS(391, 13)
};

static TAB_NUM t_lambda_READ[] = {
  1, // locals
  0, // parameters
  // efd == fd:
  var_std__equal, 2, var_390_13_efd, var_380_10_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21, var_next, TAIL_CALL,
  POS(394, 19),
  POS(393, 17)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // data == "":
  var_std__equal, 2, var_390_18_data, string_3, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_22, lambda_23, TAIL_CALL,
  POS(396, 23),
  POS(395, 21)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  // complete_io task complete_load_request argument
  var_complete_io, 3, var_379_22_task, func_complete_load_request, var_379_34_argument, TAIL_CALL,
  POS(397, 25)
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  0, // parameters
  // append(buf data))
  var_append, 2, var_380_14_buf, var_390_18_data, 1, LOCAL(1),
  // tuple(fd append(buf data))
  var_tuple, 2, var_380_10_fd, LOCAL(1), 1, LOCAL(2),
  // recheck_io
  var_recheck_io, 3, var_379_22_task, func_check_load_request, LOCAL(2), TAIL_CALL,
  POS(400, 60),
  POS(400, 51),
  POS(399, 25)
};

static TAB_NUM t_lambda_READ_ERROR[] = {
  1, // locals
  0, // parameters
  // efd == fd:
  var_std__equal, 2, var_390_13_efd, var_380_10_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_24, var_next, TAIL_CALL,
  POS(404, 19),
  POS(403, 17)
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  0, // parameters
  // tuple(fd data)
  var_tuple, 2, var_380_10_fd, var_390_18_data, 1, LOCAL(1),
  // complete_io task try_close_file tuple(fd data)
  var_complete_io, 3, var_379_22_task, func_try_close_file, LOCAL(1), TAIL_CALL,
  POS(405, 53),
  POS(405, 21)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  // recheck_io task check_load_request argument
  var_recheck_io, 3, var_379_22_task, func_check_load_request, var_379_34_argument, TAIL_CALL,
  POS(409, 13)
};

static TAB_NUM t_func_complete_load_request[] = {
  5, // locals
  3, // parameters
  LOCAL(2), // 411_25_task
  LOCAL(3), // 411_30_io
  LOCAL(4), // 411_33_argument
  // argument $fd $buf
  LOCAL(4), 0, 2, var_412_10_fd, LOCAL(5),
  // stop_reading_from &io fd
  var_stop_reading_from, 2, LOCAL(3), var_412_10_fd, 1, LOCAL(3),
  // try $_ignore_error: close! fd
  var_try, 1, lambda_26, IO_CALL(1), LOCAL(1),
  // performed_io task io buf
  var_performed_io, 3, LOCAL(2), LOCAL(3), LOCAL(5), TAIL_CALL,
  POS(412, 5),
  POS(413, 5),
  POS(414, 5),
  POS(415, 5)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_412_10_fd, IO_TAIL_CALL,
  POS(414, 25)
};

static TAB_NUM t_func_try_close_file[] = {
  5, // locals
  3, // parameters
  LOCAL(2), // 417_18_task
  LOCAL(3), // 417_23_io
  LOCAL(4), // 417_26_argument
  // argument $fd $read_error
  LOCAL(4), 0, 2, var_418_10_fd, LOCAL(5),
  // stop_reading_from &io fd
  var_stop_reading_from, 2, LOCAL(3), var_418_10_fd, 1, LOCAL(3),
  // try $_ignore_error: close! fd
  var_try, 1, lambda_27, IO_CALL(1), LOCAL(1),
  // performed_io task io read_error # return the error returned from <read>
  var_performed_io, 3, LOCAL(2), LOCAL(3), LOCAL(5), TAIL_CALL,
  POS(418, 5),
  POS(419, 5),
  POS(420, 5),
  POS(421, 5)
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_418_10_fd, IO_TAIL_CALL,
  POS(420, 25)
};

static TAB_NUM t_func_std_types__io_task___save[] = {
  5, // locals
  4, // parameters
  LOCAL(2), // 423_27_self
  LOCAL(3), // 423_32_my_filename
  LOCAL(4), // 423_44_my_data
  LOCAL(5), // 423_52_continuation
  // tuple(my_filename my_data) continuation
  var_tuple, 2, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // perform_io self save_request tuple(my_filename my_data) continuation
  var_perform_io, 4, LOCAL(2), func_save_request, LOCAL(1), LOCAL(5), TAIL_CALL,
  POS(424, 32),
  POS(424, 3)
};

static TAB_NUM t_func_save_request[] = {
  2, // locals
  3, // parameters
  var_426_16_task,
  var_426_21_io,
  LOCAL(2), // 426_24_argument
  // argument $filename $data
  LOCAL(2), 0, 2, var_427_10_filename, var_427_20_data,
  // is_cancelled: # we must not start an I/O operation!
  var_is_cancelled, 1, var_426_16_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3_task_is_cancelled, lambda_28, IO_TAIL_CALL,
  POS(427, 5),
  POS(429, 12),
  POS(428, 5)
};

static TAB_NUM t_lambda_3_task_is_cancelled[] = {
  0, // locals
  0, // parameters
  // performed_io task io data # we didn't write a single byte ...
  var_performed_io, 3, var_426_16_task, var_426_21_io, var_427_20_data, TAIL_CALL,
  POS(430, 9)
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // open! $fd filename "w"
  var_open, 2, var_427_10_filename, str_w, IO_CALL(1), var_432_7_fd,
  // is_an_error:
  var_is_an_error, 1, var_432_7_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_fd_is_an_error, lambda_29, TAIL_CALL,
  POS(432, 9),
  POS(434, 14),
  POS(433, 9)
};

static TAB_NUM t_lambda_2_fd_is_an_error[] = {
  2, // locals
  0, // parameters
  // !fd.additional_error_information_of "
  var_std__string, 3, str_save, var_427_10_filename, string_4, 1, LOCAL(2),
  // fd.additional_error_information_of "
  LET, -1, var_432_7_fd, var_additional_error_information_of, LOCAL(2), var_432_7_fd,
  // performed_io task io fd
  var_performed_io, 3, var_426_16_task, var_426_21_io, var_432_7_fd, TAIL_CALL,
  POS(435, 13),
  POS(435, 14),
  POS(437, 13)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  // write &io fd data
  var_write, 3, var_426_21_io, var_432_7_fd, var_427_20_data, 1, var_426_21_io,
  // check_io task io check_save_request fd
  var_check_io, 4, var_426_16_task, var_426_21_io, func_check_save_request, var_432_7_fd, TAIL_CALL,
  POS(439, 13),
  POS(440, 13)
};

static TAB_NUM t_func_check_save_request[] = {
  1, // locals
  3, // parameters
  var_442_22_task,
  var_442_27_events,
  var_442_34_fd,
  // is_cancelled: # we are called as a start-I/O-handler!
  var_is_cancelled, 1, var_442_22_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_4_task_is_cancelled, lambda_31, IO_TAIL_CALL,
  POS(444, 12),
  POS(443, 5)
};

static TAB_NUM t_lambda_4_task_is_cancelled[] = {
  3, // locals
  0, // parameters
  // $io events
  LET, 1, var_442_27_events, 1, LOCAL(2),
  // cancel_write &io $unwritten_text fd
  var_cancel_write, 2, LOCAL(2), var_442_34_fd, 2, LOCAL(2), LOCAL(3),
  // try $_ignore_error: close! fd
  var_try, 1, lambda_30, IO_CALL(1), LOCAL(1),
  // performed_io task io unwritten_text # return the not yet written text
  var_performed_io, 3, var_442_22_task, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(445, 9),
  POS(446, 9),
  POS(447, 9),
  POS(448, 9)
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_442_34_fd, IO_TAIL_CALL,
  POS(447, 29)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  // for_each events
  var_for_each, 3, var_442_27_events, lambda_32, lambda_35, TAIL_CALL,
  POS(450, 9)
};

static TAB_NUM t_lambda_32[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 451_3_event
  // event $type $efd $data
  LOCAL(1), 0, 3, LOCAL(2), var_452_13_efd, var_452_18_data,
  // case type
  var_case, 6, LOCAL(2), var_WRITE_COMPLETED, lambda_WRITE_COMPLETED, var_WRITE_ERROR, lambda_WRITE_ERROR, var_next, TAIL_CALL,
  POS(452, 13),
  POS(453, 13)
};

static TAB_NUM t_lambda_WRITE_COMPLETED[] = {
  1, // locals
  0, // parameters
  // efd == fd:
  var_std__equal, 2, var_452_13_efd, var_442_34_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_33, var_next, TAIL_CALL,
  POS(456, 19),
  POS(455, 17)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  // complete_io task complete_save_request fd
  var_complete_io, 3, var_442_22_task, func_complete_save_request, var_442_34_fd, TAIL_CALL,
  POS(457, 21)
};

static TAB_NUM t_lambda_WRITE_ERROR[] = {
  1, // locals
  0, // parameters
  // efd == fd:
  var_std__equal, 2, var_452_13_efd, var_442_34_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, var_next, TAIL_CALL,
  POS(461, 19),
  POS(460, 17)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // tuple(fd data)
  var_tuple, 2, var_442_34_fd, var_452_18_data, 1, LOCAL(1),
  // complete_io task try_close_file tuple(fd data)
  var_complete_io, 3, var_442_22_task, func_2_try_close_file, LOCAL(1), TAIL_CALL,
  POS(462, 53),
  POS(462, 21)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  // recheck_io task check_save_request fd
  var_recheck_io, 3, var_442_22_task, func_check_save_request, var_442_34_fd, TAIL_CALL,
  POS(466, 13)
};

static TAB_NUM t_func_complete_save_request[] = {
  3, // locals
  3, // parameters
  LOCAL(2), // 468_25_task
  LOCAL(3), // 468_30_io
  var_468_33_fd,
  // try $_ignore_error: close! fd
  var_try, 1, lambda_36, IO_CALL(1), LOCAL(1),
  // performed_io task io undefined
  var_performed_io, 3, LOCAL(2), LOCAL(3), var_undefined, TAIL_CALL,
  POS(469, 5),
  POS(470, 5)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_468_33_fd, IO_TAIL_CALL,
  POS(469, 25)
};

static TAB_NUM t_func_2_try_close_file[] = {
  5, // locals
  3, // parameters
  LOCAL(2), // 472_18_task
  LOCAL(3), // 472_23_io
  LOCAL(4), // 472_26_argument
  // argument $fd $write_error
  LOCAL(4), 0, 2, var_473_10_fd, LOCAL(5),
  // try $_ignore_error: close! fd
  var_try, 1, lambda_37, IO_CALL(1), LOCAL(1),
  // performed_io task io write_error # return the error returned from <write>
  var_performed_io, 3, LOCAL(2), LOCAL(3), LOCAL(5), TAIL_CALL,
  POS(473, 5),
  POS(474, 5),
  POS(475, 5)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_473_10_fd, IO_TAIL_CALL,
  POS(474, 25)
};

static TAB_NUM t_func_std_types__io_task___read[] = {
  5, // locals
  4, // parameters
  LOCAL(2), // 481_0_self
  LOCAL(3), // 482_0_my_fd
  LOCAL(4), // 483_0_my_length
  LOCAL(5), // 484_0_continuation
  // tuple(my_fd my_length) continuation
  var_tuple, 2, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // perform_io self start_read_request tuple(my_fd my_length) continuation
  var_perform_io, 4, LOCAL(2), func_start_read_request, LOCAL(1), LOCAL(5), TAIL_CALL,
  POS(486, 38),
  POS(486, 3)
};

static TAB_NUM t_func_start_read_request[] = {
  1, // locals
  3, // parameters
  var_488_22_task,
  var_488_27_io,
  var_488_30_argument,
  // is_cancelled: # we must not start an I/O operation!
  var_is_cancelled, 1, var_488_22_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_5_task_is_cancelled, lambda_38, TAIL_CALL,
  POS(490, 12),
  POS(489, 5)
};

static TAB_NUM t_lambda_5_task_is_cancelled[] = {
  0, // locals
  0, // parameters
  // performed_io task io "" # we didn't read a single byte ...
  var_performed_io, 3, var_488_22_task, var_488_27_io, string_3, TAIL_CALL,
  POS(491, 9)
};

static TAB_NUM t_lambda_38[] = {
  3, // locals
  0, // parameters
  // argument $fd $length
  var_488_30_argument, 0, 2, LOCAL(2), LOCAL(3),
  // start_reading_from &io fd
  var_start_reading_from, 2, var_488_27_io, LOCAL(2), 1, var_488_27_io,
  // tuple(fd length "")
  var_tuple, 3, LOCAL(2), LOCAL(3), string_3, 1, LOCAL(1),
  // check_io task io check_read_request tuple(fd length "")
  var_check_io, 4, var_488_22_task, var_488_27_io, func_check_read_request, LOCAL(1), TAIL_CALL,
  POS(493, 9),
  POS(494, 9),
  POS(495, 45),
  POS(495, 9)
};

static TAB_NUM t_func_check_read_request[] = {
  1, // locals
  3, // parameters
  var_497_22_task,
  var_497_27_events,
  var_497_34_argument,
  // argument $fd $length $buf
  var_497_34_argument, 0, 3, var_498_10_fd, var_498_14_length, var_498_22_buf,
  // is_cancelled: # we are called as a start-I/O-handler!
  var_is_cancelled, 1, var_497_22_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6_task_is_cancelled, lambda_39, TAIL_CALL,
  POS(498, 5),
  POS(500, 12),
  POS(499, 5)
};

static TAB_NUM t_lambda_6_task_is_cancelled[] = {
  1, // locals
  0, // parameters
  // $io events
  LET, 1, var_497_27_events, 1, LOCAL(1),
  // stop_reading_from &io fd
  var_stop_reading_from, 2, LOCAL(1), var_498_10_fd, 1, LOCAL(1),
  // performed_io task io buf # return the partial read data
  var_performed_io, 3, var_497_22_task, LOCAL(1), var_498_22_buf, TAIL_CALL,
  POS(501, 9),
  POS(502, 9),
  POS(503, 9)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  // for_each events
  var_for_each, 3, var_497_27_events, lambda_40, lambda_47, TAIL_CALL,
  POS(505, 9)
};

static TAB_NUM t_lambda_40[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 506_3_event
  // event $type $efd $data
  LOCAL(3), 0, 3, LOCAL(4), var_507_13_efd, var_507_18_data,
  // type == READ && efd == fd next:
  var_std__equal, 2, LOCAL(4), var_READ, 1, LOCAL(1),
  // type == READ && efd == fd next:
  var_std__and, 2, LOCAL(1), lambda_41, 1, LOCAL(2),
  // if_not
  var_if_not, 3, LOCAL(2), var_next, lambda_42, TAIL_CALL,
  POS(507, 13),
  POS(509, 15),
  POS(509, 15),
  POS(508, 13)
};

static TAB_NUM t_lambda_41[] = {
  1, // locals
  0, // parameters
  // efd == fd next:
  var_std__equal, 2, var_507_13_efd, var_498_10_fd, 1, LOCAL(1),
  // efd == fd next:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(509, 31),
  POS(509, 31)
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // data == "":
  var_std__equal, 2, var_507_18_data, string_3, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_43, lambda_44, TAIL_CALL,
  POS(511, 19),
  POS(510, 17)
};

static TAB_NUM t_lambda_43[] = {
  1, // locals
  0, // parameters
  // tuple(fd buf)
  var_tuple, 2, var_498_10_fd, var_498_22_buf, 1, LOCAL(1),
  // complete_io task complete_read_request tuple(fd buf)
  var_complete_io, 3, var_497_22_task, func_complete_read_request, LOCAL(1), TAIL_CALL,
  POS(512, 60),
  POS(512, 21)
};

static TAB_NUM t_lambda_44[] = {
  3, // locals
  0, // parameters
  // append &buf data
  var_append, 2, var_498_22_buf, var_507_18_data, 1, var_498_22_buf,
  // length_of(buf) >= length:
  var_length_of, 1, var_498_22_buf, 1, LOCAL(1),
  // length_of(buf) >= length:
  var_std__less, 2, LOCAL(1), var_498_14_length, 1, LOCAL(2),
  // length_of(buf) >= length:
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_45, lambda_46, TAIL_CALL,
  POS(514, 21),
  POS(516, 23),
  POS(516, 23),
  POS(516, 23),
  POS(515, 21)
};

static TAB_NUM t_lambda_45[] = {
  1, // locals
  0, // parameters
  // tuple(fd buf)
  var_tuple, 2, var_498_10_fd, var_498_22_buf, 1, LOCAL(1),
  // complete_io task complete_read_request tuple(fd buf)
  var_complete_io, 3, var_497_22_task, func_complete_read_request, LOCAL(1), TAIL_CALL,
  POS(517, 64),
  POS(517, 25)
};

static TAB_NUM t_lambda_46[] = {
  1, // locals
  0, // parameters
  // tuple(fd length buf)
  var_tuple, 3, var_498_10_fd, var_498_14_length, var_498_22_buf, 1, LOCAL(1),
  // recheck_io task check_read_request tuple(fd length buf)
  var_recheck_io, 3, var_497_22_task, func_check_read_request, LOCAL(1), TAIL_CALL,
  POS(519, 60),
  POS(519, 25)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  // recheck_io task check_read_request argument
  var_recheck_io, 3, var_497_22_task, func_check_read_request, var_497_34_argument, TAIL_CALL,
  POS(521, 13)
};

static TAB_NUM t_func_complete_read_request[] = {
  5, // locals
  3, // parameters
  LOCAL(1), // 523_25_task
  LOCAL(2), // 523_30_io
  LOCAL(3), // 523_33_argument
  // argument $fd $buf
  LOCAL(3), 0, 2, LOCAL(4), LOCAL(5),
  // stop_reading_from &io fd
  var_stop_reading_from, 2, LOCAL(2), LOCAL(4), 1, LOCAL(2),
  // performed_io task io buf
  var_performed_io, 3, LOCAL(1), LOCAL(2), LOCAL(5), TAIL_CALL,
  POS(524, 5),
  POS(525, 5),
  POS(526, 5)
};

static TAB_NUM t_func_std_types__io_task___write[] = {
  5, // locals
  4, // parameters
  LOCAL(2), // 528_28_self
  LOCAL(3), // 528_33_my_fd
  LOCAL(4), // 528_39_my_text
  LOCAL(5), // 528_47_continuation
  // tuple(my_fd my_text) continuation
  var_tuple, 2, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // perform_io self write_request tuple(my_fd my_text) continuation
  var_perform_io, 4, LOCAL(2), func_write_request, LOCAL(1), LOCAL(5), TAIL_CALL,
  POS(529, 33),
  POS(529, 3)
};

static TAB_NUM t_func_write_request[] = {
  2, // locals
  3, // parameters
  var_531_17_task,
  var_531_22_io,
  LOCAL(2), // 531_25_argument
  // argument $fd $text
  LOCAL(2), 0, 2, var_532_10_fd, var_532_14_text,
  // is_cancelled: # we must not start an I/O operation!
  var_is_cancelled, 1, var_531_17_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_7_task_is_cancelled, lambda_48, TAIL_CALL,
  POS(532, 5),
  POS(534, 12),
  POS(533, 5)
};

static TAB_NUM t_lambda_7_task_is_cancelled[] = {
  0, // locals
  0, // parameters
  // performed_io task io text # we didn't write a single byte ...
  var_performed_io, 3, var_531_17_task, var_531_22_io, var_532_14_text, TAIL_CALL,
  POS(535, 9)
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  // write &io fd text
  var_write, 3, var_531_22_io, var_532_10_fd, var_532_14_text, 1, var_531_22_io,
  // check_io task io check_write_request fd
  var_check_io, 4, var_531_17_task, var_531_22_io, func_check_write_request, var_532_10_fd, TAIL_CALL,
  POS(537, 9),
  POS(538, 9)
};

static TAB_NUM t_func_check_write_request[] = {
  1, // locals
  3, // parameters
  var_540_23_task,
  var_540_28_events,
  var_540_35_fd,
  // is_cancelled: # we are called as a start-I/O-handler!
  var_is_cancelled, 1, var_540_23_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8_task_is_cancelled, lambda_49, TAIL_CALL,
  POS(542, 12),
  POS(541, 5)
};

static TAB_NUM t_lambda_8_task_is_cancelled[] = {
  2, // locals
  0, // parameters
  // $io events
  LET, 1, var_540_28_events, 1, LOCAL(1),
  // cancel_write &io $unwritten_text fd
  var_cancel_write, 2, LOCAL(1), var_540_35_fd, 2, LOCAL(1), LOCAL(2),
  // performed_io task io unwritten_text # return the not yet written text
  var_performed_io, 3, var_540_23_task, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(543, 9),
  POS(544, 9),
  POS(545, 9)
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  // for_each events
  var_for_each, 3, var_540_28_events, lambda_50, lambda_53, TAIL_CALL,
  POS(547, 9)
};

static TAB_NUM t_lambda_50[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 548_3_event
  // event $type $efd $_data
  LOCAL(3), 0, 3, LOCAL(4), var_549_13_efd, LOCAL(1),
  // type == WRITE_COMPLETED && efd == fd:
  var_std__equal, 2, LOCAL(4), var_WRITE_COMPLETED, 1, LOCAL(1),
  // type == WRITE_COMPLETED && efd == fd:
  var_std__and, 2, LOCAL(1), lambda_51, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_52, var_next, TAIL_CALL,
  POS(549, 13),
  POS(551, 15),
  POS(551, 15),
  POS(550, 13)
};

static TAB_NUM t_lambda_51[] = {
  1, // locals
  0, // parameters
  // efd == fd:
  var_std__equal, 2, var_549_13_efd, var_540_35_fd, 1, LOCAL(1),
  // efd == fd:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(551, 42),
  POS(551, 42)
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  // checked_io task undefined
  var_checked_io, 2, var_540_23_task, var_undefined, TAIL_CALL,
  POS(552, 17)
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  // recheck_io task check_write_request fd
  var_recheck_io, 3, var_540_23_task, func_check_write_request, var_540_35_fd, TAIL_CALL,
  POS(555, 13)
};

static TAB_NUM t_func_std_types__io_task___join_process[] = {
  3, // locals
  3, // parameters
  LOCAL(1), // 557_35_self
  LOCAL(2), // 557_40_my_pid
  LOCAL(3), // 557_47_continuation
  // perform_io self join_process_request my_pid continuation
  var_perform_io, 4, LOCAL(1), func_join_process_request, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(558, 3)
};

static TAB_NUM t_func_join_process_request[] = {
  3, // locals
  3, // parameters
  LOCAL(1), // 560_24_task
  LOCAL(2), // 560_29_io
  LOCAL(3), // 560_32_pid
  // join_process &io pid
  var_join_process, 2, LOCAL(2), LOCAL(3), 1, LOCAL(2),
  // check_io task io join_process_request_pending pid
  var_check_io, 4, LOCAL(1), LOCAL(2), func_join_process_request_pending, LOCAL(3), TAIL_CALL,
  POS(561, 5),
  POS(562, 5)
};

static TAB_NUM t_func_join_process_request_pending[] = {
  1, // locals
  3, // parameters
  var_564_32_task,
  LOCAL(1), // 564_37_events
  var_564_44_pid,
  // for_each events
  var_for_each, 3, LOCAL(1), lambda_54, lambda_57, TAIL_CALL,
  POS(565, 5)
};

static TAB_NUM t_lambda_54[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 566_3_event
  // event $type $epid $status
  LOCAL(3), 0, 3, LOCAL(4), var_567_13_epid, var_567_19_status,
  // type == PROCESS_JOINED && epid == pid:
  var_std__equal, 2, LOCAL(4), var_PROCESS_JOINED, 1, LOCAL(1),
  // type == PROCESS_JOINED && epid == pid:
  var_std__and, 2, LOCAL(1), lambda_55, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_56, var_next, TAIL_CALL,
  POS(567, 9),
  POS(569, 11),
  POS(569, 11),
  POS(568, 9)
};

static TAB_NUM t_lambda_55[] = {
  1, // locals
  0, // parameters
  // epid == pid:
  var_std__equal, 2, var_567_13_epid, var_564_44_pid, 1, LOCAL(1),
  // epid == pid:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(569, 37),
  POS(569, 37)
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  // checked_io task status
  var_checked_io, 2, var_564_32_task, var_567_19_status, TAIL_CALL,
  POS(570, 13)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  // recheck_io task join_process_request_pending pid
  var_recheck_io, 3, var_564_32_task, func_join_process_request_pending, var_564_44_pid, TAIL_CALL,
  POS(573, 9)
};

static TAB_NUM t_func_std_types__io_task___catch_signal[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 575_35_self
  LOCAL(2), // 575_40_continuation
  // perform_io self catch_signal_request undefined continuation
  var_perform_io, 4, LOCAL(1), func_catch_signal_request, var_undefined, LOCAL(2), TAIL_CALL,
  POS(576, 3)
};

static TAB_NUM t_func_catch_signal_request[] = {
  3, // locals
  3, // parameters
  LOCAL(2), // 578_24_task
  LOCAL(3), // 578_29_io
  LOCAL(1),
  // start_catching_signals &io
  var_start_catching_signals, 1, LOCAL(3), 1, LOCAL(3),
  // check_io task io catch_signal_request_pending undefined
  var_check_io, 4, LOCAL(2), LOCAL(3), func_catch_signal_request_pending, var_undefined, TAIL_CALL,
  POS(579, 5),
  POS(580, 5)
};

static TAB_NUM t_func_catch_signal_request_pending[] = {
  1, // locals
  3, // parameters
  var_582_32_task,
  var_582_37_events,
  LOCAL(1),
  // is_cancelled:
  var_is_cancelled, 1, var_582_32_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_9_task_is_cancelled, lambda_58, TAIL_CALL,
  POS(584, 12),
  POS(583, 5)
};

static TAB_NUM t_lambda_9_task_is_cancelled[] = {
  0, // locals
  0, // parameters
  // complete_io task cancel_catch_signal_request undefined
  var_complete_io, 3, var_582_32_task, func_cancel_catch_signal_request, var_undefined, TAIL_CALL,
  POS(585, 9)
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  0, // parameters
  // $signals empty_list
  LET, 1, var_empty_list, 1, var_587_1_signals,
  // for_each events
  var_for_each, 3, var_582_37_events, lambda_59, lambda_61, TAIL_CALL,
  POS(587, 9),
  POS(588, 9)
};

static TAB_NUM t_lambda_59[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 589_3_event
  // event $type $_dummy $signal
  LOCAL(2), 0, 3, LOCAL(3), LOCAL(1), var_590_21_signal,
  // type == SIGNAL:
  var_std__equal, 2, LOCAL(3), var_SIGNAL, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_60, var_next, TAIL_CALL,
  POS(590, 13),
  POS(592, 15),
  POS(591, 13)
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  0, // parameters
  // push &signals signal
  var_push, 2, var_587_1_signals, var_590_21_signal, 1, var_587_1_signals,
  // next
  var_next, 0, TAIL_CALL,
  POS(593, 17),
  POS(594, 17)
};

static TAB_NUM t_lambda_61[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_587_1_signals, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_signals_is_empty, lambda_62, TAIL_CALL,
  POS(598, 23),
  POS(597, 13)
};

static TAB_NUM t_lambda_signals_is_empty[] = {
  0, // locals
  0, // parameters
  // recheck_io task catch_signal_request_pending undefined
  var_recheck_io, 3, var_582_32_task, func_catch_signal_request_pending, var_undefined, TAIL_CALL,
  POS(599, 17)
};

static TAB_NUM t_lambda_62[] = {
  0, // locals
  0, // parameters
  // complete_io task catch_signal_request_completed signals
  var_complete_io, 3, var_582_32_task, func_catch_signal_request_completed, var_587_1_signals, TAIL_CALL,
  POS(601, 17)
};

static TAB_NUM t_func_cancel_catch_signal_request[] = {
  3, // locals
  3, // parameters
  LOCAL(2), // 603_31_task
  LOCAL(3), // 603_36_io
  LOCAL(1),
  // stop_catching_signals &io
  var_stop_catching_signals, 1, LOCAL(3), 1, LOCAL(3),
  // performed_io task io
  var_performed_io, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(604, 5),
  POS(605, 5)
};

static TAB_NUM t_func_catch_signal_request_completed[] = {
  3, // locals
  3, // parameters
  LOCAL(1), // 607_34_task
  LOCAL(2), // 607_39_io
  LOCAL(3), // 607_42_signals
  // stop_catching_signals &io
  var_stop_catching_signals, 1, LOCAL(2), 1, LOCAL(2),
  // performed_io task io signals
  var_performed_io, 3, LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(608, 5),
  POS(609, 5)
};

static TAB_NUM t_func_std_types__io_task___fork[] = {
  6, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 613_0_self
  MANDATORY_PARAMETER, LOCAL(4), // 614_0_task
  MANDATORY_PARAMETER, LOCAL(5), // 615_0_continuation
  var_undefined, LOCAL(6), // 616_0_argument
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
  POS(618, 14),
  POS(618, 31),
  POS(618, 3),
  POS(618, 9),
  POS(619, 3)
};

static TAB_NUM t_func_std_types__io_task___exit[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 623_0_self
  var_EXIT_SUCCESS, LOCAL(2), // 624_0_status
  // tuple self EXIT undefined status undefined
  var_tuple, 5, LOCAL(1), uni_EXIT, var_undefined, LOCAL(2), var_undefined, TAIL_CALL,
  POS(626, 3)
};

static TAB_NUM t_func_std__io_task_manager[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 633_0_first_task
  MANDATORY_PARAMETER, LOCAL(4), // 634_0_start
  var_undefined, LOCAL(5), // 635_0_start_arguments
  // $exit_status EXIT_SUCCESS
  LET, 1, var_EXIT_SUCCESS, 1, var_637_1_exit_status,
  // $io std_types::io
  LET, 1, var_std_types__io, 1, var_638_1_io,
  // $updated_requests empty_list
  LET, 1, var_empty_list, 1, var_639_1_updated_requests,
  // $new_requests empty_list
  LET, 1, var_empty_list, 1, var_640_1_new_requests,
  // $cancellations empty_key_order_set
  LET, 1, var_empty_key_order_set, 1, var_641_1_cancellations,
  // $sent_messages empty_key_order_table
  LET, 1, var_empty_key_order_table, 1, var_642_1_sent_messages,
  // $removed_children empty_key_order_table
  LET, 1, var_empty_key_order_table, 1, var_643_1_removed_children,
  // $log_message ""
  LET, 1, string_3, 1, var_644_1_log_message,
  // $events empty_list
  LET, 1, var_empty_list, 1, var_645_1_events,
  // .id_of 1) COMPUTE undefined start_arguments start))
  LET, -1, LOCAL(3), var_id_of, num_1, LOCAL(1),
  // tuple(first_task(.id_of 1) COMPUTE undefined start_arguments start))
  var_tuple, 5, LOCAL(1), uni_COMPUTE, var_undefined, LOCAL(5), LOCAL(4), 1, LOCAL(2),
  // $requests
  var_list, 1, LOCAL(2), 1, var_646_1_requests,
  // $current_task_id 1
  LET, 1, num_1, 1, var_648_1_current_task_id,
  // $iteration_no 0
  LET, 1, num_0, 1, var_649_1_iteration_no,
  // loop:
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(637, 3),
  POS(638, 3),
  POS(639, 3),
  POS(640, 3),
  POS(641, 3),
  POS(642, 3),
  POS(643, 3),
  POS(644, 3),
  POS(645, 3),
  POS(647, 27),
  POS(647, 10),
  POS(646, 3),
  POS(648, 3),
  POS(649, 3),
  POS(653, 3)
};

static TAB_NUM t_lambda_loop[] = {
  4, // locals
  0, // parameters
  // inc &iteration_no
  var_inc, 1, var_649_1_iteration_no, 1, var_649_1_iteration_no,
  // map &requests compute
  var_map, 2, var_646_1_requests, func_compute, 1, var_646_1_requests,
  // log_level >= 4 && removed_children.is_not_empty &log_message:
  var_std__less, 2, var_log_level, num_4, 1, LOCAL(1),
  // log_level >= 4 && removed_children.is_not_empty &log_message:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // log_level >= 4 && removed_children.is_not_empty &log_message:
  var_std__and, 2, LOCAL(2), lambda_63, 1, LOCAL(3),
  // update_if log_level >= 4 && removed_children.is_not_empty &log_message:
  var_update_if, 3, LOCAL(3), var_644_1_log_message, lambda_64, 1, var_644_1_log_message,
  // !removed_children empty_key_order_table
  LET, 1, var_empty_key_order_table, 1, var_643_1_removed_children,
  // for_each &requests
  var_for_each, 3, var_646_1_requests, lambda_70, lambda_71, 6, var_646_1_requests, var_648_1_current_task_id, var_640_1_new_requests, var_642_1_sent_messages, var_641_1_cancellations, var_644_1_log_message,
  // is_empty)
  var_is_empty, 1, var_642_1_sent_messages, 1, LOCAL(1),
  // $do_receive_messages not(sent_messages.is_empty)
  var_not, 1, LOCAL(1), 1, var_698_1_do_receive_messages,
  // is_empty)
  var_is_empty, 1, var_641_1_cancellations, 1, LOCAL(1),
  // $do_cancel_tasks not(cancellations.is_empty)
  var_not, 1, LOCAL(1), 1, var_699_1_do_cancel_tasks,
  // map &requests: (request)
  var_map, 2, var_646_1_requests, lambda_72, 1, var_646_1_requests,
  // !sent_messages empty_key_order_table
  LET, 1, var_empty_key_order_table, 1, var_642_1_sent_messages,
  // !cancellations empty_key_order_set
  LET, 1, var_empty_key_order_set, 1, var_641_1_cancellations,
  // queue_log_message_write !io
  func_queue_log_message_write, 0, 1, var_638_1_io,
  // !log_message ""
  LET, 1, string_3, 1, var_644_1_log_message,
  // for_each &requests !io
  var_for_each, 3, var_646_1_requests, lambda_75, lambda_76, IO_CALL(2), var_646_1_requests, var_638_1_io,
  // !updated_requests empty_list
  LET, 1, var_empty_list, 1, var_639_1_updated_requests,
  // is_not_empty
  var_is_not_empty, 1, var_640_1_new_requests, 1, LOCAL(1),
  // $something_to_do
  var_std__or, 2, LOCAL(1), lambda_77, 1, LOCAL(4),
  // maybe_exit! something_to_do
  func_maybe_exit, 1, LOCAL(4), IO_CALL(0),
  // get_and_check_events! !requests !io something_to_do
  func_get_and_check_events, 1, LOCAL(4), IO_CALL(2), var_646_1_requests, var_638_1_io,
  // for_each &requests !io !removed_children !log_message !exit_status
  var_for_each, 3, var_646_1_requests, lambda_78, lambda_88, IO_CALL(5), var_646_1_requests, var_638_1_io, var_643_1_removed_children, var_644_1_log_message, var_637_1_exit_status,
  // append &requests new_requests
  var_append, 2, var_646_1_requests, var_640_1_new_requests, 1, var_646_1_requests,
  // !new_requests empty_list
  LET, 1, var_empty_list, 1, var_640_1_new_requests,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(656, 5),
  POS(657, 5),
  POS(658, 15),
  POS(658, 15),
  POS(658, 15),
  POS(658, 5),
  POS(670, 5),
  POS(674, 5),
  POS(698, 44),
  POS(698, 5),
  POS(699, 40),
  POS(699, 5),
  POS(700, 5),
  POS(704, 5),
  POS(705, 5),
  POS(709, 5),
  POS(710, 5),
  POS(711, 5),
  POS(717, 5),
  POS(723, 22),
  POS(721, 5),
  POS(725, 5),
  POS(726, 5),
  POS(730, 5),
  POS(799, 5),
  POS(800, 5),
  POS(804, 5)
};

static TAB_NUM t_lambda_63[] = {
  1, // locals
  0, // parameters
  // is_not_empty &log_message:
  var_is_not_empty, 1, var_643_1_removed_children, 1, LOCAL(1),
  // removed_children.is_not_empty &log_message:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(658, 50),
  POS(658, 33)
};

static TAB_NUM t_lambda_64[] = {
  0, // locals
  0, // parameters
  // for_each removed_children
  var_for_each, 3, var_643_1_removed_children, lambda_65, lambda_69, TAIL_CALL,
  POS(659, 7)
};

static TAB_NUM t_lambda_65[] = {
  1, // locals
  2, // parameters
  var_660_3_parent_id,
  LOCAL(1), // 660_13_children
  // for_each children: (child_id)
  var_for_each, 2, LOCAL(1), lambda_66, TAIL_CALL,
  POS(661, 11)
};

static TAB_NUM t_lambda_66[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 661_20_child_id
  // parent_id != 0
  var_std__equal, 2, var_660_3_parent_id, num_0, 1, LOCAL(1),
  // parent_id != 0
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // $parent
  var_if, 3, LOCAL(2), lambda_67, lambda_68, 1, LOCAL(4),
  // "REMOVED TASK @(child_id)@(parent)"
  var_std__string, 3, str_REMOVED_TASK, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // append &log_message "REMOVED TASK @(child_id)@(parent)"
  var_append, 2, var_644_1_log_message, LOCAL(1), 1, var_644_1_log_message,
  // next
  var_next, 0, TAIL_CALL,
  POS(664, 17),
  POS(664, 17),
  POS(662, 13),
  POS(667, 33),
  POS(667, 13),
  POS(668, 13)
};

static TAB_NUM t_lambda_67[] = {
  1, // locals
  0, // parameters
  // " (parent: @(parent_id))@nl;"
  var_std__string, 3, str__parent, var_660_3_parent_id, string_5, 1, LOCAL(1),
  //  " (parent: @(parent_id))@nl;"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(665, 20),
  POS(665, 19)
};

static TAB_NUM t_lambda_68[] = {
  0, // locals
  0, // parameters
  //  "@nl;"
  LET, 1, string_6, TAIL_CALL,
  POS(666, 19)
};

static TAB_NUM t_lambda_69[] = {
  0, // locals
  0, // parameters
  //  log_message
  LET, 1, var_644_1_log_message, TAIL_CALL,
  POS(669, 11)
};

static TAB_NUM t_lambda_70[] = {
  7, // locals
  1, // parameters
  LOCAL(2), // 680_3_request
  // request $task $mode $body $argument $continuation
  LOCAL(2), 0, 5, LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), LOCAL(7),
  // collect_messages &task !sent_messages
  func_collect_messages, 1, LOCAL(3), 2, LOCAL(3), var_642_1_sent_messages,
  // collect_cancel_requests &task !cancellations
  func_collect_cancel_requests, 1, LOCAL(3), 2, LOCAL(3), var_641_1_cancellations,
  // collect_log_messages &task !log_message
  func_collect_log_messages, 1, LOCAL(3), 2, LOCAL(3), var_644_1_log_message,
  // create_new_tasks &task !current_task_id !new_requests
  func_create_new_tasks, 1, LOCAL(3), 3, LOCAL(3), var_648_1_current_task_id, var_640_1_new_requests,
  // tuple(task mode body argument continuation)
  var_tuple, 5, LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), LOCAL(7), 1, LOCAL(1),
  // push &updated_requests tuple(task mode body argument continuation)
  var_push, 2, var_639_1_updated_requests, LOCAL(1), 1, var_639_1_updated_requests,
  // next
  var_next, 0, TAIL_CALL,
  POS(681, 9),
  POS(682, 9),
  POS(683, 9),
  POS(684, 9),
  POS(685, 9),
  POS(686, 32),
  POS(686, 9),
  POS(687, 9)
};

static TAB_NUM t_lambda_71[] = {
  0, // locals
  0, // parameters
  // 
  LET, 6, var_639_1_updated_requests, var_648_1_current_task_id, var_640_1_new_requests, var_642_1_sent_messages, var_641_1_cancellations, var_644_1_log_message, TAIL_CALL,
  POS(688, 9)
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  1, // parameters
  var_700_16_request,
  // update_if do_receive_messages &request -> receive_messages(request)
  var_update_if, 3, var_698_1_do_receive_messages, var_700_16_request, lambda_73, 1, var_700_16_request,
  // update_if do_cancel_tasks &request -> maybe_mark_as_cancelled(request)
  var_update_if, 3, var_699_1_do_cancel_tasks, var_700_16_request, lambda_74, 1, var_700_16_request,
  // -> request
  LET, 1, var_700_16_request, TAIL_CALL,
  POS(701, 7),
  POS(702, 7),
  POS(703, 7)
};

static TAB_NUM t_lambda_73[] = {
  1, // locals
  0, // parameters
  // receive_messages(request)
  func_receive_messages, 1, var_700_16_request, 1, LOCAL(1),
  //  receive_messages(request)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(701, 49),
  POS(701, 48)
};

static TAB_NUM t_lambda_74[] = {
  1, // locals
  0, // parameters
  // maybe_mark_as_cancelled(request)
  func_maybe_mark_as_cancelled, 1, var_700_16_request, 1, LOCAL(1),
  //  maybe_mark_as_cancelled(request)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(702, 45),
  POS(702, 44)
};

static TAB_NUM t_lambda_75[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 712_3_request
  // start_io_operation! &request !io
  func_start_io_operation, 1, LOCAL(1), IO_CALL(2), LOCAL(1), var_638_1_io,
  // push &updated_requests request
  var_push, 2, var_639_1_updated_requests, LOCAL(1), 1, var_639_1_updated_requests,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(713, 9),
  POS(714, 9),
  POS(715, 9)
};

static TAB_NUM t_lambda_76[] = {
  0, // locals
  0, // parameters
  //  updated_requests io
  LET, 2, var_639_1_updated_requests, var_638_1_io, TAIL_CALL,
  POS(716, 9)
};

static TAB_NUM t_lambda_77[] = {
  1, // locals
  0, // parameters
  // any_of(requests has_something_to_do)
  var_any_of, 2, var_646_1_requests, func_has_something_to_do, 1, LOCAL(1),
  // any_of(requests has_something_to_do)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(724, 9),
  POS(724, 9)
};

static TAB_NUM t_lambda_78[] = {
  0, // locals
  1, // parameters
  var_731_3_request,
  // request $task $mode $body $argument $continuation
  var_731_3_request, 0, 5, var_732_9_task, var_732_15_mode, var_732_21_body, var_732_27_argument, var_732_37_continuation,
  // case mode
  var_case, 8, var_732_15_mode, uni_COMPLETE_IO, lambda_COMPLETE_IO, uni_EXIT, lambda_EXIT, uni_COMPUTE, lambda_COMPUTE, lambda_81, IO_TAIL_CALL,
  POS(732, 9),
  POS(733, 9)
};

static TAB_NUM t_lambda_COMPLETE_IO[] = {
  0, // locals
  0, // parameters
  // complete_io_operation!
  func_complete_io_operation, 0, IO_TAIL_CALL,
  POS(735, 13)
};

static TAB_NUM t_lambda_EXIT[] = {
  1, // locals
  0, // parameters
  // argument == EXIT_FAILURE &exit_status -> EXIT_FAILURE
  var_std__equal, 2, var_732_27_argument, var_EXIT_FAILURE, 1, LOCAL(1),
  // update_if argument == EXIT_FAILURE &exit_status -> EXIT_FAILURE
  var_update_if, 3, LOCAL(1), var_637_1_exit_status, lambda_79, 1, var_637_1_exit_status,
  // exit_task! task !io !exit_status !removed_children
  func_exit_task, 1, var_732_9_task, IO_CALL(3), var_638_1_io, var_637_1_exit_status, var_643_1_removed_children,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(737, 23),
  POS(737, 13),
  POS(738, 13),
  POS(739, 13)
};

static TAB_NUM t_lambda_79[] = {
  0, // locals
  0, // parameters
  //  EXIT_FAILURE
  LET, 1, var_EXIT_FAILURE, TAIL_CALL,
  POS(737, 63)
};

static TAB_NUM t_lambda_COMPUTE[] = {
  1, // locals
  0, // parameters
  // is_an_error:
  var_is_an_error, 1, var_732_27_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_argument_is_an_error, lambda_80, IO_TAIL_CALL,
  POS(742, 24),
  POS(741, 13)
};

static TAB_NUM t_lambda_argument_is_an_error[] = {
  0, // locals
  0, // parameters
  // handle_error!
  func_handle_error, 0, IO_TAIL_CALL,
  POS(743, 17)
};

static TAB_NUM t_lambda_80[] = {
  0, // locals
  0, // parameters
  // maybe_cancel_task!
  func_maybe_cancel_task, 0, IO_TAIL_CALL,
  POS(745, 17)
};

static TAB_NUM t_lambda_81[] = {
  0, // locals
  0, // parameters
  // maybe_cancel_task!
  func_maybe_cancel_task, 0, IO_TAIL_CALL,
  POS(747, 13)
};

static TAB_NUM t_func_complete_io_operation[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(body) == 3:
  var_parameter_count_of, 1, var_732_21_body, 1, LOCAL(1),
  // parameter_count_of(body) == 3:
  var_std__equal, 2, LOCAL(1), num_3, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_82, lambda_83, IO_TAIL_CALL,
  POS(751, 13),
  POS(751, 13),
  POS(750, 11)
};

static TAB_NUM t_lambda_82[] = {
  0, // locals
  0, // parameters
  // body! !mode &task &io !body &argument
  var_732_21_body, 3, var_732_9_task, var_638_1_io, var_732_27_argument, IO_CALL(5), var_732_15_mode, var_732_9_task, var_638_1_io, var_732_21_body, var_732_27_argument,
  // check_for_error!
  func_check_for_error, 0, IO_TAIL_CALL,
  POS(752, 15),
  POS(753, 15)
};

static TAB_NUM t_lambda_83[] = {
  0, // locals
  0, // parameters
  // body! !mode &task &io !body !argument
  var_732_21_body, 2, var_732_9_task, var_638_1_io, IO_CALL(5), var_732_15_mode, var_732_9_task, var_638_1_io, var_732_21_body, var_732_27_argument,
  // check_for_error!
  func_check_for_error, 0, IO_TAIL_CALL,
  POS(755, 15),
  POS(756, 15)
};

static TAB_NUM t_func_check_for_error[] = {
  1, // locals
  0, // parameters
  // is_an_error:
  var_is_an_error, 1, var_732_27_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_argument_is_an_error, lambda_84, IO_TAIL_CALL,
  POS(760, 22),
  POS(759, 11)
};

static TAB_NUM t_lambda_2_argument_is_an_error[] = {
  0, // locals
  0, // parameters
  // handle_error!
  func_handle_error, 0, IO_TAIL_CALL,
  POS(761, 15)
};

static TAB_NUM t_lambda_84[] = {
  1, // locals
  0, // parameters
  // tuple(task mode body argument continuation)
  var_tuple, 5, var_732_9_task, var_732_15_mode, var_732_21_body, var_732_27_argument, var_732_37_continuation, 1, LOCAL(1),
  // push &updated_requests tuple(task mode body argument continuation)
  var_push, 2, var_639_1_updated_requests, LOCAL(1), 1, var_639_1_updated_requests,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(763, 38),
  POS(763, 15),
  POS(764, 15)
};

static TAB_NUM t_func_handle_error[] = {
  1, // locals
  0, // parameters
  // $error_handler error_handler_of(task)
  var_error_handler_of, 1, var_732_9_task, 1, var_767_1_error_handler,
  // is_defined:
  var_is_defined, 1, var_767_1_error_handler, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_error_handler_is_defined, lambda_85, IO_TAIL_CALL,
  POS(767, 11),
  POS(769, 27),
  POS(768, 11)
};

static TAB_NUM t_lambda_error_handler_is_defined[] = {
  1, // locals
  0, // parameters
  // tuple(task COMPUTE undefined argument error_handler)
  var_tuple, 5, var_732_9_task, uni_COMPUTE, var_undefined, var_732_27_argument, var_767_1_error_handler, 1, LOCAL(1),
  // push &updated_requests
  var_push, 2, var_639_1_updated_requests, LOCAL(1), 1, var_639_1_updated_requests,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(771, 17),
  POS(770, 15),
  POS(772, 15)
};

static TAB_NUM t_lambda_85[] = {
  2, // locals
  0, // parameters
  // !exit_status EXIT_FAILURE
  LET, 1, var_EXIT_FAILURE, 1, var_637_1_exit_status,
  // $message generate_error_message(argument)
  var_generate_error_message, 1, var_732_27_argument, 1, LOCAL(2),
  // push(message '@nl;')
  var_push, 2, LOCAL(2), chr_10, 1, LOCAL(1),
  // append_log_entry !log_message task push(message '@nl;')
  func_append_log_entry, 2, var_732_9_task, LOCAL(1), 1, var_644_1_log_message,
  // exit_task! task !io !exit_status !removed_children
  func_exit_task, 1, var_732_9_task, IO_CALL(3), var_638_1_io, var_637_1_exit_status, var_643_1_removed_children,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(774, 15),
  POS(775, 15),
  POS(776, 50),
  POS(776, 15),
  POS(777, 15),
  POS(778, 15)
};

static TAB_NUM t_func_maybe_cancel_task[] = {
  1, // locals
  0, // parameters
  // is_cancelled:
  var_is_cancelled, 1, var_732_9_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10_task_is_cancelled, lambda_87, IO_TAIL_CALL,
  POS(782, 18),
  POS(781, 11)
};

static TAB_NUM t_lambda_10_task_is_cancelled[] = {
  1, // locals
  0, // parameters
  // $cancel_handler cancel_handler_of(task)
  var_cancel_handler_of, 1, var_732_9_task, 1, var_783_1_cancel_handler,
  // is_defined:
  var_is_defined, 1, var_783_1_cancel_handler, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_cancel_handler_is_defined, lambda_86, IO_TAIL_CALL,
  POS(783, 15),
  POS(785, 32),
  POS(784, 15)
};

static TAB_NUM t_lambda_cancel_handler_is_defined[] = {
  1, // locals
  0, // parameters
  // request !task !mode !body !argument !continuation
  var_731_3_request, 0, 5, var_732_9_task, var_732_15_mode, var_732_21_body, var_732_27_argument, var_732_37_continuation,
  // task.is_cancelled false
  LET, -1, var_732_9_task, var_is_cancelled, var_false, var_732_9_task,
  // tuple(task COMPUTE undefined argument cancel_handler)
  var_tuple, 5, var_732_9_task, uni_COMPUTE, var_undefined, var_732_27_argument, var_783_1_cancel_handler, 1, LOCAL(1),
  // push &updated_requests
  var_push, 2, var_639_1_updated_requests, LOCAL(1), 1, var_639_1_updated_requests,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(786, 19),
  POS(787, 20),
  POS(789, 21),
  POS(788, 19),
  POS(790, 19)
};

static TAB_NUM t_lambda_86[] = {
  0, // locals
  0, // parameters
  // exit_task! task !io !exit_status !removed_children
  func_exit_task, 1, var_732_9_task, IO_CALL(3), var_638_1_io, var_637_1_exit_status, var_643_1_removed_children,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(792, 19),
  POS(793, 19)
};

static TAB_NUM t_lambda_87[] = {
  0, // locals
  0, // parameters
  // push &updated_requests request
  var_push, 2, var_639_1_updated_requests, var_731_3_request, 1, var_639_1_updated_requests,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(795, 15),
  POS(796, 15)
};

static TAB_NUM t_lambda_88[] = {
  0, // locals
  0, // parameters
  //  updated_requests io removed_children log_message exit_status
  LET, 5, var_639_1_updated_requests, var_638_1_io, var_643_1_removed_children, var_644_1_log_message, var_637_1_exit_status, TAIL_CALL,
  POS(798, 9)
};

static TAB_NUM t_func_compute[] = {
  1, // locals
  1, // parameters
  var_810_11_request,
  // request $task $mode $body $argument $continuation
  var_810_11_request, 0, 5, var_811_9_task, var_811_15_mode, var_811_21_body, var_811_27_argument, var_811_37_continuation,
  // id_of(task))
  var_id_of, 1, var_811_9_task, 1, LOCAL(1),
  // $removed removed_children(id_of(task))
  var_643_1_removed_children, 1, LOCAL(1), 1, var_812_1_removed,
  // is_defined &request &task:
  var_is_defined, 1, var_812_1_removed, 1, LOCAL(1),
  // update_if removed.is_defined &request &task:
  var_update_if, 4, LOCAL(1), var_810_11_request, var_811_9_task, lambda_89, 2, var_810_11_request, var_811_9_task,
  // mode == COMPUTE:
  var_std__equal, 2, var_811_15_mode, uni_COMPUTE, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_91, lambda_95, TAIL_CALL,
  POS(811, 5),
  POS(812, 31),
  POS(812, 5),
  POS(813, 23),
  POS(813, 5),
  POS(817, 7),
  POS(816, 5)
};

static TAB_NUM t_lambda_89[] = {
  1, // locals
  0, // parameters
  // child_ids_of: (id) -> not(removed(id))
  var_child_ids_of, 1, var_811_9_task, 1, LOCAL(1),
  // filter &task.child_ids_of: (id) -> not(removed(id))
  var_filter, 2, LOCAL(1), lambda_90, 1, LOCAL(1),
  // task.child_ids_of: (id) -> not(removed(id))
  LET, -1, var_811_9_task, var_child_ids_of, LOCAL(1), var_811_9_task,
  // tuple(task mode body argument continuation) task
  var_tuple, 5, var_811_9_task, var_811_15_mode, var_811_21_body, var_811_27_argument, var_811_37_continuation, 1, LOCAL(1),
  // -> tuple(task mode body argument continuation) task
  LET, 2, LOCAL(1), var_811_9_task, TAIL_CALL,
  POS(814, 20),
  POS(814, 7),
  POS(814, 15),
  POS(815, 10),
  POS(815, 7)
};

static TAB_NUM t_lambda_90[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 814_28_id
  // removed(id))
  var_812_1_removed, 1, LOCAL(3), 1, LOCAL(1),
  // not(removed(id))
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // -> not(removed(id))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(814, 46),
  POS(814, 42),
  POS(814, 39)
};

static TAB_NUM t_lambda_91[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(continuation) == 2:
  var_parameter_count_of, 1, var_811_37_continuation, 1, LOCAL(1),
  // parameter_count_of(continuation) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_92, lambda_93, TAIL_CALL,
  POS(819, 11),
  POS(819, 11),
  POS(818, 9)
};

static TAB_NUM t_lambda_92[] = {
  0, // locals
  0, // parameters
  // !request continuation(task argument)
  var_811_37_continuation, 2, var_811_9_task, var_811_27_argument, 1, var_810_11_request,
  // check_request
  func_check_request, 0, TAIL_CALL,
  POS(820, 13),
  POS(821, 13)
};

static TAB_NUM t_lambda_93[] = {
  0, // locals
  0, // parameters
  // !request continuation(task)
  var_811_37_continuation, 1, var_811_9_task, 1, var_810_11_request,
  // check_request
  func_check_request, 0, TAIL_CALL,
  POS(823, 13),
  POS(824, 13)
};

static TAB_NUM t_func_check_request[] = {
  1, // locals
  0, // parameters
  // is_an_error:
  var_is_an_error, 1, var_810_11_request, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_request_is_an_error, lambda_94, TAIL_CALL,
  POS(828, 21),
  POS(827, 11)
};

static TAB_NUM t_lambda_request_is_an_error[] = {
  1, // locals
  0, // parameters
  // generate_error_message(request)
  var_generate_error_message, 1, var_810_11_request, 1, LOCAL(1),
  // log &task generate_error_message(request)
  var_log, 2, var_811_9_task, LOCAL(1), 1, var_811_9_task,
  // tuple(task EXIT undefined EXIT_FAILURE undefined)
  var_tuple, 5, var_811_9_task, uni_EXIT, var_undefined, var_EXIT_FAILURE, var_undefined, 1, LOCAL(1),
  // -> tuple(task EXIT undefined EXIT_FAILURE undefined)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(829, 25),
  POS(829, 15),
  POS(830, 18),
  POS(830, 15)
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  //  request
  LET, 1, var_810_11_request, TAIL_CALL,
  POS(831, 15)
};

static TAB_NUM t_lambda_95[] = {
  0, // locals
  0, // parameters
  //  request
  LET, 1, var_810_11_request, TAIL_CALL,
  POS(832, 9)
};

static TAB_NUM t_func_collect_messages[] = {
  1, // locals
  1, // parameters
  var_836_20_task,
  // outbound_messages_of(task)
  var_outbound_messages_of, 1, var_836_20_task, 1, LOCAL(1),
  // for_each outbound_messages_of(task)
  var_for_each, 3, LOCAL(1), lambda_96, lambda_98, IO_TAIL_CALL,
  POS(837, 14),
  POS(837, 5)
};

static TAB_NUM t_lambda_96[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 838_3_entry
  // entry $receiver $message
  LOCAL(2), 0, 2, var_839_7_receiver, var_839_17_message,
  // is_an_integer:
  var_is_an_integer, 1, var_839_7_receiver, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_receiver_is_an_integer, lambda_97, IO_TAIL_CALL,
  POS(839, 9),
  POS(841, 20),
  POS(840, 9)
};

static TAB_NUM t_lambda_receiver_is_an_integer[] = {
  0, // locals
  0, // parameters
  // send_message! receiver
  func_send_message, 1, var_839_7_receiver, IO_TAIL_CALL,
  POS(842, 13)
};

static TAB_NUM t_lambda_97[] = {
  0, // locals
  0, // parameters
  // for_each! receiver send_message
  var_for_each, 2, var_839_7_receiver, func_send_message, IO_TAIL_CALL,
  POS(844, 13)
};

static TAB_NUM t_func_send_message[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 846_16_the_receiver
  // sent_messages(the_receiver) empty_list)
  var_642_1_sent_messages, 1, LOCAL(2), 1, LOCAL(1),
  // $messages default_value(sent_messages(the_receiver) empty_list)
  var_default_value, 2, LOCAL(1), var_empty_list, 1, LOCAL(3),
  // push &messages message
  var_push, 2, LOCAL(3), var_839_17_message, 1, LOCAL(3),
  // sent_messages(the_receiver) messages
  var_642_1_sent_messages, 2, LOCAL(2), LOCAL(3), 1, var_642_1_sent_messages,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(847, 35),
  POS(847, 11),
  POS(848, 11),
  POS(849, 12),
  POS(850, 11)
};

static TAB_NUM t_lambda_98[] = {
  0, // locals
  0, // parameters
  // task.outbound_messages_of empty_list
  LET, -1, var_836_20_task, var_outbound_messages_of, var_empty_list, var_836_20_task,
  // -> task sent_messages
  LET, 2, var_836_20_task, var_642_1_sent_messages, TAIL_CALL,
  POS(852, 10),
  POS(853, 9)
};

static TAB_NUM t_func_collect_cancel_requests[] = {
  1, // locals
  1, // parameters
  var_855_27_task,
  // cancel_requests_of(task)
  var_cancel_requests_of, 1, var_855_27_task, 1, LOCAL(1),
  // for_each cancel_requests_of(task)
  var_for_each, 3, LOCAL(1), lambda_99, lambda_100, IO_TAIL_CALL,
  POS(856, 14),
  POS(856, 5)
};

static TAB_NUM t_lambda_99[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 857_3_id
  // cancellations(id) true
  var_641_1_cancellations, 2, LOCAL(1), var_true, 1, var_641_1_cancellations,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(858, 10),
  POS(859, 9)
};

static TAB_NUM t_lambda_100[] = {
  0, // locals
  0, // parameters
  // task.cancel_requests_of empty_list
  LET, -1, var_855_27_task, var_cancel_requests_of, var_empty_list, var_855_27_task,
  // -> task cancellations
  LET, 2, var_855_27_task, var_641_1_cancellations, TAIL_CALL,
  POS(861, 10),
  POS(862, 9)
};

static TAB_NUM t_func_collect_log_messages[] = {
  1, // locals
  1, // parameters
  var_864_24_task,
  // log_level == 0
  var_std__equal, 2, var_log_level, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_101, lambda_102, IO_TAIL_CALL,
  POS(866, 7),
  POS(865, 5)
};

static TAB_NUM t_lambda_101[] = {
  0, // locals
  0, // parameters
  //  task log_message
  LET, 2, var_864_24_task, var_644_1_log_message, TAIL_CALL,
  POS(867, 9)
};

static TAB_NUM t_lambda_102[] = {
  1, // locals
  0, // parameters
  // log_messages_of(task)
  var_log_messages_of, 1, var_864_24_task, 1, LOCAL(1),
  // for_each log_messages_of(task)
  var_for_each, 3, LOCAL(1), lambda_103, lambda_104, IO_TAIL_CALL,
  POS(869, 18),
  POS(869, 9)
};

static TAB_NUM t_lambda_103[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 870_3_message
  // append_log_entry !log_message task message
  func_append_log_entry, 2, var_864_24_task, LOCAL(1), 1, var_644_1_log_message,
  // task.log_messages_of empty_list
  LET, -1, var_864_24_task, var_log_messages_of, var_empty_list, var_864_24_task,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(871, 13),
  POS(872, 14),
  POS(873, 13)
};

static TAB_NUM t_lambda_104[] = {
  0, // locals
  0, // parameters
  //  task log_message
  LET, 2, var_864_24_task, var_644_1_log_message, TAIL_CALL,
  POS(874, 13)
};

static TAB_NUM t_func_append_log_entry[] = {
  3, // locals
  2, // parameters
  var_876_20_task,
  var_876_25_message,
  // log_level >= 2
  var_std__less, 2, var_log_level, num_2, 1, LOCAL(1),
  // log_level >= 2
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_105, lambda_106, 1, LOCAL(3),
  // append log_message
  var_append, 2, var_644_1_log_message, LOCAL(3), TAIL_CALL,
  POS(879, 9),
  POS(879, 9),
  POS(878, 7),
  POS(877, 5)
};

static TAB_NUM t_lambda_105[] = {
  2, // locals
  0, // parameters
  // id_of(task) ": " message)
  var_id_of, 1, var_876_20_task, 1, LOCAL(1),
  // string(id_of(task) ": " message)
  var_string, 3, LOCAL(1), string_7, var_876_25_message, 1, LOCAL(2),
  //  string(id_of(task) ": " message)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(880, 19),
  POS(880, 12),
  POS(880, 11)
};

static TAB_NUM t_lambda_106[] = {
  0, // locals
  0, // parameters
  //  message
  LET, 1, var_876_25_message, TAIL_CALL,
  POS(881, 11)
};

static TAB_NUM t_func_create_new_tasks[] = {
  2, // locals
  1, // parameters
  var_883_20_task,
  // fork_requests_of(task).is_empty
  var_fork_requests_of, 1, var_883_20_task, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_107, lambda_108, TAIL_CALL,
  POS(885, 7),
  POS(885, 30),
  POS(884, 5)
};

static TAB_NUM t_lambda_107[] = {
  0, // locals
  0, // parameters
  //  task current_task_id new_requests
  LET, 3, var_883_20_task, var_648_1_current_task_id, var_640_1_new_requests, TAIL_CALL,
  POS(886, 9)
};

static TAB_NUM t_lambda_108[] = {
  1, // locals
  0, // parameters
  // fork_requests_of(task)
  var_fork_requests_of, 1, var_883_20_task, 1, LOCAL(1),
  // for_each fork_requests_of(task)
  var_for_each, 3, LOCAL(1), lambda_109, lambda_110, TAIL_CALL,
  POS(888, 18),
  POS(888, 9)
};

static TAB_NUM t_lambda_109[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 889_3_fork_request
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
  var_inc, 1, var_648_1_current_task_id, 1, var_648_1_current_task_id,
  // new_task.id_of current_task_id
  LET, -1, LOCAL(4), var_id_of, var_648_1_current_task_id, LOCAL(4),
  // !new_task.parent_id_of id_of(task)
  var_id_of, 1, var_883_20_task, 1, LOCAL(2),
  // new_task.parent_id_of id_of(task)
  LET, -1, LOCAL(4), var_parent_id_of, LOCAL(2), LOCAL(4),
  // child_ids_of current_task_id
  var_child_ids_of, 1, var_883_20_task, 1, LOCAL(1),
  // push &task.child_ids_of current_task_id
  var_push, 2, LOCAL(1), var_648_1_current_task_id, 1, LOCAL(1),
  // task.child_ids_of current_task_id
  LET, -1, var_883_20_task, var_child_ids_of, LOCAL(1), var_883_20_task,
  // tuple(new_task COMPUTE undefined argument continuation)
  var_tuple, 5, LOCAL(4), uni_COMPUTE, var_undefined, LOCAL(6), LOCAL(5), 1, LOCAL(1),
  // push &new_requests
  var_push, 2, var_640_1_new_requests, LOCAL(1), 1, var_640_1_new_requests,
  // next
  var_next, 0, TAIL_CALL,
  POS(890, 13),
  POS(894, 14),
  POS(895, 14),
  POS(896, 14),
  POS(897, 14),
  POS(898, 14),
  POS(899, 14),
  POS(900, 14),
  POS(901, 14),
  POS(902, 14),
  POS(903, 14),
  POS(907, 13),
  POS(908, 14),
  POS(909, 13),
  POS(909, 14),
  POS(913, 24),
  POS(913, 13),
  POS(913, 19),
  POS(918, 15),
  POS(917, 13),
  POS(919, 13)
};

static TAB_NUM t_lambda_110[] = {
  0, // locals
  0, // parameters
  // task.fork_requests_of empty_list
  LET, -1, var_883_20_task, var_fork_requests_of, var_empty_list, var_883_20_task,
  // -> task current_task_id new_requests
  LET, 3, var_883_20_task, var_648_1_current_task_id, var_640_1_new_requests, TAIL_CALL,
  POS(921, 14),
  POS(922, 13)
};

static TAB_NUM t_func_receive_messages[] = {
  1, // locals
  1, // parameters
  var_926_20_request,
  // request $task $mode $body $argument $continuation
  var_926_20_request, 0, 5, var_927_9_task, var_927_15_mode, var_927_21_body, var_927_27_argument, var_927_37_continuation,
  // id_of(task))
  var_id_of, 1, var_927_9_task, 1, LOCAL(1),
  // $messages sent_messages(id_of(task))
  var_642_1_sent_messages, 1, LOCAL(1), 1, var_928_1_messages,
  // is_defined:
  var_is_defined, 1, var_928_1_messages, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_messages_is_defined, lambda_112, TAIL_CALL,
  POS(927, 5),
  POS(928, 29),
  POS(928, 5),
  POS(930, 16),
  POS(929, 5)
};

static TAB_NUM t_lambda_messages_is_defined[] = {
  1, // locals
  0, // parameters
  // inbound_messages_of messages
  var_inbound_messages_of, 1, var_927_9_task, 1, LOCAL(1),
  // append &task.inbound_messages_of messages
  var_append, 2, LOCAL(1), var_928_1_messages, 1, LOCAL(1),
  // task.inbound_messages_of messages
  LET, -1, var_927_9_task, var_inbound_messages_of, LOCAL(1), var_927_9_task,
  // mode == WAIT &mode -> COMPUTE
  var_std__equal, 2, var_927_15_mode, uni_WAIT, 1, LOCAL(1),
  // update_if mode == WAIT &mode -> COMPUTE
  var_update_if, 3, LOCAL(1), var_927_15_mode, lambda_111, 1, var_927_15_mode,
  // tuple(task mode body argument continuation)
  var_tuple, 5, var_927_9_task, var_927_15_mode, var_927_21_body, var_927_27_argument, var_927_37_continuation, 1, LOCAL(1),
  // -> tuple(task mode body argument continuation)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(931, 22),
  POS(931, 9),
  POS(931, 17),
  POS(932, 19),
  POS(932, 9),
  POS(933, 12),
  POS(933, 9)
};

static TAB_NUM t_lambda_111[] = {
  0, // locals
  0, // parameters
  //  COMPUTE
  LET, 1, uni_COMPUTE, TAIL_CALL,
  POS(932, 40)
};

static TAB_NUM t_lambda_112[] = {
  0, // locals
  0, // parameters
  //  request
  LET, 1, var_926_20_request, TAIL_CALL,
  POS(934, 9)
};

static TAB_NUM t_func_maybe_mark_as_cancelled[] = {
  2, // locals
  1, // parameters
  var_936_27_request,
  // request $task $mode $body $argument $continuation
  var_936_27_request, 0, 5, var_937_9_task, var_937_15_mode, var_937_21_body, var_937_27_argument, var_937_37_continuation,
  // id_of(task)):
  var_id_of, 1, var_937_9_task, 1, LOCAL(1),
  // cancellations(id_of(task)):
  var_641_1_cancellations, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_cancellationsid_oftask, lambda_113, TAIL_CALL,
  POS(937, 5),
  POS(939, 21),
  POS(939, 7),
  POS(938, 5)
};

static TAB_NUM t_lambda_cancellationsid_oftask[] = {
  1, // locals
  0, // parameters
  // task.is_cancelled true
  LET, -1, var_937_9_task, var_is_cancelled, var_true, var_937_9_task,
  // tuple(task mode body argument continuation)
  var_tuple, 5, var_937_9_task, var_937_15_mode, var_937_21_body, var_937_27_argument, var_937_37_continuation, 1, LOCAL(1),
  // -> tuple(task mode body argument continuation)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(940, 10),
  POS(941, 12),
  POS(941, 9)
};

static TAB_NUM t_lambda_113[] = {
  0, // locals
  0, // parameters
  //  request
  LET, 1, var_936_27_request, TAIL_CALL,
  POS(942, 9)
};

static TAB_NUM t_func_queue_log_message_write[] = {
  2, // locals
  0, // parameters
  // log_level >= 4 &log_message:
  var_std__less, 2, var_log_level, num_4, 1, LOCAL(1),
  // log_level >= 4 &log_message:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // update_if log_level >= 4 &log_message:
  var_update_if, 3, LOCAL(2), var_644_1_log_message, lambda_114, 1, var_644_1_log_message,
  // is_empty
  var_is_empty, 1, var_644_1_log_message, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_117, lambda_118, TAIL_CALL,
  POS(947, 15),
  POS(947, 15),
  POS(947, 5),
  POS(956, 19),
  POS(955, 5)
};

static TAB_NUM t_lambda_114[] = {
  0, // locals
  0, // parameters
  // for_each new_requests
  var_for_each, 3, var_640_1_new_requests, lambda_115, lambda_116, TAIL_CALL,
  POS(948, 7)
};

static TAB_NUM t_lambda_115[] = {
  5, // locals
  1, // parameters
  LOCAL(4), // 949_3_request
  // request $task $_mode $_body $_arguments $_continuation
  LOCAL(4), 0, 5, LOCAL(5), LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(1),
  // id_of(task)) (parent: @(parent_id_of(task)))
  var_id_of, 1, LOCAL(5), 1, LOCAL(1),
  // parent_id_of(task)))
  var_parent_id_of, 1, LOCAL(5), 1, LOCAL(2),
  // "
  var_std__string, 5, str_CREATED_TASK, LOCAL(1), str__parent, LOCAL(2), string_5, 1, LOCAL(3),
  // append &log_message "
  var_append, 2, var_644_1_log_message, LOCAL(3), 1, var_644_1_log_message,
  // next
  var_next, 0, TAIL_CALL,
  POS(950, 11),
  POS(952, 28),
  POS(952, 52),
  POS(951, 31),
  POS(951, 11),
  POS(953, 11)
};

static TAB_NUM t_lambda_116[] = {
  0, // locals
  0, // parameters
  //  log_message
  LET, 1, var_644_1_log_message, TAIL_CALL,
  POS(954, 11)
};

static TAB_NUM t_lambda_117[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_638_1_io, TAIL_CALL,
  POS(957, 9)
};

static TAB_NUM t_lambda_118[] = {
  2, // locals
  0, // parameters
  // log_level >= 3 &io:
  var_std__less, 2, var_log_level, num_3, 1, LOCAL(1),
  // log_level >= 3 &io:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // update_if log_level >= 3 &io:
  var_update_if, 3, LOCAL(2), var_638_1_io, lambda_119, 1, var_638_1_io,
  // to_utf8
  var_to_utf8, 1, var_644_1_log_message, 1, LOCAL(1),
  // write &io STDERR_FILENO log_message.to_utf8
  var_write, 3, var_638_1_io, var_STDERR_FILENO, LOCAL(1), 1, var_638_1_io,
  // -> io
  LET, 1, var_638_1_io, TAIL_CALL,
  POS(959, 19),
  POS(959, 19),
  POS(959, 9),
  POS(962, 45),
  POS(962, 9),
  POS(963, 9)
};

static TAB_NUM t_lambda_119[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, string_8, var_649_1_iteration_no, string_9, 1, LOCAL(1),
  // write io STDERR_FILENO "
  var_write, 3, var_638_1_io, var_STDERR_FILENO, LOCAL(1), TAIL_CALL,
  POS(960, 34),
  POS(960, 11)
};

static TAB_NUM t_func_start_io_operation[] = {
  2, // locals
  1, // parameters
  var_965_22_request,
  // request $task $mode $body $argument $continuation
  var_965_22_request, 0, 5, var_966_9_task, var_966_15_mode, var_966_21_body, var_966_27_argument, var_966_37_continuation,
  // mode == START_IO
  var_std__equal, 2, var_966_15_mode, uni_START_IO, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_120, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_122, lambda_125, IO_TAIL_CALL,
  POS(966, 5),
  POS(969, 9),
  POS(968, 9),
  POS(967, 5)
};

static TAB_NUM t_lambda_120[] = {
  2, // locals
  0, // parameters
  // is_cancelled && mode == CHECK_IO
  var_is_cancelled, 1, var_966_9_task, 1, LOCAL(1),
  // is_cancelled && mode == CHECK_IO
  var_std__and, 2, LOCAL(1), lambda_121, 1, LOCAL(2),
  // task.is_cancelled && mode == CHECK_IO
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(970, 14),
  POS(970, 14),
  POS(970, 9)
};

static TAB_NUM t_lambda_121[] = {
  1, // locals
  0, // parameters
  // mode == CHECK_IO
  var_std__equal, 2, var_966_15_mode, uni_CHECK_IO, 1, LOCAL(1),
  // mode == CHECK_IO
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(970, 30),
  POS(970, 30)
};

static TAB_NUM t_lambda_122[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(body) == 3:
  var_parameter_count_of, 1, var_966_21_body, 1, LOCAL(1),
  // parameter_count_of(body) == 3:
  var_std__equal, 2, LOCAL(1), num_3, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_123, lambda_124, IO_TAIL_CALL,
  POS(973, 11),
  POS(973, 11),
  POS(972, 9)
};

static TAB_NUM t_lambda_123[] = {
  1, // locals
  0, // parameters
  // body! !mode &task &io !body &argument
  var_966_21_body, 3, var_966_9_task, var_638_1_io, var_966_27_argument, IO_CALL(5), var_966_15_mode, var_966_9_task, var_638_1_io, var_966_21_body, var_966_27_argument,
  // tuple(task mode body argument continuation) io
  var_tuple, 5, var_966_9_task, var_966_15_mode, var_966_21_body, var_966_27_argument, var_966_37_continuation, 1, LOCAL(1),
  // -> tuple(task mode body argument continuation) io
  LET, 2, LOCAL(1), var_638_1_io, TAIL_CALL,
  POS(974, 13),
  POS(975, 16),
  POS(975, 13)
};

static TAB_NUM t_lambda_124[] = {
  1, // locals
  0, // parameters
  // body! !mode &task &io !body !argument
  var_966_21_body, 2, var_966_9_task, var_638_1_io, IO_CALL(5), var_966_15_mode, var_966_9_task, var_638_1_io, var_966_21_body, var_966_27_argument,
  // tuple(task mode body argument continuation) io
  var_tuple, 5, var_966_9_task, var_966_15_mode, var_966_21_body, var_966_27_argument, var_966_37_continuation, 1, LOCAL(1),
  // -> tuple(task mode body argument continuation) io
  LET, 2, LOCAL(1), var_638_1_io, TAIL_CALL,
  POS(977, 13),
  POS(978, 16),
  POS(978, 13)
};

static TAB_NUM t_lambda_125[] = {
  0, // locals
  0, // parameters
  //  request io
  LET, 2, var_965_22_request, var_638_1_io, TAIL_CALL,
  POS(979, 9)
};

static TAB_NUM t_func_has_something_to_do[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 983_23_request
  // request $_task $mode $_body $_arguments $_continuation
  LOCAL(3), 0, 5, LOCAL(1), var_984_16_mode, LOCAL(1), LOCAL(1), LOCAL(1),
  // mode == COMPUTE || mode == EXIT
  var_std__equal, 2, var_984_16_mode, uni_COMPUTE, 1, LOCAL(1),
  // mode == COMPUTE || mode == EXIT
  var_std__or, 2, LOCAL(1), lambda_126, 1, LOCAL(2),
  // -> mode == COMPUTE || mode == EXIT
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(984, 5),
  POS(985, 8),
  POS(985, 8),
  POS(985, 5)
};

static TAB_NUM t_lambda_126[] = {
  1, // locals
  0, // parameters
  // mode == EXIT
  var_std__equal, 2, var_984_16_mode, uni_EXIT, 1, LOCAL(1),
  // mode == EXIT
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(985, 27),
  POS(985, 27)
};

static TAB_NUM t_func_maybe_exit[] = {
  1, // locals
  1, // parameters
  var_987_14_something_to_do,
  // is_empty:
  var_is_empty, 1, var_638_1_io, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_io_is_empty, var_pass, IO_TAIL_CALL,
  POS(989, 10),
  POS(988, 5)
};

static TAB_NUM t_lambda_io_is_empty[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_646_1_requests, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_requests_is_empty, lambda_127, IO_TAIL_CALL,
  POS(991, 20),
  POS(990, 9)
};

static TAB_NUM t_lambda_requests_is_empty[] = {
  0, // locals
  0, // parameters
  // exit! exit_status # no more requests and no more pending log-writes
  var_exit, 1, var_637_1_exit_status, IO_TAIL_CALL,
  POS(992, 13)
};

static TAB_NUM t_lambda_127[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_987_14_something_to_do, var_pass, lambda_128, IO_TAIL_CALL,
  POS(994, 13)
};

static TAB_NUM t_lambda_128[] = {
  1, // locals
  0, // parameters
  // write! $_bytes_written STDERR_FILENO "
  var_write, 2, var_STDERR_FILENO, str_NO_TASK_IS_READY, IO_CALL(1), LOCAL(1),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(998, 17),
  POS(1000, 17)
};

static TAB_NUM t_func_get_and_check_events[] = {
  1, // locals
  1, // parameters
  var_1003_24_something_to_do,
  // is_empty
  var_is_empty, 1, var_638_1_io, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_129, lambda_130, IO_TAIL_CALL,
  POS(1005, 10),
  POS(1004, 5)
};

static TAB_NUM t_lambda_129[] = {
  0, // locals
  0, // parameters
  //  requests io
  LET, 2, var_646_1_requests, var_638_1_io, TAIL_CALL,
  POS(1006, 9)
};

static TAB_NUM t_lambda_130[] = {
  1, // locals
  0, // parameters
  // $timeout
  var_if, 3, var_1003_24_something_to_do, lambda_131, lambda_132, 1, LOCAL(1),
  // get_events! &io !events timeout
  var_get_events, 2, var_638_1_io, LOCAL(1), IO_CALL(2), var_638_1_io, var_645_1_events,
  // map &requests check_events
  var_map, 2, var_646_1_requests, func_check_events, 1, var_646_1_requests,
  // !events empty_list
  LET, 1, var_empty_list, 1, var_645_1_events,
  // -> requests io
  LET, 2, var_646_1_requests, var_638_1_io, TAIL_CALL,
  POS(1008, 9),
  POS(1013, 9),
  POS(1014, 9),
  POS(1015, 9),
  POS(1016, 9)
};

static TAB_NUM t_lambda_131[] = {
  0, // locals
  0, // parameters
  //  0 # poll
  LET, 1, num_0, TAIL_CALL,
  POS(1011, 15)
};

static TAB_NUM t_lambda_132[] = {
  0, // locals
  0, // parameters
  //  undefined # wait "forever"
  LET, 1, var_undefined, TAIL_CALL,
  POS(1012, 15)
};

static TAB_NUM t_func_check_events[] = {
  1, // locals
  1, // parameters
  var_1018_16_request,
  // request $task $mode $body $argument $continuation
  var_1018_16_request, 0, 5, var_1019_9_task, var_1019_15_mode, var_1019_21_body, var_1019_27_argument, var_1019_37_continuation,
  // mode == CHECK_IO:
  var_std__equal, 2, var_1019_15_mode, uni_CHECK_IO, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_133, lambda_134, TAIL_CALL,
  POS(1019, 5),
  POS(1021, 7),
  POS(1020, 5)
};

static TAB_NUM t_lambda_133[] = {
  1, // locals
  0, // parameters
  // body !mode &task events !body &argument
  var_1019_21_body, 3, var_1019_9_task, var_645_1_events, var_1019_27_argument, 4, var_1019_15_mode, var_1019_9_task, var_1019_21_body, var_1019_27_argument,
  // tuple(task mode body argument continuation)
  var_tuple, 5, var_1019_9_task, var_1019_15_mode, var_1019_21_body, var_1019_27_argument, var_1019_37_continuation, 1, LOCAL(1),
  // -> tuple(task mode body argument continuation)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1022, 9),
  POS(1023, 12),
  POS(1023, 9)
};

static TAB_NUM t_lambda_134[] = {
  0, // locals
  0, // parameters
  //  request
  LET, 1, var_1018_16_request, TAIL_CALL,
  POS(1024, 9)
};

static TAB_NUM t_func_exit_task[] = {
  4, // locals
  1, // parameters
  var_1028_13_task,
  // $parent_id parent_id_of(task)
  var_parent_id_of, 1, var_1028_13_task, 1, LOCAL(3),
  // removed_children(parent_id) empty_key_order_set)
  var_643_1_removed_children, 1, LOCAL(3), 1, LOCAL(1),
  // $removed default_value(removed_children(parent_id) empty_key_order_set)
  var_default_value, 2, LOCAL(1), var_empty_key_order_set, 1, LOCAL(4),
  // id_of(task)) true
  var_id_of, 1, var_1028_13_task, 1, LOCAL(2),
  // removed(id_of(task)) true
  LOCAL(4), 2, LOCAL(2), var_true, 1, LOCAL(4),
  // removed_children(parent_id) removed
  var_643_1_removed_children, 2, LOCAL(3), LOCAL(4), 1, var_643_1_removed_children,
  // exit_handlers_of(task)
  var_exit_handlers_of, 1, var_1028_13_task, 1, LOCAL(1),
  // for_each exit_handlers_of(task)
  var_for_each, 3, LOCAL(1), lambda_135, lambda_140, IO_TAIL_CALL,
  POS(1029, 5),
  POS(1030, 28),
  POS(1030, 5),
  POS(1031, 14),
  POS(1031, 6),
  POS(1032, 6),
  POS(1033, 14),
  POS(1033, 5)
};

static TAB_NUM t_lambda_135[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 1034_3_item
  // item $handler $handler_arguments
  LOCAL(3), 0, 2, var_1035_6_handler, var_1035_15_handler_arguments,
  // parameter_count_of(handler) == 3:
  var_parameter_count_of, 1, var_1035_6_handler, 1, LOCAL(1),
  // parameter_count_of(handler) == 3:
  var_std__equal, 2, LOCAL(1), num_3, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_136, lambda_138, IO_TAIL_CALL,
  POS(1035, 9),
  POS(1037, 11),
  POS(1037, 11),
  POS(1036, 9)
};

static TAB_NUM t_lambda_136[] = {
  2, // locals
  0, // parameters
  // handler! task &io $success handler_arguments
  var_1035_6_handler, 3, var_1028_13_task, var_638_1_io, var_1035_15_handler_arguments, IO_CALL(2), var_638_1_io, LOCAL(2),
  // is_an_error &exit_status -> EXIT_FAILURE
  var_is_an_error, 1, LOCAL(2), 1, LOCAL(1),
  // update_if success.is_an_error &exit_status -> EXIT_FAILURE
  var_update_if, 3, LOCAL(1), var_637_1_exit_status, lambda_137, 1, var_637_1_exit_status,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1038, 13),
  POS(1039, 31),
  POS(1039, 13),
  POS(1040, 13)
};

static TAB_NUM t_lambda_137[] = {
  0, // locals
  0, // parameters
  //  EXIT_FAILURE
  LET, 1, var_EXIT_FAILURE, TAIL_CALL,
  POS(1039, 58)
};

static TAB_NUM t_lambda_138[] = {
  2, // locals
  0, // parameters
  // handler! task &io $success
  var_1035_6_handler, 2, var_1028_13_task, var_638_1_io, IO_CALL(2), var_638_1_io, LOCAL(2),
  // is_an_error &exit_status -> EXIT_FAILURE
  var_is_an_error, 1, LOCAL(2), 1, LOCAL(1),
  // update_if success.is_an_error &exit_status -> EXIT_FAILURE
  var_update_if, 3, LOCAL(1), var_637_1_exit_status, lambda_139, 1, var_637_1_exit_status,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1042, 13),
  POS(1043, 31),
  POS(1043, 13),
  POS(1044, 13)
};

static TAB_NUM t_lambda_139[] = {
  0, // locals
  0, // parameters
  //  EXIT_FAILURE
  LET, 1, var_EXIT_FAILURE, TAIL_CALL,
  POS(1043, 58)
};

static TAB_NUM t_lambda_140[] = {
  0, // locals
  0, // parameters
  //  io exit_status removed_children
  LET, 3, var_638_1_io, var_637_1_exit_status, var_643_1_removed_children, TAIL_CALL,
  POS(1045, 9)
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io_task___read}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__io_task___write}},
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
    {.position = POS(89, 1)}
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
    "error\000std_types", std_types__error__attributes,
    {.position = POS(221, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "additional_error_information_of\000", NULL,
    {.position = POS(221, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(221, 51)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "generate_error_message\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "generate_error_message\000", NULL,
    {.position = POS(225, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "226_1_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error_message_text_of\000", NULL,
    {.position = POS(226, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "227_1_errno\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "errno_of\000", NULL,
    {.position = POS(227, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(228, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(229, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "strerror\000", NULL,
    {.position = POS(230, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(228, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "231_1_failed_attribute\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "failed_attribute_of\000", NULL,
    {.position = POS(231, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "235_1_additional_information\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(239, 5)}
  },
  {
    FOT_DERIVED, 0, 37,
    "io_task\000std_types", std_types__io_task__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "object\000std_types", NULL,
    {.position = POS(241, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(243, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(253, 34)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "task_id_of\000", NULL,
    {.position = POS(255, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "parent_of\000", NULL,
    {.position = POS(256, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "257_1_id\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(259, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(259, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(258, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "children_of\000", NULL,
    {.position = POS(263, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "perform_io\000", NULL,
    {.position = POS(265, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(272, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "pause\000", NULL,
    {.position = POS(274, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "wait_for_message\000", NULL,
    {.position = POS(277, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "277_39_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "277_44_continuation\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(279, 31)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "check_io\000", NULL,
    {.position = POS(283, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "performed_io\000", NULL,
    {.position = POS(286, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "recheck_io\000", NULL,
    {.position = POS(294, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "complete_io\000", NULL,
    {.position = POS(297, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "checked_io\000", NULL,
    {.position = POS(300, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "log\000", NULL,
    {.position = POS(303, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "304_1_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(304, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(307, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "send\000", NULL,
    {.position = POS(313, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "313_27_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "313_32_receiver\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "313_41_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(315, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(315, 14)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "receive\000", NULL,
    {.position = POS(321, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "321_30_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get\000", NULL,
    {.position = POS(326, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "cancel\000", NULL,
    {.position = POS(329, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "331_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "332_0_task_id\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_integer\000", NULL,
    {.position = POS(335, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_list\000", NULL,
    {.position = POS(339, 47)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "on_exit\000", NULL,
    {.position = POS(342, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "put\000", NULL,
    {.position = POS(348, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "on_error\000", NULL,
    {.position = POS(351, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "on_cancel\000", NULL,
    {.position = POS(355, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "load\000", NULL,
    {.position = POS(361, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "364_16_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "364_21_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "364_24_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "369_7_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open\000", NULL,
    {.position = POS(369, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(371, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(372, 49)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "start_reading_from\000", NULL,
    {.position = POS(376, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "379_22_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "379_27_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "379_34_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "380_10_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "380_14_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "stop_reading_from\000", NULL,
    {.position = POS(384, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "close\000", NULL,
    {.position = POS(385, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "try\000", NULL,
    {.position = POS(385, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "390_13_efd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "390_18_data\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ\000", NULL,
    {.position = POS(392, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(401, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ_ERROR\000", NULL,
    {.position = POS(402, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(391, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(388, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "412_10_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "418_10_fd\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "save\000", NULL,
    {.position = POS(423, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "426_16_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "426_21_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "427_10_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "427_20_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "432_7_fd\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "write\000", NULL,
    {.position = POS(439, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "442_22_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "442_27_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "442_34_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cancel_write\000", NULL,
    {.position = POS(446, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "452_13_efd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "452_18_data\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_COMPLETED\000", NULL,
    {.position = POS(454, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_ERROR\000", NULL,
    {.position = POS(459, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "468_33_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "473_10_fd\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "read\000", NULL,
    {.position = POS(477, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "488_22_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "488_27_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "488_30_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "497_22_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "497_27_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "497_34_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "498_10_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "498_14_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "498_22_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "507_13_efd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "507_18_data\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(516, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(516, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(508, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "531_17_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "531_22_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "532_10_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "532_14_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "540_23_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "540_28_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "540_35_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "549_13_efd\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "join_process\000", NULL,
    {.position = POS(557, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "564_32_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "564_44_pid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "567_13_epid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "567_19_status\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PROCESS_JOINED\000", NULL,
    {.position = POS(569, 19)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "catch_signal\000", NULL,
    {.position = POS(575, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "start_catching_signals\000", NULL,
    {.position = POS(579, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "582_32_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "582_37_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "587_1_signals\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "590_21_signal\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGNAL\000", NULL,
    {.position = POS(592, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "stop_catching_signals\000", NULL,
    {.position = POS(604, 5)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "fork\000", NULL,
    {.position = POS(611, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "exit\000", NULL,
    {.position = POS(621, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXIT_SUCCESS\000", NULL,
    {.position = POS(624, 14)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "io_task_manager\000std", NULL,
    {.const_idx = -func_std__io_task_manager}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "637_1_exit_status\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "638_1_io\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "io\000std_types", NULL,
    {.position = POS(638, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "639_1_updated_requests\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "640_1_new_requests\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "641_1_cancellations\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_key_order_set\000", NULL,
    {.position = POS(641, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "642_1_sent_messages\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_key_order_table\000", NULL,
    {.position = POS(642, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "643_1_removed_children\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "644_1_log_message\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "645_1_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "646_1_requests\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(647, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "648_1_current_task_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "649_1_iteration_no\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(656, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(657, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "log_level\000", NULL,
    {.position = POS(658, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(658, 50)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "660_3_parent_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "698_1_do_receive_messages\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(698, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "699_1_do_cancel_tasks\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "700_16_request\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(724, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(722, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "731_3_request\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "732_9_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "732_15_mode\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "732_21_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "732_27_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "732_37_continuation\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXIT_FAILURE\000", NULL,
    {.position = POS(737, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(751, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "767_1_error_handler\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "783_1_cancel_handler\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(653, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "810_11_request\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "811_9_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "811_15_mode\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "811_21_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "811_27_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "811_37_continuation\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "812_1_removed\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "filter\000", NULL,
    {.position = POS(814, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "836_20_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "839_7_receiver\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "839_17_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "default_value\000", NULL,
    {.position = POS(847, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "855_27_task\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(858, 28)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "864_24_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "876_20_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "876_25_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(880, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "883_20_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "926_20_request\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "927_9_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "927_15_mode\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "927_21_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "927_27_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "927_37_continuation\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "928_1_messages\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "936_27_request\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "937_9_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "937_15_mode\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "937_21_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "937_27_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "937_37_continuation\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDERR_FILENO\000", NULL,
    {.position = POS(960, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(962, 45)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "965_22_request\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "966_9_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "966_15_mode\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "966_21_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "966_27_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "966_37_continuation\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "984_16_mode\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "987_14_something_to_do\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(996, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1003_24_something_to_do\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_events\000", NULL,
    {.position = POS(1013, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1018_16_request\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1019_9_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1019_15_mode\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1019_21_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1019_27_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1019_37_continuation\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1028_13_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1035_6_handler\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1035_15_handler_arguments\000", NULL
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
  273, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
