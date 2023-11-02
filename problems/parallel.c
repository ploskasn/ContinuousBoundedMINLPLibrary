#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="parallel";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x26,x51,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x82,x83,x84,x85,x86,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,x122,x123,x124,x125,x126,x127,x128,x129,x130,x131,x132,x133,x134,x135,x136,x142,x143,x144,x145,x146,x147,x148,x149,x150,x151,x152,x153,x154,x155,x156,x157,x158,x159,x160,x161,x162,x163,x164,x165,x166,x172,x173,x174,x175,x176,x177,x178,x179,x180,x181,x182,x183,x184,x185,x186,x187,x188,x189,x190,x191,x192,x193,x194,x195,x196,x72,x73,x74,x75,x76,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x202,x203,x204,x205;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x50); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x90); 
   fscanf(fp,"%f", &x91); 
   fscanf(fp,"%f", &x92); 
   fscanf(fp,"%f", &x93); 
   fscanf(fp,"%f", &x94); 
   fscanf(fp,"%f", &x95); 
   fscanf(fp,"%f", &x96); 
   fscanf(fp,"%f", &x97); 
   fscanf(fp,"%f", &x98); 
   fscanf(fp,"%f", &x99); 
   fscanf(fp,"%f", &x100); 
   fscanf(fp,"%f", &x101); 
   fscanf(fp,"%f", &x102); 
   fscanf(fp,"%f", &x103); 
   fscanf(fp,"%f", &x104); 
   fscanf(fp,"%f", &x105); 
   fscanf(fp,"%f", &x106); 
   fscanf(fp,"%f", &x112); 
   fscanf(fp,"%f", &x113); 
   fscanf(fp,"%f", &x114); 
   fscanf(fp,"%f", &x115); 
   fscanf(fp,"%f", &x116); 
   fscanf(fp,"%f", &x117); 
   fscanf(fp,"%f", &x118); 
   fscanf(fp,"%f", &x119); 
   fscanf(fp,"%f", &x120); 
   fscanf(fp,"%f", &x121); 
   fscanf(fp,"%f", &x122); 
   fscanf(fp,"%f", &x123); 
   fscanf(fp,"%f", &x124); 
   fscanf(fp,"%f", &x125); 
   fscanf(fp,"%f", &x126); 
   fscanf(fp,"%f", &x127); 
   fscanf(fp,"%f", &x128); 
   fscanf(fp,"%f", &x129); 
   fscanf(fp,"%f", &x130); 
   fscanf(fp,"%f", &x131); 
   fscanf(fp,"%f", &x132); 
   fscanf(fp,"%f", &x133); 
   fscanf(fp,"%f", &x134); 
   fscanf(fp,"%f", &x135); 
   fscanf(fp,"%f", &x136); 
   fscanf(fp,"%f", &x142); 
   fscanf(fp,"%f", &x143); 
   fscanf(fp,"%f", &x144); 
   fscanf(fp,"%f", &x145); 
   fscanf(fp,"%f", &x146); 
   fscanf(fp,"%f", &x147); 
   fscanf(fp,"%f", &x148); 
   fscanf(fp,"%f", &x149); 
   fscanf(fp,"%f", &x150); 
   fscanf(fp,"%f", &x151); 
   fscanf(fp,"%f", &x152); 
   fscanf(fp,"%f", &x153); 
   fscanf(fp,"%f", &x154); 
   fscanf(fp,"%f", &x155); 
   fscanf(fp,"%f", &x156); 
   fscanf(fp,"%f", &x157); 
   fscanf(fp,"%f", &x158); 
   fscanf(fp,"%f", &x159); 
   fscanf(fp,"%f", &x160); 
   fscanf(fp,"%f", &x161); 
   fscanf(fp,"%f", &x162); 
   fscanf(fp,"%f", &x163); 
   fscanf(fp,"%f", &x164); 
   fscanf(fp,"%f", &x165); 
   fscanf(fp,"%f", &x166); 
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
   fscanf(fp,"%f", &x72); 
   fscanf(fp,"%f", &x73); 
   fscanf(fp,"%f", &x74); 
   fscanf(fp,"%f", &x75); 
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x60); 
   fscanf(fp,"%f", &x61); 
   fscanf(fp,"%f", &x62); 
   fscanf(fp,"%f", &x63); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &x202); 
   fscanf(fp,"%f", &x203); 
   fscanf(fp,"%f", &x204); 
   fscanf(fp,"%f", &x205); 

   fclose(fp);
   res=-(-(1013.33333333333*x26/x51 + 1013.33333333333*x27/x51 + 1013.33333333333
  *x28/x51 + 1013.33333333333*x29/x51 + 1013.33333333333*x30/x51 + 781.25*
  x31/x51 + 781.25*x32/x51 + 781.25*x33/x51 + 781.25*x34/x51 + 781.25*x35/
  x51 + 962.5*x36/x51 + 962.5*x37/x51 + 962.5*x38/x51 + 962.5*x39/x51 +
   962.5*x40/x51 + 937.5*x41/x51 + 937.5*x42/x51 + 937.5*x43/x51 + 937.5*
  x44/x51 + 937.5*x45/x51 + 923.203125*x46/x51 + 923.203125*x47/x51 +
   923.203125*x48/x51 + 923.203125*x49/x51 + 923.203125*x50/x51 - 1406.25*
  x82/x51 - 1406.25*x83/x51 - 1406.25*x84/x51 - 1406.25*x85/x51 - 1406.25*
  x86/x51 - 4331.25*x87/x51 - 4331.25*x88/x51 - 4331.25*x89/x51 - 4331.25*
  x90/x51 - 4331.25*x91/x51 - 3375*x92/x51 - 3375*x93/x51 - 3375*x94/x51
   - 3375*x95/x51 - 3375*x96/x51 - 4154.4140625*x97/x51 - 4154.4140625*x98
  /x51 - 4154.4140625*x99/x51 - 4154.4140625*x100/x51 - 4154.4140625*x101/
  x51 - 1824*x102/x51 - 1824*x103/x51 - 1824*x104/x51 - 1824*x105/x51 -
   1824*x106/x51 - 2598.75*x112/x51 - 2598.75*x113/x51 - 2598.75*x114/x51
   - 2598.75*x115/x51 - 2598.75*x116/x51 - 1687.5*x117/x51 - 1687.5*x118/
  x51 - 1687.5*x119/x51 - 1687.5*x120/x51 - 1687.5*x121/x51 - 2492.6484375
  *x122/x51 - 2492.6484375*x123/x51 - 2492.6484375*x124/x51 - 2492.6484375
  *x125/x51 - 2492.6484375*x126/x51 - 4560*x127/x51 - 4560*x128/x51 - 4560
  *x129/x51 - 4560*x130/x51 - 4560*x131/x51 - 2109.375*x132/x51 - 2109.375
  *x133/x51 - 2109.375*x134/x51 - 2109.375*x135/x51 - 2109.375*x136/x51 -
   1687.5*x142/x51 - 1687.5*x143/x51 - 1687.5*x144/x51 - 1687.5*x145/x51 -
   1687.5*x146/x51 - 4985.296875*x147/x51 - 4985.296875*x148/x51 -
   4985.296875*x149/x51 - 4985.296875*x150/x51 - 4985.296875*x151/x51 -
   3648*x152/x51 - 3648*x153/x51 - 3648*x154/x51 - 3648*x155/x51 - 3648*
  x156/x51 - 1406.25*x157/x51 - 1406.25*x158/x51 - 1406.25*x159/x51 -
   1406.25*x160/x51 - 1406.25*x161/x51 - 1732.5*x162/x51 - 1732.5*x163/x51
   - 1732.5*x164/x51 - 1732.5*x165/x51 - 1732.5*x166/x51 - 4154.4140625*
  x172/x51 - 4154.4140625*x173/x51 - 4154.4140625*x174/x51 - 4154.4140625*
  x175/x51 - 4154.4140625*x176/x51 - 4560*x177/x51 - 4560*x178/x51 - 4560*
  x179/x51 - 4560*x180/x51 - 4560*x181/x51 - 2109.375*x182/x51 - 2109.375*
  x183/x51 - 2109.375*x184/x51 - 2109.375*x185/x51 - 2109.375*x186/x51 -
   5197.5*x187/x51 - 5197.5*x188/x51 - 5197.5*x189/x51 - 5197.5*x190/x51 -
   5197.5*x191/x51 - 4218.75*x192/x51 - 4218.75*x193/x51 - 4218.75*x194/x51
   - 4218.75*x195/x51 - 4218.75*x196/x51 - (2500*x72/x51 + 2500*x73/x51 +
   2500*x74/x51 + 2500*x75/x51 + 2500*x76/x51) + 3*x72 + 3*x73 + 3*x74 + 3*
  x75 + 3*x76) - 2.63768115942029*x52 - 2.63768115942029*x53
   - 2.63768115942029*x54 - 2.63768115942029*x55 - 2.63768115942029*x56
   - 2.81449275362319*x57 - 2.81449275362319*x58 - 2.81449275362319*x59
   - 2.81449275362319*x60 - 2.81449275362319*x61 - 2.88405797101449*x62
   - 2.88405797101449*x63 - 2.88405797101449*x64 - 2.88405797101449*x65
   - 2.88405797101449*x66 - 2.88405797101449*x67 - 2.88405797101449*x68
   - 2.88405797101449*x69 - 2.88405797101449*x70 - 2.88405797101449*x71
   - 100000*x202 - 100000*x203 - 100000*x204 - 100000*x205  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
