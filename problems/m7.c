#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="m7";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x44,x45,x64,x65,x66,x67,x76,x77,x80,x81;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &x77); 
   fscanf(fp,"%f", &x80); 
   fscanf(fp,"%f", &x81); 

   fclose(fp);
   res=-( - 2.4*x44 - 2.4*x45 - 7*x64 - 7*x65 - 12*x66 - 12*x67 - 12*x76
 - 12*x77 - 6*x80 - 6*x81 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
