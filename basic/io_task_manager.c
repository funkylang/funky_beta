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
  var_221_1_message, // dynamic
  var_error_message_text_of, // extern
  var_222_1_errno, // dynamic
  var_errno_of, // extern
  var_is_defined, // extern
  var_append, // extern
  var_strerror, // extern
  var_update_if, // extern
  var_226_1_failed_attribute, // dynamic
  var_failed_attribute_of, // extern
  var_230_1_additional_information, // dynamic
  var_push, // extern
  var_std_types__io_task, // derived
  var_std_types__object, // extern
  var_empty_list, // extern
  var_false, // extern
  var_task_id_of, // extern polymorphic
  var_parent_of, // extern polymorphic
  var_252_1_id, // dynamic
  var_std__equal, // extern
  var_std__not, // extern
  var_if, // extern
  var_children_of, // extern polymorphic
  var_perform_io, // extern polymorphic
  var_tuple, // extern
  var_pause, // extern polymorphic
  var_wait_for_message, // extern polymorphic
  var_272_39_self, // dynamic
  var_272_44_continuation, // dynamic
  var_is_empty, // extern
  var_check_io, // extern polymorphic
  var_performed_io, // extern polymorphic
  var_recheck_io, // extern polymorphic
  var_complete_io, // extern polymorphic
  var_checked_io, // extern polymorphic
  var_log, // extern polymorphic
  var_299_1_str, // dynamic
  var_create_string, // extern
  var_has_suffix, // extern
  var_send, // extern polymorphic
  var_308_27_self, // dynamic
  var_308_32_receiver, // dynamic
  var_308_41_message, // dynamic
  var_is_a_list, // extern
  var_std__and, // extern
  var_receive, // extern polymorphic
  var_316_30_self, // dynamic
  var_get, // extern
  var_cancel, // extern polymorphic
  var_326_0_self, // dynamic
  var_327_0_task_id, // dynamic
  var_is_an_integer, // extern
  var_to_list, // extern
  var_on_exit, // extern polymorphic
  var_put, // extern
  var_on_error, // extern polymorphic
  var_on_cancel, // extern polymorphic
  var_load, // extern polymorphic
  var_359_16_task, // dynamic
  var_359_21_io, // dynamic
  var_359_24_filename, // dynamic
  var_364_7_fd, // dynamic
  var_open, // extern
  var_is_an_error, // extern
  var_std__string, // extern
  var_start_reading_from, // extern
  var_374_22_task, // dynamic
  var_374_27_events, // dynamic
  var_374_34_argument, // dynamic
  var_375_10_fd, // dynamic
  var_375_14_buf, // dynamic
  var_stop_reading_from, // extern
  var_close, // extern
  var_try, // extern
  var_385_13_efd, // dynamic
  var_385_18_data, // dynamic
  var_READ, // extern
  var_next, // extern
  var_READ_ERROR, // extern
  var_case, // extern
  var_for_each, // extern
  var_407_10_fd, // dynamic
  var_413_10_fd, // dynamic
  var_save, // extern polymorphic
  var_421_16_task, // dynamic
  var_421_21_io, // dynamic
  var_422_10_filename, // dynamic
  var_422_20_data, // dynamic
  var_427_7_fd, // dynamic
  var_write_to, // extern polymorphic
  var_437_22_task, // dynamic
  var_437_27_events, // dynamic
  var_437_34_fd, // dynamic
  var_cancel_write_to, // extern
  var_447_13_efd, // dynamic
  var_447_18_data, // dynamic
  var_WRITE_COMPLETED, // extern
  var_WRITE_ERROR, // extern
  var_463_33_fd, // dynamic
  var_468_10_fd, // dynamic
  var_read_from, // extern polymorphic
  var_483_22_task, // dynamic
  var_483_27_io, // dynamic
  var_483_30_argument, // dynamic
  var_492_22_task, // dynamic
  var_492_27_events, // dynamic
  var_492_34_argument, // dynamic
  var_493_10_fd, // dynamic
  var_493_14_length, // dynamic
  var_493_22_buf, // dynamic
  var_502_13_efd, // dynamic
  var_502_18_data, // dynamic
  var_length_of, // extern
  var_std__less, // extern
  var_if_not, // extern
  var_526_17_task, // dynamic
  var_526_22_io, // dynamic
  var_527_10_fd, // dynamic
  var_527_14_text, // dynamic
  var_535_23_task, // dynamic
  var_535_28_events, // dynamic
  var_535_35_fd, // dynamic
  var_544_13_efd, // dynamic
  var_join_process, // extern polymorphic
  var_559_32_task, // dynamic
  var_559_44_pid, // dynamic
  var_562_13_epid, // dynamic
  var_562_19_status, // dynamic
  var_PROCESS_JOINED, // extern
  var_catch_signal, // extern polymorphic
  var_start_catching_signals, // extern
  var_577_32_task, // dynamic
  var_577_37_events, // dynamic
  var_582_1_signals, // dynamic
  var_585_21_signal, // dynamic
  var_SIGNAL, // extern
  var_stop_catching_signals, // extern
  var_fork, // extern polymorphic
  var_exit, // extern polymorphic
  var_EXIT_SUCCESS, // extern
  var_std__io_task_manager, // initialized
  var_632_1_exit_status, // dynamic
  var_633_1_io, // dynamic
  var_std_types__io, // extern
  var_634_1_updated_requests, // dynamic
  var_635_1_new_requests, // dynamic
  var_636_1_cancellations, // dynamic
  var_empty_key_order_set, // extern
  var_637_1_sent_messages, // dynamic
  var_empty_key_order_table, // extern
  var_638_1_removed_children, // dynamic
  var_639_1_log_message, // dynamic
  var_640_1_events, // dynamic
  var_641_1_requests, // dynamic
  var_list, // extern
  var_643_1_current_task_id, // dynamic
  var_644_1_iteration_no, // dynamic
  var_inc, // extern
  var_map, // extern
  var_log_level, // extern
  var_is_not_empty, // extern
  var_655_3_parent_id, // dynamic
  var_693_1_do_receive_messages, // dynamic
  var_not, // extern
  var_694_1_do_cancel_tasks, // dynamic
  var_695_16_request, // dynamic
  var_any_of, // extern
  var_std__or, // extern
  var_726_3_request, // dynamic
  var_727_9_task, // dynamic
  var_727_15_mode, // dynamic
  var_727_21_body, // dynamic
  var_727_27_argument, // dynamic
  var_727_37_continuation, // dynamic
  var_EXIT_FAILURE, // extern
  var_parameter_count_of, // extern
  var_762_1_error_handler, // dynamic
  var_778_1_cancel_handler, // dynamic
  var_loop, // extern
  var_805_11_request, // dynamic
  var_806_9_task, // dynamic
  var_806_15_mode, // dynamic
  var_806_21_body, // dynamic
  var_806_27_argument, // dynamic
  var_806_37_continuation, // dynamic
  var_807_1_removed, // dynamic
  var_filter, // extern
  var_831_20_task, // dynamic
  var_834_7_receiver, // dynamic
  var_834_17_message, // dynamic
  var_default_value, // extern
  var_850_27_task, // dynamic
  var_true, // extern
  var_859_24_task, // dynamic
  var_871_20_task, // dynamic
  var_871_25_message, // dynamic
  var_string, // extern
  var_878_20_task, // dynamic
  var_921_20_request, // dynamic
  var_922_9_task, // dynamic
  var_922_15_mode, // dynamic
  var_922_21_body, // dynamic
  var_922_27_argument, // dynamic
  var_922_37_continuation, // dynamic
  var_923_1_messages, // dynamic
  var_931_27_request, // dynamic
  var_932_9_task, // dynamic
  var_932_15_mode, // dynamic
  var_932_21_body, // dynamic
  var_932_27_argument, // dynamic
  var_932_37_continuation, // dynamic
  var_STDERR_FILENO, // extern
  var_to_utf8, // extern
  var_960_22_request, // dynamic
  var_961_9_task, // dynamic
  var_961_15_mode, // dynamic
  var_961_21_body, // dynamic
  var_961_27_argument, // dynamic
  var_961_37_continuation, // dynamic
  var_979_16_mode, // dynamic
  var_982_14_something_to_do, // dynamic
  var_pass, // extern
  var_write, // extern
  var_998_24_something_to_do, // dynamic
  var_get_events, // extern
  var_1013_16_request, // dynamic
  var_1014_9_task, // dynamic
  var_1014_15_mode, // dynamic
  var_1014_21_body, // dynamic
  var_1014_27_argument, // dynamic
  var_1014_37_continuation, // dynamic
  var_1023_13_task, // dynamic
  var_1030_6_handler, // dynamic
  var_1030_15_handler_arguments, // dynamic
  var__END
};


