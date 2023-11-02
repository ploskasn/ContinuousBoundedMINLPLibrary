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
   char *problemname="slay07h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x8,x2,x9,x3,x10,x4,x11,x5,x12,x6,x13,x7,x14,x435,x436,x437,x438,x439,x440,x441,x442,x443,x444,x445,x446,x447,x448,x449,x450,x451,x452,x453,x454,x455,x456,x457,x458,x459,x460,x461,x462,x463,x464,x465,x466,x467,x468,x469,x470,x471,x472,x473,x474,x475,x476;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x435); 
   fscanf(fp,"%f", &x436); 
   fscanf(fp,"%f", &x437); 
   fscanf(fp,"%f", &x438); 
   fscanf(fp,"%f", &x439); 
   fscanf(fp,"%f", &x440); 
   fscanf(fp,"%f", &x441); 
   fscanf(fp,"%f", &x442); 
   fscanf(fp,"%f", &x443); 
   fscanf(fp,"%f", &x444); 
   fscanf(fp,"%f", &x445); 
   fscanf(fp,"%f", &x446); 
   fscanf(fp,"%f", &x447); 
   fscanf(fp,"%f", &x448); 
   fscanf(fp,"%f", &x449); 
   fscanf(fp,"%f", &x450); 
   fscanf(fp,"%f", &x451); 
   fscanf(fp,"%f", &x452); 
   fscanf(fp,"%f", &x453); 
   fscanf(fp,"%f", &x454); 
   fscanf(fp,"%f", &x455); 
   fscanf(fp,"%f", &x456); 
   fscanf(fp,"%f", &x457); 
   fscanf(fp,"%f", &x458); 
   fscanf(fp,"%f", &x459); 
   fscanf(fp,"%f", &x460); 
   fscanf(fp,"%f", &x461); 
   fscanf(fp,"%f", &x462); 
   fscanf(fp,"%f", &x463); 
   fscanf(fp,"%f", &x464); 
   fscanf(fp,"%f", &x465); 
   fscanf(fp,"%f", &x466); 
   fscanf(fp,"%f", &x467); 
   fscanf(fp,"%f", &x468); 
   fscanf(fp,"%f", &x469); 
   fscanf(fp,"%f", &x470); 
   fscanf(fp,"%f", &x471); 
   fscanf(fp,"%f", &x472); 
   fscanf(fp,"%f", &x473); 
   fscanf(fp,"%f", &x474); 
   fscanf(fp,"%f", &x475); 
   fscanf(fp,"%f", &x476); 

   fclose(fp);
   res=-(-(150*(sqr((-4) + x1) + sqr((-10) + x8)) + 390*(sqr((-10) + x2) + sqr((-15
) + x9)) + 240*(sqr((-7) + x3) + sqr((-9) + x10)) + 70*(sqr((-3) + x4) +
 sqr((-3) + x11)) + 165*(sqr((-20) + x5) + sqr((-17) + x12)) + 100*(sqr((-
18) + x6) + sqr((-8) + x13)) + 200*(sqr((-30) + x7) + sqr((-20) + x14)))
 - 300*x435 - 240*x436 - 210*x437 - 140*x438 - 300*x439 - 250*x440
 - 100*x441 - 150*x442 - 220*x443 - 200*x444 - 300*x445 - 120*x446
 - 300*x447 - 150*x448 - 150*x449 - 100*x450 - 120*x451 - 180*x452
 - 130*x453 - 190*x454 - 220*x455 - 300*x456 - 240*x457 - 210*x458
 - 140*x459 - 300*x460 - 250*x461 - 100*x462 - 150*x463 - 220*x464
 - 200*x465 - 300*x466 - 120*x467 - 300*x468 - 150*x469 - 150*x470
 - 100*x471 - 120*x472 - 180*x473 - 130*x474 - 190*x475 - 220*x476
  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
