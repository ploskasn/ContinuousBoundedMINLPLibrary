#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="gams01";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x15,x16,x17,x18,x19,x20,x21,x22,x23,x24;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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

   fclose(fp);
   res=-(-(4386*exp(-0.620535151326082*x15) + 4442*exp(-0.257528329040651*x16) +
 2367*exp(-0.851060503615542*x17) + 985*exp(-0.306392275145139*x18) + 4329*
exp(-1.82296312561686*x19) + 2890*exp(-0.557390442431207*x20) + 1327*exp(-
1.06341999321647*x21) + 4317*exp(-2.47892587762055*x22) + 4699*exp(-
0.516911238877638*x23) + 3032*exp(-0.296380772427643*x24))  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
