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
   char *problemname="st_fp7a";
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
   res=-(-(2*x1 - 0.5*sqr(x1) - 0.5*sqr(x2) + 2*x2 - 0.5*sqr(x3) + 2*x3 - 0.5*sqr(
 x4) + 2*x4 - 0.5*sqr(x5) + 2*x5 - 0.5*sqr(x6) + 2*x6 - 0.5*sqr(x7) + 2*x7
  - 0.5*sqr(x8) + 2*x8 - 0.5*sqr(x9) + 2*x9 - 0.5*sqr(x10) + 2*x10 - 0.5*
 sqr(x11) + 2*x11 - 0.5*sqr(x12) + 2*x12 - 0.5*sqr(x13) + 2*x13 - 0.5*sqr(
 x14) + 2*x14 - 0.5*sqr(x15) + 2*x15 - 0.5*sqr(x16) + 2*x16 - 0.5*sqr(x17)
  + 2*x17 - 0.5*sqr(x18) + 2*x18 - 0.5*sqr(x19) + 2*x19 - 0.5*sqr(x20) + 2
 *x20)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
