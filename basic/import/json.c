#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  unique__std___PARSE_ERROR = 1,
  func__std___from_json,
  func__tokenize,
  func__extract,
  func__std__from_json__1,
  func__std__from_json__2,
  string__2854310,
  number__1,
  func__tokenize__1,
  func__tokenize__1__1,
  func__tokenize__1__2,
  character__32,
  func__tokenize__1__2__1,
  func__tokenize__1__2__2,
  character__34,
  character__48,
  character__57,
  character__44,
  character__58,
  character__123,
  character__125,
  character__91,
  character__93,
  character__116,
  character__102,
  character__110,
  func__tokenize__1__2__2__1,
  func__tokenize__1__2__2__handle_simple_token,
  func__tokenize__1__2__2__handle_true,
  func__tokenize__1__2__2__handle_false,
  func__tokenize__1__2__2__handle_null,
  func__tokenize__1__2__2__handle_number,
  func__tokenize__1__2__2__handle_string,
  string__1267135225,
  number__m1,
  number__3,
  func__tokenize__1__2__2__handle_true__1,
  func__tokenize__1__2__2__handle_true__2,
  func__tokenize__1__2__2__handle_true__3,
  string__324002736,
  number__4,
  string__1107155671,
  func__tokenize__1__2__2__handle_false__1,
  func__tokenize__1__2__2__handle_false__2,
  func__tokenize__1__2__2__handle_false__3,
  string__3636474438,
  number__5,
  func__tokenize__1__2__2__handle_null__1,
  func__tokenize__1__2__2__handle_null__2,
  func__tokenize__1__2__2__handle_null__3,
  string__3805838281,
  func__tokenize__1__2__2__handle_number__1,
  func__tokenize__1__2__2__handle_number__2,
  string__351375997,
  string__2577886713,
  func__tokenize__1__2__2__handle_string__handle_string_character,
  func__tokenize__1__2__2__handle_string__handle_string_character__1,
  func__tokenize__1__2__2__handle_string__handle_string_character__2,
  string__3083588406,
  func__tokenize__1__2__2__handle_string__handle_string_character__2__1,
  character__92,
  func__tokenize__1__2__2__handle_string__handle_string_character__2__2,
  func__tokenize__1__2__2__handle_string__handle_string_character__2__3,
  func__tokenize__1__2__2__handle_string__handle_string_character__2__2__1,
  func__tokenize__1__2__2__handle_string__handle_string_character__2__2__invalid_special_character,
  character__98,
  func__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__1,
  func__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__2,
  func__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__3,
  character__114,
  func__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__4,
  func__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__5,
  character__117,
  func__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__6,
  character__118,
  func__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__7,
  func__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__8,
  character__8,
  number__2,
  character__12,
  character__10,
  character__13,
  character__9,
  func__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__6__1,
  func__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__6__1__1,
  number__6,
  character__11,
  string__3996226159,
  func__extract__1,
  func__extract__2,
  func__extract__extract_object,
  func__extract__extract_array,
  func__extract__2__1,
  string__900948525,
  func__extract__extract_object__1,
  func__extract__extract_object__missing_closing_brace,
  func__extract__extract_object__invalid_attribute,
  func__extract__extract_object__1__1,
  func__extract__extract_object__1__2,
  func__extract__extract_object__1__2__1,
  func__extract__extract_object__1__2__1__1,
  func__extract__extract_object__1__2__1__1__1,
  func__extract__extract_object__1__2__1__1__2,
  func__extract__extract_object__1__2__1__1__2__1,
  func__extract__extract_object__1__2__1__1__2__1__1,
  func__extract__extract_object__1__2__1__1__2__1__2,
  string__108307707,
  string__3391120456,
  func__extract__extract_array__1,
  func__extract__extract_array__missing_closing_bracket,
  func__extract__extract_array__1__1,
  func__extract__extract_array__1__2,
  func__extract__extract_array__1__2__1,
  func__extract__extract_array__1__2__1__1,
  func__extract__extract_array__1__2__1__1__1,
  func__extract__extract_array__1__2__1__1__2,
  string__108307707_2
};

enum {
  var_no__std___PARSE_ERROR = FIRST_VAR+0,
  var_no__std___from_json,
  var_no__tokenize,
  var_no__is_simple,
  var_no__std_types___object,
  var_no__std_types___number,
  var_no__std_types___string,
  var_no__std_types___true,
  var_no__std_types___false,
  var_no__std_types___undefined,
  var_no__extract,
  var_no__false,
  var_no__true,
  var_no__std__from_json__text = 5,
  var_no__std__from_json__lines = 6,
  var_no__std__from_json__tokens = FIRST_VAR+13,
  var_no__std__from_json__obj,
  var_no__split_into_lines,
  var_no__map_reduce,
  var_no__is_empty,
  var_no__if,
  var_no__error,
  var_no__PARSE_ERROR,
  var_no__tokenize__line,
  var_no__tokenize__tokens,
  var_no__tokenize__i,
  var_no__tokenize__n,
  var_no__empty_list,
  var_no__length_of,
  var_no__loop,
  var_no__std___less,
  var_no__tokenize__1__2__chr,
  var_no__std___not,
  var_no__std___plus,
  var_no__next,
  var_no__tokenize__1__2__2__handle_simple_token = -func__tokenize__1__2__2__handle_simple_token,
  var_no__tokenize__1__2__2__handle_true = -func__tokenize__1__2__2__handle_true,
  var_no__tokenize__1__2__2__handle_false = -func__tokenize__1__2__2__handle_false,
  var_no__tokenize__1__2__2__handle_null = -func__tokenize__1__2__2__handle_null,
  var_no__tokenize__1__2__2__handle_number = -func__tokenize__1__2__2__handle_number,
  var_no__tokenize__1__2__2__handle_string = -func__tokenize__1__2__2__handle_string,
  var_no__std___value_range = FIRST_VAR+33,
  var_no__std___sequence,
  var_no__case,
  var_no__range,
  var_no__push,
  var_no__std___and,
  var_no__std___equal,
  var_no__undefined,
  var_no__tokenize__1__2__2__handle_number__number,
  var_no__tokenize__1__2__2__handle_number__value,
  var_no__parse_number,
  var_no__is_defined,
  var_no__std___minus,
  var_no__tokenize__1__2__2__handle_string__s,
  var_no__tokenize__1__2__2__handle_string__str,
  var_no__tokenize__1__2__2__handle_string__handle_string_character = -func__tokenize__1__2__2__handle_string__handle_string_character,
  var_no__tokenize__1__2__2__handle_string__handle_string_character__2__str_chr = FIRST_VAR+48,
  var_no__break,
  var_no__tokenize__1__2__2__handle_string__handle_string_character__2__2__invalid_special_character = -func__tokenize__1__2__2__handle_string__handle_string_character__2__2__invalid_special_character,
  var_no__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__spec_chr = FIRST_VAR+50,
  var_no__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__6__1__code,
  var_no__to_integer,
  var_no__character,
  var_no__extract__tokens,
  var_no__extract__token,
  var_no__extract__extract_object = -func__extract__extract_object,
  var_no__extract__extract_array = -func__extract__extract_array,
  var_no__extract__extract_object__attributes = FIRST_VAR+56,
  var_no__extract__extract_object__missing_closing_brace = -func__extract__extract_object__missing_closing_brace,
  var_no__extract__extract_object__invalid_attribute = -func__extract__extract_object__invalid_attribute,
  var_no__empty_insert_order_table = FIRST_VAR+57,
  var_no__extract__extract_object__1__2__1__1__key,
  var_no__is_a_string,
  var_no__if_not,
  var_no__extract__extract_object__1__2__1__1__2__value = 5,
  var_no__extract__extract_array__missing_closing_bracket = -func__extract__extract_array__missing_closing_bracket,
  var_no__extract__extract_array__1__items = FIRST_VAR+61,
  var_no__extract__extract_array__1__2__1__item = 5
};

