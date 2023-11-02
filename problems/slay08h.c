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
   char *problemname="slay08h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x9,x2,x10,x3,x11,x4,x12,x5,x13,x6,x14,x7,x15,x8,x16,x577,x578,x579,x580,x581,x582,x583,x584,x585,x586,x587,x588,x589,x590,x591,x592,x593,x594,x595,x596,x597,x598,x599,x600,x601,x602,x603,x604,x605,x606,x607,x608,x609,x610,x611,x612,x613,x614,x615,x616,x617,x618,x619,x620,x621,x622,x623,x624,x625,x626,x627,x628,x629,x630,x631,x632;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x577); 
   fscanf(fp,"%f", &x578); 
   fscanf(fp,"%f", &x579); 
   fscanf(fp,"%f", &x580); 
   fscanf(fp,"%f", &x581); 
   fscanf(fp,"%f", &x582); 
   fscanf(fp,"%f", &x583); 
   fscanf(fp,"%f", &x584); 
   fscanf(fp,"%f", &x585); 
   fscanf(fp,"%f", &x586); 
   fscanf(fp,"%f", &x587); 
   fscanf(fp,"%f", &x588); 
   fscanf(fp,"%f", &x589); 
   fscanf(fp,"%f", &x590); 
   fscanf(fp,"%f", &x591); 
   fscanf(fp,"%f", &x592); 
   fscanf(fp,"%f", &x593); 
   fscanf(fp,"%f", &x594); 
   fscanf(fp,"%f", &x595); 
   fscanf(fp,"%f", &x596); 
   fscanf(fp,"%f", &x597); 
   fscanf(fp,"%f", &x598); 
   fscanf(fp,"%f", &x599); 
   fscanf(fp,"%f", &x600); 
   fscanf(fp,"%f", &x601); 
   fscanf(fp,"%f", &x602); 
   fscanf(fp,"%f", &x603); 
   fscanf(fp,"%f", &x604); 
   fscanf(fp,"%f", &x605); 
   fscanf(fp,"%f", &x606); 
   fscanf(fp,"%f", &x607); 
   fscanf(fp,"%f", &x608); 
   fscanf(fp,"%f", &x609); 
   fscanf(fp,"%f", &x610); 
   fscanf(fp,"%f", &x611); 
   fscanf(fp,"%f", &x612); 
   fscanf(fp,"%f", &x613); 
   fscanf(fp,"%f", &x614); 
   fscanf(fp,"%f", &x615); 
   fscanf(fp,"%f", &x616); 
   fscanf(fp,"%f", &x617); 
   fscanf(fp,"%f", &x618); 
   fscanf(fp,"%f", &x619); 
   fscanf(fp,"%f", &x620); 
   fscanf(fp,"%f", &x621); 
   fscanf(fp,"%f", &x622); 
   fscanf(fp,"%f", &x623); 
   fscanf(fp,"%f", &x624); 
   fscanf(fp,"%f", &x625); 
   fscanf(fp,"%f", &x626); 
   fscanf(fp,"%f", &x627); 
   fscanf(fp,"%f", &x628); 
   fscanf(fp,"%f", &x629); 
   fscanf(fp,"%f", &x630); 
   fscanf(fp,"%f", &x631); 
   fscanf(fp,"%f", &x632); 

   fclose(fp);
   res=-(-(150*(sqr((-4) + x1) + sqr((-10) + x9)) + 390*(sqr((-10) + x2) + sqr((-15
) + x10)) + 240*(sqr((-7) + x3) + sqr((-9) + x11)) + 70*(sqr((-3) + x4) +
 sqr((-3) + x12)) + 165*(sqr((-20) + x5) + sqr((-17) + x13)) + 100*(sqr((-
18) + x6) + sqr((-8) + x14)) + 200*(sqr((-30) + x7) + sqr((-20) + x15)) +
 400*(sqr((-24) + x8) + sqr((-10) + x16))) - 300*x577 - 240*x578 - 210*x579
 - 140*x580 - 300*x581 - 250*x582 - 300*x583 - 100*x584 - 150*x585
 - 220*x586 - 200*x587 - 300*x588 - 290*x589 - 120*x590 - 300*x591
 - 150*x592 - 150*x593 - 100*x594 - 100*x595 - 120*x596 - 180*x597
 - 220*x598 - 130*x599 - 190*x600 - 110*x601 - 220*x602 - 140*x603
 - 260*x604 - 300*x605 - 240*x606 - 210*x607 - 140*x608 - 300*x609
 - 250*x610 - 300*x611 - 100*x612 - 150*x613 - 220*x614 - 200*x615
 - 300*x616 - 290*x617 - 120*x618 - 300*x619 - 150*x620 - 150*x621
 - 100*x622 - 100*x623 - 120*x624 - 180*x625 - 220*x626 - 130*x627
 - 190*x628 - 110*x629 - 220*x630 - 140*x631 - 260*x632  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
