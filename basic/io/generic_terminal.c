#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  num_1 = -1,
  func_std__create_view = -2,
  num_0 = -3,
  lambda_1 = -4,
  lambda_2 = -5,
  lambda_3 = -6,
  lambda_4 = -7,
  func_std_private__abs_x = -8,
  lambda_5 = -9,
  lambda_6 = -10,
  func_std_private__abs_y = -11,
  lambda_7 = -12,
  lambda_8 = -13,
  func_std_types__view___draw_text = -14,
  func_std_types__view___draw_attributed_text = -15,
  func_std__create_vertical_panes = -16,
  lambda_9 = -17,
  lambda_10 = -18,
  lambda_11 = -19,
  lambda_12 = -20,
  lambda_13 = -21,
  lambda_14 = -22,
  lambda_15 = -23,
  lambda_16 = -24,
  lambda_17 = -25,
  lambda_18 = -26,
  lambda_19 = -27,
  lambda_20 = -28,
  lambda_21 = -29,
  func_create_pane_view = -30,
  lambda_22 = -31,
  lambda_23 = -32,
  func_return = -33,
  lambda_24 = -34,
  lambda_25 = -35,
  func_std__create_horizontal_panes = -36,
  lambda_26 = -37,
  lambda_27 = -38,
  lambda_28 = -39,
  lambda_29 = -40,
  lambda_30 = -41,
  lambda_31 = -42,
  lambda_32 = -43,
  lambda_33 = -44,
  lambda_34 = -45,
  lambda_35 = -46,
  lambda_36 = -47,
  lambda_37 = -48,
  lambda_38 = -49,
  func_2_create_pane_view = -50,
  lambda_39 = -51,
  lambda_40 = -52,
  func_2_return = -53,
  lambda_41 = -54,
  lambda_42 = -55
};

enum {
  var__START = FIRST_VAR-1,
  var_std__x_of, // attribute
  var_std__assign, // extern
  var_std__y_of, // attribute
  var_std__character_width_of, // attribute
  var_std__ascent_of, // attribute
  var_std__descent_of, // attribute
  var_std__character_height_of, // attribute
  var_std__line_spacing_of, // attribute
  var_std__line_height_of, // attribute
  var_std__baseline_of, // attribute
  var_std__draw_colour_of, // attribute
  var_std__clear_colour_of, // attribute
  var_std__set_draw_colour, // attribute
  var_std__set_clear_colour, // attribute
  var_std__draw_text, // attribute
  var_std__draw_attributed_text, // attribute
  var_std_types__generic_terminal, // derived
  var_std_types__object, // extern
  var_type_of, // extern polymorphic
  var_undefined, // extern
  var_x_of, // extern polymorphic
  var_y_of, // extern polymorphic
  var_width_of, // extern polymorphic
  var_height_of, // extern polymorphic
  var_character_width_of, // extern polymorphic
  var_ascent_of, // extern polymorphic
  var_descent_of, // extern polymorphic
  var_character_height_of, // extern polymorphic
  var_line_spacing_of, // extern polymorphic
  var_line_height_of, // extern polymorphic
  var_baseline_of, // extern polymorphic
  var_draw_colour_of, // extern polymorphic
  var_clear_colour_of, // extern polymorphic
  var_std_types__view, // derived
  var_std__create_view, // initialized
  var_110_0_terminal, // dynamic
  var_111_0_x, // dynamic
  var_112_0_y, // dynamic
  var_std__less, // extern
  var_std__plus, // extern
  var_if, // extern
  var_std_private__abs_x, // initialized
  var_140_22_screen, // dynamic
  var_140_29_x, // dynamic
  var_std_private__abs_y, // initialized
  var_146_22_screen, // dynamic
  var_146_29_y, // dynamic
  var_std_private__draw_clipped_text, // attribute
  var_std_private__draw_clipped_attributed_text, // attribute
  var_draw_text, // extern polymorphic
  var_create_string, // extern
  var_std__minus, // extern
  var_draw_attributed_text, // extern polymorphic
  var_std__create_vertical_panes, // initialized
  var_192_0_screen, // dynamic
  var_193_0_pane_description, // dynamic
  var_195_1_rc, // dynamic
  var_result_count, // extern
  var_196_1_x, // dynamic
  var_197_1_y, // dynamic
  var_198_1_width, // dynamic
  var_199_1_height, // dynamic
  var_200_1_views, // dynamic
  var_empty_list, // extern
  var_is_an_integer, // extern
  var_204_1_iter, // dynamic
  var_bresenham, // extern
  var_next_value, // extern
  var_create_view, // extern
  var_push, // extern
  var_next, // extern
  var_repeat, // extern
  var_is_a_list, // extern
  var_214_1_fixed_width, // dynamic
  var_215_1_flex_width_count, // dynamic
  var_217_3_pane_width, // dynamic
  var_inc, // extern
  var_plus, // extern
  var_230_1_flex_width, // dynamic
  var_231_1_remaining_flex_width, // dynamic
  var_233_3_pane_width, // dynamic
  var_dec, // extern
  var_std__times, // extern
  var_round, // extern
  var_to_integer, // extern
  var_max, // extern
  var_min, // extern
  var_minus, // extern
  var_for_each, // extern
  var_true, // extern
  var_cond, // extern
  var_std__equal, // extern
  var_spread, // extern
  var_std__create_horizontal_panes, // initialized
  var_263_0_screen, // dynamic
  var_264_0_pane_description, // dynamic
  var_266_1_rc, // dynamic
  var_267_1_x, // dynamic
  var_268_1_y, // dynamic
  var_269_1_width, // dynamic
  var_270_1_height, // dynamic
  var_271_1_views, // dynamic
  var_275_1_iter, // dynamic
  var_285_1_fixed_height, // dynamic
  var_286_1_flex_height_count, // dynamic
  var_288_3_pane_height, // dynamic
  var_301_1_flex_height, // dynamic
  var_302_1_remaining_flex_height, // dynamic
  var_304_3_pane_height, // dynamic
  var__END
};


