//dudumusta

#include<iostream>
#include<clocale>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero;
	std::cout <<"Digite um número:\n";
	std::cin >> numero;
	
	if (numero > 10 ){
		std::cout << "incorreto, tente novamente!"; 
	}
	else if (numero < 1){
		std::cout << "incorreto, tente novamente!";
	}
	


}
