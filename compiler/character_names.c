#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_funky__get_character_names = -1,
  str_nul = -2,
  chr_0 = -3,
  key_value_pair_27_6 = -4,
  str_soh = -5,
  chr_1 = -6,
  key_value_pair_28_6 = -7,
  str_stx = -8,
  chr_2 = -9,
  key_value_pair_29_6 = -10,
  str_etx = -11,
  chr_3 = -12,
  key_value_pair_30_6 = -13,
  str_eot = -14,
  chr_4 = -15,
  key_value_pair_31_6 = -16,
  str_enq = -17,
  chr_5 = -18,
  key_value_pair_32_6 = -19,
  str_ack = -20,
  chr_6 = -21,
  key_value_pair_33_6 = -22,
  str_bel = -23,
  chr_7 = -24,
  key_value_pair_34_6 = -25,
  str_bs = -26,
  chr_8 = -27,
  key_value_pair_35_6 = -28,
  str_ht = -29,
  chr_9 = -30,
  key_value_pair_36_6 = -31,
  str_nl = -32,
  chr_10 = -33,
  key_value_pair_37_6 = -34,
  str_vt = -35,
  chr_11 = -36,
  key_value_pair_38_6 = -37,
  str_ff = -38,
  chr_12 = -39,
  key_value_pair_39_6 = -40,
  str_cr = -41,
  chr_13 = -42,
  key_value_pair_40_6 = -43,
  str_so = -44,
  chr_14 = -45,
  key_value_pair_41_6 = -46,
  str_si = -47,
  chr_15 = -48,
  key_value_pair_42_6 = -49,
  str_dle = -50,
  chr_16 = -51,
  key_value_pair_43_6 = -52,
  str_dc = -53,
  chr_17 = -54,
  key_value_pair_44_6 = -55,
  str_xon = -56,
  key_value_pair_45_6 = -57,
  str_dc_2 = -58,
  chr_18 = -59,
  key_value_pair_46_6 = -60,
  str_dc_3 = -61,
  chr_19 = -62,
  key_value_pair_47_6 = -63,
  str_xoff = -64,
  key_value_pair_48_6 = -65,
  str_dc_4 = -66,
  chr_20 = -67,
  key_value_pair_49_6 = -68,
  str_nak = -69,
  chr_21 = -70,
  key_value_pair_50_6 = -71,
  str_syn = -72,
  chr_22 = -73,
  key_value_pair_51_6 = -74,
  str_etb = -75,
  chr_23 = -76,
  key_value_pair_52_6 = -77,
  str_can = -78,
  chr_24 = -79,
  key_value_pair_53_6 = -80,
  str_em = -81,
  chr_25 = -82,
  key_value_pair_54_6 = -83,
  str_sub = -84,
  chr_26 = -85,
  key_value_pair_55_6 = -86,
  str_esc = -87,
  chr_27 = -88,
  key_value_pair_56_6 = -89,
  str_fs = -90,
  chr_28 = -91,
  key_value_pair_57_6 = -92,
  str_gs = -93,
  chr_29 = -94,
  key_value_pair_58_6 = -95,
  str_rs = -96,
  chr_30 = -97,
  key_value_pair_59_6 = -98,
  str_us = -99,
  chr_31 = -100,
  key_value_pair_60_6 = -101,
  str_spc = -102,
  chr_32 = -103,
  key_value_pair_61_6 = -104,
  str_amp = -105,
  chr_38 = -106,
  key_value_pair_62_6 = -107,
  str_quot = -108,
  chr_34 = -109,
  key_value_pair_63_6 = -110,
  str_apos = -111,
  chr_39 = -112,
  key_value_pair_64_6 = -113,
  str_at = -114,
  chr_64 = -115,
  key_value_pair_65_6 = -116,
  str_del = -117,
  chr_127 = -118,
  key_value_pair_66_6 = -119,
  str_csi = -120,
  chr_155 = -121,
  key_value_pair_67_6 = -122,
  str_nbsp = -123,
  chr_160 = -124,
  key_value_pair_68_6 = -125,
  str_iexcl = -126,
  chr_161 = -127,
  key_value_pair_69_6 = -128,
  str_cent = -129,
  chr_162 = -130,
  key_value_pair_70_6 = -131,
  str_pound = -132,
  chr_163 = -133,
  key_value_pair_71_6 = -134,
  str_curren = -135,
  chr_164 = -136,
  key_value_pair_72_6 = -137,
  str_yen = -138,
  chr_165 = -139,
  key_value_pair_73_6 = -140,
  str_brvbar = -141,
  chr_166 = -142,
  key_value_pair_74_6 = -143,
  str_sect = -144,
  chr_167 = -145,
  key_value_pair_75_6 = -146,
  str_uml = -147,
  chr_168 = -148,
  key_value_pair_76_6 = -149,
  str_copy = -150,
  chr_169 = -151,
  key_value_pair_77_6 = -152,
  str_ordf = -153,
  chr_170 = -154,
  key_value_pair_78_6 = -155,
  str_laquo = -156,
  chr_171 = -157,
  key_value_pair_79_6 = -158,
  str_not = -159,
  chr_172 = -160,
  key_value_pair_80_6 = -161,
  str_shy = -162,
  chr_173 = -163,
  key_value_pair_81_6 = -164,
  str_reg = -165,
  chr_174 = -166,
  key_value_pair_82_6 = -167,
  str_macr = -168,
  chr_175 = -169,
  key_value_pair_83_6 = -170,
  str_deg = -171,
  chr_176 = -172,
  key_value_pair_84_6 = -173,
  str_plusmn = -174,
  chr_177 = -175,
  key_value_pair_85_6 = -176,
  str_sup = -177,
  chr_178 = -178,
  key_value_pair_86_6 = -179,
  str_sup_2 = -180,
  chr_179 = -181,
  key_value_pair_87_6 = -182,
  str_acute = -183,
  chr_180 = -184,
  key_value_pair_88_6 = -185,
  str_micro = -186,
  chr_181 = -187,
  key_value_pair_89_6 = -188,
  str_para = -189,
  chr_182 = -190,
  key_value_pair_90_6 = -191,
  str_middot = -192,
  chr_183 = -193,
  key_value_pair_91_6 = -194,
  str_cedil = -195,
  chr_184 = -196,
  key_value_pair_92_6 = -197,
  str_sup_3 = -198,
  chr_185 = -199,
  key_value_pair_93_6 = -200,
  str_ordm = -201,
  chr_186 = -202,
  key_value_pair_94_6 = -203,
  str_raquo = -204,
  chr_187 = -205,
  key_value_pair_95_6 = -206,
  str_frac = -207,
  chr_188 = -208,
  key_value_pair_96_6 = -209,
  str_frac_2 = -210,
  chr_189 = -211,
  key_value_pair_97_6 = -212,
  str_frac_3 = -213,
  chr_190 = -214,
  key_value_pair_98_6 = -215,
  str_iquest = -216,
  chr_191 = -217,
  key_value_pair_99_6 = -218,
  str_Agrave = -219,
  chr_192 = -220,
  key_value_pair_100_6 = -221,
  str_Aacute = -222,
  chr_193 = -223,
  key_value_pair_101_6 = -224,
  str_Acirc = -225,
  chr_194 = -226,
  key_value_pair_102_6 = -227,
  str_Atilde = -228,
  chr_195 = -229,
  key_value_pair_103_6 = -230,
  str_Auml = -231,
  chr_196 = -232,
  key_value_pair_104_6 = -233,
  str_Aring = -234,
  chr_197 = -235,
  key_value_pair_105_6 = -236,
  str_AElig = -237,
  chr_198 = -238,
  key_value_pair_106_6 = -239,
  str_Ccedil = -240,
  chr_199 = -241,
  key_value_pair_107_6 = -242,
  str_Egrave = -243,
  chr_200 = -244,
  key_value_pair_108_6 = -245,
  str_Eacute = -246,
  chr_201 = -247,
  key_value_pair_109_6 = -248,
  str_Ecirc = -249,
  chr_202 = -250,
  key_value_pair_110_6 = -251,
  str_Euml = -252,
  chr_203 = -253,
  key_value_pair_111_6 = -254,
  str_Igrave = -255,
  chr_204 = -256,
  key_value_pair_112_6 = -257,
  str_Iacute = -258,
  chr_205 = -259,
  key_value_pair_113_6 = -260,
  str_Icirc = -261,
  chr_206 = -262,
  key_value_pair_114_6 = -263,
  str_Iuml = -264,
  chr_207 = -265,
  key_value_pair_115_6 = -266,
  str_ETH = -267,
  chr_208 = -268,
  key_value_pair_116_6 = -269,
  str_Ntilde = -270,
  chr_209 = -271,
  key_value_pair_117_6 = -272,
  str_Ograve = -273,
  chr_210 = -274,
  key_value_pair_118_6 = -275,
  str_Oacute = -276,
  chr_211 = -277,
  key_value_pair_119_6 = -278,
  str_Ocirc = -279,
  chr_212 = -280,
  key_value_pair_120_6 = -281,
  str_Otilde = -282,
  chr_213 = -283,
  key_value_pair_121_6 = -284,
  str_Ouml = -285,
  chr_214 = -286,
  key_value_pair_122_6 = -287,
  str_times = -288,
  chr_215 = -289,
  key_value_pair_123_6 = -290,
  str_Oslash = -291,
  chr_216 = -292,
  key_value_pair_124_6 = -293,
  str_Ugrave = -294,
  chr_217 = -295,
  key_value_pair_125_6 = -296,
  str_Uacute = -297,
  chr_218 = -298,
  key_value_pair_126_6 = -299,
  str_Ucirc = -300,
  chr_219 = -301,
  key_value_pair_127_6 = -302,
  str_Uuml = -303,
  chr_220 = -304,
  key_value_pair_128_6 = -305,
  str_Yacute = -306,
  chr_221 = -307,
  key_value_pair_129_6 = -308,
  str_THORN = -309,
  chr_222 = -310,
  key_value_pair_130_6 = -311,
  str_szlig = -312,
  chr_223 = -313,
  key_value_pair_131_6 = -314,
  str_agrave = -315,
  chr_224 = -316,
  key_value_pair_132_6 = -317,
  str_aacute = -318,
  chr_225 = -319,
  key_value_pair_133_6 = -320,
  str_acirc = -321,
  chr_226 = -322,
  key_value_pair_134_6 = -323,
  str_atilde = -324,
  chr_227 = -325,
  key_value_pair_135_6 = -326,
  str_auml = -327,
  chr_228 = -328,
  key_value_pair_136_6 = -329,
  str_aring = -330,
  chr_229 = -331,
  key_value_pair_137_6 = -332,
  str_aelig = -333,
  chr_230 = -334,
  key_value_pair_138_6 = -335,
  str_ccedil = -336,
  chr_231 = -337,
  key_value_pair_139_6 = -338,
  str_egrave = -339,
  chr_232 = -340,
  key_value_pair_140_6 = -341,
  str_eacute = -342,
  chr_233 = -343,
  key_value_pair_141_6 = -344,
  str_ecirc = -345,
  chr_234 = -346,
  key_value_pair_142_6 = -347,
  str_euml = -348,
  chr_235 = -349,
  key_value_pair_143_6 = -350,
  str_igrave = -351,
  chr_236 = -352,
  key_value_pair_144_6 = -353,
  str_iacute = -354,
  chr_237 = -355,
  key_value_pair_145_6 = -356,
  str_icirc = -357,
  chr_238 = -358,
  key_value_pair_146_6 = -359,
  str_iuml = -360,
  chr_239 = -361,
  key_value_pair_147_6 = -362,
  str_eth = -363,
  chr_240 = -364,
  key_value_pair_148_6 = -365,
  str_ntilde = -366,
  chr_241 = -367,
  key_value_pair_149_6 = -368,
  str_ograve = -369,
  chr_242 = -370,
  key_value_pair_150_6 = -371,
  str_oacute = -372,
  chr_243 = -373,
  key_value_pair_151_6 = -374,
  str_ocirc = -375,
  chr_244 = -376,
  key_value_pair_152_6 = -377,
  str_otilde = -378,
  chr_245 = -379,
  key_value_pair_153_6 = -380,
  str_ouml = -381,
  chr_246 = -382,
  key_value_pair_154_6 = -383,
  str_divide = -384,
  chr_247 = -385,
  key_value_pair_155_6 = -386,
  str_oslash = -387,
  chr_248 = -388,
  key_value_pair_156_6 = -389,
  str_ugrave = -390,
  chr_249 = -391,
  key_value_pair_157_6 = -392,
  str_uacute = -393,
  chr_250 = -394,
  key_value_pair_158_6 = -395,
  str_ucirc = -396,
  chr_251 = -397,
  key_value_pair_159_6 = -398,
  str_uuml = -399,
  chr_252 = -400,
  key_value_pair_160_6 = -401,
  str_yacute = -402,
  chr_253 = -403,
  key_value_pair_161_6 = -404,
  str_thorn = -405,
  chr_254 = -406,
  key_value_pair_162_6 = -407,
  str_yuml = -408,
  chr_255 = -409,
  key_value_pair_163_6 = -410,
  str_OElig = -411,
  chr_338 = -412,
  key_value_pair_164_6 = -413,
  str_oelig = -414,
  chr_339 = -415,
  key_value_pair_165_6 = -416,
  str_Scaron = -417,
  chr_352 = -418,
  key_value_pair_166_6 = -419,
  str_scaron = -420,
  chr_353 = -421,
  key_value_pair_167_6 = -422,
  str_Yuml = -423,
  chr_376 = -424,
  key_value_pair_168_6 = -425,
  str_fnof = -426,
  chr_402 = -427,
  key_value_pair_169_6 = -428,
  str_circ = -429,
  chr_710 = -430,
  key_value_pair_170_6 = -431,
  str_tilde = -432,
  chr_732 = -433,
  key_value_pair_171_6 = -434,
  str_Alpha = -435,
  chr_913 = -436,
  key_value_pair_172_6 = -437,
  str_Beta = -438,
  chr_914 = -439,
  key_value_pair_173_6 = -440,
  str_Gamma = -441,
  chr_915 = -442,
  key_value_pair_174_6 = -443,
  str_Delta = -444,
  chr_916 = -445,
  key_value_pair_175_6 = -446,
  str_Epsilon = -447,
  chr_917 = -448,
  key_value_pair_176_6 = -449,
  str_Zeta = -450,
  chr_918 = -451,
  key_value_pair_177_6 = -452,
  str_Eta = -453,
  chr_919 = -454,
  key_value_pair_178_6 = -455,
  str_Theta = -456,
  chr_920 = -457,
  key_value_pair_179_6 = -458,
  str_Iota = -459,
  chr_921 = -460,
  key_value_pair_180_6 = -461,
  str_Kappa = -462,
  chr_922 = -463,
  key_value_pair_181_6 = -464,
  str_Lambda = -465,
  chr_923 = -466,
  key_value_pair_182_6 = -467,
  str_Mu = -468,
  chr_924 = -469,
  key_value_pair_183_6 = -470,
  str_Nu = -471,
  chr_925 = -472,
  key_value_pair_184_6 = -473,
  str_Xi = -474,
  chr_926 = -475,
  key_value_pair_185_6 = -476,
  str_Omicron = -477,
  chr_927 = -478,
  key_value_pair_186_6 = -479,
  str_Pi = -480,
  chr_928 = -481,
  key_value_pair_187_6 = -482,
  str_Rho = -483,
  chr_929 = -484,
  key_value_pair_188_6 = -485,
  str_Sigma = -486,
  chr_931 = -487,
  key_value_pair_189_6 = -488,
  str_Tau = -489,
  chr_932 = -490,
  key_value_pair_190_6 = -491,
  str_Upsilon = -492,
  chr_933 = -493,
  key_value_pair_191_6 = -494,
  str_Phi = -495,
  chr_934 = -496,
  key_value_pair_192_6 = -497,
  str_Chi = -498,
  chr_935 = -499,
  key_value_pair_193_6 = -500,
  str_Psi = -501,
  chr_936 = -502,
  key_value_pair_194_6 = -503,
  str_Omega = -504,
  chr_937 = -505,
  key_value_pair_195_6 = -506,
  str_alpha = -507,
  chr_945 = -508,
  key_value_pair_196_6 = -509,
  str_beta = -510,
  chr_946 = -511,
  key_value_pair_197_6 = -512,
  str_gamma = -513,
  chr_947 = -514,
  key_value_pair_198_6 = -515,
  str_delta = -516,
  chr_948 = -517,
  key_value_pair_199_6 = -518,
  str_epsilon = -519,
  chr_949 = -520,
  key_value_pair_200_6 = -521,
  str_zeta = -522,
  chr_950 = -523,
  key_value_pair_201_6 = -524,
  str_eta = -525,
  chr_951 = -526,
  key_value_pair_202_6 = -527,
  str_theta = -528,
  chr_952 = -529,
  key_value_pair_203_6 = -530,
  str_iota = -531,
  chr_953 = -532,
  key_value_pair_204_6 = -533,
  str_kappa = -534,
  chr_954 = -535,
  key_value_pair_205_6 = -536,
  str_lambda = -537,
  chr_955 = -538,
  key_value_pair_206_6 = -539,
  str_mu = -540,
  chr_956 = -541,
  key_value_pair_207_6 = -542,
  str_nu = -543,
  chr_957 = -544,
  key_value_pair_208_6 = -545,
  str_xi = -546,
  chr_958 = -547,
  key_value_pair_209_6 = -548,
  str_omicron = -549,
  chr_959 = -550,
  key_value_pair_210_6 = -551,
  str_pi = -552,
  chr_960 = -553,
  key_value_pair_211_6 = -554,
  str_rho = -555,
  chr_961 = -556,
  key_value_pair_212_6 = -557,
  str_sigmaf = -558,
  chr_962 = -559,
  key_value_pair_213_6 = -560,
  str_sigma = -561,
  chr_963 = -562,
  key_value_pair_214_6 = -563,
  str_tau = -564,
  chr_964 = -565,
  key_value_pair_215_6 = -566,
  str_upsilon = -567,
  chr_965 = -568,
  key_value_pair_216_6 = -569,
  str_phi = -570,
  chr_966 = -571,
  key_value_pair_217_6 = -572,
  str_chi = -573,
  chr_967 = -574,
  key_value_pair_218_6 = -575,
  str_psi = -576,
  chr_968 = -577,
  key_value_pair_219_6 = -578,
  str_omega = -579,
  chr_969 = -580,
  key_value_pair_220_6 = -581,
  str_thetasym = -582,
  chr_977 = -583,
  key_value_pair_221_6 = -584,
  str_upsih = -585,
  chr_978 = -586,
  key_value_pair_222_6 = -587,
  str_piv = -588,
  chr_982 = -589,
  key_value_pair_223_6 = -590,
  str_ensp = -591,
  chr_8194 = -592,
  key_value_pair_224_6 = -593,
  str_emsp = -594,
  chr_8195 = -595,
  key_value_pair_225_6 = -596,
  str_thinsp = -597,
  chr_8201 = -598,
  key_value_pair_226_6 = -599,
  str_zwnj = -600,
  chr_8204 = -601,
  key_value_pair_227_6 = -602,
  str_zwj = -603,
  chr_8205 = -604,
  key_value_pair_228_6 = -605,
  str_lrm = -606,
  chr_8206 = -607,
  key_value_pair_229_6 = -608,
  str_rlm = -609,
  chr_8207 = -610,
  key_value_pair_230_6 = -611,
  str_ndash = -612,
  chr_8211 = -613,
  key_value_pair_231_6 = -614,
  str_mdash = -615,
  chr_8212 = -616,
  key_value_pair_232_6 = -617,
  str_lsquo = -618,
  chr_8216 = -619,
  key_value_pair_233_6 = -620,
  str_rsquo = -621,
  chr_8217 = -622,
  key_value_pair_234_6 = -623,
  str_sbquo = -624,
  chr_8218 = -625,
  key_value_pair_235_6 = -626,
  str_ldquo = -627,
  chr_8220 = -628,
  key_value_pair_236_6 = -629,
  str_rdquo = -630,
  chr_8221 = -631,
  key_value_pair_237_6 = -632,
  str_bdquo = -633,
  chr_8222 = -634,
  key_value_pair_238_6 = -635,
  str_dagger = -636,
  chr_8224 = -637,
  key_value_pair_239_6 = -638,
  str_Dagger = -639,
  chr_8225 = -640,
  key_value_pair_240_6 = -641,
  str_bull = -642,
  chr_8226 = -643,
  key_value_pair_241_6 = -644,
  str_hellip = -645,
  chr_8230 = -646,
  key_value_pair_242_6 = -647,
  str_permil = -648,
  chr_8240 = -649,
  key_value_pair_243_6 = -650,
  str_prime = -651,
  chr_8242 = -652,
  key_value_pair_244_6 = -653,
  str_Prime = -654,
  chr_8243 = -655,
  key_value_pair_245_6 = -656,
  str_lsaquo = -657,
  chr_8249 = -658,
  key_value_pair_246_6 = -659,
  str_rsaquo = -660,
  chr_8250 = -661,
  key_value_pair_247_6 = -662,
  str_oline = -663,
  chr_8254 = -664,
  key_value_pair_248_6 = -665,
  str_euro = -666,
  chr_8364 = -667,
  key_value_pair_249_6 = -668,
  str_larr = -669,
  chr_8592 = -670,
  key_value_pair_250_6 = -671,
  str_uarr = -672,
  chr_8593 = -673,
  key_value_pair_251_6 = -674,
  str_rarr = -675,
  chr_8594 = -676,
  key_value_pair_252_6 = -677,
  str_darr = -678,
  chr_8595 = -679,
  key_value_pair_253_6 = -680,
  str_harr = -681,
  chr_8596 = -682,
  key_value_pair_254_6 = -683,
  str_crarr = -684,
  chr_8629 = -685,
  key_value_pair_255_6 = -686,
  str_forall = -687,
  chr_8704 = -688,
  key_value_pair_256_6 = -689,
  str_part = -690,
  chr_8706 = -691,
  key_value_pair_257_6 = -692,
  str_exist = -693,
  chr_8707 = -694,
  key_value_pair_258_6 = -695,
  str_empty = -696,
  chr_8709 = -697,
  key_value_pair_259_6 = -698,
  str_nabla = -699,
  chr_8711 = -700,
  key_value_pair_260_6 = -701,
  str_isin = -702,
  chr_8712 = -703,
  key_value_pair_261_6 = -704,
  str_notin = -705,
  chr_8713 = -706,
  key_value_pair_262_6 = -707,
  str_ni = -708,
  chr_8715 = -709,
  key_value_pair_263_6 = -710,
  str_prod = -711,
  chr_8719 = -712,
  key_value_pair_264_6 = -713,
  str_sum = -714,
  chr_8721 = -715,
  key_value_pair_265_6 = -716,
  str_minus = -717,
  chr_8722 = -718,
  key_value_pair_266_6 = -719,
  str_lowast = -720,
  chr_8727 = -721,
  key_value_pair_267_6 = -722,
  str_radic = -723,
  chr_8730 = -724,
  key_value_pair_268_6 = -725,
  str_prop = -726,
  chr_8733 = -727,
  key_value_pair_269_6 = -728,
  str_infin = -729,
  chr_8734 = -730,
  key_value_pair_270_6 = -731,
  str_ang = -732,
  chr_8736 = -733,
  key_value_pair_271_6 = -734,
  str_and = -735,
  chr_8743 = -736,
  key_value_pair_272_6 = -737,
  str_or = -738,
  chr_8744 = -739,
  key_value_pair_273_6 = -740,
  str_cap = -741,
  chr_8745 = -742,
  key_value_pair_274_6 = -743,
  str_cup = -744,
  chr_8746 = -745,
  key_value_pair_275_6 = -746,
  str_int = -747,
  chr_8747 = -748,
  key_value_pair_276_6 = -749,
  str_there = -750,
  chr_8756 = -751,
  key_value_pair_277_6 = -752,
  str_sim = -753,
  chr_8764 = -754,
  key_value_pair_278_6 = -755,
  str_cong = -756,
  chr_8773 = -757,
  key_value_pair_279_6 = -758,
  str_asymp = -759,
  chr_8776 = -760,
  key_value_pair_280_6 = -761,
  str_ne = -762,
  chr_8800 = -763,
  key_value_pair_281_6 = -764,
  str_equiv = -765,
  chr_8801 = -766,
  key_value_pair_282_6 = -767,
  str_le = -768,
  chr_8804 = -769,
  key_value_pair_283_6 = -770,
  str_ge = -771,
  chr_8805 = -772,
  key_value_pair_284_6 = -773,
  str_subset = -774,
  chr_8834 = -775,
  key_value_pair_285_6 = -776,
  str_superset = -777,
  chr_8835 = -778,
  key_value_pair_286_6 = -779,
  str_nsub = -780,
  chr_8836 = -781,
  key_value_pair_287_6 = -782,
  str_sube = -783,
  chr_8838 = -784,
  key_value_pair_288_6 = -785,
  str_supe = -786,
  chr_8839 = -787,
  key_value_pair_289_6 = -788,
  str_oplus = -789,
  chr_8853 = -790,
  key_value_pair_290_6 = -791,
  str_otimes = -792,
  chr_8855 = -793,
  key_value_pair_291_6 = -794,
  str_perp = -795,
  chr_8869 = -796,
  key_value_pair_292_6 = -797,
  str_sdot = -798,
  chr_8901 = -799,
  key_value_pair_293_6 = -800,
  str_lceil = -801,
  chr_8968 = -802,
  key_value_pair_294_6 = -803,
  str_rceil = -804,
  chr_8969 = -805,
  key_value_pair_295_6 = -806,
  str_lfloor = -807,
  chr_8970 = -808,
  key_value_pair_296_6 = -809,
  str_rfloor = -810,
  chr_8971 = -811,
  key_value_pair_297_6 = -812,
  str_loz = -813,
  chr_9674 = -814,
  key_value_pair_298_6 = -815,
  str_spades = -816,
  chr_9824 = -817,
  key_value_pair_299_6 = -818,
  str_clubs = -819,
  chr_9827 = -820,
  key_value_pair_300_6 = -821,
  str_hearts = -822,
  chr_9829 = -823,
  key_value_pair_301_6 = -824,
  str_diams = -825,
  chr_9830 = -826,
  key_value_pair_302_6 = -827
};

