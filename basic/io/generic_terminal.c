#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  uni_std__DRAW_COLOUR = -1,
  uni_std__CLEAR_COLOUR = -2,
  uni_std__TEXT_ATTRIBUTES = -3,
  num_0 = -4,
  num_1 = -5,
  num_2 = -6,
  num_4 = -7,
  num_8 = -8,
  uni_std__KEY_PRESS = -9,
  uni_std__MOUSE_CLICK = -10,
  uni_std__MOUSE_RELEASE = -11,
  func_basic_private__abs_x = -12,
  lambda_1 = -13,
  lambda_2 = -14,
  func_basic_private__abs_y = -15,
  lambda_3 = -16,
  lambda_4 = -17,
  func_std__create_view = -18,
  func_std_types__generic_terminal___set_clear_colour = -19,
  func_std_types__generic_terminal___set_draw_colour = -20,
  func_std_types__generic_terminal___set_text_attributes = -21,
  func_std_types__generic_terminal___add_text_attributes = -22,
  func_std_types__generic_terminal___remove_text_attributes = -23,
  func_std_types__view___draw_text = -24,
  func_std_types__view___draw_attributed_text = -25,
  func_std_types__view___clear = -26,
  lambda_5 = -27,
  lambda_6 = -28,
  func_std_types__view___invert = -29,
  func_std_types__view___draw_shadow = -30,
  func_clip_rectangle = -31,
  lambda_7 = -32,
  lambda_8 = -33,
  lambda_9 = -34,
  lambda_10 = -35,
  lambda_11 = -36,
  lambda_12 = -37,
  func_std_types__view___copy = -38,
  lambda_13 = -39,
  lambda_14 = -40,
  lambda_15 = -41,
  lambda_16 = -42,
  lambda_17 = -43,
  lambda_18 = -44,
  lambda_19 = -45,
  lambda_20 = -46,
  lambda_21 = -47,
  func_std__create_vertical_panes = -48,
  lambda_22 = -49,
  lambda_23 = -50,
  lambda_24 = -51,
  lambda_25 = -52,
  lambda_26 = -53,
  lambda_27 = -54,
  lambda_28 = -55,
  lambda_29 = -56,
  lambda_30 = -57,
  lambda_31 = -58,
  lambda_32 = -59,
  lambda_33 = -60,
  lambda_34 = -61,
  func_create_pane_view = -62,
  lambda_35 = -63,
  lambda_36 = -64,
  func_return = -65,
  lambda_37 = -66,
  lambda_38 = -67,
  func_std__create_horizontal_panes = -68,
  lambda_39 = -69,
  lambda_40 = -70,
  lambda_41 = -71,
  lambda_42 = -72,
  lambda_43 = -73,
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
  func_2_create_pane_view = -84,
  lambda_54 = -85,
  lambda_55 = -86,
  func_2_return = -87,
  lambda_56 = -88,
  lambda_57 = -89
};

enum {
  var__START = FIRST_VAR-1,
  var_std__x_of, // attribute
  var_std__assign, // extern
  var_std__y_of, // attribute
  var_std__plot_x_resolution_of, // attribute
  var_std__plot_y_resolution_of, // attribute
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
  var_std__set_text_attributes, // attribute
  var_std__add_text_attributes, // attribute
  var_std__remove_text_attributes, // attribute
  var_std__DRAW_COLOUR, // initialized
  var_std__CLEAR_COLOUR, // initialized
  var_std__TEXT_ATTRIBUTES, // initialized
  var_std__NORMAL, // initialized
  var_std__BOLD, // initialized
  var_std__ITALIC, // initialized
  var_std__UNDERLINE, // initialized
  var_std__STRIKETHROUGH, // initialized
  var_std__KEY_PRESS, // initialized
  var_std__MOUSE_CLICK, // initialized
  var_std__MOUSE_RELEASE, // initialized
  var_std__draw_text, // attribute
  var_std__draw_attributed_text, // attribute
  var_std__clear, // attribute
  var_std__invert, // attribute
  var_std__draw_shadow, // attribute
  var_std__copy, // attribute
  var_std__adjoin, // attribute
  var_std_types__generic_terminal, // derived
  var_std_types__resource, // extern
  var_type_of, // extern polymorphic
  var_undefined, // extern
  var_x_of, // extern polymorphic
  var_y_of, // extern polymorphic
  var_plot_x_resolution_of, // extern polymorphic
  var_plot_y_resolution_of, // extern polymorphic
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
  var_text_attributes_of, // extern polymorphic
  var_std_types__view, // derived
  var_basic_private__abs_x, // initialized
  var_100_24_screen, // dynamic
  var_100_31_x, // dynamic
  var_std__less, // extern
  var_std__plus, // extern
  var_if, // extern
  var_basic_private__abs_y, // initialized
  var_106_24_screen, // dynamic
  var_106_31_y, // dynamic
  var_std__create_view, // initialized
  var_std__minus, // extern
  var_set_clear_colour, // extern polymorphic
  var_set_draw_colour, // extern polymorphic
  var_set_text_attributes, // extern polymorphic
  var_add_text_attributes, // extern polymorphic
  var_std__bit_or, // extern
  var_remove_text_attributes, // extern polymorphic
  var_not, // extern
  var_std__bit_and, // extern
  var_basic_private__draw_text, // attribute
  var_basic_private__draw_attributed_text, // attribute
  var_basic_private__clear, // attribute
  var_draw_text, // extern polymorphic
  var_create_string, // extern
  var_draw_attributed_text, // extern polymorphic
  var_clear, // extern polymorphic
  var_214_0_view, // dynamic
  var_216_0_x, // dynamic
  var_217_0_y, // dynamic
  var_is_undefined, // extern
  var_update_if, // extern
  var_invert, // extern polymorphic
  var_draw_shadow, // extern polymorphic
  var_255_23_x, // dynamic
  var_255_25_y, // dynamic
  var_255_27_width, // dynamic
  var_255_33_height, // dynamic
  var_256_1_view_x, // dynamic
  var_257_1_view_y, // dynamic
  var_258_1_view_width, // dynamic
  var_259_1_view_height, // dynamic
  var_264_1_left_x, // dynamic
  var_265_1_top_y, // dynamic
  var_copy, // extern polymorphic
  var_281_0_destination, // dynamic
  var_282_0_source, // dynamic
  var_283_0_x, // dynamic
  var_284_0_y, // dynamic
  var_285_0_sx, // dynamic
  var_286_0_sy, // dynamic
  var_287_0_width, // dynamic
  var_288_0_height, // dynamic
  var_292_1_view_x, // dynamic
  var_293_1_view_y, // dynamic
  var_294_1_view_width, // dynamic
  var_295_1_view_height, // dynamic
  var_298_1_dx, // dynamic
  var_299_1_dy, // dynamic
  var_std__not, // extern
  var_std__or, // extern
  var_std__create_vertical_panes, // initialized
  var_320_0_screen, // dynamic
  var_321_0_pane_description, // dynamic
  var_323_1_rc, // dynamic
  var_result_count, // extern
  var_324_1_x, // dynamic
  var_325_1_y, // dynamic
  var_326_1_width, // dynamic
  var_327_1_height, // dynamic
  var_328_1_views, // dynamic
  var_empty_list, // extern
  var_is_an_integer, // extern
  var_332_1_iter, // dynamic
  var_bresenham, // extern
  var_next_value, // extern
  var_create_view, // extern
  var_push, // extern
  var_next, // extern
  var_repeat, // extern
  var_is_a_list, // extern
  var_342_1_fixed_width, // dynamic
  var_343_1_flex_width_count, // dynamic
  var_345_3_pane_width, // dynamic
  var_inc, // extern
  var_plus, // extern
  var_358_1_flex_width, // dynamic
  var_359_1_remaining_flex_width, // dynamic
  var_361_3_pane_width, // dynamic
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
  var_391_0_screen, // dynamic
  var_392_0_pane_description, // dynamic
  var_394_1_rc, // dynamic
  var_395_1_x, // dynamic
  var_396_1_y, // dynamic
  var_397_1_width, // dynamic
  var_398_1_height, // dynamic
  var_399_1_views, // dynamic
  var_403_1_iter, // dynamic
  var_413_1_fixed_height, // dynamic
  var_414_1_flex_height_count, // dynamic
  var_416_3_pane_height, // dynamic
  var_429_1_flex_height, // dynamic
  var_430_1_remaining_flex_height, // dynamic
  var_432_3_pane_height, // dynamic
  var__END
};


