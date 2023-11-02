#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ex6_2_13";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x4,x6,x3,x5,x7;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x7); 

   fclose(fp);
   res=-(-(log(x2/(3*x2 + 6*x4 + x6))*x2 + log(x4/(3*x2 + 6*x4 + x6))*x4 + log(x6/(
3*x2 + 6*x4 + x6))*x6 - 0.80323071133189*x2 + 1.79175946922805*x4 +
 0.752006*x6 + log(3*x2 + 6*x4 + 1.6*x6)*(3*x2 + 6*x4 + 1.6*x6) + 2*log(x2/
(2.00000019368913*x2 + 4.64593*x4 + 0.480353*x6))*x2 + log(x2/(
1.00772874182154*x2 + 0.724703350369523*x4 + 0.947722362492017*x6))*x2 + 6
*log(x4/(3.36359157977228*x2 + 6*x4 + 1.13841069150863*x6))*x4 + 1.6*log(
x6/(1.6359356134845*x2 + 3.39220996773471*x4 + 1.6*x6))*x6 + log(x3/(3*x3
 + 6*x5 + x7))*x3 + log(x5/(3*x3 + 6*x5 + x7))*x5 + log(x7/(3*x3 + 6*x5 +
 x7))*x7 - 0.80323071133189*x3 + 1.79175946922805*x5 + 0.752006*x7 + log(3*
x3 + 6*x5 + 1.6*x7)*(3*x3 + 6*x5 + 1.6*x7) + 2*log(x3/(2.00000019368913*x3
 + 4.64593*x5 + 0.480353*x7))*x3 + log(x3/(1.00772874182154*x3 +
 0.724703350369523*x5 + 0.947722362492017*x7))*x3 + 6*log(x5/(
3.36359157977228*x3 + 6*x5 + 1.13841069150863*x7))*x5 + 1.6*log(x7/(
1.6359356134845*x3 + 3.39220996773471*x5 + 1.6*x7))*x7 - 3*log(x2)*x2 - 6*
log(x4)*x4 - 1.6*log(x6)*x6 - 3*log(x3)*x3 - 6*log(x5)*x5 - 1.6*log(x7)*x7
)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
