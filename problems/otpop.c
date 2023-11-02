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
   char *problemname="otpop";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x62); 
   fscanf(fp,"%f", &x63); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &x72); 
   fscanf(fp,"%f", &x73); 
   fscanf(fp,"%f", &x74); 
   fscanf(fp,"%f", &x75); 
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &x77); 

   fclose(fp);
   res=-(-(sqr(10 -  10) + sqr(10.2 - x62) + sqr(10.404 - x63) + sqr(10.61208 -
  x64) + sqr(10.8243216 - x65) + sqr(11.040808032 - x66) + sqr(
 11.26162419264 - x67) + sqr(11.4868566764928 - x68) + sqr(
 11.7165938100227 - x69) + sqr(11.9509256862231 - x70) + sqr(
 12.1899441999476 - x71) + sqr(12.4337430839465 - x72) + sqr(
 12.6824179456255 - x73) + sqr(12.936066304538 - x74) + sqr(
 13.1947876306287 - x75) + sqr(13.4586833832413 - x76) + sqr(
 13.7278570509061 - x77))  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
