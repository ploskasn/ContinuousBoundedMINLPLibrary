#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="gastrans";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x73,x76,x80,x82,x85;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x73); 
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &x80); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x85); 

   fclose(fp);
   res=-(- 2.28*x73 - 2.28*x76 - 1.68*x80 - 1.68*x82 - 2.28*x85  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
