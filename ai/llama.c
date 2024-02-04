#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  uni_ai__EXACT = -1,
  uni_ai__SHIFT = -2,
  uni_ai__SMART = -3,
  uni_ai__MINIMUM_CONFIDENCE = -4,
  uni_ai__MAXIMUM_LENGTH = -5,
  uni_ai__STOP = -6,
  uni_ai__BACKTRACK = -7,
  uni_ai__LOG_LEVEL = -8,
  uni_ai__VERBOSE = -9,
  uni_ai__USE_COLOURS = -10,
  func_ai__load_ai_model = -11,
  string_1 = -12,
  chr_58 = -13,
  lambda_1 = -14,
  num_8080 = -15,
  lambda_2 = -16,
  lambda_3 = -17,
  lambda_4 = -18,
  string_2 = -19,
  string_3 = -20,
  lambda_5 = -21,
  lambda_6 = -22,
  num_4 = -23,
  lambda_7 = -24,
  string_4 = -25,
  lambda_8 = -26,
  string_5 = -27,
  lambda_9 = -28,
  string_6 = -29,
  lambda_10 = -30,
  string_7 = -31,
  lambda_11 = -32,
  num_3 = -33,
  minus_num_3 = -34,
  str_endoftext = -35,
  lambda_endoftext = -36,
  num_1 = -37,
  str_QUESTION = -38,
  lambda_QUESTION = -39,
  str_ANSWER = -40,
  lambda_ANSWER = -41,
  str_PREFIX = -42,
  lambda_PREFIX = -43,
  str_SUFFIX = -44,
  lambda_SUFFIX = -45,
  str_MIDDLE = -46,
  lambda_MIDDLE = -47,
  lambda_12 = -48,
  func_ai_types__model___ai__generate = -49,
  num_15 = -50,
  num_1024 = -51,
  num_0 = -52,
  lambda_13 = -53,
  lambda_14 = -54,
  string_8 = -55,
  lambda_15 = -56,
  lambda_16 = -57,
  lambda_17 = -58,
  func_generate_text = -59,
  lambda_18 = -60,
  lambda_19 = -61,
  lambda_20 = -62,
  lambda_21 = -63,
  lambda_22 = -64,
  str_end_of_stream = -65,
  lambda_23 = -66,
  lambda_loop = -67,
  lambda_24 = -68,
  num_1000 = -69,
  lambda_25 = -70,
  string_9 = -71,
  string_10 = -72,
  str_4_l = -73,
  lambda_26 = -74,
  lambda_27 = -75,
  str_431_ms = -76,
  lambda_28 = -77,
  string_11 = -78,
  lambda_29 = -79,
  chr_9 = -80,
  str_ht = -81,
  key_value_pair_301_21 = -82,
  str_5_l = -83,
  lambda_30 = -84,
  num_5 = -85,
  lambda_31 = -86,
  lambda_32 = -87,
  lambda_33 = -88,
  lambda_34 = -89,
  lambda_response_is_empty = -90,
  lambda_35 = -91,
  chr_10 = -92,
  lambda_36 = -93,
  num_2 = -94,
  lambda_37 = -95,
  lambda_38 = -96,
  lambda_39 = -97,
  lambda_40 = -98,
  lambda_41 = -99,
  string_12 = -100,
  lambda_42 = -101,
  minus_num_1 = -102,
  lambda_43 = -103,
  lambda_44 = -104,
  func_print_piece = -105,
  lambda_45 = -106,
  lambda_46 = -107,
  lambda_47 = -108,
  lambda_48 = -109,
  num_10 = -110,
  lambda_49 = -111,
  lambda_50 = -112,
  lambda_51 = -113,
  lambda_52 = -114,
  func_get_tokens = -115,
  str_model = -116,
  str_POST_get_tokens = -117,
  str_Connection_close = -118,
  chr_32 = -119,
  num_300 = -120,
  lambda_53 = -121,
  string_13 = -122,
  lambda_54 = -123,
  str_tokens = -124,
  str_begin_of_stream = -125,
  str_end_of_stream_2 = -126,
  str_newline = -127,
  str_end_of_text = -128,
  str_prefix = -129,
  str_suffix = -130,
  str_middle = -131,
  str_context_size = -132,
  func_ai_types__model___ai__tokenize = -133,
  lambda_55 = -134,
  str_content = -135,
  lambda_56 = -136,
  str_lines = -137,
  str_POST_tokenize_HT = -138,
  func_ai_types__model___ai__evaluate = -139,
  lambda_57 = -140,
  lambda_58 = -141,
  str_prompt = -142,
  lambda_aiEXACT = -143,
  str_exact = -144,
  lambda_aiSHIFT = -145,
  str_shift = -146,
  lambda_aiSMART = -147,
  str_smart = -148,
  lambda_59 = -149,
  str_start = -150,
  str_mode = -151,
  str_logits = -152,
  str_brief = -153,
  str_n_probs = -154,
  key_value_pair_483_1 = -155,
  str_n_predict = -156,
  key_value_pair_484_1 = -157,
  str_POST_completion = -158,
  lambda_do_return_confidence_values = -159,
  lambda_60 = -160,
  lambda_61 = -161,
  str_token = -162,
  lambda_62 = -163,
  lambda_63 = -164,
  lambda_64 = -165,
  lambda_65 = -166,
  func_ai_types__model___ai__detokenize = -167,
  lambda_token_or_list_is_a_list = -168,
  lambda_66 = -169,
  lambda_67 = -170,
  lambda_68 = -171,
  lambda_69 = -172,
  lambda_70 = -173,
  lambda_71 = -174,
  lambda_72 = -175,
  func_token_to_piece = -176,
  lambda_piece_is_a_list = -177,
  lambda_2_loop = -178,
  lambda_73 = -179,
  lambda_74 = -180,
  lambda_75 = -181,
  lambda_76 = -182,
  lambda_77 = -183,
  lambda_78 = -184,
  num_0x80 = -185,
  lambda_79 = -186,
  lambda_80 = -187,
  num_0xe0 = -188,
  num_0xc0 = -189,
  lambda_81 = -190,
  lambda_82 = -191,
  num_0xf0 = -192,
  lambda_83 = -193,
  lambda_84 = -194,
  num_0xf8 = -195,
  lambda_85 = -196,
  lambda_86 = -197,
  lambda_87 = -198,
  string_14 = -199,
  lambda_88 = -200,
  lambda_89 = -201,
  chr_322 = -202,
  lambda_90 = -203,
  func_build_piece_table = -204,
  lambda_91 = -205,
  lambda_piece_is_a_string = -206,
  lambda_92 = -207,
  lambda_93 = -208,
  func_ai__escaped_token = -209,
  func_ai__escaped_piece = -210,
  lambda_3_loop = -211,
  lambda_94 = -212,
  lambda_95 = -213,
  chr_34 = -214,
  chr_92 = -215,
  sequence_620_2 = -216,
  lambda_nl = -217,
  str_n = -218,
  lambda_96 = -219
};

enum {
  var__START = FIRST_VAR-1,
  var_ai__EXACT, // initialized
  var_std__assign, // extern
  var_ai__SHIFT, // initialized
  var_ai__SMART, // initialized
  var_ai__pieces_of, // attribute
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
  var_165_1_port_no, // dynamic
  var_behind, // extern
  var_is_empty, // extern
  var_to_integer, // extern
  var_if, // extern
  var_name_of, // extern polymorphic
  var_address_of, // extern polymorphic
  var_port_no_of, // extern polymorphic
  var_171_1_model, // dynamic
  var_undefined, // extern
  var_is_an_error, // extern
  var_204_3_token, // dynamic
  var_204_9_piece, // dynamic
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
  var_239_0_model, // dynamic
  var_std__key_value_pair, // extern
  var_false, // extern
  var_244_29_minimum_confidence, // dynamic
  var_245_27_maximum_length, // dynamic
  var_246_22_stop_text, // dynamic
  var_247_19_backtrack, // dynamic
  var_248_19_log_level, // dynamic
  var_249_21_be_verbose, // dynamic
  var_250_25_use_colours, // dynamic
  var_extract_options, // extern
  var_251_1_do_log, // dynamic
  var_true, // extern
  var_update_if, // extern
  var_BLACK, // extern
  var_ansi_text_colour, // extern
  var_print, // extern
  var_on, // extern
  var_255_16_text, // dynamic
  var_empty_list, // extern
  var_ansi_reset_colour, // extern
  var_println, // extern
  var_result_count, // extern
  var_std__equal, // extern
  var_pass, // extern
  var_263_17_tokens, // dynamic
  var_263_24_text, // dynamic
  var_263_29_no, // dynamic
  var_263_32_prefix, // dynamic
  var_is_defined, // extern
  var_contains, // extern
  var_268_15_t1, // dynamic
  var_current_time, // extern
  var_269_28_next_token, // dynamic
  var_269_40_confidence_values, // dynamic
  var_eprintln, // extern
  var_276_1_max_no, // dynamic
  var_278_34_next_confidence, // dynamic
  var_279_40_next_piece, // dynamic
  var_279_52_suffix, // dynamic
  var_282_1_dt, // dynamic
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
  var_316_16_response, // dynamic
  var_max, // extern
  var_dup, // extern
  var_loop, // extern
  var_343_15_piece, // dynamic
  var_343_21_confidence, // dynamic
  var_345_1_confidence_delta, // dynamic
  var_std__negate, // extern
  var_RED, // extern
  var_colour_mixture, // extern
  var_GREEN, // extern
  var_WHITE, // extern
  var_cond, // extern
  var_ansi_background_colour, // extern
  var_insert_order_table, // extern
  var_to_json, // extern
  var_open_tcp_client_socket, // extern
  var_print_to, // extern
  var_379_7_result, // dynamic
  var_load, // extern
  var_between, // extern
  var_error, // extern
  var_from_utf8, // extern
  var_from_json, // extern
  var_to_utf8, // extern
  var_write_to, // extern
  var_463_1_use_tokens, // dynamic
  var_not, // extern
  var_498_1_info, // dynamic
  var_501_1_logits, // dynamic
  var_tuple, // extern
  var_map, // extern
  var_516_0_token_or_list, // dynamic
  var_517_0_prefix, // dynamic
  var_519_1_rc, // dynamic
  var_520_1_pieces, // dynamic
  var_is_a_list, // extern
  var_523_1_text, // dynamic
  var_535_30_str, // dynamic
  var_541_24_prefix_octets, // dynamic
  var_542_1_piece, // dynamic
  var_546_1_n, // dynamic
  var_547_1_i, // dynamic
  var_548_1_e, // dynamic
  var_553_1_octets, // dynamic
  var_character, // extern
  var_560_1_code, // dynamic
  var_inc, // extern
  var_std__bit_and, // extern
  var_plus, // extern
  var_any_of, // extern
  var_580_21_model, // dynamic
  var_581_1_pieces, // dynamic
  var_582_1_piece_table, // dynamic
  var_empty_hash_table, // extern
  var_584_3_idx, // dynamic
  var_584_7_piece, // dynamic
  var_map_reduce, // extern
  var_ai__escaped_token, // initialized
  var_602_21_piece, // dynamic
  var_603_1_buf, // dynamic
  var_604_1_s, // dynamic
  var_605_1_n, // dynamic
  var_606_1_i, // dynamic
  var_613_1_chr, // dynamic
  var_std__sequence, // extern
  var__END
};


