#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="lakes";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x20,x19,x31,x22,x21,x33,x24,x23,x35,x26,x25,x37,x28,x27,x39,x32,x43,x34,x45,x36,x47,x38,x49,x40,x51,x44,x55,x46,x57,x48,x59,x50,x61,x52,x63,x56,x67,x58,x69,x60,x71,x62,x73,x64,x75,x68,x79,x70,x81,x72,x83,x74,x85,x76,x87,x80,x82,x84,x86,x88;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x50); 
   fscanf(fp,"%f", &x61); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x63); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x60); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &x62); 
   fscanf(fp,"%f", &x73); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x75); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x79); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x72); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x74); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x80); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x88); 

   fclose(fp);
   res=-( 0.001*((464.504 - x20)*x20 + (405522.144 - x19)*x19 + (405407.292 - x31)*
 x31 + (349.33 - x22)*x22 + (555583.632 - x21)*x21 + (555699.024 - x33)*
 x33 + (361.078 - x24)*x24 + (5273.992 - x23)*x23 + (5276.2 - x35)*x35 + (
 423.116 - x26)*x26 + (119974.047 - x25)*x25 + (119997.18 - x37)*x37 + (
 464.504 - x28)*x28 + (38980.8 - x27)*x27 + (39110.4 - x39)*x39 + (167.578
  - x32)*x32 + (405441.072 - x43)*x43 + (346.51 - x34)*x34 + (555910.576
  - x45)*x45 + (359.834 - x36)*x36 + (5279.788 - x47)*x47 + (421.17 - x38)
 *x38 + (120093.918 - x49)*x49 + (430.508 - x40)*x40 + (39195.2 - x51)*x51
  + (165.832 - x44)*x44 + (405616.728 - x55)*x55 + (347.442 - x46)*x46 + (
 556208.672 - x57)*x57 + (365.352 - x48)*x48 + (5281.812 - x59)*x59 + (
 415.676 - x50)*x50 + (120148.596 - x61)*x61 + (407.71 - x52)*x52 + (
 39305.6 - x63)*x63 + (160.268 - x56)*x56 + (405832.92 - x67)*x67 + (
 357.308 - x58)*x58 + (556449.072 - x69)*x69 + (371.834 - x60)*x60 + (
 5282.916 - x71)*x71 + (412.832 - x62)*x62 + (120182.244 - x73)*x73 + (
 372.616 - x64)*x64 + (39417.6 - x75)*x75 + (130.69 - x68)*x68 + (
 405907.236 - x79)*x79 + (376.02 - x70)*x70 + (556554.848 - x81)*x81 + (
 385.136 - x72)*x72 + (5282.916 - x83)*x83 + (408.6 - x74)*x74 + (
 120165.42 - x85)*x85 + (402.2 - x76)*x76 + (39412.8 - x87)*x87 + (144.01
  - x80)*x80 + (387.666 - x82)*x82 + (393.302 - x84)*x84 + (408.5 - x86)*
 x86 + (482.158 - x88)*x88)  - 734595853.838046);

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
