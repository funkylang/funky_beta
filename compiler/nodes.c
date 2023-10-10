#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  uni_funky__STATEMENT = -1,
  uni_funky__INLINE_STATEMENT = -2,
  uni_funky__ATTRIBUTE_VALUE_PAIR = -3,
  uni_funky__TYPE_FUNCTION = -4,
  uni_funky__METHOD_VALUE_PAIR = -5,
  uni_funky__PAIR = -6,
  uni_funky__NAMESPACE_INSTRUCTION = -7,
  uni_funky__REQUIRE_INSTRUCTION = -8,
  uni_funky__USING_INSTRUCTION = -9,
  uni_funky__ALIAS_INSTRUCTION = -10,
  uni_funky__RESOLVE_INSTRUCTION = -11,
  uni_funky__ALLOW_INSTRUCTION = -12,
  uni_funky__ALIAS = -13,
  uni_funky__VERSION_NO = -14,
  uni_funky__UNSTABLE = -15,
  uni_funky__ALLOW_HIDDEN = -16,
  uni_funky__ALLOW_UNUSED = -17,
  uni_funky__FUNCTOR = -18,
  uni_funky__FUNCTION_CALL_EXTENSION = -19,
  uni_funky__ATTRIBUTE_ACCESS_EXTENSION = -20,
  uni_funky__INLINE_FUNCTOR = -21,
  uni_funky__INLINE_FUNCTION_CALL_EXTENSION = -22,
  uni_funky__INLINE_ATTRIBUTE_ACCESS_EXTENSION = -23,
  uni_funky__IO_CALL = -24,
  uni_funky__FUNCTION_CALL = -25,
  uni_funky__FUNCTION_CALL_ARGUMENTS = -26,
  uni_funky__INLINE_RETURN = -27,
  uni_funky__ATTRIBUTE_ACCESS = -28,
  uni_funky__SPACED_ARGUMENTS = -29,
  uni_funky__SPACED_STATEMENT_ARGUMENTS = -30,
  uni_funky__ARGUMENTS = -31,
  uni_funky__EVEN_MORE_STATEMENT_ARGUMENTS = -32,
  uni_funky__MULTILINE_ARGUMENTS = -33,
  uni_funky__TAGGED_MULTILINE_ARGUMENTS = -34,
  uni_funky__REMARK_AND_MULTILINE_FUNCTION_CALL = -35,
  uni_funky__DUMMY_DEFINITION = -36,
  uni_funky__VARIABLE = -37,
  uni_funky__DEFINITION = -38,
  uni_funky__REDEFINITION = -39,
  uni_funky__UPDATE = -40,
  uni_funky__EXPRESSION = -41,
  uni_funky__KEY_VALUE = -42,
  uni_funky__SEQUENCE_EXPRESSION = -43,
  uni_funky__COMMA = -44,
  uni_funky__COMMA_EXPRESSION = -45,
  uni_funky__CONDITIONAL_EXPRESSION = -46,
  uni_funky__AND = -47,
  uni_funky__AND_EXPRESSION = -48,
  uni_funky__OR = -49,
  uni_funky__OR_EXPRESSION = -50,
  uni_funky__NAMED_OPERATOR_EXPRESSION = -51,
  uni_funky__NAMED_OPERATOR = -52,
  uni_funky__RANGE_EXPRESSION = -53,
  uni_funky__RANGE = -54,
  uni_funky__RELATIONAL_EXPRESSION = -55,
  uni_funky__EQUAL = -56,
  uni_funky__NOT_EQUAL = -57,
  uni_funky__LESS_EQUAL = -58,
  uni_funky__LESS_THAN = -59,
  uni_funky__GREATER_EQUAL = -60,
  uni_funky__GREATER_THAN = -61,
  uni_funky__TAGGED_BIT_EXPRESSION = -62,
  uni_funky__BIT_EXPRESSION = -63,
  uni_funky__SHIFT_LEFT = -64,
  uni_funky__SHIFT_RIGHT = -65,
  uni_funky__BIT_AND = -66,
  uni_funky__BIT_AND2 = -67,
  uni_funky__BIT_OR = -68,
  uni_funky__BIT_OR2 = -69,
  uni_funky__BIT_XOR = -70,
  uni_funky__BIT_XOR2 = -71,
  uni_funky__TAGGED_ADDITIVE_EXPRESSION = -72,
  uni_funky__ADDITIVE_EXPRESSION = -73,
  uni_funky__PLUS = -74,
  uni_funky__PLUS2 = -75,
  uni_funky__MINUS = -76,
  uni_funky__TAGGED_MULTIPLICATIVE_EXPRESSION = -77,
  uni_funky__MULTIPLICATIVE_EXPRESSION = -78,
  uni_funky__TIMES = -79,
  uni_funky__TIMES2 = -80,
  uni_funky__OVER = -81,
  uni_funky__PARENTHESED_EXPRESSION = -82,
  uni_funky__BACKQUOTED = -83,
  uni_funky__NEGATION = -84,
  uni_funky__MULTILINE_OPERATOR = -85,
  uni_funky__MULTILINE_PLUS = -86,
  uni_funky__MULTILINE_MINUS = -87,
  uni_funky__MULTILINE_MINUS_WITH_REMARK = -88,
  uni_funky__MULTILINE_TIMES = -89,
  uni_funky__MULTILINE_OVER = -90,
  uni_funky__MULTILINE_OVER_WITH_REMARK = -91,
  uni_funky__MULTILINE_SHIFT_LEFT = -92,
  uni_funky__MULTILINE_SHIFT_RIGHT = -93,
  uni_funky__MULTILINE_EQUAL = -94,
  uni_funky__MULTILINE_NOT_EQUAL = -95,
  uni_funky__MULTILINE_LESS_EQUAL = -96,
  uni_funky__MULTILINE_LESS_THAN = -97,
  uni_funky__MULTILINE_GREATER_EQUAL = -98,
  uni_funky__MULTILINE_GREATER_THAN = -99,
  uni_funky__MULTILINE_AND = -100,
  uni_funky__MULTILINE_OR = -101,
  uni_funky__MULTILINE_BIT_AND = -102,
  uni_funky__MULTILINE_BIT_AND_WITH_REMARK = -103,
  uni_funky__MULTILINE_BIT_OR = -104,
  uni_funky__MULTILINE_BIT_XOR = -105,
  uni_funky__MULTILINE_ASSIGN = -106,
  uni_funky__INLINE_ATTRIBUTE_VALUE_PAIR = -107,
  uni_funky__INLINE_METHOD_VALUE_PAIR = -108,
  uni_funky__EXPRESSION_AND_INLINE_ARGUMENTS = -109,
  uni_funky__SPACED_INLINE_ARGUMENTS = -110,
  uni_funky__NUMERIC_LITERAL = -111,
  uni_funky__AT_CHARACTER_LITERAL = -112,
  uni_funky__NAMED_CHARACTER_LITERAL = -113,
  uni_funky__NUMERIC_CHARACTER_LITERAL = -114,
  uni_funky__CHARACTER_LITERAL = -115,
  uni_funky__STRING_LITERAL = -116,
  uni_funky__SOME_STRING_COMPONENTS = -117,
  uni_funky__CHARACTER_SEQUENCE = -118,
  uni_funky__MULTILINE_STRING_LITERAL = -119,
  uni_funky__NEWLINE = -120,
  uni_funky__SOME_STRING_LINE_COMPONENTS = -121,
  uni_funky__STRING_LINE_END = -122,
  uni_funky__AT_CHARACTER = -123,
  uni_funky__TAGGED_EMPTY_CHARACTER = -124,
  uni_funky__EMPTY_CHARACTER = -125,
  uni_funky__ESCAPE_EXPRESSION = -126,
  uni_funky__NAMED_CHARACTER = -127,
  uni_funky__NUMERIC_CHARACTER = -128,
  uni_funky__STRING_LINE_CHARACTER_SEQUENCE = -129,
  uni_funky__UNIQUE = -130,
  uni_funky__ATTRIBUTE = -131,
  uni_funky__ATTRIBUTE_WITH_SETTER = -132,
  uni_funky__BODY = -133,
  uni_funky__LINE_END_STATEMENT = -134,
  uni_funky__INLINE_BODY = -135,
  uni_funky__STATEMENTS = -136,
  uni_funky__ONE_OR_MORE_INLINE_PARAMETERS = -137,
  uni_funky__OPEN_PARAMETERS = -138,
  uni_funky__INLINE_PARAMETER = -139,
  uni_funky__PARAMETER = -140,
  uni_funky__MYSELF = -141,
  uni_funky__REST = -142,
  uni_funky__INITIAL_VALUE = -143,
  uni_funky__CLOSE_PARAMETERS = -144,
  uni_funky__RETURN_EXPRESSION = -145,
  uni_funky__RETURN = -146,
  uni_funky__REMARK = -147,
  uni_funky__LINE_END_AND_LINE_REMARKS = -148,
  uni_funky__LINE_REMARKS = -149,
  uni_funky__SPACED_REMARK = -150,
  uni_funky__MULTILINE_REMARK = -151,
  uni_funky__REMARK_LINES = -152,
  uni_funky__DUMMY_REMARK = -153
};

