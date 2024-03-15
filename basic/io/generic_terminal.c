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
  func_std_types__view___clear = -14,
  lambda_5 = -15,
  lambda_6 = -16,
  func_std__create_vertical_panes = -17,
  lambda_7 = -18,
  lambda_8 = -19,
  lambda_9 = -20,
  lambda_10 = -21,
  lambda_11 = -22,
  lambda_12 = -23,
  lambda_13 = -24,
  lambda_14 = -25,
  lambda_15 = -26,
  lambda_16 = -27,
  lambda_17 = -28,
  lambda_18 = -29,
  lambda_19 = -30,
  func_create_pane_view = -31,
  lambda_20 = -32,
  lambda_21 = -33,
  func_return = -34,
  lambda_22 = -35,
  lambda_23 = -36,
  func_std__create_horizontal_panes = -37,
  lambda_24 = -38,
  lambda_25 = -39,
  lambda_26 = -40,
  lambda_27 = -41,
  lambda_28 = -42,
  lambda_29 = -43,
  lambda_30 = -44,
  lambda_31 = -45,
  lambda_32 = -46,
  lambda_33 = -47,
  lambda_34 = -48,
  lambda_35 = -49,
  lambda_36 = -50,
  lambda_37 = -51,
  lambda_38 = -52,
  func_2_create_pane_view = -53,
  lambda_39 = -54,
  lambda_40 = -55,
  func_2_return = -56,
  lambda_41 = -57,
  lambda_42 = -58
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
  var_std__clear, // attribute
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
  var_128_22_screen, // dynamic
  var_128_29_x, // dynamic
  var_std__less, // extern
  var_std__plus, // extern
  var_if, // extern
  var_std_private__abs_y, // initialized
  var_134_22_screen, // dynamic
  var_134_29_y, // dynamic
  var_std__create_view, // initialized
  var_std__minus, // extern
  var_set_clear_colour, // extern polymorphic
  var_set_draw_colour, // extern polymorphic
  var_std_private__draw_text, // attribute
  var_std_private__draw_attributed_text, // attribute
  var_std_private__clear, // attribute
  var_draw_text, // extern polymorphic
  var_create_string, // extern
  var_draw_attributed_text, // extern polymorphic
  var_clear, // extern polymorphic
  var_219_0_view, // dynamic
  var_221_0_x, // dynamic
  var_222_0_y, // dynamic
  var_is_undefined, // extern
  var_update_if, // extern
  var_std__create_vertical_panes, // initialized
  var_238_0_screen, // dynamic
  var_239_0_pane_description, // dynamic
  var_241_1_rc, // dynamic
  var_result_count, // extern
  var_242_1_x, // dynamic
  var_243_1_y, // dynamic
  var_244_1_width, // dynamic
  var_245_1_height, // dynamic
  var_246_1_views, // dynamic
  var_empty_list, // extern
  var_is_an_integer, // extern
  var_250_1_iter, // dynamic
  var_bresenham, // extern
  var_next_value, // extern
  var_create_view, // extern
  var_push, // extern
  var_next, // extern
  var_repeat, // extern
  var_is_a_list, // extern
  var_260_1_fixed_width, // dynamic
  var_261_1_flex_width_count, // dynamic
  var_263_3_pane_width, // dynamic
  var_inc, // extern
  var_plus, // extern
  var_276_1_flex_width, // dynamic
  var_277_1_remaining_flex_width, // dynamic
  var_279_3_pane_width, // dynamic
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
  var_309_0_screen, // dynamic
  var_310_0_pane_description, // dynamic
  var_312_1_rc, // dynamic
  var_313_1_x, // dynamic
  var_314_1_y, // dynamic
  var_315_1_width, // dynamic
  var_316_1_height, // dynamic
  var_317_1_views, // dynamic
  var_321_1_iter, // dynamic
  var_331_1_fixed_height, // dynamic
  var_332_1_flex_height_count, // dynamic
  var_334_3_pane_height, // dynamic
  var_347_1_flex_height, // dynamic
  var_348_1_remaining_flex_height, // dynamic
  var_350_3_pane_height, // dynamic
  var__END
};


static TAB_NUM t_func_std_private__abs_x[] = {
  1, // locals
  2, // parameters
  var_128_22_screen,
  var_128_29_x,
  // x < 0
  var_std__less, 2, var_128_29_x, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(130, 5),
  POS(129, 3)
};

