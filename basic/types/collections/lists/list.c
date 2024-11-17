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
  lambda_7 = -17,
  func_std__concatenate_non_empty = -18,
  func_func = -19,
  lambda_8 = -20,
  lambda_9 = -21,
  lambda_10 = -22,
  lambda_11 = -23,
  func_std_types__generic_list___reverse = -24,
  lambda_12 = -25,
  lambda_13 = -26,
  func_std_types__generic_list___for_each = -27,
  func_iterate_1 = -28,
  lambda_14 = -29,
  lambda_15 = -30,
  func_iterate_2 = -31,
  lambda_16 = -32,
  lambda_17 = -33,
  lambda_18 = -34,
  lambda_19 = -35,
  lambda_next = -36,
  lambda_20 = -37,
  lambda_2_next = -38,
  func_std_types__generic_list___map = -39,
  lambda_21 = -40,
  lambda_22 = -41,
  lambda_23 = -42,
  lambda_24 = -43,
  lambda_25 = -44,
  lambda_26 = -45,
  lambda_27 = -46,
  lambda_28 = -47,
  lambda_29 = -48,
  lambda_30 = -49,
  func_std_types__generic_list___map_or_error = -50,
  lambda_31 = -51,
  lambda_32 = -52,
  lambda_33 = -53,
  lambda_34 = -54,
  lambda_35 = -55,
  lambda_36 = -56,
  lambda_37 = -57,
  lambda_38 = -58,
  lambda_39 = -59,
  lambda_40 = -60,
  lambda_41 = -61,
  lambda_42 = -62,
  lambda_43 = -63,
  lambda_44 = -64,
  func_std_types__generic_list___std__reduce = -65,
  lambda_45 = -66,
  lambda_46 = -67,
  func_reduce = -68,
  lambda_47 = -69,
  lambda_48 = -70,
  func_std_types__list___reduce_columns = -71,
  lambda_49 = -72,
  func_std_types__list___reduce_rows = -73,
  lambda_50 = -74,
  lambda_51 = -75,
  func_std_types__generic_list___map_reduce = -76,
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
  lambda_69 = -94,
  lambda_70 = -95,
  lambda_71 = -96,
  lambda_72 = -97,
  lambda_73 = -98,
  func_std_types__generic_list___map_reduce_rows = -99,
  lambda_74 = -100,
  lambda_75 = -101,
  lambda_76 = -102,
  func_std_types__generic_list___map_reduce_columns = -103,
  lambda_77 = -104,
  func_std_types__generic_list___sort = -105,
  func_sort = -106,
  lambda_78 = -107,
  lambda_79 = -108,
  func_std_types__generic_list___intersection = -109,
  lambda_80 = -110,
  lambda_81 = -111,
  lambda_82 = -112,
  lambda_left = -113,
  lambda_83 = -114,
  lambda_84 = -115,
  func_std_types__generic_list___merge = -116,
  lambda_loop = -117,
  lambda_85 = -118,
  lambda_86 = -119,
  lambda_87 = -120,
  lambda_88 = -121,
  lambda_89 = -122,
  lambda_90 = -123,
  func_std_types__generic_list___zip = -124,
  lambda_91 = -125,
  lambda_92 = -126,
  lambda_93 = -127,
  lambda_94 = -128,
  lambda_95 = -129,
  lambda_96 = -130,
  lambda_97 = -131,
  lambda_98 = -132,
  func_std_types__generic_list___flatten = -133,
  func_std_types__list___flatten = -134,
  lambda_99 = -135,
  lambda_100 = -136,
  lambda_101 = -137,
  func_std_types__generic_list___dup = -138,
  num_0 = -139,
  lambda_102 = -140,
  lambda_103 = -141,
  lambda_104 = -142,
  lambda_105 = -143,
  lambda_106 = -144,
  func_std_types__generic_list___contains = -145,
  lambda_107 = -146,
  lambda_108 = -147,
  lambda_109 = -148,
  lambda_110 = -149,
  func_std_types__generic_list___find_first = -150,
  lambda_111 = -151,
  lambda_112 = -152,
  lambda_113 = -153,
  lambda_114 = -154,
  lambda_115 = -155,
  lambda_116 = -156,
  lambda_117 = -157,
  lambda_118 = -158,
  func_std_types__generic_list___filter = -159,
  lambda_119 = -160,
  lambda_120 = -161,
  lambda_121 = -162,
  lambda_122 = -163,
  lambda_testitem = -164,
  lambda_123 = -165,
  lambda_124 = -166,
  lambda_125 = -167,
  lambda_126 = -168,
  lambda_127 = -169,
  func_filter = -170,
  lambda_128 = -171,
  lambda_129 = -172,
  lambda_130 = -173,
  lambda_131 = -174,
  func_std__levenshtein_distance = -175,
  lambda_132 = -176,
  lambda_133 = -177,
  lambda_134 = -178,
  lambda_135 = -179,
  lambda_136 = -180,
  lambda_137 = -181,
  lambda_138 = -182,
  lambda_139 = -183,
  func_std_types__list___debug__to_string = -184,
  lambda_140 = -185,
  lambda_141 = -186,
  str_empty_list = -187,
  lambda_142 = -188,
  lambda_143 = -189,
  lambda_144 = -190,
  str_list_of_1_item = -191,
  lambda_145 = -192,
  str_list_of = -193,
  str__items = -194,
  lambda_146 = -195,
  lambda_147 = -196,
  lambda_self = -197,
  chr_10 = -198,
  lambda_148 = -199,
  lambda_149 = -200,
  string_1 = -201,
  string_2 = -202,
  str_list = -203,
  func_std_types__list___to_list = -204,
  str_list_2 = -205,
  func_std_types__list___serialize = -206,
  lambda_150 = -207,
  lambda_151 = -208,
  lambda_2_self = -209,
  string_3 = -210,
  string_4 = -211,
  lambda_152 = -212,
  func_std_types__list___deserializer_of = -213
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
  var_neutral_element_of, // extern polymorphic
  var_empty_list, // extern
  var_put, // extern polymorphic
  var_list, // extern
  var_append, // extern
  var_get, // extern polymorphic
  var_range, // extern
  var_pop, // extern polymorphic
  var_truncate, // extern polymorphic
  var_98_0_self, // dynamic
  var_99_0_n, // dynamic
  var_length_of, // extern
  var_std__less, // extern
  var_if, // extern
  var_append_or_error, // extern polymorphic
  var_107_43_left, // dynamic
  var_107_48_right, // dynamic
  var_is_an_error, // extern
  var_separator_of, // attribute
  var_concatenation_function, // derived
  var_std_types__function, // extern
  var_std__concatenate, // initialized
  var_new, // extern
  var_std__concatenate_non_empty, // initialized
  var_128_8_myself, // dynamic
  var_128_16_left, // dynamic
  var_128_21_right, // dynamic
  var_is_empty, // extern
  var_reverse, // extern polymorphic
  var_143_0_self, // dynamic
  var_145_1_result, // dynamic
  var_empty_collection_of, // extern polymorphic
  var_push, // extern
  var_next, // extern
  var_from_to_by, // extern
  var_for_each, // extern polymorphic
  var_213_0_finally, // dynamic
  var_break, // extern
  var_basic_loops__from, // extern
  var_basic_loops__to, // extern
  var_basic_loops__body, // extern
  var_basic_loops__finally, // extern
  var_tuple, // extern
  var_std__not, // extern
  var_basic_types__break_function, // extern
  var_basic_loops__saved_context_of, // extern polymorphic
  var_parameter_count_of, // extern
  var_std__equal, // extern
  var_std__plus, // extern
  var_map, // extern polymorphic
  var_281_0_self, // dynamic
  var_282_0_function, // dynamic
  var_292_3_s, // dynamic
  var_292_5_e, // dynamic
  var_std__shift_right, // extern
  var_288_1_map, // dynamic
  var_301_3_s, // dynamic
  var_301_5_e, // dynamic
  var_map_or_error, // extern polymorphic
  var_325_0_self, // dynamic
  var_326_0_function, // dynamic
  var_336_3_s, // dynamic
  var_336_5_e, // dynamic
  var_332_1_map, // dynamic
  var_344_1_mapped_item, // dynamic
  var_350_3_s, // dynamic
  var_350_5_e, // dynamic
  var_358_1_mapped_item, // dynamic
  var_std__reduce, // extern polymorphic
  var_378_0_self, // dynamic
  var_379_0_function, // dynamic
  var_380_0_unit, // dynamic
  var_386_10_items, // dynamic
  var_387_1_n, // dynamic
  var_reduce_columns, // extern polymorphic
  var_401_0_reduction, // dynamic
  var_reduce, // extern
  var_reduce_rows, // extern polymorphic
  var_408_0_reduction, // dynamic
  var_410_19_right, // dynamic
  var_map_reduce, // extern polymorphic
  var_423_0_self, // dynamic
  var_424_0_map_function, // dynamic
  var_425_0_reduce_function, // dynamic
  var_426_0_unit, // dynamic
  var_result_count, // extern
  var_438_3_s, // dynamic
  var_438_5_e, // dynamic
  var_434_1_map_reduce, // dynamic
  var_451_3_s, // dynamic
  var_451_5_e, // dynamic
  var_473_3_s, // dynamic
  var_473_5_e, // dynamic
  var_469_1_map_reduce, // dynamic
  var_482_3_s, // dynamic
  var_482_5_e, // dynamic
  var_map_reduce_rows, // extern polymorphic
  var_496_0_map_function, // dynamic
  var_497_0_reduce_function, // dynamic
  var_502_8_right, // dynamic
  var_map_reduce_columns, // extern polymorphic
  var_508_0_map_function, // dynamic
  var_509_0_reduce_function, // dynamic
  var_sort, // extern polymorphic
  var_516_0_compare, // dynamic
  var_less, // extern
  var_520_8_items, // dynamic
  var_521_1_n, // dynamic
  var_merge, // extern polymorphic
  var_intersection, // extern polymorphic
  var_528_40_left, // dynamic
  var_528_45_right, // dynamic
  var_std__or, // extern
  var_534_7_item, // dynamic
  var_contains, // extern polymorphic
  var_546_0_left, // dynamic
  var_547_0_right, // dynamic
  var_548_0_compare, // dynamic
  var_550_1_i, // dynamic
  var_551_1_j, // dynamic
  var_552_1_n, // dynamic
  var_553_1_m, // dynamic
  var_554_1_result, // dynamic
  var_loop, // extern
  var_zip, // extern polymorphic
  var_584_0_left, // dynamic
  var_585_0_right, // dynamic
  var_587_1_n, // dynamic
  var_588_1_m, // dynamic
  var_589_1_k, // dynamic
  var_min, // extern
  var_590_1_result, // dynamic
  var_cond, // extern
  var_from_to, // extern
  var_flatten, // extern polymorphic
  var_611_3_item, // dynamic
  var_dup, // extern polymorphic
  var_629_0_self, // dynamic
  var_630_0_n, // dynamic
  var_638_1_dlst, // dynamic
  var_std__times, // extern
  var_case, // extern
  var_648_0_self, // dynamic
  var_649_0_item, // dynamic
  var_find_first, // extern polymorphic
  var_661_38_self, // dynamic
  var_661_43_test, // dynamic
  var_665_3_idx, // dynamic
  var_665_7_item, // dynamic
  var_673_3_item, // dynamic
  var_filter, // extern polymorphic
  var_680_34_self, // dynamic
  var_680_39_test, // dynamic
  var_687_1_good, // dynamic
  var_688_1_bad, // dynamic
  var_690_3_item, // dynamic
  var_704_10_s, // dynamic
  var_704_12_e, // dynamic
  var_std__levenshtein_distance, // initialized
  var_722_0_s, // dynamic
  var_723_0_t, // dynamic
  var_726_1_n, // dynamic
  var_727_1_v0, // dynamic
  var_int16_array, // extern
  var_728_1_v1, // dynamic
  var_735_3_i, // dynamic
  var_738_3_j, // dynamic
  var_assign, // extern
  var_debug__to_string, // extern polymorphic
  var_759_0_self, // dynamic
  var_760_0_indent, // dynamic
  var_761_0_depth, // dynamic
  var_766_1_len, // dynamic
  var_std__string, // extern
  var_772_1_new_indent, // dynamic
  var_std__minus, // extern
  var_775_1_text, // dynamic
  var_tabs_and_spaces, // extern
  var_to_list, // extern polymorphic
  var_serialization_tag_of, // extern polymorphic
  var_serialize, // extern polymorphic
  var_793_0_indent, // dynamic
  var_is_defined, // extern
  var_795_1_new_indent, // dynamic
  var_804_1_header, // dynamic
  var_update_if, // extern
  var_deserializer_of, // extern polymorphic
  var_deserializers, // extern
  var_register_type, // extern
  var__END
};


