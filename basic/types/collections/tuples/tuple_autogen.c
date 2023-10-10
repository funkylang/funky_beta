#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_builtin__tuple2___equal = -1,
  func_std_types__object___equal2 = -2,
  func_builtin__tuple2___equal2 = -3,
  lambda_1 = -4,
  func_builtin__tuple2___less = -5,
  lambda_2 = -6,
  lambda_3 = -7,
  func_builtin__tuple2___hash = -8,
  func_builtin__tuple2___to_binop = -9,
  func_binop2 = -10,
  func_builtin__tuple3___equal = -11,
  func_std_types__object___equal3 = -12,
  func_builtin__tuple3___equal3 = -13,
  lambda_4 = -14,
  lambda_5 = -15,
  func_builtin__tuple3___less = -16,
  lambda_6 = -17,
  lambda_7 = -18,
  lambda_8 = -19,
  lambda_9 = -20,
  func_builtin__tuple3___hash = -21,
  func_builtin__tuple3___to_binop = -22,
  func_binop3 = -23,
  func_builtin__tuple4___equal = -24,
  func_std_types__object___equal4 = -25,
  func_builtin__tuple4___equal4 = -26,
  lambda_10 = -27,
  lambda_11 = -28,
  lambda_12 = -29,
  func_builtin__tuple4___less = -30,
  lambda_13 = -31,
  lambda_14 = -32,
  lambda_15 = -33,
  lambda_16 = -34,
  lambda_17 = -35,
  lambda_18 = -36,
  func_builtin__tuple4___hash = -37,
  func_builtin__tuple4___to_binop = -38,
  func_binop4 = -39,
  func_builtin__tuple5___equal = -40,
  func_std_types__object___equal5 = -41,
  func_builtin__tuple5___equal5 = -42,
  lambda_19 = -43,
  lambda_20 = -44,
  lambda_21 = -45,
  lambda_22 = -46,
  func_builtin__tuple5___less = -47,
  lambda_23 = -48,
  lambda_24 = -49,
  lambda_25 = -50,
  lambda_26 = -51,
  lambda_27 = -52,
  lambda_28 = -53,
  lambda_29 = -54,
  lambda_30 = -55,
  func_builtin__tuple5___hash = -56,
  func_builtin__tuple5___to_binop = -57,
  func_binop5 = -58,
  func_builtin__tuple6___equal = -59,
  func_std_types__object___equal6 = -60,
  func_builtin__tuple6___equal6 = -61,
  lambda_31 = -62,
  lambda_32 = -63,
  lambda_33 = -64,
  lambda_34 = -65,
  lambda_35 = -66,
  func_builtin__tuple6___less = -67,
  lambda_36 = -68,
  lambda_37 = -69,
  lambda_38 = -70,
  lambda_39 = -71,
  lambda_40 = -72,
  lambda_41 = -73,
  lambda_42 = -74,
  lambda_43 = -75,
  lambda_44 = -76,
  lambda_45 = -77,
  func_builtin__tuple6___hash = -78,
  func_builtin__tuple6___to_binop = -79,
  func_binop6 = -80,
  func_builtin__tuple7___equal = -81,
  func_std_types__object___equal7 = -82,
  func_builtin__tuple7___equal7 = -83,
  lambda_46 = -84,
  lambda_47 = -85,
  lambda_48 = -86,
  lambda_49 = -87,
  lambda_50 = -88,
  lambda_51 = -89,
  func_builtin__tuple7___less = -90,
  lambda_52 = -91,
  lambda_53 = -92,
  lambda_54 = -93,
  lambda_55 = -94,
  lambda_56 = -95,
  lambda_57 = -96,
  lambda_58 = -97,
  lambda_59 = -98,
  lambda_60 = -99,
  lambda_61 = -100,
  lambda_62 = -101,
  lambda_63 = -102,
  func_builtin__tuple7___hash = -103,
  func_builtin__tuple7___to_binop = -104,
  func_binop7 = -105,
  func_builtin__tuple8___equal = -106,
  func_std_types__object___equal8 = -107,
  func_builtin__tuple8___equal8 = -108,
  lambda_64 = -109,
  lambda_65 = -110,
  lambda_66 = -111,
  lambda_67 = -112,
  lambda_68 = -113,
  lambda_69 = -114,
  lambda_70 = -115,
  func_builtin__tuple8___less = -116,
  lambda_71 = -117,
  lambda_72 = -118,
  lambda_73 = -119,
  lambda_74 = -120,
  lambda_75 = -121,
  lambda_76 = -122,
  lambda_77 = -123,
  lambda_78 = -124,
  lambda_79 = -125,
  lambda_80 = -126,
  lambda_81 = -127,
  lambda_82 = -128,
  lambda_83 = -129,
  lambda_84 = -130,
  func_builtin__tuple8___hash = -131,
  func_builtin__tuple8___to_binop = -132,
  func_binop8 = -133
};

enum {
  var__START = FIRST_VAR-1,
  var_std__to_binop, // attribute
  var_std__assign, // extern
  var_operators_of, // attribute
  var_equal2, // attribute
  var_builtin__tuple2, // extern
  var_equal, // extern polymorphic
  var_std_types__object, // extern
  var_false, // extern
  var_38_11_lv2, // dynamic
  var_39_12_rv2, // dynamic
  var_std__equal, // extern
  var_std__and, // extern
  var_less, // extern polymorphic
  var_46_6_lv1, // dynamic
  var_46_11_lv2, // dynamic
  var_47_7_rv1, // dynamic
  var_47_12_rv2, // dynamic
  var_std__less, // extern
  var_std__or, // extern
  var_hash, // extern polymorphic
  var_std__bit_xor, // extern
  var_to_binop, // extern polymorphic
  var_tuple, // extern
  var_equal3, // attribute
  var_builtin__tuple3, // extern
  var_80_11_lv2, // dynamic
  var_80_16_lv3, // dynamic
  var_81_12_rv2, // dynamic
  var_81_17_rv3, // dynamic
  var_89_6_lv1, // dynamic
  var_89_11_lv2, // dynamic
  var_89_16_lv3, // dynamic
  var_90_7_rv1, // dynamic
  var_90_12_rv2, // dynamic
  var_90_17_rv3, // dynamic
  var_equal4, // attribute
  var_builtin__tuple4, // extern
  var_129_11_lv2, // dynamic
  var_129_16_lv3, // dynamic
  var_129_21_lv4, // dynamic
  var_130_12_rv2, // dynamic
  var_130_17_rv3, // dynamic
  var_130_22_rv4, // dynamic
  var_139_6_lv1, // dynamic
  var_139_11_lv2, // dynamic
  var_139_16_lv3, // dynamic
  var_139_21_lv4, // dynamic
  var_140_7_rv1, // dynamic
  var_140_12_rv2, // dynamic
  var_140_17_rv3, // dynamic
  var_140_22_rv4, // dynamic
  var_equal5, // attribute
  var_builtin__tuple5, // extern
  var_185_11_lv2, // dynamic
  var_185_16_lv3, // dynamic
  var_185_21_lv4, // dynamic
  var_185_26_lv5, // dynamic
  var_186_12_rv2, // dynamic
  var_186_17_rv3, // dynamic
  var_186_22_rv4, // dynamic
  var_186_27_rv5, // dynamic
  var_196_6_lv1, // dynamic
  var_196_11_lv2, // dynamic
  var_196_16_lv3, // dynamic
  var_196_21_lv4, // dynamic
  var_196_26_lv5, // dynamic
  var_197_7_rv1, // dynamic
  var_197_12_rv2, // dynamic
  var_197_17_rv3, // dynamic
  var_197_22_rv4, // dynamic
  var_197_27_rv5, // dynamic
  var_equal6, // attribute
  var_builtin__tuple6, // extern
  var_248_11_lv2, // dynamic
  var_248_16_lv3, // dynamic
  var_248_21_lv4, // dynamic
  var_248_26_lv5, // dynamic
  var_248_31_lv6, // dynamic
  var_249_12_rv2, // dynamic
  var_249_17_rv3, // dynamic
  var_249_22_rv4, // dynamic
  var_249_27_rv5, // dynamic
  var_249_32_rv6, // dynamic
  var_260_6_lv1, // dynamic
  var_260_11_lv2, // dynamic
  var_260_16_lv3, // dynamic
  var_260_21_lv4, // dynamic
  var_260_26_lv5, // dynamic
  var_260_31_lv6, // dynamic
  var_261_7_rv1, // dynamic
  var_261_12_rv2, // dynamic
  var_261_17_rv3, // dynamic
  var_261_22_rv4, // dynamic
  var_261_27_rv5, // dynamic
  var_261_32_rv6, // dynamic
  var_equal7, // attribute
  var_builtin__tuple7, // extern
  var_318_11_lv2, // dynamic
  var_318_16_lv3, // dynamic
  var_318_21_lv4, // dynamic
  var_318_26_lv5, // dynamic
  var_318_31_lv6, // dynamic
  var_318_36_lv7, // dynamic
  var_319_12_rv2, // dynamic
  var_319_17_rv3, // dynamic
  var_319_22_rv4, // dynamic
  var_319_27_rv5, // dynamic
  var_319_32_rv6, // dynamic
  var_319_37_rv7, // dynamic
  var_331_6_lv1, // dynamic
  var_331_11_lv2, // dynamic
  var_331_16_lv3, // dynamic
  var_331_21_lv4, // dynamic
  var_331_26_lv5, // dynamic
  var_331_31_lv6, // dynamic
  var_331_36_lv7, // dynamic
  var_332_7_rv1, // dynamic
  var_332_12_rv2, // dynamic
  var_332_17_rv3, // dynamic
  var_332_22_rv4, // dynamic
  var_332_27_rv5, // dynamic
  var_332_32_rv6, // dynamic
  var_332_37_rv7, // dynamic
  var_equal8, // attribute
  var_builtin__tuple8, // extern
  var_395_11_lv2, // dynamic
  var_395_16_lv3, // dynamic
  var_395_21_lv4, // dynamic
  var_395_26_lv5, // dynamic
  var_395_31_lv6, // dynamic
  var_395_36_lv7, // dynamic
  var_395_41_lv8, // dynamic
  var_396_12_rv2, // dynamic
  var_396_17_rv3, // dynamic
  var_396_22_rv4, // dynamic
  var_396_27_rv5, // dynamic
  var_396_32_rv6, // dynamic
  var_396_37_rv7, // dynamic
  var_396_42_rv8, // dynamic
  var_409_6_lv1, // dynamic
  var_409_11_lv2, // dynamic
  var_409_16_lv3, // dynamic
  var_409_21_lv4, // dynamic
  var_409_26_lv5, // dynamic
  var_409_31_lv6, // dynamic
  var_409_36_lv7, // dynamic
  var_409_41_lv8, // dynamic
  var_410_7_rv1, // dynamic
  var_410_12_rv2, // dynamic
  var_410_17_rv3, // dynamic
  var_410_22_rv4, // dynamic
  var_410_27_rv5, // dynamic
  var_410_32_rv6, // dynamic
  var_410_37_rv7, // dynamic
  var_410_42_rv8, // dynamic
  var__END
};


