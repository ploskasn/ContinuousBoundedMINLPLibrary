#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="powerflow2736spr";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x19450,x19451,x19452,x19453,x19454,x19455,x19456,x19457,x19458,x19459,x19460,x19462,x19463,x19464,x19466,x19467,x19468,x19469,x19470,x19471,x19472,x19473,x19474,x19475,x19476,x19477,x19478,x19479,x19480,x19481,x19482,x19483,x19485,x19486,x19491,x19501,x19502,x19514,x19518,x19521,x19522,x19527,x19528,x19541,x19544,x19545,x19546,x19551,x19553,x19554,x19555,x19556,x19557,x19560,x19561,x19564,x19565,x19571,x19572,x19578,x19583,x19584,x19585,x19594,x19595,x19606;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x19450); 
   fscanf(fp,"%f", &x19451); 
   fscanf(fp,"%f", &x19452); 
   fscanf(fp,"%f", &x19453); 
   fscanf(fp,"%f", &x19454); 
   fscanf(fp,"%f", &x19455); 
   fscanf(fp,"%f", &x19456); 
   fscanf(fp,"%f", &x19457); 
   fscanf(fp,"%f", &x19458); 
   fscanf(fp,"%f", &x19459); 
   fscanf(fp,"%f", &x19460); 
   fscanf(fp,"%f", &x19462); 
   fscanf(fp,"%f", &x19463); 
   fscanf(fp,"%f", &x19464); 
   fscanf(fp,"%f", &x19466); 
   fscanf(fp,"%f", &x19467); 
   fscanf(fp,"%f", &x19468); 
   fscanf(fp,"%f", &x19469); 
   fscanf(fp,"%f", &x19470); 
   fscanf(fp,"%f", &x19471); 
   fscanf(fp,"%f", &x19472); 
   fscanf(fp,"%f", &x19473); 
   fscanf(fp,"%f", &x19474); 
   fscanf(fp,"%f", &x19475); 
   fscanf(fp,"%f", &x19476); 
   fscanf(fp,"%f", &x19477); 
   fscanf(fp,"%f", &x19478); 
   fscanf(fp,"%f", &x19479); 
   fscanf(fp,"%f", &x19480); 
   fscanf(fp,"%f", &x19481); 
   fscanf(fp,"%f", &x19482); 
   fscanf(fp,"%f", &x19483); 
   fscanf(fp,"%f", &x19485); 
   fscanf(fp,"%f", &x19486); 
   fscanf(fp,"%f", &x19491); 
   fscanf(fp,"%f", &x19501); 
   fscanf(fp,"%f", &x19502); 
   fscanf(fp,"%f", &x19514); 
   fscanf(fp,"%f", &x19518); 
   fscanf(fp,"%f", &x19521); 
   fscanf(fp,"%f", &x19522); 
   fscanf(fp,"%f", &x19527); 
   fscanf(fp,"%f", &x19528); 
   fscanf(fp,"%f", &x19541); 
   fscanf(fp,"%f", &x19544); 
   fscanf(fp,"%f", &x19545); 
   fscanf(fp,"%f", &x19546); 
   fscanf(fp,"%f", &x19551); 
   fscanf(fp,"%f", &x19553); 
   fscanf(fp,"%f", &x19554); 
   fscanf(fp,"%f", &x19555); 
   fscanf(fp,"%f", &x19556); 
   fscanf(fp,"%f", &x19557); 
   fscanf(fp,"%f", &x19560); 
   fscanf(fp,"%f", &x19561); 
   fscanf(fp,"%f", &x19564); 
   fscanf(fp,"%f", &x19565); 
   fscanf(fp,"%f", &x19571); 
   fscanf(fp,"%f", &x19572); 
   fscanf(fp,"%f", &x19578); 
   fscanf(fp,"%f", &x19583); 
   fscanf(fp,"%f", &x19584); 
   fscanf(fp,"%f", &x19585); 
   fscanf(fp,"%f", &x19594); 
   fscanf(fp,"%f", &x19595); 
   fscanf(fp,"%f", &x19606); 

   fclose(fp);
   res=    7610*x19450 + 7610*x19451 + 7610*x19452 + 7610*x19453 + 10205*x19454
 + 10205*x19455 + 10205*x19456 + 10535*x19457 + 10535*x19458
 + 10535*x19459 + 10535*x19460 + 9531*x19462 + 9531*x19463 + 9003*x19464
 + 9278*x19466 + 9409*x19467 + 9712*x19468 + 9952*x19469 + 9116*x19470
 + 9116*x19471 + 9116*x19472 + x19473 + 9243*x19474 + 9243*x19475
 + 11601*x19476 + 11601*x19477 + 11601*x19478 + 9884*x19479 + 9884*x19480
 + 9884*x19481 + 8922*x19482 + 8922*x19483 + x19485 + x19486 + 7610*x19491
 + 11278*x19501 + 11278*x19502 + 10205*x19514 + 10535*x19518 + x19521
 + 11163*x19522 + 9003*x19527 + 9003*x19528 + 9278*x19541 + 9409*x19544
 + 9409*x19545 + 9278*x19546 + x19551 + 9712*x19553 + 9712*x19554
 + 9712*x19555 + 9952*x19556 + 9952*x19557 + 9116*x19560 + 9116*x19561
 + 9243*x19564 + 9243*x19565 + 11601*x19571 + x19572 + 9642*x19578
 + 9642*x19583 + 9642*x19584 + 9642*x19585 + 8922*x19594 + 8922*x19595
 + 9884*x19606  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
