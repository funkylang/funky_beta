#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std_types__string___to_json = -1,
  string_1 = -2,
  func_std_types__number___to_json = -3,
  func_std_types__true___to_json = -4,
  str_true = -5,
  func_std_types__false___to_json = -6,
  str_false = -7,
  func_std_types__undefined___to_json = -8,
  str_null = -9,
  func_std_types__generic_list___to_json = -10,
  string_2 = -11,
  lambda_1 = -12,
  string_3 = -13,
  lambda_2 = -14,
  lambda_3 = -15,
  string_4 = -16,
  lambda_4 = -17,
  num_2 = -18,
  minus_num_1 = -19,
  string_5 = -20,
  string_6 = -21,
  func_std_types__table___to_json = -22,
  lambda_5 = -23,
  string_7 = -24,
  lambda_6 = -25,
  lambda_7 = -26,
  string_8 = -27,
  lambda_8 = -28,
  string_9 = -29,
  string_10 = -30,
  func_quoted = -31,
  num_1 = -32,
  num_0 = -33,
  lambda_loop = -34,
  lambda_9 = -35,
  lambda_10 = -36,
  chr_34 = -37,
  chr_92 = -38,
  sequence_98_2 = -39,
  chr_10 = -40,
  lambda_nl = -41,
  str_n = -42,
  chr_13 = -43,
  lambda_cr = -44,
  str_r = -45,
  chr_9 = -46,
  lambda_ht = -47,
  str_t = -48,
  chr_8 = -49,
  lambda_bs = -50,
  str_b = -51,
  chr_12 = -52,
  lambda_ff = -53,
  str_f = -54,
  lambda_11 = -55
};

enum {
  var__START = FIRST_VAR-1,
  var_std__to_json, // attribute
  var_std__assign, // extern
  var_std_types__string, // extern
  var_to_json, // extern polymorphic
  var_append, // extern
  var_std_types__number, // extern
  var_to_string, // extern
  var_std_types__true, // extern
  var_std_types__false, // extern
  var_std_types__undefined, // extern
  var_std_types__generic_list, // extern
  var_36_35_self, // dynamic
  var_37_1_buf, // dynamic
  var_is_empty, // extern
  var_next, // extern
  var_range, // extern
  var_for_each, // extern
  var_if, // extern
  var_std_types__table, // extern
  var_48_28_self, // dynamic
  var_49_1_buf, // dynamic
  var_60_10_text, // dynamic
  var_61_1_buf, // dynamic
  var_62_1_s, // dynamic
  var_63_1_n, // dynamic
  var_length_of, // extern
  var_64_1_i, // dynamic
  var_inc, // extern
  var_std__less, // extern
  var_71_1_chr, // dynamic
  var_std__sequence, // extern
  var_std__minus, // extern
  var_std__plus, // extern
  var_push, // extern
  var_case, // extern
  var_loop, // extern
  var__END
};


static TAB_NUM t_func_std_types__string___to_json[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 25_29_self
  // quoted(self) "@quot;"
  func_quoted, 1, LOCAL(2), 1, LOCAL(1),
  // append "@quot;" quoted(self) "@quot;"
  var_append, 3, string_1, LOCAL(1), string_1, TAIL_CALL,
  POS(26, 19),
  POS(26, 3)
};

static TAB_NUM t_func_std_types__number___to_json[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 28_29_self
  // to_string
  var_to_string, 1, LOCAL(2), 1, LOCAL(1),
  // -> self.to_string
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(28, 44),
  POS(28, 36)
};

static TAB_NUM t_func_std_types__true___to_json[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> "true"
  LET, 1, str_true, TAIL_CALL,
  POS(30, 35)
};

static TAB_NUM t_func_std_types__false___to_json[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> "false"
  LET, 1, str_false, TAIL_CALL,
  POS(32, 36)
};

static TAB_NUM t_func_std_types__undefined___to_json[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> "null"
  LET, 1, str_null, TAIL_CALL,
  POS(34, 40)
};

