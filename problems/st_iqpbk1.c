#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="st_iqpbk1";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x2,x3,x4,x5,x6,x7,x8;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x8); 

   fclose(fp);
   res=-(-(0.845*x1*x1 + 7*x1 + 0.5*x1*x2 + 6*x2 + x1*x3 + 5*x3 + 1.5*x1*x4 + 4*x4
 + 2*x1*x5 + 3*x5 + 2.5*x1*x6 + 2*x6 + 3*x1*x7 + x7 + 3.5*x1*x8 + 0.5*x2*
x1 + 0.845*x2*x2 + 0.5*x2*x3 + x2*x4 + 1.5*x2*x5 + 2*x2*x6 + 2.5*x2*x7 + 3
*x2*x8 + x3*x1 + 0.5*x3*x2 + 0.845*x3*x3 + 0.5*x3*x4 + x3*x5 + 1.5*x3*x6
 + 2*x3*x7 + 2.5*x3*x8 + 1.5*x4*x1 + x4*x2 + 0.5*x4*x3 + 0.845*x4*x4 + 0.5
*x4*x5 + x4*x6 + 1.5*x4*x7 + 2*x4*x8 + 2*x5*x1 + 1.5*x5*x2 + x5*x3 + 0.5*
x5*x4 + 0.845*x5*x5 + 0.5*x5*x6 + x5*x7 + 1.5*x5*x8 + 2.5*x6*x1 + 2*x6*x2
 + 1.5*x6*x3 + x6*x4 + 0.5*x6*x5 + 0.845*x6*x6 + 0.5*x6*x7 + x6*x8 + 3*x7*
x1 + 2.5*x7*x2 + 2*x7*x3 + 1.5*x7*x4 + x7*x5 + 0.5*x7*x6 + 0.845*x7*x7 +
 0.5*x7*x8 + 3.5*x8*x1 + 3*x8*x2 + 2.5*x8*x3 + 2*x8*x4 + 1.5*x8*x5 + x8*x6
 + 0.5*x8*x7 + 0.845*x8*x8)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
