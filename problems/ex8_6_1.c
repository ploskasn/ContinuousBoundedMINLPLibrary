#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ex8_6_1";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x50); 
   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x60); 
   fscanf(fp,"%f", &x61); 
   fscanf(fp,"%f", &x62); 
   fscanf(fp,"%f", &x63); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &x72); 
   fscanf(fp,"%f", &x73); 
   fscanf(fp,"%f", &x74); 
   fscanf(fp,"%f", &x75); 

   fclose(fp);
   res=-(-(pow(x31,6) - 2*pow(x31,3) + pow(x32,6) - 2*pow(x32,3) + pow(
x33,6) - 2*pow(x33,3) + pow(x34,6) - 2*pow(x34,3) + pow(x35,6) - 2
*pow(x35,3) + pow(x36,6) - 2*pow(x36,3) + pow(x37,6) - 2*pow(x37
,3) + pow(x38,6) - 2*pow(x38,3) + pow(x39,6) - 2*pow(x39,3) +
 pow(x40,6) - 2*pow(x40,3) + pow(x41,6) - 2*pow(x41,3) + pow(x42,
6) - 2*pow(x42,3) + pow(x43,6) - 2*pow(x43,3) + pow(x44,6) - 2*
pow(x44,3) + pow(x45,6) - 2*pow(x45,3) + pow(x46,6) - 2*pow(x46,
3) + pow(x47,6) - 2*pow(x47,3) + pow(x48,6) - 2*pow(x48,3) +
 pow(x49,6) - 2*pow(x49,3) + pow(x50,6) - 2*pow(x50,3) + pow(x51,
6) - 2*pow(x51,3) + pow(x52,6) - 2*pow(x52,3) + pow(x53,6) - 2*
pow(x53,3) + pow(x54,6) - 2*pow(x54,3) + pow(x55,6) - 2*pow(x55,
3) + pow(x56,6) - 2*pow(x56,3) + pow(x57,6) - 2*pow(x57,3) +
 pow(x58,6) - 2*pow(x58,3) + pow(x59,6) - 2*pow(x59,3) + pow(x60,
6) - 2*pow(x60,3) + pow(x61,6) - 2*pow(x61,3) + pow(x62,6) - 2*
pow(x62,3) + pow(x63,6) - 2*pow(x63,3) + pow(x64,6) - 2*pow(x64,
3) + pow(x65,6) - 2*pow(x65,3) + pow(x66,6) - 2*pow(x66,3) +
 pow(x67,6) - 2*pow(x67,3) + pow(x68,6) - 2*pow(x68,3) + pow(x69,
6) - 2*pow(x69,3) + pow(x70,6) - 2*pow(x70,3) + pow(x71,6) - 2*
pow(x71,3) + pow(x72,6) - 2*pow(x72,3) + pow(x73,6) - 2*pow(x73,
3) + pow(x74,6) - 2*pow(x74,3) + pow(x75,6) - 2*pow(x75,3))
  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
