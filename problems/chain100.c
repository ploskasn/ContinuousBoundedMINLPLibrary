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
   char *problemname="chain100";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x102,x103,x2,x104,x3,x105,x4,x106,x5,x107,x6,x108,x7,x109,x8,x110,x9,x111,x10,x112,x11,x113,x12,x114,x13,x115,x14,x116,x15,x117,x16,x118,x17,x119,x18,x120,x19,x121,x20,x122,x21,x123,x22,x124,x23,x125,x24,x126,x25,x127,x26,x128,x27,x129,x28,x130,x29,x131,x30,x132,x31,x133,x32,x134,x33,x135,x34,x136,x35,x137,x36,x138,x37,x139,x38,x140,x39,x141,x40,x142,x41,x143,x42,x144,x43,x145,x44,x146,x45,x147,x46,x148,x47,x149,x48,x150,x49,x151,x50,x152,x51,x153,x52,x154,x53,x155,x54,x156,x55,x157,x56,x158,x57,x159,x58,x160,x59,x161,x60,x162,x61,x163,x62,x164,x63,x165,x64,x166,x65,x167,x66,x168,x67,x169,x68,x170,x69,x171,x70,x172,x71,x173,x72,x174,x73,x175,x74,x176,x75,x177,x76,x178,x77,x179,x78,x180,x79,x181,x80,x182,x81,x183,x82,x184,x83,x185,x84,x186,x85,x187,x86,x188,x87,x189,x88,x190,x89,x191,x90,x192,x91,x193,x92,x194,x93,x195,x94,x196,x95,x197,x96,x198,x97,x199,x98,x200,x99,x201,x100,x202;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x102); 
   fscanf(fp,"%f", &x103); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x104); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x105); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x106); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x107); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x108); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x109); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x110); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x111); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x112); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x113); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x114); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x115); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x116); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x117); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x118); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x119); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x120); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x121); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x122); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x123); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x124); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x125); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x126); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x127); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x128); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x129); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x130); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x131); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x132); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x133); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x134); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x135); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x136); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x137); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x138); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x139); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x140); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x141); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x142); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x143); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x144); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x145); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x146); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x147); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x148); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x149); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x150); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x151); 
   fscanf(fp,"%f", &x50); 
   fscanf(fp,"%f", &x152); 
   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &x153); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x154); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x155); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x156); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x157); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x158); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x159); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x160); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x161); 
   fscanf(fp,"%f", &x60); 
   fscanf(fp,"%f", &x162); 
   fscanf(fp,"%f", &x61); 
   fscanf(fp,"%f", &x163); 
   fscanf(fp,"%f", &x62); 
   fscanf(fp,"%f", &x164); 
   fscanf(fp,"%f", &x63); 
   fscanf(fp,"%f", &x165); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x166); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x167); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x168); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x169); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x170); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x171); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x172); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &x173); 
   fscanf(fp,"%f", &x72); 
   fscanf(fp,"%f", &x174); 
   fscanf(fp,"%f", &x73); 
   fscanf(fp,"%f", &x175); 
   fscanf(fp,"%f", &x74); 
   fscanf(fp,"%f", &x176); 
   fscanf(fp,"%f", &x75); 
   fscanf(fp,"%f", &x177); 
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &x178); 
   fscanf(fp,"%f", &x77); 
   fscanf(fp,"%f", &x179); 
   fscanf(fp,"%f", &x78); 
   fscanf(fp,"%f", &x180); 
   fscanf(fp,"%f", &x79); 
   fscanf(fp,"%f", &x181); 
   fscanf(fp,"%f", &x80); 
   fscanf(fp,"%f", &x182); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x183); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x184); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x185); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x186); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x187); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x188); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x189); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x190); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x191); 
   fscanf(fp,"%f", &x90); 
   fscanf(fp,"%f", &x192); 
   fscanf(fp,"%f", &x91); 
   fscanf(fp,"%f", &x193); 
   fscanf(fp,"%f", &x92); 
   fscanf(fp,"%f", &x194); 
   fscanf(fp,"%f", &x93); 
   fscanf(fp,"%f", &x195); 
   fscanf(fp,"%f", &x94); 
   fscanf(fp,"%f", &x196); 
   fscanf(fp,"%f", &x95); 
   fscanf(fp,"%f", &x197); 
   fscanf(fp,"%f", &x96); 
   fscanf(fp,"%f", &x198); 
   fscanf(fp,"%f", &x97); 
   fscanf(fp,"%f", &x199); 
   fscanf(fp,"%f", &x98); 
   fscanf(fp,"%f", &x200); 
   fscanf(fp,"%f", &x99); 
   fscanf(fp,"%f", &x201); 
   fscanf(fp,"%f", &x100); 
   fscanf(fp,"%f", &x202); 

   fclose(fp);
   res=-(-0.005*(sqrt(1 + sqr(x102))* 1 + sqrt(1 + sqr(x103))*x2 + sqrt(1 + sqr(
x103))*x2 + sqrt(1 + sqr(x104))*x3 + sqrt(1 + sqr(x104))*x3 + sqrt(1 +
 sqr(x105))*x4 + sqrt(1 + sqr(x105))*x4 + sqrt(1 + sqr(x106))*x5 + sqrt(1
 + sqr(x106))*x5 + sqrt(1 + sqr(x107))*x6 + sqrt(1 + sqr(x107))*x6 + sqrt(
1 + sqr(x108))*x7 + sqrt(1 + sqr(x108))*x7 + sqrt(1 + sqr(x109))*x8 +
 sqrt(1 + sqr(x109))*x8 + sqrt(1 + sqr(x110))*x9 + sqrt(1 + sqr(x110))*x9
 + sqrt(1 + sqr(x111))*x10 + sqrt(1 + sqr(x111))*x10 + sqrt(1 + sqr(x112))
*x11 + sqrt(1 + sqr(x112))*x11 + sqrt(1 + sqr(x113))*x12 + sqrt(1 + sqr(
x113))*x12 + sqrt(1 + sqr(x114))*x13 + sqrt(1 + sqr(x114))*x13 + sqrt(1 +
 sqr(x115))*x14 + sqrt(1 + sqr(x115))*x14 + sqrt(1 + sqr(x116))*x15 + sqrt(
1 + sqr(x116))*x15 + sqrt(1 + sqr(x117))*x16 + sqrt(1 + sqr(x117))*x16 +
 sqrt(1 + sqr(x118))*x17 + sqrt(1 + sqr(x118))*x17 + sqrt(1 + sqr(x119))*
x18 + sqrt(1 + sqr(x119))*x18 + sqrt(1 + sqr(x120))*x19 + sqrt(1 + sqr(
x120))*x19 + sqrt(1 + sqr(x121))*x20 + sqrt(1 + sqr(x121))*x20 + sqrt(1 +
 sqr(x122))*x21 + sqrt(1 + sqr(x122))*x21 + sqrt(1 + sqr(x123))*x22 + sqrt(
1 + sqr(x123))*x22 + sqrt(1 + sqr(x124))*x23 + sqrt(1 + sqr(x124))*x23 +
 sqrt(1 + sqr(x125))*x24 + sqrt(1 + sqr(x125))*x24 + sqrt(1 + sqr(x126))*
x25 + sqrt(1 + sqr(x126))*x25 + sqrt(1 + sqr(x127))*x26 + sqrt(1 + sqr(
x127))*x26 + sqrt(1 + sqr(x128))*x27 + sqrt(1 + sqr(x128))*x27 + sqrt(1 +
 sqr(x129))*x28 + sqrt(1 + sqr(x129))*x28 + sqrt(1 + sqr(x130))*x29 + sqrt(
1 + sqr(x130))*x29 + sqrt(1 + sqr(x131))*x30 + sqrt(1 + sqr(x131))*x30 +
 sqrt(1 + sqr(x132))*x31 + sqrt(1 + sqr(x132))*x31 + sqrt(1 + sqr(x133))*
x32 + sqrt(1 + sqr(x133))*x32 + sqrt(1 + sqr(x134))*x33 + sqrt(1 + sqr(
x134))*x33 + sqrt(1 + sqr(x135))*x34 + sqrt(1 + sqr(x135))*x34 + sqrt(1 +
 sqr(x136))*x35 + sqrt(1 + sqr(x136))*x35 + sqrt(1 + sqr(x137))*x36 + sqrt(
1 + sqr(x137))*x36 + sqrt(1 + sqr(x138))*x37 + sqrt(1 + sqr(x138))*x37 +
 sqrt(1 + sqr(x139))*x38 + sqrt(1 + sqr(x139))*x38 + sqrt(1 + sqr(x140))*
x39 + sqrt(1 + sqr(x140))*x39 + sqrt(1 + sqr(x141))*x40 + sqrt(1 + sqr(
x141))*x40 + sqrt(1 + sqr(x142))*x41 + sqrt(1 + sqr(x142))*x41 + sqrt(1 +
 sqr(x143))*x42 + sqrt(1 + sqr(x143))*x42 + sqrt(1 + sqr(x144))*x43 + sqrt(
1 + sqr(x144))*x43 + sqrt(1 + sqr(x145))*x44 + sqrt(1 + sqr(x145))*x44 +
 sqrt(1 + sqr(x146))*x45 + sqrt(1 + sqr(x146))*x45 + sqrt(1 + sqr(x147))*
x46 + sqrt(1 + sqr(x147))*x46 + sqrt(1 + sqr(x148))*x47 + sqrt(1 + sqr(
x148))*x47 + sqrt(1 + sqr(x149))*x48 + sqrt(1 + sqr(x149))*x48 + sqrt(1 +
 sqr(x150))*x49 + sqrt(1 + sqr(x150))*x49 + sqrt(1 + sqr(x151))*x50 + sqrt(
1 + sqr(x151))*x50 + sqrt(1 + sqr(x152))*x51 + sqrt(1 + sqr(x152))*x51 +
 sqrt(1 + sqr(x153))*x52 + sqrt(1 + sqr(x153))*x52 + sqrt(1 + sqr(x154))*
x53 + sqrt(1 + sqr(x154))*x53 + sqrt(1 + sqr(x155))*x54 + sqrt(1 + sqr(
x155))*x54 + sqrt(1 + sqr(x156))*x55 + sqrt(1 + sqr(x156))*x55 + sqrt(1 +
 sqr(x157))*x56 + sqrt(1 + sqr(x157))*x56 + sqrt(1 + sqr(x158))*x57 + sqrt(
1 + sqr(x158))*x57 + sqrt(1 + sqr(x159))*x58 + sqrt(1 + sqr(x159))*x58 +
 sqrt(1 + sqr(x160))*x59 + sqrt(1 + sqr(x160))*x59 + sqrt(1 + sqr(x161))*
x60 + sqrt(1 + sqr(x161))*x60 + sqrt(1 + sqr(x162))*x61 + sqrt(1 + sqr(
x162))*x61 + sqrt(1 + sqr(x163))*x62 + sqrt(1 + sqr(x163))*x62 + sqrt(1 +
 sqr(x164))*x63 + sqrt(1 + sqr(x164))*x63 + sqrt(1 + sqr(x165))*x64 + sqrt(
1 + sqr(x165))*x64 + sqrt(1 + sqr(x166))*x65 + sqrt(1 + sqr(x166))*x65 +
 sqrt(1 + sqr(x167))*x66 + sqrt(1 + sqr(x167))*x66 + sqrt(1 + sqr(x168))*
x67 + sqrt(1 + sqr(x168))*x67 + sqrt(1 + sqr(x169))*x68 + sqrt(1 + sqr(
x169))*x68 + sqrt(1 + sqr(x170))*x69 + sqrt(1 + sqr(x170))*x69 + sqrt(1 +
 sqr(x171))*x70 + sqrt(1 + sqr(x171))*x70 + sqrt(1 + sqr(x172))*x71 + sqrt(
1 + sqr(x172))*x71 + sqrt(1 + sqr(x173))*x72 + sqrt(1 + sqr(x173))*x72 +
 sqrt(1 + sqr(x174))*x73 + sqrt(1 + sqr(x174))*x73 + sqrt(1 + sqr(x175))*
x74 + sqrt(1 + sqr(x175))*x74 + sqrt(1 + sqr(x176))*x75 + sqrt(1 + sqr(
x176))*x75 + sqrt(1 + sqr(x177))*x76 + sqrt(1 + sqr(x177))*x76 + sqrt(1 +
 sqr(x178))*x77 + sqrt(1 + sqr(x178))*x77 + sqrt(1 + sqr(x179))*x78 + sqrt(
1 + sqr(x179))*x78 + sqrt(1 + sqr(x180))*x79 + sqrt(1 + sqr(x180))*x79 +
 sqrt(1 + sqr(x181))*x80 + sqrt(1 + sqr(x181))*x80 + sqrt(1 + sqr(x182))*
x81 + sqrt(1 + sqr(x182))*x81 + sqrt(1 + sqr(x183))*x82 + sqrt(1 + sqr(
x183))*x82 + sqrt(1 + sqr(x184))*x83 + sqrt(1 + sqr(x184))*x83 + sqrt(1 +
 sqr(x185))*x84 + sqrt(1 + sqr(x185))*x84 + sqrt(1 + sqr(x186))*x85 + sqrt(
1 + sqr(x186))*x85 + sqrt(1 + sqr(x187))*x86 + sqrt(1 + sqr(x187))*x86 +
 sqrt(1 + sqr(x188))*x87 + sqrt(1 + sqr(x188))*x87 + sqrt(1 + sqr(x189))*
x88 + sqrt(1 + sqr(x189))*x88 + sqrt(1 + sqr(x190))*x89 + sqrt(1 + sqr(
x190))*x89 + sqrt(1 + sqr(x191))*x90 + sqrt(1 + sqr(x191))*x90 + sqrt(1 +
 sqr(x192))*x91 + sqrt(1 + sqr(x192))*x91 + sqrt(1 + sqr(x193))*x92 + sqrt(
1 + sqr(x193))*x92 + sqrt(1 + sqr(x194))*x93 + sqrt(1 + sqr(x194))*x93 +
 sqrt(1 + sqr(x195))*x94 + sqrt(1 + sqr(x195))*x94 + sqrt(1 + sqr(x196))*
x95 + sqrt(1 + sqr(x196))*x95 + sqrt(1 + sqr(x197))*x96 + sqrt(1 + sqr(
x197))*x96 + sqrt(1 + sqr(x198))*x97 + sqrt(1 + sqr(x198))*x97 + sqrt(1 +
 sqr(x199))*x98 + sqrt(1 + sqr(x199))*x98 + sqrt(1 + sqr(x200))*x99 + sqrt(
1 + sqr(x200))*x99 + sqrt(1 + sqr(x201))*x100 + sqrt(1 + sqr(x201))*x100
 + sqrt(1 + sqr(x202))* 3)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
