/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */


#ifndef _FUNCADM_H
#define _FUNCADM_H

#include "Funcionario.h"
#include "Pessoa.h"
#include <iostream>
#include <string>
using namespace std;

class FuncAdm: public Funcionario {
	private: 
		string _setor;

		float _salario;
		int _registro;

		string _nome;
		string _dataNascimento;
		string _sexo;
		string _endereco;
		int _telefone;

	public: 
		FuncAdm(string nome, string dataNascimento, string sexo, string endereco, int telefone, float salario, int registro, string setor );

		virtual string getSetor();
		virtual void setSetor(string value);

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
			
		virtual int getTelefone();
		virtual void setTelefone(int value);

};

#endif //_FUNCADM_H