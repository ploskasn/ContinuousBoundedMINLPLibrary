#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="wager";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x127,x128,x129,x130,x131,x132;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x127); 
   fscanf(fp,"%f", &x128); 
   fscanf(fp,"%f", &x129); 
   fscanf(fp,"%f", &x130); 
   fscanf(fp,"%f", &x131); 
   fscanf(fp,"%f", &x132); 

   fclose(fp);
   res=-(- 0.0009231163463866*x127 - 0.0008521437889662*x128
   - 0.0007866278610666*x129 - 0.0009231163463866*x130
   - 0.0008521437889662*x131 - 0.0007866278610666*x132  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
