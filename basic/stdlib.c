/// require ./branches
/// require ./constants
/// require ./debug
/// require ./environment
/// require ./error
/// require ./functional
/// require ./grammar
/// require ./io/io
/// require ./io/io_events
/// require ./io/jobs
/// require ./io/io_task_manager
/// require ./io/generic_terminal
/// require ./logical
/// require ./loops
/// require ./math
/// require ./parameters
/// require ./primitives
/// require ./types/meta
/// require ./types/boolean
/// require ./types/character
/// require ./types/date_and_time
/// require ./types/error
/// require ./types/function
/// require ./types/number
/// require ./types/object
/// require ./types/undefined
/// require ./types/unique_item
/// require ./types/serialization
/// require ./types/collections/collection
/// require ./types/collections/tuples/tuple
/// require ./types/collections/tuples/key_value_pair
/// require ./types/collections/tuples/value_range
/// require ./types/collections/lists/list
/// require ./types/collections/lists/sequence
/// require ./types/collections/strings/string
/// require ./types/collections/arrays/array
/// require ./types/collections/sets/set
/// require ./types/collections/sets/hash_set
/// require ./types/collections/sets/insert_order_set
/// require ./types/collections/sets/key_order_set
/// require ./types/collections/tables/table
/// require ./types/collections/tables/association_list
/// require ./types/collections/tables/hash_table
/// require ./types/collections/tables/insert_order_table
/// require ./types/collections/tables/key_order_table
/// require ./types/iterators/iterator
/// require ./types/iterators/bresenham
/// require ./types/iterators/random/lcg
/// require ./types/iterators/random/mersenne_twister
/// require ./types/iterators/random/random

#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"




extern FUNKY_MODULE module__basic__branches;
extern FUNKY_MODULE module__basic__constants;
extern FUNKY_MODULE module__basic__debug;
extern FUNKY_MODULE module__basic__environment;
extern FUNKY_MODULE module__basic__error;
extern FUNKY_MODULE module__basic__functional;
extern FUNKY_MODULE module__basic__grammar;
extern FUNKY_MODULE module__basic__io__io;
extern FUNKY_MODULE module__basic__io__io_events;
extern FUNKY_MODULE module__basic__io__jobs;
extern FUNKY_MODULE module__basic__io__io_task_manager;
extern FUNKY_MODULE module__basic__io__generic_terminal;
extern FUNKY_MODULE module__basic__logical;
extern FUNKY_MODULE module__basic__loops;
extern FUNKY_MODULE module__basic__math;
extern FUNKY_MODULE module__basic__parameters;
extern FUNKY_MODULE module__basic__primitives;
extern FUNKY_MODULE module__basic__types__meta;
extern FUNKY_MODULE module__basic__types__boolean;
extern FUNKY_MODULE module__basic__types__character;
extern FUNKY_MODULE module__basic__types__date_and_time;
extern FUNKY_MODULE module__basic__types__error;
extern FUNKY_MODULE module__basic__types__function;
extern FUNKY_MODULE module__basic__types__number;
extern FUNKY_MODULE module__basic__types__object;
extern FUNKY_MODULE module__basic__types__undefined;
extern FUNKY_MODULE module__basic__types__unique_item;
extern FUNKY_MODULE module__basic__types__serialization;
extern FUNKY_MODULE module__basic__types__collections__collection;
extern FUNKY_MODULE module__basic__types__collections__tuples__tuple;
extern FUNKY_MODULE module__basic__types__collections__tuples__key_value_pair;
extern FUNKY_MODULE module__basic__types__collections__tuples__value_range;
extern FUNKY_MODULE module__basic__types__collections__lists__list;
extern FUNKY_MODULE module__basic__types__collections__lists__sequence;
extern FUNKY_MODULE module__basic__types__collections__strings__string;
extern FUNKY_MODULE module__basic__types__collections__arrays__array;
extern FUNKY_MODULE module__basic__types__collections__sets__set;
extern FUNKY_MODULE module__basic__types__collections__sets__hash_set;
extern FUNKY_MODULE module__basic__types__collections__sets__insert_order_set;
extern FUNKY_MODULE module__basic__types__collections__sets__key_order_set;
extern FUNKY_MODULE module__basic__types__collections__tables__table;
extern FUNKY_MODULE module__basic__types__collections__tables__association_list;
extern FUNKY_MODULE module__basic__types__collections__tables__hash_table;
extern FUNKY_MODULE module__basic__types__collections__tables__insert_order_table;
extern FUNKY_MODULE module__basic__types__collections__tables__key_order_table;
extern FUNKY_MODULE module__basic__types__iterators__iterator;
extern FUNKY_MODULE module__basic__types__iterators__bresenham;
extern FUNKY_MODULE module__basic__types__iterators__random__lcg;
extern FUNKY_MODULE module__basic__types__iterators__random__mersenne_twister;
extern FUNKY_MODULE module__basic__types__iterators__random__random;

static FUNKY_MODULE *required_modules[] = {
  &module__basic__branches,
  &module__basic__constants,
  &module__basic__debug,
  &module__basic__environment,
  &module__basic__error,
  &module__basic__functional,
  &module__basic__grammar,
  &module__basic__io__io,
  &module__basic__io__io_events,
  &module__basic__io__jobs,
  &module__basic__io__io_task_manager,
  &module__basic__io__generic_terminal,
  &module__basic__logical,
  &module__basic__loops,
  &module__basic__math,
  &module__basic__parameters,
  &module__basic__primitives,
  &module__basic__types__meta,
  &module__basic__types__boolean,
  &module__basic__types__character,
  &module__basic__types__date_and_time,
  &module__basic__types__error,
  &module__basic__types__function,
  &module__basic__types__number,
  &module__basic__types__object,
  &module__basic__types__undefined,
  &module__basic__types__unique_item,
  &module__basic__types__serialization,
  &module__basic__types__collections__collection,
  &module__basic__types__collections__tuples__tuple,
  &module__basic__types__collections__tuples__key_value_pair,
  &module__basic__types__collections__tuples__value_range,
  &module__basic__types__collections__lists__list,
  &module__basic__types__collections__lists__sequence,
  &module__basic__types__collections__strings__string,
  &module__basic__types__collections__arrays__array,
  &module__basic__types__collections__sets__set,
  &module__basic__types__collections__sets__hash_set,
  &module__basic__types__collections__sets__insert_order_set,
  &module__basic__types__collections__sets__key_order_set,
  &module__basic__types__collections__tables__table,
  &module__basic__types__collections__tables__association_list,
  &module__basic__types__collections__tables__hash_table,
  &module__basic__types__collections__tables__insert_order_table,
  &module__basic__types__collections__tables__key_order_table,
  &module__basic__types__iterators__iterator,
  &module__basic__types__iterators__bresenham,
  &module__basic__types__iterators__random__lcg,
  &module__basic__types__iterators__random__mersenne_twister,
  &module__basic__types__iterators__random__random
};

static FUNKY_NAMESPACE defined_namespaces[] = {
  {"std_private", 1, 0}
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__stdlib = {
  "_basic__stdlib", // module name
  "basic/stdlib.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  50, // number of required modules
  1, // number of defined namespaces
  1, // number of used namespaces
  0, // number of constants
  0, // number of variables
  required_modules,
  defined_namespaces,
  used_namespaces,
  NULL, // no constants
  NULL, // no variables
};
