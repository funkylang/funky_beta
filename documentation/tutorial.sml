TITLE: Funky Tutorial

Hello World

  Here is the source code for the "classical" hello-world-program:

  `
    #!/usr/bin/env fkyrun

    print! "
      Hello, world!

  The expression

  `
    "
      Hello, world!

  is a *multi-line string literal*. A multi-line string literal always starts with a double quote at the end of a line. All indented lines that follow are part ot the string literal.

  The newline-character at the end of each line is also included in the string.

  We could have written the string also this way:

  `
    "Hello, world!@nl;"

  NOTE: The `@nl;` represents the newline character.


Text Adventure

  Introduction

    A text adventure is a classical adventure game. It displays information in text form and the user enters commands via keyboard.

    The user moves from room to room and performs some actions.

  A First Room

    Let's create a room first:

    ``
      #!/usr/bin/env fkyrun

      $room std_types::object

    `std_types::object` is the direct or indirect prototype for most objects.

    Currently our room holds no information at all.

    To add an *attribute* we must first define it:

    ``
      #!/usr/bin/env fkyrun

      $name_of (!)

      $room std_types::object

    `$name_of (!)` defines an *attribute* with the name `name_of`. Attribute names are usually suffixed with `_of`.

    Now we can name our room:

    ``
      #!/usr/bin/env fkyrun

      $name_of (!)

      $room
	std_types::object
	  .name_of "entrance hall"

    Next we write some code to display our current position - assuming we're in the "entrance hall":

    ``
      #!/usr/bin/env fkyrun

      $name_of (!)

      $room
	std_types::object
	  .name_of "entrance hall"

      print! "
	You`re in the @(name_of(room)).

    The `print` function prints its argument(s) to the standard output - in our case the terminal window.

    The expression

    `
      "
	You`re in the @(name_of(room)).

    contains a so-called *string escape*:

    `
      @(name_of(room))

    It evaluates the function `name_of(room)`and inserts it into the string.

    Because `name_of(room)` equals `entrance hall` the resulting string is

    `
      "
	You`re in the entrance hall.

  More Rooms

    Let's add another room:

    `
      #!/usr/bin/env fkyrun

      $name_of (!)

      $rooms
	list
	  std_types::object
	    .name_of "entrance hall"
	  std_types::object
	    .name_of "library"

      print! "
	You`re in the @(name_of(rooms(2))).

    Now we have two rooms. For the start we put the rooms in a *list* and we printed the second room.

    But it is very inconvenient to associate rooms with numbers. We better use a table and associate some kind of *id* with each room:

    `
      #!/usr/bin/env fkyrun

      # Room Ids

      $ENTRANCE_HALL .
      $LIBRARY .

      $name_of (!)

      $rooms
	hash_table
	  =
	    ENTRANCE_HALL
	    std_types::object
	      .name_of "entrance hall"
	  =
	    LIBRARY
	    std_types::object
	      .name_of "library"

      print! "
	You`re in the @(name_of(rooms(LIBRARY))).

    Okay, this is not easy to grasp without further explanations:

    First, we *define* our room ids:

    `
      $ENTRANCE_HALL .
      $LIBRARY .

    The dot is a special literal. Each dot stands for a *unique* value. A
    *unique value* is guaranteed to be different to any other object.

    The only operation available for *unique values* is comparison for (in)equality.

    If we used strings instead then misspellings of *room ids* could only be detected at runtime. When using *unique items* the compiler will report any use of an undefined *id*.

    The second thing looking "a bit" strange is:

    `
      =
	ENTRANCE_HALL
	std_types::object
	  .name_of "entrance hall"

    If an expression like

    `
      a + b

    does not fit on a single line, you must write in in an alternative, multi-line form

    `
      +
	a
	b

    with the operator prefixing its operands!

    So

    `
      =
	x
	y

    means

    `
      x = y


    NOTE: This is not an assignment!

    This is called a *key-value-pair*, a kind of *tuple* consisting of two fields: a *key* and a *value*. Here we use *key-value-pairs* to associate our room ids (`ENTRANCE_HALL` and `LIBRARY`) with the respective room objects.

    We also replaced the *list* with a *table* - in our case a *hash table*. The order of items in a *hash table* is arbitrary. But *hash tables* allow for fast access of items and the do not need their keys to be sortable.

    IMPORTANT: *Unique items* can only be compared for equality; there is no ordering defined for *unique items*.

    A table is initialized with any number of *key-value-pairs*.

    To retrieve a specific item of a *table* we need to specify a *key* - in our case a *room id*:

    `
      rooms(LIBRARY)

  Connecting rooms

    Now we need to connect our two rooms. First we define some more attributes:

    `
      $north_of (!)
      $south_of (!)

    Now we can add connections to our rooms:

    `
      $rooms
	hash_table
	  =
	    ENTRANCE_HALL
	    std_types::object
	      .name_of "entrance hall"
	      .north_of LIBRARY
	  =
	    LIBRARY
	    std_types::object
	      .name_of "library"
	      .south_of ENTRANCE_HALL

    To be able to test our tiny "adventure" we need the help of a player who moves around. So let's add a simple user interface:

    `
      #!/usr/bin/env fkyrun

      $ENTRANCE_HALL .
      $LIBRARY .

      $name_of (!)
      $north_of (!)
      $south_of (!)

      $rooms
	hash_table
	  =
	    ENTRANCE_HALL
	    std_types::object
	      .name_of "entrance hall"
	      .north_of LIBRARY
	  =
	    LIBRARY
	    std_types::object
	      .name_of "library"
	      .south_of ENTRANCE_HALL

      $player_location ENTRANCE_HALL

      loop:
	print! "
	  You`re in the @(name_of(rooms(player_location))).
	readln! $input
	case input
	  "n":
	    $new_location north_of(rooms(player_location))
	    if
	      new_location.is_defined:
		!player_location new_location
		next!
	      next
	  "s":
	    $new_location south_of(rooms(player_location))
	    if
	      new_location.is_defined:
		!player_location new_location
		next!
	      next
	  "q":
	    terminate!
	  next

  Adding Items

    `
      #!/usr/bin/env fkyrun

      <namespace adv_types>

      # Room Ids

      $ENTRANCE_HALL .
      $LIBRARY .

      # Item Ids

      $RED_KEY .
      $SCREWDRIVER .

      # Room Attributes

      $name_of ()
      $items_of ()
      $north_of ()
      $east_of ()
      $south_of ()
      $west_of ()

      # Rooms

      $adv_types::room std_types::object

      $adv_types::room.items_of empty_insert_order_set
      $adv_types::room.north_of undefined
      $adv_types::room.east_of undefined
      $adv_types::room.south_of undefined
      $adv_types::room.west_of undefined

      $rooms
	hash_table
	  =
	    ENTRANCE_HALL
	    adv_types::room
	      .name_of "entrance hall"
	      .items_of insert_order_set(RED_KEY SCREWDRIVER)
	      .north_of LIBRARY
	  =
	    LIBRARY
	    adv_types::room
	      .name_of "library"
	      .south_of ENTRANCE_HALL

      # Items

      $items
	hash_table
	  =
	    RED_KEY
	    std_types::object
	      .name_of "red key"
	  =
	    SCREWDRIVER
	    std_types::object
	      .name_of "screwdriver"

      # Main

      create_item_lookup_table $item_name_to_id

      $player_location ENTRANCE_HALL # the room id of the player's current location
      $inventory empty_insert_order_set # a set of item ids

      loop:
	$room rooms(player_location)
	print! "
	  You`re in the @(name_of(room)).
	$contents items_of(room)
	for_each contents
	  : (item)
	    print! "
	      Here is a @(name_of(items(item))).
	    next!
	  pass
	readln! $input
	$action input .truncate_from. ' '
	$object_name input .behind. ' '
	case action
	  "n":
	    $new_location north_of(room)
	    if
	      new_location.is_defined:
		!player_location new_location
		next!
	      next
	  "s":
	    $new_location south_of(room)
	    if
	      new_location.is_defined:
		!player_location new_location
		next!
	      next
	  "take":
	    $id item_name_to_id(object_name)
	    if
	      id.is_defined:
		!rooms(player_location).items_of(id) false # remove from room
		!inventory(id) true
		next!
	      next
	  "q":
	    terminate!
	  next

      $create_item_lookup_table:
	$lookup_table empty_hash_table
	for_each items
	  : (id item)
	    !lookup_table(name_of(item)) id
	    next
	  -> lookup_table

  Make It a Complete Adventure Game

    This task is up to you!

    You could

    * add more rooms

    * improve the messages

    * simplify the code

    * add an action to drop items

    * add actions to use items

    * ...
