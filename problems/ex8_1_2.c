#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ex8_1_2";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 

   fclose(fp);
   res=-(-(588600/pow(10.8095222429746 - 4.21478541710781*cos((-2.09439333333333)
 + x1),6) - 1079.1/pow(10.8095222429746 - 4.21478541710781*cos((-
2.09439333333333) + x1),3) + 600800/pow(10.8095222429746 -
 4.21478541710781*cos(x1),6) - 1071.5/pow(10.8095222429746 -
 4.21478541710781*cos(x1),3) + 481300/pow(10.8095222429746 -
 4.21478541710781*cos(2.09439333333333 + x1),6) - 1064.6/pow(
10.8095222429746 - 4.21478541710781*cos(2.09439333333333 + x1),3))
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
