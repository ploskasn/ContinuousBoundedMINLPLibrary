#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="st_qpk3";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11;
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
   fscanf(fp,"%f", &x11); 

   fclose(fp);
   res=-(-(0.5*x1*x2 - x1*x1 + 0.5*x2*x1 - x2*x2 + 0.5*x2*x3 + 0.5*x3*x2 - x3*x3
  + 0.5*x3*x4 + 0.5*x4*x3 - x4*x4 + 0.5*x4*x5 + 0.5*x5*x4 - x5*x5 + 0.5*x5
 *x6 + 0.5*x6*x5 - x6*x6 + 0.5*x6*x7 + 0.5*x7*x6 - x7*x7 + 0.5*x7*x8 + 0.5
 *x8*x7 - x8*x8 + 0.5*x8*x9 + 0.5*x9*x8 - x9*x9 + 0.5*x9*x10 + 0.5*x10*x9
  - x10*x10 + 0.5*x10*x11 + 0.5*x11*x10 - x11*x11)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
