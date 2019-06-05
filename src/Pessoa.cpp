/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */

#include "../include/Pessoa.h"
#include <iostream>
#include <string>
using namespace std;

Pessoa::~Pessoa(){}

Pessoa::Pessoa(
        string nome, 
        string dataNascimento, 
        string sexo, 
        string endereco, 
        long telefone
        ){
    this->_nome = nome;
    this->_dataNascimento = dataNascimento;
    this->_sexo = sexo;
    this->_endereco = endereco;
    this->_telefone = telefone;
}

// Pessoa

string Pessoa::getNome(){
    return this->_nome;
}

void Pessoa::setNome(string value){
    this->_nome = value;
}

string Pessoa::getNascimento(){
    return this->_dataNascimento;
}

void Pessoa::setNascimento(string value){
    this->_dataNascimento = value;
}
	
string Pessoa::getSexo(){
    return this->_sexo;
}
void Pessoa::setSexo(string value){
    this->_sexo = value;
}
	
string Pessoa::getEndereco(){
    return this->_endereco;
}
void Pessoa::setEndereco(string value){
    this->_endereco = value;
}
	
long Pessoa::getTelefone(){
    return this->_telefone;
}
void Pessoa::setTelefone(long value) {
    this->_telefone = value;
}