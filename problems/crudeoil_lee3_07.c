#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_lee3_07";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x562,x563,x564,x565,x566,x567,x568,x569,x570,x571,x572,x573,x574,x575,x576,x577,x578,x579,x580,x581,x582,x583,x584,x585,x586,x587,x588,x589,x660,x661,x662,x663,x664,x665,x666,x667,x668,x669,x670,x671,x672,x673,x674,x675,x676,x677,x678,x679,x680,x681,x682,x683,x684,x685,x686,x687,x758,x759,x760,x761,x762,x763,x764,x765,x766,x767,x768,x769,x770,x771,x772,x773,x774,x775,x776,x777,x778,x779,x780,x781,x782,x783,x784,x785,x856,x857,x858,x859,x860,x861,x862,x863,x864,x865,x866,x867,x868,x869,x870,x871,x872,x873,x874,x875,x876,x877,x878,x879,x880,x881,x882,x883,x954,x955,x956,x957,x958,x959,x960,x961,x962,x963,x964,x965,x966,x967,x968,x969,x970,x971,x972,x973,x974,x975,x976,x977,x978,x979,x980,x981,x1052,x1053,x1054,x1055,x1056,x1057,x1058,x1059,x1060,x1061,x1062,x1063,x1064,x1065,x1066,x1067,x1068,x1069,x1070,x1071,x1072,x1073,x1074,x1075,x1076,x1077,x1078,x1079,x1150,x1151,x1152,x1153,x1154,x1155,x1156,x1157,x1158,x1159,x1160,x1161,x1162,x1163,x1164,x1165,x1166,x1167,x1168,x1169,x1170,x1171,x1172,x1173,x1174,x1175,x1176,x1177;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &x772); 
   fscanf(fp,"%f", &x773); 
   fscanf(fp,"%f", &x774); 
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
   fscanf(fp,"%f", &x856); 
   fscanf(fp,"%f", &x857); 
   fscanf(fp,"%f", &x858); 
   fscanf(fp,"%f", &x859); 
   fscanf(fp,"%f", &x860); 
   fscanf(fp,"%f", &x861); 
   fscanf(fp,"%f", &x862); 
   fscanf(fp,"%f", &x863); 
   fscanf(fp,"%f", &x864); 
   fscanf(fp,"%f", &x865); 
   fscanf(fp,"%f", &x866); 
   fscanf(fp,"%f", &x867); 
   fscanf(fp,"%f", &x868); 
   fscanf(fp,"%f", &x869); 
   fscanf(fp,"%f", &x870); 
   fscanf(fp,"%f", &x871); 
   fscanf(fp,"%f", &x872); 
   fscanf(fp,"%f", &x873); 
   fscanf(fp,"%f", &x874); 
   fscanf(fp,"%f", &x875); 
   fscanf(fp,"%f", &x876); 
   fscanf(fp,"%f", &x877); 
   fscanf(fp,"%f", &x878); 
   fscanf(fp,"%f", &x879); 
   fscanf(fp,"%f", &x880); 
   fscanf(fp,"%f", &x881); 
   fscanf(fp,"%f", &x882); 
   fscanf(fp,"%f", &x883); 
   fscanf(fp,"%f", &x954); 
   fscanf(fp,"%f", &x955); 
   fscanf(fp,"%f", &x956); 
   fscanf(fp,"%f", &x957); 
   fscanf(fp,"%f", &x958); 
   fscanf(fp,"%f", &x959); 
   fscanf(fp,"%f", &x960); 
   fscanf(fp,"%f", &x961); 
   fscanf(fp,"%f", &x962); 
   fscanf(fp,"%f", &x963); 
   fscanf(fp,"%f", &x964); 
   fscanf(fp,"%f", &x965); 
   fscanf(fp,"%f", &x966); 
   fscanf(fp,"%f", &x967); 
   fscanf(fp,"%f", &x968); 
   fscanf(fp,"%f", &x969); 
   fscanf(fp,"%f", &x970); 
   fscanf(fp,"%f", &x971); 
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
   fscanf(fp,"%f", &x1052); 
   fscanf(fp,"%f", &x1053); 
   fscanf(fp,"%f", &x1054); 
   fscanf(fp,"%f", &x1055); 
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
   fscanf(fp,"%f", &x1150); 
   fscanf(fp,"%f", &x1151); 
   fscanf(fp,"%f", &x1152); 
   fscanf(fp,"%f", &x1153); 
   fscanf(fp,"%f", &x1154); 
   fscanf(fp,"%f", &x1155); 
   fscanf(fp,"%f", &x1156); 
   fscanf(fp,"%f", &x1157); 
   fscanf(fp,"%f", &x1158); 
   fscanf(fp,"%f", &x1159); 
   fscanf(fp,"%f", &x1160); 
   fscanf(fp,"%f", &x1161); 
   fscanf(fp,"%f", &x1162); 
   fscanf(fp,"%f", &x1163); 
   fscanf(fp,"%f", &x1164); 
   fscanf(fp,"%f", &x1165); 
   fscanf(fp,"%f", &x1166); 
   fscanf(fp,"%f", &x1167); 
   fscanf(fp,"%f", &x1168); 
   fscanf(fp,"%f", &x1169); 
   fscanf(fp,"%f", &x1170); 
   fscanf(fp,"%f", &x1171); 
   fscanf(fp,"%f", &x1172); 
   fscanf(fp,"%f", &x1173); 
   fscanf(fp,"%f", &x1174); 
   fscanf(fp,"%f", &x1175); 
   fscanf(fp,"%f", &x1176); 
   fscanf(fp,"%f", &x1177); 

   fclose(fp);
   res=-( - 0.1*x562 - 0.6*x563 - 0.85*x564 - 0.2*x565 - 0.5*x566
 - 0.8*x567 - 0.3*x568 - 0.1*x569 - 0.6*x570 - 0.85*x571 - 0.2*x572
 - 0.5*x573 - 0.8*x574 - 0.3*x575 - 0.1*x576 - 0.6*x577 - 0.85*x578
 - 0.2*x579 - 0.5*x580 - 0.8*x581 - 0.3*x582 - 0.1*x583 - 0.6*x584
 - 0.85*x585 - 0.2*x586 - 0.5*x587 - 0.8*x588 - 0.3*x589 - 0.1*x660
 - 0.6*x661 - 0.85*x662 - 0.2*x663 - 0.5*x664 - 0.8*x665 - 0.3*x666
 - 0.1*x667 - 0.6*x668 - 0.85*x669 - 0.2*x670 - 0.5*x671 - 0.8*x672
 - 0.3*x673 - 0.1*x674 - 0.6*x675 - 0.85*x676 - 0.2*x677 - 0.5*x678
 - 0.8*x679 - 0.3*x680 - 0.1*x681 - 0.6*x682 - 0.85*x683 - 0.2*x684
 - 0.5*x685 - 0.8*x686 - 0.3*x687 - 0.1*x758 - 0.6*x759 - 0.85*x760
 - 0.2*x761 - 0.5*x762 - 0.8*x763 - 0.3*x764 - 0.1*x765 - 0.6*x766
 - 0.85*x767 - 0.2*x768 - 0.5*x769 - 0.8*x770 - 0.3*x771 - 0.1*x772
 - 0.6*x773 - 0.85*x774 - 0.2*x775 - 0.5*x776 - 0.8*x777 - 0.3*x778
 - 0.1*x779 - 0.6*x780 - 0.85*x781 - 0.2*x782 - 0.5*x783 - 0.8*x784
 - 0.3*x785 - 0.1*x856 - 0.6*x857 - 0.85*x858 - 0.2*x859 - 0.5*x860
 - 0.8*x861 - 0.3*x862 - 0.1*x863 - 0.6*x864 - 0.85*x865 - 0.2*x866
 - 0.5*x867 - 0.8*x868 - 0.3*x869 - 0.1*x870 - 0.6*x871 - 0.85*x872
 - 0.2*x873 - 0.5*x874 - 0.8*x875 - 0.3*x876 - 0.1*x877 - 0.6*x878
 - 0.85*x879 - 0.2*x880 - 0.5*x881 - 0.8*x882 - 0.3*x883 - 0.1*x954
 - 0.6*x955 - 0.85*x956 - 0.2*x957 - 0.5*x958 - 0.8*x959 - 0.3*x960
 - 0.1*x961 - 0.6*x962 - 0.85*x963 - 0.2*x964 - 0.5*x965 - 0.8*x966
 - 0.3*x967 - 0.1*x968 - 0.6*x969 - 0.85*x970 - 0.2*x971 - 0.5*x972
 - 0.8*x973 - 0.3*x974 - 0.1*x975 - 0.6*x976 - 0.85*x977 - 0.2*x978
 - 0.5*x979 - 0.8*x980 - 0.3*x981 - 0.1*x1052 - 0.6*x1053 - 0.85*x1054
 - 0.2*x1055 - 0.5*x1056 - 0.8*x1057 - 0.3*x1058 - 0.1*x1059 - 0.6*x1060
 - 0.85*x1061 - 0.2*x1062 - 0.5*x1063 - 0.8*x1064 - 0.3*x1065 - 0.1*x1066
 - 0.6*x1067 - 0.85*x1068 - 0.2*x1069 - 0.5*x1070 - 0.8*x1071 - 0.3*x1072
 - 0.1*x1073 - 0.6*x1074 - 0.85*x1075 - 0.2*x1076 - 0.5*x1077 - 0.8*x1078
 - 0.3*x1079 - 0.1*x1150 - 0.6*x1151 - 0.85*x1152 - 0.2*x1153 - 0.5*x1154
 - 0.8*x1155 - 0.3*x1156 - 0.1*x1157 - 0.6*x1158 - 0.85*x1159 - 0.2*x1160
 - 0.5*x1161 - 0.8*x1162 - 0.3*x1163 - 0.1*x1164 - 0.6*x1165 - 0.85*x1166
 - 0.2*x1167 - 0.5*x1168 - 0.8*x1169 - 0.3*x1170 - 0.1*x1171 - 0.6*x1172
 - 0.85*x1173 - 0.2*x1174 - 0.5*x1175 - 0.8*x1176 - 0.3*x1177 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
