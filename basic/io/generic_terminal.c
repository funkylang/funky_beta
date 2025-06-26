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
  func_std_types__generic_terminal___get_clear_colour = -24,
  func_std_types__generic_terminal___get_draw_colour = -25,
  func_std_types__generic_terminal___get_text_attributes = -26,
  func_std_types__generic_terminal___move = -27,
  func_std_types__view___draw_text = -28,
  func_std_types__view___draw_attributed_text = -29,
  func_std_types__view___clear = -30,
  lambda_5 = -31,
  lambda_6 = -32,
  func_std_types__view___invert = -33,
  func_std_types__view___draw_shadow = -34,
  func_clip_rectangle = -35,
  lambda_7 = -36,
  lambda_8 = -37,
  lambda_9 = -38,
  lambda_10 = -39,
  lambda_11 = -40,
  lambda_12 = -41,
  func_std_types__view___copy = -42,
  lambda_13 = -43,
  lambda_14 = -44,
  lambda_15 = -45,
  lambda_16 = -46,
  lambda_17 = -47,
  lambda_18 = -48,
  lambda_19 = -49,
  lambda_20 = -50,
  lambda_21 = -51,
  func_std__create_vertical_panes = -52,
  lambda_22 = -53,
  lambda_23 = -54,
  lambda_24 = -55,
  lambda_25 = -56,
  lambda_26 = -57,
  lambda_27 = -58,
  lambda_28 = -59,
  lambda_29 = -60,
  lambda_30 = -61,
  lambda_31 = -62,
  lambda_32 = -63,
  lambda_33 = -64,
  lambda_34 = -65,
  func_create_pane_view = -66,
  lambda_35 = -67,
  lambda_36 = -68,
  func_return = -69,
  lambda_37 = -70,
  lambda_38 = -71,
  func_std__create_horizontal_panes = -72,
  lambda_39 = -73,
  lambda_40 = -74,
  lambda_41 = -75,
  lambda_42 = -76,
  lambda_43 = -77,
  lambda_44 = -78,
  lambda_45 = -79,
  lambda_46 = -80,
  lambda_47 = -81,
  lambda_48 = -82,
  lambda_49 = -83,
  lambda_50 = -84,
  lambda_51 = -85,
  lambda_52 = -86,
  lambda_53 = -87,
  func_2_create_pane_view = -88,
  lambda_54 = -89,
  lambda_55 = -90,
  func_2_return = -91,
  lambda_56 = -92,
  lambda_57 = -93
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
  var_std__get_draw_colour, // attribute
  var_std__get_clear_colour, // attribute
  var_std__get_text_attributes, // attribute
  var_std__move, // attribute
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
  var_std__fill_rectangle, // attribute
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
  var_106_25_screen, // dynamic
  var_106_32_x, // dynamic
  var_std__less, // extern
  var_std__plus, // extern
  var_if, // extern
  var_basic_private__abs_y, // initialized
  var_112_25_screen, // dynamic
  var_112_32_y, // dynamic
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
  var_get_clear_colour, // extern polymorphic
  var_get_draw_colour, // extern polymorphic
  var_get_text_attributes, // extern polymorphic
  var_move, // extern polymorphic
  var_copy, // extern polymorphic
  var_basic_private__draw_text, // attribute
  var_basic_private__draw_attributed_text, // attribute
  var_basic_private__clear, // attribute
  var_draw_text, // extern polymorphic
  var_create_string, // extern
  var_draw_attributed_text, // extern polymorphic
  var_clear, // extern polymorphic
  var_250_5_view, // dynamic
  var_252_5_x, // dynamic
  var_253_5_y, // dynamic
  var_is_undefined, // extern
  var_update_if, // extern
  var_invert, // extern polymorphic
  var_draw_shadow, // extern polymorphic
  var_291_24_x, // dynamic
  var_291_26_y, // dynamic
  var_291_28_width, // dynamic
  var_291_34_height, // dynamic
  var_292_4_view_x, // dynamic
  var_293_4_view_y, // dynamic
  var_294_4_view_width, // dynamic
  var_295_4_view_height, // dynamic
  var_300_4_left_x, // dynamic
  var_301_4_top_y, // dynamic
  var_317_5_destination, // dynamic
  var_318_5_source, // dynamic
  var_319_5_x, // dynamic
  var_320_5_y, // dynamic
  var_321_5_sx, // dynamic
  var_322_5_sy, // dynamic
  var_323_5_width, // dynamic
  var_324_5_height, // dynamic
  var_328_4_view_x, // dynamic
  var_329_4_view_y, // dynamic
  var_330_4_view_width, // dynamic
  var_331_4_view_height, // dynamic
  var_334_4_dx, // dynamic
  var_335_4_dy, // dynamic
  var_std__not, // extern
  var_std__or, // extern
  var_std__create_vertical_panes, // initialized
  var_356_5_screen, // dynamic
  var_357_5_pane_description, // dynamic
  var_359_4_rc, // dynamic
  var_result_count, // extern
  var_360_4_x, // dynamic
  var_361_4_y, // dynamic
  var_362_4_width, // dynamic
  var_363_4_height, // dynamic
  var_364_4_views, // dynamic
  var_empty_list, // extern
  var_is_an_integer, // extern
  var_368_8_iter, // dynamic
  var_bresenham, // extern
  var_next_value, // extern
  var_create_view, // extern
  var_push, // extern
  var_next, // extern
  var_repeat, // extern
  var_is_a_list, // extern
  var_378_8_fixed_width, // dynamic
  var_379_8_flex_width_count, // dynamic
  var_381_12_pane_width, // dynamic
  var_inc, // extern
  var_plus, // extern
  var_394_16_flex_width, // dynamic
  var_395_16_remaining_flex_width, // dynamic
  var_397_20_pane_width, // dynamic
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
  var_427_5_screen, // dynamic
  var_428_5_pane_description, // dynamic
  var_430_4_rc, // dynamic
  var_431_4_x, // dynamic
  var_432_4_y, // dynamic
  var_433_4_width, // dynamic
  var_434_4_height, // dynamic
  var_435_4_views, // dynamic
  var_439_8_iter, // dynamic
  var_449_8_fixed_height, // dynamic
  var_450_8_flex_height_count, // dynamic
  var_452_12_pane_height, // dynamic
  var_465_16_flex_height, // dynamic
  var_466_16_remaining_flex_height, // dynamic
  var_468_20_pane_height, // dynamic
  var__END
};


static TAB_NUM t_func_basic_private__abs_x[] = {
  1, // locals
  2, // parameters
  var_106_25_screen,
  var_106_32_x,
  // x < 0
  var_std__less, 2, var_106_32_x, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(108, 5),
  POS(107, 3)
};

