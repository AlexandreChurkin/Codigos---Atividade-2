#include <iostream>
#include <locale.h>
#include <math.h>


int main () {
	
	setlocale(LC_ALL,"Portuguese");

int n1;
int n2;
int n3;
float x1;
float x2;
float De;
float RDe;

// Inicio do desenvolvimento/solução do enunciado

std::cout << "Digite o valor do n1/A ";
std::cin >> n1;
std::cout << "Digite o valor do n2/B ";
std::cin >> n2;
std::cout << "Digite o valor do n3/C ";
std::cin >> n3;
std::cout << "Usaremos a seguinte formula para obter o delta: \n De = n2 * n2 - 4 * n1 * n3 \n";
De = n2 * n2 - 4* n1 * n3;
std::cout << "De ="<<De;
RDe = sqrt (De);
x1 =  (-(n2) -(RDe)) / (2*n1);
x2 =  (-(n2) +(RDe)) / (2*n1);

std::cout << "\n \n | S = " "{"<< x1 << ", " << x2 << "} |" ;






return 0;
} 
