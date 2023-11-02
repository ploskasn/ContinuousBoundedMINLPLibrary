#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ex5_2_5";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x4,x7,x10,x18,x2,x5,x8,x11,x23,x3,x6,x9,x12,x28,x19,x24,x29,x20,x25,x30,x21,x26,x31,x22,x27,x32,x13,x14,x15,x16,x17;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x17); 

   fclose(fp);
   res=-((18 - 6*x1 - 16*x4 - 15*x7 - 12*x10)*x18 + (18 - 6*x2 - 16*x5 - 15*x8 -
 12*x11)*x23 + (18 - 6*x3 - 16*x6 - 15*x9 - 12*x12)*x28 + (15 - 6*x1 - 16*
x4 - 15*x7 - 12*x10)*x19 + (15 - 6*x2 - 16*x5 - 15*x8 - 12*x11)*x24 + (15
 - 6*x3 - 16*x6 - 15*x9 - 12*x12)*x29 + (19 - 6*x1 - 16*x4 - 15*x7 - 12*
x10)*x20 + (19 - 6*x2 - 16*x5 - 15*x8 - 12*x11)*x25 + (19 - 6*x3 - 16*x6
 - 15*x9 - 12*x12)*x30 + (16 - 6*x1 - 16*x4 - 15*x7 - 12*x10)*x21 + (16 -
 6*x2 - 16*x5 - 15*x8 - 12*x11)*x26 + (16 - 6*x3 - 16*x6 - 15*x9 - 12*x12)*
x31 + (14 - 6*x1 - 16*x4 - 15*x7 - 12*x10)*x22 + (14 - 6*x2 - 16*x5 - 15*
x8 - 12*x11)*x27 + (14 - 6*x3 - 16*x6 - 15*x9 - 12*x12)*x32) - 8*x13
 - 5*x14 - 9*x15 - 6*x16 - 4*x17  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
