#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_ai__get_tokens = -1,
  str_model = -2,
  str_dummy = -3,
  key_value_pair_29_1 = -4,
  string_1 = -5,
  num_8080 = -6,
  str_POST_get_tokens = -7,
  str_Connection_close = -8,
  string_2 = -9,
  string_3 = -10,
  str_tokens = -11,
  func_ai__evaluate = -12,
  num_2 = -13,
  lambda_1 = -14,
  lambda_2 = -15,
  str_prompt = -16,
  str_logits = -17,
  str_brief = -18,
  str_n_probs = -19,
  num_10 = -20,
  key_value_pair_57_1 = -21,
  str_n_predict = -22,
  num_1 = -23,
  key_value_pair_58_1 = -24,
  str_POST_completion = -25,
  lambda_do_return_confidence_values = -26,
  lambda_3 = -27,
  lambda_4 = -28,
  str_token = -29,
  lambda_5 = -30,
  str_content = -31,
  lambda_6 = -32,
  lambda_7 = -33,
  lambda_8 = -34,
  func_ai__tokenize = -35,
  str_POST_tokenize_HT = -36,
  func_ai__detokenize = -37,
  str_POST_detokenize = -38
};

enum {
  var__START = FIRST_VAR-1,
  var_ai__get_tokens, // initialized
  var_std__key_value_pair, // extern
  var_insert_order_table, // extern
  var_to_json, // extern
  var_open_tcp_socket, // extern
  var_length_of, // extern
  var_std__string, // extern
  var_print_to, // extern
  var_load, // extern
  var_behind, // extern
  var_from_utf8, // extern
  var_from_json, // extern
  var_std__assign, // extern
  var_ai__evaluate, // initialized
  var_result_count, // extern
  var_std__equal, // extern
  var_is_a_string, // extern
  var_45_1_use_tokens, // dynamic
  var_not, // extern
  var_if, // extern
  var_true, // extern
  var_to_utf8, // extern
  var_70_1_info, // dynamic
  var_73_1_logits, // dynamic
  var_tuple, // extern
  var_map, // extern
  var_ai__tokenize, // initialized
  var_ai__detokenize, // initialized
  var__END
};


static TAB_NUM t_func_ai__get_tokens[] = {
  5, // locals
  0, // parameters
  // insert_order_table
  var_insert_order_table, 1, key_value_pair_29_1, 1, LOCAL(2),
  // $json
  var_to_json, 1, LOCAL(2), 1, LOCAL(3),
  // open_tcp_socket! $fd "127.0.0.1" 8080
  var_open_tcp_socket, 2, string_1, num_8080, IO_CALL(1), LOCAL(4),
  // length_of(json))@cr;
  var_length_of, 1, LOCAL(3), 1, LOCAL(1),
  // "
  var_std__string, 5, str_POST_get_tokens, LOCAL(1), str_Connection_close, LOCAL(3), string_2, 1, LOCAL(2),
  // print_to! fd "
  var_print_to, 2, LOCAL(4), LOCAL(2), IO_CALL(0),
  // load! $result fd
  var_load, 1, LOCAL(4), IO_CALL(1), LOCAL(5),
  // behind &result "@cr;@nl;@cr;@nl;"
  var_behind, 2, LOCAL(5), string_3, 1, LOCAL(5),
  // from_utf8 &result
  var_from_utf8, 1, LOCAL(5), 1, LOCAL(5),
  // from_json("tokens")
  var_from_json, 1, LOCAL(5), 1, LOCAL(1),
  // from_json("tokens")
  LOCAL(1), 1, str_tokens, 1, LOCAL(2),
  // -> result.from_json("tokens")
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(28, 7),
  POS(26, 3),
  POS(30, 3),
  POS(34, 23),
  POS(31, 16),
  POS(31, 3),
  POS(38, 3),
  POS(39, 3),
  POS(40, 3),
  POS(41, 13),
  POS(41, 13),
  POS(41, 3)
};

