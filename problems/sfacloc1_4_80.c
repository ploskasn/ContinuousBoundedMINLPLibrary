#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sfacloc1_4_80";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x136,x137,x138,x139,x140,x141,x142,x143,x144,x145,x146,x147,x148,x149,x150;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x136); 
   fscanf(fp,"%f", &x137); 
   fscanf(fp,"%f", &x138); 
   fscanf(fp,"%f", &x139); 
   fscanf(fp,"%f", &x140); 
   fscanf(fp,"%f", &x141); 
   fscanf(fp,"%f", &x142); 
   fscanf(fp,"%f", &x143); 
   fscanf(fp,"%f", &x144); 
   fscanf(fp,"%f", &x145); 
   fscanf(fp,"%f", &x146); 
   fscanf(fp,"%f", &x147); 
   fscanf(fp,"%f", &x148); 
   fscanf(fp,"%f", &x149); 
   fscanf(fp,"%f", &x150); 

   fclose(fp);
   res=x136 + x137 + x138 + x139 + x140 + x141 + x142 + x143 + x144 + x145
 + x146 + x147 + x148 + x149 + x150  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
