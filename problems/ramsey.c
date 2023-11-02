#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ramsey";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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

   fclose(fp);
   res=-(0.95*log(x12) + 0.9025*log(x13) + 0.857375*log(x14) + 0.81450625*log(
 x15) + 0.7737809375*log(x16) + 0.735091890625*log(x17) + 0.69833729609375
 *log(x18) + 0.663420431289062*log(x19) + 0.630249409724609*log(x20) +
  0.598736939238379*log(x21) + 11.3760018455292*log(x22))  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