static TAB_NUM t_func_builtin__tuple2___equal[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 32_25_left
  LOCAL(2), // 32_30_right
  // equal2 right left
  var_equal2, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(33, 3)
};

static TAB_NUM t_func_std_types__object___equal2[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(1),
  // -> false
  LET, 1, var_false, TAIL_CALL,
  POS(35, 43)
};

static TAB_NUM t_func_builtin__tuple2___equal2[] = {
  6, // locals
  2, // parameters
  LOCAL(3), // 37_26_right
  LOCAL(4), // 37_32_left
  // left $lv1 $lv2
  LOCAL(4), 0, 2, LOCAL(5), var_38_11_lv2,
  // right $rv1 $rv2
  LOCAL(3), 0, 2, LOCAL(6), var_39_12_rv2,
  // lv1 == rv1
  var_std__equal, 2, LOCAL(5), LOCAL(6), 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_1, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(38, 3),
  POS(39, 3),
  POS(42, 7),
  POS(41, 7),
  POS(40, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // lv2 == rv2
  var_std__equal, 2, var_38_11_lv2, var_39_12_rv2, 1, LOCAL(1),
  // lv2 == rv2
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(43, 7),
  POS(43, 7)
};

static TAB_NUM t_func_builtin__tuple2___less[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 45_24_left
  LOCAL(4), // 45_29_right
  // left $lv1 $lv2
  LOCAL(3), 0, 2, var_46_6_lv1, var_46_11_lv2,
  // right $rv1 $rv2
  LOCAL(4), 0, 2, var_47_7_rv1, var_47_12_rv2,
  // lv1 < rv1
  var_std__less, 2, var_46_6_lv1, var_47_7_rv1, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_2, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(46, 3),
  POS(47, 3),
  POS(50, 7),
  POS(49, 7),
  POS(48, 3)
};

static TAB_NUM t_lambda_2[] = {
  2, // locals
  0, // parameters
  // lv1 == rv1
  var_std__equal, 2, var_46_6_lv1, var_47_7_rv1, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_3, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(52, 9),
  POS(51, 9),
  POS(51, 9)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // lv2 < rv2
  var_std__less, 2, var_46_11_lv2, var_47_12_rv2, 1, LOCAL(1),
  // lv2 < rv2
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(53, 9),
  POS(53, 9)
};

static TAB_NUM t_func_builtin__tuple2___hash[] = {
  6, // locals
  1, // parameters
  LOCAL(4), // 55_24_self
  // self $v1 $v2
  LOCAL(4), 0, 2, LOCAL(5), LOCAL(6),
  // hash(v1)
  var_hash, 1, LOCAL(5), 1, LOCAL(1),
  // hash(v2)
  var_hash, 1, LOCAL(6), 1, LOCAL(2),
  // 
  var_std__bit_xor, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // ->
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(56, 3),
  POS(59, 7),
  POS(60, 7),
  POS(58, 6),
  POS(57, 3)
};

static TAB_NUM t_func_builtin__tuple2___to_binop[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 62_28_self
  // .operators_of self)
  LET, -1, func_binop2, var_operators_of, LOCAL(2), LOCAL(1),
  // -> binop2(.operators_of self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(62, 45),
  POS(62, 35)
};

static TAB_NUM t_func_binop2[] = {
  11, // locals
  -3, // parameters
  MYSELF_PARAMETER, LOCAL(3), // 64_10_myself
  MANDATORY_PARAMETER, LOCAL(4), // 64_18_left
  MANDATORY_PARAMETER, LOCAL(5), // 64_23_right
  // operators_of(myself) $op1 $op2
  var_operators_of, 1, LOCAL(3), 1, LOCAL(1),
  // operators_of(myself) $op1 $op2
  LOCAL(1), 0, 2, LOCAL(6), LOCAL(7),
  // left $lv1 $lv2
  LOCAL(4), 0, 2, LOCAL(8), LOCAL(9),
  // right $rv1 $rv2
  LOCAL(5), 0, 2, LOCAL(10), LOCAL(11),
  // op1(lv1 rv1)
  LOCAL(6), 2, LOCAL(8), LOCAL(10), 1, LOCAL(1),
  // op2(lv2 rv2)
  LOCAL(7), 2, LOCAL(9), LOCAL(11), 1, LOCAL(2),
  // tuple
  var_tuple, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(65, 3),
  POS(65, 3),
  POS(66, 3),
  POS(67, 3),
  POS(69, 5),
  POS(70, 5),
  POS(68, 3)
};

static TAB_NUM t_func_builtin__tuple3___equal[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 74_25_left
  LOCAL(2), // 74_30_right
  // equal3 right left
  var_equal3, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(75, 3)
};

static TAB_NUM t_func_std_types__object___equal3[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(1),
  // -> false
  LET, 1, var_false, TAIL_CALL,
  POS(77, 43)
};

static TAB_NUM t_func_builtin__tuple3___equal3[] = {
  6, // locals
  2, // parameters
  LOCAL(3), // 79_26_right
  LOCAL(4), // 79_32_left
  // left $lv1 $lv2 $lv3
  LOCAL(4), 0, 3, LOCAL(5), var_80_11_lv2, var_80_16_lv3,
  // right $rv1 $rv2 $rv3
  LOCAL(3), 0, 3, LOCAL(6), var_81_12_rv2, var_81_17_rv3,
  // lv1 == rv1
  var_std__equal, 2, LOCAL(5), LOCAL(6), 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_4, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(80, 3),
  POS(81, 3),
  POS(84, 7),
  POS(83, 7),
  POS(82, 3)
};

static TAB_NUM t_lambda_4[] = {
  2, // locals
  0, // parameters
  // lv2 == rv2
  var_std__equal, 2, var_80_11_lv2, var_81_12_rv2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_5, 1, LOCAL(2),
  // lv2 == rv2
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(85, 7),
  POS(83, 7),
  POS(85, 7)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // lv3 == rv3
  var_std__equal, 2, var_80_16_lv3, var_81_17_rv3, 1, LOCAL(1),
  // lv3 == rv3
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(86, 7),
  POS(86, 7)
};

static TAB_NUM t_func_builtin__tuple3___less[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 88_24_left
  LOCAL(4), // 88_29_right
  // left $lv1 $lv2 $lv3
  LOCAL(3), 0, 3, var_89_6_lv1, var_89_11_lv2, var_89_16_lv3,
  // right $rv1 $rv2 $rv3
  LOCAL(4), 0, 3, var_90_7_rv1, var_90_12_rv2, var_90_17_rv3,
  // lv1 < rv1
  var_std__less, 2, var_89_6_lv1, var_90_7_rv1, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_6, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(89, 3),
  POS(90, 3),
  POS(93, 7),
  POS(92, 7),
  POS(91, 3)
};

static TAB_NUM t_lambda_6[] = {
  2, // locals
  0, // parameters
  // lv1 == rv1
  var_std__equal, 2, var_89_6_lv1, var_90_7_rv1, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_7, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(95, 9),
  POS(94, 9),
  POS(94, 9)
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  0, // parameters
  // lv2 < rv2
  var_std__less, 2, var_89_11_lv2, var_90_12_rv2, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_8, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(97, 11),
  POS(96, 11),
  POS(96, 11)
};

static TAB_NUM t_lambda_8[] = {
  2, // locals
  0, // parameters
  // lv2 == rv2
  var_std__equal, 2, var_89_11_lv2, var_90_12_rv2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_9, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(99, 13),
  POS(98, 13),
  POS(98, 13)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // lv3 < rv3
  var_std__less, 2, var_89_16_lv3, var_90_17_rv3, 1, LOCAL(1),
  // lv3 < rv3
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(100, 13),
  POS(100, 13)
};

static TAB_NUM t_func_builtin__tuple3___hash[] = {
  9, // locals
  1, // parameters
  LOCAL(6), // 102_24_self
  // self $v1 $v2 $v3
  LOCAL(6), 0, 3, LOCAL(7), LOCAL(8), LOCAL(9),
  // hash(v1)
  var_hash, 1, LOCAL(7), 1, LOCAL(1),
  // hash(v2)
  var_hash, 1, LOCAL(8), 1, LOCAL(2),
  // 
  var_std__bit_xor, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // hash(v3)
  var_hash, 1, LOCAL(9), 1, LOCAL(4),
  // 
  var_std__bit_xor, 2, LOCAL(3), LOCAL(4), 1, LOCAL(5),
  // ->
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(103, 3),
  POS(106, 7),
  POS(107, 7),
  POS(105, 6),
  POS(108, 7),
  POS(105, 6),
  POS(104, 3)
};

static TAB_NUM t_func_builtin__tuple3___to_binop[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 110_28_self
  // .operators_of self)
  LET, -1, func_binop3, var_operators_of, LOCAL(2), LOCAL(1),
  // -> binop3(.operators_of self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(110, 45),
  POS(110, 35)
};

static TAB_NUM t_func_binop3[] = {
  15, // locals
  -3, // parameters
  MYSELF_PARAMETER, LOCAL(4), // 112_10_myself
  MANDATORY_PARAMETER, LOCAL(5), // 112_18_left
  MANDATORY_PARAMETER, LOCAL(6), // 112_23_right
  // operators_of(myself) $op1 $op2 $op3
  var_operators_of, 1, LOCAL(4), 1, LOCAL(1),
  // operators_of(myself) $op1 $op2 $op3
  LOCAL(1), 0, 3, LOCAL(7), LOCAL(8), LOCAL(9),
  // left $lv1 $lv2 $lv3
  LOCAL(5), 0, 3, LOCAL(10), LOCAL(11), LOCAL(12),
  // right $rv1 $rv2 $rv3
  LOCAL(6), 0, 3, LOCAL(13), LOCAL(14), LOCAL(15),
  // op1(lv1 rv1)
  LOCAL(7), 2, LOCAL(10), LOCAL(13), 1, LOCAL(1),
  // op2(lv2 rv2)
  LOCAL(8), 2, LOCAL(11), LOCAL(14), 1, LOCAL(2),
  // op3(lv3 rv3)
  LOCAL(9), 2, LOCAL(12), LOCAL(15), 1, LOCAL(3),
  // tuple
  var_tuple, 3, LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(113, 3),
  POS(113, 3),
  POS(114, 3),
  POS(115, 3),
  POS(117, 5),
  POS(118, 5),
  POS(119, 5),
  POS(116, 3)
};

static TAB_NUM t_func_builtin__tuple4___equal[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 123_25_left
  LOCAL(2), // 123_30_right
  // equal4 right left
  var_equal4, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(124, 3)
};

static TAB_NUM t_func_std_types__object___equal4[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(1),
  // -> false
  LET, 1, var_false, TAIL_CALL,
  POS(126, 43)
};

static TAB_NUM t_func_builtin__tuple4___equal4[] = {
  6, // locals
  2, // parameters
  LOCAL(3), // 128_26_right
  LOCAL(4), // 128_32_left
  // left $lv1 $lv2 $lv3 $lv4
  LOCAL(4), 0, 4, LOCAL(5), var_129_11_lv2, var_129_16_lv3, var_129_21_lv4,
  // right $rv1 $rv2 $rv3 $rv4
  LOCAL(3), 0, 4, LOCAL(6), var_130_12_rv2, var_130_17_rv3, var_130_22_rv4,
  // lv1 == rv1
  var_std__equal, 2, LOCAL(5), LOCAL(6), 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_10, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(129, 3),
  POS(130, 3),
  POS(133, 7),
  POS(132, 7),
  POS(131, 3)
};

static TAB_NUM t_lambda_10[] = {
  2, // locals
  0, // parameters
  // lv2 == rv2
  var_std__equal, 2, var_129_11_lv2, var_130_12_rv2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_11, 1, LOCAL(2),
  // lv2 == rv2
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(134, 7),
  POS(132, 7),
  POS(134, 7)
};

static TAB_NUM t_lambda_11[] = {
  2, // locals
  0, // parameters
  // lv3 == rv3
  var_std__equal, 2, var_129_16_lv3, var_130_17_rv3, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_12, 1, LOCAL(2),
  // lv3 == rv3
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(135, 7),
  POS(132, 7),
  POS(135, 7)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // lv4 == rv4
  var_std__equal, 2, var_129_21_lv4, var_130_22_rv4, 1, LOCAL(1),
  // lv4 == rv4
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(136, 7),
  POS(136, 7)
};

static TAB_NUM t_func_builtin__tuple4___less[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 138_24_left
  LOCAL(4), // 138_29_right
  // left $lv1 $lv2 $lv3 $lv4
  LOCAL(3), 0, 4, var_139_6_lv1, var_139_11_lv2, var_139_16_lv3, var_139_21_lv4,
  // right $rv1 $rv2 $rv3 $rv4
  LOCAL(4), 0, 4, var_140_7_rv1, var_140_12_rv2, var_140_17_rv3, var_140_22_rv4,
  // lv1 < rv1
  var_std__less, 2, var_139_6_lv1, var_140_7_rv1, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_13, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(139, 3),
  POS(140, 3),
  POS(143, 7),
  POS(142, 7),
  POS(141, 3)
};

static TAB_NUM t_lambda_13[] = {
  2, // locals
  0, // parameters
  // lv1 == rv1
  var_std__equal, 2, var_139_6_lv1, var_140_7_rv1, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_14, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(145, 9),
  POS(144, 9),
  POS(144, 9)
};

static TAB_NUM t_lambda_14[] = {
  2, // locals
  0, // parameters
  // lv2 < rv2
  var_std__less, 2, var_139_11_lv2, var_140_12_rv2, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_15, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(147, 11),
  POS(146, 11),
  POS(146, 11)
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // lv2 == rv2
  var_std__equal, 2, var_139_11_lv2, var_140_12_rv2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_16, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(149, 13),
  POS(148, 13),
  POS(148, 13)
};

static TAB_NUM t_lambda_16[] = {
  2, // locals
  0, // parameters
  // lv3 < rv3
  var_std__less, 2, var_139_16_lv3, var_140_17_rv3, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_17, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(151, 15),
  POS(150, 15),
  POS(150, 15)
};

static TAB_NUM t_lambda_17[] = {
  2, // locals
  0, // parameters
  // lv3 == rv3
  var_std__equal, 2, var_139_16_lv3, var_140_17_rv3, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_18, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(153, 17),
  POS(152, 17),
  POS(152, 17)
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  0, // parameters
  // lv4 < rv4
  var_std__less, 2, var_139_21_lv4, var_140_22_rv4, 1, LOCAL(1),
  // lv4 < rv4
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(154, 17),
  POS(154, 17)
};

static TAB_NUM t_func_builtin__tuple4___hash[] = {
  12, // locals
  1, // parameters
  LOCAL(8), // 156_24_self
  // self $v1 $v2 $v3 $v4
  LOCAL(8), 0, 4, LOCAL(9), LOCAL(10), LOCAL(11), LOCAL(12),
  // hash(v1)
  var_hash, 1, LOCAL(9), 1, LOCAL(1),
  // hash(v2)
  var_hash, 1, LOCAL(10), 1, LOCAL(2),
  // 
  var_std__bit_xor, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // hash(v3)
  var_hash, 1, LOCAL(11), 1, LOCAL(4),
  // 
  var_std__bit_xor, 2, LOCAL(3), LOCAL(4), 1, LOCAL(5),
  // hash(v4)
  var_hash, 1, LOCAL(12), 1, LOCAL(6),
  // 
  var_std__bit_xor, 2, LOCAL(5), LOCAL(6), 1, LOCAL(7),
  // ->
  LET, 1, LOCAL(7), TAIL_CALL,
  POS(157, 3),
  POS(160, 7),
  POS(161, 7),
  POS(159, 6),
  POS(162, 7),
  POS(159, 6),
  POS(163, 7),
  POS(159, 6),
  POS(158, 3)
};

static TAB_NUM t_func_builtin__tuple4___to_binop[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 165_28_self
  // .operators_of self)
  LET, -1, func_binop4, var_operators_of, LOCAL(2), LOCAL(1),
  // -> binop4(.operators_of self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(165, 45),
  POS(165, 35)
};

static TAB_NUM t_func_binop4[] = {
  19, // locals
  -3, // parameters
  MYSELF_PARAMETER, LOCAL(5), // 167_10_myself
  MANDATORY_PARAMETER, LOCAL(6), // 167_18_left
  MANDATORY_PARAMETER, LOCAL(7), // 167_23_right
  // operators_of(myself) $op1 $op2 $op3 $op4
  var_operators_of, 1, LOCAL(5), 1, LOCAL(1),
  // operators_of(myself) $op1 $op2 $op3 $op4
  LOCAL(1), 0, 4, LOCAL(8), LOCAL(9), LOCAL(10), LOCAL(11),
  // left $lv1 $lv2 $lv3 $lv4
  LOCAL(6), 0, 4, LOCAL(12), LOCAL(13), LOCAL(14), LOCAL(15),
  // right $rv1 $rv2 $rv3 $rv4
  LOCAL(7), 0, 4, LOCAL(16), LOCAL(17), LOCAL(18), LOCAL(19),
  // op1(lv1 rv1)
  LOCAL(8), 2, LOCAL(12), LOCAL(16), 1, LOCAL(1),
  // op2(lv2 rv2)
  LOCAL(9), 2, LOCAL(13), LOCAL(17), 1, LOCAL(2),
  // op3(lv3 rv3)
  LOCAL(10), 2, LOCAL(14), LOCAL(18), 1, LOCAL(3),
  // op4(lv4 rv4)
  LOCAL(11), 2, LOCAL(15), LOCAL(19), 1, LOCAL(4),
  // tuple
  var_tuple, 4, LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(168, 3),
  POS(168, 3),
  POS(169, 3),
  POS(170, 3),
  POS(172, 5),
  POS(173, 5),
  POS(174, 5),
  POS(175, 5),
  POS(171, 3)
};

static TAB_NUM t_func_builtin__tuple5___equal[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 179_25_left
  LOCAL(2), // 179_30_right
  // equal5 right left
  var_equal5, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(180, 3)
};

static TAB_NUM t_func_std_types__object___equal5[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(1),
  // -> false
  LET, 1, var_false, TAIL_CALL,
  POS(182, 43)
};

static TAB_NUM t_func_builtin__tuple5___equal5[] = {
  6, // locals
  2, // parameters
  LOCAL(3), // 184_26_right
  LOCAL(4), // 184_32_left
  // left $lv1 $lv2 $lv3 $lv4 $lv5
  LOCAL(4), 0, 5, LOCAL(5), var_185_11_lv2, var_185_16_lv3, var_185_21_lv4, var_185_26_lv5,
  // right $rv1 $rv2 $rv3 $rv4 $rv5
  LOCAL(3), 0, 5, LOCAL(6), var_186_12_rv2, var_186_17_rv3, var_186_22_rv4, var_186_27_rv5,
  // lv1 == rv1
  var_std__equal, 2, LOCAL(5), LOCAL(6), 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_19, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(185, 3),
  POS(186, 3),
  POS(189, 7),
  POS(188, 7),
  POS(187, 3)
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  0, // parameters
  // lv2 == rv2
  var_std__equal, 2, var_185_11_lv2, var_186_12_rv2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_20, 1, LOCAL(2),
  // lv2 == rv2
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(190, 7),
  POS(188, 7),
  POS(190, 7)
};

static TAB_NUM t_lambda_20[] = {
  2, // locals
  0, // parameters
  // lv3 == rv3
  var_std__equal, 2, var_185_16_lv3, var_186_17_rv3, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_21, 1, LOCAL(2),
  // lv3 == rv3
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(191, 7),
  POS(188, 7),
  POS(191, 7)
};

static TAB_NUM t_lambda_21[] = {
  2, // locals
  0, // parameters
  // lv4 == rv4
  var_std__equal, 2, var_185_21_lv4, var_186_22_rv4, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_22, 1, LOCAL(2),
  // lv4 == rv4
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(192, 7),
  POS(188, 7),
  POS(192, 7)
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // lv5 == rv5
  var_std__equal, 2, var_185_26_lv5, var_186_27_rv5, 1, LOCAL(1),
  // lv5 == rv5
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(193, 7),
  POS(193, 7)
};

static TAB_NUM t_func_builtin__tuple5___less[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 195_24_left
  LOCAL(4), // 195_29_right
  // left $lv1 $lv2 $lv3 $lv4 $lv5
  LOCAL(3), 0, 5, var_196_6_lv1, var_196_11_lv2, var_196_16_lv3, var_196_21_lv4, var_196_26_lv5,
  // right $rv1 $rv2 $rv3 $rv4 $rv5
  LOCAL(4), 0, 5, var_197_7_rv1, var_197_12_rv2, var_197_17_rv3, var_197_22_rv4, var_197_27_rv5,
  // lv1 < rv1
  var_std__less, 2, var_196_6_lv1, var_197_7_rv1, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_23, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(196, 3),
  POS(197, 3),
  POS(200, 7),
  POS(199, 7),
  POS(198, 3)
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  0, // parameters
  // lv1 == rv1
  var_std__equal, 2, var_196_6_lv1, var_197_7_rv1, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_24, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(202, 9),
  POS(201, 9),
  POS(201, 9)
};

static TAB_NUM t_lambda_24[] = {
  2, // locals
  0, // parameters
  // lv2 < rv2
  var_std__less, 2, var_196_11_lv2, var_197_12_rv2, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_25, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(204, 11),
  POS(203, 11),
  POS(203, 11)
};

static TAB_NUM t_lambda_25[] = {
  2, // locals
  0, // parameters
  // lv2 == rv2
  var_std__equal, 2, var_196_11_lv2, var_197_12_rv2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_26, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(206, 13),
  POS(205, 13),
  POS(205, 13)
};

static TAB_NUM t_lambda_26[] = {
  2, // locals
  0, // parameters
  // lv3 < rv3
  var_std__less, 2, var_196_16_lv3, var_197_17_rv3, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_27, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(208, 15),
  POS(207, 15),
  POS(207, 15)
};

static TAB_NUM t_lambda_27[] = {
  2, // locals
  0, // parameters
  // lv3 == rv3
  var_std__equal, 2, var_196_16_lv3, var_197_17_rv3, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_28, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(210, 17),
  POS(209, 17),
  POS(209, 17)
};

static TAB_NUM t_lambda_28[] = {
  2, // locals
  0, // parameters
  // lv4 < rv4
  var_std__less, 2, var_196_21_lv4, var_197_22_rv4, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_29, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(212, 19),
  POS(211, 19),
  POS(211, 19)
};

static TAB_NUM t_lambda_29[] = {
  2, // locals
  0, // parameters
  // lv4 == rv4
  var_std__equal, 2, var_196_21_lv4, var_197_22_rv4, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_30, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(214, 21),
  POS(213, 21),
  POS(213, 21)
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  0, // parameters
  // lv5 < rv5
  var_std__less, 2, var_196_26_lv5, var_197_27_rv5, 1, LOCAL(1),
  // lv5 < rv5
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(215, 21),
  POS(215, 21)
};

static TAB_NUM t_func_builtin__tuple5___hash[] = {
  15, // locals
  1, // parameters
  LOCAL(10), // 217_24_self
  // self $v1 $v2 $v3 $v4 $v5
  LOCAL(10), 0, 5, LOCAL(11), LOCAL(12), LOCAL(13), LOCAL(14), LOCAL(15),
  // hash(v1)
  var_hash, 1, LOCAL(11), 1, LOCAL(1),
  // hash(v2)
  var_hash, 1, LOCAL(12), 1, LOCAL(2),
  // 
  var_std__bit_xor, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // hash(v3)
  var_hash, 1, LOCAL(13), 1, LOCAL(4),
  // 
  var_std__bit_xor, 2, LOCAL(3), LOCAL(4), 1, LOCAL(5),
  // hash(v4)
  var_hash, 1, LOCAL(14), 1, LOCAL(6),
  // 
  var_std__bit_xor, 2, LOCAL(5), LOCAL(6), 1, LOCAL(7),
  // hash(v5)
  var_hash, 1, LOCAL(15), 1, LOCAL(8),
  // 
  var_std__bit_xor, 2, LOCAL(7), LOCAL(8), 1, LOCAL(9),
  // ->
  LET, 1, LOCAL(9), TAIL_CALL,
  POS(218, 3),
  POS(221, 7),
  POS(222, 7),
  POS(220, 6),
  POS(223, 7),
  POS(220, 6),
  POS(224, 7),
  POS(220, 6),
  POS(225, 7),
  POS(220, 6),
  POS(219, 3)
};

static TAB_NUM t_func_builtin__tuple5___to_binop[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 227_28_self
  // .operators_of self)
  LET, -1, func_binop5, var_operators_of, LOCAL(2), LOCAL(1),
  // -> binop5(.operators_of self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(227, 45),
  POS(227, 35)
};

static TAB_NUM t_func_binop5[] = {
  23, // locals
  -3, // parameters
  MYSELF_PARAMETER, LOCAL(6), // 229_10_myself
  MANDATORY_PARAMETER, LOCAL(7), // 229_18_left
  MANDATORY_PARAMETER, LOCAL(8), // 229_23_right
  // operators_of(myself) $op1 $op2 $op3 $op4 $op5
  var_operators_of, 1, LOCAL(6), 1, LOCAL(1),
  // operators_of(myself) $op1 $op2 $op3 $op4 $op5
  LOCAL(1), 0, 5, LOCAL(9), LOCAL(10), LOCAL(11), LOCAL(12), LOCAL(13),
  // left $lv1 $lv2 $lv3 $lv4 $lv5
  LOCAL(7), 0, 5, LOCAL(14), LOCAL(15), LOCAL(16), LOCAL(17), LOCAL(18),
  // right $rv1 $rv2 $rv3 $rv4 $rv5
  LOCAL(8), 0, 5, LOCAL(19), LOCAL(20), LOCAL(21), LOCAL(22), LOCAL(23),
  // op1(lv1 rv1)
  LOCAL(9), 2, LOCAL(14), LOCAL(19), 1, LOCAL(1),
  // op2(lv2 rv2)
  LOCAL(10), 2, LOCAL(15), LOCAL(20), 1, LOCAL(2),
  // op3(lv3 rv3)
  LOCAL(11), 2, LOCAL(16), LOCAL(21), 1, LOCAL(3),
  // op4(lv4 rv4)
  LOCAL(12), 2, LOCAL(17), LOCAL(22), 1, LOCAL(4),
  // op5(lv5 rv5)
  LOCAL(13), 2, LOCAL(18), LOCAL(23), 1, LOCAL(5),
  // tuple
  var_tuple, 5, LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), TAIL_CALL,
  POS(230, 3),
  POS(230, 3),
  POS(231, 3),
  POS(232, 3),
  POS(234, 5),
  POS(235, 5),
  POS(236, 5),
  POS(237, 5),
  POS(238, 5),
  POS(233, 3)
};

