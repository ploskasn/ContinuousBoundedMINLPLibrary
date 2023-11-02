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
   char *problemname="powerflow0030p";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x225,x226,x227,x228,x229,x230;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x225); 
   fscanf(fp,"%f", &x226); 
   fscanf(fp,"%f", &x227); 
   fscanf(fp,"%f", &x228); 
   fscanf(fp,"%f", &x229); 
   fscanf(fp,"%f", &x230); 

   fclose(fp);
   res= 200*sqr(x225) + 200*x225 + 175*sqr(x226) + 175*x226 + 250*sqr(x227) + 300*
x227 + 625*sqr(x228) + 100*x228 + 250*sqr(x229) + 300*x229 + 83.4*sqr(x230
) + 325*x230  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