static TAB_NUM t_func_std_types__generic_list___put[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 73_0_self
  LOCAL(4), // 74_0_item
  // list(item) self)
  var_list, 1, LOCAL(4), 1, LOCAL(1),
  // append(list(item) self)
  var_append, 2, LOCAL(1), LOCAL(3), 1, LOCAL(2),
  // -> append(list(item) self)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(76, 13),
  POS(76, 6),
  POS(76, 3)
};

static TAB_NUM t_func_std_types__generic_list___get[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 82_0_self
  // range(self 2 -1) self(1)
  var_range, 3, LOCAL(3), num_2, minus_num_1, 1, LOCAL(1),
  // self(1)
  LOCAL(3), 1, num_1, 1, LOCAL(2),
  // -> range(self 2 -1) self(1)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(84, 6),
  POS(84, 23),
  POS(84, 3)
};

static TAB_NUM t_func_std_types__generic_list___pop[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 90_0_self
  // range(self 1 -2) self(-1)
  var_range, 3, LOCAL(3), num_1, minus_num_2, 1, LOCAL(1),
  // self(-1)
  LOCAL(3), 1, minus_num_1, 1, LOCAL(2),
  // -> range(self 1 -2) self(-1)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(92, 6),
  POS(92, 23),
  POS(92, 3)
};

