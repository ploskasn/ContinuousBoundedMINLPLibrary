#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="p_ball_40b_5p_3d_m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x203,x206,x209,x211,x213,x215,x217,x219,x221,x223,x225,x227,x228,x229,x230,x231,x232,x233,x234,x235,x236,x237,x238,x239,x240,x241,x242,x243,x244,x245;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x203); 
   fscanf(fp,"%f", &x206); 
   fscanf(fp,"%f", &x209); 
   fscanf(fp,"%f", &x211); 
   fscanf(fp,"%f", &x213); 
   fscanf(fp,"%f", &x215); 
   fscanf(fp,"%f", &x217); 
   fscanf(fp,"%f", &x219); 
   fscanf(fp,"%f", &x221); 
   fscanf(fp,"%f", &x223); 
   fscanf(fp,"%f", &x225); 
   fscanf(fp,"%f", &x227); 
   fscanf(fp,"%f", &x228); 
   fscanf(fp,"%f", &x229); 
   fscanf(fp,"%f", &x230); 
   fscanf(fp,"%f", &x231); 
   fscanf(fp,"%f", &x232); 
   fscanf(fp,"%f", &x233); 
   fscanf(fp,"%f", &x234); 
   fscanf(fp,"%f", &x235); 
   fscanf(fp,"%f", &x236); 
   fscanf(fp,"%f", &x237); 
   fscanf(fp,"%f", &x238); 
   fscanf(fp,"%f", &x239); 
   fscanf(fp,"%f", &x240); 
   fscanf(fp,"%f", &x241); 
   fscanf(fp,"%f", &x242); 
   fscanf(fp,"%f", &x243); 
   fscanf(fp,"%f", &x244); 
   fscanf(fp,"%f", &x245); 

   fclose(fp);
   res=-(- x203 - x206 - x209 - x211 - x213 - x215 - x217 - x219 - x221 - x223
   - x225 - x227 - x228 - x229 - x230 - x231 - x232 - x233 - x234 - x235
   - x236 - x237 - x238 - x239 - x240 - x241 - x242 - x243 - x244 - x245
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
