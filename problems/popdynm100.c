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
   char *problemname="popdynm100";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x2,x3,x4,x5,x6,x7,x8,x41,x42,x43,x44,x45,x46,x47,x48,x81,x82,x83,x84,x85,x86,x87,x88,x121,x122,x123,x124,x125,x126,x127,x128,x161,x162,x163,x164,x165,x166,x167,x168,x201,x202,x203,x204,x205,x206,x207,x208,x241,x242,x243,x244,x245,x246,x247,x248,x281,x282,x283,x284,x285,x286,x287,x288,x321,x322,x323,x324,x325,x326,x327,x328,x361,x362,x363,x364,x365,x366,x367,x368,x401,x402,x403,x404,x405,x406,x407,x408,x441,x442,x443,x444,x445,x446,x447,x448,x481,x482,x483,x484,x485,x486,x487,x488,x521,x522,x523,x524,x525,x526,x527,x528,x561,x562,x563,x564,x565,x566,x567,x568,x601,x602,x603,x604,x605,x606,x607,x608,x641,x642,x643,x644,x645,x646,x647,x648,x681,x682,x683,x684,x685,x686,x687,x688,x721,x722,x723,x724,x725,x726,x727,x728,x761,x762,x763,x764,x765,x766,x767,x768,x793,x2385,x2393,x794,x2386,x2394,x795,x2387,x2395,x796,x2388,x2396,x797,x2389,x2397,x798,x2390,x2398,x799,x2391,x2399,x800,x2392,x2400;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x121); 
   fscanf(fp,"%f", &x122); 
   fscanf(fp,"%f", &x123); 
   fscanf(fp,"%f", &x124); 
   fscanf(fp,"%f", &x125); 
   fscanf(fp,"%f", &x126); 
   fscanf(fp,"%f", &x127); 
   fscanf(fp,"%f", &x128); 
   fscanf(fp,"%f", &x161); 
   fscanf(fp,"%f", &x162); 
   fscanf(fp,"%f", &x163); 
   fscanf(fp,"%f", &x164); 
   fscanf(fp,"%f", &x165); 
   fscanf(fp,"%f", &x166); 
   fscanf(fp,"%f", &x167); 
   fscanf(fp,"%f", &x168); 
   fscanf(fp,"%f", &x201); 
   fscanf(fp,"%f", &x202); 
   fscanf(fp,"%f", &x203); 
   fscanf(fp,"%f", &x204); 
   fscanf(fp,"%f", &x205); 
   fscanf(fp,"%f", &x206); 
   fscanf(fp,"%f", &x207); 
   fscanf(fp,"%f", &x208); 
   fscanf(fp,"%f", &x241); 
   fscanf(fp,"%f", &x242); 
   fscanf(fp,"%f", &x243); 
   fscanf(fp,"%f", &x244); 
   fscanf(fp,"%f", &x245); 
   fscanf(fp,"%f", &x246); 
   fscanf(fp,"%f", &x247); 
   fscanf(fp,"%f", &x248); 
   fscanf(fp,"%f", &x281); 
   fscanf(fp,"%f", &x282); 
   fscanf(fp,"%f", &x283); 
   fscanf(fp,"%f", &x284); 
   fscanf(fp,"%f", &x285); 
   fscanf(fp,"%f", &x286); 
   fscanf(fp,"%f", &x287); 
   fscanf(fp,"%f", &x288); 
   fscanf(fp,"%f", &x321); 
   fscanf(fp,"%f", &x322); 
   fscanf(fp,"%f", &x323); 
   fscanf(fp,"%f", &x324); 
   fscanf(fp,"%f", &x325); 
   fscanf(fp,"%f", &x326); 
   fscanf(fp,"%f", &x327); 
   fscanf(fp,"%f", &x328); 
   fscanf(fp,"%f", &x361); 
   fscanf(fp,"%f", &x362); 
   fscanf(fp,"%f", &x363); 
   fscanf(fp,"%f", &x364); 
   fscanf(fp,"%f", &x365); 
   fscanf(fp,"%f", &x366); 
   fscanf(fp,"%f", &x367); 
   fscanf(fp,"%f", &x368); 
   fscanf(fp,"%f", &x401); 
   fscanf(fp,"%f", &x402); 
   fscanf(fp,"%f", &x403); 
   fscanf(fp,"%f", &x404); 
   fscanf(fp,"%f", &x405); 
   fscanf(fp,"%f", &x406); 
   fscanf(fp,"%f", &x407); 
   fscanf(fp,"%f", &x408); 
   fscanf(fp,"%f", &x441); 
   fscanf(fp,"%f", &x442); 
   fscanf(fp,"%f", &x443); 
   fscanf(fp,"%f", &x444); 
   fscanf(fp,"%f", &x445); 
   fscanf(fp,"%f", &x446); 
   fscanf(fp,"%f", &x447); 
   fscanf(fp,"%f", &x448); 
   fscanf(fp,"%f", &x481); 
   fscanf(fp,"%f", &x482); 
   fscanf(fp,"%f", &x483); 
   fscanf(fp,"%f", &x484); 
   fscanf(fp,"%f", &x485); 
   fscanf(fp,"%f", &x486); 
   fscanf(fp,"%f", &x487); 
   fscanf(fp,"%f", &x488); 
   fscanf(fp,"%f", &x521); 
   fscanf(fp,"%f", &x522); 
   fscanf(fp,"%f", &x523); 
   fscanf(fp,"%f", &x524); 
   fscanf(fp,"%f", &x525); 
   fscanf(fp,"%f", &x526); 
   fscanf(fp,"%f", &x527); 
   fscanf(fp,"%f", &x528); 
   fscanf(fp,"%f", &x561); 
   fscanf(fp,"%f", &x562); 
   fscanf(fp,"%f", &x563); 
   fscanf(fp,"%f", &x564); 
   fscanf(fp,"%f", &x565); 
   fscanf(fp,"%f", &x566); 
   fscanf(fp,"%f", &x567); 
   fscanf(fp,"%f", &x568); 
   fscanf(fp,"%f", &x601); 
   fscanf(fp,"%f", &x602); 
   fscanf(fp,"%f", &x603); 
   fscanf(fp,"%f", &x604); 
   fscanf(fp,"%f", &x605); 
   fscanf(fp,"%f", &x606); 
   fscanf(fp,"%f", &x607); 
   fscanf(fp,"%f", &x608); 
   fscanf(fp,"%f", &x641); 
   fscanf(fp,"%f", &x642); 
   fscanf(fp,"%f", &x643); 
   fscanf(fp,"%f", &x644); 
   fscanf(fp,"%f", &x645); 
   fscanf(fp,"%f", &x646); 
   fscanf(fp,"%f", &x647); 
   fscanf(fp,"%f", &x648); 
   fscanf(fp,"%f", &x681); 
   fscanf(fp,"%f", &x682); 
   fscanf(fp,"%f", &x683); 
   fscanf(fp,"%f", &x684); 
   fscanf(fp,"%f", &x685); 
   fscanf(fp,"%f", &x686); 
   fscanf(fp,"%f", &x687); 
   fscanf(fp,"%f", &x688); 
   fscanf(fp,"%f", &x721); 
   fscanf(fp,"%f", &x722); 
   fscanf(fp,"%f", &x723); 
   fscanf(fp,"%f", &x724); 
   fscanf(fp,"%f", &x725); 
   fscanf(fp,"%f", &x726); 
   fscanf(fp,"%f", &x727); 
   fscanf(fp,"%f", &x728); 
   fscanf(fp,"%f", &x761); 
   fscanf(fp,"%f", &x762); 
   fscanf(fp,"%f", &x763); 
   fscanf(fp,"%f", &x764); 
   fscanf(fp,"%f", &x765); 
   fscanf(fp,"%f", &x766); 
   fscanf(fp,"%f", &x767); 
   fscanf(fp,"%f", &x768); 
   fscanf(fp,"%f", &x793); 
   fscanf(fp,"%f", &x2385); 
   fscanf(fp,"%f", &x2393); 
   fscanf(fp,"%f", &x794); 
   fscanf(fp,"%f", &x2386); 
   fscanf(fp,"%f", &x2394); 
   fscanf(fp,"%f", &x795); 
   fscanf(fp,"%f", &x2387); 
   fscanf(fp,"%f", &x2395); 
   fscanf(fp,"%f", &x796); 
   fscanf(fp,"%f", &x2388); 
   fscanf(fp,"%f", &x2396); 
   fscanf(fp,"%f", &x797); 
   fscanf(fp,"%f", &x2389); 
   fscanf(fp,"%f", &x2397); 
   fscanf(fp,"%f", &x798); 
   fscanf(fp,"%f", &x2390); 
   fscanf(fp,"%f", &x2398); 
   fscanf(fp,"%f", &x799); 
   fscanf(fp,"%f", &x2391); 
   fscanf(fp,"%f", &x2399); 
   fscanf(fp,"%f", &x800); 
   fscanf(fp,"%f", &x2392); 
   fscanf(fp,"%f", &x2400); 

   fclose(fp);
   res=-( + (-(sqr((-20000) + x1) + sqr((-17000) + x2) + sqr((-10000) + x3) + sqr((-
   15000) + x4) + sqr((-12000) + x5) + sqr((-9000) + x6) + sqr((-7000) +
    x7) + sqr((-3000) + x8) + sqr((-12445) + x41) + sqr((-15411) + x42) +
    sqr((-13040) + x43) + sqr((-13338) + x44) + sqr((-13484) + x45) + sqr((
   -8426) + x46) + sqr((-6615) + x47) + sqr((-4022) + x48) + sqr((-7705)
    + x81) + sqr((-13074) + x82) + sqr((-14623) + x83) + sqr((-11976) +
    x84) + sqr((-12453) + x85) + sqr((-9272) + x86) + sqr((-6891) + x87) +
    sqr((-5020) + x88) + sqr((-4664) + x121) + sqr((-8579) + x122) + sqr((-
   12434) + x123) + sqr((-12603) + x124) + sqr((-11738) + x125) + sqr((-
   9710) + x126) + sqr((-6821) + x127) + sqr((-5722) + x128) + sqr((-2977)
    + x161) + sqr((-7053) + x162) + sqr((-11219) + x163) + sqr((-11340) +
    x164) + sqr((-13665) + x165) + sqr((-8534) + x166) + sqr((-6242) + x167
   ) + sqr((-5695) + x168) + sqr((-1769) + x201) + sqr((-5054) + x202) +
    sqr((-10065) + x203) + sqr((-11232) + x204) + sqr((-12112) + x205) +
    sqr((-9600) + x206) + sqr((-6647) + x207) + sqr((-7034) + x208) + sqr((
   -943) + x241) + sqr((-3907) + x242) + sqr((-9473) + x243) + sqr((-10334
   ) + x244) + sqr((-11115) + x245) + sqr((-8826) + x246) + sqr((-6842) +
    x247) + sqr((-7348) + x248) + sqr((-581) + x281) + sqr((-2624) + x282)
    + sqr((-7421) + x283) + sqr((-10297) + x284) + sqr((-12427) + x285) +
    sqr((-8747) + x286) + sqr((-7199) + x287) + sqr((-7684) + x288) + sqr((
   -355) + x321) + sqr((-1744) + x322) + sqr((-5369) + x323) + sqr((-7748)
    + x324) + sqr((-10057) + x325) + sqr((-8698) + x326) + sqr((-6542) +
    x327) + sqr((-7410) + x328) + sqr((-223) + x361) + sqr((-1272) + x362)
    + sqr((-4713) + x363) + sqr((-6869) + x364) + sqr((-9564) + x365) +
    sqr((-8766) + x366) + sqr((-6810) + x367) + sqr((-6961) + x368) + sqr((
   -137) + x401) + sqr((-821) + x402) + sqr((-3451) + x403) + sqr((-6050)
    + x404) + sqr((-8671) + x405) + sqr((-8291) + x406) + sqr((-6827) +
    x407) + sqr((-7525) + x408) + sqr((-87) + x441) + sqr((-577) + x442) +
    sqr((-2649) + x443) + sqr((-5454) + x444) + sqr((-8430) + x445) + sqr((
   -7411) + x446) + sqr((-6423) + x447) + sqr((-8388) + x448) + sqr((-49)
    + x481) + sqr((-337) + x482) + sqr((-2058) + x483) + sqr((-4115) +
    x484) + sqr((-7435) + x485) + sqr((-7627) + x486) + sqr((-6268) + x487)
    + sqr((-7189) + x488) + sqr((-32) + x521) + sqr((-228) + x522) + sqr((
   -1440) + x523) + sqr((-3790) + x524) + sqr((-6474) + x525) + sqr((-6658
   ) + x526) + sqr((-5859) + x527) + sqr((-7467) + x528) + sqr((-17) +
    x561) + sqr((-168) + x562) + sqr((-1178) + x563) + sqr((-3087) + x564)
    + sqr((-6524) + x565) + sqr((-5880) + x566) + sqr((-5562) + x567) +
    sqr((-7144) + x568) + sqr((-11) + x601) + sqr((-99) + x602) + sqr((-919
   ) + x603) + sqr((-2596) + x604) + sqr((-5360) + x605) + sqr((-5762) +
    x606) + sqr((-4480) + x607) + sqr((-7256) + x608) + sqr((-7) + x641) +
    sqr((-65) + x642) + sqr((-647) + x643) + sqr((-1873) + x644) + sqr((-
   4556) + x645) + sqr((-5058) + x646) + sqr((-4944) + x647) + sqr((-7538)
    + x648) + sqr((-4) + x681) + sqr((-44) + x682) + sqr((-509) + x683) +
    sqr((-1571) + x684) + sqr((-4009) + x685) + sqr((-4527) + x686) + sqr((
   -4233) + x687) + sqr((-6649) + x688) + sqr((-2) + x721) + sqr((-27) +
    x722) + sqr((-345) + x723) + sqr((-1227) + x724) + sqr((-3677) + x725)
    + sqr((-4229) + x726) + sqr((-3805) + x727) + sqr((-6378) + x728) +
    sqr((-1) + x761) + sqr((-20) + x762) + sqr((-231) + x763) + sqr((-934)
    + x764) + sqr((-3197) + x765) + sqr((-3695) + x766) + sqr((-3159) +
    x767) + sqr((-6454) + x768) + sqr((-1) + x793 + 0.0999999999999996*
   x2385 + 0.0499999999999996*x2393) + sqr((-12) + x794 +
    0.0999999999999996*x2386 + 0.0499999999999996*x2394) + sqr((-198) +
    x795 + 0.0999999999999996*x2387 + 0.0499999999999996*x2395) + sqr((-707
   ) + x796 + 0.0999999999999996*x2388 + 0.0499999999999996*x2396) + sqr((
   -2562) + x797 + 0.0999999999999996*x2389 + 0.0499999999999996*x2397) +
    sqr((-3163) + x798 + 0.0999999999999996*x2390 + 0.0499999999999996*
   x2398) + sqr((-3232) + x799 + 0.0999999999999996*x2391 +
    0.0499999999999996*x2399) + sqr((-5566) + x800 + 0.0999999999999996*
   x2392 + 0.0499999999999996*x2400)))/ 1000 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
