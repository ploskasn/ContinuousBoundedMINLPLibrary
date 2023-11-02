#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="pollut";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x21,x2,x22,x3,x23,x4,x24,x5,x25,x6,x26,x7,x27,x8,x28,x9,x29,x10,x30,x11,x31,x12,x32,x13,x33,x14,x34,x15,x35,x16,x36,x17,x37,x18,x38,x19,x39,x20,x40;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x40); 

   fclose(fp);
   res=-(9.6*pow(x1,0.879)*pow(x21,0.121 )+ 6.353*pow(x2,0.806)*pow(x22,0.194 )+ 9.818*pow(x3,0.796)*pow(
x23,0.204 )+ 7.371*pow(x4,0.819)*pow(x24,0.181 )+ 10.22*pow(x5,0.829)*pow(x25,0.171 )+
 6.255*pow(x6,0.855)*pow(x26,0.145 )+ 8.149*pow(x7,0.696)*pow(x27,0.304 )+ 7.794*pow(x8,0.854)*pow(
x28,0.146 )+ 8.4*pow(x9,0.827)*pow(x29,0.173 )+ 9.933*pow(x10,0.826)*pow(x30,0.174 )+
 11.069*pow(x11,0.833)*pow(x31,0.167 )+ 6.528*pow(x12,0.808)*pow(x32,0.192 )+ 7.928*pow(x13,
0.884)*pow(x33,0.116 )+ 10.559*pow(x14,0.909)*pow(x34,0.091 )+ 6.606*pow(x15,0.773)*pow(x35,
0.227 )+ 7.153*pow(x16,0.792)*pow(x36,0.208 )+ 11.146*pow(x17,0.849)*pow(x37,0.151 )+ 6.884
*pow(x18,0.801)*pow(x38,0.199 )+ 6.66*pow(x19,0.747)*pow(x39,0.253 )+ 7.929*pow(x20,0.818)*pow(x40
,0.182))  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