static TAB_NUM t_func_ai__evaluate[] = {
  12, // locals
  1, // parameters
  LOCAL(7), // 43_16_prompt
  // result_count() == 2
  var_result_count, 0, 1, LOCAL(1),
  // $do_return_confidence_values result_count() == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(8),
  // is_a_string)
  var_is_a_string, 1, LOCAL(7), 1, LOCAL(1),
  // $use_tokens not(prompt.is_a_string)
  var_not, 1, LOCAL(1), 1, var_45_1_use_tokens,
  // $PROMPT
  var_if, 3, var_45_1_use_tokens, lambda_1, lambda_2, 1, LOCAL(9),
  // PROMPT = prompt
  var_std__key_value_pair, 2, LOCAL(9), LOCAL(7), 1, LOCAL(1),
  // logits" = true # also disables server side token selection
  var_std__key_value_pair, 2, str_logits, var_true, 1, LOCAL(2),
  // brief" = true
  var_std__key_value_pair, 2, str_brief, var_true, 1, LOCAL(3),
  // insert_order_table
  var_insert_order_table, 5, LOCAL(1), LOCAL(2), LOCAL(3), key_value_pair_57_1, key_value_pair_58_1, 1, LOCAL(6),
  // $json
  var_to_json, 1, LOCAL(6), 1, LOCAL(10),
  // to_utf8 &json
  var_to_utf8, 1, LOCAL(10), 1, LOCAL(10),
  // open_tcp_socket! $fd "127.0.0.1" 8080
  var_open_tcp_socket, 2, string_1, num_8080, IO_CALL(1), LOCAL(11),
  // length_of(json))@cr;
  var_length_of, 1, LOCAL(10), 1, LOCAL(1),
  // "
  var_std__string, 5, str_POST_completion, LOCAL(1), str_Connection_close, LOCAL(10), string_2, 1, LOCAL(2),
  // print_to! fd "
  var_print_to, 2, LOCAL(11), LOCAL(2), IO_CALL(0),
  // load! $result fd
  var_load, 1, LOCAL(11), IO_CALL(1), LOCAL(12),
  // behind &result "@cr;@nl;@cr;@nl;"
  var_behind, 2, LOCAL(12), string_3, 1, LOCAL(12),
  // $info result.from_json
  var_from_json, 1, LOCAL(12), 1, var_70_1_info,
  // if
  var_if, 3, LOCAL(8), lambda_do_return_confidence_values, lambda_6, TAIL_CALL,
  POS(44, 32),
  POS(44, 3),
  POS(45, 26),
  POS(45, 3),
  POS(46, 3),
  POS(54, 9),
  POS(55, 10),
  POS(56, 10),
  POS(53, 7),
  POS(51, 3),
  POS(59, 3),
  POS(60, 3),
  POS(64, 23),
  POS(61, 16),
  POS(61, 3),
  POS(68, 3),
  POS(69, 3),
  POS(70, 3),
  POS(71, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  "tokens"
  LET, 1, str_tokens, TAIL_CALL,
  POS(49, 9)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  "prompt"
  LET, 1, str_prompt, TAIL_CALL,
  POS(50, 9)
};

static TAB_NUM t_lambda_do_return_confidence_values[] = {
  0, // locals
  0, // parameters
  // $logits info("logits")
  var_70_1_info, 1, str_logits, 1, var_73_1_logits,
  // map &logits: (logit) tuple logit(1) logit(2)
  var_map, 2, var_73_1_logits, lambda_3, 1, var_73_1_logits,
  // if
  var_if, 3, var_45_1_use_tokens, lambda_4, lambda_5, TAIL_CALL,
  POS(73, 7),
  POS(74, 7),
  POS(75, 7)
};

static TAB_NUM t_lambda_3[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 74_14_logit
  // logit(1) logit(2)
  LOCAL(3), 1, num_1, 1, LOCAL(1),
  // logit(2)
  LOCAL(3), 1, num_2, 1, LOCAL(2),
  // tuple logit(1) logit(2)
  var_tuple, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(74, 34),
  POS(74, 43),
  POS(74, 28)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // info("token") logits
  var_70_1_info, 1, str_token, 1, LOCAL(1),
  //  info("token") logits
  LET, 2, LOCAL(1), var_73_1_logits, TAIL_CALL,
  POS(77, 12),
  POS(77, 11)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // info("content") logits
  var_70_1_info, 1, str_content, 1, LOCAL(1),
  //  info("content") logits
  LET, 2, LOCAL(1), var_73_1_logits, TAIL_CALL,
  POS(78, 12),
  POS(78, 11)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_45_1_use_tokens, lambda_7, lambda_8, TAIL_CALL,
  POS(80, 7)
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // info("token")
  var_70_1_info, 1, str_token, 1, LOCAL(1),
  //  info("token")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(82, 12),
  POS(82, 11)
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // info("content")
  var_70_1_info, 1, str_content, 1, LOCAL(1),
  //  info("content")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(83, 12),
  POS(83, 11)
};

static TAB_NUM t_func_ai__tokenize[] = {
  7, // locals
  1, // parameters
  LOCAL(3), // 85_16_prompt
  // content" = prompt
  var_std__key_value_pair, 2, str_content, LOCAL(3), 1, LOCAL(1),
  // insert_order_table
  var_insert_order_table, 1, LOCAL(1), 1, LOCAL(2),
  // $json
  var_to_json, 1, LOCAL(2), 1, LOCAL(4),
  // to_utf8 &json
  var_to_utf8, 1, LOCAL(4), 1, LOCAL(4),
  // open_tcp_socket! $fd "127.0.0.1" 8080
  var_open_tcp_socket, 2, string_1, num_8080, IO_CALL(1), LOCAL(5),
  // length_of(json))@cr;
  var_length_of, 1, LOCAL(4), 1, LOCAL(1),
  // "
  var_std__string, 5, str_POST_tokenize_HT, LOCAL(1), str_Connection_close, LOCAL(4), string_2, 1, LOCAL(2),
  // print_to! fd "
  var_print_to, 2, LOCAL(5), LOCAL(2), IO_CALL(0),
  // load! $result fd
  var_load, 1, LOCAL(5), IO_CALL(1), LOCAL(6),
  // behind &result "@cr;@nl;@cr;@nl;"
  var_behind, 2, LOCAL(6), string_3, 1, LOCAL(6),
  // $info result.from_json
  var_from_json, 1, LOCAL(6), 1, LOCAL(7),
  // info("tokens")
  LOCAL(7), 1, str_tokens, 1, LOCAL(1),
  // -> info("tokens")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(89, 10),
  POS(88, 7),
  POS(86, 3),
  POS(90, 3),
  POS(91, 3),
  POS(95, 23),
  POS(92, 16),
  POS(92, 3),
  POS(99, 3),
  POS(100, 3),
  POS(101, 3),
  POS(102, 6),
  POS(102, 3)
};

static TAB_NUM t_func_ai__detokenize[] = {
  7, // locals
  1, // parameters
  LOCAL(3), // 104_18_tokens
  // tokens" = tokens
  var_std__key_value_pair, 2, str_tokens, LOCAL(3), 1, LOCAL(1),
  // insert_order_table
  var_insert_order_table, 1, LOCAL(1), 1, LOCAL(2),
  // $json
  var_to_json, 1, LOCAL(2), 1, LOCAL(4),
  // open_tcp_socket! $fd "127.0.0.1" 8080
  var_open_tcp_socket, 2, string_1, num_8080, IO_CALL(1), LOCAL(5),
  // length_of(json))@cr;
  var_length_of, 1, LOCAL(4), 1, LOCAL(1),
  // "
  var_std__string, 5, str_POST_detokenize, LOCAL(1), str_Connection_close, LOCAL(4), string_2, 1, LOCAL(2),
  // print_to! fd "
  var_print_to, 2, LOCAL(5), LOCAL(2), IO_CALL(0),
  // load! $result fd
  var_load, 1, LOCAL(5), IO_CALL(1), LOCAL(6),
  // behind &result "@cr;@nl;@cr;@nl;"
  var_behind, 2, LOCAL(6), string_3, 1, LOCAL(6),
  // $info result.from_json
  var_from_json, 1, LOCAL(6), 1, LOCAL(7),
  // info("content").from_utf8
  LOCAL(7), 1, str_content, 1, LOCAL(1),
  // from_utf8
  var_from_utf8, 1, LOCAL(1), 1, LOCAL(2),
  // -> info("content").from_utf8
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(108, 10),
  POS(107, 7),
  POS(105, 3),
  POS(109, 3),
  POS(113, 23),
  POS(110, 16),
  POS(110, 3),
  POS(117, 3),
  POS(118, 3),
  POS(119, 3),
  POS(120, 6),
  POS(120, 22),
  POS(120, 3)
};

static int key_value_pair_29_1_arguments[] = {
  -str_model, -str_dummy
};

static int key_value_pair_57_1_arguments[] = {
  -str_n_probs, -num_10
};

static int key_value_pair_58_1_arguments[] = {
  -str_n_predict, -num_1
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai__get_tokens}},
  {FLT_STRING_8, 5, {.str_8 = "model"}},
  {FLT_STRING_8, 5, {.str_8 = "dummy"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_29_1_arguments}},
  {FLT_STRING_8, 9, {.str_8 = "127.0.0.1"}},
  {FLT_POSITIVE_INT64, 0, {.value = 8080}},
  {FLT_STRING_8, 75, {.str_8 = "POST /get_tokens HTTP/1.1\015\012Content-Type: application/json\015\012Content-Length: "}},
  {FLT_STRING_8, 23, {.str_8 = "\015\012Connection: close\015\012\015\012"}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_STRING_8, 4, {.str_8 = "\015\012\015\012"}},
  {FLT_STRING_8, 6, {.str_8 = "tokens"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai__evaluate}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_STRING_8, 6, {.str_8 = "prompt"}},
  {FLT_STRING_8, 6, {.str_8 = "logits"}},
  {FLT_STRING_8, 5, {.str_8 = "brief"}},
  {FLT_STRING_8, 7, {.str_8 = "n_probs"}},
  {FLT_POSITIVE_INT64, 0, {.value = 10}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_57_1_arguments}},
  {FLT_STRING_8, 9, {.str_8 = "n_predict"}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_58_1_arguments}},
  {FLT_STRING_8, 75, {.str_8 = "POST /completion HTTP/1.1\015\012Content-Type: application/json\015\012Content-Length: "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_return_confidence_values}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_STRING_8, 5, {.str_8 = "token"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_STRING_8, 7, {.str_8 = "content"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai__tokenize}},
  {FLT_STRING_8, 73, {.str_8 = "POST /tokenize HTTP/1.1\015\012Content-Type: application/json\015\012Content-Length: "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ai__detokenize}},
  {FLT_STRING_8, 75, {.str_8 = "POST /detokenize HTTP/1.1\015\012Content-Type: application/json\015\012Content-Length: "}}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_INITIALIZED, 0, 0,
    "get_tokens\000ai", NULL,
    {.const_idx = -func_ai__get_tokens}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value_pair\000std", NULL,
    {.position = POS(29, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "insert_order_table\000", NULL,
    {.position = POS(28, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_json\000", NULL,
    {.position = POS(27, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open_tcp_socket\000", NULL,
    {.position = POS(30, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(34, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(31, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print_to\000", NULL,
    {.position = POS(31, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "load\000", NULL,
    {.position = POS(38, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "behind\000", NULL,
    {.position = POS(39, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_utf8\000", NULL,
    {.position = POS(40, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_json\000", NULL,
    {.position = POS(41, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(41, 5)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "evaluate\000ai", NULL,
    {.const_idx = -func_ai__evaluate}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(44, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(44, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(45, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "45_1_use_tokens\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(45, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(47, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(55, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(59, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "70_1_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "73_1_logits\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(74, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(74, 7)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "tokenize\000ai", NULL,
    {.const_idx = -func_ai__tokenize}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "detokenize\000ai", NULL,
    {.const_idx = -func_ai__detokenize}
  }
};

static FUNKY_NAMESPACE defined_namespaces[] = {
  {"ai", 1, 0}
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
  1, // number of defined namespaces
  1, // number of used namespaces
  38, // number of constants
  28, // number of variables
  NULL, // required modules
  defined_namespaces,
  used_namespaces,
  constants_table,
  variables_table,
};
