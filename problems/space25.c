#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="space25";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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

   fclose(fp);
   res=-( - 7.5*x2 - 13.0503831361382*x3 - 13.0503831361382*x4
 - 13.0503831361382*x5 - 13.0503831361382*x6 - 10.6800046816469*x7
 - 10.6800046816469*x8 - 10.6800046816469*x9 - 10.6800046816469*x10
 - 7.5*x11 - 7.5*x12 - 7.5*x13 - 7.5*x14 - 18.1142209327368*x15
 - 18.1142209327368*x16 - 18.1142209327368*x17 - 18.1142209327368*x18
 - 18.1142209327368*x19 - 18.1142209327368*x20 - 18.1142209327368*x21
 - 18.1142209327368*x22 - 13.3463478150391*x23 - 13.3463478150391*x24
 - 13.3463478150391*x25 - 13.3463478150391*x26 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