static TAB_NUM t_func_std_types__error___generate_error_message[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 220_43_self
  // $message error_message_text_of(self)
  var_error_message_text_of, 1, LOCAL(2), 1, var_221_1_message,
  // $errno errno_of(self)
  var_errno_of, 1, LOCAL(2), 1, var_222_1_errno,
  // is_defined &message:
  var_is_defined, 1, var_222_1_errno, 1, LOCAL(1),
  // update_if errno.is_defined &message:
  var_update_if, 3, LOCAL(1), var_221_1_message, lambda_1, 1, var_221_1_message,
  // $failed_attribute failed_attribute_of(self)
  var_failed_attribute_of, 1, LOCAL(2), 1, var_226_1_failed_attribute,
  // is_defined &message:
  var_is_defined, 1, var_226_1_failed_attribute, 1, LOCAL(1),
  // update_if failed_attribute.is_defined &message:
  var_update_if, 3, LOCAL(1), var_221_1_message, lambda_2, 1, var_221_1_message,
  // $additional_information additional_error_information_of(self)
  var_additional_error_information_of, 1, LOCAL(2), 1, var_230_1_additional_information,
  // is_defined message:
  var_is_defined, 1, var_230_1_additional_information, 1, LOCAL(1),
  // update_if additional_information.is_defined message:
  var_update_if, 3, LOCAL(1), var_221_1_message, lambda_3, TAIL_CALL,
  POS(221, 3),
  POS(222, 3),
  POS(223, 19),
  POS(223, 3),
  POS(226, 3),
  POS(227, 30),
  POS(227, 3),
  POS(230, 3),
  POS(231, 36),
  POS(231, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // append &message " - "
  var_append, 2, var_221_1_message, string_1, 1, var_221_1_message,
  // strerror(errno)
  var_strerror, 1, var_222_1_errno, 1, LOCAL(1),
  // append message strerror(errno)
  var_append, 2, var_221_1_message, LOCAL(1), TAIL_CALL,
  POS(224, 5),
  POS(225, 20),
  POS(225, 5)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // append &message " - "
  var_append, 2, var_221_1_message, string_1, 1, var_221_1_message,
  // append message failed_attribute
  var_append, 2, var_221_1_message, var_226_1_failed_attribute, TAIL_CALL,
  POS(228, 5),
  POS(229, 5)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  // append &message " ("
  var_append, 2, var_221_1_message, string_2, 1, var_221_1_message,
  // append &message additional_information
  var_append, 2, var_221_1_message, var_230_1_additional_information, 1, var_221_1_message,
  // push message ')'
  var_push, 2, var_221_1_message, chr_41, TAIL_CALL,
  POS(232, 5),
  POS(233, 5),
  POS(234, 5)
};

static TAB_NUM t_func_std_types__io_task___task_id_of[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 250_33_self
  // id_of(self)
  var_id_of, 1, LOCAL(2), 1, LOCAL(1),
  // -> id_of(self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(250, 43),
  POS(250, 40)
};

static TAB_NUM t_func_std_types__io_task___parent_of[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 251_32_self
  // $id parent_id_of(self)
  var_parent_id_of, 1, LOCAL(3), 1, var_252_1_id,
  // id != 0
  var_std__equal, 2, var_252_1_id, num_0, 1, LOCAL(1),
  // id != 0
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_4, lambda_5, TAIL_CALL,
  POS(252, 3),
  POS(254, 5),
  POS(254, 5),
  POS(253, 3)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  id
  LET, 1, var_252_1_id, TAIL_CALL,
  POS(255, 7)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(256, 7)
};

static TAB_NUM t_func_std_types__io_task___children_of[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 258_34_self
  // child_ids_of(self)
  var_child_ids_of, 1, LOCAL(2), 1, LOCAL(1),
  // -> child_ids_of(self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(258, 44),
  POS(258, 41)
};

static TAB_NUM t_func_std_types__io_task___perform_io[] = {
  4, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 262_0_self
  MANDATORY_PARAMETER, LOCAL(2), // 263_0_body
  var_undefined, LOCAL(3), // 264_0_argument
  MANDATORY_PARAMETER, LOCAL(4), // 265_0_continuation
  // tuple self START_IO body argument continuation
  var_tuple, 5, LOCAL(1), uni_START_IO, LOCAL(2), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(267, 3)
};

static TAB_NUM t_func_std_types__io_task___pause[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 269_28_self
  LOCAL(2), // 269_33_continuation
  // tuple self COMPUTE undefined undefined continuation
  var_tuple, 5, LOCAL(1), uni_COMPUTE, var_undefined, var_undefined, LOCAL(2), TAIL_CALL,
  POS(270, 3)
};

static TAB_NUM t_func_std_types__io_task___wait_for_message[] = {
  2, // locals
  2, // parameters
  var_272_39_self,
  var_272_44_continuation,
  // inbound_messages_of(self).is_empty
  var_inbound_messages_of, 1, var_272_39_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_6, lambda_7, TAIL_CALL,
  POS(274, 5),
  POS(274, 31),
  POS(273, 3)
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // tuple(self WAIT undefined undefined continuation)
  var_tuple, 5, var_272_39_self, uni_WAIT, var_undefined, var_undefined, var_272_44_continuation, 1, LOCAL(1),
  //  tuple(self WAIT undefined undefined continuation)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(275, 8),
  POS(275, 7)
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // tuple(self COMPUTE undefined undefined continuation)
  var_tuple, 5, var_272_39_self, uni_COMPUTE, var_undefined, var_undefined, var_272_44_continuation, 1, LOCAL(1),
  //  tuple(self COMPUTE undefined undefined continuation)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(276, 8),
  POS(276, 7)
};

static TAB_NUM t_func_std_types__io_task___check_io[] = {
  4, // locals
  4, // parameters
  LOCAL(1), // 278_31_self
  LOCAL(2), // 278_36_io
  LOCAL(3), // 278_39_body
  LOCAL(4), // 278_44_argument
  // -> CHECK_IO self io body argument
  LET, 5, uni_CHECK_IO, LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(279, 3)
};

static TAB_NUM t_func_std_types__io_task___performed_io[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 283_0_self
  MANDATORY_PARAMETER, LOCAL(2), // 284_0_io
  var_undefined, LOCAL(3), // 285_0_argument
  // -> COMPUTE self io undefined argument
  LET, 5, uni_COMPUTE, LOCAL(1), LOCAL(2), var_undefined, LOCAL(3), TAIL_CALL,
  POS(287, 3)
};

static TAB_NUM t_func_std_types__io_task___recheck_io[] = {
  3, // locals
  3, // parameters
  LOCAL(1), // 289_33_self
  LOCAL(2), // 289_38_body
  LOCAL(3), // 289_43_argument
  // -> CHECK_IO self body argument
  LET, 4, uni_CHECK_IO, LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(290, 3)
};

static TAB_NUM t_func_std_types__io_task___complete_io[] = {
  3, // locals
  3, // parameters
  LOCAL(1), // 292_34_self
  LOCAL(2), // 292_39_body
  LOCAL(3), // 292_44_argument
  // -> COMPLETE_IO self body argument
  LET, 4, uni_COMPLETE_IO, LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(293, 3)
};

static TAB_NUM t_func_std_types__io_task___checked_io[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 295_33_self
  LOCAL(2), // 295_38_argument
  // -> COMPUTE self undefined argument
  LET, 4, uni_COMPUTE, LOCAL(1), var_undefined, LOCAL(2), TAIL_CALL,
  POS(296, 3)
};

static TAB_NUM t_func_std_types__io_task___log[] = {
  3, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 298_26_self
  REST_PARAMETER, LOCAL(3), // 298_31_argument
  // $str create_string(argument)
  var_create_string, 1, LOCAL(3), 1, var_299_1_str,
  // str .has_suffix. '@nl;'
  var_has_suffix, 2, var_299_1_str, chr_10, 1, LOCAL(1),
  // !str
  var_if, 3, LOCAL(1), lambda_8, lambda_9, 1, var_299_1_str,
  // log_messages_of str
  var_log_messages_of, 1, LOCAL(2), 1, LOCAL(1),
  // push &self.log_messages_of str
  var_push, 2, LOCAL(1), var_299_1_str, 1, LOCAL(1),
  // self.log_messages_of str
  LET, -1, LOCAL(2), var_log_messages_of, LOCAL(1), LOCAL(2),
  // -> self
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(299, 3),
  POS(302, 7),
  POS(300, 3),
  POS(305, 14),
  POS(305, 3),
  POS(305, 9),
  POS(306, 3)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_299_1_str, TAIL_CALL,
  POS(303, 9)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // push(str '@nl;')
  var_push, 2, var_299_1_str, chr_10, 1, LOCAL(1),
  //  push(str '@nl;')
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(304, 10),
  POS(304, 9)
};

static TAB_NUM t_func_std_types__io_task___send[] = {
  2, // locals
  3, // parameters
  var_308_27_self,
  var_308_32_receiver,
  var_308_41_message,
  // is_a_list && receiver.is_empty
  var_is_a_list, 1, var_308_32_receiver, 1, LOCAL(1),
  // is_a_list && receiver.is_empty
  var_std__and, 2, LOCAL(1), lambda_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_11, lambda_12, TAIL_CALL,
  POS(310, 14),
  POS(310, 14),
  POS(309, 3)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_308_32_receiver, 1, LOCAL(1),
  // receiver.is_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(310, 36),
  POS(310, 27)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_308_27_self, TAIL_CALL,
  POS(311, 7)
};

static TAB_NUM t_lambda_12[] = {
  2, // locals
  0, // parameters
  // outbound_messages_of tuple(receiver message)
  var_outbound_messages_of, 1, var_308_27_self, 1, LOCAL(1),
  // tuple(receiver message)
  var_tuple, 2, var_308_32_receiver, var_308_41_message, 1, LOCAL(2),
  // push &self.outbound_messages_of tuple(receiver message)
  var_push, 2, LOCAL(1), LOCAL(2), 1, LOCAL(1),
  // self.outbound_messages_of tuple(receiver message)
  LET, -1, var_308_27_self, var_outbound_messages_of, LOCAL(1), var_308_27_self,
  // -> self
  LET, 1, var_308_27_self, TAIL_CALL,
  POS(313, 18),
  POS(313, 39),
  POS(313, 7),
  POS(313, 13),
  POS(314, 7)
};

static TAB_NUM t_func_std_types__io_task___receive[] = {
  2, // locals
  1, // parameters
  var_316_30_self,
  // inbound_messages_of(self).is_empty
  var_inbound_messages_of, 1, var_316_30_self, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_13, lambda_14, TAIL_CALL,
  POS(318, 5),
  POS(318, 31),
  POS(317, 3)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_316_30_self, var_undefined, TAIL_CALL,
  POS(319, 7)
};

static TAB_NUM t_lambda_14[] = {
  2, // locals
  0, // parameters
  // inbound_messages_of $message
  var_inbound_messages_of, 1, var_316_30_self, 1, LOCAL(1),
  // get &self.inbound_messages_of $message
  var_get, 1, LOCAL(1), 2, LOCAL(1), LOCAL(2),
  // self.inbound_messages_of $message
  LET, -1, var_316_30_self, var_inbound_messages_of, LOCAL(1), var_316_30_self,
  // -> self message
  LET, 2, var_316_30_self, LOCAL(2), TAIL_CALL,
  POS(321, 17),
  POS(321, 7),
  POS(321, 12),
  POS(322, 7)
};

static TAB_NUM t_func_std_types__io_task___cancel[] = {
  1, // locals
  2, // parameters
  var_326_0_self,
  var_327_0_task_id,
  // is_an_integer:
  var_is_an_integer, 1, var_327_0_task_id, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_task_id_is_an_integer, lambda_15, TAIL_CALL,
  POS(330, 13),
  POS(329, 3)
};

static TAB_NUM t_lambda_task_id_is_an_integer[] = {
  1, // locals
  0, // parameters
  // cancel_requests_of task_id
  var_cancel_requests_of, 1, var_326_0_self, 1, LOCAL(1),
  // push &self.cancel_requests_of task_id
  var_push, 2, LOCAL(1), var_327_0_task_id, 1, LOCAL(1),
  // self.cancel_requests_of task_id
  LET, -1, var_326_0_self, var_cancel_requests_of, LOCAL(1), var_326_0_self,
  // -> self
  LET, 1, var_326_0_self, TAIL_CALL,
  POS(331, 18),
  POS(331, 7),
  POS(331, 13),
  POS(332, 7)
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // cancel_requests_of task_id.to_list
  var_cancel_requests_of, 1, var_326_0_self, 1, LOCAL(1),
  // to_list
  var_to_list, 1, var_327_0_task_id, 1, LOCAL(2),
  // append &self.cancel_requests_of task_id.to_list
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(1),
  // self.cancel_requests_of task_id.to_list
  LET, -1, var_326_0_self, var_cancel_requests_of, LOCAL(1), var_326_0_self,
  // -> self
  LET, 1, var_326_0_self, TAIL_CALL,
  POS(334, 20),
  POS(334, 47),
  POS(334, 7),
  POS(334, 15),
  POS(335, 7)
};

static TAB_NUM t_func_std_types__io_task___on_exit[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 339_0_self
  MANDATORY_PARAMETER, LOCAL(4), // 340_0_handler
  var_undefined, LOCAL(5), // 341_0_argument
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
  POS(343, 13),
  POS(343, 30),
  POS(343, 3),
  POS(343, 8),
  POS(344, 3)
};

static TAB_NUM t_func_std_types__io_task___on_error[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 346_31_self
  LOCAL(2), // 346_36_handler
  // self.error_handler_of handler
  LET, -1, LOCAL(1), var_error_handler_of, LOCAL(2), LOCAL(1),
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(347, 4),
  POS(348, 3)
};

static TAB_NUM t_func_std_types__io_task___on_cancel[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 350_32_self
  LOCAL(2), // 350_37_handler
  // self.cancel_handler_of handler
  LET, -1, LOCAL(1), var_cancel_handler_of, LOCAL(2), LOCAL(1),
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(351, 4),
  POS(352, 3)
};

static TAB_NUM t_func_std_types__io_task___load[] = {
  3, // locals
  3, // parameters
  LOCAL(1), // 356_27_self
  LOCAL(2), // 356_32_my_filename
  LOCAL(3), // 356_44_continuation
  // perform_io self load_request my_filename continuation
  var_perform_io, 4, LOCAL(1), func_load_request, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(357, 3)
};

static TAB_NUM t_func_load_request[] = {
  1, // locals
  3, // parameters
  var_359_16_task,
  var_359_21_io,
  var_359_24_filename,
  // is_cancelled: # we must not start an I/O operation!
  var_is_cancelled, 1, var_359_16_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_task_is_cancelled, lambda_16, IO_TAIL_CALL,
  POS(361, 12),
  POS(360, 5)
};

static TAB_NUM t_lambda_task_is_cancelled[] = {
  0, // locals
  0, // parameters
  // performed_io task io "" # we didn't read a single byte ...
  var_performed_io, 3, var_359_16_task, var_359_21_io, string_3, TAIL_CALL,
  POS(362, 9)
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // open! $fd filename "r"
  var_open, 2, var_359_24_filename, str_r, IO_CALL(1), var_364_7_fd,
  // is_an_error:
  var_is_an_error, 1, var_364_7_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_fd_is_an_error, lambda_17, TAIL_CALL,
  POS(364, 9),
  POS(366, 14),
  POS(365, 9)
};

static TAB_NUM t_lambda_fd_is_an_error[] = {
  2, // locals
  0, // parameters
  // !fd.additional_error_information_of "
  var_std__string, 3, str_load, var_359_24_filename, string_4, 1, LOCAL(2),
  // fd.additional_error_information_of "
  LET, -1, var_364_7_fd, var_additional_error_information_of, LOCAL(2), var_364_7_fd,
  // performed_io task io fd
  var_performed_io, 3, var_359_16_task, var_359_21_io, var_364_7_fd, TAIL_CALL,
  POS(367, 13),
  POS(367, 14),
  POS(369, 13)
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // start_reading_from &io fd
  var_start_reading_from, 2, var_359_21_io, var_364_7_fd, 1, var_359_21_io,
  // tuple(fd "")
  var_tuple, 2, var_364_7_fd, string_3, 1, LOCAL(1),
  // check_io task io check_load_request tuple(fd "")
  var_check_io, 4, var_359_16_task, var_359_21_io, func_check_load_request, LOCAL(1), TAIL_CALL,
  POS(371, 13),
  POS(372, 49),
  POS(372, 13)
};

static TAB_NUM t_func_check_load_request[] = {
  1, // locals
  3, // parameters
  var_374_22_task,
  var_374_27_events,
  var_374_34_argument,
  // argument $fd $buf
  var_374_34_argument, 0, 2, var_375_10_fd, var_375_14_buf,
  // is_cancelled: # we are called as a start-I/O-handler!
  var_is_cancelled, 1, var_374_22_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_task_is_cancelled, lambda_19, IO_TAIL_CALL,
  POS(375, 5),
  POS(377, 12),
  POS(376, 5)
};

static TAB_NUM t_lambda_2_task_is_cancelled[] = {
  2, // locals
  0, // parameters
  // $io events
  LET, 1, var_374_27_events, 1, LOCAL(2),
  // stop_reading_from &io fd
  var_stop_reading_from, 2, LOCAL(2), var_375_10_fd, 1, LOCAL(2),
  // try $_ignore_error: close! fd
  var_try, 1, lambda_18, IO_CALL(1), LOCAL(1),
  // performed_io task io buf # return the partial read data
  var_performed_io, 3, var_374_22_task, LOCAL(2), var_375_14_buf, TAIL_CALL,
  POS(378, 9),
  POS(379, 9),
  POS(380, 9),
  POS(381, 9)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_375_10_fd, IO_TAIL_CALL,
  POS(380, 29)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  // for_each events
  var_for_each, 3, var_374_27_events, lambda_20, lambda_25, TAIL_CALL,
  POS(383, 9)
};

static TAB_NUM t_lambda_20[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 384_3_event
  // event $type $efd $data
  LOCAL(1), 0, 3, LOCAL(2), var_385_13_efd, var_385_18_data,
  // case type
  var_case, 6, LOCAL(2), var_READ, lambda_READ, var_READ_ERROR, lambda_READ_ERROR, var_next, TAIL_CALL,
  POS(385, 13),
  POS(386, 13)
};

static TAB_NUM t_lambda_READ[] = {
  1, // locals
  0, // parameters
  // efd == fd:
  var_std__equal, 2, var_385_13_efd, var_375_10_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21, var_next, TAIL_CALL,
  POS(389, 19),
  POS(388, 17)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // data == "":
  var_std__equal, 2, var_385_18_data, string_3, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_22, lambda_23, TAIL_CALL,
  POS(391, 23),
  POS(390, 21)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  // complete_io task complete_load_request argument
  var_complete_io, 3, var_374_22_task, func_complete_load_request, var_374_34_argument, TAIL_CALL,
  POS(392, 25)
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  0, // parameters
  // append(buf data))
  var_append, 2, var_375_14_buf, var_385_18_data, 1, LOCAL(1),
  // tuple(fd append(buf data))
  var_tuple, 2, var_375_10_fd, LOCAL(1), 1, LOCAL(2),
  // recheck_io
  var_recheck_io, 3, var_374_22_task, func_check_load_request, LOCAL(2), TAIL_CALL,
  POS(395, 60),
  POS(395, 51),
  POS(394, 25)
};

static TAB_NUM t_lambda_READ_ERROR[] = {
  1, // locals
  0, // parameters
  // efd == fd:
  var_std__equal, 2, var_385_13_efd, var_375_10_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_24, var_next, TAIL_CALL,
  POS(399, 19),
  POS(398, 17)
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  0, // parameters
  // tuple(fd data)
  var_tuple, 2, var_375_10_fd, var_385_18_data, 1, LOCAL(1),
  // complete_io task try_close_file tuple(fd data)
  var_complete_io, 3, var_374_22_task, func_try_close_file, LOCAL(1), TAIL_CALL,
  POS(400, 53),
  POS(400, 21)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  // recheck_io task check_load_request argument
  var_recheck_io, 3, var_374_22_task, func_check_load_request, var_374_34_argument, TAIL_CALL,
  POS(404, 13)
};

static TAB_NUM t_func_complete_load_request[] = {
  5, // locals
  3, // parameters
  LOCAL(2), // 406_25_task
  LOCAL(3), // 406_30_io
  LOCAL(4), // 406_33_argument
  // argument $fd $buf
  LOCAL(4), 0, 2, var_407_10_fd, LOCAL(5),
  // stop_reading_from &io fd
  var_stop_reading_from, 2, LOCAL(3), var_407_10_fd, 1, LOCAL(3),
  // try $_ignore_error: close! fd
  var_try, 1, lambda_26, IO_CALL(1), LOCAL(1),
  // performed_io task io buf
  var_performed_io, 3, LOCAL(2), LOCAL(3), LOCAL(5), TAIL_CALL,
  POS(407, 5),
  POS(408, 5),
  POS(409, 5),
  POS(410, 5)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_407_10_fd, IO_TAIL_CALL,
  POS(409, 25)
};

static TAB_NUM t_func_try_close_file[] = {
  5, // locals
  3, // parameters
  LOCAL(2), // 412_18_task
  LOCAL(3), // 412_23_io
  LOCAL(4), // 412_26_argument
  // argument $fd $read_error
  LOCAL(4), 0, 2, var_413_10_fd, LOCAL(5),
  // stop_reading_from &io fd
  var_stop_reading_from, 2, LOCAL(3), var_413_10_fd, 1, LOCAL(3),
  // try $_ignore_error: close! fd
  var_try, 1, lambda_27, IO_CALL(1), LOCAL(1),
  // performed_io task io read_error # return the error returned from <read>
  var_performed_io, 3, LOCAL(2), LOCAL(3), LOCAL(5), TAIL_CALL,
  POS(413, 5),
  POS(414, 5),
  POS(415, 5),
  POS(416, 5)
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_413_10_fd, IO_TAIL_CALL,
  POS(415, 25)
};

static TAB_NUM t_func_std_types__io_task___save[] = {
  5, // locals
  4, // parameters
  LOCAL(2), // 418_27_self
  LOCAL(3), // 418_32_my_filename
  LOCAL(4), // 418_44_my_data
  LOCAL(5), // 418_52_continuation
  // tuple(my_filename my_data) continuation
  var_tuple, 2, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // perform_io self save_request tuple(my_filename my_data) continuation
  var_perform_io, 4, LOCAL(2), func_save_request, LOCAL(1), LOCAL(5), TAIL_CALL,
  POS(419, 32),
  POS(419, 3)
};

static TAB_NUM t_func_save_request[] = {
  2, // locals
  3, // parameters
  var_421_16_task,
  var_421_21_io,
  LOCAL(2), // 421_24_argument
  // argument $filename $data
  LOCAL(2), 0, 2, var_422_10_filename, var_422_20_data,
  // is_cancelled: # we must not start an I/O operation!
  var_is_cancelled, 1, var_421_16_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3_task_is_cancelled, lambda_28, IO_TAIL_CALL,
  POS(422, 5),
  POS(424, 12),
  POS(423, 5)
};

static TAB_NUM t_lambda_3_task_is_cancelled[] = {
  0, // locals
  0, // parameters
  // performed_io task io data # we didn't write a single byte ...
  var_performed_io, 3, var_421_16_task, var_421_21_io, var_422_20_data, TAIL_CALL,
  POS(425, 9)
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // open! $fd filename "w"
  var_open, 2, var_422_10_filename, str_w, IO_CALL(1), var_427_7_fd,
  // is_an_error:
  var_is_an_error, 1, var_427_7_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_fd_is_an_error, lambda_29, TAIL_CALL,
  POS(427, 9),
  POS(429, 14),
  POS(428, 9)
};

static TAB_NUM t_lambda_2_fd_is_an_error[] = {
  2, // locals
  0, // parameters
  // !fd.additional_error_information_of "
  var_std__string, 3, str_save, var_422_10_filename, string_4, 1, LOCAL(2),
  // fd.additional_error_information_of "
  LET, -1, var_427_7_fd, var_additional_error_information_of, LOCAL(2), var_427_7_fd,
  // performed_io task io fd
  var_performed_io, 3, var_421_16_task, var_421_21_io, var_427_7_fd, TAIL_CALL,
  POS(430, 13),
  POS(430, 14),
  POS(432, 13)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  // write_to &io fd data
  var_write_to, 3, var_421_21_io, var_427_7_fd, var_422_20_data, 1, var_421_21_io,
  // check_io task io check_save_request fd
  var_check_io, 4, var_421_16_task, var_421_21_io, func_check_save_request, var_427_7_fd, TAIL_CALL,
  POS(434, 13),
  POS(435, 13)
};

static TAB_NUM t_func_check_save_request[] = {
  1, // locals
  3, // parameters
  var_437_22_task,
  var_437_27_events,
  var_437_34_fd,
  // is_cancelled: # we are called as a start-I/O-handler!
  var_is_cancelled, 1, var_437_22_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_4_task_is_cancelled, lambda_31, IO_TAIL_CALL,
  POS(439, 12),
  POS(438, 5)
};

static TAB_NUM t_lambda_4_task_is_cancelled[] = {
  3, // locals
  0, // parameters
  // $io events
  LET, 1, var_437_27_events, 1, LOCAL(2),
  // cancel_write_to &io $unwritten_text fd
  var_cancel_write_to, 2, LOCAL(2), var_437_34_fd, 2, LOCAL(2), LOCAL(3),
  // try $_ignore_error: close! fd
  var_try, 1, lambda_30, IO_CALL(1), LOCAL(1),
  // performed_io task io unwritten_text # return the not yet written text
  var_performed_io, 3, var_437_22_task, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(440, 9),
  POS(441, 9),
  POS(442, 9),
  POS(443, 9)
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_437_34_fd, IO_TAIL_CALL,
  POS(442, 29)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  // for_each events
  var_for_each, 3, var_437_27_events, lambda_32, lambda_35, TAIL_CALL,
  POS(445, 9)
};

static TAB_NUM t_lambda_32[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 446_3_event
  // event $type $efd $data
  LOCAL(1), 0, 3, LOCAL(2), var_447_13_efd, var_447_18_data,
  // case type
  var_case, 6, LOCAL(2), var_WRITE_COMPLETED, lambda_WRITE_COMPLETED, var_WRITE_ERROR, lambda_WRITE_ERROR, var_next, TAIL_CALL,
  POS(447, 13),
  POS(448, 13)
};

static TAB_NUM t_lambda_WRITE_COMPLETED[] = {
  1, // locals
  0, // parameters
  // efd == fd:
  var_std__equal, 2, var_447_13_efd, var_437_34_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_33, var_next, TAIL_CALL,
  POS(451, 19),
  POS(450, 17)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  // complete_io task complete_save_request fd
  var_complete_io, 3, var_437_22_task, func_complete_save_request, var_437_34_fd, TAIL_CALL,
  POS(452, 21)
};

static TAB_NUM t_lambda_WRITE_ERROR[] = {
  1, // locals
  0, // parameters
  // efd == fd:
  var_std__equal, 2, var_447_13_efd, var_437_34_fd, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, var_next, TAIL_CALL,
  POS(456, 19),
  POS(455, 17)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // tuple(fd data)
  var_tuple, 2, var_437_34_fd, var_447_18_data, 1, LOCAL(1),
  // complete_io task try_close_file tuple(fd data)
  var_complete_io, 3, var_437_22_task, func_2_try_close_file, LOCAL(1), TAIL_CALL,
  POS(457, 53),
  POS(457, 21)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  // recheck_io task check_save_request fd
  var_recheck_io, 3, var_437_22_task, func_check_save_request, var_437_34_fd, TAIL_CALL,
  POS(461, 13)
};

static TAB_NUM t_func_complete_save_request[] = {
  3, // locals
  3, // parameters
  LOCAL(2), // 463_25_task
  LOCAL(3), // 463_30_io
  var_463_33_fd,
  // try $_ignore_error: close! fd
  var_try, 1, lambda_36, IO_CALL(1), LOCAL(1),
  // performed_io task io undefined
  var_performed_io, 3, LOCAL(2), LOCAL(3), var_undefined, TAIL_CALL,
  POS(464, 5),
  POS(465, 5)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_463_33_fd, IO_TAIL_CALL,
  POS(464, 25)
};

static TAB_NUM t_func_2_try_close_file[] = {
  5, // locals
  3, // parameters
  LOCAL(2), // 467_18_task
  LOCAL(3), // 467_23_io
  LOCAL(4), // 467_26_argument
  // argument $fd $write_error
  LOCAL(4), 0, 2, var_468_10_fd, LOCAL(5),
  // try $_ignore_error: close! fd
  var_try, 1, lambda_37, IO_CALL(1), LOCAL(1),
  // performed_io task io write_error # return the error returned from <write>
  var_performed_io, 3, LOCAL(2), LOCAL(3), LOCAL(5), TAIL_CALL,
  POS(468, 5),
  POS(469, 5),
  POS(470, 5)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  // close! fd
  var_close, 1, var_468_10_fd, IO_TAIL_CALL,
  POS(469, 25)
};

static TAB_NUM t_func_std_types__io_task___read_from[] = {
  5, // locals
  4, // parameters
  LOCAL(2), // 476_0_self
  LOCAL(3), // 477_0_my_fd
  LOCAL(4), // 478_0_my_length
  LOCAL(5), // 479_0_continuation
  // tuple(my_fd my_length) continuation
  var_tuple, 2, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // perform_io self start_read_request tuple(my_fd my_length) continuation
  var_perform_io, 4, LOCAL(2), func_start_read_request, LOCAL(1), LOCAL(5), TAIL_CALL,
  POS(481, 38),
  POS(481, 3)
};

static TAB_NUM t_func_start_read_request[] = {
  1, // locals
  3, // parameters
  var_483_22_task,
  var_483_27_io,
  var_483_30_argument,
  // is_cancelled: # we must not start an I/O operation!
  var_is_cancelled, 1, var_483_22_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_5_task_is_cancelled, lambda_38, TAIL_CALL,
  POS(485, 12),
  POS(484, 5)
};

static TAB_NUM t_lambda_5_task_is_cancelled[] = {
  0, // locals
  0, // parameters
  // performed_io task io "" # we didn't read a single byte ...
  var_performed_io, 3, var_483_22_task, var_483_27_io, string_3, TAIL_CALL,
  POS(486, 9)
};

static TAB_NUM t_lambda_38[] = {
  3, // locals
  0, // parameters
  // argument $fd $length
  var_483_30_argument, 0, 2, LOCAL(2), LOCAL(3),
  // start_reading_from &io fd
  var_start_reading_from, 2, var_483_27_io, LOCAL(2), 1, var_483_27_io,
  // tuple(fd length "")
  var_tuple, 3, LOCAL(2), LOCAL(3), string_3, 1, LOCAL(1),
  // check_io task io check_read_request tuple(fd length "")
  var_check_io, 4, var_483_22_task, var_483_27_io, func_check_read_request, LOCAL(1), TAIL_CALL,
  POS(488, 9),
  POS(489, 9),
  POS(490, 45),
  POS(490, 9)
};

static TAB_NUM t_func_check_read_request[] = {
  1, // locals
  3, // parameters
  var_492_22_task,
  var_492_27_events,
  var_492_34_argument,
  // argument $fd $length $buf
  var_492_34_argument, 0, 3, var_493_10_fd, var_493_14_length, var_493_22_buf,
  // is_cancelled: # we are called as a start-I/O-handler!
  var_is_cancelled, 1, var_492_22_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6_task_is_cancelled, lambda_39, TAIL_CALL,
  POS(493, 5),
  POS(495, 12),
  POS(494, 5)
};

static TAB_NUM t_lambda_6_task_is_cancelled[] = {
  1, // locals
  0, // parameters
  // $io events
  LET, 1, var_492_27_events, 1, LOCAL(1),
  // stop_reading_from &io fd
  var_stop_reading_from, 2, LOCAL(1), var_493_10_fd, 1, LOCAL(1),
  // performed_io task io buf # return the partial read data
  var_performed_io, 3, var_492_22_task, LOCAL(1), var_493_22_buf, TAIL_CALL,
  POS(496, 9),
  POS(497, 9),
  POS(498, 9)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  // for_each events
  var_for_each, 3, var_492_27_events, lambda_40, lambda_47, TAIL_CALL,
  POS(500, 9)
};

static TAB_NUM t_lambda_40[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 501_3_event
  // event $type $efd $data
  LOCAL(3), 0, 3, LOCAL(4), var_502_13_efd, var_502_18_data,
  // type == READ && efd == fd next:
  var_std__equal, 2, LOCAL(4), var_READ, 1, LOCAL(1),
  // type == READ && efd == fd next:
  var_std__and, 2, LOCAL(1), lambda_41, 1, LOCAL(2),
  // if_not
  var_if_not, 3, LOCAL(2), var_next, lambda_42, TAIL_CALL,
  POS(502, 13),
  POS(504, 15),
  POS(504, 15),
  POS(503, 13)
};

static TAB_NUM t_lambda_41[] = {
  1, // locals
  0, // parameters
  // efd == fd next:
  var_std__equal, 2, var_502_13_efd, var_493_10_fd, 1, LOCAL(1),
  // efd == fd next:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(504, 31),
  POS(504, 31)
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // data == "":
  var_std__equal, 2, var_502_18_data, string_3, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_43, lambda_44, TAIL_CALL,
  POS(506, 19),
  POS(505, 17)
};

static TAB_NUM t_lambda_43[] = {
  1, // locals
  0, // parameters
  // tuple(fd buf)
  var_tuple, 2, var_493_10_fd, var_493_22_buf, 1, LOCAL(1),
  // complete_io task complete_read_request tuple(fd buf)
  var_complete_io, 3, var_492_22_task, func_complete_read_request, LOCAL(1), TAIL_CALL,
  POS(507, 60),
  POS(507, 21)
};

static TAB_NUM t_lambda_44[] = {
  3, // locals
  0, // parameters
  // append &buf data
  var_append, 2, var_493_22_buf, var_502_18_data, 1, var_493_22_buf,
  // length_of(buf) >= length:
  var_length_of, 1, var_493_22_buf, 1, LOCAL(1),
  // length_of(buf) >= length:
  var_std__less, 2, LOCAL(1), var_493_14_length, 1, LOCAL(2),
  // length_of(buf) >= length:
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_45, lambda_46, TAIL_CALL,
  POS(509, 21),
  POS(511, 23),
  POS(511, 23),
  POS(511, 23),
  POS(510, 21)
};

static TAB_NUM t_lambda_45[] = {
  1, // locals
  0, // parameters
  // tuple(fd buf)
  var_tuple, 2, var_493_10_fd, var_493_22_buf, 1, LOCAL(1),
  // complete_io task complete_read_request tuple(fd buf)
  var_complete_io, 3, var_492_22_task, func_complete_read_request, LOCAL(1), TAIL_CALL,
  POS(512, 64),
  POS(512, 25)
};

static TAB_NUM t_lambda_46[] = {
  1, // locals
  0, // parameters
  // tuple(fd length buf)
  var_tuple, 3, var_493_10_fd, var_493_14_length, var_493_22_buf, 1, LOCAL(1),
  // recheck_io task check_read_request tuple(fd length buf)
  var_recheck_io, 3, var_492_22_task, func_check_read_request, LOCAL(1), TAIL_CALL,
  POS(514, 60),
  POS(514, 25)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  // recheck_io task check_read_request argument
  var_recheck_io, 3, var_492_22_task, func_check_read_request, var_492_34_argument, TAIL_CALL,
  POS(516, 13)
};

static TAB_NUM t_func_complete_read_request[] = {
  5, // locals
  3, // parameters
  LOCAL(1), // 518_25_task
  LOCAL(2), // 518_30_io
  LOCAL(3), // 518_33_argument
  // argument $fd $buf
  LOCAL(3), 0, 2, LOCAL(4), LOCAL(5),
  // stop_reading_from &io fd
  var_stop_reading_from, 2, LOCAL(2), LOCAL(4), 1, LOCAL(2),
  // performed_io task io buf
  var_performed_io, 3, LOCAL(1), LOCAL(2), LOCAL(5), TAIL_CALL,
  POS(519, 5),
  POS(520, 5),
  POS(521, 5)
};

static TAB_NUM t_func_std_types__io_task___write_to[] = {
  5, // locals
  4, // parameters
  LOCAL(2), // 523_31_self
  LOCAL(3), // 523_36_my_fd
  LOCAL(4), // 523_42_my_text
  LOCAL(5), // 523_50_continuation
  // tuple(my_fd my_text) continuation
  var_tuple, 2, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // perform_io self write_request tuple(my_fd my_text) continuation
  var_perform_io, 4, LOCAL(2), func_write_request, LOCAL(1), LOCAL(5), TAIL_CALL,
  POS(524, 33),
  POS(524, 3)
};

static TAB_NUM t_func_write_request[] = {
  2, // locals
  3, // parameters
  var_526_17_task,
  var_526_22_io,
  LOCAL(2), // 526_25_argument
  // argument $fd $text
  LOCAL(2), 0, 2, var_527_10_fd, var_527_14_text,
  // is_cancelled: # we must not start an I/O operation!
  var_is_cancelled, 1, var_526_17_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_7_task_is_cancelled, lambda_48, TAIL_CALL,
  POS(527, 5),
  POS(529, 12),
  POS(528, 5)
};

static TAB_NUM t_lambda_7_task_is_cancelled[] = {
  0, // locals
  0, // parameters
  // performed_io task io text # we didn't write a single byte ...
  var_performed_io, 3, var_526_17_task, var_526_22_io, var_527_14_text, TAIL_CALL,
  POS(530, 9)
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  // write_to &io fd text
  var_write_to, 3, var_526_22_io, var_527_10_fd, var_527_14_text, 1, var_526_22_io,
  // check_io task io check_write_request fd
  var_check_io, 4, var_526_17_task, var_526_22_io, func_check_write_request, var_527_10_fd, TAIL_CALL,
  POS(532, 9),
  POS(533, 9)
};

static TAB_NUM t_func_check_write_request[] = {
  1, // locals
  3, // parameters
  var_535_23_task,
  var_535_28_events,
  var_535_35_fd,
  // is_cancelled: # we are called as a start-I/O-handler!
  var_is_cancelled, 1, var_535_23_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8_task_is_cancelled, lambda_49, TAIL_CALL,
  POS(537, 12),
  POS(536, 5)
};

static TAB_NUM t_lambda_8_task_is_cancelled[] = {
  2, // locals
  0, // parameters
  // $io events
  LET, 1, var_535_28_events, 1, LOCAL(1),
  // cancel_write_to &io $unwritten_text fd
  var_cancel_write_to, 2, LOCAL(1), var_535_35_fd, 2, LOCAL(1), LOCAL(2),
  // performed_io task io unwritten_text # return the not yet written text
  var_performed_io, 3, var_535_23_task, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(538, 9),
  POS(539, 9),
  POS(540, 9)
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  // for_each events
  var_for_each, 3, var_535_28_events, lambda_50, lambda_53, TAIL_CALL,
  POS(542, 9)
};

static TAB_NUM t_lambda_50[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 543_3_event
  // event $type $efd $_data
  LOCAL(3), 0, 3, LOCAL(4), var_544_13_efd, LOCAL(1),
  // type == WRITE_COMPLETED && efd == fd:
  var_std__equal, 2, LOCAL(4), var_WRITE_COMPLETED, 1, LOCAL(1),
  // type == WRITE_COMPLETED && efd == fd:
  var_std__and, 2, LOCAL(1), lambda_51, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_52, var_next, TAIL_CALL,
  POS(544, 13),
  POS(546, 15),
  POS(546, 15),
  POS(545, 13)
};

static TAB_NUM t_lambda_51[] = {
  1, // locals
  0, // parameters
  // efd == fd:
  var_std__equal, 2, var_544_13_efd, var_535_35_fd, 1, LOCAL(1),
  // efd == fd:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(546, 42),
  POS(546, 42)
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  // checked_io task undefined
  var_checked_io, 2, var_535_23_task, var_undefined, TAIL_CALL,
  POS(547, 17)
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  // recheck_io task check_write_request fd
  var_recheck_io, 3, var_535_23_task, func_check_write_request, var_535_35_fd, TAIL_CALL,
  POS(550, 13)
};

static TAB_NUM t_func_std_types__io_task___join_process[] = {
  3, // locals
  3, // parameters
  LOCAL(1), // 552_35_self
  LOCAL(2), // 552_40_my_pid
  LOCAL(3), // 552_47_continuation
  // perform_io self join_process_request my_pid continuation
  var_perform_io, 4, LOCAL(1), func_join_process_request, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(553, 3)
};

static TAB_NUM t_func_join_process_request[] = {
  3, // locals
  3, // parameters
  LOCAL(1), // 555_24_task
  LOCAL(2), // 555_29_io
  LOCAL(3), // 555_32_pid
  // join_process &io pid
  var_join_process, 2, LOCAL(2), LOCAL(3), 1, LOCAL(2),
  // check_io task io join_process_request_pending pid
  var_check_io, 4, LOCAL(1), LOCAL(2), func_join_process_request_pending, LOCAL(3), TAIL_CALL,
  POS(556, 5),
  POS(557, 5)
};

static TAB_NUM t_func_join_process_request_pending[] = {
  1, // locals
  3, // parameters
  var_559_32_task,
  LOCAL(1), // 559_37_events
  var_559_44_pid,
  // for_each events
  var_for_each, 3, LOCAL(1), lambda_54, lambda_57, TAIL_CALL,
  POS(560, 5)
};

static TAB_NUM t_lambda_54[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 561_3_event
  // event $type $epid $status
  LOCAL(3), 0, 3, LOCAL(4), var_562_13_epid, var_562_19_status,
  // type == PROCESS_JOINED && epid == pid:
  var_std__equal, 2, LOCAL(4), var_PROCESS_JOINED, 1, LOCAL(1),
  // type == PROCESS_JOINED && epid == pid:
  var_std__and, 2, LOCAL(1), lambda_55, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_56, var_next, TAIL_CALL,
  POS(562, 9),
  POS(564, 11),
  POS(564, 11),
  POS(563, 9)
};

static TAB_NUM t_lambda_55[] = {
  1, // locals
  0, // parameters
  // epid == pid:
  var_std__equal, 2, var_562_13_epid, var_559_44_pid, 1, LOCAL(1),
  // epid == pid:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(564, 37),
  POS(564, 37)
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  // checked_io task status
  var_checked_io, 2, var_559_32_task, var_562_19_status, TAIL_CALL,
  POS(565, 13)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  // recheck_io task join_process_request_pending pid
  var_recheck_io, 3, var_559_32_task, func_join_process_request_pending, var_559_44_pid, TAIL_CALL,
  POS(568, 9)
};

static TAB_NUM t_func_std_types__io_task___catch_signal[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 570_35_self
  LOCAL(2), // 570_40_continuation
  // perform_io self catch_signal_request undefined continuation
  var_perform_io, 4, LOCAL(1), func_catch_signal_request, var_undefined, LOCAL(2), TAIL_CALL,
  POS(571, 3)
};

static TAB_NUM t_func_catch_signal_request[] = {
  3, // locals
  3, // parameters
  LOCAL(2), // 573_24_task
  LOCAL(3), // 573_29_io
  LOCAL(1),
  // start_catching_signals &io
  var_start_catching_signals, 1, LOCAL(3), 1, LOCAL(3),
  // check_io task io catch_signal_request_pending undefined
  var_check_io, 4, LOCAL(2), LOCAL(3), func_catch_signal_request_pending, var_undefined, TAIL_CALL,
  POS(574, 5),
  POS(575, 5)
};

static TAB_NUM t_func_catch_signal_request_pending[] = {
  1, // locals
  3, // parameters
  var_577_32_task,
  var_577_37_events,
  LOCAL(1),
  // is_cancelled:
  var_is_cancelled, 1, var_577_32_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_9_task_is_cancelled, lambda_58, TAIL_CALL,
  POS(579, 12),
  POS(578, 5)
};

static TAB_NUM t_lambda_9_task_is_cancelled[] = {
  0, // locals
  0, // parameters
  // complete_io task cancel_catch_signal_request undefined
  var_complete_io, 3, var_577_32_task, func_cancel_catch_signal_request, var_undefined, TAIL_CALL,
  POS(580, 9)
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  0, // parameters
  // $signals empty_list
  LET, 1, var_empty_list, 1, var_582_1_signals,
  // for_each events
  var_for_each, 3, var_577_37_events, lambda_59, lambda_61, TAIL_CALL,
  POS(582, 9),
  POS(583, 9)
};

static TAB_NUM t_lambda_59[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 584_3_event
  // event $type $_dummy $signal
  LOCAL(2), 0, 3, LOCAL(3), LOCAL(1), var_585_21_signal,
  // type == SIGNAL:
  var_std__equal, 2, LOCAL(3), var_SIGNAL, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_60, var_next, TAIL_CALL,
  POS(585, 13),
  POS(587, 15),
  POS(586, 13)
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  0, // parameters
  // push &signals signal
  var_push, 2, var_582_1_signals, var_585_21_signal, 1, var_582_1_signals,
  // next
  var_next, 0, TAIL_CALL,
  POS(588, 17),
  POS(589, 17)
};

static TAB_NUM t_lambda_61[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_582_1_signals, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_signals_is_empty, lambda_62, TAIL_CALL,
  POS(593, 23),
  POS(592, 13)
};

static TAB_NUM t_lambda_signals_is_empty[] = {
  0, // locals
  0, // parameters
  // recheck_io task catch_signal_request_pending undefined
  var_recheck_io, 3, var_577_32_task, func_catch_signal_request_pending, var_undefined, TAIL_CALL,
  POS(594, 17)
};

static TAB_NUM t_lambda_62[] = {
  0, // locals
  0, // parameters
  // complete_io task catch_signal_request_completed signals
  var_complete_io, 3, var_577_32_task, func_catch_signal_request_completed, var_582_1_signals, TAIL_CALL,
  POS(596, 17)
};

static TAB_NUM t_func_cancel_catch_signal_request[] = {
  3, // locals
  3, // parameters
  LOCAL(2), // 598_31_task
  LOCAL(3), // 598_36_io
  LOCAL(1),
  // stop_catching_signals &io
  var_stop_catching_signals, 1, LOCAL(3), 1, LOCAL(3),
  // performed_io task io
  var_performed_io, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(599, 5),
  POS(600, 5)
};

static TAB_NUM t_func_catch_signal_request_completed[] = {
  3, // locals
  3, // parameters
  LOCAL(1), // 602_34_task
  LOCAL(2), // 602_39_io
  LOCAL(3), // 602_42_signals
  // stop_catching_signals &io
  var_stop_catching_signals, 1, LOCAL(2), 1, LOCAL(2),
  // performed_io task io signals
  var_performed_io, 3, LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(603, 5),
  POS(604, 5)
};

static TAB_NUM t_func_std_types__io_task___fork[] = {
  6, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 608_0_self
  MANDATORY_PARAMETER, LOCAL(4), // 609_0_task
  MANDATORY_PARAMETER, LOCAL(5), // 610_0_continuation
  var_undefined, LOCAL(6), // 611_0_argument
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
  POS(613, 14),
  POS(613, 31),
  POS(613, 3),
  POS(613, 9),
  POS(614, 3)
};

static TAB_NUM t_func_std_types__io_task___exit[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 618_0_self
  var_EXIT_SUCCESS, LOCAL(2), // 619_0_status
  // tuple self EXIT undefined status undefined
  var_tuple, 5, LOCAL(1), uni_EXIT, var_undefined, LOCAL(2), var_undefined, TAIL_CALL,
  POS(621, 3)
};

static TAB_NUM t_func_std__io_task_manager[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 628_0_first_task
  MANDATORY_PARAMETER, LOCAL(4), // 629_0_start
  var_undefined, LOCAL(5), // 630_0_start_arguments
  // $exit_status EXIT_SUCCESS
  LET, 1, var_EXIT_SUCCESS, 1, var_632_1_exit_status,
  // $io std_types::io
  LET, 1, var_std_types__io, 1, var_633_1_io,
  // $updated_requests empty_list
  LET, 1, var_empty_list, 1, var_634_1_updated_requests,
  // $new_requests empty_list
  LET, 1, var_empty_list, 1, var_635_1_new_requests,
  // $cancellations empty_key_order_set
  LET, 1, var_empty_key_order_set, 1, var_636_1_cancellations,
  // $sent_messages empty_key_order_table
  LET, 1, var_empty_key_order_table, 1, var_637_1_sent_messages,
  // $removed_children empty_key_order_table
  LET, 1, var_empty_key_order_table, 1, var_638_1_removed_children,
  // $log_message ""
  LET, 1, string_3, 1, var_639_1_log_message,
  // $events empty_list
  LET, 1, var_empty_list, 1, var_640_1_events,
  // .id_of 1) COMPUTE undefined start_arguments start))
  LET, -1, LOCAL(3), var_id_of, num_1, LOCAL(1),
  // tuple(first_task(.id_of 1) COMPUTE undefined start_arguments start))
  var_tuple, 5, LOCAL(1), uni_COMPUTE, var_undefined, LOCAL(5), LOCAL(4), 1, LOCAL(2),
  // $requests
  var_list, 1, LOCAL(2), 1, var_641_1_requests,
  // $current_task_id 1
  LET, 1, num_1, 1, var_643_1_current_task_id,
  // $iteration_no 0
  LET, 1, num_0, 1, var_644_1_iteration_no,
  // loop:
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(632, 3),
  POS(633, 3),
  POS(634, 3),
  POS(635, 3),
  POS(636, 3),
  POS(637, 3),
  POS(638, 3),
  POS(639, 3),
  POS(640, 3),
  POS(642, 27),
  POS(642, 10),
  POS(641, 3),
  POS(643, 3),
  POS(644, 3),
  POS(648, 3)
};

static TAB_NUM t_lambda_loop[] = {
  4, // locals
  0, // parameters
  // inc &iteration_no
  var_inc, 1, var_644_1_iteration_no, 1, var_644_1_iteration_no,
  // map &requests compute
  var_map, 2, var_641_1_requests, func_compute, 1, var_641_1_requests,
  // log_level >= 4 && removed_children.is_not_empty &log_message:
  var_std__less, 2, var_log_level, num_4, 1, LOCAL(1),
  // log_level >= 4 && removed_children.is_not_empty &log_message:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // log_level >= 4 && removed_children.is_not_empty &log_message:
  var_std__and, 2, LOCAL(2), lambda_63, 1, LOCAL(3),
  // update_if log_level >= 4 && removed_children.is_not_empty &log_message:
  var_update_if, 3, LOCAL(3), var_639_1_log_message, lambda_64, 1, var_639_1_log_message,
  // !removed_children empty_key_order_table
  LET, 1, var_empty_key_order_table, 1, var_638_1_removed_children,
  // for_each &requests
  var_for_each, 3, var_641_1_requests, lambda_70, lambda_71, 6, var_641_1_requests, var_643_1_current_task_id, var_635_1_new_requests, var_637_1_sent_messages, var_636_1_cancellations, var_639_1_log_message,
  // is_empty)
  var_is_empty, 1, var_637_1_sent_messages, 1, LOCAL(1),
  // $do_receive_messages not(sent_messages.is_empty)
  var_not, 1, LOCAL(1), 1, var_693_1_do_receive_messages,
  // is_empty)
  var_is_empty, 1, var_636_1_cancellations, 1, LOCAL(1),
  // $do_cancel_tasks not(cancellations.is_empty)
  var_not, 1, LOCAL(1), 1, var_694_1_do_cancel_tasks,
  // map &requests: (request)
  var_map, 2, var_641_1_requests, lambda_72, 1, var_641_1_requests,
  // !sent_messages empty_key_order_table
  LET, 1, var_empty_key_order_table, 1, var_637_1_sent_messages,
  // !cancellations empty_key_order_set
  LET, 1, var_empty_key_order_set, 1, var_636_1_cancellations,
  // queue_log_message_write !io
  func_queue_log_message_write, 0, 1, var_633_1_io,
  // !log_message ""
  LET, 1, string_3, 1, var_639_1_log_message,
  // for_each &requests !io
  var_for_each, 3, var_641_1_requests, lambda_75, lambda_76, IO_CALL(2), var_641_1_requests, var_633_1_io,
  // !updated_requests empty_list
  LET, 1, var_empty_list, 1, var_634_1_updated_requests,
  // is_not_empty
  var_is_not_empty, 1, var_635_1_new_requests, 1, LOCAL(1),
  // $something_to_do
  var_std__or, 2, LOCAL(1), lambda_77, 1, LOCAL(4),
  // maybe_exit! something_to_do
  func_maybe_exit, 1, LOCAL(4), IO_CALL(0),
  // get_and_check_events! !requests !io something_to_do
  func_get_and_check_events, 1, LOCAL(4), IO_CALL(2), var_641_1_requests, var_633_1_io,
  // for_each &requests !io !removed_children !log_message !exit_status
  var_for_each, 3, var_641_1_requests, lambda_78, lambda_88, IO_CALL(5), var_641_1_requests, var_633_1_io, var_638_1_removed_children, var_639_1_log_message, var_632_1_exit_status,
  // append &requests new_requests
  var_append, 2, var_641_1_requests, var_635_1_new_requests, 1, var_641_1_requests,
  // !new_requests empty_list
  LET, 1, var_empty_list, 1, var_635_1_new_requests,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(651, 5),
  POS(652, 5),
  POS(653, 15),
  POS(653, 15),
  POS(653, 15),
  POS(653, 5),
  POS(665, 5),
  POS(669, 5),
  POS(693, 44),
  POS(693, 5),
  POS(694, 40),
  POS(694, 5),
  POS(695, 5),
  POS(699, 5),
  POS(700, 5),
  POS(704, 5),
  POS(705, 5),
  POS(706, 5),
  POS(712, 5),
  POS(718, 22),
  POS(716, 5),
  POS(720, 5),
  POS(721, 5),
  POS(725, 5),
  POS(794, 5),
  POS(795, 5),
  POS(799, 5)
};

static TAB_NUM t_lambda_63[] = {
  1, // locals
  0, // parameters
  // is_not_empty &log_message:
  var_is_not_empty, 1, var_638_1_removed_children, 1, LOCAL(1),
  // removed_children.is_not_empty &log_message:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(653, 50),
  POS(653, 33)
};

static TAB_NUM t_lambda_64[] = {
  0, // locals
  0, // parameters
  // for_each removed_children
  var_for_each, 3, var_638_1_removed_children, lambda_65, lambda_69, TAIL_CALL,
  POS(654, 7)
};

static TAB_NUM t_lambda_65[] = {
  1, // locals
  2, // parameters
  var_655_3_parent_id,
  LOCAL(1), // 655_13_children
  // for_each children: (child_id)
  var_for_each, 2, LOCAL(1), lambda_66, TAIL_CALL,
  POS(656, 11)
};

static TAB_NUM t_lambda_66[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 656_20_child_id
  // parent_id != 0
  var_std__equal, 2, var_655_3_parent_id, num_0, 1, LOCAL(1),
  // parent_id != 0
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // $parent
  var_if, 3, LOCAL(2), lambda_67, lambda_68, 1, LOCAL(4),
  // "REMOVED TASK @(child_id)@(parent)"
  var_std__string, 3, str_REMOVED_TASK, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // append &log_message "REMOVED TASK @(child_id)@(parent)"
  var_append, 2, var_639_1_log_message, LOCAL(1), 1, var_639_1_log_message,
  // next
  var_next, 0, TAIL_CALL,
  POS(659, 17),
  POS(659, 17),
  POS(657, 13),
  POS(662, 33),
  POS(662, 13),
  POS(663, 13)
};

static TAB_NUM t_lambda_67[] = {
  1, // locals
  0, // parameters
  // " (parent: @(parent_id))@nl;"
  var_std__string, 3, str__parent, var_655_3_parent_id, string_5, 1, LOCAL(1),
  //  " (parent: @(parent_id))@nl;"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(660, 20),
  POS(660, 19)
};

static TAB_NUM t_lambda_68[] = {
  0, // locals
  0, // parameters
  //  "@nl;"
  LET, 1, string_6, TAIL_CALL,
  POS(661, 19)
};

static TAB_NUM t_lambda_69[] = {
  0, // locals
  0, // parameters
  //  log_message
  LET, 1, var_639_1_log_message, TAIL_CALL,
  POS(664, 11)
};

static TAB_NUM t_lambda_70[] = {
  7, // locals
  1, // parameters
  LOCAL(2), // 675_3_request
  // request $task $mode $body $argument $continuation
  LOCAL(2), 0, 5, LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), LOCAL(7),
  // collect_messages &task !sent_messages
  func_collect_messages, 1, LOCAL(3), 2, LOCAL(3), var_637_1_sent_messages,
  // collect_cancel_requests &task !cancellations
  func_collect_cancel_requests, 1, LOCAL(3), 2, LOCAL(3), var_636_1_cancellations,
  // collect_log_messages &task !log_message
  func_collect_log_messages, 1, LOCAL(3), 2, LOCAL(3), var_639_1_log_message,
  // create_new_tasks &task !current_task_id !new_requests
  func_create_new_tasks, 1, LOCAL(3), 3, LOCAL(3), var_643_1_current_task_id, var_635_1_new_requests,
  // tuple(task mode body argument continuation)
  var_tuple, 5, LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), LOCAL(7), 1, LOCAL(1),
  // push &updated_requests tuple(task mode body argument continuation)
  var_push, 2, var_634_1_updated_requests, LOCAL(1), 1, var_634_1_updated_requests,
  // next
  var_next, 0, TAIL_CALL,
  POS(676, 9),
  POS(677, 9),
  POS(678, 9),
  POS(679, 9),
  POS(680, 9),
  POS(681, 32),
  POS(681, 9),
  POS(682, 9)
};

