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
   char *problemname="slay04m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x5,x2,x6,x3,x7,x4,x8,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44;
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
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x44); 

   fclose(fp);
   res=-(-(150*(sqr((-4) + x1) + sqr((-10) + x5)) + 390*(sqr((-10) + x2) + sqr((-15
) + x6)) + 240*(sqr((-7) + x3) + sqr((-9) + x7)) + 70*(sqr((-3) + x4) +
 sqr((-3) + x8))) - 300*x33 - 240*x34 - 210*x35 - 100*x36 - 150*x37
 - 120*x38 - 300*x39 - 240*x40 - 210*x41 - 100*x42 - 150*x43 - 120*x44
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
