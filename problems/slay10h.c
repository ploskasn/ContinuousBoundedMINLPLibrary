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
   char *problemname="slay10h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x11,x2,x12,x3,x13,x4,x14,x5,x15,x6,x16,x7,x17,x8,x18,x9,x19,x10,x20,x921,x922,x923,x924,x925,x926,x927,x928,x929,x930,x931,x932,x933,x934,x935,x936,x937,x938,x939,x940,x941,x942,x943,x944,x945,x946,x947,x948,x949,x950,x951,x952,x953,x954,x955,x956,x957,x958,x959,x960,x961,x962,x963,x964,x965,x966,x967,x968,x969,x970,x971,x972,x973,x974,x975,x976,x977,x978,x979,x980,x981,x982,x983,x984,x985,x986,x987,x988,x989,x990,x991,x992,x993,x994,x995,x996,x997,x998,x999,x1000,x1001,x1002,x1003,x1004,x1005,x1006,x1007,x1008,x1009,x1010;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x921); 
   fscanf(fp,"%f", &x922); 
   fscanf(fp,"%f", &x923); 
   fscanf(fp,"%f", &x924); 
   fscanf(fp,"%f", &x925); 
   fscanf(fp,"%f", &x926); 
   fscanf(fp,"%f", &x927); 
   fscanf(fp,"%f", &x928); 
   fscanf(fp,"%f", &x929); 
   fscanf(fp,"%f", &x930); 
   fscanf(fp,"%f", &x931); 
   fscanf(fp,"%f", &x932); 
   fscanf(fp,"%f", &x933); 
   fscanf(fp,"%f", &x934); 
   fscanf(fp,"%f", &x935); 
   fscanf(fp,"%f", &x936); 
   fscanf(fp,"%f", &x937); 
   fscanf(fp,"%f", &x938); 
   fscanf(fp,"%f", &x939); 
   fscanf(fp,"%f", &x940); 
   fscanf(fp,"%f", &x941); 
   fscanf(fp,"%f", &x942); 
   fscanf(fp,"%f", &x943); 
   fscanf(fp,"%f", &x944); 
   fscanf(fp,"%f", &x945); 
   fscanf(fp,"%f", &x946); 
   fscanf(fp,"%f", &x947); 
   fscanf(fp,"%f", &x948); 
   fscanf(fp,"%f", &x949); 
   fscanf(fp,"%f", &x950); 
   fscanf(fp,"%f", &x951); 
   fscanf(fp,"%f", &x952); 
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
   fscanf(fp,"%f", &x1007); 
   fscanf(fp,"%f", &x1008); 
   fscanf(fp,"%f", &x1009); 
   fscanf(fp,"%f", &x1010); 

   fclose(fp);
   res=-(-(150*(sqr((-4) + x1) + sqr((-10) + x11)) + 390*(sqr((-10) + x2) + sqr((-
15) + x12)) + 240*(sqr((-7) + x3) + sqr((-9) + x13)) + 70*(sqr((-3) + x4)
 + sqr((-3) + x14)) + 165*(sqr((-20) + x5) + sqr((-17) + x15)) + 100*(sqr(
(-18) + x6) + sqr((-8) + x16)) + 200*(sqr((-30) + x7) + sqr((-20) + x17))
 + 400*(sqr((-24) + x8) + sqr((-10) + x18)) + 330*(sqr((-22) + x9) + sqr((
-6) + x19)) + 220*(sqr((-11) + x10) + sqr((-12) + x20))) - 300*x921
 - 240*x922 - 210*x923 - 140*x924 - 300*x925 - 250*x926 - 300*x927
 - 210*x928 - 320*x929 - 100*x930 - 150*x931 - 220*x932 - 200*x933
 - 300*x934 - 290*x935 - 400*x936 - 220*x937 - 120*x938 - 300*x939
 - 150*x940 - 150*x941 - 100*x942 - 290*x943 - 110*x944 - 100*x945
 - 120*x946 - 180*x947 - 220*x948 - 110*x949 - 100*x950 - 130*x951
 - 190*x952 - 110*x953 - 160*x954 - 400*x955 - 220*x956 - 140*x957
 - 120*x958 - 230*x959 - 260*x960 - 220*x961 - 310*x962 - 140*x963
 - 150*x964 - 130*x965 - 300*x966 - 240*x967 - 210*x968 - 140*x969
 - 300*x970 - 250*x971 - 300*x972 - 210*x973 - 320*x974 - 100*x975
 - 150*x976 - 220*x977 - 200*x978 - 300*x979 - 290*x980 - 400*x981
 - 220*x982 - 120*x983 - 300*x984 - 150*x985 - 150*x986 - 100*x987
 - 290*x988 - 110*x989 - 100*x990 - 120*x991 - 180*x992 - 220*x993
 - 110*x994 - 100*x995 - 130*x996 - 190*x997 - 110*x998 - 160*x999
 - 400*x1000 - 220*x1001 - 140*x1002 - 120*x1003 - 230*x1004 - 260*x1005
 - 220*x1006 - 310*x1007 - 140*x1008 - 150*x1009 - 130*x1010 
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