static TAB_NUM t_lambda_71[] = {
  0, // locals
  0, // parameters
  // 
  LET, 6, var_634_1_updated_requests, var_643_1_current_task_id, var_635_1_new_requests, var_637_1_sent_messages, var_636_1_cancellations, var_639_1_log_message, TAIL_CALL,
  POS(683, 9)
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  1, // parameters
  var_695_16_request,
  // update_if do_receive_messages &request -> receive_messages(request)
  var_update_if, 3, var_693_1_do_receive_messages, var_695_16_request, lambda_73, 1, var_695_16_request,
  // update_if do_cancel_tasks &request -> maybe_mark_as_cancelled(request)
  var_update_if, 3, var_694_1_do_cancel_tasks, var_695_16_request, lambda_74, 1, var_695_16_request,
  // -> request
  LET, 1, var_695_16_request, TAIL_CALL,
  POS(696, 7),
  POS(697, 7),
  POS(698, 7)
};

static TAB_NUM t_lambda_73[] = {
  1, // locals
  0, // parameters
  // receive_messages(request)
  func_receive_messages, 1, var_695_16_request, 1, LOCAL(1),
  //  receive_messages(request)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(696, 49),
  POS(696, 48)
};

static TAB_NUM t_lambda_74[] = {
  1, // locals
  0, // parameters
  // maybe_mark_as_cancelled(request)
  func_maybe_mark_as_cancelled, 1, var_695_16_request, 1, LOCAL(1),
  //  maybe_mark_as_cancelled(request)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(697, 45),
  POS(697, 44)
};

