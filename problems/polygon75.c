#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="polygon75";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x1,x77,x76,x3,x78,x4,x79,x5,x80,x6,x81,x7,x82,x8,x83,x9,x84,x10,x85,x11,x86,x12,x87,x13,x88,x14,x89,x15,x90,x16,x91,x17,x92,x18,x93,x19,x94,x20,x95,x21,x96,x22,x97,x23,x98,x24,x99,x25,x100,x26,x101,x27,x102,x28,x103,x29,x104,x30,x105,x31,x106,x32,x107,x33,x108,x34,x109,x35,x110,x36,x111,x37,x112,x38,x113,x39,x114,x40,x115,x41,x116,x42,x117,x43,x118,x44,x119,x45,x120,x46,x121,x47,x122,x48,x123,x49,x124,x50,x125,x51,x126,x52,x127,x53,x128,x54,x129,x55,x130,x56,x131,x57,x132,x58,x133,x59,x134,x60,x135,x61,x136,x62,x137,x63,x138,x64,x139,x65,x140,x66,x141,x67,x142,x68,x143,x69,x144,x70,x145,x71,x146,x72,x147,x73,x148,x74,x149;
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
   fscanf(fp,"%f", &x77); 
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x78); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x79); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x80); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x90); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x91); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x92); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x93); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x94); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x95); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x96); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x97); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x98); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x99); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x100); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x101); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x102); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x103); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x104); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x105); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x106); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x107); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x108); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x109); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x110); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x111); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x112); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x113); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x114); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x115); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x116); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x117); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x118); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x119); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x120); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x121); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x122); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x123); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x124); 
   fscanf(fp,"%f", &x50); 
   fscanf(fp,"%f", &x125); 
   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &x126); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x127); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x128); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x129); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x130); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x131); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x132); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x133); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x134); 
   fscanf(fp,"%f", &x60); 
   fscanf(fp,"%f", &x135); 
   fscanf(fp,"%f", &x61); 
   fscanf(fp,"%f", &x136); 
   fscanf(fp,"%f", &x62); 
   fscanf(fp,"%f", &x137); 
   fscanf(fp,"%f", &x63); 
   fscanf(fp,"%f", &x138); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x139); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x140); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x141); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x142); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x143); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x144); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x145); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &x146); 
   fscanf(fp,"%f", &x72); 
   fscanf(fp,"%f", &x147); 
   fscanf(fp,"%f", &x73); 
   fscanf(fp,"%f", &x148); 
   fscanf(fp,"%f", &x74); 
   fscanf(fp,"%f", &x149); 

   fclose(fp);
   res=-0.5*(x2*x1*sin(x77 - x76) + x3*x2*sin(x78 - x77) + x4*x3*sin(x79 - x78)
 + x5*x4*sin(x80 - x79) + x6*x5*sin(x81 - x80) + x7*x6*sin(x82 - x81) + x8
*x7*sin(x83 - x82) + x9*x8*sin(x84 - x83) + x10*x9*sin(x85 - x84) + x11*
x10*sin(x86 - x85) + x12*x11*sin(x87 - x86) + x13*x12*sin(x88 - x87) + x14
*x13*sin(x89 - x88) + x15*x14*sin(x90 - x89) + x16*x15*sin(x91 - x90) +
 x17*x16*sin(x92 - x91) + x18*x17*sin(x93 - x92) + x19*x18*sin(x94 - x93)
 + x20*x19*sin(x95 - x94) + x21*x20*sin(x96 - x95) + x22*x21*sin(x97 - x96
) + x23*x22*sin(x98 - x97) + x24*x23*sin(x99 - x98) + x25*x24*sin(x100 -
 x99) + x26*x25*sin(x101 - x100) + x27*x26*sin(x102 - x101) + x28*x27*sin(
x103 - x102) + x29*x28*sin(x104 - x103) + x30*x29*sin(x105 - x104) + x31*
x30*sin(x106 - x105) + x32*x31*sin(x107 - x106) + x33*x32*sin(x108 - x107)
 + x34*x33*sin(x109 - x108) + x35*x34*sin(x110 - x109) + x36*x35*sin(x111
 - x110) + x37*x36*sin(x112 - x111) + x38*x37*sin(x113 - x112) + x39*x38*
sin(x114 - x113) + x40*x39*sin(x115 - x114) + x41*x40*sin(x116 - x115) +
 x42*x41*sin(x117 - x116) + x43*x42*sin(x118 - x117) + x44*x43*sin(x119 -
 x118) + x45*x44*sin(x120 - x119) + x46*x45*sin(x121 - x120) + x47*x46*sin(
x122 - x121) + x48*x47*sin(x123 - x122) + x49*x48*sin(x124 - x123) + x50*
x49*sin(x125 - x124) + x51*x50*sin(x126 - x125) + x52*x51*sin(x127 - x126)
 + x53*x52*sin(x128 - x127) + x54*x53*sin(x129 - x128) + x55*x54*sin(x130
 - x129) + x56*x55*sin(x131 - x130) + x57*x56*sin(x132 - x131) + x58*x57*
sin(x133 - x132) + x59*x58*sin(x134 - x133) + x60*x59*sin(x135 - x134) +
 x61*x60*sin(x136 - x135) + x62*x61*sin(x137 - x136) + x63*x62*sin(x138 -
 x137) + x64*x63*sin(x139 - x138) + x65*x64*sin(x140 - x139) + x66*x65*sin(
x141 - x140) + x67*x66*sin(x142 - x141) + x68*x67*sin(x143 - x142) + x69*
x68*sin(x144 - x143) + x70*x69*sin(x145 - x144) + x71*x70*sin(x146 - x145)
 + x72*x71*sin(x147 - x146) + x73*x72*sin(x148 - x147) + x74*x73*sin(x149
 - x148) +  0*x74*sin( 3.14159265358979 - x149))  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
