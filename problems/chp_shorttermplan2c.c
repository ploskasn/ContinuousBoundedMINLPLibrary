#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="chp_shorttermplan2c";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2402,x2403,x2404,x2405,x2406,x2407,x2408,x2409,x2410,x2411,x2412,x2413,x2414,x2415,x2416,x2417,x2418,x2419,x2420,x2421,x2422,x2423,x2424,x2425,x2426,x2427,x2428,x2429,x2430,x2431,x2432,x2433,x2434,x2435,x2436,x2437,x2438,x2439,x2440,x2441,x2442,x2443,x2444,x2445,x2446,x2447,x2448,x2449;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x2402); 
   fscanf(fp,"%f", &x2403); 
   fscanf(fp,"%f", &x2404); 
   fscanf(fp,"%f", &x2405); 
   fscanf(fp,"%f", &x2406); 
   fscanf(fp,"%f", &x2407); 
   fscanf(fp,"%f", &x2408); 
   fscanf(fp,"%f", &x2409); 
   fscanf(fp,"%f", &x2410); 
   fscanf(fp,"%f", &x2411); 
   fscanf(fp,"%f", &x2412); 
   fscanf(fp,"%f", &x2413); 
   fscanf(fp,"%f", &x2414); 
   fscanf(fp,"%f", &x2415); 
   fscanf(fp,"%f", &x2416); 
   fscanf(fp,"%f", &x2417); 
   fscanf(fp,"%f", &x2418); 
   fscanf(fp,"%f", &x2419); 
   fscanf(fp,"%f", &x2420); 
   fscanf(fp,"%f", &x2421); 
   fscanf(fp,"%f", &x2422); 
   fscanf(fp,"%f", &x2423); 
   fscanf(fp,"%f", &x2424); 
   fscanf(fp,"%f", &x2425); 
   fscanf(fp,"%f", &x2426); 
   fscanf(fp,"%f", &x2427); 
   fscanf(fp,"%f", &x2428); 
   fscanf(fp,"%f", &x2429); 
   fscanf(fp,"%f", &x2430); 
   fscanf(fp,"%f", &x2431); 
   fscanf(fp,"%f", &x2432); 
   fscanf(fp,"%f", &x2433); 
   fscanf(fp,"%f", &x2434); 
   fscanf(fp,"%f", &x2435); 
   fscanf(fp,"%f", &x2436); 
   fscanf(fp,"%f", &x2437); 
   fscanf(fp,"%f", &x2438); 
   fscanf(fp,"%f", &x2439); 
   fscanf(fp,"%f", &x2440); 
   fscanf(fp,"%f", &x2441); 
   fscanf(fp,"%f", &x2442); 
   fscanf(fp,"%f", &x2443); 
   fscanf(fp,"%f", &x2444); 
   fscanf(fp,"%f", &x2445); 
   fscanf(fp,"%f", &x2446); 
   fscanf(fp,"%f", &x2447); 
   fscanf(fp,"%f", &x2448); 
   fscanf(fp,"%f", &x2449); 

   fclose(fp);
   res=-( + x2402 + x2403 + x2404 + x2405 + x2406 + x2407 + x2408 + x2409
 + x2410 + x2411 + x2412 + x2413 + x2414 + x2415 + x2416 + x2417 + x2418
 + x2419 + x2420 + x2421 + x2422 + x2423 + x2424 + x2425 + x2426 + x2427
 + x2428 + x2429 + x2430 + x2431 + x2432 + x2433 + x2434 + x2435 + x2436
 + x2437 + x2438 + x2439 + x2440 + x2441 + x2442 + x2443 + x2444 + x2445
 + x2446 + x2447 + x2448 + x2449 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
