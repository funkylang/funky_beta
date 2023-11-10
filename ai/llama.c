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
  key_value_pair_208_21 = -48,
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
  lambda_45 = -95,
  str_content = -96,
  lambda_46 = -97,
  str_lines = -98,
  str_POST_tokenize_HT = -99,
  func_ai_types__model___ai__evaluate = -100,
  lambda_47 = -101,
  lambda_48 = -102,
  str_prompt = -103,
  str_logits = -104,
  str_brief = -105,
  str_n_probs = -106,
  key_value_pair_374_1 = -107,
  str_n_predict = -108,
  key_value_pair_375_1 = -109,
  str_POST_completion = -110,
  lambda_do_return_confidence_values = -111,
  lambda_49 = -112,
  lambda_50 = -113,
  str_token = -114,
  lambda_51 = -115,
  lambda_52 = -116,
  lambda_53 = -117,
  lambda_54 = -118,
  func_ai_types__model___ai__detokenize = -119,
  lambda_55 = -120,
  lambda_56 = -121,
  func_token_to_piece = -122,
  lambda_any_ofpiece = -123,
  chr_322 = -124,
  lambda_57 = -125,
  string_9 = -126,
  lambda_58 = -127,
  func_build_piece_table = -128,
  lambda_59 = -129,
  lambda_60 = -130,
  lambda_61 = -131,
  func_ai__escaped_token = -132,
  func_ai__escaped_piece = -133,
  lambda_2_loop = -134,
  lambda_62 = -135,
  lambda_63 = -136,
  chr_34 = -137,
  chr_92 = -138,
  sequence_460_2 = -139,
  lambda_nl = -140,
  str_n = -141,
  lambda_64 = -142
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
  var_221_16_response, // dynamic
  var_extend_to, // extern
  var_is_empty, // extern
  var_length_of, // extern
  var_dup, // extern
  var_range, // extern
  var_loop, // extern
  var_247_15_piece, // dynamic
  var_247_21_confidence, // dynamic
  var_249_1_confidence_delta, // dynamic
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
  var_288_7_result, // dynamic
  var_load, // extern
  var_between, // extern
  var_to_integer, // extern
  var_behind, // extern
  var_error, // extern
  var_from_utf8, // extern
  var_from_json, // extern
  var_is_a_string, // extern
  var_to_utf8, // extern
  var_write_all_to, // extern
  var_361_1_use_tokens, // dynamic
  var_not, // extern
  var_389_1_info, // dynamic
  var_392_1_logits, // dynamic
  var_tuple, // extern
  var_map, // extern
  var_407_0_token_or_list, // dynamic
  var_409_1_pieces, // dynamic
  var_is_a_list, // extern
  var_map_reduce, // extern
  var_417_1_piece, // dynamic
  var_any_of, // extern
  var_423_21_model, // dynamic
  var_424_1_pieces, // dynamic
  var_425_1_piece_table, // dynamic
  var_empty_hash_table, // extern
  var_427_3_idx, // dynamic
  var_427_7_piece, // dynamic
  var_max, // extern
  var_ai__escaped_token, // initialized
  var_442_21_piece, // dynamic
  var_443_1_buf, // dynamic
  var_444_1_s, // dynamic
  var_445_1_n, // dynamic
  var_446_1_i, // dynamic
  var_inc, // extern
  var_453_1_chr, // dynamic
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
  POS(214, 17),
  POS(214, 17),
  POS(214, 17),
  POS(213, 15)
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
  // ai::escaped_piece(next_piece))@quot;:"
  var_ai__escaped_piece, 1, var_187_1_next_piece, 1, LOCAL(1),
  // $token_string
  var_std__string, 3, string_3, LOCAL(1), string_4, 1, LOCAL(2),
  // format
  var_format, 5, str_4_l, var_171_29_no, var_189_1_dt, LOCAL(2), var_186_34_next_confidence, 1, LOCAL(1),
  // eprintln!
  var_eprintln, 1, LOCAL(1), IO_TAIL_CALL,
  POS(193, 32),
  POS(192, 21),
  POS(195, 23),
  POS(194, 21)
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
  POS(200, 23),
  POS(200, 23),
  POS(199, 21),
  POS(204, 21)
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // format("-[#%4|%3.1 ms]---------" no dt)
  var_format, 3, str_431_ms, var_171_29_no, var_189_1_dt, 1, LOCAL(1),
  // eprintln! format("-[#%4|%3.1 ms]---------" no dt)
  var_eprintln, 1, LOCAL(1), IO_TAIL_CALL,
  POS(201, 35),
  POS(201, 25)
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  0, // parameters
  // format("-[#%4]------------------" no dt)
  var_format, 3, string_5, var_171_29_no, var_189_1_dt, 1, LOCAL(1),
  // eprintln! format("-[#%4]------------------" no dt)
  var_eprintln, 1, LOCAL(1), IO_TAIL_CALL,
  POS(203, 35),
  POS(203, 25)
};

