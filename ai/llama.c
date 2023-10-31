#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  uni_ai__MINIMUM_CONFIDENCE = -1,
  uni_ai__MAXIMUM_LENGTH = -2,
  uni_ai__BACKTRACK = -3,
  uni_ai__LOG_LEVEL = -4,
  uni_ai__VERBOSE = -5,
  uni_ai__USE_COLOURS = -6,
  func_ai__load_ai_model = -7,
  string_1 = -8,
  num_8080 = -9,
  lambda_1 = -10,
  lambda_2 = -11,
  func_ai_types__model___ai__evaluate = -12,
  num_2 = -13,
  lambda_3 = -14,
  str_tokens = -15,
  lambda_4 = -16,
  str_prompt = -17,
  str_logits = -18,
  str_brief = -19,
  str_n_probs = -20,
  num_10 = -21,
  key_value_pair_165_1 = -22,
  str_n_predict = -23,
  num_1 = -24,
  key_value_pair_166_1 = -25,
  str_POST_completion = -26,
  str_Connection_close = -27,
  string_2 = -28,
  string_3 = -29,
  lambda_do_return_confidence_values = -30,
  lambda_5 = -31,
  lambda_6 = -32,
  str_token = -33,
  lambda_7 = -34,
  str_content = -35,
  lambda_8 = -36,
  lambda_9 = -37,
  lambda_10 = -38,
  func_ai_types__model___ai__generate = -39,
  num_15 = -40,
  num_1024 = -41,
  num_0 = -42,
  lambda_11 = -43,
  lambda_12 = -44,
  string_4 = -45,
  lambda_13 = -46,
  lambda_14 = -47,
  func_generate_text = -48,
  lambda_15 = -49,
  lambda_16 = -50,
  str_end_of_stream = -51,
  lambda_17 = -52,
  lambda_loop = -53,
  lambda_18 = -54,
  num_1000 = -55,
  lambda_19 = -56,
  string_5 = -57,
  string_6 = -58,
  str_431_l = -59,
  lambda_20 = -60,
  string_7 = -61,
  lambda_21 = -62,
  str_l = -63,
  lambda_22 = -64,
  num_5 = -65,
  lambda_23 = -66,
  lambda_24 = -67,
  lambda_25 = -68,
  lambda_26 = -69,
  lambda_response_is_empty = -70,
  lambda_27 = -71,
  chr_10 = -72,
  lambda_28 = -73,
  lambda_29 = -74,
  lambda_30 = -75,
  lambda_31 = -76,
  lambda_32 = -77,
  string_8 = -78,
  lambda_33 = -79,
  minus_num_1 = -80,
  lambda_34 = -81,
  lambda_35 = -82,
  func_print_piece = -83,
  lambda_36 = -84,
  lambda_37 = -85,
  lambda_38 = -86,
  lambda_39 = -87,
  lambda_40 = -88,
  lambda_41 = -89,
  lambda_42 = -90,
  lambda_43 = -91,
  func_ai_types__model___ai__tokenize = -92,
  str_POST_tokenize_HT = -93,
  func_ai_types__model___ai__detokenize = -94,
  lambda_44 = -95,
  lambda_45 = -96,
  func_token_to_piece = -97,
  lambda_any_ofpiece = -98,
  chr_322 = -99,
  lambda_46 = -100,
  string_9 = -101,
  lambda_47 = -102,
  func_build_piece_table = -103,
  lambda_48 = -104,
  lambda_49 = -105,
  lambda_50 = -106,
  func_get_tokens = -107,
  str_model = -108,
  str_dummy = -109,
  key_value_pair_395_1 = -110,
  str_POST_get_tokens = -111,
  str_begin_of_stream = -112,
  str_end_of_stream_2 = -113,
  func_quoted = -114,
  lambda_2_loop = -115,
  lambda_51 = -116,
  lambda_52 = -117,
  chr_34 = -118,
  chr_92 = -119,
  sequence_428_2 = -120,
  lambda_nl = -121,
  str_n = -122,
  lambda_53 = -123
};

enum {
  var__START = FIRST_VAR-1,
  var_ai__pieces_of, // attribute
  var_std__assign, // extern
  var_ai__piece_table_of, // attribute
  var_ai__maximum_piece_length_of, // attribute
  var_ai__begin_of_stream_token_of, // attribute
  var_ai__end_of_stream_token_of, // attribute
  var_std__address_of, // attribute
  var_std__port_no_of, // attribute
  var_ai__evaluate, // attribute
  var_ai__tokenize, // attribute
  var_ai__detokenize, // attribute
  var_ai__generate, // attribute
  var_ai__MINIMUM_CONFIDENCE, // initialized
  var_ai__MAXIMUM_LENGTH, // initialized
  var_ai__BACKTRACK, // initialized
  var_ai__LOG_LEVEL, // initialized
  var_ai__VERBOSE, // initialized
  var_ai__USE_COLOURS, // initialized
  var_ai_types__model, // derived
  var_std_types__object, // extern
  var_ai__load_ai_model, // initialized
  var_name_of, // extern polymorphic
  var_address_of, // extern polymorphic
  var_port_no_of, // extern polymorphic
  var_121_1_model, // dynamic
  var_is_an_error, // extern
  var_if, // extern
  var_result_count, // extern
  var_std__equal, // extern
  var_is_a_string, // extern
  var_153_1_use_tokens, // dynamic
  var_not, // extern
  var_std__key_value_pair, // extern
  var_true, // extern
  var_insert_order_table, // extern
  var_to_json, // extern
  var_to_utf8, // extern
  var_open_tcp_socket, // extern
  var_length_of, // extern
  var_std__string, // extern
  var_write_all_to, // extern
  var_load, // extern
  var_behind, // extern
  var_178_1_info, // dynamic
  var_from_json, // extern
  var_181_1_logits, // dynamic
  var_tuple, // extern
  var_map, // extern
  var_195_0_model, // dynamic
  var_false, // extern
  var_200_29_minimum_confidence, // dynamic
  var_201_27_maximum_length, // dynamic
  var_202_19_backtrack, // dynamic
  var_203_19_log_level, // dynamic
  var_204_21_be_verbose, // dynamic
  var_205_25_use_colours, // dynamic
  var_extract_options, // extern
  var_206_1_do_log, // dynamic
  var_std__less, // extern
  var_update_if, // extern
  var_BLACK, // extern
  var_ansi_text_colour, // extern
  var_print, // extern
  var_on, // extern
  var_put, // extern
  var_ansi_reset_colour, // extern
  var_println, // extern
  var_216_17_tokens, // dynamic
  var_216_24_text, // dynamic
  var_216_29_no, // dynamic
  var_217_1_t, // dynamic
  var_current_time, // extern
  var_218_28_next_token, // dynamic
  var_218_40_confidence_values, // dynamic
  var_eprintln, // extern
  var_225_1_max_no, // dynamic
  var_227_34_next_confidence, // dynamic
  var_228_1_next_piece, // dynamic
  var_std__minus, // extern
  var_230_1_dt, // dynamic
  var_std__times, // extern
  var_std__not, // extern
  var_format, // extern
  var_next, // extern
  var_pass, // extern
  var_for_each, // extern
  var_std__or, // extern
  var_trim_left, // extern
  var_append, // extern
  var_push, // extern
  var_std__plus, // extern
  var_256_16_response, // dynamic
  var_extend_to, // extern
  var_is_empty, // extern
  var_dup, // extern
  var_range, // extern
  var_loop, // extern
  var_281_15_piece, // dynamic
  var_281_21_confidence, // dynamic
  var_283_1_confidence_delta, // dynamic
  var_std__negate, // extern
  var_RED, // extern
  var_colour_mixture, // extern
  var_GREEN, // extern
  var_WHITE, // extern
  var_cond, // extern
  var_ansi_background_colour, // extern
  var_359_0_token_or_list, // dynamic
  var_361_1_pieces, // dynamic
  var_is_a_list, // extern
  var_map_reduce, // extern
  var_369_1_piece, // dynamic
  var_any_of, // extern
  var_375_21_model, // dynamic
  var_376_1_pieces, // dynamic
  var_377_1_piece_table, // dynamic
  var_empty_hash_table, // extern
  var_379_3_idx, // dynamic
  var_379_7_piece, // dynamic
  var_max, // extern
  var_print_to, // extern
  var_from_utf8, // extern
  var_410_10_text, // dynamic
  var_411_1_buf, // dynamic
  var_412_1_s, // dynamic
  var_413_1_n, // dynamic
  var_414_1_i, // dynamic
  var_inc, // extern
  var_421_1_chr, // dynamic
  var_std__sequence, // extern
  var_case, // extern
  var__END
};


