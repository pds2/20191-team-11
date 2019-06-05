/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */
#ifndef _ALUNO_H
#define _ALUNO_H

#include "Pessoa.h"
#include <iostream>
#include <string>

using namespace std;


class Aluno: public Pessoa {
	private: 
		int _matricula;
		string _nomeResponsavelLegal;
		//Historico historico;
		int _turma;

	public: 

	Aluno(string nome, string dataNascimento, string sexo, string endereco, long telefone, int matricula, string nomeResponsavelLegal, int turma );
	~Aluno();
	virtual float CalculaNota(int disciplina);


	virtual int getMatricula();
	virtual void setMatricula(int value);
		
	virtual string getNomeResponsavelLegal();
	virtual void setNomeResponsavelLegal(string value);

	virtual int getTurma();
	virtual void setTurma(int value);

	/*virtual Historico getHistorico();
	virtual void setHistorico(Historico value);*/

};

#endif //_ALUNO_H