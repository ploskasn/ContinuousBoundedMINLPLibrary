#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ex7_2_1";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x6,x3,x5,x2;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x2); 

   fclose(fp);
   res=-(-(0.035*x1*x6 - 0.063*x3*x5 + 1.715*x1 + 4.0565*x3) - 10*x2 
 - 3000);

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
