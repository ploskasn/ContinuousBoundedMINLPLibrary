#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="torsion75";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x4006,x4007,x4008,x4009;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x4006); 
   fscanf(fp,"%f", &x4007); 
   fscanf(fp,"%f", &x4008); 
   fscanf(fp,"%f", &x4009); 

   fclose(fp);
   res=-( + 0.00021499828001376*x4006 + 0.00021499828001376*x4007
 - 6.4499484004128E-5*x4008 - 6.4499484004128E-5*x4009 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