static TAB_NUM t_lambda_19[] = {
  6, // locals
  1, // parameters
  LOCAL(2), // 205_3_confidence_value
  // confidence_value $token $confidence
  LOCAL(2), 0, 2, LOCAL(3), LOCAL(4),
  // $piece ai::detokenize(model token)
  var_ai__detokenize, 2, var_146_0_model, LOCAL(3), 1, LOCAL(5),
  // replace_all &piece '@ht;' = "<<<ht>>>"
  var_replace_all, 2, LOCAL(5), key_value_pair_208_21, 1, LOCAL(5),
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
  POS(206, 25),
  POS(207, 25),
  POS(208, 25),
  POS(209, 48),
  POS(209, 25),
  POS(210, 35),
  POS(210, 25),
  POS(211, 25)
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // no < 5:
  var_std__less, 2, var_171_29_no, num_5, 1, LOCAL(1),
  // no < 5:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(214, 58),
  POS(214, 58)
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
  POS(215, 29),
  POS(215, 19),
  POS(216, 19),
  POS(218, 21),
  POS(218, 21),
  POS(217, 19)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  // trim_left next_piece
  var_trim_left, 1, var_187_1_next_piece, TAIL_CALL,
  POS(215, 50)
};

static TAB_NUM t_lambda_23[] = {
  1, // locals
  0, // parameters
  // append(text next_piece) no
  var_append, 2, var_171_24_text, var_187_1_next_piece, 1, LOCAL(1),
  //  append(text next_piece) no
  LET, 2, LOCAL(1), var_171_29_no, TAIL_CALL,
  POS(219, 24),
  POS(219, 23)
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
  func_generate_text, 3, LOCAL(1), LOCAL(2), LOCAL(3), IO_CALL(2), var_221_16_response, LOCAL(4),
  // extend_to &max_no highest_no
  var_extend_to, 2, var_184_1_max_no, LOCAL(4), 1, var_184_1_max_no,
  // is_empty:
  var_is_empty, 1, var_221_16_response, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_response_is_empty, lambda_33, IO_TAIL_CALL,
  POS(222, 25),
  POS(223, 25),
  POS(224, 25),
  POS(221, 23),
  POS(225, 23),
  POS(227, 34),
  POS(226, 23)
};

static TAB_NUM t_lambda_response_is_empty[] = {
  1, // locals
  0, // parameters
  // next_piece == "@nl;"
  var_std__equal, 2, var_187_1_next_piece, string_6, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25, lambda_26, IO_TAIL_CALL,
  POS(229, 29),
  POS(228, 27)
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // push(text '@nl;') max_no # stop backtracking
  var_push, 2, var_171_24_text, chr_10, 1, LOCAL(1),
  //  push(text '@nl;') max_no # stop backtracking
  LET, 2, LOCAL(1), var_184_1_max_no, TAIL_CALL,
  POS(230, 32),
  POS(230, 31)
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
  POS(234, 35),
  POS(234, 35),
  POS(233, 35),
  POS(232, 31)
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
  POS(235, 44),
  POS(235, 44),
  POS(235, 35)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  //  "" max_no
  LET, 2, string_2, var_184_1_max_no, TAIL_CALL,
  POS(236, 35)
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
  POS(238, 35),
  POS(239, 35),
  POS(241, 35),
  POS(242, 35),
  POS(243, 35)
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  0, // parameters
  // ansi_reset_colour()
  var_ansi_reset_colour, 0, 1, LOCAL(1),
  // print! ansi_reset_colour()
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(238, 58),
  POS(238, 51)
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
  POS(240, 53),
  POS(240, 37),
  POS(239, 50)
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // ansi_text_colour(BLACK)
  var_ansi_text_colour, 1, var_BLACK, 1, LOCAL(1),
  // print! ansi_text_colour(BLACK)
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(241, 58),
  POS(241, 51)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  //  response max_no
  LET, 2, var_221_16_response, var_184_1_max_no, TAIL_CALL,
  POS(244, 27)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  //  "" max_no
  LET, 2, string_2, var_184_1_max_no, TAIL_CALL,
  POS(245, 19)
};

