#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="st_qpc-m3b";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x2,x3,x4,x5,x6,x7,x8,x9,x10;
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

   fclose(fp);
   res=-(-(10*x1 - 0.68*x1*x1 - 0.46*x1*x2 + 10*x2 - 0.79*x1*x3 + 10*x3 - 0.51*x1*
 x4 + 10*x4 - 0.69*x1*x5 + 10*x5 - 0.68*x1*x6 + 10*x6 - 0.46*x1*x7 + 10*x7
  - 0.79*x1*x8 + 10*x8 - 0.51*x1*x9 + 10*x9 - 0.69*x1*x10 + 10*x10 - 0.46*
 x2*x1 - 0.55*x2*x2 - 0.58*x2*x3 - 0.45*x2*x4 - 0.6*x2*x5 - 0.46*x2*x6 -
  0.55*x2*x7 - 0.58*x2*x8 - 0.45*x2*x9 - 0.6*x2*x10 - 0.79*x3*x1 - 0.58*x3*
 x2 - 1.33*x3*x3 - 0.67*x3*x4 - 0.89*x3*x5 - 0.79*x3*x6 - 0.58*x3*x7 -
  1.33*x3*x8 - 0.67*x3*x9 - 0.89*x3*x10 - 0.51*x4*x1 - 0.45*x4*x2 - 0.67*x4
 *x3 - 0.69*x4*x4 - 0.58*x4*x5 - 0.51*x4*x6 - 0.45*x4*x7 - 0.67*x4*x8 -
  0.69*x4*x9 - 0.58*x4*x10 - 0.69*x5*x1 - 0.6*x5*x2 - 0.89*x5*x3 - 0.58*x5*
 x4 - 1.19*x5*x5 - 0.69*x5*x6 - 0.6*x5*x7 - 0.89*x5*x8 - 0.58*x5*x9 - 1.19
 *x5*x10 - 0.68*x6*x1 - 0.46*x6*x2 - 0.79*x6*x3 - 0.51*x6*x4 - 0.69*x6*x5
  - 0.68*x6*x6 - 0.46*x6*x7 - 0.79*x6*x8 - 0.51*x6*x9 - 0.69*x6*x10 - 0.46
 *x7*x1 - 0.55*x7*x2 - 0.58*x7*x3 - 0.45*x7*x4 - 0.6*x7*x5 - 0.46*x7*x6 -
  0.55*x7*x7 - 0.58*x7*x8 - 0.45*x7*x9 - 0.6*x7*x10 - 0.79*x8*x1 - 0.58*x8*
 x2 - 1.33*x8*x3 - 0.67*x8*x4 - 0.89*x8*x5 - 0.79*x8*x6 - 0.58*x8*x7 -
  1.33*x8*x8 - 0.67*x8*x9 - 0.89*x8*x10 - 0.51*x9*x1 - 0.45*x9*x2 - 0.67*x9
 *x3 - 0.69*x9*x4 - 0.58*x9*x5 - 0.51*x9*x6 - 0.45*x9*x7 - 0.67*x9*x8 -
  0.69*x9*x9 - 0.58*x9*x10 - 0.69*x10*x1 - 0.6*x10*x2 - 0.89*x10*x3 - 0.58*
 x10*x4 - 1.19*x10*x5 - 0.69*x10*x6 - 0.6*x10*x7 - 0.89*x10*x8 - 0.58*x10*
 x9 - 1.19*x10*x10)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
