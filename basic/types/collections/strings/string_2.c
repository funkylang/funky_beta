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
  lambda_20 = -35,
  lambda_21 = -36,
  num_9999 = -37,
  func_std__2__0__split_into_groups = -38,
  lambda_split_recursively = -39,
  lambda_keep_empty_lines = -40,
  minus_num_1 = -41,
  lambda_22 = -42,
  lambda_23 = -43,
  lambda_2_keep_empty_lines = -44,
  lambda_24 = -45,
  func_get_group_kel_rec = -46,
  lambda_3_loop = -47,
  lambda_25 = -48,
  lambda_26 = -49,
  lambda_line_is_undefined = -50,
  lambda_27 = -51,
  lambda_28 = -52,
  lambda_29 = -53,
  lambda_30 = -54,
  lambda_31 = -55,
  func_get_group_rec = -56,
  lambda_4_loop = -57,
  lambda_32 = -58,
  lambda_33 = -59,
  lambda_34 = -60,
  lambda_2_line_is_undefined = -61,
  lambda_35 = -62,
  lambda_36 = -63,
  lambda_37 = -64,
  lambda_38 = -65,
  lambda_39 = -66,
  lambda_40 = -67,
  lambda_41 = -68,
  func_get_group_kel = -69,
  lambda_5_loop = -70,
  lambda_42 = -71,
  lambda_43 = -72,
  lambda_3_line_is_undefined = -73,
  lambda_44 = -74,
  lambda_45 = -75,
  lambda_46 = -76,
  lambda_47 = -77,
  lambda_48 = -78,
  lambda_49 = -79,
  lambda_50 = -80,
  lambda_51 = -81,
  lambda_52 = -82,
  lambda_53 = -83,
  func_get_group = -84,
  lambda_6_loop = -85,
  lambda_54 = -86,
  lambda_55 = -87,
  lambda_56 = -88,
  lambda_4_line_is_undefined = -89,
  lambda_57 = -90,
  lambda_58 = -91,
  lambda_59 = -92,
  lambda_60 = -93,
  lambda_61 = -94,
  lambda_62 = -95,
  lambda_63 = -96,
  lambda_64 = -97,
  lambda_65 = -98,
  lambda_66 = -99,
  lambda_67 = -100,
  lambda_68 = -101
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
  var_97_16_line_text, // dynamic
  var_range, // extern
  var_std_types__2__0__group, // derived
  var_std__2__0__split_into_groups, // initialized
  var_123_5_lines, // dynamic
  var_124_5_keep_empty_lines, // dynamic
  var_126_5_proto_group, // dynamic
  var_128_4_n, // dynamic
  var_147_24_s, // dynamic
  var_147_26_i, // dynamic
  var_147_28_group_indent, // dynamic
  var_148_6_last_indent, // dynamic
  var_149_6_nodes, // dynamic
  var_150_6_e, // dynamic
  var_156_12_line, // dynamic
  var_is_undefined, // extern
  var_inc, // extern
  var_162_16_indent, // dynamic
  var_new, // extern
  var_181_20_i, // dynamic
  var_181_22_group_indent, // dynamic
  var_182_6_last_indent, // dynamic
  var_183_6_nodes, // dynamic
  var_184_6_last_node, // dynamic
  var_update_if, // extern
  var_191_12_line, // dynamic
  var_197_16_indent, // dynamic
  var_217_20_s, // dynamic
  var_217_22_i, // dynamic
  var_217_24_group_indent, // dynamic
  var_218_6_last_indent, // dynamic
  var_219_6_nodes, // dynamic
  var_220_6_e, // dynamic
  var_226_12_line, // dynamic
  var_232_16_indent, // dynamic
  var_240_24_head, // dynamic
  var_break, // extern
  var_250_32_subline, // dynamic
  var_273_16_i, // dynamic
  var_273_18_group_indent, // dynamic
  var_274_6_last_indent, // dynamic
  var_275_6_nodes, // dynamic
  var_276_6_last_node, // dynamic
  var_277_6_s, // dynamic
  var_284_12_line, // dynamic
  var_290_16_indent, // dynamic
  var_298_24_e, // dynamic
  var_306_32_subline, // dynamic
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
  POS(44, 3)
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
  POS(50, 9)
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

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  s # the current block starts at a line start
  LET, 1, var_46_12_s, TAIL_CALL,
  POS(56, 15)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  undefined # just skip the characters until the next line start
  LET, 1, var_undefined, TAIL_CALL,
  POS(57, 15)
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

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // loop: # the last line extends into the next block
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(74, 17)
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

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  lines
  LET, 1, var_52_10_lines, TAIL_CALL,
  POS(80, 17)
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

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // if
  var_if, 3, var_40_5_keep_lineends, lambda_18, lambda_19, 1, LOCAL(1),
  // $line_text
  var_range, 3, var_39_5_text, var_82_18_s, LOCAL(1), 1, var_97_16_line_text,
  // s == e # only a newline character
  var_std__equal, 2, var_82_18_s, var_82_20_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_20, lambda_21, TAIL_CALL,
  POS(101, 19),
  POS(97, 15),
  POS(106, 17),
  POS(105, 15)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  e
  LET, 1, var_82_20_e, TAIL_CALL,
  POS(103, 23)
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // e-1
  var_std__minus, 2, var_82_20_e, num_1, 1, LOCAL(1),
  //  e-1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(104, 24),
  POS(104, 23)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(107, 19)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // proto_line
  LET, -2, var_41_5_proto_line, var_indent_of, var_83_6_indent, var_text_of, var_97_16_line_text, LOCAL(1),
  // 
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(109, 19),
  POS(108, 19)
};

