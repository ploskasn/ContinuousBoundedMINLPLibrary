#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="p_ball_40b_5p_4d_h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x203,x206,x209,x212,x214,x216,x218,x220,x222,x224,x226,x228,x230,x232,x234,x236,x237,x238,x239,x240,x241,x242,x243,x244,x245,x246,x247,x248,x249,x250,x251,x252,x253,x254,x255,x256,x257,x258,x259,x260;
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
   fscanf(fp,"%f", &x212); 
   fscanf(fp,"%f", &x214); 
   fscanf(fp,"%f", &x216); 
   fscanf(fp,"%f", &x218); 
   fscanf(fp,"%f", &x220); 
   fscanf(fp,"%f", &x222); 
   fscanf(fp,"%f", &x224); 
   fscanf(fp,"%f", &x226); 
   fscanf(fp,"%f", &x228); 
   fscanf(fp,"%f", &x230); 
   fscanf(fp,"%f", &x232); 
   fscanf(fp,"%f", &x234); 
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
   fscanf(fp,"%f", &x246); 
   fscanf(fp,"%f", &x247); 
   fscanf(fp,"%f", &x248); 
   fscanf(fp,"%f", &x249); 
   fscanf(fp,"%f", &x250); 
   fscanf(fp,"%f", &x251); 
   fscanf(fp,"%f", &x252); 
   fscanf(fp,"%f", &x253); 
   fscanf(fp,"%f", &x254); 
   fscanf(fp,"%f", &x255); 
   fscanf(fp,"%f", &x256); 
   fscanf(fp,"%f", &x257); 
   fscanf(fp,"%f", &x258); 
   fscanf(fp,"%f", &x259); 
   fscanf(fp,"%f", &x260); 

   fclose(fp);
   res=-(- x203 - x206 - x209 - x212 - x214 - x216 - x218 - x220 - x222 - x224
    - x226 - x228 - x230 - x232 - x234 - x236 - x237 - x238 - x239 - x240
    - x241 - x242 - x243 - x244 - x245 - x246 - x247 - x248 - x249 - x250
    - x251 - x252 - x253 - x254 - x255 - x256 - x257 - x258 - x259 - x260
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
