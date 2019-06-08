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
    private:
        string _nome;
		string _dataNascimento;
		string _sexo;
		string _endereco;
		long _telefone;
    public: 
        Pessoa(string nome, string dataNascimento, string sexo, string endereco, long telefone);
        Pessoa();
        ~Pessoa();
        string getNome();
        void setNome(string value);

        string getNascimento();
        void setNascimento(string value);
            
        string getSexo();
        void setSexo(string value);
            
        string getEndereco();
        void setEndereco(string value);
            
        long getTelefone();
        void setTelefone(long value);

};

#endif //_PESSOA_H