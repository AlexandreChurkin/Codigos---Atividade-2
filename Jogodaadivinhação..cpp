#include<iostream>
using namespace std;

int main(){
	
	// Jogo da adivinhacao.
	 
	int numSecreto = 9;
	int numUsuario = 0;
	
	cout << "Digite um numero: ";
	cin >> numUsuario;
	
	if(numUsuario == numSecreto){
	cout << "Numero Correto.";
	}
	else{
	cout <<"Numero Incorreto.";	
	}
	
	
	
	
	return 0;
}
