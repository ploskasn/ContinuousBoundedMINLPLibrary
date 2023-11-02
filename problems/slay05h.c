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
   char *problemname="slay05h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x6,x2,x7,x3,x8,x4,x9,x5,x10,x211,x212,x213,x214,x215,x216,x217,x218,x219,x220,x221,x222,x223,x224,x225,x226,x227,x228,x229,x230;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x211); 
   fscanf(fp,"%f", &x212); 
   fscanf(fp,"%f", &x213); 
   fscanf(fp,"%f", &x214); 
   fscanf(fp,"%f", &x215); 
   fscanf(fp,"%f", &x216); 
   fscanf(fp,"%f", &x217); 
   fscanf(fp,"%f", &x218); 
   fscanf(fp,"%f", &x219); 
   fscanf(fp,"%f", &x220); 
   fscanf(fp,"%f", &x221); 
   fscanf(fp,"%f", &x222); 
   fscanf(fp,"%f", &x223); 
   fscanf(fp,"%f", &x224); 
   fscanf(fp,"%f", &x225); 
   fscanf(fp,"%f", &x226); 
   fscanf(fp,"%f", &x227); 
   fscanf(fp,"%f", &x228); 
   fscanf(fp,"%f", &x229); 
   fscanf(fp,"%f", &x230); 

   fclose(fp);
   res=-(-(150*(sqr((-4) + x1) + sqr((-10) + x6)) + 390*(sqr((-10) + x2) + sqr((-15
) + x7)) + 240*(sqr((-7) + x3) + sqr((-9) + x8)) + 70*(sqr((-3) + x4) +
 sqr((-3) + x9)) + 165*(sqr((-20) + x5) + sqr((-17) + x10))) - 300*x211
 - 240*x212 - 210*x213 - 140*x214 - 100*x215 - 150*x216 - 220*x217
 - 120*x218 - 300*x219 - 100*x220 - 300*x221 - 240*x222 - 210*x223
 - 140*x224 - 100*x225 - 150*x226 - 220*x227 - 120*x228 - 300*x229
 - 100*x230  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
