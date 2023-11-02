#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="p_ball_10b_5p_4d_h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x53,x56,x59,x62,x64,x66,x68,x70,x72,x74,x76,x78,x80,x82,x84,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110;
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
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x62); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x72); 
   fscanf(fp,"%f", &x74); 
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &x78); 
   fscanf(fp,"%f", &x80); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x90); 
   fscanf(fp,"%f", &x91); 
   fscanf(fp,"%f", &x92); 
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
   fscanf(fp,"%f", &x106); 
   fscanf(fp,"%f", &x107); 
   fscanf(fp,"%f", &x108); 
   fscanf(fp,"%f", &x109); 
   fscanf(fp,"%f", &x110); 

   fclose(fp);
   res=-(- x53 - x56 - x59 - x62 - x64 - x66 - x68 - x70 - x72 - x74 - x76 - x78
   - x80 - x82 - x84 - x86 - x87 - x88 - x89 - x90 - x91 - x92 - x93 - x94
   - x95 - x96 - x97 - x98 - x99 - x100 - x101 - x102 - x103 - x104 - x105
   - x106 - x107 - x108 - x109 - x110  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
