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
   char *problemname="slay09h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x10,x2,x11,x3,x12,x4,x13,x5,x14,x6,x15,x7,x16,x8,x17,x9,x18,x739,x740,x741,x742,x743,x744,x745,x746,x747,x748,x749,x750,x751,x752,x753,x754,x755,x756,x757,x758,x759,x760,x761,x762,x763,x764,x765,x766,x767,x768,x769,x770,x771,x772,x773,x774,x775,x776,x777,x778,x779,x780,x781,x782,x783,x784,x785,x786,x787,x788,x789,x790,x791,x792,x793,x794,x795,x796,x797,x798,x799,x800,x801,x802,x803,x804,x805,x806,x807,x808,x809,x810;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x18); 
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
   fscanf(fp,"%f", &x800); 
   fscanf(fp,"%f", &x801); 
   fscanf(fp,"%f", &x802); 
   fscanf(fp,"%f", &x803); 
   fscanf(fp,"%f", &x804); 
   fscanf(fp,"%f", &x805); 
   fscanf(fp,"%f", &x806); 
   fscanf(fp,"%f", &x807); 
   fscanf(fp,"%f", &x808); 
   fscanf(fp,"%f", &x809); 
   fscanf(fp,"%f", &x810); 

   fclose(fp);
   res=-(-(150*(sqr((-4) + x1) + sqr((-10) + x10)) + 390*(sqr((-10) + x2) + sqr((-
15) + x11)) + 240*(sqr((-7) + x3) + sqr((-9) + x12)) + 70*(sqr((-3) + x4)
 + sqr((-3) + x13)) + 165*(sqr((-20) + x5) + sqr((-17) + x14)) + 100*(sqr(
(-18) + x6) + sqr((-8) + x15)) + 200*(sqr((-30) + x7) + sqr((-20) + x16))
 + 400*(sqr((-24) + x8) + sqr((-10) + x17)) + 330*(sqr((-22) + x9) + sqr((
-6) + x18))) - 300*x739 - 240*x740 - 210*x741 - 140*x742 - 300*x743
 - 250*x744 - 300*x745 - 210*x746 - 100*x747 - 150*x748 - 220*x749
 - 200*x750 - 300*x751 - 290*x752 - 400*x753 - 120*x754 - 300*x755
 - 150*x756 - 150*x757 - 100*x758 - 290*x759 - 100*x760 - 120*x761
 - 180*x762 - 220*x763 - 110*x764 - 130*x765 - 190*x766 - 110*x767
 - 160*x768 - 220*x769 - 140*x770 - 120*x771 - 260*x772 - 220*x773
 - 140*x774 - 300*x775 - 240*x776 - 210*x777 - 140*x778 - 300*x779
 - 250*x780 - 300*x781 - 210*x782 - 100*x783 - 150*x784 - 220*x785
 - 200*x786 - 300*x787 - 290*x788 - 400*x789 - 120*x790 - 300*x791
 - 150*x792 - 150*x793 - 100*x794 - 290*x795 - 100*x796 - 120*x797
 - 180*x798 - 220*x799 - 110*x800 - 130*x801 - 190*x802 - 110*x803
 - 160*x804 - 220*x805 - 140*x806 - 120*x807 - 260*x808 - 220*x809
 - 140*x810  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