static TAB_NUM t_func_std__create_view[] = {
  16, // locals
  5, // parameters
  var_110_0_terminal,
  var_111_0_x,
  var_112_0_y,
  LOCAL(15), // 113_0_width
  LOCAL(16), // 114_0_height
  // x < 0
  var_std__less, 2, var_111_0_x, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, 1, LOCAL(2),
  // y < 0
  var_std__less, 2, var_112_0_y, num_0, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_3, lambda_4, 1, LOCAL(4),
  // character_width_of(terminal)
  var_character_width_of, 1, var_110_0_terminal, 1, LOCAL(5),
  // ascent_of(terminal)
  var_ascent_of, 1, var_110_0_terminal, 1, LOCAL(6),
  // descent_of(terminal)
  var_descent_of, 1, var_110_0_terminal, 1, LOCAL(7),
  // character_height_of(terminal)
  var_character_height_of, 1, var_110_0_terminal, 1, LOCAL(8),
  // line_spacing_of(terminal)
  var_line_spacing_of, 1, var_110_0_terminal, 1, LOCAL(9),
  // line_height_of(terminal)
  var_line_height_of, 1, var_110_0_terminal, 1, LOCAL(10),
  // baseline_of(terminal)
  var_baseline_of, 1, var_110_0_terminal, 1, LOCAL(11),
  // draw_colour_of(terminal)
  var_draw_colour_of, 1, var_110_0_terminal, 1, LOCAL(12),
  // clear_colour_of(terminal)
  var_clear_colour_of, 1, var_110_0_terminal, 1, LOCAL(13),
  // std_types::view
  LET, -13, var_std_types__view, var_x_of, LOCAL(2), var_y_of, LOCAL(4), var_width_of, LOCAL(15), var_height_of, LOCAL(16), var_character_width_of, LOCAL(5), var_ascent_of, LOCAL(6), var_descent_of, LOCAL(7), var_character_height_of, LOCAL(8), var_line_spacing_of, LOCAL(9), var_line_height_of, LOCAL(10), var_baseline_of, LOCAL(11), var_draw_colour_of, LOCAL(12), var_clear_colour_of, LOCAL(13), LOCAL(14),
  // ->
  LET, 1, LOCAL(14), TAIL_CALL,
  POS(120, 11),
  POS(119, 9),
  POS(125, 11),
  POS(124, 9),
  POS(130, 27),
  POS(131, 18),
  POS(132, 19),
  POS(133, 28),
  POS(134, 24),
  POS(135, 23),
  POS(136, 20),
  POS(137, 23),
  POS(138, 24),
  POS(117, 5),
  POS(116, 3)
};

static TAB_NUM t_lambda_1[] = {
  3, // locals
  0, // parameters
  // width_of(terminal)+1+x
  var_width_of, 1, var_110_0_terminal, 1, LOCAL(1),
  // width_of(terminal)+1+x
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // width_of(terminal)+1+x
  var_std__plus, 2, LOCAL(2), var_111_0_x, 1, LOCAL(3),
  //  width_of(terminal)+1+x
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(121, 14),
  POS(121, 14),
  POS(121, 14),
  POS(121, 13)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  x
  LET, 1, var_111_0_x, TAIL_CALL,
  POS(122, 13)
};

