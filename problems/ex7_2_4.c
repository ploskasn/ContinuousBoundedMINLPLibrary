#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ex7_2_4";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x7,x2,x8;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x8); 

   fclose(fp);
   res=-(-(0.4*pow(x1,0.67)/pow(x7,0.67 )+ 0.4*pow(x2,0.67)/pow(x8,0.67 )- x1 - x2)  - 10
);

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
