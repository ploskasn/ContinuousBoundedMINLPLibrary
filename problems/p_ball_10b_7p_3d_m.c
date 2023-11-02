#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="p_ball_10b_7p_3d_m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x73,x76,x79,x81,x83,x85,x87,x89,x91,x93,x95,x97,x99,x101,x103,x105,x107,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,x122,x123,x124,x125,x126,x127,x128,x129,x130,x131,x132,x133,x134,x135,x136,x137,x138,x139,x140,x141,x142,x143,x144,x145,x146,x147,x148,x149,x150,x151,x152,x153,x154;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x73); 
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &x79); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x91); 
   fscanf(fp,"%f", &x93); 
   fscanf(fp,"%f", &x95); 
   fscanf(fp,"%f", &x97); 
   fscanf(fp,"%f", &x99); 
   fscanf(fp,"%f", &x101); 
   fscanf(fp,"%f", &x103); 
   fscanf(fp,"%f", &x105); 
   fscanf(fp,"%f", &x107); 
   fscanf(fp,"%f", &x109); 
   fscanf(fp,"%f", &x110); 
   fscanf(fp,"%f", &x111); 
   fscanf(fp,"%f", &x112); 
   fscanf(fp,"%f", &x113); 
   fscanf(fp,"%f", &x114); 
   fscanf(fp,"%f", &x115); 
   fscanf(fp,"%f", &x116); 
   fscanf(fp,"%f", &x117); 
   fscanf(fp,"%f", &x118); 
   fscanf(fp,"%f", &x119); 
   fscanf(fp,"%f", &x120); 
   fscanf(fp,"%f", &x121); 
   fscanf(fp,"%f", &x122); 
   fscanf(fp,"%f", &x123); 
   fscanf(fp,"%f", &x124); 
   fscanf(fp,"%f", &x125); 
   fscanf(fp,"%f", &x126); 
   fscanf(fp,"%f", &x127); 
   fscanf(fp,"%f", &x128); 
   fscanf(fp,"%f", &x129); 
   fscanf(fp,"%f", &x130); 
   fscanf(fp,"%f", &x131); 
   fscanf(fp,"%f", &x132); 
   fscanf(fp,"%f", &x133); 
   fscanf(fp,"%f", &x134); 
   fscanf(fp,"%f", &x135); 
   fscanf(fp,"%f", &x136); 
   fscanf(fp,"%f", &x137); 
   fscanf(fp,"%f", &x138); 
   fscanf(fp,"%f", &x139); 
   fscanf(fp,"%f", &x140); 
   fscanf(fp,"%f", &x141); 
   fscanf(fp,"%f", &x142); 
   fscanf(fp,"%f", &x143); 
   fscanf(fp,"%f", &x144); 
   fscanf(fp,"%f", &x145); 
   fscanf(fp,"%f", &x146); 
   fscanf(fp,"%f", &x147); 
   fscanf(fp,"%f", &x148); 
   fscanf(fp,"%f", &x149); 
   fscanf(fp,"%f", &x150); 
   fscanf(fp,"%f", &x151); 
   fscanf(fp,"%f", &x152); 
   fscanf(fp,"%f", &x153); 
   fscanf(fp,"%f", &x154); 

   fclose(fp);
   res=-(- x73 - x76 - x79 - x81 - x83 - x85 - x87 - x89 - x91 - x93 - x95 - x97
   - x99 - x101 - x103 - x105 - x107 - x109 - x110 - x111 - x112 - x113
   - x114 - x115 - x116 - x117 - x118 - x119 - x120 - x121 - x122 - x123
   - x124 - x125 - x126 - x127 - x128 - x129 - x130 - x131 - x132 - x133
   - x134 - x135 - x136 - x137 - x138 - x139 - x140 - x141 - x142 - x143
   - x144 - x145 - x146 - x147 - x148 - x149 - x150 - x151 - x152 - x153
   - x154  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
