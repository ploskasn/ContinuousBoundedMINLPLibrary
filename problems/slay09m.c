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
   char *problemname="slay09m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x10,x2,x11,x3,x12,x4,x13,x5,x14,x6,x15,x7,x16,x8,x17,x9,x18,x163,x164,x165,x166,x167,x168,x169,x170,x171,x172,x173,x174,x175,x176,x177,x178,x179,x180,x181,x182,x183,x184,x185,x186,x187,x188,x189,x190,x191,x192,x193,x194,x195,x196,x197,x198,x199,x200,x201,x202,x203,x204,x205,x206,x207,x208,x209,x210,x211,x212,x213,x214,x215,x216,x217,x218,x219,x220,x221,x222,x223,x224,x225,x226,x227,x228,x229,x230,x231,x232,x233,x234;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x18); 
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
   fscanf(fp,"%f", &x185); 
   fscanf(fp,"%f", &x186); 
   fscanf(fp,"%f", &x187); 
   fscanf(fp,"%f", &x188); 
   fscanf(fp,"%f", &x189); 
   fscanf(fp,"%f", &x190); 
   fscanf(fp,"%f", &x191); 
   fscanf(fp,"%f", &x192); 
   fscanf(fp,"%f", &x193); 
   fscanf(fp,"%f", &x194); 
   fscanf(fp,"%f", &x195); 
   fscanf(fp,"%f", &x196); 
   fscanf(fp,"%f", &x197); 
   fscanf(fp,"%f", &x198); 
   fscanf(fp,"%f", &x199); 
   fscanf(fp,"%f", &x200); 
   fscanf(fp,"%f", &x201); 
   fscanf(fp,"%f", &x202); 
   fscanf(fp,"%f", &x203); 
   fscanf(fp,"%f", &x204); 
   fscanf(fp,"%f", &x205); 
   fscanf(fp,"%f", &x206); 
   fscanf(fp,"%f", &x207); 
   fscanf(fp,"%f", &x208); 
   fscanf(fp,"%f", &x209); 
   fscanf(fp,"%f", &x210); 
   fscanf(fp,"%f", &x211); 
   fscanf(fp,"%f", &x212); 
   fscanf(fp,"%f", &x213); 
   fscanf(fp,"%f", &x214); 
   fscanf(fp,"%f", &x215); 
   fscanf(fp,"%f", &x216); 
   fscanf(fp,"%f", &x217); 
   fscanf(fp,"%f", &x218); 
   fscanf(fp,"%f", &x219); 
   fscanf(fp,"%f", &x220); 
   fscanf(fp,"%f", &x221); 
   fscanf(fp,"%f", &x222); 
   fscanf(fp,"%f", &x223); 
   fscanf(fp,"%f", &x224); 
   fscanf(fp,"%f", &x225); 
   fscanf(fp,"%f", &x226); 
   fscanf(fp,"%f", &x227); 
   fscanf(fp,"%f", &x228); 
   fscanf(fp,"%f", &x229); 
   fscanf(fp,"%f", &x230); 
   fscanf(fp,"%f", &x231); 
   fscanf(fp,"%f", &x232); 
   fscanf(fp,"%f", &x233); 
   fscanf(fp,"%f", &x234); 

   fclose(fp);
   res=-(-(150*(sqr((-4) + x1) + sqr((-10) + x10)) + 390*(sqr((-10) + x2) + sqr((-
15) + x11)) + 240*(sqr((-7) + x3) + sqr((-9) + x12)) + 70*(sqr((-3) + x4)
 + sqr((-3) + x13)) + 165*(sqr((-20) + x5) + sqr((-17) + x14)) + 100*(sqr(
(-18) + x6) + sqr((-8) + x15)) + 200*(sqr((-30) + x7) + sqr((-20) + x16))
 + 400*(sqr((-24) + x8) + sqr((-10) + x17)) + 330*(sqr((-22) + x9) + sqr((
-6) + x18))) - 300*x163 - 240*x164 - 210*x165 - 140*x166 - 300*x167
 - 250*x168 - 300*x169 - 210*x170 - 100*x171 - 150*x172 - 220*x173
 - 200*x174 - 300*x175 - 290*x176 - 400*x177 - 120*x178 - 300*x179
 - 150*x180 - 150*x181 - 100*x182 - 290*x183 - 100*x184 - 120*x185
 - 180*x186 - 220*x187 - 110*x188 - 130*x189 - 190*x190 - 110*x191
 - 160*x192 - 220*x193 - 140*x194 - 120*x195 - 260*x196 - 220*x197
 - 140*x198 - 300*x199 - 240*x200 - 210*x201 - 140*x202 - 300*x203
 - 250*x204 - 300*x205 - 210*x206 - 100*x207 - 150*x208 - 220*x209
 - 200*x210 - 300*x211 - 290*x212 - 400*x213 - 120*x214 - 300*x215
 - 150*x216 - 150*x217 - 100*x218 - 290*x219 - 100*x220 - 120*x221
 - 180*x222 - 220*x223 - 110*x224 - 130*x225 - 190*x226 - 110*x227
 - 160*x228 - 220*x229 - 140*x230 - 120*x231 - 260*x232 - 220*x233
 - 140*x234  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
