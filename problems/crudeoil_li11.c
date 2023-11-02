#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_li11";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x253,x254,x255,x256,x257,x258,x259,x260,x261,x262,x263,x264,x265,x266,x267,x268,x269,x270,x271,x272,x273,x274,x275,x276,x277,x278,x279,x280,x281,x282,x283,x284,x285,x286,x287,x288,x289,x290,x291,x292,x293,x294,x295,x296,x297,x298,x299,x300,x301,x302,x303,x304,x305,x306,x307,x308,x309,x310,x311,x312,x313,x314,x315,x316,x317,x318,x319,x320,x321,x322,x323,x324,x325,x326,x327,x328,x329,x330,x331,x332,x333,x334,x335,x336,x337,x338,x339,x340,x341,x342,x343,x344,x345,x346,x347,x348,x349,x350,x351,x352,x353,x354,x355,x356,x357,x358,x359,x360,x361,x362,x363,x364,x365,x366,x367,x368,x369,x370,x371,x372,x373,x374,x375,x376,x377,x378,x379,x380,x381,x382,x383,x384,x385,x386,x387,x388,x389,x390,x391,x392,x393,x394,x395,x396,x1072,x1073,x1074,x1075,x1076,x1077,x1174,x1175,x1176,x1177;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &x337); 
   fscanf(fp,"%f", &x338); 
   fscanf(fp,"%f", &x339); 
   fscanf(fp,"%f", &x340); 
   fscanf(fp,"%f", &x341); 
   fscanf(fp,"%f", &x342); 
   fscanf(fp,"%f", &x343); 
   fscanf(fp,"%f", &x344); 
   fscanf(fp,"%f", &x345); 
   fscanf(fp,"%f", &x346); 
   fscanf(fp,"%f", &x347); 
   fscanf(fp,"%f", &x348); 
   fscanf(fp,"%f", &x349); 
   fscanf(fp,"%f", &x350); 
   fscanf(fp,"%f", &x351); 
   fscanf(fp,"%f", &x352); 
   fscanf(fp,"%f", &x353); 
   fscanf(fp,"%f", &x354); 
   fscanf(fp,"%f", &x355); 
   fscanf(fp,"%f", &x356); 
   fscanf(fp,"%f", &x357); 
   fscanf(fp,"%f", &x358); 
   fscanf(fp,"%f", &x359); 
   fscanf(fp,"%f", &x360); 
   fscanf(fp,"%f", &x361); 
   fscanf(fp,"%f", &x362); 
   fscanf(fp,"%f", &x363); 
   fscanf(fp,"%f", &x364); 
   fscanf(fp,"%f", &x365); 
   fscanf(fp,"%f", &x366); 
   fscanf(fp,"%f", &x367); 
   fscanf(fp,"%f", &x368); 
   fscanf(fp,"%f", &x369); 
   fscanf(fp,"%f", &x370); 
   fscanf(fp,"%f", &x371); 
   fscanf(fp,"%f", &x372); 
   fscanf(fp,"%f", &x373); 
   fscanf(fp,"%f", &x374); 
   fscanf(fp,"%f", &x375); 
   fscanf(fp,"%f", &x376); 
   fscanf(fp,"%f", &x377); 
   fscanf(fp,"%f", &x378); 
   fscanf(fp,"%f", &x379); 
   fscanf(fp,"%f", &x380); 
   fscanf(fp,"%f", &x381); 
   fscanf(fp,"%f", &x382); 
   fscanf(fp,"%f", &x383); 
   fscanf(fp,"%f", &x384); 
   fscanf(fp,"%f", &x385); 
   fscanf(fp,"%f", &x386); 
   fscanf(fp,"%f", &x387); 
   fscanf(fp,"%f", &x388); 
   fscanf(fp,"%f", &x389); 
   fscanf(fp,"%f", &x390); 
   fscanf(fp,"%f", &x391); 
   fscanf(fp,"%f", &x392); 
   fscanf(fp,"%f", &x393); 
   fscanf(fp,"%f", &x394); 
   fscanf(fp,"%f", &x395); 
   fscanf(fp,"%f", &x396); 
   fscanf(fp,"%f", &x1072); 
   fscanf(fp,"%f", &x1073); 
   fscanf(fp,"%f", &x1074); 
   fscanf(fp,"%f", &x1075); 
   fscanf(fp,"%f", &x1076); 
   fscanf(fp,"%f", &x1077); 
   fscanf(fp,"%f", &x1174); 
   fscanf(fp,"%f", &x1175); 
   fscanf(fp,"%f", &x1176); 
   fscanf(fp,"%f", &x1177); 

   fclose(fp);
   res=-(- 1.5*x253 - 1.5*x254 - 1.5*x255 - 1.7*x256 - 1.7*x257 - 1.7*x258
    - 1.5*x259 - 1.5*x260 - 1.5*x261 - 1.6*x262 - 1.6*x263 - 1.6*x264
    - 1.45*x265 - 1.45*x266 - 1.45*x267 - 1.6*x268 - 1.6*x269 - 1.6*x270
    - 1.55*x271 - 1.55*x272 - 1.55*x273 - 1.6*x274 - 1.6*x275 - 1.6*x276
    - 1.45*x277 - 1.45*x278 - 1.45*x279 - 1.6*x280 - 1.6*x281 - 1.6*x282
    - 1.55*x283 - 1.55*x284 - 1.55*x285 - 1.6*x286 - 1.6*x287 - 1.6*x288
    - 1.45*x289 - 1.45*x290 - 1.45*x291 - 1.6*x292 - 1.6*x293 - 1.6*x294
    - 1.55*x295 - 1.55*x296 - 1.55*x297 - 1.6*x298 - 1.6*x299 - 1.6*x300
    - 1.45*x301 - 1.45*x302 - 1.45*x303 - 1.6*x304 - 1.6*x305 - 1.6*x306
    - 1.55*x307 - 1.55*x308 - 1.55*x309 - 1.6*x310 - 1.6*x311 - 1.6*x312
    - 1.45*x313 - 1.45*x314 - 1.45*x315 - 1.6*x316 - 1.6*x317 - 1.6*x318
    - 1.55*x319 - 1.55*x320 - 1.55*x321 - 1.6*x322 - 1.6*x323 - 1.6*x324
    - 1.45*x325 - 1.45*x326 - 1.45*x327 - 1.6*x328 - 1.6*x329 - 1.6*x330
    - 1.55*x331 - 1.55*x332 - 1.55*x333 - 1.6*x334 - 1.6*x335 - 1.6*x336
    - 1.45*x337 - 1.45*x338 - 1.45*x339 - 1.6*x340 - 1.6*x341 - 1.6*x342
    - 1.55*x343 - 1.55*x344 - 1.55*x345 - 1.6*x346 - 1.6*x347 - 1.6*x348
    - 1.45*x349 - 1.45*x350 - 1.45*x351 - 1.6*x352 - 1.6*x353 - 1.6*x354
    - 1.55*x355 - 1.55*x356 - 1.55*x357 - 1.6*x358 - 1.6*x359 - 1.6*x360
    - 1.5*x361 - 1.5*x362 - 1.5*x363 - 1.7*x364 - 1.7*x365 - 1.7*x366
    - 1.5*x367 - 1.5*x368 - 1.5*x369 - 1.6*x370 - 1.6*x371 - 1.6*x372
    - 1.5*x373 - 1.5*x374 - 1.5*x375 - 1.7*x376 - 1.7*x377 - 1.7*x378
    - 1.5*x379 - 1.5*x380 - 1.5*x381 - 1.6*x382 - 1.6*x383 - 1.6*x384
    - 1.5*x385 - 1.5*x386 - 1.5*x387 - 1.7*x388 - 1.7*x389 - 1.7*x390
    - 1.5*x391 - 1.5*x392 - 1.5*x393 - 1.6*x394 - 1.6*x395 - 1.6*x396
    + 10*x1072 + 10*x1073 + 10*x1074 + 10*x1075 + 10*x1076 + 10*x1077
    + 0.84*x1174 + x1175 + x1176 + x1177  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
