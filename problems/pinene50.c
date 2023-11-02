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
   char *problemname="pinene50";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x6,x266,x271,x276,x7,x267,x272,x277,x8,x268,x273,x278,x9,x269,x274,x279,x10,x270,x275,x280,x21,x311,x316,x321,x22,x312,x317,x322,x23,x313,x318,x323,x24,x314,x319,x324,x25,x315,x320,x325,x31,x341,x346,x351,x32,x342,x347,x352,x33,x343,x348,x353,x34,x344,x349,x354,x35,x345,x350,x355,x51,x401,x406,x411,x52,x402,x407,x412,x53,x403,x408,x413,x54,x404,x409,x414,x55,x405,x410,x415,x71,x461,x466,x471,x72,x462,x467,x472,x73,x463,x468,x473,x74,x464,x469,x474,x75,x465,x470,x475,x101,x551,x556,x561,x102,x552,x557,x562,x103,x553,x558,x563,x104,x554,x559,x564,x105,x555,x560,x565,x156,x716,x721,x726,x157,x717,x722,x727,x158,x718,x723,x728,x159,x719,x724,x729,x160,x720,x725,x730,x246,x986,x991,x996,x247,x987,x992,x997,x248,x988,x993,x998,x249,x989,x994,x999,x250,x990,x995,x1000;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x266); 
   fscanf(fp,"%f", &x271); 
   fscanf(fp,"%f", &x276); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x267); 
   fscanf(fp,"%f", &x272); 
   fscanf(fp,"%f", &x277); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x268); 
   fscanf(fp,"%f", &x273); 
   fscanf(fp,"%f", &x278); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x269); 
   fscanf(fp,"%f", &x274); 
   fscanf(fp,"%f", &x279); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x270); 
   fscanf(fp,"%f", &x275); 
   fscanf(fp,"%f", &x280); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x311); 
   fscanf(fp,"%f", &x316); 
   fscanf(fp,"%f", &x321); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x312); 
   fscanf(fp,"%f", &x317); 
   fscanf(fp,"%f", &x322); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x313); 
   fscanf(fp,"%f", &x318); 
   fscanf(fp,"%f", &x323); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x314); 
   fscanf(fp,"%f", &x319); 
   fscanf(fp,"%f", &x324); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x315); 
   fscanf(fp,"%f", &x320); 
   fscanf(fp,"%f", &x325); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x341); 
   fscanf(fp,"%f", &x346); 
   fscanf(fp,"%f", &x351); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x342); 
   fscanf(fp,"%f", &x347); 
   fscanf(fp,"%f", &x352); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x343); 
   fscanf(fp,"%f", &x348); 
   fscanf(fp,"%f", &x353); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x344); 
   fscanf(fp,"%f", &x349); 
   fscanf(fp,"%f", &x354); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x345); 
   fscanf(fp,"%f", &x350); 
   fscanf(fp,"%f", &x355); 
   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &x401); 
   fscanf(fp,"%f", &x406); 
   fscanf(fp,"%f", &x411); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x402); 
   fscanf(fp,"%f", &x407); 
   fscanf(fp,"%f", &x412); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x403); 
   fscanf(fp,"%f", &x408); 
   fscanf(fp,"%f", &x413); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x404); 
   fscanf(fp,"%f", &x409); 
   fscanf(fp,"%f", &x414); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x405); 
   fscanf(fp,"%f", &x410); 
   fscanf(fp,"%f", &x415); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &x461); 
   fscanf(fp,"%f", &x466); 
   fscanf(fp,"%f", &x471); 
   fscanf(fp,"%f", &x72); 
   fscanf(fp,"%f", &x462); 
   fscanf(fp,"%f", &x467); 
   fscanf(fp,"%f", &x472); 
   fscanf(fp,"%f", &x73); 
   fscanf(fp,"%f", &x463); 
   fscanf(fp,"%f", &x468); 
   fscanf(fp,"%f", &x473); 
   fscanf(fp,"%f", &x74); 
   fscanf(fp,"%f", &x464); 
   fscanf(fp,"%f", &x469); 
   fscanf(fp,"%f", &x474); 
   fscanf(fp,"%f", &x75); 
   fscanf(fp,"%f", &x465); 
   fscanf(fp,"%f", &x470); 
   fscanf(fp,"%f", &x475); 
   fscanf(fp,"%f", &x101); 
   fscanf(fp,"%f", &x551); 
   fscanf(fp,"%f", &x556); 
   fscanf(fp,"%f", &x561); 
   fscanf(fp,"%f", &x102); 
   fscanf(fp,"%f", &x552); 
   fscanf(fp,"%f", &x557); 
   fscanf(fp,"%f", &x562); 
   fscanf(fp,"%f", &x103); 
   fscanf(fp,"%f", &x553); 
   fscanf(fp,"%f", &x558); 
   fscanf(fp,"%f", &x563); 
   fscanf(fp,"%f", &x104); 
   fscanf(fp,"%f", &x554); 
   fscanf(fp,"%f", &x559); 
   fscanf(fp,"%f", &x564); 
   fscanf(fp,"%f", &x105); 
   fscanf(fp,"%f", &x555); 
   fscanf(fp,"%f", &x560); 
   fscanf(fp,"%f", &x565); 
   fscanf(fp,"%f", &x156); 
   fscanf(fp,"%f", &x716); 
   fscanf(fp,"%f", &x721); 
   fscanf(fp,"%f", &x726); 
   fscanf(fp,"%f", &x157); 
   fscanf(fp,"%f", &x717); 
   fscanf(fp,"%f", &x722); 
   fscanf(fp,"%f", &x727); 
   fscanf(fp,"%f", &x158); 
   fscanf(fp,"%f", &x718); 
   fscanf(fp,"%f", &x723); 
   fscanf(fp,"%f", &x728); 
   fscanf(fp,"%f", &x159); 
   fscanf(fp,"%f", &x719); 
   fscanf(fp,"%f", &x724); 
   fscanf(fp,"%f", &x729); 
   fscanf(fp,"%f", &x160); 
   fscanf(fp,"%f", &x720); 
   fscanf(fp,"%f", &x725); 
   fscanf(fp,"%f", &x730); 
   fscanf(fp,"%f", &x246); 
   fscanf(fp,"%f", &x986); 
   fscanf(fp,"%f", &x991); 
   fscanf(fp,"%f", &x996); 
   fscanf(fp,"%f", &x247); 
   fscanf(fp,"%f", &x987); 
   fscanf(fp,"%f", &x992); 
   fscanf(fp,"%f", &x997); 
   fscanf(fp,"%f", &x248); 
   fscanf(fp,"%f", &x988); 
   fscanf(fp,"%f", &x993); 
   fscanf(fp,"%f", &x998); 
   fscanf(fp,"%f", &x249); 
   fscanf(fp,"%f", &x989); 
   fscanf(fp,"%f", &x994); 
   fscanf(fp,"%f", &x999); 
   fscanf(fp,"%f", &x250); 
   fscanf(fp,"%f", &x990); 
   fscanf(fp,"%f", &x995); 
   fscanf(fp,"%f", &x1000); 

   fclose(fp);
   res=-(-(sqr((-88.35) + x6 + 501.6*x266 + 172.709060955519*x271 +
    39.644364348933*x276) + sqr((-7.3) + x7 + 501.6*x267 + 172.709060955519
   *x272 + 39.644364348933*x277) + sqr((-2.3) + x8 + 501.6*x268 +
    172.709060955519*x273 + 39.644364348933*x278) + sqr((-0.4) + x9 + 501.6
   *x269 + 172.709060955519*x274 + 39.644364348933*x279) + sqr((-1.75) +
    x10 + 501.6*x270 + 172.709060955519*x275 + 39.644364348933*x280) + sqr(
   (-76.4) + x21 + 146.4*x311 + 14.7123558484349*x316 + 0.985671286935236*
   x321) + sqr((-15.6) + x22 + 146.4*x312 + 14.7123558484349*x317 +
    0.985671286935236*x322) + sqr((-4.5) + x23 + 146.4*x313 +
    14.7123558484349*x318 + 0.985671286935236*x323) + sqr((-0.7) + x24 +
    146.4*x314 + 14.7123558484349*x319 + 0.985671286935236*x324) + sqr((-
   2.8) + x25 + 146.4*x315 + 14.7123558484349*x320 + 0.985671286935236*
   x325) + sqr((-65.1) + x31 + 549.6*x341 + 207.344975288303*x346 +
    52.1493677551033*x351) + sqr((-23.1) + x32 + 549.6*x342 +
    207.344975288303*x347 + 52.1493677551033*x352) + sqr((-5.3) + x33 +
    549.6*x343 + 207.344975288303*x348 + 52.1493677551033*x353) + sqr((-1.1
   ) + x34 + 549.6*x344 + 207.344975288303*x349 + 52.1493677551033*x354)
    + sqr((-5.8) + x35 + 549.6*x345 + 207.344975288303*x350 +
    52.1493677551033*x355) + sqr((-50.4) + x51 + 516*x401 +
    182.767710049423*x406 + 43.1576690396771*x411) + sqr((-32.9) + x52 +
    516*x402 + 182.767710049423*x407 + 43.1576690396771*x412) + sqr((-6) +
    x53 + 516*x403 + 182.767710049423*x408 + 43.1576690396771*x413) + sqr((
   -1.5) + x54 + 516*x404 + 182.767710049423*x409 + 43.1576690396771*x414)
    + sqr((-9.3) + x55 + 516*x405 + 182.767710049423*x410 +
    43.1576690396771*x415) + sqr((-37.5) + x71 + 482.4*x461 +
    159.740362438221*x466 + 35.2639350357851*x471) + sqr((-42.7) + x72 +
    482.4*x462 + 159.740362438221*x467 + 35.2639350357851*x472) + sqr((-6)
    + x73 + 482.4*x463 + 159.740362438221*x468 + 35.2639350357851*x473) +
    sqr((-1.9) + x74 + 482.4*x464 + 159.740362438221*x469 +
    35.2639350357851*x474) + sqr((-12) + x75 + 482.4*x465 +
    159.740362438221*x470 + 35.2639350357851*x475) + sqr((-25.9) + x101 +
    462*x551 + 146.515650741351*x556 + 30.9766751979243*x561) + sqr((-49.1)
    + x102 + 462*x552 + 146.515650741351*x557 + 30.9766751979243*x562) +
    sqr((-5.9) + x103 + 462*x553 + 146.515650741351*x558 + 30.9766751979243
   *x563) + sqr((-2.2) + x104 + 462*x554 + 146.515650741351*x559 +
    30.9766751979243*x564) + sqr((-17) + x105 + 462*x555 + 146.515650741351
   *x560 + 30.9766751979243*x565) + sqr((-14) + x156 + 39.6000000000022*
   x716 + 1.07644151565086*x721 + 0.0195071773841188*x726) + sqr((-57.4)
    + x157 + 39.6000000000022*x717 + 1.07644151565086*x722 +
    0.0195071773841188*x727) + sqr((-5.1) + x158 + 39.6000000000022*x718 +
    1.07644151565086*x723 + 0.0195071773841188*x728) + sqr((-2.6) + x159 +
    39.6000000000022*x719 + 1.07644151565086*x724 + 0.0195071773841188*x729
   ) + sqr((-21) + x160 + 39.6000000000022*x720 + 1.07644151565086*x725 +
    0.0195071773841188*x730) + sqr((-4.5) + x246 + 728.400000000001*x986 +
    364.200000000001*x991 + 121.400000000001*x996) + sqr((-63.1) + x247 +
    728.400000000001*x987 + 364.200000000001*x992 + 121.400000000001*x997)
    + sqr((-3.8) + x248 + 728.400000000001*x988 + 364.200000000001*x993 +
    121.400000000001*x998) + sqr((-2.9) + x249 + 728.400000000001*x989 +
    364.200000000001*x994 + 121.400000000001*x999) + sqr((-25.7) + x250 +
    728.400000000001*x990 + 364.200000000001*x995 + 121.400000000001*x1000)
   )  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
