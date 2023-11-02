#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  

float sqr(float b)
{
   float z;
   z = b*b;
   return(z);
}

int main(int argc, char** argv) { 
   char *problemname="gasoil400";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x21,x881,x883,x885,x887,x22,x882,x884,x886,x888,x43,x969,x971,x973,x975,x44,x970,x972,x974,x976,x63,x1049,x1051,x1053,x1055,x64,x1050,x1052,x1054,x1056,x85,x1137,x1139,x1141,x1143,x86,x1138,x1140,x1142,x1144,x105,x1217,x1219,x1221,x1223,x106,x1218,x1220,x1222,x1224,x127,x1305,x1307,x1309,x1311,x128,x1306,x1308,x1310,x1312,x147,x1385,x1387,x1389,x1391,x148,x1386,x1388,x1390,x1392,x169,x1473,x1475,x1477,x1479,x170,x1474,x1476,x1478,x1480,x189,x1553,x1555,x1557,x1559,x190,x1554,x1556,x1558,x1560,x211,x1641,x1643,x1645,x1647,x212,x1642,x1644,x1646,x1648,x253,x1809,x1811,x1813,x1815,x254,x1810,x1812,x1814,x1816,x295,x1977,x1979,x1981,x1983,x296,x1978,x1980,x1982,x1984,x337,x2145,x2147,x2149,x2151,x338,x2146,x2148,x2150,x2152,x379,x2313,x2315,x2317,x2319,x380,x2314,x2316,x2318,x2320,x421,x2481,x2483,x2485,x2487,x422,x2482,x2484,x2486,x2488,x463,x2649,x2651,x2653,x2655,x464,x2650,x2652,x2654,x2656,x547,x2985,x2987,x2989,x2991,x548,x2986,x2988,x2990,x2992,x631,x3321,x3323,x3325,x3327,x632,x3322,x3324,x3326,x3328,x715,x3657,x3659,x3661,x3663,x716,x3658,x3660,x3662,x3664,x799,x3993,x3995,x3997,x3999,x800,x3994,x3996,x3998,x4000;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x881); 
   fscanf(fp,"%f", &x883); 
   fscanf(fp,"%f", &x885); 
   fscanf(fp,"%f", &x887); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x882); 
   fscanf(fp,"%f", &x884); 
   fscanf(fp,"%f", &x886); 
   fscanf(fp,"%f", &x888); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x969); 
   fscanf(fp,"%f", &x971); 
   fscanf(fp,"%f", &x973); 
   fscanf(fp,"%f", &x975); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x970); 
   fscanf(fp,"%f", &x972); 
   fscanf(fp,"%f", &x974); 
   fscanf(fp,"%f", &x976); 
   fscanf(fp,"%f", &x63); 
   fscanf(fp,"%f", &x1049); 
   fscanf(fp,"%f", &x1051); 
   fscanf(fp,"%f", &x1053); 
   fscanf(fp,"%f", &x1055); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x1050); 
   fscanf(fp,"%f", &x1052); 
   fscanf(fp,"%f", &x1054); 
   fscanf(fp,"%f", &x1056); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x1137); 
   fscanf(fp,"%f", &x1139); 
   fscanf(fp,"%f", &x1141); 
   fscanf(fp,"%f", &x1143); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x1138); 
   fscanf(fp,"%f", &x1140); 
   fscanf(fp,"%f", &x1142); 
   fscanf(fp,"%f", &x1144); 
   fscanf(fp,"%f", &x105); 
   fscanf(fp,"%f", &x1217); 
   fscanf(fp,"%f", &x1219); 
   fscanf(fp,"%f", &x1221); 
   fscanf(fp,"%f", &x1223); 
   fscanf(fp,"%f", &x106); 
   fscanf(fp,"%f", &x1218); 
   fscanf(fp,"%f", &x1220); 
   fscanf(fp,"%f", &x1222); 
   fscanf(fp,"%f", &x1224); 
   fscanf(fp,"%f", &x127); 
   fscanf(fp,"%f", &x1305); 
   fscanf(fp,"%f", &x1307); 
   fscanf(fp,"%f", &x1309); 
   fscanf(fp,"%f", &x1311); 
   fscanf(fp,"%f", &x128); 
   fscanf(fp,"%f", &x1306); 
   fscanf(fp,"%f", &x1308); 
   fscanf(fp,"%f", &x1310); 
   fscanf(fp,"%f", &x1312); 
   fscanf(fp,"%f", &x147); 
   fscanf(fp,"%f", &x1385); 
   fscanf(fp,"%f", &x1387); 
   fscanf(fp,"%f", &x1389); 
   fscanf(fp,"%f", &x1391); 
   fscanf(fp,"%f", &x148); 
   fscanf(fp,"%f", &x1386); 
   fscanf(fp,"%f", &x1388); 
   fscanf(fp,"%f", &x1390); 
   fscanf(fp,"%f", &x1392); 
   fscanf(fp,"%f", &x169); 
   fscanf(fp,"%f", &x1473); 
   fscanf(fp,"%f", &x1475); 
   fscanf(fp,"%f", &x1477); 
   fscanf(fp,"%f", &x1479); 
   fscanf(fp,"%f", &x170); 
   fscanf(fp,"%f", &x1474); 
   fscanf(fp,"%f", &x1476); 
   fscanf(fp,"%f", &x1478); 
   fscanf(fp,"%f", &x1480); 
   fscanf(fp,"%f", &x189); 
   fscanf(fp,"%f", &x1553); 
   fscanf(fp,"%f", &x1555); 
   fscanf(fp,"%f", &x1557); 
   fscanf(fp,"%f", &x1559); 
   fscanf(fp,"%f", &x190); 
   fscanf(fp,"%f", &x1554); 
   fscanf(fp,"%f", &x1556); 
   fscanf(fp,"%f", &x1558); 
   fscanf(fp,"%f", &x1560); 
   fscanf(fp,"%f", &x211); 
   fscanf(fp,"%f", &x1641); 
   fscanf(fp,"%f", &x1643); 
   fscanf(fp,"%f", &x1645); 
   fscanf(fp,"%f", &x1647); 
   fscanf(fp,"%f", &x212); 
   fscanf(fp,"%f", &x1642); 
   fscanf(fp,"%f", &x1644); 
   fscanf(fp,"%f", &x1646); 
   fscanf(fp,"%f", &x1648); 
   fscanf(fp,"%f", &x253); 
   fscanf(fp,"%f", &x1809); 
   fscanf(fp,"%f", &x1811); 
   fscanf(fp,"%f", &x1813); 
   fscanf(fp,"%f", &x1815); 
   fscanf(fp,"%f", &x254); 
   fscanf(fp,"%f", &x1810); 
   fscanf(fp,"%f", &x1812); 
   fscanf(fp,"%f", &x1814); 
   fscanf(fp,"%f", &x1816); 
   fscanf(fp,"%f", &x295); 
   fscanf(fp,"%f", &x1977); 
   fscanf(fp,"%f", &x1979); 
   fscanf(fp,"%f", &x1981); 
   fscanf(fp,"%f", &x1983); 
   fscanf(fp,"%f", &x296); 
   fscanf(fp,"%f", &x1978); 
   fscanf(fp,"%f", &x1980); 
   fscanf(fp,"%f", &x1982); 
   fscanf(fp,"%f", &x1984); 
   fscanf(fp,"%f", &x337); 
   fscanf(fp,"%f", &x2145); 
   fscanf(fp,"%f", &x2147); 
   fscanf(fp,"%f", &x2149); 
   fscanf(fp,"%f", &x2151); 
   fscanf(fp,"%f", &x338); 
   fscanf(fp,"%f", &x2146); 
   fscanf(fp,"%f", &x2148); 
   fscanf(fp,"%f", &x2150); 
   fscanf(fp,"%f", &x2152); 
   fscanf(fp,"%f", &x379); 
   fscanf(fp,"%f", &x2313); 
   fscanf(fp,"%f", &x2315); 
   fscanf(fp,"%f", &x2317); 
   fscanf(fp,"%f", &x2319); 
   fscanf(fp,"%f", &x380); 
   fscanf(fp,"%f", &x2314); 
   fscanf(fp,"%f", &x2316); 
   fscanf(fp,"%f", &x2318); 
   fscanf(fp,"%f", &x2320); 
   fscanf(fp,"%f", &x421); 
   fscanf(fp,"%f", &x2481); 
   fscanf(fp,"%f", &x2483); 
   fscanf(fp,"%f", &x2485); 
   fscanf(fp,"%f", &x2487); 
   fscanf(fp,"%f", &x422); 
   fscanf(fp,"%f", &x2482); 
   fscanf(fp,"%f", &x2484); 
   fscanf(fp,"%f", &x2486); 
   fscanf(fp,"%f", &x2488); 
   fscanf(fp,"%f", &x463); 
   fscanf(fp,"%f", &x2649); 
   fscanf(fp,"%f", &x2651); 
   fscanf(fp,"%f", &x2653); 
   fscanf(fp,"%f", &x2655); 
   fscanf(fp,"%f", &x464); 
   fscanf(fp,"%f", &x2650); 
   fscanf(fp,"%f", &x2652); 
   fscanf(fp,"%f", &x2654); 
   fscanf(fp,"%f", &x2656); 
   fscanf(fp,"%f", &x547); 
   fscanf(fp,"%f", &x2985); 
   fscanf(fp,"%f", &x2987); 
   fscanf(fp,"%f", &x2989); 
   fscanf(fp,"%f", &x2991); 
   fscanf(fp,"%f", &x548); 
   fscanf(fp,"%f", &x2986); 
   fscanf(fp,"%f", &x2988); 
   fscanf(fp,"%f", &x2990); 
   fscanf(fp,"%f", &x2992); 
   fscanf(fp,"%f", &x631); 
   fscanf(fp,"%f", &x3321); 
   fscanf(fp,"%f", &x3323); 
   fscanf(fp,"%f", &x3325); 
   fscanf(fp,"%f", &x3327); 
   fscanf(fp,"%f", &x632); 
   fscanf(fp,"%f", &x3322); 
   fscanf(fp,"%f", &x3324); 
   fscanf(fp,"%f", &x3326); 
   fscanf(fp,"%f", &x3328); 
   fscanf(fp,"%f", &x715); 
   fscanf(fp,"%f", &x3657); 
   fscanf(fp,"%f", &x3659); 
   fscanf(fp,"%f", &x3661); 
   fscanf(fp,"%f", &x3663); 
   fscanf(fp,"%f", &x716); 
   fscanf(fp,"%f", &x3658); 
   fscanf(fp,"%f", &x3660); 
   fscanf(fp,"%f", &x3662); 
   fscanf(fp,"%f", &x3664); 
   fscanf(fp,"%f", &x799); 
   fscanf(fp,"%f", &x3993); 
   fscanf(fp,"%f", &x3995); 
   fscanf(fp,"%f", &x3997); 
   fscanf(fp,"%f", &x3999); 
   fscanf(fp,"%f", &x800); 
   fscanf(fp,"%f", &x3994); 
   fscanf(fp,"%f", &x3996); 
   fscanf(fp,"%f", &x3998); 
   fscanf(fp,"%f", &x4000); 

   fclose(fp);
   res=-(-(sqr((-1) +  1) + sqr( 0) + sqr((-0.8105) + x21 + 0.00125*x881 +
    0.000328947368421053*x883 + 5.77100646352726e-5*x885 +
    7.59342955727271e-6*x887) + sqr((-0.2) + x22 + 0.00125*x882 +
    0.000328947368421053*x884 + 5.77100646352726e-5*x886 +
    7.59342955727271e-6*x888) + sqr((-0.6208) + x43 + 0.000125000000000007*
   x969 + 3.2894736842109e-6*x971 + 5.77100646352822e-8*x973 +
    7.5934295572744e-10*x975) + sqr((-0.2886) + x44 + 0.000125000000000007*
   x970 + 3.2894736842109e-6*x972 + 5.77100646352822e-8*x974 +
    7.5934295572744e-10*x976) + sqr((-0.5258) + x63 + 0.001375*x1049 +
    0.000398026315789474*x1051 + 7.68120960295478e-5*x1053 +
    1.1117540214803e-5*x1055) + sqr((-0.301) + x64 + 0.001375*x1050 +
    0.000398026315789474*x1052 + 7.68120960295478e-5*x1054 +
    1.1117540214803e-5*x1056) + sqr((-0.4345) + x85 + 0.000250000000000014*
   x1137 + 1.31578947368436e-5*x1139 + 4.61680517082257e-7*x1141 +
    1.2149487291639e-8*x1143) + sqr((-0.3215) + x86 + 0.000250000000000014*
   x1138 + 1.31578947368436e-5*x1140 + 4.61680517082257e-7*x1142 +
    1.2149487291639e-8*x1144) + sqr((-0.3903) + x105 + 0.0015*x1217 +
    0.000473684210526317*x1219 + 9.9722991689751e-5*x1221 +
    1.57457355299607e-5*x1223) + sqr((-0.3123) + x106 + 0.0015*x1218 +
    0.000473684210526317*x1220 + 9.9722991689751e-5*x1222 +
    1.57457355299607e-5*x1224) + sqr((-0.3342) + x127 +
    0.000374999999999986*x1305 + 2.96052631578926e-5*x1307 +
    1.55817174515219e-6*x1309 + 6.15067794138998e-8*x1311) + sqr((-0.2716)
    + x128 + 0.000374999999999986*x1306 + 2.96052631578926e-5*x1308 +
    1.55817174515219e-6*x1310 + 6.15067794138998e-8*x1312) + sqr((-0.3034)
    + x147 + 0.00162499999999999*x1385 + 0.00055592105263157*x1387 +
    0.000126789012003691*x1389 + 2.16875941585258e-5*x1391) + sqr((-0.2551)
    + x148 + 0.00162499999999999*x1386 + 0.00055592105263157*x1388 +
    0.000126789012003691*x1390 + 2.16875941585258e-5*x1392) + sqr((-0.2735)
    + x169 + 0.000500000000000028*x1473 + 5.26315789473744e-5*x1475 +
    3.69344413665806e-6*x1477 + 1.94391796666225e-7*x1479) + sqr((-0.2258)
    + x170 + 0.000500000000000028*x1474 + 5.26315789473744e-5*x1476 +
    3.69344413665806e-6*x1478 + 1.94391796666225e-7*x1480) + sqr((-0.2405)
    + x189 + 0.00175*x1553 + 0.000644736842105264*x1555 +
    0.000158356417359188*x1557 + 2.91709189872188e-5*x1559) + sqr((-0.1959)
    + x190 + 0.00175*x1554 + 0.000644736842105264*x1556 +
    0.000158356417359188*x1558 + 2.91709189872188e-5*x1560) + sqr((-0.2283)
    + x211 + 0.000625000000000014*x1641 + 8.2236842105267e-5*x1643 +
    7.21375807940955e-6*x1645 + 4.74589347329587e-7*x1647) + sqr((-0.1789)
    + x212 + 0.000625000000000014*x1642 + 8.2236842105267e-5*x1644 +
    7.21375807940955e-6*x1646 + 4.74589347329587e-7*x1648) + sqr((-0.2071)
    + x253 + 0.000749999999999973*x1809 + 0.00011842105263157*x1811 +
    1.24653739612175e-5*x1813 + 9.84108470622398e-7*x1815) + sqr((-0.1457)
    + x254 + 0.000749999999999973*x1810 + 0.00011842105263157*x1812 +
    1.24653739612175e-5*x1814 + 9.84108470622398e-7*x1816) + sqr((-0.1669)
    + x295 + 0.000874999999999959*x1977 + 0.000161184210526301*x1979 +
    1.97945521698957e-5*x1981 + 1.82318243670083e-6*x1983) + sqr((-0.1198)
    + x296 + 0.000874999999999959*x1978 + 0.000161184210526301*x1980 +
    1.97945521698957e-5*x1982 + 1.82318243670083e-6*x1984) + sqr((-0.153)
    + x337 + 0.00100000000000006*x2145 + 0.000210526315789497*x2147 +
    2.95475530932645e-5*x2149 + 3.11026874665959e-6*x2151) + sqr((-0.0909)
    + x338 + 0.00100000000000006*x2146 + 0.000210526315789497*x2148 +
    2.95475530932645e-5*x2150 + 3.11026874665959e-6*x2152) + sqr((-0.1339)
    + x379 + 0.00112500000000004*x2313 + 0.000266447368421073*x2315 +
    4.20706371191184e-5*x2317 + 4.98204913252736e-6*x2319) + sqr((-0.0719)
    + x380 + 0.00112500000000004*x2314 + 0.000266447368421073*x2316 +
    4.20706371191184e-5*x2318 + 4.98204913252736e-6*x2320) + sqr((-0.1265)
    + x421 + 0.00125000000000003*x2481 + 0.000328947368421068*x2483 +
    5.77100646352764e-5*x2485 + 7.59342955727338e-6*x2487) + sqr((-0.0561)
    + x422 + 0.00125000000000003*x2482 + 0.000328947368421068*x2484 +
    5.77100646352764e-5*x2486 + 7.59342955727338e-6*x2488) + sqr((-0.12) +
    x463 + 0.00137500000000002*x2649 + 0.000398026315789482*x2651 +
    7.68120960295501e-5*x2653 + 1.11175402148034e-5*x2655) + sqr((-0.046)
    + x464 + 0.00137500000000002*x2650 + 0.000398026315789482*x2652 +
    7.68120960295501e-5*x2654 + 1.11175402148034e-5*x2656) + sqr((-0.099)
    + x547 + 0.00162499999999999*x2985 + 0.00055592105263157*x2987 +
    0.000126789012003691*x2989 + 2.16875941585258e-5*x2991) + sqr((-0.028)
    + x548 + 0.00162499999999999*x2986 + 0.00055592105263157*x2988 +
    0.000126789012003691*x2990 + 2.16875941585258e-5*x2992) + sqr((-0.087)
    + x631 + 0.00187500000000007*x3321 + 0.000740131578947424*x3323 +
    0.000194771468144066*x3325 + 3.84417371336988e-5*x3327) + sqr((-0.019)
    + x632 + 0.00187500000000007*x3322 + 0.000740131578947424*x3324 +
    0.000194771468144066*x3326 + 3.84417371336988e-5*x3328) + sqr((-0.077)
    + x715 + 0.00212500000000004*x3657 + 0.000950657894736881*x3659 +
    0.000283529547553111*x3661 + 6.34210830053024e-5*x3663) + sqr((-0.014)
    + x716 + 0.00212500000000004*x3658 + 0.000950657894736881*x3660 +
    0.000283529547553111*x3662 + 6.34210830053024e-5*x3664) + sqr((-0.069)
    + x799 + 0.00237500000000002*x3993 + 0.00118750000000002*x3995 +
    0.000395833333333341*x3997 + 9.8958333333336e-5*x3999) + sqr((-0.01) +
    x800 + 0.00237500000000002*x3994 + 0.00118750000000002*x3996 +
    0.000395833333333341*x3998 + 9.8958333333336e-5*x4000))  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
