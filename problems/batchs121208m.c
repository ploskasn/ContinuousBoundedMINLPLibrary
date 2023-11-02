#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="batchs121208m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x157,x169,x2,x158,x170,x3,x159,x171,x4,x160,x172,x5,x161,x173,x6,x162,x174,x7,x163,x175,x8,x164,x176,x9,x165,x177,x10,x166,x178,x11,x167,x179,x12,x168,x180,x182,x183,x184,x185,x186,x187,x188,x189,x190,x191,x192;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x157); 
   fscanf(fp,"%f", &x169); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x158); 
   fscanf(fp,"%f", &x170); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x159); 
   fscanf(fp,"%f", &x171); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x160); 
   fscanf(fp,"%f", &x172); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x161); 
   fscanf(fp,"%f", &x173); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x162); 
   fscanf(fp,"%f", &x174); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x163); 
   fscanf(fp,"%f", &x175); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x164); 
   fscanf(fp,"%f", &x176); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x165); 
   fscanf(fp,"%f", &x177); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x166); 
   fscanf(fp,"%f", &x178); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x167); 
   fscanf(fp,"%f", &x179); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x168); 
   fscanf(fp,"%f", &x180); 
   fscanf(fp,"%f", &x182); 
   fscanf(fp,"%f", &x183); 
   fscanf(fp,"%f", &x184); 
   fscanf(fp,"%f", &x185); 
   fscanf(fp,"%f", &x186); 
   fscanf(fp,"%f", &x187); 
   fscanf(fp,"%f", &x188); 
   fscanf(fp,"%f", &x189); 
   fscanf(fp,"%f", &x190); 
   fscanf(fp,"%f", &x191); 
   fscanf(fp,"%f", &x192); 

   fclose(fp);
   res=-(-(250*(exp(0.6*x1 + x157 + x169) + exp(0.6*x2 + x158 + x170) + exp(0.6*
   x3 + x159 + x171) + exp(0.6*x4 + x160 + x172) + exp(0.6*x5 + x161 +
    x173) + exp(0.6*x6 + x162 + x174) + exp(0.6*x7 + x163 + x175) + exp(0.6
   *x8 + x164 + x176) + exp(0.6*x9 + x165 + x177) + exp(0.6*x10 + x166 +
    x178) + exp(0.6*x11 + x167 + x179) + exp(0.6*x12 + x168 + x180)) + 150*
   (exp(0.5*x182) + exp(0.5*x183) + exp(0.5*x184) + exp(0.5*x185) + exp(
   0.5*x186) + exp(0.5*x187) + exp(0.5*x188) + exp(0.5*x189) + exp(0.5*
   x190) + exp(0.5*x191) + exp(0.5*x192)))  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
