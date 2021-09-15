#include <iostream>
#include <math.h>

int main (){
	char Eq = 'a' ;
	char So = '+' ;
	char Sub = '-' ;
	char M = '*' ;
	char D = '/' ;
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int n4 = 0;

  std :: cout << "Digite a opcao desejada para a equacao ( Para somar use +, para subtrair use - \n "  "para multiplicar use * e para dividir use / ) \n " ;
  std :: cin >> Eq  ;
  std :: cout << "Digite o primeiro numero \n" ;
  std :: cin >> n1  ;
  std :: cout << "Digite o segundo numero \n" ;
  std :: cin >> n2  ;
  
    if ( Eq == So ) {
    	
	 	n3 = n1 + n2 ;
	 
	} 
	else if ( Eq == Sub) {
	 
	 	n3 = n1 - n2 ;
	 
	}
	else if ( Eq == M ) {
	 	
		n3 = n1 * n2 ;
	 
	}
	else  {
	 	
		n3 = n1 / n2 ;
	
	}
	
	if ( n3 < 0) {
		n4 = n3 * -1 ;
	 std::cout << n4 ;
	} 
	else {
	 std::cout << n3 ;
	}

	
	
	return 0 ;
 }
