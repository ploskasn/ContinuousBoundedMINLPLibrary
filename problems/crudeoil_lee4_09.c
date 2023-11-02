#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_lee4_09";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x961,x962,x963,x964,x965,x966,x967,x968,x969,x970,x971,x972,x973,x974,x975,x976,x977,x978,x979,x980,x981,x982,x983,x984,x985,x986,x987,x988,x989,x990,x991,x992,x993,x994,x995,x996,x997,x998,x999,x1000,x1001,x1002,x1003,x1004,x1005,x1006,x1007,x1008,x1113,x1114,x1115,x1116,x1117,x1118,x1119,x1120,x1121,x1122,x1123,x1124,x1125,x1126,x1127,x1128,x1129,x1130,x1131,x1132,x1133,x1134,x1135,x1136,x1137,x1138,x1139,x1140,x1141,x1142,x1143,x1144,x1145,x1146,x1147,x1148,x1149,x1150,x1151,x1152,x1153,x1154,x1155,x1156,x1157,x1158,x1159,x1160,x1265,x1266,x1267,x1268,x1269,x1270,x1271,x1272,x1273,x1274,x1275,x1276,x1277,x1278,x1279,x1280,x1281,x1282,x1283,x1284,x1285,x1286,x1287,x1288,x1289,x1290,x1291,x1292,x1293,x1294,x1295,x1296,x1297,x1298,x1299,x1300,x1301,x1302,x1303,x1304,x1305,x1306,x1307,x1308,x1309,x1310,x1311,x1312,x1417,x1418,x1419,x1420,x1421,x1422,x1423,x1424,x1425,x1426,x1427,x1428,x1429,x1430,x1431,x1432,x1433,x1434,x1435,x1436,x1437,x1438,x1439,x1440,x1441,x1442,x1443,x1444,x1445,x1446,x1447,x1448,x1449,x1450,x1451,x1452,x1453,x1454,x1455,x1456,x1457,x1458,x1459,x1460,x1461,x1462,x1463,x1464,x1569,x1570,x1571,x1572,x1573,x1574,x1575,x1576,x1577,x1578,x1579,x1580,x1581,x1582,x1583,x1584,x1585,x1586,x1587,x1588,x1589,x1590,x1591,x1592,x1593,x1594,x1595,x1596,x1597,x1598,x1599,x1600,x1601,x1602,x1603,x1604,x1605,x1606,x1607,x1608,x1609,x1610,x1611,x1612,x1613,x1614,x1615,x1616,x1721,x1722,x1723,x1724,x1725,x1726,x1727,x1728,x1729,x1730,x1731,x1732,x1733,x1734,x1735,x1736,x1737,x1738,x1739,x1740,x1741,x1742,x1743,x1744,x1745,x1746,x1747,x1748,x1749,x1750,x1751,x1752,x1753,x1754,x1755,x1756,x1757,x1758,x1759,x1760,x1761,x1762,x1763,x1764,x1765,x1766,x1767,x1768,x1873,x1874,x1875,x1876,x1877,x1878,x1879,x1880,x1881,x1882,x1883,x1884,x1885,x1886,x1887,x1888,x1889,x1890,x1891,x1892,x1893,x1894,x1895,x1896,x1897,x1898,x1899,x1900,x1901,x1902,x1903,x1904,x1905,x1906,x1907,x1908,x1909,x1910,x1911,x1912,x1913,x1914,x1915,x1916,x1917,x1918,x1919,x1920,x2025,x2026,x2027,x2028,x2029,x2030,x2031,x2032,x2033,x2034,x2035,x2036,x2037,x2038,x2039,x2040,x2041,x2042,x2043,x2044,x2045,x2046,x2047,x2048,x2049,x2050,x2051,x2052,x2053,x2054,x2055,x2056,x2057,x2058,x2059,x2060,x2061,x2062,x2063,x2064,x2065,x2066,x2067,x2068,x2069,x2070,x2071,x2072,x2177,x2178,x2179,x2180,x2181,x2182,x2183,x2184,x2185,x2186,x2187,x2188,x2189,x2190,x2191,x2192,x2193,x2194,x2195,x2196,x2197,x2198,x2199,x2200,x2201,x2202,x2203,x2204,x2205,x2206,x2207,x2208,x2209,x2210,x2211,x2212,x2213,x2214,x2215,x2216,x2217,x2218,x2219,x2220,x2221,x2222,x2223,x2224;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &x1113); 
   fscanf(fp,"%f", &x1114); 
   fscanf(fp,"%f", &x1115); 
   fscanf(fp,"%f", &x1116); 
   fscanf(fp,"%f", &x1117); 
   fscanf(fp,"%f", &x1118); 
   fscanf(fp,"%f", &x1119); 
   fscanf(fp,"%f", &x1120); 
   fscanf(fp,"%f", &x1121); 
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
   fscanf(fp,"%f", &x1417); 
   fscanf(fp,"%f", &x1418); 
   fscanf(fp,"%f", &x1419); 
   fscanf(fp,"%f", &x1420); 
   fscanf(fp,"%f", &x1421); 
   fscanf(fp,"%f", &x1422); 
   fscanf(fp,"%f", &x1423); 
   fscanf(fp,"%f", &x1424); 
   fscanf(fp,"%f", &x1425); 
   fscanf(fp,"%f", &x1426); 
   fscanf(fp,"%f", &x1427); 
   fscanf(fp,"%f", &x1428); 
   fscanf(fp,"%f", &x1429); 
   fscanf(fp,"%f", &x1430); 
   fscanf(fp,"%f", &x1431); 
   fscanf(fp,"%f", &x1432); 
   fscanf(fp,"%f", &x1433); 
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
   fscanf(fp,"%f", &x1458); 
   fscanf(fp,"%f", &x1459); 
   fscanf(fp,"%f", &x1460); 
   fscanf(fp,"%f", &x1461); 
   fscanf(fp,"%f", &x1462); 
   fscanf(fp,"%f", &x1463); 
   fscanf(fp,"%f", &x1464); 
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
   fscanf(fp,"%f", &x1584); 
   fscanf(fp,"%f", &x1585); 
   fscanf(fp,"%f", &x1586); 
   fscanf(fp,"%f", &x1587); 
   fscanf(fp,"%f", &x1588); 
   fscanf(fp,"%f", &x1589); 
   fscanf(fp,"%f", &x1590); 
   fscanf(fp,"%f", &x1591); 
   fscanf(fp,"%f", &x1592); 
   fscanf(fp,"%f", &x1593); 
   fscanf(fp,"%f", &x1594); 
   fscanf(fp,"%f", &x1595); 
   fscanf(fp,"%f", &x1596); 
   fscanf(fp,"%f", &x1597); 
   fscanf(fp,"%f", &x1598); 
   fscanf(fp,"%f", &x1599); 
   fscanf(fp,"%f", &x1600); 
   fscanf(fp,"%f", &x1601); 
   fscanf(fp,"%f", &x1602); 
   fscanf(fp,"%f", &x1603); 
   fscanf(fp,"%f", &x1604); 
   fscanf(fp,"%f", &x1605); 
   fscanf(fp,"%f", &x1606); 
   fscanf(fp,"%f", &x1607); 
   fscanf(fp,"%f", &x1608); 
   fscanf(fp,"%f", &x1609); 
   fscanf(fp,"%f", &x1610); 
   fscanf(fp,"%f", &x1611); 
   fscanf(fp,"%f", &x1612); 
   fscanf(fp,"%f", &x1613); 
   fscanf(fp,"%f", &x1614); 
   fscanf(fp,"%f", &x1615); 
   fscanf(fp,"%f", &x1616); 
   fscanf(fp,"%f", &x1721); 
   fscanf(fp,"%f", &x1722); 
   fscanf(fp,"%f", &x1723); 
   fscanf(fp,"%f", &x1724); 
   fscanf(fp,"%f", &x1725); 
   fscanf(fp,"%f", &x1726); 
   fscanf(fp,"%f", &x1727); 
   fscanf(fp,"%f", &x1728); 
   fscanf(fp,"%f", &x1729); 
   fscanf(fp,"%f", &x1730); 
   fscanf(fp,"%f", &x1731); 
   fscanf(fp,"%f", &x1732); 
   fscanf(fp,"%f", &x1733); 
   fscanf(fp,"%f", &x1734); 
   fscanf(fp,"%f", &x1735); 
   fscanf(fp,"%f", &x1736); 
   fscanf(fp,"%f", &x1737); 
   fscanf(fp,"%f", &x1738); 
   fscanf(fp,"%f", &x1739); 
   fscanf(fp,"%f", &x1740); 
   fscanf(fp,"%f", &x1741); 
   fscanf(fp,"%f", &x1742); 
   fscanf(fp,"%f", &x1743); 
   fscanf(fp,"%f", &x1744); 
   fscanf(fp,"%f", &x1745); 
   fscanf(fp,"%f", &x1746); 
   fscanf(fp,"%f", &x1747); 
   fscanf(fp,"%f", &x1748); 
   fscanf(fp,"%f", &x1749); 
   fscanf(fp,"%f", &x1750); 
   fscanf(fp,"%f", &x1751); 
   fscanf(fp,"%f", &x1752); 
   fscanf(fp,"%f", &x1753); 
   fscanf(fp,"%f", &x1754); 
   fscanf(fp,"%f", &x1755); 
   fscanf(fp,"%f", &x1756); 
   fscanf(fp,"%f", &x1757); 
   fscanf(fp,"%f", &x1758); 
   fscanf(fp,"%f", &x1759); 
   fscanf(fp,"%f", &x1760); 
   fscanf(fp,"%f", &x1761); 
   fscanf(fp,"%f", &x1762); 
   fscanf(fp,"%f", &x1763); 
   fscanf(fp,"%f", &x1764); 
   fscanf(fp,"%f", &x1765); 
   fscanf(fp,"%f", &x1766); 
   fscanf(fp,"%f", &x1767); 
   fscanf(fp,"%f", &x1768); 
   fscanf(fp,"%f", &x1873); 
   fscanf(fp,"%f", &x1874); 
   fscanf(fp,"%f", &x1875); 
   fscanf(fp,"%f", &x1876); 
   fscanf(fp,"%f", &x1877); 
   fscanf(fp,"%f", &x1878); 
   fscanf(fp,"%f", &x1879); 
   fscanf(fp,"%f", &x1880); 
   fscanf(fp,"%f", &x1881); 
   fscanf(fp,"%f", &x1882); 
   fscanf(fp,"%f", &x1883); 
   fscanf(fp,"%f", &x1884); 
   fscanf(fp,"%f", &x1885); 
   fscanf(fp,"%f", &x1886); 
   fscanf(fp,"%f", &x1887); 
   fscanf(fp,"%f", &x1888); 
   fscanf(fp,"%f", &x1889); 
   fscanf(fp,"%f", &x1890); 
   fscanf(fp,"%f", &x1891); 
   fscanf(fp,"%f", &x1892); 
   fscanf(fp,"%f", &x1893); 
   fscanf(fp,"%f", &x1894); 
   fscanf(fp,"%f", &x1895); 
   fscanf(fp,"%f", &x1896); 
   fscanf(fp,"%f", &x1897); 
   fscanf(fp,"%f", &x1898); 
   fscanf(fp,"%f", &x1899); 
   fscanf(fp,"%f", &x1900); 
   fscanf(fp,"%f", &x1901); 
   fscanf(fp,"%f", &x1902); 
   fscanf(fp,"%f", &x1903); 
   fscanf(fp,"%f", &x1904); 
   fscanf(fp,"%f", &x1905); 
   fscanf(fp,"%f", &x1906); 
   fscanf(fp,"%f", &x1907); 
   fscanf(fp,"%f", &x1908); 
   fscanf(fp,"%f", &x1909); 
   fscanf(fp,"%f", &x1910); 
   fscanf(fp,"%f", &x1911); 
   fscanf(fp,"%f", &x1912); 
   fscanf(fp,"%f", &x1913); 
   fscanf(fp,"%f", &x1914); 
   fscanf(fp,"%f", &x1915); 
   fscanf(fp,"%f", &x1916); 
   fscanf(fp,"%f", &x1917); 
   fscanf(fp,"%f", &x1918); 
   fscanf(fp,"%f", &x1919); 
   fscanf(fp,"%f", &x1920); 
   fscanf(fp,"%f", &x2025); 
   fscanf(fp,"%f", &x2026); 
   fscanf(fp,"%f", &x2027); 
   fscanf(fp,"%f", &x2028); 
   fscanf(fp,"%f", &x2029); 
   fscanf(fp,"%f", &x2030); 
   fscanf(fp,"%f", &x2031); 
   fscanf(fp,"%f", &x2032); 
   fscanf(fp,"%f", &x2033); 
   fscanf(fp,"%f", &x2034); 
   fscanf(fp,"%f", &x2035); 
   fscanf(fp,"%f", &x2036); 
   fscanf(fp,"%f", &x2037); 
   fscanf(fp,"%f", &x2038); 
   fscanf(fp,"%f", &x2039); 
   fscanf(fp,"%f", &x2040); 
   fscanf(fp,"%f", &x2041); 
   fscanf(fp,"%f", &x2042); 
   fscanf(fp,"%f", &x2043); 
   fscanf(fp,"%f", &x2044); 
   fscanf(fp,"%f", &x2045); 
   fscanf(fp,"%f", &x2046); 
   fscanf(fp,"%f", &x2047); 
   fscanf(fp,"%f", &x2048); 
   fscanf(fp,"%f", &x2049); 
   fscanf(fp,"%f", &x2050); 
   fscanf(fp,"%f", &x2051); 
   fscanf(fp,"%f", &x2052); 
   fscanf(fp,"%f", &x2053); 
   fscanf(fp,"%f", &x2054); 
   fscanf(fp,"%f", &x2055); 
   fscanf(fp,"%f", &x2056); 
   fscanf(fp,"%f", &x2057); 
   fscanf(fp,"%f", &x2058); 
   fscanf(fp,"%f", &x2059); 
   fscanf(fp,"%f", &x2060); 
   fscanf(fp,"%f", &x2061); 
   fscanf(fp,"%f", &x2062); 
   fscanf(fp,"%f", &x2063); 
   fscanf(fp,"%f", &x2064); 
   fscanf(fp,"%f", &x2065); 
   fscanf(fp,"%f", &x2066); 
   fscanf(fp,"%f", &x2067); 
   fscanf(fp,"%f", &x2068); 
   fscanf(fp,"%f", &x2069); 
   fscanf(fp,"%f", &x2070); 
   fscanf(fp,"%f", &x2071); 
   fscanf(fp,"%f", &x2072); 
   fscanf(fp,"%f", &x2177); 
   fscanf(fp,"%f", &x2178); 
   fscanf(fp,"%f", &x2179); 
   fscanf(fp,"%f", &x2180); 
   fscanf(fp,"%f", &x2181); 
   fscanf(fp,"%f", &x2182); 
   fscanf(fp,"%f", &x2183); 
   fscanf(fp,"%f", &x2184); 
   fscanf(fp,"%f", &x2185); 
   fscanf(fp,"%f", &x2186); 
   fscanf(fp,"%f", &x2187); 
   fscanf(fp,"%f", &x2188); 
   fscanf(fp,"%f", &x2189); 
   fscanf(fp,"%f", &x2190); 
   fscanf(fp,"%f", &x2191); 
   fscanf(fp,"%f", &x2192); 
   fscanf(fp,"%f", &x2193); 
   fscanf(fp,"%f", &x2194); 
   fscanf(fp,"%f", &x2195); 
   fscanf(fp,"%f", &x2196); 
   fscanf(fp,"%f", &x2197); 
   fscanf(fp,"%f", &x2198); 
   fscanf(fp,"%f", &x2199); 
   fscanf(fp,"%f", &x2200); 
   fscanf(fp,"%f", &x2201); 
   fscanf(fp,"%f", &x2202); 
   fscanf(fp,"%f", &x2203); 
   fscanf(fp,"%f", &x2204); 
   fscanf(fp,"%f", &x2205); 
   fscanf(fp,"%f", &x2206); 
   fscanf(fp,"%f", &x2207); 
   fscanf(fp,"%f", &x2208); 
   fscanf(fp,"%f", &x2209); 
   fscanf(fp,"%f", &x2210); 
   fscanf(fp,"%f", &x2211); 
   fscanf(fp,"%f", &x2212); 
   fscanf(fp,"%f", &x2213); 
   fscanf(fp,"%f", &x2214); 
   fscanf(fp,"%f", &x2215); 
   fscanf(fp,"%f", &x2216); 
   fscanf(fp,"%f", &x2217); 
   fscanf(fp,"%f", &x2218); 
   fscanf(fp,"%f", &x2219); 
   fscanf(fp,"%f", &x2220); 
   fscanf(fp,"%f", &x2221); 
   fscanf(fp,"%f", &x2222); 
   fscanf(fp,"%f", &x2223); 
   fscanf(fp,"%f", &x2224); 

   fclose(fp);
   res=-( - 0.3*x961 - 0.5*x962 - 0.65*x963 - 0.31*x964 - 0.75*x965
 - 0.317*x966 - 0.483*x967 - 0.633*x968 - 0.3*x969 - 0.5*x970 - 0.65*x971
 - 0.31*x972 - 0.75*x973 - 0.317*x974 - 0.483*x975 - 0.633*x976 - 0.3*x977
 - 0.5*x978 - 0.65*x979 - 0.31*x980 - 0.75*x981 - 0.317*x982 - 0.483*x983
 - 0.633*x984 - 0.3*x985 - 0.5*x986 - 0.65*x987 - 0.31*x988 - 0.75*x989
 - 0.317*x990 - 0.483*x991 - 0.633*x992 - 0.3*x993 - 0.5*x994 - 0.65*x995
 - 0.31*x996 - 0.75*x997 - 0.317*x998 - 0.483*x999 - 0.633*x1000
 - 0.3*x1001 - 0.5*x1002 - 0.65*x1003 - 0.31*x1004 - 0.75*x1005
 - 0.317*x1006 - 0.483*x1007 - 0.633*x1008 - 0.3*x1113 - 0.5*x1114
 - 0.65*x1115 - 0.31*x1116 - 0.75*x1117 - 0.317*x1118 - 0.483*x1119
 - 0.633*x1120 - 0.3*x1121 - 0.5*x1122 - 0.65*x1123 - 0.31*x1124
 - 0.75*x1125 - 0.317*x1126 - 0.483*x1127 - 0.633*x1128 - 0.3*x1129
 - 0.5*x1130 - 0.65*x1131 - 0.31*x1132 - 0.75*x1133 - 0.317*x1134
 - 0.483*x1135 - 0.633*x1136 - 0.3*x1137 - 0.5*x1138 - 0.65*x1139
 - 0.31*x1140 - 0.75*x1141 - 0.317*x1142 - 0.483*x1143 - 0.633*x1144
 - 0.3*x1145 - 0.5*x1146 - 0.65*x1147 - 0.31*x1148 - 0.75*x1149
 - 0.317*x1150 - 0.483*x1151 - 0.633*x1152 - 0.3*x1153 - 0.5*x1154
 - 0.65*x1155 - 0.31*x1156 - 0.75*x1157 - 0.317*x1158 - 0.483*x1159
 - 0.633*x1160 - 0.3*x1265 - 0.5*x1266 - 0.65*x1267 - 0.31*x1268
 - 0.75*x1269 - 0.317*x1270 - 0.483*x1271 - 0.633*x1272 - 0.3*x1273
 - 0.5*x1274 - 0.65*x1275 - 0.31*x1276 - 0.75*x1277 - 0.317*x1278
 - 0.483*x1279 - 0.633*x1280 - 0.3*x1281 - 0.5*x1282 - 0.65*x1283
 - 0.31*x1284 - 0.75*x1285 - 0.317*x1286 - 0.483*x1287 - 0.633*x1288
 - 0.3*x1289 - 0.5*x1290 - 0.65*x1291 - 0.31*x1292 - 0.75*x1293
 - 0.317*x1294 - 0.483*x1295 - 0.633*x1296 - 0.3*x1297 - 0.5*x1298
 - 0.65*x1299 - 0.31*x1300 - 0.75*x1301 - 0.317*x1302 - 0.483*x1303
 - 0.633*x1304 - 0.3*x1305 - 0.5*x1306 - 0.65*x1307 - 0.31*x1308
 - 0.75*x1309 - 0.317*x1310 - 0.483*x1311 - 0.633*x1312 - 0.3*x1417
 - 0.5*x1418 - 0.65*x1419 - 0.31*x1420 - 0.75*x1421 - 0.317*x1422
 - 0.483*x1423 - 0.633*x1424 - 0.3*x1425 - 0.5*x1426 - 0.65*x1427
 - 0.31*x1428 - 0.75*x1429 - 0.317*x1430 - 0.483*x1431 - 0.633*x1432
 - 0.3*x1433 - 0.5*x1434 - 0.65*x1435 - 0.31*x1436 - 0.75*x1437
 - 0.317*x1438 - 0.483*x1439 - 0.633*x1440 - 0.3*x1441 - 0.5*x1442
 - 0.65*x1443 - 0.31*x1444 - 0.75*x1445 - 0.317*x1446 - 0.483*x1447
 - 0.633*x1448 - 0.3*x1449 - 0.5*x1450 - 0.65*x1451 - 0.31*x1452
 - 0.75*x1453 - 0.317*x1454 - 0.483*x1455 - 0.633*x1456 - 0.3*x1457
 - 0.5*x1458 - 0.65*x1459 - 0.31*x1460 - 0.75*x1461 - 0.317*x1462
 - 0.483*x1463 - 0.633*x1464 - 0.3*x1569 - 0.5*x1570 - 0.65*x1571
 - 0.31*x1572 - 0.75*x1573 - 0.317*x1574 - 0.483*x1575 - 0.633*x1576
 - 0.3*x1577 - 0.5*x1578 - 0.65*x1579 - 0.31*x1580 - 0.75*x1581
 - 0.317*x1582 - 0.483*x1583 - 0.633*x1584 - 0.3*x1585 - 0.5*x1586
 - 0.65*x1587 - 0.31*x1588 - 0.75*x1589 - 0.317*x1590 - 0.483*x1591
 - 0.633*x1592 - 0.3*x1593 - 0.5*x1594 - 0.65*x1595 - 0.31*x1596
 - 0.75*x1597 - 0.317*x1598 - 0.483*x1599 - 0.633*x1600 - 0.3*x1601
 - 0.5*x1602 - 0.65*x1603 - 0.31*x1604 - 0.75*x1605 - 0.317*x1606
 - 0.483*x1607 - 0.633*x1608 - 0.3*x1609 - 0.5*x1610 - 0.65*x1611
 - 0.31*x1612 - 0.75*x1613 - 0.317*x1614 - 0.483*x1615 - 0.633*x1616
 - 0.3*x1721 - 0.5*x1722 - 0.65*x1723 - 0.31*x1724 - 0.75*x1725
 - 0.317*x1726 - 0.483*x1727 - 0.633*x1728 - 0.3*x1729 - 0.5*x1730
 - 0.65*x1731 - 0.31*x1732 - 0.75*x1733 - 0.317*x1734 - 0.483*x1735
 - 0.633*x1736 - 0.3*x1737 - 0.5*x1738 - 0.65*x1739 - 0.31*x1740
 - 0.75*x1741 - 0.317*x1742 - 0.483*x1743 - 0.633*x1744 - 0.3*x1745
 - 0.5*x1746 - 0.65*x1747 - 0.31*x1748 - 0.75*x1749 - 0.317*x1750
 - 0.483*x1751 - 0.633*x1752 - 0.3*x1753 - 0.5*x1754 - 0.65*x1755
 - 0.31*x1756 - 0.75*x1757 - 0.317*x1758 - 0.483*x1759 - 0.633*x1760
 - 0.3*x1761 - 0.5*x1762 - 0.65*x1763 - 0.31*x1764 - 0.75*x1765
 - 0.317*x1766 - 0.483*x1767 - 0.633*x1768 - 0.3*x1873 - 0.5*x1874
 - 0.65*x1875 - 0.31*x1876 - 0.75*x1877 - 0.317*x1878 - 0.483*x1879
 - 0.633*x1880 - 0.3*x1881 - 0.5*x1882 - 0.65*x1883 - 0.31*x1884
 - 0.75*x1885 - 0.317*x1886 - 0.483*x1887 - 0.633*x1888 - 0.3*x1889
 - 0.5*x1890 - 0.65*x1891 - 0.31*x1892 - 0.75*x1893 - 0.317*x1894
 - 0.483*x1895 - 0.633*x1896 - 0.3*x1897 - 0.5*x1898 - 0.65*x1899
 - 0.31*x1900 - 0.75*x1901 - 0.317*x1902 - 0.483*x1903 - 0.633*x1904
 - 0.3*x1905 - 0.5*x1906 - 0.65*x1907 - 0.31*x1908 - 0.75*x1909
 - 0.317*x1910 - 0.483*x1911 - 0.633*x1912 - 0.3*x1913 - 0.5*x1914
 - 0.65*x1915 - 0.31*x1916 - 0.75*x1917 - 0.317*x1918 - 0.483*x1919
 - 0.633*x1920 - 0.3*x2025 - 0.5*x2026 - 0.65*x2027 - 0.31*x2028
 - 0.75*x2029 - 0.317*x2030 - 0.483*x2031 - 0.633*x2032 - 0.3*x2033
 - 0.5*x2034 - 0.65*x2035 - 0.31*x2036 - 0.75*x2037 - 0.317*x2038
 - 0.483*x2039 - 0.633*x2040 - 0.3*x2041 - 0.5*x2042 - 0.65*x2043
 - 0.31*x2044 - 0.75*x2045 - 0.317*x2046 - 0.483*x2047 - 0.633*x2048
 - 0.3*x2049 - 0.5*x2050 - 0.65*x2051 - 0.31*x2052 - 0.75*x2053
 - 0.317*x2054 - 0.483*x2055 - 0.633*x2056 - 0.3*x2057 - 0.5*x2058
 - 0.65*x2059 - 0.31*x2060 - 0.75*x2061 - 0.317*x2062 - 0.483*x2063
 - 0.633*x2064 - 0.3*x2065 - 0.5*x2066 - 0.65*x2067 - 0.31*x2068
 - 0.75*x2069 - 0.317*x2070 - 0.483*x2071 - 0.633*x2072 - 0.3*x2177
 - 0.5*x2178 - 0.65*x2179 - 0.31*x2180 - 0.75*x2181 - 0.317*x2182
 - 0.483*x2183 - 0.633*x2184 - 0.3*x2185 - 0.5*x2186 - 0.65*x2187
 - 0.31*x2188 - 0.75*x2189 - 0.317*x2190 - 0.483*x2191 - 0.633*x2192
 - 0.3*x2193 - 0.5*x2194 - 0.65*x2195 - 0.31*x2196 - 0.75*x2197
 - 0.317*x2198 - 0.483*x2199 - 0.633*x2200 - 0.3*x2201 - 0.5*x2202
 - 0.65*x2203 - 0.31*x2204 - 0.75*x2205 - 0.317*x2206 - 0.483*x2207
 - 0.633*x2208 - 0.3*x2209 - 0.5*x2210 - 0.65*x2211 - 0.31*x2212
 - 0.75*x2213 - 0.317*x2214 - 0.483*x2215 - 0.633*x2216 - 0.3*x2217
 - 0.5*x2218 - 0.65*x2219 - 0.31*x2220 - 0.75*x2221 - 0.317*x2222
 - 0.483*x2223 - 0.633*x2224 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
