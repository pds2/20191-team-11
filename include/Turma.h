/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */


#ifndef _TURMA_H
#define _TURMA_H

#include <set>
#include "Historico.h"
#include <string>

using namespace std;

class Turma {

private: 
	string nome;
	int _identificador;
	set<int> _disciplinas;
	set<int> _alunos;

public: 
	Turma(string,int,set<int>,set<int>);
	Turma(string,int);
	Turma();
	~Turma();
	int getId();
	set<int> getDisciplinas();
	void setDisciplinas(set<int>);

	set<int> getAlunos();
	void setAlunos(set<int> value);

	int getIdentificador();
	void setIdentificador(int value);

	void insereAluno(int);
	void removeAluno(int);

	void insereDisciplina(int);
	void removeDisciplina(int);

	string getNome();
	void setNome(string);
};

#endif //_TURMA_H