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
  func_ai_types__model___ai__generate = -16,
  num_15 = -17,
  num_1024 = -18,
  num_0 = -19,
  lambda_5 = -20,
  lambda_6 = -21,
  string_2 = -22,
  lambda_7 = -23,
  lambda_8 = -24,
  num_1 = -25,
  lambda_9 = -26,
  func_generate_text = -27,
  lambda_10 = -28,
  lambda_11 = -29,
  lambda_12 = -30,
  lambda_13 = -31,
  lambda_14 = -32,
  str_end_of_stream = -33,
  lambda_15 = -34,
  lambda_loop = -35,
  lambda_16 = -36,
  num_1000 = -37,
  lambda_17 = -38,
  string_3 = -39,
  string_4 = -40,
  str_4_l = -41,
  lambda_18 = -42,
  num_3 = -43,
  lambda_19 = -44,
  str_431_ms = -45,
  lambda_20 = -46,
  string_5 = -47,
  lambda_21 = -48,
  chr_9 = -49,
  str_ht = -50,
  key_value_pair_243_21 = -51,
  str_l = -52,
  lambda_22 = -53,
  num_5 = -54,
  lambda_23 = -55,
  lambda_24 = -56,
  lambda_25 = -57,
  lambda_26 = -58,
  lambda_response_is_empty = -59,
  string_6 = -60,
  lambda_27 = -61,
  chr_10 = -62,
  lambda_28 = -63,
  num_2 = -64,
  lambda_29 = -65,
  lambda_30 = -66,
  lambda_31 = -67,
  lambda_32 = -68,
  lambda_33 = -69,
  string_7 = -70,
  lambda_34 = -71,
  minus_num_1 = -72,
  lambda_35 = -73,
  lambda_36 = -74,
  func_print_piece = -75,
  lambda_37 = -76,
  lambda_38 = -77,
  lambda_39 = -78,
  lambda_40 = -79,
  num_10 = -80,
  lambda_41 = -81,
  lambda_42 = -82,
  lambda_43 = -83,
  lambda_44 = -84,
  func_get_tokens = -85,
  str_model = -86,
  str_POST_get_tokens = -87,
  str_Connection_close = -88,
  chr_32 = -89,
  num_300 = -90,
  lambda_45 = -91,
  string_8 = -92,
  lambda_46 = -93,
  str_tokens = -94,
  str_begin_of_stream = -95,
  str_end_of_stream_2 = -96,
  str_newline = -97,
  str_end_of_text = -98,
  str_prefix = -99,
  str_suffix = -100,
  str_middle = -101,
  str_context_size = -102,
  func_ai_types__model___ai__tokenize = -103,
  lambda_47 = -104,
  str_content = -105,
  lambda_48 = -106,
  str_lines = -107,
  str_POST_tokenize_HT = -108,
  func_ai_types__model___ai__evaluate = -109,
  lambda_49 = -110,
  lambda_50 = -111,
  str_prompt = -112,
  str_logits = -113,
  str_brief = -114,
  str_n_probs = -115,
  key_value_pair_413_1 = -116,
  str_n_predict = -117,
  key_value_pair_414_1 = -118,
  str_POST_completion = -119,
  lambda_do_return_confidence_values = -120,
  lambda_51 = -121,
  lambda_52 = -122,
  str_token = -123,
  lambda_53 = -124,
  lambda_54 = -125,
  lambda_55 = -126,
  lambda_56 = -127,
  func_ai_types__model___ai__detokenize = -128,
  lambda_57 = -129,
  lambda_58 = -130,
  func_token_to_piece = -131,
  lambda_any_ofpiece = -132,
  chr_322 = -133,
  lambda_59 = -134,
  string_9 = -135,
  lambda_60 = -136,
  func_build_piece_table = -137,
  lambda_61 = -138,
  lambda_62 = -139,
  lambda_63 = -140,
  func_ai__escaped_token = -141,
  func_ai__escaped_piece = -142,
  lambda_2_loop = -143,
  lambda_64 = -144,
  lambda_65 = -145,
  chr_34 = -146,
  chr_92 = -147,
  sequence_499_2 = -148,
  lambda_nl = -149,
  str_n = -150,
  lambda_66 = -151
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
  var_ai__end_of_text_token_of, // attribute
  var_ai__prefix_token_of, // attribute
  var_ai__suffix_token_of, // attribute
  var_ai__middle_token_of, // attribute
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
  var_151_1_port_no, // dynamic
  var_behind, // extern
  var_is_empty, // extern
  var_to_integer, // extern
  var_if, // extern
  var_name_of, // extern polymorphic
  var_address_of, // extern polymorphic
  var_port_no_of, // extern polymorphic
  var_157_1_model, // dynamic
  var_is_an_error, // extern
  var_180_0_model, // dynamic
  var_std__key_value_pair, // extern
  var_undefined, // extern
  var_false, // extern
  var_185_29_minimum_confidence, // dynamic
  var_186_27_maximum_length, // dynamic
  var_187_22_stop_text, // dynamic
  var_188_19_backtrack, // dynamic
  var_189_19_log_level, // dynamic
  var_190_21_be_verbose, // dynamic
  var_191_25_use_colours, // dynamic
  var_extract_options, // extern
  var_192_1_do_log, // dynamic
  var_std__less, // extern
  var_true, // extern
  var_update_if, // extern
  var_BLACK, // extern
  var_ansi_text_colour, // extern
  var_print, // extern
  var_on, // extern
  var_put, // extern
  var_196_16_text, // dynamic
  var_ansi_reset_colour, // extern
  var_println, // extern
  var_result_count, // extern
  var_std__equal, // extern
  var_pass, // extern
  var_205_17_tokens, // dynamic
  var_205_24_text, // dynamic
  var_205_29_no, // dynamic
  var_is_defined, // extern
  var_contains, // extern
  var_std__and, // extern
  var_210_15_t1, // dynamic
  var_current_time, // extern
  var_211_28_next_token, // dynamic
  var_211_40_confidence_values, // dynamic
  var_eprintln, // extern
  var_218_1_max_no, // dynamic
  var_220_34_next_confidence, // dynamic
  var_221_1_next_piece, // dynamic
  var_std__minus, // extern
  var_224_1_dt, // dynamic
  var_std__times, // extern
  var_std__not, // extern
  var_ai__escaped_piece, // initialized
  var_std__string, // extern
  var_format, // extern
  var_replace_all, // extern
  var_next, // extern
  var_for_each, // extern
  var_std__or, // extern
  var_trim_left, // extern
  var_append, // extern
  var_push, // extern
  var_std__plus, // extern
  var_256_16_response, // dynamic
  var_extend_to, // extern
  var_length_of, // extern
  var_dup, // extern
  var_range, // extern
  var_loop, // extern
  var_282_15_piece, // dynamic
  var_282_21_confidence, // dynamic
  var_284_1_confidence_delta, // dynamic
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
  var_318_7_result, // dynamic
  var_load, // extern
  var_between, // extern
  var_error, // extern
  var_from_utf8, // extern
  var_from_json, // extern
  var_is_a_string, // extern
  var_to_utf8, // extern
  var_write_all_to, // extern
  var_400_1_use_tokens, // dynamic
  var_not, // extern
  var_428_1_info, // dynamic
  var_431_1_logits, // dynamic
  var_tuple, // extern
  var_map, // extern
  var_446_0_token_or_list, // dynamic
  var_448_1_pieces, // dynamic
  var_is_a_list, // extern
  var_map_reduce, // extern
  var_456_1_piece, // dynamic
  var_any_of, // extern
  var_462_21_model, // dynamic
  var_463_1_pieces, // dynamic
  var_464_1_piece_table, // dynamic
  var_empty_hash_table, // extern
  var_466_3_idx, // dynamic
  var_466_7_piece, // dynamic
  var_max, // extern
  var_ai__escaped_token, // initialized
  var_481_21_piece, // dynamic
  var_482_1_buf, // dynamic
  var_483_1_s, // dynamic
  var_484_1_n, // dynamic
  var_485_1_i, // dynamic
  var_inc, // extern
  var_492_1_chr, // dynamic
  var_std__sequence, // extern
  var_case, // extern
  var__END
};


