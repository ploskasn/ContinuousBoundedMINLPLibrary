#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="meanvarx";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x5,x6,x7,x8;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x8); 

   fclose(fp);
   res=-(-(42.18*x2*x2 + 40.36*x2*x3 + 21.76*x2*x4 + 10.6*x2*x5 + 24.64*x2*x6 +
  47.68*x2*x7 + 34.82*x2*x8 + 70.89*x3*x3 + 43.16*x3*x4 + 30.82*x3*x5 +
  46.48*x3*x6 + 47.6*x3*x7 + 25.24*x3*x8 + 25.51*x4*x4 + 19.2*x4*x5 + 45.26
 *x4*x6 + 26.44*x4*x7 + 9.4*x4*x8 + 22.33*x5*x5 + 20.64*x5*x6 + 20.92*x5*
 x7 + 2*x5*x8 + 30.01*x6*x6 + 32.72*x6*x7 + 14.4*x6*x8 + 42.23*x7*x7 +
  19.8*x7*x8 + 16.42*x8*x8 - 0.06435*x2 - 0.0548*x3 - 0.02505*x4 - 0.0762*
 x5 - 0.03815*x6 - 0.0927*x7 - 0.031*x8)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
