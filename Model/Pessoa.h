/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */


#ifndef _PESSOA_H
#define _PESSOA_H

#include <iostream>

class Pessoa {
public: 
	
string getNome();
	
/**
 * @param value
 */
void setNome(string value);
	
date getNascimento();
	
/**
 * @param value
 */
void setNascimento(date value);
	
string getSexo();
	
/**
 * @param value
 */
void setSexo(string value);
	
string getEndereco();
	
/**
 * @param value
 */
void setEndereco(string value);
	
int getTelefone();
	
/**
 * @param value
 */
void setTelefone(int value);
private: 
	string nome;
	date nascimento;
	string sexo;
	string endereco;
	int telefone;
};

#endif //_PESSOA_H