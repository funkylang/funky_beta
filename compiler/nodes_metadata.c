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
  str_name = -22,
  str_operand = -23,
  str_operator = -24,
  str_option = -25,
  str_or = -26,
  str_pair = -27,
  str_parameter = -28,
  str_parameters = -29,
  str_plus = -30,
  str_pragma = -31,
  str_remark = -32,
  str_remarks = -33,
  str_sign = -34,
  str_statement = -35,
  str_statements = -36,
  str_text = -37,
  str_times = -38,
  str_version = -39,
  str_xor = -40,
  list_58_0 = -41,
  list_62_0 = -42,
  list_67_0 = -43,
  list_71_0 = -44,
  list_78_0 = -45,
  str_inline_statement = -46,
  str_attribute_value = -47,
  str_type_function = -48,
  str_method_value_pai = -49,
  list_96_0 = -50,
  str_namespace_instru = -51,
  str_require_instruct = -52,
  list_104_0 = -53,
  str_using_instructio = -54,
  str_alias_instructio = -55,
  list_112_0 = -56,
  str_resolve_instruct = -57,
  str_allow_instructio = -58,
  list_122_0 = -59,
  str_version_no = -60,
  list_130_0 = -61,
  str_unstable = -62,
  str_allow_hidden = -63,
  str_allow_unused = -64,
  str_functor = -65,
  list_142_0 = -66,
  str_function_call_ex = -67,
  list_148_0 = -68,
  str_attribute_access = -69,
  list_154_0 = -70,
  str_inline_functor = -71,
  str_inline_function = -72,
  str_inline_attribute = -73,
  str_io_call = -74,
  str_function_call = -75,
  list_176_0 = -76,
  str_function_call_ar = -77,
  str_inline_return = -78,
  str_attribute_access_2 = -79,
  list_185_0 = -80,
  str_spaced_arguments = -81,
  str_spaced_statement = -82,
  list_200_0 = -83,
  str_even_more_statem = -84,
  str_multiline_argume = -85,
  str_tagged_multiline = -86,
  str_remark_and_multi = -87,
  list_216_0 = -88,
  str_dummy_definition = -89,
  str_variable = -90,
  str_definition = -91,
  str_redefinition = -92,
  str_update = -93,
  list_232_0 = -94,
  str_key_value = -95,
  str_sequence_express = -96,
  str_comma = -97,
  str_comma_expression = -98,
  str_conditional_expr = -99,
  str_and_2 = -100,
  str_and_expression = -101,
  str_or_2 = -102,
  str_or_expression = -103,
  str_named_operator_e = -104,
  str_named_operator = -105,
  str_range_expression = -106,
  str_range = -107,
  str_relational_expre = -108,
  str_equal = -109,
  str_not_equal = -110,
  str_less_equal = -111,
  str_less_than = -112,
  str_greater_equal = -113,
  str_greater_than = -114,
  str_tagged_bit_expre = -115,
  str_bit_expression = -116,
  str_shift_left = -117,
  str_shift_right = -118,
  str_bit_and = -119,
  str_bit_and_2 = -120,
  str_bit_or = -121,
  str_bit_or_2 = -122,
  str_bit_xor = -123,
  str_bit_xor_2 = -124,
  str_tagged_additive = -125,
  str_additive_express = -126,
  str_plus_2 = -127,
  str_minus = -128,
  str_tagged_multiplic = -129,
  str_multiplicative_e = -130,
  str_times_2 = -131,
  str_over = -132,
  str_parenthesed_expr = -133,
  list_318_0 = -134,
  str_backquoted = -135,
  str_negation = -136,
  str_multiline_operat = -137,
  str_multiline_plus = -138,
  str_multiline_minus = -139,
  str_multiline_minus_2 = -140,
  str_multiline_times = -141,
  str_multiline_over = -142,
  str_multiline_over_w = -143,
  str_multiline_shift = -144,
  str_multiline_shift_2 = -145,
  str_multiline_equal = -146,
  str_multiline_not_eq = -147,
  str_multiline_less_e = -148,
  str_multiline_less_t = -149,
  str_multiline_greate = -150,
  str_multiline_greate_2 = -151,
  str_multiline_and = -152,
  str_multiline_or = -153,
  str_multiline_bit_an = -154,
  str_multiline_bit_an_2 = -155,
  str_multiline_bit_or = -156,
  str_multiline_bit_xo = -157,
  str_multiline_assign = -158,
  str_inline_attribute_2 = -159,
  str_inline_method_va = -160,
  str_expression_and_i = -161,
  list_380_0 = -162,
  str_spaced_inline_ar = -163,
  str_numeric_literal = -164,
  list_388_0 = -165,
  str_at_character_lit = -166,
  str_named_character = -167,
  str_numeric_characte = -168,
  str_character_litera = -169,
  list_399_0 = -170,
  str_string_literal = -171,
  list_404_0 = -172,
  str_some_string_comp = -173,
  list_409_0 = -174,
  str_character_sequen = -175,
  list_415_0 = -176,
  str_multiline_string = -177,
  str_newline = -178,
  str_some_string_line = -179,
  str_string_line_end = -180,
  str_at_character = -181,
  str_tagged_empty_cha = -182,
  str_empty_character = -183,
  str_escape_expressio = -184,
  str_named_character_2 = -185,
  str_numeric_characte_2 = -186,
  str_string_line_char = -187,
  str_unique = -188,
  list_446_0 = -189,
  str_attribute = -190,
  str_attribute_with_s = -191,
  list_455_0 = -192,
  str_line_end_stateme = -193,
  str_inline_body = -194,
  list_464_0 = -195,
  list_470_0 = -196,
  str_one_or_more_inli = -197,
  list_475_0 = -198,
  str_open_parameters = -199,
  list_481_0 = -200,
  str_inline_parameter = -201,
  list_487_0 = -202,
  list_493_0 = -203,
  str_myself = -204,
  str_rest = -205,
  str_initial_value = -206,
  list_504_0 = -207,
  str_close_parameters = -208,
  list_509_0 = -209,
  str_return_expressio = -210,
  str_return = -211,
  list_518_0 = -212,
  str_line_end_and_lin = -213,
  list_523_0 = -214,
  str_line_remarks = -215,
  str_spaced_remark = -216,
  str_multiline_remark = -217,
  list_536_0 = -218,
  str_remark_lines = -219,
  str_dummy_remark = -220
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
  var_funky__name_of, // extern
  var_funky__operand_of, // extern
  var_funky__operator_of, // extern
  var_funky__option_of, // extern
  var_funky__or2_of, // extern
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
  var_funky_types__tagged_multiplicative_expression, // extern
  var_funky_types__multiplicative_expression, // extern
  var_funky_types__times, // extern
  var_funky_types__times2, // extern
  var_funky_types__over, // extern
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


