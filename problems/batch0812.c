#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="batch0812";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x13,x2,x14,x3,x15,x4,x16,x5,x17,x6,x18,x7,x19,x8,x20,x9,x21,x10,x22,x11,x23,x12,x24;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x24); 

   fclose(fp);
   res=-(-(250*exp(x1 + 0.6*x13) + 550*exp(x2 + 0.6*x14) + 250*exp(x3 + 0.6*x15) +
 1000*exp(x4 + 0.6*x16) + 300*exp(x5 + 0.6*x17) + 800*exp(x6 + 0.6*x18) +
 200*exp(x7 + 0.6*x19) + 1200*exp(x8 + 0.6*x20) + 250*exp(x9 + 0.6*x21) +
 250*exp(x10 + 0.6*x22) + 450*exp(x11 + 0.6*x23) + 700*exp(x12 + 0.6*x24))
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
