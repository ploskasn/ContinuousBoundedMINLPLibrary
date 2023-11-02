#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_lee1_06";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x266,x267,x268,x269,x270,x271,x272,x273,x298,x299,x300,x301,x302,x303,x304,x305,x330,x331,x332,x333,x334,x335,x336,x337,x362,x363,x364,x365,x366,x367,x368,x369,x394,x395,x396,x397,x398,x399,x400,x401,x426,x427,x428,x429,x430,x431,x432,x433;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x266); 
   fscanf(fp,"%f", &x267); 
   fscanf(fp,"%f", &x268); 
   fscanf(fp,"%f", &x269); 
   fscanf(fp,"%f", &x270); 
   fscanf(fp,"%f", &x271); 
   fscanf(fp,"%f", &x272); 
   fscanf(fp,"%f", &x273); 
   fscanf(fp,"%f", &x298); 
   fscanf(fp,"%f", &x299); 
   fscanf(fp,"%f", &x300); 
   fscanf(fp,"%f", &x301); 
   fscanf(fp,"%f", &x302); 
   fscanf(fp,"%f", &x303); 
   fscanf(fp,"%f", &x304); 
   fscanf(fp,"%f", &x305); 
   fscanf(fp,"%f", &x330); 
   fscanf(fp,"%f", &x331); 
   fscanf(fp,"%f", &x332); 
   fscanf(fp,"%f", &x333); 
   fscanf(fp,"%f", &x334); 
   fscanf(fp,"%f", &x335); 
   fscanf(fp,"%f", &x336); 
   fscanf(fp,"%f", &x337); 
   fscanf(fp,"%f", &x362); 
   fscanf(fp,"%f", &x363); 
   fscanf(fp,"%f", &x364); 
   fscanf(fp,"%f", &x365); 
   fscanf(fp,"%f", &x366); 
   fscanf(fp,"%f", &x367); 
   fscanf(fp,"%f", &x368); 
   fscanf(fp,"%f", &x369); 
   fscanf(fp,"%f", &x394); 
   fscanf(fp,"%f", &x395); 
   fscanf(fp,"%f", &x396); 
   fscanf(fp,"%f", &x397); 
   fscanf(fp,"%f", &x398); 
   fscanf(fp,"%f", &x399); 
   fscanf(fp,"%f", &x400); 
   fscanf(fp,"%f", &x401); 
   fscanf(fp,"%f", &x426); 
   fscanf(fp,"%f", &x427); 
   fscanf(fp,"%f", &x428); 
   fscanf(fp,"%f", &x429); 
   fscanf(fp,"%f", &x430); 
   fscanf(fp,"%f", &x431); 
   fscanf(fp,"%f", &x432); 
   fscanf(fp,"%f", &x433); 

   fclose(fp);
   res=-( - 0.1*x266 - 0.6*x267 - 0.2*x268 - 0.5*x269 - 0.1*x270
 - 0.6*x271 - 0.2*x272 - 0.5*x273 - 0.1*x298 - 0.6*x299 - 0.2*x300
 - 0.5*x301 - 0.1*x302 - 0.6*x303 - 0.2*x304 - 0.5*x305 - 0.1*x330
 - 0.6*x331 - 0.2*x332 - 0.5*x333 - 0.1*x334 - 0.6*x335 - 0.2*x336
 - 0.5*x337 - 0.1*x362 - 0.6*x363 - 0.2*x364 - 0.5*x365 - 0.1*x366
 - 0.6*x367 - 0.2*x368 - 0.5*x369 - 0.1*x394 - 0.6*x395 - 0.2*x396
 - 0.5*x397 - 0.1*x398 - 0.6*x399 - 0.2*x400 - 0.5*x401 - 0.1*x426
 - 0.6*x427 - 0.2*x428 - 0.5*x429 - 0.1*x430 - 0.6*x431 - 0.2*x432
 - 0.5*x433 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
