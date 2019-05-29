/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */


#ifndef _FUNCADM_H
#define _FUNCADM_H

#include "Funcionario.h"
#include <iostream>

class FuncAdm: public Funcionario {
public: 
	
string getSetor();
	
/**
 * @param value
 */
void setSetor(string value);
private: 
	string setor;
};

#endif //_FUNCADM_H