static TAB_NUM t_lambda_3[] = {
  3, // locals
  0, // parameters
  // height_of(terminal)+1+y
  var_height_of, 1, var_110_0_terminal, 1, LOCAL(1),
  // height_of(terminal)+1+y
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // height_of(terminal)+1+y
  var_std__plus, 2, LOCAL(2), var_112_0_y, 1, LOCAL(3),
  //  height_of(terminal)+1+y
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(126, 14),
  POS(126, 14),
  POS(126, 14),
  POS(126, 13)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  y
  LET, 1, var_112_0_y, TAIL_CALL,
  POS(127, 13)
};

static TAB_NUM t_func_std_private__abs_x[] = {
  1, // locals
  2, // parameters
  var_140_22_screen,
  var_140_29_x,
  // x < 0
  var_std__less, 2, var_140_29_x, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_5, lambda_6, TAIL_CALL,
  POS(142, 5),
  POS(141, 3)
};

static TAB_NUM t_lambda_5[] = {
  3, // locals
  0, // parameters
  // width_of(screen)+x+1
  var_width_of, 1, var_140_22_screen, 1, LOCAL(1),
  // width_of(screen)+x+1
  var_std__plus, 2, LOCAL(1), var_140_29_x, 1, LOCAL(2),
  // width_of(screen)+x+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  width_of(screen)+x+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(143, 8),
  POS(143, 8),
  POS(143, 8),
  POS(143, 7)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  x
  LET, 1, var_140_29_x, TAIL_CALL,
  POS(144, 7)
};

static TAB_NUM t_func_std_private__abs_y[] = {
  1, // locals
  2, // parameters
  var_146_22_screen,
  var_146_29_y,
  // y < 0
  var_std__less, 2, var_146_29_y, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_7, lambda_8, TAIL_CALL,
  POS(148, 5),
  POS(147, 3)
};

static TAB_NUM t_lambda_7[] = {
  3, // locals
  0, // parameters
  // height_of(screen)+y+1
  var_height_of, 1, var_146_22_screen, 1, LOCAL(1),
  // height_of(screen)+y+1
  var_std__plus, 2, LOCAL(1), var_146_29_y, 1, LOCAL(2),
  // height_of(screen)+y+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  height_of(screen)+y+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(149, 8),
  POS(149, 8),
  POS(149, 8),
  POS(149, 7)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  y
  LET, 1, var_146_29_y, TAIL_CALL,
  POS(150, 7)
};

static TAB_NUM t_func_std_types__view___draw_text[] = {
  12, // locals
  -5, // parameters
  MANDATORY_PARAMETER, LOCAL(7), // 157_0_view
  MANDATORY_PARAMETER, LOCAL(8), // 158_0_screen
  MANDATORY_PARAMETER, LOCAL(9), // 159_0_x
  MANDATORY_PARAMETER, LOCAL(10), // 160_0_y
  REST_PARAMETER, LOCAL(11), // 161_0_args
  // std_private::abs_x view &x
  var_std_private__abs_x, 2, LOCAL(7), LOCAL(9), 1, LOCAL(9),
  // std_private::abs_y view &y
  var_std_private__abs_y, 2, LOCAL(7), LOCAL(10), 1, LOCAL(10),
  // $text create_string(args)
  var_create_string, 1, LOCAL(11), 1, LOCAL(12),
  // x_of(view)+x-1
  var_x_of, 1, LOCAL(7), 1, LOCAL(1),
  // x_of(view)+x-1
  var_std__plus, 2, LOCAL(1), LOCAL(9), 1, LOCAL(2),
  // x_of(view)+x-1
  var_std__minus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  // y_of(view)+y-1
  var_y_of, 1, LOCAL(7), 1, LOCAL(4),
  // y_of(view)+y-1
  var_std__plus, 2, LOCAL(4), LOCAL(10), 1, LOCAL(5),
  // y_of(view)+y-1
  var_std__minus, 2, LOCAL(5), num_1, 1, LOCAL(6),
  // std_private::draw_clipped_text
  var_std_private__draw_clipped_text, 5, LOCAL(8), LOCAL(7), LOCAL(3), LOCAL(6), LOCAL(12), TAIL_CALL,
  POS(163, 3),
  POS(164, 3),
  POS(165, 3),
  POS(169, 5),
  POS(169, 5),
  POS(169, 5),
  POS(170, 5),
  POS(170, 5),
  POS(170, 5),
  POS(166, 3)
};