static TAB_NUM t_func_std__2__0__split_into_groups[] = {
  1, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_123_5_lines,
  var_false, var_124_5_keep_empty_lines,
  var_false, LOCAL(1), // 125_5_split_recursively
  var_std_types__2__0__group, var_126_5_proto_group,
  // $n length_of(lines)
  var_length_of, 1, var_123_5_lines, 1, var_128_4_n,
  // if
  var_if, 3, LOCAL(1), lambda_split_recursively, lambda_23, TAIL_CALL,
  POS(128, 3),
  POS(129, 3)
};

static TAB_NUM t_lambda_split_recursively[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_124_5_keep_empty_lines, lambda_keep_empty_lines, lambda_22, TAIL_CALL,
  POS(131, 7)
};

static TAB_NUM t_lambda_keep_empty_lines[] = {
  4, // locals
  0, // parameters
  // get_group_kel_rec 1 1 $_idx $last $groups -1
  func_get_group_kel_rec, 3, num_1, num_1, minus_num_1, 3, LOCAL(1), LOCAL(3), LOCAL(4),
  // last+1 -1)
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // range(lines last+1 -1)
  var_range, 3, var_123_5_lines, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // append groups range(lines last+1 -1)
  var_append, 2, LOCAL(4), LOCAL(2), TAIL_CALL,
  POS(133, 11),
  POS(134, 37),
  POS(134, 25),
  POS(134, 11)
};

static TAB_NUM t_lambda_22[] = {
  2, // locals
  0, // parameters
  // get_group_rec 1 $_idx $groups -1
  func_get_group_rec, 2, num_1, minus_num_1, 2, LOCAL(1), LOCAL(2),
  // -> groups
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(136, 11),
  POS(137, 11)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_124_5_keep_empty_lines, lambda_2_keep_empty_lines, lambda_24, TAIL_CALL,
  POS(139, 7)
};

static TAB_NUM t_lambda_2_keep_empty_lines[] = {
  4, // locals
  0, // parameters
  // get_group_kel 1 1 $_idx $last $groups -1
  func_get_group_kel, 3, num_1, num_1, minus_num_1, 3, LOCAL(1), LOCAL(3), LOCAL(4),
  // last+1 -1)
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // range(lines last+1 -1)
  var_range, 3, var_123_5_lines, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // append groups range(lines last+1 -1)
  var_append, 2, LOCAL(4), LOCAL(2), TAIL_CALL,
  POS(141, 11),
  POS(142, 37),
  POS(142, 25),
  POS(142, 11)
};

static TAB_NUM t_lambda_24[] = {
  2, // locals
  0, // parameters
  // get_group 1 $_idx $groups -1
  func_get_group, 2, num_1, minus_num_1, 2, LOCAL(1), LOCAL(2),
  // -> groups
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(144, 11),
  POS(145, 11)
};