static TAB_NUM t_func_basic_private__abs_x[] = {
  1, // locals
  2, // parameters
  var_100_24_screen,
  var_100_31_x,
  // x < 0
  var_std__less, 2, var_100_31_x, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(102, 5),
  POS(101, 3)
};

static TAB_NUM t_lambda_1[] = {
  3, // locals
  0, // parameters
  // width_of(screen)+x+1
  var_width_of, 1, var_100_24_screen, 1, LOCAL(1),
  // width_of(screen)+x+1
  var_std__plus, 2, LOCAL(1), var_100_31_x, 1, LOCAL(2),
  // width_of(screen)+x+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  width_of(screen)+x+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(103, 8),
  POS(103, 8),
  POS(103, 8),
  POS(103, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  x
  LET, 1, var_100_31_x, TAIL_CALL,
  POS(104, 7)
};

static TAB_NUM t_func_basic_private__abs_y[] = {
  1, // locals
  2, // parameters
  var_106_24_screen,
  var_106_31_y,
  // y < 0
  var_std__less, 2, var_106_31_y, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(108, 5),
  POS(107, 3)
};

static TAB_NUM t_lambda_3[] = {
  3, // locals
  0, // parameters
  // height_of(screen)+y+1
  var_height_of, 1, var_106_24_screen, 1, LOCAL(1),
  // height_of(screen)+y+1
  var_std__plus, 2, LOCAL(1), var_106_31_y, 1, LOCAL(2),
  // height_of(screen)+y+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  height_of(screen)+y+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(109, 8),
  POS(109, 8),
  POS(109, 8),
  POS(109, 7)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  y
  LET, 1, var_106_31_y, TAIL_CALL,
  POS(110, 7)
};

static TAB_NUM t_func_std__create_view[] = {
  25, // locals
  5, // parameters
  LOCAL(21), // 114_0_screen
  LOCAL(22), // 115_0_left_x
  LOCAL(23), // 116_0_top_y
  LOCAL(24), // 117_0_right_x
  LOCAL(25), // 118_0_bottom_y
  // basic_private::abs_x screen &left_x
  var_basic_private__abs_x, 2, LOCAL(21), LOCAL(22), 1, LOCAL(22),
  // basic_private::abs_y screen &top_y
  var_basic_private__abs_y, 2, LOCAL(21), LOCAL(23), 1, LOCAL(23),
  // basic_private::abs_x screen &right_x
  var_basic_private__abs_x, 2, LOCAL(21), LOCAL(24), 1, LOCAL(24),
  // basic_private::abs_y screen &bottom_y
  var_basic_private__abs_y, 2, LOCAL(21), LOCAL(25), 1, LOCAL(25),
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
  POS(120, 3),
  POS(121, 3),
  POS(122, 3),
  POS(123, 3),
  POS(126, 13),
  POS(126, 13),
  POS(126, 13),
  POS(127, 13),
  POS(127, 13),
  POS(127, 13),
  POS(128, 18),
  POS(128, 18),
  POS(129, 19),
  POS(129, 19),
  POS(130, 27),
  POS(131, 18),
  POS(132, 19),
  POS(133, 28),
  POS(134, 24),
  POS(135, 23),
  POS(136, 20),
  POS(137, 24),
  POS(138, 23),
  POS(125, 5),
  POS(124, 3)
};

static TAB_NUM t_func_std_types__generic_terminal___set_clear_colour[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 142_0_terminal
  LOCAL(3), // 143_0_colour
  // .clear_colour_of colour)
  LET, -1, LOCAL(2), var_clear_colour_of, LOCAL(3), LOCAL(1),
  // -> terminal(.clear_colour_of colour)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(145, 15),
  POS(145, 3)
};

static TAB_NUM t_func_std_types__generic_terminal___set_draw_colour[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 149_0_terminal
  LOCAL(3), // 150_0_colour
  // .draw_colour_of colour)
  LET, -1, LOCAL(2), var_draw_colour_of, LOCAL(3), LOCAL(1),
  // -> terminal(.draw_colour_of colour)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(152, 15),
  POS(152, 3)
};

static TAB_NUM t_func_std_types__generic_terminal___set_text_attributes[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 156_0_terminal
  LOCAL(3), // 157_0_attributes
  // .text_attributes_of attributes)
  LET, -1, LOCAL(2), var_text_attributes_of, LOCAL(3), LOCAL(1),
  // -> terminal(.text_attributes_of attributes)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(159, 15),
  POS(159, 3)
};

static TAB_NUM t_func_std_types__generic_terminal___add_text_attributes[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 163_0_terminal
  LOCAL(5), // 164_0_attributes
  // text_attributes_of(terminal) | attributes)
  var_text_attributes_of, 1, LOCAL(4), 1, LOCAL(1),
  // text_attributes_of(terminal) | attributes)
  var_std__bit_or, 2, LOCAL(1), LOCAL(5), 1, LOCAL(2),
  // .text_attributes_of text_attributes_of(terminal) | attributes)
  LET, -1, LOCAL(4), var_text_attributes_of, LOCAL(2), LOCAL(3),
  // -> terminal(.text_attributes_of text_attributes_of(terminal) | attributes)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(166, 35),
  POS(166, 35),
  POS(166, 15),
  POS(166, 3)
};

static TAB_NUM t_func_std_types__generic_terminal___remove_text_attributes[] = {
  6, // locals
  2, // parameters
  LOCAL(5), // 170_0_terminal
  LOCAL(6), // 171_0_attributes
  // text_attributes_of(terminal) & not(attributes)
  var_text_attributes_of, 1, LOCAL(5), 1, LOCAL(1),
  // not(attributes)
  var_not, 1, LOCAL(6), 1, LOCAL(2),
  // text_attributes_of(terminal) & not(attributes)
  var_std__bit_and, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // terminal
  LET, -1, LOCAL(5), var_text_attributes_of, LOCAL(3), LOCAL(4),
  // ->
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(175, 27),
  POS(175, 58),
  POS(175, 27),
  POS(174, 5),
  POS(173, 3)
};

static TAB_NUM t_func_std_types__view___draw_text[] = {
  12, // locals
  -5, // parameters
  MANDATORY_PARAMETER, LOCAL(7), // 183_0_view
  MANDATORY_PARAMETER, LOCAL(8), // 184_0_screen
  MANDATORY_PARAMETER, LOCAL(9), // 185_0_x
  MANDATORY_PARAMETER, LOCAL(10), // 186_0_y
  REST_PARAMETER, LOCAL(11), // 187_0_args
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
  // basic_private::draw_text
  var_basic_private__draw_text, 5, LOCAL(8), LOCAL(7), LOCAL(3), LOCAL(6), LOCAL(12), TAIL_CALL,
  POS(189, 3),
  POS(193, 5),
  POS(193, 5),
  POS(193, 5),
  POS(194, 5),
  POS(194, 5),
  POS(194, 5),
  POS(190, 3)
};

static TAB_NUM t_func_std_types__view___draw_attributed_text[] = {
  11, // locals
  5, // parameters
  LOCAL(7), // 199_0_view
  LOCAL(8), // 200_0_screen
  LOCAL(9), // 201_0_x
  LOCAL(10), // 202_0_y
  LOCAL(11), // 203_0_attributed_text
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
  // basic_private::draw_attributed_text
  var_basic_private__draw_attributed_text, 5, LOCAL(8), LOCAL(7), LOCAL(3), LOCAL(6), LOCAL(11), TAIL_CALL,
  POS(208, 5),
  POS(208, 5),
  POS(208, 5),
  POS(209, 5),
  POS(209, 5),
  POS(209, 5),
  POS(205, 3)
};

static TAB_NUM t_func_std_types__view___clear[] = {
  9, // locals
  -6, // parameters
  MANDATORY_PARAMETER, var_214_0_view,
  MANDATORY_PARAMETER, LOCAL(7), // 215_0_screen
  num_1, var_216_0_x,
  num_1, var_217_0_y,
  var_undefined, LOCAL(8), // 218_0_width
  var_undefined, LOCAL(9), // 219_0_height
  // is_undefined &width -> width_of(view)-x+1
  var_is_undefined, 1, LOCAL(8), 1, LOCAL(1),
  // update_if width.is_undefined &width -> width_of(view)-x+1
  var_update_if, 3, LOCAL(1), LOCAL(8), lambda_5, 1, LOCAL(8),
  // is_undefined &height -> height_of(view)-y+1
  var_is_undefined, 1, LOCAL(9), 1, LOCAL(1),
  // update_if height.is_undefined &height -> height_of(view)-y+1
  var_update_if, 3, LOCAL(1), LOCAL(9), lambda_6, 1, LOCAL(9),
  // x_of(view)+x-1
  var_x_of, 1, var_214_0_view, 1, LOCAL(1),
  // x_of(view)+x-1
  var_std__plus, 2, LOCAL(1), var_216_0_x, 1, LOCAL(2),
  // x_of(view)+x-1
  var_std__minus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  // y_of(view)+y-1
  var_y_of, 1, var_214_0_view, 1, LOCAL(4),
  // y_of(view)+y-1
  var_std__plus, 2, LOCAL(4), var_217_0_y, 1, LOCAL(5),
  // y_of(view)+y-1
  var_std__minus, 2, LOCAL(5), num_1, 1, LOCAL(6),
  // basic_private::clear
  var_basic_private__clear, 6, LOCAL(7), var_214_0_view, LOCAL(3), LOCAL(6), LOCAL(8), LOCAL(9), TAIL_CALL,
  POS(221, 19),
  POS(221, 3),
  POS(222, 20),
  POS(222, 3),
  POS(226, 5),
  POS(226, 5),
  POS(226, 5),
  POS(227, 5),
  POS(227, 5),
  POS(227, 5),
  POS(223, 3)
};

static TAB_NUM t_lambda_5[] = {
  3, // locals
  0, // parameters
  // width_of(view)-x+1
  var_width_of, 1, var_214_0_view, 1, LOCAL(1),
  // width_of(view)-x+1
  var_std__minus, 2, LOCAL(1), var_216_0_x, 1, LOCAL(2),
  // width_of(view)-x+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  width_of(view)-x+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(221, 42),
  POS(221, 42),
  POS(221, 42),
  POS(221, 41)
};

static TAB_NUM t_lambda_6[] = {
  3, // locals
  0, // parameters
  // height_of(view)-y+1
  var_height_of, 1, var_214_0_view, 1, LOCAL(1),
  // height_of(view)-y+1
  var_std__minus, 2, LOCAL(1), var_217_0_y, 1, LOCAL(2),
  // height_of(view)-y+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  height_of(view)-y+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(222, 44),
  POS(222, 44),
  POS(222, 44),
  POS(222, 43)
};

static TAB_NUM t_func_std_types__view___invert[] = {
  6, // locals
  -6, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 233_0_view
  MANDATORY_PARAMETER, LOCAL(2), // 234_0_screen
  num_1, LOCAL(3), // 235_0_x
  num_1, LOCAL(4), // 236_0_y
  var_undefined, LOCAL(5), // 237_0_width
  var_undefined, LOCAL(6), // 238_0_height
  // clip_rectangle view &x &y &width &height
  func_clip_rectangle, 5, LOCAL(1), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), 4, LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6),
  // invert screen x y width height
  var_invert, 5, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), TAIL_CALL,
  POS(240, 3),
  POS(241, 3)
};