static TAB_NUM t_func_builtin__tuple6___equal[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 242_25_left
  LOCAL(2), // 242_30_right
  // equal6 right left
  var_equal6, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(243, 3)
};

static TAB_NUM t_func_std_types__object___equal6[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(1),
  // -> false
  LET, 1, var_false, TAIL_CALL,
  POS(245, 43)
};

static TAB_NUM t_func_builtin__tuple6___equal6[] = {
  6, // locals
  2, // parameters
  LOCAL(3), // 247_26_right
  LOCAL(4), // 247_32_left
  // left $lv1 $lv2 $lv3 $lv4 $lv5 $lv6
  LOCAL(4), 0, 6, LOCAL(5), var_248_11_lv2, var_248_16_lv3, var_248_21_lv4, var_248_26_lv5, var_248_31_lv6,
  // right $rv1 $rv2 $rv3 $rv4 $rv5 $rv6
  LOCAL(3), 0, 6, LOCAL(6), var_249_12_rv2, var_249_17_rv3, var_249_22_rv4, var_249_27_rv5, var_249_32_rv6,
  // lv1 == rv1
  var_std__equal, 2, LOCAL(5), LOCAL(6), 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_31, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(248, 3),
  POS(249, 3),
  POS(252, 7),
  POS(251, 7),
  POS(250, 3)
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  0, // parameters
  // lv2 == rv2
  var_std__equal, 2, var_248_11_lv2, var_249_12_rv2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_32, 1, LOCAL(2),
  // lv2 == rv2
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(253, 7),
  POS(251, 7),
  POS(253, 7)
};

