#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ex8_2_4b";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x50); 
   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x54); 

   fclose(fp);
   res=-(-0.3*(10*exp(0.6*x2) + 10*exp(0.6*x3) + 10*exp(0.6*x4)) 
 + 1.54711033913716E-6*x5 + 0.000219040316990534*x6
 + 0.00264813118267794*x7 + 0.000219040316990534*x8
 + 1.54711033913716E-6*x9 + 0.000219040316990533*x10
 + 0.0310117896917886*x11 + 0.374923157717238*x12 + 0.0310117896917886*x13
 + 0.000219040316990532*x14 + 0.00264813118267793*x15
 + 0.374923157717237*x16 + 4.5327075795914*x17 + 0.374923157717237*x18
 + 0.00264813118267791*x19 + 0.000219040316990532*x20
 + 0.0310117896917884*x21 + 0.374923157717236*x22 + 0.0310117896917884*x23
 + 0.000219040316990531*x24 + 1.54711033913713E-6*x25
 + 0.000219040316990529*x26 + 0.00264813118267789*x27
 + 0.000219040316990529*x28 + 1.54711033913712E-6*x29
 + 1.9690495225382E-6*x30 + 0.000278778585260679*x31
 + 0.00337034877795374*x32 + 0.000278778585260679*x33
 + 1.9690495225382E-6*x34 + 0.000278778585260679*x35
 + 0.0394695505168218*x36 + 0.477174928003758*x37 + 0.0394695505168218*x38
 + 0.000278778585260677*x39 + 0.00337034877795372*x40
 + 0.477174928003756*x41 + 5.7689005558436*x42 + 0.477174928003756*x43
 + 0.00337034877795371*x44 + 0.000278778585260677*x45
 + 0.0394695505168216*x46 + 0.477174928003755*x47 + 0.0394695505168216*x48
 + 0.000278778585260676*x49 + 1.96904952253816E-6*x50
 + 0.000278778585260674*x51 + 0.00337034877795367*x52
 + 0.000278778585260674*x53 + 1.96904952253816E-6*x54 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
