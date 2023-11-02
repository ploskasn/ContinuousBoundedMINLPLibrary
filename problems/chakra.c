#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="chakra";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20;
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

   fclose(fp);
   res=-(10*pow(x1,0.1 )+ 9.70873786407767*pow(x2,0.1 )+ 9.42595909133755*pow(x3,0.1 )+
  9.1514165935316*pow(x4,0.1 )+ 8.88487047915689*pow(x5,0.1 )+ 8.62608784384164*pow(x6
 ,0.1 )+ 8.37484256683654*pow(x7,0.1 )+ 8.13091511343354*pow(x8,0.1 )+
  7.89409234313936*pow(x9,0.1 )+ 7.66416732343627*pow(x10,0.1 )+ 7.44093914896725*pow(
 x11,0.1 )+ 7.22421276598762*pow(x12,0.1 )+ 7.01379880192973*pow(x13,0.1 )+
  6.80951339993178*pow(x14,0.1 )+ 6.61117805818619*pow(x15,0.1 )+ 6.41861947396717*pow(
 x16,0.1 )+ 6.23166939220114*pow(x17,0.1 )+ 6.05016445844771*pow(x18,0.1 )+
  5.87394607616282*pow(x19,0.1 )+ 5.70286026811925*pow(x20,0.1))  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
