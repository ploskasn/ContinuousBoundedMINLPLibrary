#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="risk2bpb";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x462,x463,x464;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x462); 
   fscanf(fp,"%f", &x463); 
   fscanf(fp,"%f", &x464); 

   fclose(fp);
   res=-0.333333333333333*(pow(x462,0.329 )+pow( x463,0.329 )+pow( x464,0.329)) 
 ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
