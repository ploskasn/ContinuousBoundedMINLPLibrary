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
   char *problemname="slay06m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x7,x2,x8,x3,x9,x4,x10,x5,x11,x6,x12,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102;
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
   fscanf(fp,"%f", &x73); 
   fscanf(fp,"%f", &x74); 
   fscanf(fp,"%f", &x75); 
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &x77); 
   fscanf(fp,"%f", &x78); 
   fscanf(fp,"%f", &x79); 
   fscanf(fp,"%f", &x80); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x90); 
   fscanf(fp,"%f", &x91); 
   fscanf(fp,"%f", &x92); 
   fscanf(fp,"%f", &x93); 
   fscanf(fp,"%f", &x94); 
   fscanf(fp,"%f", &x95); 
   fscanf(fp,"%f", &x96); 
   fscanf(fp,"%f", &x97); 
   fscanf(fp,"%f", &x98); 
   fscanf(fp,"%f", &x99); 
   fscanf(fp,"%f", &x100); 
   fscanf(fp,"%f", &x101); 
   fscanf(fp,"%f", &x102); 

   fclose(fp);
   res=-(-(150*(sqr((-4) + x1) + sqr((-10) + x7)) + 390*(sqr((-10) + x2) + sqr((-15
) + x8)) + 240*(sqr((-7) + x3) + sqr((-9) + x9)) + 70*(sqr((-3) + x4) +
 sqr((-3) + x10)) + 165*(sqr((-20) + x5) + sqr((-17) + x11)) + 100*(sqr((-
18) + x6) + sqr((-8) + x12))) - 300*x73 - 240*x74 - 210*x75 - 140*x76
 - 300*x77 - 100*x78 - 150*x79 - 220*x80 - 200*x81 - 120*x82 - 300*x83
 - 150*x84 - 100*x85 - 120*x86 - 130*x87 - 300*x88 - 240*x89 - 210*x90
 - 140*x91 - 300*x92 - 100*x93 - 150*x94 - 220*x95 - 200*x96 - 120*x97
 - 300*x98 - 150*x99 - 100*x100 - 120*x101 - 130*x102  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
