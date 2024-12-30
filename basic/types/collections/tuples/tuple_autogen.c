#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_builtin_types__tuple2___equal = -1,
  func_std_types__object___equal2 = -2,
  func_builtin_types__tuple2___equal2 = -3,
  lambda_1 = -4,
  func_builtin_types__tuple2___less = -5,
  lambda_2 = -6,
  lambda_3 = -7,
  func_builtin_types__tuple2___hash = -8,
  func_builtin_types__tuple2___to_binop = -9,
  func_binop2 = -10,
  func_builtin_types__tuple3___equal = -11,
  func_std_types__object___equal3 = -12,
  func_builtin_types__tuple3___equal3 = -13,
  lambda_4 = -14,
  lambda_5 = -15,
  func_builtin_types__tuple3___less = -16,
  lambda_6 = -17,
  lambda_7 = -18,
  lambda_8 = -19,
  lambda_9 = -20,
  func_builtin_types__tuple3___hash = -21,
  func_builtin_types__tuple3___to_binop = -22,
  func_binop3 = -23,
  func_builtin_types__tuple4___equal = -24,
  func_std_types__object___equal4 = -25,
  func_builtin_types__tuple4___equal4 = -26,
  lambda_10 = -27,
  lambda_11 = -28,
  lambda_12 = -29,
  func_builtin_types__tuple4___less = -30,
  lambda_13 = -31,
  lambda_14 = -32,
  lambda_15 = -33,
  lambda_16 = -34,
  lambda_17 = -35,
  lambda_18 = -36,
  func_builtin_types__tuple4___hash = -37,
  func_builtin_types__tuple4___to_binop = -38,
  func_binop4 = -39,
  func_builtin_types__tuple5___equal = -40,
  func_std_types__object___equal5 = -41,
  func_builtin_types__tuple5___equal5 = -42,
  lambda_19 = -43,
  lambda_20 = -44,
  lambda_21 = -45,
  lambda_22 = -46,
  func_builtin_types__tuple5___less = -47,
  lambda_23 = -48,
  lambda_24 = -49,
  lambda_25 = -50,
  lambda_26 = -51,
  lambda_27 = -52,
  lambda_28 = -53,
  lambda_29 = -54,
  lambda_30 = -55,
  func_builtin_types__tuple5___hash = -56,
  func_builtin_types__tuple5___to_binop = -57,
  func_binop5 = -58,
  func_builtin_types__tuple6___equal = -59,
  func_std_types__object___equal6 = -60,
  func_builtin_types__tuple6___equal6 = -61,
  lambda_31 = -62,
  lambda_32 = -63,
  lambda_33 = -64,
  lambda_34 = -65,
  lambda_35 = -66,
  func_builtin_types__tuple6___less = -67,
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
  func_builtin_types__tuple6___hash = -78,
  func_builtin_types__tuple6___to_binop = -79,
  func_binop6 = -80,
  func_builtin_types__tuple7___equal = -81,
  func_std_types__object___equal7 = -82,
  func_builtin_types__tuple7___equal7 = -83,
  lambda_46 = -84,
  lambda_47 = -85,
  lambda_48 = -86,
  lambda_49 = -87,
  lambda_50 = -88,
  lambda_51 = -89,
  func_builtin_types__tuple7___less = -90,
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
  func_builtin_types__tuple7___hash = -103,
  func_builtin_types__tuple7___to_binop = -104,
  func_binop7 = -105,
  func_builtin_types__tuple8___equal = -106,
  func_std_types__object___equal8 = -107,
  func_builtin_types__tuple8___equal8 = -108,
  lambda_64 = -109,
  lambda_65 = -110,
  lambda_66 = -111,
  lambda_67 = -112,
  lambda_68 = -113,
  lambda_69 = -114,
  lambda_70 = -115,
  func_builtin_types__tuple8___less = -116,
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
  func_builtin_types__tuple8___hash = -131,
  func_builtin_types__tuple8___to_binop = -132,
  func_binop8 = -133
};

enum {
  var__START = FIRST_VAR-1,
  var_std__to_binop, // attribute
  var_std__assign, // extern
  var_operators_of, // attribute
  var_equal2, // attribute
  var_builtin_types__tuple2, // extern
  var_equal, // extern polymorphic
  var_std_types__object, // extern
  var_false, // extern
  var_40_14_lv2, // dynamic
  var_41_15_rv2, // dynamic
  var_std__equal, // extern
  var_std__and, // extern
  var_less, // extern polymorphic
  var_48_9_lv1, // dynamic
  var_48_14_lv2, // dynamic
  var_49_10_rv1, // dynamic
  var_49_15_rv2, // dynamic
  var_std__less, // extern
  var_std__or, // extern
  var_hash, // extern polymorphic
  var_std__bit_xor, // extern
  var_to_binop, // extern polymorphic
  var_binop2, // initialized
  var_tuple, // extern
  var_undefined, // extern
  var_equal3, // attribute
  var_builtin_types__tuple3, // extern
  var_84_14_lv2, // dynamic
  var_84_19_lv3, // dynamic
  var_85_15_rv2, // dynamic
  var_85_20_rv3, // dynamic
  var_93_9_lv1, // dynamic
  var_93_14_lv2, // dynamic
  var_93_19_lv3, // dynamic
  var_94_10_rv1, // dynamic
  var_94_15_rv2, // dynamic
  var_94_20_rv3, // dynamic
  var_binop3, // initialized
  var_equal4, // attribute
  var_builtin_types__tuple4, // extern
  var_135_14_lv2, // dynamic
  var_135_19_lv3, // dynamic
  var_135_24_lv4, // dynamic
  var_136_15_rv2, // dynamic
  var_136_20_rv3, // dynamic
  var_136_25_rv4, // dynamic
  var_145_9_lv1, // dynamic
  var_145_14_lv2, // dynamic
  var_145_19_lv3, // dynamic
  var_145_24_lv4, // dynamic
  var_146_10_rv1, // dynamic
  var_146_15_rv2, // dynamic
  var_146_20_rv3, // dynamic
  var_146_25_rv4, // dynamic
  var_binop4, // initialized
  var_equal5, // attribute
  var_builtin_types__tuple5, // extern
  var_193_14_lv2, // dynamic
  var_193_19_lv3, // dynamic
  var_193_24_lv4, // dynamic
  var_193_29_lv5, // dynamic
  var_194_15_rv2, // dynamic
  var_194_20_rv3, // dynamic
  var_194_25_rv4, // dynamic
  var_194_30_rv5, // dynamic
  var_204_9_lv1, // dynamic
  var_204_14_lv2, // dynamic
  var_204_19_lv3, // dynamic
  var_204_24_lv4, // dynamic
  var_204_29_lv5, // dynamic
  var_205_10_rv1, // dynamic
  var_205_15_rv2, // dynamic
  var_205_20_rv3, // dynamic
  var_205_25_rv4, // dynamic
  var_205_30_rv5, // dynamic
  var_binop5, // initialized
  var_equal6, // attribute
  var_builtin_types__tuple6, // extern
  var_258_14_lv2, // dynamic
  var_258_19_lv3, // dynamic
  var_258_24_lv4, // dynamic
  var_258_29_lv5, // dynamic
  var_258_34_lv6, // dynamic
  var_259_15_rv2, // dynamic
  var_259_20_rv3, // dynamic
  var_259_25_rv4, // dynamic
  var_259_30_rv5, // dynamic
  var_259_35_rv6, // dynamic
  var_270_9_lv1, // dynamic
  var_270_14_lv2, // dynamic
  var_270_19_lv3, // dynamic
  var_270_24_lv4, // dynamic
  var_270_29_lv5, // dynamic
  var_270_34_lv6, // dynamic
  var_271_10_rv1, // dynamic
  var_271_15_rv2, // dynamic
  var_271_20_rv3, // dynamic
  var_271_25_rv4, // dynamic
  var_271_30_rv5, // dynamic
  var_271_35_rv6, // dynamic
  var_binop6, // initialized
  var_equal7, // attribute
  var_builtin_types__tuple7, // extern
  var_330_14_lv2, // dynamic
  var_330_19_lv3, // dynamic
  var_330_24_lv4, // dynamic
  var_330_29_lv5, // dynamic
  var_330_34_lv6, // dynamic
  var_330_39_lv7, // dynamic
  var_331_15_rv2, // dynamic
  var_331_20_rv3, // dynamic
  var_331_25_rv4, // dynamic
  var_331_30_rv5, // dynamic
  var_331_35_rv6, // dynamic
  var_331_40_rv7, // dynamic
  var_343_9_lv1, // dynamic
  var_343_14_lv2, // dynamic
  var_343_19_lv3, // dynamic
  var_343_24_lv4, // dynamic
  var_343_29_lv5, // dynamic
  var_343_34_lv6, // dynamic
  var_343_39_lv7, // dynamic
  var_344_10_rv1, // dynamic
  var_344_15_rv2, // dynamic
  var_344_20_rv3, // dynamic
  var_344_25_rv4, // dynamic
  var_344_30_rv5, // dynamic
  var_344_35_rv6, // dynamic
  var_344_40_rv7, // dynamic
  var_binop7, // initialized
  var_equal8, // attribute
  var_builtin_types__tuple8, // extern
  var_409_14_lv2, // dynamic
  var_409_19_lv3, // dynamic
  var_409_24_lv4, // dynamic
  var_409_29_lv5, // dynamic
  var_409_34_lv6, // dynamic
  var_409_39_lv7, // dynamic
  var_409_44_lv8, // dynamic
  var_410_15_rv2, // dynamic
  var_410_20_rv3, // dynamic
  var_410_25_rv4, // dynamic
  var_410_30_rv5, // dynamic
  var_410_35_rv6, // dynamic
  var_410_40_rv7, // dynamic
  var_410_45_rv8, // dynamic
  var_423_9_lv1, // dynamic
  var_423_14_lv2, // dynamic
  var_423_19_lv3, // dynamic
  var_423_24_lv4, // dynamic
  var_423_29_lv5, // dynamic
  var_423_34_lv6, // dynamic
  var_423_39_lv7, // dynamic
  var_423_44_lv8, // dynamic
  var_424_10_rv1, // dynamic
  var_424_15_rv2, // dynamic
  var_424_20_rv3, // dynamic
  var_424_25_rv4, // dynamic
  var_424_30_rv5, // dynamic
  var_424_35_rv6, // dynamic
  var_424_40_rv7, // dynamic
  var_424_45_rv8, // dynamic
  var_binop8, // initialized
  var__END
};


