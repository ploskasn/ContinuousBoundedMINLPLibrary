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
   char *problemname="st_m1";
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
   res=-(-(540.792129732*x1 - 3*sqr(x1) - sqr(x2) + 92.0068003629*x2 - 7*sqr(x3)
  - 2390.75252039*x3 - 7*sqr(x4) - 8085.40130479*x4 - 9*sqr(x5) -
  4627.10173328*x5 - 4*sqr(x6) - 12452.7098353*x6 - 6*sqr(x7) +
  9419.17874069*x7 - 8*sqr(x8) + 7689.14130566*x8 - sqr(x9) - 5154.76865125
 *x9 - sqr(x10) - 9814.99860313*x10 - 6*sqr(x11) - 3701.15304202*x11 - 7*
 sqr(x12) + 12818.4489533*x12 - sqr(x13) - 7825.52846743*x13 - 4*sqr(x14)
  - 52.6053189782*x14 - 2*sqr(x15) + 6727.68114413*x15 - 5*sqr(x16) +
  6093.30280299*x16 - 7*sqr(x17) - 1139.49658357*x17 - 6*sqr(x18) +
  7666.77668727*x18 - 9*sqr(x19) + 7371.88647018*x19 - 9*sqr(x20) -
  16412.9116807*x20)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
