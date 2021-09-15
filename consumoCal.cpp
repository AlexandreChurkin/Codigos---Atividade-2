#include<iostream>
using namespace std;

int main(){
	
	// esse algoritmo ira informar a quantidade de calorias a ser consumida baseado em seu peso e seu objetivo.
	
	float peso;
	float caloriasMin;
	float caloriasMax;
	int objetivo;
	
	cout << "Peso: ";
	cin >> peso;
	cout << "Informe seu objetivo: \n 1- Emagrecer \n 2- Manter Peso \n 3- Engordar. ";
	cin >> objetivo;
	
	switch(objetivo){
		case 1:
		caloriasMin = 20 * peso;
		caloriasMax = 25 * peso;
	cout << " consuma entre: "	<< caloriasMin << " a "	<< caloriasMax;
	break;
		case 2:
		caloriasMin = 25 * peso;
		caloriasMax = 30 * peso;
	cout << " consuma entre: "	<< caloriasMin << " a "	<< caloriasMax;
	break;
	case 3:
		caloriasMin = 30 * peso;
		caloriasMax = 35 * peso;
	cout << " consuma entre: "	<< caloriasMin << " a "	<< caloriasMax;
	break;
}
	
	return 0;
}