static TAB_NUM t_lambda_32[] = {
  2, // locals
  0, // parameters
  // lv3 == rv3
  var_std__equal, 2, var_248_16_lv3, var_249_17_rv3, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_33, 1, LOCAL(2),
  // lv3 == rv3
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(254, 7),
  POS(251, 7),
  POS(254, 7)
};

static TAB_NUM t_lambda_33[] = {
  2, // locals
  0, // parameters
  // lv4 == rv4
  var_std__equal, 2, var_248_21_lv4, var_249_22_rv4, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_34, 1, LOCAL(2),
  // lv4 == rv4
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(255, 7),
  POS(251, 7),
  POS(255, 7)
};

static TAB_NUM t_lambda_34[] = {
  2, // locals
  0, // parameters
  // lv5 == rv5
  var_std__equal, 2, var_248_26_lv5, var_249_27_rv5, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_35, 1, LOCAL(2),
  // lv5 == rv5
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(256, 7),
  POS(251, 7),
  POS(256, 7)
};

static TAB_NUM t_lambda_35[] = {
  1, // locals
  0, // parameters
  // lv6 == rv6
  var_std__equal, 2, var_248_31_lv6, var_249_32_rv6, 1, LOCAL(1),
  // lv6 == rv6
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(257, 7),
  POS(257, 7)
};

static TAB_NUM t_func_builtin__tuple6___less[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 259_24_left
  LOCAL(4), // 259_29_right
  // left $lv1 $lv2 $lv3 $lv4 $lv5 $lv6
  LOCAL(3), 0, 6, var_260_6_lv1, var_260_11_lv2, var_260_16_lv3, var_260_21_lv4, var_260_26_lv5, var_260_31_lv6,
  // right $rv1 $rv2 $rv3 $rv4 $rv5 $rv6
  LOCAL(4), 0, 6, var_261_7_rv1, var_261_12_rv2, var_261_17_rv3, var_261_22_rv4, var_261_27_rv5, var_261_32_rv6,
  // lv1 < rv1
  var_std__less, 2, var_260_6_lv1, var_261_7_rv1, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_36, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(260, 3),
  POS(261, 3),
  POS(264, 7),
  POS(263, 7),
  POS(262, 3)
};