static TAB_NUM t_func_ai__load_ai_model[] = {
  12, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(10), // 161_0_name
  string_1, LOCAL(11), // 162_0_server
  // $address server .truncate_from. ':'
  var_truncate_from, 2, LOCAL(11), chr_58, 1, LOCAL(12),
  // $port_no server .behind. ':'
  var_behind, 2, LOCAL(11), chr_58, 1, var_165_1_port_no,
  // is_empty
  var_is_empty, 1, var_165_1_port_no, 1, LOCAL(1),
  // !port_no
  var_if, 3, LOCAL(1), lambda_1, lambda_2, 1, var_165_1_port_no,
  // $model
  LET, -3, var_ai_types__model, var_name_of, LOCAL(10), var_address_of, LOCAL(12), var_port_no_of, var_165_1_port_no, var_171_1_model,
  // get_tokens! model
  func_get_tokens, 1, var_171_1_model, IO_CALL(9), LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), LOCAL(7), LOCAL(8), LOCAL(9),
  // model.ai::pieces_of
  LET, -1, var_171_1_model, var_ai__pieces_of, LOCAL(1), var_171_1_model,
  // model.ai::begin_of_stream_token_of
  LET, -1, var_171_1_model, var_ai__begin_of_stream_token_of, LOCAL(2), var_171_1_model,
  // model.ai::end_of_stream_token_of
  LET, -1, var_171_1_model, var_ai__end_of_stream_token_of, LOCAL(3), var_171_1_model,
  // model.ai::newline_token_of
  LET, -1, var_171_1_model, var_ai__newline_token_of, LOCAL(4), var_171_1_model,
  // model.ai::end_of_text_token_of
  LET, -1, var_171_1_model, var_ai__end_of_text_token_of, LOCAL(5), var_171_1_model,
  // model.ai::prefix_token_of
  LET, -1, var_171_1_model, var_ai__prefix_token_of, LOCAL(6), var_171_1_model,
  // model.ai::suffix_token_of
  LET, -1, var_171_1_model, var_ai__suffix_token_of, LOCAL(7), var_171_1_model,
  // model.ai::middle_token_of
  LET, -1, var_171_1_model, var_ai__middle_token_of, LOCAL(8), var_171_1_model,
  // model.ai::context_size_of
  LET, -1, var_171_1_model, var_ai__context_size_of, LOCAL(9), var_171_1_model,
  // !model
  LET, -2, var_171_1_model, var_ai__question_token_of, var_undefined, var_ai__answer_token_of, var_undefined, var_171_1_model,
  // ai::pieces_of(model).is_an_error
  var_ai__pieces_of, 1, var_171_1_model, 1, LOCAL(1),
  // is_an_error
  var_is_an_error, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_3, lambda_4, TAIL_CALL,
  POS(164, 3),
  POS(165, 3),
  POS(168, 15),
  POS(166, 3),
  POS(171, 3),
  POS(176, 3),
  POS(177, 6),
  POS(178, 6),
  POS(179, 6),
  POS(180, 6),
  POS(181, 6),
  POS(182, 6),
  POS(183, 6),
  POS(184, 6),
  POS(185, 6),
  POS(186, 3),
  POS(191, 5),
  POS(191, 26),
  POS(190, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  8080
  LET, 1, num_8080, TAIL_CALL,
  POS(169, 9)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // to_integer
  var_to_integer, 1, var_165_1_port_no, 1, LOCAL(1),
  //  port_no.to_integer
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(170, 18),
  POS(170, 9)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // ai::pieces_of(model)
  var_ai__pieces_of, 1, var_171_1_model, 1, LOCAL(1),
  //  ai::pieces_of(model)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(192, 8),
  POS(192, 7)
};

static TAB_NUM t_lambda_4[] = {
  3, // locals
  0, // parameters
  // build_piece_table &model
  func_build_piece_table, 1, var_171_1_model, 1, var_171_1_model,
  // ai::piece_table_of(model)("@nl;")
  var_ai__piece_table_of, 1, var_171_1_model, 1, LOCAL(1),
  // !model.ai::newline_token_of ai::piece_table_of(model)("@nl;")
  LOCAL(1), 1, string_2, 1, LOCAL(3),
  // model.ai::newline_token_of ai::piece_table_of(model)("@nl;")
  LET, -1, var_171_1_model, var_ai__newline_token_of, LOCAL(3), var_171_1_model,
  // ai::piece_table_of(model)(" ")
  var_ai__piece_table_of, 1, var_171_1_model, 1, LOCAL(1),
  // !model.ai::space_token_of ai::piece_table_of(model)(" ")
  LOCAL(1), 1, string_3, 1, LOCAL(3),
  // model.ai::space_token_of ai::piece_table_of(model)(" ")
  LET, -1, var_171_1_model, var_ai__space_token_of, LOCAL(3), var_171_1_model,
  // ai::pieces_of(model)
  var_ai__pieces_of, 1, var_171_1_model, 1, LOCAL(1),
  // for_each ai::pieces_of(model)
  var_for_each, 3, LOCAL(1), lambda_5, lambda_12, TAIL_CALL,
  POS(194, 7),
  POS(200, 35),
  POS(200, 7),
  POS(200, 8),
  POS(201, 33),
  POS(201, 7),
  POS(201, 8),
  POS(203, 16),
  POS(203, 7)
};

static TAB_NUM t_lambda_5[] = {
  2, // locals
  2, // parameters
  var_204_3_token,
  var_204_9_piece,
  // is_a_string
  var_is_a_string, 1, var_204_9_piece, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_6, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_11, var_next, TAIL_CALL,
  POS(207, 21),
  POS(206, 15),
  POS(205, 11)
};

static TAB_NUM t_lambda_6[] = {
  3, // locals
  0, // parameters
  // length_of(piece) > 4
  var_length_of, 1, var_204_9_piece, 1, LOCAL(1),
  // 4
  var_std__less, 2, num_4, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_7, 1, LOCAL(3),
  // length_of(piece) > 4
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(208, 15),
  POS(208, 34),
  POS(206, 15),
  POS(208, 15)
};

static TAB_NUM t_lambda_7[] = {
  3, // locals
  0, // parameters
  // piece .has_prefix. "<|" && piece .has_suffix. "|>"
  var_has_prefix, 2, var_204_9_piece, string_4, 1, LOCAL(1),
  // piece .has_prefix. "<|" && piece .has_suffix. "|>"
  var_std__and, 2, LOCAL(1), lambda_8, 1, LOCAL(2),
  // 
  var_std__or, 2, LOCAL(2), lambda_9, 1, LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(210, 17),
  POS(210, 17),
  POS(209, 17),
  POS(209, 17)
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // piece .has_suffix. "|>"
  var_has_suffix, 2, var_204_9_piece, string_5, 1, LOCAL(1),
  // piece .has_suffix. "|>"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(210, 44),
  POS(210, 44)
};

static TAB_NUM t_lambda_9[] = {
  2, // locals
  0, // parameters
  // piece .has_prefix. ">>" && piece .has_suffix. "<<"
  var_has_prefix, 2, var_204_9_piece, string_6, 1, LOCAL(1),
  // piece .has_prefix. ">>" && piece .has_suffix. "<<"
  var_std__and, 2, LOCAL(1), lambda_10, 1, LOCAL(2),
  // piece .has_prefix. ">>" && piece .has_suffix. "<<"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(211, 17),
  POS(211, 17),
  POS(211, 17)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // piece .has_suffix. "<<"
  var_has_suffix, 2, var_204_9_piece, string_7, 1, LOCAL(1),
  // piece .has_suffix. "<<"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(211, 44),
  POS(211, 44)
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // $special range(piece 3 -3)
  var_range, 3, var_204_9_piece, num_3, minus_num_3, 1, LOCAL(1),
  // case special
  var_case, 14, LOCAL(1), str_endoftext, lambda_endoftext, str_QUESTION, lambda_QUESTION, str_ANSWER, lambda_ANSWER, str_PREFIX, lambda_PREFIX, str_SUFFIX, lambda_SUFFIX, str_MIDDLE, lambda_MIDDLE, var_next, TAIL_CALL,
  POS(213, 15),
  POS(214, 15)
};

static TAB_NUM t_lambda_endoftext[] = {
  2, // locals
  0, // parameters
  // !model.ai::end_of_text_token_of token-1
  var_std__minus, 2, var_204_3_token, num_1, 1, LOCAL(2),
  // model.ai::end_of_text_token_of token-1
  LET, -1, var_171_1_model, var_ai__end_of_text_token_of, LOCAL(2), var_171_1_model,
  // next
  var_next, 0, TAIL_CALL,
  POS(216, 19),
  POS(216, 20),
  POS(217, 19)
};

