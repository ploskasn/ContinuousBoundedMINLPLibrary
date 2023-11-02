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
   char *problemname="parabol5_2_1";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,x122,x123,x124,x125,x126,x127,x128,x129,x130,x131,x132,x133,x134,x135,x136,x137,x138,x139,x140,x141,x142,x143,x144,x145,x146,x147,x148,x149,x150,x151,x152,x153,x154,x155,x156,x157,x158,x159,x160,x161,x162,x163,x164,x165,x166,x167,x168,x169,x170,x171,x172,x173,x174,x175,x176,x177,x178,x179,x180,x181,x182,x183,x184,x185,x186,x187,x188,x189,x190,x191,x192,x193,x194,x195,x196,x197,x198,x199,x200,x201,x202,x203,x204,x205,x206,x207,x208,x209,x210,x211,x212,x213,x214,x215,x216,x217,x218,x219,x220,x221,x222,x223,x224,x225,x226,x227,x228,x229,x230,x231,x232,x233,x234,x235,x236,x237,x238,x239,x240,x241,x242,x243,x244,x245,x246,x247,x248,x249,x250,x251,x252,x253,x254,x255,x256,x257,x258,x259,x260,x261,x262,x263,x264,x265,x266,x267,x268,x269,x270,x271,x272,x273,x274,x275,x276,x277,x278,x279,x280,x281,x282,x283,x284,x285,x286,x287,x288,x289,x290,x291,x292,x293,x294,x295,x296,x297,x298,x299,x300,x301,x302,x303,x304,x305,x306,x307,x308,x309,x310,x311,x312,x313,x314,x315,x316,x317,x318,x319,x320,x321,x322,x323,x324,x325,x326,x327,x328,x329,x330,x331,x332,x333,x334,x335,x336,x337,x338,x339,x340,x341,x342,x343,x344,x345,x346,x347,x348,x349,x350,x351,x352,x353,x354,x355,x356,x357,x358,x359,x360,x361,x362,x363,x364,x365,x366,x367,x368,x369,x370,x371,x372,x373,x374,x375,x376,x377,x378,x379,x380,x381,x382,x383,x384,x385,x386,x387,x388,x389,x390,x391,x392,x393,x394,x395,x396,x397,x398,x399,x400,x401,x402;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x50); 
   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x60); 
   fscanf(fp,"%f", &x61); 
   fscanf(fp,"%f", &x62); 
   fscanf(fp,"%f", &x63); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x65); 
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
   fscanf(fp,"%f", &x208); 
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
   fscanf(fp,"%f", &x224); 
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
   fscanf(fp,"%f", &x240); 
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
   fscanf(fp,"%f", &x256); 
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
   fscanf(fp,"%f", &x270); 
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
   fscanf(fp,"%f", &x286); 
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
   fscanf(fp,"%f", &x302); 
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
   fscanf(fp,"%f", &x316); 
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
   fscanf(fp,"%f", &x332); 
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
   fscanf(fp,"%f", &x346); 
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
   fscanf(fp,"%f", &x362); 
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
   fscanf(fp,"%f", &x378); 
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
   fscanf(fp,"%f", &x392); 
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

   fclose(fp);
   res=-(-(0.00125*sqr(x2) - 0.00125*x2 + 0.0025*sqr(x3) - 0.0024999375*x3 + 0.0025
*sqr(x4) - 0.00249975*x4 + 0.0025*sqr(x5) - 0.0024994375*x5 + 0.0025*sqr(
x6) - 0.002499*x6 + 0.0025*sqr(x7) - 0.0024984375*x7 + 0.0025*sqr(x8) -
 0.00249775*x8 + 0.0025*sqr(x9) - 0.0024969375*x9 + 0.0025*sqr(x10) -
 0.002496*x10 + 0.0025*sqr(x11) - 0.0024949375*x11 + 0.0025*sqr(x12) -
 0.00249375*x12 + 0.0025*sqr(x13) - 0.0024924375*x13 + 0.0025*sqr(x14) -
 0.002491*x14 + 0.0025*sqr(x15) - 0.0024894375*x15 + 0.0025*sqr(x16) -
 0.00248775*x16 + 0.0025*sqr(x17) - 0.0024859375*x17 + 0.0025*sqr(x18) -
 0.002484*x18 + 0.0025*sqr(x19) - 0.0024819375*x19 + 0.0025*sqr(x20) -
 0.00247975*x20 + 0.0025*sqr(x21) - 0.0024774375*x21 + 0.0025*sqr(x22) -
 0.002475*x22 + 0.0025*sqr(x23) - 0.0024724375*x23 + 0.0025*sqr(x24) -
 0.00246975*x24 + 0.0025*sqr(x25) - 0.0024669375*x25 + 0.0025*sqr(x26) -
 0.002464*x26 + 0.0025*sqr(x27) - 0.0024609375*x27 + 0.0025*sqr(x28) -
 0.00245775*x28 + 0.0025*sqr(x29) - 0.0024544375*x29 + 0.0025*sqr(x30) -
 0.002451*x30 + 0.0025*sqr(x31) - 0.0024474375*x31 + 0.0025*sqr(x32) -
 0.00244375*x32 + 0.0025*sqr(x33) - 0.0024399375*x33 + 0.0025*sqr(x34) -
 0.002436*x34 + 0.0025*sqr(x35) - 0.0024319375*x35 + 0.0025*sqr(x36) -
 0.00242775*x36 + 0.0025*sqr(x37) - 0.0024234375*x37 + 0.0025*sqr(x38) -
 0.002419*x38 + 0.0025*sqr(x39) - 0.0024144375*x39 + 0.0025*sqr(x40) -
 0.00240975*x40 + 0.0025*sqr(x41) - 0.0024049375*x41 + 0.0025*sqr(x42) -
 0.0024*x42 + 0.0025*sqr(x43) - 0.0023949375*x43 + 0.0025*sqr(x44) -
 0.00238975*x44 + 0.0025*sqr(x45) - 0.0023844375*x45 + 0.0025*sqr(x46) -
 0.002379*x46 + 0.0025*sqr(x47) - 0.0023734375*x47 + 0.0025*sqr(x48) -
 0.00236775*x48 + 0.0025*sqr(x49) - 0.0023619375*x49 + 0.0025*sqr(x50) -
 0.002356*x50 + 0.0025*sqr(x51) - 0.0023499375*x51 + 0.0025*sqr(x52) -
 0.00234375*x52 + 0.0025*sqr(x53) - 0.0023374375*x53 + 0.0025*sqr(x54) -
 0.002331*x54 + 0.0025*sqr(x55) - 0.0023244375*x55 + 0.0025*sqr(x56) -
 0.00231775*x56 + 0.0025*sqr(x57) - 0.0023109375*x57 + 0.0025*sqr(x58) -
 0.002304*x58 + 0.0025*sqr(x59) - 0.0022969375*x59 + 0.0025*sqr(x60) -
 0.00228975*x60 + 0.0025*sqr(x61) - 0.0022824375*x61 + 0.0025*sqr(x62) -
 0.002275*x62 + 0.0025*sqr(x63) - 0.0022674375*x63 + 0.0025*sqr(x64) -
 0.00225975*x64 + 0.0025*sqr(x65) - 0.0022519375*x65 + 0.0025*sqr(x66) -
 0.002244*x66 + 0.0025*sqr(x67) - 0.0022359375*x67 + 0.0025*sqr(x68) -
 0.00222775*x68 + 0.0025*sqr(x69) - 0.0022194375*x69 + 0.0025*sqr(x70) -
 0.002211*x70 + 0.0025*sqr(x71) - 0.0022024375*x71 + 0.0025*sqr(x72) -
 0.00219375*x72 + 0.0025*sqr(x73) - 0.0021849375*x73 + 0.0025*sqr(x74) -
 0.002176*x74 + 0.0025*sqr(x75) - 0.0021669375*x75 + 0.0025*sqr(x76) -
 0.00215775*x76 + 0.0025*sqr(x77) - 0.0021484375*x77 + 0.0025*sqr(x78) -
 0.002139*x78 + 0.0025*sqr(x79) - 0.0021294375*x79 + 0.0025*sqr(x80) -
 0.00211975*x80 + 0.0025*sqr(x81) - 0.0021099375*x81 + 0.0025*sqr(x82) -
 0.0021*x82 + 0.0025*sqr(x83) - 0.0020899375*x83 + 0.0025*sqr(x84) -
 0.00207975*x84 + 0.0025*sqr(x85) - 0.0020694375*x85 + 0.0025*sqr(x86) -
 0.002059*x86 + 0.0025*sqr(x87) - 0.0020484375*x87 + 0.0025*sqr(x88) -
 0.00203775*x88 + 0.0025*sqr(x89) - 0.0020269375*x89 + 0.0025*sqr(x90) -
 0.002016*x90 + 0.0025*sqr(x91) - 0.0020049375*x91 + 0.0025*sqr(x92) -
 0.00199375*x92 + 0.0025*sqr(x93) - 0.0019824375*x93 + 0.0025*sqr(x94) -
 0.001971*x94 + 0.0025*sqr(x95) - 0.0019594375*x95 + 0.0025*sqr(x96) -
 0.00194775*x96 + 0.0025*sqr(x97) - 0.0019359375*x97 + 0.0025*sqr(x98) -
 0.001924*x98 + 0.0025*sqr(x99) - 0.0019119375*x99 + 0.0025*sqr(x100) -
 0.00189975*x100 + 0.0025*sqr(x101) - 0.0018874375*x101 + 0.0025*sqr(x102)
 - 0.001875*x102 + 0.0025*sqr(x103) - 0.0018624375*x103 + 0.0025*sqr(x104)
 - 0.00184975*x104 + 0.0025*sqr(x105) - 0.0018369375*x105 + 0.0025*sqr(
x106) - 0.001824*x106 + 0.0025*sqr(x107) - 0.0018109375*x107 + 0.0025*sqr(
x108) - 0.00179775*x108 + 0.0025*sqr(x109) - 0.0017844375*x109 + 0.0025*
sqr(x110) - 0.001771*x110 + 0.0025*sqr(x111) - 0.0017574375*x111 + 0.0025*
sqr(x112) - 0.00174375*x112 + 0.0025*sqr(x113) - 0.0017299375*x113 +
 0.0025*sqr(x114) - 0.001716*x114 + 0.0025*sqr(x115) - 0.0017019375*x115 +
 0.0025*sqr(x116) - 0.00168775*x116 + 0.0025*sqr(x117) - 0.0016734375*x117
 + 0.0025*sqr(x118) - 0.001659*x118 + 0.0025*sqr(x119) - 0.0016444375*x119
 + 0.0025*sqr(x120) - 0.00162975*x120 + 0.0025*sqr(x121) - 0.0016149375*
x121 + 0.0025*sqr(x122) - 0.0016*x122 + 0.0025*sqr(x123) - 0.0015849375*
x123 + 0.0025*sqr(x124) - 0.00156975*x124 + 0.0025*sqr(x125) -
 0.0015544375*x125 + 0.0025*sqr(x126) - 0.001539*x126 + 0.0025*sqr(x127) -
 0.0015234375*x127 + 0.0025*sqr(x128) - 0.00150775*x128 + 0.0025*sqr(x129)
 - 0.0014919375*x129 + 0.0025*sqr(x130) - 0.001476*x130 + 0.0025*sqr(x131)
 - 0.0014599375*x131 + 0.0025*sqr(x132) - 0.00144375*x132 + 0.0025*sqr(
x133) - 0.0014274375*x133 + 0.0025*sqr(x134) - 0.001411*x134 + 0.0025*sqr(
x135) - 0.0013944375*x135 + 0.0025*sqr(x136) - 0.00137775*x136 + 0.0025*
sqr(x137) - 0.0013609375*x137 + 0.0025*sqr(x138) - 0.001344*x138 + 0.0025*
sqr(x139) - 0.0013269375*x139 + 0.0025*sqr(x140) - 0.00130975*x140 +
 0.0025*sqr(x141) - 0.0012924375*x141 + 0.0025*sqr(x142) - 0.001275*x142 +
 0.0025*sqr(x143) - 0.0012574375*x143 + 0.0025*sqr(x144) - 0.00123975*x144
 + 0.0025*sqr(x145) - 0.0012219375*x145 + 0.0025*sqr(x146) - 0.001204*x146
 + 0.0025*sqr(x147) - 0.0011859375*x147 + 0.0025*sqr(x148) - 0.00116775*
x148 + 0.0025*sqr(x149) - 0.0011494375*x149 + 0.0025*sqr(x150) - 0.001131*
x150 + 0.0025*sqr(x151) - 0.0011124375*x151 + 0.0025*sqr(x152) -
 0.00109375*x152 + 0.0025*sqr(x153) - 0.0010749375*x153 + 0.0025*sqr(x154)
 - 0.001056*x154 + 0.0025*sqr(x155) - 0.0010369375*x155 + 0.0025*sqr(x156)
 - 0.00101775*x156 + 0.0025*sqr(x157) - 0.0009984375*x157 + 0.0025*sqr(
x158) - 0.000979*x158 + 0.0025*sqr(x159) - 0.0009594375*x159 + 0.0025*sqr(
x160) - 0.00093975*x160 + 0.0025*sqr(x161) - 0.0009199375*x161 + 0.0025*
sqr(x162) - 0.0009*x162 + 0.0025*sqr(x163) - 0.0008799375*x163 + 0.0025*
sqr(x164) - 0.00085975*x164 + 0.0025*sqr(x165) - 0.0008394375*x165 +
 0.0025*sqr(x166) - 0.000819*x166 + 0.0025*sqr(x167) - 0.0007984375*x167 +
 0.0025*sqr(x168) - 0.00077775*x168 + 0.0025*sqr(x169) - 0.0007569375*x169
 + 0.0025*sqr(x170) - 0.000736*x170 + 0.0025*sqr(x171) - 0.0007149375*x171
 + 0.0025*sqr(x172) - 0.00069375*x172 + 0.0025*sqr(x173) - 0.0006724375*
x173 + 0.0025*sqr(x174) - 0.000651*x174 + 0.0025*sqr(x175) - 0.0006294375*
x175 + 0.0025*sqr(x176) - 0.00060775*x176 + 0.0025*sqr(x177) -
 0.0005859375*x177 + 0.0025*sqr(x178) - 0.000564*x178 + 0.0025*sqr(x179) -
 0.0005419375*x179 + 0.0025*sqr(x180) - 0.00051975*x180 + 0.0025*sqr(x181)
 - 0.0004974375*x181 + 0.0025*sqr(x182) - 0.000475*x182 + 0.0025*sqr(x183)
 - 0.0004524375*x183 + 0.0025*sqr(x184) - 0.00042975*x184 + 0.0025*sqr(
x185) - 0.0004069375*x185 + 0.0025*sqr(x186) - 0.000384*x186 + 0.0025*sqr(
x187) - 0.0003609375*x187 + 0.0025*sqr(x188) - 0.00033775*x188 + 0.0025*
sqr(x189) - 0.0003144375*x189 + 0.0025*sqr(x190) - 0.000291*x190 + 0.0025*
sqr(x191) - 0.0002674375*x191 + 0.0025*sqr(x192) - 0.00024375*x192 +
 0.0025*sqr(x193) - 0.0002199375*x193 + 0.0025*sqr(x194) - 0.000196*x194 +
 0.0025*sqr(x195) - 0.0001719375*x195 + 0.0025*sqr(x196) - 0.00014775*x196
 + 0.0025*sqr(x197) - 0.0001234375*x197 + 0.0025*sqr(x198) -
 9.90000000000002e-5*x198 + 0.0025*sqr(x199) - 7.44375e-5*x199 + 0.0025*
sqr(x200) - 4.97500000000001e-5*x200 + 0.0025*sqr(x201) -
 2.49374999999999e-5*x201 + 0.00125*sqr(x202) + 3.95e-6*sqr(x203) + 3.95e-6
*sqr(x204) + 3.95e-6*sqr(x205) + 3.95e-6*sqr(x206) + 3.95e-6*sqr(x207) +
 3.95e-6*sqr(x208) + 3.95e-6*sqr(x209) + 3.95e-6*sqr(x210) + 3.95e-6*sqr(
x211) + 3.95e-6*sqr(x212) + 3.95e-6*sqr(x213) + 3.95e-6*sqr(x214) +
 3.95e-6*sqr(x215) + 3.95e-6*sqr(x216) + 3.95e-6*sqr(x217) + 3.95e-6*sqr(
x218) + 3.95e-6*sqr(x219) + 3.95e-6*sqr(x220) + 3.95e-6*sqr(x221) +
 3.95e-6*sqr(x222) + 3.95e-6*sqr(x223) + 3.95e-6*sqr(x224) + 3.95e-6*sqr(
x225) + 3.95e-6*sqr(x226) + 3.95e-6*sqr(x227) + 3.95e-6*sqr(x228) +
 3.95e-6*sqr(x229) + 3.95e-6*sqr(x230) + 3.95e-6*sqr(x231) + 3.95e-6*sqr(
x232) + 3.95e-6*sqr(x233) + 3.95e-6*sqr(x234) + 3.95e-6*sqr(x235) +
 3.95e-6*sqr(x236) + 3.95e-6*sqr(x237) + 3.95e-6*sqr(x238) + 3.95e-6*sqr(
x239) + 3.95e-6*sqr(x240) + 3.95e-6*sqr(x241) + 3.95e-6*sqr(x242) +
 3.95e-6*sqr(x243) + 3.95e-6*sqr(x244) + 3.95e-6*sqr(x245) + 3.95e-6*sqr(
x246) + 3.95e-6*sqr(x247) + 3.95e-6*sqr(x248) + 3.95e-6*sqr(x249) +
 3.95e-6*sqr(x250) + 3.95e-6*sqr(x251) + 3.95e-6*sqr(x252) + 3.95e-6*sqr(
x253) + 3.95e-6*sqr(x254) + 3.95e-6*sqr(x255) + 3.95e-6*sqr(x256) +
 3.95e-6*sqr(x257) + 3.95e-6*sqr(x258) + 3.95e-6*sqr(x259) + 3.95e-6*sqr(
x260) + 3.95e-6*sqr(x261) + 3.95e-6*sqr(x262) + 3.95e-6*sqr(x263) +
 3.95e-6*sqr(x264) + 3.95e-6*sqr(x265) + 3.95e-6*sqr(x266) + 3.95e-6*sqr(
x267) + 3.95e-6*sqr(x268) + 3.95e-6*sqr(x269) + 3.95e-6*sqr(x270) +
 3.95e-6*sqr(x271) + 3.95e-6*sqr(x272) + 3.95e-6*sqr(x273) + 3.95e-6*sqr(
x274) + 3.95e-6*sqr(x275) + 3.95e-6*sqr(x276) + 3.95e-6*sqr(x277) +
 3.95e-6*sqr(x278) + 3.95e-6*sqr(x279) + 3.95e-6*sqr(x280) + 3.95e-6*sqr(
x281) + 3.95e-6*sqr(x282) + 3.95e-6*sqr(x283) + 3.95e-6*sqr(x284) +
 3.95e-6*sqr(x285) + 3.95e-6*sqr(x286) + 3.95e-6*sqr(x287) + 3.95e-6*sqr(
x288) + 3.95e-6*sqr(x289) + 3.95e-6*sqr(x290) + 3.95e-6*sqr(x291) +
 3.95e-6*sqr(x292) + 3.95e-6*sqr(x293) + 3.95e-6*sqr(x294) + 3.95e-6*sqr(
x295) + 3.95e-6*sqr(x296) + 3.95e-6*sqr(x297) + 3.95e-6*sqr(x298) +
 3.95e-6*sqr(x299) + 3.95e-6*sqr(x300) + 3.95e-6*sqr(x301) + 3.95e-6*sqr(
x302) + 3.95e-6*sqr(x303) + 3.95e-6*sqr(x304) + 3.95e-6*sqr(x305) +
 3.95e-6*sqr(x306) + 3.95e-6*sqr(x307) + 3.95e-6*sqr(x308) + 3.95e-6*sqr(
x309) + 3.95e-6*sqr(x310) + 3.95e-6*sqr(x311) + 3.95e-6*sqr(x312) +
 3.95e-6*sqr(x313) + 3.95e-6*sqr(x314) + 3.95e-6*sqr(x315) + 3.95e-6*sqr(
x316) + 3.95e-6*sqr(x317) + 3.95e-6*sqr(x318) + 3.95e-6*sqr(x319) +
 3.95e-6*sqr(x320) + 3.95e-6*sqr(x321) + 3.95e-6*sqr(x322) + 3.95e-6*sqr(
x323) + 3.95e-6*sqr(x324) + 3.95e-6*sqr(x325) + 3.95e-6*sqr(x326) +
 3.95e-6*sqr(x327) + 3.95e-6*sqr(x328) + 3.95e-6*sqr(x329) + 3.95e-6*sqr(
x330) + 3.95e-6*sqr(x331) + 3.95e-6*sqr(x332) + 3.95e-6*sqr(x333) +
 3.95e-6*sqr(x334) + 3.95e-6*sqr(x335) + 3.95e-6*sqr(x336) + 3.95e-6*sqr(
x337) + 3.95e-6*sqr(x338) + 3.95e-6*sqr(x339) + 3.95e-6*sqr(x340) +
 3.95e-6*sqr(x341) + 3.95e-6*sqr(x342) + 3.95e-6*sqr(x343) + 3.95e-6*sqr(
x344) + 3.95e-6*sqr(x345) + 3.95e-6*sqr(x346) + 3.95e-6*sqr(x347) +
 3.95e-6*sqr(x348) + 3.95e-6*sqr(x349) + 3.95e-6*sqr(x350) + 3.95e-6*sqr(
x351) + 3.95e-6*sqr(x352) + 3.95e-6*sqr(x353) + 3.95e-6*sqr(x354) +
 3.95e-6*sqr(x355) + 3.95e-6*sqr(x356) + 3.95e-6*sqr(x357) + 3.95e-6*sqr(
x358) + 3.95e-6*sqr(x359) + 3.95e-6*sqr(x360) + 3.95e-6*sqr(x361) +
 3.95e-6*sqr(x362) + 3.95e-6*sqr(x363) + 3.95e-6*sqr(x364) + 3.95e-6*sqr(
x365) + 3.95e-6*sqr(x366) + 3.95e-6*sqr(x367) + 3.95e-6*sqr(x368) +
 3.95e-6*sqr(x369) + 3.95e-6*sqr(x370) + 3.95e-6*sqr(x371) + 3.95e-6*sqr(
x372) + 3.95e-6*sqr(x373) + 3.95e-6*sqr(x374) + 3.95e-6*sqr(x375) +
 3.95e-6*sqr(x376) + 3.95e-6*sqr(x377) + 3.95e-6*sqr(x378) + 3.95e-6*sqr(
x379) + 3.95e-6*sqr(x380) + 3.95e-6*sqr(x381) + 3.95e-6*sqr(x382) +
 3.95e-6*sqr(x383) + 3.95e-6*sqr(x384) + 3.95e-6*sqr(x385) + 3.95e-6*sqr(
x386) + 3.95e-6*sqr(x387) + 3.95e-6*sqr(x388) + 3.95e-6*sqr(x389) +
 3.95e-6*sqr(x390) + 3.95e-6*sqr(x391) + 3.95e-6*sqr(x392) + 3.95e-6*sqr(
x393) + 3.95e-6*sqr(x394) + 3.95e-6*sqr(x395) + 3.95e-6*sqr(x396) +
 3.95e-6*sqr(x397) + 3.95e-6*sqr(x398) + 3.95e-6*sqr(x399) + 3.95e-6*sqr(
x400) + 3.95e-6*sqr(x401) + 1.975e-6*sqr(x402))  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
