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
   char *problemname="powerflow0118p";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x953,x954,x955,x956,x957,x958,x959,x960,x961,x962,x963,x964,x965,x966,x967,x968,x969,x970,x971,x972,x973,x974,x975,x976,x977,x978,x979,x980,x981,x982,x983,x984,x985,x986,x987,x988,x989,x990,x991,x992,x993,x994,x995,x996,x997,x998,x999,x1000,x1001,x1002,x1003,x1004,x1005,x1006;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x953); 
   fscanf(fp,"%f", &x954); 
   fscanf(fp,"%f", &x955); 
   fscanf(fp,"%f", &x956); 
   fscanf(fp,"%f", &x957); 
   fscanf(fp,"%f", &x958); 
   fscanf(fp,"%f", &x959); 
   fscanf(fp,"%f", &x960); 
   fscanf(fp,"%f", &x961); 
   fscanf(fp,"%f", &x962); 
   fscanf(fp,"%f", &x963); 
   fscanf(fp,"%f", &x964); 
   fscanf(fp,"%f", &x965); 
   fscanf(fp,"%f", &x966); 
   fscanf(fp,"%f", &x967); 
   fscanf(fp,"%f", &x968); 
   fscanf(fp,"%f", &x969); 
   fscanf(fp,"%f", &x970); 
   fscanf(fp,"%f", &x971); 
   fscanf(fp,"%f", &x972); 
   fscanf(fp,"%f", &x973); 
   fscanf(fp,"%f", &x974); 
   fscanf(fp,"%f", &x975); 
   fscanf(fp,"%f", &x976); 
   fscanf(fp,"%f", &x977); 
   fscanf(fp,"%f", &x978); 
   fscanf(fp,"%f", &x979); 
   fscanf(fp,"%f", &x980); 
   fscanf(fp,"%f", &x981); 
   fscanf(fp,"%f", &x982); 
   fscanf(fp,"%f", &x983); 
   fscanf(fp,"%f", &x984); 
   fscanf(fp,"%f", &x985); 
   fscanf(fp,"%f", &x986); 
   fscanf(fp,"%f", &x987); 
   fscanf(fp,"%f", &x988); 
   fscanf(fp,"%f", &x989); 
   fscanf(fp,"%f", &x990); 
   fscanf(fp,"%f", &x991); 
   fscanf(fp,"%f", &x992); 
   fscanf(fp,"%f", &x993); 
   fscanf(fp,"%f", &x994); 
   fscanf(fp,"%f", &x995); 
   fscanf(fp,"%f", &x996); 
   fscanf(fp,"%f", &x997); 
   fscanf(fp,"%f", &x998); 
   fscanf(fp,"%f", &x999); 
   fscanf(fp,"%f", &x1000); 
   fscanf(fp,"%f", &x1001); 
   fscanf(fp,"%f", &x1002); 
   fscanf(fp,"%f", &x1003); 
   fscanf(fp,"%f", &x1004); 
   fscanf(fp,"%f", &x1005); 
   fscanf(fp,"%f", &x1006); 

   fclose(fp);
   res= 100*sqr(x953) + 4000*x953 + 100*sqr(x954) + 4000*x954 + 100*sqr(x955) +
 4000*x955 + 100*sqr(x956) + 4000*x956 + 222.222*sqr(x957) + 2000*x957 +
 1176.47*sqr(x958) + 2000*x958 + 100*sqr(x959) + 4000*x959 + 100*sqr(x960)
 + 4000*x960 + 100*sqr(x961) + 4000*x961 + 100*sqr(x962) + 4000*x962 +
 454.545*sqr(x963) + 2000*x963 + 318.471*sqr(x964) + 2000*x964 + 100*sqr(
x965) + 4000*x965 + 14285.7*sqr(x966) + 2000*x966 + 100*sqr(x967) + 4000*
x967 + 100*sqr(x968) + 4000*x968 + 100*sqr(x969) + 4000*x969 + 100*sqr(
x970) + 4000*x970 + 100*sqr(x971) + 4000*x971 + 5263.16*sqr(x972) + 2000*
x972 + 490.196*sqr(x973) + 2000*x973 + 2083.33*sqr(x974) + 2000*x974 + 100
*sqr(x975) + 4000*x975 + 100*sqr(x976) + 4000*x976 + 645.161*sqr(x977) +
 2000*x977 + 625*sqr(x978) + 2000*x978 + 100*sqr(x979) + 4000*x979 +
 255.754*sqr(x980) + 2000*x980 + 255.102*sqr(x981) + 2000*x981 + 193.648*
sqr(x982) + 2000*x982 + 100*sqr(x983) + 4000*x983 + 100*sqr(x984) + 4000*
x984 + 100*sqr(x985) + 4000*x985 + 100*sqr(x986) + 4000*x986 + 100*sqr(
x987) + 4000*x987 + 100*sqr(x988) + 4000*x988 + 209.644*sqr(x989) + 2000*
x989 + 100*sqr(x990) + 4000*x990 + 25000*sqr(x991) + 2000*x991 + 164.745*
sqr(x992) + 2000*x992 + 100*sqr(x993) + 4000*x993 + 100*sqr(x994) + 4000*
x994 + 100*sqr(x995) + 4000*x995 + 100*sqr(x996) + 4000*x996 + 396.825*
sqr(x997) + 2000*x997 + 2500*sqr(x998) + 2000*x998 + 100*sqr(x999) + 4000*
x999 + 100*sqr(x1000) + 4000*x1000 + 100*sqr(x1001) + 4000*x1001 + 100*
sqr(x1002) + 4000*x1002 + 2777.78*sqr(x1003) + 2000*x1003 + 100*sqr(x1004)
 + 4000*x1004 + 100*sqr(x1005) + 4000*x1005 + 100*sqr(x1006) + 4000*x1006
  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
