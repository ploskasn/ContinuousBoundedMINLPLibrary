#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ex6_1_1";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x4,x3,x5,x8,x6,x9,x7;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x7); 

   fclose(fp);
   res=-(-((log(x2) - log(x2 + x4))*x2 + (log(x4) - log(x2 + x4))*x4 + (log(x3) -
 log(x3 + x5))*x3 + (log(x5) - log(x3 + x5))*x5 + 0.925356626778358*x2*x8
 + 0.746014540096753*x4*x6 + 0.925356626778358*x3*x9 + 0.746014540096753*
x5*x7)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
