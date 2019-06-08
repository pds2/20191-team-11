/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */


#ifndef _FUNCIONARIO_H
#define _FUNCIONARIO_H

#include "Pessoa.h"


class Funcionario: public Pessoa {
    private:
		float _salario;
		int _registro;
    public:
        Funcionario(string nome, string dataNascimento, string sexo, string endereco, long telefone , float salario, int registro);
        Funcionario();
        ~Funcionario();
        float getSalario() ;
        void setSalario(float value) ;
        int getRegistro() ;
        void setRegistro(int value) ;

};

#endif //_FUNCIONARIO_H