#pragma once

#include <iostream>

//Quando voc� n�o indica a visibilidade o encapsulamento
//por padr�o em uma classe ele ser� private
class Pessoa
{
public: 
	std::string Nome;
	int CPF;
	int Matricula;

	//Interessante Criar Construtores
	//Aqui o construtor padr�o j� pode receber valores padr�es desta forma
	Pessoa() :Nome(""), CPF(0), Matricula(0) {}
	//Agora um construtor com par�metros

	Pessoa(std::string NovoNome, int NovoCPF, int NovaMatricula):Nome(NovoNome), CPF(NovoCPF), Matricula(NovaMatricula){}

	void AcessarSistema();
};

