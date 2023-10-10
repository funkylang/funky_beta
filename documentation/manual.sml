TITLE: Funky Manual

Preface

  Funky is an all-purpose (pure) functional and object oriented programming language. It can be used to write small scripts, application programs and just about any software that does not rely on direct access to hardware.

  One of the design goals was to create a language suited to create large software projects in the realm of classical artificial intelligence (e.g. "expert systems").

  But meanwhile AI systems based on neural networks had an unimaginable boost. To accomodate this new development an interface to use LLMs (Large Language Models) is planned for the near future.

  Funky makes it easy to write comprehensible software and at the same time allows the utilization of the vast amount of execution units of modern computers. The logical flow of control is always sequential. The functional design of the language makes it easy for the compiler and runtime system to exploit the lack of side effects to compute function results in parallel at a very fine grained level.

  Funky uses an indentation based syntax for *all* multi-line language constructs including string literals and remarks.

  It has a very simple syntax for defining anonymous functions which are widely used. There are no keywords and no "special forms".

  Function calls (the only kind of "statement" in Funky) can be written in several ways that make their semantic intention more clear.

  There are no loop- or branch-statements; they are replaced by recursion and polymorphic function calls.

  Variables have lexical scope but dynamic lifetime.

  To ease arithmetic and logic operations, C-style operators (+, -, &&, >>, etc.) are supported as *syntactic sugar*.

  Funky supports completely separate compilation of source code modules. To compile a module no other file than the module's source code file has to be consulted.

  As a functional language Funky uses value semantics. So no object can ever be modified, but new objects can be derived from existing ones. This prevents problems like deep vs. shallow copies, equality vs. identity and offers uniform semantics for copying and updating.

  The typing discipline of Funky is dynamic but it does not support duck typing and arguments are not converted automatically (so Funky uses strong typing). Funky compilers should test for potential runtime errors at compile time wherever possible.

  The use of dynamic variables makes Funky well suited for parallel execution.

  Funky offers uniform access to functions, data structures, methods and attributes - they are all function calls in Funky. So the implementation can be changed later on without the need to change the interface.

  The definitions of methods and attributes for any specific object can be distributed over several source code modules. An application program can add (private or global) methods and attributes to a prototype object defined in a library.

  Funky guarantees determinism: a program run on the same stream of input data will always produce the same stream of output data. This makes debugging Funky programs quite easy. All input events can be logged and a post mortem debugger can replay these events and allow the user to run his program forwards and backwards in small or large steps.

  Funky allows defining objects and their parts in any order. Everything that can be resolved will be resolved!

Concepts

  Determinism

    Funky is a deterministic programming language. If fed the same input data, a Funky program will return the same results on each run and (hopefully!) each platform.

    This sounds trivial but isn't.

    * This prevents the usage of concurrency.

    * There is no place for *implementation defined* stuff.

    But Funky *shall* make use of modern multi-core CPUs and even of compute-clusters to compute its results.

    So Funky programs can execute functions in parallel. But there is no explicit language support for parallelism! Each and every Funky program is logically sequential. It's up to the compiler and runtime system to run parts of the code in parallel.

    This automatic parallelization *must not* undermine determinism.

  Functional

    Funky is - as the name suggests - a *functional* programming language.

    All results of a called function are explicitely returned and handled by the caller. There are no changes behind the scenes - no global state is changed.

    NOTE: There are so-called I/O-functions which cannot change state, too, but which can perform input/output-operations.

    Calls to such functions must be annotated in the source code. Each function calling an I/O-function is itself an I/O-function and so calls to it must be annotated, too.

  Object Oriented

    Funky is also an *object oriented* programming language.

    There are no *classes* but each value is represented by an *object*.

    To create a new object, one makes a copy of an existing object. After copying, the two objects are completely distinct. There is no such thing as *delegation*.

    For each object any number of *methods* and *attributes* can be defined. Both, methods and attributes, implement so-called *polymorphic functions*.

    When an object is copied all its methods and attributes are copied, too.

  Uniform Access

    There is no syntactic difference in accessing lists, attributes, methods and (non-polymorphic) functions.

  Immutability

    All objects are immutable. One can create new objects based on existing ones, but one cannot alter an existing object.

  Dynamic Variables

    There is only a single kind of variable. It has lexical scope but dynamic lifetime.

    At any time exactly one object is bound to every variable.

    A function can change the bindings of variables, if these variable are in its scope. On return from the function all these bindings are undone and the previous bindings are restored.

  Versioning

    Funky has built-in support for symbol versioning. Every exported symbol has an attached version number in a *major*.*minor*-scheme. If no version is explicitly specified, the version defaults to "1.0".

    Several versions of a symbol can coexist. Older versions should *not* be removed. Any existing application program will thus be able to link against future versions of a library.

    Versioning is done via *namespaces*. In the simplest (and most common) case one only specifies the desired version of each namespace to be used once in every source code module.

    Once published, a specific namespace-version should never change. No changes, no additions - only bug fixes are allowed.

    To add a symbol to an already published namespace the minor version number of the namespace is incremented. To change the semantics of an existing symbol, the major version number is incremented and the minor version number is reset to 0.

    Each version of the namespace also includes all older symbols that were not redefined in a version less or equal to the desired one.

