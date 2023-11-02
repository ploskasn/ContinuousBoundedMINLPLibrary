#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="portfol_shortfall200_05";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x404,x405,x406,x407,x408,x409,x410,x411,x412,x413,x414,x415,x416,x417,x418,x419,x420,x421,x422,x423,x424,x425,x426,x427,x428,x429,x430,x431,x432,x433,x434,x435,x436,x437,x438,x439,x440,x441,x442,x443,x444,x445,x446,x447,x448,x449,x450,x451,x452,x453,x454,x455,x456,x457,x458,x459,x460,x461,x462,x463,x464,x465,x466,x467,x468,x469,x470,x471,x472,x473,x474,x475,x476,x477,x478,x479,x480,x481,x482,x483,x484,x485,x486,x487,x488,x489,x490,x491,x492,x493,x494,x495,x496,x497,x498,x499,x500,x501,x502,x503,x504,x505,x506,x507,x508,x509,x510,x511,x512,x513,x514,x515,x516,x517,x518,x519,x520,x521,x522,x523,x524,x525,x526,x527,x528,x529,x530,x531,x532,x533,x534,x535,x536,x537,x538,x539,x540,x541,x542,x543,x544,x545,x546,x547,x548,x549,x550,x551,x552,x553,x554,x555,x556,x557,x558,x559,x560,x561,x562,x563,x564,x565,x566,x567,x568,x569,x570,x571,x572,x573,x574,x575,x576,x577,x578,x579,x580,x581,x582,x583,x584,x585,x586,x587,x588,x589,x590,x591,x592,x593,x594,x595,x596,x597,x598,x599,x600,x601,x602,x603,x604;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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

   fclose(fp);
   res= - 1.12393*x404 - 1.07647*x405 - 1.06236*x406 - 1.08505*x407
 - 1.02991*x408 - 1.0789*x409 - 1.08968*x410 - 1.0411*x411 - 1.04867*x412
 - 1.13159*x413 - 1.20097*x414 - 1.01532*x415 - 1.02976*x416
 - 1.26511*x417 - 1.05387*x418 - 1.03898*x419 - 1.08004*x420
 - 1.14741*x421 - 1.02969*x422 - 1.10319*x423 - 1.02066*x424
 - 1.07261*x425 - 1.05018*x426 - 1.01511*x427 - 1.05595*x428
 - 1.03332*x429 - 1.03832*x430 - 1.02402*x431 - 1.06215*x432
 - 1.02891*x433 - 1.05706*x434 - 1.04481*x435 - 1.02986*x436
 - 1.12361*x437 - 1.03489*x438 - 1.03353*x439 - 1.14007*x440
 - 1.04362*x441 - 1.01307*x442 - 1.01925*x443 - 1.01446*x444
 - 1.02736*x445 - 1.0124*x446 - 1.0414*x447 - 1.02477*x448 - 1.03477*x449
 - 1.07433*x450 - 1.07669*x451 - 1.06937*x452 - 1.05229*x453
 - 1.06233*x454 - 1.03847*x455 - 1.0215*x456 - 1.02237*x457 - 1.18805*x458
 - 1.0358*x459 - 1.10724*x460 - 1.11679*x461 - 1.04425*x462 - 1.09529*x463
 - 1.03803*x464 - 1.0376*x465 - 1.00423*x466 - 1.04879*x467 - 1.05923*x468
 - 1.05906*x469 - 1.02718*x470 - 1.06929*x471 - 1.04497*x472
 - 1.14871*x473 - 1.0269*x474 - 1.0424*x475 - 1.05721*x476 - 1.14284*x477
 - 1.02561*x478 - 1.06955*x479 - 1.05229*x480 - 1.0125*x481 - 1.0715*x482
 - 1.15332*x483 - 1.01845*x484 - 1.02954*x485 - 1.03997*x486
 - 1.02657*x487 - 1.08207*x488 - 1.12841*x489 - 1.16381*x490
 - 1.05333*x491 - 1.12696*x492 - 1.02466*x493 - 1.14358*x494
 - 1.06313*x495 - 1.08849*x496 - 1.01221*x497 - 1.11836*x498
 - 1.03962*x499 - 1.16949*x500 - 1.27538*x501 - 1.10148*x502
 - 1.12822*x503 - 1.06697*x504 - 1.11078*x505 - 1.07552*x506 - 1.0704*x507
 - 1.08781*x508 - 1.0165*x509 - 1.09529*x510 - 1.06134*x511 - 1.10712*x512
 - 1.04422*x513 - 1.03353*x514 - 1.07423*x515 - 1.02202*x516
 - 1.07872*x517 - 1.01917*x518 - 1.15397*x519 - 1.06126*x520
 - 1.04201*x521 - 1.03411*x522 - 1.06765*x523 - 1.02319*x524
 - 1.10642*x525 - 1.14925*x526 - 1.02537*x527 - 1.0738*x528 - 1.07618*x529
 - 1.02642*x530 - 1.0781*x531 - 1.02637*x532 - 1.03635*x533 - 1.09887*x534
 - 1.02101*x535 - 1.02235*x536 - 1.04062*x537 - 1.07732*x538
 - 1.03744*x539 - 1.01321*x540 - 1.09032*x541 - 1.00361*x542
 - 1.04592*x543 - 1.05257*x544 - 1.05015*x545 - 1.05947*x546
 - 1.09366*x547 - 1.0378*x548 - 1.01287*x549 - 1.19748*x550 - 1.02824*x551
 - 1.10353*x552 - 1.0782*x553 - 1.01978*x554 - 1.20829*x555 - 1.02233*x556
 - 1.01553*x557 - 1.03088*x558 - 1.11063*x559 - 1.03074*x560
 - 1.05429*x561 - 1.00515*x562 - 1.0449*x563 - 1.05028*x564 - 1.07704*x565
 - 1.04278*x566 - 1.22312*x567 - 1.01138*x568 - 1.05409*x569
 - 1.03311*x570 - 1.04379*x571 - 1.04287*x572 - 1.07335*x573
 - 1.03253*x574 - 1.06574*x575 - 1.07843*x576 - 1.0484*x577 - 1.05337*x578
 - 1.06826*x579 - 1.02768*x580 - 1.02672*x581 - 1.01629*x582
 - 1.05973*x583 - 1.0355*x584 - 1.08327*x585 - 1.03045*x586 - 1.09331*x587
 - 1.02902*x588 - 1.07546*x589 - 1.03778*x590 - 1.3711*x591 - 1.04576*x592
 - 1.02702*x593 - 1.07806*x594 - 1.04267*x595 - 1.15804*x596
 - 1.12742*x597 - 1.02605*x598 - 1.05459*x599 - 1.03091*x600
 - 1.23973*x601 - 1.02759*x602 - 1.03358*x603 - x604 ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
