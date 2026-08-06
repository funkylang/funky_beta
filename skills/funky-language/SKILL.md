---
name: funky-language
description: Funky language reference — syntax, semantics, data types, control flow, and naming conventions.
depends_on: []
version: 1.0.0
author: Hermes Agent
license: MIT
metadata:
  hermes:
    tags: [funky, language, syntax, semantics, reference]
---

# Funky Language Reference

## Core Philosophy

Funky is a **pure functional** and **pure object-oriented** programming language. It has **no keywords** — special characters replace them (`$`, `!`, `&`, `:`, `/`, `.`). Everything is an immutable object and every object is a callable function. Indentation-based grouping, space-separated arguments (no commas).

**Key principles:**
- Pure immutability — "changes" create clones, never mutate
- Value semantics — everything copied, never aliased
- Deterministic — same input always yields same output
- Dynamic but strong typing
- Garbage collected
- **Logically sequential, autoparallelizable** — code reads as strictly sequential, but purity allows the runtime to parallelize independent operations automatically. This is fundamentally different from Erlang's explicit threading model.

**Semantic comparison:** Funky is closest to **Erlang** in semantics (pure functional, dynamic typing, immutability, value semantics, garbage collected), but uses a completely different I/O model. Erlang relies on concurrent threads; Funky relies on purity-driven autoparallelization.

## Minimal Core

The interpreter/runtime only needs to support three things:
1. **Function calls** (indentation-based syntax)
2. **Variable binding** (`$`, `!`)
3. **Object creation and attribute access**

Everything else — `if`, `loop`, `repeat`, `case`, `cond`, `try`, booleans (`std::true`/`std::false`) — is **library code** written in Funky itself. No control flow is built into the runtime. You can inspect the source of `if` in `basic/branches.fky`. The boundary between "language feature" and "library function" does not exist.

## Implicit `assign` syntax

When a statement starts with `$` or `!`, the compiler implicitly treats it as a call to `assign`:

```
$var value      # implicit: assign $var value
!var value      # implicit: assign !var value
-> value        # implicit: assign value  (return to caller)
```

These are the only implicit syntax shortcuts. Every other function call is an explicit functor.

## Three Root Objects

All objects derive from one of:
- `std_types::object` — normal objects
- `std_types::undefined` — NULL equivalent (singleton, `std::undefined`)
- `std_types::error` — error objects (auto-propagate through call chain)

## Variables and Scope

```
$var value          # define (first use in scope)
!var new_value      # redefine (rebinds in current scope only)
```

Variables are **lexically scoped**. A function receives a **copy** of the environment, so redefinitions inside a function are invisible to the caller. Variables can be redefined any number of times within their scope.

**Shadowing is forbidden** — a variable name cannot be reused for another definition in an inner scope.

**Input-output arguments:**
```
&var                # shorthand for "!var var" — read AND rebind
sqrt &x             # same as sqrt !x x
```
`&var` only works in **procedure style** (space-separated), never inside `func(&var)`.

## Modules

Modules are `.fky` files. Meta-instructions at the top control module composition:

### `<require module_name>`
Includes another source code module. Like an include/linker directive — it makes all exported symbols from that module available.

- Paths starting with `.` are relative to the requiring module's directory
- Paths starting with a letter reference library files (searched via `FUNKY_LIBRARY_PATH`)
- The `.fky` extension is omitted
- Module names must be valid Funky identifiers

### Meta-modules
Some modules exist purely to require a set of other modules. `basic/stdlib` is the primary meta-module — it requires most standard library modules. If an application doesn't explicitly require any module, `basic/stdlib` is auto-required.

**Order of `<require>` doesn't matter** (the linker resolves dependencies), but keeping a logical order aids readability.

### `<namespace name>` or `<namespace name-major.minor>`
Declares a namespace (and version) that this module can define symbols in. Every namespace used must be declared. Once published, a namespace version must never change.

### `<using namespace>` or `<using namespace-major.minor>`
Sets the default version of a namespace for reading/redefining symbols in this module. Only one `<using>` per namespace per module.

### `<resolve namespace-major.minor>`
Like `<using>` but you still write the namespace prefix explicitly (e.g., `std::println!`).

### `<alias short = long>`
Alias a namespace name. Used in definitions and reads alike.

