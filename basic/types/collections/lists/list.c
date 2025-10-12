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
  func_std_types__generic_list___common_prefix = -11,
  lambda_3 = -12,
  lambda_4 = -13,
  lambda_5 = -14,
  lambda_6 = -15,
  func_std_types__generic_list___append_or_error = -16,
  lambda_7 = -17,
  lambda_8 = -18,
  lambda_9 = -19,
  lambda_10 = -20,
  func_std__concatenate = -21,
  lambda_11 = -22,
  func_std__concatenate_non_empty = -23,
  func_func = -24,
  lambda_12 = -25,
  lambda_13 = -26,
  lambda_14 = -27,
  lambda_15 = -28,
  func_std_types__generic_list___reverse = -29,
  lambda_16 = -30,
  lambda_17 = -31,
  func_std_types__generic_list___for_each = -32,
  func_iterate_1 = -33,
  lambda_18 = -34,
  lambda_19 = -35,
  func_iterate_2 = -36,
  lambda_20 = -37,
  lambda_21 = -38,
  lambda_22 = -39,
  lambda_23 = -40,
  lambda_next = -41,
  lambda_24 = -42,
  lambda_2_next = -43,
  func_std_types__generic_list___map = -44,
  lambda_25 = -45,
  lambda_26 = -46,
  lambda_27 = -47,
  lambda_28 = -48,
  lambda_29 = -49,
  lambda_30 = -50,
  lambda_31 = -51,
  lambda_32 = -52,
  lambda_33 = -53,
  lambda_34 = -54,
  func_std_types__generic_list___map_or_error = -55,
  lambda_35 = -56,
  lambda_36 = -57,
  lambda_37 = -58,
  lambda_38 = -59,
  lambda_39 = -60,
  lambda_40 = -61,
  lambda_41 = -62,
  lambda_42 = -63,
  lambda_43 = -64,
  lambda_44 = -65,
  lambda_45 = -66,
  lambda_46 = -67,
  lambda_47 = -68,
  lambda_48 = -69,
  func_std_types__generic_list___std__reduce = -70,
  lambda_49 = -71,
  lambda_50 = -72,
  func_reduce = -73,
  lambda_51 = -74,
  lambda_52 = -75,
  func_std_types__list___reduce_columns = -76,
  lambda_53 = -77,
  func_std_types__list___reduce_rows = -78,
  lambda_54 = -79,
  lambda_55 = -80,
  func_std_types__generic_list___map_reduce = -81,
  lambda_56 = -82,
  lambda_57 = -83,
  lambda_58 = -84,
  lambda_59 = -85,
  lambda_60 = -86,
  lambda_61 = -87,
  lambda_62 = -88,
  lambda_63 = -89,
  lambda_64 = -90,
  lambda_65 = -91,
  lambda_66 = -92,
  lambda_67 = -93,
  lambda_68 = -94,
  lambda_69 = -95,
  lambda_70 = -96,
  lambda_71 = -97,
  lambda_72 = -98,
  lambda_73 = -99,
  lambda_74 = -100,
  lambda_75 = -101,
  lambda_76 = -102,
  lambda_77 = -103,
  func_std_types__generic_list___map_reduce_rows = -104,
  lambda_78 = -105,
  lambda_79 = -106,
  lambda_80 = -107,
  func_std_types__generic_list___map_reduce_columns = -108,
  lambda_81 = -109,
  func_std_types__generic_list___sort = -110,
  func_sort = -111,
  lambda_82 = -112,
  lambda_83 = -113,
  func_std_types__generic_list___intersection = -114,
  lambda_84 = -115,
  lambda_85 = -116,
  lambda_86 = -117,
  lambda_left = -118,
  lambda_87 = -119,
  lambda_88 = -120,
  func_std_types__generic_list___merge = -121,
  lambda_loop = -122,
  lambda_89 = -123,
  lambda_90 = -124,
  lambda_91 = -125,
  lambda_92 = -126,
  lambda_93 = -127,
  lambda_94 = -128,
  func_std_types__generic_list___zip = -129,
  lambda_95 = -130,
  lambda_96 = -131,
  lambda_97 = -132,
  lambda_98 = -133,
  lambda_99 = -134,
  lambda_100 = -135,
  lambda_101 = -136,
  lambda_102 = -137,
  func_std_types__generic_list___flatten = -138,
  func_std_types__list___flatten = -139,
  lambda_103 = -140,
  lambda_104 = -141,
  lambda_105 = -142,
  func_std_types__generic_list___dup = -143,
  num_0 = -144,
  lambda_106 = -145,
  lambda_107 = -146,
  lambda_108 = -147,
  lambda_109 = -148,
  lambda_110 = -149,
  func_std_types__generic_list___contains = -150,
  lambda_111 = -151,
  lambda_112 = -152,
  lambda_113 = -153,
  lambda_114 = -154,
  func_std_types__generic_list___find_first = -155,
  lambda_115 = -156,
  lambda_116 = -157,
  lambda_117 = -158,
  lambda_118 = -159,
  lambda_119 = -160,
  lambda_120 = -161,
  lambda_121 = -162,
  lambda_122 = -163,
  func_std_types__generic_list___filter = -164,
  lambda_123 = -165,
  lambda_124 = -166,
  lambda_125 = -167,
  lambda_126 = -168,
  lambda_testitem = -169,
  lambda_127 = -170,
  lambda_128 = -171,
  lambda_129 = -172,
  lambda_130 = -173,
  lambda_131 = -174,
  func_filter = -175,
  lambda_132 = -176,
  lambda_133 = -177,
  lambda_134 = -178,
  lambda_135 = -179,
  func_std__levenshtein_distance = -180,
  lambda_136 = -181,
  lambda_137 = -182,
  lambda_138 = -183,
  lambda_139 = -184,
  lambda_140 = -185,
  lambda_141 = -186,
  lambda_142 = -187,
  lambda_143 = -188,
  func_std_types__list___debug__to_string = -189,
  lambda_144 = -190,
  lambda_145 = -191,
  str_empty_list = -192,
  lambda_146 = -193,
  lambda_147 = -194,
  lambda_148 = -195,
  str_list_of_1_item = -196,
  lambda_149 = -197,
  str_list_of = -198,
  str__items = -199,
  lambda_150 = -200,
  lambda_151 = -201,
  lambda_self = -202,
  chr_10 = -203,
  lambda_152 = -204,
  lambda_153 = -205,
  string_1 = -206,
  string_2 = -207,
  str_list = -208,
  func_std_types__list___to_list = -209,
  str_list_2 = -210,
  func_std_types__list___serialize = -211,
  lambda_154 = -212,
  lambda_155 = -213,
  lambda_2_self = -214,
  string_3 = -215,
  string_4 = -216,
  lambda_156 = -217,
  func_std_types__list___deserializer_of = -218
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
  var_98_5_self, // dynamic
  var_99_5_n, // dynamic
  var_length_of, // extern
  var_std__less, // extern
  var_if, // extern
  var_std__common_prefix, // attribute
  var_common_prefix, // extern polymorphic
  var_109_42_left, // dynamic
  var_109_47_right, // dynamic
  var_update_if, // extern
  var_112_8_idx, // dynamic
  var_std__equal, // extern
  var_next, // extern
  var_std__minus, // extern
  var_for_each, // extern polymorphic
  var_append_or_error, // extern polymorphic
  var_119_44_left, // dynamic
  var_119_49_right, // dynamic
  var_is_an_error, // extern
  var_separator_of, // attribute
  var_concatenation_function, // derived
  var_std_types__function, // extern
  var_std__concatenate, // initialized
  var_new, // extern
  var_std__concatenate_non_empty, // initialized
  var_140_11_myself, // dynamic
  var_140_19_left, // dynamic
  var_140_24_right, // dynamic
  var_is_empty, // extern
  var_reverse, // extern polymorphic
  var_155_5_self, // dynamic
  var_157_4_result, // dynamic
  var_empty_collection_of, // extern polymorphic
  var_push, // extern
  var_from_to_by, // extern
  var_225_5_finally, // dynamic
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
  var_std__plus, // extern
  var_map, // extern polymorphic
  var_293_5_self, // dynamic
  var_294_5_function, // dynamic
  var_304_16_s, // dynamic
  var_304_18_e, // dynamic
  var_std__shift_right, // extern
  var_300_8_map, // dynamic
  var_313_16_s, // dynamic
  var_313_18_e, // dynamic
  var_map_or_error, // extern polymorphic
  var_337_5_self, // dynamic
  var_338_5_function, // dynamic
  var_348_16_s, // dynamic
  var_348_18_e, // dynamic
  var_344_8_map, // dynamic
  var_356_20_mapped_item, // dynamic
  var_362_16_s, // dynamic
  var_362_18_e, // dynamic
  var_370_20_mapped_item, // dynamic
  var_std__reduce, // extern polymorphic
  var_390_5_self, // dynamic
  var_391_5_function, // dynamic
  var_392_5_unit, // dynamic
  var_398_17_items, // dynamic
  var_399_10_n, // dynamic
  var_reduce_columns, // extern polymorphic
  var_413_5_reduction, // dynamic
  var_reduce, // extern
  var_reduce_rows, // extern polymorphic
  var_420_5_reduction, // dynamic
  var_422_22_right, // dynamic
  var_map_reduce, // extern polymorphic
  var_435_5_self, // dynamic
  var_436_5_map_function, // dynamic
  var_437_5_reduce_function, // dynamic
  var_438_5_unit, // dynamic
  var_result_count, // extern
  var_450_20_s, // dynamic
  var_450_22_e, // dynamic
  var_446_12_map_reduce, // dynamic
  var_463_20_s, // dynamic
  var_463_22_e, // dynamic
  var_485_20_s, // dynamic
  var_485_22_e, // dynamic
  var_481_12_map_reduce, // dynamic
  var_494_20_s, // dynamic
  var_494_22_e, // dynamic
  var_map_reduce_rows, // extern polymorphic
  var_508_5_map_function, // dynamic
  var_509_5_reduce_function, // dynamic
  var_514_13_right, // dynamic
  var_map_reduce_columns, // extern polymorphic
  var_520_5_map_function, // dynamic
  var_521_5_reduce_function, // dynamic
  var_sort, // extern polymorphic
  var_528_5_compare, // dynamic
  var_less, // extern
  var_532_11_items, // dynamic
  var_533_6_n, // dynamic
  var_merge, // extern polymorphic
  var_intersection, // extern polymorphic
  var_540_41_left, // dynamic
  var_540_46_right, // dynamic
  var_std__or, // extern
  var_546_16_item, // dynamic
  var_contains, // extern polymorphic
  var_558_5_left, // dynamic
  var_559_5_right, // dynamic
  var_560_5_compare, // dynamic
  var_562_4_i, // dynamic
  var_563_4_j, // dynamic
  var_564_4_n, // dynamic
  var_565_4_m, // dynamic
  var_566_4_result, // dynamic
  var_loop, // extern
  var_zip, // extern polymorphic
  var_596_5_left, // dynamic
  var_597_5_right, // dynamic
  var_599_4_n, // dynamic
  var_600_4_m, // dynamic
  var_601_4_k, // dynamic
  var_min, // extern
  var_602_4_result, // dynamic
  var_cond, // extern
  var_from_to, // extern
  var_flatten, // extern polymorphic
  var_623_8_item, // dynamic
  var_dup, // extern polymorphic
  var_641_5_self, // dynamic
  var_642_5_n, // dynamic
  var_650_8_dlst, // dynamic
  var_std__times, // extern
  var_case, // extern
  var_660_5_self, // dynamic
  var_661_5_item, // dynamic
  var_find_first, // extern polymorphic
  var_673_39_self, // dynamic
  var_673_44_test, // dynamic
  var_677_12_idx, // dynamic
  var_677_16_item, // dynamic
  var_685_12_item, // dynamic
  var_filter, // extern polymorphic
  var_692_35_self, // dynamic
  var_692_40_test, // dynamic
  var_699_12_good, // dynamic
  var_700_12_bad, // dynamic
  var_702_16_item, // dynamic
  var_716_21_s, // dynamic
  var_716_23_e, // dynamic
  var_std__levenshtein_distance, // initialized
  var_734_5_s, // dynamic
  var_735_5_t, // dynamic
  var_738_4_n, // dynamic
  var_739_4_v0, // dynamic
  var_int16_array, // extern
  var_740_4_v1, // dynamic
  var_747_8_i, // dynamic
  var_750_12_j, // dynamic
  var_assign, // extern
  var_debug__to_string, // extern polymorphic
  var_771_5_self, // dynamic
  var_772_5_indent, // dynamic
  var_773_5_depth, // dynamic
  var_778_8_len, // dynamic
  var_std__string, // extern
  var_784_8_new_indent, // dynamic
  var_787_12_text, // dynamic
  var_tabs_and_spaces, // extern
  var_to_list, // extern polymorphic
  var_serialization_tag_of, // extern polymorphic
  var_serialize, // extern polymorphic
  var_805_5_indent, // dynamic
  var_is_defined, // extern
  var_807_4_new_indent, // dynamic
  var_816_4_header, // dynamic
  var_deserializer_of, // extern polymorphic
  var_deserializers, // extern
  var_register_type, // extern
  var__END
};


