#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ex6_2_9";
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
   res=-(-(log(4.8274*x2 + 0.92*x4)*(31.4830434782609*x2 + 6*x4) - 1.36551138119385
*x2 + 2.8555953099828*x4 + 11.5030434782609*log(x2/(4.8274*x2 + 0.92*x4))*
x2 + 20.98*log(x2/(4.196*x2 + 1.4*x4))*x2 + 7*log(x4/(4.196*x2 + 1.4*x4))*
x4 + log(4.196*x2 + 1.4*x4)*(4.196*x2 + 1.4*x4) + 1.62*log(x2/(
7.52678200680961*x2 + 0.443737968424621*x4))*x2 + 0.848*log(x2/(
7.52678200680961*x2 + 0.443737968424621*x4))*x2 + 1.728*log(x2/(
1.82245052351472*x2 + 1.4300083598626*x4))*x2 + 1.4*log(x4/(
0.504772348000588*x2 + 1.4*x4))*x4 + log(4.8274*x3 + 0.92*x5)*(
31.4830434782609*x3 + 6*x5) - 1.36551138119385*x3 + 2.8555953099828*x5 +
 11.5030434782609*log(x3/(4.8274*x3 + 0.92*x5))*x3 + 20.98*log(x3/(4.196*x3
 + 1.4*x5))*x3 + 7*log(x5/(4.196*x3 + 1.4*x5))*x5 + log(4.196*x3 + 1.4*x5)
*(4.196*x3 + 1.4*x5) + 1.62*log(x3/(7.52678200680961*x3 +
 0.443737968424621*x5))*x3 + 0.848*log(x3/(7.52678200680961*x3 +
 0.443737968424621*x5))*x3 + 1.728*log(x3/(1.82245052351472*x3 +
 1.4300083598626*x5))*x3 + 1.4*log(x5/(0.504772348000588*x3 + 1.4*x5))*x5
 - 35.6790434782609*log(x2)*x2 - 7.4*log(x4)*x4 - 35.6790434782609*log(x3)
*x3 - 7.4*log(x5)*x5)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
