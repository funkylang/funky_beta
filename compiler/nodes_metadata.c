#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  str_access = -1,
  str_alias = -2,
  str_and = -3,
  str_argument = -4,
  str_arguments = -5,
  str_body = -6,
  str_call = -7,
  str_calls = -8,
  str_character = -9,
  str_characters = -10,
  str_component = -11,
  str_components = -12,
  str_digits = -13,
  str_expression = -14,
  str_extensions = -15,
  str_filename = -16,
  str_head = -17,
  str_identifier = -18,
  str_lines = -19,
  str_major = -20,
  str_minor = -21,
  str_minus = -22,
  str_name = -23,
  str_operand = -24,
  str_operator = -25,
  str_option = -26,
  str_or = -27,
  str_over = -28,
  str_pair = -29,
  str_parameter = -30,
  str_parameters = -31,
  str_plus = -32,
  str_pragma = -33,
  str_remark = -34,
  str_remarks = -35,
  str_sign = -36,
  str_statement = -37,
  str_statements = -38,
  str_text = -39,
  str_times = -40,
  str_version = -41,
  str_xor = -42,
  list_60_3 = -43,
  list_64_3 = -44,
  list_69_3 = -45,
  list_73_3 = -46,
  list_80_3 = -47,
  str_inline_statement = -48,
  str_attribute_value = -49,
  str_type_function = -50,
  str_method_value_pai = -51,
  list_98_3 = -52,
  str_namespace_instru = -53,
  str_require_instruct = -54,
  list_106_3 = -55,
  str_using_instructio = -56,
  str_alias_instructio = -57,
  list_114_3 = -58,
  str_resolve_instruct = -59,
  str_allow_instructio = -60,
  list_124_3 = -61,
  str_version_no = -62,
  list_132_3 = -63,
  str_unstable = -64,
  str_allow_hidden = -65,
  str_allow_unused = -66,
  str_functor = -67,
  list_144_3 = -68,
  str_function_call_ex = -69,
  list_150_3 = -70,
  str_attribute_access = -71,
  list_156_3 = -72,
  str_inline_functor = -73,
  str_inline_function = -74,
  str_inline_attribute = -75,
  str_io_call = -76,
  str_function_call = -77,
  list_178_3 = -78,
  str_function_call_ar = -79,
  str_inline_return = -80,
  str_attribute_access_2 = -81,
  list_187_3 = -82,
  str_spaced_arguments = -83,
  str_spaced_statement = -84,
  list_202_3 = -85,
  str_even_more_statem = -86,
  str_multiline_argume = -87,
  str_tagged_multiline = -88,
  str_remark_and_multi = -89,
  list_218_3 = -90,
  str_dummy_definition = -91,
  str_variable = -92,
  str_definition = -93,
  str_redefinition = -94,
  str_update = -95,
  list_234_3 = -96,
  str_key_value = -97,
  str_sequence_express = -98,
  str_comma = -99,
  str_comma_expression = -100,
  str_conditional_expr = -101,
  str_and_2 = -102,
  str_and_expression = -103,
  str_or_2 = -104,
  str_or_expression = -105,
  str_named_operator_e = -106,
  str_named_operator = -107,
  str_range_expression = -108,
  str_range = -109,
  str_relational_expre = -110,
  str_equal = -111,
  str_not_equal = -112,
  str_less_equal = -113,
  str_less_than = -114,
  str_greater_equal = -115,
  str_greater_than = -116,
  str_tagged_bit_expre = -117,
  str_bit_expression = -118,
  str_shift_left = -119,
  str_shift_right = -120,
  str_bit_and = -121,
  str_bit_and_2 = -122,
  str_bit_or = -123,
  str_bit_or_2 = -124,
  str_bit_xor = -125,
  str_bit_xor_2 = -126,
  str_tagged_additive = -127,
  str_additive_express = -128,
  str_plus_2 = -129,
  str_minus_2 = -130,
  str_multiplicative_e = -131,
  str_times_2 = -132,
  str_over_2 = -133,
  str_parenthesed_expr = -134,
  list_322_3 = -135,
  str_backquoted = -136,
  str_negation = -137,
  str_multiline_operat = -138,
  str_multiline_plus = -139,
  str_multiline_minus = -140,
  str_multiline_minus_2 = -141,
  str_multiline_times = -142,
  str_multiline_over = -143,
  str_multiline_over_w = -144,
  str_multiline_shift = -145,
  str_multiline_shift_2 = -146,
  str_multiline_equal = -147,
  str_multiline_not_eq = -148,
  str_multiline_less_e = -149,
  str_multiline_less_t = -150,
  str_multiline_greate = -151,
  str_multiline_greate_2 = -152,
  str_multiline_and = -153,
  str_multiline_or = -154,
  str_multiline_bit_an = -155,
  str_multiline_bit_an_2 = -156,
  str_multiline_bit_or = -157,
  str_multiline_bit_xo = -158,
  str_multiline_assign = -159,
  str_inline_attribute_2 = -160,
  str_inline_method_va = -161,
  str_expression_and_i = -162,
  list_384_3 = -163,
  str_spaced_inline_ar = -164,
  str_numeric_literal = -165,
  list_392_3 = -166,
  str_at_character_lit = -167,
  str_named_character = -168,
  str_numeric_characte = -169,
  str_character_litera = -170,
  list_403_3 = -171,
  str_string_literal = -172,
  list_408_3 = -173,
  str_some_string_comp = -174,
  list_413_3 = -175,
  str_character_sequen = -176,
  list_419_3 = -177,
  str_multiline_string = -178,
  str_newline = -179,
  str_some_string_line = -180,
  str_string_line_end = -181,
  str_at_character = -182,
  str_tagged_empty_cha = -183,
  str_empty_character = -184,
  str_escape_expressio = -185,
  str_named_character_2 = -186,
  str_numeric_characte_2 = -187,
  str_string_line_char = -188,
  str_unique = -189,
  list_450_3 = -190,
  str_attribute = -191,
  str_attribute_with_s = -192,
  list_459_3 = -193,
  str_line_end_stateme = -194,
  str_inline_body = -195,
  list_468_3 = -196,
  list_474_3 = -197,
  str_one_or_more_inli = -198,
  list_479_3 = -199,
  str_open_parameters = -200,
  list_485_3 = -201,
  str_inline_parameter = -202,
  list_491_3 = -203,
  list_497_3 = -204,
  str_myself = -205,
  str_rest = -206,
  str_initial_value = -207,
  list_508_3 = -208,
  str_close_parameters = -209,
  list_513_3 = -210,
  str_return_expressio = -211,
  str_return = -212,
  list_522_3 = -213,
  str_line_end_and_lin = -214,
  list_527_3 = -215,
  str_line_remarks = -216,
  str_spaced_remark = -217,
  str_multiline_remark = -218,
  list_540_3 = -219,
  str_remark_lines = -220,
  str_dummy_remark = -221
};