Quick Start

  Source Code Files

    Source code files that are referred from other Funky source code files must adhere to strict rules:

    * they must have the extension ".fky"

    * their name must consist of ASCII-letters, digits and underscores only

    * their name must start with a letter

    * their name must not end with an underscore

    * their name must not contain two consecutive underscores

    For source code files that are used as scripts, none of the above rules applies. The can be given any convenient name.

    All source code files must be UTF-8-encoded (ASCII is a subset of UTF-8) and must not start with a byte-order-marker.

    Line-feed-characters are used to terminate lines. The last line needs to be terminated, too.

    The tab-width is assumed to be 8 spaces.

    Tab-characters may only appear at the start of a line; they are not allowed within a line.

    Empty lines must not contain whitespace and whitespace at the end of a line is disallowed, too.

    Syntactic units are separated by exactly one space character.

    Other whitespace-characters (including carriage returns) are not allowed.

  Hello World

    Here is the Funky source code for the "classical" hello-world-program:

    `
      #!/usr/bin/env fkyrun

      print! "
	Hello, world!

Semantics

  This chapter explains the semantics of program execution in Funky. It uses *simplified* Funky code to concentrate on the essential behaviour. Every Funky program can be converted into this simplified code and most compilers will do so as one step of compilation.

  In simplified Funky there are only two kinds of arguments:

  * identifiers

  * literals

  The detailed rules for identifiers and literals will be explained in later sections. For a quick start:

  * identifiers are made up of letters, digits and underscore characters

  * numeric literals are made up of digits

  * character literals are enclosed in single quotes

  * string literals are enclosed in double quotes

  * unique item literals consist of a single dot (".")

  * function literals start with a colon, followed by a list of parameters enclosed in parentheses and an indented list of statements.

  Statements

    Every statement in Funky is a function call. The *caller* calls the *callee*. The *functor* is the "name of the function" - a variable that stores a "function-object", but remember that *every* object in Funky is a function!

    An *argument* is an object that is passed from the caller to the callee.

    A *parameter* is a variable in the callee's context that is used to store an argument passed by the caller.

    A *result* is an object that is returned from the callee to the caller.

    A *destination* is a variable in the caller's context that is used to store a result returned from the callee.

    The grammar rules for a simplified statement:

    `
      *functor*: *identifier*

      *destination*: "$" *identifier* | "!" *identifier*

      *argument*: *identifier* | *literal*

      *statement*: *functor* *destination*\* *argument*\*

    A destination that is prefixed with a "$"-sign defines a new variable.

    A destination that is prefixed with a "!"-sign redefines an existing variable.

    A statement consists of a *functor* followed by any number of destinations and then any number of arguments. Functor, destinations and arguments are separated by a single space from one another. (There are no commas, semicolons or parentheses used for separation).

    NOTE: These simplified rules are much more strict then the general rules which allow a lot more ways to arrange the arguments and results of a statement!

    If functor, destinations and arguments fit on one line they are written like this:

    `
      *functor* *destination_(1)_* *destination_(2)_* … *destination_(n)_* *argument_(1)_* *argument_(2)_* … *argument_(n)_*

    If they do not fit onto a single line (or do contain a *function*-literal), then functor, destinations and arguments are spread onto multiple lines; the destinations and arguments are indented (all by the same amount) relative to the functor:

    `
      *functor*
	*destination_(1)_*
	*destination_(2)_*
	…
	*destination_(n)_*
	*argument_(1)_*
	*argument_(2)_*
	…
	*argument_(n)_*

  Executing a Function Call

    Each identifier describes a single variable. An *environment* is a table that holds a value for each variable. At any time there is exactly one *active* environment.

    When the execution of a Funky program starts, there exists a single environment which is at the same time the active environment. All variables that were explicitely *top-level-initialized* hold their respective values. All other variables are initialized to a specific value that triggers an error when used. (All variables must be initialized upon definition in Funky, but local variables are not initialized at the top-level.)

    When a function is called, an exact copy of the caller's environment is created and becomes the *active* environment. At any time only the active enviroment is accessed (read or modified). Non-active environments are never accessed!

    Before the function's statements are executed all the caller's arguments are copied into the appropriate parameters of the callee (in the now active environment). (For more details see the section <<Functions>>).

    Then the function's statements are executed one after the other.

    The last statement is treated specially. It is a *tail call*. In a tail call no destinations are specified. Instead, the results are directly returned to the function's caller.

    On return from the function (every function will eventually return in Funky) its copy of the environment is destroyed and the caller's environment becomes the active environment again.

  Definitions and Redefinitions

    Every variable is defined exactly once. A variable is defined by using it as a destination and prefixing its name with a dollar sign.

    The scope of a variable spans all following statements of the function in which it is defined and all function literals embedded in this function - even if they are placed textually *before* the definition of the variable.

    If the variable is assigned a *constant expression* and is never redefined then its scope starts at the beginning of the function where it is defined.

    If a variable is defined outside of any function (at the top level) its scope is the whole source code module.

    If it is defined within a namespace it can be accessed from absolutely *everywhere* (even from other modules).

    Variables defined at the top-level must be initalized with *literals* or *constant expressions*.

    A *constant expression* is a literal or a function call whose functor evaluates to one of several built-in functions allowed within constant expressions and whose arguments are themself constant expressions.

    On the top-level every unknown symbol is treated as a constant by the compiler.

    Functions allowed in constant expressions are:

    * arithmethic and logical operations ("+", "|", "<<", etc.)

    * the tuple constructor function: `std::tuple`

    * the list constructor function `std::list`

    * constructor functions for subtypes of tuples and lists: `std::key_value_pair`, `std::value_range`, `std::sequence`

    Some examples:

    `
      $p: (x)
	println! a # invalid - not in scope
	$print_square:
	  println! a\*a # valid - in scope
	$a 2\*x # define the variable "a"
	println! a+1 # valid - in scope
	print_square!

    `
      $p: (x)
	println! a # valid, because "a" is definitely constant
	$a 47 # define the variable "a"

    There is an exception for the top-level of the main module: it *can* contain other function calls, too. It's some kind of an implicit "main"-function.

    A variable can be redefined within its scope any number of times.

    To redefine a variable is is used as a destination and prefixed with an exclamation mark.

  Distributed Definitions

    At the global scope the definition of a variable can be split into several separate definitions. In the case of a namespaced identifier these definitions can be distributed over several source code modules.

    An example:

    `
      $person std_types::object

      $person.first_name_of "Joe"
      $person.last_name_of "Doe"

      $person/name_of: (self)
	-> string(first_name_of(self) " " last_name_of(self))

      $person/: (myself^)
	print! "
	  Hi, I'm @(first_name_of(myself)) @(last_name_of(myself))!

    is equal to

    `
      $person
	std_types::object
	  .first_name_of "Joe"
	  .last_name_of "Doe"
	  /name_of: (self)
	    -> string(first_name_of(self) " " last_name_of(self))
	  /: (myself^)
	    print! "
	      Hi, I'm @(first_name_of(myself)) @(last_name_of(myself))!

    See the section about *attribute-value-pairs* for a detailed description of the syntax used here.

  Runtime Linker

    The runtime linker is a very important part of Funky. It does its job whenever a Funky-executable is executed and before the first statement of the program is executed.

    Its job is to collect all distributed definitions and to initialize all variables of the environment.