static TAB_NUM t_func_get_group_kel_rec[] = {
  0, // locals
  3, // parameters
  var_147_24_s,
  var_147_26_i,
  var_147_28_group_indent,
  // $last_indent VERY_LARGE_INDENT
  LET, 1, num_9999, 1, var_148_6_last_indent,
  // $nodes empty_list
  LET, 1, var_empty_list, 1, var_149_6_nodes,
  // $e s-1
  var_std__minus, 2, var_147_24_s, num_1, 1, var_150_6_e,
  // loop:
  var_loop, 1, lambda_3_loop, TAIL_CALL,
  POS(148, 5),
  POS(149, 5),
  POS(150, 5),
  POS(151, 5)
};

static TAB_NUM t_lambda_3_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_128_4_n, var_147_26_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25, lambda_26, TAIL_CALL,
  POS(153, 13),
  POS(152, 7)
};

static TAB_NUM t_lambda_25[] = {
  2, // locals
  0, // parameters
  // range(lines s e))
  var_range, 3, var_123_5_lines, var_147_24_s, var_150_6_e, 1, LOCAL(1),
  // append(nodes range(lines s e))
  var_append, 2, var_149_6_nodes, LOCAL(1), 1, LOCAL(2),
  //  i e append(nodes range(lines s e))
  LET, 3, var_147_26_i, var_150_6_e, LOCAL(2), TAIL_CALL,
  POS(154, 29),
  POS(154, 16),
  POS(154, 11)
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  0, // parameters
  // $line lines(i)
  var_123_5_lines, 1, var_147_26_i, 1, var_156_12_line,
  // is_undefined:
  var_is_undefined, 1, var_156_12_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_line_is_undefined, lambda_27, TAIL_CALL,
  POS(156, 11),
  POS(158, 18),
  POS(157, 11)
};

static TAB_NUM t_lambda_line_is_undefined[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_147_26_i, 1, var_147_26_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(159, 15),
  POS(160, 15)
};

static TAB_NUM t_lambda_27[] = {
  2, // locals
  0, // parameters
  // $indent indent_of(line)
  var_indent_of, 1, var_156_12_line, 1, var_162_16_indent,
  // group_indent
  var_std__less, 2, var_147_28_group_indent, var_162_16_indent, 1, LOCAL(1),
  // group_indent
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_28, lambda_29, TAIL_CALL,
  POS(162, 15),
  POS(164, 27),
  POS(164, 27),
  POS(163, 15)
};

static TAB_NUM t_lambda_28[] = {
  2, // locals
  0, // parameters
  // range(lines s e))
  var_range, 3, var_123_5_lines, var_147_24_s, var_150_6_e, 1, LOCAL(1),
  // append(nodes range(lines s e))
  var_append, 2, var_149_6_nodes, LOCAL(1), 1, LOCAL(2),
  //  i e append(nodes range(lines s e))
  LET, 3, var_147_26_i, var_150_6_e, LOCAL(2), TAIL_CALL,
  POS(165, 37),
  POS(165, 24),
  POS(165, 19)
};

static TAB_NUM t_lambda_29[] = {
  1, // locals
  0, // parameters
  // last_indent:
  var_std__less, 2, var_148_6_last_indent, var_162_16_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_30, lambda_31, TAIL_CALL,
  POS(168, 30),
  POS(167, 19)
};

static TAB_NUM t_lambda_30[] = {
  4, // locals
  0, // parameters
  // e-1)
  var_std__minus, 2, var_150_6_e, num_1, 1, LOCAL(1),
  // range(lines s e-1)
  var_range, 3, var_123_5_lines, var_147_24_s, LOCAL(1), 1, LOCAL(2),
  // append &nodes range(lines s e-1)
  var_append, 2, var_149_6_nodes, LOCAL(2), 1, var_149_6_nodes,
  // $head lines(e)
  var_123_5_lines, 1, var_150_6_e, 1, LOCAL(3),
  // e+1 &i !e $subgroups last_indent
  var_std__plus, 2, var_150_6_e, num_1, 1, LOCAL(1),
  // get_group_kel_rec e+1 &i !e $subgroups last_indent
  func_get_group_kel_rec, 3, LOCAL(1), var_147_26_i, var_148_6_last_indent, 3, var_147_26_i, var_150_6_e, LOCAL(4),
  // new(proto_group head)(.subgroups_of subgroups)
  var_new, 2, var_126_5_proto_group, LOCAL(3), 1, LOCAL(1),
  // .subgroups_of subgroups)
  LET, -1, LOCAL(1), var_subgroups_of, LOCAL(4), LOCAL(2),
  // push &nodes new(proto_group head)(.subgroups_of subgroups)
  var_push, 2, var_149_6_nodes, LOCAL(2), 1, var_149_6_nodes,
  // !s e+1
  var_std__plus, 2, var_150_6_e, num_1, 1, var_147_24_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(169, 51),
  POS(169, 37),
  POS(169, 23),
  POS(170, 23),
  POS(171, 41),
  POS(171, 23),
  POS(172, 35),
  POS(172, 57),
  POS(172, 23),
  POS(173, 23),
  POS(174, 23)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  // !last_indent indent
  LET, 1, var_162_16_indent, 1, var_148_6_last_indent,
  // !e i
  LET, 1, var_147_26_i, 1, var_150_6_e,
  // inc &i
  var_inc, 1, var_147_26_i, 1, var_147_26_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(176, 23),
  POS(177, 23),
  POS(178, 23),
  POS(179, 23)
};

