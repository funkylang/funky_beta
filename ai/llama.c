#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  uni_ai__MINIMUM_CONFIDENCE = -1,
  uni_ai__MAXIMUM_LENGTH = -2,
  uni_ai__STOP = -3,
  uni_ai__BACKTRACK = -4,
  uni_ai__LOG_LEVEL = -5,
  uni_ai__VERBOSE = -6,
  uni_ai__USE_COLOURS = -7,
  func_ai__load_ai_model = -8,
  string_1 = -9,
  chr_58 = -10,
  lambda_1 = -11,
  num_8080 = -12,
  lambda_2 = -13,
  lambda_3 = -14,
  lambda_4 = -15,
  string_2 = -16,
  string_3 = -17,
  lambda_5 = -18,
  lambda_6 = -19,
  num_4 = -20,
  lambda_7 = -21,
  string_4 = -22,
  lambda_8 = -23,
  string_5 = -24,
  lambda_9 = -25,
  string_6 = -26,
  lambda_10 = -27,
  string_7 = -28,
  lambda_11 = -29,
  num_3 = -30,
  minus_num_3 = -31,
  str_endoftext = -32,
  lambda_endoftext = -33,
  num_1 = -34,
  str_QUESTION = -35,
  lambda_QUESTION = -36,
  str_ANSWER = -37,
  lambda_ANSWER = -38,
  str_PREFIX = -39,
  lambda_PREFIX = -40,
  str_SUFFIX = -41,
  lambda_SUFFIX = -42,
  str_MIDDLE = -43,
  lambda_MIDDLE = -44,
  lambda_12 = -45,
  func_ai_types__model___ai__generate = -46,
  num_15 = -47,
  num_1024 = -48,
  num_0 = -49,
  lambda_13 = -50,
  lambda_14 = -51,
  string_8 = -52,
  lambda_15 = -53,
  lambda_16 = -54,
  lambda_17 = -55,
  func_generate_text = -56,
  lambda_18 = -57,
  lambda_19 = -58,
  lambda_20 = -59,
  lambda_21 = -60,
  lambda_22 = -61,
  str_end_of_stream = -62,
  lambda_23 = -63,
  lambda_loop = -64,
  lambda_24 = -65,
  num_1000 = -66,
  lambda_25 = -67,
  string_9 = -68,
  string_10 = -69,
  str_4_l = -70,
  lambda_26 = -71,
  lambda_27 = -72,
  str_431_ms = -73,
  lambda_28 = -74,
  string_11 = -75,
  lambda_29 = -76,
  chr_9 = -77,
  str_ht = -78,
  key_value_pair_295_21 = -79,
  str_5_l = -80,
  lambda_30 = -81,
  num_5 = -82,
  lambda_31 = -83,
  lambda_32 = -84,
  lambda_33 = -85,
  lambda_34 = -86,
  lambda_response_is_empty = -87,
  lambda_35 = -88,
  chr_10 = -89,
  lambda_36 = -90,
  num_2 = -91,
  lambda_37 = -92,
  lambda_38 = -93,
  lambda_39 = -94,
  lambda_40 = -95,
  lambda_41 = -96,
  string_12 = -97,
  lambda_42 = -98,
  minus_num_1 = -99,
  lambda_43 = -100,
  lambda_44 = -101,
  func_print_piece = -102,
  lambda_45 = -103,
  lambda_46 = -104,
  lambda_47 = -105,
  lambda_48 = -106,
  num_10 = -107,
  lambda_49 = -108,
  lambda_50 = -109,
  lambda_51 = -110,
  lambda_52 = -111,
  func_get_tokens = -112,
  str_model = -113,
  str_POST_get_tokens = -114,
  str_Connection_close = -115,
  chr_32 = -116,
  num_300 = -117,
  lambda_53 = -118,
  string_13 = -119,
  lambda_54 = -120,
  str_tokens = -121,
  str_begin_of_stream = -122,
  str_end_of_stream_2 = -123,
  str_newline = -124,
  str_end_of_text = -125,
  str_prefix = -126,
  str_suffix = -127,
  str_middle = -128,
  str_context_size = -129,
  func_ai_types__model___ai__tokenize = -130,
  lambda_55 = -131,
  str_content = -132,
  lambda_56 = -133,
  str_lines = -134,
  str_POST_tokenize_HT = -135,
  func_ai_types__model___ai__evaluate = -136,
  lambda_57 = -137,
  lambda_58 = -138,
  str_prompt = -139,
  str_logits = -140,
  str_brief = -141,
  str_n_probs = -142,
  key_value_pair_468_1 = -143,
  str_n_predict = -144,
  key_value_pair_469_1 = -145,
  str_POST_completion = -146,
  lambda_do_return_confidence_values = -147,
  lambda_59 = -148,
  lambda_60 = -149,
  str_token = -150,
  lambda_61 = -151,
  lambda_62 = -152,
  lambda_63 = -153,
  lambda_64 = -154,
  func_ai_types__model___ai__detokenize = -155,
  lambda_token_or_list_is_a_list = -156,
  lambda_65 = -157,
  lambda_66 = -158,
  lambda_67 = -159,
  lambda_68 = -160,
  lambda_69 = -161,
  lambda_70 = -162,
  lambda_71 = -163,
  func_token_to_piece = -164,
  lambda_piece_is_a_list = -165,
  lambda_2_loop = -166,
  lambda_72 = -167,
  lambda_73 = -168,
  lambda_74 = -169,
  lambda_75 = -170,
  lambda_76 = -171,
  lambda_77 = -172,
  num_128 = -173,
  lambda_78 = -174,
  lambda_79 = -175,
  num_224 = -176,
  num_192 = -177,
  lambda_80 = -178,
  lambda_81 = -179,
  num_240 = -180,
  lambda_82 = -181,
  lambda_83 = -182,
  num_248 = -183,
  lambda_84 = -184,
  lambda_85 = -185,
  lambda_86 = -186,
  string_14 = -187,
  lambda_87 = -188,
  lambda_88 = -189,
  chr_322 = -190,
  lambda_89 = -191,
  func_build_piece_table = -192,
  lambda_90 = -193,
  lambda_piece_is_a_string = -194,
  lambda_91 = -195,
  lambda_92 = -196,
  func_ai__escaped_token = -197,
  func_ai__escaped_piece = -198,
  lambda_3_loop = -199,
  lambda_93 = -200,
  lambda_94 = -201,
  chr_34 = -202,
  chr_92 = -203,
  sequence_605_2 = -204,
  lambda_nl = -205,
  str_n = -206,
  lambda_95 = -207
};

enum {
  var__START = FIRST_VAR-1,
  var_ai__pieces_of, // attribute
  var_std__assign, // extern
  var_ai__piece_table_of, // attribute
  var_ai__maximum_piece_length_of, // attribute
  var_ai__begin_of_stream_token_of, // attribute
  var_ai__end_of_stream_token_of, // attribute
  var_ai__newline_token_of, // attribute
  var_ai__space_token_of, // attribute
  var_ai__end_of_text_token_of, // attribute
  var_ai__prefix_token_of, // attribute
  var_ai__suffix_token_of, // attribute
  var_ai__middle_token_of, // attribute
  var_ai__question_token_of, // attribute
  var_ai__answer_token_of, // attribute
  var_ai__context_size_of, // attribute
  var_std__address_of, // attribute
  var_std__port_no_of, // attribute
  var_ai__evaluate, // attribute
  var_ai__tokenize, // attribute
  var_ai__detokenize, // attribute
  var_ai__generate, // attribute
  var_ai__MINIMUM_CONFIDENCE, // initialized
  var_ai__MAXIMUM_LENGTH, // initialized
  var_ai__STOP, // initialized
  var_ai__BACKTRACK, // initialized
  var_ai__LOG_LEVEL, // initialized
  var_ai__VERBOSE, // initialized
  var_ai__USE_COLOURS, // initialized
  var_ai_types__model, // derived
  var_std_types__object, // extern
  var_ai__load_ai_model, // initialized
  var_truncate_from, // extern
  var_159_1_port_no, // dynamic
  var_behind, // extern
  var_is_empty, // extern
  var_to_integer, // extern
  var_if, // extern
  var_name_of, // extern polymorphic
  var_address_of, // extern polymorphic
  var_port_no_of, // extern polymorphic
  var_165_1_model, // dynamic
  var_undefined, // extern
  var_is_an_error, // extern
  var_198_3_token, // dynamic
  var_198_9_piece, // dynamic
  var_is_a_string, // extern
  var_length_of, // extern
  var_std__less, // extern
  var_has_prefix, // extern
  var_has_suffix, // extern
  var_std__and, // extern
  var_std__or, // extern
  var_range, // extern
  var_std__minus, // extern
  var_next, // extern
  var_case, // extern
  var_for_each, // extern
  var_233_0_model, // dynamic
  var_std__key_value_pair, // extern
  var_false, // extern
  var_238_29_minimum_confidence, // dynamic
  var_239_27_maximum_length, // dynamic
  var_240_22_stop_text, // dynamic
  var_241_19_backtrack, // dynamic
  var_242_19_log_level, // dynamic
  var_243_21_be_verbose, // dynamic
  var_244_25_use_colours, // dynamic
  var_extract_options, // extern
  var_245_1_do_log, // dynamic
  var_true, // extern
  var_update_if, // extern
  var_BLACK, // extern
  var_ansi_text_colour, // extern
  var_print, // extern
  var_on, // extern
  var_249_16_text, // dynamic
  var_empty_list, // extern
  var_ansi_reset_colour, // extern
  var_println, // extern
  var_result_count, // extern
  var_std__equal, // extern
  var_pass, // extern
  var_257_17_tokens, // dynamic
  var_257_24_text, // dynamic
  var_257_29_no, // dynamic
  var_257_32_prefix, // dynamic
  var_is_defined, // extern
  var_contains, // extern
  var_262_15_t1, // dynamic
  var_current_time, // extern
  var_263_28_next_token, // dynamic
  var_263_40_confidence_values, // dynamic
  var_eprintln, // extern
  var_270_1_max_no, // dynamic
  var_272_34_next_confidence, // dynamic
  var_273_40_next_piece, // dynamic
  var_273_52_suffix, // dynamic
  var_276_1_dt, // dynamic
  var_std__times, // extern
  var_std__not, // extern
  var_ai__escaped_piece, // initialized
  var_std__string, // extern
  var_format, // extern
  var_replace_all, // extern
  var_trim_left, // extern
  var_append, // extern
  var_push, // extern
  var_std__plus, // extern
  var_310_16_response, // dynamic
  var_extend_to, // extern
  var_dup, // extern
  var_loop, // extern
  var_337_15_piece, // dynamic
  var_337_21_confidence, // dynamic
  var_339_1_confidence_delta, // dynamic
  var_std__negate, // extern
  var_RED, // extern
  var_colour_mixture, // extern
  var_GREEN, // extern
  var_WHITE, // extern
  var_cond, // extern
  var_ansi_background_colour, // extern
  var_insert_order_table, // extern
  var_to_json, // extern
  var_open_tcp_socket, // extern
  var_print_to, // extern
  var_373_7_result, // dynamic
  var_load, // extern
  var_between, // extern
  var_error, // extern
  var_from_utf8, // extern
  var_from_json, // extern
  var_to_utf8, // extern
  var_write_all_to, // extern
  var_455_1_use_tokens, // dynamic
  var_not, // extern
  var_483_1_info, // dynamic
  var_486_1_logits, // dynamic
  var_tuple, // extern
  var_map, // extern
  var_501_0_token_or_list, // dynamic
  var_502_0_prefix, // dynamic
  var_504_1_rc, // dynamic
  var_505_1_pieces, // dynamic
  var_is_a_list, // extern
  var_508_1_text, // dynamic
  var_520_30_str, // dynamic
  var_526_24_prefix_octets, // dynamic
  var_527_1_piece, // dynamic
  var_531_1_n, // dynamic
  var_532_1_i, // dynamic
  var_533_1_e, // dynamic
  var_538_1_octets, // dynamic
  var_character, // extern
  var_545_1_code, // dynamic
  var_inc, // extern
  var_std__bit_and, // extern
  var_plus, // extern
  var_any_of, // extern
  var_565_21_model, // dynamic
  var_566_1_pieces, // dynamic
  var_567_1_piece_table, // dynamic
  var_empty_hash_table, // extern
  var_569_3_idx, // dynamic
  var_569_7_piece, // dynamic
  var_max, // extern
  var_map_reduce, // extern
  var_ai__escaped_token, // initialized
  var_587_21_piece, // dynamic
  var_588_1_buf, // dynamic
  var_589_1_s, // dynamic
  var_590_1_n, // dynamic
  var_591_1_i, // dynamic
  var_598_1_chr, // dynamic
  var_std__sequence, // extern
  var__END
};