static TAB_NUM t_func_ai__load_ai_model[] = {
  12, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(10), // 147_0_name
  string_1, LOCAL(11), // 148_0_server
  // $address server .truncate_from. ':'
  var_truncate_from, 2, LOCAL(11), chr_58, 1, LOCAL(12),
  // $port_no server .behind. ':'
  var_behind, 2, LOCAL(11), chr_58, 1, var_151_1_port_no,
  // is_empty
  var_is_empty, 1, var_151_1_port_no, 1, LOCAL(1),
  // !port_no
  var_if, 3, LOCAL(1), lambda_1, lambda_2, 1, var_151_1_port_no,
  // $model
  LET, -3, var_ai_types__model, var_name_of, LOCAL(10), var_address_of, LOCAL(12), var_port_no_of, var_151_1_port_no, var_157_1_model,
  // get_tokens! model
  func_get_tokens, 1, var_157_1_model, IO_CALL(9), LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), LOCAL(7), LOCAL(8), LOCAL(9),
  // model.ai::pieces_of
  LET, -1, var_157_1_model, var_ai__pieces_of, LOCAL(1), var_157_1_model,
  // model.ai::begin_of_stream_token_of
  LET, -1, var_157_1_model, var_ai__begin_of_stream_token_of, LOCAL(2), var_157_1_model,
  // model.ai::end_of_stream_token_of
  LET, -1, var_157_1_model, var_ai__end_of_stream_token_of, LOCAL(3), var_157_1_model,
  // model.ai::newline_token_of
  LET, -1, var_157_1_model, var_ai__newline_token_of, LOCAL(4), var_157_1_model,
  // model.ai::end_of_text_token_of
  LET, -1, var_157_1_model, var_ai__end_of_text_token_of, LOCAL(5), var_157_1_model,
  // model.ai::prefix_token_of
  LET, -1, var_157_1_model, var_ai__prefix_token_of, LOCAL(6), var_157_1_model,
  // model.ai::suffix_token_of
  LET, -1, var_157_1_model, var_ai__suffix_token_of, LOCAL(7), var_157_1_model,
  // model.ai::middle_token_of
  LET, -1, var_157_1_model, var_ai__middle_token_of, LOCAL(8), var_157_1_model,
  // model.ai::context_size_of
  LET, -1, var_157_1_model, var_ai__context_size_of, LOCAL(9), var_157_1_model,
  // ai::pieces_of(model).is_an_error
  var_ai__pieces_of, 1, var_157_1_model, 1, LOCAL(1),
  // is_an_error
  var_is_an_error, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_3, lambda_4, TAIL_CALL,
  POS(150, 3),
  POS(151, 3),
  POS(154, 15),
  POS(152, 3),
  POS(157, 3),
  POS(162, 3),
  POS(163, 6),
  POS(164, 6),
  POS(165, 6),
  POS(166, 6),
  POS(167, 6),
  POS(168, 6),
  POS(169, 6),
  POS(170, 6),
  POS(171, 6),
  POS(173, 5),
  POS(173, 26),
  POS(172, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  8080
  LET, 1, num_8080, TAIL_CALL,
  POS(155, 9)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // to_integer
  var_to_integer, 1, var_151_1_port_no, 1, LOCAL(1),
  //  port_no.to_integer
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(156, 18),
  POS(156, 9)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // ai::pieces_of(model)
  var_ai__pieces_of, 1, var_157_1_model, 1, LOCAL(1),
  //  ai::pieces_of(model)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(174, 8),
  POS(174, 7)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  // build_piece_table model
  func_build_piece_table, 1, var_157_1_model, TAIL_CALL,
  POS(176, 7)
};

static TAB_NUM t_func_ai_types__model___ai__generate[] = {
  10, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_180_0_model,
  REST_PARAMETER, LOCAL(8), // 181_0_options
  MANDATORY_PARAMETER, LOCAL(9), // 182_0_prompt
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
  var_extract_options, 8, LOCAL(8), LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), LOCAL(7), 7, var_185_29_minimum_confidence, var_186_27_maximum_length, var_187_22_stop_text, var_188_19_backtrack, var_189_19_log_level, var_190_21_be_verbose, var_191_25_use_colours,
  // $do_log log_level > 0
  var_std__less, 2, num_0, var_189_19_log_level, 1, var_192_1_do_log,
  // update_if use_colours &be_verbose -> true
  var_update_if, 3, var_191_25_use_colours, var_190_21_be_verbose, lambda_5, 1, var_190_21_be_verbose,
  // on use_colours: print! ansi_text_colour(BLACK)
  var_on, 2, var_191_25_use_colours, lambda_6, IO_CALL(0),
  // ai::tokenize! $tokens model prompt
  var_ai__tokenize, 2, var_180_0_model, LOCAL(9), IO_CALL(1), LOCAL(10),
  // ai::begin_of_stream_token_of(model)) "" 0
  var_ai__begin_of_stream_token_of, 1, var_180_0_model, 1, LOCAL(1),
  // put(tokens ai::begin_of_stream_token_of(model)) "" 0
  var_put, 2, LOCAL(10), LOCAL(1), 1, LOCAL(2),
  // generate_text! $text $_max_no
  func_generate_text, 3, LOCAL(2), string_2, num_0, IO_CALL(2), var_196_16_text, LOCAL(1),
  // on use_colours: print! ansi_reset_colour()
  var_on, 2, var_191_25_use_colours, lambda_7, IO_CALL(0),
  // on be_verbose: println!
  var_on, 2, var_190_21_be_verbose, lambda_8, IO_CALL(0),
  // result_count() == 1
  var_result_count, 0, 1, LOCAL(1),
  // result_count() == 1
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_9, var_pass, TAIL_CALL,
  POS(185, 5),
  POS(186, 5),
  POS(187, 5),
  POS(188, 5),
  POS(189, 5),
  POS(190, 5),
  POS(191, 5),
  POS(184, 3),
  POS(192, 3),
  POS(193, 3),
  POS(194, 3),
  POS(195, 3),
  POS(197, 16),
  POS(197, 5),
  POS(196, 3),
  POS(198, 3),
  POS(199, 3),
  POS(201, 5),
  POS(201, 5),
  POS(200, 3)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(193, 39)
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // ansi_text_colour(BLACK)
  var_ansi_text_colour, 1, var_BLACK, 1, LOCAL(1),
  // print! ansi_text_colour(BLACK)
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(194, 26),
  POS(194, 19)
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // ansi_reset_colour()
  var_ansi_reset_colour, 0, 1, LOCAL(1),
  // print! ansi_reset_colour()
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(198, 26),
  POS(198, 19)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  // println!
  var_println, 0, IO_TAIL_CALL,
  POS(199, 18)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_196_16_text, TAIL_CALL,
  POS(202, 7)
};

