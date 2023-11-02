#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="p_ball_30b_5p_3d_m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x153,x156,x159,x161,x163,x165,x167,x169,x171,x173,x175,x177,x178,x179,x180,x181,x182,x183,x184,x185,x186,x187,x188,x189,x190,x191,x192,x193,x194,x195;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x153); 
   fscanf(fp,"%f", &x156); 
   fscanf(fp,"%f", &x159); 
   fscanf(fp,"%f", &x161); 
   fscanf(fp,"%f", &x163); 
   fscanf(fp,"%f", &x165); 
   fscanf(fp,"%f", &x167); 
   fscanf(fp,"%f", &x169); 
   fscanf(fp,"%f", &x171); 
   fscanf(fp,"%f", &x173); 
   fscanf(fp,"%f", &x175); 
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

   fclose(fp);
   res=-(- x153 - x156 - x159 - x161 - x163 - x165 - x167 - x169 - x171 - x173
   - x175 - x177 - x178 - x179 - x180 - x181 - x182 - x183 - x184 - x185
   - x186 - x187 - x188 - x189 - x190 - x191 - x192 - x193 - x194 - x195
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
