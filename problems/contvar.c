#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="contvar";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x81,x89,x2,x82,x90,x3,x83,x91,x4,x84,x92,x5,x85,x93,x6,x86,x94,x7,x87,x95,x8,x88,x96,x9,x10,x11,x12,x13,x14,x15,x16,x98,x99,x100,x101,x102,x103,x104,x105;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x90); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x91); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x92); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x93); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x94); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x95); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x96); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x98); 
   fscanf(fp,"%f", &x99); 
   fscanf(fp,"%f", &x100); 
   fscanf(fp,"%f", &x101); 
   fscanf(fp,"%f", &x102); 
   fscanf(fp,"%f", &x103); 
   fscanf(fp,"%f", &x104); 
   fscanf(fp,"%f", &x105); 

   fclose(fp);
   res=-(-(63400*exp(0.6*x1 + x81 + x89) + 5750*exp(0.6*x2 + x82 + x90) + 5750*
  exp(0.6*x3 + x83 + x91) + 5750*exp(0.6*x4 + x84 + x92) + 5750*exp(0.6*x5
   + x85 + x93) + 23100*exp(0.65*x6 + x86 + x94) + 5750*exp(0.6*x7 + x87
   + x95) + 5750*exp(0.6*x8 + x88 + x96) + 5750*exp(0.6*x9 + x82 + x90) +
   5750*exp(0.6*x10 + x84 + x92) + 360000*exp(0.975*x11 + x88 + x96) + 2900
  *exp(0.85*x12 + x82 + x90) + 12100*exp(0.75*x13 + x83 + x91) + 2900*exp(
  0.85*x14 + x84 + x92) + 2900*exp(0.85*x15 + x85 + x93) + 2900*exp(0.85*
  x16 + x87 + x95) + 5750*(exp(0.6*x98) + exp(0.6*x99) + exp(0.6*x100) +
   exp(0.6*x101) + exp(0.6*x102) + exp(0.6*x103) + exp(0.6*x104) + exp(0.6*
  x105)))  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
