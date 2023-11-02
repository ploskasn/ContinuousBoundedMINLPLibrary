#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_lee3_05";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x422,x423,x424,x425,x426,x427,x428,x429,x430,x431,x432,x433,x434,x435,x436,x437,x438,x439,x440,x441,x442,x443,x444,x445,x446,x447,x448,x449,x520,x521,x522,x523,x524,x525,x526,x527,x528,x529,x530,x531,x532,x533,x534,x535,x536,x537,x538,x539,x540,x541,x542,x543,x544,x545,x546,x547,x618,x619,x620,x621,x622,x623,x624,x625,x626,x627,x628,x629,x630,x631,x632,x633,x634,x635,x636,x637,x638,x639,x640,x641,x642,x643,x644,x645,x716,x717,x718,x719,x720,x721,x722,x723,x724,x725,x726,x727,x728,x729,x730,x731,x732,x733,x734,x735,x736,x737,x738,x739,x740,x741,x742,x743,x814,x815,x816,x817,x818,x819,x820,x821,x822,x823,x824,x825,x826,x827,x828,x829,x830,x831,x832,x833,x834,x835,x836,x837,x838,x839,x840,x841;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &x628); 
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
   fscanf(fp,"%f", &x644); 
   fscanf(fp,"%f", &x645); 
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
   fscanf(fp,"%f", &x728); 
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
   fscanf(fp,"%f", &x742); 
   fscanf(fp,"%f", &x743); 
   fscanf(fp,"%f", &x814); 
   fscanf(fp,"%f", &x815); 
   fscanf(fp,"%f", &x816); 
   fscanf(fp,"%f", &x817); 
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

   fclose(fp);
   res=-( - 0.1*x422 - 0.6*x423 - 0.85*x424 - 0.2*x425 - 0.5*x426
 - 0.8*x427 - 0.3*x428 - 0.1*x429 - 0.6*x430 - 0.85*x431 - 0.2*x432
 - 0.5*x433 - 0.8*x434 - 0.3*x435 - 0.1*x436 - 0.6*x437 - 0.85*x438
 - 0.2*x439 - 0.5*x440 - 0.8*x441 - 0.3*x442 - 0.1*x443 - 0.6*x444
 - 0.85*x445 - 0.2*x446 - 0.5*x447 - 0.8*x448 - 0.3*x449 - 0.1*x520
 - 0.6*x521 - 0.85*x522 - 0.2*x523 - 0.5*x524 - 0.8*x525 - 0.3*x526
 - 0.1*x527 - 0.6*x528 - 0.85*x529 - 0.2*x530 - 0.5*x531 - 0.8*x532
 - 0.3*x533 - 0.1*x534 - 0.6*x535 - 0.85*x536 - 0.2*x537 - 0.5*x538
 - 0.8*x539 - 0.3*x540 - 0.1*x541 - 0.6*x542 - 0.85*x543 - 0.2*x544
 - 0.5*x545 - 0.8*x546 - 0.3*x547 - 0.1*x618 - 0.6*x619 - 0.85*x620
 - 0.2*x621 - 0.5*x622 - 0.8*x623 - 0.3*x624 - 0.1*x625 - 0.6*x626
 - 0.85*x627 - 0.2*x628 - 0.5*x629 - 0.8*x630 - 0.3*x631 - 0.1*x632
 - 0.6*x633 - 0.85*x634 - 0.2*x635 - 0.5*x636 - 0.8*x637 - 0.3*x638
 - 0.1*x639 - 0.6*x640 - 0.85*x641 - 0.2*x642 - 0.5*x643 - 0.8*x644
 - 0.3*x645 - 0.1*x716 - 0.6*x717 - 0.85*x718 - 0.2*x719 - 0.5*x720
 - 0.8*x721 - 0.3*x722 - 0.1*x723 - 0.6*x724 - 0.85*x725 - 0.2*x726
 - 0.5*x727 - 0.8*x728 - 0.3*x729 - 0.1*x730 - 0.6*x731 - 0.85*x732
 - 0.2*x733 - 0.5*x734 - 0.8*x735 - 0.3*x736 - 0.1*x737 - 0.6*x738
 - 0.85*x739 - 0.2*x740 - 0.5*x741 - 0.8*x742 - 0.3*x743 - 0.1*x814
 - 0.6*x815 - 0.85*x816 - 0.2*x817 - 0.5*x818 - 0.8*x819 - 0.3*x820
 - 0.1*x821 - 0.6*x822 - 0.85*x823 - 0.2*x824 - 0.5*x825 - 0.8*x826
 - 0.3*x827 - 0.1*x828 - 0.6*x829 - 0.85*x830 - 0.2*x831 - 0.5*x832
 - 0.8*x833 - 0.3*x834 - 0.1*x835 - 0.6*x836 - 0.85*x837 - 0.2*x838
 - 0.5*x839 - 0.8*x840 - 0.3*x841 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
