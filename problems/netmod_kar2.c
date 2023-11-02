#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  

float sqr(float b)
{
   float z;
   z = b*b;
   return(z);
}

int main(int argc, char** argv) { 
   char *problemname="netmod_kar2";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x6,x7,x8,x9,x2,x3,x4,x5;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x5); 

   fclose(fp);
   res=-(-sqr(0.00641025641025641*x6) - sqr(0.00641025641025641*x7) - sqr(
0.00641025641025641*x8) - sqr(0.00641025641025641*x9)) 
 - 0.0128205128205128*x2 - 0.0128205128205128*x3 - 0.0128205128205128*x4
 - 0.0128205128205128*x5 ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
