#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="hvb11";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x9538,x9570,x9542,x9574,x9546,x9578,x9550,x9582,x9539,x9571,x9543,x9575,x9547,x9579,x9551,x9583,x9540,x9572,x9544,x9576,x9548,x9580,x9552,x9584,x9541,x9573,x9545,x9577,x9549,x9581,x9553,x9585,x9556,x9558,x9561,x9563,x9565,x9566;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x9538); 
   fscanf(fp,"%f", &x9570); 
   fscanf(fp,"%f", &x9542); 
   fscanf(fp,"%f", &x9574); 
   fscanf(fp,"%f", &x9546); 
   fscanf(fp,"%f", &x9578); 
   fscanf(fp,"%f", &x9550); 
   fscanf(fp,"%f", &x9582); 
   fscanf(fp,"%f", &x9539); 
   fscanf(fp,"%f", &x9571); 
   fscanf(fp,"%f", &x9543); 
   fscanf(fp,"%f", &x9575); 
   fscanf(fp,"%f", &x9547); 
   fscanf(fp,"%f", &x9579); 
   fscanf(fp,"%f", &x9551); 
   fscanf(fp,"%f", &x9583); 
   fscanf(fp,"%f", &x9540); 
   fscanf(fp,"%f", &x9572); 
   fscanf(fp,"%f", &x9544); 
   fscanf(fp,"%f", &x9576); 
   fscanf(fp,"%f", &x9548); 
   fscanf(fp,"%f", &x9580); 
   fscanf(fp,"%f", &x9552); 
   fscanf(fp,"%f", &x9584); 
   fscanf(fp,"%f", &x9541); 
   fscanf(fp,"%f", &x9573); 
   fscanf(fp,"%f", &x9545); 
   fscanf(fp,"%f", &x9577); 
   fscanf(fp,"%f", &x9549); 
   fscanf(fp,"%f", &x9581); 
   fscanf(fp,"%f", &x9553); 
   fscanf(fp,"%f", &x9585); 
   fscanf(fp,"%f", &x9556); 
   fscanf(fp,"%f", &x9558); 
   fscanf(fp,"%f", &x9561); 
   fscanf(fp,"%f", &x9563); 
   fscanf(fp,"%f", &x9565); 
   fscanf(fp,"%f", &x9566); 

   fclose(fp);
   res=-( (-x9538*x9570) - x9542*x9574 - x9546*x9578 - x9550*x9582 - x9539*x9571

- x9543*x9575 - x9547*x9579 - x9551*x9583 - x9540*x9572 - x9544*x9576

- x9548*x9580 - x9552*x9584 - x9541*x9573 - x9545*x9577 - x9549*x9581

- x9553*x9585 - 777*x9556 - 835*x9558 - 545*x9561 - 780*x9563

- 558*x9565 - 389*x9566  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
