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
   char *problemname="chain50";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x52,x53,x2,x54,x3,x55,x4,x56,x5,x57,x6,x58,x7,x59,x8,x60,x9,x61,x10,x62,x11,x63,x12,x64,x13,x65,x14,x66,x15,x67,x16,x68,x17,x69,x18,x70,x19,x71,x20,x72,x21,x73,x22,x74,x23,x75,x24,x76,x25,x77,x26,x78,x27,x79,x28,x80,x29,x81,x30,x82,x31,x83,x32,x84,x33,x85,x34,x86,x35,x87,x36,x88,x37,x89,x38,x90,x39,x91,x40,x92,x41,x93,x42,x94,x43,x95,x44,x96,x45,x97,x46,x98,x47,x99,x48,x100,x49,x101,x50,x102;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x60); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x61); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x62); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x63); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x72); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x73); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x74); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x75); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x77); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x78); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x79); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x80); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x90); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x91); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x92); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x93); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x94); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x95); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x96); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x97); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x98); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x99); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x100); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x101); 
   fscanf(fp,"%f", &x50); 
   fscanf(fp,"%f", &x102); 

   fclose(fp);
   res=-(-0.01*(sqrt(1 + sqr(x52))* 1 + sqrt(1 + sqr(x53))*x2 + sqrt(1 + sqr(x53))*
x2 + sqrt(1 + sqr(x54))*x3 + sqrt(1 + sqr(x54))*x3 + sqrt(1 + sqr(x55))*x4
 + sqrt(1 + sqr(x55))*x4 + sqrt(1 + sqr(x56))*x5 + sqrt(1 + sqr(x56))*x5
 + sqrt(1 + sqr(x57))*x6 + sqrt(1 + sqr(x57))*x6 + sqrt(1 + sqr(x58))*x7
 + sqrt(1 + sqr(x58))*x7 + sqrt(1 + sqr(x59))*x8 + sqrt(1 + sqr(x59))*x8
 + sqrt(1 + sqr(x60))*x9 + sqrt(1 + sqr(x60))*x9 + sqrt(1 + sqr(x61))*x10
 + sqrt(1 + sqr(x61))*x10 + sqrt(1 + sqr(x62))*x11 + sqrt(1 + sqr(x62))*
x11 + sqrt(1 + sqr(x63))*x12 + sqrt(1 + sqr(x63))*x12 + sqrt(1 + sqr(x64))
*x13 + sqrt(1 + sqr(x64))*x13 + sqrt(1 + sqr(x65))*x14 + sqrt(1 + sqr(x65)
)*x14 + sqrt(1 + sqr(x66))*x15 + sqrt(1 + sqr(x66))*x15 + sqrt(1 + sqr(x67
))*x16 + sqrt(1 + sqr(x67))*x16 + sqrt(1 + sqr(x68))*x17 + sqrt(1 + sqr(
x68))*x17 + sqrt(1 + sqr(x69))*x18 + sqrt(1 + sqr(x69))*x18 + sqrt(1 +
 sqr(x70))*x19 + sqrt(1 + sqr(x70))*x19 + sqrt(1 + sqr(x71))*x20 + sqrt(1
 + sqr(x71))*x20 + sqrt(1 + sqr(x72))*x21 + sqrt(1 + sqr(x72))*x21 + sqrt(
1 + sqr(x73))*x22 + sqrt(1 + sqr(x73))*x22 + sqrt(1 + sqr(x74))*x23 +
 sqrt(1 + sqr(x74))*x23 + sqrt(1 + sqr(x75))*x24 + sqrt(1 + sqr(x75))*x24
 + sqrt(1 + sqr(x76))*x25 + sqrt(1 + sqr(x76))*x25 + sqrt(1 + sqr(x77))*
x26 + sqrt(1 + sqr(x77))*x26 + sqrt(1 + sqr(x78))*x27 + sqrt(1 + sqr(x78))
*x27 + sqrt(1 + sqr(x79))*x28 + sqrt(1 + sqr(x79))*x28 + sqrt(1 + sqr(x80)
)*x29 + sqrt(1 + sqr(x80))*x29 + sqrt(1 + sqr(x81))*x30 + sqrt(1 + sqr(x81
))*x30 + sqrt(1 + sqr(x82))*x31 + sqrt(1 + sqr(x82))*x31 + sqrt(1 + sqr(
x83))*x32 + sqrt(1 + sqr(x83))*x32 + sqrt(1 + sqr(x84))*x33 + sqrt(1 +
 sqr(x84))*x33 + sqrt(1 + sqr(x85))*x34 + sqrt(1 + sqr(x85))*x34 + sqrt(1
 + sqr(x86))*x35 + sqrt(1 + sqr(x86))*x35 + sqrt(1 + sqr(x87))*x36 + sqrt(
1 + sqr(x87))*x36 + sqrt(1 + sqr(x88))*x37 + sqrt(1 + sqr(x88))*x37 +
 sqrt(1 + sqr(x89))*x38 + sqrt(1 + sqr(x89))*x38 + sqrt(1 + sqr(x90))*x39
 + sqrt(1 + sqr(x90))*x39 + sqrt(1 + sqr(x91))*x40 + sqrt(1 + sqr(x91))*
x40 + sqrt(1 + sqr(x92))*x41 + sqrt(1 + sqr(x92))*x41 + sqrt(1 + sqr(x93))
*x42 + sqrt(1 + sqr(x93))*x42 + sqrt(1 + sqr(x94))*x43 + sqrt(1 + sqr(x94)
)*x43 + sqrt(1 + sqr(x95))*x44 + sqrt(1 + sqr(x95))*x44 + sqrt(1 + sqr(x96
))*x45 + sqrt(1 + sqr(x96))*x45 + sqrt(1 + sqr(x97))*x46 + sqrt(1 + sqr(
x97))*x46 + sqrt(1 + sqr(x98))*x47 + sqrt(1 + sqr(x98))*x47 + sqrt(1 +
 sqr(x99))*x48 + sqrt(1 + sqr(x99))*x48 + sqrt(1 + sqr(x100))*x49 + sqrt(1
 + sqr(x100))*x49 + sqrt(1 + sqr(x101))*x50 + sqrt(1 + sqr(x101))*x50 +
 sqrt(1 + sqr(x102))* 3)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