static TAB_NUM t_func_std_types__generic_list___to_json[] = {
  1, // locals
  1, // parameters
  var_36_35_self,
  // $buf ""
  LET, 1, string_2, 1, var_37_1_buf,
  // is_empty
  var_is_empty, 1, var_36_35_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(37, 3),
  POS(39, 10),
  POS(38, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  "[]"
  LET, 1, string_3, TAIL_CALL,
  POS(40, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // for_each self
  var_for_each, 3, var_36_35_self, lambda_3, lambda_4, TAIL_CALL,
  POS(42, 7)
};

static TAB_NUM t_lambda_3[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 43_3_item
  // to_json
  var_to_json, 1, LOCAL(2), 1, LOCAL(1),
  // append &buf "," item.to_json
  var_append, 3, var_37_1_buf, string_4, LOCAL(1), 1, var_37_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(44, 32),
  POS(44, 11),
  POS(45, 11)
};

static TAB_NUM t_lambda_4[] = {
  2, // locals
  0, // parameters
  // range(buf 2 -1) "]")
  var_range, 3, var_37_1_buf, num_2, minus_num_1, 1, LOCAL(1),
  // append("[" range(buf 2 -1) "]")
  var_append, 3, string_5, LOCAL(1), string_6, 1, LOCAL(2),
  //  append("[" range(buf 2 -1) "]")
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(46, 23),
  POS(46, 12),
  POS(46, 11)
};

static TAB_NUM t_func_std_types__table___to_json[] = {
  1, // locals
  1, // parameters
  var_48_28_self,
  // $buf ""
  LET, 1, string_2, 1, var_49_1_buf,
  // is_empty
  var_is_empty, 1, var_48_28_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_5, lambda_6, TAIL_CALL,
  POS(49, 3),
  POS(51, 10),
  POS(50, 3)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  "{}"
  LET, 1, string_7, TAIL_CALL,
  POS(52, 7)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // for_each self
  var_for_each, 3, var_48_28_self, lambda_7, lambda_8, TAIL_CALL,
  POS(54, 7)
};

static TAB_NUM t_lambda_7[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 55_3_key
  LOCAL(4), // 55_7_value
  // to_json ":" value.to_json
  var_to_json, 1, LOCAL(3), 1, LOCAL(1),
  // to_json
  var_to_json, 1, LOCAL(4), 1, LOCAL(2),
  // append &buf "," key.to_json ":" value.to_json
  var_append, 5, var_49_1_buf, string_4, LOCAL(1), string_8, LOCAL(2), 1, var_49_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(56, 31),
  POS(56, 49),
  POS(56, 11),
  POS(57, 11)
};

static TAB_NUM t_lambda_8[] = {
  2, // locals
  0, // parameters
  // range(buf 2 -1) "}")
  var_range, 3, var_49_1_buf, num_2, minus_num_1, 1, LOCAL(1),
  // append("{" range(buf 2 -1) "}")
  var_append, 3, string_9, LOCAL(1), string_10, 1, LOCAL(2),
  //  append("{" range(buf 2 -1) "}")
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(58, 23),
  POS(58, 12),
  POS(58, 11)
};

static TAB_NUM t_func_quoted[] = {
  0, // locals
  1, // parameters
  var_60_10_text,
  // $buf ""
  LET, 1, string_2, 1, var_61_1_buf,
  // $s 1
  LET, 1, num_1, 1, var_62_1_s,
  // $n length_of(text)
  var_length_of, 1, var_60_10_text, 1, var_63_1_n,
  // $i 0
  LET, 1, num_0, 1, var_64_1_i,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(61, 3),
  POS(62, 3),
  POS(63, 3),
  POS(64, 3),
  POS(65, 3)
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_64_1_i, 1, var_64_1_i,
  // n
  var_std__less, 2, var_63_1_n, var_64_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_9, lambda_10, TAIL_CALL,
  POS(66, 5),
  POS(68, 11),
  POS(67, 5)
};

static TAB_NUM t_lambda_9[] = {
  2, // locals
  0, // parameters
  // range(text s n))
  var_range, 3, var_60_10_text, var_62_1_s, var_63_1_n, 1, LOCAL(1),
  // append(buf range(text s n))
  var_append, 2, var_61_1_buf, LOCAL(1), 1, LOCAL(2),
  //  append(buf range(text s n))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(69, 21),
  POS(69, 10),
  POS(69, 9)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  // $chr text(i)
  var_60_10_text, 1, var_64_1_i, 1, var_71_1_chr,
  // case chr
  var_case, 14, var_71_1_chr, chr_10, lambda_nl, chr_13, lambda_cr, chr_9, lambda_ht, chr_8, lambda_bs, chr_12, lambda_ff, sequence_98_2, lambda_11, var_next, TAIL_CALL,
  POS(71, 9),
  POS(72, 9)
};

static TAB_NUM t_lambda_nl[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_64_1_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_60_10_text, var_62_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(text s i-1)
  var_append, 2, var_61_1_buf, LOCAL(2), 1, var_61_1_buf,
  // append &buf "\n"
  var_append, 2, var_61_1_buf, str_n, 1, var_61_1_buf,
  // !s i+1
  var_std__plus, 2, var_64_1_i, num_1, 1, var_62_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(74, 38),
  POS(74, 25),
  POS(74, 13),
  POS(75, 13),
  POS(76, 13),
  POS(77, 13)
};

static TAB_NUM t_lambda_cr[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_64_1_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_60_10_text, var_62_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(text s i-1)
  var_append, 2, var_61_1_buf, LOCAL(2), 1, var_61_1_buf,
  // append &buf "\r"
  var_append, 2, var_61_1_buf, str_r, 1, var_61_1_buf,
  // !s i+1
  var_std__plus, 2, var_64_1_i, num_1, 1, var_62_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(79, 38),
  POS(79, 25),
  POS(79, 13),
  POS(80, 13),
  POS(81, 13),
  POS(82, 13)
};

static TAB_NUM t_lambda_ht[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_64_1_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_60_10_text, var_62_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(text s i-1)
  var_append, 2, var_61_1_buf, LOCAL(2), 1, var_61_1_buf,
  // append &buf "\t"
  var_append, 2, var_61_1_buf, str_t, 1, var_61_1_buf,
  // !s i+1
  var_std__plus, 2, var_64_1_i, num_1, 1, var_62_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(84, 38),
  POS(84, 25),
  POS(84, 13),
  POS(85, 13),
  POS(86, 13),
  POS(87, 13)
};

static TAB_NUM t_lambda_bs[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_64_1_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_60_10_text, var_62_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(text s i-1)
  var_append, 2, var_61_1_buf, LOCAL(2), 1, var_61_1_buf,
  // append &buf "\b"
  var_append, 2, var_61_1_buf, str_b, 1, var_61_1_buf,
  // !s i+1
  var_std__plus, 2, var_64_1_i, num_1, 1, var_62_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(89, 38),
  POS(89, 25),
  POS(89, 13),
  POS(90, 13),
  POS(91, 13),
  POS(92, 13)
};

static TAB_NUM t_lambda_ff[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_64_1_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_60_10_text, var_62_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(text s i-1)
  var_append, 2, var_61_1_buf, LOCAL(2), 1, var_61_1_buf,
  // append &buf "\f"
  var_append, 2, var_61_1_buf, str_f, 1, var_61_1_buf,
  // !s i+1
  var_std__plus, 2, var_64_1_i, num_1, 1, var_62_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(94, 38),
  POS(94, 25),
  POS(94, 13),
  POS(95, 13),
  POS(96, 13),
  POS(97, 13)
};

static TAB_NUM t_lambda_11[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_64_1_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_60_10_text, var_62_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(text s i-1)
  var_append, 2, var_61_1_buf, LOCAL(2), 1, var_61_1_buf,
  // push &buf '\'
  var_push, 2, var_61_1_buf, chr_92, 1, var_61_1_buf,
  // push &buf chr
  var_push, 2, var_61_1_buf, var_71_1_chr, 1, var_61_1_buf,
  // !s i+1
  var_std__plus, 2, var_64_1_i, num_1, 1, var_62_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(99, 38),
  POS(99, 25),
  POS(99, 13),
  POS(100, 13),
  POS(101, 13),
  POS(102, 13),
  POS(103, 13)
};

static int sequence_98_2_arguments[] = {
  -chr_34, -chr_92
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_json}},
  {FLT_STRING_8, 1, {.str_8 = "\042"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__number___to_json}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__true___to_json}},
  {FLT_STRING_8, 4, {.str_8 = "true"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__false___to_json}},
  {FLT_STRING_8, 5, {.str_8 = "false"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__undefined___to_json}},
  {FLT_STRING_8, 4, {.str_8 = "null"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___to_json}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_STRING_8, 2, {.str_8 = "[]"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_STRING_8, 1, {.str_8 = ","}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_STRING_8, 1, {.str_8 = "["}},
  {FLT_STRING_8, 1, {.str_8 = "]"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__table___to_json}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_STRING_8, 2, {.str_8 = "{}"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_STRING_8, 1, {.str_8 = ":"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_STRING_8, 1, {.str_8 = "{"}},
  {FLT_STRING_8, 1, {.str_8 = "}"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_quoted}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_CHARACTER, 0, {.value = 92}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_98_2_arguments}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_nl}},
  {FLT_STRING_8, 2, {.str_8 = "\134n"}},
  {FLT_CHARACTER, 0, {.value = 13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_cr}},
  {FLT_STRING_8, 2, {.str_8 = "\134r"}},
  {FLT_CHARACTER, 0, {.value = 9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_ht}},
  {FLT_STRING_8, 2, {.str_8 = "\134t"}},
  {FLT_CHARACTER, 0, {.value = 8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_bs}},
  {FLT_STRING_8, 2, {.str_8 = "\134b"}},
  {FLT_CHARACTER, 0, {.value = 12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_ff}},
  {FLT_STRING_8, 2, {.str_8 = "\134f"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}}
};