static TAB_NUM t_lambda_36[] = {
  2, // locals
  0, // parameters
  // lv1 == rv1
  var_std__equal, 2, var_260_6_lv1, var_261_7_rv1, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_37, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(266, 9),
  POS(265, 9),
  POS(265, 9)
};

static TAB_NUM t_lambda_37[] = {
  2, // locals
  0, // parameters
  // lv2 < rv2
  var_std__less, 2, var_260_11_lv2, var_261_12_rv2, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_38, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(268, 11),
  POS(267, 11),
  POS(267, 11)
};

static TAB_NUM t_lambda_38[] = {
  2, // locals
  0, // parameters
  // lv2 == rv2
  var_std__equal, 2, var_260_11_lv2, var_261_12_rv2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_39, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(270, 13),
  POS(269, 13),
  POS(269, 13)
};

static TAB_NUM t_lambda_39[] = {
  2, // locals
  0, // parameters
  // lv3 < rv3
  var_std__less, 2, var_260_16_lv3, var_261_17_rv3, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_40, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(272, 15),
  POS(271, 15),
  POS(271, 15)
};

static TAB_NUM t_lambda_40[] = {
  2, // locals
  0, // parameters
  // lv3 == rv3
  var_std__equal, 2, var_260_16_lv3, var_261_17_rv3, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_41, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(274, 17),
  POS(273, 17),
  POS(273, 17)
};

static TAB_NUM t_lambda_41[] = {
  2, // locals
  0, // parameters
  // lv4 < rv4
  var_std__less, 2, var_260_21_lv4, var_261_22_rv4, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_42, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(276, 19),
  POS(275, 19),
  POS(275, 19)
};

static TAB_NUM t_lambda_42[] = {
  2, // locals
  0, // parameters
  // lv4 == rv4
  var_std__equal, 2, var_260_21_lv4, var_261_22_rv4, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_43, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(278, 21),
  POS(277, 21),
  POS(277, 21)
};

static TAB_NUM t_lambda_43[] = {
  2, // locals
  0, // parameters
  // lv5 < rv5
  var_std__less, 2, var_260_26_lv5, var_261_27_rv5, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_44, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(280, 23),
  POS(279, 23),
  POS(279, 23)
};

static TAB_NUM t_lambda_44[] = {
  2, // locals
  0, // parameters
  // lv5 == rv5
  var_std__equal, 2, var_260_26_lv5, var_261_27_rv5, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_45, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(282, 25),
  POS(281, 25),
  POS(281, 25)
};

static TAB_NUM t_lambda_45[] = {
  1, // locals
  0, // parameters
  // lv6 < rv6
  var_std__less, 2, var_260_31_lv6, var_261_32_rv6, 1, LOCAL(1),
  // lv6 < rv6
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(283, 25),
  POS(283, 25)
};

static TAB_NUM t_func_builtin__tuple6___hash[] = {
  18, // locals
  1, // parameters
  LOCAL(12), // 285_24_self
  // self $v1 $v2 $v3 $v4 $v5 $v6
  LOCAL(12), 0, 6, LOCAL(13), LOCAL(14), LOCAL(15), LOCAL(16), LOCAL(17), LOCAL(18),
  // hash(v1)
  var_hash, 1, LOCAL(13), 1, LOCAL(1),
  // hash(v2)
  var_hash, 1, LOCAL(14), 1, LOCAL(2),
  // 
  var_std__bit_xor, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // hash(v3)
  var_hash, 1, LOCAL(15), 1, LOCAL(4),
  // 
  var_std__bit_xor, 2, LOCAL(3), LOCAL(4), 1, LOCAL(5),
  // hash(v4)
  var_hash, 1, LOCAL(16), 1, LOCAL(6),
  // 
  var_std__bit_xor, 2, LOCAL(5), LOCAL(6), 1, LOCAL(7),
  // hash(v5)
  var_hash, 1, LOCAL(17), 1, LOCAL(8),
  // 
  var_std__bit_xor, 2, LOCAL(7), LOCAL(8), 1, LOCAL(9),
  // hash(v6)
  var_hash, 1, LOCAL(18), 1, LOCAL(10),
  // 
  var_std__bit_xor, 2, LOCAL(9), LOCAL(10), 1, LOCAL(11),
  // ->
  LET, 1, LOCAL(11), TAIL_CALL,
  POS(286, 3),
  POS(289, 7),
  POS(290, 7),
  POS(288, 6),
  POS(291, 7),
  POS(288, 6),
  POS(292, 7),
  POS(288, 6),
  POS(293, 7),
  POS(288, 6),
  POS(294, 7),
  POS(288, 6),
  POS(287, 3)
};

static TAB_NUM t_func_builtin__tuple6___to_binop[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 296_28_self
  // .operators_of self)
  LET, -1, func_binop6, var_operators_of, LOCAL(2), LOCAL(1),
  // -> binop6(.operators_of self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(296, 45),
  POS(296, 35)
};

static TAB_NUM t_func_binop6[] = {
  27, // locals
  -3, // parameters
  MYSELF_PARAMETER, LOCAL(7), // 298_10_myself
  MANDATORY_PARAMETER, LOCAL(8), // 298_18_left
  MANDATORY_PARAMETER, LOCAL(9), // 298_23_right
  // operators_of(myself) $op1 $op2 $op3 $op4 $op5 $op6
  var_operators_of, 1, LOCAL(7), 1, LOCAL(1),
  // operators_of(myself) $op1 $op2 $op3 $op4 $op5 $op6
  LOCAL(1), 0, 6, LOCAL(10), LOCAL(11), LOCAL(12), LOCAL(13), LOCAL(14), LOCAL(15),
  // left $lv1 $lv2 $lv3 $lv4 $lv5 $lv6
  LOCAL(8), 0, 6, LOCAL(16), LOCAL(17), LOCAL(18), LOCAL(19), LOCAL(20), LOCAL(21),
  // right $rv1 $rv2 $rv3 $rv4 $rv5 $rv6
  LOCAL(9), 0, 6, LOCAL(22), LOCAL(23), LOCAL(24), LOCAL(25), LOCAL(26), LOCAL(27),
  // op1(lv1 rv1)
  LOCAL(10), 2, LOCAL(16), LOCAL(22), 1, LOCAL(1),
  // op2(lv2 rv2)
  LOCAL(11), 2, LOCAL(17), LOCAL(23), 1, LOCAL(2),
  // op3(lv3 rv3)
  LOCAL(12), 2, LOCAL(18), LOCAL(24), 1, LOCAL(3),
  // op4(lv4 rv4)
  LOCAL(13), 2, LOCAL(19), LOCAL(25), 1, LOCAL(4),
  // op5(lv5 rv5)
  LOCAL(14), 2, LOCAL(20), LOCAL(26), 1, LOCAL(5),
  // op6(lv6 rv6)
  LOCAL(15), 2, LOCAL(21), LOCAL(27), 1, LOCAL(6),
  // tuple
  var_tuple, 6, LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), TAIL_CALL,
  POS(299, 3),
  POS(299, 3),
  POS(300, 3),
  POS(301, 3),
  POS(303, 5),
  POS(304, 5),
  POS(305, 5),
  POS(306, 5),
  POS(307, 5),
  POS(308, 5),
  POS(302, 3)
};

static TAB_NUM t_func_builtin__tuple7___equal[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 312_25_left
  LOCAL(2), // 312_30_right
  // equal7 right left
  var_equal7, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(313, 3)
};

static TAB_NUM t_func_std_types__object___equal7[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(1),
  // -> false
  LET, 1, var_false, TAIL_CALL,
  POS(315, 43)
};

static TAB_NUM t_func_builtin__tuple7___equal7[] = {
  6, // locals
  2, // parameters
  LOCAL(3), // 317_26_right
  LOCAL(4), // 317_32_left
  // left $lv1 $lv2 $lv3 $lv4 $lv5 $lv6 $lv7
  LOCAL(4), 0, 7, LOCAL(5), var_318_11_lv2, var_318_16_lv3, var_318_21_lv4, var_318_26_lv5, var_318_31_lv6, var_318_36_lv7,
  // right $rv1 $rv2 $rv3 $rv4 $rv5 $rv6 $rv7
  LOCAL(3), 0, 7, LOCAL(6), var_319_12_rv2, var_319_17_rv3, var_319_22_rv4, var_319_27_rv5, var_319_32_rv6, var_319_37_rv7,
  // lv1 == rv1
  var_std__equal, 2, LOCAL(5), LOCAL(6), 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_46, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(318, 3),
  POS(319, 3),
  POS(322, 7),
  POS(321, 7),
  POS(320, 3)
};

static TAB_NUM t_lambda_46[] = {
  2, // locals
  0, // parameters
  // lv2 == rv2
  var_std__equal, 2, var_318_11_lv2, var_319_12_rv2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_47, 1, LOCAL(2),
  // lv2 == rv2
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(323, 7),
  POS(321, 7),
  POS(323, 7)
};

static TAB_NUM t_lambda_47[] = {
  2, // locals
  0, // parameters
  // lv3 == rv3
  var_std__equal, 2, var_318_16_lv3, var_319_17_rv3, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_48, 1, LOCAL(2),
  // lv3 == rv3
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(324, 7),
  POS(321, 7),
  POS(324, 7)
};

static TAB_NUM t_lambda_48[] = {
  2, // locals
  0, // parameters
  // lv4 == rv4
  var_std__equal, 2, var_318_21_lv4, var_319_22_rv4, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_49, 1, LOCAL(2),
  // lv4 == rv4
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(325, 7),
  POS(321, 7),
  POS(325, 7)
};

static TAB_NUM t_lambda_49[] = {
  2, // locals
  0, // parameters
  // lv5 == rv5
  var_std__equal, 2, var_318_26_lv5, var_319_27_rv5, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_50, 1, LOCAL(2),
  // lv5 == rv5
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(326, 7),
  POS(321, 7),
  POS(326, 7)
};

static TAB_NUM t_lambda_50[] = {
  2, // locals
  0, // parameters
  // lv6 == rv6
  var_std__equal, 2, var_318_31_lv6, var_319_32_rv6, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_51, 1, LOCAL(2),
  // lv6 == rv6
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(327, 7),
  POS(321, 7),
  POS(327, 7)
};

