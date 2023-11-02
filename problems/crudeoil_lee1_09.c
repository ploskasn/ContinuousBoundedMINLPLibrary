#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_lee1_09";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x386,x387,x388,x389,x390,x391,x392,x393,x418,x419,x420,x421,x422,x423,x424,x425,x450,x451,x452,x453,x454,x455,x456,x457,x482,x483,x484,x485,x486,x487,x488,x489,x514,x515,x516,x517,x518,x519,x520,x521,x546,x547,x548,x549,x550,x551,x552,x553,x578,x579,x580,x581,x582,x583,x584,x585,x610,x611,x612,x613,x614,x615,x616,x617,x642,x643,x644,x645,x646,x647,x648,x649;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x386); 
   fscanf(fp,"%f", &x387); 
   fscanf(fp,"%f", &x388); 
   fscanf(fp,"%f", &x389); 
   fscanf(fp,"%f", &x390); 
   fscanf(fp,"%f", &x391); 
   fscanf(fp,"%f", &x392); 
   fscanf(fp,"%f", &x393); 
   fscanf(fp,"%f", &x418); 
   fscanf(fp,"%f", &x419); 
   fscanf(fp,"%f", &x420); 
   fscanf(fp,"%f", &x421); 
   fscanf(fp,"%f", &x422); 
   fscanf(fp,"%f", &x423); 
   fscanf(fp,"%f", &x424); 
   fscanf(fp,"%f", &x425); 
   fscanf(fp,"%f", &x450); 
   fscanf(fp,"%f", &x451); 
   fscanf(fp,"%f", &x452); 
   fscanf(fp,"%f", &x453); 
   fscanf(fp,"%f", &x454); 
   fscanf(fp,"%f", &x455); 
   fscanf(fp,"%f", &x456); 
   fscanf(fp,"%f", &x457); 
   fscanf(fp,"%f", &x482); 
   fscanf(fp,"%f", &x483); 
   fscanf(fp,"%f", &x484); 
   fscanf(fp,"%f", &x485); 
   fscanf(fp,"%f", &x486); 
   fscanf(fp,"%f", &x487); 
   fscanf(fp,"%f", &x488); 
   fscanf(fp,"%f", &x489); 
   fscanf(fp,"%f", &x514); 
   fscanf(fp,"%f", &x515); 
   fscanf(fp,"%f", &x516); 
   fscanf(fp,"%f", &x517); 
   fscanf(fp,"%f", &x518); 
   fscanf(fp,"%f", &x519); 
   fscanf(fp,"%f", &x520); 
   fscanf(fp,"%f", &x521); 
   fscanf(fp,"%f", &x546); 
   fscanf(fp,"%f", &x547); 
   fscanf(fp,"%f", &x548); 
   fscanf(fp,"%f", &x549); 
   fscanf(fp,"%f", &x550); 
   fscanf(fp,"%f", &x551); 
   fscanf(fp,"%f", &x552); 
   fscanf(fp,"%f", &x553); 
   fscanf(fp,"%f", &x578); 
   fscanf(fp,"%f", &x579); 
   fscanf(fp,"%f", &x580); 
   fscanf(fp,"%f", &x581); 
   fscanf(fp,"%f", &x582); 
   fscanf(fp,"%f", &x583); 
   fscanf(fp,"%f", &x584); 
   fscanf(fp,"%f", &x585); 
   fscanf(fp,"%f", &x610); 
   fscanf(fp,"%f", &x611); 
   fscanf(fp,"%f", &x612); 
   fscanf(fp,"%f", &x613); 
   fscanf(fp,"%f", &x614); 
   fscanf(fp,"%f", &x615); 
   fscanf(fp,"%f", &x616); 
   fscanf(fp,"%f", &x617); 
   fscanf(fp,"%f", &x642); 
   fscanf(fp,"%f", &x643); 
   fscanf(fp,"%f", &x644); 
   fscanf(fp,"%f", &x645); 
   fscanf(fp,"%f", &x646); 
   fscanf(fp,"%f", &x647); 
   fscanf(fp,"%f", &x648); 
   fscanf(fp,"%f", &x649); 

   fclose(fp);
   res=-( - 0.1*x386 - 0.6*x387 - 0.2*x388 - 0.5*x389 - 0.1*x390
 - 0.6*x391 - 0.2*x392 - 0.5*x393 - 0.1*x418 - 0.6*x419 - 0.2*x420
 - 0.5*x421 - 0.1*x422 - 0.6*x423 - 0.2*x424 - 0.5*x425 - 0.1*x450
 - 0.6*x451 - 0.2*x452 - 0.5*x453 - 0.1*x454 - 0.6*x455 - 0.2*x456
 - 0.5*x457 - 0.1*x482 - 0.6*x483 - 0.2*x484 - 0.5*x485 - 0.1*x486
 - 0.6*x487 - 0.2*x488 - 0.5*x489 - 0.1*x514 - 0.6*x515 - 0.2*x516
 - 0.5*x517 - 0.1*x518 - 0.6*x519 - 0.2*x520 - 0.5*x521 - 0.1*x546
 - 0.6*x547 - 0.2*x548 - 0.5*x549 - 0.1*x550 - 0.6*x551 - 0.2*x552
 - 0.5*x553 - 0.1*x578 - 0.6*x579 - 0.2*x580 - 0.5*x581 - 0.1*x582
 - 0.6*x583 - 0.2*x584 - 0.5*x585 - 0.1*x610 - 0.6*x611 - 0.2*x612
 - 0.5*x613 - 0.1*x614 - 0.6*x615 - 0.2*x616 - 0.5*x617 - 0.1*x642
 - 0.6*x643 - 0.2*x644 - 0.5*x645 - 0.1*x646 - 0.6*x647 - 0.2*x648
 - 0.5*x649 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