static TAB_NUM t_func_std_types__view___draw_attributed_text[] = {
  11, // locals
  5, // parameters
  LOCAL(7), // 175_0_view
  LOCAL(8), // 176_0_screen
  LOCAL(9), // 177_0_x
  LOCAL(10), // 178_0_y
  LOCAL(11), // 179_0_attributed_text
  // std_private::abs_x view &x
  var_std_private__abs_x, 2, LOCAL(7), LOCAL(9), 1, LOCAL(9),
  // std_private::abs_y view &y
  var_std_private__abs_y, 2, LOCAL(7), LOCAL(10), 1, LOCAL(10),
  // x_of(view)+x-1
  var_x_of, 1, LOCAL(7), 1, LOCAL(1),
  // x_of(view)+x-1
  var_std__plus, 2, LOCAL(1), LOCAL(9), 1, LOCAL(2),
  // x_of(view)+x-1
  var_std__minus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  // y_of(view)+y-1
  var_y_of, 1, LOCAL(7), 1, LOCAL(4),
  // y_of(view)+y-1
  var_std__plus, 2, LOCAL(4), LOCAL(10), 1, LOCAL(5),
  // y_of(view)+y-1
  var_std__minus, 2, LOCAL(5), num_1, 1, LOCAL(6),
  // std_private::draw_clipped_attributed_text
  var_std_private__draw_clipped_attributed_text, 5, LOCAL(8), LOCAL(7), LOCAL(3), LOCAL(6), LOCAL(11), TAIL_CALL,
  POS(181, 3),
  POS(182, 3),
  POS(186, 5),
  POS(186, 5),
  POS(186, 5),
  POS(187, 5),
  POS(187, 5),
  POS(187, 5),
  POS(183, 3)
};

static TAB_NUM t_func_std__create_vertical_panes[] = {
  0, // locals
  2, // parameters
  var_192_0_screen,
  var_193_0_pane_description,
  // $rc result_count()
  var_result_count, 0, 1, var_195_1_rc,
  // $x x_of(screen)
  var_x_of, 1, var_192_0_screen, 1, var_196_1_x,
  // $y y_of(screen)
  var_y_of, 1, var_192_0_screen, 1, var_197_1_y,
  // $width width_of(screen)
  var_width_of, 1, var_192_0_screen, 1, var_198_1_width,
  // $height height_of(screen)
  var_height_of, 1, var_192_0_screen, 1, var_199_1_height,
  // $views empty_list
  LET, 1, var_empty_list, 1, var_200_1_views,
  // cond
  var_cond, 3, lambda_9, lambda_12, lambda_22, TAIL_CALL,
  POS(195, 3),
  POS(196, 3),
  POS(197, 3),
  POS(198, 3),
  POS(199, 3),
  POS(200, 3),
  POS(201, 3)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // is_an_integer:
  var_is_an_integer, 1, var_193_0_pane_description, 1, LOCAL(1),
  //  pane_description.is_an_integer:
  LET, 2, LOCAL(1), lambda_10, TAIL_CALL,
  POS(202, 25),
  POS(202, 7)
};

static TAB_NUM t_lambda_10[] = {
  3, // locals
  0, // parameters
  // $n pane_description
  LET, 1, var_193_0_pane_description, 1, LOCAL(3),
  // n+1 x x+width)
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // x+width)
  var_std__plus, 2, var_196_1_x, var_198_1_width, 1, LOCAL(2),
  // $iter bresenham(n+1 x x+width)
  var_bresenham, 3, LOCAL(1), var_196_1_x, LOCAL(2), 1, var_204_1_iter,
  // next_value &iter !x
  var_next_value, 1, var_204_1_iter, 2, var_204_1_iter, var_196_1_x,
  // repeat n
  var_repeat, 3, LOCAL(3), lambda_11, func_return, TAIL_CALL,
  POS(203, 7),
  POS(204, 23),
  POS(204, 29),
  POS(204, 7),
  POS(205, 7),
  POS(206, 7)
};

