#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="batchs201210m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x253,x265,x2,x254,x266,x3,x255,x267,x4,x256,x268,x5,x257,x269,x6,x258,x270,x7,x259,x271,x8,x260,x272,x9,x261,x273,x10,x262,x274,x11,x263,x275,x12,x264,x276,x278,x279,x280,x281,x282,x283,x284,x285,x286,x287,x288;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x253); 
   fscanf(fp,"%f", &x265); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x254); 
   fscanf(fp,"%f", &x266); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x255); 
   fscanf(fp,"%f", &x267); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x256); 
   fscanf(fp,"%f", &x268); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x257); 
   fscanf(fp,"%f", &x269); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x258); 
   fscanf(fp,"%f", &x270); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x259); 
   fscanf(fp,"%f", &x271); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x260); 
   fscanf(fp,"%f", &x272); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x261); 
   fscanf(fp,"%f", &x273); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x262); 
   fscanf(fp,"%f", &x274); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x263); 
   fscanf(fp,"%f", &x275); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x264); 
   fscanf(fp,"%f", &x276); 
   fscanf(fp,"%f", &x278); 
   fscanf(fp,"%f", &x279); 
   fscanf(fp,"%f", &x280); 
   fscanf(fp,"%f", &x281); 
   fscanf(fp,"%f", &x282); 
   fscanf(fp,"%f", &x283); 
   fscanf(fp,"%f", &x284); 
   fscanf(fp,"%f", &x285); 
   fscanf(fp,"%f", &x286); 
   fscanf(fp,"%f", &x287); 
   fscanf(fp,"%f", &x288); 

   fclose(fp);
   res=-(-(250*(exp(0.6*x1 + x253 + x265) + exp(0.6*x2 + x254 + x266) + exp(0.6*
   x3 + x255 + x267) + exp(0.6*x4 + x256 + x268) + exp(0.6*x5 + x257 +
    x269) + exp(0.6*x6 + x258 + x270) + exp(0.6*x7 + x259 + x271) + exp(0.6
   *x8 + x260 + x272) + exp(0.6*x9 + x261 + x273) + exp(0.6*x10 + x262 +
    x274) + exp(0.6*x11 + x263 + x275) + exp(0.6*x12 + x264 + x276)) + 150*
   (exp(0.5*x278) + exp(0.5*x279) + exp(0.5*x280) + exp(0.5*x281) + exp(
   0.5*x282) + exp(0.5*x283) + exp(0.5*x284) + exp(0.5*x285) + exp(0.5*
   x286) + exp(0.5*x287) + exp(0.5*x288)))  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
