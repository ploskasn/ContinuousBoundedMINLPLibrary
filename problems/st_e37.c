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
   char *problemname="st_e37";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x2;
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

   fclose(fp);
   res=-(-(sqr((-1.9837) +  1 +  1) + sqr((-0.8393) + exp(-x1)* 1 + exp(-x2)* 1) +
 sqr((-0.4305) + exp(-2*x1)* 1 + exp(-2*x2)* 1) + sqr((-0.2441) + exp(-3*x1
)* 1 + exp(-3*x2)* 1) + sqr((-0.1248) + exp(-4*x1)* 1 + exp(-4*x2)* 1) +
 sqr((-0.0981) + exp(-5*x1)* 1 + exp(-5*x2)* 1) + sqr((-0.0549) + exp(-6*x1
)* 1 + exp(-6*x2)* 1) + sqr((-0.0174) + exp(-7*x1)* 1 + exp(-7*x2)* 1) +
 sqr((-0.0249) + exp(-8*x1)* 1 + exp(-8*x2)* 1) + sqr((-0.0154) + exp(-9*x1
)* 1 + exp(-9*x2)* 1) + sqr((-0.0127) + exp(-10*x1)* 1 + exp(-10*x2)* 1))
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