static TAB_NUM t_func_ai__load_ai_model[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 119_0_name
  // $model
  LET, -3, var_ai_types__model, var_name_of, LOCAL(4), var_address_of, string_1, var_port_no_of, num_8080, var_121_1_model,
  // get_tokens!
  func_get_tokens, 0, IO_CALL(3), LOCAL(1), LOCAL(2), LOCAL(3),
  // model.ai::pieces_of
  LET, -1, var_121_1_model, var_ai__pieces_of, LOCAL(1), var_121_1_model,
  // model.ai::begin_of_stream_token_of
  LET, -1, var_121_1_model, var_ai__begin_of_stream_token_of, LOCAL(2), var_121_1_model,
  // model.ai::end_of_stream_token_of
  LET, -1, var_121_1_model, var_ai__end_of_stream_token_of, LOCAL(3), var_121_1_model,
  // ai::pieces_of(model).is_an_error
  var_ai__pieces_of, 1, var_121_1_model, 1, LOCAL(1),
  // is_an_error
  var_is_an_error, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1, lambda_2, TAIL_CALL,
  POS(121, 3),
  POS(126, 3),
  POS(127, 6),
  POS(128, 6),
  POS(129, 6),
  POS(131, 5),
  POS(131, 26),
  POS(130, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // ai::pieces_of(model)
  var_ai__pieces_of, 1, var_121_1_model, 1, LOCAL(1),
  //  ai::pieces_of(model)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(132, 8),
  POS(132, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // build_piece_table model
  func_build_piece_table, 1, var_121_1_model, TAIL_CALL,
  POS(134, 7)
};

static TAB_NUM t_func_ai_types__model___ai__evaluate[] = {
  13, // locals
  2, // parameters
  LOCAL(7), // 149_0_model
  LOCAL(8), // 150_0_prompt
  // result_count() == 2
  var_result_count, 0, 1, LOCAL(1),
  // $do_return_confidence_values result_count() == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(9),
  // is_a_string)
  var_is_a_string, 1, LOCAL(8), 1, LOCAL(1),
  // $use_tokens not(prompt.is_a_string)
  var_not, 1, LOCAL(1), 1, var_153_1_use_tokens,
  // $PROMPT
  var_if, 3, var_153_1_use_tokens, lambda_3, lambda_4, 1, LOCAL(10),
  // PROMPT = prompt
  var_std__key_value_pair, 2, LOCAL(10), LOCAL(8), 1, LOCAL(1),
  // logits" = true # also disables server side token selection
  var_std__key_value_pair, 2, str_logits, var_true, 1, LOCAL(2),
  // brief" = true
  var_std__key_value_pair, 2, str_brief, var_true, 1, LOCAL(3),
  // insert_order_table
  var_insert_order_table, 5, LOCAL(1), LOCAL(2), LOCAL(3), key_value_pair_165_1, key_value_pair_166_1, 1, LOCAL(6),
  // $json
  var_to_json, 1, LOCAL(6), 1, LOCAL(11),
  // to_utf8 &json
  var_to_utf8, 1, LOCAL(11), 1, LOCAL(11),
  // address_of(model) port_no_of(model)
  var_address_of, 1, LOCAL(7), 1, LOCAL(1),
  // port_no_of(model)
  var_port_no_of, 1, LOCAL(7), 1, LOCAL(2),
  // open_tcp_socket! $fd address_of(model) port_no_of(model)
  var_open_tcp_socket, 2, LOCAL(1), LOCAL(2), IO_CALL(1), LOCAL(12),
  // length_of(json))@cr;
  var_length_of, 1, LOCAL(11), 1, LOCAL(1),
  // "
  var_std__string, 5, str_POST_completion, LOCAL(1), str_Connection_close, LOCAL(11), string_2, 1, LOCAL(2),
  // write_all_to! fd "
  var_write_all_to, 2, LOCAL(12), LOCAL(2), IO_CALL(0),
  // load! $result fd
  var_load, 1, LOCAL(12), IO_CALL(1), LOCAL(13),
  // behind &result "@cr;@nl;@cr;@nl;"
  var_behind, 2, LOCAL(13), string_3, 1, LOCAL(13),
  // $info result.from_json
  var_from_json, 1, LOCAL(13), 1, var_178_1_info,
  // if
  var_if, 3, LOCAL(9), lambda_do_return_confidence_values, lambda_8, TAIL_CALL,
  POS(152, 32),
  POS(152, 3),
  POS(153, 26),
  POS(153, 3),
  POS(154, 3),
  POS(162, 9),
  POS(163, 10),
  POS(164, 10),
  POS(161, 7),
  POS(159, 3),
  POS(167, 3),
  POS(168, 24),
  POS(168, 42),
  POS(168, 3),
  POS(172, 23),
  POS(169, 20),
  POS(169, 3),
  POS(176, 3),
  POS(177, 3),
  POS(178, 3),
  POS(179, 3)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  "tokens"
  LET, 1, str_tokens, TAIL_CALL,
  POS(157, 9)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  "prompt"
  LET, 1, str_prompt, TAIL_CALL,
  POS(158, 9)
};

static TAB_NUM t_lambda_do_return_confidence_values[] = {
  0, // locals
  0, // parameters
  // $logits info("logits")
  var_178_1_info, 1, str_logits, 1, var_181_1_logits,
  // map &logits: (logit) tuple logit(1) logit(2)
  var_map, 2, var_181_1_logits, lambda_5, 1, var_181_1_logits,
  // if
  var_if, 3, var_153_1_use_tokens, lambda_6, lambda_7, TAIL_CALL,
  POS(181, 7),
  POS(182, 7),
  POS(183, 7)
};

static TAB_NUM t_lambda_5[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 182_14_logit
  // logit(1) logit(2)
  LOCAL(3), 1, num_1, 1, LOCAL(1),
  // logit(2)
  LOCAL(3), 1, num_2, 1, LOCAL(2),
  // tuple logit(1) logit(2)
  var_tuple, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(182, 34),
  POS(182, 43),
  POS(182, 28)
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // info("token") logits
  var_178_1_info, 1, str_token, 1, LOCAL(1),
  //  info("token") logits
  LET, 2, LOCAL(1), var_181_1_logits, TAIL_CALL,
  POS(185, 12),
  POS(185, 11)
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // info("content") logits
  var_178_1_info, 1, str_content, 1, LOCAL(1),
  //  info("content") logits
  LET, 2, LOCAL(1), var_181_1_logits, TAIL_CALL,
  POS(186, 12),
  POS(186, 11)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_153_1_use_tokens, lambda_9, lambda_10, TAIL_CALL,
  POS(188, 7)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // info("token")
  var_178_1_info, 1, str_token, 1, LOCAL(1),
  //  info("token")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(190, 12),
  POS(190, 11)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // info("content")
  var_178_1_info, 1, str_content, 1, LOCAL(1),
  //  info("content")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(191, 12),
  POS(191, 11)
};

static TAB_NUM t_func_ai_types__model___ai__generate[] = {
  10, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_195_0_model,
  REST_PARAMETER, LOCAL(7), // 196_0_options
  MANDATORY_PARAMETER, LOCAL(8), // 197_0_prompt
  // ai::MINIMUM_CONFIDENCE = 15 $minimum_confidence
  var_std__key_value_pair, 2, var_ai__MINIMUM_CONFIDENCE, num_15, 1, LOCAL(1),
  // ai::MAXIMUM_LENGTH = 1024 $maximum_length
  var_std__key_value_pair, 2, var_ai__MAXIMUM_LENGTH, num_1024, 1, LOCAL(2),
  // ai::BACKTRACK = 0 $backtrack
  var_std__key_value_pair, 2, var_ai__BACKTRACK, num_0, 1, LOCAL(3),
  // ai::LOG_LEVEL = 0 $log_level
  var_std__key_value_pair, 2, var_ai__LOG_LEVEL, num_0, 1, LOCAL(4),
  // ai::VERBOSE = false $be_verbose
  var_std__key_value_pair, 2, var_ai__VERBOSE, var_false, 1, LOCAL(5),
  // ai::USE_COLOURS = false $use_colours
  var_std__key_value_pair, 2, var_ai__USE_COLOURS, var_false, 1, LOCAL(6),
  // extract_options options
  var_extract_options, 7, LOCAL(7), LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), 6, var_200_29_minimum_confidence, var_201_27_maximum_length, var_202_19_backtrack, var_203_19_log_level, var_204_21_be_verbose, var_205_25_use_colours,
  // $do_log log_level > 0
  var_std__less, 2, num_0, var_203_19_log_level, 1, var_206_1_do_log,
  // update_if use_colours &be_verbose -> true
  var_update_if, 3, var_205_25_use_colours, var_204_21_be_verbose, lambda_11, 1, var_204_21_be_verbose,
  // on use_colours: print! ansi_text_colour(BLACK)
  var_on, 2, var_205_25_use_colours, lambda_12, IO_CALL(0),
  // ai::tokenize! $tokens model prompt
  var_ai__tokenize, 2, var_195_0_model, LOCAL(8), IO_CALL(1), LOCAL(9),
  // ai::begin_of_stream_token_of(model)) "" 0
  var_ai__begin_of_stream_token_of, 1, var_195_0_model, 1, LOCAL(1),
  // put(tokens ai::begin_of_stream_token_of(model)) "" 0
  var_put, 2, LOCAL(9), LOCAL(1), 1, LOCAL(2),
  // generate_text! $text $_max_no
  func_generate_text, 3, LOCAL(2), string_4, num_0, IO_CALL(2), LOCAL(10), LOCAL(1),
  // on use_colours: print! ansi_reset_colour()
  var_on, 2, var_205_25_use_colours, lambda_13, IO_CALL(0),
  // on be_verbose: println!
  var_on, 2, var_204_21_be_verbose, lambda_14, IO_CALL(0),
  // -> text
  LET, 1, LOCAL(10), TAIL_CALL,
  POS(200, 5),
  POS(201, 5),
  POS(202, 5),
  POS(203, 5),
  POS(204, 5),
  POS(205, 5),
  POS(199, 3),
  POS(206, 3),
  POS(207, 3),
  POS(208, 3),
  POS(209, 3),
  POS(211, 16),
  POS(211, 5),
  POS(210, 3),
  POS(212, 3),
  POS(213, 3),
  POS(214, 3)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(207, 39)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // ansi_text_colour(BLACK)
  var_ansi_text_colour, 1, var_BLACK, 1, LOCAL(1),
  // print! ansi_text_colour(BLACK)
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(208, 26),
  POS(208, 19)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // ansi_reset_colour()
  var_ansi_reset_colour, 0, 1, LOCAL(1),
  // print! ansi_reset_colour()
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(212, 26),
  POS(212, 19)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  // println!
  var_println, 0, IO_TAIL_CALL,
  POS(213, 18)
};

static TAB_NUM t_func_generate_text[] = {
  2, // locals
  3, // parameters
  var_216_17_tokens,
  var_216_24_text,
  var_216_29_no,
  // $t current_time()
  var_current_time, 0, 1, var_217_1_t,
  // ai::evaluate! model tokens $next_token $confidence_values
  var_ai__evaluate, 2, var_195_0_model, var_216_17_tokens, IO_CALL(2), var_218_28_next_token, var_218_40_confidence_values,
  // ai::end_of_stream_token_of(model):
  var_ai__end_of_stream_token_of, 1, var_195_0_model, 1, LOCAL(1),
  // next_token == ai::end_of_stream_token_of(model):
  var_std__equal, 2, var_218_28_next_token, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_15, lambda_17, IO_TAIL_CALL,
  POS(217, 5),
  POS(218, 5),
  POS(220, 21),
  POS(220, 7),
  POS(219, 5)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  // on do_log:
  var_on, 2, var_206_1_do_log, lambda_16, IO_CALL(0),
  // -> text no
  LET, 2, var_216_24_text, var_216_29_no, TAIL_CALL,
  POS(221, 9),
  POS(223, 9)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  // eprintln! "<end of stream>"
  var_eprintln, 1, str_end_of_stream, IO_TAIL_CALL,
  POS(222, 11)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // $max_no no
  LET, 1, var_216_29_no, 1, var_225_1_max_no,
  // loop:
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(225, 9),
  POS(226, 9)
};

static TAB_NUM t_lambda_loop[] = {
  3, // locals
  0, // parameters
  // confidence_values(1) !next_token $next_confidence
  var_218_40_confidence_values, 1, num_1, 1, LOCAL(1),
  // confidence_values(1) !next_token $next_confidence
  LOCAL(1), 0, 2, var_218_28_next_token, var_227_34_next_confidence,
  // $next_piece ai::detokenize(model next_token)
  var_ai__detokenize, 2, var_195_0_model, var_218_28_next_token, 1, var_228_1_next_piece,
  // on do_log:
  var_on, 2, var_206_1_do_log, lambda_18, IO_CALL(0),
  // next_confidence >= minimum_confidence || no < 5:
  var_std__less, 2, var_227_34_next_confidence, var_200_29_minimum_confidence, 1, LOCAL(1),
  // next_confidence >= minimum_confidence || no < 5:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_confidence >= minimum_confidence || no < 5:
  var_std__or, 2, LOCAL(2), lambda_22, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_23, lambda_35, IO_TAIL_CALL,
  POS(227, 11),
  POS(227, 11),
  POS(228, 11),
  POS(229, 11),
  POS(249, 13),
  POS(249, 13),
  POS(249, 13),
  POS(248, 11)
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  0, // parameters
  // current_time()-t) # in ms
  var_current_time, 0, 1, LOCAL(1),
  // current_time()-t) # in ms
  var_std__minus, 2, LOCAL(1), var_217_1_t, 1, LOCAL(2),
  // $dt 1000*(current_time()-t) # in ms
  var_std__times, 2, num_1000, LOCAL(2), 1, var_230_1_dt,
  // 1:
  var_std__less, 2, num_1, var_203_19_log_level, 1, LOCAL(1),
  // 1:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_19, lambda_20, IO_TAIL_CALL,
  POS(230, 23),
  POS(230, 23),
  POS(230, 13),
  POS(232, 28),
  POS(232, 28),
  POS(231, 13)
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  0, // parameters
  // quoted(next_piece))@quot;:"
  func_quoted, 1, var_228_1_next_piece, 1, LOCAL(1),
  // $token_string "@quot;@(quoted(next_piece))@quot;:"
  var_std__string, 3, string_5, LOCAL(1), string_6, 1, LOCAL(2),
  // format
  var_format, 5, str_431_l, var_216_29_no, var_230_1_dt, LOCAL(2), var_227_34_next_confidence, 1, LOCAL(1),
  // eprintln!
  var_eprintln, 1, LOCAL(1), IO_TAIL_CALL,
  POS(233, 40),
  POS(233, 17),
  POS(235, 19),
  POS(234, 17)
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // format("-[%4|%3.1]-------------" no dt)
  var_format, 3, string_7, var_216_29_no, var_230_1_dt, 1, LOCAL(1),
  // eprintln! format("-[%4|%3.1]-------------" no dt)
  var_eprintln, 1, LOCAL(1), IO_CALL(0),
  // for_each confidence_values
  var_for_each, 3, var_218_40_confidence_values, lambda_21, var_pass, IO_TAIL_CALL,
  POS(239, 27),
  POS(239, 17),
  POS(240, 17)
};

static TAB_NUM t_lambda_21[] = {
  6, // locals
  1, // parameters
  LOCAL(2), // 241_3_confidence_value
  // confidence_value $token $confidence
  LOCAL(2), 0, 2, LOCAL(3), LOCAL(4),
  // $piece ai::detokenize(model token)
  var_ai__detokenize, 2, var_195_0_model, LOCAL(3), 1, LOCAL(5),
  // quoted(piece))@quot;:"
  func_quoted, 1, LOCAL(5), 1, LOCAL(1),
  // $token_string "@quot;@(quoted(piece))@quot;:"
  var_std__string, 3, string_5, LOCAL(1), string_6, 1, LOCAL(6),
  // format("%l18 %3.3" token_string confidence)
  var_format, 3, str_l, LOCAL(6), LOCAL(4), 1, LOCAL(1),
  // eprintln! format("%l18 %3.3" token_string confidence)
  var_eprintln, 1, LOCAL(1), IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(242, 21),
  POS(243, 21),
  POS(244, 44),
  POS(244, 21),
  POS(245, 31),
  POS(245, 21),
  POS(246, 21)
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // no < 5:
  var_std__less, 2, var_216_29_no, num_5, 1, LOCAL(1),
  // no < 5:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(249, 54),
  POS(249, 54)
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  0, // parameters
  // no == 0 &next_piece: trim_left next_piece
  var_std__equal, 2, var_216_29_no, num_0, 1, LOCAL(1),
  // update_if no == 0 &next_piece: trim_left next_piece
  var_update_if, 3, LOCAL(1), var_228_1_next_piece, lambda_24, 1, var_228_1_next_piece,
  // print_piece! next_piece next_confidence
  func_print_piece, 2, var_228_1_next_piece, var_227_34_next_confidence, IO_CALL(0),
  // no >= maximum_length
  var_std__less, 2, var_216_29_no, var_201_27_maximum_length, 1, LOCAL(1),
  // no >= maximum_length
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_25, lambda_26, IO_TAIL_CALL,
  POS(250, 25),
  POS(250, 15),
  POS(251, 15),
  POS(253, 17),
  POS(253, 17),
  POS(252, 15)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  // trim_left next_piece
  var_trim_left, 1, var_228_1_next_piece, TAIL_CALL,
  POS(250, 46)
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // append(text next_piece) no
  var_append, 2, var_216_24_text, var_228_1_next_piece, 1, LOCAL(1),
  //  append(text next_piece) no
  LET, 2, LOCAL(1), var_216_29_no, TAIL_CALL,
  POS(254, 20),
  POS(254, 19)
};

static TAB_NUM t_lambda_26[] = {
  4, // locals
  0, // parameters
  // push(tokens next_token)
  var_push, 2, var_216_17_tokens, var_218_28_next_token, 1, LOCAL(1),
  // append(text next_piece)
  var_append, 2, var_216_24_text, var_228_1_next_piece, 1, LOCAL(2),
  // no+1
  var_std__plus, 2, var_216_29_no, num_1, 1, LOCAL(3),
  // generate_text! $response $highest_no
  func_generate_text, 3, LOCAL(1), LOCAL(2), LOCAL(3), IO_CALL(2), var_256_16_response, LOCAL(4),
  // extend_to &max_no highest_no
  var_extend_to, 2, var_225_1_max_no, LOCAL(4), 1, var_225_1_max_no,
  // is_empty:
  var_is_empty, 1, var_256_16_response, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_response_is_empty, lambda_34, IO_TAIL_CALL,
  POS(257, 21),
  POS(258, 21),
  POS(259, 21),
  POS(256, 19),
  POS(260, 19),
  POS(262, 30),
  POS(261, 19)
};

static TAB_NUM t_lambda_response_is_empty[] = {
  1, // locals
  0, // parameters
  // next_piece == "@nl;"
  var_std__equal, 2, var_228_1_next_piece, string_2, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_27, lambda_28, IO_TAIL_CALL,
  POS(264, 25),
  POS(263, 23)
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // push(text '@nl;') max_no # stop backtracking
  var_push, 2, var_216_24_text, chr_10, 1, LOCAL(1),
  //  push(text '@nl;') max_no # stop backtracking
  LET, 2, LOCAL(1), var_225_1_max_no, TAIL_CALL,
  POS(265, 28),
  POS(265, 27)
};

static TAB_NUM t_lambda_28[] = {
  2, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_218_40_confidence_values, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_29, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_30, lambda_31, IO_TAIL_CALL,
  POS(269, 49),
  POS(268, 31),
  POS(267, 27)
};

static TAB_NUM t_lambda_29[] = {
  2, // locals
  0, // parameters
  // no+backtrack
  var_std__plus, 2, var_216_29_no, var_202_19_backtrack, 1, LOCAL(1),
  // no+backtrack
  var_std__less, 2, LOCAL(1), var_225_1_max_no, 1, LOCAL(2),
  // max_no > no+backtrack
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(270, 40),
  POS(270, 40),
  POS(270, 31)
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  //  "" max_no
  LET, 2, string_4, var_225_1_max_no, TAIL_CALL,
  POS(271, 31)
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  0, // parameters
  // on use_colours: print! ansi_reset_colour()
  var_on, 2, var_205_25_use_colours, lambda_32, IO_CALL(0),
  // length_of(next_piece))
  var_length_of, 1, var_228_1_next_piece, 1, LOCAL(1),
  // dup("@bs; @bs;" length_of(next_piece))
  var_dup, 2, string_8, LOCAL(1), 1, LOCAL(2),
  // print! dup("@bs; @bs;" length_of(next_piece))
  var_print, 1, LOCAL(2), IO_CALL(0),
  // on use_colours: print! ansi_text_colour(BLACK)
  var_on, 2, var_205_25_use_colours, lambda_33, IO_CALL(0),
  // range &confidence_values 2 -1
  var_range, 3, var_218_40_confidence_values, num_2, minus_num_1, 1, var_218_40_confidence_values,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(273, 31),
  POS(274, 54),
  POS(274, 38),
  POS(274, 31),
  POS(275, 31),
  POS(276, 31),
  POS(277, 31)
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // ansi_reset_colour()
  var_ansi_reset_colour, 0, 1, LOCAL(1),
  // print! ansi_reset_colour()
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(273, 54),
  POS(273, 47)
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // ansi_text_colour(BLACK)
  var_ansi_text_colour, 1, var_BLACK, 1, LOCAL(1),
  // print! ansi_text_colour(BLACK)
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(275, 54),
  POS(275, 47)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  //  response max_no
  LET, 2, var_256_16_response, var_225_1_max_no, TAIL_CALL,
  POS(278, 23)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  //  "" max_no
  LET, 2, string_4, var_225_1_max_no, TAIL_CALL,
  POS(279, 15)
};

static TAB_NUM t_func_print_piece[] = {
  0, // locals
  2, // parameters
  var_281_15_piece,
  var_281_21_confidence,
  // on use_colours:
  var_on, 2, var_205_25_use_colours, lambda_36, IO_CALL(0),
  // on be_verbose: print! piece
  var_on, 2, var_204_21_be_verbose, lambda_43, IO_TAIL_CALL,
  POS(282, 5),
  POS(299, 5)
};

static TAB_NUM t_lambda_36[] = {
  2, // locals
  0, // parameters
  // $confidence_delta confidence-minimum_confidence
  var_std__minus, 2, var_281_21_confidence, var_200_29_minimum_confidence, 1, var_283_1_confidence_delta,
  // $colour
  var_cond, 3, lambda_37, lambda_39, lambda_41, 1, LOCAL(2),
  // ansi_background_colour(colour)
  var_ansi_background_colour, 1, LOCAL(2), 1, LOCAL(1),
  // print! ansi_background_colour(colour)
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(283, 7),
  POS(284, 7),
  POS(298, 14),
  POS(298, 7)
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // confidence_delta < 0 ->
  var_std__less, 2, var_283_1_confidence_delta, num_0, 1, LOCAL(1),
  //  confidence_delta < 0 ->
  LET, 2, LOCAL(1), lambda_38, TAIL_CALL,
  POS(286, 14),
  POS(286, 13)
};

static TAB_NUM t_lambda_38[] = {
  5, // locals
  0, // parameters
  // confidence_delta
  var_std__negate, 1, var_283_1_confidence_delta, 1, LOCAL(1),
  // BLACK = -confidence_delta
  var_std__key_value_pair, 2, var_BLACK, LOCAL(1), 1, LOCAL(2),
  // minimum_confidence+confidence_delta
  var_std__plus, 2, var_200_29_minimum_confidence, var_283_1_confidence_delta, 1, LOCAL(3),
  // RED = minimum_confidence+confidence_delta
  var_std__key_value_pair, 2, var_RED, LOCAL(3), 1, LOCAL(4),
  // colour_mixture
  var_colour_mixture, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  // 
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(288, 24),
  POS(288, 15),
  POS(289, 21),
  POS(289, 15),
  POS(287, 13),
  POS(286, 37)
};

static TAB_NUM t_lambda_39[] = {
  1, // locals
  0, // parameters
  // 10 ->
  var_std__less, 2, num_10, var_283_1_confidence_delta, 1, LOCAL(1),
  //  confidence_delta > 10 ->
  LET, 2, LOCAL(1), lambda_40, TAIL_CALL,
  POS(290, 33),
  POS(290, 13)
};

static TAB_NUM t_lambda_40[] = {
  4, // locals
  0, // parameters
  // GREEN = 10
  var_std__key_value_pair, 2, var_GREEN, num_10, 1, LOCAL(1),
  // confidence_delta-10
  var_std__minus, 2, var_283_1_confidence_delta, num_10, 1, LOCAL(2),
  // WHITE = confidence_delta-10
  var_std__key_value_pair, 2, var_WHITE, LOCAL(2), 1, LOCAL(3),
  // colour_mixture
  var_colour_mixture, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // 
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(292, 15),
  POS(293, 23),
  POS(293, 15),
  POS(291, 13),
  POS(290, 38)
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  //  true ->
  LET, 2, var_true, lambda_42, TAIL_CALL,
  POS(294, 13)
};

static TAB_NUM t_lambda_42[] = {
  4, // locals
  0, // parameters
  // 10-confidence_delta
  var_std__minus, 2, num_10, var_283_1_confidence_delta, 1, LOCAL(1),
  // RED = 10-confidence_delta
  var_std__key_value_pair, 2, var_RED, LOCAL(1), 1, LOCAL(2),
  // GREEN = confidence_delta
  var_std__key_value_pair, 2, var_GREEN, var_283_1_confidence_delta, 1, LOCAL(3),
  // colour_mixture
  var_colour_mixture, 2, LOCAL(2), LOCAL(3), 1, LOCAL(4),
  // 
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(296, 21),
  POS(296, 15),
  POS(297, 15),
  POS(295, 13),
  POS(294, 21)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  // print! piece
  var_print, 1, var_281_15_piece, IO_TAIL_CALL,
  POS(299, 20)
};

static TAB_NUM t_func_ai_types__model___ai__tokenize[] = {
  8, // locals
  2, // parameters
  LOCAL(3), // 335_0_model
  LOCAL(4), // 336_0_prompt
  // content" = prompt
  var_std__key_value_pair, 2, str_content, LOCAL(4), 1, LOCAL(1),
  // insert_order_table
  var_insert_order_table, 1, LOCAL(1), 1, LOCAL(2),
  // $json
  var_to_json, 1, LOCAL(2), 1, LOCAL(5),
  // to_utf8 &json
  var_to_utf8, 1, LOCAL(5), 1, LOCAL(5),
  // address_of(model) port_no_of(model)
  var_address_of, 1, LOCAL(3), 1, LOCAL(1),
  // port_no_of(model)
  var_port_no_of, 1, LOCAL(3), 1, LOCAL(2),
  // open_tcp_socket! $fd address_of(model) port_no_of(model)
  var_open_tcp_socket, 2, LOCAL(1), LOCAL(2), IO_CALL(1), LOCAL(6),
  // length_of(json))@cr;
  var_length_of, 1, LOCAL(5), 1, LOCAL(1),
  // "
  var_std__string, 5, str_POST_tokenize_HT, LOCAL(1), str_Connection_close, LOCAL(5), string_2, 1, LOCAL(2),
  // write_all_to! fd "
  var_write_all_to, 2, LOCAL(6), LOCAL(2), IO_CALL(0),
  // load! $result fd
  var_load, 1, LOCAL(6), IO_CALL(1), LOCAL(7),
  // behind &result "@cr;@nl;@cr;@nl;"
  var_behind, 2, LOCAL(7), string_3, 1, LOCAL(7),
  // $info result.from_json
  var_from_json, 1, LOCAL(7), 1, LOCAL(8),
  // info("tokens")
  LOCAL(8), 1, str_tokens, 1, LOCAL(1),
  // -> info("tokens")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(341, 10),
  POS(340, 7),
  POS(338, 3),
  POS(342, 3),
  POS(343, 24),
  POS(343, 42),
  POS(343, 3),
  POS(347, 23),
  POS(344, 20),
  POS(344, 3),
  POS(351, 3),
  POS(352, 3),
  POS(353, 3),
  POS(354, 6),
  POS(354, 3)
};

static TAB_NUM t_func_ai_types__model___ai__detokenize[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 358_0_model
  var_359_0_token_or_list,
  // $pieces ai::pieces_of(model)
  var_ai__pieces_of, 1, LOCAL(2), 1, var_361_1_pieces,
  // is_a_list
  var_is_a_list, 1, var_359_0_token_or_list, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_44, lambda_45, TAIL_CALL,
  POS(361, 3),
  POS(363, 19),
  POS(362, 3)
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  0, // parameters
  // map_reduce(token_or_list token_to_piece append "")
  var_map_reduce, 4, var_359_0_token_or_list, func_token_to_piece, var_append, string_4, 1, LOCAL(1),
  //  map_reduce(token_or_list token_to_piece append "")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(364, 8),
  POS(364, 7)
};

static TAB_NUM t_lambda_45[] = {
  1, // locals
  0, // parameters
  // token_to_piece(token_or_list)
  func_token_to_piece, 1, var_359_0_token_or_list, 1, LOCAL(1),
  //  token_to_piece(token_or_list)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(366, 8),
  POS(366, 7)
};

static TAB_NUM t_func_token_to_piece[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 368_18_token
  // token+1)
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(1),
  // $piece pieces(token+1)
  var_361_1_pieces, 1, LOCAL(1), 1, var_369_1_piece,
  // any_of(piece: (chr) -> chr == '@0x142;')
  var_any_of, 2, var_369_1_piece, lambda_any_ofpiece, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_46, lambda_47, TAIL_CALL,
  POS(369, 19),
  POS(369, 5),
  POS(371, 7),
  POS(370, 5)
};

static TAB_NUM t_lambda_any_ofpiece[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 371_15_chr
  // chr == '@0x142;')
  var_std__equal, 2, LOCAL(2), chr_322, 1, LOCAL(1),
  // -> chr == '@0x142;')
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(371, 30),
  POS(371, 27)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  //  "<???>" # 'ÃÂÃÂ' cannot be printed - why?
  LET, 1, string_9, TAIL_CALL,
  POS(372, 9)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  //  piece
  LET, 1, var_369_1_piece, TAIL_CALL,
  POS(373, 9)
};

static TAB_NUM t_func_build_piece_table[] = {
  0, // locals
  1, // parameters
  var_375_21_model,
  // $pieces ai::pieces_of(model)
  var_ai__pieces_of, 1, var_375_21_model, 1, var_376_1_pieces,
  // $piece_table empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_377_1_piece_table,
  // for_each pieces
  var_for_each, 3, var_376_1_pieces, lambda_48, lambda_50, TAIL_CALL,
  POS(376, 3),
  POS(377, 3),
  POS(378, 3)
};

static TAB_NUM t_lambda_48[] = {
  1, // locals
  2, // parameters
  var_379_3_idx,
  var_379_7_piece,
  // is_empty
  var_is_empty, 1, var_379_7_piece, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_49, TAIL_CALL,
  POS(381, 15),
  POS(380, 7)
};

static TAB_NUM t_lambda_49[] = {
  2, // locals
  0, // parameters
  // !piece_table(piece) idx-1
  var_std__minus, 2, var_379_3_idx, num_1, 1, LOCAL(2),
  // piece_table(piece) idx-1
  var_377_1_piece_table, 2, var_379_7_piece, LOCAL(2), 1, var_377_1_piece_table,
  // next
  var_next, 0, TAIL_CALL,
  POS(384, 11),
  POS(384, 12),
  POS(385, 11)
};

static TAB_NUM t_lambda_50[] = {
  2, // locals
  0, // parameters
  // map_reduce(pieces length_of max)
  var_map_reduce, 3, var_376_1_pieces, var_length_of, var_max, 1, LOCAL(1),
  // model
  LET, -2, var_375_21_model, var_ai__piece_table_of, var_377_1_piece_table, var_ai__maximum_piece_length_of, LOCAL(1), LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(389, 38),
  POS(387, 7),
  POS(386, 7)
};

static TAB_NUM t_func_get_tokens[] = {
  7, // locals
  0, // parameters
  // insert_order_table
  var_insert_order_table, 1, key_value_pair_395_1, 1, LOCAL(2),
  // $json
  var_to_json, 1, LOCAL(2), 1, LOCAL(4),
  // open_tcp_socket! $fd "127.0.0.1" 8080
  var_open_tcp_socket, 2, string_1, num_8080, IO_CALL(1), LOCAL(5),
  // length_of(json))@cr;
  var_length_of, 1, LOCAL(4), 1, LOCAL(1),
  // "
  var_std__string, 5, str_POST_get_tokens, LOCAL(1), str_Connection_close, LOCAL(4), string_2, 1, LOCAL(2),
  // print_to! fd "
  var_print_to, 2, LOCAL(5), LOCAL(2), IO_CALL(0),
  // load! $result fd
  var_load, 1, LOCAL(5), IO_CALL(1), LOCAL(6),
  // behind &result "@cr;@nl;@cr;@nl;"
  var_behind, 2, LOCAL(6), string_3, 1, LOCAL(6),
  // from_utf8 &result
  var_from_utf8, 1, LOCAL(6), 1, LOCAL(6),
  // $info result.from_json
  var_from_json, 1, LOCAL(6), 1, LOCAL(7),
  // info("tokens") info("begin_of_stream") info("end_of_stream")
  LOCAL(7), 1, str_tokens, 1, LOCAL(1),
  // info("begin_of_stream") info("end_of_stream")
  LOCAL(7), 1, str_begin_of_stream, 1, LOCAL(2),
  // info("end_of_stream")
  LOCAL(7), 1, str_end_of_stream_2, 1, LOCAL(3),
  // -> info("tokens") info("begin_of_stream") info("end_of_stream")
  LET, 3, LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(394, 7),
  POS(392, 3),
  POS(396, 3),
  POS(400, 23),
  POS(397, 16),
  POS(397, 3),
  POS(404, 3),
  POS(405, 3),
  POS(406, 3),
  POS(407, 3),
  POS(408, 6),
  POS(408, 21),
  POS(408, 45),
  POS(408, 3)
};

static TAB_NUM t_func_quoted[] = {
  0, // locals
  1, // parameters
  var_410_10_text,
  // $buf ""
  LET, 1, string_4, 1, var_411_1_buf,
  // $s 1
  LET, 1, num_1, 1, var_412_1_s,
  // $n length_of(text)
  var_length_of, 1, var_410_10_text, 1, var_413_1_n,
  // $i 0
  LET, 1, num_0, 1, var_414_1_i,
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(411, 3),
  POS(412, 3),
  POS(413, 3),
  POS(414, 3),
  POS(415, 3)
};

static TAB_NUM t_lambda_2_loop[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_414_1_i, 1, var_414_1_i,
  // n
  var_std__less, 2, var_413_1_n, var_414_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_51, lambda_52, TAIL_CALL,
  POS(416, 5),
  POS(418, 11),
  POS(417, 5)
};

static TAB_NUM t_lambda_51[] = {
  2, // locals
  0, // parameters
  // range(text s n))
  var_range, 3, var_410_10_text, var_412_1_s, var_413_1_n, 1, LOCAL(1),
  // append(buf range(text s n))
  var_append, 2, var_411_1_buf, LOCAL(1), 1, LOCAL(2),
  //  append(buf range(text s n))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(419, 21),
  POS(419, 10),
  POS(419, 9)
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  // $chr text(i)
  var_410_10_text, 1, var_414_1_i, 1, var_421_1_chr,
  // case chr
  var_case, 6, var_421_1_chr, chr_10, lambda_nl, sequence_428_2, lambda_53, var_next, TAIL_CALL,
  POS(421, 9),
  POS(422, 9)
};

static TAB_NUM t_lambda_nl[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_414_1_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_410_10_text, var_412_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(text s i-1)
  var_append, 2, var_411_1_buf, LOCAL(2), 1, var_411_1_buf,
  // append &buf "\n"
  var_append, 2, var_411_1_buf, str_n, 1, var_411_1_buf,
  // !s i+1
  var_std__plus, 2, var_414_1_i, num_1, 1, var_412_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(424, 38),
  POS(424, 25),
  POS(424, 13),
  POS(425, 13),
  POS(426, 13),
  POS(427, 13)
};

static TAB_NUM t_lambda_53[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_414_1_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_410_10_text, var_412_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(text s i-1)
  var_append, 2, var_411_1_buf, LOCAL(2), 1, var_411_1_buf,
  // push &buf '\'
  var_push, 2, var_411_1_buf, chr_92, 1, var_411_1_buf,
  // push &buf chr
  var_push, 2, var_411_1_buf, var_421_1_chr, 1, var_411_1_buf,
  // !s i+1
  var_std__plus, 2, var_414_1_i, num_1, 1, var_412_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(429, 38),
  POS(429, 25),
  POS(429, 13),
  POS(430, 13),
  POS(431, 13),
  POS(432, 13),
  POS(433, 13)
};

static int key_value_pair_165_1_arguments[] = {
  -str_n_probs, -num_10
};

static int key_value_pair_166_1_arguments[] = {
  -str_n_predict, -num_1
};

static int key_value_pair_395_1_arguments[] = {
  -str_model, -str_dummy
};

static int sequence_428_2_arguments[] = {
  -chr_34, -chr_92
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_UNIQUE, 0, {.str_8 = "ai::MINIMUM_CONFIDENCE"}},
  {FLT_UNIQUE, 0, {.str_8 = "ai::MAXIMUM_LENGTH"}},
  {FLT_UNIQUE, 0, {.str_8 = "ai::BACKTRACK"}},
  {FLT_UNIQUE, 0, {.str_8 = "ai::LOG_LEVEL"}},
  {FLT_UNIQUE, 0, {.str_8 = "ai::VERBOSE"}},
  {FLT_UNIQUE, 0, {.str_8 = "ai::USE_COLOURS"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai__load_ai_model}},
  {FLT_STRING_8, 9, {.str_8 = "127.0.0.1"}},
  {FLT_POSITIVE_INT64, 0, {.value = 8080}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai_types__model___ai__evaluate}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_STRING_8, 6, {.str_8 = "tokens"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_STRING_8, 6, {.str_8 = "prompt"}},
  {FLT_STRING_8, 6, {.str_8 = "logits"}},
  {FLT_STRING_8, 5, {.str_8 = "brief"}},
  {FLT_STRING_8, 7, {.str_8 = "n_probs"}},
  {FLT_POSITIVE_INT64, 0, {.value = 10}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_165_1_arguments}},
  {FLT_STRING_8, 9, {.str_8 = "n_predict"}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_166_1_arguments}},
  {FLT_STRING_8, 75, {.str_8 = "POST /completion HTTP/1.1\015\012Content-Type: application/json\015\012Content-Length: "}},
  {FLT_STRING_8, 23, {.str_8 = "\015\012Connection: close\015\012\015\012"}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_STRING_8, 4, {.str_8 = "\015\012\015\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_return_confidence_values}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_STRING_8, 5, {.str_8 = "token"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_STRING_8, 7, {.str_8 = "content"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai_types__model___ai__generate}},
  {FLT_POSITIVE_INT64, 0, {.value = 15}},
  {FLT_POSITIVE_INT64, 0, {.value = 1024}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_generate_text}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_STRING_8, 15, {.str_8 = "<end of stream>"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_POSITIVE_INT64, 0, {.value = 1000}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_STRING_8, 1, {.str_8 = "\042"}},
  {FLT_STRING_8, 2, {.str_8 = "\042:"}},
  {FLT_STRING_8, 19, {.str_8 = "[%4|%3.1] %l18 %3.3"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_STRING_8, 23, {.str_8 = "-[%4|%3.1]-------------"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_STRING_8, 9, {.str_8 = "%l18 %3.3"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_POSITIVE_INT64, 0, {.value = 5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_response_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_STRING_8, 3, {.str_8 = "\010 \010"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_print_piece}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai_types__model___ai__tokenize}},
  {FLT_STRING_8, 73, {.str_8 = "POST /tokenize HTTP/1.1\015\012Content-Type: application/json\015\012Content-Length: "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai_types__model___ai__detokenize}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_token_to_piece}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_any_ofpiece}},
  {FLT_CHARACTER, 0, {.value = 322}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_STRING_8, 5, {.str_8 = "<???>"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_build_piece_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_get_tokens}},
  {FLT_STRING_8, 5, {.str_8 = "model"}},
  {FLT_STRING_8, 5, {.str_8 = "dummy"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_395_1_arguments}},
  {FLT_STRING_8, 75, {.str_8 = "POST /get_tokens HTTP/1.1\015\012Content-Type: application/json\015\012Content-Length: "}},
  {FLT_STRING_8, 15, {.str_8 = "begin_of_stream"}},
  {FLT_STRING_8, 13, {.str_8 = "end_of_stream"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_quoted}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_CHARACTER, 0, {.value = 92}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_428_2_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_nl}},
  {FLT_STRING_8, 2, {.str_8 = "\134n"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}}
};

static ATTRIBUTE_DEFINITION ai_types__model__attributes[] = {
  {var_ai__evaluate, -func_ai_types__model___ai__evaluate},
  {var_ai__generate, -func_ai_types__model___ai__generate},
  {var_ai__tokenize, -func_ai_types__model___ai__tokenize},
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
    {.position = POS(107, 18)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "load_ai_model\000ai", NULL,
    {.const_idx = -func_ai__load_ai_model}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "name_of\000", NULL,
    {.position = POS(123, 8)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "address_of\000", NULL,
    {.position = POS(124, 8)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "port_no_of\000", NULL,
    {.position = POS(125, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "121_1_model\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(131, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(130, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(152, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(152, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(153, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "153_1_use_tokens\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(153, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value_pair\000std", NULL,
    {.position = POS(162, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(163, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "insert_order_table\000", NULL,
    {.position = POS(161, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_json\000", NULL,
    {.position = POS(160, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(167, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open_tcp_socket\000", NULL,
    {.position = POS(168, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(172, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(169, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write_all_to\000", NULL,
    {.position = POS(169, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "load\000", NULL,
    {.position = POS(176, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "behind\000", NULL,
    {.position = POS(177, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "178_1_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_json\000", NULL,
    {.position = POS(178, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "181_1_logits\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(182, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(182, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "195_0_model\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(204, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "200_29_minimum_confidence\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "201_27_maximum_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "202_19_backtrack\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "203_19_log_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "204_21_be_verbose\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "205_25_use_colours\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "extract_options\000", NULL,
    {.position = POS(199, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "206_1_do_log\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(206, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(207, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "BLACK\000", NULL,
    {.position = POS(208, 43)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ansi_text_colour\000", NULL,
    {.position = POS(208, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print\000", NULL,
    {.position = POS(208, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(208, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "put\000", NULL,
    {.position = POS(211, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ansi_reset_colour\000", NULL,
    {.position = POS(212, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "println\000", NULL,
    {.position = POS(213, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "216_17_tokens\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "216_24_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "216_29_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "217_1_t\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_time\000", NULL,
    {.position = POS(217, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "218_28_next_token\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "218_40_confidence_values\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprintln\000", NULL,
    {.position = POS(222, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "225_1_max_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "227_34_next_confidence\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "228_1_next_piece\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(230, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "230_1_dt\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(230, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(232, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "format\000", NULL,
    {.position = POS(235, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(246, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(247, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(240, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(249, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim_left\000", NULL,
    {.position = POS(250, 46)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(254, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(257, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(259, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "256_16_response\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "extend_to\000", NULL,
    {.position = POS(260, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(262, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dup\000", NULL,
    {.position = POS(274, 38)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(276, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(226, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "281_15_piece\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "281_21_confidence\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "283_1_confidence_delta\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "negate\000std", NULL,
    {.position = POS(288, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "RED\000", NULL,
    {.position = POS(289, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "colour_mixture\000", NULL,
    {.position = POS(287, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "GREEN\000", NULL,
    {.position = POS(292, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WHITE\000", NULL,
    {.position = POS(293, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(285, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ansi_background_colour\000", NULL,
    {.position = POS(298, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "359_0_token_or_list\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "361_1_pieces\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(363, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(364, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "369_1_piece\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(371, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "375_21_model\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "376_1_pieces\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "377_1_piece_table\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(377, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "379_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "379_7_piece\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(389, 66)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print_to\000", NULL,
    {.position = POS(397, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_utf8\000", NULL,
    {.position = POS(406, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "410_10_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "411_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "412_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "413_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "414_1_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(416, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "421_1_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(428, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(422, 9)}
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
  123, // number of constants
  131, // number of variables
  NULL, // required modules
  defined_namespaces,
  used_namespaces,
  constants_table,
  variables_table,
};
