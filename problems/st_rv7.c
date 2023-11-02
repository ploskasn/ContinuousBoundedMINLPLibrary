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
   char *problemname="st_rv7";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30;
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

   fclose(fp);
   res=-(-(-0.00165*sqr(x1) - 0.1914*x1 - 0.0004*sqr(x2) - 0.0384*x2 - 0.00285*
 sqr(x3) - 0.3876*x3 - 0.00155*sqr(x4) - 0.1116*x4 - 0.0038*sqr(x5) -
  0.4636*x5 - 0.0044*sqr(x6) - 0.044*x6 - 0.0046*sqr(x7) - 0.3588*x7 -
  0.00085*sqr(x8) - 0.0272*x8 - 0.00165*sqr(x9) - 0.231*x9 - 0.0025*sqr(x10
 ) - 0.27*x10 - 0.00385*sqr(x11) - 0.308*x11 - 0.00355*sqr(x12) - 0.3692*
 x12 - 0.0015*sqr(x13) - 0.288*x13 - 0.0037*sqr(x14) - 0.407*x14 - 0.00125
 *sqr(x15) - 0.1175*x15 - 0.00095*sqr(x16) - 0.1045*x16 - 0.0048*sqr(x17)
  - 0.1632*x17 - 0.0015*sqr(x18) - 0.135*x18 - 0.0048*sqr(x19) - 0.0864*
 x19 - 0.0007*sqr(x20) - 0.1176*x20 - 0.0043*sqr(x21) - 0.645*x21 - 0.0045
 *sqr(x22) - 0.882*x22 - 0.00245*sqr(x23) - 0.3283*x23 - 0.0004*sqr(x24)
  - 0.0648*x24 - 0.0048*sqr(x25) - 0.0864*x25 - 0.00485*sqr(x26) - 0.4753*
 x26 - 0.00025*sqr(x27) - 0.046*x27 - 0.00435*sqr(x28) - 0.7917*x28 -
  0.00365*sqr(x29) - 0.7008*x29 - 0.0002*sqr(x30) - 0.0384*x30) 
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