enum {
  var__START = FIRST_VAR-1,
  var_funky__node_name_of, // attribute
  var_std__assign, // extern
  var_funky__node_fields_of, // attribute
  var_funky__access_of, // extern
  var_to_string, // extern polymorphic
  var_funky__alias_of, // extern
  var_funky__and2_of, // extern
  var_funky__argument_of, // extern
  var_funky__arguments_of, // extern
  var_funky__body_of, // extern
  var_funky__call_of, // extern
  var_funky__calls_of, // extern
  var_funky__character_of, // extern
  var_funky__characters_of, // extern
  var_funky__component_of, // extern
  var_funky__components_of, // extern
  var_funky__digits_of, // extern
  var_funky__expression_of, // extern
  var_funky__extensions_of, // extern
  var_funky__filename_of, // extern
  var_funky__head_of, // extern
  var_funky__identifier_of, // extern
  var_funky__lines_of, // extern
  var_funky__major_of, // extern
  var_funky__minor_of, // extern
  var_funky__minus2_of, // extern
  var_funky__name_of, // extern
  var_funky__operand_of, // extern
  var_funky__operator_of, // extern
  var_funky__option_of, // extern
  var_funky__or2_of, // extern
  var_funky__over2_of, // extern
  var_funky__pair_of, // extern
  var_funky__parameter_of, // extern
  var_funky__parameters_of, // extern
  var_funky__plus2_of, // extern
  var_funky__pragma_of, // extern
  var_funky__remark_of, // extern
  var_funky__remarks_of, // extern
  var_funky__sign_of, // extern
  var_funky__statement_of, // extern
  var_funky__statements_of, // extern
  var_funky__text_of, // extern
  var_funky__times2_of, // extern
  var_funky__version_of, // extern
  var_funky__xor2_of, // extern
  var_funky_types__fieldless_node, // extern
  var_empty_list, // extern
  var_list, // extern
  var_funky_types__simple_name, // extern
  var_funky_types__identifier_and_expression, // extern
  var_funky_types__simple_expression, // extern
  var_funky_types__namespace_meta_instruction, // extern
  var_funky_types__statement, // extern
  var_funky_types__inline_statement, // extern
  var_funky_types__attribute_value_pair, // extern
  var_funky_types__type_function, // extern
  var_funky_types__method_value_pair, // extern
  var_funky_types__pair, // extern
  var_funky_types__namespace_instruction, // extern
  var_funky_types__require_instruction, // extern
  var_funky_types__using_instruction, // extern
  var_funky_types__alias_instruction, // extern
  var_funky_types__resolve_instruction, // extern
  var_funky_types__allow_instruction, // extern
  var_funky_types__alias, // extern
  var_funky_types__version_no, // extern
  var_funky_types__unstable, // extern
  var_funky_types__allow_hidden, // extern
  var_funky_types__allow_unused, // extern
  var_funky_types__functor, // extern
  var_funky_types__function_call_extension, // extern
  var_funky_types__attribute_access_extension, // extern
  var_funky_types__inline_functor, // extern
  var_funky_types__inline_function_call_extension, // extern
  var_funky_types__inline_attribute_access_extension, // extern
  var_funky_types__io_call, // extern
  var_funky_types__function_call, // extern
  var_funky_types__function_call_arguments, // extern
  var_funky_types__inline_return, // extern
  var_funky_types__attribute_access, // extern
  var_funky_types__spaced_arguments, // extern
  var_funky_types__spaced_statement_arguments, // extern
  var_funky_types__arguments, // extern
  var_funky_types__even_more_statement_arguments, // extern
  var_funky_types__multiline_arguments, // extern
  var_funky_types__tagged_multiline_arguments, // extern
  var_funky_types__remark_and_multiline_function_call, // extern
  var_funky_types__dummy_definition, // extern
  var_funky_types__variable, // extern
  var_funky_types__definition, // extern
  var_funky_types__redefinition, // extern
  var_funky_types__update, // extern
  var_funky_types__expression, // extern
  var_funky_types__key_value, // extern
  var_funky_types__sequence_expression, // extern
  var_funky_types__comma, // extern
  var_funky_types__comma_expression, // extern
  var_funky_types__conditional_expression, // extern
  var_funky_types__and, // extern
  var_funky_types__and_expression, // extern
  var_funky_types__or, // extern
  var_funky_types__or_expression, // extern
  var_funky_types__named_operator_expression, // extern
  var_funky_types__named_operator, // extern
  var_funky_types__range_expression, // extern
  var_funky_types__range, // extern
  var_funky_types__relational_expression, // extern
  var_funky_types__equal, // extern
  var_funky_types__not_equal, // extern
  var_funky_types__less_equal, // extern
  var_funky_types__less_than, // extern
  var_funky_types__greater_equal, // extern
  var_funky_types__greater_than, // extern
  var_funky_types__tagged_bit_expression, // extern
  var_funky_types__bit_expression, // extern
  var_funky_types__shift_left, // extern
  var_funky_types__shift_right, // extern
  var_funky_types__bit_and, // extern
  var_funky_types__bit_and2, // extern
  var_funky_types__bit_or, // extern
  var_funky_types__bit_or2, // extern
  var_funky_types__bit_xor, // extern
  var_funky_types__bit_xor2, // extern
  var_funky_types__tagged_additive_expression, // extern
  var_funky_types__additive_expression, // extern
  var_funky_types__plus, // extern
  var_funky_types__plus2, // extern
  var_funky_types__minus, // extern
  var_funky_types__minus2, // extern
  var_funky_types__multiplicative_expression, // extern
  var_funky_types__times, // extern
  var_funky_types__times2, // extern
  var_funky_types__over, // extern
  var_funky_types__over2, // extern
  var_funky_types__parenthesed_expression, // extern
  var_funky_types__backquoted, // extern
  var_funky_types__negation, // extern
  var_funky_types__multiline_operator, // extern
  var_funky_types__multiline_plus, // extern
  var_funky_types__multiline_minus, // extern
  var_funky_types__multiline_minus_with_remark, // extern
  var_funky_types__multiline_times, // extern
  var_funky_types__multiline_over, // extern
  var_funky_types__multiline_over_with_remark, // extern
  var_funky_types__multiline_shift_left, // extern
  var_funky_types__multiline_shift_right, // extern
  var_funky_types__multiline_equal, // extern
  var_funky_types__multiline_not_equal, // extern
  var_funky_types__multiline_less_equal, // extern
  var_funky_types__multiline_less_than, // extern
  var_funky_types__multiline_greater_equal, // extern
  var_funky_types__multiline_greater_than, // extern
  var_funky_types__multiline_and, // extern
  var_funky_types__multiline_or, // extern
  var_funky_types__multiline_bit_and, // extern
  var_funky_types__multiline_bit_and_with_remark, // extern
  var_funky_types__multiline_bit_or, // extern
  var_funky_types__multiline_bit_xor, // extern
  var_funky_types__multiline_assign, // extern
  var_funky_types__inline_attribute_value_pair, // extern
  var_funky_types__inline_method_value_pair, // extern
  var_funky_types__expression_and_inline_arguments, // extern
  var_funky_types__spaced_inline_arguments, // extern
  var_funky_types__numeric_literal, // extern
  var_funky_types__at_character_literal, // extern
  var_funky_types__named_character_literal, // extern
  var_funky_types__numeric_character_literal, // extern
  var_funky_types__character_literal, // extern
  var_funky_types__string_literal, // extern
  var_funky_types__some_string_components, // extern
  var_funky_types__character_sequence, // extern
  var_funky_types__multiline_string_literal, // extern
  var_funky_types__newline, // extern
  var_funky_types__some_string_line_components, // extern
  var_funky_types__string_line_end, // extern
  var_funky_types__at_character, // extern
  var_funky_types__tagged_empty_character, // extern
  var_funky_types__empty_character, // extern
  var_funky_types__escape_expression, // extern
  var_funky_types__named_character, // extern
  var_funky_types__numeric_character, // extern
  var_funky_types__string_line_character_sequence, // extern
  var_funky_types__unique, // extern
  var_funky_types__attribute, // extern
  var_funky_types__attribute_with_setter, // extern
  var_funky_types__body, // extern
  var_funky_types__line_end_statement, // extern
  var_funky_types__inline_body, // extern
  var_funky_types__statements, // extern
  var_funky_types__one_or_more_inline_parameters, // extern
  var_funky_types__open_parameters, // extern
  var_funky_types__inline_parameter, // extern
  var_funky_types__parameter, // extern
  var_funky_types__myself, // extern
  var_funky_types__rest, // extern
  var_funky_types__initial_value, // extern
  var_funky_types__close_parameters, // extern
  var_funky_types__return_expression, // extern
  var_funky_types__return, // extern
  var_funky_types__remark, // extern
  var_funky_types__line_end_and_line_remarks, // extern
  var_funky_types__line_remarks, // extern
  var_funky_types__spaced_remark, // extern
  var_funky_types__multiline_remark, // extern
  var_funky_types__remark_lines, // extern
  var_funky_types__dummy_remark, // extern
  var__END
};


static int list_60_3_arguments[] = {
  -var_funky__name_of
};

static int list_64_3_arguments[] = {
  -var_funky__identifier_of, -var_funky__expression_of
};

static int list_69_3_arguments[] = {
  -var_funky__expression_of
};

static int list_73_3_arguments[] = {
  -var_funky__name_of, -var_funky__version_of, -var_funky__remarks_of
};

static int list_80_3_arguments[] = {
  -var_funky__head_of, -var_funky__arguments_of
};

static int list_98_3_arguments[] = {
  -var_funky__identifier_of, -var_funky__argument_of
};

static int list_106_3_arguments[] = {
  -var_funky__filename_of, -var_funky__remarks_of
};

static int list_114_3_arguments[] = {
  -var_funky__alias_of, -var_funky__sign_of, -var_funky__name_of, -var_funky__remarks_of
};

static int list_124_3_arguments[] = {
  -var_funky__pragma_of, -var_funky__remarks_of
};

static int list_132_3_arguments[] = {
  -var_funky__major_of, -var_funky__minor_of
};

static int list_144_3_arguments[] = {
  -var_funky__identifier_of, -var_funky__extensions_of
};

static int list_150_3_arguments[] = {
  -var_funky__call_of, -var_funky__extensions_of
};

static int list_156_3_arguments[] = {
  -var_funky__access_of, -var_funky__extensions_of
};

static int list_178_3_arguments[] = {
  -var_funky__arguments_of
};

static int list_187_3_arguments[] = {
  -var_funky__identifier_of
};

static int list_202_3_arguments[] = {
  -var_funky__argument_of, -var_funky__arguments_of
};

static int list_218_3_arguments[] = {
  -var_funky__remark_of, -var_funky__arguments_of
};

static int list_234_3_arguments[] = {
  -var_funky__expression_of, -var_funky__operator_of
};

static int list_322_3_arguments[] = {
  -var_funky__expression_of, -var_funky__calls_of
};

static int list_384_3_arguments[] = {
  -var_funky__expression_of, -var_funky__arguments_of
};

static int list_392_3_arguments[] = {
  -var_funky__digits_of
};

static int list_403_3_arguments[] = {
  -var_funky__character_of
};

static int list_408_3_arguments[] = {
  -var_funky__components_of
};

static int list_413_3_arguments[] = {
  -var_funky__component_of, -var_funky__components_of
};

static int list_419_3_arguments[] = {
  -var_funky__characters_of
};

static int list_450_3_arguments[] = {
  -var_funky__remarks_of
};

static int list_459_3_arguments[] = {
  -var_funky__parameters_of, -var_funky__remark_of, -var_funky__statements_of
};

static int list_468_3_arguments[] = {
  -var_funky__parameters_of, -var_funky__statement_of
};

static int list_474_3_arguments[] = {
  -var_funky__statement_of
};

static int list_479_3_arguments[] = {
  -var_funky__parameter_of, -var_funky__parameters_of
};

static int list_485_3_arguments[] = {
  -var_funky__remark_of, -var_funky__parameter_of
};

static int list_491_3_arguments[] = {
  -var_funky__name_of, -var_funky__option_of
};

static int list_497_3_arguments[] = {
  -var_funky__name_of, -var_funky__option_of, -var_funky__remarks_of
};

static int list_508_3_arguments[] = {
  -var_funky__operand_of
};

static int list_513_3_arguments[] = {
  -var_funky__remark_of
};

static int list_522_3_arguments[] = {
  -var_funky__text_of
};

static int list_527_3_arguments[] = {
  -var_funky__remark_of, -var_funky__remarks_of
};