static TAB_NUM t_lambda_QUESTION[] = {
  2, // locals
  0, // parameters
  // !model.ai::question_token_of token-1
  var_std__minus, 2, var_204_3_token, num_1, 1, LOCAL(2),
  // model.ai::question_token_of token-1
  LET, -1, var_171_1_model, var_ai__question_token_of, LOCAL(2), var_171_1_model,
  // next
  var_next, 0, TAIL_CALL,
  POS(219, 19),
  POS(219, 20),
  POS(220, 19)
};

static TAB_NUM t_lambda_ANSWER[] = {
  2, // locals
  0, // parameters
  // !model.ai::answer_token_of token-1
  var_std__minus, 2, var_204_3_token, num_1, 1, LOCAL(2),
  // model.ai::answer_token_of token-1
  LET, -1, var_171_1_model, var_ai__answer_token_of, LOCAL(2), var_171_1_model,
  // next
  var_next, 0, TAIL_CALL,
  POS(222, 19),
  POS(222, 20),
  POS(223, 19)
};

static TAB_NUM t_lambda_PREFIX[] = {
  2, // locals
  0, // parameters
  // !model.ai::prefix_token_of token-1
  var_std__minus, 2, var_204_3_token, num_1, 1, LOCAL(2),
  // model.ai::prefix_token_of token-1
  LET, -1, var_171_1_model, var_ai__prefix_token_of, LOCAL(2), var_171_1_model,
  // next
  var_next, 0, TAIL_CALL,
  POS(225, 19),
  POS(225, 20),
  POS(226, 19)
};

static TAB_NUM t_lambda_SUFFIX[] = {
  2, // locals
  0, // parameters
  // !model.ai::suffix_token_of token-1
  var_std__minus, 2, var_204_3_token, num_1, 1, LOCAL(2),
  // model.ai::suffix_token_of token-1
  LET, -1, var_171_1_model, var_ai__suffix_token_of, LOCAL(2), var_171_1_model,
  // next
  var_next, 0, TAIL_CALL,
  POS(228, 19),
  POS(228, 20),
  POS(229, 19)
};

static TAB_NUM t_lambda_MIDDLE[] = {
  2, // locals
  0, // parameters
  // !model.ai::middle_token_of token-1
  var_std__minus, 2, var_204_3_token, num_1, 1, LOCAL(2),
  // model.ai::middle_token_of token-1
  LET, -1, var_171_1_model, var_ai__middle_token_of, LOCAL(2), var_171_1_model,
  // next
  var_next, 0, TAIL_CALL,
  POS(231, 19),
  POS(231, 20),
  POS(232, 19)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  model
  LET, 1, var_171_1_model, TAIL_CALL,
  POS(235, 11)
};

static TAB_NUM t_func_ai_types__model___ai__generate[] = {
  10, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_239_0_model,
  REST_PARAMETER, LOCAL(8), // 240_0_options
  MANDATORY_PARAMETER, LOCAL(9), // 241_0_prompt
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
  var_extract_options, 8, LOCAL(8), LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), LOCAL(7), 7, var_244_29_minimum_confidence, var_245_27_maximum_length, var_246_22_stop_text, var_247_19_backtrack, var_248_19_log_level, var_249_21_be_verbose, var_250_25_use_colours,
  // $do_log log_level > 0
  var_std__less, 2, num_0, var_248_19_log_level, 1, var_251_1_do_log,
  // update_if use_colours &be_verbose -> true
  var_update_if, 3, var_250_25_use_colours, var_249_21_be_verbose, lambda_13, 1, var_249_21_be_verbose,
  // on use_colours: print! ansi_text_colour(BLACK)
  var_on, 2, var_250_25_use_colours, lambda_14, IO_CALL(0),
  // ai::tokenize! $tokens model prompt
  var_ai__tokenize, 2, var_239_0_model, LOCAL(9), IO_CALL(1), LOCAL(10),
  // generate_text! $text $_max_no tokens "" 0 empty_list
  func_generate_text, 4, LOCAL(10), string_8, num_0, var_empty_list, IO_CALL(2), var_255_16_text, LOCAL(1),
  // on use_colours: print! ansi_reset_colour()
  var_on, 2, var_250_25_use_colours, lambda_15, IO_CALL(0),
  // on be_verbose: println!
  var_on, 2, var_249_21_be_verbose, lambda_16, IO_CALL(0),
  // result_count() == 1
  var_result_count, 0, 1, LOCAL(1),
  // result_count() == 1
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_17, var_pass, TAIL_CALL,
  POS(244, 5),
  POS(245, 5),
  POS(246, 5),
  POS(247, 5),
  POS(248, 5),
  POS(249, 5),
  POS(250, 5),
  POS(243, 3),
  POS(251, 3),
  POS(252, 3),
  POS(253, 3),
  POS(254, 3),
  POS(255, 3),
  POS(256, 3),
  POS(257, 3),
  POS(259, 5),
  POS(259, 5),
  POS(258, 3)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(252, 39)
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  0, // parameters
  // ansi_text_colour(BLACK)
  var_ansi_text_colour, 1, var_BLACK, 1, LOCAL(1),
  // print! ansi_text_colour(BLACK)
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(253, 26),
  POS(253, 19)
};

static TAB_NUM t_lambda_15[] = {
  1, // locals
  0, // parameters
  // ansi_reset_colour()
  var_ansi_reset_colour, 0, 1, LOCAL(1),
  // print! ansi_reset_colour()
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(256, 26),
  POS(256, 19)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  // println!
  var_println, 0, IO_TAIL_CALL,
  POS(257, 18)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_255_16_text, TAIL_CALL,
  POS(260, 7)
};

static TAB_NUM t_func_generate_text[] = {
  2, // locals
  4, // parameters
  var_263_17_tokens,
  var_263_24_text,
  var_263_29_no,
  var_263_32_prefix,
  // is_defined && text .contains. stop_text
  var_is_defined, 1, var_246_22_stop_text, 1, LOCAL(1),
  // is_defined && text .contains. stop_text
  var_std__and, 2, LOCAL(1), lambda_18, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_19, lambda_20, IO_TAIL_CALL,
  POS(265, 17),
  POS(265, 17),
  POS(264, 5)
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  0, // parameters
  // text .contains. stop_text
  var_contains, 2, var_263_24_text, var_246_22_stop_text, 1, LOCAL(1),
  // text .contains. stop_text
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(265, 31),
  POS(265, 31)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  //  text no
  LET, 2, var_263_24_text, var_263_29_no, TAIL_CALL,
  POS(266, 9)
};

static TAB_NUM t_lambda_20[] = {
  2, // locals
  0, // parameters
  // current_time! $t1
  var_current_time, 0, IO_CALL(1), var_268_15_t1,
  // ai::evaluate! model tokens $next_token $confidence_values
  var_ai__evaluate, 2, var_239_0_model, var_263_17_tokens, IO_CALL(2), var_269_28_next_token, var_269_40_confidence_values,
  // ai::end_of_stream_token_of(model):
  var_ai__end_of_stream_token_of, 1, var_239_0_model, 1, LOCAL(1),
  // next_token == ai::end_of_stream_token_of(model):
  var_std__equal, 2, var_269_28_next_token, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_21, lambda_23, IO_TAIL_CALL,
  POS(268, 9),
  POS(269, 9),
  POS(271, 25),
  POS(271, 11),
  POS(270, 9)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  // on do_log:
  var_on, 2, var_251_1_do_log, lambda_22, IO_CALL(0),
  // -> text no
  LET, 2, var_263_24_text, var_263_29_no, TAIL_CALL,
  POS(272, 13),
  POS(274, 13)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  // eprintln! "<end of stream>"
  var_eprintln, 1, str_end_of_stream, IO_TAIL_CALL,
  POS(273, 15)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  // $max_no no
  LET, 1, var_263_29_no, 1, var_276_1_max_no,
  // loop:
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(276, 13),
  POS(277, 13)
};

static TAB_NUM t_lambda_loop[] = {
  3, // locals
  0, // parameters
  // confidence_values(1) !next_token $next_confidence
  var_269_40_confidence_values, 1, num_1, 1, LOCAL(1),
  // confidence_values(1) !next_token $next_confidence
  LOCAL(1), 0, 2, var_269_28_next_token, var_278_34_next_confidence,
  // ai::detokenize model next_token prefix $next_piece $suffix
  var_ai__detokenize, 3, var_239_0_model, var_269_28_next_token, var_263_32_prefix, 2, var_279_40_next_piece, var_279_52_suffix,
  // on do_log:
  var_on, 2, var_251_1_do_log, lambda_24, IO_CALL(0),
  // next_confidence >= minimum_confidence || no < 5:
  var_std__less, 2, var_278_34_next_confidence, var_244_29_minimum_confidence, 1, LOCAL(1),
  // next_confidence >= minimum_confidence || no < 5:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_confidence >= minimum_confidence || no < 5:
  var_std__or, 2, LOCAL(2), lambda_30, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_31, lambda_44, IO_TAIL_CALL,
  POS(278, 15),
  POS(278, 15),
  POS(279, 15),
  POS(280, 15),
  POS(309, 17),
  POS(309, 17),
  POS(309, 17),
  POS(308, 15)
};

static TAB_NUM t_lambda_24[] = {
  3, // locals
  0, // parameters
  // current_time! $t2
  var_current_time, 0, IO_CALL(1), LOCAL(3),
  // t2-t1) # in ms
  var_std__minus, 2, LOCAL(3), var_268_15_t1, 1, LOCAL(1),
  // $dt 1000*(t2-t1) # in ms
  var_std__times, 2, num_1000, LOCAL(1), 1, var_282_1_dt,
  // 1:
  var_std__less, 2, num_1, var_248_19_log_level, 1, LOCAL(1),
  // 1:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_25, lambda_26, IO_TAIL_CALL,
  POS(281, 17),
  POS(282, 27),
  POS(282, 17),
  POS(284, 32),
  POS(284, 32),
  POS(283, 17)
};

