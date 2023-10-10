#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func__std_types___generic_list___put = 1,
  func__std_types___generic_list___get,
  func__std_types___generic_list___pop,
  func__std_types___generic_list___truncate,
  func__std_types___generic_list___append_or_error,
  func__std___concatenate,
  func__std___concatenate_non_empty,
  func__std_types___generic_list___reverse,
  func__std_types___generic_list___for_each,
  func__std_types___generic_list___map,
  func__std_types___generic_list___map_or_error,
  func__std_types___generic_list___std___reduce,
  func__std_types___generic_list___map_reduce,
  func__std_types___generic_list___sort,
  func__std_types___generic_list___intersection,
  func__std_types___generic_list___merge,
  func__std_types___generic_list___zip,
  func__std_types___generic_list___flatten,
  func__std_types___list___flatten,
  func__std_types___generic_list___dup,
  func__std_types___generic_list___contains,
  func__std_types___generic_list___find_first,
  func__std_types___generic_list___filter,
  func__std___levenshtein_distance,
  func__std_types___list___to_list,
  string__625086679,
  func__std_types___list___serialize,
  func__std_types___list___deserializer_of,
  number__2,
  number__m1,
  number__1,
  number__m2,
  func__std_types__generic_list___truncate__1,
  func__std_types__generic_list___truncate__2,
  func__std_types__generic_list___append_or_error__1,
  func__std_types__generic_list___append_or_error__2,
  func__std_types__generic_list__append_or_error__2__1,
  func__std_types__generic_list__append_or_error__2__2,
  func__std__concatenate__func,
  func__std__concatenate_non_empty__func,
  func__std__concatenate_non_empty__func__1,
  func__std__concatenate_non_empty__func__2,
  func__std__concatenate_non_empty__func__2__1,
  func__std__concatenate_non_empty__func__2__2,
  func__std_types__generic_list___reverse__1,
  func__std_types__generic_list___reverse__2,
  func__std_types__generic_list___for_each__iterate_1,
  func__std_types__generic_list___for_each__iterate_2,
  func__std_types__generic_list___for_each__1,
  func__std_types__generic_list___for_each__2,
  func__std_types__generic_list___for_each__3,
  func__std_types__generic_list__for_each__iterate_1__1,
  func__std_types__generic_list__for_each__iterate_1__2,
  func__std_types__generic_list__for_each__iterate_2__1,
  func__std_types__generic_list__for_each__iterate_2__2,
  func__std_types__generic_list__for_each__2__1,
  func__std_types__generic_list__for_each__3__1,
  func__std_types__generic_list___map__1,
  func__std_types__generic_list___map__2,
  func__std_types__generic_list__map__2__1,
  func__std_types__generic_list__map__2__2,
  func__std_types__generic_list__map__2__1__1,
  func__std_types__generic_list__map__2__1__1__1,
  func__std_types__generic_list__map__2__1__1__2,
  func__std_types__generic_list__map__2__2__1,
  func__std_types__generic_list__map__2__2__1__1,
  func__std_types__generic_list__map__2__2__1__2,
  func__std_types__generic_list___map_or_error__1,
  func__std_types__generic_list___map_or_error__2,
  func__std_types__generic_list__map_or_error__2__1,
  func__std_types__generic_list__map_or_error__2__2,
  func__std_types__generic_list__map_or_error__2__1__1,
  func__std_types__generic_list__map_or_error__2__1__1__1,
  func__std_types__generic_list__map_or_error__2__1__1__2,
  func__std_types__generic_list__map_or_error__2__1__1__2__1,
  func__std_types__generic_list__map_or_error__2__1__1__2__2,
  func__std_types__generic_list__map_or_error__2__2__1,
  func__std_types__generic_list__map_or_error__2__2__1__1,
  func__std_types__generic_list__map_or_error__2__2__1__2,
  func__std_types__generic_list__map_or_error__2__2__1__2__1,
  func__std_types__generic_list__map_or_error__2__2__1__2__2,
  func__std_types__generic_list___std___reduce__1,
  func__std_types__generic_list___std___reduce__2,
  func__std_types__generic_list__std___reduce__2__reduce,
  func__std_types__generic_list__std__reduce__2__reduce__1,
  func__std_types__generic_list__std__reduce__2__reduce__2,
  func__std_types__generic_list___map_reduce__1,
  func__std_types__generic_list___map_reduce__2,
  func__std_types__generic_list__map_reduce__1__1,
  func__std_types__generic_list__map_reduce__1__2,
  func__std_types__generic_list__map_reduce__1__2__1,
  func__std_types__generic_list__map_reduce__1__2__2,
  func__std_types__generic_list__map_reduce__1__2__1__1,
  func__std_types__generic_list__map_reduce__1__2__1__1__1,
  func__std_types__generic_list__map_reduce__1__2__1__1__2,
  func__std_types__generic_list__map_reduce__1__2__2__1,
  func__std_types__generic_list__map_reduce__1__2__2__1__1,
  func__std_types__generic_list__map_reduce__1__2__2__1__2,
  func__std_types__generic_list__map_reduce__2__1,
  func__std_types__generic_list__map_reduce__2__2,
  func__std_types__generic_list__map_reduce__2__2__1,
  func__std_types__generic_list__map_reduce__2__2__2,
  func__std_types__generic_list__map_reduce__2__2__1__1,
  func__std_types__generic_list__map_reduce__2__2__1__1__1,
  func__std_types__generic_list__map_reduce__2__2__1__1__2,
  func__std_types__generic_list__map_reduce__2__2__2__1,
  func__std_types__generic_list__map_reduce__2__2__2__1__1,
  func__std_types__generic_list__map_reduce__2__2__2__1__2,
  func__std_types__generic_list___sort__sort,
  func__std_types__generic_list__sort__sort__1,
  func__std_types__generic_list__sort__sort__2,
  func__std_types__generic_list___intersection__1,
  func__std_types__generic_list___intersection__2,
  func__std_types__generic_list___intersection__3,
  func__std_types__generic_list__intersection__3__1,
  func__std_types__generic_list__intersection__3__1__1,
  func__std_types__generic_list__intersection__3__1__2,
  func__std_types__generic_list___merge__1,
  func__std_types__generic_list__merge__1__1,
  func__std_types__generic_list__merge__1__2,
  func__std_types__generic_list__merge__1__1__1,
  func__std_types__generic_list__merge__1__1__2,
  func__std_types__generic_list__merge__1__1__1__1,
  func__std_types__generic_list__merge__1__1__1__2,
  func__std_types__generic_list___zip__1,
  func__std_types__generic_list___zip__2,
  func__std_types__generic_list__zip__2__1,
  func__std_types__generic_list__zip__2__2,
  func__std_types__generic_list__zip__2__3,
  func__std_types__generic_list__zip__2__1__1,
  func__std_types__generic_list__zip__2__2__1,
  func__std_types__generic_list__zip__2__3__1,
  func__std_types__list___flatten__1,
  func__std_types__list__flatten__1__1,
  func__std_types__list__flatten__1__2,
  number__0,
  func__std_types__generic_list___dup__1,
  func__std_types__generic_list___dup__2,
  func__std_types__generic_list___dup__3,
  func__std_types__generic_list__dup__3__1,
  func__std_types__generic_list__dup__3__2,
  func__std_types__generic_list___contains__1,
  func__std_types__generic_list___contains__2,
  func__std_types__generic_list__contains__2__1,
  func__std_types__generic_list__contains__2__2,
  func__std_types__generic_list___find_first__1,
  func__std_types__generic_list___find_first__2,
  func__std_types__generic_list__find_first__1__1,
  func__std_types__generic_list__find_first__1__2,
  func__std_types__generic_list__find_first__1__1__1,
  func__std_types__generic_list__find_first__2__1,
  func__std_types__generic_list__find_first__2__2,
  func__std_types__generic_list__find_first__2__1__1,
  func__std_types__generic_list___filter__1,
  func__std_types__generic_list___filter__2,
  func__std_types__generic_list__filter__1__1,
  func__std_types__generic_list__filter__1__2,
  func__std_types__generic_list__filter__1__2__1,
  func__std_types__generic_list__filter__1__2__2,
  func__std_types__generic_list__filter__1__2__1__1,
  func__std_types__generic_list__filter__1__2__1__2,
  func__std_types__generic_list__filter__2__1,
  func__std_types__generic_list__filter__2__2,
  func__std_types__generic_list__filter__2__2__filter,
  func__std_types__generic_list__filter__2__2__filter__1,
  func__std_types__generic_list__filter__2__2__filter__2,
  func__std_types__generic_list__filter__2__2__filter__2__1,
  func__std_types__generic_list__filter__2__2__filter__2__2,
  func__std__levenshtein_distance__1,
  func__std__levenshtein_distance__2,
  func__std__levenshtein_distance__3,
  func__std__levenshtein_distance__4,
  func__std__levenshtein_distance__3__1,
  func__std__levenshtein_distance__3__2,
  func__std__levenshtein_distance__3__1__1,
  func__std__levenshtein_distance__3__1__2,
  func__std_types__list___serialize__1,
  func__std_types__list___serialize__2,
  func__std_types__list___serialize__3,
  string__2577886713,
  string__181749755,
  string__1922308840,
  func__std_types__list___serialize__4
};

enum {
  var_no__basic_loops___self = FIRST_VAR+0,
  var_no__std___is_a_generic_list,
  var_no__std___is_a_list,
  var_no__std_types___object,
  var_no__is_a_generic_list,
  var_no__is_a_list,
  var_no__std_types___generic_list,
  var_no__std_types___list,
  var_no__put,
  var_no__get,
  var_no__pop,
  var_no__truncate,
  var_no__append_or_error,
  var_no__separator_of,
  var_no__std___concatenate,
  var_no__std___concatenate_non_empty,
  var_no__reverse,
  var_no__for_each,
  var_no__map,
  var_no__map_or_error,
  var_no__std___reduce,
  var_no__map_reduce,
  var_no__sort,
  var_no__intersection,
  var_no__merge,
  var_no__zip,
  var_no__flatten,
  var_no__dup,
  var_no__contains,
  var_no__find_first,
  var_no__filter,
  var_no__std___levenshtein_distance,
  var_no__to_list,
  var_no__serialization_tag_of,
  var_no__serialize,
  var_no__deserializer_of,
  var_no__empty_collection_of,
  var_no__undefined,
  var_no__false,
  var_no__true,
  var_no__empty_list,
  var_no__std_types__generic_list___put__self = 6,
  var_no__std_types__generic_list___put__item = 7,
  var_no__list = FIRST_VAR+41,
  var_no__append,
  var_no__std_types__generic_list___get__self = 6,
  var_no__range = FIRST_VAR+43,
  var_no__std_types__generic_list___pop__self = 6,
  var_no__std_types__generic_list___truncate__self = FIRST_VAR+44,
  var_no__std_types__generic_list___truncate__n,
  var_no__std_types__generic_list___truncate__len = 5,
  var_no__length_of = FIRST_VAR+46,
  var_no__std___less,
  var_no__if,
  var_no__std_types__generic_list___append_or_error__left,
  var_no__std_types__generic_list___append_or_error__right,
  var_no__is_an_error,
  var_no__std__concatenate__separator = 5,
  var_no__std__concatenate__func = -func__std__concatenate__func,
  var_no__std__concatenate__func__myself = 6,
  var_no__std__concatenate__func__left = 7,
  var_no__std__concatenate__func__right = 8,
  var_no__std__concatenate_non_empty__separator = 5,
  var_no__std__concatenate_non_empty__func = -func__std__concatenate_non_empty__func,
  var_no__std__concatenate_non_empty__func__myself = FIRST_VAR+52,
  var_no__std__concatenate_non_empty__func__left,
  var_no__std__concatenate_non_empty__func__right,
  var_no__is_empty,
  var_no__std_types__generic_list___reverse__self,
  var_no__std_types__generic_list___reverse__result,
  var_no__from_to_by,
  var_no__std_types__generic_list__reverse__1__idx = 5,
  var_no__push = FIRST_VAR+59,
  var_no__next,
  var_no__std_types__generic_list___for_each__self = 6,
  var_no__std_types__generic_list___for_each__body = 7,
  var_no__std_types__generic_list___for_each__finally = FIRST_VAR+61,
  var_no__std_types__generic_list___for_each__saved_context = 8,
  var_no__std_types__generic_list___for_each__iterate_1 = -func__std_types__generic_list___for_each__iterate_1,
  var_no__std_types__generic_list___for_each__iterate_2 = -func__std_types__generic_list___for_each__iterate_2,
  var_no__tuple = FIRST_VAR+62,
  var_no__break,
  var_no__basic_loops___from,
  var_no__basic_loops___to,
  var_no__basic_loops___body,
  var_no__basic_loops___finally,
  var_no__basic_loops___saved_context_of,
  var_no__parameter_count_of,
  var_no__std___equal,
  var_no__std___not,
  var_no__std_types__generic_list__for_each__1__myself = 5,
  var_no__std___plus = FIRST_VAR+72,
  var_no__std_types__generic_list___map__self,
  var_no__std_types__generic_list___map__function,
  var_no__std_types__generic_list__map__2__map,
  var_no__std_types__generic_list__map__2__1__1__s,
  var_no__std_types__generic_list__map__2__1__1__e,
  var_no__std_types__generic_list__map__2__1__1__1__m = 7,
  var_no__std___shift_right = FIRST_VAR+78,
  var_no__std_types__generic_list__map__2__2__1__s,
  var_no__std_types__generic_list__map__2__2__1__e,
  var_no__std_types__generic_list__map__2__2__1__1__m = 7,
  var_no__std_types__generic_list___map_or_error__self = FIRST_VAR+81,
  var_no__std_types__generic_list___map_or_error__function,
  var_no__std_types__generic_list__map_or_error__2__map,
  var_no__std_types__generic_list__map_or_error__2__1__1__s,
  var_no__std_types__generic_list__map_or_error__2__1__1__e,
  var_no__std_types__generic_list__map_or_error__2__1__1__1__m = 7,
  var_no__std_types__generic_list__map_or_error__2__1__1__2__mapped_item = FIRST_VAR+86,
  var_no__std_types__generic_list__map_or_error__2__2__1__s,
  var_no__std_types__generic_list__map_or_error__2__2__1__e,
  var_no__std_types__generic_list__map_or_error__2__2__1__1__m = 7,
  var_no__std_types__generic_list__map_or_error__2__2__1__2__mapped_item = FIRST_VAR+89,
  var_no__std_types__generic_list___std___reduce__self,
  var_no__std_types__generic_list___std___reduce__function,
  var_no__std_types__generic_list___std___reduce__unit,
  var_no__std_types__generic_list__std___reduce__2__reduce = -func__std_types__generic_list__std___reduce__2__reduce,
  var_no__std_types__generic_list__std__reduce__2__reduce__items = FIRST_VAR+93,
  var_no__std_types__generic_list__std__reduce__2__reduce__n,
  var_no__std_types__generic_list__std__reduce__2__reduce__1__m = 9,
  var_no__std_types__generic_list___map_reduce__self = FIRST_VAR+95,
  var_no__std_types__generic_list___map_reduce__map_function,
  var_no__std_types__generic_list___map_reduce__reduce_function,
  var_no__std_types__generic_list___map_reduce__unit,
  var_no__result_count,
  var_no__std_types__generic_list__map_reduce__1__2__map_reduce,
  var_no__std_types__generic_list__map_reduce__1__2__1__1__s,
  var_no__std_types__generic_list__map_reduce__1__2__1__1__e,
  var_no__std_types__generic_list__map_reduce__1__2__1__1__1__m = 6,
  var_no__std_types__generic_list__map_reduce__1__2__1__1__1__left_items = 7,
  var_no__std_types__generic_list__map_reduce__1__2__1__1__1__left_value = 8,
  var_no__std_types__generic_list__map_reduce__1__2__1__1__1__right_items = 9,
  var_no__std_types__generic_list__map_reduce__1__2__1__1__1__right_value = 10,
  var_no__std_types__generic_list__map_reduce__1__2__1__1__2__item = 5,
  var_no__std_types__generic_list__map_reduce__1__2__1__1__2__value = 6,
  var_no__std_types__generic_list__map_reduce__1__2__2__1__s = FIRST_VAR+103,
  var_no__std_types__generic_list__map_reduce__1__2__2__1__e,
  var_no__std_types__generic_list__map_reduce__1__2__2__1__1__m = 6,
  var_no__std_types__generic_list__map_reduce__1__2__2__1__1__left_items = 7,
  var_no__std_types__generic_list__map_reduce__1__2__2__1__1__left_value = 8,
  var_no__std_types__generic_list__map_reduce__1__2__2__1__1__right_items = 9,
  var_no__std_types__generic_list__map_reduce__1__2__2__1__1__right_value = 10,
  var_no__std_types__generic_list__map_reduce__1__2__2__1__2__item = 5,
  var_no__std_types__generic_list__map_reduce__1__2__2__1__2__value = 6,
  var_no__std_types__generic_list__map_reduce__2__2__map_reduce = FIRST_VAR+105,
  var_no__std_types__generic_list__map_reduce__2__2__1__1__s,
  var_no__std_types__generic_list__map_reduce__2__2__1__1__e,
  var_no__std_types__generic_list__map_reduce__2__2__1__1__1__m = 7,
  var_no__std_types__generic_list__map_reduce__2__2__2__1__s = FIRST_VAR+108,
  var_no__std_types__generic_list__map_reduce__2__2__2__1__e,
  var_no__std_types__generic_list__map_reduce__2__2__2__1__1__m = 7,
  var_no__std_types__generic_list___sort__self = 4,
  var_no__std_types__generic_list___sort__compare = FIRST_VAR+110,
  var_no__std_types__generic_list___sort__sort = -func__std_types__generic_list___sort__sort,
  var_no__less = FIRST_VAR+111,
  var_no__std_types__generic_list__sort__sort__items,
  var_no__std_types__generic_list__sort__sort__n,
  var_no__std_types__generic_list__sort__sort__1__m = 9,
  var_no__std_types__generic_list___intersection__left = FIRST_VAR+114,
  var_no__std_types__generic_list___intersection__right,
  var_no__std___or,
  var_no__std_types__generic_list__intersection__3__1__item,
  var_no__std_types__generic_list___merge__left,
  var_no__std_types__generic_list___merge__right,
  var_no__std_types__generic_list___merge__compare,
  var_no__std_types__generic_list___merge__i,
  var_no__std_types__generic_list___merge__j,
  var_no__std_types__generic_list___merge__n,
  var_no__std_types__generic_list___merge__m,
  var_no__std_types__generic_list___merge__result,
  var_no__new,
  var_no__loop,
  var_no__std_types__generic_list___zip__left,
  var_no__std_types__generic_list___zip__right,
  var_no__std_types__generic_list___zip__n,
  var_no__std_types__generic_list___zip__m,
  var_no__std_types__generic_list___zip__k,
  var_no__std_types__generic_list___zip__result,
  var_no__min,
  var_no__from_to,
  var_no__std_types__generic_list__zip__1__i = 5,
  var_no__cond = FIRST_VAR+136,
  var_no__std_types__generic_list___flatten__self = 4,
  var_no__std_types__list___flatten__self = 4,
  var_no__std_types__list__flatten__1__item = FIRST_VAR+137,
  var_no__std_types__generic_list___dup__self,
  var_no__std_types__generic_list___dup__n,
  var_no__case,
  var_no__std_types__generic_list__dup__3__h = 6,
  var_no__std_types__generic_list__dup__3__lst = 7,
  var_no__std_types__generic_list__dup__3__dlst = FIRST_VAR+141,
  var_no__std___times,
  var_no__std_types__generic_list___contains__self,
  var_no__std_types__generic_list___contains__item,
  var_no__std_types__generic_list___find_first__self,
  var_no__std_types__generic_list___find_first__test,
  var_no__std_types__generic_list__find_first__1__1__idx,
  var_no__std_types__generic_list__find_first__1__1__item,
  var_no__std_types__generic_list__find_first__2__1__item,
  var_no__std_types__generic_list___filter__self,
  var_no__std_types__generic_list___filter__test,
  var_no__std_types__generic_list__filter__1__2__good,
  var_no__std_types__generic_list__filter__1__2__bad,
  var_no__std_types__generic_list__filter__1__2__1__item,
  var_no__std_types__generic_list__filter__2__2__filter = -func__std_types__generic_list__filter__2__2__filter,
  var_no__std_types__generic_list__filter__2__2__filter__s = FIRST_VAR+155,
  var_no__std_types__generic_list__filter__2__2__filter__e,
  var_no__std_types__generic_list__filter__2__2__filter__1__m = 7,
  var_no__std__levenshtein_distance__s = FIRST_VAR+157,
  var_no__std__levenshtein_distance__t,
  var_no__std__levenshtein_distance__m = 5,
  var_no__std__levenshtein_distance__n = FIRST_VAR+159,
  var_no__std__levenshtein_distance__v0,
  var_no__std__levenshtein_distance__v1,
  var_no__int16_array,
  var_no__std__levenshtein_distance__1__i = 5,
  var_no__std__levenshtein_distance__3__i = FIRST_VAR+163,
  var_no__std__levenshtein_distance__3__1__j,
  var_no__std__levenshtein_distance__3__1__deletion_cost = 7,
  var_no__std__levenshtein_distance__3__1__insertion_cost = 8,
  var_no__std__levenshtein_distance__3__1__substitution_cost = 9,
  var_no__let = FIRST_VAR+165,
  var_no__std_types__list___to_list__self = 4,
  var_no__std_types__list___serialize__self = 6,
  var_no__std_types__list___serialize__indent = FIRST_VAR+166,
  var_no__std_types__list___serialize__new_indent,
  var_no__std_types__list___serialize__contents = 7,
  var_no__std_types__list___serialize__header = FIRST_VAR+168,
  var_no__is_defined,
  var_no__std___string,
  var_no__update_if,
  var_no__std_types__list__serialize__3__item = 5,
  var_no__tabs_and_spaces = FIRST_VAR+172,
  var_no__std_types__list___deserializer_of__type = 4,
  var_no__std_types__list___deserializer_of__items = 5
};