static TAB_NUM t_func_std_types__generic_list___truncate[] = {
  2, // locals
  2, // parameters
  var_98_0_self,
  var_99_0_n,
  // $len length_of(self)
  var_length_of, 1, var_98_0_self, 1, LOCAL(2),
  // n
  var_std__less, 2, var_99_0_n, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(101, 3),
  POS(103, 11),
  POS(102, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // range(self 1 n)
  var_range, 3, var_98_0_self, num_1, var_99_0_n, 1, LOCAL(1),
  //  range(self 1 n)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(104, 8),
  POS(104, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_98_0_self, TAIL_CALL,
  POS(105, 7)
};

static TAB_NUM t_func_std_types__generic_list___append_or_error[] = {
  1, // locals
  2, // parameters
  var_107_43_left,
  var_107_48_right,
  // is_an_error
  var_is_an_error, 1, var_107_43_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(109, 10),
  POS(108, 3)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  left
  LET, 1, var_107_43_left, TAIL_CALL,
  POS(110, 7)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // is_an_error
  var_is_an_error, 1, var_107_48_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_5, lambda_6, TAIL_CALL,
  POS(113, 15),
  POS(112, 7)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  right
  LET, 1, var_107_48_right, TAIL_CALL,
  POS(114, 11)
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // append(left right)
  var_append, 2, var_107_43_left, var_107_48_right, 1, LOCAL(1),
  //  append(left right)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(115, 12),
  POS(115, 11)
};

static TAB_NUM t_func_std__concatenate[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 122_20_separator
  // new $func concatenation_function: (myself^ left right)
  var_new, 2, var_concatenation_function, lambda_7, 1, LOCAL(3),
  // .separator_of separator)
  LET, -1, LOCAL(3), var_separator_of, LOCAL(2), LOCAL(1),
  // -> func(.separator_of separator)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(123, 3),
  POS(125, 11),
  POS(125, 3)
};

static TAB_NUM t_lambda_7[] = {
  5, // locals
  -3, // parameters
  MYSELF_PARAMETER, LOCAL(3), // 123_35_myself
  MANDATORY_PARAMETER, LOCAL(4), // 123_43_left
  MANDATORY_PARAMETER, LOCAL(5), // 123_48_right
  // separator_of(myself)) right
  var_separator_of, 1, LOCAL(3), 1, LOCAL(1),
  // append(left separator_of(myself)) right
  var_append, 2, LOCAL(4), LOCAL(1), 1, LOCAL(2),
  // append append(left separator_of(myself)) right
  var_append, 2, LOCAL(2), LOCAL(5), TAIL_CALL,
  POS(124, 24),
  POS(124, 12),
  POS(124, 5)
};

static TAB_NUM t_func_std__concatenate_non_empty[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 127_30_separator
  // .separator_of separator)
  LET, -1, func_func, var_separator_of, LOCAL(2), LOCAL(1),
  // -> func(.separator_of separator)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(137, 11),
  POS(137, 3)
};

static TAB_NUM t_func_func[] = {
  1, // locals
  -3, // parameters
  MYSELF_PARAMETER, var_128_8_myself,
  MANDATORY_PARAMETER, var_128_16_left,
  MANDATORY_PARAMETER, var_128_21_right,
  // is_empty
  var_is_empty, 1, var_128_16_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(130, 12),
  POS(129, 5)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  right
  LET, 1, var_128_21_right, TAIL_CALL,
  POS(131, 9)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_128_21_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(134, 17),
  POS(133, 9)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  left
  LET, 1, var_128_16_left, TAIL_CALL,
  POS(135, 13)
};

static TAB_NUM t_lambda_11[] = {
  2, // locals
  0, // parameters
  // separator_of(myself) right)
  var_separator_of, 1, var_128_8_myself, 1, LOCAL(1),
  // append(left separator_of(myself) right)
  var_append, 3, var_128_16_left, LOCAL(1), var_128_21_right, 1, LOCAL(2),
  //  append(left separator_of(myself) right)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(136, 26),
  POS(136, 14),
  POS(136, 13)
};

static TAB_NUM t_func_std_types__generic_list___reverse[] = {
  1, // locals
  1, // parameters
  var_143_0_self,
  // $result empty_collection_of(self)
  var_empty_collection_of, 1, var_143_0_self, 1, var_145_1_result,
  // length_of(self) 1 -1
  var_length_of, 1, var_143_0_self, 1, LOCAL(1),
  // from_to_by length_of(self) 1 -1
  var_from_to_by, 5, LOCAL(1), num_1, minus_num_1, lambda_12, lambda_13, TAIL_CALL,
  POS(145, 3),
  POS(146, 14),
  POS(146, 3)
};

static TAB_NUM t_lambda_12[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 147_3_idx
  // self(idx)
  var_143_0_self, 1, LOCAL(2), 1, LOCAL(1),
  // push &result self(idx)
  var_push, 2, var_145_1_result, LOCAL(1), 1, var_145_1_result,
  // next
  var_next, 0, TAIL_CALL,
  POS(148, 20),
  POS(148, 7),
  POS(149, 7)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  result
  LET, 1, var_145_1_result, TAIL_CALL,
  POS(150, 7)
};

static TAB_NUM t_func_std_types__generic_list___for_each[] = {
  5, // locals
  3, // parameters
  LOCAL(3), // 211_0_self
  LOCAL(4), // 212_0_body
  var_213_0_finally,
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
  LET, 1, var_213_0_finally, 1, var_basic_loops__finally,
  // new !break basic_types::break_function: (myself^)
  var_new, 2, var_basic_types__break_function, lambda_18, IO_CALL(1), var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(5), var_break,
  // parameter_count_of(body) == 2:
  var_parameter_count_of, 1, LOCAL(4), 1, LOCAL(1),
  // parameter_count_of(body) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_19, lambda_20, IO_TAIL_CALL,
  POS(215, 3),
  POS(225, 3),
  POS(226, 3),
  POS(227, 3),
  POS(228, 3),
  POS(229, 3),
  POS(249, 3),
  POS(257, 4),
  POS(260, 5),
  POS(260, 5),
  POS(259, 3)
};

static TAB_NUM t_func_iterate_1[] = {
  2, // locals
  0, // parameters
  // basic_loops::to # another item available?
  var_std__less, 2, var_basic_loops__to, var_basic_loops__from, 1, LOCAL(1),
  // basic_loops::to # another item available?
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_14, lambda_15, IO_TAIL_CALL,
  POS(233, 28),
  POS(233, 28),
  POS(232, 5)
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  0, // parameters
  // basic_loops::self(basic_loops::from)
  var_basic_loops__self, 1, var_basic_loops__from, 1, LOCAL(1),
  // basic_loops::body! basic_loops::self(basic_loops::from)
  var_basic_loops__body, 1, LOCAL(1), IO_TAIL_CALL,
  POS(235, 28),
  POS(235, 9)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(238, 9)
};

static TAB_NUM t_func_iterate_2[] = {
  2, // locals
  0, // parameters
  // basic_loops::to # another item available?
  var_std__less, 2, var_basic_loops__to, var_basic_loops__from, 1, LOCAL(1),
  // basic_loops::to # another item available?
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_16, lambda_17, IO_TAIL_CALL,
  POS(242, 28),
  POS(242, 28),
  POS(241, 5)
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // basic_loops::self(basic_loops::from)
  var_basic_loops__self, 1, var_basic_loops__from, 1, LOCAL(1),
  // basic_loops::body! basic_loops::from basic_loops::self(basic_loops::from)
  var_basic_loops__body, 2, var_basic_loops__from, LOCAL(1), IO_TAIL_CALL,
  POS(244, 46),
  POS(244, 9)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(247, 9)
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 249_41_myself
  // !finally basic_loops::finally
  LET, 1, var_basic_loops__finally, 1, var_213_0_finally,
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 7, var_next, var_break, var_basic_loops__from, var_basic_loops__to, var_basic_loops__self, var_basic_loops__body, var_basic_loops__finally,
  // finally!
  var_213_0_finally, 0, IO_TAIL_CALL,
  POS(250, 5),
  POS(251, 5),
  POS(251, 5),
  POS(255, 5)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  // !next:
  LET, 1, lambda_next, 1, var_next,
  // iterate_2! # start the first iteration
  func_iterate_2, 0, IO_TAIL_CALL,
  POS(261, 7),
  POS(264, 7)
};

static TAB_NUM t_lambda_next[] = {
  0, // locals
  0, // parameters
  // !basic_loops::from basic_loops::from+1 # increase the list index
  var_std__plus, 2, var_basic_loops__from, num_1, 1, var_basic_loops__from,
  // iterate_2! # start the next iteration
  func_iterate_2, 0, IO_TAIL_CALL,
  POS(262, 9),
  POS(263, 9)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  // !next:
  LET, 1, lambda_2_next, 1, var_next,
  // iterate_1! # start the first iteration
  func_iterate_1, 0, IO_TAIL_CALL,
  POS(266, 7),
  POS(269, 7)
};

static TAB_NUM t_lambda_2_next[] = {
  0, // locals
  0, // parameters
  // !basic_loops::from basic_loops::from+1 # increase the list index
  var_std__plus, 2, var_basic_loops__from, num_1, 1, var_basic_loops__from,
  // iterate_1! # start the next iteration
  func_iterate_1, 0, IO_TAIL_CALL,
  POS(267, 9),
  POS(268, 9)
};

static TAB_NUM t_func_std_types__generic_list___map[] = {
  1, // locals
  2, // parameters
  var_281_0_self,
  var_282_0_function,
  // is_empty
  var_is_empty, 1, var_281_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21, lambda_22, TAIL_CALL,
  POS(285, 10),
  POS(284, 3)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_281_0_self, TAIL_CALL,
  POS(286, 7)
};

static TAB_NUM t_lambda_22[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(function) == 2
  var_parameter_count_of, 1, var_282_0_function, 1, LOCAL(1),
  // parameter_count_of(function) == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // $map
  var_if, 3, LOCAL(2), lambda_23, lambda_27, 1, var_288_1_map,
  // length_of(self)
  var_length_of, 1, var_281_0_self, 1, LOCAL(1),
  // map 1 length_of(self)
  var_288_1_map, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(290, 11),
  POS(290, 11),
  POS(288, 7),
  POS(310, 13),
  POS(310, 7)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_24, TAIL_CALL,
  POS(291, 13)
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  2, // parameters
  var_292_3_s,
  var_292_5_e,
  // s < e:
  var_std__less, 2, var_292_3_s, var_292_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25, lambda_26, TAIL_CALL,
  POS(294, 17),
  POS(293, 15)
};

static TAB_NUM t_lambda_25[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_292_3_s, var_292_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map(s m)
  var_288_1_map, 2, var_292_3_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map(m+1 e)
  var_288_1_map, 2, LOCAL(2), var_292_5_e, 1, LOCAL(3),
  // append
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(295, 23),
  POS(295, 19),
  POS(297, 21),
  POS(298, 25),
  POS(298, 21),
  POS(296, 19)
};

static TAB_NUM t_lambda_26[] = {
  3, // locals
  0, // parameters
  // self(s)))
  var_281_0_self, 1, var_292_3_s, 1, LOCAL(1),
  // function(s self(s)))
  var_282_0_function, 2, var_292_3_s, LOCAL(1), 1, LOCAL(2),
  // list(function(s self(s)))
  var_list, 1, LOCAL(2), 1, LOCAL(3),
  //  list(function(s self(s)))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(299, 36),
  POS(299, 25),
  POS(299, 20),
  POS(299, 19)
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_28, TAIL_CALL,
  POS(300, 13)
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  2, // parameters
  var_301_3_s,
  var_301_5_e,
  // s < e:
  var_std__less, 2, var_301_3_s, var_301_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_29, lambda_30, TAIL_CALL,
  POS(303, 17),
  POS(302, 15)
};

static TAB_NUM t_lambda_29[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_301_3_s, var_301_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map(s m)
  var_288_1_map, 2, var_301_3_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map(m+1 e)
  var_288_1_map, 2, LOCAL(2), var_301_5_e, 1, LOCAL(3),
  // append
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(304, 23),
  POS(304, 19),
  POS(306, 21),
  POS(307, 25),
  POS(307, 21),
  POS(305, 19)
};

static TAB_NUM t_lambda_30[] = {
  3, // locals
  0, // parameters
  // self(s)))
  var_281_0_self, 1, var_301_3_s, 1, LOCAL(1),
  // function(self(s)))
  var_282_0_function, 1, LOCAL(1), 1, LOCAL(2),
  // list(function(self(s)))
  var_list, 1, LOCAL(2), 1, LOCAL(3),
  //  list(function(self(s)))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(308, 34),
  POS(308, 25),
  POS(308, 20),
  POS(308, 19)
};

static TAB_NUM t_func_std_types__generic_list___map_or_error[] = {
  1, // locals
  2, // parameters
  var_325_0_self,
  var_326_0_function,
  // is_empty
  var_is_empty, 1, var_325_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_31, lambda_32, TAIL_CALL,
  POS(329, 10),
  POS(328, 3)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_325_0_self, TAIL_CALL,
  POS(330, 7)
};

static TAB_NUM t_lambda_32[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(function) == 2
  var_parameter_count_of, 1, var_326_0_function, 1, LOCAL(1),
  // parameter_count_of(function) == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // $map
  var_if, 3, LOCAL(2), lambda_33, lambda_39, 1, var_332_1_map,
  // length_of(self)
  var_length_of, 1, var_325_0_self, 1, LOCAL(1),
  // map 1 length_of(self)
  var_332_1_map, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(334, 11),
  POS(334, 11),
  POS(332, 7),
  POS(364, 13),
  POS(364, 7)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_34, TAIL_CALL,
  POS(335, 13)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  2, // parameters
  var_336_3_s,
  var_336_5_e,
  // s < e:
  var_std__less, 2, var_336_3_s, var_336_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_35, lambda_36, TAIL_CALL,
  POS(338, 17),
  POS(337, 15)
};

static TAB_NUM t_lambda_35[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_336_3_s, var_336_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map(s m)
  var_332_1_map, 2, var_336_3_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map(m+1 e)
  var_332_1_map, 2, LOCAL(2), var_336_5_e, 1, LOCAL(3),
  // append_or_error
  var_append_or_error, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(339, 23),
  POS(339, 19),
  POS(341, 21),
  POS(342, 25),
  POS(342, 21),
  POS(340, 19)
};

static TAB_NUM t_lambda_36[] = {
  1, // locals
  0, // parameters
  // self(s))
  var_325_0_self, 1, var_336_3_s, 1, LOCAL(1),
  // $mapped_item function(s self(s))
  var_326_0_function, 2, var_336_3_s, LOCAL(1), 1, var_344_1_mapped_item,
  // is_an_error
  var_is_an_error, 1, var_344_1_mapped_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_37, lambda_38, TAIL_CALL,
  POS(344, 43),
  POS(344, 19),
  POS(346, 33),
  POS(345, 19)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  //  mapped_item
  LET, 1, var_344_1_mapped_item, TAIL_CALL,
  POS(347, 23)
};

static TAB_NUM t_lambda_38[] = {
  1, // locals
  0, // parameters
  // list(mapped_item)
  var_list, 1, var_344_1_mapped_item, 1, LOCAL(1),
  //  list(mapped_item)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(348, 24),
  POS(348, 23)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_40, TAIL_CALL,
  POS(349, 13)
};

static TAB_NUM t_lambda_40[] = {
  1, // locals
  2, // parameters
  var_350_3_s,
  var_350_5_e,
  // s < e:
  var_std__less, 2, var_350_3_s, var_350_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_41, lambda_42, TAIL_CALL,
  POS(352, 17),
  POS(351, 15)
};

static TAB_NUM t_lambda_41[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_350_3_s, var_350_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map(s m)
  var_332_1_map, 2, var_350_3_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map(m+1 e)
  var_332_1_map, 2, LOCAL(2), var_350_5_e, 1, LOCAL(3),
  // append_or_error
  var_append_or_error, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(353, 23),
  POS(353, 19),
  POS(355, 21),
  POS(356, 25),
  POS(356, 21),
  POS(354, 19)
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // self(s))
  var_325_0_self, 1, var_350_3_s, 1, LOCAL(1),
  // $mapped_item function(self(s))
  var_326_0_function, 1, LOCAL(1), 1, var_358_1_mapped_item,
  // is_an_error
  var_is_an_error, 1, var_358_1_mapped_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_43, lambda_44, TAIL_CALL,
  POS(358, 41),
  POS(358, 19),
  POS(360, 33),
  POS(359, 19)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  //  mapped_item
  LET, 1, var_358_1_mapped_item, TAIL_CALL,
  POS(361, 23)
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  0, // parameters
  // list(mapped_item)
  var_list, 1, var_358_1_mapped_item, 1, LOCAL(1),
  //  list(mapped_item)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(362, 24),
  POS(362, 23)
};

static TAB_NUM t_func_std_types__generic_list___std__reduce[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_378_0_self,
  var_append, var_379_0_function,
  var_undefined, var_380_0_unit,
  // is_empty
  var_is_empty, 1, var_378_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_45, lambda_46, TAIL_CALL,
  POS(383, 10),
  POS(382, 3)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_380_0_unit, TAIL_CALL,
  POS(384, 7)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  // reduce self
  func_reduce, 1, var_378_0_self, TAIL_CALL,
  POS(396, 7)
};

static TAB_NUM t_func_reduce[] = {
  2, // locals
  1, // parameters
  var_386_10_items,
  // $n length_of(items)
  var_length_of, 1, var_386_10_items, 1, var_387_1_n,
  // n >= 2:
  var_std__less, 2, var_387_1_n, num_2, 1, LOCAL(1),
  // n >= 2:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_47, lambda_48, TAIL_CALL,
  POS(387, 9),
  POS(389, 11),
  POS(389, 11),
  POS(388, 9)
};

static TAB_NUM t_lambda_47[] = {
  6, // locals
  0, // parameters
  // $m n >> 1
  var_std__shift_right, 2, var_387_1_n, num_1, 1, LOCAL(6),
  // range(items 1 m))
  var_range, 3, var_386_10_items, num_1, LOCAL(6), 1, LOCAL(1),
  // reduce(range(items 1 m))
  func_reduce, 1, LOCAL(1), 1, LOCAL(2),
  // m+1 -1))
  var_std__plus, 2, LOCAL(6), num_1, 1, LOCAL(3),
  // range(items m+1 -1))
  var_range, 3, var_386_10_items, LOCAL(3), minus_num_1, 1, LOCAL(4),
  // reduce(range(items m+1 -1))
  func_reduce, 1, LOCAL(4), 1, LOCAL(5),
  // function
  var_379_0_function, 2, LOCAL(2), LOCAL(5), TAIL_CALL,
  POS(390, 13),
  POS(392, 22),
  POS(392, 15),
  POS(393, 34),
  POS(393, 22),
  POS(393, 15),
  POS(391, 13)
};

static TAB_NUM t_lambda_48[] = {
  1, // locals
  0, // parameters
  // items(1)
  var_386_10_items, 1, num_1, 1, LOCAL(1),
  //  items(1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(394, 14),
  POS(394, 13)
};

static TAB_NUM t_func_std_types__list___reduce_columns[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 400_0_self
  var_401_0_reduction,
  // map self: (item) reduce item reduction
  var_map, 2, LOCAL(1), lambda_49, TAIL_CALL,
  POS(403, 3)
};

static TAB_NUM t_lambda_49[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 403_11_item
  // reduce item reduction
  var_reduce, 2, LOCAL(1), var_401_0_reduction, TAIL_CALL,
  POS(403, 20)
};

static TAB_NUM t_func_std_types__list___reduce_rows[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 407_0_self
  var_408_0_reduction,
  // reduce self: (left right)
  var_reduce, 2, LOCAL(1), lambda_50, TAIL_CALL,
  POS(410, 3)
};

static TAB_NUM t_lambda_50[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 410_14_left
  var_410_19_right,
  // map left: (idx item) -> reduction(item right(idx))
  var_map, 2, LOCAL(1), lambda_51, TAIL_CALL,
  POS(411, 5)
};

static TAB_NUM t_lambda_51[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 411_11_idx
  LOCAL(4), // 411_15_item
  // right(idx))
  var_410_19_right, 1, LOCAL(3), 1, LOCAL(1),
  // reduction(item right(idx))
  var_408_0_reduction, 2, LOCAL(4), LOCAL(1), 1, LOCAL(2),
  // -> reduction(item right(idx))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(411, 44),
  POS(411, 29),
  POS(411, 26)
};

static TAB_NUM t_func_std_types__generic_list___map_reduce[] = {
  2, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_423_0_self,
  MANDATORY_PARAMETER, var_424_0_map_function,
  var_append, var_425_0_reduce_function,
  var_undefined, var_426_0_unit,
  // result_count() == 2: # updates the list *and* returns the reduction
  var_result_count, 0, 1, LOCAL(1),
  // result_count() == 2: # updates the list *and* returns the reduction
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_52, lambda_63, TAIL_CALL,
  POS(429, 5),
  POS(429, 5),
  POS(428, 3)
};

static TAB_NUM t_lambda_52[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_423_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_53, lambda_54, TAIL_CALL,
  POS(431, 14),
  POS(430, 7)
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  //  self unit
  LET, 2, var_423_0_self, var_426_0_unit, TAIL_CALL,
  POS(432, 11)
};

static TAB_NUM t_lambda_54[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(map_function) == 2
  var_parameter_count_of, 1, var_424_0_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // $map_reduce
  var_if, 3, LOCAL(2), lambda_55, lambda_59, 1, var_434_1_map_reduce,
  // length_of(self)
  var_length_of, 1, var_423_0_self, 1, LOCAL(1),
  // map_reduce 1 length_of(self)
  var_434_1_map_reduce, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(436, 15),
  POS(436, 15),
  POS(434, 11),
  POS(463, 24),
  POS(463, 11)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_56, TAIL_CALL,
  POS(437, 17)
};

static TAB_NUM t_lambda_56[] = {
  1, // locals
  2, // parameters
  var_438_3_s,
  var_438_5_e,
  // s < e:
  var_std__less, 2, var_438_3_s, var_438_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_57, lambda_58, TAIL_CALL,
  POS(440, 21),
  POS(439, 19)
};

static TAB_NUM t_lambda_57[] = {
  7, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_438_3_s, var_438_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(3),
  // map_reduce s m $left_items $left_value
  var_434_1_map_reduce, 2, var_438_3_s, LOCAL(3), 2, LOCAL(4), LOCAL(5),
  // m+1 e $right_items $right_value
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // map_reduce m+1 e $right_items $right_value
  var_434_1_map_reduce, 2, LOCAL(1), var_438_5_e, 2, LOCAL(6), LOCAL(7),
  // append(left_items right_items)
  var_append, 2, LOCAL(4), LOCAL(6), 1, LOCAL(1),
  // reduce_function(left_value right_value)
  var_425_0_reduce_function, 2, LOCAL(5), LOCAL(7), 1, LOCAL(2),
  // ->
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(441, 27),
  POS(441, 23),
  POS(442, 23),
  POS(443, 34),
  POS(443, 23),
  POS(445, 25),
  POS(446, 25),
  POS(444, 23)
};

static TAB_NUM t_lambda_58[] = {
  3, // locals
  0, // parameters
  // self(s) $item $value
  var_423_0_self, 1, var_438_3_s, 1, LOCAL(1),
  // map_function s self(s) $item $value
  var_424_0_map_function, 2, var_438_3_s, LOCAL(1), 2, LOCAL(2), LOCAL(3),
  // list(item) value
  var_list, 1, LOCAL(2), 1, LOCAL(1),
  // -> list(item) value
  LET, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(448, 38),
  POS(448, 23),
  POS(449, 26),
  POS(449, 23)
};

static TAB_NUM t_lambda_59[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_60, TAIL_CALL,
  POS(450, 17)
};

static TAB_NUM t_lambda_60[] = {
  1, // locals
  2, // parameters
  var_451_3_s,
  var_451_5_e,
  // s < e:
  var_std__less, 2, var_451_3_s, var_451_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_61, lambda_62, TAIL_CALL,
  POS(453, 21),
  POS(452, 19)
};

static TAB_NUM t_lambda_61[] = {
  7, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_451_3_s, var_451_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(3),
  // map_reduce s m $left_items $left_value
  var_434_1_map_reduce, 2, var_451_3_s, LOCAL(3), 2, LOCAL(4), LOCAL(5),
  // m+1 e $right_items $right_value
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // map_reduce m+1 e $right_items $right_value
  var_434_1_map_reduce, 2, LOCAL(1), var_451_5_e, 2, LOCAL(6), LOCAL(7),
  // append(left_items right_items)
  var_append, 2, LOCAL(4), LOCAL(6), 1, LOCAL(1),
  // reduce_function(left_value right_value)
  var_425_0_reduce_function, 2, LOCAL(5), LOCAL(7), 1, LOCAL(2),
  // ->
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(454, 27),
  POS(454, 23),
  POS(455, 23),
  POS(456, 34),
  POS(456, 23),
  POS(458, 25),
  POS(459, 25),
  POS(457, 23)
};

static TAB_NUM t_lambda_62[] = {
  3, // locals
  0, // parameters
  // self(s) $item $value
  var_423_0_self, 1, var_451_3_s, 1, LOCAL(1),
  // map_function self(s) $item $value
  var_424_0_map_function, 1, LOCAL(1), 2, LOCAL(2), LOCAL(3),
  // list(item) value
  var_list, 1, LOCAL(2), 1, LOCAL(1),
  // -> list(item) value
  LET, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(461, 36),
  POS(461, 23),
  POS(462, 26),
  POS(462, 23)
};

static TAB_NUM t_lambda_63[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_423_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_64, lambda_65, TAIL_CALL,
  POS(466, 14),
  POS(465, 7)
};

static TAB_NUM t_lambda_64[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_426_0_unit, TAIL_CALL,
  POS(467, 11)
};

static TAB_NUM t_lambda_65[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(map_function) == 2
  var_parameter_count_of, 1, var_424_0_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // $map_reduce
  var_if, 3, LOCAL(2), lambda_66, lambda_70, 1, var_469_1_map_reduce,
  // length_of(self)
  var_length_of, 1, var_423_0_self, 1, LOCAL(1),
  // map_reduce 1 length_of(self)
  var_469_1_map_reduce, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(471, 15),
  POS(471, 15),
  POS(469, 11),
  POS(491, 24),
  POS(491, 11)
};

static TAB_NUM t_lambda_66[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_67, TAIL_CALL,
  POS(472, 17)
};

static TAB_NUM t_lambda_67[] = {
  1, // locals
  2, // parameters
  var_473_3_s,
  var_473_5_e,
  // s < e:
  var_std__less, 2, var_473_3_s, var_473_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_68, lambda_69, TAIL_CALL,
  POS(475, 21),
  POS(474, 19)
};

static TAB_NUM t_lambda_68[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_473_3_s, var_473_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map_reduce(s m)
  var_469_1_map_reduce, 2, var_473_3_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map_reduce(m+1 e)
  var_469_1_map_reduce, 2, LOCAL(2), var_473_5_e, 1, LOCAL(3),
  // reduce_function
  var_425_0_reduce_function, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(476, 27),
  POS(476, 23),
  POS(478, 25),
  POS(479, 36),
  POS(479, 25),
  POS(477, 23)
};

static TAB_NUM t_lambda_69[] = {
  2, // locals
  0, // parameters
  // self(s))
  var_423_0_self, 1, var_473_3_s, 1, LOCAL(1),
  // map_function(s self(s))
  var_424_0_map_function, 2, var_473_3_s, LOCAL(1), 1, LOCAL(2),
  //  map_function(s self(s))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(480, 39),
  POS(480, 24),
  POS(480, 23)
};

static TAB_NUM t_lambda_70[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_71, TAIL_CALL,
  POS(481, 17)
};

static TAB_NUM t_lambda_71[] = {
  1, // locals
  2, // parameters
  var_482_3_s,
  var_482_5_e,
  // s < e:
  var_std__less, 2, var_482_3_s, var_482_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_72, lambda_73, TAIL_CALL,
  POS(484, 21),
  POS(483, 19)
};

static TAB_NUM t_lambda_72[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_482_3_s, var_482_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map_reduce(s m)
  var_469_1_map_reduce, 2, var_482_3_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map_reduce(m+1 e)
  var_469_1_map_reduce, 2, LOCAL(2), var_482_5_e, 1, LOCAL(3),
  // reduce_function
  var_425_0_reduce_function, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(485, 27),
  POS(485, 23),
  POS(487, 25),
  POS(488, 36),
  POS(488, 25),
  POS(486, 23)
};

static TAB_NUM t_lambda_73[] = {
  2, // locals
  0, // parameters
  // self(s))
  var_423_0_self, 1, var_482_3_s, 1, LOCAL(1),
  // map_function(self(s))
  var_424_0_map_function, 1, LOCAL(1), 1, LOCAL(2),
  //  map_function(self(s))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(489, 37),
  POS(489, 24),
  POS(489, 23)
};

static TAB_NUM t_func_std_types__generic_list___map_reduce_rows[] = {
  1, // locals
  3, // parameters
  LOCAL(1), // 495_0_self
  var_496_0_map_function,
  var_497_0_reduce_function,
  // map_reduce self
  var_map_reduce, 3, LOCAL(1), lambda_74, lambda_75, TAIL_CALL,
  POS(499, 3)
};

static TAB_NUM t_lambda_74[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 500_3_items
  // map items map_function
  var_map, 2, LOCAL(1), var_496_0_map_function, TAIL_CALL,
  POS(501, 7)
};

static TAB_NUM t_lambda_75[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 502_3_left
  var_502_8_right,
  // map left: (idx item) -> reduce_function(item right(idx))
  var_map, 2, LOCAL(1), lambda_76, TAIL_CALL,
  POS(503, 7)
};

static TAB_NUM t_lambda_76[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 503_11_idx
  LOCAL(4), // 503_15_item
  // right(idx))
  var_502_8_right, 1, LOCAL(3), 1, LOCAL(1),
  // reduce_function(item right(idx))
  var_497_0_reduce_function, 2, LOCAL(4), LOCAL(1), 1, LOCAL(2),
  // -> reduce_function(item right(idx))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(503, 52),
  POS(503, 31),
  POS(503, 28)
};

static TAB_NUM t_func_std_types__generic_list___map_reduce_columns[] = {
  1, // locals
  3, // parameters
  LOCAL(1), // 507_0_self
  var_508_0_map_function,
  var_509_0_reduce_function,
  // map self: (item) map_reduce item map_function reduce_function
  var_map, 2, LOCAL(1), lambda_77, TAIL_CALL,
  POS(511, 3)
};

static TAB_NUM t_lambda_77[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 511_11_item
  // map_reduce item map_function reduce_function
  var_map_reduce, 3, LOCAL(1), var_508_0_map_function, var_509_0_reduce_function, TAIL_CALL,
  POS(511, 20)
};

static TAB_NUM t_func_std_types__generic_list___sort[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 515_0_self
  var_less, var_516_0_compare,
  // sort self
  func_sort, 1, LOCAL(1), TAIL_CALL,
  POS(518, 3)
};

static TAB_NUM t_func_sort[] = {
  1, // locals
  1, // parameters
  var_520_8_items,
  // $n length_of(items)
  var_length_of, 1, var_520_8_items, 1, var_521_1_n,
  // 1:
  var_std__less, 2, num_1, var_521_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_78, lambda_79, TAIL_CALL,
  POS(521, 5),
  POS(523, 11),
  POS(522, 5)
};

static TAB_NUM t_lambda_78[] = {
  6, // locals
  0, // parameters
  // $m n >> 1
  var_std__shift_right, 2, var_521_1_n, num_1, 1, LOCAL(6),
  // range(items 1 m)) sort(range(items m+1 n)) compare
  var_range, 3, var_520_8_items, num_1, LOCAL(6), 1, LOCAL(1),
  // sort(range(items 1 m)) sort(range(items m+1 n)) compare
  func_sort, 1, LOCAL(1), 1, LOCAL(2),
  // m+1 n)) compare
  var_std__plus, 2, LOCAL(6), num_1, 1, LOCAL(3),
  // range(items m+1 n)) compare
  var_range, 3, var_520_8_items, LOCAL(3), var_521_1_n, 1, LOCAL(4),
  // sort(range(items m+1 n)) compare
  func_sort, 1, LOCAL(4), 1, LOCAL(5),
  // merge sort(range(items 1 m)) sort(range(items m+1 n)) compare
  var_merge, 3, LOCAL(2), LOCAL(5), var_516_0_compare, TAIL_CALL,
  POS(524, 9),
  POS(525, 20),
  POS(525, 15),
  POS(525, 55),
  POS(525, 43),
  POS(525, 38),
  POS(525, 9)
};

static TAB_NUM t_lambda_79[] = {
  0, // locals
  0, // parameters
  //  items
  LET, 1, var_520_8_items, TAIL_CALL,
  POS(526, 9)
};

static TAB_NUM t_func_std_types__generic_list___intersection[] = {
  2, // locals
  2, // parameters
  var_528_40_left,
  var_528_45_right,
  // is_empty || right.is_empty
  var_is_empty, 1, var_528_40_left, 1, LOCAL(1),
  // is_empty || right.is_empty
  var_std__or, 2, LOCAL(1), lambda_80, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_81, lambda_82, TAIL_CALL,
  POS(530, 10),
  POS(530, 10),
  POS(529, 3)
};

static TAB_NUM t_lambda_80[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_528_45_right, 1, LOCAL(1),
  // right.is_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(530, 28),
  POS(530, 22)
};

static TAB_NUM t_lambda_81[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(531, 7)
};

static TAB_NUM t_lambda_82[] = {
  1, // locals
  0, // parameters
  // map_reduce
  var_map_reduce, 4, var_528_40_left, lambda_left, var_append, var_empty_list, 1, LOCAL(1),
  // 
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(533, 7),
  POS(532, 7)
};

static TAB_NUM t_lambda_left[] = {
  1, // locals
  1, // parameters
  var_534_7_item,
  // right .contains. item
  var_contains, 2, var_528_45_right, var_534_7_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_83, lambda_84, TAIL_CALL,
  POS(536, 13),
  POS(535, 11)
};

static TAB_NUM t_lambda_83[] = {
  1, // locals
  0, // parameters
  // list(item)
  var_list, 1, var_534_7_item, 1, LOCAL(1),
  //  list(item)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(537, 16),
  POS(537, 15)
};

static TAB_NUM t_lambda_84[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(538, 15)
};

static TAB_NUM t_func_std_types__generic_list___merge[] = {
  0, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_546_0_left,
  MANDATORY_PARAMETER, var_547_0_right,
  var_less, var_548_0_compare,
  // $i 1
  LET, 1, num_1, 1, var_550_1_i,
  // $j i
  LET, 1, var_550_1_i, 1, var_551_1_j,
  // $n length_of(left)
  var_length_of, 1, var_546_0_left, 1, var_552_1_n,
  // $m length_of(right)
  var_length_of, 1, var_547_0_right, 1, var_553_1_m,
  // $result new(left empty_list)
  var_new, 2, var_546_0_left, var_empty_list, 1, var_554_1_result,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(550, 3),
  POS(551, 3),
  POS(552, 3),
  POS(553, 3),
  POS(554, 3),
  POS(555, 3)
};

static TAB_NUM t_lambda_loop[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_552_1_n, var_550_1_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_85, lambda_90, TAIL_CALL,
  POS(557, 12),
  POS(557, 12),
  POS(556, 5)
};

static TAB_NUM t_lambda_85[] = {
  2, // locals
  0, // parameters
  // m:
  var_std__less, 2, var_553_1_m, var_551_1_j, 1, LOCAL(1),
  // m:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_86, lambda_89, TAIL_CALL,
  POS(559, 16),
  POS(559, 16),
  POS(558, 9)
};

static TAB_NUM t_lambda_86[] = {
  3, // locals
  0, // parameters
  // left(i) right(j)):
  var_546_0_left, 1, var_550_1_i, 1, LOCAL(1),
  // right(j)):
  var_547_0_right, 1, var_551_1_j, 1, LOCAL(2),
  // compare(left(i) right(j)):
  var_548_0_compare, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_87, lambda_88, TAIL_CALL,
  POS(561, 23),
  POS(561, 31),
  POS(561, 15),
  POS(560, 13)
};

static TAB_NUM t_lambda_87[] = {
  1, // locals
  0, // parameters
  // left(i)
  var_546_0_left, 1, var_550_1_i, 1, LOCAL(1),
  // push &result left(i)
  var_push, 2, var_554_1_result, LOCAL(1), 1, var_554_1_result,
  // !i i+1
  var_std__plus, 2, var_550_1_i, num_1, 1, var_550_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(562, 30),
  POS(562, 17),
  POS(563, 17),
  POS(564, 17)
};

static TAB_NUM t_lambda_88[] = {
  1, // locals
  0, // parameters
  // right(j)
  var_547_0_right, 1, var_551_1_j, 1, LOCAL(1),
  // push &result right(j)
  var_push, 2, var_554_1_result, LOCAL(1), 1, var_554_1_result,
  // !j j+1
  var_std__plus, 2, var_551_1_j, num_1, 1, var_551_1_j,
  // next
  var_next, 0, TAIL_CALL,
  POS(566, 30),
  POS(566, 17),
  POS(567, 17),
  POS(568, 17)
};

static TAB_NUM t_lambda_89[] = {
  1, // locals
  0, // parameters
  // range(left i n)
  var_range, 3, var_546_0_left, var_550_1_i, var_552_1_n, 1, LOCAL(1),
  // append result range(left i n)
  var_append, 2, var_554_1_result, LOCAL(1), TAIL_CALL,
  POS(570, 27),
  POS(570, 13)
};

static TAB_NUM t_lambda_90[] = {
  1, // locals
  0, // parameters
  // range(right j m)
  var_range, 3, var_547_0_right, var_551_1_j, var_553_1_m, 1, LOCAL(1),
  // append result range(right j m)
  var_append, 2, var_554_1_result, LOCAL(1), TAIL_CALL,
  POS(572, 23),
  POS(572, 9)
};

static TAB_NUM t_func_std_types__generic_list___zip[] = {
  0, // locals
  2, // parameters
  var_584_0_left,
  var_585_0_right,
  // $n length_of(left)
  var_length_of, 1, var_584_0_left, 1, var_587_1_n,
  // $m length_of(right)
  var_length_of, 1, var_585_0_right, 1, var_588_1_m,
  // $k min(n m)
  var_min, 2, var_587_1_n, var_588_1_m, 1, var_589_1_k,
  // $result new(left empty_list)
  var_new, 2, var_584_0_left, var_empty_list, 1, var_590_1_result,
  // from_to 1 k
  var_from_to, 4, num_1, var_589_1_k, lambda_91, lambda_92, TAIL_CALL,
  POS(587, 3),
  POS(588, 3),
  POS(589, 3),
  POS(590, 3),
  POS(591, 3)
};

static TAB_NUM t_lambda_91[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 592_3_i
  // left(i)
  var_584_0_left, 1, LOCAL(2), 1, LOCAL(1),
  // push &result left(i)
  var_push, 2, var_590_1_result, LOCAL(1), 1, var_590_1_result,
  // right(i)
  var_585_0_right, 1, LOCAL(2), 1, LOCAL(1),
  // push &result right(i)
  var_push, 2, var_590_1_result, LOCAL(1), 1, var_590_1_result,
  // next
  var_next, 0, TAIL_CALL,
  POS(593, 20),
  POS(593, 7),
  POS(594, 20),
  POS(594, 7),
  POS(595, 7)
};

static TAB_NUM t_lambda_92[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_93, lambda_95, lambda_97, TAIL_CALL,
  POS(597, 7)
};

static TAB_NUM t_lambda_93[] = {
  1, // locals
  0, // parameters
  // k -> append(result range(left k+1 n))
  var_std__less, 2, var_589_1_k, var_587_1_n, 1, LOCAL(1),
  //  n > k -> append(result range(left k+1 n))
  LET, 2, LOCAL(1), lambda_94, TAIL_CALL,
  POS(598, 16),
  POS(598, 11)
};

static TAB_NUM t_lambda_94[] = {
  3, // locals
  0, // parameters
  // k+1 n))
  var_std__plus, 2, var_589_1_k, num_1, 1, LOCAL(1),
  // range(left k+1 n))
  var_range, 3, var_584_0_left, LOCAL(1), var_587_1_n, 1, LOCAL(2),
  // append(result range(left k+1 n))
  var_append, 2, var_590_1_result, LOCAL(2), 1, LOCAL(3),
  //  append(result range(left k+1 n))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(598, 46),
  POS(598, 35),
  POS(598, 21),
  POS(598, 20)
};

static TAB_NUM t_lambda_95[] = {
  1, // locals
  0, // parameters
  // k -> append(result range(right k+1 m))
  var_std__less, 2, var_589_1_k, var_588_1_m, 1, LOCAL(1),
  //  m > k -> append(result range(right k+1 m))
  LET, 2, LOCAL(1), lambda_96, TAIL_CALL,
  POS(599, 16),
  POS(599, 11)
};

static TAB_NUM t_lambda_96[] = {
  3, // locals
  0, // parameters
  // k+1 m))
  var_std__plus, 2, var_589_1_k, num_1, 1, LOCAL(1),
  // range(right k+1 m))
  var_range, 3, var_585_0_right, LOCAL(1), var_588_1_m, 1, LOCAL(2),
  // append(result range(right k+1 m))
  var_append, 2, var_590_1_result, LOCAL(2), 1, LOCAL(3),
  //  append(result range(right k+1 m))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(599, 47),
  POS(599, 35),
  POS(599, 21),
  POS(599, 20)
};

static TAB_NUM t_lambda_97[] = {
  0, // locals
  0, // parameters
  //  true -> result
  LET, 2, var_true, lambda_98, TAIL_CALL,
  POS(600, 11)
};

static TAB_NUM t_lambda_98[] = {
  0, // locals
  0, // parameters
  //  result
  LET, 1, var_590_1_result, TAIL_CALL,
  POS(600, 19)
};

static TAB_NUM t_func_std_types__generic_list___flatten[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 602_35_self
  // -> self # for strings
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(602, 42)
};

static TAB_NUM t_func_std_types__list___flatten[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 608_0_self
  // map_reduce self
  var_map_reduce, 4, LOCAL(1), lambda_99, var_append, var_empty_list, TAIL_CALL,
  POS(610, 3)
};

static TAB_NUM t_lambda_99[] = {
  1, // locals
  1, // parameters
  var_611_3_item,
  // is_a_list
  var_is_a_list, 1, var_611_3_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_100, lambda_101, TAIL_CALL,
  POS(613, 14),
  POS(612, 7)
};

static TAB_NUM t_lambda_100[] = {
  1, // locals
  0, // parameters
  // flatten(item)
  var_flatten, 1, var_611_3_item, 1, LOCAL(1),
  //  flatten(item)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(614, 12),
  POS(614, 11)
};

static TAB_NUM t_lambda_101[] = {
  1, // locals
  0, // parameters
  // list(item)
  var_list, 1, var_611_3_item, 1, LOCAL(1),
  //  list(item)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(615, 12),
  POS(615, 11)
};

static TAB_NUM t_func_std_types__generic_list___dup[] = {
  0, // locals
  2, // parameters
  var_629_0_self,
  var_630_0_n,
  // case n
  var_case, 6, var_630_0_n, num_0, lambda_102, num_1, lambda_103, lambda_104, TAIL_CALL,
  POS(632, 3)
};

static TAB_NUM t_lambda_102[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(633, 9)
};

static TAB_NUM t_lambda_103[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_629_0_self, TAIL_CALL,
  POS(634, 9)
};

static TAB_NUM t_lambda_104[] = {
  4, // locals
  0, // parameters
  // $h n >> 1 # fails if <n> is not a positive integer
  var_std__shift_right, 2, var_630_0_n, num_1, 1, LOCAL(3),
  // $lst dup(self h)
  var_dup, 2, var_629_0_self, LOCAL(3), 1, LOCAL(4),
  // $dlst append(lst lst)
  var_append, 2, LOCAL(4), LOCAL(4), 1, var_638_1_dlst,
  // 2*h == n
  var_std__times, 2, num_2, LOCAL(3), 1, LOCAL(1),
  // 2*h == n
  var_std__equal, 2, LOCAL(1), var_630_0_n, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_105, lambda_106, TAIL_CALL,
  POS(636, 7),
  POS(637, 7),
  POS(638, 7),
  POS(640, 9),
  POS(640, 9),
  POS(639, 7)
};

static TAB_NUM t_lambda_105[] = {
  0, // locals
  0, // parameters
  //  dlst
  LET, 1, var_638_1_dlst, TAIL_CALL,
  POS(641, 11)
};

static TAB_NUM t_lambda_106[] = {
  1, // locals
  0, // parameters
  // append(dlst self)
  var_append, 2, var_638_1_dlst, var_629_0_self, 1, LOCAL(1),
  //  append(dlst self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(642, 12),
  POS(642, 11)
};

static TAB_NUM t_func_std_types__generic_list___contains[] = {
  1, // locals
  2, // parameters
  var_648_0_self,
  var_649_0_item,
  // is_empty
  var_is_empty, 1, var_648_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_107, lambda_108, TAIL_CALL,
  POS(652, 10),
  POS(651, 3)
};

static TAB_NUM t_lambda_107[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(653, 7)
};

static TAB_NUM t_lambda_108[] = {
  2, // locals
  0, // parameters
  // self(1) == item
  var_648_0_self, 1, num_1, 1, LOCAL(1),
  // self(1) == item
  var_std__equal, 2, LOCAL(1), var_649_0_item, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_109, lambda_110, TAIL_CALL,
  POS(656, 9),
  POS(656, 9),
  POS(655, 7)
};

static TAB_NUM t_lambda_109[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(657, 11)
};

static TAB_NUM t_lambda_110[] = {
  1, // locals
  0, // parameters
  // range(self 2 -1) item
  var_range, 3, var_648_0_self, num_2, minus_num_1, 1, LOCAL(1),
  // contains range(self 2 -1) item
  var_contains, 2, LOCAL(1), var_649_0_item, TAIL_CALL,
  POS(659, 20),
  POS(659, 11)
};

static TAB_NUM t_func_std_types__generic_list___find_first[] = {
  2, // locals
  2, // parameters
  var_661_38_self,
  var_661_43_test,
  // result_count() == 2:
  var_result_count, 0, 1, LOCAL(1),
  // result_count() == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_111, lambda_115, TAIL_CALL,
  POS(663, 5),
  POS(663, 5),
  POS(662, 3)
};

static TAB_NUM t_lambda_111[] = {
  0, // locals
  0, // parameters
  // for_each self
  var_for_each, 3, var_661_38_self, lambda_112, lambda_114, TAIL_CALL,
  POS(664, 7)
};

static TAB_NUM t_lambda_112[] = {
  1, // locals
  2, // parameters
  var_665_3_idx,
  var_665_7_item,
  // test(item)
  var_661_43_test, 1, var_665_7_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_113, var_next, TAIL_CALL,
  POS(667, 13),
  POS(666, 11)
};

static TAB_NUM t_lambda_113[] = {
  0, // locals
  0, // parameters
  //  idx item
  LET, 2, var_665_3_idx, var_665_7_item, TAIL_CALL,
  POS(668, 15)
};

static TAB_NUM t_lambda_114[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(670, 11)
};

static TAB_NUM t_lambda_115[] = {
  0, // locals
  0, // parameters
  // for_each self
  var_for_each, 3, var_661_38_self, lambda_116, lambda_118, TAIL_CALL,
  POS(672, 7)
};

static TAB_NUM t_lambda_116[] = {
  1, // locals
  1, // parameters
  var_673_3_item,
  // test(item)
  var_661_43_test, 1, var_673_3_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_117, var_next, TAIL_CALL,
  POS(675, 13),
  POS(674, 11)
};

static TAB_NUM t_lambda_117[] = {
  0, // locals
  0, // parameters
  //  item
  LET, 1, var_673_3_item, TAIL_CALL,
  POS(676, 15)
};

static TAB_NUM t_lambda_118[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(678, 11)
};

static TAB_NUM t_func_std_types__generic_list___filter[] = {
  2, // locals
  2, // parameters
  var_680_34_self,
  var_680_39_test,
  // result_count() == 2:
  var_result_count, 0, 1, LOCAL(1),
  // result_count() == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_119, lambda_125, TAIL_CALL,
  POS(682, 5),
  POS(682, 5),
  POS(681, 3)
};

static TAB_NUM t_lambda_119[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_680_34_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_120, lambda_121, TAIL_CALL,
  POS(684, 14),
  POS(683, 7)
};

static TAB_NUM t_lambda_120[] = {
  0, // locals
  0, // parameters
  //  self self
  LET, 2, var_680_34_self, var_680_34_self, TAIL_CALL,
  POS(685, 11)
};

static TAB_NUM t_lambda_121[] = {
  0, // locals
  0, // parameters
  // $good empty_list
  LET, 1, var_empty_list, 1, var_687_1_good,
  // $bad empty_list
  LET, 1, var_empty_list, 1, var_688_1_bad,
  // for_each self
  var_for_each, 3, var_680_34_self, lambda_122, lambda_124, TAIL_CALL,
  POS(687, 11),
  POS(688, 11),
  POS(689, 11)
};

static TAB_NUM t_lambda_122[] = {
  1, // locals
  1, // parameters
  var_690_3_item,
  // test(item):
  var_680_39_test, 1, var_690_3_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_testitem, lambda_123, TAIL_CALL,
  POS(692, 17),
  POS(691, 15)
};

static TAB_NUM t_lambda_testitem[] = {
  0, // locals
  0, // parameters
  // push &good item
  var_push, 2, var_687_1_good, var_690_3_item, 1, var_687_1_good,
  // next
  var_next, 0, TAIL_CALL,
  POS(693, 19),
  POS(694, 19)
};

static TAB_NUM t_lambda_123[] = {
  0, // locals
  0, // parameters
  // push &bad item
  var_push, 2, var_688_1_bad, var_690_3_item, 1, var_688_1_bad,
  // next
  var_next, 0, TAIL_CALL,
  POS(696, 19),
  POS(697, 19)
};

static TAB_NUM t_lambda_124[] = {
  0, // locals
  0, // parameters
  //  good bad
  LET, 2, var_687_1_good, var_688_1_bad, TAIL_CALL,
  POS(698, 15)
};

static TAB_NUM t_lambda_125[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_680_34_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_126, lambda_127, TAIL_CALL,
  POS(701, 14),
  POS(700, 7)
};

static TAB_NUM t_lambda_126[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_680_34_self, TAIL_CALL,
  POS(702, 11)
};

static TAB_NUM t_lambda_127[] = {
  1, // locals
  0, // parameters
  // length_of(self)
  var_length_of, 1, var_680_34_self, 1, LOCAL(1),
  // filter 1 length_of(self)
  func_filter, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(717, 20),
  POS(717, 11)
};

static TAB_NUM t_func_filter[] = {
  1, // locals
  2, // parameters
  var_704_10_s,
  var_704_12_e,
  // s < e:
  var_std__less, 2, var_704_10_s, var_704_12_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_128, lambda_129, TAIL_CALL,
  POS(706, 15),
  POS(705, 13)
};

static TAB_NUM t_lambda_128[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_704_10_s, var_704_12_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // filter(s m)
  func_filter, 2, var_704_10_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // filter(m+1 e)
  func_filter, 2, LOCAL(2), var_704_12_e, 1, LOCAL(3),
  // append
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(707, 21),
  POS(707, 17),
  POS(709, 19),
  POS(710, 26),
  POS(710, 19),
  POS(708, 17)
};

static TAB_NUM t_lambda_129[] = {
  2, // locals
  0, // parameters
  // self(s))
  var_680_34_self, 1, var_704_10_s, 1, LOCAL(1),
  // test(self(s))
  var_680_39_test, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_130, lambda_131, TAIL_CALL,
  POS(713, 24),
  POS(713, 19),
  POS(712, 17)
};

static TAB_NUM t_lambda_130[] = {
  2, // locals
  0, // parameters
  // self(s))
  var_680_34_self, 1, var_704_10_s, 1, LOCAL(1),
  // list(self(s))
  var_list, 1, LOCAL(1), 1, LOCAL(2),
  //  list(self(s))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(714, 27),
  POS(714, 22),
  POS(714, 21)
};

static TAB_NUM t_lambda_131[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(715, 21)
};

static TAB_NUM t_func_std__levenshtein_distance[] = {
  2, // locals
  2, // parameters
  var_722_0_s,
  var_723_0_t,
  // $m length_of(s)
  var_length_of, 1, var_722_0_s, 1, LOCAL(2),
  // $n length_of(t)
  var_length_of, 1, var_723_0_t, 1, var_726_1_n,
  // n+1)
  var_std__plus, 2, var_726_1_n, num_1, 1, LOCAL(1),
  // $v0 int16_array(n+1)
  var_int16_array, 1, LOCAL(1), 1, var_727_1_v0,
  // n+1)
  var_std__plus, 2, var_726_1_n, num_1, 1, LOCAL(1),
  // $v1 int16_array(n+1)
  var_int16_array, 1, LOCAL(1), 1, var_728_1_v1,
  // from_to !v0 0 n
  var_from_to, 4, num_0, var_726_1_n, lambda_132, lambda_133, 1, var_727_1_v0,
  // from_to 1 m
  var_from_to, 4, num_1, LOCAL(2), lambda_134, lambda_139, TAIL_CALL,
  POS(725, 3),
  POS(726, 3),
  POS(727, 19),
  POS(727, 3),
  POS(728, 19),
  POS(728, 3),
  POS(729, 3),
  POS(734, 3)
};

static TAB_NUM t_lambda_132[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 730_3_i
  // i+1) i
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(2),
  // v0(i+1) i
  var_727_1_v0, 2, LOCAL(2), LOCAL(3), 1, var_727_1_v0,
  // next
  var_next, 0, TAIL_CALL,
  POS(731, 11),
  POS(731, 8),
  POS(732, 7)
};

static TAB_NUM t_lambda_133[] = {
  0, // locals
  0, // parameters
  //  v0
  LET, 1, var_727_1_v0, TAIL_CALL,
  POS(733, 7)
};

static TAB_NUM t_lambda_134[] = {
  0, // locals
  1, // parameters
  var_735_3_i,
  // v1(1) i
  var_728_1_v1, 2, num_1, var_735_3_i, 1, var_728_1_v1,
  // from_to 1 n
  var_from_to, 4, num_1, var_726_1_n, lambda_135, lambda_138, TAIL_CALL,
  POS(736, 8),
  POS(737, 7)
};

static TAB_NUM t_lambda_135[] = {
  6, // locals
  1, // parameters
  var_738_3_j,
  // j+1)+1
  var_std__plus, 2, var_738_3_j, num_1, 1, LOCAL(1),
  // v0(j+1)+1
  var_727_1_v0, 1, LOCAL(1), 1, LOCAL(2),
  // $deletion_cost v0(j+1)+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(4),
  // v1(j)+1
  var_728_1_v1, 1, var_738_3_j, 1, LOCAL(1),
  // $insertion_cost v1(j)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(5),
  // s(i) == t(j)
  var_722_0_s, 1, var_735_3_i, 1, LOCAL(1),
  // t(j)
  var_723_0_t, 1, var_738_3_j, 1, LOCAL(2),
  // s(i) == t(j)
  var_std__equal, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // $substitution_cost
  var_if, 3, LOCAL(3), lambda_136, lambda_137, 1, LOCAL(6),
  // !v1(j+1) min(deletion_cost insertion_cost substitution_cost)
  var_min, 3, LOCAL(4), LOCAL(5), LOCAL(6), 1, LOCAL(2),
  // j+1) min(deletion_cost insertion_cost substitution_cost)
  var_std__plus, 2, var_738_3_j, num_1, 1, LOCAL(3),
  // v1(j+1) min(deletion_cost insertion_cost substitution_cost)
  var_728_1_v1, 2, LOCAL(3), LOCAL(2), 1, var_728_1_v1,
  // next
  var_next, 0, TAIL_CALL,
  POS(739, 29),
  POS(739, 26),
  POS(739, 11),
  POS(740, 27),
  POS(740, 11),
  POS(743, 15),
  POS(743, 23),
  POS(743, 15),
  POS(741, 11),
  POS(746, 11),
  POS(746, 15),
  POS(746, 12),
  POS(747, 11)
};

static TAB_NUM t_lambda_136[] = {
  1, // locals
  0, // parameters
  // v0(j)
  var_727_1_v0, 1, var_738_3_j, 1, LOCAL(1),
  //  v0(j)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(744, 18),
  POS(744, 17)
};

static TAB_NUM t_lambda_137[] = {
  2, // locals
  0, // parameters
  // v0(j)+1
  var_727_1_v0, 1, var_738_3_j, 1, LOCAL(1),
  // v0(j)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  //  v0(j)+1
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(745, 18),
  POS(745, 18),
  POS(745, 17)
};

static TAB_NUM t_lambda_138[] = {
  0, // locals
  0, // parameters
  // assign
  LET, 2, var_728_1_v1, var_727_1_v0, 2, var_727_1_v0, var_728_1_v1,
  // next
  var_next, 0, TAIL_CALL,
  POS(749, 11),
  POS(752, 11)
};

static TAB_NUM t_lambda_139[] = {
  2, // locals
  0, // parameters
  // n+1)
  var_std__plus, 2, var_726_1_n, num_1, 1, LOCAL(1),
  // v0(n+1)
  var_727_1_v0, 1, LOCAL(1), 1, LOCAL(2),
  //  v0(n+1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(753, 11),
  POS(753, 8),
  POS(753, 7)
};

static TAB_NUM t_func_std_types__list___debug__to_string[] = {
  0, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_759_0_self,
  num_0, var_760_0_indent,
  num_1, var_761_0_depth,
  // cond
  var_cond, 3, lambda_140, lambda_142, lambda_146, TAIL_CALL,
  POS(763, 3)
};

static TAB_NUM t_lambda_140[] = {
  1, // locals
  0, // parameters
  // is_empty -> "empty_list@nl;"
  var_is_empty, 1, var_759_0_self, 1, LOCAL(1),
  //  self.is_empty -> "empty_list@nl;"
  LET, 2, LOCAL(1), lambda_141, TAIL_CALL,
  POS(764, 13),
  POS(764, 7)
};

static TAB_NUM t_lambda_141[] = {
  0, // locals
  0, // parameters
  //  "empty_list@nl;"
  LET, 1, str_empty_list, TAIL_CALL,
  POS(764, 24)
};

static TAB_NUM t_lambda_142[] = {
  2, // locals
  0, // parameters
  // 1:
  var_std__less, 2, num_1, var_761_0_depth, 1, LOCAL(1),
  // 1:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  //  depth <= 1:
  LET, 2, LOCAL(2), lambda_143, TAIL_CALL,
  POS(765, 17),
  POS(765, 17),
  POS(765, 7)
};

static TAB_NUM t_lambda_143[] = {
  1, // locals
  0, // parameters
  // $len length_of(self)
  var_length_of, 1, var_759_0_self, 1, var_766_1_len,
  // len == 1
  var_std__equal, 2, var_766_1_len, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_144, lambda_145, TAIL_CALL,
  POS(766, 7),
  POS(768, 9),
  POS(767, 7)
};

static TAB_NUM t_lambda_144[] = {
  0, // locals
  0, // parameters
  //  "<list of 1 item>@nl;"
  LET, 1, str_list_of_1_item, TAIL_CALL,
  POS(769, 11)
};

static TAB_NUM t_lambda_145[] = {
  1, // locals
  0, // parameters
  // "<list of @(len) items>@nl;"
  var_std__string, 3, str_list_of, var_766_1_len, str__items, 1, LOCAL(1),
  //  "<list of @(len) items>@nl;"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(770, 12),
  POS(770, 11)
};

static TAB_NUM t_lambda_146[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_147, TAIL_CALL,
  POS(771, 7)
};

static TAB_NUM t_lambda_147[] = {
  3, // locals
  0, // parameters
  // $new_indent indent+2
  var_std__plus, 2, var_760_0_indent, num_2, 1, var_772_1_new_indent,
  // map_reduce $contents
  var_map_reduce, 4, var_759_0_self, lambda_self, var_append, string_1, 1, LOCAL(3),
  // tabs_and_spaces(indent) "list@nl;") contents
  var_tabs_and_spaces, 1, var_760_0_indent, 1, LOCAL(1),
  // append("@nl;" tabs_and_spaces(indent) "list@nl;") contents
  var_append, 3, string_2, LOCAL(1), str_list, 1, LOCAL(2),
  // append append("@nl;" tabs_and_spaces(indent) "list@nl;") contents
  var_append, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(772, 7),
  POS(773, 7),
  POS(782, 28),
  POS(782, 14),
  POS(782, 7)
};

static TAB_NUM t_lambda_self[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 774_7_value
  // depth-1)
  var_std__minus, 2, var_761_0_depth, num_1, 1, LOCAL(1),
  // $text debug::to_string(value new_indent depth-1)
  var_debug__to_string, 3, LOCAL(3), var_772_1_new_indent, LOCAL(1), 1, var_775_1_text,
  // text(1) == '@nl;'
  var_775_1_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_148, lambda_149, TAIL_CALL,
  POS(775, 51),
  POS(775, 11),
  POS(777, 13),
  POS(777, 13),
  POS(776, 11)
};

static TAB_NUM t_lambda_148[] = {
  1, // locals
  0, // parameters
  // range(text 2 -1)
  var_range, 3, var_775_1_text, num_2, minus_num_1, 1, LOCAL(1),
  //  range(text 2 -1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(778, 16),
  POS(778, 15)
};

static TAB_NUM t_lambda_149[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(new_indent) text)
  var_tabs_and_spaces, 1, var_772_1_new_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(new_indent) text)
  var_append, 2, LOCAL(1), var_775_1_text, 1, LOCAL(2),
  //  append(tabs_and_spaces(new_indent) text)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(779, 23),
  POS(779, 16),
  POS(779, 15)
};

