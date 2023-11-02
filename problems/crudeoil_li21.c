#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_li21";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x298,x299,x300,x301,x302,x303,x304,x305,x306,x307,x308,x309,x310,x311,x312,x313,x314,x315,x316,x317,x318,x319,x320,x321,x322,x323,x324,x325,x326,x327,x328,x329,x330,x331,x332,x333,x334,x335,x336,x337,x338,x339,x340,x341,x342,x343,x344,x345,x346,x347,x348,x349,x350,x351,x352,x353,x354,x355,x356,x357,x358,x359,x360,x361,x362,x363,x364,x365,x366,x367,x368,x369,x370,x371,x372,x373,x374,x375,x376,x377,x378,x379,x380,x381,x382,x383,x384,x385,x386,x387,x388,x389,x390,x391,x392,x393,x394,x395,x396,x397,x398,x399,x400,x401,x402,x403,x404,x405,x406,x407,x408,x409,x410,x411,x412,x413,x414,x415,x416,x417,x418,x419,x420,x421,x422,x423,x424,x425,x426,x427,x428,x429,x430,x431,x432,x433,x434,x435,x436,x437,x438,x439,x440,x441,x1237,x1238,x1239,x1240,x1241,x1242,x1339,x1340,x1341,x1342,x1343,x1344,x1345,x1346,x1347,x1348;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &x397); 
   fscanf(fp,"%f", &x398); 
   fscanf(fp,"%f", &x399); 
   fscanf(fp,"%f", &x400); 
   fscanf(fp,"%f", &x401); 
   fscanf(fp,"%f", &x402); 
   fscanf(fp,"%f", &x403); 
   fscanf(fp,"%f", &x404); 
   fscanf(fp,"%f", &x405); 
   fscanf(fp,"%f", &x406); 
   fscanf(fp,"%f", &x407); 
   fscanf(fp,"%f", &x408); 
   fscanf(fp,"%f", &x409); 
   fscanf(fp,"%f", &x410); 
   fscanf(fp,"%f", &x411); 
   fscanf(fp,"%f", &x412); 
   fscanf(fp,"%f", &x413); 
   fscanf(fp,"%f", &x414); 
   fscanf(fp,"%f", &x415); 
   fscanf(fp,"%f", &x416); 
   fscanf(fp,"%f", &x417); 
   fscanf(fp,"%f", &x418); 
   fscanf(fp,"%f", &x419); 
   fscanf(fp,"%f", &x420); 
   fscanf(fp,"%f", &x421); 
   fscanf(fp,"%f", &x422); 
   fscanf(fp,"%f", &x423); 
   fscanf(fp,"%f", &x424); 
   fscanf(fp,"%f", &x425); 
   fscanf(fp,"%f", &x426); 
   fscanf(fp,"%f", &x427); 
   fscanf(fp,"%f", &x428); 
   fscanf(fp,"%f", &x429); 
   fscanf(fp,"%f", &x430); 
   fscanf(fp,"%f", &x431); 
   fscanf(fp,"%f", &x432); 
   fscanf(fp,"%f", &x433); 
   fscanf(fp,"%f", &x434); 
   fscanf(fp,"%f", &x435); 
   fscanf(fp,"%f", &x436); 
   fscanf(fp,"%f", &x437); 
   fscanf(fp,"%f", &x438); 
   fscanf(fp,"%f", &x439); 
   fscanf(fp,"%f", &x440); 
   fscanf(fp,"%f", &x441); 
   fscanf(fp,"%f", &x1237); 
   fscanf(fp,"%f", &x1238); 
   fscanf(fp,"%f", &x1239); 
   fscanf(fp,"%f", &x1240); 
   fscanf(fp,"%f", &x1241); 
   fscanf(fp,"%f", &x1242); 
   fscanf(fp,"%f", &x1339); 
   fscanf(fp,"%f", &x1340); 
   fscanf(fp,"%f", &x1341); 
   fscanf(fp,"%f", &x1342); 
   fscanf(fp,"%f", &x1343); 
   fscanf(fp,"%f", &x1344); 
   fscanf(fp,"%f", &x1345); 
   fscanf(fp,"%f", &x1346); 
   fscanf(fp,"%f", &x1347); 
   fscanf(fp,"%f", &x1348); 

   fclose(fp);
   res=-(- 1.5*x298 - 1.5*x299 - 1.5*x300 - 1.75*x301 - 1.75*x302 - 1.75*x303
    - 1.85*x304 - 1.85*x305 - 1.85*x306 - 1.25*x307 - 1.25*x308
    - 1.25*x309 - 1.45*x310 - 1.45*x311 - 1.45*x312 - 1.65*x313
    - 1.65*x314 - 1.65*x315 - 1.55*x316 - 1.55*x317 - 1.55*x318 - 1.6*x319
    - 1.6*x320 - 1.6*x321 - 1.45*x322 - 1.45*x323 - 1.45*x324 - 1.65*x325
    - 1.65*x326 - 1.65*x327 - 1.55*x328 - 1.55*x329 - 1.55*x330 - 1.6*x331
    - 1.6*x332 - 1.6*x333 - 1.45*x334 - 1.45*x335 - 1.45*x336 - 1.65*x337
    - 1.65*x338 - 1.65*x339 - 1.55*x340 - 1.55*x341 - 1.55*x342 - 1.6*x343
    - 1.6*x344 - 1.6*x345 - 1.45*x346 - 1.45*x347 - 1.45*x348 - 1.65*x349
    - 1.65*x350 - 1.65*x351 - 1.55*x352 - 1.55*x353 - 1.55*x354 - 1.6*x355
    - 1.6*x356 - 1.6*x357 - 1.45*x358 - 1.45*x359 - 1.45*x360 - 1.65*x361
    - 1.65*x362 - 1.65*x363 - 1.55*x364 - 1.55*x365 - 1.55*x366 - 1.6*x367
    - 1.6*x368 - 1.6*x369 - 1.45*x370 - 1.45*x371 - 1.45*x372 - 1.65*x373
    - 1.65*x374 - 1.65*x375 - 1.55*x376 - 1.55*x377 - 1.55*x378 - 1.6*x379
    - 1.6*x380 - 1.6*x381 - 1.45*x382 - 1.45*x383 - 1.45*x384 - 1.65*x385
    - 1.65*x386 - 1.65*x387 - 1.55*x388 - 1.55*x389 - 1.55*x390 - 1.6*x391
    - 1.6*x392 - 1.6*x393 - 1.45*x394 - 1.45*x395 - 1.45*x396 - 1.65*x397
    - 1.65*x398 - 1.65*x399 - 1.55*x400 - 1.55*x401 - 1.55*x402 - 1.6*x403
    - 1.6*x404 - 1.6*x405 - 1.5*x406 - 1.5*x407 - 1.5*x408 - 1.75*x409
    - 1.75*x410 - 1.75*x411 - 1.85*x412 - 1.85*x413 - 1.85*x414
    - 1.25*x415 - 1.25*x416 - 1.25*x417 - 1.5*x418 - 1.5*x419 - 1.5*x420
    - 1.75*x421 - 1.75*x422 - 1.75*x423 - 1.85*x424 - 1.85*x425
    - 1.85*x426 - 1.25*x427 - 1.25*x428 - 1.25*x429 - 1.5*x430 - 1.5*x431
    - 1.5*x432 - 1.75*x433 - 1.75*x434 - 1.75*x435 - 1.85*x436 - 1.85*x437
    - 1.85*x438 - 1.25*x439 - 1.25*x440 - 1.25*x441 + 5*x1237 + 5*x1238
    + 5*x1239 + 5*x1240 + 5*x1241 + 5*x1242 + 8.4*x1339 + x1340 + x1341
    + x1342 + x1343 + x1344 + x1345 + x1346 + x1347 + x1348  - 0
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