static TAB_NUM t_func_generate_text[] = {
  2, // locals
  3, // parameters
  var_205_17_tokens,
  var_205_24_text,
  var_205_29_no,
  // is_defined && text .contains. stop_text
  var_is_defined, 1, var_187_22_stop_text, 1, LOCAL(1),
  // is_defined && text .contains. stop_text
  var_std__and, 2, LOCAL(1), lambda_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_11, lambda_12, IO_TAIL_CALL,
  POS(207, 17),
  POS(207, 17),
  POS(206, 5)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // text .contains. stop_text
  var_contains, 2, var_205_24_text, var_187_22_stop_text, 1, LOCAL(1),
  // text .contains. stop_text
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(207, 31),
  POS(207, 31)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  text no
  LET, 2, var_205_24_text, var_205_29_no, TAIL_CALL,
  POS(208, 9)
};

static TAB_NUM t_lambda_12[] = {
  2, // locals
  0, // parameters
  // current_time! $t1
  var_current_time, 0, IO_CALL(1), var_210_15_t1,
  // ai::evaluate! model tokens $next_token $confidence_values
  var_ai__evaluate, 2, var_180_0_model, var_205_17_tokens, IO_CALL(2), var_211_28_next_token, var_211_40_confidence_values,
  // ai::end_of_stream_token_of(model):
  var_ai__end_of_stream_token_of, 1, var_180_0_model, 1, LOCAL(1),
  // next_token == ai::end_of_stream_token_of(model):
  var_std__equal, 2, var_211_28_next_token, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_13, lambda_15, IO_TAIL_CALL,
  POS(210, 9),
  POS(211, 9),
  POS(213, 25),
  POS(213, 11),
  POS(212, 9)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  // on do_log:
  var_on, 2, var_192_1_do_log, lambda_14, IO_CALL(0),
  // -> text no
  LET, 2, var_205_24_text, var_205_29_no, TAIL_CALL,
  POS(214, 13),
  POS(216, 13)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  // eprintln! "<end of stream>"
  var_eprintln, 1, str_end_of_stream, IO_TAIL_CALL,
  POS(215, 15)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  // $max_no no
  LET, 1, var_205_29_no, 1, var_218_1_max_no,
  // loop:
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(218, 13),
  POS(219, 13)
};

static TAB_NUM t_lambda_loop[] = {
  3, // locals
  0, // parameters
  // confidence_values(1) !next_token $next_confidence
  var_211_40_confidence_values, 1, num_1, 1, LOCAL(1),
  // confidence_values(1) !next_token $next_confidence
  LOCAL(1), 0, 2, var_211_28_next_token, var_220_34_next_confidence,
  // $next_piece ai::detokenize(model next_token)
  var_ai__detokenize, 2, var_180_0_model, var_211_28_next_token, 1, var_221_1_next_piece,
  // on do_log:
  var_on, 2, var_192_1_do_log, lambda_16, IO_CALL(0),
  // next_confidence >= minimum_confidence || no < 5:
  var_std__less, 2, var_220_34_next_confidence, var_185_29_minimum_confidence, 1, LOCAL(1),
  // next_confidence >= minimum_confidence || no < 5:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_confidence >= minimum_confidence || no < 5:
  var_std__or, 2, LOCAL(2), lambda_22, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_23, lambda_36, IO_TAIL_CALL,
  POS(220, 15),
  POS(220, 15),
  POS(221, 15),
  POS(222, 15),
  POS(249, 17),
  POS(249, 17),
  POS(249, 17),
  POS(248, 15)
};

static TAB_NUM t_lambda_16[] = {
  3, // locals
  0, // parameters
  // current_time! $t2
  var_current_time, 0, IO_CALL(1), LOCAL(3),
  // t2-t1) # in ms
  var_std__minus, 2, LOCAL(3), var_210_15_t1, 1, LOCAL(1),
  // $dt 1000*(t2-t1) # in ms
  var_std__times, 2, num_1000, LOCAL(1), 1, var_224_1_dt,
  // 1:
  var_std__less, 2, num_1, var_189_19_log_level, 1, LOCAL(1),
  // 1:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_17, lambda_18, IO_TAIL_CALL,
  POS(223, 17),
  POS(224, 27),
  POS(224, 17),
  POS(226, 32),
  POS(226, 32),
  POS(225, 17)
};

static TAB_NUM t_lambda_17[] = {
  2, // locals
  0, // parameters
  // ai::escaped_piece(next_piece))@quot;:"
  var_ai__escaped_piece, 1, var_221_1_next_piece, 1, LOCAL(1),
  // $token_string
  var_std__string, 3, string_3, LOCAL(1), string_4, 1, LOCAL(2),
  // format
  var_format, 4, str_4_l, var_205_29_no, LOCAL(2), var_220_34_next_confidence, 1, LOCAL(1),
  // eprintln!
  var_eprintln, 1, LOCAL(1), IO_TAIL_CALL,
  POS(228, 32),
  POS(227, 21),
  POS(230, 23),
  POS(229, 21)
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  0, // parameters
  // log_level >= 3:
  var_std__less, 2, var_189_19_log_level, num_3, 1, LOCAL(1),
  // log_level >= 3:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_19, lambda_20, IO_CALL(0),
  // for_each confidence_values
  var_for_each, 3, var_211_40_confidence_values, lambda_21, var_pass, IO_TAIL_CALL,
  POS(235, 23),
  POS(235, 23),
  POS(234, 21),
  POS(239, 21)
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // format("-[#%4|%3.1 ms]---------" no dt)
  var_format, 3, str_431_ms, var_205_29_no, var_224_1_dt, 1, LOCAL(1),
  // eprintln! format("-[#%4|%3.1 ms]---------" no dt)
  var_eprintln, 1, LOCAL(1), IO_TAIL_CALL,
  POS(236, 35),
  POS(236, 25)
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // format("-[#%4]------------------" no dt)
  var_format, 3, string_5, var_205_29_no, var_224_1_dt, 1, LOCAL(1),
  // eprintln! format("-[#%4]------------------" no dt)
  var_eprintln, 1, LOCAL(1), IO_TAIL_CALL,
  POS(238, 35),
  POS(238, 25)
};

