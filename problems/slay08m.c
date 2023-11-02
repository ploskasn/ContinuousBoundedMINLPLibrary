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
   char *problemname="slay08m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x9,x2,x10,x3,x11,x4,x12,x5,x13,x6,x14,x7,x15,x8,x16,x129,x130,x131,x132,x133,x134,x135,x136,x137,x138,x139,x140,x141,x142,x143,x144,x145,x146,x147,x148,x149,x150,x151,x152,x153,x154,x155,x156,x157,x158,x159,x160,x161,x162,x163,x164,x165,x166,x167,x168,x169,x170,x171,x172,x173,x174,x175,x176,x177,x178,x179,x180,x181,x182,x183,x184;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x16); 
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
   fscanf(fp,"%f", &x141); 
   fscanf(fp,"%f", &x142); 
   fscanf(fp,"%f", &x143); 
   fscanf(fp,"%f", &x144); 
   fscanf(fp,"%f", &x145); 
   fscanf(fp,"%f", &x146); 
   fscanf(fp,"%f", &x147); 
   fscanf(fp,"%f", &x148); 
   fscanf(fp,"%f", &x149); 
   fscanf(fp,"%f", &x150); 
   fscanf(fp,"%f", &x151); 
   fscanf(fp,"%f", &x152); 
   fscanf(fp,"%f", &x153); 
   fscanf(fp,"%f", &x154); 
   fscanf(fp,"%f", &x155); 
   fscanf(fp,"%f", &x156); 
   fscanf(fp,"%f", &x157); 
   fscanf(fp,"%f", &x158); 
   fscanf(fp,"%f", &x159); 
   fscanf(fp,"%f", &x160); 
   fscanf(fp,"%f", &x161); 
   fscanf(fp,"%f", &x162); 
   fscanf(fp,"%f", &x163); 
   fscanf(fp,"%f", &x164); 
   fscanf(fp,"%f", &x165); 
   fscanf(fp,"%f", &x166); 
   fscanf(fp,"%f", &x167); 
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
   fscanf(fp,"%f", &x181); 
   fscanf(fp,"%f", &x182); 
   fscanf(fp,"%f", &x183); 
   fscanf(fp,"%f", &x184); 

   fclose(fp);
   res=-(-(150*(sqr((-4) + x1) + sqr((-10) + x9)) + 390*(sqr((-10) + x2) + sqr((-15
) + x10)) + 240*(sqr((-7) + x3) + sqr((-9) + x11)) + 70*(sqr((-3) + x4) +
 sqr((-3) + x12)) + 165*(sqr((-20) + x5) + sqr((-17) + x13)) + 100*(sqr((-
18) + x6) + sqr((-8) + x14)) + 200*(sqr((-30) + x7) + sqr((-20) + x15)) +
 400*(sqr((-24) + x8) + sqr((-10) + x16))) - 300*x129 - 240*x130 - 210*x131
 - 140*x132 - 300*x133 - 250*x134 - 300*x135 - 100*x136 - 150*x137
 - 220*x138 - 200*x139 - 300*x140 - 290*x141 - 120*x142 - 300*x143
 - 150*x144 - 150*x145 - 100*x146 - 100*x147 - 120*x148 - 180*x149
 - 220*x150 - 130*x151 - 190*x152 - 110*x153 - 220*x154 - 140*x155
 - 260*x156 - 300*x157 - 240*x158 - 210*x159 - 140*x160 - 300*x161
 - 250*x162 - 300*x163 - 100*x164 - 150*x165 - 220*x166 - 200*x167
 - 300*x168 - 290*x169 - 120*x170 - 300*x171 - 150*x172 - 150*x173
 - 100*x174 - 100*x175 - 120*x176 - 180*x177 - 220*x178 - 130*x179
 - 190*x180 - 110*x181 - 220*x182 - 140*x183 - 260*x184  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
