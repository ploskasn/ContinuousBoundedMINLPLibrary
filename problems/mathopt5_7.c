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
   char *problemname="mathopt5_7";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 

   fclose(fp);
   res=-(-0.01*(-0.0218343*sqr(x1) - 8.9248e-5*x1 + 0.998266*pow(x1,3) - 1.6995*
pow(x1,4) + 0.2*pow(x1,5))  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