static TAB_NUM t_func_ai__load_ai_model[] = {
  12, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(10), // 155_0_name
  string_1, LOCAL(11), // 156_0_server
  // $address server .truncate_from. ':'
  var_truncate_from, 2, LOCAL(11), chr_58, 1, LOCAL(12),
  // $port_no server .behind. ':'
  var_behind, 2, LOCAL(11), chr_58, 1, var_159_1_port_no,
  // is_empty
  var_is_empty, 1, var_159_1_port_no, 1, LOCAL(1),
  // !port_no
  var_if, 3, LOCAL(1), lambda_1, lambda_2, 1, var_159_1_port_no,
  // $model
  LET, -3, var_ai_types__model, var_name_of, LOCAL(10), var_address_of, LOCAL(12), var_port_no_of, var_159_1_port_no, var_165_1_model,
  // get_tokens! model
  func_get_tokens, 1, var_165_1_model, IO_CALL(9), LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), LOCAL(7), LOCAL(8), LOCAL(9),
  // model.ai::pieces_of
  LET, -1, var_165_1_model, var_ai__pieces_of, LOCAL(1), var_165_1_model,
  // model.ai::begin_of_stream_token_of
  LET, -1, var_165_1_model, var_ai__begin_of_stream_token_of, LOCAL(2), var_165_1_model,
  // model.ai::end_of_stream_token_of
  LET, -1, var_165_1_model, var_ai__end_of_stream_token_of, LOCAL(3), var_165_1_model,
  // model.ai::newline_token_of
  LET, -1, var_165_1_model, var_ai__newline_token_of, LOCAL(4), var_165_1_model,
  // model.ai::end_of_text_token_of
  LET, -1, var_165_1_model, var_ai__end_of_text_token_of, LOCAL(5), var_165_1_model,
  // model.ai::prefix_token_of
  LET, -1, var_165_1_model, var_ai__prefix_token_of, LOCAL(6), var_165_1_model,
  // model.ai::suffix_token_of
  LET, -1, var_165_1_model, var_ai__suffix_token_of, LOCAL(7), var_165_1_model,
  // model.ai::middle_token_of
  LET, -1, var_165_1_model, var_ai__middle_token_of, LOCAL(8), var_165_1_model,
  // model.ai::context_size_of
  LET, -1, var_165_1_model, var_ai__context_size_of, LOCAL(9), var_165_1_model,
  // !model
  LET, -2, var_165_1_model, var_ai__question_token_of, var_undefined, var_ai__answer_token_of, var_undefined, var_165_1_model,
  // ai::pieces_of(model).is_an_error
  var_ai__pieces_of, 1, var_165_1_model, 1, LOCAL(1),
  // is_an_error
  var_is_an_error, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_3, lambda_4, TAIL_CALL,
  POS(158, 3),
  POS(159, 3),
  POS(162, 15),
  POS(160, 3),
  POS(165, 3),
  POS(170, 3),
  POS(171, 6),
  POS(172, 6),
  POS(173, 6),
  POS(174, 6),
  POS(175, 6),
  POS(176, 6),
  POS(177, 6),
  POS(178, 6),
  POS(179, 6),
  POS(180, 3),
  POS(185, 5),
  POS(185, 26),
  POS(184, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  8080
  LET, 1, num_8080, TAIL_CALL,
  POS(163, 9)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // to_integer
  var_to_integer, 1, var_159_1_port_no, 1, LOCAL(1),
  //  port_no.to_integer
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(164, 18),
  POS(164, 9)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // ai::pieces_of(model)
  var_ai__pieces_of, 1, var_165_1_model, 1, LOCAL(1),
  //  ai::pieces_of(model)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(186, 8),
  POS(186, 7)
};

static TAB_NUM t_lambda_4[] = {
  3, // locals
  0, // parameters
  // build_piece_table &model
  func_build_piece_table, 1, var_165_1_model, 1, var_165_1_model,
  // ai::piece_table_of(model)("@nl;")
  var_ai__piece_table_of, 1, var_165_1_model, 1, LOCAL(1),
  // !model.ai::newline_token_of ai::piece_table_of(model)("@nl;")
  LOCAL(1), 1, string_2, 1, LOCAL(3),
  // model.ai::newline_token_of ai::piece_table_of(model)("@nl;")
  LET, -1, var_165_1_model, var_ai__newline_token_of, LOCAL(3), var_165_1_model,
  // ai::piece_table_of(model)(" ")
  var_ai__piece_table_of, 1, var_165_1_model, 1, LOCAL(1),
  // !model.ai::space_token_of ai::piece_table_of(model)(" ")
  LOCAL(1), 1, string_3, 1, LOCAL(3),
  // model.ai::space_token_of ai::piece_table_of(model)(" ")
  LET, -1, var_165_1_model, var_ai__space_token_of, LOCAL(3), var_165_1_model,
  // ai::pieces_of(model)
  var_ai__pieces_of, 1, var_165_1_model, 1, LOCAL(1),
  // for_each ai::pieces_of(model)
  var_for_each, 3, LOCAL(1), lambda_5, lambda_12, TAIL_CALL,
  POS(188, 7),
  POS(194, 35),
  POS(194, 7),
  POS(194, 8),
  POS(195, 33),
  POS(195, 7),
  POS(195, 8),
  POS(197, 16),
  POS(197, 7)
};

static TAB_NUM t_lambda_5[] = {
  2, // locals
  2, // parameters
  var_198_3_token,
  var_198_9_piece,
  // is_a_string
  var_is_a_string, 1, var_198_9_piece, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_6, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_11, var_next, TAIL_CALL,
  POS(201, 21),
  POS(200, 15),
  POS(199, 11)
};

static TAB_NUM t_lambda_6[] = {
  3, // locals
  0, // parameters
  // length_of(piece) > 4
  var_length_of, 1, var_198_9_piece, 1, LOCAL(1),
  // 4
  var_std__less, 2, num_4, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_7, 1, LOCAL(3),
  // length_of(piece) > 4
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(202, 15),
  POS(202, 34),
  POS(200, 15),
  POS(202, 15)
};

static TAB_NUM t_lambda_7[] = {
  3, // locals
  0, // parameters
  // piece .has_prefix. "<|" && piece .has_suffix. "|>"
  var_has_prefix, 2, var_198_9_piece, string_4, 1, LOCAL(1),
  // piece .has_prefix. "<|" && piece .has_suffix. "|>"
  var_std__and, 2, LOCAL(1), lambda_8, 1, LOCAL(2),
  // 
  var_std__or, 2, LOCAL(2), lambda_9, 1, LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(204, 17),
  POS(204, 17),
  POS(203, 17),
  POS(203, 17)
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // piece .has_suffix. "|>"
  var_has_suffix, 2, var_198_9_piece, string_5, 1, LOCAL(1),
  // piece .has_suffix. "|>"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(204, 44),
  POS(204, 44)
};

static TAB_NUM t_lambda_9[] = {
  2, // locals
  0, // parameters
  // piece .has_prefix. ">>" && piece .has_suffix. "<<"
  var_has_prefix, 2, var_198_9_piece, string_6, 1, LOCAL(1),
  // piece .has_prefix. ">>" && piece .has_suffix. "<<"
  var_std__and, 2, LOCAL(1), lambda_10, 1, LOCAL(2),
  // piece .has_prefix. ">>" && piece .has_suffix. "<<"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(205, 17),
  POS(205, 17),
  POS(205, 17)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // piece .has_suffix. "<<"
  var_has_suffix, 2, var_198_9_piece, string_7, 1, LOCAL(1),
  // piece .has_suffix. "<<"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(205, 44),
  POS(205, 44)
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // $special range(piece 3 -3)
  var_range, 3, var_198_9_piece, num_3, minus_num_3, 1, LOCAL(1),
  // case special
  var_case, 14, LOCAL(1), str_endoftext, lambda_endoftext, str_QUESTION, lambda_QUESTION, str_ANSWER, lambda_ANSWER, str_PREFIX, lambda_PREFIX, str_SUFFIX, lambda_SUFFIX, str_MIDDLE, lambda_MIDDLE, var_next, TAIL_CALL,
  POS(207, 15),
  POS(208, 15)
};

static TAB_NUM t_lambda_endoftext[] = {
  2, // locals
  0, // parameters
  // !model.ai::end_of_text_token_of token-1
  var_std__minus, 2, var_198_3_token, num_1, 1, LOCAL(2),
  // model.ai::end_of_text_token_of token-1
  LET, -1, var_165_1_model, var_ai__end_of_text_token_of, LOCAL(2), var_165_1_model,
  // next
  var_next, 0, TAIL_CALL,
  POS(210, 19),
  POS(210, 20),
  POS(211, 19)
};

static TAB_NUM t_lambda_QUESTION[] = {
  2, // locals
  0, // parameters
  // !model.ai::question_token_of token-1
  var_std__minus, 2, var_198_3_token, num_1, 1, LOCAL(2),
  // model.ai::question_token_of token-1
  LET, -1, var_165_1_model, var_ai__question_token_of, LOCAL(2), var_165_1_model,
  // next
  var_next, 0, TAIL_CALL,
  POS(213, 19),
  POS(213, 20),
  POS(214, 19)
};

static TAB_NUM t_lambda_ANSWER[] = {
  2, // locals
  0, // parameters
  // !model.ai::answer_token_of token-1
  var_std__minus, 2, var_198_3_token, num_1, 1, LOCAL(2),
  // model.ai::answer_token_of token-1
  LET, -1, var_165_1_model, var_ai__answer_token_of, LOCAL(2), var_165_1_model,
  // next
  var_next, 0, TAIL_CALL,
  POS(216, 19),
  POS(216, 20),
  POS(217, 19)
};

