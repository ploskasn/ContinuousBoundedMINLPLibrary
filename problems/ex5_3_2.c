#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ex5_3_2";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x2,x9,x13;
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
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x13); 

   fclose(fp);
   res=-(- 0.00432*x1 - 0.01517*x2 - 0.01517*x9 - 0.00432*x13  - 0.9979
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
