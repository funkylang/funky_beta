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
  num_8080 = -10,
  lambda_1 = -11,
  lambda_2 = -12,
  func_ai_types__model___ai__generate = -13,
  num_15 = -14,
  num_1024 = -15,
  num_0 = -16,
  lambda_3 = -17,
  lambda_4 = -18,
  string_2 = -19,
  lambda_5 = -20,
  lambda_6 = -21,
  num_1 = -22,
  lambda_7 = -23,
  func_generate_text = -24,
  lambda_8 = -25,
  lambda_9 = -26,
  lambda_10 = -27,
  lambda_11 = -28,
  lambda_12 = -29,
  str_end_of_stream = -30,
  lambda_13 = -31,
  lambda_loop = -32,
  lambda_14 = -33,
  num_1000 = -34,
  lambda_15 = -35,
  string_3 = -36,
  string_4 = -37,
  str_4_l = -38,
  lambda_16 = -39,
  num_3 = -40,
  lambda_17 = -41,
  str_431_ms = -42,
  lambda_18 = -43,
  string_5 = -44,
  lambda_19 = -45,
  chr_9 = -46,
  str_ht = -47,
  key_value_pair_207_21 = -48,
  str_l = -49,
  lambda_20 = -50,
  num_5 = -51,
  lambda_21 = -52,
  lambda_22 = -53,
  lambda_23 = -54,
  lambda_24 = -55,
  lambda_response_is_empty = -56,
  string_6 = -57,
  lambda_25 = -58,
  chr_10 = -59,
  lambda_26 = -60,
  num_2 = -61,
  lambda_27 = -62,
  lambda_28 = -63,
  lambda_29 = -64,
  lambda_30 = -65,
  lambda_31 = -66,
  string_7 = -67,
  lambda_32 = -68,
  minus_num_1 = -69,
  lambda_33 = -70,
  lambda_34 = -71,
  func_print_piece = -72,
  lambda_35 = -73,
  lambda_36 = -74,
  lambda_37 = -75,
  lambda_38 = -76,
  num_10 = -77,
  lambda_39 = -78,
  lambda_40 = -79,
  lambda_41 = -80,
  lambda_42 = -81,
  func_ai_types__model___ai__get_tokens = -82,
  str_model = -83,
  str_POST_get_tokens = -84,
  str_Connection_close = -85,
  chr_32 = -86,
  num_300 = -87,
  lambda_43 = -88,
  string_8 = -89,
  lambda_44 = -90,
  str_tokens = -91,
  str_begin_of_stream = -92,
  str_end_of_stream_2 = -93,
  func_ai_types__model___ai__tokenize = -94,
  str_content = -95,
  str_POST_tokenize_HT = -96,
  func_ai_types__model___ai__evaluate = -97,
  lambda_45 = -98,
  lambda_46 = -99,
  str_prompt = -100,
  str_logits = -101,
  str_brief = -102,
  str_n_probs = -103,
  key_value_pair_362_1 = -104,
  str_n_predict = -105,
  key_value_pair_363_1 = -106,
  str_POST_completion = -107,
  lambda_do_return_confidence_values = -108,
  lambda_47 = -109,
  lambda_48 = -110,
  str_token = -111,
  lambda_49 = -112,
  lambda_50 = -113,
  lambda_51 = -114,
  lambda_52 = -115,
  func_ai_types__model___ai__detokenize = -116,
  lambda_53 = -117,
  lambda_54 = -118,
  func_token_to_piece = -119,
  lambda_any_ofpiece = -120,
  chr_322 = -121,
  lambda_55 = -122,
  string_9 = -123,
  lambda_56 = -124,
  func_build_piece_table = -125,
  lambda_57 = -126,
  lambda_58 = -127,
  lambda_59 = -128,
  func_quoted = -129,
  lambda_2_loop = -130,
  lambda_60 = -131,
  lambda_61 = -132,
  chr_34 = -133,
  chr_92 = -134,
  sequence_445_2 = -135,
  lambda_nl = -136,
  str_n = -137,
  lambda_62 = -138
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
  var_ai__get_tokens, // attribute
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
  var_name_of, // extern polymorphic
  var_address_of, // extern polymorphic
  var_port_no_of, // extern polymorphic
  var_129_1_model, // dynamic
  var_is_an_error, // extern
  var_if, // extern
  var_146_0_model, // dynamic
  var_std__key_value_pair, // extern
  var_undefined, // extern
  var_false, // extern
  var_151_29_minimum_confidence, // dynamic
  var_152_27_maximum_length, // dynamic
  var_153_22_stop_text, // dynamic
  var_154_19_backtrack, // dynamic
  var_155_19_log_level, // dynamic
  var_156_21_be_verbose, // dynamic
  var_157_25_use_colours, // dynamic
  var_extract_options, // extern
  var_158_1_do_log, // dynamic
  var_std__less, // extern
  var_true, // extern
  var_update_if, // extern
  var_BLACK, // extern
  var_ansi_text_colour, // extern
  var_print, // extern
  var_on, // extern
  var_put, // extern
  var_162_16_text, // dynamic
  var_ansi_reset_colour, // extern
  var_println, // extern
  var_result_count, // extern
  var_std__equal, // extern
  var_pass, // extern
  var_171_17_tokens, // dynamic
  var_171_24_text, // dynamic
  var_171_29_no, // dynamic
  var_is_defined, // extern
  var_contains, // extern
  var_std__and, // extern
  var_176_1_t, // dynamic
  var_current_time, // extern
  var_177_28_next_token, // dynamic
  var_177_40_confidence_values, // dynamic
  var_eprintln, // extern
  var_184_1_max_no, // dynamic
  var_186_34_next_confidence, // dynamic
  var_187_1_next_piece, // dynamic
  var_std__minus, // extern
  var_189_1_dt, // dynamic
  var_std__times, // extern
  var_std__not, // extern
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
  var_220_16_response, // dynamic
  var_extend_to, // extern
  var_is_empty, // extern
  var_length_of, // extern
  var_dup, // extern
  var_range, // extern
  var_loop, // extern
  var_246_15_piece, // dynamic
  var_246_21_confidence, // dynamic
  var_248_1_confidence_delta, // dynamic
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
  var_287_7_result, // dynamic
  var_load, // extern
  var_between, // extern
  var_to_integer, // extern
  var_behind, // extern
  var_error, // extern
  var_from_utf8, // extern
  var_from_json, // extern
  var_to_utf8, // extern
  var_write_all_to, // extern
  var_is_a_string, // extern
  var_349_1_use_tokens, // dynamic
  var_not, // extern
  var_377_1_info, // dynamic
  var_380_1_logits, // dynamic
  var_tuple, // extern
  var_map, // extern
  var_395_0_token_or_list, // dynamic
  var_397_1_pieces, // dynamic
  var_is_a_list, // extern
  var_map_reduce, // extern
  var_405_1_piece, // dynamic
  var_any_of, // extern
  var_411_21_model, // dynamic
  var_412_1_pieces, // dynamic
  var_413_1_piece_table, // dynamic
  var_empty_hash_table, // extern
  var_415_3_idx, // dynamic
  var_415_7_piece, // dynamic
  var_max, // extern
  var_427_10_text, // dynamic
  var_428_1_buf, // dynamic
  var_429_1_s, // dynamic
  var_430_1_n, // dynamic
  var_431_1_i, // dynamic
  var_inc, // extern
  var_438_1_chr, // dynamic
  var_std__sequence, // extern
  var_case, // extern
  var__END
};


