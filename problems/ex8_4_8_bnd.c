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
   char *problemname="ex8_4_8_bnd";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20;
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

   fclose(fp);
   res=-(-(sqr((-60) + 200*x1) + sqr((-39.4) + 66.6666666666667*x2) + sqr((-3231.5)
 + 3231.5*x3) + sqr((-645.066666666667) + 1.33333333333333*x4) + sqr((-80)
 + 200*x5) + sqr((-40.1333333333333) + 66.6666666666667*x6) + sqr((-3231.5
) + 3231.5*x7) + sqr((-657.6) + 1.33333333333333*x8) + sqr((-100) + 200*x9
) + sqr((-40.8) + 66.6666666666667*x10) + sqr((-3231.5) + 3231.5*x11) +
 sqr((-666.533333333333) + 1.33333333333333*x12) + sqr((-140) + 200*x13) +
 sqr((-43.8) + 66.6666666666667*x14) + sqr((-3231.5) + 3231.5*x15) + sqr((-
668.533333333333) + 1.33333333333333*x16) + sqr((-180) + 200*x17) + sqr((-
54.2666666666667) + 66.6666666666667*x18) + sqr((-3231.5) + 3231.5*x19) +
 sqr((-626.266666666667) + 1.33333333333333*x20))  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