static TAB_NUM t_lambda_1[] = {
  3, // locals
  0, // parameters
  // width_of(screen)+x+1
  var_width_of, 1, var_128_22_screen, 1, LOCAL(1),
  // width_of(screen)+x+1
  var_std__plus, 2, LOCAL(1), var_128_29_x, 1, LOCAL(2),
  // width_of(screen)+x+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  width_of(screen)+x+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(131, 8),
  POS(131, 8),
  POS(131, 8),
  POS(131, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  x
  LET, 1, var_128_29_x, TAIL_CALL,
  POS(132, 7)
};

static TAB_NUM t_func_std_private__abs_y[] = {
  1, // locals
  2, // parameters
  var_134_22_screen,
  var_134_29_y,
  // y < 0
  var_std__less, 2, var_134_29_y, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(136, 5),
  POS(135, 3)
};

static TAB_NUM t_lambda_3[] = {
  3, // locals
  0, // parameters
  // height_of(screen)+y+1
  var_height_of, 1, var_134_22_screen, 1, LOCAL(1),
  // height_of(screen)+y+1
  var_std__plus, 2, LOCAL(1), var_134_29_y, 1, LOCAL(2),
  // height_of(screen)+y+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  height_of(screen)+y+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(137, 8),
  POS(137, 8),
  POS(137, 8),
  POS(137, 7)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  y
  LET, 1, var_134_29_y, TAIL_CALL,
  POS(138, 7)
};

static TAB_NUM t_func_std__create_view[] = {
  25, // locals
  5, // parameters
  LOCAL(21), // 142_0_screen
  LOCAL(22), // 143_0_left_x
  LOCAL(23), // 144_0_top_y
  LOCAL(24), // 145_0_right_x
  LOCAL(25), // 146_0_bottom_y
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
  POS(148, 3),
  POS(149, 3),
  POS(150, 3),
  POS(151, 3),
  POS(154, 13),
  POS(154, 13),
  POS(154, 13),
  POS(155, 13),
  POS(155, 13),
  POS(155, 13),
  POS(156, 18),
  POS(156, 18),
  POS(157, 19),
  POS(157, 19),
  POS(158, 27),
  POS(159, 18),
  POS(160, 19),
  POS(161, 28),
  POS(162, 24),
  POS(163, 23),
  POS(164, 20),
  POS(165, 24),
  POS(166, 23),
  POS(153, 5),
  POS(152, 3)
};

static TAB_NUM t_func_std_types__generic_terminal___set_clear_colour[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 170_0_terminal
  LOCAL(3), // 171_0_colour
  // .clear_colour_of colour)
  LET, -1, LOCAL(2), var_clear_colour_of, LOCAL(3), LOCAL(1),
  // -> terminal(.clear_colour_of colour)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(173, 15),
  POS(173, 3)
};

static TAB_NUM t_func_std_types__generic_terminal___set_draw_colour[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 177_0_terminal
  LOCAL(3), // 178_0_colour
  // .draw_colour_of colour)
  LET, -1, LOCAL(2), var_draw_colour_of, LOCAL(3), LOCAL(1),
  // -> terminal(.draw_colour_of colour)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(180, 15),
  POS(180, 3)
};

static TAB_NUM t_func_std_types__view___draw_text[] = {
  12, // locals
  -5, // parameters
  MANDATORY_PARAMETER, LOCAL(7), // 188_0_view
  MANDATORY_PARAMETER, LOCAL(8), // 189_0_screen
  MANDATORY_PARAMETER, LOCAL(9), // 190_0_x
  MANDATORY_PARAMETER, LOCAL(10), // 191_0_y
  REST_PARAMETER, LOCAL(11), // 192_0_args
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
  // std_private::draw_text
  var_std_private__draw_text, 5, LOCAL(8), LOCAL(7), LOCAL(3), LOCAL(6), LOCAL(12), TAIL_CALL,
  POS(194, 3),
  POS(198, 5),
  POS(198, 5),
  POS(198, 5),
  POS(199, 5),
  POS(199, 5),
  POS(199, 5),
  POS(195, 3)
};

static TAB_NUM t_func_std_types__view___draw_attributed_text[] = {
  11, // locals
  5, // parameters
  LOCAL(7), // 204_0_view
  LOCAL(8), // 205_0_screen
  LOCAL(9), // 206_0_x
  LOCAL(10), // 207_0_y
  LOCAL(11), // 208_0_attributed_text
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
  // std_private::draw_attributed_text
  var_std_private__draw_attributed_text, 5, LOCAL(8), LOCAL(7), LOCAL(3), LOCAL(6), LOCAL(11), TAIL_CALL,
  POS(213, 5),
  POS(213, 5),
  POS(213, 5),
  POS(214, 5),
  POS(214, 5),
  POS(214, 5),
  POS(210, 3)
};

static TAB_NUM t_func_std_types__view___clear[] = {
  9, // locals
  -6, // parameters
  MANDATORY_PARAMETER, var_219_0_view,
  MANDATORY_PARAMETER, LOCAL(7), // 220_0_screen
  num_1, var_221_0_x,
  num_1, var_222_0_y,
  var_undefined, LOCAL(8), // 223_0_width
  var_undefined, LOCAL(9), // 224_0_height
  // is_undefined &width -> width_of(view)-x+1
  var_is_undefined, 1, LOCAL(8), 1, LOCAL(1),
  // update_if width.is_undefined &width -> width_of(view)-x+1
  var_update_if, 3, LOCAL(1), LOCAL(8), lambda_5, 1, LOCAL(8),
  // is_undefined &height -> height_of(view)-y+1
  var_is_undefined, 1, LOCAL(9), 1, LOCAL(1),
  // update_if height.is_undefined &height -> height_of(view)-y+1
  var_update_if, 3, LOCAL(1), LOCAL(9), lambda_6, 1, LOCAL(9),
  // x_of(view)+x-1
  var_x_of, 1, var_219_0_view, 1, LOCAL(1),
  // x_of(view)+x-1
  var_std__plus, 2, LOCAL(1), var_221_0_x, 1, LOCAL(2),
  // x_of(view)+x-1
  var_std__minus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  // y_of(view)+y-1
  var_y_of, 1, var_219_0_view, 1, LOCAL(4),
  // y_of(view)+y-1
  var_std__plus, 2, LOCAL(4), var_222_0_y, 1, LOCAL(5),
  // y_of(view)+y-1
  var_std__minus, 2, LOCAL(5), num_1, 1, LOCAL(6),
  // std_private::clear
  var_std_private__clear, 6, LOCAL(7), var_219_0_view, LOCAL(3), LOCAL(6), LOCAL(8), LOCAL(9), TAIL_CALL,
  POS(226, 19),
  POS(226, 3),
  POS(227, 20),
  POS(227, 3),
  POS(231, 5),
  POS(231, 5),
  POS(231, 5),
  POS(232, 5),
  POS(232, 5),
  POS(232, 5),
  POS(228, 3)
};

static TAB_NUM t_lambda_5[] = {
  3, // locals
  0, // parameters
  // width_of(view)-x+1
  var_width_of, 1, var_219_0_view, 1, LOCAL(1),
  // width_of(view)-x+1
  var_std__minus, 2, LOCAL(1), var_221_0_x, 1, LOCAL(2),
  // width_of(view)-x+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  width_of(view)-x+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(226, 42),
  POS(226, 42),
  POS(226, 42),
  POS(226, 41)
};

static TAB_NUM t_lambda_6[] = {
  3, // locals
  0, // parameters
  // height_of(view)-y+1
  var_height_of, 1, var_219_0_view, 1, LOCAL(1),
  // height_of(view)-y+1
  var_std__minus, 2, LOCAL(1), var_222_0_y, 1, LOCAL(2),
  // height_of(view)-y+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  height_of(view)-y+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(227, 44),
  POS(227, 44),
  POS(227, 44),
  POS(227, 43)
};

static TAB_NUM t_func_std__create_vertical_panes[] = {
  0, // locals
  2, // parameters
  var_238_0_screen,
  var_239_0_pane_description,
  // $rc result_count()
  var_result_count, 0, 1, var_241_1_rc,
  // $x x_of(screen)
  var_x_of, 1, var_238_0_screen, 1, var_242_1_x,
  // $y y_of(screen)
  var_y_of, 1, var_238_0_screen, 1, var_243_1_y,
  // $width width_of(screen)
  var_width_of, 1, var_238_0_screen, 1, var_244_1_width,
  // $height height_of(screen)
  var_height_of, 1, var_238_0_screen, 1, var_245_1_height,
  // $views empty_list
  LET, 1, var_empty_list, 1, var_246_1_views,
  // cond
  var_cond, 3, lambda_7, lambda_10, lambda_20, TAIL_CALL,
  POS(241, 3),
  POS(242, 3),
  POS(243, 3),
  POS(244, 3),
  POS(245, 3),
  POS(246, 3),
  POS(247, 3)
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // is_an_integer:
  var_is_an_integer, 1, var_239_0_pane_description, 1, LOCAL(1),
  //  pane_description.is_an_integer:
  LET, 2, LOCAL(1), lambda_8, TAIL_CALL,
  POS(248, 25),
  POS(248, 7)
};

static TAB_NUM t_lambda_8[] = {
  3, // locals
  0, // parameters
  // $n pane_description
  LET, 1, var_239_0_pane_description, 1, LOCAL(3),
  // n+1 x x+width)
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // x+width)
  var_std__plus, 2, var_242_1_x, var_244_1_width, 1, LOCAL(2),
  // $iter bresenham(n+1 x x+width)
  var_bresenham, 3, LOCAL(1), var_242_1_x, LOCAL(2), 1, var_250_1_iter,
  // next_value &iter !x
  var_next_value, 1, var_250_1_iter, 2, var_250_1_iter, var_242_1_x,
  // repeat n
  var_repeat, 3, LOCAL(3), lambda_9, func_return, TAIL_CALL,
  POS(249, 7),
  POS(250, 23),
  POS(250, 29),
  POS(250, 7),
  POS(251, 7),
  POS(252, 7)
};

static TAB_NUM t_lambda_9[] = {
  3, // locals
  0, // parameters
  // next_value &iter $next_x
  var_next_value, 1, var_250_1_iter, 2, var_250_1_iter, LOCAL(3),
  // next_x-1 height)
  var_std__minus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // create_view(screen x y next_x-1 height)
  var_create_view, 5, var_238_0_screen, var_242_1_x, var_243_1_y, LOCAL(1), var_245_1_height, 1, LOCAL(2),
  // push &views create_view(screen x y next_x-1 height)
  var_push, 2, var_246_1_views, LOCAL(2), 1, var_246_1_views,
  // !x next_x
  LET, 1, LOCAL(3), 1, var_242_1_x,
  // next
  var_next, 0, TAIL_CALL,
  POS(254, 11),
  POS(255, 46),
  POS(255, 23),
  POS(255, 11),
  POS(256, 11),
  POS(257, 11)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_239_0_pane_description, 1, LOCAL(1),
  //  pane_description.is_a_list:
  LET, 2, LOCAL(1), lambda_11, TAIL_CALL,
  POS(259, 25),
  POS(259, 7)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // $fixed_width 0
  LET, 1, num_0, 1, var_260_1_fixed_width,
  // $flex_width_count 0
  LET, 1, num_0, 1, var_261_1_flex_width_count,
  // for_each pane_description
  var_for_each, 3, var_239_0_pane_description, lambda_12, lambda_15, TAIL_CALL,
  POS(260, 7),
  POS(261, 7),
  POS(262, 7)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  1, // parameters
  var_263_3_pane_width,
  // pane_width < 1:
  var_std__less, 2, var_263_3_pane_width, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_13, lambda_14, TAIL_CALL,
  POS(265, 13),
  POS(264, 11)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  // inc &flex_width_count
  var_inc, 1, var_261_1_flex_width_count, 1, var_261_1_flex_width_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(266, 15),
  POS(267, 15)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  // plus &fixed_width pane_width
  var_plus, 2, var_260_1_fixed_width, var_263_3_pane_width, 1, var_260_1_fixed_width,
  // next
  var_next, 0, TAIL_CALL,
  POS(269, 15),
  POS(270, 15)
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // fixed_width+flex_width_count > width
  var_std__plus, 2, var_260_1_fixed_width, var_261_1_flex_width_count, 1, LOCAL(1),
  // width
  var_std__less, 2, var_244_1_width, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_16, lambda_17, TAIL_CALL,
  POS(273, 13),
  POS(273, 44),
  POS(272, 11)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(274, 15)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // $flex_width width-fixed_width
  var_std__minus, 2, var_244_1_width, var_260_1_fixed_width, 1, var_276_1_flex_width,
  // $remaining_flex_width flex_width
  LET, 1, var_276_1_flex_width, 1, var_277_1_remaining_flex_width,
  // for_each pane_description
  var_for_each, 3, var_239_0_pane_description, lambda_18, func_return, TAIL_CALL,
  POS(276, 15),
  POS(277, 15),
  POS(278, 15)
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  1, // parameters
  var_279_3_pane_width,
  // pane_width < 1:
  var_std__less, 2, var_279_3_pane_width, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_19, func_create_pane_view, TAIL_CALL,
  POS(281, 21),
  POS(280, 19)
};

static TAB_NUM t_lambda_19[] = {
  5, // locals
  0, // parameters
  // dec &flex_width_count
  var_dec, 1, var_261_1_flex_width_count, 1, var_261_1_flex_width_count,
  // pane_width*flex_width).to_integer 1)
  var_std__times, 2, var_279_3_pane_width, var_276_1_flex_width, 1, LOCAL(1),
  // round(pane_width*flex_width).to_integer 1)
  var_round, 1, LOCAL(1), 1, LOCAL(2),
  // to_integer 1)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(3),
  // max(round(pane_width*flex_width).to_integer 1)
  var_max, 2, LOCAL(3), num_1, 1, LOCAL(4),
  // remaining_flex_width-flex_width_count #
  var_std__minus, 2, var_277_1_remaining_flex_width, var_261_1_flex_width_count, 1, LOCAL(5),
  // !pane_width
  var_min, 2, LOCAL(4), LOCAL(5), 1, var_279_3_pane_width,
  // minus &remaining_flex_width pane_width
  var_minus, 2, var_277_1_remaining_flex_width, var_279_3_pane_width, 1, var_277_1_remaining_flex_width,
  // create_pane_view
  func_create_pane_view, 0, TAIL_CALL,
  POS(282, 23),
  POS(285, 37),
  POS(285, 31),
  POS(285, 60),
  POS(285, 27),
  POS(286, 27),
  POS(283, 23),
  POS(290, 23),
  POS(291, 23)
};

static TAB_NUM t_func_create_pane_view[] = {
  3, // locals
  0, // parameters
  // x+pane_width-1 height)
  var_std__plus, 2, var_242_1_x, var_279_3_pane_width, 1, LOCAL(1),
  // x+pane_width-1 height)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // create_view(screen x y x+pane_width-1 height)
  var_create_view, 5, var_238_0_screen, var_242_1_x, var_243_1_y, LOCAL(2), var_245_1_height, 1, LOCAL(3),
  // push &views create_view(screen x y x+pane_width-1 height)
  var_push, 2, var_246_1_views, LOCAL(3), 1, var_246_1_views,
  // plus &x pane_width
  var_plus, 2, var_242_1_x, var_279_3_pane_width, 1, var_242_1_x,
  // next
  var_next, 0, TAIL_CALL,
  POS(295, 56),
  POS(295, 56),
  POS(295, 33),
  POS(295, 21),
  POS(296, 21),
  POS(297, 21)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  true -> undefined
  LET, 2, var_true, lambda_21, TAIL_CALL,
  POS(299, 7)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(299, 15)
};

static TAB_NUM t_func_return[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_241_1_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_22, lambda_23, TAIL_CALL,
  POS(303, 7),
  POS(302, 5)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  views
  LET, 1, var_246_1_views, TAIL_CALL,
  POS(304, 9)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  // spread views
  var_spread, 1, var_246_1_views, TAIL_CALL,
  POS(305, 9)
};

static TAB_NUM t_func_std__create_horizontal_panes[] = {
  0, // locals
  2, // parameters
  var_309_0_screen,
  var_310_0_pane_description,
  // $rc result_count()
  var_result_count, 0, 1, var_312_1_rc,
  // $x x_of(screen)
  var_x_of, 1, var_309_0_screen, 1, var_313_1_x,
  // $y y_of(screen)
  var_y_of, 1, var_309_0_screen, 1, var_314_1_y,
  // $width width_of(screen)
  var_width_of, 1, var_309_0_screen, 1, var_315_1_width,
  // $height height_of(screen)
  var_height_of, 1, var_309_0_screen, 1, var_316_1_height,
  // $views empty_list
  LET, 1, var_empty_list, 1, var_317_1_views,
  // cond
  var_cond, 3, lambda_24, lambda_27, lambda_39, TAIL_CALL,
  POS(312, 3),
  POS(313, 3),
  POS(314, 3),
  POS(315, 3),
  POS(316, 3),
  POS(317, 3),
  POS(318, 3)
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  0, // parameters
  // is_an_integer:
  var_is_an_integer, 1, var_310_0_pane_description, 1, LOCAL(1),
  //  pane_description.is_an_integer:
  LET, 2, LOCAL(1), lambda_25, TAIL_CALL,
  POS(319, 25),
  POS(319, 7)
};

static TAB_NUM t_lambda_25[] = {
  3, // locals
  0, // parameters
  // $n pane_description
  LET, 1, var_310_0_pane_description, 1, LOCAL(3),
  // n+1 y y+height)
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // y+height)
  var_std__plus, 2, var_314_1_y, var_316_1_height, 1, LOCAL(2),
  // $iter bresenham(n+1 y y+height)
  var_bresenham, 3, LOCAL(1), var_314_1_y, LOCAL(2), 1, var_321_1_iter,
  // next_value &iter !y
  var_next_value, 1, var_321_1_iter, 2, var_321_1_iter, var_314_1_y,
  // repeat n
  var_repeat, 3, LOCAL(3), lambda_26, func_2_return, TAIL_CALL,
  POS(320, 7),
  POS(321, 23),
  POS(321, 29),
  POS(321, 7),
  POS(322, 7),
  POS(323, 7)
};

static TAB_NUM t_lambda_26[] = {
  3, // locals
  0, // parameters
  // next_value &iter $next_y
  var_next_value, 1, var_321_1_iter, 2, var_321_1_iter, LOCAL(3),
  // next_y-1)
  var_std__minus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // create_view(screen x y width next_y-1)
  var_create_view, 5, var_309_0_screen, var_313_1_x, var_314_1_y, var_315_1_width, LOCAL(1), 1, LOCAL(2),
  // push &views create_view(screen x y width next_y-1)
  var_push, 2, var_317_1_views, LOCAL(2), 1, var_317_1_views,
  // !y next_y
  LET, 1, LOCAL(3), 1, var_314_1_y,
  // next
  var_next, 0, TAIL_CALL,
  POS(325, 11),
  POS(326, 52),
  POS(326, 23),
  POS(326, 11),
  POS(327, 11),
  POS(328, 11)
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_310_0_pane_description, 1, LOCAL(1),
  //  pane_description.is_a_list:
  LET, 2, LOCAL(1), lambda_28, TAIL_CALL,
  POS(330, 25),
  POS(330, 7)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  // $fixed_height 0
  LET, 1, num_0, 1, var_331_1_fixed_height,
  // $flex_height_count 0
  LET, 1, num_0, 1, var_332_1_flex_height_count,
  // for_each pane_description
  var_for_each, 3, var_310_0_pane_description, lambda_29, lambda_32, TAIL_CALL,
  POS(331, 7),
  POS(332, 7),
  POS(333, 7)
};

static TAB_NUM t_lambda_29[] = {
  1, // locals
  1, // parameters
  var_334_3_pane_height,
  // pane_height < 1:
  var_std__less, 2, var_334_3_pane_height, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_30, lambda_31, TAIL_CALL,
  POS(336, 13),
  POS(335, 11)
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  // inc &flex_height_count
  var_inc, 1, var_332_1_flex_height_count, 1, var_332_1_flex_height_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(337, 15),
  POS(338, 15)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  // plus &fixed_height pane_height
  var_plus, 2, var_331_1_fixed_height, var_334_3_pane_height, 1, var_331_1_fixed_height,
  // next
  var_next, 0, TAIL_CALL,
  POS(340, 15),
  POS(341, 15)
};

static TAB_NUM t_lambda_32[] = {
  2, // locals
  0, // parameters
  // fixed_height+flex_height_count > height
  var_std__plus, 2, var_331_1_fixed_height, var_332_1_flex_height_count, 1, LOCAL(1),
  // height
  var_std__less, 2, var_316_1_height, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_33, lambda_34, TAIL_CALL,
  POS(344, 13),
  POS(344, 46),
  POS(343, 11)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(345, 15)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  // $flex_height height-fixed_height
  var_std__minus, 2, var_316_1_height, var_331_1_fixed_height, 1, var_347_1_flex_height,
  // $remaining_flex_height flex_height
  LET, 1, var_347_1_flex_height, 1, var_348_1_remaining_flex_height,
  // for_each pane_description
  var_for_each, 3, var_310_0_pane_description, lambda_35, func_2_return, TAIL_CALL,
  POS(347, 15),
  POS(348, 15),
  POS(349, 15)
};

static TAB_NUM t_lambda_35[] = {
  1, // locals
  1, // parameters
  var_350_3_pane_height,
  // pane_height < 1:
  var_std__less, 2, var_350_3_pane_height, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_36, func_2_create_pane_view, TAIL_CALL,
  POS(352, 21),
  POS(351, 19)
};

static TAB_NUM t_lambda_36[] = {
  1, // locals
  0, // parameters
  // dec &flex_height_count
  var_dec, 1, var_332_1_flex_height_count, 1, var_332_1_flex_height_count,
  // flex_height_count == 0
  var_std__equal, 2, var_332_1_flex_height_count, num_0, 1, LOCAL(1),
  // !pane_height
  var_if, 3, LOCAL(1), lambda_37, lambda_38, 1, var_350_3_pane_height,
  // minus &remaining_flex_height pane_height
  var_minus, 2, var_348_1_remaining_flex_height, var_350_3_pane_height, 1, var_348_1_remaining_flex_height,
  // create_pane_view
  func_2_create_pane_view, 0, TAIL_CALL,
  POS(353, 23),
  POS(356, 27),
  POS(354, 23),
  POS(365, 23),
  POS(366, 23)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  //  flex_height
  LET, 1, var_347_1_flex_height, TAIL_CALL,
  POS(357, 29)
};

static TAB_NUM t_lambda_38[] = {
  6, // locals
  0, // parameters
  // pane_height*flex_height).to_integer 1)
  var_std__times, 2, var_350_3_pane_height, var_347_1_flex_height, 1, LOCAL(1),
  // round(pane_height*flex_height).to_integer 1)
  var_round, 1, LOCAL(1), 1, LOCAL(2),
  // to_integer 1)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(3),
  // max(round(pane_height*flex_height).to_integer 1)
  var_max, 2, LOCAL(3), num_1, 1, LOCAL(4),
  // remaining_flex_height-flex_height_count #
  var_std__minus, 2, var_348_1_remaining_flex_height, var_332_1_flex_height_count, 1, LOCAL(5),
  // min
  var_min, 2, LOCAL(4), LOCAL(5), 1, LOCAL(6),
  // 
  LET, 1, LOCAL(6), TAIL_CALL,
  POS(360, 41),
  POS(360, 35),
  POS(360, 66),
  POS(360, 31),
  POS(361, 31),
  POS(359, 29),
  POS(358, 29)
};

static TAB_NUM t_func_2_create_pane_view[] = {
  3, // locals
  0, // parameters
  // y+pane_height-1)
  var_std__plus, 2, var_314_1_y, var_350_3_pane_height, 1, LOCAL(1),
  // y+pane_height-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // create_view(screen x y width y+pane_height-1)
  var_create_view, 5, var_309_0_screen, var_313_1_x, var_314_1_y, var_315_1_width, LOCAL(2), 1, LOCAL(3),
  // push &views create_view(screen x y width y+pane_height-1)
  var_push, 2, var_317_1_views, LOCAL(3), 1, var_317_1_views,
  // plus &y pane_height
  var_plus, 2, var_314_1_y, var_350_3_pane_height, 1, var_314_1_y,
  // next
  var_next, 0, TAIL_CALL,
  POS(370, 62),
  POS(370, 62),
  POS(370, 33),
  POS(370, 21),
  POS(371, 21),
  POS(372, 21)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  //  true -> undefined
  LET, 2, var_true, lambda_40, TAIL_CALL,
  POS(374, 7)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(374, 15)
};

static TAB_NUM t_func_2_return[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_312_1_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_41, lambda_42, TAIL_CALL,
  POS(378, 7),
  POS(377, 5)
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  //  views
  LET, 1, var_317_1_views, TAIL_CALL,
  POS(379, 9)
};

static TAB_NUM t_lambda_42[] = {
  0, // locals
  0, // parameters
  // spread views
  var_spread, 1, var_317_1_views, TAIL_CALL,
  POS(380, 9)
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__view___clear}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__create_vertical_panes}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_create_pane_view}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_return}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__create_horizontal_panes}},
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
  {-var_clear_colour_of, -var_undefined},
  {-var_draw_colour_of, -var_undefined},
  {var_set_clear_colour, -func_std_types__generic_terminal___set_clear_colour},
  {var_set_draw_colour, -func_std_types__generic_terminal___set_draw_colour}
};