### Export rules
- `$namespace::symbol` — exported (visible to other modules)
- `$symbol` — private (only visible within the declaring module)
- No explicit `<export>` directive exists

## Functions

Functions start with a colon `:`.

### Definition
```
$my_func: (param1 param2)
  $local 42
  -> param1+local*param2
```

### Parameters

Two forms:

**Inline** — all parameters on one line, space-separated:
```
(myself^ mandatory1 mandatory2 optional1 = default rest* right_mandatory)
```

**Multi-line** — one parameter per line:
```
(
  myself^
  mandatory1
  mandatory2
  optional1 = default
  rest*
  right_mandatory
)
```

Parameter roles:
- `myself^` — the function object itself
- `mandatory` — required, at start or end
- `optional = default_value` — optional, default must be a literal or identifier
- `rest*` — collects excess arguments into a list
- `right_mandatory` — required, at end (after optional/rest)

### Return

`->` is syntactic sugar for `assign` — it explicitly returns value(s) to the caller.

`````
-> result1 result2    # space-separated multi-return (no commas!)
```

A comma creates a **sequence** (`a, b, c` = `sequence(a b c)`), NOT multiple results.

`````
-> a, b               # returns ONE sequence, NOT two values
```

When a branch body is a single `->`, the colon can be omitted.

**Implicit return via tail call:** When the last statement has **NO** explicit result destinations (`$`/`!`), its results automatically propagate to the caller. This is the most common return mechanism.

**Critical rule: a tail call MUST NOT have explicit results.** If you add `$dest` or `!dest` to the final call, you capture it locally instead of returning it — which breaks the return mechanism.

### Polymorphic functions
Declared with empty parentheses, then implemented per-type:
```
$describe ()                         # declaration

$std_types::number/describe: (_x)    # method for number type
  -> "a number"

$std_types::string/describe: (_x)    # method for string type
  -> "a string"

$std_types::object/describe: (_x)    # default for all other types
  -> "unknown"
```
Dispatch is on the **first argument's type**. `_` prefix suppresses unused parameter warnings.

**Read-only polymorphic functions:**
```
$my_attr_of ()
```
Reading: `my_attr_of(obj)` returns the attribute value.
Setting: `!obj.my_attr_of new_value`

**Polymorphic functions with setter:**
```
$my_attr_s_of (!)
```
Reading: `my_attr_s_of(obj)` returns the attribute value.
Setting via `!obj` syntax: `!obj.my_attr_s_of new_value` (works for all polymorphic functions).
Setting via the function itself: `$new_obj my_attr_s_of(obj new_value)` — this is the *additional* setter channel that `(!)` provides.

The setter form lets you pass the polymorphic function as an argument to another function, which can then change the attribute value without knowing its name. Without the setter, only the caller with explicit `!obj.attr_of` syntax can set the value.

Methods cannot be redefined — only attributes can use setters.

An attribute can only be redefined on an object of a specific type if it was defined!

Incorrect:

$some_attr_of ()
$my_type std_types::object

$my_obj my_type
!my_obj.some_attr_of 47 # error: the attribute some_attr_of wasn't defined for my_obj

Correct:

$some_attr_of ()
$my_type std_types::object
$my_type.some_attr_of undefined # define a (default) value

$my_obj my_type
!my_obj.some_attr_of 47

One more example:

$attr_1_of ()
$attr_2_of ()
$attr_3_of ()

Now let's define a with all 3 attributes:

$my_type std_types::object
$my_type.attr_1_of 3
$my_type.attr_2_of 7
$my_type.attr_3_of 11

Each line of the type definition could be in its own module. The runtime linker
collects all these definitions to define a single type.

Instead of defining each attribute separately for a type they can all be defined at once:

$my_type std_types::object
  .attr_1_of 3
  .attr_2_of 7
  .attr_3_of 11

## Function Calls

### Multi-line function call syntax
The **universal function call syntax** in Funky — every function call, including control flow, uses the same indentation-based form:

```
functor
  arg1
  arg2
```

The **functor** (function name) always starts the statement line. Arguments are indented below it. This is not a special syntax for `if` — it's how ALL function calls work.

```
if
  condition
  :
    then-statements
  :
    else-statements
```

is literally `if` called with three arguments. There is no special conditional syntax.

### Result binding
In multi-line calls, capture results with `$` before the functor:

```
plus $sum
  x
  y
```

