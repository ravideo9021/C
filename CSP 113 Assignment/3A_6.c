//Calculation of Number of Illiterate Men and women

#include <stdio.h>

int main(){
    int TotalPopulation = 80000;
    int TotalMen = 0.52*80000;
    int TotalWomen = 0.48*80000;

    int TotalLit = 0.48*80000;
    int LitMen = 0.35*80000;
    int LitWomen = TotalLit - LitMen;

    int IlitMen = TotalMen - LitMen;
    int IlitWomen = TotalWomen - LitWomen;
    
    printf("Total Illiterate Men = %d\nTotal Illiterate Women = %d", IlitMen, IlitWomen);

  return 0;
}