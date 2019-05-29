/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */


#ifndef _ALUNO_H
#define _ALUNO_H

#include "Pessoa.h"
#include <iostream>


class Aluno: public Pessoa {
public: 
	
/**
 * @param disciplina
 */
float CalculaNota(int disciplina);
	
int getMatricula();
	
/**
 * @param value
 */
void setMatricula(int value);
	
string getPais();
	
/**
 * @param value
 */
void setPais(string value);
	
Historico getHistorico();
	
/**
 * @param value
 */
void setHistorico(Historico value);
	
int getTurma();
	
/**
 * @param value
 */
void setTurma(int value);
private: 
	int matricula;
	string pais;
	Historico historico;
	int turma;
};

#endif //_ALUNO_H