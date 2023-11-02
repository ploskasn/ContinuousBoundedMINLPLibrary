#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="pooling_foulds5stp";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x194,x195,x196,x197,x198,x199,x200,x201,x202,x203,x204,x205,x206,x207,x208,x209,x210,x211,x212,x213,x214,x215,x216,x217,x218,x219,x220,x221,x222,x223,x224,x225,x226,x227,x228,x229,x230,x231,x232,x233,x234,x235,x236,x237,x238,x239,x240,x241,x242,x243,x244,x245,x246,x247,x248,x249,x250,x251,x252,x253,x254,x255,x256,x257,x258,x259,x260,x261,x262,x263,x264,x265,x266,x267,x268,x269,x270,x271,x272,x273,x274,x275,x276,x277,x278,x279,x280,x281,x282,x283,x284,x285,x286,x287,x288,x289,x290,x291,x292,x293,x294,x295,x296,x297,x298,x299,x300,x301,x302,x303,x304,x305,x306,x307,x308,x309,x310,x311,x312,x313,x314,x315,x316,x317,x318,x319,x320,x321,x322,x323,x324,x325,x326,x327,x328,x329,x330,x331,x332,x333,x334,x335,x337,x338,x339,x340,x341,x342,x343,x344,x345,x346,x347,x348,x349,x350,x351,x353,x354,x355,x356,x357,x358,x359,x360,x361,x362,x363,x364,x365,x366,x367,x369,x370,x371,x372,x373,x374,x375,x376,x377,x378,x379,x380,x381,x382,x383,x385,x386,x387,x388,x389,x390,x391,x392,x393,x394,x395,x396,x397,x399,x400,x401,x402,x403,x404,x405,x406,x407,x408,x409,x410,x411,x412,x413,x415,x416,x417,x418,x419,x420,x421,x422,x423,x424,x425,x426,x427,x428,x429,x431,x432,x433,x434,x435,x436,x437,x438,x439,x440,x441,x442,x443,x445,x446,x447,x448,x449,x450,x451,x452,x453,x454,x455,x456,x457,x458,x459,x461,x462,x463,x464,x465,x466,x467,x468,x469,x470,x471,x472,x473,x475,x476,x477,x478,x479,x480,x481,x482,x483,x484,x485,x486,x487,x488,x489,x491,x492,x493,x494,x495,x496,x497,x498,x499,x500,x501,x502,x503,x504,x505,x507,x508,x509,x510,x511,x512,x513,x514,x515,x516,x517,x518,x519,x521,x522,x523,x524,x525,x526,x527,x528,x529,x530,x531,x532,x533,x534,x535,x537,x538,x539,x540,x541,x542,x543,x544,x545,x546,x547,x548,x549,x550,x551,x553,x554,x555,x556,x557,x558,x559,x560,x561,x562,x563,x564,x565,x566,x567,x569,x570,x571,x572,x573,x574,x575,x576,x577,x578,x579,x580,x581,x583,x584,x585,x586,x587,x588,x589,x590,x591,x592,x593,x594,x595,x596,x597,x599,x600,x601,x602,x603,x604,x605,x606,x607,x608,x609,x610,x611,x612,x613,x615,x616,x617,x618,x619,x620,x621,x622,x623,x624,x625,x626,x627,x629,x630,x631,x632,x633,x634,x635,x636,x637,x638,x639,x640,x641,x642,x643,x645,x646,x647,x648,x649,x650,x651,x652,x653,x654,x655,x656,x657,x658,x659,x661,x662,x663,x664,x665,x666,x667,x668,x669,x670,x671,x672,x673,x675,x676,x677,x678,x679,x680,x681,x682,x683,x684,x685,x686,x687,x688,x689,x691,x692,x693,x694,x695,x696,x697,x698,x699,x700,x701,x702,x703,x704,x705;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &x625); 
   fscanf(fp,"%f", &x626); 
   fscanf(fp,"%f", &x627); 
   fscanf(fp,"%f", &x629); 
   fscanf(fp,"%f", &x630); 
   fscanf(fp,"%f", &x631); 
   fscanf(fp,"%f", &x632); 
   fscanf(fp,"%f", &x633); 
   fscanf(fp,"%f", &x634); 
   fscanf(fp,"%f", &x635); 
   fscanf(fp,"%f", &x636); 
   fscanf(fp,"%f", &x637); 
   fscanf(fp,"%f", &x638); 
   fscanf(fp,"%f", &x639); 
   fscanf(fp,"%f", &x640); 
   fscanf(fp,"%f", &x641); 
   fscanf(fp,"%f", &x642); 
   fscanf(fp,"%f", &x643); 
   fscanf(fp,"%f", &x645); 
   fscanf(fp,"%f", &x646); 
   fscanf(fp,"%f", &x647); 
   fscanf(fp,"%f", &x648); 
   fscanf(fp,"%f", &x649); 
   fscanf(fp,"%f", &x650); 
   fscanf(fp,"%f", &x651); 
   fscanf(fp,"%f", &x652); 
   fscanf(fp,"%f", &x653); 
   fscanf(fp,"%f", &x654); 
   fscanf(fp,"%f", &x655); 
   fscanf(fp,"%f", &x656); 
   fscanf(fp,"%f", &x657); 
   fscanf(fp,"%f", &x658); 
   fscanf(fp,"%f", &x659); 
   fscanf(fp,"%f", &x661); 
   fscanf(fp,"%f", &x662); 
   fscanf(fp,"%f", &x663); 
   fscanf(fp,"%f", &x664); 
   fscanf(fp,"%f", &x665); 
   fscanf(fp,"%f", &x666); 
   fscanf(fp,"%f", &x667); 
   fscanf(fp,"%f", &x668); 
   fscanf(fp,"%f", &x669); 
   fscanf(fp,"%f", &x670); 
   fscanf(fp,"%f", &x671); 
   fscanf(fp,"%f", &x672); 
   fscanf(fp,"%f", &x673); 
   fscanf(fp,"%f", &x675); 
   fscanf(fp,"%f", &x676); 
   fscanf(fp,"%f", &x677); 
   fscanf(fp,"%f", &x678); 
   fscanf(fp,"%f", &x679); 
   fscanf(fp,"%f", &x680); 
   fscanf(fp,"%f", &x681); 
   fscanf(fp,"%f", &x682); 
   fscanf(fp,"%f", &x683); 
   fscanf(fp,"%f", &x684); 
   fscanf(fp,"%f", &x685); 
   fscanf(fp,"%f", &x686); 
   fscanf(fp,"%f", &x687); 
   fscanf(fp,"%f", &x688); 
   fscanf(fp,"%f", &x689); 
   fscanf(fp,"%f", &x691); 
   fscanf(fp,"%f", &x692); 
   fscanf(fp,"%f", &x693); 
   fscanf(fp,"%f", &x694); 
   fscanf(fp,"%f", &x695); 
   fscanf(fp,"%f", &x696); 
   fscanf(fp,"%f", &x697); 
   fscanf(fp,"%f", &x698); 
   fscanf(fp,"%f", &x699); 
   fscanf(fp,"%f", &x700); 
   fscanf(fp,"%f", &x701); 
   fscanf(fp,"%f", &x702); 
   fscanf(fp,"%f", &x703); 
   fscanf(fp,"%f", &x704); 
   fscanf(fp,"%f", &x705); 

   fclose(fp);
   res=-( + 10*x194 + 9.5*x195 + 9*x196 + 8.5*x197 + 8*x198 + 7.5*x199
 + 7*x200 + 6.5*x201 + 6*x202 + 5.5*x203 + 5*x204 + 4.5*x205 + 4*x206
 + 3.5*x207 + 3*x208 + 2.5*x209 + 10*x210 + 9.5*x211 + 9*x212 + 8.5*x213
 + 8*x214 + 7.5*x215 + 7*x216 + 6.5*x217 + 6*x218 + 5.5*x219 + 5*x220
 + 4.5*x221 + 4*x222 + 3.5*x223 + 3*x224 + 2.5*x225 + 9*x226 + 8.5*x227
 + 8*x228 + 7.5*x229 + 7*x230 + 6.5*x231 + 6*x232 + 5.5*x233 + 5*x234
 + 4.5*x235 + 4*x236 + 3.5*x237 + 3*x238 + 2.5*x239 + 2*x240 + 1.5*x241
 + 9*x242 + 8.5*x243 + 8*x244 + 7.5*x245 + 7*x246 + 6.5*x247 + 6*x248
 + 5.5*x249 + 5*x250 + 4.5*x251 + 4*x252 + 3.5*x253 + 3*x254 + 2.5*x255
 + 2*x256 + 1.5*x257 + 9*x258 + 8.5*x259 + 8*x260 + 7.5*x261 + 7*x262
 + 6.5*x263 + 6*x264 + 5.5*x265 + 5*x266 + 4.5*x267 + 4*x268 + 3.5*x269
 + 3*x270 + 2.5*x271 + 2*x272 + 1.5*x273 + 8*x274 + 7.5*x275 + 7*x276
 + 6.5*x277 + 6*x278 + 5.5*x279 + 5*x280 + 4.5*x281 + 4*x282 + 3.5*x283
 + 3*x284 + 2.5*x285 + 2*x286 + 1.5*x287 + x288 + 0.5*x289 + 8*x290
 + 7.5*x291 + 7*x292 + 6.5*x293 + 6*x294 + 5.5*x295 + 5*x296 + 4.5*x297
 + 4*x298 + 3.5*x299 + 3*x300 + 2.5*x301 + 2*x302 + 1.5*x303 + x304
 + 0.5*x305 + 8*x306 + 7.5*x307 + 7*x308 + 6.5*x309 + 6*x310 + 5.5*x311
 + 5*x312 + 4.5*x313 + 4*x314 + 3.5*x315 + 3*x316 + 2.5*x317 + 2*x318
 + 1.5*x319 + x320 + 0.5*x321 + 7*x322 + 6.5*x323 + 6*x324 + 5.5*x325
 + 5*x326 + 4.5*x327 + 4*x328 + 3.5*x329 + 3*x330 + 2.5*x331 + 2*x332
 + 1.5*x333 + x334 + 0.5*x335 - 0.5*x337 + 7*x338 + 6.5*x339 + 6*x340
 + 5.5*x341 + 5*x342 + 4.5*x343 + 4*x344 + 3.5*x345 + 3*x346 + 2.5*x347
 + 2*x348 + 1.5*x349 + x350 + 0.5*x351 - 0.5*x353 + 7*x354 + 6.5*x355
 + 6*x356 + 5.5*x357 + 5*x358 + 4.5*x359 + 4*x360 + 3.5*x361 + 3*x362
 + 2.5*x363 + 2*x364 + 1.5*x365 + x366 + 0.5*x367 - 0.5*x369 + 7*x370
 + 6.5*x371 + 6*x372 + 5.5*x373 + 5*x374 + 4.5*x375 + 4*x376 + 3.5*x377
 + 3*x378 + 2.5*x379 + 2*x380 + 1.5*x381 + x382 + 0.5*x383 - 0.5*x385
 + 6*x386 + 5.5*x387 + 5*x388 + 4.5*x389 + 4*x390 + 3.5*x391 + 3*x392
 + 2.5*x393 + 2*x394 + 1.5*x395 + x396 + 0.5*x397 - 0.5*x399 - x400
 - 1.5*x401 + 6*x402 + 5.5*x403 + 5*x404 + 4.5*x405 + 4*x406 + 3.5*x407
 + 3*x408 + 2.5*x409 + 2*x410 + 1.5*x411 + x412 + 0.5*x413 - 0.5*x415
 - x416 - 1.5*x417 + 6*x418 + 5.5*x419 + 5*x420 + 4.5*x421 + 4*x422
 + 3.5*x423 + 3*x424 + 2.5*x425 + 2*x426 + 1.5*x427 + x428 + 0.5*x429
 - 0.5*x431 - x432 - 1.5*x433 + 5*x434 + 4.5*x435 + 4*x436 + 3.5*x437
 + 3*x438 + 2.5*x439 + 2*x440 + 1.5*x441 + x442 + 0.5*x443 - 0.5*x445
 - x446 - 1.5*x447 - 2*x448 - 2.5*x449 + 5*x450 + 4.5*x451 + 4*x452
 + 3.5*x453 + 3*x454 + 2.5*x455 + 2*x456 + 1.5*x457 + x458 + 0.5*x459
 - 0.5*x461 - x462 - 1.5*x463 - 2*x464 - 2.5*x465 + 4*x466 + 3.5*x467
 + 3*x468 + 2.5*x469 + 2*x470 + 1.5*x471 + x472 + 0.5*x473 - 0.5*x475
 - x476 - 1.5*x477 - 2*x478 - 2.5*x479 - 3*x480 - 3.5*x481 + 4*x482
 + 3.5*x483 + 3*x484 + 2.5*x485 + 2*x486 + 1.5*x487 + x488 + 0.5*x489
 - 0.5*x491 - x492 - 1.5*x493 - 2*x494 - 2.5*x495 - 3*x496 - 3.5*x497
 + 4*x498 + 3.5*x499 + 3*x500 + 2.5*x501 + 2*x502 + 1.5*x503 + x504
 + 0.5*x505 - 0.5*x507 - x508 - 1.5*x509 - 2*x510 - 2.5*x511 - 3*x512
 - 3.5*x513 + 3*x514 + 2.5*x515 + 2*x516 + 1.5*x517 + x518 + 0.5*x519
 - 0.5*x521 - x522 - 1.5*x523 - 2*x524 - 2.5*x525 - 3*x526 - 3.5*x527
 - 4*x528 - 4.5*x529 + 3*x530 + 2.5*x531 + 2*x532 + 1.5*x533 + x534
 + 0.5*x535 - 0.5*x537 - x538 - 1.5*x539 - 2*x540 - 2.5*x541 - 3*x542
 - 3.5*x543 - 4*x544 - 4.5*x545 + 3*x546 + 2.5*x547 + 2*x548 + 1.5*x549
 + x550 + 0.5*x551 - 0.5*x553 - x554 - 1.5*x555 - 2*x556 - 2.5*x557
 - 3*x558 - 3.5*x559 - 4*x560 - 4.5*x561 + 3*x562 + 2.5*x563 + 2*x564
 + 1.5*x565 + x566 + 0.5*x567 - 0.5*x569 - x570 - 1.5*x571 - 2*x572
 - 2.5*x573 - 3*x574 - 3.5*x575 - 4*x576 - 4.5*x577 + 2*x578 + 1.5*x579
 + x580 + 0.5*x581 - 0.5*x583 - x584 - 1.5*x585 - 2*x586 - 2.5*x587
 - 3*x588 - 3.5*x589 - 4*x590 - 4.5*x591 - 5*x592 - 5.5*x593 + 2*x594
 + 1.5*x595 + x596 + 0.5*x597 - 0.5*x599 - x600 - 1.5*x601 - 2*x602
 - 2.5*x603 - 3*x604 - 3.5*x605 - 4*x606 - 4.5*x607 - 5*x608 - 5.5*x609
 + 2*x610 + 1.5*x611 + x612 + 0.5*x613 - 0.5*x615 - x616 - 1.5*x617
 - 2*x618 - 2.5*x619 - 3*x620 - 3.5*x621 - 4*x622 - 4.5*x623 - 5*x624
 - 5.5*x625 + x626 + 0.5*x627 - 0.5*x629 - x630 - 1.5*x631 - 2*x632
 - 2.5*x633 - 3*x634 - 3.5*x635 - 4*x636 - 4.5*x637 - 5*x638 - 5.5*x639
 - 6*x640 - 6.5*x641 + x642 + 0.5*x643 - 0.5*x645 - x646 - 1.5*x647
 - 2*x648 - 2.5*x649 - 3*x650 - 3.5*x651 - 4*x652 - 4.5*x653 - 5*x654
 - 5.5*x655 - 6*x656 - 6.5*x657 + x658 + 0.5*x659 - 0.5*x661 - x662
 - 1.5*x663 - 2*x664 - 2.5*x665 - 3*x666 - 3.5*x667 - 4*x668 - 4.5*x669
 - 5*x670 - 5.5*x671 - 6*x672 - 6.5*x673 - 0.5*x675 - x676 - 1.5*x677
 - 2*x678 - 2.5*x679 - 3*x680 - 3.5*x681 - 4*x682 - 4.5*x683 - 5*x684
 - 5.5*x685 - 6*x686 - 6.5*x687 - 7*x688 - 7.5*x689 - 0.5*x691 - x692
 - 1.5*x693 - 2*x694 - 2.5*x695 - 3*x696 - 3.5*x697 - 4*x698 - 4.5*x699
 - 5*x700 - 5.5*x701 - 6*x702 - 6.5*x703 - 7*x704 - 7.5*x705 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
