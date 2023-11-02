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
   char *problemname="slay10m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x11,x2,x12,x3,x13,x4,x14,x5,x15,x6,x16,x7,x17,x8,x18,x9,x19,x10,x20,x201,x202,x203,x204,x205,x206,x207,x208,x209,x210,x211,x212,x213,x214,x215,x216,x217,x218,x219,x220,x221,x222,x223,x224,x225,x226,x227,x228,x229,x230,x231,x232,x233,x234,x235,x236,x237,x238,x239,x240,x241,x242,x243,x244,x245,x246,x247,x248,x249,x250,x251,x252,x253,x254,x255,x256,x257,x258,x259,x260,x261,x262,x263,x264,x265,x266,x267,x268,x269,x270,x271,x272,x273,x274,x275,x276,x277,x278,x279,x280,x281,x282,x283,x284,x285,x286,x287,x288,x289,x290;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x20); 
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
   fscanf(fp,"%f", &x235); 
   fscanf(fp,"%f", &x236); 
   fscanf(fp,"%f", &x237); 
   fscanf(fp,"%f", &x238); 
   fscanf(fp,"%f", &x239); 
   fscanf(fp,"%f", &x240); 
   fscanf(fp,"%f", &x241); 
   fscanf(fp,"%f", &x242); 
   fscanf(fp,"%f", &x243); 
   fscanf(fp,"%f", &x244); 
   fscanf(fp,"%f", &x245); 
   fscanf(fp,"%f", &x246); 
   fscanf(fp,"%f", &x247); 
   fscanf(fp,"%f", &x248); 
   fscanf(fp,"%f", &x249); 
   fscanf(fp,"%f", &x250); 
   fscanf(fp,"%f", &x251); 
   fscanf(fp,"%f", &x252); 
   fscanf(fp,"%f", &x253); 
   fscanf(fp,"%f", &x254); 
   fscanf(fp,"%f", &x255); 
   fscanf(fp,"%f", &x256); 
   fscanf(fp,"%f", &x257); 
   fscanf(fp,"%f", &x258); 
   fscanf(fp,"%f", &x259); 
   fscanf(fp,"%f", &x260); 
   fscanf(fp,"%f", &x261); 
   fscanf(fp,"%f", &x262); 
   fscanf(fp,"%f", &x263); 
   fscanf(fp,"%f", &x264); 
   fscanf(fp,"%f", &x265); 
   fscanf(fp,"%f", &x266); 
   fscanf(fp,"%f", &x267); 
   fscanf(fp,"%f", &x268); 
   fscanf(fp,"%f", &x269); 
   fscanf(fp,"%f", &x270); 
   fscanf(fp,"%f", &x271); 
   fscanf(fp,"%f", &x272); 
   fscanf(fp,"%f", &x273); 
   fscanf(fp,"%f", &x274); 
   fscanf(fp,"%f", &x275); 
   fscanf(fp,"%f", &x276); 
   fscanf(fp,"%f", &x277); 
   fscanf(fp,"%f", &x278); 
   fscanf(fp,"%f", &x279); 
   fscanf(fp,"%f", &x280); 
   fscanf(fp,"%f", &x281); 
   fscanf(fp,"%f", &x282); 
   fscanf(fp,"%f", &x283); 
   fscanf(fp,"%f", &x284); 
   fscanf(fp,"%f", &x285); 
   fscanf(fp,"%f", &x286); 
   fscanf(fp,"%f", &x287); 
   fscanf(fp,"%f", &x288); 
   fscanf(fp,"%f", &x289); 
   fscanf(fp,"%f", &x290); 

   fclose(fp);
   res=-(-(150*(sqr((-4) + x1) + sqr((-10) + x11)) + 390*(sqr((-10) + x2) + sqr((-
15) + x12)) + 240*(sqr((-7) + x3) + sqr((-9) + x13)) + 70*(sqr((-3) + x4)
 + sqr((-3) + x14)) + 165*(sqr((-20) + x5) + sqr((-17) + x15)) + 100*(sqr(
(-18) + x6) + sqr((-8) + x16)) + 200*(sqr((-30) + x7) + sqr((-20) + x17))
 + 400*(sqr((-24) + x8) + sqr((-10) + x18)) + 330*(sqr((-22) + x9) + sqr((
-6) + x19)) + 220*(sqr((-11) + x10) + sqr((-12) + x20))) - 300*x201
 - 240*x202 - 210*x203 - 140*x204 - 300*x205 - 250*x206 - 300*x207
 - 210*x208 - 320*x209 - 100*x210 - 150*x211 - 220*x212 - 200*x213
 - 300*x214 - 290*x215 - 400*x216 - 220*x217 - 120*x218 - 300*x219
 - 150*x220 - 150*x221 - 100*x222 - 290*x223 - 110*x224 - 100*x225
 - 120*x226 - 180*x227 - 220*x228 - 110*x229 - 100*x230 - 130*x231
 - 190*x232 - 110*x233 - 160*x234 - 400*x235 - 220*x236 - 140*x237
 - 120*x238 - 230*x239 - 260*x240 - 220*x241 - 310*x242 - 140*x243
 - 150*x244 - 130*x245 - 300*x246 - 240*x247 - 210*x248 - 140*x249
 - 300*x250 - 250*x251 - 300*x252 - 210*x253 - 320*x254 - 100*x255
 - 150*x256 - 220*x257 - 200*x258 - 300*x259 - 290*x260 - 400*x261
 - 220*x262 - 120*x263 - 300*x264 - 150*x265 - 150*x266 - 100*x267
 - 290*x268 - 110*x269 - 100*x270 - 120*x271 - 180*x272 - 220*x273
 - 110*x274 - 100*x275 - 130*x276 - 190*x277 - 110*x278 - 160*x279
 - 400*x280 - 220*x281 - 140*x282 - 120*x283 - 230*x284 - 260*x285
 - 220*x286 - 310*x287 - 140*x288 - 150*x289 - 130*x290  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