enum {
  var__START = FIRST_VAR-1,
  var_funky__get_character_names, // initialized
  var_std__key_value_pair, // extern
  var_hash_table, // extern
  var_std__assign, // extern
  var__END
};


static TAB_NUM t_func_funky__get_character_names[] = {
  0, // locals
  0, // parameters
  // hash_table
  var_hash_table, 276, key_value_pair_27_6, key_value_pair_28_6, key_value_pair_29_6, key_value_pair_30_6, key_value_pair_31_6, key_value_pair_32_6, key_value_pair_33_6, key_value_pair_34_6, key_value_pair_35_6, key_value_pair_36_6, key_value_pair_37_6, key_value_pair_38_6, key_value_pair_39_6, key_value_pair_40_6, key_value_pair_41_6, key_value_pair_42_6, key_value_pair_43_6, key_value_pair_44_6, key_value_pair_45_6, key_value_pair_46_6, key_value_pair_47_6, key_value_pair_48_6, key_value_pair_49_6, key_value_pair_50_6, key_value_pair_51_6, key_value_pair_52_6, key_value_pair_53_6, key_value_pair_54_6, key_value_pair_55_6, key_value_pair_56_6, key_value_pair_57_6, key_value_pair_58_6, key_value_pair_59_6, key_value_pair_60_6, key_value_pair_61_6, key_value_pair_62_6, key_value_pair_63_6, key_value_pair_64_6, key_value_pair_65_6, key_value_pair_66_6, key_value_pair_67_6, key_value_pair_68_6, key_value_pair_69_6, key_value_pair_70_6, key_value_pair_71_6, key_value_pair_72_6, key_value_pair_73_6, key_value_pair_74_6, key_value_pair_75_6, key_value_pair_76_6, key_value_pair_77_6, key_value_pair_78_6, key_value_pair_79_6, key_value_pair_80_6, key_value_pair_81_6, key_value_pair_82_6, key_value_pair_83_6, key_value_pair_84_6, key_value_pair_85_6, key_value_pair_86_6, key_value_pair_87_6, key_value_pair_88_6, key_value_pair_89_6, key_value_pair_90_6, key_value_pair_91_6, key_value_pair_92_6, key_value_pair_93_6, key_value_pair_94_6, key_value_pair_95_6, key_value_pair_96_6, key_value_pair_97_6, key_value_pair_98_6, key_value_pair_99_6, key_value_pair_100_6, key_value_pair_101_6, key_value_pair_102_6, key_value_pair_103_6, key_value_pair_104_6, key_value_pair_105_6, key_value_pair_106_6, key_value_pair_107_6, key_value_pair_108_6, key_value_pair_109_6, key_value_pair_110_6, key_value_pair_111_6, key_value_pair_112_6, key_value_pair_113_6, key_value_pair_114_6, key_value_pair_115_6, key_value_pair_116_6, key_value_pair_117_6, key_value_pair_118_6, key_value_pair_119_6, key_value_pair_120_6, key_value_pair_121_6, key_value_pair_122_6, key_value_pair_123_6, key_value_pair_124_6, key_value_pair_125_6, key_value_pair_126_6, key_value_pair_127_6, key_value_pair_128_6, key_value_pair_129_6, key_value_pair_130_6, key_value_pair_131_6, key_value_pair_132_6, key_value_pair_133_6, key_value_pair_134_6, key_value_pair_135_6, key_value_pair_136_6, key_value_pair_137_6, key_value_pair_138_6, key_value_pair_139_6, key_value_pair_140_6, key_value_pair_141_6, key_value_pair_142_6, key_value_pair_143_6, key_value_pair_144_6, key_value_pair_145_6, key_value_pair_146_6, key_value_pair_147_6, key_value_pair_148_6, key_value_pair_149_6, key_value_pair_150_6, key_value_pair_151_6, key_value_pair_152_6, key_value_pair_153_6, key_value_pair_154_6, key_value_pair_155_6, key_value_pair_156_6, key_value_pair_157_6, key_value_pair_158_6, key_value_pair_159_6, key_value_pair_160_6, key_value_pair_161_6, key_value_pair_162_6, key_value_pair_163_6, key_value_pair_164_6, key_value_pair_165_6, key_value_pair_166_6, key_value_pair_167_6, key_value_pair_168_6, key_value_pair_169_6, key_value_pair_170_6, key_value_pair_171_6, key_value_pair_172_6, key_value_pair_173_6, key_value_pair_174_6, key_value_pair_175_6, key_value_pair_176_6, key_value_pair_177_6, key_value_pair_178_6, key_value_pair_179_6, key_value_pair_180_6, key_value_pair_181_6, key_value_pair_182_6, key_value_pair_183_6, key_value_pair_184_6, key_value_pair_185_6, key_value_pair_186_6, key_value_pair_187_6, key_value_pair_188_6, key_value_pair_189_6, key_value_pair_190_6, key_value_pair_191_6, key_value_pair_192_6, key_value_pair_193_6, key_value_pair_194_6, key_value_pair_195_6, key_value_pair_196_6, key_value_pair_197_6, key_value_pair_198_6, key_value_pair_199_6, key_value_pair_200_6, key_value_pair_201_6, key_value_pair_202_6, key_value_pair_203_6, key_value_pair_204_6, key_value_pair_205_6, key_value_pair_206_6, key_value_pair_207_6, key_value_pair_208_6, key_value_pair_209_6, key_value_pair_210_6, key_value_pair_211_6, key_value_pair_212_6, key_value_pair_213_6, key_value_pair_214_6, key_value_pair_215_6, key_value_pair_216_6, key_value_pair_217_6, key_value_pair_218_6, key_value_pair_219_6, key_value_pair_220_6, key_value_pair_221_6, key_value_pair_222_6, key_value_pair_223_6, key_value_pair_224_6, key_value_pair_225_6, key_value_pair_226_6, key_value_pair_227_6, key_value_pair_228_6, key_value_pair_229_6, key_value_pair_230_6, key_value_pair_231_6, key_value_pair_232_6, key_value_pair_233_6, key_value_pair_234_6, key_value_pair_235_6, key_value_pair_236_6, key_value_pair_237_6, key_value_pair_238_6, key_value_pair_239_6, key_value_pair_240_6, key_value_pair_241_6, key_value_pair_242_6, key_value_pair_243_6, key_value_pair_244_6, key_value_pair_245_6, key_value_pair_246_6, key_value_pair_247_6, key_value_pair_248_6, key_value_pair_249_6, key_value_pair_250_6, key_value_pair_251_6, key_value_pair_252_6, key_value_pair_253_6, key_value_pair_254_6, key_value_pair_255_6, key_value_pair_256_6, key_value_pair_257_6, key_value_pair_258_6, key_value_pair_259_6, key_value_pair_260_6, key_value_pair_261_6, key_value_pair_262_6, key_value_pair_263_6, key_value_pair_264_6, key_value_pair_265_6, key_value_pair_266_6, key_value_pair_267_6, key_value_pair_268_6, key_value_pair_269_6, key_value_pair_270_6, key_value_pair_271_6, key_value_pair_272_6, key_value_pair_273_6, key_value_pair_274_6, key_value_pair_275_6, key_value_pair_276_6, key_value_pair_277_6, key_value_pair_278_6, key_value_pair_279_6, key_value_pair_280_6, key_value_pair_281_6, key_value_pair_282_6, key_value_pair_283_6, key_value_pair_284_6, key_value_pair_285_6, key_value_pair_286_6, key_value_pair_287_6, key_value_pair_288_6, key_value_pair_289_6, key_value_pair_290_6, key_value_pair_291_6, key_value_pair_292_6, key_value_pair_293_6, key_value_pair_294_6, key_value_pair_295_6, key_value_pair_296_6, key_value_pair_297_6, key_value_pair_298_6, key_value_pair_299_6, key_value_pair_300_6, key_value_pair_301_6, key_value_pair_302_6, TAIL_CALL,
  POS(26, 3)
};