static TAB_NUM t_func_std_types__view___draw_shadow[] = {
  6, // locals
  -6, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 245_0_view
  MANDATORY_PARAMETER, LOCAL(2), // 246_0_screen
  num_1, LOCAL(3), // 247_0_x
  num_1, LOCAL(4), // 248_0_y
  var_undefined, LOCAL(5), // 249_0_width
  var_undefined, LOCAL(6), // 250_0_height
  // clip_rectangle view &x &y &width &height
  func_clip_rectangle, 5, LOCAL(1), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), 4, LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6),
  // draw_shadow screen x y width height
  var_draw_shadow, 5, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), TAIL_CALL,
  POS(252, 3),
  POS(253, 3)
};

static TAB_NUM t_func_clip_rectangle[] = {
  5, // locals
  5, // parameters
  LOCAL(3), // 255_18_view
  var_255_23_x,
  var_255_25_y,
  var_255_27_width,
  var_255_33_height,
  // $view_x x_of(view)
  var_x_of, 1, LOCAL(3), 1, var_256_1_view_x,
  // $view_y y_of(view)
  var_y_of, 1, LOCAL(3), 1, var_257_1_view_y,
  // $view_width width_of(view)
  var_width_of, 1, LOCAL(3), 1, var_258_1_view_width,
  // $view_height height_of(view)
  var_height_of, 1, LOCAL(3), 1, var_259_1_view_height,
  // is_undefined &width -> view_width-x+1
  var_is_undefined, 1, var_255_27_width, 1, LOCAL(1),
  // update_if width.is_undefined &width -> view_width-x+1
  var_update_if, 3, LOCAL(1), var_255_27_width, lambda_7, 1, var_255_27_width,
  // is_undefined &height -> view_height-y+1
  var_is_undefined, 1, var_255_33_height, 1, LOCAL(1),
  // update_if height.is_undefined &height -> view_height-y+1
  var_update_if, 3, LOCAL(1), var_255_33_height, lambda_8, 1, var_255_33_height,
  // view_x+x-1
  var_std__plus, 2, var_256_1_view_x, var_255_23_x, 1, LOCAL(1),
  // $left_x view_x+x-1
  var_std__minus, 2, LOCAL(1), num_1, 1, var_264_1_left_x,
  // view_y+y-1
  var_std__plus, 2, var_257_1_view_y, var_255_25_y, 1, LOCAL(1),
  // $top_y view_y+y-1
  var_std__minus, 2, LOCAL(1), num_1, 1, var_265_1_top_y,
  // $right_x left_x+width # exclusive
  var_std__plus, 2, var_264_1_left_x, var_255_27_width, 1, LOCAL(4),
  // $bottom_y top_y+height # exclusive
  var_std__plus, 2, var_265_1_top_y, var_255_33_height, 1, LOCAL(5),
  // left_x < view_x &left_x &width -> view_x width-(view_x-left_x)
  var_std__less, 2, var_264_1_left_x, var_256_1_view_x, 1, LOCAL(1),
  // update_if left_x < view_x &left_x &width -> view_x width-(view_x-left_x)
  var_update_if, 4, LOCAL(1), var_264_1_left_x, var_255_27_width, lambda_9, 2, var_264_1_left_x, var_255_27_width,
  // top_y < view_y &top_y &height -> view_y height-(view_y-top_y)
  var_std__less, 2, var_265_1_top_y, var_257_1_view_y, 1, LOCAL(1),
  // update_if top_y < view_y &top_y &height -> view_y height-(view_y-top_y)
  var_update_if, 4, LOCAL(1), var_265_1_top_y, var_255_33_height, lambda_10, 2, var_265_1_top_y, var_255_33_height,
  // view_x+view_width &right_x -> view_x+view_width
  var_std__plus, 2, var_256_1_view_x, var_258_1_view_width, 1, LOCAL(1),
  // view_x+view_width &right_x -> view_x+view_width
  var_std__less, 2, LOCAL(1), LOCAL(4), 1, LOCAL(2),
  // update_if right_x > view_x+view_width &right_x -> view_x+view_width
  var_update_if, 3, LOCAL(2), LOCAL(4), lambda_11, 1, LOCAL(4),
  // view_y+view_height &bottom_y -> view_y+view_height
  var_std__plus, 2, var_257_1_view_y, var_259_1_view_height, 1, LOCAL(1),
  // view_y+view_height &bottom_y -> view_y+view_height
  var_std__less, 2, LOCAL(1), LOCAL(5), 1, LOCAL(2),
  // update_if bottom_y > view_y+view_height &bottom_y -> view_y+view_height
  var_update_if, 3, LOCAL(2), LOCAL(5), lambda_12, 1, LOCAL(5),
  // right_x-left_x bottom_y-top_y
  var_std__minus, 2, LOCAL(4), var_264_1_left_x, 1, LOCAL(1),
  // bottom_y-top_y
  var_std__minus, 2, LOCAL(5), var_265_1_top_y, 1, LOCAL(2),
  // -> left_x top_y right_x-left_x bottom_y-top_y
  LET, 4, var_264_1_left_x, var_265_1_top_y, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(256, 3),
  POS(257, 3),
  POS(258, 3),
  POS(259, 3),
  POS(261, 19),
  POS(261, 3),
  POS(262, 20),
  POS(262, 3),
  POS(264, 11),
  POS(264, 3),
  POS(265, 10),
  POS(265, 3),
  POS(266, 3),
  POS(267, 3),
  POS(271, 13),
  POS(271, 3),
  POS(272, 13),
  POS(272, 3),
  POS(273, 23),
  POS(273, 23),
  POS(273, 3),
  POS(274, 24),
  POS(274, 24),
  POS(274, 3),
  POS(276, 19),
  POS(276, 34),
  POS(276, 3)
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  0, // parameters
  // view_width-x+1
  var_std__minus, 2, var_258_1_view_width, var_255_23_x, 1, LOCAL(1),
  // view_width-x+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  //  view_width-x+1
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(261, 42),
  POS(261, 42),
  POS(261, 41)
};