static TAB_NUM t_lambda_75[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 707_3_request
  // start_io_operation! &request !io
  func_start_io_operation, 1, LOCAL(1), IO_CALL(2), LOCAL(1), var_633_1_io,
  // push &updated_requests request
  var_push, 2, var_634_1_updated_requests, LOCAL(1), 1, var_634_1_updated_requests,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(708, 9),
  POS(709, 9),
  POS(710, 9)
};

static TAB_NUM t_lambda_76[] = {
  0, // locals
  0, // parameters
  //  updated_requests io
  LET, 2, var_634_1_updated_requests, var_633_1_io, TAIL_CALL,
  POS(711, 9)
};

static TAB_NUM t_lambda_77[] = {
  1, // locals
  0, // parameters
  // any_of(requests has_something_to_do)
  var_any_of, 2, var_641_1_requests, func_has_something_to_do, 1, LOCAL(1),
  // any_of(requests has_something_to_do)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(719, 9),
  POS(719, 9)
};

static TAB_NUM t_lambda_78[] = {
  0, // locals
  1, // parameters
  var_726_3_request,
  // request $task $mode $body $argument $continuation
  var_726_3_request, 0, 5, var_727_9_task, var_727_15_mode, var_727_21_body, var_727_27_argument, var_727_37_continuation,
  // case mode
  var_case, 8, var_727_15_mode, uni_COMPLETE_IO, lambda_COMPLETE_IO, uni_EXIT, lambda_EXIT, uni_COMPUTE, lambda_COMPUTE, lambda_81, IO_TAIL_CALL,
  POS(727, 9),
  POS(728, 9)
};