static TAB_NUM t_func_std_types__list___to_list[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 786_27_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(786, 34)
};

static TAB_NUM t_func_std_types__list___serialize[] = {
  4, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 792_0_self
  var_undefined, var_793_0_indent,
  // is_defined
  var_is_defined, 1, var_793_0_indent, 1, LOCAL(1),
  // $new_indent
  var_if, 3, LOCAL(1), lambda_150, lambda_151, 1, var_795_1_new_indent,
  // map_reduce $contents
  var_map_reduce, 4, LOCAL(3), lambda_2_self, var_append, string_1, 1, LOCAL(4),
  // serialization_tag_of(self)) <@(length_of(self))>
  var_serialization_tag_of, 1, LOCAL(3), 1, LOCAL(1),
  // length_of(self))>
  var_length_of, 1, LOCAL(3), 1, LOCAL(2),
  // $header
  var_std__string, 4, LOCAL(1), string_3, LOCAL(2), string_4, 1, var_804_1_header,
  // is_defined &header -> append(tabs_and_spaces(indent) header)
  var_is_defined, 1, var_793_0_indent, 1, LOCAL(1),
  // update_if indent.is_defined &header -> append(tabs_and_spaces(indent) header)
  var_update_if, 3, LOCAL(1), var_804_1_header, lambda_152, 1, var_804_1_header,
  // append header contents
  var_append, 2, var_804_1_header, LOCAL(4), TAIL_CALL,
  POS(797, 14),
  POS(795, 3),
  POS(800, 3),
  POS(806, 9),
  POS(806, 40),
  POS(804, 3),
  POS(807, 20),
  POS(807, 3),
  POS(808, 3)
};

