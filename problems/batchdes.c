#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="batchdes";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x10,x17,x11,x18,x12,x19;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x19); 

   fclose(fp);
   res=-(-(250*exp(0.6*x10 + x17) + 500*exp(0.6*x11 + x18) + 340*exp(0.6*x12 + x19
 ))  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
