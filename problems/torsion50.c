#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="torsion50";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2706,x2707,x2708,x2709;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x2706); 
   fscanf(fp,"%f", &x2707); 
   fscanf(fp,"%f", &x2708); 
   fscanf(fp,"%f", &x2709); 

   fclose(fp);
   res=-( + 0.000320389593745995*x2706 + 0.000320389593745995*x2707
 - 9.61168781237985E-5*x2708 - 9.61168781237985E-5*x2709 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
