#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="pooling_foulds5tp";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,x122,x123,x124,x125,x126,x127,x128,x129,x130,x131,x132,x133,x134,x135,x136,x137,x138,x139,x140,x141,x142,x143,x144,x145,x146,x147,x148,x149,x150,x151,x152,x153,x154,x155,x156,x157,x158,x159,x160,x161,x162,x163,x164,x165,x166,x167,x168,x169,x170,x171,x172,x173,x174,x175,x176,x177,x178,x179,x180,x181,x182,x183,x184,x185,x186,x187,x188,x189,x190,x191,x192,x193,x194,x195,x196,x197,x198,x199,x200,x201,x202,x203,x204,x205,x206,x207,x209,x210,x211,x212,x213,x214,x215,x216,x217,x218,x219,x220,x221,x222,x223,x225,x226,x227,x228,x229,x230,x231,x232,x233,x234,x235,x236,x237,x238,x239,x241,x242,x243,x244,x245,x246,x247,x248,x249,x250,x251,x252,x253,x254,x255,x257,x258,x259,x260,x261,x262,x263,x264,x265,x266,x267,x268,x269,x271,x272,x273,x274,x275,x276,x277,x278,x279,x280,x281,x282,x283,x284,x285,x287,x288,x289,x290,x291,x292,x293,x294,x295,x296,x297,x298,x299,x300,x301,x303,x304,x305,x306,x307,x308,x309,x310,x311,x312,x313,x314,x315,x317,x318,x319,x320,x321,x322,x323,x324,x325,x326,x327,x328,x329,x330,x331,x333,x334,x335,x336,x337,x338,x339,x340,x341,x342,x343,x344,x345,x347,x348,x349,x350,x351,x352,x353,x354,x355,x356,x357,x358,x359,x360,x361,x363,x364,x365,x366,x367,x368,x369,x370,x371,x372,x373,x374,x375,x376,x377,x379,x380,x381,x382,x383,x384,x385,x386,x387,x388,x389,x390,x391,x393,x394,x395,x396,x397,x398,x399,x400,x401,x402,x403,x404,x405,x406,x407,x409,x410,x411,x412,x413,x414,x415,x416,x417,x418,x419,x420,x421,x422,x423,x425,x426,x427,x428,x429,x430,x431,x432,x433,x434,x435,x436,x437,x438,x439,x441,x442,x443,x444,x445,x446,x447,x448,x449,x450,x451,x452,x453,x455,x456,x457,x458,x459,x460,x461,x462,x463,x464,x465,x466,x467,x468,x469,x471,x472,x473,x474,x475,x476,x477,x478,x479,x480,x481,x482,x483,x484,x485,x487,x488,x489,x490,x491,x492,x493,x494,x495,x496,x497,x498,x499,x501,x502,x503,x504,x505,x506,x507,x508,x509,x510,x511,x512,x513,x514,x515,x517,x518,x519,x520,x521,x522,x523,x524,x525,x526,x527,x528,x529,x530,x531,x533,x534,x535,x536,x537,x538,x539,x540,x541,x542,x543,x544,x545,x547,x548,x549,x550,x551,x552,x553,x554,x555,x556,x557,x558,x559,x560,x561,x563,x564,x565,x566,x567,x568,x569,x570,x571,x572,x573,x574,x575,x576,x577;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &x72); 
   fscanf(fp,"%f", &x73); 
   fscanf(fp,"%f", &x74); 
   fscanf(fp,"%f", &x75); 
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &x77); 
   fscanf(fp,"%f", &x78); 
   fscanf(fp,"%f", &x79); 
   fscanf(fp,"%f", &x80); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x90); 
   fscanf(fp,"%f", &x91); 
   fscanf(fp,"%f", &x92); 
   fscanf(fp,"%f", &x93); 
   fscanf(fp,"%f", &x94); 
   fscanf(fp,"%f", &x95); 
   fscanf(fp,"%f", &x96); 
   fscanf(fp,"%f", &x97); 
   fscanf(fp,"%f", &x98); 
   fscanf(fp,"%f", &x99); 
   fscanf(fp,"%f", &x100); 
   fscanf(fp,"%f", &x101); 
   fscanf(fp,"%f", &x102); 
   fscanf(fp,"%f", &x103); 
   fscanf(fp,"%f", &x104); 
   fscanf(fp,"%f", &x105); 
   fscanf(fp,"%f", &x106); 
   fscanf(fp,"%f", &x107); 
   fscanf(fp,"%f", &x108); 
   fscanf(fp,"%f", &x109); 
   fscanf(fp,"%f", &x110); 
   fscanf(fp,"%f", &x111); 
   fscanf(fp,"%f", &x112); 
   fscanf(fp,"%f", &x113); 
   fscanf(fp,"%f", &x114); 
   fscanf(fp,"%f", &x115); 
   fscanf(fp,"%f", &x116); 
   fscanf(fp,"%f", &x117); 
   fscanf(fp,"%f", &x118); 
   fscanf(fp,"%f", &x119); 
   fscanf(fp,"%f", &x120); 
   fscanf(fp,"%f", &x121); 
   fscanf(fp,"%f", &x122); 
   fscanf(fp,"%f", &x123); 
   fscanf(fp,"%f", &x124); 
   fscanf(fp,"%f", &x125); 
   fscanf(fp,"%f", &x126); 
   fscanf(fp,"%f", &x127); 
   fscanf(fp,"%f", &x128); 
   fscanf(fp,"%f", &x129); 
   fscanf(fp,"%f", &x130); 
   fscanf(fp,"%f", &x131); 
   fscanf(fp,"%f", &x132); 
   fscanf(fp,"%f", &x133); 
   fscanf(fp,"%f", &x134); 
   fscanf(fp,"%f", &x135); 
   fscanf(fp,"%f", &x136); 
   fscanf(fp,"%f", &x137); 
   fscanf(fp,"%f", &x138); 
   fscanf(fp,"%f", &x139); 
   fscanf(fp,"%f", &x140); 
   fscanf(fp,"%f", &x141); 
   fscanf(fp,"%f", &x142); 
   fscanf(fp,"%f", &x143); 
   fscanf(fp,"%f", &x144); 
   fscanf(fp,"%f", &x145); 
   fscanf(fp,"%f", &x146); 
   fscanf(fp,"%f", &x147); 
   fscanf(fp,"%f", &x148); 
   fscanf(fp,"%f", &x149); 
   fscanf(fp,"%f", &x150); 
   fscanf(fp,"%f", &x151); 
   fscanf(fp,"%f", &x152); 
   fscanf(fp,"%f", &x153); 
   fscanf(fp,"%f", &x154); 
   fscanf(fp,"%f", &x155); 
   fscanf(fp,"%f", &x156); 
   fscanf(fp,"%f", &x157); 
   fscanf(fp,"%f", &x158); 
   fscanf(fp,"%f", &x159); 
   fscanf(fp,"%f", &x160); 
   fscanf(fp,"%f", &x161); 
   fscanf(fp,"%f", &x162); 
   fscanf(fp,"%f", &x163); 
   fscanf(fp,"%f", &x164); 
   fscanf(fp,"%f", &x165); 
   fscanf(fp,"%f", &x166); 
   fscanf(fp,"%f", &x167); 
   fscanf(fp,"%f", &x168); 
   fscanf(fp,"%f", &x169); 
   fscanf(fp,"%f", &x170); 
   fscanf(fp,"%f", &x171); 
   fscanf(fp,"%f", &x172); 
   fscanf(fp,"%f", &x173); 
   fscanf(fp,"%f", &x174); 
   fscanf(fp,"%f", &x175); 
   fscanf(fp,"%f", &x176); 
   fscanf(fp,"%f", &x177); 
   fscanf(fp,"%f", &x178); 
   fscanf(fp,"%f", &x179); 
   fscanf(fp,"%f", &x180); 
   fscanf(fp,"%f", &x181); 
   fscanf(fp,"%f", &x182); 
   fscanf(fp,"%f", &x183); 
   fscanf(fp,"%f", &x184); 
   fscanf(fp,"%f", &x185); 
   fscanf(fp,"%f", &x186); 
   fscanf(fp,"%f", &x187); 
   fscanf(fp,"%f", &x188); 
   fscanf(fp,"%f", &x189); 
   fscanf(fp,"%f", &x190); 
   fscanf(fp,"%f", &x191); 
   fscanf(fp,"%f", &x192); 
   fscanf(fp,"%f", &x193); 
   fscanf(fp,"%f", &x194); 
   fscanf(fp,"%f", &x195); 
   fscanf(fp,"%f", &x196); 
   fscanf(fp,"%f", &x197); 
   fscanf(fp,"%f", &x198); 
   fscanf(fp,"%f", &x199); 
   fscanf(fp,"%f", &x200); 
   fscanf(fp,"%f", &x201); 
   fscanf(fp,"%f", &x202); 
   fscanf(fp,"%f", &x203); 
   fscanf(fp,"%f", &x204); 
   fscanf(fp,"%f", &x205); 
   fscanf(fp,"%f", &x206); 
   fscanf(fp,"%f", &x207); 
   fscanf(fp,"%f", &x209); 
   fscanf(fp,"%f", &x210); 
   fscanf(fp,"%f", &x211); 
   fscanf(fp,"%f", &x212); 
   fscanf(fp,"%f", &x213); 
   fscanf(fp,"%f", &x214); 
   fscanf(fp,"%f", &x215); 
   fscanf(fp,"%f", &x216); 
   fscanf(fp,"%f", &x217); 
   fscanf(fp,"%f", &x218); 
   fscanf(fp,"%f", &x219); 
   fscanf(fp,"%f", &x220); 
   fscanf(fp,"%f", &x221); 
   fscanf(fp,"%f", &x222); 
   fscanf(fp,"%f", &x223); 
   fscanf(fp,"%f", &x225); 
   fscanf(fp,"%f", &x226); 
   fscanf(fp,"%f", &x227); 
   fscanf(fp,"%f", &x228); 
   fscanf(fp,"%f", &x229); 
   fscanf(fp,"%f", &x230); 
   fscanf(fp,"%f", &x231); 
   fscanf(fp,"%f", &x232); 
   fscanf(fp,"%f", &x233); 
   fscanf(fp,"%f", &x234); 
   fscanf(fp,"%f", &x235); 
   fscanf(fp,"%f", &x236); 
   fscanf(fp,"%f", &x237); 
   fscanf(fp,"%f", &x238); 
   fscanf(fp,"%f", &x239); 
   fscanf(fp,"%f", &x241); 
   fscanf(fp,"%f", &x242); 
   fscanf(fp,"%f", &x243); 
   fscanf(fp,"%f", &x244); 
   fscanf(fp,"%f", &x245); 
   fscanf(fp,"%f", &x246); 
   fscanf(fp,"%f", &x247); 
   fscanf(fp,"%f", &x248); 
   fscanf(fp,"%f", &x249); 
   fscanf(fp,"%f", &x250); 
   fscanf(fp,"%f", &x251); 
   fscanf(fp,"%f", &x252); 
   fscanf(fp,"%f", &x253); 
   fscanf(fp,"%f", &x254); 
   fscanf(fp,"%f", &x255); 
   fscanf(fp,"%f", &x257); 
   fscanf(fp,"%f", &x258); 
   fscanf(fp,"%f", &x259); 
   fscanf(fp,"%f", &x260); 
   fscanf(fp,"%f", &x261); 
   fscanf(fp,"%f", &x262); 
   fscanf(fp,"%f", &x263); 
   fscanf(fp,"%f", &x264); 
   fscanf(fp,"%f", &x265); 
   fscanf(fp,"%f", &x266); 
   fscanf(fp,"%f", &x267); 
   fscanf(fp,"%f", &x268); 
   fscanf(fp,"%f", &x269); 
   fscanf(fp,"%f", &x271); 
   fscanf(fp,"%f", &x272); 
   fscanf(fp,"%f", &x273); 
   fscanf(fp,"%f", &x274); 
   fscanf(fp,"%f", &x275); 
   fscanf(fp,"%f", &x276); 
   fscanf(fp,"%f", &x277); 
   fscanf(fp,"%f", &x278); 
   fscanf(fp,"%f", &x279); 
   fscanf(fp,"%f", &x280); 
   fscanf(fp,"%f", &x281); 
   fscanf(fp,"%f", &x282); 
   fscanf(fp,"%f", &x283); 
   fscanf(fp,"%f", &x284); 
   fscanf(fp,"%f", &x285); 
   fscanf(fp,"%f", &x287); 
   fscanf(fp,"%f", &x288); 
   fscanf(fp,"%f", &x289); 
   fscanf(fp,"%f", &x290); 
   fscanf(fp,"%f", &x291); 
   fscanf(fp,"%f", &x292); 
   fscanf(fp,"%f", &x293); 
   fscanf(fp,"%f", &x294); 
   fscanf(fp,"%f", &x295); 
   fscanf(fp,"%f", &x296); 
   fscanf(fp,"%f", &x297); 
   fscanf(fp,"%f", &x298); 
   fscanf(fp,"%f", &x299); 
   fscanf(fp,"%f", &x300); 
   fscanf(fp,"%f", &x301); 
   fscanf(fp,"%f", &x303); 
   fscanf(fp,"%f", &x304); 
   fscanf(fp,"%f", &x305); 
   fscanf(fp,"%f", &x306); 
   fscanf(fp,"%f", &x307); 
   fscanf(fp,"%f", &x308); 
   fscanf(fp,"%f", &x309); 
   fscanf(fp,"%f", &x310); 
   fscanf(fp,"%f", &x311); 
   fscanf(fp,"%f", &x312); 
   fscanf(fp,"%f", &x313); 
   fscanf(fp,"%f", &x314); 
   fscanf(fp,"%f", &x315); 
   fscanf(fp,"%f", &x317); 
   fscanf(fp,"%f", &x318); 
   fscanf(fp,"%f", &x319); 
   fscanf(fp,"%f", &x320); 
   fscanf(fp,"%f", &x321); 
   fscanf(fp,"%f", &x322); 
   fscanf(fp,"%f", &x323); 
   fscanf(fp,"%f", &x324); 
   fscanf(fp,"%f", &x325); 
   fscanf(fp,"%f", &x326); 
   fscanf(fp,"%f", &x327); 
   fscanf(fp,"%f", &x328); 
   fscanf(fp,"%f", &x329); 
   fscanf(fp,"%f", &x330); 
   fscanf(fp,"%f", &x331); 
   fscanf(fp,"%f", &x333); 
   fscanf(fp,"%f", &x334); 
   fscanf(fp,"%f", &x335); 
   fscanf(fp,"%f", &x336); 
   fscanf(fp,"%f", &x337); 
   fscanf(fp,"%f", &x338); 
   fscanf(fp,"%f", &x339); 
   fscanf(fp,"%f", &x340); 
   fscanf(fp,"%f", &x341); 
   fscanf(fp,"%f", &x342); 
   fscanf(fp,"%f", &x343); 
   fscanf(fp,"%f", &x344); 
   fscanf(fp,"%f", &x345); 
   fscanf(fp,"%f", &x347); 
   fscanf(fp,"%f", &x348); 
   fscanf(fp,"%f", &x349); 
   fscanf(fp,"%f", &x350); 
   fscanf(fp,"%f", &x351); 
   fscanf(fp,"%f", &x352); 
   fscanf(fp,"%f", &x353); 
   fscanf(fp,"%f", &x354); 
   fscanf(fp,"%f", &x355); 
   fscanf(fp,"%f", &x356); 
   fscanf(fp,"%f", &x357); 
   fscanf(fp,"%f", &x358); 
   fscanf(fp,"%f", &x359); 
   fscanf(fp,"%f", &x360); 
   fscanf(fp,"%f", &x361); 
   fscanf(fp,"%f", &x363); 
   fscanf(fp,"%f", &x364); 
   fscanf(fp,"%f", &x365); 
   fscanf(fp,"%f", &x366); 
   fscanf(fp,"%f", &x367); 
   fscanf(fp,"%f", &x368); 
   fscanf(fp,"%f", &x369); 
   fscanf(fp,"%f", &x370); 
   fscanf(fp,"%f", &x371); 
   fscanf(fp,"%f", &x372); 
   fscanf(fp,"%f", &x373); 
   fscanf(fp,"%f", &x374); 
   fscanf(fp,"%f", &x375); 
   fscanf(fp,"%f", &x376); 
   fscanf(fp,"%f", &x377); 
   fscanf(fp,"%f", &x379); 
   fscanf(fp,"%f", &x380); 
   fscanf(fp,"%f", &x381); 
   fscanf(fp,"%f", &x382); 
   fscanf(fp,"%f", &x383); 
   fscanf(fp,"%f", &x384); 
   fscanf(fp,"%f", &x385); 
   fscanf(fp,"%f", &x386); 
   fscanf(fp,"%f", &x387); 
   fscanf(fp,"%f", &x388); 
   fscanf(fp,"%f", &x389); 
   fscanf(fp,"%f", &x390); 
   fscanf(fp,"%f", &x391); 
   fscanf(fp,"%f", &x393); 
   fscanf(fp,"%f", &x394); 
   fscanf(fp,"%f", &x395); 
   fscanf(fp,"%f", &x396); 
   fscanf(fp,"%f", &x397); 
   fscanf(fp,"%f", &x398); 
   fscanf(fp,"%f", &x399); 
   fscanf(fp,"%f", &x400); 
   fscanf(fp,"%f", &x401); 
   fscanf(fp,"%f", &x402); 
   fscanf(fp,"%f", &x403); 
   fscanf(fp,"%f", &x404); 
   fscanf(fp,"%f", &x405); 
   fscanf(fp,"%f", &x406); 
   fscanf(fp,"%f", &x407); 
   fscanf(fp,"%f", &x409); 
   fscanf(fp,"%f", &x410); 
   fscanf(fp,"%f", &x411); 
   fscanf(fp,"%f", &x412); 
   fscanf(fp,"%f", &x413); 
   fscanf(fp,"%f", &x414); 
   fscanf(fp,"%f", &x415); 
   fscanf(fp,"%f", &x416); 
   fscanf(fp,"%f", &x417); 
   fscanf(fp,"%f", &x418); 
   fscanf(fp,"%f", &x419); 
   fscanf(fp,"%f", &x420); 
   fscanf(fp,"%f", &x421); 
   fscanf(fp,"%f", &x422); 
   fscanf(fp,"%f", &x423); 
   fscanf(fp,"%f", &x425); 
   fscanf(fp,"%f", &x426); 
   fscanf(fp,"%f", &x427); 
   fscanf(fp,"%f", &x428); 
   fscanf(fp,"%f", &x429); 
   fscanf(fp,"%f", &x430); 
   fscanf(fp,"%f", &x431); 
   fscanf(fp,"%f", &x432); 
   fscanf(fp,"%f", &x433); 
   fscanf(fp,"%f", &x434); 
   fscanf(fp,"%f", &x435); 
   fscanf(fp,"%f", &x436); 
   fscanf(fp,"%f", &x437); 
   fscanf(fp,"%f", &x438); 
   fscanf(fp,"%f", &x439); 
   fscanf(fp,"%f", &x441); 
   fscanf(fp,"%f", &x442); 
   fscanf(fp,"%f", &x443); 
   fscanf(fp,"%f", &x444); 
   fscanf(fp,"%f", &x445); 
   fscanf(fp,"%f", &x446); 
   fscanf(fp,"%f", &x447); 
   fscanf(fp,"%f", &x448); 
   fscanf(fp,"%f", &x449); 
   fscanf(fp,"%f", &x450); 
   fscanf(fp,"%f", &x451); 
   fscanf(fp,"%f", &x452); 
   fscanf(fp,"%f", &x453); 
   fscanf(fp,"%f", &x455); 
   fscanf(fp,"%f", &x456); 
   fscanf(fp,"%f", &x457); 
   fscanf(fp,"%f", &x458); 
   fscanf(fp,"%f", &x459); 
   fscanf(fp,"%f", &x460); 
   fscanf(fp,"%f", &x461); 
   fscanf(fp,"%f", &x462); 
   fscanf(fp,"%f", &x463); 
   fscanf(fp,"%f", &x464); 
   fscanf(fp,"%f", &x465); 
   fscanf(fp,"%f", &x466); 
   fscanf(fp,"%f", &x467); 
   fscanf(fp,"%f", &x468); 
   fscanf(fp,"%f", &x469); 
   fscanf(fp,"%f", &x471); 
   fscanf(fp,"%f", &x472); 
   fscanf(fp,"%f", &x473); 
   fscanf(fp,"%f", &x474); 
   fscanf(fp,"%f", &x475); 
   fscanf(fp,"%f", &x476); 
   fscanf(fp,"%f", &x477); 
   fscanf(fp,"%f", &x478); 
   fscanf(fp,"%f", &x479); 
   fscanf(fp,"%f", &x480); 
   fscanf(fp,"%f", &x481); 
   fscanf(fp,"%f", &x482); 
   fscanf(fp,"%f", &x483); 
   fscanf(fp,"%f", &x484); 
   fscanf(fp,"%f", &x485); 
   fscanf(fp,"%f", &x487); 
   fscanf(fp,"%f", &x488); 
   fscanf(fp,"%f", &x489); 
   fscanf(fp,"%f", &x490); 
   fscanf(fp,"%f", &x491); 
   fscanf(fp,"%f", &x492); 
   fscanf(fp,"%f", &x493); 
   fscanf(fp,"%f", &x494); 
   fscanf(fp,"%f", &x495); 
   fscanf(fp,"%f", &x496); 
   fscanf(fp,"%f", &x497); 
   fscanf(fp,"%f", &x498); 
   fscanf(fp,"%f", &x499); 
   fscanf(fp,"%f", &x501); 
   fscanf(fp,"%f", &x502); 
   fscanf(fp,"%f", &x503); 
   fscanf(fp,"%f", &x504); 
   fscanf(fp,"%f", &x505); 
   fscanf(fp,"%f", &x506); 
   fscanf(fp,"%f", &x507); 
   fscanf(fp,"%f", &x508); 
   fscanf(fp,"%f", &x509); 
   fscanf(fp,"%f", &x510); 
   fscanf(fp,"%f", &x511); 
   fscanf(fp,"%f", &x512); 
   fscanf(fp,"%f", &x513); 
   fscanf(fp,"%f", &x514); 
   fscanf(fp,"%f", &x515); 
   fscanf(fp,"%f", &x517); 
   fscanf(fp,"%f", &x518); 
   fscanf(fp,"%f", &x519); 
   fscanf(fp,"%f", &x520); 
   fscanf(fp,"%f", &x521); 
   fscanf(fp,"%f", &x522); 
   fscanf(fp,"%f", &x523); 
   fscanf(fp,"%f", &x524); 
   fscanf(fp,"%f", &x525); 
   fscanf(fp,"%f", &x526); 
   fscanf(fp,"%f", &x527); 
   fscanf(fp,"%f", &x528); 
   fscanf(fp,"%f", &x529); 
   fscanf(fp,"%f", &x530); 
   fscanf(fp,"%f", &x531); 
   fscanf(fp,"%f", &x533); 
   fscanf(fp,"%f", &x534); 
   fscanf(fp,"%f", &x535); 
   fscanf(fp,"%f", &x536); 
   fscanf(fp,"%f", &x537); 
   fscanf(fp,"%f", &x538); 
   fscanf(fp,"%f", &x539); 
   fscanf(fp,"%f", &x540); 
   fscanf(fp,"%f", &x541); 
   fscanf(fp,"%f", &x542); 
   fscanf(fp,"%f", &x543); 
   fscanf(fp,"%f", &x544); 
   fscanf(fp,"%f", &x545); 
   fscanf(fp,"%f", &x547); 
   fscanf(fp,"%f", &x548); 
   fscanf(fp,"%f", &x549); 
   fscanf(fp,"%f", &x550); 
   fscanf(fp,"%f", &x551); 
   fscanf(fp,"%f", &x552); 
   fscanf(fp,"%f", &x553); 
   fscanf(fp,"%f", &x554); 
   fscanf(fp,"%f", &x555); 
   fscanf(fp,"%f", &x556); 
   fscanf(fp,"%f", &x557); 
   fscanf(fp,"%f", &x558); 
   fscanf(fp,"%f", &x559); 
   fscanf(fp,"%f", &x560); 
   fscanf(fp,"%f", &x561); 
   fscanf(fp,"%f", &x563); 
   fscanf(fp,"%f", &x564); 
   fscanf(fp,"%f", &x565); 
   fscanf(fp,"%f", &x566); 
   fscanf(fp,"%f", &x567); 
   fscanf(fp,"%f", &x568); 
   fscanf(fp,"%f", &x569); 
   fscanf(fp,"%f", &x570); 
   fscanf(fp,"%f", &x571); 
   fscanf(fp,"%f", &x572); 
   fscanf(fp,"%f", &x573); 
   fscanf(fp,"%f", &x574); 
   fscanf(fp,"%f", &x575); 
   fscanf(fp,"%f", &x576); 
   fscanf(fp,"%f", &x577); 

   fclose(fp);
   res=-( + 10*x66 + 9.5*x67 + 9*x68 + 8.5*x69 + 8*x70 + 7.5*x71 + 7*x72
 + 6.5*x73 + 6*x74 + 5.5*x75 + 5*x76 + 4.5*x77 + 4*x78 + 3.5*x79 + 3*x80
 + 2.5*x81 + 10*x82 + 9.5*x83 + 9*x84 + 8.5*x85 + 8*x86 + 7.5*x87 + 7*x88
 + 6.5*x89 + 6*x90 + 5.5*x91 + 5*x92 + 4.5*x93 + 4*x94 + 3.5*x95 + 3*x96
 + 2.5*x97 + 9*x98 + 8.5*x99 + 8*x100 + 7.5*x101 + 7*x102 + 6.5*x103
 + 6*x104 + 5.5*x105 + 5*x106 + 4.5*x107 + 4*x108 + 3.5*x109 + 3*x110
 + 2.5*x111 + 2*x112 + 1.5*x113 + 9*x114 + 8.5*x115 + 8*x116 + 7.5*x117
 + 7*x118 + 6.5*x119 + 6*x120 + 5.5*x121 + 5*x122 + 4.5*x123 + 4*x124
 + 3.5*x125 + 3*x126 + 2.5*x127 + 2*x128 + 1.5*x129 + 9*x130 + 8.5*x131
 + 8*x132 + 7.5*x133 + 7*x134 + 6.5*x135 + 6*x136 + 5.5*x137 + 5*x138
 + 4.5*x139 + 4*x140 + 3.5*x141 + 3*x142 + 2.5*x143 + 2*x144 + 1.5*x145
 + 8*x146 + 7.5*x147 + 7*x148 + 6.5*x149 + 6*x150 + 5.5*x151 + 5*x152
 + 4.5*x153 + 4*x154 + 3.5*x155 + 3*x156 + 2.5*x157 + 2*x158 + 1.5*x159
 + x160 + 0.5*x161 + 8*x162 + 7.5*x163 + 7*x164 + 6.5*x165 + 6*x166
 + 5.5*x167 + 5*x168 + 4.5*x169 + 4*x170 + 3.5*x171 + 3*x172 + 2.5*x173
 + 2*x174 + 1.5*x175 + x176 + 0.5*x177 + 8*x178 + 7.5*x179 + 7*x180
 + 6.5*x181 + 6*x182 + 5.5*x183 + 5*x184 + 4.5*x185 + 4*x186 + 3.5*x187
 + 3*x188 + 2.5*x189 + 2*x190 + 1.5*x191 + x192 + 0.5*x193 + 7*x194
 + 6.5*x195 + 6*x196 + 5.5*x197 + 5*x198 + 4.5*x199 + 4*x200 + 3.5*x201
 + 3*x202 + 2.5*x203 + 2*x204 + 1.5*x205 + x206 + 0.5*x207 - 0.5*x209
 + 7*x210 + 6.5*x211 + 6*x212 + 5.5*x213 + 5*x214 + 4.5*x215 + 4*x216
 + 3.5*x217 + 3*x218 + 2.5*x219 + 2*x220 + 1.5*x221 + x222 + 0.5*x223
 - 0.5*x225 + 7*x226 + 6.5*x227 + 6*x228 + 5.5*x229 + 5*x230 + 4.5*x231
 + 4*x232 + 3.5*x233 + 3*x234 + 2.5*x235 + 2*x236 + 1.5*x237 + x238
 + 0.5*x239 - 0.5*x241 + 7*x242 + 6.5*x243 + 6*x244 + 5.5*x245 + 5*x246
 + 4.5*x247 + 4*x248 + 3.5*x249 + 3*x250 + 2.5*x251 + 2*x252 + 1.5*x253
 + x254 + 0.5*x255 - 0.5*x257 + 6*x258 + 5.5*x259 + 5*x260 + 4.5*x261
 + 4*x262 + 3.5*x263 + 3*x264 + 2.5*x265 + 2*x266 + 1.5*x267 + x268
 + 0.5*x269 - 0.5*x271 - x272 - 1.5*x273 + 6*x274 + 5.5*x275 + 5*x276
 + 4.5*x277 + 4*x278 + 3.5*x279 + 3*x280 + 2.5*x281 + 2*x282 + 1.5*x283
 + x284 + 0.5*x285 - 0.5*x287 - x288 - 1.5*x289 + 6*x290 + 5.5*x291
 + 5*x292 + 4.5*x293 + 4*x294 + 3.5*x295 + 3*x296 + 2.5*x297 + 2*x298
 + 1.5*x299 + x300 + 0.5*x301 - 0.5*x303 - x304 - 1.5*x305 + 5*x306
 + 4.5*x307 + 4*x308 + 3.5*x309 + 3*x310 + 2.5*x311 + 2*x312 + 1.5*x313
 + x314 + 0.5*x315 - 0.5*x317 - x318 - 1.5*x319 - 2*x320 - 2.5*x321
 + 5*x322 + 4.5*x323 + 4*x324 + 3.5*x325 + 3*x326 + 2.5*x327 + 2*x328
 + 1.5*x329 + x330 + 0.5*x331 - 0.5*x333 - x334 - 1.5*x335 - 2*x336
 - 2.5*x337 + 4*x338 + 3.5*x339 + 3*x340 + 2.5*x341 + 2*x342 + 1.5*x343
 + x344 + 0.5*x345 - 0.5*x347 - x348 - 1.5*x349 - 2*x350 - 2.5*x351
 - 3*x352 - 3.5*x353 + 4*x354 + 3.5*x355 + 3*x356 + 2.5*x357 + 2*x358
 + 1.5*x359 + x360 + 0.5*x361 - 0.5*x363 - x364 - 1.5*x365 - 2*x366
 - 2.5*x367 - 3*x368 - 3.5*x369 + 4*x370 + 3.5*x371 + 3*x372 + 2.5*x373
 + 2*x374 + 1.5*x375 + x376 + 0.5*x377 - 0.5*x379 - x380 - 1.5*x381
 - 2*x382 - 2.5*x383 - 3*x384 - 3.5*x385 + 3*x386 + 2.5*x387 + 2*x388
 + 1.5*x389 + x390 + 0.5*x391 - 0.5*x393 - x394 - 1.5*x395 - 2*x396
 - 2.5*x397 - 3*x398 - 3.5*x399 - 4*x400 - 4.5*x401 + 3*x402 + 2.5*x403
 + 2*x404 + 1.5*x405 + x406 + 0.5*x407 - 0.5*x409 - x410 - 1.5*x411
 - 2*x412 - 2.5*x413 - 3*x414 - 3.5*x415 - 4*x416 - 4.5*x417 + 3*x418
 + 2.5*x419 + 2*x420 + 1.5*x421 + x422 + 0.5*x423 - 0.5*x425 - x426
 - 1.5*x427 - 2*x428 - 2.5*x429 - 3*x430 - 3.5*x431 - 4*x432 - 4.5*x433
 + 3*x434 + 2.5*x435 + 2*x436 + 1.5*x437 + x438 + 0.5*x439 - 0.5*x441
 - x442 - 1.5*x443 - 2*x444 - 2.5*x445 - 3*x446 - 3.5*x447 - 4*x448
 - 4.5*x449 + 2*x450 + 1.5*x451 + x452 + 0.5*x453 - 0.5*x455 - x456
 - 1.5*x457 - 2*x458 - 2.5*x459 - 3*x460 - 3.5*x461 - 4*x462 - 4.5*x463
 - 5*x464 - 5.5*x465 + 2*x466 + 1.5*x467 + x468 + 0.5*x469 - 0.5*x471
 - x472 - 1.5*x473 - 2*x474 - 2.5*x475 - 3*x476 - 3.5*x477 - 4*x478
 - 4.5*x479 - 5*x480 - 5.5*x481 + 2*x482 + 1.5*x483 + x484 + 0.5*x485
 - 0.5*x487 - x488 - 1.5*x489 - 2*x490 - 2.5*x491 - 3*x492 - 3.5*x493
 - 4*x494 - 4.5*x495 - 5*x496 - 5.5*x497 + x498 + 0.5*x499 - 0.5*x501
 - x502 - 1.5*x503 - 2*x504 - 2.5*x505 - 3*x506 - 3.5*x507 - 4*x508
 - 4.5*x509 - 5*x510 - 5.5*x511 - 6*x512 - 6.5*x513 + x514 + 0.5*x515
 - 0.5*x517 - x518 - 1.5*x519 - 2*x520 - 2.5*x521 - 3*x522 - 3.5*x523
 - 4*x524 - 4.5*x525 - 5*x526 - 5.5*x527 - 6*x528 - 6.5*x529 + x530
 + 0.5*x531 - 0.5*x533 - x534 - 1.5*x535 - 2*x536 - 2.5*x537 - 3*x538
 - 3.5*x539 - 4*x540 - 4.5*x541 - 5*x542 - 5.5*x543 - 6*x544 - 6.5*x545
 - 0.5*x547 - x548 - 1.5*x549 - 2*x550 - 2.5*x551 - 3*x552 - 3.5*x553
 - 4*x554 - 4.5*x555 - 5*x556 - 5.5*x557 - 6*x558 - 6.5*x559 - 7*x560
 - 7.5*x561 - 0.5*x563 - x564 - 1.5*x565 - 2*x566 - 2.5*x567 - 3*x568
 - 3.5*x569 - 4*x570 - 4.5*x571 - 5*x572 - 5.5*x573 - 6*x574 - 6.5*x575
 - 7*x576 - 7.5*x577 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