static TAB_NUM t_func_get_group_rec[] = {
  0, // locals
  2, // parameters
  var_181_20_i,
  var_181_22_group_indent,
  // $last_indent VERY_LARGE_INDENT
  LET, 1, num_9999, 1, var_182_6_last_indent,
  // $nodes empty_list
  LET, 1, var_empty_list, 1, var_183_6_nodes,
  // $last_node undefined
  LET, 1, var_undefined, 1, var_184_6_last_node,
  // loop:
  var_loop, 1, lambda_4_loop, TAIL_CALL,
  POS(182, 5),
  POS(183, 5),
  POS(184, 5),
  POS(185, 5)
};

static TAB_NUM t_lambda_4_loop[] = {
  1, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_128_4_n, var_181_20_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_32, lambda_34, TAIL_CALL,
  POS(187, 13),
  POS(186, 7)
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // is_defined &nodes: push nodes last_node
  var_is_defined, 1, var_184_6_last_node, 1, LOCAL(1),
  // update_if last_node.is_defined &nodes: push nodes last_node
  var_update_if, 3, LOCAL(1), var_183_6_nodes, lambda_33, 1, var_183_6_nodes,
  // -> i nodes
  LET, 2, var_181_20_i, var_183_6_nodes, TAIL_CALL,
  POS(188, 31),
  POS(188, 11),
  POS(189, 11)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  // push nodes last_node
  var_push, 2, var_183_6_nodes, var_184_6_last_node, TAIL_CALL,
  POS(188, 50)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // $line lines(i)
  var_123_5_lines, 1, var_181_20_i, 1, var_191_12_line,
  // is_undefined:
  var_is_undefined, 1, var_191_12_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_line_is_undefined, lambda_35, TAIL_CALL,
  POS(191, 11),
  POS(193, 18),
  POS(192, 11)
};

static TAB_NUM t_lambda_2_line_is_undefined[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_181_20_i, 1, var_181_20_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(194, 15),
  POS(195, 15)
};

static TAB_NUM t_lambda_35[] = {
  2, // locals
  0, // parameters
  // $indent indent_of(line)
  var_indent_of, 1, var_191_12_line, 1, var_197_16_indent,
  // group_indent:
  var_std__less, 2, var_181_22_group_indent, var_197_16_indent, 1, LOCAL(1),
  // group_indent:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_36, lambda_38, TAIL_CALL,
  POS(197, 15),
  POS(199, 27),
  POS(199, 27),
  POS(198, 15)
};

static TAB_NUM t_lambda_36[] = {
  1, // locals
  0, // parameters
  // is_defined &nodes: push nodes last_node
  var_is_defined, 1, var_184_6_last_node, 1, LOCAL(1),
  // update_if last_node.is_defined &nodes: push nodes last_node
  var_update_if, 3, LOCAL(1), var_183_6_nodes, lambda_37, 1, var_183_6_nodes,
  // -> i nodes
  LET, 2, var_181_20_i, var_183_6_nodes, TAIL_CALL,
  POS(200, 39),
  POS(200, 19),
  POS(201, 19)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  // push nodes last_node
  var_push, 2, var_183_6_nodes, var_184_6_last_node, TAIL_CALL,
  POS(200, 58)
};

static TAB_NUM t_lambda_38[] = {
  1, // locals
  0, // parameters
  // last_indent:
  var_std__less, 2, var_182_6_last_indent, var_197_16_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_39, lambda_40, TAIL_CALL,
  POS(204, 30),
  POS(203, 19)
};

