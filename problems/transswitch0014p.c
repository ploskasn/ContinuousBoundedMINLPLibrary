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
   char *problemname="transswitch0014p";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x129,x130,x131,x132,x133;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x129); 
   fscanf(fp,"%f", &x130); 
   fscanf(fp,"%f", &x131); 
   fscanf(fp,"%f", &x132); 
   fscanf(fp,"%f", &x133); 

   fclose(fp);
   res= 430.293*sqr(x129) + 2000*x129 + 2500*sqr(x130) + 2000*x130 + 100*sqr(x131)
 + 4000*x131 + 100*sqr(x132) + 4000*x132 + 100*sqr(x133) + 4000*x133
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
