/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */


#ifndef _PESSOA_H
#define _PESSOA_H

#include <iostream>
#include <string>

using namespace std;

class Pessoa {
public: 
	
virtual string getNome() = 0;
virtual void setNome(string value) = 0;

virtual string getNascimento() = 0;
virtual void setNascimento(string value) = 0;
	
virtual string getSexo() = 0;
virtual void setSexo(string value) = 0;
	
virtual string getEndereco() = 0;
virtual void setEndereco(string value) = 0;
	
virtual int getTelefone() = 0;
virtual void setTelefone(int value) = 0;

};

#endif //_PESSOA_H