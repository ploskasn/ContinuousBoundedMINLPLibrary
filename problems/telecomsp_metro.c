#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="telecomsp_metro";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x3151,x3152,x3153,x3154,x3155,x3156,x3157,x3158,x3159,x3160,x3161,x3162,x3163,x3164,x3165,x3166,x3167,x3168,x3169,x3170,x3171,x3172,x3173,x3174,x3175,x3176,x3177,x3178,x3179,x3180,x3181,x3182,x3183,x3184,x3185,x3186,x3187,x3188,x3189,x3190,x3191,x3192,x3193,x3194,x3195,x3196,x3197,x3198,x3199,x3200,x3201,x3202,x3203,x3204,x3205,x3206,x3207,x3208,x3209,x3210,x3211,x3212,x3213,x3214,x3215,x3216,x3217,x3218,x3219,x3220,x3221,x3222,x3223,x3224,x3225,x3226,x3227,x3228,x3229,x3230,x3231,x3232,x3233,x3234;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x3151); 
   fscanf(fp,"%f", &x3152); 
   fscanf(fp,"%f", &x3153); 
   fscanf(fp,"%f", &x3154); 
   fscanf(fp,"%f", &x3155); 
   fscanf(fp,"%f", &x3156); 
   fscanf(fp,"%f", &x3157); 
   fscanf(fp,"%f", &x3158); 
   fscanf(fp,"%f", &x3159); 
   fscanf(fp,"%f", &x3160); 
   fscanf(fp,"%f", &x3161); 
   fscanf(fp,"%f", &x3162); 
   fscanf(fp,"%f", &x3163); 
   fscanf(fp,"%f", &x3164); 
   fscanf(fp,"%f", &x3165); 
   fscanf(fp,"%f", &x3166); 
   fscanf(fp,"%f", &x3167); 
   fscanf(fp,"%f", &x3168); 
   fscanf(fp,"%f", &x3169); 
   fscanf(fp,"%f", &x3170); 
   fscanf(fp,"%f", &x3171); 
   fscanf(fp,"%f", &x3172); 
   fscanf(fp,"%f", &x3173); 
   fscanf(fp,"%f", &x3174); 
   fscanf(fp,"%f", &x3175); 
   fscanf(fp,"%f", &x3176); 
   fscanf(fp,"%f", &x3177); 
   fscanf(fp,"%f", &x3178); 
   fscanf(fp,"%f", &x3179); 
   fscanf(fp,"%f", &x3180); 
   fscanf(fp,"%f", &x3181); 
   fscanf(fp,"%f", &x3182); 
   fscanf(fp,"%f", &x3183); 
   fscanf(fp,"%f", &x3184); 
   fscanf(fp,"%f", &x3185); 
   fscanf(fp,"%f", &x3186); 
   fscanf(fp,"%f", &x3187); 
   fscanf(fp,"%f", &x3188); 
   fscanf(fp,"%f", &x3189); 
   fscanf(fp,"%f", &x3190); 
   fscanf(fp,"%f", &x3191); 
   fscanf(fp,"%f", &x3192); 
   fscanf(fp,"%f", &x3193); 
   fscanf(fp,"%f", &x3194); 
   fscanf(fp,"%f", &x3195); 
   fscanf(fp,"%f", &x3196); 
   fscanf(fp,"%f", &x3197); 
   fscanf(fp,"%f", &x3198); 
   fscanf(fp,"%f", &x3199); 
   fscanf(fp,"%f", &x3200); 
   fscanf(fp,"%f", &x3201); 
   fscanf(fp,"%f", &x3202); 
   fscanf(fp,"%f", &x3203); 
   fscanf(fp,"%f", &x3204); 
   fscanf(fp,"%f", &x3205); 
   fscanf(fp,"%f", &x3206); 
   fscanf(fp,"%f", &x3207); 
   fscanf(fp,"%f", &x3208); 
   fscanf(fp,"%f", &x3209); 
   fscanf(fp,"%f", &x3210); 
   fscanf(fp,"%f", &x3211); 
   fscanf(fp,"%f", &x3212); 
   fscanf(fp,"%f", &x3213); 
   fscanf(fp,"%f", &x3214); 
   fscanf(fp,"%f", &x3215); 
   fscanf(fp,"%f", &x3216); 
   fscanf(fp,"%f", &x3217); 
   fscanf(fp,"%f", &x3218); 
   fscanf(fp,"%f", &x3219); 
   fscanf(fp,"%f", &x3220); 
   fscanf(fp,"%f", &x3221); 
   fscanf(fp,"%f", &x3222); 
   fscanf(fp,"%f", &x3223); 
   fscanf(fp,"%f", &x3224); 
   fscanf(fp,"%f", &x3225); 
   fscanf(fp,"%f", &x3226); 
   fscanf(fp,"%f", &x3227); 
   fscanf(fp,"%f", &x3228); 
   fscanf(fp,"%f", &x3229); 
   fscanf(fp,"%f", &x3230); 
   fscanf(fp,"%f", &x3231); 
   fscanf(fp,"%f", &x3232); 
   fscanf(fp,"%f", &x3233); 
   fscanf(fp,"%f", &x3234); 

   fclose(fp);
   res=    80000*x3151 + 40300*x3152 + 98800*x3153 + 60000*x3154 + 10000*x3155
 + 75000*x3156 + 40000*x3157 + 110000*x3158 + 90000*x3159 + 23700*x3160
 + 35700*x3161 + 110000*x3162 + 40300*x3163 + 8200*x3164 + 150000*x3165
 + 99900*x3166 + 29100*x3167 + 150000*x3168 + 148600*x3169 + 49100*x3170
 + 20000*x3171 + 48000*x3172 + 80700*x3173 + 20000*x3174 + 98800*x3175
 + 30000*x3176 + 40000*x3177 + 20000*x3178 + 68000*x3179 + 28000*x3180
 + 50000*x3181 + 30000*x3182 + 49100*x3183 + 70400*x3184 + 75000*x3185
 + 110000*x3186 + 99900*x3187 + 62300*x3188 + 50000*x3189 + 8200*x3190
 + 90000*x3191 + 45300*x3192 + 100200*x3193 + 47600*x3194 + 85000*x3195
 + 23700*x3196 + 10000*x3197 + 80000*x3198 + 148600*x3199 + 31000*x3200
 + 50000*x3201 + 45000*x3202 + 34600*x3203 + 9100*x3204 + 80000*x3205
 + 87100*x3206 + 80000*x3207 + 87100*x3208 + 45000*x3209 + 34600*x3210
 + 80000*x3211 + 48000*x3212 + 31000*x3213 + 100200*x3214 + 80000*x3215
 + 80700*x3216 + 110000*x3217 + 62300*x3218 + 9100*x3219 + 44200*x3220
 + 70400*x3221 + 35700*x3222 + 159300*x3223 + 159300*x3224 + 85000*x3225
 + 20000*x3226 + 28000*x3227 + 45300*x3228 + 29100*x3229 + 44200*x3230
 + 50000*x3231 + 47600*x3232 + 68000*x3233 + 60000*x3234  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