static int list_58_0_arguments[] = {
  -var_funky__name_of
};

static int list_62_0_arguments[] = {
  -var_funky__identifier_of, -var_funky__expression_of
};

static int list_67_0_arguments[] = {
  -var_funky__expression_of
};

static int list_71_0_arguments[] = {
  -var_funky__name_of, -var_funky__version_of, -var_funky__remarks_of
};

static int list_78_0_arguments[] = {
  -var_funky__head_of, -var_funky__arguments_of
};

static int list_96_0_arguments[] = {
  -var_funky__identifier_of, -var_funky__argument_of
};

static int list_104_0_arguments[] = {
  -var_funky__filename_of, -var_funky__remarks_of
};

static int list_112_0_arguments[] = {
  -var_funky__alias_of, -var_funky__sign_of, -var_funky__name_of, -var_funky__remarks_of
};

static int list_122_0_arguments[] = {
  -var_funky__pragma_of, -var_funky__remarks_of
};

static int list_130_0_arguments[] = {
  -var_funky__major_of, -var_funky__minor_of
};

static int list_142_0_arguments[] = {
  -var_funky__identifier_of, -var_funky__extensions_of
};

static int list_148_0_arguments[] = {
  -var_funky__call_of, -var_funky__extensions_of
};

static int list_154_0_arguments[] = {
  -var_funky__access_of, -var_funky__extensions_of
};

static int list_176_0_arguments[] = {
  -var_funky__arguments_of
};

static int list_185_0_arguments[] = {
  -var_funky__identifier_of
};

static int list_200_0_arguments[] = {
  -var_funky__argument_of, -var_funky__arguments_of
};

static int list_216_0_arguments[] = {
  -var_funky__remark_of, -var_funky__arguments_of
};

static int list_232_0_arguments[] = {
  -var_funky__expression_of, -var_funky__operator_of
};

static int list_318_0_arguments[] = {
  -var_funky__expression_of, -var_funky__calls_of
};

static int list_380_0_arguments[] = {
  -var_funky__expression_of, -var_funky__arguments_of
};

static int list_388_0_arguments[] = {
  -var_funky__digits_of
};

static int list_399_0_arguments[] = {
  -var_funky__character_of
};

static int list_404_0_arguments[] = {
  -var_funky__components_of
};

static int list_409_0_arguments[] = {
  -var_funky__component_of, -var_funky__components_of
};

static int list_415_0_arguments[] = {
  -var_funky__characters_of
};

static int list_446_0_arguments[] = {
  -var_funky__remarks_of
};

static int list_455_0_arguments[] = {
  -var_funky__parameters_of, -var_funky__remark_of, -var_funky__statements_of
};

static int list_464_0_arguments[] = {
  -var_funky__parameters_of, -var_funky__statement_of
};

static int list_470_0_arguments[] = {
  -var_funky__statement_of
};

static int list_475_0_arguments[] = {
  -var_funky__parameter_of, -var_funky__parameters_of
};

static int list_481_0_arguments[] = {
  -var_funky__remark_of, -var_funky__parameter_of
};

static int list_487_0_arguments[] = {
  -var_funky__name_of, -var_funky__option_of
};

static int list_493_0_arguments[] = {
  -var_funky__name_of, -var_funky__option_of, -var_funky__remarks_of
};

static int list_504_0_arguments[] = {
  -var_funky__operand_of
};

static int list_509_0_arguments[] = {
  -var_funky__remark_of
};

static int list_518_0_arguments[] = {
  -var_funky__text_of
};

static int list_523_0_arguments[] = {
  -var_funky__remark_of, -var_funky__remarks_of
};