static FUNCTION_INFO i_func_basic_private__abs_x = {
  t_func_basic_private__abs_x, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  3, // locals
  0, // parameters
  // width_of(screen)+x+1
  var_width_of, 1, var_106_25_screen, 1, LOCAL(1),
  // width_of(screen)+x+1
  var_std__plus, 2, LOCAL(1), var_106_32_x, 1, LOCAL(2),
  // width_of(screen)+x+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  width_of(screen)+x+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(109, 8),
  POS(109, 8),
  POS(109, 8),
  POS(109, 7)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  x
  LET, 1, var_106_32_x, TAIL_CALL,
  POS(110, 7)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_basic_private__abs_y[] = {
  1, // locals
  2, // parameters
  var_112_25_screen,
  var_112_32_y,
  // y < 0
  var_std__less, 2, var_112_32_y, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(114, 5),
  POS(113, 3)
};

static FUNCTION_INFO i_func_basic_private__abs_y = {
  t_func_basic_private__abs_y, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  3, // locals
  0, // parameters
  // height_of(screen)+y+1
  var_height_of, 1, var_112_25_screen, 1, LOCAL(1),
  // height_of(screen)+y+1
  var_std__plus, 2, LOCAL(1), var_112_32_y, 1, LOCAL(2),
  // height_of(screen)+y+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  height_of(screen)+y+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(115, 8),
  POS(115, 8),
  POS(115, 8),
  POS(115, 7)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  y
  LET, 1, var_112_32_y, TAIL_CALL,
  POS(116, 7)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__create_view[] = {
  25, // locals
  5, // parameters
  LOCAL(21), // 120_5_screen
  LOCAL(22), // 121_5_left_x
  LOCAL(23), // 122_5_top_y
  LOCAL(24), // 123_5_right_x
  LOCAL(25), // 124_5_bottom_y
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
  POS(126, 3),
  POS(127, 3),
  POS(128, 3),
  POS(129, 3),
  POS(132, 13),
  POS(132, 13),
  POS(132, 13),
  POS(133, 13),
  POS(133, 13),
  POS(133, 13),
  POS(134, 18),
  POS(134, 18),
  POS(135, 19),
  POS(135, 19),
  POS(136, 27),
  POS(137, 18),
  POS(138, 19),
  POS(139, 28),
  POS(140, 24),
  POS(141, 23),
  POS(142, 20),
  POS(143, 24),
  POS(144, 23),
  POS(131, 5),
  POS(130, 3),
  LOCAL(22),
  LOCAL(23),
  LOCAL(25),
  LOCAL(21),
  LOCAL(24)
};

static FUNCTION_INFO i_func_std__create_view = {
  t_func_std__create_view, NULL, 25, 5,
  {"121_5_left_x\000", "122_5_top_y\000", "124_5_bottom_y\000", "120_5_screen\000", "123_5_right_x\000"}
};

static TAB_NUM t_func_std_types__generic_terminal___set_clear_colour[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 148_5_terminal
  LOCAL(3), // 149_5_colour
  // .clear_colour_of colour)
  LET, -1, LOCAL(2), var_clear_colour_of, LOCAL(3), LOCAL(1),
  // -> terminal(.clear_colour_of colour)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(151, 15),
  POS(151, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__generic_terminal___set_clear_colour = {
  t_func_std_types__generic_terminal___set_clear_colour, NULL, 2, 2,
  {"148_5_terminal\000", "149_5_colour\000"}
};

static TAB_NUM t_func_std_types__generic_terminal___set_draw_colour[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 155_5_terminal
  LOCAL(3), // 156_5_colour
  // .draw_colour_of colour)
  LET, -1, LOCAL(2), var_draw_colour_of, LOCAL(3), LOCAL(1),
  // -> terminal(.draw_colour_of colour)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(158, 15),
  POS(158, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__generic_terminal___set_draw_colour = {
  t_func_std_types__generic_terminal___set_draw_colour, NULL, 2, 2,
  {"155_5_terminal\000", "156_5_colour\000"}
};

static TAB_NUM t_func_std_types__generic_terminal___set_text_attributes[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 162_5_terminal
  LOCAL(3), // 163_5_attributes
  // .text_attributes_of attributes)
  LET, -1, LOCAL(2), var_text_attributes_of, LOCAL(3), LOCAL(1),
  // -> terminal(.text_attributes_of attributes)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(165, 15),
  POS(165, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__generic_terminal___set_text_attributes = {
  t_func_std_types__generic_terminal___set_text_attributes, NULL, 2, 2,
  {"163_5_attributes\000", "162_5_terminal\000"}
};

static TAB_NUM t_func_std_types__generic_terminal___add_text_attributes[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 169_5_terminal
  LOCAL(5), // 170_5_attributes
  // text_attributes_of(terminal) | attributes)
  var_text_attributes_of, 1, LOCAL(4), 1, LOCAL(1),
  // text_attributes_of(terminal) | attributes)
  var_std__bit_or, 2, LOCAL(1), LOCAL(5), 1, LOCAL(2),
  // .text_attributes_of text_attributes_of(terminal) | attributes)
  LET, -1, LOCAL(4), var_text_attributes_of, LOCAL(2), LOCAL(3),
  // -> terminal(.text_attributes_of text_attributes_of(terminal) | attributes)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(172, 35),
  POS(172, 35),
  POS(172, 15),
  POS(172, 3),
  LOCAL(4),
  LOCAL(5)
};

static FUNCTION_INFO i_func_std_types__generic_terminal___add_text_attributes = {
  t_func_std_types__generic_terminal___add_text_attributes, NULL, 4, 2,
  {"169_5_terminal\000", "170_5_attributes\000"}
};

static TAB_NUM t_func_std_types__generic_terminal___remove_text_attributes[] = {
  6, // locals
  2, // parameters
  LOCAL(5), // 176_5_terminal
  LOCAL(6), // 177_5_attributes
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
  POS(181, 27),
  POS(181, 58),
  POS(181, 27),
  POS(180, 5),
  POS(179, 3),
  LOCAL(6),
  LOCAL(5)
};

static FUNCTION_INFO i_func_std_types__generic_terminal___remove_text_attributes = {
  t_func_std_types__generic_terminal___remove_text_attributes, NULL, 5, 2,
  {"177_5_attributes\000", "176_5_terminal\000"}
};

static TAB_NUM t_func_std_types__generic_terminal___get_clear_colour[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 185_5_terminal
  // clear_colour_of(terminal)
  var_clear_colour_of, 1, LOCAL(2), 1, LOCAL(1),
  // -> clear_colour_of(terminal)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(187, 6),
  POS(187, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__generic_terminal___get_clear_colour = {
  t_func_std_types__generic_terminal___get_clear_colour, NULL, 2, 1,
  {"185_5_terminal\000"}
};

static TAB_NUM t_func_std_types__generic_terminal___get_draw_colour[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 191_5_terminal
  // draw_colour_of(terminal)
  var_draw_colour_of, 1, LOCAL(2), 1, LOCAL(1),
  // -> draw_colour_of(terminal)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(193, 6),
  POS(193, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__generic_terminal___get_draw_colour = {
  t_func_std_types__generic_terminal___get_draw_colour, NULL, 2, 1,
  {"191_5_terminal\000"}
};

static TAB_NUM t_func_std_types__generic_terminal___get_text_attributes[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 197_5_terminal
  // text_attributes_of(terminal)
  var_text_attributes_of, 1, LOCAL(2), 1, LOCAL(1),
  // -> text_attributes_of(terminal)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(199, 6),
  POS(199, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__generic_terminal___get_text_attributes = {
  t_func_std_types__generic_terminal___get_text_attributes, NULL, 2, 1,
  {"197_5_terminal\000"}
};

static TAB_NUM t_func_std_types__generic_terminal___move[] = {
  7, // locals
  7, // parameters
  LOCAL(1), // 203_5_screen
  LOCAL(2), // 204_5_x
  LOCAL(3), // 205_5_y
  LOCAL(4), // 206_5_sx
  LOCAL(5), // 207_5_sy
  LOCAL(6), // 208_5_width
  LOCAL(7), // 209_5_height
  // copy screen screen x y sx sy width height
  var_copy, 8, LOCAL(1), LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), LOCAL(7), TAIL_CALL,
  POS(211, 3),
  LOCAL(4),
  LOCAL(1),
  LOCAL(7),
  LOCAL(2),
  LOCAL(6),
  LOCAL(5),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__generic_terminal___move = {
  t_func_std_types__generic_terminal___move, NULL, 1, 7,
  {"206_5_sx\000", "203_5_screen\000", "209_5_height\000", "204_5_x\000", "208_5_width\000", "207_5_sy\000", "205_5_y\000"}
};

static TAB_NUM t_func_std_types__view___draw_text[] = {
  12, // locals
  -5, // parameters
  MANDATORY_PARAMETER, LOCAL(7), // 219_5_view
  MANDATORY_PARAMETER, LOCAL(8), // 220_5_screen
  MANDATORY_PARAMETER, LOCAL(9), // 221_5_x
  MANDATORY_PARAMETER, LOCAL(10), // 222_5_y
  REST_PARAMETER, LOCAL(11), // 223_5_args
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
  POS(225, 3),
  POS(229, 5),
  POS(229, 5),
  POS(229, 5),
  POS(230, 5),
  POS(230, 5),
  POS(230, 5),
  POS(226, 3),
  LOCAL(7),
  LOCAL(11),
  LOCAL(10),
  LOCAL(8),
  LOCAL(12),
  LOCAL(9)
};

static FUNCTION_INFO i_func_std_types__view___draw_text = {
  t_func_std_types__view___draw_text, NULL, 8, 6,
  {"219_5_view\000", "223_5_args\000", "222_5_y\000", "220_5_screen\000", "225_4_text\000", "221_5_x\000"}
};

static TAB_NUM t_func_std_types__view___draw_attributed_text[] = {
  11, // locals
  5, // parameters
  LOCAL(7), // 235_5_view
  LOCAL(8), // 236_5_screen
  LOCAL(9), // 237_5_x
  LOCAL(10), // 238_5_y
  LOCAL(11), // 239_5_attributed_text
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
  POS(244, 5),
  POS(244, 5),
  POS(244, 5),
  POS(245, 5),
  POS(245, 5),
  POS(245, 5),
  POS(241, 3),
  LOCAL(8),
  LOCAL(9),
  LOCAL(10),
  LOCAL(7),
  LOCAL(11)
};

static FUNCTION_INFO i_func_std_types__view___draw_attributed_text = {
  t_func_std_types__view___draw_attributed_text, NULL, 7, 5,
  {"236_5_screen\000", "237_5_x\000", "238_5_y\000", "235_5_view\000", "239_5_attributed_text\000"}
};

static TAB_NUM t_func_std_types__view___clear[] = {
  9, // locals
  -6, // parameters
  MANDATORY_PARAMETER, var_250_5_view,
  MANDATORY_PARAMETER, LOCAL(7), // 251_5_screen
  num_1, var_252_5_x,
  num_1, var_253_5_y,
  var_undefined, LOCAL(8), // 254_5_width
  var_undefined, LOCAL(9), // 255_5_height
  // is_undefined &width -> width_of(view)-x+1
  var_is_undefined, 1, LOCAL(8), 1, LOCAL(1),
  // update_if width.is_undefined &width -> width_of(view)-x+1
  var_update_if, 3, LOCAL(1), LOCAL(8), lambda_5, 1, LOCAL(8),
  // is_undefined &height -> height_of(view)-y+1
  var_is_undefined, 1, LOCAL(9), 1, LOCAL(1),
  // update_if height.is_undefined &height -> height_of(view)-y+1
  var_update_if, 3, LOCAL(1), LOCAL(9), lambda_6, 1, LOCAL(9),
  // x_of(view)+x-1
  var_x_of, 1, var_250_5_view, 1, LOCAL(1),
  // x_of(view)+x-1
  var_std__plus, 2, LOCAL(1), var_252_5_x, 1, LOCAL(2),
  // x_of(view)+x-1
  var_std__minus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  // y_of(view)+y-1
  var_y_of, 1, var_250_5_view, 1, LOCAL(4),
  // y_of(view)+y-1
  var_std__plus, 2, LOCAL(4), var_253_5_y, 1, LOCAL(5),
  // y_of(view)+y-1
  var_std__minus, 2, LOCAL(5), num_1, 1, LOCAL(6),
  // basic_private::clear
  var_basic_private__clear, 6, LOCAL(7), var_250_5_view, LOCAL(3), LOCAL(6), LOCAL(8), LOCAL(9), TAIL_CALL,
  POS(257, 19),
  POS(257, 3),
  POS(258, 20),
  POS(258, 3),
  POS(262, 5),
  POS(262, 5),
  POS(262, 5),
  POS(263, 5),
  POS(263, 5),
  POS(263, 5),
  POS(259, 3),
  LOCAL(8),
  LOCAL(7),
  LOCAL(9)
};

static FUNCTION_INFO i_func_std_types__view___clear = {
  t_func_std_types__view___clear, NULL, 11, 3,
  {"254_5_width\000", "251_5_screen\000", "255_5_height\000"}
};

static TAB_NUM t_lambda_5[] = {
  3, // locals
  0, // parameters
  // width_of(view)-x+1
  var_width_of, 1, var_250_5_view, 1, LOCAL(1),
  // width_of(view)-x+1
  var_std__minus, 2, LOCAL(1), var_252_5_x, 1, LOCAL(2),
  // width_of(view)-x+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  width_of(view)-x+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(257, 42),
  POS(257, 42),
  POS(257, 42),
  POS(257, 41)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  3, // locals
  0, // parameters
  // height_of(view)-y+1
  var_height_of, 1, var_250_5_view, 1, LOCAL(1),
  // height_of(view)-y+1
  var_std__minus, 2, LOCAL(1), var_253_5_y, 1, LOCAL(2),
  // height_of(view)-y+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  height_of(view)-y+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(258, 44),
  POS(258, 44),
  POS(258, 44),
  POS(258, 43)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_std_types__view___invert[] = {
  6, // locals
  -6, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 269_5_view
  MANDATORY_PARAMETER, LOCAL(2), // 270_5_screen
  num_1, LOCAL(3), // 271_5_x
  num_1, LOCAL(4), // 272_5_y
  var_undefined, LOCAL(5), // 273_5_width
  var_undefined, LOCAL(6), // 274_5_height
  // clip_rectangle view &x &y &width &height
  func_clip_rectangle, 5, LOCAL(1), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), 4, LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6),
  // invert screen x y width height
  var_invert, 5, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), TAIL_CALL,
  POS(276, 3),
  POS(277, 3),
  LOCAL(1),
  LOCAL(6),
  LOCAL(2),
  LOCAL(3),
  LOCAL(5),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__view___invert = {
  t_func_std_types__view___invert, NULL, 2, 6,
  {"269_5_view\000", "274_5_height\000", "270_5_screen\000", "271_5_x\000", "273_5_width\000", "272_5_y\000"}
};

static TAB_NUM t_func_std_types__view___draw_shadow[] = {
  6, // locals
  -6, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 281_5_view
  MANDATORY_PARAMETER, LOCAL(2), // 282_5_screen
  num_1, LOCAL(3), // 283_5_x
  num_1, LOCAL(4), // 284_5_y
  var_undefined, LOCAL(5), // 285_5_width
  var_undefined, LOCAL(6), // 286_5_height
  // clip_rectangle view &x &y &width &height
  func_clip_rectangle, 5, LOCAL(1), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), 4, LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6),
  // draw_shadow screen x y width height
  var_draw_shadow, 5, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), TAIL_CALL,
  POS(288, 3),
  POS(289, 3),
  LOCAL(6),
  LOCAL(1),
  LOCAL(5),
  LOCAL(4),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__view___draw_shadow = {
  t_func_std_types__view___draw_shadow, NULL, 2, 6,
  {"286_5_height\000", "281_5_view\000", "285_5_width\000", "284_5_y\000", "282_5_screen\000", "283_5_x\000"}
};

static TAB_NUM t_func_clip_rectangle[] = {
  5, // locals
  5, // parameters
  LOCAL(3), // 291_19_view
  var_291_24_x,
  var_291_26_y,
  var_291_28_width,
  var_291_34_height,
  // $view_x x_of(view)
  var_x_of, 1, LOCAL(3), 1, var_292_4_view_x,
  // $view_y y_of(view)
  var_y_of, 1, LOCAL(3), 1, var_293_4_view_y,
  // $view_width width_of(view)
  var_width_of, 1, LOCAL(3), 1, var_294_4_view_width,
  // $view_height height_of(view)
  var_height_of, 1, LOCAL(3), 1, var_295_4_view_height,
  // is_undefined &width -> view_width-x+1
  var_is_undefined, 1, var_291_28_width, 1, LOCAL(1),
  // update_if width.is_undefined &width -> view_width-x+1
  var_update_if, 3, LOCAL(1), var_291_28_width, lambda_7, 1, var_291_28_width,
  // is_undefined &height -> view_height-y+1
  var_is_undefined, 1, var_291_34_height, 1, LOCAL(1),
  // update_if height.is_undefined &height -> view_height-y+1
  var_update_if, 3, LOCAL(1), var_291_34_height, lambda_8, 1, var_291_34_height,
  // view_x+x-1
  var_std__plus, 2, var_292_4_view_x, var_291_24_x, 1, LOCAL(1),
  // $left_x view_x+x-1
  var_std__minus, 2, LOCAL(1), num_1, 1, var_300_4_left_x,
  // view_y+y-1
  var_std__plus, 2, var_293_4_view_y, var_291_26_y, 1, LOCAL(1),
  // $top_y view_y+y-1
  var_std__minus, 2, LOCAL(1), num_1, 1, var_301_4_top_y,
  // $right_x left_x+width # exclusive
  var_std__plus, 2, var_300_4_left_x, var_291_28_width, 1, LOCAL(4),
  // $bottom_y top_y+height # exclusive
  var_std__plus, 2, var_301_4_top_y, var_291_34_height, 1, LOCAL(5),
  // left_x < view_x &left_x &width -> view_x width-(view_x-left_x)
  var_std__less, 2, var_300_4_left_x, var_292_4_view_x, 1, LOCAL(1),
  // update_if left_x < view_x &left_x &width -> view_x width-(view_x-left_x)
  var_update_if, 4, LOCAL(1), var_300_4_left_x, var_291_28_width, lambda_9, 2, var_300_4_left_x, var_291_28_width,
  // top_y < view_y &top_y &height -> view_y height-(view_y-top_y)
  var_std__less, 2, var_301_4_top_y, var_293_4_view_y, 1, LOCAL(1),
  // update_if top_y < view_y &top_y &height -> view_y height-(view_y-top_y)
  var_update_if, 4, LOCAL(1), var_301_4_top_y, var_291_34_height, lambda_10, 2, var_301_4_top_y, var_291_34_height,
  // view_x+view_width &right_x -> view_x+view_width
  var_std__plus, 2, var_292_4_view_x, var_294_4_view_width, 1, LOCAL(1),
  // view_x+view_width &right_x -> view_x+view_width
  var_std__less, 2, LOCAL(1), LOCAL(4), 1, LOCAL(2),
  // update_if right_x > view_x+view_width &right_x -> view_x+view_width
  var_update_if, 3, LOCAL(2), LOCAL(4), lambda_11, 1, LOCAL(4),
  // view_y+view_height &bottom_y -> view_y+view_height
  var_std__plus, 2, var_293_4_view_y, var_295_4_view_height, 1, LOCAL(1),
  // view_y+view_height &bottom_y -> view_y+view_height
  var_std__less, 2, LOCAL(1), LOCAL(5), 1, LOCAL(2),
  // update_if bottom_y > view_y+view_height &bottom_y -> view_y+view_height
  var_update_if, 3, LOCAL(2), LOCAL(5), lambda_12, 1, LOCAL(5),
  // right_x-left_x bottom_y-top_y
  var_std__minus, 2, LOCAL(4), var_300_4_left_x, 1, LOCAL(1),
  // bottom_y-top_y
  var_std__minus, 2, LOCAL(5), var_301_4_top_y, 1, LOCAL(2),
  // -> left_x top_y right_x-left_x bottom_y-top_y
  LET, 4, var_300_4_left_x, var_301_4_top_y, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(292, 3),
  POS(293, 3),
  POS(294, 3),
  POS(295, 3),
  POS(297, 19),
  POS(297, 3),
  POS(298, 20),
  POS(298, 3),
  POS(300, 11),
  POS(300, 3),
  POS(301, 10),
  POS(301, 3),
  POS(302, 3),
  POS(303, 3),
  POS(307, 13),
  POS(307, 3),
  POS(308, 13),
  POS(308, 3),
  POS(309, 23),
  POS(309, 23),
  POS(309, 3),
  POS(310, 24),
  POS(310, 24),
  POS(310, 3),
  POS(312, 19),
  POS(312, 34),
  POS(312, 3),
  LOCAL(4),
  LOCAL(5),
  LOCAL(3)
};

static FUNCTION_INFO i_func_clip_rectangle = {
  t_func_clip_rectangle, NULL, 27, 3,
  {"302_4_right_x\000", "303_4_bottom_y\000", "291_19_view\000"}
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  0, // parameters
  // view_width-x+1
  var_std__minus, 2, var_294_4_view_width, var_291_24_x, 1, LOCAL(1),
  // view_width-x+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  //  view_width-x+1
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(297, 42),
  POS(297, 42),
  POS(297, 41)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_8[] = {
  2, // locals
  0, // parameters
  // view_height-y+1
  var_std__minus, 2, var_295_4_view_height, var_291_26_y, 1, LOCAL(1),
  // view_height-y+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  //  view_height-y+1
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(298, 44),
  POS(298, 44),
  POS(298, 43)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  2, // locals
  0, // parameters
  // view_x-left_x)
  var_std__minus, 2, var_292_4_view_x, var_300_4_left_x, 1, LOCAL(1),
  // width-(view_x-left_x)
  var_std__minus, 2, var_291_28_width, LOCAL(1), 1, LOCAL(2),
  //  view_x width-(view_x-left_x)
  LET, 2, var_292_4_view_x, LOCAL(2), TAIL_CALL,
  POS(307, 61),
  POS(307, 54),
  POS(307, 46)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_10[] = {
  2, // locals
  0, // parameters
  // view_y-top_y)
  var_std__minus, 2, var_293_4_view_y, var_301_4_top_y, 1, LOCAL(1),
  // height-(view_y-top_y)
  var_std__minus, 2, var_291_34_height, LOCAL(1), 1, LOCAL(2),
  //  view_y height-(view_y-top_y)
  LET, 2, var_293_4_view_y, LOCAL(2), TAIL_CALL,
  POS(308, 61),
  POS(308, 53),
  POS(308, 45)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // view_x+view_width
  var_std__plus, 2, var_292_4_view_x, var_294_4_view_width, 1, LOCAL(1),
  //  view_x+view_width
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(309, 53),
  POS(309, 52)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // view_y+view_height
  var_std__plus, 2, var_293_4_view_y, var_295_4_view_height, 1, LOCAL(1),
  //  view_y+view_height
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(310, 56),
  POS(310, 55)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__view___copy[] = {
  4, // locals
  -9, // parameters
  MANDATORY_PARAMETER, LOCAL(4), // 316_5_view
  MANDATORY_PARAMETER, var_317_5_destination,
  MANDATORY_PARAMETER, var_318_5_source,
  num_1, var_319_5_x,
  num_1, var_320_5_y,
  num_1, var_321_5_sx,
  num_1, var_322_5_sy,
  var_undefined, var_323_5_width,
  var_undefined, var_324_5_height,
  // is_undefined &width -> width_of(source)-sx+1
  var_is_undefined, 1, var_323_5_width, 1, LOCAL(1),
  // update_if width.is_undefined &width -> width_of(source)-sx+1
  var_update_if, 3, LOCAL(1), var_323_5_width, lambda_13, 1, var_323_5_width,
  // is_undefined &height -> height_of(source)-sy+1
  var_is_undefined, 1, var_324_5_height, 1, LOCAL(1),
  // update_if height.is_undefined &height -> height_of(source)-sy+1
  var_update_if, 3, LOCAL(1), var_324_5_height, lambda_14, 1, var_324_5_height,
  // $view_x x_of(view)
  var_x_of, 1, LOCAL(4), 1, var_328_4_view_x,
  // $view_y y_of(view)
  var_y_of, 1, LOCAL(4), 1, var_329_4_view_y,
  // $view_width width_of(view)
  var_width_of, 1, LOCAL(4), 1, var_330_4_view_width,
  // $view_height height_of(view)
  var_height_of, 1, LOCAL(4), 1, var_331_4_view_height,
  // x+view_x-1
  var_std__plus, 2, var_319_5_x, var_328_4_view_x, 1, LOCAL(1),
  // !x x+view_x-1
  var_std__minus, 2, LOCAL(1), num_1, 1, var_319_5_x,
  // y+view_y-1
  var_std__plus, 2, var_320_5_y, var_329_4_view_y, 1, LOCAL(1),
  // !y y+view_y-1
  var_std__minus, 2, LOCAL(1), num_1, 1, var_320_5_y,
  // $dx view_x-x
  var_std__minus, 2, var_328_4_view_x, var_319_5_x, 1, var_334_4_dx,
  // $dy view_y-y
  var_std__minus, 2, var_329_4_view_y, var_320_5_y, 1, var_335_4_dy,
  // 0 &x &sx &width -> view_x sx+dx width-dx
  var_std__less, 2, num_0, var_334_4_dx, 1, LOCAL(1),
  // update_if dx > 0 &x &sx &width -> view_x sx+dx width-dx
  var_update_if, 5, LOCAL(1), var_319_5_x, var_321_5_sx, var_323_5_width, lambda_15, 3, var_319_5_x, var_321_5_sx, var_323_5_width,
  // 0 &y &sy &height -> view_y sy+dy height-dy
  var_std__less, 2, num_0, var_335_4_dy, 1, LOCAL(1),
  // update_if dy > 0 &y &sy &height -> view_y sy+dy height-dy
  var_update_if, 5, LOCAL(1), var_320_5_y, var_322_5_sy, var_324_5_height, lambda_16, 3, var_320_5_y, var_322_5_sy, var_324_5_height,
  // x-view_x+width > view_width &width -> view_width-(x-view_x)
  var_std__minus, 2, var_319_5_x, var_328_4_view_x, 1, LOCAL(1),
  // x-view_x+width > view_width &width -> view_width-(x-view_x)
  var_std__plus, 2, LOCAL(1), var_323_5_width, 1, LOCAL(2),
  // view_width &width -> view_width-(x-view_x)
  var_std__less, 2, var_330_4_view_width, LOCAL(2), 1, LOCAL(3),
  // update_if x-view_x+width > view_width &width -> view_width-(x-view_x)
  var_update_if, 3, LOCAL(3), var_323_5_width, lambda_17, 1, var_323_5_width,
  // y-view_y+height > view_height &height -> view_height-(y-view_y)
  var_std__minus, 2, var_320_5_y, var_329_4_view_y, 1, LOCAL(1),
  // y-view_y+height > view_height &height -> view_height-(y-view_y)
  var_std__plus, 2, LOCAL(1), var_324_5_height, 1, LOCAL(2),
  // view_height &height -> view_height-(y-view_y)
  var_std__less, 2, var_331_4_view_height, LOCAL(2), 1, LOCAL(3),
  // update_if y-view_y+height > view_height &height -> view_height-(y-view_y)
  var_update_if, 3, LOCAL(3), var_324_5_height, lambda_18, 1, var_324_5_height,
  // 0 || height <= 0
  var_std__less, 2, num_0, var_323_5_width, 1, LOCAL(1),
  // 0 || height <= 0
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // 0 || height <= 0
  var_std__or, 2, LOCAL(2), lambda_19, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_20, lambda_21, TAIL_CALL,
  POS(326, 19),
  POS(326, 3),
  POS(327, 20),
  POS(327, 3),
  POS(328, 3),
  POS(329, 3),
  POS(330, 3),
  POS(331, 3),
  POS(332, 6),
  POS(332, 3),
  POS(333, 6),
  POS(333, 3),
  POS(334, 3),
  POS(335, 3),
  POS(336, 18),
  POS(336, 3),
  POS(337, 18),
  POS(337, 3),
  POS(338, 13),
  POS(338, 13),
  POS(338, 30),
  POS(338, 3),
  POS(339, 13),
  POS(339, 13),
  POS(339, 31),
  POS(339, 3),
  POS(341, 14),
  POS(341, 14),
  POS(341, 14),
  POS(340, 3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__view___copy = {
  t_func_std_types__view___copy, NULL, 30, 1,
  {"316_5_view\000"}
};

static TAB_NUM t_lambda_13[] = {
  3, // locals
  0, // parameters
  // width_of(source)-sx+1
  var_width_of, 1, var_318_5_source, 1, LOCAL(1),
  // width_of(source)-sx+1
  var_std__minus, 2, LOCAL(1), var_321_5_sx, 1, LOCAL(2),
  // width_of(source)-sx+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  width_of(source)-sx+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(326, 42),
  POS(326, 42),
  POS(326, 42),
  POS(326, 41)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_14[] = {
  3, // locals
  0, // parameters
  // height_of(source)-sy+1
  var_height_of, 1, var_318_5_source, 1, LOCAL(1),
  // height_of(source)-sy+1
  var_std__minus, 2, LOCAL(1), var_322_5_sy, 1, LOCAL(2),
  // height_of(source)-sy+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  height_of(source)-sy+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(327, 44),
  POS(327, 44),
  POS(327, 44),
  POS(327, 43)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // sx+dx width-dx
  var_std__plus, 2, var_321_5_sx, var_334_4_dx, 1, LOCAL(1),
  // width-dx
  var_std__minus, 2, var_323_5_width, var_334_4_dx, 1, LOCAL(2),
  //  view_x sx+dx width-dx
  LET, 3, var_328_4_view_x, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(336, 44),
  POS(336, 50),
  POS(336, 36)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  2, // locals
  0, // parameters
  // sy+dy height-dy
  var_std__plus, 2, var_322_5_sy, var_335_4_dy, 1, LOCAL(1),
  // height-dy
  var_std__minus, 2, var_324_5_height, var_335_4_dy, 1, LOCAL(2),
  //  view_y sy+dy height-dy
  LET, 3, var_329_4_view_y, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(337, 45),
  POS(337, 51),
  POS(337, 37)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_17[] = {
  2, // locals
  0, // parameters
  // x-view_x)
  var_std__minus, 2, var_319_5_x, var_328_4_view_x, 1, LOCAL(1),
  // view_width-(x-view_x)
  var_std__minus, 2, var_330_4_view_width, LOCAL(1), 1, LOCAL(2),
  //  view_width-(x-view_x)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(338, 63),
  POS(338, 51),
  POS(338, 50)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  0, // parameters
  // y-view_y)
  var_std__minus, 2, var_320_5_y, var_329_4_view_y, 1, LOCAL(1),
  // view_height-(y-view_y)
  var_std__minus, 2, var_331_4_view_height, LOCAL(1), 1, LOCAL(2),
  //  view_height-(y-view_y)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(339, 67),
  POS(339, 54),
  POS(339, 53)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  0, // parameters
  // 0
  var_std__less, 2, num_0, var_324_5_height, 1, LOCAL(1),
  // 0
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // height <= 0
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(341, 29),
  POS(341, 29),
  POS(341, 19)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  destination
  LET, 1, var_317_5_destination, TAIL_CALL,
  POS(342, 7)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  // copy
  var_copy, 8, var_317_5_destination, var_318_5_source, var_319_5_x, var_320_5_y, var_321_5_sx, var_322_5_sy, var_323_5_width, var_324_5_height, TAIL_CALL,
  POS(344, 7)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__create_vertical_panes[] = {
  0, // locals
  2, // parameters
  var_356_5_screen,
  var_357_5_pane_description,
  // $rc result_count()
  var_result_count, 0, 1, var_359_4_rc,
  // $x x_of(screen)
  var_x_of, 1, var_356_5_screen, 1, var_360_4_x,
  // $y y_of(screen)
  var_y_of, 1, var_356_5_screen, 1, var_361_4_y,
  // $width width_of(screen)
  var_width_of, 1, var_356_5_screen, 1, var_362_4_width,
  // $height height_of(screen)
  var_height_of, 1, var_356_5_screen, 1, var_363_4_height,
  // $views empty_list
  LET, 1, var_empty_list, 1, var_364_4_views,
  // cond
  var_cond, 3, lambda_22, lambda_25, lambda_35, TAIL_CALL,
  POS(359, 3),
  POS(360, 3),
  POS(361, 3),
  POS(362, 3),
  POS(363, 3),
  POS(364, 3),
  POS(365, 3)
};

static FUNCTION_INFO i_func_std__create_vertical_panes = {
  t_func_std__create_vertical_panes, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // is_an_integer:
  var_is_an_integer, 1, var_357_5_pane_description, 1, LOCAL(1),
  //  pane_description.is_an_integer:
  LET, 2, LOCAL(1), lambda_23, TAIL_CALL,
  POS(366, 25),
  POS(366, 7)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_23[] = {
  3, // locals
  0, // parameters
  // $n pane_description
  LET, 1, var_357_5_pane_description, 1, LOCAL(3),
  // n+1 x x+width)
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // x+width)
  var_std__plus, 2, var_360_4_x, var_362_4_width, 1, LOCAL(2),
  // $iter bresenham(n+1 x x+width)
  var_bresenham, 3, LOCAL(1), var_360_4_x, LOCAL(2), 1, var_368_8_iter,
  // next_value &iter !x
  var_next_value, 1, var_368_8_iter, 2, var_368_8_iter, var_360_4_x,
  // repeat n
  var_repeat, 3, LOCAL(3), lambda_24, func_return, TAIL_CALL,
  POS(367, 7),
  POS(368, 23),
  POS(368, 29),
  POS(368, 7),
  POS(369, 7),
  POS(370, 7),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 6, 1,
  {"367_8_n\000"}
};

static TAB_NUM t_lambda_24[] = {
  3, // locals
  0, // parameters
  // next_value &iter $next_x
  var_next_value, 1, var_368_8_iter, 2, var_368_8_iter, LOCAL(3),
  // next_x-1 height)
  var_std__minus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // create_view(screen x y next_x-1 height)
  var_create_view, 5, var_356_5_screen, var_360_4_x, var_361_4_y, LOCAL(1), var_363_4_height, 1, LOCAL(2),
  // push &views create_view(screen x y next_x-1 height)
  var_push, 2, var_364_4_views, LOCAL(2), 1, var_364_4_views,
  // !x next_x
  LET, 1, LOCAL(3), 1, var_360_4_x,
  // next
  var_next, 0, TAIL_CALL,
  POS(372, 11),
  POS(373, 46),
  POS(373, 23),
  POS(373, 11),
  POS(374, 11),
  POS(375, 11),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 6, 1,
  {"372_29_next_x\000"}
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_357_5_pane_description, 1, LOCAL(1),
  //  pane_description.is_a_list:
  LET, 2, LOCAL(1), lambda_26, TAIL_CALL,
  POS(377, 25),
  POS(377, 7)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  // $fixed_width 0
  LET, 1, num_0, 1, var_378_8_fixed_width,
  // $flex_width_count 0
  LET, 1, num_0, 1, var_379_8_flex_width_count,
  // for_each pane_description
  var_for_each, 3, var_357_5_pane_description, lambda_27, lambda_30, TAIL_CALL,
  POS(378, 7),
  POS(379, 7),
  POS(380, 7)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  1, // parameters
  var_381_12_pane_width,
  // pane_width < 1:
  var_std__less, 2, var_381_12_pane_width, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_28, lambda_29, TAIL_CALL,
  POS(383, 13),
  POS(382, 11)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  // inc &flex_width_count
  var_inc, 1, var_379_8_flex_width_count, 1, var_379_8_flex_width_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(384, 15),
  POS(385, 15)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  // plus &fixed_width pane_width
  var_plus, 2, var_378_8_fixed_width, var_381_12_pane_width, 1, var_378_8_fixed_width,
  // next
  var_next, 0, TAIL_CALL,
  POS(387, 15),
  POS(388, 15)
};

static FUNCTION_INFO i_lambda_29 = {
  t_lambda_29, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // fixed_width+flex_width_count > width
  var_std__plus, 2, var_378_8_fixed_width, var_379_8_flex_width_count, 1, LOCAL(1),
  // width
  var_std__less, 2, var_362_4_width, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_31, lambda_32, TAIL_CALL,
  POS(391, 13),
  POS(391, 44),
  POS(390, 11)
};

static FUNCTION_INFO i_lambda_30 = {
  t_lambda_30, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(392, 15)
};

static FUNCTION_INFO i_lambda_31 = {
  t_lambda_31, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  // $flex_width width-fixed_width
  var_std__minus, 2, var_362_4_width, var_378_8_fixed_width, 1, var_394_16_flex_width,
  // $remaining_flex_width flex_width
  LET, 1, var_394_16_flex_width, 1, var_395_16_remaining_flex_width,
  // for_each pane_description
  var_for_each, 3, var_357_5_pane_description, lambda_33, func_return, TAIL_CALL,
  POS(394, 15),
  POS(395, 15),
  POS(396, 15)
};

static FUNCTION_INFO i_lambda_32 = {
  t_lambda_32, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  1, // parameters
  var_397_20_pane_width,
  // pane_width < 1:
  var_std__less, 2, var_397_20_pane_width, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, func_create_pane_view, TAIL_CALL,
  POS(399, 21),
  POS(398, 19)
};

static FUNCTION_INFO i_lambda_33 = {
  t_lambda_33, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_34[] = {
  5, // locals
  0, // parameters
  // dec &flex_width_count
  var_dec, 1, var_379_8_flex_width_count, 1, var_379_8_flex_width_count,
  // pane_width*flex_width).to_integer 1)
  var_std__times, 2, var_397_20_pane_width, var_394_16_flex_width, 1, LOCAL(1),
  // round(pane_width*flex_width).to_integer 1)
  var_round, 1, LOCAL(1), 1, LOCAL(2),
  // to_integer 1)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(3),
  // max(round(pane_width*flex_width).to_integer 1)
  var_max, 2, LOCAL(3), num_1, 1, LOCAL(4),
  // remaining_flex_width-flex_width_count #
  var_std__minus, 2, var_395_16_remaining_flex_width, var_379_8_flex_width_count, 1, LOCAL(5),
  // !pane_width
  var_min, 2, LOCAL(4), LOCAL(5), 1, var_397_20_pane_width,
  // minus &remaining_flex_width pane_width
  var_minus, 2, var_395_16_remaining_flex_width, var_397_20_pane_width, 1, var_395_16_remaining_flex_width,
  // create_pane_view
  func_create_pane_view, 0, TAIL_CALL,
  POS(400, 23),
  POS(403, 37),
  POS(403, 31),
  POS(403, 60),
  POS(403, 27),
  POS(404, 27),
  POS(401, 23),
  POS(408, 23),
  POS(409, 23)
};

static FUNCTION_INFO i_lambda_34 = {
  t_lambda_34, NULL, 9, 0,
  {}
};

static TAB_NUM t_func_create_pane_view[] = {
  3, // locals
  0, // parameters
  // x+pane_width-1 height)
  var_std__plus, 2, var_360_4_x, var_397_20_pane_width, 1, LOCAL(1),
  // x+pane_width-1 height)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // create_view(screen x y x+pane_width-1 height)
  var_create_view, 5, var_356_5_screen, var_360_4_x, var_361_4_y, LOCAL(2), var_363_4_height, 1, LOCAL(3),
  // push &views create_view(screen x y x+pane_width-1 height)
  var_push, 2, var_364_4_views, LOCAL(3), 1, var_364_4_views,
  // plus &x pane_width
  var_plus, 2, var_360_4_x, var_397_20_pane_width, 1, var_360_4_x,
  // next
  var_next, 0, TAIL_CALL,
  POS(413, 56),
  POS(413, 56),
  POS(413, 33),
  POS(413, 21),
  POS(414, 21),
  POS(415, 21)
};

static FUNCTION_INFO i_func_create_pane_view = {
  t_func_create_pane_view, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  //  true -> undefined
  LET, 2, var_true, lambda_36, TAIL_CALL,
  POS(417, 7)
};

static FUNCTION_INFO i_lambda_35 = {
  t_lambda_35, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(417, 15)
};

static FUNCTION_INFO i_lambda_36 = {
  t_lambda_36, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_return[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_359_4_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_37, lambda_38, TAIL_CALL,
  POS(421, 7),
  POS(420, 5)
};

static FUNCTION_INFO i_func_return = {
  t_func_return, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  //  views
  LET, 1, var_364_4_views, TAIL_CALL,
  POS(422, 9)
};

static FUNCTION_INFO i_lambda_37 = {
  t_lambda_37, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  // spread views
  var_spread, 1, var_364_4_views, TAIL_CALL,
  POS(423, 9)
};

static FUNCTION_INFO i_lambda_38 = {
  t_lambda_38, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__create_horizontal_panes[] = {
  0, // locals
  2, // parameters
  var_427_5_screen,
  var_428_5_pane_description,
  // $rc result_count()
  var_result_count, 0, 1, var_430_4_rc,
  // $x x_of(screen)
  var_x_of, 1, var_427_5_screen, 1, var_431_4_x,
  // $y y_of(screen)
  var_y_of, 1, var_427_5_screen, 1, var_432_4_y,
  // $width width_of(screen)
  var_width_of, 1, var_427_5_screen, 1, var_433_4_width,
  // $height height_of(screen)
  var_height_of, 1, var_427_5_screen, 1, var_434_4_height,
  // $views empty_list
  LET, 1, var_empty_list, 1, var_435_4_views,
  // cond
  var_cond, 3, lambda_39, lambda_42, lambda_54, TAIL_CALL,
  POS(430, 3),
  POS(431, 3),
  POS(432, 3),
  POS(433, 3),
  POS(434, 3),
  POS(435, 3),
  POS(436, 3)
};

static FUNCTION_INFO i_func_std__create_horizontal_panes = {
  t_func_std__create_horizontal_panes, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_39[] = {
  1, // locals
  0, // parameters
  // is_an_integer:
  var_is_an_integer, 1, var_428_5_pane_description, 1, LOCAL(1),
  //  pane_description.is_an_integer:
  LET, 2, LOCAL(1), lambda_40, TAIL_CALL,
  POS(437, 25),
  POS(437, 7)
};

static FUNCTION_INFO i_lambda_39 = {
  t_lambda_39, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_40[] = {
  3, // locals
  0, // parameters
  // $n pane_description
  LET, 1, var_428_5_pane_description, 1, LOCAL(3),
  // n+1 y y+height)
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // y+height)
  var_std__plus, 2, var_432_4_y, var_434_4_height, 1, LOCAL(2),
  // $iter bresenham(n+1 y y+height)
  var_bresenham, 3, LOCAL(1), var_432_4_y, LOCAL(2), 1, var_439_8_iter,
  // next_value &iter !y
  var_next_value, 1, var_439_8_iter, 2, var_439_8_iter, var_432_4_y,
  // repeat n
  var_repeat, 3, LOCAL(3), lambda_41, func_2_return, TAIL_CALL,
  POS(438, 7),
  POS(439, 23),
  POS(439, 29),
  POS(439, 7),
  POS(440, 7),
  POS(441, 7),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_40 = {
  t_lambda_40, NULL, 6, 1,
  {"438_8_n\000"}
};

static TAB_NUM t_lambda_41[] = {
  3, // locals
  0, // parameters
  // next_value &iter $next_y
  var_next_value, 1, var_439_8_iter, 2, var_439_8_iter, LOCAL(3),
  // next_y-1)
  var_std__minus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // create_view(screen x y width next_y-1)
  var_create_view, 5, var_427_5_screen, var_431_4_x, var_432_4_y, var_433_4_width, LOCAL(1), 1, LOCAL(2),
  // push &views create_view(screen x y width next_y-1)
  var_push, 2, var_435_4_views, LOCAL(2), 1, var_435_4_views,
  // !y next_y
  LET, 1, LOCAL(3), 1, var_432_4_y,
  // next
  var_next, 0, TAIL_CALL,
  POS(443, 11),
  POS(444, 52),
  POS(444, 23),
  POS(444, 11),
  POS(445, 11),
  POS(446, 11),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_41 = {
  t_lambda_41, NULL, 6, 1,
  {"443_29_next_y\000"}
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_428_5_pane_description, 1, LOCAL(1),
  //  pane_description.is_a_list:
  LET, 2, LOCAL(1), lambda_43, TAIL_CALL,
  POS(448, 25),
  POS(448, 7)
};

static FUNCTION_INFO i_lambda_42 = {
  t_lambda_42, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  // $fixed_height 0
  LET, 1, num_0, 1, var_449_8_fixed_height,
  // $flex_height_count 0
  LET, 1, num_0, 1, var_450_8_flex_height_count,
  // for_each pane_description
  var_for_each, 3, var_428_5_pane_description, lambda_44, lambda_47, TAIL_CALL,
  POS(449, 7),
  POS(450, 7),
  POS(451, 7)
};

static FUNCTION_INFO i_lambda_43 = {
  t_lambda_43, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  1, // parameters
  var_452_12_pane_height,
  // pane_height < 1:
  var_std__less, 2, var_452_12_pane_height, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_45, lambda_46, TAIL_CALL,
  POS(454, 13),
  POS(453, 11)
};

static FUNCTION_INFO i_lambda_44 = {
  t_lambda_44, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  // inc &flex_height_count
  var_inc, 1, var_450_8_flex_height_count, 1, var_450_8_flex_height_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(455, 15),
  POS(456, 15)
};

static FUNCTION_INFO i_lambda_45 = {
  t_lambda_45, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  // plus &fixed_height pane_height
  var_plus, 2, var_449_8_fixed_height, var_452_12_pane_height, 1, var_449_8_fixed_height,
  // next
  var_next, 0, TAIL_CALL,
  POS(458, 15),
  POS(459, 15)
};

static FUNCTION_INFO i_lambda_46 = {
  t_lambda_46, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_47[] = {
  2, // locals
  0, // parameters
  // fixed_height+flex_height_count > height
  var_std__plus, 2, var_449_8_fixed_height, var_450_8_flex_height_count, 1, LOCAL(1),
  // height
  var_std__less, 2, var_434_4_height, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_48, lambda_49, TAIL_CALL,
  POS(462, 13),
  POS(462, 46),
  POS(461, 11)
};

static FUNCTION_INFO i_lambda_47 = {
  t_lambda_47, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(463, 15)
};

static FUNCTION_INFO i_lambda_48 = {
  t_lambda_48, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  // $flex_height height-fixed_height
  var_std__minus, 2, var_434_4_height, var_449_8_fixed_height, 1, var_465_16_flex_height,
  // $remaining_flex_height flex_height
  LET, 1, var_465_16_flex_height, 1, var_466_16_remaining_flex_height,
  // for_each pane_description
  var_for_each, 3, var_428_5_pane_description, lambda_50, func_2_return, TAIL_CALL,
  POS(465, 15),
  POS(466, 15),
  POS(467, 15)
};

static FUNCTION_INFO i_lambda_49 = {
  t_lambda_49, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_50[] = {
  1, // locals
  1, // parameters
  var_468_20_pane_height,
  // pane_height < 1:
  var_std__less, 2, var_468_20_pane_height, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_51, func_2_create_pane_view, TAIL_CALL,
  POS(470, 21),
  POS(469, 19)
};

static FUNCTION_INFO i_lambda_50 = {
  t_lambda_50, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_51[] = {
  1, // locals
  0, // parameters
  // dec &flex_height_count
  var_dec, 1, var_450_8_flex_height_count, 1, var_450_8_flex_height_count,
  // flex_height_count == 0
  var_std__equal, 2, var_450_8_flex_height_count, num_0, 1, LOCAL(1),
  // !pane_height
  var_if, 3, LOCAL(1), lambda_52, lambda_53, 1, var_468_20_pane_height,
  // minus &remaining_flex_height pane_height
  var_minus, 2, var_466_16_remaining_flex_height, var_468_20_pane_height, 1, var_466_16_remaining_flex_height,
  // create_pane_view
  func_2_create_pane_view, 0, TAIL_CALL,
  POS(471, 23),
  POS(474, 27),
  POS(472, 23),
  POS(483, 23),
  POS(484, 23)
};

static FUNCTION_INFO i_lambda_51 = {
  t_lambda_51, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  //  flex_height
  LET, 1, var_465_16_flex_height, TAIL_CALL,
  POS(475, 29)
};

static FUNCTION_INFO i_lambda_52 = {
  t_lambda_52, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_53[] = {
  6, // locals
  0, // parameters
  // pane_height*flex_height).to_integer 1)
  var_std__times, 2, var_468_20_pane_height, var_465_16_flex_height, 1, LOCAL(1),
  // round(pane_height*flex_height).to_integer 1)
  var_round, 1, LOCAL(1), 1, LOCAL(2),
  // to_integer 1)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(3),
  // max(round(pane_height*flex_height).to_integer 1)
  var_max, 2, LOCAL(3), num_1, 1, LOCAL(4),
  // remaining_flex_height-flex_height_count #
  var_std__minus, 2, var_466_16_remaining_flex_height, var_450_8_flex_height_count, 1, LOCAL(5),
  // min
  var_min, 2, LOCAL(4), LOCAL(5), 1, LOCAL(6),
  // 
  LET, 1, LOCAL(6), TAIL_CALL,
  POS(478, 41),
  POS(478, 35),
  POS(478, 66),
  POS(478, 31),
  POS(479, 31),
  POS(477, 29),
  POS(476, 29)
};

static FUNCTION_INFO i_lambda_53 = {
  t_lambda_53, NULL, 7, 0,
  {}
};

static TAB_NUM t_func_2_create_pane_view[] = {
  3, // locals
  0, // parameters
  // y+pane_height-1)
  var_std__plus, 2, var_432_4_y, var_468_20_pane_height, 1, LOCAL(1),
  // y+pane_height-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // create_view(screen x y width y+pane_height-1)
  var_create_view, 5, var_427_5_screen, var_431_4_x, var_432_4_y, var_433_4_width, LOCAL(2), 1, LOCAL(3),
  // push &views create_view(screen x y width y+pane_height-1)
  var_push, 2, var_435_4_views, LOCAL(3), 1, var_435_4_views,
  // plus &y pane_height
  var_plus, 2, var_432_4_y, var_468_20_pane_height, 1, var_432_4_y,
  // next
  var_next, 0, TAIL_CALL,
  POS(488, 62),
  POS(488, 62),
  POS(488, 33),
  POS(488, 21),
  POS(489, 21),
  POS(490, 21)
};

static FUNCTION_INFO i_func_2_create_pane_view = {
  t_func_2_create_pane_view, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_54[] = {
  0, // locals
  0, // parameters
  //  true -> undefined
  LET, 2, var_true, lambda_55, TAIL_CALL,
  POS(492, 7)
};

static FUNCTION_INFO i_lambda_54 = {
  t_lambda_54, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(492, 15)
};

static FUNCTION_INFO i_lambda_55 = {
  t_lambda_55, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_2_return[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_430_4_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_56, lambda_57, TAIL_CALL,
  POS(496, 7),
  POS(495, 5)
};

static FUNCTION_INFO i_func_2_return = {
  t_func_2_return, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  //  views
  LET, 1, var_435_4_views, TAIL_CALL,
  POS(497, 9)
};

static FUNCTION_INFO i_lambda_56 = {
  t_lambda_56, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  // spread views
  var_spread, 1, var_435_4_views, TAIL_CALL,
  POS(498, 9)
};

static FUNCTION_INFO i_lambda_57 = {
  t_lambda_57, NULL, 1, 0,
  {}
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
  {FLT_FUNCTION, 0, {.func_info = &i_func_basic_private__abs_x}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_basic_private__abs_y}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__create_view}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_terminal___set_clear_colour}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_terminal___set_draw_colour}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_terminal___set_text_attributes}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_terminal___add_text_attributes}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_terminal___remove_text_attributes}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_terminal___get_clear_colour}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_terminal___get_draw_colour}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_terminal___get_text_attributes}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_terminal___move}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__view___draw_text}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__view___draw_attributed_text}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__view___clear}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__view___invert}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__view___draw_shadow}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_clip_rectangle}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__view___copy}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__create_vertical_panes}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_24}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_25}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_26}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_27}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_28}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_29}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_30}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_31}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_32}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_33}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_34}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_create_pane_view}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_35}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_36}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_return}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_37}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_38}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__create_horizontal_panes}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_39}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_40}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_41}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_42}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_43}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_44}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_45}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_46}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_47}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_48}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_49}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_50}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_51}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_52}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_53}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_2_create_pane_view}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_54}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_55}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_2_return}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_56}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_57}}
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
  {var_remove_text_attributes, -func_std_types__generic_terminal___remove_text_attributes},
  {var_get_clear_colour, -func_std_types__generic_terminal___get_clear_colour},
  {var_get_draw_colour, -func_std_types__generic_terminal___get_draw_colour},
  {var_get_text_attributes, -func_std_types__generic_terminal___get_text_attributes},
  {var_move, -func_std_types__generic_terminal___move}
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
    FOT_POLYMORPHIC, 0, 0,
    "get_draw_colour\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "get_clear_colour\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "get_text_attributes\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "move\000std", NULL,
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
    "fill_rectangle\000std", NULL,
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
    FOT_DERIVED, 0, 26,
    "generic_terminal\000std_types", std_types__generic_terminal__attributes,
    {"resource\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "resource\000std_types", NULL,
    {.position = POS(84, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "type_of\000", NULL,
    {.position = POS(86, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(86, 38)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "x_of\000", NULL,
    {.position = POS(87, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "y_of\000", NULL,
    {.position = POS(88, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "plot_x_resolution_of\000", NULL,
    {.position = POS(89, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "plot_y_resolution_of\000", NULL,
    {.position = POS(90, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "width_of\000", NULL,
    {.position = POS(91, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "height_of\000", NULL,
    {.position = POS(92, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "character_width_of\000", NULL,
    {.position = POS(93, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "ascent_of\000", NULL,
    {.position = POS(94, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "descent_of\000", NULL,
    {.position = POS(95, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "character_height_of\000", NULL,
    {.position = POS(96, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "line_spacing_of\000", NULL,
    {.position = POS(97, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "line_height_of\000", NULL,
    {.position = POS(98, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "baseline_of\000", NULL,
    {.position = POS(99, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "clear_colour_of\000", NULL,
    {.position = POS(100, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "draw_colour_of\000", NULL,
    {.position = POS(101, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "text_attributes_of\000", NULL,
    {.position = POS(102, 30)}
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
    "106_25_screen\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "106_32_x\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(108, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(109, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(107, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "abs_y\000basic_private", NULL,
    {.const_idx = -func_basic_private__abs_y}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "112_25_screen\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "112_32_y\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_view\000std", NULL,
    {.const_idx = -func_std__create_view}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(132, 13)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "set_clear_colour\000", NULL,
    {.position = POS(146, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "set_draw_colour\000", NULL,
    {.position = POS(153, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "set_text_attributes\000", NULL,
    {.position = POS(160, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "add_text_attributes\000", NULL,
    {.position = POS(167, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_or\000std", NULL,
    {.position = POS(172, 35)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "remove_text_attributes\000", NULL,
    {.position = POS(174, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(181, 58)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000std", NULL,
    {.position = POS(181, 27)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "get_clear_colour\000", NULL,
    {.position = POS(183, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "get_draw_colour\000", NULL,
    {.position = POS(189, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "get_text_attributes\000", NULL,
    {.position = POS(195, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "move\000", NULL,
    {.position = POS(201, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "copy\000", NULL,
    {.position = POS(211, 3)}
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
    {.position = POS(217, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(225, 9)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "draw_attributed_text\000", NULL,
    {.position = POS(233, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "clear\000", NULL,
    {.position = POS(248, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "250_5_view\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "252_5_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "253_5_y\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(257, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(257, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "invert\000", NULL,
    {.position = POS(267, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "draw_shadow\000", NULL,
    {.position = POS(279, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "291_24_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "291_26_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "291_28_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "291_34_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "292_4_view_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "293_4_view_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "294_4_view_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "295_4_view_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "300_4_left_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "301_4_top_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "317_5_destination\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "318_5_source\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "319_5_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "320_5_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "321_5_sx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "322_5_sy\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "323_5_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "324_5_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "328_4_view_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "329_4_view_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "330_4_view_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "331_4_view_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "334_4_dx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "335_4_dy\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(341, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(341, 14)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_vertical_panes\000std", NULL,
    {.const_idx = -func_std__create_vertical_panes}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "356_5_screen\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "357_5_pane_description\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "359_4_rc\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(359, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "360_4_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "361_4_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "362_4_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "363_4_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "364_4_views\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(364, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_integer\000", NULL,
    {.position = POS(366, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "368_8_iter\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bresenham\000", NULL,
    {.position = POS(368, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next_value\000", NULL,
    {.position = POS(369, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_view\000", NULL,
    {.position = POS(373, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(373, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(375, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "repeat\000", NULL,
    {.position = POS(370, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(377, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "378_8_fixed_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "379_8_flex_width_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "381_12_pane_width\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(384, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(387, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "394_16_flex_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "395_16_remaining_flex_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "397_20_pane_width\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(400, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(403, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "round\000", NULL,
    {.position = POS(403, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(403, 60)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(403, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "min\000", NULL,
    {.position = POS(402, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000", NULL,
    {.position = POS(408, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(396, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(417, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(365, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(421, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spread\000", NULL,
    {.position = POS(423, 9)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_horizontal_panes\000std", NULL,
    {.const_idx = -func_std__create_horizontal_panes}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "427_5_screen\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "428_5_pane_description\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "430_4_rc\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "431_4_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "432_4_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "433_4_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "434_4_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "435_4_views\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "439_8_iter\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "449_8_fixed_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "450_8_flex_height_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "452_12_pane_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "465_16_flex_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "466_16_remaining_flex_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "468_20_pane_height\000", NULL
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
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  93, // number of constants
  183, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
