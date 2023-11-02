#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="p_ball_30b_10p_2d_h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x303,x306,x308,x310,x312,x314,x316,x318,x320,x322,x324,x326,x328,x330,x332,x334,x336,x338,x339,x340,x341,x342,x343,x344,x345,x346,x347,x348,x349,x350,x351,x352,x353,x354,x355,x356,x357,x358,x359,x360,x361,x362,x363,x364,x365,x366,x367,x368,x369,x370,x371,x372,x373,x374,x375,x376,x377,x378,x379,x380,x381,x382,x383,x384,x385,x386,x387,x388,x389,x390,x391,x392,x393,x394,x395,x396,x397,x398,x399,x400,x401,x402,x403,x404,x405,x406,x407,x408,x409,x410;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x303); 
   fscanf(fp,"%f", &x306); 
   fscanf(fp,"%f", &x308); 
   fscanf(fp,"%f", &x310); 
   fscanf(fp,"%f", &x312); 
   fscanf(fp,"%f", &x314); 
   fscanf(fp,"%f", &x316); 
   fscanf(fp,"%f", &x318); 
   fscanf(fp,"%f", &x320); 
   fscanf(fp,"%f", &x322); 
   fscanf(fp,"%f", &x324); 
   fscanf(fp,"%f", &x326); 
   fscanf(fp,"%f", &x328); 
   fscanf(fp,"%f", &x330); 
   fscanf(fp,"%f", &x332); 
   fscanf(fp,"%f", &x334); 
   fscanf(fp,"%f", &x336); 
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

   fclose(fp);
   res=-(- x303 - x306 - x308 - x310 - x312 - x314 - x316 - x318 - x320 - x322
    - x324 - x326 - x328 - x330 - x332 - x334 - x336 - x338 - x339 - x340
    - x341 - x342 - x343 - x344 - x345 - x346 - x347 - x348 - x349 - x350
    - x351 - x352 - x353 - x354 - x355 - x356 - x357 - x358 - x359 - x360
    - x361 - x362 - x363 - x364 - x365 - x366 - x367 - x368 - x369 - x370
    - x371 - x372 - x373 - x374 - x375 - x376 - x377 - x378 - x379 - x380
    - x381 - x382 - x383 - x384 - x385 - x386 - x387 - x388 - x389 - x390
    - x391 - x392 - x393 - x394 - x395 - x396 - x397 - x398 - x399 - x400
    - x401 - x402 - x403 - x404 - x405 - x406 - x407 - x408 - x409 - x410
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
