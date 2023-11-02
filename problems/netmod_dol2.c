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
   char *problemname="netmod_dol2";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x8,x9,x10,x11,x12,x13,x2,x3,x4,x5,x6,x7;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x7); 

   fclose(fp);
   res=-(-sqr(0.00196850393700787*x8) - sqr(0.00196850393700787*x9) - sqr(
0.00196850393700787*x10) - sqr(0.00196850393700787*x11) - sqr(
0.00196850393700787*x12) - sqr(0.00196850393700787*x13)) 
 - 0.00393700787401575*x2 - 0.00393700787401575*x3
 - 0.00393700787401575*x4 - 0.00393700787401575*x5
 - 0.00393700787401575*x6 - 0.00393700787401575*x7 ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
