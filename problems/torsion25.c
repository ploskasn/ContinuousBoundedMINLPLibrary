#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="torsion25";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1406,x1407,x1408,x1409;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1406); 
   fscanf(fp,"%f", &x1407); 
   fscanf(fp,"%f", &x1408); 
   fscanf(fp,"%f", &x1409); 

   fclose(fp);
   res=-( + 0.000628456510809452*x1406 + 0.000628456510809452*x1407
 - 0.000188536953242836*x1408 - 0.000188536953242836*x1409 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
