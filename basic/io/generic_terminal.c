#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"


enum {
  var__START = FIRST_VAR-1,
  var_std__character_width_of, // attribute
  var_std__assign, // extern
  var_std__ascent_of, // attribute
  var_std__descent_of, // attribute
  var_std__character_height_of, // attribute
  var_std__line_spacing_of, // attribute
  var_std__line_height_of, // attribute
  var_std__base_line_of, // attribute
  var_std_types__generic_terminal, // derived
  var_std_types__object, // extern
  var_type_of, // extern polymorphic
  var_undefined, // extern
  var_width_of, // extern polymorphic
  var_height_of, // extern polymorphic
  var_character_width_of, // extern polymorphic
  var_ascent_of, // extern polymorphic
  var_descent_of, // extern polymorphic
  var_character_height_of, // extern polymorphic
  var_line_spacing_of, // extern polymorphic
  var_line_height_of, // extern polymorphic
  var_base_line_of, // extern polymorphic
  var__END
};


static ATTRIBUTE_DEFINITION std_types__generic_terminal__attributes[] = {
  {-var_type_of, -var_undefined},
  {-var_width_of, -var_undefined},
  {-var_height_of, -var_undefined},
  {-var_character_width_of, -var_undefined},
  {-var_ascent_of, -var_undefined},
  {-var_descent_of, -var_undefined},
  {-var_character_height_of, -var_undefined},
  {-var_line_spacing_of, -var_undefined},
  {-var_line_height_of, -var_undefined},
  {-var_base_line_of, -var_undefined}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "character_width_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(23, 1)}
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
    "base_line_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_DERIVED, 0, 10,
    "generic_terminal\000std_types", std_types__generic_terminal__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "object\000std_types", NULL,
    {.position = POS(31, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "type_of\000", NULL,
    {.position = POS(33, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(33, 38)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "width_of\000", NULL,
    {.position = POS(34, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "height_of\000", NULL,
    {.position = POS(35, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "character_width_of\000", NULL,
    {.position = POS(36, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "ascent_of\000", NULL,
    {.position = POS(37, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "descent_of\000", NULL,
    {.position = POS(38, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "character_height_of\000", NULL,
    {.position = POS(39, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "line_spacing_of\000", NULL,
    {.position = POS(40, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "line_height_of\000", NULL,
    {.position = POS(41, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "base_line_of\000", NULL,
    {.position = POS(42, 30)}
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
  0, // number of constants
  21, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  NULL, // no constants
  variables_table,
};
