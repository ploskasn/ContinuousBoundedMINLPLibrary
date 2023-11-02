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
   char *problemname="harker";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x15,x18,x16,x19,x17,x20,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x20); 
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

   fclose(fp);
   res=-(19*x15 - 0.1*sqr(x15) - 0.5*sqr(x18) - x18 - 0.005*sqr(x16) + 27*x16 -
 0.4*sqr(x19) - 2*x19 - 0.15*sqr(x17) + 30*x17 - 0.3*sqr(x20) - 1.5*x20 - (
0.166666666666667*pow(x1,3) + x1 + 0.0666666666666667*pow(x2,3) + 2*x2
 + 0.1*pow(x3,3) + 3*x3 + 0.133333333333333*pow(x4,3) + x4 + 0.1*
pow(x5,3) + 2*x5 + 0.0333333333333333*pow(x6,3) + x6 +
 0.0333333333333333*pow(x7,3) + x7 + 0.166666666666667*pow(x8,3) + 3*x8
 + 0.0666666666666667*pow(x9,3) + 2*x9 + 0.333333333333333*pow(x10,3)
 + x10 + 0.0833333333333333*pow(x11,3) + 2*x11 + 0.0666666666666667*
pow(x12,3) + 2*x12 + 0.3*pow(x13,3) + x13 + 0.266666666666667*pow(
x14,3) + 3*x14))  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