static TAB_NUM tfunc__std_types___generic_list___put[] = {
  4, // locals
  2, // parameters:
  var_no__std_types__generic_list___put__self,
  var_no__std_types__generic_list___put__item,
  // 61: ... list(item)
  var_no__list, 1, var_no__std_types__generic_list___put__item, 1, 5,
  // 61: ... append(list(item) self)
  var_no__append, 2, 5, var_no__std_types__generic_list___put__self, 1, 4,
  // 61: -> append(list(item) self)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types___generic_list___get[] = {
  3, // locals
  1, // parameters:
  var_no__std_types__generic_list___get__self,
  // 69: ... range(self 2 -1)
  var_no__range, 3, var_no__std_types__generic_list___get__self, -number__2, -number__m1, 1, 4,
  // 69: ... self(1)
  var_no__std_types__generic_list___get__self, 1, -number__1, 1, 5,
  // 69: -> range(self 2 -1) self(1)
  LET, 2, 4, 5, -1
};

static TAB_NUM tfunc__std_types___generic_list___pop[] = {
  3, // locals
  1, // parameters:
  var_no__std_types__generic_list___pop__self,
  // 77: ... range(self 1 -2)
  var_no__range, 3, var_no__std_types__generic_list___pop__self, -number__1, -number__m2, 1, 4,
  // 77: ... self(-1)
  var_no__std_types__generic_list___pop__self, 1, -number__m1, 1, 5,
  // 77: -> range(self 1 -2) self(-1)
  LET, 2, 4, 5, -1
};

static TAB_NUM tfunc__std_types__generic_list___truncate__1[] = {
  1, // locals
  0, // no parameters
  // 89: ... range(self 1 n)
  var_no__range, 3, var_no__std_types__generic_list___truncate__self, -number__1, var_no__std_types__generic_list___truncate__n, 1, 4,
  // 89: -> range(self 1 n)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__generic_list___truncate__2[] = {
  0, // locals
  0, // no parameters
  // 90: -> self
  LET, 1, var_no__std_types__generic_list___truncate__self, -1
};

static TAB_NUM tfunc__std_types___generic_list___truncate[] = {
  2, // locals
  2, // parameters:
  var_no__std_types__generic_list___truncate__self,
  var_no__std_types__generic_list___truncate__n,
  // 86: $len length_of(self)
  var_no__length_of, 1, var_no__std_types__generic_list___truncate__self, 1, var_no__std_types__generic_list___truncate__len,
  // 88: len > n
  var_no__std___less, 2, var_no__std_types__generic_list___truncate__n, var_no__std_types__generic_list___truncate__len, 1, 4,
  // 87: if
  // 88:   len > n
  // 89:   -> range(self 1 n)
  // 90:   -> self
  var_no__if, 3, 4, -func__std_types__generic_list___truncate__1, -func__std_types__generic_list___truncate__2, -1
};

static TAB_NUM tfunc__std_types__generic_list___append_or_error__1[] = {
  0, // locals
  0, // no parameters
  // 95: -> left
  LET, 1, var_no__std_types__generic_list___append_or_error__left, -1
};

static TAB_NUM tfunc__std_types__generic_list__append_or_error__2__1[] = {
  0, // locals
  0, // no parameters
  // 99: -> right
  LET, 1, var_no__std_types__generic_list___append_or_error__right, -1
};

static TAB_NUM tfunc__std_types__generic_list__append_or_error__2__2[] = {
  1, // locals
  0, // no parameters
  // 100: ... append(left right)
  var_no__append, 2, var_no__std_types__generic_list___append_or_error__left, var_no__std_types__generic_list___append_or_error__right, 1, 4,
  // 100: -> append(left right)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__generic_list___append_or_error__2[] = {
  1, // locals
  0, // no parameters
  // 98: right.is_an_error
  var_no__is_an_error, 1, var_no__std_types__generic_list___append_or_error__right, 1, 4,
  //  97: if
  //  98:   right.is_an_error
  //  99:   -> right
  // 100:   -> append(left right)
  var_no__if, 3, 4, -func__std_types__generic_list__append_or_error__2__1, -func__std_types__generic_list__append_or_error__2__2, -1
};

static TAB_NUM tfunc__std_types___generic_list___append_or_error[] = {
  1, // locals
  2, // parameters:
  var_no__std_types__generic_list___append_or_error__left,
  var_no__std_types__generic_list___append_or_error__right,
  // 94: left.is_an_error
  var_no__is_an_error, 1, var_no__std_types__generic_list___append_or_error__left, 1, 4,
  //  93: if
  //  94:   left.is_an_error
  //  95:   -> left
  //  96:   :
  //  97:     if
  //  98:       right.is_an_error
  //  99:       -> right
  // 100:       -> append(left right)
  var_no__if, 3, 4, -func__std_types__generic_list___append_or_error__1, -func__std_types__generic_list___append_or_error__2, -1
};

static TAB_NUM tfunc__std__concatenate__func[] = {
  5, // locals
  -3, // parameters:
  MYSELF_PARAMETER, var_no__std__concatenate__func__myself,
  MANDATORY_PARAMETER, var_no__std__concatenate__func__left,
  MANDATORY_PARAMETER, var_no__std__concatenate__func__right,
  // 105: ... separator_of(myself)
  var_no__separator_of, 1, var_no__std__concatenate__func__myself, 1, 5,
  // 105: ... append(left separator_of(myself))
  var_no__append, 2, var_no__std__concatenate__func__left, 5, 1, 4,
  // 105: ... append append(left separator_of(myself)) right
  var_no__append, 2, 4, var_no__std__concatenate__func__right, -1
};

static TAB_NUM tfunc__std___concatenate[] = {
  2, // locals
  1, // parameters:
  var_no__std__concatenate__separator,
  // 106: ... func(.separator_of separator)
  LET, -1, var_no__std__concatenate__func, var_no__separator_of, var_no__std__concatenate__separator, 4,
  // 106: -> func(.separator_of separator)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std__concatenate_non_empty__func__1[] = {
  0, // locals
  0, // no parameters
  // 112: -> right
  LET, 1, var_no__std__concatenate_non_empty__func__right, -1
};

static TAB_NUM tfunc__std__concatenate_non_empty__func__2__1[] = {
  0, // locals
  0, // no parameters
  // 116: -> left
  LET, 1, var_no__std__concatenate_non_empty__func__left, -1
};

static TAB_NUM tfunc__std__concatenate_non_empty__func__2__2[] = {
  3, // locals
  0, // no parameters
  // 117: ... separator_of(myself)
  var_no__separator_of, 1, var_no__std__concatenate_non_empty__func__myself, 1, 6,
  // 117: ... append(left separator_of(myself))
  var_no__append, 2, var_no__std__concatenate_non_empty__func__left, 6, 1, 5,
  // 117: ... append(append(left separator_of(myself)) right)
  var_no__append, 2, 5, var_no__std__concatenate_non_empty__func__right, 1, 4,
  // 117: -> append(append(left separator_of(myself)) right)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std__concatenate_non_empty__func__2[] = {
  1, // locals
  0, // no parameters
  // 115: right.is_empty
  var_no__is_empty, 1, var_no__std__concatenate_non_empty__func__right, 1, 4,
  // 114: if
  // 115:   right.is_empty
  // 116:   -> left
  // 117:   -> append(append(left separator_of(myself)) right)
  var_no__if, 3, 4, -func__std__concatenate_non_empty__func__2__1, -func__std__concatenate_non_empty__func__2__2, -1
};

static TAB_NUM tfunc__std__concatenate_non_empty__func[] = {
  1, // locals
  -3, // parameters:
  MYSELF_PARAMETER, var_no__std__concatenate_non_empty__func__myself,
  MANDATORY_PARAMETER, var_no__std__concatenate_non_empty__func__left,
  MANDATORY_PARAMETER, var_no__std__concatenate_non_empty__func__right,
  // 111: left.is_empty
  var_no__is_empty, 1, var_no__std__concatenate_non_empty__func__left, 1, 4,
  // 110: if
  // 111:   left.is_empty
  // 112:   -> right
  // 113:   :
  // 114:     if
  // 115:       right.is_empty
  // 116:       -> left
  // 117:       -> append(append(left separator_of(myself)) right)
  var_no__if, 3, 4, -func__std__concatenate_non_empty__func__1, -func__std__concatenate_non_empty__func__2, -1
};

static TAB_NUM tfunc__std___concatenate_non_empty[] = {
  2, // locals
  1, // parameters:
  var_no__std__concatenate_non_empty__separator,
  // 118: ... func(.separator_of separator)
  LET, -1, var_no__std__concatenate_non_empty__func, var_no__separator_of, var_no__std__concatenate_non_empty__separator, 4,
  // 118: -> func(.separator_of separator)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__generic_list___reverse__1[] = {
  2, // locals
  1, // parameters:
  var_no__std_types__generic_list__reverse__1__idx,
  // 133: ... self(idx)
  var_no__std_types__generic_list___reverse__self, 1, var_no__std_types__generic_list__reverse__1__idx, 1, 4,
  // 133: push &result self(idx)
  var_no__push, 2, var_no__std_types__generic_list___reverse__result, 4, 1, var_no__std_types__generic_list___reverse__result,
  // 134: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__std_types__generic_list___reverse__2[] = {
  0, // locals
  0, // no parameters
  // 135: -> result
  LET, 1, var_no__std_types__generic_list___reverse__result, -1
};

static TAB_NUM tfunc__std_types___generic_list___reverse[] = {
  1, // locals
  1, // parameters:
  var_no__std_types__generic_list___reverse__self,
  // 130: $result empty_collection_of(self)
  var_no__empty_collection_of, 1, var_no__std_types__generic_list___reverse__self, 1, var_no__std_types__generic_list___reverse__result,
  // 131: ... length_of(self)
  var_no__length_of, 1, var_no__std_types__generic_list___reverse__self, 1, 4,
  // 131: from_to_by length_of(self) 1 -1
  // 132:   : (idx)
  // 133:     push &result self(idx)
  // 134:     next
  // 135:   -> result
  var_no__from_to_by, 5, 4, -number__1, -number__m1, -func__std_types__generic_list___reverse__1, -func__std_types__generic_list___reverse__2, -1
};

static TAB_NUM tfunc__std_types__generic_list__for_each__iterate_1__1[] = {
  1, // locals
  0, // no parameters
  // 220: ... basic_loops::self(basic_loops::from)
  var_no__basic_loops___self, 1, var_no__basic_loops___from, 1, 4,
  // 220: basic_loops::body! basic_loops::self(basic_loops::from)
  // 221:   # supply only the value of each item
  var_no__basic_loops___body, 1, 4, -2
};

static TAB_NUM tfunc__std_types__generic_list__for_each__iterate_1__2[] = {
  0, // locals
  0, // no parameters
  // 223: break!
  var_no__break, 0, -2
};

static TAB_NUM tfunc__std_types__generic_list___for_each__iterate_1[] = {
  2, // locals
  0, // no parameters
  // 218: basic_loops::from <= basic_loops::to
  var_no__std___less, 2, var_no__basic_loops___to, var_no__basic_loops___from, 1, 5,
  // 218: basic_loops::from <= basic_loops::to
  var_no__std___not, 1, 5, 1, 4,
  // 217: if
  // 218:   basic_loops::from <= basic_loops::to # another item available?
  // 219:   :
  // 220:     basic_loops::body! basic_loops::self(basic_loops::from)
  // 221:       # supply only the value of each item
  // 222:   :
  // 223:     break!
  var_no__if, 3, 4, -func__std_types__generic_list__for_each__iterate_1__1, -func__std_types__generic_list__for_each__iterate_1__2, -2
};

static TAB_NUM tfunc__std_types__generic_list__for_each__iterate_2__1[] = {
  1, // locals
  0, // no parameters
  // 229: ... basic_loops::self(basic_loops::from)
  var_no__basic_loops___self, 1, var_no__basic_loops___from, 1, 4,
  // 229: basic_loops::body! basic_loops::from basic_loops::self(basic_loops::from)
  // 230:   # supply index *and* value of each item
  var_no__basic_loops___body, 2, var_no__basic_loops___from, 4, -2
};

static TAB_NUM tfunc__std_types__generic_list__for_each__iterate_2__2[] = {
  0, // locals
  0, // no parameters
  // 232: break!
  var_no__break, 0, -2
};

static TAB_NUM tfunc__std_types__generic_list___for_each__iterate_2[] = {
  2, // locals
  0, // no parameters
  // 227: basic_loops::from <= basic_loops::to
  var_no__std___less, 2, var_no__basic_loops___to, var_no__basic_loops___from, 1, 5,
  // 227: basic_loops::from <= basic_loops::to
  var_no__std___not, 1, 5, 1, 4,
  // 226: if
  // 227:   basic_loops::from <= basic_loops::to # another item available?
  // 228:   :
  // 229:     basic_loops::body! basic_loops::from basic_loops::self(basic_loops::from)
  // 230:       # supply index *and* value of each item
  // 231:   :
  // 232:     break!
  var_no__if, 3, 4, -func__std_types__generic_list__for_each__iterate_2__1, -func__std_types__generic_list__for_each__iterate_2__2, -2
};

static TAB_NUM tfunc__std_types__generic_list___for_each__1[] = {
  2, // locals
  -1, // parameters:
  MYSELF_PARAMETER, var_no__std_types__generic_list__for_each__1__myself,
  // 235: !finally basic_loops::finally
  LET, 1, var_no__basic_loops___finally, 1, var_no__std_types__generic_list___for_each__finally,
  // 236: basic_loops::saved_context_of(myself)
  var_no__basic_loops___saved_context_of, 1, var_no__std_types__generic_list__for_each__1__myself, 1, 4,
  // 236: basic_loops::saved_context_of(myself)
  // 237:   !next !break
  // 238:   !basic_loops::from !basic_loops::to !basic_loops::self
  // 239:   !basic_loops::body !basic_loops::finally
  4, 0, 7, var_no__next, var_no__break, var_no__basic_loops___from, var_no__basic_loops___to, var_no__basic_loops___self, var_no__basic_loops___body, var_no__basic_loops___finally,
  // 240: finally!
  var_no__std_types__generic_list___for_each__finally, 0, -2
};

