#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_lee3_09";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x702,x703,x704,x705,x706,x707,x708,x709,x710,x711,x712,x713,x714,x715,x716,x717,x718,x719,x720,x721,x722,x723,x724,x725,x726,x727,x728,x729,x800,x801,x802,x803,x804,x805,x806,x807,x808,x809,x810,x811,x812,x813,x814,x815,x816,x817,x818,x819,x820,x821,x822,x823,x824,x825,x826,x827,x898,x899,x900,x901,x902,x903,x904,x905,x906,x907,x908,x909,x910,x911,x912,x913,x914,x915,x916,x917,x918,x919,x920,x921,x922,x923,x924,x925,x996,x997,x998,x999,x1000,x1001,x1002,x1003,x1004,x1005,x1006,x1007,x1008,x1009,x1010,x1011,x1012,x1013,x1014,x1015,x1016,x1017,x1018,x1019,x1020,x1021,x1022,x1023,x1094,x1095,x1096,x1097,x1098,x1099,x1100,x1101,x1102,x1103,x1104,x1105,x1106,x1107,x1108,x1109,x1110,x1111,x1112,x1113,x1114,x1115,x1116,x1117,x1118,x1119,x1120,x1121,x1192,x1193,x1194,x1195,x1196,x1197,x1198,x1199,x1200,x1201,x1202,x1203,x1204,x1205,x1206,x1207,x1208,x1209,x1210,x1211,x1212,x1213,x1214,x1215,x1216,x1217,x1218,x1219,x1290,x1291,x1292,x1293,x1294,x1295,x1296,x1297,x1298,x1299,x1300,x1301,x1302,x1303,x1304,x1305,x1306,x1307,x1308,x1309,x1310,x1311,x1312,x1313,x1314,x1315,x1316,x1317,x1388,x1389,x1390,x1391,x1392,x1393,x1394,x1395,x1396,x1397,x1398,x1399,x1400,x1401,x1402,x1403,x1404,x1405,x1406,x1407,x1408,x1409,x1410,x1411,x1412,x1413,x1414,x1415,x1486,x1487,x1488,x1489,x1490,x1491,x1492,x1493,x1494,x1495,x1496,x1497,x1498,x1499,x1500,x1501,x1502,x1503,x1504,x1505,x1506,x1507,x1508,x1509,x1510,x1511,x1512,x1513;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &x724); 
   fscanf(fp,"%f", &x725); 
   fscanf(fp,"%f", &x726); 
   fscanf(fp,"%f", &x727); 
   fscanf(fp,"%f", &x728); 
   fscanf(fp,"%f", &x729); 
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
   fscanf(fp,"%f", &x912); 
   fscanf(fp,"%f", &x913); 
   fscanf(fp,"%f", &x914); 
   fscanf(fp,"%f", &x915); 
   fscanf(fp,"%f", &x916); 
   fscanf(fp,"%f", &x917); 
   fscanf(fp,"%f", &x918); 
   fscanf(fp,"%f", &x919); 
   fscanf(fp,"%f", &x920); 
   fscanf(fp,"%f", &x921); 
   fscanf(fp,"%f", &x922); 
   fscanf(fp,"%f", &x923); 
   fscanf(fp,"%f", &x924); 
   fscanf(fp,"%f", &x925); 
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
   fscanf(fp,"%f", &x1094); 
   fscanf(fp,"%f", &x1095); 
   fscanf(fp,"%f", &x1096); 
   fscanf(fp,"%f", &x1097); 
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
   fscanf(fp,"%f", &x1206); 
   fscanf(fp,"%f", &x1207); 
   fscanf(fp,"%f", &x1208); 
   fscanf(fp,"%f", &x1209); 
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
   fscanf(fp,"%f", &x1388); 
   fscanf(fp,"%f", &x1389); 
   fscanf(fp,"%f", &x1390); 
   fscanf(fp,"%f", &x1391); 
   fscanf(fp,"%f", &x1392); 
   fscanf(fp,"%f", &x1393); 
   fscanf(fp,"%f", &x1394); 
   fscanf(fp,"%f", &x1395); 
   fscanf(fp,"%f", &x1396); 
   fscanf(fp,"%f", &x1397); 
   fscanf(fp,"%f", &x1398); 
   fscanf(fp,"%f", &x1399); 
   fscanf(fp,"%f", &x1400); 
   fscanf(fp,"%f", &x1401); 
   fscanf(fp,"%f", &x1402); 
   fscanf(fp,"%f", &x1403); 
   fscanf(fp,"%f", &x1404); 
   fscanf(fp,"%f", &x1405); 
   fscanf(fp,"%f", &x1406); 
   fscanf(fp,"%f", &x1407); 
   fscanf(fp,"%f", &x1408); 
   fscanf(fp,"%f", &x1409); 
   fscanf(fp,"%f", &x1410); 
   fscanf(fp,"%f", &x1411); 
   fscanf(fp,"%f", &x1412); 
   fscanf(fp,"%f", &x1413); 
   fscanf(fp,"%f", &x1414); 
   fscanf(fp,"%f", &x1415); 
   fscanf(fp,"%f", &x1486); 
   fscanf(fp,"%f", &x1487); 
   fscanf(fp,"%f", &x1488); 
   fscanf(fp,"%f", &x1489); 
   fscanf(fp,"%f", &x1490); 
   fscanf(fp,"%f", &x1491); 
   fscanf(fp,"%f", &x1492); 
   fscanf(fp,"%f", &x1493); 
   fscanf(fp,"%f", &x1494); 
   fscanf(fp,"%f", &x1495); 
   fscanf(fp,"%f", &x1496); 
   fscanf(fp,"%f", &x1497); 
   fscanf(fp,"%f", &x1498); 
   fscanf(fp,"%f", &x1499); 
   fscanf(fp,"%f", &x1500); 
   fscanf(fp,"%f", &x1501); 
   fscanf(fp,"%f", &x1502); 
   fscanf(fp,"%f", &x1503); 
   fscanf(fp,"%f", &x1504); 
   fscanf(fp,"%f", &x1505); 
   fscanf(fp,"%f", &x1506); 
   fscanf(fp,"%f", &x1507); 
   fscanf(fp,"%f", &x1508); 
   fscanf(fp,"%f", &x1509); 
   fscanf(fp,"%f", &x1510); 
   fscanf(fp,"%f", &x1511); 
   fscanf(fp,"%f", &x1512); 
   fscanf(fp,"%f", &x1513); 

   fclose(fp);
   res=-( - 0.1*x702 - 0.6*x703 - 0.85*x704 - 0.2*x705 - 0.5*x706
 - 0.8*x707 - 0.3*x708 - 0.1*x709 - 0.6*x710 - 0.85*x711 - 0.2*x712
 - 0.5*x713 - 0.8*x714 - 0.3*x715 - 0.1*x716 - 0.6*x717 - 0.85*x718
 - 0.2*x719 - 0.5*x720 - 0.8*x721 - 0.3*x722 - 0.1*x723 - 0.6*x724
 - 0.85*x725 - 0.2*x726 - 0.5*x727 - 0.8*x728 - 0.3*x729 - 0.1*x800
 - 0.6*x801 - 0.85*x802 - 0.2*x803 - 0.5*x804 - 0.8*x805 - 0.3*x806
 - 0.1*x807 - 0.6*x808 - 0.85*x809 - 0.2*x810 - 0.5*x811 - 0.8*x812
 - 0.3*x813 - 0.1*x814 - 0.6*x815 - 0.85*x816 - 0.2*x817 - 0.5*x818
 - 0.8*x819 - 0.3*x820 - 0.1*x821 - 0.6*x822 - 0.85*x823 - 0.2*x824
 - 0.5*x825 - 0.8*x826 - 0.3*x827 - 0.1*x898 - 0.6*x899 - 0.85*x900
 - 0.2*x901 - 0.5*x902 - 0.8*x903 - 0.3*x904 - 0.1*x905 - 0.6*x906
 - 0.85*x907 - 0.2*x908 - 0.5*x909 - 0.8*x910 - 0.3*x911 - 0.1*x912
 - 0.6*x913 - 0.85*x914 - 0.2*x915 - 0.5*x916 - 0.8*x917 - 0.3*x918
 - 0.1*x919 - 0.6*x920 - 0.85*x921 - 0.2*x922 - 0.5*x923 - 0.8*x924
 - 0.3*x925 - 0.1*x996 - 0.6*x997 - 0.85*x998 - 0.2*x999 - 0.5*x1000
 - 0.8*x1001 - 0.3*x1002 - 0.1*x1003 - 0.6*x1004 - 0.85*x1005 - 0.2*x1006
 - 0.5*x1007 - 0.8*x1008 - 0.3*x1009 - 0.1*x1010 - 0.6*x1011 - 0.85*x1012
 - 0.2*x1013 - 0.5*x1014 - 0.8*x1015 - 0.3*x1016 - 0.1*x1017 - 0.6*x1018
 - 0.85*x1019 - 0.2*x1020 - 0.5*x1021 - 0.8*x1022 - 0.3*x1023 - 0.1*x1094
 - 0.6*x1095 - 0.85*x1096 - 0.2*x1097 - 0.5*x1098 - 0.8*x1099 - 0.3*x1100
 - 0.1*x1101 - 0.6*x1102 - 0.85*x1103 - 0.2*x1104 - 0.5*x1105 - 0.8*x1106
 - 0.3*x1107 - 0.1*x1108 - 0.6*x1109 - 0.85*x1110 - 0.2*x1111 - 0.5*x1112
 - 0.8*x1113 - 0.3*x1114 - 0.1*x1115 - 0.6*x1116 - 0.85*x1117 - 0.2*x1118
 - 0.5*x1119 - 0.8*x1120 - 0.3*x1121 - 0.1*x1192 - 0.6*x1193 - 0.85*x1194
 - 0.2*x1195 - 0.5*x1196 - 0.8*x1197 - 0.3*x1198 - 0.1*x1199 - 0.6*x1200
 - 0.85*x1201 - 0.2*x1202 - 0.5*x1203 - 0.8*x1204 - 0.3*x1205 - 0.1*x1206
 - 0.6*x1207 - 0.85*x1208 - 0.2*x1209 - 0.5*x1210 - 0.8*x1211 - 0.3*x1212
 - 0.1*x1213 - 0.6*x1214 - 0.85*x1215 - 0.2*x1216 - 0.5*x1217 - 0.8*x1218
 - 0.3*x1219 - 0.1*x1290 - 0.6*x1291 - 0.85*x1292 - 0.2*x1293 - 0.5*x1294
 - 0.8*x1295 - 0.3*x1296 - 0.1*x1297 - 0.6*x1298 - 0.85*x1299 - 0.2*x1300
 - 0.5*x1301 - 0.8*x1302 - 0.3*x1303 - 0.1*x1304 - 0.6*x1305 - 0.85*x1306
 - 0.2*x1307 - 0.5*x1308 - 0.8*x1309 - 0.3*x1310 - 0.1*x1311 - 0.6*x1312
 - 0.85*x1313 - 0.2*x1314 - 0.5*x1315 - 0.8*x1316 - 0.3*x1317 - 0.1*x1388
 - 0.6*x1389 - 0.85*x1390 - 0.2*x1391 - 0.5*x1392 - 0.8*x1393 - 0.3*x1394
 - 0.1*x1395 - 0.6*x1396 - 0.85*x1397 - 0.2*x1398 - 0.5*x1399 - 0.8*x1400
 - 0.3*x1401 - 0.1*x1402 - 0.6*x1403 - 0.85*x1404 - 0.2*x1405 - 0.5*x1406
 - 0.8*x1407 - 0.3*x1408 - 0.1*x1409 - 0.6*x1410 - 0.85*x1411 - 0.2*x1412
 - 0.5*x1413 - 0.8*x1414 - 0.3*x1415 - 0.1*x1486 - 0.6*x1487 - 0.85*x1488
 - 0.2*x1489 - 0.5*x1490 - 0.8*x1491 - 0.3*x1492 - 0.1*x1493 - 0.6*x1494
 - 0.85*x1495 - 0.2*x1496 - 0.5*x1497 - 0.8*x1498 - 0.3*x1499 - 0.1*x1500
 - 0.6*x1501 - 0.85*x1502 - 0.2*x1503 - 0.5*x1504 - 0.8*x1505 - 0.3*x1506
 - 0.1*x1507 - 0.6*x1508 - 0.85*x1509 - 0.2*x1510 - 0.5*x1511 - 0.8*x1512
 - 0.3*x1513 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
