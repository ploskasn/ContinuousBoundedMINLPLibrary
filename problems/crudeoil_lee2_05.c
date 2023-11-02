#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_lee2_05";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x412,x413,x414,x415,x416,x417,x418,x419,x420,x421,x422,x423,x424,x425,x426,x427,x428,x429,x430,x431,x432,x433,x434,x435,x496,x497,x498,x499,x500,x501,x502,x503,x504,x505,x506,x507,x508,x509,x510,x511,x512,x513,x514,x515,x516,x517,x518,x519,x580,x581,x582,x583,x584,x585,x586,x587,x588,x589,x590,x591,x592,x593,x594,x595,x596,x597,x598,x599,x600,x601,x602,x603,x664,x665,x666,x667,x668,x669,x670,x671,x672,x673,x674,x675,x676,x677,x678,x679,x680,x681,x682,x683,x684,x685,x686,x687,x748,x749,x750,x751,x752,x753,x754,x755,x756,x757,x758,x759,x760,x761,x762,x763,x764,x765,x766,x767,x768,x769,x770,x771;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &x674); 
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
   fscanf(fp,"%f", &x758); 
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

   fclose(fp);
   res=-( - 0.1*x412 - 0.3*x413 - 0.5*x414 - 0.167*x415 - 0.3*x416
 - 0.433*x417 - 0.1*x418 - 0.3*x419 - 0.5*x420 - 0.167*x421 - 0.3*x422
 - 0.433*x423 - 0.1*x424 - 0.3*x425 - 0.5*x426 - 0.167*x427 - 0.3*x428
 - 0.433*x429 - 0.1*x430 - 0.3*x431 - 0.5*x432 - 0.167*x433 - 0.3*x434
 - 0.433*x435 - 0.1*x496 - 0.3*x497 - 0.5*x498 - 0.167*x499 - 0.3*x500
 - 0.433*x501 - 0.1*x502 - 0.3*x503 - 0.5*x504 - 0.167*x505 - 0.3*x506
 - 0.433*x507 - 0.1*x508 - 0.3*x509 - 0.5*x510 - 0.167*x511 - 0.3*x512
 - 0.433*x513 - 0.1*x514 - 0.3*x515 - 0.5*x516 - 0.167*x517 - 0.3*x518
 - 0.433*x519 - 0.1*x580 - 0.3*x581 - 0.5*x582 - 0.167*x583 - 0.3*x584
 - 0.433*x585 - 0.1*x586 - 0.3*x587 - 0.5*x588 - 0.167*x589 - 0.3*x590
 - 0.433*x591 - 0.1*x592 - 0.3*x593 - 0.5*x594 - 0.167*x595 - 0.3*x596
 - 0.433*x597 - 0.1*x598 - 0.3*x599 - 0.5*x600 - 0.167*x601 - 0.3*x602
 - 0.433*x603 - 0.1*x664 - 0.3*x665 - 0.5*x666 - 0.167*x667 - 0.3*x668
 - 0.433*x669 - 0.1*x670 - 0.3*x671 - 0.5*x672 - 0.167*x673 - 0.3*x674
 - 0.433*x675 - 0.1*x676 - 0.3*x677 - 0.5*x678 - 0.167*x679 - 0.3*x680
 - 0.433*x681 - 0.1*x682 - 0.3*x683 - 0.5*x684 - 0.167*x685 - 0.3*x686
 - 0.433*x687 - 0.1*x748 - 0.3*x749 - 0.5*x750 - 0.167*x751 - 0.3*x752
 - 0.433*x753 - 0.1*x754 - 0.3*x755 - 0.5*x756 - 0.167*x757 - 0.3*x758
 - 0.433*x759 - 0.1*x760 - 0.3*x761 - 0.5*x762 - 0.167*x763 - 0.3*x764
 - 0.433*x765 - 0.1*x766 - 0.3*x767 - 0.5*x768 - 0.167*x769 - 0.3*x770
 - 0.433*x771 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
