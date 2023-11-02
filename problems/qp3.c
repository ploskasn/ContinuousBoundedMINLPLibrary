#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="qp3";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x52,x2,x53,x3,x54,x4,x55,x5,x56,x6,x57,x7,x58,x8,x59,x9,x60,x10,x61,x11,x62,x12,x63,x13,x64,x14,x65,x15,x66,x16,x67,x17,x68,x18,x69,x19,x70,x20,x71,x21,x72,x22,x73,x23,x74,x24,x75,x25,x76,x26,x77,x27,x78,x28,x79,x29,x80,x30,x81,x31,x82,x32,x83,x33,x84,x34,x85,x35,x86,x36,x87,x37,x88,x38,x89,x39,x90,x40,x91,x41,x92,x42,x93,x43,x94,x44,x95,x45,x96,x46,x97,x47,x98,x48,x99,x49,x100,x50,x101,x51;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x60); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x61); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x62); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x63); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x72); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x73); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x74); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x75); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x77); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x78); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x79); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x80); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x90); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x91); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x92); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x93); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x94); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x95); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x96); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x97); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x98); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x99); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x100); 
   fscanf(fp,"%f", &x50); 
   fscanf(fp,"%f", &x101); 
   fscanf(fp,"%f", &x51); 

   fclose(fp);
   res=-(-(x52*x2 + x53*x3 + x54*x4 + x55*x5 + x56*x6 + x57*x7 + x58*x8 + x59*x9 +
 x60*x10 + x61*x11 + x62*x12 + x63*x13 + x64*x14 + x65*x15 + x66*x16 + x67*
x17 + x68*x18 + x69*x19 + x70*x20 + x71*x21 + x72*x22 + x73*x23 + x74*x24
 + x75*x25 + x76*x26 + x77*x27 + x78*x28 + x79*x29 + x80*x30 + x81*x31 +
 x82*x32 + x83*x33 + x84*x34 + x85*x35 + x86*x36 + x87*x37 + x88*x38 + x89*
x39 + x90*x40 + x91*x41 + x92*x42 + x93*x43 + x94*x44 + x95*x45 + x96*x46
 + x97*x47 + x98*x48 + x99*x49 + x100*x50 + x101*x51)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
