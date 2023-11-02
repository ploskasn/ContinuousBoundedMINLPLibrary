#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_lee2_10";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x762,x763,x764,x765,x766,x767,x768,x769,x770,x771,x772,x773,x774,x775,x776,x777,x778,x779,x780,x781,x782,x783,x784,x785,x846,x847,x848,x849,x850,x851,x852,x853,x854,x855,x856,x857,x858,x859,x860,x861,x862,x863,x864,x865,x866,x867,x868,x869,x930,x931,x932,x933,x934,x935,x936,x937,x938,x939,x940,x941,x942,x943,x944,x945,x946,x947,x948,x949,x950,x951,x952,x953,x1014,x1015,x1016,x1017,x1018,x1019,x1020,x1021,x1022,x1023,x1024,x1025,x1026,x1027,x1028,x1029,x1030,x1031,x1032,x1033,x1034,x1035,x1036,x1037,x1098,x1099,x1100,x1101,x1102,x1103,x1104,x1105,x1106,x1107,x1108,x1109,x1110,x1111,x1112,x1113,x1114,x1115,x1116,x1117,x1118,x1119,x1120,x1121,x1182,x1183,x1184,x1185,x1186,x1187,x1188,x1189,x1190,x1191,x1192,x1193,x1194,x1195,x1196,x1197,x1198,x1199,x1200,x1201,x1202,x1203,x1204,x1205,x1266,x1267,x1268,x1269,x1270,x1271,x1272,x1273,x1274,x1275,x1276,x1277,x1278,x1279,x1280,x1281,x1282,x1283,x1284,x1285,x1286,x1287,x1288,x1289,x1350,x1351,x1352,x1353,x1354,x1355,x1356,x1357,x1358,x1359,x1360,x1361,x1362,x1363,x1364,x1365,x1366,x1367,x1368,x1369,x1370,x1371,x1372,x1373,x1434,x1435,x1436,x1437,x1438,x1439,x1440,x1441,x1442,x1443,x1444,x1445,x1446,x1447,x1448,x1449,x1450,x1451,x1452,x1453,x1454,x1455,x1456,x1457,x1518,x1519,x1520,x1521,x1522,x1523,x1524,x1525,x1526,x1527,x1528,x1529,x1530,x1531,x1532,x1533,x1534,x1535,x1536,x1537,x1538,x1539,x1540,x1541;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &x1098); 
   fscanf(fp,"%f", &x1099); 
   fscanf(fp,"%f", &x1100); 
   fscanf(fp,"%f", &x1101); 
   fscanf(fp,"%f", &x1102); 
   fscanf(fp,"%f", &x1103); 
   fscanf(fp,"%f", &x1104); 
   fscanf(fp,"%f", &x1105); 
   fscanf(fp,"%f", &x1106); 
   fscanf(fp,"%f", &x1107); 
   fscanf(fp,"%f", &x1108); 
   fscanf(fp,"%f", &x1109); 
   fscanf(fp,"%f", &x1110); 
   fscanf(fp,"%f", &x1111); 
   fscanf(fp,"%f", &x1112); 
   fscanf(fp,"%f", &x1113); 
   fscanf(fp,"%f", &x1114); 
   fscanf(fp,"%f", &x1115); 
   fscanf(fp,"%f", &x1116); 
   fscanf(fp,"%f", &x1117); 
   fscanf(fp,"%f", &x1118); 
   fscanf(fp,"%f", &x1119); 
   fscanf(fp,"%f", &x1120); 
   fscanf(fp,"%f", &x1121); 
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
   fscanf(fp,"%f", &x1192); 
   fscanf(fp,"%f", &x1193); 
   fscanf(fp,"%f", &x1194); 
   fscanf(fp,"%f", &x1195); 
   fscanf(fp,"%f", &x1196); 
   fscanf(fp,"%f", &x1197); 
   fscanf(fp,"%f", &x1198); 
   fscanf(fp,"%f", &x1199); 
   fscanf(fp,"%f", &x1200); 
   fscanf(fp,"%f", &x1201); 
   fscanf(fp,"%f", &x1202); 
   fscanf(fp,"%f", &x1203); 
   fscanf(fp,"%f", &x1204); 
   fscanf(fp,"%f", &x1205); 
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
   fscanf(fp,"%f", &x1350); 
   fscanf(fp,"%f", &x1351); 
   fscanf(fp,"%f", &x1352); 
   fscanf(fp,"%f", &x1353); 
   fscanf(fp,"%f", &x1354); 
   fscanf(fp,"%f", &x1355); 
   fscanf(fp,"%f", &x1356); 
   fscanf(fp,"%f", &x1357); 
   fscanf(fp,"%f", &x1358); 
   fscanf(fp,"%f", &x1359); 
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
   fscanf(fp,"%f", &x1434); 
   fscanf(fp,"%f", &x1435); 
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
   fscanf(fp,"%f", &x1518); 
   fscanf(fp,"%f", &x1519); 
   fscanf(fp,"%f", &x1520); 
   fscanf(fp,"%f", &x1521); 
   fscanf(fp,"%f", &x1522); 
   fscanf(fp,"%f", &x1523); 
   fscanf(fp,"%f", &x1524); 
   fscanf(fp,"%f", &x1525); 
   fscanf(fp,"%f", &x1526); 
   fscanf(fp,"%f", &x1527); 
   fscanf(fp,"%f", &x1528); 
   fscanf(fp,"%f", &x1529); 
   fscanf(fp,"%f", &x1530); 
   fscanf(fp,"%f", &x1531); 
   fscanf(fp,"%f", &x1532); 
   fscanf(fp,"%f", &x1533); 
   fscanf(fp,"%f", &x1534); 
   fscanf(fp,"%f", &x1535); 
   fscanf(fp,"%f", &x1536); 
   fscanf(fp,"%f", &x1537); 
   fscanf(fp,"%f", &x1538); 
   fscanf(fp,"%f", &x1539); 
   fscanf(fp,"%f", &x1540); 
   fscanf(fp,"%f", &x1541); 

   fclose(fp);
   res=-( - 0.1*x762 - 0.3*x763 - 0.5*x764 - 0.167*x765 - 0.3*x766
 - 0.433*x767 - 0.1*x768 - 0.3*x769 - 0.5*x770 - 0.167*x771 - 0.3*x772
 - 0.433*x773 - 0.1*x774 - 0.3*x775 - 0.5*x776 - 0.167*x777 - 0.3*x778
 - 0.433*x779 - 0.1*x780 - 0.3*x781 - 0.5*x782 - 0.167*x783 - 0.3*x784
 - 0.433*x785 - 0.1*x846 - 0.3*x847 - 0.5*x848 - 0.167*x849 - 0.3*x850
 - 0.433*x851 - 0.1*x852 - 0.3*x853 - 0.5*x854 - 0.167*x855 - 0.3*x856
 - 0.433*x857 - 0.1*x858 - 0.3*x859 - 0.5*x860 - 0.167*x861 - 0.3*x862
 - 0.433*x863 - 0.1*x864 - 0.3*x865 - 0.5*x866 - 0.167*x867 - 0.3*x868
 - 0.433*x869 - 0.1*x930 - 0.3*x931 - 0.5*x932 - 0.167*x933 - 0.3*x934
 - 0.433*x935 - 0.1*x936 - 0.3*x937 - 0.5*x938 - 0.167*x939 - 0.3*x940
 - 0.433*x941 - 0.1*x942 - 0.3*x943 - 0.5*x944 - 0.167*x945 - 0.3*x946
 - 0.433*x947 - 0.1*x948 - 0.3*x949 - 0.5*x950 - 0.167*x951 - 0.3*x952
 - 0.433*x953 - 0.1*x1014 - 0.3*x1015 - 0.5*x1016 - 0.167*x1017
 - 0.3*x1018 - 0.433*x1019 - 0.1*x1020 - 0.3*x1021 - 0.5*x1022
 - 0.167*x1023 - 0.3*x1024 - 0.433*x1025 - 0.1*x1026 - 0.3*x1027
 - 0.5*x1028 - 0.167*x1029 - 0.3*x1030 - 0.433*x1031 - 0.1*x1032
 - 0.3*x1033 - 0.5*x1034 - 0.167*x1035 - 0.3*x1036 - 0.433*x1037
 - 0.1*x1098 - 0.3*x1099 - 0.5*x1100 - 0.167*x1101 - 0.3*x1102
 - 0.433*x1103 - 0.1*x1104 - 0.3*x1105 - 0.5*x1106 - 0.167*x1107
 - 0.3*x1108 - 0.433*x1109 - 0.1*x1110 - 0.3*x1111 - 0.5*x1112
 - 0.167*x1113 - 0.3*x1114 - 0.433*x1115 - 0.1*x1116 - 0.3*x1117
 - 0.5*x1118 - 0.167*x1119 - 0.3*x1120 - 0.433*x1121 - 0.1*x1182
 - 0.3*x1183 - 0.5*x1184 - 0.167*x1185 - 0.3*x1186 - 0.433*x1187
 - 0.1*x1188 - 0.3*x1189 - 0.5*x1190 - 0.167*x1191 - 0.3*x1192
 - 0.433*x1193 - 0.1*x1194 - 0.3*x1195 - 0.5*x1196 - 0.167*x1197
 - 0.3*x1198 - 0.433*x1199 - 0.1*x1200 - 0.3*x1201 - 0.5*x1202
 - 0.167*x1203 - 0.3*x1204 - 0.433*x1205 - 0.1*x1266 - 0.3*x1267
 - 0.5*x1268 - 0.167*x1269 - 0.3*x1270 - 0.433*x1271 - 0.1*x1272
 - 0.3*x1273 - 0.5*x1274 - 0.167*x1275 - 0.3*x1276 - 0.433*x1277
 - 0.1*x1278 - 0.3*x1279 - 0.5*x1280 - 0.167*x1281 - 0.3*x1282
 - 0.433*x1283 - 0.1*x1284 - 0.3*x1285 - 0.5*x1286 - 0.167*x1287
 - 0.3*x1288 - 0.433*x1289 - 0.1*x1350 - 0.3*x1351 - 0.5*x1352
 - 0.167*x1353 - 0.3*x1354 - 0.433*x1355 - 0.1*x1356 - 0.3*x1357
 - 0.5*x1358 - 0.167*x1359 - 0.3*x1360 - 0.433*x1361 - 0.1*x1362
 - 0.3*x1363 - 0.5*x1364 - 0.167*x1365 - 0.3*x1366 - 0.433*x1367
 - 0.1*x1368 - 0.3*x1369 - 0.5*x1370 - 0.167*x1371 - 0.3*x1372
 - 0.433*x1373 - 0.1*x1434 - 0.3*x1435 - 0.5*x1436 - 0.167*x1437
 - 0.3*x1438 - 0.433*x1439 - 0.1*x1440 - 0.3*x1441 - 0.5*x1442
 - 0.167*x1443 - 0.3*x1444 - 0.433*x1445 - 0.1*x1446 - 0.3*x1447
 - 0.5*x1448 - 0.167*x1449 - 0.3*x1450 - 0.433*x1451 - 0.1*x1452
 - 0.3*x1453 - 0.5*x1454 - 0.167*x1455 - 0.3*x1456 - 0.433*x1457
 - 0.1*x1518 - 0.3*x1519 - 0.5*x1520 - 0.167*x1521 - 0.3*x1522
 - 0.433*x1523 - 0.1*x1524 - 0.3*x1525 - 0.5*x1526 - 0.167*x1527
 - 0.3*x1528 - 0.433*x1529 - 0.1*x1530 - 0.3*x1531 - 0.5*x1532
 - 0.167*x1533 - 0.3*x1534 - 0.433*x1535 - 0.1*x1536 - 0.3*x1537
 - 0.5*x1538 - 0.167*x1539 - 0.3*x1540 - 0.433*x1541 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