static ATTRIBUTE_DEFINITION std_types__string__attributes[] = {
  {var_to_json, -func_std_types__string___to_json}
};

static ATTRIBUTE_DEFINITION std_types__number__attributes[] = {
  {var_to_json, -func_std_types__number___to_json}
};

static ATTRIBUTE_DEFINITION std_types__true__attributes[] = {
  {var_to_json, -func_std_types__true___to_json}
};

static ATTRIBUTE_DEFINITION std_types__false__attributes[] = {
  {var_to_json, -func_std_types__false___to_json}
};

static ATTRIBUTE_DEFINITION std_types__undefined__attributes[] = {
  {var_to_json, -func_std_types__undefined___to_json}
};

static ATTRIBUTE_DEFINITION std_types__generic_list__attributes[] = {
  {var_to_json, -func_std_types__generic_list___to_json}
};

static ATTRIBUTE_DEFINITION std_types__table__attributes[] = {
  {var_to_json, -func_std_types__table___to_json}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "to_json\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(23, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "string\000std_types", std_types__string__attributes,
    {.position = POS(25, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_json\000", NULL,
    {.position = POS(25, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(26, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "number\000std_types", std_types__number__attributes,
    {.position = POS(28, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_string\000", NULL,
    {.position = POS(28, 44)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "true\000std_types", std_types__true__attributes,
    {.position = POS(30, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "false\000std_types", std_types__false__attributes,
    {.position = POS(32, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "undefined\000std_types", std_types__undefined__attributes,
    {.position = POS(34, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "generic_list\000std_types", std_types__generic_list__attributes,
    {.position = POS(36, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "36_35_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "37_1_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(39, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(45, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(46, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(42, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(38, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "table\000std_types", std_types__table__attributes,
    {.position = POS(48, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "48_28_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "49_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "60_10_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "61_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "62_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "63_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(63, 6)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "64_1_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(66, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(68, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "71_1_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(98, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(74, 38)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(76, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(100, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(72, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(65, 3)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__export__json = {
  "_basic__export__json", // module name
  "basic/export/json.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  55, // number of constants
  36, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
