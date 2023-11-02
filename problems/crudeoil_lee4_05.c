#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="crudeoil_lee4_05";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x581,x582,x583,x584,x585,x586,x587,x588,x589,x590,x591,x592,x593,x594,x595,x596,x597,x598,x599,x600,x601,x602,x603,x604,x605,x606,x607,x608,x609,x610,x611,x612,x613,x614,x615,x616,x617,x618,x619,x620,x621,x622,x623,x624,x625,x626,x627,x628,x733,x734,x735,x736,x737,x738,x739,x740,x741,x742,x743,x744,x745,x746,x747,x748,x749,x750,x751,x752,x753,x754,x755,x756,x757,x758,x759,x760,x761,x762,x763,x764,x765,x766,x767,x768,x769,x770,x771,x772,x773,x774,x775,x776,x777,x778,x779,x780,x885,x886,x887,x888,x889,x890,x891,x892,x893,x894,x895,x896,x897,x898,x899,x900,x901,x902,x903,x904,x905,x906,x907,x908,x909,x910,x911,x912,x913,x914,x915,x916,x917,x918,x919,x920,x921,x922,x923,x924,x925,x926,x927,x928,x929,x930,x931,x932,x1037,x1038,x1039,x1040,x1041,x1042,x1043,x1044,x1045,x1046,x1047,x1048,x1049,x1050,x1051,x1052,x1053,x1054,x1055,x1056,x1057,x1058,x1059,x1060,x1061,x1062,x1063,x1064,x1065,x1066,x1067,x1068,x1069,x1070,x1071,x1072,x1073,x1074,x1075,x1076,x1077,x1078,x1079,x1080,x1081,x1082,x1083,x1084,x1189,x1190,x1191,x1192,x1193,x1194,x1195,x1196,x1197,x1198,x1199,x1200,x1201,x1202,x1203,x1204,x1205,x1206,x1207,x1208,x1209,x1210,x1211,x1212,x1213,x1214,x1215,x1216,x1217,x1218,x1219,x1220,x1221,x1222,x1223,x1224,x1225,x1226,x1227,x1228,x1229,x1230,x1231,x1232,x1233,x1234,x1235,x1236;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x581); 
   fscanf(fp,"%f", &x582); 
   fscanf(fp,"%f", &x583); 
   fscanf(fp,"%f", &x584); 
   fscanf(fp,"%f", &x585); 
   fscanf(fp,"%f", &x586); 
   fscanf(fp,"%f", &x587); 
   fscanf(fp,"%f", &x588); 
   fscanf(fp,"%f", &x589); 
   fscanf(fp,"%f", &x590); 
   fscanf(fp,"%f", &x591); 
   fscanf(fp,"%f", &x592); 
   fscanf(fp,"%f", &x593); 
   fscanf(fp,"%f", &x594); 
   fscanf(fp,"%f", &x595); 
   fscanf(fp,"%f", &x596); 
   fscanf(fp,"%f", &x597); 
   fscanf(fp,"%f", &x598); 
   fscanf(fp,"%f", &x599); 
   fscanf(fp,"%f", &x600); 
   fscanf(fp,"%f", &x601); 
   fscanf(fp,"%f", &x602); 
   fscanf(fp,"%f", &x603); 
   fscanf(fp,"%f", &x604); 
   fscanf(fp,"%f", &x605); 
   fscanf(fp,"%f", &x606); 
   fscanf(fp,"%f", &x607); 
   fscanf(fp,"%f", &x608); 
   fscanf(fp,"%f", &x609); 
   fscanf(fp,"%f", &x610); 
   fscanf(fp,"%f", &x611); 
   fscanf(fp,"%f", &x612); 
   fscanf(fp,"%f", &x613); 
   fscanf(fp,"%f", &x614); 
   fscanf(fp,"%f", &x615); 
   fscanf(fp,"%f", &x616); 
   fscanf(fp,"%f", &x617); 
   fscanf(fp,"%f", &x618); 
   fscanf(fp,"%f", &x619); 
   fscanf(fp,"%f", &x620); 
   fscanf(fp,"%f", &x621); 
   fscanf(fp,"%f", &x622); 
   fscanf(fp,"%f", &x623); 
   fscanf(fp,"%f", &x624); 
   fscanf(fp,"%f", &x625); 
   fscanf(fp,"%f", &x626); 
   fscanf(fp,"%f", &x627); 
   fscanf(fp,"%f", &x628); 
   fscanf(fp,"%f", &x733); 
   fscanf(fp,"%f", &x734); 
   fscanf(fp,"%f", &x735); 
   fscanf(fp,"%f", &x736); 
   fscanf(fp,"%f", &x737); 
   fscanf(fp,"%f", &x738); 
   fscanf(fp,"%f", &x739); 
   fscanf(fp,"%f", &x740); 
   fscanf(fp,"%f", &x741); 
   fscanf(fp,"%f", &x742); 
   fscanf(fp,"%f", &x743); 
   fscanf(fp,"%f", &x744); 
   fscanf(fp,"%f", &x745); 
   fscanf(fp,"%f", &x746); 
   fscanf(fp,"%f", &x747); 
   fscanf(fp,"%f", &x748); 
   fscanf(fp,"%f", &x749); 
   fscanf(fp,"%f", &x750); 
   fscanf(fp,"%f", &x751); 
   fscanf(fp,"%f", &x752); 
   fscanf(fp,"%f", &x753); 
   fscanf(fp,"%f", &x754); 
   fscanf(fp,"%f", &x755); 
   fscanf(fp,"%f", &x756); 
   fscanf(fp,"%f", &x757); 
   fscanf(fp,"%f", &x758); 
   fscanf(fp,"%f", &x759); 
   fscanf(fp,"%f", &x760); 
   fscanf(fp,"%f", &x761); 
   fscanf(fp,"%f", &x762); 
   fscanf(fp,"%f", &x763); 
   fscanf(fp,"%f", &x764); 
   fscanf(fp,"%f", &x765); 
   fscanf(fp,"%f", &x766); 
   fscanf(fp,"%f", &x767); 
   fscanf(fp,"%f", &x768); 
   fscanf(fp,"%f", &x769); 
   fscanf(fp,"%f", &x770); 
   fscanf(fp,"%f", &x771); 
   fscanf(fp,"%f", &x772); 
   fscanf(fp,"%f", &x773); 
   fscanf(fp,"%f", &x774); 
   fscanf(fp,"%f", &x775); 
   fscanf(fp,"%f", &x776); 
   fscanf(fp,"%f", &x777); 
   fscanf(fp,"%f", &x778); 
   fscanf(fp,"%f", &x779); 
   fscanf(fp,"%f", &x780); 
   fscanf(fp,"%f", &x885); 
   fscanf(fp,"%f", &x886); 
   fscanf(fp,"%f", &x887); 
   fscanf(fp,"%f", &x888); 
   fscanf(fp,"%f", &x889); 
   fscanf(fp,"%f", &x890); 
   fscanf(fp,"%f", &x891); 
   fscanf(fp,"%f", &x892); 
   fscanf(fp,"%f", &x893); 
   fscanf(fp,"%f", &x894); 
   fscanf(fp,"%f", &x895); 
   fscanf(fp,"%f", &x896); 
   fscanf(fp,"%f", &x897); 
   fscanf(fp,"%f", &x898); 
   fscanf(fp,"%f", &x899); 
   fscanf(fp,"%f", &x900); 
   fscanf(fp,"%f", &x901); 
   fscanf(fp,"%f", &x902); 
   fscanf(fp,"%f", &x903); 
   fscanf(fp,"%f", &x904); 
   fscanf(fp,"%f", &x905); 
   fscanf(fp,"%f", &x906); 
   fscanf(fp,"%f", &x907); 
   fscanf(fp,"%f", &x908); 
   fscanf(fp,"%f", &x909); 
   fscanf(fp,"%f", &x910); 
   fscanf(fp,"%f", &x911); 
   fscanf(fp,"%f", &x912); 
   fscanf(fp,"%f", &x913); 
   fscanf(fp,"%f", &x914); 
   fscanf(fp,"%f", &x915); 
   fscanf(fp,"%f", &x916); 
   fscanf(fp,"%f", &x917); 
   fscanf(fp,"%f", &x918); 
   fscanf(fp,"%f", &x919); 
   fscanf(fp,"%f", &x920); 
   fscanf(fp,"%f", &x921); 
   fscanf(fp,"%f", &x922); 
   fscanf(fp,"%f", &x923); 
   fscanf(fp,"%f", &x924); 
   fscanf(fp,"%f", &x925); 
   fscanf(fp,"%f", &x926); 
   fscanf(fp,"%f", &x927); 
   fscanf(fp,"%f", &x928); 
   fscanf(fp,"%f", &x929); 
   fscanf(fp,"%f", &x930); 
   fscanf(fp,"%f", &x931); 
   fscanf(fp,"%f", &x932); 
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
   fscanf(fp,"%f", &x1052); 
   fscanf(fp,"%f", &x1053); 
   fscanf(fp,"%f", &x1054); 
   fscanf(fp,"%f", &x1055); 
   fscanf(fp,"%f", &x1056); 
   fscanf(fp,"%f", &x1057); 
   fscanf(fp,"%f", &x1058); 
   fscanf(fp,"%f", &x1059); 
   fscanf(fp,"%f", &x1060); 
   fscanf(fp,"%f", &x1061); 
   fscanf(fp,"%f", &x1062); 
   fscanf(fp,"%f", &x1063); 
   fscanf(fp,"%f", &x1064); 
   fscanf(fp,"%f", &x1065); 
   fscanf(fp,"%f", &x1066); 
   fscanf(fp,"%f", &x1067); 
   fscanf(fp,"%f", &x1068); 
   fscanf(fp,"%f", &x1069); 
   fscanf(fp,"%f", &x1070); 
   fscanf(fp,"%f", &x1071); 
   fscanf(fp,"%f", &x1072); 
   fscanf(fp,"%f", &x1073); 
   fscanf(fp,"%f", &x1074); 
   fscanf(fp,"%f", &x1075); 
   fscanf(fp,"%f", &x1076); 
   fscanf(fp,"%f", &x1077); 
   fscanf(fp,"%f", &x1078); 
   fscanf(fp,"%f", &x1079); 
   fscanf(fp,"%f", &x1080); 
   fscanf(fp,"%f", &x1081); 
   fscanf(fp,"%f", &x1082); 
   fscanf(fp,"%f", &x1083); 
   fscanf(fp,"%f", &x1084); 
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
   fscanf(fp,"%f", &x1220); 
   fscanf(fp,"%f", &x1221); 
   fscanf(fp,"%f", &x1222); 
   fscanf(fp,"%f", &x1223); 
   fscanf(fp,"%f", &x1224); 
   fscanf(fp,"%f", &x1225); 
   fscanf(fp,"%f", &x1226); 
   fscanf(fp,"%f", &x1227); 
   fscanf(fp,"%f", &x1228); 
   fscanf(fp,"%f", &x1229); 
   fscanf(fp,"%f", &x1230); 
   fscanf(fp,"%f", &x1231); 
   fscanf(fp,"%f", &x1232); 
   fscanf(fp,"%f", &x1233); 
   fscanf(fp,"%f", &x1234); 
   fscanf(fp,"%f", &x1235); 
   fscanf(fp,"%f", &x1236); 

   fclose(fp);
   res=-( - 0.3*x581 - 0.5*x582 - 0.65*x583 - 0.31*x584 - 0.75*x585
 - 0.317*x586 - 0.483*x587 - 0.633*x588 - 0.3*x589 - 0.5*x590 - 0.65*x591
 - 0.31*x592 - 0.75*x593 - 0.317*x594 - 0.483*x595 - 0.633*x596 - 0.3*x597
 - 0.5*x598 - 0.65*x599 - 0.31*x600 - 0.75*x601 - 0.317*x602 - 0.483*x603
 - 0.633*x604 - 0.3*x605 - 0.5*x606 - 0.65*x607 - 0.31*x608 - 0.75*x609
 - 0.317*x610 - 0.483*x611 - 0.633*x612 - 0.3*x613 - 0.5*x614 - 0.65*x615
 - 0.31*x616 - 0.75*x617 - 0.317*x618 - 0.483*x619 - 0.633*x620 - 0.3*x621
 - 0.5*x622 - 0.65*x623 - 0.31*x624 - 0.75*x625 - 0.317*x626 - 0.483*x627
 - 0.633*x628 - 0.3*x733 - 0.5*x734 - 0.65*x735 - 0.31*x736 - 0.75*x737
 - 0.317*x738 - 0.483*x739 - 0.633*x740 - 0.3*x741 - 0.5*x742 - 0.65*x743
 - 0.31*x744 - 0.75*x745 - 0.317*x746 - 0.483*x747 - 0.633*x748 - 0.3*x749
 - 0.5*x750 - 0.65*x751 - 0.31*x752 - 0.75*x753 - 0.317*x754 - 0.483*x755
 - 0.633*x756 - 0.3*x757 - 0.5*x758 - 0.65*x759 - 0.31*x760 - 0.75*x761
 - 0.317*x762 - 0.483*x763 - 0.633*x764 - 0.3*x765 - 0.5*x766 - 0.65*x767
 - 0.31*x768 - 0.75*x769 - 0.317*x770 - 0.483*x771 - 0.633*x772 - 0.3*x773
 - 0.5*x774 - 0.65*x775 - 0.31*x776 - 0.75*x777 - 0.317*x778 - 0.483*x779
 - 0.633*x780 - 0.3*x885 - 0.5*x886 - 0.65*x887 - 0.31*x888 - 0.75*x889
 - 0.317*x890 - 0.483*x891 - 0.633*x892 - 0.3*x893 - 0.5*x894 - 0.65*x895
 - 0.31*x896 - 0.75*x897 - 0.317*x898 - 0.483*x899 - 0.633*x900 - 0.3*x901
 - 0.5*x902 - 0.65*x903 - 0.31*x904 - 0.75*x905 - 0.317*x906 - 0.483*x907
 - 0.633*x908 - 0.3*x909 - 0.5*x910 - 0.65*x911 - 0.31*x912 - 0.75*x913
 - 0.317*x914 - 0.483*x915 - 0.633*x916 - 0.3*x917 - 0.5*x918 - 0.65*x919
 - 0.31*x920 - 0.75*x921 - 0.317*x922 - 0.483*x923 - 0.633*x924 - 0.3*x925
 - 0.5*x926 - 0.65*x927 - 0.31*x928 - 0.75*x929 - 0.317*x930 - 0.483*x931
 - 0.633*x932 - 0.3*x1037 - 0.5*x1038 - 0.65*x1039 - 0.31*x1040
 - 0.75*x1041 - 0.317*x1042 - 0.483*x1043 - 0.633*x1044 - 0.3*x1045
 - 0.5*x1046 - 0.65*x1047 - 0.31*x1048 - 0.75*x1049 - 0.317*x1050
 - 0.483*x1051 - 0.633*x1052 - 0.3*x1053 - 0.5*x1054 - 0.65*x1055
 - 0.31*x1056 - 0.75*x1057 - 0.317*x1058 - 0.483*x1059 - 0.633*x1060
 - 0.3*x1061 - 0.5*x1062 - 0.65*x1063 - 0.31*x1064 - 0.75*x1065
 - 0.317*x1066 - 0.483*x1067 - 0.633*x1068 - 0.3*x1069 - 0.5*x1070
 - 0.65*x1071 - 0.31*x1072 - 0.75*x1073 - 0.317*x1074 - 0.483*x1075
 - 0.633*x1076 - 0.3*x1077 - 0.5*x1078 - 0.65*x1079 - 0.31*x1080
 - 0.75*x1081 - 0.317*x1082 - 0.483*x1083 - 0.633*x1084 - 0.3*x1189
 - 0.5*x1190 - 0.65*x1191 - 0.31*x1192 - 0.75*x1193 - 0.317*x1194
 - 0.483*x1195 - 0.633*x1196 - 0.3*x1197 - 0.5*x1198 - 0.65*x1199
 - 0.31*x1200 - 0.75*x1201 - 0.317*x1202 - 0.483*x1203 - 0.633*x1204
 - 0.3*x1205 - 0.5*x1206 - 0.65*x1207 - 0.31*x1208 - 0.75*x1209
 - 0.317*x1210 - 0.483*x1211 - 0.633*x1212 - 0.3*x1213 - 0.5*x1214
 - 0.65*x1215 - 0.31*x1216 - 0.75*x1217 - 0.317*x1218 - 0.483*x1219
 - 0.633*x1220 - 0.3*x1221 - 0.5*x1222 - 0.65*x1223 - 0.31*x1224
 - 0.75*x1225 - 0.317*x1226 - 0.483*x1227 - 0.633*x1228 - 0.3*x1229
 - 0.5*x1230 - 0.65*x1231 - 0.31*x1232 - 0.75*x1233 - 0.317*x1234
 - 0.483*x1235 - 0.633*x1236 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