static FUNCTION_INFO i_func_funky__get_character_names = {
  t_func_funky__get_character_names, NULL, 1, 0,
  {}
};

static int key_value_pair_27_6_arguments[] = {
  -str_nul, -chr_0
};

static int key_value_pair_28_6_arguments[] = {
  -str_soh, -chr_1
};

static int key_value_pair_29_6_arguments[] = {
  -str_stx, -chr_2
};

static int key_value_pair_30_6_arguments[] = {
  -str_etx, -chr_3
};

static int key_value_pair_31_6_arguments[] = {
  -str_eot, -chr_4
};

static int key_value_pair_32_6_arguments[] = {
  -str_enq, -chr_5
};

static int key_value_pair_33_6_arguments[] = {
  -str_ack, -chr_6
};

static int key_value_pair_34_6_arguments[] = {
  -str_bel, -chr_7
};

static int key_value_pair_35_6_arguments[] = {
  -str_bs, -chr_8
};

static int key_value_pair_36_6_arguments[] = {
  -str_ht, -chr_9
};

static int key_value_pair_37_6_arguments[] = {
  -str_nl, -chr_10
};

static int key_value_pair_38_6_arguments[] = {
  -str_vt, -chr_11
};

static int key_value_pair_39_6_arguments[] = {
  -str_ff, -chr_12
};

