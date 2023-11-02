#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ex6_1_4";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x6,x7,x5;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x5); 

   fclose(fp);
   res=-(-((0.28809 + log(x2))*x2 + (-0.29158 + log(x3))*x3 + (0.59336 + log(x4))*
x4 + x2*(1.44805026165593*x6 + 0.989428667054834*x7) + x3*(
1.12676386427658*x5 + 1.00363012835441*x7) + x4*(0.0347225450624344*x5 +
 0.82681418300153*x6))  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
