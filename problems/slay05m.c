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
   char *problemname="slay05m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x6,x2,x7,x3,x8,x4,x9,x5,x10,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70;
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
   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x60); 
   fscanf(fp,"%f", &x61); 
   fscanf(fp,"%f", &x62); 
   fscanf(fp,"%f", &x63); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x70); 

   fclose(fp);
   res=-(-(150*(sqr((-4) + x1) + sqr((-10) + x6)) + 390*(sqr((-10) + x2) + sqr((-15
) + x7)) + 240*(sqr((-7) + x3) + sqr((-9) + x8)) + 70*(sqr((-3) + x4) +
 sqr((-3) + x9)) + 165*(sqr((-20) + x5) + sqr((-17) + x10))) - 300*x51
 - 240*x52 - 210*x53 - 140*x54 - 100*x55 - 150*x56 - 220*x57 - 120*x58
 - 300*x59 - 100*x60 - 300*x61 - 240*x62 - 210*x63 - 140*x64 - 100*x65
 - 150*x66 - 220*x67 - 120*x68 - 300*x69 - 100*x70  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
