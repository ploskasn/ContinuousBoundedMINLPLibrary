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
   char *problemname="hybriddynamic_fixed";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x71,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x60); 

   fclose(fp);
   res=-(-(sqr((-1.66666666666667) + x71) + 0.2*sqr(x51) + 0.2*sqr(x52) + 0.2*sqr(
x53) + 0.2*sqr(x54) + 0.2*sqr(x55) + 0.2*sqr(x56) + 0.2*sqr(x57) + 0.2*
sqr(x58) + 0.2*sqr(x59) + 0.2*sqr(x60))  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
