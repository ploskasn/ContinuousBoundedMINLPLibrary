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
   char *problemname="st_fp8";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24;
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
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x24); 

   fclose(fp);
   res=-(-(300*x1 - 7*sqr(x1) - 4*sqr(x2) + 270*x2 - 6*sqr(x3) + 460*x3 - 8*sqr(x4
 ) + 800*x4 - 12*sqr(x5) + 740*x5 - 9*sqr(x6) + 600*x6 - 14*sqr(x7) + 540*
 x7 - 7*sqr(x8) + 380*x8 - 13*sqr(x9) + 300*x9 - 12*sqr(x10) + 490*x10 - 8
 *sqr(x11) + 380*x11 - 4*sqr(x12) + 760*x12 - 7*sqr(x13) + 430*x13 - 9*
 sqr(x14) + 250*x14 - 16*sqr(x15) + 390*x15 - 8*sqr(x16) + 600*x16 - 4*
 sqr(x17) + 210*x17 - 10*sqr(x18) + 830*x18 - 21*sqr(x19) + 470*x19 - 13*
 sqr(x20) + 680*x20 - 17*sqr(x21) + 360*x21 - 9*sqr(x22) + 290*x22 - 8*
 sqr(x23) + 400*x23 - 4*sqr(x24) + 310*x24)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
