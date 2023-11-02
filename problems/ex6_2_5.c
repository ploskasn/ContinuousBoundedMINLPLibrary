#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ex6_2_5";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x4,x7,x10,x2,x5,x8,x3,x6,x9;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x9); 

   fclose(fp);
   res=-(-((0.156969560191053 + log(x4/(x4 + x7 + x10)))*x4 + (0.156969560191053 +
 log(x7/(x4 + x7 + x10)))*x7 + (0.156969560191053 + log(x10/(x4 + x7 + x10)
))*x10 + log(3.9235*x2 + 6.0909*x5 + 0.92*x8)*(26.9071667605344*x2 +
 41.7710875549227*x5 + 6.30931398488382*x8) + 0.113370955614741*x2 -
 2.43897680885457*x5 + 2.8555953099828*x8 + 9.58716676053442*log(x2)*x2 +
 16.9310875549227*log(x5)*x5 + 0.309313984883821*log(x8)*x8 -
 9.58716676053442*log(3.9235*x2 + 6.0909*x5 + 0.92*x8)*x2 -
 16.9310875549227*log(3.9235*x2 + 6.0909*x5 + 0.92*x8)*x5 -
 0.309313984883821*log(3.9235*x2 + 6.0909*x5 + 0.92*x8)*x8 + 18.32*log(x2)*
x2 + 25.84*log(x5)*x5 + 7*log(x8)*x8 - 18.32*log(3.664*x2 + 5.168*x5 + 1.4
*x8)*x2 - 25.84*log(3.664*x2 + 5.168*x5 + 1.4*x8)*x5 - 7*log(3.664*x2 +
 5.168*x5 + 1.4*x8)*x8 + log(4.0643*x2 + 5.7409*x5 + 1.6741*x8)*(4.0643*x2
 + 5.7409*x5 + 1.6741*x8) + 4.0643*log(x2)*x2 + 5.7409*log(x5)*x5 + 1.6741
*log(x8)*x8 - 4.0643*log(4.0643*x2 + 3.22644664511275*x5 +
 1.44980651607875*x8)*x2 - 5.7409*log(5.31147575751424*x2 + 5.7409*x5 +
 0.00729924451284409*x8)*x5 - 1.6741*log(2.25846661774355*x2 +
 3.70876916588753*x5 + 1.6741*x8)*x8 + log(3.9235*x3 + 6.0909*x6 + 0.92*x9)
*(26.9071667605344*x3 + 41.7710875549227*x6 + 6.30931398488382*x9) +
 0.113370955614741*x3 - 2.43897680885457*x6 + 2.8555953099828*x9 +
 9.58716676053442*log(x3)*x3 + 16.9310875549227*log(x6)*x6 +
 0.309313984883821*log(x9)*x9 - 9.58716676053442*log(3.9235*x3 + 6.0909*x6
 + 0.92*x9)*x3 - 16.9310875549227*log(3.9235*x3 + 6.0909*x6 + 0.92*x9)*x6
 - 0.309313984883821*log(3.9235*x3 + 6.0909*x6 + 0.92*x9)*x9 + 18.32*log(
x3)*x3 + 25.84*log(x6)*x6 + 7*log(x9)*x9 - 18.32*log(3.664*x3 + 5.168*x6
 + 1.4*x9)*x3 - 25.84*log(3.664*x3 + 5.168*x6 + 1.4*x9)*x6 - 7*log(3.664*
x3 + 5.168*x6 + 1.4*x9)*x9 + log(4.0643*x3 + 5.7409*x6 + 1.6741*x9)*(
4.0643*x3 + 5.7409*x6 + 1.6741*x9) + 4.0643*log(x3)*x3 + 5.7409*log(x6)*x6
 + 1.6741*log(x9)*x9 - 4.0643*log(4.0643*x3 + 3.22644664511275*x6 +
 1.44980651607875*x9)*x3 - 5.7409*log(5.31147575751424*x3 + 5.7409*x6 +
 0.00729924451284409*x9)*x6 - 1.6741*log(2.25846661774355*x3 +
 3.70876916588753*x6 + 1.6741*x9)*x9 - 0.3658348*x2 - 0.3658348*x3 -
 0.9825555*x5 - 0.9825555*x6 - 0.3663657*x8 - 0.3663657*x9 -
 30.9714667605344*log(x2)*x2 - 47.5119875549227*log(x5)*x5 -
 7.98341398488382*log(x8)*x8 - 30.9714667605344*log(x3)*x3 -
 47.5119875549227*log(x6)*x6 - 7.98341398488382*log(x9)*x9)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
