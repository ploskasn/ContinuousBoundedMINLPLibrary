#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="nemhaus";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x4,x5,x6,x3;
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
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x3); 

   fclose(fp);
   res=-(-(2*x2*x4 + 4*x2*x5 + 3*x2*x6 + 6*x3*x4 + 2*x3*x5 + 3*x3*x6 + 5*x4*x5 + 3*
x4*x6 + 3*x5*x6)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