static int list_536_0_arguments[] = {
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
  {FLT_STRING_8, 4, {.str_8 = "name"}},
  {FLT_STRING_8, 7, {.str_8 = "operand"}},
  {FLT_STRING_8, 8, {.str_8 = "operator"}},
  {FLT_STRING_8, 6, {.str_8 = "option"}},
  {FLT_STRING_8, 3, {.str_8 = "or2"}},
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
  {FLT_LIST, 1, {.arguments = list_58_0_arguments}},
  {FLT_LIST, 2, {.arguments = list_62_0_arguments}},
  {FLT_LIST, 1, {.arguments = list_67_0_arguments}},
  {FLT_LIST, 3, {.arguments = list_71_0_arguments}},
  {FLT_LIST, 2, {.arguments = list_78_0_arguments}},
  {FLT_STRING_8, 16, {.str_8 = "inline_statement"}},
  {FLT_STRING_8, 20, {.str_8 = "attribute_value_pair"}},
  {FLT_STRING_8, 13, {.str_8 = "type_function"}},
  {FLT_STRING_8, 17, {.str_8 = "method_value_pair"}},
  {FLT_LIST, 2, {.arguments = list_96_0_arguments}},
  {FLT_STRING_8, 21, {.str_8 = "namespace_instruction"}},
  {FLT_STRING_8, 19, {.str_8 = "require_instruction"}},
  {FLT_LIST, 2, {.arguments = list_104_0_arguments}},
  {FLT_STRING_8, 17, {.str_8 = "using_instruction"}},
  {FLT_STRING_8, 17, {.str_8 = "alias_instruction"}},
  {FLT_LIST, 4, {.arguments = list_112_0_arguments}},
  {FLT_STRING_8, 19, {.str_8 = "resolve_instruction"}},
  {FLT_STRING_8, 17, {.str_8 = "allow_instruction"}},
  {FLT_LIST, 2, {.arguments = list_122_0_arguments}},
  {FLT_STRING_8, 10, {.str_8 = "version_no"}},
  {FLT_LIST, 2, {.arguments = list_130_0_arguments}},
  {FLT_STRING_8, 8, {.str_8 = "unstable"}},
  {FLT_STRING_8, 12, {.str_8 = "allow_hidden"}},
  {FLT_STRING_8, 12, {.str_8 = "allow_unused"}},
  {FLT_STRING_8, 7, {.str_8 = "functor"}},
  {FLT_LIST, 2, {.arguments = list_142_0_arguments}},
  {FLT_STRING_8, 23, {.str_8 = "function_call_extension"}},
  {FLT_LIST, 2, {.arguments = list_148_0_arguments}},
  {FLT_STRING_8, 26, {.str_8 = "attribute_access_extension"}},
  {FLT_LIST, 2, {.arguments = list_154_0_arguments}},
  {FLT_STRING_8, 14, {.str_8 = "inline_functor"}},
  {FLT_STRING_8, 30, {.str_8 = "inline_function_call_extension"}},
  {FLT_STRING_8, 33, {.str_8 = "inline_attribute_access_extension"}},
  {FLT_STRING_8, 7, {.str_8 = "io_call"}},
  {FLT_STRING_8, 13, {.str_8 = "function_call"}},
  {FLT_LIST, 1, {.arguments = list_176_0_arguments}},
  {FLT_STRING_8, 23, {.str_8 = "function_call_arguments"}},
  {FLT_STRING_8, 13, {.str_8 = "inline_return"}},
  {FLT_STRING_8, 16, {.str_8 = "attribute_access"}},
  {FLT_LIST, 1, {.arguments = list_185_0_arguments}},
  {FLT_STRING_8, 16, {.str_8 = "spaced_arguments"}},
  {FLT_STRING_8, 26, {.str_8 = "spaced_statement_arguments"}},
  {FLT_LIST, 2, {.arguments = list_200_0_arguments}},
  {FLT_STRING_8, 29, {.str_8 = "even_more_statement_arguments"}},
  {FLT_STRING_8, 19, {.str_8 = "multiline_arguments"}},
  {FLT_STRING_8, 26, {.str_8 = "tagged_multiline_arguments"}},
  {FLT_STRING_8, 34, {.str_8 = "remark_and_multiline_function_call"}},
  {FLT_LIST, 2, {.arguments = list_216_0_arguments}},
  {FLT_STRING_8, 16, {.str_8 = "dummy_definition"}},
  {FLT_STRING_8, 8, {.str_8 = "variable"}},
  {FLT_STRING_8, 10, {.str_8 = "definition"}},
  {FLT_STRING_8, 12, {.str_8 = "redefinition"}},
  {FLT_STRING_8, 6, {.str_8 = "update"}},
  {FLT_LIST, 2, {.arguments = list_232_0_arguments}},
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
  {FLT_STRING_8, 32, {.str_8 = "tagged_multiplicative_expression"}},
  {FLT_STRING_8, 25, {.str_8 = "multiplicative_expression"}},
  {FLT_STRING_8, 5, {.str_8 = "times"}},
  {FLT_STRING_8, 4, {.str_8 = "over"}},
  {FLT_STRING_8, 22, {.str_8 = "parenthesed_expression"}},
  {FLT_LIST, 2, {.arguments = list_318_0_arguments}},
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
  {FLT_LIST, 2, {.arguments = list_380_0_arguments}},
  {FLT_STRING_8, 23, {.str_8 = "spaced_inline_arguments"}},
  {FLT_STRING_8, 15, {.str_8 = "numeric_literal"}},
  {FLT_LIST, 1, {.arguments = list_388_0_arguments}},
  {FLT_STRING_8, 20, {.str_8 = "at_character_literal"}},
  {FLT_STRING_8, 23, {.str_8 = "named_character_literal"}},
  {FLT_STRING_8, 25, {.str_8 = "numeric_character_literal"}},
  {FLT_STRING_8, 17, {.str_8 = "character_literal"}},
  {FLT_LIST, 1, {.arguments = list_399_0_arguments}},
  {FLT_STRING_8, 14, {.str_8 = "string_literal"}},
  {FLT_LIST, 1, {.arguments = list_404_0_arguments}},
  {FLT_STRING_8, 22, {.str_8 = "some_string_components"}},
  {FLT_LIST, 2, {.arguments = list_409_0_arguments}},
  {FLT_STRING_8, 18, {.str_8 = "character_sequence"}},
  {FLT_LIST, 1, {.arguments = list_415_0_arguments}},
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
  {FLT_LIST, 1, {.arguments = list_446_0_arguments}},
  {FLT_STRING_8, 9, {.str_8 = "attribute"}},
  {FLT_STRING_8, 21, {.str_8 = "attribute_with_setter"}},
  {FLT_LIST, 3, {.arguments = list_455_0_arguments}},
  {FLT_STRING_8, 18, {.str_8 = "line_end_statement"}},
  {FLT_STRING_8, 11, {.str_8 = "inline_body"}},
  {FLT_LIST, 2, {.arguments = list_464_0_arguments}},
  {FLT_LIST, 1, {.arguments = list_470_0_arguments}},
  {FLT_STRING_8, 29, {.str_8 = "one_or_more_inline_parameters"}},
  {FLT_LIST, 2, {.arguments = list_475_0_arguments}},
  {FLT_STRING_8, 15, {.str_8 = "open_parameters"}},
  {FLT_LIST, 2, {.arguments = list_481_0_arguments}},
  {FLT_STRING_8, 16, {.str_8 = "inline_parameter"}},
  {FLT_LIST, 2, {.arguments = list_487_0_arguments}},
  {FLT_LIST, 3, {.arguments = list_493_0_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "myself"}},
  {FLT_STRING_8, 4, {.str_8 = "rest"}},
  {FLT_STRING_8, 13, {.str_8 = "initial_value"}},
  {FLT_LIST, 1, {.arguments = list_504_0_arguments}},
  {FLT_STRING_8, 16, {.str_8 = "close_parameters"}},
  {FLT_LIST, 1, {.arguments = list_509_0_arguments}},
  {FLT_STRING_8, 17, {.str_8 = "return_expression"}},
  {FLT_STRING_8, 6, {.str_8 = "return"}},
  {FLT_LIST, 1, {.arguments = list_518_0_arguments}},
  {FLT_STRING_8, 25, {.str_8 = "line_end_and_line_remarks"}},
  {FLT_LIST, 2, {.arguments = list_523_0_arguments}},
  {FLT_STRING_8, 12, {.str_8 = "line_remarks"}},
  {FLT_STRING_8, 13, {.str_8 = "spaced_remark"}},
  {FLT_STRING_8, 16, {.str_8 = "multiline_remark"}},
  {FLT_LIST, 2, {.arguments = list_536_0_arguments}},
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
  {-var_funky__node_fields_of, -list_58_0}
};