static TAB_NUM t_lambda_11[] = {
  3, // locals
  0, // parameters
  // next_value &iter $next_x
  var_next_value, 1, var_204_1_iter, 2, var_204_1_iter, LOCAL(3),
  // next_x-x height)
  var_std__minus, 2, LOCAL(3), var_196_1_x, 1, LOCAL(1),
  // create_view(screen x y next_x-x height)
  var_create_view, 5, var_192_0_screen, var_196_1_x, var_197_1_y, LOCAL(1), var_199_1_height, 1, LOCAL(2),
  // push &views create_view(screen x y next_x-x height)
  var_push, 2, var_200_1_views, LOCAL(2), 1, var_200_1_views,
  // !x next_x
  LET, 1, LOCAL(3), 1, var_196_1_x,
  // next
  var_next, 0, TAIL_CALL,
  POS(208, 11),
  POS(209, 46),
  POS(209, 23),
  POS(209, 11),
  POS(210, 11),
  POS(211, 11)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_193_0_pane_description, 1, LOCAL(1),
  //  pane_description.is_a_list:
  LET, 2, LOCAL(1), lambda_13, TAIL_CALL,
  POS(213, 25),
  POS(213, 7)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  // $fixed_width 0
  LET, 1, num_0, 1, var_214_1_fixed_width,
  // $flex_width_count 0
  LET, 1, num_0, 1, var_215_1_flex_width_count,
  // for_each pane_description
  var_for_each, 3, var_193_0_pane_description, lambda_14, lambda_17, TAIL_CALL,
  POS(214, 7),
  POS(215, 7),
  POS(216, 7)
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  1, // parameters
  var_217_3_pane_width,
  // pane_width < 1:
  var_std__less, 2, var_217_3_pane_width, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_15, lambda_16, TAIL_CALL,
  POS(219, 13),
  POS(218, 11)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  // inc &flex_width_count
  var_inc, 1, var_215_1_flex_width_count, 1, var_215_1_flex_width_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(220, 15),
  POS(221, 15)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  // plus &fixed_width pane_width
  var_plus, 2, var_214_1_fixed_width, var_217_3_pane_width, 1, var_214_1_fixed_width,
  // next
  var_next, 0, TAIL_CALL,
  POS(223, 15),
  POS(224, 15)
};

static TAB_NUM t_lambda_17[] = {
  2, // locals
  0, // parameters
  // fixed_width+flex_width_count > width
  var_std__plus, 2, var_214_1_fixed_width, var_215_1_flex_width_count, 1, LOCAL(1),
  // width
  var_std__less, 2, var_198_1_width, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_18, lambda_19, TAIL_CALL,
  POS(227, 13),
  POS(227, 44),
  POS(226, 11)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(228, 15)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  // $flex_width width-fixed_width
  var_std__minus, 2, var_198_1_width, var_214_1_fixed_width, 1, var_230_1_flex_width,
  // $remaining_flex_width flex_width
  LET, 1, var_230_1_flex_width, 1, var_231_1_remaining_flex_width,
  // for_each pane_description
  var_for_each, 3, var_193_0_pane_description, lambda_20, func_return, TAIL_CALL,
  POS(230, 15),
  POS(231, 15),
  POS(232, 15)
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  1, // parameters
  var_233_3_pane_width,
  // pane_width < 1:
  var_std__less, 2, var_233_3_pane_width, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21, func_create_pane_view, TAIL_CALL,
  POS(235, 21),
  POS(234, 19)
};

static TAB_NUM t_lambda_21[] = {
  5, // locals
  0, // parameters
  // dec &flex_width_count
  var_dec, 1, var_215_1_flex_width_count, 1, var_215_1_flex_width_count,
  // pane_width*flex_width).to_integer 1)
  var_std__times, 2, var_233_3_pane_width, var_230_1_flex_width, 1, LOCAL(1),
  // round(pane_width*flex_width).to_integer 1)
  var_round, 1, LOCAL(1), 1, LOCAL(2),
  // to_integer 1)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(3),
  // max(round(pane_width*flex_width).to_integer 1)
  var_max, 2, LOCAL(3), num_1, 1, LOCAL(4),
  // remaining_flex_width-flex_width_count #
  var_std__minus, 2, var_231_1_remaining_flex_width, var_215_1_flex_width_count, 1, LOCAL(5),
  // !pane_width
  var_min, 2, LOCAL(4), LOCAL(5), 1, var_233_3_pane_width,
  // minus &remaining_flex_width pane_width
  var_minus, 2, var_231_1_remaining_flex_width, var_233_3_pane_width, 1, var_231_1_remaining_flex_width,
  // create_pane_view
  func_create_pane_view, 0, TAIL_CALL,
  POS(236, 23),
  POS(239, 37),
  POS(239, 31),
  POS(239, 60),
  POS(239, 27),
  POS(240, 27),
  POS(237, 23),
  POS(244, 23),
  POS(245, 23)
};

static TAB_NUM t_func_create_pane_view[] = {
  1, // locals
  0, // parameters
  // create_view(screen x y pane_width height)
  var_create_view, 5, var_192_0_screen, var_196_1_x, var_197_1_y, var_233_3_pane_width, var_199_1_height, 1, LOCAL(1),
  // push &views create_view(screen x y pane_width height)
  var_push, 2, var_200_1_views, LOCAL(1), 1, var_200_1_views,
  // plus &x pane_width
  var_plus, 2, var_196_1_x, var_233_3_pane_width, 1, var_196_1_x,
  // next
  var_next, 0, TAIL_CALL,
  POS(249, 33),
  POS(249, 21),
  POS(250, 21),
  POS(251, 21)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  true -> undefined
  LET, 2, var_true, lambda_23, TAIL_CALL,
  POS(253, 7)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(253, 15)
};

