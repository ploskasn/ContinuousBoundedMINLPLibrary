#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_pooling_ct1";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x272,x283,x273,x284,x274,x285,x275,x286,x276,x287,x277,x288,x278,x289,x290,x291,x292,x293,x294,x295,x296,x297,x298,x299,x300,x301,x302,x303,x304,x305,x306,x307,x308,x309,x310,x87,x279,x280,x281,x282;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x272); 
   fscanf(fp,"%f", &x283); 
   fscanf(fp,"%f", &x273); 
   fscanf(fp,"%f", &x284); 
   fscanf(fp,"%f", &x274); 
   fscanf(fp,"%f", &x285); 
   fscanf(fp,"%f", &x275); 
   fscanf(fp,"%f", &x286); 
   fscanf(fp,"%f", &x276); 
   fscanf(fp,"%f", &x287); 
   fscanf(fp,"%f", &x277); 
   fscanf(fp,"%f", &x288); 
   fscanf(fp,"%f", &x278); 
   fscanf(fp,"%f", &x289); 
   fscanf(fp,"%f", &x290); 
   fscanf(fp,"%f", &x291); 
   fscanf(fp,"%f", &x292); 
   fscanf(fp,"%f", &x293); 
   fscanf(fp,"%f", &x294); 
   fscanf(fp,"%f", &x295); 
   fscanf(fp,"%f", &x296); 
   fscanf(fp,"%f", &x297); 
   fscanf(fp,"%f", &x298); 
   fscanf(fp,"%f", &x299); 
   fscanf(fp,"%f", &x300); 
   fscanf(fp,"%f", &x301); 
   fscanf(fp,"%f", &x302); 
   fscanf(fp,"%f", &x303); 
   fscanf(fp,"%f", &x304); 
   fscanf(fp,"%f", &x305); 
   fscanf(fp,"%f", &x306); 
   fscanf(fp,"%f", &x307); 
   fscanf(fp,"%f", &x308); 
   fscanf(fp,"%f", &x309); 
   fscanf(fp,"%f", &x310); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x279); 
   fscanf(fp,"%f", &x280); 
   fscanf(fp,"%f", &x281); 
   fscanf(fp,"%f", &x282); 

   fclose(fp);
   res=-(-(8*x272*x283 + 8*x273*x284 + 8*x274*x285 + 8*x275*x286 + 8*x276*x287 + 8*
x277*x288 + 8*x278*x289 + 8*x272*x290 + 8*x273*x291 + 8*x274*x292 + 8*x275
*x293 + 8*x276*x294 + 8*x277*x295 + 8*x278*x296 + 5*x272*x297 + 5*x273*
x298 + 5*x274*x299 + 5*x275*x300 + 5*x276*x301 + 5*x277*x302 + 5*x278*x303
 + 5*x272*x304 + 5*x273*x305 + 5*x274*x306 + 5*x275*x307 + 5*x276*x308 + 5
*x277*x309 + 5*x278*x310) - 50000*x87 - 5000*x279 - 5000*x280 - 8000*x281
 - 8000*x282  + 50000);

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
