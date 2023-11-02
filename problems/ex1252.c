#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ex1252";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x16,x25,x34,x2,x17,x26,x35,x3,x18,x27,x36;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x36); 

   fclose(fp);
   res=-(-((6329.03 + 1800*x1)*x16*x25*x34 + (2489.31 + 1800*x2)*x17*x26*x35 + (
3270.27 + 1800*x3)*x18*x27*x36)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
