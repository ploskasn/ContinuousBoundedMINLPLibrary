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
   char *problemname="ex8_1_3";
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
   res=-(-(1 + sqr(1 + x1 + x2)*(19 + 3*sqr(x1) - 14*x1 + 6*x1*x2 - 14*x2 + 3*sqr(
x2)))*(30 + sqr(2*x1 - 3*x2)*(18 + 12*sqr(x1) - 32*x1 - 36*x1*x2 + 48*x2
 + 27*sqr(x2)))  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