Objects

  Root Objects

    All objects stem from three so-called *root objects*:

    * `std_types::object`

    * `std_types::undefined`

    * `std_types::error`

    All "normal" objects are derived from `std_types::object`.

    `std_types::undefined` is a *one-of-a-kind* object.

    All *error-objects* are derived from `std_types::error`.

    An object consists of

    * a function

    * slots for all defined polymorphic functions

    * built-in objects may contain additional internal fields

    Such internal fields are used to store the numeric values of integers, the characters that build a string, and things like that.

  Values

    All "normal objects" are of one of the following kinds or directly or indirectly derived from `std_types::object`.

    * numbers

    * booleans

    * unique items

    * characters

    * strings

    * tuples

    * lists

    * arrays

    * functions

    Numbers, booleans, unique items and characters are scalar values. Tuples, lists and arrays are compound values; strings are a bit of both. Functions contain no data but are called to execute their embedded statement sequences.

    These value types will be described in the following sections. <<Functions>> play such an important part that the whole next chapter is dedicated to this topic.

    Numbers

      There are exact (integer) and inexact (real) numbers.

      It is planned to also add rational numbers (fractions) and complex numbers.

      Integers

	Integers are of arbitrary size and can literally consist of billions of digits.

	There are *positive* and *negative* integers. Some operations can only be performed on positive integers.

	All integer literals are *positive*. To negate an integer number use the negation operator.

	Integer literals can be written in various numeral systems: *decimal*, *binary*, *octal* and *hexadecimal*.

	Binary numeric literals are prefixed with "0b", octal with "0o" and hexadecimal with "0x". The letters must be written in lower case.

	In addition to the standard digits from `0` to `9` hexadecimal literals make use of the letters `a`  to `f`. These letters can be written in lower case or upper case.

	Any group of digits can be separated by apostrophs.

	Examples for valid integer literals:

	`
	  23
	  1'000'000
	  0xAffe
	  0b10'1010'1010
	  0o755
	  0644

	The literal in the last example stands for the **decimal** number 644.

	Examples for invalid integer literals:

	`
	  2'000'
	  0Xaffe
	  0b'0101'0101
	  0o123456789

	Operations on integers return an integer number if the result is an integral number and a real number otherwise.

	So `4/2` will return the integer number `2` while `5/2` will return the real number `2.5`.

      Real Numbers

	These are IEEE 754 64 bit ("double precision") floating point numbers. All computations on reals will return real numbers; `2.5-2.5` will return the real number `0.0` and `3.7/3.7` will return the real number `1.0`.

	Like integer literals all real literals are *positive*. To negate a real number use the negation operator.

	Real literals can only be written in decimal notation. They **must**

	* contain a decimal point and at least a single digit after the point

	or

	* an exponent

	They can, of course, contain a decimal part as well as an exponent.

	The exponent is introduced by the letter "e" (lower or upper case), followed by an optional sign ("+" or "-") and a decimal exponent.

	Digit separators (apostrophs) are not allowed in real literals, neither in the mantissa nor in the exponent.

	Examples for valid real literals:

	`
	  1.0
	  3.1415
	  2.9e4
	  1e-100
	  123.456E+16

	Examples for invalid real literals:

	`
	  1.
	  3.141'592'653
	  1e -100
	  0x1234e8
	  1e+0b1000

    Booleans

      In contrast to most other programming languages there is not a single *boolean* type instead there are two boolean objects:

      * `std::true`

      and

      * `std::false`

      These two objects are the single instances of their prototypes:

      * `std_types::true`

      and

      * `std_types::false`

      These boolean objects are used to implement control structures like `if` as *polymorphic functions* (see the section about polymorphic functions below).

    Unique Items

      *Unique items* are unique values that are different to any other value (any other object). They are mostly used as *enumeration items*.

      A neat trick is to use a (local) unique item to initialize an optional parameter, so one can simply check if the parameter was explicitely initialized or not.

      Unique item literals are written as a *standalone* point ("."). Each standalone point in the source code represents a different unique item.

    Characters

      *Characters* are implemented as 32-bit unsigned integers. They form the elements of strings and are mostly used to hold Unicode codepoints, but can also be used to store waveform data, colour information, etc.

      Character literals are written between apostrophs.

      Simple Character Literals

	A simple literal is just the Unicode character between two apostrophs. The character must consist of a single code point. Because Funky source code files are always stored in *UTF8*-format, practically all *printable* Unicode characters can be used.

	Valid examples:

	`
	  'a'
	  ' '
	  '#'
	  'α'
	  '统'

      Numeric Character Literals

	To create a character literal with a specific numeric code one can specify this code between an opening at-sign ("@") and a terminating semicolon (";"). The numeric code is an <<Integers,*integer literal*>>.

	Valid examples:

	`
	 '@65;'
	 '@0x40;'
	 '@0b0111'111;'

	Invalid examples:

	`
	  '@-3;'
	  '@x40;'
	  '@65'

      At-Character-Literal

	To represent the at-character itself one can write '@@' (two consecutive at-signs).

      Named Character Literals

	There are 276 different named character literals (see appendix). They are written in the form

	`
	  '@*name*;'

	Valid examples:

	`
	  '@cr;'
	  '@at;'
	  '@quot;'
	  '@alpha;'
	  '@Omega;'

	See appendix <<Named Characters>>.

    Strings

      *Strings* have an explicitly stored length and contain exactly that number of characters.

      Strings that contain only 8-bit-character-values form a "subtype" that can be used in input/output-operations.

      A string (like every other object) is a function. If called with a single integer argument the character at the specified position is returned.

      String indices are *one-based*.

      If called with two arguments the first argument is an index of an existing character and the second argument is a *replacement character*. The returned string is a copy of the original string with exactly this one character replaced.

      There are lots of functions to create new strings out of existing ones (<strings.html:see Strings>).

      Inline String Literals

	String literals are enclosed within double quotes, e.g.:

	`
	  "Hello, world!"

	Instead of a Unicode character (more precise: Unicode codepoint) all kinds of character literals (see above) can be used, e.g.:

	`
	  "From @alpha; to @Omega;"

      Multi-Line String Literals

	A multi-line string literal starts with a single double quote at the end of a line. All following indented lines are the contents of the string literal. The least indented line of the string literal defines the *zero indent* for all lines.

	The lines after the double quote describe the strings contents, e.g.:

	`
	  "
	      This is a multi-line
	      string literal.
	    It spans three lines.

	Each line-end within the string literal is converted into a linefeed-character. The above literal is therefor equal to:

	`
	  "  This is a multi-line@nl;  string literal.@nl;It spans three lines.@nl;"

	The sequence "@;" in a string literal expands to nothing. It can be used to add empty lines at the end of a multi-line string literal or to add spaces at the end of a line of a multi-line string literal.

	A single "@" at the end of a line prevents the linefeed character and any whitespace at the start of the next line from beeing added to the string. It can also be used to define the zero indent.

	Another example:

	`
	  "
	    @
		This is a single line @
		of text.

	is equal to

	`
	  "    This is a single line of text.@nl;"

      String Interpolation

	Funky supports *string interpolation*. They look like string literals with embedded expressions.

	The expressions are embedded within "@(" and ")".

	They are converted into calls to the string constructor function `std::string`, e.g.:

	`
	  "@(a) \* @(b) = @(a\*b)"

	is converted into

	`
	  std::string(a " \* " b " = " a\*b)

	String interpolations can be used within inline string literals as well as within multi-line string literals.

	It is possible to embed multiple expressions at once, e.g.:

	`
	  "
	    This is @(article substantive).

	is converteed into

	`
	  std::string("This is " article substantive ".")

	It is even possible to use a string expression as an embedded expression. The following examples are all equal:

	`
	  "
	    This is @(article " " substantive).

	`
	  "
	    This is @(article) @(substantive).

	`
	  std::string("This is " article " " substantive ".")

    Tuples

      *Tuples* consist of a fixed number of fields. Each field stores an object. To create a tuple one has to supply all its fields at once. Also if a tuple is read then *all* its fields are returned.

      Tuples are often used as base objects to implement more complex types (e.g. tree structures). To clone a tuple with all its modified attributes and methods one can use the *new* method.

      There is no special syntax for normal tuple literals, but there are two types that are based upon tuples.

      Key-Value-Pairs

	A *key-value-pair* associates a *key* with a *value*. Technicalls it is simply a tuple with two fields.

	The syntax is

	`
	  *key* = *value*

	IMPORTANT: This is *not* an assignment!

	Some examples:

	`
	  FIRST_NAME = "John"
	  LAST_NAME = "Doe"
	  AGE = 47
	  CHILDREN = list("Jane" "Patrick")

      Value-Ranges

	A *value-range* is typically used to specify the start and end of a range of values (both, start and end value, are included in the range). Technically it is simply a tuple with two fields.

	Some examples:

	`
	  1..10
	  'a'..'z'
	  -100 .. +100

    Lists

      Like strings *lists* have an explicitly stored length and contain exactly that number of items.

      A list (like every other object) is a function. If called with a single integer argument the item at the specified position is returned.

      Like string indices, list indices are *one-based*.

      If called with two arguments the first argument is an index of an existing item and the second argument is a *replacement item*. The returned list is a copy of the original list with exactly this one item replaced.

      There are lots of functions to create new lists out of existing ones.

      List are sometimes used for special purposes (e.g. grammer rules). To clone a list with all its modified attributes and methods one can use the *new* method.

      There is no special syntax for normal list literals, but *sequences* are based upon lists.

    Sequences

      Sequences are used (often together with value-ranges) to describe the arguments in calls to the `case`-function or grammar rules.

      The items of the sequence are separated by colons.

      Syntax:

      `
	*value_1*, *value_2*, …, *value_3*

      An example:

      `
	case chr
	  'a'..'z', 'A'..'Z', '0'..'9':

Functions

  Functions are values. All functions in Funky are *anonymous* but they can be assigned to (named) variables like any other value.

  When a function is called, it receives a copy of the caller's environment. The function can modify any variable in its copy of the enviroment provided the variable is in the function's scope.

  First, the  function's parameters are initialized; then the function's statements are executed. A function can contain any number (one or more) of statements. There is only a **single** kind of statement in Funky: the function call.

  Parameters

    A function can have any number of *parameters*. A parameter is a variable. (The scope of a parameter is the function and all embedded functions.)

    A function can have any number of *mandatory* and *optional* parameters as well as a single *rest* parameter.

    The *caller* of the function must supply an argument for every *mandatory* parameter of the called function.

    The *caller* can supply an argument for each *optional* parameter of the called function.

    If there is no *rest* parameter the caller must *not* supply any excess arguments to the called function.

    Mandatory Parameters

      Mandatory parameters can be written at the start as well as at the end of a parameter list.

      A caller must supply an argument for each mandatory parameter.

      The first supplied arguments are assigned to the mandatory parameters at the start of the parameter list in their corresponing order.

      The last supplied arguments are assigned to the mandatory parameters at the end of the parameter list in their corresponing order.

      If a function is used to implement a method of an object then there must be a mandatory parameter at the start of the parameter list. This parameter takes the role of `self` or `this` in other object oriented programming languages. In Funky the name of this parameter can be freely chosen. Usually it is called "self".

    Optional Parameters

      Optional parameters follow the mandatory parameters at the start of a parameter list or start the parameter list.

      For each optional parameter a default value must be specified. This default value must be either

      * a literal

      or

      * an identifier

      More complex default values are not allowed.

      The syntax is as follows:

      `
	*optional_parameter* = *default_value*

      If the caller supplies more arguments than the number of mandatory parameters the surplus arguments are used to assign values to the optional parameters from left to right.

    Rest Parameter

      A rest parameter follows the last optional parameter if there are one or the last starting mandatory parameter if there is one or starts the parameter list otherwise.

      If the caller supplies more arguments than the sum of mandatory and optional parameters then the surplus arguments are collected into a list and this list is assigned to the rest parameter.

      If there are no surplus arguments then an empty list is assigned to the rest parameter.

    Myself

      A special "parameter" that describes the function object itself can be supplied as the very first "parameter" of the function. It somewhat takes the role of `argc(0)` when calling a C-executable.

      It is most important when accessing containers where the object itself stores all the items of the container.

      The syntax is as follows:

      `
	*myself*^

    Single-Line Parameter List

      A parameter list can be written on a single line:

      `
	(*myself*^ *left_(1)_* … *left_(n)_* *optional_(1)_* … *optional_(n)_* *rest* *right_(1)_* … *right_(n)_*)

      Some examples:

      `
	(myself^ key value = NONE)

      `
	(body args\*)

    Multi-Line Parameter List

      If a parameter list is written on mutltiple lines then each line must contain exactly one parameter:

      `
	(
	  *myself*^
	  *left_(1)_*
	  …
	  *left_(n)_*
	  *optional_(1)_*
	  …
	  *optional_(n)_*
	  *rest*
	  *right_(1)_*
	  …
	  *right_(n)_*
	)

      Some examples:

      `
	(
	  myself^
	  key
	  value = NONE
	)

      `
	(
	  body
	  args\*
	)

  Calls

    A function call consists of a function name (a variable) and the appropriate number of (input) arguments for the called function. It also expects one or more results (I/O-functions can expects *no results*).

    The *canonical form* of a function calls looks like this:

    `
      *function_name*
	!*destination_(1)_*
	!*destination_(2)_*
	…
	!*destination_(n)_*
	*argument_(1)_*
	*argument_(2)_*
	…
	*argument_(n)_*

    If the variable to store the result is defined here the exclamation mark ("!") is replaced by a dollar sign ("$").

    The destinations and arguments can be spread over multiple lines. They are separated with a single space from the *function_name* and beyond each other. The follow-up lines are all indented (by the same amount of whitespace) relative to the first line of the function call.

    So the above call could be written like this:

    `
      *function_name* !*destination_(1)_* !*destination_(2)_*
	…
	!*destination_(n)_* *argument_(1)_*
	*argument_(2)_* … *argument_(n)_*

    Results and arguments can me mixed in any way as long as the relative order of destinations and the relative order of arguments is not altered.

    So the following calls are all identical:

    `
      assign !a 1 !b 2

    `
      assign 1 !a 2 !b

    `
      assign !a !b 1 2

    `
      assign 1 2 !a !b

    Backquoted Arguments

      This is syntactic sugar and most often used in conjunction with the `dump!` or `edump` statement. (The use of `dump!` and `edump` is not allowed in production code. It is meant for debugging purposes only.)

      The expression

      `
	\`*expr*

      is converted into

      `
	"*expr*" *expr*

      An example:

      `
	dump! \`width \`height

      is the same as:

      `
	dump! "width" width "height" height

    Input-Ouput Arguments

      Often one wants to update the contents of a specific variable like that:

      `
	!x sqrt(x)

      This will be translated by the compiler into the canonical form:

      `
	sqrt !x x

      To prevent the repetition of the variable name (`x`) one can use an *input-output* argument like this:

      `
	sqrt &x

    Attribute-Value-Pairs

      *Attribute-value* and *method-value* pairs are used to initialize object slots.

      The syntax for attribute-value pairs:

      `
	.*attribute_of* *value*

      The syntax for method-value pairs:

      `
	/*method* *function*

      Here an example:

      `
	$person
	  std_types::object
	    .first_name_of "John"
	    .last_name_of "Doe"
	    .name_of: (self)
	      -> string(first_name_of(self) " " last_name_of(self))

      There is also a special syntax to define or redefine the *function* of an object:

      `
	!person/: (myself^)
	  print! "
	    Hi, I'm @(first_name_of(myself)) @(last_name_of(myself))!

    Assignments

      Because it's so common a call to the `assign`-function can be abbreviated if there is only a single input argument and a single destination. In the call

      `
	assign $*destination* *source*

      the `assign` can be ommitted:

      `
	$*destination* *source*

      Complex Destinations

	The Funky compiler can handle more complex destinations. They are translated into more basic function calls.

	`
	  !tab(idx) val

	is converted into

	`
	  tab !tab idx val

	This is **no** typo! The function `tab` is called with the arguments `idx` and `val` and will hopefully return a new table that is then assigned to `tab`.

	`
	  !obj.value_of val

	creates a clone of `obj` where the contents of the slot `value_of` are replaced by the contents of `val`.

	These expressions can be combined to any depth and complexity, e.g.:

	``
	  !tab(i+1).values_of(2*j+k) val

	is converted into

	``
	  std::plus $temp__1 i 1
	  tab $temp__2 temp__1
	  values_of $temp__3 temp__2
	  std::times $temp__4 2 j
	  std::plus $temp__5 temp__4 k
	  temp__3 !temp__3 temp__5 val
	  !temp__2.values_of temp__3
	  tab !tab temp__1 temp__2

	NOTE: The compiler might generate symbols with two consecutive underline characters for internal use to prevent name clashes with user defined variables.

	The evaluations of "i+1" and "2*j+k" are guaranteed to be free of side effects because Funky is a functional language! So there is no need to compute them twice.

    Tail Calls

      The last function call in a body's statement sequence is treated specially. It is a *tail call*. That means that its results are directly returned to the function's caller. So no stack space is needed to hold (temporary) results.

      Do **not** specifiy destinations in the last statement of a function! These would store the results in no longer used local variables and the results would be thrown away!

      Compilers are allowed to report the occurrence of destinations in the final call of a statement sequence as an error.

      Return

	To return results from a function one could call the `assign` function in tail position without specifying any destinations for the results:

	`
	  assign *result_(1)_* *result_(2)_* … *result_(n)_*

	To make the intention more clear there is a special syntax for this case:

	`
	  -> *result_(1)_* *result_(2)_* … *result_(n)_*

	If a function has no parameters and consists of a single return-statement it can be abbreviated. The following expressions are all equal:

	`
	  : () -> *result_(1)_* *result_(2)_* … *result_(n)_*

	`
	  : -> *result_(1)_* *result_(2)_* … *result_(n)_*

	`
	  -> *result_(1)_* *result_(2)_* … *result_(n)_*

    Function Call Arguments

      All arguments of function calls should be identifiers or literals. But this would be very impractical. So the compiler transforms more complex arguments into function calls of their own.

      A complex argument is a function call itself. These function calls must return exactly one result.

      Here an example how the compiler might transform a complex function call:

      Source code:

      `
	p $z f(x) g(h(y))

      is transformed into

      ``
	f $temp__1 x
	h $temp__2 y
	g $temp__3 temp__2
	p $z temp__1 temp__3

      The following sections describe the plentiful variants of writing *function-call-arguments*.

      Inline-Function-Calls

	All arguments fit on a single line. They immediately follow the function name, enclosed in parentheses:

	`
	  *function_name*(*argument_(1)_* *argument_(2)_* … *argument_(n)_*)

      Multiline-Function-Calls

	The function name stands on a new line and must **not** be followed by any arguments on this line. Instead all arguments must follow on equally indented successive lines. It is therefore **not** possible to call a function with no arguments this way.

	`
	  *function_name*
	    *argument_(1)_*
	    *argument_(2)_*
	    …
	    *argument_(n)_*

	It is possible to write multiple arguments on a single line.

      Infix-Operator-Style

	Any inline-function-call with exactly two arguments of the form

	`
	  *function*(*argument_(1)_* *argument_(2)_*)

	can be replaced with

	`
	  *argument_(1)_* .*function*. *argument_(2)_*

      Suffix-Operator-Style

	Any inline-function-call with a single argument of the form

	`
	  *function*(*argument*)

	can be replaced with

	`
	  *argument*.*function*

	NOTE: The argument must be an idenfier or a parenthesed expression.

	This is very convenient for calling *test*- or *conversion*-functions.

	Instead of

	`
	  is_defined(value)

	one can write

	`
	  value.is_defined

      Infix-Operators

	To make writing arithmetic and logic expressions more convenient one can use C-style infix operators.

	Instead of

	`
	  plus(a times(b c))

	one can simply write

	`
	  a+b\*c

	Each infix operator has an assigned operator precedence and an *association*.

	Association defines the order in which operators are applied.

	The (right associative) expression

	`a && b && c`

	is equal to

	`a && (b && c)`

	If the association is *undefined* then the compiler can decide 	whether to use left or right association. Only operations where association does not matter (e.g. addition) have undefined association.

	If the association is *none* then you must explicitely use parentheses when combining multiple operators.

	The expression

	`a - b - c`

	is invalid!

	Write instead

	`(a - b) - c`

	or

	`a - (b - c)`

	to make the intended order of operations explicit.

	This is the complete list of infix-operators:

	[Symbol|Function|Precedence|Association]
	[`*`|`std::times`|9|undefined]
	[`/`|`std::over`|9|none]
	[`+`|`std::plus`|8|undefined]
	[`-`|`std::minus`|8|none]
	[`<<`|`std::shift_left`|7|none]
	[`>>`|`std::shift_right`|7|none]
	[`&`|`std::bit_and`|7|none]
	[`\|`|`std::bit_or`|7|none]
	[`^`|`std::bit_xor`|7|none]
	[`==`|`std::equal`|6|none]
	[`!=`|`std::equal`|6|none]
	[`<`|`std::less`|6|none]
	[`\<=`|`std::less`|6|none]
	[`>`|`std::less`|6|none]
	[`>=`|`std::less`|6|none]
	[`..`|`std::value_range`|5|none]
	[._named_operator_.|_named_operator_|4|none]
	[`&&`|`std::and`|3|right]
	[`\|\|`|`std::or`|3|right]
	[`,`|`std::sequence`|2|undefined]
	[`=`|`std::key_value_pair`|1|none]

	All operators evaluate their left argument before their right argument (if that matters). This also holds for *right associative* operators and operators
	where associativity does not matter (e.g. addition)!

	The predefined precedences can be overwritten through the use of parentheses like in mathematics, e.g.:

	`
	  (a+b) * (c-d)

	See the following sections for special treatment of some operators.

	Comparison Operators

	  There are only two comparison functions (`std::equal` and `std::less`). So all comparisons are based on those two functions and the logical negation (`std::not`).

	  `
	    *left* <= *right*

	  is converted into

	  `
	    std::not(std::less(right left))

	  and

	  `
	    *left* >= *right*

	  is converted into

	  `
	    std::not(std::less(left right))

	  Further

	  `
	    *left* > *right*

	  is converted into

	  `
	    std::less(right left)

	  and

	  `
	    *left* != *right*

	  is converted into

	  `
	    std::not(std::equal(left right))

	Short Circuit Evaluation

	  The operators `&&` and `||` call the functions `std::and` and `std::or` respectively. These two function take a boolean value as their first argument and a function that evaluates to a boolean value as their second argument. So these operators are converted as shown below:

	  `
	    *left* && *right*

	  is converted into

	  `
	    std::and(*left* (-> *right*()))

	  and

	  `
	    *left* || *right*

	  is converted into

	  `
	    std::or(*left* (-> *right*()))

	  So the second argument is only evaluated if necessary. This is called *short circuit evaluation*.

      Prefix Usage Of Infix Operators

	Expressions with infix operators can not be spread over multiple lines.

	But one can use them in prefix notation. The operator is put on a line of its own and the arguments are written (indented) on the following lines.

	`
	  \*
	    a+b
	    c-d

	is the same as

	`
	  (a+b) \* (c-d)

	It is also possible to have more than two arguments.

	`
	  &&
	    *condition_(1)_*
	    *condition_(2)_*
	    *condition_(3)_*

	is converted into

	`
	  *condition_(1)_* && *condition_(2)_* && *condition_(3)_*

	The association rules are obeyed!

      Prefix-Operators

	There is only a single prefix operator: "`-`". It calls the function `std::negate`.

	So

	`
	  -123

	is a shortcut for

	`
	  std::negate(123)

  Polymorphic Functions

    *Polymorphic functions* are the way object oriented programming works in Funky.

    When declaring a polymorphic function two things happen

    * all objects receive a named _slot_ for the polymorphic function

    * a global bariable of the same name is assigned a _dispatcher function_ that invokes the _method_ or retrieves the _attribute_ stored in this slot

    For each object this slot can hold an *attribute* or a *method*.

    Attributes

      An *attribute* is a value (an object) stored in an object's slot.

      Attributes are assigned using postfix-operator syntax:

      `
	!*object*.*slot* *value*

      E.g.:

      `
	!person.age_of 47

      When accessing the corresponding polymorphic function the attribute value is returned.

    Methods

      A *method* is a function stored in an object's slot.

      Methods are assigned using a special syntax:

      `
	!*object*/*slot* *method*

      E.g.:

      `
	person/age_of: (self)
	  -> years_of(current_date()-birth_date_of(self))

      When accessing the corresponding polymorphic function the method is invoked. All arguments passed to the polymorphic function are passed to the method.

      It is *not* possible to retrieve the function stored as the method!

      IMPORTANT: This is a very important feature. It prevents one from moving a method of a built-in object (that accesses internals of built-in objects directly) to a object of the wrong type!

    Polymorphic Functions With Setter

      A polymorphic function can be defined to have *setter* functionality.

      This kind of polymorphic function is used when the polymorphic function is implemented as an *attribute* in most objects. But it does not hinder the implementation as a *method* in some objects.

      A polymorphic function with a setter is defined like this:

      `
	$*attribute* (!)

      An example:

      `
	$age_of (!)

      The setter functionality works only on objects that implement this polymorphic function as an attribute.

      By default *all* objects derived from `std_types::object` receive an attribute with the value `std::undefined` for all polymorphic functions *with* a setter.

      If an object implements this polymorphic function as a method then the setter functionality is not used. If later on the method is replaced by an attribute the setter functionality will work again.

      The setter can be used to derive a new object from an existing one where the attribute is replaced by a new attribute:

      `
	*attribute*(*object* *new_attribute_value*)

      And here an example:

      `
	age_of(person 47)

      This returns a copy of the `person` object where the attribute `age_of` is replaced with the value `47`.

    Polymorphic Functions Without Setter

      A polymorphic function without a setter is defined like this:

      `
	$*method* ()

      This kind of polymorphic function is used when the polymorphic function is implemented as a *method* in most objects. But it does not hinder the implementation as an *attribute* in some objects.

      By default *all* objects derived from `std_types::object` return an appropriate *error-object* when a polymorphic function *without* a setter is invoked on an object where the corresponding slot has not been explicitely set.

    Control Flow

      <loops.html:Loops> are implemented with the use of recursion and <branches.html:branches> with polymorphic functions.

Variables

  Each variable is at any time bound to an object. If a variable has not yet been initialized it is bound to the *error-object* `uninitialized`.

  The set of all variables of a program is called the program's *environment*.

  Variables are identified by *identifiers*.

  Identifiers

    An identifier consists of an (optional) *namespace* and a *name*.

    The rules for namespaces and names are the same:

    They consist of one or more "words". A word consists of one or more ASCII letters or digits. Words are separated by a single underscore-symbol ("_"). The first word must start with a letter.

    Letters can be upper or lower case. Case is relevant, so identifiers differing only in letter case *are* different identifiers.

    Unused Identifiers

      The compiler might issue a warning or even an error if a defined variable is *not* used.

      To prevent such warnings or errors precede the identifier with an underscore character ("_") in its declaration, e.g.:

      `
	$_dummy
	$_unused

      Most common is the use in parameter lists:

      `
	(_self value)

      The underscore ist *not* part of the name. So the following code is invalid:

      `
	p $_dummy
	assign $dummy 47

      Both definitions use identical names!

    Local Variables

      Identifiers without a namespace are local to the source code module in which they are defined.

      Some valid examples:

      `
	This_is_a_valid_identifier
	s7
	x
	A_B_C

      Some invalid examples:

      ``
	_invalid_name
	x__11
	7_angels
	just_to_be_continued_

      Local variables **must not** be *shadowed* - that means that a variable with the same name must not be defined again in an inner scope (= embedded function) or again in the same function.

    Global Variables

      Variables that shall be visible in other source code modules must belong to a *declared* namespace.

      A namespaced variable is written like

      *namespace::name*

      Global variables must be defined on the top-level (= unindented) of their module.

    Naming Conventions

      Funky programs use "snake_case" for normal identfiers. Constants are written in "SCREAMING_SNAKE_CASE".

      Names that are not used only inside a single function are *not* abbreviated.

      Typical identifiers:

      `
	insert_items
	is_an_upper_case_letter_character
	MAXIMUM_VALUE

      Unusual identifiers:

      `
	ins_itms
	isAnUpperCaseLetterCharacter
	MAX_VAL

      When appropriate the article "an" is used instead of "a".

      Names that denote collections are written in *plural* form.

      Attributes usually have the suffix "_of".

      Tests often have the prefix "is_a_" ("is_an_") or "has_a_" ("has_an_").

      Conversion functions usually have the prefix "to_"

      Some examples:

      `
	$value_of ()
	$is_an_integer ()
	$to_integer ()
	$items empty_list

Meta-Instructions

  *Meta-instructions* or *directives* are used to combine source code modules into application programs or libraries and to manage namespaces.

  Meta-instructions are always located at the start of a source code module, before any other statements.

  Requiring Modules

    The `require`-instruction is used to include a specific source code module into an application or library.

    The syntax is streightforward:

    `
      \<require *module_name*\>

    The *module_name* ist the *filename* of the source code module *without* the ".fky"-extension.

    If the filename starts with a dot-character (".") then the filename is relative to the requiring module's directory.

    If the filename starts with a letter then the filename specifies a module in a library. The absolute location of library files is system dependent. The environment variable `FUNKY_LIBRARY_PATH` can be used to overwrite this system dependent location and to use one's own version of library modules.

    The rules for naming source code files are the same as the rules for naming identifiers.

    Some examples:

    `
      \<require basic/stdlib\>

    `
      \<require ./my_tools\>

    If an application program (not a library) does not require a single module then the module "`basic/stdlib`" is automatically included.

    In Funky it's common that only the main module of an application program requires other modules. The Funky standard libraries *do not* require other libraries by themselves! There are special library modules that require a set of other modules, e,g. `basic/stdlib`.

    So the application writer can choose to use other implementations for functions than the default implementations supplied by the standard library.

  Managing Namespaces

    In Funky namespaces have two responsibilities:

    * defining symbols that can be accessed from other modules

    * version management

    Every *namespace* (and its major versions) needs to be declared exactly once in an application.

    It's an error to forget to declare a namespace or to declare a namespace twice.

    `
      \<namespace *namespace*\>

    `
      \<namespace *namespace*-*major*.*minor*\>

    `
      \<namespace *namespace*-unstable\>

    An unspecified version number always defaults to "1.0".

    The version `unstable` is special and denotes the most current version that is still under development and functions defined with this version number can change their behaviour at any time without further notice.

    An *unstable* namespace should only be used for testing new functionality.

    There must be a namespace declaration for each major-version number of a namespace. The respective minor-version number declares the highest minor version that is available for the corresponding major version number.

    E.g.:

    `
      \<namespace std-1.3\>
      \<namespace std-2.1\>
      \<namespace std-unstable\>

    makes the following namespaces available:

    `
      std-1.0
      std-1.1
      std-1.2
      std-1.3
      std-2.0
      std-2.1
      std-unstable

  When defining a namespaced variable it is necessary to explicitly specify the version number of the namespace. `using`- and `resolve`-directives are ignored when a variable is defined, but `alias`-directives are obeyed.

  It is optional to specify a namespace when reading a namespaced variable. A `using`-directive can be used to resolve the namespace automatically:

  `
    \<using *namespace*\>

  `
    \<using *namespace*-*major*.*minor*\>

  `
    \<using *namespace*-unstable\>

  For a single namespace each source code module can only contain *one* `using`-directive.

  Whenever a variable is redefined or read that is *not* locally defined and without the explicit use of a namespace the `using`-directive is used by the runtime linker to find the corresponding variable.

  It the runtime linker cannot resolve it unambigously it refuses to start the program and terminates with an appropriate error message.

  It is possible to specify a namespace when reading or redefining a namespaced variable but it is **not** possible to explicitly specify a version number of a namespace.

  The version number for a specific namespace can be selected for the whole module using a `resolve`-directive:

  `
    \<resolve *namespace*-*major*.*minor*\>

  `
    \<resolve *namespace*-unstable\>

  To use a namespace under a different name an `alias`-directive can be used:

  `
    \<alias *namespace_alias* = *namespace*\>

  `alias`-directives are used for variable definitions as well as for redefinitions and reads.

  `
    \<namespace my_long_namespace\>

    \<alias mln = my_long_namespace\>

    $mln::twice: (body)
      body
      body

  is equivalent to

  `
    \<namespace my_long_namespace\>

    $my_long_namespace::twice: (body)
      body
      body

Remarks

  *Remarks* always start with a hash-tag-character ("#").

  Everything after the hash-tag until the end of the line is part of the remark.

  Consecutive **and** indented lines are also part of the remark!

  Examples:

  `
    $x 1 # this is an end-of-line remark

  `
    $y 2
      #
	This is a
	multi-line remark

  `
    # This is not the
      usual way to write a
      remark in Funky, but it's
      valid, too.

  `
    #
      Empty lines

      do not end the
      remark!

  Conventions for writing remarks:

  * remarks are written to the right of a statement

  * remarks are written (indented) *below* a statement

  * remarks are *not* written *before* a statement

  Before you write a remark describing a variable's meaning, think of a more comprehensive name for the variable!

  Documentation Remarks

    The compiler associates remarks with syntactic expressions.

    Remarks are either

    * statements of their own

    * pseudo arguments to procedure or function calls or return statements

    * part of a body declaration

    * part of a parameter declaration

    An indentifier does not become a function call, when it contains only remark pseudo arguments.

    A return statement containing only remark pseudo arguments is invalid.

    There are two ways to associate a remark with a function:

    `
      $*function*:
	#
	  *remark*
	(
	  *parameters*
	)
	…

    or if the function has no parameter list:

    `
      $*function*
	#
	  *remark*
	:
	  …

    To associate a remark with an expression:

    `
      *expression* # *remark*

    or

    `
      *expression*
	#
	  *remark*
	  …

    An example to associate a remark with a parameter:

    `
      *expression* # *remark*

      $twice:
	(
	  body # the function to execute twice
	)
	…

    or

    `
      *expression*
	#
	  *remark*

      $twice:
	(
	  body
	    #
	      the function to execute twice;
	      the function is called without any arguments

	)
	…

GLOSSARY

  Argument =

    arguments are passed from the caller to the callee

  Attribute =

    an object's slot that contains a value

  Callee =

    the called function in a function call

  Caller =

    the calling function in a function call

  Constant Expression =

    an expression that will always return the same (constant) value

  Definition =

    a variable is defined and initialized

  Destination =

    where the caller stores the results returned from the callee

  Environment =

    a table that stores all variables

  Functor =

    a variable that stores a function

  Inline Expression =

    an expression that fits completely on a single line

  Literal =

    describes a simple constant like a string

  Method =

    an object's slot that contains a function marked for direct execution

  Multi-Line Expression =

    an expression that spreads over multiple lines

  Object =

    a value with its associated function and slots

  Parameter =

    where the callee stores the caller's arguments

  Polymorphic Function =

    defines a slot in each object

  Redefinition =

    an existing variable is bound to another value

  Result =

    results are passed from the callee to the caller

  Slot =

    stores an argument or a method

  Statement =

    a function call

  String Interpolation =

    looks like a literal, but is a call to the string-constructor function

  Top-Level =

    everything that is not indented and therefor on the outmost level

APPENDIX: Named Characters

  [Name|Code|Glyph||Name|Code|Glyph||Name|Code|Glyph||Name|Code|Glyph]
  [nul|0x0|||soh|0x1|||stx|0x2|||etx|0x3|]
  [eot|0x4|||enq|0x5|||ack|0x6|||bel|0x7|]
  [bs|0x8|||ht|0x9|||nl|0xa|||vt|0xb|]
  [ff|0xc|||cr|0xd|||so|0xe|||si|0xf|]
  [dle|0x10|||dc1|0x11|||xon|0x11|||dc2|0x12|]
  [dc3|0x13|||xoff|0x13|||dc4|0x14|||nak|0x15|]
  [syn|0x16|||etb|0x17|||can|0x18|||em|0x19|]
  [sub|0x1a|||esc|0x1b|||fs|0x1c|||gs|0x1d|]
  [rs|0x1e|||us|0x1f|||spc|0x20|||amp|0x26|&]
  [quot|0x22|"||apos|0x27|'||at|0x40|@||del|0x7f|]
  [csi|0x9b|||nbsp|0xa0| ||iexcl|0xa1|¡||cent|0xa2|¢]
  [pound|0xa3|£||curren|0xa4|¤||yen|0xa5|¥||brvbar|0xa6|¦]
  [sect|0xa7|§||uml|0xa8|¨||copy|0xa9|©||ordf|0xaa|ª]
  [laquo|0xab|«||not|0xac|¬||shy|0xad|­||reg|0xae|®]
  [macr|0xaf|¯||deg|0xb0|°||plusmn|0xb1|±||sup2|0xb2|²]
  [sup3|0xb3|³||acute|0xb4|´||micro|0xb5|µ||para|0xb6|¶]
  [middot|0xb7|·||cedil|0xb8|¸||sup1|0xb9|¹||ordm|0xba|º]
  [raquo|0xbb|»||frac14|0xbc|¼||frac12|0xbd|½||frac34|0xbe|¾]
  [iquest|0xbf|¿||Agrave|0xc0|À||Aacute|0xc1|Á||Acirc|0xc2|Â]
  [Atilde|0xc3|Ã||Auml|0xc4|Ä||Aring|0xc5|Å||AElig|0xc6|Æ]
  [Ccedil|0xc7|Ç||Egrave|0xc8|È||Eacute|0xc9|É||Ecirc|0xca|Ê]
  [Euml|0xcb|Ë||Igrave|0xcc|Ì||Iacute|0xcd|Í||Icirc|0xce|Î]
  [Iuml|0xcf|Ï||ETH|0xd0|Ð||Ntilde|0xd1|Ñ||Ograve|0xd2|Ò]
  [Oacute|0xd3|Ó||Ocirc|0xd4|Ô||Otilde|0xd5|Õ||Ouml|0xd6|Ö]
  [times|0xd7|×||Oslash|0xd8|Ø||Ugrave|0xd9|Ù||Uacute|0xda|Ú]
  [Ucirc|0xdb|Û||Uuml|0xdc|Ü||Yacute|0xdd|Ý||THORN|0xde|Þ]
  [szlig|0xdf|ß||agrave|0xe0|à||aacute|0xe1|á||acirc|0xe2|â]
  [atilde|0xe3|ã||auml|0xe4|ä||aring|0xe5|å||aelig|0xe6|æ]
  [ccedil|0xe7|ç||egrave|0xe8|è||eacute|0xe9|é||ecirc|0xea|ê]
  [euml|0xeb|ë||igrave|0xec|ì||iacute|0xed|í||icirc|0xee|î]
  [iuml|0xef|ï||eth|0xf0|ð||ntilde|0xf1|ñ||ograve|0xf2|ò]
  [oacute|0xf3|ó||ocirc|0xf4|ô||otilde|0xf5|õ||ouml|0xf6|ö]
  [divide|0xf7|÷||oslash|0xf8|ø||ugrave|0xf9|ù||uacute|0xfa|ú]
  [ucirc|0xfb|û||uuml|0xfc|ü||yacute|0xfd|ý||thorn|0xfe|þ]
  [yuml|0xff|ÿ||OElig|0x152|Œ||oelig|0x153|œ||Scaron|0x160|Š]
  [scaron|0x161|š||Yuml|0x178|Ÿ||fnof|0x192|ƒ||circ|0x2c6|ˆ]
  [tilde|0x2dc|˜||Alpha|0x391|Α||Beta|0x392|Β||Gamma|0x393|Γ]
  [Delta|0x394|Δ||Epsilon|0x395|Ε||Zeta|0x396|Ζ||Eta|0x397|Η]
  [Theta|0x398|Θ||Iota|0x399|Ι||Kappa|0x39a|Κ||Lambda|0x39b|Λ]
  [Mu|0x39c|Μ||Nu|0x39d|Ν||Xi|0x39e|Ξ||Omicron|0x39f|Ο]
  [Pi|0x3a0|Π||Rho|0x3a1|Ρ||Sigma|0x3a3|Σ||Tau|0x3a4|Τ]
  [Upsilon|0x3a5|Υ||Phi|0x3a6|Φ||Chi|0x3a7|Χ||Psi|0x3a8|Ψ]
  [Omega|0x3a9|Ω||alpha|0x3b1|α||beta|0x3b2|β||gamma|0x3b3|γ]
  [delta|0x3b4|δ||epsilon|0x3b5|ε||zeta|0x3b6|ζ||eta|0x3b7|η]
  [theta|0x3b8|θ||iota|0x3b9|ι||kappa|0x3ba|κ||lambda|0x3bb|λ]
  [mu|0x3bc|μ||nu|0x3bd|ν||xi|0x3be|ξ||omicron|0x3bf|ο]
  [pi|0x3c0|π||rho|0x3c1|ρ||sigmaf|0x3c2|ς||sigma|0x3c3|σ]
  [tau|0x3c4|τ||upsilon|0x3c5|υ||phi|0x3c6|φ||chi|0x3c7|χ]
  [psi|0x3c8|ψ||omega|0x3c9|ω||thetasym|0x3d1|ϑ||upsih|0x3d2|ϒ]
  [piv|0x3d6|ϖ||ensp|0x2002| ||emsp|0x2003| ||thinsp|0x2009| ]
  [zwnj|0x200c|‌||zwj|0x200d|‍||lrm|0x200e|‎||rlm|0x200f|‏]
  [ndash|0x2013|–||mdash|0x2014|—||lsquo|0x2018|‘||rsquo|0x2019|’]
  [sbquo|0x201a|‚||ldquo|0x201c|“||rdquo|0x201d|”||bdquo|0x201e|„]
  [dagger|0x2020|†||Dagger|0x2021|‡||bull|0x2022|•||hellip|0x2026|…]
  [permil|0x2030|‰||prime|0x2032|′||Prime|0x2033|″||lsaquo|0x2039|‹]
  [rsaquo|0x203a|›||oline|0x203e|‾||euro|0x20ac|€||larr|0x2190|←]
  [uarr|0x2191|↑||rarr|0x2192|→||darr|0x2193|↓||harr|0x2194|↔]
  [crarr|0x21b5|↵||forall|0x2200|∀||part|0x2202|∂||exist|0x2203|∃]
  [empty|0x2205|∅||nabla|0x2207|∇||isin|0x2208|∈||notin|0x2209|∉]
  [ni|0x220b|∋||prod|0x220f|∏||sum|0x2211|∑||minus|0x2212|−]
  [lowast|0x2217|∗||radic|0x221a|√||prop|0x221d|∝||infin|0x221e|∞]
  [ang|0x2220|∠||and|0x2227|∧||or|0x2228|∨||cap|0x2229|∩]
  [cup|0x222a|∪||int|0x222b|∫||there4|0x2234|∴||sim|0x223c|∼]
  [cong|0x2245|≅||asymp|0x2248|≈||ne|0x2260|≠||equiv|0x2261|≡]
  [le|0x2264|≤||ge|0x2265|≥||subset|0x2282|⊂||superset|0x2283|⊃]
  [nsub|0x2284|⊄||sube|0x2286|⊆||supe|0x2287|⊇||oplus|0x2295|⊕]
  [otimes|0x2297|⊗||perp|0x22a5|⊥||sdot|0x22c5|⋅||lceil|0x2308|⌈]
  [rceil|0x2309|⌉||lfloor|0x230a|⌊||rfloor|0x230b|⌋||loz|0x25ca|◊]
  [spades|0x2660|♠||clubs|0x2663|♣||hearts|0x2665|♥||diams|0x2666|♦]