static TAB_NUM t_func_builtin_types__tuple2___equal[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 34_32_left
  LOCAL(2), // 34_37_right
  // equal2 right left
  var_equal2, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(35, 3)
};

static TAB_NUM t_func_std_types__object___equal2[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(1),
  // -> false
  LET, 1, var_false, TAIL_CALL,
  POS(37, 43)
};

static TAB_NUM t_func_builtin_types__tuple2___equal2[] = {
  6, // locals
  2, // parameters
  LOCAL(3), // 39_33_right
  LOCAL(4), // 39_39_left
  // left $lv1 $lv2
  LOCAL(4), 0, 2, LOCAL(5), var_40_14_lv2,
  // right $rv1 $rv2
  LOCAL(3), 0, 2, LOCAL(6), var_41_15_rv2,
  // lv1 == rv1
  var_std__equal, 2, LOCAL(5), LOCAL(6), 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_1, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(40, 3),
  POS(41, 3),
  POS(44, 7),
  POS(43, 7),
  POS(42, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // lv2 == rv2
  var_std__equal, 2, var_40_14_lv2, var_41_15_rv2, 1, LOCAL(1),
  // lv2 == rv2
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(45, 7),
  POS(45, 7)
};

static TAB_NUM t_func_builtin_types__tuple2___less[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 47_31_left
  LOCAL(4), // 47_36_right
  // left $lv1 $lv2
  LOCAL(3), 0, 2, var_48_9_lv1, var_48_14_lv2,
  // right $rv1 $rv2
  LOCAL(4), 0, 2, var_49_10_rv1, var_49_15_rv2,
  // lv1 < rv1
  var_std__less, 2, var_48_9_lv1, var_49_10_rv1, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_2, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(48, 3),
  POS(49, 3),
  POS(52, 7),
  POS(51, 7),
  POS(50, 3)
};

static TAB_NUM t_lambda_2[] = {
  2, // locals
  0, // parameters
  // lv1 == rv1
  var_std__equal, 2, var_48_9_lv1, var_49_10_rv1, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_3, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(54, 9),
  POS(53, 9),
  POS(53, 9)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // lv2 < rv2
  var_std__less, 2, var_48_14_lv2, var_49_15_rv2, 1, LOCAL(1),
  // lv2 < rv2
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(55, 9),
  POS(55, 9)
};

static TAB_NUM t_func_builtin_types__tuple2___hash[] = {
  6, // locals
  1, // parameters
  LOCAL(4), // 57_31_self
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
  POS(58, 3),
  POS(61, 7),
  POS(62, 7),
  POS(60, 6),
  POS(59, 3)
};

static TAB_NUM t_func_builtin_types__tuple2___to_binop[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 64_35_self
  // .operators_of self)
  LET, -1, var_binop2, var_operators_of, LOCAL(2), LOCAL(1),
  // -> binop2(.operators_of self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(64, 51),
  POS(64, 41)
};

static TAB_NUM t_func_binop2[] = {
  11, // locals
  -3, // parameters
  MYSELF_PARAMETER, LOCAL(3), // 66_11_myself
  MANDATORY_PARAMETER, LOCAL(4), // 66_19_left
  MANDATORY_PARAMETER, LOCAL(5), // 66_24_right
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
  POS(67, 3),
  POS(67, 3),
  POS(68, 3),
  POS(69, 3),
  POS(71, 5),
  POS(72, 5),
  POS(70, 3)
};

static TAB_NUM t_func_builtin_types__tuple3___equal[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 78_32_left
  LOCAL(2), // 78_37_right
  // equal3 right left
  var_equal3, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(79, 3)
};

static TAB_NUM t_func_std_types__object___equal3[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(1),
  // -> false
  LET, 1, var_false, TAIL_CALL,
  POS(81, 43)
};

static TAB_NUM t_func_builtin_types__tuple3___equal3[] = {
  6, // locals
  2, // parameters
  LOCAL(3), // 83_33_right
  LOCAL(4), // 83_39_left
  // left $lv1 $lv2 $lv3
  LOCAL(4), 0, 3, LOCAL(5), var_84_14_lv2, var_84_19_lv3,
  // right $rv1 $rv2 $rv3
  LOCAL(3), 0, 3, LOCAL(6), var_85_15_rv2, var_85_20_rv3,
  // lv1 == rv1
  var_std__equal, 2, LOCAL(5), LOCAL(6), 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_4, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(84, 3),
  POS(85, 3),
  POS(88, 7),
  POS(87, 7),
  POS(86, 3)
};

static TAB_NUM t_lambda_4[] = {
  2, // locals
  0, // parameters
  // lv2 == rv2
  var_std__equal, 2, var_84_14_lv2, var_85_15_rv2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_5, 1, LOCAL(2),
  // lv2 == rv2
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(89, 7),
  POS(87, 7),
  POS(89, 7)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // lv3 == rv3
  var_std__equal, 2, var_84_19_lv3, var_85_20_rv3, 1, LOCAL(1),
  // lv3 == rv3
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(90, 7),
  POS(90, 7)
};

static TAB_NUM t_func_builtin_types__tuple3___less[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 92_31_left
  LOCAL(4), // 92_36_right
  // left $lv1 $lv2 $lv3
  LOCAL(3), 0, 3, var_93_9_lv1, var_93_14_lv2, var_93_19_lv3,
  // right $rv1 $rv2 $rv3
  LOCAL(4), 0, 3, var_94_10_rv1, var_94_15_rv2, var_94_20_rv3,
  // lv1 < rv1
  var_std__less, 2, var_93_9_lv1, var_94_10_rv1, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_6, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(93, 3),
  POS(94, 3),
  POS(97, 7),
  POS(96, 7),
  POS(95, 3)
};

static TAB_NUM t_lambda_6[] = {
  2, // locals
  0, // parameters
  // lv1 == rv1
  var_std__equal, 2, var_93_9_lv1, var_94_10_rv1, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_7, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(99, 9),
  POS(98, 9),
  POS(98, 9)
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  0, // parameters
  // lv2 < rv2
  var_std__less, 2, var_93_14_lv2, var_94_15_rv2, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_8, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(101, 11),
  POS(100, 11),
  POS(100, 11)
};

static TAB_NUM t_lambda_8[] = {
  2, // locals
  0, // parameters
  // lv2 == rv2
  var_std__equal, 2, var_93_14_lv2, var_94_15_rv2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_9, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(103, 13),
  POS(102, 13),
  POS(102, 13)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // lv3 < rv3
  var_std__less, 2, var_93_19_lv3, var_94_20_rv3, 1, LOCAL(1),
  // lv3 < rv3
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(104, 13),
  POS(104, 13)
};

static TAB_NUM t_func_builtin_types__tuple3___hash[] = {
  9, // locals
  1, // parameters
  LOCAL(6), // 106_31_self
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
  POS(107, 3),
  POS(110, 7),
  POS(111, 7),
  POS(109, 6),
  POS(112, 7),
  POS(109, 6),
  POS(108, 3)
};

static TAB_NUM t_func_builtin_types__tuple3___to_binop[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 114_35_self
  // .operators_of self)
  LET, -1, var_binop3, var_operators_of, LOCAL(2), LOCAL(1),
  // -> binop3(.operators_of self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(114, 51),
  POS(114, 41)
};

static TAB_NUM t_func_binop3[] = {
  15, // locals
  -3, // parameters
  MYSELF_PARAMETER, LOCAL(4), // 116_11_myself
  MANDATORY_PARAMETER, LOCAL(5), // 116_19_left
  MANDATORY_PARAMETER, LOCAL(6), // 116_24_right
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
  POS(117, 3),
  POS(117, 3),
  POS(118, 3),
  POS(119, 3),
  POS(121, 5),
  POS(122, 5),
  POS(123, 5),
  POS(120, 3)
};

static TAB_NUM t_func_builtin_types__tuple4___equal[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 129_32_left
  LOCAL(2), // 129_37_right
  // equal4 right left
  var_equal4, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(130, 3)
};

static TAB_NUM t_func_std_types__object___equal4[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(1),
  // -> false
  LET, 1, var_false, TAIL_CALL,
  POS(132, 43)
};

static TAB_NUM t_func_builtin_types__tuple4___equal4[] = {
  6, // locals
  2, // parameters
  LOCAL(3), // 134_33_right
  LOCAL(4), // 134_39_left
  // left $lv1 $lv2 $lv3 $lv4
  LOCAL(4), 0, 4, LOCAL(5), var_135_14_lv2, var_135_19_lv3, var_135_24_lv4,
  // right $rv1 $rv2 $rv3 $rv4
  LOCAL(3), 0, 4, LOCAL(6), var_136_15_rv2, var_136_20_rv3, var_136_25_rv4,
  // lv1 == rv1
  var_std__equal, 2, LOCAL(5), LOCAL(6), 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_10, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(135, 3),
  POS(136, 3),
  POS(139, 7),
  POS(138, 7),
  POS(137, 3)
};

static TAB_NUM t_lambda_10[] = {
  2, // locals
  0, // parameters
  // lv2 == rv2
  var_std__equal, 2, var_135_14_lv2, var_136_15_rv2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_11, 1, LOCAL(2),
  // lv2 == rv2
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(140, 7),
  POS(138, 7),
  POS(140, 7)
};

static TAB_NUM t_lambda_11[] = {
  2, // locals
  0, // parameters
  // lv3 == rv3
  var_std__equal, 2, var_135_19_lv3, var_136_20_rv3, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_12, 1, LOCAL(2),
  // lv3 == rv3
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(141, 7),
  POS(138, 7),
  POS(141, 7)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // lv4 == rv4
  var_std__equal, 2, var_135_24_lv4, var_136_25_rv4, 1, LOCAL(1),
  // lv4 == rv4
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(142, 7),
  POS(142, 7)
};

static TAB_NUM t_func_builtin_types__tuple4___less[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 144_31_left
  LOCAL(4), // 144_36_right
  // left $lv1 $lv2 $lv3 $lv4
  LOCAL(3), 0, 4, var_145_9_lv1, var_145_14_lv2, var_145_19_lv3, var_145_24_lv4,
  // right $rv1 $rv2 $rv3 $rv4
  LOCAL(4), 0, 4, var_146_10_rv1, var_146_15_rv2, var_146_20_rv3, var_146_25_rv4,
  // lv1 < rv1
  var_std__less, 2, var_145_9_lv1, var_146_10_rv1, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_13, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(145, 3),
  POS(146, 3),
  POS(149, 7),
  POS(148, 7),
  POS(147, 3)
};

static TAB_NUM t_lambda_13[] = {
  2, // locals
  0, // parameters
  // lv1 == rv1
  var_std__equal, 2, var_145_9_lv1, var_146_10_rv1, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_14, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(151, 9),
  POS(150, 9),
  POS(150, 9)
};

static TAB_NUM t_lambda_14[] = {
  2, // locals
  0, // parameters
  // lv2 < rv2
  var_std__less, 2, var_145_14_lv2, var_146_15_rv2, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_15, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(153, 11),
  POS(152, 11),
  POS(152, 11)
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // lv2 == rv2
  var_std__equal, 2, var_145_14_lv2, var_146_15_rv2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_16, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(155, 13),
  POS(154, 13),
  POS(154, 13)
};

static TAB_NUM t_lambda_16[] = {
  2, // locals
  0, // parameters
  // lv3 < rv3
  var_std__less, 2, var_145_19_lv3, var_146_20_rv3, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_17, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(157, 15),
  POS(156, 15),
  POS(156, 15)
};

static TAB_NUM t_lambda_17[] = {
  2, // locals
  0, // parameters
  // lv3 == rv3
  var_std__equal, 2, var_145_19_lv3, var_146_20_rv3, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_18, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(159, 17),
  POS(158, 17),
  POS(158, 17)
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  0, // parameters
  // lv4 < rv4
  var_std__less, 2, var_145_24_lv4, var_146_25_rv4, 1, LOCAL(1),
  // lv4 < rv4
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(160, 17),
  POS(160, 17)
};

static TAB_NUM t_func_builtin_types__tuple4___hash[] = {
  12, // locals
  1, // parameters
  LOCAL(8), // 162_31_self
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
  POS(163, 3),
  POS(166, 7),
  POS(167, 7),
  POS(165, 6),
  POS(168, 7),
  POS(165, 6),
  POS(169, 7),
  POS(165, 6),
  POS(164, 3)
};

static TAB_NUM t_func_builtin_types__tuple4___to_binop[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 171_35_self
  // .operators_of self)
  LET, -1, var_binop4, var_operators_of, LOCAL(2), LOCAL(1),
  // -> binop4(.operators_of self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(171, 51),
  POS(171, 41)
};

static TAB_NUM t_func_binop4[] = {
  19, // locals
  -3, // parameters
  MYSELF_PARAMETER, LOCAL(5), // 173_11_myself
  MANDATORY_PARAMETER, LOCAL(6), // 173_19_left
  MANDATORY_PARAMETER, LOCAL(7), // 173_24_right
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
  POS(174, 3),
  POS(174, 3),
  POS(175, 3),
  POS(176, 3),
  POS(178, 5),
  POS(179, 5),
  POS(180, 5),
  POS(181, 5),
  POS(177, 3)
};

static TAB_NUM t_func_builtin_types__tuple5___equal[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 187_32_left
  LOCAL(2), // 187_37_right
  // equal5 right left
  var_equal5, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(188, 3)
};

static TAB_NUM t_func_std_types__object___equal5[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(1),
  // -> false
  LET, 1, var_false, TAIL_CALL,
  POS(190, 43)
};

static TAB_NUM t_func_builtin_types__tuple5___equal5[] = {
  6, // locals
  2, // parameters
  LOCAL(3), // 192_33_right
  LOCAL(4), // 192_39_left
  // left $lv1 $lv2 $lv3 $lv4 $lv5
  LOCAL(4), 0, 5, LOCAL(5), var_193_14_lv2, var_193_19_lv3, var_193_24_lv4, var_193_29_lv5,
  // right $rv1 $rv2 $rv3 $rv4 $rv5
  LOCAL(3), 0, 5, LOCAL(6), var_194_15_rv2, var_194_20_rv3, var_194_25_rv4, var_194_30_rv5,
  // lv1 == rv1
  var_std__equal, 2, LOCAL(5), LOCAL(6), 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_19, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(193, 3),
  POS(194, 3),
  POS(197, 7),
  POS(196, 7),
  POS(195, 3)
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  0, // parameters
  // lv2 == rv2
  var_std__equal, 2, var_193_14_lv2, var_194_15_rv2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_20, 1, LOCAL(2),
  // lv2 == rv2
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(198, 7),
  POS(196, 7),
  POS(198, 7)
};

static TAB_NUM t_lambda_20[] = {
  2, // locals
  0, // parameters
  // lv3 == rv3
  var_std__equal, 2, var_193_19_lv3, var_194_20_rv3, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_21, 1, LOCAL(2),
  // lv3 == rv3
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(199, 7),
  POS(196, 7),
  POS(199, 7)
};

static TAB_NUM t_lambda_21[] = {
  2, // locals
  0, // parameters
  // lv4 == rv4
  var_std__equal, 2, var_193_24_lv4, var_194_25_rv4, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_22, 1, LOCAL(2),
  // lv4 == rv4
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(200, 7),
  POS(196, 7),
  POS(200, 7)
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // lv5 == rv5
  var_std__equal, 2, var_193_29_lv5, var_194_30_rv5, 1, LOCAL(1),
  // lv5 == rv5
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(201, 7),
  POS(201, 7)
};

static TAB_NUM t_func_builtin_types__tuple5___less[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 203_31_left
  LOCAL(4), // 203_36_right
  // left $lv1 $lv2 $lv3 $lv4 $lv5
  LOCAL(3), 0, 5, var_204_9_lv1, var_204_14_lv2, var_204_19_lv3, var_204_24_lv4, var_204_29_lv5,
  // right $rv1 $rv2 $rv3 $rv4 $rv5
  LOCAL(4), 0, 5, var_205_10_rv1, var_205_15_rv2, var_205_20_rv3, var_205_25_rv4, var_205_30_rv5,
  // lv1 < rv1
  var_std__less, 2, var_204_9_lv1, var_205_10_rv1, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_23, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(204, 3),
  POS(205, 3),
  POS(208, 7),
  POS(207, 7),
  POS(206, 3)
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  0, // parameters
  // lv1 == rv1
  var_std__equal, 2, var_204_9_lv1, var_205_10_rv1, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_24, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(210, 9),
  POS(209, 9),
  POS(209, 9)
};

static TAB_NUM t_lambda_24[] = {
  2, // locals
  0, // parameters
  // lv2 < rv2
  var_std__less, 2, var_204_14_lv2, var_205_15_rv2, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_25, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(212, 11),
  POS(211, 11),
  POS(211, 11)
};

static TAB_NUM t_lambda_25[] = {
  2, // locals
  0, // parameters
  // lv2 == rv2
  var_std__equal, 2, var_204_14_lv2, var_205_15_rv2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_26, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(214, 13),
  POS(213, 13),
  POS(213, 13)
};

static TAB_NUM t_lambda_26[] = {
  2, // locals
  0, // parameters
  // lv3 < rv3
  var_std__less, 2, var_204_19_lv3, var_205_20_rv3, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_27, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(216, 15),
  POS(215, 15),
  POS(215, 15)
};

static TAB_NUM t_lambda_27[] = {
  2, // locals
  0, // parameters
  // lv3 == rv3
  var_std__equal, 2, var_204_19_lv3, var_205_20_rv3, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_28, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(218, 17),
  POS(217, 17),
  POS(217, 17)
};

static TAB_NUM t_lambda_28[] = {
  2, // locals
  0, // parameters
  // lv4 < rv4
  var_std__less, 2, var_204_24_lv4, var_205_25_rv4, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_29, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(220, 19),
  POS(219, 19),
  POS(219, 19)
};

static TAB_NUM t_lambda_29[] = {
  2, // locals
  0, // parameters
  // lv4 == rv4
  var_std__equal, 2, var_204_24_lv4, var_205_25_rv4, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_30, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(222, 21),
  POS(221, 21),
  POS(221, 21)
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  0, // parameters
  // lv5 < rv5
  var_std__less, 2, var_204_29_lv5, var_205_30_rv5, 1, LOCAL(1),
  // lv5 < rv5
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(223, 21),
  POS(223, 21)
};

static TAB_NUM t_func_builtin_types__tuple5___hash[] = {
  15, // locals
  1, // parameters
  LOCAL(10), // 225_31_self
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
  POS(226, 3),
  POS(229, 7),
  POS(230, 7),
  POS(228, 6),
  POS(231, 7),
  POS(228, 6),
  POS(232, 7),
  POS(228, 6),
  POS(233, 7),
  POS(228, 6),
  POS(227, 3)
};

static TAB_NUM t_func_builtin_types__tuple5___to_binop[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 235_35_self
  // .operators_of self)
  LET, -1, var_binop5, var_operators_of, LOCAL(2), LOCAL(1),
  // -> binop5(.operators_of self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(235, 51),
  POS(235, 41)
};

static TAB_NUM t_func_binop5[] = {
  23, // locals
  -3, // parameters
  MYSELF_PARAMETER, LOCAL(6), // 237_11_myself
  MANDATORY_PARAMETER, LOCAL(7), // 237_19_left
  MANDATORY_PARAMETER, LOCAL(8), // 237_24_right
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
  POS(238, 3),
  POS(238, 3),
  POS(239, 3),
  POS(240, 3),
  POS(242, 5),
  POS(243, 5),
  POS(244, 5),
  POS(245, 5),
  POS(246, 5),
  POS(241, 3)
};

static TAB_NUM t_func_builtin_types__tuple6___equal[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 252_32_left
  LOCAL(2), // 252_37_right
  // equal6 right left
  var_equal6, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(253, 3)
};

static TAB_NUM t_func_std_types__object___equal6[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(1),
  // -> false
  LET, 1, var_false, TAIL_CALL,
  POS(255, 43)
};

static TAB_NUM t_func_builtin_types__tuple6___equal6[] = {
  6, // locals
  2, // parameters
  LOCAL(3), // 257_33_right
  LOCAL(4), // 257_39_left
  // left $lv1 $lv2 $lv3 $lv4 $lv5 $lv6
  LOCAL(4), 0, 6, LOCAL(5), var_258_14_lv2, var_258_19_lv3, var_258_24_lv4, var_258_29_lv5, var_258_34_lv6,
  // right $rv1 $rv2 $rv3 $rv4 $rv5 $rv6
  LOCAL(3), 0, 6, LOCAL(6), var_259_15_rv2, var_259_20_rv3, var_259_25_rv4, var_259_30_rv5, var_259_35_rv6,
  // lv1 == rv1
  var_std__equal, 2, LOCAL(5), LOCAL(6), 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_31, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(258, 3),
  POS(259, 3),
  POS(262, 7),
  POS(261, 7),
  POS(260, 3)
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  0, // parameters
  // lv2 == rv2
  var_std__equal, 2, var_258_14_lv2, var_259_15_rv2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_32, 1, LOCAL(2),
  // lv2 == rv2
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(263, 7),
  POS(261, 7),
  POS(263, 7)
};

static TAB_NUM t_lambda_32[] = {
  2, // locals
  0, // parameters
  // lv3 == rv3
  var_std__equal, 2, var_258_19_lv3, var_259_20_rv3, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_33, 1, LOCAL(2),
  // lv3 == rv3
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(264, 7),
  POS(261, 7),
  POS(264, 7)
};

static TAB_NUM t_lambda_33[] = {
  2, // locals
  0, // parameters
  // lv4 == rv4
  var_std__equal, 2, var_258_24_lv4, var_259_25_rv4, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_34, 1, LOCAL(2),
  // lv4 == rv4
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(265, 7),
  POS(261, 7),
  POS(265, 7)
};

static TAB_NUM t_lambda_34[] = {
  2, // locals
  0, // parameters
  // lv5 == rv5
  var_std__equal, 2, var_258_29_lv5, var_259_30_rv5, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_35, 1, LOCAL(2),
  // lv5 == rv5
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(266, 7),
  POS(261, 7),
  POS(266, 7)
};

static TAB_NUM t_lambda_35[] = {
  1, // locals
  0, // parameters
  // lv6 == rv6
  var_std__equal, 2, var_258_34_lv6, var_259_35_rv6, 1, LOCAL(1),
  // lv6 == rv6
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(267, 7),
  POS(267, 7)
};

static TAB_NUM t_func_builtin_types__tuple6___less[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 269_31_left
  LOCAL(4), // 269_36_right
  // left $lv1 $lv2 $lv3 $lv4 $lv5 $lv6
  LOCAL(3), 0, 6, var_270_9_lv1, var_270_14_lv2, var_270_19_lv3, var_270_24_lv4, var_270_29_lv5, var_270_34_lv6,
  // right $rv1 $rv2 $rv3 $rv4 $rv5 $rv6
  LOCAL(4), 0, 6, var_271_10_rv1, var_271_15_rv2, var_271_20_rv3, var_271_25_rv4, var_271_30_rv5, var_271_35_rv6,
  // lv1 < rv1
  var_std__less, 2, var_270_9_lv1, var_271_10_rv1, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_36, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(270, 3),
  POS(271, 3),
  POS(274, 7),
  POS(273, 7),
  POS(272, 3)
};

static TAB_NUM t_lambda_36[] = {
  2, // locals
  0, // parameters
  // lv1 == rv1
  var_std__equal, 2, var_270_9_lv1, var_271_10_rv1, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_37, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(276, 9),
  POS(275, 9),
  POS(275, 9)
};

static TAB_NUM t_lambda_37[] = {
  2, // locals
  0, // parameters
  // lv2 < rv2
  var_std__less, 2, var_270_14_lv2, var_271_15_rv2, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_38, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(278, 11),
  POS(277, 11),
  POS(277, 11)
};

static TAB_NUM t_lambda_38[] = {
  2, // locals
  0, // parameters
  // lv2 == rv2
  var_std__equal, 2, var_270_14_lv2, var_271_15_rv2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_39, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(280, 13),
  POS(279, 13),
  POS(279, 13)
};

static TAB_NUM t_lambda_39[] = {
  2, // locals
  0, // parameters
  // lv3 < rv3
  var_std__less, 2, var_270_19_lv3, var_271_20_rv3, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_40, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(282, 15),
  POS(281, 15),
  POS(281, 15)
};

static TAB_NUM t_lambda_40[] = {
  2, // locals
  0, // parameters
  // lv3 == rv3
  var_std__equal, 2, var_270_19_lv3, var_271_20_rv3, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_41, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(284, 17),
  POS(283, 17),
  POS(283, 17)
};

static TAB_NUM t_lambda_41[] = {
  2, // locals
  0, // parameters
  // lv4 < rv4
  var_std__less, 2, var_270_24_lv4, var_271_25_rv4, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_42, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(286, 19),
  POS(285, 19),
  POS(285, 19)
};

static TAB_NUM t_lambda_42[] = {
  2, // locals
  0, // parameters
  // lv4 == rv4
  var_std__equal, 2, var_270_24_lv4, var_271_25_rv4, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_43, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(288, 21),
  POS(287, 21),
  POS(287, 21)
};

static TAB_NUM t_lambda_43[] = {
  2, // locals
  0, // parameters
  // lv5 < rv5
  var_std__less, 2, var_270_29_lv5, var_271_30_rv5, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_44, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(290, 23),
  POS(289, 23),
  POS(289, 23)
};

static TAB_NUM t_lambda_44[] = {
  2, // locals
  0, // parameters
  // lv5 == rv5
  var_std__equal, 2, var_270_29_lv5, var_271_30_rv5, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_45, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(292, 25),
  POS(291, 25),
  POS(291, 25)
};

static TAB_NUM t_lambda_45[] = {
  1, // locals
  0, // parameters
  // lv6 < rv6
  var_std__less, 2, var_270_34_lv6, var_271_35_rv6, 1, LOCAL(1),
  // lv6 < rv6
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(293, 25),
  POS(293, 25)
};

static TAB_NUM t_func_builtin_types__tuple6___hash[] = {
  18, // locals
  1, // parameters
  LOCAL(12), // 295_31_self
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
  POS(296, 3),
  POS(299, 7),
  POS(300, 7),
  POS(298, 6),
  POS(301, 7),
  POS(298, 6),
  POS(302, 7),
  POS(298, 6),
  POS(303, 7),
  POS(298, 6),
  POS(304, 7),
  POS(298, 6),
  POS(297, 3)
};

static TAB_NUM t_func_builtin_types__tuple6___to_binop[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 306_35_self
  // .operators_of self)
  LET, -1, var_binop6, var_operators_of, LOCAL(2), LOCAL(1),
  // -> binop6(.operators_of self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(306, 51),
  POS(306, 41)
};

static TAB_NUM t_func_binop6[] = {
  27, // locals
  -3, // parameters
  MYSELF_PARAMETER, LOCAL(7), // 308_11_myself
  MANDATORY_PARAMETER, LOCAL(8), // 308_19_left
  MANDATORY_PARAMETER, LOCAL(9), // 308_24_right
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
  POS(309, 3),
  POS(309, 3),
  POS(310, 3),
  POS(311, 3),
  POS(313, 5),
  POS(314, 5),
  POS(315, 5),
  POS(316, 5),
  POS(317, 5),
  POS(318, 5),
  POS(312, 3)
};

static TAB_NUM t_func_builtin_types__tuple7___equal[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 324_32_left
  LOCAL(2), // 324_37_right
  // equal7 right left
  var_equal7, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(325, 3)
};

static TAB_NUM t_func_std_types__object___equal7[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(1),
  // -> false
  LET, 1, var_false, TAIL_CALL,
  POS(327, 43)
};

static TAB_NUM t_func_builtin_types__tuple7___equal7[] = {
  6, // locals
  2, // parameters
  LOCAL(3), // 329_33_right
  LOCAL(4), // 329_39_left
  // left $lv1 $lv2 $lv3 $lv4 $lv5 $lv6 $lv7
  LOCAL(4), 0, 7, LOCAL(5), var_330_14_lv2, var_330_19_lv3, var_330_24_lv4, var_330_29_lv5, var_330_34_lv6, var_330_39_lv7,
  // right $rv1 $rv2 $rv3 $rv4 $rv5 $rv6 $rv7
  LOCAL(3), 0, 7, LOCAL(6), var_331_15_rv2, var_331_20_rv3, var_331_25_rv4, var_331_30_rv5, var_331_35_rv6, var_331_40_rv7,
  // lv1 == rv1
  var_std__equal, 2, LOCAL(5), LOCAL(6), 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_46, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(330, 3),
  POS(331, 3),
  POS(334, 7),
  POS(333, 7),
  POS(332, 3)
};

static TAB_NUM t_lambda_46[] = {
  2, // locals
  0, // parameters
  // lv2 == rv2
  var_std__equal, 2, var_330_14_lv2, var_331_15_rv2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_47, 1, LOCAL(2),
  // lv2 == rv2
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(335, 7),
  POS(333, 7),
  POS(335, 7)
};

static TAB_NUM t_lambda_47[] = {
  2, // locals
  0, // parameters
  // lv3 == rv3
  var_std__equal, 2, var_330_19_lv3, var_331_20_rv3, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_48, 1, LOCAL(2),
  // lv3 == rv3
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(336, 7),
  POS(333, 7),
  POS(336, 7)
};

static TAB_NUM t_lambda_48[] = {
  2, // locals
  0, // parameters
  // lv4 == rv4
  var_std__equal, 2, var_330_24_lv4, var_331_25_rv4, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_49, 1, LOCAL(2),
  // lv4 == rv4
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(337, 7),
  POS(333, 7),
  POS(337, 7)
};

static TAB_NUM t_lambda_49[] = {
  2, // locals
  0, // parameters
  // lv5 == rv5
  var_std__equal, 2, var_330_29_lv5, var_331_30_rv5, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_50, 1, LOCAL(2),
  // lv5 == rv5
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(338, 7),
  POS(333, 7),
  POS(338, 7)
};

static TAB_NUM t_lambda_50[] = {
  2, // locals
  0, // parameters
  // lv6 == rv6
  var_std__equal, 2, var_330_34_lv6, var_331_35_rv6, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_51, 1, LOCAL(2),
  // lv6 == rv6
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(339, 7),
  POS(333, 7),
  POS(339, 7)
};

static TAB_NUM t_lambda_51[] = {
  1, // locals
  0, // parameters
  // lv7 == rv7
  var_std__equal, 2, var_330_39_lv7, var_331_40_rv7, 1, LOCAL(1),
  // lv7 == rv7
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(340, 7),
  POS(340, 7)
};

static TAB_NUM t_func_builtin_types__tuple7___less[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 342_31_left
  LOCAL(4), // 342_36_right
  // left $lv1 $lv2 $lv3 $lv4 $lv5 $lv6 $lv7
  LOCAL(3), 0, 7, var_343_9_lv1, var_343_14_lv2, var_343_19_lv3, var_343_24_lv4, var_343_29_lv5, var_343_34_lv6, var_343_39_lv7,
  // right $rv1 $rv2 $rv3 $rv4 $rv5 $rv6 $rv7
  LOCAL(4), 0, 7, var_344_10_rv1, var_344_15_rv2, var_344_20_rv3, var_344_25_rv4, var_344_30_rv5, var_344_35_rv6, var_344_40_rv7,
  // lv1 < rv1
  var_std__less, 2, var_343_9_lv1, var_344_10_rv1, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_52, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(343, 3),
  POS(344, 3),
  POS(347, 7),
  POS(346, 7),
  POS(345, 3)
};

static TAB_NUM t_lambda_52[] = {
  2, // locals
  0, // parameters
  // lv1 == rv1
  var_std__equal, 2, var_343_9_lv1, var_344_10_rv1, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_53, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(349, 9),
  POS(348, 9),
  POS(348, 9)
};

static TAB_NUM t_lambda_53[] = {
  2, // locals
  0, // parameters
  // lv2 < rv2
  var_std__less, 2, var_343_14_lv2, var_344_15_rv2, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_54, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(351, 11),
  POS(350, 11),
  POS(350, 11)
};

static TAB_NUM t_lambda_54[] = {
  2, // locals
  0, // parameters
  // lv2 == rv2
  var_std__equal, 2, var_343_14_lv2, var_344_15_rv2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_55, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(353, 13),
  POS(352, 13),
  POS(352, 13)
};

static TAB_NUM t_lambda_55[] = {
  2, // locals
  0, // parameters
  // lv3 < rv3
  var_std__less, 2, var_343_19_lv3, var_344_20_rv3, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_56, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(355, 15),
  POS(354, 15),
  POS(354, 15)
};

static TAB_NUM t_lambda_56[] = {
  2, // locals
  0, // parameters
  // lv3 == rv3
  var_std__equal, 2, var_343_19_lv3, var_344_20_rv3, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_57, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(357, 17),
  POS(356, 17),
  POS(356, 17)
};

static TAB_NUM t_lambda_57[] = {
  2, // locals
  0, // parameters
  // lv4 < rv4
  var_std__less, 2, var_343_24_lv4, var_344_25_rv4, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_58, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(359, 19),
  POS(358, 19),
  POS(358, 19)
};

static TAB_NUM t_lambda_58[] = {
  2, // locals
  0, // parameters
  // lv4 == rv4
  var_std__equal, 2, var_343_24_lv4, var_344_25_rv4, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_59, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(361, 21),
  POS(360, 21),
  POS(360, 21)
};

static TAB_NUM t_lambda_59[] = {
  2, // locals
  0, // parameters
  // lv5 < rv5
  var_std__less, 2, var_343_29_lv5, var_344_30_rv5, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_60, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(363, 23),
  POS(362, 23),
  POS(362, 23)
};

static TAB_NUM t_lambda_60[] = {
  2, // locals
  0, // parameters
  // lv5 == rv5
  var_std__equal, 2, var_343_29_lv5, var_344_30_rv5, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_61, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(365, 25),
  POS(364, 25),
  POS(364, 25)
};

static TAB_NUM t_lambda_61[] = {
  2, // locals
  0, // parameters
  // lv6 < rv6
  var_std__less, 2, var_343_34_lv6, var_344_35_rv6, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_62, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(367, 27),
  POS(366, 27),
  POS(366, 27)
};

static TAB_NUM t_lambda_62[] = {
  2, // locals
  0, // parameters
  // lv6 == rv6
  var_std__equal, 2, var_343_34_lv6, var_344_35_rv6, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_63, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(369, 29),
  POS(368, 29),
  POS(368, 29)
};

static TAB_NUM t_lambda_63[] = {
  1, // locals
  0, // parameters
  // lv7 < rv7
  var_std__less, 2, var_343_39_lv7, var_344_40_rv7, 1, LOCAL(1),
  // lv7 < rv7
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(370, 29),
  POS(370, 29)
};

static TAB_NUM t_func_builtin_types__tuple7___hash[] = {
  21, // locals
  1, // parameters
  LOCAL(14), // 372_31_self
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
  POS(373, 3),
  POS(376, 7),
  POS(377, 7),
  POS(375, 6),
  POS(378, 7),
  POS(375, 6),
  POS(379, 7),
  POS(375, 6),
  POS(380, 7),
  POS(375, 6),
  POS(381, 7),
  POS(375, 6),
  POS(382, 7),
  POS(375, 6),
  POS(374, 3)
};

static TAB_NUM t_func_builtin_types__tuple7___to_binop[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 384_35_self
  // .operators_of self)
  LET, -1, var_binop7, var_operators_of, LOCAL(2), LOCAL(1),
  // -> binop7(.operators_of self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(384, 51),
  POS(384, 41)
};

static TAB_NUM t_func_binop7[] = {
  31, // locals
  -3, // parameters
  MYSELF_PARAMETER, LOCAL(8), // 386_11_myself
  MANDATORY_PARAMETER, LOCAL(9), // 386_19_left
  MANDATORY_PARAMETER, LOCAL(10), // 386_24_right
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
  POS(387, 3),
  POS(387, 3),
  POS(388, 3),
  POS(389, 3),
  POS(391, 5),
  POS(392, 5),
  POS(393, 5),
  POS(394, 5),
  POS(395, 5),
  POS(396, 5),
  POS(397, 5),
  POS(390, 3)
};

static TAB_NUM t_func_builtin_types__tuple8___equal[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 403_32_left
  LOCAL(2), // 403_37_right
  // equal8 right left
  var_equal8, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(404, 3)
};

static TAB_NUM t_func_std_types__object___equal8[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(1),
  // -> false
  LET, 1, var_false, TAIL_CALL,
  POS(406, 43)
};

static TAB_NUM t_func_builtin_types__tuple8___equal8[] = {
  6, // locals
  2, // parameters
  LOCAL(3), // 408_33_right
  LOCAL(4), // 408_39_left
  // left $lv1 $lv2 $lv3 $lv4 $lv5 $lv6 $lv7 $lv8
  LOCAL(4), 0, 8, LOCAL(5), var_409_14_lv2, var_409_19_lv3, var_409_24_lv4, var_409_29_lv5, var_409_34_lv6, var_409_39_lv7, var_409_44_lv8,
  // right $rv1 $rv2 $rv3 $rv4 $rv5 $rv6 $rv7 $rv8
  LOCAL(3), 0, 8, LOCAL(6), var_410_15_rv2, var_410_20_rv3, var_410_25_rv4, var_410_30_rv5, var_410_35_rv6, var_410_40_rv7, var_410_45_rv8,
  // lv1 == rv1
  var_std__equal, 2, LOCAL(5), LOCAL(6), 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_64, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(409, 3),
  POS(410, 3),
  POS(413, 7),
  POS(412, 7),
  POS(411, 3)
};

static TAB_NUM t_lambda_64[] = {
  2, // locals
  0, // parameters
  // lv2 == rv2
  var_std__equal, 2, var_409_14_lv2, var_410_15_rv2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_65, 1, LOCAL(2),
  // lv2 == rv2
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(414, 7),
  POS(412, 7),
  POS(414, 7)
};

static TAB_NUM t_lambda_65[] = {
  2, // locals
  0, // parameters
  // lv3 == rv3
  var_std__equal, 2, var_409_19_lv3, var_410_20_rv3, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_66, 1, LOCAL(2),
  // lv3 == rv3
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(415, 7),
  POS(412, 7),
  POS(415, 7)
};

static TAB_NUM t_lambda_66[] = {
  2, // locals
  0, // parameters
  // lv4 == rv4
  var_std__equal, 2, var_409_24_lv4, var_410_25_rv4, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_67, 1, LOCAL(2),
  // lv4 == rv4
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(416, 7),
  POS(412, 7),
  POS(416, 7)
};

static TAB_NUM t_lambda_67[] = {
  2, // locals
  0, // parameters
  // lv5 == rv5
  var_std__equal, 2, var_409_29_lv5, var_410_30_rv5, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_68, 1, LOCAL(2),
  // lv5 == rv5
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(417, 7),
  POS(412, 7),
  POS(417, 7)
};

static TAB_NUM t_lambda_68[] = {
  2, // locals
  0, // parameters
  // lv6 == rv6
  var_std__equal, 2, var_409_34_lv6, var_410_35_rv6, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_69, 1, LOCAL(2),
  // lv6 == rv6
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(418, 7),
  POS(412, 7),
  POS(418, 7)
};

static TAB_NUM t_lambda_69[] = {
  2, // locals
  0, // parameters
  // lv7 == rv7
  var_std__equal, 2, var_409_39_lv7, var_410_40_rv7, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_70, 1, LOCAL(2),
  // lv7 == rv7
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(419, 7),
  POS(412, 7),
  POS(419, 7)
};

static TAB_NUM t_lambda_70[] = {
  1, // locals
  0, // parameters
  // lv8 == rv8
  var_std__equal, 2, var_409_44_lv8, var_410_45_rv8, 1, LOCAL(1),
  // lv8 == rv8
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(420, 7),
  POS(420, 7)
};

static TAB_NUM t_func_builtin_types__tuple8___less[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 422_31_left
  LOCAL(4), // 422_36_right
  // left $lv1 $lv2 $lv3 $lv4 $lv5 $lv6 $lv7 $lv8
  LOCAL(3), 0, 8, var_423_9_lv1, var_423_14_lv2, var_423_19_lv3, var_423_24_lv4, var_423_29_lv5, var_423_34_lv6, var_423_39_lv7, var_423_44_lv8,
  // right $rv1 $rv2 $rv3 $rv4 $rv5 $rv6 $rv7 $rv8
  LOCAL(4), 0, 8, var_424_10_rv1, var_424_15_rv2, var_424_20_rv3, var_424_25_rv4, var_424_30_rv5, var_424_35_rv6, var_424_40_rv7, var_424_45_rv8,
  // lv1 < rv1
  var_std__less, 2, var_423_9_lv1, var_424_10_rv1, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_71, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(423, 3),
  POS(424, 3),
  POS(427, 7),
  POS(426, 7),
  POS(425, 3)
};

static TAB_NUM t_lambda_71[] = {
  2, // locals
  0, // parameters
  // lv1 == rv1
  var_std__equal, 2, var_423_9_lv1, var_424_10_rv1, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_72, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(429, 9),
  POS(428, 9),
  POS(428, 9)
};

static TAB_NUM t_lambda_72[] = {
  2, // locals
  0, // parameters
  // lv2 < rv2
  var_std__less, 2, var_423_14_lv2, var_424_15_rv2, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_73, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(431, 11),
  POS(430, 11),
  POS(430, 11)
};

static TAB_NUM t_lambda_73[] = {
  2, // locals
  0, // parameters
  // lv2 == rv2
  var_std__equal, 2, var_423_14_lv2, var_424_15_rv2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_74, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(433, 13),
  POS(432, 13),
  POS(432, 13)
};

static TAB_NUM t_lambda_74[] = {
  2, // locals
  0, // parameters
  // lv3 < rv3
  var_std__less, 2, var_423_19_lv3, var_424_20_rv3, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_75, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(435, 15),
  POS(434, 15),
  POS(434, 15)
};

static TAB_NUM t_lambda_75[] = {
  2, // locals
  0, // parameters
  // lv3 == rv3
  var_std__equal, 2, var_423_19_lv3, var_424_20_rv3, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_76, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(437, 17),
  POS(436, 17),
  POS(436, 17)
};

static TAB_NUM t_lambda_76[] = {
  2, // locals
  0, // parameters
  // lv4 < rv4
  var_std__less, 2, var_423_24_lv4, var_424_25_rv4, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_77, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(439, 19),
  POS(438, 19),
  POS(438, 19)
};

static TAB_NUM t_lambda_77[] = {
  2, // locals
  0, // parameters
  // lv4 == rv4
  var_std__equal, 2, var_423_24_lv4, var_424_25_rv4, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_78, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(441, 21),
  POS(440, 21),
  POS(440, 21)
};

static TAB_NUM t_lambda_78[] = {
  2, // locals
  0, // parameters
  // lv5 < rv5
  var_std__less, 2, var_423_29_lv5, var_424_30_rv5, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_79, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(443, 23),
  POS(442, 23),
  POS(442, 23)
};

static TAB_NUM t_lambda_79[] = {
  2, // locals
  0, // parameters
  // lv5 == rv5
  var_std__equal, 2, var_423_29_lv5, var_424_30_rv5, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_80, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(445, 25),
  POS(444, 25),
  POS(444, 25)
};

static TAB_NUM t_lambda_80[] = {
  2, // locals
  0, // parameters
  // lv6 < rv6
  var_std__less, 2, var_423_34_lv6, var_424_35_rv6, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_81, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(447, 27),
  POS(446, 27),
  POS(446, 27)
};

static TAB_NUM t_lambda_81[] = {
  2, // locals
  0, // parameters
  // lv6 == rv6
  var_std__equal, 2, var_423_34_lv6, var_424_35_rv6, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_82, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(449, 29),
  POS(448, 29),
  POS(448, 29)
};

static TAB_NUM t_lambda_82[] = {
  2, // locals
  0, // parameters
  // lv7 < rv7
  var_std__less, 2, var_423_39_lv7, var_424_40_rv7, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_83, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(451, 31),
  POS(450, 31),
  POS(450, 31)
};

static TAB_NUM t_lambda_83[] = {
  2, // locals
  0, // parameters
  // lv7 == rv7
  var_std__equal, 2, var_423_39_lv7, var_424_40_rv7, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_84, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(453, 33),
  POS(452, 33),
  POS(452, 33)
};

static TAB_NUM t_lambda_84[] = {
  1, // locals
  0, // parameters
  // lv8 < rv8
  var_std__less, 2, var_423_44_lv8, var_424_45_rv8, 1, LOCAL(1),
  // lv8 < rv8
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(454, 33),
  POS(454, 33)
};

static TAB_NUM t_func_builtin_types__tuple8___hash[] = {
  24, // locals
  1, // parameters
  LOCAL(16), // 456_31_self
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
  POS(457, 3),
  POS(460, 7),
  POS(461, 7),
  POS(459, 6),
  POS(462, 7),
  POS(459, 6),
  POS(463, 7),
  POS(459, 6),
  POS(464, 7),
  POS(459, 6),
  POS(465, 7),
  POS(459, 6),
  POS(466, 7),
  POS(459, 6),
  POS(467, 7),
  POS(459, 6),
  POS(458, 3)
};

static TAB_NUM t_func_builtin_types__tuple8___to_binop[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 469_35_self
  // .operators_of self)
  LET, -1, var_binop8, var_operators_of, LOCAL(2), LOCAL(1),
  // -> binop8(.operators_of self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(469, 51),
  POS(469, 41)
};

static TAB_NUM t_func_binop8[] = {
  35, // locals
  -3, // parameters
  MYSELF_PARAMETER, LOCAL(9), // 471_11_myself
  MANDATORY_PARAMETER, LOCAL(10), // 471_19_left
  MANDATORY_PARAMETER, LOCAL(11), // 471_24_right
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
  POS(472, 3),
  POS(472, 3),
  POS(473, 3),
  POS(474, 3),
  POS(476, 5),
  POS(477, 5),
  POS(478, 5),
  POS(479, 5),
  POS(480, 5),
  POS(481, 5),
  POS(482, 5),
  POS(483, 5),
  POS(475, 3)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple2___equal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__object___equal2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple2___equal2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple2___less}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple2___hash}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple2___to_binop}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binop2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple3___equal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__object___equal3}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple3___equal3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple3___less}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple3___hash}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple3___to_binop}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binop3}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple4___equal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__object___equal4}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple4___equal4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple4___less}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple4___hash}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple4___to_binop}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binop4}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple5___equal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__object___equal5}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple5___equal5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple5___less}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple5___hash}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple5___to_binop}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binop5}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple6___equal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__object___equal6}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple6___equal6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple6___less}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple6___hash}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple6___to_binop}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binop6}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple7___equal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__object___equal7}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple7___equal7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple7___less}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple7___hash}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple7___to_binop}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binop7}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple8___equal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__object___equal8}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple8___equal8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple8___less}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple8___hash}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_builtin_types__tuple8___to_binop}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binop8}}
};

