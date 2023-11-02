#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="meanvar";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x3,x4,x5,x6,x7,x8,x9;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x9); 

   fclose(fp);
   res=-(-0.5*(42.18*x3*x3 + 20.18*x3*x4 + 10.88*x3*x5 + 5.3*x3*x6 + 12.32*x3*x7 +
 23.84*x3*x8 + 17.41*x3*x9 + 20.18*x4*x3 + 70.89*x4*x4 + 21.58*x4*x5 +
 15.41*x4*x6 + 23.24*x4*x7 + 23.8*x4*x8 + 12.62*x4*x9 + 10.88*x5*x3 + 21.58
*x5*x4 + 25.51*x5*x5 + 9.6*x5*x6 + 22.63*x5*x7 + 13.22*x5*x8 + 4.7*x5*x9
 + 5.3*x6*x3 + 15.41*x6*x4 + 9.6*x6*x5 + 22.33*x6*x6 + 10.32*x6*x7 + 10.46
*x6*x8 + x6*x9 + 12.32*x7*x3 + 23.24*x7*x4 + 22.63*x7*x5 + 10.32*x7*x6 +
 30.01*x7*x7 + 16.36*x7*x8 + 7.2*x7*x9 + 23.84*x8*x3 + 23.8*x8*x4 + 13.22*
x8*x5 + 10.46*x8*x6 + 16.36*x8*x7 + 42.23*x8*x8 + 9.9*x8*x9 + 17.41*x9*x3
 + 12.62*x9*x4 + 4.7*x9*x5 + x9*x6 + 7.2*x9*x7 + 9.9*x9*x8 + 16.42*x9*x9)
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
