#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std_types__generic_list___put = -1,
  func_std_types__generic_list___get = -2,
  num_2 = -3,
  minus_num_1 = -4,
  num_1 = -5,
  func_std_types__generic_list___pop = -6,
  minus_num_2 = -7,
  func_std_types__generic_list___truncate = -8,
  lambda_1 = -9,
  lambda_2 = -10,
  func_std_types__generic_list___append_or_error = -11,
  lambda_3 = -12,
  lambda_4 = -13,
  lambda_5 = -14,
  lambda_6 = -15,
  func_std__concatenate = -16,
  func_func = -17,
  func_std__concatenate_non_empty = -18,
  func_2_func = -19,
  lambda_7 = -20,
  lambda_8 = -21,
  lambda_9 = -22,
  lambda_10 = -23,
  func_std_types__generic_list___reverse = -24,
  lambda_11 = -25,
  lambda_12 = -26,
  func_std_types__generic_list___for_each = -27,
  func_iterate_1 = -28,
  lambda_13 = -29,
  lambda_14 = -30,
  func_iterate_2 = -31,
  lambda_15 = -32,
  lambda_16 = -33,
  lambda_break = -34,
  lambda_17 = -35,
  lambda_next = -36,
  lambda_18 = -37,
  lambda_2_next = -38,
  func_std_types__generic_list___map = -39,
  lambda_19 = -40,
  lambda_20 = -41,
  lambda_21 = -42,
  lambda_22 = -43,
  lambda_23 = -44,
  lambda_24 = -45,
  lambda_25 = -46,
  lambda_26 = -47,
  lambda_27 = -48,
  lambda_28 = -49,
  func_std_types__generic_list___map_or_error = -50,
  lambda_29 = -51,
  lambda_30 = -52,
  lambda_31 = -53,
  lambda_32 = -54,
  lambda_33 = -55,
  lambda_34 = -56,
  lambda_35 = -57,
  lambda_36 = -58,
  lambda_37 = -59,
  lambda_38 = -60,
  lambda_39 = -61,
  lambda_40 = -62,
  lambda_41 = -63,
  lambda_42 = -64,
  func_std_types__generic_list___std__reduce = -65,
  lambda_43 = -66,
  lambda_44 = -67,
  func_reduce = -68,
  lambda_45 = -69,
  lambda_46 = -70,
  func_std_types__generic_list___map_reduce = -71,
  lambda_47 = -72,
  lambda_48 = -73,
  lambda_49 = -74,
  lambda_50 = -75,
  lambda_51 = -76,
  lambda_52 = -77,
  lambda_53 = -78,
  lambda_54 = -79,
  lambda_55 = -80,
  lambda_56 = -81,
  lambda_57 = -82,
  lambda_58 = -83,
  lambda_59 = -84,
  lambda_60 = -85,
  lambda_61 = -86,
  lambda_62 = -87,
  lambda_63 = -88,
  lambda_64 = -89,
  lambda_65 = -90,
  lambda_66 = -91,
  lambda_67 = -92,
  lambda_68 = -93,
  func_std_types__generic_list___sort = -94,
  func_sort = -95,
  lambda_69 = -96,
  lambda_70 = -97,
  func_std_types__generic_list___intersection = -98,
  lambda_71 = -99,
  lambda_72 = -100,
  lambda_73 = -101,
  lambda_left = -102,
  lambda_74 = -103,
  lambda_75 = -104,
  func_std_types__generic_list___merge = -105,
  lambda_loop = -106,
  lambda_76 = -107,
  lambda_77 = -108,
  lambda_78 = -109,
  lambda_79 = -110,
  lambda_80 = -111,
  lambda_81 = -112,
  func_std_types__generic_list___zip = -113,
  lambda_82 = -114,
  lambda_83 = -115,
  lambda_84 = -116,
  lambda_85 = -117,
  lambda_86 = -118,
  lambda_87 = -119,
  lambda_88 = -120,
  lambda_89 = -121,
  func_std_types__generic_list___flatten = -122,
  func_std_types__list___flatten = -123,
  lambda_90 = -124,
  lambda_91 = -125,
  lambda_92 = -126,
  func_std_types__generic_list___dup = -127,
  num_0 = -128,
  lambda_93 = -129,
  lambda_94 = -130,
  lambda_95 = -131,
  lambda_96 = -132,
  lambda_97 = -133,
  func_std_types__generic_list___contains = -134,
  lambda_98 = -135,
  lambda_99 = -136,
  lambda_100 = -137,
  lambda_101 = -138,
  func_std_types__generic_list___find_first = -139,
  lambda_102 = -140,
  lambda_103 = -141,
  lambda_104 = -142,
  lambda_105 = -143,
  lambda_106 = -144,
  lambda_107 = -145,
  lambda_108 = -146,
  lambda_109 = -147,
  func_std_types__generic_list___filter = -148,
  lambda_110 = -149,
  lambda_111 = -150,
  lambda_112 = -151,
  lambda_113 = -152,
  lambda_testitem = -153,
  lambda_114 = -154,
  lambda_115 = -155,
  lambda_116 = -156,
  lambda_117 = -157,
  lambda_118 = -158,
  func_filter = -159,
  lambda_119 = -160,
  lambda_120 = -161,
  lambda_121 = -162,
  lambda_122 = -163,
  func_std__levenshtein_distance = -164,
  lambda_123 = -165,
  lambda_124 = -166,
  lambda_125 = -167,
  lambda_126 = -168,
  lambda_127 = -169,
  lambda_128 = -170,
  lambda_129 = -171,
  lambda_130 = -172,
  func_std_types__list___to_list = -173,
  str_list = -174,
  func_std_types__list___serialize = -175,
  lambda_131 = -176,
  lambda_132 = -177,
  lambda_self = -178,
  string_1 = -179,
  string_2 = -180,
  string_3 = -181,
  lambda_133 = -182,
  func_std_types__list___deserializer_of = -183
};

enum {
  var__START = FIRST_VAR-1,
  var_basic_loops__self, // derived
  var_undefined, // extern
  var_std__assign, // extern
  var_std__is_a_generic_list, // attribute
  var_std__is_a_list, // attribute
  var_std_types__object, // extern
  var_is_a_generic_list, // extern polymorphic
  var_false, // extern
  var_is_a_list, // extern polymorphic
  var_std_types__generic_list, // extern
  var_true, // extern
  var_std_types__list, // extern
  var_put, // extern polymorphic
  var_list, // extern
  var_append, // extern
  var_get, // extern polymorphic
  var_range, // extern
  var_pop, // extern polymorphic
  var_truncate, // extern polymorphic
  var_83_0_self, // dynamic
  var_84_0_n, // dynamic
  var_length_of, // extern
  var_std__less, // extern
  var_if, // extern
  var_append_or_error, // extern polymorphic
  var_92_43_left, // dynamic
  var_92_48_right, // dynamic
  var_is_an_error, // extern
  var_separator_of, // attribute
  var_std__concatenate, // initialized
  var_std__concatenate_non_empty, // initialized
  var_109_8_myself, // dynamic
  var_109_16_left, // dynamic
  var_109_21_right, // dynamic
  var_is_empty, // extern
  var_reverse, // extern polymorphic
  var_124_0_self, // dynamic
  var_126_1_result, // dynamic
  var_empty_collection_of, // extern polymorphic
  var_push, // extern
  var_next, // extern
  var_from_to_by, // extern
  var_for_each, // extern polymorphic
  var_194_0_finally, // dynamic
  var_break, // extern
  var_basic_loops__from, // extern
  var_basic_loops__to, // extern
  var_basic_loops__body, // extern
  var_basic_loops__finally, // extern
  var_tuple, // extern
  var_std__not, // extern
  var_basic_loops__saved_context_of, // extern polymorphic
  var_parameter_count_of, // extern
  var_std__equal, // extern
  var_std__plus, // extern
  var_map, // extern polymorphic
  var_262_0_self, // dynamic
  var_263_0_function, // dynamic
  var_273_3_s, // dynamic
  var_273_5_e, // dynamic
  var_std__shift_right, // extern
  var_269_1_map, // dynamic
  var_282_3_s, // dynamic
  var_282_5_e, // dynamic
  var_map_or_error, // extern polymorphic
  var_306_0_self, // dynamic
  var_307_0_function, // dynamic
  var_317_3_s, // dynamic
  var_317_5_e, // dynamic
  var_313_1_map, // dynamic
  var_325_1_mapped_item, // dynamic
  var_331_3_s, // dynamic
  var_331_5_e, // dynamic
  var_339_1_mapped_item, // dynamic
  var_std__reduce, // extern polymorphic
  var_359_0_self, // dynamic
  var_360_0_function, // dynamic
  var_361_0_unit, // dynamic
  var_367_10_items, // dynamic
  var_368_1_n, // dynamic
  var_map_reduce, // extern polymorphic
  var_389_0_self, // dynamic
  var_390_0_map_function, // dynamic
  var_391_0_reduce_function, // dynamic
  var_392_0_unit, // dynamic
  var_result_count, // extern
  var_404_3_s, // dynamic
  var_404_5_e, // dynamic
  var_400_1_map_reduce, // dynamic
  var_417_3_s, // dynamic
  var_417_5_e, // dynamic
  var_439_3_s, // dynamic
  var_439_5_e, // dynamic
  var_435_1_map_reduce, // dynamic
  var_448_3_s, // dynamic
  var_448_5_e, // dynamic
  var_sort, // extern polymorphic
  var_462_0_compare, // dynamic
  var_less, // extern
  var_466_8_items, // dynamic
  var_467_1_n, // dynamic
  var_merge, // extern polymorphic
  var_intersection, // extern polymorphic
  var_474_40_left, // dynamic
  var_474_45_right, // dynamic
  var_std__or, // extern
  var_empty_list, // extern
  var_480_7_item, // dynamic
  var_contains, // extern polymorphic
  var_492_0_left, // dynamic
  var_493_0_right, // dynamic
  var_494_0_compare, // dynamic
  var_496_1_i, // dynamic
  var_497_1_j, // dynamic
  var_498_1_n, // dynamic
  var_499_1_m, // dynamic
  var_500_1_result, // dynamic
  var_new, // extern
  var_loop, // extern
  var_zip, // extern polymorphic
  var_530_0_left, // dynamic
  var_531_0_right, // dynamic
  var_533_1_n, // dynamic
  var_534_1_m, // dynamic
  var_535_1_k, // dynamic
  var_min, // extern
  var_536_1_result, // dynamic
  var_cond, // extern
  var_from_to, // extern
  var_flatten, // extern polymorphic
  var_557_3_item, // dynamic
  var_dup, // extern polymorphic
  var_575_0_self, // dynamic
  var_576_0_n, // dynamic
  var_584_1_dlst, // dynamic
  var_std__times, // extern
  var_case, // extern
  var_594_0_self, // dynamic
  var_595_0_item, // dynamic
  var_find_first, // extern polymorphic
  var_607_38_self, // dynamic
  var_607_43_test, // dynamic
  var_611_3_idx, // dynamic
  var_611_7_item, // dynamic
  var_619_3_item, // dynamic
  var_filter, // extern polymorphic
  var_626_34_self, // dynamic
  var_626_39_test, // dynamic
  var_633_1_good, // dynamic
  var_634_1_bad, // dynamic
  var_636_3_item, // dynamic
  var_650_10_s, // dynamic
  var_650_12_e, // dynamic
  var_std__levenshtein_distance, // initialized
  var_668_0_s, // dynamic
  var_669_0_t, // dynamic
  var_672_1_n, // dynamic
  var_673_1_v0, // dynamic
  var_int16_array, // extern
  var_674_1_v1, // dynamic
  var_681_3_i, // dynamic
  var_684_3_j, // dynamic
  var_assign, // extern
  var_to_list, // extern polymorphic
  var_serialization_tag_of, // extern polymorphic
  var_serialize, // extern polymorphic
  var_711_0_indent, // dynamic
  var_is_defined, // extern
  var_713_1_new_indent, // dynamic
  var_722_1_header, // dynamic
  var_std__string, // extern
  var_tabs_and_spaces, // extern
  var_update_if, // extern
  var_deserializer_of, // extern polymorphic
  var__END
};


