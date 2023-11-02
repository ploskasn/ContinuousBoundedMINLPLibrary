#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_lee3_10";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x772,x773,x774,x775,x776,x777,x778,x779,x780,x781,x782,x783,x784,x785,x786,x787,x788,x789,x790,x791,x792,x793,x794,x795,x796,x797,x798,x799,x870,x871,x872,x873,x874,x875,x876,x877,x878,x879,x880,x881,x882,x883,x884,x885,x886,x887,x888,x889,x890,x891,x892,x893,x894,x895,x896,x897,x968,x969,x970,x971,x972,x973,x974,x975,x976,x977,x978,x979,x980,x981,x982,x983,x984,x985,x986,x987,x988,x989,x990,x991,x992,x993,x994,x995,x1066,x1067,x1068,x1069,x1070,x1071,x1072,x1073,x1074,x1075,x1076,x1077,x1078,x1079,x1080,x1081,x1082,x1083,x1084,x1085,x1086,x1087,x1088,x1089,x1090,x1091,x1092,x1093,x1164,x1165,x1166,x1167,x1168,x1169,x1170,x1171,x1172,x1173,x1174,x1175,x1176,x1177,x1178,x1179,x1180,x1181,x1182,x1183,x1184,x1185,x1186,x1187,x1188,x1189,x1190,x1191,x1262,x1263,x1264,x1265,x1266,x1267,x1268,x1269,x1270,x1271,x1272,x1273,x1274,x1275,x1276,x1277,x1278,x1279,x1280,x1281,x1282,x1283,x1284,x1285,x1286,x1287,x1288,x1289,x1360,x1361,x1362,x1363,x1364,x1365,x1366,x1367,x1368,x1369,x1370,x1371,x1372,x1373,x1374,x1375,x1376,x1377,x1378,x1379,x1380,x1381,x1382,x1383,x1384,x1385,x1386,x1387,x1458,x1459,x1460,x1461,x1462,x1463,x1464,x1465,x1466,x1467,x1468,x1469,x1470,x1471,x1472,x1473,x1474,x1475,x1476,x1477,x1478,x1479,x1480,x1481,x1482,x1483,x1484,x1485,x1556,x1557,x1558,x1559,x1560,x1561,x1562,x1563,x1564,x1565,x1566,x1567,x1568,x1569,x1570,x1571,x1572,x1573,x1574,x1575,x1576,x1577,x1578,x1579,x1580,x1581,x1582,x1583,x1654,x1655,x1656,x1657,x1658,x1659,x1660,x1661,x1662,x1663,x1664,x1665,x1666,x1667,x1668,x1669,x1670,x1671,x1672,x1673,x1674,x1675,x1676,x1677,x1678,x1679,x1680,x1681;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &x1080); 
   fscanf(fp,"%f", &x1081); 
   fscanf(fp,"%f", &x1082); 
   fscanf(fp,"%f", &x1083); 
   fscanf(fp,"%f", &x1084); 
   fscanf(fp,"%f", &x1085); 
   fscanf(fp,"%f", &x1086); 
   fscanf(fp,"%f", &x1087); 
   fscanf(fp,"%f", &x1088); 
   fscanf(fp,"%f", &x1089); 
   fscanf(fp,"%f", &x1090); 
   fscanf(fp,"%f", &x1091); 
   fscanf(fp,"%f", &x1092); 
   fscanf(fp,"%f", &x1093); 
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
   fscanf(fp,"%f", &x1180); 
   fscanf(fp,"%f", &x1181); 
   fscanf(fp,"%f", &x1182); 
   fscanf(fp,"%f", &x1183); 
   fscanf(fp,"%f", &x1184); 
   fscanf(fp,"%f", &x1185); 
   fscanf(fp,"%f", &x1186); 
   fscanf(fp,"%f", &x1187); 
   fscanf(fp,"%f", &x1188); 
   fscanf(fp,"%f", &x1189); 
   fscanf(fp,"%f", &x1190); 
   fscanf(fp,"%f", &x1191); 
   fscanf(fp,"%f", &x1262); 
   fscanf(fp,"%f", &x1263); 
   fscanf(fp,"%f", &x1264); 
   fscanf(fp,"%f", &x1265); 
   fscanf(fp,"%f", &x1266); 
   fscanf(fp,"%f", &x1267); 
   fscanf(fp,"%f", &x1268); 
   fscanf(fp,"%f", &x1269); 
   fscanf(fp,"%f", &x1270); 
   fscanf(fp,"%f", &x1271); 
   fscanf(fp,"%f", &x1272); 
   fscanf(fp,"%f", &x1273); 
   fscanf(fp,"%f", &x1274); 
   fscanf(fp,"%f", &x1275); 
   fscanf(fp,"%f", &x1276); 
   fscanf(fp,"%f", &x1277); 
   fscanf(fp,"%f", &x1278); 
   fscanf(fp,"%f", &x1279); 
   fscanf(fp,"%f", &x1280); 
   fscanf(fp,"%f", &x1281); 
   fscanf(fp,"%f", &x1282); 
   fscanf(fp,"%f", &x1283); 
   fscanf(fp,"%f", &x1284); 
   fscanf(fp,"%f", &x1285); 
   fscanf(fp,"%f", &x1286); 
   fscanf(fp,"%f", &x1287); 
   fscanf(fp,"%f", &x1288); 
   fscanf(fp,"%f", &x1289); 
   fscanf(fp,"%f", &x1360); 
   fscanf(fp,"%f", &x1361); 
   fscanf(fp,"%f", &x1362); 
   fscanf(fp,"%f", &x1363); 
   fscanf(fp,"%f", &x1364); 
   fscanf(fp,"%f", &x1365); 
   fscanf(fp,"%f", &x1366); 
   fscanf(fp,"%f", &x1367); 
   fscanf(fp,"%f", &x1368); 
   fscanf(fp,"%f", &x1369); 
   fscanf(fp,"%f", &x1370); 
   fscanf(fp,"%f", &x1371); 
   fscanf(fp,"%f", &x1372); 
   fscanf(fp,"%f", &x1373); 
   fscanf(fp,"%f", &x1374); 
   fscanf(fp,"%f", &x1375); 
   fscanf(fp,"%f", &x1376); 
   fscanf(fp,"%f", &x1377); 
   fscanf(fp,"%f", &x1378); 
   fscanf(fp,"%f", &x1379); 
   fscanf(fp,"%f", &x1380); 
   fscanf(fp,"%f", &x1381); 
   fscanf(fp,"%f", &x1382); 
   fscanf(fp,"%f", &x1383); 
   fscanf(fp,"%f", &x1384); 
   fscanf(fp,"%f", &x1385); 
   fscanf(fp,"%f", &x1386); 
   fscanf(fp,"%f", &x1387); 
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
   fscanf(fp,"%f", &x1484); 
   fscanf(fp,"%f", &x1485); 
   fscanf(fp,"%f", &x1556); 
   fscanf(fp,"%f", &x1557); 
   fscanf(fp,"%f", &x1558); 
   fscanf(fp,"%f", &x1559); 
   fscanf(fp,"%f", &x1560); 
   fscanf(fp,"%f", &x1561); 
   fscanf(fp,"%f", &x1562); 
   fscanf(fp,"%f", &x1563); 
   fscanf(fp,"%f", &x1564); 
   fscanf(fp,"%f", &x1565); 
   fscanf(fp,"%f", &x1566); 
   fscanf(fp,"%f", &x1567); 
   fscanf(fp,"%f", &x1568); 
   fscanf(fp,"%f", &x1569); 
   fscanf(fp,"%f", &x1570); 
   fscanf(fp,"%f", &x1571); 
   fscanf(fp,"%f", &x1572); 
   fscanf(fp,"%f", &x1573); 
   fscanf(fp,"%f", &x1574); 
   fscanf(fp,"%f", &x1575); 
   fscanf(fp,"%f", &x1576); 
   fscanf(fp,"%f", &x1577); 
   fscanf(fp,"%f", &x1578); 
   fscanf(fp,"%f", &x1579); 
   fscanf(fp,"%f", &x1580); 
   fscanf(fp,"%f", &x1581); 
   fscanf(fp,"%f", &x1582); 
   fscanf(fp,"%f", &x1583); 
   fscanf(fp,"%f", &x1654); 
   fscanf(fp,"%f", &x1655); 
   fscanf(fp,"%f", &x1656); 
   fscanf(fp,"%f", &x1657); 
   fscanf(fp,"%f", &x1658); 
   fscanf(fp,"%f", &x1659); 
   fscanf(fp,"%f", &x1660); 
   fscanf(fp,"%f", &x1661); 
   fscanf(fp,"%f", &x1662); 
   fscanf(fp,"%f", &x1663); 
   fscanf(fp,"%f", &x1664); 
   fscanf(fp,"%f", &x1665); 
   fscanf(fp,"%f", &x1666); 
   fscanf(fp,"%f", &x1667); 
   fscanf(fp,"%f", &x1668); 
   fscanf(fp,"%f", &x1669); 
   fscanf(fp,"%f", &x1670); 
   fscanf(fp,"%f", &x1671); 
   fscanf(fp,"%f", &x1672); 
   fscanf(fp,"%f", &x1673); 
   fscanf(fp,"%f", &x1674); 
   fscanf(fp,"%f", &x1675); 
   fscanf(fp,"%f", &x1676); 
   fscanf(fp,"%f", &x1677); 
   fscanf(fp,"%f", &x1678); 
   fscanf(fp,"%f", &x1679); 
   fscanf(fp,"%f", &x1680); 
   fscanf(fp,"%f", &x1681); 

   fclose(fp);
   res=-( - 0.1*x772 - 0.6*x773 - 0.85*x774 - 0.2*x775 - 0.5*x776
 - 0.8*x777 - 0.3*x778 - 0.1*x779 - 0.6*x780 - 0.85*x781 - 0.2*x782
 - 0.5*x783 - 0.8*x784 - 0.3*x785 - 0.1*x786 - 0.6*x787 - 0.85*x788
 - 0.2*x789 - 0.5*x790 - 0.8*x791 - 0.3*x792 - 0.1*x793 - 0.6*x794
 - 0.85*x795 - 0.2*x796 - 0.5*x797 - 0.8*x798 - 0.3*x799 - 0.1*x870
 - 0.6*x871 - 0.85*x872 - 0.2*x873 - 0.5*x874 - 0.8*x875 - 0.3*x876
 - 0.1*x877 - 0.6*x878 - 0.85*x879 - 0.2*x880 - 0.5*x881 - 0.8*x882
 - 0.3*x883 - 0.1*x884 - 0.6*x885 - 0.85*x886 - 0.2*x887 - 0.5*x888
 - 0.8*x889 - 0.3*x890 - 0.1*x891 - 0.6*x892 - 0.85*x893 - 0.2*x894
 - 0.5*x895 - 0.8*x896 - 0.3*x897 - 0.1*x968 - 0.6*x969 - 0.85*x970
 - 0.2*x971 - 0.5*x972 - 0.8*x973 - 0.3*x974 - 0.1*x975 - 0.6*x976
 - 0.85*x977 - 0.2*x978 - 0.5*x979 - 0.8*x980 - 0.3*x981 - 0.1*x982
 - 0.6*x983 - 0.85*x984 - 0.2*x985 - 0.5*x986 - 0.8*x987 - 0.3*x988
 - 0.1*x989 - 0.6*x990 - 0.85*x991 - 0.2*x992 - 0.5*x993 - 0.8*x994
 - 0.3*x995 - 0.1*x1066 - 0.6*x1067 - 0.85*x1068 - 0.2*x1069 - 0.5*x1070
 - 0.8*x1071 - 0.3*x1072 - 0.1*x1073 - 0.6*x1074 - 0.85*x1075 - 0.2*x1076
 - 0.5*x1077 - 0.8*x1078 - 0.3*x1079 - 0.1*x1080 - 0.6*x1081 - 0.85*x1082
 - 0.2*x1083 - 0.5*x1084 - 0.8*x1085 - 0.3*x1086 - 0.1*x1087 - 0.6*x1088
 - 0.85*x1089 - 0.2*x1090 - 0.5*x1091 - 0.8*x1092 - 0.3*x1093 - 0.1*x1164
 - 0.6*x1165 - 0.85*x1166 - 0.2*x1167 - 0.5*x1168 - 0.8*x1169 - 0.3*x1170
 - 0.1*x1171 - 0.6*x1172 - 0.85*x1173 - 0.2*x1174 - 0.5*x1175 - 0.8*x1176
 - 0.3*x1177 - 0.1*x1178 - 0.6*x1179 - 0.85*x1180 - 0.2*x1181 - 0.5*x1182
 - 0.8*x1183 - 0.3*x1184 - 0.1*x1185 - 0.6*x1186 - 0.85*x1187 - 0.2*x1188
 - 0.5*x1189 - 0.8*x1190 - 0.3*x1191 - 0.1*x1262 - 0.6*x1263 - 0.85*x1264
 - 0.2*x1265 - 0.5*x1266 - 0.8*x1267 - 0.3*x1268 - 0.1*x1269 - 0.6*x1270
 - 0.85*x1271 - 0.2*x1272 - 0.5*x1273 - 0.8*x1274 - 0.3*x1275 - 0.1*x1276
 - 0.6*x1277 - 0.85*x1278 - 0.2*x1279 - 0.5*x1280 - 0.8*x1281 - 0.3*x1282
 - 0.1*x1283 - 0.6*x1284 - 0.85*x1285 - 0.2*x1286 - 0.5*x1287 - 0.8*x1288
 - 0.3*x1289 - 0.1*x1360 - 0.6*x1361 - 0.85*x1362 - 0.2*x1363 - 0.5*x1364
 - 0.8*x1365 - 0.3*x1366 - 0.1*x1367 - 0.6*x1368 - 0.85*x1369 - 0.2*x1370
 - 0.5*x1371 - 0.8*x1372 - 0.3*x1373 - 0.1*x1374 - 0.6*x1375 - 0.85*x1376
 - 0.2*x1377 - 0.5*x1378 - 0.8*x1379 - 0.3*x1380 - 0.1*x1381 - 0.6*x1382
 - 0.85*x1383 - 0.2*x1384 - 0.5*x1385 - 0.8*x1386 - 0.3*x1387 - 0.1*x1458
 - 0.6*x1459 - 0.85*x1460 - 0.2*x1461 - 0.5*x1462 - 0.8*x1463 - 0.3*x1464
 - 0.1*x1465 - 0.6*x1466 - 0.85*x1467 - 0.2*x1468 - 0.5*x1469 - 0.8*x1470
 - 0.3*x1471 - 0.1*x1472 - 0.6*x1473 - 0.85*x1474 - 0.2*x1475 - 0.5*x1476
 - 0.8*x1477 - 0.3*x1478 - 0.1*x1479 - 0.6*x1480 - 0.85*x1481 - 0.2*x1482
 - 0.5*x1483 - 0.8*x1484 - 0.3*x1485 - 0.1*x1556 - 0.6*x1557 - 0.85*x1558
 - 0.2*x1559 - 0.5*x1560 - 0.8*x1561 - 0.3*x1562 - 0.1*x1563 - 0.6*x1564
 - 0.85*x1565 - 0.2*x1566 - 0.5*x1567 - 0.8*x1568 - 0.3*x1569 - 0.1*x1570
 - 0.6*x1571 - 0.85*x1572 - 0.2*x1573 - 0.5*x1574 - 0.8*x1575 - 0.3*x1576
 - 0.1*x1577 - 0.6*x1578 - 0.85*x1579 - 0.2*x1580 - 0.5*x1581 - 0.8*x1582
 - 0.3*x1583 - 0.1*x1654 - 0.6*x1655 - 0.85*x1656 - 0.2*x1657 - 0.5*x1658
 - 0.8*x1659 - 0.3*x1660 - 0.1*x1661 - 0.6*x1662 - 0.85*x1663 - 0.2*x1664
 - 0.5*x1665 - 0.8*x1666 - 0.3*x1667 - 0.1*x1668 - 0.6*x1669 - 0.85*x1670
 - 0.2*x1671 - 0.5*x1672 - 0.8*x1673 - 0.3*x1674 - 0.1*x1675 - 0.6*x1676
 - 0.85*x1677 - 0.2*x1678 - 0.5*x1679 - 0.8*x1680 - 0.3*x1681 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
