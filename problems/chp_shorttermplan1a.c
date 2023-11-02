#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="chp_shorttermplan1a";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x962,x963,x964,x965,x966,x967,x968,x969,x970,x971,x972,x973,x974,x975,x976,x977,x978,x979,x980,x981,x982,x983,x984,x985,x986,x987,x988,x989,x990,x991,x992,x993,x994,x995,x996,x997,x998,x999,x1000,x1001,x1002,x1003,x1004,x1005,x1006,x1007,x1008,x1009;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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

   fclose(fp);
   res=-( + x962 + x963 + x964 + x965 + x966 + x967 + x968 + x969 + x970
 + x971 + x972 + x973 + x974 + x975 + x976 + x977 + x978 + x979 + x980
 + x981 + x982 + x983 + x984 + x985 + x986 + x987 + x988 + x989 + x990
 + x991 + x992 + x993 + x994 + x995 + x996 + x997 + x998 + x999 + x1000
 + x1001 + x1002 + x1003 + x1004 + x1005 + x1006 + x1007 + x1008 + x1009
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