static int key_value_pair_40_6_arguments[] = {
  -str_cr, -chr_13
};

static int key_value_pair_41_6_arguments[] = {
  -str_so, -chr_14
};

static int key_value_pair_42_6_arguments[] = {
  -str_si, -chr_15
};

static int key_value_pair_43_6_arguments[] = {
  -str_dle, -chr_16
};

static int key_value_pair_44_6_arguments[] = {
  -str_dc, -chr_17
};

static int key_value_pair_45_6_arguments[] = {
  -str_xon, -chr_17
};

static int key_value_pair_46_6_arguments[] = {
  -str_dc_2, -chr_18
};

static int key_value_pair_47_6_arguments[] = {
  -str_dc_3, -chr_19
};

static int key_value_pair_48_6_arguments[] = {
  -str_xoff, -chr_19
};

static int key_value_pair_49_6_arguments[] = {
  -str_dc_4, -chr_20
};

static int key_value_pair_50_6_arguments[] = {
  -str_nak, -chr_21
};

static int key_value_pair_51_6_arguments[] = {
  -str_syn, -chr_22
};

static int key_value_pair_52_6_arguments[] = {
  -str_etb, -chr_23
};

static int key_value_pair_53_6_arguments[] = {
  -str_can, -chr_24
};

static int key_value_pair_54_6_arguments[] = {
  -str_em, -chr_25
};

static int key_value_pair_55_6_arguments[] = {
  -str_sub, -chr_26
};

static int key_value_pair_56_6_arguments[] = {
  -str_esc, -chr_27
};

static int key_value_pair_57_6_arguments[] = {
  -str_fs, -chr_28
};

static int key_value_pair_58_6_arguments[] = {
  -str_gs, -chr_29
};

static int key_value_pair_59_6_arguments[] = {
  -str_rs, -chr_30
};

static int key_value_pair_60_6_arguments[] = {
  -str_us, -chr_31
};

static int key_value_pair_61_6_arguments[] = {
  -str_spc, -chr_32
};

static int key_value_pair_62_6_arguments[] = {
  -str_amp, -chr_38
};

static int key_value_pair_63_6_arguments[] = {
  -str_quot, -chr_34
};

static int key_value_pair_64_6_arguments[] = {
  -str_apos, -chr_39
};

static int key_value_pair_65_6_arguments[] = {
  -str_at, -chr_64
};

static int key_value_pair_66_6_arguments[] = {
  -str_del, -chr_127
};

static int key_value_pair_67_6_arguments[] = {
  -str_csi, -chr_155
};

static int key_value_pair_68_6_arguments[] = {
  -str_nbsp, -chr_160
};

static int key_value_pair_69_6_arguments[] = {
  -str_iexcl, -chr_161
};

static int key_value_pair_70_6_arguments[] = {
  -str_cent, -chr_162
};

static int key_value_pair_71_6_arguments[] = {
  -str_pound, -chr_163
};

static int key_value_pair_72_6_arguments[] = {
  -str_curren, -chr_164
};

static int key_value_pair_73_6_arguments[] = {
  -str_yen, -chr_165
};

static int key_value_pair_74_6_arguments[] = {
  -str_brvbar, -chr_166
};

static int key_value_pair_75_6_arguments[] = {
  -str_sect, -chr_167
};

static int key_value_pair_76_6_arguments[] = {
  -str_uml, -chr_168
};

static int key_value_pair_77_6_arguments[] = {
  -str_copy, -chr_169
};

static int key_value_pair_78_6_arguments[] = {
  -str_ordf, -chr_170
};

static int key_value_pair_79_6_arguments[] = {
  -str_laquo, -chr_171
};

static int key_value_pair_80_6_arguments[] = {
  -str_not, -chr_172
};

static int key_value_pair_81_6_arguments[] = {
  -str_shy, -chr_173
};

static int key_value_pair_82_6_arguments[] = {
  -str_reg, -chr_174
};

static int key_value_pair_83_6_arguments[] = {
  -str_macr, -chr_175
};

static int key_value_pair_84_6_arguments[] = {
  -str_deg, -chr_176
};

static int key_value_pair_85_6_arguments[] = {
  -str_plusmn, -chr_177
};

static int key_value_pair_86_6_arguments[] = {
  -str_sup, -chr_178
};

static int key_value_pair_87_6_arguments[] = {
  -str_sup_2, -chr_179
};

static int key_value_pair_88_6_arguments[] = {
  -str_acute, -chr_180
};

static int key_value_pair_89_6_arguments[] = {
  -str_micro, -chr_181
};

static int key_value_pair_90_6_arguments[] = {
  -str_para, -chr_182
};

static int key_value_pair_91_6_arguments[] = {
  -str_middot, -chr_183
};

static int key_value_pair_92_6_arguments[] = {
  -str_cedil, -chr_184
};

static int key_value_pair_93_6_arguments[] = {
  -str_sup_3, -chr_185
};

static int key_value_pair_94_6_arguments[] = {
  -str_ordm, -chr_186
};

static int key_value_pair_95_6_arguments[] = {
  -str_raquo, -chr_187
};

static int key_value_pair_96_6_arguments[] = {
  -str_frac, -chr_188
};

static int key_value_pair_97_6_arguments[] = {
  -str_frac_2, -chr_189
};

static int key_value_pair_98_6_arguments[] = {
  -str_frac_3, -chr_190
};

static int key_value_pair_99_6_arguments[] = {
  -str_iquest, -chr_191
};

static int key_value_pair_100_6_arguments[] = {
  -str_Agrave, -chr_192
};

static int key_value_pair_101_6_arguments[] = {
  -str_Aacute, -chr_193
};

static int key_value_pair_102_6_arguments[] = {
  -str_Acirc, -chr_194
};

static int key_value_pair_103_6_arguments[] = {
  -str_Atilde, -chr_195
};

static int key_value_pair_104_6_arguments[] = {
  -str_Auml, -chr_196
};

static int key_value_pair_105_6_arguments[] = {
  -str_Aring, -chr_197
};

static int key_value_pair_106_6_arguments[] = {
  -str_AElig, -chr_198
};

static int key_value_pair_107_6_arguments[] = {
  -str_Ccedil, -chr_199
};

static int key_value_pair_108_6_arguments[] = {
  -str_Egrave, -chr_200
};

static int key_value_pair_109_6_arguments[] = {
  -str_Eacute, -chr_201
};

static int key_value_pair_110_6_arguments[] = {
  -str_Ecirc, -chr_202
};

static int key_value_pair_111_6_arguments[] = {
  -str_Euml, -chr_203
};

static int key_value_pair_112_6_arguments[] = {
  -str_Igrave, -chr_204
};

static int key_value_pair_113_6_arguments[] = {
  -str_Iacute, -chr_205
};

static int key_value_pair_114_6_arguments[] = {
  -str_Icirc, -chr_206
};

static int key_value_pair_115_6_arguments[] = {
  -str_Iuml, -chr_207
};

