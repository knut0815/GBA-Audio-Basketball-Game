const u16 ball_palette[]={
  0x7c1f,0x0000,0x14a5,0x0001,0x0003,0x14a7,0x1937,0x1938,0x1513,0x1116,0x0cf8,0x04b5,0x14c9,0x361c,0x1138,0x08f7,0x0026,0x00b6,0x1d0b,0x2198,
  0x21b9,0x1957,0x1978,0x1535,0x0cf1,0x1537,0x08af,0x0d17,0x0d18,0x04d7,0x5b1f,0x199a,0x00d5,0x1954,0x1533,0x1557,0x1579,0x117a,0x1159,0x117c,
  0x006b,0x2df9,0x1951,0x2195,0x150f,0x1555,0x4add,0x29d4,0x14eb,0x10ed,0x21fd,0x1dfe,0x19bc,0x159b,0x15bc,0x0d7b,0x0d9d,0x3a59,0x2192,0x15dd,
  0x15de,0x11bd,0x0d9b,0x08aa,0x3215,0x46ba,0x2190,0x1d4e,0x639f,0x214c,0x4ef9,0x4297,0x3a54,0x29d1,0x573b,0x3212,0x258e,0x6bbe,0x679d,0x637c,
  0x0485,0x5f7c,0x639d,0x1109,0x194b,0x04c7,0x5f5b,0x152a,0x77ff,0x6bde,0x21ce,0x679c,0x637b,0x67bd,0x639c,0x5f9c,0x0021,0x0063,0x6bbd,0x0ce6,
  0x08c5,0x10e7,0x67dd,0x63bc,0x6bdd,0x67bc,0x1528,0x00a4,0x639b,0x0cc5,0x0483,0x19cb,0x15aa,0x0883,0x1dcb,0x1107,0x1189,0x0d68,0x0462,0x08e5,
  0x19aa,0x222d,0x1589,0x19eb,0x15ca,0x10c5,0x0ca4,0x11a9,0x0d88,0x0041,0x1dec,0x0ce5,0x19ca,0x1147,0x15a9,0x08c4,0x0d26,0x1188,0x0905,0x04a3,
  0x04e4,0x0082,0x00c3,0x1507,0x1167,0x15c9,0x0966,0x19ea,0x11a8,0x0d46,0x0d87,0x1588,0x0925,0x0524,0x0545,0x00e3,0x21aa,0x1547,0x1567,0x1126,
  0x0d05,0x08e4,0x04c3,0x00a2,0x19a9,0x19c9,0x15a8,0x1dea,0x0945,0x10e5,0x0cc4,0x08a3,0x1146,0x1587,0x0d25,0x0482,0x0904,0x04e3,0x0061,0x00c2,
  0x1166,0x0924,0x1526,0x1105,0x0ce4,0x08c3,0x04a2,0x0081,0x00e2,0x0903,0x1546,0x1125,0x0d04,0x08e3,0x04c2,0x00a1,0x1947,0x1566,0x1145,0x0d24,
  0x04e2,0x14e5,0x04c1,0x14c5,0x0862,0x10c4,0x1926,0x1505,0x0ca3,0x0441,0x10e4,0x1525,0x0882,0x0cc3,0x1104,0x1124,0x0ce3,0x08a2,0x0461,0x08c2,
  0x0020,0x0481,0x08e2,0x04a1,0x0040,0x0060,0x0080,0x00a0,0x0c83,0x1945,0x1524,0x1103,0x0ce2,0x04a0,0x1504,0x0cc2,0x08a1,0x08c1,0x0480,0x1925,
  0x10e3,0x14e4,0x0ca2,0x0881,0x0460,0x0c82,0x0861,0x0ca1,0x0440,0x0880,0x0420,0x1cc5,0x18a5,0x2108,0x1064,0x18c6};

