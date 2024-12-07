#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std_types__collection___is_empty = -1,
  num_0 = -2,
  func_std_types__collection___is_not_empty = -3
};

enum {
  var__START = FIRST_VAR-1,
  var_std_types__collection, // derived
  var_std_types__object, // extern
  var_std__assign, // extern
  var_is_empty, // extern polymorphic
  var_length_of, // extern
  var_std__equal, // extern
  var_is_not_empty, // extern polymorphic
  var_not, // extern
  var_std__add, // attribute
  var_std__first_key_of, // attribute
  var_std__first_item_of, // attribute
  var_std__last_key_of, // attribute
  var_std__last_item_of, // attribute
  var_std__next_key_of, // attribute
  var_std__previous_key_of, // attribute
  var_std__retrieve_first_item, // attribute
  var_std__retrieve_last_item, // attribute
  var_std__next_item_of, // attribute
  var_std__previous_item_of, // attribute
  var_std__reverse, // attribute
  var_std__for_each, // attribute
  var_std__map, // attribute
  var_std__append_or_error, // attribute
  var_std__map_or_error, // attribute
  var_std__reduce, // attribute
  var_std__map_reduce, // attribute
  var_std__reduce_columns, // attribute
  var_std__reduce_rows, // attribute
  var_std__map_reduce_columns, // attribute
  var_std__map_reduce_rows, // attribute
  var_std__find_first, // attribute
  var_std__filter, // attribute
  var_std__sort, // attribute
  var_std__intersection, // attribute
  var_std__merge, // attribute
  var_std__difference, // attribute
  var_std__zip, // attribute
  var_std__flatten, // attribute
  var_std__truncate, // attribute
  var_std__pad_left, // attribute
  var_std__pad_right, // attribute
  var_std__pad_top, // attribute
  var_std__pad_bottom, // attribute
  var_std__has_prefix, // attribute
  var_std__has_suffix, // attribute
  var_std__without_prefix, // attribute
  var_std__without_suffix, // attribute
  var_std__before, // attribute
  var_std__truncate_from, // attribute
  var_std__behind, // attribute
  var_std__truncate_until, // attribute
  var_std__from, // attribute
  var_std__truncate_before, // attribute
  var_std__until, // attribute
  var_std__truncate_behind, // attribute
  var_std__between, // attribute
  var_std__contains, // attribute
  var_std__matches, // attribute
  var_std__dup, // attribute
  var_std__empty_collection_of, // attribute
  var_std__to_base64, // attribute
  var_std__from_base64, // attribute
  var_std__sha1, // attribute
  var__END
};


static TAB_NUM t_func_std_types__collection___is_empty[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 45_0_self
  // length_of(self) == 0
  var_length_of, 1, LOCAL(3), 1, LOCAL(1),
  // length_of(self) == 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // -> length_of(self) == 0
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(47, 6),
  POS(47, 6),
  POS(47, 3)
};

static TAB_NUM t_func_std_types__collection___is_not_empty[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 52_0_self
  // is_empty)
  var_is_empty, 1, LOCAL(3), 1, LOCAL(1),
  // not(self.is_empty)
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // -> not(self.is_empty)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(54, 15),
  POS(54, 6),
  POS(54, 3)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__collection___is_empty}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__collection___is_not_empty}}
};

static ATTRIBUTE_DEFINITION std_types__collection__attributes[] = {
  {var_is_empty, -func_std_types__collection___is_empty},
  {var_is_not_empty, -func_std_types__collection___is_not_empty}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_DERIVED, 0, 2,
    "collection\000std_types", std_types__collection__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "object\000std_types", NULL,
    {.position = POS(36, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(36, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(42, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(47, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(47, 6)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(49, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(54, 6)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "add\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "first_key_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "first_item_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "last_key_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "last_item_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "next_key_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "previous_key_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "retrieve_first_item\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "retrieve_last_item\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "next_item_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "previous_item_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "reverse\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "for_each\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "map\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "append_or_error\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "map_or_error\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "reduce\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "map_reduce\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "reduce_columns\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "reduce_rows\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "map_reduce_columns\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "map_reduce_rows\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "find_first\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "filter\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "sort\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "intersection\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "merge\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "difference\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "zip\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "flatten\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "truncate\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "pad_left\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "pad_right\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "pad_top\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "pad_bottom\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "has_prefix\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "has_suffix\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "without_prefix\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "without_suffix\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "before\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "truncate_from\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "behind\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "truncate_until\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "from\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "truncate_before\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "until\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "truncate_behind\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "between\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "contains\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "matches\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "dup\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "empty_collection_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "to_base64\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "from_base64\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "sha1\000std", NULL,
    {.has_a_setter = false}
  }
};

static FUNKY_NAMESPACE defined_namespaces[] = {
  {"basic_collections", 1, 0}
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__collections__collection = {
  "_basic__types__collections__collection", // module name
  "basic/types/collections/collection.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  1, // number of defined namespaces
  1, // number of used namespaces
  3, // number of constants
  63, // number of variables
  NULL, // required modules
  defined_namespaces,
  used_namespaces,
  constants_table,
  variables_table,
};