static int key_value_pair_116_6_arguments[] = {
  -str_ETH, -chr_208
};

static int key_value_pair_117_6_arguments[] = {
  -str_Ntilde, -chr_209
};

static int key_value_pair_118_6_arguments[] = {
  -str_Ograve, -chr_210
};

static int key_value_pair_119_6_arguments[] = {
  -str_Oacute, -chr_211
};

static int key_value_pair_120_6_arguments[] = {
  -str_Ocirc, -chr_212
};

static int key_value_pair_121_6_arguments[] = {
  -str_Otilde, -chr_213
};

static int key_value_pair_122_6_arguments[] = {
  -str_Ouml, -chr_214
};

static int key_value_pair_123_6_arguments[] = {
  -str_times, -chr_215
};

static int key_value_pair_124_6_arguments[] = {
  -str_Oslash, -chr_216
};

static int key_value_pair_125_6_arguments[] = {
  -str_Ugrave, -chr_217
};

static int key_value_pair_126_6_arguments[] = {
  -str_Uacute, -chr_218
};

static int key_value_pair_127_6_arguments[] = {
  -str_Ucirc, -chr_219
};

static int key_value_pair_128_6_arguments[] = {
  -str_Uuml, -chr_220
};

static int key_value_pair_129_6_arguments[] = {
  -str_Yacute, -chr_221
};

static int key_value_pair_130_6_arguments[] = {
  -str_THORN, -chr_222
};

static int key_value_pair_131_6_arguments[] = {
  -str_szlig, -chr_223
};

static int key_value_pair_132_6_arguments[] = {
  -str_agrave, -chr_224
};

static int key_value_pair_133_6_arguments[] = {
  -str_aacute, -chr_225
};

static int key_value_pair_134_6_arguments[] = {
  -str_acirc, -chr_226
};

static int key_value_pair_135_6_arguments[] = {
  -str_atilde, -chr_227
};

static int key_value_pair_136_6_arguments[] = {
  -str_auml, -chr_228
};

static int key_value_pair_137_6_arguments[] = {
  -str_aring, -chr_229
};

static int key_value_pair_138_6_arguments[] = {
  -str_aelig, -chr_230
};

static int key_value_pair_139_6_arguments[] = {
  -str_ccedil, -chr_231
};

static int key_value_pair_140_6_arguments[] = {
  -str_egrave, -chr_232
};

static int key_value_pair_141_6_arguments[] = {
  -str_eacute, -chr_233
};

static int key_value_pair_142_6_arguments[] = {
  -str_ecirc, -chr_234
};

static int key_value_pair_143_6_arguments[] = {
  -str_euml, -chr_235
};

static int key_value_pair_144_6_arguments[] = {
  -str_igrave, -chr_236
};

static int key_value_pair_145_6_arguments[] = {
  -str_iacute, -chr_237
};

static int key_value_pair_146_6_arguments[] = {
  -str_icirc, -chr_238
};

static int key_value_pair_147_6_arguments[] = {
  -str_iuml, -chr_239
};

static int key_value_pair_148_6_arguments[] = {
  -str_eth, -chr_240
};

static int key_value_pair_149_6_arguments[] = {
  -str_ntilde, -chr_241
};

static int key_value_pair_150_6_arguments[] = {
  -str_ograve, -chr_242
};

static int key_value_pair_151_6_arguments[] = {
  -str_oacute, -chr_243
};

static int key_value_pair_152_6_arguments[] = {
  -str_ocirc, -chr_244
};

static int key_value_pair_153_6_arguments[] = {
  -str_otilde, -chr_245
};

static int key_value_pair_154_6_arguments[] = {
  -str_ouml, -chr_246
};

static int key_value_pair_155_6_arguments[] = {
  -str_divide, -chr_247
};

static int key_value_pair_156_6_arguments[] = {
  -str_oslash, -chr_248
};

static int key_value_pair_157_6_arguments[] = {
  -str_ugrave, -chr_249
};

static int key_value_pair_158_6_arguments[] = {
  -str_uacute, -chr_250
};

static int key_value_pair_159_6_arguments[] = {
  -str_ucirc, -chr_251
};

static int key_value_pair_160_6_arguments[] = {
  -str_uuml, -chr_252
};

static int key_value_pair_161_6_arguments[] = {
  -str_yacute, -chr_253
};

static int key_value_pair_162_6_arguments[] = {
  -str_thorn, -chr_254
};

static int key_value_pair_163_6_arguments[] = {
  -str_yuml, -chr_255
};

static int key_value_pair_164_6_arguments[] = {
  -str_OElig, -chr_338
};

static int key_value_pair_165_6_arguments[] = {
  -str_oelig, -chr_339
};

static int key_value_pair_166_6_arguments[] = {
  -str_Scaron, -chr_352
};

static int key_value_pair_167_6_arguments[] = {
  -str_scaron, -chr_353
};

static int key_value_pair_168_6_arguments[] = {
  -str_Yuml, -chr_376
};

static int key_value_pair_169_6_arguments[] = {
  -str_fnof, -chr_402
};

static int key_value_pair_170_6_arguments[] = {
  -str_circ, -chr_710
};

static int key_value_pair_171_6_arguments[] = {
  -str_tilde, -chr_732
};

static int key_value_pair_172_6_arguments[] = {
  -str_Alpha, -chr_913
};

static int key_value_pair_173_6_arguments[] = {
  -str_Beta, -chr_914
};

static int key_value_pair_174_6_arguments[] = {
  -str_Gamma, -chr_915
};

static int key_value_pair_175_6_arguments[] = {
  -str_Delta, -chr_916
};

static int key_value_pair_176_6_arguments[] = {
  -str_Epsilon, -chr_917
};

static int key_value_pair_177_6_arguments[] = {
  -str_Zeta, -chr_918
};

static int key_value_pair_178_6_arguments[] = {
  -str_Eta, -chr_919
};

static int key_value_pair_179_6_arguments[] = {
  -str_Theta, -chr_920
};

static int key_value_pair_180_6_arguments[] = {
  -str_Iota, -chr_921
};

static int key_value_pair_181_6_arguments[] = {
  -str_Kappa, -chr_922
};

static int key_value_pair_182_6_arguments[] = {
  -str_Lambda, -chr_923
};

static int key_value_pair_183_6_arguments[] = {
  -str_Mu, -chr_924
};

static int key_value_pair_184_6_arguments[] = {
  -str_Nu, -chr_925
};

static int key_value_pair_185_6_arguments[] = {
  -str_Xi, -chr_926
};

static int key_value_pair_186_6_arguments[] = {
  -str_Omicron, -chr_927
};

static int key_value_pair_187_6_arguments[] = {
  -str_Pi, -chr_928
};

static int key_value_pair_188_6_arguments[] = {
  -str_Rho, -chr_929
};

static int key_value_pair_189_6_arguments[] = {
  -str_Sigma, -chr_931
};

static int key_value_pair_190_6_arguments[] = {
  -str_Tau, -chr_932
};

static int key_value_pair_191_6_arguments[] = {
  -str_Upsilon, -chr_933
};

static int key_value_pair_192_6_arguments[] = {
  -str_Phi, -chr_934
};

static int key_value_pair_193_6_arguments[] = {
  -str_Chi, -chr_935
};

static int key_value_pair_194_6_arguments[] = {
  -str_Psi, -chr_936
};

static int key_value_pair_195_6_arguments[] = {
  -str_Omega, -chr_937
};

static int key_value_pair_196_6_arguments[] = {
  -str_alpha, -chr_945
};

static int key_value_pair_197_6_arguments[] = {
  -str_beta, -chr_946
};

static int key_value_pair_198_6_arguments[] = {
  -str_gamma, -chr_947
};

static int key_value_pair_199_6_arguments[] = {
  -str_delta, -chr_948
};

static int key_value_pair_200_6_arguments[] = {
  -str_epsilon, -chr_949
};

static int key_value_pair_201_6_arguments[] = {
  -str_zeta, -chr_950
};

static int key_value_pair_202_6_arguments[] = {
  -str_eta, -chr_951
};

static int key_value_pair_203_6_arguments[] = {
  -str_theta, -chr_952
};

static int key_value_pair_204_6_arguments[] = {
  -str_iota, -chr_953
};

static int key_value_pair_205_6_arguments[] = {
  -str_kappa, -chr_954
};

static int key_value_pair_206_6_arguments[] = {
  -str_lambda, -chr_955
};

static int key_value_pair_207_6_arguments[] = {
  -str_mu, -chr_956
};

static int key_value_pair_208_6_arguments[] = {
  -str_nu, -chr_957
};

static int key_value_pair_209_6_arguments[] = {
  -str_xi, -chr_958
};

static int key_value_pair_210_6_arguments[] = {
  -str_omicron, -chr_959
};

static int key_value_pair_211_6_arguments[] = {
  -str_pi, -chr_960
};

static int key_value_pair_212_6_arguments[] = {
  -str_rho, -chr_961
};

static int key_value_pair_213_6_arguments[] = {
  -str_sigmaf, -chr_962
};

static int key_value_pair_214_6_arguments[] = {
  -str_sigma, -chr_963
};

static int key_value_pair_215_6_arguments[] = {
  -str_tau, -chr_964
};

static int key_value_pair_216_6_arguments[] = {
  -str_upsilon, -chr_965
};

static int key_value_pair_217_6_arguments[] = {
  -str_phi, -chr_966
};

static int key_value_pair_218_6_arguments[] = {
  -str_chi, -chr_967
};

static int key_value_pair_219_6_arguments[] = {
  -str_psi, -chr_968
};

static int key_value_pair_220_6_arguments[] = {
  -str_omega, -chr_969
};

static int key_value_pair_221_6_arguments[] = {
  -str_thetasym, -chr_977
};

static int key_value_pair_222_6_arguments[] = {
  -str_upsih, -chr_978
};

static int key_value_pair_223_6_arguments[] = {
  -str_piv, -chr_982
};

static int key_value_pair_224_6_arguments[] = {
  -str_ensp, -chr_8194
};

static int key_value_pair_225_6_arguments[] = {
  -str_emsp, -chr_8195
};

static int key_value_pair_226_6_arguments[] = {
  -str_thinsp, -chr_8201
};

static int key_value_pair_227_6_arguments[] = {
  -str_zwnj, -chr_8204
};

static int key_value_pair_228_6_arguments[] = {
  -str_zwj, -chr_8205
};

static int key_value_pair_229_6_arguments[] = {
  -str_lrm, -chr_8206
};

static int key_value_pair_230_6_arguments[] = {
  -str_rlm, -chr_8207
};

static int key_value_pair_231_6_arguments[] = {
  -str_ndash, -chr_8211
};

static int key_value_pair_232_6_arguments[] = {
  -str_mdash, -chr_8212
};