static TAB_NUM t_lambda_PREFIX[] = {
  2, // locals
  0, // parameters
  // !model.ai::prefix_token_of token-1
  var_std__minus, 2, var_198_3_token, num_1, 1, LOCAL(2),
  // model.ai::prefix_token_of token-1
  LET, -1, var_165_1_model, var_ai__prefix_token_of, LOCAL(2), var_165_1_model,
  // next
  var_next, 0, TAIL_CALL,
  POS(219, 19),
  POS(219, 20),
  POS(220, 19)
};

static TAB_NUM t_lambda_SUFFIX[] = {
  2, // locals
  0, // parameters
  // !model.ai::suffix_token_of token-1
  var_std__minus, 2, var_198_3_token, num_1, 1, LOCAL(2),
  // model.ai::suffix_token_of token-1
  LET, -1, var_165_1_model, var_ai__suffix_token_of, LOCAL(2), var_165_1_model,
  // next
  var_next, 0, TAIL_CALL,
  POS(222, 19),
  POS(222, 20),
  POS(223, 19)
};

static TAB_NUM t_lambda_MIDDLE[] = {
  2, // locals
  0, // parameters
  // !model.ai::middle_token_of token-1
  var_std__minus, 2, var_198_3_token, num_1, 1, LOCAL(2),
  // model.ai::middle_token_of token-1
  LET, -1, var_165_1_model, var_ai__middle_token_of, LOCAL(2), var_165_1_model,
  // next
  var_next, 0, TAIL_CALL,
  POS(225, 19),
  POS(225, 20),
  POS(226, 19)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  model
  LET, 1, var_165_1_model, TAIL_CALL,
  POS(229, 11)
};

static TAB_NUM t_func_ai_types__model___ai__generate[] = {
  10, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_233_0_model,
  REST_PARAMETER, LOCAL(8), // 234_0_options
  MANDATORY_PARAMETER, LOCAL(9), // 235_0_prompt
  // ai::MINIMUM_CONFIDENCE = 15 $minimum_confidence
  var_std__key_value_pair, 2, var_ai__MINIMUM_CONFIDENCE, num_15, 1, LOCAL(1),
  // ai::MAXIMUM_LENGTH = 1024 $maximum_length
  var_std__key_value_pair, 2, var_ai__MAXIMUM_LENGTH, num_1024, 1, LOCAL(2),
  // ai::STOP = undefined $stop_text
  var_std__key_value_pair, 2, var_ai__STOP, var_undefined, 1, LOCAL(3),
  // ai::BACKTRACK = 0 $backtrack
  var_std__key_value_pair, 2, var_ai__BACKTRACK, num_0, 1, LOCAL(4),
  // ai::LOG_LEVEL = 0 $log_level
  var_std__key_value_pair, 2, var_ai__LOG_LEVEL, num_0, 1, LOCAL(5),
  // ai::VERBOSE = false $be_verbose
  var_std__key_value_pair, 2, var_ai__VERBOSE, var_false, 1, LOCAL(6),
  // ai::USE_COLOURS = false $use_colours
  var_std__key_value_pair, 2, var_ai__USE_COLOURS, var_false, 1, LOCAL(7),
  // extract_options options
  var_extract_options, 8, LOCAL(8), LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), LOCAL(7), 7, var_238_29_minimum_confidence, var_239_27_maximum_length, var_240_22_stop_text, var_241_19_backtrack, var_242_19_log_level, var_243_21_be_verbose, var_244_25_use_colours,
  // $do_log log_level > 0
  var_std__less, 2, num_0, var_242_19_log_level, 1, var_245_1_do_log,
  // update_if use_colours &be_verbose -> true
  var_update_if, 3, var_244_25_use_colours, var_243_21_be_verbose, lambda_13, 1, var_243_21_be_verbose,
  // on use_colours: print! ansi_text_colour(BLACK)
  var_on, 2, var_244_25_use_colours, lambda_14, IO_CALL(0),
  // ai::tokenize! $tokens model prompt
  var_ai__tokenize, 2, var_233_0_model, LOCAL(9), IO_CALL(1), LOCAL(10),
  // generate_text! $text $_max_no tokens "" 0 empty_list
  func_generate_text, 4, LOCAL(10), string_8, num_0, var_empty_list, IO_CALL(2), var_249_16_text, LOCAL(1),
  // on use_colours: print! ansi_reset_colour()
  var_on, 2, var_244_25_use_colours, lambda_15, IO_CALL(0),
  // on be_verbose: println!
  var_on, 2, var_243_21_be_verbose, lambda_16, IO_CALL(0),
  // result_count() == 1
  var_result_count, 0, 1, LOCAL(1),
  // result_count() == 1
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_17, var_pass, TAIL_CALL,
  POS(238, 5),
  POS(239, 5),
  POS(240, 5),
  POS(241, 5),
  POS(242, 5),
  POS(243, 5),
  POS(244, 5),
  POS(237, 3),
  POS(245, 3),
  POS(246, 3),
  POS(247, 3),
  POS(248, 3),
  POS(249, 3),
  POS(250, 3),
  POS(251, 3),
  POS(253, 5),
  POS(253, 5),
  POS(252, 3)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(246, 39)
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  0, // parameters
  // ansi_text_colour(BLACK)
  var_ansi_text_colour, 1, var_BLACK, 1, LOCAL(1),
  // print! ansi_text_colour(BLACK)
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(247, 26),
  POS(247, 19)
};

static TAB_NUM t_lambda_15[] = {
  1, // locals
  0, // parameters
  // ansi_reset_colour()
  var_ansi_reset_colour, 0, 1, LOCAL(1),
  // print! ansi_reset_colour()
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(250, 26),
  POS(250, 19)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  // println!
  var_println, 0, IO_TAIL_CALL,
  POS(251, 18)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_249_16_text, TAIL_CALL,
  POS(254, 7)
};

static TAB_NUM t_func_generate_text[] = {
  2, // locals
  4, // parameters
  var_257_17_tokens,
  var_257_24_text,
  var_257_29_no,
  var_257_32_prefix,
  // is_defined && text .contains. stop_text
  var_is_defined, 1, var_240_22_stop_text, 1, LOCAL(1),
  // is_defined && text .contains. stop_text
  var_std__and, 2, LOCAL(1), lambda_18, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_19, lambda_20, IO_TAIL_CALL,
  POS(259, 17),
  POS(259, 17),
  POS(258, 5)
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  0, // parameters
  // text .contains. stop_text
  var_contains, 2, var_257_24_text, var_240_22_stop_text, 1, LOCAL(1),
  // text .contains. stop_text
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(259, 31),
  POS(259, 31)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  //  text no
  LET, 2, var_257_24_text, var_257_29_no, TAIL_CALL,
  POS(260, 9)
};

static TAB_NUM t_lambda_20[] = {
  2, // locals
  0, // parameters
  // current_time! $t1
  var_current_time, 0, IO_CALL(1), var_262_15_t1,
  // ai::evaluate! model tokens $next_token $confidence_values
  var_ai__evaluate, 2, var_233_0_model, var_257_17_tokens, IO_CALL(2), var_263_28_next_token, var_263_40_confidence_values,
  // ai::end_of_stream_token_of(model):
  var_ai__end_of_stream_token_of, 1, var_233_0_model, 1, LOCAL(1),
  // next_token == ai::end_of_stream_token_of(model):
  var_std__equal, 2, var_263_28_next_token, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_21, lambda_23, IO_TAIL_CALL,
  POS(262, 9),
  POS(263, 9),
  POS(265, 25),
  POS(265, 11),
  POS(264, 9)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  // on do_log:
  var_on, 2, var_245_1_do_log, lambda_22, IO_CALL(0),
  // -> text no
  LET, 2, var_257_24_text, var_257_29_no, TAIL_CALL,
  POS(266, 13),
  POS(268, 13)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  // eprintln! "<end of stream>"
  var_eprintln, 1, str_end_of_stream, IO_TAIL_CALL,
  POS(267, 15)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  // $max_no no
  LET, 1, var_257_29_no, 1, var_270_1_max_no,
  // loop:
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(270, 13),
  POS(271, 13)
};

static TAB_NUM t_lambda_loop[] = {
  3, // locals
  0, // parameters
  // confidence_values(1) !next_token $next_confidence
  var_263_40_confidence_values, 1, num_1, 1, LOCAL(1),
  // confidence_values(1) !next_token $next_confidence
  LOCAL(1), 0, 2, var_263_28_next_token, var_272_34_next_confidence,
  // ai::detokenize model next_token prefix $next_piece $suffix
  var_ai__detokenize, 3, var_233_0_model, var_263_28_next_token, var_257_32_prefix, 2, var_273_40_next_piece, var_273_52_suffix,
  // on do_log:
  var_on, 2, var_245_1_do_log, lambda_24, IO_CALL(0),
  // next_confidence >= minimum_confidence || no < 5:
  var_std__less, 2, var_272_34_next_confidence, var_238_29_minimum_confidence, 1, LOCAL(1),
  // next_confidence >= minimum_confidence || no < 5:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_confidence >= minimum_confidence || no < 5:
  var_std__or, 2, LOCAL(2), lambda_30, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_31, lambda_44, IO_TAIL_CALL,
  POS(272, 15),
  POS(272, 15),
  POS(273, 15),
  POS(274, 15),
  POS(303, 17),
  POS(303, 17),
  POS(303, 17),
  POS(302, 15)
};

static TAB_NUM t_lambda_24[] = {
  3, // locals
  0, // parameters
  // current_time! $t2
  var_current_time, 0, IO_CALL(1), LOCAL(3),
  // t2-t1) # in ms
  var_std__minus, 2, LOCAL(3), var_262_15_t1, 1, LOCAL(1),
  // $dt 1000*(t2-t1) # in ms
  var_std__times, 2, num_1000, LOCAL(1), 1, var_276_1_dt,
  // 1:
  var_std__less, 2, num_1, var_242_19_log_level, 1, LOCAL(1),
  // 1:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_25, lambda_26, IO_TAIL_CALL,
  POS(275, 17),
  POS(276, 27),
  POS(276, 17),
  POS(278, 32),
  POS(278, 32),
  POS(277, 17)
};

static TAB_NUM t_lambda_25[] = {
  2, // locals
  0, // parameters
  // ai::escaped_piece(next_piece))@quot;:"
  var_ai__escaped_piece, 1, var_273_40_next_piece, 1, LOCAL(1),
  // $token_string
  var_std__string, 3, string_9, LOCAL(1), string_10, 1, LOCAL(2),
  // format
  var_format, 4, str_4_l, var_257_29_no, LOCAL(2), var_272_34_next_confidence, 1, LOCAL(1),
  // eprintln!
  var_eprintln, 1, LOCAL(1), IO_TAIL_CALL,
  POS(280, 32),
  POS(279, 21),
  POS(282, 23),
  POS(281, 21)
};

