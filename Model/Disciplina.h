/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */


#ifndef _DISCIPLINA_H
#define _DISCIPLINA_H

#include <iostream>

class Disciplina {
public: 
	
string getNome();
	
/**
 * @param value
 */
void setNome(string value);
	
int getIdentificador();
	
/**
 * @param value
 */
void setIdentificador(int value);
	
int getCargaHoraria();
	
/**
 * @param value
 */
void setCargaHoraria(int value);
private: 
	string nome;
	int identificador;
	int cargaHoraria;
};

#endif //_DISCIPLINA_H