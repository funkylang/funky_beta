#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std_types__2__0__line___subgroups_of = -1,
  num_300 = -2,
  func_std__2__0__split_into_indented_lines = -3,
  num_1 = -4,
  func_split = -5,
  lambda_1 = -6,
  num_2 = -7,
  lambda_2 = -8,
  lambda_3 = -9,
  chr_10 = -10,
  lambda_4 = -11,
  lambda_5 = -12,
  lambda_6 = -13,
  lambda_7 = -14,
  lambda_ls_is_defined = -15,
  lambda_8 = -16,
  lambda_9 = -17,
  lambda_10 = -18,
  lambda_11 = -19,
  lambda_loop = -20,
  lambda_12 = -21,
  lambda_13 = -22,
  func_create_line = -23,
  num_0 = -24,
  lambda_2_loop = -25,
  chr_9 = -26,
  lambda_14 = -27,
  num_8 = -28,
  lambda_15 = -29,
  chr_32 = -30,
  lambda_16 = -31,
  lambda_17 = -32,
  lambda_18 = -33,
  lambda_19 = -34,
  string_1 = -35,
  lambda_3_loop = -36,
  lambda_20 = -37,
  lambda_21 = -38,
  lambda_22 = -39,
  lambda_23 = -40,
  lambda_24 = -41,
  lambda_25 = -42,
  num_9999 = -43,
  func_std__2__0__split_into_groups = -44,
  lambda_split_recursively = -45,
  lambda_keep_empty_lines = -46,
  minus_num_1 = -47,
  lambda_26 = -48,
  lambda_27 = -49,
  lambda_2_keep_empty_lines = -50,
  lambda_28 = -51,
  func_get_group_kel_rec = -52,
  lambda_4_loop = -53,
  lambda_29 = -54,
  lambda_30 = -55,
  lambda_line_is_undefined = -56,
  lambda_31 = -57,
  lambda_32 = -58,
  lambda_33 = -59,
  lambda_34 = -60,
  lambda_35 = -61,
  func_get_group_rec = -62,
  lambda_5_loop = -63,
  lambda_36 = -64,
  lambda_37 = -65,
  lambda_38 = -66,
  lambda_2_line_is_undefined = -67,
  lambda_39 = -68,
  lambda_40 = -69,
  lambda_41 = -70,
  lambda_42 = -71,
  lambda_43 = -72,
  lambda_44 = -73,
  lambda_45 = -74,
  func_get_group_kel = -75,
  lambda_6_loop = -76,
  lambda_46 = -77,
  lambda_47 = -78,
  lambda_3_line_is_undefined = -79,
  lambda_48 = -80,
  lambda_49 = -81,
  lambda_50 = -82,
  lambda_51 = -83,
  lambda_52 = -84,
  lambda_53 = -85,
  lambda_54 = -86,
  lambda_55 = -87,
  lambda_56 = -88,
  lambda_57 = -89,
  func_get_group = -90,
  lambda_7_loop = -91,
  lambda_58 = -92,
  lambda_59 = -93,
  lambda_60 = -94,
  lambda_4_line_is_undefined = -95,
  lambda_61 = -96,
  lambda_62 = -97,
  lambda_63 = -98,
  lambda_64 = -99,
  lambda_65 = -100,
  lambda_66 = -101,
  lambda_67 = -102,
  lambda_68 = -103,
  lambda_69 = -104,
  lambda_70 = -105,
  lambda_71 = -106,
  lambda_72 = -107
};

enum {
  var__START = FIRST_VAR-1,
  var_std__2__0__indent_of, // attribute
  var_std__assign, // extern
  var_std__2__0__text_of, // attribute
  var_std__subgroups_of, // attribute
  var_std_types__2__0__line, // derived
  var_std_types__2__0__object, // extern
  var_indent_of, // extern polymorphic
  var_undefined, // extern
  var_text_of, // extern polymorphic
  var_subgroups_of, // extern polymorphic
  var_empty_list, // extern
  var_std__2__0__split_into_indented_lines, // initialized
  var_39_5_text, // dynamic
  var_40_5_keep_lineends, // dynamic
  var_false, // extern
  var_41_5_proto_line, // dynamic
  var_length_of, // extern
  var_46_12_s, // dynamic
  var_46_14_e, // dynamic
  var_std__plus, // extern
  var_std__minus, // extern
  var_std__less, // extern
  var_div, // extern
  var_append, // extern
  var_52_10_lines, // dynamic
  var_std__equal, // extern
  var_std__or, // extern
  var_53_10_ls, // dynamic
  var_if, // extern
  var_59_14_i, // dynamic
  var_is_defined, // extern
  var_push, // extern
  var_next, // extern
  var_std__not, // extern
  var_std__and, // extern
  var_loop, // extern
  var_from_to, // extern
  var_82_18_s, // dynamic
  var_82_20_e, // dynamic
  var_83_6_indent, // dynamic
  var_101_20_buf, // dynamic
  var_102_20_i, // dynamic
  var_range, // extern
  var_mod, // extern
  var_spaces, // extern
  var_inc, // extern
  var_std_types__2__0__group, // derived
  var_std__2__0__split_into_groups, // initialized
  var_141_5_lines, // dynamic
  var_142_5_keep_empty_lines, // dynamic
  var_144_5_proto_group, // dynamic
  var_146_4_n, // dynamic
  var_165_24_s, // dynamic
  var_165_26_i, // dynamic
  var_165_28_group_indent, // dynamic
  var_166_6_last_indent, // dynamic
  var_167_6_nodes, // dynamic
  var_168_6_e, // dynamic
  var_174_12_line, // dynamic
  var_is_undefined, // extern
  var_180_16_indent, // dynamic
  var_new, // extern
  var_199_20_i, // dynamic
  var_199_22_group_indent, // dynamic
  var_200_6_last_indent, // dynamic
  var_201_6_nodes, // dynamic
  var_202_6_last_node, // dynamic
  var_update_if, // extern
  var_209_12_line, // dynamic
  var_215_16_indent, // dynamic
  var_235_20_s, // dynamic
  var_235_22_i, // dynamic
  var_235_24_group_indent, // dynamic
  var_236_6_last_indent, // dynamic
  var_237_6_nodes, // dynamic
  var_238_6_e, // dynamic
  var_244_12_line, // dynamic
  var_250_16_indent, // dynamic
  var_258_24_head, // dynamic
  var_break, // extern
  var_268_32_subline, // dynamic
  var_291_16_i, // dynamic
  var_291_18_group_indent, // dynamic
  var_292_6_last_indent, // dynamic
  var_293_6_nodes, // dynamic
  var_294_6_last_node, // dynamic
  var_295_6_s, // dynamic
  var_302_12_line, // dynamic
  var_308_16_indent, // dynamic
  var_316_24_e, // dynamic
  var_324_32_subline, // dynamic
  var__END
};