static TAB_NUM t_func_std_types__generic_list___put[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 58_0_self
  LOCAL(4), // 59_0_item
  // list(item) self)
  var_list, 1, LOCAL(4), 1, LOCAL(1),
  // append(list(item) self)
  var_append, 2, LOCAL(1), LOCAL(3), 1, LOCAL(2),
  // -> append(list(item) self)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(61, 13),
  POS(61, 6),
  POS(61, 3)
};

static TAB_NUM t_func_std_types__generic_list___get[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 67_0_self
  // range(self 2 -1) self(1)
  var_range, 3, LOCAL(3), num_2, minus_num_1, 1, LOCAL(1),
  // self(1)
  LOCAL(3), 1, num_1, 1, LOCAL(2),
  // -> range(self 2 -1) self(1)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(69, 6),
  POS(69, 23),
  POS(69, 3)
};

static TAB_NUM t_func_std_types__generic_list___pop[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 75_0_self
  // range(self 1 -2) self(-1)
  var_range, 3, LOCAL(3), num_1, minus_num_2, 1, LOCAL(1),
  // self(-1)
  LOCAL(3), 1, minus_num_1, 1, LOCAL(2),
  // -> range(self 1 -2) self(-1)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(77, 6),
  POS(77, 23),
  POS(77, 3)
};

