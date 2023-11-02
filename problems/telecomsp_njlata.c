#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="telecomsp_njlata";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x3865,x3866,x3867,x3868,x3869,x3870,x3871,x3872,x3873,x3874,x3875,x3876,x3877,x3878,x3879,x3880,x3881,x3882,x3883,x3884,x3885,x3886,x3887,x3888,x3889,x3890,x3891,x3892,x3893,x3894,x3895,x3896,x3897,x3898,x3899,x3900,x3901,x3902,x3903,x3904,x3905,x3906,x3907,x3908,x3909,x3910;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x3865); 
   fscanf(fp,"%f", &x3866); 
   fscanf(fp,"%f", &x3867); 
   fscanf(fp,"%f", &x3868); 
   fscanf(fp,"%f", &x3869); 
   fscanf(fp,"%f", &x3870); 
   fscanf(fp,"%f", &x3871); 
   fscanf(fp,"%f", &x3872); 
   fscanf(fp,"%f", &x3873); 
   fscanf(fp,"%f", &x3874); 
   fscanf(fp,"%f", &x3875); 
   fscanf(fp,"%f", &x3876); 
   fscanf(fp,"%f", &x3877); 
   fscanf(fp,"%f", &x3878); 
   fscanf(fp,"%f", &x3879); 
   fscanf(fp,"%f", &x3880); 
   fscanf(fp,"%f", &x3881); 
   fscanf(fp,"%f", &x3882); 
   fscanf(fp,"%f", &x3883); 
   fscanf(fp,"%f", &x3884); 
   fscanf(fp,"%f", &x3885); 
   fscanf(fp,"%f", &x3886); 
   fscanf(fp,"%f", &x3887); 
   fscanf(fp,"%f", &x3888); 
   fscanf(fp,"%f", &x3889); 
   fscanf(fp,"%f", &x3890); 
   fscanf(fp,"%f", &x3891); 
   fscanf(fp,"%f", &x3892); 
   fscanf(fp,"%f", &x3893); 
   fscanf(fp,"%f", &x3894); 
   fscanf(fp,"%f", &x3895); 
   fscanf(fp,"%f", &x3896); 
   fscanf(fp,"%f", &x3897); 
   fscanf(fp,"%f", &x3898); 
   fscanf(fp,"%f", &x3899); 
   fscanf(fp,"%f", &x3900); 
   fscanf(fp,"%f", &x3901); 
   fscanf(fp,"%f", &x3902); 
   fscanf(fp,"%f", &x3903); 
   fscanf(fp,"%f", &x3904); 
   fscanf(fp,"%f", &x3905); 
   fscanf(fp,"%f", &x3906); 
   fscanf(fp,"%f", &x3907); 
   fscanf(fp,"%f", &x3908); 
   fscanf(fp,"%f", &x3909); 
   fscanf(fp,"%f", &x3910); 

   fclose(fp);
   res=    300*x3865 + 920*x3866 + 630*x3867 + 530*x3868 + 530*x3869 + 650*x3870
 + 920*x3871 + 950*x3872 + 350*x3873 + 380*x3874 + 550*x3875 + 600*x3876
 + 250*x3877 + 800*x3878 + 450*x3879 + 500*x3880 + 300*x3881 + 950*x3882
 + 650*x3883 + 630*x3884 + 800*x3885 + 300*x3886 + 430*x3887 + 600*x3888
 + 550*x3889 + 550*x3890 + 920*x3891 + 250*x3892 + 450*x3893 + 430*x3894
 + 350*x3895 + 780*x3896 + 500*x3897 + 520*x3898 + 500*x3899 + 920*x3900
 + 780*x3901 + 300*x3902 + 350*x3903 + 520*x3904 + 750*x3905 + 750*x3906
 + 550*x3907 + 380*x3908 + 350*x3909 + 500*x3910  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
