#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="camshape400";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,x122,x123,x124,x125,x126,x127,x128,x129,x130,x131,x132,x133,x134,x135,x136,x137,x138,x139,x140,x141,x142,x143,x144,x145,x146,x147,x148,x149,x150,x151,x152,x153,x154,x155,x156,x157,x158,x159,x160,x161,x162,x163,x164,x165,x166,x167,x168,x169,x170,x171,x172,x173,x174,x175,x176,x177,x178,x179,x180,x181,x182,x183,x184,x185,x186,x187,x188,x189,x190,x191,x192,x193,x194,x195,x196,x197,x198,x199,x200,x201,x202,x203,x204,x205,x206,x207,x208,x209,x210,x211,x212,x213,x214,x215,x216,x217,x218,x219,x220,x221,x222,x223,x224,x225,x226,x227,x228,x229,x230,x231,x232,x233,x234,x235,x236,x237,x238,x239,x240,x241,x242,x243,x244,x245,x246,x247,x248,x249,x250,x251,x252,x253,x254,x255,x256,x257,x258,x259,x260,x261,x262,x263,x264,x265,x266,x267,x268,x269,x270,x271,x272,x273,x274,x275,x276,x277,x278,x279,x280,x281,x282,x283,x284,x285,x286,x287,x288,x289,x290,x291,x292,x293,x294,x295,x296,x297,x298,x299,x300,x301,x302,x303,x304,x305,x306,x307,x308,x309,x310,x311,x312,x313,x314,x315,x316,x317,x318,x319,x320,x321,x322,x323,x324,x325,x326,x327,x328,x329,x330,x331,x332,x333,x334,x335,x336,x337,x338,x339,x340,x341,x342,x343,x344,x345,x346,x347,x348,x349,x350,x351,x352,x353,x354,x355,x356,x357,x358,x359,x360,x361,x362,x363,x364,x365,x366,x367,x368,x369,x370,x371,x372,x373,x374,x375,x376,x377,x378,x379,x380,x381,x382,x383,x384,x385,x386,x387,x388,x389,x390,x391,x392,x393,x394,x395,x396,x397,x398,x399,x400;
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

   fclose(fp);
   res=- 0.00785398163397448*x1 - 0.00785398163397448*x2
 - 0.00785398163397448*x3 - 0.00785398163397448*x4
 - 0.00785398163397448*x5 - 0.00785398163397448*x6
 - 0.00785398163397448*x7 - 0.00785398163397448*x8
 - 0.00785398163397448*x9 - 0.00785398163397448*x10
 - 0.00785398163397448*x11 - 0.00785398163397448*x12
 - 0.00785398163397448*x13 - 0.00785398163397448*x14
 - 0.00785398163397448*x15 - 0.00785398163397448*x16
 - 0.00785398163397448*x17 - 0.00785398163397448*x18
 - 0.00785398163397448*x19 - 0.00785398163397448*x20
 - 0.00785398163397448*x21 - 0.00785398163397448*x22
 - 0.00785398163397448*x23 - 0.00785398163397448*x24
 - 0.00785398163397448*x25 - 0.00785398163397448*x26
 - 0.00785398163397448*x27 - 0.00785398163397448*x28
 - 0.00785398163397448*x29 - 0.00785398163397448*x30
 - 0.00785398163397448*x31 - 0.00785398163397448*x32
 - 0.00785398163397448*x33 - 0.00785398163397448*x34
 - 0.00785398163397448*x35 - 0.00785398163397448*x36
 - 0.00785398163397448*x37 - 0.00785398163397448*x38
 - 0.00785398163397448*x39 - 0.00785398163397448*x40
 - 0.00785398163397448*x41 - 0.00785398163397448*x42
 - 0.00785398163397448*x43 - 0.00785398163397448*x44
 - 0.00785398163397448*x45 - 0.00785398163397448*x46
 - 0.00785398163397448*x47 - 0.00785398163397448*x48
 - 0.00785398163397448*x49 - 0.00785398163397448*x50
 - 0.00785398163397448*x51 - 0.00785398163397448*x52
 - 0.00785398163397448*x53 - 0.00785398163397448*x54
 - 0.00785398163397448*x55 - 0.00785398163397448*x56
 - 0.00785398163397448*x57 - 0.00785398163397448*x58
 - 0.00785398163397448*x59 - 0.00785398163397448*x60
 - 0.00785398163397448*x61 - 0.00785398163397448*x62
 - 0.00785398163397448*x63 - 0.00785398163397448*x64
 - 0.00785398163397448*x65 - 0.00785398163397448*x66
 - 0.00785398163397448*x67 - 0.00785398163397448*x68
 - 0.00785398163397448*x69 - 0.00785398163397448*x70
 - 0.00785398163397448*x71 - 0.00785398163397448*x72
 - 0.00785398163397448*x73 - 0.00785398163397448*x74
 - 0.00785398163397448*x75 - 0.00785398163397448*x76
 - 0.00785398163397448*x77 - 0.00785398163397448*x78
 - 0.00785398163397448*x79 - 0.00785398163397448*x80
 - 0.00785398163397448*x81 - 0.00785398163397448*x82
 - 0.00785398163397448*x83 - 0.00785398163397448*x84
 - 0.00785398163397448*x85 - 0.00785398163397448*x86
 - 0.00785398163397448*x87 - 0.00785398163397448*x88
 - 0.00785398163397448*x89 - 0.00785398163397448*x90
 - 0.00785398163397448*x91 - 0.00785398163397448*x92
 - 0.00785398163397448*x93 - 0.00785398163397448*x94
 - 0.00785398163397448*x95 - 0.00785398163397448*x96
 - 0.00785398163397448*x97 - 0.00785398163397448*x98
 - 0.00785398163397448*x99 - 0.00785398163397448*x100
 - 0.00785398163397448*x101 - 0.00785398163397448*x102
 - 0.00785398163397448*x103 - 0.00785398163397448*x104
 - 0.00785398163397448*x105 - 0.00785398163397448*x106
 - 0.00785398163397448*x107 - 0.00785398163397448*x108
 - 0.00785398163397448*x109 - 0.00785398163397448*x110
 - 0.00785398163397448*x111 - 0.00785398163397448*x112
 - 0.00785398163397448*x113 - 0.00785398163397448*x114
 - 0.00785398163397448*x115 - 0.00785398163397448*x116
 - 0.00785398163397448*x117 - 0.00785398163397448*x118
 - 0.00785398163397448*x119 - 0.00785398163397448*x120
 - 0.00785398163397448*x121 - 0.00785398163397448*x122
 - 0.00785398163397448*x123 - 0.00785398163397448*x124
 - 0.00785398163397448*x125 - 0.00785398163397448*x126
 - 0.00785398163397448*x127 - 0.00785398163397448*x128
 - 0.00785398163397448*x129 - 0.00785398163397448*x130
 - 0.00785398163397448*x131 - 0.00785398163397448*x132
 - 0.00785398163397448*x133 - 0.00785398163397448*x134
 - 0.00785398163397448*x135 - 0.00785398163397448*x136
 - 0.00785398163397448*x137 - 0.00785398163397448*x138
 - 0.00785398163397448*x139 - 0.00785398163397448*x140
 - 0.00785398163397448*x141 - 0.00785398163397448*x142
 - 0.00785398163397448*x143 - 0.00785398163397448*x144
 - 0.00785398163397448*x145 - 0.00785398163397448*x146
 - 0.00785398163397448*x147 - 0.00785398163397448*x148
 - 0.00785398163397448*x149 - 0.00785398163397448*x150
 - 0.00785398163397448*x151 - 0.00785398163397448*x152
 - 0.00785398163397448*x153 - 0.00785398163397448*x154
 - 0.00785398163397448*x155 - 0.00785398163397448*x156
 - 0.00785398163397448*x157 - 0.00785398163397448*x158
 - 0.00785398163397448*x159 - 0.00785398163397448*x160
 - 0.00785398163397448*x161 - 0.00785398163397448*x162
 - 0.00785398163397448*x163 - 0.00785398163397448*x164
 - 0.00785398163397448*x165 - 0.00785398163397448*x166
 - 0.00785398163397448*x167 - 0.00785398163397448*x168
 - 0.00785398163397448*x169 - 0.00785398163397448*x170
 - 0.00785398163397448*x171 - 0.00785398163397448*x172
 - 0.00785398163397448*x173 - 0.00785398163397448*x174
 - 0.00785398163397448*x175 - 0.00785398163397448*x176
 - 0.00785398163397448*x177 - 0.00785398163397448*x178
 - 0.00785398163397448*x179 - 0.00785398163397448*x180
 - 0.00785398163397448*x181 - 0.00785398163397448*x182
 - 0.00785398163397448*x183 - 0.00785398163397448*x184
 - 0.00785398163397448*x185 - 0.00785398163397448*x186
 - 0.00785398163397448*x187 - 0.00785398163397448*x188
 - 0.00785398163397448*x189 - 0.00785398163397448*x190
 - 0.00785398163397448*x191 - 0.00785398163397448*x192
 - 0.00785398163397448*x193 - 0.00785398163397448*x194
 - 0.00785398163397448*x195 - 0.00785398163397448*x196
 - 0.00785398163397448*x197 - 0.00785398163397448*x198
 - 0.00785398163397448*x199 - 0.00785398163397448*x200
 - 0.00785398163397448*x201 - 0.00785398163397448*x202
 - 0.00785398163397448*x203 - 0.00785398163397448*x204
 - 0.00785398163397448*x205 - 0.00785398163397448*x206
 - 0.00785398163397448*x207 - 0.00785398163397448*x208
 - 0.00785398163397448*x209 - 0.00785398163397448*x210
 - 0.00785398163397448*x211 - 0.00785398163397448*x212
 - 0.00785398163397448*x213 - 0.00785398163397448*x214
 - 0.00785398163397448*x215 - 0.00785398163397448*x216
 - 0.00785398163397448*x217 - 0.00785398163397448*x218
 - 0.00785398163397448*x219 - 0.00785398163397448*x220
 - 0.00785398163397448*x221 - 0.00785398163397448*x222
 - 0.00785398163397448*x223 - 0.00785398163397448*x224
 - 0.00785398163397448*x225 - 0.00785398163397448*x226
 - 0.00785398163397448*x227 - 0.00785398163397448*x228
 - 0.00785398163397448*x229 - 0.00785398163397448*x230
 - 0.00785398163397448*x231 - 0.00785398163397448*x232
 - 0.00785398163397448*x233 - 0.00785398163397448*x234
 - 0.00785398163397448*x235 - 0.00785398163397448*x236
 - 0.00785398163397448*x237 - 0.00785398163397448*x238
 - 0.00785398163397448*x239 - 0.00785398163397448*x240
 - 0.00785398163397448*x241 - 0.00785398163397448*x242
 - 0.00785398163397448*x243 - 0.00785398163397448*x244
 - 0.00785398163397448*x245 - 0.00785398163397448*x246
 - 0.00785398163397448*x247 - 0.00785398163397448*x248
 - 0.00785398163397448*x249 - 0.00785398163397448*x250
 - 0.00785398163397448*x251 - 0.00785398163397448*x252
 - 0.00785398163397448*x253 - 0.00785398163397448*x254
 - 0.00785398163397448*x255 - 0.00785398163397448*x256
 - 0.00785398163397448*x257 - 0.00785398163397448*x258
 - 0.00785398163397448*x259 - 0.00785398163397448*x260
 - 0.00785398163397448*x261 - 0.00785398163397448*x262
 - 0.00785398163397448*x263 - 0.00785398163397448*x264
 - 0.00785398163397448*x265 - 0.00785398163397448*x266
 - 0.00785398163397448*x267 - 0.00785398163397448*x268
 - 0.00785398163397448*x269 - 0.00785398163397448*x270
 - 0.00785398163397448*x271 - 0.00785398163397448*x272
 - 0.00785398163397448*x273 - 0.00785398163397448*x274
 - 0.00785398163397448*x275 - 0.00785398163397448*x276
 - 0.00785398163397448*x277 - 0.00785398163397448*x278
 - 0.00785398163397448*x279 - 0.00785398163397448*x280
 - 0.00785398163397448*x281 - 0.00785398163397448*x282
 - 0.00785398163397448*x283 - 0.00785398163397448*x284
 - 0.00785398163397448*x285 - 0.00785398163397448*x286
 - 0.00785398163397448*x287 - 0.00785398163397448*x288
 - 0.00785398163397448*x289 - 0.00785398163397448*x290
 - 0.00785398163397448*x291 - 0.00785398163397448*x292
 - 0.00785398163397448*x293 - 0.00785398163397448*x294
 - 0.00785398163397448*x295 - 0.00785398163397448*x296
 - 0.00785398163397448*x297 - 0.00785398163397448*x298
 - 0.00785398163397448*x299 - 0.00785398163397448*x300
 - 0.00785398163397448*x301 - 0.00785398163397448*x302
 - 0.00785398163397448*x303 - 0.00785398163397448*x304
 - 0.00785398163397448*x305 - 0.00785398163397448*x306
 - 0.00785398163397448*x307 - 0.00785398163397448*x308
 - 0.00785398163397448*x309 - 0.00785398163397448*x310
 - 0.00785398163397448*x311 - 0.00785398163397448*x312
 - 0.00785398163397448*x313 - 0.00785398163397448*x314
 - 0.00785398163397448*x315 - 0.00785398163397448*x316
 - 0.00785398163397448*x317 - 0.00785398163397448*x318
 - 0.00785398163397448*x319 - 0.00785398163397448*x320
 - 0.00785398163397448*x321 - 0.00785398163397448*x322
 - 0.00785398163397448*x323 - 0.00785398163397448*x324
 - 0.00785398163397448*x325 - 0.00785398163397448*x326
 - 0.00785398163397448*x327 - 0.00785398163397448*x328
 - 0.00785398163397448*x329 - 0.00785398163397448*x330
 - 0.00785398163397448*x331 - 0.00785398163397448*x332
 - 0.00785398163397448*x333 - 0.00785398163397448*x334
 - 0.00785398163397448*x335 - 0.00785398163397448*x336
 - 0.00785398163397448*x337 - 0.00785398163397448*x338
 - 0.00785398163397448*x339 - 0.00785398163397448*x340
 - 0.00785398163397448*x341 - 0.00785398163397448*x342
 - 0.00785398163397448*x343 - 0.00785398163397448*x344
 - 0.00785398163397448*x345 - 0.00785398163397448*x346
 - 0.00785398163397448*x347 - 0.00785398163397448*x348
 - 0.00785398163397448*x349 - 0.00785398163397448*x350
 - 0.00785398163397448*x351 - 0.00785398163397448*x352
 - 0.00785398163397448*x353 - 0.00785398163397448*x354
 - 0.00785398163397448*x355 - 0.00785398163397448*x356
 - 0.00785398163397448*x357 - 0.00785398163397448*x358
 - 0.00785398163397448*x359 - 0.00785398163397448*x360
 - 0.00785398163397448*x361 - 0.00785398163397448*x362
 - 0.00785398163397448*x363 - 0.00785398163397448*x364
 - 0.00785398163397448*x365 - 0.00785398163397448*x366
 - 0.00785398163397448*x367 - 0.00785398163397448*x368
 - 0.00785398163397448*x369 - 0.00785398163397448*x370
 - 0.00785398163397448*x371 - 0.00785398163397448*x372
 - 0.00785398163397448*x373 - 0.00785398163397448*x374
 - 0.00785398163397448*x375 - 0.00785398163397448*x376
 - 0.00785398163397448*x377 - 0.00785398163397448*x378
 - 0.00785398163397448*x379 - 0.00785398163397448*x380
 - 0.00785398163397448*x381 - 0.00785398163397448*x382
 - 0.00785398163397448*x383 - 0.00785398163397448*x384
 - 0.00785398163397448*x385 - 0.00785398163397448*x386
 - 0.00785398163397448*x387 - 0.00785398163397448*x388
 - 0.00785398163397448*x389 - 0.00785398163397448*x390
 - 0.00785398163397448*x391 - 0.00785398163397448*x392
 - 0.00785398163397448*x393 - 0.00785398163397448*x394
 - 0.00785398163397448*x395 - 0.00785398163397448*x396
 - 0.00785398163397448*x397 - 0.00785398163397448*x398
 - 0.00785398163397448*x399 - 0.00785398163397448*x400  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }