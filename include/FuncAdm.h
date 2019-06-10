/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */


#ifndef _FUNCADM_H
#define _FUNCADM_H

#include "Funcionario.h"
#include "Pessoa.h"
#include "../include/Aluno.h"
#include "../include/ManagerAluno.h"
#include <iostream>
#include <string>
using namespace std;

class FuncAdm: public Funcionario {
	private: 
		string _setor;

	public: 
		FuncAdm(string nome, string dataNascimento, string sexo, string endereco, long telefone, float salario, int registro, string setor );
		FuncAdm();
		~FuncAdm();
		string getSetor();
		void setSetor(string value);

		Aluno* cadastrarAluno(ManagerAluno &mAluno);

};

#endif //_FUNCADM_H