static TAB_NUM t_lambda_39[] = {
  2, // locals
  0, // parameters
  // get_group_rec &i $subgroups last_indent
  func_get_group_rec, 2, var_181_20_i, var_182_6_last_indent, 2, var_181_20_i, LOCAL(2),
  // new(proto_group last_node)(.subgroups_of subgroups)
  var_new, 2, var_126_5_proto_group, var_184_6_last_node, 1, LOCAL(1),
  // !last_node
  LET, -1, LOCAL(1), var_subgroups_of, LOCAL(2), var_184_6_last_node,
  // next
  var_next, 0, TAIL_CALL,
  POS(205, 23),
  POS(207, 25),
  POS(206, 23),
  POS(208, 23)
};

static TAB_NUM t_lambda_40[] = {
  1, // locals
  0, // parameters
  // is_defined &nodes:
  var_is_defined, 1, var_184_6_last_node, 1, LOCAL(1),
  // update_if last_node.is_defined &nodes:
  var_update_if, 3, LOCAL(1), var_183_6_nodes, lambda_41, 1, var_183_6_nodes,
  // !last_node line
  LET, 1, var_191_12_line, 1, var_184_6_last_node,
  // !last_indent indent
  LET, 1, var_197_16_indent, 1, var_182_6_last_indent,
  // inc &i
  var_inc, 1, var_181_20_i, 1, var_181_20_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(210, 43),
  POS(210, 23),
  POS(212, 23),
  POS(213, 23),
  POS(214, 23),
  POS(215, 23)
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  // push nodes last_node
  var_push, 2, var_183_6_nodes, var_184_6_last_node, TAIL_CALL,
  POS(211, 25)
};

static TAB_NUM t_func_get_group_kel[] = {
  0, // locals
  3, // parameters
  var_217_20_s,
  var_217_22_i,
  var_217_24_group_indent,
  // $last_indent VERY_LARGE_INDENT
  LET, 1, num_9999, 1, var_218_6_last_indent,
  // $nodes empty_list
  LET, 1, var_empty_list, 1, var_219_6_nodes,
  // $e s-1
  var_std__minus, 2, var_217_20_s, num_1, 1, var_220_6_e,
  // loop:
  var_loop, 1, lambda_5_loop, TAIL_CALL,
  POS(218, 5),
  POS(219, 5),
  POS(220, 5),
  POS(221, 5)
};

static TAB_NUM t_lambda_5_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_128_4_n, var_217_22_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_42, lambda_43, TAIL_CALL,
  POS(223, 13),
  POS(222, 7)
};

static TAB_NUM t_lambda_42[] = {
  2, // locals
  0, // parameters
  // range(lines s e))
  var_range, 3, var_123_5_lines, var_217_20_s, var_220_6_e, 1, LOCAL(1),
  // append(nodes range(lines s e))
  var_append, 2, var_219_6_nodes, LOCAL(1), 1, LOCAL(2),
  //  i e append(nodes range(lines s e))
  LET, 3, var_217_22_i, var_220_6_e, LOCAL(2), TAIL_CALL,
  POS(224, 29),
  POS(224, 16),
  POS(224, 11)
};

static TAB_NUM t_lambda_43[] = {
  1, // locals
  0, // parameters
  // $line lines(i)
  var_123_5_lines, 1, var_217_22_i, 1, var_226_12_line,
  // is_undefined:
  var_is_undefined, 1, var_226_12_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3_line_is_undefined, lambda_44, TAIL_CALL,
  POS(226, 11),
  POS(228, 18),
  POS(227, 11)
};

static TAB_NUM t_lambda_3_line_is_undefined[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_217_22_i, 1, var_217_22_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(229, 15),
  POS(230, 15)
};

static TAB_NUM t_lambda_44[] = {
  2, // locals
  0, // parameters
  // $indent indent_of(line)
  var_indent_of, 1, var_226_12_line, 1, var_232_16_indent,
  // group_indent
  var_std__less, 2, var_217_24_group_indent, var_232_16_indent, 1, LOCAL(1),
  // group_indent
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_45, lambda_46, TAIL_CALL,
  POS(232, 15),
  POS(234, 27),
  POS(234, 27),
  POS(233, 15)
};