static TAB_NUM t_lambda_8[] = {
  2, // locals
  0, // parameters
  // view_height-y+1
  var_std__minus, 2, var_259_1_view_height, var_255_25_y, 1, LOCAL(1),
  // view_height-y+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  //  view_height-y+1
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(262, 44),
  POS(262, 44),
  POS(262, 43)
};

static TAB_NUM t_lambda_9[] = {
  2, // locals
  0, // parameters
  // view_x-left_x)
  var_std__minus, 2, var_256_1_view_x, var_264_1_left_x, 1, LOCAL(1),
  // width-(view_x-left_x)
  var_std__minus, 2, var_255_27_width, LOCAL(1), 1, LOCAL(2),
  //  view_x width-(view_x-left_x)
  LET, 2, var_256_1_view_x, LOCAL(2), TAIL_CALL,
  POS(271, 61),
  POS(271, 54),
  POS(271, 46)
};

static TAB_NUM t_lambda_10[] = {
  2, // locals
  0, // parameters
  // view_y-top_y)
  var_std__minus, 2, var_257_1_view_y, var_265_1_top_y, 1, LOCAL(1),
  // height-(view_y-top_y)
  var_std__minus, 2, var_255_33_height, LOCAL(1), 1, LOCAL(2),
  //  view_y height-(view_y-top_y)
  LET, 2, var_257_1_view_y, LOCAL(2), TAIL_CALL,
  POS(272, 61),
  POS(272, 53),
  POS(272, 45)
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // view_x+view_width
  var_std__plus, 2, var_256_1_view_x, var_258_1_view_width, 1, LOCAL(1),
  //  view_x+view_width
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(273, 53),
  POS(273, 52)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // view_y+view_height
  var_std__plus, 2, var_257_1_view_y, var_259_1_view_height, 1, LOCAL(1),
  //  view_y+view_height
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(274, 56),
  POS(274, 55)
};

static TAB_NUM t_func_std_types__view___copy[] = {
  4, // locals
  -9, // parameters
  MANDATORY_PARAMETER, LOCAL(4), // 280_0_view
  MANDATORY_PARAMETER, var_281_0_destination,
  MANDATORY_PARAMETER, var_282_0_source,
  num_1, var_283_0_x,
  num_1, var_284_0_y,
  num_1, var_285_0_sx,
  num_1, var_286_0_sy,
  var_undefined, var_287_0_width,
  var_undefined, var_288_0_height,
  // is_undefined &width -> width_of(source)-sx+1
  var_is_undefined, 1, var_287_0_width, 1, LOCAL(1),
  // update_if width.is_undefined &width -> width_of(source)-sx+1
  var_update_if, 3, LOCAL(1), var_287_0_width, lambda_13, 1, var_287_0_width,
  // is_undefined &height -> height_of(source)-sy+1
  var_is_undefined, 1, var_288_0_height, 1, LOCAL(1),
  // update_if height.is_undefined &height -> height_of(source)-sy+1
  var_update_if, 3, LOCAL(1), var_288_0_height, lambda_14, 1, var_288_0_height,
  // $view_x x_of(view)
  var_x_of, 1, LOCAL(4), 1, var_292_1_view_x,
  // $view_y y_of(view)
  var_y_of, 1, LOCAL(4), 1, var_293_1_view_y,
  // $view_width width_of(view)
  var_width_of, 1, LOCAL(4), 1, var_294_1_view_width,
  // $view_height height_of(view)
  var_height_of, 1, LOCAL(4), 1, var_295_1_view_height,
  // x+view_x-1
  var_std__plus, 2, var_283_0_x, var_292_1_view_x, 1, LOCAL(1),
  // !x x+view_x-1
  var_std__minus, 2, LOCAL(1), num_1, 1, var_283_0_x,
  // y+view_y-1
  var_std__plus, 2, var_284_0_y, var_293_1_view_y, 1, LOCAL(1),
  // !y y+view_y-1
  var_std__minus, 2, LOCAL(1), num_1, 1, var_284_0_y,
  // $dx view_x-x
  var_std__minus, 2, var_292_1_view_x, var_283_0_x, 1, var_298_1_dx,
  // $dy view_y-y
  var_std__minus, 2, var_293_1_view_y, var_284_0_y, 1, var_299_1_dy,
  // 0 &x &sx &width -> view_x sx+dx width-dx
  var_std__less, 2, num_0, var_298_1_dx, 1, LOCAL(1),
  // update_if dx > 0 &x &sx &width -> view_x sx+dx width-dx
  var_update_if, 5, LOCAL(1), var_283_0_x, var_285_0_sx, var_287_0_width, lambda_15, 3, var_283_0_x, var_285_0_sx, var_287_0_width,
  // 0 &y &sy &height -> view_y sy+dy height-dy
  var_std__less, 2, num_0, var_299_1_dy, 1, LOCAL(1),
  // update_if dy > 0 &y &sy &height -> view_y sy+dy height-dy
  var_update_if, 5, LOCAL(1), var_284_0_y, var_286_0_sy, var_288_0_height, lambda_16, 3, var_284_0_y, var_286_0_sy, var_288_0_height,
  // x-view_x+width > view_width &width -> view_width-(x-view_x)
  var_std__minus, 2, var_283_0_x, var_292_1_view_x, 1, LOCAL(1),
  // x-view_x+width > view_width &width -> view_width-(x-view_x)
  var_std__plus, 2, LOCAL(1), var_287_0_width, 1, LOCAL(2),
  // view_width &width -> view_width-(x-view_x)
  var_std__less, 2, var_294_1_view_width, LOCAL(2), 1, LOCAL(3),
  // update_if x-view_x+width > view_width &width -> view_width-(x-view_x)
  var_update_if, 3, LOCAL(3), var_287_0_width, lambda_17, 1, var_287_0_width,
  // y-view_y+height > view_height &height -> view_height-(y-view_y)
  var_std__minus, 2, var_284_0_y, var_293_1_view_y, 1, LOCAL(1),
  // y-view_y+height > view_height &height -> view_height-(y-view_y)
  var_std__plus, 2, LOCAL(1), var_288_0_height, 1, LOCAL(2),
  // view_height &height -> view_height-(y-view_y)
  var_std__less, 2, var_295_1_view_height, LOCAL(2), 1, LOCAL(3),
  // update_if y-view_y+height > view_height &height -> view_height-(y-view_y)
  var_update_if, 3, LOCAL(3), var_288_0_height, lambda_18, 1, var_288_0_height,
  // 0 || height <= 0
  var_std__less, 2, num_0, var_287_0_width, 1, LOCAL(1),
  // 0 || height <= 0
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // 0 || height <= 0
  var_std__or, 2, LOCAL(2), lambda_19, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_20, lambda_21, TAIL_CALL,
  POS(290, 19),
  POS(290, 3),
  POS(291, 20),
  POS(291, 3),
  POS(292, 3),
  POS(293, 3),
  POS(294, 3),
  POS(295, 3),
  POS(296, 6),
  POS(296, 3),
  POS(297, 6),
  POS(297, 3),
  POS(298, 3),
  POS(299, 3),
  POS(300, 18),
  POS(300, 3),
  POS(301, 18),
  POS(301, 3),
  POS(302, 13),
  POS(302, 13),
  POS(302, 30),
  POS(302, 3),
  POS(303, 13),
  POS(303, 13),
  POS(303, 31),
  POS(303, 3),
  POS(305, 14),
  POS(305, 14),
  POS(305, 14),
  POS(304, 3)
};

