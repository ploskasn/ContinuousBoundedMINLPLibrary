#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="batchs101006m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x111,x121,x2,x112,x122,x3,x113,x123,x4,x114,x124,x5,x115,x125,x6,x116,x126,x7,x117,x127,x8,x118,x128,x9,x119,x129,x10,x120,x130,x132,x133,x134,x135,x136,x137,x138,x139,x140;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x111); 
   fscanf(fp,"%f", &x121); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x112); 
   fscanf(fp,"%f", &x122); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x113); 
   fscanf(fp,"%f", &x123); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x114); 
   fscanf(fp,"%f", &x124); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x115); 
   fscanf(fp,"%f", &x125); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x116); 
   fscanf(fp,"%f", &x126); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x117); 
   fscanf(fp,"%f", &x127); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x118); 
   fscanf(fp,"%f", &x128); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x119); 
   fscanf(fp,"%f", &x129); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x120); 
   fscanf(fp,"%f", &x130); 
   fscanf(fp,"%f", &x132); 
   fscanf(fp,"%f", &x133); 
   fscanf(fp,"%f", &x134); 
   fscanf(fp,"%f", &x135); 
   fscanf(fp,"%f", &x136); 
   fscanf(fp,"%f", &x137); 
   fscanf(fp,"%f", &x138); 
   fscanf(fp,"%f", &x139); 
   fscanf(fp,"%f", &x140); 

   fclose(fp);
   res=-(-(250*(exp(0.6*x1 + x111 + x121) + exp(0.6*x2 + x112 + x122) + exp(0.6*
  x3 + x113 + x123) + exp(0.6*x4 + x114 + x124) + exp(0.6*x5 + x115 + x125
  ) + exp(0.6*x6 + x116 + x126) + exp(0.6*x7 + x117 + x127) + exp(0.6*x8
   + x118 + x128) + exp(0.6*x9 + x119 + x129) + exp(0.6*x10 + x120 + x130)
  ) + 150*(exp(0.5*x132) + exp(0.5*x133) + exp(0.5*x134) + exp(0.5*x135)
   + exp(0.5*x136) + exp(0.5*x137) + exp(0.5*x138) + exp(0.5*x139) + exp(
  0.5*x140)))  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