enum {
  var__START = FIRST_VAR-1,
  var_funky__node_type_of, // attribute
  var_std__assign, // extern
  var_funky__line_no_of, // attribute
  var_funky__skip_of, // attribute
  var_funky__STATEMENT, // initialized
  var_funky__INLINE_STATEMENT, // initialized
  var_funky__ATTRIBUTE_VALUE_PAIR, // initialized
  var_funky__TYPE_FUNCTION, // initialized
  var_funky__METHOD_VALUE_PAIR, // initialized
  var_funky__PAIR, // initialized
  var_funky__NAMESPACE_INSTRUCTION, // initialized
  var_funky__REQUIRE_INSTRUCTION, // initialized
  var_funky__USING_INSTRUCTION, // initialized
  var_funky__ALIAS_INSTRUCTION, // initialized
  var_funky__RESOLVE_INSTRUCTION, // initialized
  var_funky__ALLOW_INSTRUCTION, // initialized
  var_funky__ALIAS, // initialized
  var_funky__VERSION_NO, // initialized
  var_funky__UNSTABLE, // initialized
  var_funky__ALLOW_HIDDEN, // initialized
  var_funky__ALLOW_UNUSED, // initialized
  var_funky__FUNCTOR, // initialized
  var_funky__FUNCTION_CALL_EXTENSION, // initialized
  var_funky__ATTRIBUTE_ACCESS_EXTENSION, // initialized
  var_funky__INLINE_FUNCTOR, // initialized
  var_funky__INLINE_FUNCTION_CALL_EXTENSION, // initialized
  var_funky__INLINE_ATTRIBUTE_ACCESS_EXTENSION, // initialized
  var_funky__IO_CALL, // initialized
  var_funky__FUNCTION_CALL, // initialized
  var_funky__FUNCTION_CALL_ARGUMENTS, // initialized
  var_funky__INLINE_RETURN, // initialized
  var_funky__ATTRIBUTE_ACCESS, // initialized
  var_funky__SPACED_ARGUMENTS, // initialized
  var_funky__SPACED_STATEMENT_ARGUMENTS, // initialized
  var_funky__ARGUMENTS, // initialized
  var_funky__EVEN_MORE_STATEMENT_ARGUMENTS, // initialized
  var_funky__MULTILINE_ARGUMENTS, // initialized
  var_funky__TAGGED_MULTILINE_ARGUMENTS, // initialized
  var_funky__REMARK_AND_MULTILINE_FUNCTION_CALL, // initialized
  var_funky__DUMMY_DEFINITION, // initialized
  var_funky__VARIABLE, // initialized
  var_funky__DEFINITION, // initialized
  var_funky__REDEFINITION, // initialized
  var_funky__UPDATE, // initialized
  var_funky__EXPRESSION, // initialized
  var_funky__KEY_VALUE, // initialized
  var_funky__SEQUENCE_EXPRESSION, // initialized
  var_funky__COMMA, // initialized
  var_funky__COMMA_EXPRESSION, // initialized
  var_funky__CONDITIONAL_EXPRESSION, // initialized
  var_funky__AND, // initialized
  var_funky__AND_EXPRESSION, // initialized
  var_funky__OR, // initialized
  var_funky__OR_EXPRESSION, // initialized
  var_funky__NAMED_OPERATOR_EXPRESSION, // initialized
  var_funky__NAMED_OPERATOR, // initialized
  var_funky__RANGE_EXPRESSION, // initialized
  var_funky__RANGE, // initialized
  var_funky__RELATIONAL_EXPRESSION, // initialized
  var_funky__EQUAL, // initialized
  var_funky__NOT_EQUAL, // initialized
  var_funky__LESS_EQUAL, // initialized
  var_funky__LESS_THAN, // initialized
  var_funky__GREATER_EQUAL, // initialized
  var_funky__GREATER_THAN, // initialized
  var_funky__TAGGED_BIT_EXPRESSION, // initialized
  var_funky__BIT_EXPRESSION, // initialized
  var_funky__SHIFT_LEFT, // initialized
  var_funky__SHIFT_RIGHT, // initialized
  var_funky__BIT_AND, // initialized
  var_funky__BIT_AND2, // initialized
  var_funky__BIT_OR, // initialized
  var_funky__BIT_OR2, // initialized
  var_funky__BIT_XOR, // initialized
  var_funky__BIT_XOR2, // initialized
  var_funky__TAGGED_ADDITIVE_EXPRESSION, // initialized
  var_funky__ADDITIVE_EXPRESSION, // initialized
  var_funky__PLUS, // initialized
  var_funky__PLUS2, // initialized
  var_funky__MINUS, // initialized
  var_funky__TAGGED_MULTIPLICATIVE_EXPRESSION, // initialized
  var_funky__MULTIPLICATIVE_EXPRESSION, // initialized
  var_funky__TIMES, // initialized
  var_funky__TIMES2, // initialized
  var_funky__OVER, // initialized
  var_funky__PARENTHESED_EXPRESSION, // initialized
  var_funky__BACKQUOTED, // initialized
  var_funky__NEGATION, // initialized
  var_funky__MULTILINE_OPERATOR, // initialized
  var_funky__MULTILINE_PLUS, // initialized
  var_funky__MULTILINE_MINUS, // initialized
  var_funky__MULTILINE_MINUS_WITH_REMARK, // initialized
  var_funky__MULTILINE_TIMES, // initialized
  var_funky__MULTILINE_OVER, // initialized
  var_funky__MULTILINE_OVER_WITH_REMARK, // initialized
  var_funky__MULTILINE_SHIFT_LEFT, // initialized
  var_funky__MULTILINE_SHIFT_RIGHT, // initialized
  var_funky__MULTILINE_EQUAL, // initialized
  var_funky__MULTILINE_NOT_EQUAL, // initialized
  var_funky__MULTILINE_LESS_EQUAL, // initialized
  var_funky__MULTILINE_LESS_THAN, // initialized
  var_funky__MULTILINE_GREATER_EQUAL, // initialized
  var_funky__MULTILINE_GREATER_THAN, // initialized
  var_funky__MULTILINE_AND, // initialized
  var_funky__MULTILINE_OR, // initialized
  var_funky__MULTILINE_BIT_AND, // initialized
  var_funky__MULTILINE_BIT_AND_WITH_REMARK, // initialized
  var_funky__MULTILINE_BIT_OR, // initialized
  var_funky__MULTILINE_BIT_XOR, // initialized
  var_funky__MULTILINE_ASSIGN, // initialized
  var_funky__INLINE_ATTRIBUTE_VALUE_PAIR, // initialized
  var_funky__INLINE_METHOD_VALUE_PAIR, // initialized
  var_funky__EXPRESSION_AND_INLINE_ARGUMENTS, // initialized
  var_funky__SPACED_INLINE_ARGUMENTS, // initialized
  var_funky__NUMERIC_LITERAL, // initialized
  var_funky__AT_CHARACTER_LITERAL, // initialized
  var_funky__NAMED_CHARACTER_LITERAL, // initialized
  var_funky__NUMERIC_CHARACTER_LITERAL, // initialized
  var_funky__CHARACTER_LITERAL, // initialized
  var_funky__STRING_LITERAL, // initialized
  var_funky__SOME_STRING_COMPONENTS, // initialized
  var_funky__CHARACTER_SEQUENCE, // initialized
  var_funky__MULTILINE_STRING_LITERAL, // initialized
  var_funky__NEWLINE, // initialized
  var_funky__SOME_STRING_LINE_COMPONENTS, // initialized
  var_funky__STRING_LINE_END, // initialized
  var_funky__AT_CHARACTER, // initialized
  var_funky__TAGGED_EMPTY_CHARACTER, // initialized
  var_funky__EMPTY_CHARACTER, // initialized
  var_funky__ESCAPE_EXPRESSION, // initialized
  var_funky__NAMED_CHARACTER, // initialized
  var_funky__NUMERIC_CHARACTER, // initialized
  var_funky__STRING_LINE_CHARACTER_SEQUENCE, // initialized
  var_funky__UNIQUE, // initialized
  var_funky__ATTRIBUTE, // initialized
  var_funky__ATTRIBUTE_WITH_SETTER, // initialized
  var_funky__BODY, // initialized
  var_funky__LINE_END_STATEMENT, // initialized
  var_funky__INLINE_BODY, // initialized
  var_funky__STATEMENTS, // initialized
  var_funky__ONE_OR_MORE_INLINE_PARAMETERS, // initialized
  var_funky__OPEN_PARAMETERS, // initialized
  var_funky__INLINE_PARAMETER, // initialized
  var_funky__PARAMETER, // initialized
  var_funky__MYSELF, // initialized
  var_funky__REST, // initialized
  var_funky__INITIAL_VALUE, // initialized
  var_funky__CLOSE_PARAMETERS, // initialized
  var_funky__RETURN_EXPRESSION, // initialized
  var_funky__RETURN, // initialized
  var_funky__REMARK, // initialized
  var_funky__LINE_END_AND_LINE_REMARKS, // initialized
  var_funky__LINE_REMARKS, // initialized
  var_funky__SPACED_REMARK, // initialized
  var_funky__MULTILINE_REMARK, // initialized
  var_funky__REMARK_LINES, // initialized
  var_funky__DUMMY_REMARK, // initialized
  var_funky__source_group_of, // attribute
  var_funky__source_position_of, // attribute
  var_funky__access_of, // attribute with setter
  var_funky__alias_of, // attribute with setter
  var_funky__and2_of, // attribute with setter
  var_funky__argument_of, // attribute with setter
  var_funky__arguments_of, // attribute with setter
  var_funky__body_of, // attribute with setter
  var_funky__call_of, // attribute with setter
  var_funky__calls_of, // attribute with setter
  var_funky__character_of, // attribute with setter
  var_funky__characters_of, // attribute with setter
  var_funky__component_of, // attribute with setter
  var_funky__components_of, // attribute with setter
  var_funky__digits_of, // attribute with setter
  var_funky__expression_of, // attribute with setter
  var_funky__extensions_of, // attribute with setter
  var_funky__filename_of, // attribute with setter
  var_funky__head_of, // attribute with setter
  var_funky__identifier_of, // attribute with setter
  var_funky__lines_of, // attribute with setter
  var_funky__major_of, // attribute with setter
  var_funky__minor_of, // attribute with setter
  var_funky__name_of, // attribute with setter
  var_funky__operand_of, // attribute with setter
  var_funky__operator_of, // attribute with setter
  var_funky__option_of, // attribute with setter
  var_funky__or2_of, // attribute with setter
  var_funky__pair_of, // attribute with setter
  var_funky__parameter_of, // attribute with setter
  var_funky__parameters_of, // attribute with setter
  var_funky__plus2_of, // attribute with setter
  var_funky__pragma_of, // attribute with setter
  var_funky__remark_of, // attribute with setter
  var_funky__remarks_of, // attribute with setter
  var_funky__sign_of, // attribute with setter
  var_funky__statement_of, // attribute with setter
  var_funky__statements_of, // attribute with setter
  var_funky__text_of, // attribute with setter
  var_funky__times2_of, // attribute with setter
  var_funky__version_of, // attribute with setter
  var_funky__xor2_of, // attribute with setter
  var_funky_types__node, // derived
  var_std_types__object, // extern
  var_undefined, // extern
  var_funky_types__fieldless_node, // derived
  var_funky_types__simple_name, // derived
  var_funky_types__identifier_and_expression, // derived
  var_funky_types__simple_expression, // derived
  var_funky_types__namespace_meta_instruction, // derived
  var_funky_types__statement, // derived
  var_empty_list, // extern
  var_funky_types__inline_statement, // derived
  var_funky_types__pair, // derived
  var_funky_types__attribute_value_pair, // derived
  var_funky_types__body, // derived
  var_funky_types__type_function, // derived
  var_funky_types__method_value_pair, // derived
  var_funky_types__namespace_instruction, // derived
  var_funky_types__require_instruction, // derived
  var_funky_types__using_instruction, // derived
  var_funky_types__alias_instruction, // derived
  var_funky_types__resolve_instruction, // derived
  var_funky_types__allow_instruction, // derived
  var_funky_types__alias, // derived
  var_funky_types__version_no, // derived
  var_funky_types__unstable, // derived
  var_funky_types__allow_hidden, // derived
  var_funky_types__allow_unused, // derived
  var_funky_types__functor, // derived
  var_funky_types__function_call_extension, // derived
  var_funky_types__attribute_access_extension, // derived
  var_funky_types__inline_functor, // derived
  var_funky_types__inline_function_call_extension, // derived
  var_funky_types__inline_attribute_access_extension, // derived
  var_funky_types__io_call, // derived
  var_funky_types__function_call, // derived
  var_funky_types__function_call_arguments, // derived
  var_funky_types__inline_return, // derived
  var_funky_types__attribute_access, // derived
  var_funky_types__spaced_arguments, // derived
  var_funky_types__spaced_statement_arguments, // derived
  var_funky_types__arguments, // derived
  var_funky_types__even_more_statement_arguments, // derived
  var_funky_types__multiline_arguments, // derived
  var_funky_types__tagged_multiline_arguments, // derived
  var_funky_types__remark_and_multiline_function_call, // derived
  var_funky_types__dummy_definition, // derived
  var_funky_types__variable, // derived
  var_funky_types__definition, // derived
  var_funky_types__redefinition, // derived
  var_funky_types__update, // derived
  var_funky_types__expression, // derived
  var_funky_types__sequence_expression, // derived
  var_funky_types__key_value, // derived
  var_funky_types__comma_expression, // derived
  var_funky_types__comma, // derived
  var_funky_types__conditional_expression, // derived
  var_funky_types__and_expression, // derived
  var_funky_types__and, // derived
  var_funky_types__or_expression, // derived
  var_funky_types__or, // derived
  var_funky_types__named_operator_expression, // derived
  var_funky_types__named_operator, // derived
  var_funky_types__range_expression, // derived
  var_funky_types__relational_expression, // derived
  var_funky_types__range, // derived
  var_funky_types__tagged_bit_expression, // derived
  var_funky_types__equal, // derived
  var_funky_types__not_equal, // derived
  var_funky_types__less_equal, // derived
  var_funky_types__less_than, // derived
  var_funky_types__greater_equal, // derived
  var_funky_types__greater_than, // derived
  var_funky_types__bit_expression, // derived
  var_funky_types__tagged_additive_expression, // derived
  var_funky_types__shift_left, // derived
  var_funky_types__shift_right, // derived
  var_funky_types__bit_and2, // derived
  var_funky_types__bit_and, // derived
  var_funky_types__bit_or2, // derived
  var_funky_types__bit_or, // derived
  var_funky_types__bit_xor2, // derived
  var_funky_types__bit_xor, // derived
  var_funky_types__additive_expression, // derived
  var_funky_types__plus2, // derived
  var_funky_types__plus, // derived
  var_funky_types__tagged_multiplicative_expression, // derived
  var_funky_types__minus, // derived
  var_funky_types__multiplicative_expression, // derived
  var_funky_types__times2, // derived
  var_funky_types__times, // derived
  var_funky_types__over, // derived
  var_funky_types__parenthesed_expression, // derived
  var_funky_types__backquoted, // derived
  var_funky_types__negation, // derived
  var_funky_types__multiline_operator, // derived
  var_funky_types__multiline_plus, // derived
  var_funky_types__multiline_minus, // derived
  var_funky_types__multiline_minus_with_remark, // derived
  var_funky_types__multiline_times, // derived
  var_funky_types__multiline_over, // derived
  var_funky_types__multiline_over_with_remark, // derived
  var_funky_types__multiline_shift_left, // derived
  var_funky_types__multiline_shift_right, // derived
  var_funky_types__multiline_equal, // derived
  var_funky_types__multiline_not_equal, // derived
  var_funky_types__multiline_less_equal, // derived
  var_funky_types__multiline_less_than, // derived
  var_funky_types__multiline_greater_equal, // derived
  var_funky_types__multiline_greater_than, // derived
  var_funky_types__multiline_and, // derived
  var_funky_types__multiline_or, // derived
  var_funky_types__multiline_bit_and, // derived
  var_funky_types__multiline_bit_and_with_remark, // derived
  var_funky_types__multiline_bit_or, // derived
  var_funky_types__multiline_bit_xor, // derived
  var_funky_types__multiline_assign, // derived
  var_funky_types__inline_attribute_value_pair, // derived
  var_funky_types__inline_method_value_pair, // derived
  var_funky_types__expression_and_inline_arguments, // derived
  var_funky_types__spaced_inline_arguments, // derived
  var_funky_types__numeric_literal, // derived
  var_funky_types__at_character_literal, // derived
  var_funky_types__named_character_literal, // derived
  var_funky_types__numeric_character_literal, // derived
  var_funky_types__character_literal, // derived
  var_funky_types__string_literal, // derived
  var_funky_types__some_string_components, // derived
  var_funky_types__character_sequence, // derived
  var_funky_types__multiline_string_literal, // derived
  var_funky_types__newline, // derived
  var_funky_types__some_string_line_components, // derived
  var_funky_types__string_line_end, // derived
  var_funky_types__at_character, // derived
  var_funky_types__tagged_empty_character, // derived
  var_funky_types__empty_character, // derived
  var_funky_types__escape_expression, // derived
  var_funky_types__named_character, // derived
  var_funky_types__numeric_character, // derived
  var_funky_types__string_line_character_sequence, // derived
  var_funky_types__unique, // derived
  var_funky_types__attribute, // derived
  var_funky_types__attribute_with_setter, // derived
  var_funky_types__line_end_statement, // derived
  var_funky_types__inline_body, // derived
  var_funky_types__statements, // derived
  var_funky_types__one_or_more_inline_parameters, // derived
  var_funky_types__open_parameters, // derived
  var_funky_types__inline_parameter, // derived
  var_funky_types__parameter, // derived
  var_funky_types__myself, // derived
  var_funky_types__rest, // derived
  var_funky_types__initial_value, // derived
  var_funky_types__close_parameters, // derived
  var_funky_types__return_expression, // derived
  var_funky_types__return, // derived
  var_funky_types__remark, // derived
  var_funky_types__line_end_and_line_remarks, // derived
  var_funky_types__line_remarks, // derived
  var_funky_types__spaced_remark, // derived
  var_funky_types__multiline_remark, // derived
  var_funky_types__remark_lines, // derived
  var_funky_types__dummy_remark, // derived
  var__END
};