static TAB_NUM t_lambda_26[] = {
  2, // locals
  0, // parameters
  // log_level >= 3:
  var_std__less, 2, var_242_19_log_level, num_3, 1, LOCAL(1),
  // log_level >= 3:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_27, lambda_28, IO_CALL(0),
  // for_each confidence_values
  var_for_each, 3, var_263_40_confidence_values, lambda_29, var_pass, IO_TAIL_CALL,
  POS(287, 23),
  POS(287, 23),
  POS(286, 21),
  POS(291, 21)
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // format("-[#%4|%3.1 ms]---------------" no dt)
  var_format, 3, str_431_ms, var_257_29_no, var_276_1_dt, 1, LOCAL(1),
  // eprintln! format("-[#%4|%3.1 ms]---------------" no dt)
  var_eprintln, 1, LOCAL(1), IO_TAIL_CALL,
  POS(288, 35),
  POS(288, 25)
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // format("-[#%4]------------------------" no dt)
  var_format, 3, string_11, var_257_29_no, var_276_1_dt, 1, LOCAL(1),
  // eprintln! format("-[#%4]------------------------" no dt)
  var_eprintln, 1, LOCAL(1), IO_TAIL_CALL,
  POS(290, 35),
  POS(290, 25)
};

static TAB_NUM t_lambda_29[] = {
  6, // locals
  1, // parameters
  LOCAL(2), // 292_3_confidence_value
  // confidence_value $token $confidence
  LOCAL(2), 0, 2, LOCAL(3), LOCAL(4),
  // ai::detokenize model token prefix $piece
  var_ai__detokenize, 3, var_233_0_model, LOCAL(3), var_257_32_prefix, 1, LOCAL(5),
  // replace_all &piece '@ht;' = "<<<ht>>>"
  var_replace_all, 2, LOCAL(5), key_value_pair_295_21, 1, LOCAL(5),
  // ai::escaped_piece(piece))@quot;:"
  var_ai__escaped_piece, 1, LOCAL(5), 1, LOCAL(1),
  // $token_string "@quot;@(ai::escaped_piece(piece))@quot;:"
  var_std__string, 3, string_9, LOCAL(1), string_10, 1, LOCAL(6),
  // format
  var_format, 4, str_5_l, LOCAL(3), LOCAL(6), LOCAL(4), 1, LOCAL(1),
  // eprintln!
  var_eprintln, 1, LOCAL(1), IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(293, 25),
  POS(294, 25),
  POS(295, 25),
  POS(296, 48),
  POS(296, 25),
  POS(298, 27),
  POS(297, 25),
  POS(300, 25)
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  0, // parameters
  // no < 5:
  var_std__less, 2, var_257_29_no, num_5, 1, LOCAL(1),
  // no < 5:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(303, 58),
  POS(303, 58)
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  0, // parameters
  // no == 0 &next_piece: trim_left next_piece
  var_std__equal, 2, var_257_29_no, num_0, 1, LOCAL(1),
  // update_if no == 0 &next_piece: trim_left next_piece
  var_update_if, 3, LOCAL(1), var_273_40_next_piece, lambda_32, 1, var_273_40_next_piece,
  // print_piece! next_piece next_confidence
  func_print_piece, 2, var_273_40_next_piece, var_272_34_next_confidence, IO_CALL(0),
  // no >= maximum_length
  var_std__less, 2, var_257_29_no, var_239_27_maximum_length, 1, LOCAL(1),
  // no >= maximum_length
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_33, lambda_34, IO_TAIL_CALL,
  POS(304, 29),
  POS(304, 19),
  POS(305, 19),
  POS(307, 21),
  POS(307, 21),
  POS(306, 19)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  // trim_left next_piece
  var_trim_left, 1, var_273_40_next_piece, TAIL_CALL,
  POS(304, 50)
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // append(text next_piece) no
  var_append, 2, var_257_24_text, var_273_40_next_piece, 1, LOCAL(1),
  //  append(text next_piece) no
  LET, 2, LOCAL(1), var_257_29_no, TAIL_CALL,
  POS(308, 24),
  POS(308, 23)
};

static TAB_NUM t_lambda_34[] = {
  4, // locals
  0, // parameters
  // push(tokens next_token)
  var_push, 2, var_257_17_tokens, var_263_28_next_token, 1, LOCAL(1),
  // append(text next_piece)
  var_append, 2, var_257_24_text, var_273_40_next_piece, 1, LOCAL(2),
  // no+1
  var_std__plus, 2, var_257_29_no, num_1, 1, LOCAL(3),
  // generate_text! $response $highest_no
  func_generate_text, 4, LOCAL(1), LOCAL(2), LOCAL(3), var_273_52_suffix, IO_CALL(2), var_310_16_response, LOCAL(4),
  // extend_to &max_no highest_no
  var_extend_to, 2, var_270_1_max_no, LOCAL(4), 1, var_270_1_max_no,
  // is_empty:
  var_is_empty, 1, var_310_16_response, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_response_is_empty, lambda_43, IO_TAIL_CALL,
  POS(311, 25),
  POS(312, 25),
  POS(313, 25),
  POS(310, 23),
  POS(315, 23),
  POS(317, 34),
  POS(316, 23)
};

static TAB_NUM t_lambda_response_is_empty[] = {
  1, // locals
  0, // parameters
  // next_piece == "@nl;"
  var_std__equal, 2, var_273_40_next_piece, string_2, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_35, lambda_36, IO_TAIL_CALL,
  POS(319, 29),
  POS(318, 27)
};

static TAB_NUM t_lambda_35[] = {
  1, // locals
  0, // parameters
  // push(text '@nl;') max_no # stop backtracking
  var_push, 2, var_257_24_text, chr_10, 1, LOCAL(1),
  //  push(text '@nl;') max_no # stop backtracking
  LET, 2, LOCAL(1), var_270_1_max_no, TAIL_CALL,
  POS(320, 32),
  POS(320, 31)
};

static TAB_NUM t_lambda_36[] = {
  3, // locals
  0, // parameters
  // length_of(confidence_values) < 2
  var_length_of, 1, var_263_40_confidence_values, 1, LOCAL(1),
  // length_of(confidence_values) < 2
  var_std__less, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // 
  var_std__or, 2, LOCAL(2), lambda_37, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_38, lambda_39, IO_TAIL_CALL,
  POS(324, 35),
  POS(324, 35),
  POS(323, 35),
  POS(322, 31)
};

static TAB_NUM t_lambda_37[] = {
  2, // locals
  0, // parameters
  // no+backtrack
  var_std__plus, 2, var_257_29_no, var_241_19_backtrack, 1, LOCAL(1),
  // no+backtrack
  var_std__less, 2, LOCAL(1), var_270_1_max_no, 1, LOCAL(2),
  // max_no > no+backtrack
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(325, 44),
  POS(325, 44),
  POS(325, 35)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  //  "" max_no
  LET, 2, string_8, var_270_1_max_no, TAIL_CALL,
  POS(326, 35)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  // on use_colours: print! ansi_reset_colour()
  var_on, 2, var_244_25_use_colours, lambda_40, IO_CALL(0),
  // on be_verbose: print!
  var_on, 2, var_243_21_be_verbose, lambda_41, IO_CALL(0),
  // on use_colours: print! ansi_text_colour(BLACK)
  var_on, 2, var_244_25_use_colours, lambda_42, IO_CALL(0),
  // range &confidence_values 2 -1
  var_range, 3, var_263_40_confidence_values, num_2, minus_num_1, 1, var_263_40_confidence_values,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(328, 35),
  POS(329, 35),
  POS(331, 35),
  POS(332, 35),
  POS(333, 35)
};

static TAB_NUM t_lambda_40[] = {
  1, // locals
  0, // parameters
  // ansi_reset_colour()
  var_ansi_reset_colour, 0, 1, LOCAL(1),
  // print! ansi_reset_colour()
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(328, 58),
  POS(328, 51)
};

static TAB_NUM t_lambda_41[] = {
  2, // locals
  0, // parameters
  // length_of(next_piece))
  var_length_of, 1, var_273_40_next_piece, 1, LOCAL(1),
  // dup("@bs; @bs;" length_of(next_piece))
  var_dup, 2, string_12, LOCAL(1), 1, LOCAL(2),
  // print!
  var_print, 1, LOCAL(2), IO_TAIL_CALL,
  POS(330, 53),
  POS(330, 37),
  POS(329, 50)
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // ansi_text_colour(BLACK)
  var_ansi_text_colour, 1, var_BLACK, 1, LOCAL(1),
  // print! ansi_text_colour(BLACK)
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(331, 58),
  POS(331, 51)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  //  response max_no
  LET, 2, var_310_16_response, var_270_1_max_no, TAIL_CALL,
  POS(334, 27)
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  //  "" max_no
  LET, 2, string_8, var_270_1_max_no, TAIL_CALL,
  POS(335, 19)
};

static TAB_NUM t_func_print_piece[] = {
  0, // locals
  2, // parameters
  var_337_15_piece,
  var_337_21_confidence,
  // on use_colours:
  var_on, 2, var_244_25_use_colours, lambda_45, IO_CALL(0),
  // on be_verbose: print! piece
  var_on, 2, var_243_21_be_verbose, lambda_52, IO_TAIL_CALL,
  POS(338, 5),
  POS(355, 5)
};

static TAB_NUM t_lambda_45[] = {
  2, // locals
  0, // parameters
  // $confidence_delta confidence-minimum_confidence
  var_std__minus, 2, var_337_21_confidence, var_238_29_minimum_confidence, 1, var_339_1_confidence_delta,
  // $colour
  var_cond, 3, lambda_46, lambda_48, lambda_50, 1, LOCAL(2),
  // ansi_background_colour(colour)
  var_ansi_background_colour, 1, LOCAL(2), 1, LOCAL(1),
  // print! ansi_background_colour(colour)
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(339, 7),
  POS(340, 7),
  POS(354, 14),
  POS(354, 7)
};

static TAB_NUM t_lambda_46[] = {
  1, // locals
  0, // parameters
  // confidence_delta < 0 ->
  var_std__less, 2, var_339_1_confidence_delta, num_0, 1, LOCAL(1),
  //  confidence_delta < 0 ->
  LET, 2, LOCAL(1), lambda_47, TAIL_CALL,
  POS(342, 14),
  POS(342, 13)
};

static TAB_NUM t_lambda_47[] = {
  5, // locals
  0, // parameters
  // confidence_delta
  var_std__negate, 1, var_339_1_confidence_delta, 1, LOCAL(1),
  // BLACK = -confidence_delta
  var_std__key_value_pair, 2, var_BLACK, LOCAL(1), 1, LOCAL(2),
  // minimum_confidence+confidence_delta
  var_std__plus, 2, var_238_29_minimum_confidence, var_339_1_confidence_delta, 1, LOCAL(3),
  // RED = minimum_confidence+confidence_delta
  var_std__key_value_pair, 2, var_RED, LOCAL(3), 1, LOCAL(4),
  // colour_mixture
  var_colour_mixture, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  // 
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(344, 24),
  POS(344, 15),
  POS(345, 21),
  POS(345, 15),
  POS(343, 13),
  POS(342, 37)
};

static TAB_NUM t_lambda_48[] = {
  1, // locals
  0, // parameters
  // 10 ->
  var_std__less, 2, num_10, var_339_1_confidence_delta, 1, LOCAL(1),
  //  confidence_delta > 10 ->
  LET, 2, LOCAL(1), lambda_49, TAIL_CALL,
  POS(346, 33),
  POS(346, 13)
};

