#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="gams02";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x12580,x12581,x12582,x12585,x12590,x12591;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x12580); 
   fscanf(fp,"%f", &x12581); 
   fscanf(fp,"%f", &x12582); 
   fscanf(fp,"%f", &x12585); 
   fscanf(fp,"%f", &x12590); 
   fscanf(fp,"%f", &x12591); 

   fclose(fp);
   res=- 1E-5*x12580 + x12581 + x12582 + 1E-8*x12585 + 0.001*x12590

+ 0.001*x12591  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
