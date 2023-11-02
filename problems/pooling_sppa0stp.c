#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="pooling_sppa0stp";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x4,x5,x10,x11,x12,x16,x17,x18,x22,x26,x27,x28,x29,x34,x35,x36,x37,x42,x43,x44,x47,x48,x49,x50,x51,x55,x56,x60,x61,x68,x69,x70,x73,x74,x82,x86,x87,x88,x89,x93,x94,x95,x96,x99,x100,x101,x102,x107,x108,x109,x110,x111,x112,x117,x118,x289,x290,x291,x292,x293,x294,x295,x296,x297,x298,x299,x300,x301,x302,x303,x304,x305,x306,x307,x308,x309,x310,x311,x312,x313,x314,x315,x316,x317,x318,x319,x320,x321,x322,x323,x324,x325,x326,x327,x328,x329,x330,x331,x332,x333,x334,x335,x336,x337,x338,x339,x340,x341,x342,x343,x344,x345,x346,x347,x348,x349,x351,x352,x353,x354,x355,x358,x359,x360,x362,x363,x364,x365,x366,x367,x368,x369,x370,x371,x372,x373,x374,x375,x376,x377,x378,x379,x380,x381,x382,x383,x384,x385,x386,x387,x388,x389,x390,x391,x392,x393,x394,x395,x396,x397,x398,x399,x400,x401,x402,x403,x404,x405,x406,x407,x408,x409,x410,x411,x412,x413,x414,x415,x416,x417,x418,x419,x420,x421,x422,x423,x424,x425,x426,x427,x428,x429,x430,x431,x432,x433,x434,x435,x436,x437,x438,x439,x440,x441,x442,x443,x444,x445,x446,x447,x448,x449,x450,x451,x452,x453,x454,x455,x456,x457,x458,x459,x460,x461,x462,x463,x464,x465,x466,x467,x468,x469,x470,x471,x472,x473,x474,x475,x476,x477,x478,x479,x480,x481,x482,x483,x484,x485,x486,x487,x488,x489,x490,x491,x492,x493,x494,x495,x496,x497,x498,x499,x500,x501,x502,x503,x504,x505,x506,x507,x508,x509,x510,x511,x512,x513,x514,x515,x516,x517,x518,x519,x520,x521,x522,x523,x524,x525,x526,x527,x528,x529,x530,x531,x532,x533,x534,x535,x536,x537,x538,x539,x540,x541,x542,x543,x544,x545,x546,x547,x548,x549,x550,x551,x552,x553,x554,x555,x556,x557,x558,x559,x560,x561,x562,x563,x564,x565,x566,x567,x568,x569,x570,x571,x572,x573,x574,x575,x576,x577,x578,x579,x580,x581,x582,x583,x584,x585,x586,x587,x588,x589,x590,x591,x592,x593,x594,x595,x596,x597,x598,x599,x600,x601,x602,x603,x604,x605,x606,x607,x608,x609,x610,x611,x612,x613,x614,x615,x616,x617;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x50); 
   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x60); 
   fscanf(fp,"%f", &x61); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x73); 
   fscanf(fp,"%f", &x74); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x93); 
   fscanf(fp,"%f", &x94); 
   fscanf(fp,"%f", &x95); 
   fscanf(fp,"%f", &x96); 
   fscanf(fp,"%f", &x99); 
   fscanf(fp,"%f", &x100); 
   fscanf(fp,"%f", &x101); 
   fscanf(fp,"%f", &x102); 
   fscanf(fp,"%f", &x107); 
   fscanf(fp,"%f", &x108); 
   fscanf(fp,"%f", &x109); 
   fscanf(fp,"%f", &x110); 
   fscanf(fp,"%f", &x111); 
   fscanf(fp,"%f", &x112); 
   fscanf(fp,"%f", &x117); 
   fscanf(fp,"%f", &x118); 
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
   fscanf(fp,"%f", &x351); 
   fscanf(fp,"%f", &x352); 
   fscanf(fp,"%f", &x353); 
   fscanf(fp,"%f", &x354); 
   fscanf(fp,"%f", &x355); 
   fscanf(fp,"%f", &x358); 
   fscanf(fp,"%f", &x359); 
   fscanf(fp,"%f", &x360); 
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
   fscanf(fp,"%f", &x442); 
   fscanf(fp,"%f", &x443); 
   fscanf(fp,"%f", &x444); 
   fscanf(fp,"%f", &x445); 
   fscanf(fp,"%f", &x446); 
   fscanf(fp,"%f", &x447); 
   fscanf(fp,"%f", &x448); 
   fscanf(fp,"%f", &x449); 
   fscanf(fp,"%f", &x450); 
   fscanf(fp,"%f", &x451); 
   fscanf(fp,"%f", &x452); 
   fscanf(fp,"%f", &x453); 
   fscanf(fp,"%f", &x454); 
   fscanf(fp,"%f", &x455); 
   fscanf(fp,"%f", &x456); 
   fscanf(fp,"%f", &x457); 
   fscanf(fp,"%f", &x458); 
   fscanf(fp,"%f", &x459); 
   fscanf(fp,"%f", &x460); 
   fscanf(fp,"%f", &x461); 
   fscanf(fp,"%f", &x462); 
   fscanf(fp,"%f", &x463); 
   fscanf(fp,"%f", &x464); 
   fscanf(fp,"%f", &x465); 
   fscanf(fp,"%f", &x466); 
   fscanf(fp,"%f", &x467); 
   fscanf(fp,"%f", &x468); 
   fscanf(fp,"%f", &x469); 
   fscanf(fp,"%f", &x470); 
   fscanf(fp,"%f", &x471); 
   fscanf(fp,"%f", &x472); 
   fscanf(fp,"%f", &x473); 
   fscanf(fp,"%f", &x474); 
   fscanf(fp,"%f", &x475); 
   fscanf(fp,"%f", &x476); 
   fscanf(fp,"%f", &x477); 
   fscanf(fp,"%f", &x478); 
   fscanf(fp,"%f", &x479); 
   fscanf(fp,"%f", &x480); 
   fscanf(fp,"%f", &x481); 
   fscanf(fp,"%f", &x482); 
   fscanf(fp,"%f", &x483); 
   fscanf(fp,"%f", &x484); 
   fscanf(fp,"%f", &x485); 
   fscanf(fp,"%f", &x486); 
   fscanf(fp,"%f", &x487); 
   fscanf(fp,"%f", &x488); 
   fscanf(fp,"%f", &x489); 
   fscanf(fp,"%f", &x490); 
   fscanf(fp,"%f", &x491); 
   fscanf(fp,"%f", &x492); 
   fscanf(fp,"%f", &x493); 
   fscanf(fp,"%f", &x494); 
   fscanf(fp,"%f", &x495); 
   fscanf(fp,"%f", &x496); 
   fscanf(fp,"%f", &x497); 
   fscanf(fp,"%f", &x498); 
   fscanf(fp,"%f", &x499); 
   fscanf(fp,"%f", &x500); 
   fscanf(fp,"%f", &x501); 
   fscanf(fp,"%f", &x502); 
   fscanf(fp,"%f", &x503); 
   fscanf(fp,"%f", &x504); 
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
   fscanf(fp,"%f", &x565); 
   fscanf(fp,"%f", &x566); 
   fscanf(fp,"%f", &x567); 
   fscanf(fp,"%f", &x568); 
   fscanf(fp,"%f", &x569); 
   fscanf(fp,"%f", &x570); 
   fscanf(fp,"%f", &x571); 
   fscanf(fp,"%f", &x572); 
   fscanf(fp,"%f", &x573); 
   fscanf(fp,"%f", &x574); 
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

   fclose(fp);
   res=-( + 27*x4 + 21*x5 - 3*x10 + 5*x11 - 2*x12 + 21*x16 + 13*x17
 + 12*x18 + 13*x22 - 6*x26 - 10*x27 - 2*x28 - 10*x29 + 37*x34 + 28*x35
 + 28*x36 + 27*x37 + 36*x42 + 34*x43 + 26*x44 + 19*x47 + 15*x48 + 25*x49
 + 24*x50 + 15*x51 + 18*x55 + 10*x56 + 27*x60 + 28*x61 + 19*x68 + 17*x69
 + 9*x70 + 13*x73 + 4*x74 + 19*x82 - 2*x86 - x87 - 9*x88 - 10*x89 + 5*x93
 + x94 + 6*x95 - 3*x96 + 24*x99 + 24*x100 + 14*x101 + 14*x102 + 11*x107
 + 19*x108 + 11*x109 + 12*x110 + 11*x111 + 7*x112 + 34*x117 + 36*x118
 + 19*x289 + 28*x290 + 20*x291 + 27*x292 + 20*x293 + 27*x294 + 23*x295
 + 29*x296 + 29*x297 + 21*x298 + 7*x299 - 3*x300 - x301 - 2*x302 + 5*x303
 + x304 + 7*x305 + 7*x306 - x307 + 7*x308 + 7*x309 + 5*x310 + 5*x311
 - x312 + 5*x313 + 6*x314 - 2*x315 - x316 - 3*x317 + 20*x318 + 21*x319
 + 13*x320 + 14*x321 + 12*x322 + 20*x323 + 16*x324 + 22*x325 + 12*x326
 + 13*x327 + 20*x328 + 14*x329 + 12*x330 + 13*x331 + 13*x332 + 12*x333
 + 13*x334 + 3*x335 + 5*x336 + 4*x337 + 13*x338 + 13*x339 + 11*x340
 + 11*x341 + 5*x342 + 11*x343 + 7*x344 + 13*x345 + 3*x346 + 4*x347
 + 11*x348 + 5*x349 - 10*x351 - 8*x352 - 9*x353 - 2*x354 - 6*x355 - 8*x358
 - 2*x359 - 6*x360 - 10*x362 - 9*x363 - 2*x364 - 8*x365 + 27*x366
 + 36*x367 + 28*x368 + 35*x369 + 28*x370 + 35*x371 + 31*x372 + 37*x373
 + 37*x374 + 29*x375 + 35*x376 + 35*x377 + 28*x378 + 28*x379 + 27*x380
 + 27*x381 + 27*x382 + 28*x383 + 28*x384 + 27*x385 + 36*x386 + 26*x387
 + 28*x388 + 27*x389 + 36*x390 + 36*x391 + 34*x392 + 34*x393 + 28*x394
 + 34*x395 + 35*x396 + 27*x397 + 26*x398 + 28*x399 + 26*x400 + 34*x401
 + 34*x402 + 27*x403 + 27*x404 + 26*x405 + 26*x406 + 15*x407 + 25*x408
 + 23*x409 + 24*x410 + 16*x411 + 16*x412 + 15*x413 + 23*x414 + 23*x415
 + 16*x416 + 16*x417 + 15*x418 + 15*x419 + 17*x420 + 13*x421 + 19*x422
 + 19*x423 + 11*x424 + 9*x425 + 19*x426 + 17*x427 + 18*x428 + 10*x429
 + 10*x430 + 9*x431 + 17*x432 + 13*x433 + 19*x434 + 9*x435 + 10*x436
 + 17*x437 + 11*x438 + 34*x439 + 35*x440 + 27*x441 + 28*x442 + 26*x443
 + 26*x444 + 36*x445 + 34*x446 + 35*x447 + 27*x448 + 27*x449 + 26*x450
 + 34*x451 + 30*x452 + 36*x453 + 26*x454 + 27*x455 + 34*x456 + 28*x457
 + 4*x458 + 13*x459 + 5*x460 + 12*x461 + 5*x462 + 14*x463 + 4*x464
 + 6*x465 + 5*x466 + 12*x467 + 8*x468 + 14*x469 + 4*x470 + 5*x471
 + 12*x472 + 6*x473 + 9*x474 + 18*x475 + 10*x476 + 17*x477 + 10*x478
 + 17*x479 + 18*x480 + 10*x481 + 9*x482 + 11*x483 + 9*x484 + 17*x485
 + 13*x486 + 19*x487 + 9*x488 + 10*x489 + 17*x490 + 11*x491 + 11*x492
 + 12*x493 + 4*x494 + 3*x495 + 5*x496 + 3*x497 + 11*x498 + 12*x499
 + 4*x500 + 5*x501 + 3*x502 + 15*x503 + 24*x504 + 16*x505 + 23*x506
 + 16*x507 + 25*x508 + 15*x509 + 17*x510 + 16*x511 + 23*x512 + 19*x513
 + 25*x514 + 25*x515 + 17*x516 + 25*x517 + 25*x518 + 23*x519 + 23*x520
 + 17*x521 + 23*x522 + 24*x523 + 16*x524 + 17*x525 + 15*x526 + 23*x527
 + 23*x528 + 16*x529 + 16*x530 + 15*x531 + 15*x532 + 23*x533 + 19*x534
 + 25*x535 + 15*x536 + 16*x537 + 23*x538 + 17*x539 - 10*x540 - x541
 - 9*x542 - 2*x543 - 9*x544 - 2*x545 - x546 - 9*x547 - 8*x548 - 10*x549
 - 10*x550 - 9*x551 - 9*x552 - 10*x553 + 5*x554 + 6*x555 - 2*x556 - x557
 - 3*x558 + 5*x559 + x560 + 7*x561 - 3*x562 - 2*x563 + 5*x564 - x565
 - 3*x566 - 2*x567 - 2*x568 - 3*x569 + 24*x570 + 14*x571 + 16*x572
 + 15*x573 + 24*x574 + 24*x575 + 22*x576 + 22*x577 + 16*x578 + 11*x579
 + 20*x580 + 12*x581 + 19*x582 + 12*x583 + 21*x584 + 11*x585 + 13*x586
 + 12*x587 + 19*x588 + 15*x589 + 21*x590 + 21*x591 + 13*x592 + 19*x593
 + 20*x594 + 12*x595 + 13*x596 + 11*x597 + 36*x598 + 36*x599 + 34*x600
 + 34*x601 + 28*x602 + 34*x603 + 35*x604 + 27*x605 + 26*x606 + 28*x607
 + 26*x608 + 34*x609 + 35*x610 + 27*x611 + 28*x612 + 26*x613 + 26*x614
 + 27*x615 + 27*x616 + 26*x617 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
