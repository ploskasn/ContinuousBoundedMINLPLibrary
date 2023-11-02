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
   char *problemname="transswitch0030p";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x266,x267,x268,x269,x270,x271;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x266); 
   fscanf(fp,"%f", &x267); 
   fscanf(fp,"%f", &x268); 
   fscanf(fp,"%f", &x269); 
   fscanf(fp,"%f", &x270); 
   fscanf(fp,"%f", &x271); 

   fclose(fp);
   res= 200*sqr(x266) + 200*x266 + 175*sqr(x267) + 175*x267 + 250*sqr(x268) + 300*
x268 + 625*sqr(x269) + 100*x269 + 250*sqr(x270) + 300*x270 + 83.4*sqr(x271
) + 325*x271  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
