#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_li05";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x169,x170,x171,x172,x173,x174,x175,x176,x177,x178,x179,x180,x181,x182,x183,x184,x185,x186,x187,x188,x189,x190,x191,x192,x193,x194,x195,x196,x197,x198,x199,x200,x201,x202,x203,x204,x205,x206,x207,x208,x209,x210,x211,x212,x213,x214,x215,x216,x217,x218,x219,x220,x221,x222,x223,x224,x225,x226,x227,x228,x229,x230,x231,x232,x233,x234,x235,x236,x237,x238,x239,x240,x241,x242,x243,x244,x245,x246,x247,x248,x249,x250,x251,x252,x253,x254,x255,x256,x257,x258,x259,x260,x261,x262,x263,x264,x265,x266,x267,x268,x269,x270,x271,x272,x273,x274,x275,x276,x277,x278,x279,x280,x281,x282,x283,x284,x285,x286,x287,x288,x289,x290,x291,x292,x293,x294,x295,x296,x297,x298,x299,x300,x301,x302,x303,x304,x305,x306,x307,x308,x309,x310,x311,x312,x836,x837,x838,x839,x840,x841,x938,x939,x940;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &x291); 
   fscanf(fp,"%f", &x292); 
   fscanf(fp,"%f", &x293); 
   fscanf(fp,"%f", &x294); 
   fscanf(fp,"%f", &x295); 
   fscanf(fp,"%f", &x296); 
   fscanf(fp,"%f", &x297); 
   fscanf(fp,"%f", &x298); 
   fscanf(fp,"%f", &x299); 
   fscanf(fp,"%f", &x300); 
   fscanf(fp,"%f", &x301); 
   fscanf(fp,"%f", &x302); 
   fscanf(fp,"%f", &x303); 
   fscanf(fp,"%f", &x304); 
   fscanf(fp,"%f", &x305); 
   fscanf(fp,"%f", &x306); 
   fscanf(fp,"%f", &x307); 
   fscanf(fp,"%f", &x308); 
   fscanf(fp,"%f", &x309); 
   fscanf(fp,"%f", &x310); 
   fscanf(fp,"%f", &x311); 
   fscanf(fp,"%f", &x312); 
   fscanf(fp,"%f", &x836); 
   fscanf(fp,"%f", &x837); 
   fscanf(fp,"%f", &x838); 
   fscanf(fp,"%f", &x839); 
   fscanf(fp,"%f", &x840); 
   fscanf(fp,"%f", &x841); 
   fscanf(fp,"%f", &x938); 
   fscanf(fp,"%f", &x939); 
   fscanf(fp,"%f", &x940); 

   fclose(fp);
   res=-(- 1.5*x169 - 1.5*x170 - 1.5*x171 - 1.7*x172 - 1.7*x173 - 1.7*x174
    - 1.5*x175 - 1.5*x176 - 1.5*x177 - 1.6*x178 - 1.6*x179 - 1.6*x180
    - 1.45*x181 - 1.45*x182 - 1.45*x183 - 1.6*x184 - 1.6*x185 - 1.6*x186
    - 1.55*x187 - 1.55*x188 - 1.55*x189 - 0.5*x190 - 0.5*x191 - 0.5*x192
    - 1.45*x193 - 1.45*x194 - 1.45*x195 - 1.6*x196 - 1.6*x197 - 1.6*x198
    - 1.55*x199 - 1.55*x200 - 1.55*x201 - 0.5*x202 - 0.5*x203 - 0.5*x204
    - 1.45*x205 - 1.45*x206 - 1.45*x207 - 1.6*x208 - 1.6*x209 - 1.6*x210
    - 1.55*x211 - 1.55*x212 - 1.55*x213 - 0.5*x214 - 0.5*x215 - 0.5*x216
    - 1.45*x217 - 1.45*x218 - 1.45*x219 - 1.6*x220 - 1.6*x221 - 1.6*x222
    - 1.55*x223 - 1.55*x224 - 1.55*x225 - 0.5*x226 - 0.5*x227 - 0.5*x228
    - 1.45*x229 - 1.45*x230 - 1.45*x231 - 1.6*x232 - 1.6*x233 - 1.6*x234
    - 1.55*x235 - 1.55*x236 - 1.55*x237 - 0.5*x238 - 0.5*x239 - 0.5*x240
    - 1.45*x241 - 1.45*x242 - 1.45*x243 - 1.6*x244 - 1.6*x245 - 1.6*x246
    - 1.55*x247 - 1.55*x248 - 1.55*x249 - 0.5*x250 - 0.5*x251 - 0.5*x252
    - 1.45*x253 - 1.45*x254 - 1.45*x255 - 1.6*x256 - 1.6*x257 - 1.6*x258
    - 1.55*x259 - 1.55*x260 - 1.55*x261 - 0.5*x262 - 0.5*x263 - 0.5*x264
    - 1.45*x265 - 1.45*x266 - 1.45*x267 - 1.6*x268 - 1.6*x269 - 1.6*x270
    - 1.55*x271 - 1.55*x272 - 1.55*x273 - 0.5*x274 - 0.5*x275 - 0.5*x276
    - 1.5*x277 - 1.5*x278 - 1.5*x279 - 1.7*x280 - 1.7*x281 - 1.7*x282
    - 1.5*x283 - 1.5*x284 - 1.5*x285 - 1.6*x286 - 1.6*x287 - 1.6*x288
    - 1.5*x289 - 1.5*x290 - 1.5*x291 - 1.7*x292 - 1.7*x293 - 1.7*x294
    - 1.5*x295 - 1.5*x296 - 1.5*x297 - 1.6*x298 - 1.6*x299 - 1.6*x300
    - 1.5*x301 - 1.5*x302 - 1.5*x303 - 1.7*x304 - 1.7*x305 - 1.7*x306
    - 1.5*x307 - 1.5*x308 - 1.5*x309 - 1.6*x310 - 1.6*x311 - 1.6*x312
    + 10*x836 + 10*x837 + 10*x838 + 10*x839 + 10*x840 + 10*x841 + 4*x938
    + x939 + x940  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
