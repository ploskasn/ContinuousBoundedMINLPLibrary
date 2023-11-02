#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sfacloc1_3_95";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x99); 
   fscanf(fp,"%f", &x100); 
   fscanf(fp,"%f", &x101); 
   fscanf(fp,"%f", &x102); 
   fscanf(fp,"%f", &x103); 
   fscanf(fp,"%f", &x104); 
   fscanf(fp,"%f", &x105); 
   fscanf(fp,"%f", &x106); 
   fscanf(fp,"%f", &x107); 
   fscanf(fp,"%f", &x108); 
   fscanf(fp,"%f", &x109); 
   fscanf(fp,"%f", &x110); 
   fscanf(fp,"%f", &x111); 
   fscanf(fp,"%f", &x112); 
   fscanf(fp,"%f", &x113); 

   fclose(fp);
   res=x99 + x100 + x101 + x102 + x103 + x104 + x105 + x106 + x107 + x108
 + x109 + x110 + x111 + x112 + x113  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
