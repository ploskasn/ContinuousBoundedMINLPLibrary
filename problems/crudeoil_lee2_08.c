#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_lee2_08";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x622,x623,x624,x625,x626,x627,x628,x629,x630,x631,x632,x633,x634,x635,x636,x637,x638,x639,x640,x641,x642,x643,x644,x645,x706,x707,x708,x709,x710,x711,x712,x713,x714,x715,x716,x717,x718,x719,x720,x721,x722,x723,x724,x725,x726,x727,x728,x729,x790,x791,x792,x793,x794,x795,x796,x797,x798,x799,x800,x801,x802,x803,x804,x805,x806,x807,x808,x809,x810,x811,x812,x813,x874,x875,x876,x877,x878,x879,x880,x881,x882,x883,x884,x885,x886,x887,x888,x889,x890,x891,x892,x893,x894,x895,x896,x897,x958,x959,x960,x961,x962,x963,x964,x965,x966,x967,x968,x969,x970,x971,x972,x973,x974,x975,x976,x977,x978,x979,x980,x981,x1042,x1043,x1044,x1045,x1046,x1047,x1048,x1049,x1050,x1051,x1052,x1053,x1054,x1055,x1056,x1057,x1058,x1059,x1060,x1061,x1062,x1063,x1064,x1065,x1126,x1127,x1128,x1129,x1130,x1131,x1132,x1133,x1134,x1135,x1136,x1137,x1138,x1139,x1140,x1141,x1142,x1143,x1144,x1145,x1146,x1147,x1148,x1149,x1210,x1211,x1212,x1213,x1214,x1215,x1216,x1217,x1218,x1219,x1220,x1221,x1222,x1223,x1224,x1225,x1226,x1227,x1228,x1229,x1230,x1231,x1232,x1233;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &x1042); 
   fscanf(fp,"%f", &x1043); 
   fscanf(fp,"%f", &x1044); 
   fscanf(fp,"%f", &x1045); 
   fscanf(fp,"%f", &x1046); 
   fscanf(fp,"%f", &x1047); 
   fscanf(fp,"%f", &x1048); 
   fscanf(fp,"%f", &x1049); 
   fscanf(fp,"%f", &x1050); 
   fscanf(fp,"%f", &x1051); 
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
   fscanf(fp,"%f", &x1126); 
   fscanf(fp,"%f", &x1127); 
   fscanf(fp,"%f", &x1128); 
   fscanf(fp,"%f", &x1129); 
   fscanf(fp,"%f", &x1130); 
   fscanf(fp,"%f", &x1131); 
   fscanf(fp,"%f", &x1132); 
   fscanf(fp,"%f", &x1133); 
   fscanf(fp,"%f", &x1134); 
   fscanf(fp,"%f", &x1135); 
   fscanf(fp,"%f", &x1136); 
   fscanf(fp,"%f", &x1137); 
   fscanf(fp,"%f", &x1138); 
   fscanf(fp,"%f", &x1139); 
   fscanf(fp,"%f", &x1140); 
   fscanf(fp,"%f", &x1141); 
   fscanf(fp,"%f", &x1142); 
   fscanf(fp,"%f", &x1143); 
   fscanf(fp,"%f", &x1144); 
   fscanf(fp,"%f", &x1145); 
   fscanf(fp,"%f", &x1146); 
   fscanf(fp,"%f", &x1147); 
   fscanf(fp,"%f", &x1148); 
   fscanf(fp,"%f", &x1149); 
   fscanf(fp,"%f", &x1210); 
   fscanf(fp,"%f", &x1211); 
   fscanf(fp,"%f", &x1212); 
   fscanf(fp,"%f", &x1213); 
   fscanf(fp,"%f", &x1214); 
   fscanf(fp,"%f", &x1215); 
   fscanf(fp,"%f", &x1216); 
   fscanf(fp,"%f", &x1217); 
   fscanf(fp,"%f", &x1218); 
   fscanf(fp,"%f", &x1219); 
   fscanf(fp,"%f", &x1220); 
   fscanf(fp,"%f", &x1221); 
   fscanf(fp,"%f", &x1222); 
   fscanf(fp,"%f", &x1223); 
   fscanf(fp,"%f", &x1224); 
   fscanf(fp,"%f", &x1225); 
   fscanf(fp,"%f", &x1226); 
   fscanf(fp,"%f", &x1227); 
   fscanf(fp,"%f", &x1228); 
   fscanf(fp,"%f", &x1229); 
   fscanf(fp,"%f", &x1230); 
   fscanf(fp,"%f", &x1231); 
   fscanf(fp,"%f", &x1232); 
   fscanf(fp,"%f", &x1233); 

   fclose(fp);
   res=-( - 0.1*x622 - 0.3*x623 - 0.5*x624 - 0.167*x625 - 0.3*x626
 - 0.433*x627 - 0.1*x628 - 0.3*x629 - 0.5*x630 - 0.167*x631 - 0.3*x632
 - 0.433*x633 - 0.1*x634 - 0.3*x635 - 0.5*x636 - 0.167*x637 - 0.3*x638
 - 0.433*x639 - 0.1*x640 - 0.3*x641 - 0.5*x642 - 0.167*x643 - 0.3*x644
 - 0.433*x645 - 0.1*x706 - 0.3*x707 - 0.5*x708 - 0.167*x709 - 0.3*x710
 - 0.433*x711 - 0.1*x712 - 0.3*x713 - 0.5*x714 - 0.167*x715 - 0.3*x716
 - 0.433*x717 - 0.1*x718 - 0.3*x719 - 0.5*x720 - 0.167*x721 - 0.3*x722
 - 0.433*x723 - 0.1*x724 - 0.3*x725 - 0.5*x726 - 0.167*x727 - 0.3*x728
 - 0.433*x729 - 0.1*x790 - 0.3*x791 - 0.5*x792 - 0.167*x793 - 0.3*x794
 - 0.433*x795 - 0.1*x796 - 0.3*x797 - 0.5*x798 - 0.167*x799 - 0.3*x800
 - 0.433*x801 - 0.1*x802 - 0.3*x803 - 0.5*x804 - 0.167*x805 - 0.3*x806
 - 0.433*x807 - 0.1*x808 - 0.3*x809 - 0.5*x810 - 0.167*x811 - 0.3*x812
 - 0.433*x813 - 0.1*x874 - 0.3*x875 - 0.5*x876 - 0.167*x877 - 0.3*x878
 - 0.433*x879 - 0.1*x880 - 0.3*x881 - 0.5*x882 - 0.167*x883 - 0.3*x884
 - 0.433*x885 - 0.1*x886 - 0.3*x887 - 0.5*x888 - 0.167*x889 - 0.3*x890
 - 0.433*x891 - 0.1*x892 - 0.3*x893 - 0.5*x894 - 0.167*x895 - 0.3*x896
 - 0.433*x897 - 0.1*x958 - 0.3*x959 - 0.5*x960 - 0.167*x961 - 0.3*x962
 - 0.433*x963 - 0.1*x964 - 0.3*x965 - 0.5*x966 - 0.167*x967 - 0.3*x968
 - 0.433*x969 - 0.1*x970 - 0.3*x971 - 0.5*x972 - 0.167*x973 - 0.3*x974
 - 0.433*x975 - 0.1*x976 - 0.3*x977 - 0.5*x978 - 0.167*x979 - 0.3*x980
 - 0.433*x981 - 0.1*x1042 - 0.3*x1043 - 0.5*x1044 - 0.167*x1045
 - 0.3*x1046 - 0.433*x1047 - 0.1*x1048 - 0.3*x1049 - 0.5*x1050
 - 0.167*x1051 - 0.3*x1052 - 0.433*x1053 - 0.1*x1054 - 0.3*x1055
 - 0.5*x1056 - 0.167*x1057 - 0.3*x1058 - 0.433*x1059 - 0.1*x1060
 - 0.3*x1061 - 0.5*x1062 - 0.167*x1063 - 0.3*x1064 - 0.433*x1065
 - 0.1*x1126 - 0.3*x1127 - 0.5*x1128 - 0.167*x1129 - 0.3*x1130
 - 0.433*x1131 - 0.1*x1132 - 0.3*x1133 - 0.5*x1134 - 0.167*x1135
 - 0.3*x1136 - 0.433*x1137 - 0.1*x1138 - 0.3*x1139 - 0.5*x1140
 - 0.167*x1141 - 0.3*x1142 - 0.433*x1143 - 0.1*x1144 - 0.3*x1145
 - 0.5*x1146 - 0.167*x1147 - 0.3*x1148 - 0.433*x1149 - 0.1*x1210
 - 0.3*x1211 - 0.5*x1212 - 0.167*x1213 - 0.3*x1214 - 0.433*x1215
 - 0.1*x1216 - 0.3*x1217 - 0.5*x1218 - 0.167*x1219 - 0.3*x1220
 - 0.433*x1221 - 0.1*x1222 - 0.3*x1223 - 0.5*x1224 - 0.167*x1225
 - 0.3*x1226 - 0.433*x1227 - 0.1*x1228 - 0.3*x1229 - 0.5*x1230
 - 0.167*x1231 - 0.3*x1232 - 0.433*x1233 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