static FUNKY_CONSTANT constants_table[] = {
  {FLT_UNIQUE, 0, {.str_8 = "funky::STATEMENT"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::INLINE_STATEMENT"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::ATTRIBUTE_VALUE_PAIR"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::TYPE_FUNCTION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::METHOD_VALUE_PAIR"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::PAIR"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::NAMESPACE_INSTRUCTION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::REQUIRE_INSTRUCTION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::USING_INSTRUCTION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::ALIAS_INSTRUCTION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::RESOLVE_INSTRUCTION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::ALLOW_INSTRUCTION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::ALIAS"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::VERSION_NO"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::UNSTABLE"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::ALLOW_HIDDEN"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::ALLOW_UNUSED"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::FUNCTOR"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::FUNCTION_CALL_EXTENSION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::ATTRIBUTE_ACCESS_EXTENSION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::INLINE_FUNCTOR"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::INLINE_FUNCTION_CALL_EXTENSION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::INLINE_ATTRIBUTE_ACCESS_EXTENSION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::IO_CALL"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::FUNCTION_CALL"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::FUNCTION_CALL_ARGUMENTS"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::INLINE_RETURN"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::ATTRIBUTE_ACCESS"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::SPACED_ARGUMENTS"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::SPACED_STATEMENT_ARGUMENTS"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::ARGUMENTS"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::EVEN_MORE_STATEMENT_ARGUMENTS"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MULTILINE_ARGUMENTS"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::TAGGED_MULTILINE_ARGUMENTS"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::REMARK_AND_MULTILINE_FUNCTION_CALL"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::DUMMY_DEFINITION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::VARIABLE"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::DEFINITION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::REDEFINITION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::UPDATE"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::EXPRESSION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::KEY_VALUE"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::SEQUENCE_EXPRESSION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::COMMA"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::COMMA_EXPRESSION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::CONDITIONAL_EXPRESSION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::AND"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::AND_EXPRESSION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::OR"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::OR_EXPRESSION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::NAMED_OPERATOR_EXPRESSION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::NAMED_OPERATOR"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::RANGE_EXPRESSION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::RANGE"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::RELATIONAL_EXPRESSION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::EQUAL"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::NOT_EQUAL"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::LESS_EQUAL"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::LESS_THAN"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::GREATER_EQUAL"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::GREATER_THAN"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::TAGGED_BIT_EXPRESSION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::BIT_EXPRESSION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::SHIFT_LEFT"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::SHIFT_RIGHT"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::BIT_AND"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::BIT_AND2"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::BIT_OR"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::BIT_OR2"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::BIT_XOR"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::BIT_XOR2"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::TAGGED_ADDITIVE_EXPRESSION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::ADDITIVE_EXPRESSION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::PLUS"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::PLUS2"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MINUS"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::TAGGED_MULTIPLICATIVE_EXPRESSION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MULTIPLICATIVE_EXPRESSION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::TIMES"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::TIMES2"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::OVER"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::PARENTHESED_EXPRESSION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::BACKQUOTED"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::NEGATION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MULTILINE_OPERATOR"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MULTILINE_PLUS"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MULTILINE_MINUS"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MULTILINE_MINUS_WITH_REMARK"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MULTILINE_TIMES"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MULTILINE_OVER"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MULTILINE_OVER_WITH_REMARK"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MULTILINE_SHIFT_LEFT"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MULTILINE_SHIFT_RIGHT"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MULTILINE_EQUAL"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MULTILINE_NOT_EQUAL"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MULTILINE_LESS_EQUAL"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MULTILINE_LESS_THAN"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MULTILINE_GREATER_EQUAL"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MULTILINE_GREATER_THAN"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MULTILINE_AND"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MULTILINE_OR"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MULTILINE_BIT_AND"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MULTILINE_BIT_AND_WITH_REMARK"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MULTILINE_BIT_OR"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MULTILINE_BIT_XOR"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MULTILINE_ASSIGN"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::INLINE_ATTRIBUTE_VALUE_PAIR"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::INLINE_METHOD_VALUE_PAIR"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::EXPRESSION_AND_INLINE_ARGUMENTS"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::SPACED_INLINE_ARGUMENTS"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::NUMERIC_LITERAL"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::AT_CHARACTER_LITERAL"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::NAMED_CHARACTER_LITERAL"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::NUMERIC_CHARACTER_LITERAL"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::CHARACTER_LITERAL"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::STRING_LITERAL"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::SOME_STRING_COMPONENTS"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::CHARACTER_SEQUENCE"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MULTILINE_STRING_LITERAL"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::NEWLINE"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::SOME_STRING_LINE_COMPONENTS"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::STRING_LINE_END"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::AT_CHARACTER"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::TAGGED_EMPTY_CHARACTER"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::EMPTY_CHARACTER"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::ESCAPE_EXPRESSION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::NAMED_CHARACTER"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::NUMERIC_CHARACTER"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::STRING_LINE_CHARACTER_SEQUENCE"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::UNIQUE"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::ATTRIBUTE"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::ATTRIBUTE_WITH_SETTER"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::BODY"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::LINE_END_STATEMENT"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::INLINE_BODY"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::STATEMENTS"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::ONE_OR_MORE_INLINE_PARAMETERS"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::OPEN_PARAMETERS"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::INLINE_PARAMETER"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::PARAMETER"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MYSELF"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::REST"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::INITIAL_VALUE"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::CLOSE_PARAMETERS"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::RETURN_EXPRESSION"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::RETURN"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::REMARK"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::LINE_END_AND_LINE_REMARKS"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::LINE_REMARKS"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::SPACED_REMARK"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MULTILINE_REMARK"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::REMARK_LINES"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::DUMMY_REMARK"}}
};