This calls `plus` with arguments `x` and `y`, binding the result to `sum`.

**Every statement must return a result.** A function call that returns no results and is no I/O-call is useless and indicates a bug. Intermediate results must be captured or passed to subsequent calls.

### Parenthesized inline form `func(arg1 arg2)`
`````
func(arg1 arg2)
```

**This is an EXPRESSION** — it can only be used as an **argument** to a statement or another function call, never as a standalone statement. A function body is a sequence of multi-line block statements, not parenthesized expressions.

`````
: (x)
  times(x x)         # ❌ Cannot be a statement
  times
    x
    x                # ✅ Must be a statement
```

But as an argument:
`````
  plus
    $result
    times(x x)       # ✅ Used as an argument
    5
```

### Procedure style (multi-result, in-place, I/O)
```
func arg1 arg2 $dest1 $dest2
func arg1 !existing_var
```
**Convention:** output arguments before input arguments, but they can be **freely interleaved**. Only the relative order within outputs and within inputs matters.

Examples — all equivalent:
```
assign $a 1 $b 2
assign 1 $a 2 $b
assign $a $b 1 2
assign 1 2 $a $b
```

### Implicit parameters

A callee inherits all the variables of its caller. There is no need to explicitly reach them in. It's only necessary to return them, if you want your changes to become visible to the caller.

```
$x 3

$inc_x:
  -> x+1
  
$f: (y)
  -> x+y

inc_x !x
println! f(7) # prints "11"
```

### I/O functions
I/O functions are **called** with `!` suffix. The function **definition** NEVER carries `!`:
```
$my_print: (message)
  println! message     # ✅ definition has no !

my_print! "Hello"      # ✅ call site has !
```

**Implicit I/O propagation:** if a function body calls an I/O function, ALL calls to that function must use `!`. So if `my_print` calls `println!`, then `my_print! "text"` is required — the caller annotates with `!`.

If any argument to a function is a function literal containing I/O calls, the outer call is implicitly annotated. So

```
if
  condition
  :
    println! "yes"
  :
    println! "no"
```

works without `if!`.

### Infix operators
```
a+b       # is plus(a b)
a*b       # is times(a b)
a > b     # is less(b a)
```
Infix expressions group as a single expression. In procedure style: `plus &sum a*b` works, but `plus &sum times a b` fails (4 arguments).

**Spacing convention:** arithmetic operators (`+`, `-`, `*`, `/`) are written **without** spaces to visually group into a single argument. All other operators (`<`, `>`, `==`, `!=`, ...) keep spaces. The operators and precedence mostly match C++.

### Conventional optimized forms
The `$dest expr` pattern replaces `functor $dest arg` when the functor is an infix operator:

```
times $result x x       # explicit but verbose
$result x*x             # ✅ conventional — implicit assign, infix groups as single argument
```

The `$result` triggers implicit `assign`, and `x*x` is the infix form of `times` used as the value argument. The lack of spaces around `*` groups it visually as one argument.

### Suffix notation
```
value.to_string       # instead of to_string(value)
```

`Argument must be an identifier or parenthesized expression — not a literal.

### Named operators

```
bag .contains. item   # instead of contains(bag item)
```

If several named operators appear in an expression their precedence *must* be explicitly defined, e.g.:

```
(text .behind. '<') .before. '>'
```

### Backtick syntax
`` `expr `` expands to `"expr" expr` — two arguments where the first is the stringified symbol name. Most commonly used with `dump!`:
```
dump! `x `y          # same as dump! "x" x "y" y
```
Works on variable names and parenthesized expressions. The backtick has **top precedence**, so expressions need parentheses:
```
`(a+b)              # works — "(a+b)" (a+b)
`a+b                # does NOT work — backtick binds too tightly
```

## Control Flow

All control flow is implemented as **functions written in Funky** — none are built into the runtime. The interpreter only needs to support function calls, variable binding, and object creation. Control flow lives in the standard library (`basic/branches.fky`, `basic/loops.fky`, etc.).

This means:
- You can write your own control structures as regular functions
- Control flow source is inspectable — read `if` to see how it works
- The boundary between "language feature" and "library function" does not exist

### if
```
if
  condition
  :
    then-function
  :
    else-function
```

The condition is evaluated. Then/else are **function literals** introduced by `:`. Only one is called (dispatch on `true`/`false` type).

