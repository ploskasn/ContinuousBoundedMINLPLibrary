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
   char *problemname="methanol400";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x52,x1354,x1357,x1360,x53,x1355,x1358,x1361,x54,x1356,x1359,x1362,x70,x1408,x1411,x1414,x71,x1409,x1412,x1415,x72,x1410,x1413,x1416,x85,x1453,x1456,x1459,x86,x1454,x1457,x1460,x87,x1455,x1458,x1461,x130,x1588,x1591,x1594,x131,x1589,x1592,x1595,x132,x1590,x1593,x1596,x250,x1948,x1951,x1954,x251,x1949,x1952,x1955,x252,x1950,x1953,x1956,x292,x2074,x2077,x2080,x293,x2075,x2078,x2081,x294,x2076,x2079,x2082,x379,x2335,x2338,x2341,x380,x2336,x2339,x2342,x381,x2337,x2340,x2343,x424,x2470,x2473,x2476,x425,x2471,x2474,x2477,x426,x2472,x2475,x2478,x448,x2542,x2545,x2548,x449,x2543,x2546,x2549,x450,x2544,x2547,x2550,x535,x2803,x2806,x2809,x536,x2804,x2807,x2810,x537,x2805,x2808,x2811,x592,x2974,x2977,x2980,x593,x2975,x2978,x2981,x594,x2976,x2979,x2982,x727,x3379,x3382,x3385,x728,x3380,x3383,x3386,x729,x3381,x3384,x3387,x802,x3604,x3607,x3610,x803,x3605,x3608,x3611,x804,x3606,x3609,x3612,x979,x4135,x4138,x4141,x980,x4136,x4139,x4142,x981,x4137,x4140,x4143,x1003,x4207,x4210,x4213,x1004,x4208,x4211,x4214,x1005,x4209,x4212,x4215,x1198,x4792,x4795,x4798,x1199,x4793,x4796,x4799,x1200,x4794,x4797,x4800;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x1354); 
   fscanf(fp,"%f", &x1357); 
   fscanf(fp,"%f", &x1360); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x1355); 
   fscanf(fp,"%f", &x1358); 
   fscanf(fp,"%f", &x1361); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x1356); 
   fscanf(fp,"%f", &x1359); 
   fscanf(fp,"%f", &x1362); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x1408); 
   fscanf(fp,"%f", &x1411); 
   fscanf(fp,"%f", &x1414); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &x1409); 
   fscanf(fp,"%f", &x1412); 
   fscanf(fp,"%f", &x1415); 
   fscanf(fp,"%f", &x72); 
   fscanf(fp,"%f", &x1410); 
   fscanf(fp,"%f", &x1413); 
   fscanf(fp,"%f", &x1416); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x1453); 
   fscanf(fp,"%f", &x1456); 
   fscanf(fp,"%f", &x1459); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x1454); 
   fscanf(fp,"%f", &x1457); 
   fscanf(fp,"%f", &x1460); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x1455); 
   fscanf(fp,"%f", &x1458); 
   fscanf(fp,"%f", &x1461); 
   fscanf(fp,"%f", &x130); 
   fscanf(fp,"%f", &x1588); 
   fscanf(fp,"%f", &x1591); 
   fscanf(fp,"%f", &x1594); 
   fscanf(fp,"%f", &x131); 
   fscanf(fp,"%f", &x1589); 
   fscanf(fp,"%f", &x1592); 
   fscanf(fp,"%f", &x1595); 
   fscanf(fp,"%f", &x132); 
   fscanf(fp,"%f", &x1590); 
   fscanf(fp,"%f", &x1593); 
   fscanf(fp,"%f", &x1596); 
   fscanf(fp,"%f", &x250); 
   fscanf(fp,"%f", &x1948); 
   fscanf(fp,"%f", &x1951); 
   fscanf(fp,"%f", &x1954); 
   fscanf(fp,"%f", &x251); 
   fscanf(fp,"%f", &x1949); 
   fscanf(fp,"%f", &x1952); 
   fscanf(fp,"%f", &x1955); 
   fscanf(fp,"%f", &x252); 
   fscanf(fp,"%f", &x1950); 
   fscanf(fp,"%f", &x1953); 
   fscanf(fp,"%f", &x1956); 
   fscanf(fp,"%f", &x292); 
   fscanf(fp,"%f", &x2074); 
   fscanf(fp,"%f", &x2077); 
   fscanf(fp,"%f", &x2080); 
   fscanf(fp,"%f", &x293); 
   fscanf(fp,"%f", &x2075); 
   fscanf(fp,"%f", &x2078); 
   fscanf(fp,"%f", &x2081); 
   fscanf(fp,"%f", &x294); 
   fscanf(fp,"%f", &x2076); 
   fscanf(fp,"%f", &x2079); 
   fscanf(fp,"%f", &x2082); 
   fscanf(fp,"%f", &x379); 
   fscanf(fp,"%f", &x2335); 
   fscanf(fp,"%f", &x2338); 
   fscanf(fp,"%f", &x2341); 
   fscanf(fp,"%f", &x380); 
   fscanf(fp,"%f", &x2336); 
   fscanf(fp,"%f", &x2339); 
   fscanf(fp,"%f", &x2342); 
   fscanf(fp,"%f", &x381); 
   fscanf(fp,"%f", &x2337); 
   fscanf(fp,"%f", &x2340); 
   fscanf(fp,"%f", &x2343); 
   fscanf(fp,"%f", &x424); 
   fscanf(fp,"%f", &x2470); 
   fscanf(fp,"%f", &x2473); 
   fscanf(fp,"%f", &x2476); 
   fscanf(fp,"%f", &x425); 
   fscanf(fp,"%f", &x2471); 
   fscanf(fp,"%f", &x2474); 
   fscanf(fp,"%f", &x2477); 
   fscanf(fp,"%f", &x426); 
   fscanf(fp,"%f", &x2472); 
   fscanf(fp,"%f", &x2475); 
   fscanf(fp,"%f", &x2478); 
   fscanf(fp,"%f", &x448); 
   fscanf(fp,"%f", &x2542); 
   fscanf(fp,"%f", &x2545); 
   fscanf(fp,"%f", &x2548); 
   fscanf(fp,"%f", &x449); 
   fscanf(fp,"%f", &x2543); 
   fscanf(fp,"%f", &x2546); 
   fscanf(fp,"%f", &x2549); 
   fscanf(fp,"%f", &x450); 
   fscanf(fp,"%f", &x2544); 
   fscanf(fp,"%f", &x2547); 
   fscanf(fp,"%f", &x2550); 
   fscanf(fp,"%f", &x535); 
   fscanf(fp,"%f", &x2803); 
   fscanf(fp,"%f", &x2806); 
   fscanf(fp,"%f", &x2809); 
   fscanf(fp,"%f", &x536); 
   fscanf(fp,"%f", &x2804); 
   fscanf(fp,"%f", &x2807); 
   fscanf(fp,"%f", &x2810); 
   fscanf(fp,"%f", &x537); 
   fscanf(fp,"%f", &x2805); 
   fscanf(fp,"%f", &x2808); 
   fscanf(fp,"%f", &x2811); 
   fscanf(fp,"%f", &x592); 
   fscanf(fp,"%f", &x2974); 
   fscanf(fp,"%f", &x2977); 
   fscanf(fp,"%f", &x2980); 
   fscanf(fp,"%f", &x593); 
   fscanf(fp,"%f", &x2975); 
   fscanf(fp,"%f", &x2978); 
   fscanf(fp,"%f", &x2981); 
   fscanf(fp,"%f", &x594); 
   fscanf(fp,"%f", &x2976); 
   fscanf(fp,"%f", &x2979); 
   fscanf(fp,"%f", &x2982); 
   fscanf(fp,"%f", &x727); 
   fscanf(fp,"%f", &x3379); 
   fscanf(fp,"%f", &x3382); 
   fscanf(fp,"%f", &x3385); 
   fscanf(fp,"%f", &x728); 
   fscanf(fp,"%f", &x3380); 
   fscanf(fp,"%f", &x3383); 
   fscanf(fp,"%f", &x3386); 
   fscanf(fp,"%f", &x729); 
   fscanf(fp,"%f", &x3381); 
   fscanf(fp,"%f", &x3384); 
   fscanf(fp,"%f", &x3387); 
   fscanf(fp,"%f", &x802); 
   fscanf(fp,"%f", &x3604); 
   fscanf(fp,"%f", &x3607); 
   fscanf(fp,"%f", &x3610); 
   fscanf(fp,"%f", &x803); 
   fscanf(fp,"%f", &x3605); 
   fscanf(fp,"%f", &x3608); 
   fscanf(fp,"%f", &x3611); 
   fscanf(fp,"%f", &x804); 
   fscanf(fp,"%f", &x3606); 
   fscanf(fp,"%f", &x3609); 
   fscanf(fp,"%f", &x3612); 
   fscanf(fp,"%f", &x979); 
   fscanf(fp,"%f", &x4135); 
   fscanf(fp,"%f", &x4138); 
   fscanf(fp,"%f", &x4141); 
   fscanf(fp,"%f", &x980); 
   fscanf(fp,"%f", &x4136); 
   fscanf(fp,"%f", &x4139); 
   fscanf(fp,"%f", &x4142); 
   fscanf(fp,"%f", &x981); 
   fscanf(fp,"%f", &x4137); 
   fscanf(fp,"%f", &x4140); 
   fscanf(fp,"%f", &x4143); 
   fscanf(fp,"%f", &x1003); 
   fscanf(fp,"%f", &x4207); 
   fscanf(fp,"%f", &x4210); 
   fscanf(fp,"%f", &x4213); 
   fscanf(fp,"%f", &x1004); 
   fscanf(fp,"%f", &x4208); 
   fscanf(fp,"%f", &x4211); 
   fscanf(fp,"%f", &x4214); 
   fscanf(fp,"%f", &x1005); 
   fscanf(fp,"%f", &x4209); 
   fscanf(fp,"%f", &x4212); 
   fscanf(fp,"%f", &x4215); 
   fscanf(fp,"%f", &x1198); 
   fscanf(fp,"%f", &x4792); 
   fscanf(fp,"%f", &x4795); 
   fscanf(fp,"%f", &x4798); 
   fscanf(fp,"%f", &x1199); 
   fscanf(fp,"%f", &x4793); 
   fscanf(fp,"%f", &x4796); 
   fscanf(fp,"%f", &x4799); 
   fscanf(fp,"%f", &x1200); 
   fscanf(fp,"%f", &x4794); 
   fscanf(fp,"%f", &x4797); 
   fscanf(fp,"%f", &x4800); 

   fclose(fp);
   res=-(-(sqr((-1) +  1) + sqr( 0) + sqr( 0) + sqr((-0.7085) + x52 + 0.002315*
   x1354 + 0.000955298573975043*x1357 + 0.000262806440731102*x1360) + sqr(
   (-0.1621) + x53 + 0.002315*x1355 + 0.000955298573975043*x1358 +
    0.000262806440731102*x1361) + sqr((-0.0811) + x54 + 0.002315*x1356 +
    0.000955298573975043*x1359 + 0.000262806440731102*x1362) + sqr((-0.5971
   ) + x70 + 0.000484999999999999*x1408 + 4.19295900178252e-5*x1411 +
    2.41661927018956e-6*x1414) + sqr((-0.1855) + x71 + 0.000484999999999999
   *x1409 + 4.19295900178252e-5*x1412 + 2.41661927018956e-6*x1415) + sqr((
   -0.0965) + x72 + 0.000484999999999999*x1410 + 4.19295900178252e-5*x1413
    + 2.41661927018956e-6*x1416) + sqr((-0.5537) + x85 + 0.00146*x1453 +
    0.000379964349376116*x1456 + 6.59237017337053e-5*x1459) + sqr((-0.1989)
    + x86 + 0.00146*x1454 + 0.000379964349376116*x1457 +
    6.59237017337053e-5*x1460) + sqr((-0.1198) + x87 + 0.00146*x1455 +
    0.000379964349376116*x1458 + 6.59237017337053e-5*x1461) + sqr((-0.3684)
    + x130 + 0.00238499999999998*x1588 + 0.00101394385026737*x1591 +
    0.000287374460236203*x1594) + sqr((-0.2845) + x131 +
    0.00238499999999998*x1589 + 0.00101394385026737*x1592 +
    0.000287374460236203*x1595) + sqr((-0.1535) + x132 +
    0.00238499999999998*x1590 + 0.00101394385026737*x1593 +
    0.000287374460236203*x1596) + sqr((-0.1712) + x250 +
    0.000184999999999991*x1948 + 6.10071301247711e-6*x1951 +
    1.34121438776971e-7*x1954) + sqr((-0.3491) + x251 +
    0.000184999999999991*x1949 + 6.10071301247711e-6*x1952 +
    1.34121438776971e-7*x1955) + sqr((-0.2097) + x252 +
    0.000184999999999991*x1950 + 6.10071301247711e-6*x1953 +
    1.34121438776971e-7*x1956) + sqr((-0.1198) + x292 +
    0.000914999999999999*x2074 + 0.000149237967914438*x2077 +
    1.62273013240298e-5*x2080) + sqr((-0.3098) + x293 +
    0.000914999999999999*x2075 + 0.000149237967914438*x2078 +
    1.62273013240298e-5*x2081) + sqr((-0.2628) + x294 +
    0.000914999999999999*x2076 + 0.000149237967914438*x2079 +
    1.62273013240298e-5*x2082) + sqr((-0.0747) + x379 +
    0.000569999999999959*x2335 + 5.79144385026655e-5*x2338 +
    3.92290314278277e-6*x2341) + sqr((-0.3576) + x380 +
    0.000569999999999959*x2336 + 5.79144385026655e-5*x2339 +
    3.92290314278277e-6*x2342) + sqr((-0.2467) + x381 +
    0.000569999999999959*x2337 + 5.79144385026655e-5*x2340 +
    3.92290314278277e-6*x2343) + sqr((-0.0529) + x424 + 0.00149499999999997
   *x2470 + 0.000398400178253103*x2473 + 7.07793543064024e-5*x2476) + sqr(
   (-0.3347) + x425 + 0.00149499999999997*x2471 + 0.000398400178253103*
   x2474 + 7.07793543064024e-5*x2477) + sqr((-0.2884) + x426 +
    0.00149499999999997*x2472 + 0.000398400178253103*x2475 +
    7.07793543064024e-5*x2478) + sqr((-0.0415) + x448 + 5.49999999999717e-5
   *x2542 + 5.39215686273956e-7*x2545 + 3.52428553120051e-9*x2548) + sqr((
   -0.3388) + x449 + 5.49999999999717e-5*x2543 + 5.39215686273956e-7*x2546
    + 3.52428553120051e-9*x2549) + sqr((-0.2757) + x450 +
    5.49999999999717e-5*x2544 + 5.39215686273956e-7*x2547 +
    3.52428553120051e-9*x2550) + sqr((-0.0261) + x535 + 0.00270999999999999
   *x2803 + 0.00130910873440284*x2806 + 0.000421590572814223*x2809) + sqr(
   (-0.3557) + x536 + 0.00270999999999999*x2804 + 0.00130910873440284*
   x2807 + 0.000421590572814223*x2810) + sqr((-0.3167) + x537 +
    0.00270999999999999*x2805 + 0.00130910873440284*x2808 +
    0.000421590572814223*x2811) + sqr((-0.0208) + x592 +
    0.000415000000000054*x2974 + 3.06996434937692e-5*x2977 +
    1.51400499701912e-6*x2980) + sqr((-0.3483) + x593 +
    0.000415000000000054*x2975 + 3.06996434937692e-5*x2978 +
    1.51400499701912e-6*x2981) + sqr((-0.2954) + x594 +
    0.000415000000000054*x2976 + 3.06996434937692e-5*x2979 +
    1.51400499701912e-6*x2982) + sqr((-0.0085) + x727 + 0.00219000000000003
   *x3379 + 0.000854919786096276*x3382 + 0.000222492493351262*x3385) +
    sqr((-0.3836) + x728 + 0.00219000000000003*x3380 + 0.000854919786096276
   *x3383 + 0.000222492493351262*x3386) + sqr((-0.295) + x729 +
    0.00219000000000003*x3381 + 0.000854919786096276*x3384 +
    0.000222492493351262*x3387) + sqr((-0.0053) + x802 +
    0.00106499999999998*x3604 + 0.00020217914438502*x3607 +
    2.55877348508667e-5*x3610) + sqr((-0.3611) + x803 + 0.00106499999999998
   *x3605 + 0.00020217914438502*x3608 + 2.55877348508667e-5*x3611) + sqr((
   -0.2937) + x804 + 0.00106499999999998*x3606 + 0.00020217914438502*x3609
    + 2.55877348508667e-5*x3612) + sqr((-0.0019) + x979 +
    0.00156999999999996*x4135 + 0.000439376114081974*x4138 +
    8.19751038750662e-5*x4141) + sqr((-0.3609) + x980 + 0.00156999999999996
   *x4136 + 0.000439376114081974*x4139 + 8.19751038750662e-5*x4142) + sqr(
   (-0.2831) + x981 + 0.00156999999999996*x4137 + 0.000439376114081974*
   x4140 + 8.19751038750662e-5*x4143) + sqr((-0.0018) + x1003 +
    0.000129999999999963*x4207 + 3.01247771835838e-6*x4210 +
    4.65385743774782e-8*x4213) + sqr((-0.3485) + x1004 +
    0.000129999999999963*x4208 + 3.01247771835838e-6*x4211 +
    4.65385743774782e-8*x4214) + sqr((-0.2846) + x1005 +
    0.000129999999999963*x4209 + 3.01247771835838e-6*x4212 +
    4.65385743774782e-8*x4215) + sqr((-0.0006) + x1198 +
    0.00280499999999995*x4792 + 0.00140249999999995*x4795 +
    0.000467499999999973*x4798) + sqr((-0.3698) + x1199 +
    0.00280499999999995*x4793 + 0.00140249999999995*x4796 +
    0.000467499999999973*x4799) + sqr((-0.2899) + x1200 +
    0.00280499999999995*x4794 + 0.00140249999999995*x4797 +
    0.000467499999999973*x4800))  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