static TAB_NUM t_func_std_types__2__0__line___subgroups_of[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> empty_list # enforced constant
  LET, 1, var_empty_list, TAIL_CALL,
  POS(33, 44)
};

static FUNCTION_INFO i_func_std_types__2__0__line___subgroups_of = {
  t_func_std_types__2__0__line___subgroups_of, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__2__0__split_into_indented_lines[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_39_5_text,
  var_false, var_40_5_keep_lineends,
  var_std_types__2__0__line, var_41_5_proto_line,
  // $n length_of(text)
  var_length_of, 1, var_39_5_text, 1, LOCAL(1),
  // split 1 n
  func_split, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(43, 3),
  POS(44, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__2__0__split_into_indented_lines = {
  t_func_std__2__0__split_into_indented_lines, NULL, 2, 1,
  {"43_4_n\000"}
};

static TAB_NUM t_func_split[] = {
  3, // locals
  2, // parameters
  var_46_12_s,
  var_46_14_e,
  // e+1-s > FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__plus, 2, var_46_14_e, num_1, 1, LOCAL(1),
  // e+1-s > FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__minus, 2, LOCAL(1), var_46_12_s, 1, LOCAL(2),
  // FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__less, 2, num_300, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_1, lambda_2, TAIL_CALL,
  POS(48, 7),
  POS(48, 7),
  POS(48, 15),
  POS(47, 5)
};

static FUNCTION_INFO i_func_split = {
  t_func_split, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  4, // locals
  0, // parameters
  // s+e) .div. 2
  var_std__plus, 2, var_46_12_s, var_46_14_e, 1, LOCAL(1),
  // $m (s+e) .div. 2
  var_div, 2, LOCAL(1), num_2, 1, LOCAL(4),
  // split(s m) split(m+1 e)
  func_split, 2, var_46_12_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // split(m+1 e)
  func_split, 2, LOCAL(2), var_46_14_e, 1, LOCAL(3),
  // append split(s m) split(m+1 e)
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(49, 13),
  POS(49, 9),
  POS(50, 16),
  POS(50, 33),
  POS(50, 27),
  POS(50, 9),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 6, 1,
  {"49_10_m\000"}
};

static TAB_NUM t_lambda_2[] = {
  2, // locals
  0, // parameters
  // $lines empty_list
  LET, 1, var_empty_list, 1, var_52_10_lines,
  // s == 1 || text(s-1) == '@nl;'
  var_std__equal, 2, var_46_12_s, num_1, 1, LOCAL(1),
  // s == 1 || text(s-1) == '@nl;'
  var_std__or, 2, LOCAL(1), lambda_3, 1, LOCAL(2),
  // $ls
  var_if, 3, LOCAL(2), lambda_4, lambda_5, 1, var_53_10_ls,
  // from_to s e
  var_from_to, 4, var_46_12_s, var_46_14_e, lambda_6, lambda_9, TAIL_CALL,
  POS(52, 9),
  POS(55, 13),
  POS(55, 13),
  POS(53, 9),
  POS(58, 9)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  3, // locals
  0, // parameters
  // s-1) == '@nl;'
  var_std__minus, 2, var_46_12_s, num_1, 1, LOCAL(1),
  // text(s-1) == '@nl;'
  var_39_5_text, 1, LOCAL(1), 1, LOCAL(2),
  // text(s-1) == '@nl;'
  var_std__equal, 2, LOCAL(2), chr_10, 1, LOCAL(3),
  // text(s-1) == '@nl;'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(55, 28),
  POS(55, 23),
  POS(55, 23),
  POS(55, 23)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  s # the current block starts at a line start
  LET, 1, var_46_12_s, TAIL_CALL,
  POS(56, 15)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  undefined # just skip the characters until the next line start
  LET, 1, var_undefined, TAIL_CALL,
  POS(57, 15)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  2, // locals
  1, // parameters
  var_59_14_i,
  // text(i) == '@nl;':
  var_39_5_text, 1, var_59_14_i, 1, LOCAL(1),
  // text(i) == '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_7, var_next, TAIL_CALL,
  POS(61, 15),
  POS(61, 15),
  POS(60, 13)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_53_10_ls, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_ls_is_defined, lambda_8, TAIL_CALL,
  POS(63, 22),
  POS(62, 17)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_ls_is_defined[] = {
  1, // locals
  0, // parameters
  // create_line(ls i)
  func_create_line, 2, var_53_10_ls, var_59_14_i, 1, LOCAL(1),
  // push &lines create_line(ls i)
  var_push, 2, var_52_10_lines, LOCAL(1), 1, var_52_10_lines,
  // !ls i+1
  var_std__plus, 2, var_59_14_i, num_1, 1, var_53_10_ls,
  // next
  var_next, 0, TAIL_CALL,
  POS(64, 33),
  POS(64, 21),
  POS(65, 21),
  POS(66, 21)
};

static FUNCTION_INFO i_lambda_ls_is_defined = {
  t_lambda_ls_is_defined, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  // !ls i+1
  var_std__plus, 2, var_59_14_i, num_1, 1, var_53_10_ls,
  // next
  var_next, 0, TAIL_CALL,
  POS(68, 21),
  POS(69, 21)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  2, // locals
  0, // parameters
  // is_defined && ls <= e:
  var_is_defined, 1, var_53_10_ls, 1, LOCAL(1),
  // is_defined && ls <= e:
  var_std__and, 2, LOCAL(1), lambda_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_11, lambda_13, TAIL_CALL,
  POS(73, 18),
  POS(73, 18),
  POS(72, 13)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_10[] = {
  2, // locals
  0, // parameters
  // e:
  var_std__less, 2, var_46_14_e, var_53_10_ls, 1, LOCAL(1),
  // e:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // ls <= e:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(73, 38),
  POS(73, 38),
  POS(73, 32)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // loop: # the last line extends into the next block
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(74, 17)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_loop[] = {
  2, // locals
  0, // parameters
  // !e e+1
  var_std__plus, 2, var_46_14_e, num_1, 1, var_46_14_e,
  // text(e) == '@nl;'
  var_39_5_text, 1, var_46_14_e, 1, LOCAL(1),
  // text(e) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_12, var_next, TAIL_CALL,
  POS(75, 19),
  POS(77, 21),
  POS(77, 21),
  POS(76, 19)
};

static FUNCTION_INFO i_lambda_loop = {
  t_lambda_loop, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  2, // locals
  0, // parameters
  // create_line(ls e))
  func_create_line, 2, var_53_10_ls, var_46_14_e, 1, LOCAL(1),
  // push(lines create_line(ls e))
  var_push, 2, var_52_10_lines, LOCAL(1), 1, LOCAL(2),
  //  push(lines create_line(ls e))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(78, 35),
  POS(78, 24),
  POS(78, 23)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  lines
  LET, 1, var_52_10_lines, TAIL_CALL,
  POS(80, 17)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_create_line[] = {
  0, // locals
  2, // parameters
  var_82_18_s,
  var_82_20_e,
  // $indent 0
  LET, 1, num_0, 1, var_83_6_indent,
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(83, 5),
  POS(84, 5)
};

static FUNCTION_INFO i_func_create_line = {
  t_func_create_line, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2_loop[] = {
  2, // locals
  0, // parameters
  // text(s) == '@ht;':
  var_39_5_text, 1, var_82_18_s, 1, LOCAL(1),
  // text(s) == '@ht;':
  var_std__equal, 2, LOCAL(1), chr_9, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_14, lambda_15, TAIL_CALL,
  POS(86, 9),
  POS(86, 9),
  POS(85, 7)
};

static FUNCTION_INFO i_lambda_2_loop = {
  t_lambda_2_loop, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  // !indent indent+8
  var_std__plus, 2, var_83_6_indent, num_8, 1, var_83_6_indent,
  // !s s+1
  var_std__plus, 2, var_82_18_s, num_1, 1, var_82_18_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(87, 11),
  POS(88, 11),
  POS(89, 11)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // text(s) == ' ':
  var_39_5_text, 1, var_82_18_s, 1, LOCAL(1),
  // text(s) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_16, lambda_17, TAIL_CALL,
  POS(92, 13),
  POS(92, 13),
  POS(91, 11)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  // !indent indent+1
  var_std__plus, 2, var_83_6_indent, num_1, 1, var_83_6_indent,
  // !s s+1
  var_std__plus, 2, var_82_18_s, num_1, 1, var_82_18_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(93, 15),
  POS(94, 15),
  POS(95, 15)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // s == e # only a newline character
  var_std__equal, 2, var_82_18_s, var_82_20_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_18, lambda_19, TAIL_CALL,
  POS(98, 17),
  POS(97, 15)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(99, 19)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  // $buf ""
  LET, 1, string_1, 1, var_101_20_buf,
  // $i s
  LET, 1, var_82_18_s, 1, var_102_20_i,
  // loop:
  var_loop, 1, lambda_3_loop, TAIL_CALL,
  POS(101, 19),
  POS(102, 19),
  POS(103, 19)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_3_loop[] = {
  1, // locals
  0, // parameters
  // e:
  var_std__less, 2, var_82_20_e, var_102_20_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_20, lambda_23, TAIL_CALL,
  POS(105, 27),
  POS(104, 21)
};

static FUNCTION_INFO i_lambda_3_loop = {
  t_lambda_3_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_20[] = {
  3, // locals
  0, // parameters
  // if
  var_if, 3, var_40_5_keep_lineends, lambda_21, lambda_22, 1, LOCAL(1),
  // range
  var_range, 3, var_39_5_text, var_82_18_s, LOCAL(1), 1, LOCAL(2),
  // $line_text
  var_append, 2, var_101_20_buf, LOCAL(2), 1, LOCAL(3),
  // proto_line
  LET, -2, var_41_5_proto_line, var_indent_of, var_83_6_indent, var_text_of, LOCAL(3), LOCAL(1),
  // ->
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(112, 31),
  POS(109, 29),
  POS(106, 25),
  POS(117, 27),
  POS(116, 25),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 5, 1,
  {"106_26_line_text\000"}
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  //  e
  LET, 1, var_82_20_e, TAIL_CALL,
  POS(114, 35)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // e-1
  var_std__minus, 2, var_82_20_e, num_1, 1, LOCAL(1),
  //  e-1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(115, 36),
  POS(115, 35)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  0, // parameters
  // text(i) == '@ht;':
  var_39_5_text, 1, var_102_20_i, 1, LOCAL(1),
  // text(i) == '@ht;':
  var_std__equal, 2, LOCAL(1), chr_9, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_24, lambda_25, TAIL_CALL,
  POS(122, 27),
  POS(122, 27),
  POS(121, 25)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_24[] = {
  5, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_102_20_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_39_5_text, var_82_18_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(text s i-1)
  var_append, 2, var_101_20_buf, LOCAL(2), 1, var_101_20_buf,
  // length_of(buf) .mod. 8))
  var_length_of, 1, var_101_20_buf, 1, LOCAL(1),
  // indent+length_of(buf) .mod. 8))
  var_std__plus, 2, var_83_6_indent, LOCAL(1), 1, LOCAL(2),
  // indent+length_of(buf) .mod. 8))
  var_mod, 2, LOCAL(2), num_8, 1, LOCAL(3),
  // 8-(indent+length_of(buf) .mod. 8))
  var_std__minus, 2, num_8, LOCAL(3), 1, LOCAL(4),
  // spaces(8-(indent+length_of(buf) .mod. 8))
  var_spaces, 1, LOCAL(4), 1, LOCAL(5),
  // append &buf
  var_append, 2, var_101_20_buf, LOCAL(5), 1, var_101_20_buf,
  // inc &i
  var_inc, 1, var_102_20_i, 1, var_102_20_i,
  // !s i
  LET, 1, var_102_20_i, 1, var_82_18_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(123, 54),
  POS(123, 41),
  POS(123, 29),
  POS(125, 48),
  POS(125, 41),
  POS(125, 41),
  POS(125, 38),
  POS(125, 31),
  POS(124, 29),
  POS(126, 29),
  POS(127, 29),
  POS(128, 29)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 12, 0,
  {}
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_102_20_i, 1, var_102_20_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(130, 29),
  POS(131, 29)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std__2__0__split_into_groups[] = {
  1, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_141_5_lines,
  var_false, var_142_5_keep_empty_lines,
  var_false, LOCAL(1), // 143_5_split_recursively
  var_std_types__2__0__group, var_144_5_proto_group,
  // $n length_of(lines)
  var_length_of, 1, var_141_5_lines, 1, var_146_4_n,
  // if
  var_if, 3, LOCAL(1), lambda_split_recursively, lambda_27, TAIL_CALL,
  POS(146, 3),
  POS(147, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__2__0__split_into_groups = {
  t_func_std__2__0__split_into_groups, NULL, 2, 1,
  {"143_5_split_recursively\000"}
};

static TAB_NUM t_lambda_split_recursively[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_142_5_keep_empty_lines, lambda_keep_empty_lines, lambda_26, TAIL_CALL,
  POS(149, 7)
};

static FUNCTION_INFO i_lambda_split_recursively = {
  t_lambda_split_recursively, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_keep_empty_lines[] = {
  4, // locals
  0, // parameters
  // get_group_kel_rec 1 1 $_idx $last $groups -1
  func_get_group_kel_rec, 3, num_1, num_1, minus_num_1, 3, LOCAL(1), LOCAL(3), LOCAL(4),
  // last+1 -1)
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // range(lines last+1 -1)
  var_range, 3, var_141_5_lines, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // append groups range(lines last+1 -1)
  var_append, 2, LOCAL(4), LOCAL(2), TAIL_CALL,
  POS(151, 11),
  POS(152, 37),
  POS(152, 25),
  POS(152, 11),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_keep_empty_lines = {
  t_lambda_keep_empty_lines, NULL, 4, 2,
  {"151_40_last\000", "151_46_groups\000"}
};

static TAB_NUM t_lambda_26[] = {
  2, // locals
  0, // parameters
  // get_group_rec 1 $_idx $groups -1
  func_get_group_rec, 2, num_1, minus_num_1, 2, LOCAL(1), LOCAL(2),
  // -> groups
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(154, 11),
  POS(155, 11),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 2, 1,
  {"154_34_groups\000"}
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_142_5_keep_empty_lines, lambda_2_keep_empty_lines, lambda_28, TAIL_CALL,
  POS(157, 7)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_2_keep_empty_lines[] = {
  4, // locals
  0, // parameters
  // get_group_kel 1 1 $_idx $last $groups -1
  func_get_group_kel, 3, num_1, num_1, minus_num_1, 3, LOCAL(1), LOCAL(3), LOCAL(4),
  // last+1 -1)
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // range(lines last+1 -1)
  var_range, 3, var_141_5_lines, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // append groups range(lines last+1 -1)
  var_append, 2, LOCAL(4), LOCAL(2), TAIL_CALL,
  POS(159, 11),
  POS(160, 37),
  POS(160, 25),
  POS(160, 11),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_2_keep_empty_lines = {
  t_lambda_2_keep_empty_lines, NULL, 4, 2,
  {"159_42_groups\000", "159_36_last\000"}
};

static TAB_NUM t_lambda_28[] = {
  2, // locals
  0, // parameters
  // get_group 1 $_idx $groups -1
  func_get_group, 2, num_1, minus_num_1, 2, LOCAL(1), LOCAL(2),
  // -> groups
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(162, 11),
  POS(163, 11),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 2, 1,
  {"162_30_groups\000"}
};

static TAB_NUM t_func_get_group_kel_rec[] = {
  0, // locals
  3, // parameters
  var_165_24_s,
  var_165_26_i,
  var_165_28_group_indent,
  // $last_indent VERY_LARGE_INDENT
  LET, 1, num_9999, 1, var_166_6_last_indent,
  // $nodes empty_list
  LET, 1, var_empty_list, 1, var_167_6_nodes,
  // $e s-1
  var_std__minus, 2, var_165_24_s, num_1, 1, var_168_6_e,
  // loop:
  var_loop, 1, lambda_4_loop, TAIL_CALL,
  POS(166, 5),
  POS(167, 5),
  POS(168, 5),
  POS(169, 5)
};

static FUNCTION_INFO i_func_get_group_kel_rec = {
  t_func_get_group_kel_rec, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_4_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_146_4_n, var_165_26_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_29, lambda_30, TAIL_CALL,
  POS(171, 13),
  POS(170, 7)
};

static FUNCTION_INFO i_lambda_4_loop = {
  t_lambda_4_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_29[] = {
  2, // locals
  0, // parameters
  // range(lines s e))
  var_range, 3, var_141_5_lines, var_165_24_s, var_168_6_e, 1, LOCAL(1),
  // append(nodes range(lines s e))
  var_append, 2, var_167_6_nodes, LOCAL(1), 1, LOCAL(2),
  //  i e append(nodes range(lines s e))
  LET, 3, var_165_26_i, var_168_6_e, LOCAL(2), TAIL_CALL,
  POS(172, 29),
  POS(172, 16),
  POS(172, 11)
};

static FUNCTION_INFO i_lambda_29 = {
  t_lambda_29, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  0, // parameters
  // $line lines(i)
  var_141_5_lines, 1, var_165_26_i, 1, var_174_12_line,
  // is_undefined:
  var_is_undefined, 1, var_174_12_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_line_is_undefined, lambda_31, TAIL_CALL,
  POS(174, 11),
  POS(176, 18),
  POS(175, 11)
};

static FUNCTION_INFO i_lambda_30 = {
  t_lambda_30, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_line_is_undefined[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_165_26_i, 1, var_165_26_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(177, 15),
  POS(178, 15)
};

static FUNCTION_INFO i_lambda_line_is_undefined = {
  t_lambda_line_is_undefined, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  0, // parameters
  // $indent indent_of(line)
  var_indent_of, 1, var_174_12_line, 1, var_180_16_indent,
  // group_indent
  var_std__less, 2, var_165_28_group_indent, var_180_16_indent, 1, LOCAL(1),
  // group_indent
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_32, lambda_33, TAIL_CALL,
  POS(180, 15),
  POS(182, 27),
  POS(182, 27),
  POS(181, 15)
};

static FUNCTION_INFO i_lambda_31 = {
  t_lambda_31, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_32[] = {
  2, // locals
  0, // parameters
  // range(lines s e))
  var_range, 3, var_141_5_lines, var_165_24_s, var_168_6_e, 1, LOCAL(1),
  // append(nodes range(lines s e))
  var_append, 2, var_167_6_nodes, LOCAL(1), 1, LOCAL(2),
  //  i e append(nodes range(lines s e))
  LET, 3, var_165_26_i, var_168_6_e, LOCAL(2), TAIL_CALL,
  POS(183, 37),
  POS(183, 24),
  POS(183, 19)
};

static FUNCTION_INFO i_lambda_32 = {
  t_lambda_32, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // last_indent:
  var_std__less, 2, var_166_6_last_indent, var_180_16_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, lambda_35, TAIL_CALL,
  POS(186, 30),
  POS(185, 19)
};

static FUNCTION_INFO i_lambda_33 = {
  t_lambda_33, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_34[] = {
  4, // locals
  0, // parameters
  // e-1)
  var_std__minus, 2, var_168_6_e, num_1, 1, LOCAL(1),
  // range(lines s e-1)
  var_range, 3, var_141_5_lines, var_165_24_s, LOCAL(1), 1, LOCAL(2),
  // append &nodes range(lines s e-1)
  var_append, 2, var_167_6_nodes, LOCAL(2), 1, var_167_6_nodes,
  // $head lines(e)
  var_141_5_lines, 1, var_168_6_e, 1, LOCAL(3),
  // e+1 &i !e $subgroups last_indent
  var_std__plus, 2, var_168_6_e, num_1, 1, LOCAL(1),
  // get_group_kel_rec e+1 &i !e $subgroups last_indent
  func_get_group_kel_rec, 3, LOCAL(1), var_165_26_i, var_166_6_last_indent, 3, var_165_26_i, var_168_6_e, LOCAL(4),
  // new(proto_group head)(.subgroups_of subgroups)
  var_new, 2, var_144_5_proto_group, LOCAL(3), 1, LOCAL(1),
  // .subgroups_of subgroups)
  LET, -1, LOCAL(1), var_subgroups_of, LOCAL(4), LOCAL(2),
  // push &nodes new(proto_group head)(.subgroups_of subgroups)
  var_push, 2, var_167_6_nodes, LOCAL(2), 1, var_167_6_nodes,
  // !s e+1
  var_std__plus, 2, var_168_6_e, num_1, 1, var_165_24_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(187, 51),
  POS(187, 37),
  POS(187, 23),
  POS(188, 23),
  POS(189, 41),
  POS(189, 23),
  POS(190, 35),
  POS(190, 57),
  POS(190, 23),
  POS(191, 23),
  POS(192, 23),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_34 = {
  t_lambda_34, NULL, 11, 2,
  {"189_52_subgroups\000", "188_24_head\000"}
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  // !last_indent indent
  LET, 1, var_180_16_indent, 1, var_166_6_last_indent,
  // !e i
  LET, 1, var_165_26_i, 1, var_168_6_e,
  // inc &i
  var_inc, 1, var_165_26_i, 1, var_165_26_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(194, 23),
  POS(195, 23),
  POS(196, 23),
  POS(197, 23)
};

static FUNCTION_INFO i_lambda_35 = {
  t_lambda_35, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_get_group_rec[] = {
  0, // locals
  2, // parameters
  var_199_20_i,
  var_199_22_group_indent,
  // $last_indent VERY_LARGE_INDENT
  LET, 1, num_9999, 1, var_200_6_last_indent,
  // $nodes empty_list
  LET, 1, var_empty_list, 1, var_201_6_nodes,
  // $last_node undefined
  LET, 1, var_undefined, 1, var_202_6_last_node,
  // loop:
  var_loop, 1, lambda_5_loop, TAIL_CALL,
  POS(200, 5),
  POS(201, 5),
  POS(202, 5),
  POS(203, 5)
};

static FUNCTION_INFO i_func_get_group_rec = {
  t_func_get_group_rec, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_5_loop[] = {
  1, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_146_4_n, var_199_20_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_36, lambda_38, TAIL_CALL,
  POS(205, 13),
  POS(204, 7)
};

static FUNCTION_INFO i_lambda_5_loop = {
  t_lambda_5_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_36[] = {
  1, // locals
  0, // parameters
  // is_defined &nodes: push nodes last_node
  var_is_defined, 1, var_202_6_last_node, 1, LOCAL(1),
  // update_if last_node.is_defined &nodes: push nodes last_node
  var_update_if, 3, LOCAL(1), var_201_6_nodes, lambda_37, 1, var_201_6_nodes,
  // -> i nodes
  LET, 2, var_199_20_i, var_201_6_nodes, TAIL_CALL,
  POS(206, 31),
  POS(206, 11),
  POS(207, 11)
};

static FUNCTION_INFO i_lambda_36 = {
  t_lambda_36, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  // push nodes last_node
  var_push, 2, var_201_6_nodes, var_202_6_last_node, TAIL_CALL,
  POS(206, 50)
};

static FUNCTION_INFO i_lambda_37 = {
  t_lambda_37, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_38[] = {
  1, // locals
  0, // parameters
  // $line lines(i)
  var_141_5_lines, 1, var_199_20_i, 1, var_209_12_line,
  // is_undefined:
  var_is_undefined, 1, var_209_12_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_line_is_undefined, lambda_39, TAIL_CALL,
  POS(209, 11),
  POS(211, 18),
  POS(210, 11)
};

static FUNCTION_INFO i_lambda_38 = {
  t_lambda_38, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_2_line_is_undefined[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_199_20_i, 1, var_199_20_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(212, 15),
  POS(213, 15)
};

static FUNCTION_INFO i_lambda_2_line_is_undefined = {
  t_lambda_2_line_is_undefined, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_39[] = {
  2, // locals
  0, // parameters
  // $indent indent_of(line)
  var_indent_of, 1, var_209_12_line, 1, var_215_16_indent,
  // group_indent:
  var_std__less, 2, var_199_22_group_indent, var_215_16_indent, 1, LOCAL(1),
  // group_indent:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_40, lambda_42, TAIL_CALL,
  POS(215, 15),
  POS(217, 27),
  POS(217, 27),
  POS(216, 15)
};

static FUNCTION_INFO i_lambda_39 = {
  t_lambda_39, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_40[] = {
  1, // locals
  0, // parameters
  // is_defined &nodes: push nodes last_node
  var_is_defined, 1, var_202_6_last_node, 1, LOCAL(1),
  // update_if last_node.is_defined &nodes: push nodes last_node
  var_update_if, 3, LOCAL(1), var_201_6_nodes, lambda_41, 1, var_201_6_nodes,
  // -> i nodes
  LET, 2, var_199_20_i, var_201_6_nodes, TAIL_CALL,
  POS(218, 39),
  POS(218, 19),
  POS(219, 19)
};

static FUNCTION_INFO i_lambda_40 = {
  t_lambda_40, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  // push nodes last_node
  var_push, 2, var_201_6_nodes, var_202_6_last_node, TAIL_CALL,
  POS(218, 58)
};

static FUNCTION_INFO i_lambda_41 = {
  t_lambda_41, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // last_indent:
  var_std__less, 2, var_200_6_last_indent, var_215_16_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_43, lambda_44, TAIL_CALL,
  POS(222, 30),
  POS(221, 19)
};

static FUNCTION_INFO i_lambda_42 = {
  t_lambda_42, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_43[] = {
  2, // locals
  0, // parameters
  // get_group_rec &i $subgroups last_indent
  func_get_group_rec, 2, var_199_20_i, var_200_6_last_indent, 2, var_199_20_i, LOCAL(2),
  // new(proto_group last_node)(.subgroups_of subgroups)
  var_new, 2, var_144_5_proto_group, var_202_6_last_node, 1, LOCAL(1),
  // !last_node
  LET, -1, LOCAL(1), var_subgroups_of, LOCAL(2), var_202_6_last_node,
  // next
  var_next, 0, TAIL_CALL,
  POS(223, 23),
  POS(225, 25),
  POS(224, 23),
  POS(226, 23),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_43 = {
  t_lambda_43, NULL, 4, 1,
  {"223_41_subgroups\000"}
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  0, // parameters
  // is_defined &nodes:
  var_is_defined, 1, var_202_6_last_node, 1, LOCAL(1),
  // update_if last_node.is_defined &nodes:
  var_update_if, 3, LOCAL(1), var_201_6_nodes, lambda_45, 1, var_201_6_nodes,
  // !last_node line
  LET, 1, var_209_12_line, 1, var_202_6_last_node,
  // !last_indent indent
  LET, 1, var_215_16_indent, 1, var_200_6_last_indent,
  // inc &i
  var_inc, 1, var_199_20_i, 1, var_199_20_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(228, 43),
  POS(228, 23),
  POS(230, 23),
  POS(231, 23),
  POS(232, 23),
  POS(233, 23)
};

static FUNCTION_INFO i_lambda_44 = {
  t_lambda_44, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  // push nodes last_node
  var_push, 2, var_201_6_nodes, var_202_6_last_node, TAIL_CALL,
  POS(229, 25)
};

static FUNCTION_INFO i_lambda_45 = {
  t_lambda_45, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_get_group_kel[] = {
  0, // locals
  3, // parameters
  var_235_20_s,
  var_235_22_i,
  var_235_24_group_indent,
  // $last_indent VERY_LARGE_INDENT
  LET, 1, num_9999, 1, var_236_6_last_indent,
  // $nodes empty_list
  LET, 1, var_empty_list, 1, var_237_6_nodes,
  // $e s-1
  var_std__minus, 2, var_235_20_s, num_1, 1, var_238_6_e,
  // loop:
  var_loop, 1, lambda_6_loop, TAIL_CALL,
  POS(236, 5),
  POS(237, 5),
  POS(238, 5),
  POS(239, 5)
};

static FUNCTION_INFO i_func_get_group_kel = {
  t_func_get_group_kel, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_6_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_146_4_n, var_235_22_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_46, lambda_47, TAIL_CALL,
  POS(241, 13),
  POS(240, 7)
};

static FUNCTION_INFO i_lambda_6_loop = {
  t_lambda_6_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_46[] = {
  2, // locals
  0, // parameters
  // range(lines s e))
  var_range, 3, var_141_5_lines, var_235_20_s, var_238_6_e, 1, LOCAL(1),
  // append(nodes range(lines s e))
  var_append, 2, var_237_6_nodes, LOCAL(1), 1, LOCAL(2),
  //  i e append(nodes range(lines s e))
  LET, 3, var_235_22_i, var_238_6_e, LOCAL(2), TAIL_CALL,
  POS(242, 29),
  POS(242, 16),
  POS(242, 11)
};

static FUNCTION_INFO i_lambda_46 = {
  t_lambda_46, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_47[] = {
  1, // locals
  0, // parameters
  // $line lines(i)
  var_141_5_lines, 1, var_235_22_i, 1, var_244_12_line,
  // is_undefined:
  var_is_undefined, 1, var_244_12_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3_line_is_undefined, lambda_48, TAIL_CALL,
  POS(244, 11),
  POS(246, 18),
  POS(245, 11)
};

static FUNCTION_INFO i_lambda_47 = {
  t_lambda_47, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_3_line_is_undefined[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_235_22_i, 1, var_235_22_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(247, 15),
  POS(248, 15)
};

static FUNCTION_INFO i_lambda_3_line_is_undefined = {
  t_lambda_3_line_is_undefined, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_48[] = {
  2, // locals
  0, // parameters
  // $indent indent_of(line)
  var_indent_of, 1, var_244_12_line, 1, var_250_16_indent,
  // group_indent
  var_std__less, 2, var_235_24_group_indent, var_250_16_indent, 1, LOCAL(1),
  // group_indent
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_49, lambda_50, TAIL_CALL,
  POS(250, 15),
  POS(252, 27),
  POS(252, 27),
  POS(251, 15)
};

static FUNCTION_INFO i_lambda_48 = {
  t_lambda_48, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_49[] = {
  2, // locals
  0, // parameters
  // range(lines s e))
  var_range, 3, var_141_5_lines, var_235_20_s, var_238_6_e, 1, LOCAL(1),
  // append(nodes range(lines s e))
  var_append, 2, var_237_6_nodes, LOCAL(1), 1, LOCAL(2),
  //  i e append(nodes range(lines s e))
  LET, 3, var_235_22_i, var_238_6_e, LOCAL(2), TAIL_CALL,
  POS(253, 37),
  POS(253, 24),
  POS(253, 19)
};

static FUNCTION_INFO i_lambda_49 = {
  t_lambda_49, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_50[] = {
  1, // locals
  0, // parameters
  // last_indent:
  var_std__less, 2, var_236_6_last_indent, var_250_16_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_51, lambda_57, TAIL_CALL,
  POS(256, 30),
  POS(255, 19)
};

static FUNCTION_INFO i_lambda_50 = {
  t_lambda_50, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_51[] = {
  2, // locals
  0, // parameters
  // e-1)
  var_std__minus, 2, var_238_6_e, num_1, 1, LOCAL(1),
  // range(lines s e-1)
  var_range, 3, var_141_5_lines, var_235_20_s, LOCAL(1), 1, LOCAL(2),
  // append &nodes range(lines s e-1)
  var_append, 2, var_237_6_nodes, LOCAL(2), 1, var_237_6_nodes,
  // $head lines(e)
  var_141_5_lines, 1, var_238_6_e, 1, var_258_24_head,
  // !s e+1
  var_std__plus, 2, var_238_6_e, num_1, 1, var_235_20_s,
  // !e i
  LET, 1, var_235_22_i, 1, var_238_6_e,
  // loop
  var_loop, 2, lambda_52, lambda_56, TAIL_CALL,
  POS(257, 51),
  POS(257, 37),
  POS(257, 23),
  POS(258, 23),
  POS(259, 23),
  POS(260, 23),
  POS(261, 23)
};

static FUNCTION_INFO i_lambda_51 = {
  t_lambda_51, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_52[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_235_22_i, 1, var_235_22_i,
  // n
  var_std__less, 2, var_146_4_n, var_235_22_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_53, TAIL_CALL,
  POS(263, 27),
  POS(265, 33),
  POS(264, 27)
};

static FUNCTION_INFO i_lambda_52 = {
  t_lambda_52, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_53[] = {
  1, // locals
  0, // parameters
  // $subline lines(i)
  var_141_5_lines, 1, var_235_22_i, 1, var_268_32_subline,
  // is_undefined
  var_is_undefined, 1, var_268_32_subline, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_54, TAIL_CALL,
  POS(268, 31),
  POS(270, 41),
  POS(269, 31)
};

static FUNCTION_INFO i_lambda_53 = {
  t_lambda_53, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_54[] = {
  2, // locals
  0, // parameters
  // $subindent indent_of(subline)
  var_indent_of, 1, var_268_32_subline, 1, LOCAL(2),
  // last_indent:
  var_std__less, 2, var_236_6_last_indent, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_55, var_break, TAIL_CALL,
  POS(273, 35),
  POS(275, 49),
  POS(274, 35),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_54 = {
  t_lambda_54, NULL, 3, 1,
  {"273_36_subindent\000"}
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  // !e i
  LET, 1, var_235_22_i, 1, var_238_6_e,
  // next
  var_next, 0, TAIL_CALL,
  POS(276, 39),
  POS(277, 39)
};

static FUNCTION_INFO i_lambda_55 = {
  t_lambda_55, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_56[] = {
  3, // locals
  0, // parameters
  // range(lines s e)
  var_range, 3, var_141_5_lines, var_235_20_s, var_238_6_e, 1, LOCAL(1),
  // new(proto_group head)
  var_new, 2, var_144_5_proto_group, var_258_24_head, 1, LOCAL(2),
  // new(proto_group head)
  LET, -1, LOCAL(2), var_subgroups_of, LOCAL(1), LOCAL(3),
  // push &nodes
  var_push, 2, var_237_6_nodes, LOCAL(3), 1, var_237_6_nodes,
  // !s e+1
  var_std__plus, 2, var_238_6_e, num_1, 1, var_235_20_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(282, 45),
  POS(281, 29),
  POS(281, 29),
  POS(280, 27),
  POS(283, 27),
  POS(284, 27)
};

static FUNCTION_INFO i_lambda_56 = {
  t_lambda_56, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  // !last_indent indent
  LET, 1, var_250_16_indent, 1, var_236_6_last_indent,
  // !e i
  LET, 1, var_235_22_i, 1, var_238_6_e,
  // inc &i
  var_inc, 1, var_235_22_i, 1, var_235_22_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(286, 23),
  POS(287, 23),
  POS(288, 23),
  POS(289, 23)
};

static FUNCTION_INFO i_lambda_57 = {
  t_lambda_57, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_get_group[] = {
  0, // locals
  2, // parameters
  var_291_16_i,
  var_291_18_group_indent,
  // $last_indent VERY_LARGE_INDENT
  LET, 1, num_9999, 1, var_292_6_last_indent,
  // $nodes empty_list
  LET, 1, var_empty_list, 1, var_293_6_nodes,
  // $last_node undefined
  LET, 1, var_undefined, 1, var_294_6_last_node,
  // $s undefined
  LET, 1, var_undefined, 1, var_295_6_s,
  // loop:
  var_loop, 1, lambda_7_loop, TAIL_CALL,
  POS(292, 5),
  POS(293, 5),
  POS(294, 5),
  POS(295, 5),
  POS(296, 5)
};

static FUNCTION_INFO i_func_get_group = {
  t_func_get_group, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_7_loop[] = {
  1, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_146_4_n, var_291_16_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_58, lambda_60, TAIL_CALL,
  POS(298, 13),
  POS(297, 7)
};

static FUNCTION_INFO i_lambda_7_loop = {
  t_lambda_7_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_58[] = {
  1, // locals
  0, // parameters
  // is_defined &nodes: push nodes last_node
  var_is_defined, 1, var_294_6_last_node, 1, LOCAL(1),
  // update_if last_node.is_defined &nodes: push nodes last_node
  var_update_if, 3, LOCAL(1), var_293_6_nodes, lambda_59, 1, var_293_6_nodes,
  // -> i nodes
  LET, 2, var_291_16_i, var_293_6_nodes, TAIL_CALL,
  POS(299, 31),
  POS(299, 11),
  POS(300, 11)
};

static FUNCTION_INFO i_lambda_58 = {
  t_lambda_58, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_59[] = {
  0, // locals
  0, // parameters
  // push nodes last_node
  var_push, 2, var_293_6_nodes, var_294_6_last_node, TAIL_CALL,
  POS(299, 50)
};

static FUNCTION_INFO i_lambda_59 = {
  t_lambda_59, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_60[] = {
  1, // locals
  0, // parameters
  // $line lines(i)
  var_141_5_lines, 1, var_291_16_i, 1, var_302_12_line,
  // is_undefined:
  var_is_undefined, 1, var_302_12_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_4_line_is_undefined, lambda_61, TAIL_CALL,
  POS(302, 11),
  POS(304, 18),
  POS(303, 11)
};

static FUNCTION_INFO i_lambda_60 = {
  t_lambda_60, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_4_line_is_undefined[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_291_16_i, 1, var_291_16_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(305, 15),
  POS(306, 15)
};

static FUNCTION_INFO i_lambda_4_line_is_undefined = {
  t_lambda_4_line_is_undefined, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_61[] = {
  2, // locals
  0, // parameters
  // $indent indent_of(line)
  var_indent_of, 1, var_302_12_line, 1, var_308_16_indent,
  // group_indent:
  var_std__less, 2, var_291_18_group_indent, var_308_16_indent, 1, LOCAL(1),
  // group_indent:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_62, lambda_64, TAIL_CALL,
  POS(308, 15),
  POS(310, 27),
  POS(310, 27),
  POS(309, 15)
};

static FUNCTION_INFO i_lambda_61 = {
  t_lambda_61, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_62[] = {
  1, // locals
  0, // parameters
  // is_defined &nodes: push nodes last_node
  var_is_defined, 1, var_294_6_last_node, 1, LOCAL(1),
  // update_if last_node.is_defined &nodes: push nodes last_node
  var_update_if, 3, LOCAL(1), var_293_6_nodes, lambda_63, 1, var_293_6_nodes,
  // -> i nodes
  LET, 2, var_291_16_i, var_293_6_nodes, TAIL_CALL,
  POS(311, 39),
  POS(311, 19),
  POS(312, 19)
};

static FUNCTION_INFO i_lambda_62 = {
  t_lambda_62, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_63[] = {
  0, // locals
  0, // parameters
  // push nodes last_node
  var_push, 2, var_293_6_nodes, var_294_6_last_node, TAIL_CALL,
  POS(311, 58)
};

static FUNCTION_INFO i_lambda_63 = {
  t_lambda_63, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_64[] = {
  1, // locals
  0, // parameters
  // last_indent:
  var_std__less, 2, var_292_6_last_indent, var_308_16_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_65, lambda_71, TAIL_CALL,
  POS(315, 30),
  POS(314, 19)
};

static FUNCTION_INFO i_lambda_64 = {
  t_lambda_64, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_65[] = {
  0, // locals
  0, // parameters
  // $e i
  LET, 1, var_291_16_i, 1, var_316_24_e,
  // loop
  var_loop, 2, lambda_66, lambda_70, TAIL_CALL,
  POS(316, 23),
  POS(317, 23)
};

static FUNCTION_INFO i_lambda_65 = {
  t_lambda_65, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_66[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_291_16_i, 1, var_291_16_i,
  // n
  var_std__less, 2, var_146_4_n, var_291_16_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_67, TAIL_CALL,
  POS(319, 27),
  POS(321, 33),
  POS(320, 27)
};

static FUNCTION_INFO i_lambda_66 = {
  t_lambda_66, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_67[] = {
  1, // locals
  0, // parameters
  // $subline lines(i)
  var_141_5_lines, 1, var_291_16_i, 1, var_324_32_subline,
  // is_undefined
  var_is_undefined, 1, var_324_32_subline, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_68, TAIL_CALL,
  POS(324, 31),
  POS(326, 41),
  POS(325, 31)
};

static FUNCTION_INFO i_lambda_67 = {
  t_lambda_67, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_68[] = {
  2, // locals
  0, // parameters
  // $subindent indent_of(subline)
  var_indent_of, 1, var_324_32_subline, 1, LOCAL(2),
  // last_indent:
  var_std__less, 2, var_292_6_last_indent, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_69, var_break, TAIL_CALL,
  POS(329, 35),
  POS(331, 49),
  POS(330, 35),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_68 = {
  t_lambda_68, NULL, 3, 1,
  {"329_36_subindent\000"}
};

static TAB_NUM t_lambda_69[] = {
  0, // locals
  0, // parameters
  // !e i
  LET, 1, var_291_16_i, 1, var_316_24_e,
  // next
  var_next, 0, TAIL_CALL,
  POS(332, 39),
  POS(333, 39)
};

static FUNCTION_INFO i_lambda_69 = {
  t_lambda_69, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_70[] = {
  2, // locals
  0, // parameters
  // range(lines s e)
  var_range, 3, var_141_5_lines, var_295_6_s, var_316_24_e, 1, LOCAL(1),
  // new(proto_group last_node)
  var_new, 2, var_144_5_proto_group, var_294_6_last_node, 1, LOCAL(2),
  // !last_node
  LET, -1, LOCAL(2), var_subgroups_of, LOCAL(1), var_294_6_last_node,
  // next
  var_next, 0, TAIL_CALL,
  POS(338, 45),
  POS(337, 29),
  POS(336, 27),
  POS(339, 27)
};

static FUNCTION_INFO i_lambda_70 = {
  t_lambda_70, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_71[] = {
  1, // locals
  0, // parameters
  // is_defined &nodes:
  var_is_defined, 1, var_294_6_last_node, 1, LOCAL(1),
  // update_if last_node.is_defined &nodes:
  var_update_if, 3, LOCAL(1), var_293_6_nodes, lambda_72, 1, var_293_6_nodes,
  // !last_node line
  LET, 1, var_302_12_line, 1, var_294_6_last_node,
  // !last_indent indent
  LET, 1, var_308_16_indent, 1, var_292_6_last_indent,
  // inc &i
  var_inc, 1, var_291_16_i, 1, var_291_16_i,
  // !s i
  LET, 1, var_291_16_i, 1, var_295_6_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(341, 43),
  POS(341, 23),
  POS(343, 23),
  POS(344, 23),
  POS(345, 23),
  POS(346, 23),
  POS(347, 23)
};

static FUNCTION_INFO i_lambda_71 = {
  t_lambda_71, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  0, // parameters
  // push nodes last_node
  var_push, 2, var_293_6_nodes, var_294_6_last_node, TAIL_CALL,
  POS(342, 25)
};

static FUNCTION_INFO i_lambda_72 = {
  t_lambda_72, NULL, 1, 0,
  {}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__2__0__line___subgroups_of}},
  {FLT_POSITIVE_INT64, 0, {.value = 300}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__2__0__split_into_indented_lines}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_split}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_ls_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_create_line}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_loop}},
  {FLT_CHARACTER, 0, {.value = 9}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_POSITIVE_INT64, 0, {.value = 8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_24}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_25}},
  {FLT_POSITIVE_INT64, 0, {.value = 9999}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__2__0__split_into_groups}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_split_recursively}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_keep_empty_lines}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_26}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_27}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_keep_empty_lines}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_28}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_get_group_kel_rec}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_29}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_30}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_line_is_undefined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_31}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_32}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_33}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_34}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_35}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_get_group_rec}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_36}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_37}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_38}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_line_is_undefined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_39}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_40}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_41}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_42}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_43}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_44}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_45}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_get_group_kel}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_46}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_47}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3_line_is_undefined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_48}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_49}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_50}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_51}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_52}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_53}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_54}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_55}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_56}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_57}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_get_group}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_58}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_59}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_60}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4_line_is_undefined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_61}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_62}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_63}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_64}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_65}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_66}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_67}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_68}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_69}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_70}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_71}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_72}}
};

