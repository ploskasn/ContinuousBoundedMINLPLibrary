#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="portfol_classical050_1";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &x72); 
   fscanf(fp,"%f", &x73); 
   fscanf(fp,"%f", &x74); 
   fscanf(fp,"%f", &x75); 
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &x77); 
   fscanf(fp,"%f", &x78); 
   fscanf(fp,"%f", &x79); 
   fscanf(fp,"%f", &x80); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x90); 
   fscanf(fp,"%f", &x91); 
   fscanf(fp,"%f", &x92); 
   fscanf(fp,"%f", &x93); 
   fscanf(fp,"%f", &x94); 
   fscanf(fp,"%f", &x95); 
   fscanf(fp,"%f", &x96); 
   fscanf(fp,"%f", &x97); 
   fscanf(fp,"%f", &x98); 
   fscanf(fp,"%f", &x99); 
   fscanf(fp,"%f", &x100); 
   fscanf(fp,"%f", &x101); 

   fclose(fp);
   res= - 0.0399775*x52 - 0.0629738*x53 - 0.027838*x54 - 0.00361039*x55
 - 0.0761837*x56 - 0.135299*x57 - 0.0122123*x58 - 0.0399709*x59
 - 0.0256571*x60 - 0.0991766*x61 - 0.0210495*x62 - 0.044223*x63
 - 0.0128715*x64 - 0.00399952*x65 - 0.0501755*x66 - 0.149247*x67
 - 0.0613428*x68 - 0.041802*x69 - 0.0754226*x70 - 0.0434943*x71
 - 0.10135*x72 - 0.15397*x73 - 0.0576577*x74 - 0.0340755*x75
 - 0.0426673*x76 - 0.0298566*x77 - 0.0952893*x78 - 0.169485*x79
 - 0.0440279*x80 - 0.0470473*x81 - 0.00699576*x82 - 0.127417*x83
 - 0.126305*x84 - 0.0486665*x85 - 0.153319*x86 - 0.0202574*x87
 - 0.0272516*x88 - 0.0695536*x89 - 0.030744*x90 - 0.0325349*x91
 - 0.0163484*x92 - 0.0753619*x93 - 0.0271795*x94 - 0.0113752*x95
 - 0.0394797*x96 - 0.123927*x97 - 0.00514876*x98 - 0.0380825*x99
 - 0.142836*x100 - 0.0540865*x101 ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