static TAB_NUM t_lambda_COMPLETE_IO[] = {
  0, // locals
  0, // parameters
  // complete_io_operation!
  func_complete_io_operation, 0, IO_TAIL_CALL,
  POS(730, 13)
};

static TAB_NUM t_lambda_EXIT[] = {
  1, // locals
  0, // parameters
  // argument == EXIT_FAILURE &exit_status -> EXIT_FAILURE
  var_std__equal, 2, var_727_27_argument, var_EXIT_FAILURE, 1, LOCAL(1),
  // update_if argument == EXIT_FAILURE &exit_status -> EXIT_FAILURE
  var_update_if, 3, LOCAL(1), var_632_1_exit_status, lambda_79, 1, var_632_1_exit_status,
  // exit_task! task !io !exit_status !removed_children
  func_exit_task, 1, var_727_9_task, IO_CALL(3), var_633_1_io, var_632_1_exit_status, var_638_1_removed_children,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(732, 23),
  POS(732, 13),
  POS(733, 13),
  POS(734, 13)
};

static TAB_NUM t_lambda_79[] = {
  0, // locals
  0, // parameters
  //  EXIT_FAILURE
  LET, 1, var_EXIT_FAILURE, TAIL_CALL,
  POS(732, 63)
};

static TAB_NUM t_lambda_COMPUTE[] = {
  1, // locals
  0, // parameters
  // is_an_error:
  var_is_an_error, 1, var_727_27_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_argument_is_an_error, lambda_80, IO_TAIL_CALL,
  POS(737, 24),
  POS(736, 13)
};

static TAB_NUM t_lambda_argument_is_an_error[] = {
  0, // locals
  0, // parameters
  // handle_error!
  func_handle_error, 0, IO_TAIL_CALL,
  POS(738, 17)
};

static TAB_NUM t_lambda_80[] = {
  0, // locals
  0, // parameters
  // maybe_cancel_task!
  func_maybe_cancel_task, 0, IO_TAIL_CALL,
  POS(740, 17)
};

static TAB_NUM t_lambda_81[] = {
  0, // locals
  0, // parameters
  // maybe_cancel_task!
  func_maybe_cancel_task, 0, IO_TAIL_CALL,
  POS(742, 13)
};

static TAB_NUM t_func_complete_io_operation[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(body) == 3:
  var_parameter_count_of, 1, var_727_21_body, 1, LOCAL(1),
  // parameter_count_of(body) == 3:
  var_std__equal, 2, LOCAL(1), num_3, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_82, lambda_83, IO_TAIL_CALL,
  POS(746, 13),
  POS(746, 13),
  POS(745, 11)
};

static TAB_NUM t_lambda_82[] = {
  0, // locals
  0, // parameters
  // body! !mode &task &io !body &argument
  var_727_21_body, 3, var_727_9_task, var_633_1_io, var_727_27_argument, IO_CALL(5), var_727_15_mode, var_727_9_task, var_633_1_io, var_727_21_body, var_727_27_argument,
  // check_for_error!
  func_check_for_error, 0, IO_TAIL_CALL,
  POS(747, 15),
  POS(748, 15)
};

static TAB_NUM t_lambda_83[] = {
  0, // locals
  0, // parameters
  // body! !mode &task &io !body !argument
  var_727_21_body, 2, var_727_9_task, var_633_1_io, IO_CALL(5), var_727_15_mode, var_727_9_task, var_633_1_io, var_727_21_body, var_727_27_argument,
  // check_for_error!
  func_check_for_error, 0, IO_TAIL_CALL,
  POS(750, 15),
  POS(751, 15)
};

static TAB_NUM t_func_check_for_error[] = {
  1, // locals
  0, // parameters
  // is_an_error:
  var_is_an_error, 1, var_727_27_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_argument_is_an_error, lambda_84, IO_TAIL_CALL,
  POS(755, 22),
  POS(754, 11)
};

static TAB_NUM t_lambda_2_argument_is_an_error[] = {
  0, // locals
  0, // parameters
  // handle_error!
  func_handle_error, 0, IO_TAIL_CALL,
  POS(756, 15)
};

static TAB_NUM t_lambda_84[] = {
  1, // locals
  0, // parameters
  // tuple(task mode body argument continuation)
  var_tuple, 5, var_727_9_task, var_727_15_mode, var_727_21_body, var_727_27_argument, var_727_37_continuation, 1, LOCAL(1),
  // push &updated_requests tuple(task mode body argument continuation)
  var_push, 2, var_634_1_updated_requests, LOCAL(1), 1, var_634_1_updated_requests,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(758, 38),
  POS(758, 15),
  POS(759, 15)
};

static TAB_NUM t_func_handle_error[] = {
  1, // locals
  0, // parameters
  // $error_handler error_handler_of(task)
  var_error_handler_of, 1, var_727_9_task, 1, var_762_1_error_handler,
  // is_defined:
  var_is_defined, 1, var_762_1_error_handler, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_error_handler_is_defined, lambda_85, IO_TAIL_CALL,
  POS(762, 11),
  POS(764, 27),
  POS(763, 11)
};

static TAB_NUM t_lambda_error_handler_is_defined[] = {
  1, // locals
  0, // parameters
  // tuple(task COMPUTE undefined argument error_handler)
  var_tuple, 5, var_727_9_task, uni_COMPUTE, var_undefined, var_727_27_argument, var_762_1_error_handler, 1, LOCAL(1),
  // push &updated_requests
  var_push, 2, var_634_1_updated_requests, LOCAL(1), 1, var_634_1_updated_requests,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(766, 17),
  POS(765, 15),
  POS(767, 15)
};

