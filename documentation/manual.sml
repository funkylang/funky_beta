TITLE: Programming - The Funky Way

PREFACE

  Funky is an all-purpose pure functional and pure object oriented programming language. It can be used to write small scripts, large application programs and just about any software that does not rely on direct access to hardware.

  Pure functional programming languages are often associated with academic research and beeing not suited for practical use. Funky attempts to keep all the advantages of pure functional programming while offering a much more pragmatic approach to programming.

  Funky differs a lot from other programming languages - functional languages as well as traditional. There are a lot of new concepts and ideas in Funky that may be unfamiliar to programmers coming from other languages. It will take some time to get used to the Funky way of programming.

  This book is intended to be a complete guide to the Funky programming language. It is assumed that the reader is already familiar with the basics of programming.

PART: The Language

Look and Feel

  On the first look Funky programs may resemble shell scripts or Python programs, because Funky does not use commas to separate arguments and use
  indentation to group statements but don't let this fool you. Funky is a real programming language, not a scripting language. Everything has do be defined explicitly before it can be used.

  Funky do not have keywords and uses special characters like "\$" (*declares a symbol*) or ":" (*starts a function definition*) instead.

  Some examples:

  `
    println! "Hello, world!"

  `
    print! "Hello, world!@nl;"

  `
    print! "
      Hello, world!

  All three examples produce the same output. The exclamation mark after `print` denotes that `print` is a call to an I/O-function that produces some output as a side effect which would be forbidden otherwise.

  The second example makes use of `"@nl;"` - the Funky way to print special characters. It's the same as `"\\n"` in languages like C or Java.

  The third example shows how to write multi-line string literals in Funky. They start with a double quote at the end of a line and contain all following lines as long as their indentation is greater than the indentation of the first line.

  Example:

  `
    \$numbers list(1 2 3 4 5)

    for_each numbers
      : (number)
	println! number
	next!
      pass

  Pure functional programming languages do not have loops. Funky offers "anonymous recursion" to replace loops. The next iteration of the loop is started with the call of `next`. And because the next iteration will need I/O-access again, `next` must also be called with I/O-access rights which is denoted by the exclamation mark.

Language Design

  Functional Programming

    Functional programming was introduced in the 1950s by Alonzo Church and John McCarthy. The first functional programming language was Lisp, which was invented by John McCarthy in 1958.

    Functional programming is a programming paradigm that treats computation as the evaluation of functions and avoids changing state and mutable data.

    Many modern programming languages, including Python, Ruby, and JavaScript, support functional programming. But supporting functional programming doesn't mean that the language is a functional programming language.

    The main advantage of a *pure* functional programming language is not about what one *can* do, but what one *cannot* do. It offers guarantees about the behavior of programs:

    * a program run on the same input data will always produce the same output

    * no shared (writable) state: a function can't change the value of a variable that's defined outside of it

    This prevents many types of bugs and makes it easier to reason about the code. It's a real lot easier to find a bug in a program that doesn't change state than in a program that does.

    There are also advantages when executing a functional program:

    * functions can be evaluated lazily, which means that they are only evaluated when their result is needed

    That's the way languages like Haskell work.

    * functions can be evaluated in parallel, which means that they can be executed on multiple processors at the same time

    That's the way Funky works.

  Object Oriented Programming

    Object oriented programming was introduced in the 1960s by Simula 67. The first object oriented programming language was Smalltalk, which was invented by Alan Kay, Dan Ingalls, Adele Goldberg, and others in 1972.

    An *object* is a data structure that contains data and functions that operate on that data. The data is called *attributes* or *properties* and the functions are called *methods*.

    The most popular object oriented programming languages are Java, C#, C++, Python, Ruby, and JavaScript.

    In a *pure* object oriented programming language, everything is an object. This means that even primitive data types like integers and strings are objects. This is not the case in Java, C#, and C++.

    Funky is a pure object oriented programming language.

    Important features of object oriented programming are:

    * Encapsulation: the data and the functions that operate on that data are bundled together in an object. This means that the data can be hidden from the outside world and can only be accessed through the methods of the object.

    * Inheritance: objects can inherit attributes and methods from other objects. This means that you can create a new object that is a specialization of an existing object.

    * Polymorphism: objects of different types can be treated as if they were the same type. This means that you can write code that works with objects of different types without knowing the exact type of the object.

    Funky supports all three features of object oriented programming.

  Typing Discipline

    Funky attempts a pragmatic approach to typing. It is a dynamically but strong typed language.

    Dynamic vs. Static Typing

      In a statically typed language each variable has an associated type and can only hold values of that type. In a dynamically typed language, variables don't have a type and can hold values of any type.

      The advantage of static typing is that the compiler can check that the program is type correct. This means that the compiler can catch errors at compile time instead of at runtime.

      The advantage of dynamic typing is that it is more flexible. You can write code that is more concise and easier to read.

      So both typing disciplines have their advantages and disadvantages.

      Checking only the type of a variable at compile time is often not enough. Lots of errors are not about types but about the values of variables. For example array indices can be out of bounds, or a variable can be null.

      The praxis shows that most errors are about values and not about types. So static type checking is only a small part of the solution.

      It takes less time to write a program in a dynamically typed language than in a statically typed language. This time can be used to test the program more thoroughly.

      Many statically typed programming language do not care what a type is used for. For example file descriptors, file modes, and process ids are all of integer type.

      Funky is a dynamically typed language, but it differentiates between types, that are used for different purposes - for example file descriptors, file modes, and process ids are all different and types of their own.

      Duck Typing

	Duck typing is a typing discipline that is used in dynamically typed languages. It is called duck typing because it is based on the saying "If it walks like a duck and it quacks like a duck, then it must be a duck".

	In a duck typed language the compiler does not check beforehand if a variable or a method even exists. It is only checked at runtime.

	Duck typing allows for quick and easy prototyping and development, but is not suited for large code bases.

	In Funky each variable or method **must** be declared before it is used.

    Strong vs. Weak Typing

      In a strongly typed language each operation can only be performed on values of matching types. In a weakly typed language, the language system will try to automatically convert values of one type to values of another type or do other strange things (e.g. adding a string and an integer in C).

      Many languages also use the same operators for different purposes. For example the "`+`" operator can be used to add two numbers or to concatenate two strings.

      Funky follows a strong typing discipline. This means that each operation can only be performed on values of matching types and "`+`" can only be applied to numbers.

  Memory Management

    Funky typically uses a garbage collector to manage memory. This means that the programmer does not have to worry about memory management. The garbage collector will automatically free memory that is no longer used.

    This has some performance implications. The garbage collector will run periodically to free memory which will slow down the execution of the program.

    But it also has big advantages. The programmer does not have to worry about memory management. This means that the programmer can focus on the problem at hand instead of on memory management.

  Program Correctness

    Many programming errors that plague programmers in other languages, are not possible in Funky, e.g. "race conditions", "spooky action at a distance", and so on.

    Conversely, one can make errors in Funky, that were never seen before ...

    Beginners often tend to write programs that do exactly nothing! They rely on "side effects" that will not happen in Funky.

    The cause of most bugs in Funky programs is easy to find - very much easier than in other languages.

    The downside: It takes a lot of experience to efficiently use a language like Funky.

    But when you have that experience, you can write correct programs much faster than in other languages.

  Error Handling

    Even the best programmers make mistakes. So it is important to have a good error handling mechanism.

    Many "modern" languages like Rust, Go, and Swift use the "`panic`" mechanism to handle errors. This means that the program will abort with an error message if an error occurs.

    This may be a nice feature for a small command line tool but is a catastrophic approach for servers or realtime applications! Such programs must not fail if an error occurs. It does not matter whether the error was caused by a hardware failure, erroneous input data or a programming error.

    Languages like C++ or Java use exceptions to handle errors. This means that the program will throw an exception if an error occurs. The exception can then be caught and handled by the caller.

    This is a really neat feature but it has some drawbacks. It assumes that a program is executed in a single thread. This is not the case in Funky. Funky supports parallel execution of functions. This means that a function can be executed in a different thread than the caller. This means that exceptions cannot be used to handle errors in Funky.

    So Funky uses "`error objects`" to handle errors. This means that a function will return an error object if an error occurs. The caller can check the error if he wants do. If he does not check the error, the error will propagate and will eventually be handled by some outer function or by the runtime system.

