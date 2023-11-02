#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="portfol_shortfall100_04";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x204,x205,x206,x207,x208,x209,x210,x211,x212,x213,x214,x215,x216,x217,x218,x219,x220,x221,x222,x223,x224,x225,x226,x227,x228,x229,x230,x231,x232,x233,x234,x235,x236,x237,x238,x239,x240,x241,x242,x243,x244,x245,x246,x247,x248,x249,x250,x251,x252,x253,x254,x255,x256,x257,x258,x259,x260,x261,x262,x263,x264,x265,x266,x267,x268,x269,x270,x271,x272,x273,x274,x275,x276,x277,x278,x279,x280,x281,x282,x283,x284,x285,x286,x287,x288,x289,x290,x291,x292,x293,x294,x295,x296,x297,x298,x299,x300,x301,x302,x303,x304;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x204); 
   fscanf(fp,"%f", &x205); 
   fscanf(fp,"%f", &x206); 
   fscanf(fp,"%f", &x207); 
   fscanf(fp,"%f", &x208); 
   fscanf(fp,"%f", &x209); 
   fscanf(fp,"%f", &x210); 
   fscanf(fp,"%f", &x211); 
   fscanf(fp,"%f", &x212); 
   fscanf(fp,"%f", &x213); 
   fscanf(fp,"%f", &x214); 
   fscanf(fp,"%f", &x215); 
   fscanf(fp,"%f", &x216); 
   fscanf(fp,"%f", &x217); 
   fscanf(fp,"%f", &x218); 
   fscanf(fp,"%f", &x219); 
   fscanf(fp,"%f", &x220); 
   fscanf(fp,"%f", &x221); 
   fscanf(fp,"%f", &x222); 
   fscanf(fp,"%f", &x223); 
   fscanf(fp,"%f", &x224); 
   fscanf(fp,"%f", &x225); 
   fscanf(fp,"%f", &x226); 
   fscanf(fp,"%f", &x227); 
   fscanf(fp,"%f", &x228); 
   fscanf(fp,"%f", &x229); 
   fscanf(fp,"%f", &x230); 
   fscanf(fp,"%f", &x231); 
   fscanf(fp,"%f", &x232); 
   fscanf(fp,"%f", &x233); 
   fscanf(fp,"%f", &x234); 
   fscanf(fp,"%f", &x235); 
   fscanf(fp,"%f", &x236); 
   fscanf(fp,"%f", &x237); 
   fscanf(fp,"%f", &x238); 
   fscanf(fp,"%f", &x239); 
   fscanf(fp,"%f", &x240); 
   fscanf(fp,"%f", &x241); 
   fscanf(fp,"%f", &x242); 
   fscanf(fp,"%f", &x243); 
   fscanf(fp,"%f", &x244); 
   fscanf(fp,"%f", &x245); 
   fscanf(fp,"%f", &x246); 
   fscanf(fp,"%f", &x247); 
   fscanf(fp,"%f", &x248); 
   fscanf(fp,"%f", &x249); 
   fscanf(fp,"%f", &x250); 
   fscanf(fp,"%f", &x251); 
   fscanf(fp,"%f", &x252); 
   fscanf(fp,"%f", &x253); 
   fscanf(fp,"%f", &x254); 
   fscanf(fp,"%f", &x255); 
   fscanf(fp,"%f", &x256); 
   fscanf(fp,"%f", &x257); 
   fscanf(fp,"%f", &x258); 
   fscanf(fp,"%f", &x259); 
   fscanf(fp,"%f", &x260); 
   fscanf(fp,"%f", &x261); 
   fscanf(fp,"%f", &x262); 
   fscanf(fp,"%f", &x263); 
   fscanf(fp,"%f", &x264); 
   fscanf(fp,"%f", &x265); 
   fscanf(fp,"%f", &x266); 
   fscanf(fp,"%f", &x267); 
   fscanf(fp,"%f", &x268); 
   fscanf(fp,"%f", &x269); 
   fscanf(fp,"%f", &x270); 
   fscanf(fp,"%f", &x271); 
   fscanf(fp,"%f", &x272); 
   fscanf(fp,"%f", &x273); 
   fscanf(fp,"%f", &x274); 
   fscanf(fp,"%f", &x275); 
   fscanf(fp,"%f", &x276); 
   fscanf(fp,"%f", &x277); 
   fscanf(fp,"%f", &x278); 
   fscanf(fp,"%f", &x279); 
   fscanf(fp,"%f", &x280); 
   fscanf(fp,"%f", &x281); 
   fscanf(fp,"%f", &x282); 
   fscanf(fp,"%f", &x283); 
   fscanf(fp,"%f", &x284); 
   fscanf(fp,"%f", &x285); 
   fscanf(fp,"%f", &x286); 
   fscanf(fp,"%f", &x287); 
   fscanf(fp,"%f", &x288); 
   fscanf(fp,"%f", &x289); 
   fscanf(fp,"%f", &x290); 
   fscanf(fp,"%f", &x291); 
   fscanf(fp,"%f", &x292); 
   fscanf(fp,"%f", &x293); 
   fscanf(fp,"%f", &x294); 
   fscanf(fp,"%f", &x295); 
   fscanf(fp,"%f", &x296); 
   fscanf(fp,"%f", &x297); 
   fscanf(fp,"%f", &x298); 
   fscanf(fp,"%f", &x299); 
   fscanf(fp,"%f", &x300); 
   fscanf(fp,"%f", &x301); 
   fscanf(fp,"%f", &x302); 
   fscanf(fp,"%f", &x303); 
   fscanf(fp,"%f", &x304); 

   fclose(fp);
   res= - 1.0909*x204 - 1.0484*x205 - 1.02702*x206 - 1.01287*x207
 - 1.04705*x208 - 1.0388*x209 - 1.04423*x210 - 1.08029*x211 - 1.03784*x212
 - 1.03832*x213 - 1.04422*x214 - 1.05655*x215 - 1.16949*x216
 - 1.02402*x217 - 1.12361*x218 - 1.0704*x219 - 1.03353*x220 - 1.03301*x221
 - 1.05721*x222 - 1.06148*x223 - 1.07467*x224 - 1.0715*x225 - 1.16448*x226
 - 1.03883*x227 - 1.15804*x228 - 1.02352*x229 - 1.01465*x230
 - 1.02972*x231 - 1.03168*x232 - 1.03948*x233 - 1.0429*x234 - 1.02026*x235
 - 1.0214*x236 - 1.01917*x237 - 1.05118*x238 - 1.02619*x239 - 1.02229*x240
 - 1.05845*x241 - 1.01553*x242 - 1.05018*x243 - 1.07433*x244
 - 1.02209*x245 - 1.02481*x246 - 1.02486*x247 - 1.01914*x248 - 1.0789*x249
 - 1.04362*x250 - 1.16381*x251 - 1.07546*x252 - 1.12841*x253
 - 1.09952*x254 - 1.10319*x255 - 1.06516*x256 - 1.02551*x257
 - 1.07732*x258 - 1.02101*x259 - 1.3711*x260 - 1.0604*x261 - 1.18805*x262
 - 1.14741*x263 - 1.06126*x264 - 1.06343*x265 - 1.0448*x266 - 1.0206*x267
 - 1.01249*x268 - 1.12587*x269 - 1.09978*x270 - 1.0486*x271 - 1.114*x272
 - 1.20829*x273 - 1.04256*x274 - 1.19748*x275 - 1.04278*x276 - 1.0269*x277
 - 1.02973*x278 - 1.05993*x279 - 1.02466*x280 - 1.08742*x281
 - 1.10546*x282 - 1.02759*x283 - 1.07536*x284 - 1.01307*x285
 - 1.09331*x286 - 1.01221*x287 - 1.09103*x288 - 1.06826*x289
 - 1.03534*x290 - 1.03049*x291 - 1.02605*x292 - 1.03401*x293
 - 1.02563*x294 - 1.15717*x295 - 1.14636*x296 - 1.02319*x297
 - 1.08327*x298 - 1.0124*x299 - 1.11078*x300 - 1.03986*x301 - 1.07922*x302
 - 1.0374*x303 - x304 ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
