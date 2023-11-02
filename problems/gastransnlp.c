#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="gastransnlp";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x31,x34,x38,x40,x43;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x43); 

   fclose(fp);
   res=-(- 2.28*x31 - 2.28*x34 - 1.68*x38 - 1.68*x40 - 2.28*x43  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