static TAB_NUM t_lambda_45[] = {
  2, // locals
  0, // parameters
  // range(lines s e))
  var_range, 3, var_123_5_lines, var_217_20_s, var_220_6_e, 1, LOCAL(1),
  // append(nodes range(lines s e))
  var_append, 2, var_219_6_nodes, LOCAL(1), 1, LOCAL(2),
  //  i e append(nodes range(lines s e))
  LET, 3, var_217_22_i, var_220_6_e, LOCAL(2), TAIL_CALL,
  POS(235, 37),
  POS(235, 24),
  POS(235, 19)
};

static TAB_NUM t_lambda_46[] = {
  1, // locals
  0, // parameters
  // last_indent:
  var_std__less, 2, var_218_6_last_indent, var_232_16_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_47, lambda_53, TAIL_CALL,
  POS(238, 30),
  POS(237, 19)
};

static TAB_NUM t_lambda_47[] = {
  2, // locals
  0, // parameters
  // e-1)
  var_std__minus, 2, var_220_6_e, num_1, 1, LOCAL(1),
  // range(lines s e-1)
  var_range, 3, var_123_5_lines, var_217_20_s, LOCAL(1), 1, LOCAL(2),
  // append &nodes range(lines s e-1)
  var_append, 2, var_219_6_nodes, LOCAL(2), 1, var_219_6_nodes,
  // $head lines(e)
  var_123_5_lines, 1, var_220_6_e, 1, var_240_24_head,
  // !s e+1
  var_std__plus, 2, var_220_6_e, num_1, 1, var_217_20_s,
  // !e i
  LET, 1, var_217_22_i, 1, var_220_6_e,
  // loop
  var_loop, 2, lambda_48, lambda_52, TAIL_CALL,
  POS(239, 51),
  POS(239, 37),
  POS(239, 23),
  POS(240, 23),
  POS(241, 23),
  POS(242, 23),
  POS(243, 23)
};

static TAB_NUM t_lambda_48[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_217_22_i, 1, var_217_22_i,
  // n
  var_std__less, 2, var_128_4_n, var_217_22_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_49, TAIL_CALL,
  POS(245, 27),
  POS(247, 33),
  POS(246, 27)
};

static TAB_NUM t_lambda_49[] = {
  1, // locals
  0, // parameters
  // $subline lines(i)
  var_123_5_lines, 1, var_217_22_i, 1, var_250_32_subline,
  // is_undefined
  var_is_undefined, 1, var_250_32_subline, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_50, TAIL_CALL,
  POS(250, 31),
  POS(252, 41),
  POS(251, 31)
};

static TAB_NUM t_lambda_50[] = {
  2, // locals
  0, // parameters
  // $subindent indent_of(subline)
  var_indent_of, 1, var_250_32_subline, 1, LOCAL(2),
  // last_indent:
  var_std__less, 2, var_218_6_last_indent, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_51, var_break, TAIL_CALL,
  POS(255, 35),
  POS(257, 49),
  POS(256, 35)
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  // !e i
  LET, 1, var_217_22_i, 1, var_220_6_e,
  // next
  var_next, 0, TAIL_CALL,
  POS(258, 39),
  POS(259, 39)
};

static TAB_NUM t_lambda_52[] = {
  3, // locals
  0, // parameters
  // range(lines s e)
  var_range, 3, var_123_5_lines, var_217_20_s, var_220_6_e, 1, LOCAL(1),
  // new(proto_group head)
  var_new, 2, var_126_5_proto_group, var_240_24_head, 1, LOCAL(2),
  // new(proto_group head)
  LET, -1, LOCAL(2), var_subgroups_of, LOCAL(1), LOCAL(3),
  // push &nodes
  var_push, 2, var_219_6_nodes, LOCAL(3), 1, var_219_6_nodes,
  // !s e+1
  var_std__plus, 2, var_220_6_e, num_1, 1, var_217_20_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(264, 45),
  POS(263, 29),
  POS(263, 29),
  POS(262, 27),
  POS(265, 27),
  POS(266, 27)
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  // !last_indent indent
  LET, 1, var_232_16_indent, 1, var_218_6_last_indent,
  // !e i
  LET, 1, var_217_22_i, 1, var_220_6_e,
  // inc &i
  var_inc, 1, var_217_22_i, 1, var_217_22_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(268, 23),
  POS(269, 23),
  POS(270, 23),
  POS(271, 23)
};

