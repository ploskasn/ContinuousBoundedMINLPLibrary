#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="procurement2mot";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,x122,x123,x124,x125,x126,x127,x128,x129,x130,x131,x132,x133,x134,x135,x136,x137,x138,x139,x140,x141,x142,x143,x144,x205,x206,x207,x208,x209,x210,x211,x212,x213,x214,x215,x216,x217,x218,x219,x220,x221,x222,x223,x224,x225,x226,x227,x228,x229,x230,x231,x232,x233,x234,x235,x236,x237,x238,x239,x240,x241,x242,x243,x244,x245,x246,x247,x248,x249,x250,x251,x252,x253,x254,x255,x256,x257,x258,x259,x260,x261,x262,x263,x264,x325,x326,x327,x328,x329,x330,x331,x332,x333,x334,x335,x336,x337,x338,x339,x340,x341,x342,x343,x344,x345,x346,x347,x348,x349,x350,x351,x352,x353,x354,x355,x356,x357,x358,x359,x360,x361,x362,x363,x364,x365,x366,x367,x368,x369,x370,x371,x372,x373,x374,x375,x376,x377,x378,x379,x380,x381,x382,x383,x384,x505,x506,x507,x508,x509,x510,x511,x512,x513,x514,x515,x516,x517,x518,x519,x520,x521,x522,x523,x524,x525,x526,x527,x528,x529,x530,x531,x532,x533,x534,x535,x536,x537,x538,x539,x540,x541,x542,x543,x544,x545,x546,x547,x548,x549,x550,x551,x552,x553,x554,x555,x556,x557,x558,x559,x560,x561,x562,x563,x564,x575,x576,x577,x578,x579,x580,x581,x582,x583,x584,x585,x586,x587,x588,x589,x590,x591,x592,x593,x594,x595,x596,x597,x598,x599,x600,x601,x602,x603,x604,x605,x606,x607,x608,x609,x610,x611,x612,x613,x614,x615,x616,x617,x618,x619,x620,x621,x622,x623,x624,x786,x787,x788,x789,x790,x791,x792,x793,x794,x795,x796,x797;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x90); 
   fscanf(fp,"%f", &x91); 
   fscanf(fp,"%f", &x92); 
   fscanf(fp,"%f", &x93); 
   fscanf(fp,"%f", &x94); 
   fscanf(fp,"%f", &x95); 
   fscanf(fp,"%f", &x96); 
   fscanf(fp,"%f", &x97); 
   fscanf(fp,"%f", &x98); 
   fscanf(fp,"%f", &x99); 
   fscanf(fp,"%f", &x100); 
   fscanf(fp,"%f", &x101); 
   fscanf(fp,"%f", &x102); 
   fscanf(fp,"%f", &x103); 
   fscanf(fp,"%f", &x104); 
   fscanf(fp,"%f", &x105); 
   fscanf(fp,"%f", &x106); 
   fscanf(fp,"%f", &x107); 
   fscanf(fp,"%f", &x108); 
   fscanf(fp,"%f", &x109); 
   fscanf(fp,"%f", &x110); 
   fscanf(fp,"%f", &x111); 
   fscanf(fp,"%f", &x112); 
   fscanf(fp,"%f", &x113); 
   fscanf(fp,"%f", &x114); 
   fscanf(fp,"%f", &x115); 
   fscanf(fp,"%f", &x116); 
   fscanf(fp,"%f", &x117); 
   fscanf(fp,"%f", &x118); 
   fscanf(fp,"%f", &x119); 
   fscanf(fp,"%f", &x120); 
   fscanf(fp,"%f", &x121); 
   fscanf(fp,"%f", &x122); 
   fscanf(fp,"%f", &x123); 
   fscanf(fp,"%f", &x124); 
   fscanf(fp,"%f", &x125); 
   fscanf(fp,"%f", &x126); 
   fscanf(fp,"%f", &x127); 
   fscanf(fp,"%f", &x128); 
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
   fscanf(fp,"%f", &x505); 
   fscanf(fp,"%f", &x506); 
   fscanf(fp,"%f", &x507); 
   fscanf(fp,"%f", &x508); 
   fscanf(fp,"%f", &x509); 
   fscanf(fp,"%f", &x510); 
   fscanf(fp,"%f", &x511); 
   fscanf(fp,"%f", &x512); 
   fscanf(fp,"%f", &x513); 
   fscanf(fp,"%f", &x514); 
   fscanf(fp,"%f", &x515); 
   fscanf(fp,"%f", &x516); 
   fscanf(fp,"%f", &x517); 
   fscanf(fp,"%f", &x518); 
   fscanf(fp,"%f", &x519); 
   fscanf(fp,"%f", &x520); 
   fscanf(fp,"%f", &x521); 
   fscanf(fp,"%f", &x522); 
   fscanf(fp,"%f", &x523); 
   fscanf(fp,"%f", &x524); 
   fscanf(fp,"%f", &x525); 
   fscanf(fp,"%f", &x526); 
   fscanf(fp,"%f", &x527); 
   fscanf(fp,"%f", &x528); 
   fscanf(fp,"%f", &x529); 
   fscanf(fp,"%f", &x530); 
   fscanf(fp,"%f", &x531); 
   fscanf(fp,"%f", &x532); 
   fscanf(fp,"%f", &x533); 
   fscanf(fp,"%f", &x534); 
   fscanf(fp,"%f", &x535); 
   fscanf(fp,"%f", &x536); 
   fscanf(fp,"%f", &x537); 
   fscanf(fp,"%f", &x538); 
   fscanf(fp,"%f", &x539); 
   fscanf(fp,"%f", &x540); 
   fscanf(fp,"%f", &x541); 
   fscanf(fp,"%f", &x542); 
   fscanf(fp,"%f", &x543); 
   fscanf(fp,"%f", &x544); 
   fscanf(fp,"%f", &x545); 
   fscanf(fp,"%f", &x546); 
   fscanf(fp,"%f", &x547); 
   fscanf(fp,"%f", &x548); 
   fscanf(fp,"%f", &x549); 
   fscanf(fp,"%f", &x550); 
   fscanf(fp,"%f", &x551); 
   fscanf(fp,"%f", &x552); 
   fscanf(fp,"%f", &x553); 
   fscanf(fp,"%f", &x554); 
   fscanf(fp,"%f", &x555); 
   fscanf(fp,"%f", &x556); 
   fscanf(fp,"%f", &x557); 
   fscanf(fp,"%f", &x558); 
   fscanf(fp,"%f", &x559); 
   fscanf(fp,"%f", &x560); 
   fscanf(fp,"%f", &x561); 
   fscanf(fp,"%f", &x562); 
   fscanf(fp,"%f", &x563); 
   fscanf(fp,"%f", &x564); 
   fscanf(fp,"%f", &x575); 
   fscanf(fp,"%f", &x576); 
   fscanf(fp,"%f", &x577); 
   fscanf(fp,"%f", &x578); 
   fscanf(fp,"%f", &x579); 
   fscanf(fp,"%f", &x580); 
   fscanf(fp,"%f", &x581); 
   fscanf(fp,"%f", &x582); 
   fscanf(fp,"%f", &x583); 
   fscanf(fp,"%f", &x584); 
   fscanf(fp,"%f", &x585); 
   fscanf(fp,"%f", &x586); 
   fscanf(fp,"%f", &x587); 
   fscanf(fp,"%f", &x588); 
   fscanf(fp,"%f", &x589); 
   fscanf(fp,"%f", &x590); 
   fscanf(fp,"%f", &x591); 
   fscanf(fp,"%f", &x592); 
   fscanf(fp,"%f", &x593); 
   fscanf(fp,"%f", &x594); 
   fscanf(fp,"%f", &x595); 
   fscanf(fp,"%f", &x596); 
   fscanf(fp,"%f", &x597); 
   fscanf(fp,"%f", &x598); 
   fscanf(fp,"%f", &x599); 
   fscanf(fp,"%f", &x600); 
   fscanf(fp,"%f", &x601); 
   fscanf(fp,"%f", &x602); 
   fscanf(fp,"%f", &x603); 
   fscanf(fp,"%f", &x604); 
   fscanf(fp,"%f", &x605); 
   fscanf(fp,"%f", &x606); 
   fscanf(fp,"%f", &x607); 
   fscanf(fp,"%f", &x608); 
   fscanf(fp,"%f", &x609); 
   fscanf(fp,"%f", &x610); 
   fscanf(fp,"%f", &x611); 
   fscanf(fp,"%f", &x612); 
   fscanf(fp,"%f", &x613); 
   fscanf(fp,"%f", &x614); 
   fscanf(fp,"%f", &x615); 
   fscanf(fp,"%f", &x616); 
   fscanf(fp,"%f", &x617); 
   fscanf(fp,"%f", &x618); 
   fscanf(fp,"%f", &x619); 
   fscanf(fp,"%f", &x620); 
   fscanf(fp,"%f", &x621); 
   fscanf(fp,"%f", &x622); 
   fscanf(fp,"%f", &x623); 
   fscanf(fp,"%f", &x624); 
   fscanf(fp,"%f", &x786); 
   fscanf(fp,"%f", &x787); 
   fscanf(fp,"%f", &x788); 
   fscanf(fp,"%f", &x789); 
   fscanf(fp,"%f", &x790); 
   fscanf(fp,"%f", &x791); 
   fscanf(fp,"%f", &x792); 
   fscanf(fp,"%f", &x793); 
   fscanf(fp,"%f", &x794); 
   fscanf(fp,"%f", &x795); 
   fscanf(fp,"%f", &x796); 
   fscanf(fp,"%f", &x797); 

   fclose(fp);
   res=-(    0.15848885*x13 + 0.15848885*x14 + 0.15848885*x15 + 0.15848885*x16
   + 0.15848885*x17 + 0.15848885*x18 - 1.12142215*x19 - 1.12142215*x20
   - 1.12142215*x21 - 1.12142215*x22 - 1.12142215*x23 - 1.12142215*x24
   + 0.026*x85 + 0.026*x86 + 0.026*x87 + 0.026*x88 + 0.026*x89 + 0.026*x90
   + 0.026*x91 + 0.026*x92 + 0.026*x93 + 0.026*x94 + 0.026*x95 + 0.026*x96
   + 0.026*x97 + 0.026*x98 + 0.026*x99 + 0.026*x100 + 0.026*x101
   + 0.026*x102 + 0.026*x103 + 0.026*x104 + 0.026*x105 + 0.026*x106
   + 0.026*x107 + 0.026*x108 + 0.026*x109 + 0.026*x110 + 0.026*x111
   + 0.026*x112 + 0.026*x113 + 0.026*x114 + 0.014*x115 + 0.014*x116
   + 0.014*x117 + 0.014*x118 + 0.014*x119 + 0.014*x120 + 0.014*x121
   + 0.014*x122 + 0.014*x123 + 0.014*x124 + 0.014*x125 + 0.014*x126
   + 0.014*x127 + 0.014*x128 + 0.014*x129 + 0.014*x130 + 0.014*x131
   + 0.014*x132 + 0.014*x133 + 0.014*x134 + 0.014*x135 + 0.014*x136
   + 0.014*x137 + 0.014*x138 + 0.014*x139 + 0.014*x140 + 0.014*x141
   + 0.014*x142 + 0.014*x143 + 0.014*x144 + 0.016*x205 + 0.016*x206
   + 0.016*x207 + 0.016*x208 + 0.016*x209 + 0.016*x210 + 0.016*x211
   + 0.016*x212 + 0.016*x213 + 0.016*x214 + 0.016*x215 + 0.016*x216
   + 0.016*x217 + 0.016*x218 + 0.016*x219 + 0.016*x220 + 0.016*x221
   + 0.016*x222 + 0.016*x223 + 0.016*x224 + 0.016*x225 + 0.016*x226
   + 0.016*x227 + 0.016*x228 + 0.016*x229 + 0.016*x230 + 0.016*x231
   + 0.016*x232 + 0.016*x233 + 0.016*x234 + 0.013*x235 + 0.013*x236
   + 0.013*x237 + 0.013*x238 + 0.013*x239 + 0.013*x240 + 0.013*x241
   + 0.013*x242 + 0.013*x243 + 0.013*x244 + 0.013*x245 + 0.013*x246
   + 0.013*x247 + 0.013*x248 + 0.013*x249 + 0.013*x250 + 0.013*x251
   + 0.013*x252 + 0.013*x253 + 0.013*x254 + 0.013*x255 + 0.013*x256
   + 0.013*x257 + 0.013*x258 + 0.013*x259 + 0.013*x260 + 0.013*x261
   + 0.013*x262 + 0.013*x263 + 0.013*x264 + 0.032*x325 + 0.032*x326
   + 0.032*x327 + 0.032*x328 + 0.032*x329 + 0.032*x330 + 0.032*x331
   + 0.032*x332 + 0.032*x333 + 0.032*x334 + 0.032*x335 + 0.032*x336
   + 0.032*x337 + 0.032*x338 + 0.032*x339 + 0.032*x340 + 0.032*x341
   + 0.032*x342 + 0.032*x343 + 0.032*x344 + 0.032*x345 + 0.032*x346
   + 0.032*x347 + 0.032*x348 + 0.032*x349 + 0.032*x350 + 0.032*x351
   + 0.032*x352 + 0.032*x353 + 0.032*x354 + 0.032*x355 + 0.032*x356
   + 0.032*x357 + 0.032*x358 + 0.032*x359 + 0.032*x360 + 0.032*x361
   + 0.032*x362 + 0.032*x363 + 0.032*x364 + 0.032*x365 + 0.032*x366
   + 0.032*x367 + 0.032*x368 + 0.032*x369 + 0.032*x370 + 0.032*x371
   + 0.032*x372 + 0.032*x373 + 0.032*x374 + 0.032*x375 + 0.032*x376
   + 0.032*x377 + 0.032*x378 + 0.032*x379 + 0.032*x380 + 0.032*x381
   + 0.032*x382 + 0.032*x383 + 0.032*x384 + 0.1*x505 + 0.1*x506 + 0.1*x507
   + 0.1*x508 + 0.1*x509 + 0.1*x510 + 0.1*x511 + 0.1*x512 + 0.1*x513
   + 0.1*x514 + 0.1*x515 + 0.1*x516 + 0.1*x517 + 0.1*x518 + 0.1*x519
   + 0.1*x520 + 0.1*x521 + 0.1*x522 + 0.1*x523 + 0.1*x524 + 0.1*x525
   + 0.1*x526 + 0.1*x527 + 0.1*x528 + 0.1*x529 + 0.1*x530 + 0.1*x531
   + 0.1*x532 + 0.1*x533 + 0.1*x534 + 0.1*x535 + 0.1*x536 + 0.1*x537
   + 0.1*x538 + 0.1*x539 + 0.1*x540 + 0.1*x541 + 0.1*x542 + 0.1*x543
   + 0.1*x544 + 0.1*x545 + 0.1*x546 + 0.1*x547 + 0.1*x548 + 0.1*x549
   + 0.1*x550 + 0.1*x551 + 0.1*x552 + 0.1*x553 + 0.1*x554 + 0.1*x555
   + 0.1*x556 + 0.1*x557 + 0.1*x558 + 0.1*x559 + 0.1*x560 + 0.1*x561
   + 0.1*x562 + 0.1*x563 + 0.1*x564 + 0.003* 0 + 0.003* 0 + 0.003* 0
   + 0.003* 0 + 0.003* 0 + 0.003* 0 + 0.003* 0 + 0.003* 0
   + 0.003* 0 + 0.003* 0 + 0.003*x575 + 0.003*x576 + 0.003*x577
   + 0.003*x578 + 0.003*x579 + 0.003*x580 + 0.003*x581 + 0.003*x582
   + 0.003*x583 + 0.003*x584 + 0.003*x585 + 0.003*x586 + 0.003*x587
   + 0.003*x588 + 0.003*x589 + 0.003*x590 + 0.003*x591 + 0.003*x592
   + 0.003*x593 + 0.003*x594 + 0.003*x595 + 0.003*x596 + 0.003*x597
   + 0.003*x598 + 0.003*x599 + 0.003*x600 + 0.003*x601 + 0.003*x602
   + 0.003*x603 + 0.003*x604 + 0.003*x605 + 0.003*x606 + 0.003*x607
   + 0.003*x608 + 0.003*x609 + 0.003*x610 + 0.003*x611 + 0.003*x612
   + 0.003*x613 + 0.003*x614 + 0.003*x615 + 0.003*x616 + 0.003*x617
   + 0.003*x618 + 0.003*x619 + 0.003*x620 + 0.003*x621 + 0.003*x622
   + 0.003*x623 + 0.003*x624  - 10*x786 - 10*x787 - 10*x788
   - 10*x789 - 10*x790 - 10*x791 - 21*x792 - 21*x793 - 21*x794 - 21*x795
   - 21*x796 - 21*x797 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