static TAB_NUM t_lambda_49[] = {
  4, // locals
  0, // parameters
  // GREEN = 10
  var_std__key_value_pair, 2, var_GREEN, num_10, 1, LOCAL(1),
  // confidence_delta-10
  var_std__minus, 2, var_339_1_confidence_delta, num_10, 1, LOCAL(2),
  // WHITE = confidence_delta-10
  var_std__key_value_pair, 2, var_WHITE, LOCAL(2), 1, LOCAL(3),
  // colour_mixture
  var_colour_mixture, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // 
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(348, 15),
  POS(349, 23),
  POS(349, 15),
  POS(347, 13),
  POS(346, 38)
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  //  true ->
  LET, 2, var_true, lambda_51, TAIL_CALL,
  POS(350, 13)
};

static TAB_NUM t_lambda_51[] = {
  4, // locals
  0, // parameters
  // 10-confidence_delta
  var_std__minus, 2, num_10, var_339_1_confidence_delta, 1, LOCAL(1),
  // RED = 10-confidence_delta
  var_std__key_value_pair, 2, var_RED, LOCAL(1), 1, LOCAL(2),
  // GREEN = confidence_delta
  var_std__key_value_pair, 2, var_GREEN, var_339_1_confidence_delta, 1, LOCAL(3),
  // colour_mixture
  var_colour_mixture, 2, LOCAL(2), LOCAL(3), 1, LOCAL(4),
  // 
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(352, 21),
  POS(352, 15),
  POS(353, 15),
  POS(351, 13),
  POS(350, 21)
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  // print! piece
  var_print, 1, var_337_15_piece, IO_TAIL_CALL,
  POS(355, 20)
};

static TAB_NUM t_func_get_tokens[] = {
  7, // locals
  1, // parameters
  LOCAL(4), // 357_14_model
  // name_of(model)
  var_name_of, 1, LOCAL(4), 1, LOCAL(1),
  // model" = name_of(model)
  var_std__key_value_pair, 2, str_model, LOCAL(1), 1, LOCAL(2),
  // insert_order_table
  var_insert_order_table, 1, LOCAL(2), 1, LOCAL(3),
  // $json
  var_to_json, 1, LOCAL(3), 1, LOCAL(5),
  // address_of(model) port_no_of(model)
  var_address_of, 1, LOCAL(4), 1, LOCAL(1),
  // port_no_of(model)
  var_port_no_of, 1, LOCAL(4), 1, LOCAL(2),
  // open_tcp_socket! $fd address_of(model) port_no_of(model)
  var_open_tcp_socket, 2, LOCAL(1), LOCAL(2), IO_CALL(1), LOCAL(6),
  // length_of(json))@cr;
  var_length_of, 1, LOCAL(5), 1, LOCAL(1),
  // "
  var_std__string, 5, str_POST_get_tokens, LOCAL(1), str_Connection_close, LOCAL(5), string_2, 1, LOCAL(2),
  // print_to! fd "
  var_print_to, 2, LOCAL(6), LOCAL(2), IO_CALL(0),
  // load! $result fd
  var_load, 1, LOCAL(6), IO_CALL(1), var_373_7_result,
  // between(result ' ' ' ').to_integer
  var_between, 3, var_373_7_result, chr_32, chr_32, 1, LOCAL(1),
  // $error_code between(result ' ' ' ').to_integer
  var_to_integer, 1, LOCAL(1), 1, LOCAL(7),
  // error_code >= 300:
  var_std__less, 2, LOCAL(7), num_300, 1, LOCAL(1),
  // error_code >= 300:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_53, lambda_54, TAIL_CALL,
  POS(364, 19),
  POS(364, 10),
  POS(363, 7),
  POS(361, 3),
  POS(365, 24),
  POS(365, 42),
  POS(365, 3),
  POS(369, 23),
  POS(366, 16),
  POS(366, 3),
  POS(373, 3),
  POS(376, 15),
  POS(376, 3),
  POS(378, 5),
  POS(378, 5),
  POS(377, 3)
};

static TAB_NUM t_lambda_53[] = {
  1, // locals
  0, // parameters
  // result .behind. "@cr;@nl;@cr;@nl;"
  var_behind, 2, var_373_7_result, string_13, 1, LOCAL(1),
  // error result .behind. "@cr;@nl;@cr;@nl;"
  var_error, 1, LOCAL(1), TAIL_CALL,
  POS(379, 13),
  POS(379, 7)
};

static TAB_NUM t_lambda_54[] = {
  10, // locals
  0, // parameters
  // behind &result "@cr;@nl;@cr;@nl;"
  var_behind, 2, var_373_7_result, string_13, 1, var_373_7_result,
  // from_utf8 &result
  var_from_utf8, 1, var_373_7_result, 1, var_373_7_result,
  // $info result.from_json
  var_from_json, 1, var_373_7_result, 1, LOCAL(10),
  // info("tokens")
  LOCAL(10), 1, str_tokens, 1, LOCAL(1),
  // info("begin_of_stream")
  LOCAL(10), 1, str_begin_of_stream, 1, LOCAL(2),
  // info("end_of_stream")
  LOCAL(10), 1, str_end_of_stream_2, 1, LOCAL(3),
  // info("newline")
  LOCAL(10), 1, str_newline, 1, LOCAL(4),
  // info("end_of_text")
  LOCAL(10), 1, str_end_of_text, 1, LOCAL(5),
  // info("prefix")
  LOCAL(10), 1, str_prefix, 1, LOCAL(6),
  // info("suffix")
  LOCAL(10), 1, str_suffix, 1, LOCAL(7),
  // info("middle")
  LOCAL(10), 1, str_middle, 1, LOCAL(8),
  // info("context_size")
  LOCAL(10), 1, str_context_size, 1, LOCAL(9),
  // ->
  LET, 9, LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), LOCAL(7), LOCAL(8), LOCAL(9), TAIL_CALL,
  POS(381, 7),
  POS(382, 7),
  POS(383, 7),
  POS(385, 9),
  POS(386, 9),
  POS(387, 9),
  POS(388, 9),
  POS(389, 9),
  POS(390, 9),
  POS(391, 9),
  POS(392, 9),
  POS(393, 9),
  POS(384, 7)
};

static TAB_NUM t_func_ai_types__model___ai__tokenize[] = {
  11, // locals
  2, // parameters
  LOCAL(5), // 403_0_model
  LOCAL(6), // 404_0_text
  // is_a_string
  var_is_a_string, 1, LOCAL(6), 1, LOCAL(1),
  // $CONTENT
  var_if, 3, LOCAL(1), lambda_55, lambda_56, 1, LOCAL(7),
  // name_of(model)
  var_name_of, 1, LOCAL(5), 1, LOCAL(1),
  // model" = name_of(model)
  var_std__key_value_pair, 2, str_model, LOCAL(1), 1, LOCAL(2),
  // CONTENT = text
  var_std__key_value_pair, 2, LOCAL(7), LOCAL(6), 1, LOCAL(3),
  // insert_order_table
  var_insert_order_table, 2, LOCAL(2), LOCAL(3), 1, LOCAL(4),
  // $json
  var_to_json, 1, LOCAL(4), 1, LOCAL(8),
  // to_utf8 &json
  var_to_utf8, 1, LOCAL(8), 1, LOCAL(8),
  // address_of(model) port_no_of(model)
  var_address_of, 1, LOCAL(5), 1, LOCAL(1),
  // port_no_of(model)
  var_port_no_of, 1, LOCAL(5), 1, LOCAL(2),
  // open_tcp_socket! $fd address_of(model) port_no_of(model)
  var_open_tcp_socket, 2, LOCAL(1), LOCAL(2), IO_CALL(1), LOCAL(9),
  // length_of(json))@cr;
  var_length_of, 1, LOCAL(8), 1, LOCAL(1),
  // "
  var_std__string, 5, str_POST_tokenize_HT, LOCAL(1), str_Connection_close, LOCAL(8), string_2, 1, LOCAL(2),
  // write_all_to! fd "
  var_write_all_to, 2, LOCAL(9), LOCAL(2), IO_CALL(0),
  // load! $result fd
  var_load, 1, LOCAL(9), IO_CALL(1), LOCAL(10),
  // behind &result "@cr;@nl;@cr;@nl;"
  var_behind, 2, LOCAL(10), string_13, 1, LOCAL(10),
  // $info result.from_json
  var_from_json, 1, LOCAL(10), 1, LOCAL(11),
  // info("tokens")
  LOCAL(11), 1, str_tokens, 1, LOCAL(1),
  // -> info("tokens")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(411, 12),
  POS(409, 3),
  POS(417, 19),
  POS(417, 10),
  POS(418, 9),
  POS(416, 7),
  POS(414, 3),
  POS(419, 3),
  POS(420, 24),
  POS(420, 42),
  POS(420, 3),
  POS(424, 23),
  POS(421, 20),
  POS(421, 3),
  POS(428, 3),
  POS(431, 3),
  POS(432, 3),
  POS(433, 6),
  POS(433, 3)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  //  "content"
  LET, 1, str_content, TAIL_CALL,
  POS(412, 9)
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  //  "lines"
  LET, 1, str_lines, TAIL_CALL,
  POS(413, 9)
};

static TAB_NUM t_func_ai_types__model___ai__evaluate[] = {
  15, // locals
  2, // parameters
  LOCAL(9), // 448_0_model
  LOCAL(10), // 449_0_prompt
  // result_count() == 2
  var_result_count, 0, 1, LOCAL(1),
  // $do_return_confidence_values result_count() == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(11),
  // is_a_string)
  var_is_a_string, 1, LOCAL(10), 1, LOCAL(1),
  // $use_tokens not(prompt.is_a_string)
  var_not, 1, LOCAL(1), 1, var_455_1_use_tokens,
  // $PROMPT
  var_if, 3, var_455_1_use_tokens, lambda_57, lambda_58, 1, LOCAL(12),
  // PROMPT = prompt
  var_std__key_value_pair, 2, LOCAL(12), LOCAL(10), 1, LOCAL(1),
  // name_of(model)
  var_name_of, 1, LOCAL(9), 1, LOCAL(2),
  // model" = name_of(model)
  var_std__key_value_pair, 2, str_model, LOCAL(2), 1, LOCAL(3),
  // logits" = true # also disables server side token selection
  var_std__key_value_pair, 2, str_logits, var_true, 1, LOCAL(4),
  // brief" = true
  var_std__key_value_pair, 2, str_brief, var_true, 1, LOCAL(5),
  // insert_order_table
  var_insert_order_table, 6, LOCAL(1), LOCAL(3), LOCAL(4), LOCAL(5), key_value_pair_468_1, key_value_pair_469_1, 1, LOCAL(8),
  // $json
  var_to_json, 1, LOCAL(8), 1, LOCAL(13),
  // to_utf8 &json
  var_to_utf8, 1, LOCAL(13), 1, LOCAL(13),
  // address_of(model) port_no_of(model)
  var_address_of, 1, LOCAL(9), 1, LOCAL(1),
  // port_no_of(model)
  var_port_no_of, 1, LOCAL(9), 1, LOCAL(2),
  // open_tcp_socket! $fd address_of(model) port_no_of(model)
  var_open_tcp_socket, 2, LOCAL(1), LOCAL(2), IO_CALL(1), LOCAL(14),
  // length_of(json))@cr;
  var_length_of, 1, LOCAL(13), 1, LOCAL(1),
  // "
  var_std__string, 5, str_POST_completion, LOCAL(1), str_Connection_close, LOCAL(13), string_2, 1, LOCAL(2),
  // write_all_to! fd "
  var_write_all_to, 2, LOCAL(14), LOCAL(2), IO_CALL(0),
  // load! $result fd
  var_load, 1, LOCAL(14), IO_CALL(1), LOCAL(15),
  // behind &result "@cr;@nl;@cr;@nl;"
  var_behind, 2, LOCAL(15), string_13, 1, LOCAL(15),
  // $info result.from_json
  var_from_json, 1, LOCAL(15), 1, var_483_1_info,
  // if
  var_if, 3, LOCAL(11), lambda_do_return_confidence_values, lambda_62, TAIL_CALL,
  POS(454, 32),
  POS(454, 3),
  POS(455, 26),
  POS(455, 3),
  POS(456, 3),
  POS(464, 9),
  POS(465, 19),
  POS(465, 10),
  POS(466, 10),
  POS(467, 10),
  POS(463, 7),
  POS(461, 3),
  POS(470, 3),
  POS(471, 24),
  POS(471, 42),
  POS(471, 3),
  POS(475, 23),
  POS(472, 20),
  POS(472, 3),
  POS(479, 3),
  POS(482, 3),
  POS(483, 3),
  POS(484, 3)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  //  "tokens"
  LET, 1, str_tokens, TAIL_CALL,
  POS(459, 9)
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  0, // parameters
  //  "prompt"
  LET, 1, str_prompt, TAIL_CALL,
  POS(460, 9)
};

