#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="polygon50";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x1,x52,x51,x3,x53,x4,x54,x5,x55,x6,x56,x7,x57,x8,x58,x9,x59,x10,x60,x11,x61,x12,x62,x13,x63,x14,x64,x15,x65,x16,x66,x17,x67,x18,x68,x19,x69,x20,x70,x21,x71,x22,x72,x23,x73,x24,x74,x25,x75,x26,x76,x27,x77,x28,x78,x29,x79,x30,x80,x31,x81,x32,x82,x33,x83,x34,x84,x35,x85,x36,x86,x37,x87,x38,x88,x39,x89,x40,x90,x41,x91,x42,x92,x43,x93,x44,x94,x45,x95,x46,x96,x47,x97,x48,x98,x49,x99;
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
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x60); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x61); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x62); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x63); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x72); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x73); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x74); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x75); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x77); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x78); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x79); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x80); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x90); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x91); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x92); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x93); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x94); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x95); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x96); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x97); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x98); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x99); 

   fclose(fp);
   res=-0.5*(x2*x1*sin(x52 - x51) + x3*x2*sin(x53 - x52) + x4*x3*sin(x54 - x53)
 + x5*x4*sin(x55 - x54) + x6*x5*sin(x56 - x55) + x7*x6*sin(x57 - x56) + x8
*x7*sin(x58 - x57) + x9*x8*sin(x59 - x58) + x10*x9*sin(x60 - x59) + x11*
x10*sin(x61 - x60) + x12*x11*sin(x62 - x61) + x13*x12*sin(x63 - x62) + x14
*x13*sin(x64 - x63) + x15*x14*sin(x65 - x64) + x16*x15*sin(x66 - x65) +
 x17*x16*sin(x67 - x66) + x18*x17*sin(x68 - x67) + x19*x18*sin(x69 - x68)
 + x20*x19*sin(x70 - x69) + x21*x20*sin(x71 - x70) + x22*x21*sin(x72 - x71
) + x23*x22*sin(x73 - x72) + x24*x23*sin(x74 - x73) + x25*x24*sin(x75 -
 x74) + x26*x25*sin(x76 - x75) + x27*x26*sin(x77 - x76) + x28*x27*sin(x78
 - x77) + x29*x28*sin(x79 - x78) + x30*x29*sin(x80 - x79) + x31*x30*sin(
x81 - x80) + x32*x31*sin(x82 - x81) + x33*x32*sin(x83 - x82) + x34*x33*
sin(x84 - x83) + x35*x34*sin(x85 - x84) + x36*x35*sin(x86 - x85) + x37*x36
*sin(x87 - x86) + x38*x37*sin(x88 - x87) + x39*x38*sin(x89 - x88) + x40*
x39*sin(x90 - x89) + x41*x40*sin(x91 - x90) + x42*x41*sin(x92 - x91) + x43
*x42*sin(x93 - x92) + x44*x43*sin(x94 - x93) + x45*x44*sin(x95 - x94) +
 x46*x45*sin(x96 - x95) + x47*x46*sin(x97 - x96) + x48*x47*sin(x98 - x97)
 + x49*x48*sin(x99 - x98) +  0*x49*sin( 3.14159265358979 - x99))  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
