#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="arki0003";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1561,x1562,x1563,x1564,x1565,x1566,x1567,x1568,x1569,x1570,x1571,x1572,x1573,x1574,x1575,x1576,x1577,x1578,x1579,x1580,x1581,x1582,x1583,x1584,x1585,x1586,x1587,x1588,x1589,x1590,x1591,x1772,x1773,x1774,x1775,x1776,x1777,x1778,x1779,x1780,x1781,x1782,x1783,x1784,x1785,x1786,x1787,x1788,x1789,x1790,x1791,x1792,x1793,x1794,x1795,x1796,x1797,x1798,x1799,x1800,x1801,x1862;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &x1584); 
   fscanf(fp,"%f", &x1585); 
   fscanf(fp,"%f", &x1586); 
   fscanf(fp,"%f", &x1587); 
   fscanf(fp,"%f", &x1588); 
   fscanf(fp,"%f", &x1589); 
   fscanf(fp,"%f", &x1590); 
   fscanf(fp,"%f", &x1591); 
   fscanf(fp,"%f", &x1772); 
   fscanf(fp,"%f", &x1773); 
   fscanf(fp,"%f", &x1774); 
   fscanf(fp,"%f", &x1775); 
   fscanf(fp,"%f", &x1776); 
   fscanf(fp,"%f", &x1777); 
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
   fscanf(fp,"%f", &x1862); 

   fclose(fp);
   res=x1561 + 0.925925925925926*x1562 + 0.857338820301783*x1563
 + 0.793832241020169*x1564 + 0.735029852796453*x1565
 + 0.680583197033753*x1566 + 0.630169626883105*x1567
 + 0.583490395262134*x1568 + 0.540268884501976*x1569
 + 0.500248967131459*x1570 + 0.463193488084684*x1571
 + 0.428882859337671*x1572 + 0.397113758645991*x1573
 + 0.367697924672214*x1574 + 0.340461041363161*x1575
 + 0.31524170496589*x1576 + 0.291890467561009*x1577
 + 0.270268951445379*x1578 + 0.250249029116091*x1579
 + 0.231712063996381*x1580 + 0.214548207404056*x1581
 + 0.198655747596349*x1582 + 0.183940507033656*x1583
 + 0.170315284290422*x1584 + 0.157699337305947*x1585
 + 0.146017904912913*x1586 + 0.135201763808253*x1587
 + 0.125186818340975*x1588 + 0.115913720686088*x1589
 + 0.107327519153785*x1590 + x1591 - x1772 - 0.925925925925926*x1773
 - 0.857338820301783*x1774 - 0.793832241020169*x1775
 - 0.735029852796453*x1776 - 0.680583197033753*x1777
 - 0.630169626883105*x1778 - 0.583490395262134*x1779
 - 0.540268884501976*x1780 - 0.500248967131459*x1781
 - 0.463193488084684*x1782 - 0.428882859337671*x1783
 - 0.397113758645991*x1784 - 0.367697924672214*x1785
 - 0.340461041363161*x1786 - 0.31524170496589*x1787
 - 0.291890467561009*x1788 - 0.270268951445379*x1789
 - 0.250249029116091*x1790 - 0.231712063996381*x1791
 - 0.214548207404056*x1792 - 0.198655747596349*x1793
 - 0.183940507033656*x1794 - 0.170315284290422*x1795
 - 0.157699337305947*x1796 - 0.146017904912913*x1797
 - 0.135201763808253*x1798 - 0.125186818340975*x1799
 - 0.115913720686088*x1800 - 0.107327519153785*x1801 - x1862 
 ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
