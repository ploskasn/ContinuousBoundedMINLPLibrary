#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_lee1_08";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x346,x347,x348,x349,x350,x351,x352,x353,x378,x379,x380,x381,x382,x383,x384,x385,x410,x411,x412,x413,x414,x415,x416,x417,x442,x443,x444,x445,x446,x447,x448,x449,x474,x475,x476,x477,x478,x479,x480,x481,x506,x507,x508,x509,x510,x511,x512,x513,x538,x539,x540,x541,x542,x543,x544,x545,x570,x571,x572,x573,x574,x575,x576,x577;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x346); 
   fscanf(fp,"%f", &x347); 
   fscanf(fp,"%f", &x348); 
   fscanf(fp,"%f", &x349); 
   fscanf(fp,"%f", &x350); 
   fscanf(fp,"%f", &x351); 
   fscanf(fp,"%f", &x352); 
   fscanf(fp,"%f", &x353); 
   fscanf(fp,"%f", &x378); 
   fscanf(fp,"%f", &x379); 
   fscanf(fp,"%f", &x380); 
   fscanf(fp,"%f", &x381); 
   fscanf(fp,"%f", &x382); 
   fscanf(fp,"%f", &x383); 
   fscanf(fp,"%f", &x384); 
   fscanf(fp,"%f", &x385); 
   fscanf(fp,"%f", &x410); 
   fscanf(fp,"%f", &x411); 
   fscanf(fp,"%f", &x412); 
   fscanf(fp,"%f", &x413); 
   fscanf(fp,"%f", &x414); 
   fscanf(fp,"%f", &x415); 
   fscanf(fp,"%f", &x416); 
   fscanf(fp,"%f", &x417); 
   fscanf(fp,"%f", &x442); 
   fscanf(fp,"%f", &x443); 
   fscanf(fp,"%f", &x444); 
   fscanf(fp,"%f", &x445); 
   fscanf(fp,"%f", &x446); 
   fscanf(fp,"%f", &x447); 
   fscanf(fp,"%f", &x448); 
   fscanf(fp,"%f", &x449); 
   fscanf(fp,"%f", &x474); 
   fscanf(fp,"%f", &x475); 
   fscanf(fp,"%f", &x476); 
   fscanf(fp,"%f", &x477); 
   fscanf(fp,"%f", &x478); 
   fscanf(fp,"%f", &x479); 
   fscanf(fp,"%f", &x480); 
   fscanf(fp,"%f", &x481); 
   fscanf(fp,"%f", &x506); 
   fscanf(fp,"%f", &x507); 
   fscanf(fp,"%f", &x508); 
   fscanf(fp,"%f", &x509); 
   fscanf(fp,"%f", &x510); 
   fscanf(fp,"%f", &x511); 
   fscanf(fp,"%f", &x512); 
   fscanf(fp,"%f", &x513); 
   fscanf(fp,"%f", &x538); 
   fscanf(fp,"%f", &x539); 
   fscanf(fp,"%f", &x540); 
   fscanf(fp,"%f", &x541); 
   fscanf(fp,"%f", &x542); 
   fscanf(fp,"%f", &x543); 
   fscanf(fp,"%f", &x544); 
   fscanf(fp,"%f", &x545); 
   fscanf(fp,"%f", &x570); 
   fscanf(fp,"%f", &x571); 
   fscanf(fp,"%f", &x572); 
   fscanf(fp,"%f", &x573); 
   fscanf(fp,"%f", &x574); 
   fscanf(fp,"%f", &x575); 
   fscanf(fp,"%f", &x576); 
   fscanf(fp,"%f", &x577); 

   fclose(fp);
   res=-( - 0.1*x346 - 0.6*x347 - 0.2*x348 - 0.5*x349 - 0.1*x350
 - 0.6*x351 - 0.2*x352 - 0.5*x353 - 0.1*x378 - 0.6*x379 - 0.2*x380
 - 0.5*x381 - 0.1*x382 - 0.6*x383 - 0.2*x384 - 0.5*x385 - 0.1*x410
 - 0.6*x411 - 0.2*x412 - 0.5*x413 - 0.1*x414 - 0.6*x415 - 0.2*x416
 - 0.5*x417 - 0.1*x442 - 0.6*x443 - 0.2*x444 - 0.5*x445 - 0.1*x446
 - 0.6*x447 - 0.2*x448 - 0.5*x449 - 0.1*x474 - 0.6*x475 - 0.2*x476
 - 0.5*x477 - 0.1*x478 - 0.6*x479 - 0.2*x480 - 0.5*x481 - 0.1*x506
 - 0.6*x507 - 0.2*x508 - 0.5*x509 - 0.1*x510 - 0.6*x511 - 0.2*x512
 - 0.5*x513 - 0.1*x538 - 0.6*x539 - 0.2*x540 - 0.5*x541 - 0.1*x542
 - 0.6*x543 - 0.2*x544 - 0.5*x545 - 0.1*x570 - 0.6*x571 - 0.2*x572
 - 0.5*x573 - 0.1*x574 - 0.6*x575 - 0.2*x576 - 0.5*x577 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
