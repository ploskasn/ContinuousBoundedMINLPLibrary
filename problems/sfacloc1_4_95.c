#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sfacloc1_4_95";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x129,x130,x131,x132,x133,x134,x135,x136,x137,x138,x139,x140,x141,x142,x143;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x129); 
   fscanf(fp,"%f", &x130); 
   fscanf(fp,"%f", &x131); 
   fscanf(fp,"%f", &x132); 
   fscanf(fp,"%f", &x133); 
   fscanf(fp,"%f", &x134); 
   fscanf(fp,"%f", &x135); 
   fscanf(fp,"%f", &x136); 
   fscanf(fp,"%f", &x137); 
   fscanf(fp,"%f", &x138); 
   fscanf(fp,"%f", &x139); 
   fscanf(fp,"%f", &x140); 
   fscanf(fp,"%f", &x141); 
   fscanf(fp,"%f", &x142); 
   fscanf(fp,"%f", &x143); 

   fclose(fp);
   res=x129 + x130 + x131 + x132 + x133 + x134 + x135 + x136 + x137 + x138
 + x139 + x140 + x141 + x142 + x143  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
