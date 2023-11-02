#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="steenbrf";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x104,x103,x106,x108,x105,x107,x98,x97,x100,x102,x99,x101,x92,x91,x94,x96,x93,x95,x86,x85,x88,x90,x87,x89,x80,x79,x82,x84,x81,x83,x74,x73,x76,x78,x75,x77,x68,x67,x70,x72,x69,x71,x62,x61,x64,x66,x63,x65,x56,x55,x58,x60,x57,x59,x50,x49,x52,x54,x51,x53,x44,x43,x46,x48,x45,x47,x38,x37,x40,x42,x39,x41,x32,x31,x34,x36,x33,x35,x26,x25,x28,x30,x27,x29,x20,x19,x22,x24,x21,x23,x14,x13,x16,x18,x15,x17,x8,x7,x10,x12,x9,x11,x2,x1,x4,x6,x3,x5;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x104); 
   fscanf(fp,"%f", &x103); 
   fscanf(fp,"%f", &x106); 
   fscanf(fp,"%f", &x108); 
   fscanf(fp,"%f", &x105); 
   fscanf(fp,"%f", &x107); 
   fscanf(fp,"%f", &x98); 
   fscanf(fp,"%f", &x97); 
   fscanf(fp,"%f", &x100); 
   fscanf(fp,"%f", &x102); 
   fscanf(fp,"%f", &x99); 
   fscanf(fp,"%f", &x101); 
   fscanf(fp,"%f", &x92); 
   fscanf(fp,"%f", &x91); 
   fscanf(fp,"%f", &x94); 
   fscanf(fp,"%f", &x96); 
   fscanf(fp,"%f", &x93); 
   fscanf(fp,"%f", &x95); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x90); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x80); 
   fscanf(fp,"%f", &x79); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x74); 
   fscanf(fp,"%f", &x73); 
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &x78); 
   fscanf(fp,"%f", &x75); 
   fscanf(fp,"%f", &x77); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x72); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &x62); 
   fscanf(fp,"%f", &x61); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x63); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x60); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x50); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x5); 

   fclose(fp);
   res=-( (-0.5*sqrt(x104)) - 0.5*sqrt(x103) - 0.5*((x106 + x108)*(x106 + x108)*
  x106 + x108)/(x104*x104) - 0.5*((x105 + x107)*(x105 + x107)*x105 + x107)
  /(x103*x103) - 0.5*sqrt(x98) - 0.5*sqrt(x97) - 0.5*((x100 + x102)*(x100
   + x102)*x100 + x102)/(x98*x98) - 0.5*((x99 + x101)*(x99 + x101)*x99 +
   x101)/(x97*x97) - 0.3*sqrt(x92) - 0.3*sqrt(x91) - 0.3*((x94 + x96)*(x94
   + x96)*x94 + x96)/(x92*x92) - 0.3*((x93 + x95)*(x93 + x95)*x93 + x95)/(
  x91*x91) - 0.25*sqrt(x86) - 0.25*sqrt(x85) - 0.25*((x88 + x90)*(x88 +
   x90)*x88 + x90)/(x86*x86) - 0.25*((x87 + x89)*(x87 + x89)*x87 + x89)/(
  x85*x85) - 0.6*sqrt(x80) - 0.6*sqrt(x79) - 0.6*((x82 + x84)*(x82 + x84)*
  x82 + x84)/(x80*x80) - 0.6*((x81 + x83)*(x81 + x83)*x81 + x83)/(x79*x79)
   - 0.4*sqrt(x74) - 0.4*sqrt(x73) - 0.4*((x76 + x78)*(x76 + x78)*x76 +
   x78)/(x74*x74) - 0.4*((x75 + x77)*(x75 + x77)*x75 + x77)/(x73*x73) -
   0.15*sqrt(x68) - 0.15*sqrt(x67) - 0.15*((x70 + x72)*(x70 + x72)*x70 +
   x72)/(x68*x68) - 0.15*((x69 + x71)*(x69 + x71)*x69 + x71)/(x67*x67) -
   0.55*sqrt(x62) - 0.55*sqrt(x61) - 0.55*((x64 + x66)*(x64 + x66)*x64 +
   x66)/(x62*x62) - 0.55*((x63 + x65)*(x63 + x65)*x63 + x65)/(x61*x61) -
   0.35*sqrt(x56) - 0.35*sqrt(x55) - 0.35*((x58 + x60)*(x58 + x60)*x58 +
   x60)/(x56*x56) - 0.35*((x57 + x59)*(x57 + x59)*x57 + x59)/(x55*x55) -
   0.6*sqrt(x50) - 0.6*sqrt(x49) - 0.6*((x52 + x54)*(x52 + x54)*x52 + x54)/
  (x50*x50) - 0.6*((x51 + x53)*(x51 + x53)*x51 + x53)/(x49*x49) - 0.25*
  sqrt(x44) - 0.25*sqrt(x43) - 0.25*((x46 + x48)*(x46 + x48)*x46 + x48)/(
  x44*x44) - 0.25*((x45 + x47)*(x45 + x47)*x45 + x47)/(x43*x43) - sqrt(x38
  ) - sqrt(x37) - ((x40 + x42)*(x40 + x42)*x40 + x42)/(x38*x38) - ((x39 +
   x41)*(x39 + x41)*x39 + x41)/(x37*x37) - 0.55*sqrt(x32) - 0.55*sqrt(x31)
   - 0.55*((x34 + x36)*(x34 + x36)*x34 + x36)/(x32*x32) - 0.55*((x33 + x35
  )*(x33 + x35)*x33 + x35)/(x31*x31) - 0.15*sqrt(x26) - 0.15*sqrt(x25) -
   0.15*((x28 + x30)*(x28 + x30)*x28 + x30)/(x26*x26) - 0.15*((x27 + x29)*(
  x27 + x29)*x27 + x29)/(x25*x25) - 0.5*sqrt(x20) - 0.5*sqrt(x19) - ((x22
   + x24)*(x22 + x24)*x22 + x24)/(x20*x20) - ((x21 + x23)*(x21 + x23)*x21
   + x23)/(x19*x19) - 0.3*sqrt(x14) - 0.3*sqrt(x13) - 0.3*((x16 + x18)*(
  x16 + x18)*x16 + x18)/(x14*x14) - 0.3*((x15 + x17)*(x15 + x17)*x15 + x17
  )/(x13*x13) - 0.4*sqrt(x8) - 0.4*sqrt(x7) - 0.4*((x10 + x12)*(x10 + x12)
  *x10 + x12)/(x8*x8) - 0.4*((x9 + x11)*(x9 + x11)*x9 + x11)/(x7*x7) -
   0.35*sqrt(x2) - 0.35*sqrt(x1) - 0.35*((x4 + x6)*(x4 + x6)*x4 + x6)/(x2*
  x2) - 0.35*((x3 + x5)*(x3 + x5)*x3 + x5)/(x1*x1) - 0.35*x3 - 0.35*x5 -
   0.5*x106 - 0.5*x108 - 0.5*x105 - 0.5*x107 - 0.5*x100 - 0.5*x102 - 0.5*
  x99 - 0.5*x101 - 0.3*x94 - 0.3*x96 - 0.3*x93 - 0.3*x95 - 0.25*x88 - 0.25
  *x90 - 0.25*x87 - 0.25*x89 - 0.6*x82 - 0.6*x84 - 0.6*x81 - 0.6*x83 - 0.4
  *x76 - 0.4*x78 - 0.4*x75 - 0.4*x77 - 0.15*x70 - 0.15*x72 - 0.15*x69 -
   0.15*x71 - 0.55*x64 - 0.55*x66 - 0.55*x63 - 0.55*x65 - 0.35*x58 - 0.35*
  x60 - 0.35*x57 - 0.35*x59 - 0.6*x52 - 0.6*x54 - 0.6*x51 - 0.6*x53 - 0.25
  *x46 - 0.25*x48 - 0.25*x45 - 0.25*x47 - x40 - x42 - x39 - x41 - 0.55*x34
   - 0.55*x36 - 0.55*x33 - 0.55*x35 - 0.15*x28 - 0.15*x30 - 0.15*x27 -
   0.15*x29 - x22 - x24 - x21 - x23 - 0.3*x16 - 0.3*x18 - 0.3*x15 - 0.3*x17
   - 0.4*x10 - 0.4*x12 - 0.4*x9 - 0.4*x11 - 0.35*x4 - 0.35*x6 
   );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
