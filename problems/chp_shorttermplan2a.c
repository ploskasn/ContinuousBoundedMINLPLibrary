#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="chp_shorttermplan2a";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1538,x1539,x1540,x1541,x1542,x1543,x1544,x1545,x1546,x1547,x1548,x1549,x1550,x1551,x1552,x1553,x1554,x1555,x1556,x1557,x1558,x1559,x1560,x1561,x1562,x1563,x1564,x1565,x1566,x1567,x1568,x1569,x1570,x1571,x1572,x1573,x1574,x1575,x1576,x1577,x1578,x1579,x1580,x1581,x1582,x1583,x1584,x1585;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &x1579); 
   fscanf(fp,"%f", &x1580); 
   fscanf(fp,"%f", &x1581); 
   fscanf(fp,"%f", &x1582); 
   fscanf(fp,"%f", &x1583); 
   fscanf(fp,"%f", &x1584); 
   fscanf(fp,"%f", &x1585); 

   fclose(fp);
   res=-( + x1538 + x1539 + x1540 + x1541 + x1542 + x1543 + x1544 + x1545
 + x1546 + x1547 + x1548 + x1549 + x1550 + x1551 + x1552 + x1553 + x1554
 + x1555 + x1556 + x1557 + x1558 + x1559 + x1560 + x1561 + x1562 + x1563
 + x1564 + x1565 + x1566 + x1567 + x1568 + x1569 + x1570 + x1571 + x1572
 + x1573 + x1574 + x1575 + x1576 + x1577 + x1578 + x1579 + x1580 + x1581
 + x1582 + x1583 + x1584 + x1585 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
