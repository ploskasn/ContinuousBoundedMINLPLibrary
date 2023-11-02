#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="batch";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x7,x2,x8,x3,x9,x4,x10,x5,x11,x6,x12;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x12); 

   fclose(fp);
   res=-(-(250*exp(x1 + 0.6*x7) + 250*exp(x2 + 0.6*x8) + 250*exp(x3 + 0.6*x9) + 250
*exp(x4 + 0.6*x10) + 250*exp(x5 + 0.6*x11) + 250*exp(x6 + 0.6*x12))
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
