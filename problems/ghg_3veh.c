#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ghg_3veh";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x46,x64,x82;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x82); 

   fclose(fp);
   res=-(- x46 - x64 - x82  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
