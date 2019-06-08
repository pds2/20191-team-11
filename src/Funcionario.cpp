/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */

#include "../include/Pessoa.h"
#include "../include/Funcionario.h"
#include <iostream>
#include <string>
using namespace std;

Funcionario::~Funcionario(){}

Funcionario::Funcionario(){}

Funcionario::Funcionario(string nome,string dataNascimento, string sexo, string endereco, long telefone, float salario, int registro ) :
    Pessoa(nome,dataNascimento,sexo,endereco,telefone),  _salario(salario) , _registro(registro) {};



float Funcionario::getSalario(){
    return this->_salario;
}
void Funcionario::setSalario(float value){
    this->_salario = value;
}
int Funcionario::getRegistro(){
    return this->_registro;
}
void Funcionario::setRegistro(int value){
    this->_registro = value;
}