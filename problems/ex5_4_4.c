#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ex5_4_4";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x2,x3,x4,x5,x6;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x6); 

   fclose(fp);
   res=-(-(1300*pow((2000/(0.333333333333333*x1*x2 + 0.166666666666667*x1 +
  0.166666666666667*x2)),0.6 )+ 1300*pow((1000/(0.666666666666667*x3*x4 +
  0.166666666666667*x3 + 0.166666666666667*x4)),0.6 )+ 1300*pow((1500/(
 0.666666666666667*x5*x6 + 0.166666666666667*x5 + 0.166666666666667*x6)),
 0.6))  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
