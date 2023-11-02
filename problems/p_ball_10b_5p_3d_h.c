#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="p_ball_10b_5p_3d_h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x53,x56,x59,x61,x63,x65,x67,x69,x71,x73,x75,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95;
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
   fscanf(fp,"%f", &x61); 
   fscanf(fp,"%f", &x63); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &x73); 
   fscanf(fp,"%f", &x75); 
   fscanf(fp,"%f", &x77); 
   fscanf(fp,"%f", &x78); 
   fscanf(fp,"%f", &x79); 
   fscanf(fp,"%f", &x80); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x85); 
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

   fclose(fp);
   res=-(- x53 - x56 - x59 - x61 - x63 - x65 - x67 - x69 - x71 - x73 - x75 - x77
   - x78 - x79 - x80 - x81 - x82 - x83 - x84 - x85 - x86 - x87 - x88 - x89
   - x90 - x91 - x92 - x93 - x94 - x95  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
