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
   char *problemname="st_e28";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x7,x5,x9,x4;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x4); 

   fclose(fp);
   res=-(-(5.3578547*sqr(x7) + 0.8356891*x5*x9 + 37.293239*x5) - 5000*x4 
 + 40792.141);

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
