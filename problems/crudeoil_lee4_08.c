#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_lee4_08";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x866,x867,x868,x869,x870,x871,x872,x873,x874,x875,x876,x877,x878,x879,x880,x881,x882,x883,x884,x885,x886,x887,x888,x889,x890,x891,x892,x893,x894,x895,x896,x897,x898,x899,x900,x901,x902,x903,x904,x905,x906,x907,x908,x909,x910,x911,x912,x913,x1018,x1019,x1020,x1021,x1022,x1023,x1024,x1025,x1026,x1027,x1028,x1029,x1030,x1031,x1032,x1033,x1034,x1035,x1036,x1037,x1038,x1039,x1040,x1041,x1042,x1043,x1044,x1045,x1046,x1047,x1048,x1049,x1050,x1051,x1052,x1053,x1054,x1055,x1056,x1057,x1058,x1059,x1060,x1061,x1062,x1063,x1064,x1065,x1170,x1171,x1172,x1173,x1174,x1175,x1176,x1177,x1178,x1179,x1180,x1181,x1182,x1183,x1184,x1185,x1186,x1187,x1188,x1189,x1190,x1191,x1192,x1193,x1194,x1195,x1196,x1197,x1198,x1199,x1200,x1201,x1202,x1203,x1204,x1205,x1206,x1207,x1208,x1209,x1210,x1211,x1212,x1213,x1214,x1215,x1216,x1217,x1322,x1323,x1324,x1325,x1326,x1327,x1328,x1329,x1330,x1331,x1332,x1333,x1334,x1335,x1336,x1337,x1338,x1339,x1340,x1341,x1342,x1343,x1344,x1345,x1346,x1347,x1348,x1349,x1350,x1351,x1352,x1353,x1354,x1355,x1356,x1357,x1358,x1359,x1360,x1361,x1362,x1363,x1364,x1365,x1366,x1367,x1368,x1369,x1474,x1475,x1476,x1477,x1478,x1479,x1480,x1481,x1482,x1483,x1484,x1485,x1486,x1487,x1488,x1489,x1490,x1491,x1492,x1493,x1494,x1495,x1496,x1497,x1498,x1499,x1500,x1501,x1502,x1503,x1504,x1505,x1506,x1507,x1508,x1509,x1510,x1511,x1512,x1513,x1514,x1515,x1516,x1517,x1518,x1519,x1520,x1521,x1626,x1627,x1628,x1629,x1630,x1631,x1632,x1633,x1634,x1635,x1636,x1637,x1638,x1639,x1640,x1641,x1642,x1643,x1644,x1645,x1646,x1647,x1648,x1649,x1650,x1651,x1652,x1653,x1654,x1655,x1656,x1657,x1658,x1659,x1660,x1661,x1662,x1663,x1664,x1665,x1666,x1667,x1668,x1669,x1670,x1671,x1672,x1673,x1778,x1779,x1780,x1781,x1782,x1783,x1784,x1785,x1786,x1787,x1788,x1789,x1790,x1791,x1792,x1793,x1794,x1795,x1796,x1797,x1798,x1799,x1800,x1801,x1802,x1803,x1804,x1805,x1806,x1807,x1808,x1809,x1810,x1811,x1812,x1813,x1814,x1815,x1816,x1817,x1818,x1819,x1820,x1821,x1822,x1823,x1824,x1825,x1930,x1931,x1932,x1933,x1934,x1935,x1936,x1937,x1938,x1939,x1940,x1941,x1942,x1943,x1944,x1945,x1946,x1947,x1948,x1949,x1950,x1951,x1952,x1953,x1954,x1955,x1956,x1957,x1958,x1959,x1960,x1961,x1962,x1963,x1964,x1965,x1966,x1967,x1968,x1969,x1970,x1971,x1972,x1973,x1974,x1975,x1976,x1977;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &x1346); 
   fscanf(fp,"%f", &x1347); 
   fscanf(fp,"%f", &x1348); 
   fscanf(fp,"%f", &x1349); 
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
   fscanf(fp,"%f", &x1514); 
   fscanf(fp,"%f", &x1515); 
   fscanf(fp,"%f", &x1516); 
   fscanf(fp,"%f", &x1517); 
   fscanf(fp,"%f", &x1518); 
   fscanf(fp,"%f", &x1519); 
   fscanf(fp,"%f", &x1520); 
   fscanf(fp,"%f", &x1521); 
   fscanf(fp,"%f", &x1626); 
   fscanf(fp,"%f", &x1627); 
   fscanf(fp,"%f", &x1628); 
   fscanf(fp,"%f", &x1629); 
   fscanf(fp,"%f", &x1630); 
   fscanf(fp,"%f", &x1631); 
   fscanf(fp,"%f", &x1632); 
   fscanf(fp,"%f", &x1633); 
   fscanf(fp,"%f", &x1634); 
   fscanf(fp,"%f", &x1635); 
   fscanf(fp,"%f", &x1636); 
   fscanf(fp,"%f", &x1637); 
   fscanf(fp,"%f", &x1638); 
   fscanf(fp,"%f", &x1639); 
   fscanf(fp,"%f", &x1640); 
   fscanf(fp,"%f", &x1641); 
   fscanf(fp,"%f", &x1642); 
   fscanf(fp,"%f", &x1643); 
   fscanf(fp,"%f", &x1644); 
   fscanf(fp,"%f", &x1645); 
   fscanf(fp,"%f", &x1646); 
   fscanf(fp,"%f", &x1647); 
   fscanf(fp,"%f", &x1648); 
   fscanf(fp,"%f", &x1649); 
   fscanf(fp,"%f", &x1650); 
   fscanf(fp,"%f", &x1651); 
   fscanf(fp,"%f", &x1652); 
   fscanf(fp,"%f", &x1653); 
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
   fscanf(fp,"%f", &x1778); 
   fscanf(fp,"%f", &x1779); 
   fscanf(fp,"%f", &x1780); 
   fscanf(fp,"%f", &x1781); 
   fscanf(fp,"%f", &x1782); 
   fscanf(fp,"%f", &x1783); 
   fscanf(fp,"%f", &x1784); 
   fscanf(fp,"%f", &x1785); 
   fscanf(fp,"%f", &x1786); 
   fscanf(fp,"%f", &x1787); 
   fscanf(fp,"%f", &x1788); 
   fscanf(fp,"%f", &x1789); 
   fscanf(fp,"%f", &x1790); 
   fscanf(fp,"%f", &x1791); 
   fscanf(fp,"%f", &x1792); 
   fscanf(fp,"%f", &x1793); 
   fscanf(fp,"%f", &x1794); 
   fscanf(fp,"%f", &x1795); 
   fscanf(fp,"%f", &x1796); 
   fscanf(fp,"%f", &x1797); 
   fscanf(fp,"%f", &x1798); 
   fscanf(fp,"%f", &x1799); 
   fscanf(fp,"%f", &x1800); 
   fscanf(fp,"%f", &x1801); 
   fscanf(fp,"%f", &x1802); 
   fscanf(fp,"%f", &x1803); 
   fscanf(fp,"%f", &x1804); 
   fscanf(fp,"%f", &x1805); 
   fscanf(fp,"%f", &x1806); 
   fscanf(fp,"%f", &x1807); 
   fscanf(fp,"%f", &x1808); 
   fscanf(fp,"%f", &x1809); 
   fscanf(fp,"%f", &x1810); 
   fscanf(fp,"%f", &x1811); 
   fscanf(fp,"%f", &x1812); 
   fscanf(fp,"%f", &x1813); 
   fscanf(fp,"%f", &x1814); 
   fscanf(fp,"%f", &x1815); 
   fscanf(fp,"%f", &x1816); 
   fscanf(fp,"%f", &x1817); 
   fscanf(fp,"%f", &x1818); 
   fscanf(fp,"%f", &x1819); 
   fscanf(fp,"%f", &x1820); 
   fscanf(fp,"%f", &x1821); 
   fscanf(fp,"%f", &x1822); 
   fscanf(fp,"%f", &x1823); 
   fscanf(fp,"%f", &x1824); 
   fscanf(fp,"%f", &x1825); 
   fscanf(fp,"%f", &x1930); 
   fscanf(fp,"%f", &x1931); 
   fscanf(fp,"%f", &x1932); 
   fscanf(fp,"%f", &x1933); 
   fscanf(fp,"%f", &x1934); 
   fscanf(fp,"%f", &x1935); 
   fscanf(fp,"%f", &x1936); 
   fscanf(fp,"%f", &x1937); 
   fscanf(fp,"%f", &x1938); 
   fscanf(fp,"%f", &x1939); 
   fscanf(fp,"%f", &x1940); 
   fscanf(fp,"%f", &x1941); 
   fscanf(fp,"%f", &x1942); 
   fscanf(fp,"%f", &x1943); 
   fscanf(fp,"%f", &x1944); 
   fscanf(fp,"%f", &x1945); 
   fscanf(fp,"%f", &x1946); 
   fscanf(fp,"%f", &x1947); 
   fscanf(fp,"%f", &x1948); 
   fscanf(fp,"%f", &x1949); 
   fscanf(fp,"%f", &x1950); 
   fscanf(fp,"%f", &x1951); 
   fscanf(fp,"%f", &x1952); 
   fscanf(fp,"%f", &x1953); 
   fscanf(fp,"%f", &x1954); 
   fscanf(fp,"%f", &x1955); 
   fscanf(fp,"%f", &x1956); 
   fscanf(fp,"%f", &x1957); 
   fscanf(fp,"%f", &x1958); 
   fscanf(fp,"%f", &x1959); 
   fscanf(fp,"%f", &x1960); 
   fscanf(fp,"%f", &x1961); 
   fscanf(fp,"%f", &x1962); 
   fscanf(fp,"%f", &x1963); 
   fscanf(fp,"%f", &x1964); 
   fscanf(fp,"%f", &x1965); 
   fscanf(fp,"%f", &x1966); 
   fscanf(fp,"%f", &x1967); 
   fscanf(fp,"%f", &x1968); 
   fscanf(fp,"%f", &x1969); 
   fscanf(fp,"%f", &x1970); 
   fscanf(fp,"%f", &x1971); 
   fscanf(fp,"%f", &x1972); 
   fscanf(fp,"%f", &x1973); 
   fscanf(fp,"%f", &x1974); 
   fscanf(fp,"%f", &x1975); 
   fscanf(fp,"%f", &x1976); 
   fscanf(fp,"%f", &x1977); 

   fclose(fp);
   res=-( - 0.3*x866 - 0.5*x867 - 0.65*x868 - 0.31*x869 - 0.75*x870
 - 0.317*x871 - 0.483*x872 - 0.633*x873 - 0.3*x874 - 0.5*x875 - 0.65*x876
 - 0.31*x877 - 0.75*x878 - 0.317*x879 - 0.483*x880 - 0.633*x881 - 0.3*x882
 - 0.5*x883 - 0.65*x884 - 0.31*x885 - 0.75*x886 - 0.317*x887 - 0.483*x888
 - 0.633*x889 - 0.3*x890 - 0.5*x891 - 0.65*x892 - 0.31*x893 - 0.75*x894
 - 0.317*x895 - 0.483*x896 - 0.633*x897 - 0.3*x898 - 0.5*x899 - 0.65*x900
 - 0.31*x901 - 0.75*x902 - 0.317*x903 - 0.483*x904 - 0.633*x905 - 0.3*x906
 - 0.5*x907 - 0.65*x908 - 0.31*x909 - 0.75*x910 - 0.317*x911 - 0.483*x912
 - 0.633*x913 - 0.3*x1018 - 0.5*x1019 - 0.65*x1020 - 0.31*x1021
 - 0.75*x1022 - 0.317*x1023 - 0.483*x1024 - 0.633*x1025 - 0.3*x1026
 - 0.5*x1027 - 0.65*x1028 - 0.31*x1029 - 0.75*x1030 - 0.317*x1031
 - 0.483*x1032 - 0.633*x1033 - 0.3*x1034 - 0.5*x1035 - 0.65*x1036
 - 0.31*x1037 - 0.75*x1038 - 0.317*x1039 - 0.483*x1040 - 0.633*x1041
 - 0.3*x1042 - 0.5*x1043 - 0.65*x1044 - 0.31*x1045 - 0.75*x1046
 - 0.317*x1047 - 0.483*x1048 - 0.633*x1049 - 0.3*x1050 - 0.5*x1051
 - 0.65*x1052 - 0.31*x1053 - 0.75*x1054 - 0.317*x1055 - 0.483*x1056
 - 0.633*x1057 - 0.3*x1058 - 0.5*x1059 - 0.65*x1060 - 0.31*x1061
 - 0.75*x1062 - 0.317*x1063 - 0.483*x1064 - 0.633*x1065 - 0.3*x1170
 - 0.5*x1171 - 0.65*x1172 - 0.31*x1173 - 0.75*x1174 - 0.317*x1175
 - 0.483*x1176 - 0.633*x1177 - 0.3*x1178 - 0.5*x1179 - 0.65*x1180
 - 0.31*x1181 - 0.75*x1182 - 0.317*x1183 - 0.483*x1184 - 0.633*x1185
 - 0.3*x1186 - 0.5*x1187 - 0.65*x1188 - 0.31*x1189 - 0.75*x1190
 - 0.317*x1191 - 0.483*x1192 - 0.633*x1193 - 0.3*x1194 - 0.5*x1195
 - 0.65*x1196 - 0.31*x1197 - 0.75*x1198 - 0.317*x1199 - 0.483*x1200
 - 0.633*x1201 - 0.3*x1202 - 0.5*x1203 - 0.65*x1204 - 0.31*x1205
 - 0.75*x1206 - 0.317*x1207 - 0.483*x1208 - 0.633*x1209 - 0.3*x1210
 - 0.5*x1211 - 0.65*x1212 - 0.31*x1213 - 0.75*x1214 - 0.317*x1215
 - 0.483*x1216 - 0.633*x1217 - 0.3*x1322 - 0.5*x1323 - 0.65*x1324
 - 0.31*x1325 - 0.75*x1326 - 0.317*x1327 - 0.483*x1328 - 0.633*x1329
 - 0.3*x1330 - 0.5*x1331 - 0.65*x1332 - 0.31*x1333 - 0.75*x1334
 - 0.317*x1335 - 0.483*x1336 - 0.633*x1337 - 0.3*x1338 - 0.5*x1339
 - 0.65*x1340 - 0.31*x1341 - 0.75*x1342 - 0.317*x1343 - 0.483*x1344
 - 0.633*x1345 - 0.3*x1346 - 0.5*x1347 - 0.65*x1348 - 0.31*x1349
 - 0.75*x1350 - 0.317*x1351 - 0.483*x1352 - 0.633*x1353 - 0.3*x1354
 - 0.5*x1355 - 0.65*x1356 - 0.31*x1357 - 0.75*x1358 - 0.317*x1359
 - 0.483*x1360 - 0.633*x1361 - 0.3*x1362 - 0.5*x1363 - 0.65*x1364
 - 0.31*x1365 - 0.75*x1366 - 0.317*x1367 - 0.483*x1368 - 0.633*x1369
 - 0.3*x1474 - 0.5*x1475 - 0.65*x1476 - 0.31*x1477 - 0.75*x1478
 - 0.317*x1479 - 0.483*x1480 - 0.633*x1481 - 0.3*x1482 - 0.5*x1483
 - 0.65*x1484 - 0.31*x1485 - 0.75*x1486 - 0.317*x1487 - 0.483*x1488
 - 0.633*x1489 - 0.3*x1490 - 0.5*x1491 - 0.65*x1492 - 0.31*x1493
 - 0.75*x1494 - 0.317*x1495 - 0.483*x1496 - 0.633*x1497 - 0.3*x1498
 - 0.5*x1499 - 0.65*x1500 - 0.31*x1501 - 0.75*x1502 - 0.317*x1503
 - 0.483*x1504 - 0.633*x1505 - 0.3*x1506 - 0.5*x1507 - 0.65*x1508
 - 0.31*x1509 - 0.75*x1510 - 0.317*x1511 - 0.483*x1512 - 0.633*x1513
 - 0.3*x1514 - 0.5*x1515 - 0.65*x1516 - 0.31*x1517 - 0.75*x1518
 - 0.317*x1519 - 0.483*x1520 - 0.633*x1521 - 0.3*x1626 - 0.5*x1627
 - 0.65*x1628 - 0.31*x1629 - 0.75*x1630 - 0.317*x1631 - 0.483*x1632
 - 0.633*x1633 - 0.3*x1634 - 0.5*x1635 - 0.65*x1636 - 0.31*x1637
 - 0.75*x1638 - 0.317*x1639 - 0.483*x1640 - 0.633*x1641 - 0.3*x1642
 - 0.5*x1643 - 0.65*x1644 - 0.31*x1645 - 0.75*x1646 - 0.317*x1647
 - 0.483*x1648 - 0.633*x1649 - 0.3*x1650 - 0.5*x1651 - 0.65*x1652
 - 0.31*x1653 - 0.75*x1654 - 0.317*x1655 - 0.483*x1656 - 0.633*x1657
 - 0.3*x1658 - 0.5*x1659 - 0.65*x1660 - 0.31*x1661 - 0.75*x1662
 - 0.317*x1663 - 0.483*x1664 - 0.633*x1665 - 0.3*x1666 - 0.5*x1667
 - 0.65*x1668 - 0.31*x1669 - 0.75*x1670 - 0.317*x1671 - 0.483*x1672
 - 0.633*x1673 - 0.3*x1778 - 0.5*x1779 - 0.65*x1780 - 0.31*x1781
 - 0.75*x1782 - 0.317*x1783 - 0.483*x1784 - 0.633*x1785 - 0.3*x1786
 - 0.5*x1787 - 0.65*x1788 - 0.31*x1789 - 0.75*x1790 - 0.317*x1791
 - 0.483*x1792 - 0.633*x1793 - 0.3*x1794 - 0.5*x1795 - 0.65*x1796
 - 0.31*x1797 - 0.75*x1798 - 0.317*x1799 - 0.483*x1800 - 0.633*x1801
 - 0.3*x1802 - 0.5*x1803 - 0.65*x1804 - 0.31*x1805 - 0.75*x1806
 - 0.317*x1807 - 0.483*x1808 - 0.633*x1809 - 0.3*x1810 - 0.5*x1811
 - 0.65*x1812 - 0.31*x1813 - 0.75*x1814 - 0.317*x1815 - 0.483*x1816
 - 0.633*x1817 - 0.3*x1818 - 0.5*x1819 - 0.65*x1820 - 0.31*x1821
 - 0.75*x1822 - 0.317*x1823 - 0.483*x1824 - 0.633*x1825 - 0.3*x1930
 - 0.5*x1931 - 0.65*x1932 - 0.31*x1933 - 0.75*x1934 - 0.317*x1935
 - 0.483*x1936 - 0.633*x1937 - 0.3*x1938 - 0.5*x1939 - 0.65*x1940
 - 0.31*x1941 - 0.75*x1942 - 0.317*x1943 - 0.483*x1944 - 0.633*x1945
 - 0.3*x1946 - 0.5*x1947 - 0.65*x1948 - 0.31*x1949 - 0.75*x1950
 - 0.317*x1951 - 0.483*x1952 - 0.633*x1953 - 0.3*x1954 - 0.5*x1955
 - 0.65*x1956 - 0.31*x1957 - 0.75*x1958 - 0.317*x1959 - 0.483*x1960
 - 0.633*x1961 - 0.3*x1962 - 0.5*x1963 - 0.65*x1964 - 0.31*x1965
 - 0.75*x1966 - 0.317*x1967 - 0.483*x1968 - 0.633*x1969 - 0.3*x1970
 - 0.5*x1971 - 0.65*x1972 - 0.31*x1973 - 0.75*x1974 - 0.317*x1975
 - 0.483*x1976 - 0.633*x1977 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
