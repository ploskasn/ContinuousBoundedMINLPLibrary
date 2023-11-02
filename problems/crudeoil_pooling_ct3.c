#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_pooling_ct3";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x675,x688,x676,x689,x677,x690,x678,x691,x679,x692,x680,x693,x681,x694,x695,x696,x697,x698,x699,x700,x701,x702,x703,x704,x705,x706,x707,x708,x709,x710,x711,x712,x713,x714,x715,x716,x717,x718,x719,x720,x721,x722,x723,x724,x725,x726,x727,x728,x729,x141,x142,x682,x683,x684,x685,x686,x687;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x675); 
   fscanf(fp,"%f", &x688); 
   fscanf(fp,"%f", &x676); 
   fscanf(fp,"%f", &x689); 
   fscanf(fp,"%f", &x677); 
   fscanf(fp,"%f", &x690); 
   fscanf(fp,"%f", &x678); 
   fscanf(fp,"%f", &x691); 
   fscanf(fp,"%f", &x679); 
   fscanf(fp,"%f", &x692); 
   fscanf(fp,"%f", &x680); 
   fscanf(fp,"%f", &x693); 
   fscanf(fp,"%f", &x681); 
   fscanf(fp,"%f", &x694); 
   fscanf(fp,"%f", &x695); 
   fscanf(fp,"%f", &x696); 
   fscanf(fp,"%f", &x697); 
   fscanf(fp,"%f", &x698); 
   fscanf(fp,"%f", &x699); 
   fscanf(fp,"%f", &x700); 
   fscanf(fp,"%f", &x701); 
   fscanf(fp,"%f", &x702); 
   fscanf(fp,"%f", &x703); 
   fscanf(fp,"%f", &x704); 
   fscanf(fp,"%f", &x705); 
   fscanf(fp,"%f", &x706); 
   fscanf(fp,"%f", &x707); 
   fscanf(fp,"%f", &x708); 
   fscanf(fp,"%f", &x709); 
   fscanf(fp,"%f", &x710); 
   fscanf(fp,"%f", &x711); 
   fscanf(fp,"%f", &x712); 
   fscanf(fp,"%f", &x713); 
   fscanf(fp,"%f", &x714); 
   fscanf(fp,"%f", &x715); 
   fscanf(fp,"%f", &x716); 
   fscanf(fp,"%f", &x717); 
   fscanf(fp,"%f", &x718); 
   fscanf(fp,"%f", &x719); 
   fscanf(fp,"%f", &x720); 
   fscanf(fp,"%f", &x721); 
   fscanf(fp,"%f", &x722); 
   fscanf(fp,"%f", &x723); 
   fscanf(fp,"%f", &x724); 
   fscanf(fp,"%f", &x725); 
   fscanf(fp,"%f", &x726); 
   fscanf(fp,"%f", &x727); 
   fscanf(fp,"%f", &x728); 
   fscanf(fp,"%f", &x729); 
   fscanf(fp,"%f", &x141); 
   fscanf(fp,"%f", &x142); 
   fscanf(fp,"%f", &x682); 
   fscanf(fp,"%f", &x683); 
   fscanf(fp,"%f", &x684); 
   fscanf(fp,"%f", &x685); 
   fscanf(fp,"%f", &x686); 
   fscanf(fp,"%f", &x687); 

   fclose(fp);
   res=-(-(4*x675*x688 + 4*x676*x689 + 4*x677*x690 + 4*x678*x691 + 4*x679*x692 + 4*
x680*x693 + 4*x681*x694 + 4*x675*x695 + 4*x676*x696 + 4*x677*x697 + 4*x678
*x698 + 4*x679*x699 + 4*x680*x700 + 4*x681*x701 + 4*x675*x702 + 4*x676*
x703 + 4*x677*x704 + 4*x678*x705 + 4*x679*x706 + 4*x680*x707 + 4*x681*x708
 + 8*x675*x709 + 8*x676*x710 + 8*x677*x711 + 8*x678*x712 + 8*x679*x713 + 8
*x680*x714 + 8*x681*x715 + 8*x675*x716 + 8*x676*x717 + 8*x677*x718 + 8*
x678*x719 + 8*x679*x720 + 8*x680*x721 + 8*x681*x722 + 8*x675*x723 + 8*x676
*x724 + 8*x677*x725 + 8*x678*x726 + 8*x679*x727 + 8*x680*x728 + 8*x681*
x729) - 50000*x141 - 50000*x142 - 5000*x682 - 5000*x683 - 5000*x684
 - 10000*x685 - 10000*x686 - 10000*x687  + 100000);

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