static TAB_NUM t_lambda_21[] = {
  6, // locals
  1, // parameters
  LOCAL(2), // 240_3_confidence_value
  // confidence_value $token $confidence
  LOCAL(2), 0, 2, LOCAL(3), LOCAL(4),
  // $piece ai::detokenize(model token)
  var_ai__detokenize, 2, var_180_0_model, LOCAL(3), 1, LOCAL(5),
  // replace_all &piece '@ht;' = "<<<ht>>>"
  var_replace_all, 2, LOCAL(5), key_value_pair_243_21, 1, LOCAL(5),
  // ai::escaped_piece(piece))@quot;:"
  var_ai__escaped_piece, 1, LOCAL(5), 1, LOCAL(1),
  // $token_string "@quot;@(ai::escaped_piece(piece))@quot;:"
  var_std__string, 3, string_3, LOCAL(1), string_4, 1, LOCAL(6),
  // format("%l18 %3.3" token_string confidence)
  var_format, 3, str_l, LOCAL(6), LOCAL(4), 1, LOCAL(1),
  // eprintln! format("%l18 %3.3" token_string confidence)
  var_eprintln, 1, LOCAL(1), IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(241, 25),
  POS(242, 25),
  POS(243, 25),
  POS(244, 48),
  POS(244, 25),
  POS(245, 35),
  POS(245, 25),
  POS(246, 25)
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // no < 5:
  var_std__less, 2, var_205_29_no, num_5, 1, LOCAL(1),
  // no < 5:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(249, 58),
  POS(249, 58)
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  0, // parameters
  // no == 0 &next_piece: trim_left next_piece
  var_std__equal, 2, var_205_29_no, num_0, 1, LOCAL(1),
  // update_if no == 0 &next_piece: trim_left next_piece
  var_update_if, 3, LOCAL(1), var_221_1_next_piece, lambda_24, 1, var_221_1_next_piece,
  // print_piece! next_piece next_confidence
  func_print_piece, 2, var_221_1_next_piece, var_220_34_next_confidence, IO_CALL(0),
  // no >= maximum_length
  var_std__less, 2, var_205_29_no, var_186_27_maximum_length, 1, LOCAL(1),
  // no >= maximum_length
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_25, lambda_26, IO_TAIL_CALL,
  POS(250, 29),
  POS(250, 19),
  POS(251, 19),
  POS(253, 21),
  POS(253, 21),
  POS(252, 19)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  // trim_left next_piece
  var_trim_left, 1, var_221_1_next_piece, TAIL_CALL,
  POS(250, 50)
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // append(text next_piece) no
  var_append, 2, var_205_24_text, var_221_1_next_piece, 1, LOCAL(1),
  //  append(text next_piece) no
  LET, 2, LOCAL(1), var_205_29_no, TAIL_CALL,
  POS(254, 24),
  POS(254, 23)
};

static TAB_NUM t_lambda_26[] = {
  4, // locals
  0, // parameters
  // push(tokens next_token)
  var_push, 2, var_205_17_tokens, var_211_28_next_token, 1, LOCAL(1),
  // append(text next_piece)
  var_append, 2, var_205_24_text, var_221_1_next_piece, 1, LOCAL(2),
  // no+1
  var_std__plus, 2, var_205_29_no, num_1, 1, LOCAL(3),
  // generate_text! $response $highest_no
  func_generate_text, 3, LOCAL(1), LOCAL(2), LOCAL(3), IO_CALL(2), var_256_16_response, LOCAL(4),
  // extend_to &max_no highest_no
  var_extend_to, 2, var_218_1_max_no, LOCAL(4), 1, var_218_1_max_no,
  // is_empty:
  var_is_empty, 1, var_256_16_response, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_response_is_empty, lambda_35, IO_TAIL_CALL,
  POS(257, 25),
  POS(258, 25),
  POS(259, 25),
  POS(256, 23),
  POS(260, 23),
  POS(262, 34),
  POS(261, 23)
};

static TAB_NUM t_lambda_response_is_empty[] = {
  1, // locals
  0, // parameters
  // next_piece == "@nl;"
  var_std__equal, 2, var_221_1_next_piece, string_6, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_27, lambda_28, IO_TAIL_CALL,
  POS(264, 29),
  POS(263, 27)
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // push(text '@nl;') max_no # stop backtracking
  var_push, 2, var_205_24_text, chr_10, 1, LOCAL(1),
  //  push(text '@nl;') max_no # stop backtracking
  LET, 2, LOCAL(1), var_218_1_max_no, TAIL_CALL,
  POS(265, 32),
  POS(265, 31)
};

static TAB_NUM t_lambda_28[] = {
  3, // locals
  0, // parameters
  // length_of(confidence_values) < 2
  var_length_of, 1, var_211_40_confidence_values, 1, LOCAL(1),
  // length_of(confidence_values) < 2
  var_std__less, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // 
  var_std__or, 2, LOCAL(2), lambda_29, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_30, lambda_31, IO_TAIL_CALL,
  POS(269, 35),
  POS(269, 35),
  POS(268, 35),
  POS(267, 31)
};

static TAB_NUM t_lambda_29[] = {
  2, // locals
  0, // parameters
  // no+backtrack
  var_std__plus, 2, var_205_29_no, var_188_19_backtrack, 1, LOCAL(1),
  // no+backtrack
  var_std__less, 2, LOCAL(1), var_218_1_max_no, 1, LOCAL(2),
  // max_no > no+backtrack
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(270, 44),
  POS(270, 44),
  POS(270, 35)
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  //  "" max_no
  LET, 2, string_2, var_218_1_max_no, TAIL_CALL,
  POS(271, 35)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  // on use_colours: print! ansi_reset_colour()
  var_on, 2, var_191_25_use_colours, lambda_32, IO_CALL(0),
  // on be_verbose: print!
  var_on, 2, var_190_21_be_verbose, lambda_33, IO_CALL(0),
  // on use_colours: print! ansi_text_colour(BLACK)
  var_on, 2, var_191_25_use_colours, lambda_34, IO_CALL(0),
  // range &confidence_values 2 -1
  var_range, 3, var_211_40_confidence_values, num_2, minus_num_1, 1, var_211_40_confidence_values,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(273, 35),
  POS(274, 35),
  POS(276, 35),
  POS(277, 35),
  POS(278, 35)
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // ansi_reset_colour()
  var_ansi_reset_colour, 0, 1, LOCAL(1),
  // print! ansi_reset_colour()
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(273, 58),
  POS(273, 51)
};

static TAB_NUM t_lambda_33[] = {
  2, // locals
  0, // parameters
  // length_of(next_piece))
  var_length_of, 1, var_221_1_next_piece, 1, LOCAL(1),
  // dup("@bs; @bs;" length_of(next_piece))
  var_dup, 2, string_7, LOCAL(1), 1, LOCAL(2),
  // print!
  var_print, 1, LOCAL(2), IO_TAIL_CALL,
  POS(275, 53),
  POS(275, 37),
  POS(274, 50)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // ansi_text_colour(BLACK)
  var_ansi_text_colour, 1, var_BLACK, 1, LOCAL(1),
  // print! ansi_text_colour(BLACK)
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(276, 58),
  POS(276, 51)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  //  response max_no
  LET, 2, var_256_16_response, var_218_1_max_no, TAIL_CALL,
  POS(279, 27)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  "" max_no
  LET, 2, string_2, var_218_1_max_no, TAIL_CALL,
  POS(280, 19)
};

