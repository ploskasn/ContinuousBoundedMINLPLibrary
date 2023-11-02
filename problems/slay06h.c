#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  

float sqr(float b)
{
   float z;
   z = b*b;
   return(z);
}

int main(int argc, char** argv) { 
   char *problemname="slay06h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x7,x2,x8,x3,x9,x4,x10,x5,x11,x6,x12,x313,x314,x315,x316,x317,x318,x319,x320,x321,x322,x323,x324,x325,x326,x327,x328,x329,x330,x331,x332,x333,x334,x335,x336,x337,x338,x339,x340,x341,x342;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x313); 
   fscanf(fp,"%f", &x314); 
   fscanf(fp,"%f", &x315); 
   fscanf(fp,"%f", &x316); 
   fscanf(fp,"%f", &x317); 
   fscanf(fp,"%f", &x318); 
   fscanf(fp,"%f", &x319); 
   fscanf(fp,"%f", &x320); 
   fscanf(fp,"%f", &x321); 
   fscanf(fp,"%f", &x322); 
   fscanf(fp,"%f", &x323); 
   fscanf(fp,"%f", &x324); 
   fscanf(fp,"%f", &x325); 
   fscanf(fp,"%f", &x326); 
   fscanf(fp,"%f", &x327); 
   fscanf(fp,"%f", &x328); 
   fscanf(fp,"%f", &x329); 
   fscanf(fp,"%f", &x330); 
   fscanf(fp,"%f", &x331); 
   fscanf(fp,"%f", &x332); 
   fscanf(fp,"%f", &x333); 
   fscanf(fp,"%f", &x334); 
   fscanf(fp,"%f", &x335); 
   fscanf(fp,"%f", &x336); 
   fscanf(fp,"%f", &x337); 
   fscanf(fp,"%f", &x338); 
   fscanf(fp,"%f", &x339); 
   fscanf(fp,"%f", &x340); 
   fscanf(fp,"%f", &x341); 
   fscanf(fp,"%f", &x342); 

   fclose(fp);
   res=-(-(150*(sqr((-4) + x1) + sqr((-10) + x7)) + 390*(sqr((-10) + x2) + sqr((-15
) + x8)) + 240*(sqr((-7) + x3) + sqr((-9) + x9)) + 70*(sqr((-3) + x4) +
 sqr((-3) + x10)) + 165*(sqr((-20) + x5) + sqr((-17) + x11)) + 100*(sqr((-
18) + x6) + sqr((-8) + x12))) - 300*x313 - 240*x314 - 210*x315 - 140*x316
 - 300*x317 - 100*x318 - 150*x319 - 220*x320 - 200*x321 - 120*x322
 - 300*x323 - 150*x324 - 100*x325 - 120*x326 - 130*x327 - 300*x328
 - 240*x329 - 210*x330 - 140*x331 - 300*x332 - 100*x333 - 150*x334
 - 220*x335 - 200*x336 - 120*x337 - 300*x338 - 150*x339 - 100*x340
 - 120*x341 - 130*x342  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
