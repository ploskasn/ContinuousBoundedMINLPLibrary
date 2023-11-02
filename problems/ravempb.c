#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ravempb";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x37,x43,x2,x38,x44,x3,x39,x45,x4,x40,x46,x5,x41,x47,x6,x42,x48,x50,x51,x52,x53,x54;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x50); 
   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x54); 

   fclose(fp);
   res= 250*(exp(0.6*x1 + x37 + x43) + exp(0.6*x2 + x38 + x44) + exp(0.6*x3 +
   x39 + x45) + exp(0.6*x4 + x40 + x46) + exp(0.6*x5 + x41 + x47) + exp(0.6
  *x6 + x42 + x48)) + 150*(exp(0.5*x50) + exp(0.5*x51) + exp(0.5*x52) +
   exp(0.5*x53) + exp(0.5*x54))  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
