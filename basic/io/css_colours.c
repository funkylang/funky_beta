#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  chr_15792383 = -1,
  chr_16444375 = -2,
  chr_65535 = -3,
  chr_8388564 = -4,
  chr_15794175 = -5,
  chr_16119260 = -6,
  chr_16770244 = -7,
  chr_16772045 = -8,
  chr_9055202 = -9,
  chr_10824234 = -10,
  chr_14596231 = -11,
  chr_6266528 = -12,
  chr_8388352 = -13,
  chr_13789470 = -14,
  chr_16744272 = -15,
  chr_6591981 = -16,
  chr_16775388 = -17,
  chr_14423100 = -18,
  chr_139 = -19,
  chr_35723 = -20,
  chr_12092939 = -21,
  chr_11119017 = -22,
  chr_25600 = -23,
  chr_12433259 = -24,
  chr_9109643 = -25,
  chr_5597999 = -26,
  chr_16747520 = -27,
  chr_10040012 = -28,
  chr_9109504 = -29,
  chr_15308410 = -30,
  chr_9419919 = -31,
  chr_4734347 = -32,
  chr_3100495 = -33,
  chr_52945 = -34,
  chr_9699539 = -35,
  chr_16716947 = -36,
  chr_49151 = -37,
  chr_6908265 = -38,
  chr_2003199 = -39,
  chr_11674146 = -40,
  chr_16775920 = -41,
  chr_2263842 = -42,
  chr_16711935 = -43,
  chr_14474460 = -44,
  chr_16316671 = -45,
  chr_16766720 = -46,
  chr_14329120 = -47,
  chr_11403055 = -48,
  chr_15794160 = -49,
  chr_16738740 = -50,
  chr_13458524 = -51,
  chr_4915330 = -52,
  chr_16777200 = -53,
  chr_15787660 = -54,
  chr_15132410 = -55,
  chr_16773365 = -56,
  chr_8190976 = -57,
  chr_16775885 = -58,
  chr_11393254 = -59,
  chr_15761536 = -60,
  chr_14745599 = -61,
  chr_16448210 = -62,
  chr_13882323 = -63,
  chr_9498256 = -64,
  chr_16758465 = -65,
  chr_16752762 = -66,
  chr_2142890 = -67,
  chr_8900346 = -68,
  chr_7833753 = -69,
  chr_11584734 = -70,
  chr_16777184 = -71,
  chr_65280 = -72,
  chr_3329330 = -73,
  chr_16445670 = -74,
  chr_8388608 = -75,
  chr_6737322 = -76,
  chr_205 = -77,
  chr_12211667 = -78,
  chr_9662683 = -79,
  chr_3978097 = -80,
  chr_8087790 = -81,
  chr_64154 = -82,
  chr_4772300 = -83,
  chr_13047173 = -84,
  chr_1644912 = -85,
  chr_16121850 = -86,
  chr_16770273 = -87,
  chr_16770229 = -88,
  chr_16768685 = -89,
  chr_128 = -90,
  chr_16643558 = -91,
  chr_8421376 = -92,
  chr_7048739 = -93,
  chr_16753920 = -94,
  chr_16729344 = -95,
  chr_14315734 = -96,
  chr_15657130 = -97,
  chr_10025880 = -98,
  chr_11529966 = -99,
  chr_14381203 = -100,
  chr_16773077 = -101,
  chr_16767673 = -102,
  chr_13468991 = -103,
  chr_16761035 = -104,
  chr_14524637 = -105,
  chr_11591910 = -106,
  chr_8388736 = -107,
  chr_6697881 = -108,
  chr_12357519 = -109,
  chr_4286945 = -110,
  chr_9127187 = -111,
  chr_16416882 = -112,
  chr_16032864 = -113,
  chr_3050327 = -114,
  chr_16774638 = -115,
  chr_10506797 = -116,
  chr_12632256 = -117,
  chr_8900331 = -118,
  chr_6970061 = -119,
  chr_7372944 = -120,
  chr_16775930 = -121,
  chr_65407 = -122,
  chr_4620980 = -123,
  chr_13808780 = -124,
  chr_32896 = -125,
  chr_14204888 = -126,
  chr_16737095 = -127,
  chr_4251856 = -128,
  chr_15631086 = -129,
  chr_16113331 = -130,
  chr_16119285 = -131,
  chr_10145074 = -132
};

