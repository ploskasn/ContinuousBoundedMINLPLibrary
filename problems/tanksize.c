#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="tanksize";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x34,x37,x35,x36;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x36); 

   fclose(fp);
   res=-( + (- x34*x37 - x35 - x36)/ 24.8739726027397*x37 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