static TAB_NUM t_func_ai__load_ai_model[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 127_0_name
  // $model
  LET, -3, var_ai_types__model, var_name_of, LOCAL(4), var_address_of, string_1, var_port_no_of, num_8080, var_129_1_model,
  // ai::get_tokens! model
  var_ai__get_tokens, 1, var_129_1_model, IO_CALL(3), LOCAL(1), LOCAL(2), LOCAL(3),
  // model.ai::pieces_of
  LET, -1, var_129_1_model, var_ai__pieces_of, LOCAL(1), var_129_1_model,
  // model.ai::begin_of_stream_token_of
  LET, -1, var_129_1_model, var_ai__begin_of_stream_token_of, LOCAL(2), var_129_1_model,
  // model.ai::end_of_stream_token_of
  LET, -1, var_129_1_model, var_ai__end_of_stream_token_of, LOCAL(3), var_129_1_model,
  // ai::pieces_of(model).is_an_error
  var_ai__pieces_of, 1, var_129_1_model, 1, LOCAL(1),
  // is_an_error
  var_is_an_error, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1, lambda_2, TAIL_CALL,
  POS(129, 3),
  POS(134, 3),
  POS(135, 6),
  POS(136, 6),
  POS(137, 6),
  POS(139, 5),
  POS(139, 26),
  POS(138, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // ai::pieces_of(model)
  var_ai__pieces_of, 1, var_129_1_model, 1, LOCAL(1),
  //  ai::pieces_of(model)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(140, 8),
  POS(140, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // build_piece_table model
  func_build_piece_table, 1, var_129_1_model, TAIL_CALL,
  POS(142, 7)
};

static TAB_NUM t_func_ai_types__model___ai__generate[] = {
  10, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_146_0_model,
  REST_PARAMETER, LOCAL(8), // 147_0_options
  MANDATORY_PARAMETER, LOCAL(9), // 148_0_prompt
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
  var_extract_options, 8, LOCAL(8), LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), LOCAL(7), 7, var_151_29_minimum_confidence, var_152_27_maximum_length, var_153_22_stop_text, var_154_19_backtrack, var_155_19_log_level, var_156_21_be_verbose, var_157_25_use_colours,
  // $do_log log_level > 0
  var_std__less, 2, num_0, var_155_19_log_level, 1, var_158_1_do_log,
  // update_if use_colours &be_verbose -> true
  var_update_if, 3, var_157_25_use_colours, var_156_21_be_verbose, lambda_3, 1, var_156_21_be_verbose,
  // on use_colours: print! ansi_text_colour(BLACK)
  var_on, 2, var_157_25_use_colours, lambda_4, IO_CALL(0),
  // ai::tokenize! $tokens model prompt
  var_ai__tokenize, 2, var_146_0_model, LOCAL(9), IO_CALL(1), LOCAL(10),
  // ai::begin_of_stream_token_of(model)) "" 0
  var_ai__begin_of_stream_token_of, 1, var_146_0_model, 1, LOCAL(1),
  // put(tokens ai::begin_of_stream_token_of(model)) "" 0
  var_put, 2, LOCAL(10), LOCAL(1), 1, LOCAL(2),
  // generate_text! $text $_max_no
  func_generate_text, 3, LOCAL(2), string_2, num_0, IO_CALL(2), var_162_16_text, LOCAL(1),
  // on use_colours: print! ansi_reset_colour()
  var_on, 2, var_157_25_use_colours, lambda_5, IO_CALL(0),
  // on be_verbose: println!
  var_on, 2, var_156_21_be_verbose, lambda_6, IO_CALL(0),
  // result_count() == 1
  var_result_count, 0, 1, LOCAL(1),
  // result_count() == 1
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_7, var_pass, TAIL_CALL,
  POS(151, 5),
  POS(152, 5),
  POS(153, 5),
  POS(154, 5),
  POS(155, 5),
  POS(156, 5),
  POS(157, 5),
  POS(150, 3),
  POS(158, 3),
  POS(159, 3),
  POS(160, 3),
  POS(161, 3),
  POS(163, 16),
  POS(163, 5),
  POS(162, 3),
  POS(164, 3),
  POS(165, 3),
  POS(167, 5),
  POS(167, 5),
  POS(166, 3)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(159, 39)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // ansi_text_colour(BLACK)
  var_ansi_text_colour, 1, var_BLACK, 1, LOCAL(1),
  // print! ansi_text_colour(BLACK)
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(160, 26),
  POS(160, 19)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // ansi_reset_colour()
  var_ansi_reset_colour, 0, 1, LOCAL(1),
  // print! ansi_reset_colour()
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(164, 26),
  POS(164, 19)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // println!
  var_println, 0, IO_TAIL_CALL,
  POS(165, 18)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_162_16_text, TAIL_CALL,
  POS(168, 7)
};

static TAB_NUM t_func_generate_text[] = {
  2, // locals
  3, // parameters
  var_171_17_tokens,
  var_171_24_text,
  var_171_29_no,
  // is_defined && text .contains. stop_text
  var_is_defined, 1, var_153_22_stop_text, 1, LOCAL(1),
  // is_defined && text .contains. stop_text
  var_std__and, 2, LOCAL(1), lambda_8, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_9, lambda_10, IO_TAIL_CALL,
  POS(173, 17),
  POS(173, 17),
  POS(172, 5)
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // text .contains. stop_text
  var_contains, 2, var_171_24_text, var_153_22_stop_text, 1, LOCAL(1),
  // text .contains. stop_text
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(173, 31),
  POS(173, 31)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  text no
  LET, 2, var_171_24_text, var_171_29_no, TAIL_CALL,
  POS(174, 9)
};

static TAB_NUM t_lambda_10[] = {
  2, // locals
  0, // parameters
  // $t current_time()
  var_current_time, 0, 1, var_176_1_t,
  // ai::evaluate! model tokens $next_token $confidence_values
  var_ai__evaluate, 2, var_146_0_model, var_171_17_tokens, IO_CALL(2), var_177_28_next_token, var_177_40_confidence_values,
  // ai::end_of_stream_token_of(model):
  var_ai__end_of_stream_token_of, 1, var_146_0_model, 1, LOCAL(1),
  // next_token == ai::end_of_stream_token_of(model):
  var_std__equal, 2, var_177_28_next_token, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_11, lambda_13, IO_TAIL_CALL,
  POS(176, 9),
  POS(177, 9),
  POS(179, 25),
  POS(179, 11),
  POS(178, 9)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // on do_log:
  var_on, 2, var_158_1_do_log, lambda_12, IO_CALL(0),
  // -> text no
  LET, 2, var_171_24_text, var_171_29_no, TAIL_CALL,
  POS(180, 13),
  POS(182, 13)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  // eprintln! "<end of stream>"
  var_eprintln, 1, str_end_of_stream, IO_TAIL_CALL,
  POS(181, 15)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  // $max_no no
  LET, 1, var_171_29_no, 1, var_184_1_max_no,
  // loop:
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(184, 13),
  POS(185, 13)
};

static TAB_NUM t_lambda_loop[] = {
  3, // locals
  0, // parameters
  // confidence_values(1) !next_token $next_confidence
  var_177_40_confidence_values, 1, num_1, 1, LOCAL(1),
  // confidence_values(1) !next_token $next_confidence
  LOCAL(1), 0, 2, var_177_28_next_token, var_186_34_next_confidence,
  // $next_piece ai::detokenize(model next_token)
  var_ai__detokenize, 2, var_146_0_model, var_177_28_next_token, 1, var_187_1_next_piece,
  // on do_log:
  var_on, 2, var_158_1_do_log, lambda_14, IO_CALL(0),
  // next_confidence >= minimum_confidence || no < 5:
  var_std__less, 2, var_186_34_next_confidence, var_151_29_minimum_confidence, 1, LOCAL(1),
  // next_confidence >= minimum_confidence || no < 5:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_confidence >= minimum_confidence || no < 5:
  var_std__or, 2, LOCAL(2), lambda_20, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_21, lambda_34, IO_TAIL_CALL,
  POS(186, 15),
  POS(186, 15),
  POS(187, 15),
  POS(188, 15),
  POS(213, 17),
  POS(213, 17),
  POS(213, 17),
  POS(212, 15)
};

static TAB_NUM t_lambda_14[] = {
  2, // locals
  0, // parameters
  // current_time()-t) # in ms
  var_current_time, 0, 1, LOCAL(1),
  // current_time()-t) # in ms
  var_std__minus, 2, LOCAL(1), var_176_1_t, 1, LOCAL(2),
  // $dt 1000*(current_time()-t) # in ms
  var_std__times, 2, num_1000, LOCAL(2), 1, var_189_1_dt,
  // 1:
  var_std__less, 2, num_1, var_155_19_log_level, 1, LOCAL(1),
  // 1:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_15, lambda_16, IO_TAIL_CALL,
  POS(189, 27),
  POS(189, 27),
  POS(189, 17),
  POS(191, 32),
  POS(191, 32),
  POS(190, 17)
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // quoted(next_piece))@quot;:"
  func_quoted, 1, var_187_1_next_piece, 1, LOCAL(1),
  // $token_string "@quot;@(quoted(next_piece))@quot;:"
  var_std__string, 3, string_3, LOCAL(1), string_4, 1, LOCAL(2),
  // format
  var_format, 5, str_4_l, var_171_29_no, var_189_1_dt, LOCAL(2), var_186_34_next_confidence, 1, LOCAL(1),
  // eprintln!
  var_eprintln, 1, LOCAL(1), IO_TAIL_CALL,
  POS(192, 44),
  POS(192, 21),
  POS(194, 23),
  POS(193, 21)
};

static TAB_NUM t_lambda_16[] = {
  2, // locals
  0, // parameters
  // log_level >= 3:
  var_std__less, 2, var_155_19_log_level, num_3, 1, LOCAL(1),
  // log_level >= 3:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_17, lambda_18, IO_CALL(0),
  // for_each confidence_values
  var_for_each, 3, var_177_40_confidence_values, lambda_19, var_pass, IO_TAIL_CALL,
  POS(199, 23),
  POS(199, 23),
  POS(198, 21),
  POS(203, 21)
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // format("-[#%4|%3.1 ms]---------" no dt)
  var_format, 3, str_431_ms, var_171_29_no, var_189_1_dt, 1, LOCAL(1),
  // eprintln! format("-[#%4|%3.1 ms]---------" no dt)
  var_eprintln, 1, LOCAL(1), IO_TAIL_CALL,
  POS(200, 35),
  POS(200, 25)
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  0, // parameters
  // format("-[#%4]------------------" no dt)
  var_format, 3, string_5, var_171_29_no, var_189_1_dt, 1, LOCAL(1),
  // eprintln! format("-[#%4]------------------" no dt)
  var_eprintln, 1, LOCAL(1), IO_TAIL_CALL,
  POS(202, 35),
  POS(202, 25)
};

static TAB_NUM t_lambda_19[] = {
  6, // locals
  1, // parameters
  LOCAL(2), // 204_3_confidence_value
  // confidence_value $token $confidence
  LOCAL(2), 0, 2, LOCAL(3), LOCAL(4),
  // $piece ai::detokenize(model token)
  var_ai__detokenize, 2, var_146_0_model, LOCAL(3), 1, LOCAL(5),
  // replace_all &piece '@ht;' = "<<<ht>>>"
  var_replace_all, 2, LOCAL(5), key_value_pair_207_21, 1, LOCAL(5),
  // quoted(piece))@quot;:"
  func_quoted, 1, LOCAL(5), 1, LOCAL(1),
  // $token_string "@quot;@(quoted(piece))@quot;:"
  var_std__string, 3, string_3, LOCAL(1), string_4, 1, LOCAL(6),
  // format("%l18 %3.3" token_string confidence)
  var_format, 3, str_l, LOCAL(6), LOCAL(4), 1, LOCAL(1),
  // eprintln! format("%l18 %3.3" token_string confidence)
  var_eprintln, 1, LOCAL(1), IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(205, 25),
  POS(206, 25),
  POS(207, 25),
  POS(208, 48),
  POS(208, 25),
  POS(209, 35),
  POS(209, 25),
  POS(210, 25)
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // no < 5:
  var_std__less, 2, var_171_29_no, num_5, 1, LOCAL(1),
  // no < 5:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(213, 58),
  POS(213, 58)
};

static TAB_NUM t_lambda_21[] = {
  2, // locals
  0, // parameters
  // no == 0 &next_piece: trim_left next_piece
  var_std__equal, 2, var_171_29_no, num_0, 1, LOCAL(1),
  // update_if no == 0 &next_piece: trim_left next_piece
  var_update_if, 3, LOCAL(1), var_187_1_next_piece, lambda_22, 1, var_187_1_next_piece,
  // print_piece! next_piece next_confidence
  func_print_piece, 2, var_187_1_next_piece, var_186_34_next_confidence, IO_CALL(0),
  // no >= maximum_length
  var_std__less, 2, var_171_29_no, var_152_27_maximum_length, 1, LOCAL(1),
  // no >= maximum_length
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_23, lambda_24, IO_TAIL_CALL,
  POS(214, 29),
  POS(214, 19),
  POS(215, 19),
  POS(217, 21),
  POS(217, 21),
  POS(216, 19)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  // trim_left next_piece
  var_trim_left, 1, var_187_1_next_piece, TAIL_CALL,
  POS(214, 50)
};

static TAB_NUM t_lambda_23[] = {
  1, // locals
  0, // parameters
  // append(text next_piece) no
  var_append, 2, var_171_24_text, var_187_1_next_piece, 1, LOCAL(1),
  //  append(text next_piece) no
  LET, 2, LOCAL(1), var_171_29_no, TAIL_CALL,
  POS(218, 24),
  POS(218, 23)
};

static TAB_NUM t_lambda_24[] = {
  4, // locals
  0, // parameters
  // push(tokens next_token)
  var_push, 2, var_171_17_tokens, var_177_28_next_token, 1, LOCAL(1),
  // append(text next_piece)
  var_append, 2, var_171_24_text, var_187_1_next_piece, 1, LOCAL(2),
  // no+1
  var_std__plus, 2, var_171_29_no, num_1, 1, LOCAL(3),
  // generate_text! $response $highest_no
  func_generate_text, 3, LOCAL(1), LOCAL(2), LOCAL(3), IO_CALL(2), var_220_16_response, LOCAL(4),
  // extend_to &max_no highest_no
  var_extend_to, 2, var_184_1_max_no, LOCAL(4), 1, var_184_1_max_no,
  // is_empty:
  var_is_empty, 1, var_220_16_response, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_response_is_empty, lambda_33, IO_TAIL_CALL,
  POS(221, 25),
  POS(222, 25),
  POS(223, 25),
  POS(220, 23),
  POS(224, 23),
  POS(226, 34),
  POS(225, 23)
};

static TAB_NUM t_lambda_response_is_empty[] = {
  1, // locals
  0, // parameters
  // next_piece == "@nl;"
  var_std__equal, 2, var_187_1_next_piece, string_6, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25, lambda_26, IO_TAIL_CALL,
  POS(228, 29),
  POS(227, 27)
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // push(text '@nl;') max_no # stop backtracking
  var_push, 2, var_171_24_text, chr_10, 1, LOCAL(1),
  //  push(text '@nl;') max_no # stop backtracking
  LET, 2, LOCAL(1), var_184_1_max_no, TAIL_CALL,
  POS(229, 32),
  POS(229, 31)
};

static TAB_NUM t_lambda_26[] = {
  3, // locals
  0, // parameters
  // length_of(confidence_values) < 2
  var_length_of, 1, var_177_40_confidence_values, 1, LOCAL(1),
  // length_of(confidence_values) < 2
  var_std__less, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // 
  var_std__or, 2, LOCAL(2), lambda_27, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_28, lambda_29, IO_TAIL_CALL,
  POS(233, 35),
  POS(233, 35),
  POS(232, 35),
  POS(231, 31)
};

static TAB_NUM t_lambda_27[] = {
  2, // locals
  0, // parameters
  // no+backtrack
  var_std__plus, 2, var_171_29_no, var_154_19_backtrack, 1, LOCAL(1),
  // no+backtrack
  var_std__less, 2, LOCAL(1), var_184_1_max_no, 1, LOCAL(2),
  // max_no > no+backtrack
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(234, 44),
  POS(234, 44),
  POS(234, 35)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  //  "" max_no
  LET, 2, string_2, var_184_1_max_no, TAIL_CALL,
  POS(235, 35)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  // on use_colours: print! ansi_reset_colour()
  var_on, 2, var_157_25_use_colours, lambda_30, IO_CALL(0),
  // on be_verbose: print!
  var_on, 2, var_156_21_be_verbose, lambda_31, IO_CALL(0),
  // on use_colours: print! ansi_text_colour(BLACK)
  var_on, 2, var_157_25_use_colours, lambda_32, IO_CALL(0),
  // range &confidence_values 2 -1
  var_range, 3, var_177_40_confidence_values, num_2, minus_num_1, 1, var_177_40_confidence_values,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(237, 35),
  POS(238, 35),
  POS(240, 35),
  POS(241, 35),
  POS(242, 35)
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  0, // parameters
  // ansi_reset_colour()
  var_ansi_reset_colour, 0, 1, LOCAL(1),
  // print! ansi_reset_colour()
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(237, 58),
  POS(237, 51)
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  0, // parameters
  // length_of(next_piece))
  var_length_of, 1, var_187_1_next_piece, 1, LOCAL(1),
  // dup("@bs; @bs;" length_of(next_piece))
  var_dup, 2, string_7, LOCAL(1), 1, LOCAL(2),
  // print!
  var_print, 1, LOCAL(2), IO_TAIL_CALL,
  POS(239, 53),
  POS(239, 37),
  POS(238, 50)
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // ansi_text_colour(BLACK)
  var_ansi_text_colour, 1, var_BLACK, 1, LOCAL(1),
  // print! ansi_text_colour(BLACK)
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(240, 58),
  POS(240, 51)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  //  response max_no
  LET, 2, var_220_16_response, var_184_1_max_no, TAIL_CALL,
  POS(243, 27)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  //  "" max_no
  LET, 2, string_2, var_184_1_max_no, TAIL_CALL,
  POS(244, 19)
};

static TAB_NUM t_func_print_piece[] = {
  0, // locals
  2, // parameters
  var_246_15_piece,
  var_246_21_confidence,
  // on use_colours:
  var_on, 2, var_157_25_use_colours, lambda_35, IO_CALL(0),
  // on be_verbose: print! piece
  var_on, 2, var_156_21_be_verbose, lambda_42, IO_TAIL_CALL,
  POS(247, 5),
  POS(264, 5)
};

static TAB_NUM t_lambda_35[] = {
  2, // locals
  0, // parameters
  // $confidence_delta confidence-minimum_confidence
  var_std__minus, 2, var_246_21_confidence, var_151_29_minimum_confidence, 1, var_248_1_confidence_delta,
  // $colour
  var_cond, 3, lambda_36, lambda_38, lambda_40, 1, LOCAL(2),
  // ansi_background_colour(colour)
  var_ansi_background_colour, 1, LOCAL(2), 1, LOCAL(1),
  // print! ansi_background_colour(colour)
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(248, 7),
  POS(249, 7),
  POS(263, 14),
  POS(263, 7)
};

static TAB_NUM t_lambda_36[] = {
  1, // locals
  0, // parameters
  // confidence_delta < 0 ->
  var_std__less, 2, var_248_1_confidence_delta, num_0, 1, LOCAL(1),
  //  confidence_delta < 0 ->
  LET, 2, LOCAL(1), lambda_37, TAIL_CALL,
  POS(251, 14),
  POS(251, 13)
};

static TAB_NUM t_lambda_37[] = {
  5, // locals
  0, // parameters
  // confidence_delta
  var_std__negate, 1, var_248_1_confidence_delta, 1, LOCAL(1),
  // BLACK = -confidence_delta
  var_std__key_value_pair, 2, var_BLACK, LOCAL(1), 1, LOCAL(2),
  // minimum_confidence+confidence_delta
  var_std__plus, 2, var_151_29_minimum_confidence, var_248_1_confidence_delta, 1, LOCAL(3),
  // RED = minimum_confidence+confidence_delta
  var_std__key_value_pair, 2, var_RED, LOCAL(3), 1, LOCAL(4),
  // colour_mixture
  var_colour_mixture, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  // 
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(253, 24),
  POS(253, 15),
  POS(254, 21),
  POS(254, 15),
  POS(252, 13),
  POS(251, 37)
};

static TAB_NUM t_lambda_38[] = {
  1, // locals
  0, // parameters
  // 10 ->
  var_std__less, 2, num_10, var_248_1_confidence_delta, 1, LOCAL(1),
  //  confidence_delta > 10 ->
  LET, 2, LOCAL(1), lambda_39, TAIL_CALL,
  POS(255, 33),
  POS(255, 13)
};

static TAB_NUM t_lambda_39[] = {
  4, // locals
  0, // parameters
  // GREEN = 10
  var_std__key_value_pair, 2, var_GREEN, num_10, 1, LOCAL(1),
  // confidence_delta-10
  var_std__minus, 2, var_248_1_confidence_delta, num_10, 1, LOCAL(2),
  // WHITE = confidence_delta-10
  var_std__key_value_pair, 2, var_WHITE, LOCAL(2), 1, LOCAL(3),
  // colour_mixture
  var_colour_mixture, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // 
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(257, 15),
  POS(258, 23),
  POS(258, 15),
  POS(256, 13),
  POS(255, 38)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  //  true ->
  LET, 2, var_true, lambda_41, TAIL_CALL,
  POS(259, 13)
};

static TAB_NUM t_lambda_41[] = {
  4, // locals
  0, // parameters
  // 10-confidence_delta
  var_std__minus, 2, num_10, var_248_1_confidence_delta, 1, LOCAL(1),
  // RED = 10-confidence_delta
  var_std__key_value_pair, 2, var_RED, LOCAL(1), 1, LOCAL(2),
  // GREEN = confidence_delta
  var_std__key_value_pair, 2, var_GREEN, var_248_1_confidence_delta, 1, LOCAL(3),
  // colour_mixture
  var_colour_mixture, 2, LOCAL(2), LOCAL(3), 1, LOCAL(4),
  // 
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(261, 21),
  POS(261, 15),
  POS(262, 15),
  POS(260, 13),
  POS(259, 21)
};

static TAB_NUM t_lambda_42[] = {
  0, // locals
  0, // parameters
  // print! piece
  var_print, 1, var_246_15_piece, IO_TAIL_CALL,
  POS(264, 20)
};

static TAB_NUM t_func_ai_types__model___ai__get_tokens[] = {
  7, // locals
  1, // parameters
  LOCAL(4), // 270_0_model
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
  var_load, 1, LOCAL(6), IO_CALL(1), var_287_7_result,
  // between(result ' ' ' ').to_integer
  var_between, 3, var_287_7_result, chr_32, chr_32, 1, LOCAL(1),
  // $error_code between(result ' ' ' ').to_integer
  var_to_integer, 1, LOCAL(1), 1, LOCAL(7),
  // error_code >= 300:
  var_std__less, 2, LOCAL(7), num_300, 1, LOCAL(1),
  // error_code >= 300:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_43, lambda_44, TAIL_CALL,
  POS(278, 19),
  POS(278, 10),
  POS(277, 7),
  POS(275, 3),
  POS(279, 24),
  POS(279, 42),
  POS(279, 3),
  POS(283, 23),
  POS(280, 16),
  POS(280, 3),
  POS(287, 3),
  POS(290, 15),
  POS(290, 3),
  POS(292, 5),
  POS(292, 5),
  POS(291, 3)
};

static TAB_NUM t_lambda_43[] = {
  1, // locals
  0, // parameters
  // result .behind. "@cr;@nl;@cr;@nl;"
  var_behind, 2, var_287_7_result, string_8, 1, LOCAL(1),
  // error result .behind. "@cr;@nl;@cr;@nl;"
  var_error, 1, LOCAL(1), TAIL_CALL,
  POS(293, 13),
  POS(293, 7)
};

static TAB_NUM t_lambda_44[] = {
  4, // locals
  0, // parameters
  // behind &result "@cr;@nl;@cr;@nl;"
  var_behind, 2, var_287_7_result, string_8, 1, var_287_7_result,
  // from_utf8 &result
  var_from_utf8, 1, var_287_7_result, 1, var_287_7_result,
  // $info result.from_json
  var_from_json, 1, var_287_7_result, 1, LOCAL(4),
  // info("tokens") info("begin_of_stream") info("end_of_stream")
  LOCAL(4), 1, str_tokens, 1, LOCAL(1),
  // info("begin_of_stream") info("end_of_stream")
  LOCAL(4), 1, str_begin_of_stream, 1, LOCAL(2),
  // info("end_of_stream")
  LOCAL(4), 1, str_end_of_stream_2, 1, LOCAL(3),
  // -> info("tokens") info("begin_of_stream") info("end_of_stream")
  LET, 3, LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(295, 7),
  POS(296, 7),
  POS(297, 7),
  POS(298, 10),
  POS(298, 25),
  POS(298, 49),
  POS(298, 7)
};

static TAB_NUM t_func_ai_types__model___ai__tokenize[] = {
  10, // locals
  2, // parameters
  LOCAL(5), // 302_0_model
  LOCAL(6), // 303_0_prompt
  // name_of(model)
  var_name_of, 1, LOCAL(5), 1, LOCAL(1),
  // model" = name_of(model)
  var_std__key_value_pair, 2, str_model, LOCAL(1), 1, LOCAL(2),
  // content" = prompt
  var_std__key_value_pair, 2, str_content, LOCAL(6), 1, LOCAL(3),
  // insert_order_table
  var_insert_order_table, 2, LOCAL(2), LOCAL(3), 1, LOCAL(4),
  // $json
  var_to_json, 1, LOCAL(4), 1, LOCAL(7),
  // to_utf8 &json
  var_to_utf8, 1, LOCAL(7), 1, LOCAL(7),
  // address_of(model) port_no_of(model)
  var_address_of, 1, LOCAL(5), 1, LOCAL(1),
  // port_no_of(model)
  var_port_no_of, 1, LOCAL(5), 1, LOCAL(2),
  // open_tcp_socket! $fd address_of(model) port_no_of(model)
  var_open_tcp_socket, 2, LOCAL(1), LOCAL(2), IO_CALL(1), LOCAL(8),
  // length_of(json))@cr;
  var_length_of, 1, LOCAL(7), 1, LOCAL(1),
  // "
  var_std__string, 5, str_POST_tokenize_HT, LOCAL(1), str_Connection_close, LOCAL(7), string_6, 1, LOCAL(2),
  // write_all_to! fd "
  var_write_all_to, 2, LOCAL(8), LOCAL(2), IO_CALL(0),
  // load! $result fd
  var_load, 1, LOCAL(8), IO_CALL(1), LOCAL(9),
  // behind &result "@cr;@nl;@cr;@nl;"
  var_behind, 2, LOCAL(9), string_8, 1, LOCAL(9),
  // $info result.from_json
  var_from_json, 1, LOCAL(9), 1, LOCAL(10),
  // info("tokens")
  LOCAL(10), 1, str_tokens, 1, LOCAL(1),
  // -> info("tokens")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(311, 19),
  POS(311, 10),
  POS(312, 10),
  POS(310, 7),
  POS(308, 3),
  POS(313, 3),
  POS(314, 24),
  POS(314, 42),
  POS(314, 3),
  POS(318, 23),
  POS(315, 20),
  POS(315, 3),
  POS(322, 3),
  POS(325, 3),
  POS(326, 3),
  POS(327, 6),
  POS(327, 3)
};

static TAB_NUM t_func_ai_types__model___ai__evaluate[] = {
  15, // locals
  2, // parameters
  LOCAL(9), // 342_0_model
  LOCAL(10), // 343_0_prompt
  // result_count() == 2
  var_result_count, 0, 1, LOCAL(1),
  // $do_return_confidence_values result_count() == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(11),
  // is_a_string)
  var_is_a_string, 1, LOCAL(10), 1, LOCAL(1),
  // $use_tokens not(prompt.is_a_string)
  var_not, 1, LOCAL(1), 1, var_349_1_use_tokens,
  // $PROMPT
  var_if, 3, var_349_1_use_tokens, lambda_45, lambda_46, 1, LOCAL(12),
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
  var_insert_order_table, 6, LOCAL(1), LOCAL(3), LOCAL(4), LOCAL(5), key_value_pair_362_1, key_value_pair_363_1, 1, LOCAL(8),
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
  var_from_json, 1, LOCAL(15), 1, var_377_1_info,
  // if
  var_if, 3, LOCAL(11), lambda_do_return_confidence_values, lambda_50, TAIL_CALL,
  POS(348, 32),
  POS(348, 3),
  POS(349, 26),
  POS(349, 3),
  POS(350, 3),
  POS(358, 9),
  POS(359, 19),
  POS(359, 10),
  POS(360, 10),
  POS(361, 10),
  POS(357, 7),
  POS(355, 3),
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
  POS(378, 3)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  //  "tokens"
  LET, 1, str_tokens, TAIL_CALL,
  POS(353, 9)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  //  "prompt"
  LET, 1, str_prompt, TAIL_CALL,
  POS(354, 9)
};

static TAB_NUM t_lambda_do_return_confidence_values[] = {
  0, // locals
  0, // parameters
  // $logits info("logits")
  var_377_1_info, 1, str_logits, 1, var_380_1_logits,
  // map &logits: (logit) tuple logit(1) logit(2)
  var_map, 2, var_380_1_logits, lambda_47, 1, var_380_1_logits,
  // if
  var_if, 3, var_349_1_use_tokens, lambda_48, lambda_49, TAIL_CALL,
  POS(380, 7),
  POS(381, 7),
  POS(382, 7)
};

static TAB_NUM t_lambda_47[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 381_14_logit
  // logit(1) logit(2)
  LOCAL(3), 1, num_1, 1, LOCAL(1),
  // logit(2)
  LOCAL(3), 1, num_2, 1, LOCAL(2),
  // tuple logit(1) logit(2)
  var_tuple, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(381, 34),
  POS(381, 43),
  POS(381, 28)
};

static TAB_NUM t_lambda_48[] = {
  1, // locals
  0, // parameters
  // info("token") logits
  var_377_1_info, 1, str_token, 1, LOCAL(1),
  //  info("token") logits
  LET, 2, LOCAL(1), var_380_1_logits, TAIL_CALL,
  POS(384, 12),
  POS(384, 11)
};

static TAB_NUM t_lambda_49[] = {
  1, // locals
  0, // parameters
  // info("content") logits
  var_377_1_info, 1, str_content, 1, LOCAL(1),
  //  info("content") logits
  LET, 2, LOCAL(1), var_380_1_logits, TAIL_CALL,
  POS(385, 12),
  POS(385, 11)
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_349_1_use_tokens, lambda_51, lambda_52, TAIL_CALL,
  POS(387, 7)
};

static TAB_NUM t_lambda_51[] = {
  1, // locals
  0, // parameters
  // info("token")
  var_377_1_info, 1, str_token, 1, LOCAL(1),
  //  info("token")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(389, 12),
  POS(389, 11)
};

static TAB_NUM t_lambda_52[] = {
  1, // locals
  0, // parameters
  // info("content")
  var_377_1_info, 1, str_content, 1, LOCAL(1),
  //  info("content")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(390, 12),
  POS(390, 11)
};

static TAB_NUM t_func_ai_types__model___ai__detokenize[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 394_0_model
  var_395_0_token_or_list,
  // $pieces ai::pieces_of(model)
  var_ai__pieces_of, 1, LOCAL(2), 1, var_397_1_pieces,
  // is_a_list
  var_is_a_list, 1, var_395_0_token_or_list, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_53, lambda_54, TAIL_CALL,
  POS(397, 3),
  POS(399, 19),
  POS(398, 3)
};

static TAB_NUM t_lambda_53[] = {
  1, // locals
  0, // parameters
  // map_reduce(token_or_list token_to_piece append "")
  var_map_reduce, 4, var_395_0_token_or_list, func_token_to_piece, var_append, string_2, 1, LOCAL(1),
  //  map_reduce(token_or_list token_to_piece append "")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(400, 8),
  POS(400, 7)
};

static TAB_NUM t_lambda_54[] = {
  1, // locals
  0, // parameters
  // token_to_piece(token_or_list)
  func_token_to_piece, 1, var_395_0_token_or_list, 1, LOCAL(1),
  //  token_to_piece(token_or_list)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(402, 8),
  POS(402, 7)
};

static TAB_NUM t_func_token_to_piece[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 404_18_token
  // token+1)
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(1),
  // $piece pieces(token+1)
  var_397_1_pieces, 1, LOCAL(1), 1, var_405_1_piece,
  // any_of(piece: (chr) -> chr == '@0x142;')
  var_any_of, 2, var_405_1_piece, lambda_any_ofpiece, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_55, lambda_56, TAIL_CALL,
  POS(405, 19),
  POS(405, 5),
  POS(407, 7),
  POS(406, 5)
};

static TAB_NUM t_lambda_any_ofpiece[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 407_15_chr
  // chr == '@0x142;')
  var_std__equal, 2, LOCAL(2), chr_322, 1, LOCAL(1),
  // -> chr == '@0x142;')
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(407, 30),
  POS(407, 27)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  //  "<???>" # 'ł' cannot be printed - why?
  LET, 1, string_9, TAIL_CALL,
  POS(408, 9)
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  //  piece
  LET, 1, var_405_1_piece, TAIL_CALL,
  POS(409, 9)
};

static TAB_NUM t_func_build_piece_table[] = {
  0, // locals
  1, // parameters
  var_411_21_model,
  // $pieces ai::pieces_of(model)
  var_ai__pieces_of, 1, var_411_21_model, 1, var_412_1_pieces,
  // $piece_table empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_413_1_piece_table,
  // for_each pieces
  var_for_each, 3, var_412_1_pieces, lambda_57, lambda_59, TAIL_CALL,
  POS(412, 3),
  POS(413, 3),
  POS(414, 3)
};

static TAB_NUM t_lambda_57[] = {
  1, // locals
  2, // parameters
  var_415_3_idx,
  var_415_7_piece,
  // is_empty
  var_is_empty, 1, var_415_7_piece, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_58, TAIL_CALL,
  POS(417, 15),
  POS(416, 7)
};

static TAB_NUM t_lambda_58[] = {
  2, // locals
  0, // parameters
  // !piece_table(piece) idx-1
  var_std__minus, 2, var_415_3_idx, num_1, 1, LOCAL(2),
  // piece_table(piece) idx-1
  var_413_1_piece_table, 2, var_415_7_piece, LOCAL(2), 1, var_413_1_piece_table,
  // next
  var_next, 0, TAIL_CALL,
  POS(420, 11),
  POS(420, 12),
  POS(421, 11)
};

static TAB_NUM t_lambda_59[] = {
  2, // locals
  0, // parameters
  // map_reduce(pieces length_of max)
  var_map_reduce, 3, var_412_1_pieces, var_length_of, var_max, 1, LOCAL(1),
  // model
  LET, -2, var_411_21_model, var_ai__piece_table_of, var_413_1_piece_table, var_ai__maximum_piece_length_of, LOCAL(1), LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(425, 38),
  POS(423, 7),
  POS(422, 7)
};

static TAB_NUM t_func_quoted[] = {
  0, // locals
  1, // parameters
  var_427_10_text,
  // $buf ""
  LET, 1, string_2, 1, var_428_1_buf,
  // $s 1
  LET, 1, num_1, 1, var_429_1_s,
  // $n length_of(text)
  var_length_of, 1, var_427_10_text, 1, var_430_1_n,
  // $i 0
  LET, 1, num_0, 1, var_431_1_i,
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(428, 3),
  POS(429, 3),
  POS(430, 3),
  POS(431, 3),
  POS(432, 3)
};

static TAB_NUM t_lambda_2_loop[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_431_1_i, 1, var_431_1_i,
  // n
  var_std__less, 2, var_430_1_n, var_431_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_60, lambda_61, TAIL_CALL,
  POS(433, 5),
  POS(435, 11),
  POS(434, 5)
};

static TAB_NUM t_lambda_60[] = {
  2, // locals
  0, // parameters
  // range(text s n))
  var_range, 3, var_427_10_text, var_429_1_s, var_430_1_n, 1, LOCAL(1),
  // append(buf range(text s n))
  var_append, 2, var_428_1_buf, LOCAL(1), 1, LOCAL(2),
  //  append(buf range(text s n))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(436, 21),
  POS(436, 10),
  POS(436, 9)
};

static TAB_NUM t_lambda_61[] = {
  0, // locals
  0, // parameters
  // $chr text(i)
  var_427_10_text, 1, var_431_1_i, 1, var_438_1_chr,
  // case chr
  var_case, 6, var_438_1_chr, chr_10, lambda_nl, sequence_445_2, lambda_62, var_next, TAIL_CALL,
  POS(438, 9),
  POS(439, 9)
};

static TAB_NUM t_lambda_nl[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_431_1_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_427_10_text, var_429_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(text s i-1)
  var_append, 2, var_428_1_buf, LOCAL(2), 1, var_428_1_buf,
  // append &buf "\n"
  var_append, 2, var_428_1_buf, str_n, 1, var_428_1_buf,
  // !s i+1
  var_std__plus, 2, var_431_1_i, num_1, 1, var_429_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(441, 38),
  POS(441, 25),
  POS(441, 13),
  POS(442, 13),
  POS(443, 13),
  POS(444, 13)
};

static TAB_NUM t_lambda_62[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_431_1_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_427_10_text, var_429_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(text s i-1)
  var_append, 2, var_428_1_buf, LOCAL(2), 1, var_428_1_buf,
  // push &buf '\'
  var_push, 2, var_428_1_buf, chr_92, 1, var_428_1_buf,
  // push &buf chr
  var_push, 2, var_428_1_buf, var_438_1_chr, 1, var_428_1_buf,
  // !s i+1
  var_std__plus, 2, var_431_1_i, num_1, 1, var_429_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(446, 38),
  POS(446, 25),
  POS(446, 13),
  POS(447, 13),
  POS(448, 13),
  POS(449, 13),
  POS(450, 13)
};

static int key_value_pair_207_21_arguments[] = {
  -chr_9, -str_ht
};

static int key_value_pair_362_1_arguments[] = {
  -str_n_probs, -num_10
};

static int key_value_pair_363_1_arguments[] = {
  -str_n_predict, -num_1
};

static int sequence_445_2_arguments[] = {
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
  {FLT_STRING_8, 9, {.str_8 = "127.0.0.1"}},
  {FLT_POSITIVE_INT64, 0, {.value = 8080}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai_types__model___ai__generate}},
  {FLT_POSITIVE_INT64, 0, {.value = 15}},
  {FLT_POSITIVE_INT64, 0, {.value = 1024}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_generate_text}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_STRING_8, 15, {.str_8 = "<end of stream>"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_POSITIVE_INT64, 0, {.value = 1000}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_STRING_8, 1, {.str_8 = "\042"}},
  {FLT_STRING_8, 2, {.str_8 = "\042:"}},
  {FLT_STRING_8, 15, {.str_8 = "[#%4] %l18 %3.3"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_STRING_8, 23, {.str_8 = "-[#%4|%3.1 ms]---------"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_STRING_8, 24, {.str_8 = "-[#%4]------------------"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_CHARACTER, 0, {.value = 9}},
  {FLT_STRING_8, 8, {.str_8 = "<<<ht>>>"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_207_21_arguments}},
  {FLT_STRING_8, 9, {.str_8 = "%l18 %3.3"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_POSITIVE_INT64, 0, {.value = 5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_response_is_empty}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_STRING_8, 3, {.str_8 = "\010 \010"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_print_piece}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_POSITIVE_INT64, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai_types__model___ai__get_tokens}},
  {FLT_STRING_8, 5, {.str_8 = "model"}},
  {FLT_STRING_8, 75, {.str_8 = "POST /get_tokens HTTP/1.1\015\012Content-Type: application/json\015\012Content-Length: "}},
  {FLT_STRING_8, 23, {.str_8 = "\015\012Connection: close\015\012\015\012"}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_POSITIVE_INT64, 0, {.value = 300}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_STRING_8, 4, {.str_8 = "\015\012\015\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_STRING_8, 6, {.str_8 = "tokens"}},
  {FLT_STRING_8, 15, {.str_8 = "begin_of_stream"}},
  {FLT_STRING_8, 13, {.str_8 = "end_of_stream"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai_types__model___ai__tokenize}},
  {FLT_STRING_8, 7, {.str_8 = "content"}},
  {FLT_STRING_8, 73, {.str_8 = "POST /tokenize HTTP/1.1\015\012Content-Type: application/json\015\012Content-Length: "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai_types__model___ai__evaluate}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_STRING_8, 6, {.str_8 = "prompt"}},
  {FLT_STRING_8, 6, {.str_8 = "logits"}},
  {FLT_STRING_8, 5, {.str_8 = "brief"}},
  {FLT_STRING_8, 7, {.str_8 = "n_probs"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_362_1_arguments}},
  {FLT_STRING_8, 9, {.str_8 = "n_predict"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_363_1_arguments}},
  {FLT_STRING_8, 75, {.str_8 = "POST /completion HTTP/1.1\015\012Content-Type: application/json\015\012Content-Length: "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_return_confidence_values}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_STRING_8, 5, {.str_8 = "token"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai_types__model___ai__detokenize}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_token_to_piece}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_any_ofpiece}},
  {FLT_CHARACTER, 0, {.value = 322}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_STRING_8, 5, {.str_8 = "<???>"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_build_piece_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_quoted}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_CHARACTER, 0, {.value = 92}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_445_2_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_nl}},
  {FLT_STRING_8, 2, {.str_8 = "\134n"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}}
};

static ATTRIBUTE_DEFINITION ai_types__model__attributes[] = {
  {var_ai__generate, -func_ai_types__model___ai__generate},
  {var_ai__get_tokens, -func_ai_types__model___ai__get_tokens},
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
    "get_tokens\000ai", NULL,
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
    FOT_DERIVED, 0, 5,
    "model\000ai_types", ai_types__model__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "object\000std_types", NULL,
    {.position = POS(115, 18)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "load_ai_model\000ai", NULL,
    {.const_idx = -func_ai__load_ai_model}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "name_of\000", NULL,
    {.position = POS(131, 8)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "address_of\000", NULL,
    {.position = POS(132, 8)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "port_no_of\000", NULL,
    {.position = POS(133, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "129_1_model\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(139, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(138, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "146_0_model\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value_pair\000std", NULL,
    {.position = POS(151, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(153, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(156, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "151_29_minimum_confidence\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "152_27_maximum_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "153_22_stop_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "154_19_backtrack\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "155_19_log_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "156_21_be_verbose\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "157_25_use_colours\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "extract_options\000", NULL,
    {.position = POS(150, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "158_1_do_log\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(158, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(159, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(159, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "BLACK\000", NULL,
    {.position = POS(160, 43)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ansi_text_colour\000", NULL,
    {.position = POS(160, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print\000", NULL,
    {.position = POS(160, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(160, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "put\000", NULL,
    {.position = POS(163, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "162_16_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ansi_reset_colour\000", NULL,
    {.position = POS(164, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "println\000", NULL,
    {.position = POS(165, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(167, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(167, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(169, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "171_17_tokens\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "171_24_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "171_29_no\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(173, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "contains\000", NULL,
    {.position = POS(173, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(173, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "176_1_t\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_time\000", NULL,
    {.position = POS(176, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "177_28_next_token\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "177_40_confidence_values\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprintln\000", NULL,
    {.position = POS(181, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "184_1_max_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "186_34_next_confidence\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "187_1_next_piece\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(189, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "189_1_dt\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(189, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(191, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(192, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "format\000", NULL,
    {.position = POS(194, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "replace_all\000", NULL,
    {.position = POS(207, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(210, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(203, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(213, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim_left\000", NULL,
    {.position = POS(214, 50)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(218, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(221, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(223, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "220_16_response\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "extend_to\000", NULL,
    {.position = POS(224, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(226, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(233, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dup\000", NULL,
    {.position = POS(239, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(241, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(185, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "246_15_piece\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "246_21_confidence\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "248_1_confidence_delta\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "negate\000std", NULL,
    {.position = POS(253, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "RED\000", NULL,
    {.position = POS(254, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "colour_mixture\000", NULL,
    {.position = POS(252, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "GREEN\000", NULL,
    {.position = POS(257, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WHITE\000", NULL,
    {.position = POS(258, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(250, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ansi_background_colour\000", NULL,
    {.position = POS(263, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "insert_order_table\000", NULL,
    {.position = POS(277, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_json\000", NULL,
    {.position = POS(276, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open_tcp_socket\000", NULL,
    {.position = POS(279, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print_to\000", NULL,
    {.position = POS(280, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "287_7_result\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "load\000", NULL,
    {.position = POS(287, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "between\000", NULL,
    {.position = POS(290, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(290, 39)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "behind\000", NULL,
    {.position = POS(293, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error\000", NULL,
    {.position = POS(293, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_utf8\000", NULL,
    {.position = POS(296, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_json\000", NULL,
    {.position = POS(297, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(313, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write_all_to\000", NULL,
    {.position = POS(315, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(349, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "349_1_use_tokens\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(349, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "377_1_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "380_1_logits\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(381, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(381, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "395_0_token_or_list\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "397_1_pieces\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(399, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(400, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "405_1_piece\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(407, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "411_21_model\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "412_1_pieces\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "413_1_piece_table\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(413, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "415_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "415_7_piece\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(425, 66)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "427_10_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "428_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "429_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "430_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "431_1_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(433, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "438_1_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(445, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(439, 9)}
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
  138, // number of constants
  144, // number of variables
  NULL, // required modules
  defined_namespaces,
  used_namespaces,
  constants_table,
  variables_table,
};
