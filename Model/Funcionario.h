/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */


#ifndef _FUNCIONARIO_H
#define _FUNCIONARIO_H

#include "Pessoa.h"


class Funcionario: public Pessoa {
public: 
	
float getSalario();
	
/**
 * @param value
 */
void setSalario(float value);
	
int getRegistro();
	
/**
 * @param value
 */
void setRegistro(int value);
private: 
	float salario;
	int registro;
};

#endif //_FUNCIONARIO_H