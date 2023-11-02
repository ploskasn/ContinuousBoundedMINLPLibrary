#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="telecomsp_nor_sun";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x23869,x23870,x23871,x23872,x23873,x23874,x23875,x23876,x23877,x23878,x23879,x23880,x23881,x23882,x23883,x23884,x23885,x23886,x23887,x23888,x23889,x23890,x23891,x23892,x23893,x23894,x23895,x23896,x23897,x23898,x23899,x23900,x23901,x23902,x23903,x23904,x23905,x23906,x23907,x23908,x23909,x23910,x23911,x23912,x23913,x23914,x23915,x23916,x23917,x23918,x23919,x23920,x23921,x23922,x23923,x23924,x23925,x23926,x23927,x23928,x23929,x23930,x23931,x23932,x23933,x23934,x23935,x23936,x23937,x23938,x23939,x23940,x23941,x23942,x23943,x23944,x23945,x23946,x23947,x23948,x23949,x23950,x23951,x23952,x23953,x23954,x23955,x23956,x23957,x23958,x23959,x23960,x23961,x23962,x23963,x23964,x23965,x23966,x23967,x23968,x23969,x23970;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x23869); 
   fscanf(fp,"%f", &x23870); 
   fscanf(fp,"%f", &x23871); 
   fscanf(fp,"%f", &x23872); 
   fscanf(fp,"%f", &x23873); 
   fscanf(fp,"%f", &x23874); 
   fscanf(fp,"%f", &x23875); 
   fscanf(fp,"%f", &x23876); 
   fscanf(fp,"%f", &x23877); 
   fscanf(fp,"%f", &x23878); 
   fscanf(fp,"%f", &x23879); 
   fscanf(fp,"%f", &x23880); 
   fscanf(fp,"%f", &x23881); 
   fscanf(fp,"%f", &x23882); 
   fscanf(fp,"%f", &x23883); 
   fscanf(fp,"%f", &x23884); 
   fscanf(fp,"%f", &x23885); 
   fscanf(fp,"%f", &x23886); 
   fscanf(fp,"%f", &x23887); 
   fscanf(fp,"%f", &x23888); 
   fscanf(fp,"%f", &x23889); 
   fscanf(fp,"%f", &x23890); 
   fscanf(fp,"%f", &x23891); 
   fscanf(fp,"%f", &x23892); 
   fscanf(fp,"%f", &x23893); 
   fscanf(fp,"%f", &x23894); 
   fscanf(fp,"%f", &x23895); 
   fscanf(fp,"%f", &x23896); 
   fscanf(fp,"%f", &x23897); 
   fscanf(fp,"%f", &x23898); 
   fscanf(fp,"%f", &x23899); 
   fscanf(fp,"%f", &x23900); 
   fscanf(fp,"%f", &x23901); 
   fscanf(fp,"%f", &x23902); 
   fscanf(fp,"%f", &x23903); 
   fscanf(fp,"%f", &x23904); 
   fscanf(fp,"%f", &x23905); 
   fscanf(fp,"%f", &x23906); 
   fscanf(fp,"%f", &x23907); 
   fscanf(fp,"%f", &x23908); 
   fscanf(fp,"%f", &x23909); 
   fscanf(fp,"%f", &x23910); 
   fscanf(fp,"%f", &x23911); 
   fscanf(fp,"%f", &x23912); 
   fscanf(fp,"%f", &x23913); 
   fscanf(fp,"%f", &x23914); 
   fscanf(fp,"%f", &x23915); 
   fscanf(fp,"%f", &x23916); 
   fscanf(fp,"%f", &x23917); 
   fscanf(fp,"%f", &x23918); 
   fscanf(fp,"%f", &x23919); 
   fscanf(fp,"%f", &x23920); 
   fscanf(fp,"%f", &x23921); 
   fscanf(fp,"%f", &x23922); 
   fscanf(fp,"%f", &x23923); 
   fscanf(fp,"%f", &x23924); 
   fscanf(fp,"%f", &x23925); 
   fscanf(fp,"%f", &x23926); 
   fscanf(fp,"%f", &x23927); 
   fscanf(fp,"%f", &x23928); 
   fscanf(fp,"%f", &x23929); 
   fscanf(fp,"%f", &x23930); 
   fscanf(fp,"%f", &x23931); 
   fscanf(fp,"%f", &x23932); 
   fscanf(fp,"%f", &x23933); 
   fscanf(fp,"%f", &x23934); 
   fscanf(fp,"%f", &x23935); 
   fscanf(fp,"%f", &x23936); 
   fscanf(fp,"%f", &x23937); 
   fscanf(fp,"%f", &x23938); 
   fscanf(fp,"%f", &x23939); 
   fscanf(fp,"%f", &x23940); 
   fscanf(fp,"%f", &x23941); 
   fscanf(fp,"%f", &x23942); 
   fscanf(fp,"%f", &x23943); 
   fscanf(fp,"%f", &x23944); 
   fscanf(fp,"%f", &x23945); 
   fscanf(fp,"%f", &x23946); 
   fscanf(fp,"%f", &x23947); 
   fscanf(fp,"%f", &x23948); 
   fscanf(fp,"%f", &x23949); 
   fscanf(fp,"%f", &x23950); 
   fscanf(fp,"%f", &x23951); 
   fscanf(fp,"%f", &x23952); 
   fscanf(fp,"%f", &x23953); 
   fscanf(fp,"%f", &x23954); 
   fscanf(fp,"%f", &x23955); 
   fscanf(fp,"%f", &x23956); 
   fscanf(fp,"%f", &x23957); 
   fscanf(fp,"%f", &x23958); 
   fscanf(fp,"%f", &x23959); 
   fscanf(fp,"%f", &x23960); 
   fscanf(fp,"%f", &x23961); 
   fscanf(fp,"%f", &x23962); 
   fscanf(fp,"%f", &x23963); 
   fscanf(fp,"%f", &x23964); 
   fscanf(fp,"%f", &x23965); 
   fscanf(fp,"%f", &x23966); 
   fscanf(fp,"%f", &x23967); 
   fscanf(fp,"%f", &x23968); 
   fscanf(fp,"%f", &x23969); 
   fscanf(fp,"%f", &x23970); 

   fclose(fp);
   res=    25.6*x23869 + 25.7*x23870 + 17.8*x23871 + 13.2*x23872 + 7.9*x23873
 + 19.3*x23874 + 25.4*x23875 + 17.1*x23876 + 27.1*x23877 + 32.8*x23878
 + 5.8*x23879 + 25.7*x23880 + 13.2*x23881 + 15.1*x23882 + 29.5*x23883
 + 15.1*x23884 + 21.2*x23885 + 14.8*x23886 + 4.9*x23887 + 19.8*x23888
 + 25.3*x23889 + 27.1*x23890 + 29.4*x23891 + 2.4*x23892 + 25.6*x23893
 + 6.9*x23894 + 5.8*x23895 + 20.7*x23896 + 25.4*x23897 + 27.6*x23898
 + 25.4*x23899 + 11*x23900 + 18.3*x23901 + 19.8*x23902 + 10.2*x23903
 + 25.3*x23904 + 38.2*x23905 + 26.2*x23906 + 4.2*x23907 + 7.9*x23908
 + 27.6*x23909 + 6.9*x23910 + 8.1*x23911 + 8.1*x23912 + 32.8*x23913
 + 24.1*x23914 + 17.1*x23915 + 2.4*x23916 + 18.3*x23917 + 33.4*x23918
 + 11*x23919 + 9.8*x23920 + 25.4*x23921 + 16.9*x23922 + 11.5*x23923
 + 15.1*x23924 + 28*x23925 + 20.7*x23926 + 16.3*x23927 + 10.1*x23928
 + 38.2*x23929 + 21.7*x23930 + 25.1*x23931 + 21.7*x23932 + 28*x23933
 + 33.4*x23934 + 4.9*x23935 + 10.1*x23936 + 14.3*x23937 + 21.2*x23938
 + 19.3*x23939 + 29.4*x23940 + 33.6*x23941 + 9.5*x23942 + 10.2*x23943
 + 25.4*x23944 + 45.5*x23945 + 24.1*x23946 + 29.5*x23947 + 11.5*x23948
 + 45.5*x23949 + 9.5*x23950 + 10.5*x23951 + 25.4*x23952 + 17.7*x23953
 + 7.2*x23954 + 4.2*x23955 + 8*x23956 + 33.6*x23957 + 17.8*x23958
 + 10.5*x23959 + 17.7*x23960 + 14.3*x23961 + 16.9*x23962 + 15.1*x23963
 + 14.8*x23964 + 16.3*x23965 + 9.8*x23966 + 25.1*x23967 + 26.2*x23968
 + 7.2*x23969 + 8*x23970  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
