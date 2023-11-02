#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="product2";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x911,x912,x913,x914,x915,x916,x941,x942,x943,x944,x945,x946,x947,x948,x949,x950,x951,x952;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x911); 
   fscanf(fp,"%f", &x912); 
   fscanf(fp,"%f", &x913); 
   fscanf(fp,"%f", &x914); 
   fscanf(fp,"%f", &x915); 
   fscanf(fp,"%f", &x916); 
   fscanf(fp,"%f", &x941); 
   fscanf(fp,"%f", &x942); 
   fscanf(fp,"%f", &x943); 
   fscanf(fp,"%f", &x944); 
   fscanf(fp,"%f", &x945); 
   fscanf(fp,"%f", &x946); 
   fscanf(fp,"%f", &x947); 
   fscanf(fp,"%f", &x948); 
   fscanf(fp,"%f", &x949); 
   fscanf(fp,"%f", &x950); 
   fscanf(fp,"%f", &x951); 
   fscanf(fp,"%f", &x952); 

   fclose(fp);
   res= + 1.12*x911 + 0.79719387755102*x912 + 0.567426855718599*x913
    + 0.403883227979369*x914 + 0.287476104098836*x915
    + 0.204619812615903*x916 + 1.12*x941 + 0.79719387755102*x942
    + 0.567426855718599*x943 + 0.403883227979369*x944
    + 0.287476104098836*x945 + 0.204619812615903*x946 - 1.12*x947
    - 0.79719387755102*x948 - 0.567426855718599*x949
    - 0.403883227979369*x950 - 0.287476104098836*x951
    - 0.204619812615903*x952 ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
