#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="launch";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x4,x23,x17,x7,x2,x5,x24,x18,x8,x3,x6,x25,x19,x9,x14,x15,x16,x20,x21,x22,x10;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x10); 

   fclose(fp);
   res=-(-(5272.77*(pow(x1,1.2781)*pow(x4,(-0.1959))*pow(x23,2.4242)*pow(x17,0.38745)*pow(x7,(-0.9904
 )) +pow( x2,1.2781)*pow(x5,(-0.1959))*pow(x24,2.4242)*pow(x18,0.38745)*pow(x8,(-0.9904)) +pow( x3
 ,1.2781)*pow(x6,(-0.1959))*pow(x25,2.4242)*pow(x19,0.38745)*pow(x9,(-0.9904))) + 0.185214
 *(10.3027592771433*pow(x1,0.3322)*pow(x23,(-1.5935))*pow(x7,0.2362)*pow(x14,0.1079 )+
  10.3027592771433*pow(x2,0.3322)*pow(x24,(-1.5935))*pow(x8,0.2362)*pow(x15,0.1079 )+
  7.94328234724281*pow(x3,0.3322)*pow(x25,(-1.5935))*pow(x9,0.2362)*pow(x16,0.1079)) +
  160.99*pow((0.001*x20),(-0.146)) + 282.874*pow((0.001*x20),0.648 )+ 160.99*pow((0.001
 *x21),(-0.146)) + 282.874*pow((0.001*x21),0.648 )+ 181.806*pow((0.001*x22),0.539
  )+ 232.57*pow((0.001*x22),0.772 )+ 38.0226256753606*(2.509*pow((0.001*x20),0.736
  )+ 0.0002085*x20 + 0.9744*pow((0.001*x20),(-0.229))) + 38.0226256753606*(
 2.509*pow((0.001*x21),0.736 )+ 0.0002085*x21 + 0.9744*pow((0.001*x21),(-0.229)))
  + 8.51138038202377*(7.05e-5*x22 - 0.000845197400305967*pow((0.001*x22),(-
 1.33)) + 52.5264761174087*pow((0.001*x22),0.498)) + 0.1637577*pow((1000*x10),
 0.786 )+ 0.125678613298076*pow((1000*x10),0.786 )+ 85*pow((0.003*x7 + 0.003*x8 +
  0.003*x9),0.46))  + 850.76);

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