static TAB_NUM t_lambda_13[] = {
  3, // locals
  0, // parameters
  // width_of(source)-sx+1
  var_width_of, 1, var_282_0_source, 1, LOCAL(1),
  // width_of(source)-sx+1
  var_std__minus, 2, LOCAL(1), var_285_0_sx, 1, LOCAL(2),
  // width_of(source)-sx+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  width_of(source)-sx+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(290, 42),
  POS(290, 42),
  POS(290, 42),
  POS(290, 41)
};

static TAB_NUM t_lambda_14[] = {
  3, // locals
  0, // parameters
  // height_of(source)-sy+1
  var_height_of, 1, var_282_0_source, 1, LOCAL(1),
  // height_of(source)-sy+1
  var_std__minus, 2, LOCAL(1), var_286_0_sy, 1, LOCAL(2),
  // height_of(source)-sy+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  height_of(source)-sy+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(291, 44),
  POS(291, 44),
  POS(291, 44),
  POS(291, 43)
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // sx+dx width-dx
  var_std__plus, 2, var_285_0_sx, var_298_1_dx, 1, LOCAL(1),
  // width-dx
  var_std__minus, 2, var_287_0_width, var_298_1_dx, 1, LOCAL(2),
  //  view_x sx+dx width-dx
  LET, 3, var_292_1_view_x, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(300, 44),
  POS(300, 50),
  POS(300, 36)
};

static TAB_NUM t_lambda_16[] = {
  2, // locals
  0, // parameters
  // sy+dy height-dy
  var_std__plus, 2, var_286_0_sy, var_299_1_dy, 1, LOCAL(1),
  // height-dy
  var_std__minus, 2, var_288_0_height, var_299_1_dy, 1, LOCAL(2),
  //  view_y sy+dy height-dy
  LET, 3, var_293_1_view_y, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(301, 45),
  POS(301, 51),
  POS(301, 37)
};

static TAB_NUM t_lambda_17[] = {
  2, // locals
  0, // parameters
  // x-view_x)
  var_std__minus, 2, var_283_0_x, var_292_1_view_x, 1, LOCAL(1),
  // view_width-(x-view_x)
  var_std__minus, 2, var_294_1_view_width, LOCAL(1), 1, LOCAL(2),
  //  view_width-(x-view_x)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(302, 63),
  POS(302, 51),
  POS(302, 50)
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  0, // parameters
  // y-view_y)
  var_std__minus, 2, var_284_0_y, var_293_1_view_y, 1, LOCAL(1),
  // view_height-(y-view_y)
  var_std__minus, 2, var_295_1_view_height, LOCAL(1), 1, LOCAL(2),
  //  view_height-(y-view_y)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(303, 67),
  POS(303, 54),
  POS(303, 53)
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  0, // parameters
  // 0
  var_std__less, 2, num_0, var_288_0_height, 1, LOCAL(1),
  // 0
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // height <= 0
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(305, 29),
  POS(305, 29),
  POS(305, 19)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  destination
  LET, 1, var_281_0_destination, TAIL_CALL,
  POS(306, 7)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  // copy
  var_copy, 8, var_281_0_destination, var_282_0_source, var_283_0_x, var_284_0_y, var_285_0_sx, var_286_0_sy, var_287_0_width, var_288_0_height, TAIL_CALL,
  POS(308, 7)
};

static TAB_NUM t_func_std__create_vertical_panes[] = {
  0, // locals
  2, // parameters
  var_320_0_screen,
  var_321_0_pane_description,
  // $rc result_count()
  var_result_count, 0, 1, var_323_1_rc,
  // $x x_of(screen)
  var_x_of, 1, var_320_0_screen, 1, var_324_1_x,
  // $y y_of(screen)
  var_y_of, 1, var_320_0_screen, 1, var_325_1_y,
  // $width width_of(screen)
  var_width_of, 1, var_320_0_screen, 1, var_326_1_width,
  // $height height_of(screen)
  var_height_of, 1, var_320_0_screen, 1, var_327_1_height,
  // $views empty_list
  LET, 1, var_empty_list, 1, var_328_1_views,
  // cond
  var_cond, 3, lambda_22, lambda_25, lambda_35, TAIL_CALL,
  POS(323, 3),
  POS(324, 3),
  POS(325, 3),
  POS(326, 3),
  POS(327, 3),
  POS(328, 3),
  POS(329, 3)
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // is_an_integer:
  var_is_an_integer, 1, var_321_0_pane_description, 1, LOCAL(1),
  //  pane_description.is_an_integer:
  LET, 2, LOCAL(1), lambda_23, TAIL_CALL,
  POS(330, 25),
  POS(330, 7)
};

static TAB_NUM t_lambda_23[] = {
  3, // locals
  0, // parameters
  // $n pane_description
  LET, 1, var_321_0_pane_description, 1, LOCAL(3),
  // n+1 x x+width)
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // x+width)
  var_std__plus, 2, var_324_1_x, var_326_1_width, 1, LOCAL(2),
  // $iter bresenham(n+1 x x+width)
  var_bresenham, 3, LOCAL(1), var_324_1_x, LOCAL(2), 1, var_332_1_iter,
  // next_value &iter !x
  var_next_value, 1, var_332_1_iter, 2, var_332_1_iter, var_324_1_x,
  // repeat n
  var_repeat, 3, LOCAL(3), lambda_24, func_return, TAIL_CALL,
  POS(331, 7),
  POS(332, 23),
  POS(332, 29),
  POS(332, 7),
  POS(333, 7),
  POS(334, 7)
};

