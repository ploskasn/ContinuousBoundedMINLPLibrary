#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sepasequ_complex";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x348,x349,x350,x351,x352,x353,x354,x355,x356,x357,x358,x359,x360,x361,x362,x363,x364,x365,x366,x367,x368,x369,x370,x371,x372,x373,x374,x375,x376,x377,x448,x459,x460,x461,x462,x463,x464,x465,x466,x467,x468,x469,x470,x471,x472,x473;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x60); 
   fscanf(fp,"%f", &x61); 
   fscanf(fp,"%f", &x62); 
   fscanf(fp,"%f", &x63); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x348); 
   fscanf(fp,"%f", &x349); 
   fscanf(fp,"%f", &x350); 
   fscanf(fp,"%f", &x351); 
   fscanf(fp,"%f", &x352); 
   fscanf(fp,"%f", &x353); 
   fscanf(fp,"%f", &x354); 
   fscanf(fp,"%f", &x355); 
   fscanf(fp,"%f", &x356); 
   fscanf(fp,"%f", &x357); 
   fscanf(fp,"%f", &x358); 
   fscanf(fp,"%f", &x359); 
   fscanf(fp,"%f", &x360); 
   fscanf(fp,"%f", &x361); 
   fscanf(fp,"%f", &x362); 
   fscanf(fp,"%f", &x363); 
   fscanf(fp,"%f", &x364); 
   fscanf(fp,"%f", &x365); 
   fscanf(fp,"%f", &x366); 
   fscanf(fp,"%f", &x367); 
   fscanf(fp,"%f", &x368); 
   fscanf(fp,"%f", &x369); 
   fscanf(fp,"%f", &x370); 
   fscanf(fp,"%f", &x371); 
   fscanf(fp,"%f", &x372); 
   fscanf(fp,"%f", &x373); 
   fscanf(fp,"%f", &x374); 
   fscanf(fp,"%f", &x375); 
   fscanf(fp,"%f", &x376); 
   fscanf(fp,"%f", &x377); 
   fscanf(fp,"%f", &x448); 
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

   fclose(fp);
   res=-(- 1.5*x51 - 1.5*x52 - 1.5*x53 - 1.5*x54 - 1.5*x55 - 1.5*x56 - 1.5*x57
   - 1.5*x58 - 1.5*x59 - 1.5*x60 - 1.5*x61 - 1.5*x62 - 1.5*x63 - 1.5*x64
   - 1.5*x65  - 81.44*x348 - 81.44*x349 - 81.44*x350 - 81.44*x351
   - 81.44*x352 - 81.44*x353 - 81.44*x354 - 81.44*x355 - 81.44*x356
   - 81.44*x357 - 81.44*x358 - 81.44*x359 - 81.44*x360 - 81.44*x361
   - 81.44*x362 - 3.04*x363 - 3.04*x364 - 3.04*x365 - 3.04*x366
   - 3.04*x367 - 3.04*x368 - 3.04*x369 - 3.04*x370 - 3.04*x371 - 3.04*x372
   - 3.04*x373 - 3.04*x374 - 3.04*x375 - 3.04*x376 - 3.04*x377 - x448
   - x459 - x460 - x461 - x462 - x463 - x464 - x465 - x466 - x467 - x468
   - x469 - x470 - x471 - x472 - x473 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
