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
		string _disciplina;
		//vector<int> _turmas;

	public: 
		Professor(string nome, string dataNascimento, string sexo, string endereco, long telefone, float salario, int registro, string disciplina );
		~Professor();
		//Professor
		virtual string getDisciplina();
		virtual void setDisciplina(string value);
			
		/*virtual vector<int> getTurmas();
		virtual void setTurmas(vector<int> value);*/

};

#endif //_PROFESSOR_H