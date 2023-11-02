#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="pindyck";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x101); 
   fscanf(fp,"%f", &x102); 
   fscanf(fp,"%f", &x103); 
   fscanf(fp,"%f", &x104); 
   fscanf(fp,"%f", &x105); 
   fscanf(fp,"%f", &x106); 
   fscanf(fp,"%f", &x107); 
   fscanf(fp,"%f", &x108); 
   fscanf(fp,"%f", &x109); 
   fscanf(fp,"%f", &x110); 
   fscanf(fp,"%f", &x111); 
   fscanf(fp,"%f", &x112); 
   fscanf(fp,"%f", &x113); 
   fscanf(fp,"%f", &x114); 
   fscanf(fp,"%f", &x115); 
   fscanf(fp,"%f", &x116); 

   fclose(fp);
   res=- x101 - 0.952380952380952*x102 - 0.90702947845805*x103
  - 0.863837598531476*x104 - 0.822702474791882*x105
  - 0.783526166468459*x106 - 0.746215396636628*x107
  - 0.710681330130121*x108 - 0.676839362028687*x109
  - 0.644608916217797*x110 - 0.613913253540759*x111
  - 0.584679289086437*x112 - 0.556837418177559*x113
  - 0.530321350645295*x114 - 0.505067952995519*x115
  - 0.48101709809097*x116  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
