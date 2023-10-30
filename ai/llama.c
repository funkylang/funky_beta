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
  str_wizardvicuna13bQ = -8,
  string_1 = -9,
  num_8080 = -10,
  lambda_1 = -11,
  lambda_2 = -12,
  func_ai_types__model___ai__evaluate = -13,
  num_2 = -14,
  lambda_3 = -15,
  str_tokens = -16,
  lambda_4 = -17,
  str_prompt = -18,
  str_logits = -19,
  str_brief = -20,
  str_n_probs = -21,
  num_10 = -22,
  key_value_pair_158_1 = -23,
  str_n_predict = -24,
  num_1 = -25,
  key_value_pair_159_1 = -26,
  str_POST_completion = -27,
  str_Connection_close = -28,
  string_2 = -29,
  string_3 = -30,
  lambda_do_return_confidence_values = -31,
  lambda_5 = -32,
  lambda_6 = -33,
  str_token = -34,
  lambda_7 = -35,
  str_content = -36,
  lambda_8 = -37,
  lambda_9 = -38,
  lambda_10 = -39,
  func_ai_types__model___ai__generate = -40,
  num_15 = -41,
  num_1024 = -42,
  num_0 = -43,
  lambda_11 = -44,
  lambda_12 = -45,
  string_4 = -46,
  lambda_13 = -47,
  lambda_14 = -48,
  func_generate_text = -49,
  lambda_15 = -50,
  lambda_16 = -51,
  lambda_loop = -52,
  lambda_17 = -53,
  num_1000 = -54,
  lambda_18 = -55,
  string_5 = -56,
  string_6 = -57,
  str_431_l = -58,
  lambda_19 = -59,
  string_7 = -60,
  lambda_20 = -61,
  str_l = -62,
  lambda_21 = -63,
  num_5 = -64,
  lambda_22 = -65,
  lambda_23 = -66,
  lambda_24 = -67,
  lambda_25 = -68,
  lambda_26 = -69,
  lambda_27 = -70,
  lambda_28 = -71,
  lambda_29 = -72,
  string_8 = -73,
  lambda_30 = -74,
  minus_num_1 = -75,
  lambda_31 = -76,
  lambda_32 = -77,
  func_print_piece = -78,
  lambda_33 = -79,
  lambda_34 = -80,
  lambda_35 = -81,
  str_minimum_confiden = -82,
  str_confidence_delta = -83,
  lambda_36 = -84,
  lambda_37 = -85,
  lambda_38 = -86,
  lambda_39 = -87,
  lambda_40 = -88,
  func_ai_types__model___ai__tokenize = -89,
  str_POST_tokenize_HT = -90,
  func_ai_types__model___ai__detokenize = -91,
  lambda_41 = -92,
  lambda_42 = -93,
  func_token_to_piece = -94,
  lambda_any_ofpiece = -95,
  chr_322 = -96,
  lambda_43 = -97,
  string_9 = -98,
  lambda_44 = -99,
  func_get_tokens = -100,
  str_model = -101,
  str_dummy = -102,
  key_value_pair_336_1 = -103,
  str_POST_get_tokens = -104,
  str_begin_of_stream = -105,
  str_end_of_stream = -106,
  func_quoted = -107,
  lambda_2_loop = -108,
  lambda_45 = -109,
  lambda_46 = -110,
  chr_34 = -111,
  chr_92 = -112,
  sequence_369_2 = -113,
  chr_10 = -114,
  lambda_nl = -115,
  str_n = -116,
  lambda_47 = -117
};

enum {
  var__START = FIRST_VAR-1,
  var_ai__pieces_of, // attribute
  var_std__assign, // extern
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
  var_115_1_model, // dynamic
  var_is_an_error, // extern
  var_if, // extern
  var_result_count, // extern
  var_std__equal, // extern
  var_is_a_string, // extern
  var_146_1_use_tokens, // dynamic
  var_not, // extern
  var_std__key_value_pair, // extern
  var_true, // extern
  var_insert_order_table, // extern
  var_to_json, // extern
  var_to_utf8, // extern
  var_open_tcp_socket, // extern
  var_length_of, // extern
  var_std__string, // extern
  var_print_to, // extern
  var_load, // extern
  var_behind, // extern
  var_171_1_info, // dynamic
  var_from_json, // extern
  var_174_1_logits, // dynamic
  var_tuple, // extern
  var_map, // extern
  var_188_0_model, // dynamic
  var_false, // extern
  var_193_29_minimum_confidence, // dynamic
  var_194_27_maximum_length, // dynamic
  var_195_19_backtrack, // dynamic
  var_196_19_log_level, // dynamic
  var_197_21_be_verbose, // dynamic
  var_198_25_use_colours, // dynamic
  var_extract_options, // extern
  var_199_1_do_log, // dynamic
  var_std__less, // extern
  var_update_if, // extern
  var_BLACK, // extern
  var_ansi_text_colour, // extern
  var_print, // extern
  var_on, // extern
  var_put, // extern
  var_ansi_reset_colour, // extern
  var_println, // extern
  var_209_17_tokens, // dynamic
  var_209_24_text, // dynamic
  var_209_29_no, // dynamic
  var_210_1_t, // dynamic
  var_current_time, // extern
  var_211_28_next_token, // dynamic
  var_211_40_confidence_values, // dynamic
  var_216_1_max_no, // dynamic
  var_218_34_next_confidence, // dynamic
  var_219_1_next_piece, // dynamic
  var_std__minus, // extern
  var_221_1_dt, // dynamic
  var_std__times, // extern
  var_std__not, // extern
  var_format, // extern
  var_eprintln, // extern
  var_next, // extern
  var_pass, // extern
  var_for_each, // extern
  var_std__or, // extern
  var_trim_left, // extern
  var_append, // extern
  var_push, // extern
  var_std__plus, // extern
  var_247_16_response, // dynamic
  var_extend_to, // extern
  var_is_empty, // extern
  var_std__and, // extern
  var_dup, // extern
  var_range, // extern
  var_loop, // extern
  var_266_15_piece, // dynamic
  var_266_21_confidence, // dynamic
  var_268_1_confidence_delta, // dynamic
  var_edump, // extern
  var_std__negate, // extern
  var_RED, // extern
  var_colour_mixture, // extern
  var_GREEN, // extern
  var_WHITE, // extern
  var_cond, // extern
  var_ansi_background_colour, // extern
  var_316_0_token_or_list, // dynamic
  var_318_1_pieces, // dynamic
  var_is_a_list, // extern
  var_map_reduce, // extern
  var_326_1_piece, // dynamic
  var_any_of, // extern
  var_from_utf8, // extern
  var_351_10_text, // dynamic
  var_352_1_buf, // dynamic
  var_353_1_s, // dynamic
  var_354_1_n, // dynamic
  var_355_1_i, // dynamic
  var_inc, // extern
  var_362_1_chr, // dynamic
  var_std__sequence, // extern
  var_case, // extern
  var__END
};