static TAB_NUM tfunc__std_types__generic_list__for_each__2__1[] = {
  0, // locals
  0, // no parameters
  // 247: !basic_loops::from basic_loops::from+1 # increase the list index
  var_no__std___plus, 2, var_no__basic_loops___from, -number__1, 1, var_no__basic_loops___from,
  // 248: iterate_2! # start the next iteration
  var_no__std_types__generic_list___for_each__iterate_2, 0, -2
};

static TAB_NUM tfunc__std_types__generic_list___for_each__2[] = {
  0, // locals
  0, // no parameters
  // 246: !next:
  // 247:   !basic_loops::from basic_loops::from+1 # increase the list index
  // 248:   iterate_2! # start the next iteration
  LET, 1, -func__std_types__generic_list__for_each__2__1, -4, var_no__next,
  // 249: iterate_2! # start the first iteration
  var_no__std_types__generic_list___for_each__iterate_2, 0, -2
};

static TAB_NUM tfunc__std_types__generic_list__for_each__3__1[] = {
  0, // locals
  0, // no parameters
  // 252: !basic_loops::from basic_loops::from+1 # increase the list index
  var_no__std___plus, 2, var_no__basic_loops___from, -number__1, 1, var_no__basic_loops___from,
  // 253: iterate_1! # start the next iteration
  var_no__std_types__generic_list___for_each__iterate_1, 0, -2
};

static TAB_NUM tfunc__std_types__generic_list___for_each__3[] = {
  0, // locals
  0, // no parameters
  // 251: !next:
  // 252:   !basic_loops::from basic_loops::from+1 # increase the list index
  // 253:   iterate_1! # start the next iteration
  LET, 1, -func__std_types__generic_list__for_each__3__1, -4, var_no__next,
  // 254: iterate_1! # start the first iteration
  var_no__std_types__generic_list___for_each__iterate_1, 0, -2
};

static TAB_NUM tfunc__std_types___generic_list___for_each[] = {
  5, // locals
  -3, // parameters:
  MANDATORY_PARAMETER, var_no__std_types__generic_list___for_each__self,
  MANDATORY_PARAMETER, var_no__std_types__generic_list___for_each__body,
  var_no__next, var_no__std_types__generic_list___for_each__finally,
  // 200: $saved_context
  // 201:   tuple
  // 202:     next
  // 203:     break
  // 204:     basic_loops::from
  // 205:     basic_loops::to
  // 206:     basic_loops::self
  // 207:     basic_loops::body
  // 208:     basic_loops::finally
  var_no__tuple, 7, var_no__next, var_no__break, var_no__basic_loops___from, var_no__basic_loops___to, var_no__basic_loops___self, var_no__basic_loops___body, var_no__basic_loops___finally, 1, var_no__std_types__generic_list___for_each__saved_context,
  // 210: !basic_loops::from 1 # the first ...
  LET, 1, -number__1, 1, var_no__basic_loops___from,
  // 211: !basic_loops::to length_of(self) # ... and last index of the list
  var_no__length_of, 1, var_no__std_types__generic_list___for_each__self, 1, var_no__basic_loops___to,
  // 212: !basic_loops::self self
  LET, 1, var_no__std_types__generic_list___for_each__self, 1, var_no__basic_loops___self,
  // 213: !basic_loops::body body
  LET, 1, var_no__std_types__generic_list___for_each__body, 1, var_no__basic_loops___body,
  // 214: !basic_loops::finally finally
  LET, 1, var_no__std_types__generic_list___for_each__finally, 1, var_no__basic_loops___finally,
  // 234: !break: (myself^)
  // 235:   !finally basic_loops::finally
  // 236:   basic_loops::saved_context_of(myself)
  // 237:     !next !break
  // 238:     !basic_loops::from !basic_loops::to !basic_loops::self
  // 239:     !basic_loops::body !basic_loops::finally
  // 240:   finally!
  LET, 1, -func__std_types__generic_list___for_each__1, -4, var_no__break,
  // 242: !break.basic_loops::saved_context_of
  LET, -1, var_no__break, var_no__basic_loops___saved_context_of, var_no__std_types__generic_list___for_each__saved_context, var_no__break,
  // 245: parameter_count_of(body)
  var_no__parameter_count_of, 1, var_no__std_types__generic_list___for_each__body, 1, 5,
  // 245: parameter_count_of(body) == 2
  var_no__std___equal, 2, 5, -number__2, 1, 4,
  // 244: if
  // 245:   parameter_count_of(body) == 2:
  // 246:     !next:
  // 247:       !basic_loops::from basic_loops::from+1 # increase the list index
  // 248:       iterate_2! # start the next iteration
  // 249:     iterate_2! # start the first iteration
  // 250:   :
  // 251:     !next:
  // 252:       !basic_loops::from basic_loops::from+1 # increase the list index
  // 253:       iterate_1! # start the next iteration
  // ...
  var_no__if, 3, 4, -func__std_types__generic_list___for_each__2, -func__std_types__generic_list___for_each__3, -2
};

static TAB_NUM tfunc__std_types__generic_list___map__1[] = {
  0, // locals
  0, // no parameters
  // 271: -> self
  LET, 1, var_no__std_types__generic_list___map__self, -1
};

static TAB_NUM tfunc__std_types__generic_list__map__2__1__1__1[] = {
  4, // locals
  0, // no parameters
  // 280: ... s+e
  var_no__std___plus, 2, var_no__std_types__generic_list__map__2__1__1__s, var_no__std_types__generic_list__map__2__1__1__e, 1, 4,
  // 280: $m (s+e) >> 1
  var_no__std___shift_right, 2, 4, -number__1, 1, var_no__std_types__generic_list__map__2__1__1__1__m,
  // 282: map(s m)
  var_no__std_types__generic_list__map__2__map, 2, var_no__std_types__generic_list__map__2__1__1__s, var_no__std_types__generic_list__map__2__1__1__1__m, 1, 4,
  // 283: ... m+1
  var_no__std___plus, 2, var_no__std_types__generic_list__map__2__1__1__1__m, -number__1, 1, 6,
  // 283: map(m+1 e)
  var_no__std_types__generic_list__map__2__map, 2, 6, var_no__std_types__generic_list__map__2__1__1__e, 1, 5,
  // 281: append
  // 282:   map(s m)
  // 283:   map(m+1 e)
  var_no__append, 2, 4, 5, -1
};

