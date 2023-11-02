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
   char *problemname="hybriddynamic_fixedcc";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x121,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x61,x41,x51,x31,x62,x42,x52,x32,x63,x43,x53,x33,x64,x44,x54,x34,x65,x45,x55,x35,x66,x46,x56,x36,x67,x47,x57,x37,x68,x48,x58,x38,x69,x49,x59,x39,x70,x50,x60,x40;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x121); 
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
   fscanf(fp,"%f", &x61); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x62); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x63); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x50); 
   fscanf(fp,"%f", &x60); 
   fscanf(fp,"%f", &x40); 

   fclose(fp);
   res=-(-(sqr((-1.66666666666667) + x121) + 0.2*sqr(x101) + 0.2*sqr(x102) + 0.2*
sqr(x103) + 0.2*sqr(x104) + 0.2*sqr(x105) + 0.2*sqr(x106) + 0.2*sqr(x107)
 + 0.2*sqr(x108) + 0.2*sqr(x109) + 0.2*sqr(x110) + 1000*(x61*x41 + x51*x31
 + x62*x42 + x52*x32 + x63*x43 + x53*x33 + x64*x44 + x54*x34 + x65*x45 +
 x55*x35 + x66*x46 + x56*x36 + x67*x47 + x57*x37 + x68*x48 + x58*x38 + x69*
x49 + x59*x39 + x70*x50 + x60*x40))  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