static TAB_NUM t_func_return[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_195_1_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_24, lambda_25, TAIL_CALL,
  POS(257, 7),
  POS(256, 5)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  //  views
  LET, 1, var_200_1_views, TAIL_CALL,
  POS(258, 9)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  // spread views
  var_spread, 1, var_200_1_views, TAIL_CALL,
  POS(259, 9)
};

static TAB_NUM t_func_std__create_horizontal_panes[] = {
  0, // locals
  2, // parameters
  var_263_0_screen,
  var_264_0_pane_description,
  // $rc result_count()
  var_result_count, 0, 1, var_266_1_rc,
  // $x x_of(screen)
  var_x_of, 1, var_263_0_screen, 1, var_267_1_x,
  // $y y_of(screen)
  var_y_of, 1, var_263_0_screen, 1, var_268_1_y,
  // $width width_of(screen)
  var_width_of, 1, var_263_0_screen, 1, var_269_1_width,
  // $height height_of(screen)
  var_height_of, 1, var_263_0_screen, 1, var_270_1_height,
  // $views empty_list
  LET, 1, var_empty_list, 1, var_271_1_views,
  // cond
  var_cond, 3, lambda_26, lambda_29, lambda_39, TAIL_CALL,
  POS(266, 3),
  POS(267, 3),
  POS(268, 3),
  POS(269, 3),
  POS(270, 3),
  POS(271, 3),
  POS(272, 3)
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  0, // parameters
  // is_an_integer:
  var_is_an_integer, 1, var_264_0_pane_description, 1, LOCAL(1),
  //  pane_description.is_an_integer:
  LET, 2, LOCAL(1), lambda_27, TAIL_CALL,
  POS(273, 25),
  POS(273, 7)
};

static TAB_NUM t_lambda_27[] = {
  3, // locals
  0, // parameters
  // $n pane_description
  LET, 1, var_264_0_pane_description, 1, LOCAL(3),
  // n+1 y y+height)
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // y+height)
  var_std__plus, 2, var_268_1_y, var_270_1_height, 1, LOCAL(2),
  // $iter bresenham(n+1 y y+height)
  var_bresenham, 3, LOCAL(1), var_268_1_y, LOCAL(2), 1, var_275_1_iter,
  // next_value &iter !y
  var_next_value, 1, var_275_1_iter, 2, var_275_1_iter, var_268_1_y,
  // repeat n
  var_repeat, 3, LOCAL(3), lambda_28, func_2_return, TAIL_CALL,
  POS(274, 7),
  POS(275, 23),
  POS(275, 29),
  POS(275, 7),
  POS(276, 7),
  POS(277, 7)
};

static TAB_NUM t_lambda_28[] = {
  3, // locals
  0, // parameters
  // next_value &iter $next_y
  var_next_value, 1, var_275_1_iter, 2, var_275_1_iter, LOCAL(3),
  // next_y-y)
  var_std__minus, 2, LOCAL(3), var_268_1_y, 1, LOCAL(1),
  // create_view(screen x y width next_y-y)
  var_create_view, 5, var_263_0_screen, var_267_1_x, var_268_1_y, var_269_1_width, LOCAL(1), 1, LOCAL(2),
  // push &views create_view(screen x y width next_y-y)
  var_push, 2, var_271_1_views, LOCAL(2), 1, var_271_1_views,
  // !y next_y
  LET, 1, LOCAL(3), 1, var_268_1_y,
  // next
  var_next, 0, TAIL_CALL,
  POS(279, 11),
  POS(280, 52),
  POS(280, 23),
  POS(280, 11),
  POS(281, 11),
  POS(282, 11)
};

static TAB_NUM t_lambda_29[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_264_0_pane_description, 1, LOCAL(1),
  //  pane_description.is_a_list:
  LET, 2, LOCAL(1), lambda_30, TAIL_CALL,
  POS(284, 25),
  POS(284, 7)
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  // $fixed_height 0
  LET, 1, num_0, 1, var_285_1_fixed_height,
  // $flex_height_count 0
  LET, 1, num_0, 1, var_286_1_flex_height_count,
  // for_each pane_description
  var_for_each, 3, var_264_0_pane_description, lambda_31, lambda_34, TAIL_CALL,
  POS(285, 7),
  POS(286, 7),
  POS(287, 7)
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  1, // parameters
  var_288_3_pane_height,
  // pane_height < 1:
  var_std__less, 2, var_288_3_pane_height, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_32, lambda_33, TAIL_CALL,
  POS(290, 13),
  POS(289, 11)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  // inc &flex_height_count
  var_inc, 1, var_286_1_flex_height_count, 1, var_286_1_flex_height_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(291, 15),
  POS(292, 15)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  // plus &fixed_height pane_height
  var_plus, 2, var_285_1_fixed_height, var_288_3_pane_height, 1, var_285_1_fixed_height,
  // next
  var_next, 0, TAIL_CALL,
  POS(294, 15),
  POS(295, 15)
};

