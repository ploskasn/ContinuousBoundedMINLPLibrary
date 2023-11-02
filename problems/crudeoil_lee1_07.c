#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_lee1_07";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x306,x307,x308,x309,x310,x311,x312,x313,x338,x339,x340,x341,x342,x343,x344,x345,x370,x371,x372,x373,x374,x375,x376,x377,x402,x403,x404,x405,x406,x407,x408,x409,x434,x435,x436,x437,x438,x439,x440,x441,x466,x467,x468,x469,x470,x471,x472,x473,x498,x499,x500,x501,x502,x503,x504,x505;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x306); 
   fscanf(fp,"%f", &x307); 
   fscanf(fp,"%f", &x308); 
   fscanf(fp,"%f", &x309); 
   fscanf(fp,"%f", &x310); 
   fscanf(fp,"%f", &x311); 
   fscanf(fp,"%f", &x312); 
   fscanf(fp,"%f", &x313); 
   fscanf(fp,"%f", &x338); 
   fscanf(fp,"%f", &x339); 
   fscanf(fp,"%f", &x340); 
   fscanf(fp,"%f", &x341); 
   fscanf(fp,"%f", &x342); 
   fscanf(fp,"%f", &x343); 
   fscanf(fp,"%f", &x344); 
   fscanf(fp,"%f", &x345); 
   fscanf(fp,"%f", &x370); 
   fscanf(fp,"%f", &x371); 
   fscanf(fp,"%f", &x372); 
   fscanf(fp,"%f", &x373); 
   fscanf(fp,"%f", &x374); 
   fscanf(fp,"%f", &x375); 
   fscanf(fp,"%f", &x376); 
   fscanf(fp,"%f", &x377); 
   fscanf(fp,"%f", &x402); 
   fscanf(fp,"%f", &x403); 
   fscanf(fp,"%f", &x404); 
   fscanf(fp,"%f", &x405); 
   fscanf(fp,"%f", &x406); 
   fscanf(fp,"%f", &x407); 
   fscanf(fp,"%f", &x408); 
   fscanf(fp,"%f", &x409); 
   fscanf(fp,"%f", &x434); 
   fscanf(fp,"%f", &x435); 
   fscanf(fp,"%f", &x436); 
   fscanf(fp,"%f", &x437); 
   fscanf(fp,"%f", &x438); 
   fscanf(fp,"%f", &x439); 
   fscanf(fp,"%f", &x440); 
   fscanf(fp,"%f", &x441); 
   fscanf(fp,"%f", &x466); 
   fscanf(fp,"%f", &x467); 
   fscanf(fp,"%f", &x468); 
   fscanf(fp,"%f", &x469); 
   fscanf(fp,"%f", &x470); 
   fscanf(fp,"%f", &x471); 
   fscanf(fp,"%f", &x472); 
   fscanf(fp,"%f", &x473); 
   fscanf(fp,"%f", &x498); 
   fscanf(fp,"%f", &x499); 
   fscanf(fp,"%f", &x500); 
   fscanf(fp,"%f", &x501); 
   fscanf(fp,"%f", &x502); 
   fscanf(fp,"%f", &x503); 
   fscanf(fp,"%f", &x504); 
   fscanf(fp,"%f", &x505); 

   fclose(fp);
   res=-( - 0.1*x306 - 0.6*x307 - 0.2*x308 - 0.5*x309 - 0.1*x310
 - 0.6*x311 - 0.2*x312 - 0.5*x313 - 0.1*x338 - 0.6*x339 - 0.2*x340
 - 0.5*x341 - 0.1*x342 - 0.6*x343 - 0.2*x344 - 0.5*x345 - 0.1*x370
 - 0.6*x371 - 0.2*x372 - 0.5*x373 - 0.1*x374 - 0.6*x375 - 0.2*x376
 - 0.5*x377 - 0.1*x402 - 0.6*x403 - 0.2*x404 - 0.5*x405 - 0.1*x406
 - 0.6*x407 - 0.2*x408 - 0.5*x409 - 0.1*x434 - 0.6*x435 - 0.2*x436
 - 0.5*x437 - 0.1*x438 - 0.6*x439 - 0.2*x440 - 0.5*x441 - 0.1*x466
 - 0.6*x467 - 0.2*x468 - 0.5*x469 - 0.1*x470 - 0.6*x471 - 0.2*x472
 - 0.5*x473 - 0.1*x498 - 0.6*x499 - 0.2*x500 - 0.5*x501 - 0.1*x502
 - 0.6*x503 - 0.2*x504 - 0.5*x505 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
