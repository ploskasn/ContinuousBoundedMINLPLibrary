#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_lee4_07";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x771,x772,x773,x774,x775,x776,x777,x778,x779,x780,x781,x782,x783,x784,x785,x786,x787,x788,x789,x790,x791,x792,x793,x794,x795,x796,x797,x798,x799,x800,x801,x802,x803,x804,x805,x806,x807,x808,x809,x810,x811,x812,x813,x814,x815,x816,x817,x818,x923,x924,x925,x926,x927,x928,x929,x930,x931,x932,x933,x934,x935,x936,x937,x938,x939,x940,x941,x942,x943,x944,x945,x946,x947,x948,x949,x950,x951,x952,x953,x954,x955,x956,x957,x958,x959,x960,x961,x962,x963,x964,x965,x966,x967,x968,x969,x970,x1075,x1076,x1077,x1078,x1079,x1080,x1081,x1082,x1083,x1084,x1085,x1086,x1087,x1088,x1089,x1090,x1091,x1092,x1093,x1094,x1095,x1096,x1097,x1098,x1099,x1100,x1101,x1102,x1103,x1104,x1105,x1106,x1107,x1108,x1109,x1110,x1111,x1112,x1113,x1114,x1115,x1116,x1117,x1118,x1119,x1120,x1121,x1122,x1227,x1228,x1229,x1230,x1231,x1232,x1233,x1234,x1235,x1236,x1237,x1238,x1239,x1240,x1241,x1242,x1243,x1244,x1245,x1246,x1247,x1248,x1249,x1250,x1251,x1252,x1253,x1254,x1255,x1256,x1257,x1258,x1259,x1260,x1261,x1262,x1263,x1264,x1265,x1266,x1267,x1268,x1269,x1270,x1271,x1272,x1273,x1274,x1379,x1380,x1381,x1382,x1383,x1384,x1385,x1386,x1387,x1388,x1389,x1390,x1391,x1392,x1393,x1394,x1395,x1396,x1397,x1398,x1399,x1400,x1401,x1402,x1403,x1404,x1405,x1406,x1407,x1408,x1409,x1410,x1411,x1412,x1413,x1414,x1415,x1416,x1417,x1418,x1419,x1420,x1421,x1422,x1423,x1424,x1425,x1426,x1531,x1532,x1533,x1534,x1535,x1536,x1537,x1538,x1539,x1540,x1541,x1542,x1543,x1544,x1545,x1546,x1547,x1548,x1549,x1550,x1551,x1552,x1553,x1554,x1555,x1556,x1557,x1558,x1559,x1560,x1561,x1562,x1563,x1564,x1565,x1566,x1567,x1568,x1569,x1570,x1571,x1572,x1573,x1574,x1575,x1576,x1577,x1578,x1683,x1684,x1685,x1686,x1687,x1688,x1689,x1690,x1691,x1692,x1693,x1694,x1695,x1696,x1697,x1698,x1699,x1700,x1701,x1702,x1703,x1704,x1705,x1706,x1707,x1708,x1709,x1710,x1711,x1712,x1713,x1714,x1715,x1716,x1717,x1718,x1719,x1720,x1721,x1722,x1723,x1724,x1725,x1726,x1727,x1728,x1729,x1730;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &x923); 
   fscanf(fp,"%f", &x924); 
   fscanf(fp,"%f", &x925); 
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
   fscanf(fp,"%f", &x1122); 
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
   fscanf(fp,"%f", &x1256); 
   fscanf(fp,"%f", &x1257); 
   fscanf(fp,"%f", &x1258); 
   fscanf(fp,"%f", &x1259); 
   fscanf(fp,"%f", &x1260); 
   fscanf(fp,"%f", &x1261); 
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
   fscanf(fp,"%f", &x1408); 
   fscanf(fp,"%f", &x1409); 
   fscanf(fp,"%f", &x1410); 
   fscanf(fp,"%f", &x1411); 
   fscanf(fp,"%f", &x1412); 
   fscanf(fp,"%f", &x1413); 
   fscanf(fp,"%f", &x1414); 
   fscanf(fp,"%f", &x1415); 
   fscanf(fp,"%f", &x1416); 
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
   fscanf(fp,"%f", &x1712); 
   fscanf(fp,"%f", &x1713); 
   fscanf(fp,"%f", &x1714); 
   fscanf(fp,"%f", &x1715); 
   fscanf(fp,"%f", &x1716); 
   fscanf(fp,"%f", &x1717); 
   fscanf(fp,"%f", &x1718); 
   fscanf(fp,"%f", &x1719); 
   fscanf(fp,"%f", &x1720); 
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

   fclose(fp);
   res=-( - 0.3*x771 - 0.5*x772 - 0.65*x773 - 0.31*x774 - 0.75*x775
 - 0.317*x776 - 0.483*x777 - 0.633*x778 - 0.3*x779 - 0.5*x780 - 0.65*x781
 - 0.31*x782 - 0.75*x783 - 0.317*x784 - 0.483*x785 - 0.633*x786 - 0.3*x787
 - 0.5*x788 - 0.65*x789 - 0.31*x790 - 0.75*x791 - 0.317*x792 - 0.483*x793
 - 0.633*x794 - 0.3*x795 - 0.5*x796 - 0.65*x797 - 0.31*x798 - 0.75*x799
 - 0.317*x800 - 0.483*x801 - 0.633*x802 - 0.3*x803 - 0.5*x804 - 0.65*x805
 - 0.31*x806 - 0.75*x807 - 0.317*x808 - 0.483*x809 - 0.633*x810 - 0.3*x811
 - 0.5*x812 - 0.65*x813 - 0.31*x814 - 0.75*x815 - 0.317*x816 - 0.483*x817
 - 0.633*x818 - 0.3*x923 - 0.5*x924 - 0.65*x925 - 0.31*x926 - 0.75*x927
 - 0.317*x928 - 0.483*x929 - 0.633*x930 - 0.3*x931 - 0.5*x932 - 0.65*x933
 - 0.31*x934 - 0.75*x935 - 0.317*x936 - 0.483*x937 - 0.633*x938 - 0.3*x939
 - 0.5*x940 - 0.65*x941 - 0.31*x942 - 0.75*x943 - 0.317*x944 - 0.483*x945
 - 0.633*x946 - 0.3*x947 - 0.5*x948 - 0.65*x949 - 0.31*x950 - 0.75*x951
 - 0.317*x952 - 0.483*x953 - 0.633*x954 - 0.3*x955 - 0.5*x956 - 0.65*x957
 - 0.31*x958 - 0.75*x959 - 0.317*x960 - 0.483*x961 - 0.633*x962 - 0.3*x963
 - 0.5*x964 - 0.65*x965 - 0.31*x966 - 0.75*x967 - 0.317*x968 - 0.483*x969
 - 0.633*x970 - 0.3*x1075 - 0.5*x1076 - 0.65*x1077 - 0.31*x1078
 - 0.75*x1079 - 0.317*x1080 - 0.483*x1081 - 0.633*x1082 - 0.3*x1083
 - 0.5*x1084 - 0.65*x1085 - 0.31*x1086 - 0.75*x1087 - 0.317*x1088
 - 0.483*x1089 - 0.633*x1090 - 0.3*x1091 - 0.5*x1092 - 0.65*x1093
 - 0.31*x1094 - 0.75*x1095 - 0.317*x1096 - 0.483*x1097 - 0.633*x1098
 - 0.3*x1099 - 0.5*x1100 - 0.65*x1101 - 0.31*x1102 - 0.75*x1103
 - 0.317*x1104 - 0.483*x1105 - 0.633*x1106 - 0.3*x1107 - 0.5*x1108
 - 0.65*x1109 - 0.31*x1110 - 0.75*x1111 - 0.317*x1112 - 0.483*x1113
 - 0.633*x1114 - 0.3*x1115 - 0.5*x1116 - 0.65*x1117 - 0.31*x1118
 - 0.75*x1119 - 0.317*x1120 - 0.483*x1121 - 0.633*x1122 - 0.3*x1227
 - 0.5*x1228 - 0.65*x1229 - 0.31*x1230 - 0.75*x1231 - 0.317*x1232
 - 0.483*x1233 - 0.633*x1234 - 0.3*x1235 - 0.5*x1236 - 0.65*x1237
 - 0.31*x1238 - 0.75*x1239 - 0.317*x1240 - 0.483*x1241 - 0.633*x1242
 - 0.3*x1243 - 0.5*x1244 - 0.65*x1245 - 0.31*x1246 - 0.75*x1247
 - 0.317*x1248 - 0.483*x1249 - 0.633*x1250 - 0.3*x1251 - 0.5*x1252
 - 0.65*x1253 - 0.31*x1254 - 0.75*x1255 - 0.317*x1256 - 0.483*x1257
 - 0.633*x1258 - 0.3*x1259 - 0.5*x1260 - 0.65*x1261 - 0.31*x1262
 - 0.75*x1263 - 0.317*x1264 - 0.483*x1265 - 0.633*x1266 - 0.3*x1267
 - 0.5*x1268 - 0.65*x1269 - 0.31*x1270 - 0.75*x1271 - 0.317*x1272
 - 0.483*x1273 - 0.633*x1274 - 0.3*x1379 - 0.5*x1380 - 0.65*x1381
 - 0.31*x1382 - 0.75*x1383 - 0.317*x1384 - 0.483*x1385 - 0.633*x1386
 - 0.3*x1387 - 0.5*x1388 - 0.65*x1389 - 0.31*x1390 - 0.75*x1391
 - 0.317*x1392 - 0.483*x1393 - 0.633*x1394 - 0.3*x1395 - 0.5*x1396
 - 0.65*x1397 - 0.31*x1398 - 0.75*x1399 - 0.317*x1400 - 0.483*x1401
 - 0.633*x1402 - 0.3*x1403 - 0.5*x1404 - 0.65*x1405 - 0.31*x1406
 - 0.75*x1407 - 0.317*x1408 - 0.483*x1409 - 0.633*x1410 - 0.3*x1411
 - 0.5*x1412 - 0.65*x1413 - 0.31*x1414 - 0.75*x1415 - 0.317*x1416
 - 0.483*x1417 - 0.633*x1418 - 0.3*x1419 - 0.5*x1420 - 0.65*x1421
 - 0.31*x1422 - 0.75*x1423 - 0.317*x1424 - 0.483*x1425 - 0.633*x1426
 - 0.3*x1531 - 0.5*x1532 - 0.65*x1533 - 0.31*x1534 - 0.75*x1535
 - 0.317*x1536 - 0.483*x1537 - 0.633*x1538 - 0.3*x1539 - 0.5*x1540
 - 0.65*x1541 - 0.31*x1542 - 0.75*x1543 - 0.317*x1544 - 0.483*x1545
 - 0.633*x1546 - 0.3*x1547 - 0.5*x1548 - 0.65*x1549 - 0.31*x1550
 - 0.75*x1551 - 0.317*x1552 - 0.483*x1553 - 0.633*x1554 - 0.3*x1555
 - 0.5*x1556 - 0.65*x1557 - 0.31*x1558 - 0.75*x1559 - 0.317*x1560
 - 0.483*x1561 - 0.633*x1562 - 0.3*x1563 - 0.5*x1564 - 0.65*x1565
 - 0.31*x1566 - 0.75*x1567 - 0.317*x1568 - 0.483*x1569 - 0.633*x1570
 - 0.3*x1571 - 0.5*x1572 - 0.65*x1573 - 0.31*x1574 - 0.75*x1575
 - 0.317*x1576 - 0.483*x1577 - 0.633*x1578 - 0.3*x1683 - 0.5*x1684
 - 0.65*x1685 - 0.31*x1686 - 0.75*x1687 - 0.317*x1688 - 0.483*x1689
 - 0.633*x1690 - 0.3*x1691 - 0.5*x1692 - 0.65*x1693 - 0.31*x1694
 - 0.75*x1695 - 0.317*x1696 - 0.483*x1697 - 0.633*x1698 - 0.3*x1699
 - 0.5*x1700 - 0.65*x1701 - 0.31*x1702 - 0.75*x1703 - 0.317*x1704
 - 0.483*x1705 - 0.633*x1706 - 0.3*x1707 - 0.5*x1708 - 0.65*x1709
 - 0.31*x1710 - 0.75*x1711 - 0.317*x1712 - 0.483*x1713 - 0.633*x1714
 - 0.3*x1715 - 0.5*x1716 - 0.65*x1717 - 0.31*x1718 - 0.75*x1719
 - 0.317*x1720 - 0.483*x1721 - 0.633*x1722 - 0.3*x1723 - 0.5*x1724
 - 0.65*x1725 - 0.31*x1726 - 0.75*x1727 - 0.317*x1728 - 0.483*x1729
 - 0.633*x1730 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
