#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ex5_3_3";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x33,x34,x35,x6,x43,x44,x45,x15,x53,x54,x55,x24;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x24); 

   fclose(fp);
   res=-(-((0.00132223 + 0.0016446*x33 + 0.0018611*x34 + 0.001262*x35)*x6 + (-
 9.40700000000017e-5 + 0.0015625*x43 + 0.0091604*x44 + 0.0076758*x45)*x15
  + (0.00457315 - 0.001748*x53 - 0.0002583*x54 - 0.0004691*x55)*x24)
   - 1.68776);

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