static TAB_NUM t_func_print_piece[] = {
  0, // locals
  2, // parameters
  var_247_15_piece,
  var_247_21_confidence,
  // on use_colours:
  var_on, 2, var_157_25_use_colours, lambda_35, IO_CALL(0),
  // on be_verbose: print! piece
  var_on, 2, var_156_21_be_verbose, lambda_42, IO_TAIL_CALL,
  POS(248, 5),
  POS(265, 5)
};

static TAB_NUM t_lambda_35[] = {
  2, // locals
  0, // parameters
  // $confidence_delta confidence-minimum_confidence
  var_std__minus, 2, var_247_21_confidence, var_151_29_minimum_confidence, 1, var_249_1_confidence_delta,
  // $colour
  var_cond, 3, lambda_36, lambda_38, lambda_40, 1, LOCAL(2),
  // ansi_background_colour(colour)
  var_ansi_background_colour, 1, LOCAL(2), 1, LOCAL(1),
  // print! ansi_background_colour(colour)
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(249, 7),
  POS(250, 7),
  POS(264, 14),
  POS(264, 7)
};

static TAB_NUM t_lambda_36[] = {
  1, // locals
  0, // parameters
  // confidence_delta < 0 ->
  var_std__less, 2, var_249_1_confidence_delta, num_0, 1, LOCAL(1),
  //  confidence_delta < 0 ->
  LET, 2, LOCAL(1), lambda_37, TAIL_CALL,
  POS(252, 14),
  POS(252, 13)
};

static TAB_NUM t_lambda_37[] = {
  5, // locals
  0, // parameters
  // confidence_delta
  var_std__negate, 1, var_249_1_confidence_delta, 1, LOCAL(1),
  // BLACK = -confidence_delta
  var_std__key_value_pair, 2, var_BLACK, LOCAL(1), 1, LOCAL(2),
  // minimum_confidence+confidence_delta
  var_std__plus, 2, var_151_29_minimum_confidence, var_249_1_confidence_delta, 1, LOCAL(3),
  // RED = minimum_confidence+confidence_delta
  var_std__key_value_pair, 2, var_RED, LOCAL(3), 1, LOCAL(4),
  // colour_mixture
  var_colour_mixture, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  // 
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(254, 24),
  POS(254, 15),
  POS(255, 21),
  POS(255, 15),
  POS(253, 13),
  POS(252, 37)
};

static TAB_NUM t_lambda_38[] = {
  1, // locals
  0, // parameters
  // 10 ->
  var_std__less, 2, num_10, var_249_1_confidence_delta, 1, LOCAL(1),
  //  confidence_delta > 10 ->
  LET, 2, LOCAL(1), lambda_39, TAIL_CALL,
  POS(256, 33),
  POS(256, 13)
};

static TAB_NUM t_lambda_39[] = {
  4, // locals
  0, // parameters
  // GREEN = 10
  var_std__key_value_pair, 2, var_GREEN, num_10, 1, LOCAL(1),
  // confidence_delta-10
  var_std__minus, 2, var_249_1_confidence_delta, num_10, 1, LOCAL(2),
  // WHITE = confidence_delta-10
  var_std__key_value_pair, 2, var_WHITE, LOCAL(2), 1, LOCAL(3),
  // colour_mixture
  var_colour_mixture, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // 
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(258, 15),
  POS(259, 23),
  POS(259, 15),
  POS(257, 13),
  POS(256, 38)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  //  true ->
  LET, 2, var_true, lambda_41, TAIL_CALL,
  POS(260, 13)
};

