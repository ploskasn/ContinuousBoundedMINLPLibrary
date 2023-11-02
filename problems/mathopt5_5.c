#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="mathopt5_5";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 

   fclose(fp);
   res=-(-(sin(1 + 2*x1) + 2*sin(2 + 3*x1) + 3*sin(3 + 4*x1) + 4*sin(4 + 5*x1) + 5*
sin(5 + 6*x1))  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