static int list_540_3_arguments[] = {
  -var_funky__text_of, -var_funky__lines_of
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_STRING_8, 6, {.str_8 = "access"}},
  {FLT_STRING_8, 5, {.str_8 = "alias"}},
  {FLT_STRING_8, 4, {.str_8 = "and2"}},
  {FLT_STRING_8, 8, {.str_8 = "argument"}},
  {FLT_STRING_8, 9, {.str_8 = "arguments"}},
  {FLT_STRING_8, 4, {.str_8 = "body"}},
  {FLT_STRING_8, 4, {.str_8 = "call"}},
  {FLT_STRING_8, 5, {.str_8 = "calls"}},
  {FLT_STRING_8, 9, {.str_8 = "character"}},
  {FLT_STRING_8, 10, {.str_8 = "characters"}},
  {FLT_STRING_8, 9, {.str_8 = "component"}},
  {FLT_STRING_8, 10, {.str_8 = "components"}},
  {FLT_STRING_8, 6, {.str_8 = "digits"}},
  {FLT_STRING_8, 10, {.str_8 = "expression"}},
  {FLT_STRING_8, 10, {.str_8 = "extensions"}},
  {FLT_STRING_8, 8, {.str_8 = "filename"}},
  {FLT_STRING_8, 4, {.str_8 = "head"}},
  {FLT_STRING_8, 10, {.str_8 = "identifier"}},
  {FLT_STRING_8, 5, {.str_8 = "lines"}},
  {FLT_STRING_8, 5, {.str_8 = "major"}},
  {FLT_STRING_8, 5, {.str_8 = "minor"}},
  {FLT_STRING_8, 6, {.str_8 = "minus2"}},
  {FLT_STRING_8, 4, {.str_8 = "name"}},
  {FLT_STRING_8, 7, {.str_8 = "operand"}},
  {FLT_STRING_8, 8, {.str_8 = "operator"}},
  {FLT_STRING_8, 6, {.str_8 = "option"}},
  {FLT_STRING_8, 3, {.str_8 = "or2"}},
  {FLT_STRING_8, 5, {.str_8 = "over2"}},
  {FLT_STRING_8, 4, {.str_8 = "pair"}},
  {FLT_STRING_8, 9, {.str_8 = "parameter"}},
  {FLT_STRING_8, 10, {.str_8 = "parameters"}},
  {FLT_STRING_8, 5, {.str_8 = "plus2"}},
  {FLT_STRING_8, 6, {.str_8 = "pragma"}},
  {FLT_STRING_8, 6, {.str_8 = "remark"}},
  {FLT_STRING_8, 7, {.str_8 = "remarks"}},
  {FLT_STRING_8, 4, {.str_8 = "sign"}},
  {FLT_STRING_8, 9, {.str_8 = "statement"}},
  {FLT_STRING_8, 10, {.str_8 = "statements"}},
  {FLT_STRING_8, 4, {.str_8 = "text"}},
  {FLT_STRING_8, 6, {.str_8 = "times2"}},
  {FLT_STRING_8, 7, {.str_8 = "version"}},
  {FLT_STRING_8, 4, {.str_8 = "xor2"}},
  {FLT_LIST, 1, {.arguments = list_60_3_arguments}},
  {FLT_LIST, 2, {.arguments = list_64_3_arguments}},
  {FLT_LIST, 1, {.arguments = list_69_3_arguments}},
  {FLT_LIST, 3, {.arguments = list_73_3_arguments}},
  {FLT_LIST, 2, {.arguments = list_80_3_arguments}},
  {FLT_STRING_8, 16, {.str_8 = "inline_statement"}},
  {FLT_STRING_8, 20, {.str_8 = "attribute_value_pair"}},
  {FLT_STRING_8, 13, {.str_8 = "type_function"}},
  {FLT_STRING_8, 17, {.str_8 = "method_value_pair"}},
  {FLT_LIST, 2, {.arguments = list_98_3_arguments}},
  {FLT_STRING_8, 21, {.str_8 = "namespace_instruction"}},
  {FLT_STRING_8, 19, {.str_8 = "require_instruction"}},
  {FLT_LIST, 2, {.arguments = list_106_3_arguments}},
  {FLT_STRING_8, 17, {.str_8 = "using_instruction"}},
  {FLT_STRING_8, 17, {.str_8 = "alias_instruction"}},
  {FLT_LIST, 4, {.arguments = list_114_3_arguments}},
  {FLT_STRING_8, 19, {.str_8 = "resolve_instruction"}},
  {FLT_STRING_8, 17, {.str_8 = "allow_instruction"}},
  {FLT_LIST, 2, {.arguments = list_124_3_arguments}},
  {FLT_STRING_8, 10, {.str_8 = "version_no"}},
  {FLT_LIST, 2, {.arguments = list_132_3_arguments}},
  {FLT_STRING_8, 8, {.str_8 = "unstable"}},
  {FLT_STRING_8, 12, {.str_8 = "allow_hidden"}},
  {FLT_STRING_8, 12, {.str_8 = "allow_unused"}},
  {FLT_STRING_8, 7, {.str_8 = "functor"}},
  {FLT_LIST, 2, {.arguments = list_144_3_arguments}},
  {FLT_STRING_8, 23, {.str_8 = "function_call_extension"}},
  {FLT_LIST, 2, {.arguments = list_150_3_arguments}},
  {FLT_STRING_8, 26, {.str_8 = "attribute_access_extension"}},
  {FLT_LIST, 2, {.arguments = list_156_3_arguments}},
  {FLT_STRING_8, 14, {.str_8 = "inline_functor"}},
  {FLT_STRING_8, 30, {.str_8 = "inline_function_call_extension"}},
  {FLT_STRING_8, 33, {.str_8 = "inline_attribute_access_extension"}},
  {FLT_STRING_8, 7, {.str_8 = "io_call"}},
  {FLT_STRING_8, 13, {.str_8 = "function_call"}},
  {FLT_LIST, 1, {.arguments = list_178_3_arguments}},
  {FLT_STRING_8, 23, {.str_8 = "function_call_arguments"}},
  {FLT_STRING_8, 13, {.str_8 = "inline_return"}},
  {FLT_STRING_8, 16, {.str_8 = "attribute_access"}},
  {FLT_LIST, 1, {.arguments = list_187_3_arguments}},
  {FLT_STRING_8, 16, {.str_8 = "spaced_arguments"}},
  {FLT_STRING_8, 26, {.str_8 = "spaced_statement_arguments"}},
  {FLT_LIST, 2, {.arguments = list_202_3_arguments}},
  {FLT_STRING_8, 29, {.str_8 = "even_more_statement_arguments"}},
  {FLT_STRING_8, 19, {.str_8 = "multiline_arguments"}},
  {FLT_STRING_8, 26, {.str_8 = "tagged_multiline_arguments"}},
  {FLT_STRING_8, 34, {.str_8 = "remark_and_multiline_function_call"}},
  {FLT_LIST, 2, {.arguments = list_218_3_arguments}},
  {FLT_STRING_8, 16, {.str_8 = "dummy_definition"}},
  {FLT_STRING_8, 8, {.str_8 = "variable"}},
  {FLT_STRING_8, 10, {.str_8 = "definition"}},
  {FLT_STRING_8, 12, {.str_8 = "redefinition"}},
  {FLT_STRING_8, 6, {.str_8 = "update"}},
  {FLT_LIST, 2, {.arguments = list_234_3_arguments}},
  {FLT_STRING_8, 9, {.str_8 = "key_value"}},
  {FLT_STRING_8, 19, {.str_8 = "sequence_expression"}},
  {FLT_STRING_8, 5, {.str_8 = "comma"}},
  {FLT_STRING_8, 16, {.str_8 = "comma_expression"}},
  {FLT_STRING_8, 22, {.str_8 = "conditional_expression"}},
  {FLT_STRING_8, 3, {.str_8 = "and"}},
  {FLT_STRING_8, 14, {.str_8 = "and_expression"}},
  {FLT_STRING_8, 2, {.str_8 = "or"}},
  {FLT_STRING_8, 13, {.str_8 = "or_expression"}},
  {FLT_STRING_8, 25, {.str_8 = "named_operator_expression"}},
  {FLT_STRING_8, 14, {.str_8 = "named_operator"}},
  {FLT_STRING_8, 16, {.str_8 = "range_expression"}},
  {FLT_STRING_8, 5, {.str_8 = "range"}},
  {FLT_STRING_8, 21, {.str_8 = "relational_expression"}},
  {FLT_STRING_8, 5, {.str_8 = "equal"}},
  {FLT_STRING_8, 9, {.str_8 = "not_equal"}},
  {FLT_STRING_8, 10, {.str_8 = "less_equal"}},
  {FLT_STRING_8, 9, {.str_8 = "less_than"}},
  {FLT_STRING_8, 13, {.str_8 = "greater_equal"}},
  {FLT_STRING_8, 12, {.str_8 = "greater_than"}},
  {FLT_STRING_8, 21, {.str_8 = "tagged_bit_expression"}},
  {FLT_STRING_8, 14, {.str_8 = "bit_expression"}},
  {FLT_STRING_8, 10, {.str_8 = "shift_left"}},
  {FLT_STRING_8, 11, {.str_8 = "shift_right"}},
  {FLT_STRING_8, 7, {.str_8 = "bit_and"}},
  {FLT_STRING_8, 8, {.str_8 = "bit_and2"}},
  {FLT_STRING_8, 6, {.str_8 = "bit_or"}},
  {FLT_STRING_8, 7, {.str_8 = "bit_or2"}},
  {FLT_STRING_8, 7, {.str_8 = "bit_xor"}},
  {FLT_STRING_8, 8, {.str_8 = "bit_xor2"}},
  {FLT_STRING_8, 26, {.str_8 = "tagged_additive_expression"}},
  {FLT_STRING_8, 19, {.str_8 = "additive_expression"}},
  {FLT_STRING_8, 4, {.str_8 = "plus"}},
  {FLT_STRING_8, 5, {.str_8 = "minus"}},
  {FLT_STRING_8, 25, {.str_8 = "multiplicative_expression"}},
  {FLT_STRING_8, 5, {.str_8 = "times"}},
  {FLT_STRING_8, 4, {.str_8 = "over"}},
  {FLT_STRING_8, 22, {.str_8 = "parenthesed_expression"}},
  {FLT_LIST, 2, {.arguments = list_322_3_arguments}},
  {FLT_STRING_8, 10, {.str_8 = "backquoted"}},
  {FLT_STRING_8, 8, {.str_8 = "negation"}},
  {FLT_STRING_8, 18, {.str_8 = "multiline_operator"}},
  {FLT_STRING_8, 14, {.str_8 = "multiline_plus"}},
  {FLT_STRING_8, 15, {.str_8 = "multiline_minus"}},
  {FLT_STRING_8, 27, {.str_8 = "multiline_minus_with_remark"}},
  {FLT_STRING_8, 15, {.str_8 = "multiline_times"}},
  {FLT_STRING_8, 14, {.str_8 = "multiline_over"}},
  {FLT_STRING_8, 26, {.str_8 = "multiline_over_with_remark"}},
  {FLT_STRING_8, 20, {.str_8 = "multiline_shift_left"}},
  {FLT_STRING_8, 21, {.str_8 = "multiline_shift_right"}},
  {FLT_STRING_8, 15, {.str_8 = "multiline_equal"}},
  {FLT_STRING_8, 19, {.str_8 = "multiline_not_equal"}},
  {FLT_STRING_8, 20, {.str_8 = "multiline_less_equal"}},
  {FLT_STRING_8, 19, {.str_8 = "multiline_less_than"}},
  {FLT_STRING_8, 23, {.str_8 = "multiline_greater_equal"}},
  {FLT_STRING_8, 22, {.str_8 = "multiline_greater_than"}},
  {FLT_STRING_8, 13, {.str_8 = "multiline_and"}},
  {FLT_STRING_8, 12, {.str_8 = "multiline_or"}},
  {FLT_STRING_8, 17, {.str_8 = "multiline_bit_and"}},
  {FLT_STRING_8, 29, {.str_8 = "multiline_bit_and_with_remark"}},
  {FLT_STRING_8, 16, {.str_8 = "multiline_bit_or"}},
  {FLT_STRING_8, 17, {.str_8 = "multiline_bit_xor"}},
  {FLT_STRING_8, 16, {.str_8 = "multiline_assign"}},
  {FLT_STRING_8, 27, {.str_8 = "inline_attribute_value_pair"}},
  {FLT_STRING_8, 24, {.str_8 = "inline_method_value_pair"}},
  {FLT_STRING_8, 31, {.str_8 = "expression_and_inline_arguments"}},
  {FLT_LIST, 2, {.arguments = list_384_3_arguments}},
  {FLT_STRING_8, 23, {.str_8 = "spaced_inline_arguments"}},
  {FLT_STRING_8, 15, {.str_8 = "numeric_literal"}},
  {FLT_LIST, 1, {.arguments = list_392_3_arguments}},
  {FLT_STRING_8, 20, {.str_8 = "at_character_literal"}},
  {FLT_STRING_8, 23, {.str_8 = "named_character_literal"}},
  {FLT_STRING_8, 25, {.str_8 = "numeric_character_literal"}},
  {FLT_STRING_8, 17, {.str_8 = "character_literal"}},
  {FLT_LIST, 1, {.arguments = list_403_3_arguments}},
  {FLT_STRING_8, 14, {.str_8 = "string_literal"}},
  {FLT_LIST, 1, {.arguments = list_408_3_arguments}},
  {FLT_STRING_8, 22, {.str_8 = "some_string_components"}},
  {FLT_LIST, 2, {.arguments = list_413_3_arguments}},
  {FLT_STRING_8, 18, {.str_8 = "character_sequence"}},
  {FLT_LIST, 1, {.arguments = list_419_3_arguments}},
  {FLT_STRING_8, 24, {.str_8 = "multiline_string_literal"}},
  {FLT_STRING_8, 7, {.str_8 = "newline"}},
  {FLT_STRING_8, 27, {.str_8 = "some_string_line_components"}},
  {FLT_STRING_8, 15, {.str_8 = "string_line_end"}},
  {FLT_STRING_8, 12, {.str_8 = "at_character"}},
  {FLT_STRING_8, 22, {.str_8 = "tagged_empty_character"}},
  {FLT_STRING_8, 15, {.str_8 = "empty_character"}},
  {FLT_STRING_8, 17, {.str_8 = "escape_expression"}},
  {FLT_STRING_8, 15, {.str_8 = "named_character"}},
  {FLT_STRING_8, 17, {.str_8 = "numeric_character"}},
  {FLT_STRING_8, 30, {.str_8 = "string_line_character_sequence"}},
  {FLT_STRING_8, 6, {.str_8 = "unique"}},
  {FLT_LIST, 1, {.arguments = list_450_3_arguments}},
  {FLT_STRING_8, 9, {.str_8 = "attribute"}},
  {FLT_STRING_8, 21, {.str_8 = "attribute_with_setter"}},
  {FLT_LIST, 3, {.arguments = list_459_3_arguments}},
  {FLT_STRING_8, 18, {.str_8 = "line_end_statement"}},
  {FLT_STRING_8, 11, {.str_8 = "inline_body"}},
  {FLT_LIST, 2, {.arguments = list_468_3_arguments}},
  {FLT_LIST, 1, {.arguments = list_474_3_arguments}},
  {FLT_STRING_8, 29, {.str_8 = "one_or_more_inline_parameters"}},
  {FLT_LIST, 2, {.arguments = list_479_3_arguments}},
  {FLT_STRING_8, 15, {.str_8 = "open_parameters"}},
  {FLT_LIST, 2, {.arguments = list_485_3_arguments}},
  {FLT_STRING_8, 16, {.str_8 = "inline_parameter"}},
  {FLT_LIST, 2, {.arguments = list_491_3_arguments}},
  {FLT_LIST, 3, {.arguments = list_497_3_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "myself"}},
  {FLT_STRING_8, 4, {.str_8 = "rest"}},
  {FLT_STRING_8, 13, {.str_8 = "initial_value"}},
  {FLT_LIST, 1, {.arguments = list_508_3_arguments}},
  {FLT_STRING_8, 16, {.str_8 = "close_parameters"}},
  {FLT_LIST, 1, {.arguments = list_513_3_arguments}},
  {FLT_STRING_8, 17, {.str_8 = "return_expression"}},
  {FLT_STRING_8, 6, {.str_8 = "return"}},
  {FLT_LIST, 1, {.arguments = list_522_3_arguments}},
  {FLT_STRING_8, 25, {.str_8 = "line_end_and_line_remarks"}},
  {FLT_LIST, 2, {.arguments = list_527_3_arguments}},
  {FLT_STRING_8, 12, {.str_8 = "line_remarks"}},
  {FLT_STRING_8, 13, {.str_8 = "spaced_remark"}},
  {FLT_STRING_8, 16, {.str_8 = "multiline_remark"}},
  {FLT_LIST, 2, {.arguments = list_540_3_arguments}},
  {FLT_STRING_8, 12, {.str_8 = "remark_lines"}},
  {FLT_STRING_8, 12, {.str_8 = "dummy_remark"}}
};

