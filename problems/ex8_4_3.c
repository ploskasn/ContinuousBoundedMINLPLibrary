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
   char *problemname="ex8_4_3";
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
   res=-(-(sqr((-0.113) + x1) + sqr((-1.851) + x2) + sqr((-0.126) + x3) + sqr((-
1.854) + x4) + sqr((-0.172) + x5) + sqr((-1.849) + x6) + sqr((-0.155) + x7
) + sqr((-1.815) + x8) + sqr((-0.219) + x9) + sqr((-1.828) + x10) + sqr((-
0.245) + x11) + sqr((-1.847) + x12) + sqr((-0.274) + x13) + sqr((-1.804)
 + x14) + sqr((-0.264) + x15) + sqr((-1.832) + x16) + sqr((-0.312) + x17)
 + sqr((-1.838) + x18) + sqr((-0.324) + x19) + sqr((-1.817) + x20) + sqr((
-0.333) + x21) + sqr((-1.82) + x22) + sqr((-0.399) + x23) + sqr((-1.845)
 + x24) + sqr((-0.417) + x25) + sqr((-1.829) + x26) + sqr((-0.419) + x27)
 + sqr((-1.832) + x28) + sqr((-0.439) + x29) + sqr((-1.82) + x30) + sqr((-
0.475) + x31) + sqr((-1.82) + x32) + sqr((-0.506) + x33) + sqr((-1.799) +
 x34) + sqr((-0.538) + x35) + sqr((-1.838) + x36) + sqr((-0.538) + x37) +
 sqr((-1.835) + x38) + sqr((-0.591) + x39) + sqr((-1.811) + x40) + sqr((-
0.578) + x41) + sqr((-1.794) + x42) + sqr((-0.626) + x43) + sqr((-1.825)
 + x44) + sqr((-0.659) + x45) + sqr((-1.801) + x46) + sqr((-0.668) + x47)
 + sqr((-1.81) + x48) + sqr((-0.687) + x49) + sqr((-1.802) + x50))
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