static TAB_NUM t_lambda_41[] = {
  4, // locals
  0, // parameters
  // 10-confidence_delta
  var_std__minus, 2, num_10, var_249_1_confidence_delta, 1, LOCAL(1),
  // RED = 10-confidence_delta
  var_std__key_value_pair, 2, var_RED, LOCAL(1), 1, LOCAL(2),
  // GREEN = confidence_delta
  var_std__key_value_pair, 2, var_GREEN, var_249_1_confidence_delta, 1, LOCAL(3),
  // colour_mixture
  var_colour_mixture, 2, LOCAL(2), LOCAL(3), 1, LOCAL(4),
  // 
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(262, 21),
  POS(262, 15),
  POS(263, 15),
  POS(261, 13),
  POS(260, 21)
};

static TAB_NUM t_lambda_42[] = {
  0, // locals
  0, // parameters
  // print! piece
  var_print, 1, var_247_15_piece, IO_TAIL_CALL,
  POS(265, 20)
};

static TAB_NUM t_func_ai_types__model___ai__get_tokens[] = {
  7, // locals
  1, // parameters
  LOCAL(4), // 271_0_model
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
  var_load, 1, LOCAL(6), IO_CALL(1), var_288_7_result,
  // between(result ' ' ' ').to_integer
  var_between, 3, var_288_7_result, chr_32, chr_32, 1, LOCAL(1),
  // $error_code between(result ' ' ' ').to_integer
  var_to_integer, 1, LOCAL(1), 1, LOCAL(7),
  // error_code >= 300:
  var_std__less, 2, LOCAL(7), num_300, 1, LOCAL(1),
  // error_code >= 300:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_43, lambda_44, TAIL_CALL,
  POS(279, 19),
  POS(279, 10),
  POS(278, 7),
  POS(276, 3),
  POS(280, 24),
  POS(280, 42),
  POS(280, 3),
  POS(284, 23),
  POS(281, 16),
  POS(281, 3),
  POS(288, 3),
  POS(291, 15),
  POS(291, 3),
  POS(293, 5),
  POS(293, 5),
  POS(292, 3)
};

static TAB_NUM t_lambda_43[] = {
  1, // locals
  0, // parameters
  // result .behind. "@cr;@nl;@cr;@nl;"
  var_behind, 2, var_288_7_result, string_8, 1, LOCAL(1),
  // error result .behind. "@cr;@nl;@cr;@nl;"
  var_error, 1, LOCAL(1), TAIL_CALL,
  POS(294, 13),
  POS(294, 7)
};

static TAB_NUM t_lambda_44[] = {
  4, // locals
  0, // parameters
  // behind &result "@cr;@nl;@cr;@nl;"
  var_behind, 2, var_288_7_result, string_8, 1, var_288_7_result,
  // from_utf8 &result
  var_from_utf8, 1, var_288_7_result, 1, var_288_7_result,
  // $info result.from_json
  var_from_json, 1, var_288_7_result, 1, LOCAL(4),
  // info("tokens") info("begin_of_stream") info("end_of_stream")
  LOCAL(4), 1, str_tokens, 1, LOCAL(1),
  // info("begin_of_stream") info("end_of_stream")
  LOCAL(4), 1, str_begin_of_stream, 1, LOCAL(2),
  // info("end_of_stream")
  LOCAL(4), 1, str_end_of_stream_2, 1, LOCAL(3),
  // -> info("tokens") info("begin_of_stream") info("end_of_stream")
  LET, 3, LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(296, 7),
  POS(297, 7),
  POS(298, 7),
  POS(299, 10),
  POS(299, 25),
  POS(299, 49),
  POS(299, 7)
};