static ATTRIBUTE_DEFINITION funky__access_of__attributes[] = {
  {-var_to_string, -str_access}
};

static ATTRIBUTE_DEFINITION funky__alias_of__attributes[] = {
  {-var_to_string, -str_alias}
};

static ATTRIBUTE_DEFINITION funky__and2_of__attributes[] = {
  {-var_to_string, -str_and}
};

static ATTRIBUTE_DEFINITION funky__argument_of__attributes[] = {
  {-var_to_string, -str_argument}
};

static ATTRIBUTE_DEFINITION funky__arguments_of__attributes[] = {
  {-var_to_string, -str_arguments}
};

static ATTRIBUTE_DEFINITION funky__body_of__attributes[] = {
  {-var_to_string, -str_body}
};

static ATTRIBUTE_DEFINITION funky__call_of__attributes[] = {
  {-var_to_string, -str_call}
};

static ATTRIBUTE_DEFINITION funky__calls_of__attributes[] = {
  {-var_to_string, -str_calls}
};

static ATTRIBUTE_DEFINITION funky__character_of__attributes[] = {
  {-var_to_string, -str_character}
};

static ATTRIBUTE_DEFINITION funky__characters_of__attributes[] = {
  {-var_to_string, -str_characters}
};

static ATTRIBUTE_DEFINITION funky__component_of__attributes[] = {
  {-var_to_string, -str_component}
};

static ATTRIBUTE_DEFINITION funky__components_of__attributes[] = {
  {-var_to_string, -str_components}
};

static ATTRIBUTE_DEFINITION funky__digits_of__attributes[] = {
  {-var_to_string, -str_digits}
};

static ATTRIBUTE_DEFINITION funky__expression_of__attributes[] = {
  {-var_to_string, -str_expression}
};

static ATTRIBUTE_DEFINITION funky__extensions_of__attributes[] = {
  {-var_to_string, -str_extensions}
};

static ATTRIBUTE_DEFINITION funky__filename_of__attributes[] = {
  {-var_to_string, -str_filename}
};

static ATTRIBUTE_DEFINITION funky__head_of__attributes[] = {
  {-var_to_string, -str_head}
};

static ATTRIBUTE_DEFINITION funky__identifier_of__attributes[] = {
  {-var_to_string, -str_identifier}
};

static ATTRIBUTE_DEFINITION funky__lines_of__attributes[] = {
  {-var_to_string, -str_lines}
};

static ATTRIBUTE_DEFINITION funky__major_of__attributes[] = {
  {-var_to_string, -str_major}
};

static ATTRIBUTE_DEFINITION funky__minor_of__attributes[] = {
  {-var_to_string, -str_minor}
};

static ATTRIBUTE_DEFINITION funky__minus2_of__attributes[] = {
  {-var_to_string, -str_minus}
};

static ATTRIBUTE_DEFINITION funky__name_of__attributes[] = {
  {-var_to_string, -str_name}
};

static ATTRIBUTE_DEFINITION funky__operand_of__attributes[] = {
  {-var_to_string, -str_operand}
};

static ATTRIBUTE_DEFINITION funky__operator_of__attributes[] = {
  {-var_to_string, -str_operator}
};

static ATTRIBUTE_DEFINITION funky__option_of__attributes[] = {
  {-var_to_string, -str_option}
};

static ATTRIBUTE_DEFINITION funky__or2_of__attributes[] = {
  {-var_to_string, -str_or}
};

static ATTRIBUTE_DEFINITION funky__over2_of__attributes[] = {
  {-var_to_string, -str_over}
};

static ATTRIBUTE_DEFINITION funky__pair_of__attributes[] = {
  {-var_to_string, -str_pair}
};

static ATTRIBUTE_DEFINITION funky__parameter_of__attributes[] = {
  {-var_to_string, -str_parameter}
};

static ATTRIBUTE_DEFINITION funky__parameters_of__attributes[] = {
  {-var_to_string, -str_parameters}
};

static ATTRIBUTE_DEFINITION funky__plus2_of__attributes[] = {
  {-var_to_string, -str_plus}
};

static ATTRIBUTE_DEFINITION funky__pragma_of__attributes[] = {
  {-var_to_string, -str_pragma}
};

static ATTRIBUTE_DEFINITION funky__remark_of__attributes[] = {
  {-var_to_string, -str_remark}
};

static ATTRIBUTE_DEFINITION funky__remarks_of__attributes[] = {
  {-var_to_string, -str_remarks}
};

static ATTRIBUTE_DEFINITION funky__sign_of__attributes[] = {
  {-var_to_string, -str_sign}
};

static ATTRIBUTE_DEFINITION funky__statement_of__attributes[] = {
  {-var_to_string, -str_statement}
};

static ATTRIBUTE_DEFINITION funky__statements_of__attributes[] = {
  {-var_to_string, -str_statements}
};

static ATTRIBUTE_DEFINITION funky__text_of__attributes[] = {
  {-var_to_string, -str_text}
};

static ATTRIBUTE_DEFINITION funky__times2_of__attributes[] = {
  {-var_to_string, -str_times}
};

static ATTRIBUTE_DEFINITION funky__version_of__attributes[] = {
  {-var_to_string, -str_version}
};

static ATTRIBUTE_DEFINITION funky__xor2_of__attributes[] = {
  {-var_to_string, -str_xor}
};

static ATTRIBUTE_DEFINITION funky_types__fieldless_node__attributes[] = {
  {-var_funky__node_fields_of, -var_empty_list}
};

static ATTRIBUTE_DEFINITION funky_types__simple_name__attributes[] = {
  {-var_funky__node_fields_of, -list_60_3}
};

static ATTRIBUTE_DEFINITION funky_types__identifier_and_expression__attributes[] = {
  {-var_funky__node_fields_of, -list_64_3}
};

static ATTRIBUTE_DEFINITION funky_types__simple_expression__attributes[] = {
  {-var_funky__node_fields_of, -list_69_3}
};

static ATTRIBUTE_DEFINITION funky_types__namespace_meta_instruction__attributes[] = {
  {-var_funky__node_fields_of, -list_73_3}
};

static ATTRIBUTE_DEFINITION funky_types__statement__attributes[] = {
  {-var_funky__node_name_of, -str_statement},
  {-var_funky__node_fields_of, -list_80_3}
};

static ATTRIBUTE_DEFINITION funky_types__inline_statement__attributes[] = {
  {-var_funky__node_name_of, -str_inline_statement},
  {-var_funky__node_fields_of, -list_80_3}
};

static ATTRIBUTE_DEFINITION funky_types__attribute_value_pair__attributes[] = {
  {-var_funky__node_name_of, -str_attribute_value}
};

