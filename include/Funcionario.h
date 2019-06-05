/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */


#ifndef _FUNCIONARIO_H
#define _FUNCIONARIO_H

#include "Pessoa.h"


class Funcionario: public Pessoa {
public: 
	
virtual float getSalario() = 0;
virtual void setSalario(float value) = 0;
virtual int getRegistro() = 0;
virtual void setRegistro(int value) = 0;

};

#endif //_FUNCIONARIO_H