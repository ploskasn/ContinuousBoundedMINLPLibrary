#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="telecomsp_pacbell";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2647,x2648,x2649,x2650,x2651,x2652,x2653,x2654,x2655,x2656,x2657,x2658,x2659,x2660,x2661,x2662,x2663,x2664,x2665,x2666,x2667,x2668,x2669,x2670,x2671,x2672,x2673,x2674,x2675,x2676,x2677,x2678,x2679,x2680,x2681,x2682,x2683,x2684,x2685,x2686,x2687,x2688;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x2647); 
   fscanf(fp,"%f", &x2648); 
   fscanf(fp,"%f", &x2649); 
   fscanf(fp,"%f", &x2650); 
   fscanf(fp,"%f", &x2651); 
   fscanf(fp,"%f", &x2652); 
   fscanf(fp,"%f", &x2653); 
   fscanf(fp,"%f", &x2654); 
   fscanf(fp,"%f", &x2655); 
   fscanf(fp,"%f", &x2656); 
   fscanf(fp,"%f", &x2657); 
   fscanf(fp,"%f", &x2658); 
   fscanf(fp,"%f", &x2659); 
   fscanf(fp,"%f", &x2660); 
   fscanf(fp,"%f", &x2661); 
   fscanf(fp,"%f", &x2662); 
   fscanf(fp,"%f", &x2663); 
   fscanf(fp,"%f", &x2664); 
   fscanf(fp,"%f", &x2665); 
   fscanf(fp,"%f", &x2666); 
   fscanf(fp,"%f", &x2667); 
   fscanf(fp,"%f", &x2668); 
   fscanf(fp,"%f", &x2669); 
   fscanf(fp,"%f", &x2670); 
   fscanf(fp,"%f", &x2671); 
   fscanf(fp,"%f", &x2672); 
   fscanf(fp,"%f", &x2673); 
   fscanf(fp,"%f", &x2674); 
   fscanf(fp,"%f", &x2675); 
   fscanf(fp,"%f", &x2676); 
   fscanf(fp,"%f", &x2677); 
   fscanf(fp,"%f", &x2678); 
   fscanf(fp,"%f", &x2679); 
   fscanf(fp,"%f", &x2680); 
   fscanf(fp,"%f", &x2681); 
   fscanf(fp,"%f", &x2682); 
   fscanf(fp,"%f", &x2683); 
   fscanf(fp,"%f", &x2684); 
   fscanf(fp,"%f", &x2685); 
   fscanf(fp,"%f", &x2686); 
   fscanf(fp,"%f", &x2687); 
   fscanf(fp,"%f", &x2688); 

   fclose(fp);
   res=    100*x2647 + 100*x2648 + 300*x2649 + 100*x2650 + 170*x2651 + 300*x2652
 + 130*x2653 + 190*x2654 + 140*x2655 + 90*x2656 + 110*x2657 + 230*x2658
 + 220*x2659 + 120*x2660 + 100*x2661 + 190*x2662 + 90*x2663 + 140*x2664
 + 160*x2665 + 230*x2666 + 150*x2667 + 110*x2668 + 90*x2669 + 110*x2670
 + 250*x2671 + 100*x2672 + 100*x2673 + 100*x2674 + 110*x2675 + 170*x2676
 + 250*x2677 + 100*x2678 + 100*x2679 + 110*x2680 + 120*x2681 + 90*x2682
 + 160*x2683 + 220*x2684 + 130*x2685 + 110*x2686 + 150*x2687 + 100*x2688
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