static ATTRIBUTE_DEFINITION std_types__2__0__line__attributes[] = {
  {-var_indent_of, -var_undefined},
  {-var_text_of, -var_undefined},
  {var_subgroups_of, -func_std_types__2__0__line___subgroups_of}
};

static ATTRIBUTE_DEFINITION std_types__2__0__group__attributes[] = {
  {-var_subgroups_of, -var_empty_list}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "indent_of\000std-2.0", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(26, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "text_of\000std-2.0", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "subgroups_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_DERIVED, 0, 3,
    "line\000std_types-2.0", std_types__2__0__line__attributes,
    {"object\000std_types-2.0"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "object\000std_types-2.0", NULL,
    {.position = POS(30, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "indent_of\000", NULL,
    {.position = POS(31, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(31, 32)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "text_of\000", NULL,
    {.position = POS(32, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "subgroups_of\000", NULL,
    {.position = POS(33, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(33, 47)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split_into_indented_lines\000std-2.0", NULL,
    {.const_idx = -func_std__2__0__split_into_indented_lines}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "39_5_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "40_5_keep_lineends\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(40, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "41_5_proto_line\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(43, 6)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "46_12_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "46_14_e\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(48, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(48, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(48, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "div\000", NULL,
    {.position = POS(49, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(50, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "52_10_lines\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(55, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(55, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "53_10_ls\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(54, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "59_14_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(63, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(64, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(66, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(73, 38)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(73, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(74, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to\000", NULL,
    {.position = POS(58, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "82_18_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "82_20_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "83_6_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "101_20_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "102_20_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(109, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mod\000", NULL,
    {.position = POS(125, 41)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spaces\000", NULL,
    {.position = POS(125, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(126, 29)}
  },
  {
    FOT_DERIVED, 0, 1,
    "group\000std_types-2.0", std_types__2__0__group__attributes,
    {"line\000std_types-2.0"}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split_into_groups\000std-2.0", NULL,
    {.const_idx = -func_std__2__0__split_into_groups}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "141_5_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "142_5_keep_empty_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "144_5_proto_group\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "146_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "165_24_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "165_26_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "165_28_group_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "166_6_last_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "167_6_nodes\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "168_6_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "174_12_line\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(176, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "180_16_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(190, 35)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "199_20_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "199_22_group_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "200_6_last_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "201_6_nodes\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "202_6_last_node\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(206, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "209_12_line\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "215_16_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "235_20_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "235_22_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "235_24_group_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "236_6_last_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "237_6_nodes\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "238_6_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "244_12_line\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "250_16_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "258_24_head\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(266, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "268_32_subline\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "291_16_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "291_18_group_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "292_6_last_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "293_6_nodes\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "294_6_last_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "295_6_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "302_12_line\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "308_16_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "316_24_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "324_32_subline\000", NULL
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 2, 0}
};

FUNKY_MODULE module__basic__types__collections__strings__string_2 = {
  "_basic__types__collections__strings__string_2", // module name
  "basic/types/collections/strings/string_2.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  107, // number of constants
  91, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
