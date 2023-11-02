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
   char *problemname="powerflow0014p";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x109,x110,x111,x112,x113;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x109); 
   fscanf(fp,"%f", &x110); 
   fscanf(fp,"%f", &x111); 
   fscanf(fp,"%f", &x112); 
   fscanf(fp,"%f", &x113); 

   fclose(fp);
   res= 430.293*sqr(x109) + 2000*x109 + 2500*sqr(x110) + 2000*x110 + 100*sqr(x111)
 + 4000*x111 + 100*sqr(x112) + 4000*x112 + 100*sqr(x113) + 4000*x113
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