static TAB_NUM tfunc__std__from_json__1[] = {
  0, // locals
  0, // no parameters
  // 31: -> obj
  LET, 1, var_no__std__from_json__obj, -1
};

static TAB_NUM tfunc__std__from_json__2[] = {
  0, // locals
  0, // no parameters
  // 32: ... error PARSE_ERROR "text contains multiple objects" tokens
  var_no__error, 3, var_no__PARSE_ERROR, -string__2854310, var_no__std__from_json__tokens, -1
};

static TAB_NUM tfunc__std___from_json[] = {
  3, // locals
  1, // parameters:
  var_no__std__from_json__text,
  // 26: $lines split_into_lines(text)
  var_no__split_into_lines, 1, var_no__std__from_json__text, 1, var_no__std__from_json__lines,
  // 27: $tokens map_reduce(lines tokenize)
  var_no__map_reduce, 2, var_no__std__from_json__lines, var_no__tokenize, 1, var_no__std__from_json__tokens,
  // 28: extract &tokens $obj
  var_no__extract, 1, var_no__std__from_json__tokens, 2, var_no__std__from_json__tokens, var_no__std__from_json__obj,
  // 30: tokens.is_empty
  var_no__is_empty, 1, var_no__std__from_json__tokens, 1, 4,
  // 29: if
  // 30:   tokens.is_empty
  // 31:   -> obj
  // 32:   : error PARSE_ERROR "text contains multiple objects" tokens
  var_no__if, 3, 4, -func__std__from_json__1, -func__std__from_json__2, -1
};

static TAB_NUM tfunc__tokenize__1__1[] = {
  0, // locals
  0, // no parameters
  // 41: -> tokens
  LET, 1, var_no__tokenize__tokens, -1
};

