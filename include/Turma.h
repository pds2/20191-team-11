/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */


#ifndef _TURMA_H
#define _TURMA_H

#include <set>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Turma {

private: 
	string nome;
	int _identificador;
	set<int> _professores;
	set<int> _alunos;
	int _serie;
	map<int,string> horarios;

public: 
	Turma(string,int,set<int>,set<int>);
	Turma(string,int);
	Turma();
	~Turma();
	int getId();
	set<int> getProfessores();
	void setProfessores(set<int>);

	set<int> getAlunos();
	void setAlunos(set<int> value);

	int getIdentificador();
	void setIdentificador(int value);

	void insereAluno(int);
	void removeAluno(int);

	void insereProfessor(int);
	void removeProfessor(int);

	string getNome();
	void setNome(string);

	
	map<int,string> getHorarios();
	void setHorarios(map<int,string> value);
};

#endif //_TURMA_H