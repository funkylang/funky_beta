#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  num_1 = -1,
  func_std_private__abs_x = -2,
  num_0 = -3,
  lambda_1 = -4,
  lambda_2 = -5,
  func_std_private__abs_y = -6,
  lambda_3 = -7,
  lambda_4 = -8,
  func_std__create_view = -9,
  func_std_types__generic_terminal___set_clear_colour = -10,
  func_std_types__generic_terminal___set_draw_colour = -11,
  func_std_types__view___draw_text = -12,
  func_std_types__view___draw_attributed_text = -13,
  func_std__create_vertical_panes = -14,
  lambda_5 = -15,
  lambda_6 = -16,
  lambda_7 = -17,
  lambda_8 = -18,
  lambda_9 = -19,
  lambda_10 = -20,
  lambda_11 = -21,
  lambda_12 = -22,
  lambda_13 = -23,
  lambda_14 = -24,
  lambda_15 = -25,
  lambda_16 = -26,
  lambda_17 = -27,
  func_create_pane_view = -28,
  lambda_18 = -29,
  lambda_19 = -30,
  func_return = -31,
  lambda_20 = -32,
  lambda_21 = -33,
  func_std__create_horizontal_panes = -34,
  lambda_22 = -35,
  lambda_23 = -36,
  lambda_24 = -37,
  lambda_25 = -38,
  lambda_26 = -39,
  lambda_27 = -40,
  lambda_28 = -41,
  lambda_29 = -42,
  lambda_30 = -43,
  lambda_31 = -44,
  lambda_32 = -45,
  lambda_33 = -46,
  lambda_34 = -47,
  lambda_35 = -48,
  lambda_36 = -49,
  func_2_create_pane_view = -50,
  lambda_37 = -51,
  lambda_38 = -52,
  func_2_return = -53,
  lambda_39 = -54,
  lambda_40 = -55
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
  var_clear_colour_of, // extern polymorphic
  var_draw_colour_of, // extern polymorphic
  var_std_types__view, // derived
  var_std_private__abs_x, // initialized
  var_108_22_screen, // dynamic
  var_108_29_x, // dynamic
  var_std__less, // extern
  var_std__plus, // extern
  var_if, // extern
  var_std_private__abs_y, // initialized
  var_114_22_screen, // dynamic
  var_114_29_y, // dynamic
  var_std__create_view, // initialized
  var_std__minus, // extern
  var_set_clear_colour, // extern polymorphic
  var_set_draw_colour, // extern polymorphic
  var_std_private__draw_clipped_text, // attribute
  var_std_private__draw_clipped_attributed_text, // attribute
  var_draw_text, // extern polymorphic
  var_create_string, // extern
  var_draw_attributed_text, // extern polymorphic
  var_std__create_vertical_panes, // initialized
  var_202_0_screen, // dynamic
  var_203_0_pane_description, // dynamic
  var_205_1_rc, // dynamic
  var_result_count, // extern
  var_206_1_x, // dynamic
  var_207_1_y, // dynamic
  var_208_1_width, // dynamic
  var_209_1_height, // dynamic
  var_210_1_views, // dynamic
  var_empty_list, // extern
  var_is_an_integer, // extern
  var_214_1_iter, // dynamic
  var_bresenham, // extern
  var_next_value, // extern
  var_create_view, // extern
  var_push, // extern
  var_next, // extern
  var_repeat, // extern
  var_is_a_list, // extern
  var_224_1_fixed_width, // dynamic
  var_225_1_flex_width_count, // dynamic
  var_227_3_pane_width, // dynamic
  var_inc, // extern
  var_plus, // extern
  var_240_1_flex_width, // dynamic
  var_241_1_remaining_flex_width, // dynamic
  var_243_3_pane_width, // dynamic
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
  var_273_0_screen, // dynamic
  var_274_0_pane_description, // dynamic
  var_276_1_rc, // dynamic
  var_277_1_x, // dynamic
  var_278_1_y, // dynamic
  var_279_1_width, // dynamic
  var_280_1_height, // dynamic
  var_281_1_views, // dynamic
  var_285_1_iter, // dynamic
  var_295_1_fixed_height, // dynamic
  var_296_1_flex_height_count, // dynamic
  var_298_3_pane_height, // dynamic
  var_311_1_flex_height, // dynamic
  var_312_1_remaining_flex_height, // dynamic
  var_314_3_pane_height, // dynamic
  var__END
};