static TAB_NUM t_lambda_do_return_confidence_values[] = {
  0, // locals
  0, // parameters
  // $logits info("logits")
  var_483_1_info, 1, str_logits, 1, var_486_1_logits,
  // map &logits: (logit) tuple logit(1) logit(2)
  var_map, 2, var_486_1_logits, lambda_59, 1, var_486_1_logits,
  // if
  var_if, 3, var_455_1_use_tokens, lambda_60, lambda_61, TAIL_CALL,
  POS(486, 7),
  POS(487, 7),
  POS(488, 7)
};

static TAB_NUM t_lambda_59[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 487_14_logit
  // logit(1) logit(2)
  LOCAL(3), 1, num_1, 1, LOCAL(1),
  // logit(2)
  LOCAL(3), 1, num_2, 1, LOCAL(2),
  // tuple logit(1) logit(2)
  var_tuple, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(487, 34),
  POS(487, 43),
  POS(487, 28)
};

static TAB_NUM t_lambda_60[] = {
  1, // locals
  0, // parameters
  // info("token") logits
  var_483_1_info, 1, str_token, 1, LOCAL(1),
  //  info("token") logits
  LET, 2, LOCAL(1), var_486_1_logits, TAIL_CALL,
  POS(490, 12),
  POS(490, 11)
};

static TAB_NUM t_lambda_61[] = {
  1, // locals
  0, // parameters
  // info("content") logits
  var_483_1_info, 1, str_content, 1, LOCAL(1),
  //  info("content") logits
  LET, 2, LOCAL(1), var_486_1_logits, TAIL_CALL,
  POS(491, 12),
  POS(491, 11)
};

static TAB_NUM t_lambda_62[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_455_1_use_tokens, lambda_63, lambda_64, TAIL_CALL,
  POS(493, 7)
};

static TAB_NUM t_lambda_63[] = {
  1, // locals
  0, // parameters
  // info("token")
  var_483_1_info, 1, str_token, 1, LOCAL(1),
  //  info("token")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(495, 12),
  POS(495, 11)
};

static TAB_NUM t_lambda_64[] = {
  1, // locals
  0, // parameters
  // info("content")
  var_483_1_info, 1, str_content, 1, LOCAL(1),
  //  info("content")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(496, 12),
  POS(496, 11)
};

static TAB_NUM t_func_ai_types__model___ai__detokenize[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 500_0_model
  MANDATORY_PARAMETER, var_501_0_token_or_list,
  var_empty_list, var_502_0_prefix,
  // $rc result_count()
  var_result_count, 0, 1, var_504_1_rc,
  // $pieces ai::pieces_of(model)
  var_ai__pieces_of, 1, LOCAL(2), 1, var_505_1_pieces,
  // is_a_list:
  var_is_a_list, 1, var_501_0_token_or_list, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_token_or_list_is_a_list, lambda_69, TAIL_CALL,
  POS(504, 3),
  POS(505, 3),
  POS(507, 19),
  POS(506, 3)
};

static TAB_NUM t_lambda_token_or_list_is_a_list[] = {
  0, // locals
  0, // parameters
  // $text ""
  LET, 1, string_8, 1, var_508_1_text,
  // for_each token_or_list
  var_for_each, 3, var_501_0_token_or_list, lambda_65, lambda_66, TAIL_CALL,
  POS(508, 7),
  POS(509, 7)
};

static TAB_NUM t_lambda_65[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 510_3_token
  // token_to_piece token $str &prefix
  func_token_to_piece, 2, LOCAL(1), var_502_0_prefix, 2, LOCAL(2), var_502_0_prefix,
  // append &text str
  var_append, 2, var_508_1_text, LOCAL(2), 1, var_508_1_text,
  // next
  var_next, 0, TAIL_CALL,
  POS(511, 11),
  POS(512, 11),
  POS(513, 11)
};

static TAB_NUM t_lambda_66[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_504_1_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_67, lambda_68, TAIL_CALL,
  POS(516, 13),
  POS(515, 11)
};

static TAB_NUM t_lambda_67[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_508_1_text, TAIL_CALL,
  POS(517, 15)
};

static TAB_NUM t_lambda_68[] = {
  0, // locals
  0, // parameters
  //  text prefix
  LET, 2, var_508_1_text, var_502_0_prefix, TAIL_CALL,
  POS(518, 15)
};

static TAB_NUM t_lambda_69[] = {
  1, // locals
  0, // parameters
  // token_to_piece token_or_list $str &prefix
  func_token_to_piece, 2, var_501_0_token_or_list, var_502_0_prefix, 2, var_520_30_str, var_502_0_prefix,
  // rc == 1
  var_std__equal, 2, var_504_1_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_70, lambda_71, TAIL_CALL,
  POS(520, 7),
  POS(522, 9),
  POS(521, 7)
};

static TAB_NUM t_lambda_70[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_520_30_str, TAIL_CALL,
  POS(523, 11)
};

static TAB_NUM t_lambda_71[] = {
  0, // locals
  0, // parameters
  //  str prefix
  LET, 2, var_520_30_str, var_502_0_prefix, TAIL_CALL,
  POS(524, 11)
};

static TAB_NUM t_func_token_to_piece[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 526_18_token
  var_526_24_prefix_octets,
  // token+1)
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(1),
  // $piece pieces(token+1)
  var_505_1_pieces, 1, LOCAL(1), 1, var_527_1_piece,
  // is_a_list:
  var_is_a_list, 1, var_527_1_piece, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_piece_is_a_list, lambda_87, TAIL_CALL,
  POS(527, 19),
  POS(527, 5),
  POS(529, 13),
  POS(528, 5)
};

static TAB_NUM t_lambda_piece_is_a_list[] = {
  0, // locals
  0, // parameters
  // append prefix_octets &piece
  var_append, 2, var_526_24_prefix_octets, var_527_1_piece, 1, var_527_1_piece,
  // $n length_of(piece)
  var_length_of, 1, var_527_1_piece, 1, var_531_1_n,
  // $i 1
  LET, 1, num_1, 1, var_532_1_i,
  // $e undefined
  LET, 1, var_undefined, 1, var_533_1_e,
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(530, 9),
  POS(531, 9),
  POS(532, 9),
  POS(533, 9),
  POS(534, 9)
};

static TAB_NUM t_lambda_2_loop[] = {
  3, // locals
  0, // parameters
  // i-1 <= n &e -> i-1
  var_std__minus, 2, var_532_1_i, num_1, 1, LOCAL(1),
  // n &e -> i-1
  var_std__less, 2, var_531_1_n, LOCAL(1), 1, LOCAL(2),
  // n &e -> i-1
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // update_if i-1 <= n &e -> i-1
  var_update_if, 3, LOCAL(3), var_533_1_e, lambda_72, 1, var_533_1_e,
  // n:
  var_std__less, 2, var_531_1_n, var_532_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_73, lambda_76, TAIL_CALL,
  POS(535, 21),
  POS(535, 28),
  POS(535, 28),
  POS(535, 11),
  POS(537, 17),
  POS(536, 11)
};

static TAB_NUM t_lambda_72[] = {
  1, // locals
  0, // parameters
  // i-1
  var_std__minus, 2, var_532_1_i, num_1, 1, LOCAL(1),
  //  i-1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(535, 36),
  POS(535, 35)
};

static TAB_NUM t_lambda_73[] = {
  1, // locals
  0, // parameters
  // $octets ""
  LET, 1, string_8, 1, var_538_1_octets,
  // range(piece 1 e)
  var_range, 3, var_527_1_piece, num_1, var_533_1_e, 1, LOCAL(1),
  // for_each range(piece 1 e)
  var_for_each, 3, LOCAL(1), lambda_74, lambda_75, TAIL_CALL,
  POS(538, 15),
  POS(539, 24),
  POS(539, 15)
};

static TAB_NUM t_lambda_74[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 540_3_code
  // character(code)
  var_character, 1, LOCAL(2), 1, LOCAL(1),
  // push &octets character(code)
  var_push, 2, var_538_1_octets, LOCAL(1), 1, var_538_1_octets,
  // next
  var_next, 0, TAIL_CALL,
  POS(541, 32),
  POS(541, 19),
  POS(542, 19)
};

static TAB_NUM t_lambda_75[] = {
  3, // locals
  0, // parameters
  // from_utf8(octets) range(piece e+1 -1)
  var_from_utf8, 1, var_538_1_octets, 1, LOCAL(1),
  // e+1 -1)
  var_std__plus, 2, var_533_1_e, num_1, 1, LOCAL(2),
  // range(piece e+1 -1)
  var_range, 3, var_527_1_piece, LOCAL(2), minus_num_1, 1, LOCAL(3),
  //  from_utf8(octets) range(piece e+1 -1)
  LET, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(543, 20),
  POS(543, 50),
  POS(543, 38),
  POS(543, 19)
};

static TAB_NUM t_lambda_76[] = {
  0, // locals
  0, // parameters
  // $code piece(i)
  var_527_1_piece, 1, var_532_1_i, 1, var_545_1_code,
  // cond
  var_cond, 5, lambda_77, lambda_79, lambda_81, lambda_83, lambda_85, TAIL_CALL,
  POS(545, 15),
  POS(546, 15)
};

static TAB_NUM t_lambda_77[] = {
  1, // locals
  0, // parameters
  // code < 0x80:
  var_std__less, 2, var_545_1_code, num_128, 1, LOCAL(1),
  //  code < 0x80:
  LET, 2, LOCAL(1), lambda_78, TAIL_CALL,
  POS(547, 20),
  POS(547, 19)
};

static TAB_NUM t_lambda_78[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_532_1_i, 1, var_532_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(548, 19),
  POS(549, 19)
};