static ATTRIBUTE_DEFINITION funky_types__type_function__attributes[] = {
  {-var_funky__node_name_of, -str_type_function}
};

static ATTRIBUTE_DEFINITION funky_types__method_value_pair__attributes[] = {
  {-var_funky__node_name_of, -str_method_value_pai}
};

static ATTRIBUTE_DEFINITION funky_types__pair__attributes[] = {
  {-var_funky__node_name_of, -str_pair},
  {-var_funky__node_fields_of, -list_98_3}
};

static ATTRIBUTE_DEFINITION funky_types__namespace_instruction__attributes[] = {
  {-var_funky__node_name_of, -str_namespace_instru}
};

static ATTRIBUTE_DEFINITION funky_types__require_instruction__attributes[] = {
  {-var_funky__node_name_of, -str_require_instruct},
  {-var_funky__node_fields_of, -list_106_3}
};

static ATTRIBUTE_DEFINITION funky_types__using_instruction__attributes[] = {
  {-var_funky__node_name_of, -str_using_instructio}
};

static ATTRIBUTE_DEFINITION funky_types__alias_instruction__attributes[] = {
  {-var_funky__node_name_of, -str_alias_instructio},
  {-var_funky__node_fields_of, -list_114_3}
};

static ATTRIBUTE_DEFINITION funky_types__resolve_instruction__attributes[] = {
  {-var_funky__node_name_of, -str_resolve_instruct}
};

static ATTRIBUTE_DEFINITION funky_types__allow_instruction__attributes[] = {
  {-var_funky__node_name_of, -str_allow_instructio},
  {-var_funky__node_fields_of, -list_124_3}
};

static ATTRIBUTE_DEFINITION funky_types__alias__attributes[] = {
  {-var_funky__node_name_of, -str_alias}
};

static ATTRIBUTE_DEFINITION funky_types__version_no__attributes[] = {
  {-var_funky__node_name_of, -str_version_no},
  {-var_funky__node_fields_of, -list_132_3}
};

static ATTRIBUTE_DEFINITION funky_types__unstable__attributes[] = {
  {-var_funky__node_name_of, -str_unstable}
};

static ATTRIBUTE_DEFINITION funky_types__allow_hidden__attributes[] = {
  {-var_funky__node_name_of, -str_allow_hidden}
};

static ATTRIBUTE_DEFINITION funky_types__allow_unused__attributes[] = {
  {-var_funky__node_name_of, -str_allow_unused}
};

static ATTRIBUTE_DEFINITION funky_types__functor__attributes[] = {
  {-var_funky__node_name_of, -str_functor},
  {-var_funky__node_fields_of, -list_144_3}
};

static ATTRIBUTE_DEFINITION funky_types__function_call_extension__attributes[] = {
  {-var_funky__node_name_of, -str_function_call_ex},
  {-var_funky__node_fields_of, -list_150_3}
};

static ATTRIBUTE_DEFINITION funky_types__attribute_access_extension__attributes[] = {
  {-var_funky__node_name_of, -str_attribute_access},
  {-var_funky__node_fields_of, -list_156_3}
};

static ATTRIBUTE_DEFINITION funky_types__inline_functor__attributes[] = {
  {-var_funky__node_name_of, -str_inline_functor}
};

static ATTRIBUTE_DEFINITION funky_types__inline_function_call_extension__attributes[] = {
  {-var_funky__node_name_of, -str_inline_function},
  {-var_funky__node_fields_of, -list_150_3}
};

static ATTRIBUTE_DEFINITION funky_types__inline_attribute_access_extension__attributes[] = {
  {-var_funky__node_name_of, -str_inline_attribute},
  {-var_funky__node_fields_of, -list_156_3}
};

static ATTRIBUTE_DEFINITION funky_types__io_call__attributes[] = {
  {-var_funky__node_name_of, -str_io_call}
};

static ATTRIBUTE_DEFINITION funky_types__function_call__attributes[] = {
  {-var_funky__node_name_of, -str_function_call},
  {-var_funky__node_fields_of, -list_178_3}
};

static ATTRIBUTE_DEFINITION funky_types__function_call_arguments__attributes[] = {
  {-var_funky__node_name_of, -str_function_call_ar}
};

static ATTRIBUTE_DEFINITION funky_types__inline_return__attributes[] = {
  {-var_funky__node_name_of, -str_inline_return}
};

static ATTRIBUTE_DEFINITION funky_types__attribute_access__attributes[] = {
  {-var_funky__node_name_of, -str_attribute_access_2},
  {-var_funky__node_fields_of, -list_187_3}
};

static ATTRIBUTE_DEFINITION funky_types__spaced_arguments__attributes[] = {
  {-var_funky__node_name_of, -str_spaced_arguments},
  {-var_funky__node_fields_of, -list_178_3}
};

static ATTRIBUTE_DEFINITION funky_types__spaced_statement_arguments__attributes[] = {
  {-var_funky__node_name_of, -str_spaced_statement},
  {-var_funky__node_fields_of, -list_178_3}
};

static ATTRIBUTE_DEFINITION funky_types__arguments__attributes[] = {
  {-var_funky__node_name_of, -str_arguments},
  {-var_funky__node_fields_of, -list_202_3}
};

