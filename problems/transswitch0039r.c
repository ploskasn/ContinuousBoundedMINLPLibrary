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
   char *problemname="transswitch0039r";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x309,x310,x311,x312,x313,x314,x315,x316,x317,x318;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x309); 
   fscanf(fp,"%f", &x310); 
   fscanf(fp,"%f", &x311); 
   fscanf(fp,"%f", &x312); 
   fscanf(fp,"%f", &x313); 
   fscanf(fp,"%f", &x314); 
   fscanf(fp,"%f", &x315); 
   fscanf(fp,"%f", &x316); 
   fscanf(fp,"%f", &x317); 
   fscanf(fp,"%f", &x318); 

   fclose(fp);
   res= 100*sqr(x309) + 30*x309 + 100*sqr(x310) + 30*x310 + 100*sqr(x311) + 30*
x311 + 100*sqr(x312) + 30*x312 + 100*sqr(x313) + 30*x313 + 100*sqr(x314)
 + 30*x314 + 100*sqr(x315) + 30*x315 + 100*sqr(x316) + 30*x316 + 100*sqr(
x317) + 30*x317 + 100*sqr(x318) + 30*x318  + 2;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
