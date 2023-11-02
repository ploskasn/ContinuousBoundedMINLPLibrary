#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  

float sqr(float b)
{
   float z;
   z = b*b;
   return(z);
}

int main(int argc, char** argv) { 
   char *problemname="powerflow0300p";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2233,x2234,x2235,x2236,x2237,x2238,x2239,x2240,x2241,x2242,x2243,x2244,x2245,x2246,x2247,x2248,x2249,x2250,x2251,x2252,x2253,x2254,x2255,x2256,x2257,x2258,x2259,x2260,x2261,x2262,x2263,x2264,x2265,x2266,x2267,x2268,x2269,x2270,x2271,x2272,x2273,x2274,x2275,x2276,x2277,x2278,x2279,x2280,x2281,x2282,x2283,x2284,x2285,x2286,x2287,x2288,x2289,x2290,x2291,x2292,x2293,x2294,x2295,x2296,x2297,x2298,x2299,x2300,x2301;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x2233); 
   fscanf(fp,"%f", &x2234); 
   fscanf(fp,"%f", &x2235); 
   fscanf(fp,"%f", &x2236); 
   fscanf(fp,"%f", &x2237); 
   fscanf(fp,"%f", &x2238); 
   fscanf(fp,"%f", &x2239); 
   fscanf(fp,"%f", &x2240); 
   fscanf(fp,"%f", &x2241); 
   fscanf(fp,"%f", &x2242); 
   fscanf(fp,"%f", &x2243); 
   fscanf(fp,"%f", &x2244); 
   fscanf(fp,"%f", &x2245); 
   fscanf(fp,"%f", &x2246); 
   fscanf(fp,"%f", &x2247); 
   fscanf(fp,"%f", &x2248); 
   fscanf(fp,"%f", &x2249); 
   fscanf(fp,"%f", &x2250); 
   fscanf(fp,"%f", &x2251); 
   fscanf(fp,"%f", &x2252); 
   fscanf(fp,"%f", &x2253); 
   fscanf(fp,"%f", &x2254); 
   fscanf(fp,"%f", &x2255); 
   fscanf(fp,"%f", &x2256); 
   fscanf(fp,"%f", &x2257); 
   fscanf(fp,"%f", &x2258); 
   fscanf(fp,"%f", &x2259); 
   fscanf(fp,"%f", &x2260); 
   fscanf(fp,"%f", &x2261); 
   fscanf(fp,"%f", &x2262); 
   fscanf(fp,"%f", &x2263); 
   fscanf(fp,"%f", &x2264); 
   fscanf(fp,"%f", &x2265); 
   fscanf(fp,"%f", &x2266); 
   fscanf(fp,"%f", &x2267); 
   fscanf(fp,"%f", &x2268); 
   fscanf(fp,"%f", &x2269); 
   fscanf(fp,"%f", &x2270); 
   fscanf(fp,"%f", &x2271); 
   fscanf(fp,"%f", &x2272); 
   fscanf(fp,"%f", &x2273); 
   fscanf(fp,"%f", &x2274); 
   fscanf(fp,"%f", &x2275); 
   fscanf(fp,"%f", &x2276); 
   fscanf(fp,"%f", &x2277); 
   fscanf(fp,"%f", &x2278); 
   fscanf(fp,"%f", &x2279); 
   fscanf(fp,"%f", &x2280); 
   fscanf(fp,"%f", &x2281); 
   fscanf(fp,"%f", &x2282); 
   fscanf(fp,"%f", &x2283); 
   fscanf(fp,"%f", &x2284); 
   fscanf(fp,"%f", &x2285); 
   fscanf(fp,"%f", &x2286); 
   fscanf(fp,"%f", &x2287); 
   fscanf(fp,"%f", &x2288); 
   fscanf(fp,"%f", &x2289); 
   fscanf(fp,"%f", &x2290); 
   fscanf(fp,"%f", &x2291); 
   fscanf(fp,"%f", &x2292); 
   fscanf(fp,"%f", &x2293); 
   fscanf(fp,"%f", &x2294); 
   fscanf(fp,"%f", &x2295); 
   fscanf(fp,"%f", &x2296); 
   fscanf(fp,"%f", &x2297); 
   fscanf(fp,"%f", &x2298); 
   fscanf(fp,"%f", &x2299); 
   fscanf(fp,"%f", &x2300); 
   fscanf(fp,"%f", &x2301); 

   fclose(fp);
   res= 100*sqr(x2233) + 4000*x2233 + 100*sqr(x2234) + 4000*x2234 + 100*sqr(x2235)
 + 4000*x2235 + 100*sqr(x2236) + 4000*x2236 + 100*sqr(x2237) + 4000*x2237
 + 266.667*sqr(x2238) + 2000*x2238 + 645.161*sqr(x2239) + 2000*x2239 +
 344.828*sqr(x2240) + 2000*x2240 + 1470.59*sqr(x2241) + 2000*x2241 +
 854.701*sqr(x2242) + 2000*x2242 + 51.8135*sqr(x2243) + 2000*x2243 +
 416.667*sqr(x2244) + 2000*x2244 + 100*sqr(x2245) + 4000*x2245 + 100*sqr(
x2246) + 4000*x2246 + 355.872*sqr(x2247) + 2000*x2247 + 143.678*sqr(x2248)
 + 2000*x2248 + 1190.48*sqr(x2249) + 2000*x2249 + 460.829*sqr(x2250) +
 2000*x2250 + 970.874*sqr(x2251) + 2000*x2251 + 268.817*sqr(x2252) + 2000*
