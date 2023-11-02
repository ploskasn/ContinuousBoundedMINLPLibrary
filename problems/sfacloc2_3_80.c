#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sfacloc2_3_80";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x106); 
   fscanf(fp,"%f", &x107); 
   fscanf(fp,"%f", &x108); 
   fscanf(fp,"%f", &x109); 
   fscanf(fp,"%f", &x110); 
   fscanf(fp,"%f", &x111); 
   fscanf(fp,"%f", &x112); 
   fscanf(fp,"%f", &x113); 
   fscanf(fp,"%f", &x114); 
   fscanf(fp,"%f", &x115); 
   fscanf(fp,"%f", &x116); 
   fscanf(fp,"%f", &x117); 
   fscanf(fp,"%f", &x118); 
   fscanf(fp,"%f", &x119); 
   fscanf(fp,"%f", &x120); 

   fclose(fp);
   res=x106 + x107 + x108 + x109 + x110 + x111 + x112 + x113 + x114 + x115
 + x116 + x117 + x118 + x119 + x120  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
