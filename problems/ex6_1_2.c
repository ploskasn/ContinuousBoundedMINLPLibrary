#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ex6_1_2";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x5,x4;
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
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x4); 

   fclose(fp);
   res=-(-((0.06391 + log(x2))*x2 + (-0.02875 + log(x3))*x3 + 0.925356626778358*x2*
x5 + 0.746014540096753*x3*x4)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
