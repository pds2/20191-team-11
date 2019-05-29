/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */


#ifndef _TURMA_H
#define _TURMA_H

#include <vector>
#include <map>
#include "Historico.h"

using namespace std;

class Turma {
public: 
	
vector<int> getDisciplinas();
	
/**
 * @param value
 */
void setDisciplinas(vector<int> value);
	
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
private: 
	vector<int> disciplinas;
	vector<int> alunos;
	vector<int> professores;
	map<int,string> horarios;
	int identificador;
};

#endif //_TURMA_H