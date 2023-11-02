#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="chp_shorttermplan2d";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x3074,x3075,x3076,x3077,x3078,x3079,x3080,x3081,x3082,x3083,x3084,x3085,x3086,x3087,x3088,x3089,x3090,x3091,x3092,x3093,x3094,x3095,x3096,x3097,x3098,x3099,x3100,x3101,x3102,x3103,x3104,x3105,x3106,x3107,x3108,x3109,x3110,x3111,x3112,x3113,x3114,x3115,x3116,x3117,x3118,x3119,x3120,x3121;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x3074); 
   fscanf(fp,"%f", &x3075); 
   fscanf(fp,"%f", &x3076); 
   fscanf(fp,"%f", &x3077); 
   fscanf(fp,"%f", &x3078); 
   fscanf(fp,"%f", &x3079); 
   fscanf(fp,"%f", &x3080); 
   fscanf(fp,"%f", &x3081); 
   fscanf(fp,"%f", &x3082); 
   fscanf(fp,"%f", &x3083); 
   fscanf(fp,"%f", &x3084); 
   fscanf(fp,"%f", &x3085); 
   fscanf(fp,"%f", &x3086); 
   fscanf(fp,"%f", &x3087); 
   fscanf(fp,"%f", &x3088); 
   fscanf(fp,"%f", &x3089); 
   fscanf(fp,"%f", &x3090); 
   fscanf(fp,"%f", &x3091); 
   fscanf(fp,"%f", &x3092); 
   fscanf(fp,"%f", &x3093); 
   fscanf(fp,"%f", &x3094); 
   fscanf(fp,"%f", &x3095); 
   fscanf(fp,"%f", &x3096); 
   fscanf(fp,"%f", &x3097); 
   fscanf(fp,"%f", &x3098); 
   fscanf(fp,"%f", &x3099); 
   fscanf(fp,"%f", &x3100); 
   fscanf(fp,"%f", &x3101); 
   fscanf(fp,"%f", &x3102); 
   fscanf(fp,"%f", &x3103); 
   fscanf(fp,"%f", &x3104); 
   fscanf(fp,"%f", &x3105); 
   fscanf(fp,"%f", &x3106); 
   fscanf(fp,"%f", &x3107); 
   fscanf(fp,"%f", &x3108); 
   fscanf(fp,"%f", &x3109); 
   fscanf(fp,"%f", &x3110); 
   fscanf(fp,"%f", &x3111); 
   fscanf(fp,"%f", &x3112); 
   fscanf(fp,"%f", &x3113); 
   fscanf(fp,"%f", &x3114); 
   fscanf(fp,"%f", &x3115); 
   fscanf(fp,"%f", &x3116); 
   fscanf(fp,"%f", &x3117); 
   fscanf(fp,"%f", &x3118); 
   fscanf(fp,"%f", &x3119); 
   fscanf(fp,"%f", &x3120); 
   fscanf(fp,"%f", &x3121); 

   fclose(fp);
   res=-( + x3074 + x3075 + x3076 + x3077 + x3078 + x3079 + x3080 + x3081
 + x3082 + x3083 + x3084 + x3085 + x3086 + x3087 + x3088 + x3089 + x3090
 + x3091 + x3092 + x3093 + x3094 + x3095 + x3096 + x3097 + x3098 + x3099
 + x3100 + x3101 + x3102 + x3103 + x3104 + x3105 + x3106 + x3107 + x3108
 + x3109 + x3110 + x3111 + x3112 + x3113 + x3114 + x3115 + x3116 + x3117
 + x3118 + x3119 + x3120 + x3121 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
