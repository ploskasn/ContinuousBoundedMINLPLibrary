#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="st_qpc-m1";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x2,x3,x4,x5;
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

   fclose(fp);
   res=-(-(10*x1 - 0.34*x1*x1 - 0.28*x1*x2 + 10*x2 - 0.22*x1*x3 + 10*x3 - 0.24*x1*
x4 + 10*x4 - 0.51*x1*x5 + 10*x5 - 0.28*x2*x1 - 0.34*x2*x2 - 0.23*x2*x3 -
 0.24*x2*x4 - 0.45*x2*x5 - 0.22*x3*x1 - 0.23*x3*x2 - 0.35*x3*x3 - 0.22*x3*
x4 - 0.34*x3*x5 - 0.24*x4*x1 - 0.24*x4*x2 - 0.22*x4*x3 - 0.2*x4*x4 - 0.38*
x4*x5 - 0.51*x5*x1 - 0.45*x5*x2 - 0.34*x5*x3 - 0.38*x5*x4 - 0.99*x5*x5)
  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
