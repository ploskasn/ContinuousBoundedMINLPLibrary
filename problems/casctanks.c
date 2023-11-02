#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  

float sqr(float b)
{
   float z;
   z = b*b;
   return(z);
}

int main(int argc, char** argv) { 
   char *problemname="casctanks";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x101,x1,x102,x2,x103,x3,x104,x4,x105,x5,x106,x6,x107,x7,x108,x8,x109,x9,x110,x10,x111,x11,x112,x12,x113,x13,x114,x14,x115,x15,x116,x16,x117,x17,x118,x18,x119,x19,x20,x121,x122,x123,x124,x125,x126,x127,x128,x129,x130,x131,x132,x133,x134,x135,x136,x137,x138,x139,x141,x142,x143,x144,x145,x146,x147,x148,x149,x150,x151,x152,x153,x154,x155,x156,x157,x158,x159;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x101); 
   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x102); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x103); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x104); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x105); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x106); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x107); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x108); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x109); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x110); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x111); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x112); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x113); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x114); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x115); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x116); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x117); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x118); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x119); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x20); 
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
   fscanf(fp,"%f", &x155); 
   fscanf(fp,"%f", &x156); 
   fscanf(fp,"%f", &x157); 
   fscanf(fp,"%f", &x158); 
   fscanf(fp,"%f", &x159); 

   fclose(fp);
   res=-(-(sqr((-0.75) + x101)*x1 + sqr((-0.75) + x102)*x2 + sqr((-0.75) + x103)*
  x3 + sqr((-0.75) + x104)*x4 + sqr((-0.75) + x105)*x5 + sqr((-0.75) +
   x106)*x6 + sqr((-0.75) + x107)*x7 + sqr((-0.75) + x108)*x8 + sqr((-0.75)
   + x109)*x9 + sqr((-0.75) + x110)*x10 + sqr((-0.75) + x111)*x11 + sqr((-
  0.75) + x112)*x12 + sqr((-0.75) + x113)*x13 + sqr((-0.75) + x114)*x14 +
   sqr((-0.75) + x115)*x15 + sqr((-0.75) + x116)*x16 + sqr((-0.75) + x117)*
  x17 + sqr((-0.75) + x118)*x18 + sqr((-0.75) + x119)*x19 + sqr((-0.75) +
    0.75)*x20 + sqr((-0.75) + x121)*x1 + sqr((-0.75) + x122)*x2 + sqr((-0.75
  ) + x123)*x3 + sqr((-0.75) + x124)*x4 + sqr((-0.75) + x125)*x5 + sqr((-
  0.75) + x126)*x6 + sqr((-0.75) + x127)*x7 + sqr((-0.75) + x128)*x8 +
   sqr((-0.75) + x129)*x9 + sqr((-0.75) + x130)*x10 + sqr((-0.75) + x131)*
  x11 + sqr((-0.75) + x132)*x12 + sqr((-0.75) + x133)*x13 + sqr((-0.75) +
   x134)*x14 + sqr((-0.75) + x135)*x15 + sqr((-0.75) + x136)*x16 + sqr((-
  0.75) + x137)*x17 + sqr((-0.75) + x138)*x18 + sqr((-0.75) + x139)*x19 +
   sqr((-0.75) +  0.75)*x20 + sqr((-0.75) + x141)*x1 + sqr((-0.75) + x142)*
  x2 + sqr((-0.75) + x143)*x3 + sqr((-0.75) + x144)*x4 + sqr((-0.75) +
   x145)*x5 + sqr((-0.75) + x146)*x6 + sqr((-0.75) + x147)*x7 + sqr((-0.75)
   + x148)*x8 + sqr((-0.75) + x149)*x9 + sqr((-0.75) + x150)*x10 + sqr((-
  0.75) + x151)*x11 + sqr((-0.75) + x152)*x12 + sqr((-0.75) + x153)*x13 +
   sqr((-0.75) + x154)*x14 + sqr((-0.75) + x155)*x15 + sqr((-0.75) + x156)*
  x16 + sqr((-0.75) + x157)*x17 + sqr((-0.75) + x158)*x18 + sqr((-0.75) +
   x159)*x19 + sqr((-0.75) +  0.75)*x20)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