static TAB_NUM t_lambda_25[] = {
  2, // locals
  0, // parameters
  // ai::escaped_piece(next_piece))@quot;:"
  var_ai__escaped_piece, 1, var_279_40_next_piece, 1, LOCAL(1),
  // $token_string
  var_std__string, 3, string_9, LOCAL(1), string_10, 1, LOCAL(2),
  // format
  var_format, 4, str_4_l, var_263_29_no, LOCAL(2), var_278_34_next_confidence, 1, LOCAL(1),
  // eprintln!
  var_eprintln, 1, LOCAL(1), IO_TAIL_CALL,
  POS(286, 32),
  POS(285, 21),
  POS(288, 23),
  POS(287, 21)
};

static TAB_NUM t_lambda_26[] = {
  2, // locals
  0, // parameters
  // log_level >= 3:
  var_std__less, 2, var_248_19_log_level, num_3, 1, LOCAL(1),
  // log_level >= 3:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_27, lambda_28, IO_CALL(0),
  // for_each confidence_values
  var_for_each, 3, var_269_40_confidence_values, lambda_29, var_pass, IO_TAIL_CALL,
  POS(293, 23),
  POS(293, 23),
  POS(292, 21),
  POS(297, 21)
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // format("-[#%4|%3.1 ms]---------------" no dt)
  var_format, 3, str_431_ms, var_263_29_no, var_282_1_dt, 1, LOCAL(1),
  // eprintln! format("-[#%4|%3.1 ms]---------------" no dt)
  var_eprintln, 1, LOCAL(1), IO_TAIL_CALL,
  POS(294, 35),
  POS(294, 25)
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // format("-[#%4]------------------------" no dt)
  var_format, 3, string_11, var_263_29_no, var_282_1_dt, 1, LOCAL(1),
  // eprintln! format("-[#%4]------------------------" no dt)
  var_eprintln, 1, LOCAL(1), IO_TAIL_CALL,
  POS(296, 35),
  POS(296, 25)
};

static TAB_NUM t_lambda_29[] = {
  6, // locals
  1, // parameters
  LOCAL(2), // 298_3_confidence_value
  // confidence_value $token $confidence
  LOCAL(2), 0, 2, LOCAL(3), LOCAL(4),
  // ai::detokenize model token prefix $piece
  var_ai__detokenize, 3, var_239_0_model, LOCAL(3), var_263_32_prefix, 1, LOCAL(5),
  // replace_all &piece '@ht;' = "<<<ht>>>"
  var_replace_all, 2, LOCAL(5), key_value_pair_301_21, 1, LOCAL(5),
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
  POS(299, 25),
  POS(300, 25),
  POS(301, 25),
  POS(302, 48),
  POS(302, 25),
  POS(304, 27),
  POS(303, 25),
  POS(306, 25)
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  0, // parameters
  // no < 5:
  var_std__less, 2, var_263_29_no, num_5, 1, LOCAL(1),
  // no < 5:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(309, 58),
  POS(309, 58)
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  0, // parameters
  // no == 0 &next_piece: trim_left next_piece
  var_std__equal, 2, var_263_29_no, num_0, 1, LOCAL(1),
  // update_if no == 0 &next_piece: trim_left next_piece
  var_update_if, 3, LOCAL(1), var_279_40_next_piece, lambda_32, 1, var_279_40_next_piece,
  // print_piece! next_piece next_confidence
  func_print_piece, 2, var_279_40_next_piece, var_278_34_next_confidence, IO_CALL(0),
  // no >= maximum_length
  var_std__less, 2, var_263_29_no, var_245_27_maximum_length, 1, LOCAL(1),
  // no >= maximum_length
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_33, lambda_34, IO_TAIL_CALL,
  POS(310, 29),
  POS(310, 19),
  POS(311, 19),
  POS(313, 21),
  POS(313, 21),
  POS(312, 19)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  // trim_left next_piece
  var_trim_left, 1, var_279_40_next_piece, TAIL_CALL,
  POS(310, 50)
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // append(text next_piece) no
  var_append, 2, var_263_24_text, var_279_40_next_piece, 1, LOCAL(1),
  //  append(text next_piece) no
  LET, 2, LOCAL(1), var_263_29_no, TAIL_CALL,
  POS(314, 24),
  POS(314, 23)
};

static TAB_NUM t_lambda_34[] = {
  4, // locals
  0, // parameters
  // push(tokens next_token)
  var_push, 2, var_263_17_tokens, var_269_28_next_token, 1, LOCAL(1),
  // append(text next_piece)
  var_append, 2, var_263_24_text, var_279_40_next_piece, 1, LOCAL(2),
  // no+1
  var_std__plus, 2, var_263_29_no, num_1, 1, LOCAL(3),
  // generate_text! $response $highest_no
  func_generate_text, 4, LOCAL(1), LOCAL(2), LOCAL(3), var_279_52_suffix, IO_CALL(2), var_316_16_response, LOCAL(4),
  // max &max_no highest_no
  var_max, 2, var_276_1_max_no, LOCAL(4), 1, var_276_1_max_no,
  // is_empty:
  var_is_empty, 1, var_316_16_response, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_response_is_empty, lambda_43, IO_TAIL_CALL,
  POS(317, 25),
  POS(318, 25),
  POS(319, 25),
  POS(316, 23),
  POS(321, 23),
  POS(323, 34),
  POS(322, 23)
};

static TAB_NUM t_lambda_response_is_empty[] = {
  1, // locals
  0, // parameters
  // next_piece == "@nl;"
  var_std__equal, 2, var_279_40_next_piece, string_2, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_35, lambda_36, IO_TAIL_CALL,
  POS(325, 29),
  POS(324, 27)
};

static TAB_NUM t_lambda_35[] = {
  1, // locals
  0, // parameters
  // push(text '@nl;') max_no # stop backtracking
  var_push, 2, var_263_24_text, chr_10, 1, LOCAL(1),
  //  push(text '@nl;') max_no # stop backtracking
  LET, 2, LOCAL(1), var_276_1_max_no, TAIL_CALL,
  POS(326, 32),
  POS(326, 31)
};

static TAB_NUM t_lambda_36[] = {
  3, // locals
  0, // parameters
  // length_of(confidence_values) < 2
  var_length_of, 1, var_269_40_confidence_values, 1, LOCAL(1),
  // length_of(confidence_values) < 2
  var_std__less, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // 
  var_std__or, 2, LOCAL(2), lambda_37, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_38, lambda_39, IO_TAIL_CALL,
  POS(330, 35),
  POS(330, 35),
  POS(329, 35),
  POS(328, 31)
};

static TAB_NUM t_lambda_37[] = {
  2, // locals
  0, // parameters
  // no+backtrack
  var_std__plus, 2, var_263_29_no, var_247_19_backtrack, 1, LOCAL(1),
  // no+backtrack
  var_std__less, 2, LOCAL(1), var_276_1_max_no, 1, LOCAL(2),
  // max_no > no+backtrack
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(331, 44),
  POS(331, 44),
  POS(331, 35)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  //  "" max_no
  LET, 2, string_8, var_276_1_max_no, TAIL_CALL,
  POS(332, 35)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  // on use_colours: print! ansi_reset_colour()
  var_on, 2, var_250_25_use_colours, lambda_40, IO_CALL(0),
  // on be_verbose: print!
  var_on, 2, var_249_21_be_verbose, lambda_41, IO_CALL(0),
  // on use_colours: print! ansi_text_colour(BLACK)
  var_on, 2, var_250_25_use_colours, lambda_42, IO_CALL(0),
  // range &confidence_values 2 -1
  var_range, 3, var_269_40_confidence_values, num_2, minus_num_1, 1, var_269_40_confidence_values,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(334, 35),
  POS(335, 35),
  POS(337, 35),
  POS(338, 35),
  POS(339, 35)
};

static TAB_NUM t_lambda_40[] = {
  1, // locals
  0, // parameters
  // ansi_reset_colour()
  var_ansi_reset_colour, 0, 1, LOCAL(1),
  // print! ansi_reset_colour()
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(334, 58),
  POS(334, 51)
};

static TAB_NUM t_lambda_41[] = {
  2, // locals
  0, // parameters
  // length_of(next_piece))
  var_length_of, 1, var_279_40_next_piece, 1, LOCAL(1),
  // dup("@bs; @bs;" length_of(next_piece))
  var_dup, 2, string_12, LOCAL(1), 1, LOCAL(2),
  // print!
  var_print, 1, LOCAL(2), IO_TAIL_CALL,
  POS(336, 53),
  POS(336, 37),
  POS(335, 50)
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // ansi_text_colour(BLACK)
  var_ansi_text_colour, 1, var_BLACK, 1, LOCAL(1),
  // print! ansi_text_colour(BLACK)
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(337, 58),
  POS(337, 51)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  //  response max_no
  LET, 2, var_316_16_response, var_276_1_max_no, TAIL_CALL,
  POS(340, 27)
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  //  "" max_no
  LET, 2, string_8, var_276_1_max_no, TAIL_CALL,
  POS(341, 19)
};

static TAB_NUM t_func_print_piece[] = {
  0, // locals
  2, // parameters
  var_343_15_piece,
  var_343_21_confidence,
  // on use_colours:
  var_on, 2, var_250_25_use_colours, lambda_45, IO_CALL(0),
  // on be_verbose: print! piece
  var_on, 2, var_249_21_be_verbose, lambda_52, IO_TAIL_CALL,
  POS(344, 5),
  POS(361, 5)
};

static TAB_NUM t_lambda_45[] = {
  2, // locals
  0, // parameters
  // $confidence_delta confidence-minimum_confidence
  var_std__minus, 2, var_343_21_confidence, var_244_29_minimum_confidence, 1, var_345_1_confidence_delta,
  // $colour
  var_cond, 3, lambda_46, lambda_48, lambda_50, 1, LOCAL(2),
  // ansi_background_colour(colour)
  var_ansi_background_colour, 1, LOCAL(2), 1, LOCAL(1),
  // print! ansi_background_colour(colour)
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(345, 7),
  POS(346, 7),
  POS(360, 14),
  POS(360, 7)
};

