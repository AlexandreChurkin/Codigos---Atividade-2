#include <iostream>
#include <cmath>

int main (){

    float n1=0  ;
    float n2=0  ;
    float uni=0 ;

    std ::cout << "Digite um numero para conversao\n";
    std ::cin  >> n1 ;
    std ::cout << "Digite agora a unidade de medida para conversao\n"
    << " Sendo que : po = 1, pe = 2, ja= 3, mi=4, cm = 5 e km = 6\n"    ;
    std ::cin  >> uni ;

     if (uni == 1 )
      n2= n1 * 39.37;

     else if (uni == 2)
      n2 = n1 * 3.281;

     else if (uni == 3)
      n2 = n1 * 1.094;

     else if (uni == 4)
      n2 = n1 * 1609;

     else if (uni == 5)
      n2 = n1 * 100;

     else
      n2 = n1 * 1000 ;

    std ::cout << "este e seu numero na unidade desejada\n";
    std ::cout<< n2  ;


    return 0 ;
}