static int key_value_pair_233_6_arguments[] = {
  -str_lsquo, -chr_8216
};

static int key_value_pair_234_6_arguments[] = {
  -str_rsquo, -chr_8217
};

static int key_value_pair_235_6_arguments[] = {
  -str_sbquo, -chr_8218
};

static int key_value_pair_236_6_arguments[] = {
  -str_ldquo, -chr_8220
};

static int key_value_pair_237_6_arguments[] = {
  -str_rdquo, -chr_8221
};

static int key_value_pair_238_6_arguments[] = {
  -str_bdquo, -chr_8222
};

static int key_value_pair_239_6_arguments[] = {
  -str_dagger, -chr_8224
};

static int key_value_pair_240_6_arguments[] = {
  -str_Dagger, -chr_8225
};

static int key_value_pair_241_6_arguments[] = {
  -str_bull, -chr_8226
};

static int key_value_pair_242_6_arguments[] = {
  -str_hellip, -chr_8230
};

static int key_value_pair_243_6_arguments[] = {
  -str_permil, -chr_8240
};

static int key_value_pair_244_6_arguments[] = {
  -str_prime, -chr_8242
};

static int key_value_pair_245_6_arguments[] = {
  -str_Prime, -chr_8243
};

static int key_value_pair_246_6_arguments[] = {
  -str_lsaquo, -chr_8249
};

static int key_value_pair_247_6_arguments[] = {
  -str_rsaquo, -chr_8250
};

static int key_value_pair_248_6_arguments[] = {
  -str_oline, -chr_8254
};

static int key_value_pair_249_6_arguments[] = {
  -str_euro, -chr_8364
};

static int key_value_pair_250_6_arguments[] = {
  -str_larr, -chr_8592
};

static int key_value_pair_251_6_arguments[] = {
  -str_uarr, -chr_8593
};

static int key_value_pair_252_6_arguments[] = {
  -str_rarr, -chr_8594
};

static int key_value_pair_253_6_arguments[] = {
  -str_darr, -chr_8595
};

static int key_value_pair_254_6_arguments[] = {
  -str_harr, -chr_8596
};

static int key_value_pair_255_6_arguments[] = {
  -str_crarr, -chr_8629
};

static int key_value_pair_256_6_arguments[] = {
  -str_forall, -chr_8704
};

static int key_value_pair_257_6_arguments[] = {
  -str_part, -chr_8706
};

static int key_value_pair_258_6_arguments[] = {
  -str_exist, -chr_8707
};

static int key_value_pair_259_6_arguments[] = {
  -str_empty, -chr_8709
};

static int key_value_pair_260_6_arguments[] = {
  -str_nabla, -chr_8711
};

static int key_value_pair_261_6_arguments[] = {
  -str_isin, -chr_8712
};

static int key_value_pair_262_6_arguments[] = {
  -str_notin, -chr_8713
};

static int key_value_pair_263_6_arguments[] = {
  -str_ni, -chr_8715
};

static int key_value_pair_264_6_arguments[] = {
  -str_prod, -chr_8719
};

static int key_value_pair_265_6_arguments[] = {
  -str_sum, -chr_8721
};

static int key_value_pair_266_6_arguments[] = {
  -str_minus, -chr_8722
};

static int key_value_pair_267_6_arguments[] = {
  -str_lowast, -chr_8727
};

static int key_value_pair_268_6_arguments[] = {
  -str_radic, -chr_8730
};

static int key_value_pair_269_6_arguments[] = {
  -str_prop, -chr_8733
};

static int key_value_pair_270_6_arguments[] = {
  -str_infin, -chr_8734
};

static int key_value_pair_271_6_arguments[] = {
  -str_ang, -chr_8736
};

static int key_value_pair_272_6_arguments[] = {
  -str_and, -chr_8743
};

static int key_value_pair_273_6_arguments[] = {
  -str_or, -chr_8744
};

static int key_value_pair_274_6_arguments[] = {
  -str_cap, -chr_8745
};

static int key_value_pair_275_6_arguments[] = {
  -str_cup, -chr_8746
};

static int key_value_pair_276_6_arguments[] = {
  -str_int, -chr_8747
};

static int key_value_pair_277_6_arguments[] = {
  -str_there, -chr_8756
};

static int key_value_pair_278_6_arguments[] = {
  -str_sim, -chr_8764
};

static int key_value_pair_279_6_arguments[] = {
  -str_cong, -chr_8773
};

static int key_value_pair_280_6_arguments[] = {
  -str_asymp, -chr_8776
};

static int key_value_pair_281_6_arguments[] = {
  -str_ne, -chr_8800
};

static int key_value_pair_282_6_arguments[] = {
  -str_equiv, -chr_8801
};

static int key_value_pair_283_6_arguments[] = {
  -str_le, -chr_8804
};

static int key_value_pair_284_6_arguments[] = {
  -str_ge, -chr_8805
};

static int key_value_pair_285_6_arguments[] = {
  -str_subset, -chr_8834
};

static int key_value_pair_286_6_arguments[] = {
  -str_superset, -chr_8835
};

static int key_value_pair_287_6_arguments[] = {
  -str_nsub, -chr_8836
};

static int key_value_pair_288_6_arguments[] = {
  -str_sube, -chr_8838
};

static int key_value_pair_289_6_arguments[] = {
  -str_supe, -chr_8839
};

static int key_value_pair_290_6_arguments[] = {
  -str_oplus, -chr_8853
};

static int key_value_pair_291_6_arguments[] = {
  -str_otimes, -chr_8855
};

static int key_value_pair_292_6_arguments[] = {
  -str_perp, -chr_8869
};

static int key_value_pair_293_6_arguments[] = {
  -str_sdot, -chr_8901
};

static int key_value_pair_294_6_arguments[] = {
  -str_lceil, -chr_8968
};

static int key_value_pair_295_6_arguments[] = {
  -str_rceil, -chr_8969
};

static int key_value_pair_296_6_arguments[] = {
  -str_lfloor, -chr_8970
};

static int key_value_pair_297_6_arguments[] = {
  -str_rfloor, -chr_8971
};

static int key_value_pair_298_6_arguments[] = {
  -str_loz, -chr_9674
};

static int key_value_pair_299_6_arguments[] = {
  -str_spades, -chr_9824
};

static int key_value_pair_300_6_arguments[] = {
  -str_clubs, -chr_9827
};

static int key_value_pair_301_6_arguments[] = {
  -str_hearts, -chr_9829
};

