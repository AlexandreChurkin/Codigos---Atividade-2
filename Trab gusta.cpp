#include <iostream>

int main () {
	int L;
	int L1;
	int L2;
	int l;
	int l1;
	int l2;
	float p1;
	float p2;
	
	std::cout << "De valores aos 3 lados do triangulo 1 \n";
	std::cin >> L;
	std::cin >> L1;
	std::cin >> L2;
	p1 = (L+L1+L2)/2;
	std::cout << "Essa e a area do triangulo 1  : " << p1;
	
	std::cout << "\n De valores aos 3 lados do triangulo 2 \n";
	std::cin >> l;
	std::cin >> l1;
	std::cin >> l2;
	p2 = (l+l1+l2)/2;
	std::cout << "\n Essa e a area do triangulo 2   : " << p2;
	
	if ( p1 > p2)
	std::cout << "\n \n O tringulo 1 e maior";
	
	else if ( p2 > p1)
	std::cout << "\n O tringulo 2 e maior";
	
	else if (p1 = p2)
	
	std::cout << "\n as areas são iguais";

	
	
	
	return 0;
}