static TAB_NUM t_func_std_private__abs_x[] = {
  1, // locals
  2, // parameters
  var_108_22_screen,
  var_108_29_x,
  // x < 0
  var_std__less, 2, var_108_29_x, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(110, 5),
  POS(109, 3)
};

static TAB_NUM t_lambda_1[] = {
  3, // locals
  0, // parameters
  // width_of(screen)+x+1
  var_width_of, 1, var_108_22_screen, 1, LOCAL(1),
  // width_of(screen)+x+1
  var_std__plus, 2, LOCAL(1), var_108_29_x, 1, LOCAL(2),
  // width_of(screen)+x+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  width_of(screen)+x+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(111, 8),
  POS(111, 8),
  POS(111, 8),
  POS(111, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  x
  LET, 1, var_108_29_x, TAIL_CALL,
  POS(112, 7)
};

static TAB_NUM t_func_std_private__abs_y[] = {
  1, // locals
  2, // parameters
  var_114_22_screen,
  var_114_29_y,
  // y < 0
  var_std__less, 2, var_114_29_y, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(116, 5),
  POS(115, 3)
};

static TAB_NUM t_lambda_3[] = {
  3, // locals
  0, // parameters
  // height_of(screen)+y+1
  var_height_of, 1, var_114_22_screen, 1, LOCAL(1),
  // height_of(screen)+y+1
  var_std__plus, 2, LOCAL(1), var_114_29_y, 1, LOCAL(2),
  // height_of(screen)+y+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  height_of(screen)+y+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(117, 8),
  POS(117, 8),
  POS(117, 8),
  POS(117, 7)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  y
  LET, 1, var_114_29_y, TAIL_CALL,
  POS(118, 7)
};

static TAB_NUM t_func_std__create_view[] = {
  25, // locals
  5, // parameters
  LOCAL(21), // 122_0_screen
  LOCAL(22), // 123_0_left_x
  LOCAL(23), // 124_0_top_y
  LOCAL(24), // 125_0_right_x
  LOCAL(25), // 126_0_bottom_y
  // std_private::abs_x screen &left_x
  var_std_private__abs_x, 2, LOCAL(21), LOCAL(22), 1, LOCAL(22),
  // std_private::abs_y screen &top_y
  var_std_private__abs_y, 2, LOCAL(21), LOCAL(23), 1, LOCAL(23),
  // std_private::abs_x screen &right_x
  var_std_private__abs_x, 2, LOCAL(21), LOCAL(24), 1, LOCAL(24),
  // std_private::abs_y screen &bottom_y
  var_std_private__abs_y, 2, LOCAL(21), LOCAL(25), 1, LOCAL(25),
  // x_of(screen)+left_x-1
  var_x_of, 1, LOCAL(21), 1, LOCAL(1),
  // x_of(screen)+left_x-1
  var_std__plus, 2, LOCAL(1), LOCAL(22), 1, LOCAL(2),
  // x_of(screen)+left_x-1
  var_std__minus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  // y_of(screen)+top_y-1
  var_y_of, 1, LOCAL(21), 1, LOCAL(4),
  // y_of(screen)+top_y-1
  var_std__plus, 2, LOCAL(4), LOCAL(23), 1, LOCAL(5),
  // y_of(screen)+top_y-1
  var_std__minus, 2, LOCAL(5), num_1, 1, LOCAL(6),
  // right_x-left_x+1)
  var_std__minus, 2, LOCAL(24), LOCAL(22), 1, LOCAL(7),
  // right_x-left_x+1)
  var_std__plus, 2, LOCAL(7), num_1, 1, LOCAL(8),
  // bottom_y-top_y+1)
  var_std__minus, 2, LOCAL(25), LOCAL(23), 1, LOCAL(9),
  // bottom_y-top_y+1)
  var_std__plus, 2, LOCAL(9), num_1, 1, LOCAL(10),
  // character_width_of(screen)
  var_character_width_of, 1, LOCAL(21), 1, LOCAL(11),
  // ascent_of(screen)
  var_ascent_of, 1, LOCAL(21), 1, LOCAL(12),
  // descent_of(screen)
  var_descent_of, 1, LOCAL(21), 1, LOCAL(13),
  // character_height_of(screen)
  var_character_height_of, 1, LOCAL(21), 1, LOCAL(14),
  // line_spacing_of(screen)
  var_line_spacing_of, 1, LOCAL(21), 1, LOCAL(15),
  // line_height_of(screen)
  var_line_height_of, 1, LOCAL(21), 1, LOCAL(16),
  // baseline_of(screen)
  var_baseline_of, 1, LOCAL(21), 1, LOCAL(17),
  // clear_colour_of(screen)
  var_clear_colour_of, 1, LOCAL(21), 1, LOCAL(18),
  // draw_colour_of(screen)
  var_draw_colour_of, 1, LOCAL(21), 1, LOCAL(19),
  // std_types::view
  LET, -13, var_std_types__view, var_x_of, LOCAL(3), var_y_of, LOCAL(6), var_width_of, LOCAL(8), var_height_of, LOCAL(10), var_character_width_of, LOCAL(11), var_ascent_of, LOCAL(12), var_descent_of, LOCAL(13), var_character_height_of, LOCAL(14), var_line_spacing_of, LOCAL(15), var_line_height_of, LOCAL(16), var_baseline_of, LOCAL(17), var_clear_colour_of, LOCAL(18), var_draw_colour_of, LOCAL(19), LOCAL(20),
  // ->
  LET, 1, LOCAL(20), TAIL_CALL,
  POS(128, 3),
  POS(129, 3),
  POS(130, 3),
  POS(131, 3),
  POS(134, 13),
  POS(134, 13),
  POS(134, 13),
  POS(135, 13),
  POS(135, 13),
  POS(135, 13),
  POS(136, 18),
  POS(136, 18),
  POS(137, 19),
  POS(137, 19),
  POS(138, 27),
  POS(139, 18),
  POS(140, 19),
  POS(141, 28),
  POS(142, 24),
  POS(143, 23),
  POS(144, 20),
  POS(145, 24),
  POS(146, 23),
  POS(133, 5),
  POS(132, 3)
};

static TAB_NUM t_func_std_types__generic_terminal___set_clear_colour[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 150_0_terminal
  LOCAL(3), // 151_0_colour
  // .clear_colour_of colour)
  LET, -1, LOCAL(2), var_clear_colour_of, LOCAL(3), LOCAL(1),
  // -> terminal(.clear_colour_of colour)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(153, 15),
  POS(153, 3)
};

static TAB_NUM t_func_std_types__generic_terminal___set_draw_colour[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 157_0_terminal
  LOCAL(3), // 158_0_colour
  // .draw_colour_of colour)
  LET, -1, LOCAL(2), var_draw_colour_of, LOCAL(3), LOCAL(1),
  // -> terminal(.draw_colour_of colour)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(160, 15),
  POS(160, 3)
};

static TAB_NUM t_func_std_types__view___draw_text[] = {
  12, // locals
  -5, // parameters
  MANDATORY_PARAMETER, LOCAL(7), // 167_0_view
  MANDATORY_PARAMETER, LOCAL(8), // 168_0_screen
  MANDATORY_PARAMETER, LOCAL(9), // 169_0_x
  MANDATORY_PARAMETER, LOCAL(10), // 170_0_y
  REST_PARAMETER, LOCAL(11), // 171_0_args
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
  POS(173, 3),
  POS(174, 3),
  POS(175, 3),
  POS(179, 5),
  POS(179, 5),
  POS(179, 5),
  POS(180, 5),
  POS(180, 5),
  POS(180, 5),
  POS(176, 3)
};

static TAB_NUM t_func_std_types__view___draw_attributed_text[] = {
  11, // locals
  5, // parameters
  LOCAL(7), // 185_0_view
  LOCAL(8), // 186_0_screen
  LOCAL(9), // 187_0_x
  LOCAL(10), // 188_0_y
  LOCAL(11), // 189_0_attributed_text
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
  POS(191, 3),
  POS(192, 3),
  POS(196, 5),
  POS(196, 5),
  POS(196, 5),
  POS(197, 5),
  POS(197, 5),
  POS(197, 5),
  POS(193, 3)
};

static TAB_NUM t_func_std__create_vertical_panes[] = {
  0, // locals
  2, // parameters
  var_202_0_screen,
  var_203_0_pane_description,
  // $rc result_count()
  var_result_count, 0, 1, var_205_1_rc,
  // $x x_of(screen)
  var_x_of, 1, var_202_0_screen, 1, var_206_1_x,
  // $y y_of(screen)
  var_y_of, 1, var_202_0_screen, 1, var_207_1_y,
  // $width width_of(screen)
  var_width_of, 1, var_202_0_screen, 1, var_208_1_width,
  // $height height_of(screen)
  var_height_of, 1, var_202_0_screen, 1, var_209_1_height,
  // $views empty_list
  LET, 1, var_empty_list, 1, var_210_1_views,
  // cond
  var_cond, 3, lambda_5, lambda_8, lambda_18, TAIL_CALL,
  POS(205, 3),
  POS(206, 3),
  POS(207, 3),
  POS(208, 3),
  POS(209, 3),
  POS(210, 3),
  POS(211, 3)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // is_an_integer:
  var_is_an_integer, 1, var_203_0_pane_description, 1, LOCAL(1),
  //  pane_description.is_an_integer:
  LET, 2, LOCAL(1), lambda_6, TAIL_CALL,
  POS(212, 25),
  POS(212, 7)
};

static TAB_NUM t_lambda_6[] = {
  3, // locals
  0, // parameters
  // $n pane_description
  LET, 1, var_203_0_pane_description, 1, LOCAL(3),
  // n+1 x x+width)
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // x+width)
  var_std__plus, 2, var_206_1_x, var_208_1_width, 1, LOCAL(2),
  // $iter bresenham(n+1 x x+width)
  var_bresenham, 3, LOCAL(1), var_206_1_x, LOCAL(2), 1, var_214_1_iter,
  // next_value &iter !x
  var_next_value, 1, var_214_1_iter, 2, var_214_1_iter, var_206_1_x,
  // repeat n
  var_repeat, 3, LOCAL(3), lambda_7, func_return, TAIL_CALL,
  POS(213, 7),
  POS(214, 23),
  POS(214, 29),
  POS(214, 7),
  POS(215, 7),
  POS(216, 7)
};

static TAB_NUM t_lambda_7[] = {
  3, // locals
  0, // parameters
  // next_value &iter $next_x
  var_next_value, 1, var_214_1_iter, 2, var_214_1_iter, LOCAL(3),
  // next_x-1 height)
  var_std__minus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // create_view(screen x y next_x-1 height)
  var_create_view, 5, var_202_0_screen, var_206_1_x, var_207_1_y, LOCAL(1), var_209_1_height, 1, LOCAL(2),
  // push &views create_view(screen x y next_x-1 height)
  var_push, 2, var_210_1_views, LOCAL(2), 1, var_210_1_views,
  // !x next_x
  LET, 1, LOCAL(3), 1, var_206_1_x,
  // next
  var_next, 0, TAIL_CALL,
  POS(218, 11),
  POS(219, 46),
  POS(219, 23),
  POS(219, 11),
  POS(220, 11),
  POS(221, 11)
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_203_0_pane_description, 1, LOCAL(1),
  //  pane_description.is_a_list:
  LET, 2, LOCAL(1), lambda_9, TAIL_CALL,
  POS(223, 25),
  POS(223, 7)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  // $fixed_width 0
  LET, 1, num_0, 1, var_224_1_fixed_width,
  // $flex_width_count 0
  LET, 1, num_0, 1, var_225_1_flex_width_count,
  // for_each pane_description
  var_for_each, 3, var_203_0_pane_description, lambda_10, lambda_13, TAIL_CALL,
  POS(224, 7),
  POS(225, 7),
  POS(226, 7)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  1, // parameters
  var_227_3_pane_width,
  // pane_width < 1:
  var_std__less, 2, var_227_3_pane_width, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_11, lambda_12, TAIL_CALL,
  POS(229, 13),
  POS(228, 11)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // inc &flex_width_count
  var_inc, 1, var_225_1_flex_width_count, 1, var_225_1_flex_width_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(230, 15),
  POS(231, 15)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  // plus &fixed_width pane_width
  var_plus, 2, var_224_1_fixed_width, var_227_3_pane_width, 1, var_224_1_fixed_width,
  // next
  var_next, 0, TAIL_CALL,
  POS(233, 15),
  POS(234, 15)
};

static TAB_NUM t_lambda_13[] = {
  2, // locals
  0, // parameters
  // fixed_width+flex_width_count > width
  var_std__plus, 2, var_224_1_fixed_width, var_225_1_flex_width_count, 1, LOCAL(1),
  // width
  var_std__less, 2, var_208_1_width, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_14, lambda_15, TAIL_CALL,
  POS(237, 13),
  POS(237, 44),
  POS(236, 11)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(238, 15)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  // $flex_width width-fixed_width
  var_std__minus, 2, var_208_1_width, var_224_1_fixed_width, 1, var_240_1_flex_width,
  // $remaining_flex_width flex_width
  LET, 1, var_240_1_flex_width, 1, var_241_1_remaining_flex_width,
  // for_each pane_description
  var_for_each, 3, var_203_0_pane_description, lambda_16, func_return, TAIL_CALL,
  POS(240, 15),
  POS(241, 15),
  POS(242, 15)
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  1, // parameters
  var_243_3_pane_width,
  // pane_width < 1:
  var_std__less, 2, var_243_3_pane_width, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_17, func_create_pane_view, TAIL_CALL,
  POS(245, 21),
  POS(244, 19)
};

static TAB_NUM t_lambda_17[] = {
  5, // locals
  0, // parameters
  // dec &flex_width_count
  var_dec, 1, var_225_1_flex_width_count, 1, var_225_1_flex_width_count,
  // pane_width*flex_width).to_integer 1)
  var_std__times, 2, var_243_3_pane_width, var_240_1_flex_width, 1, LOCAL(1),
  // round(pane_width*flex_width).to_integer 1)
  var_round, 1, LOCAL(1), 1, LOCAL(2),
  // to_integer 1)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(3),
  // max(round(pane_width*flex_width).to_integer 1)
  var_max, 2, LOCAL(3), num_1, 1, LOCAL(4),
  // remaining_flex_width-flex_width_count #
  var_std__minus, 2, var_241_1_remaining_flex_width, var_225_1_flex_width_count, 1, LOCAL(5),
  // !pane_width
  var_min, 2, LOCAL(4), LOCAL(5), 1, var_243_3_pane_width,
  // minus &remaining_flex_width pane_width
  var_minus, 2, var_241_1_remaining_flex_width, var_243_3_pane_width, 1, var_241_1_remaining_flex_width,
  // create_pane_view
  func_create_pane_view, 0, TAIL_CALL,
  POS(246, 23),
  POS(249, 37),
  POS(249, 31),
  POS(249, 60),
  POS(249, 27),
  POS(250, 27),
  POS(247, 23),
  POS(254, 23),
  POS(255, 23)
};

static TAB_NUM t_func_create_pane_view[] = {
  3, // locals
  0, // parameters
  // x+pane_width-1 height)
  var_std__plus, 2, var_206_1_x, var_243_3_pane_width, 1, LOCAL(1),
  // x+pane_width-1 height)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // create_view(screen x y x+pane_width-1 height)
  var_create_view, 5, var_202_0_screen, var_206_1_x, var_207_1_y, LOCAL(2), var_209_1_height, 1, LOCAL(3),
  // push &views create_view(screen x y x+pane_width-1 height)
  var_push, 2, var_210_1_views, LOCAL(3), 1, var_210_1_views,
  // plus &x pane_width
  var_plus, 2, var_206_1_x, var_243_3_pane_width, 1, var_206_1_x,
  // next
  var_next, 0, TAIL_CALL,
  POS(259, 56),
  POS(259, 56),
  POS(259, 33),
  POS(259, 21),
  POS(260, 21),
  POS(261, 21)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  true -> undefined
  LET, 2, var_true, lambda_19, TAIL_CALL,
  POS(263, 7)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(263, 15)
};

static TAB_NUM t_func_return[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_205_1_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_20, lambda_21, TAIL_CALL,
  POS(267, 7),
  POS(266, 5)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  views
  LET, 1, var_210_1_views, TAIL_CALL,
  POS(268, 9)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  // spread views
  var_spread, 1, var_210_1_views, TAIL_CALL,
  POS(269, 9)
};

static TAB_NUM t_func_std__create_horizontal_panes[] = {
  0, // locals
  2, // parameters
  var_273_0_screen,
  var_274_0_pane_description,
  // $rc result_count()
  var_result_count, 0, 1, var_276_1_rc,
  // $x x_of(screen)
  var_x_of, 1, var_273_0_screen, 1, var_277_1_x,
  // $y y_of(screen)
  var_y_of, 1, var_273_0_screen, 1, var_278_1_y,
  // $width width_of(screen)
  var_width_of, 1, var_273_0_screen, 1, var_279_1_width,
  // $height height_of(screen)
  var_height_of, 1, var_273_0_screen, 1, var_280_1_height,
  // $views empty_list
  LET, 1, var_empty_list, 1, var_281_1_views,
  // cond
  var_cond, 3, lambda_22, lambda_25, lambda_37, TAIL_CALL,
  POS(276, 3),
  POS(277, 3),
  POS(278, 3),
  POS(279, 3),
  POS(280, 3),
  POS(281, 3),
  POS(282, 3)
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // is_an_integer:
  var_is_an_integer, 1, var_274_0_pane_description, 1, LOCAL(1),
  //  pane_description.is_an_integer:
  LET, 2, LOCAL(1), lambda_23, TAIL_CALL,
  POS(283, 25),
  POS(283, 7)
};

static TAB_NUM t_lambda_23[] = {
  3, // locals
  0, // parameters
  // $n pane_description
  LET, 1, var_274_0_pane_description, 1, LOCAL(3),
  // n+1 y y+height)
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // y+height)
  var_std__plus, 2, var_278_1_y, var_280_1_height, 1, LOCAL(2),
  // $iter bresenham(n+1 y y+height)
  var_bresenham, 3, LOCAL(1), var_278_1_y, LOCAL(2), 1, var_285_1_iter,
  // next_value &iter !y
  var_next_value, 1, var_285_1_iter, 2, var_285_1_iter, var_278_1_y,
  // repeat n
  var_repeat, 3, LOCAL(3), lambda_24, func_2_return, TAIL_CALL,
  POS(284, 7),
  POS(285, 23),
  POS(285, 29),
  POS(285, 7),
  POS(286, 7),
  POS(287, 7)
};

static TAB_NUM t_lambda_24[] = {
  3, // locals
  0, // parameters
  // next_value &iter $next_y
  var_next_value, 1, var_285_1_iter, 2, var_285_1_iter, LOCAL(3),
  // next_y-1)
  var_std__minus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // create_view(screen x y width next_y-1)
  var_create_view, 5, var_273_0_screen, var_277_1_x, var_278_1_y, var_279_1_width, LOCAL(1), 1, LOCAL(2),
  // push &views create_view(screen x y width next_y-1)
  var_push, 2, var_281_1_views, LOCAL(2), 1, var_281_1_views,
  // !y next_y
  LET, 1, LOCAL(3), 1, var_278_1_y,
  // next
  var_next, 0, TAIL_CALL,
  POS(289, 11),
  POS(290, 52),
  POS(290, 23),
  POS(290, 11),
  POS(291, 11),
  POS(292, 11)
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_274_0_pane_description, 1, LOCAL(1),
  //  pane_description.is_a_list:
  LET, 2, LOCAL(1), lambda_26, TAIL_CALL,
  POS(294, 25),
  POS(294, 7)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  // $fixed_height 0
  LET, 1, num_0, 1, var_295_1_fixed_height,
  // $flex_height_count 0
  LET, 1, num_0, 1, var_296_1_flex_height_count,
  // for_each pane_description
  var_for_each, 3, var_274_0_pane_description, lambda_27, lambda_30, TAIL_CALL,
  POS(295, 7),
  POS(296, 7),
  POS(297, 7)
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  1, // parameters
  var_298_3_pane_height,
  // pane_height < 1:
  var_std__less, 2, var_298_3_pane_height, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_28, lambda_29, TAIL_CALL,
  POS(300, 13),
  POS(299, 11)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  // inc &flex_height_count
  var_inc, 1, var_296_1_flex_height_count, 1, var_296_1_flex_height_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(301, 15),
  POS(302, 15)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  // plus &fixed_height pane_height
  var_plus, 2, var_295_1_fixed_height, var_298_3_pane_height, 1, var_295_1_fixed_height,
  // next
  var_next, 0, TAIL_CALL,
  POS(304, 15),
  POS(305, 15)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // fixed_height+flex_height_count > height
  var_std__plus, 2, var_295_1_fixed_height, var_296_1_flex_height_count, 1, LOCAL(1),
  // height
  var_std__less, 2, var_280_1_height, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_31, lambda_32, TAIL_CALL,
  POS(308, 13),
  POS(308, 46),
  POS(307, 11)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(309, 15)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  // $flex_height height-fixed_height
  var_std__minus, 2, var_280_1_height, var_295_1_fixed_height, 1, var_311_1_flex_height,
  // $remaining_flex_height flex_height
  LET, 1, var_311_1_flex_height, 1, var_312_1_remaining_flex_height,
  // for_each pane_description
  var_for_each, 3, var_274_0_pane_description, lambda_33, func_2_return, TAIL_CALL,
  POS(311, 15),
  POS(312, 15),
  POS(313, 15)
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  1, // parameters
  var_314_3_pane_height,
  // pane_height < 1:
  var_std__less, 2, var_314_3_pane_height, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, func_2_create_pane_view, TAIL_CALL,
  POS(316, 21),
  POS(315, 19)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // dec &flex_height_count
  var_dec, 1, var_296_1_flex_height_count, 1, var_296_1_flex_height_count,
  // flex_height_count == 0
  var_std__equal, 2, var_296_1_flex_height_count, num_0, 1, LOCAL(1),
  // !pane_height
  var_if, 3, LOCAL(1), lambda_35, lambda_36, 1, var_314_3_pane_height,
  // minus &remaining_flex_height pane_height
  var_minus, 2, var_312_1_remaining_flex_height, var_314_3_pane_height, 1, var_312_1_remaining_flex_height,
  // create_pane_view
  func_2_create_pane_view, 0, TAIL_CALL,
  POS(317, 23),
  POS(320, 27),
  POS(318, 23),
  POS(329, 23),
  POS(330, 23)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  //  flex_height
  LET, 1, var_311_1_flex_height, TAIL_CALL,
  POS(321, 29)
};

static TAB_NUM t_lambda_36[] = {
  6, // locals
  0, // parameters
  // pane_height*flex_height).to_integer 1)
  var_std__times, 2, var_314_3_pane_height, var_311_1_flex_height, 1, LOCAL(1),
  // round(pane_height*flex_height).to_integer 1)
  var_round, 1, LOCAL(1), 1, LOCAL(2),
  // to_integer 1)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(3),
  // max(round(pane_height*flex_height).to_integer 1)
  var_max, 2, LOCAL(3), num_1, 1, LOCAL(4),
  // remaining_flex_height-flex_height_count #
  var_std__minus, 2, var_312_1_remaining_flex_height, var_296_1_flex_height_count, 1, LOCAL(5),
  // min
  var_min, 2, LOCAL(4), LOCAL(5), 1, LOCAL(6),
  // 
  LET, 1, LOCAL(6), TAIL_CALL,
  POS(324, 41),
  POS(324, 35),
  POS(324, 66),
  POS(324, 31),
  POS(325, 31),
  POS(323, 29),
  POS(322, 29)
};

static TAB_NUM t_func_2_create_pane_view[] = {
  3, // locals
  0, // parameters
  // y+pane_height-1)
  var_std__plus, 2, var_278_1_y, var_314_3_pane_height, 1, LOCAL(1),
  // y+pane_height-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // create_view(screen x y width y+pane_height-1)
  var_create_view, 5, var_273_0_screen, var_277_1_x, var_278_1_y, var_279_1_width, LOCAL(2), 1, LOCAL(3),
  // push &views create_view(screen x y width y+pane_height-1)
  var_push, 2, var_281_1_views, LOCAL(3), 1, var_281_1_views,
  // plus &y pane_height
  var_plus, 2, var_278_1_y, var_314_3_pane_height, 1, var_278_1_y,
  // next
  var_next, 0, TAIL_CALL,
  POS(334, 62),
  POS(334, 62),
  POS(334, 33),
  POS(334, 21),
  POS(335, 21),
  POS(336, 21)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  //  true -> undefined
  LET, 2, var_true, lambda_38, TAIL_CALL,
  POS(338, 7)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(338, 15)
};

static TAB_NUM t_func_2_return[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_276_1_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_39, lambda_40, TAIL_CALL,
  POS(342, 7),
  POS(341, 5)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  //  views
  LET, 1, var_281_1_views, TAIL_CALL,
  POS(343, 9)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  // spread views
  var_spread, 1, var_281_1_views, TAIL_CALL,
  POS(344, 9)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_private__abs_x}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_private__abs_y}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__create_view}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_terminal___set_clear_colour}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_terminal___set_draw_colour}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__view___draw_text}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__view___draw_attributed_text}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__create_vertical_panes}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_create_pane_view}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_return}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__create_horizontal_panes}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_create_pane_view}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_return}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}}
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
  {-var_clear_colour_of, -var_undefined},
  {-var_draw_colour_of, -var_undefined},
  {var_set_clear_colour, -func_std_types__generic_terminal___set_clear_colour},
  {var_set_draw_colour, -func_std_types__generic_terminal___set_draw_colour}
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
    FOT_DERIVED, 0, 16,
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
    "clear_colour_of\000", NULL,
    {.position = POS(103, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "draw_colour_of\000", NULL,
    {.position = POS(104, 30)}
  },
  {
    FOT_DERIVED, 0, 2,
    "view\000std_types", std_types__view__attributes,
    {"generic_terminal\000std_types"}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "abs_x\000std_private", NULL,
    {.const_idx = -func_std_private__abs_x}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "108_22_screen\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "108_29_x\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(110, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(111, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(109, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "abs_y\000std_private", NULL,
    {.const_idx = -func_std_private__abs_y}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "114_22_screen\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "114_29_y\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_view\000std", NULL,
    {.const_idx = -func_std__create_view}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(134, 13)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "set_clear_colour\000", NULL,
    {.position = POS(148, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "set_draw_colour\000", NULL,
    {.position = POS(155, 30)}
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
    {.position = POS(165, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(175, 9)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "draw_attributed_text\000", NULL,
    {.position = POS(183, 18)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_vertical_panes\000std", NULL,
    {.const_idx = -func_std__create_vertical_panes}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "202_0_screen\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "203_0_pane_description\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "205_1_rc\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(205, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "206_1_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "207_1_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "208_1_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "209_1_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "210_1_views\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(210, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_integer\000", NULL,
    {.position = POS(212, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "214_1_iter\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bresenham\000", NULL,
    {.position = POS(214, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next_value\000", NULL,
    {.position = POS(215, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_view\000", NULL,
    {.position = POS(219, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(219, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(221, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "repeat\000", NULL,
    {.position = POS(216, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(223, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "224_1_fixed_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "225_1_flex_width_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "227_3_pane_width\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(230, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(233, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "240_1_flex_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "241_1_remaining_flex_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "243_3_pane_width\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(246, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(249, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "round\000", NULL,
    {.position = POS(249, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(249, 60)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(249, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "min\000", NULL,
    {.position = POS(248, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000", NULL,
    {.position = POS(254, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(242, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(263, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(211, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(267, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spread\000", NULL,
    {.position = POS(269, 9)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_horizontal_panes\000std", NULL,
    {.const_idx = -func_std__create_horizontal_panes}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "273_0_screen\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "274_0_pane_description\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "276_1_rc\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "277_1_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "278_1_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "279_1_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "280_1_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "281_1_views\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "285_1_iter\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "295_1_fixed_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "296_1_flex_height_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "298_3_pane_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "311_1_flex_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "312_1_remaining_flex_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "314_3_pane_height\000", NULL
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
  108, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
