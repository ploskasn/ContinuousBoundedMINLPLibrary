#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_lee2_09";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x692,x693,x694,x695,x696,x697,x698,x699,x700,x701,x702,x703,x704,x705,x706,x707,x708,x709,x710,x711,x712,x713,x714,x715,x776,x777,x778,x779,x780,x781,x782,x783,x784,x785,x786,x787,x788,x789,x790,x791,x792,x793,x794,x795,x796,x797,x798,x799,x860,x861,x862,x863,x864,x865,x866,x867,x868,x869,x870,x871,x872,x873,x874,x875,x876,x877,x878,x879,x880,x881,x882,x883,x944,x945,x946,x947,x948,x949,x950,x951,x952,x953,x954,x955,x956,x957,x958,x959,x960,x961,x962,x963,x964,x965,x966,x967,x1028,x1029,x1030,x1031,x1032,x1033,x1034,x1035,x1036,x1037,x1038,x1039,x1040,x1041,x1042,x1043,x1044,x1045,x1046,x1047,x1048,x1049,x1050,x1051,x1112,x1113,x1114,x1115,x1116,x1117,x1118,x1119,x1120,x1121,x1122,x1123,x1124,x1125,x1126,x1127,x1128,x1129,x1130,x1131,x1132,x1133,x1134,x1135,x1196,x1197,x1198,x1199,x1200,x1201,x1202,x1203,x1204,x1205,x1206,x1207,x1208,x1209,x1210,x1211,x1212,x1213,x1214,x1215,x1216,x1217,x1218,x1219,x1280,x1281,x1282,x1283,x1284,x1285,x1286,x1287,x1288,x1289,x1290,x1291,x1292,x1293,x1294,x1295,x1296,x1297,x1298,x1299,x1300,x1301,x1302,x1303,x1364,x1365,x1366,x1367,x1368,x1369,x1370,x1371,x1372,x1373,x1374,x1375,x1376,x1377,x1378,x1379,x1380,x1381,x1382,x1383,x1384,x1385,x1386,x1387;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x692); 
   fscanf(fp,"%f", &x693); 
   fscanf(fp,"%f", &x694); 
   fscanf(fp,"%f", &x695); 
   fscanf(fp,"%f", &x696); 
   fscanf(fp,"%f", &x697); 
   fscanf(fp,"%f", &x698); 
   fscanf(fp,"%f", &x699); 
   fscanf(fp,"%f", &x700); 
   fscanf(fp,"%f", &x701); 
   fscanf(fp,"%f", &x702); 
   fscanf(fp,"%f", &x703); 
   fscanf(fp,"%f", &x704); 
   fscanf(fp,"%f", &x705); 
   fscanf(fp,"%f", &x706); 
   fscanf(fp,"%f", &x707); 
   fscanf(fp,"%f", &x708); 
   fscanf(fp,"%f", &x709); 
   fscanf(fp,"%f", &x710); 
   fscanf(fp,"%f", &x711); 
   fscanf(fp,"%f", &x712); 
   fscanf(fp,"%f", &x713); 
   fscanf(fp,"%f", &x714); 
   fscanf(fp,"%f", &x715); 
   fscanf(fp,"%f", &x776); 
   fscanf(fp,"%f", &x777); 
   fscanf(fp,"%f", &x778); 
   fscanf(fp,"%f", &x779); 
   fscanf(fp,"%f", &x780); 
   fscanf(fp,"%f", &x781); 
   fscanf(fp,"%f", &x782); 
   fscanf(fp,"%f", &x783); 
   fscanf(fp,"%f", &x784); 
   fscanf(fp,"%f", &x785); 
   fscanf(fp,"%f", &x786); 
   fscanf(fp,"%f", &x787); 
   fscanf(fp,"%f", &x788); 
   fscanf(fp,"%f", &x789); 
   fscanf(fp,"%f", &x790); 
   fscanf(fp,"%f", &x791); 
   fscanf(fp,"%f", &x792); 
   fscanf(fp,"%f", &x793); 
   fscanf(fp,"%f", &x794); 
   fscanf(fp,"%f", &x795); 
   fscanf(fp,"%f", &x796); 
   fscanf(fp,"%f", &x797); 
   fscanf(fp,"%f", &x798); 
   fscanf(fp,"%f", &x799); 
   fscanf(fp,"%f", &x860); 
   fscanf(fp,"%f", &x861); 
   fscanf(fp,"%f", &x862); 
   fscanf(fp,"%f", &x863); 
   fscanf(fp,"%f", &x864); 
   fscanf(fp,"%f", &x865); 
   fscanf(fp,"%f", &x866); 
   fscanf(fp,"%f", &x867); 
   fscanf(fp,"%f", &x868); 
   fscanf(fp,"%f", &x869); 
   fscanf(fp,"%f", &x870); 
   fscanf(fp,"%f", &x871); 
   fscanf(fp,"%f", &x872); 
   fscanf(fp,"%f", &x873); 
   fscanf(fp,"%f", &x874); 
   fscanf(fp,"%f", &x875); 
   fscanf(fp,"%f", &x876); 
   fscanf(fp,"%f", &x877); 
   fscanf(fp,"%f", &x878); 
   fscanf(fp,"%f", &x879); 
   fscanf(fp,"%f", &x880); 
   fscanf(fp,"%f", &x881); 
   fscanf(fp,"%f", &x882); 
   fscanf(fp,"%f", &x883); 
   fscanf(fp,"%f", &x944); 
   fscanf(fp,"%f", &x945); 
   fscanf(fp,"%f", &x946); 
   fscanf(fp,"%f", &x947); 
   fscanf(fp,"%f", &x948); 
   fscanf(fp,"%f", &x949); 
   fscanf(fp,"%f", &x950); 
   fscanf(fp,"%f", &x951); 
   fscanf(fp,"%f", &x952); 
   fscanf(fp,"%f", &x953); 
   fscanf(fp,"%f", &x954); 
   fscanf(fp,"%f", &x955); 
   fscanf(fp,"%f", &x956); 
   fscanf(fp,"%f", &x957); 
   fscanf(fp,"%f", &x958); 
   fscanf(fp,"%f", &x959); 
   fscanf(fp,"%f", &x960); 
   fscanf(fp,"%f", &x961); 
   fscanf(fp,"%f", &x962); 
   fscanf(fp,"%f", &x963); 
   fscanf(fp,"%f", &x964); 
   fscanf(fp,"%f", &x965); 
   fscanf(fp,"%f", &x966); 
   fscanf(fp,"%f", &x967); 
   fscanf(fp,"%f", &x1028); 
   fscanf(fp,"%f", &x1029); 
   fscanf(fp,"%f", &x1030); 
   fscanf(fp,"%f", &x1031); 
   fscanf(fp,"%f", &x1032); 
   fscanf(fp,"%f", &x1033); 
   fscanf(fp,"%f", &x1034); 
   fscanf(fp,"%f", &x1035); 
   fscanf(fp,"%f", &x1036); 
   fscanf(fp,"%f", &x1037); 
   fscanf(fp,"%f", &x1038); 
   fscanf(fp,"%f", &x1039); 
   fscanf(fp,"%f", &x1040); 
   fscanf(fp,"%f", &x1041); 
   fscanf(fp,"%f", &x1042); 
   fscanf(fp,"%f", &x1043); 
   fscanf(fp,"%f", &x1044); 
   fscanf(fp,"%f", &x1045); 
   fscanf(fp,"%f", &x1046); 
   fscanf(fp,"%f", &x1047); 
   fscanf(fp,"%f", &x1048); 
   fscanf(fp,"%f", &x1049); 
   fscanf(fp,"%f", &x1050); 
   fscanf(fp,"%f", &x1051); 
   fscanf(fp,"%f", &x1112); 
   fscanf(fp,"%f", &x1113); 
   fscanf(fp,"%f", &x1114); 
   fscanf(fp,"%f", &x1115); 
   fscanf(fp,"%f", &x1116); 
   fscanf(fp,"%f", &x1117); 
   fscanf(fp,"%f", &x1118); 
   fscanf(fp,"%f", &x1119); 
   fscanf(fp,"%f", &x1120); 
   fscanf(fp,"%f", &x1121); 
   fscanf(fp,"%f", &x1122); 
   fscanf(fp,"%f", &x1123); 
   fscanf(fp,"%f", &x1124); 
   fscanf(fp,"%f", &x1125); 
   fscanf(fp,"%f", &x1126); 
   fscanf(fp,"%f", &x1127); 
   fscanf(fp,"%f", &x1128); 
   fscanf(fp,"%f", &x1129); 
   fscanf(fp,"%f", &x1130); 
   fscanf(fp,"%f", &x1131); 
   fscanf(fp,"%f", &x1132); 
   fscanf(fp,"%f", &x1133); 
   fscanf(fp,"%f", &x1134); 
   fscanf(fp,"%f", &x1135); 
   fscanf(fp,"%f", &x1196); 
   fscanf(fp,"%f", &x1197); 
   fscanf(fp,"%f", &x1198); 
   fscanf(fp,"%f", &x1199); 
   fscanf(fp,"%f", &x1200); 
   fscanf(fp,"%f", &x1201); 
   fscanf(fp,"%f", &x1202); 
   fscanf(fp,"%f", &x1203); 
   fscanf(fp,"%f", &x1204); 
   fscanf(fp,"%f", &x1205); 
   fscanf(fp,"%f", &x1206); 
   fscanf(fp,"%f", &x1207); 
   fscanf(fp,"%f", &x1208); 
   fscanf(fp,"%f", &x1209); 
   fscanf(fp,"%f", &x1210); 
   fscanf(fp,"%f", &x1211); 
   fscanf(fp,"%f", &x1212); 
   fscanf(fp,"%f", &x1213); 
   fscanf(fp,"%f", &x1214); 
   fscanf(fp,"%f", &x1215); 
   fscanf(fp,"%f", &x1216); 
   fscanf(fp,"%f", &x1217); 
   fscanf(fp,"%f", &x1218); 
   fscanf(fp,"%f", &x1219); 
   fscanf(fp,"%f", &x1280); 
   fscanf(fp,"%f", &x1281); 
   fscanf(fp,"%f", &x1282); 
   fscanf(fp,"%f", &x1283); 
   fscanf(fp,"%f", &x1284); 
   fscanf(fp,"%f", &x1285); 
   fscanf(fp,"%f", &x1286); 
   fscanf(fp,"%f", &x1287); 
   fscanf(fp,"%f", &x1288); 
   fscanf(fp,"%f", &x1289); 
   fscanf(fp,"%f", &x1290); 
   fscanf(fp,"%f", &x1291); 
   fscanf(fp,"%f", &x1292); 
   fscanf(fp,"%f", &x1293); 
   fscanf(fp,"%f", &x1294); 
   fscanf(fp,"%f", &x1295); 
   fscanf(fp,"%f", &x1296); 
   fscanf(fp,"%f", &x1297); 
   fscanf(fp,"%f", &x1298); 
   fscanf(fp,"%f", &x1299); 
   fscanf(fp,"%f", &x1300); 
   fscanf(fp,"%f", &x1301); 
   fscanf(fp,"%f", &x1302); 
   fscanf(fp,"%f", &x1303); 
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

   fclose(fp);
   res=-( - 0.1*x692 - 0.3*x693 - 0.5*x694 - 0.167*x695 - 0.3*x696
 - 0.433*x697 - 0.1*x698 - 0.3*x699 - 0.5*x700 - 0.167*x701 - 0.3*x702
 - 0.433*x703 - 0.1*x704 - 0.3*x705 - 0.5*x706 - 0.167*x707 - 0.3*x708
 - 0.433*x709 - 0.1*x710 - 0.3*x711 - 0.5*x712 - 0.167*x713 - 0.3*x714
 - 0.433*x715 - 0.1*x776 - 0.3*x777 - 0.5*x778 - 0.167*x779 - 0.3*x780
 - 0.433*x781 - 0.1*x782 - 0.3*x783 - 0.5*x784 - 0.167*x785 - 0.3*x786
 - 0.433*x787 - 0.1*x788 - 0.3*x789 - 0.5*x790 - 0.167*x791 - 0.3*x792
 - 0.433*x793 - 0.1*x794 - 0.3*x795 - 0.5*x796 - 0.167*x797 - 0.3*x798
 - 0.433*x799 - 0.1*x860 - 0.3*x861 - 0.5*x862 - 0.167*x863 - 0.3*x864
 - 0.433*x865 - 0.1*x866 - 0.3*x867 - 0.5*x868 - 0.167*x869 - 0.3*x870
 - 0.433*x871 - 0.1*x872 - 0.3*x873 - 0.5*x874 - 0.167*x875 - 0.3*x876
 - 0.433*x877 - 0.1*x878 - 0.3*x879 - 0.5*x880 - 0.167*x881 - 0.3*x882
 - 0.433*x883 - 0.1*x944 - 0.3*x945 - 0.5*x946 - 0.167*x947 - 0.3*x948
 - 0.433*x949 - 0.1*x950 - 0.3*x951 - 0.5*x952 - 0.167*x953 - 0.3*x954
 - 0.433*x955 - 0.1*x956 - 0.3*x957 - 0.5*x958 - 0.167*x959 - 0.3*x960
 - 0.433*x961 - 0.1*x962 - 0.3*x963 - 0.5*x964 - 0.167*x965 - 0.3*x966
 - 0.433*x967 - 0.1*x1028 - 0.3*x1029 - 0.5*x1030 - 0.167*x1031
 - 0.3*x1032 - 0.433*x1033 - 0.1*x1034 - 0.3*x1035 - 0.5*x1036
 - 0.167*x1037 - 0.3*x1038 - 0.433*x1039 - 0.1*x1040 - 0.3*x1041
 - 0.5*x1042 - 0.167*x1043 - 0.3*x1044 - 0.433*x1045 - 0.1*x1046
 - 0.3*x1047 - 0.5*x1048 - 0.167*x1049 - 0.3*x1050 - 0.433*x1051
 - 0.1*x1112 - 0.3*x1113 - 0.5*x1114 - 0.167*x1115 - 0.3*x1116
 - 0.433*x1117 - 0.1*x1118 - 0.3*x1119 - 0.5*x1120 - 0.167*x1121
 - 0.3*x1122 - 0.433*x1123 - 0.1*x1124 - 0.3*x1125 - 0.5*x1126
 - 0.167*x1127 - 0.3*x1128 - 0.433*x1129 - 0.1*x1130 - 0.3*x1131
 - 0.5*x1132 - 0.167*x1133 - 0.3*x1134 - 0.433*x1135 - 0.1*x1196
 - 0.3*x1197 - 0.5*x1198 - 0.167*x1199 - 0.3*x1200 - 0.433*x1201
 - 0.1*x1202 - 0.3*x1203 - 0.5*x1204 - 0.167*x1205 - 0.3*x1206
 - 0.433*x1207 - 0.1*x1208 - 0.3*x1209 - 0.5*x1210 - 0.167*x1211
 - 0.3*x1212 - 0.433*x1213 - 0.1*x1214 - 0.3*x1215 - 0.5*x1216
 - 0.167*x1217 - 0.3*x1218 - 0.433*x1219 - 0.1*x1280 - 0.3*x1281
 - 0.5*x1282 - 0.167*x1283 - 0.3*x1284 - 0.433*x1285 - 0.1*x1286
 - 0.3*x1287 - 0.5*x1288 - 0.167*x1289 - 0.3*x1290 - 0.433*x1291
 - 0.1*x1292 - 0.3*x1293 - 0.5*x1294 - 0.167*x1295 - 0.3*x1296
 - 0.433*x1297 - 0.1*x1298 - 0.3*x1299 - 0.5*x1300 - 0.167*x1301
 - 0.3*x1302 - 0.433*x1303 - 0.1*x1364 - 0.3*x1365 - 0.5*x1366
 - 0.167*x1367 - 0.3*x1368 - 0.433*x1369 - 0.1*x1370 - 0.3*x1371
 - 0.5*x1372 - 0.167*x1373 - 0.3*x1374 - 0.433*x1375 - 0.1*x1376
 - 0.3*x1377 - 0.5*x1378 - 0.167*x1379 - 0.3*x1380 - 0.433*x1381
 - 0.1*x1382 - 0.3*x1383 - 0.5*x1384 - 0.167*x1385 - 0.3*x1386
 - 0.433*x1387 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