enum {
  var__START = FIRST_VAR-1,
  var_std__ALICEBLUE, // initialized
  var_std__assign, // extern
  var_std__ANTIQUEWHITE, // initialized
  var_std__AQUA, // initialized
  var_std__AQUAMARINE, // initialized
  var_std__AZURE, // initialized
  var_std__BEIGE, // initialized
  var_std__BISQUE, // initialized
  var_std__BLANCHEDALMOND, // initialized
  var_std__BLUEVIOLET, // initialized
  var_std__BROWN, // initialized
  var_std__BURLYWOOD, // initialized
  var_std__CADETBLUE, // initialized
  var_std__CHARTREUSE, // initialized
  var_std__CHOCOLATE, // initialized
  var_std__CORAL, // initialized
  var_std__CORNFLOWERBLUE, // initialized
  var_std__CORNSILK, // initialized
  var_std__CRIMSON, // initialized
  var_std__DARKBLUE, // initialized
  var_std__DARKCYAN, // initialized
  var_std__DARKGOLDENROD, // initialized
  var_std__DARKGRAY, // initialized
  var_std__DARKGREEN, // initialized
  var_std__DARKGREY, // initialized
  var_std__DARKKHAKI, // initialized
  var_std__DARKMAGENTA, // initialized
  var_std__DARKOLIVEGREEN, // initialized
  var_std__DARKORANGE, // initialized
  var_std__DARKORCHID, // initialized
  var_std__DARKRED, // initialized
  var_std__DARKSALMON, // initialized
  var_std__DARKSEAGREEN, // initialized
  var_std__DARKSLATEBLUE, // initialized
  var_std__DARKSLATEGRAY, // initialized
  var_std__DARKSLATEGREY, // initialized
  var_std__DARKTURQUOISE, // initialized
  var_std__DARKVIOLET, // initialized
  var_std__DEEPPINK, // initialized
  var_std__DEEPSKYBLUE, // initialized
  var_std__DIMGRAY, // initialized
  var_std__DIMGREY, // initialized
  var_std__DODGERBLUE, // initialized
  var_std__FIREBRICK, // initialized
  var_std__FLORALWHITE, // initialized
  var_std__FORESTGREEN, // initialized
  var_std__FUCHSIA, // initialized
  var_std__GAINSBORO, // initialized
  var_std__GHOSTWHITE, // initialized
  var_std__GOLD, // initialized
  var_std__GOLDENROD, // initialized
  var_std__GREENYELLOW, // initialized
  var_std__HONEYDEW, // initialized
  var_std__HOTPINK, // initialized
  var_std__INDIANRED, // initialized
  var_std__INDIGO, // initialized
  var_std__IVORY, // initialized
  var_std__KHAKI, // initialized
  var_std__LAVENDER, // initialized
  var_std__LAVENDERBLUSH, // initialized
  var_std__LAWNGREEN, // initialized
  var_std__LEMONCHIFFON, // initialized
  var_std__LIGHTBLUE, // initialized
  var_std__LIGHTCORAL, // initialized
  var_std__LIGHTCYAN, // initialized
  var_std__LIGHTGOLDENRODYELLOW, // initialized
  var_std__LIGHTGRAY, // initialized
  var_std__LIGHTGREEN, // initialized
  var_std__LIGHTGREY, // initialized
  var_std__LIGHTPINK, // initialized
  var_std__LIGHTSALMON, // initialized
  var_std__LIGHTSEAGREEN, // initialized
  var_std__LIGHTSKYBLUE, // initialized
  var_std__LIGHTSLATEGRAY, // initialized
  var_std__LIGHTSLATEGREY, // initialized
  var_std__LIGHTSTEELBLUE, // initialized
  var_std__LIGHTYELLOW, // initialized
  var_std__LIME, // initialized
  var_std__LIMEGREEN, // initialized
  var_std__LINEN, // initialized
  var_std__MAROON, // initialized
  var_std__MEDIUMAQUAMARINE, // initialized
  var_std__MEDIUMBLUE, // initialized
  var_std__MEDIUMORCHID, // initialized
  var_std__MEDIUMPURPLE, // initialized
  var_std__MEDIUMSEAGREEN, // initialized
  var_std__MEDIUMSLATEBLUE, // initialized
  var_std__MEDIUMSPRINGGREEN, // initialized
  var_std__MEDIUMTURQUOISE, // initialized
  var_std__MEDIUMVIOLETRED, // initialized
  var_std__MIDNIGHTBLUE, // initialized
  var_std__MINTCREAM, // initialized
  var_std__MISTYROSE, // initialized
  var_std__MOCCASIN, // initialized
  var_std__NAVAJOWHITE, // initialized
  var_std__NAVY, // initialized
  var_std__OLDLACE, // initialized
  var_std__OLIVE, // initialized
  var_std__OLIVEDRAB, // initialized
  var_std__ORANGE, // initialized
  var_std__ORANGERED, // initialized
  var_std__ORCHID, // initialized
  var_std__PALEGOLDENROD, // initialized
  var_std__PALEGREEN, // initialized
  var_std__PALETURQUOISE, // initialized
  var_std__PALEVIOLETRED, // initialized
  var_std__PAPAYAWHIP, // initialized
  var_std__PEACHPUFF, // initialized
  var_std__PERU, // initialized
  var_std__PINK, // initialized
  var_std__PLUM, // initialized
  var_std__POWDERBLUE, // initialized
  var_std__PURPLE, // initialized
  var_std__REBECCAPURPLE, // initialized
  var_std__ROSYBROWN, // initialized
  var_std__ROYALBLUE, // initialized
  var_std__SADDLEBROWN, // initialized
  var_std__SALMON, // initialized
  var_std__SANDYBROWN, // initialized
  var_std__SEAGREEN, // initialized
  var_std__SEASHELL, // initialized
  var_std__SIENNA, // initialized
  var_std__SILVER, // initialized
  var_std__SKYBLUE, // initialized
  var_std__SLATEBLUE, // initialized
  var_std__SLATEGRAY, // initialized
  var_std__SLATEGREY, // initialized
  var_std__SNOW, // initialized
  var_std__SPRINGGREEN, // initialized
  var_std__STEELBLUE, // initialized
  var_std__TAN, // initialized
  var_std__TEAL, // initialized
  var_std__THISTLE, // initialized
  var_std__TOMATO, // initialized
  var_std__TURQUOISE, // initialized
  var_std__VIOLET, // initialized
  var_std__WHEAT, // initialized
  var_std__WHITESMOKE, // initialized
  var_std__YELLOWGREEN, // initialized
  var__END
};


