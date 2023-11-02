#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="torsion100";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x5306,x5307,x5308,x5309;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x5306); 
   fscanf(fp,"%f", &x5307); 
   fscanf(fp,"%f", &x5308); 
   fscanf(fp,"%f", &x5309); 

   fclose(fp);
   res=-( + 0.00016178088397075*x5306 + 0.00016178088397075*x5307
 - 4.8534265191225E-5*x5308 - 4.8534265191225E-5*x5309 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
