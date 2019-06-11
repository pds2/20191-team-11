/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */


#ifndef _PROFESSOR_H
#define _PROFESSOR_H

#include "Funcionario.h"
#include "Pessoa.h"
#include <iostream>
#include <string>
using namespace std;

class Professor: public Funcionario {
	private: 
		int _idDisciplina;

	public: 
		Professor(string nome, string dataNascimento, string sexo, string endereco, long telefone, float salario, int registro, int idDisciplina );
		Professor();
		~Professor();
		//Professor
		virtual int getDisciplina();
		virtual void setDisciplina(int value);

};

#endif //_PROFESSOR_H