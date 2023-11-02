#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="srcpm";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x34,x35,x36,x37,x38,x39;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x39); 

   fclose(fp);
   res=-(-3865470.56640001*pow(x34,(-4)) - 5130022.82472*pow(x35,(-4)) - 423446.8691225*pow(
 x36,(-4)) - 1808.40439881057*pow(x37,(-2.33333333333333)) - 17313.2956782741*pow(
 x38,(-2.33333333333333))) + x39  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