static TAB_NUM t_lambda_24[] = {
  3, // locals
  0, // parameters
  // next_value &iter $next_x
  var_next_value, 1, var_332_1_iter, 2, var_332_1_iter, LOCAL(3),
  // next_x-1 height)
  var_std__minus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // create_view(screen x y next_x-1 height)
  var_create_view, 5, var_320_0_screen, var_324_1_x, var_325_1_y, LOCAL(1), var_327_1_height, 1, LOCAL(2),
  // push &views create_view(screen x y next_x-1 height)
  var_push, 2, var_328_1_views, LOCAL(2), 1, var_328_1_views,
  // !x next_x
  LET, 1, LOCAL(3), 1, var_324_1_x,
  // next
  var_next, 0, TAIL_CALL,
  POS(336, 11),
  POS(337, 46),
  POS(337, 23),
  POS(337, 11),
  POS(338, 11),
  POS(339, 11)
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_321_0_pane_description, 1, LOCAL(1),
  //  pane_description.is_a_list:
  LET, 2, LOCAL(1), lambda_26, TAIL_CALL,
  POS(341, 25),
  POS(341, 7)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  // $fixed_width 0
  LET, 1, num_0, 1, var_342_1_fixed_width,
  // $flex_width_count 0
  LET, 1, num_0, 1, var_343_1_flex_width_count,
  // for_each pane_description
  var_for_each, 3, var_321_0_pane_description, lambda_27, lambda_30, TAIL_CALL,
  POS(342, 7),
  POS(343, 7),
  POS(344, 7)
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  1, // parameters
  var_345_3_pane_width,
  // pane_width < 1:
  var_std__less, 2, var_345_3_pane_width, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_28, lambda_29, TAIL_CALL,
  POS(347, 13),
  POS(346, 11)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  // inc &flex_width_count
  var_inc, 1, var_343_1_flex_width_count, 1, var_343_1_flex_width_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(348, 15),
  POS(349, 15)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  // plus &fixed_width pane_width
  var_plus, 2, var_342_1_fixed_width, var_345_3_pane_width, 1, var_342_1_fixed_width,
  // next
  var_next, 0, TAIL_CALL,
  POS(351, 15),
  POS(352, 15)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // fixed_width+flex_width_count > width
  var_std__plus, 2, var_342_1_fixed_width, var_343_1_flex_width_count, 1, LOCAL(1),
  // width
  var_std__less, 2, var_326_1_width, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_31, lambda_32, TAIL_CALL,
  POS(355, 13),
  POS(355, 44),
  POS(354, 11)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(356, 15)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  // $flex_width width-fixed_width
  var_std__minus, 2, var_326_1_width, var_342_1_fixed_width, 1, var_358_1_flex_width,
  // $remaining_flex_width flex_width
  LET, 1, var_358_1_flex_width, 1, var_359_1_remaining_flex_width,
  // for_each pane_description
  var_for_each, 3, var_321_0_pane_description, lambda_33, func_return, TAIL_CALL,
  POS(358, 15),
  POS(359, 15),
  POS(360, 15)
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  1, // parameters
  var_361_3_pane_width,
  // pane_width < 1:
  var_std__less, 2, var_361_3_pane_width, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, func_create_pane_view, TAIL_CALL,
  POS(363, 21),
  POS(362, 19)
};

static TAB_NUM t_lambda_34[] = {
  5, // locals
  0, // parameters
  // dec &flex_width_count
  var_dec, 1, var_343_1_flex_width_count, 1, var_343_1_flex_width_count,
  // pane_width*flex_width).to_integer 1)
  var_std__times, 2, var_361_3_pane_width, var_358_1_flex_width, 1, LOCAL(1),
  // round(pane_width*flex_width).to_integer 1)
  var_round, 1, LOCAL(1), 1, LOCAL(2),
  // to_integer 1)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(3),
  // max(round(pane_width*flex_width).to_integer 1)
  var_max, 2, LOCAL(3), num_1, 1, LOCAL(4),
  // remaining_flex_width-flex_width_count #
  var_std__minus, 2, var_359_1_remaining_flex_width, var_343_1_flex_width_count, 1, LOCAL(5),
  // !pane_width
  var_min, 2, LOCAL(4), LOCAL(5), 1, var_361_3_pane_width,
  // minus &remaining_flex_width pane_width
  var_minus, 2, var_359_1_remaining_flex_width, var_361_3_pane_width, 1, var_359_1_remaining_flex_width,
  // create_pane_view
  func_create_pane_view, 0, TAIL_CALL,
  POS(364, 23),
  POS(367, 37),
  POS(367, 31),
  POS(367, 60),
  POS(367, 27),
  POS(368, 27),
  POS(365, 23),
  POS(372, 23),
  POS(373, 23)
};

static TAB_NUM t_func_create_pane_view[] = {
  3, // locals
  0, // parameters
  // x+pane_width-1 height)
  var_std__plus, 2, var_324_1_x, var_361_3_pane_width, 1, LOCAL(1),
  // x+pane_width-1 height)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // create_view(screen x y x+pane_width-1 height)
  var_create_view, 5, var_320_0_screen, var_324_1_x, var_325_1_y, LOCAL(2), var_327_1_height, 1, LOCAL(3),
  // push &views create_view(screen x y x+pane_width-1 height)
  var_push, 2, var_328_1_views, LOCAL(3), 1, var_328_1_views,
  // plus &x pane_width
  var_plus, 2, var_324_1_x, var_361_3_pane_width, 1, var_324_1_x,
  // next
  var_next, 0, TAIL_CALL,
  POS(377, 56),
  POS(377, 56),
  POS(377, 33),
  POS(377, 21),
  POS(378, 21),
  POS(379, 21)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  //  true -> undefined
  LET, 2, var_true, lambda_36, TAIL_CALL,
  POS(381, 7)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(381, 15)
};

static TAB_NUM t_func_return[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_323_1_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_37, lambda_38, TAIL_CALL,
  POS(385, 7),
  POS(384, 5)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  //  views
  LET, 1, var_328_1_views, TAIL_CALL,
  POS(386, 9)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  // spread views
  var_spread, 1, var_328_1_views, TAIL_CALL,
  POS(387, 9)
};

static TAB_NUM t_func_std__create_horizontal_panes[] = {
  0, // locals
  2, // parameters
  var_391_0_screen,
  var_392_0_pane_description,
  // $rc result_count()
  var_result_count, 0, 1, var_394_1_rc,
  // $x x_of(screen)
  var_x_of, 1, var_391_0_screen, 1, var_395_1_x,
  // $y y_of(screen)
  var_y_of, 1, var_391_0_screen, 1, var_396_1_y,
  // $width width_of(screen)
  var_width_of, 1, var_391_0_screen, 1, var_397_1_width,
  // $height height_of(screen)
  var_height_of, 1, var_391_0_screen, 1, var_398_1_height,
  // $views empty_list
  LET, 1, var_empty_list, 1, var_399_1_views,
  // cond
  var_cond, 3, lambda_39, lambda_42, lambda_54, TAIL_CALL,
  POS(394, 3),
  POS(395, 3),
  POS(396, 3),
  POS(397, 3),
  POS(398, 3),
  POS(399, 3),
  POS(400, 3)
};

static TAB_NUM t_lambda_39[] = {
  1, // locals
  0, // parameters
  // is_an_integer:
  var_is_an_integer, 1, var_392_0_pane_description, 1, LOCAL(1),
  //  pane_description.is_an_integer:
  LET, 2, LOCAL(1), lambda_40, TAIL_CALL,
  POS(401, 25),
  POS(401, 7)
};

static TAB_NUM t_lambda_40[] = {
  3, // locals
  0, // parameters
  // $n pane_description
  LET, 1, var_392_0_pane_description, 1, LOCAL(3),
  // n+1 y y+height)
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // y+height)
  var_std__plus, 2, var_396_1_y, var_398_1_height, 1, LOCAL(2),
  // $iter bresenham(n+1 y y+height)
  var_bresenham, 3, LOCAL(1), var_396_1_y, LOCAL(2), 1, var_403_1_iter,
  // next_value &iter !y
  var_next_value, 1, var_403_1_iter, 2, var_403_1_iter, var_396_1_y,
  // repeat n
  var_repeat, 3, LOCAL(3), lambda_41, func_2_return, TAIL_CALL,
  POS(402, 7),
  POS(403, 23),
  POS(403, 29),
  POS(403, 7),
  POS(404, 7),
  POS(405, 7)
};

