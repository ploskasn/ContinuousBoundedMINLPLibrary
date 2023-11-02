#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="transswitch2383wpp";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x19197,x19198,x19199,x19200,x19201,x19202,x19203,x19204,x19205,x19206,x19207,x19209,x19210,x19211,x19212,x19213,x19214,x19215,x19216,x19217,x19219,x19220,x19221,x19224,x19225,x19226,x19227,x19228,x19229,x19230,x19231,x19232,x19261,x19288,x19289,x19298,x19307,x19308,x19316,x19323,x19324,x19334,x19335,x19336,x19348,x19349,x19351,x19352,x19353,x19355,x19372,x19373,x19374,x19375,x19383,x19384,x19385,x19392,x19393,x19425,x19426,x19427,x19428,x19440,x19441;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x19197); 
   fscanf(fp,"%f", &x19198); 
   fscanf(fp,"%f", &x19199); 
   fscanf(fp,"%f", &x19200); 
   fscanf(fp,"%f", &x19201); 
   fscanf(fp,"%f", &x19202); 
   fscanf(fp,"%f", &x19203); 
   fscanf(fp,"%f", &x19204); 
   fscanf(fp,"%f", &x19205); 
   fscanf(fp,"%f", &x19206); 
   fscanf(fp,"%f", &x19207); 
   fscanf(fp,"%f", &x19209); 
   fscanf(fp,"%f", &x19210); 
   fscanf(fp,"%f", &x19211); 
   fscanf(fp,"%f", &x19212); 
   fscanf(fp,"%f", &x19213); 
   fscanf(fp,"%f", &x19214); 
   fscanf(fp,"%f", &x19215); 
   fscanf(fp,"%f", &x19216); 
   fscanf(fp,"%f", &x19217); 
   fscanf(fp,"%f", &x19219); 
   fscanf(fp,"%f", &x19220); 
   fscanf(fp,"%f", &x19221); 
   fscanf(fp,"%f", &x19224); 
   fscanf(fp,"%f", &x19225); 
   fscanf(fp,"%f", &x19226); 
   fscanf(fp,"%f", &x19227); 
   fscanf(fp,"%f", &x19228); 
   fscanf(fp,"%f", &x19229); 
   fscanf(fp,"%f", &x19230); 
   fscanf(fp,"%f", &x19231); 
   fscanf(fp,"%f", &x19232); 
   fscanf(fp,"%f", &x19261); 
   fscanf(fp,"%f", &x19288); 
   fscanf(fp,"%f", &x19289); 
   fscanf(fp,"%f", &x19298); 
   fscanf(fp,"%f", &x19307); 
   fscanf(fp,"%f", &x19308); 
   fscanf(fp,"%f", &x19316); 
   fscanf(fp,"%f", &x19323); 
   fscanf(fp,"%f", &x19324); 
   fscanf(fp,"%f", &x19334); 
   fscanf(fp,"%f", &x19335); 
   fscanf(fp,"%f", &x19336); 
   fscanf(fp,"%f", &x19348); 
   fscanf(fp,"%f", &x19349); 
   fscanf(fp,"%f", &x19351); 
   fscanf(fp,"%f", &x19352); 
   fscanf(fp,"%f", &x19353); 
   fscanf(fp,"%f", &x19355); 
   fscanf(fp,"%f", &x19372); 
   fscanf(fp,"%f", &x19373); 
   fscanf(fp,"%f", &x19374); 
   fscanf(fp,"%f", &x19375); 
   fscanf(fp,"%f", &x19383); 
   fscanf(fp,"%f", &x19384); 
   fscanf(fp,"%f", &x19385); 
   fscanf(fp,"%f", &x19392); 
   fscanf(fp,"%f", &x19393); 
   fscanf(fp,"%f", &x19425); 
   fscanf(fp,"%f", &x19426); 
   fscanf(fp,"%f", &x19427); 
   fscanf(fp,"%f", &x19428); 
   fscanf(fp,"%f", &x19440); 
   fscanf(fp,"%f", &x19441); 

   fclose(fp);
   res=    11795*x19197 + 4889*x19198 + 9847*x19199 + 12873*x19200 + 15823*x19201
 + 16562*x19202 + 7122*x19203 + 10225*x19204 + 14783*x19205 + 7537*x19206
 + 8601*x19207 + 6874*x19209 + 8191*x19210 + 8188*x19211 + 5878*x19212
 + 8557*x19213 + 10138*x19214 + 12243*x19215 + 9662*x19216 + 10673*x19217
 + 15194*x19219 + 10751*x19220 + 10353*x19221 + 13648*x19224
 + 15746*x19225 + 8397*x19226 + 17074*x19227 + 8091*x19228 + 14760*x19229
 + 15875*x19230 + 14694*x19231 + 9632*x19232 + 13498*x19261 + 14294*x19288
 + 12822*x19289 + 14173*x19298 + 10082*x19307 + 15190*x19308
 + 11415*x19316 + 8795*x19323 + 13025*x19324 + 14597*x19334 + 13758*x19335
 + 14736*x19336 + 8292*x19348 + 13359*x19349 + 15295*x19351 + 6735*x19352
 + 13493*x19353 + 6132*x19355 + 6140*x19372 + 11499*x19373 + 12264*x19374
 + 11884*x19375 + 14383*x19383 + 6748*x19384 + 8800*x19385 + 12986*x19392
 + 10816*x19393 + 7566*x19425 + 7687*x19426 + 14358*x19427 + 15315*x19428
 + 13178*x19440 + 5388*x19441  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