static ATTRIBUTE_DEFINITION funky_types__identifier_and_expression__attributes[] = {
  {-var_funky__node_fields_of, -list_62_0}
};

static ATTRIBUTE_DEFINITION funky_types__simple_expression__attributes[] = {
  {-var_funky__node_fields_of, -list_67_0}
};

static ATTRIBUTE_DEFINITION funky_types__namespace_meta_instruction__attributes[] = {
  {-var_funky__node_fields_of, -list_71_0}
};

static ATTRIBUTE_DEFINITION funky_types__statement__attributes[] = {
  {-var_funky__node_name_of, -str_statement},
  {-var_funky__node_fields_of, -list_78_0}
};

static ATTRIBUTE_DEFINITION funky_types__inline_statement__attributes[] = {
  {-var_funky__node_name_of, -str_inline_statement},
  {-var_funky__node_fields_of, -list_78_0}
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
  {-var_funky__node_fields_of, -list_96_0}
};

static ATTRIBUTE_DEFINITION funky_types__namespace_instruction__attributes[] = {
  {-var_funky__node_name_of, -str_namespace_instru}
};

static ATTRIBUTE_DEFINITION funky_types__require_instruction__attributes[] = {
  {-var_funky__node_name_of, -str_require_instruct},
  {-var_funky__node_fields_of, -list_104_0}
};

static ATTRIBUTE_DEFINITION funky_types__using_instruction__attributes[] = {
  {-var_funky__node_name_of, -str_using_instructio}
};

static ATTRIBUTE_DEFINITION funky_types__alias_instruction__attributes[] = {
  {-var_funky__node_name_of, -str_alias_instructio},
  {-var_funky__node_fields_of, -list_112_0}
};

static ATTRIBUTE_DEFINITION funky_types__resolve_instruction__attributes[] = {
  {-var_funky__node_name_of, -str_resolve_instruct}
};

static ATTRIBUTE_DEFINITION funky_types__allow_instruction__attributes[] = {
  {-var_funky__node_name_of, -str_allow_instructio},
  {-var_funky__node_fields_of, -list_122_0}
};

static ATTRIBUTE_DEFINITION funky_types__alias__attributes[] = {
  {-var_funky__node_name_of, -str_alias}
};

