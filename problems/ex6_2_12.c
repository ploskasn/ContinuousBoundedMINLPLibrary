#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ex6_2_12";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x4,x3,x5;
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
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x5); 

   fclose(fp);
   res=-(-(log(x2/(8*x2 + x4))*x2 + log(x4/(8*x2 + x4))*x4 + 0.0696225416798359*x2
 + 0.752006*x4 + log(8*x2 + 1.6*x4)*(8*x2 + 1.6*x4) + 5*log(x2/(
5.00000397494442*x2 + 0.480353357956269*x4))*x2 + 3*log(x2/(
8.96062592375197*x2 + 1.13841069150863*x4))*x2 + 1.6*log(x4/(
1.69889877049372*x2 + 1.6*x4))*x4 + log(x3/(8*x3 + x5))*x3 + log(x5/(8*x3
 + x5))*x5 + 0.0696225416798359*x3 + 0.752006*x5 + log(8*x3 + 1.6*x5)*(8*
x3 + 1.6*x5) + 5*log(x3/(5.00000397494442*x3 + 0.480353357956269*x5))*x3
 + 3*log(x3/(8.96062592375197*x3 + 1.13841069150863*x5))*x3 + 1.6*log(x5/(
1.69889877049372*x3 + 1.6*x5))*x5 - 8*log(x2)*x2 - 1.6*log(x4)*x4 - 8*log(
x3)*x3 - 1.6*log(x5)*x5)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
