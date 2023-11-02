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
   char *problemname="st_rv9";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50;
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

   fclose(fp);
   res=-(-(-0.00135*sqr(x1) - 0.0027*x1 - 0.0008*sqr(x2) - 0.0496*x2 - 0.00135*
 sqr(x3) - 0.0081*x3 - 0.0007*sqr(x4) - 0.0686*x4 - 0.0024*sqr(x5) -
  0.0912*x5 - 0.00445*sqr(x6) - 0.6764*x6 - 0.00165*sqr(x7) - 0.1914*x7 -
  0.0004*sqr(x8) - 0.0384*x8 - 0.00285*sqr(x9) - 0.3876*x9 - 0.00155*sqr(
 x10) - 0.1116*x10 - 0.0038*sqr(x11) - 0.4636*x11 - 0.0044*sqr(x12) -
  0.044*x12 - 0.0046*sqr(x13) - 0.3588*x13 - 0.00085*sqr(x14) - 0.0272*x14
  - 0.00165*sqr(x15) - 0.231*x15 - 0.0025*sqr(x16) - 0.27*x16 - 0.00385*
 sqr(x17) - 0.308*x17 - 0.00355*sqr(x18) - 0.3692*x18 - 0.0015*sqr(x19) -
  0.288*x19 - 0.0037*sqr(x20) - 0.407*x20 - 0.00125*sqr(x21) - 0.1175*x21
  - 0.00095*sqr(x22) - 0.1045*x22 - 0.0048*sqr(x23) - 0.1632*x23 - 0.0015*
 sqr(x24) - 0.135*x24 - 0.0048*sqr(x25) - 0.0864*x25 - 0.0007*sqr(x26) -
  0.1176*x26 - 0.0043*sqr(x27) - 0.645*x27 - 0.0045*sqr(x28) - 0.882*x28 -
  0.00245*sqr(x29) - 0.3283*x29 - 0.0004*sqr(x30) - 0.0648*x30 - 0.0048*
 sqr(x31) - 0.0864*x31 - 0.00485*sqr(x32) - 0.4753*x32 - 0.00025*sqr(x33)
  - 0.046*x33 - 0.00435*sqr(x34) - 0.7917*x34 - 0.00365*sqr(x35) - 0.7008*
 x35 - 0.0002*sqr(x36) - 0.0384*x36 - 0.00205*sqr(x37) - 0.0164*x37 -
  0.00165*sqr(x38) - 0.0891*x38 - 0.00175*sqr(x39) - 0.0945*x39 - 0.0048*
 sqr(x40) - 0.7296*x40 - 0.00095*sqr(x41) - 0.1045*x41 - 0.0048*sqr(x42)
  - 0.1632*x42 - 0.0015*sqr(x43) - 0.135*x43 - 0.0048*sqr(x44) - 0.0864*
 x44 - 0.0007*sqr(x45) - 0.1176*x45 - 0.0043*sqr(x46) - 0.645*x46 - 0.0045
 *sqr(x47) - 0.882*x47 - 0.00245*sqr(x48) - 0.3283*x48 - 0.0004*sqr(x49)
  - 0.0648*x49 - 0.0048*sqr(x50) - 0.0864*x50)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
