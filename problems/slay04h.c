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
   char *problemname="slay04h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x5,x2,x6,x3,x7,x4,x8,x129,x130,x131,x132,x133,x134,x135,x136,x137,x138,x139,x140;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x129); 
   fscanf(fp,"%f", &x130); 
   fscanf(fp,"%f", &x131); 
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
   res=-(-(150*(sqr((-4) + x1) + sqr((-10) + x5)) + 390*(sqr((-10) + x2) + sqr((-15
) + x6)) + 240*(sqr((-7) + x3) + sqr((-9) + x7)) + 70*(sqr((-3) + x4) +
 sqr((-3) + x8))) - 300*x129 - 240*x130 - 210*x131 - 100*x132 - 150*x133
 - 120*x134 - 300*x135 - 240*x136 - 210*x137 - 100*x138 - 150*x139
 - 120*x140  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