static TAB_NUM t_func_get_group[] = {
  0, // locals
  2, // parameters
  var_273_16_i,
  var_273_18_group_indent,
  // $last_indent VERY_LARGE_INDENT
  LET, 1, num_9999, 1, var_274_6_last_indent,
  // $nodes empty_list
  LET, 1, var_empty_list, 1, var_275_6_nodes,
  // $last_node undefined
  LET, 1, var_undefined, 1, var_276_6_last_node,
  // $s undefined
  LET, 1, var_undefined, 1, var_277_6_s,
  // loop:
  var_loop, 1, lambda_6_loop, TAIL_CALL,
  POS(274, 5),
  POS(275, 5),
  POS(276, 5),
  POS(277, 5),
  POS(278, 5)
};

static TAB_NUM t_lambda_6_loop[] = {
  1, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_128_4_n, var_273_16_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_54, lambda_56, TAIL_CALL,
  POS(280, 13),
  POS(279, 7)
};

static TAB_NUM t_lambda_54[] = {
  1, // locals
  0, // parameters
  // is_defined &nodes: push nodes last_node
  var_is_defined, 1, var_276_6_last_node, 1, LOCAL(1),
  // update_if last_node.is_defined &nodes: push nodes last_node
  var_update_if, 3, LOCAL(1), var_275_6_nodes, lambda_55, 1, var_275_6_nodes,
  // -> i nodes
  LET, 2, var_273_16_i, var_275_6_nodes, TAIL_CALL,
  POS(281, 31),
  POS(281, 11),
  POS(282, 11)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  // push nodes last_node
  var_push, 2, var_275_6_nodes, var_276_6_last_node, TAIL_CALL,
  POS(281, 50)
};

static TAB_NUM t_lambda_56[] = {
  1, // locals
  0, // parameters
  // $line lines(i)
  var_123_5_lines, 1, var_273_16_i, 1, var_284_12_line,
  // is_undefined:
  var_is_undefined, 1, var_284_12_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_4_line_is_undefined, lambda_57, TAIL_CALL,
  POS(284, 11),
  POS(286, 18),
  POS(285, 11)
};

static TAB_NUM t_lambda_4_line_is_undefined[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_273_16_i, 1, var_273_16_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(287, 15),
  POS(288, 15)
};

static TAB_NUM t_lambda_57[] = {
  2, // locals
  0, // parameters
  // $indent indent_of(line)
  var_indent_of, 1, var_284_12_line, 1, var_290_16_indent,
  // group_indent:
  var_std__less, 2, var_273_18_group_indent, var_290_16_indent, 1, LOCAL(1),
  // group_indent:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_58, lambda_60, TAIL_CALL,
  POS(290, 15),
  POS(292, 27),
  POS(292, 27),
  POS(291, 15)
};

static TAB_NUM t_lambda_58[] = {
  1, // locals
  0, // parameters
  // is_defined &nodes: push nodes last_node
  var_is_defined, 1, var_276_6_last_node, 1, LOCAL(1),
  // update_if last_node.is_defined &nodes: push nodes last_node
  var_update_if, 3, LOCAL(1), var_275_6_nodes, lambda_59, 1, var_275_6_nodes,
  // -> i nodes
  LET, 2, var_273_16_i, var_275_6_nodes, TAIL_CALL,
  POS(293, 39),
  POS(293, 19),
  POS(294, 19)
};

static TAB_NUM t_lambda_59[] = {
  0, // locals
  0, // parameters
  // push nodes last_node
  var_push, 2, var_275_6_nodes, var_276_6_last_node, TAIL_CALL,
  POS(293, 58)
};

static TAB_NUM t_lambda_60[] = {
  1, // locals
  0, // parameters
  // last_indent:
  var_std__less, 2, var_274_6_last_indent, var_290_16_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_61, lambda_67, TAIL_CALL,
  POS(297, 30),
  POS(296, 19)
};

static TAB_NUM t_lambda_61[] = {
  0, // locals
  0, // parameters
  // $e i
  LET, 1, var_273_16_i, 1, var_298_24_e,
  // loop
  var_loop, 2, lambda_62, lambda_66, TAIL_CALL,
  POS(298, 23),
  POS(299, 23)
};

static TAB_NUM t_lambda_62[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_273_16_i, 1, var_273_16_i,
  // n
  var_std__less, 2, var_128_4_n, var_273_16_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_63, TAIL_CALL,
  POS(301, 27),
  POS(303, 33),
  POS(302, 27)
};