static TAB_NUM t_func_ai_types__model___ai__tokenize[] = {
  11, // locals
  2, // parameters
  LOCAL(5), // 309_0_model
  LOCAL(6), // 310_0_text
  // is_a_string
  var_is_a_string, 1, LOCAL(6), 1, LOCAL(1),
  // $CONTENT
  var_if, 3, LOCAL(1), lambda_45, lambda_46, 1, LOCAL(7),
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
  POS(317, 12),
  POS(315, 3),
  POS(323, 19),
  POS(323, 10),
  POS(324, 9),
  POS(322, 7),
  POS(320, 3),
  POS(325, 3),
  POS(326, 24),
  POS(326, 42),
  POS(326, 3),
  POS(330, 23),
  POS(327, 20),
  POS(327, 3),
  POS(334, 3),
  POS(337, 3),
  POS(338, 3),
  POS(339, 6),
  POS(339, 3)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  //  "content"
  LET, 1, str_content, TAIL_CALL,
  POS(318, 9)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  //  "lines"
  LET, 1, str_lines, TAIL_CALL,
  POS(319, 9)
};

static TAB_NUM t_func_ai_types__model___ai__evaluate[] = {
  15, // locals
  2, // parameters
  LOCAL(9), // 354_0_model
  LOCAL(10), // 355_0_prompt
  // result_count() == 2
  var_result_count, 0, 1, LOCAL(1),
  // $do_return_confidence_values result_count() == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(11),
  // is_a_string)
  var_is_a_string, 1, LOCAL(10), 1, LOCAL(1),
  // $use_tokens not(prompt.is_a_string)
  var_not, 1, LOCAL(1), 1, var_361_1_use_tokens,
  // $PROMPT
  var_if, 3, var_361_1_use_tokens, lambda_47, lambda_48, 1, LOCAL(12),
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
  var_insert_order_table, 6, LOCAL(1), LOCAL(3), LOCAL(4), LOCAL(5), key_value_pair_374_1, key_value_pair_375_1, 1, LOCAL(8),
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
  var_from_json, 1, LOCAL(15), 1, var_389_1_info,
  // if
  var_if, 3, LOCAL(11), lambda_do_return_confidence_values, lambda_52, TAIL_CALL,
  POS(360, 32),
  POS(360, 3),
  POS(361, 26),
  POS(361, 3),
  POS(362, 3),
  POS(370, 9),
  POS(371, 19),
  POS(371, 10),
  POS(372, 10),
  POS(373, 10),
  POS(369, 7),
  POS(367, 3),
  POS(376, 3),
  POS(377, 24),
  POS(377, 42),
  POS(377, 3),
  POS(381, 23),
  POS(378, 20),
  POS(378, 3),
  POS(385, 3),
  POS(388, 3),
  POS(389, 3),
  POS(390, 3)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  //  "tokens"
  LET, 1, str_tokens, TAIL_CALL,
  POS(365, 9)
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  //  "prompt"
  LET, 1, str_prompt, TAIL_CALL,
  POS(366, 9)
};

static TAB_NUM t_lambda_do_return_confidence_values[] = {
  0, // locals
  0, // parameters
  // $logits info("logits")
  var_389_1_info, 1, str_logits, 1, var_392_1_logits,
  // map &logits: (logit) tuple logit(1) logit(2)
  var_map, 2, var_392_1_logits, lambda_49, 1, var_392_1_logits,
  // if
  var_if, 3, var_361_1_use_tokens, lambda_50, lambda_51, TAIL_CALL,
  POS(392, 7),
  POS(393, 7),
  POS(394, 7)
};

static TAB_NUM t_lambda_49[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 393_14_logit
  // logit(1) logit(2)
  LOCAL(3), 1, num_1, 1, LOCAL(1),
  // logit(2)
  LOCAL(3), 1, num_2, 1, LOCAL(2),
  // tuple logit(1) logit(2)
  var_tuple, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(393, 34),
  POS(393, 43),
  POS(393, 28)
};

static TAB_NUM t_lambda_50[] = {
  1, // locals
  0, // parameters
  // info("token") logits
  var_389_1_info, 1, str_token, 1, LOCAL(1),
  //  info("token") logits
  LET, 2, LOCAL(1), var_392_1_logits, TAIL_CALL,
  POS(396, 12),
  POS(396, 11)
};

static TAB_NUM t_lambda_51[] = {
  1, // locals
  0, // parameters
  // info("content") logits
  var_389_1_info, 1, str_content, 1, LOCAL(1),
  //  info("content") logits
  LET, 2, LOCAL(1), var_392_1_logits, TAIL_CALL,
  POS(397, 12),
  POS(397, 11)
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_361_1_use_tokens, lambda_53, lambda_54, TAIL_CALL,
  POS(399, 7)
};