static TAB_NUM tfunc__tokenize__1__2__1[] = {
  0, // locals
  0, // no parameters
  // 46: !i i+1
  var_no__std___plus, 2, var_no__tokenize__i, -number__1, 1, var_no__tokenize__i,
  // 47: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__1[] = {
  1, // locals
  0, // no parameters
  // 56: ... range(line i -1)
  var_no__range, 3, var_no__tokenize__line, var_no__tokenize__i, -number__m1, 1, 4,
  // 56: ... error PARSE_ERROR "unexpected input" range(line i -1)
  var_no__error, 3, var_no__PARSE_ERROR, -string__1267135225, 4, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_simple_token[] = {
  0, // locals
  0, // no parameters
  // 59: push &tokens chr
  var_no__push, 2, var_no__tokenize__tokens, var_no__tokenize__1__2__chr, 1, var_no__tokenize__tokens,
  // 60: !i i+1
  var_no__std___plus, 2, var_no__tokenize__i, -number__1, 1, var_no__tokenize__i,
  // 61: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_true__1[] = {
  4, // locals
  0, // no parameters
  // 65: ... i+1
  var_no__std___plus, 2, var_no__tokenize__i, -number__1, 1, 6,
  // 65: ... i+3
  var_no__std___plus, 2, var_no__tokenize__i, -number__3, 1, 7,
  // 65: ... range(line i+1 i+3)
  var_no__range, 3, var_no__tokenize__line, 6, 7, 1, 5,
  // 65: ... range(line i+1 i+3) == "rue"
  var_no__std___equal, 2, 5, -string__324002736, 1, 4,
  // 65: ... range(line i+1 i+3) == "rue"
  LET, 1, 4, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_true__2[] = {
  0, // locals
  0, // no parameters
  // 66: !i i+4
  var_no__std___plus, 2, var_no__tokenize__i, -number__4, 1, var_no__tokenize__i,
  // 67: push &tokens true
  var_no__push, 2, var_no__tokenize__tokens, var_no__true, 1, var_no__tokenize__tokens,
  // 68: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_true__3[] = {
  1, // locals
  0, // no parameters
  // 69: ... range(line i -1)
  var_no__range, 3, var_no__tokenize__line, var_no__tokenize__i, -number__m1, 1, 4,
  // 69: ... error PARSE_ERROR "invalid identifier" range(line i -1)
  var_no__error, 3, var_no__PARSE_ERROR, -string__1107155671, 4, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_true[] = {
  4, // locals
  0, // no parameters
  // 65: i+3
  var_no__std___plus, 2, var_no__tokenize__i, -number__3, 1, 7,
  // 65: i+3 <= n
  var_no__std___less, 2, var_no__tokenize__n, 7, 1, 6,
  // 65: i+3 <= n
  var_no__std___not, 1, 6, 1, 5,
  // 65: i+3 <= n && range(line i+1 i+3) == "rue"
  var_no__std___and, 2, 5, -func__tokenize__1__2__2__handle_true__1, 1, 4,
  // 64: if
  // 65:   i+3 <= n && range(line i+1 i+3) == "rue":
  // 66:     !i i+4
  // 67:     push &tokens true
  // 68:     next
  // 69:   : error PARSE_ERROR "invalid identifier" range(line i -1)
  var_no__if, 3, 4, -func__tokenize__1__2__2__handle_true__2, -func__tokenize__1__2__2__handle_true__3, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_false__1[] = {
  4, // locals
  0, // no parameters
  // 73: ... i+1
  var_no__std___plus, 2, var_no__tokenize__i, -number__1, 1, 6,
  // 73: ... i+4
  var_no__std___plus, 2, var_no__tokenize__i, -number__4, 1, 7,
  // 73: ... range(line i+1 i+4)
  var_no__range, 3, var_no__tokenize__line, 6, 7, 1, 5,
  // 73: ... range(line i+1 i+4) == "alse"
  var_no__std___equal, 2, 5, -string__3636474438, 1, 4,
  // 73: ... range(line i+1 i+4) == "alse"
  LET, 1, 4, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_false__2[] = {
  0, // locals
  0, // no parameters
  // 74: !i i+5
  var_no__std___plus, 2, var_no__tokenize__i, -number__5, 1, var_no__tokenize__i,
  // 75: push &tokens false
  var_no__push, 2, var_no__tokenize__tokens, var_no__false, 1, var_no__tokenize__tokens,
  // 76: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_false__3[] = {
  1, // locals
  0, // no parameters
  // 77: ... range(line i -1)
  var_no__range, 3, var_no__tokenize__line, var_no__tokenize__i, -number__m1, 1, 4,
  // 77: ... error PARSE_ERROR "invalid identifier" range(line i -1)
  var_no__error, 3, var_no__PARSE_ERROR, -string__1107155671, 4, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_false[] = {
  4, // locals
  0, // no parameters
  // 73: i+4
  var_no__std___plus, 2, var_no__tokenize__i, -number__4, 1, 7,
  // 73: i+4 <= n
  var_no__std___less, 2, var_no__tokenize__n, 7, 1, 6,
  // 73: i+4 <= n
  var_no__std___not, 1, 6, 1, 5,
  // 73: i+4 <= n && range(line i+1 i+4) == "alse"
  var_no__std___and, 2, 5, -func__tokenize__1__2__2__handle_false__1, 1, 4,
  // 72: if
  // 73:   i+4 <= n && range(line i+1 i+4) == "alse":
  // 74:     !i i+5
  // 75:     push &tokens false
  // 76:     next
  // 77:   : error PARSE_ERROR "invalid identifier" range(line i -1)
  var_no__if, 3, 4, -func__tokenize__1__2__2__handle_false__2, -func__tokenize__1__2__2__handle_false__3, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_null__1[] = {
  4, // locals
  0, // no parameters
  // 81: ... i+1
  var_no__std___plus, 2, var_no__tokenize__i, -number__1, 1, 6,
  // 81: ... i+3
  var_no__std___plus, 2, var_no__tokenize__i, -number__3, 1, 7,
  // 81: ... range(line i+1 i+3)
  var_no__range, 3, var_no__tokenize__line, 6, 7, 1, 5,
  // 81: ... range(line i+1 i+3) == "ull"
  var_no__std___equal, 2, 5, -string__3805838281, 1, 4,
  // 81: ... range(line i+1 i+3) == "ull"
  LET, 1, 4, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_null__2[] = {
  0, // locals
  0, // no parameters
  // 82: !i i+4
  var_no__std___plus, 2, var_no__tokenize__i, -number__4, 1, var_no__tokenize__i,
  // 83: push &tokens undefined
  var_no__push, 2, var_no__tokenize__tokens, var_no__undefined, 1, var_no__tokenize__tokens,
  // 84: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_null__3[] = {
  1, // locals
  0, // no parameters
  // 85: ... range(line i -1)
  var_no__range, 3, var_no__tokenize__line, var_no__tokenize__i, -number__m1, 1, 4,
  // 85: ... error PARSE_ERROR "invalid identifier" range(line i -1)
  var_no__error, 3, var_no__PARSE_ERROR, -string__1107155671, 4, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_null[] = {
  4, // locals
  0, // no parameters
  // 81: i+3
  var_no__std___plus, 2, var_no__tokenize__i, -number__3, 1, 7,
  // 81: i+3 <= n
  var_no__std___less, 2, var_no__tokenize__n, 7, 1, 6,
  // 81: i+3 <= n
  var_no__std___not, 1, 6, 1, 5,
  // 81: i+3 <= n && range(line i+1 i+3) == "ull"
  var_no__std___and, 2, 5, -func__tokenize__1__2__2__handle_null__1, 1, 4,
  // 80: if
  // 81:   i+3 <= n && range(line i+1 i+3) == "ull":
  // 82:     !i i+4
  // 83:     push &tokens undefined
  // 84:     next
  // 85:   : error PARSE_ERROR "invalid identifier" range(line i -1)
  var_no__if, 3, 4, -func__tokenize__1__2__2__handle_null__2, -func__tokenize__1__2__2__handle_null__3, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_number__1[] = {
  2, // locals
  0, // no parameters
  // 92: ... n+1
  var_no__std___plus, 2, var_no__tokenize__n, -number__1, 1, 4,
  // 92: ... length_of(number)
  var_no__length_of, 1, var_no__tokenize__1__2__2__handle_number__number, 1, 5,
  // 92: !i n+1-length_of(number)
  var_no__std___minus, 2, 4, 5, 1, var_no__tokenize__i,
  // 93: push &tokens value
  var_no__push, 2, var_no__tokenize__tokens, var_no__tokenize__1__2__2__handle_number__value, 1, var_no__tokenize__tokens,
  // 94: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_number__2[] = {
  0, // locals
  0, // no parameters
  // 95: ... error PARSE_ERROR "invalid numeric literal" number
  var_no__error, 3, var_no__PARSE_ERROR, -string__351375997, var_no__tokenize__1__2__2__handle_number__number, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_number[] = {
  1, // locals
  0, // no parameters
  // 88: $number range(line i -1)
  var_no__range, 3, var_no__tokenize__line, var_no__tokenize__i, -number__m1, 1, var_no__tokenize__1__2__2__handle_number__number,
  // 89: parse_number &number $value
  var_no__parse_number, 1, var_no__tokenize__1__2__2__handle_number__number, 2, var_no__tokenize__1__2__2__handle_number__number, var_no__tokenize__1__2__2__handle_number__value,
  // 91: value.is_defined
  var_no__is_defined, 1, var_no__tokenize__1__2__2__handle_number__value, 1, 4,
  // 90: if
  // 91:   value.is_defined:
  // 92:     !i n+1-length_of(number)
  // 93:     push &tokens value
  // 94:     next
  // 95:   : error PARSE_ERROR "invalid numeric literal" number
  var_no__if, 3, 4, -func__tokenize__1__2__2__handle_number__1, -func__tokenize__1__2__2__handle_number__2, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_string__handle_string_character__1[] = {
  1, // locals
  0, // no parameters
  // 108: range(line s -1)
  var_no__range, 3, var_no__tokenize__line, var_no__tokenize__1__2__2__handle_string__s, -number__m1, 1, 4,
  // 106: error PARSE_ERROR
  // 107:   "Missing closing quote in string literal"
  // 108:   range(line s -1)
  var_no__error, 3, var_no__PARSE_ERROR, -string__3083588406, 4, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__1[] = {
  0, // locals
  0, // no parameters
  // 113: !i i+1
  var_no__std___plus, 2, var_no__tokenize__i, -number__1, 1, var_no__tokenize__i,
  // 114: push &tokens str
  var_no__push, 2, var_no__tokenize__tokens, var_no__tokenize__1__2__2__handle_string__str, 1, var_no__tokenize__tokens,
  // 115: break
  var_no__break, 0, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__1[] = {
  0, // locals
  0, // no parameters
  // 124: push &str '@bs;'
  var_no__push, 2, var_no__tokenize__1__2__2__handle_string__str, -character__8, 1, var_no__tokenize__1__2__2__handle_string__str,
  // 125: !i i+2
  var_no__std___plus, 2, var_no__tokenize__i, -number__2, 1, var_no__tokenize__i,
  // 126: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__2[] = {
  0, // locals
  0, // no parameters
  // 128: push &str '@ff;'
  var_no__push, 2, var_no__tokenize__1__2__2__handle_string__str, -character__12, 1, var_no__tokenize__1__2__2__handle_string__str,
  // 129: !i i+2
  var_no__std___plus, 2, var_no__tokenize__i, -number__2, 1, var_no__tokenize__i,
  // 130: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__3[] = {
  0, // locals
  0, // no parameters
  // 132: push &str '@nl;'
  var_no__push, 2, var_no__tokenize__1__2__2__handle_string__str, -character__10, 1, var_no__tokenize__1__2__2__handle_string__str,
  // 133: !i i+2
  var_no__std___plus, 2, var_no__tokenize__i, -number__2, 1, var_no__tokenize__i,
  // 134: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__4[] = {
  0, // locals
  0, // no parameters
  // 136: push &str '@cr;'
  var_no__push, 2, var_no__tokenize__1__2__2__handle_string__str, -character__13, 1, var_no__tokenize__1__2__2__handle_string__str,
  // 137: !i i+2
  var_no__std___plus, 2, var_no__tokenize__i, -number__2, 1, var_no__tokenize__i,
  // 138: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__5[] = {
  0, // locals
  0, // no parameters
  // 140: push &str '@ht;'
  var_no__push, 2, var_no__tokenize__1__2__2__handle_string__str, -character__9, 1, var_no__tokenize__1__2__2__handle_string__str,
  // 141: !i i+2
  var_no__std___plus, 2, var_no__tokenize__i, -number__2, 1, var_no__tokenize__i,
  // 142: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__6__1__1[] = {
  1, // locals
  0, // no parameters
  // 149: ... character(code)
  var_no__character, 1, var_no__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__6__1__code, 1, 4,
  // 149: push &str character(code)
  var_no__push, 2, var_no__tokenize__1__2__2__handle_string__str, 4, 1, var_no__tokenize__1__2__2__handle_string__str,
  // 150: !i i+6
  var_no__std___plus, 2, var_no__tokenize__i, -number__6, 1, var_no__tokenize__i,
  // 151: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__6__1[] = {
  3, // locals
  0, // no parameters
  // 146: ... i+2
  var_no__std___plus, 2, var_no__tokenize__i, -number__2, 1, 5,
  // 146: ... i+5
  var_no__std___plus, 2, var_no__tokenize__i, -number__5, 1, 6,
  // 146: ... range(line i+2 i+5)
  var_no__range, 3, var_no__tokenize__line, 5, 6, 1, 4,
  // 146: $code range(line i+2 i+5).to_integer
  var_no__to_integer, 1, 4, 1, var_no__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__6__1__code,
  // 148: code.is_defined
  var_no__is_defined, 1, var_no__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__6__1__code, 1, 4,
  // 147: if
  // 148:   code.is_defined:
  // 149:     push &str character(code)
  // 150:     !i i+6
  // 151:     next
  // 152:   invalid_special_character
  var_no__if, 3, 4, -func__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__6__1__1, var_no__tokenize__1__2__2__handle_string__handle_string_character__2__2__invalid_special_character, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__6[] = {
  3, // locals
  0, // no parameters
  // 145: i+5
  var_no__std___plus, 2, var_no__tokenize__i, -number__5, 1, 6,
  // 145: i+5 <= n
  var_no__std___less, 2, var_no__tokenize__n, 6, 1, 5,
  // 145: i+5 <= n
  var_no__std___not, 1, 5, 1, 4,
  // 144: if
  // 145:   i+5 <= n:
  // 146:     $code range(line i+2 i+5).to_integer
  // 147:     if
  // 148:       code.is_defined:
  // 149:         push &str character(code)
  // 150:         !i i+6
  // 151:         next
  // 152:       invalid_special_character
  // 153:   invalid_special_character
  var_no__if, 3, 4, -func__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__6__1, var_no__tokenize__1__2__2__handle_string__handle_string_character__2__2__invalid_special_character, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__7[] = {
  0, // locals
  0, // no parameters
  // 156: push &str '@vt;'
  var_no__push, 2, var_no__tokenize__1__2__2__handle_string__str, -character__11, 1, var_no__tokenize__1__2__2__handle_string__str,
  // 157: !i i+2
  var_no__std___plus, 2, var_no__tokenize__i, -number__2, 1, var_no__tokenize__i,
  // 158: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__8[] = {
  0, // locals
  0, // no parameters
  // 160: push &str spec_chr
  var_no__push, 2, var_no__tokenize__1__2__2__handle_string__str, var_no__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__spec_chr, 1, var_no__tokenize__1__2__2__handle_string__str,
  // 161: !i i+2
  var_no__std___plus, 2, var_no__tokenize__i, -number__2, 1, var_no__tokenize__i,
  // 162: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__2__1[] = {
  1, // locals
  0, // no parameters
  // 121: ... i+1
  var_no__std___plus, 2, var_no__tokenize__i, -number__1, 1, 4,
  // 121: $spec_chr line(i+1)
  var_no__tokenize__line, 1, 4, 1, var_no__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__spec_chr,
  // 122: case spec_chr
  // 123:   'b':
  // 124:     push &str '@bs;'
  // 125:     !i i+2
  // 126:     next
  // 127:   'f':
  // 128:     push &str '@ff;'
  // 129:     !i i+2
  // 130:     next
  // 131:   'n':
  // ...
  var_no__case, 16, var_no__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__spec_chr, -character__98, -func__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__1, -character__102, -func__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__2, -character__110, -func__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__3, -character__114, -func__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__4, -character__116, -func__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__5, -character__117, -func__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__6, -character__118, -func__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__7, -func__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__8, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__2__invalid_special_character[] = {
  1, // locals
  0, // no parameters
  // 167: range(line i -1)
  var_no__range, 3, var_no__tokenize__line, var_no__tokenize__i, -number__m1, 1, 4,
  // 165: error PARSE_ERROR
  // 166:   "Invalid special character in string literal"
  // 167:   range(line i -1)
  var_no__error, 3, var_no__PARSE_ERROR, -string__3996226159, 4, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__2[] = {
  2, // locals
  0, // no parameters
  // 118: i+1
  var_no__std___plus, 2, var_no__tokenize__i, -number__1, 1, 5,
  // 118: i+1 > n
  var_no__std___less, 2, var_no__tokenize__n, 5, 1, 4,
  // 117: if
  // 118:   i+1 > n
  // 119:   invalid_special_character
  // 120:   :
  // 121:     $spec_chr line(i+1)
  // 122:     case spec_chr
  // 123:       'b':
  // 124:         push &str '@bs;'
  // 125:         !i i+2
  // 126:         next
  // ...
  var_no__if, 3, 4, var_no__tokenize__1__2__2__handle_string__handle_string_character__2__2__invalid_special_character, -func__tokenize__1__2__2__handle_string__handle_string_character__2__2__1, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__3[] = {
  0, // locals
  0, // no parameters
  // 169: push &str str_chr
  var_no__push, 2, var_no__tokenize__1__2__2__handle_string__str, var_no__tokenize__1__2__2__handle_string__handle_string_character__2__str_chr, 1, var_no__tokenize__1__2__2__handle_string__str,
  // 170: !i i+1
  var_no__std___plus, 2, var_no__tokenize__i, -number__1, 1, var_no__tokenize__i,
  // 171: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_string__handle_string_character__2[] = {
  0, // locals
  0, // no parameters
  // 110: $str_chr line(i)
  var_no__tokenize__line, 1, var_no__tokenize__i, 1, var_no__tokenize__1__2__2__handle_string__handle_string_character__2__str_chr,
  // 111: case str_chr
  // 112:   '@quot;':
  // 113:     !i i+1
  // 114:     push &tokens str
  // 115:     break
  // 116:   '\':
  // 117:     if
  // 118:       i+1 > n
  // 119:       invalid_special_character
  // 120:       :
  // ...
  var_no__case, 6, var_no__tokenize__1__2__2__handle_string__handle_string_character__2__str_chr, -character__34, -func__tokenize__1__2__2__handle_string__handle_string_character__2__1, -character__92, -func__tokenize__1__2__2__handle_string__handle_string_character__2__2, -func__tokenize__1__2__2__handle_string__handle_string_character__2__3, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_string__handle_string_character[] = {
  1, // locals
  0, // no parameters
  // 105: i > n
  var_no__std___less, 2, var_no__tokenize__n, var_no__tokenize__i, 1, 4,
  // 104: if
  // 105:   i > n:
  // 106:     error PARSE_ERROR
  // 107:       "Missing closing quote in string literal"
  // 108:       range(line s -1)
  // 109:   :
  // 110:     $str_chr line(i)
  // 111:     case str_chr
  // 112:       '@quot;':
  // 113:         !i i+1
  // ...
  var_no__if, 3, 4, -func__tokenize__1__2__2__handle_string__handle_string_character__1, -func__tokenize__1__2__2__handle_string__handle_string_character__2, -1
};

static TAB_NUM tfunc__tokenize__1__2__2__handle_string[] = {
  0, // locals
  0, // no parameters
  // 98: $s i
  LET, 1, var_no__tokenize__i, 1, var_no__tokenize__1__2__2__handle_string__s,
  // 99: !i i+1
  var_no__std___plus, 2, var_no__tokenize__i, -number__1, 1, var_no__tokenize__i,
  // 100: $str ""
  LET, 1, -string__2577886713, 1, var_no__tokenize__1__2__2__handle_string__str,
  // 101: loop handle_string_character next
  var_no__loop, 2, var_no__tokenize__1__2__2__handle_string__handle_string_character, var_no__next, -1
};

static TAB_NUM tfunc__tokenize__1__2__2[] = {
  2, // locals
  0, // no parameters
  // 51: '0'..'9'
  var_no__std___value_range, 2, -character__48, -character__57, 1, 4,
  // 52: ',', ':', '{', '}', '[', ']'
  var_no__std___sequence, 6, -character__44, -character__58, -character__123, -character__125, -character__91, -character__93, 1, 5,
  // 49: case chr
  // 50:   '@quot;' handle_string
  // 51:   '0'..'9' handle_number
  // 52:   ',', ':', '{', '}', '[', ']' handle_simple_token
  // 53:   't' handle_true
  // 54:   'f' handle_false
  // 55:   'n' handle_null
  // 56:   : error PARSE_ERROR "unexpected input" range(line i -1)
  var_no__case, 14, var_no__tokenize__1__2__chr, -character__34, var_no__tokenize__1__2__2__handle_string, 4, var_no__tokenize__1__2__2__handle_number, 5, var_no__tokenize__1__2__2__handle_simple_token, -character__116, var_no__tokenize__1__2__2__handle_true, -character__102, var_no__tokenize__1__2__2__handle_false, -character__110, var_no__tokenize__1__2__2__handle_null, -func__tokenize__1__2__2__1, -1
};

static TAB_NUM tfunc__tokenize__1__2[] = {
  2, // locals
  0, // no parameters
  // 43: $chr line(i)
  var_no__tokenize__line, 1, var_no__tokenize__i, 1, var_no__tokenize__1__2__chr,
  // 45: chr <= ' '
  var_no__std___less, 2, -character__32, var_no__tokenize__1__2__chr, 1, 5,
  // 45: chr <= ' '
  var_no__std___not, 1, 5, 1, 4,
  // 44: if
  // 45:   chr <= ' ':
  // 46:     !i i+1
  // 47:     next
  // 48:   :
  // 49:     case chr
  // 50:       '@quot;' handle_string
  // 51:       '0'..'9' handle_number
  // 52:       ',', ':', '{', '}', '[', ']' handle_simple_token
  // 53:       't' handle_true
  // ...
  var_no__if, 3, 4, -func__tokenize__1__2__1, -func__tokenize__1__2__2, -1
};

static TAB_NUM tfunc__tokenize__1[] = {
  1, // locals
  0, // no parameters
  // 40: i > n
  var_no__std___less, 2, var_no__tokenize__n, var_no__tokenize__i, 1, 4,
  // 39: if
  // 40:   i > n
  // 41:   -> tokens
  // 42:   :
  // 43:     $chr line(i)
  // 44:     if
  // 45:       chr <= ' ':
  // 46:         !i i+1
  // 47:         next
  // 48:       :
  // ...
  var_no__if, 3, 4, -func__tokenize__1__1, -func__tokenize__1__2, -1
};

static TAB_NUM tfunc__tokenize[] = {
  0, // locals
  1, // parameters:
  var_no__tokenize__line,
  // 35: $tokens empty_list
  LET, 1, var_no__empty_list, 1, var_no__tokenize__tokens,
  // 36: $i 1
  LET, 1, -number__1, 1, var_no__tokenize__i,
  // 37: $n length_of(line)
  var_no__length_of, 1, var_no__tokenize__line, 1, var_no__tokenize__n,
  // 38: loop:
  // 39:   if
  // 40:     i > n
  // 41:     -> tokens
  // 42:     :
  // 43:       $chr line(i)
  // 44:       if
  // 45:         chr <= ' ':
  // 46:           !i i+1
  // 47:           next
  // ...
  var_no__loop, 1, -func__tokenize__1, -1
};

static TAB_NUM tfunc__extract__1[] = {
  0, // locals
  0, // no parameters
  // 187: -> tokens token
  LET, 2, var_no__extract__tokens, var_no__extract__token, -1
};

static TAB_NUM tfunc__extract__2__1[] = {
  0, // locals
  0, // no parameters
  // 192: ... error PARSE_ERROR "Unexpected token" tokens
  var_no__error, 3, var_no__PARSE_ERROR, -string__900948525, var_no__extract__tokens, -1
};

static TAB_NUM tfunc__extract__2[] = {
  0, // locals
  0, // no parameters
  // 189: case token
  // 190:   '{' extract_object
  // 191:   '[' extract_array
  // 192:   : error PARSE_ERROR "Unexpected token" tokens
  var_no__case, 6, var_no__extract__token, -character__123, var_no__extract__extract_object, -character__91, var_no__extract__extract_array, -func__extract__2__1, -1
};

static TAB_NUM tfunc__extract__extract_object__1__1[] = {
  1, // locals
  0, // no parameters
  // 202: ... range(tokens 2 -1)
  var_no__range, 3, var_no__extract__tokens, -number__2, -number__m1, 1, 4,
  // 202: -> range(tokens 2 -1) attributes
  LET, 2, 4, var_no__extract__extract_object__attributes, -1
};

static TAB_NUM tfunc__extract__extract_object__1__2__1__1__1[] = {
  2, // locals
  0, // no parameters
  // 211: ... tokens(2)
  var_no__extract__tokens, 1, -number__2, 1, 5,
  // 211: ... tokens(2) == ':'
  var_no__std___equal, 2, 5, -character__58, 1, 4,
  // 211: ... tokens(2) == ':'
  LET, 1, 4, -1
};

static TAB_NUM tfunc__extract__extract_object__1__2__1__1__2__1__1[] = {
  0, // locals
  0, // no parameters
  // 223: range &tokens 2 -1
  var_no__range, 3, var_no__extract__tokens, -number__2, -number__m1, 1, var_no__extract__tokens,
  // 224: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__extract__extract_object__1__2__1__1__2__1__2[] = {
  1, // locals
  0, // no parameters
  // 225: ... range(tokens 2 -1)
  var_no__range, 3, var_no__extract__tokens, -number__2, -number__m1, 1, 4,
  // 225: ... -> range(tokens 2 -1) attributes
  LET, 2, 4, var_no__extract__extract_object__attributes, -1
};

static TAB_NUM tfunc__extract__extract_object__1__2__1__1__2__1[] = {
  1, // locals
  0, // no parameters
  // 221: ... tokens(1)
  var_no__extract__tokens, 1, -number__1, 1, 4,
  // 221: case tokens(1)
  // 222:   ',':
  // 223:     range &tokens 2 -1
  // 224:     next
  // 225:   '}' -> range(tokens 2 -1) attributes
  // 226:   missing_closing_brace
  var_no__case, 6, 4, -character__44, -func__extract__extract_object__1__2__1__1__2__1__1, -character__125, -func__extract__extract_object__1__2__1__1__2__1__2, var_no__extract__extract_object__missing_closing_brace, -1
};

static TAB_NUM tfunc__extract__extract_object__1__2__1__1__2[] = {
  2, // locals
  0, // no parameters
  // 214: range &tokens 3 -1
  var_no__range, 3, var_no__extract__tokens, -number__3, -number__m1, 1, var_no__extract__tokens,
  // 215: extract &tokens $value
  var_no__extract, 1, var_no__extract__tokens, 2, var_no__extract__tokens, var_no__extract__extract_object__1__2__1__1__2__value,
  // 216: !attributes(key)
  var_no__extract__extract_object__attributes, 2, var_no__extract__extract_object__1__2__1__1__key, var_no__extract__extract_object__1__2__1__1__2__value, 1, var_no__extract__extract_object__attributes,
  // 218: tokens.is_empty
  var_no__is_empty, 1, var_no__extract__tokens, 1, 4,
  // 217: if
  // 218:   tokens.is_empty
  // 219:   missing_closing_brace
  // 220:   :
  // 221:     case tokens(1)
  // 222:       ',':
  // 223:         range &tokens 2 -1
  // 224:         next
  // 225:       '}' -> range(tokens 2 -1) attributes
  // 226:       missing_closing_brace
  var_no__if, 3, 4, var_no__extract__extract_object__missing_closing_brace, -func__extract__extract_object__1__2__1__1__2__1, -1
};

static TAB_NUM tfunc__extract__extract_object__1__2__1__1[] = {
  2, // locals
  0, // no parameters
  // 209: $key tokens(1)
  var_no__extract__tokens, 1, -number__1, 1, var_no__extract__extract_object__1__2__1__1__key,
  // 211: key.is_a_string
  var_no__is_a_string, 1, var_no__extract__extract_object__1__2__1__1__key, 1, 5,
  // 211: key.is_a_string && tokens(2) == ':'
  var_no__std___and, 2, 5, -func__extract__extract_object__1__2__1__1__1, 1, 4,
  // 210: if_not
  // 211:   key.is_a_string && tokens(2) == ':'
  // 212:   invalid_attribute
  // 213:   :
  // 214:     range &tokens 3 -1
  // 215:     extract &tokens $value
  // 216:     !attributes(key) value
  // 217:     if
  // 218:       tokens.is_empty
  // 219:       missing_closing_brace
  // ...
  var_no__if_not, 3, 4, var_no__extract__extract_object__invalid_attribute, -func__extract__extract_object__1__2__1__1__2, -1
};

static TAB_NUM tfunc__extract__extract_object__1__2__1[] = {
  2, // locals
  0, // no parameters
  // 206: length_of(tokens)
  var_no__length_of, 1, var_no__extract__tokens, 1, 5,
  // 206: length_of(tokens) < 3
  var_no__std___less, 2, 5, -number__3, 1, 4,
  // 205: if
  // 206:   length_of(tokens) < 3
  // 207:   invalid_attribute
  // 208:   :
  // 209:     $key tokens(1)
  // 210:     if_not
  // 211:       key.is_a_string && tokens(2) == ':'
  // 212:       invalid_attribute
  // 213:       :
  // 214:         range &tokens 3 -1
  // ...
  var_no__if, 3, 4, var_no__extract__extract_object__invalid_attribute, -func__extract__extract_object__1__2__1__1, -1
};

static TAB_NUM tfunc__extract__extract_object__1__2[] = {
  0, // locals
  0, // no parameters
  // 204: loop:
  // 205:   if
  // 206:     length_of(tokens) < 3
  // 207:     invalid_attribute
  // 208:     :
  // 209:       $key tokens(1)
  // 210:       if_not
  // 211:         key.is_a_string && tokens(2) == ':'
  // 212:         invalid_attribute
  // 213:         :
  // ...
  var_no__loop, 1, -func__extract__extract_object__1__2__1, -1
};

static TAB_NUM tfunc__extract__extract_object__1[] = {
  2, // locals
  0, // no parameters
  // 201: tokens(1)
  var_no__extract__tokens, 1, -number__1, 1, 5,
  // 201: tokens(1) == '}'
  var_no__std___equal, 2, 5, -character__125, 1, 4,
  // 200: if
  // 201:   tokens(1) == '}'
  // 202:   -> range(tokens 2 -1) attributes
  // 203:   :
  // 204:     loop:
  // 205:       if
  // 206:         length_of(tokens) < 3
  // 207:         invalid_attribute
  // 208:         :
  // 209:           $key tokens(1)
  // ...
  var_no__if, 3, 4, -func__extract__extract_object__1__1, -func__extract__extract_object__1__2, -1
};

static TAB_NUM tfunc__extract__extract_object__missing_closing_brace[] = {
  0, // locals
  0, // no parameters
  // 229: error PARSE_ERROR "Closing brace expected" tokens
  var_no__error, 3, var_no__PARSE_ERROR, -string__108307707, var_no__extract__tokens, -1
};

static TAB_NUM tfunc__extract__extract_object__invalid_attribute[] = {
  0, // locals
  0, // no parameters
  // 232: error PARSE_ERROR "Invalid attribute" tokens
  var_no__error, 3, var_no__PARSE_ERROR, -string__3391120456, var_no__extract__tokens, -1
};

static TAB_NUM tfunc__extract__extract_object[] = {
  1, // locals
  0, // no parameters
  // 195: $attributes empty_insert_order_table
  LET, 1, var_no__empty_insert_order_table, 1, var_no__extract__extract_object__attributes,
  // 197: tokens.is_empty
  var_no__is_empty, 1, var_no__extract__tokens, 1, 4,
  // 196: if
  // 197:   tokens.is_empty
  // 198:   missing_closing_brace
  // 199:   :
  // 200:     if
  // 201:       tokens(1) == '}'
  // 202:       -> range(tokens 2 -1) attributes
  // 203:       :
  // 204:         loop:
  // 205:           if
  // ...
  var_no__if, 3, 4, var_no__extract__extract_object__missing_closing_brace, -func__extract__extract_object__1, -1
};

static TAB_NUM tfunc__extract__extract_array__1__1[] = {
  1, // locals
  0, // no parameters
  // 242: ... range(tokens 2 -1)
  var_no__range, 3, var_no__extract__tokens, -number__2, -number__m1, 1, 4,
  // 242: -> range(tokens 2 -1) items
  LET, 2, 4, var_no__extract__extract_array__1__items, -1
};

static TAB_NUM tfunc__extract__extract_array__1__2__1__1__1[] = {
  0, // locals
  0, // no parameters
  // 253: range &tokens 2 -1
  var_no__range, 3, var_no__extract__tokens, -number__2, -number__m1, 1, var_no__extract__tokens,
  // 254: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__extract__extract_array__1__2__1__1__2[] = {
  1, // locals
  0, // no parameters
  // 255: ... range(tokens 2 -1)
  var_no__range, 3, var_no__extract__tokens, -number__2, -number__m1, 1, 4,
  // 255: ... -> range(tokens 2 -1) items
  LET, 2, 4, var_no__extract__extract_array__1__items, -1
};

static TAB_NUM tfunc__extract__extract_array__1__2__1__1[] = {
  1, // locals
  0, // no parameters
  // 251: ... tokens(1)
  var_no__extract__tokens, 1, -number__1, 1, 4,
  // 251: case tokens(1)
  // 252:   ',':
  // 253:     range &tokens 2 -1
  // 254:     next
  // 255:   ']' -> range(tokens 2 -1) items
  // 256:   missing_closing_bracket
  var_no__case, 6, 4, -character__44, -func__extract__extract_array__1__2__1__1__1, -character__93, -func__extract__extract_array__1__2__1__1__2, var_no__extract__extract_array__missing_closing_bracket, -1
};

static TAB_NUM tfunc__extract__extract_array__1__2__1[] = {
  2, // locals
  0, // no parameters
  // 245: extract &tokens $item
  var_no__extract, 1, var_no__extract__tokens, 2, var_no__extract__tokens, var_no__extract__extract_array__1__2__1__item,
  // 246: push &items item
  var_no__push, 2, var_no__extract__extract_array__1__items, var_no__extract__extract_array__1__2__1__item, 1, var_no__extract__extract_array__1__items,
  // 248: tokens.is_empty
  var_no__is_empty, 1, var_no__extract__tokens, 1, 4,
  // 247: if
  // 248:   tokens.is_empty
  // 249:   missing_closing_bracket
  // 250:   :
  // 251:     case tokens(1)
  // 252:       ',':
  // 253:         range &tokens 2 -1
  // 254:         next
  // 255:       ']' -> range(tokens 2 -1) items
  // 256:       missing_closing_bracket
  var_no__if, 3, 4, var_no__extract__extract_array__missing_closing_bracket, -func__extract__extract_array__1__2__1__1, -1
};

static TAB_NUM tfunc__extract__extract_array__1__2[] = {
  0, // locals
  0, // no parameters
  // 244: loop:
  // 245:   extract &tokens $item
  // 246:   push &items item
  // 247:   if
  // 248:     tokens.is_empty
  // 249:     missing_closing_bracket
  // 250:     :
  // 251:       case tokens(1)
  // 252:         ',':
  // 253:           range &tokens 2 -1
  // ...
  var_no__loop, 1, -func__extract__extract_array__1__2__1, -1
};

static TAB_NUM tfunc__extract__extract_array__1[] = {
  2, // locals
  0, // no parameters
  // 239: $items empty_list
  LET, 1, var_no__empty_list, 1, var_no__extract__extract_array__1__items,
  // 241: tokens(1)
  var_no__extract__tokens, 1, -number__1, 1, 5,
  // 241: tokens(1) == ']'
  var_no__std___equal, 2, 5, -character__93, 1, 4,
  // 240: if
  // 241:   tokens(1) == ']'
  // 242:   -> range(tokens 2 -1) items
  // 243:   :
  // 244:     loop:
  // 245:       extract &tokens $item
  // 246:       push &items item
  // 247:       if
  // 248:         tokens.is_empty
  // 249:         missing_closing_bracket
  // ...
  var_no__if, 3, 4, -func__extract__extract_array__1__1, -func__extract__extract_array__1__2, -1
};

static TAB_NUM tfunc__extract__extract_array__missing_closing_bracket[] = {
  0, // locals
  0, // no parameters
  // 259: error PARSE_ERROR "Closing bracket expected" tokens
  var_no__error, 3, var_no__PARSE_ERROR, -string__108307707_2, var_no__extract__tokens, -1
};

static TAB_NUM tfunc__extract__extract_array[] = {
  1, // locals
  0, // no parameters
  // 236: tokens.is_empty
  var_no__is_empty, 1, var_no__extract__tokens, 1, 4,
  // 235: if
  // 236:   tokens.is_empty
  // 237:   missing_closing_bracket
  // 238:   :
  // 239:     $items empty_list
  // 240:     if
  // 241:       tokens(1) == ']'
  // 242:       -> range(tokens 2 -1) items
  // 243:       :
  // 244:         loop:
  // ...
  var_no__if, 3, 4, var_no__extract__extract_array__missing_closing_bracket, -func__extract__extract_array__1, -1
};

static TAB_NUM tfunc__extract[] = {
  1, // locals
  1, // parameters:
  var_no__extract__tokens,
  // 183: $token tokens(1)
  var_no__extract__tokens, 1, -number__1, 1, var_no__extract__token,
  // 184: range &tokens 2 -1
  var_no__range, 3, var_no__extract__tokens, -number__2, -number__m1, 1, var_no__extract__tokens,
  // 186: token.is_simple
  var_no__is_simple, 1, var_no__extract__token, 1, 4,
  // 185: if
  // 186:   token.is_simple
  // 187:   -> tokens token
  // 188:   :
  // 189:     case token
  // 190:       '{' extract_object
  // 191:       '[' extract_array
  // 192:       : error PARSE_ERROR "Unexpected token" tokens
  var_no__if, 3, 4, -func__extract__1, -func__extract__2, -1
};


static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_UNIQUE, 0, {.str_8 = "std::PARSE_ERROR"}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std___from_json}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__tokenize}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__extract}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std__from_json__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std__from_json__2}},
  {FLT_STRING_8, 30, {.str_8 = "text contains multiple objects"}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_CHARACTER, 0, {.value = 48}},
  {FLT_CHARACTER, 0, {.value = 57}},
  {FLT_CHARACTER, 0, {.value = 44}},
  {FLT_CHARACTER, 0, {.value = 58}},
  {FLT_CHARACTER, 0, {.value = 123}},
  {FLT_CHARACTER, 0, {.value = 125}},
  {FLT_CHARACTER, 0, {.value = 91}},
  {FLT_CHARACTER, 0, {.value = 93}},
  {FLT_CHARACTER, 0, {.value = 116}},
  {FLT_CHARACTER, 0, {.value = 102}},
  {FLT_CHARACTER, 0, {.value = 110}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_simple_token}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_true}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_false}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_null}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_number}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_string}},
  {FLT_STRING_8, 16, {.str_8 = "unexpected input"}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_true__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_true__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_true__3}},
  {FLT_STRING_8, 3, {.str_8 = "rue"}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_STRING_8, 18, {.str_8 = "invalid identifier"}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_false__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_false__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_false__3}},
  {FLT_STRING_8, 4, {.str_8 = "alse"}},
  {FLT_POSITIVE_INT64, 0, {.value = 5}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_null__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_null__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_null__3}},
  {FLT_STRING_8, 3, {.str_8 = "ull"}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_number__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_number__2}},
  {FLT_STRING_8, 23, {.str_8 = "invalid numeric literal"}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_string__handle_string_character}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_string__handle_string_character__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_string__handle_string_character__2}},
  {FLT_STRING_8, 39, {.str_8 = "Missing closing quote in string literal"}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__1}},
  {FLT_CHARACTER, 0, {.value = 92}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__3}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__2__invalid_special_character}},
  {FLT_CHARACTER, 0, {.value = 98}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__3}},
  {FLT_CHARACTER, 0, {.value = 114}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__4}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__5}},
  {FLT_CHARACTER, 0, {.value = 117}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__6}},
  {FLT_CHARACTER, 0, {.value = 118}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__7}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__8}},
  {FLT_CHARACTER, 0, {.value = 8}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_CHARACTER, 0, {.value = 12}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_CHARACTER, 0, {.value = 13}},
  {FLT_CHARACTER, 0, {.value = 9}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__6__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__tokenize__1__2__2__handle_string__handle_string_character__2__2__1__6__1__1}},
  {FLT_POSITIVE_INT64, 0, {.value = 6}},
  {FLT_CHARACTER, 0, {.value = 11}},
  {FLT_STRING_8, 43, {.str_8 = "Invalid special character in string literal"}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__extract__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__extract__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__extract__extract_object}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__extract__extract_array}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__extract__2__1}},
  {FLT_STRING_8, 16, {.str_8 = "Unexpected token"}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__extract__extract_object__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__extract__extract_object__missing_closing_brace}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__extract__extract_object__invalid_attribute}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__extract__extract_object__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__extract__extract_object__1__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__extract__extract_object__1__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__extract__extract_object__1__2__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__extract__extract_object__1__2__1__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__extract__extract_object__1__2__1__1__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__extract__extract_object__1__2__1__1__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__extract__extract_object__1__2__1__1__2__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__extract__extract_object__1__2__1__1__2__1__2}},
  {FLT_STRING_8, 22, {.str_8 = "Closing brace expected"}},
  {FLT_STRING_8, 17, {.str_8 = "Invalid attribute"}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__extract__extract_array__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__extract__extract_array__missing_closing_bracket}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__extract__extract_array__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__extract__extract_array__1__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__extract__extract_array__1__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__extract__extract_array__1__2__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__extract__extract_array__1__2__1__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__extract__extract_array__1__2__1__1__2}},
  {FLT_STRING_8, 24, {.str_8 = "Closing bracket expected"}}
};