static TAB_NUM t_func_print_piece[] = {
  0, // locals
  2, // parameters
  var_282_15_piece,
  var_282_21_confidence,
  // on use_colours:
  var_on, 2, var_191_25_use_colours, lambda_37, IO_CALL(0),
  // on be_verbose: print! piece
  var_on, 2, var_190_21_be_verbose, lambda_44, IO_TAIL_CALL,
  POS(283, 5),
  POS(300, 5)
};

static TAB_NUM t_lambda_37[] = {
  2, // locals
  0, // parameters
  // $confidence_delta confidence-minimum_confidence
  var_std__minus, 2, var_282_21_confidence, var_185_29_minimum_confidence, 1, var_284_1_confidence_delta,
  // $colour
  var_cond, 3, lambda_38, lambda_40, lambda_42, 1, LOCAL(2),
  // ansi_background_colour(colour)
  var_ansi_background_colour, 1, LOCAL(2), 1, LOCAL(1),
  // print! ansi_background_colour(colour)
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(284, 7),
  POS(285, 7),
  POS(299, 14),
  POS(299, 7)
};

static TAB_NUM t_lambda_38[] = {
  1, // locals
  0, // parameters
  // confidence_delta < 0 ->
  var_std__less, 2, var_284_1_confidence_delta, num_0, 1, LOCAL(1),
  //  confidence_delta < 0 ->
  LET, 2, LOCAL(1), lambda_39, TAIL_CALL,
  POS(287, 14),
  POS(287, 13)
};

static TAB_NUM t_lambda_39[] = {
  5, // locals
  0, // parameters
  // confidence_delta
  var_std__negate, 1, var_284_1_confidence_delta, 1, LOCAL(1),
  // BLACK = -confidence_delta
  var_std__key_value_pair, 2, var_BLACK, LOCAL(1), 1, LOCAL(2),
  // minimum_confidence+confidence_delta
  var_std__plus, 2, var_185_29_minimum_confidence, var_284_1_confidence_delta, 1, LOCAL(3),
  // RED = minimum_confidence+confidence_delta
  var_std__key_value_pair, 2, var_RED, LOCAL(3), 1, LOCAL(4),
  // colour_mixture
  var_colour_mixture, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  // 
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(289, 24),
  POS(289, 15),
  POS(290, 21),
  POS(290, 15),
  POS(288, 13),
  POS(287, 37)
};

static TAB_NUM t_lambda_40[] = {
  1, // locals
  0, // parameters
  // 10 ->
  var_std__less, 2, num_10, var_284_1_confidence_delta, 1, LOCAL(1),
  //  confidence_delta > 10 ->
  LET, 2, LOCAL(1), lambda_41, TAIL_CALL,
  POS(291, 33),
  POS(291, 13)
};

static TAB_NUM t_lambda_41[] = {
  4, // locals
  0, // parameters
  // GREEN = 10
  var_std__key_value_pair, 2, var_GREEN, num_10, 1, LOCAL(1),
  // confidence_delta-10
  var_std__minus, 2, var_284_1_confidence_delta, num_10, 1, LOCAL(2),
  // WHITE = confidence_delta-10
  var_std__key_value_pair, 2, var_WHITE, LOCAL(2), 1, LOCAL(3),
  // colour_mixture
  var_colour_mixture, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // 
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(293, 15),
  POS(294, 23),
  POS(294, 15),
  POS(292, 13),
  POS(291, 38)
};

static TAB_NUM t_lambda_42[] = {
  0, // locals
  0, // parameters
  //  true ->
  LET, 2, var_true, lambda_43, TAIL_CALL,
  POS(295, 13)
};

static TAB_NUM t_lambda_43[] = {
  4, // locals
  0, // parameters
  // 10-confidence_delta
  var_std__minus, 2, num_10, var_284_1_confidence_delta, 1, LOCAL(1),
  // RED = 10-confidence_delta
  var_std__key_value_pair, 2, var_RED, LOCAL(1), 1, LOCAL(2),
  // GREEN = confidence_delta
  var_std__key_value_pair, 2, var_GREEN, var_284_1_confidence_delta, 1, LOCAL(3),
  // colour_mixture
  var_colour_mixture, 2, LOCAL(2), LOCAL(3), 1, LOCAL(4),
  // 
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(297, 21),
  POS(297, 15),
  POS(298, 15),
  POS(296, 13),
  POS(295, 21)
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  // print! piece
  var_print, 1, var_282_15_piece, IO_TAIL_CALL,
  POS(300, 20)
};

static TAB_NUM t_func_get_tokens[] = {
  7, // locals
  1, // parameters
  LOCAL(4), // 302_14_model
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
  var_std__string, 5, str_POST_get_tokens, LOCAL(1), str_Connection_close, LOCAL(5), string_6, 1, LOCAL(2),
  // print_to! fd "
  var_print_to, 2, LOCAL(6), LOCAL(2), IO_CALL(0),
  // load! $result fd
  var_load, 1, LOCAL(6), IO_CALL(1), var_318_7_result,
  // between(result ' ' ' ').to_integer
  var_between, 3, var_318_7_result, chr_32, chr_32, 1, LOCAL(1),
  // $error_code between(result ' ' ' ').to_integer
  var_to_integer, 1, LOCAL(1), 1, LOCAL(7),
  // error_code >= 300:
  var_std__less, 2, LOCAL(7), num_300, 1, LOCAL(1),
  // error_code >= 300:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_45, lambda_46, TAIL_CALL,
  POS(309, 19),
  POS(309, 10),
  POS(308, 7),
  POS(306, 3),
  POS(310, 24),
  POS(310, 42),
  POS(310, 3),
  POS(314, 23),
  POS(311, 16),
  POS(311, 3),
  POS(318, 3),
  POS(321, 15),
  POS(321, 3),
  POS(323, 5),
  POS(323, 5),
  POS(322, 3)
};

static TAB_NUM t_lambda_45[] = {
  1, // locals
  0, // parameters
  // result .behind. "@cr;@nl;@cr;@nl;"
  var_behind, 2, var_318_7_result, string_8, 1, LOCAL(1),
  // error result .behind. "@cr;@nl;@cr;@nl;"
  var_error, 1, LOCAL(1), TAIL_CALL,
  POS(324, 13),
  POS(324, 7)
};

static TAB_NUM t_lambda_46[] = {
  10, // locals
  0, // parameters
  // behind &result "@cr;@nl;@cr;@nl;"
  var_behind, 2, var_318_7_result, string_8, 1, var_318_7_result,
  // from_utf8 &result
  var_from_utf8, 1, var_318_7_result, 1, var_318_7_result,
  // $info result.from_json
  var_from_json, 1, var_318_7_result, 1, LOCAL(10),
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
  POS(326, 7),
  POS(327, 7),
  POS(328, 7),
  POS(330, 9),
  POS(331, 9),
  POS(332, 9),
  POS(333, 9),
  POS(334, 9),
  POS(335, 9),
  POS(336, 9),
  POS(337, 9),
  POS(338, 9),
  POS(329, 7)
};

