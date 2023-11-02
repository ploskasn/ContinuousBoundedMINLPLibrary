#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="chp_shorttermplan2b";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1346,x1347,x1348,x1349,x1350,x1351,x1352,x1353,x1354,x1355,x1356,x1357,x1358,x1359,x1360,x1361,x1362,x1363,x1364,x1365,x1366,x1367,x1368,x1369,x1370,x1371,x1372,x1373,x1374,x1375,x1376,x1377,x1378,x1379,x1380,x1381,x1382,x1383,x1384,x1385,x1386,x1387,x1388,x1389,x1390,x1391,x1392,x1393;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1346); 
   fscanf(fp,"%f", &x1347); 
   fscanf(fp,"%f", &x1348); 
   fscanf(fp,"%f", &x1349); 
   fscanf(fp,"%f", &x1350); 
   fscanf(fp,"%f", &x1351); 
   fscanf(fp,"%f", &x1352); 
   fscanf(fp,"%f", &x1353); 
   fscanf(fp,"%f", &x1354); 
   fscanf(fp,"%f", &x1355); 
   fscanf(fp,"%f", &x1356); 
   fscanf(fp,"%f", &x1357); 
   fscanf(fp,"%f", &x1358); 
   fscanf(fp,"%f", &x1359); 
   fscanf(fp,"%f", &x1360); 
   fscanf(fp,"%f", &x1361); 
   fscanf(fp,"%f", &x1362); 
   fscanf(fp,"%f", &x1363); 
   fscanf(fp,"%f", &x1364); 
   fscanf(fp,"%f", &x1365); 
   fscanf(fp,"%f", &x1366); 
   fscanf(fp,"%f", &x1367); 
   fscanf(fp,"%f", &x1368); 
   fscanf(fp,"%f", &x1369); 
   fscanf(fp,"%f", &x1370); 
   fscanf(fp,"%f", &x1371); 
   fscanf(fp,"%f", &x1372); 
   fscanf(fp,"%f", &x1373); 
   fscanf(fp,"%f", &x1374); 
   fscanf(fp,"%f", &x1375); 
   fscanf(fp,"%f", &x1376); 
   fscanf(fp,"%f", &x1377); 
   fscanf(fp,"%f", &x1378); 
   fscanf(fp,"%f", &x1379); 
   fscanf(fp,"%f", &x1380); 
   fscanf(fp,"%f", &x1381); 
   fscanf(fp,"%f", &x1382); 
   fscanf(fp,"%f", &x1383); 
   fscanf(fp,"%f", &x1384); 
   fscanf(fp,"%f", &x1385); 
   fscanf(fp,"%f", &x1386); 
   fscanf(fp,"%f", &x1387); 
   fscanf(fp,"%f", &x1388); 
   fscanf(fp,"%f", &x1389); 
   fscanf(fp,"%f", &x1390); 
   fscanf(fp,"%f", &x1391); 
   fscanf(fp,"%f", &x1392); 
   fscanf(fp,"%f", &x1393); 

   fclose(fp);
   res=-( + x1346 + x1347 + x1348 + x1349 + x1350 + x1351 + x1352 + x1353
 + x1354 + x1355 + x1356 + x1357 + x1358 + x1359 + x1360 + x1361 + x1362
 + x1363 + x1364 + x1365 + x1366 + x1367 + x1368 + x1369 + x1370 + x1371
 + x1372 + x1373 + x1374 + x1375 + x1376 + x1377 + x1378 + x1379 + x1380
 + x1381 + x1382 + x1383 + x1384 + x1385 + x1386 + x1387 + x1388 + x1389
 + x1390 + x1391 + x1392 + x1393 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
