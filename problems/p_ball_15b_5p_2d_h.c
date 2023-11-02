#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="p_ball_15b_5p_2d_h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x78,x81,x83,x85,x87,x89,x91,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x78); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x91); 
   fscanf(fp,"%f", &x93); 
   fscanf(fp,"%f", &x94); 
   fscanf(fp,"%f", &x95); 
   fscanf(fp,"%f", &x96); 
   fscanf(fp,"%f", &x97); 
   fscanf(fp,"%f", &x98); 
   fscanf(fp,"%f", &x99); 
   fscanf(fp,"%f", &x100); 
   fscanf(fp,"%f", &x101); 
   fscanf(fp,"%f", &x102); 
   fscanf(fp,"%f", &x103); 
   fscanf(fp,"%f", &x104); 
   fscanf(fp,"%f", &x105); 

   fclose(fp);
   res=-(- x78 - x81 - x83 - x85 - x87 - x89 - x91 - x93 - x94 - x95 - x96 - x97
   - x98 - x99 - x100 - x101 - x102 - x103 - x104 - x105  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
