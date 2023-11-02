#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="batch0812_nc";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x13,x1,x14,x2,x15,x3,x16,x4,x17,x5,x18,x6,x19,x7,x20,x8,x21,x9,x22,x10,x23,x11,x24,x12;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x12); 

   fclose(fp);
   res=-(-(250*pow(x13,0.6)*x1 + 550*pow(x14,0.6)*x2 + 250*pow(x15,0.6)*x3 + 1000*pow(x16,0.6)*x4
 + 300*pow(x17,0.6)*x5 + 800*pow(x18,0.6)*x6 + 200*pow(x19,0.6)*x7 + 1200*pow(x20,0.6)*x8
 + 250*pow(x21,0.6)*x9 + 250*pow(x22,0.6)*x10 + 450*pow(x23,0.6)*x11 + 700*pow(x24,0.6)*
x12)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