static TAB_NUM t_lambda_34[] = {
  2, // locals
  0, // parameters
  // fixed_height+flex_height_count > height
  var_std__plus, 2, var_285_1_fixed_height, var_286_1_flex_height_count, 1, LOCAL(1),
  // height
  var_std__less, 2, var_270_1_height, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_35, lambda_36, TAIL_CALL,
  POS(298, 13),
  POS(298, 46),
  POS(297, 11)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(299, 15)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  // $flex_height height-fixed_height
  var_std__minus, 2, var_270_1_height, var_285_1_fixed_height, 1, var_301_1_flex_height,
  // $remaining_flex_height flex_height
  LET, 1, var_301_1_flex_height, 1, var_302_1_remaining_flex_height,
  // for_each pane_description
  var_for_each, 3, var_264_0_pane_description, lambda_37, func_2_return, TAIL_CALL,
  POS(301, 15),
  POS(302, 15),
  POS(303, 15)
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  1, // parameters
  var_304_3_pane_height,
  // pane_height < 1:
  var_std__less, 2, var_304_3_pane_height, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_38, func_2_create_pane_view, TAIL_CALL,
  POS(306, 21),
  POS(305, 19)
};

static TAB_NUM t_lambda_38[] = {
  5, // locals
  0, // parameters
  // dec &flex_height_count
  var_dec, 1, var_286_1_flex_height_count, 1, var_286_1_flex_height_count,
  // pane_height*flex_height).to_integer 1)
  var_std__times, 2, var_304_3_pane_height, var_301_1_flex_height, 1, LOCAL(1),
  // round(pane_height*flex_height).to_integer 1)
  var_round, 1, LOCAL(1), 1, LOCAL(2),
  // to_integer 1)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(3),
  // max(round(pane_height*flex_height).to_integer 1)
  var_max, 2, LOCAL(3), num_1, 1, LOCAL(4),
  // remaining_flex_height-flex_height_count #
  var_std__minus, 2, var_302_1_remaining_flex_height, var_286_1_flex_height_count, 1, LOCAL(5),
  // !pane_height
  var_min, 2, LOCAL(4), LOCAL(5), 1, var_304_3_pane_height,
  // minus &remaining_flex_height pane_height
  var_minus, 2, var_302_1_remaining_flex_height, var_304_3_pane_height, 1, var_302_1_remaining_flex_height,
  // create_pane_view
  func_2_create_pane_view, 0, TAIL_CALL,
  POS(307, 23),
  POS(310, 37),
  POS(310, 31),
  POS(310, 62),
  POS(310, 27),
  POS(311, 27),
  POS(308, 23),
  POS(315, 23),
  POS(316, 23)
};

static TAB_NUM t_func_2_create_pane_view[] = {
  1, // locals
  0, // parameters
  // create_view(screen x y width pane_height)
  var_create_view, 5, var_263_0_screen, var_267_1_x, var_268_1_y, var_269_1_width, var_304_3_pane_height, 1, LOCAL(1),
  // push &views create_view(screen x y width pane_height)
  var_push, 2, var_271_1_views, LOCAL(1), 1, var_271_1_views,
  // plus &y pane_height
  var_plus, 2, var_268_1_y, var_304_3_pane_height, 1, var_268_1_y,
  // next
  var_next, 0, TAIL_CALL,
  POS(320, 33),
  POS(320, 21),
  POS(321, 21),
  POS(322, 21)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  //  true -> undefined
  LET, 2, var_true, lambda_40, TAIL_CALL,
  POS(324, 7)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(324, 15)
};

static TAB_NUM t_func_2_return[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_266_1_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_41, lambda_42, TAIL_CALL,
  POS(328, 7),
  POS(327, 5)
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  //  views
  LET, 1, var_271_1_views, TAIL_CALL,
  POS(329, 9)
};

static TAB_NUM t_lambda_42[] = {
  0, // locals
  0, // parameters
  // spread views
  var_spread, 1, var_271_1_views, TAIL_CALL,
  POS(330, 9)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__create_view}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_private__abs_x}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_private__abs_y}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__view___draw_text}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__view___draw_attributed_text}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__create_vertical_panes}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_create_pane_view}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_return}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__create_horizontal_panes}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_create_pane_view}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_return}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}}
};

