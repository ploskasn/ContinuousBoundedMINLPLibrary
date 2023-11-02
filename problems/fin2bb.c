#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="fin2bb";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x176,x177,x178,x179,x180,x181,x182,x183,x184,x185,x186,x187,x188,x189,x190,x191,x192,x193,x194,x195,x196;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x176); 
   fscanf(fp,"%f", &x177); 
   fscanf(fp,"%f", &x178); 
   fscanf(fp,"%f", &x179); 
   fscanf(fp,"%f", &x180); 
   fscanf(fp,"%f", &x181); 
   fscanf(fp,"%f", &x182); 
   fscanf(fp,"%f", &x183); 
   fscanf(fp,"%f", &x184); 
   fscanf(fp,"%f", &x185); 
   fscanf(fp,"%f", &x186); 
   fscanf(fp,"%f", &x187); 
   fscanf(fp,"%f", &x188); 
   fscanf(fp,"%f", &x189); 
   fscanf(fp,"%f", &x190); 
   fscanf(fp,"%f", &x191); 
   fscanf(fp,"%f", &x192); 
   fscanf(fp,"%f", &x193); 
   fscanf(fp,"%f", &x194); 
   fscanf(fp,"%f", &x195); 
   fscanf(fp,"%f", &x196); 

   fclose(fp);
   res=-(- 12.38095238095*x176 - 12.38095238095*x177 - 12.38095238095*x178
   - 12.38095238095*x179 - 12.38095238095*x180 - 12.38095238095*x181
   - 12.38095238095*x182 - 12.38095238095*x183 - 12.38095238095*x184
   - 12.38095238095*x185 - 12.38095238095*x186 - 12.38095238095*x187
   - 12.38095238095*x188 - 12.38095238095*x189 - 12.38095238095*x190
   - 12.38095238095*x191 - 12.38095238095*x192 - 12.38095238095*x193
   - 12.38095238095*x194 - 12.38095238095*x195 - 12.38095238095*x196
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
