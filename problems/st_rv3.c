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
   char *problemname="st_rv3";
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
   res=-(-(-0.00055*sqr(x1) - 0.0583*x1 - 0.0019*sqr(x2) - 0.2318*x2 - 0.0002*sqr(
 x3) - 0.0108*x3 - 0.00095*sqr(x4) - 0.1634*x4 - 0.0046*sqr(x5) - 0.138*x5
  - 0.0035*sqr(x6) - 0.357*x6 - 0.00315*sqr(x7) - 0.1953*x7 - 0.00475*sqr(
 x8) - 0.361*x8 - 0.0048*sqr(x9) - 0.1824*x9 - 0.003*sqr(x10) - 0.162*x10
  - 0.00265*sqr(x11) - 0.4346*x11 - 0.0017*sqr(x12) - 0.1054*x12 - 0.0012*
 sqr(x13) - 0.2376*x13 - 0.00295*sqr(x14) - 0.0059*x14 - 0.00315*sqr(x15)
  - 0.189*x15 - 0.0021*sqr(x16) - 0.0252*x16 - 0.00225*sqr(x17) - 0.099*
 x17 - 0.0034*sqr(x18) - 0.3604*x18 - 0.001*sqr(x19) - 0.022*x19 - 0.00305
 *sqr(x20) - 0.3294*x20)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