static TAB_NUM t_lambda_46[] = {
  1, // locals
  0, // parameters
  // confidence_delta < 0 ->
  var_std__less, 2, var_345_1_confidence_delta, num_0, 1, LOCAL(1),
  //  confidence_delta < 0 ->
  LET, 2, LOCAL(1), lambda_47, TAIL_CALL,
  POS(348, 14),
  POS(348, 13)
};

static TAB_NUM t_lambda_47[] = {
  5, // locals
  0, // parameters
  // confidence_delta
  var_std__negate, 1, var_345_1_confidence_delta, 1, LOCAL(1),
  // BLACK = -confidence_delta
  var_std__key_value_pair, 2, var_BLACK, LOCAL(1), 1, LOCAL(2),
  // minimum_confidence+confidence_delta
  var_std__plus, 2, var_244_29_minimum_confidence, var_345_1_confidence_delta, 1, LOCAL(3),
  // RED = minimum_confidence+confidence_delta
  var_std__key_value_pair, 2, var_RED, LOCAL(3), 1, LOCAL(4),
  // colour_mixture
  var_colour_mixture, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  // 
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(350, 24),
  POS(350, 15),
  POS(351, 21),
  POS(351, 15),
  POS(349, 13),
  POS(348, 37)
};

static TAB_NUM t_lambda_48[] = {
  1, // locals
  0, // parameters
  // 10 ->
  var_std__less, 2, num_10, var_345_1_confidence_delta, 1, LOCAL(1),
  //  confidence_delta > 10 ->
  LET, 2, LOCAL(1), lambda_49, TAIL_CALL,
  POS(352, 33),
  POS(352, 13)
};

static TAB_NUM t_lambda_49[] = {
  4, // locals
  0, // parameters
  // GREEN = 10
  var_std__key_value_pair, 2, var_GREEN, num_10, 1, LOCAL(1),
  // confidence_delta-10
  var_std__minus, 2, var_345_1_confidence_delta, num_10, 1, LOCAL(2),
  // WHITE = confidence_delta-10
  var_std__key_value_pair, 2, var_WHITE, LOCAL(2), 1, LOCAL(3),
  // colour_mixture
  var_colour_mixture, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // 
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(354, 15),
  POS(355, 23),
  POS(355, 15),
  POS(353, 13),
  POS(352, 38)
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  //  true ->
  LET, 2, var_true, lambda_51, TAIL_CALL,
  POS(356, 13)
};

static TAB_NUM t_lambda_51[] = {
  4, // locals
  0, // parameters
  // 10-confidence_delta
  var_std__minus, 2, num_10, var_345_1_confidence_delta, 1, LOCAL(1),
  // RED = 10-confidence_delta
  var_std__key_value_pair, 2, var_RED, LOCAL(1), 1, LOCAL(2),
  // GREEN = confidence_delta
  var_std__key_value_pair, 2, var_GREEN, var_345_1_confidence_delta, 1, LOCAL(3),
  // colour_mixture
  var_colour_mixture, 2, LOCAL(2), LOCAL(3), 1, LOCAL(4),
  // 
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(358, 21),
  POS(358, 15),
  POS(359, 15),
  POS(357, 13),
  POS(356, 21)
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  // print! piece
  var_print, 1, var_343_15_piece, IO_TAIL_CALL,
  POS(361, 20)
};

static TAB_NUM t_func_get_tokens[] = {
  7, // locals
  1, // parameters
  LOCAL(4), // 363_14_model
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
  // open_tcp_client_socket! $fd address_of(model) port_no_of(model)
  var_open_tcp_client_socket, 2, LOCAL(1), LOCAL(2), IO_CALL(1), LOCAL(6),
  // length_of(json))@cr;
  var_length_of, 1, LOCAL(5), 1, LOCAL(1),
  // "
  var_std__string, 5, str_POST_get_tokens, LOCAL(1), str_Connection_close, LOCAL(5), string_2, 1, LOCAL(2),
  // print_to! fd "
  var_print_to, 2, LOCAL(6), LOCAL(2), IO_CALL(0),
  // load! $result fd
  var_load, 1, LOCAL(6), IO_CALL(1), var_379_7_result,
  // between(result ' ' ' ').to_integer
  var_between, 3, var_379_7_result, chr_32, chr_32, 1, LOCAL(1),
  // $error_code between(result ' ' ' ').to_integer
  var_to_integer, 1, LOCAL(1), 1, LOCAL(7),
  // error_code >= 300:
  var_std__less, 2, LOCAL(7), num_300, 1, LOCAL(1),
  // error_code >= 300:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_53, lambda_54, TAIL_CALL,
  POS(370, 19),
  POS(370, 10),
  POS(369, 7),
  POS(367, 3),
  POS(371, 31),
  POS(371, 49),
  POS(371, 3),
  POS(375, 23),
  POS(372, 16),
  POS(372, 3),
  POS(379, 3),
  POS(382, 15),
  POS(382, 3),
  POS(384, 5),
  POS(384, 5),
  POS(383, 3)
};

static TAB_NUM t_lambda_53[] = {
  1, // locals
  0, // parameters
  // result .behind. "@cr;@nl;@cr;@nl;"
  var_behind, 2, var_379_7_result, string_13, 1, LOCAL(1),
  // error result .behind. "@cr;@nl;@cr;@nl;"
  var_error, 1, LOCAL(1), TAIL_CALL,
  POS(385, 13),
  POS(385, 7)
};

static TAB_NUM t_lambda_54[] = {
  10, // locals
  0, // parameters
  // behind &result "@cr;@nl;@cr;@nl;"
  var_behind, 2, var_379_7_result, string_13, 1, var_379_7_result,
  // from_utf8 &result
  var_from_utf8, 1, var_379_7_result, 1, var_379_7_result,
  // $info result.from_json
  var_from_json, 1, var_379_7_result, 1, LOCAL(10),
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
  POS(387, 7),
  POS(388, 7),
  POS(389, 7),
  POS(391, 9),
  POS(392, 9),
  POS(393, 9),
  POS(394, 9),
  POS(395, 9),
  POS(396, 9),
  POS(397, 9),
  POS(398, 9),
  POS(399, 9),
  POS(390, 7)
};

static TAB_NUM t_func_ai_types__model___ai__tokenize[] = {
  11, // locals
  2, // parameters
  LOCAL(5), // 409_0_model
  LOCAL(6), // 410_0_text
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
  // open_tcp_client_socket! $fd address_of(model) port_no_of(model)
  var_open_tcp_client_socket, 2, LOCAL(1), LOCAL(2), IO_CALL(1), LOCAL(9),
  // length_of(json))@cr;
  var_length_of, 1, LOCAL(8), 1, LOCAL(1),
  // "
  var_std__string, 5, str_POST_tokenize_HT, LOCAL(1), str_Connection_close, LOCAL(8), string_2, 1, LOCAL(2),
  // write_to! fd "
  var_write_to, 2, LOCAL(9), LOCAL(2), IO_CALL(0),
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
  POS(417, 12),
  POS(415, 3),
  POS(423, 19),
  POS(423, 10),
  POS(424, 9),
  POS(422, 7),
  POS(420, 3),
  POS(425, 3),
  POS(426, 31),
  POS(426, 49),
  POS(426, 3),
  POS(430, 23),
  POS(427, 16),
  POS(427, 3),
  POS(434, 3),
  POS(437, 3),
  POS(438, 3),
  POS(439, 6),
  POS(439, 3)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  //  "content"
  LET, 1, str_content, TAIL_CALL,
  POS(418, 9)
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  //  "lines"
  LET, 1, str_lines, TAIL_CALL,
  POS(419, 9)
};

