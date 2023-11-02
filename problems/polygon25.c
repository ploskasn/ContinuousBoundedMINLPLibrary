#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="polygon25";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x1,x27,x26,x3,x28,x4,x29,x5,x30,x6,x31,x7,x32,x8,x33,x9,x34,x10,x35,x11,x36,x12,x37,x13,x38,x14,x39,x15,x40,x16,x41,x17,x42,x18,x43,x19,x44,x20,x45,x21,x46,x22,x47,x23,x48,x24,x49;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x49); 

   fclose(fp);
   res=-0.5*(x2*x1*sin(x27 - x26) + x3*x2*sin(x28 - x27) + x4*x3*sin(x29 - x28)
 + x5*x4*sin(x30 - x29) + x6*x5*sin(x31 - x30) + x7*x6*sin(x32 - x31) + x8
*x7*sin(x33 - x32) + x9*x8*sin(x34 - x33) + x10*x9*sin(x35 - x34) + x11*
x10*sin(x36 - x35) + x12*x11*sin(x37 - x36) + x13*x12*sin(x38 - x37) + x14
*x13*sin(x39 - x38) + x15*x14*sin(x40 - x39) + x16*x15*sin(x41 - x40) +
 x17*x16*sin(x42 - x41) + x18*x17*sin(x43 - x42) + x19*x18*sin(x44 - x43)
 + x20*x19*sin(x45 - x44) + x21*x20*sin(x46 - x45) + x22*x21*sin(x47 - x46
) + x23*x22*sin(x48 - x47) + x24*x23*sin(x49 - x48) +  0*x24*sin( 3.14159265358979 -
 x49))  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
