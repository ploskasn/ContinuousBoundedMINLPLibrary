#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  

float sqr(float b)
{
   float z;
   z = b*b;
   return(z);
}

int main(int argc, char** argv) { 
   char *problemname="transswitch0300r";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2641,x2642,x2643,x2644,x2645,x2646,x2647,x2648,x2649,x2650,x2651,x2652,x2653,x2654,x2655,x2656,x2657,x2658,x2659,x2660,x2661,x2662,x2663,x2664,x2665,x2666,x2667,x2668,x2669,x2670,x2671,x2672,x2673,x2674,x2675,x2676,x2677,x2678,x2679,x2680,x2681,x2682,x2683,x2684,x2685,x2686,x2687,x2688,x2689,x2690,x2691,x2692,x2693,x2694,x2695,x2696,x2697,x2698,x2699,x2700,x2701,x2702,x2703,x2704,x2705,x2706,x2707,x2708,x2709;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x2641); 
   fscanf(fp,"%f", &x2642); 
   fscanf(fp,"%f", &x2643); 
   fscanf(fp,"%f", &x2644); 
   fscanf(fp,"%f", &x2645); 
   fscanf(fp,"%f", &x2646); 
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
   fscanf(fp,"%f", &x2689); 
   fscanf(fp,"%f", &x2690); 
   fscanf(fp,"%f", &x2691); 
   fscanf(fp,"%f", &x2692); 
   fscanf(fp,"%f", &x2693); 
   fscanf(fp,"%f", &x2694); 
   fscanf(fp,"%f", &x2695); 
   fscanf(fp,"%f", &x2696); 
   fscanf(fp,"%f", &x2697); 
   fscanf(fp,"%f", &x2698); 
   fscanf(fp,"%f", &x2699); 
   fscanf(fp,"%f", &x2700); 
   fscanf(fp,"%f", &x2701); 
   fscanf(fp,"%f", &x2702); 
   fscanf(fp,"%f", &x2703); 
   fscanf(fp,"%f", &x2704); 
   fscanf(fp,"%f", &x2705); 
   fscanf(fp,"%f", &x2706); 
   fscanf(fp,"%f", &x2707); 
   fscanf(fp,"%f", &x2708); 
   fscanf(fp,"%f", &x2709); 

   fclose(fp);
   res= 100*sqr(x2641) + 4000*x2641 + 100*sqr(x2642) + 4000*x2642 + 100*sqr(x2643)
 + 4000*x2643 + 100*sqr(x2644) + 4000*x2644 + 100*sqr(x2645) + 4000*x2645
 + 266.667*sqr(x2646) + 2000*x2646 + 645.161*sqr(x2647) + 2000*x2647 +
 344.828*sqr(x2648) + 2000*x2648 + 1470.59*sqr(x2649) + 2000*x2649 +
 854.701*sqr(x2650) + 2000*x2650 + 51.8135*sqr(x2651) + 2000*x2651 +
 416.667*sqr(x2652) + 2000*x2652 + 100*sqr(x2653) + 4000*x2653 + 100*sqr(
x2654) + 4000*x2654 + 355.872*sqr(x2655) + 2000*x2655 + 143.678*sqr(x2656)
 + 2000*x2656 + 1190.48*sqr(x2657) + 2000*x2657 + 460.829*sqr(x2658) +
 2000*x2658 + 970.874*sqr(x2659) + 2000*x2659 + 268.817*sqr(x2660) + 2000*
x2660 + 462.963*sqr(x2661) + 2000*x2661 + 100*sqr(x2662) + 4000*x2662 +
 487.805*sqr(x2663) + 2000*x2663 + 100*sqr(x2664) + 4000*x2664 + 438.596*
sqr(x2665) + 2000*x2665 + 1190.48*sqr(x2666) + 2000*x2666 + 500*sqr(x2667)
 + 2000*x2667 + 83.3333*sqr(x2668) + 2000*x2668 + 83.3333*sqr(x2669) +
 2000*x2669 + 210.526*sqr(x2670) + 2000*x2670 + 50.6842*sqr(x2671) + 2000*
x2671 + 235.849*sqr(x2672) + 2000*x2672 + 367.647*sqr(x2673) + 2000*x2673
 + 1000*sqr(x2674) + 2000*x2674 + 222.222*sqr(x2675) + 2000*x2675 + 400*
sqr(x2676) + 2000*x2676 + 330.033*sqr(x2677) + 2000*x2677 + 289.855*sqr(
x2678) + 2000*x2678 + 333.333*sqr(x2679) + 2000*x2679 + 166.667*sqr(x2680)
 + 2000*x2680 + 400*sqr(x2681) + 2000*x2681 + 181.818*sqr(x2682) + 2000*
x2682 + 173.783*sqr(x2683) + 2000*x2683 + 588.235*sqr(x2684) + 2000*x2684
 + 1190.48*sqr(x2685) + 2000*x2685 + 214.133*sqr(x2686) + 2000*x2686 +
 160.514*sqr(x2687) + 2000*x2687 + 82.6446*sqr(x2688) + 2000*x2688 + 427.35
*sqr(x2689) + 2000*x2689 + 268.817*sqr(x2690) + 2000*x2690 + 303.03*sqr(
x2691) + 2000*x2691 + 540.541*sqr(x2692) + 2000*x2692 + 243.902*sqr(x2693)
 + 2000*x2693 + 200*sqr(x2694) + 2000*x2694 + 2702.7*sqr(x2695) + 2000*
x2695 + 100*sqr(x2696) + 4000*x2696 + 2222.22*sqr(x2697) + 2000*x2697 +
 606.061*sqr(x2698) + 2000*x2698 + 250*sqr(x2699) + 2000*x2699 + 250*sqr(
x2700) + 2000*x2700 + 862.069*sqr(x2701) + 2000*x2701 + 77.3994*sqr(x2702)
 + 2000*x2702 + 142.857*sqr(x2703) + 2000*x2703 + 180.832*sqr(x2704) +
 2000*x2704 + 100*sqr(x2705) + 4000*x2705 + 100*sqr(x2706) + 4000*x2706 +
 100*sqr(x2707) + 4000*x2707 + 2000*sqr(x2708) + 2000*x2708 + 12500*sqr(
x2709) + 2000*x2709  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