static FUNKY_CONSTANT constants_table[] = {
  {FLT_CHARACTER, 0, {.value = 15792383}},
  {FLT_CHARACTER, 0, {.value = 16444375}},
  {FLT_CHARACTER, 0, {.value = 65535}},
  {FLT_CHARACTER, 0, {.value = 8388564}},
  {FLT_CHARACTER, 0, {.value = 15794175}},
  {FLT_CHARACTER, 0, {.value = 16119260}},
  {FLT_CHARACTER, 0, {.value = 16770244}},
  {FLT_CHARACTER, 0, {.value = 16772045}},
  {FLT_CHARACTER, 0, {.value = 9055202}},
  {FLT_CHARACTER, 0, {.value = 10824234}},
  {FLT_CHARACTER, 0, {.value = 14596231}},
  {FLT_CHARACTER, 0, {.value = 6266528}},
  {FLT_CHARACTER, 0, {.value = 8388352}},
  {FLT_CHARACTER, 0, {.value = 13789470}},
  {FLT_CHARACTER, 0, {.value = 16744272}},
  {FLT_CHARACTER, 0, {.value = 6591981}},
  {FLT_CHARACTER, 0, {.value = 16775388}},
  {FLT_CHARACTER, 0, {.value = 14423100}},
  {FLT_CHARACTER, 0, {.value = 139}},
  {FLT_CHARACTER, 0, {.value = 35723}},
  {FLT_CHARACTER, 0, {.value = 12092939}},
  {FLT_CHARACTER, 0, {.value = 11119017}},
  {FLT_CHARACTER, 0, {.value = 25600}},
  {FLT_CHARACTER, 0, {.value = 12433259}},
  {FLT_CHARACTER, 0, {.value = 9109643}},
  {FLT_CHARACTER, 0, {.value = 5597999}},
  {FLT_CHARACTER, 0, {.value = 16747520}},
  {FLT_CHARACTER, 0, {.value = 10040012}},
  {FLT_CHARACTER, 0, {.value = 9109504}},
  {FLT_CHARACTER, 0, {.value = 15308410}},
  {FLT_CHARACTER, 0, {.value = 9419919}},
  {FLT_CHARACTER, 0, {.value = 4734347}},
  {FLT_CHARACTER, 0, {.value = 3100495}},
  {FLT_CHARACTER, 0, {.value = 52945}},
  {FLT_CHARACTER, 0, {.value = 9699539}},
  {FLT_CHARACTER, 0, {.value = 16716947}},
  {FLT_CHARACTER, 0, {.value = 49151}},
  {FLT_CHARACTER, 0, {.value = 6908265}},
  {FLT_CHARACTER, 0, {.value = 2003199}},
  {FLT_CHARACTER, 0, {.value = 11674146}},
  {FLT_CHARACTER, 0, {.value = 16775920}},
  {FLT_CHARACTER, 0, {.value = 2263842}},
  {FLT_CHARACTER, 0, {.value = 16711935}},
  {FLT_CHARACTER, 0, {.value = 14474460}},
  {FLT_CHARACTER, 0, {.value = 16316671}},
  {FLT_CHARACTER, 0, {.value = 16766720}},
  {FLT_CHARACTER, 0, {.value = 14329120}},
  {FLT_CHARACTER, 0, {.value = 11403055}},
  {FLT_CHARACTER, 0, {.value = 15794160}},
  {FLT_CHARACTER, 0, {.value = 16738740}},
  {FLT_CHARACTER, 0, {.value = 13458524}},
  {FLT_CHARACTER, 0, {.value = 4915330}},
  {FLT_CHARACTER, 0, {.value = 16777200}},
  {FLT_CHARACTER, 0, {.value = 15787660}},
  {FLT_CHARACTER, 0, {.value = 15132410}},
  {FLT_CHARACTER, 0, {.value = 16773365}},
  {FLT_CHARACTER, 0, {.value = 8190976}},
  {FLT_CHARACTER, 0, {.value = 16775885}},
  {FLT_CHARACTER, 0, {.value = 11393254}},
  {FLT_CHARACTER, 0, {.value = 15761536}},
  {FLT_CHARACTER, 0, {.value = 14745599}},
  {FLT_CHARACTER, 0, {.value = 16448210}},
  {FLT_CHARACTER, 0, {.value = 13882323}},
  {FLT_CHARACTER, 0, {.value = 9498256}},
  {FLT_CHARACTER, 0, {.value = 16758465}},
  {FLT_CHARACTER, 0, {.value = 16752762}},
  {FLT_CHARACTER, 0, {.value = 2142890}},
  {FLT_CHARACTER, 0, {.value = 8900346}},
  {FLT_CHARACTER, 0, {.value = 7833753}},
  {FLT_CHARACTER, 0, {.value = 11584734}},
  {FLT_CHARACTER, 0, {.value = 16777184}},
  {FLT_CHARACTER, 0, {.value = 65280}},
  {FLT_CHARACTER, 0, {.value = 3329330}},
  {FLT_CHARACTER, 0, {.value = 16445670}},
  {FLT_CHARACTER, 0, {.value = 8388608}},
  {FLT_CHARACTER, 0, {.value = 6737322}},
  {FLT_CHARACTER, 0, {.value = 205}},
  {FLT_CHARACTER, 0, {.value = 12211667}},
  {FLT_CHARACTER, 0, {.value = 9662683}},
  {FLT_CHARACTER, 0, {.value = 3978097}},
  {FLT_CHARACTER, 0, {.value = 8087790}},
  {FLT_CHARACTER, 0, {.value = 64154}},
  {FLT_CHARACTER, 0, {.value = 4772300}},
  {FLT_CHARACTER, 0, {.value = 13047173}},
  {FLT_CHARACTER, 0, {.value = 1644912}},
  {FLT_CHARACTER, 0, {.value = 16121850}},
  {FLT_CHARACTER, 0, {.value = 16770273}},
  {FLT_CHARACTER, 0, {.value = 16770229}},
  {FLT_CHARACTER, 0, {.value = 16768685}},
  {FLT_CHARACTER, 0, {.value = 128}},
  {FLT_CHARACTER, 0, {.value = 16643558}},
  {FLT_CHARACTER, 0, {.value = 8421376}},
  {FLT_CHARACTER, 0, {.value = 7048739}},
  {FLT_CHARACTER, 0, {.value = 16753920}},
  {FLT_CHARACTER, 0, {.value = 16729344}},
  {FLT_CHARACTER, 0, {.value = 14315734}},
  {FLT_CHARACTER, 0, {.value = 15657130}},
  {FLT_CHARACTER, 0, {.value = 10025880}},
  {FLT_CHARACTER, 0, {.value = 11529966}},
  {FLT_CHARACTER, 0, {.value = 14381203}},
  {FLT_CHARACTER, 0, {.value = 16773077}},
  {FLT_CHARACTER, 0, {.value = 16767673}},
  {FLT_CHARACTER, 0, {.value = 13468991}},
  {FLT_CHARACTER, 0, {.value = 16761035}},
  {FLT_CHARACTER, 0, {.value = 14524637}},
  {FLT_CHARACTER, 0, {.value = 11591910}},
  {FLT_CHARACTER, 0, {.value = 8388736}},
  {FLT_CHARACTER, 0, {.value = 6697881}},
  {FLT_CHARACTER, 0, {.value = 12357519}},
  {FLT_CHARACTER, 0, {.value = 4286945}},
  {FLT_CHARACTER, 0, {.value = 9127187}},
  {FLT_CHARACTER, 0, {.value = 16416882}},
  {FLT_CHARACTER, 0, {.value = 16032864}},
  {FLT_CHARACTER, 0, {.value = 3050327}},
  {FLT_CHARACTER, 0, {.value = 16774638}},
  {FLT_CHARACTER, 0, {.value = 10506797}},
  {FLT_CHARACTER, 0, {.value = 12632256}},
  {FLT_CHARACTER, 0, {.value = 8900331}},
  {FLT_CHARACTER, 0, {.value = 6970061}},
  {FLT_CHARACTER, 0, {.value = 7372944}},
  {FLT_CHARACTER, 0, {.value = 16775930}},
  {FLT_CHARACTER, 0, {.value = 65407}},
  {FLT_CHARACTER, 0, {.value = 4620980}},
  {FLT_CHARACTER, 0, {.value = 13808780}},
  {FLT_CHARACTER, 0, {.value = 32896}},
  {FLT_CHARACTER, 0, {.value = 14204888}},
  {FLT_CHARACTER, 0, {.value = 16737095}},
  {FLT_CHARACTER, 0, {.value = 4251856}},
  {FLT_CHARACTER, 0, {.value = 15631086}},
  {FLT_CHARACTER, 0, {.value = 16113331}},
  {FLT_CHARACTER, 0, {.value = 16119285}},
  {FLT_CHARACTER, 0, {.value = 10145074}}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_INITIALIZED, 0, 0,
    "ALICEBLUE\000std", NULL,
    {.const_idx = -chr_15792383}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(26, 1)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ANTIQUEWHITE\000std", NULL,
    {.const_idx = -chr_16444375}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "AQUA\000std", NULL,
    {.const_idx = -chr_65535}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "AQUAMARINE\000std", NULL,
    {.const_idx = -chr_8388564}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "AZURE\000std", NULL,
    {.const_idx = -chr_15794175}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "BEIGE\000std", NULL,
    {.const_idx = -chr_16119260}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "BISQUE\000std", NULL,
    {.const_idx = -chr_16770244}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "BLANCHEDALMOND\000std", NULL,
    {.const_idx = -chr_16772045}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "BLUEVIOLET\000std", NULL,
    {.const_idx = -chr_9055202}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "BROWN\000std", NULL,
    {.const_idx = -chr_10824234}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "BURLYWOOD\000std", NULL,
    {.const_idx = -chr_14596231}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "CADETBLUE\000std", NULL,
    {.const_idx = -chr_6266528}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "CHARTREUSE\000std", NULL,
    {.const_idx = -chr_8388352}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "CHOCOLATE\000std", NULL,
    {.const_idx = -chr_13789470}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "CORAL\000std", NULL,
    {.const_idx = -chr_16744272}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "CORNFLOWERBLUE\000std", NULL,
    {.const_idx = -chr_6591981}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "CORNSILK\000std", NULL,
    {.const_idx = -chr_16775388}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "CRIMSON\000std", NULL,
    {.const_idx = -chr_14423100}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DARKBLUE\000std", NULL,
    {.const_idx = -chr_139}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DARKCYAN\000std", NULL,
    {.const_idx = -chr_35723}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DARKGOLDENROD\000std", NULL,
    {.const_idx = -chr_12092939}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DARKGRAY\000std", NULL,
    {.const_idx = -chr_11119017}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DARKGREEN\000std", NULL,
    {.const_idx = -chr_25600}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DARKGREY\000std", NULL,
    {.const_idx = -chr_11119017}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DARKKHAKI\000std", NULL,
    {.const_idx = -chr_12433259}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DARKMAGENTA\000std", NULL,
    {.const_idx = -chr_9109643}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DARKOLIVEGREEN\000std", NULL,
    {.const_idx = -chr_5597999}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DARKORANGE\000std", NULL,
    {.const_idx = -chr_16747520}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DARKORCHID\000std", NULL,
    {.const_idx = -chr_10040012}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DARKRED\000std", NULL,
    {.const_idx = -chr_9109504}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DARKSALMON\000std", NULL,
    {.const_idx = -chr_15308410}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DARKSEAGREEN\000std", NULL,
    {.const_idx = -chr_9419919}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DARKSLATEBLUE\000std", NULL,
    {.const_idx = -chr_4734347}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DARKSLATEGRAY\000std", NULL,
    {.const_idx = -chr_3100495}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DARKSLATEGREY\000std", NULL,
    {.const_idx = -chr_3100495}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DARKTURQUOISE\000std", NULL,
    {.const_idx = -chr_52945}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DARKVIOLET\000std", NULL,
    {.const_idx = -chr_9699539}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DEEPPINK\000std", NULL,
    {.const_idx = -chr_16716947}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DEEPSKYBLUE\000std", NULL,
    {.const_idx = -chr_49151}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DIMGRAY\000std", NULL,
    {.const_idx = -chr_6908265}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DIMGREY\000std", NULL,
    {.const_idx = -chr_6908265}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DODGERBLUE\000std", NULL,
    {.const_idx = -chr_2003199}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "FIREBRICK\000std", NULL,
    {.const_idx = -chr_11674146}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "FLORALWHITE\000std", NULL,
    {.const_idx = -chr_16775920}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "FORESTGREEN\000std", NULL,
    {.const_idx = -chr_2263842}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "FUCHSIA\000std", NULL,
    {.const_idx = -chr_16711935}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "GAINSBORO\000std", NULL,
    {.const_idx = -chr_14474460}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "GHOSTWHITE\000std", NULL,
    {.const_idx = -chr_16316671}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "GOLD\000std", NULL,
    {.const_idx = -chr_16766720}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "GOLDENROD\000std", NULL,
    {.const_idx = -chr_14329120}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "GREENYELLOW\000std", NULL,
    {.const_idx = -chr_11403055}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "HONEYDEW\000std", NULL,
    {.const_idx = -chr_15794160}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "HOTPINK\000std", NULL,
    {.const_idx = -chr_16738740}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "INDIANRED\000std", NULL,
    {.const_idx = -chr_13458524}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "INDIGO\000std", NULL,
    {.const_idx = -chr_4915330}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "IVORY\000std", NULL,
    {.const_idx = -chr_16777200}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "KHAKI\000std", NULL,
    {.const_idx = -chr_15787660}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LAVENDER\000std", NULL,
    {.const_idx = -chr_15132410}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LAVENDERBLUSH\000std", NULL,
    {.const_idx = -chr_16773365}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LAWNGREEN\000std", NULL,
    {.const_idx = -chr_8190976}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LEMONCHIFFON\000std", NULL,
    {.const_idx = -chr_16775885}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LIGHTBLUE\000std", NULL,
    {.const_idx = -chr_11393254}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LIGHTCORAL\000std", NULL,
    {.const_idx = -chr_15761536}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LIGHTCYAN\000std", NULL,
    {.const_idx = -chr_14745599}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LIGHTGOLDENRODYELLOW\000std", NULL,
    {.const_idx = -chr_16448210}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LIGHTGRAY\000std", NULL,
    {.const_idx = -chr_13882323}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LIGHTGREEN\000std", NULL,
    {.const_idx = -chr_9498256}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LIGHTGREY\000std", NULL,
    {.const_idx = -chr_13882323}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LIGHTPINK\000std", NULL,
    {.const_idx = -chr_16758465}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LIGHTSALMON\000std", NULL,
    {.const_idx = -chr_16752762}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LIGHTSEAGREEN\000std", NULL,
    {.const_idx = -chr_2142890}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LIGHTSKYBLUE\000std", NULL,
    {.const_idx = -chr_8900346}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LIGHTSLATEGRAY\000std", NULL,
    {.const_idx = -chr_7833753}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LIGHTSLATEGREY\000std", NULL,
    {.const_idx = -chr_7833753}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LIGHTSTEELBLUE\000std", NULL,
    {.const_idx = -chr_11584734}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LIGHTYELLOW\000std", NULL,
    {.const_idx = -chr_16777184}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LIME\000std", NULL,
    {.const_idx = -chr_65280}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LIMEGREEN\000std", NULL,
    {.const_idx = -chr_3329330}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LINEN\000std", NULL,
    {.const_idx = -chr_16445670}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MAROON\000std", NULL,
    {.const_idx = -chr_8388608}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MEDIUMAQUAMARINE\000std", NULL,
    {.const_idx = -chr_6737322}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MEDIUMBLUE\000std", NULL,
    {.const_idx = -chr_205}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MEDIUMORCHID\000std", NULL,
    {.const_idx = -chr_12211667}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MEDIUMPURPLE\000std", NULL,
    {.const_idx = -chr_9662683}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MEDIUMSEAGREEN\000std", NULL,
    {.const_idx = -chr_3978097}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MEDIUMSLATEBLUE\000std", NULL,
    {.const_idx = -chr_8087790}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MEDIUMSPRINGGREEN\000std", NULL,
    {.const_idx = -chr_64154}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MEDIUMTURQUOISE\000std", NULL,
    {.const_idx = -chr_4772300}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MEDIUMVIOLETRED\000std", NULL,
    {.const_idx = -chr_13047173}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MIDNIGHTBLUE\000std", NULL,
    {.const_idx = -chr_1644912}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MINTCREAM\000std", NULL,
    {.const_idx = -chr_16121850}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MISTYROSE\000std", NULL,
    {.const_idx = -chr_16770273}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MOCCASIN\000std", NULL,
    {.const_idx = -chr_16770229}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "NAVAJOWHITE\000std", NULL,
    {.const_idx = -chr_16768685}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "NAVY\000std", NULL,
    {.const_idx = -chr_128}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "OLDLACE\000std", NULL,
    {.const_idx = -chr_16643558}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "OLIVE\000std", NULL,
    {.const_idx = -chr_8421376}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "OLIVEDRAB\000std", NULL,
    {.const_idx = -chr_7048739}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ORANGE\000std", NULL,
    {.const_idx = -chr_16753920}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ORANGERED\000std", NULL,
    {.const_idx = -chr_16729344}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ORCHID\000std", NULL,
    {.const_idx = -chr_14315734}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "PALEGOLDENROD\000std", NULL,
    {.const_idx = -chr_15657130}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "PALEGREEN\000std", NULL,
    {.const_idx = -chr_10025880}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "PALETURQUOISE\000std", NULL,
    {.const_idx = -chr_11529966}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "PALEVIOLETRED\000std", NULL,
    {.const_idx = -chr_14381203}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "PAPAYAWHIP\000std", NULL,
    {.const_idx = -chr_16773077}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "PEACHPUFF\000std", NULL,
    {.const_idx = -chr_16767673}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "PERU\000std", NULL,
    {.const_idx = -chr_13468991}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "PINK\000std", NULL,
    {.const_idx = -chr_16761035}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "PLUM\000std", NULL,
    {.const_idx = -chr_14524637}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "POWDERBLUE\000std", NULL,
    {.const_idx = -chr_11591910}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "PURPLE\000std", NULL,
    {.const_idx = -chr_8388736}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "REBECCAPURPLE\000std", NULL,
    {.const_idx = -chr_6697881}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ROSYBROWN\000std", NULL,
    {.const_idx = -chr_12357519}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ROYALBLUE\000std", NULL,
    {.const_idx = -chr_4286945}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SADDLEBROWN\000std", NULL,
    {.const_idx = -chr_9127187}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SALMON\000std", NULL,
    {.const_idx = -chr_16416882}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SANDYBROWN\000std", NULL,
    {.const_idx = -chr_16032864}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SEAGREEN\000std", NULL,
    {.const_idx = -chr_3050327}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SEASHELL\000std", NULL,
    {.const_idx = -chr_16774638}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SIENNA\000std", NULL,
    {.const_idx = -chr_10506797}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SILVER\000std", NULL,
    {.const_idx = -chr_12632256}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SKYBLUE\000std", NULL,
    {.const_idx = -chr_8900331}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SLATEBLUE\000std", NULL,
    {.const_idx = -chr_6970061}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SLATEGRAY\000std", NULL,
    {.const_idx = -chr_7372944}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SLATEGREY\000std", NULL,
    {.const_idx = -chr_7372944}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SNOW\000std", NULL,
    {.const_idx = -chr_16775930}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SPRINGGREEN\000std", NULL,
    {.const_idx = -chr_65407}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "STEELBLUE\000std", NULL,
    {.const_idx = -chr_4620980}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "TAN\000std", NULL,
    {.const_idx = -chr_13808780}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "TEAL\000std", NULL,
    {.const_idx = -chr_32896}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "THISTLE\000std", NULL,
    {.const_idx = -chr_14204888}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "TOMATO\000std", NULL,
    {.const_idx = -chr_16737095}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "TURQUOISE\000std", NULL,
    {.const_idx = -chr_4251856}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "VIOLET\000std", NULL,
    {.const_idx = -chr_15631086}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "WHEAT\000std", NULL,
    {.const_idx = -chr_16113331}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "WHITESMOKE\000std", NULL,
    {.const_idx = -chr_16119285}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "YELLOWGREEN\000std", NULL,
    {.const_idx = -chr_10145074}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__io__css_colours = {
  "_basic__io__css_colours", // module name
  "basic/io/css_colours.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  132, // number of constants
  139, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
