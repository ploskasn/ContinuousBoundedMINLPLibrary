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
   char *problemname="procsyn";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x20); 

   fclose(fp);
   res=-(-(0.05*(sqr(x1) +pow( x2,3)) + 0.175*(sqr(x1) +pow( x2,3)) + 0.025*(sqr(x1) +pow( x2,
3)) + 0.1*(sqr(x1) +pow( x2,3)) + 0.35*(sqr(x1) +pow( x2,3)) + 0.05*(sqr(x1) +pow( x2,
3)) + 0.05*(sqr(x1) +pow( x2,3)) + 0.175*(sqr(x1) +pow( x2,3)) + 0.025*(sqr(x1) +pow(
 x2,3))) - 0.15*x3 - 0.525*x4 - 0.075*x5 - 0.3*x6 - 1.05*x7 - 0.15*x8
 - 0.15*x9 - 0.525*x10 - 0.075*x11 - 0.1*x12 - 0.35*x13 - 0.05*x14
 - 0.2*x15 - 0.7*x16 - 0.1*x17 - 0.1*x18 - 0.35*x19 - 0.05*x20 
 + 3.2);

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
