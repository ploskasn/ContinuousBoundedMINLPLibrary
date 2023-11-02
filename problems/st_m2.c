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
   char *problemname="st_m2";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30;
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

   fclose(fp);
   res=-(-(14571.3167*x1 - 3*sqr(x1) - sqr(x2) - 37250.204*x2 - 7*sqr(x3) +
  1578.40997*x3 - 7*sqr(x4) - 23199.31*x4 - 9*sqr(x5) - 36532.101*x5 - 4*
 sqr(x6) + 14991.9969*x6 - 6*sqr(x7) - 46241.855*x7 - 8*sqr(x8) +
  59634.0121*x8 - sqr(x9) + 11781.1616*x9 - sqr(x10) - 62617.461*x10 - 6*
 sqr(x11) + 23226.6837*x11 - 7*sqr(x12) - 16497.431*x12 - sqr(x13) +
  350.55924*x13 - 4*sqr(x14) + 25674.7606*x14 - 2*sqr(x15) + 56334.3262*x15
  - 5*sqr(x16) - 2159.2486*x16 - 7*sqr(x17) + 30150.9571*x17 - 6*sqr(x18)
  - 13688.295*x18 - 9*sqr(x19) - 41755.296*x19 - 9*sqr(x20) + 34911.6548*
 x20 - 6*sqr(x21) + 104801.315*x21 - 2*sqr(x22) - 47888.471*x22 - 7*sqr(
 x23) - 10644.315*x23 - 5*sqr(x24) + 119299.448*x24 - 7*sqr(x25) +
  27859.4823*x25 - 9*sqr(x26) + 89793.8375*x26 - 8*sqr(x27) + 108734.2*x27
  - 3*sqr(x28) - 31798.43*x28 - sqr(x29) + 15961.706*x29 - 8*sqr(x30) -
  5450.7111*x30)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
