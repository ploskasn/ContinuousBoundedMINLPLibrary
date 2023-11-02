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
   char *problemname="least";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x4,x3,x2;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x2); 

   fclose(fp);
   res=-(-(sqr(127 - exp(-5*x4)*x3 - x2) + sqr(151 - exp(-3*x4)*x3 - x2) + sqr(379
 - exp(-x4)*x3 - x2) + sqr(421 - exp(5*x4)*x3 - x2) + sqr(460 - exp(3*x4)*
x3 - x2) + sqr(426 - exp(x4)*x3 - x2))  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
