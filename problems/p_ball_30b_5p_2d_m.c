#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="p_ball_30b_5p_2d_m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x153,x156,x158,x160,x162,x164,x166,x168,x169,x170,x171,x172,x173,x174,x175,x176,x177,x178,x179,x180;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x153); 
   fscanf(fp,"%f", &x156); 
   fscanf(fp,"%f", &x158); 
   fscanf(fp,"%f", &x160); 
   fscanf(fp,"%f", &x162); 
   fscanf(fp,"%f", &x164); 
   fscanf(fp,"%f", &x166); 
   fscanf(fp,"%f", &x168); 
   fscanf(fp,"%f", &x169); 
   fscanf(fp,"%f", &x170); 
   fscanf(fp,"%f", &x171); 
   fscanf(fp,"%f", &x172); 
   fscanf(fp,"%f", &x173); 
   fscanf(fp,"%f", &x174); 
   fscanf(fp,"%f", &x175); 
   fscanf(fp,"%f", &x176); 
   fscanf(fp,"%f", &x177); 
   fscanf(fp,"%f", &x178); 
   fscanf(fp,"%f", &x179); 
   fscanf(fp,"%f", &x180); 

   fclose(fp);
   res=-(- x153 - x156 - x158 - x160 - x162 - x164 - x166 - x168 - x169 - x170
   - x171 - x172 - x173 - x174 - x175 - x176 - x177 - x178 - x179 - x180
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