static ATTRIBUTE_DEFINITION funky_types__version_no__attributes[] = {
  {-var_funky__node_name_of, -str_version_no},
  {-var_funky__node_fields_of, -list_130_0}
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
  {-var_funky__node_fields_of, -list_142_0}
};

static ATTRIBUTE_DEFINITION funky_types__function_call_extension__attributes[] = {
  {-var_funky__node_name_of, -str_function_call_ex},
  {-var_funky__node_fields_of, -list_148_0}
};

static ATTRIBUTE_DEFINITION funky_types__attribute_access_extension__attributes[] = {
  {-var_funky__node_name_of, -str_attribute_access},
  {-var_funky__node_fields_of, -list_154_0}
};

static ATTRIBUTE_DEFINITION funky_types__inline_functor__attributes[] = {
  {-var_funky__node_name_of, -str_inline_functor}
};

static ATTRIBUTE_DEFINITION funky_types__inline_function_call_extension__attributes[] = {
  {-var_funky__node_name_of, -str_inline_function},
  {-var_funky__node_fields_of, -list_148_0}
};

static ATTRIBUTE_DEFINITION funky_types__inline_attribute_access_extension__attributes[] = {
  {-var_funky__node_name_of, -str_inline_attribute},
  {-var_funky__node_fields_of, -list_154_0}
};

static ATTRIBUTE_DEFINITION funky_types__io_call__attributes[] = {
  {-var_funky__node_name_of, -str_io_call}
};

static ATTRIBUTE_DEFINITION funky_types__function_call__attributes[] = {
  {-var_funky__node_name_of, -str_function_call},
  {-var_funky__node_fields_of, -list_176_0}
};

static ATTRIBUTE_DEFINITION funky_types__function_call_arguments__attributes[] = {
  {-var_funky__node_name_of, -str_function_call_ar}
};

static ATTRIBUTE_DEFINITION funky_types__inline_return__attributes[] = {
  {-var_funky__node_name_of, -str_inline_return}
};

static ATTRIBUTE_DEFINITION funky_types__attribute_access__attributes[] = {
  {-var_funky__node_name_of, -str_attribute_access_2},
  {-var_funky__node_fields_of, -list_185_0}
};

static ATTRIBUTE_DEFINITION funky_types__spaced_arguments__attributes[] = {
  {-var_funky__node_name_of, -str_spaced_arguments},
  {-var_funky__node_fields_of, -list_176_0}
};

static ATTRIBUTE_DEFINITION funky_types__spaced_statement_arguments__attributes[] = {
  {-var_funky__node_name_of, -str_spaced_statement},
  {-var_funky__node_fields_of, -list_176_0}
};

static ATTRIBUTE_DEFINITION funky_types__arguments__attributes[] = {
  {-var_funky__node_name_of, -str_arguments},
  {-var_funky__node_fields_of, -list_200_0}
};

