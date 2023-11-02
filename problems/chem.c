#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="chem";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x11,x2,x3,x4,x5,x6,x7,x8,x9,x10;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x10); 

   fclose(fp);
   res=-(-((-6.05576803624071 + log(x1/x11))*x1 + (-17.1307680362407 + log(x2/x11))
*x2 + (-34.0207680362407 + log(x3/x11))*x3 + (-5.88076803624071 + log(x4/
x11))*x4 + (-24.6877680362407 + log(x5/x11))*x5 + (-14.9527680362407 +
 log(x6/x11))*x6 + (-24.0667680362407 + log(x7/x11))*x7 + (-
10.6747680362407 + log(x8/x11))*x8 + (-26.6287680362407 + log(x9/x11))*x9
 + (-22.1447680362407 + log(x10/x11))*x10)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
