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
   char *problemname="ex8_1_6";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x2;
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

   fclose(fp);
   res=-(-(-1/(0.1 + sqr((-4) + x1) + sqr((-4) + x2)) - 1/(0.2 + sqr((-1) + x1) +
 sqr((-1) + x2)) - 1/(0.2 + sqr((-8) + x1) + sqr((-8) + x2))) 
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
