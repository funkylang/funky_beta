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
  var_101_25_screen, // dynamic
  var_101_32_x, // dynamic
  var_std__less, // extern
  var_std__plus, // extern
  var_if, // extern
  var_basic_private__abs_y, // initialized
  var_107_25_screen, // dynamic
  var_107_32_y, // dynamic
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
  var_215_5_view, // dynamic
  var_217_5_x, // dynamic
  var_218_5_y, // dynamic
  var_is_undefined, // extern
  var_update_if, // extern
  var_invert, // extern polymorphic
  var_draw_shadow, // extern polymorphic
  var_256_24_x, // dynamic
  var_256_26_y, // dynamic
  var_256_28_width, // dynamic
  var_256_34_height, // dynamic
  var_257_4_view_x, // dynamic
  var_258_4_view_y, // dynamic
  var_259_4_view_width, // dynamic
  var_260_4_view_height, // dynamic
  var_265_4_left_x, // dynamic
  var_266_4_top_y, // dynamic
  var_copy, // extern polymorphic
  var_282_5_destination, // dynamic
  var_283_5_source, // dynamic
  var_284_5_x, // dynamic
  var_285_5_y, // dynamic
  var_286_5_sx, // dynamic
  var_287_5_sy, // dynamic
  var_288_5_width, // dynamic
  var_289_5_height, // dynamic
  var_293_4_view_x, // dynamic
  var_294_4_view_y, // dynamic
  var_295_4_view_width, // dynamic
  var_296_4_view_height, // dynamic
  var_299_4_dx, // dynamic
  var_300_4_dy, // dynamic
  var_std__not, // extern
  var_std__or, // extern
  var_std__create_vertical_panes, // initialized
  var_321_5_screen, // dynamic
  var_322_5_pane_description, // dynamic
  var_324_4_rc, // dynamic
  var_result_count, // extern
  var_325_4_x, // dynamic
  var_326_4_y, // dynamic
  var_327_4_width, // dynamic
  var_328_4_height, // dynamic
  var_329_4_views, // dynamic
  var_empty_list, // extern
  var_is_an_integer, // extern
  var_333_8_iter, // dynamic
  var_bresenham, // extern
  var_next_value, // extern
  var_create_view, // extern
  var_push, // extern
  var_next, // extern
  var_repeat, // extern
  var_is_a_list, // extern
  var_343_8_fixed_width, // dynamic
  var_344_8_flex_width_count, // dynamic
  var_346_12_pane_width, // dynamic
  var_inc, // extern
  var_plus, // extern
  var_359_16_flex_width, // dynamic
  var_360_16_remaining_flex_width, // dynamic
  var_362_20_pane_width, // dynamic
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
  var_392_5_screen, // dynamic
  var_393_5_pane_description, // dynamic
  var_395_4_rc, // dynamic
  var_396_4_x, // dynamic
  var_397_4_y, // dynamic
  var_398_4_width, // dynamic
  var_399_4_height, // dynamic
  var_400_4_views, // dynamic
  var_404_8_iter, // dynamic
  var_414_8_fixed_height, // dynamic
  var_415_8_flex_height_count, // dynamic
  var_417_12_pane_height, // dynamic
  var_430_16_flex_height, // dynamic
  var_431_16_remaining_flex_height, // dynamic
  var_433_20_pane_height, // dynamic
  var__END
};


static TAB_NUM t_func_basic_private__abs_x[] = {
  1, // locals
  2, // parameters
  var_101_25_screen,
  var_101_32_x,
  // x < 0
  var_std__less, 2, var_101_32_x, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(103, 5),
  POS(102, 3)
};

