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
   char *problemname="st_fp7e";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20;
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

   fclose(fp);
   res=-(-(2*x1 - 0.5*sqr(x1) - sqr(x2) + 4*x2 - 1.5*sqr(x3) + 6*x3 - 2*sqr(x4) +
  8*x4 - 2.5*sqr(x5) + 10*x5 - 3*sqr(x6) + 12*x6 - 3.5*sqr(x7) + 14*x7 - 4*
 sqr(x8) + 16*x8 - 4.5*sqr(x9) + 18*x9 - 5*sqr(x10) + 20*x10 - 5.5*sqr(x11
 ) + 22*x11 - 6*sqr(x12) + 24*x12 - 6.5*sqr(x13) + 26*x13 - 7*sqr(x14) +
  28*x14 - 7.5*sqr(x15) + 30*x15 - 8*sqr(x16) + 32*x16 - 8.5*sqr(x17) + 34*
 x17 - 9*sqr(x18) + 36*x18 - 9.5*sqr(x19) + 38*x19 - 10*sqr(x20) + 40*x20)
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
