#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="btest14";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x50); 
   fscanf(fp,"%f", &x51); 
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
   fscanf(fp,"%f", &x72); 
   fscanf(fp,"%f", &x73); 
   fscanf(fp,"%f", &x74); 
   fscanf(fp,"%f", &x75); 
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &x77); 
   fscanf(fp,"%f", &x78); 
   fscanf(fp,"%f", &x79); 
   fscanf(fp,"%f", &x80); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x88); 

   fclose(fp);
   res=- 0.00277058963688652*x46 - 0.00193837893369775*x47
  - 0.00220047178114988*x48 - 0.00180514212786544*x49
  - 5.19262105700267E-5*x50 - 4.41651830845582E-5*x51
  - 0.00138597026650268*x52 - 0.000854469636677801*x53
  - 0.000673659295060009*x54 - 0.000773222141927398*x55
  - 0.000796808114183878*x56 - 0.00108341997984622*x57
  - 0.00103738281594038*x58 - 0.0011586251707379*x59
  - 0.00105806546907058*x60 - 5.67747426883499E-5*x61
  - 4.74857483397795E-5*x62 - 0.00111997985828223*x63
  - 0.000780409535511951*x64 - 0.000825031318188839*x65
  - 0.000277553576166808*x66 - 0.000275387748704053*x67
  - 0.000628802526075812*x68 - 0.000527790965221478*x69
  - 8.53443313273134E-5*x70 - 5.4578415174783E-5*x71
  - 0.00569784628817507*x72 - 0.00555511546696356*x73
  - 0.075561801997854*x74 - 0.00294835032723151*x75
  - 0.0019342371365832*x76 - 0.0252206173502715*x77
  - 0.0279391730675312*x78 - 0.0048665762424357*x79
  - 0.000183752966921342*x80 - 7.84812312135553E-5*x81
  - 7.73269615916982E-5*x82 - 8.2567519589144E-5*x83
  - 0.00479455338735197*x84 - 0.000826919880559692*x85
  - 0.000290693364720465*x86 - 0.00043605075805244*x87
  - 0.000879089966067127*x88  + 1.46100504790011;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
