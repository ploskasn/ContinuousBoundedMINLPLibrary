#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="powerflow2383wpr";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x16311,x16312,x16313,x16314,x16315,x16316,x16317,x16318,x16319,x16320,x16321,x16323,x16324,x16325,x16326,x16327,x16328,x16329,x16330,x16331,x16333,x16334,x16335,x16338,x16339,x16340,x16341,x16342,x16343,x16344,x16345,x16346,x16375,x16402,x16403,x16412,x16421,x16422,x16430,x16437,x16438,x16448,x16449,x16450,x16462,x16463,x16465,x16466,x16467,x16469,x16486,x16487,x16488,x16489,x16497,x16498,x16499,x16506,x16507,x16539,x16540,x16541,x16542,x16554,x16555;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x16311); 
   fscanf(fp,"%f", &x16312); 
   fscanf(fp,"%f", &x16313); 
   fscanf(fp,"%f", &x16314); 
   fscanf(fp,"%f", &x16315); 
   fscanf(fp,"%f", &x16316); 
   fscanf(fp,"%f", &x16317); 
   fscanf(fp,"%f", &x16318); 
   fscanf(fp,"%f", &x16319); 
   fscanf(fp,"%f", &x16320); 
   fscanf(fp,"%f", &x16321); 
   fscanf(fp,"%f", &x16323); 
   fscanf(fp,"%f", &x16324); 
   fscanf(fp,"%f", &x16325); 
   fscanf(fp,"%f", &x16326); 
   fscanf(fp,"%f", &x16327); 
   fscanf(fp,"%f", &x16328); 
   fscanf(fp,"%f", &x16329); 
   fscanf(fp,"%f", &x16330); 
   fscanf(fp,"%f", &x16331); 
   fscanf(fp,"%f", &x16333); 
   fscanf(fp,"%f", &x16334); 
   fscanf(fp,"%f", &x16335); 
   fscanf(fp,"%f", &x16338); 
   fscanf(fp,"%f", &x16339); 
   fscanf(fp,"%f", &x16340); 
   fscanf(fp,"%f", &x16341); 
   fscanf(fp,"%f", &x16342); 
   fscanf(fp,"%f", &x16343); 
   fscanf(fp,"%f", &x16344); 
   fscanf(fp,"%f", &x16345); 
   fscanf(fp,"%f", &x16346); 
   fscanf(fp,"%f", &x16375); 
   fscanf(fp,"%f", &x16402); 
   fscanf(fp,"%f", &x16403); 
   fscanf(fp,"%f", &x16412); 
   fscanf(fp,"%f", &x16421); 
   fscanf(fp,"%f", &x16422); 
   fscanf(fp,"%f", &x16430); 
   fscanf(fp,"%f", &x16437); 
   fscanf(fp,"%f", &x16438); 
   fscanf(fp,"%f", &x16448); 
   fscanf(fp,"%f", &x16449); 
   fscanf(fp,"%f", &x16450); 
   fscanf(fp,"%f", &x16462); 
   fscanf(fp,"%f", &x16463); 
   fscanf(fp,"%f", &x16465); 
   fscanf(fp,"%f", &x16466); 
   fscanf(fp,"%f", &x16467); 
   fscanf(fp,"%f", &x16469); 
   fscanf(fp,"%f", &x16486); 
   fscanf(fp,"%f", &x16487); 
   fscanf(fp,"%f", &x16488); 
   fscanf(fp,"%f", &x16489); 
   fscanf(fp,"%f", &x16497); 
   fscanf(fp,"%f", &x16498); 
   fscanf(fp,"%f", &x16499); 
   fscanf(fp,"%f", &x16506); 
   fscanf(fp,"%f", &x16507); 
   fscanf(fp,"%f", &x16539); 
   fscanf(fp,"%f", &x16540); 
   fscanf(fp,"%f", &x16541); 
   fscanf(fp,"%f", &x16542); 
   fscanf(fp,"%f", &x16554); 
   fscanf(fp,"%f", &x16555); 

   fclose(fp);
   res=    11795*x16311 + 4889*x16312 + 9847*x16313 + 12873*x16314 + 15823*x16315
 + 16562*x16316 + 7122*x16317 + 10225*x16318 + 14783*x16319 + 7537*x16320
 + 8601*x16321 + 6874*x16323 + 8191*x16324 + 8188*x16325 + 5878*x16326
 + 8557*x16327 + 10138*x16328 + 12243*x16329 + 9662*x16330 + 10673*x16331
 + 15194*x16333 + 10751*x16334 + 10353*x16335 + 13648*x16338
 + 15746*x16339 + 8397*x16340 + 17074*x16341 + 8091*x16342 + 14760*x16343
 + 15875*x16344 + 14694*x16345 + 9632*x16346 + 13498*x16375 + 14294*x16402
 + 12822*x16403 + 14173*x16412 + 10082*x16421 + 15190*x16422
 + 11415*x16430 + 8795*x16437 + 13025*x16438 + 14597*x16448 + 13758*x16449
 + 14736*x16450 + 8292*x16462 + 13359*x16463 + 15295*x16465 + 6735*x16466
 + 13493*x16467 + 6132*x16469 + 6140*x16486 + 11499*x16487 + 12264*x16488
 + 11884*x16489 + 14383*x16497 + 6748*x16498 + 8800*x16499 + 12986*x16506
 + 10816*x16507 + 7566*x16539 + 7687*x16540 + 14358*x16541 + 15315*x16542
 + 13178*x16554 + 5388*x16555  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
