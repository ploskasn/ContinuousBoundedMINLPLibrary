#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="p_ball_20b_5p_2d_h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x103,x106,x108,x110,x112,x114,x116,x118,x119,x120,x121,x122,x123,x124,x125,x126,x127,x128,x129,x130;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x103); 
   fscanf(fp,"%f", &x106); 
   fscanf(fp,"%f", &x108); 
   fscanf(fp,"%f", &x110); 
   fscanf(fp,"%f", &x112); 
   fscanf(fp,"%f", &x114); 
   fscanf(fp,"%f", &x116); 
   fscanf(fp,"%f", &x118); 
   fscanf(fp,"%f", &x119); 
   fscanf(fp,"%f", &x120); 
   fscanf(fp,"%f", &x121); 
   fscanf(fp,"%f", &x122); 
   fscanf(fp,"%f", &x123); 
   fscanf(fp,"%f", &x124); 
   fscanf(fp,"%f", &x125); 
   fscanf(fp,"%f", &x126); 
   fscanf(fp,"%f", &x127); 
   fscanf(fp,"%f", &x128); 
   fscanf(fp,"%f", &x129); 
   fscanf(fp,"%f", &x130); 

   fclose(fp);
   res=-(- x103 - x106 - x108 - x110 - x112 - x114 - x116 - x118 - x119 - x120
   - x121 - x122 - x123 - x124 - x125 - x126 - x127 - x128 - x129 - x130
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