static FUNCTION_INFO i_func_basic_private__abs_x = {
  t_func_basic_private__abs_x, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  3, // locals
  0, // parameters
  // width_of(screen)+x+1
  var_width_of, 1, var_101_25_screen, 1, LOCAL(1),
  // width_of(screen)+x+1
  var_std__plus, 2, LOCAL(1), var_101_32_x, 1, LOCAL(2),
  // width_of(screen)+x+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  width_of(screen)+x+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(104, 8),
  POS(104, 8),
  POS(104, 8),
  POS(104, 7)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  x
  LET, 1, var_101_32_x, TAIL_CALL,
  POS(105, 7)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_basic_private__abs_y[] = {
  1, // locals
  2, // parameters
  var_107_25_screen,
  var_107_32_y,
  // y < 0
  var_std__less, 2, var_107_32_y, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(109, 5),
  POS(108, 3)
};

static FUNCTION_INFO i_func_basic_private__abs_y = {
  t_func_basic_private__abs_y, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  3, // locals
  0, // parameters
  // height_of(screen)+y+1
  var_height_of, 1, var_107_25_screen, 1, LOCAL(1),
  // height_of(screen)+y+1
  var_std__plus, 2, LOCAL(1), var_107_32_y, 1, LOCAL(2),
  // height_of(screen)+y+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  height_of(screen)+y+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(110, 8),
  POS(110, 8),
  POS(110, 8),
  POS(110, 7)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  y
  LET, 1, var_107_32_y, TAIL_CALL,
  POS(111, 7)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__create_view[] = {
  25, // locals
  5, // parameters
  LOCAL(21), // 115_5_screen
  LOCAL(22), // 116_5_left_x
  LOCAL(23), // 117_5_top_y
  LOCAL(24), // 118_5_right_x
  LOCAL(25), // 119_5_bottom_y
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
  POS(121, 3),
  POS(122, 3),
  POS(123, 3),
  POS(124, 3),
  POS(127, 13),
  POS(127, 13),
  POS(127, 13),
  POS(128, 13),
  POS(128, 13),
  POS(128, 13),
  POS(129, 18),
  POS(129, 18),
  POS(130, 19),
  POS(130, 19),
  POS(131, 27),
  POS(132, 18),
  POS(133, 19),
  POS(134, 28),
  POS(135, 24),
  POS(136, 23),
  POS(137, 20),
  POS(138, 24),
  POS(139, 23),
  POS(126, 5),
  POS(125, 3),
  LOCAL(25),
  LOCAL(21),
  LOCAL(24),
  LOCAL(23),
  LOCAL(22)
};

static FUNCTION_INFO i_func_std__create_view = {
  t_func_std__create_view, NULL, 25, 5,
  {"119_5_bottom_y\000", "115_5_screen\000", "118_5_right_x\000", "117_5_top_y\000", "116_5_left_x\000"}
};

static TAB_NUM t_func_std_types__generic_terminal___set_clear_colour[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 143_5_terminal
  LOCAL(3), // 144_5_colour
  // .clear_colour_of colour)
  LET, -1, LOCAL(2), var_clear_colour_of, LOCAL(3), LOCAL(1),
  // -> terminal(.clear_colour_of colour)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(146, 15),
  POS(146, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__generic_terminal___set_clear_colour = {
  t_func_std_types__generic_terminal___set_clear_colour, NULL, 2, 2,
  {"143_5_terminal\000", "144_5_colour\000"}
};

static TAB_NUM t_func_std_types__generic_terminal___set_draw_colour[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 150_5_terminal
  LOCAL(3), // 151_5_colour
  // .draw_colour_of colour)
  LET, -1, LOCAL(2), var_draw_colour_of, LOCAL(3), LOCAL(1),
  // -> terminal(.draw_colour_of colour)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(153, 15),
  POS(153, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__generic_terminal___set_draw_colour = {
  t_func_std_types__generic_terminal___set_draw_colour, NULL, 2, 2,
  {"150_5_terminal\000", "151_5_colour\000"}
};

static TAB_NUM t_func_std_types__generic_terminal___set_text_attributes[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 157_5_terminal
  LOCAL(3), // 158_5_attributes
  // .text_attributes_of attributes)
  LET, -1, LOCAL(2), var_text_attributes_of, LOCAL(3), LOCAL(1),
  // -> terminal(.text_attributes_of attributes)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(160, 15),
  POS(160, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__generic_terminal___set_text_attributes = {
  t_func_std_types__generic_terminal___set_text_attributes, NULL, 2, 2,
  {"157_5_terminal\000", "158_5_attributes\000"}
};

static TAB_NUM t_func_std_types__generic_terminal___add_text_attributes[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 164_5_terminal
  LOCAL(5), // 165_5_attributes
  // text_attributes_of(terminal) | attributes)
  var_text_attributes_of, 1, LOCAL(4), 1, LOCAL(1),
  // text_attributes_of(terminal) | attributes)
  var_std__bit_or, 2, LOCAL(1), LOCAL(5), 1, LOCAL(2),
  // .text_attributes_of text_attributes_of(terminal) | attributes)
  LET, -1, LOCAL(4), var_text_attributes_of, LOCAL(2), LOCAL(3),
  // -> terminal(.text_attributes_of text_attributes_of(terminal) | attributes)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(167, 35),
  POS(167, 35),
  POS(167, 15),
  POS(167, 3),
  LOCAL(5),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__generic_terminal___add_text_attributes = {
  t_func_std_types__generic_terminal___add_text_attributes, NULL, 4, 2,
  {"165_5_attributes\000", "164_5_terminal\000"}
};

static TAB_NUM t_func_std_types__generic_terminal___remove_text_attributes[] = {
  6, // locals
  2, // parameters
  LOCAL(5), // 171_5_terminal
  LOCAL(6), // 172_5_attributes
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
  POS(176, 27),
  POS(176, 58),
  POS(176, 27),
  POS(175, 5),
  POS(174, 3),
  LOCAL(6),
  LOCAL(5)
};

static FUNCTION_INFO i_func_std_types__generic_terminal___remove_text_attributes = {
  t_func_std_types__generic_terminal___remove_text_attributes, NULL, 5, 2,
  {"172_5_attributes\000", "171_5_terminal\000"}
};

static TAB_NUM t_func_std_types__view___draw_text[] = {
  12, // locals
  -5, // parameters
  MANDATORY_PARAMETER, LOCAL(7), // 184_5_view
  MANDATORY_PARAMETER, LOCAL(8), // 185_5_screen
  MANDATORY_PARAMETER, LOCAL(9), // 186_5_x
  MANDATORY_PARAMETER, LOCAL(10), // 187_5_y
  REST_PARAMETER, LOCAL(11), // 188_5_args
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
  POS(190, 3),
  POS(194, 5),
  POS(194, 5),
  POS(194, 5),
  POS(195, 5),
  POS(195, 5),
  POS(195, 5),
  POS(191, 3),
  LOCAL(10),
  LOCAL(11),
  LOCAL(8),
  LOCAL(12),
  LOCAL(9),
  LOCAL(7)
};

static FUNCTION_INFO i_func_std_types__view___draw_text = {
  t_func_std_types__view___draw_text, NULL, 8, 6,
  {"187_5_y\000", "188_5_args\000", "185_5_screen\000", "190_4_text\000", "186_5_x\000", "184_5_view\000"}
};

static TAB_NUM t_func_std_types__view___draw_attributed_text[] = {
  11, // locals
  5, // parameters
  LOCAL(7), // 200_5_view
  LOCAL(8), // 201_5_screen
  LOCAL(9), // 202_5_x
  LOCAL(10), // 203_5_y
  LOCAL(11), // 204_5_attributed_text
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
  POS(209, 5),
  POS(209, 5),
  POS(209, 5),
  POS(210, 5),
  POS(210, 5),
  POS(210, 5),
  POS(206, 3),
  LOCAL(8),
  LOCAL(11),
  LOCAL(9),
  LOCAL(7),
  LOCAL(10)
};

static FUNCTION_INFO i_func_std_types__view___draw_attributed_text = {
  t_func_std_types__view___draw_attributed_text, NULL, 7, 5,
  {"201_5_screen\000", "204_5_attributed_text\000", "202_5_x\000", "200_5_view\000", "203_5_y\000"}
};

static TAB_NUM t_func_std_types__view___clear[] = {
  9, // locals
  -6, // parameters
  MANDATORY_PARAMETER, var_215_5_view,
  MANDATORY_PARAMETER, LOCAL(7), // 216_5_screen
  num_1, var_217_5_x,
  num_1, var_218_5_y,
  var_undefined, LOCAL(8), // 219_5_width
  var_undefined, LOCAL(9), // 220_5_height
  // is_undefined &width -> width_of(view)-x+1
  var_is_undefined, 1, LOCAL(8), 1, LOCAL(1),
  // update_if width.is_undefined &width -> width_of(view)-x+1
  var_update_if, 3, LOCAL(1), LOCAL(8), lambda_5, 1, LOCAL(8),
  // is_undefined &height -> height_of(view)-y+1
  var_is_undefined, 1, LOCAL(9), 1, LOCAL(1),
  // update_if height.is_undefined &height -> height_of(view)-y+1
  var_update_if, 3, LOCAL(1), LOCAL(9), lambda_6, 1, LOCAL(9),
  // x_of(view)+x-1
  var_x_of, 1, var_215_5_view, 1, LOCAL(1),
  // x_of(view)+x-1
  var_std__plus, 2, LOCAL(1), var_217_5_x, 1, LOCAL(2),
  // x_of(view)+x-1
  var_std__minus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  // y_of(view)+y-1
  var_y_of, 1, var_215_5_view, 1, LOCAL(4),
  // y_of(view)+y-1
  var_std__plus, 2, LOCAL(4), var_218_5_y, 1, LOCAL(5),
  // y_of(view)+y-1
  var_std__minus, 2, LOCAL(5), num_1, 1, LOCAL(6),
  // basic_private::clear
  var_basic_private__clear, 6, LOCAL(7), var_215_5_view, LOCAL(3), LOCAL(6), LOCAL(8), LOCAL(9), TAIL_CALL,
  POS(222, 19),
  POS(222, 3),
  POS(223, 20),
  POS(223, 3),
  POS(227, 5),
  POS(227, 5),
  POS(227, 5),
  POS(228, 5),
  POS(228, 5),
  POS(228, 5),
  POS(224, 3),
  LOCAL(8),
  LOCAL(7),
  LOCAL(9)
};

static FUNCTION_INFO i_func_std_types__view___clear = {
  t_func_std_types__view___clear, NULL, 11, 3,
  {"219_5_width\000", "216_5_screen\000", "220_5_height\000"}
};

static TAB_NUM t_lambda_5[] = {
  3, // locals
  0, // parameters
  // width_of(view)-x+1
  var_width_of, 1, var_215_5_view, 1, LOCAL(1),
  // width_of(view)-x+1
  var_std__minus, 2, LOCAL(1), var_217_5_x, 1, LOCAL(2),
  // width_of(view)-x+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  width_of(view)-x+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(222, 42),
  POS(222, 42),
  POS(222, 42),
  POS(222, 41)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  3, // locals
  0, // parameters
  // height_of(view)-y+1
  var_height_of, 1, var_215_5_view, 1, LOCAL(1),
  // height_of(view)-y+1
  var_std__minus, 2, LOCAL(1), var_218_5_y, 1, LOCAL(2),
  // height_of(view)-y+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  height_of(view)-y+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(223, 44),
  POS(223, 44),
  POS(223, 44),
  POS(223, 43)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_std_types__view___invert[] = {
  6, // locals
  -6, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 234_5_view
  MANDATORY_PARAMETER, LOCAL(2), // 235_5_screen
  num_1, LOCAL(3), // 236_5_x
  num_1, LOCAL(4), // 237_5_y
  var_undefined, LOCAL(5), // 238_5_width
  var_undefined, LOCAL(6), // 239_5_height
  // clip_rectangle view &x &y &width &height
  func_clip_rectangle, 5, LOCAL(1), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), 4, LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6),
  // invert screen x y width height
  var_invert, 5, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), TAIL_CALL,
  POS(241, 3),
  POS(242, 3),
  LOCAL(6),
  LOCAL(2),
  LOCAL(1),
  LOCAL(4),
  LOCAL(5),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__view___invert = {
  t_func_std_types__view___invert, NULL, 2, 6,
  {"239_5_height\000", "235_5_screen\000", "234_5_view\000", "237_5_y\000", "238_5_width\000", "236_5_x\000"}
};

static TAB_NUM t_func_std_types__view___draw_shadow[] = {
  6, // locals
  -6, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 246_5_view
  MANDATORY_PARAMETER, LOCAL(2), // 247_5_screen
  num_1, LOCAL(3), // 248_5_x
  num_1, LOCAL(4), // 249_5_y
  var_undefined, LOCAL(5), // 250_5_width
  var_undefined, LOCAL(6), // 251_5_height
  // clip_rectangle view &x &y &width &height
  func_clip_rectangle, 5, LOCAL(1), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), 4, LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6),
  // draw_shadow screen x y width height
  var_draw_shadow, 5, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), TAIL_CALL,
  POS(253, 3),
  POS(254, 3),
  LOCAL(4),
  LOCAL(2),
  LOCAL(3),
  LOCAL(1),
  LOCAL(6),
  LOCAL(5)
};

static FUNCTION_INFO i_func_std_types__view___draw_shadow = {
  t_func_std_types__view___draw_shadow, NULL, 2, 6,
  {"249_5_y\000", "247_5_screen\000", "248_5_x\000", "246_5_view\000", "251_5_height\000", "250_5_width\000"}
};

static TAB_NUM t_func_clip_rectangle[] = {
  5, // locals
  5, // parameters
  LOCAL(3), // 256_19_view
  var_256_24_x,
  var_256_26_y,
  var_256_28_width,
  var_256_34_height,
  // $view_x x_of(view)
  var_x_of, 1, LOCAL(3), 1, var_257_4_view_x,
  // $view_y y_of(view)
  var_y_of, 1, LOCAL(3), 1, var_258_4_view_y,
  // $view_width width_of(view)
  var_width_of, 1, LOCAL(3), 1, var_259_4_view_width,
  // $view_height height_of(view)
  var_height_of, 1, LOCAL(3), 1, var_260_4_view_height,
  // is_undefined &width -> view_width-x+1
  var_is_undefined, 1, var_256_28_width, 1, LOCAL(1),
  // update_if width.is_undefined &width -> view_width-x+1
  var_update_if, 3, LOCAL(1), var_256_28_width, lambda_7, 1, var_256_28_width,
  // is_undefined &height -> view_height-y+1
  var_is_undefined, 1, var_256_34_height, 1, LOCAL(1),
  // update_if height.is_undefined &height -> view_height-y+1
  var_update_if, 3, LOCAL(1), var_256_34_height, lambda_8, 1, var_256_34_height,
  // view_x+x-1
  var_std__plus, 2, var_257_4_view_x, var_256_24_x, 1, LOCAL(1),
  // $left_x view_x+x-1
  var_std__minus, 2, LOCAL(1), num_1, 1, var_265_4_left_x,
  // view_y+y-1
  var_std__plus, 2, var_258_4_view_y, var_256_26_y, 1, LOCAL(1),
  // $top_y view_y+y-1
  var_std__minus, 2, LOCAL(1), num_1, 1, var_266_4_top_y,
  // $right_x left_x+width # exclusive
  var_std__plus, 2, var_265_4_left_x, var_256_28_width, 1, LOCAL(4),
  // $bottom_y top_y+height # exclusive
  var_std__plus, 2, var_266_4_top_y, var_256_34_height, 1, LOCAL(5),
  // left_x < view_x &left_x &width -> view_x width-(view_x-left_x)
  var_std__less, 2, var_265_4_left_x, var_257_4_view_x, 1, LOCAL(1),
  // update_if left_x < view_x &left_x &width -> view_x width-(view_x-left_x)
  var_update_if, 4, LOCAL(1), var_265_4_left_x, var_256_28_width, lambda_9, 2, var_265_4_left_x, var_256_28_width,
  // top_y < view_y &top_y &height -> view_y height-(view_y-top_y)
  var_std__less, 2, var_266_4_top_y, var_258_4_view_y, 1, LOCAL(1),
  // update_if top_y < view_y &top_y &height -> view_y height-(view_y-top_y)
  var_update_if, 4, LOCAL(1), var_266_4_top_y, var_256_34_height, lambda_10, 2, var_266_4_top_y, var_256_34_height,
  // view_x+view_width &right_x -> view_x+view_width
  var_std__plus, 2, var_257_4_view_x, var_259_4_view_width, 1, LOCAL(1),
  // view_x+view_width &right_x -> view_x+view_width
  var_std__less, 2, LOCAL(1), LOCAL(4), 1, LOCAL(2),
  // update_if right_x > view_x+view_width &right_x -> view_x+view_width
  var_update_if, 3, LOCAL(2), LOCAL(4), lambda_11, 1, LOCAL(4),
  // view_y+view_height &bottom_y -> view_y+view_height
  var_std__plus, 2, var_258_4_view_y, var_260_4_view_height, 1, LOCAL(1),
  // view_y+view_height &bottom_y -> view_y+view_height
  var_std__less, 2, LOCAL(1), LOCAL(5), 1, LOCAL(2),
  // update_if bottom_y > view_y+view_height &bottom_y -> view_y+view_height
  var_update_if, 3, LOCAL(2), LOCAL(5), lambda_12, 1, LOCAL(5),
  // right_x-left_x bottom_y-top_y
  var_std__minus, 2, LOCAL(4), var_265_4_left_x, 1, LOCAL(1),
  // bottom_y-top_y
  var_std__minus, 2, LOCAL(5), var_266_4_top_y, 1, LOCAL(2),
  // -> left_x top_y right_x-left_x bottom_y-top_y
  LET, 4, var_265_4_left_x, var_266_4_top_y, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(257, 3),
  POS(258, 3),
  POS(259, 3),
  POS(260, 3),
  POS(262, 19),
  POS(262, 3),
  POS(263, 20),
  POS(263, 3),
  POS(265, 11),
  POS(265, 3),
  POS(266, 10),
  POS(266, 3),
  POS(267, 3),
  POS(268, 3),
  POS(272, 13),
  POS(272, 3),
  POS(273, 13),
  POS(273, 3),
  POS(274, 23),
  POS(274, 23),
  POS(274, 3),
  POS(275, 24),
  POS(275, 24),
  POS(275, 3),
  POS(277, 19),
  POS(277, 34),
  POS(277, 3),
  LOCAL(4),
  LOCAL(3),
  LOCAL(5)
};

static FUNCTION_INFO i_func_clip_rectangle = {
  t_func_clip_rectangle, NULL, 27, 3,
  {"267_4_right_x\000", "256_19_view\000", "268_4_bottom_y\000"}
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  0, // parameters
  // view_width-x+1
  var_std__minus, 2, var_259_4_view_width, var_256_24_x, 1, LOCAL(1),
  // view_width-x+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  //  view_width-x+1
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(262, 42),
  POS(262, 42),
  POS(262, 41)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_8[] = {
  2, // locals
  0, // parameters
  // view_height-y+1
  var_std__minus, 2, var_260_4_view_height, var_256_26_y, 1, LOCAL(1),
  // view_height-y+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  //  view_height-y+1
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(263, 44),
  POS(263, 44),
  POS(263, 43)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  2, // locals
  0, // parameters
  // view_x-left_x)
  var_std__minus, 2, var_257_4_view_x, var_265_4_left_x, 1, LOCAL(1),
  // width-(view_x-left_x)
  var_std__minus, 2, var_256_28_width, LOCAL(1), 1, LOCAL(2),
  //  view_x width-(view_x-left_x)
  LET, 2, var_257_4_view_x, LOCAL(2), TAIL_CALL,
  POS(272, 61),
  POS(272, 54),
  POS(272, 46)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_10[] = {
  2, // locals
  0, // parameters
  // view_y-top_y)
  var_std__minus, 2, var_258_4_view_y, var_266_4_top_y, 1, LOCAL(1),
  // height-(view_y-top_y)
  var_std__minus, 2, var_256_34_height, LOCAL(1), 1, LOCAL(2),
  //  view_y height-(view_y-top_y)
  LET, 2, var_258_4_view_y, LOCAL(2), TAIL_CALL,
  POS(273, 61),
  POS(273, 53),
  POS(273, 45)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // view_x+view_width
  var_std__plus, 2, var_257_4_view_x, var_259_4_view_width, 1, LOCAL(1),
  //  view_x+view_width
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(274, 53),
  POS(274, 52)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // view_y+view_height
  var_std__plus, 2, var_258_4_view_y, var_260_4_view_height, 1, LOCAL(1),
  //  view_y+view_height
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(275, 56),
  POS(275, 55)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__view___copy[] = {
  4, // locals
  -9, // parameters
  MANDATORY_PARAMETER, LOCAL(4), // 281_5_view
  MANDATORY_PARAMETER, var_282_5_destination,
  MANDATORY_PARAMETER, var_283_5_source,
  num_1, var_284_5_x,
  num_1, var_285_5_y,
  num_1, var_286_5_sx,
  num_1, var_287_5_sy,
  var_undefined, var_288_5_width,
  var_undefined, var_289_5_height,
  // is_undefined &width -> width_of(source)-sx+1
  var_is_undefined, 1, var_288_5_width, 1, LOCAL(1),
  // update_if width.is_undefined &width -> width_of(source)-sx+1
  var_update_if, 3, LOCAL(1), var_288_5_width, lambda_13, 1, var_288_5_width,
  // is_undefined &height -> height_of(source)-sy+1
  var_is_undefined, 1, var_289_5_height, 1, LOCAL(1),
  // update_if height.is_undefined &height -> height_of(source)-sy+1
  var_update_if, 3, LOCAL(1), var_289_5_height, lambda_14, 1, var_289_5_height,
  // $view_x x_of(view)
  var_x_of, 1, LOCAL(4), 1, var_293_4_view_x,
  // $view_y y_of(view)
  var_y_of, 1, LOCAL(4), 1, var_294_4_view_y,
  // $view_width width_of(view)
  var_width_of, 1, LOCAL(4), 1, var_295_4_view_width,
  // $view_height height_of(view)
  var_height_of, 1, LOCAL(4), 1, var_296_4_view_height,
  // x+view_x-1
  var_std__plus, 2, var_284_5_x, var_293_4_view_x, 1, LOCAL(1),
  // !x x+view_x-1
  var_std__minus, 2, LOCAL(1), num_1, 1, var_284_5_x,
  // y+view_y-1
  var_std__plus, 2, var_285_5_y, var_294_4_view_y, 1, LOCAL(1),
  // !y y+view_y-1
  var_std__minus, 2, LOCAL(1), num_1, 1, var_285_5_y,
  // $dx view_x-x
  var_std__minus, 2, var_293_4_view_x, var_284_5_x, 1, var_299_4_dx,
  // $dy view_y-y
  var_std__minus, 2, var_294_4_view_y, var_285_5_y, 1, var_300_4_dy,
  // 0 &x &sx &width -> view_x sx+dx width-dx
  var_std__less, 2, num_0, var_299_4_dx, 1, LOCAL(1),
  // update_if dx > 0 &x &sx &width -> view_x sx+dx width-dx
  var_update_if, 5, LOCAL(1), var_284_5_x, var_286_5_sx, var_288_5_width, lambda_15, 3, var_284_5_x, var_286_5_sx, var_288_5_width,
  // 0 &y &sy &height -> view_y sy+dy height-dy
  var_std__less, 2, num_0, var_300_4_dy, 1, LOCAL(1),
  // update_if dy > 0 &y &sy &height -> view_y sy+dy height-dy
  var_update_if, 5, LOCAL(1), var_285_5_y, var_287_5_sy, var_289_5_height, lambda_16, 3, var_285_5_y, var_287_5_sy, var_289_5_height,
  // x-view_x+width > view_width &width -> view_width-(x-view_x)
  var_std__minus, 2, var_284_5_x, var_293_4_view_x, 1, LOCAL(1),
  // x-view_x+width > view_width &width -> view_width-(x-view_x)
  var_std__plus, 2, LOCAL(1), var_288_5_width, 1, LOCAL(2),
  // view_width &width -> view_width-(x-view_x)
  var_std__less, 2, var_295_4_view_width, LOCAL(2), 1, LOCAL(3),
  // update_if x-view_x+width > view_width &width -> view_width-(x-view_x)
  var_update_if, 3, LOCAL(3), var_288_5_width, lambda_17, 1, var_288_5_width,
  // y-view_y+height > view_height &height -> view_height-(y-view_y)
  var_std__minus, 2, var_285_5_y, var_294_4_view_y, 1, LOCAL(1),
  // y-view_y+height > view_height &height -> view_height-(y-view_y)
  var_std__plus, 2, LOCAL(1), var_289_5_height, 1, LOCAL(2),
  // view_height &height -> view_height-(y-view_y)
  var_std__less, 2, var_296_4_view_height, LOCAL(2), 1, LOCAL(3),
  // update_if y-view_y+height > view_height &height -> view_height-(y-view_y)
  var_update_if, 3, LOCAL(3), var_289_5_height, lambda_18, 1, var_289_5_height,
  // 0 || height <= 0
  var_std__less, 2, num_0, var_288_5_width, 1, LOCAL(1),
  // 0 || height <= 0
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // 0 || height <= 0
  var_std__or, 2, LOCAL(2), lambda_19, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_20, lambda_21, TAIL_CALL,
  POS(291, 19),
  POS(291, 3),
  POS(292, 20),
  POS(292, 3),
  POS(293, 3),
  POS(294, 3),
  POS(295, 3),
  POS(296, 3),
  POS(297, 6),
  POS(297, 3),
  POS(298, 6),
  POS(298, 3),
  POS(299, 3),
  POS(300, 3),
  POS(301, 18),
  POS(301, 3),
  POS(302, 18),
  POS(302, 3),
  POS(303, 13),
  POS(303, 13),
  POS(303, 30),
  POS(303, 3),
  POS(304, 13),
  POS(304, 13),
  POS(304, 31),
  POS(304, 3),
  POS(306, 14),
  POS(306, 14),
  POS(306, 14),
  POS(305, 3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__view___copy = {
  t_func_std_types__view___copy, NULL, 30, 1,
  {"281_5_view\000"}
};

static TAB_NUM t_lambda_13[] = {
  3, // locals
  0, // parameters
  // width_of(source)-sx+1
  var_width_of, 1, var_283_5_source, 1, LOCAL(1),
  // width_of(source)-sx+1
  var_std__minus, 2, LOCAL(1), var_286_5_sx, 1, LOCAL(2),
  // width_of(source)-sx+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  width_of(source)-sx+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(291, 42),
  POS(291, 42),
  POS(291, 42),
  POS(291, 41)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_14[] = {
  3, // locals
  0, // parameters
  // height_of(source)-sy+1
  var_height_of, 1, var_283_5_source, 1, LOCAL(1),
  // height_of(source)-sy+1
  var_std__minus, 2, LOCAL(1), var_287_5_sy, 1, LOCAL(2),
  // height_of(source)-sy+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  //  height_of(source)-sy+1
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(292, 44),
  POS(292, 44),
  POS(292, 44),
  POS(292, 43)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // sx+dx width-dx
  var_std__plus, 2, var_286_5_sx, var_299_4_dx, 1, LOCAL(1),
  // width-dx
  var_std__minus, 2, var_288_5_width, var_299_4_dx, 1, LOCAL(2),
  //  view_x sx+dx width-dx
  LET, 3, var_293_4_view_x, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(301, 44),
  POS(301, 50),
  POS(301, 36)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  2, // locals
  0, // parameters
  // sy+dy height-dy
  var_std__plus, 2, var_287_5_sy, var_300_4_dy, 1, LOCAL(1),
  // height-dy
  var_std__minus, 2, var_289_5_height, var_300_4_dy, 1, LOCAL(2),
  //  view_y sy+dy height-dy
  LET, 3, var_294_4_view_y, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(302, 45),
  POS(302, 51),
  POS(302, 37)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_17[] = {
  2, // locals
  0, // parameters
  // x-view_x)
  var_std__minus, 2, var_284_5_x, var_293_4_view_x, 1, LOCAL(1),
  // view_width-(x-view_x)
  var_std__minus, 2, var_295_4_view_width, LOCAL(1), 1, LOCAL(2),
  //  view_width-(x-view_x)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(303, 63),
  POS(303, 51),
  POS(303, 50)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  0, // parameters
  // y-view_y)
  var_std__minus, 2, var_285_5_y, var_294_4_view_y, 1, LOCAL(1),
  // view_height-(y-view_y)
  var_std__minus, 2, var_296_4_view_height, LOCAL(1), 1, LOCAL(2),
  //  view_height-(y-view_y)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(304, 67),
  POS(304, 54),
  POS(304, 53)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  0, // parameters
  // 0
  var_std__less, 2, num_0, var_289_5_height, 1, LOCAL(1),
  // 0
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // height <= 0
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(306, 29),
  POS(306, 29),
  POS(306, 19)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  destination
  LET, 1, var_282_5_destination, TAIL_CALL,
  POS(307, 7)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  // copy
  var_copy, 8, var_282_5_destination, var_283_5_source, var_284_5_x, var_285_5_y, var_286_5_sx, var_287_5_sy, var_288_5_width, var_289_5_height, TAIL_CALL,
  POS(309, 7)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__create_vertical_panes[] = {
  0, // locals
  2, // parameters
  var_321_5_screen,
  var_322_5_pane_description,
  // $rc result_count()
  var_result_count, 0, 1, var_324_4_rc,
  // $x x_of(screen)
  var_x_of, 1, var_321_5_screen, 1, var_325_4_x,
  // $y y_of(screen)
  var_y_of, 1, var_321_5_screen, 1, var_326_4_y,
  // $width width_of(screen)
  var_width_of, 1, var_321_5_screen, 1, var_327_4_width,
  // $height height_of(screen)
  var_height_of, 1, var_321_5_screen, 1, var_328_4_height,
  // $views empty_list
  LET, 1, var_empty_list, 1, var_329_4_views,
  // cond
  var_cond, 3, lambda_22, lambda_25, lambda_35, TAIL_CALL,
  POS(324, 3),
  POS(325, 3),
  POS(326, 3),
  POS(327, 3),
  POS(328, 3),
  POS(329, 3),
  POS(330, 3)
};

static FUNCTION_INFO i_func_std__create_vertical_panes = {
  t_func_std__create_vertical_panes, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // is_an_integer:
  var_is_an_integer, 1, var_322_5_pane_description, 1, LOCAL(1),
  //  pane_description.is_an_integer:
  LET, 2, LOCAL(1), lambda_23, TAIL_CALL,
  POS(331, 25),
  POS(331, 7)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_23[] = {
  3, // locals
  0, // parameters
  // $n pane_description
  LET, 1, var_322_5_pane_description, 1, LOCAL(3),
  // n+1 x x+width)
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // x+width)
  var_std__plus, 2, var_325_4_x, var_327_4_width, 1, LOCAL(2),
  // $iter bresenham(n+1 x x+width)
  var_bresenham, 3, LOCAL(1), var_325_4_x, LOCAL(2), 1, var_333_8_iter,
  // next_value &iter !x
  var_next_value, 1, var_333_8_iter, 2, var_333_8_iter, var_325_4_x,
  // repeat n
  var_repeat, 3, LOCAL(3), lambda_24, func_return, TAIL_CALL,
  POS(332, 7),
  POS(333, 23),
  POS(333, 29),
  POS(333, 7),
  POS(334, 7),
  POS(335, 7),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 6, 1,
  {"332_8_n\000"}
};

static TAB_NUM t_lambda_24[] = {
  3, // locals
  0, // parameters
  // next_value &iter $next_x
  var_next_value, 1, var_333_8_iter, 2, var_333_8_iter, LOCAL(3),
  // next_x-1 height)
  var_std__minus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // create_view(screen x y next_x-1 height)
  var_create_view, 5, var_321_5_screen, var_325_4_x, var_326_4_y, LOCAL(1), var_328_4_height, 1, LOCAL(2),
  // push &views create_view(screen x y next_x-1 height)
  var_push, 2, var_329_4_views, LOCAL(2), 1, var_329_4_views,
  // !x next_x
  LET, 1, LOCAL(3), 1, var_325_4_x,
  // next
  var_next, 0, TAIL_CALL,
  POS(337, 11),
  POS(338, 46),
  POS(338, 23),
  POS(338, 11),
  POS(339, 11),
  POS(340, 11),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 6, 1,
  {"337_29_next_x\000"}
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_322_5_pane_description, 1, LOCAL(1),
  //  pane_description.is_a_list:
  LET, 2, LOCAL(1), lambda_26, TAIL_CALL,
  POS(342, 25),
  POS(342, 7)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  // $fixed_width 0
  LET, 1, num_0, 1, var_343_8_fixed_width,
  // $flex_width_count 0
  LET, 1, num_0, 1, var_344_8_flex_width_count,
  // for_each pane_description
  var_for_each, 3, var_322_5_pane_description, lambda_27, lambda_30, TAIL_CALL,
  POS(343, 7),
  POS(344, 7),
  POS(345, 7)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  1, // parameters
  var_346_12_pane_width,
  // pane_width < 1:
  var_std__less, 2, var_346_12_pane_width, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_28, lambda_29, TAIL_CALL,
  POS(348, 13),
  POS(347, 11)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  // inc &flex_width_count
  var_inc, 1, var_344_8_flex_width_count, 1, var_344_8_flex_width_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(349, 15),
  POS(350, 15)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  // plus &fixed_width pane_width
  var_plus, 2, var_343_8_fixed_width, var_346_12_pane_width, 1, var_343_8_fixed_width,
  // next
  var_next, 0, TAIL_CALL,
  POS(352, 15),
  POS(353, 15)
};

static FUNCTION_INFO i_lambda_29 = {
  t_lambda_29, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // fixed_width+flex_width_count > width
  var_std__plus, 2, var_343_8_fixed_width, var_344_8_flex_width_count, 1, LOCAL(1),
  // width
  var_std__less, 2, var_327_4_width, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_31, lambda_32, TAIL_CALL,
  POS(356, 13),
  POS(356, 44),
  POS(355, 11)
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
  POS(357, 15)
};

static FUNCTION_INFO i_lambda_31 = {
  t_lambda_31, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  // $flex_width width-fixed_width
  var_std__minus, 2, var_327_4_width, var_343_8_fixed_width, 1, var_359_16_flex_width,
  // $remaining_flex_width flex_width
  LET, 1, var_359_16_flex_width, 1, var_360_16_remaining_flex_width,
  // for_each pane_description
  var_for_each, 3, var_322_5_pane_description, lambda_33, func_return, TAIL_CALL,
  POS(359, 15),
  POS(360, 15),
  POS(361, 15)
};

static FUNCTION_INFO i_lambda_32 = {
  t_lambda_32, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  1, // parameters
  var_362_20_pane_width,
  // pane_width < 1:
  var_std__less, 2, var_362_20_pane_width, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, func_create_pane_view, TAIL_CALL,
  POS(364, 21),
  POS(363, 19)
};

static FUNCTION_INFO i_lambda_33 = {
  t_lambda_33, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_34[] = {
  5, // locals
  0, // parameters
  // dec &flex_width_count
  var_dec, 1, var_344_8_flex_width_count, 1, var_344_8_flex_width_count,
  // pane_width*flex_width).to_integer 1)
  var_std__times, 2, var_362_20_pane_width, var_359_16_flex_width, 1, LOCAL(1),
  // round(pane_width*flex_width).to_integer 1)
  var_round, 1, LOCAL(1), 1, LOCAL(2),
  // to_integer 1)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(3),
  // max(round(pane_width*flex_width).to_integer 1)
  var_max, 2, LOCAL(3), num_1, 1, LOCAL(4),
  // remaining_flex_width-flex_width_count #
  var_std__minus, 2, var_360_16_remaining_flex_width, var_344_8_flex_width_count, 1, LOCAL(5),
  // !pane_width
  var_min, 2, LOCAL(4), LOCAL(5), 1, var_362_20_pane_width,
  // minus &remaining_flex_width pane_width
  var_minus, 2, var_360_16_remaining_flex_width, var_362_20_pane_width, 1, var_360_16_remaining_flex_width,
  // create_pane_view
  func_create_pane_view, 0, TAIL_CALL,
  POS(365, 23),
  POS(368, 37),
  POS(368, 31),
  POS(368, 60),
  POS(368, 27),
  POS(369, 27),
  POS(366, 23),
  POS(373, 23),
  POS(374, 23)
};

static FUNCTION_INFO i_lambda_34 = {
  t_lambda_34, NULL, 9, 0,
  {}
};

static TAB_NUM t_func_create_pane_view[] = {
  3, // locals
  0, // parameters
  // x+pane_width-1 height)
  var_std__plus, 2, var_325_4_x, var_362_20_pane_width, 1, LOCAL(1),
  // x+pane_width-1 height)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // create_view(screen x y x+pane_width-1 height)
  var_create_view, 5, var_321_5_screen, var_325_4_x, var_326_4_y, LOCAL(2), var_328_4_height, 1, LOCAL(3),
  // push &views create_view(screen x y x+pane_width-1 height)
  var_push, 2, var_329_4_views, LOCAL(3), 1, var_329_4_views,
  // plus &x pane_width
  var_plus, 2, var_325_4_x, var_362_20_pane_width, 1, var_325_4_x,
  // next
  var_next, 0, TAIL_CALL,
  POS(378, 56),
  POS(378, 56),
  POS(378, 33),
  POS(378, 21),
  POS(379, 21),
  POS(380, 21)
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
  POS(382, 7)
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
  POS(382, 15)
};

static FUNCTION_INFO i_lambda_36 = {
  t_lambda_36, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_return[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_324_4_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_37, lambda_38, TAIL_CALL,
  POS(386, 7),
  POS(385, 5)
};

static FUNCTION_INFO i_func_return = {
  t_func_return, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  //  views
  LET, 1, var_329_4_views, TAIL_CALL,
  POS(387, 9)
};

static FUNCTION_INFO i_lambda_37 = {
  t_lambda_37, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  // spread views
  var_spread, 1, var_329_4_views, TAIL_CALL,
  POS(388, 9)
};

static FUNCTION_INFO i_lambda_38 = {
  t_lambda_38, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__create_horizontal_panes[] = {
  0, // locals
  2, // parameters
  var_392_5_screen,
  var_393_5_pane_description,
  // $rc result_count()
  var_result_count, 0, 1, var_395_4_rc,
  // $x x_of(screen)
  var_x_of, 1, var_392_5_screen, 1, var_396_4_x,
  // $y y_of(screen)
  var_y_of, 1, var_392_5_screen, 1, var_397_4_y,
  // $width width_of(screen)
  var_width_of, 1, var_392_5_screen, 1, var_398_4_width,
  // $height height_of(screen)
  var_height_of, 1, var_392_5_screen, 1, var_399_4_height,
  // $views empty_list
  LET, 1, var_empty_list, 1, var_400_4_views,
  // cond
  var_cond, 3, lambda_39, lambda_42, lambda_54, TAIL_CALL,
  POS(395, 3),
  POS(396, 3),
  POS(397, 3),
  POS(398, 3),
  POS(399, 3),
  POS(400, 3),
  POS(401, 3)
};

static FUNCTION_INFO i_func_std__create_horizontal_panes = {
  t_func_std__create_horizontal_panes, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_39[] = {
  1, // locals
  0, // parameters
  // is_an_integer:
  var_is_an_integer, 1, var_393_5_pane_description, 1, LOCAL(1),
  //  pane_description.is_an_integer:
  LET, 2, LOCAL(1), lambda_40, TAIL_CALL,
  POS(402, 25),
  POS(402, 7)
};

static FUNCTION_INFO i_lambda_39 = {
  t_lambda_39, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_40[] = {
  3, // locals
  0, // parameters
  // $n pane_description
  LET, 1, var_393_5_pane_description, 1, LOCAL(3),
  // n+1 y y+height)
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // y+height)
  var_std__plus, 2, var_397_4_y, var_399_4_height, 1, LOCAL(2),
  // $iter bresenham(n+1 y y+height)
  var_bresenham, 3, LOCAL(1), var_397_4_y, LOCAL(2), 1, var_404_8_iter,
  // next_value &iter !y
  var_next_value, 1, var_404_8_iter, 2, var_404_8_iter, var_397_4_y,
  // repeat n
  var_repeat, 3, LOCAL(3), lambda_41, func_2_return, TAIL_CALL,
  POS(403, 7),
  POS(404, 23),
  POS(404, 29),
  POS(404, 7),
  POS(405, 7),
  POS(406, 7),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_40 = {
  t_lambda_40, NULL, 6, 1,
  {"403_8_n\000"}
};

static TAB_NUM t_lambda_41[] = {
  3, // locals
  0, // parameters
  // next_value &iter $next_y
  var_next_value, 1, var_404_8_iter, 2, var_404_8_iter, LOCAL(3),
  // next_y-1)
  var_std__minus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // create_view(screen x y width next_y-1)
  var_create_view, 5, var_392_5_screen, var_396_4_x, var_397_4_y, var_398_4_width, LOCAL(1), 1, LOCAL(2),
  // push &views create_view(screen x y width next_y-1)
  var_push, 2, var_400_4_views, LOCAL(2), 1, var_400_4_views,
  // !y next_y
  LET, 1, LOCAL(3), 1, var_397_4_y,
  // next
  var_next, 0, TAIL_CALL,
  POS(408, 11),
  POS(409, 52),
  POS(409, 23),
  POS(409, 11),
  POS(410, 11),
  POS(411, 11),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_41 = {
  t_lambda_41, NULL, 6, 1,
  {"408_29_next_y\000"}
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // is_a_list:
  var_is_a_list, 1, var_393_5_pane_description, 1, LOCAL(1),
  //  pane_description.is_a_list:
  LET, 2, LOCAL(1), lambda_43, TAIL_CALL,
  POS(413, 25),
  POS(413, 7)
};

static FUNCTION_INFO i_lambda_42 = {
  t_lambda_42, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  // $fixed_height 0
  LET, 1, num_0, 1, var_414_8_fixed_height,
  // $flex_height_count 0
  LET, 1, num_0, 1, var_415_8_flex_height_count,
  // for_each pane_description
  var_for_each, 3, var_393_5_pane_description, lambda_44, lambda_47, TAIL_CALL,
  POS(414, 7),
  POS(415, 7),
  POS(416, 7)
};

static FUNCTION_INFO i_lambda_43 = {
  t_lambda_43, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  1, // parameters
  var_417_12_pane_height,
  // pane_height < 1:
  var_std__less, 2, var_417_12_pane_height, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_45, lambda_46, TAIL_CALL,
  POS(419, 13),
  POS(418, 11)
};

static FUNCTION_INFO i_lambda_44 = {
  t_lambda_44, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  // inc &flex_height_count
  var_inc, 1, var_415_8_flex_height_count, 1, var_415_8_flex_height_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(420, 15),
  POS(421, 15)
};

static FUNCTION_INFO i_lambda_45 = {
  t_lambda_45, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  // plus &fixed_height pane_height
  var_plus, 2, var_414_8_fixed_height, var_417_12_pane_height, 1, var_414_8_fixed_height,
  // next
  var_next, 0, TAIL_CALL,
  POS(423, 15),
  POS(424, 15)
};

static FUNCTION_INFO i_lambda_46 = {
  t_lambda_46, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_47[] = {
  2, // locals
  0, // parameters
  // fixed_height+flex_height_count > height
  var_std__plus, 2, var_414_8_fixed_height, var_415_8_flex_height_count, 1, LOCAL(1),
  // height
  var_std__less, 2, var_399_4_height, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_48, lambda_49, TAIL_CALL,
  POS(427, 13),
  POS(427, 46),
  POS(426, 11)
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
  POS(428, 15)
};

static FUNCTION_INFO i_lambda_48 = {
  t_lambda_48, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  // $flex_height height-fixed_height
  var_std__minus, 2, var_399_4_height, var_414_8_fixed_height, 1, var_430_16_flex_height,
  // $remaining_flex_height flex_height
  LET, 1, var_430_16_flex_height, 1, var_431_16_remaining_flex_height,
  // for_each pane_description
  var_for_each, 3, var_393_5_pane_description, lambda_50, func_2_return, TAIL_CALL,
  POS(430, 15),
  POS(431, 15),
  POS(432, 15)
};

static FUNCTION_INFO i_lambda_49 = {
  t_lambda_49, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_50[] = {
  1, // locals
  1, // parameters
  var_433_20_pane_height,
  // pane_height < 1:
  var_std__less, 2, var_433_20_pane_height, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_51, func_2_create_pane_view, TAIL_CALL,
  POS(435, 21),
  POS(434, 19)
};

static FUNCTION_INFO i_lambda_50 = {
  t_lambda_50, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_51[] = {
  1, // locals
  0, // parameters
  // dec &flex_height_count
  var_dec, 1, var_415_8_flex_height_count, 1, var_415_8_flex_height_count,
  // flex_height_count == 0
  var_std__equal, 2, var_415_8_flex_height_count, num_0, 1, LOCAL(1),
  // !pane_height
  var_if, 3, LOCAL(1), lambda_52, lambda_53, 1, var_433_20_pane_height,
  // minus &remaining_flex_height pane_height
  var_minus, 2, var_431_16_remaining_flex_height, var_433_20_pane_height, 1, var_431_16_remaining_flex_height,
  // create_pane_view
  func_2_create_pane_view, 0, TAIL_CALL,
  POS(436, 23),
  POS(439, 27),
  POS(437, 23),
  POS(448, 23),
  POS(449, 23)
};

static FUNCTION_INFO i_lambda_51 = {
  t_lambda_51, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  //  flex_height
  LET, 1, var_430_16_flex_height, TAIL_CALL,
  POS(440, 29)
};

static FUNCTION_INFO i_lambda_52 = {
  t_lambda_52, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_53[] = {
  6, // locals
  0, // parameters
  // pane_height*flex_height).to_integer 1)
  var_std__times, 2, var_433_20_pane_height, var_430_16_flex_height, 1, LOCAL(1),
  // round(pane_height*flex_height).to_integer 1)
  var_round, 1, LOCAL(1), 1, LOCAL(2),
  // to_integer 1)
  var_to_integer, 1, LOCAL(2), 1, LOCAL(3),
  // max(round(pane_height*flex_height).to_integer 1)
  var_max, 2, LOCAL(3), num_1, 1, LOCAL(4),
  // remaining_flex_height-flex_height_count #
  var_std__minus, 2, var_431_16_remaining_flex_height, var_415_8_flex_height_count, 1, LOCAL(5),
  // min
  var_min, 2, LOCAL(4), LOCAL(5), 1, LOCAL(6),
  // 
  LET, 1, LOCAL(6), TAIL_CALL,
  POS(443, 41),
  POS(443, 35),
  POS(443, 66),
  POS(443, 31),
  POS(444, 31),
  POS(442, 29),
  POS(441, 29)
};

static FUNCTION_INFO i_lambda_53 = {
  t_lambda_53, NULL, 7, 0,
  {}
};

static TAB_NUM t_func_2_create_pane_view[] = {
  3, // locals
  0, // parameters
  // y+pane_height-1)
  var_std__plus, 2, var_397_4_y, var_433_20_pane_height, 1, LOCAL(1),
  // y+pane_height-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // create_view(screen x y width y+pane_height-1)
  var_create_view, 5, var_392_5_screen, var_396_4_x, var_397_4_y, var_398_4_width, LOCAL(2), 1, LOCAL(3),
  // push &views create_view(screen x y width y+pane_height-1)
  var_push, 2, var_400_4_views, LOCAL(3), 1, var_400_4_views,
  // plus &y pane_height
  var_plus, 2, var_397_4_y, var_433_20_pane_height, 1, var_397_4_y,
  // next
  var_next, 0, TAIL_CALL,
  POS(453, 62),
  POS(453, 62),
  POS(453, 33),
  POS(453, 21),
  POS(454, 21),
  POS(455, 21)
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
  POS(457, 7)
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
  POS(457, 15)
};

static FUNCTION_INFO i_lambda_55 = {
  t_lambda_55, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_2_return[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_395_4_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_56, lambda_57, TAIL_CALL,
  POS(461, 7),
  POS(460, 5)
};

static FUNCTION_INFO i_func_2_return = {
  t_func_2_return, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  //  views
  LET, 1, var_400_4_views, TAIL_CALL,
  POS(462, 9)
};

static FUNCTION_INFO i_lambda_56 = {
  t_lambda_56, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  // spread views
  var_spread, 1, var_400_4_views, TAIL_CALL,
  POS(463, 9)
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
    FOT_DERIVED, 0, 22,
    "generic_terminal\000std_types", std_types__generic_terminal__attributes,
    {"resource\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "resource\000std_types", NULL,
    {.position = POS(79, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "type_of\000", NULL,
    {.position = POS(81, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(81, 38)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "x_of\000", NULL,
    {.position = POS(82, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "y_of\000", NULL,
    {.position = POS(83, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "plot_x_resolution_of\000", NULL,
    {.position = POS(84, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "plot_y_resolution_of\000", NULL,
    {.position = POS(85, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "width_of\000", NULL,
    {.position = POS(86, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "height_of\000", NULL,
    {.position = POS(87, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "character_width_of\000", NULL,
    {.position = POS(88, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "ascent_of\000", NULL,
    {.position = POS(89, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "descent_of\000", NULL,
    {.position = POS(90, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "character_height_of\000", NULL,
    {.position = POS(91, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "line_spacing_of\000", NULL,
    {.position = POS(92, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "line_height_of\000", NULL,
    {.position = POS(93, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "baseline_of\000", NULL,
    {.position = POS(94, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "clear_colour_of\000", NULL,
    {.position = POS(95, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "draw_colour_of\000", NULL,
    {.position = POS(96, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "text_attributes_of\000", NULL,
    {.position = POS(97, 30)}
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
    "101_25_screen\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "101_32_x\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(103, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(104, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(102, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "abs_y\000basic_private", NULL,
    {.const_idx = -func_basic_private__abs_y}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "107_25_screen\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "107_32_y\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_view\000std", NULL,
    {.const_idx = -func_std__create_view}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(127, 13)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "set_clear_colour\000", NULL,
    {.position = POS(141, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "set_draw_colour\000", NULL,
    {.position = POS(148, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "set_text_attributes\000", NULL,
    {.position = POS(155, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "add_text_attributes\000", NULL,
    {.position = POS(162, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_or\000std", NULL,
    {.position = POS(167, 35)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "remove_text_attributes\000", NULL,
    {.position = POS(169, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(176, 58)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000std", NULL,
    {.position = POS(176, 27)}
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
    {.position = POS(182, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(190, 9)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "draw_attributed_text\000", NULL,
    {.position = POS(198, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "clear\000", NULL,
    {.position = POS(213, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "215_5_view\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "217_5_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "218_5_y\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(222, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(222, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "invert\000", NULL,
    {.position = POS(232, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "draw_shadow\000", NULL,
    {.position = POS(244, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "256_24_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "256_26_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "256_28_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "256_34_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "257_4_view_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "258_4_view_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "259_4_view_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "260_4_view_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "265_4_left_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "266_4_top_y\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "copy\000", NULL,
    {.position = POS(279, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "282_5_destination\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "283_5_source\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "284_5_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "285_5_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "286_5_sx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "287_5_sy\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "288_5_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "289_5_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "293_4_view_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "294_4_view_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "295_4_view_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "296_4_view_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "299_4_dx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "300_4_dy\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(306, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(306, 14)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_vertical_panes\000std", NULL,
    {.const_idx = -func_std__create_vertical_panes}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "321_5_screen\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "322_5_pane_description\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "324_4_rc\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(324, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "325_4_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "326_4_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "327_4_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "328_4_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "329_4_views\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(329, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_integer\000", NULL,
    {.position = POS(331, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "333_8_iter\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bresenham\000", NULL,
    {.position = POS(333, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next_value\000", NULL,
    {.position = POS(334, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_view\000", NULL,
    {.position = POS(338, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(338, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(340, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "repeat\000", NULL,
    {.position = POS(335, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(342, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "343_8_fixed_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "344_8_flex_width_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "346_12_pane_width\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(349, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(352, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "359_16_flex_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "360_16_remaining_flex_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "362_20_pane_width\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(365, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(368, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "round\000", NULL,
    {.position = POS(368, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(368, 60)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(368, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "min\000", NULL,
    {.position = POS(367, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000", NULL,
    {.position = POS(373, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(361, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(382, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(330, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(386, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spread\000", NULL,
    {.position = POS(388, 9)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_horizontal_panes\000std", NULL,
    {.const_idx = -func_std__create_horizontal_panes}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "392_5_screen\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "393_5_pane_description\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "395_4_rc\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "396_4_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "397_4_y\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "398_4_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "399_4_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "400_4_views\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "404_8_iter\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "414_8_fixed_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "415_8_flex_height_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "417_12_pane_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "430_16_flex_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "431_16_remaining_flex_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "433_20_pane_height\000", NULL
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
  89, // number of constants
  175, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