x2252 + 462.963*sqr(x2253) + 2000*x2253 + 100*sqr(x2254) + 4000*x2254 +
 487.805*sqr(x2255) + 2000*x2255 + 100*sqr(x2256) + 4000*x2256 + 438.596*
sqr(x2257) + 2000*x2257 + 1190.48*sqr(x2258) + 2000*x2258 + 500*sqr(x2259)
 + 2000*x2259 + 83.3333*sqr(x2260) + 2000*x2260 + 83.3333*sqr(x2261) +
 2000*x2261 + 210.526*sqr(x2262) + 2000*x2262 + 50.6842*sqr(x2263) + 2000*
x2263 + 235.849*sqr(x2264) + 2000*x2264 + 367.647*sqr(x2265) + 2000*x2265
 + 1000*sqr(x2266) + 2000*x2266 + 222.222*sqr(x2267) + 2000*x2267 + 400*
sqr(x2268) + 2000*x2268 + 330.033*sqr(x2269) + 2000*x2269 + 289.855*sqr(
x2270) + 2000*x2270 + 333.333*sqr(x2271) + 2000*x2271 + 166.667*sqr(x2272)
 + 2000*x2272 + 400*sqr(x2273) + 2000*x2273 + 181.818*sqr(x2274) + 2000*
x2274 + 173.783*sqr(x2275) + 2000*x2275 + 588.235*sqr(x2276) + 2000*x2276
 + 1190.48*sqr(x2277) + 2000*x2277 + 214.133*sqr(x2278) + 2000*x2278 +
 160.514*sqr(x2279) + 2000*x2279 + 82.6446*sqr(x2280) + 2000*x2280 + 427.35
*sqr(x2281) + 2000*x2281 + 268.817*sqr(x2282) + 2000*x2282 + 303.03*sqr(
x2283) + 2000*x2283 + 540.541*sqr(x2284) + 2000*x2284 + 243.902*sqr(x2285)
 + 2000*x2285 + 200*sqr(x2286) + 2000*x2286 + 2702.7*sqr(x2287) + 2000*
x2287 + 100*sqr(x2288) + 4000*x2288 + 2222.22*sqr(x2289) + 2000*x2289 +
 606.061*sqr(x2290) + 2000*x2290 + 250*sqr(x2291) + 2000*x2291 + 250*sqr(
x2292) + 2000*x2292 + 862.069*sqr(x2293) + 2000*x2293 + 77.3994*sqr(x2294)
 + 2000*x2294 + 142.857*sqr(x2295) + 2000*x2295 + 180.832*sqr(x2296) +
 2000*x2296 + 100*sqr(x2297) + 4000*x2297 + 100*sqr(x2298) + 4000*x2298 +
 100*sqr(x2299) + 4000*x2299 + 2000*sqr(x2300) + 2000*x2300 + 12500*sqr(
x2301) + 2000*x2301  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
