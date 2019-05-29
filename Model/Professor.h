/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */


#ifndef _PROFESSOR_H
#define _PROFESSOR_H

#include "Funcionario.h"
#include <iostream>

class Professor: public Funcionario {
public: 
	
string getDisciplina();
	
/**
 * @param value
 */
void setDisciplina(string value);
	
vector<int> getTurmas();
	
/**
 * @param value
 */
void setTurmas(vector<int> value);
private: 
	string disciplina;
	vector<int> turmas;
};

#endif //_PROFESSOR_H