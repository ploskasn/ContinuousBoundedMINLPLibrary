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
   char *problemname="st_rv2";
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
   res=-(-(-0.00015*sqr(x1) - 0.0051*x1 - 0.00245*sqr(x2) - 0.2205*x2 - 0.00095*
 sqr(x3) - 0.0171*x3 - 0.0038*sqr(x4) - 0.6384*x4 - 0.0029*sqr(x5) - 0.435
 *x5 - 0.0024*sqr(x6) - 0.4704*x6 - 0.0034*sqr(x7) - 0.4556*x7 - 0.0018*
 sqr(x8) - 0.2916*x8 - 0.00305*sqr(x9) - 0.0549*x9 - 0.00025*sqr(x10) -
  0.0245*x10 - 0.00195*sqr(x11) - 0.3588*x11 - 0.0008*sqr(x12) - 0.1456*x12
  - 0.0035*sqr(x13) - 0.672*x13 - 0.0027*sqr(x14) - 0.5184*x14 - 0.002*
 sqr(x15) - 0.016*x15 - 0.0026*sqr(x16) - 0.1404*x16 - 0.0048*sqr(x17) -
  0.2592*x17 - 0.00275*sqr(x18) - 0.418*x18 - 0.00235*sqr(x19) - 0.1081*x19
  - 0.00275*sqr(x20) - 0.264*x20)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
