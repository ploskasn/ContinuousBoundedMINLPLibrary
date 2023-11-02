#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_lee4_06";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x676,x677,x678,x679,x680,x681,x682,x683,x684,x685,x686,x687,x688,x689,x690,x691,x692,x693,x694,x695,x696,x697,x698,x699,x700,x701,x702,x703,x704,x705,x706,x707,x708,x709,x710,x711,x712,x713,x714,x715,x716,x717,x718,x719,x720,x721,x722,x723,x828,x829,x830,x831,x832,x833,x834,x835,x836,x837,x838,x839,x840,x841,x842,x843,x844,x845,x846,x847,x848,x849,x850,x851,x852,x853,x854,x855,x856,x857,x858,x859,x860,x861,x862,x863,x864,x865,x866,x867,x868,x869,x870,x871,x872,x873,x874,x875,x980,x981,x982,x983,x984,x985,x986,x987,x988,x989,x990,x991,x992,x993,x994,x995,x996,x997,x998,x999,x1000,x1001,x1002,x1003,x1004,x1005,x1006,x1007,x1008,x1009,x1010,x1011,x1012,x1013,x1014,x1015,x1016,x1017,x1018,x1019,x1020,x1021,x1022,x1023,x1024,x1025,x1026,x1027,x1132,x1133,x1134,x1135,x1136,x1137,x1138,x1139,x1140,x1141,x1142,x1143,x1144,x1145,x1146,x1147,x1148,x1149,x1150,x1151,x1152,x1153,x1154,x1155,x1156,x1157,x1158,x1159,x1160,x1161,x1162,x1163,x1164,x1165,x1166,x1167,x1168,x1169,x1170,x1171,x1172,x1173,x1174,x1175,x1176,x1177,x1178,x1179,x1284,x1285,x1286,x1287,x1288,x1289,x1290,x1291,x1292,x1293,x1294,x1295,x1296,x1297,x1298,x1299,x1300,x1301,x1302,x1303,x1304,x1305,x1306,x1307,x1308,x1309,x1310,x1311,x1312,x1313,x1314,x1315,x1316,x1317,x1318,x1319,x1320,x1321,x1322,x1323,x1324,x1325,x1326,x1327,x1328,x1329,x1330,x1331,x1436,x1437,x1438,x1439,x1440,x1441,x1442,x1443,x1444,x1445,x1446,x1447,x1448,x1449,x1450,x1451,x1452,x1453,x1454,x1455,x1456,x1457,x1458,x1459,x1460,x1461,x1462,x1463,x1464,x1465,x1466,x1467,x1468,x1469,x1470,x1471,x1472,x1473,x1474,x1475,x1476,x1477,x1478,x1479,x1480,x1481,x1482,x1483;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &x716); 
   fscanf(fp,"%f", &x717); 
   fscanf(fp,"%f", &x718); 
   fscanf(fp,"%f", &x719); 
   fscanf(fp,"%f", &x720); 
   fscanf(fp,"%f", &x721); 
   fscanf(fp,"%f", &x722); 
   fscanf(fp,"%f", &x723); 
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
   fscanf(fp,"%f", &x1010); 
   fscanf(fp,"%f", &x1011); 
   fscanf(fp,"%f", &x1012); 
   fscanf(fp,"%f", &x1013); 
   fscanf(fp,"%f", &x1014); 
   fscanf(fp,"%f", &x1015); 
   fscanf(fp,"%f", &x1016); 
   fscanf(fp,"%f", &x1017); 
   fscanf(fp,"%f", &x1018); 
   fscanf(fp,"%f", &x1019); 
   fscanf(fp,"%f", &x1020); 
   fscanf(fp,"%f", &x1021); 
   fscanf(fp,"%f", &x1022); 
   fscanf(fp,"%f", &x1023); 
   fscanf(fp,"%f", &x1024); 
   fscanf(fp,"%f", &x1025); 
   fscanf(fp,"%f", &x1026); 
   fscanf(fp,"%f", &x1027); 
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
   fscanf(fp,"%f", &x1178); 
   fscanf(fp,"%f", &x1179); 
   fscanf(fp,"%f", &x1284); 
   fscanf(fp,"%f", &x1285); 
   fscanf(fp,"%f", &x1286); 
   fscanf(fp,"%f", &x1287); 
   fscanf(fp,"%f", &x1288); 
   fscanf(fp,"%f", &x1289); 
   fscanf(fp,"%f", &x1290); 
   fscanf(fp,"%f", &x1291); 
   fscanf(fp,"%f", &x1292); 
   fscanf(fp,"%f", &x1293); 
   fscanf(fp,"%f", &x1294); 
   fscanf(fp,"%f", &x1295); 
   fscanf(fp,"%f", &x1296); 
   fscanf(fp,"%f", &x1297); 
   fscanf(fp,"%f", &x1298); 
   fscanf(fp,"%f", &x1299); 
   fscanf(fp,"%f", &x1300); 
   fscanf(fp,"%f", &x1301); 
   fscanf(fp,"%f", &x1302); 
   fscanf(fp,"%f", &x1303); 
   fscanf(fp,"%f", &x1304); 
   fscanf(fp,"%f", &x1305); 
   fscanf(fp,"%f", &x1306); 
   fscanf(fp,"%f", &x1307); 
   fscanf(fp,"%f", &x1308); 
   fscanf(fp,"%f", &x1309); 
   fscanf(fp,"%f", &x1310); 
   fscanf(fp,"%f", &x1311); 
   fscanf(fp,"%f", &x1312); 
   fscanf(fp,"%f", &x1313); 
   fscanf(fp,"%f", &x1314); 
   fscanf(fp,"%f", &x1315); 
   fscanf(fp,"%f", &x1316); 
   fscanf(fp,"%f", &x1317); 
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
   fscanf(fp,"%f", &x1436); 
   fscanf(fp,"%f", &x1437); 
   fscanf(fp,"%f", &x1438); 
   fscanf(fp,"%f", &x1439); 
   fscanf(fp,"%f", &x1440); 
   fscanf(fp,"%f", &x1441); 
   fscanf(fp,"%f", &x1442); 
   fscanf(fp,"%f", &x1443); 
   fscanf(fp,"%f", &x1444); 
   fscanf(fp,"%f", &x1445); 
   fscanf(fp,"%f", &x1446); 
   fscanf(fp,"%f", &x1447); 
   fscanf(fp,"%f", &x1448); 
   fscanf(fp,"%f", &x1449); 
   fscanf(fp,"%f", &x1450); 
   fscanf(fp,"%f", &x1451); 
   fscanf(fp,"%f", &x1452); 
   fscanf(fp,"%f", &x1453); 
   fscanf(fp,"%f", &x1454); 
   fscanf(fp,"%f", &x1455); 
   fscanf(fp,"%f", &x1456); 
   fscanf(fp,"%f", &x1457); 
   fscanf(fp,"%f", &x1458); 
   fscanf(fp,"%f", &x1459); 
   fscanf(fp,"%f", &x1460); 
   fscanf(fp,"%f", &x1461); 
   fscanf(fp,"%f", &x1462); 
   fscanf(fp,"%f", &x1463); 
   fscanf(fp,"%f", &x1464); 
   fscanf(fp,"%f", &x1465); 
   fscanf(fp,"%f", &x1466); 
   fscanf(fp,"%f", &x1467); 
   fscanf(fp,"%f", &x1468); 
   fscanf(fp,"%f", &x1469); 
   fscanf(fp,"%f", &x1470); 
   fscanf(fp,"%f", &x1471); 
   fscanf(fp,"%f", &x1472); 
   fscanf(fp,"%f", &x1473); 
   fscanf(fp,"%f", &x1474); 
   fscanf(fp,"%f", &x1475); 
   fscanf(fp,"%f", &x1476); 
   fscanf(fp,"%f", &x1477); 
   fscanf(fp,"%f", &x1478); 
   fscanf(fp,"%f", &x1479); 
   fscanf(fp,"%f", &x1480); 
   fscanf(fp,"%f", &x1481); 
   fscanf(fp,"%f", &x1482); 
   fscanf(fp,"%f", &x1483); 

   fclose(fp);
   res=-( - 0.3*x676 - 0.5*x677 - 0.65*x678 - 0.31*x679 - 0.75*x680
 - 0.317*x681 - 0.483*x682 - 0.633*x683 - 0.3*x684 - 0.5*x685 - 0.65*x686
 - 0.31*x687 - 0.75*x688 - 0.317*x689 - 0.483*x690 - 0.633*x691 - 0.3*x692
 - 0.5*x693 - 0.65*x694 - 0.31*x695 - 0.75*x696 - 0.317*x697 - 0.483*x698
 - 0.633*x699 - 0.3*x700 - 0.5*x701 - 0.65*x702 - 0.31*x703 - 0.75*x704
 - 0.317*x705 - 0.483*x706 - 0.633*x707 - 0.3*x708 - 0.5*x709 - 0.65*x710
 - 0.31*x711 - 0.75*x712 - 0.317*x713 - 0.483*x714 - 0.633*x715 - 0.3*x716
 - 0.5*x717 - 0.65*x718 - 0.31*x719 - 0.75*x720 - 0.317*x721 - 0.483*x722
 - 0.633*x723 - 0.3*x828 - 0.5*x829 - 0.65*x830 - 0.31*x831 - 0.75*x832
 - 0.317*x833 - 0.483*x834 - 0.633*x835 - 0.3*x836 - 0.5*x837 - 0.65*x838
 - 0.31*x839 - 0.75*x840 - 0.317*x841 - 0.483*x842 - 0.633*x843 - 0.3*x844
 - 0.5*x845 - 0.65*x846 - 0.31*x847 - 0.75*x848 - 0.317*x849 - 0.483*x850
 - 0.633*x851 - 0.3*x852 - 0.5*x853 - 0.65*x854 - 0.31*x855 - 0.75*x856
 - 0.317*x857 - 0.483*x858 - 0.633*x859 - 0.3*x860 - 0.5*x861 - 0.65*x862
 - 0.31*x863 - 0.75*x864 - 0.317*x865 - 0.483*x866 - 0.633*x867 - 0.3*x868
 - 0.5*x869 - 0.65*x870 - 0.31*x871 - 0.75*x872 - 0.317*x873 - 0.483*x874
 - 0.633*x875 - 0.3*x980 - 0.5*x981 - 0.65*x982 - 0.31*x983 - 0.75*x984
 - 0.317*x985 - 0.483*x986 - 0.633*x987 - 0.3*x988 - 0.5*x989 - 0.65*x990
 - 0.31*x991 - 0.75*x992 - 0.317*x993 - 0.483*x994 - 0.633*x995 - 0.3*x996
 - 0.5*x997 - 0.65*x998 - 0.31*x999 - 0.75*x1000 - 0.317*x1001
 - 0.483*x1002 - 0.633*x1003 - 0.3*x1004 - 0.5*x1005 - 0.65*x1006
 - 0.31*x1007 - 0.75*x1008 - 0.317*x1009 - 0.483*x1010 - 0.633*x1011
 - 0.3*x1012 - 0.5*x1013 - 0.65*x1014 - 0.31*x1015 - 0.75*x1016
 - 0.317*x1017 - 0.483*x1018 - 0.633*x1019 - 0.3*x1020 - 0.5*x1021
 - 0.65*x1022 - 0.31*x1023 - 0.75*x1024 - 0.317*x1025 - 0.483*x1026
 - 0.633*x1027 - 0.3*x1132 - 0.5*x1133 - 0.65*x1134 - 0.31*x1135
 - 0.75*x1136 - 0.317*x1137 - 0.483*x1138 - 0.633*x1139 - 0.3*x1140
 - 0.5*x1141 - 0.65*x1142 - 0.31*x1143 - 0.75*x1144 - 0.317*x1145
 - 0.483*x1146 - 0.633*x1147 - 0.3*x1148 - 0.5*x1149 - 0.65*x1150
 - 0.31*x1151 - 0.75*x1152 - 0.317*x1153 - 0.483*x1154 - 0.633*x1155
 - 0.3*x1156 - 0.5*x1157 - 0.65*x1158 - 0.31*x1159 - 0.75*x1160
 - 0.317*x1161 - 0.483*x1162 - 0.633*x1163 - 0.3*x1164 - 0.5*x1165
 - 0.65*x1166 - 0.31*x1167 - 0.75*x1168 - 0.317*x1169 - 0.483*x1170
 - 0.633*x1171 - 0.3*x1172 - 0.5*x1173 - 0.65*x1174 - 0.31*x1175
 - 0.75*x1176 - 0.317*x1177 - 0.483*x1178 - 0.633*x1179 - 0.3*x1284
 - 0.5*x1285 - 0.65*x1286 - 0.31*x1287 - 0.75*x1288 - 0.317*x1289
 - 0.483*x1290 - 0.633*x1291 - 0.3*x1292 - 0.5*x1293 - 0.65*x1294
 - 0.31*x1295 - 0.75*x1296 - 0.317*x1297 - 0.483*x1298 - 0.633*x1299
 - 0.3*x1300 - 0.5*x1301 - 0.65*x1302 - 0.31*x1303 - 0.75*x1304
 - 0.317*x1305 - 0.483*x1306 - 0.633*x1307 - 0.3*x1308 - 0.5*x1309
 - 0.65*x1310 - 0.31*x1311 - 0.75*x1312 - 0.317*x1313 - 0.483*x1314
 - 0.633*x1315 - 0.3*x1316 - 0.5*x1317 - 0.65*x1318 - 0.31*x1319
 - 0.75*x1320 - 0.317*x1321 - 0.483*x1322 - 0.633*x1323 - 0.3*x1324
 - 0.5*x1325 - 0.65*x1326 - 0.31*x1327 - 0.75*x1328 - 0.317*x1329
 - 0.483*x1330 - 0.633*x1331 - 0.3*x1436 - 0.5*x1437 - 0.65*x1438
 - 0.31*x1439 - 0.75*x1440 - 0.317*x1441 - 0.483*x1442 - 0.633*x1443
 - 0.3*x1444 - 0.5*x1445 - 0.65*x1446 - 0.31*x1447 - 0.75*x1448
 - 0.317*x1449 - 0.483*x1450 - 0.633*x1451 - 0.3*x1452 - 0.5*x1453
 - 0.65*x1454 - 0.31*x1455 - 0.75*x1456 - 0.317*x1457 - 0.483*x1458
 - 0.633*x1459 - 0.3*x1460 - 0.5*x1461 - 0.65*x1462 - 0.31*x1463
 - 0.75*x1464 - 0.317*x1465 - 0.483*x1466 - 0.633*x1467 - 0.3*x1468
 - 0.5*x1469 - 0.65*x1470 - 0.31*x1471 - 0.75*x1472 - 0.317*x1473
 - 0.483*x1474 - 0.633*x1475 - 0.3*x1476 - 0.5*x1477 - 0.65*x1478
 - 0.31*x1479 - 0.75*x1480 - 0.317*x1481 - 0.483*x1482 - 0.633*x1483 - 0
);

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
