#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="pooling_epa1";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x5,x6,x2,x3,x4,x7,x8,x9,x10,x11,x12,x13,x14;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x14); 

   fclose(fp);
   res=-(-(2*x1*x5 + 2*x1*x6 + 8*x2*x5 + 8*x2*x6 + 10*x3*x5 + 10*x3*x6 + 16*x4*x5
 + 16*x4*x6 - 6*x5 - 12*x6) - 10*x7 - 4*x8 + 4*x9 + 10*x10 + 4*x11
 + 10*x12 + x13 + 7*x14  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
