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

		float _salario;
		int _registro;

		string _nome;
		string _dataNascimento;
		string _sexo;
		string _endereco;
		long _telefone;

	public: 
		Professor(string nome, string dataNascimento, string sexo, string endereco, long telefone, float salario, int registro, string disciplina );
		~Professor();
		//Professor
		virtual string getDisciplina();
		virtual void setDisciplina(string value);
			
		/*virtual vector<int> getTurmas();
		virtual void setTurmas(vector<int> value);*/

		//Funcionario
		virtual float getSalario();
		virtual void setSalario(float value);

		virtual int getRegistro();
		virtual void setRegistro(int value);

		//Pessoa
		virtual string getNome();
		virtual void setNome(string value);

		virtual string getNascimento();
		virtual void setNascimento(string value);
			
		virtual string getSexo();
		virtual void setSexo(string value);
			
		virtual string getEndereco();
		virtual void setEndereco(string value);
			
		virtual long getTelefone();
		virtual void setTelefone(long value);

};

#endif //_PROFESSOR_H