static TAB_NUM t_lambda_79[] = {
  2, // locals
  0, // parameters
  // code & 0xe0 == 0xc0:
  var_std__bit_and, 2, var_545_1_code, num_224, 1, LOCAL(1),
  // code & 0xe0 == 0xc0:
  var_std__equal, 2, LOCAL(1), num_192, 1, LOCAL(2),
  //  code & 0xe0 == 0xc0:
  LET, 2, LOCAL(2), lambda_80, TAIL_CALL,
  POS(550, 20),
  POS(550, 20),
  POS(550, 19)
};

static TAB_NUM t_lambda_80[] = {
  0, // locals
  0, // parameters
  // plus &i 2
  var_plus, 2, var_532_1_i, num_2, 1, var_532_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(551, 19),
  POS(552, 19)
};

static TAB_NUM t_lambda_81[] = {
  2, // locals
  0, // parameters
  // code & 0xf0 == 0xe0:
  var_std__bit_and, 2, var_545_1_code, num_240, 1, LOCAL(1),
  // code & 0xf0 == 0xe0:
  var_std__equal, 2, LOCAL(1), num_224, 1, LOCAL(2),
  //  code & 0xf0 == 0xe0:
  LET, 2, LOCAL(2), lambda_82, TAIL_CALL,
  POS(553, 20),
  POS(553, 20),
  POS(553, 19)
};

static TAB_NUM t_lambda_82[] = {
  0, // locals
  0, // parameters
  // plus &i 3
  var_plus, 2, var_532_1_i, num_3, 1, var_532_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(554, 19),
  POS(555, 19)
};

static TAB_NUM t_lambda_83[] = {
  2, // locals
  0, // parameters
  // code & 0xf8 == 0xf0:
  var_std__bit_and, 2, var_545_1_code, num_248, 1, LOCAL(1),
  // code & 0xf8 == 0xf0:
  var_std__equal, 2, LOCAL(1), num_240, 1, LOCAL(2),
  //  code & 0xf8 == 0xf0:
  LET, 2, LOCAL(2), lambda_84, TAIL_CALL,
  POS(556, 20),
  POS(556, 20),
  POS(556, 19)
};

static TAB_NUM t_lambda_84[] = {
  0, // locals
  0, // parameters
  // plus &i 4
  var_plus, 2, var_532_1_i, num_4, 1, var_532_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(557, 19),
  POS(558, 19)
};

static TAB_NUM t_lambda_85[] = {
  0, // locals
  0, // parameters
  //  true -> "<???>" empty_list
  LET, 2, var_true, lambda_86, TAIL_CALL,
  POS(559, 19)
};

static TAB_NUM t_lambda_86[] = {
  0, // locals
  0, // parameters
  //  "<???>" empty_list
  LET, 2, string_14, var_empty_list, TAIL_CALL,
  POS(559, 27)
};

static TAB_NUM t_lambda_87[] = {
  1, // locals
  0, // parameters
  // any_of(piece: (chr) -> chr == '@0x142;') &piece -> "<???>"
  var_any_of, 2, var_527_1_piece, lambda_88, 1, LOCAL(1),
  // update_if any_of(piece: (chr) -> chr == '@0x142;') &piece -> "<???>"
  var_update_if, 3, LOCAL(1), var_527_1_piece, lambda_89, 1, var_527_1_piece,
  // -> piece empty_list
  LET, 2, var_527_1_piece, var_empty_list, TAIL_CALL,
  POS(561, 19),
  POS(561, 9),
  POS(563, 9)
};

static TAB_NUM t_lambda_88[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 561_25_chr
  // chr == '@0x142;') &piece -> "<???>"
  var_std__equal, 2, LOCAL(2), chr_322, 1, LOCAL(1),
  // -> chr == '@0x142;') &piece -> "<???>"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(561, 42),
  POS(561, 39)
};

static TAB_NUM t_lambda_89[] = {
  0, // locals
  0, // parameters
  //  "<???>"
  LET, 1, string_14, TAIL_CALL,
  POS(561, 69)
};

static TAB_NUM t_func_build_piece_table[] = {
  0, // locals
  1, // parameters
  var_565_21_model,
  // $pieces ai::pieces_of(model)
  var_ai__pieces_of, 1, var_565_21_model, 1, var_566_1_pieces,
  // $piece_table empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_567_1_piece_table,
  // for_each pieces
  var_for_each, 3, var_566_1_pieces, lambda_90, lambda_92, TAIL_CALL,
  POS(566, 3),
  POS(567, 3),
  POS(568, 3)
};

static TAB_NUM t_lambda_90[] = {
  1, // locals
  2, // parameters
  var_569_3_idx,
  var_569_7_piece,
  // is_a_string:
  var_is_a_string, 1, var_569_7_piece, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_piece_is_a_string, var_next, TAIL_CALL,
  POS(571, 15),
  POS(570, 7)
};

static TAB_NUM t_lambda_piece_is_a_string[] = {
  2, // locals
  0, // parameters
  // piece_table(piece).is_defined
  var_567_1_piece_table, 1, var_569_7_piece, 1, LOCAL(1),
  // is_defined
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, lambda_91, TAIL_CALL,
  POS(573, 13),
  POS(573, 32),
  POS(572, 11)
};

static TAB_NUM t_lambda_91[] = {
  2, // locals
  0, // parameters
  // !piece_table(piece) idx-1
  var_std__minus, 2, var_569_3_idx, num_1, 1, LOCAL(2),
  // piece_table(piece) idx-1
  var_567_1_piece_table, 2, var_569_7_piece, LOCAL(2), 1, var_567_1_piece_table,
  // next
  var_next, 0, TAIL_CALL,
  POS(576, 15),
  POS(576, 16),
  POS(577, 15)
};

static TAB_NUM t_lambda_92[] = {
  2, // locals
  0, // parameters
  // map_reduce(pieces length_of max)
  var_map_reduce, 3, var_566_1_pieces, var_length_of, var_max, 1, LOCAL(1),
  // model
  LET, -2, var_565_21_model, var_ai__piece_table_of, var_567_1_piece_table, var_ai__maximum_piece_length_of, LOCAL(1), LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(582, 38),
  POS(580, 7),
  POS(579, 7)
};

static TAB_NUM t_func_ai__escaped_token[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 584_21_model
  LOCAL(4), // 584_27_token
  // ai::detokenize(model token))
  var_ai__detokenize, 2, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // ai::escaped_piece(ai::detokenize(model token))
  var_ai__escaped_piece, 1, LOCAL(1), 1, LOCAL(2),
  // -> ai::escaped_piece(ai::detokenize(model token))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(585, 24),
  POS(585, 6),
  POS(585, 3)
};

static TAB_NUM t_func_ai__escaped_piece[] = {
  0, // locals
  1, // parameters
  var_587_21_piece,
  // $buf ""
  LET, 1, string_8, 1, var_588_1_buf,
  // $s 1
  LET, 1, num_1, 1, var_589_1_s,
  // $n length_of(piece)
  var_length_of, 1, var_587_21_piece, 1, var_590_1_n,
  // $i 0
  LET, 1, num_0, 1, var_591_1_i,
  // loop:
  var_loop, 1, lambda_3_loop, TAIL_CALL,
  POS(588, 3),
  POS(589, 3),
  POS(590, 3),
  POS(591, 3),
  POS(592, 3)
};

static TAB_NUM t_lambda_3_loop[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_591_1_i, 1, var_591_1_i,
  // n
  var_std__less, 2, var_590_1_n, var_591_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_93, lambda_94, TAIL_CALL,
  POS(593, 5),
  POS(595, 11),
  POS(594, 5)
};

static TAB_NUM t_lambda_93[] = {
  2, // locals
  0, // parameters
  // range(piece s n))
  var_range, 3, var_587_21_piece, var_589_1_s, var_590_1_n, 1, LOCAL(1),
  // append(buf range(piece s n))
  var_append, 2, var_588_1_buf, LOCAL(1), 1, LOCAL(2),
  //  append(buf range(piece s n))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(596, 21),
  POS(596, 10),
  POS(596, 9)
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  // $chr piece(i)
  var_587_21_piece, 1, var_591_1_i, 1, var_598_1_chr,
  // case chr
  var_case, 6, var_598_1_chr, chr_10, lambda_nl, sequence_605_2, lambda_95, var_next, TAIL_CALL,
  POS(598, 9),
  POS(599, 9)
};

static TAB_NUM t_lambda_nl[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_591_1_i, num_1, 1, LOCAL(1),
  // range(piece s i-1)
  var_range, 3, var_587_21_piece, var_589_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(piece s i-1)
  var_append, 2, var_588_1_buf, LOCAL(2), 1, var_588_1_buf,
  // append &buf "\n"
  var_append, 2, var_588_1_buf, str_n, 1, var_588_1_buf,
  // !s i+1
  var_std__plus, 2, var_591_1_i, num_1, 1, var_589_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(601, 39),
  POS(601, 25),
  POS(601, 13),
  POS(602, 13),
  POS(603, 13),
  POS(604, 13)
};

static TAB_NUM t_lambda_95[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_591_1_i, num_1, 1, LOCAL(1),
  // range(piece s i-1)
  var_range, 3, var_587_21_piece, var_589_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(piece s i-1)
  var_append, 2, var_588_1_buf, LOCAL(2), 1, var_588_1_buf,
  // push &buf '\'
  var_push, 2, var_588_1_buf, chr_92, 1, var_588_1_buf,
  // push &buf chr
  var_push, 2, var_588_1_buf, var_598_1_chr, 1, var_588_1_buf,
  // !s i+1
  var_std__plus, 2, var_591_1_i, num_1, 1, var_589_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(606, 39),
  POS(606, 25),
  POS(606, 13),
  POS(607, 13),
  POS(608, 13),
  POS(609, 13),
  POS(610, 13)
};

static int key_value_pair_295_21_arguments[] = {
  -chr_9, -str_ht
};

static int key_value_pair_468_1_arguments[] = {
  -str_n_probs, -num_10
};

static int key_value_pair_469_1_arguments[] = {
  -str_n_predict, -num_1
};