static int key_value_pair_302_6_arguments[] = {
  -str_diams, -chr_9830
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky__get_character_names}},
  {FLT_STRING_8, 3, {.str_8 = "nul"}},
  {FLT_CHARACTER, 0, {.value = 0}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_27_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "soh"}},
  {FLT_CHARACTER, 0, {.value = 1}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_28_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "stx"}},
  {FLT_CHARACTER, 0, {.value = 2}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_29_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "etx"}},
  {FLT_CHARACTER, 0, {.value = 3}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_30_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "eot"}},
  {FLT_CHARACTER, 0, {.value = 4}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_31_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "enq"}},
  {FLT_CHARACTER, 0, {.value = 5}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_32_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "ack"}},
  {FLT_CHARACTER, 0, {.value = 6}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_33_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "bel"}},
  {FLT_CHARACTER, 0, {.value = 7}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_34_6_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "bs"}},
  {FLT_CHARACTER, 0, {.value = 8}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_35_6_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "ht"}},
  {FLT_CHARACTER, 0, {.value = 9}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_36_6_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "nl"}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_37_6_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "vt"}},
  {FLT_CHARACTER, 0, {.value = 11}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_38_6_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "ff"}},
  {FLT_CHARACTER, 0, {.value = 12}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_39_6_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "cr"}},
  {FLT_CHARACTER, 0, {.value = 13}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_40_6_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "so"}},
  {FLT_CHARACTER, 0, {.value = 14}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_41_6_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "si"}},
  {FLT_CHARACTER, 0, {.value = 15}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_42_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "dle"}},
  {FLT_CHARACTER, 0, {.value = 16}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_43_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "dc1"}},
  {FLT_CHARACTER, 0, {.value = 17}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_44_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "xon"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_45_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "dc2"}},
  {FLT_CHARACTER, 0, {.value = 18}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_46_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "dc3"}},
  {FLT_CHARACTER, 0, {.value = 19}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_47_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "xoff"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_48_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "dc4"}},
  {FLT_CHARACTER, 0, {.value = 20}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_49_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "nak"}},
  {FLT_CHARACTER, 0, {.value = 21}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_50_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "syn"}},
  {FLT_CHARACTER, 0, {.value = 22}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_51_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "etb"}},
  {FLT_CHARACTER, 0, {.value = 23}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_52_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "can"}},
  {FLT_CHARACTER, 0, {.value = 24}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_53_6_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "em"}},
  {FLT_CHARACTER, 0, {.value = 25}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_54_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "sub"}},
  {FLT_CHARACTER, 0, {.value = 26}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_55_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "esc"}},
  {FLT_CHARACTER, 0, {.value = 27}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_56_6_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "fs"}},
  {FLT_CHARACTER, 0, {.value = 28}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_57_6_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "gs"}},
  {FLT_CHARACTER, 0, {.value = 29}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_58_6_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "rs"}},
  {FLT_CHARACTER, 0, {.value = 30}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_59_6_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "us"}},
  {FLT_CHARACTER, 0, {.value = 31}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_60_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "spc"}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_61_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "amp"}},
  {FLT_CHARACTER, 0, {.value = 38}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_62_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "quot"}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_63_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "apos"}},
  {FLT_CHARACTER, 0, {.value = 39}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_64_6_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "at"}},
  {FLT_CHARACTER, 0, {.value = 64}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_65_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "del"}},
  {FLT_CHARACTER, 0, {.value = 127}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_66_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "csi"}},
  {FLT_CHARACTER, 0, {.value = 155}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_67_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "nbsp"}},
  {FLT_CHARACTER, 0, {.value = 160}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_68_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "iexcl"}},
  {FLT_CHARACTER, 0, {.value = 161}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_69_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "cent"}},
  {FLT_CHARACTER, 0, {.value = 162}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_70_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "pound"}},
  {FLT_CHARACTER, 0, {.value = 163}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_71_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "curren"}},
  {FLT_CHARACTER, 0, {.value = 164}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_72_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "yen"}},
  {FLT_CHARACTER, 0, {.value = 165}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_73_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "brvbar"}},
  {FLT_CHARACTER, 0, {.value = 166}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_74_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "sect"}},
  {FLT_CHARACTER, 0, {.value = 167}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_75_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "uml"}},
  {FLT_CHARACTER, 0, {.value = 168}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_76_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "copy"}},
  {FLT_CHARACTER, 0, {.value = 169}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_77_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "ordf"}},
  {FLT_CHARACTER, 0, {.value = 170}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_78_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "laquo"}},
  {FLT_CHARACTER, 0, {.value = 171}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_79_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "not"}},
  {FLT_CHARACTER, 0, {.value = 172}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_80_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "shy"}},
  {FLT_CHARACTER, 0, {.value = 173}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_81_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "reg"}},
  {FLT_CHARACTER, 0, {.value = 174}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_82_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "macr"}},
  {FLT_CHARACTER, 0, {.value = 175}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_83_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "deg"}},
  {FLT_CHARACTER, 0, {.value = 176}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_84_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "plusmn"}},
  {FLT_CHARACTER, 0, {.value = 177}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_85_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "sup2"}},
  {FLT_CHARACTER, 0, {.value = 178}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_86_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "sup3"}},
  {FLT_CHARACTER, 0, {.value = 179}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_87_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "acute"}},
  {FLT_CHARACTER, 0, {.value = 180}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_88_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "micro"}},
  {FLT_CHARACTER, 0, {.value = 181}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_89_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "para"}},
  {FLT_CHARACTER, 0, {.value = 182}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_90_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "middot"}},
  {FLT_CHARACTER, 0, {.value = 183}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_91_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "cedil"}},
  {FLT_CHARACTER, 0, {.value = 184}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_92_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "sup1"}},
  {FLT_CHARACTER, 0, {.value = 185}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_93_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "ordm"}},
  {FLT_CHARACTER, 0, {.value = 186}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_94_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "raquo"}},
  {FLT_CHARACTER, 0, {.value = 187}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_95_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "frac14"}},
  {FLT_CHARACTER, 0, {.value = 188}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_96_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "frac12"}},
  {FLT_CHARACTER, 0, {.value = 189}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_97_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "frac34"}},
  {FLT_CHARACTER, 0, {.value = 190}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_98_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "iquest"}},
  {FLT_CHARACTER, 0, {.value = 191}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_99_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "Agrave"}},
  {FLT_CHARACTER, 0, {.value = 192}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_100_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "Aacute"}},
  {FLT_CHARACTER, 0, {.value = 193}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_101_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "Acirc"}},
  {FLT_CHARACTER, 0, {.value = 194}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_102_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "Atilde"}},
  {FLT_CHARACTER, 0, {.value = 195}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_103_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "Auml"}},
  {FLT_CHARACTER, 0, {.value = 196}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_104_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "Aring"}},
  {FLT_CHARACTER, 0, {.value = 197}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_105_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "AElig"}},
  {FLT_CHARACTER, 0, {.value = 198}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_106_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "Ccedil"}},
  {FLT_CHARACTER, 0, {.value = 199}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_107_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "Egrave"}},
  {FLT_CHARACTER, 0, {.value = 200}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_108_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "Eacute"}},
  {FLT_CHARACTER, 0, {.value = 201}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_109_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "Ecirc"}},
  {FLT_CHARACTER, 0, {.value = 202}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_110_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "Euml"}},
  {FLT_CHARACTER, 0, {.value = 203}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_111_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "Igrave"}},
  {FLT_CHARACTER, 0, {.value = 204}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_112_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "Iacute"}},
  {FLT_CHARACTER, 0, {.value = 205}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_113_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "Icirc"}},
  {FLT_CHARACTER, 0, {.value = 206}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_114_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "Iuml"}},
  {FLT_CHARACTER, 0, {.value = 207}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_115_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "ETH"}},
  {FLT_CHARACTER, 0, {.value = 208}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_116_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "Ntilde"}},
  {FLT_CHARACTER, 0, {.value = 209}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_117_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "Ograve"}},
  {FLT_CHARACTER, 0, {.value = 210}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_118_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "Oacute"}},
  {FLT_CHARACTER, 0, {.value = 211}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_119_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "Ocirc"}},
  {FLT_CHARACTER, 0, {.value = 212}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_120_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "Otilde"}},
  {FLT_CHARACTER, 0, {.value = 213}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_121_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "Ouml"}},
  {FLT_CHARACTER, 0, {.value = 214}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_122_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "times"}},
  {FLT_CHARACTER, 0, {.value = 215}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_123_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "Oslash"}},
  {FLT_CHARACTER, 0, {.value = 216}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_124_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "Ugrave"}},
  {FLT_CHARACTER, 0, {.value = 217}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_125_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "Uacute"}},
  {FLT_CHARACTER, 0, {.value = 218}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_126_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "Ucirc"}},
  {FLT_CHARACTER, 0, {.value = 219}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_127_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "Uuml"}},
  {FLT_CHARACTER, 0, {.value = 220}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_128_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "Yacute"}},
  {FLT_CHARACTER, 0, {.value = 221}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_129_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "THORN"}},
  {FLT_CHARACTER, 0, {.value = 222}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_130_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "szlig"}},
  {FLT_CHARACTER, 0, {.value = 223}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_131_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "agrave"}},
  {FLT_CHARACTER, 0, {.value = 224}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_132_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "aacute"}},
  {FLT_CHARACTER, 0, {.value = 225}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_133_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "acirc"}},
  {FLT_CHARACTER, 0, {.value = 226}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_134_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "atilde"}},
  {FLT_CHARACTER, 0, {.value = 227}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_135_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "auml"}},
  {FLT_CHARACTER, 0, {.value = 228}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_136_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "aring"}},
  {FLT_CHARACTER, 0, {.value = 229}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_137_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "aelig"}},
  {FLT_CHARACTER, 0, {.value = 230}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_138_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "ccedil"}},
  {FLT_CHARACTER, 0, {.value = 231}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_139_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "egrave"}},
  {FLT_CHARACTER, 0, {.value = 232}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_140_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "eacute"}},
  {FLT_CHARACTER, 0, {.value = 233}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_141_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "ecirc"}},
  {FLT_CHARACTER, 0, {.value = 234}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_142_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "euml"}},
  {FLT_CHARACTER, 0, {.value = 235}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_143_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "igrave"}},
  {FLT_CHARACTER, 0, {.value = 236}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_144_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "iacute"}},
  {FLT_CHARACTER, 0, {.value = 237}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_145_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "icirc"}},
  {FLT_CHARACTER, 0, {.value = 238}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_146_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "iuml"}},
  {FLT_CHARACTER, 0, {.value = 239}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_147_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "eth"}},
  {FLT_CHARACTER, 0, {.value = 240}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_148_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "ntilde"}},
  {FLT_CHARACTER, 0, {.value = 241}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_149_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "ograve"}},
  {FLT_CHARACTER, 0, {.value = 242}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_150_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "oacute"}},
  {FLT_CHARACTER, 0, {.value = 243}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_151_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "ocirc"}},
  {FLT_CHARACTER, 0, {.value = 244}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_152_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "otilde"}},
  {FLT_CHARACTER, 0, {.value = 245}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_153_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "ouml"}},
  {FLT_CHARACTER, 0, {.value = 246}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_154_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "divide"}},
  {FLT_CHARACTER, 0, {.value = 247}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_155_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "oslash"}},
  {FLT_CHARACTER, 0, {.value = 248}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_156_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "ugrave"}},
  {FLT_CHARACTER, 0, {.value = 249}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_157_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "uacute"}},
  {FLT_CHARACTER, 0, {.value = 250}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_158_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "ucirc"}},
  {FLT_CHARACTER, 0, {.value = 251}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_159_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "uuml"}},
  {FLT_CHARACTER, 0, {.value = 252}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_160_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "yacute"}},
  {FLT_CHARACTER, 0, {.value = 253}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_161_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "thorn"}},
  {FLT_CHARACTER, 0, {.value = 254}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_162_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "yuml"}},
  {FLT_CHARACTER, 0, {.value = 255}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_163_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "OElig"}},
  {FLT_CHARACTER, 0, {.value = 338}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_164_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "oelig"}},
  {FLT_CHARACTER, 0, {.value = 339}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_165_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "Scaron"}},
  {FLT_CHARACTER, 0, {.value = 352}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_166_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "scaron"}},
  {FLT_CHARACTER, 0, {.value = 353}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_167_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "Yuml"}},
  {FLT_CHARACTER, 0, {.value = 376}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_168_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "fnof"}},
  {FLT_CHARACTER, 0, {.value = 402}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_169_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "circ"}},
  {FLT_CHARACTER, 0, {.value = 710}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_170_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "tilde"}},
  {FLT_CHARACTER, 0, {.value = 732}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_171_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "Alpha"}},
  {FLT_CHARACTER, 0, {.value = 913}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_172_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "Beta"}},
  {FLT_CHARACTER, 0, {.value = 914}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_173_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "Gamma"}},
  {FLT_CHARACTER, 0, {.value = 915}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_174_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "Delta"}},
  {FLT_CHARACTER, 0, {.value = 916}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_175_6_arguments}},
  {FLT_STRING_8, 7, {.str_8 = "Epsilon"}},
  {FLT_CHARACTER, 0, {.value = 917}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_176_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "Zeta"}},
  {FLT_CHARACTER, 0, {.value = 918}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_177_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "Eta"}},
  {FLT_CHARACTER, 0, {.value = 919}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_178_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "Theta"}},
  {FLT_CHARACTER, 0, {.value = 920}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_179_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "Iota"}},
  {FLT_CHARACTER, 0, {.value = 921}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_180_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "Kappa"}},
  {FLT_CHARACTER, 0, {.value = 922}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_181_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "Lambda"}},
  {FLT_CHARACTER, 0, {.value = 923}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_182_6_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "Mu"}},
  {FLT_CHARACTER, 0, {.value = 924}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_183_6_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "Nu"}},
  {FLT_CHARACTER, 0, {.value = 925}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_184_6_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "Xi"}},
  {FLT_CHARACTER, 0, {.value = 926}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_185_6_arguments}},
  {FLT_STRING_8, 7, {.str_8 = "Omicron"}},
  {FLT_CHARACTER, 0, {.value = 927}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_186_6_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "Pi"}},
  {FLT_CHARACTER, 0, {.value = 928}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_187_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "Rho"}},
  {FLT_CHARACTER, 0, {.value = 929}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_188_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "Sigma"}},
  {FLT_CHARACTER, 0, {.value = 931}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_189_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "Tau"}},
  {FLT_CHARACTER, 0, {.value = 932}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_190_6_arguments}},
  {FLT_STRING_8, 7, {.str_8 = "Upsilon"}},
  {FLT_CHARACTER, 0, {.value = 933}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_191_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "Phi"}},
  {FLT_CHARACTER, 0, {.value = 934}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_192_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "Chi"}},
  {FLT_CHARACTER, 0, {.value = 935}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_193_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "Psi"}},
  {FLT_CHARACTER, 0, {.value = 936}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_194_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "Omega"}},
  {FLT_CHARACTER, 0, {.value = 937}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_195_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "alpha"}},
  {FLT_CHARACTER, 0, {.value = 945}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_196_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "beta"}},
  {FLT_CHARACTER, 0, {.value = 946}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_197_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "gamma"}},
  {FLT_CHARACTER, 0, {.value = 947}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_198_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "delta"}},
  {FLT_CHARACTER, 0, {.value = 948}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_199_6_arguments}},
  {FLT_STRING_8, 7, {.str_8 = "epsilon"}},
  {FLT_CHARACTER, 0, {.value = 949}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_200_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "zeta"}},
  {FLT_CHARACTER, 0, {.value = 950}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_201_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "eta"}},
  {FLT_CHARACTER, 0, {.value = 951}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_202_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "theta"}},
  {FLT_CHARACTER, 0, {.value = 952}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_203_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "iota"}},
  {FLT_CHARACTER, 0, {.value = 953}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_204_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "kappa"}},
  {FLT_CHARACTER, 0, {.value = 954}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_205_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "lambda"}},
  {FLT_CHARACTER, 0, {.value = 955}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_206_6_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "mu"}},
  {FLT_CHARACTER, 0, {.value = 956}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_207_6_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "nu"}},
  {FLT_CHARACTER, 0, {.value = 957}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_208_6_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "xi"}},
  {FLT_CHARACTER, 0, {.value = 958}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_209_6_arguments}},
  {FLT_STRING_8, 7, {.str_8 = "omicron"}},
  {FLT_CHARACTER, 0, {.value = 959}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_210_6_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "pi"}},
  {FLT_CHARACTER, 0, {.value = 960}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_211_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "rho"}},
  {FLT_CHARACTER, 0, {.value = 961}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_212_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "sigmaf"}},
  {FLT_CHARACTER, 0, {.value = 962}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_213_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "sigma"}},
  {FLT_CHARACTER, 0, {.value = 963}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_214_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "tau"}},
  {FLT_CHARACTER, 0, {.value = 964}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_215_6_arguments}},
  {FLT_STRING_8, 7, {.str_8 = "upsilon"}},
  {FLT_CHARACTER, 0, {.value = 965}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_216_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "phi"}},
  {FLT_CHARACTER, 0, {.value = 966}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_217_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "chi"}},
  {FLT_CHARACTER, 0, {.value = 967}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_218_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "psi"}},
  {FLT_CHARACTER, 0, {.value = 968}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_219_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "omega"}},
  {FLT_CHARACTER, 0, {.value = 969}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_220_6_arguments}},
  {FLT_STRING_8, 8, {.str_8 = "thetasym"}},
  {FLT_CHARACTER, 0, {.value = 977}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_221_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "upsih"}},
  {FLT_CHARACTER, 0, {.value = 978}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_222_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "piv"}},
  {FLT_CHARACTER, 0, {.value = 982}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_223_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "ensp"}},
  {FLT_CHARACTER, 0, {.value = 8194}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_224_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "emsp"}},
  {FLT_CHARACTER, 0, {.value = 8195}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_225_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "thinsp"}},
  {FLT_CHARACTER, 0, {.value = 8201}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_226_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "zwnj"}},
  {FLT_CHARACTER, 0, {.value = 8204}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_227_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "zwj"}},
  {FLT_CHARACTER, 0, {.value = 8205}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_228_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "lrm"}},
  {FLT_CHARACTER, 0, {.value = 8206}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_229_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "rlm"}},
  {FLT_CHARACTER, 0, {.value = 8207}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_230_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "ndash"}},
  {FLT_CHARACTER, 0, {.value = 8211}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_231_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "mdash"}},
  {FLT_CHARACTER, 0, {.value = 8212}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_232_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "lsquo"}},
  {FLT_CHARACTER, 0, {.value = 8216}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_233_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "rsquo"}},
  {FLT_CHARACTER, 0, {.value = 8217}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_234_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "sbquo"}},
  {FLT_CHARACTER, 0, {.value = 8218}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_235_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "ldquo"}},
  {FLT_CHARACTER, 0, {.value = 8220}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_236_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "rdquo"}},
  {FLT_CHARACTER, 0, {.value = 8221}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_237_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "bdquo"}},
  {FLT_CHARACTER, 0, {.value = 8222}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_238_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "dagger"}},
  {FLT_CHARACTER, 0, {.value = 8224}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_239_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "Dagger"}},
  {FLT_CHARACTER, 0, {.value = 8225}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_240_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "bull"}},
  {FLT_CHARACTER, 0, {.value = 8226}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_241_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "hellip"}},
  {FLT_CHARACTER, 0, {.value = 8230}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_242_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "permil"}},
  {FLT_CHARACTER, 0, {.value = 8240}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_243_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "prime"}},
  {FLT_CHARACTER, 0, {.value = 8242}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_244_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "Prime"}},
  {FLT_CHARACTER, 0, {.value = 8243}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_245_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "lsaquo"}},
  {FLT_CHARACTER, 0, {.value = 8249}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_246_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "rsaquo"}},
  {FLT_CHARACTER, 0, {.value = 8250}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_247_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "oline"}},
  {FLT_CHARACTER, 0, {.value = 8254}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_248_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "euro"}},
  {FLT_CHARACTER, 0, {.value = 8364}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_249_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "larr"}},
  {FLT_CHARACTER, 0, {.value = 8592}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_250_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "uarr"}},
  {FLT_CHARACTER, 0, {.value = 8593}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_251_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "rarr"}},
  {FLT_CHARACTER, 0, {.value = 8594}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_252_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "darr"}},
  {FLT_CHARACTER, 0, {.value = 8595}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_253_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "harr"}},
  {FLT_CHARACTER, 0, {.value = 8596}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_254_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "crarr"}},
  {FLT_CHARACTER, 0, {.value = 8629}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_255_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "forall"}},
  {FLT_CHARACTER, 0, {.value = 8704}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_256_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "part"}},
  {FLT_CHARACTER, 0, {.value = 8706}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_257_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "exist"}},
  {FLT_CHARACTER, 0, {.value = 8707}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_258_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "empty"}},
  {FLT_CHARACTER, 0, {.value = 8709}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_259_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "nabla"}},
  {FLT_CHARACTER, 0, {.value = 8711}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_260_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "isin"}},
  {FLT_CHARACTER, 0, {.value = 8712}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_261_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "notin"}},
  {FLT_CHARACTER, 0, {.value = 8713}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_262_6_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "ni"}},
  {FLT_CHARACTER, 0, {.value = 8715}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_263_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "prod"}},
  {FLT_CHARACTER, 0, {.value = 8719}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_264_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "sum"}},
  {FLT_CHARACTER, 0, {.value = 8721}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_265_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "minus"}},
  {FLT_CHARACTER, 0, {.value = 8722}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_266_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "lowast"}},
  {FLT_CHARACTER, 0, {.value = 8727}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_267_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "radic"}},
  {FLT_CHARACTER, 0, {.value = 8730}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_268_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "prop"}},
  {FLT_CHARACTER, 0, {.value = 8733}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_269_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "infin"}},
  {FLT_CHARACTER, 0, {.value = 8734}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_270_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "ang"}},
  {FLT_CHARACTER, 0, {.value = 8736}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_271_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "and"}},
  {FLT_CHARACTER, 0, {.value = 8743}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_272_6_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "or"}},
  {FLT_CHARACTER, 0, {.value = 8744}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_273_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "cap"}},
  {FLT_CHARACTER, 0, {.value = 8745}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_274_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "cup"}},
  {FLT_CHARACTER, 0, {.value = 8746}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_275_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "int"}},
  {FLT_CHARACTER, 0, {.value = 8747}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_276_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "there4"}},
  {FLT_CHARACTER, 0, {.value = 8756}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_277_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "sim"}},
  {FLT_CHARACTER, 0, {.value = 8764}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_278_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "cong"}},
  {FLT_CHARACTER, 0, {.value = 8773}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_279_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "asymp"}},
  {FLT_CHARACTER, 0, {.value = 8776}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_280_6_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "ne"}},
  {FLT_CHARACTER, 0, {.value = 8800}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_281_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "equiv"}},
  {FLT_CHARACTER, 0, {.value = 8801}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_282_6_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "le"}},
  {FLT_CHARACTER, 0, {.value = 8804}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_283_6_arguments}},
  {FLT_STRING_8, 2, {.str_8 = "ge"}},
  {FLT_CHARACTER, 0, {.value = 8805}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_284_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "subset"}},
  {FLT_CHARACTER, 0, {.value = 8834}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_285_6_arguments}},
  {FLT_STRING_8, 8, {.str_8 = "superset"}},
  {FLT_CHARACTER, 0, {.value = 8835}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_286_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "nsub"}},
  {FLT_CHARACTER, 0, {.value = 8836}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_287_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "sube"}},
  {FLT_CHARACTER, 0, {.value = 8838}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_288_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "supe"}},
  {FLT_CHARACTER, 0, {.value = 8839}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_289_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "oplus"}},
  {FLT_CHARACTER, 0, {.value = 8853}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_290_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "otimes"}},
  {FLT_CHARACTER, 0, {.value = 8855}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_291_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "perp"}},
  {FLT_CHARACTER, 0, {.value = 8869}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_292_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "sdot"}},
  {FLT_CHARACTER, 0, {.value = 8901}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_293_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "lceil"}},
  {FLT_CHARACTER, 0, {.value = 8968}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_294_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "rceil"}},
  {FLT_CHARACTER, 0, {.value = 8969}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_295_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "lfloor"}},
  {FLT_CHARACTER, 0, {.value = 8970}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_296_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "rfloor"}},
  {FLT_CHARACTER, 0, {.value = 8971}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_297_6_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "loz"}},
  {FLT_CHARACTER, 0, {.value = 9674}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_298_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "spades"}},
  {FLT_CHARACTER, 0, {.value = 9824}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_299_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "clubs"}},
  {FLT_CHARACTER, 0, {.value = 9827}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_300_6_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "hearts"}},
  {FLT_CHARACTER, 0, {.value = 9829}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_301_6_arguments}},
  {FLT_STRING_8, 5, {.str_8 = "diams"}},
  {FLT_CHARACTER, 0, {.value = 9830}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_302_6_arguments}}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_INITIALIZED, 0, 0,
    "get_character_names\000funky", NULL,
    {.const_idx = -func_funky__get_character_names}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value_pair\000std", NULL,
    {.position = POS(27, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hash_table\000", NULL,
    {.position = POS(26, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(25, 1)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__character_names = {
  "_character_names", // module name
  "character_names.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  827, // number of constants
  4, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