static TAB_NUM tfunc__std_types__generic_list__map__2__1__1__2[] = {
  3, // locals
  0, // no parameters
  // 284: ... self(s)
  var_no__std_types__generic_list___map__self, 1, var_no__std_types__generic_list__map__2__1__1__s, 1, 6,
  // 284: ... function(s self(s))
  var_no__std_types__generic_list___map__function, 2, var_no__std_types__generic_list__map__2__1__1__s, 6, 1, 5,
  // 284: ... list(function(s self(s)))
  var_no__list, 1, 5, 1, 4,
  // 284: -> list(function(s self(s)))
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__generic_list__map__2__1__1[] = {
  1, // locals
  2, // parameters:
  var_no__std_types__generic_list__map__2__1__1__s,
  var_no__std_types__generic_list__map__2__1__1__e,
  // 279: s < e
  var_no__std___less, 2, var_no__std_types__generic_list__map__2__1__1__s, var_no__std_types__generic_list__map__2__1__1__e, 1, 4,
  // 278: if
  // 279:   s < e:
  // 280:     $m (s+e) >> 1
  // 281:     append
  // 282:       map(s m)
  // 283:       map(m+1 e)
  // 284:   -> list(function(s self(s)))
  var_no__if, 3, 4, -func__std_types__generic_list__map__2__1__1__1, -func__std_types__generic_list__map__2__1__1__2, -1
};

static TAB_NUM tfunc__std_types__generic_list__map__2__1[] = {
  0, // locals
  0, // no parameters
  // 276: ->
  // 277:   : (s e)
  // 278:     if
  // 279:       s < e:
  // 280:         $m (s+e) >> 1
  // 281:         append
  // 282:           map(s m)
  // 283:           map(m+1 e)
  // 284:       -> list(function(s self(s)))
  LET, 1, -func__std_types__generic_list__map__2__1__1, -1
};

static TAB_NUM tfunc__std_types__generic_list__map__2__2__1__1[] = {
  4, // locals
  0, // no parameters
  // 289: ... s+e
  var_no__std___plus, 2, var_no__std_types__generic_list__map__2__2__1__s, var_no__std_types__generic_list__map__2__2__1__e, 1, 4,
  // 289: $m (s+e) >> 1
  var_no__std___shift_right, 2, 4, -number__1, 1, var_no__std_types__generic_list__map__2__2__1__1__m,
  // 291: map(s m)
  var_no__std_types__generic_list__map__2__map, 2, var_no__std_types__generic_list__map__2__2__1__s, var_no__std_types__generic_list__map__2__2__1__1__m, 1, 4,
  // 292: ... m+1
  var_no__std___plus, 2, var_no__std_types__generic_list__map__2__2__1__1__m, -number__1, 1, 6,
  // 292: map(m+1 e)
  var_no__std_types__generic_list__map__2__map, 2, 6, var_no__std_types__generic_list__map__2__2__1__e, 1, 5,
  // 290: append
  // 291:   map(s m)
  // 292:   map(m+1 e)
  var_no__append, 2, 4, 5, -1
};

static TAB_NUM tfunc__std_types__generic_list__map__2__2__1__2[] = {
  3, // locals
  0, // no parameters
  // 293: ... self(s)
  var_no__std_types__generic_list___map__self, 1, var_no__std_types__generic_list__map__2__2__1__s, 1, 6,
  // 293: ... function(self(s))
  var_no__std_types__generic_list___map__function, 1, 6, 1, 5,
  // 293: ... list(function(self(s)))
  var_no__list, 1, 5, 1, 4,
  // 293: -> list(function(self(s)))
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__generic_list__map__2__2__1[] = {
  1, // locals
  2, // parameters:
  var_no__std_types__generic_list__map__2__2__1__s,
  var_no__std_types__generic_list__map__2__2__1__e,
  // 288: s < e
  var_no__std___less, 2, var_no__std_types__generic_list__map__2__2__1__s, var_no__std_types__generic_list__map__2__2__1__e, 1, 4,
  // 287: if
  // 288:   s < e:
  // 289:     $m (s+e) >> 1
  // 290:     append
  // 291:       map(s m)
  // 292:       map(m+1 e)
  // 293:   -> list(function(self(s)))
  var_no__if, 3, 4, -func__std_types__generic_list__map__2__2__1__1, -func__std_types__generic_list__map__2__2__1__2, -1
};

static TAB_NUM tfunc__std_types__generic_list__map__2__2[] = {
  0, // locals
  0, // no parameters
  // 285: ->
  // 286:   : (s e)
  // 287:     if
  // 288:       s < e:
  // 289:         $m (s+e) >> 1
  // 290:         append
  // 291:           map(s m)
  // 292:           map(m+1 e)
  // 293:       -> list(function(self(s)))
  LET, 1, -func__std_types__generic_list__map__2__2__1, -1
};

static TAB_NUM tfunc__std_types__generic_list___map__2[] = {
  2, // locals
  0, // no parameters
  // 275: parameter_count_of(function)
  var_no__parameter_count_of, 1, var_no__std_types__generic_list___map__function, 1, 5,
  // 275: parameter_count_of(function) == 2
  var_no__std___equal, 2, 5, -number__2, 1, 4,
  // 273: $map
  // 274:   if
  // 275:     parameter_count_of(function) == 2
  // 276:     ->
  // 277:       : (s e)
  // 278:         if
  // 279:           s < e:
  // 280:             $m (s+e) >> 1
  // 281:             append
  // 282:               map(s m)
  // ...
  var_no__if, 3, 4, -func__std_types__generic_list__map__2__1, -func__std_types__generic_list__map__2__2, 1, var_no__std_types__generic_list__map__2__map,
  // 295: ... length_of(self)
  var_no__length_of, 1, var_no__std_types__generic_list___map__self, 1, 4,
  // 295: map 1 length_of(self)
  var_no__std_types__generic_list__map__2__map, 2, -number__1, 4, -1
};

static TAB_NUM tfunc__std_types___generic_list___map[] = {
  1, // locals
  2, // parameters:
  var_no__std_types__generic_list___map__self,
  var_no__std_types__generic_list___map__function,
  // 270: self.is_empty
  var_no__is_empty, 1, var_no__std_types__generic_list___map__self, 1, 4,
  // 269: if
  // 270:   self.is_empty
  // 271:   -> self
  // 272:   :
  // 273:     $map
  // 274:       if
  // 275:         parameter_count_of(function) == 2
  // 276:         ->
  // 277:           : (s e)
  // 278:             if
  // ...
  var_no__if, 3, 4, -func__std_types__generic_list___map__1, -func__std_types__generic_list___map__2, -1
};

static TAB_NUM tfunc__std_types__generic_list___map_or_error__1[] = {
  0, // locals
  0, // no parameters
  // 315: -> self
  LET, 1, var_no__std_types__generic_list___map_or_error__self, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_or_error__2__1__1__1[] = {
  4, // locals
  0, // no parameters
  // 324: ... s+e
  var_no__std___plus, 2, var_no__std_types__generic_list__map_or_error__2__1__1__s, var_no__std_types__generic_list__map_or_error__2__1__1__e, 1, 4,
  // 324: $m (s+e) >> 1
  var_no__std___shift_right, 2, 4, -number__1, 1, var_no__std_types__generic_list__map_or_error__2__1__1__1__m,
  // 326: map(s m)
  var_no__std_types__generic_list__map_or_error__2__map, 2, var_no__std_types__generic_list__map_or_error__2__1__1__s, var_no__std_types__generic_list__map_or_error__2__1__1__1__m, 1, 4,
  // 327: ... m+1
  var_no__std___plus, 2, var_no__std_types__generic_list__map_or_error__2__1__1__1__m, -number__1, 1, 6,
  // 327: map(m+1 e)
  var_no__std_types__generic_list__map_or_error__2__map, 2, 6, var_no__std_types__generic_list__map_or_error__2__1__1__e, 1, 5,
  // 325: append_or_error
  // 326:   map(s m)
  // 327:   map(m+1 e)
  var_no__append_or_error, 2, 4, 5, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_or_error__2__1__1__2__1[] = {
  0, // locals
  0, // no parameters
  // 332: -> mapped_item
  LET, 1, var_no__std_types__generic_list__map_or_error__2__1__1__2__mapped_item, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_or_error__2__1__1__2__2[] = {
  1, // locals
  0, // no parameters
  // 333: ... list(mapped_item)
  var_no__list, 1, var_no__std_types__generic_list__map_or_error__2__1__1__2__mapped_item, 1, 4,
  // 333: -> list(mapped_item)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_or_error__2__1__1__2[] = {
  1, // locals
  0, // no parameters
  // 329: ... self(s)
  var_no__std_types__generic_list___map_or_error__self, 1, var_no__std_types__generic_list__map_or_error__2__1__1__s, 1, 4,
  // 329: $mapped_item function(s self(s))
  var_no__std_types__generic_list___map_or_error__function, 2, var_no__std_types__generic_list__map_or_error__2__1__1__s, 4, 1, var_no__std_types__generic_list__map_or_error__2__1__1__2__mapped_item,
  // 331: mapped_item.is_an_error
  var_no__is_an_error, 1, var_no__std_types__generic_list__map_or_error__2__1__1__2__mapped_item, 1, 4,
  // 330: if
  // 331:   mapped_item.is_an_error
  // 332:   -> mapped_item
  // 333:   -> list(mapped_item)
  var_no__if, 3, 4, -func__std_types__generic_list__map_or_error__2__1__1__2__1, -func__std_types__generic_list__map_or_error__2__1__1__2__2, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_or_error__2__1__1[] = {
  1, // locals
  2, // parameters:
  var_no__std_types__generic_list__map_or_error__2__1__1__s,
  var_no__std_types__generic_list__map_or_error__2__1__1__e,
  // 323: s < e
  var_no__std___less, 2, var_no__std_types__generic_list__map_or_error__2__1__1__s, var_no__std_types__generic_list__map_or_error__2__1__1__e, 1, 4,
  // 322: if
  // 323:   s < e:
  // 324:     $m (s+e) >> 1
  // 325:     append_or_error
  // 326:       map(s m)
  // 327:       map(m+1 e)
  // 328:   :
  // 329:     $mapped_item function(s self(s))
  // 330:     if
  // 331:       mapped_item.is_an_error
  // ...
  var_no__if, 3, 4, -func__std_types__generic_list__map_or_error__2__1__1__1, -func__std_types__generic_list__map_or_error__2__1__1__2, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_or_error__2__1[] = {
  0, // locals
  0, // no parameters
  // 320: ->
  // 321:   : (s e)
  // 322:     if
  // 323:       s < e:
  // 324:         $m (s+e) >> 1
  // 325:         append_or_error
  // 326:           map(s m)
  // 327:           map(m+1 e)
  // 328:       :
  // 329:         $mapped_item function(s self(s))
  // ...
  LET, 1, -func__std_types__generic_list__map_or_error__2__1__1, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_or_error__2__2__1__1[] = {
  4, // locals
  0, // no parameters
  // 338: ... s+e
  var_no__std___plus, 2, var_no__std_types__generic_list__map_or_error__2__2__1__s, var_no__std_types__generic_list__map_or_error__2__2__1__e, 1, 4,
  // 338: $m (s+e) >> 1
  var_no__std___shift_right, 2, 4, -number__1, 1, var_no__std_types__generic_list__map_or_error__2__2__1__1__m,
  // 340: map(s m)
  var_no__std_types__generic_list__map_or_error__2__map, 2, var_no__std_types__generic_list__map_or_error__2__2__1__s, var_no__std_types__generic_list__map_or_error__2__2__1__1__m, 1, 4,
  // 341: ... m+1
  var_no__std___plus, 2, var_no__std_types__generic_list__map_or_error__2__2__1__1__m, -number__1, 1, 6,
  // 341: map(m+1 e)
  var_no__std_types__generic_list__map_or_error__2__map, 2, 6, var_no__std_types__generic_list__map_or_error__2__2__1__e, 1, 5,
  // 339: append_or_error
  // 340:   map(s m)
  // 341:   map(m+1 e)
  var_no__append_or_error, 2, 4, 5, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_or_error__2__2__1__2__1[] = {
  0, // locals
  0, // no parameters
  // 346: -> mapped_item
  LET, 1, var_no__std_types__generic_list__map_or_error__2__2__1__2__mapped_item, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_or_error__2__2__1__2__2[] = {
  1, // locals
  0, // no parameters
  // 347: ... list(mapped_item)
  var_no__list, 1, var_no__std_types__generic_list__map_or_error__2__2__1__2__mapped_item, 1, 4,
  // 347: -> list(mapped_item)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_or_error__2__2__1__2[] = {
  1, // locals
  0, // no parameters
  // 343: ... self(s)
  var_no__std_types__generic_list___map_or_error__self, 1, var_no__std_types__generic_list__map_or_error__2__2__1__s, 1, 4,
  // 343: $mapped_item function(self(s))
  var_no__std_types__generic_list___map_or_error__function, 1, 4, 1, var_no__std_types__generic_list__map_or_error__2__2__1__2__mapped_item,
  // 345: mapped_item.is_an_error
  var_no__is_an_error, 1, var_no__std_types__generic_list__map_or_error__2__2__1__2__mapped_item, 1, 4,
  // 344: if
  // 345:   mapped_item.is_an_error
  // 346:   -> mapped_item
  // 347:   -> list(mapped_item)
  var_no__if, 3, 4, -func__std_types__generic_list__map_or_error__2__2__1__2__1, -func__std_types__generic_list__map_or_error__2__2__1__2__2, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_or_error__2__2__1[] = {
  1, // locals
  2, // parameters:
  var_no__std_types__generic_list__map_or_error__2__2__1__s,
  var_no__std_types__generic_list__map_or_error__2__2__1__e,
  // 337: s < e
  var_no__std___less, 2, var_no__std_types__generic_list__map_or_error__2__2__1__s, var_no__std_types__generic_list__map_or_error__2__2__1__e, 1, 4,
  // 336: if
  // 337:   s < e:
  // 338:     $m (s+e) >> 1
  // 339:     append_or_error
  // 340:       map(s m)
  // 341:       map(m+1 e)
  // 342:   :
  // 343:     $mapped_item function(self(s))
  // 344:     if
  // 345:       mapped_item.is_an_error
  // ...
  var_no__if, 3, 4, -func__std_types__generic_list__map_or_error__2__2__1__1, -func__std_types__generic_list__map_or_error__2__2__1__2, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_or_error__2__2[] = {
  0, // locals
  0, // no parameters
  // 334: ->
  // 335:   : (s e)
  // 336:     if
  // 337:       s < e:
  // 338:         $m (s+e) >> 1
  // 339:         append_or_error
  // 340:           map(s m)
  // 341:           map(m+1 e)
  // 342:       :
  // 343:         $mapped_item function(self(s))
  // ...
  LET, 1, -func__std_types__generic_list__map_or_error__2__2__1, -1
};

static TAB_NUM tfunc__std_types__generic_list___map_or_error__2[] = {
  2, // locals
  0, // no parameters
  // 319: parameter_count_of(function)
  var_no__parameter_count_of, 1, var_no__std_types__generic_list___map_or_error__function, 1, 5,
  // 319: parameter_count_of(function) == 2
  var_no__std___equal, 2, 5, -number__2, 1, 4,
  // 317: $map
  // 318:   if
  // 319:     parameter_count_of(function) == 2
  // 320:     ->
  // 321:       : (s e)
  // 322:         if
  // 323:           s < e:
  // 324:             $m (s+e) >> 1
  // 325:             append_or_error
  // 326:               map(s m)
  // ...
  var_no__if, 3, 4, -func__std_types__generic_list__map_or_error__2__1, -func__std_types__generic_list__map_or_error__2__2, 1, var_no__std_types__generic_list__map_or_error__2__map,
  // 349: ... length_of(self)
  var_no__length_of, 1, var_no__std_types__generic_list___map_or_error__self, 1, 4,
  // 349: map 1 length_of(self)
  var_no__std_types__generic_list__map_or_error__2__map, 2, -number__1, 4, -1
};

static TAB_NUM tfunc__std_types___generic_list___map_or_error[] = {
  1, // locals
  2, // parameters:
  var_no__std_types__generic_list___map_or_error__self,
  var_no__std_types__generic_list___map_or_error__function,
  // 314: self.is_empty
  var_no__is_empty, 1, var_no__std_types__generic_list___map_or_error__self, 1, 4,
  // 313: if
  // 314:   self.is_empty
  // 315:   -> self
  // 316:   :
  // 317:     $map
  // 318:       if
  // 319:         parameter_count_of(function) == 2
  // 320:         ->
  // 321:           : (s e)
  // 322:             if
  // ...
  var_no__if, 3, 4, -func__std_types__generic_list___map_or_error__1, -func__std_types__generic_list___map_or_error__2, -1
};

static TAB_NUM tfunc__std_types__generic_list___std___reduce__1[] = {
  0, // locals
  0, // no parameters
  // 369: -> unit
  LET, 1, var_no__std_types__generic_list___std___reduce__unit, -1
};

static TAB_NUM tfunc__std_types__generic_list__std__reduce__2__reduce__1[] = {
  6, // locals
  0, // no parameters
  // 375: $m n >> 1
  var_no__std___shift_right, 2, var_no__std_types__generic_list__std__reduce__2__reduce__n, -number__1, 1, var_no__std_types__generic_list__std__reduce__2__reduce__1__m,
  // 377: ... range(items 1 m)
  var_no__range, 3, var_no__std_types__generic_list__std__reduce__2__reduce__items, -number__1, var_no__std_types__generic_list__std__reduce__2__reduce__1__m, 1, 5,
  // 377: reduce(range(items 1 m))
  var_no__std_types__generic_list__std___reduce__2__reduce, 1, 5, 1, 4,
  // 378: ... m+1
  var_no__std___plus, 2, var_no__std_types__generic_list__std__reduce__2__reduce__1__m, -number__1, 1, 8,
  // 378: ... range(items m+1 -1)
  var_no__range, 3, var_no__std_types__generic_list__std__reduce__2__reduce__items, 8, -number__m1, 1, 7,
  // 378: reduce(range(items m+1 -1))
  var_no__std_types__generic_list__std___reduce__2__reduce, 1, 7, 1, 6,
  // 376: function
  // 377:   reduce(range(items 1 m))
  // 378:   reduce(range(items m+1 -1))
  var_no__std_types__generic_list___std___reduce__function, 2, 4, 6, -1
};

static TAB_NUM tfunc__std_types__generic_list__std__reduce__2__reduce__2[] = {
  1, // locals
  0, // no parameters
  // 379: ... items(1)
  var_no__std_types__generic_list__std__reduce__2__reduce__items, 1, -number__1, 1, 4,
  // 379: -> items(1)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__generic_list__std___reduce__2__reduce[] = {
  2, // locals
  1, // parameters:
  var_no__std_types__generic_list__std__reduce__2__reduce__items,
  // 372: $n length_of(items)
  var_no__length_of, 1, var_no__std_types__generic_list__std__reduce__2__reduce__items, 1, var_no__std_types__generic_list__std__reduce__2__reduce__n,
  // 374: n >= 2
  var_no__std___less, 2, var_no__std_types__generic_list__std__reduce__2__reduce__n, -number__2, 1, 5,
  // 374: n >= 2
  var_no__std___not, 1, 5, 1, 4,
  // 373: if
  // 374:   n >= 2:
  // 375:     $m n >> 1
  // 376:     function
  // 377:       reduce(range(items 1 m))
  // 378:       reduce(range(items m+1 -1))
  // 379:   -> items(1)
  var_no__if, 3, 4, -func__std_types__generic_list__std__reduce__2__reduce__1, -func__std_types__generic_list__std__reduce__2__reduce__2, -1
};

static TAB_NUM tfunc__std_types__generic_list___std___reduce__2[] = {
  0, // locals
  0, // no parameters
  // 381: reduce self
  var_no__std_types__generic_list__std___reduce__2__reduce, 1, var_no__std_types__generic_list___std___reduce__self, -1
};

static TAB_NUM tfunc__std_types___generic_list___std___reduce[] = {
  1, // locals
  -3, // parameters:
  MANDATORY_PARAMETER, var_no__std_types__generic_list___std___reduce__self,
  var_no__append, var_no__std_types__generic_list___std___reduce__function,
  var_no__undefined, var_no__std_types__generic_list___std___reduce__unit,
  // 368: self.is_empty
  var_no__is_empty, 1, var_no__std_types__generic_list___std___reduce__self, 1, 4,
  // 367: if
  // 368:   self.is_empty
  // 369:   -> unit
  // 370:   :
  // 371:     $reduce: (items)
  // 372:       $n length_of(items)
  // 373:       if
  // 374:         n >= 2:
  // 375:           $m n >> 1
  // 376:           function
  // ...
  var_no__if, 3, 4, -func__std_types__generic_list___std___reduce__1, -func__std_types__generic_list___std___reduce__2, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_reduce__1__1[] = {
  0, // locals
  0, // no parameters
  // 402: -> self unit
  LET, 2, var_no__std_types__generic_list___map_reduce__self, var_no__std_types__generic_list___map_reduce__unit, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_reduce__1__2__1__1__1[] = {
  7, // locals
  0, // no parameters
  // 411: ... s+e
  var_no__std___plus, 2, var_no__std_types__generic_list__map_reduce__1__2__1__1__s, var_no__std_types__generic_list__map_reduce__1__2__1__1__e, 1, 4,
  // 411: $m (s+e) >> 1
  var_no__std___shift_right, 2, 4, -number__1, 1, var_no__std_types__generic_list__map_reduce__1__2__1__1__1__m,
  // 412: map_reduce s m $left_items $left_value
  var_no__std_types__generic_list__map_reduce__1__2__map_reduce, 2, var_no__std_types__generic_list__map_reduce__1__2__1__1__s, var_no__std_types__generic_list__map_reduce__1__2__1__1__1__m, 2, var_no__std_types__generic_list__map_reduce__1__2__1__1__1__left_items, var_no__std_types__generic_list__map_reduce__1__2__1__1__1__left_value,
  // 413: ... m+1
  var_no__std___plus, 2, var_no__std_types__generic_list__map_reduce__1__2__1__1__1__m, -number__1, 1, 4,
  // 413: map_reduce m+1 e $right_items $right_value
  var_no__std_types__generic_list__map_reduce__1__2__map_reduce, 2, 4, var_no__std_types__generic_list__map_reduce__1__2__1__1__e, 2, var_no__std_types__generic_list__map_reduce__1__2__1__1__1__right_items, var_no__std_types__generic_list__map_reduce__1__2__1__1__1__right_value,
  // 415: append(left_items right_items)
  var_no__append, 2, var_no__std_types__generic_list__map_reduce__1__2__1__1__1__left_items, var_no__std_types__generic_list__map_reduce__1__2__1__1__1__right_items, 1, 4,
  // 416: reduce_function(left_value right_value)
  var_no__std_types__generic_list___map_reduce__reduce_function, 2, var_no__std_types__generic_list__map_reduce__1__2__1__1__1__left_value, var_no__std_types__generic_list__map_reduce__1__2__1__1__1__right_value, 1, 5,
  // 414: ->
  // 415:   append(left_items right_items)
  // 416:   reduce_function(left_value right_value)
  LET, 2, 4, 5, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_reduce__1__2__1__1__2[] = {
  3, // locals
  0, // no parameters
  // 418: ... self(s)
  var_no__std_types__generic_list___map_reduce__self, 1, var_no__std_types__generic_list__map_reduce__1__2__1__1__s, 1, 4,
  // 418: map_function s self(s) $item $value
  var_no__std_types__generic_list___map_reduce__map_function, 2, var_no__std_types__generic_list__map_reduce__1__2__1__1__s, 4, 2, var_no__std_types__generic_list__map_reduce__1__2__1__1__2__item, var_no__std_types__generic_list__map_reduce__1__2__1__1__2__value,
  // 419: ... list(item)
  var_no__list, 1, var_no__std_types__generic_list__map_reduce__1__2__1__1__2__item, 1, 4,
  // 419: -> list(item) value
  LET, 2, 4, var_no__std_types__generic_list__map_reduce__1__2__1__1__2__value, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_reduce__1__2__1__1[] = {
  1, // locals
  2, // parameters:
  var_no__std_types__generic_list__map_reduce__1__2__1__1__s,
  var_no__std_types__generic_list__map_reduce__1__2__1__1__e,
  // 410: s < e
  var_no__std___less, 2, var_no__std_types__generic_list__map_reduce__1__2__1__1__s, var_no__std_types__generic_list__map_reduce__1__2__1__1__e, 1, 4,
  // 409: if
  // 410:   s < e:
  // 411:     $m (s+e) >> 1
  // 412:     map_reduce s m $left_items $left_value
  // 413:     map_reduce m+1 e $right_items $right_value
  // 414:     ->
  // 415:       append(left_items right_items)
  // 416:       reduce_function(left_value right_value)
  // 417:   :
  // 418:     map_function s self(s) $item $value
  // ...
  var_no__if, 3, 4, -func__std_types__generic_list__map_reduce__1__2__1__1__1, -func__std_types__generic_list__map_reduce__1__2__1__1__2, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_reduce__1__2__1[] = {
  0, // locals
  0, // no parameters
  // 407: ->
  // 408:   : (s e)
  // 409:     if
  // 410:       s < e:
  // 411:         $m (s+e) >> 1
  // 412:         map_reduce s m $left_items $left_value
  // 413:         map_reduce m+1 e $right_items $right_value
  // 414:         ->
  // 415:           append(left_items right_items)
  // 416:           reduce_function(left_value right_value)
  // ...
  LET, 1, -func__std_types__generic_list__map_reduce__1__2__1__1, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_reduce__1__2__2__1__1[] = {
  7, // locals
  0, // no parameters
  // 424: ... s+e
  var_no__std___plus, 2, var_no__std_types__generic_list__map_reduce__1__2__2__1__s, var_no__std_types__generic_list__map_reduce__1__2__2__1__e, 1, 4,
  // 424: $m (s+e) >> 1
  var_no__std___shift_right, 2, 4, -number__1, 1, var_no__std_types__generic_list__map_reduce__1__2__2__1__1__m,
  // 425: map_reduce s m $left_items $left_value
  var_no__std_types__generic_list__map_reduce__1__2__map_reduce, 2, var_no__std_types__generic_list__map_reduce__1__2__2__1__s, var_no__std_types__generic_list__map_reduce__1__2__2__1__1__m, 2, var_no__std_types__generic_list__map_reduce__1__2__2__1__1__left_items, var_no__std_types__generic_list__map_reduce__1__2__2__1__1__left_value,
  // 426: ... m+1
  var_no__std___plus, 2, var_no__std_types__generic_list__map_reduce__1__2__2__1__1__m, -number__1, 1, 4,
  // 426: map_reduce m+1 e $right_items $right_value
  var_no__std_types__generic_list__map_reduce__1__2__map_reduce, 2, 4, var_no__std_types__generic_list__map_reduce__1__2__2__1__e, 2, var_no__std_types__generic_list__map_reduce__1__2__2__1__1__right_items, var_no__std_types__generic_list__map_reduce__1__2__2__1__1__right_value,
  // 428: append(left_items right_items)
  var_no__append, 2, var_no__std_types__generic_list__map_reduce__1__2__2__1__1__left_items, var_no__std_types__generic_list__map_reduce__1__2__2__1__1__right_items, 1, 4,
  // 429: reduce_function(left_value right_value)
  var_no__std_types__generic_list___map_reduce__reduce_function, 2, var_no__std_types__generic_list__map_reduce__1__2__2__1__1__left_value, var_no__std_types__generic_list__map_reduce__1__2__2__1__1__right_value, 1, 5,
  // 427: ->
  // 428:   append(left_items right_items)
  // 429:   reduce_function(left_value right_value)
  LET, 2, 4, 5, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_reduce__1__2__2__1__2[] = {
  3, // locals
  0, // no parameters
  // 431: ... self(s)
  var_no__std_types__generic_list___map_reduce__self, 1, var_no__std_types__generic_list__map_reduce__1__2__2__1__s, 1, 4,
  // 431: map_function self(s) $item $value
  var_no__std_types__generic_list___map_reduce__map_function, 1, 4, 2, var_no__std_types__generic_list__map_reduce__1__2__2__1__2__item, var_no__std_types__generic_list__map_reduce__1__2__2__1__2__value,
  // 432: ... list(item)
  var_no__list, 1, var_no__std_types__generic_list__map_reduce__1__2__2__1__2__item, 1, 4,
  // 432: -> list(item) value
  LET, 2, 4, var_no__std_types__generic_list__map_reduce__1__2__2__1__2__value, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_reduce__1__2__2__1[] = {
  1, // locals
  2, // parameters:
  var_no__std_types__generic_list__map_reduce__1__2__2__1__s,
  var_no__std_types__generic_list__map_reduce__1__2__2__1__e,
  // 423: s < e
  var_no__std___less, 2, var_no__std_types__generic_list__map_reduce__1__2__2__1__s, var_no__std_types__generic_list__map_reduce__1__2__2__1__e, 1, 4,
  // 422: if
  // 423:   s < e:
  // 424:     $m (s+e) >> 1
  // 425:     map_reduce s m $left_items $left_value
  // 426:     map_reduce m+1 e $right_items $right_value
  // 427:     ->
  // 428:       append(left_items right_items)
  // 429:       reduce_function(left_value right_value)
  // 430:   :
  // 431:     map_function self(s) $item $value
  // ...
  var_no__if, 3, 4, -func__std_types__generic_list__map_reduce__1__2__2__1__1, -func__std_types__generic_list__map_reduce__1__2__2__1__2, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_reduce__1__2__2[] = {
  0, // locals
  0, // no parameters
  // 420: ->
  // 421:   : (s e)
  // 422:     if
  // 423:       s < e:
  // 424:         $m (s+e) >> 1
  // 425:         map_reduce s m $left_items $left_value
  // 426:         map_reduce m+1 e $right_items $right_value
  // 427:         ->
  // 428:           append(left_items right_items)
  // 429:           reduce_function(left_value right_value)
  // ...
  LET, 1, -func__std_types__generic_list__map_reduce__1__2__2__1, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_reduce__1__2[] = {
  2, // locals
  0, // no parameters
  // 406: parameter_count_of(map_function)
  var_no__parameter_count_of, 1, var_no__std_types__generic_list___map_reduce__map_function, 1, 5,
  // 406: parameter_count_of(map_function) == 2
  var_no__std___equal, 2, 5, -number__2, 1, 4,
  // 404: $map_reduce
  // 405:   if
  // 406:     parameter_count_of(map_function) == 2
  // 407:     ->
  // 408:       : (s e)
  // 409:         if
  // 410:           s < e:
  // 411:             $m (s+e) >> 1
  // 412:             map_reduce s m $left_items $left_value
  // 413:             map_reduce m+1 e $right_items $right_value
  // ...
  var_no__if, 3, 4, -func__std_types__generic_list__map_reduce__1__2__1, -func__std_types__generic_list__map_reduce__1__2__2, 1, var_no__std_types__generic_list__map_reduce__1__2__map_reduce,
  // 433: ... length_of(self)
  var_no__length_of, 1, var_no__std_types__generic_list___map_reduce__self, 1, 4,
  // 433: map_reduce 1 length_of(self)
  var_no__std_types__generic_list__map_reduce__1__2__map_reduce, 2, -number__1, 4, -1
};

static TAB_NUM tfunc__std_types__generic_list___map_reduce__1[] = {
  1, // locals
  0, // no parameters
  // 401: self.is_empty
  var_no__is_empty, 1, var_no__std_types__generic_list___map_reduce__self, 1, 4,
  // 400: if
  // 401:   self.is_empty
  // 402:   -> self unit
  // 403:   :
  // 404:     $map_reduce
  // 405:       if
  // 406:         parameter_count_of(map_function) == 2
  // 407:         ->
  // 408:           : (s e)
  // 409:             if
  // ...
  var_no__if, 3, 4, -func__std_types__generic_list__map_reduce__1__1, -func__std_types__generic_list__map_reduce__1__2, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_reduce__2__1[] = {
  0, // locals
  0, // no parameters
  // 437: -> unit
  LET, 1, var_no__std_types__generic_list___map_reduce__unit, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_reduce__2__2__1__1__1[] = {
  4, // locals
  0, // no parameters
  // 446: ... s+e
  var_no__std___plus, 2, var_no__std_types__generic_list__map_reduce__2__2__1__1__s, var_no__std_types__generic_list__map_reduce__2__2__1__1__e, 1, 4,
  // 446: $m (s+e) >> 1
  var_no__std___shift_right, 2, 4, -number__1, 1, var_no__std_types__generic_list__map_reduce__2__2__1__1__1__m,
  // 448: map_reduce(s m)
  var_no__std_types__generic_list__map_reduce__2__2__map_reduce, 2, var_no__std_types__generic_list__map_reduce__2__2__1__1__s, var_no__std_types__generic_list__map_reduce__2__2__1__1__1__m, 1, 4,
  // 449: ... m+1
  var_no__std___plus, 2, var_no__std_types__generic_list__map_reduce__2__2__1__1__1__m, -number__1, 1, 6,
  // 449: map_reduce(m+1 e)
  var_no__std_types__generic_list__map_reduce__2__2__map_reduce, 2, 6, var_no__std_types__generic_list__map_reduce__2__2__1__1__e, 1, 5,
  // 447: reduce_function
  // 448:   map_reduce(s m)
  // 449:   map_reduce(m+1 e)
  var_no__std_types__generic_list___map_reduce__reduce_function, 2, 4, 5, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_reduce__2__2__1__1__2[] = {
  2, // locals
  0, // no parameters
  // 450: ... self(s)
  var_no__std_types__generic_list___map_reduce__self, 1, var_no__std_types__generic_list__map_reduce__2__2__1__1__s, 1, 5,
  // 450: ... map_function(s self(s))
  var_no__std_types__generic_list___map_reduce__map_function, 2, var_no__std_types__generic_list__map_reduce__2__2__1__1__s, 5, 1, 4,
  // 450: -> map_function(s self(s))
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_reduce__2__2__1__1[] = {
  1, // locals
  2, // parameters:
  var_no__std_types__generic_list__map_reduce__2__2__1__1__s,
  var_no__std_types__generic_list__map_reduce__2__2__1__1__e,
  // 445: s < e
  var_no__std___less, 2, var_no__std_types__generic_list__map_reduce__2__2__1__1__s, var_no__std_types__generic_list__map_reduce__2__2__1__1__e, 1, 4,
  // 444: if
  // 445:   s < e:
  // 446:     $m (s+e) >> 1
  // 447:     reduce_function
  // 448:       map_reduce(s m)
  // 449:       map_reduce(m+1 e)
  // 450:   -> map_function(s self(s))
  var_no__if, 3, 4, -func__std_types__generic_list__map_reduce__2__2__1__1__1, -func__std_types__generic_list__map_reduce__2__2__1__1__2, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_reduce__2__2__1[] = {
  0, // locals
  0, // no parameters
  // 442: ->
  // 443:   : (s e)
  // 444:     if
  // 445:       s < e:
  // 446:         $m (s+e) >> 1
  // 447:         reduce_function
  // 448:           map_reduce(s m)
  // 449:           map_reduce(m+1 e)
  // 450:       -> map_function(s self(s))
  LET, 1, -func__std_types__generic_list__map_reduce__2__2__1__1, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_reduce__2__2__2__1__1[] = {
  4, // locals
  0, // no parameters
  // 455: ... s+e
  var_no__std___plus, 2, var_no__std_types__generic_list__map_reduce__2__2__2__1__s, var_no__std_types__generic_list__map_reduce__2__2__2__1__e, 1, 4,
  // 455: $m (s+e) >> 1
  var_no__std___shift_right, 2, 4, -number__1, 1, var_no__std_types__generic_list__map_reduce__2__2__2__1__1__m,
  // 457: map_reduce(s m)
  var_no__std_types__generic_list__map_reduce__2__2__map_reduce, 2, var_no__std_types__generic_list__map_reduce__2__2__2__1__s, var_no__std_types__generic_list__map_reduce__2__2__2__1__1__m, 1, 4,
  // 458: ... m+1
  var_no__std___plus, 2, var_no__std_types__generic_list__map_reduce__2__2__2__1__1__m, -number__1, 1, 6,
  // 458: map_reduce(m+1 e)
  var_no__std_types__generic_list__map_reduce__2__2__map_reduce, 2, 6, var_no__std_types__generic_list__map_reduce__2__2__2__1__e, 1, 5,
  // 456: reduce_function
  // 457:   map_reduce(s m)
  // 458:   map_reduce(m+1 e)
  var_no__std_types__generic_list___map_reduce__reduce_function, 2, 4, 5, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_reduce__2__2__2__1__2[] = {
  2, // locals
  0, // no parameters
  // 459: ... self(s)
  var_no__std_types__generic_list___map_reduce__self, 1, var_no__std_types__generic_list__map_reduce__2__2__2__1__s, 1, 5,
  // 459: ... map_function(self(s))
  var_no__std_types__generic_list___map_reduce__map_function, 1, 5, 1, 4,
  // 459: -> map_function(self(s))
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_reduce__2__2__2__1[] = {
  1, // locals
  2, // parameters:
  var_no__std_types__generic_list__map_reduce__2__2__2__1__s,
  var_no__std_types__generic_list__map_reduce__2__2__2__1__e,
  // 454: s < e
  var_no__std___less, 2, var_no__std_types__generic_list__map_reduce__2__2__2__1__s, var_no__std_types__generic_list__map_reduce__2__2__2__1__e, 1, 4,
  // 453: if
  // 454:   s < e:
  // 455:     $m (s+e) >> 1
  // 456:     reduce_function
  // 457:       map_reduce(s m)
  // 458:       map_reduce(m+1 e)
  // 459:   -> map_function(self(s))
  var_no__if, 3, 4, -func__std_types__generic_list__map_reduce__2__2__2__1__1, -func__std_types__generic_list__map_reduce__2__2__2__1__2, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_reduce__2__2__2[] = {
  0, // locals
  0, // no parameters
  // 451: ->
  // 452:   : (s e)
  // 453:     if
  // 454:       s < e:
  // 455:         $m (s+e) >> 1
  // 456:         reduce_function
  // 457:           map_reduce(s m)
  // 458:           map_reduce(m+1 e)
  // 459:       -> map_function(self(s))
  LET, 1, -func__std_types__generic_list__map_reduce__2__2__2__1, -1
};

static TAB_NUM tfunc__std_types__generic_list__map_reduce__2__2[] = {
  2, // locals
  0, // no parameters
  // 441: parameter_count_of(map_function)
  var_no__parameter_count_of, 1, var_no__std_types__generic_list___map_reduce__map_function, 1, 5,
  // 441: parameter_count_of(map_function) == 2
  var_no__std___equal, 2, 5, -number__2, 1, 4,
  // 439: $map_reduce
  // 440:   if
  // 441:     parameter_count_of(map_function) == 2
  // 442:     ->
  // 443:       : (s e)
  // 444:         if
  // 445:           s < e:
  // 446:             $m (s+e) >> 1
  // 447:             reduce_function
  // 448:               map_reduce(s m)
  // ...
  var_no__if, 3, 4, -func__std_types__generic_list__map_reduce__2__2__1, -func__std_types__generic_list__map_reduce__2__2__2, 1, var_no__std_types__generic_list__map_reduce__2__2__map_reduce,
  // 461: ... length_of(self)
  var_no__length_of, 1, var_no__std_types__generic_list___map_reduce__self, 1, 4,
  // 461: map_reduce 1 length_of(self)
  var_no__std_types__generic_list__map_reduce__2__2__map_reduce, 2, -number__1, 4, -1
};

static TAB_NUM tfunc__std_types__generic_list___map_reduce__2[] = {
  1, // locals
  0, // no parameters
  // 436: self.is_empty
  var_no__is_empty, 1, var_no__std_types__generic_list___map_reduce__self, 1, 4,
  // 435: if
  // 436:   self.is_empty
  // 437:   -> unit
  // 438:   :
  // 439:     $map_reduce
  // 440:       if
  // 441:         parameter_count_of(map_function) == 2
  // 442:         ->
  // 443:           : (s e)
  // 444:             if
  // ...
  var_no__if, 3, 4, -func__std_types__generic_list__map_reduce__2__1, -func__std_types__generic_list__map_reduce__2__2, -1
};

static TAB_NUM tfunc__std_types___generic_list___map_reduce[] = {
  2, // locals
  -4, // parameters:
  MANDATORY_PARAMETER, var_no__std_types__generic_list___map_reduce__self,
  MANDATORY_PARAMETER, var_no__std_types__generic_list___map_reduce__map_function,
  var_no__append, var_no__std_types__generic_list___map_reduce__reduce_function,
  var_no__undefined, var_no__std_types__generic_list___map_reduce__unit,
  // 399: result_count()
  var_no__result_count, 0, 1, 5,
  // 399: result_count() == 2
  var_no__std___equal, 2, 5, -number__2, 1, 4,
  // 398: if
  // 399:   result_count() == 2: # updates the list *and* returns the reduction
  // 400:     if
  // 401:       self.is_empty
  // 402:       -> self unit
  // 403:       :
  // 404:         $map_reduce
  // 405:           if
  // 406:             parameter_count_of(map_function) == 2
  // 407:             ->
  // ...
  var_no__if, 3, 4, -func__std_types__generic_list___map_reduce__1, -func__std_types__generic_list___map_reduce__2, -1
};

static TAB_NUM tfunc__std_types__generic_list__sort__sort__1[] = {
  6, // locals
  0, // no parameters
  // 474: $m n >> 1
  var_no__std___shift_right, 2, var_no__std_types__generic_list__sort__sort__n, -number__1, 1, var_no__std_types__generic_list__sort__sort__1__m,
  // 475: ... range(items 1 m)
  var_no__range, 3, var_no__std_types__generic_list__sort__sort__items, -number__1, var_no__std_types__generic_list__sort__sort__1__m, 1, 5,
  // 475: ... sort(range(items 1 m))
  var_no__std_types__generic_list___sort__sort, 1, 5, 1, 4,
  // 475: ... m+1
  var_no__std___plus, 2, var_no__std_types__generic_list__sort__sort__1__m, -number__1, 1, 8,
  // 475: ... range(items m+1 n)
  var_no__range, 3, var_no__std_types__generic_list__sort__sort__items, 8, var_no__std_types__generic_list__sort__sort__n, 1, 7,
  // 475: ... sort(range(items m+1 n))
  var_no__std_types__generic_list___sort__sort, 1, 7, 1, 6,
  // 475: merge sort(range(items 1 m)) sort(range(items m+1 n)) compare
  var_no__merge, 3, 4, 6, var_no__std_types__generic_list___sort__compare, -1
};

static TAB_NUM tfunc__std_types__generic_list__sort__sort__2[] = {
  0, // locals
  0, // no parameters
  // 476: -> items
  LET, 1, var_no__std_types__generic_list__sort__sort__items, -1
};

static TAB_NUM tfunc__std_types__generic_list___sort__sort[] = {
  1, // locals
  1, // parameters:
  var_no__std_types__generic_list__sort__sort__items,
  // 471: $n length_of(items)
  var_no__length_of, 1, var_no__std_types__generic_list__sort__sort__items, 1, var_no__std_types__generic_list__sort__sort__n,
  // 473: n > 1
  var_no__std___less, 2, -number__1, var_no__std_types__generic_list__sort__sort__n, 1, 4,
  // 472: if
  // 473:   n > 1:
  // 474:     $m n >> 1
  // 475:     merge sort(range(items 1 m)) sort(range(items m+1 n)) compare
  // 476:   -> items
  var_no__if, 3, 4, -func__std_types__generic_list__sort__sort__1, -func__std_types__generic_list__sort__sort__2, -1
};

static TAB_NUM tfunc__std_types___generic_list___sort[] = {
  1, // locals
  -2, // parameters:
  MANDATORY_PARAMETER, var_no__std_types__generic_list___sort__self,
  var_no__less, var_no__std_types__generic_list___sort__compare,
  // 468: sort self
  var_no__std_types__generic_list___sort__sort, 1, var_no__std_types__generic_list___sort__self, -1
};

static TAB_NUM tfunc__std_types__generic_list___intersection__1[] = {
  1, // locals
  0, // no parameters
  // 480: ... right.is_empty
  var_no__is_empty, 1, var_no__std_types__generic_list___intersection__right, 1, 4,
  // 480: ... right.is_empty
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__generic_list___intersection__2[] = {
  0, // locals
  0, // no parameters
  // 481: -> empty_list
  LET, 1, var_no__empty_list, -1
};

static TAB_NUM tfunc__std_types__generic_list__intersection__3__1__1[] = {
  1, // locals
  0, // no parameters
  // 487: ... list(item)
  var_no__list, 1, var_no__std_types__generic_list__intersection__3__1__item, 1, 4,
  // 487: -> list(item)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__generic_list__intersection__3__1__2[] = {
  0, // locals
  0, // no parameters
  // 488: -> empty_list
  LET, 1, var_no__empty_list, -1
};

static TAB_NUM tfunc__std_types__generic_list__intersection__3__1[] = {
  1, // locals
  1, // parameters:
  var_no__std_types__generic_list__intersection__3__1__item,
  // 486: right .contains. item
  var_no__contains, 2, var_no__std_types__generic_list___intersection__right, var_no__std_types__generic_list__intersection__3__1__item, 1, 4,
  // 485: if
  // 486:   right .contains. item
  // 487:   -> list(item)
  // 488:   -> empty_list
  var_no__if, 3, 4, -func__std_types__generic_list__intersection__3__1__1, -func__std_types__generic_list__intersection__3__1__2, -1
};

static TAB_NUM tfunc__std_types__generic_list___intersection__3[] = {
  1, // locals
  0, // no parameters
  // 482: ->
  // 483:   map_reduce
  // 484:     left: (item)
  // 485:       if
  // 486:         right .contains. item
  // 487:         -> list(item)
  // 488:         -> empty_list
  // 489:     append
  // 490:     empty_list
  var_no__map_reduce, 4, var_no__std_types__generic_list___intersection__left, -func__std_types__generic_list__intersection__3__1, var_no__append, var_no__empty_list, 1, 4,
  // 482: ->
  // 483:   map_reduce
  // 484:     left: (item)
  // 485:       if
  // 486:         right .contains. item
  // 487:         -> list(item)
  // 488:         -> empty_list
  // 489:     append
  // 490:     empty_list
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types___generic_list___intersection[] = {
  2, // locals
  2, // parameters:
  var_no__std_types__generic_list___intersection__left,
  var_no__std_types__generic_list___intersection__right,
  // 480: left.is_empty
  var_no__is_empty, 1, var_no__std_types__generic_list___intersection__left, 1, 5,
  // 480: left.is_empty || right.is_empty
  var_no__std___or, 2, 5, -func__std_types__generic_list___intersection__1, 1, 4,
  // 479: if
  // 480:   left.is_empty || right.is_empty
  // 481:   -> empty_list
  // 482:   ->
  // 483:     map_reduce
  // 484:       left: (item)
  // 485:         if
  // 486:           right .contains. item
  // 487:           -> list(item)
  // 488:           -> empty_list
  // ...
  var_no__if, 3, 4, -func__std_types__generic_list___intersection__2, -func__std_types__generic_list___intersection__3, -1
};

static TAB_NUM tfunc__std_types__generic_list__merge__1__1__1__1[] = {
  1, // locals
  0, // no parameters
  // 512: ... left(i)
  var_no__std_types__generic_list___merge__left, 1, var_no__std_types__generic_list___merge__i, 1, 4,
  // 512: push &result left(i)
  var_no__push, 2, var_no__std_types__generic_list___merge__result, 4, 1, var_no__std_types__generic_list___merge__result,
  // 513: !i i+1
  var_no__std___plus, 2, var_no__std_types__generic_list___merge__i, -number__1, 1, var_no__std_types__generic_list___merge__i,
  // 514: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__std_types__generic_list__merge__1__1__1__2[] = {
  1, // locals
  0, // no parameters
  // 516: ... right(j)
  var_no__std_types__generic_list___merge__right, 1, var_no__std_types__generic_list___merge__j, 1, 4,
  // 516: push &result right(j)
  var_no__push, 2, var_no__std_types__generic_list___merge__result, 4, 1, var_no__std_types__generic_list___merge__result,
  // 517: !j j+1
  var_no__std___plus, 2, var_no__std_types__generic_list___merge__j, -number__1, 1, var_no__std_types__generic_list___merge__j,
  // 518: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__std_types__generic_list__merge__1__1__1[] = {
  3, // locals
  0, // no parameters
  // 511: ... left(i)
  var_no__std_types__generic_list___merge__left, 1, var_no__std_types__generic_list___merge__i, 1, 5,
  // 511: ... right(j)
  var_no__std_types__generic_list___merge__right, 1, var_no__std_types__generic_list___merge__j, 1, 6,
  // 511: compare(left(i) right(j))
  var_no__std_types__generic_list___merge__compare, 2, 5, 6, 1, 4,
  // 510: if
  // 511:   compare(left(i) right(j)):
  // 512:     push &result left(i)
  // 513:     !i i+1
  // 514:     next
  // 515:   :
  // 516:     push &result right(j)
  // 517:     !j j+1
  // 518:     next
  var_no__if, 3, 4, -func__std_types__generic_list__merge__1__1__1__1, -func__std_types__generic_list__merge__1__1__1__2, -1
};

static TAB_NUM tfunc__std_types__generic_list__merge__1__1__2[] = {
  1, // locals
  0, // no parameters
  // 520: ... range(left i n)
  var_no__range, 3, var_no__std_types__generic_list___merge__left, var_no__std_types__generic_list___merge__i, var_no__std_types__generic_list___merge__n, 1, 4,
  // 520: append result range(left i n)
  var_no__append, 2, var_no__std_types__generic_list___merge__result, 4, -1
};

static TAB_NUM tfunc__std_types__generic_list__merge__1__1[] = {
  2, // locals
  0, // no parameters
  // 509: j <= m
  var_no__std___less, 2, var_no__std_types__generic_list___merge__m, var_no__std_types__generic_list___merge__j, 1, 5,
  // 509: j <= m
  var_no__std___not, 1, 5, 1, 4,
  // 508: if
  // 509:   j <= m:
  // 510:     if
  // 511:       compare(left(i) right(j)):
  // 512:         push &result left(i)
  // 513:         !i i+1
  // 514:         next
  // 515:       :
  // 516:         push &result right(j)
  // 517:         !j j+1
  // ...
  var_no__if, 3, 4, -func__std_types__generic_list__merge__1__1__1, -func__std_types__generic_list__merge__1__1__2, -1
};

static TAB_NUM tfunc__std_types__generic_list__merge__1__2[] = {
  1, // locals
  0, // no parameters
  // 522: ... range(right j m)
  var_no__range, 3, var_no__std_types__generic_list___merge__right, var_no__std_types__generic_list___merge__j, var_no__std_types__generic_list___merge__m, 1, 4,
  // 522: append result range(right j m)
  var_no__append, 2, var_no__std_types__generic_list___merge__result, 4, -1
};

static TAB_NUM tfunc__std_types__generic_list___merge__1[] = {
  2, // locals
  0, // no parameters
  // 507: i <= n
  var_no__std___less, 2, var_no__std_types__generic_list___merge__n, var_no__std_types__generic_list___merge__i, 1, 5,
  // 507: i <= n
  var_no__std___not, 1, 5, 1, 4,
  // 506: if
  // 507:   i <= n:
  // 508:     if
  // 509:       j <= m:
  // 510:         if
  // 511:           compare(left(i) right(j)):
  // 512:             push &result left(i)
  // 513:             !i i+1
  // 514:             next
  // 515:           :
  // ...
  var_no__if, 3, 4, -func__std_types__generic_list__merge__1__1, -func__std_types__generic_list__merge__1__2, -1
};

static TAB_NUM tfunc__std_types___generic_list___merge[] = {
  0, // locals
  -3, // parameters:
  MANDATORY_PARAMETER, var_no__std_types__generic_list___merge__left,
  MANDATORY_PARAMETER, var_no__std_types__generic_list___merge__right,
  var_no__less, var_no__std_types__generic_list___merge__compare,
  // 500: $i 1
  LET, 1, -number__1, 1, var_no__std_types__generic_list___merge__i,
  // 501: $j i
  LET, 1, var_no__std_types__generic_list___merge__i, 1, var_no__std_types__generic_list___merge__j,
  // 502: $n length_of(left)
  var_no__length_of, 1, var_no__std_types__generic_list___merge__left, 1, var_no__std_types__generic_list___merge__n,
  // 503: $m length_of(right)
  var_no__length_of, 1, var_no__std_types__generic_list___merge__right, 1, var_no__std_types__generic_list___merge__m,
  // 504: $result new(left empty_list)
  var_no__new, 2, var_no__std_types__generic_list___merge__left, var_no__empty_list, 1, var_no__std_types__generic_list___merge__result,
  // 505: loop:
  // 506:   if
  // 507:     i <= n:
  // 508:       if
  // 509:         j <= m:
  // 510:           if
  // 511:             compare(left(i) right(j)):
  // 512:               push &result left(i)
  // 513:               !i i+1
  // 514:               next
  // ...
  var_no__loop, 1, -func__std_types__generic_list___merge__1, -1
};

static TAB_NUM tfunc__std_types__generic_list___zip__1[] = {
  2, // locals
  1, // parameters:
  var_no__std_types__generic_list__zip__1__i,
  // 543: ... left(i)
  var_no__std_types__generic_list___zip__left, 1, var_no__std_types__generic_list__zip__1__i, 1, 4,
  // 543: push &result left(i)
  var_no__push, 2, var_no__std_types__generic_list___zip__result, 4, 1, var_no__std_types__generic_list___zip__result,
  // 544: ... right(i)
  var_no__std_types__generic_list___zip__right, 1, var_no__std_types__generic_list__zip__1__i, 1, 4,
  // 544: push &result right(i)
  var_no__push, 2, var_no__std_types__generic_list___zip__result, 4, 1, var_no__std_types__generic_list___zip__result,
  // 545: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__std_types__generic_list__zip__2__1__1[] = {
  3, // locals
  0, // no parameters
  // 548: ... k+1
  var_no__std___plus, 2, var_no__std_types__generic_list___zip__k, -number__1, 1, 6,
  // 548: ... range(left k+1 n)
  var_no__range, 3, var_no__std_types__generic_list___zip__left, 6, var_no__std_types__generic_list___zip__n, 1, 5,
  // 548: ... append(result range(left k+1 n))
  var_no__append, 2, var_no__std_types__generic_list___zip__result, 5, 1, 4,
  // 548: ... -> append(result range(left k+1 n))
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__generic_list__zip__2__1[] = {
  1, // locals
  0, // no parameters
  // 548: ... n > k
  var_no__std___less, 2, var_no__std_types__generic_list___zip__k, var_no__std_types__generic_list___zip__n, 1, 4,
  // 548: -> n > k -> append(result range(left k+1 n))
  LET, 2, 4, -func__std_types__generic_list__zip__2__1__1, -1
};

static TAB_NUM tfunc__std_types__generic_list__zip__2__2__1[] = {
  3, // locals
  0, // no parameters
  // 549: ... k+1
  var_no__std___plus, 2, var_no__std_types__generic_list___zip__k, -number__1, 1, 6,
  // 549: ... range(right k+1 m)
  var_no__range, 3, var_no__std_types__generic_list___zip__right, 6, var_no__std_types__generic_list___zip__m, 1, 5,
  // 549: ... append(result range(right k+1 m))
  var_no__append, 2, var_no__std_types__generic_list___zip__result, 5, 1, 4,
  // 549: ... -> append(result range(right k+1 m))
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__generic_list__zip__2__2[] = {
  1, // locals
  0, // no parameters
  // 549: ... m > k
  var_no__std___less, 2, var_no__std_types__generic_list___zip__k, var_no__std_types__generic_list___zip__m, 1, 4,
  // 549: -> m > k -> append(result range(right k+1 m))
  LET, 2, 4, -func__std_types__generic_list__zip__2__2__1, -1
};

static TAB_NUM tfunc__std_types__generic_list__zip__2__3__1[] = {
  0, // locals
  0, // no parameters
  // 550: ... -> result
  LET, 1, var_no__std_types__generic_list___zip__result, -1
};

static TAB_NUM tfunc__std_types__generic_list__zip__2__3[] = {
  0, // locals
  0, // no parameters
  // 550: -> true -> result
  LET, 2, var_no__true, -func__std_types__generic_list__zip__2__3__1, -1
};

static TAB_NUM tfunc__std_types__generic_list___zip__2[] = {
  0, // locals
  0, // no parameters
  // 547: cond
  // 548:   -> n > k -> append(result range(left k+1 n))
  // 549:   -> m > k -> append(result range(right k+1 m))
  // 550:   -> true -> result
  var_no__cond, 3, -func__std_types__generic_list__zip__2__1, -func__std_types__generic_list__zip__2__2, -func__std_types__generic_list__zip__2__3, -1
};

static TAB_NUM tfunc__std_types___generic_list___zip[] = {
  0, // locals
  2, // parameters:
  var_no__std_types__generic_list___zip__left,
  var_no__std_types__generic_list___zip__right,
  // 537: $n length_of(left)
  var_no__length_of, 1, var_no__std_types__generic_list___zip__left, 1, var_no__std_types__generic_list___zip__n,
  // 538: $m length_of(right)
  var_no__length_of, 1, var_no__std_types__generic_list___zip__right, 1, var_no__std_types__generic_list___zip__m,
  // 539: $k min(n m)
  var_no__min, 2, var_no__std_types__generic_list___zip__n, var_no__std_types__generic_list___zip__m, 1, var_no__std_types__generic_list___zip__k,
  // 540: $result new(left empty_list)
  var_no__new, 2, var_no__std_types__generic_list___zip__left, var_no__empty_list, 1, var_no__std_types__generic_list___zip__result,
  // 541: from_to 1 k
  // 542:   : (i)
  // 543:     push &result left(i)
  // 544:     push &result right(i)
  // 545:     next
  // 546:   :
  // 547:     cond
  // 548:       -> n > k -> append(result range(left k+1 n))
  // 549:       -> m > k -> append(result range(right k+1 m))
  // 550:       -> true -> result
  var_no__from_to, 4, -number__1, var_no__std_types__generic_list___zip__k, -func__std_types__generic_list___zip__1, -func__std_types__generic_list___zip__2, -1
};

static TAB_NUM tfunc__std_types___generic_list___flatten[] = {
  1, // locals
  1, // parameters:
  var_no__std_types__generic_list___flatten__self,
  // 552: ... -> self # for strings
  LET, 1, var_no__std_types__generic_list___flatten__self, -1
};

static TAB_NUM tfunc__std_types__list__flatten__1__1[] = {
  1, // locals
  0, // no parameters
  // 564: ... flatten(item)
  var_no__flatten, 1, var_no__std_types__list__flatten__1__item, 1, 4,
  // 564: -> flatten(item)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__list__flatten__1__2[] = {
  1, // locals
  0, // no parameters
  // 565: ... list(item)
  var_no__list, 1, var_no__std_types__list__flatten__1__item, 1, 4,
  // 565: -> list(item)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__list___flatten__1[] = {
  1, // locals
  1, // parameters:
  var_no__std_types__list__flatten__1__item,
  // 563: item.is_a_list
  var_no__is_a_list, 1, var_no__std_types__list__flatten__1__item, 1, 4,
  // 562: if
  // 563:   item.is_a_list
  // 564:   -> flatten(item)
  // 565:   -> list(item)
  var_no__if, 3, 4, -func__std_types__list__flatten__1__1, -func__std_types__list__flatten__1__2, -1
};

static TAB_NUM tfunc__std_types___list___flatten[] = {
  1, // locals
  1, // parameters:
  var_no__std_types__list___flatten__self,
  // 560: map_reduce self
  // 561:   : (item)
  // 562:     if
  // 563:       item.is_a_list
  // 564:       -> flatten(item)
  // 565:       -> list(item)
  // 566:   append
  // 567:   empty_list
  var_no__map_reduce, 4, var_no__std_types__list___flatten__self, -func__std_types__list___flatten__1, var_no__append, var_no__empty_list, -1
};

static TAB_NUM tfunc__std_types__generic_list___dup__1[] = {
  0, // locals
  0, // no parameters
  // 583: ... -> empty_list
  LET, 1, var_no__empty_list, -1
};

static TAB_NUM tfunc__std_types__generic_list___dup__2[] = {
  0, // locals
  0, // no parameters
  // 584: ... -> self
  LET, 1, var_no__std_types__generic_list___dup__self, -1
};

static TAB_NUM tfunc__std_types__generic_list__dup__3__1[] = {
  0, // locals
  0, // no parameters
  // 591: -> dlst
  LET, 1, var_no__std_types__generic_list__dup__3__dlst, -1
};

static TAB_NUM tfunc__std_types__generic_list__dup__3__2[] = {
  1, // locals
  0, // no parameters
  // 592: ... append(dlst self)
  var_no__append, 2, var_no__std_types__generic_list__dup__3__dlst, var_no__std_types__generic_list___dup__self, 1, 4,
  // 592: -> append(dlst self)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__generic_list___dup__3[] = {
  4, // locals
  0, // no parameters
  // 586: $h n >> 1 # fails if <n> is not a positive integer
  var_no__std___shift_right, 2, var_no__std_types__generic_list___dup__n, -number__1, 1, var_no__std_types__generic_list__dup__3__h,
  // 587: $lst dup(self h)
  var_no__dup, 2, var_no__std_types__generic_list___dup__self, var_no__std_types__generic_list__dup__3__h, 1, var_no__std_types__generic_list__dup__3__lst,
  // 588: $dlst append(lst lst)
  var_no__append, 2, var_no__std_types__generic_list__dup__3__lst, var_no__std_types__generic_list__dup__3__lst, 1, var_no__std_types__generic_list__dup__3__dlst,
  // 590: 2*h
  var_no__std___times, 2, -number__2, var_no__std_types__generic_list__dup__3__h, 1, 5,
  // 590: 2*h == n
  var_no__std___equal, 2, 5, var_no__std_types__generic_list___dup__n, 1, 4,
  // 589: if
  // 590:   2*h == n
  // 591:   -> dlst
  // 592:   -> append(dlst self)
  var_no__if, 3, 4, -func__std_types__generic_list__dup__3__1, -func__std_types__generic_list__dup__3__2, -1
};

static TAB_NUM tfunc__std_types___generic_list___dup[] = {
  0, // locals
  2, // parameters:
  var_no__std_types__generic_list___dup__self,
  var_no__std_types__generic_list___dup__n,
  // 582: case n
  // 583:   0 -> empty_list
  // 584:   1 -> self
  // 585:   :
  // 586:     $h n >> 1 # fails if <n> is not a positive integer
  // 587:     $lst dup(self h)
  // 588:     $dlst append(lst lst)
  // 589:     if
  // 590:       2*h == n
  // 591:       -> dlst
  // ...
  var_no__case, 6, var_no__std_types__generic_list___dup__n, -number__0, -func__std_types__generic_list___dup__1, -number__1, -func__std_types__generic_list___dup__2, -func__std_types__generic_list___dup__3, -1
};

static TAB_NUM tfunc__std_types__generic_list___contains__1[] = {
  0, // locals
  0, // no parameters
  // 603: -> false
  LET, 1, var_no__false, -1
};

static TAB_NUM tfunc__std_types__generic_list__contains__2__1[] = {
  0, // locals
  0, // no parameters
  // 607: -> true
  LET, 1, var_no__true, -1
};

static TAB_NUM tfunc__std_types__generic_list__contains__2__2[] = {
  2, // locals
  0, // no parameters
  // 608: ... range(self 2 -1)
  var_no__range, 3, var_no__std_types__generic_list___contains__self, -number__2, -number__m1, 1, 5,
  // 608: ... range(self 2 -1) .contains. item
  var_no__contains, 2, 5, var_no__std_types__generic_list___contains__item, 1, 4,
  // 608: -> range(self 2 -1) .contains. item
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__generic_list___contains__2[] = {
  2, // locals
  0, // no parameters
  // 606: self(1)
  var_no__std_types__generic_list___contains__self, 1, -number__1, 1, 5,
  // 606: self(1) == item
  var_no__std___equal, 2, 5, var_no__std_types__generic_list___contains__item, 1, 4,
  // 605: if
  // 606:   self(1) == item
  // 607:   -> true
  // 608:   -> range(self 2 -1) .contains. item
  var_no__if, 3, 4, -func__std_types__generic_list__contains__2__1, -func__std_types__generic_list__contains__2__2, -1
};

static TAB_NUM tfunc__std_types___generic_list___contains[] = {
  1, // locals
  2, // parameters:
  var_no__std_types__generic_list___contains__self,
  var_no__std_types__generic_list___contains__item,
  // 602: self.is_empty
  var_no__is_empty, 1, var_no__std_types__generic_list___contains__self, 1, 4,
  // 601: if
  // 602:   self.is_empty
  // 603:   -> false
  // 604:   :
  // 605:     if
  // 606:       self(1) == item
  // 607:       -> true
  // 608:       -> range(self 2 -1) .contains. item
  var_no__if, 3, 4, -func__std_types__generic_list___contains__1, -func__std_types__generic_list___contains__2, -1
};

static TAB_NUM tfunc__std_types__generic_list__find_first__1__1__1[] = {
  0, // locals
  0, // no parameters
  // 617: -> idx item
  LET, 2, var_no__std_types__generic_list__find_first__1__1__idx, var_no__std_types__generic_list__find_first__1__1__item, -1
};

static TAB_NUM tfunc__std_types__generic_list__find_first__1__1[] = {
  1, // locals
  2, // parameters:
  var_no__std_types__generic_list__find_first__1__1__idx,
  var_no__std_types__generic_list__find_first__1__1__item,
  // 616: test(item)
  var_no__std_types__generic_list___find_first__test, 1, var_no__std_types__generic_list__find_first__1__1__item, 1, 4,
  // 615: if
  // 616:   test(item)
  // 617:   -> idx item
  // 618:   next
  var_no__if, 3, 4, -func__std_types__generic_list__find_first__1__1__1, var_no__next, -1
};

static TAB_NUM tfunc__std_types__generic_list__find_first__1__2[] = {
  0, // locals
  0, // no parameters
  // 619: -> undefined undefined
  LET, 2, var_no__undefined, var_no__undefined, -1
};

static TAB_NUM tfunc__std_types__generic_list___find_first__1[] = {
  0, // locals
  0, // no parameters
  // 613: for_each self
  // 614:   : (idx item)
  // 615:     if
  // 616:       test(item)
  // 617:       -> idx item
  // 618:       next
  // 619:   -> undefined undefined
  var_no__for_each, 3, var_no__std_types__generic_list___find_first__self, -func__std_types__generic_list__find_first__1__1, -func__std_types__generic_list__find_first__1__2, -1
};

static TAB_NUM tfunc__std_types__generic_list__find_first__2__1__1[] = {
  0, // locals
  0, // no parameters
  // 625: -> item
  LET, 1, var_no__std_types__generic_list__find_first__2__1__item, -1
};

static TAB_NUM tfunc__std_types__generic_list__find_first__2__1[] = {
  1, // locals
  1, // parameters:
  var_no__std_types__generic_list__find_first__2__1__item,
  // 624: test(item)
  var_no__std_types__generic_list___find_first__test, 1, var_no__std_types__generic_list__find_first__2__1__item, 1, 4,
  // 623: if
  // 624:   test(item)
  // 625:   -> item
  // 626:   next
  var_no__if, 3, 4, -func__std_types__generic_list__find_first__2__1__1, var_no__next, -1
};

static TAB_NUM tfunc__std_types__generic_list__find_first__2__2[] = {
  0, // locals
  0, // no parameters
  // 627: -> undefined
  LET, 1, var_no__undefined, -1
};

static TAB_NUM tfunc__std_types__generic_list___find_first__2[] = {
  0, // locals
  0, // no parameters
  // 621: for_each self
  // 622:   : (item)
  // 623:     if
  // 624:       test(item)
  // 625:       -> item
  // 626:       next
  // 627:   -> undefined
  var_no__for_each, 3, var_no__std_types__generic_list___find_first__self, -func__std_types__generic_list__find_first__2__1, -func__std_types__generic_list__find_first__2__2, -1
};

static TAB_NUM tfunc__std_types___generic_list___find_first[] = {
  2, // locals
  2, // parameters:
  var_no__std_types__generic_list___find_first__self,
  var_no__std_types__generic_list___find_first__test,
  // 612: result_count()
  var_no__result_count, 0, 1, 5,
  // 612: result_count() == 2
  var_no__std___equal, 2, 5, -number__2, 1, 4,
  // 611: if
  // 612:   result_count() == 2:
  // 613:     for_each self
  // 614:       : (idx item)
  // 615:         if
  // 616:           test(item)
  // 617:           -> idx item
  // 618:           next
  // 619:       -> undefined undefined
  // 620:   :
  // ...
  var_no__if, 3, 4, -func__std_types__generic_list___find_first__1, -func__std_types__generic_list___find_first__2, -1
};

static TAB_NUM tfunc__std_types__generic_list__filter__1__1[] = {
  0, // locals
  0, // no parameters
  // 634: -> self self
  LET, 2, var_no__std_types__generic_list___filter__self, var_no__std_types__generic_list___filter__self, -1
};

static TAB_NUM tfunc__std_types__generic_list__filter__1__2__1__1[] = {
  0, // locals
  0, // no parameters
  // 642: push &good item
  var_no__push, 2, var_no__std_types__generic_list__filter__1__2__good, var_no__std_types__generic_list__filter__1__2__1__item, 1, var_no__std_types__generic_list__filter__1__2__good,
  // 643: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__std_types__generic_list__filter__1__2__1__2[] = {
  0, // locals
  0, // no parameters
  // 645: push &bad item
  var_no__push, 2, var_no__std_types__generic_list__filter__1__2__bad, var_no__std_types__generic_list__filter__1__2__1__item, 1, var_no__std_types__generic_list__filter__1__2__bad,
  // 646: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__std_types__generic_list__filter__1__2__1[] = {
  1, // locals
  1, // parameters:
  var_no__std_types__generic_list__filter__1__2__1__item,
  // 641: test(item)
  var_no__std_types__generic_list___filter__test, 1, var_no__std_types__generic_list__filter__1__2__1__item, 1, 4,
  // 640: if
  // 641:   test(item):
  // 642:     push &good item
  // 643:     next
  // 644:   :
  // 645:     push &bad item
  // 646:     next
  var_no__if, 3, 4, -func__std_types__generic_list__filter__1__2__1__1, -func__std_types__generic_list__filter__1__2__1__2, -1
};

static TAB_NUM tfunc__std_types__generic_list__filter__1__2__2[] = {
  0, // locals
  0, // no parameters
  // 647: -> good bad
  LET, 2, var_no__std_types__generic_list__filter__1__2__good, var_no__std_types__generic_list__filter__1__2__bad, -1
};

static TAB_NUM tfunc__std_types__generic_list__filter__1__2[] = {
  0, // locals
  0, // no parameters
  // 636: $good empty_list
  LET, 1, var_no__empty_list, 1, var_no__std_types__generic_list__filter__1__2__good,
  // 637: $bad empty_list
  LET, 1, var_no__empty_list, 1, var_no__std_types__generic_list__filter__1__2__bad,
  // 638: for_each self
  // 639:   : (item)
  // 640:     if
  // 641:       test(item):
  // 642:         push &good item
  // 643:         next
  // 644:       :
  // 645:         push &bad item
  // 646:         next
  // 647:   -> good bad
  var_no__for_each, 3, var_no__std_types__generic_list___filter__self, -func__std_types__generic_list__filter__1__2__1, -func__std_types__generic_list__filter__1__2__2, -1
};

static TAB_NUM tfunc__std_types__generic_list___filter__1[] = {
  1, // locals
  0, // no parameters
  // 633: self.is_empty
  var_no__is_empty, 1, var_no__std_types__generic_list___filter__self, 1, 4,
  // 632: if
  // 633:   self.is_empty
  // 634:   -> self self
  // 635:   :
  // 636:     $good empty_list
  // 637:     $bad empty_list
  // 638:     for_each self
  // 639:       : (item)
  // 640:         if
  // 641:           test(item):
  // ...
  var_no__if, 3, 4, -func__std_types__generic_list__filter__1__1, -func__std_types__generic_list__filter__1__2, -1
};

static TAB_NUM tfunc__std_types__generic_list__filter__2__1[] = {
  0, // locals
  0, // no parameters
  // 651: -> self
  LET, 1, var_no__std_types__generic_list___filter__self, -1
};

static TAB_NUM tfunc__std_types__generic_list__filter__2__2__filter__1[] = {
  4, // locals
  0, // no parameters
  // 656: ... s+e
  var_no__std___plus, 2, var_no__std_types__generic_list__filter__2__2__filter__s, var_no__std_types__generic_list__filter__2__2__filter__e, 1, 4,
  // 656: $m (s+e) >> 1
  var_no__std___shift_right, 2, 4, -number__1, 1, var_no__std_types__generic_list__filter__2__2__filter__1__m,
  // 658: filter(s m)
  var_no__std_types__generic_list__filter__2__2__filter, 2, var_no__std_types__generic_list__filter__2__2__filter__s, var_no__std_types__generic_list__filter__2__2__filter__1__m, 1, 4,
  // 659: ... m+1
  var_no__std___plus, 2, var_no__std_types__generic_list__filter__2__2__filter__1__m, -number__1, 1, 6,
  // 659: filter(m+1 e)
  var_no__std_types__generic_list__filter__2__2__filter, 2, 6, var_no__std_types__generic_list__filter__2__2__filter__e, 1, 5,
  // 657: append
  // 658:   filter(s m)
  // 659:   filter(m+1 e)
  var_no__append, 2, 4, 5, -1
};

static TAB_NUM tfunc__std_types__generic_list__filter__2__2__filter__2__1[] = {
  2, // locals
  0, // no parameters
  // 663: ... self(s)
  var_no__std_types__generic_list___filter__self, 1, var_no__std_types__generic_list__filter__2__2__filter__s, 1, 5,
  // 663: ... list(self(s))
  var_no__list, 1, 5, 1, 4,
  // 663: -> list(self(s))
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__generic_list__filter__2__2__filter__2__2[] = {
  0, // locals
  0, // no parameters
  // 664: -> empty_list
  LET, 1, var_no__empty_list, -1
};

static TAB_NUM tfunc__std_types__generic_list__filter__2__2__filter__2[] = {
  2, // locals
  0, // no parameters
  // 662: ... self(s)
  var_no__std_types__generic_list___filter__self, 1, var_no__std_types__generic_list__filter__2__2__filter__s, 1, 5,
  // 662: test(self(s))
  var_no__std_types__generic_list___filter__test, 1, 5, 1, 4,
  // 661: if
  // 662:   test(self(s))
  // 663:   -> list(self(s))
  // 664:   -> empty_list
  var_no__if, 3, 4, -func__std_types__generic_list__filter__2__2__filter__2__1, -func__std_types__generic_list__filter__2__2__filter__2__2, -1
};

static TAB_NUM tfunc__std_types__generic_list__filter__2__2__filter[] = {
  1, // locals
  2, // parameters:
  var_no__std_types__generic_list__filter__2__2__filter__s,
  var_no__std_types__generic_list__filter__2__2__filter__e,
  // 655: s < e
  var_no__std___less, 2, var_no__std_types__generic_list__filter__2__2__filter__s, var_no__std_types__generic_list__filter__2__2__filter__e, 1, 4,
  // 654: if
  // 655:   s < e:
  // 656:     $m (s+e) >> 1
  // 657:     append
  // 658:       filter(s m)
  // 659:       filter(m+1 e)
  // 660:   :
  // 661:     if
  // 662:       test(self(s))
  // 663:       -> list(self(s))
  // ...
  var_no__if, 3, 4, -func__std_types__generic_list__filter__2__2__filter__1, -func__std_types__generic_list__filter__2__2__filter__2, -1
};

static TAB_NUM tfunc__std_types__generic_list__filter__2__2[] = {
  1, // locals
  0, // no parameters
  // 666: ... length_of(self)
  var_no__length_of, 1, var_no__std_types__generic_list___filter__self, 1, 4,
  // 666: filter 1 length_of(self)
  var_no__std_types__generic_list__filter__2__2__filter, 2, -number__1, 4, -1
};

static TAB_NUM tfunc__std_types__generic_list___filter__2[] = {
  1, // locals
  0, // no parameters
  // 650: self.is_empty
  var_no__is_empty, 1, var_no__std_types__generic_list___filter__self, 1, 4,
  // 649: if
  // 650:   self.is_empty
  // 651:   -> self
  // 652:   :
  // 653:     $filter: (s e)
  // 654:       if
  // 655:         s < e:
  // 656:           $m (s+e) >> 1
  // 657:           append
  // 658:             filter(s m)
  // ...
  var_no__if, 3, 4, -func__std_types__generic_list__filter__2__1, -func__std_types__generic_list__filter__2__2, -1
};

static TAB_NUM tfunc__std_types___generic_list___filter[] = {
  2, // locals
  2, // parameters:
  var_no__std_types__generic_list___filter__self,
  var_no__std_types__generic_list___filter__test,
  // 631: result_count()
  var_no__result_count, 0, 1, 5,
  // 631: result_count() == 2
  var_no__std___equal, 2, 5, -number__2, 1, 4,
  // 630: if
  // 631:   result_count() == 2:
  // 632:     if
  // 633:       self.is_empty
  // 634:       -> self self
  // 635:       :
  // 636:         $good empty_list
  // 637:         $bad empty_list
  // 638:         for_each self
  // 639:           : (item)
  // ...
  var_no__if, 3, 4, -func__std_types__generic_list___filter__1, -func__std_types__generic_list___filter__2, -1
};

static TAB_NUM tfunc__std__levenshtein_distance__1[] = {
  2, // locals
  1, // parameters:
  var_no__std__levenshtein_distance__1__i,
  // 680: ... i+1
  var_no__std___plus, 2, var_no__std__levenshtein_distance__1__i, -number__1, 1, 4,
  // 680: !v0(i+1)
  var_no__std__levenshtein_distance__v0, 2, 4, var_no__std__levenshtein_distance__1__i, 1, var_no__std__levenshtein_distance__v0,
  // 681: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__std__levenshtein_distance__2[] = {
  0, // locals
  0, // no parameters
  // 682: -> v0
  LET, 1, var_no__std__levenshtein_distance__v0, -1
};

static TAB_NUM tfunc__std__levenshtein_distance__3__1__1[] = {
  1, // locals
  0, // no parameters
  // 693: ... v0(j)
  var_no__std__levenshtein_distance__v0, 1, var_no__std__levenshtein_distance__3__1__j, 1, 4,
  // 693: -> v0(j)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std__levenshtein_distance__3__1__2[] = {
  2, // locals
  0, // no parameters
  // 694: ... v0(j)
  var_no__std__levenshtein_distance__v0, 1, var_no__std__levenshtein_distance__3__1__j, 1, 5,
  // 694: ... v0(j)+1
  var_no__std___plus, 2, 5, -number__1, 1, 4,
  // 694: -> v0(j)+1
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std__levenshtein_distance__3__1[] = {
  6, // locals
  1, // parameters:
  var_no__std__levenshtein_distance__3__1__j,
  // 688: ... j+1
  var_no__std___plus, 2, var_no__std__levenshtein_distance__3__1__j, -number__1, 1, 5,
  // 688: ... v0(j+1)
  var_no__std__levenshtein_distance__v0, 1, 5, 1, 4,
  // 688: $deletion_cost v0(j+1)+1
  var_no__std___plus, 2, 4, -number__1, 1, var_no__std__levenshtein_distance__3__1__deletion_cost,
  // 689: ... v1(j)
  var_no__std__levenshtein_distance__v1, 1, var_no__std__levenshtein_distance__3__1__j, 1, 4,
  // 689: $insertion_cost v1(j)+1
  var_no__std___plus, 2, 4, -number__1, 1, var_no__std__levenshtein_distance__3__1__insertion_cost,
  // 692: s(i)
  var_no__std__levenshtein_distance__s, 1, var_no__std__levenshtein_distance__3__i, 1, 5,
  // 692: ... t(j)
  var_no__std__levenshtein_distance__t, 1, var_no__std__levenshtein_distance__3__1__j, 1, 6,
  // 692: s(i) == t(j)
  var_no__std___equal, 2, 5, 6, 1, 4,
  // 690: $substitution_cost
  // 691:   if
  // 692:     s(i) == t(j)
  // 693:     -> v0(j)
  // 694:     -> v0(j)+1
  var_no__if, 3, 4, -func__std__levenshtein_distance__3__1__1, -func__std__levenshtein_distance__3__1__2, 1, var_no__std__levenshtein_distance__3__1__substitution_cost,
  // 695: !v1(j+1) min(deletion_cost insertion_cost substitution_cost)
  var_no__min, 3, var_no__std__levenshtein_distance__3__1__deletion_cost, var_no__std__levenshtein_distance__3__1__insertion_cost, var_no__std__levenshtein_distance__3__1__substitution_cost, 1, 4,
  // 695: ... j+1
  var_no__std___plus, 2, var_no__std__levenshtein_distance__3__1__j, -number__1, 1, 5,
  // 695: !v1(j+1)
  var_no__std__levenshtein_distance__v1, 2, 5, 4, 1, var_no__std__levenshtein_distance__v1,
  // 696: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__std__levenshtein_distance__3__2[] = {
  0, // locals
  0, // no parameters
  // 698: let
  // 699:   !v0 v1
  // 700:   !v1 v0
  var_no__let, 2, var_no__std__levenshtein_distance__v1, var_no__std__levenshtein_distance__v0, 2, var_no__std__levenshtein_distance__v0, var_no__std__levenshtein_distance__v1,
  // 701: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__std__levenshtein_distance__3[] = {
  0, // locals
  1, // parameters:
  var_no__std__levenshtein_distance__3__i,
  // 685: !v1(1)
  var_no__std__levenshtein_distance__v1, 2, -number__1, var_no__std__levenshtein_distance__3__i, 1, var_no__std__levenshtein_distance__v1,
  // 686: from_to 1 n
  // 687:   : (j)
  // 688:     $deletion_cost v0(j+1)+1
  // 689:     $insertion_cost v1(j)+1
  // 690:     $substitution_cost
  // 691:       if
  // 692:         s(i) == t(j)
  // 693:         -> v0(j)
  // 694:         -> v0(j)+1
  // 695:     !v1(j+1) min(deletion_cost insertion_cost substitution_cost)
  // ...
  var_no__from_to, 4, -number__1, var_no__std__levenshtein_distance__n, -func__std__levenshtein_distance__3__1, -func__std__levenshtein_distance__3__2, -1
};

static TAB_NUM tfunc__std__levenshtein_distance__4[] = {
  2, // locals
  0, // no parameters
  // 702: ... n+1
  var_no__std___plus, 2, var_no__std__levenshtein_distance__n, -number__1, 1, 5,
  // 702: ... v0(n+1)
  var_no__std__levenshtein_distance__v0, 1, 5, 1, 4,
  // 702: -> v0(n+1)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std___levenshtein_distance[] = {
  2, // locals
  2, // parameters:
  var_no__std__levenshtein_distance__s,
  var_no__std__levenshtein_distance__t,
  // 674: $m length_of(s)
  var_no__length_of, 1, var_no__std__levenshtein_distance__s, 1, var_no__std__levenshtein_distance__m,
  // 675: $n length_of(t)
  var_no__length_of, 1, var_no__std__levenshtein_distance__t, 1, var_no__std__levenshtein_distance__n,
  // 676: ... n+1
  var_no__std___plus, 2, var_no__std__levenshtein_distance__n, -number__1, 1, 4,
  // 676: $v0 int16_array(n+1)
  var_no__int16_array, 1, 4, 1, var_no__std__levenshtein_distance__v0,
  // 677: ... n+1
  var_no__std___plus, 2, var_no__std__levenshtein_distance__n, -number__1, 1, 4,
  // 677: $v1 int16_array(n+1)
  var_no__int16_array, 1, 4, 1, var_no__std__levenshtein_distance__v1,
  // 678: from_to !v0 0 n
  // 679:   : (i)
  // 680:     !v0(i+1) i
  // 681:     next
  // 682:   -> v0
  var_no__from_to, 4, -number__0, var_no__std__levenshtein_distance__n, -func__std__levenshtein_distance__1, -func__std__levenshtein_distance__2, 1, var_no__std__levenshtein_distance__v0,
  // 683: from_to 1 m
  // 684:   : (i)
  // 685:     !v1(1) i
  // 686:     from_to 1 n
  // 687:       : (j)
  // 688:         $deletion_cost v0(j+1)+1
  // 689:         $insertion_cost v1(j)+1
  // 690:         $substitution_cost
  // 691:           if
  // 692:             s(i) == t(j)
  // ...
  var_no__from_to, 4, -number__1, var_no__std__levenshtein_distance__m, -func__std__levenshtein_distance__3, -func__std__levenshtein_distance__4, -1
};

static TAB_NUM tfunc__std_types___list___to_list[] = {
  1, // locals
  1, // parameters:
  var_no__std_types__list___to_list__self,
  // 707: ... -> self
  LET, 1, var_no__std_types__list___to_list__self, -1
};

static TAB_NUM tfunc__std_types__list___serialize__1[] = {
  1, // locals
  0, // no parameters
  // 719: ... indent+2
  var_no__std___plus, 2, var_no__std_types__list___serialize__indent, -number__2, 1, 4,
  // 719: -> indent+2
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__list___serialize__2[] = {
  0, // locals
  0, // no parameters
  // 720: -> undefined
  LET, 1, var_no__undefined, -1
};

static TAB_NUM tfunc__std_types__list___serialize__3[] = {
  2, // locals
  1, // parameters:
  var_no__std_types__list__serialize__3__item,
  // 722: ... serialize(item new_indent)
  var_no__serialize, 2, var_no__std_types__list__serialize__3__item, var_no__std_types__list___serialize__new_indent, 1, 4,
  // 722: ... -> serialize(item new_indent)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__list___serialize__4[] = {
  2, // locals
  0, // no parameters
  // 728: ... tabs_and_spaces(indent)
  var_no__tabs_and_spaces, 1, var_no__std_types__list___serialize__indent, 1, 5,
  // 728: ... append(tabs_and_spaces(indent) header)
  var_no__append, 2, 5, var_no__std_types__list___serialize__header, 1, 4,
  // 728: ... -> append(tabs_and_spaces(indent) header)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types___list___serialize[] = {
  4, // locals
  -2, // parameters:
  MANDATORY_PARAMETER, var_no__std_types__list___serialize__self,
  var_no__undefined, var_no__std_types__list___serialize__indent,
  // 718: indent.is_defined
  var_no__is_defined, 1, var_no__std_types__list___serialize__indent, 1, 4,
  // 716: $new_indent
  // 717:   if
  // 718:     indent.is_defined
  // 719:     -> indent+2
  // 720:     -> undefined
  var_no__if, 3, 4, -func__std_types__list___serialize__1, -func__std_types__list___serialize__2, 1, var_no__std_types__list___serialize__new_indent,
  // 721: map_reduce $contents
  // 722:   self: (item) -> serialize(item new_indent)
  // 723:   append
  // 724:   ""
  var_no__map_reduce, 4, var_no__std_types__list___serialize__self, -func__std_types__list___serialize__3, var_no__append, -string__2577886713, 1, var_no__std_types__list___serialize__contents,
  // 727: ... serialization_tag_of(self)
  var_no__serialization_tag_of, 1, var_no__std_types__list___serialize__self, 1, 4,
  // 727: ... length_of(self)
  var_no__length_of, 1, var_no__std_types__list___serialize__self, 1, 5,
  // 725: $header
  // 726:   "
  // 727:     @(serialization_tag_of(self)) <@(length_of(self))>
  var_no__std___string, 4, 4, -string__181749755, 5, -string__1922308840, 1, var_no__std_types__list___serialize__header,
  // 728: ... indent.is_defined
  var_no__is_defined, 1, var_no__std_types__list___serialize__indent, 1, 4,
  // 728: update_if indent.is_defined &header -> append(tabs_and_spaces(indent) header)
  var_no__update_if, 3, 4, var_no__std_types__list___serialize__header, -func__std_types__list___serialize__4, 1, var_no__std_types__list___serialize__header,
  // 729: append header contents
  var_no__append, 2, var_no__std_types__list___serialize__header, var_no__std_types__list___serialize__contents, -1
};

static TAB_NUM tfunc__std_types___list___deserializer_of[] = {
  2, // locals
  2, // parameters:
  var_no__std_types__list___deserializer_of__type,
  var_no__std_types__list___deserializer_of__items,
  // 736: -> items
  LET, 1, var_no__std_types__list___deserializer_of__items, -1
};


static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std_types___generic_list___put}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std_types___generic_list___get}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std_types___generic_list___pop}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std_types___generic_list___truncate}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std_types___generic_list___append_or_error}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std___concatenate}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std___concatenate_non_empty}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std_types___generic_list___reverse}},
  {FLT_FUNCTION, -1, {.tfunc = tfunc__std_types___generic_list___for_each}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std_types___generic_list___map}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std_types___generic_list___map_or_error}},
  {FLT_FUNCTION, -1, {.tfunc = tfunc__std_types___generic_list___std___reduce}},
  {FLT_FUNCTION, -1, {.tfunc = tfunc__std_types___generic_list___map_reduce}},
  {FLT_FUNCTION, -1, {.tfunc = tfunc__std_types___generic_list___sort}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std_types___generic_list___intersection}},
  {FLT_FUNCTION, -1, {.tfunc = tfunc__std_types___generic_list___merge}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std_types___generic_list___zip}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std_types___generic_list___flatten}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std_types___list___flatten}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std_types___generic_list___dup}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std_types___generic_list___contains}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std_types___generic_list___find_first}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std_types___generic_list___filter}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std___levenshtein_distance}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std_types___list___to_list}},
  {FLT_STRING_8, 4, {.str_8 = "list"}},
  {FLT_FUNCTION, -1, {.tfunc = tfunc__std_types___list___serialize}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std_types___list___deserializer_of}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_NEGATIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___truncate__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___truncate__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___append_or_error__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___append_or_error__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__append_or_error__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__append_or_error__2__2}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std__concatenate__func}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std__concatenate_non_empty__func}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std__concatenate_non_empty__func__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std__concatenate_non_empty__func__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std__concatenate_non_empty__func__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std__concatenate_non_empty__func__2__2}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std_types__generic_list___reverse__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___reverse__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___for_each__iterate_1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___for_each__iterate_2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___for_each__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___for_each__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___for_each__3}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__for_each__iterate_1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__for_each__iterate_1__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__for_each__iterate_2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__for_each__iterate_2__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__for_each__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__for_each__3__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___map__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___map__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map__2__2}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std_types__generic_list__map__2__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map__2__1__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map__2__1__1__2}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std_types__generic_list__map__2__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map__2__2__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map__2__2__1__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___map_or_error__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___map_or_error__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map_or_error__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map_or_error__2__2}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std_types__generic_list__map_or_error__2__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map_or_error__2__1__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map_or_error__2__1__1__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map_or_error__2__1__1__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map_or_error__2__1__1__2__2}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std_types__generic_list__map_or_error__2__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map_or_error__2__2__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map_or_error__2__2__1__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map_or_error__2__2__1__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map_or_error__2__2__1__2__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___std___reduce__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___std___reduce__2}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std_types__generic_list__std___reduce__2__reduce}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__std__reduce__2__reduce__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__std__reduce__2__reduce__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___map_reduce__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___map_reduce__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map_reduce__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map_reduce__1__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map_reduce__1__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map_reduce__1__2__2}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std_types__generic_list__map_reduce__1__2__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map_reduce__1__2__1__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map_reduce__1__2__1__1__2}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std_types__generic_list__map_reduce__1__2__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map_reduce__1__2__2__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map_reduce__1__2__2__1__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map_reduce__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map_reduce__2__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map_reduce__2__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map_reduce__2__2__2}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std_types__generic_list__map_reduce__2__2__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map_reduce__2__2__1__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map_reduce__2__2__1__1__2}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std_types__generic_list__map_reduce__2__2__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map_reduce__2__2__2__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__map_reduce__2__2__2__1__2}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std_types__generic_list___sort__sort}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__sort__sort__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__sort__sort__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___intersection__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___intersection__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___intersection__3}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std_types__generic_list__intersection__3__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__intersection__3__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__intersection__3__1__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___merge__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__merge__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__merge__1__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__merge__1__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__merge__1__1__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__merge__1__1__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__merge__1__1__1__2}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std_types__generic_list___zip__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___zip__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__zip__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__zip__2__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__zip__2__3}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__zip__2__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__zip__2__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__zip__2__3__1}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std_types__list___flatten__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__list__flatten__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__list__flatten__1__2}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___dup__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___dup__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___dup__3}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__dup__3__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__dup__3__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___contains__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___contains__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__contains__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__contains__2__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___find_first__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___find_first__2}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std_types__generic_list__find_first__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__find_first__1__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__find_first__1__1__1}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std_types__generic_list__find_first__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__find_first__2__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__find_first__2__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___filter__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list___filter__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__filter__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__filter__1__2}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std_types__generic_list__filter__1__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__filter__1__2__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__filter__1__2__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__filter__1__2__1__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__filter__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__filter__2__2}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std_types__generic_list__filter__2__2__filter}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__filter__2__2__filter__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__filter__2__2__filter__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__filter__2__2__filter__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_list__filter__2__2__filter__2__2}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std__levenshtein_distance__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std__levenshtein_distance__2}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std__levenshtein_distance__3}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std__levenshtein_distance__4}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std__levenshtein_distance__3__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std__levenshtein_distance__3__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std__levenshtein_distance__3__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std__levenshtein_distance__3__1__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__list___serialize__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__list___serialize__2}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std_types__list___serialize__3}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_STRING_8, 2, {.str_8 = " <"}},
  {FLT_STRING_8, 2, {.str_8 = ">\012"}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__list___serialize__4}}
};

