#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="portfol_classical200_2";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x202,x203,x204,x205,x206,x207,x208,x209,x210,x211,x212,x213,x214,x215,x216,x217,x218,x219,x220,x221,x222,x223,x224,x225,x226,x227,x228,x229,x230,x231,x232,x233,x234,x235,x236,x237,x238,x239,x240,x241,x242,x243,x244,x245,x246,x247,x248,x249,x250,x251,x252,x253,x254,x255,x256,x257,x258,x259,x260,x261,x262,x263,x264,x265,x266,x267,x268,x269,x270,x271,x272,x273,x274,x275,x276,x277,x278,x279,x280,x281,x282,x283,x284,x285,x286,x287,x288,x289,x290,x291,x292,x293,x294,x295,x296,x297,x298,x299,x300,x301,x302,x303,x304,x305,x306,x307,x308,x309,x310,x311,x312,x313,x314,x315,x316,x317,x318,x319,x320,x321,x322,x323,x324,x325,x326,x327,x328,x329,x330,x331,x332,x333,x334,x335,x336,x337,x338,x339,x340,x341,x342,x343,x344,x345,x346,x347,x348,x349,x350,x351,x352,x353,x354,x355,x356,x357,x358,x359,x360,x361,x362,x363,x364,x365,x366,x367,x368,x369,x370,x371,x372,x373,x374,x375,x376,x377,x378,x379,x380,x381,x382,x383,x384,x385,x386,x387,x388,x389,x390,x391,x392,x393,x394,x395,x396,x397,x398,x399,x400,x401;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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

   fclose(fp);
   res= - 0.0545934*x202 - 0.0296867*x203 - 0.162627*x204
 - 0.0425594*x205 - 0.0572051*x206 - 0.022332*x207 - 0.0285158*x208
 - 0.0197813*x209 - 0.223118*x210 - 0.0704019*x211 - 0.0501755*x212
 - 0.0623593*x213 - 0.0988671*x214 - 0.0396471*x215 - 0.0754553*x216
 - 0.0522861*x217 - 0.149247*x218 - 0.0657354*x219 - 0.0635799*x220
 - 0.024738*x221 - 0.0861911*x222 - 0.0414012*x223 - 0.0545719*x224
 - 0.118815*x225 - 0.0780956*x226 - 0.112291*x227 - 0.0285996*x228
 - 0.0459155*x229 - 0.0149218*x230 - 0.0466469*x231 - 0.0297586*x232
 - 0.0802854*x233 - 0.0378808*x234 - 0.0165001*x235 - 0.0313697*x236
 - 0.0449017*x237 - 0.0383245*x238 - 0.0722102*x239 - 0.0405348*x240
 - 0.0314738*x241 - 0.242072*x242 - 0.0874158*x243 - 0.0448147*x244
 - 0.0472748*x245 - 0.018425*x246 - 0.0230153*x247 - 0.148706*x248
 - 0.0936563*x249 - 0.0435638*x250 - 0.0124928*x251 - 0.0223482*x252
 - 0.188051*x253 - 0.0486665*x254 - 0.0388314*x255 - 0.11986*x256
 - 0.0700026*x257 - 0.0693657*x258 - 0.142836*x259 - 0.0262343*x260
 - 0.0629738*x261 - 0.015653*x262 - 0.0584549*x263 - 0.0267222*x264
 - 0.0470473*x265 - 0.0304536*x266 - 0.123613*x267 - 0.0263663*x268
 - 0.0398591*x269 - 0.0125033*x270 - 0.0180781*x271 - 0.360668*x272
 - 0.079713*x273 - 0.0357112*x274 - 0.0448918*x275 - 0.0191749*x276
 - 0.0314514*x277 - 0.0742301*x278 - 0.0348829*x279 - 0.0459594*x280
 - 0.197481*x281 - 0.0623323*x282 - 0.0512445*x283 - 0.0231877*x284
 - 0.104006*x285 - 0.0223699*x286 - 0.0743441*x287 - 0.0784337*x288
 - 0.0251605*x289 - 0.0672535*x290 - 0.0273717*x291 - 0.0256571*x292
 - 0.0420147*x293 - 0.0353467*x294 - 0.103528*x295 - 0.0770368*x296
 - 0.169485*x297 - 0.15397*x298 - 0.033532*x299 - 0.123248*x300
 - 0.00361039*x301 - 0.0210054*x302 - 0.0284225*x303 - 0.085049*x304
 - 0.163811*x305 - 0.0240189*x306 - 0.0276849*x307 - 0.0753619*x308
 - 0.0429033*x309 - 0.0406156*x310 - 0.0436219*x311 - 0.0333203*x312
 - 0.158042*x313 - 0.107239*x314 - 0.0794925*x315 - 0.106416*x316
 - 0.0525709*x317 - 0.135299*x318 - 0.0297343*x319 - 0.074329*x320
 - 0.0244434*x321 - 0.0255122*x322 - 0.0952893*x323 - 0.0122123*x324
 - 0.0231908*x325 - 0.0576577*x326 - 0.0389776*x327 - 0.0210495*x328
 - 0.026611*x329 - 0.0256345*x330 - 0.0396222*x331 - 0.0559549*x332
 - 0.0631331*x333 - 0.050276*x334 - 0.048786*x335 - 0.0549811*x336
 - 0.0752985*x337 - 0.0597279*x338 - 0.0374963*x339 - 0.0755153*x340
 - 0.0832698*x341 - 0.0289058*x342 - 0.0290232*x343 - 0.00543278*x344
 - 0.0446705*x345 - 0.0426069*x346 - 0.0211692*x347 - 0.0570579*x348
 - 0.0621529*x349 - 0.0457593*x350 - 0.0746691*x351 - 0.114001*x352
 - 0.106366*x353 - 0.131592*x354 - 0.0738036*x355 - 0.0708595*x356
 - 0.0499472*x357 - 0.200971*x358 - 0.110784*x359 - 0.0599328*x360
 - 0.0179152*x361 - 0.0268988*x362 - 0.0130714*x363 - 0.478953*x364
 - 0.0831726*x365 - 0.097014*x366 - 0.044223*x367 - 0.133328*x368
 - 0.0909028*x369 - 0.00699576*x370 - 0.0540865*x371 - 0.0523919*x372
 - 0.121002*x373 - 0.640105*x374 - 0.0267965*x375 - 0.123927*x376
 - 0.043787*x377 - 0.085278*x378 - 0.0754226*x379 - 0.0380825*x380
 - 0.0613428*x381 - 0.100975*x382 - 0.0161404*x383 - 0.0377827*x384
 - 0.128414*x385 - 0.18588*x386 - 0.0430759*x387 - 0.0264179*x388
 - 0.0995243*x389 - 0.0428749*x390 - 0.542099*x391 - 0.0248609*x392
 - 0.0254946*x393 - 0.0388241*x394 - 0.027024*x395 - 0.0294194*x396
 - 0.0324916*x397 - 0.0352458*x398 - 0.00514876*x399 - 0.0309082*x400
 - 0.0413168*x401 ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
