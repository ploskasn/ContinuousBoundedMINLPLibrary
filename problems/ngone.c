#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ngone";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x3,x103,x104,x5,x105,x6,x106,x7,x107,x8,x108,x9,x109,x10,x110,x11,x111,x12,x112,x13,x113,x14,x114,x15,x115,x16,x116,x17,x117,x18,x118,x19,x119,x20,x120,x21,x121,x22,x122,x23,x123,x24,x124,x25,x125,x26,x126,x27,x127,x28,x128,x29,x129,x30,x130,x31,x131,x32,x132,x33,x133,x34,x134,x35,x135,x36,x136,x37,x137,x38,x138,x39,x139,x40,x140,x41,x141,x42,x142,x43,x143,x44,x144,x45,x145,x46,x146,x47,x147,x48,x148,x49,x149,x50,x150,x51,x151,x52,x152,x53,x153,x54,x154,x55,x155,x56,x156,x57,x157,x58,x158,x59,x159,x60,x160,x61,x161,x62,x162,x63,x163,x64,x164,x65,x165,x66,x166,x67,x167,x68,x168,x69,x169,x70,x170,x71,x171,x72,x172,x73,x173,x74,x174,x75,x175,x76,x176,x77,x177,x78,x178,x79,x179,x80,x180,x81,x181,x82,x182,x83,x183,x84,x184,x85,x185,x86,x186,x87,x187,x88,x188,x89,x189,x90,x190,x91,x191,x92,x192,x93,x193,x94,x194,x95,x195,x96,x196,x97,x197,x98,x198,x99,x199,x100,x200,x101,x201;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x103); 
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
   fscanf(fp,"%f", &x100); 
   fscanf(fp,"%f", &x200); 
   fscanf(fp,"%f", &x101); 
   fscanf(fp,"%f", &x201); 

   fclose(fp);
   res=-(-(0.25* 0*x3 + 0.25* 0* 0 - 0.25*x3*x103 - 0.25* 0*x104 + 0.25*x5*x104 -
 0.25*x5*x105 + 0.25*x6*x103 - 0.25*x6*x106 + 0.25*x7*x105 - 0.25*x7*x107
 + 0.25*x8*x106 - 0.25*x8*x108 + 0.25*x9*x107 - 0.25*x9*x109 + 0.25*x10*
x108 - 0.25*x10*x110 + 0.25*x11*x109 - 0.25*x11*x111 + 0.25*x12*x110 -
 0.25*x12*x112 + 0.25*x13*x111 - 0.25*x13*x113 + 0.25*x14*x112 - 0.25*x14*
x114 + 0.25*x15*x113 - 0.25*x15*x115 + 0.25*x16*x114 - 0.25*x16*x116 +
 0.25*x17*x115 - 0.25*x17*x117 + 0.25*x18*x116 - 0.25*x18*x118 + 0.25*x19*
x117 - 0.25*x19*x119 + 0.25*x20*x118 - 0.25*x20*x120 + 0.25*x21*x119 -
 0.25*x21*x121 + 0.25*x22*x120 - 0.25*x22*x122 + 0.25*x23*x121 - 0.25*x23*
x123 + 0.25*x24*x122 - 0.25*x24*x124 + 0.25*x25*x123 - 0.25*x25*x125 +
 0.25*x26*x124 - 0.25*x26*x126 + 0.25*x27*x125 - 0.25*x27*x127 + 0.25*x28*
x126 - 0.25*x28*x128 + 0.25*x29*x127 - 0.25*x29*x129 + 0.25*x30*x128 -
 0.25*x30*x130 + 0.25*x31*x129 - 0.25*x31*x131 + 0.25*x32*x130 - 0.25*x32*
x132 + 0.25*x33*x131 - 0.25*x33*x133 + 0.25*x34*x132 - 0.25*x34*x134 +
 0.25*x35*x133 - 0.25*x35*x135 + 0.25*x36*x134 - 0.25*x36*x136 + 0.25*x37*
x135 - 0.25*x37*x137 + 0.25*x38*x136 - 0.25*x38*x138 + 0.25*x39*x137 -
 0.25*x39*x139 + 0.25*x40*x138 - 0.25*x40*x140 + 0.25*x41*x139 - 0.25*x41*
x141 + 0.25*x42*x140 - 0.25*x42*x142 + 0.25*x43*x141 - 0.25*x43*x143 +
 0.25*x44*x142 - 0.25*x44*x144 + 0.25*x45*x143 - 0.25*x45*x145 + 0.25*x46*
x144 - 0.25*x46*x146 + 0.25*x47*x145 - 0.25*x47*x147 + 0.25*x48*x146 -
 0.25*x48*x148 + 0.25*x49*x147 - 0.25*x49*x149 + 0.25*x50*x148 - 0.25*x50*
x150 + 0.25*x51*x149 - 0.25*x51*x151 + 0.25*x52*x150 - 0.25*x52*x152 +
 0.25*x53*x151 - 0.25*x53*x153 + 0.25*x54*x152 - 0.25*x54*x154 + 0.25*x55*
x153 - 0.25*x55*x155 + 0.25*x56*x154 - 0.25*x56*x156 + 0.25*x57*x155 -
 0.25*x57*x157 + 0.25*x58*x156 - 0.25*x58*x158 + 0.25*x59*x157 - 0.25*x59*
x159 + 0.25*x60*x158 - 0.25*x60*x160 + 0.25*x61*x159 - 0.25*x61*x161 +
 0.25*x62*x160 - 0.25*x62*x162 + 0.25*x63*x161 - 0.25*x63*x163 + 0.25*x64*
x162 - 0.25*x64*x164 + 0.25*x65*x163 - 0.25*x65*x165 + 0.25*x66*x164 -
 0.25*x66*x166 + 0.25*x67*x165 - 0.25*x67*x167 + 0.25*x68*x166 - 0.25*x68*
x168 + 0.25*x69*x167 - 0.25*x69*x169 + 0.25*x70*x168 - 0.25*x70*x170 +
 0.25*x71*x169 - 0.25*x71*x171 + 0.25*x72*x170 - 0.25*x72*x172 + 0.25*x73*
x171 - 0.25*x73*x173 + 0.25*x74*x172 - 0.25*x74*x174 + 0.25*x75*x173 -
 0.25*x75*x175 + 0.25*x76*x174 - 0.25*x76*x176 + 0.25*x77*x175 - 0.25*x77*
x177 + 0.25*x78*x176 - 0.25*x78*x178 + 0.25*x79*x177 - 0.25*x79*x179 +
 0.25*x80*x178 - 0.25*x80*x180 + 0.25*x81*x179 - 0.25*x81*x181 + 0.25*x82*
x180 - 0.25*x82*x182 + 0.25*x83*x181 - 0.25*x83*x183 + 0.25*x84*x182 -
 0.25*x84*x184 + 0.25*x85*x183 - 0.25*x85*x185 + 0.25*x86*x184 - 0.25*x86*
x186 + 0.25*x87*x185 - 0.25*x87*x187 + 0.25*x88*x186 - 0.25*x88*x188 +
 0.25*x89*x187 - 0.25*x89*x189 + 0.25*x90*x188 - 0.25*x90*x190 + 0.25*x91*
x189 - 0.25*x91*x191 + 0.25*x92*x190 - 0.25*x92*x192 + 0.25*x93*x191 -
 0.25*x93*x193 + 0.25*x94*x192 - 0.25*x94*x194 + 0.25*x95*x193 - 0.25*x95*
x195 + 0.25*x96*x194 - 0.25*x96*x196 + 0.25*x97*x195 - 0.25*x97*x197 +
 0.25*x98*x196 - 0.25*x98*x198 + 0.25*x99*x197 - 0.25*x99*x199 + 0.25*x100*
x198 - 0.25*x100*x200 + 0.25*x101*x199 - 0.25*x101*x201 + 0.25* 0*x200
 - 0.25* 0*x201)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