static ATTRIBUTE_DEFINITION funky_types__node__attributes[] = {
  {-var_funky__source_group_of, -var_undefined},
  {-var_funky__source_position_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION funky_types__simple_name__attributes[] = {
  {-var_funky__name_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION funky_types__identifier_and_expression__attributes[] = {
  {-var_funky__identifier_of, -var_undefined},
  {-var_funky__expression_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION funky_types__simple_expression__attributes[] = {
  {-var_funky__expression_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION funky_types__namespace_meta_instruction__attributes[] = {
  {-var_funky__name_of, -var_undefined},
  {-var_funky__version_of, -var_undefined},
  {-var_funky__remarks_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION funky_types__statement__attributes[] = {
  {-var_funky__node_type_of, -var_funky__STATEMENT},
  {-var_funky__head_of, -var_undefined},
  {-var_funky__arguments_of, -var_empty_list}
};

static ATTRIBUTE_DEFINITION funky_types__inline_statement__attributes[] = {
  {-var_funky__node_type_of, -var_funky__INLINE_STATEMENT},
  {-var_funky__head_of, -var_undefined},
  {-var_funky__arguments_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION funky_types__attribute_value_pair__attributes[] = {
  {-var_funky__node_type_of, -var_funky__ATTRIBUTE_VALUE_PAIR}
};

static ATTRIBUTE_DEFINITION funky_types__type_function__attributes[] = {
  {-var_funky__node_type_of, -var_funky__TYPE_FUNCTION}
};

static ATTRIBUTE_DEFINITION funky_types__method_value_pair__attributes[] = {
  {-var_funky__node_type_of, -var_funky__METHOD_VALUE_PAIR}
};

static ATTRIBUTE_DEFINITION funky_types__pair__attributes[] = {
  {-var_funky__node_type_of, -var_funky__PAIR},
  {-var_funky__identifier_of, -var_undefined},
  {-var_funky__argument_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION funky_types__namespace_instruction__attributes[] = {
  {-var_funky__node_type_of, -var_funky__NAMESPACE_INSTRUCTION}
};

static ATTRIBUTE_DEFINITION funky_types__require_instruction__attributes[] = {
  {-var_funky__node_type_of, -var_funky__REQUIRE_INSTRUCTION},
  {-var_funky__filename_of, -var_undefined},
  {-var_funky__remarks_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION funky_types__using_instruction__attributes[] = {
  {-var_funky__node_type_of, -var_funky__USING_INSTRUCTION}
};

static ATTRIBUTE_DEFINITION funky_types__alias_instruction__attributes[] = {
  {-var_funky__node_type_of, -var_funky__ALIAS_INSTRUCTION},
  {-var_funky__alias_of, -var_undefined},
  {-var_funky__sign_of, -var_undefined},
  {-var_funky__name_of, -var_undefined},
  {-var_funky__remarks_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION funky_types__resolve_instruction__attributes[] = {
  {-var_funky__node_type_of, -var_funky__RESOLVE_INSTRUCTION}
};

static ATTRIBUTE_DEFINITION funky_types__allow_instruction__attributes[] = {
  {-var_funky__node_type_of, -var_funky__ALLOW_INSTRUCTION},
  {-var_funky__pragma_of, -var_undefined},
  {-var_funky__remarks_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION funky_types__alias__attributes[] = {
  {-var_funky__node_type_of, -var_funky__ALIAS}
};

static ATTRIBUTE_DEFINITION funky_types__version_no__attributes[] = {
  {-var_funky__node_type_of, -var_funky__VERSION_NO},
  {-var_funky__major_of, -var_undefined},
  {-var_funky__minor_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION funky_types__unstable__attributes[] = {
  {-var_funky__node_type_of, -var_funky__UNSTABLE}
};

static ATTRIBUTE_DEFINITION funky_types__allow_hidden__attributes[] = {
  {-var_funky__node_type_of, -var_funky__ALLOW_HIDDEN}
};

static ATTRIBUTE_DEFINITION funky_types__allow_unused__attributes[] = {
  {-var_funky__node_type_of, -var_funky__ALLOW_UNUSED}
};

static ATTRIBUTE_DEFINITION funky_types__functor__attributes[] = {
  {-var_funky__node_type_of, -var_funky__FUNCTOR},
  {-var_funky__identifier_of, -var_undefined},
  {-var_funky__extensions_of, -var_empty_list}
};

static ATTRIBUTE_DEFINITION funky_types__function_call_extension__attributes[] = {
  {-var_funky__node_type_of, -var_funky__FUNCTION_CALL_EXTENSION},
  {-var_funky__call_of, -var_undefined},
  {-var_funky__extensions_of, -var_empty_list}
};

static ATTRIBUTE_DEFINITION funky_types__attribute_access_extension__attributes[] = {
  {-var_funky__node_type_of, -var_funky__ATTRIBUTE_ACCESS_EXTENSION},
  {-var_funky__access_of, -var_undefined},
  {-var_funky__extensions_of, -var_empty_list}
};

static ATTRIBUTE_DEFINITION funky_types__inline_functor__attributes[] = {
  {-var_funky__node_type_of, -var_funky__INLINE_FUNCTOR}
};

static ATTRIBUTE_DEFINITION funky_types__inline_function_call_extension__attributes[] = {
  {-var_funky__node_type_of, -var_funky__INLINE_FUNCTION_CALL_EXTENSION},
  {-var_funky__call_of, -var_undefined},
  {-var_funky__extensions_of, -var_empty_list}
};

static ATTRIBUTE_DEFINITION funky_types__inline_attribute_access_extension__attributes[] = {
  {-var_funky__node_type_of, -var_funky__INLINE_ATTRIBUTE_ACCESS_EXTENSION},
  {-var_funky__access_of, -var_undefined},
  {-var_funky__extensions_of, -var_empty_list}
};

static ATTRIBUTE_DEFINITION funky_types__io_call__attributes[] = {
  {-var_funky__node_type_of, -var_funky__IO_CALL}
};

static ATTRIBUTE_DEFINITION funky_types__function_call__attributes[] = {
  {-var_funky__node_type_of, -var_funky__FUNCTION_CALL},
  {-var_funky__arguments_of, -var_empty_list}
};

static ATTRIBUTE_DEFINITION funky_types__function_call_arguments__attributes[] = {
  {-var_funky__node_type_of, -var_funky__FUNCTION_CALL_ARGUMENTS}
};

static ATTRIBUTE_DEFINITION funky_types__inline_return__attributes[] = {
  {-var_funky__node_type_of, -var_funky__INLINE_RETURN}
};

static ATTRIBUTE_DEFINITION funky_types__attribute_access__attributes[] = {
  {-var_funky__node_type_of, -var_funky__ATTRIBUTE_ACCESS},
  {-var_funky__identifier_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION funky_types__spaced_arguments__attributes[] = {
  {-var_funky__node_type_of, -var_funky__SPACED_ARGUMENTS},
  {-var_funky__arguments_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION funky_types__spaced_statement_arguments__attributes[] = {
  {-var_funky__node_type_of, -var_funky__SPACED_STATEMENT_ARGUMENTS},
  {-var_funky__arguments_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION funky_types__arguments__attributes[] = {
  {-var_funky__node_type_of, -var_funky__ARGUMENTS},
  {-var_funky__argument_of, -var_undefined},
  {-var_funky__arguments_of, -var_empty_list}
};

static ATTRIBUTE_DEFINITION funky_types__even_more_statement_arguments__attributes[] = {
  {-var_funky__node_type_of, -var_funky__EVEN_MORE_STATEMENT_ARGUMENTS},
  {-var_funky__argument_of, -var_undefined},
  {-var_funky__arguments_of, -var_empty_list}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_arguments__attributes[] = {
  {-var_funky__node_type_of, -var_funky__MULTILINE_ARGUMENTS}
};

static ATTRIBUTE_DEFINITION funky_types__tagged_multiline_arguments__attributes[] = {
  {-var_funky__node_type_of, -var_funky__TAGGED_MULTILINE_ARGUMENTS}
};

static ATTRIBUTE_DEFINITION funky_types__remark_and_multiline_function_call__attributes[] = {
  {-var_funky__node_type_of, -var_funky__REMARK_AND_MULTILINE_FUNCTION_CALL},
  {-var_funky__remark_of, -var_undefined},
  {-var_funky__arguments_of, -var_empty_list}
};

static ATTRIBUTE_DEFINITION funky_types__dummy_definition__attributes[] = {
  {-var_funky__node_type_of, -var_funky__DUMMY_DEFINITION}
};

static ATTRIBUTE_DEFINITION funky_types__variable__attributes[] = {
  {-var_funky__node_type_of, -var_funky__VARIABLE}
};

static ATTRIBUTE_DEFINITION funky_types__definition__attributes[] = {
  {-var_funky__node_type_of, -var_funky__DEFINITION}
};

static ATTRIBUTE_DEFINITION funky_types__redefinition__attributes[] = {
  {-var_funky__node_type_of, -var_funky__REDEFINITION}
};

static ATTRIBUTE_DEFINITION funky_types__update__attributes[] = {
  {-var_funky__node_type_of, -var_funky__UPDATE}
};

static ATTRIBUTE_DEFINITION funky_types__expression__attributes[] = {
  {-var_funky__node_type_of, -var_funky__EXPRESSION},
  {-var_funky__expression_of, -var_undefined},
  {-var_funky__operator_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION funky_types__key_value__attributes[] = {
  {-var_funky__node_type_of, -var_funky__KEY_VALUE}
};

static ATTRIBUTE_DEFINITION funky_types__sequence_expression__attributes[] = {
  {-var_funky__node_type_of, -var_funky__SEQUENCE_EXPRESSION}
};

static ATTRIBUTE_DEFINITION funky_types__comma__attributes[] = {
  {-var_funky__node_type_of, -var_funky__COMMA}
};

static ATTRIBUTE_DEFINITION funky_types__comma_expression__attributes[] = {
  {-var_funky__node_type_of, -var_funky__COMMA_EXPRESSION}
};

static ATTRIBUTE_DEFINITION funky_types__conditional_expression__attributes[] = {
  {-var_funky__node_type_of, -var_funky__CONDITIONAL_EXPRESSION}
};

static ATTRIBUTE_DEFINITION funky_types__and__attributes[] = {
  {-var_funky__node_type_of, -var_funky__AND}
};

static ATTRIBUTE_DEFINITION funky_types__and_expression__attributes[] = {
  {-var_funky__node_type_of, -var_funky__AND_EXPRESSION}
};

static ATTRIBUTE_DEFINITION funky_types__or__attributes[] = {
  {-var_funky__node_type_of, -var_funky__OR}
};

static ATTRIBUTE_DEFINITION funky_types__or_expression__attributes[] = {
  {-var_funky__node_type_of, -var_funky__OR_EXPRESSION}
};

static ATTRIBUTE_DEFINITION funky_types__named_operator_expression__attributes[] = {
  {-var_funky__node_type_of, -var_funky__NAMED_OPERATOR_EXPRESSION}
};

static ATTRIBUTE_DEFINITION funky_types__named_operator__attributes[] = {
  {-var_funky__node_type_of, -var_funky__NAMED_OPERATOR}
};

static ATTRIBUTE_DEFINITION funky_types__range_expression__attributes[] = {
  {-var_funky__node_type_of, -var_funky__RANGE_EXPRESSION}
};

static ATTRIBUTE_DEFINITION funky_types__range__attributes[] = {
  {-var_funky__node_type_of, -var_funky__RANGE}
};

static ATTRIBUTE_DEFINITION funky_types__relational_expression__attributes[] = {
  {-var_funky__node_type_of, -var_funky__RELATIONAL_EXPRESSION}
};

static ATTRIBUTE_DEFINITION funky_types__equal__attributes[] = {
  {-var_funky__node_type_of, -var_funky__EQUAL}
};

static ATTRIBUTE_DEFINITION funky_types__not_equal__attributes[] = {
  {-var_funky__node_type_of, -var_funky__NOT_EQUAL}
};

static ATTRIBUTE_DEFINITION funky_types__less_equal__attributes[] = {
  {-var_funky__node_type_of, -var_funky__LESS_EQUAL}
};

static ATTRIBUTE_DEFINITION funky_types__less_than__attributes[] = {
  {-var_funky__node_type_of, -var_funky__LESS_THAN}
};

static ATTRIBUTE_DEFINITION funky_types__greater_equal__attributes[] = {
  {-var_funky__node_type_of, -var_funky__GREATER_EQUAL}
};

static ATTRIBUTE_DEFINITION funky_types__greater_than__attributes[] = {
  {-var_funky__node_type_of, -var_funky__GREATER_THAN}
};

static ATTRIBUTE_DEFINITION funky_types__tagged_bit_expression__attributes[] = {
  {-var_funky__node_type_of, -var_funky__TAGGED_BIT_EXPRESSION}
};

static ATTRIBUTE_DEFINITION funky_types__bit_expression__attributes[] = {
  {-var_funky__node_type_of, -var_funky__BIT_EXPRESSION}
};

static ATTRIBUTE_DEFINITION funky_types__shift_left__attributes[] = {
  {-var_funky__node_type_of, -var_funky__SHIFT_LEFT}
};

static ATTRIBUTE_DEFINITION funky_types__shift_right__attributes[] = {
  {-var_funky__node_type_of, -var_funky__SHIFT_RIGHT}
};

static ATTRIBUTE_DEFINITION funky_types__bit_and__attributes[] = {
  {-var_funky__node_type_of, -var_funky__BIT_AND}
};

static ATTRIBUTE_DEFINITION funky_types__bit_and2__attributes[] = {
  {-var_funky__node_type_of, -var_funky__BIT_AND2}
};

static ATTRIBUTE_DEFINITION funky_types__bit_or__attributes[] = {
  {-var_funky__node_type_of, -var_funky__BIT_OR}
};

static ATTRIBUTE_DEFINITION funky_types__bit_or2__attributes[] = {
  {-var_funky__node_type_of, -var_funky__BIT_OR2}
};

static ATTRIBUTE_DEFINITION funky_types__bit_xor__attributes[] = {
  {-var_funky__node_type_of, -var_funky__BIT_XOR}
};

static ATTRIBUTE_DEFINITION funky_types__bit_xor2__attributes[] = {
  {-var_funky__node_type_of, -var_funky__BIT_XOR2}
};

static ATTRIBUTE_DEFINITION funky_types__tagged_additive_expression__attributes[] = {
  {-var_funky__node_type_of, -var_funky__TAGGED_ADDITIVE_EXPRESSION}
};

static ATTRIBUTE_DEFINITION funky_types__additive_expression__attributes[] = {
  {-var_funky__node_type_of, -var_funky__ADDITIVE_EXPRESSION}
};

static ATTRIBUTE_DEFINITION funky_types__plus__attributes[] = {
  {-var_funky__node_type_of, -var_funky__PLUS}
};

static ATTRIBUTE_DEFINITION funky_types__plus2__attributes[] = {
  {-var_funky__node_type_of, -var_funky__PLUS2}
};

static ATTRIBUTE_DEFINITION funky_types__minus__attributes[] = {
  {-var_funky__node_type_of, -var_funky__MINUS}
};

static ATTRIBUTE_DEFINITION funky_types__tagged_multiplicative_expression__attributes[] = {
  {-var_funky__node_type_of, -var_funky__TAGGED_MULTIPLICATIVE_EXPRESSION}
};

static ATTRIBUTE_DEFINITION funky_types__multiplicative_expression__attributes[] = {
  {-var_funky__node_type_of, -var_funky__MULTIPLICATIVE_EXPRESSION}
};

static ATTRIBUTE_DEFINITION funky_types__times__attributes[] = {
  {-var_funky__node_type_of, -var_funky__TIMES}
};

static ATTRIBUTE_DEFINITION funky_types__times2__attributes[] = {
  {-var_funky__node_type_of, -var_funky__TIMES2}
};

static ATTRIBUTE_DEFINITION funky_types__over__attributes[] = {
  {-var_funky__node_type_of, -var_funky__OVER}
};

static ATTRIBUTE_DEFINITION funky_types__parenthesed_expression__attributes[] = {
  {-var_funky__node_type_of, -var_funky__PARENTHESED_EXPRESSION},
  {-var_funky__expression_of, -var_undefined},
  {-var_funky__calls_of, -var_empty_list}
};

static ATTRIBUTE_DEFINITION funky_types__backquoted__attributes[] = {
  {-var_funky__node_type_of, -var_funky__BACKQUOTED}
};

static ATTRIBUTE_DEFINITION funky_types__negation__attributes[] = {
  {-var_funky__node_type_of, -var_funky__NEGATION}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_operator__attributes[] = {
  {-var_funky__node_type_of, -var_funky__MULTILINE_OPERATOR}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_plus__attributes[] = {
  {-var_funky__node_type_of, -var_funky__MULTILINE_PLUS}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_minus__attributes[] = {
  {-var_funky__node_type_of, -var_funky__MULTILINE_MINUS},
  {-var_funky__remark_of, -var_undefined},
  {-var_funky__arguments_of, -var_empty_list}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_minus_with_remark__attributes[] = {
  {-var_funky__node_type_of, -var_funky__MULTILINE_MINUS_WITH_REMARK}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_times__attributes[] = {
  {-var_funky__node_type_of, -var_funky__MULTILINE_TIMES}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_over__attributes[] = {
  {-var_funky__node_type_of, -var_funky__MULTILINE_OVER}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_over_with_remark__attributes[] = {
  {-var_funky__node_type_of, -var_funky__MULTILINE_OVER_WITH_REMARK}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_shift_left__attributes[] = {
  {-var_funky__node_type_of, -var_funky__MULTILINE_SHIFT_LEFT}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_shift_right__attributes[] = {
  {-var_funky__node_type_of, -var_funky__MULTILINE_SHIFT_RIGHT}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_equal__attributes[] = {
  {-var_funky__node_type_of, -var_funky__MULTILINE_EQUAL}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_not_equal__attributes[] = {
  {-var_funky__node_type_of, -var_funky__MULTILINE_NOT_EQUAL}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_less_equal__attributes[] = {
  {-var_funky__node_type_of, -var_funky__MULTILINE_LESS_EQUAL}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_less_than__attributes[] = {
  {-var_funky__node_type_of, -var_funky__MULTILINE_LESS_THAN}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_greater_equal__attributes[] = {
  {-var_funky__node_type_of, -var_funky__MULTILINE_GREATER_EQUAL}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_greater_than__attributes[] = {
  {-var_funky__node_type_of, -var_funky__MULTILINE_GREATER_THAN}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_and__attributes[] = {
  {-var_funky__node_type_of, -var_funky__MULTILINE_AND}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_or__attributes[] = {
  {-var_funky__node_type_of, -var_funky__MULTILINE_OR}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_bit_and__attributes[] = {
  {-var_funky__node_type_of, -var_funky__MULTILINE_BIT_AND}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_bit_and_with_remark__attributes[] = {
  {-var_funky__node_type_of, -var_funky__MULTILINE_BIT_AND_WITH_REMARK}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_bit_or__attributes[] = {
  {-var_funky__node_type_of, -var_funky__MULTILINE_BIT_OR}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_bit_xor__attributes[] = {
  {-var_funky__node_type_of, -var_funky__MULTILINE_BIT_XOR}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_assign__attributes[] = {
  {-var_funky__node_type_of, -var_funky__MULTILINE_ASSIGN}
};

static ATTRIBUTE_DEFINITION funky_types__inline_attribute_value_pair__attributes[] = {
  {-var_funky__node_type_of, -var_funky__INLINE_ATTRIBUTE_VALUE_PAIR}
};

static ATTRIBUTE_DEFINITION funky_types__inline_method_value_pair__attributes[] = {
  {-var_funky__node_type_of, -var_funky__INLINE_METHOD_VALUE_PAIR}
};

static ATTRIBUTE_DEFINITION funky_types__expression_and_inline_arguments__attributes[] = {
  {-var_funky__node_type_of, -var_funky__EXPRESSION_AND_INLINE_ARGUMENTS},
  {-var_funky__expression_of, -var_undefined},
  {-var_funky__arguments_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION funky_types__spaced_inline_arguments__attributes[] = {
  {-var_funky__node_type_of, -var_funky__SPACED_INLINE_ARGUMENTS}
};

static ATTRIBUTE_DEFINITION funky_types__numeric_literal__attributes[] = {
  {-var_funky__node_type_of, -var_funky__NUMERIC_LITERAL},
  {-var_funky__digits_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION funky_types__at_character_literal__attributes[] = {
  {-var_funky__node_type_of, -var_funky__AT_CHARACTER_LITERAL}
};

static ATTRIBUTE_DEFINITION funky_types__named_character_literal__attributes[] = {
  {-var_funky__node_type_of, -var_funky__NAMED_CHARACTER_LITERAL}
};

static ATTRIBUTE_DEFINITION funky_types__numeric_character_literal__attributes[] = {
  {-var_funky__node_type_of, -var_funky__NUMERIC_CHARACTER_LITERAL}
};

static ATTRIBUTE_DEFINITION funky_types__character_literal__attributes[] = {
  {-var_funky__node_type_of, -var_funky__CHARACTER_LITERAL},
  {-var_funky__character_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION funky_types__string_literal__attributes[] = {
  {-var_funky__node_type_of, -var_funky__STRING_LITERAL},
  {-var_funky__components_of, -var_empty_list}
};

static ATTRIBUTE_DEFINITION funky_types__some_string_components__attributes[] = {
  {-var_funky__node_type_of, -var_funky__SOME_STRING_COMPONENTS},
  {-var_funky__component_of, -var_undefined},
  {-var_funky__components_of, -var_empty_list}
};

static ATTRIBUTE_DEFINITION funky_types__character_sequence__attributes[] = {
  {-var_funky__node_type_of, -var_funky__CHARACTER_SEQUENCE},
  {-var_funky__characters_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_string_literal__attributes[] = {
  {-var_funky__node_type_of, -var_funky__MULTILINE_STRING_LITERAL}
};

static ATTRIBUTE_DEFINITION funky_types__newline__attributes[] = {
  {-var_funky__node_type_of, -var_funky__NEWLINE}
};

static ATTRIBUTE_DEFINITION funky_types__some_string_line_components__attributes[] = {
  {-var_funky__node_type_of, -var_funky__SOME_STRING_LINE_COMPONENTS},
  {-var_funky__component_of, -var_undefined},
  {-var_funky__components_of, -var_empty_list}
};

static ATTRIBUTE_DEFINITION funky_types__string_line_end__attributes[] = {
  {-var_funky__node_type_of, -var_funky__STRING_LINE_END}
};

static ATTRIBUTE_DEFINITION funky_types__at_character__attributes[] = {
  {-var_funky__node_type_of, -var_funky__AT_CHARACTER}
};

static ATTRIBUTE_DEFINITION funky_types__tagged_empty_character__attributes[] = {
  {-var_funky__node_type_of, -var_funky__TAGGED_EMPTY_CHARACTER}
};

static ATTRIBUTE_DEFINITION funky_types__empty_character__attributes[] = {
  {-var_funky__node_type_of, -var_funky__EMPTY_CHARACTER}
};

static ATTRIBUTE_DEFINITION funky_types__escape_expression__attributes[] = {
  {-var_funky__node_type_of, -var_funky__ESCAPE_EXPRESSION}
};

static ATTRIBUTE_DEFINITION funky_types__named_character__attributes[] = {
  {-var_funky__node_type_of, -var_funky__NAMED_CHARACTER}
};

static ATTRIBUTE_DEFINITION funky_types__numeric_character__attributes[] = {
  {-var_funky__node_type_of, -var_funky__NUMERIC_CHARACTER}
};

static ATTRIBUTE_DEFINITION funky_types__string_line_character_sequence__attributes[] = {
  {-var_funky__node_type_of, -var_funky__STRING_LINE_CHARACTER_SEQUENCE}
};

static ATTRIBUTE_DEFINITION funky_types__unique__attributes[] = {
  {-var_funky__node_type_of, -var_funky__UNIQUE},
  {-var_funky__remarks_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION funky_types__attribute__attributes[] = {
  {-var_funky__node_type_of, -var_funky__ATTRIBUTE}
};

static ATTRIBUTE_DEFINITION funky_types__attribute_with_setter__attributes[] = {
  {-var_funky__node_type_of, -var_funky__ATTRIBUTE_WITH_SETTER}
};

static ATTRIBUTE_DEFINITION funky_types__body__attributes[] = {
  {-var_funky__node_type_of, -var_funky__BODY},
  {-var_funky__parameters_of, -var_empty_list},
  {-var_funky__remark_of, -var_undefined},
  {-var_funky__statements_of, -var_empty_list}
};

static ATTRIBUTE_DEFINITION funky_types__line_end_statement__attributes[] = {
  {-var_funky__node_type_of, -var_funky__LINE_END_STATEMENT}
};

static ATTRIBUTE_DEFINITION funky_types__inline_body__attributes[] = {
  {-var_funky__node_type_of, -var_funky__INLINE_BODY},
  {-var_funky__parameters_of, -var_empty_list},
  {-var_funky__statement_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION funky_types__statements__attributes[] = {
  {-var_funky__node_type_of, -var_funky__STATEMENTS},
  {-var_funky__statement_of, -var_empty_list}
};

static ATTRIBUTE_DEFINITION funky_types__one_or_more_inline_parameters__attributes[] = {
  {-var_funky__node_type_of, -var_funky__ONE_OR_MORE_INLINE_PARAMETERS},
  {-var_funky__parameter_of, -var_undefined},
  {-var_funky__parameters_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION funky_types__open_parameters__attributes[] = {
  {-var_funky__node_type_of, -var_funky__OPEN_PARAMETERS},
  {-var_funky__remark_of, -var_undefined},
  {-var_funky__parameter_of, -var_empty_list}
};

static ATTRIBUTE_DEFINITION funky_types__inline_parameter__attributes[] = {
  {-var_funky__node_type_of, -var_funky__INLINE_PARAMETER},
  {-var_funky__name_of, -var_undefined},
  {-var_funky__option_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION funky_types__parameter__attributes[] = {
  {-var_funky__node_type_of, -var_funky__PARAMETER},
  {-var_funky__name_of, -var_undefined},
  {-var_funky__option_of, -var_undefined},
  {-var_funky__remarks_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION funky_types__myself__attributes[] = {
  {-var_funky__node_type_of, -var_funky__MYSELF}
};

static ATTRIBUTE_DEFINITION funky_types__rest__attributes[] = {
  {-var_funky__node_type_of, -var_funky__REST}
};

static ATTRIBUTE_DEFINITION funky_types__initial_value__attributes[] = {
  {-var_funky__node_type_of, -var_funky__INITIAL_VALUE},
  {-var_funky__operand_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION funky_types__close_parameters__attributes[] = {
  {-var_funky__node_type_of, -var_funky__CLOSE_PARAMETERS},
  {-var_funky__remark_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION funky_types__return_expression__attributes[] = {
  {-var_funky__node_type_of, -var_funky__RETURN_EXPRESSION}
};

static ATTRIBUTE_DEFINITION funky_types__return__attributes[] = {
  {-var_funky__node_type_of, -var_funky__RETURN}
};

static ATTRIBUTE_DEFINITION funky_types__remark__attributes[] = {
  {-var_funky__node_type_of, -var_funky__REMARK},
  {-var_funky__text_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION funky_types__line_end_and_line_remarks__attributes[] = {
  {-var_funky__node_type_of, -var_funky__LINE_END_AND_LINE_REMARKS},
  {-var_funky__remark_of, -var_undefined},
  {-var_funky__remarks_of, -var_empty_list}
};

static ATTRIBUTE_DEFINITION funky_types__line_remarks__attributes[] = {
  {-var_funky__node_type_of, -var_funky__LINE_REMARKS},
  {-var_funky__remark_of, -var_empty_list}
};

static ATTRIBUTE_DEFINITION funky_types__spaced_remark__attributes[] = {
  {-var_funky__node_type_of, -var_funky__SPACED_REMARK}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_remark__attributes[] = {
  {-var_funky__node_type_of, -var_funky__MULTILINE_REMARK},
  {-var_funky__text_of, -var_undefined},
  {-var_funky__lines_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION funky_types__remark_lines__attributes[] = {
  {-var_funky__node_type_of, -var_funky__REMARK_LINES}
};

static ATTRIBUTE_DEFINITION funky_types__dummy_remark__attributes[] = {
  {-var_funky__node_type_of, -var_funky__DUMMY_REMARK}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "node_type_of\000funky", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "line_no_of\000funky", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "skip_of\000funky", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "STATEMENT\000funky", NULL,
    {.const_idx = -uni_funky__STATEMENT}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "INLINE_STATEMENT\000funky", NULL,
    {.const_idx = -uni_funky__INLINE_STATEMENT}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ATTRIBUTE_VALUE_PAIR\000funky", NULL,
    {.const_idx = -uni_funky__ATTRIBUTE_VALUE_PAIR}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "TYPE_FUNCTION\000funky", NULL,
    {.const_idx = -uni_funky__TYPE_FUNCTION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "METHOD_VALUE_PAIR\000funky", NULL,
    {.const_idx = -uni_funky__METHOD_VALUE_PAIR}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "PAIR\000funky", NULL,
    {.const_idx = -uni_funky__PAIR}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "NAMESPACE_INSTRUCTION\000funky", NULL,
    {.const_idx = -uni_funky__NAMESPACE_INSTRUCTION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "REQUIRE_INSTRUCTION\000funky", NULL,
    {.const_idx = -uni_funky__REQUIRE_INSTRUCTION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "USING_INSTRUCTION\000funky", NULL,
    {.const_idx = -uni_funky__USING_INSTRUCTION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ALIAS_INSTRUCTION\000funky", NULL,
    {.const_idx = -uni_funky__ALIAS_INSTRUCTION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "RESOLVE_INSTRUCTION\000funky", NULL,
    {.const_idx = -uni_funky__RESOLVE_INSTRUCTION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ALLOW_INSTRUCTION\000funky", NULL,
    {.const_idx = -uni_funky__ALLOW_INSTRUCTION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ALIAS\000funky", NULL,
    {.const_idx = -uni_funky__ALIAS}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "VERSION_NO\000funky", NULL,
    {.const_idx = -uni_funky__VERSION_NO}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "UNSTABLE\000funky", NULL,
    {.const_idx = -uni_funky__UNSTABLE}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ALLOW_HIDDEN\000funky", NULL,
    {.const_idx = -uni_funky__ALLOW_HIDDEN}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ALLOW_UNUSED\000funky", NULL,
    {.const_idx = -uni_funky__ALLOW_UNUSED}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "FUNCTOR\000funky", NULL,
    {.const_idx = -uni_funky__FUNCTOR}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "FUNCTION_CALL_EXTENSION\000funky", NULL,
    {.const_idx = -uni_funky__FUNCTION_CALL_EXTENSION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ATTRIBUTE_ACCESS_EXTENSION\000funky", NULL,
    {.const_idx = -uni_funky__ATTRIBUTE_ACCESS_EXTENSION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "INLINE_FUNCTOR\000funky", NULL,
    {.const_idx = -uni_funky__INLINE_FUNCTOR}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "INLINE_FUNCTION_CALL_EXTENSION\000funky", NULL,
    {.const_idx = -uni_funky__INLINE_FUNCTION_CALL_EXTENSION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "INLINE_ATTRIBUTE_ACCESS_EXTENSION\000funky", NULL,
    {.const_idx = -uni_funky__INLINE_ATTRIBUTE_ACCESS_EXTENSION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "IO_CALL\000funky", NULL,
    {.const_idx = -uni_funky__IO_CALL}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "FUNCTION_CALL\000funky", NULL,
    {.const_idx = -uni_funky__FUNCTION_CALL}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "FUNCTION_CALL_ARGUMENTS\000funky", NULL,
    {.const_idx = -uni_funky__FUNCTION_CALL_ARGUMENTS}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "INLINE_RETURN\000funky", NULL,
    {.const_idx = -uni_funky__INLINE_RETURN}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ATTRIBUTE_ACCESS\000funky", NULL,
    {.const_idx = -uni_funky__ATTRIBUTE_ACCESS}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SPACED_ARGUMENTS\000funky", NULL,
    {.const_idx = -uni_funky__SPACED_ARGUMENTS}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SPACED_STATEMENT_ARGUMENTS\000funky", NULL,
    {.const_idx = -uni_funky__SPACED_STATEMENT_ARGUMENTS}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ARGUMENTS\000funky", NULL,
    {.const_idx = -uni_funky__ARGUMENTS}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "EVEN_MORE_STATEMENT_ARGUMENTS\000funky", NULL,
    {.const_idx = -uni_funky__EVEN_MORE_STATEMENT_ARGUMENTS}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MULTILINE_ARGUMENTS\000funky", NULL,
    {.const_idx = -uni_funky__MULTILINE_ARGUMENTS}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "TAGGED_MULTILINE_ARGUMENTS\000funky", NULL,
    {.const_idx = -uni_funky__TAGGED_MULTILINE_ARGUMENTS}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "REMARK_AND_MULTILINE_FUNCTION_CALL\000funky", NULL,
    {.const_idx = -uni_funky__REMARK_AND_MULTILINE_FUNCTION_CALL}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DUMMY_DEFINITION\000funky", NULL,
    {.const_idx = -uni_funky__DUMMY_DEFINITION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "VARIABLE\000funky", NULL,
    {.const_idx = -uni_funky__VARIABLE}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DEFINITION\000funky", NULL,
    {.const_idx = -uni_funky__DEFINITION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "REDEFINITION\000funky", NULL,
    {.const_idx = -uni_funky__REDEFINITION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "UPDATE\000funky", NULL,
    {.const_idx = -uni_funky__UPDATE}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "EXPRESSION\000funky", NULL,
    {.const_idx = -uni_funky__EXPRESSION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "KEY_VALUE\000funky", NULL,
    {.const_idx = -uni_funky__KEY_VALUE}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SEQUENCE_EXPRESSION\000funky", NULL,
    {.const_idx = -uni_funky__SEQUENCE_EXPRESSION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "COMMA\000funky", NULL,
    {.const_idx = -uni_funky__COMMA}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "COMMA_EXPRESSION\000funky", NULL,
    {.const_idx = -uni_funky__COMMA_EXPRESSION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "CONDITIONAL_EXPRESSION\000funky", NULL,
    {.const_idx = -uni_funky__CONDITIONAL_EXPRESSION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "AND\000funky", NULL,
    {.const_idx = -uni_funky__AND}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "AND_EXPRESSION\000funky", NULL,
    {.const_idx = -uni_funky__AND_EXPRESSION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "OR\000funky", NULL,
    {.const_idx = -uni_funky__OR}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "OR_EXPRESSION\000funky", NULL,
    {.const_idx = -uni_funky__OR_EXPRESSION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "NAMED_OPERATOR_EXPRESSION\000funky", NULL,
    {.const_idx = -uni_funky__NAMED_OPERATOR_EXPRESSION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "NAMED_OPERATOR\000funky", NULL,
    {.const_idx = -uni_funky__NAMED_OPERATOR}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "RANGE_EXPRESSION\000funky", NULL,
    {.const_idx = -uni_funky__RANGE_EXPRESSION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "RANGE\000funky", NULL,
    {.const_idx = -uni_funky__RANGE}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "RELATIONAL_EXPRESSION\000funky", NULL,
    {.const_idx = -uni_funky__RELATIONAL_EXPRESSION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "EQUAL\000funky", NULL,
    {.const_idx = -uni_funky__EQUAL}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "NOT_EQUAL\000funky", NULL,
    {.const_idx = -uni_funky__NOT_EQUAL}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LESS_EQUAL\000funky", NULL,
    {.const_idx = -uni_funky__LESS_EQUAL}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LESS_THAN\000funky", NULL,
    {.const_idx = -uni_funky__LESS_THAN}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "GREATER_EQUAL\000funky", NULL,
    {.const_idx = -uni_funky__GREATER_EQUAL}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "GREATER_THAN\000funky", NULL,
    {.const_idx = -uni_funky__GREATER_THAN}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "TAGGED_BIT_EXPRESSION\000funky", NULL,
    {.const_idx = -uni_funky__TAGGED_BIT_EXPRESSION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "BIT_EXPRESSION\000funky", NULL,
    {.const_idx = -uni_funky__BIT_EXPRESSION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SHIFT_LEFT\000funky", NULL,
    {.const_idx = -uni_funky__SHIFT_LEFT}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SHIFT_RIGHT\000funky", NULL,
    {.const_idx = -uni_funky__SHIFT_RIGHT}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "BIT_AND\000funky", NULL,
    {.const_idx = -uni_funky__BIT_AND}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "BIT_AND2\000funky", NULL,
    {.const_idx = -uni_funky__BIT_AND2}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "BIT_OR\000funky", NULL,
    {.const_idx = -uni_funky__BIT_OR}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "BIT_OR2\000funky", NULL,
    {.const_idx = -uni_funky__BIT_OR2}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "BIT_XOR\000funky", NULL,
    {.const_idx = -uni_funky__BIT_XOR}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "BIT_XOR2\000funky", NULL,
    {.const_idx = -uni_funky__BIT_XOR2}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "TAGGED_ADDITIVE_EXPRESSION\000funky", NULL,
    {.const_idx = -uni_funky__TAGGED_ADDITIVE_EXPRESSION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ADDITIVE_EXPRESSION\000funky", NULL,
    {.const_idx = -uni_funky__ADDITIVE_EXPRESSION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "PLUS\000funky", NULL,
    {.const_idx = -uni_funky__PLUS}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "PLUS2\000funky", NULL,
    {.const_idx = -uni_funky__PLUS2}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MINUS\000funky", NULL,
    {.const_idx = -uni_funky__MINUS}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "TAGGED_MULTIPLICATIVE_EXPRESSION\000funky", NULL,
    {.const_idx = -uni_funky__TAGGED_MULTIPLICATIVE_EXPRESSION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MULTIPLICATIVE_EXPRESSION\000funky", NULL,
    {.const_idx = -uni_funky__MULTIPLICATIVE_EXPRESSION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "TIMES\000funky", NULL,
    {.const_idx = -uni_funky__TIMES}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "TIMES2\000funky", NULL,
    {.const_idx = -uni_funky__TIMES2}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "OVER\000funky", NULL,
    {.const_idx = -uni_funky__OVER}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "PARENTHESED_EXPRESSION\000funky", NULL,
    {.const_idx = -uni_funky__PARENTHESED_EXPRESSION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "BACKQUOTED\000funky", NULL,
    {.const_idx = -uni_funky__BACKQUOTED}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "NEGATION\000funky", NULL,
    {.const_idx = -uni_funky__NEGATION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MULTILINE_OPERATOR\000funky", NULL,
    {.const_idx = -uni_funky__MULTILINE_OPERATOR}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MULTILINE_PLUS\000funky", NULL,
    {.const_idx = -uni_funky__MULTILINE_PLUS}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MULTILINE_MINUS\000funky", NULL,
    {.const_idx = -uni_funky__MULTILINE_MINUS}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MULTILINE_MINUS_WITH_REMARK\000funky", NULL,
    {.const_idx = -uni_funky__MULTILINE_MINUS_WITH_REMARK}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MULTILINE_TIMES\000funky", NULL,
    {.const_idx = -uni_funky__MULTILINE_TIMES}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MULTILINE_OVER\000funky", NULL,
    {.const_idx = -uni_funky__MULTILINE_OVER}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MULTILINE_OVER_WITH_REMARK\000funky", NULL,
    {.const_idx = -uni_funky__MULTILINE_OVER_WITH_REMARK}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MULTILINE_SHIFT_LEFT\000funky", NULL,
    {.const_idx = -uni_funky__MULTILINE_SHIFT_LEFT}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MULTILINE_SHIFT_RIGHT\000funky", NULL,
    {.const_idx = -uni_funky__MULTILINE_SHIFT_RIGHT}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MULTILINE_EQUAL\000funky", NULL,
    {.const_idx = -uni_funky__MULTILINE_EQUAL}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MULTILINE_NOT_EQUAL\000funky", NULL,
    {.const_idx = -uni_funky__MULTILINE_NOT_EQUAL}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MULTILINE_LESS_EQUAL\000funky", NULL,
    {.const_idx = -uni_funky__MULTILINE_LESS_EQUAL}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MULTILINE_LESS_THAN\000funky", NULL,
    {.const_idx = -uni_funky__MULTILINE_LESS_THAN}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MULTILINE_GREATER_EQUAL\000funky", NULL,
    {.const_idx = -uni_funky__MULTILINE_GREATER_EQUAL}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MULTILINE_GREATER_THAN\000funky", NULL,
    {.const_idx = -uni_funky__MULTILINE_GREATER_THAN}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MULTILINE_AND\000funky", NULL,
    {.const_idx = -uni_funky__MULTILINE_AND}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MULTILINE_OR\000funky", NULL,
    {.const_idx = -uni_funky__MULTILINE_OR}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MULTILINE_BIT_AND\000funky", NULL,
    {.const_idx = -uni_funky__MULTILINE_BIT_AND}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MULTILINE_BIT_AND_WITH_REMARK\000funky", NULL,
    {.const_idx = -uni_funky__MULTILINE_BIT_AND_WITH_REMARK}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MULTILINE_BIT_OR\000funky", NULL,
    {.const_idx = -uni_funky__MULTILINE_BIT_OR}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MULTILINE_BIT_XOR\000funky", NULL,
    {.const_idx = -uni_funky__MULTILINE_BIT_XOR}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MULTILINE_ASSIGN\000funky", NULL,
    {.const_idx = -uni_funky__MULTILINE_ASSIGN}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "INLINE_ATTRIBUTE_VALUE_PAIR\000funky", NULL,
    {.const_idx = -uni_funky__INLINE_ATTRIBUTE_VALUE_PAIR}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "INLINE_METHOD_VALUE_PAIR\000funky", NULL,
    {.const_idx = -uni_funky__INLINE_METHOD_VALUE_PAIR}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "EXPRESSION_AND_INLINE_ARGUMENTS\000funky", NULL,
    {.const_idx = -uni_funky__EXPRESSION_AND_INLINE_ARGUMENTS}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SPACED_INLINE_ARGUMENTS\000funky", NULL,
    {.const_idx = -uni_funky__SPACED_INLINE_ARGUMENTS}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "NUMERIC_LITERAL\000funky", NULL,
    {.const_idx = -uni_funky__NUMERIC_LITERAL}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "AT_CHARACTER_LITERAL\000funky", NULL,
    {.const_idx = -uni_funky__AT_CHARACTER_LITERAL}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "NAMED_CHARACTER_LITERAL\000funky", NULL,
    {.const_idx = -uni_funky__NAMED_CHARACTER_LITERAL}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "NUMERIC_CHARACTER_LITERAL\000funky", NULL,
    {.const_idx = -uni_funky__NUMERIC_CHARACTER_LITERAL}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "CHARACTER_LITERAL\000funky", NULL,
    {.const_idx = -uni_funky__CHARACTER_LITERAL}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "STRING_LITERAL\000funky", NULL,
    {.const_idx = -uni_funky__STRING_LITERAL}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SOME_STRING_COMPONENTS\000funky", NULL,
    {.const_idx = -uni_funky__SOME_STRING_COMPONENTS}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "CHARACTER_SEQUENCE\000funky", NULL,
    {.const_idx = -uni_funky__CHARACTER_SEQUENCE}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MULTILINE_STRING_LITERAL\000funky", NULL,
    {.const_idx = -uni_funky__MULTILINE_STRING_LITERAL}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "NEWLINE\000funky", NULL,
    {.const_idx = -uni_funky__NEWLINE}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SOME_STRING_LINE_COMPONENTS\000funky", NULL,
    {.const_idx = -uni_funky__SOME_STRING_LINE_COMPONENTS}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "STRING_LINE_END\000funky", NULL,
    {.const_idx = -uni_funky__STRING_LINE_END}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "AT_CHARACTER\000funky", NULL,
    {.const_idx = -uni_funky__AT_CHARACTER}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "TAGGED_EMPTY_CHARACTER\000funky", NULL,
    {.const_idx = -uni_funky__TAGGED_EMPTY_CHARACTER}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "EMPTY_CHARACTER\000funky", NULL,
    {.const_idx = -uni_funky__EMPTY_CHARACTER}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ESCAPE_EXPRESSION\000funky", NULL,
    {.const_idx = -uni_funky__ESCAPE_EXPRESSION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "NAMED_CHARACTER\000funky", NULL,
    {.const_idx = -uni_funky__NAMED_CHARACTER}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "NUMERIC_CHARACTER\000funky", NULL,
    {.const_idx = -uni_funky__NUMERIC_CHARACTER}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "STRING_LINE_CHARACTER_SEQUENCE\000funky", NULL,
    {.const_idx = -uni_funky__STRING_LINE_CHARACTER_SEQUENCE}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "UNIQUE\000funky", NULL,
    {.const_idx = -uni_funky__UNIQUE}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ATTRIBUTE\000funky", NULL,
    {.const_idx = -uni_funky__ATTRIBUTE}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ATTRIBUTE_WITH_SETTER\000funky", NULL,
    {.const_idx = -uni_funky__ATTRIBUTE_WITH_SETTER}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "BODY\000funky", NULL,
    {.const_idx = -uni_funky__BODY}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LINE_END_STATEMENT\000funky", NULL,
    {.const_idx = -uni_funky__LINE_END_STATEMENT}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "INLINE_BODY\000funky", NULL,
    {.const_idx = -uni_funky__INLINE_BODY}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "STATEMENTS\000funky", NULL,
    {.const_idx = -uni_funky__STATEMENTS}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ONE_OR_MORE_INLINE_PARAMETERS\000funky", NULL,
    {.const_idx = -uni_funky__ONE_OR_MORE_INLINE_PARAMETERS}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "OPEN_PARAMETERS\000funky", NULL,
    {.const_idx = -uni_funky__OPEN_PARAMETERS}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "INLINE_PARAMETER\000funky", NULL,
    {.const_idx = -uni_funky__INLINE_PARAMETER}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "PARAMETER\000funky", NULL,
    {.const_idx = -uni_funky__PARAMETER}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MYSELF\000funky", NULL,
    {.const_idx = -uni_funky__MYSELF}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "REST\000funky", NULL,
    {.const_idx = -uni_funky__REST}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "INITIAL_VALUE\000funky", NULL,
    {.const_idx = -uni_funky__INITIAL_VALUE}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "CLOSE_PARAMETERS\000funky", NULL,
    {.const_idx = -uni_funky__CLOSE_PARAMETERS}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "RETURN_EXPRESSION\000funky", NULL,
    {.const_idx = -uni_funky__RETURN_EXPRESSION}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "RETURN\000funky", NULL,
    {.const_idx = -uni_funky__RETURN}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "REMARK\000funky", NULL,
    {.const_idx = -uni_funky__REMARK}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LINE_END_AND_LINE_REMARKS\000funky", NULL,
    {.const_idx = -uni_funky__LINE_END_AND_LINE_REMARKS}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LINE_REMARKS\000funky", NULL,
    {.const_idx = -uni_funky__LINE_REMARKS}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SPACED_REMARK\000funky", NULL,
    {.const_idx = -uni_funky__SPACED_REMARK}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MULTILINE_REMARK\000funky", NULL,
    {.const_idx = -uni_funky__MULTILINE_REMARK}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "REMARK_LINES\000funky", NULL,
    {.const_idx = -uni_funky__REMARK_LINES}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DUMMY_REMARK\000funky", NULL,
    {.const_idx = -uni_funky__DUMMY_REMARK}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "source_group_of\000funky", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "source_position_of\000funky", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "access_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "alias_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "and2_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "argument_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "arguments_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "body_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "call_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "calls_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "character_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "characters_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "component_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "components_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "digits_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "expression_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "extensions_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "filename_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "head_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "identifier_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "lines_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "major_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "minor_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "name_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "operand_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "operator_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "option_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "or2_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "pair_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "parameter_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "parameters_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "plus2_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "pragma_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "remark_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "remarks_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "sign_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "statement_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "statements_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "text_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "times2_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "version_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "xor2_of\000funky", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_DERIVED, 0, 2,
    "node\000funky_types", funky_types__node__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "object\000std_types", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL
  },
  {
    FOT_DERIVED, 0, 0,
    "fieldless_node\000funky_types", NULL,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "simple_name\000funky_types", funky_types__simple_name__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 2,
    "identifier_and_expression\000funky_types", funky_types__identifier_and_expression__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "simple_expression\000funky_types", funky_types__simple_expression__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 3,
    "namespace_meta_instruction\000funky_types", funky_types__namespace_meta_instruction__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 3,
    "statement\000funky_types", funky_types__statement__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL
  },
  {
    FOT_DERIVED, 0, 3,
    "inline_statement\000funky_types", funky_types__inline_statement__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 3,
    "pair\000funky_types", funky_types__pair__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "attribute_value_pair\000funky_types", funky_types__attribute_value_pair__attributes,
    {"pair\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 4,
    "body\000funky_types", funky_types__body__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "type_function\000funky_types", funky_types__type_function__attributes,
    {"body\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "method_value_pair\000funky_types", funky_types__method_value_pair__attributes,
    {"pair\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "namespace_instruction\000funky_types", funky_types__namespace_instruction__attributes,
    {"namespace_meta_instruction\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 3,
    "require_instruction\000funky_types", funky_types__require_instruction__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "using_instruction\000funky_types", funky_types__using_instruction__attributes,
    {"namespace_meta_instruction\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 5,
    "alias_instruction\000funky_types", funky_types__alias_instruction__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "resolve_instruction\000funky_types", funky_types__resolve_instruction__attributes,
    {"namespace_meta_instruction\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 3,
    "allow_instruction\000funky_types", funky_types__allow_instruction__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "alias\000funky_types", funky_types__alias__attributes,
    {"simple_name\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 3,
    "version_no\000funky_types", funky_types__version_no__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "unstable\000funky_types", funky_types__unstable__attributes,
    {"fieldless_node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "allow_hidden\000funky_types", funky_types__allow_hidden__attributes,
    {"fieldless_node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "allow_unused\000funky_types", funky_types__allow_unused__attributes,
    {"fieldless_node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 3,
    "functor\000funky_types", funky_types__functor__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 3,
    "function_call_extension\000funky_types", funky_types__function_call_extension__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 3,
    "attribute_access_extension\000funky_types", funky_types__attribute_access_extension__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "inline_functor\000funky_types", funky_types__inline_functor__attributes,
    {"functor\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 3,
    "inline_function_call_extension\000funky_types", funky_types__inline_function_call_extension__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 3,
    "inline_attribute_access_extension\000funky_types", funky_types__inline_attribute_access_extension__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "io_call\000funky_types", funky_types__io_call__attributes,
    {"fieldless_node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 2,
    "function_call\000funky_types", funky_types__function_call__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "function_call_arguments\000funky_types", funky_types__function_call_arguments__attributes,
    {"function_call\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "inline_return\000funky_types", funky_types__inline_return__attributes,
    {"function_call\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 2,
    "attribute_access\000funky_types", funky_types__attribute_access__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 2,
    "spaced_arguments\000funky_types", funky_types__spaced_arguments__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 2,
    "spaced_statement_arguments\000funky_types", funky_types__spaced_statement_arguments__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 3,
    "arguments\000funky_types", funky_types__arguments__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 3,
    "even_more_statement_arguments\000funky_types", funky_types__even_more_statement_arguments__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "multiline_arguments\000funky_types", funky_types__multiline_arguments__attributes,
    {"function_call\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "tagged_multiline_arguments\000funky_types", funky_types__tagged_multiline_arguments__attributes,
    {"function_call\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 3,
    "remark_and_multiline_function_call\000funky_types", funky_types__remark_and_multiline_function_call__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "dummy_definition\000funky_types", funky_types__dummy_definition__attributes,
    {"simple_name\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "variable\000funky_types", funky_types__variable__attributes,
    {"attribute_access\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "definition\000funky_types", funky_types__definition__attributes,
    {"attribute_access\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "redefinition\000funky_types", funky_types__redefinition__attributes,
    {"functor\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "update\000funky_types", funky_types__update__attributes,
    {"functor\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 3,
    "expression\000funky_types", funky_types__expression__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "sequence_expression\000funky_types", funky_types__sequence_expression__attributes,
    {"expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "key_value\000funky_types", funky_types__key_value__attributes,
    {"sequence_expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "comma_expression\000funky_types", funky_types__comma_expression__attributes,
    {"expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "comma\000funky_types", funky_types__comma__attributes,
    {"comma_expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "conditional_expression\000funky_types", funky_types__conditional_expression__attributes,
    {"expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "and_expression\000funky_types", funky_types__and_expression__attributes,
    {"expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "and\000funky_types", funky_types__and__attributes,
    {"and_expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "or_expression\000funky_types", funky_types__or_expression__attributes,
    {"expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "or\000funky_types", funky_types__or__attributes,
    {"or_expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "named_operator_expression\000funky_types", funky_types__named_operator_expression__attributes,
    {"expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "named_operator\000funky_types", funky_types__named_operator__attributes,
    {"identifier_and_expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "range_expression\000funky_types", funky_types__range_expression__attributes,
    {"expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "relational_expression\000funky_types", funky_types__relational_expression__attributes,
    {"expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "range\000funky_types", funky_types__range__attributes,
    {"relational_expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "tagged_bit_expression\000funky_types", funky_types__tagged_bit_expression__attributes,
    {"expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "equal\000funky_types", funky_types__equal__attributes,
    {"tagged_bit_expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "not_equal\000funky_types", funky_types__not_equal__attributes,
    {"tagged_bit_expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "less_equal\000funky_types", funky_types__less_equal__attributes,
    {"tagged_bit_expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "less_than\000funky_types", funky_types__less_than__attributes,
    {"tagged_bit_expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "greater_equal\000funky_types", funky_types__greater_equal__attributes,
    {"tagged_bit_expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "greater_than\000funky_types", funky_types__greater_than__attributes,
    {"tagged_bit_expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "bit_expression\000funky_types", funky_types__bit_expression__attributes,
    {"expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "tagged_additive_expression\000funky_types", funky_types__tagged_additive_expression__attributes,
    {"expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "shift_left\000funky_types", funky_types__shift_left__attributes,
    {"tagged_additive_expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "shift_right\000funky_types", funky_types__shift_right__attributes,
    {"tagged_additive_expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "bit_and2\000funky_types", funky_types__bit_and2__attributes,
    {"expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "bit_and\000funky_types", funky_types__bit_and__attributes,
    {"bit_and2\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "bit_or2\000funky_types", funky_types__bit_or2__attributes,
    {"expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "bit_or\000funky_types", funky_types__bit_or__attributes,
    {"bit_or2\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "bit_xor2\000funky_types", funky_types__bit_xor2__attributes,
    {"expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "bit_xor\000funky_types", funky_types__bit_xor__attributes,
    {"bit_xor2\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "additive_expression\000funky_types", funky_types__additive_expression__attributes,
    {"expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "plus2\000funky_types", funky_types__plus2__attributes,
    {"expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "plus\000funky_types", funky_types__plus__attributes,
    {"plus2\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "tagged_multiplicative_expression\000funky_types", funky_types__tagged_multiplicative_expression__attributes,
    {"expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "minus\000funky_types", funky_types__minus__attributes,
    {"tagged_multiplicative_expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "multiplicative_expression\000funky_types", funky_types__multiplicative_expression__attributes,
    {"expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "times2\000funky_types", funky_types__times2__attributes,
    {"expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "times\000funky_types", funky_types__times__attributes,
    {"times2\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "over\000funky_types", funky_types__over__attributes,
    {"simple_expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 3,
    "parenthesed_expression\000funky_types", funky_types__parenthesed_expression__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "backquoted\000funky_types", funky_types__backquoted__attributes,
    {"simple_expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "negation\000funky_types", funky_types__negation__attributes,
    {"simple_expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "multiline_operator\000funky_types", funky_types__multiline_operator__attributes,
    {"remark_and_multiline_function_call\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "multiline_plus\000funky_types", funky_types__multiline_plus__attributes,
    {"multiline_operator\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 3,
    "multiline_minus\000funky_types", funky_types__multiline_minus__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "multiline_minus_with_remark\000funky_types", funky_types__multiline_minus_with_remark__attributes,
    {"remark_and_multiline_function_call\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "multiline_times\000funky_types", funky_types__multiline_times__attributes,
    {"multiline_operator\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "multiline_over\000funky_types", funky_types__multiline_over__attributes,
    {"function_call\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "multiline_over_with_remark\000funky_types", funky_types__multiline_over_with_remark__attributes,
    {"remark_and_multiline_function_call\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "multiline_shift_left\000funky_types", funky_types__multiline_shift_left__attributes,
    {"multiline_operator\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "multiline_shift_right\000funky_types", funky_types__multiline_shift_right__attributes,
    {"multiline_operator\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "multiline_equal\000funky_types", funky_types__multiline_equal__attributes,
    {"multiline_operator\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "multiline_not_equal\000funky_types", funky_types__multiline_not_equal__attributes,
    {"multiline_operator\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "multiline_less_equal\000funky_types", funky_types__multiline_less_equal__attributes,
    {"multiline_operator\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "multiline_less_than\000funky_types", funky_types__multiline_less_than__attributes,
    {"multiline_operator\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "multiline_greater_equal\000funky_types", funky_types__multiline_greater_equal__attributes,
    {"multiline_operator\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "multiline_greater_than\000funky_types", funky_types__multiline_greater_than__attributes,
    {"multiline_operator\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "multiline_and\000funky_types", funky_types__multiline_and__attributes,
    {"multiline_operator\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "multiline_or\000funky_types", funky_types__multiline_or__attributes,
    {"multiline_operator\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "multiline_bit_and\000funky_types", funky_types__multiline_bit_and__attributes,
    {"multiline_minus\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "multiline_bit_and_with_remark\000funky_types", funky_types__multiline_bit_and_with_remark__attributes,
    {"remark_and_multiline_function_call\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "multiline_bit_or\000funky_types", funky_types__multiline_bit_or__attributes,
    {"multiline_operator\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "multiline_bit_xor\000funky_types", funky_types__multiline_bit_xor__attributes,
    {"multiline_operator\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "multiline_assign\000funky_types", funky_types__multiline_assign__attributes,
    {"multiline_operator\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "inline_attribute_value_pair\000funky_types", funky_types__inline_attribute_value_pair__attributes,
    {"identifier_and_expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "inline_method_value_pair\000funky_types", funky_types__inline_method_value_pair__attributes,
    {"identifier_and_expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 3,
    "expression_and_inline_arguments\000funky_types", funky_types__expression_and_inline_arguments__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "spaced_inline_arguments\000funky_types", funky_types__spaced_inline_arguments__attributes,
    {"function_call\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 2,
    "numeric_literal\000funky_types", funky_types__numeric_literal__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "at_character_literal\000funky_types", funky_types__at_character_literal__attributes,
    {"fieldless_node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "named_character_literal\000funky_types", funky_types__named_character_literal__attributes,
    {"simple_name\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "numeric_character_literal\000funky_types", funky_types__numeric_character_literal__attributes,
    {"numeric_literal\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 2,
    "character_literal\000funky_types", funky_types__character_literal__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 2,
    "string_literal\000funky_types", funky_types__string_literal__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 3,
    "some_string_components\000funky_types", funky_types__some_string_components__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 2,
    "character_sequence\000funky_types", funky_types__character_sequence__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "multiline_string_literal\000funky_types", funky_types__multiline_string_literal__attributes,
    {"string_literal\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "newline\000funky_types", funky_types__newline__attributes,
    {"fieldless_node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 3,
    "some_string_line_components\000funky_types", funky_types__some_string_line_components__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "string_line_end\000funky_types", funky_types__string_line_end__attributes,
    {"fieldless_node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "at_character\000funky_types", funky_types__at_character__attributes,
    {"fieldless_node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "tagged_empty_character\000funky_types", funky_types__tagged_empty_character__attributes,
    {"character_literal\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "empty_character\000funky_types", funky_types__empty_character__attributes,
    {"fieldless_node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "escape_expression\000funky_types", funky_types__escape_expression__attributes,
    {"expression\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "named_character\000funky_types", funky_types__named_character__attributes,
    {"simple_name\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "numeric_character\000funky_types", funky_types__numeric_character__attributes,
    {"numeric_literal\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "string_line_character_sequence\000funky_types", funky_types__string_line_character_sequence__attributes,
    {"character_sequence\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 2,
    "unique\000funky_types", funky_types__unique__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "attribute\000funky_types", funky_types__attribute__attributes,
    {"unique\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "attribute_with_setter\000funky_types", funky_types__attribute_with_setter__attributes,
    {"unique\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "line_end_statement\000funky_types", funky_types__line_end_statement__attributes,
    {"statement\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 3,
    "inline_body\000funky_types", funky_types__inline_body__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 2,
    "statements\000funky_types", funky_types__statements__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 3,
    "one_or_more_inline_parameters\000funky_types", funky_types__one_or_more_inline_parameters__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 3,
    "open_parameters\000funky_types", funky_types__open_parameters__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 3,
    "inline_parameter\000funky_types", funky_types__inline_parameter__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 4,
    "parameter\000funky_types", funky_types__parameter__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "myself\000funky_types", funky_types__myself__attributes,
    {"fieldless_node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "rest\000funky_types", funky_types__rest__attributes,
    {"fieldless_node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 2,
    "initial_value\000funky_types", funky_types__initial_value__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 2,
    "close_parameters\000funky_types", funky_types__close_parameters__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "return_expression\000funky_types", funky_types__return_expression__attributes,
    {"function_call\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "return\000funky_types", funky_types__return__attributes,
    {"fieldless_node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 2,
    "remark\000funky_types", funky_types__remark__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 3,
    "line_end_and_line_remarks\000funky_types", funky_types__line_end_and_line_remarks__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 2,
    "line_remarks\000funky_types", funky_types__line_remarks__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "spaced_remark\000funky_types", funky_types__spaced_remark__attributes,
    {"remark\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 3,
    "multiline_remark\000funky_types", funky_types__multiline_remark__attributes,
    {"node\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "remark_lines\000funky_types", funky_types__remark_lines__attributes,
    {"remark\000funky_types"}
  },
  {
    FOT_DERIVED, 0, 1,
    "dummy_remark\000funky_types", funky_types__dummy_remark__attributes,
    {"fieldless_node\000funky_types"}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__nodes = {
  "_nodes", // module name
  "nodes.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  153, // number of constants
  361, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