static TAB_NUM t_func_ai_types__model___ai__evaluate[] = {
  19, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(11), // 454_0_model
  MANDATORY_PARAMETER, LOCAL(12), // 455_0_prompt
  var_ai__SMART, LOCAL(13), // 456_0_mode
  num_0, LOCAL(14), // 457_0_start
  // result_count() == 2
  var_result_count, 0, 1, LOCAL(1),
  // $do_return_confidence_values result_count() == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(15),
  // is_a_string)
  var_is_a_string, 1, LOCAL(12), 1, LOCAL(1),
  // $use_tokens not(prompt.is_a_string)
  var_not, 1, LOCAL(1), 1, var_463_1_use_tokens,
  // $PROMPT
  var_if, 3, var_463_1_use_tokens, lambda_57, lambda_58, 1, LOCAL(16),
  // case &mode
  var_case, 8, LOCAL(13), var_ai__EXACT, lambda_aiEXACT, var_ai__SHIFT, lambda_aiSHIFT, var_ai__SMART, lambda_aiSMART, lambda_59, 1, LOCAL(13),
  // PROMPT = prompt
  var_std__key_value_pair, 2, LOCAL(16), LOCAL(12), 1, LOCAL(1),
  // start" = start
  var_std__key_value_pair, 2, str_start, LOCAL(14), 1, LOCAL(2),
  // name_of(model)
  var_name_of, 1, LOCAL(11), 1, LOCAL(3),
  // model" = name_of(model)
  var_std__key_value_pair, 2, str_model, LOCAL(3), 1, LOCAL(4),
  // mode" = mode
  var_std__key_value_pair, 2, str_mode, LOCAL(13), 1, LOCAL(5),
  // logits" = true # also disables server side token selection
  var_std__key_value_pair, 2, str_logits, var_true, 1, LOCAL(6),
  // brief" = true
  var_std__key_value_pair, 2, str_brief, var_true, 1, LOCAL(7),
  // insert_order_table
  var_insert_order_table, 8, LOCAL(1), LOCAL(2), LOCAL(4), LOCAL(5), LOCAL(6), LOCAL(7), key_value_pair_483_1, key_value_pair_484_1, 1, LOCAL(10),
  // $json
  var_to_json, 1, LOCAL(10), 1, LOCAL(17),
  // to_utf8 &json
  var_to_utf8, 1, LOCAL(17), 1, LOCAL(17),
  // address_of(model) port_no_of(model)
  var_address_of, 1, LOCAL(11), 1, LOCAL(1),
  // port_no_of(model)
  var_port_no_of, 1, LOCAL(11), 1, LOCAL(2),
  // open_tcp_client_socket! $fd address_of(model) port_no_of(model)
  var_open_tcp_client_socket, 2, LOCAL(1), LOCAL(2), IO_CALL(1), LOCAL(18),
  // length_of(json))@cr;
  var_length_of, 1, LOCAL(17), 1, LOCAL(1),
  // "
  var_std__string, 5, str_POST_completion, LOCAL(1), str_Connection_close, LOCAL(17), string_2, 1, LOCAL(2),
  // write_to! fd "
  var_write_to, 2, LOCAL(18), LOCAL(2), IO_CALL(0),
  // load! $result fd
  var_load, 1, LOCAL(18), IO_CALL(1), LOCAL(19),
  // behind &result "@cr;@nl;@cr;@nl;"
  var_behind, 2, LOCAL(19), string_13, 1, LOCAL(19),
  // $info result.from_json
  var_from_json, 1, LOCAL(19), 1, var_498_1_info,
  // if
  var_if, 3, LOCAL(15), lambda_do_return_confidence_values, lambda_63, TAIL_CALL,
  POS(462, 32),
  POS(462, 3),
  POS(463, 26),
  POS(463, 3),
  POS(464, 3),
  POS(469, 3),
  POS(477, 9),
  POS(478, 10),
  POS(479, 19),
  POS(479, 10),
  POS(480, 10),
  POS(481, 10),
  POS(482, 10),
  POS(476, 7),
  POS(474, 3),
  POS(485, 3),
  POS(486, 31),
  POS(486, 49),
  POS(486, 3),
  POS(490, 23),
  POS(487, 16),
  POS(487, 3),
  POS(494, 3),
  POS(497, 3),
  POS(498, 3),
  POS(499, 3)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  //  "tokens"
  LET, 1, str_tokens, TAIL_CALL,
  POS(467, 9)
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  0, // parameters
  //  "prompt"
  LET, 1, str_prompt, TAIL_CALL,
  POS(468, 9)
};

static TAB_NUM t_lambda_aiEXACT[] = {
  0, // locals
  0, // parameters
  //  "exact"
  LET, 1, str_exact, TAIL_CALL,
  POS(470, 17)
};

static TAB_NUM t_lambda_aiSHIFT[] = {
  0, // locals
  0, // parameters
  //  "shift"
  LET, 1, str_shift, TAIL_CALL,
  POS(471, 17)
};

static TAB_NUM t_lambda_aiSMART[] = {
  0, // locals
  0, // parameters
  //  "smart"
  LET, 1, str_smart, TAIL_CALL,
  POS(472, 17)
};

static TAB_NUM t_lambda_59[] = {
  0, // locals
  0, // parameters
  //  "exact"
  LET, 1, str_exact, TAIL_CALL,
  POS(473, 7)
};

static TAB_NUM t_lambda_do_return_confidence_values[] = {
  0, // locals
  0, // parameters
  // $logits info("logits")
  var_498_1_info, 1, str_logits, 1, var_501_1_logits,
  // map &logits: (logit) tuple logit(1) logit(2)
  var_map, 2, var_501_1_logits, lambda_60, 1, var_501_1_logits,
  // if
  var_if, 3, var_463_1_use_tokens, lambda_61, lambda_62, TAIL_CALL,
  POS(501, 7),
  POS(502, 7),
  POS(503, 7)
};

static TAB_NUM t_lambda_60[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 502_14_logit
  // logit(1) logit(2)
  LOCAL(3), 1, num_1, 1, LOCAL(1),
  // logit(2)
  LOCAL(3), 1, num_2, 1, LOCAL(2),
  // tuple logit(1) logit(2)
  var_tuple, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(502, 34),
  POS(502, 43),
  POS(502, 28)
};

static TAB_NUM t_lambda_61[] = {
  1, // locals
  0, // parameters
  // info("token") logits
  var_498_1_info, 1, str_token, 1, LOCAL(1),
  //  info("token") logits
  LET, 2, LOCAL(1), var_501_1_logits, TAIL_CALL,
  POS(505, 12),
  POS(505, 11)
};

static TAB_NUM t_lambda_62[] = {
  1, // locals
  0, // parameters
  // info("content") logits
  var_498_1_info, 1, str_content, 1, LOCAL(1),
  //  info("content") logits
  LET, 2, LOCAL(1), var_501_1_logits, TAIL_CALL,
  POS(506, 12),
  POS(506, 11)
};

static TAB_NUM t_lambda_63[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_463_1_use_tokens, lambda_64, lambda_65, TAIL_CALL,
  POS(508, 7)
};

static TAB_NUM t_lambda_64[] = {
  1, // locals
  0, // parameters
  // info("token")
  var_498_1_info, 1, str_token, 1, LOCAL(1),
  //  info("token")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(510, 12),
  POS(510, 11)
};

static TAB_NUM t_lambda_65[] = {
  1, // locals
  0, // parameters
  // info("content")
  var_498_1_info, 1, str_content, 1, LOCAL(1),
  //  info("content")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(511, 12),
  POS(511, 11)
};

static TAB_NUM t_func_ai_types__model___ai__detokenize[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 515_0_model
  MANDATORY_PARAMETER, var_516_0_token_or_list,
  var_empty_list, var_517_0_prefix,
  // $rc result_count()
  var_result_count, 0, 1, var_519_1_rc,
  // $pieces ai::pieces_of(model)
  var_ai__pieces_of, 1, LOCAL(2), 1, var_520_1_pieces,
  // is_a_list:
  var_is_a_list, 1, var_516_0_token_or_list, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_token_or_list_is_a_list, lambda_70, TAIL_CALL,
  POS(519, 3),
  POS(520, 3),
  POS(522, 19),
  POS(521, 3)
};

static TAB_NUM t_lambda_token_or_list_is_a_list[] = {
  0, // locals
  0, // parameters
  // $text ""
  LET, 1, string_8, 1, var_523_1_text,
  // for_each token_or_list
  var_for_each, 3, var_516_0_token_or_list, lambda_66, lambda_67, TAIL_CALL,
  POS(523, 7),
  POS(524, 7)
};

static TAB_NUM t_lambda_66[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 525_3_token
  // token_to_piece token $str &prefix
  func_token_to_piece, 2, LOCAL(1), var_517_0_prefix, 2, LOCAL(2), var_517_0_prefix,
  // append &text str
  var_append, 2, var_523_1_text, LOCAL(2), 1, var_523_1_text,
  // next
  var_next, 0, TAIL_CALL,
  POS(526, 11),
  POS(527, 11),
  POS(528, 11)
};

static TAB_NUM t_lambda_67[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_519_1_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_68, lambda_69, TAIL_CALL,
  POS(531, 13),
  POS(530, 11)
};

static TAB_NUM t_lambda_68[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_523_1_text, TAIL_CALL,
  POS(532, 15)
};

static TAB_NUM t_lambda_69[] = {
  0, // locals
  0, // parameters
  //  text prefix
  LET, 2, var_523_1_text, var_517_0_prefix, TAIL_CALL,
  POS(533, 15)
};

static TAB_NUM t_lambda_70[] = {
  1, // locals
  0, // parameters
  // token_to_piece token_or_list $str &prefix
  func_token_to_piece, 2, var_516_0_token_or_list, var_517_0_prefix, 2, var_535_30_str, var_517_0_prefix,
  // rc == 1
  var_std__equal, 2, var_519_1_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_71, lambda_72, TAIL_CALL,
  POS(535, 7),
  POS(537, 9),
  POS(536, 7)
};

static TAB_NUM t_lambda_71[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_535_30_str, TAIL_CALL,
  POS(538, 11)
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  0, // parameters
  //  str prefix
  LET, 2, var_535_30_str, var_517_0_prefix, TAIL_CALL,
  POS(539, 11)
};

static TAB_NUM t_func_token_to_piece[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 541_18_token
  var_541_24_prefix_octets,
  // token+1)
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(1),
  // $piece pieces(token+1)
  var_520_1_pieces, 1, LOCAL(1), 1, var_542_1_piece,
  // is_a_list:
  var_is_a_list, 1, var_542_1_piece, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_piece_is_a_list, lambda_88, TAIL_CALL,
  POS(542, 19),
  POS(542, 5),
  POS(544, 13),
  POS(543, 5)
};

static TAB_NUM t_lambda_piece_is_a_list[] = {
  0, // locals
  0, // parameters
  // append prefix_octets &piece
  var_append, 2, var_541_24_prefix_octets, var_542_1_piece, 1, var_542_1_piece,
  // $n length_of(piece)
  var_length_of, 1, var_542_1_piece, 1, var_546_1_n,
  // $i 1
  LET, 1, num_1, 1, var_547_1_i,
  // $e undefined
  LET, 1, var_undefined, 1, var_548_1_e,
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(545, 9),
  POS(546, 9),
  POS(547, 9),
  POS(548, 9),
  POS(549, 9)
};

static TAB_NUM t_lambda_2_loop[] = {
  3, // locals
  0, // parameters
  // i-1 <= n &e -> i-1
  var_std__minus, 2, var_547_1_i, num_1, 1, LOCAL(1),
  // n &e -> i-1
  var_std__less, 2, var_546_1_n, LOCAL(1), 1, LOCAL(2),
  // n &e -> i-1
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // update_if i-1 <= n &e -> i-1
  var_update_if, 3, LOCAL(3), var_548_1_e, lambda_73, 1, var_548_1_e,
  // n:
  var_std__less, 2, var_546_1_n, var_547_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_74, lambda_77, TAIL_CALL,
  POS(550, 21),
  POS(550, 28),
  POS(550, 28),
  POS(550, 11),
  POS(552, 17),
  POS(551, 11)
};