static TAB_NUM t_func_ai_types__model___ai__tokenize[] = {
  11, // locals
  2, // parameters
  LOCAL(5), // 348_0_model
  LOCAL(6), // 349_0_text
  // is_a_string
  var_is_a_string, 1, LOCAL(6), 1, LOCAL(1),
  // $CONTENT
  var_if, 3, LOCAL(1), lambda_47, lambda_48, 1, LOCAL(7),
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
  var_std__string, 5, str_POST_tokenize_HT, LOCAL(1), str_Connection_close, LOCAL(8), string_6, 1, LOCAL(2),
  // write_all_to! fd "
  var_write_all_to, 2, LOCAL(9), LOCAL(2), IO_CALL(0),
  // load! $result fd
  var_load, 1, LOCAL(9), IO_CALL(1), LOCAL(10),
  // behind &result "@cr;@nl;@cr;@nl;"
  var_behind, 2, LOCAL(10), string_8, 1, LOCAL(10),
  // $info result.from_json
  var_from_json, 1, LOCAL(10), 1, LOCAL(11),
  // info("tokens")
  LOCAL(11), 1, str_tokens, 1, LOCAL(1),
  // -> info("tokens")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(356, 12),
  POS(354, 3),
  POS(362, 19),
  POS(362, 10),
  POS(363, 9),
  POS(361, 7),
  POS(359, 3),
  POS(364, 3),
  POS(365, 24),
  POS(365, 42),
  POS(365, 3),
  POS(369, 23),
  POS(366, 20),
  POS(366, 3),
  POS(373, 3),
  POS(376, 3),
  POS(377, 3),
  POS(378, 6),
  POS(378, 3)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  //  "content"
  LET, 1, str_content, TAIL_CALL,
  POS(357, 9)
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  //  "lines"
  LET, 1, str_lines, TAIL_CALL,
  POS(358, 9)
};

static TAB_NUM t_func_ai_types__model___ai__evaluate[] = {
  15, // locals
  2, // parameters
  LOCAL(9), // 393_0_model
  LOCAL(10), // 394_0_prompt
  // result_count() == 2
  var_result_count, 0, 1, LOCAL(1),
  // $do_return_confidence_values result_count() == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(11),
  // is_a_string)
  var_is_a_string, 1, LOCAL(10), 1, LOCAL(1),
  // $use_tokens not(prompt.is_a_string)
  var_not, 1, LOCAL(1), 1, var_400_1_use_tokens,
  // $PROMPT
  var_if, 3, var_400_1_use_tokens, lambda_49, lambda_50, 1, LOCAL(12),
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
  var_insert_order_table, 6, LOCAL(1), LOCAL(3), LOCAL(4), LOCAL(5), key_value_pair_413_1, key_value_pair_414_1, 1, LOCAL(8),
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
  var_std__string, 5, str_POST_completion, LOCAL(1), str_Connection_close, LOCAL(13), string_6, 1, LOCAL(2),
  // write_all_to! fd "
  var_write_all_to, 2, LOCAL(14), LOCAL(2), IO_CALL(0),
  // load! $result fd
  var_load, 1, LOCAL(14), IO_CALL(1), LOCAL(15),
  // behind &result "@cr;@nl;@cr;@nl;"
  var_behind, 2, LOCAL(15), string_8, 1, LOCAL(15),
  // $info result.from_json
  var_from_json, 1, LOCAL(15), 1, var_428_1_info,
  // if
  var_if, 3, LOCAL(11), lambda_do_return_confidence_values, lambda_54, TAIL_CALL,
  POS(399, 32),
  POS(399, 3),
  POS(400, 26),
  POS(400, 3),
  POS(401, 3),
  POS(409, 9),
  POS(410, 19),
  POS(410, 10),
  POS(411, 10),
  POS(412, 10),
  POS(408, 7),
  POS(406, 3),
  POS(415, 3),
  POS(416, 24),
  POS(416, 42),
  POS(416, 3),
  POS(420, 23),
  POS(417, 20),
  POS(417, 3),
  POS(424, 3),
  POS(427, 3),
  POS(428, 3),
  POS(429, 3)
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  //  "tokens"
  LET, 1, str_tokens, TAIL_CALL,
  POS(404, 9)
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  //  "prompt"
  LET, 1, str_prompt, TAIL_CALL,
  POS(405, 9)
};

static TAB_NUM t_lambda_do_return_confidence_values[] = {
  0, // locals
  0, // parameters
  // $logits info("logits")
  var_428_1_info, 1, str_logits, 1, var_431_1_logits,
  // map &logits: (logit) tuple logit(1) logit(2)
  var_map, 2, var_431_1_logits, lambda_51, 1, var_431_1_logits,
  // if
  var_if, 3, var_400_1_use_tokens, lambda_52, lambda_53, TAIL_CALL,
  POS(431, 7),
  POS(432, 7),
  POS(433, 7)
};

static TAB_NUM t_lambda_51[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 432_14_logit
  // logit(1) logit(2)
  LOCAL(3), 1, num_1, 1, LOCAL(1),
  // logit(2)
  LOCAL(3), 1, num_2, 1, LOCAL(2),
  // tuple logit(1) logit(2)
  var_tuple, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(432, 34),
  POS(432, 43),
  POS(432, 28)
};

static TAB_NUM t_lambda_52[] = {
  1, // locals
  0, // parameters
  // info("token") logits
  var_428_1_info, 1, str_token, 1, LOCAL(1),
  //  info("token") logits
  LET, 2, LOCAL(1), var_431_1_logits, TAIL_CALL,
  POS(435, 12),
  POS(435, 11)
};

static TAB_NUM t_lambda_53[] = {
  1, // locals
  0, // parameters
  // info("content") logits
  var_428_1_info, 1, str_content, 1, LOCAL(1),
  //  info("content") logits
  LET, 2, LOCAL(1), var_431_1_logits, TAIL_CALL,
  POS(436, 12),
  POS(436, 11)
};

static TAB_NUM t_lambda_54[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_400_1_use_tokens, lambda_55, lambda_56, TAIL_CALL,
  POS(438, 7)
};

static TAB_NUM t_lambda_55[] = {
  1, // locals
  0, // parameters
  // info("token")
  var_428_1_info, 1, str_token, 1, LOCAL(1),
  //  info("token")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(440, 12),
  POS(440, 11)
};

static TAB_NUM t_lambda_56[] = {
  1, // locals
  0, // parameters
  // info("content")
  var_428_1_info, 1, str_content, 1, LOCAL(1),
  //  info("content")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(441, 12),
  POS(441, 11)
};

static TAB_NUM t_func_ai_types__model___ai__detokenize[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 445_0_model
  var_446_0_token_or_list,
  // $pieces ai::pieces_of(model)
  var_ai__pieces_of, 1, LOCAL(2), 1, var_448_1_pieces,
  // is_a_list
  var_is_a_list, 1, var_446_0_token_or_list, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_57, lambda_58, TAIL_CALL,
  POS(448, 3),
  POS(450, 19),
  POS(449, 3)
};

static TAB_NUM t_lambda_57[] = {
  1, // locals
  0, // parameters
  // map_reduce(token_or_list token_to_piece append "")
  var_map_reduce, 4, var_446_0_token_or_list, func_token_to_piece, var_append, string_2, 1, LOCAL(1),
  //  map_reduce(token_or_list token_to_piece append "")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(451, 8),
  POS(451, 7)
};

