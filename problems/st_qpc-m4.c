#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="st_qpc-m4";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x2,x3,x4,x5,x6,x7,x8,x10,x9;
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
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x9); 

   fclose(fp);
   res=-(-(10*x1 - 0.06*x1*x1 - 0.047*x1*x2 + 10*x2 - 0.047*x1*x3 + 10*x3 + 0.01*
 x1*x4 + 10*x4 - 0.01*x1*x5 + 10*x5 - 0.018*x1*x6 + 10*x6 - 0.026*x1*x7 +
  10*x7 + 0.018*x1*x8 + 10*x8 - 0.05*x1*x10 + 10*x10 - 0.047*x2*x1 - 0.11*
 x2*x2 - 0.024*x2*x3 + 0.025*x2*x4 - 0.038*x2*x5 - 0.05*x2*x6 - 0.05*x2*x7
  - 0.017*x2*x8 + 0.005*x2*x9 + 10*x9 - 0.039*x2*x10 - 0.047*x3*x1 - 0.024
 *x3*x2 - 0.11*x3*x3 + 0.009*x3*x4 - 0.026*x3*x5 - 0.034*x3*x6 - 0.066*x3*
 x7 + 0.014*x3*x8 - 0.005*x3*x9 - 0.085*x3*x10 + 0.01*x4*x1 + 0.025*x4*x2
  + 0.009*x4*x3 - 0.068*x4*x4 + 0.023*x4*x5 + 0.011*x4*x6 + 0.014*x4*x7 -
  0.017*x4*x8 - 0.077*x4*x9 - 0.017*x4*x10 - 0.01*x5*x1 - 0.038*x5*x2 -
  0.026*x5*x3 + 0.023*x5*x4 - 0.12*x5*x5 - 0.083*x5*x6 - 0.022*x5*x7 -
  0.017*x5*x8 + 0.003*x5*x9 + 0.034*x5*x10 - 0.018*x6*x1 - 0.05*x6*x2 -
  0.034*x6*x3 + 0.011*x6*x4 - 0.083*x6*x5 - 0.115*x6*x6 - 0.051*x6*x7 -
  0.015*x6*x8 - 0.022*x6*x9 + 0.012*x6*x10 - 0.026*x7*x1 - 0.05*x7*x2 -
  0.066*x7*x3 + 0.014*x7*x4 - 0.022*x7*x5 - 0.051*x7*x6 - 0.157*x7*x7 -
  0.012*x7*x8 - 0.019*x7*x9 - 0.057*x7*x10 + 0.018*x8*x1 - 0.017*x8*x2 +
  0.014*x8*x3 - 0.017*x8*x4 - 0.017*x8*x5 - 0.015*x8*x6 - 0.012*x8*x7 -
  0.033*x8*x8 - 0.022*x8*x9 + 0.006*x8*x10 + 0.005*x9*x2 - 0.005*x9*x3 -
  0.077*x9*x4 + 0.003*x9*x5 - 0.022*x9*x6 - 0.019*x9*x7 - 0.022*x9*x8 -
  0.11*x9*x9 - 0.009*x9*x10 - 0.05*x10*x1 - 0.039*x10*x2 - 0.085*x10*x3 -
  0.017*x10*x4 + 0.034*x10*x5 + 0.012*x10*x6 - 0.057*x10*x7 + 0.006*x10*x8
  - 0.009*x10*x9 - 0.226*x10*x10)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