static ATTRIBUTE_DEFINITION std_types___object__attributes[] = {
  {-var_no__is_a_generic_list, -var_no__false},
  {-var_no__is_a_list, -var_no__false}
};

static ATTRIBUTE_DEFINITION std_types___generic_list__attributes[] = {
  {-var_no__is_a_generic_list, -var_no__true},
  {var_no__append_or_error, func__std_types___generic_list___append_or_error},
  {var_no__contains, func__std_types___generic_list___contains},
  {var_no__dup, func__std_types___generic_list___dup},
  {var_no__filter, func__std_types___generic_list___filter},
  {var_no__find_first, func__std_types___generic_list___find_first},
  {var_no__flatten, func__std_types___generic_list___flatten},
  {var_no__for_each, func__std_types___generic_list___for_each},
  {var_no__get, func__std_types___generic_list___get},
  {var_no__intersection, func__std_types___generic_list___intersection},
  {var_no__map, func__std_types___generic_list___map},
  {var_no__map_or_error, func__std_types___generic_list___map_or_error},
  {var_no__map_reduce, func__std_types___generic_list___map_reduce},
  {var_no__merge, func__std_types___generic_list___merge},
  {var_no__pop, func__std_types___generic_list___pop},
  {var_no__put, func__std_types___generic_list___put},
  {var_no__reverse, func__std_types___generic_list___reverse},
  {var_no__sort, func__std_types___generic_list___sort},
  {var_no__std___reduce, func__std_types___generic_list___std___reduce},
  {var_no__truncate, func__std_types___generic_list___truncate},
  {var_no__zip, func__std_types___generic_list___zip}
};