**Nested if inside else-branch:** When the else-branch is a function literal whose body is another `if`, write:
```
if
  x > 0
  : -> "positive"
  :
    if
      x < 0
      : -> "negative"
      : -> "zero"
```
The `:` introduces a function literal, and the indented `if` is the body of that literal. Do NOT write `: if ...` on the same indentation level — that puts `if` as a sibling argument to the outer `if`, not as the body of the else-branch.

### if — Multiple results

Single-result branches can omit the colon:
```
if
  condition
  -> then_value
  -> else_value
```

`if` can also return multiple results:
```
if $result_1 $result_2
  i > n
  -> n n
  -> i n
```

### cond
```
cond
  -> condition1:
    body1
  -> condition2:
    body2
  -> true:
    default_body
```
Each argument returns two values: a boolean and a function. Evaluates arguments in order until one returns `true`.

### case
```
case value
  'a'..'z':
    body
  'A'..'Z':
    body
  :
    default
```
Alternating sequence of values and functions. Compares value against each case value in order.

### loop
```
$i 1
loop $result
  : # body
    if
      i > 10:
        break
      :
        print! i " "
        plus &i 1
        next!
  -> i            # finally — receives final variable state
println! "stopped at" result
```
`next!` must be in tail position (use `!` when body has I/O). `break` exits to the finally function. The finally is a regular function — capture its result with `$result -> value` or get "TOO MANY RESULTS".

if the finally function of a "loop" would only return one or more values as in the example above it can be simplified:

```
$i 1
loop $result
  : # body
    if
      i > 10
      -> i # return i as the result
      :
        print! i " "
        plus &i 1
        next!
println! "stopped at" result
```

To use a loop for updating a variable use the following scheme:

```
loop $var_to_update
  :
    ...
    update_var
    next
  -> var_to_update
```

### from_to, from_to_by, repeat, for_each
```
repeat 10:
  print! '*'
  next!

from_to 1 10: (i)
  println! i
  next!

from_to_by 0 100 10: (i)
  println! i
  next!

for_each my_list: (item)
  println! item
  next!
```
`next!` (WITH `!`) required when body has I/O calls.

### Accumulation pattern
```
$sum 0
from_to !sum 1 10
  : (i)
    plus &sum i*i
    next
  -> sum
println! sum    # 55
```
`!dest` captures the finally return value. Works with `from_to`, `from_to_by`, `loop`, `repeat`, and `for_each`.

**Callbacks cannot accumulate outer variables.** A callback receives a **copy** of the environment, so rebindings inside (`&sum`) only affect the local copy. The outer variable remains unchanged. This is why `from_to` (with `!dest` capturing the finally result) is the correct accumulation pattern, NOT `for_each` with an outer variable.

Example of what DOES NOT work:
```
$sum 0
for_each my_list
  : (item)
    plus &sum item     # ❌ rebinds local copy, outer sum stays 0
    next!
```

Example of what DOES work:
```
$size length_of(my_list)
from_to !sum 1 size
  : (i)
    plus &sum my_list(i)
    next
  -> sum
```

## Objects

Objects are created by cloning existing objects and changing attributes:

```
$person std_types::object
  .first_name_of "John"
  .last_name_of "Doe"
  /name_of: (self)
    -> string(first_name_of(self) " " last_name_of(self))
  /: (myself^)
    print! "Hi, I'm @(first_name_of(myself))!"
```

- `.attr value` — attribute (stored per-object, fast access)
- `/method: (self)` — method (computed, per-type)
- `/: (myself^)` — type function (called when object is used as a function)
- `!obj.attr new_value` — clone with changed attribute

**Attributes** implement polymorphic functions as stored values. **Methods** implement them as computed functions. Same polymorphic function can be an attribute on one type and a method on another.

**Methods cannot be retrieved** — you can't extract a method function from an object. This prevents moving a method of a builtin object to the wrong type.

## Data Types

### Numbers
- Integers: `42`, `0xFF`, `0b1010`, `0o755`, `1'000'000`. All literals positive; use `-` prefix for negation.
- Reals: `3.14`, `2.5e10`. Must have decimal point with digit after, or an exponent. No apostrophe separators.
- `4/2 = 2` (integer), `5/2 = 2.5` (real)

### Booleans
`std::true` and `std::false` — singleton instances of `std_types::true` and `std_types::false`. NOT `true`/`false` keywords.

