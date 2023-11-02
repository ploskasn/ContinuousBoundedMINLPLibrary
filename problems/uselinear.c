#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="uselinear";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x717,x718,x719,x720,x721,x722,x723,x724,x725,x726,x727,x728,x729,x730,x731,x732,x733,x734,x735,x736,x737,x738,x739,x740,x741,x742,x743,x744,x745,x746,x747,x748,x749,x750,x751,x752,x753,x754,x755,x756,x757,x758,x759,x760,x761,x762,x763,x764,x765,x766,x767,x768,x769,x770,x771,x772,x773,x774,x776,x898,x899,x6187,x6188,x6190,x6784,x6785,x6788,x6789;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x717); 
   fscanf(fp,"%f", &x718); 
   fscanf(fp,"%f", &x719); 
   fscanf(fp,"%f", &x720); 
   fscanf(fp,"%f", &x721); 
   fscanf(fp,"%f", &x722); 
   fscanf(fp,"%f", &x723); 
   fscanf(fp,"%f", &x724); 
   fscanf(fp,"%f", &x725); 
   fscanf(fp,"%f", &x726); 
   fscanf(fp,"%f", &x727); 
   fscanf(fp,"%f", &x728); 
   fscanf(fp,"%f", &x729); 
   fscanf(fp,"%f", &x730); 
   fscanf(fp,"%f", &x731); 
   fscanf(fp,"%f", &x732); 
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
   fscanf(fp,"%f", &x776); 
   fscanf(fp,"%f", &x898); 
   fscanf(fp,"%f", &x899); 
   fscanf(fp,"%f", &x6187); 
   fscanf(fp,"%f", &x6188); 
   fscanf(fp,"%f", &x6190); 
   fscanf(fp,"%f", &x6784); 
   fscanf(fp,"%f", &x6785); 
   fscanf(fp,"%f", &x6788); 
   fscanf(fp,"%f", &x6789); 

   fclose(fp);
   res=-(- 0.003*x717 - 0.003*x718 - 0.003*x719 - 0.003*x720 - 0.003*x721
    - 0.003*x722 - 0.003*x723 - 0.003*x724 - 0.003*x725 - 0.003*x726
    - 0.003*x727 - 0.003*x728 - 0.003*x729 - 0.003*x730 - 0.003*x731
    - 0.003*x732 - 0.003*x733 - 0.003*x734 - 0.003*x735 - 0.003*x736
    - 0.003*x737 - 0.003*x738 - 0.003*x739 - 0.003*x740 - 0.003*x741
    - 0.003*x742 - 0.003*x743 - 0.003*x744 - 0.003*x745 - 0.003*x746
    - 0.003*x747 - 0.003*x748 - 0.003*x749 - 0.003*x750 - 0.003*x751
    - 0.003*x752 - 0.003*x753 - 0.003*x754 - 0.003*x755 - 0.003*x756
    - 0.003*x757 - 0.003*x758 - 0.003*x759 - 0.003*x760 - 0.003*x761
    - 0.003*x762 - 0.003*x763 - 0.003*x764 - 0.003*x765 - 0.003*x766
    - 0.003*x767 - 0.003*x768 - 0.003*x769 - 0.003*x770 - 0.003*x771
    - 0.003*x772 - 0.003*x773 - 0.003*x774 + 825.0775*x776 - 0.01377*x898
    - 0.2507*x899 + 410.8*x6187 + 138.42*x6188 + 410.8*x6190 - 0.3*x6784
    - 0.3*x6785 - 0.3*x6788 - 0.3*x6789  - 4719.72);

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
