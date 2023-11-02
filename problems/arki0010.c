#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="arki0010";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x3259,x3260,x3261,x3262,x3263,x3264,x3265,x3266,x3267,x3268,x3269,x3270,x3271,x3272,x3273,x3274,x3275,x3276,x3277,x3278,x3279,x3280,x3281,x3282,x3283,x3284,x3285,x3286,x3287,x3288,x3289,x3290,x3291,x3292,x3293,x3294,x3295,x3296,x3297,x3298,x3299,x3300,x3301,x3302,x3303;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x3259); 
   fscanf(fp,"%f", &x3260); 
   fscanf(fp,"%f", &x3261); 
   fscanf(fp,"%f", &x3262); 
   fscanf(fp,"%f", &x3263); 
   fscanf(fp,"%f", &x3264); 
   fscanf(fp,"%f", &x3265); 
   fscanf(fp,"%f", &x3266); 
   fscanf(fp,"%f", &x3267); 
   fscanf(fp,"%f", &x3268); 
   fscanf(fp,"%f", &x3269); 
   fscanf(fp,"%f", &x3270); 
   fscanf(fp,"%f", &x3271); 
   fscanf(fp,"%f", &x3272); 
   fscanf(fp,"%f", &x3273); 
   fscanf(fp,"%f", &x3274); 
   fscanf(fp,"%f", &x3275); 
   fscanf(fp,"%f", &x3276); 
   fscanf(fp,"%f", &x3277); 
   fscanf(fp,"%f", &x3278); 
   fscanf(fp,"%f", &x3279); 
   fscanf(fp,"%f", &x3280); 
   fscanf(fp,"%f", &x3281); 
   fscanf(fp,"%f", &x3282); 
   fscanf(fp,"%f", &x3283); 
   fscanf(fp,"%f", &x3284); 
   fscanf(fp,"%f", &x3285); 
   fscanf(fp,"%f", &x3286); 
   fscanf(fp,"%f", &x3287); 
   fscanf(fp,"%f", &x3288); 
   fscanf(fp,"%f", &x3289); 
   fscanf(fp,"%f", &x3290); 
   fscanf(fp,"%f", &x3291); 
   fscanf(fp,"%f", &x3292); 
   fscanf(fp,"%f", &x3293); 
   fscanf(fp,"%f", &x3294); 
   fscanf(fp,"%f", &x3295); 
   fscanf(fp,"%f", &x3296); 
   fscanf(fp,"%f", &x3297); 
   fscanf(fp,"%f", &x3298); 
   fscanf(fp,"%f", &x3299); 
   fscanf(fp,"%f", &x3300); 
   fscanf(fp,"%f", &x3301); 
   fscanf(fp,"%f", &x3302); 
   fscanf(fp,"%f", &x3303); 

   fclose(fp);
   res=-100000*(0.248134991119005*(0.348130199698097*log(x3259) +
 0.256719608558126*log(x3260) + 0.180629350360951*log(x3261) +
 0.126455629442214*log(x3262) + 0.0880652119406117*log(x3263)) +
 0.307637655417407*(0.353185023957731*log(x3264) + 0.260447157924394*log(
x3265) + 0.179312384757651*log(x3266) + 0.123008158463526*log(x3267) +
 0.0840472748966977*log(x3268)) + 0.122415630550622*(0.3600242999203*log(
x3269) + 0.265490605029685*log(x3270) + 0.177542061292996*log(x3271) +
 0.118340158059228*log(x3272) + 0.0786028756977906*log(x3273)) +
 0.0415985790408526*(0.343050385798831*log(x3274) + 0.252973631228671*log(
x3275) + 0.181810587600398*log(x3276) + 0.129910237357362*log(x3277) +
 0.0922551580147375*log(x3278)) + 0.0558792184724689*(0.269895387963*log(
x3279) + 0.256700237657598*log(x3280) + 0.200837772902561*log(x3281) +
 0.154339418422981*log(x3282) + 0.11822718305386*log(x3283)) +
 0.0357015985790409*(0.215142284599388*log(x3284) + 0.237650927679998*log(
x3285) + 0.207772032489674*log(x3286) + 0.181370868889705*log(x3287) +
 0.158063886341235*log(x3288)) + 0.0174422735346359*(0.216002494018279*log(
x3289) + 0.213852163315334*log(x3290) + 0.201552345623551*log(x3291) +
 0.189933477316987*log(x3292) + 0.178659519725849*log(x3293)) +
 0.0542451154529307*(0.263484171828016*log(x3294) + 0.238290362049798*log(
x3295) + 0.197642236931523*log(x3296) + 0.164152235213221*log(x3297) +
 0.136430993977441*log(x3298)) + 0.116944937833037*(0.249915265949964*log(
x3299) + 0.226018886796206*log(x3300) + 0.206758850140344*log(x3301) +
 0.172773086302266*log(x3302) + 0.14453391081122*log(x3303))) 
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