static TAB_NUM t_lambda_73[] = {
  1, // locals
  0, // parameters
  // i-1
  var_std__minus, 2, var_547_1_i, num_1, 1, LOCAL(1),
  //  i-1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(550, 36),
  POS(550, 35)
};

static TAB_NUM t_lambda_74[] = {
  1, // locals
  0, // parameters
  // $octets ""
  LET, 1, string_8, 1, var_553_1_octets,
  // range(piece 1 e)
  var_range, 3, var_542_1_piece, num_1, var_548_1_e, 1, LOCAL(1),
  // for_each range(piece 1 e)
  var_for_each, 3, LOCAL(1), lambda_75, lambda_76, TAIL_CALL,
  POS(553, 15),
  POS(554, 24),
  POS(554, 15)
};

static TAB_NUM t_lambda_75[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 555_3_code
  // character(code)
  var_character, 1, LOCAL(2), 1, LOCAL(1),
  // push &octets character(code)
  var_push, 2, var_553_1_octets, LOCAL(1), 1, var_553_1_octets,
  // next
  var_next, 0, TAIL_CALL,
  POS(556, 32),
  POS(556, 19),
  POS(557, 19)
};

static TAB_NUM t_lambda_76[] = {
  3, // locals
  0, // parameters
  // from_utf8(octets) range(piece e+1 -1)
  var_from_utf8, 1, var_553_1_octets, 1, LOCAL(1),
  // e+1 -1)
  var_std__plus, 2, var_548_1_e, num_1, 1, LOCAL(2),
  // range(piece e+1 -1)
  var_range, 3, var_542_1_piece, LOCAL(2), minus_num_1, 1, LOCAL(3),
  //  from_utf8(octets) range(piece e+1 -1)
  LET, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(558, 20),
  POS(558, 50),
  POS(558, 38),
  POS(558, 19)
};

static TAB_NUM t_lambda_77[] = {
  0, // locals
  0, // parameters
  // $code piece(i)
  var_542_1_piece, 1, var_547_1_i, 1, var_560_1_code,
  // cond
  var_cond, 5, lambda_78, lambda_80, lambda_82, lambda_84, lambda_86, TAIL_CALL,
  POS(560, 15),
  POS(561, 15)
};

static TAB_NUM t_lambda_78[] = {
  1, // locals
  0, // parameters
  // code < 0x80:
  var_std__less, 2, var_560_1_code, num_0x80, 1, LOCAL(1),
  //  code < 0x80:
  LET, 2, LOCAL(1), lambda_79, TAIL_CALL,
  POS(562, 20),
  POS(562, 19)
};

static TAB_NUM t_lambda_79[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_547_1_i, 1, var_547_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(563, 19),
  POS(564, 19)
};

static TAB_NUM t_lambda_80[] = {
  2, // locals
  0, // parameters
  // code & 0xe0 == 0xc0:
  var_std__bit_and, 2, var_560_1_code, num_0xe0, 1, LOCAL(1),
  // code & 0xe0 == 0xc0:
  var_std__equal, 2, LOCAL(1), num_0xc0, 1, LOCAL(2),
  //  code & 0xe0 == 0xc0:
  LET, 2, LOCAL(2), lambda_81, TAIL_CALL,
  POS(565, 20),
  POS(565, 20),
  POS(565, 19)
};

static TAB_NUM t_lambda_81[] = {
  0, // locals
  0, // parameters
  // plus &i 2
  var_plus, 2, var_547_1_i, num_2, 1, var_547_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(566, 19),
  POS(567, 19)
};

static TAB_NUM t_lambda_82[] = {
  2, // locals
  0, // parameters
  // code & 0xf0 == 0xe0:
  var_std__bit_and, 2, var_560_1_code, num_0xf0, 1, LOCAL(1),
  // code & 0xf0 == 0xe0:
  var_std__equal, 2, LOCAL(1), num_0xe0, 1, LOCAL(2),
  //  code & 0xf0 == 0xe0:
  LET, 2, LOCAL(2), lambda_83, TAIL_CALL,
  POS(568, 20),
  POS(568, 20),
  POS(568, 19)
};

static TAB_NUM t_lambda_83[] = {
  0, // locals
  0, // parameters
  // plus &i 3
  var_plus, 2, var_547_1_i, num_3, 1, var_547_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(569, 19),
  POS(570, 19)
};

static TAB_NUM t_lambda_84[] = {
  2, // locals
  0, // parameters
  // code & 0xf8 == 0xf0:
  var_std__bit_and, 2, var_560_1_code, num_0xf8, 1, LOCAL(1),
  // code & 0xf8 == 0xf0:
  var_std__equal, 2, LOCAL(1), num_0xf0, 1, LOCAL(2),
  //  code & 0xf8 == 0xf0:
  LET, 2, LOCAL(2), lambda_85, TAIL_CALL,
  POS(571, 20),
  POS(571, 20),
  POS(571, 19)
};

static TAB_NUM t_lambda_85[] = {
  0, // locals
  0, // parameters
  // plus &i 4
  var_plus, 2, var_547_1_i, num_4, 1, var_547_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(572, 19),
  POS(573, 19)
};

static TAB_NUM t_lambda_86[] = {
  0, // locals
  0, // parameters
  //  true -> "<???>" empty_list
  LET, 2, var_true, lambda_87, TAIL_CALL,
  POS(574, 19)
};

static TAB_NUM t_lambda_87[] = {
  0, // locals
  0, // parameters
  //  "<???>" empty_list
  LET, 2, string_14, var_empty_list, TAIL_CALL,
  POS(574, 27)
};

static TAB_NUM t_lambda_88[] = {
  1, // locals
  0, // parameters
  // any_of(piece: (chr) -> chr == '@0x142;') &piece -> "<???>"
  var_any_of, 2, var_542_1_piece, lambda_89, 1, LOCAL(1),
  // update_if any_of(piece: (chr) -> chr == '@0x142;') &piece -> "<???>"
  var_update_if, 3, LOCAL(1), var_542_1_piece, lambda_90, 1, var_542_1_piece,
  // -> piece empty_list
  LET, 2, var_542_1_piece, var_empty_list, TAIL_CALL,
  POS(576, 19),
  POS(576, 9),
  POS(578, 9)
};

static TAB_NUM t_lambda_89[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 576_25_chr
  // chr == '@0x142;') &piece -> "<???>"
  var_std__equal, 2, LOCAL(2), chr_322, 1, LOCAL(1),
  // -> chr == '@0x142;') &piece -> "<???>"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(576, 42),
  POS(576, 39)
};

static TAB_NUM t_lambda_90[] = {
  0, // locals
  0, // parameters
  //  "<???>"
  LET, 1, string_14, TAIL_CALL,
  POS(576, 69)
};

static TAB_NUM t_func_build_piece_table[] = {
  0, // locals
  1, // parameters
  var_580_21_model,
  // $pieces ai::pieces_of(model)
  var_ai__pieces_of, 1, var_580_21_model, 1, var_581_1_pieces,
  // $piece_table empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_582_1_piece_table,
  // for_each pieces
  var_for_each, 3, var_581_1_pieces, lambda_91, lambda_93, TAIL_CALL,
  POS(581, 3),
  POS(582, 3),
  POS(583, 3)
};

static TAB_NUM t_lambda_91[] = {
  1, // locals
  2, // parameters
  var_584_3_idx,
  var_584_7_piece,
  // is_a_string:
  var_is_a_string, 1, var_584_7_piece, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_piece_is_a_string, var_next, TAIL_CALL,
  POS(586, 15),
  POS(585, 7)
};

static TAB_NUM t_lambda_piece_is_a_string[] = {
  2, // locals
  0, // parameters
  // piece_table(piece).is_defined
  var_582_1_piece_table, 1, var_584_7_piece, 1, LOCAL(1),
  // is_defined
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, lambda_92, TAIL_CALL,
  POS(588, 13),
  POS(588, 32),
  POS(587, 11)
};

static TAB_NUM t_lambda_92[] = {
  2, // locals
  0, // parameters
  // !piece_table(piece) idx-1
  var_std__minus, 2, var_584_3_idx, num_1, 1, LOCAL(2),
  // piece_table(piece) idx-1
  var_582_1_piece_table, 2, var_584_7_piece, LOCAL(2), 1, var_582_1_piece_table,
  // next
  var_next, 0, TAIL_CALL,
  POS(591, 15),
  POS(591, 16),
  POS(592, 15)
};

static TAB_NUM t_lambda_93[] = {
  2, // locals
  0, // parameters
  // map_reduce(pieces length_of max)
  var_map_reduce, 3, var_581_1_pieces, var_length_of, var_max, 1, LOCAL(1),
  // model
  LET, -2, var_580_21_model, var_ai__piece_table_of, var_582_1_piece_table, var_ai__maximum_piece_length_of, LOCAL(1), LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(597, 38),
  POS(595, 7),
  POS(594, 7)
};

static TAB_NUM t_func_ai__escaped_token[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 599_21_model
  LOCAL(4), // 599_27_token
  // ai::detokenize(model token))
  var_ai__detokenize, 2, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // ai::escaped_piece(ai::detokenize(model token))
  var_ai__escaped_piece, 1, LOCAL(1), 1, LOCAL(2),
  // -> ai::escaped_piece(ai::detokenize(model token))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(600, 24),
  POS(600, 6),
  POS(600, 3)
};

static TAB_NUM t_func_ai__escaped_piece[] = {
  0, // locals
  1, // parameters
  var_602_21_piece,
  // $buf ""
  LET, 1, string_8, 1, var_603_1_buf,
  // $s 1
  LET, 1, num_1, 1, var_604_1_s,
  // $n length_of(piece)
  var_length_of, 1, var_602_21_piece, 1, var_605_1_n,
  // $i 0
  LET, 1, num_0, 1, var_606_1_i,
  // loop:
  var_loop, 1, lambda_3_loop, TAIL_CALL,
  POS(603, 3),
  POS(604, 3),
  POS(605, 3),
  POS(606, 3),
  POS(607, 3)
};

