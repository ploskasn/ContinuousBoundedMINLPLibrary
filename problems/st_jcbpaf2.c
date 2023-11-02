#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="st_jcbpaf2";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x6,x2,x7,x3,x8,x4,x9,x5,x10;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x10); 

   fclose(fp);
   res=-(-(x1*x6 - x1 - x6 + x2*x7 - 2*x2 - 2*x7 + x3*x8 - 3*x3 - 3*x8 + x4*x9 - 4
 *x4 - 4*x9 + x5*x10 - 5*x5 - 5*x10)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
