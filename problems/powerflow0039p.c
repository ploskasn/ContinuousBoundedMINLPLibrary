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
   char *problemname="powerflow0039p";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x263,x264,x265,x266,x267,x268,x269,x270,x271,x272;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x263); 
   fscanf(fp,"%f", &x264); 
   fscanf(fp,"%f", &x265); 
   fscanf(fp,"%f", &x266); 
   fscanf(fp,"%f", &x267); 
   fscanf(fp,"%f", &x268); 
   fscanf(fp,"%f", &x269); 
   fscanf(fp,"%f", &x270); 
   fscanf(fp,"%f", &x271); 
   fscanf(fp,"%f", &x272); 

   fclose(fp);
   res= 100*sqr(x263) + 30*x263 + 100*sqr(x264) + 30*x264 + 100*sqr(x265) + 30*
x265 + 100*sqr(x266) + 30*x266 + 100*sqr(x267) + 30*x267 + 100*sqr(x268)
 + 30*x268 + 100*sqr(x269) + 30*x269 + 100*sqr(x270) + 30*x270 + 100*sqr(
x271) + 30*x271 + 100*sqr(x272) + 30*x272  + 2;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
