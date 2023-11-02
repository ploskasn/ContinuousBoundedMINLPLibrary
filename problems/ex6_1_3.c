#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ex6_1_3";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x4,x6,x3,x5,x7,x10,x12,x8,x11,x13,x9;
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
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x9); 

   fclose(fp);
   res=-(-((log(x2) - log(x2 + x4 + x6))*x2 + (log(x4) - log(x2 + x4 + x6))*x4 + (
log(x6) - log(x2 + x4 + x6))*x6 + (log(x3) - log(x3 + x5 + x7))*x3 + (log(
x5) - log(x3 + x5 + x7))*x5 + (log(x7) - log(x3 + x5 + x7))*x7 + x2*(
1.44805026165593*x10 + 0.989428667054834*x12) + x4*(1.12676386427658*x8 +
 1.00363012835441*x12) + x6*(0.0347225450624344*x8 + 0.82681418300153*x10)
 + x3*(1.44805026165593*x11 + 0.989428667054834*x13) + x5*(
1.12676386427658*x9 + 1.00363012835441*x13) + x7*(0.0347225450624344*x9 +
 0.82681418300153*x11))  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
