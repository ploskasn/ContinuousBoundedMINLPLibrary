#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  

float sqr(float b)
{
   float z;
   z = b*b;
   return(z);
}

int main(int argc, char** argv) { 
   char *problemname="popdynm25";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x2,x3,x4,x5,x6,x7,x8,x9,x217,x225,x10,x218,x226,x11,x219,x227,x12,x220,x228,x13,x221,x229,x14,x222,x230,x15,x223,x231,x16,x224,x232,x17,x233,x241,x18,x234,x242,x19,x235,x243,x20,x236,x244,x21,x237,x245,x22,x238,x246,x23,x239,x247,x24,x240,x248,x25,x249,x257,x26,x250,x258,x27,x251,x259,x28,x252,x260,x29,x253,x261,x30,x254,x262,x31,x255,x263,x32,x256,x264,x41,x42,x43,x44,x45,x46,x47,x48,x49,x297,x305,x50,x298,x306,x51,x299,x307,x52,x300,x308,x53,x301,x309,x54,x302,x310,x55,x303,x311,x56,x304,x312,x57,x313,x321,x58,x314,x322,x59,x315,x323,x60,x316,x324,x61,x317,x325,x62,x318,x326,x63,x319,x327,x64,x320,x328,x65,x329,x337,x66,x330,x338,x67,x331,x339,x68,x332,x340,x69,x333,x341,x70,x334,x342,x71,x335,x343,x72,x336,x344,x81,x82,x83,x84,x85,x86,x87,x88,x89,x377,x385,x90,x378,x386,x91,x379,x387,x92,x380,x388,x93,x381,x389,x94,x382,x390,x95,x383,x391,x96,x384,x392,x97,x393,x401,x98,x394,x402,x99,x395,x403,x100,x396,x404,x101,x397,x405,x102,x398,x406,x103,x399,x407,x104,x400,x408,x105,x409,x417,x106,x410,x418,x107,x411,x419,x108,x412,x420,x109,x413,x421,x110,x414,x422,x111,x415,x423,x112,x416,x424,x121,x122,x123,x124,x125,x126,x127,x128,x129,x457,x465,x130,x458,x466,x131,x459,x467,x132,x460,x468,x133,x461,x469,x134,x462,x470,x135,x463,x471,x136,x464,x472,x137,x473,x481,x138,x474,x482,x139,x475,x483,x140,x476,x484,x141,x477,x485,x142,x478,x486,x143,x479,x487,x144,x480,x488,x145,x489,x497,x146,x490,x498,x147,x491,x499,x148,x492,x500,x149,x493,x501,x150,x494,x502,x151,x495,x503,x152,x496,x504,x161,x162,x163,x164,x165,x166,x167,x168,x169,x537,x545,x170,x538,x546,x171,x539,x547,x172,x540,x548,x173,x541,x549,x174,x542,x550,x175,x543,x551,x176,x544,x552,x177,x553,x561,x178,x554,x562,x179,x555,x563,x180,x556,x564,x181,x557,x565,x182,x558,x566,x183,x559,x567,x184,x560,x568,x185,x569,x577,x186,x570,x578,x187,x571,x579,x188,x572,x580,x189,x573,x581,x190,x574,x582,x191,x575,x583,x192,x576,x584,x193,x585,x593,x194,x586,x594,x195,x587,x595,x196,x588,x596,x197,x589,x597,x198,x590,x598,x199,x591,x599,x200,x592,x600;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x217); 
   fscanf(fp,"%f", &x225); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x218); 
   fscanf(fp,"%f", &x226); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x219); 
   fscanf(fp,"%f", &x227); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x220); 
   fscanf(fp,"%f", &x228); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x221); 
   fscanf(fp,"%f", &x229); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x222); 
   fscanf(fp,"%f", &x230); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x223); 
   fscanf(fp,"%f", &x231); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x224); 
   fscanf(fp,"%f", &x232); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x233); 
   fscanf(fp,"%f", &x241); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x234); 
   fscanf(fp,"%f", &x242); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x235); 
   fscanf(fp,"%f", &x243); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x236); 
   fscanf(fp,"%f", &x244); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x237); 
   fscanf(fp,"%f", &x245); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x238); 
   fscanf(fp,"%f", &x246); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x239); 
   fscanf(fp,"%f", &x247); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x240); 
   fscanf(fp,"%f", &x248); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x249); 
   fscanf(fp,"%f", &x257); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x250); 
   fscanf(fp,"%f", &x258); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x251); 
   fscanf(fp,"%f", &x259); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x252); 
   fscanf(fp,"%f", &x260); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x253); 
   fscanf(fp,"%f", &x261); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x254); 
   fscanf(fp,"%f", &x262); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x255); 
   fscanf(fp,"%f", &x263); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x256); 
   fscanf(fp,"%f", &x264); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x297); 
   fscanf(fp,"%f", &x305); 
   fscanf(fp,"%f", &x50); 
   fscanf(fp,"%f", &x298); 
   fscanf(fp,"%f", &x306); 
   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &x299); 
   fscanf(fp,"%f", &x307); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x300); 
   fscanf(fp,"%f", &x308); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x301); 
   fscanf(fp,"%f", &x309); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x302); 
   fscanf(fp,"%f", &x310); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x303); 
   fscanf(fp,"%f", &x311); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x304); 
   fscanf(fp,"%f", &x312); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x313); 
   fscanf(fp,"%f", &x321); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x314); 
   fscanf(fp,"%f", &x322); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x315); 
   fscanf(fp,"%f", &x323); 
   fscanf(fp,"%f", &x60); 
   fscanf(fp,"%f", &x316); 
   fscanf(fp,"%f", &x324); 
   fscanf(fp,"%f", &x61); 
   fscanf(fp,"%f", &x317); 
   fscanf(fp,"%f", &x325); 
   fscanf(fp,"%f", &x62); 
   fscanf(fp,"%f", &x318); 
   fscanf(fp,"%f", &x326); 
   fscanf(fp,"%f", &x63); 
   fscanf(fp,"%f", &x319); 
   fscanf(fp,"%f", &x327); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x320); 
   fscanf(fp,"%f", &x328); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x329); 
   fscanf(fp,"%f", &x337); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x330); 
   fscanf(fp,"%f", &x338); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x331); 
   fscanf(fp,"%f", &x339); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x332); 
   fscanf(fp,"%f", &x340); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x333); 
   fscanf(fp,"%f", &x341); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x334); 
   fscanf(fp,"%f", &x342); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &x335); 
   fscanf(fp,"%f", &x343); 
   fscanf(fp,"%f", &x72); 
   fscanf(fp,"%f", &x336); 
   fscanf(fp,"%f", &x344); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x377); 
   fscanf(fp,"%f", &x385); 
   fscanf(fp,"%f", &x90); 
   fscanf(fp,"%f", &x378); 
   fscanf(fp,"%f", &x386); 
   fscanf(fp,"%f", &x91); 
   fscanf(fp,"%f", &x379); 
   fscanf(fp,"%f", &x387); 
   fscanf(fp,"%f", &x92); 
   fscanf(fp,"%f", &x380); 
   fscanf(fp,"%f", &x388); 
   fscanf(fp,"%f", &x93); 
   fscanf(fp,"%f", &x381); 
   fscanf(fp,"%f", &x389); 
   fscanf(fp,"%f", &x94); 
   fscanf(fp,"%f", &x382); 
   fscanf(fp,"%f", &x390); 
   fscanf(fp,"%f", &x95); 
   fscanf(fp,"%f", &x383); 
   fscanf(fp,"%f", &x391); 
   fscanf(fp,"%f", &x96); 
   fscanf(fp,"%f", &x384); 
   fscanf(fp,"%f", &x392); 
   fscanf(fp,"%f", &x97); 
   fscanf(fp,"%f", &x393); 
   fscanf(fp,"%f", &x401); 
   fscanf(fp,"%f", &x98); 
   fscanf(fp,"%f", &x394); 
   fscanf(fp,"%f", &x402); 
   fscanf(fp,"%f", &x99); 
   fscanf(fp,"%f", &x395); 
   fscanf(fp,"%f", &x403); 
   fscanf(fp,"%f", &x100); 
   fscanf(fp,"%f", &x396); 
   fscanf(fp,"%f", &x404); 
   fscanf(fp,"%f", &x101); 
   fscanf(fp,"%f", &x397); 
   fscanf(fp,"%f", &x405); 
   fscanf(fp,"%f", &x102); 
   fscanf(fp,"%f", &x398); 
   fscanf(fp,"%f", &x406); 
   fscanf(fp,"%f", &x103); 
   fscanf(fp,"%f", &x399); 
   fscanf(fp,"%f", &x407); 
   fscanf(fp,"%f", &x104); 
   fscanf(fp,"%f", &x400); 
   fscanf(fp,"%f", &x408); 
   fscanf(fp,"%f", &x105); 
   fscanf(fp,"%f", &x409); 
   fscanf(fp,"%f", &x417); 
   fscanf(fp,"%f", &x106); 
   fscanf(fp,"%f", &x410); 
   fscanf(fp,"%f", &x418); 
   fscanf(fp,"%f", &x107); 
   fscanf(fp,"%f", &x411); 
   fscanf(fp,"%f", &x419); 
   fscanf(fp,"%f", &x108); 
   fscanf(fp,"%f", &x412); 
   fscanf(fp,"%f", &x420); 
   fscanf(fp,"%f", &x109); 
   fscanf(fp,"%f", &x413); 
   fscanf(fp,"%f", &x421); 
   fscanf(fp,"%f", &x110); 
   fscanf(fp,"%f", &x414); 
   fscanf(fp,"%f", &x422); 
   fscanf(fp,"%f", &x111); 
   fscanf(fp,"%f", &x415); 
   fscanf(fp,"%f", &x423); 
   fscanf(fp,"%f", &x112); 
   fscanf(fp,"%f", &x416); 
   fscanf(fp,"%f", &x424); 
   fscanf(fp,"%f", &x121); 
   fscanf(fp,"%f", &x122); 
   fscanf(fp,"%f", &x123); 
   fscanf(fp,"%f", &x124); 
   fscanf(fp,"%f", &x125); 
   fscanf(fp,"%f", &x126); 
   fscanf(fp,"%f", &x127); 
   fscanf(fp,"%f", &x128); 
   fscanf(fp,"%f", &x129); 
   fscanf(fp,"%f", &x457); 
   fscanf(fp,"%f", &x465); 
   fscanf(fp,"%f", &x130); 
   fscanf(fp,"%f", &x458); 
   fscanf(fp,"%f", &x466); 
   fscanf(fp,"%f", &x131); 
   fscanf(fp,"%f", &x459); 
   fscanf(fp,"%f", &x467); 
   fscanf(fp,"%f", &x132); 
   fscanf(fp,"%f", &x460); 
   fscanf(fp,"%f", &x468); 
   fscanf(fp,"%f", &x133); 
   fscanf(fp,"%f", &x461); 
   fscanf(fp,"%f", &x469); 
   fscanf(fp,"%f", &x134); 
   fscanf(fp,"%f", &x462); 
   fscanf(fp,"%f", &x470); 
   fscanf(fp,"%f", &x135); 
   fscanf(fp,"%f", &x463); 
   fscanf(fp,"%f", &x471); 
   fscanf(fp,"%f", &x136); 
   fscanf(fp,"%f", &x464); 
   fscanf(fp,"%f", &x472); 
   fscanf(fp,"%f", &x137); 
   fscanf(fp,"%f", &x473); 
   fscanf(fp,"%f", &x481); 
   fscanf(fp,"%f", &x138); 
   fscanf(fp,"%f", &x474); 
   fscanf(fp,"%f", &x482); 
   fscanf(fp,"%f", &x139); 
   fscanf(fp,"%f", &x475); 
   fscanf(fp,"%f", &x483); 
   fscanf(fp,"%f", &x140); 
   fscanf(fp,"%f", &x476); 
   fscanf(fp,"%f", &x484); 
   fscanf(fp,"%f", &x141); 
   fscanf(fp,"%f", &x477); 
   fscanf(fp,"%f", &x485); 
   fscanf(fp,"%f", &x142); 
   fscanf(fp,"%f", &x478); 
   fscanf(fp,"%f", &x486); 
   fscanf(fp,"%f", &x143); 
   fscanf(fp,"%f", &x479); 
   fscanf(fp,"%f", &x487); 
   fscanf(fp,"%f", &x144); 
   fscanf(fp,"%f", &x480); 
   fscanf(fp,"%f", &x488); 
   fscanf(fp,"%f", &x145); 
   fscanf(fp,"%f", &x489); 
   fscanf(fp,"%f", &x497); 
   fscanf(fp,"%f", &x146); 
   fscanf(fp,"%f", &x490); 
   fscanf(fp,"%f", &x498); 
   fscanf(fp,"%f", &x147); 
   fscanf(fp,"%f", &x491); 
   fscanf(fp,"%f", &x499); 
   fscanf(fp,"%f", &x148); 
   fscanf(fp,"%f", &x492); 
   fscanf(fp,"%f", &x500); 
   fscanf(fp,"%f", &x149); 
   fscanf(fp,"%f", &x493); 
   fscanf(fp,"%f", &x501); 
   fscanf(fp,"%f", &x150); 
   fscanf(fp,"%f", &x494); 
   fscanf(fp,"%f", &x502); 
   fscanf(fp,"%f", &x151); 
   fscanf(fp,"%f", &x495); 
   fscanf(fp,"%f", &x503); 
   fscanf(fp,"%f", &x152); 
   fscanf(fp,"%f", &x496); 
   fscanf(fp,"%f", &x504); 
   fscanf(fp,"%f", &x161); 
   fscanf(fp,"%f", &x162); 
   fscanf(fp,"%f", &x163); 
   fscanf(fp,"%f", &x164); 
   fscanf(fp,"%f", &x165); 
   fscanf(fp,"%f", &x166); 
   fscanf(fp,"%f", &x167); 
   fscanf(fp,"%f", &x168); 
   fscanf(fp,"%f", &x169); 
   fscanf(fp,"%f", &x537); 
   fscanf(fp,"%f", &x545); 
   fscanf(fp,"%f", &x170); 
   fscanf(fp,"%f", &x538); 
   fscanf(fp,"%f", &x546); 
   fscanf(fp,"%f", &x171); 
   fscanf(fp,"%f", &x539); 
   fscanf(fp,"%f", &x547); 
   fscanf(fp,"%f", &x172); 
   fscanf(fp,"%f", &x540); 
   fscanf(fp,"%f", &x548); 
   fscanf(fp,"%f", &x173); 
   fscanf(fp,"%f", &x541); 
   fscanf(fp,"%f", &x549); 
   fscanf(fp,"%f", &x174); 
   fscanf(fp,"%f", &x542); 
   fscanf(fp,"%f", &x550); 
   fscanf(fp,"%f", &x175); 
   fscanf(fp,"%f", &x543); 
   fscanf(fp,"%f", &x551); 
   fscanf(fp,"%f", &x176); 
   fscanf(fp,"%f", &x544); 
   fscanf(fp,"%f", &x552); 
   fscanf(fp,"%f", &x177); 
   fscanf(fp,"%f", &x553); 
   fscanf(fp,"%f", &x561); 
   fscanf(fp,"%f", &x178); 
   fscanf(fp,"%f", &x554); 
   fscanf(fp,"%f", &x562); 
   fscanf(fp,"%f", &x179); 
   fscanf(fp,"%f", &x555); 
   fscanf(fp,"%f", &x563); 
   fscanf(fp,"%f", &x180); 
   fscanf(fp,"%f", &x556); 
   fscanf(fp,"%f", &x564); 
   fscanf(fp,"%f", &x181); 
   fscanf(fp,"%f", &x557); 
   fscanf(fp,"%f", &x565); 
   fscanf(fp,"%f", &x182); 
   fscanf(fp,"%f", &x558); 
   fscanf(fp,"%f", &x566); 
   fscanf(fp,"%f", &x183); 
   fscanf(fp,"%f", &x559); 
   fscanf(fp,"%f", &x567); 
   fscanf(fp,"%f", &x184); 
   fscanf(fp,"%f", &x560); 
   fscanf(fp,"%f", &x568); 
   fscanf(fp,"%f", &x185); 
   fscanf(fp,"%f", &x569); 
   fscanf(fp,"%f", &x577); 
   fscanf(fp,"%f", &x186); 
   fscanf(fp,"%f", &x570); 
   fscanf(fp,"%f", &x578); 
   fscanf(fp,"%f", &x187); 
   fscanf(fp,"%f", &x571); 
   fscanf(fp,"%f", &x579); 
   fscanf(fp,"%f", &x188); 
   fscanf(fp,"%f", &x572); 
   fscanf(fp,"%f", &x580); 
   fscanf(fp,"%f", &x189); 
   fscanf(fp,"%f", &x573); 
   fscanf(fp,"%f", &x581); 
   fscanf(fp,"%f", &x190); 
   fscanf(fp,"%f", &x574); 
   fscanf(fp,"%f", &x582); 
   fscanf(fp,"%f", &x191); 
   fscanf(fp,"%f", &x575); 
   fscanf(fp,"%f", &x583); 
   fscanf(fp,"%f", &x192); 
   fscanf(fp,"%f", &x576); 
   fscanf(fp,"%f", &x584); 
   fscanf(fp,"%f", &x193); 
   fscanf(fp,"%f", &x585); 
   fscanf(fp,"%f", &x593); 
   fscanf(fp,"%f", &x194); 
   fscanf(fp,"%f", &x586); 
   fscanf(fp,"%f", &x594); 
   fscanf(fp,"%f", &x195); 
   fscanf(fp,"%f", &x587); 
   fscanf(fp,"%f", &x595); 
   fscanf(fp,"%f", &x196); 
   fscanf(fp,"%f", &x588); 
   fscanf(fp,"%f", &x596); 
   fscanf(fp,"%f", &x197); 
   fscanf(fp,"%f", &x589); 
   fscanf(fp,"%f", &x597); 
   fscanf(fp,"%f", &x198); 
   fscanf(fp,"%f", &x590); 
   fscanf(fp,"%f", &x598); 
   fscanf(fp,"%f", &x199); 
   fscanf(fp,"%f", &x591); 
   fscanf(fp,"%f", &x599); 
   fscanf(fp,"%f", &x200); 
   fscanf(fp,"%f", &x592); 
   fscanf(fp,"%f", &x600); 

   fclose(fp);
   res=-( + (-(sqr((-20000) + x1) + sqr((-17000) + x2) + sqr((-10000) + x3) + sqr((-
  15000) + x4) + sqr((-12000) + x5) + sqr((-9000) + x6) + sqr((-7000) + x7
  ) + sqr((-3000) + x8) + sqr((-12445) + x9 + 0.1*x217 + 0.0125*x225) +
   sqr((-15411) + x10 + 0.1*x218 + 0.0125*x226) + sqr((-13040) + x11 + 0.1*
  x219 + 0.0125*x227) + sqr((-13338) + x12 + 0.1*x220 + 0.0125*x228) +
   sqr((-13484) + x13 + 0.1*x221 + 0.0125*x229) + sqr((-8426) + x14 + 0.1*
  x222 + 0.0125*x230) + sqr((-6615) + x15 + 0.1*x223 + 0.0125*x231) + sqr(
  (-4022) + x16 + 0.1*x224 + 0.0125*x232) + sqr((-7705) + x17 + 0.2*x233
   + 0.05*x241) + sqr((-13074) + x18 + 0.2*x234 + 0.05*x242) + sqr((-14623
  ) + x19 + 0.2*x235 + 0.05*x243) + sqr((-11976) + x20 + 0.2*x236 + 0.05*
  x244) + sqr((-12453) + x21 + 0.2*x237 + 0.05*x245) + sqr((-9272) + x22
   + 0.2*x238 + 0.05*x246) + sqr((-6891) + x23 + 0.2*x239 + 0.05*x247) +
   sqr((-5020) + x24 + 0.2*x240 + 0.05*x248) + sqr((-4664) + x25 + 0.3*x249
   + 0.1125*x257) + sqr((-8579) + x26 + 0.3*x250 + 0.1125*x258) + sqr((-
  12434) + x27 + 0.3*x251 + 0.1125*x259) + sqr((-12603) + x28 + 0.3*x252
   + 0.1125*x260) + sqr((-11738) + x29 + 0.3*x253 + 0.1125*x261) + sqr((-
  9710) + x30 + 0.3*x254 + 0.1125*x262) + sqr((-6821) + x31 + 0.3*x255 +
   0.1125*x263) + sqr((-5722) + x32 + 0.3*x256 + 0.1125*x264) + sqr((-2977)
   + x41) + sqr((-7053) + x42) + sqr((-11219) + x43) + sqr((-11340) + x44)
   + sqr((-13665) + x45) + sqr((-8534) + x46) + sqr((-6242) + x47) + sqr((
  -5695) + x48) + sqr((-1769) + x49 + 0.0999999999999996*x297 +
   0.0124999999999999*x305) + sqr((-5054) + x50 + 0.0999999999999996*x298
   + 0.0124999999999999*x306) + sqr((-10065) + x51 + 0.0999999999999996*
  x299 + 0.0124999999999999*x307) + sqr((-11232) + x52 +
   0.0999999999999996*x300 + 0.0124999999999999*x308) + sqr((-12112) + x53
   + 0.0999999999999996*x301 + 0.0124999999999999*x309) + sqr((-9600) +
   x54 + 0.0999999999999996*x302 + 0.0124999999999999*x310) + sqr((-6647)
   + x55 + 0.0999999999999996*x303 + 0.0124999999999999*x311) + sqr((-7034
  ) + x56 + 0.0999999999999996*x304 + 0.0124999999999999*x312) + sqr((-943
  ) + x57 + 0.2*x313 + 0.0499999999999999*x321) + sqr((-3907) + x58 + 0.2*
  x314 + 0.0499999999999999*x322) + sqr((-9473) + x59 + 0.2*x315 +
   0.0499999999999999*x323) + sqr((-10334) + x60 + 0.2*x316 +
   0.0499999999999999*x324) + sqr((-11115) + x61 + 0.2*x317 +
   0.0499999999999999*x325) + sqr((-8826) + x62 + 0.2*x318 +
   0.0499999999999999*x326) + sqr((-6842) + x63 + 0.2*x319 +
   0.0499999999999999*x327) + sqr((-7348) + x64 + 0.2*x320 +
   0.0499999999999999*x328) + sqr((-581) + x65 + 0.3*x329 + 0.1125*x337) +
   sqr((-2624) + x66 + 0.3*x330 + 0.1125*x338) + sqr((-7421) + x67 + 0.3*
  x331 + 0.1125*x339) + sqr((-10297) + x68 + 0.3*x332 + 0.1125*x340) +
   sqr((-12427) + x69 + 0.3*x333 + 0.1125*x341) + sqr((-8747) + x70 + 0.3*
  x334 + 0.1125*x342) + sqr((-7199) + x71 + 0.3*x335 + 0.1125*x343) + sqr(
  (-7684) + x72 + 0.3*x336 + 0.1125*x344) + sqr((-355) + x81) + sqr((-1744
  ) + x82) + sqr((-5369) + x83) + sqr((-7748) + x84) + sqr((-10057) + x85)
   + sqr((-8698) + x86) + sqr((-6542) + x87) + sqr((-7410) + x88) + sqr((-
  223) + x89 + 0.0999999999999996*x377 + 0.0124999999999999*x385) + sqr((-
  1272) + x90 + 0.0999999999999996*x378 + 0.0124999999999999*x386) + sqr((
  -4713) + x91 + 0.0999999999999996*x379 + 0.0124999999999999*x387) + sqr(
  (-6869) + x92 + 0.0999999999999996*x380 + 0.0124999999999999*x388) +
   sqr((-9564) + x93 + 0.0999999999999996*x381 + 0.0124999999999999*x389)
   + sqr((-8766) + x94 + 0.0999999999999996*x382 + 0.0124999999999999*x390
  ) + sqr((-6810) + x95 + 0.0999999999999996*x383 + 0.0124999999999999*
  x391) + sqr((-6961) + x96 + 0.0999999999999996*x384 + 0.0124999999999999
  *x392) + sqr((-137) + x97 + 0.199999999999999*x393 + 0.0499999999999996*
  x401) + sqr((-821) + x98 + 0.199999999999999*x394 + 0.0499999999999996*
  x402) + sqr((-3451) + x99 + 0.199999999999999*x395 + 0.0499999999999996*
  x403) + sqr((-6050) + x100 + 0.199999999999999*x396 + 0.0499999999999996
  *x404) + sqr((-8671) + x101 + 0.199999999999999*x397 +
   0.0499999999999996*x405) + sqr((-8291) + x102 + 0.199999999999999*x398
   + 0.0499999999999996*x406) + sqr((-6827) + x103 + 0.199999999999999*
  x399 + 0.0499999999999996*x407) + sqr((-7525) + x104 + 0.199999999999999
  *x400 + 0.0499999999999996*x408) + sqr((-87) + x105 + 0.3*x409 + 0.1125*
  x417) + sqr((-577) + x106 + 0.3*x410 + 0.1125*x418) + sqr((-2649) + x107
   + 0.3*x411 + 0.1125*x419) + sqr((-5454) + x108 + 0.3*x412 + 0.1125*x420
  ) + sqr((-8430) + x109 + 0.3*x413 + 0.1125*x421) + sqr((-7411) + x110 +
   0.3*x414 + 0.1125*x422) + sqr((-6423) + x111 + 0.3*x415 + 0.1125*x423)
   + sqr((-8388) + x112 + 0.3*x416 + 0.1125*x424) + sqr((-49) + x121) +
   sqr((-337) + x122) + sqr((-2058) + x123) + sqr((-4115) + x124) + sqr((-
  7435) + x125) + sqr((-7627) + x126) + sqr((-6268) + x127) + sqr((-7189)
   + x128) + sqr((-32) + x129 + 0.0999999999999996*x457 +
   0.0124999999999999*x465) + sqr((-228) + x130 + 0.0999999999999996*x458
   + 0.0124999999999999*x466) + sqr((-1440) + x131 + 0.0999999999999996*
  x459 + 0.0124999999999999*x467) + sqr((-3790) + x132 +
   0.0999999999999996*x460 + 0.0124999999999999*x468) + sqr((-6474) + x133
   + 0.0999999999999996*x461 + 0.0124999999999999*x469) + sqr((-6658) +
   x134 + 0.0999999999999996*x462 + 0.0124999999999999*x470) + sqr((-5859)
   + x135 + 0.0999999999999996*x463 + 0.0124999999999999*x471) + sqr((-
  7467) + x136 + 0.0999999999999996*x464 + 0.0124999999999999*x472) + sqr(
  (-17) + x137 + 0.199999999999999*x473 + 0.0499999999999996*x481) + sqr((
  -168) + x138 + 0.199999999999999*x474 + 0.0499999999999996*x482) + sqr((
  -1178) + x139 + 0.199999999999999*x475 + 0.0499999999999996*x483) + sqr(
  (-3087) + x140 + 0.199999999999999*x476 + 0.0499999999999996*x484) +
   sqr((-6524) + x141 + 0.199999999999999*x477 + 0.0499999999999996*x485)
   + sqr((-5880) + x142 + 0.199999999999999*x478 + 0.0499999999999996*x486
  ) + sqr((-5562) + x143 + 0.199999999999999*x479 + 0.0499999999999996*
  x487) + sqr((-7144) + x144 + 0.199999999999999*x480 + 0.0499999999999996
  *x488) + sqr((-11) + x145 + 0.3*x489 + 0.1125*x497) + sqr((-99) + x146
   + 0.3*x490 + 0.1125*x498) + sqr((-919) + x147 + 0.3*x491 + 0.1125*x499)
   + sqr((-2596) + x148 + 0.3*x492 + 0.1125*x500) + sqr((-5360) + x149 +
   0.3*x493 + 0.1125*x501) + sqr((-5762) + x150 + 0.3*x494 + 0.1125*x502)
   + sqr((-4480) + x151 + 0.3*x495 + 0.1125*x503) + sqr((-7256) + x152 +
   0.3*x496 + 0.1125*x504) + sqr((-7) + x161) + sqr((-65) + x162) + sqr((-
  647) + x163) + sqr((-1873) + x164) + sqr((-4556) + x165) + sqr((-5058)
   + x166) + sqr((-4944) + x167) + sqr((-7538) + x168) + sqr((-4) + x169
   + 0.0999999999999996*x537 + 0.0124999999999999*x545) + sqr((-44) + x170
   + 0.0999999999999996*x538 + 0.0124999999999999*x546) + sqr((-509) +
   x171 + 0.0999999999999996*x539 + 0.0124999999999999*x547) + sqr((-1571)
   + x172 + 0.0999999999999996*x540 + 0.0124999999999999*x548) + sqr((-
  4009) + x173 + 0.0999999999999996*x541 + 0.0124999999999999*x549) + sqr(
  (-4527) + x174 + 0.0999999999999996*x542 + 0.0124999999999999*x550) +
   sqr((-4233) + x175 + 0.0999999999999996*x543 + 0.0124999999999999*x551)
   + sqr((-6649) + x176 + 0.0999999999999996*x544 + 0.0124999999999999*
  x552) + sqr((-2) + x177 + 0.199999999999999*x553 + 0.0499999999999996*
  x561) + sqr((-27) + x178 + 0.199999999999999*x554 + 0.0499999999999996*
  x562) + sqr((-345) + x179 + 0.199999999999999*x555 + 0.0499999999999996*
  x563) + sqr((-1227) + x180 + 0.199999999999999*x556 + 0.0499999999999996
  *x564) + sqr((-3677) + x181 + 0.199999999999999*x557 +
   0.0499999999999996*x565) + sqr((-4229) + x182 + 0.199999999999999*x558
   + 0.0499999999999996*x566) + sqr((-3805) + x183 + 0.199999999999999*
  x559 + 0.0499999999999996*x567) + sqr((-6378) + x184 + 0.199999999999999
  *x560 + 0.0499999999999996*x568) + sqr((-1) + x185 + 0.299999999999999*
  x569 + 0.112499999999999*x577) + sqr((-20) + x186 + 0.299999999999999*
  x570 + 0.112499999999999*x578) + sqr((-231) + x187 + 0.299999999999999*
  x571 + 0.112499999999999*x579) + sqr((-934) + x188 + 0.299999999999999*
  x572 + 0.112499999999999*x580) + sqr((-3197) + x189 + 0.299999999999999*
  x573 + 0.112499999999999*x581) + sqr((-3695) + x190 + 0.299999999999999*
  x574 + 0.112499999999999*x582) + sqr((-3159) + x191 + 0.299999999999999*
  x575 + 0.112499999999999*x583) + sqr((-6454) + x192 + 0.299999999999999*
  x576 + 0.112499999999999*x584) + sqr((-1) + x193 + 0.399999999999999*
  x585 + 0.199999999999999*x593) + sqr((-12) + x194 + 0.399999999999999*
  x586 + 0.199999999999999*x594) + sqr((-198) + x195 + 0.399999999999999*
  x587 + 0.199999999999999*x595) + sqr((-707) + x196 + 0.399999999999999*
  x588 + 0.199999999999999*x596) + sqr((-2562) + x197 + 0.399999999999999*
  x589 + 0.199999999999999*x597) + sqr((-3163) + x198 + 0.399999999999999*
  x590 + 0.199999999999999*x598) + sqr((-3232) + x199 + 0.399999999999999*
  x591 + 0.199999999999999*x599) + sqr((-5566) + x200 + 0.399999999999999*
  x592 + 0.199999999999999*x600)))/ 1000 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
