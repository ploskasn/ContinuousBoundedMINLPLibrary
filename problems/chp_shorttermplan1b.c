#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="chp_shorttermplan1b";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1634,x1635,x1636,x1637,x1638,x1639,x1640,x1641,x1642,x1643,x1644,x1645,x1646,x1647,x1648,x1649,x1650,x1651,x1652,x1653,x1654,x1655,x1656,x1657,x1658,x1659,x1660,x1661,x1662,x1663,x1664,x1665,x1666,x1667,x1668,x1669,x1670,x1671,x1672,x1673,x1674,x1675,x1676,x1677,x1678,x1679,x1680,x1681;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &x1674); 
   fscanf(fp,"%f", &x1675); 
   fscanf(fp,"%f", &x1676); 
   fscanf(fp,"%f", &x1677); 
   fscanf(fp,"%f", &x1678); 
   fscanf(fp,"%f", &x1679); 
   fscanf(fp,"%f", &x1680); 
   fscanf(fp,"%f", &x1681); 

   fclose(fp);
   res=-( + x1634 + x1635 + x1636 + x1637 + x1638 + x1639 + x1640 + x1641
 + x1642 + x1643 + x1644 + x1645 + x1646 + x1647 + x1648 + x1649 + x1650
 + x1651 + x1652 + x1653 + x1654 + x1655 + x1656 + x1657 + x1658 + x1659
 + x1660 + x1661 + x1662 + x1663 + x1664 + x1665 + x1666 + x1667 + x1668
 + x1669 + x1670 + x1671 + x1672 + x1673 + x1674 + x1675 + x1676 + x1677
 + x1678 + x1679 + x1680 + x1681 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