static TAB_NUM t_lambda_58[] = {
  1, // locals
  0, // parameters
  // token_to_piece(token_or_list)
  func_token_to_piece, 1, var_446_0_token_or_list, 1, LOCAL(1),
  //  token_to_piece(token_or_list)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(453, 8),
  POS(453, 7)
};

static TAB_NUM t_func_token_to_piece[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 455_18_token
  // token+1)
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(1),
  // $piece pieces(token+1)
  var_448_1_pieces, 1, LOCAL(1), 1, var_456_1_piece,
  // any_of(piece: (chr) -> chr == '@0x142;')
  var_any_of, 2, var_456_1_piece, lambda_any_ofpiece, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_59, lambda_60, TAIL_CALL,
  POS(456, 19),
  POS(456, 5),
  POS(458, 7),
  POS(457, 5)
};

static TAB_NUM t_lambda_any_ofpiece[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 458_15_chr
  // chr == '@0x142;')
  var_std__equal, 2, LOCAL(2), chr_322, 1, LOCAL(1),
  // -> chr == '@0x142;')
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(458, 30),
  POS(458, 27)
};

static TAB_NUM t_lambda_59[] = {
  0, // locals
  0, // parameters
  //  "<???>" # 'ł' cannot be printed - why?
  LET, 1, string_9, TAIL_CALL,
  POS(459, 9)
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  0, // parameters
  //  piece
  LET, 1, var_456_1_piece, TAIL_CALL,
  POS(460, 9)
};

static TAB_NUM t_func_build_piece_table[] = {
  0, // locals
  1, // parameters
  var_462_21_model,
  // $pieces ai::pieces_of(model)
  var_ai__pieces_of, 1, var_462_21_model, 1, var_463_1_pieces,
  // $piece_table empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_464_1_piece_table,
  // for_each pieces
  var_for_each, 3, var_463_1_pieces, lambda_61, lambda_63, TAIL_CALL,
  POS(463, 3),
  POS(464, 3),
  POS(465, 3)
};

static TAB_NUM t_lambda_61[] = {
  1, // locals
  2, // parameters
  var_466_3_idx,
  var_466_7_piece,
  // is_empty
  var_is_empty, 1, var_466_7_piece, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_62, TAIL_CALL,
  POS(468, 15),
  POS(467, 7)
};

static TAB_NUM t_lambda_62[] = {
  2, // locals
  0, // parameters
  // !piece_table(piece) idx-1
  var_std__minus, 2, var_466_3_idx, num_1, 1, LOCAL(2),
  // piece_table(piece) idx-1
  var_464_1_piece_table, 2, var_466_7_piece, LOCAL(2), 1, var_464_1_piece_table,
  // next
  var_next, 0, TAIL_CALL,
  POS(471, 11),
  POS(471, 12),
  POS(472, 11)
};

static TAB_NUM t_lambda_63[] = {
  2, // locals
  0, // parameters
  // map_reduce(pieces length_of max)
  var_map_reduce, 3, var_463_1_pieces, var_length_of, var_max, 1, LOCAL(1),
  // model
  LET, -2, var_462_21_model, var_ai__piece_table_of, var_464_1_piece_table, var_ai__maximum_piece_length_of, LOCAL(1), LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(476, 38),
  POS(474, 7),
  POS(473, 7)
};

static TAB_NUM t_func_ai__escaped_token[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 478_21_model
  LOCAL(4), // 478_27_token
  // ai::detokenize(model token))
  var_ai__detokenize, 2, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // ai::escaped_piece(ai::detokenize(model token))
  var_ai__escaped_piece, 1, LOCAL(1), 1, LOCAL(2),
  // -> ai::escaped_piece(ai::detokenize(model token))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(479, 24),
  POS(479, 6),
  POS(479, 3)
};

static TAB_NUM t_func_ai__escaped_piece[] = {
  0, // locals
  1, // parameters
  var_481_21_piece,
  // $buf ""
  LET, 1, string_2, 1, var_482_1_buf,
  // $s 1
  LET, 1, num_1, 1, var_483_1_s,
  // $n length_of(piece)
  var_length_of, 1, var_481_21_piece, 1, var_484_1_n,
  // $i 0
  LET, 1, num_0, 1, var_485_1_i,
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(482, 3),
  POS(483, 3),
  POS(484, 3),
  POS(485, 3),
  POS(486, 3)
};

static TAB_NUM t_lambda_2_loop[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_485_1_i, 1, var_485_1_i,
  // n
  var_std__less, 2, var_484_1_n, var_485_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_64, lambda_65, TAIL_CALL,
  POS(487, 5),
  POS(489, 11),
  POS(488, 5)
};

static TAB_NUM t_lambda_64[] = {
  2, // locals
  0, // parameters
  // range(piece s n))
  var_range, 3, var_481_21_piece, var_483_1_s, var_484_1_n, 1, LOCAL(1),
  // append(buf range(piece s n))
  var_append, 2, var_482_1_buf, LOCAL(1), 1, LOCAL(2),
  //  append(buf range(piece s n))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(490, 21),
  POS(490, 10),
  POS(490, 9)
};

static TAB_NUM t_lambda_65[] = {
  0, // locals
  0, // parameters
  // $chr piece(i)
  var_481_21_piece, 1, var_485_1_i, 1, var_492_1_chr,
  // case chr
  var_case, 6, var_492_1_chr, chr_10, lambda_nl, sequence_499_2, lambda_66, var_next, TAIL_CALL,
  POS(492, 9),
  POS(493, 9)
};

static TAB_NUM t_lambda_nl[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_485_1_i, num_1, 1, LOCAL(1),
  // range(piece s i-1)
  var_range, 3, var_481_21_piece, var_483_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(piece s i-1)
  var_append, 2, var_482_1_buf, LOCAL(2), 1, var_482_1_buf,
  // append &buf "\n"
  var_append, 2, var_482_1_buf, str_n, 1, var_482_1_buf,
  // !s i+1
  var_std__plus, 2, var_485_1_i, num_1, 1, var_483_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(495, 39),
  POS(495, 25),
  POS(495, 13),
  POS(496, 13),
  POS(497, 13),
  POS(498, 13)
};

static TAB_NUM t_lambda_66[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_485_1_i, num_1, 1, LOCAL(1),
  // range(piece s i-1)
  var_range, 3, var_481_21_piece, var_483_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(piece s i-1)
  var_append, 2, var_482_1_buf, LOCAL(2), 1, var_482_1_buf,
  // push &buf '\'
  var_push, 2, var_482_1_buf, chr_92, 1, var_482_1_buf,
  // push &buf chr
  var_push, 2, var_482_1_buf, var_492_1_chr, 1, var_482_1_buf,
  // !s i+1
  var_std__plus, 2, var_485_1_i, num_1, 1, var_483_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(500, 39),
  POS(500, 25),
  POS(500, 13),
  POS(501, 13),
  POS(502, 13),
  POS(503, 13),
  POS(504, 13)
};

static int key_value_pair_243_21_arguments[] = {
  -chr_9, -str_ht
};

static int key_value_pair_413_1_arguments[] = {
  -str_n_probs, -num_10
};

