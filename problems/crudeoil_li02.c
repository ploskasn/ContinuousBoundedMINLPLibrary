#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_li02";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x361,x362,x363,x364,x365,x366,x367,x368,x369,x370,x371,x372,x373,x374,x375,x376,x377,x378,x379,x380,x381,x382,x383,x384,x385,x386,x387,x388,x389,x390,x391,x392,x393,x394,x395,x396,x397,x398,x399,x400,x401,x402,x403,x404,x405,x416,x421,x426,x431,x432,x436,x437,x441,x442,x446,x447,x451,x452,x456,x457,x461,x462,x466,x467,x471,x472,x477,x482,x487,x492,x493,x497,x498,x502,x503,x507,x508,x512,x513,x517,x518,x522,x523,x527,x528,x532,x533,x538,x543,x548,x553,x554,x558,x559,x563,x564,x568,x569,x573,x574,x579,x584,x585,x589,x590,x594,x595,x599,x600,x604,x605,x609,x610,x615,x620,x621,x622,x623,x624,x625,x626,x627,x628,x629,x630,x631,x632,x633,x634,x635,x636,x637,x638,x639,x640,x641,x642,x643,x644,x645,x646,x647,x648,x649,x650,x651,x652,x653,x654,x1165,x1166,x1167,x1168,x1169,x1170,x1171,x1172,x1173,x1174,x1175,x1176,x1177,x1178,x1179,x1180,x1181,x1182,x1183,x1184,x1185,x1186,x1187,x1188,x1189,x1190,x1191,x1192,x1193,x1194,x1195,x1196,x1197,x1198,x1199,x1245,x1246,x1247,x1248,x1249,x1250,x1251,x1252;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x361); 
   fscanf(fp,"%f", &x362); 
   fscanf(fp,"%f", &x363); 
   fscanf(fp,"%f", &x364); 
   fscanf(fp,"%f", &x365); 
   fscanf(fp,"%f", &x366); 
   fscanf(fp,"%f", &x367); 
   fscanf(fp,"%f", &x368); 
   fscanf(fp,"%f", &x369); 
   fscanf(fp,"%f", &x370); 
   fscanf(fp,"%f", &x371); 
   fscanf(fp,"%f", &x372); 
   fscanf(fp,"%f", &x373); 
   fscanf(fp,"%f", &x374); 
   fscanf(fp,"%f", &x375); 
   fscanf(fp,"%f", &x376); 
   fscanf(fp,"%f", &x377); 
   fscanf(fp,"%f", &x378); 
   fscanf(fp,"%f", &x379); 
   fscanf(fp,"%f", &x380); 
   fscanf(fp,"%f", &x381); 
   fscanf(fp,"%f", &x382); 
   fscanf(fp,"%f", &x383); 
   fscanf(fp,"%f", &x384); 
   fscanf(fp,"%f", &x385); 
   fscanf(fp,"%f", &x386); 
   fscanf(fp,"%f", &x387); 
   fscanf(fp,"%f", &x388); 
   fscanf(fp,"%f", &x389); 
   fscanf(fp,"%f", &x390); 
   fscanf(fp,"%f", &x391); 
   fscanf(fp,"%f", &x392); 
   fscanf(fp,"%f", &x393); 
   fscanf(fp,"%f", &x394); 
   fscanf(fp,"%f", &x395); 
   fscanf(fp,"%f", &x396); 
   fscanf(fp,"%f", &x397); 
   fscanf(fp,"%f", &x398); 
   fscanf(fp,"%f", &x399); 
   fscanf(fp,"%f", &x400); 
   fscanf(fp,"%f", &x401); 
   fscanf(fp,"%f", &x402); 
   fscanf(fp,"%f", &x403); 
   fscanf(fp,"%f", &x404); 
   fscanf(fp,"%f", &x405); 
   fscanf(fp,"%f", &x416); 
   fscanf(fp,"%f", &x421); 
   fscanf(fp,"%f", &x426); 
   fscanf(fp,"%f", &x431); 
   fscanf(fp,"%f", &x432); 
   fscanf(fp,"%f", &x436); 
   fscanf(fp,"%f", &x437); 
   fscanf(fp,"%f", &x441); 
   fscanf(fp,"%f", &x442); 
   fscanf(fp,"%f", &x446); 
   fscanf(fp,"%f", &x447); 
   fscanf(fp,"%f", &x451); 
   fscanf(fp,"%f", &x452); 
   fscanf(fp,"%f", &x456); 
   fscanf(fp,"%f", &x457); 
   fscanf(fp,"%f", &x461); 
   fscanf(fp,"%f", &x462); 
   fscanf(fp,"%f", &x466); 
   fscanf(fp,"%f", &x467); 
   fscanf(fp,"%f", &x471); 
   fscanf(fp,"%f", &x472); 
   fscanf(fp,"%f", &x477); 
   fscanf(fp,"%f", &x482); 
   fscanf(fp,"%f", &x487); 
   fscanf(fp,"%f", &x492); 
   fscanf(fp,"%f", &x493); 
   fscanf(fp,"%f", &x497); 
   fscanf(fp,"%f", &x498); 
   fscanf(fp,"%f", &x502); 
   fscanf(fp,"%f", &x503); 
   fscanf(fp,"%f", &x507); 
   fscanf(fp,"%f", &x508); 
   fscanf(fp,"%f", &x512); 
   fscanf(fp,"%f", &x513); 
   fscanf(fp,"%f", &x517); 
   fscanf(fp,"%f", &x518); 
   fscanf(fp,"%f", &x522); 
   fscanf(fp,"%f", &x523); 
   fscanf(fp,"%f", &x527); 
   fscanf(fp,"%f", &x528); 
   fscanf(fp,"%f", &x532); 
   fscanf(fp,"%f", &x533); 
   fscanf(fp,"%f", &x538); 
   fscanf(fp,"%f", &x543); 
   fscanf(fp,"%f", &x548); 
   fscanf(fp,"%f", &x553); 
   fscanf(fp,"%f", &x554); 
   fscanf(fp,"%f", &x558); 
   fscanf(fp,"%f", &x559); 
   fscanf(fp,"%f", &x563); 
   fscanf(fp,"%f", &x564); 
   fscanf(fp,"%f", &x568); 
   fscanf(fp,"%f", &x569); 
   fscanf(fp,"%f", &x573); 
   fscanf(fp,"%f", &x574); 
   fscanf(fp,"%f", &x579); 
   fscanf(fp,"%f", &x584); 
   fscanf(fp,"%f", &x585); 
   fscanf(fp,"%f", &x589); 
   fscanf(fp,"%f", &x590); 
   fscanf(fp,"%f", &x594); 
   fscanf(fp,"%f", &x595); 
   fscanf(fp,"%f", &x599); 
   fscanf(fp,"%f", &x600); 
   fscanf(fp,"%f", &x604); 
   fscanf(fp,"%f", &x605); 
   fscanf(fp,"%f", &x609); 
   fscanf(fp,"%f", &x610); 
   fscanf(fp,"%f", &x615); 
   fscanf(fp,"%f", &x620); 
   fscanf(fp,"%f", &x621); 
   fscanf(fp,"%f", &x622); 
   fscanf(fp,"%f", &x623); 
   fscanf(fp,"%f", &x624); 
   fscanf(fp,"%f", &x625); 
   fscanf(fp,"%f", &x626); 
   fscanf(fp,"%f", &x627); 
   fscanf(fp,"%f", &x628); 
   fscanf(fp,"%f", &x629); 
   fscanf(fp,"%f", &x630); 
   fscanf(fp,"%f", &x631); 
   fscanf(fp,"%f", &x632); 
   fscanf(fp,"%f", &x633); 
   fscanf(fp,"%f", &x634); 
   fscanf(fp,"%f", &x635); 
   fscanf(fp,"%f", &x636); 
   fscanf(fp,"%f", &x637); 
   fscanf(fp,"%f", &x638); 
   fscanf(fp,"%f", &x639); 
   fscanf(fp,"%f", &x640); 
   fscanf(fp,"%f", &x641); 
   fscanf(fp,"%f", &x642); 
   fscanf(fp,"%f", &x643); 
   fscanf(fp,"%f", &x644); 
   fscanf(fp,"%f", &x645); 
   fscanf(fp,"%f", &x646); 
   fscanf(fp,"%f", &x647); 
   fscanf(fp,"%f", &x648); 
   fscanf(fp,"%f", &x649); 
   fscanf(fp,"%f", &x650); 
   fscanf(fp,"%f", &x651); 
   fscanf(fp,"%f", &x652); 
   fscanf(fp,"%f", &x653); 
   fscanf(fp,"%f", &x654); 
   fscanf(fp,"%f", &x1165); 
   fscanf(fp,"%f", &x1166); 
   fscanf(fp,"%f", &x1167); 
   fscanf(fp,"%f", &x1168); 
   fscanf(fp,"%f", &x1169); 
   fscanf(fp,"%f", &x1170); 
   fscanf(fp,"%f", &x1171); 
   fscanf(fp,"%f", &x1172); 
   fscanf(fp,"%f", &x1173); 
   fscanf(fp,"%f", &x1174); 
   fscanf(fp,"%f", &x1175); 
   fscanf(fp,"%f", &x1176); 
   fscanf(fp,"%f", &x1177); 
   fscanf(fp,"%f", &x1178); 
   fscanf(fp,"%f", &x1179); 
   fscanf(fp,"%f", &x1180); 
   fscanf(fp,"%f", &x1181); 
   fscanf(fp,"%f", &x1182); 
   fscanf(fp,"%f", &x1183); 
   fscanf(fp,"%f", &x1184); 
   fscanf(fp,"%f", &x1185); 
   fscanf(fp,"%f", &x1186); 
   fscanf(fp,"%f", &x1187); 
   fscanf(fp,"%f", &x1188); 
   fscanf(fp,"%f", &x1189); 
   fscanf(fp,"%f", &x1190); 
   fscanf(fp,"%f", &x1191); 
   fscanf(fp,"%f", &x1192); 
   fscanf(fp,"%f", &x1193); 
   fscanf(fp,"%f", &x1194); 
   fscanf(fp,"%f", &x1195); 
   fscanf(fp,"%f", &x1196); 
   fscanf(fp,"%f", &x1197); 
   fscanf(fp,"%f", &x1198); 
   fscanf(fp,"%f", &x1199); 
   fscanf(fp,"%f", &x1245); 
   fscanf(fp,"%f", &x1246); 
   fscanf(fp,"%f", &x1247); 
   fscanf(fp,"%f", &x1248); 
   fscanf(fp,"%f", &x1249); 
   fscanf(fp,"%f", &x1250); 
   fscanf(fp,"%f", &x1251); 
   fscanf(fp,"%f", &x1252); 

   fclose(fp);
   res=-(- 2130*x361 - 2130*x362 - 2130*x363 - 2130*x364 - 2130*x365
    - 2574*x366 - 2574*x367 - 2574*x368 - 2574*x369 - 2574*x370
    - 2418*x371 - 2418*x372 - 2418*x373 - 2418*x374 - 2418*x375
    - 2130*x376 - 2130*x377 - 2130*x378 - 2130*x379 - 2130*x380
    - 2130*x381 - 2130*x382 - 2130*x383 - 2130*x384 - 2130*x385
    - 2574*x386 - 2574*x387 - 2574*x388 - 2574*x389 - 2574*x390
    - 2150*x391 - 2150*x392 - 2150*x393 - 2150*x394 - 2150*x395
    - 2671*x396 - 2671*x397 - 2671*x398 - 2671*x399 - 2671*x400
    - 2418*x401 - 2418*x402 - 2418*x403 - 2418*x404 - 2418*x405
    + 1130*x416 + 1130* 0 + 1130* 0 + 1130* 0 + 1130* 0
    + 1130*x421 + 1130* 0 + 1130* 0 + 1130* 0 + 1130* 0
    + 1130*x426 + 1130* 0 + 1130* 0 + 1130* 0 + 1130* 0
    + 1130*x431 + 1130*x432 + 1130* 0 + 1130* 0 + 1130* 0
    + 1130*x436 + 1130*x437 + 1130* 0 + 1130* 0 + 1130* 0
    + 1130*x441 + 1130*x442 + 1130* 0 + 1130* 0 + 1130* 0
    + 1130*x446 + 1130*x447 + 1130* 0 + 1130* 0 + 1130* 0
    + 1130*x451 + 1130*x452 + 1130* 0 + 1130* 0 + 1130* 0
    + 1130*x456 + 1130*x457 + 1130* 0 + 1130* 0 + 1130* 0
    + 1130*x461 + 1130*x462 + 1130* 0 + 1130* 0 + 1130* 0
    + 1130*x466 + 1130*x467 + 1130* 0 + 1130* 0 + 1130* 0
    + 1130*x471 + 1130*x472 + 1130* 0 + 1130* 0 + 1130* 0
    + 1130* 0 + 1130*x477 + 1130* 0 + 1130* 0 + 1130* 0
    + 1130* 0 + 1130*x482 + 1130* 0 + 1130* 0 + 1130* 0
    + 1130* 0 + 1130*x487 + 1130* 0 + 1130* 0 + 1130* 0
    + 1130* 0 + 1130*x492 + 1130*x493 + 1130* 0 + 1130* 0
    + 1130* 0 + 1130*x497 + 1130*x498 + 1130* 0 + 1130* 0
    + 1130* 0 + 1130*x502 + 1130*x503 + 1130* 0 + 1130* 0
    + 1130* 0 + 1130*x507 + 1130*x508 + 1130* 0 + 1130* 0
    + 1130* 0 + 1130*x512 + 1130*x513 + 1130* 0 + 1130* 0
    + 1130* 0 + 1130*x517 + 1130*x518 + 1130* 0 + 1130* 0
    + 1130* 0 + 1130*x522 + 1130*x523 + 1130* 0 + 1130* 0
    + 1130* 0 + 1130*x527 + 1130*x528 + 1130* 0 + 1130* 0
    + 1130* 0 + 1130*x532 + 1130*x533 + 1130* 0 + 1130* 0
    + 1130* 0 + 1130* 0 + 1130*x538 + 1130* 0 + 1130* 0
    + 1130* 0 + 1130* 0 + 1130*x543 + 1130* 0 + 1130* 0
    + 1130* 0 + 1130* 0 + 1130*x548 + 1130* 0 + 1130* 0
    + 1574* 0 + 1574* 0 + 1574*x553 + 1574*x554 + 1574* 0
    + 1574* 0 + 1574* 0 + 1574*x558 + 1574*x559 + 1574* 0
    + 1671* 0 + 1671* 0 + 1671*x563 + 1671*x564 + 1671* 0
    + 1574* 0 + 1574* 0 + 1574*x568 + 1574*x569 + 1574* 0
    + 1574* 0 + 1574* 0 + 1574*x573 + 1574*x574 + 1574* 0
    + 1150* 0 + 1150* 0 + 1150* 0 + 1150*x579 + 1150* 0
    + 1130* 0 + 1130* 0 + 1130* 0 + 1130*x584 + 1130*x585
    + 1130* 0 + 1130* 0 + 1130* 0 + 1130*x589 + 1130*x590
    + 1130* 0 + 1130* 0 + 1130* 0 + 1130*x594 + 1130*x595
    + 1130* 0 + 1130* 0 + 1130* 0 + 1130*x599 + 1130*x600
    + 1130* 0 + 1130* 0 + 1130* 0 + 1130*x604 + 1130*x605
    + 1130* 0 + 1130* 0 + 1130* 0 + 1130*x609 + 1130*x610
    + 1150* 0 + 1150* 0 + 1150* 0 + 1150* 0 + 1150*x615
    + 1622.5* 0 + 1622.5* 0 + 1622.5* 0 + 1622.5* 0 + 1622.5*x620
    - 2000*x621 - 2000*x622 - 2000*x623 - 2000*x624 - 2000*x625
    - 2000*x626 - 2000*x627 - 2000*x628 - 2000*x629 - 2000*x630
    - 2000*x631 - 2000*x632 - 2000*x633 - 2000*x634 - 2000*x635
    - 2000*x636 - 2000*x637 + 7000*x638 + 7000*x639 + 7000*x640
    + 7000*x641 + 7000*x642 + 7000*x643 + 7000*x644 + 7000*x645
    + 7000*x646 + 7000*x647 + 7000*x648 + 7000*x649 + 7000*x650
    + 7000*x651 + 7000*x652 + 7000*x653 + 7000*x654
    + 0.0583333333333333*x1165 + 0.0583333333333333*x1166
    + 0.0583333333333333*x1167 + 0.0583333333333333*x1168
    + 0.0583333333333333*x1169 + 0.0583333333333333*x1170
    + 0.0583333333333333*x1171 + 0.0583333333333333*x1172
    + 0.0583333333333333*x1173 + 0.0583333333333333*x1174
    + 0.0583333333333333*x1175 + 0.0583333333333333*x1176
    + 0.0583333333333333*x1177 + 0.0583333333333333*x1178
    + 0.0583333333333333*x1179 + 0.0583333333333333*x1180
    + 0.0583333333333333*x1181 + 0.0583333333333333*x1182
    + 0.0583333333333333*x1183 + 0.0583333333333333*x1184
    + 0.0583333333333333*x1185 + 0.0583333333333333*x1186
    + 0.0583333333333333*x1187 + 0.0583333333333333*x1188
    + 0.0583333333333333*x1189 + 0.0583333333333333*x1190
    + 0.0583333333333333*x1191 + 0.0583333333333333*x1192
    + 0.0583333333333333*x1193 + 0.0583333333333333*x1194
    + 0.0583333333333333*x1195 + 0.0583333333333333*x1196
    + 0.0583333333333333*x1197 + 0.0583333333333333*x1198
    + 0.0583333333333333*x1199 + 1000*x1245 + 1000*x1246 + 1000*x1247
    + 1000*x1248 + 1000*x1249 + 1000*x1250 + 1000*x1251 + 1000*x1252
     - 251266.666666667);

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
