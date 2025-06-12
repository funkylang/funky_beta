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
  func_std_types__view___draw_text = -27,
  func_std_types__view___draw_attributed_text = -28,
  func_std_types__view___clear = -29,
  lambda_5 = -30,
  lambda_6 = -31,
  func_std_types__view___invert = -32,
  func_std_types__view___draw_shadow = -33,
  func_clip_rectangle = -34,
  lambda_7 = -35,
  lambda_8 = -36,
  lambda_9 = -37,
  lambda_10 = -38,
  lambda_11 = -39,
  lambda_12 = -40,
  func_std_types__view___copy = -41,
  lambda_13 = -42,
  lambda_14 = -43,
  lambda_15 = -44,
  lambda_16 = -45,
  lambda_17 = -46,
  lambda_18 = -47,
  lambda_19 = -48,
  lambda_20 = -49,
  lambda_21 = -50,
  func_std__create_vertical_panes = -51,
  lambda_22 = -52,
  lambda_23 = -53,
  lambda_24 = -54,
  lambda_25 = -55,
  lambda_26 = -56,
  lambda_27 = -57,
  lambda_28 = -58,
  lambda_29 = -59,
  lambda_30 = -60,
  lambda_31 = -61,
  lambda_32 = -62,
  lambda_33 = -63,
  lambda_34 = -64,
  func_create_pane_view = -65,
  lambda_35 = -66,
  lambda_36 = -67,
  func_return = -68,
  lambda_37 = -69,
  lambda_38 = -70,
  func_std__create_horizontal_panes = -71,
  lambda_39 = -72,
  lambda_40 = -73,
  lambda_41 = -74,
  lambda_42 = -75,
  lambda_43 = -76,
  lambda_44 = -77,
  lambda_45 = -78,
  lambda_46 = -79,
  lambda_47 = -80,
  lambda_48 = -81,
  lambda_49 = -82,
  lambda_50 = -83,
  lambda_51 = -84,
  lambda_52 = -85,
  lambda_53 = -86,
  func_2_create_pane_view = -87,
  lambda_54 = -88,
  lambda_55 = -89,
  func_2_return = -90,
  lambda_56 = -91,
  lambda_57 = -92
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
  var_104_25_screen, // dynamic
  var_104_32_x, // dynamic
  var_std__less, // extern
  var_std__plus, // extern
  var_if, // extern
  var_basic_private__abs_y, // initialized
  var_110_25_screen, // dynamic
  var_110_32_y, // dynamic
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
  var_basic_private__draw_text, // attribute
  var_basic_private__draw_attributed_text, // attribute
  var_basic_private__clear, // attribute
  var_draw_text, // extern polymorphic
  var_create_string, // extern
  var_draw_attributed_text, // extern polymorphic
  var_clear, // extern polymorphic
  var_236_5_view, // dynamic
  var_238_5_x, // dynamic
  var_239_5_y, // dynamic
  var_is_undefined, // extern
  var_update_if, // extern
  var_invert, // extern polymorphic
  var_draw_shadow, // extern polymorphic
  var_277_24_x, // dynamic
  var_277_26_y, // dynamic
  var_277_28_width, // dynamic
  var_277_34_height, // dynamic
  var_278_4_view_x, // dynamic
  var_279_4_view_y, // dynamic
  var_280_4_view_width, // dynamic
  var_281_4_view_height, // dynamic
  var_286_4_left_x, // dynamic
  var_287_4_top_y, // dynamic
  var_copy, // extern polymorphic
  var_303_5_destination, // dynamic
  var_304_5_source, // dynamic
  var_305_5_x, // dynamic
  var_306_5_y, // dynamic
  var_307_5_sx, // dynamic
  var_308_5_sy, // dynamic
  var_309_5_width, // dynamic
  var_310_5_height, // dynamic
  var_314_4_view_x, // dynamic
  var_315_4_view_y, // dynamic
  var_316_4_view_width, // dynamic
  var_317_4_view_height, // dynamic
  var_320_4_dx, // dynamic
  var_321_4_dy, // dynamic
  var_std__not, // extern
  var_std__or, // extern
  var_std__create_vertical_panes, // initialized
  var_342_5_screen, // dynamic
  var_343_5_pane_description, // dynamic
  var_345_4_rc, // dynamic
  var_result_count, // extern
  var_346_4_x, // dynamic
  var_347_4_y, // dynamic
  var_348_4_width, // dynamic
  var_349_4_height, // dynamic
  var_350_4_views, // dynamic
  var_empty_list, // extern
  var_is_an_integer, // extern
  var_354_8_iter, // dynamic
  var_bresenham, // extern
  var_next_value, // extern
  var_create_view, // extern
  var_push, // extern
  var_next, // extern
  var_repeat, // extern
  var_is_a_list, // extern
  var_364_8_fixed_width, // dynamic
  var_365_8_flex_width_count, // dynamic
  var_367_12_pane_width, // dynamic
  var_inc, // extern
  var_plus, // extern
  var_380_16_flex_width, // dynamic
  var_381_16_remaining_flex_width, // dynamic
  var_383_20_pane_width, // dynamic
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
  var_413_5_screen, // dynamic
  var_414_5_pane_description, // dynamic
  var_416_4_rc, // dynamic
  var_417_4_x, // dynamic
  var_418_4_y, // dynamic
  var_419_4_width, // dynamic
  var_420_4_height, // dynamic
  var_421_4_views, // dynamic
  var_425_8_iter, // dynamic
  var_435_8_fixed_height, // dynamic
  var_436_8_flex_height_count, // dynamic
  var_438_12_pane_height, // dynamic
  var_451_16_flex_height, // dynamic
  var_452_16_remaining_flex_height, // dynamic
  var_454_20_pane_height, // dynamic
  var__END
};


static TAB_NUM t_func_basic_private__abs_x[] = {
  1, // locals
  2, // parameters
  var_104_25_screen,
  var_104_32_x,
  // x < 0
  var_std__less, 2, var_104_32_x, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(106, 5),
  POS(105, 3)
};

