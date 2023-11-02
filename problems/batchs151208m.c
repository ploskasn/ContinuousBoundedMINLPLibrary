#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="batchs151208m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x193,x205,x2,x194,x206,x3,x195,x207,x4,x196,x208,x5,x197,x209,x6,x198,x210,x7,x199,x211,x8,x200,x212,x9,x201,x213,x10,x202,x214,x11,x203,x215,x12,x204,x216,x218,x219,x220,x221,x222,x223,x224,x225,x226,x227,x228;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x193); 
   fscanf(fp,"%f", &x205); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x194); 
   fscanf(fp,"%f", &x206); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x195); 
   fscanf(fp,"%f", &x207); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x196); 
   fscanf(fp,"%f", &x208); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x197); 
   fscanf(fp,"%f", &x209); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x198); 
   fscanf(fp,"%f", &x210); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x199); 
   fscanf(fp,"%f", &x211); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x200); 
   fscanf(fp,"%f", &x212); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x201); 
   fscanf(fp,"%f", &x213); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x202); 
   fscanf(fp,"%f", &x214); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x203); 
   fscanf(fp,"%f", &x215); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x204); 
   fscanf(fp,"%f", &x216); 
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

   fclose(fp);
   res=-(-(250*(exp(0.6*x1 + x193 + x205) + exp(0.6*x2 + x194 + x206) + exp(0.6*
   x3 + x195 + x207) + exp(0.6*x4 + x196 + x208) + exp(0.6*x5 + x197 +
    x209) + exp(0.6*x6 + x198 + x210) + exp(0.6*x7 + x199 + x211) + exp(0.6
   *x8 + x200 + x212) + exp(0.6*x9 + x201 + x213) + exp(0.6*x10 + x202 +
    x214) + exp(0.6*x11 + x203 + x215) + exp(0.6*x12 + x204 + x216)) + 150*
   (exp(0.5*x218) + exp(0.5*x219) + exp(0.5*x220) + exp(0.5*x221) + exp(
   0.5*x222) + exp(0.5*x223) + exp(0.5*x224) + exp(0.5*x225) + exp(0.5*
   x226) + exp(0.5*x227) + exp(0.5*x228)))  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
