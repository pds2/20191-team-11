/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */


#ifndef _TURMA_H
#define _TURMA_H

#include <vector>
#include <map>
#include "Historico.h"
#include <string>
#include "Disciplina.h"

using namespace std;

class Turma {



private: 
	int _identificador;
	Disciplina _disc[8];
	vector<int> alunos;
	map<int,string> horarios;
	int _serie;

public: 
	
Disciplina getDisciplinas(int codigo);
	
/**
 * @param value
 */
void setDisciplinas(string nome, int identificador , int cargaHoraria);
	
vector<int> getAlunos();
	
/**
 * @param value
 */
void setAlunos(vector<int> value);
	
vector<int> getProfessores();
	
/**
 * @param value
 */
void setProfessores(vector<int> value);
	
map<int,string> getHorarios();
	
/**
 * @param value
 */
void setHorarios(map<int,string> value);
	
int getIdentificador();
	
/**
 * @param value
 */
void setIdentificador(int value);
};

#endif //_TURMA_H