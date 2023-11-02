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
   char *problemname="slay07m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x8,x2,x9,x3,x10,x4,x11,x5,x12,x6,x13,x7,x14,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,x122,x123,x124,x125,x126,x127,x128,x129,x130,x131,x132,x133,x134,x135,x136,x137,x138,x139,x140;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x99); 
   fscanf(fp,"%f", &x100); 
   fscanf(fp,"%f", &x101); 
   fscanf(fp,"%f", &x102); 
   fscanf(fp,"%f", &x103); 
   fscanf(fp,"%f", &x104); 
   fscanf(fp,"%f", &x105); 
   fscanf(fp,"%f", &x106); 
   fscanf(fp,"%f", &x107); 
   fscanf(fp,"%f", &x108); 
   fscanf(fp,"%f", &x109); 
   fscanf(fp,"%f", &x110); 
   fscanf(fp,"%f", &x111); 
   fscanf(fp,"%f", &x112); 
   fscanf(fp,"%f", &x113); 
   fscanf(fp,"%f", &x114); 
   fscanf(fp,"%f", &x115); 
   fscanf(fp,"%f", &x116); 
   fscanf(fp,"%f", &x117); 
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
   fscanf(fp,"%f", &x131); 
   fscanf(fp,"%f", &x132); 
   fscanf(fp,"%f", &x133); 
   fscanf(fp,"%f", &x134); 
   fscanf(fp,"%f", &x135); 
   fscanf(fp,"%f", &x136); 
   fscanf(fp,"%f", &x137); 
   fscanf(fp,"%f", &x138); 
   fscanf(fp,"%f", &x139); 
   fscanf(fp,"%f", &x140); 

   fclose(fp);
   res=-(-(150*(sqr((-4) + x1) + sqr((-10) + x8)) + 390*(sqr((-10) + x2) + sqr((-15
) + x9)) + 240*(sqr((-7) + x3) + sqr((-9) + x10)) + 70*(sqr((-3) + x4) +
 sqr((-3) + x11)) + 165*(sqr((-20) + x5) + sqr((-17) + x12)) + 100*(sqr((-
18) + x6) + sqr((-8) + x13)) + 200*(sqr((-30) + x7) + sqr((-20) + x14)))
 - 300*x99 - 240*x100 - 210*x101 - 140*x102 - 300*x103 - 250*x104
 - 100*x105 - 150*x106 - 220*x107 - 200*x108 - 300*x109 - 120*x110
 - 300*x111 - 150*x112 - 150*x113 - 100*x114 - 120*x115 - 180*x116
 - 130*x117 - 190*x118 - 220*x119 - 300*x120 - 240*x121 - 210*x122
 - 140*x123 - 300*x124 - 250*x125 - 100*x126 - 150*x127 - 220*x128
 - 200*x129 - 300*x130 - 120*x131 - 300*x132 - 150*x133 - 150*x134
 - 100*x135 - 120*x136 - 180*x137 - 130*x138 - 190*x139 - 220*x140
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