static ATTRIBUTE_DEFINITION builtin_types__tuple2__attributes[] = {
  {var_equal, -func_builtin_types__tuple2___equal},
  {var_equal2, -func_builtin_types__tuple2___equal2},
  {var_less, -func_builtin_types__tuple2___less},
  {var_hash, -func_builtin_types__tuple2___hash},
  {var_to_binop, -func_builtin_types__tuple2___to_binop}
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

static ATTRIBUTE_DEFINITION binop2__attributes[] = {
  {-var_operators_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION builtin_types__tuple3__attributes[] = {
  {var_equal, -func_builtin_types__tuple3___equal},
  {var_equal3, -func_builtin_types__tuple3___equal3},
  {var_less, -func_builtin_types__tuple3___less},
  {var_hash, -func_builtin_types__tuple3___hash},
  {var_to_binop, -func_builtin_types__tuple3___to_binop}
};

static ATTRIBUTE_DEFINITION binop3__attributes[] = {
  {-var_operators_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION builtin_types__tuple4__attributes[] = {
  {var_equal, -func_builtin_types__tuple4___equal},
  {var_equal4, -func_builtin_types__tuple4___equal4},
  {var_less, -func_builtin_types__tuple4___less},
  {var_hash, -func_builtin_types__tuple4___hash},
  {var_to_binop, -func_builtin_types__tuple4___to_binop}
};

static ATTRIBUTE_DEFINITION binop4__attributes[] = {
  {-var_operators_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION builtin_types__tuple5__attributes[] = {
  {var_equal, -func_builtin_types__tuple5___equal},
  {var_equal5, -func_builtin_types__tuple5___equal5},
  {var_less, -func_builtin_types__tuple5___less},
  {var_hash, -func_builtin_types__tuple5___hash},
  {var_to_binop, -func_builtin_types__tuple5___to_binop}
};

static ATTRIBUTE_DEFINITION binop5__attributes[] = {
  {-var_operators_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION builtin_types__tuple6__attributes[] = {
  {var_equal, -func_builtin_types__tuple6___equal},
  {var_equal6, -func_builtin_types__tuple6___equal6},
  {var_less, -func_builtin_types__tuple6___less},
  {var_hash, -func_builtin_types__tuple6___hash},
  {var_to_binop, -func_builtin_types__tuple6___to_binop}
};

static ATTRIBUTE_DEFINITION binop6__attributes[] = {
  {-var_operators_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION builtin_types__tuple7__attributes[] = {
  {var_equal, -func_builtin_types__tuple7___equal},
  {var_equal7, -func_builtin_types__tuple7___equal7},
  {var_less, -func_builtin_types__tuple7___less},
  {var_hash, -func_builtin_types__tuple7___hash},
  {var_to_binop, -func_builtin_types__tuple7___to_binop}
};

static ATTRIBUTE_DEFINITION binop7__attributes[] = {
  {-var_operators_of, -var_undefined}
};

static ATTRIBUTE_DEFINITION builtin_types__tuple8__attributes[] = {
  {var_equal, -func_builtin_types__tuple8___equal},
  {var_equal8, -func_builtin_types__tuple8___equal8},
  {var_less, -func_builtin_types__tuple8___less},
  {var_hash, -func_builtin_types__tuple8___hash},
  {var_to_binop, -func_builtin_types__tuple8___to_binop}
};

static ATTRIBUTE_DEFINITION binop8__attributes[] = {
  {-var_operators_of, -var_undefined}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "to_binop\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(28, 1)}
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
    "tuple2\000builtin_types", builtin_types__tuple2__attributes,
    {.position = POS(34, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "equal\000", NULL,
    {.position = POS(34, 24)}
  },
  {
    FOT_UNKNOWN, 0, 7,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(37, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(37, 46)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "40_14_lv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "41_15_rv2\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(44, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(43, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "less\000", NULL,
    {.position = POS(47, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "48_9_lv1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "48_14_lv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "49_10_rv1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "49_15_rv2\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(52, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(51, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "hash\000", NULL,
    {.position = POS(57, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_xor\000std", NULL,
    {.position = POS(60, 6)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_binop\000", NULL,
    {.position = POS(64, 24)}
  },
  {
    FOT_INITIALIZED, 0, 1,
    "binop2\000", binop2__attributes,
    {.const_idx = -func_binop2}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(70, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(74, 22)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "equal3\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 5,
    "tuple3\000builtin_types", builtin_types__tuple3__attributes,
    {.position = POS(78, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "84_14_lv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "84_19_lv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "85_15_rv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "85_20_rv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "93_9_lv1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "93_14_lv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "93_19_lv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "94_10_rv1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "94_15_rv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "94_20_rv3\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 1,
    "binop3\000", binop3__attributes,
    {.const_idx = -func_binop3}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "equal4\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 5,
    "tuple4\000builtin_types", builtin_types__tuple4__attributes,
    {.position = POS(129, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "135_14_lv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "135_19_lv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "135_24_lv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "136_15_rv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "136_20_rv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "136_25_rv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "145_9_lv1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "145_14_lv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "145_19_lv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "145_24_lv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "146_10_rv1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "146_15_rv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "146_20_rv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "146_25_rv4\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 1,
    "binop4\000", binop4__attributes,
    {.const_idx = -func_binop4}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "equal5\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 5,
    "tuple5\000builtin_types", builtin_types__tuple5__attributes,
    {.position = POS(187, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "193_14_lv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "193_19_lv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "193_24_lv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "193_29_lv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "194_15_rv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "194_20_rv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "194_25_rv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "194_30_rv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "204_9_lv1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "204_14_lv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "204_19_lv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "204_24_lv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "204_29_lv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "205_10_rv1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "205_15_rv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "205_20_rv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "205_25_rv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "205_30_rv5\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 1,
    "binop5\000", binop5__attributes,
    {.const_idx = -func_binop5}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "equal6\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 5,
    "tuple6\000builtin_types", builtin_types__tuple6__attributes,
    {.position = POS(252, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "258_14_lv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "258_19_lv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "258_24_lv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "258_29_lv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "258_34_lv6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "259_15_rv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "259_20_rv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "259_25_rv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "259_30_rv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "259_35_rv6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "270_9_lv1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "270_14_lv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "270_19_lv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "270_24_lv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "270_29_lv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "270_34_lv6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "271_10_rv1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "271_15_rv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "271_20_rv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "271_25_rv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "271_30_rv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "271_35_rv6\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 1,
    "binop6\000", binop6__attributes,
    {.const_idx = -func_binop6}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "equal7\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 5,
    "tuple7\000builtin_types", builtin_types__tuple7__attributes,
    {.position = POS(324, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "330_14_lv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "330_19_lv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "330_24_lv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "330_29_lv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "330_34_lv6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "330_39_lv7\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "331_15_rv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "331_20_rv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "331_25_rv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "331_30_rv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "331_35_rv6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "331_40_rv7\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "343_9_lv1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "343_14_lv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "343_19_lv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "343_24_lv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "343_29_lv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "343_34_lv6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "343_39_lv7\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "344_10_rv1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "344_15_rv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "344_20_rv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "344_25_rv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "344_30_rv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "344_35_rv6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "344_40_rv7\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 1,
    "binop7\000", binop7__attributes,
    {.const_idx = -func_binop7}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "equal8\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 5,
    "tuple8\000builtin_types", builtin_types__tuple8__attributes,
    {.position = POS(403, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "409_14_lv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "409_19_lv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "409_24_lv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "409_29_lv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "409_34_lv6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "409_39_lv7\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "409_44_lv8\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "410_15_rv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "410_20_rv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "410_25_rv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "410_30_rv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "410_35_rv6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "410_40_rv7\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "410_45_rv8\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "423_9_lv1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "423_14_lv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "423_19_lv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "423_24_lv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "423_29_lv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "423_34_lv6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "423_39_lv7\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "423_44_lv8\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "424_10_rv1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "424_15_rv2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "424_20_rv3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "424_25_rv4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "424_30_rv5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "424_35_rv6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "424_40_rv7\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "424_45_rv8\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 1,
    "binop8\000", binop8__attributes,
    {.const_idx = -func_binop8}
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
  163, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