static TAB_NUM t_func_std_types__generic_list___truncate[] = {
  2, // locals
  2, // parameters
  var_83_0_self,
  var_84_0_n,
  // $len length_of(self)
  var_length_of, 1, var_83_0_self, 1, LOCAL(2),
  // n
  var_std__less, 2, var_84_0_n, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(86, 3),
  POS(88, 11),
  POS(87, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // range(self 1 n)
  var_range, 3, var_83_0_self, num_1, var_84_0_n, 1, LOCAL(1),
  //  range(self 1 n)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(89, 8),
  POS(89, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_83_0_self, TAIL_CALL,
  POS(90, 7)
};

static TAB_NUM t_func_std_types__generic_list___append_or_error[] = {
  1, // locals
  2, // parameters
  var_92_43_left,
  var_92_48_right,
  // is_an_error
  var_is_an_error, 1, var_92_43_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(94, 10),
  POS(93, 3)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  left
  LET, 1, var_92_43_left, TAIL_CALL,
  POS(95, 7)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // is_an_error
  var_is_an_error, 1, var_92_48_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_5, lambda_6, TAIL_CALL,
  POS(98, 15),
  POS(97, 7)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  right
  LET, 1, var_92_48_right, TAIL_CALL,
  POS(99, 11)
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // append(left right)
  var_append, 2, var_92_43_left, var_92_48_right, 1, LOCAL(1),
  //  append(left right)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(100, 12),
  POS(100, 11)
};

static TAB_NUM t_func_std__concatenate[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 104_20_separator
  // .separator_of separator)
  LET, -1, func_func, var_separator_of, LOCAL(2), LOCAL(1),
  // -> func(.separator_of separator)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(106, 11),
  POS(106, 3)
};

static TAB_NUM t_func_func[] = {
  5, // locals
  -3, // parameters
  MYSELF_PARAMETER, LOCAL(3), // 105_8_myself
  MANDATORY_PARAMETER, LOCAL(4), // 105_16_left
  MANDATORY_PARAMETER, LOCAL(5), // 105_21_right
  // separator_of(myself)) right
  var_separator_of, 1, LOCAL(3), 1, LOCAL(1),
  // append(left separator_of(myself)) right
  var_append, 2, LOCAL(4), LOCAL(1), 1, LOCAL(2),
  // append append(left separator_of(myself)) right
  var_append, 2, LOCAL(2), LOCAL(5), TAIL_CALL,
  POS(105, 50),
  POS(105, 38),
  POS(105, 31)
};

static TAB_NUM t_func_std__concatenate_non_empty[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 108_30_separator
  // .separator_of separator)
  LET, -1, func_2_func, var_separator_of, LOCAL(2), LOCAL(1),
  // -> func(.separator_of separator)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(118, 11),
  POS(118, 3)
};

static TAB_NUM t_func_2_func[] = {
  1, // locals
  -3, // parameters
  MYSELF_PARAMETER, var_109_8_myself,
  MANDATORY_PARAMETER, var_109_16_left,
  MANDATORY_PARAMETER, var_109_21_right,
  // is_empty
  var_is_empty, 1, var_109_16_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_7, lambda_8, TAIL_CALL,
  POS(111, 12),
  POS(110, 5)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  right
  LET, 1, var_109_21_right, TAIL_CALL,
  POS(112, 9)
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_109_21_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_9, lambda_10, TAIL_CALL,
  POS(115, 17),
  POS(114, 9)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  left
  LET, 1, var_109_16_left, TAIL_CALL,
  POS(116, 13)
};

static TAB_NUM t_lambda_10[] = {
  3, // locals
  0, // parameters
  // separator_of(myself)) right)
  var_separator_of, 1, var_109_8_myself, 1, LOCAL(1),
  // append(left separator_of(myself)) right)
  var_append, 2, var_109_16_left, LOCAL(1), 1, LOCAL(2),
  // append(append(left separator_of(myself)) right)
  var_append, 2, LOCAL(2), var_109_21_right, 1, LOCAL(3),
  //  append(append(left separator_of(myself)) right)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(117, 33),
  POS(117, 21),
  POS(117, 14),
  POS(117, 13)
};

static TAB_NUM t_func_std_types__generic_list___reverse[] = {
  1, // locals
  1, // parameters
  var_124_0_self,
  // $result empty_collection_of(self)
  var_empty_collection_of, 1, var_124_0_self, 1, var_126_1_result,
  // length_of(self) 1 -1
  var_length_of, 1, var_124_0_self, 1, LOCAL(1),
  // from_to_by length_of(self) 1 -1
  var_from_to_by, 5, LOCAL(1), num_1, minus_num_1, lambda_11, lambda_12, TAIL_CALL,
  POS(126, 3),
  POS(127, 14),
  POS(127, 3)
};

static TAB_NUM t_lambda_11[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 128_3_idx
  // self(idx)
  var_124_0_self, 1, LOCAL(2), 1, LOCAL(1),
  // push &result self(idx)
  var_push, 2, var_126_1_result, LOCAL(1), 1, var_126_1_result,
  // next
  var_next, 0, TAIL_CALL,
  POS(129, 20),
  POS(129, 7),
  POS(130, 7)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  result
  LET, 1, var_126_1_result, TAIL_CALL,
  POS(131, 7)
};

static TAB_NUM t_func_std_types__generic_list___for_each[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 192_0_self
  MANDATORY_PARAMETER, LOCAL(4), // 193_0_body
  var_next, var_194_0_finally,
  // $saved_context
  var_tuple, 7, var_next, var_break, var_basic_loops__from, var_basic_loops__to, var_basic_loops__self, var_basic_loops__body, var_basic_loops__finally, 1, LOCAL(5),
  // !basic_loops::from 1 # the first ...
  LET, 1, num_1, 1, var_basic_loops__from,
  // !basic_loops::to length_of(self) # ... and last index of the list
  var_length_of, 1, LOCAL(3), 1, var_basic_loops__to,
  // !basic_loops::self self
  LET, 1, LOCAL(3), 1, var_basic_loops__self,
  // !basic_loops::body body
  LET, 1, LOCAL(4), 1, var_basic_loops__body,
  // !basic_loops::finally finally
  LET, 1, var_194_0_finally, 1, var_basic_loops__finally,
  // !break: (myself^)
  LET, 1, lambda_break, 1, var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(5), var_break,
  // parameter_count_of(body) == 2:
  var_parameter_count_of, 1, LOCAL(4), 1, LOCAL(1),
  // parameter_count_of(body) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_17, lambda_18, IO_TAIL_CALL,
  POS(196, 3),
  POS(206, 3),
  POS(207, 3),
  POS(208, 3),
  POS(209, 3),
  POS(210, 3),
  POS(230, 3),
  POS(238, 4),
  POS(241, 5),
  POS(241, 5),
  POS(240, 3)
};

static TAB_NUM t_func_iterate_1[] = {
  2, // locals
  0, // parameters
  // basic_loops::to # another item available?
  var_std__less, 2, var_basic_loops__to, var_basic_loops__from, 1, LOCAL(1),
  // basic_loops::to # another item available?
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_13, lambda_14, IO_TAIL_CALL,
  POS(214, 28),
  POS(214, 28),
  POS(213, 5)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // basic_loops::self(basic_loops::from)
  var_basic_loops__self, 1, var_basic_loops__from, 1, LOCAL(1),
  // basic_loops::body! basic_loops::self(basic_loops::from)
  var_basic_loops__body, 1, LOCAL(1), IO_TAIL_CALL,
  POS(216, 28),
  POS(216, 9)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(219, 9)
};

static TAB_NUM t_func_iterate_2[] = {
  2, // locals
  0, // parameters
  // basic_loops::to # another item available?
  var_std__less, 2, var_basic_loops__to, var_basic_loops__from, 1, LOCAL(1),
  // basic_loops::to # another item available?
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_15, lambda_16, IO_TAIL_CALL,
  POS(223, 28),
  POS(223, 28),
  POS(222, 5)
};

static TAB_NUM t_lambda_15[] = {
  1, // locals
  0, // parameters
  // basic_loops::self(basic_loops::from)
  var_basic_loops__self, 1, var_basic_loops__from, 1, LOCAL(1),
  // basic_loops::body! basic_loops::from basic_loops::self(basic_loops::from)
  var_basic_loops__body, 2, var_basic_loops__from, LOCAL(1), IO_TAIL_CALL,
  POS(225, 46),
  POS(225, 9)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(228, 9)
};

static TAB_NUM t_lambda_break[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 230_9_myself
  // !finally basic_loops::finally
  LET, 1, var_basic_loops__finally, 1, var_194_0_finally,
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 7, var_next, var_break, var_basic_loops__from, var_basic_loops__to, var_basic_loops__self, var_basic_loops__body, var_basic_loops__finally,
  // finally!
  var_194_0_finally, 0, IO_TAIL_CALL,
  POS(231, 5),
  POS(232, 5),
  POS(232, 5),
  POS(236, 5)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // !next:
  LET, 1, lambda_next, 1, var_next,
  // iterate_2! # start the first iteration
  func_iterate_2, 0, IO_TAIL_CALL,
  POS(242, 7),
  POS(245, 7)
};

static TAB_NUM t_lambda_next[] = {
  0, // locals
  0, // parameters
  // !basic_loops::from basic_loops::from+1 # increase the list index
  var_std__plus, 2, var_basic_loops__from, num_1, 1, var_basic_loops__from,
  // iterate_2! # start the next iteration
  func_iterate_2, 0, IO_TAIL_CALL,
  POS(243, 9),
  POS(244, 9)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  // !next:
  LET, 1, lambda_2_next, 1, var_next,
  // iterate_1! # start the first iteration
  func_iterate_1, 0, IO_TAIL_CALL,
  POS(247, 7),
  POS(250, 7)
};

static TAB_NUM t_lambda_2_next[] = {
  0, // locals
  0, // parameters
  // !basic_loops::from basic_loops::from+1 # increase the list index
  var_std__plus, 2, var_basic_loops__from, num_1, 1, var_basic_loops__from,
  // iterate_1! # start the next iteration
  func_iterate_1, 0, IO_TAIL_CALL,
  POS(248, 9),
  POS(249, 9)
};

static TAB_NUM t_func_std_types__generic_list___map[] = {
  1, // locals
  2, // parameters
  var_262_0_self,
  var_263_0_function,
  // is_empty
  var_is_empty, 1, var_262_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_19, lambda_20, TAIL_CALL,
  POS(266, 10),
  POS(265, 3)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_262_0_self, TAIL_CALL,
  POS(267, 7)
};

static TAB_NUM t_lambda_20[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(function) == 2
  var_parameter_count_of, 1, var_263_0_function, 1, LOCAL(1),
  // parameter_count_of(function) == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // $map
  var_if, 3, LOCAL(2), lambda_21, lambda_25, 1, var_269_1_map,
  // length_of(self)
  var_length_of, 1, var_262_0_self, 1, LOCAL(1),
  // map 1 length_of(self)
  var_269_1_map, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(271, 11),
  POS(271, 11),
  POS(269, 7),
  POS(291, 13),
  POS(291, 7)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_22, TAIL_CALL,
  POS(272, 13)
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  2, // parameters
  var_273_3_s,
  var_273_5_e,
  // s < e:
  var_std__less, 2, var_273_3_s, var_273_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_23, lambda_24, TAIL_CALL,
  POS(275, 17),
  POS(274, 15)
};

static TAB_NUM t_lambda_23[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_273_3_s, var_273_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map(s m)
  var_269_1_map, 2, var_273_3_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map(m+1 e)
  var_269_1_map, 2, LOCAL(2), var_273_5_e, 1, LOCAL(3),
  // append
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(276, 23),
  POS(276, 19),
  POS(278, 21),
  POS(279, 25),
  POS(279, 21),
  POS(277, 19)
};

static TAB_NUM t_lambda_24[] = {
  3, // locals
  0, // parameters
  // self(s)))
  var_262_0_self, 1, var_273_3_s, 1, LOCAL(1),
  // function(s self(s)))
  var_263_0_function, 2, var_273_3_s, LOCAL(1), 1, LOCAL(2),
  // list(function(s self(s)))
  var_list, 1, LOCAL(2), 1, LOCAL(3),
  //  list(function(s self(s)))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(280, 36),
  POS(280, 25),
  POS(280, 20),
  POS(280, 19)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_26, TAIL_CALL,
  POS(281, 13)
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  2, // parameters
  var_282_3_s,
  var_282_5_e,
  // s < e:
  var_std__less, 2, var_282_3_s, var_282_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_27, lambda_28, TAIL_CALL,
  POS(284, 17),
  POS(283, 15)
};

static TAB_NUM t_lambda_27[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_282_3_s, var_282_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map(s m)
  var_269_1_map, 2, var_282_3_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map(m+1 e)
  var_269_1_map, 2, LOCAL(2), var_282_5_e, 1, LOCAL(3),
  // append
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(285, 23),
  POS(285, 19),
  POS(287, 21),
  POS(288, 25),
  POS(288, 21),
  POS(286, 19)
};

static TAB_NUM t_lambda_28[] = {
  3, // locals
  0, // parameters
  // self(s)))
  var_262_0_self, 1, var_282_3_s, 1, LOCAL(1),
  // function(self(s)))
  var_263_0_function, 1, LOCAL(1), 1, LOCAL(2),
  // list(function(self(s)))
  var_list, 1, LOCAL(2), 1, LOCAL(3),
  //  list(function(self(s)))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(289, 34),
  POS(289, 25),
  POS(289, 20),
  POS(289, 19)
};

static TAB_NUM t_func_std_types__generic_list___map_or_error[] = {
  1, // locals
  2, // parameters
  var_306_0_self,
  var_307_0_function,
  // is_empty
  var_is_empty, 1, var_306_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_29, lambda_30, TAIL_CALL,
  POS(310, 10),
  POS(309, 3)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_306_0_self, TAIL_CALL,
  POS(311, 7)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(function) == 2
  var_parameter_count_of, 1, var_307_0_function, 1, LOCAL(1),
  // parameter_count_of(function) == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // $map
  var_if, 3, LOCAL(2), lambda_31, lambda_37, 1, var_313_1_map,
  // length_of(self)
  var_length_of, 1, var_306_0_self, 1, LOCAL(1),
  // map 1 length_of(self)
  var_313_1_map, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(315, 11),
  POS(315, 11),
  POS(313, 7),
  POS(345, 13),
  POS(345, 7)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_32, TAIL_CALL,
  POS(316, 13)
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  2, // parameters
  var_317_3_s,
  var_317_5_e,
  // s < e:
  var_std__less, 2, var_317_3_s, var_317_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_33, lambda_34, TAIL_CALL,
  POS(319, 17),
  POS(318, 15)
};

static TAB_NUM t_lambda_33[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_317_3_s, var_317_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map(s m)
  var_313_1_map, 2, var_317_3_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map(m+1 e)
  var_313_1_map, 2, LOCAL(2), var_317_5_e, 1, LOCAL(3),
  // append_or_error
  var_append_or_error, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(320, 23),
  POS(320, 19),
  POS(322, 21),
  POS(323, 25),
  POS(323, 21),
  POS(321, 19)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // self(s))
  var_306_0_self, 1, var_317_3_s, 1, LOCAL(1),
  // $mapped_item function(s self(s))
  var_307_0_function, 2, var_317_3_s, LOCAL(1), 1, var_325_1_mapped_item,
  // is_an_error
  var_is_an_error, 1, var_325_1_mapped_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_35, lambda_36, TAIL_CALL,
  POS(325, 43),
  POS(325, 19),
  POS(327, 33),
  POS(326, 19)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  //  mapped_item
  LET, 1, var_325_1_mapped_item, TAIL_CALL,
  POS(328, 23)
};

static TAB_NUM t_lambda_36[] = {
  1, // locals
  0, // parameters
  // list(mapped_item)
  var_list, 1, var_325_1_mapped_item, 1, LOCAL(1),
  //  list(mapped_item)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(329, 24),
  POS(329, 23)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_38, TAIL_CALL,
  POS(330, 13)
};

static TAB_NUM t_lambda_38[] = {
  1, // locals
  2, // parameters
  var_331_3_s,
  var_331_5_e,
  // s < e:
  var_std__less, 2, var_331_3_s, var_331_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_39, lambda_40, TAIL_CALL,
  POS(333, 17),
  POS(332, 15)
};

static TAB_NUM t_lambda_39[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_331_3_s, var_331_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map(s m)
  var_313_1_map, 2, var_331_3_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map(m+1 e)
  var_313_1_map, 2, LOCAL(2), var_331_5_e, 1, LOCAL(3),
  // append_or_error
  var_append_or_error, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(334, 23),
  POS(334, 19),
  POS(336, 21),
  POS(337, 25),
  POS(337, 21),
  POS(335, 19)
};

static TAB_NUM t_lambda_40[] = {
  1, // locals
  0, // parameters
  // self(s))
  var_306_0_self, 1, var_331_3_s, 1, LOCAL(1),
  // $mapped_item function(self(s))
  var_307_0_function, 1, LOCAL(1), 1, var_339_1_mapped_item,
  // is_an_error
  var_is_an_error, 1, var_339_1_mapped_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_41, lambda_42, TAIL_CALL,
  POS(339, 41),
  POS(339, 19),
  POS(341, 33),
  POS(340, 19)
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  //  mapped_item
  LET, 1, var_339_1_mapped_item, TAIL_CALL,
  POS(342, 23)
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // list(mapped_item)
  var_list, 1, var_339_1_mapped_item, 1, LOCAL(1),
  //  list(mapped_item)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(343, 24),
  POS(343, 23)
};

static TAB_NUM t_func_std_types__generic_list___std__reduce[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_359_0_self,
  var_append, var_360_0_function,
  var_undefined, var_361_0_unit,
  // is_empty
  var_is_empty, 1, var_359_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_43, lambda_44, TAIL_CALL,
  POS(364, 10),
  POS(363, 3)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_361_0_unit, TAIL_CALL,
  POS(365, 7)
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  // reduce self
  func_reduce, 1, var_359_0_self, TAIL_CALL,
  POS(377, 7)
};

static TAB_NUM t_func_reduce[] = {
  2, // locals
  1, // parameters
  var_367_10_items,
  // $n length_of(items)
  var_length_of, 1, var_367_10_items, 1, var_368_1_n,
  // n >= 2:
  var_std__less, 2, var_368_1_n, num_2, 1, LOCAL(1),
  // n >= 2:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_45, lambda_46, TAIL_CALL,
  POS(368, 9),
  POS(370, 11),
  POS(370, 11),
  POS(369, 9)
};

static TAB_NUM t_lambda_45[] = {
  6, // locals
  0, // parameters
  // $m n >> 1
  var_std__shift_right, 2, var_368_1_n, num_1, 1, LOCAL(6),
  // range(items 1 m))
  var_range, 3, var_367_10_items, num_1, LOCAL(6), 1, LOCAL(1),
  // reduce(range(items 1 m))
  func_reduce, 1, LOCAL(1), 1, LOCAL(2),
  // m+1 -1))
  var_std__plus, 2, LOCAL(6), num_1, 1, LOCAL(3),
  // range(items m+1 -1))
  var_range, 3, var_367_10_items, LOCAL(3), minus_num_1, 1, LOCAL(4),
  // reduce(range(items m+1 -1))
  func_reduce, 1, LOCAL(4), 1, LOCAL(5),
  // function
  var_360_0_function, 2, LOCAL(2), LOCAL(5), TAIL_CALL,
  POS(371, 13),
  POS(373, 22),
  POS(373, 15),
  POS(374, 34),
  POS(374, 22),
  POS(374, 15),
  POS(372, 13)
};

static TAB_NUM t_lambda_46[] = {
  1, // locals
  0, // parameters
  // items(1)
  var_367_10_items, 1, num_1, 1, LOCAL(1),
  //  items(1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(375, 14),
  POS(375, 13)
};

static TAB_NUM t_func_std_types__generic_list___map_reduce[] = {
  2, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_389_0_self,
  MANDATORY_PARAMETER, var_390_0_map_function,
  var_append, var_391_0_reduce_function,
  var_undefined, var_392_0_unit,
  // result_count() == 2: # updates the list *and* returns the reduction
  var_result_count, 0, 1, LOCAL(1),
  // result_count() == 2: # updates the list *and* returns the reduction
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_47, lambda_58, TAIL_CALL,
  POS(395, 5),
  POS(395, 5),
  POS(394, 3)
};

static TAB_NUM t_lambda_47[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_389_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_48, lambda_49, TAIL_CALL,
  POS(397, 14),
  POS(396, 7)
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  //  self unit
  LET, 2, var_389_0_self, var_392_0_unit, TAIL_CALL,
  POS(398, 11)
};

static TAB_NUM t_lambda_49[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(map_function) == 2
  var_parameter_count_of, 1, var_390_0_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // $map_reduce
  var_if, 3, LOCAL(2), lambda_50, lambda_54, 1, var_400_1_map_reduce,
  // length_of(self)
  var_length_of, 1, var_389_0_self, 1, LOCAL(1),
  // map_reduce 1 length_of(self)
  var_400_1_map_reduce, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(402, 15),
  POS(402, 15),
  POS(400, 11),
  POS(429, 24),
  POS(429, 11)
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_51, TAIL_CALL,
  POS(403, 17)
};

static TAB_NUM t_lambda_51[] = {
  1, // locals
  2, // parameters
  var_404_3_s,
  var_404_5_e,
  // s < e:
  var_std__less, 2, var_404_3_s, var_404_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_52, lambda_53, TAIL_CALL,
  POS(406, 21),
  POS(405, 19)
};

static TAB_NUM t_lambda_52[] = {
  7, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_404_3_s, var_404_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(3),
  // map_reduce s m $left_items $left_value
  var_400_1_map_reduce, 2, var_404_3_s, LOCAL(3), 2, LOCAL(4), LOCAL(5),
  // m+1 e $right_items $right_value
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // map_reduce m+1 e $right_items $right_value
  var_400_1_map_reduce, 2, LOCAL(1), var_404_5_e, 2, LOCAL(6), LOCAL(7),
  // append(left_items right_items)
  var_append, 2, LOCAL(4), LOCAL(6), 1, LOCAL(1),
  // reduce_function(left_value right_value)
  var_391_0_reduce_function, 2, LOCAL(5), LOCAL(7), 1, LOCAL(2),
  // ->
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(407, 27),
  POS(407, 23),
  POS(408, 23),
  POS(409, 34),
  POS(409, 23),
  POS(411, 25),
  POS(412, 25),
  POS(410, 23)
};

static TAB_NUM t_lambda_53[] = {
  3, // locals
  0, // parameters
  // self(s) $item $value
  var_389_0_self, 1, var_404_3_s, 1, LOCAL(1),
  // map_function s self(s) $item $value
  var_390_0_map_function, 2, var_404_3_s, LOCAL(1), 2, LOCAL(2), LOCAL(3),
  // list(item) value
  var_list, 1, LOCAL(2), 1, LOCAL(1),
  // -> list(item) value
  LET, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(414, 38),
  POS(414, 23),
  POS(415, 26),
  POS(415, 23)
};

static TAB_NUM t_lambda_54[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_55, TAIL_CALL,
  POS(416, 17)
};

static TAB_NUM t_lambda_55[] = {
  1, // locals
  2, // parameters
  var_417_3_s,
  var_417_5_e,
  // s < e:
  var_std__less, 2, var_417_3_s, var_417_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_56, lambda_57, TAIL_CALL,
  POS(419, 21),
  POS(418, 19)
};

static TAB_NUM t_lambda_56[] = {
  7, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_417_3_s, var_417_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(3),
  // map_reduce s m $left_items $left_value
  var_400_1_map_reduce, 2, var_417_3_s, LOCAL(3), 2, LOCAL(4), LOCAL(5),
  // m+1 e $right_items $right_value
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // map_reduce m+1 e $right_items $right_value
  var_400_1_map_reduce, 2, LOCAL(1), var_417_5_e, 2, LOCAL(6), LOCAL(7),
  // append(left_items right_items)
  var_append, 2, LOCAL(4), LOCAL(6), 1, LOCAL(1),
  // reduce_function(left_value right_value)
  var_391_0_reduce_function, 2, LOCAL(5), LOCAL(7), 1, LOCAL(2),
  // ->
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(420, 27),
  POS(420, 23),
  POS(421, 23),
  POS(422, 34),
  POS(422, 23),
  POS(424, 25),
  POS(425, 25),
  POS(423, 23)
};

static TAB_NUM t_lambda_57[] = {
  3, // locals
  0, // parameters
  // self(s) $item $value
  var_389_0_self, 1, var_417_3_s, 1, LOCAL(1),
  // map_function self(s) $item $value
  var_390_0_map_function, 1, LOCAL(1), 2, LOCAL(2), LOCAL(3),
  // list(item) value
  var_list, 1, LOCAL(2), 1, LOCAL(1),
  // -> list(item) value
  LET, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(427, 36),
  POS(427, 23),
  POS(428, 26),
  POS(428, 23)
};

static TAB_NUM t_lambda_58[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_389_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_59, lambda_60, TAIL_CALL,
  POS(432, 14),
  POS(431, 7)
};

static TAB_NUM t_lambda_59[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_392_0_unit, TAIL_CALL,
  POS(433, 11)
};

static TAB_NUM t_lambda_60[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(map_function) == 2
  var_parameter_count_of, 1, var_390_0_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // $map_reduce
  var_if, 3, LOCAL(2), lambda_61, lambda_65, 1, var_435_1_map_reduce,
  // length_of(self)
  var_length_of, 1, var_389_0_self, 1, LOCAL(1),
  // map_reduce 1 length_of(self)
  var_435_1_map_reduce, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(437, 15),
  POS(437, 15),
  POS(435, 11),
  POS(457, 24),
  POS(457, 11)
};

static TAB_NUM t_lambda_61[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_62, TAIL_CALL,
  POS(438, 17)
};

static TAB_NUM t_lambda_62[] = {
  1, // locals
  2, // parameters
  var_439_3_s,
  var_439_5_e,
  // s < e:
  var_std__less, 2, var_439_3_s, var_439_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_63, lambda_64, TAIL_CALL,
  POS(441, 21),
  POS(440, 19)
};

static TAB_NUM t_lambda_63[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_439_3_s, var_439_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map_reduce(s m)
  var_435_1_map_reduce, 2, var_439_3_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map_reduce(m+1 e)
  var_435_1_map_reduce, 2, LOCAL(2), var_439_5_e, 1, LOCAL(3),
  // reduce_function
  var_391_0_reduce_function, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(442, 27),
  POS(442, 23),
  POS(444, 25),
  POS(445, 36),
  POS(445, 25),
  POS(443, 23)
};

static TAB_NUM t_lambda_64[] = {
  2, // locals
  0, // parameters
  // self(s))
  var_389_0_self, 1, var_439_3_s, 1, LOCAL(1),
  // map_function(s self(s))
  var_390_0_map_function, 2, var_439_3_s, LOCAL(1), 1, LOCAL(2),
  //  map_function(s self(s))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(446, 39),
  POS(446, 24),
  POS(446, 23)
};

static TAB_NUM t_lambda_65[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_66, TAIL_CALL,
  POS(447, 17)
};

static TAB_NUM t_lambda_66[] = {
  1, // locals
  2, // parameters
  var_448_3_s,
  var_448_5_e,
  // s < e:
  var_std__less, 2, var_448_3_s, var_448_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_67, lambda_68, TAIL_CALL,
  POS(450, 21),
  POS(449, 19)
};

static TAB_NUM t_lambda_67[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_448_3_s, var_448_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map_reduce(s m)
  var_435_1_map_reduce, 2, var_448_3_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map_reduce(m+1 e)
  var_435_1_map_reduce, 2, LOCAL(2), var_448_5_e, 1, LOCAL(3),
  // reduce_function
  var_391_0_reduce_function, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(451, 27),
  POS(451, 23),
  POS(453, 25),
  POS(454, 36),
  POS(454, 25),
  POS(452, 23)
};

static TAB_NUM t_lambda_68[] = {
  2, // locals
  0, // parameters
  // self(s))
  var_389_0_self, 1, var_448_3_s, 1, LOCAL(1),
  // map_function(self(s))
  var_390_0_map_function, 1, LOCAL(1), 1, LOCAL(2),
  //  map_function(self(s))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(455, 37),
  POS(455, 24),
  POS(455, 23)
};

static TAB_NUM t_func_std_types__generic_list___sort[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 461_0_self
  var_less, var_462_0_compare,
  // sort self
  func_sort, 1, LOCAL(1), TAIL_CALL,
  POS(464, 3)
};

static TAB_NUM t_func_sort[] = {
  1, // locals
  1, // parameters
  var_466_8_items,
  // $n length_of(items)
  var_length_of, 1, var_466_8_items, 1, var_467_1_n,
  // 1:
  var_std__less, 2, num_1, var_467_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_69, lambda_70, TAIL_CALL,
  POS(467, 5),
  POS(469, 11),
  POS(468, 5)
};

static TAB_NUM t_lambda_69[] = {
  6, // locals
  0, // parameters
  // $m n >> 1
  var_std__shift_right, 2, var_467_1_n, num_1, 1, LOCAL(6),
  // range(items 1 m)) sort(range(items m+1 n)) compare
  var_range, 3, var_466_8_items, num_1, LOCAL(6), 1, LOCAL(1),
  // sort(range(items 1 m)) sort(range(items m+1 n)) compare
  func_sort, 1, LOCAL(1), 1, LOCAL(2),
  // m+1 n)) compare
  var_std__plus, 2, LOCAL(6), num_1, 1, LOCAL(3),
  // range(items m+1 n)) compare
  var_range, 3, var_466_8_items, LOCAL(3), var_467_1_n, 1, LOCAL(4),
  // sort(range(items m+1 n)) compare
  func_sort, 1, LOCAL(4), 1, LOCAL(5),
  // merge sort(range(items 1 m)) sort(range(items m+1 n)) compare
  var_merge, 3, LOCAL(2), LOCAL(5), var_462_0_compare, TAIL_CALL,
  POS(470, 9),
  POS(471, 20),
  POS(471, 15),
  POS(471, 55),
  POS(471, 43),
  POS(471, 38),
  POS(471, 9)
};

static TAB_NUM t_lambda_70[] = {
  0, // locals
  0, // parameters
  //  items
  LET, 1, var_466_8_items, TAIL_CALL,
  POS(472, 9)
};

static TAB_NUM t_func_std_types__generic_list___intersection[] = {
  2, // locals
  2, // parameters
  var_474_40_left,
  var_474_45_right,
  // is_empty || right.is_empty
  var_is_empty, 1, var_474_40_left, 1, LOCAL(1),
  // is_empty || right.is_empty
  var_std__or, 2, LOCAL(1), lambda_71, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_72, lambda_73, TAIL_CALL,
  POS(476, 10),
  POS(476, 10),
  POS(475, 3)
};

static TAB_NUM t_lambda_71[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_474_45_right, 1, LOCAL(1),
  // right.is_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(476, 28),
  POS(476, 22)
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(477, 7)
};

static TAB_NUM t_lambda_73[] = {
  1, // locals
  0, // parameters
  // map_reduce
  var_map_reduce, 4, var_474_40_left, lambda_left, var_append, var_empty_list, 1, LOCAL(1),
  // 
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(479, 7),
  POS(478, 7)
};

static TAB_NUM t_lambda_left[] = {
  1, // locals
  1, // parameters
  var_480_7_item,
  // right .contains. item
  var_contains, 2, var_474_45_right, var_480_7_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_74, lambda_75, TAIL_CALL,
  POS(482, 13),
  POS(481, 11)
};

static TAB_NUM t_lambda_74[] = {
  1, // locals
  0, // parameters
  // list(item)
  var_list, 1, var_480_7_item, 1, LOCAL(1),
  //  list(item)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(483, 16),
  POS(483, 15)
};

static TAB_NUM t_lambda_75[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(484, 15)
};

static TAB_NUM t_func_std_types__generic_list___merge[] = {
  0, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_492_0_left,
  MANDATORY_PARAMETER, var_493_0_right,
  var_less, var_494_0_compare,
  // $i 1
  LET, 1, num_1, 1, var_496_1_i,
  // $j i
  LET, 1, var_496_1_i, 1, var_497_1_j,
  // $n length_of(left)
  var_length_of, 1, var_492_0_left, 1, var_498_1_n,
  // $m length_of(right)
  var_length_of, 1, var_493_0_right, 1, var_499_1_m,
  // $result new(left empty_list)
  var_new, 2, var_492_0_left, var_empty_list, 1, var_500_1_result,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(496, 3),
  POS(497, 3),
  POS(498, 3),
  POS(499, 3),
  POS(500, 3),
  POS(501, 3)
};

static TAB_NUM t_lambda_loop[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_498_1_n, var_496_1_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_76, lambda_81, TAIL_CALL,
  POS(503, 12),
  POS(503, 12),
  POS(502, 5)
};

static TAB_NUM t_lambda_76[] = {
  2, // locals
  0, // parameters
  // m:
  var_std__less, 2, var_499_1_m, var_497_1_j, 1, LOCAL(1),
  // m:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_77, lambda_80, TAIL_CALL,
  POS(505, 16),
  POS(505, 16),
  POS(504, 9)
};

static TAB_NUM t_lambda_77[] = {
  3, // locals
  0, // parameters
  // left(i) right(j)):
  var_492_0_left, 1, var_496_1_i, 1, LOCAL(1),
  // right(j)):
  var_493_0_right, 1, var_497_1_j, 1, LOCAL(2),
  // compare(left(i) right(j)):
  var_494_0_compare, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_78, lambda_79, TAIL_CALL,
  POS(507, 23),
  POS(507, 31),
  POS(507, 15),
  POS(506, 13)
};

static TAB_NUM t_lambda_78[] = {
  1, // locals
  0, // parameters
  // left(i)
  var_492_0_left, 1, var_496_1_i, 1, LOCAL(1),
  // push &result left(i)
  var_push, 2, var_500_1_result, LOCAL(1), 1, var_500_1_result,
  // !i i+1
  var_std__plus, 2, var_496_1_i, num_1, 1, var_496_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(508, 30),
  POS(508, 17),
  POS(509, 17),
  POS(510, 17)
};

static TAB_NUM t_lambda_79[] = {
  1, // locals
  0, // parameters
  // right(j)
  var_493_0_right, 1, var_497_1_j, 1, LOCAL(1),
  // push &result right(j)
  var_push, 2, var_500_1_result, LOCAL(1), 1, var_500_1_result,
  // !j j+1
  var_std__plus, 2, var_497_1_j, num_1, 1, var_497_1_j,
  // next
  var_next, 0, TAIL_CALL,
  POS(512, 30),
  POS(512, 17),
  POS(513, 17),
  POS(514, 17)
};

static TAB_NUM t_lambda_80[] = {
  1, // locals
  0, // parameters
  // range(left i n)
  var_range, 3, var_492_0_left, var_496_1_i, var_498_1_n, 1, LOCAL(1),
  // append result range(left i n)
  var_append, 2, var_500_1_result, LOCAL(1), TAIL_CALL,
  POS(516, 27),
  POS(516, 13)
};

static TAB_NUM t_lambda_81[] = {
  1, // locals
  0, // parameters
  // range(right j m)
  var_range, 3, var_493_0_right, var_497_1_j, var_499_1_m, 1, LOCAL(1),
  // append result range(right j m)
  var_append, 2, var_500_1_result, LOCAL(1), TAIL_CALL,
  POS(518, 23),
  POS(518, 9)
};

static TAB_NUM t_func_std_types__generic_list___zip[] = {
  0, // locals
  2, // parameters
  var_530_0_left,
  var_531_0_right,
  // $n length_of(left)
  var_length_of, 1, var_530_0_left, 1, var_533_1_n,
  // $m length_of(right)
  var_length_of, 1, var_531_0_right, 1, var_534_1_m,
  // $k min(n m)
  var_min, 2, var_533_1_n, var_534_1_m, 1, var_535_1_k,
  // $result new(left empty_list)
  var_new, 2, var_530_0_left, var_empty_list, 1, var_536_1_result,
  // from_to 1 k
  var_from_to, 4, num_1, var_535_1_k, lambda_82, lambda_83, TAIL_CALL,
  POS(533, 3),
  POS(534, 3),
  POS(535, 3),
  POS(536, 3),
  POS(537, 3)
};

static TAB_NUM t_lambda_82[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 538_3_i
  // left(i)
  var_530_0_left, 1, LOCAL(2), 1, LOCAL(1),
  // push &result left(i)
  var_push, 2, var_536_1_result, LOCAL(1), 1, var_536_1_result,
  // right(i)
  var_531_0_right, 1, LOCAL(2), 1, LOCAL(1),
  // push &result right(i)
  var_push, 2, var_536_1_result, LOCAL(1), 1, var_536_1_result,
  // next
  var_next, 0, TAIL_CALL,
  POS(539, 20),
  POS(539, 7),
  POS(540, 20),
  POS(540, 7),
  POS(541, 7)
};

static TAB_NUM t_lambda_83[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_84, lambda_86, lambda_88, TAIL_CALL,
  POS(543, 7)
};

static TAB_NUM t_lambda_84[] = {
  1, // locals
  0, // parameters
  // k -> append(result range(left k+1 n))
  var_std__less, 2, var_535_1_k, var_533_1_n, 1, LOCAL(1),
  //  n > k -> append(result range(left k+1 n))
  LET, 2, LOCAL(1), lambda_85, TAIL_CALL,
  POS(544, 16),
  POS(544, 11)
};

static TAB_NUM t_lambda_85[] = {
  3, // locals
  0, // parameters
  // k+1 n))
  var_std__plus, 2, var_535_1_k, num_1, 1, LOCAL(1),
  // range(left k+1 n))
  var_range, 3, var_530_0_left, LOCAL(1), var_533_1_n, 1, LOCAL(2),
  // append(result range(left k+1 n))
  var_append, 2, var_536_1_result, LOCAL(2), 1, LOCAL(3),
  //  append(result range(left k+1 n))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(544, 46),
  POS(544, 35),
  POS(544, 21),
  POS(544, 20)
};

static TAB_NUM t_lambda_86[] = {
  1, // locals
  0, // parameters
  // k -> append(result range(right k+1 m))
  var_std__less, 2, var_535_1_k, var_534_1_m, 1, LOCAL(1),
  //  m > k -> append(result range(right k+1 m))
  LET, 2, LOCAL(1), lambda_87, TAIL_CALL,
  POS(545, 16),
  POS(545, 11)
};

static TAB_NUM t_lambda_87[] = {
  3, // locals
  0, // parameters
  // k+1 m))
  var_std__plus, 2, var_535_1_k, num_1, 1, LOCAL(1),
  // range(right k+1 m))
  var_range, 3, var_531_0_right, LOCAL(1), var_534_1_m, 1, LOCAL(2),
  // append(result range(right k+1 m))
  var_append, 2, var_536_1_result, LOCAL(2), 1, LOCAL(3),
  //  append(result range(right k+1 m))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(545, 47),
  POS(545, 35),
  POS(545, 21),
  POS(545, 20)
};

static TAB_NUM t_lambda_88[] = {
  0, // locals
  0, // parameters
  //  true -> result
  LET, 2, var_true, lambda_89, TAIL_CALL,
  POS(546, 11)
};

static TAB_NUM t_lambda_89[] = {
  0, // locals
  0, // parameters
  //  result
  LET, 1, var_536_1_result, TAIL_CALL,
  POS(546, 19)
};

static TAB_NUM t_func_std_types__generic_list___flatten[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 548_35_self
  // -> self # for strings
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(548, 42)
};

static TAB_NUM t_func_std_types__list___flatten[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 554_0_self
  // map_reduce self
  var_map_reduce, 4, LOCAL(1), lambda_90, var_append, var_empty_list, TAIL_CALL,
  POS(556, 3)
};

static TAB_NUM t_lambda_90[] = {
  1, // locals
  1, // parameters
  var_557_3_item,
  // is_a_list
  var_is_a_list, 1, var_557_3_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_91, lambda_92, TAIL_CALL,
  POS(559, 14),
  POS(558, 7)
};

static TAB_NUM t_lambda_91[] = {
  1, // locals
  0, // parameters
  // flatten(item)
  var_flatten, 1, var_557_3_item, 1, LOCAL(1),
  //  flatten(item)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(560, 12),
  POS(560, 11)
};

static TAB_NUM t_lambda_92[] = {
  1, // locals
  0, // parameters
  // list(item)
  var_list, 1, var_557_3_item, 1, LOCAL(1),
  //  list(item)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(561, 12),
  POS(561, 11)
};

static TAB_NUM t_func_std_types__generic_list___dup[] = {
  0, // locals
  2, // parameters
  var_575_0_self,
  var_576_0_n,
  // case n
  var_case, 6, var_576_0_n, num_0, lambda_93, num_1, lambda_94, lambda_95, TAIL_CALL,
  POS(578, 3)
};

static TAB_NUM t_lambda_93[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(579, 9)
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_575_0_self, TAIL_CALL,
  POS(580, 9)
};

static TAB_NUM t_lambda_95[] = {
  4, // locals
  0, // parameters
  // $h n >> 1 # fails if <n> is not a positive integer
  var_std__shift_right, 2, var_576_0_n, num_1, 1, LOCAL(3),
  // $lst dup(self h)
  var_dup, 2, var_575_0_self, LOCAL(3), 1, LOCAL(4),
  // $dlst append(lst lst)
  var_append, 2, LOCAL(4), LOCAL(4), 1, var_584_1_dlst,
  // 2*h == n
  var_std__times, 2, num_2, LOCAL(3), 1, LOCAL(1),
  // 2*h == n
  var_std__equal, 2, LOCAL(1), var_576_0_n, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_96, lambda_97, TAIL_CALL,
  POS(582, 7),
  POS(583, 7),
  POS(584, 7),
  POS(586, 9),
  POS(586, 9),
  POS(585, 7)
};

static TAB_NUM t_lambda_96[] = {
  0, // locals
  0, // parameters
  //  dlst
  LET, 1, var_584_1_dlst, TAIL_CALL,
  POS(587, 11)
};

static TAB_NUM t_lambda_97[] = {
  1, // locals
  0, // parameters
  // append(dlst self)
  var_append, 2, var_584_1_dlst, var_575_0_self, 1, LOCAL(1),
  //  append(dlst self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(588, 12),
  POS(588, 11)
};

static TAB_NUM t_func_std_types__generic_list___contains[] = {
  1, // locals
  2, // parameters
  var_594_0_self,
  var_595_0_item,
  // is_empty
  var_is_empty, 1, var_594_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_98, lambda_99, TAIL_CALL,
  POS(598, 10),
  POS(597, 3)
};

static TAB_NUM t_lambda_98[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(599, 7)
};

static TAB_NUM t_lambda_99[] = {
  2, // locals
  0, // parameters
  // self(1) == item
  var_594_0_self, 1, num_1, 1, LOCAL(1),
  // self(1) == item
  var_std__equal, 2, LOCAL(1), var_595_0_item, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_100, lambda_101, TAIL_CALL,
  POS(602, 9),
  POS(602, 9),
  POS(601, 7)
};

static TAB_NUM t_lambda_100[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(603, 11)
};

static TAB_NUM t_lambda_101[] = {
  1, // locals
  0, // parameters
  // range(self 2 -1) item
  var_range, 3, var_594_0_self, num_2, minus_num_1, 1, LOCAL(1),
  // contains range(self 2 -1) item
  var_contains, 2, LOCAL(1), var_595_0_item, TAIL_CALL,
  POS(605, 20),
  POS(605, 11)
};

static TAB_NUM t_func_std_types__generic_list___find_first[] = {
  2, // locals
  2, // parameters
  var_607_38_self,
  var_607_43_test,
  // result_count() == 2:
  var_result_count, 0, 1, LOCAL(1),
  // result_count() == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_102, lambda_106, TAIL_CALL,
  POS(609, 5),
  POS(609, 5),
  POS(608, 3)
};

static TAB_NUM t_lambda_102[] = {
  0, // locals
  0, // parameters
  // for_each self
  var_for_each, 3, var_607_38_self, lambda_103, lambda_105, TAIL_CALL,
  POS(610, 7)
};

static TAB_NUM t_lambda_103[] = {
  1, // locals
  2, // parameters
  var_611_3_idx,
  var_611_7_item,
  // test(item)
  var_607_43_test, 1, var_611_7_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_104, var_next, TAIL_CALL,
  POS(613, 13),
  POS(612, 11)
};

static TAB_NUM t_lambda_104[] = {
  0, // locals
  0, // parameters
  //  idx item
  LET, 2, var_611_3_idx, var_611_7_item, TAIL_CALL,
  POS(614, 15)
};

static TAB_NUM t_lambda_105[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(616, 11)
};

static TAB_NUM t_lambda_106[] = {
  0, // locals
  0, // parameters
  // for_each self
  var_for_each, 3, var_607_38_self, lambda_107, lambda_109, TAIL_CALL,
  POS(618, 7)
};

static TAB_NUM t_lambda_107[] = {
  1, // locals
  1, // parameters
  var_619_3_item,
  // test(item)
  var_607_43_test, 1, var_619_3_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_108, var_next, TAIL_CALL,
  POS(621, 13),
  POS(620, 11)
};

static TAB_NUM t_lambda_108[] = {
  0, // locals
  0, // parameters
  //  item
  LET, 1, var_619_3_item, TAIL_CALL,
  POS(622, 15)
};

static TAB_NUM t_lambda_109[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(624, 11)
};

static TAB_NUM t_func_std_types__generic_list___filter[] = {
  2, // locals
  2, // parameters
  var_626_34_self,
  var_626_39_test,
  // result_count() == 2:
  var_result_count, 0, 1, LOCAL(1),
  // result_count() == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_110, lambda_116, TAIL_CALL,
  POS(628, 5),
  POS(628, 5),
  POS(627, 3)
};

static TAB_NUM t_lambda_110[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_626_34_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_111, lambda_112, TAIL_CALL,
  POS(630, 14),
  POS(629, 7)
};

static TAB_NUM t_lambda_111[] = {
  0, // locals
  0, // parameters
  //  self self
  LET, 2, var_626_34_self, var_626_34_self, TAIL_CALL,
  POS(631, 11)
};

static TAB_NUM t_lambda_112[] = {
  0, // locals
  0, // parameters
  // $good empty_list
  LET, 1, var_empty_list, 1, var_633_1_good,
  // $bad empty_list
  LET, 1, var_empty_list, 1, var_634_1_bad,
  // for_each self
  var_for_each, 3, var_626_34_self, lambda_113, lambda_115, TAIL_CALL,
  POS(633, 11),
  POS(634, 11),
  POS(635, 11)
};

static TAB_NUM t_lambda_113[] = {
  1, // locals
  1, // parameters
  var_636_3_item,
  // test(item):
  var_626_39_test, 1, var_636_3_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_testitem, lambda_114, TAIL_CALL,
  POS(638, 17),
  POS(637, 15)
};

static TAB_NUM t_lambda_testitem[] = {
  0, // locals
  0, // parameters
  // push &good item
  var_push, 2, var_633_1_good, var_636_3_item, 1, var_633_1_good,
  // next
  var_next, 0, TAIL_CALL,
  POS(639, 19),
  POS(640, 19)
};

static TAB_NUM t_lambda_114[] = {
  0, // locals
  0, // parameters
  // push &bad item
  var_push, 2, var_634_1_bad, var_636_3_item, 1, var_634_1_bad,
  // next
  var_next, 0, TAIL_CALL,
  POS(642, 19),
  POS(643, 19)
};

static TAB_NUM t_lambda_115[] = {
  0, // locals
  0, // parameters
  //  good bad
  LET, 2, var_633_1_good, var_634_1_bad, TAIL_CALL,
  POS(644, 15)
};

static TAB_NUM t_lambda_116[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_626_34_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_117, lambda_118, TAIL_CALL,
  POS(647, 14),
  POS(646, 7)
};

static TAB_NUM t_lambda_117[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_626_34_self, TAIL_CALL,
  POS(648, 11)
};

static TAB_NUM t_lambda_118[] = {
  1, // locals
  0, // parameters
  // length_of(self)
  var_length_of, 1, var_626_34_self, 1, LOCAL(1),
  // filter 1 length_of(self)
  func_filter, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(663, 20),
  POS(663, 11)
};

static TAB_NUM t_func_filter[] = {
  1, // locals
  2, // parameters
  var_650_10_s,
  var_650_12_e,
  // s < e:
  var_std__less, 2, var_650_10_s, var_650_12_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_119, lambda_120, TAIL_CALL,
  POS(652, 15),
  POS(651, 13)
};

static TAB_NUM t_lambda_119[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_650_10_s, var_650_12_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // filter(s m)
  func_filter, 2, var_650_10_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // filter(m+1 e)
  func_filter, 2, LOCAL(2), var_650_12_e, 1, LOCAL(3),
  // append
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(653, 21),
  POS(653, 17),
  POS(655, 19),
  POS(656, 26),
  POS(656, 19),
  POS(654, 17)
};

static TAB_NUM t_lambda_120[] = {
  2, // locals
  0, // parameters
  // self(s))
  var_626_34_self, 1, var_650_10_s, 1, LOCAL(1),
  // test(self(s))
  var_626_39_test, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_121, lambda_122, TAIL_CALL,
  POS(659, 24),
  POS(659, 19),
  POS(658, 17)
};

static TAB_NUM t_lambda_121[] = {
  2, // locals
  0, // parameters
  // self(s))
  var_626_34_self, 1, var_650_10_s, 1, LOCAL(1),
  // list(self(s))
  var_list, 1, LOCAL(1), 1, LOCAL(2),
  //  list(self(s))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(660, 27),
  POS(660, 22),
  POS(660, 21)
};

static TAB_NUM t_lambda_122[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(661, 21)
};

static TAB_NUM t_func_std__levenshtein_distance[] = {
  2, // locals
  2, // parameters
  var_668_0_s,
  var_669_0_t,
  // $m length_of(s)
  var_length_of, 1, var_668_0_s, 1, LOCAL(2),
  // $n length_of(t)
  var_length_of, 1, var_669_0_t, 1, var_672_1_n,
  // n+1)
  var_std__plus, 2, var_672_1_n, num_1, 1, LOCAL(1),
  // $v0 int16_array(n+1)
  var_int16_array, 1, LOCAL(1), 1, var_673_1_v0,
  // n+1)
  var_std__plus, 2, var_672_1_n, num_1, 1, LOCAL(1),
  // $v1 int16_array(n+1)
  var_int16_array, 1, LOCAL(1), 1, var_674_1_v1,
  // from_to !v0 0 n
  var_from_to, 4, num_0, var_672_1_n, lambda_123, lambda_124, 1, var_673_1_v0,
  // from_to 1 m
  var_from_to, 4, num_1, LOCAL(2), lambda_125, lambda_130, TAIL_CALL,
  POS(671, 3),
  POS(672, 3),
  POS(673, 19),
  POS(673, 3),
  POS(674, 19),
  POS(674, 3),
  POS(675, 3),
  POS(680, 3)
};

static TAB_NUM t_lambda_123[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 676_3_i
  // i+1) i
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(2),
  // v0(i+1) i
  var_673_1_v0, 2, LOCAL(2), LOCAL(3), 1, var_673_1_v0,
  // next
  var_next, 0, TAIL_CALL,
  POS(677, 11),
  POS(677, 8),
  POS(678, 7)
};

static TAB_NUM t_lambda_124[] = {
  0, // locals
  0, // parameters
  //  v0
  LET, 1, var_673_1_v0, TAIL_CALL,
  POS(679, 7)
};

static TAB_NUM t_lambda_125[] = {
  0, // locals
  1, // parameters
  var_681_3_i,
  // v1(1) i
  var_674_1_v1, 2, num_1, var_681_3_i, 1, var_674_1_v1,
  // from_to 1 n
  var_from_to, 4, num_1, var_672_1_n, lambda_126, lambda_129, TAIL_CALL,
  POS(682, 8),
  POS(683, 7)
};

static TAB_NUM t_lambda_126[] = {
  6, // locals
  1, // parameters
  var_684_3_j,
  // j+1)+1
  var_std__plus, 2, var_684_3_j, num_1, 1, LOCAL(1),
  // v0(j+1)+1
  var_673_1_v0, 1, LOCAL(1), 1, LOCAL(2),
  // $deletion_cost v0(j+1)+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(4),
  // v1(j)+1
  var_674_1_v1, 1, var_684_3_j, 1, LOCAL(1),
  // $insertion_cost v1(j)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(5),
  // s(i) == t(j)
  var_668_0_s, 1, var_681_3_i, 1, LOCAL(1),
  // t(j)
  var_669_0_t, 1, var_684_3_j, 1, LOCAL(2),
  // s(i) == t(j)
  var_std__equal, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // $substitution_cost
  var_if, 3, LOCAL(3), lambda_127, lambda_128, 1, LOCAL(6),
  // !v1(j+1) min(deletion_cost insertion_cost substitution_cost)
  var_min, 3, LOCAL(4), LOCAL(5), LOCAL(6), 1, LOCAL(2),
  // j+1) min(deletion_cost insertion_cost substitution_cost)
  var_std__plus, 2, var_684_3_j, num_1, 1, LOCAL(3),
  // v1(j+1) min(deletion_cost insertion_cost substitution_cost)
  var_674_1_v1, 2, LOCAL(3), LOCAL(2), 1, var_674_1_v1,
  // next
  var_next, 0, TAIL_CALL,
  POS(685, 29),
  POS(685, 26),
  POS(685, 11),
  POS(686, 27),
  POS(686, 11),
  POS(689, 15),
  POS(689, 23),
  POS(689, 15),
  POS(687, 11),
  POS(692, 11),
  POS(692, 15),
  POS(692, 12),
  POS(693, 11)
};

static TAB_NUM t_lambda_127[] = {
  1, // locals
  0, // parameters
  // v0(j)
  var_673_1_v0, 1, var_684_3_j, 1, LOCAL(1),
  //  v0(j)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(690, 18),
  POS(690, 17)
};

static TAB_NUM t_lambda_128[] = {
  2, // locals
  0, // parameters
  // v0(j)+1
  var_673_1_v0, 1, var_684_3_j, 1, LOCAL(1),
  // v0(j)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  //  v0(j)+1
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(691, 18),
  POS(691, 18),
  POS(691, 17)
};

static TAB_NUM t_lambda_129[] = {
  0, // locals
  0, // parameters
  // assign
  LET, 2, var_674_1_v1, var_673_1_v0, 2, var_673_1_v0, var_674_1_v1,
  // next
  var_next, 0, TAIL_CALL,
  POS(695, 11),
  POS(698, 11)
};

static TAB_NUM t_lambda_130[] = {
  2, // locals
  0, // parameters
  // n+1)
  var_std__plus, 2, var_672_1_n, num_1, 1, LOCAL(1),
  // v0(n+1)
  var_673_1_v0, 1, LOCAL(1), 1, LOCAL(2),
  //  v0(n+1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(699, 11),
  POS(699, 8),
  POS(699, 7)
};

static TAB_NUM t_func_std_types__list___to_list[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 704_27_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(704, 34)
};

static TAB_NUM t_func_std_types__list___serialize[] = {
  4, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 710_0_self
  var_undefined, var_711_0_indent,
  // is_defined
  var_is_defined, 1, var_711_0_indent, 1, LOCAL(1),
  // $new_indent
  var_if, 3, LOCAL(1), lambda_131, lambda_132, 1, var_713_1_new_indent,
  // map_reduce $contents
  var_map_reduce, 4, LOCAL(3), lambda_self, var_append, string_1, 1, LOCAL(4),
  // serialization_tag_of(self)) <@(length_of(self))>
  var_serialization_tag_of, 1, LOCAL(3), 1, LOCAL(1),
  // length_of(self))>
  var_length_of, 1, LOCAL(3), 1, LOCAL(2),
  // $header
  var_std__string, 4, LOCAL(1), string_2, LOCAL(2), string_3, 1, var_722_1_header,
  // is_defined &header -> append(tabs_and_spaces(indent) header)
  var_is_defined, 1, var_711_0_indent, 1, LOCAL(1),
  // update_if indent.is_defined &header -> append(tabs_and_spaces(indent) header)
  var_update_if, 3, LOCAL(1), var_722_1_header, lambda_133, 1, var_722_1_header,
  // append header contents
  var_append, 2, var_722_1_header, LOCAL(4), TAIL_CALL,
  POS(715, 14),
  POS(713, 3),
  POS(718, 3),
  POS(724, 9),
  POS(724, 40),
  POS(722, 3),
  POS(725, 20),
  POS(725, 3),
  POS(726, 3)
};

static TAB_NUM t_lambda_131[] = {
  1, // locals
  0, // parameters
  // indent+2
  var_std__plus, 2, var_711_0_indent, num_2, 1, LOCAL(1),
  //  indent+2
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(716, 10),
  POS(716, 9)
};

static TAB_NUM t_lambda_132[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(717, 9)
};

static TAB_NUM t_lambda_self[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 719_7_item
  // serialize(item new_indent)
  var_serialize, 2, LOCAL(2), var_713_1_new_indent, 1, LOCAL(1),
  // -> serialize(item new_indent)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(719, 21),
  POS(719, 18)
};

static TAB_NUM t_lambda_133[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) header)
  var_tabs_and_spaces, 1, var_711_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) header)
  var_append, 2, LOCAL(1), var_722_1_header, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) header)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(725, 49),
  POS(725, 42),
  POS(725, 41)
};

