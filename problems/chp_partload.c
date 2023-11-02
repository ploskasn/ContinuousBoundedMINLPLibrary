#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="chp_partload";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2229,x2230,x2231,x2232,x2233,x2234,x2235,x2236,x2237,x2238;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x2229); 
   fscanf(fp,"%f", &x2230); 
   fscanf(fp,"%f", &x2231); 
   fscanf(fp,"%f", &x2232); 
   fscanf(fp,"%f", &x2233); 
   fscanf(fp,"%f", &x2234); 
   fscanf(fp,"%f", &x2235); 
   fscanf(fp,"%f", &x2236); 
   fscanf(fp,"%f", &x2237); 
   fscanf(fp,"%f", &x2238); 

   fclose(fp);
   res=-(  (- 0.177127735081089*x2229 - 0.163251368738331*x2230
    - 0.15046209100307*x2231 - 0.138674738251678*x2232
    - 0.127810818665141*x2233 - 0.117797989553125*x2234
    - 0.108569575625*x2235 - 0.100064125*x2236 - 0.092225*x2237
    - 0.085*x2238)/1.26098344191743  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
