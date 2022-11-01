//  Copyright (c) 2022 Yossarian King. All rights reserved.

#include <stdlib.h>
#include "pd_api.h"

#include "func.def"

// Define enough 1K functions to be able to fill the instruction cache at least twice over.
// Cache is 4K (or so we expect to demonstrate), each function is 32 bytes, we need 2 x 4096 / 32 = 256 functions.
FUNC(1)
FUNC(2)
FUNC(3)
FUNC(4)
FUNC(5)
FUNC(6)
FUNC(7)
FUNC(8)
FUNC(9)
FUNC(10)
FUNC(11)
FUNC(12)
FUNC(13)
FUNC(14)
FUNC(15)
FUNC(16)
FUNC(17)
FUNC(18)
FUNC(19)
FUNC(20)
FUNC(21)
FUNC(22)
FUNC(23)
FUNC(24)
FUNC(25)
FUNC(26)
FUNC(27)
FUNC(28)
FUNC(29)
FUNC(30)
FUNC(31)
FUNC(32)
FUNC(33)
FUNC(34)
FUNC(35)
FUNC(36)
FUNC(37)
FUNC(38)
FUNC(39)
FUNC(40)
FUNC(41)
FUNC(42)
FUNC(43)
FUNC(44)
FUNC(45)
FUNC(46)
FUNC(47)
FUNC(48)
FUNC(49)
FUNC(50)
FUNC(51)
FUNC(52)
FUNC(53)
FUNC(54)
FUNC(55)
FUNC(56)
FUNC(57)
FUNC(58)
FUNC(59)
FUNC(60)
FUNC(61)
FUNC(62)
FUNC(63)
FUNC(64)
FUNC(65)
FUNC(66)
FUNC(67)
FUNC(68)
FUNC(69)
FUNC(70)
FUNC(71)
FUNC(72)
FUNC(73)
FUNC(74)
FUNC(75)
FUNC(76)
FUNC(77)
FUNC(78)
FUNC(79)
FUNC(80)
FUNC(81)
FUNC(82)
FUNC(83)
FUNC(84)
FUNC(85)
FUNC(86)
FUNC(87)
FUNC(88)
FUNC(89)
FUNC(90)
FUNC(91)
FUNC(92)
FUNC(93)
FUNC(94)
FUNC(95)
FUNC(96)
FUNC(97)
FUNC(98)
FUNC(99)
FUNC(100)
FUNC(101)
FUNC(102)
FUNC(103)
FUNC(104)
FUNC(105)
FUNC(106)
FUNC(107)
FUNC(108)
FUNC(109)
FUNC(110)
FUNC(111)
FUNC(112)
FUNC(113)
FUNC(114)
FUNC(115)
FUNC(116)
FUNC(117)
FUNC(118)
FUNC(119)
FUNC(120)
FUNC(121)
FUNC(122)
FUNC(123)
FUNC(124)
FUNC(125)
FUNC(126)
FUNC(127)
FUNC(128)
FUNC(129)
FUNC(130)
FUNC(131)
FUNC(132)
FUNC(133)
FUNC(134)
FUNC(135)
FUNC(136)
FUNC(137)
FUNC(138)
FUNC(139)
FUNC(140)
FUNC(141)
FUNC(142)
FUNC(143)
FUNC(144)
FUNC(145)
FUNC(146)
FUNC(147)
FUNC(148)
FUNC(149)
FUNC(150)
FUNC(151)
FUNC(152)
FUNC(153)
FUNC(154)
FUNC(155)
FUNC(156)
FUNC(157)
FUNC(158)
FUNC(159)
FUNC(160)
FUNC(161)
FUNC(162)
FUNC(163)
FUNC(164)
FUNC(165)
FUNC(166)
FUNC(167)
FUNC(168)
FUNC(169)
FUNC(170)
FUNC(171)
FUNC(172)
FUNC(173)
FUNC(174)
FUNC(175)
FUNC(176)
FUNC(177)
FUNC(178)
FUNC(179)
FUNC(180)
FUNC(181)
FUNC(182)
FUNC(183)
FUNC(184)
FUNC(185)
FUNC(186)
FUNC(187)
FUNC(188)
FUNC(189)
FUNC(190)
FUNC(191)
FUNC(192)
FUNC(193)
FUNC(194)
FUNC(195)
FUNC(196)
FUNC(197)
FUNC(198)
FUNC(199)
FUNC(200)
FUNC(201)
FUNC(202)
FUNC(203)
FUNC(204)
FUNC(205)
FUNC(206)
FUNC(207)
FUNC(208)
FUNC(209)
FUNC(210)
FUNC(211)
FUNC(212)
FUNC(213)
FUNC(214)
FUNC(215)
FUNC(216)
FUNC(217)
FUNC(218)
FUNC(219)
FUNC(220)
FUNC(221)
FUNC(222)
FUNC(223)
FUNC(224)
FUNC(225)
FUNC(226)
FUNC(227)
FUNC(228)
FUNC(229)
FUNC(230)
FUNC(231)
FUNC(232)
FUNC(233)
FUNC(234)
FUNC(235)
FUNC(236)
FUNC(237)
FUNC(238)
FUNC(239)
FUNC(240)
FUNC(241)
FUNC(242)
FUNC(243)
FUNC(244)
FUNC(245)
FUNC(246)
FUNC(247)
FUNC(248)
FUNC(249)
FUNC(250)
FUNC(251)
FUNC(252)
FUNC(253)
FUNC(254)
FUNC(255)
FUNC(256)

