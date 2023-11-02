#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="st_e16";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x10,x9,x12,x11;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x11); 

   fclose(fp);
   res=-(-(1200*pow((800/(258.333333333333 + 2.5*(0.666666666666667*pow(((320 - x10)*(300
  - x9)),0.5 )- 0.166666666666667*x9 - 0.166666666666667*x10))),0.6 )+
  1200*pow((5000/(106.666666666667 + 0.666666666666667*pow(((340 - x12)*(300 - x11)
 ),0.5 )- 0.166666666666667*x11 - 0.166666666666667*x12)),0.6)) 
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
