#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="pooling_foulds3stp";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x322,x323,x324,x325,x326,x327,x328,x329,x330,x331,x332,x333,x334,x335,x336,x337,x338,x339,x340,x341,x342,x343,x344,x345,x346,x347,x348,x349,x350,x351,x352,x353,x354,x355,x356,x357,x358,x359,x360,x361,x362,x363,x364,x365,x366,x367,x368,x369,x370,x371,x372,x373,x374,x375,x376,x377,x378,x379,x380,x381,x382,x383,x384,x385,x386,x387,x388,x389,x390,x391,x392,x393,x394,x395,x396,x397,x398,x399,x400,x401,x402,x403,x404,x405,x406,x407,x408,x409,x410,x411,x412,x413,x414,x415,x416,x417,x418,x419,x420,x421,x422,x423,x424,x425,x426,x427,x428,x429,x430,x431,x433,x434,x435,x436,x437,x438,x439,x440,x441,x442,x443,x444,x445,x446,x447,x449,x450,x451,x452,x453,x454,x455,x456,x457,x458,x459,x460,x461,x462,x463,x465,x466,x467,x468,x469,x470,x471,x472,x473,x474,x475,x476,x477,x478,x479,x481,x482,x483,x484,x485,x486,x487,x488,x489,x490,x491,x492,x493,x495,x496,x497,x498,x499,x500,x501,x502,x503,x504,x505,x506,x507,x508,x509,x511,x512,x513,x514,x515,x516,x517,x518,x519,x520,x521,x522,x523,x524,x525,x527,x528,x529,x530,x531,x532,x533,x534,x535,x536,x537,x538,x539,x540,x541,x543,x544,x545,x546,x547,x548,x549,x550,x551,x552,x553,x554,x555,x557,x558,x559,x560,x561,x562,x563,x564,x565,x566,x567,x568,x569,x570,x571,x573,x574,x575,x576,x577,x578,x579,x580,x581,x582,x583,x584,x585,x586,x587,x589,x590,x591,x592,x593,x594,x595,x596,x597,x598,x599,x600,x601,x602,x603,x605,x606,x607,x608,x609,x610,x611,x612,x613,x614,x615,x616,x617,x619,x620,x621,x622,x623,x624,x625,x626,x627,x628,x629,x630,x631,x632,x633,x635,x636,x637,x638,x639,x640,x641,x642,x643,x644,x645,x646,x647,x648,x649,x651,x652,x653,x654,x655,x656,x657,x658,x659,x660,x661,x662,x663,x664,x665,x667,x668,x669,x670,x671,x672,x673,x674,x675,x676,x677,x678,x679,x681,x682,x683,x684,x685,x686,x687,x688,x689,x690,x691,x692,x693,x694,x695,x697,x698,x699,x700,x701,x702,x703,x704,x705,x706,x707,x708,x709,x710,x711,x713,x714,x715,x716,x717,x718,x719,x720,x721,x722,x723,x724,x725,x726,x727,x729,x730,x731,x732,x733,x734,x735,x736,x737,x738,x739,x740,x741,x743,x744,x745,x746,x747,x748,x749,x750,x751,x752,x753,x754,x755,x756,x757,x759,x760,x761,x762,x763,x764,x765,x766,x767,x768,x769,x770,x771,x772,x773,x775,x776,x777,x778,x779,x780,x781,x782,x783,x784,x785,x786,x787,x789,x790,x791,x792,x793,x794,x795,x796,x797,x798,x799,x800,x801,x802,x803,x805,x806,x807,x808,x809,x810,x811,x812,x813,x814,x815,x816,x817,x819,x820,x821,x822,x823,x824,x825,x826,x827,x828,x829,x830,x831,x832,x833;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &x619); 
   fscanf(fp,"%f", &x620); 
   fscanf(fp,"%f", &x621); 
   fscanf(fp,"%f", &x622); 
   fscanf(fp,"%f", &x623); 
   fscanf(fp,"%f", &x624); 
   fscanf(fp,"%f", &x625); 
   fscanf(fp,"%f", &x626); 
   fscanf(fp,"%f", &x627); 
   fscanf(fp,"%f", &x628); 
   fscanf(fp,"%f", &x629); 
   fscanf(fp,"%f", &x630); 
   fscanf(fp,"%f", &x631); 
   fscanf(fp,"%f", &x632); 
   fscanf(fp,"%f", &x633); 
   fscanf(fp,"%f", &x635); 
   fscanf(fp,"%f", &x636); 
   fscanf(fp,"%f", &x637); 
   fscanf(fp,"%f", &x638); 
   fscanf(fp,"%f", &x639); 
   fscanf(fp,"%f", &x640); 
   fscanf(fp,"%f", &x641); 
   fscanf(fp,"%f", &x642); 
   fscanf(fp,"%f", &x643); 
   fscanf(fp,"%f", &x644); 
   fscanf(fp,"%f", &x645); 
   fscanf(fp,"%f", &x646); 
   fscanf(fp,"%f", &x647); 
   fscanf(fp,"%f", &x648); 
   fscanf(fp,"%f", &x649); 
   fscanf(fp,"%f", &x651); 
   fscanf(fp,"%f", &x652); 
   fscanf(fp,"%f", &x653); 
   fscanf(fp,"%f", &x654); 
   fscanf(fp,"%f", &x655); 
   fscanf(fp,"%f", &x656); 
   fscanf(fp,"%f", &x657); 
   fscanf(fp,"%f", &x658); 
   fscanf(fp,"%f", &x659); 
   fscanf(fp,"%f", &x660); 
   fscanf(fp,"%f", &x661); 
   fscanf(fp,"%f", &x662); 
   fscanf(fp,"%f", &x663); 
   fscanf(fp,"%f", &x664); 
   fscanf(fp,"%f", &x665); 
   fscanf(fp,"%f", &x667); 
   fscanf(fp,"%f", &x668); 
   fscanf(fp,"%f", &x669); 
   fscanf(fp,"%f", &x670); 
   fscanf(fp,"%f", &x671); 
   fscanf(fp,"%f", &x672); 
   fscanf(fp,"%f", &x673); 
   fscanf(fp,"%f", &x674); 
   fscanf(fp,"%f", &x675); 
   fscanf(fp,"%f", &x676); 
   fscanf(fp,"%f", &x677); 
   fscanf(fp,"%f", &x678); 
   fscanf(fp,"%f", &x679); 
   fscanf(fp,"%f", &x681); 
   fscanf(fp,"%f", &x682); 
   fscanf(fp,"%f", &x683); 
   fscanf(fp,"%f", &x684); 
   fscanf(fp,"%f", &x685); 
   fscanf(fp,"%f", &x686); 
   fscanf(fp,"%f", &x687); 
   fscanf(fp,"%f", &x688); 
   fscanf(fp,"%f", &x689); 
   fscanf(fp,"%f", &x690); 
   fscanf(fp,"%f", &x691); 
   fscanf(fp,"%f", &x692); 
   fscanf(fp,"%f", &x693); 
   fscanf(fp,"%f", &x694); 
   fscanf(fp,"%f", &x695); 
   fscanf(fp,"%f", &x697); 
   fscanf(fp,"%f", &x698); 
   fscanf(fp,"%f", &x699); 
   fscanf(fp,"%f", &x700); 
   fscanf(fp,"%f", &x701); 
   fscanf(fp,"%f", &x702); 
   fscanf(fp,"%f", &x703); 
   fscanf(fp,"%f", &x704); 
   fscanf(fp,"%f", &x705); 
   fscanf(fp,"%f", &x706); 
   fscanf(fp,"%f", &x707); 
   fscanf(fp,"%f", &x708); 
   fscanf(fp,"%f", &x709); 
   fscanf(fp,"%f", &x710); 
   fscanf(fp,"%f", &x711); 
   fscanf(fp,"%f", &x713); 
   fscanf(fp,"%f", &x714); 
   fscanf(fp,"%f", &x715); 
   fscanf(fp,"%f", &x716); 
   fscanf(fp,"%f", &x717); 
   fscanf(fp,"%f", &x718); 
   fscanf(fp,"%f", &x719); 
   fscanf(fp,"%f", &x720); 
   fscanf(fp,"%f", &x721); 
   fscanf(fp,"%f", &x722); 
   fscanf(fp,"%f", &x723); 
   fscanf(fp,"%f", &x724); 
   fscanf(fp,"%f", &x725); 
   fscanf(fp,"%f", &x726); 
   fscanf(fp,"%f", &x727); 
   fscanf(fp,"%f", &x729); 
   fscanf(fp,"%f", &x730); 
   fscanf(fp,"%f", &x731); 
   fscanf(fp,"%f", &x732); 
   fscanf(fp,"%f", &x733); 
   fscanf(fp,"%f", &x734); 
   fscanf(fp,"%f", &x735); 
   fscanf(fp,"%f", &x736); 
   fscanf(fp,"%f", &x737); 
   fscanf(fp,"%f", &x738); 
   fscanf(fp,"%f", &x739); 
   fscanf(fp,"%f", &x740); 
   fscanf(fp,"%f", &x741); 
   fscanf(fp,"%f", &x743); 
   fscanf(fp,"%f", &x744); 
   fscanf(fp,"%f", &x745); 
   fscanf(fp,"%f", &x746); 
   fscanf(fp,"%f", &x747); 
   fscanf(fp,"%f", &x748); 
   fscanf(fp,"%f", &x749); 
   fscanf(fp,"%f", &x750); 
   fscanf(fp,"%f", &x751); 
   fscanf(fp,"%f", &x752); 
   fscanf(fp,"%f", &x753); 
   fscanf(fp,"%f", &x754); 
   fscanf(fp,"%f", &x755); 
   fscanf(fp,"%f", &x756); 
   fscanf(fp,"%f", &x757); 
   fscanf(fp,"%f", &x759); 
   fscanf(fp,"%f", &x760); 
   fscanf(fp,"%f", &x761); 
   fscanf(fp,"%f", &x762); 
   fscanf(fp,"%f", &x763); 
   fscanf(fp,"%f", &x764); 
   fscanf(fp,"%f", &x765); 
   fscanf(fp,"%f", &x766); 
   fscanf(fp,"%f", &x767); 
   fscanf(fp,"%f", &x768); 
   fscanf(fp,"%f", &x769); 
   fscanf(fp,"%f", &x770); 
   fscanf(fp,"%f", &x771); 
   fscanf(fp,"%f", &x772); 
   fscanf(fp,"%f", &x773); 
   fscanf(fp,"%f", &x775); 
   fscanf(fp,"%f", &x776); 
   fscanf(fp,"%f", &x777); 
   fscanf(fp,"%f", &x778); 
   fscanf(fp,"%f", &x779); 
   fscanf(fp,"%f", &x780); 
   fscanf(fp,"%f", &x781); 
   fscanf(fp,"%f", &x782); 
   fscanf(fp,"%f", &x783); 
   fscanf(fp,"%f", &x784); 
   fscanf(fp,"%f", &x785); 
   fscanf(fp,"%f", &x786); 
   fscanf(fp,"%f", &x787); 
   fscanf(fp,"%f", &x789); 
   fscanf(fp,"%f", &x790); 
   fscanf(fp,"%f", &x791); 
   fscanf(fp,"%f", &x792); 
   fscanf(fp,"%f", &x793); 
   fscanf(fp,"%f", &x794); 
   fscanf(fp,"%f", &x795); 
   fscanf(fp,"%f", &x796); 
   fscanf(fp,"%f", &x797); 
   fscanf(fp,"%f", &x798); 
   fscanf(fp,"%f", &x799); 
   fscanf(fp,"%f", &x800); 
   fscanf(fp,"%f", &x801); 
   fscanf(fp,"%f", &x802); 
   fscanf(fp,"%f", &x803); 
   fscanf(fp,"%f", &x805); 
   fscanf(fp,"%f", &x806); 
   fscanf(fp,"%f", &x807); 
   fscanf(fp,"%f", &x808); 
   fscanf(fp,"%f", &x809); 
   fscanf(fp,"%f", &x810); 
   fscanf(fp,"%f", &x811); 
   fscanf(fp,"%f", &x812); 
   fscanf(fp,"%f", &x813); 
   fscanf(fp,"%f", &x814); 
   fscanf(fp,"%f", &x815); 
   fscanf(fp,"%f", &x816); 
   fscanf(fp,"%f", &x817); 
   fscanf(fp,"%f", &x819); 
   fscanf(fp,"%f", &x820); 
   fscanf(fp,"%f", &x821); 
   fscanf(fp,"%f", &x822); 
   fscanf(fp,"%f", &x823); 
   fscanf(fp,"%f", &x824); 
   fscanf(fp,"%f", &x825); 
   fscanf(fp,"%f", &x826); 
   fscanf(fp,"%f", &x827); 
   fscanf(fp,"%f", &x828); 
   fscanf(fp,"%f", &x829); 
   fscanf(fp,"%f", &x830); 
   fscanf(fp,"%f", &x831); 
   fscanf(fp,"%f", &x832); 
   fscanf(fp,"%f", &x833); 

   fclose(fp);
   res=-( + 10*x322 + 9.5*x323 + 9*x324 + 8.5*x325 + 8*x326 + 7.5*x327
 + 7*x328 + 6.5*x329 + 6*x330 + 5.5*x331 + 5*x332 + 4.5*x333 + 4*x334
 + 3.5*x335 + 3*x336 + 2.5*x337 + 9*x338 + 8.5*x339 + 8*x340 + 7.5*x341
 + 7*x342 + 6.5*x343 + 6*x344 + 5.5*x345 + 5*x346 + 4.5*x347 + 4*x348
 + 3.5*x349 + 3*x350 + 2.5*x351 + 2*x352 + 1.5*x353 + 9*x354 + 8.5*x355
 + 8*x356 + 7.5*x357 + 7*x358 + 6.5*x359 + 6*x360 + 5.5*x361 + 5*x362
 + 4.5*x363 + 4*x364 + 3.5*x365 + 3*x366 + 2.5*x367 + 2*x368 + 1.5*x369
 + 8*x370 + 7.5*x371 + 7*x372 + 6.5*x373 + 6*x374 + 5.5*x375 + 5*x376
 + 4.5*x377 + 4*x378 + 3.5*x379 + 3*x380 + 2.5*x381 + 2*x382 + 1.5*x383
 + x384 + 0.5*x385 + 8*x386 + 7.5*x387 + 7*x388 + 6.5*x389 + 6*x390
 + 5.5*x391 + 5*x392 + 4.5*x393 + 4*x394 + 3.5*x395 + 3*x396 + 2.5*x397
 + 2*x398 + 1.5*x399 + x400 + 0.5*x401 + 8*x402 + 7.5*x403 + 7*x404
 + 6.5*x405 + 6*x406 + 5.5*x407 + 5*x408 + 4.5*x409 + 4*x410 + 3.5*x411
 + 3*x412 + 2.5*x413 + 2*x414 + 1.5*x415 + x416 + 0.5*x417 + 7*x418
 + 6.5*x419 + 6*x420 + 5.5*x421 + 5*x422 + 4.5*x423 + 4*x424 + 3.5*x425
 + 3*x426 + 2.5*x427 + 2*x428 + 1.5*x429 + x430 + 0.5*x431 - 0.5*x433
 + 7*x434 + 6.5*x435 + 6*x436 + 5.5*x437 + 5*x438 + 4.5*x439 + 4*x440
 + 3.5*x441 + 3*x442 + 2.5*x443 + 2*x444 + 1.5*x445 + x446 + 0.5*x447
 - 0.5*x449 + 7*x450 + 6.5*x451 + 6*x452 + 5.5*x453 + 5*x454 + 4.5*x455
 + 4*x456 + 3.5*x457 + 3*x458 + 2.5*x459 + 2*x460 + 1.5*x461 + x462
 + 0.5*x463 - 0.5*x465 + 7*x466 + 6.5*x467 + 6*x468 + 5.5*x469 + 5*x470
 + 4.5*x471 + 4*x472 + 3.5*x473 + 3*x474 + 2.5*x475 + 2*x476 + 1.5*x477
 + x478 + 0.5*x479 - 0.5*x481 + 6*x482 + 5.5*x483 + 5*x484 + 4.5*x485
 + 4*x486 + 3.5*x487 + 3*x488 + 2.5*x489 + 2*x490 + 1.5*x491 + x492
 + 0.5*x493 - 0.5*x495 - x496 - 1.5*x497 + 6*x498 + 5.5*x499 + 5*x500
 + 4.5*x501 + 4*x502 + 3.5*x503 + 3*x504 + 2.5*x505 + 2*x506 + 1.5*x507
 + x508 + 0.5*x509 - 0.5*x511 - x512 - 1.5*x513 + 6*x514 + 5.5*x515
 + 5*x516 + 4.5*x517 + 4*x518 + 3.5*x519 + 3*x520 + 2.5*x521 + 2*x522
 + 1.5*x523 + x524 + 0.5*x525 - 0.5*x527 - x528 - 1.5*x529 + 6*x530
 + 5.5*x531 + 5*x532 + 4.5*x533 + 4*x534 + 3.5*x535 + 3*x536 + 2.5*x537
 + 2*x538 + 1.5*x539 + x540 + 0.5*x541 - 0.5*x543 - x544 - 1.5*x545
 + 5*x546 + 4.5*x547 + 4*x548 + 3.5*x549 + 3*x550 + 2.5*x551 + 2*x552
 + 1.5*x553 + x554 + 0.5*x555 - 0.5*x557 - x558 - 1.5*x559 - 2*x560
 - 2.5*x561 + 5*x562 + 4.5*x563 + 4*x564 + 3.5*x565 + 3*x566 + 2.5*x567
 + 2*x568 + 1.5*x569 + x570 + 0.5*x571 - 0.5*x573 - x574 - 1.5*x575
 - 2*x576 - 2.5*x577 + 5*x578 + 4.5*x579 + 4*x580 + 3.5*x581 + 3*x582
 + 2.5*x583 + 2*x584 + 1.5*x585 + x586 + 0.5*x587 - 0.5*x589 - x590
 - 1.5*x591 - 2*x592 - 2.5*x593 + 5*x594 + 4.5*x595 + 4*x596 + 3.5*x597
 + 3*x598 + 2.5*x599 + 2*x600 + 1.5*x601 + x602 + 0.5*x603 - 0.5*x605
 - x606 - 1.5*x607 - 2*x608 - 2.5*x609 + 4*x610 + 3.5*x611 + 3*x612
 + 2.5*x613 + 2*x614 + 1.5*x615 + x616 + 0.5*x617 - 0.5*x619 - x620
 - 1.5*x621 - 2*x622 - 2.5*x623 - 3*x624 - 3.5*x625 + 4*x626 + 3.5*x627
 + 3*x628 + 2.5*x629 + 2*x630 + 1.5*x631 + x632 + 0.5*x633 - 0.5*x635
 - x636 - 1.5*x637 - 2*x638 - 2.5*x639 - 3*x640 - 3.5*x641 + 4*x642
 + 3.5*x643 + 3*x644 + 2.5*x645 + 2*x646 + 1.5*x647 + x648 + 0.5*x649
 - 0.5*x651 - x652 - 1.5*x653 - 2*x654 - 2.5*x655 - 3*x656 - 3.5*x657
 + 4*x658 + 3.5*x659 + 3*x660 + 2.5*x661 + 2*x662 + 1.5*x663 + x664
 + 0.5*x665 - 0.5*x667 - x668 - 1.5*x669 - 2*x670 - 2.5*x671 - 3*x672
 - 3.5*x673 + 3*x674 + 2.5*x675 + 2*x676 + 1.5*x677 + x678 + 0.5*x679
 - 0.5*x681 - x682 - 1.5*x683 - 2*x684 - 2.5*x685 - 3*x686 - 3.5*x687
 - 4*x688 - 4.5*x689 + 3*x690 + 2.5*x691 + 2*x692 + 1.5*x693 + x694
 + 0.5*x695 - 0.5*x697 - x698 - 1.5*x699 - 2*x700 - 2.5*x701 - 3*x702
 - 3.5*x703 - 4*x704 - 4.5*x705 + 3*x706 + 2.5*x707 + 2*x708 + 1.5*x709
 + x710 + 0.5*x711 - 0.5*x713 - x714 - 1.5*x715 - 2*x716 - 2.5*x717
 - 3*x718 - 3.5*x719 - 4*x720 - 4.5*x721 + 3*x722 + 2.5*x723 + 2*x724
 + 1.5*x725 + x726 + 0.5*x727 - 0.5*x729 - x730 - 1.5*x731 - 2*x732
 - 2.5*x733 - 3*x734 - 3.5*x735 - 4*x736 - 4.5*x737 + 2*x738 + 1.5*x739
 + x740 + 0.5*x741 - 0.5*x743 - x744 - 1.5*x745 - 2*x746 - 2.5*x747
 - 3*x748 - 3.5*x749 - 4*x750 - 4.5*x751 - 5*x752 - 5.5*x753 + 2*x754
 + 1.5*x755 + x756 + 0.5*x757 - 0.5*x759 - x760 - 1.5*x761 - 2*x762
 - 2.5*x763 - 3*x764 - 3.5*x765 - 4*x766 - 4.5*x767 - 5*x768 - 5.5*x769
 + 2*x770 + 1.5*x771 + x772 + 0.5*x773 - 0.5*x775 - x776 - 1.5*x777
 - 2*x778 - 2.5*x779 - 3*x780 - 3.5*x781 - 4*x782 - 4.5*x783 - 5*x784
 - 5.5*x785 + x786 + 0.5*x787 - 0.5*x789 - x790 - 1.5*x791 - 2*x792
 - 2.5*x793 - 3*x794 - 3.5*x795 - 4*x796 - 4.5*x797 - 5*x798 - 5.5*x799
 - 6*x800 - 6.5*x801 + x802 + 0.5*x803 - 0.5*x805 - x806 - 1.5*x807
 - 2*x808 - 2.5*x809 - 3*x810 - 3.5*x811 - 4*x812 - 4.5*x813 - 5*x814
 - 5.5*x815 - 6*x816 - 6.5*x817 - 0.5*x819 - x820 - 1.5*x821 - 2*x822
 - 2.5*x823 - 3*x824 - 3.5*x825 - 4*x826 - 4.5*x827 - 5*x828 - 5.5*x829
 - 6*x830 - 6.5*x831 - 7*x832 - 7.5*x833 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