static TAB_NUM t_lambda_85[] = {
  2, // locals
  0, // parameters
  // !exit_status EXIT_FAILURE
  LET, 1, var_EXIT_FAILURE, 1, var_632_1_exit_status,
  // $message generate_error_message(argument)
  var_generate_error_message, 1, var_727_27_argument, 1, LOCAL(2),
  // push(message '@nl;')
  var_push, 2, LOCAL(2), chr_10, 1, LOCAL(1),
  // append_log_entry !log_message task push(message '@nl;')
  func_append_log_entry, 2, var_727_9_task, LOCAL(1), 1, var_639_1_log_message,
  // exit_task! task !io !exit_status !removed_children
  func_exit_task, 1, var_727_9_task, IO_CALL(3), var_633_1_io, var_632_1_exit_status, var_638_1_removed_children,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(769, 15),
  POS(770, 15),
  POS(771, 50),
  POS(771, 15),
  POS(772, 15),
  POS(773, 15)
};

static TAB_NUM t_func_maybe_cancel_task[] = {
  1, // locals
  0, // parameters
  // is_cancelled:
  var_is_cancelled, 1, var_727_9_task, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10_task_is_cancelled, lambda_87, IO_TAIL_CALL,
  POS(777, 18),
  POS(776, 11)
};

static TAB_NUM t_lambda_10_task_is_cancelled[] = {
  1, // locals
  0, // parameters
  // $cancel_handler cancel_handler_of(task)
  var_cancel_handler_of, 1, var_727_9_task, 1, var_778_1_cancel_handler,
  // is_defined:
  var_is_defined, 1, var_778_1_cancel_handler, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_cancel_handler_is_defined, lambda_86, IO_TAIL_CALL,
  POS(778, 15),
  POS(780, 32),
  POS(779, 15)
};

static TAB_NUM t_lambda_cancel_handler_is_defined[] = {
  1, // locals
  0, // parameters
  // request !task !mode !body !argument !continuation
  var_726_3_request, 0, 5, var_727_9_task, var_727_15_mode, var_727_21_body, var_727_27_argument, var_727_37_continuation,
  // task.is_cancelled false
  LET, -1, var_727_9_task, var_is_cancelled, var_false, var_727_9_task,
  // tuple(task COMPUTE undefined argument cancel_handler)
  var_tuple, 5, var_727_9_task, uni_COMPUTE, var_undefined, var_727_27_argument, var_778_1_cancel_handler, 1, LOCAL(1),
  // push &updated_requests
  var_push, 2, var_634_1_updated_requests, LOCAL(1), 1, var_634_1_updated_requests,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(781, 19),
  POS(782, 20),
  POS(784, 21),
  POS(783, 19),
  POS(785, 19)
};

static TAB_NUM t_lambda_86[] = {
  0, // locals
  0, // parameters
  // exit_task! task !io !exit_status !removed_children
  func_exit_task, 1, var_727_9_task, IO_CALL(3), var_633_1_io, var_632_1_exit_status, var_638_1_removed_children,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(787, 19),
  POS(788, 19)
};

static TAB_NUM t_lambda_87[] = {
  0, // locals
  0, // parameters
  // push &updated_requests request
  var_push, 2, var_634_1_updated_requests, var_726_3_request, 1, var_634_1_updated_requests,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(790, 15),
  POS(791, 15)
};

static TAB_NUM t_lambda_88[] = {
  0, // locals
  0, // parameters
  //  updated_requests io removed_children log_message exit_status
  LET, 5, var_634_1_updated_requests, var_633_1_io, var_638_1_removed_children, var_639_1_log_message, var_632_1_exit_status, TAIL_CALL,
  POS(793, 9)
};

static TAB_NUM t_func_compute[] = {
  1, // locals
  1, // parameters
  var_805_11_request,
  // request $task $mode $body $argument $continuation
  var_805_11_request, 0, 5, var_806_9_task, var_806_15_mode, var_806_21_body, var_806_27_argument, var_806_37_continuation,
  // id_of(task))
  var_id_of, 1, var_806_9_task, 1, LOCAL(1),
  // $removed removed_children(id_of(task))
  var_638_1_removed_children, 1, LOCAL(1), 1, var_807_1_removed,
  // is_defined &request &task:
  var_is_defined, 1, var_807_1_removed, 1, LOCAL(1),
  // update_if removed.is_defined &request &task:
  var_update_if, 4, LOCAL(1), var_805_11_request, var_806_9_task, lambda_89, 2, var_805_11_request, var_806_9_task,
  // mode == COMPUTE:
  var_std__equal, 2, var_806_15_mode, uni_COMPUTE, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_91, lambda_95, TAIL_CALL,
  POS(806, 5),
  POS(807, 31),
  POS(807, 5),
  POS(808, 23),
  POS(808, 5),
  POS(812, 7),
  POS(811, 5)
};

static TAB_NUM t_lambda_89[] = {
  1, // locals
  0, // parameters
  // child_ids_of: (id) -> not(removed(id))
  var_child_ids_of, 1, var_806_9_task, 1, LOCAL(1),
  // filter &task.child_ids_of: (id) -> not(removed(id))
  var_filter, 2, LOCAL(1), lambda_90, 1, LOCAL(1),
  // task.child_ids_of: (id) -> not(removed(id))
  LET, -1, var_806_9_task, var_child_ids_of, LOCAL(1), var_806_9_task,
  // tuple(task mode body argument continuation) task
  var_tuple, 5, var_806_9_task, var_806_15_mode, var_806_21_body, var_806_27_argument, var_806_37_continuation, 1, LOCAL(1),
  // -> tuple(task mode body argument continuation) task
  LET, 2, LOCAL(1), var_806_9_task, TAIL_CALL,
  POS(809, 20),
  POS(809, 7),
  POS(809, 15),
  POS(810, 10),
  POS(810, 7)
};

static TAB_NUM t_lambda_90[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 809_28_id
  // removed(id))
  var_807_1_removed, 1, LOCAL(3), 1, LOCAL(1),
  // not(removed(id))
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // -> not(removed(id))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(809, 46),
  POS(809, 42),
  POS(809, 39)
};

static TAB_NUM t_lambda_91[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(continuation) == 2:
  var_parameter_count_of, 1, var_806_37_continuation, 1, LOCAL(1),
  // parameter_count_of(continuation) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_92, lambda_93, TAIL_CALL,
  POS(814, 11),
  POS(814, 11),
  POS(813, 9)
};

static TAB_NUM t_lambda_92[] = {
  0, // locals
  0, // parameters
  // !request continuation(task argument)
  var_806_37_continuation, 2, var_806_9_task, var_806_27_argument, 1, var_805_11_request,
  // check_request
  func_check_request, 0, TAIL_CALL,
  POS(815, 13),
  POS(816, 13)
};

static TAB_NUM t_lambda_93[] = {
  0, // locals
  0, // parameters
  // !request continuation(task)
  var_806_37_continuation, 1, var_806_9_task, 1, var_805_11_request,
  // check_request
  func_check_request, 0, TAIL_CALL,
  POS(818, 13),
  POS(819, 13)
};

static TAB_NUM t_func_check_request[] = {
  1, // locals
  0, // parameters
  // is_an_error:
  var_is_an_error, 1, var_805_11_request, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_request_is_an_error, lambda_94, TAIL_CALL,
  POS(823, 21),
  POS(822, 11)
};

static TAB_NUM t_lambda_request_is_an_error[] = {
  1, // locals
  0, // parameters
  // generate_error_message(request)
  var_generate_error_message, 1, var_805_11_request, 1, LOCAL(1),
  // log &task generate_error_message(request)
  var_log, 2, var_806_9_task, LOCAL(1), 1, var_806_9_task,
  // tuple(task EXIT undefined EXIT_FAILURE undefined)
  var_tuple, 5, var_806_9_task, uni_EXIT, var_undefined, var_EXIT_FAILURE, var_undefined, 1, LOCAL(1),
  // -> tuple(task EXIT undefined EXIT_FAILURE undefined)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(824, 25),
  POS(824, 15),
  POS(825, 18),
  POS(825, 15)
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  //  request
  LET, 1, var_805_11_request, TAIL_CALL,
  POS(826, 15)
};

static TAB_NUM t_lambda_95[] = {
  0, // locals
  0, // parameters
  //  request
  LET, 1, var_805_11_request, TAIL_CALL,
  POS(827, 9)
};

static TAB_NUM t_func_collect_messages[] = {
  1, // locals
  1, // parameters
  var_831_20_task,
  // outbound_messages_of(task)
  var_outbound_messages_of, 1, var_831_20_task, 1, LOCAL(1),
  // for_each outbound_messages_of(task)
  var_for_each, 3, LOCAL(1), lambda_96, lambda_98, IO_TAIL_CALL,
  POS(832, 14),
  POS(832, 5)
};

static TAB_NUM t_lambda_96[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 833_3_entry
  // entry $receiver $message
  LOCAL(2), 0, 2, var_834_7_receiver, var_834_17_message,
  // is_an_integer:
  var_is_an_integer, 1, var_834_7_receiver, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_receiver_is_an_integer, lambda_97, IO_TAIL_CALL,
  POS(834, 9),
  POS(836, 20),
  POS(835, 9)
};

static TAB_NUM t_lambda_receiver_is_an_integer[] = {
  0, // locals
  0, // parameters
  // send_message! receiver
  func_send_message, 1, var_834_7_receiver, IO_TAIL_CALL,
  POS(837, 13)
};

static TAB_NUM t_lambda_97[] = {
  0, // locals
  0, // parameters
  // for_each! receiver send_message
  var_for_each, 2, var_834_7_receiver, func_send_message, IO_TAIL_CALL,
  POS(839, 13)
};

static TAB_NUM t_func_send_message[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 841_16_the_receiver
  // sent_messages(the_receiver) empty_list)
  var_637_1_sent_messages, 1, LOCAL(2), 1, LOCAL(1),
  // $messages default_value(sent_messages(the_receiver) empty_list)
  var_default_value, 2, LOCAL(1), var_empty_list, 1, LOCAL(3),
  // push &messages message
  var_push, 2, LOCAL(3), var_834_17_message, 1, LOCAL(3),
  // sent_messages(the_receiver) messages
  var_637_1_sent_messages, 2, LOCAL(2), LOCAL(3), 1, var_637_1_sent_messages,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(842, 35),
  POS(842, 11),
  POS(843, 11),
  POS(844, 12),
  POS(845, 11)
};

static TAB_NUM t_lambda_98[] = {
  0, // locals
  0, // parameters
  // task.outbound_messages_of empty_list
  LET, -1, var_831_20_task, var_outbound_messages_of, var_empty_list, var_831_20_task,
  // -> task sent_messages
  LET, 2, var_831_20_task, var_637_1_sent_messages, TAIL_CALL,
  POS(847, 10),
  POS(848, 9)
};

static TAB_NUM t_func_collect_cancel_requests[] = {
  1, // locals
  1, // parameters
  var_850_27_task,
  // cancel_requests_of(task)
  var_cancel_requests_of, 1, var_850_27_task, 1, LOCAL(1),
  // for_each cancel_requests_of(task)
  var_for_each, 3, LOCAL(1), lambda_99, lambda_100, IO_TAIL_CALL,
  POS(851, 14),
  POS(851, 5)
};

static TAB_NUM t_lambda_99[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 852_3_id
  // cancellations(id) true
  var_636_1_cancellations, 2, LOCAL(1), var_true, 1, var_636_1_cancellations,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(853, 10),
  POS(854, 9)
};

static TAB_NUM t_lambda_100[] = {
  0, // locals
  0, // parameters
  // task.cancel_requests_of empty_list
  LET, -1, var_850_27_task, var_cancel_requests_of, var_empty_list, var_850_27_task,
  // -> task cancellations
  LET, 2, var_850_27_task, var_636_1_cancellations, TAIL_CALL,
  POS(856, 10),
  POS(857, 9)
};

static TAB_NUM t_func_collect_log_messages[] = {
  1, // locals
  1, // parameters
  var_859_24_task,
  // log_level == 0
  var_std__equal, 2, var_log_level, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_101, lambda_102, IO_TAIL_CALL,
  POS(861, 7),
  POS(860, 5)
};

static TAB_NUM t_lambda_101[] = {
  0, // locals
  0, // parameters
  //  task log_message
  LET, 2, var_859_24_task, var_639_1_log_message, TAIL_CALL,
  POS(862, 9)
};

static TAB_NUM t_lambda_102[] = {
  1, // locals
  0, // parameters
  // log_messages_of(task)
  var_log_messages_of, 1, var_859_24_task, 1, LOCAL(1),
  // for_each log_messages_of(task)
  var_for_each, 3, LOCAL(1), lambda_103, lambda_104, IO_TAIL_CALL,
  POS(864, 18),
  POS(864, 9)
};

static TAB_NUM t_lambda_103[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 865_3_message
  // append_log_entry !log_message task message
  func_append_log_entry, 2, var_859_24_task, LOCAL(1), 1, var_639_1_log_message,
  // task.log_messages_of empty_list
  LET, -1, var_859_24_task, var_log_messages_of, var_empty_list, var_859_24_task,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(866, 13),
  POS(867, 14),
  POS(868, 13)
};

static TAB_NUM t_lambda_104[] = {
  0, // locals
  0, // parameters
  //  task log_message
  LET, 2, var_859_24_task, var_639_1_log_message, TAIL_CALL,
  POS(869, 13)
};

static TAB_NUM t_func_append_log_entry[] = {
  3, // locals
  2, // parameters
  var_871_20_task,
  var_871_25_message,
  // log_level >= 2
  var_std__less, 2, var_log_level, num_2, 1, LOCAL(1),
  // log_level >= 2
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_105, lambda_106, 1, LOCAL(3),
  // append log_message
  var_append, 2, var_639_1_log_message, LOCAL(3), TAIL_CALL,
  POS(874, 9),
  POS(874, 9),
  POS(873, 7),
  POS(872, 5)
};

static TAB_NUM t_lambda_105[] = {
  2, // locals
  0, // parameters
  // id_of(task) ": " message)
  var_id_of, 1, var_871_20_task, 1, LOCAL(1),
  // string(id_of(task) ": " message)
  var_string, 3, LOCAL(1), string_7, var_871_25_message, 1, LOCAL(2),
  //  string(id_of(task) ": " message)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(875, 19),
  POS(875, 12),
  POS(875, 11)
};

static TAB_NUM t_lambda_106[] = {
  0, // locals
  0, // parameters
  //  message
  LET, 1, var_871_25_message, TAIL_CALL,
  POS(876, 11)
};

static TAB_NUM t_func_create_new_tasks[] = {
  2, // locals
  1, // parameters
  var_878_20_task,
  // fork_requests_of(task).is_empty
  var_fork_requests_of, 1, var_878_20_task, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_107, lambda_108, TAIL_CALL,
  POS(880, 7),
  POS(880, 30),
  POS(879, 5)
};

static TAB_NUM t_lambda_107[] = {
  0, // locals
  0, // parameters
  //  task current_task_id new_requests
  LET, 3, var_878_20_task, var_643_1_current_task_id, var_635_1_new_requests, TAIL_CALL,
  POS(881, 9)
};