static FUNCTION_INFO i_func_basic_private__abs_x = {
  t_func_basic_private__abs_x, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  3, // locals
  0, // parameters
  // width_of(screen)+x+1
  var_width_of, 1, var_104_25_screen, 1, LOCAL(1),
  // width_of(screen)+x+1
  var_std__plus, 2, LOCAL(1), var_104_32_x, 1, LOCAL(2),
  // width_of(screen)+x+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  width_of(screen)+x+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(107, 8),
  POS(107, 8),
  POS(107, 8),
  POS(107, 7)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  x
  LET, 1, var_104_32_x, TAIL_CALL,
  POS(108, 7)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_basic_private__abs_y[] = {
  1, // locals
  2, // parameters
  var_110_25_screen,
  var_110_32_y,
  // y < 0
  var_std__less, 2, var_110_32_y, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(112, 5),
  POS(111, 3)
};

static FUNCTION_INFO i_func_basic_private__abs_y = {
  t_func_basic_private__abs_y, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  3, // locals
  0, // parameters
  // height_of(screen)+y+1
  var_height_of, 1, var_110_25_screen, 1, LOCAL(1),
  // height_of(screen)+y+1
  var_std__plus, 2, LOCAL(1), var_110_32_y, 1, LOCAL(2),
  // height_of(screen)+y+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  height_of(screen)+y+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(113, 8),
  POS(113, 8),
  POS(113, 8),
  POS(113, 7)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  y
  LET, 1, var_110_32_y, TAIL_CALL,
  POS(114, 7)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__create_view[] = {
  25, // locals
  5, // parameters
  LOCAL(21), // 118_5_screen
  LOCAL(22), // 119_5_left_x
  LOCAL(23), // 120_5_top_y
  LOCAL(24), // 121_5_right_x
  LOCAL(25), // 122_5_bottom_y
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
  POS(124, 3),
  POS(125, 3),
  POS(126, 3),
  POS(127, 3),
  POS(130, 13),
  POS(130, 13),
  POS(130, 13),
  POS(131, 13),
  POS(131, 13),
  POS(131, 13),
  POS(132, 18),
  POS(132, 18),
  POS(133, 19),
  POS(133, 19),
  POS(134, 27),
  POS(135, 18),
  POS(136, 19),
  POS(137, 28),
  POS(138, 24),
  POS(139, 23),
  POS(140, 20),
  POS(141, 24),
  POS(142, 23),
  POS(129, 5),
  POS(128, 3),
  LOCAL(24),
  LOCAL(21),
  LOCAL(25),
  LOCAL(22),
  LOCAL(23)
};

static FUNCTION_INFO i_func_std__create_view = {
  t_func_std__create_view, NULL, 25, 5,
  {"121_5_right_x\000", "118_5_screen\000", "122_5_bottom_y\000", "119_5_left_x\000", "120_5_top_y\000"}
};

static TAB_NUM t_func_std_types__generic_terminal___set_clear_colour[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 146_5_terminal
  LOCAL(3), // 147_5_colour
  // .clear_colour_of colour)
  LET, -1, LOCAL(2), var_clear_colour_of, LOCAL(3), LOCAL(1),
  // -> terminal(.clear_colour_of colour)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(149, 15),
  POS(149, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__generic_terminal___set_clear_colour = {
  t_func_std_types__generic_terminal___set_clear_colour, NULL, 2, 2,
  {"146_5_terminal\000", "147_5_colour\000"}
};

static TAB_NUM t_func_std_types__generic_terminal___set_draw_colour[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 153_5_terminal
  LOCAL(3), // 154_5_colour
  // .draw_colour_of colour)
  LET, -1, LOCAL(2), var_draw_colour_of, LOCAL(3), LOCAL(1),
  // -> terminal(.draw_colour_of colour)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(156, 15),
  POS(156, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__generic_terminal___set_draw_colour = {
  t_func_std_types__generic_terminal___set_draw_colour, NULL, 2, 2,
  {"154_5_colour\000", "153_5_terminal\000"}
};

static TAB_NUM t_func_std_types__generic_terminal___set_text_attributes[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 160_5_terminal
  LOCAL(3), // 161_5_attributes
  // .text_attributes_of attributes)
  LET, -1, LOCAL(2), var_text_attributes_of, LOCAL(3), LOCAL(1),
  // -> terminal(.text_attributes_of attributes)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(163, 15),
  POS(163, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__generic_terminal___set_text_attributes = {
  t_func_std_types__generic_terminal___set_text_attributes, NULL, 2, 2,
  {"161_5_attributes\000", "160_5_terminal\000"}
};

static TAB_NUM t_func_std_types__generic_terminal___add_text_attributes[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 167_5_terminal
  LOCAL(5), // 168_5_attributes
  // text_attributes_of(terminal) | attributes)
  var_text_attributes_of, 1, LOCAL(4), 1, LOCAL(1),
  // text_attributes_of(terminal) | attributes)
  var_std__bit_or, 2, LOCAL(1), LOCAL(5), 1, LOCAL(2),
  // .text_attributes_of text_attributes_of(terminal) | attributes)
  LET, -1, LOCAL(4), var_text_attributes_of, LOCAL(2), LOCAL(3),
  // -> terminal(.text_attributes_of text_attributes_of(terminal) | attributes)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(170, 35),
  POS(170, 35),
  POS(170, 15),
  POS(170, 3),
  LOCAL(5),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__generic_terminal___add_text_attributes = {
  t_func_std_types__generic_terminal___add_text_attributes, NULL, 4, 2,
  {"168_5_attributes\000", "167_5_terminal\000"}
};

static TAB_NUM t_func_std_types__generic_terminal___remove_text_attributes[] = {
  6, // locals
  2, // parameters
  LOCAL(5), // 174_5_terminal
  LOCAL(6), // 175_5_attributes
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
  POS(179, 27),
  POS(179, 58),
  POS(179, 27),
  POS(178, 5),
  POS(177, 3),
  LOCAL(5),
  LOCAL(6)
};

static FUNCTION_INFO i_func_std_types__generic_terminal___remove_text_attributes = {
  t_func_std_types__generic_terminal___remove_text_attributes, NULL, 5, 2,
  {"174_5_terminal\000", "175_5_attributes\000"}
};

static TAB_NUM t_func_std_types__generic_terminal___get_clear_colour[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 183_5_terminal
  // clear_colour_of(terminal)
  var_clear_colour_of, 1, LOCAL(2), 1, LOCAL(1),
  // -> clear_colour_of(terminal)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(185, 6),
  POS(185, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__generic_terminal___get_clear_colour = {
  t_func_std_types__generic_terminal___get_clear_colour, NULL, 2, 1,
  {"183_5_terminal\000"}
};

static TAB_NUM t_func_std_types__generic_terminal___get_draw_colour[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 189_5_terminal
  // draw_colour_of(terminal)
  var_draw_colour_of, 1, LOCAL(2), 1, LOCAL(1),
  // -> draw_colour_of(terminal)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(191, 6),
  POS(191, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__generic_terminal___get_draw_colour = {
  t_func_std_types__generic_terminal___get_draw_colour, NULL, 2, 1,
  {"189_5_terminal\000"}
};

static TAB_NUM t_func_std_types__generic_terminal___get_text_attributes[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 195_5_terminal
  // text_attributes_of(terminal)
  var_text_attributes_of, 1, LOCAL(2), 1, LOCAL(1),
  // -> text_attributes_of(terminal)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(197, 6),
  POS(197, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__generic_terminal___get_text_attributes = {
  t_func_std_types__generic_terminal___get_text_attributes, NULL, 2, 1,
  {"195_5_terminal\000"}
};

static TAB_NUM t_func_std_types__view___draw_text[] = {
  12, // locals
  -5, // parameters
  MANDATORY_PARAMETER, LOCAL(7), // 205_5_view
  MANDATORY_PARAMETER, LOCAL(8), // 206_5_screen
  MANDATORY_PARAMETER, LOCAL(9), // 207_5_x
  MANDATORY_PARAMETER, LOCAL(10), // 208_5_y
  REST_PARAMETER, LOCAL(11), // 209_5_args
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
  POS(211, 3),
  POS(215, 5),
  POS(215, 5),
  POS(215, 5),
  POS(216, 5),
  POS(216, 5),
  POS(216, 5),
  POS(212, 3),
  LOCAL(8),
  LOCAL(7),
  LOCAL(10),
  LOCAL(12),
  LOCAL(9),
  LOCAL(11)
};

static FUNCTION_INFO i_func_std_types__view___draw_text = {
  t_func_std_types__view___draw_text, NULL, 8, 6,
  {"206_5_screen\000", "205_5_view\000", "208_5_y\000", "211_4_text\000", "207_5_x\000", "209_5_args\000"}
};

static TAB_NUM t_func_std_types__view___draw_attributed_text[] = {
  11, // locals
  5, // parameters
  LOCAL(7), // 221_5_view
  LOCAL(8), // 222_5_screen
  LOCAL(9), // 223_5_x
  LOCAL(10), // 224_5_y
  LOCAL(11), // 225_5_attributed_text
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
  POS(230, 5),
  POS(230, 5),
  POS(230, 5),
  POS(231, 5),
  POS(231, 5),
  POS(231, 5),
  POS(227, 3),
  LOCAL(8),
  LOCAL(10),
  LOCAL(11),
  LOCAL(7),
  LOCAL(9)
};

static FUNCTION_INFO i_func_std_types__view___draw_attributed_text = {
  t_func_std_types__view___draw_attributed_text, NULL, 7, 5,
  {"222_5_screen\000", "224_5_y\000", "225_5_attributed_text\000", "221_5_view\000", "223_5_x\000"}
};

static TAB_NUM t_func_std_types__view___clear[] = {
  9, // locals
  -6, // parameters
  MANDATORY_PARAMETER, var_236_5_view,
  MANDATORY_PARAMETER, LOCAL(7), // 237_5_screen
  num_1, var_238_5_x,
  num_1, var_239_5_y,
  var_undefined, LOCAL(8), // 240_5_width
  var_undefined, LOCAL(9), // 241_5_height
  // is_undefined &width -> width_of(view)-x+1
  var_is_undefined, 1, LOCAL(8), 1, LOCAL(1),
  // update_if width.is_undefined &width -> width_of(view)-x+1
  var_update_if, 3, LOCAL(1), LOCAL(8), lambda_5, 1, LOCAL(8),
  // is_undefined &height -> height_of(view)-y+1
  var_is_undefined, 1, LOCAL(9), 1, LOCAL(1),
  // update_if height.is_undefined &height -> height_of(view)-y+1
  var_update_if, 3, LOCAL(1), LOCAL(9), lambda_6, 1, LOCAL(9),
  // x_of(view)+x-1
  var_x_of, 1, var_236_5_view, 1, LOCAL(1),
  // x_of(view)+x-1
  var_std__plus, 2, LOCAL(1), var_238_5_x, 1, LOCAL(2),
  // x_of(view)+x-1
  var_std__minus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  // y_of(view)+y-1
  var_y_of, 1, var_236_5_view, 1, LOCAL(4),
  // y_of(view)+y-1
  var_std__plus, 2, LOCAL(4), var_239_5_y, 1, LOCAL(5),
  // y_of(view)+y-1
  var_std__minus, 2, LOCAL(5), num_1, 1, LOCAL(6),
  // basic_private::clear
  var_basic_private__clear, 6, LOCAL(7), var_236_5_view, LOCAL(3), LOCAL(6), LOCAL(8), LOCAL(9), TAIL_CALL,
  POS(243, 19),
  POS(243, 3),
  POS(244, 20),
  POS(244, 3),
  POS(248, 5),
  POS(248, 5),
  POS(248, 5),
  POS(249, 5),
  POS(249, 5),
  POS(249, 5),
  POS(245, 3),
  LOCAL(7),
  LOCAL(8),
  LOCAL(9)
};

static FUNCTION_INFO i_func_std_types__view___clear = {
  t_func_std_types__view___clear, NULL, 11, 3,
  {"237_5_screen\000", "240_5_width\000", "241_5_height\000"}
};

static TAB_NUM t_lambda_5[] = {
  3, // locals
  0, // parameters
  // width_of(view)-x+1
  var_width_of, 1, var_236_5_view, 1, LOCAL(1),
  // width_of(view)-x+1
  var_std__minus, 2, LOCAL(1), var_238_5_x, 1, LOCAL(2),
  // width_of(view)-x+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  width_of(view)-x+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(243, 42),
  POS(243, 42),
  POS(243, 42),
  POS(243, 41)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  3, // locals
  0, // parameters
  // height_of(view)-y+1
  var_height_of, 1, var_236_5_view, 1, LOCAL(1),
  // height_of(view)-y+1
  var_std__minus, 2, LOCAL(1), var_239_5_y, 1, LOCAL(2),
  // height_of(view)-y+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  height_of(view)-y+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(244, 44),
  POS(244, 44),
  POS(244, 44),
  POS(244, 43)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_std_types__view___invert[] = {
  6, // locals
  -6, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 255_5_view
  MANDATORY_PARAMETER, LOCAL(2), // 256_5_screen
  num_1, LOCAL(3), // 257_5_x
  num_1, LOCAL(4), // 258_5_y
  var_undefined, LOCAL(5), // 259_5_width
  var_undefined, LOCAL(6), // 260_5_height
  // clip_rectangle view &x &y &width &height
  func_clip_rectangle, 5, LOCAL(1), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), 4, LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6),
  // invert screen x y width height
  var_invert, 5, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), TAIL_CALL,
  POS(262, 3),
  POS(263, 3),
  LOCAL(2),
  LOCAL(4),
  LOCAL(5),
  LOCAL(3),
  LOCAL(1),
  LOCAL(6)
};

static FUNCTION_INFO i_func_std_types__view___invert = {
  t_func_std_types__view___invert, NULL, 2, 6,
  {"256_5_screen\000", "258_5_y\000", "259_5_width\000", "257_5_x\000", "255_5_view\000", "260_5_height\000"}
};

static TAB_NUM t_func_std_types__view___draw_shadow[] = {
  6, // locals
  -6, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 267_5_view
  MANDATORY_PARAMETER, LOCAL(2), // 268_5_screen
  num_1, LOCAL(3), // 269_5_x
  num_1, LOCAL(4), // 270_5_y
  var_undefined, LOCAL(5), // 271_5_width
  var_undefined, LOCAL(6), // 272_5_height
  // clip_rectangle view &x &y &width &height
  func_clip_rectangle, 5, LOCAL(1), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), 4, LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6),
  // draw_shadow screen x y width height
  var_draw_shadow, 5, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), TAIL_CALL,
  POS(274, 3),
  POS(275, 3),
  LOCAL(6),
  LOCAL(2),
  LOCAL(1),
  LOCAL(3),
  LOCAL(5),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__view___draw_shadow = {
  t_func_std_types__view___draw_shadow, NULL, 2, 6,
  {"272_5_height\000", "268_5_screen\000", "267_5_view\000", "269_5_x\000", "271_5_width\000", "270_5_y\000"}
};

static TAB_NUM t_func_clip_rectangle[] = {
  5, // locals
  5, // parameters
  LOCAL(3), // 277_19_view
  var_277_24_x,
  var_277_26_y,
  var_277_28_width,
  var_277_34_height,
  // $view_x x_of(view)
  var_x_of, 1, LOCAL(3), 1, var_278_4_view_x,
  // $view_y y_of(view)
  var_y_of, 1, LOCAL(3), 1, var_279_4_view_y,
  // $view_width width_of(view)
  var_width_of, 1, LOCAL(3), 1, var_280_4_view_width,
  // $view_height height_of(view)
  var_height_of, 1, LOCAL(3), 1, var_281_4_view_height,
  // is_undefined &width -> view_width-x+1
  var_is_undefined, 1, var_277_28_width, 1, LOCAL(1),
  // update_if width.is_undefined &width -> view_width-x+1
  var_update_if, 3, LOCAL(1), var_277_28_width, lambda_7, 1, var_277_28_width,
  // is_undefined &height -> view_height-y+1
  var_is_undefined, 1, var_277_34_height, 1, LOCAL(1),
  // update_if height.is_undefined &height -> view_height-y+1
  var_update_if, 3, LOCAL(1), var_277_34_height, lambda_8, 1, var_277_34_height,
  // view_x+x-1
  var_std__plus, 2, var_278_4_view_x, var_277_24_x, 1, LOCAL(1),
  // $left_x view_x+x-1
  var_std__minus, 2, LOCAL(1), num_1, 1, var_286_4_left_x,
  // view_y+y-1
  var_std__plus, 2, var_279_4_view_y, var_277_26_y, 1, LOCAL(1),
  // $top_y view_y+y-1
  var_std__minus, 2, LOCAL(1), num_1, 1, var_287_4_top_y,
  // $right_x left_x+width # exclusive
  var_std__plus, 2, var_286_4_left_x, var_277_28_width, 1, LOCAL(4),
  // $bottom_y top_y+height # exclusive
  var_std__plus, 2, var_287_4_top_y, var_277_34_height, 1, LOCAL(5),
  // left_x < view_x &left_x &width -> view_x width-(view_x-left_x)
  var_std__less, 2, var_286_4_left_x, var_278_4_view_x, 1, LOCAL(1),
  // update_if left_x < view_x &left_x &width -> view_x width-(view_x-left_x)
  var_update_if, 4, LOCAL(1), var_286_4_left_x, var_277_28_width, lambda_9, 2, var_286_4_left_x, var_277_28_width,
  // top_y < view_y &top_y &height -> view_y height-(view_y-top_y)
  var_std__less, 2, var_287_4_top_y, var_279_4_view_y, 1, LOCAL(1),
  // update_if top_y < view_y &top_y &height -> view_y height-(view_y-top_y)
  var_update_if, 4, LOCAL(1), var_287_4_top_y, var_277_34_height, lambda_10, 2, var_287_4_top_y, var_277_34_height,
  // view_x+view_width &right_x -> view_x+view_width
  var_std__plus, 2, var_278_4_view_x, var_280_4_view_width, 1, LOCAL(1),
  // view_x+view_width &right_x -> view_x+view_width
  var_std__less, 2, LOCAL(1), LOCAL(4), 1, LOCAL(2),
  // update_if right_x > view_x+view_width &right_x -> view_x+view_width
  var_update_if, 3, LOCAL(2), LOCAL(4), lambda_11, 1, LOCAL(4),
  // view_y+view_height &bottom_y -> view_y+view_height
  var_std__plus, 2, var_279_4_view_y, var_281_4_view_height, 1, LOCAL(1),
  // view_y+view_height &bottom_y -> view_y+view_height
  var_std__less, 2, LOCAL(1), LOCAL(5), 1, LOCAL(2),
  // update_if bottom_y > view_y+view_height &bottom_y -> view_y+view_height
  var_update_if, 3, LOCAL(2), LOCAL(5), lambda_12, 1, LOCAL(5),
  // right_x-left_x bottom_y-top_y
  var_std__minus, 2, LOCAL(4), var_286_4_left_x, 1, LOCAL(1),
  // bottom_y-top_y
  var_std__minus, 2, LOCAL(5), var_287_4_top_y, 1, LOCAL(2),
  // -> left_x top_y right_x-left_x bottom_y-top_y
  LET, 4, var_286_4_left_x, var_287_4_top_y, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(278, 3),
  POS(279, 3),
  POS(280, 3),
  POS(281, 3),
  POS(283, 19),
  POS(283, 3),
  POS(284, 20),
  POS(284, 3),
  POS(286, 11),
  POS(286, 3),
  POS(287, 10),
  POS(287, 3),
  POS(288, 3),
  POS(289, 3),
  POS(293, 13),
  POS(293, 3),
  POS(294, 13),
  POS(294, 3),
  POS(295, 23),
  POS(295, 23),
  POS(295, 3),
  POS(296, 24),
  POS(296, 24),
  POS(296, 3),
  POS(298, 19),
  POS(298, 34),
  POS(298, 3),
  LOCAL(5),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_clip_rectangle = {
  t_func_clip_rectangle, NULL, 27, 3,
  {"289_4_bottom_y\000", "288_4_right_x\000", "277_19_view\000"}
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  0, // parameters
  // view_width-x+1
  var_std__minus, 2, var_280_4_view_width, var_277_24_x, 1, LOCAL(1),
  // view_width-x+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  //  view_width-x+1
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(283, 42),
  POS(283, 42),
  POS(283, 41)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_8[] = {
  2, // locals
  0, // parameters
  // view_height-y+1
  var_std__minus, 2, var_281_4_view_height, var_277_26_y, 1, LOCAL(1),
  // view_height-y+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  //  view_height-y+1
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(284, 44),
  POS(284, 44),
  POS(284, 43)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  2, // locals
  0, // parameters
  // view_x-left_x)
  var_std__minus, 2, var_278_4_view_x, var_286_4_left_x, 1, LOCAL(1),
  // width-(view_x-left_x)
  var_std__minus, 2, var_277_28_width, LOCAL(1), 1, LOCAL(2),
  //  view_x width-(view_x-left_x)
  LET, 2, var_278_4_view_x, LOCAL(2), TAIL_CALL,
  POS(293, 61),
  POS(293, 54),
  POS(293, 46)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_10[] = {
  2, // locals
  0, // parameters
  // view_y-top_y)
  var_std__minus, 2, var_279_4_view_y, var_287_4_top_y, 1, LOCAL(1),
  // height-(view_y-top_y)
  var_std__minus, 2, var_277_34_height, LOCAL(1), 1, LOCAL(2),
  //  view_y height-(view_y-top_y)
  LET, 2, var_279_4_view_y, LOCAL(2), TAIL_CALL,
  POS(294, 61),
  POS(294, 53),
  POS(294, 45)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // view_x+view_width
  var_std__plus, 2, var_278_4_view_x, var_280_4_view_width, 1, LOCAL(1),
  //  view_x+view_width
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(295, 53),
  POS(295, 52)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // view_y+view_height
  var_std__plus, 2, var_279_4_view_y, var_281_4_view_height, 1, LOCAL(1),
  //  view_y+view_height
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(296, 56),
  POS(296, 55)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__view___copy[] = {
  4, // locals
  -9, // parameters
  MANDATORY_PARAMETER, LOCAL(4), // 302_5_view
  MANDATORY_PARAMETER, var_303_5_destination,
  MANDATORY_PARAMETER, var_304_5_source,
  num_1, var_305_5_x,
  num_1, var_306_5_y,
  num_1, var_307_5_sx,
  num_1, var_308_5_sy,
  var_undefined, var_309_5_width,
  var_undefined, var_310_5_height,
  // is_undefined &width -> width_of(source)-sx+1
  var_is_undefined, 1, var_309_5_width, 1, LOCAL(1),
  // update_if width.is_undefined &width -> width_of(source)-sx+1
  var_update_if, 3, LOCAL(1), var_309_5_width, lambda_13, 1, var_309_5_width,
  // is_undefined &height -> height_of(source)-sy+1
  var_is_undefined, 1, var_310_5_height, 1, LOCAL(1),
  // update_if height.is_undefined &height -> height_of(source)-sy+1
  var_update_if, 3, LOCAL(1), var_310_5_height, lambda_14, 1, var_310_5_height,
  // $view_x x_of(view)
  var_x_of, 1, LOCAL(4), 1, var_314_4_view_x,
  // $view_y y_of(view)
  var_y_of, 1, LOCAL(4), 1, var_315_4_view_y,
  // $view_width width_of(view)
  var_width_of, 1, LOCAL(4), 1, var_316_4_view_width,
  // $view_height height_of(view)
  var_height_of, 1, LOCAL(4), 1, var_317_4_view_height,
  // x+view_x-1
  var_std__plus, 2, var_305_5_x, var_314_4_view_x, 1, LOCAL(1),
  // !x x+view_x-1
  var_std__minus, 2, LOCAL(1), num_1, 1, var_305_5_x,
  // y+view_y-1
  var_std__plus, 2, var_306_5_y, var_315_4_view_y, 1, LOCAL(1),
  // !y y+view_y-1
  var_std__minus, 2, LOCAL(1), num_1, 1, var_306_5_y,
  // $dx view_x-x
  var_std__minus, 2, var_314_4_view_x, var_305_5_x, 1, var_320_4_dx,
  // $dy view_y-y
  var_std__minus, 2, var_315_4_view_y, var_306_5_y, 1, var_321_4_dy,
  // 0 &x &sx &width -> view_x sx+dx width-dx
  var_std__less, 2, num_0, var_320_4_dx, 1, LOCAL(1),
  // update_if dx > 0 &x &sx &width -> view_x sx+dx width-dx
  var_update_if, 5, LOCAL(1), var_305_5_x, var_307_5_sx, var_309_5_width, lambda_15, 3, var_305_5_x, var_307_5_sx, var_309_5_width,
  // 0 &y &sy &height -> view_y sy+dy height-dy
  var_std__less, 2, num_0, var_321_4_dy, 1, LOCAL(1),
  // update_if dy > 0 &y &sy &height -> view_y sy+dy height-dy
  var_update_if, 5, LOCAL(1), var_306_5_y, var_308_5_sy, var_310_5_height, lambda_16, 3, var_306_5_y, var_308_5_sy, var_310_5_height,
  // x-view_x+width > view_width &width -> view_width-(x-view_x)
  var_std__minus, 2, var_305_5_x, var_314_4_view_x, 1, LOCAL(1),
  // x-view_x+width > view_width &width -> view_width-(x-view_x)
  var_std__plus, 2, LOCAL(1), var_309_5_width, 1, LOCAL(2),
  // view_width &width -> view_width-(x-view_x)
  var_std__less, 2, var_316_4_view_width, LOCAL(2), 1, LOCAL(3),
  // update_if x-view_x+width > view_width &width -> view_width-(x-view_x)
  var_update_if, 3, LOCAL(3), var_309_5_width, lambda_17, 1, var_309_5_width,
  // y-view_y+height > view_height &height -> view_height-(y-view_y)
  var_std__minus, 2, var_306_5_y, var_315_4_view_y, 1, LOCAL(1),
  // y-view_y+height > view_height &height -> view_height-(y-view_y)
  var_std__plus, 2, LOCAL(1), var_310_5_height, 1, LOCAL(2),
  // view_height &height -> view_height-(y-view_y)
  var_std__less, 2, var_317_4_view_height, LOCAL(2), 1, LOCAL(3),
  // update_if y-view_y+height > view_height &height -> view_height-(y-view_y)
  var_update_if, 3, LOCAL(3), var_310_5_height, lambda_18, 1, var_310_5_height,
  // 0 || height <= 0
  var_std__less, 2, num_0, var_309_5_width, 1, LOCAL(1),
  // 0 || height <= 0
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // 0 || height <= 0
  var_std__or, 2, LOCAL(2), lambda_19, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_20, lambda_21, TAIL_CALL,
  POS(312, 19),
  POS(312, 3),
  POS(313, 20),
  POS(313, 3),
  POS(314, 3),
  POS(315, 3),
  POS(316, 3),
  POS(317, 3),
  POS(318, 6),
  POS(318, 3),
  POS(319, 6),
  POS(319, 3),
  POS(320, 3),
  POS(321, 3),
  POS(322, 18),
  POS(322, 3),
  POS(323, 18),
  POS(323, 3),
  POS(324, 13),
  POS(324, 13),
  POS(324, 30),
  POS(324, 3),
  POS(325, 13),
  POS(325, 13),
  POS(325, 31),
  POS(325, 3),
  POS(327, 14),
  POS(327, 14),
  POS(327, 14),
  POS(326, 3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__view___copy = {
  t_func_std_types__view___copy, NULL, 30, 1,
  {"302_5_view\000"}
};

static TAB_NUM t_lambda_13[] = {
  3, // locals
  0, // parameters
  // width_of(source)-sx+1
  var_width_of, 1, var_304_5_source, 1, LOCAL(1),
  // width_of(source)-sx+1
  var_std__minus, 2, LOCAL(1), var_307_5_sx, 1, LOCAL(2),
  // width_of(source)-sx+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  width_of(source)-sx+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(312, 42),
  POS(312, 42),
  POS(312, 42),
  POS(312, 41)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_14[] = {
  3, // locals
  0, // parameters
  // height_of(source)-sy+1
  var_height_of, 1, var_304_5_source, 1, LOCAL(1),
  // height_of(source)-sy+1
  var_std__minus, 2, LOCAL(1), var_308_5_sy, 1, LOCAL(2),
  // height_of(source)-sy+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  height_of(source)-sy+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(313, 44),
  POS(313, 44),
  POS(313, 44),
  POS(313, 43)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // sx+dx width-dx
  var_std__plus, 2, var_307_5_sx, var_320_4_dx, 1, LOCAL(1),
  // width-dx
  var_std__minus, 2, var_309_5_width, var_320_4_dx, 1, LOCAL(2),
  //  view_x sx+dx width-dx
  LET, 3, var_314_4_view_x, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(322, 44),
  POS(322, 50),
  POS(322, 36)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  2, // locals
  0, // parameters
  // sy+dy height-dy
  var_std__plus, 2, var_308_5_sy, var_321_4_dy, 1, LOCAL(1),
  // height-dy
  var_std__minus, 2, var_310_5_height, var_321_4_dy, 1, LOCAL(2),
  //  view_y sy+dy height-dy
  LET, 3, var_315_4_view_y, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(323, 45),
  POS(323, 51),
  POS(323, 37)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_17[] = {
  2, // locals
  0, // parameters
  // x-view_x)
  var_std__minus, 2, var_305_5_x, var_314_4_view_x, 1, LOCAL(1),
  // view_width-(x-view_x)
  var_std__minus, 2, var_316_4_view_width, LOCAL(1), 1, LOCAL(2),
  //  view_width-(x-view_x)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(324, 63),
  POS(324, 51),
  POS(324, 50)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  0, // parameters
  // y-view_y)
  var_std__minus, 2, var_306_5_y, var_315_4_view_y, 1, LOCAL(1),
  // view_height-(y-view_y)
  var_std__minus, 2, var_317_4_view_height, LOCAL(1), 1, LOCAL(2),
  //  view_height-(y-view_y)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(325, 67),
  POS(325, 54),
  POS(325, 53)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  0, // parameters
  // 0
  var_std__less, 2, num_0, var_310_5_height, 1, LOCAL(1),
  // 0
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // height <= 0
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(327, 29),
  POS(327, 29),
  POS(327, 19)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  destination
  LET, 1, var_303_5_destination, TAIL_CALL,
  POS(328, 7)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  // copy
  var_copy, 8, var_303_5_destination, var_304_5_source, var_305_5_x, var_306_5_y, var_307_5_sx, var_308_5_sy, var_309_5_width, var_310_5_height, TAIL_CALL,
  POS(330, 7)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__create_vertical_panes[] = {
  0, // locals
  2, // parameters
  var_342_5_screen,
  var_343_5_pane_description,
  // $rc result_count()
  var_result_count, 0, 1, var_345_4_rc,
  // $x x_of(screen)
  var_x_of, 1, var_342_5_screen, 1, var_346_4_x,
  // $y y_of(screen)
  var_y_of, 1, var_342_5_screen, 1, var_347_4_y,
  // $width width_of(screen)
  var_width_of, 1, var_342_5_screen, 1, var_348_4_width,
  // $height height_of(screen)
  var_height_of, 1, var_342_5_screen, 1, var_349_4_height,
  // $views empty_list
  LET, 1, var_empty_list, 1, var_350_4_views,
  // cond
  var_cond, 3, lambda_22, lambda_25, lambda_35, TAIL_CALL,
  POS(345, 3),
  POS(346, 3),
  POS(347, 3),
  POS(348, 3),
  POS(349, 3),
  POS(350, 3),
  POS(351, 3)
};

static FUNCTION_INFO i_func_std__create_vertical_panes = {
  t_func_std__create_vertical_panes, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // is_an_integer:
  var_is_an_integer, 1, var_343_5_pane_description, 1, LOCAL(1),
  //  pane_description.is_an_integer:
  LET, 2, LOCAL(1), lambda_23, TAIL_CALL,
  POS(352, 25),
  POS(352, 7)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_23[] = {
  3, // locals
  0, // parameters
  // $n pane_description
  LET, 1, var_343_5_pane_description, 1, LOCAL(3),
  // n+1 x x+width)
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // x+width)
  var_std__plus, 2, var_346_4_x, var_348_4_width, 1, LOCAL(2),
  // $iter bresenham(n+1 x x+width)
  var_bresenham, 3, LOCAL(1), var_346_4_x, LOCAL(2), 1, var_354_8_iter,
  // next_value &iter !x
  var_next_value, 1, var_354_8_iter, 2, var_354_8_iter, var_346_4_x,
  // repeat n
  var_repeat, 3, LOCAL(3), lambda_24, func_return, TAIL_CALL,
  POS(353, 7),
  POS(354, 23),
  POS(354, 29),
  POS(354, 7),
  POS(355, 7),
  POS(356, 7),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 6, 1,
  {"353_8_n\000"}
};

static TAB_NUM t_lambda_24[] = {
  3, // locals
  0, // parameters
  // next_value &iter $next_x
  var_next_value, 1, var_354_8_iter, 2, var_354_8_iter, LOCAL(3),
  // next_x-1 height)
  var_std__minus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // create_view(screen x y next_x-1 height)
  var_create_view, 5, var_342_5_screen, var_346_4_x, var_347_4_y, LOCAL(1), var_349_4_height, 1, LOCAL(2),
  // push &views create_view(screen x y next_x-1 height)
  var_push, 2, var_350_4_views, LOCAL(2), 1, var_350_4_views,
  // !x next_x
  LET, 1, LOCAL(3), 1, var_346_4_x,
  // next
  var_next, 0, TAIL_CALL,
  POS(358, 11),
  POS(359, 46),
  POS(359, 23),
  POS(359, 11),
  POS(360, 11),
  POS(361, 11),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 6, 1,
  {"358_29_next_x\000"}
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_343_5_pane_description, 1, LOCAL(1),
  //  pane_description.is_a_list:
  LET, 2, LOCAL(1), lambda_26, TAIL_CALL,
  POS(363, 25),
  POS(363, 7)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  // $fixed_width 0
  LET, 1, num_0, 1, var_364_8_fixed_width,
  // $flex_width_count 0
  LET, 1, num_0, 1, var_365_8_flex_width_count,
  // for_each pane_description
  var_for_each, 3, var_343_5_pane_description, lambda_27, lambda_30, TAIL_CALL,
  POS(364, 7),
  POS(365, 7),
  POS(366, 7)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  1, // parameters
  var_367_12_pane_width,
  // pane_width < 1:
  var_std__less, 2, var_367_12_pane_width, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_28, lambda_29, TAIL_CALL,
  POS(369, 13),
  POS(368, 11)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  // inc &flex_width_count
  var_inc, 1, var_365_8_flex_width_count, 1, var_365_8_flex_width_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(370, 15),
  POS(371, 15)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  // plus &fixed_width pane_width
  var_plus, 2, var_364_8_fixed_width, var_367_12_pane_width, 1, var_364_8_fixed_width,
  // next
  var_next, 0, TAIL_CALL,
  POS(373, 15),
  POS(374, 15)
};

static FUNCTION_INFO i_lambda_29 = {
  t_lambda_29, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // fixed_width+flex_width_count > width
  var_std__plus, 2, var_364_8_fixed_width, var_365_8_flex_width_count, 1, LOCAL(1),
  // width
  var_std__less, 2, var_348_4_width, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_31, lambda_32, TAIL_CALL,
  POS(377, 13),
  POS(377, 44),
  POS(376, 11)
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
  POS(378, 15)
};

static FUNCTION_INFO i_lambda_31 = {
  t_lambda_31, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  // $flex_width width-fixed_width
  var_std__minus, 2, var_348_4_width, var_364_8_fixed_width, 1, var_380_16_flex_width,
  // $remaining_flex_width flex_width
  LET, 1, var_380_16_flex_width, 1, var_381_16_remaining_flex_width,
  // for_each pane_description
  var_for_each, 3, var_343_5_pane_description, lambda_33, func_return, TAIL_CALL,
  POS(380, 15),
  POS(381, 15),
  POS(382, 15)
};

static FUNCTION_INFO i_lambda_32 = {
  t_lambda_32, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  1, // parameters
  var_383_20_pane_width,
  // pane_width < 1:
  var_std__less, 2, var_383_20_pane_width, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, func_create_pane_view, TAIL_CALL,
  POS(385, 21),
  POS(384, 19)
};

static FUNCTION_INFO i_lambda_33 = {
  t_lambda_33, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_34[] = {
  5, // locals
  0, // parameters
  // dec &flex_width_count
  var_dec, 1, var_365_8_flex_width_count, 1, var_365_8_flex_width_count,
  // pane_width*flex_width).to_integer 1)
  var_std__times, 2, var_383_20_pane_width, var_380_16_flex_width, 1, LOCAL(1),
  // round(pane_width*flex_width).to_integer 1)
  var_round, 1, LOCAL(1), 1, LOCAL(2),
  // to_integer 1)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(3),
  // max(round(pane_width*flex_width).to_integer 1)
  var_max, 2, LOCAL(3), num_1, 1, LOCAL(4),
  // remaining_flex_width-flex_width_count #
  var_std__minus, 2, var_381_16_remaining_flex_width, var_365_8_flex_width_count, 1, LOCAL(5),
  // !pane_width
  var_min, 2, LOCAL(4), LOCAL(5), 1, var_383_20_pane_width,
  // minus &remaining_flex_width pane_width
  var_minus, 2, var_381_16_remaining_flex_width, var_383_20_pane_width, 1, var_381_16_remaining_flex_width,
  // create_pane_view
  func_create_pane_view, 0, TAIL_CALL,
  POS(386, 23),
  POS(389, 37),
  POS(389, 31),
  POS(389, 60),
  POS(389, 27),
  POS(390, 27),
  POS(387, 23),
  POS(394, 23),
  POS(395, 23)
};

static FUNCTION_INFO i_lambda_34 = {
  t_lambda_34, NULL, 9, 0,
  {}
};

static TAB_NUM t_func_create_pane_view[] = {
  3, // locals
  0, // parameters
  // x+pane_width-1 height)
  var_std__plus, 2, var_346_4_x, var_383_20_pane_width, 1, LOCAL(1),
  // x+pane_width-1 height)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // create_view(screen x y x+pane_width-1 height)
  var_create_view, 5, var_342_5_screen, var_346_4_x, var_347_4_y, LOCAL(2), var_349_4_height, 1, LOCAL(3),
  // push &views create_view(screen x y x+pane_width-1 height)
  var_push, 2, var_350_4_views, LOCAL(3), 1, var_350_4_views,
  // plus &x pane_width
  var_plus, 2, var_346_4_x, var_383_20_pane_width, 1, var_346_4_x,
  // next
  var_next, 0, TAIL_CALL,
  POS(399, 56),
  POS(399, 56),
  POS(399, 33),
  POS(399, 21),
  POS(400, 21),
  POS(401, 21)
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
  POS(403, 7)
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
  POS(403, 15)
};

static FUNCTION_INFO i_lambda_36 = {
  t_lambda_36, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_return[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_345_4_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_37, lambda_38, TAIL_CALL,
  POS(407, 7),
  POS(406, 5)
};

static FUNCTION_INFO i_func_return = {
  t_func_return, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  //  views
  LET, 1, var_350_4_views, TAIL_CALL,
  POS(408, 9)
};

static FUNCTION_INFO i_lambda_37 = {
  t_lambda_37, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  // spread views
  var_spread, 1, var_350_4_views, TAIL_CALL,
  POS(409, 9)
};

static FUNCTION_INFO i_lambda_38 = {
  t_lambda_38, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__create_horizontal_panes[] = {
  0, // locals
  2, // parameters
  var_413_5_screen,
  var_414_5_pane_description,
  // $rc result_count()
  var_result_count, 0, 1, var_416_4_rc,
  // $x x_of(screen)
  var_x_of, 1, var_413_5_screen, 1, var_417_4_x,
  // $y y_of(screen)
  var_y_of, 1, var_413_5_screen, 1, var_418_4_y,
  // $width width_of(screen)
  var_width_of, 1, var_413_5_screen, 1, var_419_4_width,
  // $height height_of(screen)
  var_height_of, 1, var_413_5_screen, 1, var_420_4_height,
  // $views empty_list
  LET, 1, var_empty_list, 1, var_421_4_views,
  // cond
  var_cond, 3, lambda_39, lambda_42, lambda_54, TAIL_CALL,
  POS(416, 3),
  POS(417, 3),
  POS(418, 3),
  POS(419, 3),
  POS(420, 3),
  POS(421, 3),
  POS(422, 3)
};

static FUNCTION_INFO i_func_std__create_horizontal_panes = {
  t_func_std__create_horizontal_panes, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_39[] = {
  1, // locals
  0, // parameters
  // is_an_integer:
  var_is_an_integer, 1, var_414_5_pane_description, 1, LOCAL(1),
  //  pane_description.is_an_integer:
  LET, 2, LOCAL(1), lambda_40, TAIL_CALL,
  POS(423, 25),
  POS(423, 7)
};

static FUNCTION_INFO i_lambda_39 = {
  t_lambda_39, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_40[] = {
  3, // locals
  0, // parameters
  // $n pane_description
  LET, 1, var_414_5_pane_description, 1, LOCAL(3),
  // n+1 y y+height)
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // y+height)
  var_std__plus, 2, var_418_4_y, var_420_4_height, 1, LOCAL(2),
  // $iter bresenham(n+1 y y+height)
  var_bresenham, 3, LOCAL(1), var_418_4_y, LOCAL(2), 1, var_425_8_iter,
  // next_value &iter !y
  var_next_value, 1, var_425_8_iter, 2, var_425_8_iter, var_418_4_y,
  // repeat n
  var_repeat, 3, LOCAL(3), lambda_41, func_2_return, TAIL_CALL,
  POS(424, 7),
  POS(425, 23),
  POS(425, 29),
  POS(425, 7),
  POS(426, 7),
  POS(427, 7),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_40 = {
  t_lambda_40, NULL, 6, 1,
  {"424_8_n\000"}
};

static TAB_NUM t_lambda_41[] = {
  3, // locals
  0, // parameters
  // next_value &iter $next_y
  var_next_value, 1, var_425_8_iter, 2, var_425_8_iter, LOCAL(3),
  // next_y-1)
  var_std__minus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // create_view(screen x y width next_y-1)
  var_create_view, 5, var_413_5_screen, var_417_4_x, var_418_4_y, var_419_4_width, LOCAL(1), 1, LOCAL(2),
  // push &views create_view(screen x y width next_y-1)
  var_push, 2, var_421_4_views, LOCAL(2), 1, var_421_4_views,
  // !y next_y
  LET, 1, LOCAL(3), 1, var_418_4_y,
  // next
  var_next, 0, TAIL_CALL,
  POS(429, 11),
  POS(430, 52),
  POS(430, 23),
  POS(430, 11),
  POS(431, 11),
  POS(432, 11),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_41 = {
  t_lambda_41, NULL, 6, 1,
  {"429_29_next_y\000"}
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_414_5_pane_description, 1, LOCAL(1),
  //  pane_description.is_a_list:
  LET, 2, LOCAL(1), lambda_43, TAIL_CALL,
  POS(434, 25),
  POS(434, 7)
};

static FUNCTION_INFO i_lambda_42 = {
  t_lambda_42, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  // $fixed_height 0
  LET, 1, num_0, 1, var_435_8_fixed_height,
  // $flex_height_count 0
  LET, 1, num_0, 1, var_436_8_flex_height_count,
  // for_each pane_description
  var_for_each, 3, var_414_5_pane_description, lambda_44, lambda_47, TAIL_CALL,
  POS(435, 7),
  POS(436, 7),
  POS(437, 7)
};

static FUNCTION_INFO i_lambda_43 = {
  t_lambda_43, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  1, // parameters
  var_438_12_pane_height,
  // pane_height < 1:
  var_std__less, 2, var_438_12_pane_height, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_45, lambda_46, TAIL_CALL,
  POS(440, 13),
  POS(439, 11)
};

static FUNCTION_INFO i_lambda_44 = {
  t_lambda_44, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  // inc &flex_height_count
  var_inc, 1, var_436_8_flex_height_count, 1, var_436_8_flex_height_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(441, 15),
  POS(442, 15)
};

static FUNCTION_INFO i_lambda_45 = {
  t_lambda_45, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  // plus &fixed_height pane_height
  var_plus, 2, var_435_8_fixed_height, var_438_12_pane_height, 1, var_435_8_fixed_height,
  // next
  var_next, 0, TAIL_CALL,
  POS(444, 15),
  POS(445, 15)
};

static FUNCTION_INFO i_lambda_46 = {
  t_lambda_46, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_47[] = {
  2, // locals
  0, // parameters
  // fixed_height+flex_height_count > height
  var_std__plus, 2, var_435_8_fixed_height, var_436_8_flex_height_count, 1, LOCAL(1),
  // height
  var_std__less, 2, var_420_4_height, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_48, lambda_49, TAIL_CALL,
  POS(448, 13),
  POS(448, 46),
  POS(447, 11)
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
  POS(449, 15)
};

static FUNCTION_INFO i_lambda_48 = {
  t_lambda_48, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  // $flex_height height-fixed_height
  var_std__minus, 2, var_420_4_height, var_435_8_fixed_height, 1, var_451_16_flex_height,
  // $remaining_flex_height flex_height
  LET, 1, var_451_16_flex_height, 1, var_452_16_remaining_flex_height,
  // for_each pane_description
  var_for_each, 3, var_414_5_pane_description, lambda_50, func_2_return, TAIL_CALL,
  POS(451, 15),
  POS(452, 15),
  POS(453, 15)
};

static FUNCTION_INFO i_lambda_49 = {
  t_lambda_49, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_50[] = {
  1, // locals
  1, // parameters
  var_454_20_pane_height,
  // pane_height < 1:
  var_std__less, 2, var_454_20_pane_height, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_51, func_2_create_pane_view, TAIL_CALL,
  POS(456, 21),
  POS(455, 19)
};

static FUNCTION_INFO i_lambda_50 = {
  t_lambda_50, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_51[] = {
  1, // locals
  0, // parameters
  // dec &flex_height_count
  var_dec, 1, var_436_8_flex_height_count, 1, var_436_8_flex_height_count,
  // flex_height_count == 0
  var_std__equal, 2, var_436_8_flex_height_count, num_0, 1, LOCAL(1),
  // !pane_height
  var_if, 3, LOCAL(1), lambda_52, lambda_53, 1, var_454_20_pane_height,
  // minus &remaining_flex_height pane_height
  var_minus, 2, var_452_16_remaining_flex_height, var_454_20_pane_height, 1, var_452_16_remaining_flex_height,
  // create_pane_view
  func_2_create_pane_view, 0, TAIL_CALL,
  POS(457, 23),
  POS(460, 27),
  POS(458, 23),
  POS(469, 23),
  POS(470, 23)
};

static FUNCTION_INFO i_lambda_51 = {
  t_lambda_51, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  //  flex_height
  LET, 1, var_451_16_flex_height, TAIL_CALL,
  POS(461, 29)
};

static FUNCTION_INFO i_lambda_52 = {
  t_lambda_52, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_53[] = {
  6, // locals
  0, // parameters
  // pane_height*flex_height).to_integer 1)
  var_std__times, 2, var_454_20_pane_height, var_451_16_flex_height, 1, LOCAL(1),
  // round(pane_height*flex_height).to_integer 1)
  var_round, 1, LOCAL(1), 1, LOCAL(2),
  // to_integer 1)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(3),
  // max(round(pane_height*flex_height).to_integer 1)
  var_max, 2, LOCAL(3), num_1, 1, LOCAL(4),
  // remaining_flex_height-flex_height_count #
  var_std__minus, 2, var_452_16_remaining_flex_height, var_436_8_flex_height_count, 1, LOCAL(5),
  // min
  var_min, 2, LOCAL(4), LOCAL(5), 1, LOCAL(6),
  // 
  LET, 1, LOCAL(6), TAIL_CALL,
  POS(464, 41),
  POS(464, 35),
  POS(464, 66),
  POS(464, 31),
  POS(465, 31),
  POS(463, 29),
  POS(462, 29)
};

static FUNCTION_INFO i_lambda_53 = {
  t_lambda_53, NULL, 7, 0,
  {}
};

static TAB_NUM t_func_2_create_pane_view[] = {
  3, // locals
  0, // parameters
  // y+pane_height-1)
  var_std__plus, 2, var_418_4_y, var_454_20_pane_height, 1, LOCAL(1),
  // y+pane_height-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // create_view(screen x y width y+pane_height-1)
  var_create_view, 5, var_413_5_screen, var_417_4_x, var_418_4_y, var_419_4_width, LOCAL(2), 1, LOCAL(3),
  // push &views create_view(screen x y width y+pane_height-1)
  var_push, 2, var_421_4_views, LOCAL(3), 1, var_421_4_views,
  // plus &y pane_height
  var_plus, 2, var_418_4_y, var_454_20_pane_height, 1, var_418_4_y,
  // next
  var_next, 0, TAIL_CALL,
  POS(474, 62),
  POS(474, 62),
  POS(474, 33),
  POS(474, 21),
  POS(475, 21),
  POS(476, 21)
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
  POS(478, 7)
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
  POS(478, 15)
};

static FUNCTION_INFO i_lambda_55 = {
  t_lambda_55, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_2_return[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_416_4_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_56, lambda_57, TAIL_CALL,
  POS(482, 7),
  POS(481, 5)
};

static FUNCTION_INFO i_func_2_return = {
  t_func_2_return, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  //  views
  LET, 1, var_421_4_views, TAIL_CALL,
  POS(483, 9)
};

static FUNCTION_INFO i_lambda_56 = {
  t_lambda_56, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  // spread views
  var_spread, 1, var_421_4_views, TAIL_CALL,
  POS(484, 9)
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
  {var_get_text_attributes, -func_std_types__generic_terminal___get_text_attributes}
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
    FOT_DERIVED, 0, 25,
    "generic_terminal\000std_types", std_types__generic_terminal__attributes,
    {"resource\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "resource\000std_types", NULL,
    {.position = POS(82, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "type_of\000", NULL,
    {.position = POS(84, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(84, 38)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "x_of\000", NULL,
    {.position = POS(85, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "y_of\000", NULL,
    {.position = POS(86, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "plot_x_resolution_of\000", NULL,
    {.position = POS(87, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "plot_y_resolution_of\000", NULL,
    {.position = POS(88, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "width_of\000", NULL,
    {.position = POS(89, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "height_of\000", NULL,
    {.position = POS(90, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "character_width_of\000", NULL,
    {.position = POS(91, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "ascent_of\000", NULL,
    {.position = POS(92, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "descent_of\000", NULL,
    {.position = POS(93, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "character_height_of\000", NULL,
    {.position = POS(94, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "line_spacing_of\000", NULL,
    {.position = POS(95, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "line_height_of\000", NULL,
    {.position = POS(96, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "baseline_of\000", NULL,
    {.position = POS(97, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "clear_colour_of\000", NULL,
    {.position = POS(98, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "draw_colour_of\000", NULL,
    {.position = POS(99, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "text_attributes_of\000", NULL,
    {.position = POS(100, 30)}
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
    "104_25_screen\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "104_32_x\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(106, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(107, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(105, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "abs_y\000basic_private", NULL,
    {.const_idx = -func_basic_private__abs_y}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "110_25_screen\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "110_32_y\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_view\000std", NULL,
    {.const_idx = -func_std__create_view}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(130, 13)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "set_clear_colour\000", NULL,
    {.position = POS(144, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "set_draw_colour\000", NULL,
    {.position = POS(151, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "set_text_attributes\000", NULL,
    {.position = POS(158, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "add_text_attributes\000", NULL,
    {.position = POS(165, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_or\000std", NULL,
    {.position = POS(170, 35)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "remove_text_attributes\000", NULL,
    {.position = POS(172, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(179, 58)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000std", NULL,
    {.position = POS(179, 27)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "get_clear_colour\000", NULL,
    {.position = POS(181, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "get_draw_colour\000", NULL,
    {.position = POS(187, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "get_text_attributes\000", NULL,
    {.position = POS(193, 30)}
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
    {.position = POS(203, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(211, 9)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "draw_attributed_text\000", NULL,
    {.position = POS(219, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "clear\000", NULL,
    {.position = POS(234, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "236_5_view\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "238_5_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "239_5_y\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(243, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(243, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "invert\000", NULL,
    {.position = POS(253, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "draw_shadow\000", NULL,
    {.position = POS(265, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "277_24_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "277_26_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "277_28_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "277_34_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "278_4_view_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "279_4_view_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "280_4_view_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "281_4_view_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "286_4_left_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "287_4_top_y\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "copy\000", NULL,
    {.position = POS(300, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "303_5_destination\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "304_5_source\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "305_5_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "306_5_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "307_5_sx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "308_5_sy\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "309_5_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "310_5_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "314_4_view_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "315_4_view_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "316_4_view_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "317_4_view_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "320_4_dx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "321_4_dy\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(327, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(327, 14)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_vertical_panes\000std", NULL,
    {.const_idx = -func_std__create_vertical_panes}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "342_5_screen\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "343_5_pane_description\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "345_4_rc\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(345, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "346_4_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "347_4_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "348_4_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "349_4_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "350_4_views\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(350, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_integer\000", NULL,
    {.position = POS(352, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "354_8_iter\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bresenham\000", NULL,
    {.position = POS(354, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next_value\000", NULL,
    {.position = POS(355, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_view\000", NULL,
    {.position = POS(359, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(359, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(361, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "repeat\000", NULL,
    {.position = POS(356, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(363, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "364_8_fixed_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "365_8_flex_width_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "367_12_pane_width\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(370, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(373, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "380_16_flex_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "381_16_remaining_flex_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "383_20_pane_width\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(386, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(389, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "round\000", NULL,
    {.position = POS(389, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(389, 60)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(389, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "min\000", NULL,
    {.position = POS(388, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000", NULL,
    {.position = POS(394, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(382, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(403, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(351, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(407, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spread\000", NULL,
    {.position = POS(409, 9)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_horizontal_panes\000std", NULL,
    {.const_idx = -func_std__create_horizontal_panes}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "413_5_screen\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "414_5_pane_description\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "416_4_rc\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "417_4_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "418_4_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "419_4_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "420_4_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "421_4_views\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "425_8_iter\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "435_8_fixed_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "436_8_flex_height_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "438_12_pane_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "451_16_flex_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "452_16_remaining_flex_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "454_20_pane_height\000", NULL
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
  92, // number of constants
  181, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
