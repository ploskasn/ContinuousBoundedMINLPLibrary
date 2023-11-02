#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_lee4_10";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1056,x1057,x1058,x1059,x1060,x1061,x1062,x1063,x1064,x1065,x1066,x1067,x1068,x1069,x1070,x1071,x1072,x1073,x1074,x1075,x1076,x1077,x1078,x1079,x1080,x1081,x1082,x1083,x1084,x1085,x1086,x1087,x1088,x1089,x1090,x1091,x1092,x1093,x1094,x1095,x1096,x1097,x1098,x1099,x1100,x1101,x1102,x1103,x1208,x1209,x1210,x1211,x1212,x1213,x1214,x1215,x1216,x1217,x1218,x1219,x1220,x1221,x1222,x1223,x1224,x1225,x1226,x1227,x1228,x1229,x1230,x1231,x1232,x1233,x1234,x1235,x1236,x1237,x1238,x1239,x1240,x1241,x1242,x1243,x1244,x1245,x1246,x1247,x1248,x1249,x1250,x1251,x1252,x1253,x1254,x1255,x1360,x1361,x1362,x1363,x1364,x1365,x1366,x1367,x1368,x1369,x1370,x1371,x1372,x1373,x1374,x1375,x1376,x1377,x1378,x1379,x1380,x1381,x1382,x1383,x1384,x1385,x1386,x1387,x1388,x1389,x1390,x1391,x1392,x1393,x1394,x1395,x1396,x1397,x1398,x1399,x1400,x1401,x1402,x1403,x1404,x1405,x1406,x1407,x1512,x1513,x1514,x1515,x1516,x1517,x1518,x1519,x1520,x1521,x1522,x1523,x1524,x1525,x1526,x1527,x1528,x1529,x1530,x1531,x1532,x1533,x1534,x1535,x1536,x1537,x1538,x1539,x1540,x1541,x1542,x1543,x1544,x1545,x1546,x1547,x1548,x1549,x1550,x1551,x1552,x1553,x1554,x1555,x1556,x1557,x1558,x1559,x1664,x1665,x1666,x1667,x1668,x1669,x1670,x1671,x1672,x1673,x1674,x1675,x1676,x1677,x1678,x1679,x1680,x1681,x1682,x1683,x1684,x1685,x1686,x1687,x1688,x1689,x1690,x1691,x1692,x1693,x1694,x1695,x1696,x1697,x1698,x1699,x1700,x1701,x1702,x1703,x1704,x1705,x1706,x1707,x1708,x1709,x1710,x1711,x1816,x1817,x1818,x1819,x1820,x1821,x1822,x1823,x1824,x1825,x1826,x1827,x1828,x1829,x1830,x1831,x1832,x1833,x1834,x1835,x1836,x1837,x1838,x1839,x1840,x1841,x1842,x1843,x1844,x1845,x1846,x1847,x1848,x1849,x1850,x1851,x1852,x1853,x1854,x1855,x1856,x1857,x1858,x1859,x1860,x1861,x1862,x1863,x1968,x1969,x1970,x1971,x1972,x1973,x1974,x1975,x1976,x1977,x1978,x1979,x1980,x1981,x1982,x1983,x1984,x1985,x1986,x1987,x1988,x1989,x1990,x1991,x1992,x1993,x1994,x1995,x1996,x1997,x1998,x1999,x2000,x2001,x2002,x2003,x2004,x2005,x2006,x2007,x2008,x2009,x2010,x2011,x2012,x2013,x2014,x2015,x2120,x2121,x2122,x2123,x2124,x2125,x2126,x2127,x2128,x2129,x2130,x2131,x2132,x2133,x2134,x2135,x2136,x2137,x2138,x2139,x2140,x2141,x2142,x2143,x2144,x2145,x2146,x2147,x2148,x2149,x2150,x2151,x2152,x2153,x2154,x2155,x2156,x2157,x2158,x2159,x2160,x2161,x2162,x2163,x2164,x2165,x2166,x2167,x2272,x2273,x2274,x2275,x2276,x2277,x2278,x2279,x2280,x2281,x2282,x2283,x2284,x2285,x2286,x2287,x2288,x2289,x2290,x2291,x2292,x2293,x2294,x2295,x2296,x2297,x2298,x2299,x2300,x2301,x2302,x2303,x2304,x2305,x2306,x2307,x2308,x2309,x2310,x2311,x2312,x2313,x2314,x2315,x2316,x2317,x2318,x2319,x2424,x2425,x2426,x2427,x2428,x2429,x2430,x2431,x2432,x2433,x2434,x2435,x2436,x2437,x2438,x2439,x2440,x2441,x2442,x2443,x2444,x2445,x2446,x2447,x2448,x2449,x2450,x2451,x2452,x2453,x2454,x2455,x2456,x2457,x2458,x2459,x2460,x2461,x2462,x2463,x2464,x2465,x2466,x2467,x2468,x2469,x2470,x2471;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &x1248); 
   fscanf(fp,"%f", &x1249); 
   fscanf(fp,"%f", &x1250); 
   fscanf(fp,"%f", &x1251); 
   fscanf(fp,"%f", &x1252); 
   fscanf(fp,"%f", &x1253); 
   fscanf(fp,"%f", &x1254); 
   fscanf(fp,"%f", &x1255); 
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
   fscanf(fp,"%f", &x1542); 
   fscanf(fp,"%f", &x1543); 
   fscanf(fp,"%f", &x1544); 
   fscanf(fp,"%f", &x1545); 
   fscanf(fp,"%f", &x1546); 
   fscanf(fp,"%f", &x1547); 
   fscanf(fp,"%f", &x1548); 
   fscanf(fp,"%f", &x1549); 
   fscanf(fp,"%f", &x1550); 
   fscanf(fp,"%f", &x1551); 
   fscanf(fp,"%f", &x1552); 
   fscanf(fp,"%f", &x1553); 
   fscanf(fp,"%f", &x1554); 
   fscanf(fp,"%f", &x1555); 
   fscanf(fp,"%f", &x1556); 
   fscanf(fp,"%f", &x1557); 
   fscanf(fp,"%f", &x1558); 
   fscanf(fp,"%f", &x1559); 
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
   fscanf(fp,"%f", &x1682); 
   fscanf(fp,"%f", &x1683); 
   fscanf(fp,"%f", &x1684); 
   fscanf(fp,"%f", &x1685); 
   fscanf(fp,"%f", &x1686); 
   fscanf(fp,"%f", &x1687); 
   fscanf(fp,"%f", &x1688); 
   fscanf(fp,"%f", &x1689); 
   fscanf(fp,"%f", &x1690); 
   fscanf(fp,"%f", &x1691); 
   fscanf(fp,"%f", &x1692); 
   fscanf(fp,"%f", &x1693); 
   fscanf(fp,"%f", &x1694); 
   fscanf(fp,"%f", &x1695); 
   fscanf(fp,"%f", &x1696); 
   fscanf(fp,"%f", &x1697); 
   fscanf(fp,"%f", &x1698); 
   fscanf(fp,"%f", &x1699); 
   fscanf(fp,"%f", &x1700); 
   fscanf(fp,"%f", &x1701); 
   fscanf(fp,"%f", &x1702); 
   fscanf(fp,"%f", &x1703); 
   fscanf(fp,"%f", &x1704); 
   fscanf(fp,"%f", &x1705); 
   fscanf(fp,"%f", &x1706); 
   fscanf(fp,"%f", &x1707); 
   fscanf(fp,"%f", &x1708); 
   fscanf(fp,"%f", &x1709); 
   fscanf(fp,"%f", &x1710); 
   fscanf(fp,"%f", &x1711); 
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
   fscanf(fp,"%f", &x1826); 
   fscanf(fp,"%f", &x1827); 
   fscanf(fp,"%f", &x1828); 
   fscanf(fp,"%f", &x1829); 
   fscanf(fp,"%f", &x1830); 
   fscanf(fp,"%f", &x1831); 
   fscanf(fp,"%f", &x1832); 
   fscanf(fp,"%f", &x1833); 
   fscanf(fp,"%f", &x1834); 
   fscanf(fp,"%f", &x1835); 
   fscanf(fp,"%f", &x1836); 
   fscanf(fp,"%f", &x1837); 
   fscanf(fp,"%f", &x1838); 
   fscanf(fp,"%f", &x1839); 
   fscanf(fp,"%f", &x1840); 
   fscanf(fp,"%f", &x1841); 
   fscanf(fp,"%f", &x1842); 
   fscanf(fp,"%f", &x1843); 
   fscanf(fp,"%f", &x1844); 
   fscanf(fp,"%f", &x1845); 
   fscanf(fp,"%f", &x1846); 
   fscanf(fp,"%f", &x1847); 
   fscanf(fp,"%f", &x1848); 
   fscanf(fp,"%f", &x1849); 
   fscanf(fp,"%f", &x1850); 
   fscanf(fp,"%f", &x1851); 
   fscanf(fp,"%f", &x1852); 
   fscanf(fp,"%f", &x1853); 
   fscanf(fp,"%f", &x1854); 
   fscanf(fp,"%f", &x1855); 
   fscanf(fp,"%f", &x1856); 
   fscanf(fp,"%f", &x1857); 
   fscanf(fp,"%f", &x1858); 
   fscanf(fp,"%f", &x1859); 
   fscanf(fp,"%f", &x1860); 
   fscanf(fp,"%f", &x1861); 
   fscanf(fp,"%f", &x1862); 
   fscanf(fp,"%f", &x1863); 
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
   fscanf(fp,"%f", &x1978); 
   fscanf(fp,"%f", &x1979); 
   fscanf(fp,"%f", &x1980); 
   fscanf(fp,"%f", &x1981); 
   fscanf(fp,"%f", &x1982); 
   fscanf(fp,"%f", &x1983); 
   fscanf(fp,"%f", &x1984); 
   fscanf(fp,"%f", &x1985); 
   fscanf(fp,"%f", &x1986); 
   fscanf(fp,"%f", &x1987); 
   fscanf(fp,"%f", &x1988); 
   fscanf(fp,"%f", &x1989); 
   fscanf(fp,"%f", &x1990); 
   fscanf(fp,"%f", &x1991); 
   fscanf(fp,"%f", &x1992); 
   fscanf(fp,"%f", &x1993); 
   fscanf(fp,"%f", &x1994); 
   fscanf(fp,"%f", &x1995); 
   fscanf(fp,"%f", &x1996); 
   fscanf(fp,"%f", &x1997); 
   fscanf(fp,"%f", &x1998); 
   fscanf(fp,"%f", &x1999); 
   fscanf(fp,"%f", &x2000); 
   fscanf(fp,"%f", &x2001); 
   fscanf(fp,"%f", &x2002); 
   fscanf(fp,"%f", &x2003); 
   fscanf(fp,"%f", &x2004); 
   fscanf(fp,"%f", &x2005); 
   fscanf(fp,"%f", &x2006); 
   fscanf(fp,"%f", &x2007); 
   fscanf(fp,"%f", &x2008); 
   fscanf(fp,"%f", &x2009); 
   fscanf(fp,"%f", &x2010); 
   fscanf(fp,"%f", &x2011); 
   fscanf(fp,"%f", &x2012); 
   fscanf(fp,"%f", &x2013); 
   fscanf(fp,"%f", &x2014); 
   fscanf(fp,"%f", &x2015); 
   fscanf(fp,"%f", &x2120); 
   fscanf(fp,"%f", &x2121); 
   fscanf(fp,"%f", &x2122); 
   fscanf(fp,"%f", &x2123); 
   fscanf(fp,"%f", &x2124); 
   fscanf(fp,"%f", &x2125); 
   fscanf(fp,"%f", &x2126); 
   fscanf(fp,"%f", &x2127); 
   fscanf(fp,"%f", &x2128); 
   fscanf(fp,"%f", &x2129); 
   fscanf(fp,"%f", &x2130); 
   fscanf(fp,"%f", &x2131); 
   fscanf(fp,"%f", &x2132); 
   fscanf(fp,"%f", &x2133); 
   fscanf(fp,"%f", &x2134); 
   fscanf(fp,"%f", &x2135); 
   fscanf(fp,"%f", &x2136); 
   fscanf(fp,"%f", &x2137); 
   fscanf(fp,"%f", &x2138); 
   fscanf(fp,"%f", &x2139); 
   fscanf(fp,"%f", &x2140); 
   fscanf(fp,"%f", &x2141); 
   fscanf(fp,"%f", &x2142); 
   fscanf(fp,"%f", &x2143); 
   fscanf(fp,"%f", &x2144); 
   fscanf(fp,"%f", &x2145); 
   fscanf(fp,"%f", &x2146); 
   fscanf(fp,"%f", &x2147); 
   fscanf(fp,"%f", &x2148); 
   fscanf(fp,"%f", &x2149); 
   fscanf(fp,"%f", &x2150); 
   fscanf(fp,"%f", &x2151); 
   fscanf(fp,"%f", &x2152); 
   fscanf(fp,"%f", &x2153); 
   fscanf(fp,"%f", &x2154); 
   fscanf(fp,"%f", &x2155); 
   fscanf(fp,"%f", &x2156); 
   fscanf(fp,"%f", &x2157); 
   fscanf(fp,"%f", &x2158); 
   fscanf(fp,"%f", &x2159); 
   fscanf(fp,"%f", &x2160); 
   fscanf(fp,"%f", &x2161); 
   fscanf(fp,"%f", &x2162); 
   fscanf(fp,"%f", &x2163); 
   fscanf(fp,"%f", &x2164); 
   fscanf(fp,"%f", &x2165); 
   fscanf(fp,"%f", &x2166); 
   fscanf(fp,"%f", &x2167); 
   fscanf(fp,"%f", &x2272); 
   fscanf(fp,"%f", &x2273); 
   fscanf(fp,"%f", &x2274); 
   fscanf(fp,"%f", &x2275); 
   fscanf(fp,"%f", &x2276); 
   fscanf(fp,"%f", &x2277); 
   fscanf(fp,"%f", &x2278); 
   fscanf(fp,"%f", &x2279); 
   fscanf(fp,"%f", &x2280); 
   fscanf(fp,"%f", &x2281); 
   fscanf(fp,"%f", &x2282); 
   fscanf(fp,"%f", &x2283); 
   fscanf(fp,"%f", &x2284); 
   fscanf(fp,"%f", &x2285); 
   fscanf(fp,"%f", &x2286); 
   fscanf(fp,"%f", &x2287); 
   fscanf(fp,"%f", &x2288); 
   fscanf(fp,"%f", &x2289); 
   fscanf(fp,"%f", &x2290); 
   fscanf(fp,"%f", &x2291); 
   fscanf(fp,"%f", &x2292); 
   fscanf(fp,"%f", &x2293); 
   fscanf(fp,"%f", &x2294); 
   fscanf(fp,"%f", &x2295); 
   fscanf(fp,"%f", &x2296); 
   fscanf(fp,"%f", &x2297); 
   fscanf(fp,"%f", &x2298); 
   fscanf(fp,"%f", &x2299); 
   fscanf(fp,"%f", &x2300); 
   fscanf(fp,"%f", &x2301); 
   fscanf(fp,"%f", &x2302); 
   fscanf(fp,"%f", &x2303); 
   fscanf(fp,"%f", &x2304); 
   fscanf(fp,"%f", &x2305); 
   fscanf(fp,"%f", &x2306); 
   fscanf(fp,"%f", &x2307); 
   fscanf(fp,"%f", &x2308); 
   fscanf(fp,"%f", &x2309); 
   fscanf(fp,"%f", &x2310); 
   fscanf(fp,"%f", &x2311); 
   fscanf(fp,"%f", &x2312); 
   fscanf(fp,"%f", &x2313); 
   fscanf(fp,"%f", &x2314); 
   fscanf(fp,"%f", &x2315); 
   fscanf(fp,"%f", &x2316); 
   fscanf(fp,"%f", &x2317); 
   fscanf(fp,"%f", &x2318); 
   fscanf(fp,"%f", &x2319); 
   fscanf(fp,"%f", &x2424); 
   fscanf(fp,"%f", &x2425); 
   fscanf(fp,"%f", &x2426); 
   fscanf(fp,"%f", &x2427); 
   fscanf(fp,"%f", &x2428); 
   fscanf(fp,"%f", &x2429); 
   fscanf(fp,"%f", &x2430); 
   fscanf(fp,"%f", &x2431); 
   fscanf(fp,"%f", &x2432); 
   fscanf(fp,"%f", &x2433); 
   fscanf(fp,"%f", &x2434); 
   fscanf(fp,"%f", &x2435); 
   fscanf(fp,"%f", &x2436); 
   fscanf(fp,"%f", &x2437); 
   fscanf(fp,"%f", &x2438); 
   fscanf(fp,"%f", &x2439); 
   fscanf(fp,"%f", &x2440); 
   fscanf(fp,"%f", &x2441); 
   fscanf(fp,"%f", &x2442); 
   fscanf(fp,"%f", &x2443); 
   fscanf(fp,"%f", &x2444); 
   fscanf(fp,"%f", &x2445); 
   fscanf(fp,"%f", &x2446); 
   fscanf(fp,"%f", &x2447); 
   fscanf(fp,"%f", &x2448); 
   fscanf(fp,"%f", &x2449); 
   fscanf(fp,"%f", &x2450); 
   fscanf(fp,"%f", &x2451); 
   fscanf(fp,"%f", &x2452); 
   fscanf(fp,"%f", &x2453); 
   fscanf(fp,"%f", &x2454); 
   fscanf(fp,"%f", &x2455); 
   fscanf(fp,"%f", &x2456); 
   fscanf(fp,"%f", &x2457); 
   fscanf(fp,"%f", &x2458); 
   fscanf(fp,"%f", &x2459); 
   fscanf(fp,"%f", &x2460); 
   fscanf(fp,"%f", &x2461); 
   fscanf(fp,"%f", &x2462); 
   fscanf(fp,"%f", &x2463); 
   fscanf(fp,"%f", &x2464); 
   fscanf(fp,"%f", &x2465); 
   fscanf(fp,"%f", &x2466); 
   fscanf(fp,"%f", &x2467); 
   fscanf(fp,"%f", &x2468); 
   fscanf(fp,"%f", &x2469); 
   fscanf(fp,"%f", &x2470); 
   fscanf(fp,"%f", &x2471); 

   fclose(fp);
   res=-( - 0.3*x1056 - 0.5*x1057 - 0.65*x1058 - 0.31*x1059 - 0.75*x1060
 - 0.317*x1061 - 0.483*x1062 - 0.633*x1063 - 0.3*x1064 - 0.5*x1065
 - 0.65*x1066 - 0.31*x1067 - 0.75*x1068 - 0.317*x1069 - 0.483*x1070
 - 0.633*x1071 - 0.3*x1072 - 0.5*x1073 - 0.65*x1074 - 0.31*x1075
 - 0.75*x1076 - 0.317*x1077 - 0.483*x1078 - 0.633*x1079 - 0.3*x1080
 - 0.5*x1081 - 0.65*x1082 - 0.31*x1083 - 0.75*x1084 - 0.317*x1085
 - 0.483*x1086 - 0.633*x1087 - 0.3*x1088 - 0.5*x1089 - 0.65*x1090
 - 0.31*x1091 - 0.75*x1092 - 0.317*x1093 - 0.483*x1094 - 0.633*x1095
 - 0.3*x1096 - 0.5*x1097 - 0.65*x1098 - 0.31*x1099 - 0.75*x1100
 - 0.317*x1101 - 0.483*x1102 - 0.633*x1103 - 0.3*x1208 - 0.5*x1209
 - 0.65*x1210 - 0.31*x1211 - 0.75*x1212 - 0.317*x1213 - 0.483*x1214
 - 0.633*x1215 - 0.3*x1216 - 0.5*x1217 - 0.65*x1218 - 0.31*x1219
 - 0.75*x1220 - 0.317*x1221 - 0.483*x1222 - 0.633*x1223 - 0.3*x1224
 - 0.5*x1225 - 0.65*x1226 - 0.31*x1227 - 0.75*x1228 - 0.317*x1229
 - 0.483*x1230 - 0.633*x1231 - 0.3*x1232 - 0.5*x1233 - 0.65*x1234
 - 0.31*x1235 - 0.75*x1236 - 0.317*x1237 - 0.483*x1238 - 0.633*x1239
 - 0.3*x1240 - 0.5*x1241 - 0.65*x1242 - 0.31*x1243 - 0.75*x1244
 - 0.317*x1245 - 0.483*x1246 - 0.633*x1247 - 0.3*x1248 - 0.5*x1249
 - 0.65*x1250 - 0.31*x1251 - 0.75*x1252 - 0.317*x1253 - 0.483*x1254
 - 0.633*x1255 - 0.3*x1360 - 0.5*x1361 - 0.65*x1362 - 0.31*x1363
 - 0.75*x1364 - 0.317*x1365 - 0.483*x1366 - 0.633*x1367 - 0.3*x1368
 - 0.5*x1369 - 0.65*x1370 - 0.31*x1371 - 0.75*x1372 - 0.317*x1373
 - 0.483*x1374 - 0.633*x1375 - 0.3*x1376 - 0.5*x1377 - 0.65*x1378
 - 0.31*x1379 - 0.75*x1380 - 0.317*x1381 - 0.483*x1382 - 0.633*x1383
 - 0.3*x1384 - 0.5*x1385 - 0.65*x1386 - 0.31*x1387 - 0.75*x1388
 - 0.317*x1389 - 0.483*x1390 - 0.633*x1391 - 0.3*x1392 - 0.5*x1393
 - 0.65*x1394 - 0.31*x1395 - 0.75*x1396 - 0.317*x1397 - 0.483*x1398
 - 0.633*x1399 - 0.3*x1400 - 0.5*x1401 - 0.65*x1402 - 0.31*x1403
 - 0.75*x1404 - 0.317*x1405 - 0.483*x1406 - 0.633*x1407 - 0.3*x1512
 - 0.5*x1513 - 0.65*x1514 - 0.31*x1515 - 0.75*x1516 - 0.317*x1517
 - 0.483*x1518 - 0.633*x1519 - 0.3*x1520 - 0.5*x1521 - 0.65*x1522
 - 0.31*x1523 - 0.75*x1524 - 0.317*x1525 - 0.483*x1526 - 0.633*x1527
 - 0.3*x1528 - 0.5*x1529 - 0.65*x1530 - 0.31*x1531 - 0.75*x1532
 - 0.317*x1533 - 0.483*x1534 - 0.633*x1535 - 0.3*x1536 - 0.5*x1537
 - 0.65*x1538 - 0.31*x1539 - 0.75*x1540 - 0.317*x1541 - 0.483*x1542
 - 0.633*x1543 - 0.3*x1544 - 0.5*x1545 - 0.65*x1546 - 0.31*x1547
 - 0.75*x1548 - 0.317*x1549 - 0.483*x1550 - 0.633*x1551 - 0.3*x1552
 - 0.5*x1553 - 0.65*x1554 - 0.31*x1555 - 0.75*x1556 - 0.317*x1557
 - 0.483*x1558 - 0.633*x1559 - 0.3*x1664 - 0.5*x1665 - 0.65*x1666
 - 0.31*x1667 - 0.75*x1668 - 0.317*x1669 - 0.483*x1670 - 0.633*x1671
 - 0.3*x1672 - 0.5*x1673 - 0.65*x1674 - 0.31*x1675 - 0.75*x1676
 - 0.317*x1677 - 0.483*x1678 - 0.633*x1679 - 0.3*x1680 - 0.5*x1681
 - 0.65*x1682 - 0.31*x1683 - 0.75*x1684 - 0.317*x1685 - 0.483*x1686
 - 0.633*x1687 - 0.3*x1688 - 0.5*x1689 - 0.65*x1690 - 0.31*x1691
 - 0.75*x1692 - 0.317*x1693 - 0.483*x1694 - 0.633*x1695 - 0.3*x1696
 - 0.5*x1697 - 0.65*x1698 - 0.31*x1699 - 0.75*x1700 - 0.317*x1701
 - 0.483*x1702 - 0.633*x1703 - 0.3*x1704 - 0.5*x1705 - 0.65*x1706
 - 0.31*x1707 - 0.75*x1708 - 0.317*x1709 - 0.483*x1710 - 0.633*x1711
 - 0.3*x1816 - 0.5*x1817 - 0.65*x1818 - 0.31*x1819 - 0.75*x1820
 - 0.317*x1821 - 0.483*x1822 - 0.633*x1823 - 0.3*x1824 - 0.5*x1825
 - 0.65*x1826 - 0.31*x1827 - 0.75*x1828 - 0.317*x1829 - 0.483*x1830
 - 0.633*x1831 - 0.3*x1832 - 0.5*x1833 - 0.65*x1834 - 0.31*x1835
 - 0.75*x1836 - 0.317*x1837 - 0.483*x1838 - 0.633*x1839 - 0.3*x1840
 - 0.5*x1841 - 0.65*x1842 - 0.31*x1843 - 0.75*x1844 - 0.317*x1845
 - 0.483*x1846 - 0.633*x1847 - 0.3*x1848 - 0.5*x1849 - 0.65*x1850
 - 0.31*x1851 - 0.75*x1852 - 0.317*x1853 - 0.483*x1854 - 0.633*x1855
 - 0.3*x1856 - 0.5*x1857 - 0.65*x1858 - 0.31*x1859 - 0.75*x1860
 - 0.317*x1861 - 0.483*x1862 - 0.633*x1863 - 0.3*x1968 - 0.5*x1969
 - 0.65*x1970 - 0.31*x1971 - 0.75*x1972 - 0.317*x1973 - 0.483*x1974
 - 0.633*x1975 - 0.3*x1976 - 0.5*x1977 - 0.65*x1978 - 0.31*x1979
 - 0.75*x1980 - 0.317*x1981 - 0.483*x1982 - 0.633*x1983 - 0.3*x1984
 - 0.5*x1985 - 0.65*x1986 - 0.31*x1987 - 0.75*x1988 - 0.317*x1989
 - 0.483*x1990 - 0.633*x1991 - 0.3*x1992 - 0.5*x1993 - 0.65*x1994
 - 0.31*x1995 - 0.75*x1996 - 0.317*x1997 - 0.483*x1998 - 0.633*x1999
 - 0.3*x2000 - 0.5*x2001 - 0.65*x2002 - 0.31*x2003 - 0.75*x2004
 - 0.317*x2005 - 0.483*x2006 - 0.633*x2007 - 0.3*x2008 - 0.5*x2009
 - 0.65*x2010 - 0.31*x2011 - 0.75*x2012 - 0.317*x2013 - 0.483*x2014
 - 0.633*x2015 - 0.3*x2120 - 0.5*x2121 - 0.65*x2122 - 0.31*x2123
 - 0.75*x2124 - 0.317*x2125 - 0.483*x2126 - 0.633*x2127 - 0.3*x2128
 - 0.5*x2129 - 0.65*x2130 - 0.31*x2131 - 0.75*x2132 - 0.317*x2133
 - 0.483*x2134 - 0.633*x2135 - 0.3*x2136 - 0.5*x2137 - 0.65*x2138
 - 0.31*x2139 - 0.75*x2140 - 0.317*x2141 - 0.483*x2142 - 0.633*x2143
 - 0.3*x2144 - 0.5*x2145 - 0.65*x2146 - 0.31*x2147 - 0.75*x2148
 - 0.317*x2149 - 0.483*x2150 - 0.633*x2151 - 0.3*x2152 - 0.5*x2153
 - 0.65*x2154 - 0.31*x2155 - 0.75*x2156 - 0.317*x2157 - 0.483*x2158
 - 0.633*x2159 - 0.3*x2160 - 0.5*x2161 - 0.65*x2162 - 0.31*x2163
 - 0.75*x2164 - 0.317*x2165 - 0.483*x2166 - 0.633*x2167 - 0.3*x2272
 - 0.5*x2273 - 0.65*x2274 - 0.31*x2275 - 0.75*x2276 - 0.317*x2277
 - 0.483*x2278 - 0.633*x2279 - 0.3*x2280 - 0.5*x2281 - 0.65*x2282
 - 0.31*x2283 - 0.75*x2284 - 0.317*x2285 - 0.483*x2286 - 0.633*x2287
 - 0.3*x2288 - 0.5*x2289 - 0.65*x2290 - 0.31*x2291 - 0.75*x2292
 - 0.317*x2293 - 0.483*x2294 - 0.633*x2295 - 0.3*x2296 - 0.5*x2297
 - 0.65*x2298 - 0.31*x2299 - 0.75*x2300 - 0.317*x2301 - 0.483*x2302
 - 0.633*x2303 - 0.3*x2304 - 0.5*x2305 - 0.65*x2306 - 0.31*x2307
 - 0.75*x2308 - 0.317*x2309 - 0.483*x2310 - 0.633*x2311 - 0.3*x2312
 - 0.5*x2313 - 0.65*x2314 - 0.31*x2315 - 0.75*x2316 - 0.317*x2317
 - 0.483*x2318 - 0.633*x2319 - 0.3*x2424 - 0.5*x2425 - 0.65*x2426
 - 0.31*x2427 - 0.75*x2428 - 0.317*x2429 - 0.483*x2430 - 0.633*x2431
 - 0.3*x2432 - 0.5*x2433 - 0.65*x2434 - 0.31*x2435 - 0.75*x2436
 - 0.317*x2437 - 0.483*x2438 - 0.633*x2439 - 0.3*x2440 - 0.5*x2441
 - 0.65*x2442 - 0.31*x2443 - 0.75*x2444 - 0.317*x2445 - 0.483*x2446
 - 0.633*x2447 - 0.3*x2448 - 0.5*x2449 - 0.65*x2450 - 0.31*x2451
 - 0.75*x2452 - 0.317*x2453 - 0.483*x2454 - 0.633*x2455 - 0.3*x2456
 - 0.5*x2457 - 0.65*x2458 - 0.31*x2459 - 0.75*x2460 - 0.317*x2461
 - 0.483*x2462 - 0.633*x2463 - 0.3*x2464 - 0.5*x2465 - 0.65*x2466
 - 0.31*x2467 - 0.75*x2468 - 0.317*x2469 - 0.483*x2470 - 0.633*x2471 - 0
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
