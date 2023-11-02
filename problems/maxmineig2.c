#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="maxmineig2";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x102,x103,x104,x105,x106,x107,x108,x109,x110,x112,x113,x114,x115,x116,x117,x118,x119,x120,x123,x124,x125,x126,x127,x128,x129,x130,x134,x135,x136,x137,x138,x139,x140,x145,x146,x147,x148,x149,x150,x156,x157,x158,x159,x160,x167,x168,x169,x170,x178,x179,x180,x189,x190,x200;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x102); 
   fscanf(fp,"%f", &x103); 
   fscanf(fp,"%f", &x104); 
   fscanf(fp,"%f", &x105); 
   fscanf(fp,"%f", &x106); 
   fscanf(fp,"%f", &x107); 
   fscanf(fp,"%f", &x108); 
   fscanf(fp,"%f", &x109); 
   fscanf(fp,"%f", &x110); 
   fscanf(fp,"%f", &x112); 
   fscanf(fp,"%f", &x113); 
   fscanf(fp,"%f", &x114); 
   fscanf(fp,"%f", &x115); 
   fscanf(fp,"%f", &x116); 
   fscanf(fp,"%f", &x117); 
   fscanf(fp,"%f", &x118); 
   fscanf(fp,"%f", &x119); 
   fscanf(fp,"%f", &x120); 
   fscanf(fp,"%f", &x123); 
   fscanf(fp,"%f", &x124); 
   fscanf(fp,"%f", &x125); 
   fscanf(fp,"%f", &x126); 
   fscanf(fp,"%f", &x127); 
   fscanf(fp,"%f", &x128); 
   fscanf(fp,"%f", &x129); 
   fscanf(fp,"%f", &x130); 
   fscanf(fp,"%f", &x134); 
   fscanf(fp,"%f", &x135); 
   fscanf(fp,"%f", &x136); 
   fscanf(fp,"%f", &x137); 
   fscanf(fp,"%f", &x138); 
   fscanf(fp,"%f", &x139); 
   fscanf(fp,"%f", &x140); 
   fscanf(fp,"%f", &x145); 
   fscanf(fp,"%f", &x146); 
   fscanf(fp,"%f", &x147); 
   fscanf(fp,"%f", &x148); 
   fscanf(fp,"%f", &x149); 
   fscanf(fp,"%f", &x150); 
   fscanf(fp,"%f", &x156); 
   fscanf(fp,"%f", &x157); 
   fscanf(fp,"%f", &x158); 
   fscanf(fp,"%f", &x159); 
   fscanf(fp,"%f", &x160); 
   fscanf(fp,"%f", &x167); 
   fscanf(fp,"%f", &x168); 
   fscanf(fp,"%f", &x169); 
   fscanf(fp,"%f", &x170); 
   fscanf(fp,"%f", &x178); 
   fscanf(fp,"%f", &x179); 
   fscanf(fp,"%f", &x180); 
   fscanf(fp,"%f", &x189); 
   fscanf(fp,"%f", &x190); 
   fscanf(fp,"%f", &x200); 

   fclose(fp);
   res=-(- 1.08828*x102 - 1.05718*x103 - 0.228192*x104 + 1.30634*x105
   + 0.65168*x106 + 1.260084*x107 + 0.469946*x108 + 0.34633*x109
   - 2.809918*x110 - 3.586448*x112 - 0.972156*x113 + 1.285152*x114
   - 3.645282*x115 - 0.38707*x116 - 1.048474*x117 - 0.627214*x118
   - 3.746396*x119 + 4.027804*x120 - 3.29591*x123 - 4.485358*x124
   + 1.217538*x125 - 0.095654*x126 - 0.943638*x127 + 0.621584*x128
   + 1.716882*x129 + 2.250502*x130 - 1.323736*x134 - 2.264256*x135
   - 0.875896*x136 - 1.144872*x137 + 0.163352*x138 - 0.966758*x139
   - 3.761826*x140 - 1.477326*x145 - 1.132984*x146 + 1.461894*x147
   - 5.21283*x148 + 3.950838*x149 - 1.46395*x150 - 4.341016*x156
   + 1.031632*x157 + 1.94693*x158 - 1.343486*x159 - 1.343322*x160
   - 4.430323*x167 - 0.825328*x168 - 0.150462*x169 - 0.956186*x170
   - 0.964514*x178 + 0.61663*x179 - 4.296174*x180 - 2.642236*x189
   - 3.406506*x190 - 0.266262*x200  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