static void (*functable[])() =
{
    func1,
    func2,
    func3,
    func4,
    func5,
    func6,
    func7,
    func8,
    func9,
    func10,
    func11,
    func12,
    func13,
    func14,
    func15,
    func16,
    func17,
    func18,
    func19,
    func20,
    func21,
    func22,
    func23,
    func24,
    func25,
    func26,
    func27,
    func28,
    func29,
    func30,
    func31,
    func32,
    func33,
    func34,
    func35,
    func36,
    func37,
    func38,
    func39,
    func40,
    func41,
    func42,
    func43,
    func44,
    func45,
    func46,
    func47,
    func48,
    func49,
    func50,
    func51,
    func52,
    func53,
    func54,
    func55,
    func56,
    func57,
    func58,
    func59,
    func60,
    func61,
    func62,
    func63,
    func64,
    func65,
    func66,
    func67,
    func68,
    func69,
    func70,
    func71,
    func72,
    func73,
    func74,
    func75,
    func76,
    func77,
    func78,
    func79,
    func80,
    func81,
    func82,
    func83,
    func84,
    func85,
    func86,
    func87,
    func88,
    func89,
    func90,
    func91,
    func92,
    func93,
    func94,
    func95,
    func96,
    func97,
    func98,
    func99,
    func100,
    func101,
    func102,
    func103,
    func104,
    func105,
    func106,
    func107,
    func108,
    func109,
    func110,
    func111,
    func112,
    func113,
    func114,
    func115,
    func116,
    func117,
    func118,
    func119,
    func120,
    func121,
    func122,
    func123,
    func124,
    func125,
    func126,
    func127,
    func128,
    func129,
    func130,
    func131,
    func132,
    func133,
    func134,
    func135,
    func136,
    func137,
    func138,
    func139,
    func140,
    func141,
    func142,
    func143,
    func144,
    func145,
    func146,
    func147,
    func148,
    func149,
    func150,
    func151,
    func152,
    func153,
    func154,
    func155,
    func156,
    func157,
    func158,
    func159,
    func160,
    func161,
    func162,
    func163,
    func164,
    func165,
    func166,
    func167,
    func168,
    func169,
    func170,
    func171,
    func172,
    func173,
    func174,
    func175,
    func176,
    func177,
    func178,
    func179,
    func180,
    func181,
    func182,
    func183,
    func184,
    func185,
    func186,
    func187,
    func188,
    func189,
    func190,
    func191,
    func192,
    func193,
    func194,
    func195,
    func196,
    func197,
    func198,
    func199,
    func200,
    func201,
    func202,
    func203,
    func204,
    func205,
    func206,
    func207,
    func208,
    func209,
    func210,
    func211,
    func212,
    func213,
    func214,
    func215,
    func216,
    func217,
    func218,
    func219,
    func220,
    func221,
    func222,
    func223,
    func224,
    func225,
    func226,
    func227,
    func228,
    func229,
    func230,
    func231,
    func232,
    func233,
    func234,
    func235,
    func236,
    func237,
    func238,
    func239,
    func240,
    func241,
    func242,
    func243,
    func244,
    func245,
    func246,
    func247,
    func248,
    func249,
    func250,
    func251,
    func252,
    func253,
    func254,
    func255,
    func256,
};

#define NCALLS 100000            // each test will make the same number of function calls

// invalidateicache
//
// From https://developer.arm.com/documentation/ddi0489/d/initialization/about-initialization/initializing-and-enabling-the-l1-cache
static void invalidateicache()
{
    // TODO: this isn't working - try running 4k of code instead
    asm volatile
    (
        "MOV r0, #0x0\n\t"
        "LDR r11, =0xE000EF50\n\t"
        "STR r0, [r11]\n\t"
        "DSB\n\t"
        "ISB\n\t"
    );
}

static void func4k()
{
    asm volatile
    (
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    "mov r0,r0\n\t"
    );
}

// cache_icachesize
//
// Demonstrate size of instruction cache by jumping around unpredictably in instruction memory.
int cache_icachesize(PlaydateAPI* pd)
{
    int icachesize = 0;
    int funcsize =(char*)func2 - (char*)func1;
    int nfunctions = sizeof(functable)/sizeof(functable[0]);

    pd->system->logToConsole("\tfunc1 @ 0x%08x", func1);
    pd->system->logToConsole("\tcode size\ttime (ms)");
    for (int n = 1; n <= nfunctions; ++n)
    {
        //invalidateicache();
        func4k();
        pd->system->resetElapsedTime();

        // Use DJB2 hash function for function selection that should give
        // the M7 branch prediction a hard time.
        // http://www.cse.yorku.ca/~oz/hash.html
        unsigned int hash = 5381;
        for (int c = 0; c < NCALLS; ++c)
        {
            hash = (hash << 5) + hash + (c & 0xff);
            functable[hash%n]();
        }
        float ms = pd->system->getElapsedTime() * 1000.0f;
        int codesize = n * funcsize;
        pd->system->logToConsole("\t%d\t%.2f", codesize, (double)ms);
    }

    return icachesize;
}