static int sequence_605_2_arguments[] = {
  -chr_34, -chr_92
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_UNIQUE, 0, {.str_8 = "ai::MINIMUM_CONFIDENCE"}},
  {FLT_UNIQUE, 0, {.str_8 = "ai::MAXIMUM_LENGTH"}},
  {FLT_UNIQUE, 0, {.str_8 = "ai::STOP"}},
  {FLT_UNIQUE, 0, {.str_8 = "ai::BACKTRACK"}},
  {FLT_UNIQUE, 0, {.str_8 = "ai::LOG_LEVEL"}},
  {FLT_UNIQUE, 0, {.str_8 = "ai::VERBOSE"}},
  {FLT_UNIQUE, 0, {.str_8 = "ai::USE_COLOURS"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai__load_ai_model}},
  {FLT_STRING_8, 14, {.str_8 = "127.0.0.1:8080"}},
  {FLT_CHARACTER, 0, {.value = 58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_POSITIVE_INT64, 0, {.value = 8080}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_STRING_8, 1, {.str_8 = " "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_STRING_8, 2, {.str_8 = "<|"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_STRING_8, 2, {.str_8 = "|>"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_STRING_8, 2, {.str_8 = ">>"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_STRING_8, 2, {.str_8 = "<<"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_NEGATIVE_INT64, 0, {.value = 3}},
  {FLT_STRING_8, 9, {.str_8 = "endoftext"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_endoftext}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_STRING_8, 8, {.str_8 = "QUESTION"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_QUESTION}},
  {FLT_STRING_8, 6, {.str_8 = "ANSWER"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_ANSWER}},
  {FLT_STRING_8, 6, {.str_8 = "PREFIX"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_PREFIX}},
  {FLT_STRING_8, 6, {.str_8 = "SUFFIX"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_SUFFIX}},
  {FLT_STRING_8, 6, {.str_8 = "MIDDLE"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_MIDDLE}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai_types__model___ai__generate}},
  {FLT_POSITIVE_INT64, 0, {.value = 15}},
  {FLT_POSITIVE_INT64, 0, {.value = 1024}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_generate_text}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_STRING_8, 15, {.str_8 = "<end of stream>"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_POSITIVE_INT64, 0, {.value = 1000}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_STRING_8, 1, {.str_8 = "\042"}},
  {FLT_STRING_8, 2, {.str_8 = "\042:"}},
  {FLT_STRING_8, 15, {.str_8 = "[#%4] %l18 %3.3"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_STRING_8, 29, {.str_8 = "-[#%4|%3.1 ms]---------------"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_STRING_8, 30, {.str_8 = "-[#%4]------------------------"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_CHARACTER, 0, {.value = 9}},
  {FLT_STRING_8, 8, {.str_8 = "<<<ht>>>"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_295_21_arguments}},
  {FLT_STRING_8, 12, {.str_8 = "%5 %l18 %3.3"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_POSITIVE_INT64, 0, {.value = 5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_response_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_STRING_8, 3, {.str_8 = "\010 \010"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_print_piece}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_POSITIVE_INT64, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_get_tokens}},
  {FLT_STRING_8, 5, {.str_8 = "model"}},
  {FLT_STRING_8, 75, {.str_8 = "POST /get_tokens HTTP/1.1\015\012Content-Type: application/json\015\012Content-Length: "}},
  {FLT_STRING_8, 23, {.str_8 = "\015\012Connection: close\015\012\015\012"}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_POSITIVE_INT64, 0, {.value = 300}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_STRING_8, 4, {.str_8 = "\015\012\015\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_STRING_8, 6, {.str_8 = "tokens"}},
  {FLT_STRING_8, 15, {.str_8 = "begin_of_stream"}},
  {FLT_STRING_8, 13, {.str_8 = "end_of_stream"}},
  {FLT_STRING_8, 7, {.str_8 = "newline"}},
  {FLT_STRING_8, 11, {.str_8 = "end_of_text"}},
  {FLT_STRING_8, 6, {.str_8 = "prefix"}},
  {FLT_STRING_8, 6, {.str_8 = "suffix"}},
  {FLT_STRING_8, 6, {.str_8 = "middle"}},
  {FLT_STRING_8, 12, {.str_8 = "context_size"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai_types__model___ai__tokenize}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_STRING_8, 7, {.str_8 = "content"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_STRING_8, 5, {.str_8 = "lines"}},
  {FLT_STRING_8, 73, {.str_8 = "POST /tokenize HTTP/1.1\015\012Content-Type: application/json\015\012Content-Length: "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai_types__model___ai__evaluate}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_STRING_8, 6, {.str_8 = "prompt"}},
  {FLT_STRING_8, 6, {.str_8 = "logits"}},
  {FLT_STRING_8, 5, {.str_8 = "brief"}},
  {FLT_STRING_8, 7, {.str_8 = "n_probs"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_468_1_arguments}},
  {FLT_STRING_8, 9, {.str_8 = "n_predict"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_469_1_arguments}},
  {FLT_STRING_8, 75, {.str_8 = "POST /completion HTTP/1.1\015\012Content-Type: application/json\015\012Content-Length: "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_return_confidence_values}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_STRING_8, 5, {.str_8 = "token"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai_types__model___ai__detokenize}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_token_or_list_is_a_list}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_token_to_piece}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_piece_is_a_list}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x80}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xe0}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xc0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xf0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xf8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_STRING_8, 5, {.str_8 = "<???>"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_88}},
  {FLT_CHARACTER, 0, {.value = 322}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_89}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_build_piece_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_90}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_piece_is_a_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_91}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_92}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai__escaped_token}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai__escaped_piece}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_93}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_94}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_CHARACTER, 0, {.value = 92}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_605_2_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_nl}},
  {FLT_STRING_8, 2, {.str_8 = "\134n"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_95}}
};

static ATTRIBUTE_DEFINITION ai_types__model__attributes[] = {
  {var_ai__generate, -func_ai_types__model___ai__generate},
  {var_ai__tokenize, -func_ai_types__model___ai__tokenize},
  {var_ai__evaluate, -func_ai_types__model___ai__evaluate},
  {var_ai__detokenize, -func_ai_types__model___ai__detokenize}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "pieces_of\000ai", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(33, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "piece_table_of\000ai", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "maximum_piece_length_of\000ai", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "begin_of_stream_token_of\000ai", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "end_of_stream_token_of\000ai", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "newline_token_of\000ai", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "space_token_of\000ai", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "end_of_text_token_of\000ai", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "prefix_token_of\000ai", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "suffix_token_of\000ai", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "middle_token_of\000ai", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "question_token_of\000ai", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "answer_token_of\000ai", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "context_size_of\000ai", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "address_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "port_no_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "evaluate\000ai", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "tokenize\000ai", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "detokenize\000ai", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "generate\000ai", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MINIMUM_CONFIDENCE\000ai", NULL,
    {.const_idx = -uni_ai__MINIMUM_CONFIDENCE}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MAXIMUM_LENGTH\000ai", NULL,
    {.const_idx = -uni_ai__MAXIMUM_LENGTH}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "STOP\000ai", NULL,
    {.const_idx = -uni_ai__STOP}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "BACKTRACK\000ai", NULL,
    {.const_idx = -uni_ai__BACKTRACK}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LOG_LEVEL\000ai", NULL,
    {.const_idx = -uni_ai__LOG_LEVEL}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "VERBOSE\000ai", NULL,
    {.const_idx = -uni_ai__VERBOSE}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "USE_COLOURS\000ai", NULL,
    {.const_idx = -uni_ai__USE_COLOURS}
  },
  {
    FOT_DERIVED, 0, 4,
    "model\000ai_types", ai_types__model__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "object\000std_types", NULL,
    {.position = POS(143, 18)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "load_ai_model\000ai", NULL,
    {.const_idx = -func_ai__load_ai_model}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(158, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "159_1_port_no\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "behind\000", NULL,
    {.position = POS(159, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(162, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(164, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(161, 5)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "name_of\000", NULL,
    {.position = POS(167, 8)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "address_of\000", NULL,
    {.position = POS(168, 8)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "port_no_of\000", NULL,
    {.position = POS(169, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "165_1_model\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(182, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(185, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "198_3_token\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "198_9_piece\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(201, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(202, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(202, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_prefix\000", NULL,
    {.position = POS(204, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(204, 44)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(204, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(203, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(207, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(210, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(211, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(208, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(197, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "233_0_model\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value_pair\000std", NULL,
    {.position = POS(238, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(243, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "238_29_minimum_confidence\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "239_27_maximum_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "240_22_stop_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "241_19_backtrack\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "242_19_log_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "243_21_be_verbose\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "244_25_use_colours\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "extract_options\000", NULL,
    {.position = POS(237, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "245_1_do_log\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(246, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(246, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "BLACK\000", NULL,
    {.position = POS(247, 43)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ansi_text_colour\000", NULL,
    {.position = POS(247, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print\000", NULL,
    {.position = POS(247, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(247, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "249_16_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(249, 45)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ansi_reset_colour\000", NULL,
    {.position = POS(250, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "println\000", NULL,
    {.position = POS(251, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(253, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(253, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(255, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "257_17_tokens\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "257_24_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "257_29_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "257_32_prefix\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(259, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "contains\000", NULL,
    {.position = POS(259, 31)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "262_15_t1\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_time\000", NULL,
    {.position = POS(262, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "263_28_next_token\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "263_40_confidence_values\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprintln\000", NULL,
    {.position = POS(267, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "270_1_max_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "272_34_next_confidence\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "273_40_next_piece\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "273_52_suffix\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "276_1_dt\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(276, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(278, 32)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "escaped_piece\000ai", NULL,
    {.const_idx = -func_ai__escaped_piece}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(280, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "format\000", NULL,
    {.position = POS(282, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "replace_all\000", NULL,
    {.position = POS(295, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim_left\000", NULL,
    {.position = POS(304, 50)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(308, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(311, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(313, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "310_16_response\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "extend_to\000", NULL,
    {.position = POS(315, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dup\000", NULL,
    {.position = POS(330, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(271, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "337_15_piece\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "337_21_confidence\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "339_1_confidence_delta\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "negate\000std", NULL,
    {.position = POS(344, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "RED\000", NULL,
    {.position = POS(345, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "colour_mixture\000", NULL,
    {.position = POS(343, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "GREEN\000", NULL,
    {.position = POS(348, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WHITE\000", NULL,
    {.position = POS(349, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(341, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ansi_background_colour\000", NULL,
    {.position = POS(354, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "insert_order_table\000", NULL,
    {.position = POS(363, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_json\000", NULL,
    {.position = POS(362, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open_tcp_socket\000", NULL,
    {.position = POS(365, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print_to\000", NULL,
    {.position = POS(366, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "373_7_result\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "load\000", NULL,
    {.position = POS(373, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "between\000", NULL,
    {.position = POS(376, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error\000", NULL,
    {.position = POS(379, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_utf8\000", NULL,
    {.position = POS(382, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_json\000", NULL,
    {.position = POS(383, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(419, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write_all_to\000", NULL,
    {.position = POS(421, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "455_1_use_tokens\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(455, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "483_1_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "486_1_logits\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(487, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(487, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "501_0_token_or_list\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "502_0_prefix\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "504_1_rc\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "505_1_pieces\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(507, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "508_1_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "520_30_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "526_24_prefix_octets\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "527_1_piece\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "531_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "532_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "533_1_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "538_1_octets\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character\000", NULL,
    {.position = POS(541, 32)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "545_1_code\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(548, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000std", NULL,
    {.position = POS(550, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(551, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(561, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "565_21_model\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "566_1_pieces\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "567_1_piece_table\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(567, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "569_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "569_7_piece\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(582, 66)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(582, 38)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "escaped_token\000ai", NULL,
    {.const_idx = -func_ai__escaped_token}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "587_21_piece\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "588_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "589_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "590_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "591_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "598_1_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(605, 13)}
  }
};

static FUNKY_NAMESPACE defined_namespaces[] = {
  {"ai", 1, 0},
  {"ai_types", 1, 0}
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__ai__llama = {
  "_ai__llama", // module name
  "ai/llama.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  2, // number of defined namespaces
  1, // number of used namespaces
  207, // number of constants
  175, // number of variables
  NULL, // required modules
  defined_namespaces,
  used_namespaces,
  constants_table,
  variables_table,
};
