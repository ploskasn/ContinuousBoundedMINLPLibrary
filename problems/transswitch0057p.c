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
   char *problemname="transswitch0057p";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x505,x506,x507,x508,x509,x510,x511;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x505); 
   fscanf(fp,"%f", &x506); 
   fscanf(fp,"%f", &x507); 
   fscanf(fp,"%f", &x508); 
   fscanf(fp,"%f", &x509); 
   fscanf(fp,"%f", &x510); 
   fscanf(fp,"%f", &x511); 

   fclose(fp);
   res= 775.795*sqr(x505) + 2000*x505 + 100*sqr(x506) + 4000*x506 + 2500*sqr(x507)
 + 2000*x507 + 100*sqr(x508) + 4000*x508 + 222.222*sqr(x509) + 2000*x509
 + 100*sqr(x510) + 4000*x510 + 322.581*sqr(x511) + 2000*x511 
 ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
