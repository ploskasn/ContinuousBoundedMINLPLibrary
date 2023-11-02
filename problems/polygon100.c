#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="polygon100";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x1,x102,x101,x3,x103,x4,x104,x5,x105,x6,x106,x7,x107,x8,x108,x9,x109,x10,x110,x11,x111,x12,x112,x13,x113,x14,x114,x15,x115,x16,x116,x17,x117,x18,x118,x19,x119,x20,x120,x21,x121,x22,x122,x23,x123,x24,x124,x25,x125,x26,x126,x27,x127,x28,x128,x29,x129,x30,x130,x31,x131,x32,x132,x33,x133,x34,x134,x35,x135,x36,x136,x37,x137,x38,x138,x39,x139,x40,x140,x41,x141,x42,x142,x43,x143,x44,x144,x45,x145,x46,x146,x47,x147,x48,x148,x49,x149,x50,x150,x51,x151,x52,x152,x53,x153,x54,x154,x55,x155,x56,x156,x57,x157,x58,x158,x59,x159,x60,x160,x61,x161,x62,x162,x63,x163,x64,x164,x65,x165,x66,x166,x67,x167,x68,x168,x69,x169,x70,x170,x71,x171,x72,x172,x73,x173,x74,x174,x75,x175,x76,x176,x77,x177,x78,x178,x79,x179,x80,x180,x81,x181,x82,x182,x83,x183,x84,x184,x85,x185,x86,x186,x87,x187,x88,x188,x89,x189,x90,x190,x91,x191,x92,x192,x93,x193,x94,x194,x95,x195,x96,x196,x97,x197,x98,x198,x99,x199;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x102); 
   fscanf(fp,"%f", &x101); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x103); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x104); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x105); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x106); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x107); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x108); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x109); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x110); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x111); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x112); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x113); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x114); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x115); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x116); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x117); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x118); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x119); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x120); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x121); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x122); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x123); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x124); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x125); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x126); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x127); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x128); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x129); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x130); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x131); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x132); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x133); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x134); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x135); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x136); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x137); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x138); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x139); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x140); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x141); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x142); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x143); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x144); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x145); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x146); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x147); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x148); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x149); 
   fscanf(fp,"%f", &x50); 
   fscanf(fp,"%f", &x150); 
   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &x151); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x152); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x153); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x154); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x155); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x156); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x157); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x158); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x159); 
   fscanf(fp,"%f", &x60); 
   fscanf(fp,"%f", &x160); 
   fscanf(fp,"%f", &x61); 
   fscanf(fp,"%f", &x161); 
   fscanf(fp,"%f", &x62); 
   fscanf(fp,"%f", &x162); 
   fscanf(fp,"%f", &x63); 
   fscanf(fp,"%f", &x163); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x164); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x165); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x166); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x167); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x168); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x169); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x170); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &x171); 
   fscanf(fp,"%f", &x72); 
   fscanf(fp,"%f", &x172); 
   fscanf(fp,"%f", &x73); 
   fscanf(fp,"%f", &x173); 
   fscanf(fp,"%f", &x74); 
   fscanf(fp,"%f", &x174); 
   fscanf(fp,"%f", &x75); 
   fscanf(fp,"%f", &x175); 
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &x176); 
   fscanf(fp,"%f", &x77); 
   fscanf(fp,"%f", &x177); 
   fscanf(fp,"%f", &x78); 
   fscanf(fp,"%f", &x178); 
   fscanf(fp,"%f", &x79); 
   fscanf(fp,"%f", &x179); 
   fscanf(fp,"%f", &x80); 
   fscanf(fp,"%f", &x180); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x181); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x182); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x183); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x184); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x185); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x186); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x187); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x188); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x189); 
   fscanf(fp,"%f", &x90); 
   fscanf(fp,"%f", &x190); 
   fscanf(fp,"%f", &x91); 
   fscanf(fp,"%f", &x191); 
   fscanf(fp,"%f", &x92); 
   fscanf(fp,"%f", &x192); 
   fscanf(fp,"%f", &x93); 
   fscanf(fp,"%f", &x193); 
   fscanf(fp,"%f", &x94); 
   fscanf(fp,"%f", &x194); 
   fscanf(fp,"%f", &x95); 
   fscanf(fp,"%f", &x195); 
   fscanf(fp,"%f", &x96); 
   fscanf(fp,"%f", &x196); 
   fscanf(fp,"%f", &x97); 
   fscanf(fp,"%f", &x197); 
   fscanf(fp,"%f", &x98); 
   fscanf(fp,"%f", &x198); 
   fscanf(fp,"%f", &x99); 
   fscanf(fp,"%f", &x199); 

   fclose(fp);
   res=-0.5*(x2*x1*sin(x102 - x101) + x3*x2*sin(x103 - x102) + x4*x3*sin(x104 -
 x103) + x5*x4*sin(x105 - x104) + x6*x5*sin(x106 - x105) + x7*x6*sin(x107
 - x106) + x8*x7*sin(x108 - x107) + x9*x8*sin(x109 - x108) + x10*x9*sin(
x110 - x109) + x11*x10*sin(x111 - x110) + x12*x11*sin(x112 - x111) + x13*
x12*sin(x113 - x112) + x14*x13*sin(x114 - x113) + x15*x14*sin(x115 - x114)
 + x16*x15*sin(x116 - x115) + x17*x16*sin(x117 - x116) + x18*x17*sin(x118
 - x117) + x19*x18*sin(x119 - x118) + x20*x19*sin(x120 - x119) + x21*x20*
sin(x121 - x120) + x22*x21*sin(x122 - x121) + x23*x22*sin(x123 - x122) +
 x24*x23*sin(x124 - x123) + x25*x24*sin(x125 - x124) + x26*x25*sin(x126 -
 x125) + x27*x26*sin(x127 - x126) + x28*x27*sin(x128 - x127) + x29*x28*sin(
x129 - x128) + x30*x29*sin(x130 - x129) + x31*x30*sin(x131 - x130) + x32*
x31*sin(x132 - x131) + x33*x32*sin(x133 - x132) + x34*x33*sin(x134 - x133)
 + x35*x34*sin(x135 - x134) + x36*x35*sin(x136 - x135) + x37*x36*sin(x137
 - x136) + x38*x37*sin(x138 - x137) + x39*x38*sin(x139 - x138) + x40*x39*
sin(x140 - x139) + x41*x40*sin(x141 - x140) + x42*x41*sin(x142 - x141) +
 x43*x42*sin(x143 - x142) + x44*x43*sin(x144 - x143) + x45*x44*sin(x145 -
 x144) + x46*x45*sin(x146 - x145) + x47*x46*sin(x147 - x146) + x48*x47*sin(
x148 - x147) + x49*x48*sin(x149 - x148) + x50*x49*sin(x150 - x149) + x51*
x50*sin(x151 - x150) + x52*x51*sin(x152 - x151) + x53*x52*sin(x153 - x152)
 + x54*x53*sin(x154 - x153) + x55*x54*sin(x155 - x154) + x56*x55*sin(x156
 - x155) + x57*x56*sin(x157 - x156) + x58*x57*sin(x158 - x157) + x59*x58*
sin(x159 - x158) + x60*x59*sin(x160 - x159) + x61*x60*sin(x161 - x160) +
 x62*x61*sin(x162 - x161) + x63*x62*sin(x163 - x162) + x64*x63*sin(x164 -
 x163) + x65*x64*sin(x165 - x164) + x66*x65*sin(x166 - x165) + x67*x66*sin(
x167 - x166) + x68*x67*sin(x168 - x167) + x69*x68*sin(x169 - x168) + x70*
x69*sin(x170 - x169) + x71*x70*sin(x171 - x170) + x72*x71*sin(x172 - x171)
 + x73*x72*sin(x173 - x172) + x74*x73*sin(x174 - x173) + x75*x74*sin(x175
 - x174) + x76*x75*sin(x176 - x175) + x77*x76*sin(x177 - x176) + x78*x77*
sin(x178 - x177) + x79*x78*sin(x179 - x178) + x80*x79*sin(x180 - x179) +
 x81*x80*sin(x181 - x180) + x82*x81*sin(x182 - x181) + x83*x82*sin(x183 -
 x182) + x84*x83*sin(x184 - x183) + x85*x84*sin(x185 - x184) + x86*x85*sin(
x186 - x185) + x87*x86*sin(x187 - x186) + x88*x87*sin(x188 - x187) + x89*
x88*sin(x189 - x188) + x90*x89*sin(x190 - x189) + x91*x90*sin(x191 - x190)
 + x92*x91*sin(x192 - x191) + x93*x92*sin(x193 - x192) + x94*x93*sin(x194
 - x193) + x95*x94*sin(x195 - x194) + x96*x95*sin(x196 - x195) + x97*x96*
sin(x197 - x196) + x98*x97*sin(x198 - x197) + x99*x98*sin(x199 - x198) +
  0*x99*sin( 3.14159265358979 - x199))  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
