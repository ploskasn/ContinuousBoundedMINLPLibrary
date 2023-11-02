#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_lee2_07";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x552,x553,x554,x555,x556,x557,x558,x559,x560,x561,x562,x563,x564,x565,x566,x567,x568,x569,x570,x571,x572,x573,x574,x575,x636,x637,x638,x639,x640,x641,x642,x643,x644,x645,x646,x647,x648,x649,x650,x651,x652,x653,x654,x655,x656,x657,x658,x659,x720,x721,x722,x723,x724,x725,x726,x727,x728,x729,x730,x731,x732,x733,x734,x735,x736,x737,x738,x739,x740,x741,x742,x743,x804,x805,x806,x807,x808,x809,x810,x811,x812,x813,x814,x815,x816,x817,x818,x819,x820,x821,x822,x823,x824,x825,x826,x827,x888,x889,x890,x891,x892,x893,x894,x895,x896,x897,x898,x899,x900,x901,x902,x903,x904,x905,x906,x907,x908,x909,x910,x911,x972,x973,x974,x975,x976,x977,x978,x979,x980,x981,x982,x983,x984,x985,x986,x987,x988,x989,x990,x991,x992,x993,x994,x995,x1056,x1057,x1058,x1059,x1060,x1061,x1062,x1063,x1064,x1065,x1066,x1067,x1068,x1069,x1070,x1071,x1072,x1073,x1074,x1075,x1076,x1077,x1078,x1079;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &x972); 
   fscanf(fp,"%f", &x973); 
   fscanf(fp,"%f", &x974); 
   fscanf(fp,"%f", &x975); 
   fscanf(fp,"%f", &x976); 
   fscanf(fp,"%f", &x977); 
   fscanf(fp,"%f", &x978); 
   fscanf(fp,"%f", &x979); 
   fscanf(fp,"%f", &x980); 
   fscanf(fp,"%f", &x981); 
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
   fscanf(fp,"%f", &x1056); 
   fscanf(fp,"%f", &x1057); 
   fscanf(fp,"%f", &x1058); 
   fscanf(fp,"%f", &x1059); 
   fscanf(fp,"%f", &x1060); 
   fscanf(fp,"%f", &x1061); 
   fscanf(fp,"%f", &x1062); 
   fscanf(fp,"%f", &x1063); 
   fscanf(fp,"%f", &x1064); 
   fscanf(fp,"%f", &x1065); 
   fscanf(fp,"%f", &x1066); 
   fscanf(fp,"%f", &x1067); 
   fscanf(fp,"%f", &x1068); 
   fscanf(fp,"%f", &x1069); 
   fscanf(fp,"%f", &x1070); 
   fscanf(fp,"%f", &x1071); 
   fscanf(fp,"%f", &x1072); 
   fscanf(fp,"%f", &x1073); 
   fscanf(fp,"%f", &x1074); 
   fscanf(fp,"%f", &x1075); 
   fscanf(fp,"%f", &x1076); 
   fscanf(fp,"%f", &x1077); 
   fscanf(fp,"%f", &x1078); 
   fscanf(fp,"%f", &x1079); 

   fclose(fp);
   res=-( - 0.1*x552 - 0.3*x553 - 0.5*x554 - 0.167*x555 - 0.3*x556
 - 0.433*x557 - 0.1*x558 - 0.3*x559 - 0.5*x560 - 0.167*x561 - 0.3*x562
 - 0.433*x563 - 0.1*x564 - 0.3*x565 - 0.5*x566 - 0.167*x567 - 0.3*x568
 - 0.433*x569 - 0.1*x570 - 0.3*x571 - 0.5*x572 - 0.167*x573 - 0.3*x574
 - 0.433*x575 - 0.1*x636 - 0.3*x637 - 0.5*x638 - 0.167*x639 - 0.3*x640
 - 0.433*x641 - 0.1*x642 - 0.3*x643 - 0.5*x644 - 0.167*x645 - 0.3*x646
 - 0.433*x647 - 0.1*x648 - 0.3*x649 - 0.5*x650 - 0.167*x651 - 0.3*x652
 - 0.433*x653 - 0.1*x654 - 0.3*x655 - 0.5*x656 - 0.167*x657 - 0.3*x658
 - 0.433*x659 - 0.1*x720 - 0.3*x721 - 0.5*x722 - 0.167*x723 - 0.3*x724
 - 0.433*x725 - 0.1*x726 - 0.3*x727 - 0.5*x728 - 0.167*x729 - 0.3*x730
 - 0.433*x731 - 0.1*x732 - 0.3*x733 - 0.5*x734 - 0.167*x735 - 0.3*x736
 - 0.433*x737 - 0.1*x738 - 0.3*x739 - 0.5*x740 - 0.167*x741 - 0.3*x742
 - 0.433*x743 - 0.1*x804 - 0.3*x805 - 0.5*x806 - 0.167*x807 - 0.3*x808
 - 0.433*x809 - 0.1*x810 - 0.3*x811 - 0.5*x812 - 0.167*x813 - 0.3*x814
 - 0.433*x815 - 0.1*x816 - 0.3*x817 - 0.5*x818 - 0.167*x819 - 0.3*x820
 - 0.433*x821 - 0.1*x822 - 0.3*x823 - 0.5*x824 - 0.167*x825 - 0.3*x826
 - 0.433*x827 - 0.1*x888 - 0.3*x889 - 0.5*x890 - 0.167*x891 - 0.3*x892
 - 0.433*x893 - 0.1*x894 - 0.3*x895 - 0.5*x896 - 0.167*x897 - 0.3*x898
 - 0.433*x899 - 0.1*x900 - 0.3*x901 - 0.5*x902 - 0.167*x903 - 0.3*x904
 - 0.433*x905 - 0.1*x906 - 0.3*x907 - 0.5*x908 - 0.167*x909 - 0.3*x910
 - 0.433*x911 - 0.1*x972 - 0.3*x973 - 0.5*x974 - 0.167*x975 - 0.3*x976
 - 0.433*x977 - 0.1*x978 - 0.3*x979 - 0.5*x980 - 0.167*x981 - 0.3*x982
 - 0.433*x983 - 0.1*x984 - 0.3*x985 - 0.5*x986 - 0.167*x987 - 0.3*x988
 - 0.433*x989 - 0.1*x990 - 0.3*x991 - 0.5*x992 - 0.167*x993 - 0.3*x994
 - 0.433*x995 - 0.1*x1056 - 0.3*x1057 - 0.5*x1058 - 0.167*x1059
 - 0.3*x1060 - 0.433*x1061 - 0.1*x1062 - 0.3*x1063 - 0.5*x1064
 - 0.167*x1065 - 0.3*x1066 - 0.433*x1067 - 0.1*x1068 - 0.3*x1069
 - 0.5*x1070 - 0.167*x1071 - 0.3*x1072 - 0.433*x1073 - 0.1*x1074
 - 0.3*x1075 - 0.5*x1076 - 0.167*x1077 - 0.3*x1078 - 0.433*x1079 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