static TAB_NUM t_lambda_53[] = {
  1, // locals
  0, // parameters
  // info("token")
  var_389_1_info, 1, str_token, 1, LOCAL(1),
  //  info("token")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(401, 12),
  POS(401, 11)
};

static TAB_NUM t_lambda_54[] = {
  1, // locals
  0, // parameters
  // info("content")
  var_389_1_info, 1, str_content, 1, LOCAL(1),
  //  info("content")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(402, 12),
  POS(402, 11)
};

static TAB_NUM t_func_ai_types__model___ai__detokenize[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 406_0_model
  var_407_0_token_or_list,
  // $pieces ai::pieces_of(model)
  var_ai__pieces_of, 1, LOCAL(2), 1, var_409_1_pieces,
  // is_a_list
  var_is_a_list, 1, var_407_0_token_or_list, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_55, lambda_56, TAIL_CALL,
  POS(409, 3),
  POS(411, 19),
  POS(410, 3)
};

static TAB_NUM t_lambda_55[] = {
  1, // locals
  0, // parameters
  // map_reduce(token_or_list token_to_piece append "")
  var_map_reduce, 4, var_407_0_token_or_list, func_token_to_piece, var_append, string_2, 1, LOCAL(1),
  //  map_reduce(token_or_list token_to_piece append "")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(412, 8),
  POS(412, 7)
};

static TAB_NUM t_lambda_56[] = {
  1, // locals
  0, // parameters
  // token_to_piece(token_or_list)
  func_token_to_piece, 1, var_407_0_token_or_list, 1, LOCAL(1),
  //  token_to_piece(token_or_list)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(414, 8),
  POS(414, 7)
};

static TAB_NUM t_func_token_to_piece[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 416_18_token
  // token+1)
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(1),
  // $piece pieces(token+1)
  var_409_1_pieces, 1, LOCAL(1), 1, var_417_1_piece,
  // any_of(piece: (chr) -> chr == '@0x142;')
  var_any_of, 2, var_417_1_piece, lambda_any_ofpiece, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_57, lambda_58, TAIL_CALL,
  POS(417, 19),
  POS(417, 5),
  POS(419, 7),
  POS(418, 5)
};

static TAB_NUM t_lambda_any_ofpiece[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 419_15_chr
  // chr == '@0x142;')
  var_std__equal, 2, LOCAL(2), chr_322, 1, LOCAL(1),
  // -> chr == '@0x142;')
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(419, 30),
  POS(419, 27)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  //  "<???>" # 'ł' cannot be printed - why?
  LET, 1, string_9, TAIL_CALL,
  POS(420, 9)
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  0, // parameters
  //  piece
  LET, 1, var_417_1_piece, TAIL_CALL,
  POS(421, 9)
};

static TAB_NUM t_func_build_piece_table[] = {
  0, // locals
  1, // parameters
  var_423_21_model,
  // $pieces ai::pieces_of(model)
  var_ai__pieces_of, 1, var_423_21_model, 1, var_424_1_pieces,
  // $piece_table empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_425_1_piece_table,
  // for_each pieces
  var_for_each, 3, var_424_1_pieces, lambda_59, lambda_61, TAIL_CALL,
  POS(424, 3),
  POS(425, 3),
  POS(426, 3)
};

static TAB_NUM t_lambda_59[] = {
  1, // locals
  2, // parameters
  var_427_3_idx,
  var_427_7_piece,
  // is_empty
  var_is_empty, 1, var_427_7_piece, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_60, TAIL_CALL,
  POS(429, 15),
  POS(428, 7)
};

static TAB_NUM t_lambda_60[] = {
  2, // locals
  0, // parameters
  // !piece_table(piece) idx-1
  var_std__minus, 2, var_427_3_idx, num_1, 1, LOCAL(2),
  // piece_table(piece) idx-1
  var_425_1_piece_table, 2, var_427_7_piece, LOCAL(2), 1, var_425_1_piece_table,
  // next
  var_next, 0, TAIL_CALL,
  POS(432, 11),
  POS(432, 12),
  POS(433, 11)
};

