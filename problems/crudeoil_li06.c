#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_li06";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x193,x194,x195,x196,x197,x198,x199,x200,x201,x202,x203,x204,x205,x206,x207,x208,x209,x210,x211,x212,x213,x214,x215,x216,x217,x218,x219,x220,x221,x222,x223,x224,x225,x226,x227,x228,x229,x230,x231,x232,x233,x234,x235,x236,x237,x238,x239,x240,x241,x242,x243,x244,x245,x246,x247,x248,x249,x250,x251,x252,x253,x254,x255,x256,x257,x258,x259,x260,x261,x262,x263,x264,x265,x266,x267,x268,x269,x270,x271,x272,x273,x274,x275,x276,x277,x278,x279,x280,x281,x282,x283,x284,x285,x286,x287,x288,x289,x290,x291,x292,x293,x294,x295,x296,x297,x298,x299,x300,x301,x302,x303,x304,x305,x306,x307,x308,x309,x310,x311,x312,x313,x314,x315,x316,x317,x318,x319,x320,x321,x322,x323,x324,x325,x326,x327,x328,x329,x330,x331,x332,x333,x334,x335,x336,x860,x861,x862,x863,x864,x865,x962,x963,x964;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &x860); 
   fscanf(fp,"%f", &x861); 
   fscanf(fp,"%f", &x862); 
   fscanf(fp,"%f", &x863); 
   fscanf(fp,"%f", &x864); 
   fscanf(fp,"%f", &x865); 
   fscanf(fp,"%f", &x962); 
   fscanf(fp,"%f", &x963); 
   fscanf(fp,"%f", &x964); 

   fclose(fp);
   res=-(- 1.5*x193 - 1.5*x194 - 1.5*x195 - 1.5*x196 - 1.5*x197 - 1.5*x198
    - 1.5*x199 - 1.5*x200 - 1.5*x201 - 1.5*x202 - 1.5*x203 - 1.5*x204
    - 1.5*x205 - 1.5*x206 - 1.5*x207 - 1.5*x208 - 1.5*x209 - 1.5*x210
    - 1.5*x211 - 1.5*x212 - 1.5*x213 - 1.5*x214 - 1.5*x215 - 1.5*x216
    - 1.5*x217 - 1.5*x218 - 1.5*x219 - 1.5*x220 - 1.5*x221 - 1.5*x222
    - 1.5*x223 - 1.5*x224 - 1.5*x225 - 1.5*x226 - 1.5*x227 - 1.5*x228
    - 1.5*x229 - 1.5*x230 - 1.5*x231 - 1.5*x232 - 1.5*x233 - 1.5*x234
    - 1.5*x235 - 1.5*x236 - 1.5*x237 - 1.5*x238 - 1.5*x239 - 1.5*x240
    - 1.5*x241 - 1.5*x242 - 1.5*x243 - 1.5*x244 - 1.5*x245 - 1.5*x246
    - 1.5*x247 - 1.5*x248 - 1.5*x249 - 1.5*x250 - 1.5*x251 - 1.5*x252
    - 1.5*x253 - 1.5*x254 - 1.5*x255 - 1.5*x256 - 1.5*x257 - 1.5*x258
    - 1.5*x259 - 1.5*x260 - 1.5*x261 - 1.5*x262 - 1.5*x263 - 1.5*x264
    - 1.5*x265 - 1.5*x266 - 1.5*x267 - 1.5*x268 - 1.5*x269 - 1.5*x270
    - 1.5*x271 - 1.5*x272 - 1.5*x273 - 1.5*x274 - 1.5*x275 - 1.5*x276
    - 1.5*x277 - 1.5*x278 - 1.5*x279 - 1.5*x280 - 1.5*x281 - 1.5*x282
    - 1.5*x283 - 1.5*x284 - 1.5*x285 - 1.5*x286 - 1.5*x287 - 1.5*x288
    - 1.5*x289 - 1.5*x290 - 1.5*x291 - 1.5*x292 - 1.5*x293 - 1.5*x294
    - 1.5*x295 - 1.5*x296 - 1.5*x297 - 1.5*x298 - 1.5*x299 - 1.5*x300
    - 1.5*x301 - 1.5*x302 - 1.5*x303 - 1.5*x304 - 1.5*x305 - 1.5*x306
    - 1.5*x307 - 1.5*x308 - 1.5*x309 - 1.5*x310 - 1.5*x311 - 1.5*x312
    - 1.5*x313 - 1.5*x314 - 1.5*x315 - 1.5*x316 - 1.5*x317 - 1.5*x318
    - 1.5*x319 - 1.5*x320 - 1.5*x321 - 1.5*x322 - 1.5*x323 - 1.5*x324
    - 1.5*x325 - 1.5*x326 - 1.5*x327 - 1.5*x328 - 1.5*x329 - 1.5*x330
    - 1.5*x331 - 1.5*x332 - 1.5*x333 - 1.5*x334 - 1.5*x335 - 1.5*x336
    + 10*x860 + 10*x861 + 10*x862 + 10*x863 + 10*x864 + 10*x865 + 4*x962
    + x963 + x964  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