static ATTRIBUTE_DEFINITION funky_types__even_more_statement_arguments__attributes[] = {
  {-var_funky__node_name_of, -str_even_more_statem},
  {-var_funky__node_fields_of, -list_200_0}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_arguments__attributes[] = {
  {-var_funky__node_name_of, -str_multiline_argume}
};

static ATTRIBUTE_DEFINITION funky_types__tagged_multiline_arguments__attributes[] = {
  {-var_funky__node_name_of, -str_tagged_multiline}
};

static ATTRIBUTE_DEFINITION funky_types__remark_and_multiline_function_call__attributes[] = {
  {-var_funky__node_name_of, -str_remark_and_multi},
  {-var_funky__node_fields_of, -list_216_0}
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
  {-var_funky__node_fields_of, -list_232_0}
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
  {-var_funky__node_name_of, -str_minus}
};

static ATTRIBUTE_DEFINITION funky_types__tagged_multiplicative_expression__attributes[] = {
  {-var_funky__node_name_of, -str_tagged_multiplic}
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
  {-var_funky__node_name_of, -str_over}
};

static ATTRIBUTE_DEFINITION funky_types__parenthesed_expression__attributes[] = {
  {-var_funky__node_name_of, -str_parenthesed_expr},
  {-var_funky__node_fields_of, -list_318_0}
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
  {-var_funky__node_fields_of, -list_216_0}
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
  {-var_funky__node_fields_of, -list_380_0}
};

static ATTRIBUTE_DEFINITION funky_types__spaced_inline_arguments__attributes[] = {
  {-var_funky__node_name_of, -str_spaced_inline_ar}
};

static ATTRIBUTE_DEFINITION funky_types__numeric_literal__attributes[] = {
  {-var_funky__node_name_of, -str_numeric_literal},
  {-var_funky__node_fields_of, -list_388_0}
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
  {-var_funky__node_fields_of, -list_399_0}
};

static ATTRIBUTE_DEFINITION funky_types__string_literal__attributes[] = {
  {-var_funky__node_name_of, -str_string_literal},
  {-var_funky__node_fields_of, -list_404_0}
};

static ATTRIBUTE_DEFINITION funky_types__some_string_components__attributes[] = {
  {-var_funky__node_name_of, -str_some_string_comp},
  {-var_funky__node_fields_of, -list_409_0}
};

static ATTRIBUTE_DEFINITION funky_types__character_sequence__attributes[] = {
  {-var_funky__node_name_of, -str_character_sequen},
  {-var_funky__node_fields_of, -list_415_0}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_string_literal__attributes[] = {
  {-var_funky__node_name_of, -str_multiline_string}
};

static ATTRIBUTE_DEFINITION funky_types__newline__attributes[] = {
  {-var_funky__node_name_of, -str_newline}
};

static ATTRIBUTE_DEFINITION funky_types__some_string_line_components__attributes[] = {
  {-var_funky__node_name_of, -str_some_string_line},
  {-var_funky__node_fields_of, -list_409_0}
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
  {-var_funky__node_fields_of, -list_446_0}
};

static ATTRIBUTE_DEFINITION funky_types__attribute__attributes[] = {
  {-var_funky__node_name_of, -str_attribute}
};

static ATTRIBUTE_DEFINITION funky_types__attribute_with_setter__attributes[] = {
  {-var_funky__node_name_of, -str_attribute_with_s}
};

static ATTRIBUTE_DEFINITION funky_types__body__attributes[] = {
  {-var_funky__node_name_of, -str_body},
  {-var_funky__node_fields_of, -list_455_0}
};

static ATTRIBUTE_DEFINITION funky_types__line_end_statement__attributes[] = {
  {-var_funky__node_name_of, -str_line_end_stateme}
};

static ATTRIBUTE_DEFINITION funky_types__inline_body__attributes[] = {
  {-var_funky__node_name_of, -str_inline_body},
  {-var_funky__node_fields_of, -list_464_0}
};

static ATTRIBUTE_DEFINITION funky_types__statements__attributes[] = {
  {-var_funky__node_name_of, -str_statements},
  {-var_funky__node_fields_of, -list_470_0}
};

static ATTRIBUTE_DEFINITION funky_types__one_or_more_inline_parameters__attributes[] = {
  {-var_funky__node_name_of, -str_one_or_more_inli},
  {-var_funky__node_fields_of, -list_475_0}
};

static ATTRIBUTE_DEFINITION funky_types__open_parameters__attributes[] = {
  {-var_funky__node_name_of, -str_open_parameters},
  {-var_funky__node_fields_of, -list_481_0}
};

static ATTRIBUTE_DEFINITION funky_types__inline_parameter__attributes[] = {
  {-var_funky__node_name_of, -str_inline_parameter},
  {-var_funky__node_fields_of, -list_487_0}
};

static ATTRIBUTE_DEFINITION funky_types__parameter__attributes[] = {
  {-var_funky__node_name_of, -str_parameter},
  {-var_funky__node_fields_of, -list_493_0}
};

static ATTRIBUTE_DEFINITION funky_types__myself__attributes[] = {
  {-var_funky__node_name_of, -str_myself}
};

static ATTRIBUTE_DEFINITION funky_types__rest__attributes[] = {
  {-var_funky__node_name_of, -str_rest}
};

static ATTRIBUTE_DEFINITION funky_types__initial_value__attributes[] = {
  {-var_funky__node_name_of, -str_initial_value},
  {-var_funky__node_fields_of, -list_504_0}
};

static ATTRIBUTE_DEFINITION funky_types__close_parameters__attributes[] = {
  {-var_funky__node_name_of, -str_close_parameters},
  {-var_funky__node_fields_of, -list_509_0}
};

static ATTRIBUTE_DEFINITION funky_types__return_expression__attributes[] = {
  {-var_funky__node_name_of, -str_return_expressio}
};

static ATTRIBUTE_DEFINITION funky_types__return__attributes[] = {
  {-var_funky__node_name_of, -str_return}
};

static ATTRIBUTE_DEFINITION funky_types__remark__attributes[] = {
  {-var_funky__node_name_of, -str_remark},
  {-var_funky__node_fields_of, -list_518_0}
};

static ATTRIBUTE_DEFINITION funky_types__line_end_and_line_remarks__attributes[] = {
  {-var_funky__node_name_of, -str_line_end_and_lin},
  {-var_funky__node_fields_of, -list_523_0}
};

static ATTRIBUTE_DEFINITION funky_types__line_remarks__attributes[] = {
  {-var_funky__node_name_of, -str_line_remarks},
  {-var_funky__node_fields_of, -list_509_0}
};

static ATTRIBUTE_DEFINITION funky_types__spaced_remark__attributes[] = {
  {-var_funky__node_name_of, -str_spaced_remark}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_remark__attributes[] = {
  {-var_funky__node_name_of, -str_multiline_remark},
  {-var_funky__node_fields_of, -list_536_0}
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
    "assign\000std", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "node_fields_of\000funky", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "access_of\000funky", funky__access_of__attributes
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_string\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "alias_of\000funky", funky__alias_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "and2_of\000funky", funky__and2_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "argument_of\000funky", funky__argument_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "arguments_of\000funky", funky__arguments_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "body_of\000funky", funky__body_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "call_of\000funky", funky__call_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "calls_of\000funky", funky__calls_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "character_of\000funky", funky__character_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "characters_of\000funky", funky__characters_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "component_of\000funky", funky__component_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "components_of\000funky", funky__components_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "digits_of\000funky", funky__digits_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "expression_of\000funky", funky__expression_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "extensions_of\000funky", funky__extensions_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "filename_of\000funky", funky__filename_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "head_of\000funky", funky__head_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "identifier_of\000funky", funky__identifier_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "lines_of\000funky", funky__lines_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "major_of\000funky", funky__major_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "minor_of\000funky", funky__minor_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "name_of\000funky", funky__name_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "operand_of\000funky", funky__operand_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "operator_of\000funky", funky__operator_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "option_of\000funky", funky__option_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "or2_of\000funky", funky__or2_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "pair_of\000funky", funky__pair_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "parameter_of\000funky", funky__parameter_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "parameters_of\000funky", funky__parameters_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "plus2_of\000funky", funky__plus2_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "pragma_of\000funky", funky__pragma_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "remark_of\000funky", funky__remark_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "remarks_of\000funky", funky__remarks_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "sign_of\000funky", funky__sign_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "statement_of\000funky", funky__statement_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "statements_of\000funky", funky__statements_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "text_of\000funky", funky__text_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "times2_of\000funky", funky__times2_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "version_of\000funky", funky__version_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "xor2_of\000funky", funky__xor2_of__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "fieldless_node\000funky_types", funky_types__fieldless_node__attributes
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "simple_name\000funky_types", funky_types__simple_name__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "identifier_and_expression\000funky_types", funky_types__identifier_and_expression__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "simple_expression\000funky_types", funky_types__simple_expression__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "namespace_meta_instruction\000funky_types", funky_types__namespace_meta_instruction__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "statement\000funky_types", funky_types__statement__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "inline_statement\000funky_types", funky_types__inline_statement__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "attribute_value_pair\000funky_types", funky_types__attribute_value_pair__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "type_function\000funky_types", funky_types__type_function__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "method_value_pair\000funky_types", funky_types__method_value_pair__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "pair\000funky_types", funky_types__pair__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "namespace_instruction\000funky_types", funky_types__namespace_instruction__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "require_instruction\000funky_types", funky_types__require_instruction__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "using_instruction\000funky_types", funky_types__using_instruction__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "alias_instruction\000funky_types", funky_types__alias_instruction__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "resolve_instruction\000funky_types", funky_types__resolve_instruction__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "allow_instruction\000funky_types", funky_types__allow_instruction__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "alias\000funky_types", funky_types__alias__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "version_no\000funky_types", funky_types__version_no__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "unstable\000funky_types", funky_types__unstable__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "allow_hidden\000funky_types", funky_types__allow_hidden__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "allow_unused\000funky_types", funky_types__allow_unused__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "functor\000funky_types", funky_types__functor__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "function_call_extension\000funky_types", funky_types__function_call_extension__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "attribute_access_extension\000funky_types", funky_types__attribute_access_extension__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_functor\000funky_types", funky_types__inline_functor__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "inline_function_call_extension\000funky_types", funky_types__inline_function_call_extension__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "inline_attribute_access_extension\000funky_types", funky_types__inline_attribute_access_extension__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "io_call\000funky_types", funky_types__io_call__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "function_call\000funky_types", funky_types__function_call__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "function_call_arguments\000funky_types", funky_types__function_call_arguments__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_return\000funky_types", funky_types__inline_return__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "attribute_access\000funky_types", funky_types__attribute_access__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "spaced_arguments\000funky_types", funky_types__spaced_arguments__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "spaced_statement_arguments\000funky_types", funky_types__spaced_statement_arguments__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "arguments\000funky_types", funky_types__arguments__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "even_more_statement_arguments\000funky_types", funky_types__even_more_statement_arguments__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_arguments\000funky_types", funky_types__multiline_arguments__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "tagged_multiline_arguments\000funky_types", funky_types__tagged_multiline_arguments__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "remark_and_multiline_function_call\000funky_types", funky_types__remark_and_multiline_function_call__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "dummy_definition\000funky_types", funky_types__dummy_definition__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "variable\000funky_types", funky_types__variable__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "definition\000funky_types", funky_types__definition__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "redefinition\000funky_types", funky_types__redefinition__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "update\000funky_types", funky_types__update__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "expression\000funky_types", funky_types__expression__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "key_value\000funky_types", funky_types__key_value__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "sequence_expression\000funky_types", funky_types__sequence_expression__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "comma\000funky_types", funky_types__comma__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "comma_expression\000funky_types", funky_types__comma_expression__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "conditional_expression\000funky_types", funky_types__conditional_expression__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "and\000funky_types", funky_types__and__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "and_expression\000funky_types", funky_types__and_expression__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "or\000funky_types", funky_types__or__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "or_expression\000funky_types", funky_types__or_expression__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "named_operator_expression\000funky_types", funky_types__named_operator_expression__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "named_operator\000funky_types", funky_types__named_operator__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "range_expression\000funky_types", funky_types__range_expression__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "range\000funky_types", funky_types__range__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "relational_expression\000funky_types", funky_types__relational_expression__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "equal\000funky_types", funky_types__equal__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "not_equal\000funky_types", funky_types__not_equal__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "less_equal\000funky_types", funky_types__less_equal__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "less_than\000funky_types", funky_types__less_than__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "greater_equal\000funky_types", funky_types__greater_equal__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "greater_than\000funky_types", funky_types__greater_than__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "tagged_bit_expression\000funky_types", funky_types__tagged_bit_expression__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "bit_expression\000funky_types", funky_types__bit_expression__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "shift_left\000funky_types", funky_types__shift_left__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "shift_right\000funky_types", funky_types__shift_right__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "bit_and\000funky_types", funky_types__bit_and__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "bit_and2\000funky_types", funky_types__bit_and2__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "bit_or\000funky_types", funky_types__bit_or__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "bit_or2\000funky_types", funky_types__bit_or2__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "bit_xor\000funky_types", funky_types__bit_xor__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "bit_xor2\000funky_types", funky_types__bit_xor2__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "tagged_additive_expression\000funky_types", funky_types__tagged_additive_expression__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "additive_expression\000funky_types", funky_types__additive_expression__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "plus\000funky_types", funky_types__plus__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "plus2\000funky_types", funky_types__plus2__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "minus\000funky_types", funky_types__minus__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "tagged_multiplicative_expression\000funky_types", funky_types__tagged_multiplicative_expression__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiplicative_expression\000funky_types", funky_types__multiplicative_expression__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "times\000funky_types", funky_types__times__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "times2\000funky_types", funky_types__times2__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "over\000funky_types", funky_types__over__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "parenthesed_expression\000funky_types", funky_types__parenthesed_expression__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "backquoted\000funky_types", funky_types__backquoted__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "negation\000funky_types", funky_types__negation__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_operator\000funky_types", funky_types__multiline_operator__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_plus\000funky_types", funky_types__multiline_plus__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "multiline_minus\000funky_types", funky_types__multiline_minus__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_minus_with_remark\000funky_types", funky_types__multiline_minus_with_remark__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_times\000funky_types", funky_types__multiline_times__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_over\000funky_types", funky_types__multiline_over__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_over_with_remark\000funky_types", funky_types__multiline_over_with_remark__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_shift_left\000funky_types", funky_types__multiline_shift_left__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_shift_right\000funky_types", funky_types__multiline_shift_right__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_equal\000funky_types", funky_types__multiline_equal__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_not_equal\000funky_types", funky_types__multiline_not_equal__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_less_equal\000funky_types", funky_types__multiline_less_equal__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_less_than\000funky_types", funky_types__multiline_less_than__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_greater_equal\000funky_types", funky_types__multiline_greater_equal__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_greater_than\000funky_types", funky_types__multiline_greater_than__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_and\000funky_types", funky_types__multiline_and__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_or\000funky_types", funky_types__multiline_or__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_bit_and\000funky_types", funky_types__multiline_bit_and__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_bit_and_with_remark\000funky_types", funky_types__multiline_bit_and_with_remark__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_bit_or\000funky_types", funky_types__multiline_bit_or__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_bit_xor\000funky_types", funky_types__multiline_bit_xor__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_assign\000funky_types", funky_types__multiline_assign__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_attribute_value_pair\000funky_types", funky_types__inline_attribute_value_pair__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_method_value_pair\000funky_types", funky_types__inline_method_value_pair__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "expression_and_inline_arguments\000funky_types", funky_types__expression_and_inline_arguments__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "spaced_inline_arguments\000funky_types", funky_types__spaced_inline_arguments__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "numeric_literal\000funky_types", funky_types__numeric_literal__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "at_character_literal\000funky_types", funky_types__at_character_literal__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "named_character_literal\000funky_types", funky_types__named_character_literal__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "numeric_character_literal\000funky_types", funky_types__numeric_character_literal__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "character_literal\000funky_types", funky_types__character_literal__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "string_literal\000funky_types", funky_types__string_literal__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "some_string_components\000funky_types", funky_types__some_string_components__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "character_sequence\000funky_types", funky_types__character_sequence__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_string_literal\000funky_types", funky_types__multiline_string_literal__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "newline\000funky_types", funky_types__newline__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "some_string_line_components\000funky_types", funky_types__some_string_line_components__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "string_line_end\000funky_types", funky_types__string_line_end__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "at_character\000funky_types", funky_types__at_character__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "tagged_empty_character\000funky_types", funky_types__tagged_empty_character__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "empty_character\000funky_types", funky_types__empty_character__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "escape_expression\000funky_types", funky_types__escape_expression__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "named_character\000funky_types", funky_types__named_character__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "numeric_character\000funky_types", funky_types__numeric_character__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "string_line_character_sequence\000funky_types", funky_types__string_line_character_sequence__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "unique\000funky_types", funky_types__unique__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "attribute\000funky_types", funky_types__attribute__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "attribute_with_setter\000funky_types", funky_types__attribute_with_setter__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "body\000funky_types", funky_types__body__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "line_end_statement\000funky_types", funky_types__line_end_statement__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "inline_body\000funky_types", funky_types__inline_body__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "statements\000funky_types", funky_types__statements__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "one_or_more_inline_parameters\000funky_types", funky_types__one_or_more_inline_parameters__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "open_parameters\000funky_types", funky_types__open_parameters__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "inline_parameter\000funky_types", funky_types__inline_parameter__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "parameter\000funky_types", funky_types__parameter__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "myself\000funky_types", funky_types__myself__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "rest\000funky_types", funky_types__rest__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "initial_value\000funky_types", funky_types__initial_value__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "close_parameters\000funky_types", funky_types__close_parameters__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "return_expression\000funky_types", funky_types__return_expression__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "return\000funky_types", funky_types__return__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "remark\000funky_types", funky_types__remark__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "line_end_and_line_remarks\000funky_types", funky_types__line_end_and_line_remarks__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "line_remarks\000funky_types", funky_types__line_remarks__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "spaced_remark\000funky_types", funky_types__spaced_remark__attributes
  },
  {
    FOT_UNKNOWN, 0, 2,
    "multiline_remark\000funky_types", funky_types__multiline_remark__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "remark_lines\000funky_types", funky_types__remark_lines__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "dummy_remark\000funky_types", funky_types__dummy_remark__attributes
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
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  220, // number of constants
  204, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
