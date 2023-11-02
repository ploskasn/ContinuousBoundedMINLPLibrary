#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="prob07";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x2,x3,x7,x8,x9,x10,x11;
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
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x11); 

   fclose(fp);
   res= 592*pow(x1,0.65 )+ 582*pow(x2,0.39 )+ 1200*pow(x3,0.52 )+ 370*pow(x7,0.22 )+ 250*pow(x8,0.4
  )+ 210*pow(x9,0.62 )+ 250*pow(x10,0.4 )+ 200*pow(x11,0.83 ) ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