static TAB_NUM t_lambda_51[] = {
  1, // locals
  0, // parameters
  // lv7 == rv7
  var_std__equal, 2, var_318_36_lv7, var_319_37_rv7, 1, LOCAL(1),
  // lv7 == rv7
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(328, 7),
  POS(328, 7)
};

static TAB_NUM t_func_builtin__tuple7___less[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 330_24_left
  LOCAL(4), // 330_29_right
  // left $lv1 $lv2 $lv3 $lv4 $lv5 $lv6 $lv7
  LOCAL(3), 0, 7, var_331_6_lv1, var_331_11_lv2, var_331_16_lv3, var_331_21_lv4, var_331_26_lv5, var_331_31_lv6, var_331_36_lv7,
  // right $rv1 $rv2 $rv3 $rv4 $rv5 $rv6 $rv7
  LOCAL(4), 0, 7, var_332_7_rv1, var_332_12_rv2, var_332_17_rv3, var_332_22_rv4, var_332_27_rv5, var_332_32_rv6, var_332_37_rv7,
  // lv1 < rv1
  var_std__less, 2, var_331_6_lv1, var_332_7_rv1, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_52, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(331, 3),
  POS(332, 3),
  POS(335, 7),
  POS(334, 7),
  POS(333, 3)
};

static TAB_NUM t_lambda_52[] = {
  2, // locals
  0, // parameters
  // lv1 == rv1
  var_std__equal, 2, var_331_6_lv1, var_332_7_rv1, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_53, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(337, 9),
  POS(336, 9),
  POS(336, 9)
};

static TAB_NUM t_lambda_53[] = {
  2, // locals
  0, // parameters
  // lv2 < rv2
  var_std__less, 2, var_331_11_lv2, var_332_12_rv2, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_54, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(339, 11),
  POS(338, 11),
  POS(338, 11)
};

static TAB_NUM t_lambda_54[] = {
  2, // locals
  0, // parameters
  // lv2 == rv2
  var_std__equal, 2, var_331_11_lv2, var_332_12_rv2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_55, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(341, 13),
  POS(340, 13),
  POS(340, 13)
};

static TAB_NUM t_lambda_55[] = {
  2, // locals
  0, // parameters
  // lv3 < rv3
  var_std__less, 2, var_331_16_lv3, var_332_17_rv3, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_56, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(343, 15),
  POS(342, 15),
  POS(342, 15)
};

static TAB_NUM t_lambda_56[] = {
  2, // locals
  0, // parameters
  // lv3 == rv3
  var_std__equal, 2, var_331_16_lv3, var_332_17_rv3, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_57, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(345, 17),
  POS(344, 17),
  POS(344, 17)
};

static TAB_NUM t_lambda_57[] = {
  2, // locals
  0, // parameters
  // lv4 < rv4
  var_std__less, 2, var_331_21_lv4, var_332_22_rv4, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_58, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(347, 19),
  POS(346, 19),
  POS(346, 19)
};

static TAB_NUM t_lambda_58[] = {
  2, // locals
  0, // parameters
  // lv4 == rv4
  var_std__equal, 2, var_331_21_lv4, var_332_22_rv4, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_59, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(349, 21),
  POS(348, 21),
  POS(348, 21)
};

static TAB_NUM t_lambda_59[] = {
  2, // locals
  0, // parameters
  // lv5 < rv5
  var_std__less, 2, var_331_26_lv5, var_332_27_rv5, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_60, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(351, 23),
  POS(350, 23),
  POS(350, 23)
};

static TAB_NUM t_lambda_60[] = {
  2, // locals
  0, // parameters
  // lv5 == rv5
  var_std__equal, 2, var_331_26_lv5, var_332_27_rv5, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_61, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(353, 25),
  POS(352, 25),
  POS(352, 25)
};

static TAB_NUM t_lambda_61[] = {
  2, // locals
  0, // parameters
  // lv6 < rv6
  var_std__less, 2, var_331_31_lv6, var_332_32_rv6, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_62, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(355, 27),
  POS(354, 27),
  POS(354, 27)
};

static TAB_NUM t_lambda_62[] = {
  2, // locals
  0, // parameters
  // lv6 == rv6
  var_std__equal, 2, var_331_31_lv6, var_332_32_rv6, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_63, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(357, 29),
  POS(356, 29),
  POS(356, 29)
};

static TAB_NUM t_lambda_63[] = {
  1, // locals
  0, // parameters
  // lv7 < rv7
  var_std__less, 2, var_331_36_lv7, var_332_37_rv7, 1, LOCAL(1),
  // lv7 < rv7
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(358, 29),
  POS(358, 29)
};

static TAB_NUM t_func_builtin__tuple7___hash[] = {
  21, // locals
  1, // parameters
  LOCAL(14), // 360_24_self
  // self $v1 $v2 $v3 $v4 $v5 $v6 $v7
  LOCAL(14), 0, 7, LOCAL(15), LOCAL(16), LOCAL(17), LOCAL(18), LOCAL(19), LOCAL(20), LOCAL(21),
  // hash(v1)
  var_hash, 1, LOCAL(15), 1, LOCAL(1),
  // hash(v2)
  var_hash, 1, LOCAL(16), 1, LOCAL(2),
  // 
  var_std__bit_xor, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // hash(v3)
  var_hash, 1, LOCAL(17), 1, LOCAL(4),
  // 
  var_std__bit_xor, 2, LOCAL(3), LOCAL(4), 1, LOCAL(5),
  // hash(v4)
  var_hash, 1, LOCAL(18), 1, LOCAL(6),
  // 
  var_std__bit_xor, 2, LOCAL(5), LOCAL(6), 1, LOCAL(7),
  // hash(v5)
  var_hash, 1, LOCAL(19), 1, LOCAL(8),
  // 
  var_std__bit_xor, 2, LOCAL(7), LOCAL(8), 1, LOCAL(9),
  // hash(v6)
  var_hash, 1, LOCAL(20), 1, LOCAL(10),
  // 
  var_std__bit_xor, 2, LOCAL(9), LOCAL(10), 1, LOCAL(11),
  // hash(v7)
  var_hash, 1, LOCAL(21), 1, LOCAL(12),
  // 
  var_std__bit_xor, 2, LOCAL(11), LOCAL(12), 1, LOCAL(13),
  // ->
  LET, 1, LOCAL(13), TAIL_CALL,
  POS(361, 3),
  POS(364, 7),
  POS(365, 7),
  POS(363, 6),
  POS(366, 7),
  POS(363, 6),
  POS(367, 7),
  POS(363, 6),
  POS(368, 7),
  POS(363, 6),
  POS(369, 7),
  POS(363, 6),
  POS(370, 7),
  POS(363, 6),
  POS(362, 3)
};

static TAB_NUM t_func_builtin__tuple7___to_binop[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 372_28_self
  // .operators_of self)
  LET, -1, func_binop7, var_operators_of, LOCAL(2), LOCAL(1),
  // -> binop7(.operators_of self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(372, 45),
  POS(372, 35)
};

static TAB_NUM t_func_binop7[] = {
  31, // locals
  -3, // parameters
  MYSELF_PARAMETER, LOCAL(8), // 374_10_myself
  MANDATORY_PARAMETER, LOCAL(9), // 374_18_left
  MANDATORY_PARAMETER, LOCAL(10), // 374_23_right
  // operators_of(myself) $op1 $op2 $op3 $op4 $op5 $op6 $op7
  var_operators_of, 1, LOCAL(8), 1, LOCAL(1),
  // operators_of(myself) $op1 $op2 $op3 $op4 $op5 $op6 $op7
  LOCAL(1), 0, 7, LOCAL(11), LOCAL(12), LOCAL(13), LOCAL(14), LOCAL(15), LOCAL(16), LOCAL(17),
  // left $lv1 $lv2 $lv3 $lv4 $lv5 $lv6 $lv7
  LOCAL(9), 0, 7, LOCAL(18), LOCAL(19), LOCAL(20), LOCAL(21), LOCAL(22), LOCAL(23), LOCAL(24),
  // right $rv1 $rv2 $rv3 $rv4 $rv5 $rv6 $rv7
  LOCAL(10), 0, 7, LOCAL(25), LOCAL(26), LOCAL(27), LOCAL(28), LOCAL(29), LOCAL(30), LOCAL(31),
  // op1(lv1 rv1)
  LOCAL(11), 2, LOCAL(18), LOCAL(25), 1, LOCAL(1),
  // op2(lv2 rv2)
  LOCAL(12), 2, LOCAL(19), LOCAL(26), 1, LOCAL(2),
  // op3(lv3 rv3)
  LOCAL(13), 2, LOCAL(20), LOCAL(27), 1, LOCAL(3),
  // op4(lv4 rv4)
  LOCAL(14), 2, LOCAL(21), LOCAL(28), 1, LOCAL(4),
  // op5(lv5 rv5)
  LOCAL(15), 2, LOCAL(22), LOCAL(29), 1, LOCAL(5),
  // op6(lv6 rv6)
  LOCAL(16), 2, LOCAL(23), LOCAL(30), 1, LOCAL(6),
  // op7(lv7 rv7)
  LOCAL(17), 2, LOCAL(24), LOCAL(31), 1, LOCAL(7),
  // tuple
  var_tuple, 7, LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), LOCAL(7), TAIL_CALL,
  POS(375, 3),
  POS(375, 3),
  POS(376, 3),
  POS(377, 3),
  POS(379, 5),
  POS(380, 5),
  POS(381, 5),
  POS(382, 5),
  POS(383, 5),
  POS(384, 5),
  POS(385, 5),
  POS(378, 3)
};

static TAB_NUM t_func_builtin__tuple8___equal[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 389_25_left
  LOCAL(2), // 389_30_right
  // equal8 right left
  var_equal8, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(390, 3)
};

static TAB_NUM t_func_std_types__object___equal8[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(1),
  // -> false
  LET, 1, var_false, TAIL_CALL,
  POS(392, 43)
};

static TAB_NUM t_func_builtin__tuple8___equal8[] = {
  6, // locals
  2, // parameters
  LOCAL(3), // 394_26_right
  LOCAL(4), // 394_32_left
  // left $lv1 $lv2 $lv3 $lv4 $lv5 $lv6 $lv7 $lv8
  LOCAL(4), 0, 8, LOCAL(5), var_395_11_lv2, var_395_16_lv3, var_395_21_lv4, var_395_26_lv5, var_395_31_lv6, var_395_36_lv7, var_395_41_lv8,
  // right $rv1 $rv2 $rv3 $rv4 $rv5 $rv6 $rv7 $rv8
  LOCAL(3), 0, 8, LOCAL(6), var_396_12_rv2, var_396_17_rv3, var_396_22_rv4, var_396_27_rv5, var_396_32_rv6, var_396_37_rv7, var_396_42_rv8,
  // lv1 == rv1
  var_std__equal, 2, LOCAL(5), LOCAL(6), 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_64, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(395, 3),
  POS(396, 3),
  POS(399, 7),
  POS(398, 7),
  POS(397, 3)
};

