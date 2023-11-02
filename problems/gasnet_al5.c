#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="gasnet_al5";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x235,x236,x260,x261,x263,x583,x584,x585,x586,x587,x588,x589;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x235); 
   fscanf(fp,"%f", &x236); 
   fscanf(fp,"%f", &x260); 
   fscanf(fp,"%f", &x261); 
   fscanf(fp,"%f", &x263); 
   fscanf(fp,"%f", &x583); 
   fscanf(fp,"%f", &x584); 
   fscanf(fp,"%f", &x585); 
   fscanf(fp,"%f", &x586); 
   fscanf(fp,"%f", &x587); 
   fscanf(fp,"%f", &x588); 
   fscanf(fp,"%f", &x589); 

   fclose(fp);
   res=-( + 153.846*x235 + 604.395*x236 - x260 - x261 -  0 - x263 - x583
 - x584 - x585 - x586 - 8500*x587 - 7000*x588 - 7000*x589 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