static ATTRIBUTE_DEFINITION funky_types__even_more_statement_arguments__attributes[] = {
  {-var_funky__node_name_of, -str_even_more_statem},
  {-var_funky__node_fields_of, -list_202_3}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_arguments__attributes[] = {
  {-var_funky__node_name_of, -str_multiline_argume}
};

static ATTRIBUTE_DEFINITION funky_types__tagged_multiline_arguments__attributes[] = {
  {-var_funky__node_name_of, -str_tagged_multiline}
};

static ATTRIBUTE_DEFINITION funky_types__remark_and_multiline_function_call__attributes[] = {
  {-var_funky__node_name_of, -str_remark_and_multi},
  {-var_funky__node_fields_of, -list_218_3}
};

static ATTRIBUTE_DEFINITION funky_types__dummy_definition__attributes[] = {
  {-var_funky__node_name_of, -str_dummy_definition}
};

static ATTRIBUTE_DEFINITION funky_types__variable__attributes[] = {
  {-var_funky__node_name_of, -str_variable}
};

static ATTRIBUTE_DEFINITION funky_types__definition__attributes[] = {
  {-var_funky__node_name_of, -str_definition}
};

static ATTRIBUTE_DEFINITION funky_types__redefinition__attributes[] = {
  {-var_funky__node_name_of, -str_redefinition}
};

static ATTRIBUTE_DEFINITION funky_types__update__attributes[] = {
  {-var_funky__node_name_of, -str_update}
};

static ATTRIBUTE_DEFINITION funky_types__expression__attributes[] = {
  {-var_funky__node_name_of, -str_expression},
  {-var_funky__node_fields_of, -list_234_3}
};

static ATTRIBUTE_DEFINITION funky_types__key_value__attributes[] = {
  {-var_funky__node_name_of, -str_key_value}
};

static ATTRIBUTE_DEFINITION funky_types__sequence_expression__attributes[] = {
  {-var_funky__node_name_of, -str_sequence_express}
};

static ATTRIBUTE_DEFINITION funky_types__comma__attributes[] = {
  {-var_funky__node_name_of, -str_comma}
};

static ATTRIBUTE_DEFINITION funky_types__comma_expression__attributes[] = {
  {-var_funky__node_name_of, -str_comma_expression}
};

static ATTRIBUTE_DEFINITION funky_types__conditional_expression__attributes[] = {
  {-var_funky__node_name_of, -str_conditional_expr}
};

static ATTRIBUTE_DEFINITION funky_types__and__attributes[] = {
  {-var_funky__node_name_of, -str_and_2}
};

static ATTRIBUTE_DEFINITION funky_types__and_expression__attributes[] = {
  {-var_funky__node_name_of, -str_and_expression}
};

static ATTRIBUTE_DEFINITION funky_types__or__attributes[] = {
  {-var_funky__node_name_of, -str_or_2}
};

static ATTRIBUTE_DEFINITION funky_types__or_expression__attributes[] = {
  {-var_funky__node_name_of, -str_or_expression}
};

static ATTRIBUTE_DEFINITION funky_types__named_operator_expression__attributes[] = {
  {-var_funky__node_name_of, -str_named_operator_e}
};

static ATTRIBUTE_DEFINITION funky_types__named_operator__attributes[] = {
  {-var_funky__node_name_of, -str_named_operator}
};

static ATTRIBUTE_DEFINITION funky_types__range_expression__attributes[] = {
  {-var_funky__node_name_of, -str_range_expression}
};

static ATTRIBUTE_DEFINITION funky_types__range__attributes[] = {
  {-var_funky__node_name_of, -str_range}
};

static ATTRIBUTE_DEFINITION funky_types__relational_expression__attributes[] = {
  {-var_funky__node_name_of, -str_relational_expre}
};

static ATTRIBUTE_DEFINITION funky_types__equal__attributes[] = {
  {-var_funky__node_name_of, -str_equal}
};

static ATTRIBUTE_DEFINITION funky_types__not_equal__attributes[] = {
  {-var_funky__node_name_of, -str_not_equal}
};

static ATTRIBUTE_DEFINITION funky_types__less_equal__attributes[] = {
  {-var_funky__node_name_of, -str_less_equal}
};

static ATTRIBUTE_DEFINITION funky_types__less_than__attributes[] = {
  {-var_funky__node_name_of, -str_less_than}
};

static ATTRIBUTE_DEFINITION funky_types__greater_equal__attributes[] = {
  {-var_funky__node_name_of, -str_greater_equal}
};

static ATTRIBUTE_DEFINITION funky_types__greater_than__attributes[] = {
  {-var_funky__node_name_of, -str_greater_than}
};

static ATTRIBUTE_DEFINITION funky_types__tagged_bit_expression__attributes[] = {
  {-var_funky__node_name_of, -str_tagged_bit_expre}
};

static ATTRIBUTE_DEFINITION funky_types__bit_expression__attributes[] = {
  {-var_funky__node_name_of, -str_bit_expression}
};

static ATTRIBUTE_DEFINITION funky_types__shift_left__attributes[] = {
  {-var_funky__node_name_of, -str_shift_left}
};

static ATTRIBUTE_DEFINITION funky_types__shift_right__attributes[] = {
  {-var_funky__node_name_of, -str_shift_right}
};

static ATTRIBUTE_DEFINITION funky_types__bit_and__attributes[] = {
  {-var_funky__node_name_of, -str_bit_and}
};

static ATTRIBUTE_DEFINITION funky_types__bit_and2__attributes[] = {
  {-var_funky__node_name_of, -str_bit_and_2}
};

static ATTRIBUTE_DEFINITION funky_types__bit_or__attributes[] = {
  {-var_funky__node_name_of, -str_bit_or}
};

static ATTRIBUTE_DEFINITION funky_types__bit_or2__attributes[] = {
  {-var_funky__node_name_of, -str_bit_or_2}
};

static ATTRIBUTE_DEFINITION funky_types__bit_xor__attributes[] = {
  {-var_funky__node_name_of, -str_bit_xor}
};

static ATTRIBUTE_DEFINITION funky_types__bit_xor2__attributes[] = {
  {-var_funky__node_name_of, -str_bit_xor_2}
};

static ATTRIBUTE_DEFINITION funky_types__tagged_additive_expression__attributes[] = {
  {-var_funky__node_name_of, -str_tagged_additive}
};

static ATTRIBUTE_DEFINITION funky_types__additive_expression__attributes[] = {
  {-var_funky__node_name_of, -str_additive_express}
};

static ATTRIBUTE_DEFINITION funky_types__plus__attributes[] = {
  {-var_funky__node_name_of, -str_plus_2}
};

static ATTRIBUTE_DEFINITION funky_types__plus2__attributes[] = {
  {-var_funky__node_name_of, -str_plus}
};

static ATTRIBUTE_DEFINITION funky_types__minus__attributes[] = {
  {-var_funky__node_name_of, -str_minus_2}
};

static ATTRIBUTE_DEFINITION funky_types__minus2__attributes[] = {
  {-var_funky__node_name_of, -str_minus}
};

static ATTRIBUTE_DEFINITION funky_types__multiplicative_expression__attributes[] = {
  {-var_funky__node_name_of, -str_multiplicative_e}
};

static ATTRIBUTE_DEFINITION funky_types__times__attributes[] = {
  {-var_funky__node_name_of, -str_times_2}
};

static ATTRIBUTE_DEFINITION funky_types__times2__attributes[] = {
  {-var_funky__node_name_of, -str_times}
};

static ATTRIBUTE_DEFINITION funky_types__over__attributes[] = {
  {-var_funky__node_name_of, -str_over_2}
};

static ATTRIBUTE_DEFINITION funky_types__over2__attributes[] = {
  {-var_funky__node_name_of, -str_over}
};

static ATTRIBUTE_DEFINITION funky_types__parenthesed_expression__attributes[] = {
  {-var_funky__node_name_of, -str_parenthesed_expr},
  {-var_funky__node_fields_of, -list_322_3}
};

static ATTRIBUTE_DEFINITION funky_types__backquoted__attributes[] = {
  {-var_funky__node_name_of, -str_backquoted}
};

static ATTRIBUTE_DEFINITION funky_types__negation__attributes[] = {
  {-var_funky__node_name_of, -str_negation}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_operator__attributes[] = {
  {-var_funky__node_name_of, -str_multiline_operat}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_plus__attributes[] = {
  {-var_funky__node_name_of, -str_multiline_plus}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_minus__attributes[] = {
  {-var_funky__node_name_of, -str_multiline_minus},
  {-var_funky__node_fields_of, -list_218_3}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_minus_with_remark__attributes[] = {
  {-var_funky__node_name_of, -str_multiline_minus_2}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_times__attributes[] = {
  {-var_funky__node_name_of, -str_multiline_times}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_over__attributes[] = {
  {-var_funky__node_name_of, -str_multiline_over}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_over_with_remark__attributes[] = {
  {-var_funky__node_name_of, -str_multiline_over_w}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_shift_left__attributes[] = {
  {-var_funky__node_name_of, -str_multiline_shift}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_shift_right__attributes[] = {
  {-var_funky__node_name_of, -str_multiline_shift_2}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_equal__attributes[] = {
  {-var_funky__node_name_of, -str_multiline_equal}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_not_equal__attributes[] = {
  {-var_funky__node_name_of, -str_multiline_not_eq}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_less_equal__attributes[] = {
  {-var_funky__node_name_of, -str_multiline_less_e}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_less_than__attributes[] = {
  {-var_funky__node_name_of, -str_multiline_less_t}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_greater_equal__attributes[] = {
  {-var_funky__node_name_of, -str_multiline_greate}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_greater_than__attributes[] = {
  {-var_funky__node_name_of, -str_multiline_greate_2}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_and__attributes[] = {
  {-var_funky__node_name_of, -str_multiline_and}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_or__attributes[] = {
  {-var_funky__node_name_of, -str_multiline_or}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_bit_and__attributes[] = {
  {-var_funky__node_name_of, -str_multiline_bit_an}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_bit_and_with_remark__attributes[] = {
  {-var_funky__node_name_of, -str_multiline_bit_an_2}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_bit_or__attributes[] = {
  {-var_funky__node_name_of, -str_multiline_bit_or}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_bit_xor__attributes[] = {
  {-var_funky__node_name_of, -str_multiline_bit_xo}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_assign__attributes[] = {
  {-var_funky__node_name_of, -str_multiline_assign}
};

static ATTRIBUTE_DEFINITION funky_types__inline_attribute_value_pair__attributes[] = {
  {-var_funky__node_name_of, -str_inline_attribute_2}
};

static ATTRIBUTE_DEFINITION funky_types__inline_method_value_pair__attributes[] = {
  {-var_funky__node_name_of, -str_inline_method_va}
};

static ATTRIBUTE_DEFINITION funky_types__expression_and_inline_arguments__attributes[] = {
  {-var_funky__node_name_of, -str_expression_and_i},
  {-var_funky__node_fields_of, -list_384_3}
};

static ATTRIBUTE_DEFINITION funky_types__spaced_inline_arguments__attributes[] = {
  {-var_funky__node_name_of, -str_spaced_inline_ar}
};

static ATTRIBUTE_DEFINITION funky_types__numeric_literal__attributes[] = {
  {-var_funky__node_name_of, -str_numeric_literal},
  {-var_funky__node_fields_of, -list_392_3}
};

static ATTRIBUTE_DEFINITION funky_types__at_character_literal__attributes[] = {
  {-var_funky__node_name_of, -str_at_character_lit}
};

static ATTRIBUTE_DEFINITION funky_types__named_character_literal__attributes[] = {
  {-var_funky__node_name_of, -str_named_character}
};

static ATTRIBUTE_DEFINITION funky_types__numeric_character_literal__attributes[] = {
  {-var_funky__node_name_of, -str_numeric_characte}
};

static ATTRIBUTE_DEFINITION funky_types__character_literal__attributes[] = {
  {-var_funky__node_name_of, -str_character_litera},
  {-var_funky__node_fields_of, -list_403_3}
};

static ATTRIBUTE_DEFINITION funky_types__string_literal__attributes[] = {
  {-var_funky__node_name_of, -str_string_literal},
  {-var_funky__node_fields_of, -list_408_3}
};

static ATTRIBUTE_DEFINITION funky_types__some_string_components__attributes[] = {
  {-var_funky__node_name_of, -str_some_string_comp},
  {-var_funky__node_fields_of, -list_413_3}
};

static ATTRIBUTE_DEFINITION funky_types__character_sequence__attributes[] = {
  {-var_funky__node_name_of, -str_character_sequen},
  {-var_funky__node_fields_of, -list_419_3}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_string_literal__attributes[] = {
  {-var_funky__node_name_of, -str_multiline_string}
};

static ATTRIBUTE_DEFINITION funky_types__newline__attributes[] = {
  {-var_funky__node_name_of, -str_newline}
};

static ATTRIBUTE_DEFINITION funky_types__some_string_line_components__attributes[] = {
  {-var_funky__node_name_of, -str_some_string_line},
  {-var_funky__node_fields_of, -list_413_3}
};

static ATTRIBUTE_DEFINITION funky_types__string_line_end__attributes[] = {
  {-var_funky__node_name_of, -str_string_line_end}
};

static ATTRIBUTE_DEFINITION funky_types__at_character__attributes[] = {
  {-var_funky__node_name_of, -str_at_character}
};

static ATTRIBUTE_DEFINITION funky_types__tagged_empty_character__attributes[] = {
  {-var_funky__node_name_of, -str_tagged_empty_cha}
};

static ATTRIBUTE_DEFINITION funky_types__empty_character__attributes[] = {
  {-var_funky__node_name_of, -str_empty_character}
};

static ATTRIBUTE_DEFINITION funky_types__escape_expression__attributes[] = {
  {-var_funky__node_name_of, -str_escape_expressio}
};

static ATTRIBUTE_DEFINITION funky_types__named_character__attributes[] = {
  {-var_funky__node_name_of, -str_named_character_2}
};

static ATTRIBUTE_DEFINITION funky_types__numeric_character__attributes[] = {
  {-var_funky__node_name_of, -str_numeric_characte_2}
};

static ATTRIBUTE_DEFINITION funky_types__string_line_character_sequence__attributes[] = {
  {-var_funky__node_name_of, -str_string_line_char}
};

static ATTRIBUTE_DEFINITION funky_types__unique__attributes[] = {
  {-var_funky__node_name_of, -str_unique},
  {-var_funky__node_fields_of, -list_450_3}
};

static ATTRIBUTE_DEFINITION funky_types__attribute__attributes[] = {
  {-var_funky__node_name_of, -str_attribute}
};

static ATTRIBUTE_DEFINITION funky_types__attribute_with_setter__attributes[] = {
  {-var_funky__node_name_of, -str_attribute_with_s}
};

static ATTRIBUTE_DEFINITION funky_types__body__attributes[] = {
  {-var_funky__node_name_of, -str_body},
  {-var_funky__node_fields_of, -list_459_3}
};

static ATTRIBUTE_DEFINITION funky_types__line_end_statement__attributes[] = {
  {-var_funky__node_name_of, -str_line_end_stateme}
};

static ATTRIBUTE_DEFINITION funky_types__inline_body__attributes[] = {
  {-var_funky__node_name_of, -str_inline_body},
  {-var_funky__node_fields_of, -list_468_3}
};

static ATTRIBUTE_DEFINITION funky_types__statements__attributes[] = {
  {-var_funky__node_name_of, -str_statements},
  {-var_funky__node_fields_of, -list_474_3}
};

static ATTRIBUTE_DEFINITION funky_types__one_or_more_inline_parameters__attributes[] = {
  {-var_funky__node_name_of, -str_one_or_more_inli},
  {-var_funky__node_fields_of, -list_479_3}
};

static ATTRIBUTE_DEFINITION funky_types__open_parameters__attributes[] = {
  {-var_funky__node_name_of, -str_open_parameters},
  {-var_funky__node_fields_of, -list_485_3}
};

static ATTRIBUTE_DEFINITION funky_types__inline_parameter__attributes[] = {
  {-var_funky__node_name_of, -str_inline_parameter},
  {-var_funky__node_fields_of, -list_491_3}
};

static ATTRIBUTE_DEFINITION funky_types__parameter__attributes[] = {
  {-var_funky__node_name_of, -str_parameter},
  {-var_funky__node_fields_of, -list_497_3}
};

static ATTRIBUTE_DEFINITION funky_types__myself__attributes[] = {
  {-var_funky__node_name_of, -str_myself}
};

static ATTRIBUTE_DEFINITION funky_types__rest__attributes[] = {
  {-var_funky__node_name_of, -str_rest}
};

static ATTRIBUTE_DEFINITION funky_types__initial_value__attributes[] = {
  {-var_funky__node_name_of, -str_initial_value},
  {-var_funky__node_fields_of, -list_508_3}
};

static ATTRIBUTE_DEFINITION funky_types__close_parameters__attributes[] = {
  {-var_funky__node_name_of, -str_close_parameters},
  {-var_funky__node_fields_of, -list_513_3}
};

static ATTRIBUTE_DEFINITION funky_types__return_expression__attributes[] = {
  {-var_funky__node_name_of, -str_return_expressio}
};

static ATTRIBUTE_DEFINITION funky_types__return__attributes[] = {
  {-var_funky__node_name_of, -str_return}
};

static ATTRIBUTE_DEFINITION funky_types__remark__attributes[] = {
  {-var_funky__node_name_of, -str_remark},
  {-var_funky__node_fields_of, -list_522_3}
};

static ATTRIBUTE_DEFINITION funky_types__line_end_and_line_remarks__attributes[] = {
  {-var_funky__node_name_of, -str_line_end_and_lin},
  {-var_funky__node_fields_of, -list_527_3}
};

static ATTRIBUTE_DEFINITION funky_types__line_remarks__attributes[] = {
  {-var_funky__node_name_of, -str_line_remarks},
  {-var_funky__node_fields_of, -list_513_3}
};

static ATTRIBUTE_DEFINITION funky_types__spaced_remark__attributes[] = {
  {-var_funky__node_name_of, -str_spaced_remark}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_remark__attributes[] = {
  {-var_funky__node_name_of, -str_multiline_remark},
  {-var_funky__node_fields_of, -list_540_3}
};

static ATTRIBUTE_DEFINITION funky_types__remark_lines__attributes[] = {
  {-var_funky__node_name_of, -str_remark_lines}
};

static ATTRIBUTE_DEFINITION funky_types__dummy_remark__attributes[] = {
  {-var_funky__node_name_of, -str_dummy_remark}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "node_name_of\000funky", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(5, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "node_fields_of\000funky", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "access_of\000funky", funky__access_of__attributes,
    {.position = POS(11, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_string\000", NULL,
    {.position = POS(11, 19)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "alias_of\000funky", funky__alias_of__attributes,
    {.position = POS(12, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "and2_of\000funky", funky__and2_of__attributes,
    {.position = POS(13, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "argument_of\000funky", funky__argument_of__attributes,
    {.position = POS(14, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "arguments_of\000funky", funky__arguments_of__attributes,
    {.position = POS(15, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "body_of\000funky", funky__body_of__attributes,
    {.position = POS(16, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "call_of\000funky", funky__call_of__attributes,
    {.position = POS(17, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "calls_of\000funky", funky__calls_of__attributes,
    {.position = POS(18, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "character_of\000funky", funky__character_of__attributes,
    {.position = POS(19, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "characters_of\000funky", funky__characters_of__attributes,
    {.position = POS(20, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "component_of\000funky", funky__component_of__attributes,
    {.position = POS(21, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "components_of\000funky", funky__components_of__attributes,
    {.position = POS(22, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "digits_of\000funky", funky__digits_of__attributes,
    {.position = POS(23, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "expression_of\000funky", funky__expression_of__attributes,
    {.position = POS(24, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "extensions_of\000funky", funky__extensions_of__attributes,
    {.position = POS(25, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "filename_of\000funky", funky__filename_of__attributes,
    {.position = POS(26, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "head_of\000funky", funky__head_of__attributes,
    {.position = POS(27, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "identifier_of\000funky", funky__identifier_of__attributes,
    {.position = POS(28, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "lines_of\000funky", funky__lines_of__attributes,
    {.position = POS(29, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "major_of\000funky", funky__major_of__attributes,
    {.position = POS(30, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "minor_of\000funky", funky__minor_of__attributes,
    {.position = POS(31, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "minus2_of\000funky", funky__minus2_of__attributes,
    {.position = POS(32, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "name_of\000funky", funky__name_of__attributes,
    {.position = POS(33, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "operand_of\000funky", funky__operand_of__attributes,
    {.position = POS(34, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "operator_of\000funky", funky__operator_of__attributes,
    {.position = POS(35, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "option_of\000funky", funky__option_of__attributes,
    {.position = POS(36, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "or2_of\000funky", funky__or2_of__attributes,
    {.position = POS(37, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "over2_of\000funky", funky__over2_of__attributes,
    {.position = POS(38, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "pair_of\000funky", funky__pair_of__attributes,
    {.position = POS(39, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "parameter_of\000funky", funky__parameter_of__attributes,
    {.position = POS(40, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "parameters_of\000funky", funky__parameters_of__attributes,
    {.position = POS(41, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "plus2_of\000funky", funky__plus2_of__attributes,
    {.position = POS(42, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "pragma_of\000funky", funky__pragma_of__attributes,
    {.position = POS(43, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "remark_of\000funky", funky__remark_of__attributes,
    {.position = POS(44, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "remarks_of\000funky", funky__remarks_of__attributes,
    {.position = POS(45, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "sign_of\000funky", funky__sign_of__attributes,
    {.position = POS(46, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "statement_of\000funky", funky__statement_of__attributes,
    {.position = POS(47, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "statements_of\000funky", funky__statements_of__attributes,
    {.position = POS(48, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "text_of\000funky", funky__text_of__attributes,
    {.position = POS(49, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "times2_of\000funky", funky__times2_of__attributes,
    {.position = POS(50, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "version_of\000funky", funky__version_of__attributes,
    {.position = POS(51, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "xor2_of\000funky", funky__xor2_of__attributes,
    {.position = POS(52, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "fieldless_node\000funky_types", funky_types__fieldless_node__attributes,
    {.position = POS(57, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(57, 52)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(60, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "simple_name\000funky_types", funky_types__simple_name__attributes,
    {.position = POS(59, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "identifier_and_expression\000funky_types", funky_types__identifier_and_expression__attributes,
    {.position = POS(63, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "simple_expression\000funky_types", funky_types__simple_expression__attributes,
    {.position = POS(68, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "namespace_meta_instruction\000funky_types", funky_types__namespace_meta_instruction__attributes,
    {.position = POS(72, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "statement\000funky_types", funky_types__statement__attributes,
    {.position = POS(78, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "inline_statement\000funky_types", funky_types__inline_statement__attributes,
    {.position = POS(84, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "attribute_value_pair\000funky_types", funky_types__attribute_value_pair__attributes,
    {.position = POS(90, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "type_function\000funky_types", funky_types__type_function__attributes,
    {.position = POS(92, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "method_value_pair\000funky_types", funky_types__method_value_pair__attributes,
    {.position = POS(94, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "pair\000funky_types", funky_types__pair__attributes,
    {.position = POS(96, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "namespace_instruction\000funky_types", funky_types__namespace_instruction__attributes,
    {.position = POS(102, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "require_instruction\000funky_types", funky_types__require_instruction__attributes,
    {.position = POS(104, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "using_instruction\000funky_types", funky_types__using_instruction__attributes,
    {.position = POS(110, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "alias_instruction\000funky_types", funky_types__alias_instruction__attributes,
    {.position = POS(112, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "resolve_instruction\000funky_types", funky_types__resolve_instruction__attributes,
    {.position = POS(120, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "allow_instruction\000funky_types", funky_types__allow_instruction__attributes,
    {.position = POS(122, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "alias\000funky_types", funky_types__alias__attributes,
    {.position = POS(128, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "version_no\000funky_types", funky_types__version_no__attributes,
    {.position = POS(130, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "unstable\000funky_types", funky_types__unstable__attributes,
    {.position = POS(136, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "allow_hidden\000funky_types", funky_types__allow_hidden__attributes,
    {.position = POS(138, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "allow_unused\000funky_types", funky_types__allow_unused__attributes,
    {.position = POS(140, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "functor\000funky_types", funky_types__functor__attributes,
    {.position = POS(142, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "function_call_extension\000funky_types", funky_types__function_call_extension__attributes,
    {.position = POS(148, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "attribute_access_extension\000funky_types", funky_types__attribute_access_extension__attributes,
    {.position = POS(154, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_functor\000funky_types", funky_types__inline_functor__attributes,
    {.position = POS(160, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "inline_function_call_extension\000funky_types", funky_types__inline_function_call_extension__attributes,
    {.position = POS(162, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "inline_attribute_access_extension\000funky_types", funky_types__inline_attribute_access_extension__attributes,
    {.position = POS(168, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "io_call\000funky_types", funky_types__io_call__attributes,
    {.position = POS(174, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "function_call\000funky_types", funky_types__function_call__attributes,
    {.position = POS(176, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "function_call_arguments\000funky_types", funky_types__function_call_arguments__attributes,
    {.position = POS(181, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_return\000funky_types", funky_types__inline_return__attributes,
    {.position = POS(183, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "attribute_access\000funky_types", funky_types__attribute_access__attributes,
    {.position = POS(185, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "spaced_arguments\000funky_types", funky_types__spaced_arguments__attributes,
    {.position = POS(190, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "spaced_statement_arguments\000funky_types", funky_types__spaced_statement_arguments__attributes,
    {.position = POS(195, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "arguments\000funky_types", funky_types__arguments__attributes,
    {.position = POS(200, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "even_more_statement_arguments\000funky_types", funky_types__even_more_statement_arguments__attributes,
    {.position = POS(206, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_arguments\000funky_types", funky_types__multiline_arguments__attributes,
    {.position = POS(212, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "tagged_multiline_arguments\000funky_types", funky_types__tagged_multiline_arguments__attributes,
    {.position = POS(214, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "remark_and_multiline_function_call\000funky_types", funky_types__remark_and_multiline_function_call__attributes,
    {.position = POS(216, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "dummy_definition\000funky_types", funky_types__dummy_definition__attributes,
    {.position = POS(222, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "variable\000funky_types", funky_types__variable__attributes,
    {.position = POS(224, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "definition\000funky_types", funky_types__definition__attributes,
    {.position = POS(226, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "redefinition\000funky_types", funky_types__redefinition__attributes,
    {.position = POS(228, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "update\000funky_types", funky_types__update__attributes,
    {.position = POS(230, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "expression\000funky_types", funky_types__expression__attributes,
    {.position = POS(232, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "key_value\000funky_types", funky_types__key_value__attributes,
    {.position = POS(238, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "sequence_expression\000funky_types", funky_types__sequence_expression__attributes,
    {.position = POS(240, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "comma\000funky_types", funky_types__comma__attributes,
    {.position = POS(242, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "comma_expression\000funky_types", funky_types__comma_expression__attributes,
    {.position = POS(244, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "conditional_expression\000funky_types", funky_types__conditional_expression__attributes,
    {.position = POS(246, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "and\000funky_types", funky_types__and__attributes,
    {.position = POS(248, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "and_expression\000funky_types", funky_types__and_expression__attributes,
    {.position = POS(250, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "or\000funky_types", funky_types__or__attributes,
    {.position = POS(252, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "or_expression\000funky_types", funky_types__or_expression__attributes,
    {.position = POS(254, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "named_operator_expression\000funky_types", funky_types__named_operator_expression__attributes,
    {.position = POS(256, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "named_operator\000funky_types", funky_types__named_operator__attributes,
    {.position = POS(258, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "range_expression\000funky_types", funky_types__range_expression__attributes,
    {.position = POS(260, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "range\000funky_types", funky_types__range__attributes,
    {.position = POS(262, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "relational_expression\000funky_types", funky_types__relational_expression__attributes,
    {.position = POS(264, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "equal\000funky_types", funky_types__equal__attributes,
    {.position = POS(266, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "not_equal\000funky_types", funky_types__not_equal__attributes,
    {.position = POS(268, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "less_equal\000funky_types", funky_types__less_equal__attributes,
    {.position = POS(270, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "less_than\000funky_types", funky_types__less_than__attributes,
    {.position = POS(272, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "greater_equal\000funky_types", funky_types__greater_equal__attributes,
    {.position = POS(274, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "greater_than\000funky_types", funky_types__greater_than__attributes,
    {.position = POS(276, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "tagged_bit_expression\000funky_types", funky_types__tagged_bit_expression__attributes,
    {.position = POS(278, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "bit_expression\000funky_types", funky_types__bit_expression__attributes,
    {.position = POS(280, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "shift_left\000funky_types", funky_types__shift_left__attributes,
    {.position = POS(282, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "shift_right\000funky_types", funky_types__shift_right__attributes,
    {.position = POS(284, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "bit_and\000funky_types", funky_types__bit_and__attributes,
    {.position = POS(286, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "bit_and2\000funky_types", funky_types__bit_and2__attributes,
    {.position = POS(288, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "bit_or\000funky_types", funky_types__bit_or__attributes,
    {.position = POS(290, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "bit_or2\000funky_types", funky_types__bit_or2__attributes,
    {.position = POS(292, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "bit_xor\000funky_types", funky_types__bit_xor__attributes,
    {.position = POS(294, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "bit_xor2\000funky_types", funky_types__bit_xor2__attributes,
    {.position = POS(296, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "tagged_additive_expression\000funky_types", funky_types__tagged_additive_expression__attributes,
    {.position = POS(298, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "additive_expression\000funky_types", funky_types__additive_expression__attributes,
    {.position = POS(300, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "plus\000funky_types", funky_types__plus__attributes,
    {.position = POS(302, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "plus2\000funky_types", funky_types__plus2__attributes,
    {.position = POS(304, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "minus\000funky_types", funky_types__minus__attributes,
    {.position = POS(306, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "minus2\000funky_types", funky_types__minus2__attributes,
    {.position = POS(308, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiplicative_expression\000funky_types", funky_types__multiplicative_expression__attributes,
    {.position = POS(310, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "times\000funky_types", funky_types__times__attributes,
    {.position = POS(312, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "times2\000funky_types", funky_types__times2__attributes,
    {.position = POS(314, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "over\000funky_types", funky_types__over__attributes,
    {.position = POS(316, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "over2\000funky_types", funky_types__over2__attributes,
    {.position = POS(318, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "parenthesed_expression\000funky_types", funky_types__parenthesed_expression__attributes,
    {.position = POS(320, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "backquoted\000funky_types", funky_types__backquoted__attributes,
    {.position = POS(326, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "negation\000funky_types", funky_types__negation__attributes,
    {.position = POS(328, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_operator\000funky_types", funky_types__multiline_operator__attributes,
    {.position = POS(330, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_plus\000funky_types", funky_types__multiline_plus__attributes,
    {.position = POS(332, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "multiline_minus\000funky_types", funky_types__multiline_minus__attributes,
    {.position = POS(334, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_minus_with_remark\000funky_types", funky_types__multiline_minus_with_remark__attributes,
    {.position = POS(340, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_times\000funky_types", funky_types__multiline_times__attributes,
    {.position = POS(342, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_over\000funky_types", funky_types__multiline_over__attributes,
    {.position = POS(344, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_over_with_remark\000funky_types", funky_types__multiline_over_with_remark__attributes,
    {.position = POS(346, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_shift_left\000funky_types", funky_types__multiline_shift_left__attributes,
    {.position = POS(348, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_shift_right\000funky_types", funky_types__multiline_shift_right__attributes,
    {.position = POS(350, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_equal\000funky_types", funky_types__multiline_equal__attributes,
    {.position = POS(352, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_not_equal\000funky_types", funky_types__multiline_not_equal__attributes,
    {.position = POS(354, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_less_equal\000funky_types", funky_types__multiline_less_equal__attributes,
    {.position = POS(356, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_less_than\000funky_types", funky_types__multiline_less_than__attributes,
    {.position = POS(358, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_greater_equal\000funky_types", funky_types__multiline_greater_equal__attributes,
    {.position = POS(360, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_greater_than\000funky_types", funky_types__multiline_greater_than__attributes,
    {.position = POS(362, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_and\000funky_types", funky_types__multiline_and__attributes,
    {.position = POS(364, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_or\000funky_types", funky_types__multiline_or__attributes,
    {.position = POS(366, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_bit_and\000funky_types", funky_types__multiline_bit_and__attributes,
    {.position = POS(368, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_bit_and_with_remark\000funky_types", funky_types__multiline_bit_and_with_remark__attributes,
    {.position = POS(370, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_bit_or\000funky_types", funky_types__multiline_bit_or__attributes,
    {.position = POS(372, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_bit_xor\000funky_types", funky_types__multiline_bit_xor__attributes,
    {.position = POS(374, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_assign\000funky_types", funky_types__multiline_assign__attributes,
    {.position = POS(376, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_attribute_value_pair\000funky_types", funky_types__inline_attribute_value_pair__attributes,
    {.position = POS(378, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_method_value_pair\000funky_types", funky_types__inline_method_value_pair__attributes,
    {.position = POS(380, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "expression_and_inline_arguments\000funky_types", funky_types__expression_and_inline_arguments__attributes,
    {.position = POS(382, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "spaced_inline_arguments\000funky_types", funky_types__spaced_inline_arguments__attributes,
    {.position = POS(388, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "numeric_literal\000funky_types", funky_types__numeric_literal__attributes,
    {.position = POS(390, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "at_character_literal\000funky_types", funky_types__at_character_literal__attributes,
    {.position = POS(395, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "named_character_literal\000funky_types", funky_types__named_character_literal__attributes,
    {.position = POS(397, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "numeric_character_literal\000funky_types", funky_types__numeric_character_literal__attributes,
    {.position = POS(399, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "character_literal\000funky_types", funky_types__character_literal__attributes,
    {.position = POS(401, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "string_literal\000funky_types", funky_types__string_literal__attributes,
    {.position = POS(406, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "some_string_components\000funky_types", funky_types__some_string_components__attributes,
    {.position = POS(411, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "character_sequence\000funky_types", funky_types__character_sequence__attributes,
    {.position = POS(417, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_string_literal\000funky_types", funky_types__multiline_string_literal__attributes,
    {.position = POS(422, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "newline\000funky_types", funky_types__newline__attributes,
    {.position = POS(424, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "some_string_line_components\000funky_types", funky_types__some_string_line_components__attributes,
    {.position = POS(426, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "string_line_end\000funky_types", funky_types__string_line_end__attributes,
    {.position = POS(432, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "at_character\000funky_types", funky_types__at_character__attributes,
    {.position = POS(434, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "tagged_empty_character\000funky_types", funky_types__tagged_empty_character__attributes,
    {.position = POS(436, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "empty_character\000funky_types", funky_types__empty_character__attributes,
    {.position = POS(438, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "escape_expression\000funky_types", funky_types__escape_expression__attributes,
    {.position = POS(440, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "named_character\000funky_types", funky_types__named_character__attributes,
    {.position = POS(442, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "numeric_character\000funky_types", funky_types__numeric_character__attributes,
    {.position = POS(444, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "string_line_character_sequence\000funky_types", funky_types__string_line_character_sequence__attributes,
    {.position = POS(446, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "unique\000funky_types", funky_types__unique__attributes,
    {.position = POS(448, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "attribute\000funky_types", funky_types__attribute__attributes,
    {.position = POS(453, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "attribute_with_setter\000funky_types", funky_types__attribute_with_setter__attributes,
    {.position = POS(455, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "body\000funky_types", funky_types__body__attributes,
    {.position = POS(457, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "line_end_statement\000funky_types", funky_types__line_end_statement__attributes,
    {.position = POS(464, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "inline_body\000funky_types", funky_types__inline_body__attributes,
    {.position = POS(466, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "statements\000funky_types", funky_types__statements__attributes,
    {.position = POS(472, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "one_or_more_inline_parameters\000funky_types", funky_types__one_or_more_inline_parameters__attributes,
    {.position = POS(477, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "open_parameters\000funky_types", funky_types__open_parameters__attributes,
    {.position = POS(483, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "inline_parameter\000funky_types", funky_types__inline_parameter__attributes,
    {.position = POS(489, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "parameter\000funky_types", funky_types__parameter__attributes,
    {.position = POS(495, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "myself\000funky_types", funky_types__myself__attributes,
    {.position = POS(502, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "rest\000funky_types", funky_types__rest__attributes,
    {.position = POS(504, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "initial_value\000funky_types", funky_types__initial_value__attributes,
    {.position = POS(506, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "close_parameters\000funky_types", funky_types__close_parameters__attributes,
    {.position = POS(511, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "return_expression\000funky_types", funky_types__return_expression__attributes,
    {.position = POS(516, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "return\000funky_types", funky_types__return__attributes,
    {.position = POS(518, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "remark\000funky_types", funky_types__remark__attributes,
    {.position = POS(520, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "line_end_and_line_remarks\000funky_types", funky_types__line_end_and_line_remarks__attributes,
    {.position = POS(525, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "line_remarks\000funky_types", funky_types__line_remarks__attributes,
    {.position = POS(531, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "spaced_remark\000funky_types", funky_types__spaced_remark__attributes,
    {.position = POS(536, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "multiline_remark\000funky_types", funky_types__multiline_remark__attributes,
    {.position = POS(538, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "remark_lines\000funky_types", funky_types__remark_lines__attributes,
    {.position = POS(544, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "dummy_remark\000funky_types", funky_types__dummy_remark__attributes,
    {.position = POS(546, 1)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__nodes_metadata = {
  "_nodes_metadata", // module name
  "nodes_metadata.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  221, // number of constants
  207, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