static TAB_NUM t_lambda_108[] = {
  1, // locals
  0, // parameters
  // fork_requests_of(task)
  var_fork_requests_of, 1, var_878_20_task, 1, LOCAL(1),
  // for_each fork_requests_of(task)
  var_for_each, 3, LOCAL(1), lambda_109, lambda_110, TAIL_CALL,
  POS(883, 18),
  POS(883, 9)
};

static TAB_NUM t_lambda_109[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 884_3_fork_request
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
  var_inc, 1, var_643_1_current_task_id, 1, var_643_1_current_task_id,
  // new_task.id_of current_task_id
  LET, -1, LOCAL(4), var_id_of, var_643_1_current_task_id, LOCAL(4),
  // !new_task.parent_id_of id_of(task)
  var_id_of, 1, var_878_20_task, 1, LOCAL(2),
  // new_task.parent_id_of id_of(task)
  LET, -1, LOCAL(4), var_parent_id_of, LOCAL(2), LOCAL(4),
  // child_ids_of current_task_id
  var_child_ids_of, 1, var_878_20_task, 1, LOCAL(1),
  // push &task.child_ids_of current_task_id
  var_push, 2, LOCAL(1), var_643_1_current_task_id, 1, LOCAL(1),
  // task.child_ids_of current_task_id
  LET, -1, var_878_20_task, var_child_ids_of, LOCAL(1), var_878_20_task,
  // tuple(new_task COMPUTE undefined argument continuation)
  var_tuple, 5, LOCAL(4), uni_COMPUTE, var_undefined, LOCAL(6), LOCAL(5), 1, LOCAL(1),
  // push &new_requests
  var_push, 2, var_635_1_new_requests, LOCAL(1), 1, var_635_1_new_requests,
  // next
  var_next, 0, TAIL_CALL,
  POS(885, 13),
  POS(889, 14),
  POS(890, 14),
  POS(891, 14),
  POS(892, 14),
  POS(893, 14),
  POS(894, 14),
  POS(895, 14),
  POS(896, 14),
  POS(897, 14),
  POS(898, 14),
  POS(902, 13),
  POS(903, 14),
  POS(904, 13),
  POS(904, 14),
  POS(908, 24),
  POS(908, 13),
  POS(908, 19),
  POS(913, 15),
  POS(912, 13),
  POS(914, 13)
};

static TAB_NUM t_lambda_110[] = {
  0, // locals
  0, // parameters
  // task.fork_requests_of empty_list
  LET, -1, var_878_20_task, var_fork_requests_of, var_empty_list, var_878_20_task,
  // -> task current_task_id new_requests
  LET, 3, var_878_20_task, var_643_1_current_task_id, var_635_1_new_requests, TAIL_CALL,
  POS(916, 14),
  POS(917, 13)
};

static TAB_NUM t_func_receive_messages[] = {
  1, // locals
  1, // parameters
  var_921_20_request,
  // request $task $mode $body $argument $continuation
  var_921_20_request, 0, 5, var_922_9_task, var_922_15_mode, var_922_21_body, var_922_27_argument, var_922_37_continuation,
  // id_of(task))
  var_id_of, 1, var_922_9_task, 1, LOCAL(1),
  // $messages sent_messages(id_of(task))
  var_637_1_sent_messages, 1, LOCAL(1), 1, var_923_1_messages,
  // is_defined:
  var_is_defined, 1, var_923_1_messages, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_messages_is_defined, lambda_112, TAIL_CALL,
  POS(922, 5),
  POS(923, 29),
  POS(923, 5),
  POS(925, 16),
  POS(924, 5)
};

static TAB_NUM t_lambda_messages_is_defined[] = {
  1, // locals
  0, // parameters
  // inbound_messages_of messages
  var_inbound_messages_of, 1, var_922_9_task, 1, LOCAL(1),
  // append &task.inbound_messages_of messages
  var_append, 2, LOCAL(1), var_923_1_messages, 1, LOCAL(1),
  // task.inbound_messages_of messages
  LET, -1, var_922_9_task, var_inbound_messages_of, LOCAL(1), var_922_9_task,
  // mode == WAIT &mode -> COMPUTE
  var_std__equal, 2, var_922_15_mode, uni_WAIT, 1, LOCAL(1),
  // update_if mode == WAIT &mode -> COMPUTE
  var_update_if, 3, LOCAL(1), var_922_15_mode, lambda_111, 1, var_922_15_mode,
  // tuple(task mode body argument continuation)
  var_tuple, 5, var_922_9_task, var_922_15_mode, var_922_21_body, var_922_27_argument, var_922_37_continuation, 1, LOCAL(1),
  // -> tuple(task mode body argument continuation)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(926, 22),
  POS(926, 9),
  POS(926, 17),
  POS(927, 19),
  POS(927, 9),
  POS(928, 12),
  POS(928, 9)
};

static TAB_NUM t_lambda_111[] = {
  0, // locals
  0, // parameters
  //  COMPUTE
  LET, 1, uni_COMPUTE, TAIL_CALL,
  POS(927, 40)
};

static TAB_NUM t_lambda_112[] = {
  0, // locals
  0, // parameters
  //  request
  LET, 1, var_921_20_request, TAIL_CALL,
  POS(929, 9)
};

static TAB_NUM t_func_maybe_mark_as_cancelled[] = {
  2, // locals
  1, // parameters
  var_931_27_request,
  // request $task $mode $body $argument $continuation
  var_931_27_request, 0, 5, var_932_9_task, var_932_15_mode, var_932_21_body, var_932_27_argument, var_932_37_continuation,
  // id_of(task)):
  var_id_of, 1, var_932_9_task, 1, LOCAL(1),
  // cancellations(id_of(task)):
  var_636_1_cancellations, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_cancellationsid_oftask, lambda_113, TAIL_CALL,
  POS(932, 5),
  POS(934, 21),
  POS(934, 7),
  POS(933, 5)
};

static TAB_NUM t_lambda_cancellationsid_oftask[] = {
  1, // locals
  0, // parameters
  // task.is_cancelled true
  LET, -1, var_932_9_task, var_is_cancelled, var_true, var_932_9_task,
  // tuple(task mode body argument continuation)
  var_tuple, 5, var_932_9_task, var_932_15_mode, var_932_21_body, var_932_27_argument, var_932_37_continuation, 1, LOCAL(1),
  // -> tuple(task mode body argument continuation)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(935, 10),
  POS(936, 12),
  POS(936, 9)
};

static TAB_NUM t_lambda_113[] = {
  0, // locals
  0, // parameters
  //  request
  LET, 1, var_931_27_request, TAIL_CALL,
  POS(937, 9)
};

static TAB_NUM t_func_queue_log_message_write[] = {
  2, // locals
  0, // parameters
  // log_level >= 4 &log_message:
  var_std__less, 2, var_log_level, num_4, 1, LOCAL(1),
  // log_level >= 4 &log_message:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // update_if log_level >= 4 &log_message:
  var_update_if, 3, LOCAL(2), var_639_1_log_message, lambda_114, 1, var_639_1_log_message,
  // is_empty
  var_is_empty, 1, var_639_1_log_message, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_117, lambda_118, TAIL_CALL,
  POS(942, 15),
  POS(942, 15),
  POS(942, 5),
  POS(951, 19),
  POS(950, 5)
};

static TAB_NUM t_lambda_114[] = {
  0, // locals
  0, // parameters
  // for_each new_requests
  var_for_each, 3, var_635_1_new_requests, lambda_115, lambda_116, TAIL_CALL,
  POS(943, 7)
};

static TAB_NUM t_lambda_115[] = {
  5, // locals
  1, // parameters
  LOCAL(4), // 944_3_request
  // request $task $_mode $_body $_arguments $_continuation
  LOCAL(4), 0, 5, LOCAL(5), LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(1),
  // id_of(task)) (parent: @(parent_id_of(task)))
  var_id_of, 1, LOCAL(5), 1, LOCAL(1),
  // parent_id_of(task)))
  var_parent_id_of, 1, LOCAL(5), 1, LOCAL(2),
  // "
  var_std__string, 5, str_CREATED_TASK, LOCAL(1), str__parent, LOCAL(2), string_5, 1, LOCAL(3),
  // append &log_message "
  var_append, 2, var_639_1_log_message, LOCAL(3), 1, var_639_1_log_message,
  // next
  var_next, 0, TAIL_CALL,
  POS(945, 11),
  POS(947, 28),
  POS(947, 52),
  POS(946, 31),
  POS(946, 11),
  POS(948, 11)
};

static TAB_NUM t_lambda_116[] = {
  0, // locals
  0, // parameters
  //  log_message
  LET, 1, var_639_1_log_message, TAIL_CALL,
  POS(949, 11)
};

static TAB_NUM t_lambda_117[] = {
  0, // locals
  0, // parameters
  //  io
  LET, 1, var_633_1_io, TAIL_CALL,
  POS(952, 9)
};

static TAB_NUM t_lambda_118[] = {
  2, // locals
  0, // parameters
  // log_level >= 3 &io:
  var_std__less, 2, var_log_level, num_3, 1, LOCAL(1),
  // log_level >= 3 &io:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // update_if log_level >= 3 &io:
  var_update_if, 3, LOCAL(2), var_633_1_io, lambda_119, 1, var_633_1_io,
  // to_utf8
  var_to_utf8, 1, var_639_1_log_message, 1, LOCAL(1),
  // write_to &io STDERR_FILENO log_message.to_utf8
  var_write_to, 3, var_633_1_io, var_STDERR_FILENO, LOCAL(1), 1, var_633_1_io,
  // -> io
  LET, 1, var_633_1_io, TAIL_CALL,
  POS(954, 19),
  POS(954, 19),
  POS(954, 9),
  POS(957, 48),
  POS(957, 9),
  POS(958, 9)
};

static TAB_NUM t_lambda_119[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, string_8, var_644_1_iteration_no, string_9, 1, LOCAL(1),
  // write_to io STDERR_FILENO "
  var_write_to, 3, var_633_1_io, var_STDERR_FILENO, LOCAL(1), TAIL_CALL,
  POS(955, 37),
  POS(955, 11)
};

static TAB_NUM t_func_start_io_operation[] = {
  2, // locals
  1, // parameters
  var_960_22_request,
  // request $task $mode $body $argument $continuation
  var_960_22_request, 0, 5, var_961_9_task, var_961_15_mode, var_961_21_body, var_961_27_argument, var_961_37_continuation,
  // mode == START_IO
  var_std__equal, 2, var_961_15_mode, uni_START_IO, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_120, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_122, lambda_125, IO_TAIL_CALL,
  POS(961, 5),
  POS(964, 9),
  POS(963, 9),
  POS(962, 5)
};

static TAB_NUM t_lambda_120[] = {
  2, // locals
  0, // parameters
  // is_cancelled && mode == CHECK_IO
  var_is_cancelled, 1, var_961_9_task, 1, LOCAL(1),
  // is_cancelled && mode == CHECK_IO
  var_std__and, 2, LOCAL(1), lambda_121, 1, LOCAL(2),
  // task.is_cancelled && mode == CHECK_IO
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(965, 14),
  POS(965, 14),
  POS(965, 9)
};

static TAB_NUM t_lambda_121[] = {
  1, // locals
  0, // parameters
  // mode == CHECK_IO
  var_std__equal, 2, var_961_15_mode, uni_CHECK_IO, 1, LOCAL(1),
  // mode == CHECK_IO
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(965, 30),
  POS(965, 30)
};

static TAB_NUM t_lambda_122[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(body) == 3:
  var_parameter_count_of, 1, var_961_21_body, 1, LOCAL(1),
  // parameter_count_of(body) == 3:
  var_std__equal, 2, LOCAL(1), num_3, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_123, lambda_124, IO_TAIL_CALL,
  POS(968, 11),
  POS(968, 11),
  POS(967, 9)
};

static TAB_NUM t_lambda_123[] = {
  1, // locals
  0, // parameters
  // body! !mode &task &io !body &argument
  var_961_21_body, 3, var_961_9_task, var_633_1_io, var_961_27_argument, IO_CALL(5), var_961_15_mode, var_961_9_task, var_633_1_io, var_961_21_body, var_961_27_argument,
  // tuple(task mode body argument continuation) io
  var_tuple, 5, var_961_9_task, var_961_15_mode, var_961_21_body, var_961_27_argument, var_961_37_continuation, 1, LOCAL(1),
  // -> tuple(task mode body argument continuation) io
  LET, 2, LOCAL(1), var_633_1_io, TAIL_CALL,
  POS(969, 13),
  POS(970, 16),
  POS(970, 13)
};

static TAB_NUM t_lambda_124[] = {
  1, // locals
  0, // parameters
  // body! !mode &task &io !body !argument
  var_961_21_body, 2, var_961_9_task, var_633_1_io, IO_CALL(5), var_961_15_mode, var_961_9_task, var_633_1_io, var_961_21_body, var_961_27_argument,
  // tuple(task mode body argument continuation) io
  var_tuple, 5, var_961_9_task, var_961_15_mode, var_961_21_body, var_961_27_argument, var_961_37_continuation, 1, LOCAL(1),
  // -> tuple(task mode body argument continuation) io
  LET, 2, LOCAL(1), var_633_1_io, TAIL_CALL,
  POS(972, 13),
  POS(973, 16),
  POS(973, 13)
};

static TAB_NUM t_lambda_125[] = {
  0, // locals
  0, // parameters
  //  request io
  LET, 2, var_960_22_request, var_633_1_io, TAIL_CALL,
  POS(974, 9)
};

static TAB_NUM t_func_has_something_to_do[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 978_23_request
  // request $_task $mode $_body $_arguments $_continuation
  LOCAL(3), 0, 5, LOCAL(1), var_979_16_mode, LOCAL(1), LOCAL(1), LOCAL(1),
  // mode == COMPUTE || mode == EXIT
  var_std__equal, 2, var_979_16_mode, uni_COMPUTE, 1, LOCAL(1),
  // mode == COMPUTE || mode == EXIT
  var_std__or, 2, LOCAL(1), lambda_126, 1, LOCAL(2),
  // -> mode == COMPUTE || mode == EXIT
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(979, 5),
  POS(980, 8),
  POS(980, 8),
  POS(980, 5)
};

static TAB_NUM t_lambda_126[] = {
  1, // locals
  0, // parameters
  // mode == EXIT
  var_std__equal, 2, var_979_16_mode, uni_EXIT, 1, LOCAL(1),
  // mode == EXIT
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(980, 27),
  POS(980, 27)
};

static TAB_NUM t_func_maybe_exit[] = {
  1, // locals
  1, // parameters
  var_982_14_something_to_do,
  // is_empty:
  var_is_empty, 1, var_633_1_io, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_io_is_empty, var_pass, IO_TAIL_CALL,
  POS(984, 10),
  POS(983, 5)
};

static TAB_NUM t_lambda_io_is_empty[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_641_1_requests, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_requests_is_empty, lambda_127, IO_TAIL_CALL,
  POS(986, 20),
  POS(985, 9)
};