const u16 ball_data[]={
  0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
  0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2f2f,0x2b2f,0x2121,
  0x2121,0x2121,0x132f,0x000d,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
  0x0000,0x0000,0x2f00,0x1313,0x2121,0x2117,0x152d,0x062d,0x152d,0x2d2d,0x2117,0x2f3a,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
  0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2c3a,0x2106,0x1515,0x2315,0x1515,0x2315,0x2315,0x2315,0x2315,0x2d2b,0x2f2b,
  0x002f,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2c13,0x1512,0x152d,0x1523,0x1523,
  0x2323,0x2423,0x2323,0x2423,0x2d23,0x122c,0x4512,0x2f45,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
  0x0000,0x212f,0x122a,0x2315,0x2315,0x2315,0x2324,0x2324,0x2324,0x2423,0x2c15,0x050c,0x2c57,0x2121,0x223a,0x0042,0x0000,0x0000,0x0000,0x0000,
  0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1300,0x0617,0x220c,0x2323,0x2423,0x2415,0x2423,0x2423,0x240e,0x0807,0x0505,0x2d31,0x2423,
  0x2323,0x212d,0x2222,0x0013,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1713,0x2c15,0x2312,0x2416,0x2424,0x2424,
  0x2425,0x2625,0x2325,0x0231,0x2331,0x2625,0x2324,0x2323,0x2d23,0x2115,0x2f2d,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
  0x2b00,0x1517,0x1223,0x242c,0x2407,0x2424,0x2526,0x2424,0x2526,0x0508,0x2d05,0x2425,0x2623,0x2423,0x2323,0x232d,0x212d,0x212d,0x003a,0x0000,
  0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1b2b,0x2315,0x0c15,0x252d,0x2425,0x2525,0x241f,0x253e,0x1825,0x3105,0x2524,0x2425,0x2424,
  0x2624,0x2324,0x2326,0x2d23,0x2d15,0x3a21,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1300,0x1517,0x2423,0x0c17,0x2523,0x2524,0x1f24,
  0x2525,0x2525,0x0230,0x2708,0x1f25,0x2524,0x2526,0x2626,0x2623,0x2323,0x2423,0x1523,0x212d,0x002f,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
  0x172f,0x1516,0x2416,0x0c17,0x2524,0x1f35,0x1f35,0x3735,0x0c24,0x2d05,0x2535,0x2535,0x2425,0x263e,0x2625,0x2324,0x2324,0x2324,0x2d23,0x2115,
  0x2f21,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1517,0x2423,0x2524,0x0517,0x2523,0x3525,0x351f,0x2427,0x0505,0x3823,0x3525,0x2525,0x2526,
  0x2626,0x2626,0x2426,0x2423,0x231b,0x2319,0x212d,0x2121,0x0000,0x0000,0x0000,0x0000,0x0000,0x1300,0x2323,0x2416,0x3e25,0x0524,0x272d,0x1f35,
  0x3535,0x0c16,0x240c,0x3536,0x3535,0x2535,0x253e,0x253e,0x263e,0x2625,0x2424,0x2326,0x2326,0x2d23,0x212b,0x002f,0x0000,0x0000,0x0000,0x0000,
  0x2d00,0x2423,0x2524,0x2524,0x0c25,0x3431,0x3535,0x1f3e,0x0cfd,0x3b24,0x351f,0x351f,0x351f,0x3e25,0x3e25,0x3726,0x2526,0x2626,0x2626,0x231b,
  0x2323,0x212d,0x2f22,0x0000,0x0000,0x0000,0x0000,0x2d2f,0x2416,0x253e,0x2535,0x2c35,0x2405,0x3536,0x4534,0x240c,0x343b,0x3534,0x3536,0x3536,
  0x3e35,0x3735,0x253e,0x263e,0x2626,0x2626,0x2326,0x2323,0x2115,0x3a2b,0x0000,0x0000,0x0000,0x0000,0x21fd,0x2424,0x2524,0x1f24,0x1f27,0x3164,
  0x3636,0xff3a,0x3223,0x3434,0x3436,0x3635,0x3635,0x3e3e,0x3e25,0x3725,0x2526,0x2626,0x2626,0x261b,0x2319,0x062d,0x212d,0x002f,0x0000,0x0000,
  0x2900,0x1212,0x241f,0x2535,0x2735,0x2735,0xfe17,0x132c,0x2a45,0x3433,0x343b,0x343b,0x343b,0x3534,0x3536,0x3535,0x3736,0x2537,0x263e,0x2626,
  0x2326,0x2326,0x2d23,0x2115,0x002f,0x0000,0x0000,0x1300,0xff22,0x3e08,0x3525,0x351f,0x3635,0x3136,0xfdfc,0x3312,0x3434,0x3434,0x3b34,0x3436,
  0x3636,0x3635,0x3436,0x3535,0x3e25,0x2625,0x2626,0x2626,0x260e,0x2323,0x212d,0x2f2a,0x0000,0x0000,0x230d,0x2c35,0x2dff,0x2535,0x3534,0x3534,
  0x1f34,0xfc45,0x2130,0x3234,0x3c33,0x3b32,0x3432,0x3432,0x3634,0x363b,0x3e36,0x2736,0x2535,0x263e,0x2d26,0x172d,0x172d,0x2121,0x2f2b,0x0000,
  0x0000,0x2300,0x2424,0xff0c,0x2723,0x3427,0x351f,0x2f1f,0x2c0c,0xfd0c,0x2afd,0x142b,0x3b14,0x323b,0x3b34,0x3434,0x351f,0x2115,0x312c,0x3030,
  0x3f05,0x05fe,0x0510,0x0c05,0x12ff,0x4945,0x0000,0x0000,0x2314,0x2516,0x0c35,0x2bff,0x353b,0x3536,0xfd32,0x3c43,0x2134,0xfd12,0x459c,0x3a4c,
  0x3a49,0x3a3a,0x2c4c,0x0c12,0x3f0c,0x3f0c,0x3030,0x1818,0x2c2c,0x2c08,0x2c22,0x2c43,0x4c4c,0x0048,0x0000,0x2413,0x1f24,0x2425,0x050c,0x3d2d,
  0x3b35,0x0c4c,0x3234,0x333b,0x3534,0x432c,0x4c45,0x4545,0x4545,0x2c12,0x2d22,0x1f23,0x3635,0x3527,0x3e27,0x2525,0x3e26,0x2424,0x2323,0x3a17,
  0x0000,0x0000,0x2413,0x1f35,0x2735,0x3035,0x22fc,0x143c,0x218f,0x3232,0x3b32,0x3333,0x3233,0x3432,0x3434,0x3432,0x3b32,0x3b33,0x363b,0x3534,
  0x2535,0x253e,0x2625,0x2426,0x2324,0x2d23,0x2115,0x002f,0x0000,0x2415,0x3524,0x351f,0x3427,0xe412,0x4531,0x3230,0x3434,0x3234,0x333b,0x3232,
  0x3332,0x3232,0x3232,0x3232,0x3b34,0x3434,0x3536,0x3527,0x2525,0x2526,0x2626,0x2423,0x2d2d,0x212d,0x003a,0x0000,0x2413,0x2535,0x2735,0x3e35,
  0x2c34,0xfcfb,0x3b43,0x343b,0x3233,0x3232,0x3233,0x3332,0x320d,0x3232,0x3232,0x3432,0x343b,0x3534,0x1f34,0x2535,0x2625,0x2625,0x1524,0x2d23,
  0x1706,0x003a,0x0000,0x2415,0x3524,0x3e37,0x3627,0x3b27,0xfc12,0x3002,0x3335,0x3234,0x333b,0x3232,0x3232,0x3232,0x3232,0x3229,0x3232,0x3434,
  0x3634,0x3535,0x353e,0x2526,0x2424,0x2423,0x2323,0x212d,0x002a,0x0000,0x2413,0x3535,0x3535,0x3634,0x2436,0x2aff,0xfc43,0x1612,0x3c33,0x3233,
  0x3232,0x320d,0x3232,0x3232,0x3232,0x3432,0x343b,0x3634,0x3534,0x3535,0x2525,0x263e,0x2324,0x2324,0x2d15,0x0021,0x0000,0x2415,0x3524,0x3627,
  0x3635,0x2c36,0x3b05,0x2b3c,0xfdfd,0x322a,0x3233,0x3332,0x3232,0x3232,0x3214,0x3232,0x3b34,0x3434,0x3436,0x3535,0x3535,0x2525,0x2426,0x2426,
  0x2323,0x212d,0x002a,0x0000,0x3113,0x300c,0x1f22,0x363b,0xfc35,0x3d22,0x3d3b,0x4c34,0x129c,0x3324,0x3233,0x3233,0x3233,0x3232,0x3233,0x3432,
  0x3432,0x3534,0x3534,0x2735,0x2535,0x2625,0x2424,0x2324,0x2d15,0x0021,0x0000,0x124c,0x0c12,0x0cfe,0x2a2c,0xcb2c,0x3d1f,0x3b36,0x3b3d,0x4c2b,
  0x45fd,0x3335,0x3332,0x3332,0x323c,0x323b,0x323b,0x3434,0x3434,0x3635,0x351f,0x2525,0x2426,0x2423,0x2323,0x212d,0x003a,0x0000,0x232f,0x2535,
  0x2c15,0x020c,0x31fc,0x383c,0x3b3b,0x3b3b,0x293c,0xfd2f,0x2afd,0x3332,0x3233,0x320d,0x3b32,0x3b32,0x3434,0x363b,0x1f34,0x3534,0x2435,0x243e,
  0x1524,0x2324,0x2221,0x002f,0x0000,0x2400,0x2525,0x3427,0x0824,0x53fc,0x3d1f,0x3b36,0x3b36,0x3b3b,0x293d,0xfd4c,0x210c,0x3332,0x3232,0x323c,
  0x3434,0x3434,0x3436,0x351f,0x351f,0x3524,0x2426,0x2424,0x2323,0x172d,0x0013,0x0000,0x1600,0x2535,0x3535,0x2d3d,0xffff,0x1f0c,0x363c,0x3b3d,
  0x3d3b,0x3b3b,0x3533,0xfd2a,0x2b43,0x3333,0x3232,0x3432,0x343b,0x3534,0x3534,0x1f36,0x2435,0x2425,0x2324,0x1923,0x2206,0x000d,0x0000,0x1400,
  0x2526,0x3525,0x3138,0x3553,0xfd12,0x3d35,0x3d38,0x3b36,0x3b3b,0x3c3b,0x133b,0xfdfd,0x2412,0x333b,0x3b3b,0x3434,0x3436,0x3435,0x3535,0x2424,
  0x2424,0x2323,0x2d2d,0x2217,0x0000,0x0000,0x0000,0x2525,0x3535,0x0c35,0x3d2c,0x1234,0x14fd,0x363d,0x3b3b,0x3b3b,0x3b32,0x3c3b,0x2b32,0xfd45,
  0x2d45,0x3b32,0x3434,0x3432,0x3534,0x3534,0x2435,0x2624,0x2326,0x2d23,0x3a21,0x0000,0x0000,0x0000,0x2516,0x3527,0x0524,0x3822,0x343e,0x1212,
  0x3835,0x3b38,0x3b3d,0x3b34,0x3b34,0x3c3b,0x2b1f,0xfbfd,0x220c,0x3b1f,0x3436,0x3435,0x1f1f,0x2424,0x2623,0x2323,0x2d19,0x2f08,0x0000,0x0000,
  0x0000,0x260d,0x3e35,0x0524,0x3826,0x3836,0xfd34,0x3612,0x363d,0x3b3b,0x3b3b,0x3b3b,0x343b,0x3b34,0x2134,0xfc45,0x2cfd,0x3524,0x363b,0x2535,
  0x2425,0x2324,0x2323,0x2d2d,0x002d,0x0000,0x0000,0x0000,0x1600,0x3525,0x0523,0x3824,0x363e,0x3538,0x2c0c,0x3836,0x3b36,0x3b36,0x3b3d,0x3436,
  0x3436,0x3b36,0x2436,0xff12,0x0c02,0x1518,0x351f,0x2424,0x2323,0x2d19,0x2d2d,0x003a,0x0000,0x0000,0x0000,0x0d00,0x3537,0x0523,0x3824,0x3636,
  0x3836,0xfb24,0x3d2a,0x363d,0x3d3b,0x3d3b,0x343b,0x343b,0x3634,0x3d34,0x243b,0x3121,0x02cb,0x310c,0x2317,0x2324,0x2d15,0x2206,0x002f,0x0000,
  0x0000,0x0000,0x0000,0x3516,0x0523,0x3823,0x363e,0x3827,0x2a38,0x2bfc,0x3638,0x3d3e,0x363e,0x3436,0x3436,0x3635,0x3635,0x3635,0x3627,0x2d24,
  0x0c31,0xff02,0x303f,0x2c12,0x4b12,0x0000,0x0000,0x0000,0x0000,0x0000,0x250d,0x0c13,0x3824,0x3e36,0x3e36,0x2738,0x0c31,0x3834,0x363d,0x363d,
  0x3536,0x3636,0x3634,0x3534,0x1f36,0x1f35,0x1f35,0x1535,0x2c2d,0x0c31,0x1212,0x002a,0x0000,0x0000,0x0000,0x0000,0x0000,0x1400,0x2c26,0x3e2d,
  0x3627,0x3e3e,0x3837,0xff24,0x3d2c,0x363e,0x353e,0x3627,0x3635,0x3635,0x3535,0x3535,0x351f,0x2424,0x2424,0x2423,0x2323,0x2d2d,0x0013,0x0000,
  0x0000,0x0000,0x0000,0x0000,0x0000,0x2214,0x272a,0x3535,0x3535,0x3e36,0x223d,0x2305,0x353b,0x3536,0x3535,0x3535,0x3536,0x3536,0x2535,0x2535,
  0x2425,0x2324,0x2323,0x2d15,0x3a2d,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2b00,0x3531,0x3527,0x351f,0x3e27,0x3627,0x0530,0x3624,
  0x3537,0x3525,0x3537,0x3525,0x3525,0x2525,0x2424,0x2426,0x2323,0x232d,0x2d2d,0x0021,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
  0x2321,0x1f35,0x1f35,0x2735,0x3e36,0x0535,0x3530,0x2538,0x3e35,0x3535,0x2535,0x2535,0x2535,0x2625,0x2324,0x2323,0x2316,0x222d,0x002f,0x0000,
  0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2100,0x3524,0x2525,0x3525,0x3525,0x2136,0x2cf5,0x3e3e,0x3e24,0x3525,0x3524,0x3e25,0x2526,
  0x2424,0x2323,0x2319,0x172d,0x2f22,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x240d,0x2535,0x2535,0x2535,0x3835,
  0x0222,0x3e21,0x243e,0x3e35,0x3535,0x2435,0x2625,0x2324,0x2d26,0x2d23,0x2122,0x000d,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
  0x0000,0x0000,0x2f00,0x2616,0x2424,0x2524,0x2524,0x2c27,0x22fe,0x3527,0x2624,0x2526,0x2424,0x2426,0x2323,0x2d1b,0x0820,0x0013,0x0000,0x0000,
  0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1300,0x2324,0x2425,0x2425,0x253e,0x0208,0x252a,0x2624,0x2626,0x2326,
  0x2326,0x1723,0x082d,0x0021,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1400,0x2323,
  0x1624,0x2423,0x2224,0x3005,0x2517,0x2623,0x2323,0x2d1b,0x2208,0x2f08,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
  0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2f00,0x2d2f,0x2323,0x1515,0x3006,0x310c,0x2d17,0x222d,0x2222,0x062f,0x0000,0x0000,0x0000,0x0000,
  0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1300,0x1506,0x212d,0x302c,0x2c0c,
  0x2f45,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
  0x0000,0x0000,0x0000,0x0000,0x0000,0x000d,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000};