static TAB_NUM t_lambda_61[] = {
  2, // locals
  0, // parameters
  // map_reduce(pieces length_of max)
  var_map_reduce, 3, var_424_1_pieces, var_length_of, var_max, 1, LOCAL(1),
  // model
  LET, -2, var_423_21_model, var_ai__piece_table_of, var_425_1_piece_table, var_ai__maximum_piece_length_of, LOCAL(1), LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(437, 38),
  POS(435, 7),
  POS(434, 7)
};

static TAB_NUM t_func_ai__escaped_token[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 439_21_model
  LOCAL(4), // 439_27_token
  // ai::detokenize(model token))
  var_ai__detokenize, 2, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // ai::escaped_piece(ai::detokenize(model token))
  var_ai__escaped_piece, 1, LOCAL(1), 1, LOCAL(2),
  // -> ai::escaped_piece(ai::detokenize(model token))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(440, 24),
  POS(440, 6),
  POS(440, 3)
};

static TAB_NUM t_func_ai__escaped_piece[] = {
  0, // locals
  1, // parameters
  var_442_21_piece,
  // $buf ""
  LET, 1, string_2, 1, var_443_1_buf,
  // $s 1
  LET, 1, num_1, 1, var_444_1_s,
  // $n length_of(piece)
  var_length_of, 1, var_442_21_piece, 1, var_445_1_n,
  // $i 0
  LET, 1, num_0, 1, var_446_1_i,
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(443, 3),
  POS(444, 3),
  POS(445, 3),
  POS(446, 3),
  POS(447, 3)
};

static TAB_NUM t_lambda_2_loop[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_446_1_i, 1, var_446_1_i,
  // n
  var_std__less, 2, var_445_1_n, var_446_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_62, lambda_63, TAIL_CALL,
  POS(448, 5),
  POS(450, 11),
  POS(449, 5)
};

static TAB_NUM t_lambda_62[] = {
  2, // locals
  0, // parameters
  // range(piece s n))
  var_range, 3, var_442_21_piece, var_444_1_s, var_445_1_n, 1, LOCAL(1),
  // append(buf range(piece s n))
  var_append, 2, var_443_1_buf, LOCAL(1), 1, LOCAL(2),
  //  append(buf range(piece s n))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(451, 21),
  POS(451, 10),
  POS(451, 9)
};

static TAB_NUM t_lambda_63[] = {
  0, // locals
  0, // parameters
  // $chr piece(i)
  var_442_21_piece, 1, var_446_1_i, 1, var_453_1_chr,
  // case chr
  var_case, 6, var_453_1_chr, chr_10, lambda_nl, sequence_460_2, lambda_64, var_next, TAIL_CALL,
  POS(453, 9),
  POS(454, 9)
};

static TAB_NUM t_lambda_nl[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_446_1_i, num_1, 1, LOCAL(1),
  // range(piece s i-1)
  var_range, 3, var_442_21_piece, var_444_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(piece s i-1)
  var_append, 2, var_443_1_buf, LOCAL(2), 1, var_443_1_buf,
  // append &buf "\n"
  var_append, 2, var_443_1_buf, str_n, 1, var_443_1_buf,
  // !s i+1
  var_std__plus, 2, var_446_1_i, num_1, 1, var_444_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(456, 39),
  POS(456, 25),
  POS(456, 13),
  POS(457, 13),
  POS(458, 13),
  POS(459, 13)
};

static TAB_NUM t_lambda_64[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_446_1_i, num_1, 1, LOCAL(1),
  // range(piece s i-1)
  var_range, 3, var_442_21_piece, var_444_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(piece s i-1)
  var_append, 2, var_443_1_buf, LOCAL(2), 1, var_443_1_buf,
  // push &buf '\'
  var_push, 2, var_443_1_buf, chr_92, 1, var_443_1_buf,
  // push &buf chr
  var_push, 2, var_443_1_buf, var_453_1_chr, 1, var_443_1_buf,
  // !s i+1
  var_std__plus, 2, var_446_1_i, num_1, 1, var_444_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(461, 39),
  POS(461, 25),
  POS(461, 13),
  POS(462, 13),
  POS(463, 13),
  POS(464, 13),
  POS(465, 13)
};

