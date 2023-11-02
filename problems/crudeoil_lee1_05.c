#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_lee1_05";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x226,x227,x228,x229,x230,x231,x232,x233,x258,x259,x260,x261,x262,x263,x264,x265,x290,x291,x292,x293,x294,x295,x296,x297,x322,x323,x324,x325,x326,x327,x328,x329,x354,x355,x356,x357,x358,x359,x360,x361;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x226); 
   fscanf(fp,"%f", &x227); 
   fscanf(fp,"%f", &x228); 
   fscanf(fp,"%f", &x229); 
   fscanf(fp,"%f", &x230); 
   fscanf(fp,"%f", &x231); 
   fscanf(fp,"%f", &x232); 
   fscanf(fp,"%f", &x233); 
   fscanf(fp,"%f", &x258); 
   fscanf(fp,"%f", &x259); 
   fscanf(fp,"%f", &x260); 
   fscanf(fp,"%f", &x261); 
   fscanf(fp,"%f", &x262); 
   fscanf(fp,"%f", &x263); 
   fscanf(fp,"%f", &x264); 
   fscanf(fp,"%f", &x265); 
   fscanf(fp,"%f", &x290); 
   fscanf(fp,"%f", &x291); 
   fscanf(fp,"%f", &x292); 
   fscanf(fp,"%f", &x293); 
   fscanf(fp,"%f", &x294); 
   fscanf(fp,"%f", &x295); 
   fscanf(fp,"%f", &x296); 
   fscanf(fp,"%f", &x297); 
   fscanf(fp,"%f", &x322); 
   fscanf(fp,"%f", &x323); 
   fscanf(fp,"%f", &x324); 
   fscanf(fp,"%f", &x325); 
   fscanf(fp,"%f", &x326); 
   fscanf(fp,"%f", &x327); 
   fscanf(fp,"%f", &x328); 
   fscanf(fp,"%f", &x329); 
   fscanf(fp,"%f", &x354); 
   fscanf(fp,"%f", &x355); 
   fscanf(fp,"%f", &x356); 
   fscanf(fp,"%f", &x357); 
   fscanf(fp,"%f", &x358); 
   fscanf(fp,"%f", &x359); 
   fscanf(fp,"%f", &x360); 
   fscanf(fp,"%f", &x361); 

   fclose(fp);
   res=-( - 0.1*x226 - 0.6*x227 - 0.2*x228 - 0.5*x229 - 0.1*x230
 - 0.6*x231 - 0.2*x232 - 0.5*x233 - 0.1*x258 - 0.6*x259 - 0.2*x260
 - 0.5*x261 - 0.1*x262 - 0.6*x263 - 0.2*x264 - 0.5*x265 - 0.1*x290
 - 0.6*x291 - 0.2*x292 - 0.5*x293 - 0.1*x294 - 0.6*x295 - 0.2*x296
 - 0.5*x297 - 0.1*x322 - 0.6*x323 - 0.2*x324 - 0.5*x325 - 0.1*x326
 - 0.6*x327 - 0.2*x328 - 0.5*x329 - 0.1*x354 - 0.6*x355 - 0.2*x356
 - 0.5*x357 - 0.1*x358 - 0.6*x359 - 0.2*x360 - 0.5*x361 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
