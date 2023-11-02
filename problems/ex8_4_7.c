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
   char *problemname="ex8_4_7";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50;
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
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x50); 

   fclose(fp);
   res=-(-(sqr((-98.71) + 100*x1) + sqr((-89.06) + 100*x2) + sqr((-11.57) + 100*x3)
 + sqr((-547.47) + x4) + sqr((-663.48) + x5) + sqr((-100.03) + 100*x6) +
 sqr((-83.5) + 100*x7) + sqr((-13.8) + 100*x8) + sqr((-531.77) + x9) + sqr(
(-676.04) + x10) + sqr((-100.39) + 100*x11) + sqr((-82.55) + 100*x12) +
 sqr((-18.5) + 100*x13) + sqr((-512.21) + x14) + sqr((-684.81) + x15) +
 sqr((-97.6) + 100*x16) + sqr((-80.2) + 100*x17) + sqr((-20.05) + 100*x18)
 + sqr((-490.59) + x19) + sqr((-695.47) + x20) + sqr((-101.29) + 100*x21)
 + sqr((-75.2) + 100*x22) + sqr((-24.2) + 100*x23) + sqr((-464.67) + x24)
 + sqr((-703.69) + x25) + sqr((-100.83) + 100*x26) + sqr((-71.93) + 100*
x27) + sqr((-27.39) + 100*x28) + sqr((-438.47) + x29) + sqr((-714.9) + x30
) + sqr((-100.75) + 100*x31) + sqr((-68.61) + 100*x32) + sqr((-32.15) +
 100*x33) + sqr((-408.04) + x34) + sqr((-726.09) + x35) + sqr((-99.94) +
 100*x36) + sqr((-63.88) + 100*x37) + sqr((-37.41) + 100*x38) + sqr((-
375.56) + x39) + sqr((-735.44) + x40) + sqr((-100.07) + 100*x41) + sqr((-
59.7) + 100*x42) + sqr((-39.26) + 100*x43) + sqr((-340.26) + x44) + sqr((-
745.7) + x45) + sqr((-99.73) + 100*x46) + sqr((-55.8) + 100*x47) + sqr((-
47.03) + 100*x48) + sqr((-306.55) + x49) + sqr((-753.94) + x50)) 
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