static TAB_NUM t_lambda_3_loop[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_606_1_i, 1, var_606_1_i,
  // n
  var_std__less, 2, var_605_1_n, var_606_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_94, lambda_95, TAIL_CALL,
  POS(608, 5),
  POS(610, 11),
  POS(609, 5)
};

static TAB_NUM t_lambda_94[] = {
  2, // locals
  0, // parameters
  // range(piece s n))
  var_range, 3, var_602_21_piece, var_604_1_s, var_605_1_n, 1, LOCAL(1),
  // append(buf range(piece s n))
  var_append, 2, var_603_1_buf, LOCAL(1), 1, LOCAL(2),
  //  append(buf range(piece s n))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(611, 21),
  POS(611, 10),
  POS(611, 9)
};

static TAB_NUM t_lambda_95[] = {
  0, // locals
  0, // parameters
  // $chr piece(i)
  var_602_21_piece, 1, var_606_1_i, 1, var_613_1_chr,
  // case chr
  var_case, 6, var_613_1_chr, chr_10, lambda_nl, sequence_620_2, lambda_96, var_next, TAIL_CALL,
  POS(613, 9),
  POS(614, 9)
};

static TAB_NUM t_lambda_nl[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_606_1_i, num_1, 1, LOCAL(1),
  // range(piece s i-1)
  var_range, 3, var_602_21_piece, var_604_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(piece s i-1)
  var_append, 2, var_603_1_buf, LOCAL(2), 1, var_603_1_buf,
  // append &buf "\n"
  var_append, 2, var_603_1_buf, str_n, 1, var_603_1_buf,
  // !s i+1
  var_std__plus, 2, var_606_1_i, num_1, 1, var_604_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(616, 39),
  POS(616, 25),
  POS(616, 13),
  POS(617, 13),
  POS(618, 13),
  POS(619, 13)
};

static TAB_NUM t_lambda_96[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_606_1_i, num_1, 1, LOCAL(1),
  // range(piece s i-1)
  var_range, 3, var_602_21_piece, var_604_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(piece s i-1)
  var_append, 2, var_603_1_buf, LOCAL(2), 1, var_603_1_buf,
  // push &buf '\'
  var_push, 2, var_603_1_buf, chr_92, 1, var_603_1_buf,
  // push &buf chr
  var_push, 2, var_603_1_buf, var_613_1_chr, 1, var_603_1_buf,
  // !s i+1
  var_std__plus, 2, var_606_1_i, num_1, 1, var_604_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(621, 39),
  POS(621, 25),
  POS(621, 13),
  POS(622, 13),
  POS(623, 13),
  POS(624, 13),
  POS(625, 13)
};

static int key_value_pair_301_21_arguments[] = {
  -chr_9, -str_ht
};

static int key_value_pair_483_1_arguments[] = {
  -str_n_probs, -num_10
};

static int key_value_pair_484_1_arguments[] = {
  -str_n_predict, -num_1
};

static int sequence_620_2_arguments[] = {
  -chr_34, -chr_92
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_UNIQUE, 0, {.str_8 = "ai::EXACT"}},
  {FLT_UNIQUE, 0, {.str_8 = "ai::SHIFT"}},
  {FLT_UNIQUE, 0, {.str_8 = "ai::SMART"}},
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
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_301_21_arguments}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_aiEXACT}},
  {FLT_STRING_8, 5, {.str_8 = "exact"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_aiSHIFT}},
  {FLT_STRING_8, 5, {.str_8 = "shift"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_aiSMART}},
  {FLT_STRING_8, 5, {.str_8 = "smart"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_STRING_8, 5, {.str_8 = "start"}},
  {FLT_STRING_8, 4, {.str_8 = "mode"}},
  {FLT_STRING_8, 6, {.str_8 = "logits"}},
  {FLT_STRING_8, 5, {.str_8 = "brief"}},
  {FLT_STRING_8, 7, {.str_8 = "n_probs"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_483_1_arguments}},
  {FLT_STRING_8, 9, {.str_8 = "n_predict"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_484_1_arguments}},
  {FLT_STRING_8, 75, {.str_8 = "POST /completion HTTP/1.1\015\012Content-Type: application/json\015\012Content-Length: "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_return_confidence_values}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_STRING_8, 5, {.str_8 = "token"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai_types__model___ai__detokenize}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_token_or_list_is_a_list}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_token_to_piece}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_piece_is_a_list}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x80}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xe0}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xc0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xf0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xf8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}},
  {FLT_STRING_8, 5, {.str_8 = "<???>"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_88}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_89}},
  {FLT_CHARACTER, 0, {.value = 322}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_90}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_build_piece_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_91}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_piece_is_a_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_93}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai__escaped_token}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai__escaped_piece}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_94}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_95}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_CHARACTER, 0, {.value = 92}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_620_2_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_nl}},
  {FLT_STRING_8, 2, {.str_8 = "\134n"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_96}}
};

static ATTRIBUTE_DEFINITION ai_types__model__attributes[] = {
  {var_ai__generate, -func_ai_types__model___ai__generate},
  {var_ai__tokenize, -func_ai_types__model___ai__tokenize},
  {var_ai__evaluate, -func_ai_types__model___ai__evaluate},
  {var_ai__detokenize, -func_ai_types__model___ai__detokenize}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_INITIALIZED, 0, 0,
    "EXACT\000ai", NULL,
    {.const_idx = -uni_ai__EXACT}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(33, 1)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SHIFT\000ai", NULL,
    {.const_idx = -uni_ai__SHIFT}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SMART\000ai", NULL,
    {.const_idx = -uni_ai__SMART}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "pieces_of\000ai", NULL,
    {.has_a_setter = false}
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
    {.position = POS(149, 18)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "load_ai_model\000ai", NULL,
    {.const_idx = -func_ai__load_ai_model}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(164, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "165_1_port_no\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "behind\000", NULL,
    {.position = POS(165, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(168, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(170, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(167, 5)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "name_of\000", NULL,
    {.position = POS(173, 8)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "address_of\000", NULL,
    {.position = POS(174, 8)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "port_no_of\000", NULL,
    {.position = POS(175, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "171_1_model\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(188, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(191, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "204_3_token\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "204_9_piece\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(207, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(208, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(208, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_prefix\000", NULL,
    {.position = POS(210, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(210, 44)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(210, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(209, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(213, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(216, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(217, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(214, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(203, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "239_0_model\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value_pair\000std", NULL,
    {.position = POS(244, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(249, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "244_29_minimum_confidence\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "245_27_maximum_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "246_22_stop_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "247_19_backtrack\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "248_19_log_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "249_21_be_verbose\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "250_25_use_colours\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "extract_options\000", NULL,
    {.position = POS(243, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "251_1_do_log\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(252, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(252, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "BLACK\000", NULL,
    {.position = POS(253, 43)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ansi_text_colour\000", NULL,
    {.position = POS(253, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print\000", NULL,
    {.position = POS(253, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(253, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "255_16_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(255, 45)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ansi_reset_colour\000", NULL,
    {.position = POS(256, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "println\000", NULL,
    {.position = POS(257, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(259, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(259, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(261, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "263_17_tokens\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "263_24_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "263_29_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "263_32_prefix\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(265, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "contains\000", NULL,
    {.position = POS(265, 31)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "268_15_t1\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_time\000", NULL,
    {.position = POS(268, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "269_28_next_token\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "269_40_confidence_values\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprintln\000", NULL,
    {.position = POS(273, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "276_1_max_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "278_34_next_confidence\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "279_40_next_piece\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "279_52_suffix\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "282_1_dt\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(282, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(284, 32)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "escaped_piece\000ai", NULL,
    {.const_idx = -func_ai__escaped_piece}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(286, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "format\000", NULL,
    {.position = POS(288, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "replace_all\000", NULL,
    {.position = POS(301, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim_left\000", NULL,
    {.position = POS(310, 50)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(314, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(317, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(319, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "316_16_response\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(321, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dup\000", NULL,
    {.position = POS(336, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(277, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "343_15_piece\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "343_21_confidence\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "345_1_confidence_delta\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "negate\000std", NULL,
    {.position = POS(350, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "RED\000", NULL,
    {.position = POS(351, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "colour_mixture\000", NULL,
    {.position = POS(349, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "GREEN\000", NULL,
    {.position = POS(354, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WHITE\000", NULL,
    {.position = POS(355, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(347, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ansi_background_colour\000", NULL,
    {.position = POS(360, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "insert_order_table\000", NULL,
    {.position = POS(369, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_json\000", NULL,
    {.position = POS(368, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open_tcp_client_socket\000", NULL,
    {.position = POS(371, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print_to\000", NULL,
    {.position = POS(372, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "379_7_result\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "load\000", NULL,
    {.position = POS(379, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "between\000", NULL,
    {.position = POS(382, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error\000", NULL,
    {.position = POS(385, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_utf8\000", NULL,
    {.position = POS(388, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_json\000", NULL,
    {.position = POS(389, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(425, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write_to\000", NULL,
    {.position = POS(427, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "463_1_use_tokens\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(463, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "498_1_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "501_1_logits\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(502, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(502, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "516_0_token_or_list\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "517_0_prefix\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "519_1_rc\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "520_1_pieces\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(522, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "523_1_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "535_30_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "541_24_prefix_octets\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "542_1_piece\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "546_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "547_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "548_1_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "553_1_octets\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character\000", NULL,
    {.position = POS(556, 32)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "560_1_code\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(563, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000std", NULL,
    {.position = POS(565, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(566, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(576, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "580_21_model\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "581_1_pieces\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "582_1_piece_table\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(582, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "584_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "584_7_piece\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(597, 38)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "escaped_token\000ai", NULL,
    {.const_idx = -func_ai__escaped_token}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "602_21_piece\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "603_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "604_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "605_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "606_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "613_1_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(620, 13)}
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
  219, // number of constants
  177, // number of variables
  NULL, // required modules
  defined_namespaces,
  used_namespaces,
  constants_table,
  variables_table,
};
