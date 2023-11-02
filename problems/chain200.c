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
   char *problemname="chain200";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x202,x203,x2,x204,x3,x205,x4,x206,x5,x207,x6,x208,x7,x209,x8,x210,x9,x211,x10,x212,x11,x213,x12,x214,x13,x215,x14,x216,x15,x217,x16,x218,x17,x219,x18,x220,x19,x221,x20,x222,x21,x223,x22,x224,x23,x225,x24,x226,x25,x227,x26,x228,x27,x229,x28,x230,x29,x231,x30,x232,x31,x233,x32,x234,x33,x235,x34,x236,x35,x237,x36,x238,x37,x239,x38,x240,x39,x241,x40,x242,x41,x243,x42,x244,x43,x245,x44,x246,x45,x247,x46,x248,x47,x249,x48,x250,x49,x251,x50,x252,x51,x253,x52,x254,x53,x255,x54,x256,x55,x257,x56,x258,x57,x259,x58,x260,x59,x261,x60,x262,x61,x263,x62,x264,x63,x265,x64,x266,x65,x267,x66,x268,x67,x269,x68,x270,x69,x271,x70,x272,x71,x273,x72,x274,x73,x275,x74,x276,x75,x277,x76,x278,x77,x279,x78,x280,x79,x281,x80,x282,x81,x283,x82,x284,x83,x285,x84,x286,x85,x287,x86,x288,x87,x289,x88,x290,x89,x291,x90,x292,x91,x293,x92,x294,x93,x295,x94,x296,x95,x297,x96,x298,x97,x299,x98,x300,x99,x301,x100,x302,x101,x303,x102,x304,x103,x305,x104,x306,x105,x307,x106,x308,x107,x309,x108,x310,x109,x311,x110,x312,x111,x313,x112,x314,x113,x315,x114,x316,x115,x317,x116,x318,x117,x319,x118,x320,x119,x321,x120,x322,x121,x323,x122,x324,x123,x325,x124,x326,x125,x327,x126,x328,x127,x329,x128,x330,x129,x331,x130,x332,x131,x333,x132,x334,x133,x335,x134,x336,x135,x337,x136,x338,x137,x339,x138,x340,x139,x341,x140,x342,x141,x343,x142,x344,x143,x345,x144,x346,x145,x347,x146,x348,x147,x349,x148,x350,x149,x351,x150,x352,x151,x353,x152,x354,x153,x355,x154,x356,x155,x357,x156,x358,x157,x359,x158,x360,x159,x361,x160,x362,x161,x363,x162,x364,x163,x365,x164,x366,x165,x367,x166,x368,x167,x369,x168,x370,x169,x371,x170,x372,x171,x373,x172,x374,x173,x375,x174,x376,x175,x377,x176,x378,x177,x379,x178,x380,x179,x381,x180,x382,x181,x383,x182,x384,x183,x385,x184,x386,x185,x387,x186,x388,x187,x389,x188,x390,x189,x391,x190,x392,x191,x393,x192,x394,x193,x395,x194,x396,x195,x397,x196,x398,x197,x399,x198,x400,x199,x401,x200,x402;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x202); 
   fscanf(fp,"%f", &x203); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x204); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x205); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x206); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x207); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x208); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x209); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x210); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x211); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x212); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x213); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x214); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x215); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x216); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x217); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x218); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x219); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x220); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x221); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x222); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x223); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x224); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x225); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x226); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x227); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x228); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x229); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x230); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x231); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x232); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x233); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x234); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x235); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x236); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x237); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x238); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x239); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x240); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x241); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x242); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x243); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x244); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x245); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x246); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x247); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x248); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x249); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x250); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x251); 
   fscanf(fp,"%f", &x50); 
   fscanf(fp,"%f", &x252); 
   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &x253); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x254); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x255); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x256); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x257); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x258); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x259); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x260); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x261); 
   fscanf(fp,"%f", &x60); 
   fscanf(fp,"%f", &x262); 
   fscanf(fp,"%f", &x61); 
   fscanf(fp,"%f", &x263); 
   fscanf(fp,"%f", &x62); 
   fscanf(fp,"%f", &x264); 
   fscanf(fp,"%f", &x63); 
   fscanf(fp,"%f", &x265); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x266); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x267); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x268); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x269); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x270); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x271); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x272); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &x273); 
   fscanf(fp,"%f", &x72); 
   fscanf(fp,"%f", &x274); 
   fscanf(fp,"%f", &x73); 
   fscanf(fp,"%f", &x275); 
   fscanf(fp,"%f", &x74); 
   fscanf(fp,"%f", &x276); 
   fscanf(fp,"%f", &x75); 
   fscanf(fp,"%f", &x277); 
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &x278); 
   fscanf(fp,"%f", &x77); 
   fscanf(fp,"%f", &x279); 
   fscanf(fp,"%f", &x78); 
   fscanf(fp,"%f", &x280); 
   fscanf(fp,"%f", &x79); 
   fscanf(fp,"%f", &x281); 
   fscanf(fp,"%f", &x80); 
   fscanf(fp,"%f", &x282); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x283); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x284); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x285); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x286); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x287); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x288); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x289); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x290); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x291); 
   fscanf(fp,"%f", &x90); 
   fscanf(fp,"%f", &x292); 
   fscanf(fp,"%f", &x91); 
   fscanf(fp,"%f", &x293); 
   fscanf(fp,"%f", &x92); 
   fscanf(fp,"%f", &x294); 
   fscanf(fp,"%f", &x93); 
   fscanf(fp,"%f", &x295); 
   fscanf(fp,"%f", &x94); 
   fscanf(fp,"%f", &x296); 
   fscanf(fp,"%f", &x95); 
   fscanf(fp,"%f", &x297); 
   fscanf(fp,"%f", &x96); 
   fscanf(fp,"%f", &x298); 
   fscanf(fp,"%f", &x97); 
   fscanf(fp,"%f", &x299); 
   fscanf(fp,"%f", &x98); 
   fscanf(fp,"%f", &x300); 
   fscanf(fp,"%f", &x99); 
   fscanf(fp,"%f", &x301); 
   fscanf(fp,"%f", &x100); 
   fscanf(fp,"%f", &x302); 
   fscanf(fp,"%f", &x101); 
   fscanf(fp,"%f", &x303); 
   fscanf(fp,"%f", &x102); 
   fscanf(fp,"%f", &x304); 
   fscanf(fp,"%f", &x103); 
   fscanf(fp,"%f", &x305); 
   fscanf(fp,"%f", &x104); 
   fscanf(fp,"%f", &x306); 
   fscanf(fp,"%f", &x105); 
   fscanf(fp,"%f", &x307); 
   fscanf(fp,"%f", &x106); 
   fscanf(fp,"%f", &x308); 
   fscanf(fp,"%f", &x107); 
   fscanf(fp,"%f", &x309); 
   fscanf(fp,"%f", &x108); 
   fscanf(fp,"%f", &x310); 
   fscanf(fp,"%f", &x109); 
   fscanf(fp,"%f", &x311); 
   fscanf(fp,"%f", &x110); 
   fscanf(fp,"%f", &x312); 
   fscanf(fp,"%f", &x111); 
   fscanf(fp,"%f", &x313); 
   fscanf(fp,"%f", &x112); 
   fscanf(fp,"%f", &x314); 
   fscanf(fp,"%f", &x113); 
   fscanf(fp,"%f", &x315); 
   fscanf(fp,"%f", &x114); 
   fscanf(fp,"%f", &x316); 
   fscanf(fp,"%f", &x115); 
   fscanf(fp,"%f", &x317); 
   fscanf(fp,"%f", &x116); 
   fscanf(fp,"%f", &x318); 
   fscanf(fp,"%f", &x117); 
   fscanf(fp,"%f", &x319); 
   fscanf(fp,"%f", &x118); 
   fscanf(fp,"%f", &x320); 
   fscanf(fp,"%f", &x119); 
   fscanf(fp,"%f", &x321); 
   fscanf(fp,"%f", &x120); 
   fscanf(fp,"%f", &x322); 
   fscanf(fp,"%f", &x121); 
   fscanf(fp,"%f", &x323); 
   fscanf(fp,"%f", &x122); 
   fscanf(fp,"%f", &x324); 
   fscanf(fp,"%f", &x123); 
   fscanf(fp,"%f", &x325); 
   fscanf(fp,"%f", &x124); 
   fscanf(fp,"%f", &x326); 
   fscanf(fp,"%f", &x125); 
   fscanf(fp,"%f", &x327); 
   fscanf(fp,"%f", &x126); 
   fscanf(fp,"%f", &x328); 
   fscanf(fp,"%f", &x127); 
   fscanf(fp,"%f", &x329); 
   fscanf(fp,"%f", &x128); 
   fscanf(fp,"%f", &x330); 
   fscanf(fp,"%f", &x129); 
   fscanf(fp,"%f", &x331); 
   fscanf(fp,"%f", &x130); 
   fscanf(fp,"%f", &x332); 
   fscanf(fp,"%f", &x131); 
   fscanf(fp,"%f", &x333); 
   fscanf(fp,"%f", &x132); 
   fscanf(fp,"%f", &x334); 
   fscanf(fp,"%f", &x133); 
   fscanf(fp,"%f", &x335); 
   fscanf(fp,"%f", &x134); 
   fscanf(fp,"%f", &x336); 
   fscanf(fp,"%f", &x135); 
   fscanf(fp,"%f", &x337); 
   fscanf(fp,"%f", &x136); 
   fscanf(fp,"%f", &x338); 
   fscanf(fp,"%f", &x137); 
   fscanf(fp,"%f", &x339); 
   fscanf(fp,"%f", &x138); 
   fscanf(fp,"%f", &x340); 
   fscanf(fp,"%f", &x139); 
   fscanf(fp,"%f", &x341); 
   fscanf(fp,"%f", &x140); 
   fscanf(fp,"%f", &x342); 
   fscanf(fp,"%f", &x141); 
   fscanf(fp,"%f", &x343); 
   fscanf(fp,"%f", &x142); 
   fscanf(fp,"%f", &x344); 
   fscanf(fp,"%f", &x143); 
   fscanf(fp,"%f", &x345); 
   fscanf(fp,"%f", &x144); 
   fscanf(fp,"%f", &x346); 
   fscanf(fp,"%f", &x145); 
   fscanf(fp,"%f", &x347); 
   fscanf(fp,"%f", &x146); 
   fscanf(fp,"%f", &x348); 
   fscanf(fp,"%f", &x147); 
   fscanf(fp,"%f", &x349); 
   fscanf(fp,"%f", &x148); 
   fscanf(fp,"%f", &x350); 
   fscanf(fp,"%f", &x149); 
   fscanf(fp,"%f", &x351); 
   fscanf(fp,"%f", &x150); 
   fscanf(fp,"%f", &x352); 
   fscanf(fp,"%f", &x151); 
   fscanf(fp,"%f", &x353); 
   fscanf(fp,"%f", &x152); 
   fscanf(fp,"%f", &x354); 
   fscanf(fp,"%f", &x153); 
   fscanf(fp,"%f", &x355); 
   fscanf(fp,"%f", &x154); 
   fscanf(fp,"%f", &x356); 
   fscanf(fp,"%f", &x155); 
   fscanf(fp,"%f", &x357); 
   fscanf(fp,"%f", &x156); 
   fscanf(fp,"%f", &x358); 
   fscanf(fp,"%f", &x157); 
   fscanf(fp,"%f", &x359); 
   fscanf(fp,"%f", &x158); 
   fscanf(fp,"%f", &x360); 
   fscanf(fp,"%f", &x159); 
   fscanf(fp,"%f", &x361); 
   fscanf(fp,"%f", &x160); 
   fscanf(fp,"%f", &x362); 
   fscanf(fp,"%f", &x161); 
   fscanf(fp,"%f", &x363); 
   fscanf(fp,"%f", &x162); 
   fscanf(fp,"%f", &x364); 
   fscanf(fp,"%f", &x163); 
   fscanf(fp,"%f", &x365); 
   fscanf(fp,"%f", &x164); 
   fscanf(fp,"%f", &x366); 
   fscanf(fp,"%f", &x165); 
   fscanf(fp,"%f", &x367); 
   fscanf(fp,"%f", &x166); 
   fscanf(fp,"%f", &x368); 
   fscanf(fp,"%f", &x167); 
   fscanf(fp,"%f", &x369); 
   fscanf(fp,"%f", &x168); 
   fscanf(fp,"%f", &x370); 
   fscanf(fp,"%f", &x169); 
   fscanf(fp,"%f", &x371); 
   fscanf(fp,"%f", &x170); 
   fscanf(fp,"%f", &x372); 
   fscanf(fp,"%f", &x171); 
   fscanf(fp,"%f", &x373); 
   fscanf(fp,"%f", &x172); 
   fscanf(fp,"%f", &x374); 
   fscanf(fp,"%f", &x173); 
   fscanf(fp,"%f", &x375); 
   fscanf(fp,"%f", &x174); 
   fscanf(fp,"%f", &x376); 
   fscanf(fp,"%f", &x175); 
   fscanf(fp,"%f", &x377); 
   fscanf(fp,"%f", &x176); 
   fscanf(fp,"%f", &x378); 
   fscanf(fp,"%f", &x177); 
   fscanf(fp,"%f", &x379); 
   fscanf(fp,"%f", &x178); 
   fscanf(fp,"%f", &x380); 
   fscanf(fp,"%f", &x179); 
   fscanf(fp,"%f", &x381); 
   fscanf(fp,"%f", &x180); 
   fscanf(fp,"%f", &x382); 
   fscanf(fp,"%f", &x181); 
   fscanf(fp,"%f", &x383); 
   fscanf(fp,"%f", &x182); 
   fscanf(fp,"%f", &x384); 
   fscanf(fp,"%f", &x183); 
   fscanf(fp,"%f", &x385); 
   fscanf(fp,"%f", &x184); 
   fscanf(fp,"%f", &x386); 
   fscanf(fp,"%f", &x185); 
   fscanf(fp,"%f", &x387); 
   fscanf(fp,"%f", &x186); 
   fscanf(fp,"%f", &x388); 
   fscanf(fp,"%f", &x187); 
   fscanf(fp,"%f", &x389); 
   fscanf(fp,"%f", &x188); 
   fscanf(fp,"%f", &x390); 
   fscanf(fp,"%f", &x189); 
   fscanf(fp,"%f", &x391); 
   fscanf(fp,"%f", &x190); 
   fscanf(fp,"%f", &x392); 
   fscanf(fp,"%f", &x191); 
   fscanf(fp,"%f", &x393); 
   fscanf(fp,"%f", &x192); 
   fscanf(fp,"%f", &x394); 
   fscanf(fp,"%f", &x193); 
   fscanf(fp,"%f", &x395); 
   fscanf(fp,"%f", &x194); 
   fscanf(fp,"%f", &x396); 
   fscanf(fp,"%f", &x195); 
   fscanf(fp,"%f", &x397); 
   fscanf(fp,"%f", &x196); 
   fscanf(fp,"%f", &x398); 
   fscanf(fp,"%f", &x197); 
   fscanf(fp,"%f", &x399); 
   fscanf(fp,"%f", &x198); 
   fscanf(fp,"%f", &x400); 
   fscanf(fp,"%f", &x199); 
   fscanf(fp,"%f", &x401); 
   fscanf(fp,"%f", &x200); 
   fscanf(fp,"%f", &x402); 

   fclose(fp);
   res=-(-0.0025*(sqrt(1 + sqr(x202))* 1 + sqrt(1 + sqr(x203))*x2 + sqrt(1 + sqr(
x203))*x2 + sqrt(1 + sqr(x204))*x3 + sqrt(1 + sqr(x204))*x3 + sqrt(1 +
 sqr(x205))*x4 + sqrt(1 + sqr(x205))*x4 + sqrt(1 + sqr(x206))*x5 + sqrt(1
 + sqr(x206))*x5 + sqrt(1 + sqr(x207))*x6 + sqrt(1 + sqr(x207))*x6 + sqrt(
1 + sqr(x208))*x7 + sqrt(1 + sqr(x208))*x7 + sqrt(1 + sqr(x209))*x8 +
 sqrt(1 + sqr(x209))*x8 + sqrt(1 + sqr(x210))*x9 + sqrt(1 + sqr(x210))*x9
 + sqrt(1 + sqr(x211))*x10 + sqrt(1 + sqr(x211))*x10 + sqrt(1 + sqr(x212))
*x11 + sqrt(1 + sqr(x212))*x11 + sqrt(1 + sqr(x213))*x12 + sqrt(1 + sqr(
x213))*x12 + sqrt(1 + sqr(x214))*x13 + sqrt(1 + sqr(x214))*x13 + sqrt(1 +
 sqr(x215))*x14 + sqrt(1 + sqr(x215))*x14 + sqrt(1 + sqr(x216))*x15 + sqrt(
1 + sqr(x216))*x15 + sqrt(1 + sqr(x217))*x16 + sqrt(1 + sqr(x217))*x16 +
 sqrt(1 + sqr(x218))*x17 + sqrt(1 + sqr(x218))*x17 + sqrt(1 + sqr(x219))*
x18 + sqrt(1 + sqr(x219))*x18 + sqrt(1 + sqr(x220))*x19 + sqrt(1 + sqr(
x220))*x19 + sqrt(1 + sqr(x221))*x20 + sqrt(1 + sqr(x221))*x20 + sqrt(1 +
 sqr(x222))*x21 + sqrt(1 + sqr(x222))*x21 + sqrt(1 + sqr(x223))*x22 + sqrt(
1 + sqr(x223))*x22 + sqrt(1 + sqr(x224))*x23 + sqrt(1 + sqr(x224))*x23 +
 sqrt(1 + sqr(x225))*x24 + sqrt(1 + sqr(x225))*x24 + sqrt(1 + sqr(x226))*
x25 + sqrt(1 + sqr(x226))*x25 + sqrt(1 + sqr(x227))*x26 + sqrt(1 + sqr(
x227))*x26 + sqrt(1 + sqr(x228))*x27 + sqrt(1 + sqr(x228))*x27 + sqrt(1 +
 sqr(x229))*x28 + sqrt(1 + sqr(x229))*x28 + sqrt(1 + sqr(x230))*x29 + sqrt(
1 + sqr(x230))*x29 + sqrt(1 + sqr(x231))*x30 + sqrt(1 + sqr(x231))*x30 +
 sqrt(1 + sqr(x232))*x31 + sqrt(1 + sqr(x232))*x31 + sqrt(1 + sqr(x233))*
x32 + sqrt(1 + sqr(x233))*x32 + sqrt(1 + sqr(x234))*x33 + sqrt(1 + sqr(
x234))*x33 + sqrt(1 + sqr(x235))*x34 + sqrt(1 + sqr(x235))*x34 + sqrt(1 +
 sqr(x236))*x35 + sqrt(1 + sqr(x236))*x35 + sqrt(1 + sqr(x237))*x36 + sqrt(
1 + sqr(x237))*x36 + sqrt(1 + sqr(x238))*x37 + sqrt(1 + sqr(x238))*x37 +
 sqrt(1 + sqr(x239))*x38 + sqrt(1 + sqr(x239))*x38 + sqrt(1 + sqr(x240))*
x39 + sqrt(1 + sqr(x240))*x39 + sqrt(1 + sqr(x241))*x40 + sqrt(1 + sqr(
x241))*x40 + sqrt(1 + sqr(x242))*x41 + sqrt(1 + sqr(x242))*x41 + sqrt(1 +
 sqr(x243))*x42 + sqrt(1 + sqr(x243))*x42 + sqrt(1 + sqr(x244))*x43 + sqrt(
1 + sqr(x244))*x43 + sqrt(1 + sqr(x245))*x44 + sqrt(1 + sqr(x245))*x44 +
 sqrt(1 + sqr(x246))*x45 + sqrt(1 + sqr(x246))*x45 + sqrt(1 + sqr(x247))*
x46 + sqrt(1 + sqr(x247))*x46 + sqrt(1 + sqr(x248))*x47 + sqrt(1 + sqr(
x248))*x47 + sqrt(1 + sqr(x249))*x48 + sqrt(1 + sqr(x249))*x48 + sqrt(1 +
 sqr(x250))*x49 + sqrt(1 + sqr(x250))*x49 + sqrt(1 + sqr(x251))*x50 + sqrt(
1 + sqr(x251))*x50 + sqrt(1 + sqr(x252))*x51 + sqrt(1 + sqr(x252))*x51 +
 sqrt(1 + sqr(x253))*x52 + sqrt(1 + sqr(x253))*x52 + sqrt(1 + sqr(x254))*
x53 + sqrt(1 + sqr(x254))*x53 + sqrt(1 + sqr(x255))*x54 + sqrt(1 + sqr(
x255))*x54 + sqrt(1 + sqr(x256))*x55 + sqrt(1 + sqr(x256))*x55 + sqrt(1 +
 sqr(x257))*x56 + sqrt(1 + sqr(x257))*x56 + sqrt(1 + sqr(x258))*x57 + sqrt(
1 + sqr(x258))*x57 + sqrt(1 + sqr(x259))*x58 + sqrt(1 + sqr(x259))*x58 +
 sqrt(1 + sqr(x260))*x59 + sqrt(1 + sqr(x260))*x59 + sqrt(1 + sqr(x261))*
x60 + sqrt(1 + sqr(x261))*x60 + sqrt(1 + sqr(x262))*x61 + sqrt(1 + sqr(
x262))*x61 + sqrt(1 + sqr(x263))*x62 + sqrt(1 + sqr(x263))*x62 + sqrt(1 +
 sqr(x264))*x63 + sqrt(1 + sqr(x264))*x63 + sqrt(1 + sqr(x265))*x64 + sqrt(
1 + sqr(x265))*x64 + sqrt(1 + sqr(x266))*x65 + sqrt(1 + sqr(x266))*x65 +
 sqrt(1 + sqr(x267))*x66 + sqrt(1 + sqr(x267))*x66 + sqrt(1 + sqr(x268))*
x67 + sqrt(1 + sqr(x268))*x67 + sqrt(1 + sqr(x269))*x68 + sqrt(1 + sqr(
x269))*x68 + sqrt(1 + sqr(x270))*x69 + sqrt(1 + sqr(x270))*x69 + sqrt(1 +
 sqr(x271))*x70 + sqrt(1 + sqr(x271))*x70 + sqrt(1 + sqr(x272))*x71 + sqrt(
1 + sqr(x272))*x71 + sqrt(1 + sqr(x273))*x72 + sqrt(1 + sqr(x273))*x72 +
 sqrt(1 + sqr(x274))*x73 + sqrt(1 + sqr(x274))*x73 + sqrt(1 + sqr(x275))*
x74 + sqrt(1 + sqr(x275))*x74 + sqrt(1 + sqr(x276))*x75 + sqrt(1 + sqr(
x276))*x75 + sqrt(1 + sqr(x277))*x76 + sqrt(1 + sqr(x277))*x76 + sqrt(1 +
 sqr(x278))*x77 + sqrt(1 + sqr(x278))*x77 + sqrt(1 + sqr(x279))*x78 + sqrt(
1 + sqr(x279))*x78 + sqrt(1 + sqr(x280))*x79 + sqrt(1 + sqr(x280))*x79 +
 sqrt(1 + sqr(x281))*x80 + sqrt(1 + sqr(x281))*x80 + sqrt(1 + sqr(x282))*
x81 + sqrt(1 + sqr(x282))*x81 + sqrt(1 + sqr(x283))*x82 + sqrt(1 + sqr(
x283))*x82 + sqrt(1 + sqr(x284))*x83 + sqrt(1 + sqr(x284))*x83 + sqrt(1 +
 sqr(x285))*x84 + sqrt(1 + sqr(x285))*x84 + sqrt(1 + sqr(x286))*x85 + sqrt(
1 + sqr(x286))*x85 + sqrt(1 + sqr(x287))*x86 + sqrt(1 + sqr(x287))*x86 +
 sqrt(1 + sqr(x288))*x87 + sqrt(1 + sqr(x288))*x87 + sqrt(1 + sqr(x289))*
x88 + sqrt(1 + sqr(x289))*x88 + sqrt(1 + sqr(x290))*x89 + sqrt(1 + sqr(
x290))*x89 + sqrt(1 + sqr(x291))*x90 + sqrt(1 + sqr(x291))*x90 + sqrt(1 +
 sqr(x292))*x91 + sqrt(1 + sqr(x292))*x91 + sqrt(1 + sqr(x293))*x92 + sqrt(
1 + sqr(x293))*x92 + sqrt(1 + sqr(x294))*x93 + sqrt(1 + sqr(x294))*x93 +
 sqrt(1 + sqr(x295))*x94 + sqrt(1 + sqr(x295))*x94 + sqrt(1 + sqr(x296))*
x95 + sqrt(1 + sqr(x296))*x95 + sqrt(1 + sqr(x297))*x96 + sqrt(1 + sqr(
x297))*x96 + sqrt(1 + sqr(x298))*x97 + sqrt(1 + sqr(x298))*x97 + sqrt(1 +
 sqr(x299))*x98 + sqrt(1 + sqr(x299))*x98 + sqrt(1 + sqr(x300))*x99 + sqrt(
1 + sqr(x300))*x99 + sqrt(1 + sqr(x301))*x100 + sqrt(1 + sqr(x301))*x100
 + sqrt(1 + sqr(x302))*x101 + sqrt(1 + sqr(x302))*x101 + sqrt(1 + sqr(x303
))*x102 + sqrt(1 + sqr(x303))*x102 + sqrt(1 + sqr(x304))*x103 + sqrt(1 +
 sqr(x304))*x103 + sqrt(1 + sqr(x305))*x104 + sqrt(1 + sqr(x305))*x104 +
 sqrt(1 + sqr(x306))*x105 + sqrt(1 + sqr(x306))*x105 + sqrt(1 + sqr(x307))*
x106 + sqrt(1 + sqr(x307))*x106 + sqrt(1 + sqr(x308))*x107 + sqrt(1 + sqr(
x308))*x107 + sqrt(1 + sqr(x309))*x108 + sqrt(1 + sqr(x309))*x108 + sqrt(1
 + sqr(x310))*x109 + sqrt(1 + sqr(x310))*x109 + sqrt(1 + sqr(x311))*x110
 + sqrt(1 + sqr(x311))*x110 + sqrt(1 + sqr(x312))*x111 + sqrt(1 + sqr(x312
))*x111 + sqrt(1 + sqr(x313))*x112 + sqrt(1 + sqr(x313))*x112 + sqrt(1 +
 sqr(x314))*x113 + sqrt(1 + sqr(x314))*x113 + sqrt(1 + sqr(x315))*x114 +
 sqrt(1 + sqr(x315))*x114 + sqrt(1 + sqr(x316))*x115 + sqrt(1 + sqr(x316))*
x115 + sqrt(1 + sqr(x317))*x116 + sqrt(1 + sqr(x317))*x116 + sqrt(1 + sqr(
x318))*x117 + sqrt(1 + sqr(x318))*x117 + sqrt(1 + sqr(x319))*x118 + sqrt(1
 + sqr(x319))*x118 + sqrt(1 + sqr(x320))*x119 + sqrt(1 + sqr(x320))*x119
 + sqrt(1 + sqr(x321))*x120 + sqrt(1 + sqr(x321))*x120 + sqrt(1 + sqr(x322
))*x121 + sqrt(1 + sqr(x322))*x121 + sqrt(1 + sqr(x323))*x122 + sqrt(1 +
 sqr(x323))*x122 + sqrt(1 + sqr(x324))*x123 + sqrt(1 + sqr(x324))*x123 +
 sqrt(1 + sqr(x325))*x124 + sqrt(1 + sqr(x325))*x124 + sqrt(1 + sqr(x326))*
x125 + sqrt(1 + sqr(x326))*x125 + sqrt(1 + sqr(x327))*x126 + sqrt(1 + sqr(
x327))*x126 + sqrt(1 + sqr(x328))*x127 + sqrt(1 + sqr(x328))*x127 + sqrt(1
 + sqr(x329))*x128 + sqrt(1 + sqr(x329))*x128 + sqrt(1 + sqr(x330))*x129
 + sqrt(1 + sqr(x330))*x129 + sqrt(1 + sqr(x331))*x130 + sqrt(1 + sqr(x331
))*x130 + sqrt(1 + sqr(x332))*x131 + sqrt(1 + sqr(x332))*x131 + sqrt(1 +
 sqr(x333))*x132 + sqrt(1 + sqr(x333))*x132 + sqrt(1 + sqr(x334))*x133 +
 sqrt(1 + sqr(x334))*x133 + sqrt(1 + sqr(x335))*x134 + sqrt(1 + sqr(x335))*
x134 + sqrt(1 + sqr(x336))*x135 + sqrt(1 + sqr(x336))*x135 + sqrt(1 + sqr(
x337))*x136 + sqrt(1 + sqr(x337))*x136 + sqrt(1 + sqr(x338))*x137 + sqrt(1
 + sqr(x338))*x137 + sqrt(1 + sqr(x339))*x138 + sqrt(1 + sqr(x339))*x138
 + sqrt(1 + sqr(x340))*x139 + sqrt(1 + sqr(x340))*x139 + sqrt(1 + sqr(x341
))*x140 + sqrt(1 + sqr(x341))*x140 + sqrt(1 + sqr(x342))*x141 + sqrt(1 +
 sqr(x342))*x141 + sqrt(1 + sqr(x343))*x142 + sqrt(1 + sqr(x343))*x142 +
 sqrt(1 + sqr(x344))*x143 + sqrt(1 + sqr(x344))*x143 + sqrt(1 + sqr(x345))*
x144 + sqrt(1 + sqr(x345))*x144 + sqrt(1 + sqr(x346))*x145 + sqrt(1 + sqr(
x346))*x145 + sqrt(1 + sqr(x347))*x146 + sqrt(1 + sqr(x347))*x146 + sqrt(1
 + sqr(x348))*x147 + sqrt(1 + sqr(x348))*x147 + sqrt(1 + sqr(x349))*x148
 + sqrt(1 + sqr(x349))*x148 + sqrt(1 + sqr(x350))*x149 + sqrt(1 + sqr(x350
))*x149 + sqrt(1 + sqr(x351))*x150 + sqrt(1 + sqr(x351))*x150 + sqrt(1 +
 sqr(x352))*x151 + sqrt(1 + sqr(x352))*x151 + sqrt(1 + sqr(x353))*x152 +
 sqrt(1 + sqr(x353))*x152 + sqrt(1 + sqr(x354))*x153 + sqrt(1 + sqr(x354))*
x153 + sqrt(1 + sqr(x355))*x154 + sqrt(1 + sqr(x355))*x154 + sqrt(1 + sqr(
x356))*x155 + sqrt(1 + sqr(x356))*x155 + sqrt(1 + sqr(x357))*x156 + sqrt(1
 + sqr(x357))*x156 + sqrt(1 + sqr(x358))*x157 + sqrt(1 + sqr(x358))*x157
 + sqrt(1 + sqr(x359))*x158 + sqrt(1 + sqr(x359))*x158 + sqrt(1 + sqr(x360
))*x159 + sqrt(1 + sqr(x360))*x159 + sqrt(1 + sqr(x361))*x160 + sqrt(1 +
 sqr(x361))*x160 + sqrt(1 + sqr(x362))*x161 + sqrt(1 + sqr(x362))*x161 +
 sqrt(1 + sqr(x363))*x162 + sqrt(1 + sqr(x363))*x162 + sqrt(1 + sqr(x364))*
x163 + sqrt(1 + sqr(x364))*x163 + sqrt(1 + sqr(x365))*x164 + sqrt(1 + sqr(
x365))*x164 + sqrt(1 + sqr(x366))*x165 + sqrt(1 + sqr(x366))*x165 + sqrt(1
 + sqr(x367))*x166 + sqrt(1 + sqr(x367))*x166 + sqrt(1 + sqr(x368))*x167
 + sqrt(1 + sqr(x368))*x167 + sqrt(1 + sqr(x369))*x168 + sqrt(1 + sqr(x369
))*x168 + sqrt(1 + sqr(x370))*x169 + sqrt(1 + sqr(x370))*x169 + sqrt(1 +
 sqr(x371))*x170 + sqrt(1 + sqr(x371))*x170 + sqrt(1 + sqr(x372))*x171 +
 sqrt(1 + sqr(x372))*x171 + sqrt(1 + sqr(x373))*x172 + sqrt(1 + sqr(x373))*
x172 + sqrt(1 + sqr(x374))*x173 + sqrt(1 + sqr(x374))*x173 + sqrt(1 + sqr(
x375))*x174 + sqrt(1 + sqr(x375))*x174 + sqrt(1 + sqr(x376))*x175 + sqrt(1
 + sqr(x376))*x175 + sqrt(1 + sqr(x377))*x176 + sqrt(1 + sqr(x377))*x176
 + sqrt(1 + sqr(x378))*x177 + sqrt(1 + sqr(x378))*x177 + sqrt(1 + sqr(x379
))*x178 + sqrt(1 + sqr(x379))*x178 + sqrt(1 + sqr(x380))*x179 + sqrt(1 +
 sqr(x380))*x179 + sqrt(1 + sqr(x381))*x180 + sqrt(1 + sqr(x381))*x180 +
 sqrt(1 + sqr(x382))*x181 + sqrt(1 + sqr(x382))*x181 + sqrt(1 + sqr(x383))*
x182 + sqrt(1 + sqr(x383))*x182 + sqrt(1 + sqr(x384))*x183 + sqrt(1 + sqr(
x384))*x183 + sqrt(1 + sqr(x385))*x184 + sqrt(1 + sqr(x385))*x184 + sqrt(1
 + sqr(x386))*x185 + sqrt(1 + sqr(x386))*x185 + sqrt(1 + sqr(x387))*x186
 + sqrt(1 + sqr(x387))*x186 + sqrt(1 + sqr(x388))*x187 + sqrt(1 + sqr(x388
))*x187 + sqrt(1 + sqr(x389))*x188 + sqrt(1 + sqr(x389))*x188 + sqrt(1 +
 sqr(x390))*x189 + sqrt(1 + sqr(x390))*x189 + sqrt(1 + sqr(x391))*x190 +
 sqrt(1 + sqr(x391))*x190 + sqrt(1 + sqr(x392))*x191 + sqrt(1 + sqr(x392))*
x191 + sqrt(1 + sqr(x393))*x192 + sqrt(1 + sqr(x393))*x192 + sqrt(1 + sqr(
x394))*x193 + sqrt(1 + sqr(x394))*x193 + sqrt(1 + sqr(x395))*x194 + sqrt(1
 + sqr(x395))*x194 + sqrt(1 + sqr(x396))*x195 + sqrt(1 + sqr(x396))*x195
 + sqrt(1 + sqr(x397))*x196 + sqrt(1 + sqr(x397))*x196 + sqrt(1 + sqr(x398
))*x197 + sqrt(1 + sqr(x398))*x197 + sqrt(1 + sqr(x399))*x198 + sqrt(1 +
 sqr(x399))*x198 + sqrt(1 + sqr(x400))*x199 + sqrt(1 + sqr(x400))*x199 +
 sqrt(1 + sqr(x401))*x200 + sqrt(1 + sqr(x401))*x200 + sqrt(1 + sqr(x402))*
 3)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
