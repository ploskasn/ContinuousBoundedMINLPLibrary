#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="cesam2log";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x233,x234,x235,x236,x237,x238,x239,x240,x241,x242,x243,x244,x245,x246,x247,x248,x249,x250,x251,x252,x253,x254,x255,x256,x257,x258,x259,x260,x261,x262,x263,x264,x265,x266,x267,x268,x269,x270,x271,x272,x273,x274,x275,x276,x277,x278,x279,x280,x281,x282,x283,x284,x285,x286,x287,x288,x289,x290,x291,x292,x293,x294,x295,x296,x297,x298,x299,x300,x301,x302,x303,x304,x305,x306,x307,x308,x309,x310,x311,x312,x313,x314,x315,x316,x160,x161,x162,x163,x164,x165,x166,x167,x168,x169,x170,x171,x172,x173,x174,x175,x176,x177,x178,x179,x180,x181,x182,x183,x184,x185,x186,x187,x188,x189,x190,x191,x192,x193,x194,x195,x196,x197,x198,x199,x200,x201,x202,x203,x204,x205,x206,x207,x208,x209,x210,x211,x212,x213,x214,x215,x216,x217,x218,x219,x220,x221,x222,x223,x224,x225,x226,x227,x228,x229,x230,x231,x232;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &x305); 
   fscanf(fp,"%f", &x306); 
   fscanf(fp,"%f", &x307); 
   fscanf(fp,"%f", &x308); 
   fscanf(fp,"%f", &x309); 
   fscanf(fp,"%f", &x310); 
   fscanf(fp,"%f", &x311); 
   fscanf(fp,"%f", &x312); 
   fscanf(fp,"%f", &x313); 
   fscanf(fp,"%f", &x314); 
   fscanf(fp,"%f", &x315); 
   fscanf(fp,"%f", &x316); 
   fscanf(fp,"%f", &x160); 
   fscanf(fp,"%f", &x161); 
   fscanf(fp,"%f", &x162); 
   fscanf(fp,"%f", &x163); 
   fscanf(fp,"%f", &x164); 
   fscanf(fp,"%f", &x165); 
   fscanf(fp,"%f", &x166); 
   fscanf(fp,"%f", &x167); 
   fscanf(fp,"%f", &x168); 
   fscanf(fp,"%f", &x169); 
   fscanf(fp,"%f", &x170); 
   fscanf(fp,"%f", &x171); 
   fscanf(fp,"%f", &x172); 
   fscanf(fp,"%f", &x173); 
   fscanf(fp,"%f", &x174); 
   fscanf(fp,"%f", &x175); 
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
   fscanf(fp,"%f", &x197); 
   fscanf(fp,"%f", &x198); 
   fscanf(fp,"%f", &x199); 
   fscanf(fp,"%f", &x200); 
   fscanf(fp,"%f", &x201); 
   fscanf(fp,"%f", &x202); 
   fscanf(fp,"%f", &x203); 
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

   fclose(fp);
   res=-(-((2.89037157789618 + log(1e-8 + x233))*x233 + (0.117783024406384 + log(
  1e-8 + x234))*x234 + (2.89037157789618 + log(1e-8 + x235))*x235 + (
  2.89037157789618 + log(1e-8 + x236))*x236 + (0.117783024406384 + log(
  1e-8 + x237))*x237 + (2.89037157789618 + log(1e-8 + x238))*x238 + (
  2.89037157789618 + log(1e-8 + x239))*x239 + (0.117783024406384 + log(
  1e-8 + x240))*x240 + (2.89037157789618 + log(1e-8 + x241))*x241 + (
  2.89037157789618 + log(1e-8 + x242))*x242 + (0.117783024406384 + log(
  1e-8 + x243))*x243 + (2.89037157789618 + log(1e-8 + x244))*x244 + (
  2.89037157789618 + log(1e-8 + x245))*x245 + (0.117783024406384 + log(
  1e-8 + x246))*x246 + (2.89037157789618 + log(1e-8 + x247))*x247 + (
  2.89037157789618 + log(1e-8 + x248))*x248 + (0.117783024406384 + log(
  1e-8 + x249))*x249 + (2.89037157789618 + log(1e-8 + x250))*x250 + (
  2.89037157789618 + log(1e-8 + x251))*x251 + (0.117783024406384 + log(
  1e-8 + x252))*x252 + (2.89037157789618 + log(1e-8 + x253))*x253 + (
  2.89037157789618 + log(1e-8 + x254))*x254 + (0.117783024406384 + log(
  1e-8 + x255))*x255 + (2.89037157789618 + log(1e-8 + x256))*x256 + (
  2.89037157789618 + log(1e-8 + x257))*x257 + (0.117783024406384 + log(
  1e-8 + x258))*x258 + (2.89037157789618 + log(1e-8 + x259))*x259 + (
  2.89037157789618 + log(1e-8 + x260))*x260 + (0.117783024406384 + log(
  1e-8 + x261))*x261 + (2.89037157789618 + log(1e-8 + x262))*x262 + (
  2.89037157789618 + log(1e-8 + x263))*x263 + (0.117783024406384 + log(
  1e-8 + x264))*x264 + (2.89037157789618 + log(1e-8 + x265))*x265 + (
  2.89037157789618 + log(1e-8 + x266))*x266 + (0.117783024406384 + log(
  1e-8 + x267))*x267 + (2.89037157789618 + log(1e-8 + x268))*x268 + (
  2.89037157789618 + log(1e-8 + x269))*x269 + (0.117783024406384 + log(
  1e-8 + x270))*x270 + (2.89037157789618 + log(1e-8 + x271))*x271 + (
  2.89037157789618 + log(1e-8 + x272))*x272 + (0.117783024406384 + log(
  1e-8 + x273))*x273 + (2.89037157789618 + log(1e-8 + x274))*x274 + (
  2.89037157789618 + log(1e-8 + x275))*x275 + (0.117783024406384 + log(
  1e-8 + x276))*x276 + (2.89037157789618 + log(1e-8 + x277))*x277 + (
  2.89037157789618 + log(1e-8 + x278))*x278 + (0.117783024406384 + log(
  1e-8 + x279))*x279 + (2.89037157789618 + log(1e-8 + x280))*x280 + (
  2.89037157789618 + log(1e-8 + x281))*x281 + (0.117783024406384 + log(
  1e-8 + x282))*x282 + (2.89037157789618 + log(1e-8 + x283))*x283 + (
  2.89037157789618 + log(1e-8 + x284))*x284 + (0.117783024406384 + log(
  1e-8 + x285))*x285 + (2.89037157789618 + log(1e-8 + x286))*x286 + (
  2.89037157789618 + log(1e-8 + x287))*x287 + (0.117783024406384 + log(
  1e-8 + x288))*x288 + (2.89037157789618 + log(1e-8 + x289))*x289 + (
  2.89037157789618 + log(1e-8 + x290))*x290 + (0.117783024406384 + log(
  1e-8 + x291))*x291 + (2.89037157789618 + log(1e-8 + x292))*x292 + (
  2.89037157789618 + log(1e-8 + x293))*x293 + (0.117783024406384 + log(
  1e-8 + x294))*x294 + (2.89037157789618 + log(1e-8 + x295))*x295 + (
  2.89037157789618 + log(1e-8 + x296))*x296 + (0.117783024406384 + log(
  1e-8 + x297))*x297 + (2.89037157789618 + log(1e-8 + x298))*x298 + (
  2.89037157789618 + log(1e-8 + x299))*x299 + (0.117783024406384 + log(
  1e-8 + x300))*x300 + (2.89037157789618 + log(1e-8 + x301))*x301 + (
  2.89037157789618 + log(1e-8 + x302))*x302 + (0.117783024406384 + log(
  1e-8 + x303))*x303 + (2.89037157789618 + log(1e-8 + x304))*x304 + (
  2.89037157789618 + log(1e-8 + x305))*x305 + (0.117783024406384 + log(
  1e-8 + x306))*x306 + (2.89037157789618 + log(1e-8 + x307))*x307 + (
  2.89037157789618 + log(1e-8 + x308))*x308 + (0.117783024406384 + log(
  1e-8 + x309))*x309 + (2.89037157789618 + log(1e-8 + x310))*x310 + (
  2.89037157789618 + log(1e-8 + x311))*x311 + (0.117783024406384 + log(
  1e-8 + x312))*x312 + (2.89037157789618 + log(1e-8 + x313))*x313 + (
  2.89037157789618 + log(1e-8 + x314))*x314 + (0.117783024406384 + log(
  1e-8 + x315))*x315 + (2.89037157789618 + log(1e-8 + x316))*x316 + (
  1.94591007905532 + log(1e-8 + x160))*x160 + (1.94591007905532 + log(1e-8
   + x161))*x161 + (1.94591007905532 + log(1e-8 + x162))*x162 + (
  1.94591007905532 + log(1e-8 + x163))*x163 + (1.94591007905532 + log(1e-8
   + x164))*x164 + (1.94591007905532 + log(1e-8 + x165))*x165 + (
  1.94591007905532 + log(1e-8 + x166))*x166 + (1.94591007905532 + log(1e-8
   + x167))*x167 + (1.94591007905532 + log(1e-8 + x168))*x168 + (
  1.94591007905532 + log(1e-8 + x169))*x169 + (1.94591007905532 + log(1e-8
   + x170))*x170 + (1.94591007905532 + log(1e-8 + x171))*x171 + (
  1.94591007905532 + log(1e-8 + x172))*x172 + (1.94591007905532 + log(1e-8
   + x173))*x173 + (1.94591007905532 + log(1e-8 + x174))*x174 + (
  1.94591007905532 + log(1e-8 + x175))*x175 + (1.94591007905532 + log(1e-8
   + x176))*x176 + (1.94591007905532 + log(1e-8 + x177))*x177 + (
  1.94591007905532 + log(1e-8 + x178))*x178 + (1.94591007905532 + log(1e-8
   + x179))*x179 + (1.94591007905532 + log(1e-8 + x180))*x180 + (
  1.94591007905532 + log(1e-8 + x181))*x181 + (1.94591007905532 + log(1e-8
   + x182))*x182 + (1.94591007905532 + log(1e-8 + x183))*x183 + (
  1.94591007905532 + log(1e-8 + x184))*x184 + (1.94591007905532 + log(1e-8
   + x185))*x185 + (1.94591007905532 + log(1e-8 + x186))*x186 + (
  1.94591007905532 + log(1e-8 + x187))*x187 + (1.94591007905532 + log(1e-8
   + x188))*x188 + (1.94591007905532 + log(1e-8 + x189))*x189 + (
  1.94591007905532 + log(1e-8 + x190))*x190 + (1.94591007905532 + log(1e-8
   + x191))*x191 + (1.94591007905532 + log(1e-8 + x192))*x192 + (
  1.94591007905532 + log(1e-8 + x193))*x193 + (1.94591007905532 + log(1e-8
   + x194))*x194 + (1.94591007905532 + log(1e-8 + x195))*x195 + (
  1.94591007905532 + log(1e-8 + x196))*x196 + (1.94591007905532 + log(1e-8
   + x197))*x197 + (1.94591007905532 + log(1e-8 + x198))*x198 + (
  1.94591007905532 + log(1e-8 + x199))*x199 + (1.94591007905532 + log(1e-8
   + x200))*x200 + (1.94591007905532 + log(1e-8 + x201))*x201 + (
  1.94591007905532 + log(1e-8 + x202))*x202 + (1.94591007905532 + log(1e-8
   + x203))*x203 + (1.94591007905532 + log(1e-8 + x204))*x204 + (
  1.94591007905532 + log(1e-8 + x205))*x205 + (1.94591007905532 + log(1e-8
   + x206))*x206 + (1.94591007905532 + log(1e-8 + x207))*x207 + (
  1.94591007905532 + log(1e-8 + x208))*x208 + (1.94591007905532 + log(1e-8
   + x209))*x209 + (1.94591007905532 + log(1e-8 + x210))*x210 + (
  1.94591007905532 + log(1e-8 + x211))*x211 + (1.94591007905532 + log(1e-8
   + x212))*x212 + (1.94591007905532 + log(1e-8 + x213))*x213 + (
  1.94591007905532 + log(1e-8 + x214))*x214 + (1.94591007905532 + log(1e-8
   + x215))*x215 + (1.94591007905532 + log(1e-8 + x216))*x216 + (
  1.94591007905532 + log(1e-8 + x217))*x217 + (1.94591007905532 + log(1e-8
   + x218))*x218 + (1.94591007905532 + log(1e-8 + x219))*x219 + (
  1.94591007905532 + log(1e-8 + x220))*x220 + (1.94591007905532 + log(1e-8
   + x221))*x221 + (1.94591007905532 + log(1e-8 + x222))*x222 + (
  5.0875947152337 + log(1e-8 + x223))*x223 + (1.62186038180766 + log(1e-8
   + x224))*x224 + (0.523248126889548 + log(1e-8 + x225))*x225 + (
  1.62186038180766 + log(1e-8 + x226))*x226 + (5.0875947152337 + log(1e-8
   + x227))*x227 + (5.0875947152337 + log(1e-8 + x228))*x228 + (
  1.62186038180766 + log(1e-8 + x229))*x229 + (0.523248126889548 + log(
  1e-8 + x230))*x230 + (1.62186038180766 + log(1e-8 + x231))*x231 + (
  5.0875947152337 + log(1e-8 + x232))*x232)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
