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
   char *problemname="powerflow0057p";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x427,x428,x429,x430,x431,x432,x433;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x427); 
   fscanf(fp,"%f", &x428); 
   fscanf(fp,"%f", &x429); 
   fscanf(fp,"%f", &x430); 
   fscanf(fp,"%f", &x431); 
   fscanf(fp,"%f", &x432); 
   fscanf(fp,"%f", &x433); 

   fclose(fp);
   res= 775.795*sqr(x427) + 2000*x427 + 100*sqr(x428) + 4000*x428 + 2500*sqr(x429)
 + 2000*x429 + 100*sqr(x430) + 4000*x430 + 222.222*sqr(x431) + 2000*x431
 + 100*sqr(x432) + 4000*x432 + 322.581*sqr(x433) + 2000*x433 
 ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
