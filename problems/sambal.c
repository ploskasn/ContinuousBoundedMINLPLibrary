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
   char *problemname="sambal";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x2,x3,x4,x7,x8,x9,x10,x11,x12,x13,x16,x17;
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
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x17); 

   fclose(fp);
   res=-(-(0.0666666666666667*sqr(15 - x1) + 0.333333333333333*sqr(3 - x2) +
  0.00769230769230769*sqr(130 - x3) + 0.0125*sqr(80 - x4) +
  0.0666666666666667*sqr(15 - x7) + 0.00769230769230769*sqr(130 - x8) +
  0.05*sqr(20 - x9) + 0.04*sqr(25 - x10) + 0.025*sqr(40 - x11) +
  0.0181818181818182*sqr(55 - x12) + 0.00454545454545455*sqr(220 - x13) +
  0.00526315789473684*sqr(190 - x16) + 0.00952380952380952*sqr(105 - x17))
   );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