static TAB_NUM t_lambda_63[] = {
  1, // locals
  0, // parameters
  // $subline lines(i)
  var_123_5_lines, 1, var_273_16_i, 1, var_306_32_subline,
  // is_undefined
  var_is_undefined, 1, var_306_32_subline, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_64, TAIL_CALL,
  POS(306, 31),
  POS(308, 41),
  POS(307, 31)
};

static TAB_NUM t_lambda_64[] = {
  2, // locals
  0, // parameters
  // $subindent indent_of(subline)
  var_indent_of, 1, var_306_32_subline, 1, LOCAL(2),
  // last_indent:
  var_std__less, 2, var_274_6_last_indent, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_65, var_break, TAIL_CALL,
  POS(311, 35),
  POS(313, 49),
  POS(312, 35)
};

static TAB_NUM t_lambda_65[] = {
  0, // locals
  0, // parameters
  // !e i
  LET, 1, var_273_16_i, 1, var_298_24_e,
  // next
  var_next, 0, TAIL_CALL,
  POS(314, 39),
  POS(315, 39)
};

static TAB_NUM t_lambda_66[] = {
  2, // locals
  0, // parameters
  // range(lines s e)
  var_range, 3, var_123_5_lines, var_277_6_s, var_298_24_e, 1, LOCAL(1),
  // new(proto_group last_node)
  var_new, 2, var_126_5_proto_group, var_276_6_last_node, 1, LOCAL(2),
  // !last_node
  LET, -1, LOCAL(2), var_subgroups_of, LOCAL(1), var_276_6_last_node,
  // next
  var_next, 0, TAIL_CALL,
  POS(320, 45),
  POS(319, 29),
  POS(318, 27),
  POS(321, 27)
};

static TAB_NUM t_lambda_67[] = {
  1, // locals
  0, // parameters
  // is_defined &nodes:
  var_is_defined, 1, var_276_6_last_node, 1, LOCAL(1),
  // update_if last_node.is_defined &nodes:
  var_update_if, 3, LOCAL(1), var_275_6_nodes, lambda_68, 1, var_275_6_nodes,
  // !last_node line
  LET, 1, var_284_12_line, 1, var_276_6_last_node,
  // !last_indent indent
  LET, 1, var_290_16_indent, 1, var_274_6_last_indent,
  // inc &i
  var_inc, 1, var_273_16_i, 1, var_273_16_i,
  // !s i
  LET, 1, var_273_16_i, 1, var_277_6_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(323, 43),
  POS(323, 23),
  POS(325, 23),
  POS(326, 23),
  POS(327, 23),
  POS(328, 23),
  POS(329, 23)
};

static TAB_NUM t_lambda_68[] = {
  0, // locals
  0, // parameters
  // push nodes last_node
  var_push, 2, var_275_6_nodes, var_276_6_last_node, TAIL_CALL,
  POS(324, 25)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__2__0__line___subgroups_of}},
  {FLT_POSITIVE_INT64, 0, {.value = 300}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__2__0__split_into_indented_lines}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_split}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_ls_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_create_line}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_loop}},
  {FLT_CHARACTER, 0, {.value = 9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_POSITIVE_INT64, 0, {.value = 8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_POSITIVE_INT64, 0, {.value = 9999}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__2__0__split_into_groups}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_split_recursively}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_keep_empty_lines}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_keep_empty_lines}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_get_group_kel_rec}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_line_is_undefined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_get_group_rec}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_line_is_undefined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_get_group_kel}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_line_is_undefined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_get_group}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4_line_is_undefined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}}
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
    "97_16_line_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(98, 17)}
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
    "123_5_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "124_5_keep_empty_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "126_5_proto_group\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "128_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "147_24_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "147_26_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "147_28_group_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "148_6_last_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "149_6_nodes\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "150_6_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "156_12_line\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(158, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(159, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "162_16_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(172, 35)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "181_20_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "181_22_group_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "182_6_last_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "183_6_nodes\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "184_6_last_node\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(188, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "191_12_line\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "197_16_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "217_20_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "217_22_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "217_24_group_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "218_6_last_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "219_6_nodes\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "220_6_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "226_12_line\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "232_16_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "240_24_head\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(248, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "250_32_subline\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "273_16_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "273_18_group_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "274_6_last_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "275_6_nodes\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "276_6_last_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "277_6_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "284_12_line\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "290_16_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "298_24_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "306_32_subline\000", NULL
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
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  101, // number of constants
  88, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
