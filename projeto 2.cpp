//matheuscamargo

#include<iostream>
#include<clocale>
	
int main(){
	setlocale(LC_ALL, "Portuguese");
	std::string nome;
	float pretencao;
	
	std::cout << "Digite seu nome:\n";
	std::cin >> nome;
	
	std::cout << "Qual sua pretens�o salarial?\n";
	std::cin >> pretencao;
	
	if (pretencao <= 1300){
		std::cout <<"A vaga disponivel para voc� � Auxiliar de Produ��o!";
	}
	else if(pretencao < 2500 && pretencao > 1300){
		std::cout <<"A vaga dispon�vel para voc� � Lideran�a!";
	}
	else if(pretencao > 2500){
		std::cout << "N�o h� vagas dispon�veis para voc� nessa empresa!";
	}
	return 0;
}
