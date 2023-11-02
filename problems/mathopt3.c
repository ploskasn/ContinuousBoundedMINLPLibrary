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
   char *problemname="mathopt3";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x2,x3,x5,x6,x4;
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
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x4); 

   fclose(fp);
   res=-(-(sqr(x1 + x2) + sqr(x3 - x5) + sqr(x6 - x4) + 2*sqr(x1 + x3 - x4) + sqr(
x2 - x1 + x3 - x4) + 10*sqr(sin(x1 + x5 - x6)))  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