### Characters
A distinct type (not integers). 32-bit unsigned values, typically Unicode codepoints. `'a'`, `'@65;'` (numeric = 'A'), `'@alpha;'` (named). Used as string elements.

### Strings
One-based indexing. Called with one argument = get character. Called with two = replace character.
```
$str "Hello"
str(2)          # 'e'
str(2 'a')      # "Hallo"
range(str 1 3)  # "Hel" — substring from position 1 to 3
```
Interpolation: `"@(expr)"` expands to `string(expr)`.

Multi-line strings: `"` at end of line, indented content follows. Trailing `@` on a line strips the newline and leading whitespace of the next line.

### Lists
One-based indexing. Heterogenous content. Contiguous, implemented as growable arrays (not linked lists).
```
$items list(1 'x' 3)
items(1)              # 1
items(1 99)           # list(99 'x' 3) — new list with position 1 changed
push &items 4         # list(1 'x' 3 4) — procedure style, rebinds items
append(a b c)         # can append any number of lists/strings together
range(items 2 3)      # list('x' 3) — sublist from position 2 to 3
length_of(items)      # 4 — list length (follows _of naming convention)
```

### Tuples
Fixed number of fields. `tuple("a" 47 'c')`. Destructure: `tuple $first $second`.

### Key-value pairs
`KEY = value` — a 2-field tuple. NOT assignment.

### Value ranges
`start..end` (inclusive both ends). Syntactic sugar for `value_range(start end)`.

### Sequences
Comma-separated values: `a, b, c` is syntactic sugar for `sequence(a b c)`.
Sequences are a special list type, commonly used in `case` expressions and grammar rules.

Example:
```
case chr
  '[', ']':       # sequence('[' ']')
    body
  'a'..'z':       # value_range('a' 'z')
    body
```

### Unique items
`$RED .` — each `.` creates a distinct value. Used as enums. Can be compared for equality but have no ordering. Only appears as initialization in definitions.

## Error Handling

```
try $err:
  open! $fd "file.txt" "w+"
  write_to! fd "data"
  close! fd
on err.is_an_error:
  eprint! "Error: @(err.to_error_message_string)"
```
Error objects auto-propagate: if used as a function argument, methods dispatched on the error return the error itself.

## Source Code Rules and Naming Conventions

### File format
- Extension: `.fky`, UTF-8, LF line endings, **trailing newline required**
- 2-space indent, 80-char limit
- Tabs only at start of lines for block structure; never within a line
- No trailing whitespace, no whitespace on empty lines
- File names: ASCII letters/digits/underscores, starts with letter, no double underscores, doesn't end with underscore
- **Shebang line:** Main modules MUST start with `#!/usr/bin/env fkyrun` and be `chmod +x`. Library modules and submodules MUST NOT have a shebang line.
- **No `$main` procedure.** The top-level code in the main module IS the entry point — it executes sequentially as a sequence of function calls.
- **Top-level variable shadowing:** When calling a function multiple times at the top level, the first call uses `$dest` but subsequent calls must use `!dest` (shadowing is forbidden).

### Arithmetic operator spacing
Because Funky uses spaces (not commas) to separate arguments, arithmetic operators are written **without** surrounding spaces to visually group expressions into single arguments:
```
i+1 < n             # "i+1" is one argument, "n" is another
i + 1 < n           # looks like 3 arguments: i, 1, n — misleading!
```

### Identifiers
- `_` prefix marks unused variables; `__` prefix reserved for compiler internals
- `snake_case` for identifiers
- `SCREAMING_SNAKE_CASE` for constants
- Attributes end in `_of`
- Tests: `is_a_`, `is_an_`, `has_a_`, `has_an_`
- Conversion: `to_` prefix
- Collections: plural (`items`, `children`)
- Use "an" vs "a" appropriately (`is_an_octet_string`)

**Shared symbol space:** Variables, methods, types, and all symbols share a single flat symbol space. This means a method named `length` would prevent you from naming a variable `length`. The `_of` suffix convention is not just style — it's a necessity to keep the base name free for variable use. Example: `length_of` is the method, leaving `length` available as a variable name.

## Good Examples to Study

- `basic/branches.fky` — `if`, `cond`, `case` implementations
- `basic/loops.fky` — `loop`, `next`, `break`, `repeat`, `from_to`, `for_each`
- `basic/types/collections/strings/string.fky` — strings, polymorphism
- `tutorial/fall_1.fky` through `fall_10.fky` — progressive examples

