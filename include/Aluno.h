/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */
#ifndef _ALUNO_H
#define _ALUNO_H

#include "Pessoa.h"
#include "Materia.h"
#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;


class Aluno: public Pessoa {
	private: 
		int _matricula;
		string _nomeResponsavelLegal;
    	set<int> _materiasInseridas;
		int _turma;

	public: 

	Aluno(string nome, string dataNascimento, string sexo, string endereco, long telefone, int matricula, string nomeResponsavelLegal, int turma );
	Aluno();
	~Aluno();
	int getId();

	set<int> getMateria();
	void setMateria(set<int> materiasInseridas);

	float CalculaNota(int disciplina);
	float CalculaAproveitamento(int disciplina);


	int getMatricula();
	void setMatricula(int value);
		
	string getNomeResponsavelLegal();
	void setNomeResponsavelLegal(string value);

	int getTurma();
	void setTurma(int value);

	/*Historico getHistorico();
	void setHistorico(Historico value);*/

};

#endif //_ALUNO_H