static ATTRIBUTE_DEFINITION std_types__generic_terminal__attributes[] = {
  {-var_type_of, -var_undefined},
  {-var_x_of, -num_1},
  {-var_y_of, -num_1},
  {-var_width_of, -var_undefined},
  {-var_height_of, -var_undefined},
  {-var_character_width_of, -var_undefined},
  {-var_ascent_of, -var_undefined},
  {-var_descent_of, -var_undefined},
  {-var_character_height_of, -var_undefined},
  {-var_line_spacing_of, -var_undefined},
  {-var_line_height_of, -var_undefined},
  {-var_baseline_of, -var_undefined},
  {-var_draw_colour_of, -var_undefined},
  {-var_clear_colour_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION std_types__view__attributes[] = {
  {var_draw_text, -func_std_types__view___draw_text},
  {var_draw_attributed_text, -func_std_types__view___draw_attributed_text}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "x_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(23, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "y_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "character_width_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "ascent_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "descent_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "character_height_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "line_spacing_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "line_height_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "baseline_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "draw_colour_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "clear_colour_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "set_draw_colour\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "set_clear_colour\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "draw_text\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "draw_attributed_text\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_DERIVED, 0, 14,
    "generic_terminal\000std_types", std_types__generic_terminal__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "object\000std_types", NULL,
    {.position = POS(89, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "type_of\000", NULL,
    {.position = POS(91, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(91, 38)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "x_of\000", NULL,
    {.position = POS(92, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "y_of\000", NULL,
    {.position = POS(93, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "width_of\000", NULL,
    {.position = POS(94, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "height_of\000", NULL,
    {.position = POS(95, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "character_width_of\000", NULL,
    {.position = POS(96, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "ascent_of\000", NULL,
    {.position = POS(97, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "descent_of\000", NULL,
    {.position = POS(98, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "character_height_of\000", NULL,
    {.position = POS(99, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "line_spacing_of\000", NULL,
    {.position = POS(100, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "line_height_of\000", NULL,
    {.position = POS(101, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "baseline_of\000", NULL,
    {.position = POS(102, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "draw_colour_of\000", NULL,
    {.position = POS(103, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "clear_colour_of\000", NULL,
    {.position = POS(104, 30)}
  },
  {
    FOT_DERIVED, 0, 2,
    "view\000std_types", std_types__view__attributes,
    {"generic_terminal\000std_types"}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_view\000std", NULL,
    {.const_idx = -func_std__create_view}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "110_0_terminal\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "111_0_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "112_0_y\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(120, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(121, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(119, 9)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "abs_x\000std_private", NULL,
    {.const_idx = -func_std_private__abs_x}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "140_22_screen\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "140_29_x\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "abs_y\000std_private", NULL,
    {.const_idx = -func_std_private__abs_y}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "146_22_screen\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "146_29_y\000", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "draw_clipped_text\000std_private", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "draw_clipped_attributed_text\000std_private", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "draw_text\000", NULL,
    {.position = POS(155, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(165, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(169, 5)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "draw_attributed_text\000", NULL,
    {.position = POS(173, 18)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_vertical_panes\000std", NULL,
    {.const_idx = -func_std__create_vertical_panes}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "192_0_screen\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "193_0_pane_description\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "195_1_rc\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(195, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "196_1_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "197_1_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "198_1_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "199_1_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "200_1_views\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(200, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_integer\000", NULL,
    {.position = POS(202, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "204_1_iter\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bresenham\000", NULL,
    {.position = POS(204, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next_value\000", NULL,
    {.position = POS(205, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_view\000", NULL,
    {.position = POS(209, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(209, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(211, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "repeat\000", NULL,
    {.position = POS(206, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(213, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "214_1_fixed_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "215_1_flex_width_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "217_3_pane_width\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(220, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(223, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "230_1_flex_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "231_1_remaining_flex_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "233_3_pane_width\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(236, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(239, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "round\000", NULL,
    {.position = POS(239, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(239, 60)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(239, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "min\000", NULL,
    {.position = POS(238, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000", NULL,
    {.position = POS(244, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(232, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(253, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(201, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(257, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spread\000", NULL,
    {.position = POS(259, 9)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_horizontal_panes\000std", NULL,
    {.const_idx = -func_std__create_horizontal_panes}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "263_0_screen\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "264_0_pane_description\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "266_1_rc\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "267_1_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "268_1_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "269_1_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "270_1_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "271_1_views\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "275_1_iter\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "285_1_fixed_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "286_1_flex_height_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "288_3_pane_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "301_1_flex_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "302_1_remaining_flex_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "304_3_pane_height\000", NULL
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__io__generic_terminal = {
  "_basic__io__generic_terminal", // module name
  "basic/io/generic_terminal.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  55, // number of constants
  109, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
