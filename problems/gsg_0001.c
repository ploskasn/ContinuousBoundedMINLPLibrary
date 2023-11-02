#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="gsg_0001";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x12,x23,x46,x13,x57,x24,x47,x14,x58,x25,x48,x15,x59,x26,x49,x16,x60,x27,x50,x17,x61,x28,x51,x18,x62,x29,x52,x19,x63,x30,x53,x20,x64,x31,x54,x21,x65,x32,x55,x22,x66,x33,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x60); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x50); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x61); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x62); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x63); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x33); 
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

   fclose(fp);
   res=-(-(15*pow((5* 0.2),(-0.1))*x12 + 130*pow((100* 0.01),(-0.3))*x23 + 30*x12 + 30*x23
   + 0.613913253540759*(15*pow((5*x46),(-0.1))*x13 + 130*pow((100*x57),(-0.3))*x24
   + 30*x13 + 30*x24) + 0.376889482873*(15*pow((5*x47),(-0.1))*x14 + 130*pow((100*
  x58),(-0.3))*x25 + 30*x14 + 30*x25) + 0.231377448655858*(15*pow((5*x48),(-
  0.1))*x15 + 130*pow((100*x59),(-0.3))*x26 + 30*x15 + 30*x26) +
   0.142045682300278*(15*pow((5*x49),(-0.1))*x16 + 130*pow((100*x60),(-0.3))*x27 +
   30*x16 + 30*x27) + 0.0872037269723804*(15*pow((5*x50),(-0.1))*x17 + 130*pow((100
  *x61),(-0.3))*x28 + 30*x17 + 30*x28) + 0.0535355237464941*(15*pow((5*x51),(
  -0.1))*x18 + 130*pow((100*x62),(-0.3))*x29 + 30*x18 + 30*x29) +
   0.0328661675632188*(15*pow((5*x52),(-0.1))*x19 + 130*pow((100*x63),(-0.3))*x30
   + 30*x19 + 30*x30) + 0.0201769758601514*(15*pow((5*x53),(-0.1))*x20 + 130*pow((
  100*x64),(-0.3))*x31 + 30*x20 + 30*x31) + 0.0123869128969189*(15*pow((5*x54)
  ,(-0.1))*x21 + 130*pow((100*x65),(-0.3))*x32 + 30*x21 + 30*x32) +
   0.00760448999787347*(15*pow((5*x55),(-0.1))*x22 + 130*pow((100*x66),(-0.3))*x33
   + 30*x22 + 30*x33)) - 40* 12.735 - 24.5565301416304*x2 - 15.07557931492*x3
   - 9.25509794623431*x4 - 5.6818272920111*x5 - 3.48814907889522*x6
   - 2.14142094985976*x7 - 1.31464670252875*x8 - 0.807079034406055*x9
   - 0.495476515876756*x10 - 0.304179599914939*x11  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