static ATTRIBUTE_DEFINITION std_types__view__attributes[] = {
  {var_draw_text, -func_std_types__view___draw_text},
  {var_draw_attributed_text, -func_std_types__view___draw_attributed_text},
  {var_clear, -func_std_types__view___clear}
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
    FOT_POLYMORPHIC, 0, 0,
    "clear\000std", NULL,
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
    {.position = POS(109, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "type_of\000", NULL,
    {.position = POS(111, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(111, 38)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "x_of\000", NULL,
    {.position = POS(112, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "y_of\000", NULL,
    {.position = POS(113, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "width_of\000", NULL,
    {.position = POS(114, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "height_of\000", NULL,
    {.position = POS(115, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "character_width_of\000", NULL,
    {.position = POS(116, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "ascent_of\000", NULL,
    {.position = POS(117, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "descent_of\000", NULL,
    {.position = POS(118, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "character_height_of\000", NULL,
    {.position = POS(119, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "line_spacing_of\000", NULL,
    {.position = POS(120, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "line_height_of\000", NULL,
    {.position = POS(121, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "baseline_of\000", NULL,
    {.position = POS(122, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "clear_colour_of\000", NULL,
    {.position = POS(123, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "draw_colour_of\000", NULL,
    {.position = POS(124, 30)}
  },
  {
    FOT_DERIVED, 0, 3,
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
    "128_22_screen\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "128_29_x\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(130, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(131, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(129, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "abs_y\000std_private", NULL,
    {.const_idx = -func_std_private__abs_y}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "134_22_screen\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "134_29_y\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_view\000std", NULL,
    {.const_idx = -func_std__create_view}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(154, 13)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "set_clear_colour\000", NULL,
    {.position = POS(168, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "set_draw_colour\000", NULL,
    {.position = POS(175, 30)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "draw_text\000std_private", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "draw_attributed_text\000std_private", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "clear\000std_private", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "draw_text\000", NULL,
    {.position = POS(186, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(194, 9)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "draw_attributed_text\000", NULL,
    {.position = POS(202, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "clear\000", NULL,
    {.position = POS(217, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "219_0_view\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "221_0_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "222_0_y\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(226, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(226, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_vertical_panes\000std", NULL,
    {.const_idx = -func_std__create_vertical_panes}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "238_0_screen\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "239_0_pane_description\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "241_1_rc\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(241, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "242_1_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "243_1_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "244_1_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "245_1_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "246_1_views\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(246, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_integer\000", NULL,
    {.position = POS(248, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "250_1_iter\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bresenham\000", NULL,
    {.position = POS(250, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next_value\000", NULL,
    {.position = POS(251, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_view\000", NULL,
    {.position = POS(255, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(255, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(257, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "repeat\000", NULL,
    {.position = POS(252, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(259, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "260_1_fixed_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "261_1_flex_width_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "263_3_pane_width\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(266, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(269, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "276_1_flex_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "277_1_remaining_flex_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "279_3_pane_width\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(282, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(285, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "round\000", NULL,
    {.position = POS(285, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(285, 60)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(285, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "min\000", NULL,
    {.position = POS(284, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000", NULL,
    {.position = POS(290, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(278, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(299, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(247, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(303, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spread\000", NULL,
    {.position = POS(305, 9)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_horizontal_panes\000std", NULL,
    {.const_idx = -func_std__create_horizontal_panes}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "309_0_screen\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "310_0_pane_description\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "312_1_rc\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "313_1_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "314_1_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "315_1_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "316_1_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "317_1_views\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "321_1_iter\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "331_1_fixed_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "332_1_flex_height_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "334_3_pane_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "347_1_flex_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "348_1_remaining_flex_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "350_3_pane_height\000", NULL
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
  58, // number of constants
  116, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