**Do NOT use** `basic/stdlib.fky` — only `<require>` directives, no actual code.

## Session Workflow

### Reload skills before fixing code

Skills loaded at the start of a session get pushed out of context during analysis. **Before implementing any code fix, reload `funky-language`, `funky-debugging-and-testing`, and `funky-manual-pages` with `skill_view`** to bring the relevant rules back into context. Do NOT rely on skills being "in your head" from earlier in the session.

### Stop and ask after 1-2 failed attempts

If a fix attempt fails, form a new hypothesis. If the SECOND fix attempt also fails — **STOP**. Show the code to the user and ask for advice. Do NOT iterate blindly for hours. The user prefers step-by-step collaboration over autonomous trial-and-error.

**When to ask:**
- After 2 failed fix attempts on the same problem
- When unsure about Funky syntax or semantics
- When an error message doesn't clearly point to a fix
- When a decision about approach or trade-offs is needed

## Common Pitfalls

- **Check the standard library first** — before writing complex functions (sorting, string manipulation, math, etc.), check whether the library already provides it. Reimplementing existing library functions wastes effort and creates maintenance debt.
- I/O requires `!` — `println "text"` fails with "MISSING IO ACCESS RIGHTS!"
- Implicit I/O propagation — only leaf I/O needs explicit `!`
- No mutation — only redefinition
- Tail position — last call must NOT have destinations (`$`/`!`)
- One-based indexing
- `next!` in tail position of loops (with `!` when body has I/O)
- `&var` only in procedure style
- Multi-return uses spaces, not commas (`-> a b` not `-> a, b`)
- Procedure style for multi-result capture: `func arg1 $d1 $d2`, NOT `func(arg1) $d1 $d2`
- Infix for compound expressions in procedure style: `i*i` not `times i i`
- `from_to` or 'for_each' for accumulation, not outer variable modification
- `if` branches are functions — need `:` or `->`, bare expressions crash
- `!var` only rebinds in current scope — caller doesn't see the change
- **Redefinitions inside `if`/`on` branches are local to that branch** — the body is a function literal (copy of the environment). Write-back to outer variables must happen INSIDE the branch, not after it.
- **`on` is special-purpose** — use for error handling only. Use `if` for general conditional logic.
- Loop finally must be captured with `$var -> value` or get "TOO MANY RESULTS"
- All multiline arguments indented at same level
- `<require>` order doesn't matter (linker resolves), but logical order helps readability
- `` `x `` works on variable names and parenthesized expressions; bare expressions need parens: `` `(a+b) ``
- `debug::dump!` is a debug function — fine for examples but not production code
- Debug functions do not need I/O access rights
- Some I/O functions return results — if the last call in main is a function, main returns that result and fkyrun errors with "MAIN RETURNED A RESULT". Discard the result by capturing it: `close! $_ignored fd`
- There is no need for explicitly converting numeric values (integer, real) — only strings must be explicitly converted; use `.to_integer` or `.to_number`. `to_number`on a string returns an integer when the string has no decimal point, or a real when it does — e.g., `"2026".to_number` → `2026`, `"45.123".to_number` → `45.123`.
- **`->` returns space-separated results, not function arguments** — `-> append a b` returns 3 values (append, a, b). Use a tail call instead: `append a b` as the last statement.
- **Parenthesized calls only as arguments** — `func(arg)` can only be used as an argument inside another call. Never as a standalone statement. Always unwind nested calls into separate `$var` bindings.
- **`strip()` does not exist** — use `split(str delimiter)` or `range(str 2 -2)` for string manipulation.
- **String concatenation** — use `string("a" "b" "c")` or `"@(expr)"` interpolation. The `+` operator does NOT concatenate strings (causes "NO SUCH ATTRIBUTE (plus)!" on strings).
- **Lists lack `to_string`** — `@(my_list)` crashes. Use `dump!` instead, which uses serialization.
- **`$dest expr` conventional form** — instead of `functor $dest arg1 arg2`, write `$dest expr` when using infix operators. Example: `$result x*x` instead of `times $result x x`. The `$` triggers implicit `assign`, and `x*x` (no spaces around `*`) is the infix expression grouped as a single value argument.
