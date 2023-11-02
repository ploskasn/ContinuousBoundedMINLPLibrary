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
   char *problemname="demo7";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x50,x51,x52,x53,x54,x55,x14,x62,x63,x64,x65,x66,x67;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x50); 
   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x62); 
   fscanf(fp,"%f", &x63); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x67); 

   fclose(fp);
   res=-(225*x50 - 0.0231481481481481*sqr(x50) - 0.277777777777778*sqr(x51) +
  700*x51 - 0.0892857142857143*sqr(x52) + 250*x52 - 0.0833333333333333*sqr(
 x53) + 700*x53 - 0.0184210526315789*sqr(x54) + 210*x54 - 0.1*sqr(x55) +
  220*x55) + x14 - 40*x62 - 300*x63 - 60*x64 + 140*x65 + 270*x66 + 85*x67
   ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
