//matheuscamargo

#include<iostream>
#include<clocale>
	
int main(){
	setlocale(LC_ALL, "Portuguese");
	std::string nome;
	float pretencao;
	
	std::cout << "Digite seu nome:\n";
	std::cin >> nome;
	
	std::cout << "Qual sua pretensão salarial?\n";
	std::cin >> pretencao;
	
	if (pretencao <= 1300){
		std::cout <<"A vaga disponivel para você é Auxiliar de Produção!";
	}
	else if(pretencao < 2500 && pretencao > 1300){
		std::cout <<"A vaga disponível para você é Liderança!";
	}
	else if(pretencao > 2500){
		std::cout << "Não há vagas disponíveis para você nessa empresa!";
	}
	return 0;
}
