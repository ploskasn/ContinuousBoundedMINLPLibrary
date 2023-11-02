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
   char *problemname="ex8_6_2";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x13,x4,x14,x24,x5,x15,x25,x6,x16,x26,x7,x17,x27,x8,x18,x28,x9,x19,x29,x10,x20,x30;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x30); 

   fclose(fp);
   res=-(-(sqr(1 - exp(3 - 3*pow((sqr( 0 - x2) + sqr( 0 -  0) + sqr( 0 -  0)),0.5))
) + sqr(1 - exp(3 - 3*pow((sqr( 0 - x3) + sqr( 0 - x13) + sqr( 0 -  0)),
0.5))) + sqr(1 - exp(3 - 3*pow((sqr( 0 - x4) + sqr( 0 - x14) + sqr( 0 - x24))
,0.5))) + sqr(1 - exp(3 - 3*pow((sqr( 0 - x5) + sqr( 0 - x15) + sqr( 0 - x25
)),0.5))) + sqr(1 - exp(3 - 3*pow((sqr( 0 - x6) + sqr( 0 - x16) + sqr( 0 -
 x26)),0.5))) + sqr(1 - exp(3 - 3*pow((sqr( 0 - x7) + sqr( 0 - x17) + sqr( 0
 - x27)),0.5))) + sqr(1 - exp(3 - 3*pow((sqr( 0 - x8) + sqr( 0 - x18) + sqr(
 0 - x28)),0.5))) + sqr(1 - exp(3 - 3*pow((sqr( 0 - x9) + sqr( 0 - x19) +
 sqr( 0 - x29)),0.5))) + sqr(1 - exp(3 - 3*pow((sqr( 0 - x10) + sqr( 0 - x20)
 + sqr( 0 - x30)),0.5))) + sqr(1 - exp(3 - 3*pow((sqr(x2 - x3) + sqr( 0 -
 x13) + sqr( 0 -  0)),0.5))) + sqr(1 - exp(3 - 3*pow((sqr(x2 - x4) + sqr( 0
 - x14) + sqr( 0 - x24)),0.5))) + sqr(1 - exp(3 - 3*pow((sqr(x2 - x5) + sqr(
 0 - x15) + sqr( 0 - x25)),0.5))) + sqr(1 - exp(3 - 3*pow((sqr(x2 - x6) +
 sqr( 0 - x16) + sqr( 0 - x26)),0.5))) + sqr(1 - exp(3 - 3*pow((sqr(x2 - x7)
 + sqr( 0 - x17) + sqr( 0 - x27)),0.5))) + sqr(1 - exp(3 - 3*pow((sqr(x2 -
 x8) + sqr( 0 - x18) + sqr( 0 - x28)),0.5))) + sqr(1 - exp(3 - 3*pow((sqr(x2
 - x9) + sqr( 0 - x19) + sqr( 0 - x29)),0.5))) + sqr(1 - exp(3 - 3*pow((sqr(
x2 - x10) + sqr( 0 - x20) + sqr( 0 - x30)),0.5))) + sqr(1 - exp(3 - 3*pow((
sqr(x3 - x4) + sqr(x13 - x14) + sqr( 0 - x24)),0.5))) + sqr(1 - exp(3 - 3
*pow((sqr(x3 - x5) + sqr(x13 - x15) + sqr( 0 - x25)),0.5))) + sqr(1 - exp(3
 - 3*pow((sqr(x3 - x6) + sqr(x13 - x16) + sqr( 0 - x26)),0.5))) + sqr(1 -
 exp(3 - 3*pow((sqr(x3 - x7) + sqr(x13 - x17) + sqr( 0 - x27)),0.5))) + sqr(1
 - exp(3 - 3*pow((sqr(x3 - x8) + sqr(x13 - x18) + sqr( 0 - x28)),0.5))) +
 sqr(1 - exp(3 - 3*pow((sqr(x3 - x9) + sqr(x13 - x19) + sqr( 0 - x29)),0.5)))
 + sqr(1 - exp(3 - 3*pow((sqr(x3 - x10) + sqr(x13 - x20) + sqr( 0 - x30)),
0.5))) + sqr(1 - exp(3 - 3*pow((sqr(x4 - x5) + sqr(x14 - x15) + sqr(x24 - x25))
,0.5))) + sqr(1 - exp(3 - 3*pow((sqr(x4 - x6) + sqr(x14 - x16) + sqr(x24 - x26
)),0.5))) + sqr(1 - exp(3 - 3*pow((sqr(x4 - x7) + sqr(x14 - x17) + sqr(x24 -
 x27)),0.5))) + sqr(1 - exp(3 - 3*pow((sqr(x4 - x8) + sqr(x14 - x18) + sqr(x24
 - x28)),0.5))) + sqr(1 - exp(3 - 3*pow((sqr(x4 - x9) + sqr(x14 - x19) + sqr(
x24 - x29)),0.5))) + sqr(1 - exp(3 - 3*pow((sqr(x4 - x10) + sqr(x14 - x20) +
 sqr(x24 - x30)),0.5))) + sqr(1 - exp(3 - 3*pow((sqr(x5 - x6) + sqr(x15 - x16)
 + sqr(x25 - x26)),0.5))) + sqr(1 - exp(3 - 3*pow((sqr(x5 - x7) + sqr(x15 -
 x17) + sqr(x25 - x27)),0.5))) + sqr(1 - exp(3 - 3*pow((sqr(x5 - x8) + sqr(x15
 - x18) + sqr(x25 - x28)),0.5))) + sqr(1 - exp(3 - 3*pow((sqr(x5 - x9) + sqr(
x15 - x19) + sqr(x25 - x29)),0.5))) + sqr(1 - exp(3 - 3*pow((sqr(x5 - x10) +
 sqr(x15 - x20) + sqr(x25 - x30)),0.5))) + sqr(1 - exp(3 - 3*pow((sqr(x6 - x7)
 + sqr(x16 - x17) + sqr(x26 - x27)),0.5))) + sqr(1 - exp(3 - 3*pow((sqr(x6 -
 x8) + sqr(x16 - x18) + sqr(x26 - x28)),0.5))) + sqr(1 - exp(3 - 3*pow((sqr(x6
 - x9) + sqr(x16 - x19) + sqr(x26 - x29)),0.5))) + sqr(1 - exp(3 - 3*pow((sqr(
x6 - x10) + sqr(x16 - x20) + sqr(x26 - x30)),0.5))) + sqr(1 - exp(3 - 3*pow((
sqr(x7 - x8) + sqr(x17 - x18) + sqr(x27 - x28)),0.5))) + sqr(1 - exp(3 - 3
*pow((sqr(x7 - x9) + sqr(x17 - x19) + sqr(x27 - x29)),0.5))) + sqr(1 - exp(3
 - 3*pow((sqr(x7 - x10) + sqr(x17 - x20) + sqr(x27 - x30)),0.5))) + sqr(1 -
 exp(3 - 3*pow((sqr(x8 - x9) + sqr(x18 - x19) + sqr(x28 - x29)),0.5))) + sqr(1
 - exp(3 - 3*pow((sqr(x8 - x10) + sqr(x18 - x20) + sqr(x28 - x30)),0.5))) +
 sqr(1 - exp(3 - 3*pow((sqr(x9 - x10) + sqr(x19 - x20) + sqr(x29 - x30)),0.5)))
)  + 45);

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