static ATTRIBUTE_DEFINITION std_types___list__attributes[] = {
  {-var_no__deserializer_of, func__std_types___list___deserializer_of},
  {-var_no__empty_collection_of, -var_no__empty_list},
  {-var_no__is_a_list, -var_no__true},
  {-var_no__serialization_tag_of, string__625086679},
  {var_no__flatten, func__std_types___list___flatten},
  {var_no__serialize, func__std_types___list___serialize},
  {var_no__to_list, func__std_types___list___to_list}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_DERIVED, 0, 0,
    "self\000basic_loops", NULL,
    {"undefined\000"},
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_generic_list\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_list\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "object\000std_types", std_types___object__attributes,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_generic_list\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_list\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 21,
    "generic_list\000std_types", std_types___generic_list__attributes,
  },
  {
    FOT_UNKNOWN, 0, 7,
    "list\000std_types", std_types___list__attributes,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "put\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "get\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "pop\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "append_or_error\000", NULL,
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "separator_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "concatenate\000std", NULL,
    {.const_idx = func__std___concatenate}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "concatenate_non_empty\000std", NULL,
    {.const_idx = func__std___concatenate_non_empty}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reverse\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_or_error\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reduce\000std", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "sort\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "intersection\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "merge\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "zip\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "flatten\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "dup\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "contains\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "find_first\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "filter\000", NULL,
  },
  {
    FOT_INITIALIZED, 0, 0,
    "levenshtein_distance\000std", NULL,
    {.const_idx = func__std___levenshtein_distance}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_list\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deserializer_of\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
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
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___truncate__self\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___truncate__n\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___append_or_error__left\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___append_or_error__right\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std__concatenate_non_empty__func__myself\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std__concatenate_non_empty__func__left\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std__concatenate_non_empty__func__right\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___reverse__self\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___reverse__result\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to_by\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___for_each__finally\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from\000basic_loops", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to\000basic_loops", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "body\000basic_loops", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finally\000basic_loops", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "saved_context_of\000basic_loops", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
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
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___map__self\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___map__function\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__map__2__map\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__map__2__1__1__s\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__map__2__1__1__e\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__map__2__2__1__s\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__map__2__2__1__e\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___map_or_error__self\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___map_or_error__function\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__map_or_error__2__map\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__map_or_error__2__1__1__s\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__map_or_error__2__1__1__e\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__map_or_error__2__1__1__2__mapped_item\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__map_or_error__2__2__1__s\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__map_or_error__2__2__1__e\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__map_or_error__2__2__1__2__mapped_item\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___std___reduce__self\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___std___reduce__function\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___std___reduce__unit\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__std__reduce__2__reduce__items\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__std__reduce__2__reduce__n\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___map_reduce__self\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___map_reduce__map_function\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___map_reduce__reduce_function\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___map_reduce__unit\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__map_reduce__1__2__map_reduce\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__map_reduce__1__2__1__1__s\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__map_reduce__1__2__1__1__e\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__map_reduce__1__2__2__1__s\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__map_reduce__1__2__2__1__e\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__map_reduce__2__2__map_reduce\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__map_reduce__2__2__1__1__s\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__map_reduce__2__2__1__1__e\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__map_reduce__2__2__2__1__s\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__map_reduce__2__2__2__1__e\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___sort__compare\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__sort__sort__items\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__sort__sort__n\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___intersection__left\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___intersection__right\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__intersection__3__1__item\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___merge__left\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___merge__right\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___merge__compare\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___merge__i\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___merge__j\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___merge__n\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___merge__m\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___merge__result\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___zip__left\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___zip__right\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___zip__n\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___zip__m\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___zip__k\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___zip__result\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "min\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__list__flatten__1__item\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___dup__self\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___dup__n\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__dup__3__dlst\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___contains__self\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___contains__item\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___find_first__self\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___find_first__test\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__find_first__1__1__idx\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__find_first__1__1__item\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__find_first__2__1__item\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___filter__self\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list___filter__test\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__filter__1__2__good\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__filter__1__2__bad\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__filter__1__2__1__item\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__filter__2__2__filter__s\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_list__filter__2__2__filter__e\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std__levenshtein_distance__s\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std__levenshtein_distance__t\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std__levenshtein_distance__n\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std__levenshtein_distance__v0\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std__levenshtein_distance__v1\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "int16_array\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std__levenshtein_distance__3__i\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std__levenshtein_distance__3__1__j\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "let\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__list___serialize__indent\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__list___serialize__new_indent\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__list___serialize__header\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
  }
};

FUNKY_MODULE module__basic__types__collections__lists__list = {
  "_basic__types__collections__lists__list",
  "/home/leachim/source/cmds/funky/master/basic/types/collections/lists/list.fky",
  0, 0,
  0, 1,
  183, 173,
  NULL,
  NULL, used_namespaces,
  constants_table, variables_table
};
