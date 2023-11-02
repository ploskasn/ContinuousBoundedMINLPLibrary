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
   char *problemname="hybriddynamic_varcc";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x151,x131,x91,x132,x92,x133,x93,x134,x94,x135,x95,x136,x96,x137,x97,x138,x98,x139,x99,x140,x100,x81,x61,x71,x51,x82,x62,x72,x52,x83,x63,x73,x53,x84,x64,x74,x54,x85,x65,x75,x55,x86,x66,x76,x56,x87,x67,x77,x57,x88,x68,x78,x58,x89,x69,x79,x59,x90,x70,x80,x60;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x151); 
   fscanf(fp,"%f", &x131); 
   fscanf(fp,"%f", &x91); 
   fscanf(fp,"%f", &x132); 
   fscanf(fp,"%f", &x92); 
   fscanf(fp,"%f", &x133); 
   fscanf(fp,"%f", &x93); 
   fscanf(fp,"%f", &x134); 
   fscanf(fp,"%f", &x94); 
   fscanf(fp,"%f", &x135); 
   fscanf(fp,"%f", &x95); 
   fscanf(fp,"%f", &x136); 
   fscanf(fp,"%f", &x96); 
   fscanf(fp,"%f", &x137); 
   fscanf(fp,"%f", &x97); 
   fscanf(fp,"%f", &x138); 
   fscanf(fp,"%f", &x98); 
   fscanf(fp,"%f", &x139); 
   fscanf(fp,"%f", &x99); 
   fscanf(fp,"%f", &x140); 
   fscanf(fp,"%f", &x100); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x61); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x62); 
   fscanf(fp,"%f", &x72); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x63); 
   fscanf(fp,"%f", &x73); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x74); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x75); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x77); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x78); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x79); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x90); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x80); 
   fscanf(fp,"%f", &x60); 

   fclose(fp);
   res=-(-(sqr((-1.66666666666667) + x151) + sqr(x131)*x91 + sqr(x132)*x92 + sqr(
x133)*x93 + sqr(x134)*x94 + sqr(x135)*x95 + sqr(x136)*x96 + sqr(x137)*x97
 + sqr(x138)*x98 + sqr(x139)*x99 + sqr(x140)*x100 + 1000*(x81*x61 + x71*
x51 + x82*x62 + x72*x52 + x83*x63 + x73*x53 + x84*x64 + x74*x54 + x85*x65
 + x75*x55 + x86*x66 + x76*x56 + x87*x67 + x77*x57 + x88*x68 + x78*x58 +
 x89*x69 + x79*x59 + x90*x70 + x80*x60))  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