static ATTRIBUTE_DEFINITION std_types___object__attributes[] = {
  {-var_no__is_simple, -var_no__false}
};

static ATTRIBUTE_DEFINITION std_types___number__attributes[] = {
  {-var_no__is_simple, -var_no__true}
};

static ATTRIBUTE_DEFINITION std_types___string__attributes[] = {
  {-var_no__is_simple, -var_no__true}
};

static ATTRIBUTE_DEFINITION std_types___true__attributes[] = {
  {-var_no__is_simple, -var_no__true}
};

static ATTRIBUTE_DEFINITION std_types___false__attributes[] = {
  {-var_no__is_simple, -var_no__true}
};

static ATTRIBUTE_DEFINITION std_types___undefined__attributes[] = {
  {-var_no__is_simple, -var_no__true}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_INITIALIZED, 0, 0,
    "PARSE_ERROR\000std", NULL,
    {.const_idx = unique__std___PARSE_ERROR}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "from_json\000std", NULL,
    {.const_idx = func__std___from_json}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "tokenize\000", NULL,
    {.const_idx = func__tokenize}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_simple\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types___object__attributes,
  },
  {
    FOT_UNKNOWN, 0, 1,
    "number\000std_types", std_types___number__attributes,
  },
  {
    FOT_UNKNOWN, 0, 1,
    "string\000std_types", std_types___string__attributes,
  },
  {
    FOT_UNKNOWN, 0, 1,
    "true\000std_types", std_types___true__attributes,
  },
  {
    FOT_UNKNOWN, 0, 1,
    "false\000std_types", std_types___false__attributes,
  },
  {
    FOT_UNKNOWN, 0, 1,
    "undefined\000std_types", std_types___undefined__attributes,
  },
  {
    FOT_INITIALIZED, 0, 0,
    "extract\000", NULL,
    {.const_idx = func__extract}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std__from_json__tokens\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std__from_json__obj\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split_into_lines\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PARSE_ERROR\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "tokenize__line\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "tokenize__tokens\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "tokenize__i\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "tokenize__n\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "tokenize__1__2__chr\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "value_range\000std", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "tokenize__1__2__2__handle_number__number\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "tokenize__1__2__2__handle_number__value\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_number\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "tokenize__1__2__2__handle_string__s\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "tokenize__1__2__2__handle_string__str\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "tokenize__1__2__2__handle_string__handle_string_character__2__str_chr\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "tokenize__1__2__2__handle_string__handle_string_character__2__2__1__spec_chr\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "tokenize__1__2__2__handle_string__handle_string_character__2__2__1__6__1__code\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "extract__tokens\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "extract__token\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "extract__extract_object__attributes\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_table\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "extract__extract_object__1__2__1__1__key\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "extract__extract_array__1__items\000", NULL,
  }
};

FUNKY_MODULE module__basic__import__json = {
  "_basic__import__json",
  "/home/leachim/source/cmds/funky/master/basic/import/json.fky",
  0, 0,
  0, 1,
  117, 62,
  NULL,
  NULL, used_namespaces,
  constants_table, variables_table
};
