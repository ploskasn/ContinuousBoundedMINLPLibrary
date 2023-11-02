#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_lee1_10";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x426,x427,x428,x429,x430,x431,x432,x433,x458,x459,x460,x461,x462,x463,x464,x465,x490,x491,x492,x493,x494,x495,x496,x497,x522,x523,x524,x525,x526,x527,x528,x529,x554,x555,x556,x557,x558,x559,x560,x561,x586,x587,x588,x589,x590,x591,x592,x593,x618,x619,x620,x621,x622,x623,x624,x625,x650,x651,x652,x653,x654,x655,x656,x657,x682,x683,x684,x685,x686,x687,x688,x689,x714,x715,x716,x717,x718,x719,x720,x721;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x426); 
   fscanf(fp,"%f", &x427); 
   fscanf(fp,"%f", &x428); 
   fscanf(fp,"%f", &x429); 
   fscanf(fp,"%f", &x430); 
   fscanf(fp,"%f", &x431); 
   fscanf(fp,"%f", &x432); 
   fscanf(fp,"%f", &x433); 
   fscanf(fp,"%f", &x458); 
   fscanf(fp,"%f", &x459); 
   fscanf(fp,"%f", &x460); 
   fscanf(fp,"%f", &x461); 
   fscanf(fp,"%f", &x462); 
   fscanf(fp,"%f", &x463); 
   fscanf(fp,"%f", &x464); 
   fscanf(fp,"%f", &x465); 
   fscanf(fp,"%f", &x490); 
   fscanf(fp,"%f", &x491); 
   fscanf(fp,"%f", &x492); 
   fscanf(fp,"%f", &x493); 
   fscanf(fp,"%f", &x494); 
   fscanf(fp,"%f", &x495); 
   fscanf(fp,"%f", &x496); 
   fscanf(fp,"%f", &x497); 
   fscanf(fp,"%f", &x522); 
   fscanf(fp,"%f", &x523); 
   fscanf(fp,"%f", &x524); 
   fscanf(fp,"%f", &x525); 
   fscanf(fp,"%f", &x526); 
   fscanf(fp,"%f", &x527); 
   fscanf(fp,"%f", &x528); 
   fscanf(fp,"%f", &x529); 
   fscanf(fp,"%f", &x554); 
   fscanf(fp,"%f", &x555); 
   fscanf(fp,"%f", &x556); 
   fscanf(fp,"%f", &x557); 
   fscanf(fp,"%f", &x558); 
   fscanf(fp,"%f", &x559); 
   fscanf(fp,"%f", &x560); 
   fscanf(fp,"%f", &x561); 
   fscanf(fp,"%f", &x586); 
   fscanf(fp,"%f", &x587); 
   fscanf(fp,"%f", &x588); 
   fscanf(fp,"%f", &x589); 
   fscanf(fp,"%f", &x590); 
   fscanf(fp,"%f", &x591); 
   fscanf(fp,"%f", &x592); 
   fscanf(fp,"%f", &x593); 
   fscanf(fp,"%f", &x618); 
   fscanf(fp,"%f", &x619); 
   fscanf(fp,"%f", &x620); 
   fscanf(fp,"%f", &x621); 
   fscanf(fp,"%f", &x622); 
   fscanf(fp,"%f", &x623); 
   fscanf(fp,"%f", &x624); 
   fscanf(fp,"%f", &x625); 
   fscanf(fp,"%f", &x650); 
   fscanf(fp,"%f", &x651); 
   fscanf(fp,"%f", &x652); 
   fscanf(fp,"%f", &x653); 
   fscanf(fp,"%f", &x654); 
   fscanf(fp,"%f", &x655); 
   fscanf(fp,"%f", &x656); 
   fscanf(fp,"%f", &x657); 
   fscanf(fp,"%f", &x682); 
   fscanf(fp,"%f", &x683); 
   fscanf(fp,"%f", &x684); 
   fscanf(fp,"%f", &x685); 
   fscanf(fp,"%f", &x686); 
   fscanf(fp,"%f", &x687); 
   fscanf(fp,"%f", &x688); 
   fscanf(fp,"%f", &x689); 
   fscanf(fp,"%f", &x714); 
   fscanf(fp,"%f", &x715); 
   fscanf(fp,"%f", &x716); 
   fscanf(fp,"%f", &x717); 
   fscanf(fp,"%f", &x718); 
   fscanf(fp,"%f", &x719); 
   fscanf(fp,"%f", &x720); 
   fscanf(fp,"%f", &x721); 

   fclose(fp);
   res=-( - 0.1*x426 - 0.6*x427 - 0.2*x428 - 0.5*x429 - 0.1*x430
 - 0.6*x431 - 0.2*x432 - 0.5*x433 - 0.1*x458 - 0.6*x459 - 0.2*x460
 - 0.5*x461 - 0.1*x462 - 0.6*x463 - 0.2*x464 - 0.5*x465 - 0.1*x490
 - 0.6*x491 - 0.2*x492 - 0.5*x493 - 0.1*x494 - 0.6*x495 - 0.2*x496
 - 0.5*x497 - 0.1*x522 - 0.6*x523 - 0.2*x524 - 0.5*x525 - 0.1*x526
 - 0.6*x527 - 0.2*x528 - 0.5*x529 - 0.1*x554 - 0.6*x555 - 0.2*x556
 - 0.5*x557 - 0.1*x558 - 0.6*x559 - 0.2*x560 - 0.5*x561 - 0.1*x586
 - 0.6*x587 - 0.2*x588 - 0.5*x589 - 0.1*x590 - 0.6*x591 - 0.2*x592
 - 0.5*x593 - 0.1*x618 - 0.6*x619 - 0.2*x620 - 0.5*x621 - 0.1*x622
 - 0.6*x623 - 0.2*x624 - 0.5*x625 - 0.1*x650 - 0.6*x651 - 0.2*x652
 - 0.5*x653 - 0.1*x654 - 0.6*x655 - 0.2*x656 - 0.5*x657 - 0.1*x682
 - 0.6*x683 - 0.2*x684 - 0.5*x685 - 0.1*x686 - 0.6*x687 - 0.2*x688
 - 0.5*x689 - 0.1*x714 - 0.6*x715 - 0.2*x716 - 0.5*x717 - 0.1*x718
 - 0.6*x719 - 0.2*x720 - 0.5*x721 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
