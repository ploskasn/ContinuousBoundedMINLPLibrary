#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="pooling_epa2";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x11,x12,x13,x2,x3,x17,x18,x19,x4,x14,x15,x16,x5,x6,x7,x8,x9,x10,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x31;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x31); 

   fclose(fp);
   res=-(-(3*x1*x11 + 3*x1*x12 + 3*x1*x13 + 2*x2*x11 + 2*x2*x12 + 2*x2*x13 + 3.5*x3
*x17 + 3.5*x3*x18 + 3.5*x3*x19 + 2*x4*x14 + 2*x4*x15 + 2*x4*x16 + x5*x14
 + x5*x15 + x5*x16 + 3*x6*x11 + 3*x6*x12 + 3*x6*x13 + 0.7*x7*x14 + 0.7*x7*
x15 + 0.7*x7*x16 + 0.5*x8*x14 + 0.5*x8*x15 + 0.5*x8*x16 + 0.3*x9*x17 + 0.3
*x9*x18 + 0.3*x9*x19 + 2.5*x10*x17 + 2.5*x10*x18 + 2.5*x10*x19 - 6.3*x11
 - 5.5*x12 - 5*x13 - 6.3*x14 - 5.5*x15 - 5*x16 - 6.3*x17 - 5.5*x18 - 5*x19
) - 1.2*x20 - 2*x21 - 2.5*x22 - 4.2*x23 - 5*x24 - 5.5*x25 - 2.2*x26
 - 3*x27 - 3.5*x28 + 0.8*x29 - 0.5*x31  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
