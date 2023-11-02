#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="p_ball_20b_5p_3d_h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x103,x106,x109,x111,x113,x115,x117,x119,x121,x123,x125,x127,x128,x129,x130,x131,x132,x133,x134,x135,x136,x137,x138,x139,x140,x141,x142,x143,x144,x145;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x103); 
   fscanf(fp,"%f", &x106); 
   fscanf(fp,"%f", &x109); 
   fscanf(fp,"%f", &x111); 
   fscanf(fp,"%f", &x113); 
   fscanf(fp,"%f", &x115); 
   fscanf(fp,"%f", &x117); 
   fscanf(fp,"%f", &x119); 
   fscanf(fp,"%f", &x121); 
   fscanf(fp,"%f", &x123); 
   fscanf(fp,"%f", &x125); 
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

   fclose(fp);
   res=-(- x103 - x106 - x109 - x111 - x113 - x115 - x117 - x119 - x121 - x123
   - x125 - x127 - x128 - x129 - x130 - x131 - x132 - x133 - x134 - x135
   - x136 - x137 - x138 - x139 - x140 - x141 - x142 - x143 - x144 - x145
    );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