static TAB_NUM t_func_std_types__generic_list___put[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 73_5_self
  LOCAL(4), // 74_5_item
  // list(item) self)
  var_list, 1, LOCAL(4), 1, LOCAL(1),
  // append(list(item) self)
  var_append, 2, LOCAL(1), LOCAL(3), 1, LOCAL(2),
  // -> append(list(item) self)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(76, 13),
  POS(76, 6),
  POS(76, 3),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__generic_list___put = {
  t_func_std_types__generic_list___put, NULL, 3, 2,
  {"74_5_item\000", "73_5_self\000"}
};

static TAB_NUM t_func_std_types__generic_list___get[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 82_5_self
  // range(self 2 -1) self(1)
  var_range, 3, LOCAL(3), num_2, minus_num_1, 1, LOCAL(1),
  // self(1)
  LOCAL(3), 1, num_1, 1, LOCAL(2),
  // -> range(self 2 -1) self(1)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(84, 6),
  POS(84, 23),
  POS(84, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__generic_list___get = {
  t_func_std_types__generic_list___get, NULL, 3, 1,
  {"82_5_self\000"}
};

static TAB_NUM t_func_std_types__generic_list___pop[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 90_5_self
  // range(self 1 -2) self(-1)
  var_range, 3, LOCAL(3), num_1, minus_num_2, 1, LOCAL(1),
  // self(-1)
  LOCAL(3), 1, minus_num_1, 1, LOCAL(2),
  // -> range(self 1 -2) self(-1)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(92, 6),
  POS(92, 23),
  POS(92, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__generic_list___pop = {
  t_func_std_types__generic_list___pop, NULL, 3, 1,
  {"90_5_self\000"}
};

static TAB_NUM t_func_std_types__generic_list___truncate[] = {
  2, // locals
  2, // parameters
  var_98_5_self,
  var_99_5_n,
  // $len length_of(self)
  var_length_of, 1, var_98_5_self, 1, LOCAL(2),
  // n
  var_std__less, 2, var_99_5_n, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(101, 3),
  POS(103, 11),
  POS(102, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__generic_list___truncate = {
  t_func_std_types__generic_list___truncate, NULL, 3, 1,
  {"101_4_len\000"}
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // range(self 1 n)
  var_range, 3, var_98_5_self, num_1, var_99_5_n, 1, LOCAL(1),
  //  range(self 1 n)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(104, 8),
  POS(104, 7)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_98_5_self, TAIL_CALL,
  POS(105, 7)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__generic_list___common_prefix[] = {
  3, // locals
  2, // parameters
  var_109_42_left,
  var_109_47_right,
  // length_of(left) > length_of(right) &left &right -> right left
  var_length_of, 1, var_109_42_left, 1, LOCAL(1),
  // length_of(right) &left &right -> right left
  var_length_of, 1, var_109_47_right, 1, LOCAL(2),
  // length_of(right) &left &right -> right left
  var_std__less, 2, LOCAL(2), LOCAL(1), 1, LOCAL(3),
  // update_if length_of(left) > length_of(right) &left &right -> right left
  var_update_if, 4, LOCAL(3), var_109_42_left, var_109_47_right, lambda_3, 2, var_109_42_left, var_109_47_right,
  // for_each left
  var_for_each, 3, var_109_42_left, lambda_4, lambda_6, TAIL_CALL,
  POS(110, 13),
  POS(110, 31),
  POS(110, 31),
  POS(110, 3),
  POS(111, 3)
};

static FUNCTION_INFO i_func_std_types__generic_list___common_prefix = {
  t_func_std_types__generic_list___common_prefix, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  right left
  LET, 2, var_109_47_right, var_109_42_left, TAIL_CALL,
  POS(110, 63)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  3, // locals
  2, // parameters
  var_112_8_idx,
  LOCAL(3), // 112_12_item
  // right(idx)
  var_109_47_right, 1, var_112_8_idx, 1, LOCAL(1),
  // item == right(idx)
  var_std__equal, 2, LOCAL(3), LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, lambda_5, TAIL_CALL,
  POS(114, 17),
  POS(114, 9),
  POS(113, 7),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 3, 1,
  {"112_12_item\000"}
};

static TAB_NUM t_lambda_5[] = {
  2, // locals
  0, // parameters
  // idx-1)
  var_std__minus, 2, var_112_8_idx, num_1, 1, LOCAL(1),
  // range(left 1 idx-1)
  var_range, 3, var_109_42_left, num_1, LOCAL(1), 1, LOCAL(2),
  //  range(left 1 idx-1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(116, 25),
  POS(116, 12),
  POS(116, 11)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  left
  LET, 1, var_109_42_left, TAIL_CALL,
  POS(117, 7)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__generic_list___append_or_error[] = {
  1, // locals
  2, // parameters
  var_119_44_left,
  var_119_49_right,
  // is_an_error
  var_is_an_error, 1, var_119_44_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_7, lambda_8, TAIL_CALL,
  POS(121, 10),
  POS(120, 3)
};

static FUNCTION_INFO i_func_std_types__generic_list___append_or_error = {
  t_func_std_types__generic_list___append_or_error, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  left
  LET, 1, var_119_44_left, TAIL_CALL,
  POS(122, 7)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // is_an_error
  var_is_an_error, 1, var_119_49_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_9, lambda_10, TAIL_CALL,
  POS(125, 15),
  POS(124, 7)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  right
  LET, 1, var_119_49_right, TAIL_CALL,
  POS(126, 11)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // append(left right)
  var_append, 2, var_119_44_left, var_119_49_right, 1, LOCAL(1),
  //  append(left right)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(127, 12),
  POS(127, 11)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std__concatenate[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 134_21_separator
  // new $func concatenation_function: (myself^ left right)
  var_new, 2, var_concatenation_function, lambda_11, 1, LOCAL(3),
  // .separator_of separator)
  LET, -1, LOCAL(3), var_separator_of, LOCAL(2), LOCAL(1),
  // -> func(.separator_of separator)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(135, 3),
  POS(137, 11),
  POS(137, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std__concatenate = {
  t_func_std__concatenate, NULL, 3, 2,
  {"134_21_separator\000", "135_8_func\000"}
};

static TAB_NUM t_lambda_11[] = {
  5, // locals
  -3, // parameters
  MYSELF_PARAMETER, LOCAL(3), // 135_38_myself
  MANDATORY_PARAMETER, LOCAL(4), // 135_46_left
  MANDATORY_PARAMETER, LOCAL(5), // 135_51_right
  // separator_of(myself)) right
  var_separator_of, 1, LOCAL(3), 1, LOCAL(1),
  // append(left separator_of(myself)) right
  var_append, 2, LOCAL(4), LOCAL(1), 1, LOCAL(2),
  // append append(left separator_of(myself)) right
  var_append, 2, LOCAL(2), LOCAL(5), TAIL_CALL,
  POS(136, 24),
  POS(136, 12),
  POS(136, 5),
  LOCAL(5),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 3, 3,
  {"135_51_right\000", "135_46_left\000", "135_38_myself\000"}
};

static TAB_NUM t_func_std__concatenate_non_empty[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 139_31_separator
  // .separator_of separator)
  LET, -1, func_func, var_separator_of, LOCAL(2), LOCAL(1),
  // -> func(.separator_of separator)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(149, 11),
  POS(149, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std__concatenate_non_empty = {
  t_func_std__concatenate_non_empty, NULL, 2, 1,
  {"139_31_separator\000"}
};

static TAB_NUM t_func_func[] = {
  1, // locals
  -3, // parameters
  MYSELF_PARAMETER, var_140_11_myself,
  MANDATORY_PARAMETER, var_140_19_left,
  MANDATORY_PARAMETER, var_140_24_right,
  // is_empty
  var_is_empty, 1, var_140_19_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12, lambda_13, TAIL_CALL,
  POS(142, 12),
  POS(141, 5)
};

static FUNCTION_INFO i_func_func = {
  t_func_func, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  right
  LET, 1, var_140_24_right, TAIL_CALL,
  POS(143, 9)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_140_24_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(146, 17),
  POS(145, 9)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  left
  LET, 1, var_140_19_left, TAIL_CALL,
  POS(147, 13)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // separator_of(myself) right)
  var_separator_of, 1, var_140_11_myself, 1, LOCAL(1),
  // append(left separator_of(myself) right)
  var_append, 3, var_140_19_left, LOCAL(1), var_140_24_right, 1, LOCAL(2),
  //  append(left separator_of(myself) right)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(148, 26),
  POS(148, 14),
  POS(148, 13)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std_types__generic_list___reverse[] = {
  1, // locals
  1, // parameters
  var_155_5_self,
  // $result empty_collection_of(self)
  var_empty_collection_of, 1, var_155_5_self, 1, var_157_4_result,
  // length_of(self) 1 -1
  var_length_of, 1, var_155_5_self, 1, LOCAL(1),
  // from_to_by length_of(self) 1 -1
  var_from_to_by, 5, LOCAL(1), num_1, minus_num_1, lambda_16, lambda_17, TAIL_CALL,
  POS(157, 3),
  POS(158, 14),
  POS(158, 3)
};

static FUNCTION_INFO i_func_std_types__generic_list___reverse = {
  t_func_std_types__generic_list___reverse, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 159_8_idx
  // self(idx)
  var_155_5_self, 1, LOCAL(2), 1, LOCAL(1),
  // push &result self(idx)
  var_push, 2, var_157_4_result, LOCAL(1), 1, var_157_4_result,
  // next
  var_next, 0, TAIL_CALL,
  POS(160, 20),
  POS(160, 7),
  POS(161, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 3, 1,
  {"159_8_idx\000"}
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  result
  LET, 1, var_157_4_result, TAIL_CALL,
  POS(162, 7)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__generic_list___for_each[] = {
  5, // locals
  3, // parameters
  LOCAL(3), // 223_5_self
  LOCAL(4), // 224_5_body
  var_225_5_finally,
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
  LET, 1, var_225_5_finally, 1, var_basic_loops__finally,
  // new !break basic_types::break_function: (myself^)
  var_new, 2, var_basic_types__break_function, lambda_22, IO_CALL(1), var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(5), var_break,
  // parameter_count_of(body) == 2:
  var_parameter_count_of, 1, LOCAL(4), 1, LOCAL(1),
  // parameter_count_of(body) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_23, lambda_24, IO_TAIL_CALL,
  POS(227, 3),
  POS(237, 3),
  POS(238, 3),
  POS(239, 3),
  POS(240, 3),
  POS(241, 3),
  POS(261, 3),
  POS(269, 4),
  POS(272, 5),
  POS(272, 5),
  POS(271, 3),
  LOCAL(3),
  LOCAL(5),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__generic_list___for_each = {
  t_func_std_types__generic_list___for_each, NULL, 11, 3,
  {"223_5_self\000", "227_4_saved_context\000", "224_5_body\000"}
};

static TAB_NUM t_func_iterate_1[] = {
  2, // locals
  0, // parameters
  // basic_loops::to # another item available?
  var_std__less, 2, var_basic_loops__to, var_basic_loops__from, 1, LOCAL(1),
  // basic_loops::to # another item available?
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_18, lambda_19, IO_TAIL_CALL,
  POS(245, 28),
  POS(245, 28),
  POS(244, 5)
};

static FUNCTION_INFO i_func_iterate_1 = {
  t_func_iterate_1, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  0, // parameters
  // basic_loops::self(basic_loops::from)
  var_basic_loops__self, 1, var_basic_loops__from, 1, LOCAL(1),
  // basic_loops::body! basic_loops::self(basic_loops::from)
  var_basic_loops__body, 1, LOCAL(1), IO_TAIL_CALL,
  POS(247, 28),
  POS(247, 9)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(250, 9)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_iterate_2[] = {
  2, // locals
  0, // parameters
  // basic_loops::to # another item available?
  var_std__less, 2, var_basic_loops__to, var_basic_loops__from, 1, LOCAL(1),
  // basic_loops::to # another item available?
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_20, lambda_21, IO_TAIL_CALL,
  POS(254, 28),
  POS(254, 28),
  POS(253, 5)
};

static FUNCTION_INFO i_func_iterate_2 = {
  t_func_iterate_2, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // basic_loops::self(basic_loops::from)
  var_basic_loops__self, 1, var_basic_loops__from, 1, LOCAL(1),
  // basic_loops::body! basic_loops::from basic_loops::self(basic_loops::from)
  var_basic_loops__body, 2, var_basic_loops__from, LOCAL(1), IO_TAIL_CALL,
  POS(256, 46),
  POS(256, 9)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(259, 9)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_22[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 261_44_myself
  // !finally basic_loops::finally
  LET, 1, var_basic_loops__finally, 1, var_225_5_finally,
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 7, var_next, var_break, var_basic_loops__from, var_basic_loops__to, var_basic_loops__self, var_basic_loops__body, var_basic_loops__finally,
  // finally!
  var_225_5_finally, 0, IO_TAIL_CALL,
  POS(262, 5),
  POS(263, 5),
  POS(263, 5),
  POS(267, 5),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 4, 1,
  {"261_44_myself\000"}
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  // !next:
  LET, 1, lambda_next, 1, var_next,
  // iterate_2! # start the first iteration
  func_iterate_2, 0, IO_TAIL_CALL,
  POS(273, 7),
  POS(276, 7)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_next[] = {
  0, // locals
  0, // parameters
  // !basic_loops::from basic_loops::from+1 # increase the list index
  var_std__plus, 2, var_basic_loops__from, num_1, 1, var_basic_loops__from,
  // iterate_2! # start the next iteration
  func_iterate_2, 0, IO_TAIL_CALL,
  POS(274, 9),
  POS(275, 9)
};

static FUNCTION_INFO i_lambda_next = {
  t_lambda_next, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  // !next:
  LET, 1, lambda_2_next, 1, var_next,
  // iterate_1! # start the first iteration
  func_iterate_1, 0, IO_TAIL_CALL,
  POS(278, 7),
  POS(281, 7)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2_next[] = {
  0, // locals
  0, // parameters
  // !basic_loops::from basic_loops::from+1 # increase the list index
  var_std__plus, 2, var_basic_loops__from, num_1, 1, var_basic_loops__from,
  // iterate_1! # start the next iteration
  func_iterate_1, 0, IO_TAIL_CALL,
  POS(279, 9),
  POS(280, 9)
};

static FUNCTION_INFO i_lambda_2_next = {
  t_lambda_2_next, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__generic_list___map[] = {
  1, // locals
  2, // parameters
  var_293_5_self,
  var_294_5_function,
  // is_empty
  var_is_empty, 1, var_293_5_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25, lambda_26, TAIL_CALL,
  POS(297, 10),
  POS(296, 3)
};

static FUNCTION_INFO i_func_std_types__generic_list___map = {
  t_func_std_types__generic_list___map, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_293_5_self, TAIL_CALL,
  POS(298, 7)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_26[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(function) == 2
  var_parameter_count_of, 1, var_294_5_function, 1, LOCAL(1),
  // parameter_count_of(function) == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // $map
  var_if, 3, LOCAL(2), lambda_27, lambda_31, 1, var_300_8_map,
  // length_of(self)
  var_length_of, 1, var_293_5_self, 1, LOCAL(1),
  // map 1 length_of(self)
  var_300_8_map, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(302, 11),
  POS(302, 11),
  POS(300, 7),
  POS(322, 13),
  POS(322, 7)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_28, TAIL_CALL,
  POS(303, 13)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  2, // parameters
  var_304_16_s,
  var_304_18_e,
  // s < e:
  var_std__less, 2, var_304_16_s, var_304_18_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_29, lambda_30, TAIL_CALL,
  POS(306, 17),
  POS(305, 15)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_29[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_304_16_s, var_304_18_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map(s m)
  var_300_8_map, 2, var_304_16_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map(m+1 e)
  var_300_8_map, 2, LOCAL(2), var_304_18_e, 1, LOCAL(3),
  // append
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(307, 23),
  POS(307, 19),
  POS(309, 21),
  POS(310, 25),
  POS(310, 21),
  POS(308, 19),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_29 = {
  t_lambda_29, NULL, 6, 1,
  {"307_20_m\000"}
};

static TAB_NUM t_lambda_30[] = {
  3, // locals
  0, // parameters
  // self(s)))
  var_293_5_self, 1, var_304_16_s, 1, LOCAL(1),
  // function(s self(s)))
  var_294_5_function, 2, var_304_16_s, LOCAL(1), 1, LOCAL(2),
  // list(function(s self(s)))
  var_list, 1, LOCAL(2), 1, LOCAL(3),
  //  list(function(s self(s)))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(311, 36),
  POS(311, 25),
  POS(311, 20),
  POS(311, 19)
};

static FUNCTION_INFO i_lambda_30 = {
  t_lambda_30, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_32, TAIL_CALL,
  POS(312, 13)
};

static FUNCTION_INFO i_lambda_31 = {
  t_lambda_31, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  2, // parameters
  var_313_16_s,
  var_313_18_e,
  // s < e:
  var_std__less, 2, var_313_16_s, var_313_18_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_33, lambda_34, TAIL_CALL,
  POS(315, 17),
  POS(314, 15)
};

static FUNCTION_INFO i_lambda_32 = {
  t_lambda_32, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_33[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_313_16_s, var_313_18_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map(s m)
  var_300_8_map, 2, var_313_16_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map(m+1 e)
  var_300_8_map, 2, LOCAL(2), var_313_18_e, 1, LOCAL(3),
  // append
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(316, 23),
  POS(316, 19),
  POS(318, 21),
  POS(319, 25),
  POS(319, 21),
  POS(317, 19),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_33 = {
  t_lambda_33, NULL, 6, 1,
  {"316_20_m\000"}
};

static TAB_NUM t_lambda_34[] = {
  3, // locals
  0, // parameters
  // self(s)))
  var_293_5_self, 1, var_313_16_s, 1, LOCAL(1),
  // function(self(s)))
  var_294_5_function, 1, LOCAL(1), 1, LOCAL(2),
  // list(function(self(s)))
  var_list, 1, LOCAL(2), 1, LOCAL(3),
  //  list(function(self(s)))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(320, 34),
  POS(320, 25),
  POS(320, 20),
  POS(320, 19)
};

static FUNCTION_INFO i_lambda_34 = {
  t_lambda_34, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_std_types__generic_list___map_or_error[] = {
  1, // locals
  2, // parameters
  var_337_5_self,
  var_338_5_function,
  // is_empty
  var_is_empty, 1, var_337_5_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_35, lambda_36, TAIL_CALL,
  POS(341, 10),
  POS(340, 3)
};

static FUNCTION_INFO i_func_std_types__generic_list___map_or_error = {
  t_func_std_types__generic_list___map_or_error, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_337_5_self, TAIL_CALL,
  POS(342, 7)
};

static FUNCTION_INFO i_lambda_35 = {
  t_lambda_35, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_36[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(function) == 2
  var_parameter_count_of, 1, var_338_5_function, 1, LOCAL(1),
  // parameter_count_of(function) == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // $map
  var_if, 3, LOCAL(2), lambda_37, lambda_43, 1, var_344_8_map,
  // length_of(self)
  var_length_of, 1, var_337_5_self, 1, LOCAL(1),
  // map 1 length_of(self)
  var_344_8_map, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(346, 11),
  POS(346, 11),
  POS(344, 7),
  POS(376, 13),
  POS(376, 7)
};

static FUNCTION_INFO i_lambda_36 = {
  t_lambda_36, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_38, TAIL_CALL,
  POS(347, 13)
};

static FUNCTION_INFO i_lambda_37 = {
  t_lambda_37, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_38[] = {
  1, // locals
  2, // parameters
  var_348_16_s,
  var_348_18_e,
  // s < e:
  var_std__less, 2, var_348_16_s, var_348_18_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_39, lambda_40, TAIL_CALL,
  POS(350, 17),
  POS(349, 15)
};

static FUNCTION_INFO i_lambda_38 = {
  t_lambda_38, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_39[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_348_16_s, var_348_18_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map(s m)
  var_344_8_map, 2, var_348_16_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map(m+1 e)
  var_344_8_map, 2, LOCAL(2), var_348_18_e, 1, LOCAL(3),
  // append_or_error
  var_append_or_error, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(351, 23),
  POS(351, 19),
  POS(353, 21),
  POS(354, 25),
  POS(354, 21),
  POS(352, 19),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_39 = {
  t_lambda_39, NULL, 6, 1,
  {"351_20_m\000"}
};

static TAB_NUM t_lambda_40[] = {
  1, // locals
  0, // parameters
  // self(s))
  var_337_5_self, 1, var_348_16_s, 1, LOCAL(1),
  // $mapped_item function(s self(s))
  var_338_5_function, 2, var_348_16_s, LOCAL(1), 1, var_356_20_mapped_item,
  // is_an_error
  var_is_an_error, 1, var_356_20_mapped_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_41, lambda_42, TAIL_CALL,
  POS(356, 43),
  POS(356, 19),
  POS(358, 33),
  POS(357, 19)
};

static FUNCTION_INFO i_lambda_40 = {
  t_lambda_40, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  //  mapped_item
  LET, 1, var_356_20_mapped_item, TAIL_CALL,
  POS(359, 23)
};

static FUNCTION_INFO i_lambda_41 = {
  t_lambda_41, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // list(mapped_item)
  var_list, 1, var_356_20_mapped_item, 1, LOCAL(1),
  //  list(mapped_item)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(360, 24),
  POS(360, 23)
};

static FUNCTION_INFO i_lambda_42 = {
  t_lambda_42, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_44, TAIL_CALL,
  POS(361, 13)
};

static FUNCTION_INFO i_lambda_43 = {
  t_lambda_43, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  2, // parameters
  var_362_16_s,
  var_362_18_e,
  // s < e:
  var_std__less, 2, var_362_16_s, var_362_18_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_45, lambda_46, TAIL_CALL,
  POS(364, 17),
  POS(363, 15)
};

static FUNCTION_INFO i_lambda_44 = {
  t_lambda_44, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_45[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_362_16_s, var_362_18_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map(s m)
  var_344_8_map, 2, var_362_16_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map(m+1 e)
  var_344_8_map, 2, LOCAL(2), var_362_18_e, 1, LOCAL(3),
  // append_or_error
  var_append_or_error, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(365, 23),
  POS(365, 19),
  POS(367, 21),
  POS(368, 25),
  POS(368, 21),
  POS(366, 19),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_45 = {
  t_lambda_45, NULL, 6, 1,
  {"365_20_m\000"}
};

static TAB_NUM t_lambda_46[] = {
  1, // locals
  0, // parameters
  // self(s))
  var_337_5_self, 1, var_362_16_s, 1, LOCAL(1),
  // $mapped_item function(self(s))
  var_338_5_function, 1, LOCAL(1), 1, var_370_20_mapped_item,
  // is_an_error
  var_is_an_error, 1, var_370_20_mapped_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_47, lambda_48, TAIL_CALL,
  POS(370, 41),
  POS(370, 19),
  POS(372, 33),
  POS(371, 19)
};

static FUNCTION_INFO i_lambda_46 = {
  t_lambda_46, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  //  mapped_item
  LET, 1, var_370_20_mapped_item, TAIL_CALL,
  POS(373, 23)
};

static FUNCTION_INFO i_lambda_47 = {
  t_lambda_47, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_48[] = {
  1, // locals
  0, // parameters
  // list(mapped_item)
  var_list, 1, var_370_20_mapped_item, 1, LOCAL(1),
  //  list(mapped_item)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(374, 24),
  POS(374, 23)
};

static FUNCTION_INFO i_lambda_48 = {
  t_lambda_48, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__generic_list___std__reduce[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_390_5_self,
  var_append, var_391_5_function,
  var_undefined, var_392_5_unit,
  // is_empty
  var_is_empty, 1, var_390_5_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_49, lambda_50, TAIL_CALL,
  POS(395, 10),
  POS(394, 3)
};

static FUNCTION_INFO i_func_std_types__generic_list___std__reduce = {
  t_func_std_types__generic_list___std__reduce, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_392_5_unit, TAIL_CALL,
  POS(396, 7)
};

static FUNCTION_INFO i_lambda_49 = {
  t_lambda_49, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  // reduce self
  func_reduce, 1, var_390_5_self, TAIL_CALL,
  POS(408, 7)
};

static FUNCTION_INFO i_lambda_50 = {
  t_lambda_50, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_reduce[] = {
  2, // locals
  1, // parameters
  var_398_17_items,
  // $n length_of(items)
  var_length_of, 1, var_398_17_items, 1, var_399_10_n,
  // n >= 2:
  var_std__less, 2, var_399_10_n, num_2, 1, LOCAL(1),
  // n >= 2:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_51, lambda_52, TAIL_CALL,
  POS(399, 9),
  POS(401, 11),
  POS(401, 11),
  POS(400, 9)
};

static FUNCTION_INFO i_func_reduce = {
  t_func_reduce, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_51[] = {
  6, // locals
  0, // parameters
  // $m n >> 1
  var_std__shift_right, 2, var_399_10_n, num_1, 1, LOCAL(6),
  // range(items 1 m))
  var_range, 3, var_398_17_items, num_1, LOCAL(6), 1, LOCAL(1),
  // reduce(range(items 1 m))
  func_reduce, 1, LOCAL(1), 1, LOCAL(2),
  // m+1 -1))
  var_std__plus, 2, LOCAL(6), num_1, 1, LOCAL(3),
  // range(items m+1 -1))
  var_range, 3, var_398_17_items, LOCAL(3), minus_num_1, 1, LOCAL(4),
  // reduce(range(items m+1 -1))
  func_reduce, 1, LOCAL(4), 1, LOCAL(5),
  // function
  var_391_5_function, 2, LOCAL(2), LOCAL(5), TAIL_CALL,
  POS(402, 13),
  POS(404, 22),
  POS(404, 15),
  POS(405, 34),
  POS(405, 22),
  POS(405, 15),
  POS(403, 13),
  LOCAL(6)
};

static FUNCTION_INFO i_lambda_51 = {
  t_lambda_51, NULL, 7, 1,
  {"402_14_m\000"}
};

static TAB_NUM t_lambda_52[] = {
  1, // locals
  0, // parameters
  // items(1)
  var_398_17_items, 1, num_1, 1, LOCAL(1),
  //  items(1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(406, 14),
  POS(406, 13)
};

static FUNCTION_INFO i_lambda_52 = {
  t_lambda_52, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__list___reduce_columns[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 412_5_self
  var_413_5_reduction,
  // map self: (item) reduce item reduction
  var_map, 2, LOCAL(1), lambda_53, TAIL_CALL,
  POS(415, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__list___reduce_columns = {
  t_func_std_types__list___reduce_columns, NULL, 1, 1,
  {"412_5_self\000"}
};

static TAB_NUM t_lambda_53[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 415_14_item
  // reduce item reduction
  var_reduce, 2, LOCAL(1), var_413_5_reduction, TAIL_CALL,
  POS(415, 20),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_53 = {
  t_lambda_53, NULL, 1, 1,
  {"415_14_item\000"}
};

static TAB_NUM t_func_std_types__list___reduce_rows[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 419_5_self
  var_420_5_reduction,
  // reduce self: (left right)
  var_reduce, 2, LOCAL(1), lambda_54, TAIL_CALL,
  POS(422, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__list___reduce_rows = {
  t_func_std_types__list___reduce_rows, NULL, 1, 1,
  {"419_5_self\000"}
};

static TAB_NUM t_lambda_54[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 422_17_left
  var_422_22_right,
  // map left: (idx item) -> reduction(item right(idx))
  var_map, 2, LOCAL(1), lambda_55, TAIL_CALL,
  POS(423, 5),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_54 = {
  t_lambda_54, NULL, 1, 1,
  {"422_17_left\000"}
};

static TAB_NUM t_lambda_55[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 423_16_idx
  LOCAL(4), // 423_20_item
  // right(idx))
  var_422_22_right, 1, LOCAL(3), 1, LOCAL(1),
  // reduction(item right(idx))
  var_420_5_reduction, 2, LOCAL(4), LOCAL(1), 1, LOCAL(2),
  // -> reduction(item right(idx))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(423, 44),
  POS(423, 29),
  POS(423, 26),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_55 = {
  t_lambda_55, NULL, 3, 2,
  {"423_20_item\000", "423_16_idx\000"}
};

static TAB_NUM t_func_std_types__generic_list___map_reduce[] = {
  2, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_435_5_self,
  MANDATORY_PARAMETER, var_436_5_map_function,
  var_append, var_437_5_reduce_function,
  var_undefined, var_438_5_unit,
  // result_count() == 2: # updates the list *and* returns the reduction
  var_result_count, 0, 1, LOCAL(1),
  // result_count() == 2: # updates the list *and* returns the reduction
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_56, lambda_67, TAIL_CALL,
  POS(441, 5),
  POS(441, 5),
  POS(440, 3)
};

static FUNCTION_INFO i_func_std_types__generic_list___map_reduce = {
  t_func_std_types__generic_list___map_reduce, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_56[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_435_5_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_57, lambda_58, TAIL_CALL,
  POS(443, 14),
  POS(442, 7)
};

static FUNCTION_INFO i_lambda_56 = {
  t_lambda_56, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  //  self unit
  LET, 2, var_435_5_self, var_438_5_unit, TAIL_CALL,
  POS(444, 11)
};

static FUNCTION_INFO i_lambda_57 = {
  t_lambda_57, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_58[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(map_function) == 2
  var_parameter_count_of, 1, var_436_5_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // $map_reduce
  var_if, 3, LOCAL(2), lambda_59, lambda_63, 1, var_446_12_map_reduce,
  // length_of(self)
  var_length_of, 1, var_435_5_self, 1, LOCAL(1),
  // map_reduce 1 length_of(self)
  var_446_12_map_reduce, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(448, 15),
  POS(448, 15),
  POS(446, 11),
  POS(475, 24),
  POS(475, 11)
};

static FUNCTION_INFO i_lambda_58 = {
  t_lambda_58, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_59[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_60, TAIL_CALL,
  POS(449, 17)
};

static FUNCTION_INFO i_lambda_59 = {
  t_lambda_59, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_60[] = {
  1, // locals
  2, // parameters
  var_450_20_s,
  var_450_22_e,
  // s < e:
  var_std__less, 2, var_450_20_s, var_450_22_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_61, lambda_62, TAIL_CALL,
  POS(452, 21),
  POS(451, 19)
};

static FUNCTION_INFO i_lambda_60 = {
  t_lambda_60, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_61[] = {
  7, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_450_20_s, var_450_22_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(3),
  // map_reduce s m $left_items $left_value
  var_446_12_map_reduce, 2, var_450_20_s, LOCAL(3), 2, LOCAL(4), LOCAL(5),
  // m+1 e $right_items $right_value
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // map_reduce m+1 e $right_items $right_value
  var_446_12_map_reduce, 2, LOCAL(1), var_450_22_e, 2, LOCAL(6), LOCAL(7),
  // append(left_items right_items)
  var_append, 2, LOCAL(4), LOCAL(6), 1, LOCAL(1),
  // reduce_function(left_value right_value)
  var_437_5_reduce_function, 2, LOCAL(5), LOCAL(7), 1, LOCAL(2),
  // ->
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(453, 27),
  POS(453, 23),
  POS(454, 23),
  POS(455, 34),
  POS(455, 23),
  POS(457, 25),
  POS(458, 25),
  POS(456, 23),
  LOCAL(3),
  LOCAL(7),
  LOCAL(5),
  LOCAL(4),
  LOCAL(6)
};

static FUNCTION_INFO i_lambda_61 = {
  t_lambda_61, NULL, 8, 5,
  {"453_24_m\000", "455_54_right_value\000", "454_51_left_value\000", "454_39_left_items\000", "455_41_right_items\000"}
};

static TAB_NUM t_lambda_62[] = {
  3, // locals
  0, // parameters
  // self(s) $item $value
  var_435_5_self, 1, var_450_20_s, 1, LOCAL(1),
  // map_function s self(s) $item $value
  var_436_5_map_function, 2, var_450_20_s, LOCAL(1), 2, LOCAL(2), LOCAL(3),
  // list(item) value
  var_list, 1, LOCAL(2), 1, LOCAL(1),
  // -> list(item) value
  LET, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(460, 38),
  POS(460, 23),
  POS(461, 26),
  POS(461, 23),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_62 = {
  t_lambda_62, NULL, 4, 2,
  {"460_53_value\000", "460_47_item\000"}
};

static TAB_NUM t_lambda_63[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_64, TAIL_CALL,
  POS(462, 17)
};

static FUNCTION_INFO i_lambda_63 = {
  t_lambda_63, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_64[] = {
  1, // locals
  2, // parameters
  var_463_20_s,
  var_463_22_e,
  // s < e:
  var_std__less, 2, var_463_20_s, var_463_22_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_65, lambda_66, TAIL_CALL,
  POS(465, 21),
  POS(464, 19)
};

static FUNCTION_INFO i_lambda_64 = {
  t_lambda_64, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_65[] = {
  7, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_463_20_s, var_463_22_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(3),
  // map_reduce s m $left_items $left_value
  var_446_12_map_reduce, 2, var_463_20_s, LOCAL(3), 2, LOCAL(4), LOCAL(5),
  // m+1 e $right_items $right_value
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // map_reduce m+1 e $right_items $right_value
  var_446_12_map_reduce, 2, LOCAL(1), var_463_22_e, 2, LOCAL(6), LOCAL(7),
  // append(left_items right_items)
  var_append, 2, LOCAL(4), LOCAL(6), 1, LOCAL(1),
  // reduce_function(left_value right_value)
  var_437_5_reduce_function, 2, LOCAL(5), LOCAL(7), 1, LOCAL(2),
  // ->
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(466, 27),
  POS(466, 23),
  POS(467, 23),
  POS(468, 34),
  POS(468, 23),
  POS(470, 25),
  POS(471, 25),
  POS(469, 23),
  LOCAL(6),
  LOCAL(3),
  LOCAL(7),
  LOCAL(4),
  LOCAL(5)
};

static FUNCTION_INFO i_lambda_65 = {
  t_lambda_65, NULL, 8, 5,
  {"468_41_right_items\000", "466_24_m\000", "468_54_right_value\000", "467_39_left_items\000", "467_51_left_value\000"}
};

static TAB_NUM t_lambda_66[] = {
  3, // locals
  0, // parameters
  // self(s) $item $value
  var_435_5_self, 1, var_463_20_s, 1, LOCAL(1),
  // map_function self(s) $item $value
  var_436_5_map_function, 1, LOCAL(1), 2, LOCAL(2), LOCAL(3),
  // list(item) value
  var_list, 1, LOCAL(2), 1, LOCAL(1),
  // -> list(item) value
  LET, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(473, 36),
  POS(473, 23),
  POS(474, 26),
  POS(474, 23),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_66 = {
  t_lambda_66, NULL, 4, 2,
  {"473_45_item\000", "473_51_value\000"}
};

static TAB_NUM t_lambda_67[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_435_5_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_68, lambda_69, TAIL_CALL,
  POS(478, 14),
  POS(477, 7)
};

static FUNCTION_INFO i_lambda_67 = {
  t_lambda_67, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_68[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_438_5_unit, TAIL_CALL,
  POS(479, 11)
};

static FUNCTION_INFO i_lambda_68 = {
  t_lambda_68, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_69[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(map_function) == 2
  var_parameter_count_of, 1, var_436_5_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // $map_reduce
  var_if, 3, LOCAL(2), lambda_70, lambda_74, 1, var_481_12_map_reduce,
  // length_of(self)
  var_length_of, 1, var_435_5_self, 1, LOCAL(1),
  // map_reduce 1 length_of(self)
  var_481_12_map_reduce, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(483, 15),
  POS(483, 15),
  POS(481, 11),
  POS(503, 24),
  POS(503, 11)
};

static FUNCTION_INFO i_lambda_69 = {
  t_lambda_69, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_70[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_71, TAIL_CALL,
  POS(484, 17)
};

static FUNCTION_INFO i_lambda_70 = {
  t_lambda_70, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_71[] = {
  1, // locals
  2, // parameters
  var_485_20_s,
  var_485_22_e,
  // s < e:
  var_std__less, 2, var_485_20_s, var_485_22_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_72, lambda_73, TAIL_CALL,
  POS(487, 21),
  POS(486, 19)
};

static FUNCTION_INFO i_lambda_71 = {
  t_lambda_71, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_72[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_485_20_s, var_485_22_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map_reduce(s m)
  var_481_12_map_reduce, 2, var_485_20_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map_reduce(m+1 e)
  var_481_12_map_reduce, 2, LOCAL(2), var_485_22_e, 1, LOCAL(3),
  // reduce_function
  var_437_5_reduce_function, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(488, 27),
  POS(488, 23),
  POS(490, 25),
  POS(491, 36),
  POS(491, 25),
  POS(489, 23),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_72 = {
  t_lambda_72, NULL, 6, 1,
  {"488_24_m\000"}
};

static TAB_NUM t_lambda_73[] = {
  2, // locals
  0, // parameters
  // self(s))
  var_435_5_self, 1, var_485_20_s, 1, LOCAL(1),
  // map_function(s self(s))
  var_436_5_map_function, 2, var_485_20_s, LOCAL(1), 1, LOCAL(2),
  //  map_function(s self(s))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(492, 39),
  POS(492, 24),
  POS(492, 23)
};

static FUNCTION_INFO i_lambda_73 = {
  t_lambda_73, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_74[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_75, TAIL_CALL,
  POS(493, 17)
};

static FUNCTION_INFO i_lambda_74 = {
  t_lambda_74, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_75[] = {
  1, // locals
  2, // parameters
  var_494_20_s,
  var_494_22_e,
  // s < e:
  var_std__less, 2, var_494_20_s, var_494_22_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_76, lambda_77, TAIL_CALL,
  POS(496, 21),
  POS(495, 19)
};

static FUNCTION_INFO i_lambda_75 = {
  t_lambda_75, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_76[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_494_20_s, var_494_22_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map_reduce(s m)
  var_481_12_map_reduce, 2, var_494_20_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map_reduce(m+1 e)
  var_481_12_map_reduce, 2, LOCAL(2), var_494_22_e, 1, LOCAL(3),
  // reduce_function
  var_437_5_reduce_function, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(497, 27),
  POS(497, 23),
  POS(499, 25),
  POS(500, 36),
  POS(500, 25),
  POS(498, 23),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_76 = {
  t_lambda_76, NULL, 6, 1,
  {"497_24_m\000"}
};

static TAB_NUM t_lambda_77[] = {
  2, // locals
  0, // parameters
  // self(s))
  var_435_5_self, 1, var_494_20_s, 1, LOCAL(1),
  // map_function(self(s))
  var_436_5_map_function, 1, LOCAL(1), 1, LOCAL(2),
  //  map_function(self(s))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(501, 37),
  POS(501, 24),
  POS(501, 23)
};

static FUNCTION_INFO i_lambda_77 = {
  t_lambda_77, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std_types__generic_list___map_reduce_rows[] = {
  1, // locals
  3, // parameters
  LOCAL(1), // 507_5_self
  var_508_5_map_function,
  var_509_5_reduce_function,
  // map_reduce self
  var_map_reduce, 3, LOCAL(1), lambda_78, lambda_79, TAIL_CALL,
  POS(511, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__generic_list___map_reduce_rows = {
  t_func_std_types__generic_list___map_reduce_rows, NULL, 1, 1,
  {"507_5_self\000"}
};

static TAB_NUM t_lambda_78[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 512_8_items
  // map items map_function
  var_map, 2, LOCAL(1), var_508_5_map_function, TAIL_CALL,
  POS(513, 7),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_78 = {
  t_lambda_78, NULL, 1, 1,
  {"512_8_items\000"}
};

static TAB_NUM t_lambda_79[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 514_8_left
  var_514_13_right,
  // map left: (idx item) -> reduce_function(item right(idx))
  var_map, 2, LOCAL(1), lambda_80, TAIL_CALL,
  POS(515, 7),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_79 = {
  t_lambda_79, NULL, 1, 1,
  {"514_8_left\000"}
};

static TAB_NUM t_lambda_80[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 515_18_idx
  LOCAL(4), // 515_22_item
  // right(idx))
  var_514_13_right, 1, LOCAL(3), 1, LOCAL(1),
  // reduce_function(item right(idx))
  var_509_5_reduce_function, 2, LOCAL(4), LOCAL(1), 1, LOCAL(2),
  // -> reduce_function(item right(idx))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(515, 52),
  POS(515, 31),
  POS(515, 28),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_80 = {
  t_lambda_80, NULL, 3, 2,
  {"515_22_item\000", "515_18_idx\000"}
};

static TAB_NUM t_func_std_types__generic_list___map_reduce_columns[] = {
  1, // locals
  3, // parameters
  LOCAL(1), // 519_5_self
  var_520_5_map_function,
  var_521_5_reduce_function,
  // map self: (item) map_reduce item map_function reduce_function
  var_map, 2, LOCAL(1), lambda_81, TAIL_CALL,
  POS(523, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__generic_list___map_reduce_columns = {
  t_func_std_types__generic_list___map_reduce_columns, NULL, 1, 1,
  {"519_5_self\000"}
};

static TAB_NUM t_lambda_81[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 523_14_item
  // map_reduce item map_function reduce_function
  var_map_reduce, 3, LOCAL(1), var_520_5_map_function, var_521_5_reduce_function, TAIL_CALL,
  POS(523, 20),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_81 = {
  t_lambda_81, NULL, 1, 1,
  {"523_14_item\000"}
};

static TAB_NUM t_func_std_types__generic_list___sort[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 527_5_self
  var_less, var_528_5_compare,
  // sort self
  func_sort, 1, LOCAL(1), TAIL_CALL,
  POS(530, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__generic_list___sort = {
  t_func_std_types__generic_list___sort, NULL, 1, 1,
  {"527_5_self\000"}
};

static TAB_NUM t_func_sort[] = {
  1, // locals
  1, // parameters
  var_532_11_items,
  // $n length_of(items)
  var_length_of, 1, var_532_11_items, 1, var_533_6_n,
  // 1:
  var_std__less, 2, num_1, var_533_6_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_82, lambda_83, TAIL_CALL,
  POS(533, 5),
  POS(535, 11),
  POS(534, 5)
};

static FUNCTION_INFO i_func_sort = {
  t_func_sort, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_82[] = {
  6, // locals
  0, // parameters
  // $m n >> 1
  var_std__shift_right, 2, var_533_6_n, num_1, 1, LOCAL(6),
  // range(items 1 m)) sort(range(items m+1 n)) compare
  var_range, 3, var_532_11_items, num_1, LOCAL(6), 1, LOCAL(1),
  // sort(range(items 1 m)) sort(range(items m+1 n)) compare
  func_sort, 1, LOCAL(1), 1, LOCAL(2),
  // m+1 n)) compare
  var_std__plus, 2, LOCAL(6), num_1, 1, LOCAL(3),
  // range(items m+1 n)) compare
  var_range, 3, var_532_11_items, LOCAL(3), var_533_6_n, 1, LOCAL(4),
  // sort(range(items m+1 n)) compare
  func_sort, 1, LOCAL(4), 1, LOCAL(5),
  // merge sort(range(items 1 m)) sort(range(items m+1 n)) compare
  var_merge, 3, LOCAL(2), LOCAL(5), var_528_5_compare, TAIL_CALL,
  POS(536, 9),
  POS(537, 20),
  POS(537, 15),
  POS(537, 55),
  POS(537, 43),
  POS(537, 38),
  POS(537, 9),
  LOCAL(6)
};

static FUNCTION_INFO i_lambda_82 = {
  t_lambda_82, NULL, 7, 1,
  {"536_10_m\000"}
};

static TAB_NUM t_lambda_83[] = {
  0, // locals
  0, // parameters
  //  items
  LET, 1, var_532_11_items, TAIL_CALL,
  POS(538, 9)
};

static FUNCTION_INFO i_lambda_83 = {
  t_lambda_83, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__generic_list___intersection[] = {
  2, // locals
  2, // parameters
  var_540_41_left,
  var_540_46_right,
  // is_empty || right.is_empty
  var_is_empty, 1, var_540_41_left, 1, LOCAL(1),
  // is_empty || right.is_empty
  var_std__or, 2, LOCAL(1), lambda_84, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_85, lambda_86, TAIL_CALL,
  POS(542, 10),
  POS(542, 10),
  POS(541, 3)
};

static FUNCTION_INFO i_func_std_types__generic_list___intersection = {
  t_func_std_types__generic_list___intersection, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_84[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_540_46_right, 1, LOCAL(1),
  // right.is_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(542, 28),
  POS(542, 22)
};

static FUNCTION_INFO i_lambda_84 = {
  t_lambda_84, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_85[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(543, 7)
};

static FUNCTION_INFO i_lambda_85 = {
  t_lambda_85, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_86[] = {
  1, // locals
  0, // parameters
  // map_reduce
  var_map_reduce, 4, var_540_41_left, lambda_left, var_append, var_empty_list, 1, LOCAL(1),
  // 
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(545, 7),
  POS(544, 7)
};

static FUNCTION_INFO i_lambda_86 = {
  t_lambda_86, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_left[] = {
  1, // locals
  1, // parameters
  var_546_16_item,
  // right .contains. item
  var_contains, 2, var_540_46_right, var_546_16_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_87, lambda_88, TAIL_CALL,
  POS(548, 13),
  POS(547, 11)
};

static FUNCTION_INFO i_lambda_left = {
  t_lambda_left, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_87[] = {
  1, // locals
  0, // parameters
  // list(item)
  var_list, 1, var_546_16_item, 1, LOCAL(1),
  //  list(item)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(549, 16),
  POS(549, 15)
};

static FUNCTION_INFO i_lambda_87 = {
  t_lambda_87, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_88[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(550, 15)
};

static FUNCTION_INFO i_lambda_88 = {
  t_lambda_88, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__generic_list___merge[] = {
  0, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_558_5_left,
  MANDATORY_PARAMETER, var_559_5_right,
  var_less, var_560_5_compare,
  // $i 1
  LET, 1, num_1, 1, var_562_4_i,
  // $j i
  LET, 1, var_562_4_i, 1, var_563_4_j,
  // $n length_of(left)
  var_length_of, 1, var_558_5_left, 1, var_564_4_n,
  // $m length_of(right)
  var_length_of, 1, var_559_5_right, 1, var_565_4_m,
  // $result new(left empty_list)
  var_new, 2, var_558_5_left, var_empty_list, 1, var_566_4_result,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(562, 3),
  POS(563, 3),
  POS(564, 3),
  POS(565, 3),
  POS(566, 3),
  POS(567, 3)
};

static FUNCTION_INFO i_func_std_types__generic_list___merge = {
  t_func_std_types__generic_list___merge, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_loop[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_564_4_n, var_562_4_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_89, lambda_94, TAIL_CALL,
  POS(569, 12),
  POS(569, 12),
  POS(568, 5)
};

static FUNCTION_INFO i_lambda_loop = {
  t_lambda_loop, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_89[] = {
  2, // locals
  0, // parameters
  // m:
  var_std__less, 2, var_565_4_m, var_563_4_j, 1, LOCAL(1),
  // m:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_90, lambda_93, TAIL_CALL,
  POS(571, 16),
  POS(571, 16),
  POS(570, 9)
};

static FUNCTION_INFO i_lambda_89 = {
  t_lambda_89, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_90[] = {
  3, // locals
  0, // parameters
  // left(i) right(j)):
  var_558_5_left, 1, var_562_4_i, 1, LOCAL(1),
  // right(j)):
  var_559_5_right, 1, var_563_4_j, 1, LOCAL(2),
  // compare(left(i) right(j)):
  var_560_5_compare, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_91, lambda_92, TAIL_CALL,
  POS(573, 23),
  POS(573, 31),
  POS(573, 15),
  POS(572, 13)
};

static FUNCTION_INFO i_lambda_90 = {
  t_lambda_90, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_91[] = {
  1, // locals
  0, // parameters
  // left(i)
  var_558_5_left, 1, var_562_4_i, 1, LOCAL(1),
  // push &result left(i)
  var_push, 2, var_566_4_result, LOCAL(1), 1, var_566_4_result,
  // !i i+1
  var_std__plus, 2, var_562_4_i, num_1, 1, var_562_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(574, 30),
  POS(574, 17),
  POS(575, 17),
  POS(576, 17)
};

static FUNCTION_INFO i_lambda_91 = {
  t_lambda_91, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_92[] = {
  1, // locals
  0, // parameters
  // right(j)
  var_559_5_right, 1, var_563_4_j, 1, LOCAL(1),
  // push &result right(j)
  var_push, 2, var_566_4_result, LOCAL(1), 1, var_566_4_result,
  // !j j+1
  var_std__plus, 2, var_563_4_j, num_1, 1, var_563_4_j,
  // next
  var_next, 0, TAIL_CALL,
  POS(578, 30),
  POS(578, 17),
  POS(579, 17),
  POS(580, 17)
};

static FUNCTION_INFO i_lambda_92 = {
  t_lambda_92, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_93[] = {
  1, // locals
  0, // parameters
  // range(left i n)
  var_range, 3, var_558_5_left, var_562_4_i, var_564_4_n, 1, LOCAL(1),
  // append result range(left i n)
  var_append, 2, var_566_4_result, LOCAL(1), TAIL_CALL,
  POS(582, 27),
  POS(582, 13)
};

static FUNCTION_INFO i_lambda_93 = {
  t_lambda_93, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_94[] = {
  1, // locals
  0, // parameters
  // range(right j m)
  var_range, 3, var_559_5_right, var_563_4_j, var_565_4_m, 1, LOCAL(1),
  // append result range(right j m)
  var_append, 2, var_566_4_result, LOCAL(1), TAIL_CALL,
  POS(584, 23),
  POS(584, 9)
};

static FUNCTION_INFO i_lambda_94 = {
  t_lambda_94, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__generic_list___zip[] = {
  0, // locals
  2, // parameters
  var_596_5_left,
  var_597_5_right,
  // $n length_of(left)
  var_length_of, 1, var_596_5_left, 1, var_599_4_n,
  // $m length_of(right)
  var_length_of, 1, var_597_5_right, 1, var_600_4_m,
  // $k min(n m)
  var_min, 2, var_599_4_n, var_600_4_m, 1, var_601_4_k,
  // $result new(left empty_list)
  var_new, 2, var_596_5_left, var_empty_list, 1, var_602_4_result,
  // from_to 1 k
  var_from_to, 4, num_1, var_601_4_k, lambda_95, lambda_96, TAIL_CALL,
  POS(599, 3),
  POS(600, 3),
  POS(601, 3),
  POS(602, 3),
  POS(603, 3)
};

static FUNCTION_INFO i_func_std_types__generic_list___zip = {
  t_func_std_types__generic_list___zip, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_95[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 604_8_i
  // left(i)
  var_596_5_left, 1, LOCAL(2), 1, LOCAL(1),
  // push &result left(i)
  var_push, 2, var_602_4_result, LOCAL(1), 1, var_602_4_result,
  // right(i)
  var_597_5_right, 1, LOCAL(2), 1, LOCAL(1),
  // push &result right(i)
  var_push, 2, var_602_4_result, LOCAL(1), 1, var_602_4_result,
  // next
  var_next, 0, TAIL_CALL,
  POS(605, 20),
  POS(605, 7),
  POS(606, 20),
  POS(606, 7),
  POS(607, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_95 = {
  t_lambda_95, NULL, 5, 1,
  {"604_8_i\000"}
};

static TAB_NUM t_lambda_96[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_97, lambda_99, lambda_101, TAIL_CALL,
  POS(609, 7)
};

static FUNCTION_INFO i_lambda_96 = {
  t_lambda_96, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_97[] = {
  1, // locals
  0, // parameters
  // k -> append(result range(left k+1 n))
  var_std__less, 2, var_601_4_k, var_599_4_n, 1, LOCAL(1),
  //  n > k -> append(result range(left k+1 n))
  LET, 2, LOCAL(1), lambda_98, TAIL_CALL,
  POS(610, 16),
  POS(610, 11)
};

static FUNCTION_INFO i_lambda_97 = {
  t_lambda_97, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_98[] = {
  3, // locals
  0, // parameters
  // k+1 n))
  var_std__plus, 2, var_601_4_k, num_1, 1, LOCAL(1),
  // range(left k+1 n))
  var_range, 3, var_596_5_left, LOCAL(1), var_599_4_n, 1, LOCAL(2),
  // append(result range(left k+1 n))
  var_append, 2, var_602_4_result, LOCAL(2), 1, LOCAL(3),
  //  append(result range(left k+1 n))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(610, 46),
  POS(610, 35),
  POS(610, 21),
  POS(610, 20)
};

static FUNCTION_INFO i_lambda_98 = {
  t_lambda_98, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_99[] = {
  1, // locals
  0, // parameters
  // k -> append(result range(right k+1 m))
  var_std__less, 2, var_601_4_k, var_600_4_m, 1, LOCAL(1),
  //  m > k -> append(result range(right k+1 m))
  LET, 2, LOCAL(1), lambda_100, TAIL_CALL,
  POS(611, 16),
  POS(611, 11)
};

static FUNCTION_INFO i_lambda_99 = {
  t_lambda_99, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_100[] = {
  3, // locals
  0, // parameters
  // k+1 m))
  var_std__plus, 2, var_601_4_k, num_1, 1, LOCAL(1),
  // range(right k+1 m))
  var_range, 3, var_597_5_right, LOCAL(1), var_600_4_m, 1, LOCAL(2),
  // append(result range(right k+1 m))
  var_append, 2, var_602_4_result, LOCAL(2), 1, LOCAL(3),
  //  append(result range(right k+1 m))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(611, 47),
  POS(611, 35),
  POS(611, 21),
  POS(611, 20)
};

static FUNCTION_INFO i_lambda_100 = {
  t_lambda_100, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_101[] = {
  0, // locals
  0, // parameters
  //  true -> result
  LET, 2, var_true, lambda_102, TAIL_CALL,
  POS(612, 11)
};

static FUNCTION_INFO i_lambda_101 = {
  t_lambda_101, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_102[] = {
  0, // locals
  0, // parameters
  //  result
  LET, 1, var_602_4_result, TAIL_CALL,
  POS(612, 19)
};

static FUNCTION_INFO i_lambda_102 = {
  t_lambda_102, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__generic_list___flatten[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 614_36_self
  // -> self # for strings
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(614, 42),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__generic_list___flatten = {
  t_func_std_types__generic_list___flatten, NULL, 1, 1,
  {"614_36_self\000"}
};

static TAB_NUM t_func_std_types__list___flatten[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 620_5_self
  // map_reduce self
  var_map_reduce, 4, LOCAL(1), lambda_103, var_append, var_empty_list, TAIL_CALL,
  POS(622, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__list___flatten = {
  t_func_std_types__list___flatten, NULL, 1, 1,
  {"620_5_self\000"}
};

static TAB_NUM t_lambda_103[] = {
  1, // locals
  1, // parameters
  var_623_8_item,
  // is_a_list
  var_is_a_list, 1, var_623_8_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_104, lambda_105, TAIL_CALL,
  POS(625, 14),
  POS(624, 7)
};

static FUNCTION_INFO i_lambda_103 = {
  t_lambda_103, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_104[] = {
  1, // locals
  0, // parameters
  // flatten(item)
  var_flatten, 1, var_623_8_item, 1, LOCAL(1),
  //  flatten(item)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(626, 12),
  POS(626, 11)
};

static FUNCTION_INFO i_lambda_104 = {
  t_lambda_104, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_105[] = {
  1, // locals
  0, // parameters
  // list(item)
  var_list, 1, var_623_8_item, 1, LOCAL(1),
  //  list(item)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(627, 12),
  POS(627, 11)
};

static FUNCTION_INFO i_lambda_105 = {
  t_lambda_105, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__generic_list___dup[] = {
  0, // locals
  2, // parameters
  var_641_5_self,
  var_642_5_n,
  // case n
  var_case, 6, var_642_5_n, num_0, lambda_106, num_1, lambda_107, lambda_108, TAIL_CALL,
  POS(644, 3)
};

static FUNCTION_INFO i_func_std_types__generic_list___dup = {
  t_func_std_types__generic_list___dup, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_106[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(645, 9)
};

static FUNCTION_INFO i_lambda_106 = {
  t_lambda_106, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_107[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_641_5_self, TAIL_CALL,
  POS(646, 9)
};

static FUNCTION_INFO i_lambda_107 = {
  t_lambda_107, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_108[] = {
  4, // locals
  0, // parameters
  // $h n >> 1 # fails if <n> is not a positive integer
  var_std__shift_right, 2, var_642_5_n, num_1, 1, LOCAL(3),
  // $lst dup(self h)
  var_dup, 2, var_641_5_self, LOCAL(3), 1, LOCAL(4),
  // $dlst append(lst lst)
  var_append, 2, LOCAL(4), LOCAL(4), 1, var_650_8_dlst,
  // 2*h == n
  var_std__times, 2, num_2, LOCAL(3), 1, LOCAL(1),
  // 2*h == n
  var_std__equal, 2, LOCAL(1), var_642_5_n, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_109, lambda_110, TAIL_CALL,
  POS(648, 7),
  POS(649, 7),
  POS(650, 7),
  POS(652, 9),
  POS(652, 9),
  POS(651, 7),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_108 = {
  t_lambda_108, NULL, 6, 2,
  {"649_8_lst\000", "648_8_h\000"}
};

static TAB_NUM t_lambda_109[] = {
  0, // locals
  0, // parameters
  //  dlst
  LET, 1, var_650_8_dlst, TAIL_CALL,
  POS(653, 11)
};

static FUNCTION_INFO i_lambda_109 = {
  t_lambda_109, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_110[] = {
  1, // locals
  0, // parameters
  // append(dlst self)
  var_append, 2, var_650_8_dlst, var_641_5_self, 1, LOCAL(1),
  //  append(dlst self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(654, 12),
  POS(654, 11)
};

static FUNCTION_INFO i_lambda_110 = {
  t_lambda_110, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__generic_list___contains[] = {
  1, // locals
  2, // parameters
  var_660_5_self,
  var_661_5_item,
  // is_empty
  var_is_empty, 1, var_660_5_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_111, lambda_112, TAIL_CALL,
  POS(664, 10),
  POS(663, 3)
};

static FUNCTION_INFO i_func_std_types__generic_list___contains = {
  t_func_std_types__generic_list___contains, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_111[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(665, 7)
};

static FUNCTION_INFO i_lambda_111 = {
  t_lambda_111, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_112[] = {
  2, // locals
  0, // parameters
  // self(1) == item
  var_660_5_self, 1, num_1, 1, LOCAL(1),
  // self(1) == item
  var_std__equal, 2, LOCAL(1), var_661_5_item, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_113, lambda_114, TAIL_CALL,
  POS(668, 9),
  POS(668, 9),
  POS(667, 7)
};

static FUNCTION_INFO i_lambda_112 = {
  t_lambda_112, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_113[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(669, 11)
};

static FUNCTION_INFO i_lambda_113 = {
  t_lambda_113, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_114[] = {
  1, // locals
  0, // parameters
  // range(self 2 -1) item
  var_range, 3, var_660_5_self, num_2, minus_num_1, 1, LOCAL(1),
  // contains range(self 2 -1) item
  var_contains, 2, LOCAL(1), var_661_5_item, TAIL_CALL,
  POS(671, 20),
  POS(671, 11)
};

static FUNCTION_INFO i_lambda_114 = {
  t_lambda_114, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__generic_list___find_first[] = {
  2, // locals
  2, // parameters
  var_673_39_self,
  var_673_44_test,
  // result_count() == 2:
  var_result_count, 0, 1, LOCAL(1),
  // result_count() == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_115, lambda_119, TAIL_CALL,
  POS(675, 5),
  POS(675, 5),
  POS(674, 3)
};

static FUNCTION_INFO i_func_std_types__generic_list___find_first = {
  t_func_std_types__generic_list___find_first, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_115[] = {
  0, // locals
  0, // parameters
  // for_each self
  var_for_each, 3, var_673_39_self, lambda_116, lambda_118, TAIL_CALL,
  POS(676, 7)
};

static FUNCTION_INFO i_lambda_115 = {
  t_lambda_115, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_116[] = {
  1, // locals
  2, // parameters
  var_677_12_idx,
  var_677_16_item,
  // test(item)
  var_673_44_test, 1, var_677_16_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_117, var_next, TAIL_CALL,
  POS(679, 13),
  POS(678, 11)
};

static FUNCTION_INFO i_lambda_116 = {
  t_lambda_116, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_117[] = {
  0, // locals
  0, // parameters
  //  idx item
  LET, 2, var_677_12_idx, var_677_16_item, TAIL_CALL,
  POS(680, 15)
};

static FUNCTION_INFO i_lambda_117 = {
  t_lambda_117, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_118[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(682, 11)
};

static FUNCTION_INFO i_lambda_118 = {
  t_lambda_118, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_119[] = {
  0, // locals
  0, // parameters
  // for_each self
  var_for_each, 3, var_673_39_self, lambda_120, lambda_122, TAIL_CALL,
  POS(684, 7)
};

static FUNCTION_INFO i_lambda_119 = {
  t_lambda_119, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_120[] = {
  1, // locals
  1, // parameters
  var_685_12_item,
  // test(item)
  var_673_44_test, 1, var_685_12_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_121, var_next, TAIL_CALL,
  POS(687, 13),
  POS(686, 11)
};

static FUNCTION_INFO i_lambda_120 = {
  t_lambda_120, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_121[] = {
  0, // locals
  0, // parameters
  //  item
  LET, 1, var_685_12_item, TAIL_CALL,
  POS(688, 15)
};

static FUNCTION_INFO i_lambda_121 = {
  t_lambda_121, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_122[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(690, 11)
};

static FUNCTION_INFO i_lambda_122 = {
  t_lambda_122, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__generic_list___filter[] = {
  2, // locals
  2, // parameters
  var_692_35_self,
  var_692_40_test,
  // result_count() == 2:
  var_result_count, 0, 1, LOCAL(1),
  // result_count() == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_123, lambda_129, TAIL_CALL,
  POS(694, 5),
  POS(694, 5),
  POS(693, 3)
};

static FUNCTION_INFO i_func_std_types__generic_list___filter = {
  t_func_std_types__generic_list___filter, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_123[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_692_35_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_124, lambda_125, TAIL_CALL,
  POS(696, 14),
  POS(695, 7)
};

static FUNCTION_INFO i_lambda_123 = {
  t_lambda_123, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_124[] = {
  0, // locals
  0, // parameters
  //  self self
  LET, 2, var_692_35_self, var_692_35_self, TAIL_CALL,
  POS(697, 11)
};

static FUNCTION_INFO i_lambda_124 = {
  t_lambda_124, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_125[] = {
  0, // locals
  0, // parameters
  // $good empty_list
  LET, 1, var_empty_list, 1, var_699_12_good,
  // $bad empty_list
  LET, 1, var_empty_list, 1, var_700_12_bad,
  // for_each self
  var_for_each, 3, var_692_35_self, lambda_126, lambda_128, TAIL_CALL,
  POS(699, 11),
  POS(700, 11),
  POS(701, 11)
};

static FUNCTION_INFO i_lambda_125 = {
  t_lambda_125, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_126[] = {
  1, // locals
  1, // parameters
  var_702_16_item,
  // test(item):
  var_692_40_test, 1, var_702_16_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_testitem, lambda_127, TAIL_CALL,
  POS(704, 17),
  POS(703, 15)
};

static FUNCTION_INFO i_lambda_126 = {
  t_lambda_126, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_testitem[] = {
  0, // locals
  0, // parameters
  // push &good item
  var_push, 2, var_699_12_good, var_702_16_item, 1, var_699_12_good,
  // next
  var_next, 0, TAIL_CALL,
  POS(705, 19),
  POS(706, 19)
};

static FUNCTION_INFO i_lambda_testitem = {
  t_lambda_testitem, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_127[] = {
  0, // locals
  0, // parameters
  // push &bad item
  var_push, 2, var_700_12_bad, var_702_16_item, 1, var_700_12_bad,
  // next
  var_next, 0, TAIL_CALL,
  POS(708, 19),
  POS(709, 19)
};

static FUNCTION_INFO i_lambda_127 = {
  t_lambda_127, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_128[] = {
  0, // locals
  0, // parameters
  //  good bad
  LET, 2, var_699_12_good, var_700_12_bad, TAIL_CALL,
  POS(710, 15)
};

static FUNCTION_INFO i_lambda_128 = {
  t_lambda_128, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_129[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_692_35_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_130, lambda_131, TAIL_CALL,
  POS(713, 14),
  POS(712, 7)
};

static FUNCTION_INFO i_lambda_129 = {
  t_lambda_129, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_130[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_692_35_self, TAIL_CALL,
  POS(714, 11)
};

static FUNCTION_INFO i_lambda_130 = {
  t_lambda_130, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_131[] = {
  1, // locals
  0, // parameters
  // length_of(self)
  var_length_of, 1, var_692_35_self, 1, LOCAL(1),
  // filter 1 length_of(self)
  func_filter, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(729, 20),
  POS(729, 11)
};

static FUNCTION_INFO i_lambda_131 = {
  t_lambda_131, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_filter[] = {
  1, // locals
  2, // parameters
  var_716_21_s,
  var_716_23_e,
  // s < e:
  var_std__less, 2, var_716_21_s, var_716_23_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_132, lambda_133, TAIL_CALL,
  POS(718, 15),
  POS(717, 13)
};

static FUNCTION_INFO i_func_filter = {
  t_func_filter, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_132[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_716_21_s, var_716_23_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // filter(s m)
  func_filter, 2, var_716_21_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // filter(m+1 e)
  func_filter, 2, LOCAL(2), var_716_23_e, 1, LOCAL(3),
  // append
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(719, 21),
  POS(719, 17),
  POS(721, 19),
  POS(722, 26),
  POS(722, 19),
  POS(720, 17),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_132 = {
  t_lambda_132, NULL, 6, 1,
  {"719_18_m\000"}
};

static TAB_NUM t_lambda_133[] = {
  2, // locals
  0, // parameters
  // self(s))
  var_692_35_self, 1, var_716_21_s, 1, LOCAL(1),
  // test(self(s))
  var_692_40_test, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_134, lambda_135, TAIL_CALL,
  POS(725, 24),
  POS(725, 19),
  POS(724, 17)
};

static FUNCTION_INFO i_lambda_133 = {
  t_lambda_133, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_134[] = {
  2, // locals
  0, // parameters
  // self(s))
  var_692_35_self, 1, var_716_21_s, 1, LOCAL(1),
  // list(self(s))
  var_list, 1, LOCAL(1), 1, LOCAL(2),
  //  list(self(s))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(726, 27),
  POS(726, 22),
  POS(726, 21)
};

static FUNCTION_INFO i_lambda_134 = {
  t_lambda_134, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_135[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(727, 21)
};

static FUNCTION_INFO i_lambda_135 = {
  t_lambda_135, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__levenshtein_distance[] = {
  2, // locals
  2, // parameters
  var_734_5_s,
  var_735_5_t,
  // $m length_of(s)
  var_length_of, 1, var_734_5_s, 1, LOCAL(2),
  // $n length_of(t)
  var_length_of, 1, var_735_5_t, 1, var_738_4_n,
  // n+1)
  var_std__plus, 2, var_738_4_n, num_1, 1, LOCAL(1),
  // $v0 int16_array(n+1)
  var_int16_array, 1, LOCAL(1), 1, var_739_4_v0,
  // n+1)
  var_std__plus, 2, var_738_4_n, num_1, 1, LOCAL(1),
  // $v1 int16_array(n+1)
  var_int16_array, 1, LOCAL(1), 1, var_740_4_v1,
  // from_to !v0 0 n
  var_from_to, 4, num_0, var_738_4_n, lambda_136, lambda_137, 1, var_739_4_v0,
  // from_to 1 m
  var_from_to, 4, num_1, LOCAL(2), lambda_138, lambda_143, TAIL_CALL,
  POS(737, 3),
  POS(738, 3),
  POS(739, 19),
  POS(739, 3),
  POS(740, 19),
  POS(740, 3),
  POS(741, 3),
  POS(746, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std__levenshtein_distance = {
  t_func_std__levenshtein_distance, NULL, 8, 1,
  {"737_4_m\000"}
};

static TAB_NUM t_lambda_136[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 742_8_i
  // i+1) i
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(2),
  // v0(i+1) i
  var_739_4_v0, 2, LOCAL(2), LOCAL(3), 1, var_739_4_v0,
  // next
  var_next, 0, TAIL_CALL,
  POS(743, 11),
  POS(743, 8),
  POS(744, 7),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_136 = {
  t_lambda_136, NULL, 3, 1,
  {"742_8_i\000"}
};

static TAB_NUM t_lambda_137[] = {
  0, // locals
  0, // parameters
  //  v0
  LET, 1, var_739_4_v0, TAIL_CALL,
  POS(745, 7)
};

static FUNCTION_INFO i_lambda_137 = {
  t_lambda_137, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_138[] = {
  0, // locals
  1, // parameters
  var_747_8_i,
  // v1(1) i
  var_740_4_v1, 2, num_1, var_747_8_i, 1, var_740_4_v1,
  // from_to 1 n
  var_from_to, 4, num_1, var_738_4_n, lambda_139, lambda_142, TAIL_CALL,
  POS(748, 8),
  POS(749, 7)
};

static FUNCTION_INFO i_lambda_138 = {
  t_lambda_138, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_139[] = {
  6, // locals
  1, // parameters
  var_750_12_j,
  // j+1)+1
  var_std__plus, 2, var_750_12_j, num_1, 1, LOCAL(1),
  // v0(j+1)+1
  var_739_4_v0, 1, LOCAL(1), 1, LOCAL(2),
  // $deletion_cost v0(j+1)+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(4),
  // v1(j)+1
  var_740_4_v1, 1, var_750_12_j, 1, LOCAL(1),
  // $insertion_cost v1(j)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(5),
  // s(i) == t(j)
  var_734_5_s, 1, var_747_8_i, 1, LOCAL(1),
  // t(j)
  var_735_5_t, 1, var_750_12_j, 1, LOCAL(2),
  // s(i) == t(j)
  var_std__equal, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // $substitution_cost
  var_if, 3, LOCAL(3), lambda_140, lambda_141, 1, LOCAL(6),
  // !v1(j+1) min(deletion_cost insertion_cost substitution_cost)
  var_min, 3, LOCAL(4), LOCAL(5), LOCAL(6), 1, LOCAL(2),
  // j+1) min(deletion_cost insertion_cost substitution_cost)
  var_std__plus, 2, var_750_12_j, num_1, 1, LOCAL(3),
  // v1(j+1) min(deletion_cost insertion_cost substitution_cost)
  var_740_4_v1, 2, LOCAL(3), LOCAL(2), 1, var_740_4_v1,
  // next
  var_next, 0, TAIL_CALL,
  POS(751, 29),
  POS(751, 26),
  POS(751, 11),
  POS(752, 27),
  POS(752, 11),
  POS(755, 15),
  POS(755, 23),
  POS(755, 15),
  POS(753, 11),
  POS(758, 11),
  POS(758, 15),
  POS(758, 12),
  POS(759, 11),
  LOCAL(4),
  LOCAL(6),
  LOCAL(5)
};

static FUNCTION_INFO i_lambda_139 = {
  t_lambda_139, NULL, 13, 3,
  {"751_12_deletion_cost\000", "753_12_substitution_cost\000", "752_12_insertion_cost\000"}
};

static TAB_NUM t_lambda_140[] = {
  1, // locals
  0, // parameters
  // v0(j)
  var_739_4_v0, 1, var_750_12_j, 1, LOCAL(1),
  //  v0(j)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(756, 18),
  POS(756, 17)
};

static FUNCTION_INFO i_lambda_140 = {
  t_lambda_140, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_141[] = {
  2, // locals
  0, // parameters
  // v0(j)+1
  var_739_4_v0, 1, var_750_12_j, 1, LOCAL(1),
  // v0(j)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  //  v0(j)+1
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(757, 18),
  POS(757, 18),
  POS(757, 17)
};

static FUNCTION_INFO i_lambda_141 = {
  t_lambda_141, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_142[] = {
  0, // locals
  0, // parameters
  // assign
  LET, 2, var_740_4_v1, var_739_4_v0, 2, var_739_4_v0, var_740_4_v1,
  // next
  var_next, 0, TAIL_CALL,
  POS(761, 11),
  POS(764, 11)
};

static FUNCTION_INFO i_lambda_142 = {
  t_lambda_142, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_143[] = {
  2, // locals
  0, // parameters
  // n+1)
  var_std__plus, 2, var_738_4_n, num_1, 1, LOCAL(1),
  // v0(n+1)
  var_739_4_v0, 1, LOCAL(1), 1, LOCAL(2),
  //  v0(n+1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(765, 11),
  POS(765, 8),
  POS(765, 7)
};

static FUNCTION_INFO i_lambda_143 = {
  t_lambda_143, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std_types__list___debug__to_string[] = {
  0, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_771_5_self,
  num_0, var_772_5_indent,
  num_1, var_773_5_depth,
  // cond
  var_cond, 3, lambda_144, lambda_146, lambda_150, TAIL_CALL,
  POS(775, 3)
};

static FUNCTION_INFO i_func_std_types__list___debug__to_string = {
  t_func_std_types__list___debug__to_string, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_144[] = {
  1, // locals
  0, // parameters
  // is_empty -> "empty_list@nl;"
  var_is_empty, 1, var_771_5_self, 1, LOCAL(1),
  //  self.is_empty -> "empty_list@nl;"
  LET, 2, LOCAL(1), lambda_145, TAIL_CALL,
  POS(776, 13),
  POS(776, 7)
};

static FUNCTION_INFO i_lambda_144 = {
  t_lambda_144, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_145[] = {
  0, // locals
  0, // parameters
  //  "empty_list@nl;"
  LET, 1, str_empty_list, TAIL_CALL,
  POS(776, 24)
};

static FUNCTION_INFO i_lambda_145 = {
  t_lambda_145, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_146[] = {
  2, // locals
  0, // parameters
  // 1:
  var_std__less, 2, num_1, var_773_5_depth, 1, LOCAL(1),
  // 1:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  //  depth <= 1:
  LET, 2, LOCAL(2), lambda_147, TAIL_CALL,
  POS(777, 17),
  POS(777, 17),
  POS(777, 7)
};

static FUNCTION_INFO i_lambda_146 = {
  t_lambda_146, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_147[] = {
  1, // locals
  0, // parameters
  // $len length_of(self)
  var_length_of, 1, var_771_5_self, 1, var_778_8_len,
  // len == 1
  var_std__equal, 2, var_778_8_len, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_148, lambda_149, TAIL_CALL,
  POS(778, 7),
  POS(780, 9),
  POS(779, 7)
};

static FUNCTION_INFO i_lambda_147 = {
  t_lambda_147, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_148[] = {
  0, // locals
  0, // parameters
  //  "<list of 1 item>@nl;"
  LET, 1, str_list_of_1_item, TAIL_CALL,
  POS(781, 11)
};

static FUNCTION_INFO i_lambda_148 = {
  t_lambda_148, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_149[] = {
  1, // locals
  0, // parameters
  // "<list of @(len) items>@nl;"
  var_std__string, 3, str_list_of, var_778_8_len, str__items, 1, LOCAL(1),
  //  "<list of @(len) items>@nl;"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(782, 12),
  POS(782, 11)
};

static FUNCTION_INFO i_lambda_149 = {
  t_lambda_149, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_150[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_151, TAIL_CALL,
  POS(783, 7)
};

static FUNCTION_INFO i_lambda_150 = {
  t_lambda_150, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_151[] = {
  3, // locals
  0, // parameters
  // $new_indent indent+2
  var_std__plus, 2, var_772_5_indent, num_2, 1, var_784_8_new_indent,
  // map_reduce $contents
  var_map_reduce, 4, var_771_5_self, lambda_self, var_append, string_1, 1, LOCAL(3),
  // tabs_and_spaces(indent) "list@nl;") contents
  var_tabs_and_spaces, 1, var_772_5_indent, 1, LOCAL(1),
  // append("@nl;" tabs_and_spaces(indent) "list@nl;") contents
  var_append, 3, string_2, LOCAL(1), str_list, 1, LOCAL(2),
  // append append("@nl;" tabs_and_spaces(indent) "list@nl;") contents
  var_append, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(784, 7),
  POS(785, 7),
  POS(794, 28),
  POS(794, 14),
  POS(794, 7),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_151 = {
  t_lambda_151, NULL, 5, 1,
  {"785_19_contents\000"}
};

static TAB_NUM t_lambda_self[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 786_16_value
  // depth-1)
  var_std__minus, 2, var_773_5_depth, num_1, 1, LOCAL(1),
  // $text debug::to_string(value new_indent depth-1)
  var_debug__to_string, 3, LOCAL(3), var_784_8_new_indent, LOCAL(1), 1, var_787_12_text,
  // text(1) == '@nl;'
  var_787_12_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_152, lambda_153, TAIL_CALL,
  POS(787, 51),
  POS(787, 11),
  POS(789, 13),
  POS(789, 13),
  POS(788, 11),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_self = {
  t_lambda_self, NULL, 5, 1,
  {"786_16_value\000"}
};

static TAB_NUM t_lambda_152[] = {
  1, // locals
  0, // parameters
  // range(text 2 -1)
  var_range, 3, var_787_12_text, num_2, minus_num_1, 1, LOCAL(1),
  //  range(text 2 -1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(790, 16),
  POS(790, 15)
};

static FUNCTION_INFO i_lambda_152 = {
  t_lambda_152, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_153[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(new_indent) text)
  var_tabs_and_spaces, 1, var_784_8_new_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(new_indent) text)
  var_append, 2, LOCAL(1), var_787_12_text, 1, LOCAL(2),
  //  append(tabs_and_spaces(new_indent) text)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(791, 23),
  POS(791, 16),
  POS(791, 15)
};

static FUNCTION_INFO i_lambda_153 = {
  t_lambda_153, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std_types__list___to_list[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 798_28_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(798, 34),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__list___to_list = {
  t_func_std_types__list___to_list, NULL, 1, 1,
  {"798_28_self\000"}
};

static TAB_NUM t_func_std_types__list___serialize[] = {
  4, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 804_5_self
  var_undefined, var_805_5_indent,
  // is_defined
  var_is_defined, 1, var_805_5_indent, 1, LOCAL(1),
  // $new_indent
  var_if, 3, LOCAL(1), lambda_154, lambda_155, 1, var_807_4_new_indent,
  // map_reduce $contents
  var_map_reduce, 4, LOCAL(3), lambda_2_self, var_append, string_1, 1, LOCAL(4),
  // serialization_tag_of(self)) <@(length_of(self))>
  var_serialization_tag_of, 1, LOCAL(3), 1, LOCAL(1),
  // length_of(self))>
  var_length_of, 1, LOCAL(3), 1, LOCAL(2),
  // $header
  var_std__string, 4, LOCAL(1), string_3, LOCAL(2), string_4, 1, var_816_4_header,
  // is_defined &header -> append(tabs_and_spaces(indent) header)
  var_is_defined, 1, var_805_5_indent, 1, LOCAL(1),
  // update_if indent.is_defined &header -> append(tabs_and_spaces(indent) header)
  var_update_if, 3, LOCAL(1), var_816_4_header, lambda_156, 1, var_816_4_header,
  // append header contents
  var_append, 2, var_816_4_header, LOCAL(4), TAIL_CALL,
  POS(809, 14),
  POS(807, 3),
  POS(812, 3),
  POS(818, 9),
  POS(818, 40),
  POS(816, 3),
  POS(819, 20),
  POS(819, 3),
  POS(820, 3),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__list___serialize = {
  t_func_std_types__list___serialize, NULL, 9, 2,
  {"804_5_self\000", "812_15_contents\000"}
};

static TAB_NUM t_lambda_154[] = {
  1, // locals
  0, // parameters
  // indent+2
  var_std__plus, 2, var_805_5_indent, num_2, 1, LOCAL(1),
  //  indent+2
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(810, 10),
  POS(810, 9)
};

static FUNCTION_INFO i_lambda_154 = {
  t_lambda_154, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_155[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(811, 9)
};

static FUNCTION_INFO i_lambda_155 = {
  t_lambda_155, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_2_self[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 813_12_item
  // serialize(item new_indent)
  var_serialize, 2, LOCAL(2), var_807_4_new_indent, 1, LOCAL(1),
  // -> serialize(item new_indent)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(813, 21),
  POS(813, 18),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_2_self = {
  t_lambda_2_self, NULL, 2, 1,
  {"813_12_item\000"}
};

static TAB_NUM t_lambda_156[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) header)
  var_tabs_and_spaces, 1, var_805_5_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) header)
  var_append, 2, LOCAL(1), var_816_4_header, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) header)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(819, 49),
  POS(819, 42),
  POS(819, 41)
};

static FUNCTION_INFO i_lambda_156 = {
  t_lambda_156, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std_types__list___deserializer_of[] = {
  2, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(2), // 825_5_items
  // -> items
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(827, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__list___deserializer_of = {
  t_func_std_types__list___deserializer_of, NULL, 1, 1,
  {"825_5_items\000"}
};

static TAB_NUM t_module_entry[] = {
  0, // locals
  0, // parameters
  // register_type &deserializers std_types::list
  var_register_type, 2, var_deserializers, var_std_types__list, 1, var_deserializers,
  LET, 1, 0, TAIL_CALL,
  POS(831, 1)
};

static FUNCTION_INFO i_module_entry = {
  t_module_entry, NULL, 1, 0,
  {}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_list___put}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_list___get}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_list___pop}},
  {FLT_NEGATIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_list___truncate}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_list___common_prefix}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_list___append_or_error}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__concatenate}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__concatenate_non_empty}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_func}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_list___reverse}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_list___for_each}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_iterate_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_iterate_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_next}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_24}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_next}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_list___map}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_25}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_26}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_27}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_28}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_29}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_30}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_31}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_32}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_33}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_34}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_list___map_or_error}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_35}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_36}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_37}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_38}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_39}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_40}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_41}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_42}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_43}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_44}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_45}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_46}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_47}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_48}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_list___std__reduce}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_49}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_50}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_reduce}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_51}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_52}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__list___reduce_columns}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_53}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__list___reduce_rows}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_54}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_55}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_list___map_reduce}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_56}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_57}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_58}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_59}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_60}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_61}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_62}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_63}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_64}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_65}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_66}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_67}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_68}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_69}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_70}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_71}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_72}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_73}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_74}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_75}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_76}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_77}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_list___map_reduce_rows}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_78}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_79}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_80}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_list___map_reduce_columns}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_81}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_list___sort}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_sort}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_82}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_83}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_list___intersection}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_84}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_85}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_86}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_left}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_87}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_88}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_list___merge}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_89}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_90}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_91}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_92}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_93}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_94}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_list___zip}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_95}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_96}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_97}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_98}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_99}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_100}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_101}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_102}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_list___flatten}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__list___flatten}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_103}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_104}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_105}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_list___dup}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_106}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_107}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_108}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_109}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_110}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_list___contains}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_111}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_112}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_113}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_114}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_list___find_first}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_115}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_116}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_117}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_118}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_119}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_120}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_121}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_122}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__generic_list___filter}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_123}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_124}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_125}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_126}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_testitem}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_127}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_128}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_129}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_130}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_131}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_filter}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_132}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_133}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_134}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_135}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__levenshtein_distance}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_136}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_137}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_138}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_139}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_140}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_141}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_142}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_143}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__list___debug__to_string}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_144}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_145}},
  {FLT_STRING_8, 11, {.str_8 = "empty_list\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_146}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_147}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_148}},
  {FLT_STRING_8, 17, {.str_8 = "<list of 1 item>\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_149}},
  {FLT_STRING_8, 9, {.str_8 = "<list of "}},
  {FLT_STRING_8, 8, {.str_8 = " items>\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_150}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_151}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_self}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_152}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_153}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_STRING_8, 5, {.str_8 = "list\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__list___to_list}},
  {FLT_STRING_8, 4, {.str_8 = "list"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__list___serialize}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_154}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_155}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_self}},
  {FLT_STRING_8, 2, {.str_8 = " <"}},
  {FLT_STRING_8, 2, {.str_8 = ">\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_156}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__list___deserializer_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_module_entry}}
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
  {var_common_prefix, -func_std_types__generic_list___common_prefix},
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
    FOT_UNKNOWN, 0, 24,
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
    "98_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "99_5_n\000", NULL
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
    FOT_POLYMORPHIC, 0, 0,
    "common_prefix\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "common_prefix\000", NULL,
    {.position = POS(109, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "109_42_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "109_47_right\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(110, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "112_8_idx\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(114, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(115, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(116, 25)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
    {.position = POS(111, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "append_or_error\000", NULL,
    {.position = POS(119, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "119_44_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "119_49_right\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(121, 10)}
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
    {.position = POS(131, 25)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "concatenate\000std", NULL,
    {.const_idx = -func_std__concatenate}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(135, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "concatenate_non_empty\000std", NULL,
    {.const_idx = -func_std__concatenate_non_empty}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "140_11_myself\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "140_19_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "140_24_right\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(142, 12)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reverse\000", NULL,
    {.position = POS(151, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "155_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "157_4_result\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(157, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(160, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to_by\000", NULL,
    {.position = POS(158, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "225_5_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(230, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from\000basic_loops", NULL,
    {.position = POS(231, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to\000basic_loops", NULL,
    {.position = POS(232, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "body\000basic_loops", NULL,
    {.position = POS(234, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finally\000basic_loops", NULL,
    {.position = POS(235, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(228, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(245, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break_function\000basic_types", NULL,
    {.position = POS(261, 14)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "saved_context_of\000basic_loops", NULL,
    {.position = POS(263, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(272, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(274, 28)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map\000", NULL,
    {.position = POS(283, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "293_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "294_5_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "304_16_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "304_18_e\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(307, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "300_8_map\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "313_16_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "313_18_e\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_or_error\000", NULL,
    {.position = POS(324, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "337_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "338_5_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "348_16_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "348_18_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "344_8_map\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "356_20_mapped_item\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "362_16_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "362_18_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "370_20_mapped_item\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reduce\000std", NULL,
    {.position = POS(378, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "390_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "391_5_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "392_5_unit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "398_17_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "399_10_n\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reduce_columns\000", NULL,
    {.position = POS(410, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "413_5_reduction\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "reduce\000", NULL,
    {.position = POS(415, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reduce_rows\000", NULL,
    {.position = POS(417, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "420_5_reduction\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "422_22_right\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(425, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "435_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "436_5_map_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "437_5_reduce_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "438_5_unit\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(441, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "450_20_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "450_22_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "446_12_map_reduce\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "463_20_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "463_22_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "485_20_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "485_22_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "481_12_map_reduce\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "494_20_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "494_22_e\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce_rows\000", NULL,
    {.position = POS(505, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "508_5_map_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "509_5_reduce_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "514_13_right\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce_columns\000", NULL,
    {.position = POS(517, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "520_5_map_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "521_5_reduce_function\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "sort\000", NULL,
    {.position = POS(525, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "528_5_compare\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000", NULL,
    {.position = POS(528, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "532_11_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "533_6_n\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "merge\000", NULL,
    {.position = POS(537, 9)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "intersection\000", NULL,
    {.position = POS(540, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "540_41_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "540_46_right\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(542, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "546_16_item\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "contains\000", NULL,
    {.position = POS(548, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "558_5_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "559_5_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "560_5_compare\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "562_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "563_4_j\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "564_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "565_4_m\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "566_4_result\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(567, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "zip\000", NULL,
    {.position = POS(586, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "596_5_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "597_5_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "599_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "600_4_m\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "601_4_k\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "min\000", NULL,
    {.position = POS(601, 6)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "602_4_result\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(609, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to\000", NULL,
    {.position = POS(603, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "flatten\000", NULL,
    {.position = POS(614, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "623_8_item\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "dup\000", NULL,
    {.position = POS(631, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "641_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "642_5_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "650_8_dlst\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(652, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(644, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "660_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "661_5_item\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "find_first\000", NULL,
    {.position = POS(673, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "673_39_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "673_44_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "677_12_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "677_16_item\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "685_12_item\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "filter\000", NULL,
    {.position = POS(692, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "692_35_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "692_40_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "699_12_good\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "700_12_bad\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "702_16_item\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "716_21_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "716_23_e\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "levenshtein_distance\000std", NULL,
    {.const_idx = -func_std__levenshtein_distance}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "734_5_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "735_5_t\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "738_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "739_4_v0\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "int16_array\000", NULL,
    {.position = POS(739, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "740_4_v1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "747_8_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "750_12_j\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000", NULL,
    {.position = POS(761, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_string\000debug", NULL,
    {.position = POS(769, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "771_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "772_5_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "773_5_depth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "778_8_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(782, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "784_8_new_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "787_12_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(791, 23)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_list\000", NULL,
    {.position = POS(798, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(800, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(802, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "805_5_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(809, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "807_4_new_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "816_4_header\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deserializer_of\000", NULL,
    {.position = POS(822, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deserializers\000", NULL,
    {.position = POS(831, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "register_type\000", NULL,
    {.position = POS(831, 1)}
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
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO|FEAT_INITIALIZER,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  219, // number of constants
  206, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