static TAB_NUM t_lambda_requests_is_empty[] = {
  0, // locals
  0, // parameters
  // exit! exit_status # no more requests and no more pending log-writes
  var_exit, 1, var_632_1_exit_status, IO_TAIL_CALL,
  POS(987, 13)
};

static TAB_NUM t_lambda_127[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_982_14_something_to_do, var_pass, lambda_128, IO_TAIL_CALL,
  POS(989, 13)
};

static TAB_NUM t_lambda_128[] = {
  1, // locals
  0, // parameters
  // write! $_bytes_written STDERR_FILENO "
  var_write, 2, var_STDERR_FILENO, str_NO_TASK_IS_READY, IO_CALL(1), LOCAL(1),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(993, 17),
  POS(995, 17)
};

static TAB_NUM t_func_get_and_check_events[] = {
  1, // locals
  1, // parameters
  var_998_24_something_to_do,
  // is_empty
  var_is_empty, 1, var_633_1_io, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_129, lambda_130, IO_TAIL_CALL,
  POS(1000, 10),
  POS(999, 5)
};

static TAB_NUM t_lambda_129[] = {
  0, // locals
  0, // parameters
  //  requests io
  LET, 2, var_641_1_requests, var_633_1_io, TAIL_CALL,
  POS(1001, 9)
};

static TAB_NUM t_lambda_130[] = {
  1, // locals
  0, // parameters
  // $timeout
  var_if, 3, var_998_24_something_to_do, lambda_131, lambda_132, 1, LOCAL(1),
  // get_events! &io !events timeout
  var_get_events, 2, var_633_1_io, LOCAL(1), IO_CALL(2), var_633_1_io, var_640_1_events,
  // map &requests check_events
  var_map, 2, var_641_1_requests, func_check_events, 1, var_641_1_requests,
  // !events empty_list
  LET, 1, var_empty_list, 1, var_640_1_events,
  // -> requests io
  LET, 2, var_641_1_requests, var_633_1_io, TAIL_CALL,
  POS(1003, 9),
  POS(1008, 9),
  POS(1009, 9),
  POS(1010, 9),
  POS(1011, 9)
};

static TAB_NUM t_lambda_131[] = {
  0, // locals
  0, // parameters
  //  0 # poll
  LET, 1, num_0, TAIL_CALL,
  POS(1006, 15)
};

static TAB_NUM t_lambda_132[] = {
  0, // locals
  0, // parameters
  //  undefined # wait "forever"
  LET, 1, var_undefined, TAIL_CALL,
  POS(1007, 15)
};

static TAB_NUM t_func_check_events[] = {
  1, // locals
  1, // parameters
  var_1013_16_request,
  // request $task $mode $body $argument $continuation
  var_1013_16_request, 0, 5, var_1014_9_task, var_1014_15_mode, var_1014_21_body, var_1014_27_argument, var_1014_37_continuation,
  // mode == CHECK_IO:
  var_std__equal, 2, var_1014_15_mode, uni_CHECK_IO, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_133, lambda_134, TAIL_CALL,
  POS(1014, 5),
  POS(1016, 7),
  POS(1015, 5)
};

static TAB_NUM t_lambda_133[] = {
  1, // locals
  0, // parameters
  // body !mode &task events !body &argument
  var_1014_21_body, 3, var_1014_9_task, var_640_1_events, var_1014_27_argument, 4, var_1014_15_mode, var_1014_9_task, var_1014_21_body, var_1014_27_argument,
  // tuple(task mode body argument continuation)
  var_tuple, 5, var_1014_9_task, var_1014_15_mode, var_1014_21_body, var_1014_27_argument, var_1014_37_continuation, 1, LOCAL(1),
  // -> tuple(task mode body argument continuation)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1017, 9),
  POS(1018, 12),
  POS(1018, 9)
};

static TAB_NUM t_lambda_134[] = {
  0, // locals
  0, // parameters
  //  request
  LET, 1, var_1013_16_request, TAIL_CALL,
  POS(1019, 9)
};

static TAB_NUM t_func_exit_task[] = {
  4, // locals
  1, // parameters
  var_1023_13_task,
  // $parent_id parent_id_of(task)
  var_parent_id_of, 1, var_1023_13_task, 1, LOCAL(3),
  // removed_children(parent_id) empty_key_order_set)
  var_638_1_removed_children, 1, LOCAL(3), 1, LOCAL(1),
  // $removed default_value(removed_children(parent_id) empty_key_order_set)
  var_default_value, 2, LOCAL(1), var_empty_key_order_set, 1, LOCAL(4),
  // id_of(task)) true
  var_id_of, 1, var_1023_13_task, 1, LOCAL(2),
  // removed(id_of(task)) true
  LOCAL(4), 2, LOCAL(2), var_true, 1, LOCAL(4),
  // removed_children(parent_id) removed
  var_638_1_removed_children, 2, LOCAL(3), LOCAL(4), 1, var_638_1_removed_children,
  // exit_handlers_of(task)
  var_exit_handlers_of, 1, var_1023_13_task, 1, LOCAL(1),
  // for_each exit_handlers_of(task)
  var_for_each, 3, LOCAL(1), lambda_135, lambda_140, IO_TAIL_CALL,
  POS(1024, 5),
  POS(1025, 28),
  POS(1025, 5),
  POS(1026, 14),
  POS(1026, 6),
  POS(1027, 6),
  POS(1028, 14),
  POS(1028, 5)
};

static TAB_NUM t_lambda_135[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 1029_3_item
  // item $handler $handler_arguments
  LOCAL(3), 0, 2, var_1030_6_handler, var_1030_15_handler_arguments,
  // parameter_count_of(handler) == 3:
  var_parameter_count_of, 1, var_1030_6_handler, 1, LOCAL(1),
  // parameter_count_of(handler) == 3:
  var_std__equal, 2, LOCAL(1), num_3, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_136, lambda_138, IO_TAIL_CALL,
  POS(1030, 9),
  POS(1032, 11),
  POS(1032, 11),
  POS(1031, 9)
};

static TAB_NUM t_lambda_136[] = {
  2, // locals
  0, // parameters
  // handler! task &io $success handler_arguments
  var_1030_6_handler, 3, var_1023_13_task, var_633_1_io, var_1030_15_handler_arguments, IO_CALL(2), var_633_1_io, LOCAL(2),
  // is_an_error &exit_status -> EXIT_FAILURE
  var_is_an_error, 1, LOCAL(2), 1, LOCAL(1),
  // update_if success.is_an_error &exit_status -> EXIT_FAILURE
  var_update_if, 3, LOCAL(1), var_632_1_exit_status, lambda_137, 1, var_632_1_exit_status,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1033, 13),
  POS(1034, 31),
  POS(1034, 13),
  POS(1035, 13)
};

static TAB_NUM t_lambda_137[] = {
  0, // locals
  0, // parameters
  //  EXIT_FAILURE
  LET, 1, var_EXIT_FAILURE, TAIL_CALL,
  POS(1034, 58)
};

static TAB_NUM t_lambda_138[] = {
  2, // locals
  0, // parameters
  // handler! task &io $success
  var_1030_6_handler, 2, var_1023_13_task, var_633_1_io, IO_CALL(2), var_633_1_io, LOCAL(2),
  // is_an_error &exit_status -> EXIT_FAILURE
  var_is_an_error, 1, LOCAL(2), 1, LOCAL(1),
  // update_if success.is_an_error &exit_status -> EXIT_FAILURE
  var_update_if, 3, LOCAL(1), var_632_1_exit_status, lambda_139, 1, var_632_1_exit_status,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(1037, 13),
  POS(1038, 31),
  POS(1038, 13),
  POS(1039, 13)
};

static TAB_NUM t_lambda_139[] = {
  0, // locals
  0, // parameters
  //  EXIT_FAILURE
  LET, 1, var_EXIT_FAILURE, TAIL_CALL,
  POS(1038, 58)
};

static TAB_NUM t_lambda_140[] = {
  0, // locals
  0, // parameters
  //  io exit_status removed_children
  LET, 3, var_633_1_io, var_632_1_exit_status, var_638_1_removed_children, TAIL_CALL,
  POS(1040, 9)
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
    "assign\000std", NULL,
    {.position = POS(84, 1)}
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
    {.position = POS(216, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "additional_error_information_of\000", NULL,
    {.position = POS(216, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(216, 51)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "generate_error_message\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "generate_error_message\000", NULL,
    {.position = POS(220, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "221_1_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error_message_text_of\000", NULL,
    {.position = POS(221, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "222_1_errno\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "errno_of\000", NULL,
    {.position = POS(222, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(223, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(224, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "strerror\000", NULL,
    {.position = POS(225, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(223, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "226_1_failed_attribute\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "failed_attribute_of\000", NULL,
    {.position = POS(226, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "230_1_additional_information\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(234, 5)}
  },
  {
    FOT_DERIVED, 0, 37,
    "io_task\000std_types", std_types__io_task__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "object\000std_types", NULL,
    {.position = POS(236, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(238, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(248, 34)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "task_id_of\000", NULL,
    {.position = POS(250, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "parent_of\000", NULL,
    {.position = POS(251, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "252_1_id\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(254, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(254, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(253, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "children_of\000", NULL,
    {.position = POS(258, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "perform_io\000", NULL,
    {.position = POS(260, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(267, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "pause\000", NULL,
    {.position = POS(269, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "wait_for_message\000", NULL,
    {.position = POS(272, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "272_39_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "272_44_continuation\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(274, 31)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "check_io\000", NULL,
    {.position = POS(278, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "performed_io\000", NULL,
    {.position = POS(281, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "recheck_io\000", NULL,
    {.position = POS(289, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "complete_io\000", NULL,
    {.position = POS(292, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "checked_io\000", NULL,
    {.position = POS(295, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "log\000", NULL,
    {.position = POS(298, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "299_1_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(299, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(302, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "send\000", NULL,
    {.position = POS(308, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "308_27_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "308_32_receiver\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "308_41_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(310, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(310, 14)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "receive\000", NULL,
    {.position = POS(316, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "316_30_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get\000", NULL,
    {.position = POS(321, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "cancel\000", NULL,
    {.position = POS(324, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "326_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "327_0_task_id\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_integer\000", NULL,
    {.position = POS(330, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_list\000", NULL,
    {.position = POS(334, 47)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "on_exit\000", NULL,
    {.position = POS(337, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "put\000", NULL,
    {.position = POS(343, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "on_error\000", NULL,
    {.position = POS(346, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "on_cancel\000", NULL,
    {.position = POS(350, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "load\000", NULL,
    {.position = POS(356, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "359_16_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "359_21_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "359_24_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "364_7_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open\000", NULL,
    {.position = POS(364, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(366, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(367, 49)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "start_reading_from\000", NULL,
    {.position = POS(371, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "374_22_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "374_27_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "374_34_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "375_10_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "375_14_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "stop_reading_from\000", NULL,
    {.position = POS(379, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "close\000", NULL,
    {.position = POS(380, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "try\000", NULL,
    {.position = POS(380, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "385_13_efd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "385_18_data\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ\000", NULL,
    {.position = POS(387, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(396, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "READ_ERROR\000", NULL,
    {.position = POS(397, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(386, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(383, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "407_10_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "413_10_fd\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "save\000", NULL,
    {.position = POS(418, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "421_16_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "421_21_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "422_10_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "422_20_data\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "427_7_fd\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "write_to\000", NULL,
    {.position = POS(434, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "437_22_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "437_27_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "437_34_fd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cancel_write_to\000", NULL,
    {.position = POS(441, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "447_13_efd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "447_18_data\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_COMPLETED\000", NULL,
    {.position = POS(449, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WRITE_ERROR\000", NULL,
    {.position = POS(454, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "463_33_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "468_10_fd\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "read_from\000", NULL,
    {.position = POS(472, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "483_22_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "483_27_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "483_30_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "492_22_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "492_27_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "492_34_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "493_10_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "493_14_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "493_22_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "502_13_efd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "502_18_data\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(511, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(511, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(503, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "526_17_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "526_22_io\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "527_10_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "527_14_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "535_23_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "535_28_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "535_35_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "544_13_efd\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "join_process\000", NULL,
    {.position = POS(552, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "559_32_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "559_44_pid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "562_13_epid\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "562_19_status\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PROCESS_JOINED\000", NULL,
    {.position = POS(564, 19)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "catch_signal\000", NULL,
    {.position = POS(570, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "start_catching_signals\000", NULL,
    {.position = POS(574, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "577_32_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "577_37_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "582_1_signals\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "585_21_signal\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SIGNAL\000", NULL,
    {.position = POS(587, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "stop_catching_signals\000", NULL,
    {.position = POS(599, 5)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "fork\000", NULL,
    {.position = POS(606, 21)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "exit\000", NULL,
    {.position = POS(616, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXIT_SUCCESS\000", NULL,
    {.position = POS(619, 14)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "io_task_manager\000std", NULL,
    {.const_idx = -func_std__io_task_manager}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "632_1_exit_status\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "633_1_io\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "io\000std_types", NULL,
    {.position = POS(633, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "634_1_updated_requests\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "635_1_new_requests\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "636_1_cancellations\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_key_order_set\000", NULL,
    {.position = POS(636, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "637_1_sent_messages\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_key_order_table\000", NULL,
    {.position = POS(637, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "638_1_removed_children\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "639_1_log_message\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "640_1_events\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "641_1_requests\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(642, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "643_1_current_task_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "644_1_iteration_no\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(651, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(652, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "log_level\000", NULL,
    {.position = POS(653, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(653, 50)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "655_3_parent_id\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "693_1_do_receive_messages\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(693, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "694_1_do_cancel_tasks\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "695_16_request\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(719, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(717, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "726_3_request\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "727_9_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "727_15_mode\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "727_21_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "727_27_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "727_37_continuation\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXIT_FAILURE\000", NULL,
    {.position = POS(732, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(746, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "762_1_error_handler\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "778_1_cancel_handler\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(648, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "805_11_request\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "806_9_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "806_15_mode\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "806_21_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "806_27_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "806_37_continuation\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "807_1_removed\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "filter\000", NULL,
    {.position = POS(809, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "831_20_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "834_7_receiver\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "834_17_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "default_value\000", NULL,
    {.position = POS(842, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "850_27_task\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(853, 28)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "859_24_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "871_20_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "871_25_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(875, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "878_20_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "921_20_request\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "922_9_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "922_15_mode\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "922_21_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "922_27_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "922_37_continuation\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "923_1_messages\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "931_27_request\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "932_9_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "932_15_mode\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "932_21_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "932_27_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "932_37_continuation\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDERR_FILENO\000", NULL,
    {.position = POS(955, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(957, 48)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "960_22_request\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "961_9_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "961_15_mode\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "961_21_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "961_27_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "961_37_continuation\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "979_16_mode\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "982_14_something_to_do\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(991, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write\000", NULL,
    {.position = POS(993, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "998_24_something_to_do\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_events\000", NULL,
    {.position = POS(1008, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1013_16_request\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1014_9_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1014_15_mode\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1014_21_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1014_27_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1014_37_continuation\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1023_13_task\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1030_6_handler\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1030_15_handler_arguments\000", NULL
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