static TAB_NUM t_func_std_types__list___deserializer_of[] = {
  2, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(2), // 731_0_items
  // -> items
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(733, 3)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___put}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___get}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___pop}},
  {FLT_NEGATIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___truncate}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___append_or_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__concatenate}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_func}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__concatenate_non_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_func}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___reverse}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___for_each}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_iterate_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_iterate_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_break}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___map}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___map_or_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___std__reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___map_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___sort}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_sort}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___intersection}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_left}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___merge}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___zip}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_88}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_89}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___flatten}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__list___flatten}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_90}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_91}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_92}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___dup}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_93}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_94}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_95}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_96}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_97}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___contains}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_98}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_99}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_100}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_101}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___find_first}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_102}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_103}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_104}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_105}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_106}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_107}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_108}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_109}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___filter}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_110}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_111}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_112}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_113}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_testitem}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_114}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_115}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_116}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_117}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_118}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_filter}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_119}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_120}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_121}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_122}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__levenshtein_distance}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_123}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_124}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_125}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_126}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_127}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_128}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_129}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_130}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__list___to_list}},
  {FLT_STRING_8, 4, {.str_8 = "list"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__list___serialize}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_131}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_132}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_self}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_STRING_8, 2, {.str_8 = " <"}},
  {FLT_STRING_8, 2, {.str_8 = ">\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_133}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__list___deserializer_of}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_generic_list, -var_false},
  {-var_is_a_list, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__generic_list__attributes[] = {
  {-var_is_a_generic_list, -var_true},
  {var_put, -func_std_types__generic_list___put},
  {var_get, -func_std_types__generic_list___get},
  {var_pop, -func_std_types__generic_list___pop},
  {var_truncate, -func_std_types__generic_list___truncate},
  {var_append_or_error, -func_std_types__generic_list___append_or_error},
  {var_reverse, -func_std_types__generic_list___reverse},
  {var_for_each, -func_std_types__generic_list___for_each},
  {var_map, -func_std_types__generic_list___map},
  {var_map_or_error, -func_std_types__generic_list___map_or_error},
  {var_std__reduce, -func_std_types__generic_list___std__reduce},
  {var_map_reduce, -func_std_types__generic_list___map_reduce},
  {var_sort, -func_std_types__generic_list___sort},
  {var_intersection, -func_std_types__generic_list___intersection},
  {var_merge, -func_std_types__generic_list___merge},
  {var_zip, -func_std_types__generic_list___zip},
  {var_flatten, -func_std_types__generic_list___flatten},
  {var_dup, -func_std_types__generic_list___dup},
  {var_contains, -func_std_types__generic_list___contains},
  {var_find_first, -func_std_types__generic_list___find_first},
  {var_filter, -func_std_types__generic_list___filter}
};

static ATTRIBUTE_DEFINITION std_types__list__attributes[] = {
  {-var_is_a_list, -var_true},
  {var_flatten, -func_std_types__list___flatten},
  {var_to_list, -func_std_types__list___to_list},
  {-var_serialization_tag_of, -str_list},
  {var_serialize, -func_std_types__list___serialize},
  {-var_deserializer_of, -func_std_types__list___deserializer_of},
  {-var_empty_collection_of, -var_empty_list}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_DERIVED, 0, 0,
    "self\000basic_loops", NULL,
    {"undefined\000"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(25, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(25, 1)}
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
    "object\000std_types", std_types__object__attributes,
    {.position = POS(30, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_generic_list\000", NULL,
    {.position = POS(30, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(30, 38)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(36, 20)}
  },
  {
    FOT_UNKNOWN, 0, 21,
    "generic_list\000std_types", std_types__generic_list__attributes,
    {.position = POS(42, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(42, 44)}
  },
  {
    FOT_UNKNOWN, 0, 7,
    "list\000std_types", std_types__list__attributes,
    {.position = POS(48, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "put\000", NULL,
    {.position = POS(54, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(61, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(61, 6)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "get\000", NULL,
    {.position = POS(63, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(69, 6)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "pop\000", NULL,
    {.position = POS(71, 26)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate\000", NULL,
    {.position = POS(79, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "83_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "84_0_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(86, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(88, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(87, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "append_or_error\000", NULL,
    {.position = POS(92, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "92_43_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "92_48_right\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(94, 10)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "separator_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "concatenate\000std", NULL,
    {.const_idx = -func_std__concatenate}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "concatenate_non_empty\000std", NULL,
    {.const_idx = -func_std__concatenate_non_empty}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "109_8_myself\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "109_16_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "109_21_right\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(111, 12)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reverse\000", NULL,
    {.position = POS(120, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "124_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "126_1_result\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(126, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(129, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(130, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to_by\000", NULL,
    {.position = POS(127, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
    {.position = POS(133, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "194_0_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(199, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from\000basic_loops", NULL,
    {.position = POS(200, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to\000basic_loops", NULL,
    {.position = POS(201, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "body\000basic_loops", NULL,
    {.position = POS(203, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finally\000basic_loops", NULL,
    {.position = POS(204, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(197, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(214, 28)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "saved_context_of\000basic_loops", NULL,
    {.position = POS(232, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(241, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(241, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(243, 28)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map\000", NULL,
    {.position = POS(252, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "262_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "263_0_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "273_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "273_5_e\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(276, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "269_1_map\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "282_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "282_5_e\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_or_error\000", NULL,
    {.position = POS(293, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "306_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "307_0_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "317_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "317_5_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "313_1_map\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "325_1_mapped_item\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "331_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "331_5_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "339_1_mapped_item\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reduce\000std", NULL,
    {.position = POS(347, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "359_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "360_0_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "361_0_unit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "367_10_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "368_1_n\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(379, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "389_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "390_0_map_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "391_0_reduce_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "392_0_unit\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(395, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "404_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "404_5_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "400_1_map_reduce\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "417_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "417_5_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "439_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "439_5_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "435_1_map_reduce\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "448_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "448_5_e\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "sort\000", NULL,
    {.position = POS(459, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "462_0_compare\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000", NULL,
    {.position = POS(462, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "466_8_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "467_1_n\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "merge\000", NULL,
    {.position = POS(471, 9)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "intersection\000", NULL,
    {.position = POS(474, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "474_40_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "474_45_right\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(476, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(477, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "480_7_item\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "contains\000", NULL,
    {.position = POS(482, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "492_0_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "493_0_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "494_0_compare\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "496_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "497_1_j\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "498_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "499_1_m\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "500_1_result\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(500, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(501, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "zip\000", NULL,
    {.position = POS(520, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "530_0_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "531_0_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "533_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "534_1_m\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "535_1_k\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "min\000", NULL,
    {.position = POS(535, 6)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "536_1_result\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(543, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to\000", NULL,
    {.position = POS(537, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "flatten\000", NULL,
    {.position = POS(548, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "557_3_item\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "dup\000", NULL,
    {.position = POS(565, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "575_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "576_0_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "584_1_dlst\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(586, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(578, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "594_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "595_0_item\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "find_first\000", NULL,
    {.position = POS(607, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "607_38_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "607_43_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "611_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "611_7_item\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "619_3_item\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "filter\000", NULL,
    {.position = POS(626, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "626_34_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "626_39_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "633_1_good\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "634_1_bad\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "636_3_item\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "650_10_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "650_12_e\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "levenshtein_distance\000std", NULL,
    {.const_idx = -func_std__levenshtein_distance}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "668_0_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "669_0_t\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "672_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "673_1_v0\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "int16_array\000", NULL,
    {.position = POS(673, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "674_1_v1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "681_3_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "684_3_j\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000", NULL,
    {.position = POS(695, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_list\000", NULL,
    {.position = POS(704, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(706, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(708, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "711_0_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(715, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "713_1_new_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "722_1_header\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(723, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(725, 49)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(725, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deserializer_of\000", NULL,
    {.position = POS(728, 18)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__collections__lists__list = {
  "_basic__types__collections__lists__list", // module name
  "basic/types/collections/lists/list.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  183, // number of constants
  174, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
