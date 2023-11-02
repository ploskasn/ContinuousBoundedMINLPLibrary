#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_lee3_08";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x632,x633,x634,x635,x636,x637,x638,x639,x640,x641,x642,x643,x644,x645,x646,x647,x648,x649,x650,x651,x652,x653,x654,x655,x656,x657,x658,x659,x730,x731,x732,x733,x734,x735,x736,x737,x738,x739,x740,x741,x742,x743,x744,x745,x746,x747,x748,x749,x750,x751,x752,x753,x754,x755,x756,x757,x828,x829,x830,x831,x832,x833,x834,x835,x836,x837,x838,x839,x840,x841,x842,x843,x844,x845,x846,x847,x848,x849,x850,x851,x852,x853,x854,x855,x926,x927,x928,x929,x930,x931,x932,x933,x934,x935,x936,x937,x938,x939,x940,x941,x942,x943,x944,x945,x946,x947,x948,x949,x950,x951,x952,x953,x1024,x1025,x1026,x1027,x1028,x1029,x1030,x1031,x1032,x1033,x1034,x1035,x1036,x1037,x1038,x1039,x1040,x1041,x1042,x1043,x1044,x1045,x1046,x1047,x1048,x1049,x1050,x1051,x1122,x1123,x1124,x1125,x1126,x1127,x1128,x1129,x1130,x1131,x1132,x1133,x1134,x1135,x1136,x1137,x1138,x1139,x1140,x1141,x1142,x1143,x1144,x1145,x1146,x1147,x1148,x1149,x1220,x1221,x1222,x1223,x1224,x1225,x1226,x1227,x1228,x1229,x1230,x1231,x1232,x1233,x1234,x1235,x1236,x1237,x1238,x1239,x1240,x1241,x1242,x1243,x1244,x1245,x1246,x1247,x1318,x1319,x1320,x1321,x1322,x1323,x1324,x1325,x1326,x1327,x1328,x1329,x1330,x1331,x1332,x1333,x1334,x1335,x1336,x1337,x1338,x1339,x1340,x1341,x1342,x1343,x1344,x1345;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &x842); 
   fscanf(fp,"%f", &x843); 
   fscanf(fp,"%f", &x844); 
   fscanf(fp,"%f", &x845); 
   fscanf(fp,"%f", &x846); 
   fscanf(fp,"%f", &x847); 
   fscanf(fp,"%f", &x848); 
   fscanf(fp,"%f", &x849); 
   fscanf(fp,"%f", &x850); 
   fscanf(fp,"%f", &x851); 
   fscanf(fp,"%f", &x852); 
   fscanf(fp,"%f", &x853); 
   fscanf(fp,"%f", &x854); 
   fscanf(fp,"%f", &x855); 
   fscanf(fp,"%f", &x926); 
   fscanf(fp,"%f", &x927); 
   fscanf(fp,"%f", &x928); 
   fscanf(fp,"%f", &x929); 
   fscanf(fp,"%f", &x930); 
   fscanf(fp,"%f", &x931); 
   fscanf(fp,"%f", &x932); 
   fscanf(fp,"%f", &x933); 
   fscanf(fp,"%f", &x934); 
   fscanf(fp,"%f", &x935); 
   fscanf(fp,"%f", &x936); 
   fscanf(fp,"%f", &x937); 
   fscanf(fp,"%f", &x938); 
   fscanf(fp,"%f", &x939); 
   fscanf(fp,"%f", &x940); 
   fscanf(fp,"%f", &x941); 
   fscanf(fp,"%f", &x942); 
   fscanf(fp,"%f", &x943); 
   fscanf(fp,"%f", &x944); 
   fscanf(fp,"%f", &x945); 
   fscanf(fp,"%f", &x946); 
   fscanf(fp,"%f", &x947); 
   fscanf(fp,"%f", &x948); 
   fscanf(fp,"%f", &x949); 
   fscanf(fp,"%f", &x950); 
   fscanf(fp,"%f", &x951); 
   fscanf(fp,"%f", &x952); 
   fscanf(fp,"%f", &x953); 
   fscanf(fp,"%f", &x1024); 
   fscanf(fp,"%f", &x1025); 
   fscanf(fp,"%f", &x1026); 
   fscanf(fp,"%f", &x1027); 
   fscanf(fp,"%f", &x1028); 
   fscanf(fp,"%f", &x1029); 
   fscanf(fp,"%f", &x1030); 
   fscanf(fp,"%f", &x1031); 
   fscanf(fp,"%f", &x1032); 
   fscanf(fp,"%f", &x1033); 
   fscanf(fp,"%f", &x1034); 
   fscanf(fp,"%f", &x1035); 
   fscanf(fp,"%f", &x1036); 
   fscanf(fp,"%f", &x1037); 
   fscanf(fp,"%f", &x1038); 
   fscanf(fp,"%f", &x1039); 
   fscanf(fp,"%f", &x1040); 
   fscanf(fp,"%f", &x1041); 
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
   fscanf(fp,"%f", &x1122); 
   fscanf(fp,"%f", &x1123); 
   fscanf(fp,"%f", &x1124); 
   fscanf(fp,"%f", &x1125); 
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
   fscanf(fp,"%f", &x1234); 
   fscanf(fp,"%f", &x1235); 
   fscanf(fp,"%f", &x1236); 
   fscanf(fp,"%f", &x1237); 
   fscanf(fp,"%f", &x1238); 
   fscanf(fp,"%f", &x1239); 
   fscanf(fp,"%f", &x1240); 
   fscanf(fp,"%f", &x1241); 
   fscanf(fp,"%f", &x1242); 
   fscanf(fp,"%f", &x1243); 
   fscanf(fp,"%f", &x1244); 
   fscanf(fp,"%f", &x1245); 
   fscanf(fp,"%f", &x1246); 
   fscanf(fp,"%f", &x1247); 
   fscanf(fp,"%f", &x1318); 
   fscanf(fp,"%f", &x1319); 
   fscanf(fp,"%f", &x1320); 
   fscanf(fp,"%f", &x1321); 
   fscanf(fp,"%f", &x1322); 
   fscanf(fp,"%f", &x1323); 
   fscanf(fp,"%f", &x1324); 
   fscanf(fp,"%f", &x1325); 
   fscanf(fp,"%f", &x1326); 
   fscanf(fp,"%f", &x1327); 
   fscanf(fp,"%f", &x1328); 
   fscanf(fp,"%f", &x1329); 
   fscanf(fp,"%f", &x1330); 
   fscanf(fp,"%f", &x1331); 
   fscanf(fp,"%f", &x1332); 
   fscanf(fp,"%f", &x1333); 
   fscanf(fp,"%f", &x1334); 
   fscanf(fp,"%f", &x1335); 
   fscanf(fp,"%f", &x1336); 
   fscanf(fp,"%f", &x1337); 
   fscanf(fp,"%f", &x1338); 
   fscanf(fp,"%f", &x1339); 
   fscanf(fp,"%f", &x1340); 
   fscanf(fp,"%f", &x1341); 
   fscanf(fp,"%f", &x1342); 
   fscanf(fp,"%f", &x1343); 
   fscanf(fp,"%f", &x1344); 
   fscanf(fp,"%f", &x1345); 

   fclose(fp);
   res=-( - 0.1*x632 - 0.6*x633 - 0.85*x634 - 0.2*x635 - 0.5*x636
 - 0.8*x637 - 0.3*x638 - 0.1*x639 - 0.6*x640 - 0.85*x641 - 0.2*x642
 - 0.5*x643 - 0.8*x644 - 0.3*x645 - 0.1*x646 - 0.6*x647 - 0.85*x648
 - 0.2*x649 - 0.5*x650 - 0.8*x651 - 0.3*x652 - 0.1*x653 - 0.6*x654
 - 0.85*x655 - 0.2*x656 - 0.5*x657 - 0.8*x658 - 0.3*x659 - 0.1*x730
 - 0.6*x731 - 0.85*x732 - 0.2*x733 - 0.5*x734 - 0.8*x735 - 0.3*x736
 - 0.1*x737 - 0.6*x738 - 0.85*x739 - 0.2*x740 - 0.5*x741 - 0.8*x742
 - 0.3*x743 - 0.1*x744 - 0.6*x745 - 0.85*x746 - 0.2*x747 - 0.5*x748
 - 0.8*x749 - 0.3*x750 - 0.1*x751 - 0.6*x752 - 0.85*x753 - 0.2*x754
 - 0.5*x755 - 0.8*x756 - 0.3*x757 - 0.1*x828 - 0.6*x829 - 0.85*x830
 - 0.2*x831 - 0.5*x832 - 0.8*x833 - 0.3*x834 - 0.1*x835 - 0.6*x836
 - 0.85*x837 - 0.2*x838 - 0.5*x839 - 0.8*x840 - 0.3*x841 - 0.1*x842
 - 0.6*x843 - 0.85*x844 - 0.2*x845 - 0.5*x846 - 0.8*x847 - 0.3*x848
 - 0.1*x849 - 0.6*x850 - 0.85*x851 - 0.2*x852 - 0.5*x853 - 0.8*x854
 - 0.3*x855 - 0.1*x926 - 0.6*x927 - 0.85*x928 - 0.2*x929 - 0.5*x930
 - 0.8*x931 - 0.3*x932 - 0.1*x933 - 0.6*x934 - 0.85*x935 - 0.2*x936
 - 0.5*x937 - 0.8*x938 - 0.3*x939 - 0.1*x940 - 0.6*x941 - 0.85*x942
 - 0.2*x943 - 0.5*x944 - 0.8*x945 - 0.3*x946 - 0.1*x947 - 0.6*x948
 - 0.85*x949 - 0.2*x950 - 0.5*x951 - 0.8*x952 - 0.3*x953 - 0.1*x1024
 - 0.6*x1025 - 0.85*x1026 - 0.2*x1027 - 0.5*x1028 - 0.8*x1029 - 0.3*x1030
 - 0.1*x1031 - 0.6*x1032 - 0.85*x1033 - 0.2*x1034 - 0.5*x1035 - 0.8*x1036
 - 0.3*x1037 - 0.1*x1038 - 0.6*x1039 - 0.85*x1040 - 0.2*x1041 - 0.5*x1042
 - 0.8*x1043 - 0.3*x1044 - 0.1*x1045 - 0.6*x1046 - 0.85*x1047 - 0.2*x1048
 - 0.5*x1049 - 0.8*x1050 - 0.3*x1051 - 0.1*x1122 - 0.6*x1123 - 0.85*x1124
 - 0.2*x1125 - 0.5*x1126 - 0.8*x1127 - 0.3*x1128 - 0.1*x1129 - 0.6*x1130
 - 0.85*x1131 - 0.2*x1132 - 0.5*x1133 - 0.8*x1134 - 0.3*x1135 - 0.1*x1136
 - 0.6*x1137 - 0.85*x1138 - 0.2*x1139 - 0.5*x1140 - 0.8*x1141 - 0.3*x1142
 - 0.1*x1143 - 0.6*x1144 - 0.85*x1145 - 0.2*x1146 - 0.5*x1147 - 0.8*x1148
 - 0.3*x1149 - 0.1*x1220 - 0.6*x1221 - 0.85*x1222 - 0.2*x1223 - 0.5*x1224
 - 0.8*x1225 - 0.3*x1226 - 0.1*x1227 - 0.6*x1228 - 0.85*x1229 - 0.2*x1230
 - 0.5*x1231 - 0.8*x1232 - 0.3*x1233 - 0.1*x1234 - 0.6*x1235 - 0.85*x1236
 - 0.2*x1237 - 0.5*x1238 - 0.8*x1239 - 0.3*x1240 - 0.1*x1241 - 0.6*x1242
 - 0.85*x1243 - 0.2*x1244 - 0.5*x1245 - 0.8*x1246 - 0.3*x1247 - 0.1*x1318
 - 0.6*x1319 - 0.85*x1320 - 0.2*x1321 - 0.5*x1322 - 0.8*x1323 - 0.3*x1324
 - 0.1*x1325 - 0.6*x1326 - 0.85*x1327 - 0.2*x1328 - 0.5*x1329 - 0.8*x1330
 - 0.3*x1331 - 0.1*x1332 - 0.6*x1333 - 0.85*x1334 - 0.2*x1335 - 0.5*x1336
 - 0.8*x1337 - 0.3*x1338 - 0.1*x1339 - 0.6*x1340 - 0.85*x1341 - 0.2*x1342
 - 0.5*x1343 - 0.8*x1344 - 0.3*x1345 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
