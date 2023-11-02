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
   char *problemname="arki0002";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1405,x1406,x1419,x1420,x1433,x1434,x1447,x1448,x1461,x1462,x1475,x1476,x1489,x1490,x1503,x1504,x1517,x1518,x1531,x1532,x1545,x1546,x1559,x1560,x1573,x1574,x1587,x1588,x1601,x1602,x1615,x1616,x1629,x1630,x1643,x1644,x1657,x1658,x1671,x1672,x1685,x1686,x1699,x1700,x1713,x1714,x1727,x1728,x1741,x1742,x1755,x1756,x1769,x1770,x1783,x1784,x1797,x1798,x1811,x1812,x1825,x1826,x1839,x1840,x1853,x1854,x1867,x1868,x1881,x1882,x1895,x1896,x1909,x1910,x1923,x1924,x1937,x1938,x1951,x1952,x1965,x1966,x1979,x1980,x1993,x1994,x2007,x2008,x2021,x2022,x2035,x2036,x2049,x2050,x2063,x2064,x2077,x2078,x2091,x2092,x2105,x2106,x2119,x2120,x2133,x2134,x2147,x2148,x2161,x2162,x2175,x2176,x2189,x2190,x2203,x2204,x2217,x2218,x2231,x2232,x2245,x2246,x2259,x2260,x2273,x2274,x2287,x2288,x2301,x2302,x2315,x2316,x2329,x2330,x2343,x2344,x2357,x2358,x2371,x2372,x2385,x2386,x2399,x2400,x2413,x2414,x2427,x2428,x2441,x2442,x2455,x2456;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1405); 
   fscanf(fp,"%f", &x1406); 
   fscanf(fp,"%f", &x1419); 
   fscanf(fp,"%f", &x1420); 
   fscanf(fp,"%f", &x1433); 
   fscanf(fp,"%f", &x1434); 
   fscanf(fp,"%f", &x1447); 
   fscanf(fp,"%f", &x1448); 
   fscanf(fp,"%f", &x1461); 
   fscanf(fp,"%f", &x1462); 
   fscanf(fp,"%f", &x1475); 
   fscanf(fp,"%f", &x1476); 
   fscanf(fp,"%f", &x1489); 
   fscanf(fp,"%f", &x1490); 
   fscanf(fp,"%f", &x1503); 
   fscanf(fp,"%f", &x1504); 
   fscanf(fp,"%f", &x1517); 
   fscanf(fp,"%f", &x1518); 
   fscanf(fp,"%f", &x1531); 
   fscanf(fp,"%f", &x1532); 
   fscanf(fp,"%f", &x1545); 
   fscanf(fp,"%f", &x1546); 
   fscanf(fp,"%f", &x1559); 
   fscanf(fp,"%f", &x1560); 
   fscanf(fp,"%f", &x1573); 
   fscanf(fp,"%f", &x1574); 
   fscanf(fp,"%f", &x1587); 
   fscanf(fp,"%f", &x1588); 
   fscanf(fp,"%f", &x1601); 
   fscanf(fp,"%f", &x1602); 
   fscanf(fp,"%f", &x1615); 
   fscanf(fp,"%f", &x1616); 
   fscanf(fp,"%f", &x1629); 
   fscanf(fp,"%f", &x1630); 
   fscanf(fp,"%f", &x1643); 
   fscanf(fp,"%f", &x1644); 
   fscanf(fp,"%f", &x1657); 
   fscanf(fp,"%f", &x1658); 
   fscanf(fp,"%f", &x1671); 
   fscanf(fp,"%f", &x1672); 
   fscanf(fp,"%f", &x1685); 
   fscanf(fp,"%f", &x1686); 
   fscanf(fp,"%f", &x1699); 
   fscanf(fp,"%f", &x1700); 
   fscanf(fp,"%f", &x1713); 
   fscanf(fp,"%f", &x1714); 
   fscanf(fp,"%f", &x1727); 
   fscanf(fp,"%f", &x1728); 
   fscanf(fp,"%f", &x1741); 
   fscanf(fp,"%f", &x1742); 
   fscanf(fp,"%f", &x1755); 
   fscanf(fp,"%f", &x1756); 
   fscanf(fp,"%f", &x1769); 
   fscanf(fp,"%f", &x1770); 
   fscanf(fp,"%f", &x1783); 
   fscanf(fp,"%f", &x1784); 
   fscanf(fp,"%f", &x1797); 
   fscanf(fp,"%f", &x1798); 
   fscanf(fp,"%f", &x1811); 
   fscanf(fp,"%f", &x1812); 
   fscanf(fp,"%f", &x1825); 
   fscanf(fp,"%f", &x1826); 
   fscanf(fp,"%f", &x1839); 
   fscanf(fp,"%f", &x1840); 
   fscanf(fp,"%f", &x1853); 
   fscanf(fp,"%f", &x1854); 
   fscanf(fp,"%f", &x1867); 
   fscanf(fp,"%f", &x1868); 
   fscanf(fp,"%f", &x1881); 
   fscanf(fp,"%f", &x1882); 
   fscanf(fp,"%f", &x1895); 
   fscanf(fp,"%f", &x1896); 
   fscanf(fp,"%f", &x1909); 
   fscanf(fp,"%f", &x1910); 
   fscanf(fp,"%f", &x1923); 
   fscanf(fp,"%f", &x1924); 
   fscanf(fp,"%f", &x1937); 
   fscanf(fp,"%f", &x1938); 
   fscanf(fp,"%f", &x1951); 
   fscanf(fp,"%f", &x1952); 
   fscanf(fp,"%f", &x1965); 
   fscanf(fp,"%f", &x1966); 
   fscanf(fp,"%f", &x1979); 
   fscanf(fp,"%f", &x1980); 
   fscanf(fp,"%f", &x1993); 
   fscanf(fp,"%f", &x1994); 
   fscanf(fp,"%f", &x2007); 
   fscanf(fp,"%f", &x2008); 
   fscanf(fp,"%f", &x2021); 
   fscanf(fp,"%f", &x2022); 
   fscanf(fp,"%f", &x2035); 
   fscanf(fp,"%f", &x2036); 
   fscanf(fp,"%f", &x2049); 
   fscanf(fp,"%f", &x2050); 
   fscanf(fp,"%f", &x2063); 
   fscanf(fp,"%f", &x2064); 
   fscanf(fp,"%f", &x2077); 
   fscanf(fp,"%f", &x2078); 
   fscanf(fp,"%f", &x2091); 
   fscanf(fp,"%f", &x2092); 
   fscanf(fp,"%f", &x2105); 
   fscanf(fp,"%f", &x2106); 
   fscanf(fp,"%f", &x2119); 
   fscanf(fp,"%f", &x2120); 
   fscanf(fp,"%f", &x2133); 
   fscanf(fp,"%f", &x2134); 
   fscanf(fp,"%f", &x2147); 
   fscanf(fp,"%f", &x2148); 
   fscanf(fp,"%f", &x2161); 
   fscanf(fp,"%f", &x2162); 
   fscanf(fp,"%f", &x2175); 
   fscanf(fp,"%f", &x2176); 
   fscanf(fp,"%f", &x2189); 
   fscanf(fp,"%f", &x2190); 
   fscanf(fp,"%f", &x2203); 
   fscanf(fp,"%f", &x2204); 
   fscanf(fp,"%f", &x2217); 
   fscanf(fp,"%f", &x2218); 
   fscanf(fp,"%f", &x2231); 
   fscanf(fp,"%f", &x2232); 
   fscanf(fp,"%f", &x2245); 
   fscanf(fp,"%f", &x2246); 
   fscanf(fp,"%f", &x2259); 
   fscanf(fp,"%f", &x2260); 
   fscanf(fp,"%f", &x2273); 
   fscanf(fp,"%f", &x2274); 
   fscanf(fp,"%f", &x2287); 
   fscanf(fp,"%f", &x2288); 
   fscanf(fp,"%f", &x2301); 
   fscanf(fp,"%f", &x2302); 
   fscanf(fp,"%f", &x2315); 
   fscanf(fp,"%f", &x2316); 
   fscanf(fp,"%f", &x2329); 
   fscanf(fp,"%f", &x2330); 
   fscanf(fp,"%f", &x2343); 
   fscanf(fp,"%f", &x2344); 
   fscanf(fp,"%f", &x2357); 
   fscanf(fp,"%f", &x2358); 
   fscanf(fp,"%f", &x2371); 
   fscanf(fp,"%f", &x2372); 
   fscanf(fp,"%f", &x2385); 
   fscanf(fp,"%f", &x2386); 
   fscanf(fp,"%f", &x2399); 
   fscanf(fp,"%f", &x2400); 
   fscanf(fp,"%f", &x2413); 
   fscanf(fp,"%f", &x2414); 
   fscanf(fp,"%f", &x2427); 
   fscanf(fp,"%f", &x2428); 
   fscanf(fp,"%f", &x2441); 
   fscanf(fp,"%f", &x2442); 
   fscanf(fp,"%f", &x2455); 
   fscanf(fp,"%f", &x2456); 

   fclose(fp);
   res=-(-(sqr((-0.33) + x1405) + sqr((-0.33) + x1406) + sqr((-0.66) + x1419) +
    sqr(x1420) + sqr((-0.5) + x1433) + sqr((-0.33) + x1434) + sqr((-0.33)
    + x1447) + sqr(x1448) + sqr((-0.33) + x1461) + sqr((-0.33) + x1462) +
    sqr((-0.66) + x1475) + sqr(x1476) + sqr((-0.5) + x1489) + sqr(x1490) +
    sqr((-0.17) + x1503) + sqr(x1504) + sqr(x1517) + sqr(x1518) + sqr((-
   0.17) + x1531) + sqr(x1532) + sqr((-0.33) + x1545) + sqr((-0.17) +
    x1546) + sqr((-0.66) + x1559) + sqr((-0.17) + x1560) + sqr((-0.5) +
    x1573) + sqr((-0.17) + x1574) + sqr((-0.33) + x1587) + sqr((-0.17) +
    x1588) + sqr((-0.5) + x1601) + sqr(x1602) + sqr(x1615) + sqr((-0.17) +
    x1616) + sqr((-0.17) + x1629) + sqr((-0.17) + x1630) + sqr((-0.33) +
    x1643) + sqr((-0.5) + x1644) + sqr((-0.17) + x1657) + sqr((-0.17) +
    x1658) + sqr((-0.17) + x1671) + sqr((-0.5) + x1672) + sqr((-0.17) +
    x1685) + sqr((-0.33) + x1686) + sqr((-0.33) + x1699) + sqr((-0.17) +
    x1700) + sqr((-0.5) + x1713) + sqr((-0.5) + x1714) + sqr((-0.66) +
    x1727) + sqr(x1728) + sqr(x1741) + sqr((-0.33) + x1742) + sqr((-0.33)
    + x1755) + sqr((-0.17) + x1756) + sqr((-0.33) + x1769) + sqr((-0.17)
    + x1770) + sqr((-0.5) + x1783) + sqr((-0.33) + x1784) + sqr((-0.17) +
    x1797) + sqr((-0.17) + x1798) + sqr((-0.17) + x1811) + sqr((-0.33) +
    x1812) + sqr((-0.17) + x1825) + sqr((-0.5) + x1826) + sqr((-0.33) +
    x1839) + sqr((-0.17) + x1840) + sqr(x1853) + sqr(x1854) + sqr((-0.17)
    + x1867) + sqr((-0.17) + x1868) + sqr((-0.17) + x1881) + sqr((-0.33)
    + x1882) + sqr((-0.17) + x1895) + sqr((-0.5) + x1896) + sqr((-0.5) +
    x1909) + sqr((-0.17) + x1910) + sqr((-0.33) + x1923) + sqr(x1924) +
    sqr((-0.17) + x1937) + sqr((-0.17) + x1938) + sqr((-0.33) + x1951) +
    sqr((-1) + x1952) + sqr((-0.33) + x1965) + sqr(x1966) + sqr((-0.5) +
    x1979) + sqr((-0.17) + x1980) + sqr(x1993) + sqr(x1994) + sqr((-0.17)
    + x2007) + sqr(x2008) + sqr((-0.17) + x2021) + sqr(x2022) + sqr((-0.5)
    + x2035) + sqr(x2036) + sqr((-0.33) + x2049) + sqr(x2050) + sqr(x2063)
    + sqr(x2064) + sqr((-0.5) + x2077) + sqr(x2078) + sqr((-0.17) + x2091)
    + sqr((-0.17) + x2092) + sqr((-0.33) + x2105) + sqr((-0.33) + x2106)
    + sqr((-0.17) + x2119) + sqr((-0.17) + x2120) + sqr(x2133) + sqr((-
   0.17) + x2134) + sqr((-0.33) + x2147) + sqr((-0.5) + x2148) + sqr((-
   0.33) + x2161) + sqr((-0.17) + x2162) + sqr(x2175) + sqr((-0.17) +
    x2176) + sqr((-0.5) + x2189) + sqr((-0.17) + x2190) + sqr(x2203) + sqr(
   (-0.33) + x2204) + sqr((-0.33) + x2217) + sqr((-0.33) + x2218) + sqr((-
   0.33) + x2231) + sqr(x2232) + sqr((-0.17) + x2245) + sqr((-0.33) +
    x2246) + sqr((-0.17) + x2259) + sqr((-0.33) + x2260) + sqr((-0.33) +
    x2273) + sqr(x2274) + sqr(x2287) + sqr(x2288) + sqr(x2301) + sqr(x2302)
    + sqr((-0.17) + x2315) + sqr((-0.17) + x2316) + sqr((-0.33) + x2329)
    + sqr((-0.17) + x2330) + sqr((-0.17) + x2343) + sqr((-0.17) + x2344)
    + sqr((-0.17) + x2357) + sqr((-0.17) + x2358) + sqr((-0.17) + x2371)
    + sqr((-0.5) + x2372) + sqr((-0.17) + x2385) + sqr((-0.33) + x2386) +
    sqr((-0.17) + x2399) + sqr((-0.5) + x2400) + sqr((-0.17) + x2413) +
    sqr((-0.33) + x2414) + sqr(x2427) + sqr(x2428) + sqr(x2441) + sqr((-
   0.17) + x2442) + sqr((-0.17) + x2455) + sqr(x2456))  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
