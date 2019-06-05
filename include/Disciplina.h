/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */


#ifndef _DISCIPLINA_H
#define _DISCIPLINA_H

#include <iostream>
#include <string>

using namespace std;

class Disciplina {

	private: 
		string _nome;
		int _identificador;
		int _cargaHoraria;
	
	public: 
		Disciplina(string nome, int identificador , int cargaHoraria);
		~Disciplina();
		string getNome();
		void setNome(string value);
			
		int getIdentificador();
		void setIdentificador(int value);
			
		int getCargaHoraria();
		void setCargaHoraria(int value);

};

#endif //_DISCIPLINA_H