static TAB_NUM t_lambda_41[] = {
  3, // locals
  0, // parameters
  // next_value &iter $next_y
  var_next_value, 1, var_403_1_iter, 2, var_403_1_iter, LOCAL(3),
  // next_y-1)
  var_std__minus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // create_view(screen x y width next_y-1)
  var_create_view, 5, var_391_0_screen, var_395_1_x, var_396_1_y, var_397_1_width, LOCAL(1), 1, LOCAL(2),
  // push &views create_view(screen x y width next_y-1)
  var_push, 2, var_399_1_views, LOCAL(2), 1, var_399_1_views,
  // !y next_y
  LET, 1, LOCAL(3), 1, var_396_1_y,
  // next
  var_next, 0, TAIL_CALL,
  POS(407, 11),
  POS(408, 52),
  POS(408, 23),
  POS(408, 11),
  POS(409, 11),
  POS(410, 11)
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_392_0_pane_description, 1, LOCAL(1),
  //  pane_description.is_a_list:
  LET, 2, LOCAL(1), lambda_43, TAIL_CALL,
  POS(412, 25),
  POS(412, 7)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  // $fixed_height 0
  LET, 1, num_0, 1, var_413_1_fixed_height,
  // $flex_height_count 0
  LET, 1, num_0, 1, var_414_1_flex_height_count,
  // for_each pane_description
  var_for_each, 3, var_392_0_pane_description, lambda_44, lambda_47, TAIL_CALL,
  POS(413, 7),
  POS(414, 7),
  POS(415, 7)
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  1, // parameters
  var_416_3_pane_height,
  // pane_height < 1:
  var_std__less, 2, var_416_3_pane_height, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_45, lambda_46, TAIL_CALL,
  POS(418, 13),
  POS(417, 11)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  // inc &flex_height_count
  var_inc, 1, var_414_1_flex_height_count, 1, var_414_1_flex_height_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(419, 15),
  POS(420, 15)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  // plus &fixed_height pane_height
  var_plus, 2, var_413_1_fixed_height, var_416_3_pane_height, 1, var_413_1_fixed_height,
  // next
  var_next, 0, TAIL_CALL,
  POS(422, 15),
  POS(423, 15)
};

static TAB_NUM t_lambda_47[] = {
  2, // locals
  0, // parameters
  // fixed_height+flex_height_count > height
  var_std__plus, 2, var_413_1_fixed_height, var_414_1_flex_height_count, 1, LOCAL(1),
  // height
  var_std__less, 2, var_398_1_height, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_48, lambda_49, TAIL_CALL,
  POS(426, 13),
  POS(426, 46),
  POS(425, 11)
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(427, 15)
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  // $flex_height height-fixed_height
  var_std__minus, 2, var_398_1_height, var_413_1_fixed_height, 1, var_429_1_flex_height,
  // $remaining_flex_height flex_height
  LET, 1, var_429_1_flex_height, 1, var_430_1_remaining_flex_height,
  // for_each pane_description
  var_for_each, 3, var_392_0_pane_description, lambda_50, func_2_return, TAIL_CALL,
  POS(429, 15),
  POS(430, 15),
  POS(431, 15)
};

static TAB_NUM t_lambda_50[] = {
  1, // locals
  1, // parameters
  var_432_3_pane_height,
  // pane_height < 1:
  var_std__less, 2, var_432_3_pane_height, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_51, func_2_create_pane_view, TAIL_CALL,
  POS(434, 21),
  POS(433, 19)
};

static TAB_NUM t_lambda_51[] = {
  1, // locals
  0, // parameters
  // dec &flex_height_count
  var_dec, 1, var_414_1_flex_height_count, 1, var_414_1_flex_height_count,
  // flex_height_count == 0
  var_std__equal, 2, var_414_1_flex_height_count, num_0, 1, LOCAL(1),
  // !pane_height
  var_if, 3, LOCAL(1), lambda_52, lambda_53, 1, var_432_3_pane_height,
  // minus &remaining_flex_height pane_height
  var_minus, 2, var_430_1_remaining_flex_height, var_432_3_pane_height, 1, var_430_1_remaining_flex_height,
  // create_pane_view
  func_2_create_pane_view, 0, TAIL_CALL,
  POS(435, 23),
  POS(438, 27),
  POS(436, 23),
  POS(447, 23),
  POS(448, 23)
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  //  flex_height
  LET, 1, var_429_1_flex_height, TAIL_CALL,
  POS(439, 29)
};

static TAB_NUM t_lambda_53[] = {
  6, // locals
  0, // parameters
  // pane_height*flex_height).to_integer 1)
  var_std__times, 2, var_432_3_pane_height, var_429_1_flex_height, 1, LOCAL(1),
  // round(pane_height*flex_height).to_integer 1)
  var_round, 1, LOCAL(1), 1, LOCAL(2),
  // to_integer 1)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(3),
  // max(round(pane_height*flex_height).to_integer 1)
  var_max, 2, LOCAL(3), num_1, 1, LOCAL(4),
  // remaining_flex_height-flex_height_count #
  var_std__minus, 2, var_430_1_remaining_flex_height, var_414_1_flex_height_count, 1, LOCAL(5),
  // min
  var_min, 2, LOCAL(4), LOCAL(5), 1, LOCAL(6),
  // 
  LET, 1, LOCAL(6), TAIL_CALL,
  POS(442, 41),
  POS(442, 35),
  POS(442, 66),
  POS(442, 31),
  POS(443, 31),
  POS(441, 29),
  POS(440, 29)
};

static TAB_NUM t_func_2_create_pane_view[] = {
  3, // locals
  0, // parameters
  // y+pane_height-1)
  var_std__plus, 2, var_396_1_y, var_432_3_pane_height, 1, LOCAL(1),
  // y+pane_height-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // create_view(screen x y width y+pane_height-1)
  var_create_view, 5, var_391_0_screen, var_395_1_x, var_396_1_y, var_397_1_width, LOCAL(2), 1, LOCAL(3),
  // push &views create_view(screen x y width y+pane_height-1)
  var_push, 2, var_399_1_views, LOCAL(3), 1, var_399_1_views,
  // plus &y pane_height
  var_plus, 2, var_396_1_y, var_432_3_pane_height, 1, var_396_1_y,
  // next
  var_next, 0, TAIL_CALL,
  POS(452, 62),
  POS(452, 62),
  POS(452, 33),
  POS(452, 21),
  POS(453, 21),
  POS(454, 21)
};

static TAB_NUM t_lambda_54[] = {
  0, // locals
  0, // parameters
  //  true -> undefined
  LET, 2, var_true, lambda_55, TAIL_CALL,
  POS(456, 7)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(456, 15)
};

static TAB_NUM t_func_2_return[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_394_1_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_56, lambda_57, TAIL_CALL,
  POS(460, 7),
  POS(459, 5)
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  //  views
  LET, 1, var_399_1_views, TAIL_CALL,
  POS(461, 9)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  // spread views
  var_spread, 1, var_399_1_views, TAIL_CALL,
  POS(462, 9)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_UNIQUE, 0, {.str_8 = "std::DRAW_COLOUR"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::CLEAR_COLOUR"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::TEXT_ATTRIBUTES"}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_POSITIVE_INT64, 0, {.value = 8}},
  {FLT_UNIQUE, 0, {.str_8 = "std::KEY_PRESS"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::MOUSE_CLICK"}},
  {FLT_UNIQUE, 0, {.str_8 = "std::MOUSE_RELEASE"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_basic_private__abs_x}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_basic_private__abs_y}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__create_view}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_terminal___set_clear_colour}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_terminal___set_draw_colour}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_terminal___set_text_attributes}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_terminal___add_text_attributes}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_terminal___remove_text_attributes}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__view___draw_text}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__view___draw_attributed_text}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__view___clear}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__view___invert}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__view___draw_shadow}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_clip_rectangle}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__view___copy}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__create_vertical_panes}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_create_pane_view}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_return}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__create_horizontal_panes}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_create_pane_view}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_return}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}}
};

