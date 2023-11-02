#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="pooling_epa3";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x2,x3,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x4,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x5,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x6,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x7,x8,x9,x10,x11,x12,x13,x14,x65,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x101,x104;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
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
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x3); 
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
   fscanf(fp,"%f", &x4); 
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
   fscanf(fp,"%f", &x5); 
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
   fscanf(fp,"%f", &x6); 
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
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x65); 
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
   fscanf(fp,"%f", &x101); 
   fscanf(fp,"%f", &x104); 

   fclose(fp);
   res=-(-(3*x1*x15 + 3*x1*x16 + 3*x1*x17 + 3*x1*x18 + 3*x1*x19 + 3*x1*x20 + 3*x1*
x21 + 3*x1*x22 + 3*x1*x23 + 3*x1*x24 + 2*x2*x15 + 2*x2*x16 + 2*x2*x17 + 2*
x2*x18 + 2*x2*x19 + 2*x2*x20 + 2*x2*x21 + 2*x2*x22 + 2*x2*x23 + 2*x2*x24
 + 3.5*x3*x45 + 3.5*x3*x46 + 3.5*x3*x47 + 3.5*x3*x48 + 3.5*x3*x49 + 3.5*x3
*x50 + 3.5*x3*x51 + 3.5*x3*x52 + 3.5*x3*x53 + 3.5*x3*x54 + 3.5*x4*x55 +
 3.5*x4*x56 + 3.5*x4*x57 + 3.5*x4*x58 + 3.5*x4*x59 + 3.5*x4*x60 + 3.5*x4*
x61 + 3.5*x4*x62 + 3.5*x4*x63 + 3.5*x4*x64 + 2*x5*x25 + 2*x5*x26 + 2*x5*
x27 + 2*x5*x28 + 2*x5*x29 + 2*x5*x30 + 2*x5*x31 + 2*x5*x32 + 2*x5*x33 + 2*
x5*x34 + 2*x6*x35 + 2*x6*x36 + 2*x6*x37 + 2*x6*x38 + 2*x6*x39 + 2*x6*x40
 + 2*x6*x41 + 2*x6*x42 + 2*x6*x43 + 2*x6*x44 + x7*x35 + x7*x36 + x7*x37 +
 x7*x38 + x7*x39 + x7*x40 + x7*x41 + x7*x42 + x7*x43 + x7*x44 + 3*x8*x15 +
 3*x8*x16 + 3*x8*x17 + 3*x8*x18 + 3*x8*x19 + 3*x8*x20 + 3*x8*x21 + 3*x8*x22
 + 3*x8*x23 + 3*x8*x24 + 3*x9*x25 + 3*x9*x26 + 3*x9*x27 + 3*x9*x28 + 3*x9*
x29 + 3*x9*x30 + 3*x9*x31 + 3*x9*x32 + 3*x9*x33 + 3*x9*x34 + 0.7*x10*x35
 + 0.7*x10*x36 + 0.7*x10*x37 + 0.7*x10*x38 + 0.7*x10*x39 + 0.7*x10*x40 +
 0.7*x10*x41 + 0.7*x10*x42 + 0.7*x10*x43 + 0.7*x10*x44 + 0.5*x11*x35 + 0.5*
x11*x36 + 0.5*x11*x37 + 0.5*x11*x38 + 0.5*x11*x39 + 0.5*x11*x40 + 0.5*x11*
x41 + 0.5*x11*x42 + 0.5*x11*x43 + 0.5*x11*x44 + 0.5*x12*x45 + 0.5*x12*x46
 + 0.5*x12*x47 + 0.5*x12*x48 + 0.5*x12*x49 + 0.5*x12*x50 + 0.5*x12*x51 +
 0.5*x12*x52 + 0.5*x12*x53 + 0.5*x12*x54 + 0.3*x13*x55 + 0.3*x13*x56 + 0.3*
x13*x57 + 0.3*x13*x58 + 0.3*x13*x59 + 0.3*x13*x60 + 0.3*x13*x61 + 0.3*x13*
x62 + 0.3*x13*x63 + 0.3*x13*x64 + 2.5*x14*x55 + 2.5*x14*x56 + 2.5*x14*x57
 + 2.5*x14*x58 + 2.5*x14*x59 + 2.5*x14*x60 + 2.5*x14*x61 + 2.5*x14*x62 +
 2.5*x14*x63 + 2.5*x14*x64 - 8*x15 - 7.5*x16 - 6.5*x17 - 6*x18 - 6.5*x19 -
 5.5*x20 - 5*x21 - 5.5*x22 - 5.5*x23 - 5*x24 - 8*x25 - 7.5*x26 - 6.5*x27 -
 6*x28 - 6.5*x29 - 5.5*x30 - 5*x31 - 5.5*x32 - 5.5*x33 - 5*x34 - 8*x35 -
 7.5*x36 - 6.5*x37 - 6*x38 - 6.5*x39 - 5.5*x40 - 5*x41 - 5.5*x42 - 5.5*x43
 - 5*x44 - 8*x45 - 7.5*x46 - 6.5*x47 - 6*x48 - 6.5*x49 - 5.5*x50 - 5*x51
 - 5.5*x52 - 5.5*x53 - 5*x54 - 8*x55 - 7.5*x56 - 6.5*x57 - 6*x58 - 6.5*x59
 - 5.5*x60 - 5*x61 - 5.5*x62 - 5.5*x63 - 5*x64) + 0.5*x65 - x67 - 1.5*x68
 - x69 - 2*x70 - 2.5*x71 - 2*x72 - 2*x73 - 2.5*x74 - 2.5*x75 - 3*x76
 - 4*x77 - 4.5*x78 - 4*x79 - 5*x80 - 5.5*x81 - 5*x82 - 5*x83 - 5.5*x84
 - 0.5*x85 - x86 - 2*x87 - 2.5*x88 - 2*x89 - 3*x90 - 3.5*x91 - 3*x92
 - 3*x93 - 3.5*x94 + 2.5*x95 + 2*x96 + x97 + 0.5*x98 + x99 - 0.5*x101
 - 0.5*x104  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
