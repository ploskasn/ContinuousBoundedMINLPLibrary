#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="batch_nc";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x7,x1,x8,x2,x9,x3,x10,x4,x11,x5,x12,x6;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x6); 

   fclose(fp);
   res=-(-(250*pow(x7,0.6)*x1 + 250*pow(x8,0.6)*x2 + 250*pow(x9,0.6)*x3 + 250*pow(x10,0.6)*x4 + 250
*pow(x11,0.6)*x5 + 250*pow(x12,0.6)*x6)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
