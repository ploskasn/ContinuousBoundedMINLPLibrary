#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="transswitch2736spp";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x22944,x22945,x22946,x22947,x22948,x22949,x22950,x22951,x22952,x22953,x22954,x22956,x22957,x22958,x22960,x22961,x22962,x22963,x22964,x22965,x22966,x22967,x22968,x22969,x22970,x22971,x22972,x22973,x22974,x22975,x22976,x22977,x22979,x22980,x22985,x22995,x22996,x23008,x23012,x23015,x23016,x23021,x23022,x23035,x23038,x23039,x23040,x23045,x23047,x23048,x23049,x23050,x23051,x23054,x23055,x23058,x23059,x23065,x23066,x23072,x23077,x23078,x23079,x23088,x23089,x23100;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x22944); 
   fscanf(fp,"%f", &x22945); 
   fscanf(fp,"%f", &x22946); 
   fscanf(fp,"%f", &x22947); 
   fscanf(fp,"%f", &x22948); 
   fscanf(fp,"%f", &x22949); 
   fscanf(fp,"%f", &x22950); 
   fscanf(fp,"%f", &x22951); 
   fscanf(fp,"%f", &x22952); 
   fscanf(fp,"%f", &x22953); 
   fscanf(fp,"%f", &x22954); 
   fscanf(fp,"%f", &x22956); 
   fscanf(fp,"%f", &x22957); 
   fscanf(fp,"%f", &x22958); 
   fscanf(fp,"%f", &x22960); 
   fscanf(fp,"%f", &x22961); 
   fscanf(fp,"%f", &x22962); 
   fscanf(fp,"%f", &x22963); 
   fscanf(fp,"%f", &x22964); 
   fscanf(fp,"%f", &x22965); 
   fscanf(fp,"%f", &x22966); 
   fscanf(fp,"%f", &x22967); 
   fscanf(fp,"%f", &x22968); 
   fscanf(fp,"%f", &x22969); 
   fscanf(fp,"%f", &x22970); 
   fscanf(fp,"%f", &x22971); 
   fscanf(fp,"%f", &x22972); 
   fscanf(fp,"%f", &x22973); 
   fscanf(fp,"%f", &x22974); 
   fscanf(fp,"%f", &x22975); 
   fscanf(fp,"%f", &x22976); 
   fscanf(fp,"%f", &x22977); 
   fscanf(fp,"%f", &x22979); 
   fscanf(fp,"%f", &x22980); 
   fscanf(fp,"%f", &x22985); 
   fscanf(fp,"%f", &x22995); 
   fscanf(fp,"%f", &x22996); 
   fscanf(fp,"%f", &x23008); 
   fscanf(fp,"%f", &x23012); 
   fscanf(fp,"%f", &x23015); 
   fscanf(fp,"%f", &x23016); 
   fscanf(fp,"%f", &x23021); 
   fscanf(fp,"%f", &x23022); 
   fscanf(fp,"%f", &x23035); 
   fscanf(fp,"%f", &x23038); 
   fscanf(fp,"%f", &x23039); 
   fscanf(fp,"%f", &x23040); 
   fscanf(fp,"%f", &x23045); 
   fscanf(fp,"%f", &x23047); 
   fscanf(fp,"%f", &x23048); 
   fscanf(fp,"%f", &x23049); 
   fscanf(fp,"%f", &x23050); 
   fscanf(fp,"%f", &x23051); 
   fscanf(fp,"%f", &x23054); 
   fscanf(fp,"%f", &x23055); 
   fscanf(fp,"%f", &x23058); 
   fscanf(fp,"%f", &x23059); 
   fscanf(fp,"%f", &x23065); 
   fscanf(fp,"%f", &x23066); 
   fscanf(fp,"%f", &x23072); 
   fscanf(fp,"%f", &x23077); 
   fscanf(fp,"%f", &x23078); 
   fscanf(fp,"%f", &x23079); 
   fscanf(fp,"%f", &x23088); 
   fscanf(fp,"%f", &x23089); 
   fscanf(fp,"%f", &x23100); 

   fclose(fp);
   res=    7610*x22944 + 7610*x22945 + 7610*x22946 + 7610*x22947 + 10205*x22948
 + 10205*x22949 + 10205*x22950 + 10535*x22951 + 10535*x22952
 + 10535*x22953 + 10535*x22954 + 9531*x22956 + 9531*x22957 + 9003*x22958
 + 9278*x22960 + 9409*x22961 + 9712*x22962 + 9952*x22963 + 9116*x22964
 + 9116*x22965 + 9116*x22966 + x22967 + 9243*x22968 + 9243*x22969
 + 11601*x22970 + 11601*x22971 + 11601*x22972 + 9884*x22973 + 9884*x22974
 + 9884*x22975 + 8922*x22976 + 8922*x22977 + x22979 + x22980 + 7610*x22985
 + 11278*x22995 + 11278*x22996 + 10205*x23008 + 10535*x23012 + x23015
 + 11163*x23016 + 9003*x23021 + 9003*x23022 + 9278*x23035 + 9409*x23038
 + 9409*x23039 + 9278*x23040 + x23045 + 9712*x23047 + 9712*x23048
 + 9712*x23049 + 9952*x23050 + 9952*x23051 + 9116*x23054 + 9116*x23055
 + 9243*x23058 + 9243*x23059 + 11601*x23065 + x23066 + 9642*x23072
 + 9642*x23077 + 9642*x23078 + 9642*x23079 + 8922*x23088 + 8922*x23089
 + 9884*x23100  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
