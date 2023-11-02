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
   char *problemname="transswitch0118p";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1132,x1133,x1134,x1135,x1136,x1137,x1138,x1139,x1140,x1141,x1142,x1143,x1144,x1145,x1146,x1147,x1148,x1149,x1150,x1151,x1152,x1153,x1154,x1155,x1156,x1157,x1158,x1159,x1160,x1161,x1162,x1163,x1164,x1165,x1166,x1167,x1168,x1169,x1170,x1171,x1172,x1173,x1174,x1175,x1176,x1177,x1178,x1179,x1180,x1181,x1182,x1183,x1184,x1185;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1132); 
   fscanf(fp,"%f", &x1133); 
   fscanf(fp,"%f", &x1134); 
   fscanf(fp,"%f", &x1135); 
   fscanf(fp,"%f", &x1136); 
   fscanf(fp,"%f", &x1137); 
   fscanf(fp,"%f", &x1138); 
   fscanf(fp,"%f", &x1139); 
   fscanf(fp,"%f", &x1140); 
   fscanf(fp,"%f", &x1141); 
   fscanf(fp,"%f", &x1142); 
   fscanf(fp,"%f", &x1143); 
   fscanf(fp,"%f", &x1144); 
   fscanf(fp,"%f", &x1145); 
   fscanf(fp,"%f", &x1146); 
   fscanf(fp,"%f", &x1147); 
   fscanf(fp,"%f", &x1148); 
   fscanf(fp,"%f", &x1149); 
   fscanf(fp,"%f", &x1150); 
   fscanf(fp,"%f", &x1151); 
   fscanf(fp,"%f", &x1152); 
   fscanf(fp,"%f", &x1153); 
   fscanf(fp,"%f", &x1154); 
   fscanf(fp,"%f", &x1155); 
   fscanf(fp,"%f", &x1156); 
   fscanf(fp,"%f", &x1157); 
   fscanf(fp,"%f", &x1158); 
   fscanf(fp,"%f", &x1159); 
   fscanf(fp,"%f", &x1160); 
   fscanf(fp,"%f", &x1161); 
   fscanf(fp,"%f", &x1162); 
   fscanf(fp,"%f", &x1163); 
   fscanf(fp,"%f", &x1164); 
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

   fclose(fp);
   res= 100*sqr(x1132) + 4000*x1132 + 100*sqr(x1133) + 4000*x1133 + 100*sqr(x1134)
 + 4000*x1134 + 100*sqr(x1135) + 4000*x1135 + 222.222*sqr(x1136) + 2000*
x1136 + 1176.47*sqr(x1137) + 2000*x1137 + 100*sqr(x1138) + 4000*x1138 +
 100*sqr(x1139) + 4000*x1139 + 100*sqr(x1140) + 4000*x1140 + 100*sqr(x1141)
 + 4000*x1141 + 454.545*sqr(x1142) + 2000*x1142 + 318.471*sqr(x1143) +
 2000*x1143 + 100*sqr(x1144) + 4000*x1144 + 14285.7*sqr(x1145) + 2000*x1145
 + 100*sqr(x1146) + 4000*x1146 + 100*sqr(x1147) + 4000*x1147 + 100*sqr(
x1148) + 4000*x1148 + 100*sqr(x1149) + 4000*x1149 + 100*sqr(x1150) + 4000*
x1150 + 5263.16*sqr(x1151) + 2000*x1151 + 490.196*sqr(x1152) + 2000*x1152
 + 2083.33*sqr(x1153) + 2000*x1153 + 100*sqr(x1154) + 4000*x1154 + 100*
sqr(x1155) + 4000*x1155 + 645.161*sqr(x1156) + 2000*x1156 + 625*sqr(x1157)
 + 2000*x1157 + 100*sqr(x1158) + 4000*x1158 + 255.754*sqr(x1159) + 2000*
x1159 + 255.102*sqr(x1160) + 2000*x1160 + 193.648*sqr(x1161) + 2000*x1161
 + 100*sqr(x1162) + 4000*x1162 + 100*sqr(x1163) + 4000*x1163 + 100*sqr(
x1164) + 4000*x1164 + 100*sqr(x1165) + 4000*x1165 + 100*sqr(x1166) + 4000*
x1166 + 100*sqr(x1167) + 4000*x1167 + 209.644*sqr(x1168) + 2000*x1168 +
 100*sqr(x1169) + 4000*x1169 + 25000*sqr(x1170) + 2000*x1170 + 164.745*sqr(
x1171) + 2000*x1171 + 100*sqr(x1172) + 4000*x1172 + 100*sqr(x1173) + 4000*
x1173 + 100*sqr(x1174) + 4000*x1174 + 100*sqr(x1175) + 4000*x1175 +
 396.825*sqr(x1176) + 2000*x1176 + 2500*sqr(x1177) + 2000*x1177 + 100*sqr(
x1178) + 4000*x1178 + 100*sqr(x1179) + 4000*x1179 + 100*sqr(x1180) + 4000*
x1180 + 100*sqr(x1181) + 4000*x1181 + 2777.78*sqr(x1182) + 2000*x1182 +
 100*sqr(x1183) + 4000*x1183 + 100*sqr(x1184) + 4000*x1184 + 100*sqr(x1185)
 + 4000*x1185  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