static int key_value_pair_414_1_arguments[] = {
  -str_n_predict, -num_1
};

static int sequence_499_2_arguments[] = {
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai_types__model___ai__generate}},
  {FLT_POSITIVE_INT64, 0, {.value = 15}},
  {FLT_POSITIVE_INT64, 0, {.value = 1024}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_generate_text}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_STRING_8, 15, {.str_8 = "<end of stream>"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_POSITIVE_INT64, 0, {.value = 1000}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_STRING_8, 1, {.str_8 = "\042"}},
  {FLT_STRING_8, 2, {.str_8 = "\042:"}},
  {FLT_STRING_8, 15, {.str_8 = "[#%4] %l18 %3.3"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_STRING_8, 23, {.str_8 = "-[#%4|%3.1 ms]---------"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_STRING_8, 24, {.str_8 = "-[#%4]------------------"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_CHARACTER, 0, {.value = 9}},
  {FLT_STRING_8, 8, {.str_8 = "<<<ht>>>"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_243_21_arguments}},
  {FLT_STRING_8, 9, {.str_8 = "%l18 %3.3"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_POSITIVE_INT64, 0, {.value = 5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_response_is_empty}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_STRING_8, 3, {.str_8 = "\010 \010"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_print_piece}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_POSITIVE_INT64, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_get_tokens}},
  {FLT_STRING_8, 5, {.str_8 = "model"}},
  {FLT_STRING_8, 75, {.str_8 = "POST /get_tokens HTTP/1.1\015\012Content-Type: application/json\015\012Content-Length: "}},
  {FLT_STRING_8, 23, {.str_8 = "\015\012Connection: close\015\012\015\012"}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_POSITIVE_INT64, 0, {.value = 300}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_STRING_8, 4, {.str_8 = "\015\012\015\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_STRING_8, 7, {.str_8 = "content"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_STRING_8, 5, {.str_8 = "lines"}},
  {FLT_STRING_8, 73, {.str_8 = "POST /tokenize HTTP/1.1\015\012Content-Type: application/json\015\012Content-Length: "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai_types__model___ai__evaluate}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_STRING_8, 6, {.str_8 = "prompt"}},
  {FLT_STRING_8, 6, {.str_8 = "logits"}},
  {FLT_STRING_8, 5, {.str_8 = "brief"}},
  {FLT_STRING_8, 7, {.str_8 = "n_probs"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_413_1_arguments}},
  {FLT_STRING_8, 9, {.str_8 = "n_predict"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_414_1_arguments}},
  {FLT_STRING_8, 75, {.str_8 = "POST /completion HTTP/1.1\015\012Content-Type: application/json\015\012Content-Length: "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_return_confidence_values}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_STRING_8, 5, {.str_8 = "token"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai_types__model___ai__detokenize}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_token_to_piece}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_any_ofpiece}},
  {FLT_CHARACTER, 0, {.value = 322}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_STRING_8, 5, {.str_8 = "<???>"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_build_piece_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai__escaped_token}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai__escaped_piece}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_CHARACTER, 0, {.value = 92}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_499_2_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_nl}},
  {FLT_STRING_8, 2, {.str_8 = "\134n"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}}
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
    {.position = POS(135, 18)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "load_ai_model\000ai", NULL,
    {.const_idx = -func_ai__load_ai_model}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(150, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "151_1_port_no\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "behind\000", NULL,
    {.position = POS(151, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(154, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(156, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(153, 5)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "name_of\000", NULL,
    {.position = POS(159, 8)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "address_of\000", NULL,
    {.position = POS(160, 8)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "port_no_of\000", NULL,
    {.position = POS(161, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "157_1_model\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(173, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "180_0_model\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value_pair\000std", NULL,
    {.position = POS(185, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(187, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(190, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "185_29_minimum_confidence\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "186_27_maximum_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "187_22_stop_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "188_19_backtrack\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "189_19_log_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "190_21_be_verbose\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "191_25_use_colours\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "extract_options\000", NULL,
    {.position = POS(184, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "192_1_do_log\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(192, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(193, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(193, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "BLACK\000", NULL,
    {.position = POS(194, 43)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ansi_text_colour\000", NULL,
    {.position = POS(194, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print\000", NULL,
    {.position = POS(194, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(194, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "put\000", NULL,
    {.position = POS(197, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "196_16_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ansi_reset_colour\000", NULL,
    {.position = POS(198, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "println\000", NULL,
    {.position = POS(199, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(201, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(201, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(203, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "205_17_tokens\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "205_24_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "205_29_no\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(207, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "contains\000", NULL,
    {.position = POS(207, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(207, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "210_15_t1\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_time\000", NULL,
    {.position = POS(210, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "211_28_next_token\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "211_40_confidence_values\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprintln\000", NULL,
    {.position = POS(215, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "218_1_max_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "220_34_next_confidence\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "221_1_next_piece\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(224, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "224_1_dt\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(224, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(226, 32)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "escaped_piece\000ai", NULL,
    {.const_idx = -func_ai__escaped_piece}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(228, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "format\000", NULL,
    {.position = POS(230, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "replace_all\000", NULL,
    {.position = POS(243, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(246, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(239, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(249, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim_left\000", NULL,
    {.position = POS(250, 50)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(254, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(257, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(259, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "256_16_response\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "extend_to\000", NULL,
    {.position = POS(260, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(269, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dup\000", NULL,
    {.position = POS(275, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(277, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(219, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "282_15_piece\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "282_21_confidence\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "284_1_confidence_delta\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "negate\000std", NULL,
    {.position = POS(289, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "RED\000", NULL,
    {.position = POS(290, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "colour_mixture\000", NULL,
    {.position = POS(288, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "GREEN\000", NULL,
    {.position = POS(293, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WHITE\000", NULL,
    {.position = POS(294, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(286, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ansi_background_colour\000", NULL,
    {.position = POS(299, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "insert_order_table\000", NULL,
    {.position = POS(308, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_json\000", NULL,
    {.position = POS(307, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open_tcp_socket\000", NULL,
    {.position = POS(310, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print_to\000", NULL,
    {.position = POS(311, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "318_7_result\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "load\000", NULL,
    {.position = POS(318, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "between\000", NULL,
    {.position = POS(321, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error\000", NULL,
    {.position = POS(324, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_utf8\000", NULL,
    {.position = POS(327, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_json\000", NULL,
    {.position = POS(328, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(356, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(364, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write_all_to\000", NULL,
    {.position = POS(366, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "400_1_use_tokens\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(400, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "428_1_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "431_1_logits\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(432, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(432, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "446_0_token_or_list\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "448_1_pieces\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(450, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(451, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "456_1_piece\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(458, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "462_21_model\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "463_1_pieces\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "464_1_piece_table\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(464, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "466_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "466_7_piece\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(476, 66)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "escaped_token\000ai", NULL,
    {.const_idx = -func_ai__escaped_token}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "481_21_piece\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "482_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "483_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "484_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "485_1_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(487, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "492_1_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(499, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(493, 9)}
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
  151, // number of constants
  153, // number of variables
  NULL, // required modules
  defined_namespaces,
  used_namespaces,
  constants_table,
  variables_table,
};
