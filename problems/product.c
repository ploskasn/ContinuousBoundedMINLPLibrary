#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="product";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1043,x1044,x1045,x1046,x1047,x1048,x1073,x1074,x1075,x1076,x1077,x1078,x1079,x1080,x1081,x1082,x1083,x1084;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1043); 
   fscanf(fp,"%f", &x1044); 
   fscanf(fp,"%f", &x1045); 
   fscanf(fp,"%f", &x1046); 
   fscanf(fp,"%f", &x1047); 
   fscanf(fp,"%f", &x1048); 
   fscanf(fp,"%f", &x1073); 
   fscanf(fp,"%f", &x1074); 
   fscanf(fp,"%f", &x1075); 
   fscanf(fp,"%f", &x1076); 
   fscanf(fp,"%f", &x1077); 
   fscanf(fp,"%f", &x1078); 
   fscanf(fp,"%f", &x1079); 
   fscanf(fp,"%f", &x1080); 
   fscanf(fp,"%f", &x1081); 
   fscanf(fp,"%f", &x1082); 
   fscanf(fp,"%f", &x1083); 
   fscanf(fp,"%f", &x1084); 

   fclose(fp);
   res= + 1.12*x1043 + 0.79719387755102*x1044
    + 0.567426855718599*x1045 + 0.403883227979369*x1046
    + 0.287476104098836*x1047 + 0.204619812615903*x1048 + 1.12*x1073
    + 0.79719387755102*x1074 + 0.567426855718599*x1075
    + 0.403883227979369*x1076 + 0.287476104098836*x1077
    + 0.204619812615903*x1078 - 1.12*x1079 - 0.79719387755102*x1080
    - 0.567426855718599*x1081 - 0.403883227979369*x1082
    - 0.287476104098836*x1083 - 0.204619812615903*x1084 ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