static ATTRIBUTE_DEFINITION std_types__generic_terminal__attributes[] = {
  {-var_type_of, -var_undefined},
  {-var_x_of, -num_1},
  {-var_y_of, -num_1},
  {-var_plot_x_resolution_of, -num_1},
  {-var_plot_y_resolution_of, -num_1},
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
  {-var_text_attributes_of, -num_0},
  {var_set_clear_colour, -func_std_types__generic_terminal___set_clear_colour},
  {var_set_draw_colour, -func_std_types__generic_terminal___set_draw_colour},
  {var_set_text_attributes, -func_std_types__generic_terminal___set_text_attributes},
  {var_add_text_attributes, -func_std_types__generic_terminal___add_text_attributes},
  {var_remove_text_attributes, -func_std_types__generic_terminal___remove_text_attributes}
};

static ATTRIBUTE_DEFINITION std_types__view__attributes[] = {
  {var_draw_text, -func_std_types__view___draw_text},
  {var_draw_attributed_text, -func_std_types__view___draw_attributed_text},
  {var_clear, -func_std_types__view___clear},
  {var_invert, -func_std_types__view___invert},
  {var_draw_shadow, -func_std_types__view___draw_shadow},
  {var_copy, -func_std_types__view___copy}
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
    {.position = POS(25, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "y_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "plot_x_resolution_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "plot_y_resolution_of\000std", NULL,
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
    "set_text_attributes\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "add_text_attributes\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "remove_text_attributes\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DRAW_COLOUR\000std", NULL,
    {.const_idx = -uni_std__DRAW_COLOUR}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "CLEAR_COLOUR\000std", NULL,
    {.const_idx = -uni_std__CLEAR_COLOUR}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "TEXT_ATTRIBUTES\000std", NULL,
    {.const_idx = -uni_std__TEXT_ATTRIBUTES}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "NORMAL\000std", NULL,
    {.const_idx = -num_0}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "BOLD\000std", NULL,
    {.const_idx = -num_1}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ITALIC\000std", NULL,
    {.const_idx = -num_2}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "UNDERLINE\000std", NULL,
    {.const_idx = -num_4}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "STRIKETHROUGH\000std", NULL,
    {.const_idx = -num_8}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "KEY_PRESS\000std", NULL,
    {.const_idx = -uni_std__KEY_PRESS}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MOUSE_CLICK\000std", NULL,
    {.const_idx = -uni_std__MOUSE_CLICK}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MOUSE_RELEASE\000std", NULL,
    {.const_idx = -uni_std__MOUSE_RELEASE}
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
    FOT_POLYMORPHIC, 0, 0,
    "invert\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "draw_shadow\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "copy\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "adjoin\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_DERIVED, 0, 22,
    "generic_terminal\000std_types", std_types__generic_terminal__attributes,
    {"resource\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "resource\000std_types", NULL,
    {.position = POS(78, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "type_of\000", NULL,
    {.position = POS(80, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(80, 38)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "x_of\000", NULL,
    {.position = POS(81, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "y_of\000", NULL,
    {.position = POS(82, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "plot_x_resolution_of\000", NULL,
    {.position = POS(83, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "plot_y_resolution_of\000", NULL,
    {.position = POS(84, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "width_of\000", NULL,
    {.position = POS(85, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "height_of\000", NULL,
    {.position = POS(86, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "character_width_of\000", NULL,
    {.position = POS(87, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "ascent_of\000", NULL,
    {.position = POS(88, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "descent_of\000", NULL,
    {.position = POS(89, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "character_height_of\000", NULL,
    {.position = POS(90, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "line_spacing_of\000", NULL,
    {.position = POS(91, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "line_height_of\000", NULL,
    {.position = POS(92, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "baseline_of\000", NULL,
    {.position = POS(93, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "clear_colour_of\000", NULL,
    {.position = POS(94, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "draw_colour_of\000", NULL,
    {.position = POS(95, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "text_attributes_of\000", NULL,
    {.position = POS(96, 30)}
  },
  {
    FOT_DERIVED, 0, 6,
    "view\000std_types", std_types__view__attributes,
    {"generic_terminal\000std_types"}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "abs_x\000basic_private", NULL,
    {.const_idx = -func_basic_private__abs_x}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "100_24_screen\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "100_31_x\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(102, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(103, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(101, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "abs_y\000basic_private", NULL,
    {.const_idx = -func_basic_private__abs_y}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "106_24_screen\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "106_31_y\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_view\000std", NULL,
    {.const_idx = -func_std__create_view}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(126, 13)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "set_clear_colour\000", NULL,
    {.position = POS(140, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "set_draw_colour\000", NULL,
    {.position = POS(147, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "set_text_attributes\000", NULL,
    {.position = POS(154, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "add_text_attributes\000", NULL,
    {.position = POS(161, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_or\000std", NULL,
    {.position = POS(166, 35)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "remove_text_attributes\000", NULL,
    {.position = POS(168, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(175, 58)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000std", NULL,
    {.position = POS(175, 27)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "draw_text\000basic_private", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "draw_attributed_text\000basic_private", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "clear\000basic_private", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "draw_text\000", NULL,
    {.position = POS(181, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(189, 9)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "draw_attributed_text\000", NULL,
    {.position = POS(197, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "clear\000", NULL,
    {.position = POS(212, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "214_0_view\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "216_0_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "217_0_y\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(221, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(221, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "invert\000", NULL,
    {.position = POS(231, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "draw_shadow\000", NULL,
    {.position = POS(243, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "255_23_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "255_25_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "255_27_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "255_33_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "256_1_view_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "257_1_view_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "258_1_view_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "259_1_view_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "264_1_left_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "265_1_top_y\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "copy\000", NULL,
    {.position = POS(278, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "281_0_destination\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "282_0_source\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "283_0_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "284_0_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "285_0_sx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "286_0_sy\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "287_0_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "288_0_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "292_1_view_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "293_1_view_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "294_1_view_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "295_1_view_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "298_1_dx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "299_1_dy\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(305, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(305, 14)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_vertical_panes\000std", NULL,
    {.const_idx = -func_std__create_vertical_panes}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "320_0_screen\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "321_0_pane_description\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "323_1_rc\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(323, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "324_1_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "325_1_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "326_1_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "327_1_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "328_1_views\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(328, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_integer\000", NULL,
    {.position = POS(330, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "332_1_iter\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bresenham\000", NULL,
    {.position = POS(332, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next_value\000", NULL,
    {.position = POS(333, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_view\000", NULL,
    {.position = POS(337, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(337, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(339, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "repeat\000", NULL,
    {.position = POS(334, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(341, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "342_1_fixed_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "343_1_flex_width_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "345_3_pane_width\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(348, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(351, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "358_1_flex_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "359_1_remaining_flex_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "361_3_pane_width\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(364, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(367, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "round\000", NULL,
    {.position = POS(367, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(367, 60)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(367, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "min\000", NULL,
    {.position = POS(366, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000", NULL,
    {.position = POS(372, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(360, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(381, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(329, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(385, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spread\000", NULL,
    {.position = POS(387, 9)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_horizontal_panes\000std", NULL,
    {.const_idx = -func_std__create_horizontal_panes}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "391_0_screen\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "392_0_pane_description\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "394_1_rc\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "395_1_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "396_1_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "397_1_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "398_1_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "399_1_views\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "403_1_iter\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "413_1_fixed_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "414_1_flex_height_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "416_3_pane_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "429_1_flex_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "430_1_remaining_flex_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "432_3_pane_height\000", NULL
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
  89, // number of constants
  174, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
