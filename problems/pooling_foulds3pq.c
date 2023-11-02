#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="pooling_foulds3pq";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x162,x163,x164,x165,x166,x167,x168,x169,x170,x171,x172,x173,x174,x175,x176,x177,x178,x179,x180,x181,x182,x183,x184,x185,x186,x187,x188,x189,x190,x191,x192,x193,x194,x195,x196,x197,x198,x199,x200,x201,x202,x203,x204,x205,x206,x207,x208,x209,x210,x211,x212,x213,x214,x215,x216,x217,x218,x219,x220,x221,x222,x223,x224,x225,x226,x227,x228,x229,x230,x231,x232,x233,x234,x235,x236,x237,x238,x239,x240,x241,x242,x243,x244,x245,x246,x247,x248,x249,x250,x251,x252,x253,x254,x255,x256,x257,x258,x259,x260,x261,x262,x263,x264,x265,x266,x267,x268,x269,x270,x271,x273,x274,x275,x276,x277,x278,x279,x280,x281,x282,x283,x284,x285,x286,x287,x289,x290,x291,x292,x293,x294,x295,x296,x297,x298,x299,x300,x301,x302,x303,x305,x306,x307,x308,x309,x310,x311,x312,x313,x314,x315,x316,x317,x318,x319,x321,x322,x323,x324,x325,x326,x327,x328,x329,x330,x331,x332,x333,x335,x336,x337,x338,x339,x340,x341,x342,x343,x344,x345,x346,x347,x348,x349,x351,x352,x353,x354,x355,x356,x357,x358,x359,x360,x361,x362,x363,x364,x365,x367,x368,x369,x370,x371,x372,x373,x374,x375,x376,x377,x378,x379,x380,x381,x383,x384,x385,x386,x387,x388,x389,x390,x391,x392,x393,x394,x395,x397,x398,x399,x400,x401,x402,x403,x404,x405,x406,x407,x408,x409,x410,x411,x413,x414,x415,x416,x417,x418,x419,x420,x421,x422,x423,x424,x425,x426,x427,x429,x430,x431,x432,x433,x434,x435,x436,x437,x438,x439,x440,x441,x442,x443,x445,x446,x447,x448,x449,x450,x451,x452,x453,x454,x455,x456,x457,x459,x460,x461,x462,x463,x464,x465,x466,x467,x468,x469,x470,x471,x472,x473,x475,x476,x477,x478,x479,x480,x481,x482,x483,x484,x485,x486,x487,x488,x489,x491,x492,x493,x494,x495,x496,x497,x498,x499,x500,x501,x502,x503,x504,x505,x507,x508,x509,x510,x511,x512,x513,x514,x515,x516,x517,x518,x519,x521,x522,x523,x524,x525,x526,x527,x528,x529,x530,x531,x532,x533,x534,x535,x537,x538,x539,x540,x541,x542,x543,x544,x545,x546,x547,x548,x549,x550,x551,x553,x554,x555,x556,x557,x558,x559,x560,x561,x562,x563,x564,x565,x566,x567,x569,x570,x571,x572,x573,x574,x575,x576,x577,x578,x579,x580,x581,x583,x584,x585,x586,x587,x588,x589,x590,x591,x592,x593,x594,x595,x596,x597,x599,x600,x601,x602,x603,x604,x605,x606,x607,x608,x609,x610,x611,x612,x613,x615,x616,x617,x618,x619,x620,x621,x622,x623,x624,x625,x626,x627,x629,x630,x631,x632,x633,x634,x635,x636,x637,x638,x639,x640,x641,x642,x643,x645,x646,x647,x648,x649,x650,x651,x652,x653,x654,x655,x656,x657,x659,x660,x661,x662,x663,x664,x665,x666,x667,x668,x669,x670,x671,x672,x673;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x162); 
   fscanf(fp,"%f", &x163); 
   fscanf(fp,"%f", &x164); 
   fscanf(fp,"%f", &x165); 
   fscanf(fp,"%f", &x166); 
   fscanf(fp,"%f", &x167); 
   fscanf(fp,"%f", &x168); 
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
   fscanf(fp,"%f", &x659); 
   fscanf(fp,"%f", &x660); 
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

   fclose(fp);
   res=-( + 10*x162 + 9.5*x163 + 9*x164 + 8.5*x165 + 8*x166 + 7.5*x167
 + 7*x168 + 6.5*x169 + 6*x170 + 5.5*x171 + 5*x172 + 4.5*x173 + 4*x174
 + 3.5*x175 + 3*x176 + 2.5*x177 + 9*x178 + 8.5*x179 + 8*x180 + 7.5*x181
 + 7*x182 + 6.5*x183 + 6*x184 + 5.5*x185 + 5*x186 + 4.5*x187 + 4*x188
 + 3.5*x189 + 3*x190 + 2.5*x191 + 2*x192 + 1.5*x193 + 9*x194 + 8.5*x195
 + 8*x196 + 7.5*x197 + 7*x198 + 6.5*x199 + 6*x200 + 5.5*x201 + 5*x202
 + 4.5*x203 + 4*x204 + 3.5*x205 + 3*x206 + 2.5*x207 + 2*x208 + 1.5*x209
 + 8*x210 + 7.5*x211 + 7*x212 + 6.5*x213 + 6*x214 + 5.5*x215 + 5*x216
 + 4.5*x217 + 4*x218 + 3.5*x219 + 3*x220 + 2.5*x221 + 2*x222 + 1.5*x223
 + x224 + 0.5*x225 + 8*x226 + 7.5*x227 + 7*x228 + 6.5*x229 + 6*x230
 + 5.5*x231 + 5*x232 + 4.5*x233 + 4*x234 + 3.5*x235 + 3*x236 + 2.5*x237
 + 2*x238 + 1.5*x239 + x240 + 0.5*x241 + 8*x242 + 7.5*x243 + 7*x244
 + 6.5*x245 + 6*x246 + 5.5*x247 + 5*x248 + 4.5*x249 + 4*x250 + 3.5*x251
 + 3*x252 + 2.5*x253 + 2*x254 + 1.5*x255 + x256 + 0.5*x257 + 7*x258
 + 6.5*x259 + 6*x260 + 5.5*x261 + 5*x262 + 4.5*x263 + 4*x264 + 3.5*x265
 + 3*x266 + 2.5*x267 + 2*x268 + 1.5*x269 + x270 + 0.5*x271 - 0.5*x273
 + 7*x274 + 6.5*x275 + 6*x276 + 5.5*x277 + 5*x278 + 4.5*x279 + 4*x280
 + 3.5*x281 + 3*x282 + 2.5*x283 + 2*x284 + 1.5*x285 + x286 + 0.5*x287
 - 0.5*x289 + 7*x290 + 6.5*x291 + 6*x292 + 5.5*x293 + 5*x294 + 4.5*x295
 + 4*x296 + 3.5*x297 + 3*x298 + 2.5*x299 + 2*x300 + 1.5*x301 + x302
 + 0.5*x303 - 0.5*x305 + 7*x306 + 6.5*x307 + 6*x308 + 5.5*x309 + 5*x310
 + 4.5*x311 + 4*x312 + 3.5*x313 + 3*x314 + 2.5*x315 + 2*x316 + 1.5*x317
 + x318 + 0.5*x319 - 0.5*x321 + 6*x322 + 5.5*x323 + 5*x324 + 4.5*x325
 + 4*x326 + 3.5*x327 + 3*x328 + 2.5*x329 + 2*x330 + 1.5*x331 + x332
 + 0.5*x333 - 0.5*x335 - x336 - 1.5*x337 + 6*x338 + 5.5*x339 + 5*x340
 + 4.5*x341 + 4*x342 + 3.5*x343 + 3*x344 + 2.5*x345 + 2*x346 + 1.5*x347
 + x348 + 0.5*x349 - 0.5*x351 - x352 - 1.5*x353 + 6*x354 + 5.5*x355
 + 5*x356 + 4.5*x357 + 4*x358 + 3.5*x359 + 3*x360 + 2.5*x361 + 2*x362
 + 1.5*x363 + x364 + 0.5*x365 - 0.5*x367 - x368 - 1.5*x369 + 6*x370
 + 5.5*x371 + 5*x372 + 4.5*x373 + 4*x374 + 3.5*x375 + 3*x376 + 2.5*x377
 + 2*x378 + 1.5*x379 + x380 + 0.5*x381 - 0.5*x383 - x384 - 1.5*x385
 + 5*x386 + 4.5*x387 + 4*x388 + 3.5*x389 + 3*x390 + 2.5*x391 + 2*x392
 + 1.5*x393 + x394 + 0.5*x395 - 0.5*x397 - x398 - 1.5*x399 - 2*x400
 - 2.5*x401 + 5*x402 + 4.5*x403 + 4*x404 + 3.5*x405 + 3*x406 + 2.5*x407
 + 2*x408 + 1.5*x409 + x410 + 0.5*x411 - 0.5*x413 - x414 - 1.5*x415
 - 2*x416 - 2.5*x417 + 5*x418 + 4.5*x419 + 4*x420 + 3.5*x421 + 3*x422
 + 2.5*x423 + 2*x424 + 1.5*x425 + x426 + 0.5*x427 - 0.5*x429 - x430
 - 1.5*x431 - 2*x432 - 2.5*x433 + 5*x434 + 4.5*x435 + 4*x436 + 3.5*x437
 + 3*x438 + 2.5*x439 + 2*x440 + 1.5*x441 + x442 + 0.5*x443 - 0.5*x445
 - x446 - 1.5*x447 - 2*x448 - 2.5*x449 + 4*x450 + 3.5*x451 + 3*x452
 + 2.5*x453 + 2*x454 + 1.5*x455 + x456 + 0.5*x457 - 0.5*x459 - x460
 - 1.5*x461 - 2*x462 - 2.5*x463 - 3*x464 - 3.5*x465 + 4*x466 + 3.5*x467
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
 - 5.5*x655 - 6*x656 - 6.5*x657 - 0.5*x659 - x660 - 1.5*x661 - 2*x662
 - 2.5*x663 - 3*x664 - 3.5*x665 - 4*x666 - 4.5*x667 - 5*x668 - 5.5*x669
 - 6*x670 - 6.5*x671 - 7*x672 - 7.5*x673 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
