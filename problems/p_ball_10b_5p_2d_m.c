#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="p_ball_10b_5p_2d_m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x53,x56,x58,x60,x62,x64,x66,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x60); 
   fscanf(fp,"%f", &x62); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &x72); 
   fscanf(fp,"%f", &x73); 
   fscanf(fp,"%f", &x74); 
   fscanf(fp,"%f", &x75); 
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &x77); 
   fscanf(fp,"%f", &x78); 
   fscanf(fp,"%f", &x79); 
   fscanf(fp,"%f", &x80); 

   fclose(fp);
   res=-(- x53 - x56 - x58 - x60 - x62 - x64 - x66 - x68 - x69 - x70 - x71 - x72
   - x73 - x74 - x75 - x76 - x77 - x78 - x79 - x80  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