static TAB_NUM t_lambda_64[] = {
  2, // locals
  0, // parameters
  // lv2 == rv2
  var_std__equal, 2, var_395_11_lv2, var_396_12_rv2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_65, 1, LOCAL(2),
  // lv2 == rv2
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(400, 7),
  POS(398, 7),
  POS(400, 7)
};

static TAB_NUM t_lambda_65[] = {
  2, // locals
  0, // parameters
  // lv3 == rv3
  var_std__equal, 2, var_395_16_lv3, var_396_17_rv3, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_66, 1, LOCAL(2),
  // lv3 == rv3
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(401, 7),
  POS(398, 7),
  POS(401, 7)
};

static TAB_NUM t_lambda_66[] = {
  2, // locals
  0, // parameters
  // lv4 == rv4
  var_std__equal, 2, var_395_21_lv4, var_396_22_rv4, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_67, 1, LOCAL(2),
  // lv4 == rv4
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(402, 7),
  POS(398, 7),
  POS(402, 7)
};

static TAB_NUM t_lambda_67[] = {
  2, // locals
  0, // parameters
  // lv5 == rv5
  var_std__equal, 2, var_395_26_lv5, var_396_27_rv5, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_68, 1, LOCAL(2),
  // lv5 == rv5
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(403, 7),
  POS(398, 7),
  POS(403, 7)
};

static TAB_NUM t_lambda_68[] = {
  2, // locals
  0, // parameters
  // lv6 == rv6
  var_std__equal, 2, var_395_31_lv6, var_396_32_rv6, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_69, 1, LOCAL(2),
  // lv6 == rv6
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(404, 7),
  POS(398, 7),
  POS(404, 7)
};

static TAB_NUM t_lambda_69[] = {
  2, // locals
  0, // parameters
  // lv7 == rv7
  var_std__equal, 2, var_395_36_lv7, var_396_37_rv7, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_70, 1, LOCAL(2),
  // lv7 == rv7
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(405, 7),
  POS(398, 7),
  POS(405, 7)
};

static TAB_NUM t_lambda_70[] = {
  1, // locals
  0, // parameters
  // lv8 == rv8
  var_std__equal, 2, var_395_41_lv8, var_396_42_rv8, 1, LOCAL(1),
  // lv8 == rv8
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(406, 7),
  POS(406, 7)
};

static TAB_NUM t_func_builtin__tuple8___less[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 408_24_left
  LOCAL(4), // 408_29_right
  // left $lv1 $lv2 $lv3 $lv4 $lv5 $lv6 $lv7 $lv8
  LOCAL(3), 0, 8, var_409_6_lv1, var_409_11_lv2, var_409_16_lv3, var_409_21_lv4, var_409_26_lv5, var_409_31_lv6, var_409_36_lv7, var_409_41_lv8,
  // right $rv1 $rv2 $rv3 $rv4 $rv5 $rv6 $rv7 $rv8
  LOCAL(4), 0, 8, var_410_7_rv1, var_410_12_rv2, var_410_17_rv3, var_410_22_rv4, var_410_27_rv5, var_410_32_rv6, var_410_37_rv7, var_410_42_rv8,
  // lv1 < rv1
  var_std__less, 2, var_409_6_lv1, var_410_7_rv1, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_71, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(409, 3),
  POS(410, 3),
  POS(413, 7),
  POS(412, 7),
  POS(411, 3)
};

static TAB_NUM t_lambda_71[] = {
  2, // locals
  0, // parameters
  // lv1 == rv1
  var_std__equal, 2, var_409_6_lv1, var_410_7_rv1, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_72, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(415, 9),
  POS(414, 9),
  POS(414, 9)
};

static TAB_NUM t_lambda_72[] = {
  2, // locals
  0, // parameters
  // lv2 < rv2
  var_std__less, 2, var_409_11_lv2, var_410_12_rv2, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_73, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(417, 11),
  POS(416, 11),
  POS(416, 11)
};

static TAB_NUM t_lambda_73[] = {
  2, // locals
  0, // parameters
  // lv2 == rv2
  var_std__equal, 2, var_409_11_lv2, var_410_12_rv2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_74, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(419, 13),
  POS(418, 13),
  POS(418, 13)
};

static TAB_NUM t_lambda_74[] = {
  2, // locals
  0, // parameters
  // lv3 < rv3
  var_std__less, 2, var_409_16_lv3, var_410_17_rv3, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_75, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(421, 15),
  POS(420, 15),
  POS(420, 15)
};

static TAB_NUM t_lambda_75[] = {
  2, // locals
  0, // parameters
  // lv3 == rv3
  var_std__equal, 2, var_409_16_lv3, var_410_17_rv3, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_76, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(423, 17),
  POS(422, 17),
  POS(422, 17)
};

static TAB_NUM t_lambda_76[] = {
  2, // locals
  0, // parameters
  // lv4 < rv4
  var_std__less, 2, var_409_21_lv4, var_410_22_rv4, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_77, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(425, 19),
  POS(424, 19),
  POS(424, 19)
};

static TAB_NUM t_lambda_77[] = {
  2, // locals
  0, // parameters
  // lv4 == rv4
  var_std__equal, 2, var_409_21_lv4, var_410_22_rv4, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_78, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(427, 21),
  POS(426, 21),
  POS(426, 21)
};

static TAB_NUM t_lambda_78[] = {
  2, // locals
  0, // parameters
  // lv5 < rv5
  var_std__less, 2, var_409_26_lv5, var_410_27_rv5, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_79, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(429, 23),
  POS(428, 23),
  POS(428, 23)
};

static TAB_NUM t_lambda_79[] = {
  2, // locals
  0, // parameters
  // lv5 == rv5
  var_std__equal, 2, var_409_26_lv5, var_410_27_rv5, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_80, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(431, 25),
  POS(430, 25),
  POS(430, 25)
};

static TAB_NUM t_lambda_80[] = {
  2, // locals
  0, // parameters
  // lv6 < rv6
  var_std__less, 2, var_409_31_lv6, var_410_32_rv6, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_81, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(433, 27),
  POS(432, 27),
  POS(432, 27)
};

static TAB_NUM t_lambda_81[] = {
  2, // locals
  0, // parameters
  // lv6 == rv6
  var_std__equal, 2, var_409_31_lv6, var_410_32_rv6, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_82, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(435, 29),
  POS(434, 29),
  POS(434, 29)
};

static TAB_NUM t_lambda_82[] = {
  2, // locals
  0, // parameters
  // lv7 < rv7
  var_std__less, 2, var_409_36_lv7, var_410_37_rv7, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_83, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(437, 31),
  POS(436, 31),
  POS(436, 31)
};

static TAB_NUM t_lambda_83[] = {
  2, // locals
  0, // parameters
  // lv7 == rv7
  var_std__equal, 2, var_409_36_lv7, var_410_37_rv7, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_84, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(439, 33),
  POS(438, 33),
  POS(438, 33)
};

static TAB_NUM t_lambda_84[] = {
  1, // locals
  0, // parameters
  // lv8 < rv8
  var_std__less, 2, var_409_41_lv8, var_410_42_rv8, 1, LOCAL(1),
  // lv8 < rv8
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(440, 33),
  POS(440, 33)
};

static TAB_NUM t_func_builtin__tuple8___hash[] = {
  24, // locals
  1, // parameters
  LOCAL(16), // 442_24_self
  // self $v1 $v2 $v3 $v4 $v5 $v6 $v7 $v8
  LOCAL(16), 0, 8, LOCAL(17), LOCAL(18), LOCAL(19), LOCAL(20), LOCAL(21), LOCAL(22), LOCAL(23), LOCAL(24),
  // hash(v1)
  var_hash, 1, LOCAL(17), 1, LOCAL(1),
  // hash(v2)
  var_hash, 1, LOCAL(18), 1, LOCAL(2),
  // 
  var_std__bit_xor, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // hash(v3)
  var_hash, 1, LOCAL(19), 1, LOCAL(4),
  // 
  var_std__bit_xor, 2, LOCAL(3), LOCAL(4), 1, LOCAL(5),
  // hash(v4)
  var_hash, 1, LOCAL(20), 1, LOCAL(6),
  // 
  var_std__bit_xor, 2, LOCAL(5), LOCAL(6), 1, LOCAL(7),
  // hash(v5)
  var_hash, 1, LOCAL(21), 1, LOCAL(8),
  // 
  var_std__bit_xor, 2, LOCAL(7), LOCAL(8), 1, LOCAL(9),
  // hash(v6)
  var_hash, 1, LOCAL(22), 1, LOCAL(10),
  // 
  var_std__bit_xor, 2, LOCAL(9), LOCAL(10), 1, LOCAL(11),
  // hash(v7)
  var_hash, 1, LOCAL(23), 1, LOCAL(12),
  // 
  var_std__bit_xor, 2, LOCAL(11), LOCAL(12), 1, LOCAL(13),
  // hash(v8)
  var_hash, 1, LOCAL(24), 1, LOCAL(14),
  // 
  var_std__bit_xor, 2, LOCAL(13), LOCAL(14), 1, LOCAL(15),
  // ->
  LET, 1, LOCAL(15), TAIL_CALL,
  POS(443, 3),
  POS(446, 7),
  POS(447, 7),
  POS(445, 6),
  POS(448, 7),
  POS(445, 6),
  POS(449, 7),
  POS(445, 6),
  POS(450, 7),
  POS(445, 6),
  POS(451, 7),
  POS(445, 6),
  POS(452, 7),
  POS(445, 6),
  POS(453, 7),
  POS(445, 6),
  POS(444, 3)
};

static TAB_NUM t_func_builtin__tuple8___to_binop[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 455_28_self
  // .operators_of self)
  LET, -1, func_binop8, var_operators_of, LOCAL(2), LOCAL(1),
  // -> binop8(.operators_of self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(455, 45),
  POS(455, 35)
};

