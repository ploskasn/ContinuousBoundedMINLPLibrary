#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_lee2_06";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x482,x483,x484,x485,x486,x487,x488,x489,x490,x491,x492,x493,x494,x495,x496,x497,x498,x499,x500,x501,x502,x503,x504,x505,x566,x567,x568,x569,x570,x571,x572,x573,x574,x575,x576,x577,x578,x579,x580,x581,x582,x583,x584,x585,x586,x587,x588,x589,x650,x651,x652,x653,x654,x655,x656,x657,x658,x659,x660,x661,x662,x663,x664,x665,x666,x667,x668,x669,x670,x671,x672,x673,x734,x735,x736,x737,x738,x739,x740,x741,x742,x743,x744,x745,x746,x747,x748,x749,x750,x751,x752,x753,x754,x755,x756,x757,x818,x819,x820,x821,x822,x823,x824,x825,x826,x827,x828,x829,x830,x831,x832,x833,x834,x835,x836,x837,x838,x839,x840,x841,x902,x903,x904,x905,x906,x907,x908,x909,x910,x911,x912,x913,x914,x915,x916,x917,x918,x919,x920,x921,x922,x923,x924,x925;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &x734); 
   fscanf(fp,"%f", &x735); 
   fscanf(fp,"%f", &x736); 
   fscanf(fp,"%f", &x737); 
   fscanf(fp,"%f", &x738); 
   fscanf(fp,"%f", &x739); 
   fscanf(fp,"%f", &x740); 
   fscanf(fp,"%f", &x741); 
   fscanf(fp,"%f", &x742); 
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
   fscanf(fp,"%f", &x818); 
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
   fscanf(fp,"%f", &x834); 
   fscanf(fp,"%f", &x835); 
   fscanf(fp,"%f", &x836); 
   fscanf(fp,"%f", &x837); 
   fscanf(fp,"%f", &x838); 
   fscanf(fp,"%f", &x839); 
   fscanf(fp,"%f", &x840); 
   fscanf(fp,"%f", &x841); 
   fscanf(fp,"%f", &x902); 
   fscanf(fp,"%f", &x903); 
   fscanf(fp,"%f", &x904); 
   fscanf(fp,"%f", &x905); 
   fscanf(fp,"%f", &x906); 
   fscanf(fp,"%f", &x907); 
   fscanf(fp,"%f", &x908); 
   fscanf(fp,"%f", &x909); 
   fscanf(fp,"%f", &x910); 
   fscanf(fp,"%f", &x911); 
   fscanf(fp,"%f", &x912); 
   fscanf(fp,"%f", &x913); 
   fscanf(fp,"%f", &x914); 
   fscanf(fp,"%f", &x915); 
   fscanf(fp,"%f", &x916); 
   fscanf(fp,"%f", &x917); 
   fscanf(fp,"%f", &x918); 
   fscanf(fp,"%f", &x919); 
   fscanf(fp,"%f", &x920); 
   fscanf(fp,"%f", &x921); 
   fscanf(fp,"%f", &x922); 
   fscanf(fp,"%f", &x923); 
   fscanf(fp,"%f", &x924); 
   fscanf(fp,"%f", &x925); 

   fclose(fp);
   res=-( - 0.1*x482 - 0.3*x483 - 0.5*x484 - 0.167*x485 - 0.3*x486
 - 0.433*x487 - 0.1*x488 - 0.3*x489 - 0.5*x490 - 0.167*x491 - 0.3*x492
 - 0.433*x493 - 0.1*x494 - 0.3*x495 - 0.5*x496 - 0.167*x497 - 0.3*x498
 - 0.433*x499 - 0.1*x500 - 0.3*x501 - 0.5*x502 - 0.167*x503 - 0.3*x504
 - 0.433*x505 - 0.1*x566 - 0.3*x567 - 0.5*x568 - 0.167*x569 - 0.3*x570
 - 0.433*x571 - 0.1*x572 - 0.3*x573 - 0.5*x574 - 0.167*x575 - 0.3*x576
 - 0.433*x577 - 0.1*x578 - 0.3*x579 - 0.5*x580 - 0.167*x581 - 0.3*x582
 - 0.433*x583 - 0.1*x584 - 0.3*x585 - 0.5*x586 - 0.167*x587 - 0.3*x588
 - 0.433*x589 - 0.1*x650 - 0.3*x651 - 0.5*x652 - 0.167*x653 - 0.3*x654
 - 0.433*x655 - 0.1*x656 - 0.3*x657 - 0.5*x658 - 0.167*x659 - 0.3*x660
 - 0.433*x661 - 0.1*x662 - 0.3*x663 - 0.5*x664 - 0.167*x665 - 0.3*x666
 - 0.433*x667 - 0.1*x668 - 0.3*x669 - 0.5*x670 - 0.167*x671 - 0.3*x672
 - 0.433*x673 - 0.1*x734 - 0.3*x735 - 0.5*x736 - 0.167*x737 - 0.3*x738
 - 0.433*x739 - 0.1*x740 - 0.3*x741 - 0.5*x742 - 0.167*x743 - 0.3*x744
 - 0.433*x745 - 0.1*x746 - 0.3*x747 - 0.5*x748 - 0.167*x749 - 0.3*x750
 - 0.433*x751 - 0.1*x752 - 0.3*x753 - 0.5*x754 - 0.167*x755 - 0.3*x756
 - 0.433*x757 - 0.1*x818 - 0.3*x819 - 0.5*x820 - 0.167*x821 - 0.3*x822
 - 0.433*x823 - 0.1*x824 - 0.3*x825 - 0.5*x826 - 0.167*x827 - 0.3*x828
 - 0.433*x829 - 0.1*x830 - 0.3*x831 - 0.5*x832 - 0.167*x833 - 0.3*x834
 - 0.433*x835 - 0.1*x836 - 0.3*x837 - 0.5*x838 - 0.167*x839 - 0.3*x840
 - 0.433*x841 - 0.1*x902 - 0.3*x903 - 0.5*x904 - 0.167*x905 - 0.3*x906
 - 0.433*x907 - 0.1*x908 - 0.3*x909 - 0.5*x910 - 0.167*x911 - 0.3*x912
 - 0.433*x913 - 0.1*x914 - 0.3*x915 - 0.5*x916 - 0.167*x917 - 0.3*x918
 - 0.433*x919 - 0.1*x920 - 0.3*x921 - 0.5*x922 - 0.167*x923 - 0.3*x924
 - 0.433*x925 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
