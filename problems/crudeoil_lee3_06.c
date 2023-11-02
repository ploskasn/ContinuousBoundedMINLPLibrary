#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_lee3_06";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x492,x493,x494,x495,x496,x497,x498,x499,x500,x501,x502,x503,x504,x505,x506,x507,x508,x509,x510,x511,x512,x513,x514,x515,x516,x517,x518,x519,x590,x591,x592,x593,x594,x595,x596,x597,x598,x599,x600,x601,x602,x603,x604,x605,x606,x607,x608,x609,x610,x611,x612,x613,x614,x615,x616,x617,x688,x689,x690,x691,x692,x693,x694,x695,x696,x697,x698,x699,x700,x701,x702,x703,x704,x705,x706,x707,x708,x709,x710,x711,x712,x713,x714,x715,x786,x787,x788,x789,x790,x791,x792,x793,x794,x795,x796,x797,x798,x799,x800,x801,x802,x803,x804,x805,x806,x807,x808,x809,x810,x811,x812,x813,x884,x885,x886,x887,x888,x889,x890,x891,x892,x893,x894,x895,x896,x897,x898,x899,x900,x901,x902,x903,x904,x905,x906,x907,x908,x909,x910,x911,x982,x983,x984,x985,x986,x987,x988,x989,x990,x991,x992,x993,x994,x995,x996,x997,x998,x999,x1000,x1001,x1002,x1003,x1004,x1005,x1006,x1007,x1008,x1009;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &x688); 
   fscanf(fp,"%f", &x689); 
   fscanf(fp,"%f", &x690); 
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
   fscanf(fp,"%f", &x706); 
   fscanf(fp,"%f", &x707); 
   fscanf(fp,"%f", &x708); 
   fscanf(fp,"%f", &x709); 
   fscanf(fp,"%f", &x710); 
   fscanf(fp,"%f", &x711); 
   fscanf(fp,"%f", &x712); 
   fscanf(fp,"%f", &x713); 
   fscanf(fp,"%f", &x714); 
   fscanf(fp,"%f", &x715); 
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
   fscanf(fp,"%f", &x798); 
   fscanf(fp,"%f", &x799); 
   fscanf(fp,"%f", &x800); 
   fscanf(fp,"%f", &x801); 
   fscanf(fp,"%f", &x802); 
   fscanf(fp,"%f", &x803); 
   fscanf(fp,"%f", &x804); 
   fscanf(fp,"%f", &x805); 
   fscanf(fp,"%f", &x806); 
   fscanf(fp,"%f", &x807); 
   fscanf(fp,"%f", &x808); 
   fscanf(fp,"%f", &x809); 
   fscanf(fp,"%f", &x810); 
   fscanf(fp,"%f", &x811); 
   fscanf(fp,"%f", &x812); 
   fscanf(fp,"%f", &x813); 
   fscanf(fp,"%f", &x884); 
   fscanf(fp,"%f", &x885); 
   fscanf(fp,"%f", &x886); 
   fscanf(fp,"%f", &x887); 
   fscanf(fp,"%f", &x888); 
   fscanf(fp,"%f", &x889); 
   fscanf(fp,"%f", &x890); 
   fscanf(fp,"%f", &x891); 
   fscanf(fp,"%f", &x892); 
   fscanf(fp,"%f", &x893); 
   fscanf(fp,"%f", &x894); 
   fscanf(fp,"%f", &x895); 
   fscanf(fp,"%f", &x896); 
   fscanf(fp,"%f", &x897); 
   fscanf(fp,"%f", &x898); 
   fscanf(fp,"%f", &x899); 
   fscanf(fp,"%f", &x900); 
   fscanf(fp,"%f", &x901); 
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
   fscanf(fp,"%f", &x982); 
   fscanf(fp,"%f", &x983); 
   fscanf(fp,"%f", &x984); 
   fscanf(fp,"%f", &x985); 
   fscanf(fp,"%f", &x986); 
   fscanf(fp,"%f", &x987); 
   fscanf(fp,"%f", &x988); 
   fscanf(fp,"%f", &x989); 
   fscanf(fp,"%f", &x990); 
   fscanf(fp,"%f", &x991); 
   fscanf(fp,"%f", &x992); 
   fscanf(fp,"%f", &x993); 
   fscanf(fp,"%f", &x994); 
   fscanf(fp,"%f", &x995); 
   fscanf(fp,"%f", &x996); 
   fscanf(fp,"%f", &x997); 
   fscanf(fp,"%f", &x998); 
   fscanf(fp,"%f", &x999); 
   fscanf(fp,"%f", &x1000); 
   fscanf(fp,"%f", &x1001); 
   fscanf(fp,"%f", &x1002); 
   fscanf(fp,"%f", &x1003); 
   fscanf(fp,"%f", &x1004); 
   fscanf(fp,"%f", &x1005); 
   fscanf(fp,"%f", &x1006); 
   fscanf(fp,"%f", &x1007); 
   fscanf(fp,"%f", &x1008); 
   fscanf(fp,"%f", &x1009); 

   fclose(fp);
   res=-( - 0.1*x492 - 0.6*x493 - 0.85*x494 - 0.2*x495 - 0.5*x496
 - 0.8*x497 - 0.3*x498 - 0.1*x499 - 0.6*x500 - 0.85*x501 - 0.2*x502
 - 0.5*x503 - 0.8*x504 - 0.3*x505 - 0.1*x506 - 0.6*x507 - 0.85*x508
 - 0.2*x509 - 0.5*x510 - 0.8*x511 - 0.3*x512 - 0.1*x513 - 0.6*x514
 - 0.85*x515 - 0.2*x516 - 0.5*x517 - 0.8*x518 - 0.3*x519 - 0.1*x590
 - 0.6*x591 - 0.85*x592 - 0.2*x593 - 0.5*x594 - 0.8*x595 - 0.3*x596
 - 0.1*x597 - 0.6*x598 - 0.85*x599 - 0.2*x600 - 0.5*x601 - 0.8*x602
 - 0.3*x603 - 0.1*x604 - 0.6*x605 - 0.85*x606 - 0.2*x607 - 0.5*x608
 - 0.8*x609 - 0.3*x610 - 0.1*x611 - 0.6*x612 - 0.85*x613 - 0.2*x614
 - 0.5*x615 - 0.8*x616 - 0.3*x617 - 0.1*x688 - 0.6*x689 - 0.85*x690
 - 0.2*x691 - 0.5*x692 - 0.8*x693 - 0.3*x694 - 0.1*x695 - 0.6*x696
 - 0.85*x697 - 0.2*x698 - 0.5*x699 - 0.8*x700 - 0.3*x701 - 0.1*x702
 - 0.6*x703 - 0.85*x704 - 0.2*x705 - 0.5*x706 - 0.8*x707 - 0.3*x708
 - 0.1*x709 - 0.6*x710 - 0.85*x711 - 0.2*x712 - 0.5*x713 - 0.8*x714
 - 0.3*x715 - 0.1*x786 - 0.6*x787 - 0.85*x788 - 0.2*x789 - 0.5*x790
 - 0.8*x791 - 0.3*x792 - 0.1*x793 - 0.6*x794 - 0.85*x795 - 0.2*x796
 - 0.5*x797 - 0.8*x798 - 0.3*x799 - 0.1*x800 - 0.6*x801 - 0.85*x802
 - 0.2*x803 - 0.5*x804 - 0.8*x805 - 0.3*x806 - 0.1*x807 - 0.6*x808
 - 0.85*x809 - 0.2*x810 - 0.5*x811 - 0.8*x812 - 0.3*x813 - 0.1*x884
 - 0.6*x885 - 0.85*x886 - 0.2*x887 - 0.5*x888 - 0.8*x889 - 0.3*x890
 - 0.1*x891 - 0.6*x892 - 0.85*x893 - 0.2*x894 - 0.5*x895 - 0.8*x896
 - 0.3*x897 - 0.1*x898 - 0.6*x899 - 0.85*x900 - 0.2*x901 - 0.5*x902
 - 0.8*x903 - 0.3*x904 - 0.1*x905 - 0.6*x906 - 0.85*x907 - 0.2*x908
 - 0.5*x909 - 0.8*x910 - 0.3*x911 - 0.1*x982 - 0.6*x983 - 0.85*x984
 - 0.2*x985 - 0.5*x986 - 0.8*x987 - 0.3*x988 - 0.1*x989 - 0.6*x990
 - 0.85*x991 - 0.2*x992 - 0.5*x993 - 0.8*x994 - 0.3*x995 - 0.1*x996
 - 0.6*x997 - 0.85*x998 - 0.2*x999 - 0.5*x1000 - 0.8*x1001 - 0.3*x1002
 - 0.1*x1003 - 0.6*x1004 - 0.85*x1005 - 0.2*x1006 - 0.5*x1007 - 0.8*x1008
 - 0.3*x1009 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