Basic Concepts

  Objects

    In Funky everything is an object and all objects are immutable.

    An object consists of

    * a *type-function*

    * any number of *methods*

    * any number of *attributes*

    * maybe some additional internal fields (builtin objects only)

    Every object acts as a function. When an object is called as a function the object's type-function is called. The type-function and the methods have access to the object's attributes. Type-functions and methods of builtin objects also have access to the object's internal fields. (It's also possible to define attributes in a way that external functions can access them, too.)

    Internally every object is of a specific type. The type-function and the methods are associated with this type and are only stored once for all objects of this type.

    All objects of a specific type contain the same set of attributes. For each attribute there is a *slot* to hold a value in every object of this type.

    Builtin objects can contain internal fields, e.g. for storing the numeric value of an integer object.

    Methods and attributes must be declared as polymorphic functions before they can be attached to an object. While one object can implement a specific polymorphic function as a method, another object can implement the same polymorphic function as an attribute.

    To create a new object, an existing object is "cloned" and some attribute values are changed.

    Root Objects

      All objects are derived from one of three root objects:

      * `std_types::object`

      This is the root object of all "normal" objects.

      * `std_types::undefined`

      This object is a placeholder with no attributes and very view methods defined. It replaces the "NULL" pointer of other languages.

      * `std_types::error`

      This is the root object of all error objects.

  Types

    *Types* (more correctly: *prototypes*) are not explicitly defined in Funky.

    Every object for which at least one attribute, method or type-function is defined becomes a (proto)type.

    Types are used internally for dispatching *polymorphic function calls* (see <#polymorphic_functions#:Polymorphic Functions>).

  Functions

    A function is merely the same as an object, because every object **is** a function.

    Methods are functions, too.

    In Funky functions are "pure", meaning that they don't have side effects.

    The only exception are IO-functions which cannot change state, too, but which can perform input/output-operations. (IO-functions must be called with a "!"-suffix.)

    Calls to such functions must be annotated in the source code. Each function calling an IO-function is itself an IO-function and so calls to it must be annotated, too, and so on.

    In Funky functions have no names but are bound to an object's type-function or an object's method.

    A "function object" is an object that contains neither methods nor attributes and is used solely for its type-function.

  Variables

    Variables are lexically scoped.

    All variables must be initialized on definition.

    A function can access a variable only if it's in its lexical scope.

    The set of all variables in a program is called an *environment*. An environment can be thought of as a table holding a slot for each variable.

    When a function is called it receives a copy of this environment. So any
    redefinitions of variables within the function will not affect the caller of the function.

    Variables have a single *definition* and can be *redefined* in the same or an inner scope. This *redefinition* is not the same as an *assignment* in conventional programming languages.

  Determinism

    Funky is a deterministic programming language. If fed the same input data, a Funky program will return the same results on each run and (hopefully!) each platform.

    This sounds trivial but isn't.

    * This prevents the usage of concurrency.

    * There is no room for *implementation defined* stuff.

    Remark: The order of evaluation for operations which (should!) obeye the association law (e.g. "`+`" and "`\*`") is not defined.

    Compilers can and should make use of modern multi-core CPUs and even of compute-clusters to arrange the evaluation of expressions in a way that maximizes performance.

    So Funky programs can execute functions in parallel. But there is no explicit language support for parallelism! Each and every Funky program is logically sequential. It's up to the compiler and runtime system to run parts of the code in parallel.

    This automatic parallelization *must not* undermine determinism.

  Uniform Access

    There is no syntactic difference in accessing lists, attributes, methods and (non-polymorphic) functions.

    An example:

    `
      println! x_of(point)

    which means: "print the *x_of* property value of a thing named *point*".

    But there are multiple ways to implement this:

    * *point* could be an object and *x_of* an **attribute**

    * *point* could be an object and *x_of* a **method**

    * *x_of* could be a function and *point* an **argument**

    * *x_of* could be a list and *point* an **index**

    * *x_of* could be a table and *point* a **key**

    This offers the possibility to change the implementation later on without the need to change the interface. It's especially easy to turn an attribute into a method or vice versa.

  Versioning

    Funky has builtin support for symbol versioning. Every exported symbol has an attached version number in a *major*.*minor*-scheme. If no version is explicitly specified, the version defaults to "1.0".

    Several versions of a symbol can coexist. Older versions should *not* be removed. Any existing application program will thus be able to link against future versions of a library ensuring backwards compatibility.

    Versioning is done via *namespaces*. In the simplest (and most common) case one only specifies the desired version of each namespace to be used once in every source code module.

    Once published, a specific namespace-version should never change. No changes, no additions - only bug fixes are allowed.

    To add a symbol to an already published namespace the minor version number of the namespace is incremented. To change the semantics of an existing symbol, the major version number is incremented and the minor version number is reset to 0.

    Each version of a namespace also includes all symbols defined in older versions (if they were not redefined in a newer major version), e.g. version 3.2 also includes all symbols of versions 1.x, 2.x, 3.0 and 3.1.

Builtin Objects and Literals

  Each object is based upon one of the three *root objects*:

  * `std_types::object`

  * `std_types::undefined`

  * `std_types::error`

  All "normal" objects are derived from `std_types::object`.

  `std_types::undefined` is a *one-of-a-kind* object.

  All *error-objects* are derived from `std_types::error`.

  An object consists of

  * a function

  * slots for polymorphic functions implemented as attributes on this object

  * methods for polymorphic functions implemented as functions on this object

  * builtin objects may contain additional internal fields

  Such internal fields are used to store the numeric values of integers, the characters that build a string, and things like that.

  The Funky builtin library defines a number of builtin objects:

  * numbers

  * booleans

  * unique items

  * characters

  * strings

  * tuples

  * lists

  * functions

  Numbers, booleans, unique items and characters are scalar values. Tuples and lists are compound values; strings are a bit of both. Functions contain no data but are called to execute their embedded statement sequences.

  Scalars

    Numbers

      There are exact (integer) and inexact (real) numbers.

      DISCUSS: Should rational numbers (fractions) and complex numbers be added to form a "numeric tower"?

      Integers

	Integers are of arbitrary size and can literally consist of billions of digits.

	ATTENTION: Large Integers are **not** implemented in the current version!

	There are *positive* and *negative* integers (zero is treated as a positive integer). Some operations can only be performed on positive integers.

	It would be more correct to name the *positive* integers *non-negative* integers but this would be quite a long name.

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

	DISCUSS: Does this really make sense?

      Real Numbers

	These are IEEE 754 64 bit ("double precision") floating point numbers. All computations on real numbers will return real numbers; `2.5-2.5` will return the real number `0.0` and `3.7/3.7` will return the real number `1.0`.

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
	  0.5
	  3.1415
	  2.9e4
	  1e-100
	  123.456E+16

	Examples for invalid real literals:

	`
	  1.
	  .5
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

      These boolean objects are used to implement control structures like `if` as <#polymorphic_functions#:polymorphic functions>.

    Unique Items

      *Unique items* are values that are different to any other value (any other object). They are mostly used as *enumeration items*.

      They can be compared for equality but have no ordering.

      Unique item literals are written as a *standalone* point (".").

      They can only be used as initialization values in definitions, e.g.:

      `
	\$RED .
	\$GREEN .
	\$BLUE .

    Characters

      *Characters* are implemented as 32-bit unsigned integers. They form the elements of strings and are mostly used to hold Unicode codepoints, but can also be used for any numbers, e.g. waveform data, colour information, etc.

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

	To create a character literal with a specific numeric code one can specify the code between an opening at-sign ("@") and a terminating semicolon (";"). The numeric code is an <#integers#:*integer literal*>.

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

	There are 276 different named character literals (see appendix <#named_characters#:Named Characters>). They are written in the form

	`
	  '@*name*;'

	Valid examples:

	`
	  '@cr;'
	  '@at;'
	  '@quot;'
	  '@alpha;'
	  '@Omega;'

  Compound

    Strings

      *Strings* have an explicitly stored length and contain exactly that number of characters.

      Strings that contain only 8-bit-character-values form a "subtype" that can be used in input/output-operations.

      A string (like every other object) is a function. If called with a single integer argument the character at the specified position is returned.

      String indices are *one-based*.

      If called with two arguments the first argument is an index of an existing character and the second argument is a *replacement character*. The returned string is a copy of the original string with exactly this one character replaced.

      Examples:

      `
	\$str "Hello"
	println! str(2) # prints "e"
	println! str(2 'a') # prints "Hallo"


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

	    It spans four lines.

	Each line-end within the string literal is converted into a linefeed-character. The above literal is therefor equal to:

	`
	  "  This is a multi-line@nl;  string literal.@nl;@nl;It spans four lines.@nl;"

	The sequence "@;" in a string literal expands to nothing. It can be used to add empty lines at the end of a multi-line string literal or to add spaces at the end of a line of a multi-line string literal.

	A single "@" at the end of a line prevents the linefeed character and any whitespace at the start of the next line from beeing added to the string. It can also be used to define the zero indent.

	An example:

	`
	  "
	    @
		This is a single line @
		of text.

	is equal to

	`
	  "    This is a single line of text.@nl;"

	Another example:

	`
	  "
	    Title

	      This is a single line @
	      of text.

	is equal to

	`
	  "Title@nl;@nl;  This is a single line of text.@nl;"

	The space character between "`line`" and the "`@`" is part of the string. The spaces at the start of the next line are discarded.

      String Interpolation

	Funky supports *string interpolations*. A *string interpolation* looks like a string literal with embedded expressions.

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

	is converted into

	`
	  std::string("This is " article substantive ".")

	ATTENTION: The current implementation does only allow a single expression within a "@(…)" embedding, but any inline expression is valid as an embedded expression.

	It is even possible to use a string expression as an embedded expression. The following examples are all equal:

	`
	  "
	    This is @(article " " substantive).

	`
	  "
	    This is @(article) @(substantive).

	`
	  std::string("This is " article " " substantive ".")

    Lists

      Like strings *lists* have an explicitly stored length and contain exactly that number of items.

      A list (like every other object) is a function. If called with a single integer argument the item at the specified position is returned.

      Like string indices, list indices are *one-based*.

      If called with two arguments the first argument is an index of an existing item and the second argument is a *replacement item*. The returned list is a copy of the original list with exactly this one item replaced.

      There are lots of functions to create new lists out of existing ones.

      Lists are sometimes used for special purposes (e.g. grammar rules). To clone a list with all its modified attributes and methods one can use the *new* method.

      There is no special syntax for normal list literals, but *sequences* are based upon lists.

      Sequences

	Sequences are a subtype of lists and used (often together with value-ranges) to describe the arguments in calls to the `case`-function or grammar rules.

	The items of a sequence are separated by commas.

	Syntax:

	`
	  *value_1*, *value_2*, …, *value_3*

	An example:

	`
	  case chr
	    'a'..'z', 'A'..'Z', '0'..'9':
	      …

	This is just syntactic sugar for

	`
	  case chr
	    std::sequence
	      std::value_range('a' 'z')
	      std::value_range('A' 'Z')
	      std::value_range('0' '9')
	    :
	      …

      Funky lists are very different from lists in other functional programming languages which are linked lists and work more like "stacks".

      In Funky lists resemble more a written shopping list than a stack of plates. Items can be added very easily at the end of the list but inserting or deleting an item at an arbitrary position is an expensive operation.

      They are also well suited for parallel processing (e.g. mapping or reducing).

    Tuples

      *Tuples* consist of a fixed number of unnamed fields. Each field stores an object.
      To create a tuple one has to supply all its fields at once.

      If a tuple is read then as many tuple fields as there are destinations are returned.

      Example:

      `
	\$t tuple("a" 47 'c')

	t \$first \$second # first = "a", second = 47

      To create a tuple based on an existing one the *new* method can be used.

      There is no special syntax for normal tuple literals, but there are two types that are based upon tuples.

      Key-Value-Pairs

	A *key-value-pair* associates a *key* with a *value*. Technically it is simply a tuple with two fields.

	The syntax is

	`
	  *key* = *value*

	ATTENTION: This is *not* an assignment!

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
	  -100 .. 100

  Functions

    Functions are literals like numbers or strings. Their definition starts with
    a colon (":"), optionally followed by a parenthesized list of parameters and one or more statements.

    Example:

    `
      \$heron: (a b c) # parameters
	\$s (a+b+c)/2 # first statement
	-> sqrt(s\*(s-a)\*(s-b)\*(s-c)) # second statement

    Statements are described <#statements#:here>.

    Parameters

      A function can have any number of *parameters*. A parameter is a variable. (The scope of a parameter is the function and all embedded functions.)

      A function can have any number of *mandatory* and *optional* parameters as well as a single *rest* parameter.

      The *caller* of the function must supply an argument for every *mandatory* parameter of the called function.

      The *caller* can supply an argument for each *optional* parameter of the
      called function.

      If there is no *rest* parameter the caller must *not* supply any excess
      arguments to the called function.

      Mandatory Parameters

	Mandatory parameters can be written at the start as well as at the end of a parameter list.

	A caller must supply an argument for each mandatory parameter.

	The first supplied arguments are assigned to the mandatory parameters at the start of the parameter list in their corresponding order.

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

	A neat trick is to use a (local) unique item to initialize an optional parameter, so one can simply check if the parameter was explicitly initialized or not.

	Example:

	`
	  \$NONE .

	  \$set_or_get_value:
	    (
	      array
	      index
	      value = NONE
	    )
	    …

      Rest Parameter

	A rest parameter follows the last optional parameter if there are one or the last starting mandatory parameter if there is one or starts the parameter list otherwise.

	If the caller supplies more arguments than the sum of mandatory and optional parameters then the surplus arguments are collected into a list and this list is assigned to the rest parameter.

	If there are no surplus arguments then an empty list is assigned to the rest parameter.

	The syntax for a rest parameter:

	`
	  *rest_parameter*\*

	Example:

	`
	  \$sum: (addends\*)
	    reduce addends plus

      Myself

	A special "parameter" that describes the function object itself can be supplied as the very first "parameter" of the function. It somewhat takes the role of `argv[0]` when calling a C-executable.

	It is most important when accessing containers where the object itself stores all the items of the container.

	The syntax for a myself parameter:

	`
	  *myself_parameter*^

	Example:

	`
	  \$std_types::table/:
	    (
	      myself^
	      key
	      value = NONE
	    )
	    …

      Single-Line Parameter List

	A parameter list can be written on a single line:

	`
	  (*myself*^ $left_1$ … $left_n$ $optional_1$ … $optional_n$ *rest* $right_1$ … $right_n$)

	Some examples:

	`
	  (myself^ key value = NONE)

	`
	  (options\* body)

      Multi-Line Parameter List

	If a parameter list is written on mutltiple lines then each line must contain exactly one parameter:

	`
	  (
	    *myself*^
	    $left_1$
	    …
	    $left_n$
	    $optional_1$
	    …
	    $optional_n$
	    *rest*
	    $right_1$
	    …
	    $right_n$
	  )

	The closing parenthesis must have the same indentation as the opening parenthesis. The parameters all have the same (greater) indentation.

	Some examples:

	`
	  (
	    myself^
	    key
	    value = NONE
	  )

	`
	  (
	    options\*
	    body
	  )

      Statements are described in details in the section <#statements#:Statements>.

    Results

      The *results* of a function are the values that a function returns to its caller.

      In Funky a function can return any number of results.

    Polymorphic Functions

      A *polymorphic function* is a function that has multiple implementations.

      Each type can implement its own version of a polymorphic function. If it does not then it "inherits" the implementation of its "parent".

      If a polymorphic function is not implemented in a root object (see <#root_objects#:Root Objects>) then it has a default implementation that creates an error object when called.

      When a polymorphic function is called then the actual type of the first argument of the function call is used to "dispatch" the call (determine which implementation to call).

      A polymorphic function can be implemented for a specific type as an *attribute* or a *method*.

      Attributes

	An *attribute* is a value (an object) stored in an object's slot.

	The type of an object decides for which polymorphic function an object contains slots.

	Attributes are re(defined) using an object <#attribute_definitions#:re(definition) statement>.

	Definition:

	`
	  \$*object*.*polymorphic_function* *value*

	Redefinition:

	`
	  !*object*.*polymorphic_function* *value*

	E.g.:

	`
	  !person.age_of 47

	Remember, this does **not** modify the object bound to *person*. Instead a new object is created as a clone of the original object (with the attribute *age* changed) and bound to the variable *person*.

	ATTENTION: An attribute can only be redefined for a specific type when it was *defined* for this type before!

	When the polymorphic function *age_of* is called with *person* as its first argument then the attribute value (47) is returned.

	E.g.:

	`
	  println! age_of(person) # prints "47"

      Methods

	A *method* is a function used to implement a polymorphic function for a specific type.

	Methods are defined using a special syntax:

	`
	  \$*object*/*polymorphic_function* *method*

	E.g.:

	`
	  \$person/age_of: (self)
	    -> years_of(current_date()-birth_date_of(self))

	ATTENTION: Methods cannot be redefined!

	When the polymorphic function *age_of* is called with *age_of* as its first argument then the dispatcher calls the method defined for the type of the first argument:

	`
	  : (self)
	    -> years_of(current_date()-birth_date_of(self))

	(This is not a valid source code example for itself but illustrates which function is called.)

	This function is then called and will (in our case) return the current age of the person.

	In Funky it is *not* possible to *retrieve* the function used to implement a method!

	ATTENTION: This is a very important feature. It prevents one from moving a method of a builtin object (that accesses internals of builtin objects directly) to an object of the wrong type!

      Polymorphic Functions Without Setter

	A polymorphic function without a setter is defined like this:

	`
	  \$*attribute_of* ()

	This kind of polymorphic function needs an explicit redefinition to change an attribute's value, e.g.:

	`
	  \$my_attr_of ()

	  \$obj std_types::object
	    .my_attr_of 47

	  do: # now let's change the value
	    !obj.my_attr_of 11 # explicitly redefine the attribute value

      Polymorphic Functions With Setter

	A polymorphic function can be defined to have *setter* functionality.

	A polymorphic function with a setter is defined like this:

	`
	  \$*attribute* (!)

	An example:

	`
	  \$attribute_of (!)

	The setter functionality works only on objects that implement this polymorphic function as an attribute.

	If an object implements this polymorphic function as a method then the setter functionality is not used.

	The setter can be used to derive a new object from an existing one where the attribute value is replaced by a new attribute value:

	`
	  \$my_attr_of (!)

	  \$obj std_types::object
	    .my_attr_of 47

	  do: # now let's change the value
	    my_attr_of &obj 11 # use the setter to redefine the attribute value
	    !obj.my_attr_of 815 # explicit redefinition is also possible

Statements

  With the exception of attribute (re)definitions statements in Funky are simply function calls.

  Function Calls

    A function call consists of a *functor*, *destinations* and *arguments*.

    A *functor* is an object that contains the statements of the function to be called.

    The *arguments* are the values that the caller supplies to the callee.

    The *destinations* denote the variables where the *results* returned from the callee are stored.

    Here are the steps that take place when a function is called:

    * a copy of the caller's enviroment is made and is used as the callee's environment

    * the argument values are read from the caller's environment and stored in the callee's environment using the names of the function parameters

    * the statements of the function are executed one after the other using the callee's environment

    * the last statement of the function produces the result values that are read from the callee's environment and returned to the caller where they are stored in the caller's environment using the names of the destination variables

    * the callee's environment is discarded and the caller's environment is made the active environment again

    Some functions need to communicate with the operating system, retrieving data from a database, reading from a file, writing to a console, etc. These functions are called *IO-functions*.

    The call of an IO-function must be annotated with a an exclamation mark ("!") suffixing the functor, e.g.:

    `
      println! "Hello, world!"

    Functions in Funky are pure, meaning that they don't have side effects (they cannot alter any variable in the caller's environment). Even IO-functions have no side effects beside the IO-operations.

    So non-IO-functions must return at least one result. Otherwise there would be no use in calling them.

    The *canonical form* of a function calls looks like this:

    `
      *function_name*
	!$destination_1$
	!$destination_2$
	…
	!$destination_n$
	$argument_1$
	$argument_2$
	…
	$argument_n$

    If the variable to store the result is defined here the exclamation mark ("!") is replaced by a dollar sign ("\$").

    The destinations and arguments can be spread over multiple lines. They are separated with a single space from the *function_name* and beyond each other. The follow-up lines are all indented (by the same amount of whitespace) relative to the first line of the function call.

    So the above call could also be written like this:

    `
      *function_name* !$destination_1$ !$destination_2$
	…
	!$destination_n$ $argument_1$
	$argument_2$ … $argument_n$

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

    Input-Ouput Arguments

      Often one wants to update the contents of a specific variable like that:

      `
	!x sqrt(x)

      This will be translated by the compiler into the canonical form:

      `
	sqrt !x x

      To prevent the repetition of the variable name ("`x`") one can use an *input-output* argument like this:

      `
	sqrt &x

      Here "`x`" acts as an input argument as well as a destination.

    Backquoted Arguments

      Backquoted arguments are syntactic sugar and are most often used in calls to `debug::dump`. (The use of symbols in the `debug` namespace is not allowed in production code. They are meant for debugging purposes only.)

      The expression

      `
	\`*expr*

      is converted into

      `
	"*expr*" *expr*

      An example:

      `
	debug::dump \`width \`height

      is the same as:

      `
	debug::dump "width" width "height" height

    Assignments

      Because it's so common a call to the `assign`-function can be abbreviated if there is only a single input argument and a single destination. In the call

      `
	assign \$*destination* *source*

      the `assign` can be omitted:

      `
	\$*destination* *source*

      That's the reason vou will rarely see explicit calls to "`assign`" in a Funky program.

      Complex Destinations

	The Funky compiler can handle more complex destinations. They are translated into more basic function calls.

	`
	  !tab(idx) val

	is converted into

	`
	  tab !tab idx val

	This is **no** typo! The function "`tab`" is called with the arguments "`idx`" and "`val`" and will hopefully return a new table that is then assigned to "`tab`".

	In Funky data structures like lists, arrays, tables, etc. are implemented as objects where the *type function* implements the access to the data and the *attributes* hold the actual data.

	`
	  !obj.value_of val

	creates a clone of "`obj`" where the contents of the slot "`value_of`" are replaced by the contents of "`val`" (see <#attribute_definitions#:Attribute Definitions>).

	These expressions can be combined to any depth and complexity, e.g.:

	`
	  !tab(i+1).values_of(2\*j+k) val

	is converted into

	`
	  std::plus \$temp__1 i 1
	  tab \$temp__2 temp__1
	  values_of \$temp__3 temp__2
	  std::times \$temp__4 2 j
	  std::plus \$temp__5 temp__4 k
	  temp__3 !temp__3 temp__5 val
	  !temp__2.values_of temp__3
	  tab !tab temp__1 temp__2

	NOTE: The compiler generates symbols with two consecutive underline characters for internal use to prevent name clashes with user defined variables.

	The evaluations of "i+1" and "2\*j+k" are guaranteed to be free of side effects because Funky is a functional language! So there is no need to compute them twice.

    Tail Calls

      The last function call in a body's statement sequence is treated specially. It is a *tail call*. That means that its results are directly returned to the function's caller. So no stack space is needed to hold (temporary) results.

      Do **not** specifiy destinations in the last statement of a function! These would store the results in no longer used local variables and the results would be thrown away!

      The compiler will report the occurrence of destinations in the final call of a statement sequence as an error.

      Return

	To return results from a function one could call the `assign` function in tail position without specifying any destinations for the results:

	`
	  assign $result_1$ $result_2$ … $result_n$

	To make the intention more clear there is special syntax for this case:

	`
	  -> $result_1$ $result_2$ … $result_n$

	If a function has no parameters and consists of a single return-statement it can be abbreviated. The following expressions are all equivalent:

	`
	  : () -> $result_1$ $result_2$ … $result_n$

	`
	  : -> $result_1$ $result_2$ … $result_n$

	`
	  -> $result_1$ $result_2$ … $result_n$

    Function Call Arguments

      All arguments of function calls should be identifiers or literals. But this would be very impractical. So the compiler transforms more complex arguments into function calls of their own.

      A complex argument is a function call itself. These function calls must return exactly one result.

      Here an example how the compiler might transform a complex function call:

      Source code:

      `
	p \$z f(x) g(h(y))

      is transformed into

      `
	f \$temp__1 x
	h \$temp__2 y
	g \$temp__3 temp__2
	p \$z temp__1 temp__3

      The following sections describe the plentiful variants of writing *function-call-arguments*.

      Inline-Function-Calls

	In an inline-function-call all arguments fit on a single line. They immediately follow the function name, enclosed in parentheses:

	`
	  *function_name*($argument_1$ $argument_2$ … $argument_n$)

	Example:

	`
	  append(first_name " " last_name)

	Besides the absence of commas to separate the arguments this looks very much like a function call in a language like C or Java.

      Multiline-Function-Calls

	In a multiline-function-call the function name stands on a new line and must **not** be followed by any arguments on this line. Instead all arguments must follow on equally indented successive lines. It is therefore **not** possible to call a function with no arguments this way.

	`
	  *function_name*
	    $argument_1$
	    $argument_2$
	    …
	    $argument_n$

	Example:

	`
	  append
	    first_name
	    " "
	    last_name

	It is allowed to write multiple arguments on a single line, e.g.:

	`
	  append
	    first_name " "
	    last_name

      Infix-Operator-Style

	Any inline-function-call with exactly two arguments of the form

	`
	  *function*($argument_1$ $argument_2$)

	can be replaced with

	`
	  $argument_1$ .*function*. $argument_2$

	Instead of

	`
	  contains(bag item)

	one could write

	`
	  bag .contains. item

      Suffix-Operator-Style

	Any inline-function-call with a single argument of the form

	`
	  *function*(*argument*)

	can be replaced with

	`
	  *argument*.*function*

	NOTE: The argument must be an identifier or a parenthesized expression.

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

	If the association is *undefined* then the compiler can decide  whether to use left or right association. Only operations where association does not matter (e.g. addition) have undefined association.

	If the association is *none* then you must explicitly use parentheses when combining multiple operators.

	This is the complete list of infix-operators:

	[Symbol|Function|Precedence|Association]
	[`\*`|`std::times`|9|undefined]
	[`/`|`std::over`|9|none]
	[`+`|`std::plus`|8|undefined]
	[`-`|`std::minus`|8|left]
	[`<<`|`std::shift_left`|7|none]
	[`>>`|`std::shift_right`|7|none]
	[`&`|`std::bit_and`|7|none]
	[`\|`|`std::bit_or`|7|none]
	[`^`|`std::bit_xor`|7|none]
	[`==`|`std::equal`|6|none]
	[`!=`|`std::not(std::equal(left right))`|6|none]
	[`<`|`std::less`|6|none]
	[`\<=`|`std::not(std::less(right left))`|6|none]
	[`>`|`std::less(right left)`|6|none]
	[`>=`|`std::not(std::less(left right))`|6|none]
	[`..`|`std::value_range`|5|none]
	[.*named_operator*.|*named_operator*|4|none]
	[`&&`|`std::and`|3|right]
	[`\|\|`|`std::or`|3|right]
	[`,`|`std::sequence`|2|undefined]
	[`=`|`std::key_value_pair`|1|none]

	The order of operand evaluation can be freely chosen by the compiler because all operators are function calls and all functions in Funky are pure functions.

	The predefined precedences can be overwritten through the use of parentheses like in mathematics, e.g.:

	`
	  (a+b) \* (c-d)

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

	  The operators `&&` and `||` call the functions `std::and` and `std::or` respectively. These two functions take a boolean value as their first argument and a function that evaluates to a boolean value as their second argument. So these operators are converted as shown below:

	  `
	    *left* && *right*

	  is converted into

	  `
	    std::and(*left* (-> *right*))

	  and

	  `
	    *left* || *right*

	  is converted into

	  `
	    std::or(*left* (-> *right*))

	  So the second argument is only evaluated if necessary. This is called *short circuit evaluation*.

      Prefix Usage Of Infix Operators

	Expressions with infix operators cannot be spread over multiple lines.

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
	    $condition_1$
	    $condition_2$
	    $condition_3$

	is converted into

	`
	  $condition_1$ && $condition_2$ && $condition_3$

	The association rules are obeyed!

      Prefix-Operators

	There is only a single prefix operator: "`-`". It calls the function `std::negate`.

	So

	`
	  -123

	is a shortcut for

	`
	  std::negate(123)

  Attribute Definitions

    There is a special syntax to (re)define an object's attributes.

    Definition:

    `
      \$*object*
	.$attribute_1$ $value_1$
	.$attribute_2$ $value_2$
	…
	.$attribute_n$ $value_n$

    Redefinition:

    `
      !*object*
	.$attribute_1$ $value_1$
	.$attribute_2$ $value_2$
	…
	.$attribute_n$ $value_n$

    If only a single attribute is to be re(defined) the following simplfied form can be used:

    Definition:

    `
      \$*object*.$attribute$ $value$

    Redefinition:

    `
      !*object*.$attribute$ $value$

    When definining an object also methods and the type function can be defined.

    Method definition:

    `
      \$*object*/$method$ $function$

    Type function definition:

    `
      \$*object*/$function$

    NOTE: The *function* always starts with a ":".

    In an objects definition the definitions of attributes, methods and the type function can be mixed in any order.

    An example:

    `
      \$person
	std_types::object
	  .first_name_of "John"
	  .last_name_of "Doe"
	  /name_of: (self)
	    -> string(first_name_of(self) " " last_name_of(self))
	  /: (myself^)
	    print! "
	      Hi, I'm @(first_name_of(myself)) @(last_name_of(myself))!

    There is a special syntax ("`/:`") to assign an already defined function as a type function to an object:

    `
      \$person
	std_types::object
	  .first_name_of "John"
	  .last_name_of "Doe"
	  /: greeting

      \$greeting: (myself^)
	print! "
	  Hi, I'm @(first_name_of(myself)) @(last_name_of(myself))!

Identifiers

  An identifier consists of an (optional) *namespace* and a *name*.

  The rules for namespaces and names are the same:

  They consist of one or more "words". A word consists of one or more ASCII letters or digits. Words are separated by a single underscore-symbol ("_"). The first word must start with a letter.

  Letters can be upper or lower case. Case is relevant, so identifiers differing only in letter case *are* different identifiers.

  Unused Identifiers

    The compiler will report an error if a defined variable is *not* used. (There is a meta-instruction to suppress this kind of error messages.)

    To mark a variable as unsued its name is preceeded with an underscore character ("_") in its declaration, e.g.:

    `
      \$_dummy
      \$_unused

    This is used most commonly in parameter lists:

    `
      (_self value)

    The names of "anonymous" variables are completely ignored, so the same name can be used multiple times.

  Local Identifiers

    Identifiers without a namespace are local to the source code module in which they are defined.

    Some valid examples:

    `
      This_is_a_valid_identifier
      s7
      x
      A_B_C

    Some invalid examples:

    `
      _invalid_name
      x__11
      7_angels
      just_to_be_continued_

    Local variables **must not** be *shadowed* - that means that a variable with the same name must not be defined again in an inner scope (within an embedded function) or again in the same function.

  Global Identifiers

    Variables that shall be visible in other source code modules must belong to a *declared* namespace.

    A namespaced variable is written like

    *namespace::name*

    Global variables must be defined on the top-level of a module.

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
      \$value_of ()
      \$is_an_integer ()
      \$to_integer ()

Definitions and Redefinitions

  Every variable is defined exactly once. A variable is defined by using it as a destination and prefixing its name with a dollar sign.

  The scope of a variable spans all following statements of the function in which it is defined and all function literals embedded in this function - even if they are placed textually *before* the definition of the variable.

  If a "variable" is assigned a *constant expression* and is never redefined then it is a "named constant" and its scope starts at the beginning of the function where it is defined.

  If a variable is defined outside of any function (at the top level) its scope is the whole source code module.

  If it is defined within a namespace it can be accessed from absolutely *everywhere* (even from other modules).

  Variables defined at the top-level that are not initalized with *literals* or *constant expressions* are handled specially. The expressions used to initialize these variables are executed before the start of the program and can access only variables that have already been initialized. This is checked at runtime. Modules are evaluated in the order of "requirement". Within a single module expressions are evaluated top down.

  A *constant expression* is a literal or a function call whose functor is one of several builtin functions allowed within constant expressions and whose arguments are themself constant expressions.

  On the top-level every unknown symbol is treated as a constant by the compiler.

  Functions allowed in constant expressions are:

  * arithmethic and logical operations ("+", "|", "<<", etc.)

  * the tuple constructor function: `std::tuple`

  * the list constructor function `std::list`

  * constructor functions for subtypes of tuples and lists: `std::key_value_pair`, `std::value_range`, `std::sequence`

  Some examples:

  `
    \$p: (x)
      println! a # invalid - not in scope
      \$print_square:
	println! a\*a # valid - in scope
      \$a 2\*x # define the variable "a"
      println! a+1 # valid - in scope
      print_square!

  `
    \$q: (x)
      println! a # valid, because "a" is definitely constant
      \$a 47 # define the variable "a"

  A variable can be redefined within its scope any number of times.

  Distributed Definitions

    At the global scope the definition of a variable with attributes and methods can be split into several separate definitions. In the case of a namespaced identifier these definitions can be distributed over several source code modules.

    Before an attribute or method can be defined, a polymorphic function must be defined. Polymorphic functions are "literals" consisting of a pair of parentheses.

    Attributes are defined with the dot operator and methods are defined with the slash operator.

    An example:

    `
      \$first_name_of () # a polymorphic function
      \$last_name_of () # a polymorphic function
      \$name_of () # a polymorphic function

      \$person std_types::object

      \$person.first_name_of "Joe"
      \$person.last_name_of "Doe"

      \$person/name_of: (self)
	-> string(first_name_of(self) " " last_name_of(self))

      \$person/: (myself^)
	print! "
	  Hi, I'm @(first_name_of(myself)) @(last_name_of(myself))!

    is equal to

    `
      \$first_name_of ()
      \$last_name_of ()
      \$name_of ()

      \$person
	std_types::object
	  .first_name_of "Joe"
	  .last_name_of "Doe"
	  /name_of: (self)
	    -> string(first_name_of(self) " " last_name_of(self))
	  /: (myself^)
	    print! "
	      Hi, I'm @(first_name_of(myself)) @(last_name_of(myself))!

    See the section about *attribute-value-pairs* for a detailed description of the syntax used here.

  Local Definitions

    Local Polymorphic Functions

      Not only variables but also polymorphic functions and their implementations (methods, attributes) can be defined locally.

      Instead of

      `
	\$print_type: (obj)
	  cond
	    -> obj.is_a_number:
	      println! "number"
	    -> obj.is_a_string:
	      println! "string"
	    -> true:
	      println! "unknown"

      the function could also be defined using a local polymorphic function and local methods:

      `
	\$print_type: (obj)
	  println! get_type(obj)

	  \$get_type ()
	  \$std_types::object/get_type: (_self) -> "unknown"
	  \$std_types::number/get_type: (_self) -> "number"
	  \$std_types::string/get_type: (_self) -> "string"

      The function "`get_type`" is defined locally and is only visible within the function "`print_type`".

    Local Types

      Types can be defined locally, too.

      `
	\$p: (first_name last_name)
	  my_type
	    .first_name_of first_name
	    .last_name_of last_name

	  \$first_name_of ()
	  \$last_name_of ()

	  \$my_type std_types::object
	    .first_name_of undefined
	    .last_name_of undefined
	    /to_string: (self)
	      append first_name_of(self) " " last_name_of(self)

      Within the function "`p`" the type "`my_type`" is defined locally. It contains two local attributes "`first_name_of`" and "`last_name_of`" and implements the global method "`to_string`".

      When the function "`p`" is called an object of type "`my_type`" is created and returned.

      The caller of "`p`" can access the global method "`to_string`" of the returned object but not the local attributes "`first_name_of`" and "`last_name_of`".

Input-Output

  All input and output operations directly or indirectly make use of the POSIX API which is supplied by the builtin library.

  To call an IO-function one must append an exclamation mark to the function name (called an IO-annotation), e.g.:

  `
    println! "Hello, world!"

  In the case an IO-function is called from another function then this function
  must also be called with an IO-annotation:

  `
    \$hello:
      println! "Hello, world!"

    hello!

  Let's look at one a bit more complex example:

  `
    greet! "Fred"
    greet!

    \$greet: (name = undefined)
      if
	name.is_defined:
	  println! "Hello, @(name)!"
	:
	  println! "Hi!"

  The function *greet* is called with an IO-annotation. This means that it can perform input/output-operations.

  The function *greet* calls the function *if* which has no explicit IO-annotation. This would prevent performing input/output-operations in its then- or else-part.

  The reason the above code works, is "implicit IO-annotation inheritance":

  NOTE: If a function call has at least one argument that is a function-literal that contains at least one function call with IO-annotation then the outer function call is itself *implicitely* annotated as a function call.

  Example:

  `
    do: println! "Hello, world!"

  is implicitely annotated like it had been written as

  `
    do!: println! "Hello, world!"

  This implicit annotation works recursively. So

  `
    do: do: println! "Hello, world!"

  is implicitely annotated like it had been written as

  `
    do!: do!: println! "Hello, world!"

Meta-Instructions

  *Meta-instructions* are used to combine source code modules into application programs or libraries and to manage namespaces.

  Meta-instructions are always located at the start of a source code module, before any other statements.

  Requiring Modules

    The `require`-instruction is used to include a specific source code module into an application or library.

    The syntax is streightforward:

    `
      <require *module_name*\>

    The *module_name* ist the *filename* of the source code module without the ".fky"-extension.

    If the filename starts with a dot-character (".") then the filename is relative to the requiring module's directory.

    If the filename starts with a letter then the filename specifies a module in a library. The absolute location of library files is system dependent. The environment variable `FUNKY_LIBRARY_PATH` can be used to overwrite this system dependent location and to use one's own version of library modules.

    The rules for naming source code files are the same as the rules for naming identifiers.

    Some examples:

    `
      <require basic/stdlib\>

    `
      <require ./my_tools\>

    If an application program (not a library) does not explicitly use "require" to include at least a single module then the module "`basic/stdlib`" is automatically included.

    In Funky it's common that only the main module of an application program requires other modules. The Funky standard libraries *do not* require other libraries by themselves!

    As an exception there are special library modules that require a set of other modules, e,g. "`basic/stdlib`".

    So the application writer can choose to use other implementations for functions than the default implementations supplied by the standard library.

  Managing Namespaces

    In Funky namespaces have two responsibilities:

    * defining symbols that can be accessed from other modules

    * version management

    Every *namespace* (and its major versions) needs to be declared exactly once in an application.

    It's an error to forget to declare a namespace or to declare a namespace twice.

    `
      <namespace *namespace*\>

    `
      <namespace *namespace*-*major*.*minor*\>

    `
      <namespace *namespace*-unstable\>

    An unspecified version number always defaults to "1.0".

    The version `unstable` is special and denotes the most current version that is still under development and functions defined with this version number can change their behaviour at any time without further notice.

    An *unstable* namespace should only be used for testing new functionality.

    There must be a namespace declaration for each major-version number of a namespace. The respective minor-version number declares the highest minor version that is available for the corresponding major version number.

    E.g.:

    `
      <namespace std-1.3\>
      <namespace std-2.1\>
      <namespace std-unstable\>

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

  When a namespaced identifier is *read* or *redefined* (not *defined*) then the version must not be specified. The version of used namespaced identifiers is set with the "`using`" meta-instruction.

  `
    <using *namespace*\>

  `
    <using *namespace*-*major*.*minor*\>

  `
    <using *namespace*-unstable\>

  For a single namespace each source code module can only contain *one* `using`-directive.

  So a module can *define* the same namespaced identifier in multiple namespace versions but can use only *one* version!

  Whenever a variable is redefined or read that is *not* locally defined and without the explicit use of a namespace the `using`-directive is used by the runtime linker to find the corresponding variable.

  It the runtime linker cannot resolve it unambigously it refuses to start the program and terminates with an appropriate error message.

  The version number for a specific namespace can be selected for the whole module using a `resolve`-directive:

  `
    <resolve *namespace*-*major*.*minor*\>

  `
    <resolve *namespace*-unstable\>

  To use a namespace under a different name an `alias`-directive can be used:

  `
    <alias *namespace_alias* = *namespace*\>

  `alias`-directives are used for variable definitions as well as for redefinitions and reads.

  `
    <namespace my_long_namespace\>

    <alias mln = my_long_namespace\>

    \$mln::twice: (body)
      body
      body

  is equivalent to

  `
    <namespace my_long_namespace\>

    \$my_long_namespace::twice: (body)
      body
      body

Remarks

  *Remarks* always start with a hash-tag-character ("#").

  Everything after the hash-tag until the end of the line is part of the remark.

  Consecutive **and** indented lines are also part of the remark!

  Examples:

  `
    \$x 1 # this is an end-of-line remark

  `
    \$y 2
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
      \$*function*:
	#
	  *remark*
	(
	  *parameters*
	)
	…

    or if the function has no parameter list:

    `
      \$*function*
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
      \$twice:
	(
	  body # the function to execute twice
	)
	…

    or

    `
      \$twice:
	(
	  body
	    #
	      the function to execute twice;
	      the function is called without any arguments

	)
	…

PART: Functional Programming

Quick Start

  Source Code Files

    Source code files that are referred from other Funky source code files must adhere to strict rules:

    * they must have the extension ".fky"

    * their name must consist of ASCII-letters, digits and underscores only

    * their name must start with a letter

    * their name must not end with an underscore

    * their name must not contain two consecutive underscores

    For source code files that are used as scripts, none of the above rules applies. They can be given any convenient name.

    All source code files must be UTF-8-encoded (ASCII is a subset of UTF-8) and must not start with a byte-order-marker.

    Line-feed-characters are used to terminate lines. The last line needs to be terminated, too.

    The tab-width is assumed to be 8 spaces.

    Tab-characters may only appear at the start of a line; they are not allowed within a line.

    Empty lines must not contain whitespace and whitespace at the end of a non-empty line is disallowed, too.

    Syntactic units are separated by exactly one space character.

    Other whitespace-characters (including carriage returns) are not allowed.

  Hello World

    Here is the Funky source code for the "classical" hello-world-program:

    `
      #!/usr/bin/env fkyrun

      print! "
	Hello, world!

Function Calls And the Stack

  Normal function calls

    Function calls make use of a *stack*.

    A *stack* is a data structure that grows and shrinks dynamically. When a function is called, a new *stack frame* is allocated on the stack. This frame contains the function's local variables including its parameters.

    An example:

    `
      f

      \$f:
	g
	…

      \$g: …


    At the start of the program the stack consists of a single frame reprenting the main program:

    [<>main]

    When the function "`f`" is called, a new frame (for "`f`") is allocated on the stack. The stack will now look like this:

    [<>main]
    [<>f]

    When "`f`" calls "`g`", a new frame (for "`g`") is allocated on the stack. The stack will now look like this:

    [<>main]
    [<>f]
    [<>g]

    When later on the function "`g`" returns, its frame is removed from the stack. The stack will now look exactly the same as before "`g`" was called:

    [<>main]
    [<>f]

    When "`f`" returns, its frame is removed from the stack. The only frame left on the stack is the one representing the main program:

  Tail Calls

    A *tail call* is a function call that is the last statement in a function. In this case the function call is optimized by the compiler. Instead of allocating a new stack frame, the current stack frame is replaced with
    the stack frame of the called function.

    When the called functions returns it will return its results to the caller of the caller.

    An example:

    `
      f \$x

      \$f:
	…
	g

      \$g:
	…
	-> 1

    When "`f`" is entered the stack will look like this:

    [<>main]
    [<>f]

    When "`f`" calls "`g`" in tail position, the stack frame of "`f`" is replaced with the stack frame of "`g`":

    [[

    [<>main]
    [<>f]

    | |
    ⇒
    | |

    [<>main]
    [<>g]

    ]]

    So there is no stack frame for "`f`" left. When "`g`" returns, it will return its results directly to the main program.

Control Flow

  Funky does not contain any builtin statements to change the flow of control. All control flow is implemented using functions.

  These functions are implemented as regular functions in the "basic" library.

  Conditional Execution

    Most conditional controls are based on boolean values.

    In Funky there is no "boolean" type because it wouldn't be of great help. Instead there are two types:

    * `std_types::true`

    and

    * `std_types::false`

    (The values "`std::true`" and "`std::false`" are the single "instances" of these types.)


    The most common statement in most programming languages is the "if"-statement.

    The "basic" library provides an "`if`"-function. Here's the implementation:

    `
      \$std::if ()

      \$std_types::true/std::if: (_condition then_part _else_part) then_part
      \$std_types::false/std::if: (_condition _then_part else_part) else_part

    That's it!

    The "`if`"-function takes three arguments:

    * a *condition*
    * a *then_part*
    * an *else_part*

    The *condition* is evaluated by the caller of the "`if`"-function. The "`if`"-function is implemented as a polymorphic function.

    The *then_part* and the *else_part* are functions, too.

    The implementation of the "`if`"-function for "`std_types::true`" simply calls the *then_part* and the implementation for "`std_types::false`" calls the *else_part*.

    The condition checking is reduced to a simple dispatch on the type of the condition.

    An example:

    `
      \$a 3
      \$b 4
      if
	a > b:
	  println! "a is greater than b"
	:
	  println! "a is not greater than b"

    In this example "`if`" is used as an IO-function and returns no result.

    Another example:

    `
      \$min: (a b)
	if
	  a < b
	  -> a
	  -> b

    In this example "`if`" is used as a regular function and returns a result (the lesser of the two values).

    "`if`" is not statement! So the following code makes no sense:

    `
      \$a 2
      \$b 4
      if
	*some_condition*:
	  !a 3
	:
	  !b 5
      println! a # always prints "2"
      println! b # always prints "4"

    The assignments to "`a`" and "`b`" within the then- and else-part are not visible outside the call to the "`if`"-function.

    If you really need such functionality you can write it this way:

    `
      \$a 2
      \$b 4
      if
	*some_condition*:
	  !a 3
	  print_a_and_b!
	:
	  !b 5
	  print_a_and_b!

      \$print_a_and_b:
	println! a
	println! b

    Functions like "`if_not`", "`not`", "`and`" or "`or`" are implemented in a similar way.

    More complex conditional functions like "`cond`" or "`case`" are implemented using the "`if`"-function.

  Looping

    In a pure functional programming language there are no loops. Instead looping is implemented using recursion.

    The "basic" library uses "anonymous" recursions to implement loops.

    The most common looping construct in Funky is the "`loop`"-function. Here's a very simplified implementation:

    `
      \$std::next undefined
      \$std::break undefined

      \$std::loop:
	(
	  body
	  finally = pass
	)
	!next body
	!break finally
	next!

    And here's an example of how to use it:

    `
      \$i 1
      loop
	:
	  if
	    i <= 10:
	      println! i
	      inc &i
	      next!
	    break
	:
	  println! "done"

    The "`loop`"-function takes two arguments:

    * the *body* of the loop
    * a *finally*-function that is executed after the last iteration of the loop

    The *body* is a function that is called for each "iteration" of the "loop". The tail-call at the end of the *body* must either call "`next!`" (to continue the loop) or "`break`" (to exit the loop).

    "`next!`" and "`break`" are two global variables that are set by each "loop" construct.

    Let's take a look how the execution actually works:

    Here's the initial stack:

    [<>main]

    When the "`loop`"-function is called, a new stack frame is allocated on the stack:

    [<>main]
    [<>loop]

    The "`loop`"-function calls the supplied `"body"`-function in tail position:

    [[

    [<>main]
    [<>loop]

    | |
    ⇒
    | |

    [<>main]
    [<>body]

    ]]

    Our "`body`"-function calls "`if`" in tail position:

    [[

    [<>main]
    [<>body]

    | |
    ⇒
    | |

    [<>main]
    [<>if]

    ]]

    When the if-condition is true, "`if`" calls its then-part

    `
      :
	println! i
	inc &i
	next!

    in tail position:

    [[

    [<>main]
    [<>if]

    | |
    ⇒
    | |

    [<>main]
    [<>then_part]

    ]]

    We don't care about the calls to "`println!`" and "`inc`".

    When "`inc`" returns, the "`then_part`" calls "`next`" in tail position. We remember that "`next`" was bound to our "`body`"-function by "`loop`".

    [[

    [<>main]
    [<>then_part]

    | |
    ⇒
    | |

    [<>main]
    [<>body]

    ]]

    These steps will be repeated until the if-condition is false.

    When the if-condition is false, "`if`" calls its else-part ("`break`") in tail position.

    The "`break`"-function was bound to our "`finally`"-function

    `
      :
	println! "done"

    by "`loop`".

    [[

    [<>main]
    [<>if]

    | |
    ⇒
    | |

    [<>main]
    [<>finally]

    ]]

    After "`finally`" has printed "`done`" it returns to the main program and the stack will look like this:

    [<>main]

    As you see, branching and looping heavily rely on tail calls.

    To enable the use of inner loops "`loop`" would have to take care about saving and restoring the old values of "`next`" and "`break`". This is quite complex. If you're interested in the details, take a look at the implementation of "`loop`" in the "basic" library.

    It's also possible to exit a function without calling "`break`" by returning a value:

    `
      \$sentence "This is a sentence."

      println! get_first_word(sentence)

      \$get_first_word: (text)
	\$i 1
	\$n length_of(text)
	loop:
	  if
	    i > n:
	      if
		n == 0
		-> undefined
		-> text
	    :
	      if
		text(i) == ' '
		-> range(text 1 i-1)
		:
		  inc &i
		  next!

  Programming Style

    The biggest difference to conventional control flow is the fact that a "conditional statement" or a "loop" that have no results must be the last statement in a function.

    There is only one exception to this rule: It might make sense to call "Output"-functions just for their "side effects".

    A conditional as well as a looping construct can return results, in which case the construct can be used as a regular function.

    `
      \$a 3
      \$b 5
      \$min if(a < b (-> a) -> b)

    This is the minimum number of necessary parentheses. If we ommit the parentheses around "(-> a)" then the "`if`"-function would be called with only two arguments:

    `
      a < b
      -> a -> b

    The second is a function that returns two values:

    * the integer value 3
    * a function that returns the contents of the variable "`b`"

    Here an example with a loop:

    `
      # compute the sum 1 .. 10
      \$i 0
      \$sum 0
      loop !sum:
	inc &i
	if
	  i <= 10:
	    plus &sum i
	    next
	  -> sum

    The variables "`i`" and "`sum`" are defined outside of the loop.

    When the loop is called it "inherits" the variables "`i`" and "`sum`" and their current values from the caller.

    When "`next`" is called the loop is called recursively and the variables "`i`" and "`sum`" and their current values are again inherited from the caller (the previous iteration of the loop).

    When the loop finally returns the value of "`sum`" from the last iteration of the loop is returned and stored in the caller's version of the variable "`sum`".

Collections

  There are three builtin data collections in Funky:

  * objects
  * tuples
  * lists

  More complex data collections are implemented using these three data collections. The "basic" library provides a range of sets and tables:

  * key_order_set
  * insert_order_set
  * hash_set
  * key_order_table
  * insert_order_table
  * hash_table

  They are all implemented using tree structures.

  Let's see how to implement a (simplified) "`key_order_table`" as an unbalanced (for simplicity) binary tree.

  First we need a type for the table and a type for the table's nodes:

  `
    \$std_types::key_order_table std_types::table
    \$table_node std_types::object

  The type for the table has to be exported to be available to other modules.

  To export a symbol it must be placed in a *namespace*. The standard libraries use the namespace "`std_types`" for all exported types.

  To "derive" a new type from an existing one the existing type is simply used as the initial value for the new type.

  To share behaviour between different kinds of tables we use a common basetype for all tables: "`std_types::table`". We do not make use of any shared behaviour in this example and could have used "`std_types::object`" as basetype for the table.

  The type for the table's nodes is an implementation detail and is not exported.

  Next we define some attributes for the table type:

  `
    \$item_count_of ()
    \$items_of ()

    \$std_types::key_order_table.item_count_of 0
    \$std_types::key_order_table.items_of table_node

  The polymorphic functions "`item_count_of`" and "`items_of`" are private to the "`key_order_table`" type and are not exported.

  We also implement these two polymorphic functions as attributes for our table type. So each "`key_order_table`" object will contain two slots:

  * one for the item count
  * one for the items of the table

  Now let's define the attributes for the table's nodes:

  `
    \$key_of ()
    \$value_of ()
    \$left_of ()
    \$right_of ()

    \$table_node.key_of undefined
    \$table_node.value_of undefined
    \$table_node.left_of undefined
    \$table_node.right_of undefined

  There is no need to export the polymorphic functions "`key_of`", "`value_of`", "`left_of`" and "`right_of`".

  The four polymorphic functions are implemented as attributes for the "`table_node`" type. So each "`table_node`" object will contain four slots:

  * one for the key
  * one for the value
  * one for the left child
  * one for the right child

  Our data structures are now complete.

  The most important function is the *type function* that allows retrieving and setting the table's items.

  The table acts as a function that takes a key and returns the corresponding value or, if we add a second argument, sets the value for the given key.

  Let's define the type function for the "`key_order_table`" type:

  `
    \$NONE .

    \$std_types::key_order_table/:
      (
	myself^
	key
	value = NONE
      )
      …

  To define a type function we do not supply a method name but instead follow the "/"-symbol immediately with the ":" that starts the function definition.

  The first "parameter" is special. We assign the type function's object to the variable "`myself`". This can be done for any function but is especially useful for type functions. The type of "`myself`" is therefor "`std_types::key_order_table`". To mark a parameter to hold the type function's object we append a "^" to the parameter's name.

  The first real parameter is the key used to retrieve or set the value.

  The second parameter is the value to be set. If this parameter is omitted then the value for the given key is retrieved. We assign the default value "`NONE`" to this parameter. "`NONE`" is a unique item we defined and which is unknown to everybody else. So when "`value`" is "`NONE`" we know that the caller did not supply a value and we should retrieve the value for the given key.

  Now we can start the implementation of the type function:

  `
    \$std_types::key_order_table/:
      (
	myself^
	key
	value = NONE
      )
      \$items items_of(myself)
      if
	value == NONE
	-> retrieve(items key)
	:
	  if
	    value.is_defined:
	      insert &items \$was_updated key value
	      !myself.items_of items
	      if
		was_updated
		-> myself
		-> myself(.item_count_of item_count_of(myself)+1)
	    :
	      remove &items \$was_removed key
	      if
		was_removed
		->
		  myself
		    .items_of items
		    .item_count_of item_count_of(myself)-1
		-> myself

  The first thing we do is to retrieve the items of the table. The items are stored in the "`items_of`" attribute of the table.

  Then we check if the caller supplied a value. If not we call the "`retrieve`" function to retrieve the value for the given key. We will define the "`retrieve`" function later.

  If the caller supplied a value we check if the value is defined. If the value is defined we call the "`insert`" function to insert the key/value pair into the table. We will define the "`insert`" function later.

  We have to consider two cases:

  * the key is already in the table
  * the key is not in the table

  If the key is already in the table then the "`insert`" function will return "`true`" as its second result which is assigned to the variable "`was_updated`". In this case we do not change the item count of the table.

  Otherwhise the "`insert`" function will return "`false`" and the item count of the table is incremented by one.

  If the value is not defined we call the "`remove`" function to remove the key/value pair from the table. We will define the "`remove`" function later.

  We again have to consider two cases:

  * the key is in the table
  * the key is not in the table

  If the key is in the table then the "`remove`" function will return "`true`" as its second result which is assigned to the variable "`was_removed`". In this case we udpate the items of the table and decrement the item count of the table by one.

  Otherwhise the "`remove`" function will return "`false`" and there's no need to change anything.

  Now let's define the "`retrieve`" function:

  `
    \$retrieve: (items key)
      if
	items.is_defined:
	  if
	    key_of(items) == key
	    -> value_of(items)
	    :
	      if
		key > key_of(items)
		-> retrieve(right_of(items) key)
		-> retrieve(left_of(items) key)
	-> undefined

  This is an implementation of a recursive search in a binary tree.

  If the items are defined (meaning the tree is not empty) we check if the key of the current node is equal to the key we are looking for. If so we return the value of the current node.

  Otherwise we will continue the search in the left or right subtree depending on the value of the key.

  The next function we need is the "`insert`" function:

  `
    \$insert: (items key value)
      if
	items.is_defined:
	  if
	    key_of(items) == key
	    -> items(.value_of value) true
	    :
	      if
		key > key_of(items):
		  insert &items.right_of \$was_updated key value
		  -> items was_updated
		:
		  insert &items.left_of \$was_updated key value
		  -> items was_updated
	-> table_node(.key_of key .value_of value) false

  Let's take a closer look at the "`insert`" function.

  If the items are defined (meaning the tree is not empty) we check if the key of the current node is equal to the key we are looking for. If so we update the value of the current node and return the updated node and "`true`" to inform the caller that the value was updated.

  Otherwise we will continue the search in the left or right subtree depending on the value of the key.

  We must update our node with the new subtree returned from the recursive call to "`insert`" and we must return the updated node as well as the information whether the value was updated or inserted in the recursive call.

  If the items are not defined (meaning the tree is empty) we create a new node with the given key and value and return the new node and "`false`" to inform the caller that the value inserted and not updated.

  The last function we need is the "`remove`" function. This is the most complicated one because we might need to rearrange the tree.

  `
    \$remove: (items key)
      if
	items.is_defined:
	  if
	    key_of(items) == key:
	      if
		left_of(items).is_defined:
		  if
		    right_of(items).is_defined:
		      #
			the node to be removed has two children
			find the node with the smallest key in the right subtree
			and replace the node to be removed with this node
		      \$first_node get_first_node(right_of(items))
		      remove &items.right_of key_of(first_node) \$_was_removed
		      ->
			items
			  .key_of key_of(first_node)
			  .value_of value_of(first_node)
			true
		    :
		      #
			the node to be removed has only a left child
			replace the node to be removed with its left child
		      -> left_of(items) true
		:
		  if
		    right_of(items).is_defined:
		      #
			the node to be removed has only a right child
			replace the node to be removed with its right child
		      -> right_of(items) true
		    :
		      #
			the node to be removed has no children
		      -> undefined true
	    :
	      if
		key > key_of(items):
		  remove &items.right_of key \$was_removed
		  -> items was_removed
		:
		  remove &items.left_of key \$was_removed
		  -> items was_removed
	-> items false

  The "`remove`" function is implemented in a similar way as the "`insert`" function.

  If the items are defined (meaning the tree is not empty) we check if the key of the current node is equal to the key we are looking for. If so we have to remove the current node which can be complicated if the current node has one or two children.

  If the current node has only one child we can simply replace the current node with its child.

  If the current node has two children we have to find the node with the smallest key in the right subtree and replace the current node with this node. (We could as well find the node with the largest key in the left subtree and replace the current node with this node.)

  We must not forget to remove the node we replaced the current node with from the right subtree.

  If the key of the current node is not equal to the key we are looking for we will continue the search in the left or right subtree depending on the value of the key.

  If our node is empty (no items) we return the empty node and "`false`" to inform the caller that the value was not removed.

  The "`remove`" function is not complete yet. We still need to define the "`get_first_node`" function:

  `
    \$get_first_node: (items)
      if
	left_of(items).is_defined
	-> get_first_node(left_of(items))
	-> items

  The "`get_first_node`" function is a simple recursive search for the node with the smallest key in a binary tree.

  If the left child of the current node is defined we will continue the search in the left subtree otherwise we the current node is the node with the smallest key and we return it.

  The "basic" library provides a wide range of methods for all kinds of tables, which we are not going to implement here.

  A very simple example:

  `
    \$std_types::key_order_table/length_of: (self) -> item_count_of(self)

  We could have used "`length_of`" as the attribute name and omitted the definition of "`length_of`" above but then an external user of our table type could manipulate the length of a table by simply setting the "`length_of`" attribute to an arbitrary value!

Input/Output

  All input/output-operations in Funky are based on the POSIX-API.

  Pure functions clearly cannot perform input/output-operations because reading from a file or writing to a file is a "side effect".

  So these functions are implemented as IO-functions.

  To call an IO-function IO-access-rights are required and the function name must be suffixed with an exclamation mark.

  The "basic" library provides a set of functions that directly resembles the POSIX-API.

  Here's how to create a file:

  `
     open! \$fd "hello.txt" "w+"
     write_to! fd "Hello, World!@nl;"
     close! fd

  For this to work we must have IO-access rights. The top-level statements of the main module always start with IO-access rights, so this should work.

  Our minimal test program does not care about errors.

  The "open" function resembles the "`fopen`"-function from the C-library but it is based on the POSIX "`open`"-function. The "mode"-parameter works similar to `fopen`". It does not return an abstraction of a buffered stream (like "`fopen`") but a file descriptor.

  ATTENTION: IO-functions must always be called in procedure call style.

  The following is not valid Funky syntax:

  `
    \$fd open!("hello.txt" "w+")

  "`write_to!`" works similar to the "`fwrite`"-function from the C-library but its parameters are a lot simpler (a file descriptor and a string).

  ATTENTION: The string must not contain any codepoints with values greater than 255. (To stay on the save side, the output string is best converted to UTF-8 before writing it to a file.)

  If the output device cannot handle all the data at once, "`write_to!`" will block until all the data has been written.

  There is also a "`write`"-function. This function behaves exactly the same as the POSIX function of the same name. It will return the number of bytes that have been written. If the output device cannot handle all the data at once the function will return the number of bytes that have been written which will be less than the length of the string passed to the function. It's then up to the caller to write the remaining data.

  Finally the "`close!`"-function is called to close the file.

  Not let's try again with naive error handling:

  `
    open! \$fd "hello.txt" "w+"
    on fd.is_an_error:
      eprint! "
	Error: Failed to create file "hello.txt"!
      exit! EXIT_FAILURE
    try \$err: write_to! fd "Hello, World!@nl;"
    on err.is_an_error:
      eprint! "
	Error: Failed to write to file "hello.txt"!
      exit! EXIT_FAILURE
    try \$err: close! fd
    on err.is_an_error:
      eprint! "
	Error: Failed to close file "hello.txt"!
      exit! EXIT_FAILURE

  The "`open!`"-function returns an error object if it fails. The "`is_an_error`"-method is used to check if the result is an error object.

  The "`write_to!`"- and the "`close!`"-functions normally do not return anything. But in case of an error they return an error object.

  The "`try`"-function is used to call functions that normally do not return anything but may return an error object. The "`try`"-function itself returns either "`std::undefined`" or the error object returned by the function.

  To explicitly check each call for errors is a lot of work, makes the code hard to read and is error prone.

  So let's try again with a much simpler approach:

  `
    try \$err:
      open! \$fd "hello.txt" "w+"
      write_to! fd "Hello, World!@nl;"
      close! fd
    on err.is_an_error:
      eprint! "
	Error: Failed to create file "hello.txt"!
	       (@(err.to_error_message_string))

  This will catch all errors that might happen when creating, writing to or closing the file. The method "`to_error_message_string`" is used to convert the error object to a string that contains a human readable error message.

  How does this work?

  In case of error "`open!`" will store an error object in the variable "`fd`". When then "`write_to!`" (which is a method dispatched on the type of "`fd`") is called it will attempt to call an (unknown) method on an error object. All methods on error objects that are not explicitly implemented will return the error object itself. (This is called error propagation.)

  If "`write_to!`" or "`close!`" return an error object then this will cause a "too many results"-error because the caller expected no results at all but got a single result (the error object). Here again error propagation will ensure that the original error object (produced by "`write_to!`" or "`close!`") is returned to the caller which is the "`try`"-function.

  Concentrating IO-Operations

    It is bad style to spread IO-calls all over the code. Instead IO-calls should be collected in a few places.

    Example:

    `
      load! \$data input_filename
      process \$result data
      save! output_filename data

    There is no need to handle errors explicitly when calling IO-functions. Errors will never be silently ignored. If not handled by the caller, errors will eventually be propagated to the caller's caller and so on until they are handled or, if not handled, will be caught by the runtime system and will terminate the program with an appropriate error message.

    Do not scatter your programs with error handling code. Handle errors at a level where it makes sense.

    But interactive programs and servers applications pose more challenges for handling IO. They are steadily receiving and sending data. For such applications Funky provides the "IO"-object.

  Handling IO with IO-Objects

    An "IO"-object delegates IO-operations. Instead of performing IO-operations directly, an IO-request is added to the "IO"-object.

    Direct IO:

    `
      write! *file_descriptor* *data*

    Using an "IO"-object:

    `
      \$io std_types::io

      write &io *file_descriptor* *data*

    We need no IO-access rights to add a request to an "IO"-object. We can add as many requests as we want.

    To finally perform the IO-operations the "`get_events`"-function is called. This function performs all pending IO-operations and returns a list of newly arrived low-level input-events.

    `
      get_events &io \$events

    To receive input-events we must register which file-descriptors we are interested in.

    To register reading from the standard input:

    `
      start_reading_from &io STDIN_FILENO

    Here is a complete example:

    `
      \$io std_types::io

      start_reading_from &io STDIN_FILENO
      get_events! &io \$events
      debug::dump 3 \`events

    Let's press the "HOME"-key followed by "ENTER".

    Output:

    `
      events:
	list
	  tuple
	    std::READ
	    <file_descriptor 0>
	    "@0x1b;[H@0xa;"

    Each event is a tuple of

    * the event type
    * an *id* (e.g. a file-descriptor)
    * the event data
    * some application defined context (optional)

    The sequence "`@0x1b;[H@0xa;`" is the raw input data read from the standard input. It denotes the two key-presses "HOME" ("ESC[H") and "ENTER" ("LF").

    (To receive key presses immediately without waiting for the "ENTER"-key, the terminal must be set to "raw"-mode.)

    Most applications will not want to deal with low-level input data to process terminal input events like key-presses or mouse-clicks. Instead they will want to receive a list of high-level input events.

    `
      <require basic/stdlib>
      <require terminal/terminal>

      \$io std_types::io

      start_reading_from &io STDIN_FILENO
      register_handlers &io STDIN_FILENO READ = create_terminal_events
      get_events! &io \$events
      handle_events &io &events
      debug::dump 3 \`events

    First of all we have to "require" the "terminal"-module which defines the "`create_terminal_events`"-function.

    As soon as we require one module explicitly, we also must require the "basic/stdlib"-module explicitly.

    We register the "`create_terminal_events`"-function as a handler for "`READ`"-events on standard input. This handler will convert low-level input events into high-level input events.

    To call (all) registered handlers to preprocess events we call the "`handle_events`"-function. Like "`get_events`" this function does not need IO-access rights, too. It can manipulate the "IO"-object and remove or add events.

    On the same input we will now receive:

    `
      events:
	list
	  tuple
	    std::KEY_PRESS
	    <file_descriptor 0>
	    std::HOME
	  tuple
	    std::KEY_PRESS
	    <file_descriptor 0>
	    std::CTRL_J

    (The ENTER-key cannot be distinguished from the CTRL-J-key.)

PART: The Libraries

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

    an object that stores a function definition

  Inline Expression =

    an expression that fits completely on a single line

  Literal =

    describes a simple constant like a string but also complete functions

  Method =

    a function stored in an object's type used to implement a polymorphic function

  Multi-Line Expression =

    an expression that spreads over multiple lines

  Object =

    a value with its associated type-function, attributes and methods

  Parameter =

    where the callee stores the caller's arguments

  Polymorphic Function =

    a function to be implemented differently for different objects

  Redefinition =

    an existing variable is bound to another value

  Result =

    results are passed from the callee to the caller

  Slot =

    stores an attribute within an object

  Statement =

    a function call or an attribute (re)definition

  String Interpolation =
    looks like a literal, but is a call to the string-constructor function

  Top-Level =

    everything that is not indented and therefor on the outermost level

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