static TAB_NUM t_func_ai__load_ai_model[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 113_0_name
  // $model
  LET, -3, var_ai_types__model, var_name_of, str_wizardvicuna13bQ, var_address_of, string_1, var_port_no_of, num_8080, var_115_1_model,
  // get_tokens!
  func_get_tokens, 0, IO_CALL(3), LOCAL(1), LOCAL(2), LOCAL(3),
  // model.ai::pieces_of
  LET, -1, var_115_1_model, var_ai__pieces_of, LOCAL(1), var_115_1_model,
  // model.ai::begin_of_stream_token_of
  LET, -1, var_115_1_model, var_ai__begin_of_stream_token_of, LOCAL(2), var_115_1_model,
  // model.ai::end_of_stream_token_of
  LET, -1, var_115_1_model, var_ai__end_of_stream_token_of, LOCAL(3), var_115_1_model,
  // ai::pieces_of(model).is_an_error
  var_ai__pieces_of, 1, var_115_1_model, 1, LOCAL(1),
  // is_an_error
  var_is_an_error, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1, lambda_2, TAIL_CALL,
  POS(115, 3),
  POS(120, 3),
  POS(121, 6),
  POS(122, 6),
  POS(123, 6),
  POS(125, 5),
  POS(125, 26),
  POS(124, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // ai::pieces_of(model)
  var_ai__pieces_of, 1, var_115_1_model, 1, LOCAL(1),
  //  ai::pieces_of(model)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(126, 8),
  POS(126, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  model
  LET, 1, var_115_1_model, TAIL_CALL,
  POS(127, 7)
};

static TAB_NUM t_func_ai_types__model___ai__evaluate[] = {
  13, // locals
  2, // parameters
  LOCAL(7), // 142_0_self
  LOCAL(8), // 143_0_prompt
  // result_count() == 2
  var_result_count, 0, 1, LOCAL(1),
  // $do_return_confidence_values result_count() == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(9),
  // is_a_string)
  var_is_a_string, 1, LOCAL(8), 1, LOCAL(1),
  // $use_tokens not(prompt.is_a_string)
  var_not, 1, LOCAL(1), 1, var_146_1_use_tokens,
  // $PROMPT
  var_if, 3, var_146_1_use_tokens, lambda_3, lambda_4, 1, LOCAL(10),
  // PROMPT = prompt
  var_std__key_value_pair, 2, LOCAL(10), LOCAL(8), 1, LOCAL(1),
  // logits" = true # also disables server side token selection
  var_std__key_value_pair, 2, str_logits, var_true, 1, LOCAL(2),
  // brief" = true
  var_std__key_value_pair, 2, str_brief, var_true, 1, LOCAL(3),
  // insert_order_table
  var_insert_order_table, 5, LOCAL(1), LOCAL(2), LOCAL(3), key_value_pair_158_1, key_value_pair_159_1, 1, LOCAL(6),
  // $json
  var_to_json, 1, LOCAL(6), 1, LOCAL(11),
  // to_utf8 &json
  var_to_utf8, 1, LOCAL(11), 1, LOCAL(11),
  // open_tcp_socket! $fd "127.0.0.1" 8080
  var_open_tcp_socket, 2, string_1, num_8080, IO_CALL(1), LOCAL(12),
  // length_of(json))@cr;
  var_length_of, 1, LOCAL(11), 1, LOCAL(1),
  // "
  var_std__string, 5, str_POST_completion, LOCAL(1), str_Connection_close, LOCAL(11), string_2, 1, LOCAL(2),
  // print_to! fd "
  var_print_to, 2, LOCAL(12), LOCAL(2), IO_CALL(0),
  // load! $result fd
  var_load, 1, LOCAL(12), IO_CALL(1), LOCAL(13),
  // behind &result "@cr;@nl;@cr;@nl;"
  var_behind, 2, LOCAL(13), string_3, 1, LOCAL(13),
  // $info result.from_json
  var_from_json, 1, LOCAL(13), 1, var_171_1_info,
  // if
  var_if, 3, LOCAL(9), lambda_do_return_confidence_values, lambda_8, TAIL_CALL,
  POS(145, 32),
  POS(145, 3),
  POS(146, 26),
  POS(146, 3),
  POS(147, 3),
  POS(155, 9),
  POS(156, 10),
  POS(157, 10),
  POS(154, 7),
  POS(152, 3),
  POS(160, 3),
  POS(161, 3),
  POS(165, 23),
  POS(162, 16),
  POS(162, 3),
  POS(169, 3),
  POS(170, 3),
  POS(171, 3),
  POS(172, 3)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  "tokens"
  LET, 1, str_tokens, TAIL_CALL,
  POS(150, 9)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  "prompt"
  LET, 1, str_prompt, TAIL_CALL,
  POS(151, 9)
};

static TAB_NUM t_lambda_do_return_confidence_values[] = {
  0, // locals
  0, // parameters
  // $logits info("logits")
  var_171_1_info, 1, str_logits, 1, var_174_1_logits,
  // map &logits: (logit) tuple logit(1) logit(2)
  var_map, 2, var_174_1_logits, lambda_5, 1, var_174_1_logits,
  // if
  var_if, 3, var_146_1_use_tokens, lambda_6, lambda_7, TAIL_CALL,
  POS(174, 7),
  POS(175, 7),
  POS(176, 7)
};

static TAB_NUM t_lambda_5[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 175_14_logit
  // logit(1) logit(2)
  LOCAL(3), 1, num_1, 1, LOCAL(1),
  // logit(2)
  LOCAL(3), 1, num_2, 1, LOCAL(2),
  // tuple logit(1) logit(2)
  var_tuple, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(175, 34),
  POS(175, 43),
  POS(175, 28)
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // info("token") logits
  var_171_1_info, 1, str_token, 1, LOCAL(1),
  //  info("token") logits
  LET, 2, LOCAL(1), var_174_1_logits, TAIL_CALL,
  POS(178, 12),
  POS(178, 11)
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // info("content") logits
  var_171_1_info, 1, str_content, 1, LOCAL(1),
  //  info("content") logits
  LET, 2, LOCAL(1), var_174_1_logits, TAIL_CALL,
  POS(179, 12),
  POS(179, 11)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_146_1_use_tokens, lambda_9, lambda_10, TAIL_CALL,
  POS(181, 7)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // info("token")
  var_171_1_info, 1, str_token, 1, LOCAL(1),
  //  info("token")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(183, 12),
  POS(183, 11)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // info("content")
  var_171_1_info, 1, str_content, 1, LOCAL(1),
  //  info("content")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(184, 12),
  POS(184, 11)
};

static TAB_NUM t_func_ai_types__model___ai__generate[] = {
  10, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_188_0_model,
  REST_PARAMETER, LOCAL(7), // 189_0_options
  MANDATORY_PARAMETER, LOCAL(8), // 190_0_prompt
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
  var_extract_options, 7, LOCAL(7), LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), 6, var_193_29_minimum_confidence, var_194_27_maximum_length, var_195_19_backtrack, var_196_19_log_level, var_197_21_be_verbose, var_198_25_use_colours,
  // $do_log log_level > 0
  var_std__less, 2, num_0, var_196_19_log_level, 1, var_199_1_do_log,
  // update_if use_colours &be_verbose -> true
  var_update_if, 3, var_198_25_use_colours, var_197_21_be_verbose, lambda_11, 1, var_197_21_be_verbose,
  // on use_colours: print! ansi_text_colour(BLACK)
  var_on, 2, var_198_25_use_colours, lambda_12, IO_CALL(0),
  // ai::tokenize! $tokens model prompt
  var_ai__tokenize, 2, var_188_0_model, LOCAL(8), IO_CALL(1), LOCAL(9),
  // ai::begin_of_stream_token_of(model)) "" 0
  var_ai__begin_of_stream_token_of, 1, var_188_0_model, 1, LOCAL(1),
  // put(tokens ai::begin_of_stream_token_of(model)) "" 0
  var_put, 2, LOCAL(9), LOCAL(1), 1, LOCAL(2),
  // generate_text! $text $_max_no
  func_generate_text, 3, LOCAL(2), string_4, num_0, IO_CALL(2), LOCAL(10), LOCAL(1),
  // on use_colours: print! ansi_reset_colour()
  var_on, 2, var_198_25_use_colours, lambda_13, IO_CALL(0),
  // on be_verbose: println!
  var_on, 2, var_197_21_be_verbose, lambda_14, IO_CALL(0),
  // -> text
  LET, 1, LOCAL(10), TAIL_CALL,
  POS(193, 5),
  POS(194, 5),
  POS(195, 5),
  POS(196, 5),
  POS(197, 5),
  POS(198, 5),
  POS(192, 3),
  POS(199, 3),
  POS(200, 3),
  POS(201, 3),
  POS(202, 3),
  POS(204, 16),
  POS(204, 5),
  POS(203, 3),
  POS(205, 3),
  POS(206, 3),
  POS(207, 3)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(200, 39)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // ansi_text_colour(BLACK)
  var_ansi_text_colour, 1, var_BLACK, 1, LOCAL(1),
  // print! ansi_text_colour(BLACK)
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(201, 26),
  POS(201, 19)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // ansi_reset_colour()
  var_ansi_reset_colour, 0, 1, LOCAL(1),
  // print! ansi_reset_colour()
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(205, 26),
  POS(205, 19)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  // println!
  var_println, 0, IO_TAIL_CALL,
  POS(206, 18)
};

static TAB_NUM t_func_generate_text[] = {
  2, // locals
  3, // parameters
  var_209_17_tokens,
  var_209_24_text,
  var_209_29_no,
  // $t current_time()
  var_current_time, 0, 1, var_210_1_t,
  // ai::evaluate! model tokens $next_token $confidence_values
  var_ai__evaluate, 2, var_188_0_model, var_209_17_tokens, IO_CALL(2), var_211_28_next_token, var_211_40_confidence_values,
  // ai::end_of_stream_token_of(model)
  var_ai__end_of_stream_token_of, 1, var_188_0_model, 1, LOCAL(1),
  // next_token == ai::end_of_stream_token_of(model)
  var_std__equal, 2, var_211_28_next_token, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_15, lambda_16, IO_TAIL_CALL,
  POS(210, 5),
  POS(211, 5),
  POS(213, 21),
  POS(213, 7),
  POS(212, 5)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  //  text no
  LET, 2, var_209_24_text, var_209_29_no, TAIL_CALL,
  POS(214, 9)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  // $max_no no
  LET, 1, var_209_29_no, 1, var_216_1_max_no,
  // loop:
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(216, 9),
  POS(217, 9)
};

static TAB_NUM t_lambda_loop[] = {
  3, // locals
  0, // parameters
  // confidence_values(1) !next_token $next_confidence
  var_211_40_confidence_values, 1, num_1, 1, LOCAL(1),
  // confidence_values(1) !next_token $next_confidence
  LOCAL(1), 0, 2, var_211_28_next_token, var_218_34_next_confidence,
  // $next_piece ai::detokenize(model next_token)
  var_ai__detokenize, 2, var_188_0_model, var_211_28_next_token, 1, var_219_1_next_piece,
  // on do_log:
  var_on, 2, var_199_1_do_log, lambda_17, IO_CALL(0),
  // next_confidence >= minimum_confidence || no < 5:
  var_std__less, 2, var_218_34_next_confidence, var_193_29_minimum_confidence, 1, LOCAL(1),
  // next_confidence >= minimum_confidence || no < 5:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_confidence >= minimum_confidence || no < 5:
  var_std__or, 2, LOCAL(2), lambda_21, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_22, lambda_32, IO_TAIL_CALL,
  POS(218, 11),
  POS(218, 11),
  POS(219, 11),
  POS(220, 11),
  POS(240, 13),
  POS(240, 13),
  POS(240, 13),
  POS(239, 11)
};

static TAB_NUM t_lambda_17[] = {
  2, // locals
  0, // parameters
  // current_time()-t) # in ms
  var_current_time, 0, 1, LOCAL(1),
  // current_time()-t) # in ms
  var_std__minus, 2, LOCAL(1), var_210_1_t, 1, LOCAL(2),
  // $dt 1000*(current_time()-t) # in ms
  var_std__times, 2, num_1000, LOCAL(2), 1, var_221_1_dt,
  // 1:
  var_std__less, 2, num_1, var_196_19_log_level, 1, LOCAL(1),
  // 1:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_18, lambda_19, IO_TAIL_CALL,
  POS(221, 23),
  POS(221, 23),
  POS(221, 13),
  POS(223, 28),
  POS(223, 28),
  POS(222, 13)
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  0, // parameters
  // quoted(next_piece))@quot;:"
  func_quoted, 1, var_219_1_next_piece, 1, LOCAL(1),
  // $token_string "@quot;@(quoted(next_piece))@quot;:"
  var_std__string, 3, string_5, LOCAL(1), string_6, 1, LOCAL(2),
  // format
  var_format, 5, str_431_l, var_209_29_no, var_221_1_dt, LOCAL(2), var_218_34_next_confidence, 1, LOCAL(1),
  // eprintln!
  var_eprintln, 1, LOCAL(1), IO_TAIL_CALL,
  POS(224, 40),
  POS(224, 17),
  POS(226, 19),
  POS(225, 17)
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // format("-[%4|%3.1]-------------" no dt)
  var_format, 3, string_7, var_209_29_no, var_221_1_dt, 1, LOCAL(1),
  // eprintln! format("-[%4|%3.1]-------------" no dt)
  var_eprintln, 1, LOCAL(1), IO_CALL(0),
  // for_each confidence_values
  var_for_each, 3, var_211_40_confidence_values, lambda_20, var_pass, IO_TAIL_CALL,
  POS(230, 27),
  POS(230, 17),
  POS(231, 17)
};

static TAB_NUM t_lambda_20[] = {
  6, // locals
  1, // parameters
  LOCAL(2), // 232_3_confidence_value
  // confidence_value $token $confidence
  LOCAL(2), 0, 2, LOCAL(3), LOCAL(4),
  // $piece ai::detokenize(model token)
  var_ai__detokenize, 2, var_188_0_model, LOCAL(3), 1, LOCAL(5),
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
  POS(233, 21),
  POS(234, 21),
  POS(235, 44),
  POS(235, 21),
  POS(236, 31),
  POS(236, 21),
  POS(237, 21)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // no < 5:
  var_std__less, 2, var_209_29_no, num_5, 1, LOCAL(1),
  // no < 5:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(240, 54),
  POS(240, 54)
};

static TAB_NUM t_lambda_22[] = {
  2, // locals
  0, // parameters
  // no == 0 &next_piece: trim_left next_piece
  var_std__equal, 2, var_209_29_no, num_0, 1, LOCAL(1),
  // update_if no == 0 &next_piece: trim_left next_piece
  var_update_if, 3, LOCAL(1), var_219_1_next_piece, lambda_23, 1, var_219_1_next_piece,
  // print_piece! next_piece next_confidence
  func_print_piece, 2, var_219_1_next_piece, var_218_34_next_confidence, IO_CALL(0),
  // no >= maximum_length
  var_std__less, 2, var_209_29_no, var_194_27_maximum_length, 1, LOCAL(1),
  // no >= maximum_length
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_24, lambda_25, IO_TAIL_CALL,
  POS(241, 25),
  POS(241, 15),
  POS(242, 15),
  POS(244, 17),
  POS(244, 17),
  POS(243, 15)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  // trim_left next_piece
  var_trim_left, 1, var_219_1_next_piece, TAIL_CALL,
  POS(241, 46)
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  0, // parameters
  // append(text next_piece) no
  var_append, 2, var_209_24_text, var_219_1_next_piece, 1, LOCAL(1),
  //  append(text next_piece) no
  LET, 2, LOCAL(1), var_209_29_no, TAIL_CALL,
  POS(245, 20),
  POS(245, 19)
};

static TAB_NUM t_lambda_25[] = {
  4, // locals
  0, // parameters
  // push(tokens next_token)
  var_push, 2, var_209_17_tokens, var_211_28_next_token, 1, LOCAL(1),
  // append(text next_piece)
  var_append, 2, var_209_24_text, var_219_1_next_piece, 1, LOCAL(2),
  // no+1
  var_std__plus, 2, var_209_29_no, num_1, 1, LOCAL(3),
  // generate_text! $response $highest_no
  func_generate_text, 3, LOCAL(1), LOCAL(2), LOCAL(3), IO_CALL(2), var_247_16_response, LOCAL(4),
  // extend_to &max_no highest_no
  var_extend_to, 2, var_216_1_max_no, LOCAL(4), 1, var_216_1_max_no,
  // is_empty
  var_is_empty, 1, var_247_16_response, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_26, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_28, lambda_31, IO_TAIL_CALL,
  POS(248, 21),
  POS(249, 21),
  POS(250, 21),
  POS(247, 19),
  POS(251, 19),
  POS(254, 32),
  POS(253, 23),
  POS(252, 19)
};

static TAB_NUM t_lambda_26[] = {
  4, // locals
  0, // parameters
  // length_of(confidence_values) >= 1
  var_length_of, 1, var_211_40_confidence_values, 1, LOCAL(1),
  // length_of(confidence_values) >= 1
  var_std__less, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // length_of(confidence_values) >= 1
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // 
  var_std__and, 2, LOCAL(3), lambda_27, 1, LOCAL(4),
  // length_of(confidence_values) >= 1
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(255, 23),
  POS(255, 23),
  POS(255, 23),
  POS(253, 23),
  POS(255, 23)
};

static TAB_NUM t_lambda_27[] = {
  3, // locals
  0, // parameters
  // no+backtrack
  var_std__plus, 2, var_209_29_no, var_195_19_backtrack, 1, LOCAL(1),
  // no+backtrack
  var_std__less, 2, LOCAL(1), var_216_1_max_no, 1, LOCAL(2),
  // no+backtrack
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // max_no <= no+backtrack
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(256, 33),
  POS(256, 33),
  POS(256, 33),
  POS(256, 23)
};

static TAB_NUM t_lambda_28[] = {
  2, // locals
  0, // parameters
  // on use_colours: print! ansi_reset_colour()
  var_on, 2, var_198_25_use_colours, lambda_29, IO_CALL(0),
  // length_of(next_piece))
  var_length_of, 1, var_219_1_next_piece, 1, LOCAL(1),
  // dup("@bs; @bs;" length_of(next_piece))
  var_dup, 2, string_8, LOCAL(1), 1, LOCAL(2),
  // print! dup("@bs; @bs;" length_of(next_piece))
  var_print, 1, LOCAL(2), IO_CALL(0),
  // on use_colours: print! ansi_text_colour(BLACK)
  var_on, 2, var_198_25_use_colours, lambda_30, IO_CALL(0),
  // range &confidence_values 2 -1
  var_range, 3, var_211_40_confidence_values, num_2, minus_num_1, 1, var_211_40_confidence_values,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(258, 23),
  POS(259, 46),
  POS(259, 30),
  POS(259, 23),
  POS(260, 23),
  POS(261, 23),
  POS(262, 23)
};

static TAB_NUM t_lambda_29[] = {
  1, // locals
  0, // parameters
  // ansi_reset_colour()
  var_ansi_reset_colour, 0, 1, LOCAL(1),
  // print! ansi_reset_colour()
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(258, 46),
  POS(258, 39)
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  0, // parameters
  // ansi_text_colour(BLACK)
  var_ansi_text_colour, 1, var_BLACK, 1, LOCAL(1),
  // print! ansi_text_colour(BLACK)
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(260, 46),
  POS(260, 39)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  //  response max_no
  LET, 2, var_247_16_response, var_216_1_max_no, TAIL_CALL,
  POS(263, 23)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  //  "" max_no
  LET, 2, string_4, var_216_1_max_no, TAIL_CALL,
  POS(264, 15)
};

static TAB_NUM t_func_print_piece[] = {
  0, // locals
  2, // parameters
  var_266_15_piece,
  var_266_21_confidence,
  // on use_colours:
  var_on, 2, var_198_25_use_colours, lambda_33, IO_CALL(0),
  // on be_verbose: print! piece
  var_on, 2, var_197_21_be_verbose, lambda_40, IO_TAIL_CALL,
  POS(267, 5),
  POS(287, 5)
};

static TAB_NUM t_lambda_33[] = {
  2, // locals
  0, // parameters
  // $confidence_delta confidence-minimum_confidence
  var_std__minus, 2, var_266_21_confidence, var_193_29_minimum_confidence, 1, var_268_1_confidence_delta,
  // $colour
  var_cond, 3, lambda_34, lambda_36, lambda_38, 1, LOCAL(2),
  // ansi_background_colour(colour)
  var_ansi_background_colour, 1, LOCAL(2), 1, LOCAL(1),
  // print! ansi_background_colour(colour)
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(268, 7),
  POS(269, 7),
  POS(286, 14),
  POS(286, 7)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // confidence_delta < 0:
  var_std__less, 2, var_268_1_confidence_delta, num_0, 1, LOCAL(1),
  //  confidence_delta < 0:
  LET, 2, LOCAL(1), lambda_35, TAIL_CALL,
  POS(271, 14),
  POS(271, 13)
};

static TAB_NUM t_lambda_35[] = {
  5, // locals
  0, // parameters
  // edump `minimum_confidence
  var_edump, 2, str_minimum_confiden, var_193_29_minimum_confidence, 0,
  // edump `confidence_delta
  var_edump, 2, str_confidence_delta, var_268_1_confidence_delta, 0,
  // confidence_delta
  var_std__negate, 1, var_268_1_confidence_delta, 1, LOCAL(1),
  // BLACK = -confidence_delta
  var_std__key_value_pair, 2, var_BLACK, LOCAL(1), 1, LOCAL(2),
  // minimum_confidence+confidence_delta
  var_std__plus, 2, var_193_29_minimum_confidence, var_268_1_confidence_delta, 1, LOCAL(3),
  // RED = minimum_confidence+confidence_delta
  var_std__key_value_pair, 2, var_RED, LOCAL(3), 1, LOCAL(4),
  // colour_mixture
  var_colour_mixture, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  // ->
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(272, 13),
  POS(273, 13),
  POS(276, 26),
  POS(276, 17),
  POS(277, 23),
  POS(277, 17),
  POS(275, 15),
  POS(274, 13)
};

static TAB_NUM t_lambda_36[] = {
  1, // locals
  0, // parameters
  // 10 ->
  var_std__less, 2, num_10, var_268_1_confidence_delta, 1, LOCAL(1),
  //  confidence_delta > 10 ->
  LET, 2, LOCAL(1), lambda_37, TAIL_CALL,
  POS(278, 33),
  POS(278, 13)
};

static TAB_NUM t_lambda_37[] = {
  4, // locals
  0, // parameters
  // GREEN = 10
  var_std__key_value_pair, 2, var_GREEN, num_10, 1, LOCAL(1),
  // confidence_delta-10
  var_std__minus, 2, var_268_1_confidence_delta, num_10, 1, LOCAL(2),
  // WHITE = confidence_delta-10
  var_std__key_value_pair, 2, var_WHITE, LOCAL(2), 1, LOCAL(3),
  // colour_mixture
  var_colour_mixture, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // 
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(280, 15),
  POS(281, 23),
  POS(281, 15),
  POS(279, 13),
  POS(278, 38)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  //  true ->
  LET, 2, var_true, lambda_39, TAIL_CALL,
  POS(282, 13)
};

static TAB_NUM t_lambda_39[] = {
  4, // locals
  0, // parameters
  // 10-confidence_delta
  var_std__minus, 2, num_10, var_268_1_confidence_delta, 1, LOCAL(1),
  // RED = 10-confidence_delta
  var_std__key_value_pair, 2, var_RED, LOCAL(1), 1, LOCAL(2),
  // GREEN = confidence_delta
  var_std__key_value_pair, 2, var_GREEN, var_268_1_confidence_delta, 1, LOCAL(3),
  // colour_mixture
  var_colour_mixture, 2, LOCAL(2), LOCAL(3), 1, LOCAL(4),
  // 
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(284, 21),
  POS(284, 15),
  POS(285, 15),
  POS(283, 13),
  POS(282, 21)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  // print! piece
  var_print, 1, var_266_15_piece, IO_TAIL_CALL,
  POS(287, 20)
};

static TAB_NUM t_func_ai_types__model___ai__tokenize[] = {
  8, // locals
  2, // parameters
  LOCAL(3), // 292_0_model
  LOCAL(4), // 293_0_prompt
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
  // print_to! fd "
  var_print_to, 2, LOCAL(6), LOCAL(2), IO_CALL(0),
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
  POS(298, 10),
  POS(297, 7),
  POS(295, 3),
  POS(299, 3),
  POS(300, 24),
  POS(300, 42),
  POS(300, 3),
  POS(304, 23),
  POS(301, 16),
  POS(301, 3),
  POS(308, 3),
  POS(309, 3),
  POS(310, 3),
  POS(311, 6),
  POS(311, 3)
};

static TAB_NUM t_func_ai_types__model___ai__detokenize[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 315_0_model
  var_316_0_token_or_list,
  // $pieces ai::pieces_of(model)
  var_ai__pieces_of, 1, LOCAL(2), 1, var_318_1_pieces,
  // is_a_list
  var_is_a_list, 1, var_316_0_token_or_list, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_41, lambda_42, TAIL_CALL,
  POS(318, 3),
  POS(320, 19),
  POS(319, 3)
};

static TAB_NUM t_lambda_41[] = {
  1, // locals
  0, // parameters
  // map_reduce(token_or_list token_to_piece append "")
  var_map_reduce, 4, var_316_0_token_or_list, func_token_to_piece, var_append, string_4, 1, LOCAL(1),
  //  map_reduce(token_or_list token_to_piece append "")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(321, 8),
  POS(321, 7)
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // token_to_piece(token_or_list)
  func_token_to_piece, 1, var_316_0_token_or_list, 1, LOCAL(1),
  //  token_to_piece(token_or_list)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(323, 8),
  POS(323, 7)
};

static TAB_NUM t_func_token_to_piece[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 325_18_token
  // token+1)
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(1),
  // $piece pieces(token+1)
  var_318_1_pieces, 1, LOCAL(1), 1, var_326_1_piece,
  // any_of(piece: (chr) -> chr == '@0x142;')
  var_any_of, 2, var_326_1_piece, lambda_any_ofpiece, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_43, lambda_44, TAIL_CALL,
  POS(326, 19),
  POS(326, 5),
  POS(328, 7),
  POS(327, 5)
};

static TAB_NUM t_lambda_any_ofpiece[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 328_15_chr
  // chr == '@0x142;')
  var_std__equal, 2, LOCAL(2), chr_322, 1, LOCAL(1),
  // -> chr == '@0x142;')
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(328, 30),
  POS(328, 27)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  //  "<???>" # 'ÃÂ' cannot be printed - why?
  LET, 1, string_9, TAIL_CALL,
  POS(329, 9)
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  //  piece
  LET, 1, var_326_1_piece, TAIL_CALL,
  POS(330, 9)
};

static TAB_NUM t_func_get_tokens[] = {
  7, // locals
  0, // parameters
  // insert_order_table
  var_insert_order_table, 1, key_value_pair_336_1, 1, LOCAL(2),
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
  LOCAL(7), 1, str_end_of_stream, 1, LOCAL(3),
  // -> info("tokens") info("begin_of_stream") info("end_of_stream")
  LET, 3, LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(335, 7),
  POS(333, 3),
  POS(337, 3),
  POS(341, 23),
  POS(338, 16),
  POS(338, 3),
  POS(345, 3),
  POS(346, 3),
  POS(347, 3),
  POS(348, 3),
  POS(349, 6),
  POS(349, 21),
  POS(349, 45),
  POS(349, 3)
};

static TAB_NUM t_func_quoted[] = {
  0, // locals
  1, // parameters
  var_351_10_text,
  // $buf ""
  LET, 1, string_4, 1, var_352_1_buf,
  // $s 1
  LET, 1, num_1, 1, var_353_1_s,
  // $n length_of(text)
  var_length_of, 1, var_351_10_text, 1, var_354_1_n,
  // $i 0
  LET, 1, num_0, 1, var_355_1_i,
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(352, 3),
  POS(353, 3),
  POS(354, 3),
  POS(355, 3),
  POS(356, 3)
};

static TAB_NUM t_lambda_2_loop[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_355_1_i, 1, var_355_1_i,
  // n
  var_std__less, 2, var_354_1_n, var_355_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_45, lambda_46, TAIL_CALL,
  POS(357, 5),
  POS(359, 11),
  POS(358, 5)
};

static TAB_NUM t_lambda_45[] = {
  2, // locals
  0, // parameters
  // range(text s n))
  var_range, 3, var_351_10_text, var_353_1_s, var_354_1_n, 1, LOCAL(1),
  // append(buf range(text s n))
  var_append, 2, var_352_1_buf, LOCAL(1), 1, LOCAL(2),
  //  append(buf range(text s n))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(360, 21),
  POS(360, 10),
  POS(360, 9)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  // $chr text(i)
  var_351_10_text, 1, var_355_1_i, 1, var_362_1_chr,
  // case chr
  var_case, 6, var_362_1_chr, chr_10, lambda_nl, sequence_369_2, lambda_47, var_next, TAIL_CALL,
  POS(362, 9),
  POS(363, 9)
};

static TAB_NUM t_lambda_nl[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_355_1_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_351_10_text, var_353_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(text s i-1)
  var_append, 2, var_352_1_buf, LOCAL(2), 1, var_352_1_buf,
  // append &buf "\n"
  var_append, 2, var_352_1_buf, str_n, 1, var_352_1_buf,
  // !s i+1
  var_std__plus, 2, var_355_1_i, num_1, 1, var_353_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(365, 38),
  POS(365, 25),
  POS(365, 13),
  POS(366, 13),
  POS(367, 13),
  POS(368, 13)
};

static TAB_NUM t_lambda_47[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_355_1_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_351_10_text, var_353_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(text s i-1)
  var_append, 2, var_352_1_buf, LOCAL(2), 1, var_352_1_buf,
  // push &buf '\'
  var_push, 2, var_352_1_buf, chr_92, 1, var_352_1_buf,
  // push &buf chr
  var_push, 2, var_352_1_buf, var_362_1_chr, 1, var_352_1_buf,
  // !s i+1
  var_std__plus, 2, var_355_1_i, num_1, 1, var_353_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(370, 38),
  POS(370, 25),
  POS(370, 13),
  POS(371, 13),
  POS(372, 13),
  POS(373, 13),
  POS(374, 13)
};

static int key_value_pair_158_1_arguments[] = {
  -str_n_probs, -num_10
};

static int key_value_pair_159_1_arguments[] = {
  -str_n_predict, -num_1
};

static int key_value_pair_336_1_arguments[] = {
  -str_model, -str_dummy
};

static int sequence_369_2_arguments[] = {
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
  {FLT_STRING_8, 29, {.str_8 = "wizard-vicuna-13b.Q4_K_M.gguf"}},
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
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_158_1_arguments}},
  {FLT_STRING_8, 9, {.str_8 = "n_predict"}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_159_1_arguments}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_POSITIVE_INT64, 0, {.value = 1000}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_STRING_8, 1, {.str_8 = "\042"}},
  {FLT_STRING_8, 2, {.str_8 = "\042:"}},
  {FLT_STRING_8, 19, {.str_8 = "[%4|%3.1] %l18 %3.3"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_STRING_8, 23, {.str_8 = "-[%4|%3.1]-------------"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_STRING_8, 9, {.str_8 = "%l18 %3.3"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_POSITIVE_INT64, 0, {.value = 5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_STRING_8, 3, {.str_8 = "\010 \010"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_print_piece}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_STRING_8, 18, {.str_8 = "minimum_confidence"}},
  {FLT_STRING_8, 16, {.str_8 = "confidence_delta"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai_types__model___ai__tokenize}},
  {FLT_STRING_8, 73, {.str_8 = "POST /tokenize HTTP/1.1\015\012Content-Type: application/json\015\012Content-Length: "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai_types__model___ai__detokenize}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_token_to_piece}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_any_ofpiece}},
  {FLT_CHARACTER, 0, {.value = 322}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_STRING_8, 5, {.str_8 = "<???>"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_get_tokens}},
  {FLT_STRING_8, 5, {.str_8 = "model"}},
  {FLT_STRING_8, 5, {.str_8 = "dummy"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_336_1_arguments}},
  {FLT_STRING_8, 75, {.str_8 = "POST /get_tokens HTTP/1.1\015\012Content-Type: application/json\015\012Content-Length: "}},
  {FLT_STRING_8, 15, {.str_8 = "begin_of_stream"}},
  {FLT_STRING_8, 13, {.str_8 = "end_of_stream"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_quoted}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_CHARACTER, 0, {.value = 92}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_369_2_arguments}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_nl}},
  {FLT_STRING_8, 2, {.str_8 = "\134n"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}}
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
    {.position = POS(35, 1)}
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
    {.position = POS(101, 18)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "load_ai_model\000ai", NULL,
    {.const_idx = -func_ai__load_ai_model}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "name_of\000", NULL,
    {.position = POS(117, 8)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "address_of\000", NULL,
    {.position = POS(118, 8)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "port_no_of\000", NULL,
    {.position = POS(119, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "115_1_model\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(125, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(124, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(145, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(145, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(146, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "146_1_use_tokens\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(146, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value_pair\000std", NULL,
    {.position = POS(155, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(156, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "insert_order_table\000", NULL,
    {.position = POS(154, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_json\000", NULL,
    {.position = POS(153, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(160, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open_tcp_socket\000", NULL,
    {.position = POS(161, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(165, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(162, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print_to\000", NULL,
    {.position = POS(162, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "load\000", NULL,
    {.position = POS(169, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "behind\000", NULL,
    {.position = POS(170, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "171_1_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_json\000", NULL,
    {.position = POS(171, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "174_1_logits\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(175, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(175, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "188_0_model\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(197, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "193_29_minimum_confidence\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "194_27_maximum_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "195_19_backtrack\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "196_19_log_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "197_21_be_verbose\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "198_25_use_colours\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "extract_options\000", NULL,
    {.position = POS(192, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "199_1_do_log\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(199, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(200, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "BLACK\000", NULL,
    {.position = POS(201, 43)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ansi_text_colour\000", NULL,
    {.position = POS(201, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print\000", NULL,
    {.position = POS(201, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(201, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "put\000", NULL,
    {.position = POS(204, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ansi_reset_colour\000", NULL,
    {.position = POS(205, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "println\000", NULL,
    {.position = POS(206, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "209_17_tokens\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "209_24_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "209_29_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "210_1_t\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_time\000", NULL,
    {.position = POS(210, 8)}
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
    FOT_UNINITIALIZED, 0, 0,
    "216_1_max_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "218_34_next_confidence\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "219_1_next_piece\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(221, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "221_1_dt\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(221, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(223, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "format\000", NULL,
    {.position = POS(226, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprintln\000", NULL,
    {.position = POS(225, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(237, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(238, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(231, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(240, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim_left\000", NULL,
    {.position = POS(241, 46)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(245, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(248, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(250, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "247_16_response\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "extend_to\000", NULL,
    {.position = POS(251, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(254, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(253, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dup\000", NULL,
    {.position = POS(259, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(261, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(217, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "266_15_piece\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "266_21_confidence\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "268_1_confidence_delta\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "edump\000", NULL,
    {.position = POS(272, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "negate\000std", NULL,
    {.position = POS(276, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "RED\000", NULL,
    {.position = POS(277, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "colour_mixture\000", NULL,
    {.position = POS(275, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "GREEN\000", NULL,
    {.position = POS(280, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WHITE\000", NULL,
    {.position = POS(281, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(270, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ansi_background_colour\000", NULL,
    {.position = POS(286, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "316_0_token_or_list\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "318_1_pieces\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(320, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(321, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "326_1_piece\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(328, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_utf8\000", NULL,
    {.position = POS(347, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "351_10_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "352_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "353_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "354_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "355_1_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(357, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "362_1_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(369, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(363, 9)}
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
  117, // number of constants
  123, // number of variables
  NULL, // required modules
  defined_namespaces,
  used_namespaces,
  constants_table,
  variables_table,
};