static int key_value_pair_208_21_arguments[] = {
  -chr_9, -str_ht
};

static int key_value_pair_374_1_arguments[] = {
  -str_n_probs, -num_10
};

static int key_value_pair_375_1_arguments[] = {
  -str_n_predict, -num_1
};

static int sequence_460_2_arguments[] = {
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
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_208_21_arguments}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_STRING_8, 7, {.str_8 = "content"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_STRING_8, 5, {.str_8 = "lines"}},
  {FLT_STRING_8, 73, {.str_8 = "POST /tokenize HTTP/1.1\015\012Content-Type: application/json\015\012Content-Length: "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai_types__model___ai__evaluate}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_STRING_8, 6, {.str_8 = "prompt"}},
  {FLT_STRING_8, 6, {.str_8 = "logits"}},
  {FLT_STRING_8, 5, {.str_8 = "brief"}},
  {FLT_STRING_8, 7, {.str_8 = "n_probs"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_374_1_arguments}},
  {FLT_STRING_8, 9, {.str_8 = "n_predict"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_375_1_arguments}},
  {FLT_STRING_8, 75, {.str_8 = "POST /completion HTTP/1.1\015\012Content-Type: application/json\015\012Content-Length: "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_return_confidence_values}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_STRING_8, 5, {.str_8 = "token"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai_types__model___ai__detokenize}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_token_to_piece}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_any_ofpiece}},
  {FLT_CHARACTER, 0, {.value = 322}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_STRING_8, 5, {.str_8 = "<???>"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_build_piece_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai__escaped_token}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai__escaped_piece}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_CHARACTER, 0, {.value = 92}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_460_2_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_nl}},
  {FLT_STRING_8, 2, {.str_8 = "\134n"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}}
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
    FOT_INITIALIZED, 0, 0,
    "escaped_piece\000ai", NULL,
    {.const_idx = -func_ai__escaped_piece}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(193, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "format\000", NULL,
    {.position = POS(195, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "replace_all\000", NULL,
    {.position = POS(208, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(211, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(204, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(214, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim_left\000", NULL,
    {.position = POS(215, 50)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(219, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(222, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(224, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "221_16_response\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "extend_to\000", NULL,
    {.position = POS(225, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(227, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(234, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dup\000", NULL,
    {.position = POS(240, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(242, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(185, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "247_15_piece\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "247_21_confidence\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "249_1_confidence_delta\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "negate\000std", NULL,
    {.position = POS(254, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "RED\000", NULL,
    {.position = POS(255, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "colour_mixture\000", NULL,
    {.position = POS(253, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "GREEN\000", NULL,
    {.position = POS(258, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WHITE\000", NULL,
    {.position = POS(259, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(251, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ansi_background_colour\000", NULL,
    {.position = POS(264, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "insert_order_table\000", NULL,
    {.position = POS(278, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_json\000", NULL,
    {.position = POS(277, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open_tcp_socket\000", NULL,
    {.position = POS(280, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print_to\000", NULL,
    {.position = POS(281, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "288_7_result\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "load\000", NULL,
    {.position = POS(288, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "between\000", NULL,
    {.position = POS(291, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(291, 39)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "behind\000", NULL,
    {.position = POS(294, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error\000", NULL,
    {.position = POS(294, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_utf8\000", NULL,
    {.position = POS(297, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_json\000", NULL,
    {.position = POS(298, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(317, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(325, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write_all_to\000", NULL,
    {.position = POS(327, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "361_1_use_tokens\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(361, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "389_1_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "392_1_logits\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(393, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(393, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "407_0_token_or_list\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "409_1_pieces\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(411, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(412, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "417_1_piece\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(419, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "423_21_model\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "424_1_pieces\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "425_1_piece_table\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(425, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "427_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "427_7_piece\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(437, 66)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "escaped_token\000ai", NULL,
    {.const_idx = -func_ai__escaped_token}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "442_21_piece\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "443_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "444_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "445_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "446_1_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(448, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "453_1_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(460, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(454, 9)}
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
  142, // number of constants
  146, // number of variables
  NULL, // required modules
  defined_namespaces,
  used_namespaces,
  constants_table,
  variables_table,
};