static TAB_NUM t_func_binop8[] = {
  35, // locals
  -3, // parameters
  MYSELF_PARAMETER, LOCAL(9), // 457_10_myself
  MANDATORY_PARAMETER, LOCAL(10), // 457_18_left
  MANDATORY_PARAMETER, LOCAL(11), // 457_23_right
  // operators_of(myself) $op1 $op2 $op3 $op4 $op5 $op6 $op7 $op8
  var_operators_of, 1, LOCAL(9), 1, LOCAL(1),
  // operators_of(myself) $op1 $op2 $op3 $op4 $op5 $op6 $op7 $op8
  LOCAL(1), 0, 8, LOCAL(12), LOCAL(13), LOCAL(14), LOCAL(15), LOCAL(16), LOCAL(17), LOCAL(18), LOCAL(19),
  // left $lv1 $lv2 $lv3 $lv4 $lv5 $lv6 $lv7 $lv8
  LOCAL(10), 0, 8, LOCAL(20), LOCAL(21), LOCAL(22), LOCAL(23), LOCAL(24), LOCAL(25), LOCAL(26), LOCAL(27),
  // right $rv1 $rv2 $rv3 $rv4 $rv5 $rv6 $rv7 $rv8
  LOCAL(11), 0, 8, LOCAL(28), LOCAL(29), LOCAL(30), LOCAL(31), LOCAL(32), LOCAL(33), LOCAL(34), LOCAL(35),
  // op1(lv1 rv1)
  LOCAL(12), 2, LOCAL(20), LOCAL(28), 1, LOCAL(1),
  // op2(lv2 rv2)
  LOCAL(13), 2, LOCAL(21), LOCAL(29), 1, LOCAL(2),
  // op3(lv3 rv3)
  LOCAL(14), 2, LOCAL(22), LOCAL(30), 1, LOCAL(3),
  // op4(lv4 rv4)
  LOCAL(15), 2, LOCAL(23), LOCAL(31), 1, LOCAL(4),
  // op5(lv5 rv5)
  LOCAL(16), 2, LOCAL(24), LOCAL(32), 1, LOCAL(5),
  // op6(lv6 rv6)
  LOCAL(17), 2, LOCAL(25), LOCAL(33), 1, LOCAL(6),
  // op7(lv7 rv7)
  LOCAL(18), 2, LOCAL(26), LOCAL(34), 1, LOCAL(7),
  // op8(lv8 rv8)
  LOCAL(19), 2, LOCAL(27), LOCAL(35), 1, LOCAL(8),
  // tuple
  var_tuple, 8, LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), LOCAL(7), LOCAL(8), TAIL_CALL,
  POS(458, 3),
  POS(458, 3),
  POS(459, 3),
  POS(460, 3),
  POS(462, 5),
  POS(463, 5),
  POS(464, 5),
  POS(465, 5),
  POS(466, 5),
  POS(467, 5),
  POS(468, 5),
  POS(469, 5),
  POS(461, 3)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple2___equal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__object___equal2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple2___equal2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple2___less}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple2___hash}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple2___to_binop}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binop2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple3___equal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__object___equal3}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple3___equal3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple3___less}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple3___hash}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple3___to_binop}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binop3}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple4___equal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__object___equal4}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple4___equal4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple4___less}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple4___hash}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple4___to_binop}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binop4}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple5___equal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__object___equal5}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple5___equal5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple5___less}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple5___hash}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple5___to_binop}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binop5}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple6___equal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__object___equal6}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple6___equal6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple6___less}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple6___hash}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple6___to_binop}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binop6}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple7___equal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__object___equal7}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple7___equal7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple7___less}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple7___hash}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple7___to_binop}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binop7}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple8___equal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__object___equal8}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple8___equal8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple8___less}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple8___hash}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin__tuple8___to_binop}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binop8}}
};

static ATTRIBUTE_DEFINITION builtin__tuple2__attributes[] = {
  {var_equal, -func_builtin__tuple2___equal},
  {var_equal2, -func_builtin__tuple2___equal2},
  {var_less, -func_builtin__tuple2___less},
  {var_hash, -func_builtin__tuple2___hash},
  {var_to_binop, -func_builtin__tuple2___to_binop}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {var_equal2, -func_std_types__object___equal2},
  {var_equal3, -func_std_types__object___equal3},
  {var_equal4, -func_std_types__object___equal4},
  {var_equal5, -func_std_types__object___equal5},
  {var_equal6, -func_std_types__object___equal6},
  {var_equal7, -func_std_types__object___equal7},
  {var_equal8, -func_std_types__object___equal8}
};

static ATTRIBUTE_DEFINITION builtin__tuple3__attributes[] = {
  {var_equal, -func_builtin__tuple3___equal},
  {var_equal3, -func_builtin__tuple3___equal3},
  {var_less, -func_builtin__tuple3___less},
  {var_hash, -func_builtin__tuple3___hash},
  {var_to_binop, -func_builtin__tuple3___to_binop}
};

static ATTRIBUTE_DEFINITION builtin__tuple4__attributes[] = {
  {var_equal, -func_builtin__tuple4___equal},
  {var_equal4, -func_builtin__tuple4___equal4},
  {var_less, -func_builtin__tuple4___less},
  {var_hash, -func_builtin__tuple4___hash},
  {var_to_binop, -func_builtin__tuple4___to_binop}
};

static ATTRIBUTE_DEFINITION builtin__tuple5__attributes[] = {
  {var_equal, -func_builtin__tuple5___equal},
  {var_equal5, -func_builtin__tuple5___equal5},
  {var_less, -func_builtin__tuple5___less},
  {var_hash, -func_builtin__tuple5___hash},
  {var_to_binop, -func_builtin__tuple5___to_binop}
};

static ATTRIBUTE_DEFINITION builtin__tuple6__attributes[] = {
  {var_equal, -func_builtin__tuple6___equal},
  {var_equal6, -func_builtin__tuple6___equal6},
  {var_less, -func_builtin__tuple6___less},
  {var_hash, -func_builtin__tuple6___hash},
  {var_to_binop, -func_builtin__tuple6___to_binop}
};

static ATTRIBUTE_DEFINITION builtin__tuple7__attributes[] = {
  {var_equal, -func_builtin__tuple7___equal},
  {var_equal7, -func_builtin__tuple7___equal7},
  {var_less, -func_builtin__tuple7___less},
  {var_hash, -func_builtin__tuple7___hash},
  {var_to_binop, -func_builtin__tuple7___to_binop}
};

static ATTRIBUTE_DEFINITION builtin__tuple8__attributes[] = {
  {var_equal, -func_builtin__tuple8___equal},
  {var_equal8, -func_builtin__tuple8___equal8},
  {var_less, -func_builtin__tuple8___less},
  {var_hash, -func_builtin__tuple8___hash},
  {var_to_binop, -func_builtin__tuple8___to_binop}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "to_binop\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "operators_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "equal2\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 5,
    "tuple2\000builtin", builtin__tuple2__attributes
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "equal\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 7,
    "object\000std_types", std_types__object__attributes
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "38_11_lv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "39_12_rv2\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "less\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "46_6_lv1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "46_11_lv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "47_7_rv1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "47_12_rv2\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "hash\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_xor\000std", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_binop\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "equal3\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 5,
    "tuple3\000builtin", builtin__tuple3__attributes
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "80_11_lv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "80_16_lv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "81_12_rv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "81_17_rv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "89_6_lv1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "89_11_lv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "89_16_lv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "90_7_rv1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "90_12_rv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "90_17_rv3\000", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "equal4\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 5,
    "tuple4\000builtin", builtin__tuple4__attributes
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "129_11_lv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "129_16_lv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "129_21_lv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "130_12_rv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "130_17_rv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "130_22_rv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "139_6_lv1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "139_11_lv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "139_16_lv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "139_21_lv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "140_7_rv1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "140_12_rv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "140_17_rv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "140_22_rv4\000", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "equal5\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 5,
    "tuple5\000builtin", builtin__tuple5__attributes
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "185_11_lv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "185_16_lv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "185_21_lv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "185_26_lv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "186_12_rv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "186_17_rv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "186_22_rv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "186_27_rv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "196_6_lv1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "196_11_lv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "196_16_lv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "196_21_lv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "196_26_lv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "197_7_rv1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "197_12_rv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "197_17_rv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "197_22_rv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "197_27_rv5\000", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "equal6\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 5,
    "tuple6\000builtin", builtin__tuple6__attributes
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "248_11_lv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "248_16_lv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "248_21_lv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "248_26_lv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "248_31_lv6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "249_12_rv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "249_17_rv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "249_22_rv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "249_27_rv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "249_32_rv6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "260_6_lv1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "260_11_lv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "260_16_lv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "260_21_lv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "260_26_lv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "260_31_lv6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "261_7_rv1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "261_12_rv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "261_17_rv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "261_22_rv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "261_27_rv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "261_32_rv6\000", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "equal7\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 5,
    "tuple7\000builtin", builtin__tuple7__attributes
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "318_11_lv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "318_16_lv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "318_21_lv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "318_26_lv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "318_31_lv6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "318_36_lv7\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "319_12_rv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "319_17_rv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "319_22_rv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "319_27_rv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "319_32_rv6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "319_37_rv7\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "331_6_lv1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "331_11_lv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "331_16_lv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "331_21_lv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "331_26_lv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "331_31_lv6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "331_36_lv7\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "332_7_rv1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "332_12_rv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "332_17_rv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "332_22_rv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "332_27_rv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "332_32_rv6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "332_37_rv7\000", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "equal8\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 5,
    "tuple8\000builtin", builtin__tuple8__attributes
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "395_11_lv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "395_16_lv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "395_21_lv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "395_26_lv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "395_31_lv6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "395_36_lv7\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "395_41_lv8\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "396_12_rv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "396_17_rv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "396_22_rv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "396_27_rv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "396_32_rv6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "396_37_rv7\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "396_42_rv8\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "409_6_lv1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "409_11_lv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "409_16_lv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "409_21_lv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "409_26_lv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "409_31_lv6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "409_36_lv7\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "409_41_lv8\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "410_7_rv1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "410_12_rv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "410_17_rv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "410_22_rv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "410_27_rv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "410_32_rv6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "410_37_rv7\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "410_42_rv8\000", NULL
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__collections__tuples__tuple_autogen = {
  "_basic__types__collections__tuples__tuple_autogen", // module name
  "basic/types/collections/tuples/tuple_autogen.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  133, // number of constants
  155, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
