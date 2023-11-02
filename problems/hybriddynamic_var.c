#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  

float sqr(float b)
{
   float z;
   z = b*b;
   return(z);
}

int main(int argc, char** argv) { 
   char *problemname="hybriddynamic_var";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x81,x61,x21,x62,x22,x63,x23,x64,x24,x65,x25,x66,x26,x67,x27,x68,x28,x69,x29,x70,x30;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x61); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x62); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x63); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x30); 

   fclose(fp);
   res=-(-(sqr((-1.66666666666667) + x81) + sqr(x61)*x21 + sqr(x62)*x22 + sqr(x63)*
x23 + sqr(x64)*x24 + sqr(x65)*x25 + sqr(x66)*x26 + sqr(x67)*x27 + sqr(x68)
*x28 + sqr(x69)*x29 + sqr(x70)*x30)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