static TAB_NUM t_lambda_150[] = {
  1, // locals
  0, // parameters
  // indent+2
  var_std__plus, 2, var_793_0_indent, num_2, 1, LOCAL(1),
  //  indent+2
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(798, 10),
  POS(798, 9)
};

static TAB_NUM t_lambda_151[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(799, 9)
};

static TAB_NUM t_lambda_2_self[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 801_7_item
  // serialize(item new_indent)
  var_serialize, 2, LOCAL(2), var_795_1_new_indent, 1, LOCAL(1),
  // -> serialize(item new_indent)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(801, 21),
  POS(801, 18)
};

static TAB_NUM t_lambda_152[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) header)
  var_tabs_and_spaces, 1, var_793_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) header)
  var_append, 2, LOCAL(1), var_804_1_header, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) header)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(807, 49),
  POS(807, 42),
  POS(807, 41)
};

static TAB_NUM t_func_std_types__list___deserializer_of[] = {
  2, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(2), // 813_0_items
  // -> items
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(815, 3)
};

static TAB_NUM t_module_entry[] = {
  0, // locals
  0, // parameters
  // register_type &deserializers std_types::list
  var_register_type, 2, var_deserializers, var_std_types__list, 1, var_deserializers,
  LET, 1, 0, TAIL_CALL,
  POS(819, 1)
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__concatenate_non_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_func}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___reverse}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___for_each}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_iterate_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_iterate_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___map}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___map_or_error}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___std__reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__list___reduce_columns}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__list___reduce_rows}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___map_reduce}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___map_reduce_rows}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___map_reduce_columns}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___sort}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_sort}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___intersection}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_left}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___merge}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_88}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_89}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_90}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___zip}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_91}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_93}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_94}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_95}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_96}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_97}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_98}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___flatten}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__list___flatten}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_99}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_100}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_101}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___dup}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_102}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_103}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_104}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_105}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_106}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___contains}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_107}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_108}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_109}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_110}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___find_first}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_111}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_112}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_113}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_114}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_115}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_116}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_117}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_118}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_list___filter}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_119}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_120}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_121}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_122}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_testitem}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_123}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_124}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_125}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_126}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_127}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_filter}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_128}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_129}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_130}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_131}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__levenshtein_distance}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_132}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_133}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_134}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_135}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_136}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_137}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_138}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_139}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__list___debug__to_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_140}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_141}},
  {FLT_STRING_8, 11, {.str_8 = "empty_list\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_142}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_143}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_144}},
  {FLT_STRING_8, 17, {.str_8 = "<list of 1 item>\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_145}},
  {FLT_STRING_8, 9, {.str_8 = "<list of "}},
  {FLT_STRING_8, 8, {.str_8 = " items>\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_146}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_147}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_self}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_148}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_149}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_STRING_8, 5, {.str_8 = "list\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__list___to_list}},
  {FLT_STRING_8, 4, {.str_8 = "list"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__list___serialize}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_150}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_151}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_self}},
  {FLT_STRING_8, 2, {.str_8 = " <"}},
  {FLT_STRING_8, 2, {.str_8 = ">\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_152}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__list___deserializer_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_module_entry}}
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
  {var_map_reduce_rows, -func_std_types__generic_list___map_reduce_rows},
  {var_map_reduce_columns, -func_std_types__generic_list___map_reduce_columns},
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
  {-var_neutral_element_of, -var_empty_list},
  {var_reduce_columns, -func_std_types__list___reduce_columns},
  {var_reduce_rows, -func_std_types__list___reduce_rows},
  {var_flatten, -func_std_types__list___flatten},
  {var_debug__to_string, -func_std_types__list___debug__to_string},
  {var_to_list, -func_std_types__list___to_list},
  {-var_serialization_tag_of, -str_list_2},
  {var_serialize, -func_std_types__list___serialize},
  {-var_deserializer_of, -func_std_types__list___deserializer_of},
  {-var_empty_collection_of, -var_empty_list}
};

static ATTRIBUTE_DEFINITION concatenation_function__attributes[] = {
  {-var_separator_of, -var_undefined}
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
    {.position = POS(38, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(38, 1)}
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
    {.position = POS(43, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_generic_list\000", NULL,
    {.position = POS(43, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(43, 38)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(49, 20)}
  },
  {
    FOT_UNKNOWN, 0, 23,
    "generic_list\000std_types", std_types__generic_list__attributes,
    {.position = POS(55, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(55, 44)}
  },
  {
    FOT_UNKNOWN, 0, 11,
    "list\000std_types", std_types__list__attributes,
    {.position = POS(61, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "neutral_element_of\000", NULL,
    {.position = POS(67, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(67, 37)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "put\000", NULL,
    {.position = POS(69, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(76, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(76, 6)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "get\000", NULL,
    {.position = POS(78, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(84, 6)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "pop\000", NULL,
    {.position = POS(86, 26)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate\000", NULL,
    {.position = POS(94, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "98_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "99_0_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(101, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(103, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(102, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "append_or_error\000", NULL,
    {.position = POS(107, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "107_43_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "107_48_right\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(109, 10)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "separator_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_DERIVED, 0, 1,
    "concatenation_function\000", concatenation_function__attributes,
    {"function\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "function\000std_types", NULL,
    {.position = POS(119, 25)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "concatenate\000std", NULL,
    {.const_idx = -func_std__concatenate}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(123, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "concatenate_non_empty\000std", NULL,
    {.const_idx = -func_std__concatenate_non_empty}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "128_8_myself\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "128_16_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "128_21_right\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(130, 12)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reverse\000", NULL,
    {.position = POS(139, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "143_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "145_1_result\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(145, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(148, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(149, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to_by\000", NULL,
    {.position = POS(146, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
    {.position = POS(152, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "213_0_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(218, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from\000basic_loops", NULL,
    {.position = POS(219, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to\000basic_loops", NULL,
    {.position = POS(220, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "body\000basic_loops", NULL,
    {.position = POS(222, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finally\000basic_loops", NULL,
    {.position = POS(223, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(216, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(233, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break_function\000basic_types", NULL,
    {.position = POS(249, 14)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "saved_context_of\000basic_loops", NULL,
    {.position = POS(251, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(260, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(260, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(262, 28)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map\000", NULL,
    {.position = POS(271, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "281_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "282_0_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "292_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "292_5_e\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(295, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "288_1_map\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "301_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "301_5_e\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_or_error\000", NULL,
    {.position = POS(312, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "325_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "326_0_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "336_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "336_5_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "332_1_map\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "344_1_mapped_item\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "350_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "350_5_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "358_1_mapped_item\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reduce\000std", NULL,
    {.position = POS(366, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "378_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "379_0_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "380_0_unit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "386_10_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "387_1_n\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reduce_columns\000", NULL,
    {.position = POS(398, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "401_0_reduction\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "reduce\000", NULL,
    {.position = POS(403, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reduce_rows\000", NULL,
    {.position = POS(405, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "408_0_reduction\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "410_19_right\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(413, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "423_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "424_0_map_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "425_0_reduce_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "426_0_unit\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(429, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "438_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "438_5_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "434_1_map_reduce\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "451_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "451_5_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "473_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "473_5_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "469_1_map_reduce\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "482_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "482_5_e\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce_rows\000", NULL,
    {.position = POS(493, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "496_0_map_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "497_0_reduce_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "502_8_right\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce_columns\000", NULL,
    {.position = POS(505, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "508_0_map_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "509_0_reduce_function\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "sort\000", NULL,
    {.position = POS(513, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "516_0_compare\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000", NULL,
    {.position = POS(516, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "520_8_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "521_1_n\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "merge\000", NULL,
    {.position = POS(525, 9)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "intersection\000", NULL,
    {.position = POS(528, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "528_40_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "528_45_right\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(530, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "534_7_item\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "contains\000", NULL,
    {.position = POS(536, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "546_0_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "547_0_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "548_0_compare\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "550_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "551_1_j\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "552_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "553_1_m\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "554_1_result\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(555, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "zip\000", NULL,
    {.position = POS(574, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "584_0_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "585_0_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "587_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "588_1_m\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "589_1_k\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "min\000", NULL,
    {.position = POS(589, 6)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "590_1_result\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(597, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to\000", NULL,
    {.position = POS(591, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "flatten\000", NULL,
    {.position = POS(602, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "611_3_item\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "dup\000", NULL,
    {.position = POS(619, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "629_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "630_0_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "638_1_dlst\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(640, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(632, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "648_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "649_0_item\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "find_first\000", NULL,
    {.position = POS(661, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "661_38_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "661_43_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "665_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "665_7_item\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "673_3_item\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "filter\000", NULL,
    {.position = POS(680, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "680_34_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "680_39_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "687_1_good\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "688_1_bad\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "690_3_item\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "704_10_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "704_12_e\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "levenshtein_distance\000std", NULL,
    {.const_idx = -func_std__levenshtein_distance}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "722_0_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "723_0_t\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "726_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "727_1_v0\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "int16_array\000", NULL,
    {.position = POS(727, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "728_1_v1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "735_3_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "738_3_j\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000", NULL,
    {.position = POS(749, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_string\000debug", NULL,
    {.position = POS(757, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "759_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "760_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "761_0_depth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "766_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(770, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "772_1_new_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(775, 51)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "775_1_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(779, 23)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_list\000", NULL,
    {.position = POS(786, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(788, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(790, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "793_0_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(797, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "795_1_new_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "804_1_header\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(807, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deserializer_of\000", NULL,
    {.position = POS(810, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deserializers\000", NULL,
    {.position = POS(819, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "register_type\000", NULL,
    {.position = POS(819, 1)}
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
  .feature_flags = FEAT_POSITIONS|FEAT_INITIALIZER,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  214, // number of constants
  201, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
